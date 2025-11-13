// 函数: sub_141f49500
// 地址: 0x141f49500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm13 = *(arg2 + 0x38)
*(arg1 + 0x28) = (_mm_unpacklo_ps(arg2[3].d, (*(arg2 + 0x34)).q)).q
*(arg1 + 0x30) = zmm13.d
uint32_t var_c8[0x4][0x4]
uint32_t (* rax_1)[0x4]
float zmm9_1
float zmm12_1
float zmm13_1
rax_1, zmm9_1, zmm12_1, zmm13_1 = sub_140631b10(arg2, &var_c8)
float zmm2[0x4] = data_142d4cc00
int32_t result = (zx.o(0)).d
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
*(arg1 + 0x50) = *rax_1
*(arg1 + 0x60) = rax_1[1]
int32_t var_d0 = 0
*(arg1 + 0x70) = rax_1[2]
*(arg1 + 0x80) = rax_1[3]
float temp0_2[0x4] = __mulps_xmmps_memps(temp0_1, arg2[2])
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
uint32_t zmm0_1[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
float zmm7[0x4] = _mm_add_ps(_mm_add_ps(temp0_2, zmm0_1), _mm_add_ps(temp0_4, temp0_8))
zmm0_1 = zmm7
zmm0_1[0] = zmm0_1[0] f* zmm7[0]
float zmm8[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float zmm6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
zmm8[0] = zmm8[0] * zmm8[0]
zmm8[0] = zmm8[0] f+ zmm0_1[0]
zmm0_1 = zmm6
zmm0_1[0] = zmm0_1[0] f* zmm6[0]
zmm8[0] = zmm8[0] f+ zmm0_1[0]
float zmm1[0x4]
float zmm3_1[0x4]
uint32_t zmm5_1[0x4]

if (not(zmm8[0] == 1f))
    if (zmm8[0] >= 9.99999994e-09f)
        zmm3_1 = zx.o(0)
        zmm2 = 0x3f000000
        zmm3_1[0] = zmm8[0]
        zmm5_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * 0.5f
        zmm5_1[0] = zmm5_1[0] f* zmm5_1[0]
        zmm3_1[0] = zmm3_1[0] f* zmm5_1[0]
        zmm2[0] = 0.5f - zmm3_1[0]
        zmm5_1[0] = zmm5_1[0] f* zmm2[0]
        zmm5_1[0] = zmm5_1[0] f+ zmm5_1[0]
        zmm1 = zmm5_1
        zmm1[0] = zmm1[0] f* zmm5_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm1[0]
        zmm5_1[0] = zmm5_1[0] f* (0.5f - zmm3_1[0])
        zmm5_1[0] = zmm5_1[0] f+ zmm5_1[0]
        zmm7[0] = zmm7[0] f* zmm5_1[0]
        zmm8[0] = zmm8[0] f* zmm5_1[0]
        zmm6[0] = zmm6[0] f* zmm5_1[0]
    else
        zmm7 = data_143dbb1f8
        zmm8 = data_143dbb1fc
        zmm6 = data_143dbb200

zmm3_1 = data_142f79470
float temp0_15[0x4] = _mm_unpacklo_ps(zmm7, zmm8[0].q)
float temp0_16[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
zmm13_1 = zmm13_1 * zmm6[0]
zmm9_1 = zmm9_1 * zmm7[0] + zmm12_1 * zmm8[0]
float var_d0_1 = zmm6[0]
zmm0_1 = 0.o
zmm0_1[0].q = temp0_15.q
float temp0_17[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x93)
zmm0_1[0] = zmm9_1 + zmm13_1
zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x39)
*(arg1 + 0xa0) = zmm0_1
float temp0_20[0x4] = __mulps_xmmps_memps(temp0_17, arg2[1])
float temp0_21[0x4] = __mulps_xmmps_memps(temp0_16, arg2[3])
int64_t var_d8
var_d8.o = zmm0_1
zmm0_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), arg2[2])
int64_t var_d8_1 = 0
float temp0_25[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), *arg2)
float temp0_26[0x4] = _mm_add_ps(temp0_21, zmm0_1)
zmm0_1 = *(arg2 + 4)
zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
float temp0_27[0x4] = _mm_add_ps(temp0_20, temp0_25)
zmm3_1 = *arg2
zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
float temp0_28[0x4] = _mm_add_ps(temp0_26, temp0_27)
zmm1 = *(arg2 + 8)
zmm3_1[0] = zmm3_1[0] f+ zmm0_1[0]
zmm1[0] = zmm1[0] * zmm1[0]
var_d8_1.o = temp0_28
zmm3_1[0] = zmm3_1[0] + zmm1[0]
uint32_t var_e8

