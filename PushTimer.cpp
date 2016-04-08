#include "PushTimer.h"

PushTimer::PushTimer() {} //ctor
PushTimer::PushTimer(const std::string& timerID, int reps, std::list<int>& interval)
    : timerID(timerID), reps(reps), interval(interval) {} //ctor
PushTimer::~PushTimer() {};

const std::string& PushTimer::getTimerID() const
{
    return timerID;
}
const int PushTimer::getReps() const
{
    return reps;
};
const std::list<int>& PushTimer::getInterval() const
{
    return interval;
};
