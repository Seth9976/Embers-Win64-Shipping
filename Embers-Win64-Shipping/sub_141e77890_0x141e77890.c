// 函数: sub_141e77890
// 地址: 0x141e77890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_143251968
void* r8 = *(arg1 + 8)
*(arg2 + 0x18) = r8

if (r8 != 0)
    *(r8 + 0x48) += 1

*(arg2 + 0x10) = &data_143251988
return arg2 + 0x18
