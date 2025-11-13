// 函数: sub_14265c320
// 地址: 0x14265c320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
sub_1422a6b20(arg1, arg3)
arg2[1].d = (arg2[1].d & 0xfffffffb) | 2
char rax_3 = sub_1422a6b20(arg1, arg3)
uint8_t rcx_1 = (*(arg2 + 2) & 0xbf) | rax_3 << 6
*(arg2 + 2) = ((rcx_1 u>> 2 ^ rcx_1) & 0x10) ^ rcx_1
char rax_5 = sub_1422a69b0(arg1, arg3)
arg2[1].d = ((arg2[1].d & 0xfffffff7) | zx.d(rax_5) << 3) & 0xfffffeff
return arg2
