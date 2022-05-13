/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "simple_unions_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, get_sign_union_test_1)
{
    int actual = get_sign_union(from_bytes<IntBytesUnion>({97, 104, 98, -128}));
    EXPECT_EQ(-1, actual);
}

TEST(regression, get_sign_union_test_2)
{
    int actual = get_sign_union(from_bytes<IntBytesUnion>({98, 112, 104, 112}));
    EXPECT_EQ(1, actual);
}

TEST(regression, get_sign_union_test_3)
{
    int actual = get_sign_union(from_bytes<IntBytesUnion>({0, 0, 0, 0}));
    EXPECT_EQ(0, actual);
}


TEST(regression, extract_bit_test_1)
{
    int actual = extract_bit(from_bytes<ShortBytesUnion>({0, 99}));
    EXPECT_EQ(1, actual);
}

TEST(regression, extract_bit_test_2)
{
    int actual = extract_bit(from_bytes<ShortBytesUnion>({0, 0}));
    EXPECT_EQ(-1, actual);
}

TEST(regression, extract_bit_test_3)
{
    int actual = extract_bit(from_bytes<ShortBytesUnion>({99, 99}));
    EXPECT_EQ(0, actual);
}


TEST(regression, calculate_something_union_test_1)
{
    int actual = calculate_something_union(from_bytes<Heterogeneous>({-28, 7, 0, 0, 0, 0, 0, 0}));
    EXPECT_EQ(1, actual);
}

TEST(regression, calculate_something_union_test_2)
{
    int actual = calculate_something_union(from_bytes<Heterogeneous>({0, 0, 16, 0, 0, 0, 0, 0}));
    EXPECT_EQ(0, actual);
}

TEST(regression, calculate_something_union_test_3)
{
    int actual = calculate_something_union(from_bytes<Heterogeneous>({0, 0, 0, 0, 60, 94, -71, -88}));
    EXPECT_EQ(0, actual);
}

TEST(regression, calculate_something_union_test_4)
{
    int actual = calculate_something_union(from_bytes<Heterogeneous>({0, 0, 0, 0, 0, 0, 0, 0}));
    EXPECT_EQ(0, actual);
}

TEST(regression, calculate_something_union_test_5)
{
    int actual = calculate_something_union(from_bytes<Heterogeneous>({7, 0, 0, 0, 0, 0, 0, 0}));
    EXPECT_EQ(1, actual);
}

TEST(regression, calculate_something_union_test_6)
{
    int actual = calculate_something_union(from_bytes<Heterogeneous>({1, 0, 0, 0, 0, 0, 0, 0}));
    EXPECT_EQ(0, actual);
}


TEST(regression, RawMantissa_test_1)
{
    int actual = RawMantissa(from_bytes<SuperFloat>({0, 0, 0, 0}));
    EXPECT_EQ(0, actual);
}


TEST(regression, get_coordinate_test_1)
{
    int actual = get_coordinate(from_bytes<Vector2D>({0, 0, 0, 0, 0, 0, 0, 0}), 2);
    EXPECT_EQ(0, actual);
}

TEST(regression, get_coordinate_test_2)
{
    int actual = get_coordinate(from_bytes<Vector2D>({0, 0, 0, 0, 0, 0, 0, 0}), 0);
    EXPECT_EQ(0, actual);
}

TEST(regression, get_coordinate_test_3)
{
    int actual = get_coordinate(from_bytes<Vector2D>({0, 0, 0, 0, 0, 0, 0, 0}), -1);
    EXPECT_EQ(0, actual);
}


TEST(regression, operate_with_inner_unions_test_1)
{
    signed char actual = operate_with_inner_unions(from_bytes<MainUnion>({102, 0, 0, 0, 0, 0, 0, 0}));
    EXPECT_EQ('f', actual);
}

TEST(regression, operate_with_inner_unions_test_2)
{
    signed char actual = operate_with_inner_unions(from_bytes<MainUnion>({53, 0, 0, 0, 0, 0, 0, 0}));
    EXPECT_EQ('5', actual);
}

TEST(regression, operate_with_inner_unions_test_3)
{
    signed char actual = operate_with_inner_unions(from_bytes<MainUnion>({99, 0, 0, 0, 0, 0, 0, -128}));
    EXPECT_EQ('g', actual);
}

TEST(regression, operate_with_inner_unions_test_4)
{
    signed char actual = operate_with_inner_unions(from_bytes<MainUnion>({104, 0, 0, 0, 0, 0, 0, 0}));
    EXPECT_EQ('e', actual);
}

TEST(regression, operate_with_inner_unions_test_5)
{
    signed char actual = operate_with_inner_unions(from_bytes<MainUnion>({112, 0, 0, 0, 1, 0, 0, 0}));
    EXPECT_EQ('o', actual);
}

TEST(regression, operate_with_inner_unions_test_6)
{
    signed char actual = operate_with_inner_unions(from_bytes<MainUnion>({15, 0, 0, 0, 0, 0, 0, 0}));
    EXPECT_EQ('\x0f', actual);
}

