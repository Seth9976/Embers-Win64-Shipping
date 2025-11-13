// 函数: sub_1427ab2a0
// 地址: 0x1427ab2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
char rax = sub_1422a6b20(arg1, arg3)
int32_t rcx_4 = (((arg2[1].d & 0xfffffffb) | zx.d(rax) << 2) & 0xfffffef7) | 2
arg2[1].d = rcx_4
arg2[1].d = ((zx.d(*(arg1 + 0x3c)) u>> 1 ^ rcx_4) & 0x20) ^ rcx_4
return arg2
