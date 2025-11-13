// 函数: sub_141c57ab0
// 地址: 0x141c57ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_14320ae60
*(arg2 + 0x18) = *(arg1 + 8)
void* r8 = *(arg1 + 0x10)
*(arg2 + 0x20) = r8

if (r8 != 0)
    *(r8 + 8) += 1

*(arg2 + 0x28) = *(arg1 + 0x18)
*(arg2 + 0x10) = &data_14320ae80
return arg2 + 0x18
