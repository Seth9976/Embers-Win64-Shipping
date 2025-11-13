// 函数: sub_142873820
// 地址: 0x142873820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x28)

if (r8 == 0 || arg2 == 0)
    return 0

*arg2 = *(arg1 + 0x18) - *(r8 + 0x18)
return 1
