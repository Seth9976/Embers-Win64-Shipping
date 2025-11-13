// 函数: sub_1406324e0
// 地址: 0x1406324e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 4)
float zmm1 = *(arg1 + 8)
int128_t zmm3 = *arg1
float zmm4 = *arg4
int128_t zmm6
zmm6.d = zmm3.d f- zmm4
float zmm8[0x4] = arg4[1]
zmm0[0] = zmm0[0] - zmm8[0]
zmm8[0] = zmm8[0] - zmm0[0]
int128_t zmm9 = arg3
arg3 = arg4[2]
zmm4 = (zmm4 f- zmm3.d) * *arg2
float zmm5 = zmm1 f- arg3.d
arg3.d = arg3.d f- zmm1
zmm6.d = zmm6.d f* zmm6.d
zmm8[0] = zmm8[0] * arg2[1]
arg3.d = arg3.d f* arg2[2]
zmm0[0] = zmm0[0] * zmm0[0]
zmm8[0] = zmm8[0] + zmm4
zmm0[0] = zmm0[0] f+ zmm6.d
zmm8[0] = zmm8[0] f+ arg3.d
zmm0[0] = zmm0[0] + zmm5 * zmm5
zmm8[0] = zmm8[0] * zmm8[0]
zmm0[0] = zmm0[0] - zmm8[0]
zmm1 = arg5 * arg5 - zmm0[0]

if (not(zmm1 < 0f))
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm1)
    zmm8[0] = zmm8[0] - temp0_1[0]
    zmm8[0] = zmm8[0] f/ zmm9.d

int64_t result

if (zmm1 < 0f || zmm8[0] < 0f || zmm8[0] > 1f)
    result.b = 0
else
    result.b = 1

return result
