#include "TerminalCountdown.h"

TerminalCountdown::TerminalCountdown (int intervalToCountdown) : intervalToCountdown(intervalToCountdown)
{
    execute();
}

void TerminalCountdown::execute()
{
    convertintervalToCountdownFromMinutesToSeconds();
    sf::SoundBuffer beepBuffer, alarmBuffer;
    sf::Sound beepSound, alarmSound;

    if (!beepBuffer.loadFromFile("beep.wav"))
        std::cout << "beep.wav not found!";
    if (!alarmBuffer.loadFromFile("alarm.wav"))
        std::cout << "alarm.wav not found!";

    beepSound.setBuffer(beepBuffer);

    alarmSound.setLoop(true);
    alarmSound.setBuffer(alarmBuffer);

    while (intervalToCountdown > 60)
        countdownByMinutes();

    while (intervalToCountdown > 1)
    {
        countdownBySeconds(beepSound);
        if (intervalToCountdown <= 10)
            beepSound.play();
    }

    sleep(1);
    playAlarmUntilEnter(alarmSound);
}

void TerminalCountdown::convertintervalToCountdownFromMinutesToSeconds()
{
    intervalToCountdown *= 60;
}

void TerminalCountdown::countdownByMinutes()
{
    sleep(60);
    intervalToCountdown -= 60;
    std::cout << intervalToCountdown / 60 << " minutes\n";
}

void TerminalCountdown::countdownBySeconds(sf::Sound beepSound)
{
    --intervalToCountdown;
    sleep(1);
    std::cout << intervalToCountdown << " seconds\n";
    if (intervalToCountdown <= 10)
        beepSound.play();
}

void TerminalCountdown::playAlarmUntilEnter(sf::Sound alarmSound)
{
    std::cout << "\nHit enter to stop alarm!";

    do
        alarmSound.play();
    while (std::cin.get()!='\n');
}
