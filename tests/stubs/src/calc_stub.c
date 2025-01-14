// 1652437925000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "calc_stub.h"

#define NULL ((void*)0)

int calc_two_numbers_symbolic[10];
int calc_two_numbers_symbolic[10];
int calc_two_numbers(char op, int a, int b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&calc_two_numbers_symbolic, sizeof(calc_two_numbers_symbolic), "calc_two_numbers_symbolic");
            for (int it_25_0 = 0; it_25_0 < 10; it_25_0 ++) {
                klee_prefer_cex(calc_two_numbers_symbolic, calc_two_numbers_symbolic[it_25_0] >= -10  & calc_two_numbers_symbolic[it_25_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return calc_two_numbers_symbolic[cntCall++];
}


int f_symbolic[10];
int f_symbolic[10];
int f(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&f_symbolic, sizeof(f_symbolic), "f_symbolic");
            for (int it_10_0 = 0; it_10_0 < 10; it_10_0 ++) {
                klee_prefer_cex(f_symbolic, f_symbolic[it_10_0] >= -10  & f_symbolic[it_10_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return f_symbolic[cntCall++];
}


int other_module_call_symbolic[10];
int other_module_call_symbolic[10];
int other_module_call(int a) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&other_module_call_symbolic, sizeof(other_module_call_symbolic), "other_module_call_symbolic");
            for (int it_26_0 = 0; it_26_0 < 10; it_26_0 ++) {
                klee_prefer_cex(other_module_call_symbolic, other_module_call_symbolic[it_26_0] >= -10  & other_module_call_symbolic[it_26_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return other_module_call_symbolic[cntCall++];
}


int calc_two_numbers_f_symbolic[10];
int calc_two_numbers_f_symbolic[10];
int calc_two_numbers_f(char a, char b) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&calc_two_numbers_f_symbolic, sizeof(calc_two_numbers_f_symbolic), "calc_two_numbers_f_symbolic");
            for (int it_27_0 = 0; it_27_0 < 10; it_27_0 ++) {
                klee_prefer_cex(calc_two_numbers_f_symbolic, calc_two_numbers_f_symbolic[it_27_0] >= -10  & calc_two_numbers_f_symbolic[it_27_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return calc_two_numbers_f_symbolic[cntCall++];
}


