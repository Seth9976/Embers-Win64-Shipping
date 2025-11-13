// 函数: sub_142070f60
// 地址: 0x142070f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4] = *arg1
float zmm11[0x4] = arg4
int128_t zmm12 = *(arg1 + 4)
int32_t var_9c = 0
float var_a8[0x4]
var_a8[0] = zmm10[0]
int128_t zmm13 = *(arg1 + 8)
float temp0[0x4] = _mm_shuffle_ps(var_a8, var_a8, 0xe1)
temp0[0] = zmm12.d
int64_t var_98 = 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm13.d
int32_t var_90 = 0
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
int96_t var_a8_1 = temp0_2[0].12
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), arg5[3])
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), arg5[1])
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), arg5[2])
float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *arg5)
float zmm6[0x4] = _mm_add_ps(_mm_add_ps(temp0_4, temp0_8), _mm_add_ps(temp0_6, temp0_10))
zmm6[0] = zmm6[0] * zmm6[0]
float zmm8[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float zmm7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
zmm8[0] = zmm8[0] * zmm8[0]
zmm8[0] = zmm8[0] + zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] + zmm7[0]

if (zmm8[0] <= 9.99999994e-09f)
    zmm6 = zx.o(0)
    zmm8 = zx.o(0)
    zmm7 = zx.o(0)
else
    arg4 = zx.o(0)
    float zmm2[0x4] = 0x3f000000
    arg4[0] = zmm8[0]
    float temp0_16[0x4] = _mm_rsqrt_ss(arg4[0], arg4[0])
    arg4[0] = arg4[0] * 0.5f
    temp0_16[0] = temp0_16[0] * temp0_16[0]
    arg4[0] = arg4[0] * temp0_16[0]
    zmm2[0] = 0.5f - arg4[0]
    temp0_16[0] = temp0_16[0] * zmm2[0]
    temp0_16[0] = temp0_16[0] + temp0_16[0]
    temp0_16[0] = temp0_16[0] * temp0_16[0]
    arg4[0] = arg4[0] * temp0_16[0]
    temp0_16[0] = temp0_16[0] * (0.5f - arg4[0])
    temp0_16[0] = temp0_16[0] + temp0_16[0]
    zmm6[0] = zmm6[0] * temp0_16[0]
    zmm8[0] = zmm8[0] * temp0_16[0]
    zmm7[0] = zmm7[0] * temp0_16[0]

var_a8_1:8.d = zmm7[0]

if (not(zmm11[0] >= 0f))
    zmm7 ^= 0x80000000
    zmm6 ^= 0x80000000
    var_a8_1:8.d = zmm7[0]
    zmm8 ^= 0x80000000

float zmm0[0x4] = *(arg1 + 0xc)
zmm10[0] = zmm10[0] * zmm0[0]
int64_t var_98_1 = 0
zmm12.d = zmm12.d f* zmm0[0]
int32_t var_90_1 = 0
float temp0_17[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe1)
zmm13.d = zmm13.d f* zmm0[0]
temp0_17[0] = zmm12.d
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
temp0_18[0] = zmm13.d
float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x27)
temp0_19[0] = 0x3f800000
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
float temp0_22[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0xff), arg3[3])
float temp0_24[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0x55), arg3[1])
float temp0_26[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0xaa), arg3[2])
float temp0_28[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_20, temp0_20, 0), *arg3)
float temp0_29[0x4] = _mm_add_ps(temp0_22, temp0_26)
*arg2 = (_mm_unpacklo_ps(zmm6, zmm8[0].q)).q
float temp0_31[0x4] = _mm_add_ps(temp0_24, temp0_28)
arg2[1].d = var_a8_1:8.d
float temp0_32[0x4] = _mm_add_ps(temp0_29, temp0_31)
float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x55)
temp0_33[0] = temp0_33[0] * zmm8[0]
temp0_32[0] = temp0_32[0] * zmm6[0]
float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xaa)
temp0_34[0] = temp0_34[0] * zmm7[0]
temp0_33[0] = temp0_33[0] + temp0_32[0]
temp0_33[0] = temp0_33[0] + temp0_34[0]
*(arg2 + 0xc) = temp0_33[0]
return arg2
