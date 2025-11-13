// 函数: sub_141c30d00
// 地址: 0x141c30d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x3f800000
arg1[1].d = 0x3f4ccccd
*(arg1 + 0xc) = 0x3f000000
__builtin_strncpy(&arg1[2], "333?", 0xc)
__builtin_memcpy(arg1 + 0x1c, 
    "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00", 0x15)
return arg1
