#include <cxxtest/TestSuite.h>
#include "ExerciseEnforcer.h"

class TimerTestSuite3 : public CxxTest::TestSuite
{
    std::string exercise{"Push Ups!"},
                newExercise{"New Exercise!"};
    int reps{5},
        newReps{7};
    std::list<int> interval{30,40,50},
                   newInterval{60, 70, 80};

public:

     void testExerciseEnforcerTimerID(void)
    {
        ExerciseEnforcer exerciseEnforcer(exercise, reps, interval);
        PushTimer* pushTimer = &exerciseEnforcer;
        pushTimer->setTimerID(newExercise);

        TS_ASSERT(pushTimer->getTimerID() != "Push Ups!");
        TS_ASSERT(pushTimer->getTimerID() == "New Exercise!");
    }

    void testExerciseEnforcerReps(void)
    {
        ExerciseEnforcer exerciseEnforcer(exercise, reps, interval);
        PushTimer* pushTimer = &exerciseEnforcer;
        pushTimer->setReps(newReps);

        TS_ASSERT(pushTimer->getReps() != 5);
        TS_ASSERT(pushTimer->getReps() == 7);
    }

    void testExerciseEnforcerInterval(void)
    {
        ExerciseEnforcer exerciseEnforcer(exercise, reps, interval);
        PushTimer* pushTimer = &exerciseEnforcer;
        pushTimer->setInterval(newInterval);

        auto intervalIt = newInterval.begin();
        for (auto it : pushTimer->getInterval())
        {
            TS_ASSERT(it == *intervalIt);
            ++intervalIt;
        }
        TS_ASSERT(pushTimer->getInterval().size() == newInterval.size());
    }
};
