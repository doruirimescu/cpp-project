#include <gtest/gtest.h>
#include "example.h"

TEST(TEST_SUITE, MODULE_FUNCTION_EXPECTED)
{
    Dummy dummy;
    ASSERT_TRUE(dummy.doSomething());
}
