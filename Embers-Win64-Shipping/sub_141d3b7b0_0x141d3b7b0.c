// 函数: sub_141d3b7b0
// 地址: 0x141d3b7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*(arg1 + 0x38) + 8) = 1
void* result = *(arg1 + 0x48)
*(arg1 + 0x48) = *(arg1 + 0x38)
*(arg1 + 0x38) = result
*(result + 8) = 0
return result
