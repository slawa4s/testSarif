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

struct MinMax {
    int a;
    int b;
};

typedef unsigned long size_t;

typedef enum  {
    P_ALL,
    P_PID,
    P_PGID
} idtype_t;

typedef float _Float32;

typedef double _Float64;

typedef double _Float32x;

typedef long double _Float64x;

typedef struct {
    int quot;
    int rem;
} div_t;

typedef struct {
    long quot;
    long rem;
} ldiv_t;

typedef struct {
    long long quot;
    long long rem;
} lldiv_t;

typedef unsigned char __u_char;

typedef unsigned short __u_short;

typedef unsigned int __u_int;

typedef unsigned long __u_long;

typedef signed char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long __int64_t;

typedef unsigned long __uint64_t;

typedef long __quad_t;

typedef unsigned long __u_quad_t;

typedef long __intmax_t;

typedef unsigned long __uintmax_t;

typedef unsigned long __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long __ino_t;

typedef unsigned long __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long __nlink_t;

typedef long __off_t;

typedef long __off64_t;

typedef int __pid_t;

typedef struct {
    int __val[2];
} __fsid_t;

typedef long __clock_t;

typedef unsigned long __rlim_t;

typedef unsigned long __rlim64_t;

typedef unsigned int __id_t;

typedef long __time_t;

typedef unsigned int __useconds_t;

typedef long __suseconds_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void *__timer_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef long __blkcnt64_t;

typedef unsigned long __fsblkcnt_t;

typedef unsigned long __fsblkcnt64_t;

typedef unsigned long __fsfilcnt_t;

typedef unsigned long __fsfilcnt64_t;

typedef long __fsword_t;

typedef long __ssize_t;

typedef long __syscall_slong_t;

typedef unsigned long __syscall_ulong_t;

typedef __off64_t __loff_t;

typedef char *__caddr_t;

typedef long __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef __u_char u_char;

typedef __u_short u_short;

typedef __u_int u_int;

typedef __u_long u_long;

typedef __quad_t quad_t;

typedef __u_quad_t u_quad_t;

typedef __fsid_t fsid_t;

typedef __loff_t loff_t;

typedef __ino_t ino_t;

typedef __dev_t dev_t;

typedef __gid_t gid_t;

typedef __mode_t mode_t;

typedef __nlink_t nlink_t;

typedef __uid_t uid_t;

typedef __off_t off_t;

typedef __pid_t pid_t;

typedef __id_t id_t;

typedef __ssize_t ssize_t;

typedef __daddr_t daddr_t;

typedef __caddr_t caddr_t;

typedef __key_t key_t;

typedef __clock_t clock_t;

typedef __clockid_t clockid_t;

typedef __time_t time_t;

typedef __timer_t timer_t;

typedef unsigned long ulong;

typedef unsigned short ushort;

typedef unsigned int uint;

typedef __int8_t int8_t;

typedef __int16_t int16_t;

typedef __int32_t int32_t;

typedef __int64_t int64_t;

typedef unsigned int u_int8_t __attribute__((mode(__QI__)));

typedef unsigned int u_int16_t __attribute__((mode(__HI__)));

typedef unsigned int u_int32_t __attribute__((mode(__SI__)));

typedef unsigned int u_int64_t __attribute__((mode(__DI__)));

typedef int register_t __attribute__((mode(__word__)));

typedef struct {
    unsigned long __val[16];
} __sigset_t;

typedef __sigset_t sigset_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

struct timespec {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
};

typedef __suseconds_t suseconds_t;

typedef long __fd_mask;

typedef struct {
    __fd_mask __fds_bits[16];
} fd_set;

typedef __fd_mask fd_mask;

typedef __blksize_t blksize_t;

typedef __blkcnt_t blkcnt_t;

typedef __fsblkcnt_t fsblkcnt_t;

typedef __fsfilcnt_t fsfilcnt_t;

struct __pthread_rwlock_arch_t {
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    signed char __rwelision;
    unsigned char __pad1[7];
    unsigned long __pad2;
    unsigned int __flags;
};

struct __pthread_internal_list {
    struct __pthread_internal_list *__prev;
    struct __pthread_internal_list *__next;
};

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_mutex_s {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    __pthread_list_t __list;
};

