// 函数: sub_141a21110
// 地址: 0x141a21110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1].d = 0x43c80000
*(arg2 + 0xc) = 1
arg2[2].d = 0x3f800000
*(arg2 + 0x14) = 0x2710
arg2[3].d = 0x2710
*(arg2 + 0x1c) = 0xffffffff
arg2[4].b = 0
__builtin_memcpy(arg2 + 0x24, 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"01\x01\x00", 
    0x1b)
char result = (*(arg2 + 0x3f) & 0xf9) | 1
*(arg2 + 0x3f) = result
arg2[8].w = 0x101
*(arg2 + 0x42) = 0
return result
