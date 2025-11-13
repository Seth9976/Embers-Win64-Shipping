// 函数: sub_141778320
// 地址: 0x141778320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *arg2
int128_t zmm8 = *(arg2 + 4)
int64_t zmm0
zmm0.d = zmm8.q.d f* zmm8.d
int128_t zmm9 = *(arg2 + 8)
float temp0[0x4] = _mm_sqrt_ss(0, zmm7.d f* zmm7.d f+ zmm0.d + zmm9.d f* zmm9.d)
temp0[0] = temp0[0] * 0.5f

if (_mm_cvtps_pd(temp0[0].q) f<= 1e-08)
    zmm0 = 0x3f800000
else
    zmm0.d = sinf(temp0[0].q.d).d f/ temp0[0]

zmm0.d = zmm0.d f* 0.5f
zmm7.d = zmm7.d f* zmm0.d
zmm8.d = zmm8.d f* zmm0.d
zmm9.d = zmm9.d f* zmm0.d
zmm0 = temp0[0].q
*arg1 = zmm7.d
arg1[1] = zmm8.d
arg1[2] = zmm9.d
arg1[3] = cosf(zmm0.d)
return arg1
