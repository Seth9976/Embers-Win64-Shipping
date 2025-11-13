// 函数: sub_142351910
// 地址: 0x142351910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142380d90(arg1, arg2)
*arg1 = &data_14332bcf8
arg1[8] = &data_14332c000
arg1[9] = &data_14332c030
__builtin_memset(&arg1[0xa], 0, 0x14)
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0x13] = 0
__builtin_memset(&arg1[0x15], 0, 0x30)
__builtin_memset(&arg1[0x22], 0, 0x18)
char rax = *(arg1 + 0x94) & 0x97
*(arg1 + 0x10c) = 0xffffffff
*(arg1 + 0x7c) = 4
*(arg1 + 0x94) = rax | 4
*(arg1 + 0x64) = 0x3f800000
return arg1
