// 函数: sub_142201190
// 地址: 0x142201190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg2 + 0x18)
int32_t var_b8
double zmm0_1[0x2]

if ((*(*(*(arg2 + 0x28) + 0x30) + 0x59) & 1) != 0)
    arg3 = *(rsi + 0x1c0)
    float temp0_1[0x4] = _mm_add_ps(arg3, arg3)
    float temp0_2[0x4] = _mm_shuffle_ps(arg3, arg3, 4)
    float temp0_3[0x4] = _mm_shuffle_ps(arg3, arg3, 0xff)
    float temp0_4[0x4] = _mm_mul_ps(arg3, temp0_1)
    float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), temp0_3)
    arg3 = *(rsi + 0x1e0)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
    float temp0_10[0x4] = _mm_shuffle_ps(arg3, arg3, 0xc9)
    float temp0_12[0x4] = _mm_add_ps(temp0_9, _mm_shuffle_ps(temp0_4, temp0_4, 1))
    float zmm4[0x4] = data_143f50550
    float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_6)
    float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_8)
    float temp0_15[0x4] = _mm_sub_ps(zmm4, temp0_12)
    float temp0_16[0x4] = _mm_mul_ps(temp0_13, arg3)
    float temp0_17[0x4] = _mm_mul_ps(temp0_10, temp0_14)
    float zmm3[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_15, arg3), data_143f50560)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_17, zmm3, 0x32)
    float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0), temp0_20, 0x82)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_16, zmm3, 0x31)
    float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm3, 0x10), temp0_23, 0x88)
    float zmm0[0x4] = *(rsi + 0x1d0)
    zmm4[0].q = zmm0 u>> 0x40
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_16, temp0_17, 0x12)
    float temp0_27[0x4] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, zmm3, 0xe8)
    float var_68_1[0x4] = temp0_27
    float var_98[0x4] = temp0_22
    float var_88_1[0x4] = temp0_25
    float var_78_1[0x4] = temp0_28
    float var_58[0x4]
    int128_t zmm1_1 = sub_1408041d0(&var_98, &var_58)
    int64_t var_c0_1 = arg4
    sub_141fe56b0(arg1 + 0x30, &var_b8, *(arg2 + 0x12c), zmm1_1, rsi.d, nullptr)
    int32_t var_ac_1 = 0
    float zmm4_1[0x4] = var_b8.o
    zmm4_1[0] = var_b8[0]
    int64_t var_a8_1 = 0
    float temp0_29[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
    int32_t var_b4
    temp0_29[0] = var_b4[0]
    int32_t var_a0_1 = 0
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc6)
    int32_t var_b0
    temp0_30[0] = var_b0
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc9)
    float var_48[0x4]
    float var_38[0x4]
    float var_28[0x4]
    float temp0_42[0x4] = _mm_add_ps(
        _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0x55), var_48), 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0), var_58)), 
        _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0xff), var_28), 
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0xaa), var_38)))
    zmm0_1 = temp0_42
    zmm0_1[0].d = zmm0_1[0].d f+ *(arg5 + 0x10)
    float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
    temp0_43[0] = temp0_43[0] f+ *(arg5 + 0x14)
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
    temp0_44[0] = temp0_44[0] f+ *(arg5 + 0x18)
    *(arg5 + 0x10) = zmm0_1[0].d
    *(arg5 + 0x14) = temp0_43[0]
    *(arg5 + 0x18) = temp0_44[0]
else
    int64_t var_c0 = arg4
    int64_t* rax_3 = sub_141fe56b0(arg1 + 0x30, &var_b8, *(arg2 + 0x12c), arg3, rsi.d, nullptr)
    zmm0_1 = *rax_3
    zmm0_1[0].d = zmm0_1[0].d f+ *(arg5 + 0x10)
    *(arg5 + 0x10) = zmm0_1[0].d
    *(arg5 + 0x14) = *(rax_3 + 4) f+ *(arg5 + 0x14)
    zmm0_1 = rax_3[1].d
    zmm0_1[0].d = zmm0_1[0].d f+ *(arg5 + 0x18)
    *(arg5 + 0x18) = zmm0_1[0].d
int32_t result = _finite(_mm_cvtps_pd((*(arg5 + 0x10))[0])[0])

if (result != 0)
    result = _finite(_mm_cvtps_pd((*(arg5 + 0x14))[0])[0])
    
    if (result != 0)
        return _finite(_mm_cvtps_pd((*(arg5 + 0x18))[0])[0])

return result
