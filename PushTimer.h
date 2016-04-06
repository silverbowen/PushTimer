#pragma once
#include <string>
#include <iostream>
#include <limits>
#include <list>

class PushTimer
{
public:
    PushTimer();
    PushTimer(const std::string& timerID, int reps, std::list<int>& interval);
    virtual ~PushTimer() = 0;

    virtual void setTimerID(const std::string& timer) {};
    virtual void setReps(int reps) {};
    virtual void setInterval(std::list<int>& interval) {};

    //void readTimer(std::istream& input);
    //void readInterval(std::istream& input);
    //void readReps(std::istream& input);

    virtual const std::string& getTimerID() const;
    virtual const int getReps() const;
    virtual const std::list<int>& getInterval() const;

private:
    std::string timerID {"timer not defined"};
    int reps {0};
    std::list<int> interval {0};
};
