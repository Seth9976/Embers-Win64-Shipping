// 函数: sub_1424281a0
// 地址: 0x1424281a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x100
__builtin_memset(&arg1[4], 0, 0x30)
void* rdx = &arg1[0x1c]
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
*(arg1 + 0x58) = 0xffffffff
*(arg1 + 0x5c) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
return arg1
