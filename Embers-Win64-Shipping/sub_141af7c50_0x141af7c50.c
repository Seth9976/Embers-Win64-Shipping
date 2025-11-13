// 函数: sub_141af7c50
// 地址: 0x141af7c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143032190
__builtin_memset(&arg1[1], 0, 0x12)
__builtin_memset(&arg1[4], 0, 0x18)
memset(&arg1[8], 0, 0x58)
__builtin_memset(&arg1[7], 0, 0x20)
void* rcx_1 = &arg1[0xb]
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
*arg1 = &data_143057da0
arg1[6] = sub_141b421d0()
return arg1
