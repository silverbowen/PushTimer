#include <cxxtest/TestSuite.h>
#include "ExerciseEnforcer.h"

class TimerTestSuite1 : public CxxTest::TestSuite
{
    ExerciseEnforcer exerciseEnforcer;
    PushTimer* pushTimer{&exerciseEnforcer};

public:
    void testExerciseEnforcerTimerID(void)
    {
        TS_ASSERT(pushTimer->getTimerID() != "timer not defined");
        TS_ASSERT(pushTimer->getTimerID() == "ExerciseEnforcer");
    }

    void testExerciseEnforcerReps(void)
    {
        TS_ASSERT(pushTimer->getReps() != 0);
        TS_ASSERT(pushTimer->getReps() == 3);
    }

    void testExerciseEnforcerInterval(void)
    {
        TS_ASSERT(pushTimer->getInterval().front() == 30);
        TS_ASSERT(pushTimer->getInterval().size() == 1);
    }
};
