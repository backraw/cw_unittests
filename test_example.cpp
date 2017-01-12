#include "test_example.h"


void TestExample::test_example()
{
    CPPUNIT_ASSERT(true);
    CPPUNIT_ASSERT(false != true);

    CPPUNIT_ASSERT_EQUAL(5, 5);
    CPPUNIT_ASSERT_ASSERTION_FAIL(CPPUNIT_ASSERT_EQUAL(80, 90));
}


CPPUNIT_TEST_SUITE_REGISTRATION(TestExample);
