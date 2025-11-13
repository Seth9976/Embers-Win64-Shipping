// 函数: sub_1427a31b0
// 地址: 0x1427a31b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_1434b9ee0
*(arg2 + 0x18) = *(arg1 + 8)
*(arg2 + 0x20) = *(arg1 + 0x10)
void* rdx = *(arg1 + 0x18)
*(arg2 + 0x28) = rdx

if (rdx != 0)
    *(rdx + 8) += 1

*(arg2 + 0x10) = &data_1434b9f00
return arg2 + 0x18
