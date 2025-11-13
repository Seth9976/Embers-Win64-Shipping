// 函数: sub_141ac6cd0
// 地址: 0x141ac6cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t result = __security_cookie ^ &var_148
int64_t result_1 = result
float zmm8[0x4] = arg1

if (arg2 != 0)
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(arg3.d, 0).b == 0
    result.b = arg3:4.d != 0
    rcx_1.b |= result.b
    
    if (rcx_1.b != 0)
        float var_f8[0x4]
        (*(*arg2 + 0x408))(arg2, &var_f8, arg3, zx.q(arg5))
        float zmm3[0x4]
        float zmm6[0x4]
        float zmm7[0x4]
        
        if ((sub_140b5b8a0(arg4.d, 0) == 0 | arg4:4.d != 0) == 0)
            float var_d8[0x4]
            zmm3 = var_d8
            float var_e8[0x4]
            zmm7 = var_e8
            zmm6 = var_f8
        else
            void var_c8
            (*(*arg2 + 0x408))(arg2, &var_c8, arg4, zx.q(arg5))
            float var_98[0x3][0x4]
            float (* rax_4)[0x4]
            rax_4, zmm8 = sub_140ad7d70(&var_f8, &var_98, &var_c8)
            zmm6 = *rax_4
            var_f8 = zmm6
            zmm7 = rax_4[1]
            float var_e8_1[0x4] = zmm7
            zmm3 = rax_4[2]
            float var_d8_1[0x4] = zmm3
        
        float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        arg1 = *(arg6 + 8)
        float zmm5_1[0x4] = *arg6
        float temp0_2[0x4] = _mm_unpacklo_ps(*(arg6 + 4), zx.o(0)[0].q)
        float temp0_5[0x4] =
            _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, arg1[0].q), temp0_2[0].q), zmm3)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
        float temp0_12[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_1), temp0_9)
        float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
        float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
        float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_6)
        float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_1)
        float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_5)
        float temp0_22[0x4] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_18, temp0_17), temp0_19), zmm7)
        float temp0_24[0x4] =
            _mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)
        float var_100_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
        int64_t var_118 = temp0_24.q
        float var_110_1 = var_100_1
        result = sub_141accbc0(sub_141ac6a30(zmm8, &var_118, arg7, arg8, arg9[0], arg10[0]), arg12, 
            arg11, 0, 0x3f800000)

__security_check_cookie(result_1 ^ &var_148)
return result
