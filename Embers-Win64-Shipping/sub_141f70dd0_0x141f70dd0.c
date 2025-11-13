// 函数: sub_141f70dd0
// 地址: 0x141f70dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result = &__return_addr

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x410))
    int64_t var_48
    float result_1
    
    if (arg4 != 1)
        var_48 = *arg3
        result_1 = (*arg3)[2]
    else
        float zmm0[0x4] = (*arg3)[2]
        float temp0_1[0x4] = _mm_unpacklo_ps((*arg3)[1], 0)
        float zmm6[0x4] = *(arg1 + 0x1e0)
        float temp0_2[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f3b980)
        float temp0_5[0x4] = __subps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, zmm0[0].q), temp0_1[0].q), *(arg1 + 0x1d0))
        float temp0_6[0x4] = _mm_rcp_ps(zmm6)
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        float zmm8[0x4] = __andps_xmmxud_memxud(temp0_5, data_143f3b880)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
        float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_9)
        float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_7)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
        float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
        float temp0_16[0x4] = _mm_mul_ps(temp0_6, temp0_6)
        float temp0_17[0x4] = _mm_add_ps(temp0_6, temp0_6)
        float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
        float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm6)
        float temp0_20[0x4] = _mm_mul_ps(temp0_14, temp0_18)
        float temp0_21[0x4] = _mm_sub_ps(temp0_17, temp0_19)
        float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_7)
        float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm8)
        float temp0_25[0x4] = _mm_mul_ps(temp0_21, temp0_21)
        float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
        float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm6)
        float temp0_29[0x4] =
            __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f3b860), data_143f3b970, 2)
        float temp0_30[0x4] = _mm_sub_ps(temp0_26, temp0_27)
        float temp0_33[0x4] =
            _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_9))
        zmm6 = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
        float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm6)
        var_48.d = temp0_36[0]
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
        result_1 = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)[0]
        var_48:4.d = temp0_37[0]
    
    int64_t rcx = *(arg1 + 0x408)
    int64_t rdx = sx.q(arg2) * 0x2c
    result = result_1
    *(rdx + rcx + 4) = var_48
    *(rdx + rcx + 0xc) = result
    
    if (arg5 != 0)
        return sub_141f77550(arg1) __tailcall

return result
