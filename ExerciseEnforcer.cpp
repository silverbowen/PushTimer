#include "ExerciseEnforcer.h"

ExerciseEnforcer::ExerciseEnforcer() {} //ctor
ExerciseEnforcer::ExerciseEnforcer(const std::string& timerID, const int reps, std::list<int>& interval)
    : timerID(timerID), reps(reps), interval(interval) {} //ctor
ExerciseEnforcer::~ExerciseEnforcer() {};

void ExerciseEnforcer::setTimerID(const std::string& timerID)
{
    this->timerID = timerID;
}
void ExerciseEnforcer::setReps(int reps)
{
    this->reps = reps;
}
void ExerciseEnforcer::setInterval(std::list<int>& interval)
{
    this->interval = interval;
}

const std::string& ExerciseEnforcer::getTimerID() const
{
    return timerID;
}
const int ExerciseEnforcer::getReps() const
{
    return reps;
}
const std::list<int>& ExerciseEnforcer::getInterval() const
{
    return interval;
}
