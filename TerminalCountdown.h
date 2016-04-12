#pragma once
#include <unistd.h>
#include <SFML/Audio.hpp>
#include <iostream>

class TerminalCountdown
{
public:
    TerminalCountdown (int intervalToCountdown);

private:
    int intervalToCountdown;

   void execute();
   void convertintervalToCountdownFromMinutesToSeconds();
   void countdownByMinutes();
   void countdownBySeconds(sf::Sound beepSound);
   void playAlarmUntilEnter(sf::Sound alarmSound);
};
