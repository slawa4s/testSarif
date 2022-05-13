/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "linked-list_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, length_of_linked_list3_test_1)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar1;
    int actual = length_of_linked_list3(&head);
    EXPECT_EQ(-1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, length_of_linked_list3_test_2)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {-572662307, NULL};
    struct Node utbotInnerVar2 = {0, NULL};
    head.next = &utbotInnerVar1;
    utbotInnerVar1.next = &utbotInnerVar2;
    int actual = length_of_linked_list3(&head);
    EXPECT_EQ(3, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, length_of_linked_list3_test_3)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, NULL};
    head.next = &utbotInnerVar1;
    int actual = length_of_linked_list3(&head);
    EXPECT_EQ(2, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(regression, length_of_linked_list3_test_4)
{
    struct Node head = {0, NULL};
    int actual = length_of_linked_list3(&head);
    EXPECT_EQ(1, actual);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

#pragma endregion
#pragma region error
TEST(error, length_of_linked_list3_test_5)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 255};
    head.next = &utbotInnerVar1;
    length_of_linked_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, length_of_linked_list3_test_6)
{
    struct Node head = {0, (struct Node *) 18446744073709551608};
    length_of_linked_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, length_of_linked_list3_test_7)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {0, (struct Node *) 131080};
    head.next = &utbotInnerVar1;
    length_of_linked_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, length_of_linked_list3_test_8)
{
    struct Node head = {0, NULL};
    struct Node utbotInnerVar1 = {-1, (struct Node *) 18446744073709551608};
    head.next = &utbotInnerVar1;
    length_of_linked_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

TEST(error, length_of_linked_list3_test_9)
{
    struct Node head = {0, (struct Node *) 255};
    length_of_linked_list3(&head);
    struct Node expected_head = {0, NULL};
    EXPECT_EQ(expected_head.x, head.x);
}

#pragma endregion
}