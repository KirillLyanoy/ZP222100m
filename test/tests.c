#include "ctest.h"
#include "mathfunctions.h"
#include "mutches_check.h"
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

CTEST(TEST_INPUT_DATA, SUITE_1)
{
    int result = mutches_check(5, 1);
    int expected = 3;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_INPUT_DATA, SUITE_2)
{
    int result = mutches_check(0, 1);
    int expected = 2;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_INPUT_DATA, SUITE_3)
{
    int result = mutches_check("a", 0);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_INPUT_DATA, SUITE_4)
{
    int result = mutches_check(100, 1);
    int expected = 2;
    ASSERT_EQUAL(expected, result);
}

CTEST(TEST_INPUT_DATA, SUITE_5)
{
    int result = mutches_check(-4, 1);
    int expected = 2;
    ASSERT_EQUAL(expected, result);
}


