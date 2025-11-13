// 函数: sub_141f73220
// 地址: 0x141f73220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x410))
    int64_t var_48
    float var_40_1
    float zmm0[0x4]
    
    if (arg4 != 1)
        var_48 = *arg3
        var_40_1 = *(arg3 + 8)
    else
        zmm0 = *(arg3 + 8)
        float temp0_1[0x4] = _mm_unpacklo_ps(*(arg3 + 4), 0)
        float zmm6[0x4] = *(arg1 + 0x1e0)
        float temp0_2[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f3b980)
        float temp0_3[0x4] = _mm_rcp_ps(zmm6)
        float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, zmm0[0].q), temp0_1[0].q)
        float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
        float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_9)
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
        float temp0_13[0x4] = _mm_sub_ps(temp0_11, temp0_8)
        float temp0_14[0x4] = _mm_mul_ps(temp0_3, temp0_3)
        float temp0_15[0x4] = _mm_add_ps(temp0_3, temp0_3)
        float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_13)
        float temp0_17[0x4] = _mm_mul_ps(temp0_14, zmm6)
        float temp0_18[0x4] = _mm_mul_ps(temp0_12, temp0_16)
        float temp0_19[0x4] = _mm_sub_ps(temp0_15, temp0_17)
        float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xd2), temp0_9)
        float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_5)
        float temp0_23[0x4] = _mm_mul_ps(temp0_19, temp0_19)
        float temp0_24[0x4] = _mm_add_ps(temp0_19, temp0_19)
        float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm6)
        float temp0_27[0x4] =
            __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f3b860), data_143f3b970, 2)
        float temp0_28[0x4] = _mm_sub_ps(temp0_24, temp0_25)
        float temp0_31[0x4] =
            _mm_sub_ps(temp0_21, _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_6))
        zmm6 = _mm_and_ps(temp0_27, temp0_28 ^ zx.o(0)) ^ temp0_28
        float temp0_34[0x4] = _mm_mul_ps(_mm_add_ps(temp0_31, temp0_22), zmm6)
        var_48.d = temp0_34[0]
        float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)
        var_40_1 = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)[0]
        var_48:4.d = temp0_35[0]
    
    int64_t rcx = *(arg1 + 0x408)
    zmm0 = zx.o(var_48)
    int64_t rdx = sx.q(arg2) * 0x2c
    *(rdx + rcx + 0x1c) = zmm0.q
    *(rdx + rcx + 0x24) = var_40_1
    int64_t rcx_1 = *(arg1 + 0x408)
    *(rdx + rcx_1 + 0x10) = zmm0.q
    *(rdx + rcx_1 + 0x18) = var_40_1
    result = *(arg1 + 0x408)
    *(rdx + result + 0x28) = 3
    
    if (arg5 != 0)
        return sub_141f77550(arg1) __tailcall

return result
