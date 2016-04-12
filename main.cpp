#include "ExerciseEnforcer.h"
#include <unistd.h>
#include "TerminalCountdown.h"


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

    int repIndex = 1;
    for (int currentInterval : pushTimer->getInterval())
    {
        std::cout << "\n" << pushTimer->getTimerID() << "!!! - Time for rep #" << repIndex << "\n"
                  << "Hit enter when you've exercised to start the countdown to rep #"
                  << repIndex+1 << ".\n";
        std::cin.get();
        std::cout << "Rep #" << repIndex+1 << " in " << currentInterval << " minutes...\n\n";

        TerminalCountdown terminalCountdown(currentInterval);
        ++repIndex;
    }

    std::cout << "Hit enter when you've exercised to end program.\n";
    std::cin.get();
    std::cout << "Congrats! You're done!\n";
}
