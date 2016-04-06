#include "PushTimer.h"

PushTimer::PushTimer() {} //ctor
PushTimer::PushTimer(const std::string& timerID, int reps, std::list<int>& interval)
    : timerID(timerID), reps(reps), interval(interval) {} //ctor
PushTimer::~PushTimer() {};


//void PushTimer::readTimer(std::istream& input)
//{
//    getline(input, this->timer);
//}
//void PushTimer::readInterval(std::istream& input)
//{
//    input >> this->interval;
//    std::cin.clear();  // reset stream and ignore, prevents bad input screen loop
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//}
//void PushTimer::readReps(std::istream& input)
//{
//    input >> this->reps;
//    std::cin.clear();  // reset stream and ignore, prevents bad input screen loop
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//}

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
