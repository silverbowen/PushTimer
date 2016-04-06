#include <cxxtest/TestSuite.h>
#include "PushTimer.h"

class TimerTestSuite1 : public CxxTest::TestSuite
{
public:
    void testInstantiateBase(void)
    {
        const PushTimer pushTimer();
        TS_ASSERT(pushTimer);
    }
};
