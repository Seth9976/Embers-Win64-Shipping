// 函数: sub_140591020
// 地址: 0x140591020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x28)
int64_t* rax = j_sub_140a82f30(0x10)
rax[1] = 0
*arg1 = rax
*rax = arg1
int64_t** rcx = *arg1
*arg1 = *arg2
*arg2 = rcx
int64_t* rax_2 = *arg1

if (rax_2 != 0)
    *rax_2 = arg1
    rcx = *arg2

if (rcx != 0)
    *rcx = arg2

arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
__builtin_memset(&arg2[1], 0, 0x20)
return arg1
