// 函数: sub_141d3b8f0
// 地址: 0x141d3b8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* temp0 = *(arg1 + 0x48)
*(arg1 + 0x48) = *(arg1 + 0x40)
*(arg1 + 0x40) = temp0

if (*(temp0 + 8) == 0)
    return 0

*(temp0 + 8) = 0
return **(arg1 + 0x40)
