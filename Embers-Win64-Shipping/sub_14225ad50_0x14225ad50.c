// 函数: sub_14225ad50
// 地址: 0x14225ad50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*(arg1 + 0x3a) |= 2
*(arg1 + 0x89) |= 0x80
*arg1 = &data_14330f808
arg1[5] = &data_142d46f40
arg1[7].b = 4
__builtin_memcpy(&arg1[0x3e], 
    "\x00\x00\xc8\x41\x00\x00\x40\x40\x00\x00\xc8\x42\x00\x00\x20\x41\x01\x01", 0x12)
*(arg1 + 0x204) = 0
return arg1
