// 函数: sub_141c764c0
// 地址: 0x141c764c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg2[0x14].b
*arg2 = 0x100
arg2[1].b = 1
result = (result & 0xfb) | 3
arg2[0x14].b = result
*(arg2 + 4) = 0
__builtin_memcpy(&arg2[4], 
    "\x00\x00\xc0\xc0\x00\x00\xc0\x3f\x00\x00\x20\x41\x00\x00\x40\x40\x00\x00\x20\x41\x00\x00\xc8\x42", 
    0x18)
*(arg2 + 0x20) = 0
*(arg2 + 0x2c) = 0
arg2[0x1a].b &= 0xfe
*(arg2 + 0x38) = 0x41a00000
arg2[0x20].b &= 0xfe
*(arg2 + 0x44) = 0x41a00000
*(arg2 + 0x44) = 0x469c4000
return result
