// 函数: sub_141a1bca0
// 地址: 0x141a1bca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x44) = 0x3f800000
*arg1 = &data_143022c80
__builtin_memset(&arg1[0xc], 0, 0x20)
arg1[8].d = 0x447a0000
__builtin_memcpy(&arg1[9], 
    "\x00\x00\x7a\x44\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\xfa\x44", 
    0x18)
return arg1
