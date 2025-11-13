// 函数: sub_142ab3a20
// 地址: 0x142ab3a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) != 0)
    sub_142a7dcd0(*(arg1 + 0x30))
    *(arg1 + 0x30) = 0
    *(arg1 + 0x40) = 0

*(arg1 + 0x30) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x15) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0

if (*(arg2 + 0x40) == 0)
    int64_t rax_2 = *(arg2 + 0x30)
    *(arg1 + 0x30) = rax_2
    return rax_2

*(arg1 + 0x40) = 1
*(arg1 + 0x30) = *(arg2 + 0x30)
int32_t rax_1 = *(arg2 + 0x38)
*(arg1 + 0x38) = rax_1
*(arg2 + 0x30) = 0
*(arg2 + 0x40) = 0
return rax_1
