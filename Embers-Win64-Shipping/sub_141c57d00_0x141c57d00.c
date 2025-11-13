// 函数: sub_141c57d00
// 地址: 0x141c57d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_14320ae60
*(arg2 + 0x18) = *(arg1 + 8)
void* r8 = *(arg1 + 0x10)
*(arg2 + 0x20) = r8

if (r8 != 0)
    *(r8 + 8) += 1

int32_t rcx = *(arg1 + 0x18)
*(arg2 + 0x10) = &data_14320af20
*(arg2 + 0x28) = rcx
return arg2 + 0x18
