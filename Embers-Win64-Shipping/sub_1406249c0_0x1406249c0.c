// 函数: sub_1406249c0
// 地址: 0x1406249c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10_2 = *(arg1 + 0x50)

if (r10_2 == 0)
    return 

*(r10_2 + 0x30c) = *(arg1 + 0x4c)
*(*(arg1 + 0x50) + 0x1fc) = *(arg1 + 0x48)
jump(*(**(arg1 + 0x50) + 0x2c0))
