// 函数: sub_141ee9790
// 地址: 0x141ee9790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = data_143a2d668

if (zmm0 < 0f)
    *(arg1 + 0x387) |= 0x20
    return zmm0

int32_t zmm1 = *(sub_1405be820(arg1) + 0x528)
int32_t zmm0_1 = zmm1 f- *(arg1 + 0x290)

if (zmm0_1 f< data_143a2d668)
    *(arg1 + 0x294) += 1
    *(arg1 + 0x387) |= 0x20
    return zmm0_1

*(arg1 + 0x387) |= 0x20
*(arg1 + 0x290) = zmm1
*(arg1 + 0x294) = 0
return zmm0_1
