/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_TimerTestSuite1_init = false;
#include "/home/silverbowen/Git/PushTimer/TimerTestSuite1.h"

static TimerTestSuite1 suite_TimerTestSuite1;

static CxxTest::List Tests_TimerTestSuite1 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TimerTestSuite1( "TimerTestSuite1.h", 4, "TimerTestSuite1", suite_TimerTestSuite1, Tests_TimerTestSuite1 );

static class TestDescription_suite_TimerTestSuite1_testInstantiateBase : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerTestSuite1_testInstantiateBase() : CxxTest::RealTestDescription( Tests_TimerTestSuite1, suiteDescription_TimerTestSuite1, 7, "testInstantiateBase" ) {}
 void runTest() { suite_TimerTestSuite1.testInstantiateBase(); }
} testDescription_suite_TimerTestSuite1_testInstantiateBase;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
