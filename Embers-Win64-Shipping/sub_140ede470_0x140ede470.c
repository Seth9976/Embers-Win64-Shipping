// 函数: sub_140ede470
// 地址: 0x140ede470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *(arg1 + 0x10)
zmm0 - 0f
int128_t zmm3 = data_1439b38dc

if (not(zmm0 > 0f))
    zmm3 ^= data_142d3f780

arg2 = (zmm0 f* data_1439b38d8 f+ zmm3.d) * arg2

if (not(zmm0 <= 0f))
    float temp0_1 = _mm_max_ss(zmm0 - arg2, 0)
    *(arg1 + 0x10) = temp0_1
    return temp0_1

if (not(zmm0 >= 0f))
    zmm0 = _mm_min_ss(zmm0 - arg2, 0)
    *(arg1 + 0x10) = zmm0

return zmm0
