// 函数: sub_1423fa870
// 地址: 0x1423fa870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(&arg1[2], 0, 0x50)
*(arg1 + 0x58) = arg2
*(arg1 + 0x60) = arg3
*(arg1 + 0x68) = 0
arg1[0x21] = arg5
arg1[0x29] = arg8
arg1[0x20] = arg4
arg1[0x22] = arg6
*(arg1 + 0x70) = 0
arg1[0x1e] = 0xffffffff
arg1[0x1f].b = 0
*(arg1 + 0x8d) = 0
arg1[0x24] = arg7
*(arg1 + 0x95) = 0
arg1[0x28] = 0
__builtin_memset(&arg1[0x2a], 0, 0x20)
void* rcx = &arg1[0x32]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x3a] = 0xffffffff
arg1[0x3b] = 0
*(arg1 + 0xf8) = 0
arg1[0x40] = 0
sub_142403fc0(arg1, arg2.d)
return arg1
