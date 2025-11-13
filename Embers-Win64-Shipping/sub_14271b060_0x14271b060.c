// 函数: sub_14271b060
// 地址: 0x14271b060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
*arg1 = &data_143481d90
arg1[5] = &data_143482210
__builtin_memset(&arg1[0x19], 0, 0x28)
*(arg1 + 0x3a) &= 0xfd
*(arg1 + 0x8a) |= 0x10
*(arg1 + 0x89) &= 0x7f
*(arg1 + 0xc4) |= 0xf
__builtin_memcpy(&arg1[0x16], 
    "\x00\x00\xaf\x44\x00\x00\x2f\x45\x00\x40\x9c\x45\x00\x00\x00\x3f\x00\x00\x80\x3f", 0x14)
arg1[0x1e].d = 0x42b40000
*(arg1 + 0xf4) = 0x32510b46
return arg1
