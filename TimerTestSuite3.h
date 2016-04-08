/* This suite tests the set functions of a parameterized
   instantiation of an ExerciseEnforcer object assigned
   to a PushTimer pointer for polymorphism.
*/

#include <cxxtest/TestSuite.h>
#include "ExerciseEnforcer.h"

class TimerTestSuite3 : public CxxTest::TestSuite
{
    std::string timerID {"Push Ups!"},
                newTimerID {"New Exercise!"};
    int reps {5},
        newReps {7};
    std::list<int> interval {30,40,50},
                   newInterval {60, 70, 80};
    ExerciseEnforcer exerciseEnforcer {timerID, reps, interval};
    PushTimer* pushTimer {&exerciseEnforcer};

public:

    void testExerciseEnforcerTimerID(void)
    {
        pushTimer->setTimerID(newTimerID);

        TS_ASSERT(pushTimer->getTimerID() != "Push Ups!");
        TS_ASSERT(pushTimer->getTimerID() == "New Exercise!");
    }

    void testExerciseEnforcerReps(void)
    {
        pushTimer->setReps(newReps);

        TS_ASSERT(pushTimer->getReps() != 5);
        TS_ASSERT(pushTimer->getReps() == 7);
    }

    void testExerciseEnforcerInterval(void)
    {
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
