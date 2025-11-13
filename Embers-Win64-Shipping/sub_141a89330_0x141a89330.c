// 函数: sub_141a89330
// 地址: 0x141a89330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143f2b810
arg2[1] = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg2[2] = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
void arg_8

if (*arg1 == 0)
    int32_t rdx_1 = *(arg1 + 0xc)
    
    if ((rdx_1 & 0x7fffffff) == 0x7fffffff || rdx_1 s< 0)
        sub_141a91f00(&arg_8, arg3, arg5, arg2)
    else
        int32_t rax_3 = *(arg1 + 0x10)
        
        if (rax_3 == 0xffffffff || rax_3 s< 0 || rax_3 s>= arg4[1].d)
            sub_141a91f00(&arg_8, arg3, arg5, arg2)
        else
            int128_t* rax_4 = sub_141ab9f30(arg4, rax_3)
            float zmm7_2[0x4] = *rax_4
            *arg2 = zmm7_2
            float zmm6_2[0x4] = rax_4[1]
            arg2[1] = zmm6_2
            float zmm3_2[0x4] = rax_4[2]
            arg2[2] = zmm3_2
            float zmm2_2[0x4] = *(arg3 + 4)
            float temp0_29[0x4] = _mm_unpacklo_ps(*arg3, (*(arg3 + 8))[0].q)
            float temp0_30[0x4] = _mm_unpacklo_ps(zmm2_2, 0)
            float temp0_31[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xc9)
            float temp0_33[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_29, temp0_30[0].q), zmm3_2)
            float temp0_34[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xd2)
            float temp0_35[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xff)
            float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xc9), temp0_34)
            float temp0_40[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xd2), temp0_31), temp0_37)
            float temp0_41[0x4] = _mm_add_ps(temp0_40, temp0_40)
            float temp0_42[0x4] = _mm_mul_ps(temp0_35, temp0_41)
            float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0xd2), temp0_31)
            float temp0_45[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xc9)
            float temp0_46[0x4] = _mm_add_ps(temp0_42, temp0_33)
            float temp0_50[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(temp0_44, _mm_mul_ps(temp0_45, temp0_34)), temp0_46), zmm6_2)
            float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xaa)
            float temp0_52[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0x55)
            arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_50, temp0_51[0].q), 
                _mm_unpacklo_ps(temp0_52, 0)[0].q)
else if (*(arg1 + 0x5c) == 0xffffffff)
    sub_141a91f00(&arg_8, arg3, arg5, arg2)
else
    float var_58[0x4]
    float zmm8[0x4]
    float zmm9[0x4]
    sub_141a88190(arg1 + 0x20, &var_58, arg4, zmm8, zmm9)
    float zmm5_1[0x4] = var_58
    float zmm0_1[0x4] = *(arg3 + 8)
    float zmm6_1[0x4] = *arg3
    float temp0_2[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
    float temp0_3[0x4] = _mm_unpacklo_ps(zmm6_1, zmm0_1[0].q)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float var_38[0x4]
    float temp0_6[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_3, temp0_2[0].q), var_38)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    *arg2 = zmm5_1
    arg2[2] = var_38
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xc9), temp0_7)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xd2), temp0_4), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_4)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_7)
    float temp0_19[0x4] = _mm_mul_ps(temp0_16, temp0_13)
    float var_48[0x4]
    float temp0_23[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_15, temp0_18), _mm_add_ps(temp0_19, temp0_6)), var_48)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
    arg2[1] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_23, temp0_24[0].q), _mm_unpacklo_ps(temp0_25, 0)[0].q)
return arg2
