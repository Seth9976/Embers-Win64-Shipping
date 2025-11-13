// 函数: sub_142ab4be0
// 地址: 0x142ab4be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg2

if (*(arg1 + 0x40) != 0)
    sub_142a7dcd0(*(arg1 + 0x30))
    *(arg1 + 0x30) = 0
    *(arg1 + 0x40) = 0

*(arg1 + 0x30) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0

if (0x7fffffffffffffff + rdi u<= 0x7ffffffffffffffe)
    rdi = neg.q(rdi)
    *(arg1 + 0x14) = data_143ccaf50

if (rdi != 0)
    sub_142ab2f00(arg1, rdi)
    sub_142ab3280(arg1)

return arg1
