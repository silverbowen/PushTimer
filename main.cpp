#include "ExerciseEnforcer.h"
#include <unistd.h>
#include <SFML/Audio.hpp>

void countdown(const int interval);

int main()
{
    ExerciseEnforcer exerciseEnforcer;
    PushTimer* pushTimer {&exerciseEnforcer};

    while (true)
    {
        std::string newTimerID {""};
        std::cout << "Enter the name of the exercise: ";
        std::getline(std::cin, newTimerID);

        if (newTimerID == "")
            std::cout << "Exercise can't be blank!\n";
        else
        {
            pushTimer->setTimerID(newTimerID);
            break;
        }
    }

    while (true)
    {
        int newReps {0};
        std::cout << "Enter number of reps: ";
        std::cin >> newReps;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (newReps < 2)
            std::cout << "Reps must be at least 2!\n";
        else
        {
            pushTimer->setReps(newReps);
            break;
        }
    }

    int newIntervalMember {0};
    std::list<int> newInterval {};

    while (newInterval.size() < pushTimer->getReps()-1)
    {
        std::cout << "Enter interval between rep #" << newInterval.size()+1
                  << " and rep #" << newInterval.size()+2 << ": ";
        std::cin >> newIntervalMember;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (!newIntervalMember)
            std::cout << "Interval must be positive!\n";
        else
            newInterval.push_back(newIntervalMember);
    }

    pushTimer->setInterval(newInterval);

    for (int i = 1; i <= pushTimer->getReps(); ++i)
    {
        std::cout << "\n" << pushTimer->getTimerID() << "!!! - Time for rep #" << i << "\n";

        for (int currentInterval : pushTimer->getInterval())
        {
            if (i < pushTimer->getReps())
            {
                std::cout << "Hit enter when you've exercised to start the countdown to rep #"
                          << i + 1 << ".\n";
                std::cin.get();
                std::cout << "Rep #" << i + 1 << " in " << currentInterval << " minutes...\n\n";

                countdown(currentInterval);
            }

            else
            {
                std::cout << "Hit enter when you've exercised to end program.\n";
                std::cin.get();
                std::cout << "Congrats! You're done!\n";
            }
        }
    }
}

void countdown (const int currentInterval)
{
    int countdown = currentInterval * 60;
    sf::SoundBuffer beepBuffer, alarmBuffer;
    sf::Sound alarm, beep;

    if (!beepBuffer.loadFromFile("beep.wav"))
        std::cout << "beep.wav not found!";
    if (!alarmBuffer.loadFromFile("alarm.wav"))
        std::cout << "alarm.wav not found!";

    beep.setBuffer(beepBuffer);

    alarm.setLoop(true);
    alarm.setBuffer(alarmBuffer);

    while (countdown > 60)
    {
        sleep(60);
        countdown -= 60;
        std::cout << countdown / 60 << " minutes\n";
    }

    while (countdown > 1)
    {
        --countdown;
        sleep(1);
        std::cout << countdown << " seconds\n";
        if (countdown <= 10) beep.play();
    }

    sleep(1);
    std::cout << "\nHit enter to stop alarm!";

    do
    {
        alarm.play();
    }
    while (std::cin.get()!='\n');
}
