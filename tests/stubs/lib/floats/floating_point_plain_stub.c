// 1652437926000000000
// Please, do not change the line above

/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#ifdef KLEE_MODE
extern void klee_make_symbolic(void *addr, unsigned long long nbytes, const char *name);
#endif
#include "floating_point_plain_stub.h"

#define NULL ((void*)0)

int plain_isnan_symbolic[10];
int plain_isnan_symbolic[10];
int plain_isnan(float x) {
    static int firstTimeCall = 1;
    static int cntCall = 0;
    #ifdef KLEE_MODE
        if (firstTimeCall == 1) {
            firstTimeCall = 0;
            klee_make_symbolic(&plain_isnan_symbolic, sizeof(plain_isnan_symbolic), "plain_isnan_symbolic");
            for (int it_20_0 = 0; it_20_0 < 10; it_20_0 ++) {
                klee_prefer_cex(plain_isnan_symbolic, plain_isnan_symbolic[it_20_0] >= -10  & plain_isnan_symbolic[it_20_0] <= 10);
            }
        }
    #endif
    if (cntCall == 10) {
        cntCall--;
    }
    return plain_isnan_symbolic[cntCall++];
}


