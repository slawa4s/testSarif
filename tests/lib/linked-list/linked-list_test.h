/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

namespace UTBot {
#define typeid typeid_
#define throw throw_
#define true true_
#define thread_local thread_local_
#define template template_
#define static_cast static_cast_
#define requires requires_
#define public public_
#define protected protected_
#define reflexpr reflexpr_
#define operator operator_
#define noexcept noexcept_
#define new new_
#define namespace namespace_
#define mutable mutable_
#define try try_
#define private private_
#define friend friend_
#define false false_
#define virtual virtual_
#define nullptr nullptr_
#define export export_
#define this this_
#define explicit explicit_
#define typename typename_
#define delete delete_
#define decltype decltype_
#define co_yield co_yield_
#define co_return co_return_
#define co_await co_await_
#define const_cast const_cast_
#define constinit constinit_
#define consteval consteval_
#define class class_
#define synchronized synchronized_
#define char32_t char32_t_
#define constexpr constexpr_
#define char8_t char8_t_
#define catch catch_
#define using using_
#define char16_t char16_t_
#define atomic_noexcept atomic_noexcept_
#define concept concept_
#define atomic_commit atomic_commit_
#define static_assert static_assert_
#define atomic_cancel atomic_cancel_
#define dynamic_cast dynamic_cast_
#define asm asm_
#define reinterpret_cast reinterpret_cast_
#define alignof alignof_
#define alignas alignas_
#define _Alignas(x)
#define _Atomic(x) x
#define _Bool bool
#define _Noreturn
#define _Thread_local thread_local

typedef long ptrdiff_t;

typedef unsigned long size_t;

typedef struct {
    long long __clang_max_align_nonce1 __attribute__((aligned(__alignof(long long))));
    long double __clang_max_align_nonce2 __attribute__((aligned(__alignof(long double))));
} max_align_t;

struct Node {
    int x;
    struct Node *next;
};

struct HardNode {
    struct Inner {
        int x;
        struct SuperInner {
            struct HardNode *next;
            int step;
        } superIn;
        double d;
    } in;
    char letter;
    struct HardNode *randomRef;
};

struct Kuku {
    struct Ququ {
        struct Kuku *next;
        char letter;
    } in;
    int x;
};


extern "C" int length_of_linked_list3_lib_linked_list_linked_list_c(struct Node *head);
static int length_of_linked_list3(struct Node *head) {
return length_of_linked_list3_lib_linked_list_linked_list_c(head);
}
extern "C" int length_of_linked_list2_lib_linked_list_linked_list_c(struct Node *head);
static int length_of_linked_list2(struct Node *head) {
return length_of_linked_list2_lib_linked_list_linked_list_c(head);
}
extern "C" int sum_list_lib_linked_list_linked_list_c(struct Node *head);
static int sum_list(struct Node *head) {
return sum_list_lib_linked_list_linked_list_c(head);
}
extern "C" int sign_sum_lib_linked_list_linked_list_c(struct Node *head);
static int sign_sum(struct Node *head) {
return sign_sum_lib_linked_list_linked_list_c(head);
}
extern "C" int hard_length2_lib_linked_list_linked_list_c(struct HardNode *head);
static int hard_length2(struct HardNode *head) {
return hard_length2_lib_linked_list_linked_list_c(head);
}
extern "C" int middle_length2_lib_linked_list_linked_list_c(struct Kuku *head);
static int middle_length2(struct Kuku *head) {
return middle_length2_lib_linked_list_linked_list_c(head);
}
extern "C" int cycle_list3_lib_linked_list_linked_list_c(struct Node *head);
static int cycle_list3(struct Node *head) {
return cycle_list3_lib_linked_list_linked_list_c(head);
}
extern "C" int len_bound_lib_linked_list_linked_list_c(struct Node *head, int bound);
static int len_bound(struct Node *head, int bound) {
return len_bound_lib_linked_list_linked_list_c(head, bound);
}
extern "C" int sort_list_lib_linked_list_linked_list_c(struct Node *head);
static int sort_list(struct Node *head) {
return sort_list_lib_linked_list_linked_list_c(head);
}
extern "C" int sort_list_with_comparator_lib_linked_list_linked_list_c(struct Node *head, int (*cmp)(int, int));
static int sort_list_with_comparator(struct Node *head, int (*cmp)(int, int)) {
return sort_list_with_comparator_lib_linked_list_linked_list_c(head, cmp);
}
extern "C" int find_maximum_lib_linked_list_linked_list_c(int x, int y, int (*compare)(int, int));
static int find_maximum(int x, int y, int (*compare)(int, int)) {
return find_maximum_lib_linked_list_linked_list_c(x, y, compare);
}
extern "C" int vowel_consonant_lib_linked_list_linked_list_c(char c, char (*vowel)(char));
static int vowel_consonant(char c, char (*vowel)(char)) {
return vowel_consonant_lib_linked_list_linked_list_c(c, vowel);
}

}
#undef typeid
#undef throw
#undef true
#undef thread_local
#undef template
#undef static_cast
#undef requires
#undef public
#undef protected
#undef reflexpr
#undef operator
#undef noexcept
#undef new
#undef namespace
#undef mutable
#undef try
#undef private
#undef friend
#undef false
#undef virtual
#undef nullptr
#undef export
#undef this
#undef explicit
#undef typename
#undef delete
#undef decltype
#undef co_yield
#undef co_return
#undef co_await
#undef const_cast
#undef constinit
#undef consteval
#undef class
#undef synchronized
#undef char32_t
#undef constexpr
#undef char8_t
#undef catch
#undef using
#undef char16_t
#undef atomic_noexcept
#undef concept
#undef atomic_commit
#undef static_assert
#undef atomic_cancel
#undef dynamic_cast
#undef asm
#undef reinterpret_cast
#undef alignof
#undef alignas
#include <cstring>

#include <unistd.h>


void utbot_redirect_stdin(const char* buf, int &res) {
    int fds[2];
    if (pipe(fds) == -1) {
        res = -1;
        return;
    }
    close(STDIN_FILENO);
    dup2(fds[0], STDIN_FILENO);
    write(fds[1], buf, 64);
    close(fds[1]);
}

template<typename T, size_t N>
T from_bytes(const char (&bytes)[N]) {
    T result;
    std::memcpy(&result, bytes, sizeof(result));
    return result;
}