// 函数: sub_141d34820
// 地址: 0x141d34820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x260) = *arg2
*(arg1 + 0x270) = arg2[1]
*(arg1 + 0x280) = arg2[2]
*(arg1 + 0x290) = arg2[3].q
int32_t result = *(arg2 + 0x38)
*(arg1 + 0x298) = result
*(arg1 + 0x250) = 1
return result
