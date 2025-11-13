// 函数: sub_1406361a0
// 地址: 0x1406361a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *arg3 - *arg1
float zmm3 = arg3[1] f- arg1[1]
float zmm4 = *(arg2 + 4) - arg1[1]
int128_t zmm6
zmm6.d = arg3[2].d f- arg1[2]
int128_t zmm7
zmm7.d = (*arg2).d f- *arg1
int128_t zmm8
zmm8.d = (*(arg2 + 8)).d f- arg1[2]

if (zmm3 * zmm4 + zmm5 f* zmm7.d + zmm6.d f* zmm8.d <= 0f)
    return 1

zmm7.d = zmm7.d f* zmm7.d
zmm6.d = zmm6.d f* zmm6.d
zmm8.d = zmm8.d f* zmm8.d
float temp0 = _mm_sqrt_ss(0, zmm3 * zmm3 + zmm5 * zmm5 f+ zmm6.d)

if (_mm_sqrt_ss(0, zmm4 * zmm4 f+ zmm7.d f+ zmm8.d) >= temp0)
    return 0

return 2
