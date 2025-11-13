// 函数: sub_1426e2630
// 地址: 0x1426e2630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80

if (sub_142315ab0(*arg3 + 0x28, *(arg1 + 0x200)) != 0 && sub_1422a6b20(arg1, arg3) != 0)
    if ((*(arg1 + 0x290) & 1) == 0)
        rsi = 4
    else if (*(arg1 + 0x280) != 0 && sub_1405949a0() != 0)
        rsi = 4

arg2[1].d &= 0xfffffffb
arg2[1].d |= rsi | 2
char rax_3 = sub_1422a6b20(arg1, arg3)
uint8_t rcx_5 = (*(arg2 + 2) & 0xbf) | rax_3 << 6
*(arg2 + 2) = ((rcx_5 u>> 2 ^ rcx_5) & 0x10) ^ rcx_5
return arg2
