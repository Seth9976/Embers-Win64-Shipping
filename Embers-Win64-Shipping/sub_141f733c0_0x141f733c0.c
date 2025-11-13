// 函数: sub_141f733c0
// 地址: 0x141f733c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x410))
    int64_t var_48
    float var_40_2
    float rcx
    float zmm4[0x4]
    
    if (arg5 != 1)
        zmm4 = zx.o(*arg3)
        rcx = *(arg3 + 8)
        var_48 = *arg4
        var_40_2 = (*arg4)[2]
    else
        float zmm5[0x4] = *(arg1 + 0x1e0)
        float zmm0[0x4] = *(arg3 + 8)
        zmm4 = *arg3
        float temp0_1[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
        float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm0[0].q), temp0_1[0].q)
        float temp0_4[0x4] = _mm_rcp_ps(zmm5)
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
        float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
        float temp0_7[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f3b980)
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
        float temp0_9[0x4] = _mm_mul_ps(temp0_6, temp0_8)
        float temp0_10[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xd2)
        float temp0_11[0x4] = _mm_mul_ps(temp0_5, temp0_10)
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xff)
        float temp0_13[0x4] = _mm_sub_ps(temp0_9, temp0_11)
        float temp0_14[0x4] = _mm_mul_ps(temp0_4, temp0_4)
        float temp0_15[0x4] = _mm_add_ps(temp0_4, temp0_4)
        float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_13)
        float temp0_18[0x4] = _mm_sub_ps(temp0_15, _mm_mul_ps(temp0_14, zmm5))
        float temp0_19[0x4] = _mm_mul_ps(temp0_18, temp0_18)
        float temp0_20[0x4] = _mm_add_ps(temp0_18, temp0_18)
        float temp0_21[0x4] = _mm_mul_ps(temp0_19, zmm5)
        float temp0_23[0x4] =
            __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm5, data_143f3b860), data_143f3b970, 2)
        float temp0_24[0x4] = _mm_sub_ps(temp0_20, temp0_21)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
        zmm5 = _mm_and_ps(temp0_23, temp0_24 ^ zx.o(0)) ^ temp0_24
        float temp0_27[0x4] = _mm_mul_ps(temp0_25, temp0_10)
        float temp0_30[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xd2), temp0_8), temp0_27)
        float temp0_31[0x4] = _mm_mul_ps(temp0_12, temp0_16)
        float zmm3[0x4] = *arg4
        float temp0_34[0x4] = _mm_mul_ps(_mm_add_ps(temp0_30, _mm_add_ps(temp0_31, temp0_3)), zmm5)
        float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)
        float zmm2[0x4] = (*arg4)[1]
        zmm4 = _mm_unpacklo_ps(temp0_34, temp0_35[0].q)
        float temp0_38[0x4] = _mm_unpacklo_ps(zmm2, 0)
        rcx = temp0_36[0]
        float temp0_40[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, (*arg4)[2][0].q), temp0_38[0].q)
        float temp0_45[0x4] = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xd2), temp0_8), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xc9), temp0_10))
        float temp0_46[0x4] = _mm_add_ps(temp0_45, temp0_45)
        float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0xd2), temp0_8)
        float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0xc9), temp0_10)
        float temp0_51[0x4] = _mm_mul_ps(temp0_12, temp0_46)
        float temp0_55[0x4] = _mm_mul_ps(
            _mm_add_ps(_mm_sub_ps(temp0_48, temp0_50), _mm_add_ps(temp0_51, temp0_40)), zmm5)
        var_48.d = temp0_55[0]
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
        var_40_2 = _mm_shuffle_ps(temp0_55, temp0_55, 0xaa)[0]
        var_48:4.d = temp0_56[0]
    
    int64_t rdx = sx.q(arg2) * 0x2c
    int64_t rax_2 = *(arg1 + 0x408)
    *(rax_2 + rdx + 0x10) = zmm4.q
    *(rax_2 + rdx + 0x18) = rcx
    int64_t rcx_1 = *(arg1 + 0x408)
    *(rcx_1 + rdx + 0x1c) = var_48
    *(rcx_1 + rdx + 0x24) = var_40_2
    result = *(arg1 + 0x408)
    *(result + rdx + 0x28) = 3
    
    if (arg6 != 0)
        return sub_141f77550(arg1) __tailcall

return result
