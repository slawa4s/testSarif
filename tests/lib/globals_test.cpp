/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "globals_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;
// Some tests for function 'use_global_handler' were skipped, as execution of function leads KLEE to the internal error. See console log for more details.



#pragma region regression

TEST(regression, increment_test_1)
{
    counter = 0;
    int actual = increment();
    EXPECT_EQ(1, actual);
    int expected_counter = 1;
    EXPECT_EQ(expected_counter, counter);
}


TEST(regression, use_globals_test_1)
{
    static_global = false;
    non_static_global = false;
    int actual = use_globals(0);
    EXPECT_EQ(0, actual);
    bool expected_static_global = false;
    EXPECT_EQ(expected_static_global, static_global);
    bool expected_non_static_global = false;
    EXPECT_EQ(expected_non_static_global, non_static_global);
}

TEST(regression, use_globals_test_2)
{
    static_global = false;
    non_static_global = true;
    int actual = use_globals(0);
    EXPECT_EQ(3, actual);
    bool expected_static_global = false;
    EXPECT_EQ(expected_static_global, static_global);
    bool expected_non_static_global = true;
    EXPECT_EQ(expected_non_static_global, non_static_global);
}

TEST(regression, use_globals_test_3)
{
    static_global = true;
    non_static_global = false;
    int actual = use_globals(0);
    EXPECT_EQ(1, actual);
    bool expected_static_global = true;
    EXPECT_EQ(expected_static_global, static_global);
    bool expected_non_static_global = false;
    EXPECT_EQ(expected_non_static_global, non_static_global);
}


TEST(regression, use_global_array_test_1)
{
    int global_array_buffer[3] = {-9, 3, 0};
    memcpy((void *) global_array, global_array_buffer, sizeof(global_array_buffer));
    int actual = use_global_array(0);
    EXPECT_EQ(3, actual);
    int expected_global_array[3] = {-9, 3, 0};
    for (int it_12_0 = 0; it_12_0 < 3; it_12_0 ++) {
        EXPECT_EQ(expected_global_array[it_12_0], global_array[it_12_0]);
    }
}

TEST(regression, use_global_array_test_2)
{
    int global_array_buffer[3] = {0, 0, 0};
    memcpy((void *) global_array, global_array_buffer, sizeof(global_array_buffer));
    int actual = use_global_array(0);
    EXPECT_EQ(0, actual);
    int expected_global_array[3] = {0, 0, 0};
    for (int it_12_0 = 0; it_12_0 < 3; it_12_0 ++) {
        EXPECT_EQ(expected_global_array[it_12_0], global_array[it_12_0]);
    }
}

TEST(regression, use_global_array_test_3)
{
    int global_array_buffer[3] = {1, 0, 0};
    memcpy((void *) global_array, global_array_buffer, sizeof(global_array_buffer));
    int actual = use_global_array(0);
    EXPECT_EQ(1, actual);
    int expected_global_array[3] = {1, 0, 0};
    for (int it_12_0 = 0; it_12_0 < 3; it_12_0 ++) {
        EXPECT_EQ(expected_global_array[it_12_0], global_array[it_12_0]);
    }
}


TEST(regression, use_global_strings_test_1)
{
    char global_mutable_string_buffer[] = "ccabcccbac";
    global_mutable_string = global_mutable_string_buffer;
    char global_const_string_buffer[] = "{ccbcbccc{";
    global_const_string = global_const_string_buffer;
    char actual = use_global_strings();
    EXPECT_EQ('{', actual);
    char expected_global_mutable_string = '{';
    EXPECT_EQ(expected_global_mutable_string, (*global_mutable_string));
    char expected_global_const_string = '{';
    EXPECT_EQ(expected_global_const_string, (*global_const_string));
}

TEST(regression, use_global_strings_test_2)
{
    char global_mutable_string_buffer[] = "ccabcccbac";
    global_mutable_string = global_mutable_string_buffer;
    char global_const_string_buffer[] = "cccbcbcccc";
    global_const_string = global_const_string_buffer;
    char actual = use_global_strings();
    EXPECT_EQ('C', actual);
    char expected_global_mutable_string = 'C';
    EXPECT_EQ(expected_global_mutable_string, (*global_mutable_string));
    char expected_global_const_string = 'c';
    EXPECT_EQ(expected_global_const_string, (*global_const_string));
}

TEST(regression, use_global_strings_test_3)
{
    char global_mutable_string_buffer[] = "ccabcccbac";
    global_mutable_string = global_mutable_string_buffer;
    char global_const_string_buffer[] = "";
    global_const_string = global_const_string_buffer;
    char actual = use_global_strings();
    EXPECT_EQ('\0', actual);
    char expected_global_mutable_string = '\0';
    EXPECT_EQ(expected_global_mutable_string, (*global_mutable_string));
    char expected_global_const_string = '\0';
    EXPECT_EQ(expected_global_const_string, (*global_const_string));
}


TEST(regression, use_global_arrays_test_1)
{
    int global_mutable_int_array_buffer[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    global_mutable_int_array = (int *) calloc(10, sizeof(int));
    memcpy((void *) global_mutable_int_array, global_mutable_int_array_buffer, sizeof(global_mutable_int_array_buffer));
    int global_const_int_array_buffer[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    global_const_int_array = (const int *) calloc(10, sizeof(int));
    memcpy((void *) global_const_int_array, global_const_int_array_buffer, sizeof(global_const_int_array_buffer));
    int actual = use_global_arrays();
    EXPECT_EQ(0, actual);
    int expected_global_mutable_int_array = 0;
    EXPECT_EQ(expected_global_mutable_int_array, (*global_mutable_int_array));
    int expected_global_const_int_array = 0;
    EXPECT_EQ(expected_global_const_int_array, (*global_const_int_array));
}

TEST(regression, use_global_arrays_test_2)
{
    int global_mutable_int_array_buffer[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    global_mutable_int_array = (int *) calloc(10, sizeof(int));
    memcpy((void *) global_mutable_int_array, global_mutable_int_array_buffer, sizeof(global_mutable_int_array_buffer));
    int global_const_int_array_buffer[10] = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    global_const_int_array = (const int *) calloc(10, sizeof(int));
    memcpy((void *) global_const_int_array, global_const_int_array_buffer, sizeof(global_const_int_array_buffer));
    int actual = use_global_arrays();
    EXPECT_EQ(1, actual);
    int expected_global_mutable_int_array = 1;
    EXPECT_EQ(expected_global_mutable_int_array, (*global_mutable_int_array));
    int expected_global_const_int_array = -1;
    EXPECT_EQ(expected_global_const_int_array, (*global_const_int_array));
}


TEST(regression, use_global_handler_test_1)
{
    use_global_handler(0);
}

#pragma endregion
}
