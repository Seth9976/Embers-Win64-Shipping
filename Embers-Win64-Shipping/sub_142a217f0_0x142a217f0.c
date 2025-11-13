// 函数: sub_142a217f0
// 地址: 0x142a217f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r11 = *(arg1 + 0x64)
int32_t r8 = *(arg1 + 8)
int32_t r9 = *(arg1 + 0xc)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r11)
int32_t rax_3 = (temp1 - temp0) s>> 1
sub_142a21560(*(arg1 + 0x38), *(arg1 + 0x10), r8, r9, r11, r11, *(arg1 + 4) - r9 + r11, 
    r11 - r8 + *arg1)
int32_t r8_1 = *(arg1 + 0x1c)
int32_t r9_1 = *(arg1 + 0x20)
sub_142a21560(*(arg1 + 0x40), *(arg1 + 0x24), r8_1, r9_1, rax_3, rax_3, 
    *(arg1 + 0x18) - r9_1 + rax_3, *(arg1 + 0x14) - r8_1 + rax_3)
int32_t r8_2 = *(arg1 + 0x1c)
int32_t r9_2 = *(arg1 + 0x20)
return sub_142a21560(*(arg1 + 0x48), *(arg1 + 0x24), r8_2, r9_2, rax_3, rax_3, 
    *(arg1 + 0x18) - r9_2 + rax_3, *(arg1 + 0x14) - r8_2 + rax_3)
