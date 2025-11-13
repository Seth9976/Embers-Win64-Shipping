// 函数: sub_142092410
// 地址: 0x142092410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t i = 0
*arg2 = 0
arg2[1] = 0
void* rsi = *(arg1 + 0x440)
int64_t* result

if (rsi == 0)
    result = arg2
else
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    uint128_t zmm9
    uint128_t var_68_1 = zmm9
    uint64_t var_e8_1 = arg3[1].q
    int32_t var_e0_1 = *(arg3 + 0x18)
    float var_f8[0x4] = *arg3
    void var_c8
    uint32_t zmm2[0x4]
    float zmm3[0x4]
    
    if (arg4 != 0)
        zmm9 = *(arg1 + 0x1e0)
        zmm2 = data_143f478d0
        zmm3 = data_143f478c0
        float var_a8[0x4]
        uint128_t zmm1
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, _mm_and_ps(zmm9, zmm2), 1)) == 0)
            zmm1 = data_143dbb0d0
            var_a8 = data_143dbb0c0
            float var_88_2[0x4] = data_143dbb0e0
            uint128_t var_98_2 = zmm1
        else
            float zmm0[0x4] = data_143f47560
            float temp0_4[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f478b0)
            float zmm5[0x4] = *(arg1 + 0x1d0)
            zmm0[0].q = zmm9 u>> 0x40
            zmm9 = _mm_shuffle_ps(zmm9, zmm0, 0xc4)
            zmm1 = _mm_rcp_ps(zmm9)
            var_a8 = temp0_4
            float temp0_7[0x4] = _mm_mul_ps(zmm1, zmm1)
            zmm1 = _mm_sub_ps(_mm_add_ps(zmm1, zmm1), _mm_mul_ps(temp0_7, zmm9))
            float temp0_11[0x4] = _mm_mul_ps(zmm1, zmm1)
            zmm1 = _mm_add_ps(zmm1, zmm1)
            float temp0_13[0x4] = _mm_mul_ps(temp0_11, zmm9)
            zmm9 = _mm_cmpeq_ps(_mm_and_ps(zmm9, zmm2), zmm3, 2)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
            zmm1 = _mm_sub_ps(zmm1, temp0_13)
            zmm2 = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
            zmm9 = __andps_xmmxud_memxud(_mm_and_ps(zmm9, zx.o(0) ^ zmm1) ^ zmm1, data_143f47570)
            float temp0_22[0x4] = _mm_mul_ps(zmm5, zmm9)
            uint128_t var_88_1 = zmm9
            float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xc9), temp0_16)
            float temp0_27[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xd2), zmm2), temp0_24)
            float temp0_28[0x4] = _mm_add_ps(temp0_27, temp0_27)
            float temp0_29[0x4] = _mm_mul_ps(temp0_19, temp0_28)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), zmm2)
            float temp0_32[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
            float temp0_33[0x4] = _mm_add_ps(temp0_29, temp0_22)
            float var_98_1[0x4] = __andps_xmmxud_memxud(
                _mm_sub_ps(zx.o(0), 
                    _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_32, temp0_16)), temp0_33)), 
                data_143f47570)
        uint64_t* rax_4 = sub_140ae2c60(&var_f8, &var_c8, &var_a8)
        var_f8 = *rax_4
        var_e8_1 = rax_4[2]
        int32_t var_e0_2 = rax_4[3].d
    
    int128_t* rax_6 = sub_1423633d0(rsi, &var_c8)
    int64_t zmm0_2 = *(rax_6 + 0xc)
    
    if (*(arg1 + 0x4a0) s<= 0)
        result = arg2
    else
        zmm7 = *(rax_6 + 0x14)
        int64_t rsi_1 = 0
        zmm8 = zmm0_2:4.d
        zmm9 = zmm0_2.d
        
        do
            int64_t rax_8 = *(arg1 + 0x498)
            zmm0_2 = var_f8[0]
            float zmm4[0x4] = *(rsi_1 + rax_8 + 0x30)
            zmm3 = *(rsi_1 + rax_8 + 0x34)
            zmm2 = *(rsi_1 + rax_8 + 0x38)
            float zmm1_2 = zmm4[0] f+ zmm9.d
            zmm6 = zmm2
            zmm3[0] = zmm3[0] + zmm8[0]
            zmm6[0] = zmm6[0] f+ zmm7.d
            
            if (not(zmm0_2.d f> zmm1_2))
                zmm4[0] = zmm4[0] f- zmm9.d
                
                if (not(zmm4[0] > var_f8[3]) && not(var_f8[1].d f> zmm3[0]))
                    zmm3[0] = zmm3[0] - zmm8[0]
                    
                    if (not(zmm3[0] f> var_e8_1.d) && not(var_f8[2].d f> zmm6[0]))
                        zmm2[0] = zmm2[0] f- zmm7.d
                        
                        if (not(zmm2[0] f> var_e8_1:4.d))
                            int64_t r14_1 = sx.q(arg2[1].d)
                            int32_t rax_9 = (r14_1 + 1).d
                            arg2[1].d = rax_9
                            
                            if (rax_9 s> *(arg2 + 0xc))
                                sub_1405a4cf0(arg2)
                            
                            *(*arg2 + (r14_1 << 2)) = i
            
            i += 1
            rsi_1 += 0x40
        while (i s< *(arg1 + 0x4a0))
        
        result = arg2

__security_check_cookie(rax_1 ^ &var_118)
return result
