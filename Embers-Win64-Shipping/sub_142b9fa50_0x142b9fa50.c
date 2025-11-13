// 函数: sub_142b9fa50
// 地址: 0x142b9fa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1170) = arg2
int32_t r11 = *(arg2 + 0x24)
*(arg1 + 0x1168) = r11
*(arg1 + 8) = *(arg2 + 0x3c)
*(arg1 + 0xc) = *(arg2 + 0x40)
*(arg1 + 0x10) = *(arg2 + 0x1c94)
*(arg1 + 0x14) = *(arg2 + 0x1c98)
int32_t r10 = *(arg2 + 0x20)
int32_t rdx = 0

if (r10 - 2 u<= 1)
    rdx = 1

if (((r10 - 2) & 0xfffffffd) == 0)
    rdx |= 2

if (((r10 - 1) & 0xfffffffd) != 0)
    rdx |= 4

int32_t r11_1 = r11 | 4
int32_t rax_9 = r11_1 | 8

if (*(*(*(arg2 + 0x30) + 0x2d8) + 0x20) != 0)
    rax_9 = r11_1

*(arg1 + 0x1168) = rax_9
int32_t rax_11 = rdx | 8

if (r10 != 2)
    rax_11 = rdx

*(arg1 + 0x116c) = rax_11
return 0
