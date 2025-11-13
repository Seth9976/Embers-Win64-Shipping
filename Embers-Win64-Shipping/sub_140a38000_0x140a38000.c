// 函数: sub_140a38000
// 地址: 0x140a38000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_142e521a0
*(arg2 + 0x18) = *(arg1 + 8)
void* r8_1 = *(arg1 + 0x10)
*(arg2 + 0x20) = r8_1

if (r8_1 != 0)
    *(r8_1 + 0x48) += 1

*(arg2 + 0x10) = &data_142e521c0
return arg2 + 0x18
