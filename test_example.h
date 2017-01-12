#include <cppunit/extensions/HelperMacros.h>

class TestExample : public CppUnit::TestFixture
{
public:
    void test_example();

private:
    CPPUNIT_TEST_SUITE(TestExample);

    CPPUNIT_TEST(test_example);

    CPPUNIT_TEST_SUITE_END();
};