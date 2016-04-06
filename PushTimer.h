#pragma once
#include <string>
#include <iostream>
#include <limits>

class PushTimer
{
public:
    PushTimer();
    //PushTimer(const std::string& timer, Interval& interval, Reps& reps);

    //void setTimer(const std::string& timer);
    //void setInterval(Interval& interval);
    //void setReps(Reps& reps);

    //void readTimer(std::istream& input);
    //void readInterval(std::istream& input);
    //void readReps(std::istream& input);

    //Interval* getInterval() const;
    //Reps* getReps() const;

private:
    std::string timer = "timer not defined";
    //Reps reps();
    //Interval interval();
};
