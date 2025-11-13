// 函数: sub_140ff8650
// 地址: 0x140ff8650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg2 + 0x18)

if (*(arg1 + 0x1988) == rdx && *(arg1 + 0x1980) == arg3)
    return 

*(arg1 + 0x1988) = rdx
*(arg1 + 0x1980) = arg3
jump(*(**(arg1 + 0x170) + 0x120))
