// 函数: sub_141eb6340
// 地址: 0x141eb6340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_14325b3c8
arg1[6] = 0
arg1[7].d &= 0xfffffffb
__builtin_memset(&arg1[0xa], 0, 0x20)
arg1[6] = sub_14249be50()
arg1[7].d &= 0xfffffffd
__builtin_memcpy(arg1 + 0x3c, 
    "\x00\x40\x1c\x46\x00\x00\xb8\x41\x00\x00\xa8\x41\x00\x00\xf0\x41\x02", 0x11)
return arg1
