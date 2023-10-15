#include "mathfunctions.h"
#include "ctest.h"
#include <stdio.h>

CTEST(TEST_SUBTRACTION, SUITE_1)
{
    int a = 10;
    int b = 5;
    int result = subtraction(a, b);
    int expected = 5;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_SUBTRACTION, SUITE_2)
{
    int a = -5;
    int b = 5;
    int result = subtraction(a, b);
    int expected = -10;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_SUBTRACTION, SUITE_3)
{
    int a = 8;
    int b = -3;
    int result = subtraction(a, b);
    int expected = 11;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_SUBTRACTION, SUITE_4)
{
    int a = -10;
    int b = 5;
    int result = subtraction(a, b);
    int expected = -15;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_SUBTRACTION, SUITE_5)
{
    int a = 0;
    int b = 0;
    int result = subtraction(a, b);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_ADDITION, SUITE_1)
{
    int a = 10;
    int b = 5;
    int result = addition(a, b);
    int expected = 15;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_ADDITION, SUITE_2)
{
    int a = -5;
    int b = 5;
    int result = addition(a, b);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_ADDITION, SUITE_3)
{
    int a = 8;
    int b = -3;
    int result = addition(a, b);
    int expected = 5;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_ADDITION, SUITE_4)
{
    int a = -10;
    int b = 5;
    int result = addition(a, b);
    int expected = -5;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_ADDITION, SUITE_5)
{
    int a = 0;
    int b = 0;
    int result = addition(a, b);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
