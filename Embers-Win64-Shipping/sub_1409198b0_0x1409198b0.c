// 函数: sub_1409198b0
// 地址: 0x1409198b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e20cf8
__builtin_memset(&arg1[1], 0, 0x20)
arg1[5] = &data_142e20cf0
__builtin_memset(&arg1[6], 0, 0x12)
__builtin_memset(arg1 + 0x44, 0, 0x14)
void* rcx = &arg1[0xb]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
__builtin_memset(&arg1[0x13], 0, 0x18)
arg1[0x16].d = 0x270f
return arg1
