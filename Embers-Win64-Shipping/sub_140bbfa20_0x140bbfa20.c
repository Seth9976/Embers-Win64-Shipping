// 函数: sub_140bbfa20
// 地址: 0x140bbfa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4c2a0(arg1)
arg1[0x12] = arg2
arg1[0x14] = 0
*arg1 = &data_142e86be0
int64_t rdx
rdx.b = 1
arg1[0x15].d = arg6
*(arg1 + 0xac) = arg7
arg1[0x16].d = arg8
*(arg1 + 0xb4) = arg9
arg1[0x17] = arg10
arg1[0x13] = arg3
__builtin_memset(&arg1[0x18], 0, 0x18)
(*arg1)[0x15](arg1, rdx)
int64_t rdx_1
rdx_1.b = 1
(*arg1)[0x1b](arg1, rdx_1)
*(arg1 + 0x2a) = (*(arg1 + 0x2a) & 0xef) | 1
arg1[6].d |= arg11 | 0x1000
sub_140bc2650(arg1, arg4, arg5)
return arg1
