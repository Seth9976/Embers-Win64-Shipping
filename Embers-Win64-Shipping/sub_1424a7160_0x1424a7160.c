// 函数: sub_1424a7160
// 地址: 0x1424a7160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg2[1]
*arg2 = 0x77
*(arg2 + 4) = 0x40
arg2[1] = (rax & 0xf2) | 2
__builtin_memcpy(&arg2[0xc], 
    "\x01\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x18)
*(arg2 + 0x28) = 0
return 0
