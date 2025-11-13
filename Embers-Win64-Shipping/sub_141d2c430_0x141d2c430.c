// 函数: sub_141d2c430
// 地址: 0x141d2c430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xff7fffff
*arg1 = &data_1432227f8
void* rcx = &arg1[7]
arg1[2] = 0
arg1[3] = 0
arg1[4].d = 0xff7fffff
arg1[9] = 0
arg1[0xa] = 0
__builtin_memset(&arg1[0xb], 0, 0x20)
__builtin_memset(&arg1[5], 0, 0x2c)
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x15]
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0x10] = 0
arg1[0xf].d = 0xff7fffff
arg1[0x11] = 0
arg1[0x12].d = 0xff7fffff
arg1[0x17] = 0
arg1[0x18] = 0
__builtin_memset(&arg1[0x19], 0, 0x20)
__builtin_memset(&arg1[0x13], 0, 0x2c)
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
arg1[0x1b] = 0
arg1[0x1c].d = 0
arg1[0x1d] = &arg1[1]
arg1[0x1e] = &arg1[0xf]
return arg1
