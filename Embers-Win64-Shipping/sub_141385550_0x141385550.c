// 函数: sub_141385550
// 地址: 0x141385550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg3
*(arg1 + 8) = *(arg3 + 0x1598)
arg1[4] = *(arg3 + 8)
__builtin_memset(&arg1[5], 0, 0x18)
arg1[8] = arg2
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb].d = *(*arg1 + 0x1548)
arg1[0xc] = *(arg3 + 0x5150)
arg1[0xd].w = 0
int64_t rax_3 = data_143ec4fdc
arg1[3].d = rax_3.d
*(arg1 + 0x1c) = (rax_3 u>> 0x20).d
return arg1
