// 函数: sub_141932d90
// 地址: 0x141932d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_142ff87e8
void* r8 = *(arg1 + 8)
*(arg2 + 0x18) = r8

if (r8 != 0)
    *(r8 + 8) += 1

*(arg2 + 0x10) = &data_142ff8808
return arg2 + 0x18