if (zmm3_1[0] <= 9.99999994e-09f)
    var_e8 = 0
else
    var_e8 = _mm_sqrt_ss(0, zmm3_1[0])[0]

zmm0_1 = *(arg2 + 0x14)
zmm6 = zx.o(0)
zmm2 = arg2[1].d
zmm1 = *(arg2 + 0x18)
zmm2[0] = zmm2[0] * zmm2[0]
zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
zmm1[0] = zmm1[0] * zmm1[0]
zmm2[0] = zmm2[0] f+ zmm0_1[0]
zmm2[0] = zmm2[0] + zmm1[0]

if (not(zmm2[0] <= 9.99999994e-09f))
    zmm6 = _mm_sqrt_ss(0, zmm2[0])

zmm0_1 = *(arg2 + 0x24)
zmm2 = arg2[2].d
zmm1 = *(arg2 + 0x28)
zmm2[0] = zmm2[0] * zmm2[0]
zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
zmm1[0] = zmm1[0] * zmm1[0]
zmm2[0] = zmm2[0] f+ zmm0_1[0]
float var_e4 = zmm6[0]
zmm2[0] = zmm2[0] + zmm1[0]

if (not(zmm2[0] <= 9.99999994e-09f))
    result = _mm_sqrt_ss(0, zmm2[0])

zmm8 = var_d8_1:4.d
zmm7 = var_d8_1.d
zmm9_1 = 0f
*(arg1 + 0x90) = var_e8.q
zmm1 = 0
zmm8[0] = zmm8[0] * zmm8[0]
zmm0_1 = zmm7
zmm0_1[0] = zmm0_1[0] f* zmm7[0]
zmm1[0] = 0f * 0f
zmm8[0] = zmm8[0] f+ zmm0_1[0]
*(arg1 + 0x98) = result
zmm8[0] = zmm8[0] + zmm1[0]

if (not(zmm8[0] == 1f))
    if (zmm8[0] >= 9.99999994e-09f)
        zmm0_1 = zmm8
        zmm3_1 = zmm0_1
        zmm5_1 = _mm_rsqrt_ss(zmm0_1[0], zmm3_1[0])
        zmm2 = 0x3f000000
        zmm3_1[0] = zmm3_1[0] * 0.5f
        zmm5_1[0] = zmm5_1[0] f* zmm5_1[0]
        zmm3_1[0] = zmm3_1[0] f* zmm5_1[0]
        zmm2[0] = 0.5f - zmm3_1[0]
        zmm5_1[0] = zmm5_1[0] f* zmm2[0]
        zmm5_1[0] = zmm5_1[0] f+ zmm5_1[0]
        zmm1 = zmm5_1
        zmm1[0] = zmm1[0] f* zmm5_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm1[0]
        zmm5_1[0] = zmm5_1[0] f* (0.5f - zmm3_1[0])
        zmm5_1[0] = zmm5_1[0] f+ zmm5_1[0]
        zmm7[0] = zmm7[0] f* zmm5_1[0]
        zmm8[0] = zmm8[0] f* zmm5_1[0]
        zmm9_1 = 0f f* zmm5_1[0]
    else
        zmm7 = data_143dbb1f8
        zmm8 = data_143dbb1fc
        zmm9_1 = data_143dbb200

zmm7[0] = zmm7[0] * zmm6[0]
zmm8[0] = zmm8[0] * zmm6[0]
int32_t var_cc = 0x3f800000
zmm0_1 = var_d8_1.o
zmm0_1[0] = zmm7[0]
zmm9_1 = zmm9_1 * zmm6[0]
zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
zmm0_1[0] = zmm8[0]
zmm6[0] = zmm6[0] f/ result
zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc6)
zmm0_1[0] = zmm9_1
*(arg1 + 0xb0) = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
*(arg1 + 0xbc) = zmm6[0]
return result
