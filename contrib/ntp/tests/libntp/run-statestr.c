/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_PeerRestart(void);
extern void test_SysUnspecified(void);
extern void test_ClockCodeExists(void);
extern void test_ClockCodeUnknown(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}

char *progname;


//=======MAIN=====
int main(int argc, char *argv[])
{
  progname = argv[0];
  Unity.TestFile = "statestr.c";
  UnityBegin("statestr.c");
  RUN_TEST(test_PeerRestart, 20);
  RUN_TEST(test_SysUnspecified, 24);
  RUN_TEST(test_ClockCodeExists, 29);
  RUN_TEST(test_ClockCodeUnknown, 33);

  return (UnityEnd());
}
