#include <stdio.h>
#include "../inc/fun.h"
#include "../unity/unity.h"

void test_sqr(void);
void test_sum(void);

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_sqr(void)
{
    TEST_ASSERT_EQUAL(4, sqr(2));

    /* Dummy Fail */
    TEST_ASSERT_EQUAL(9, sqr(3));
}

void test_sum(void)
{
    TEST_ASSERT_EQUAL(4, sum(2,2));

    /* Dummy Fail */
    TEST_ASSERT_EQUAL(9, sum(3,6));
}
int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_sqr);
    RUN_TEST(test_sum);

    /* Close the Unity Test Framework */
    return UNITY_END();
}