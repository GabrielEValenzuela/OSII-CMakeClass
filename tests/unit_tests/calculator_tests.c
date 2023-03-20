#include <unity.h>

#include <calculator.h>

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_sum(void)
{
    TEST_ASSERT_EQUAL(20, sum(10, 10));
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_sum);

    return UNITY_END();
}