// 函数: sub_141f737b0
// 地址: 0x141f737b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rdi_1 = sx.q(arg2)

if (rdi_1.d s>= *(arg1 + 0x410))
    return 

float zmm6[0x4] = arg3[1].d
float zmm7[0x4] = *arg3
uint128_t zmm8 = *(arg3 + 4)
zmm7[0] = zmm7[0] * zmm7[0]
uint128_t zmm0
zmm0.d = zmm8.d f* zmm8.d
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] f+ zmm0.d
zmm7[0] = zmm7[0] + zmm6[0]
uint64_t var_58
float var_50_2
float zmm1[0x4]
float zmm2[0x4]
uint128_t zmm3
float zmm4[0x4]

if (arg4 == 1)
    if (not(zmm7[0] != 1f))
        zmm0 = zx.o(*arg3)
        zmm2 = zmm0
        zmm6 = arg3[1].d
        var_58 = zmm0.q
        zmm7 = var_58.d
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    else if (zmm7[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        zmm0 = zmm7
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0.d)
        zmm2 = 0x3f000000
        zmm3.d = zmm0.d f* 0.5f
        zmm0.d = temp0_2.d f* temp0_2[0]
        zmm1 = zmm3
        zmm1[0] = zmm1[0] f* zmm0.d
        zmm2[0] = 0.5f - zmm1[0]
        zmm0.d = temp0_2.d f* zmm2[0]
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm3.d = zmm3.d f* temp0_2[0]
        zmm4[0] = 0.5f f- zmm3.d
        zmm0.d = temp0_2.d f* zmm4[0]
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        zmm8.d = zmm8.d f* temp0_2[0]
        zmm7[0] = zmm7[0] * temp0_2[0]
        zmm2 = zmm8
        zmm6[0] = zmm6[0] * temp0_2[0]
    else
        zmm7 = data_143dbb1f8
        zmm2 = data_143dbb1fc
        zmm6 = data_143dbb200
    
    float temp0_3[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f3b980)
    float temp0_4[0x4] = _mm_unpacklo_ps(zmm2, 0)
    zmm8 = _mm_unpacklo_ps(zmm7, zmm6[0].q)
    zmm6 = *(arg1 + 0x1e0)
    zmm8 = _mm_unpacklo_ps(zmm8, temp0_4[0].q)
    float temp0_7[0x4] = _mm_rcp_ps(zmm6)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_9)
    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_8)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
    zmm3 = _mm_sub_ps(zmm3, zmm0)
    zmm0 = _mm_mul_ps(temp0_7, temp0_7)
    float temp0_17[0x4] = _mm_add_ps(temp0_7, temp0_7)
    zmm3 = _mm_add_ps(zmm3, zmm3)
    zmm0 = _mm_mul_ps(zmm0, zmm6)
    float temp0_20[0x4] = _mm_mul_ps(temp0_14, zmm3)
    float temp0_21[0x4] = _mm_sub_ps(temp0_17, zmm0)
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), temp0_8)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm8)
    zmm0 = _mm_mul_ps(temp0_21, temp0_21)
    float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
    zmm0 = _mm_mul_ps(zmm0, zmm6)
    float temp0_29[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f3b860), data_143f3b970, 2)
    float temp0_30[0x4] = _mm_sub_ps(temp0_26, zmm0)
    float temp0_33[0x4] =
        _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), temp0_9))
    zmm6 = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
    float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm6)
    var_58.d = temp0_36[0]
    zmm0 = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
    var_50_2 = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)[0]
    var_58:4.d = zmm0.d
else if (not(zmm7[0] != 1f))
    float rax_2 = arg3[1].d
    var_58 = *arg3
    var_50_2 = rax_2
else if (zmm7[0] >= 9.99999994e-09f)
    zmm4 = 0x3f000000
    zmm0 = zmm7
    float temp0_39[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0.d)
    zmm2 = 0x3f000000
    zmm3.d = zmm0.d f* 0.5f
    zmm0.d = temp0_39.d f* temp0_39[0]
    zmm1 = zmm3
    zmm1[0] = zmm1[0] f* zmm0.d
    zmm2[0] = 0.5f - zmm1[0]
    zmm0.d = temp0_39.d f* zmm2[0]
    temp0_39[0] = temp0_39[0] f+ zmm0.d
    temp0_39[0] = temp0_39[0] * temp0_39[0]
    zmm3.d = zmm3.d f* temp0_39[0]
    zmm4[0] = 0.5f f- zmm3.d
    zmm0.d = temp0_39.d f* zmm4[0]
    temp0_39[0] = temp0_39[0] f+ zmm0.d
    zmm7[0] = zmm7[0] * temp0_39[0]
    zmm8.d = zmm8.d f* temp0_39[0]
    zmm6[0] = zmm6[0] * temp0_39[0]
    var_58.d = zmm7[0]
    var_58:4.d = zmm8.d
    var_50_2 = zmm6[0]
else
    var_58.d = data_143dbb1f8.d
    var_50_2 = data_143dbb200.d
    var_58:4.d = data_143dbb1fc[0]
uint64_t var_48 = var_58
float var_40_1 = var_50_2
sub_140ad6800(&var_58, arg1 + 0x4e8, &var_48)
*(*(arg1 + 0x420) + rdi_1 * 0x50 + 0x10) = var_58.o

if (arg5 != 0)
    sub_141f77550(arg1)
