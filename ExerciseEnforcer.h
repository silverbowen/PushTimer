#pragma once
#include "PushTimer.h"

class ExerciseEnforcer : public PushTimer
{
public:
    ExerciseEnforcer();
    ExerciseEnforcer(const std::string& timerID, const int reps, std::list<int>& interval);
    ~ExerciseEnforcer();

    void setTimerID(const std::string& timer);
    void setReps(int reps);
    void setInterval(std::list<int>& interval);

    //void readTimer(std::istream& input);
    //void readInterval(std::istream& input);
    //void readReps(std::istream& input);

    const std::string& getTimerID() const override;
    const int getReps() const override;
    const std::list<int>& getInterval() const override;

private:
    std::string timerID{"ExerciseEnforcer"};
    int reps{3};
    std::list<int> interval{30};
};
