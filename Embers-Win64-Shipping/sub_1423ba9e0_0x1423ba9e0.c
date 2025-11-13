// 函数: sub_1423ba9e0
// 地址: 0x1423ba9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423ba700(arg1, arg2)
*(arg1 + 0x3d) |= 2
arg1[0xc].b |= 1
*(arg1 + 0xbc) &= 0xfffffffc
*(arg1 + 0xd5) |= 3
*arg1 = &data_14333d148
arg1[8] = &data_142fcdd98
*(arg1 + 0x5f) = 0x12
__builtin_memcpy(arg1 + 0xc4, 
    "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 0x11)
return arg1
