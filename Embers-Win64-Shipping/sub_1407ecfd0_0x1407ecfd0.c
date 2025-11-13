// 函数: sub_1407ecfd0
// 地址: 0x1407ecfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0xa0)
uint64_t result = 0xffffffff

if (0xffffffff == *(r8 + 8))
    *(r8 + 8) = 0
else
    result = zx.q(*(r8 + 8))

if (arg2 != 0)
    result = *(arg1 + 0xa0)
    *(arg1 + 0x98) = result

*(arg1 + 0xa0) = 0
return result
