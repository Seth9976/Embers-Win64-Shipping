// 函数: sub_1418d12b0
// 地址: 0x1418d12b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142feee28
__builtin_memset(&arg1[1], 0, 0x98)
*(arg1 + 0xa6) = 1
*(arg1 + 0xa5) = 0
__builtin_memset(&arg1[0x15], 0, 0x58)
void* rcx = &arg1[0x20]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
arg1[0x26] = 0
arg1[0x27].d = 0
arg1[0x28].d = arg4
*(arg1 + 0x144) = arg3
__builtin_memset(&arg1[0x29], 0, 0x20)
arg1[0x2d] = arg2
return arg1
