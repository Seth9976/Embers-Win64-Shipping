// 函数: sub_141c57df0
// 地址: 0x141c57df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_14320aee0
*(arg2 + 0x18) = *(arg1 + 8)
void* r8_1 = *(arg1 + 0x10)
*(arg2 + 0x20) = r8_1

if (r8_1 != 0)
    *(r8_1 + 8) += 1

*(arg2 + 0x10) = &data_14320af00
return arg2 + 0x18
