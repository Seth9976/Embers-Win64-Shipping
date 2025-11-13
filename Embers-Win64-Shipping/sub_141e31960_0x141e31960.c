// 函数: sub_141e31960
// 地址: 0x141e31960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* r10 = *(arg1 + 0x38)
int64_t* result

if (r10 == 0)
    result = nullptr
else if ((*(r10 + 0xb6) & 1) == 0)
    int64_t r8_1 = *(arg1 + 0x84)
    int64_t* result_1
    
    if ((*(arg1 + 0x80) & 1) == 0)
        float var_88[0x4]
        (*(*arg2 + 0x408))(arg2, &var_88, r8_1, 0)
        float zmm6[0x4] = var_88
        uint128_t zmm0 = *(arg1 + 0x48)
        float zmm5_1[0x4] = *(arg1 + 0x40)
        float temp0_1[0x4] = _mm_unpacklo_ps(*(arg1 + 0x44), 0)
        float temp0_2[0x4] = _mm_unpacklo_ps(zmm5_1, zmm0.q)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float var_68[0x4]
        float temp0_5[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_2, temp0_1[0].q), var_68)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
        float temp0_11[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_3), zmm0)
        float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_6)
        float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_3)
        float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), temp0_12)
        float var_78[0x4]
        float temp0_22[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_16, zmm0), _mm_add_ps(temp0_18, temp0_5)), var_78)
        zmm0 = _mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0].q)
        float zmm2[0x4] = *(arg1 + 0x70)
        uint128_t var_48_1 =
            _mm_unpacklo_ps(zmm0, _mm_unpacklo_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0x55), 0)[0].q)
        float temp0_30[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), _mm_shuffle_ps(zmm6, zmm6, 0))
        float temp0_31[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm2)
        float temp0_34[0x4] = __mulps_xmmps_memps(temp0_30, data_143f39670)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
        float temp0_36[0x4] = _mm_add_ps(temp0_34, zmm0)
        float temp0_38[0x4] = _mm_mul_ps(temp0_31, _mm_shuffle_ps(zmm6, zmm6, 0x55))
        zmm0 = *(arg1 + 0x60)
        float temp0_40[0x4] = _mm_mul_ps(temp0_35, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
        float temp0_41[0x4] = __mulps_xmmps_memps(temp0_38, data_143f39660)
        float temp0_42[0x4] = __mulps_xmmps_memps(temp0_40, data_143f39650)
        float temp0_44[0x4] = _mm_add_ps(_mm_add_ps(temp0_36, temp0_41), temp0_42)
        float temp0_45[0x4] = _mm_unpacklo_ps(*(arg1 + 0x5c), 0)
        float var_58[0x4] = temp0_44
        float temp0_47[0x4] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x58), zmm0.q), temp0_45[0].q)
        void* rax_6 = arg2[0x15]
        float var_38_1[0x4] = temp0_47
        
        if (rax_6 == 0)
            rax_6 = sub_141ee69e0(arg2)
        
        result_1 = sub_14203e5a0(rax_6, *(arg1 + 0x38), &var_58, 1, 0, 1)
    else
        int32_t var_b0_1 = *(arg1 + 0x60)
        char var_c0_1 = 1
        char var_c8_1 = 0
        int32_t var_a0_1 = *(arg1 + 0x54)
        int32_t var_90_1 = *(arg1 + 0x48)
        uint64_t var_b8 = *(arg1 + 0x58)
        char var_d0_1 = 1
        int32_t var_d8_1 = 0
        float (* var_e0_1)[0x4] = &var_b8
        uint64_t var_a8 = *(arg1 + 0x4c)
        int64_t var_e8_1 = &var_a8
        uint64_t var_98 = *(arg1 + 0x40)
        result_1 = sub_14203e8b0(r10, arg2, r8_1, &var_98, var_e8_1, var_e0_1, var_d8_1, var_d0_1, 
            var_c8_1, var_c0_1)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_108)
return result
