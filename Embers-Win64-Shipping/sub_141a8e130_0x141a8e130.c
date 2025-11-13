// 函数: sub_141a8e130
// 地址: 0x141a8e130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a8f050(arg1)
*arg1 = &data_143042280
arg1[0x19] = 0
arg1[0x1a].d = 0x7fffffff
*(arg1 + 0xd4) = 0xffffffff
arg1[0x1b] = data_143dbb1f8.q
arg1[0x1c].d = data_143dbb200
*(arg1 + 0xe4) = data_143dbb208
*(arg1 + 0xec) = data_143dbb210
__builtin_memcpy(&arg1[0x1e], 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x01\x01\x01", 0x12)
return arg1
