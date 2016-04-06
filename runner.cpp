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

static class TestDescription_suite_TimerTestSuite1_testExerciseEnforcerTimerID : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerTestSuite1_testExerciseEnforcerTimerID() : CxxTest::RealTestDescription( Tests_TimerTestSuite1, suiteDescription_TimerTestSuite1, 10, "testExerciseEnforcerTimerID" ) {}
 void runTest() { suite_TimerTestSuite1.testExerciseEnforcerTimerID(); }
} testDescription_suite_TimerTestSuite1_testExerciseEnforcerTimerID;

static class TestDescription_suite_TimerTestSuite1_testExerciseEnforcerReps : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerTestSuite1_testExerciseEnforcerReps() : CxxTest::RealTestDescription( Tests_TimerTestSuite1, suiteDescription_TimerTestSuite1, 16, "testExerciseEnforcerReps" ) {}
 void runTest() { suite_TimerTestSuite1.testExerciseEnforcerReps(); }
} testDescription_suite_TimerTestSuite1_testExerciseEnforcerReps;

static class TestDescription_suite_TimerTestSuite1_testExerciseEnforcerInterval : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerTestSuite1_testExerciseEnforcerInterval() : CxxTest::RealTestDescription( Tests_TimerTestSuite1, suiteDescription_TimerTestSuite1, 22, "testExerciseEnforcerInterval" ) {}
 void runTest() { suite_TimerTestSuite1.testExerciseEnforcerInterval(); }
} testDescription_suite_TimerTestSuite1_testExerciseEnforcerInterval;

#include "/home/silverbowen/Git/PushTimer/TimerTestSuite2.h"

static TimerTestSuite2 suite_TimerTestSuite2;

static CxxTest::List Tests_TimerTestSuite2 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TimerTestSuite2( "TimerTestSuite2.h", 4, "TimerTestSuite2", suite_TimerTestSuite2, Tests_TimerTestSuite2 );

static class TestDescription_suite_TimerTestSuite2_testExerciseEnforcerTimerID : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerTestSuite2_testExerciseEnforcerTimerID() : CxxTest::RealTestDescription( Tests_TimerTestSuite2, suiteDescription_TimerTestSuite2, 11, "testExerciseEnforcerTimerID" ) {}
 void runTest() { suite_TimerTestSuite2.testExerciseEnforcerTimerID(); }
} testDescription_suite_TimerTestSuite2_testExerciseEnforcerTimerID;

static class TestDescription_suite_TimerTestSuite2_testExerciseEnforcerReps : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerTestSuite2_testExerciseEnforcerReps() : CxxTest::RealTestDescription( Tests_TimerTestSuite2, suiteDescription_TimerTestSuite2, 20, "testExerciseEnforcerReps" ) {}
 void runTest() { suite_TimerTestSuite2.testExerciseEnforcerReps(); }
} testDescription_suite_TimerTestSuite2_testExerciseEnforcerReps;

static class TestDescription_suite_TimerTestSuite2_testExerciseEnforcerInterval : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerTestSuite2_testExerciseEnforcerInterval() : CxxTest::RealTestDescription( Tests_TimerTestSuite2, suiteDescription_TimerTestSuite2, 29, "testExerciseEnforcerInterval" ) {}
 void runTest() { suite_TimerTestSuite2.testExerciseEnforcerInterval(); }
} testDescription_suite_TimerTestSuite2_testExerciseEnforcerInterval;

#include "/home/silverbowen/Git/PushTimer/TimerTestSuite3.h"

static TimerTestSuite3 suite_TimerTestSuite3;

static CxxTest::List Tests_TimerTestSuite3 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TimerTestSuite3( "TimerTestSuite3.h", 4, "TimerTestSuite3", suite_TimerTestSuite3, Tests_TimerTestSuite3 );

static class TestDescription_suite_TimerTestSuite3_testExerciseEnforcerTimerID : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerTestSuite3_testExerciseEnforcerTimerID() : CxxTest::RealTestDescription( Tests_TimerTestSuite3, suiteDescription_TimerTestSuite3, 15, "testExerciseEnforcerTimerID" ) {}
 void runTest() { suite_TimerTestSuite3.testExerciseEnforcerTimerID(); }
} testDescription_suite_TimerTestSuite3_testExerciseEnforcerTimerID;

static class TestDescription_suite_TimerTestSuite3_testExerciseEnforcerReps : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerTestSuite3_testExerciseEnforcerReps() : CxxTest::RealTestDescription( Tests_TimerTestSuite3, suiteDescription_TimerTestSuite3, 25, "testExerciseEnforcerReps" ) {}
 void runTest() { suite_TimerTestSuite3.testExerciseEnforcerReps(); }
} testDescription_suite_TimerTestSuite3_testExerciseEnforcerReps;

static class TestDescription_suite_TimerTestSuite3_testExerciseEnforcerInterval : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TimerTestSuite3_testExerciseEnforcerInterval() : CxxTest::RealTestDescription( Tests_TimerTestSuite3, suiteDescription_TimerTestSuite3, 35, "testExerciseEnforcerInterval" ) {}
 void runTest() { suite_TimerTestSuite3.testExerciseEnforcerInterval(); }
} testDescription_suite_TimerTestSuite3_testExerciseEnforcerInterval;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
