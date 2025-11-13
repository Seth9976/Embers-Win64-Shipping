// 函数: sub_140a38040
// 地址: 0x140a38040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_142e521e0
void* r8 = *(arg1 + 8)
*(arg2 + 0x18) = r8

if (r8 != 0)
    *(r8 + 0x48) += 1

*(arg2 + 0x10) = &data_142e52200
return arg2 + 0x18