TEST(regression, operate_with_inner_unions_test_7)
{
    signed char actual = operate_with_inner_unions(from_bytes<MainUnion>({5, 0, 0, -1, 0, 0, 0, 0}));
    EXPECT_EQ('5', actual);
}

TEST(regression, operate_with_inner_unions_test_8)
{
    signed char actual = operate_with_inner_unions(from_bytes<MainUnion>({5, 0, 0, 0, 0, 0, 0, 0}));
    EXPECT_EQ('5', actual);
}


TEST(regression, union_as_return_type_test_1)
{
    union MainUnion actual = union_as_return_type(1);
    union MainUnion expected = from_bytes<MainUnion>({1, 0, 0, 0, 0, 0, 0, 0});
//    EXPECT_EQ(actual.inner.c, expected.inner.c);
//    EXPECT_EQ(actual.inner.ininner.u, expected.inner.ininner.u);
//    EXPECT_EQ(actual.inner.ininner.l, expected.inner.ininner.l);
//    EXPECT_EQ(actual.inner.s, expected.inner.s);
//    EXPECT_EQ(actual.x, expected.x);
//    EXPECT_EQ(actual.y, expected.y);
}

TEST(regression, union_as_return_type_test_2)
{
    union MainUnion actual = union_as_return_type(4);
    union MainUnion expected = from_bytes<MainUnion>({2, 0, 0, 0, 0, 0, 0, 0});
//    EXPECT_EQ(actual.inner.c, expected.inner.c);
//    EXPECT_EQ(actual.inner.ininner.u, expected.inner.ininner.u);
//    EXPECT_EQ(actual.inner.ininner.l, expected.inner.ininner.l);
//    EXPECT_EQ(actual.inner.s, expected.inner.s);
//    EXPECT_EQ(actual.x, expected.x);
//    EXPECT_EQ(actual.y, expected.y);
}

TEST(regression, union_as_return_type_test_3)
{
    union MainUnion actual = union_as_return_type(0);
    union MainUnion expected = from_bytes<MainUnion>({48, 0, 0, 0, 0, 0, 0, 0});
//    EXPECT_EQ(actual.inner.c, expected.inner.c);
//    EXPECT_EQ(actual.inner.ininner.u, expected.inner.ininner.u);
//    EXPECT_EQ(actual.inner.ininner.l, expected.inner.ininner.l);
//    EXPECT_EQ(actual.inner.s, expected.inner.s);
//    EXPECT_EQ(actual.x, expected.x);
//    EXPECT_EQ(actual.y, expected.y);
}


TEST(regression, sumOfUnionArray_test_1)
{
    __attribute__ ((aligned(1))) union IntBytesUnion u[10] = {from_bytes<IntBytesUnion>({97, 112, 112, 98}), from_bytes<IntBytesUnion>({97, 112, 104, 104}), from_bytes<IntBytesUnion>({112, 112, 112, 98}), from_bytes<IntBytesUnion>({97, 97, 98, 104}), from_bytes<IntBytesUnion>({104, 97, 97, 97}), from_bytes<IntBytesUnion>({104, 104, 98, 97}), from_bytes<IntBytesUnion>({98, 98, 98, 98}), from_bytes<IntBytesUnion>({112, 97, 97, 112}), from_bytes<IntBytesUnion>({112, 112, 98, 98}), from_bytes<IntBytesUnion>({112, 98, 97, 97})};
    int actual = sumOfUnionArray(u);
    EXPECT_EQ(-150137861, actual);
    union IntBytesUnion expected_u[10] = {from_bytes<IntBytesUnion>({97, 112, 112, 98}), from_bytes<IntBytesUnion>({97, 112, 104, 104}), from_bytes<IntBytesUnion>({112, 112, 112, 98}), from_bytes<IntBytesUnion>({97, 97, 98, 104}), from_bytes<IntBytesUnion>({104, 97, 97, 97}), from_bytes<IntBytesUnion>({104, 104, 98, 97}), from_bytes<IntBytesUnion>({98, 98, 98, 98}), from_bytes<IntBytesUnion>({112, 97, 97, 112}), from_bytes<IntBytesUnion>({112, 112, 98, 98}), from_bytes<IntBytesUnion>({112, 98, 97, 97})};
    for (int it_1_0 = 0; it_1_0 < 10; it_1_0 ++) {
        for (int it_15_0 = 0; it_15_0 < 4; it_15_0 ++) {
            EXPECT_EQ(expected_u[it_1_0].bytes[it_15_0], u[it_1_0].bytes[it_15_0]);
        }
        EXPECT_EQ(expected_u[it_1_0].number, u[it_1_0].number);
    }
}


TEST(regression, operateWithUnionWithPointer_test_1)
{
    long long actual = operateWithUnionWithPointer(from_bytes<UnionWithPointer>({0, 0, 0, 0, 0, 0, 0, 0}));
    EXPECT_EQ(0LL, actual);
}

#pragma endregion
}
