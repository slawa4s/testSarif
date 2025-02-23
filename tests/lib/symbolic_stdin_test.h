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

typedef __ssize_t ssize_t;

typedef unsigned long size_t;

typedef __gid_t gid_t;

typedef __uid_t uid_t;

typedef __off_t off_t;

typedef __useconds_t useconds_t;

typedef __pid_t pid_t;

typedef __intptr_t intptr_t;

typedef __socklen_t socklen_t;


extern "C" int check_password_lib_symbolic_stdin_c(int fd);
static int check_password(int fd) {
return check_password_lib_symbolic_stdin_c(fd);
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
