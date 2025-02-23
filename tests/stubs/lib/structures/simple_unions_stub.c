// 1652437926000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "simple_unions_stub.h"

#define NULL ((void*)0)

int get_sign_union_symbolic[10];
int get_sign_union_symbolic[10];
int get_sign_union(union IntBytesUnion st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&get_sign_union_symbolic, sizeof(get_sign_union_symbolic), "get_sign_union_symbolic");
            for (int it_23_0 = 0; it_23_0 < 10; it_23_0 ++) {
                klee_prefer_cex(get_sign_union_symbolic, get_sign_union_symbolic[it_23_0] >= -10  & get_sign_union_symbolic[it_23_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return get_sign_union_symbolic[cntCall++];
}


int extract_bit_symbolic[10];
int extract_bit_symbolic[10];
int extract_bit(union ShortBytesUnion x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&extract_bit_symbolic, sizeof(extract_bit_symbolic), "extract_bit_symbolic");
            for (int it_20_0 = 0; it_20_0 < 10; it_20_0 ++) {
                klee_prefer_cex(extract_bit_symbolic, extract_bit_symbolic[it_20_0] >= -10  & extract_bit_symbolic[it_20_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return extract_bit_symbolic[cntCall++];
}


int calculate_something_union_symbolic[10];
int calculate_something_union_symbolic[10];
int calculate_something_union(union Heterogeneous str) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&calculate_something_union_symbolic, sizeof(calculate_something_union_symbolic), "calculate_something_union_symbolic");
            for (int it_34_0 = 0; it_34_0 < 10; it_34_0 ++) {
                klee_prefer_cex(calculate_something_union_symbolic, calculate_something_union_symbolic[it_34_0] >= -10  & calculate_something_union_symbolic[it_34_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return calculate_something_union_symbolic[cntCall++];
}


int RawMantissa_symbolic[10];
int RawMantissa_symbolic[10];
int RawMantissa(union SuperFloat f) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&RawMantissa_symbolic, sizeof(RawMantissa_symbolic), "RawMantissa_symbolic");
            for (int it_20_0 = 0; it_20_0 < 10; it_20_0 ++) {
                klee_prefer_cex(RawMantissa_symbolic, RawMantissa_symbolic[it_20_0] >= -10  & RawMantissa_symbolic[it_20_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return RawMantissa_symbolic[cntCall++];
}


int get_coordinate_symbolic[10];
int get_coordinate_symbolic[10];
int get_coordinate(union Vector2D vect, int i) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&get_coordinate_symbolic, sizeof(get_coordinate_symbolic), "get_coordinate_symbolic");
            for (int it_23_0 = 0; it_23_0 < 10; it_23_0 ++) {
                klee_prefer_cex(get_coordinate_symbolic, get_coordinate_symbolic[it_23_0] >= -10  & get_coordinate_symbolic[it_23_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return get_coordinate_symbolic[cntCall++];
}


signed char operate_with_inner_unions_symbolic[10];
signed char operate_with_inner_unions_symbolic[10];
signed char operate_with_inner_unions(union MainUnion st) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&operate_with_inner_unions_symbolic, sizeof(operate_with_inner_unions_symbolic), "operate_with_inner_unions_symbolic");
            for (int it_34_0 = 0; it_34_0 < 10; it_34_0 ++) {
                klee_prefer_cex(operate_with_inner_unions_symbolic, operate_with_inner_unions_symbolic[it_34_0] >= 'a' & operate_with_inner_unions_symbolic[it_34_0] <= 'z' & operate_with_inner_unions_symbolic[it_34_0] != '\0');
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return operate_with_inner_unions_symbolic[cntCall++];
}


union MainUnion union_as_return_type_symbolic[10];
union MainUnion union_as_return_type_symbolic[10];
union MainUnion union_as_return_type(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&union_as_return_type_symbolic, sizeof(union_as_return_type_symbolic), "union_as_return_type_symbolic");
            for (int it_29_0 = 0; it_29_0 < 10; it_29_0 ++) {
                // No constraints for union_as_return_type_symbolic[it_29_0]
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return union_as_return_type_symbolic[cntCall++];
}


int sumOfUnionArray_symbolic[10];
int sumOfUnionArray_symbolic[10];
int sumOfUnionArray(union IntBytesUnion * u) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&sumOfUnionArray_symbolic, sizeof(sumOfUnionArray_symbolic), "sumOfUnionArray_symbolic");
            for (int it_24_0 = 0; it_24_0 < 10; it_24_0 ++) {
                klee_prefer_cex(sumOfUnionArray_symbolic, sumOfUnionArray_symbolic[it_24_0] >= -10  & sumOfUnionArray_symbolic[it_24_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return sumOfUnionArray_symbolic[cntCall++];
}


long long operateWithUnionWithPointer_symbolic[10];
long long operateWithUnionWithPointer_symbolic[10];
long long operateWithUnionWithPointer(union UnionWithPointer un) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&operateWithUnionWithPointer_symbolic, sizeof(operateWithUnionWithPointer_symbolic), "operateWithUnionWithPointer_symbolic");
            for (int it_36_0 = 0; it_36_0 < 10; it_36_0 ++) {
                klee_prefer_cex(operateWithUnionWithPointer_symbolic, operateWithUnionWithPointer_symbolic[it_36_0] >= -10  & operateWithUnionWithPointer_symbolic[it_36_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return operateWithUnionWithPointer_symbolic[cntCall++];
}


