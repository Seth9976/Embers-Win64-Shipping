// 函数: sub_141a0dfa0
// 地址: 0x141a0dfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 0x488)
int32_t result = *(arg1 + 0x498)
arg2 = arg2 / arg3
int32_t result_1 = result
int96_t var_38 = zmm0[0].12

if (not(arg2 > _mm_shuffle_ps(zmm0, zmm0, 0xff)[0]))
    return result

zmm0 = var_38:4.d

if (not(arg2 <= zmm0[0]))
    result.b = 0
    return result

zmm0[0] = zmm0[0] / arg2
int128_t zmm6
zmm6.d = logf(zmm0[0]).d f/ logf(var_38:8.d.d)
zmm6.d = zmm6.d f+ 1f
return zx.q(int.d(zmm6.d))
