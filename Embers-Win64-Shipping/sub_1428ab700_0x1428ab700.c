// 函数: sub_1428ab700
// 地址: 0x1428ab700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2 | *(arg1 + 0x14)
*(arg1 + 0x14) = rax

if ((arg2 & 0x780) != 0)
    *(arg1 + 0x14) = rax | 0x80

return 1