struct __pthread_cond_s {
    union {
        unsigned long long __wseq;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __wseq32;
    };
    union {
        unsigned long long __g1_start;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __g1_start32;
    };
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};

typedef unsigned long pthread_t;

typedef union {
    char __size[4];
    int __align;
} pthread_mutexattr_t;

typedef union {
    char __size[4];
    int __align;
} pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef union pthread_attr_t pthread_attr_t;

typedef union {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
} pthread_mutex_t;

typedef union {
    struct __pthread_cond_s __data;
    char __size[48];
    long long __align;
} pthread_cond_t;

typedef union {
    struct __pthread_rwlock_arch_t __data;
    char __size[56];
    long __align;
} pthread_rwlock_t;

typedef union {
    char __size[8];
    long __align;
} pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union {
    char __size[32];
    long __align;
} pthread_barrier_t;

typedef union {
    char __size[4];
    int __align;
} pthread_barrierattr_t;

struct random_data {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
};

struct drand48_data {
    unsigned short __x[3];
    unsigned short __old_x[3];
    unsigned short __c;
    unsigned short __init;
    unsigned long long __a;
};

typedef int (*__compar_fn_t)(const void *, const void *);


extern "C" long long *returns_pointer_with_min_lib_pointers_pointer_return_c(long long a, long long b);
static long long *returns_pointer_with_min(long long a, long long b) {
return returns_pointer_with_min_lib_pointers_pointer_return_c(a, b);
}
extern "C" unsigned int *returns_pointer_with_max_lib_pointers_pointer_return_c(unsigned int a, unsigned int b);
static unsigned int *returns_pointer_with_max(unsigned int a, unsigned int b) {
return returns_pointer_with_max_lib_pointers_pointer_return_c(a, b);
}
extern "C" int *five_square_numbers_lib_pointers_pointer_return_c(int from);
static int *five_square_numbers(int from) {
return five_square_numbers_lib_pointers_pointer_return_c(from);
}
extern "C" struct MinMax *returns_struct_with_min_max_lib_pointers_pointer_return_c(int a, int b);
static struct MinMax *returns_struct_with_min_max(int a, int b) {
return returns_struct_with_min_max_lib_pointers_pointer_return_c(a, b);
}
extern "C" const char *return_const_char_lib_pointers_pointer_return_c(int a);
static const char *return_const_char(int a) {
return return_const_char_lib_pointers_pointer_return_c(a);
}
extern "C" const char *return_char_const_pointer_lib_pointers_pointer_return_c(int a);
static const char *return_char_const_pointer(int a) {
return return_char_const_pointer_lib_pointers_pointer_return_c(a);
}
extern "C" const struct MinMax *returns_const_struct_with_min_max_lib_pointers_pointer_return_c(int a, int b);
static const struct MinMax *returns_const_struct_with_min_max(int a, int b) {
return returns_const_struct_with_min_max_lib_pointers_pointer_return_c(a, b);
}
extern "C" void *void_pointer_return_int_usage_lib_pointers_pointer_return_c(int a, int b);
static void *void_pointer_return_int_usage(int a, int b) {
return void_pointer_return_int_usage_lib_pointers_pointer_return_c(a, b);
}
extern "C" void *void_pointer_return_char_usage_lib_pointers_pointer_return_c(char *a);
static void *void_pointer_return_char_usage(char *a) {
return void_pointer_return_char_usage_lib_pointers_pointer_return_c(a);
}
extern "C" int **returns_2d_pointer_for_int_lib_pointers_pointer_return_c(int a);
static int **returns_2d_pointer_for_int(int a) {
return returns_2d_pointer_for_int_lib_pointers_pointer_return_c(a);
}
extern "C" const struct MinMax **returns_2d_pointer_for_struct_lib_pointers_pointer_return_c(int a, int b);
static const struct MinMax **returns_2d_pointer_for_struct(int a, int b) {
return returns_2d_pointer_for_struct_lib_pointers_pointer_return_c(a, b);
}
extern "C" void *return_array_like_void_ptr_lib_pointers_pointer_return_c();
static void *return_array_like_void_ptr() {
return return_array_like_void_ptr_lib_pointers_pointer_return_c();
}
extern "C" int *return_nullptr_lib_pointers_pointer_return_c(int x);
static int *return_nullptr(int x) {
return return_nullptr_lib_pointers_pointer_return_c(x);
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
