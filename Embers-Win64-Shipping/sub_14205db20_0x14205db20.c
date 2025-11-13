// 函数: sub_14205db20
// 地址: 0x14205db20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* rax_2 = *(arg1 + 0x540)

if (rax_2 == 0 || *(rax_2 + 8) == 0)
    sub_142092410(arg1, arg2, arg3, arg4)
else
    float zmm0[0x4] = *arg3
    uint128_t zmm1 = zx.o(arg3[1].q)
    uint64_t* var_138 = nullptr
    int64_t var_130_1 = 0
    int32_t rax_3 = *(arg3 + 0x18)
    int32_t var_c0_1 = rax_3
    int32_t var_f0_1 = rax_3
    float zmm8[0x4]
    float var_48_1[0x4] = zmm8
    uint64_t var_c8_1 = zmm1.q
    uint64_t var_f8_1 = zmm1.q
    float var_d8[0x4] = zmm0
    float var_108[0x4] = zmm0
    float var_128[0x4]
    float var_a8[0x4]
    float var_98[0x4]
    uint32_t var_88[0x4]
    
    if (arg4 == 0)
        uint64_t* rax_7 = sub_140ae2c60(&var_d8, &var_128, arg1 + 0x1c0)
        var_d8 = *rax_7
        int64_t var_c8_2 = rax_7[2]
        int32_t var_c0_2 = rax_7[3].d
    else
        uint128_t zmm2 = *(arg1 + 0x1e0)
        float zmm3[0x4] = data_143f433f0
        uint32_t zmm9[0x4] = data_143f43400
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, _mm_and_ps(zmm2, zmm9), 1)) == 0)
            zmm1 = data_143dbb0d0
            var_a8 = data_143dbb0c0
            var_88 = data_143dbb0e0
            var_98 = zmm1
        else
            zmm0 = data_143f43310
            float temp0_4[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f433e0)
            float zmm5[0x4] = *(arg1 + 0x1d0)
            zmm0[0].q = zmm2 u>> 0x40
            zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0xc4)
            zmm1 = _mm_rcp_ps(zmm2)
            uint32_t temp0_7[0x4] = _mm_and_ps(zmm9, zmm2)
            var_a8 = temp0_4
            float temp0_8[0x4] = _mm_mul_ps(zmm1, zmm1)
            zmm1 = _mm_add_ps(zmm1, zmm1)
            zmm9 = _mm_cmpeq_ps(temp0_7, zmm3, 2)
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
            zmm1 = _mm_sub_ps(zmm1, _mm_mul_ps(temp0_8, zmm2))
            float temp0_14[0x4] = _mm_mul_ps(zmm1, zmm1)
            zmm1 = _mm_add_ps(zmm1, zmm1)
            float temp0_16[0x4] = _mm_mul_ps(temp0_14, zmm2)
            zmm2 = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
            zmm1 = _mm_sub_ps(zmm1, temp0_16)
            uint32_t temp0_21[0x4] =
                __andps_xmmxud_memxud(_mm_and_ps(zmm9, zx.o(0) ^ zmm1) ^ zmm1, data_143f43320)
            float temp0_22[0x4] = _mm_mul_ps(zmm5, temp0_21)
            var_88 = temp0_21
            float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xc9), temp0_11)
            float temp0_27[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xd2), zmm2), temp0_24)
            float temp0_28[0x4] = _mm_add_ps(temp0_27, temp0_27)
            float temp0_29[0x4] = _mm_mul_ps(temp0_18, temp0_28)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), zmm2)
            float temp0_32[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
            float temp0_33[0x4] = _mm_add_ps(temp0_29, temp0_22)
            var_98 = __andps_xmmxud_memxud(
                _mm_sub_ps(zx.o(0), 
                    _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_32, temp0_11)), temp0_33)), 
                data_143f43320)
        
        uint64_t* rax_5 = sub_140ae2c60(&var_108, &var_128, &var_a8)
        var_108 = *rax_5
        var_f8_1 = rax_5[2]
        var_f0_1 = rax_5[3].d
    
    void* rcx_2 = *(arg1 + 0x440)
    
    if (rcx_2 != 0)
        int128_t* rax_9 = sub_1423633d0(rcx_2, &var_128)
        var_98[0].q = var_f8_1
        float zmm2_1[0x4] = *(rax_9 + 8)
        float zmm6_1[0x4] = *rax_9
        zmm2_1[0] = zmm2_1[0] f+ *(rax_9 + 0x14)
        zmm2_1[0] = zmm2_1[0] f- *(rax_9 + 0x14)
        int64_t zmm5_1 = *(rax_9 + 4)
        zmm6_1[0] = zmm6_1[0] f+ *(rax_9 + 0xc)
        zmm6_1[0] = zmm6_1[0] f- *(rax_9 + 0xc)
        int64_t zmm7_1
        zmm7_1.d = zmm5_1.d f+ rax_9[1].d
        zmm5_1.d = zmm5_1.d f- rax_9[1].d
        float var_120_1 = zmm2_1[0]
        float var_114_1 = zmm2_1[0]
        int64_t var_11c_1 = (_mm_unpacklo_ps(zmm6_1, zmm7_1)).q
        float zmm0_3[0x4] = var_108
        var_98[2] = var_f0_1
        float temp0_40[0x4] = _mm_unpacklo_ps(zmm6_1, zmm5_1)
        var_a8 = zmm0_3
        zmm0_3 = var_128
        int32_t var_74_1 = 1.d
        float var_e0_1
        var_e0_1.q = &var_a8
        zmm0_3[0].q = temp0_40.q
        uint64_t* (* var_e8)(int32_t* arg1, float (* arg2)[0x4]) = sub_1420524a0
        var_98 = zmm0_3
        var_88[3].q = var_11c_1
        sub_142059b70(arg1, &var_d8, 0, &var_e8, &var_138)
    
    *arg2 = var_138
    arg2[1].d = var_130_1.d
    *(arg2 + 0xc) = var_130_1:4.d

__security_check_cookie(rax_1 ^ &var_168)
return arg2
