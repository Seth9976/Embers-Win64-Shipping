// 函数: sub_141be2c40
// 地址: 0x141be2c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x1c8)

if (r8 == 0)
    return 

uint8_t rax = (*(arg1 + 0x1b4) & 0xfb) | arg2 << 2
*(arg1 + 0x1b4) = rax
*(r8 + 0x134) &= 0xfe
*(r8 + 0x134) |= rax u>> 2 & 1
