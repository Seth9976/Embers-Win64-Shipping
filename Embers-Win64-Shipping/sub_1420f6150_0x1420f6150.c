// 函数: sub_1420f6150
// 地址: 0x1420f6150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = arg2[1] f- *(arg1 + 0xb4)
float zmm2 = *arg2 f- *(arg1 + 0xb0)
float zmm1 = arg2[2] f- *(arg1 + 0xb8)
float zmm0 = *(arg1 + 0x170) f+ arg2[6]
int64_t result
result.b = zmm3 * zmm3 + zmm2 * zmm2 + zmm1 * zmm1 <= zmm0 * zmm0
return result
