#include <cxxtest/TestSuite.h>
#include "ExerciseEnforcer.h"

class TimerTestSuite2 : public CxxTest::TestSuite
{
    std::string exercise{"Push Ups!"};
    int reps{5};
    std::list<int> interval{30,40,50};

public:
    void testExerciseEnforcerTimerID(void)
    {
        ExerciseEnforcer exerciseEnforcer(exercise, reps, interval);
        PushTimer* pushTimer = &exerciseEnforcer;

        TS_ASSERT(pushTimer->getTimerID() != "ExerciseEnforcer");
        TS_ASSERT(pushTimer->getTimerID() == "Push Ups!");
    }

    void testExerciseEnforcerReps(void)
    {
        ExerciseEnforcer exerciseEnforcer(exercise, reps, interval);
        PushTimer* pushTimer = &exerciseEnforcer;

        TS_ASSERT(pushTimer->getReps() != 3);
        TS_ASSERT(pushTimer->getReps() == 5);
    }

    void testExerciseEnforcerInterval(void)
    {
        ExerciseEnforcer exerciseEnforcer(exercise, reps, interval);
        PushTimer* pushTimer = &exerciseEnforcer;

        auto intervalIt = interval.begin();
        for (auto it : pushTimer->getInterval())
        {
            TS_ASSERT(it == *intervalIt);
            ++intervalIt;
        }
        TS_ASSERT(pushTimer->getInterval().size() == interval.size());
    }
};
