// 函数: sub_141f70ae0
// 地址: 0x141f70ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result = *(arg2 + 8)
float zmm0[0x4] = 0xca000000

if (result >= -2097152f)
    result = _mm_min_ss(result, 0x4a000000)
else
    result = -2097152f

int64_t zmm1 = *(arg2 + 4)

if (zmm1.d f>= -2097152f)
    zmm1 = _mm_min_ss(zmm1.d, 0x4a000000)
else
    zmm1 = 0xca000000

float zmm4[0x4] = *arg2

if (not(zmm4[0] < -2097152f))
    zmm0 = _mm_min_ss(zmm4[0], 0x4a000000)

*(arg1 + 0x524) |= 4
arg1[0x9c] = (_mm_unpacklo_ps(zmm0, zmm1)).q
arg1[0x9d].d = result

if (arg3 == 0)
    return result

return sub_141f76840(arg1, 0) __tailcall
