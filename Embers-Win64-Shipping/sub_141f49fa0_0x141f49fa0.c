// 函数: sub_141f49fa0
// 地址: 0x141f49fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* rcx = arg1[0x18]
float var_b8[0x4] = *arg3
int64_t var_c8
float zmm8[0x4]
float zmm9[0x4]

if (rcx != 0)
    float var_68_1[0x4] = zmm9
    float var_a8[0x4]
    (*(*rcx + 0x408))(rcx, &var_a8, arg1[0x19], 0)
    char rcx_1 = *(arg1 + 0x14c)
    zmm9 = var_a8
    
    if ((rcx_1 & 4) == 0)
        float zmm0[0x4] = arg2[1].d
        float temp0_1[0x4] = _mm_unpacklo_ps(*(arg2 + 4), 0)
        float temp0_2[0x4] = __mulps_xmmps_memps(zmm9, data_143f3b3f0)
        float var_58_1[0x4] = zmm8
        float var_98[0x4]
        float temp0_5[0x4] = __subps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, zmm0[0].q), temp0_1[0].q), var_98)
        float var_88[0x4]
        float temp0_6[0x4] = _mm_rcp_ps(var_88)
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        zmm8 = __andps_xmmxud_memxud(temp0_5, data_143f3b4c0)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
        float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_9)
        float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_7)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
        float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
        float temp0_16[0x4] = _mm_mul_ps(temp0_6, temp0_6)
        float temp0_17[0x4] = _mm_add_ps(temp0_6, temp0_6)
        float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
        float temp0_19[0x4] = _mm_mul_ps(temp0_16, var_88)
        float temp0_20[0x4] = _mm_mul_ps(temp0_14, temp0_18)
        float temp0_21[0x4] = _mm_sub_ps(temp0_17, temp0_19)
        float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_7)
        float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm8)
        zmm8 = var_58_1
        float temp0_25[0x4] = _mm_mul_ps(temp0_21, temp0_21)
        float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
        float temp0_27[0x4] = _mm_mul_ps(temp0_25, var_88)
        float temp0_29[0x4] = __cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(var_88, data_143f3b3e0), data_143f3b530, 2)
        float temp0_30[0x4] = _mm_sub_ps(temp0_26, temp0_27)
        float temp0_33[0x4] =
            _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_9))
        float zmm6[0x4] = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
        float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm6)
        float var_c0_1 = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)[0]
        *arg2 = (_mm_unpacklo_ps(temp0_36, _mm_shuffle_ps(temp0_36, temp0_36, 0x55)[0].q)).q
        arg2[1].d = var_c0_1
    
    if ((rcx_1 & 8) == 0)
        float zmm3[0x4] = *arg3
        float zmm5_1[0x4] = zmm9 ^ 0x80000000
        float temp0_40[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
        float temp0_41[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
        float zmm1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55) ^ 0x80000000
        float temp0_43[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
        temp0_41[0] = zmm1[0]
        float temp0_44[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xc6)
        temp0_45[0] = (temp0_43 ^ 0x80000000)[0]
        float temp0_46[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
        float temp0_47[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x27)
        temp0_47[0] = temp0_44[0]
        float temp0_48[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0x39)
        var_c8.o = temp0_48
        float temp0_50[0x4] = _mm_mul_ps(temp0_40, _mm_shuffle_ps(temp0_48, temp0_48, 0))
        float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xff), zmm3)
        float temp0_53[0x4] = __mulps_xmmps_memps(temp0_50, data_143f3b3b0)
        float temp0_54[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
        float temp0_55[0x4] = _mm_add_ps(temp0_53, temp0_52)
        float temp0_57[0x4] = _mm_mul_ps(temp0_46, _mm_shuffle_ps(temp0_48, temp0_48, 0x55))
        float temp0_59[0x4] = _mm_mul_ps(temp0_54, _mm_shuffle_ps(temp0_48, temp0_48, 0xaa))
        float temp0_60[0x4] = __mulps_xmmps_memps(temp0_57, data_143f3b3a0)
        float temp0_61[0x4] = __mulps_xmmps_memps(temp0_59, data_143f3b390)
        var_b8 = _mm_add_ps(_mm_add_ps(temp0_55, temp0_60), temp0_61)
    
    zmm9 = var_68_1

int32_t var_c0_2 = arg2[1].d
var_c8 = *arg2
float zmm7[0x4]
float zmm10[0x4]
int64_t result = sub_141f48240(arg1, &var_c8, &var_b8, arg4, zmm7, zmm8, zmm9, zmm10, arg5, arg6)
__security_check_cookie(rax_1 ^ &var_f8)
return result
