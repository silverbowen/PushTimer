/* This suite tests a parameterized instantiation of an
   ExerciseEnforcer object assigned to a PushTimer pointer
   for polymorphism.
*/

#include <cxxtest/TestSuite.h>
#include "ExerciseEnforcer.h"

class TimerTestSuite2 : public CxxTest::TestSuite
{
    std::string timerID {"Push Ups!"};
    int reps {5};
    std::list<int> interval {30,40,50};
    ExerciseEnforcer exerciseEnforcer {timerID, reps, interval};
    PushTimer* pushTimer {&exerciseEnforcer};


public:
    void testExerciseEnforcerTimerID(void)
    {
        TS_ASSERT(pushTimer->getTimerID() != "ExerciseEnforcer");
        TS_ASSERT(pushTimer->getTimerID() == "Push Ups!");
    }

    void testExerciseEnforcerReps(void)
    {
        TS_ASSERT(pushTimer->getReps() != 3);
        TS_ASSERT(pushTimer->getReps() == 5);
    }

    void testExerciseEnforcerInterval(void)
    {
        auto intervalIt = interval.begin();
        for (auto it : pushTimer->getInterval())
        {
            TS_ASSERT(it == *intervalIt);
            ++intervalIt;
        }
        TS_ASSERT(pushTimer->getInterval().size() == interval.size());
    }
};
