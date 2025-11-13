// 函数: sub_140881f40
// 地址: 0x140881f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* result

if (*(arg1 + 0x38) == 0)
    result = nullptr
else if (sub_1405949a0() == 0)
    int64_t r8_1 = *(arg1 + 0x84)
    uint64_t var_c8
    void* result_1
    int64_t var_b8
    int64_t var_a8
    
    if ((*(arg1 + 0x80) & 1) == 0)
        uint128_t var_68
        (*(*arg2 + 0x408))(arg2, &var_68, r8_1, 0)
        uint128_t zmm2 = var_68
        float zmm3[0x4] = *(arg1 + 0x70)
        float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
        var_a8 = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
        float temp0_4[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(zmm2, zmm2, 0))
        int32_t var_c0_1 = 0x3f800000
        float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
        uint128_t zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float temp0_7[0x4] = __mulps_xmmps_memps(temp0_4, data_143ce5a60)
        int32_t var_a0_2 = 0x3f800000
        zmm0 = _mm_mul_ps(zmm0, zmm3)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
        float temp0_10[0x4] = _mm_add_ps(temp0_7, zmm0)
        float temp0_12[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(zmm2, zmm2, 0x55))
        float temp0_14[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
        float temp0_15[0x4] = __mulps_xmmps_memps(temp0_12, data_143ce5a50)
        float temp0_16[0x4] = __mulps_xmmps_memps(temp0_14, data_143ce5a40)
        float var_88[0x4] = _mm_add_ps(_mm_add_ps(temp0_10, temp0_15), temp0_16)
        void var_78
        int32_t* rax_6 = sub_140adf5d0(&var_88, &var_78)
        float zmm5_1[0x4] = var_68
        float zmm6_1[0x4] = *(arg1 + 0x40)
        uint128_t zmm0_2 = zx.o(*rax_6)
        int32_t rax_7 = rax_6[2]
        float temp0_19[0x4] = _mm_unpacklo_ps(*(arg1 + 0x44), 0)
        var_b8 = zmm0_2.q
        float temp0_20[0x4] = _mm_unpacklo_ps(zmm6_1, (*(arg1 + 0x48)).q)
        float temp0_21[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float var_48[0x4]
        float temp0_23[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_20, temp0_19[0].q), var_48)
        int32_t var_b0_2 = rax_7
        float temp0_24[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_25[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xc9), temp0_21)
        float temp0_30[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xd2), temp0_24), zmm0_2)
        float temp0_31[0x4] = _mm_add_ps(temp0_30, temp0_30)
        float temp0_32[0x4] = _mm_mul_ps(temp0_25, temp0_31)
        zmm0_2 = _mm_shuffle_ps(temp0_31, temp0_31, 0xc9)
        float temp0_34[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xd2)
        zmm0_2 = _mm_mul_ps(zmm0_2, temp0_21)
        float temp0_36[0x4] = _mm_mul_ps(temp0_34, temp0_24)
        float temp0_37[0x4] = _mm_add_ps(temp0_32, temp0_23)
        float var_58[0x4]
        float temp0_40[0x4] =
            __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_36, zmm0_2), temp0_37), var_58)
        float temp0_41[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x55)
        int32_t var_c0_2 = _mm_shuffle_ps(temp0_40, temp0_40, 0xaa).d
        int64_t* rax_9 = arg2[0x15]
        var_c8 = (_mm_unpacklo_ps(temp0_40, temp0_41[0].q)).q
        
        if (rax_9 == 0)
            rax_9 = sub_141ee69e0(arg2)
        
        result_1 = sub_14083e9d0(rax_9, *(arg1 + 0x38), &var_c8, &var_b8, &var_a8, 1, 1, 0, 1)
    else
        void* rcx_1 = *(arg1 + 0x38)
        char var_d0_1 = 1
        char var_d8_1 = 0
        int32_t var_b0_1 = *(arg1 + 0x54)
        char var_e0_1 = 1
        int32_t var_a0_1 = *(arg1 + 0x48)
        var_b8 = *(arg1 + 0x4c)
        char var_e8_1 = 1
        int32_t var_f0_1 = 0
        int64_t* var_f8_1 = &var_b8
        var_a8 = *(arg1 + 0x40)
        result_1 = sub_14083eb70(rcx_1, arg2, r8_1, &var_a8, var_f8_1, var_f0_1, var_e8_1, 
            var_e0_1, var_d8_1, var_d0_1)
    
    if (result_1 != 0)
        int32_t rax_10 = *(arg1 + 0x60)
        var_c8 = *(arg1 + 0x58)
        int32_t var_c0_3 = rax_10
        sub_141f49070(result_1, &var_c8)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_118)
return result
