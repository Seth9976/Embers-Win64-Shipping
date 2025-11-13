// 函数: sub_14221cc90
// 地址: 0x14221cc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x240)

if (result != 0 && *(result + 0x280) == arg1)
    *(result + 0x280) = 0

*(arg1 + 0x240) = result

if (result != 0)
    *(result + 0x280) = arg1

return result
