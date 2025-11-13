// 函数: sub_141f3cd60
// 地址: 0x141f3cd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
*arg2 = *arg3
int64_t* rcx = *(arg1 + 0xc0)

if (rcx != 0 && (*(arg1 + 0x14c) & 8) == 0)
    float var_88[0x4]
    (*(*rcx + 0x408))(rcx, &var_88, *(arg1 + 0xc8), 0)
    uint128_t zmm4_1 = zx.o(*(arg1 + 0x134))
    int32_t rax_3 = *(arg1 + 0x13c)
    float zmm2[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    uint128_t zmm6 =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, rax_3[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
    float var_68[0x4]
    float temp0_5[0x4] = _mm_shuffle_ps(var_68, var_68, 0xaa)
    float temp0_6[0x4] = _mm_shuffle_ps(var_68, var_68, 0x55)
    uint128_t zmm0
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            _mm_min_ps(zmm6, 
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_68, temp0_5[0].q), 
                    _mm_unpacklo_ps(temp0_6, 0)[0].q)), 
            data_143f3b4e0, 1)) == 0)
        zmm4_1 = *arg3
        float zmm3[0x4] = var_88
        float zmm5_1[0x4] = zmm3 ^ 0x80000000
        float temp0_13[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa) ^ 0x80000000
        float zmm1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55) ^ 0x80000000
        float temp0_16[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        temp0_13[0] = zmm1[0]
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
        temp0_17[0] = zmm2[0]
        zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1b)
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x27)
        temp0_19[0] = temp0_16[0]
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
        float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0), zmm0)
        zmm0 = _mm_shuffle_ps(temp0_20, temp0_20, 0xff)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
        zmm0 = _mm_mul_ps(zmm0, zmm4_1)
        float temp0_26[0x4] = __mulps_xmmps_memps(temp0_22, data_143f3b3b0)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
        float temp0_28[0x4] = _mm_add_ps(temp0_26, zmm0)
        float temp0_30[0x4] = _mm_mul_ps(temp0_24, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x4e))
        float temp0_32[0x4] = _mm_mul_ps(temp0_27, _mm_shuffle_ps(zmm4_1, zmm4_1, 0xb1))
        float temp0_33[0x4] = __mulps_xmmps_memps(temp0_30, data_143f3b3a0)
        float temp0_34[0x4] = __mulps_xmmps_memps(temp0_32, data_143f3b390)
        *arg2 = _mm_add_ps(_mm_add_ps(temp0_28, temp0_33), temp0_34)
    else
        zmm0 = *(arg1 + 0x1e0)
        float var_a8_1[0x4] = *(arg1 + 0x1d0)
        float var_b8[0x4] = *arg3
        uint128_t var_98_1 = zmm0
        float var_58[0x3][0x4]
        *arg2 = *sub_140ad7d70(&var_b8, &var_58, &var_88)

__security_check_cookie(rax_1 ^ &var_e8)
return arg2
