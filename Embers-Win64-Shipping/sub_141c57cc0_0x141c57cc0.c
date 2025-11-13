// 函数: sub_141c57cc0
// 地址: 0x141c57cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_14320ad60
*(arg2 + 0x18) = *(arg1 + 8)
*(arg2 + 0x20) = *(arg1 + 0x10)
void* rdx = *(arg1 + 0x18)
*(arg2 + 0x28) = rdx

if (rdx != 0)
    *(rdx + 0xc) += 1

*(arg2 + 0x10) = &data_14320ad80
return arg2 + 0x18
