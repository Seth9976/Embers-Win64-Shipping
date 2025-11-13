// 函数: sub_141ef3330
// 地址: 0x141ef3330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(arg1[-0x28] + 0x5c0))(&arg1[-0x28])

if (result.b != 0)
    void* result_1 = arg1[0x70]
    
    if (result_1 == 0)
        result = (*(*arg1 + 0x30))(arg1)
        result_1 = result
        arg1[0x70] = result
    
    if (not(0f f>= *(result_1 + 0x18)))
        result = sub_1405be820(&arg1[-0x28])
        uint32_t zmm2[0x4] = *(result + 0x520)
        
        if (*(result_1 + 0x58) == 0)
            float zmm0_1 = *(arg1 + 0x19c)
            float zmm1[0x4] = arg1[0x34].d
            
            if ((*(arg1 + 0xb2) & 1) == 0)
                zmm1 = _mm_max_ss(zmm1[0], zmm0_1)
            else
                zmm1 = _mm_min_ss(zmm1[0], zmm0_1)
            
            if (not(zmm2[0] f- arg1[0x26].d <= zmm1[0]))
                float zmm7[0x4]
                float var_48_1[0x4] = zmm7
                uint32_t zmm8[0x4]
                uint32_t var_58_1[0x4] = zmm8
                arg1[0x26].d = zmm2[0]
                char rax_3 = sub_141ea5fd0(arg1[1], zmm1)
                int32_t var_100
                int64_t var_f0
                uint64_t var_b8
                uint64_t var_a8
                uint128_t zmm0_2
                uint32_t zmm3[0x4]
                float zmm4_1[0x4]
                float zmm5_1[0x4]
                uint32_t zmm6[0x4]
                
                if (sub_142008300(&arg1[0x73]) != 0)
                    zmm8 = data_143f3abe0
                    zmm4_1 = zx.o(*(result_1 + 0x38))
                    int32_t rcx_6 = *(result_1 + 0x40)
                    zmm0_2 = zmm4_1
                    zmm5_1 = data_143f3a9d0
                    zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                    zmm5_1 = _mm_and_ps(zmm5_1, zmm8)
                    zmm2 = _mm_unpacklo_ps(zmm0_2, 0)
                    float temp0_7[0x4] =
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, rcx_6[0].q), zmm2[0].q)
                    zmm2 = data_143f3abf0
                    var_b8 = zmm4_1.q
                    zmm3 = _mm_div_ps(temp0_7, zmm8)
                    float temp0_10[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3))
                    uint32_t temp0_13[0x4] = _mm_and_ps(
                        _mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3, data_143f3a9d0), 2), 
                        temp0_10 ^ zmm3)
                    float temp0_18[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_1), 
                        _mm_min_ps(_mm_sub_ps(temp0_7, _mm_mul_ps(temp0_13 ^ temp0_10, zmm8)), 
                            zmm5_1))
                    zmm0_2 = _mm_add_ps(temp0_18, zmm8)
                    zmm2 =
                        _mm_and_ps(zmm0_2 ^ temp0_18, _mm_cmpeq_ps(zx.o(0), temp0_18, 2)) ^ zmm0_2
                    zmm3 = _mm_and_ps(_mm_sub_ps(zmm2, zmm8) ^ zmm2, 
                        _mm_cmpeq_ps(data_143f3abd0, zmm2, 1)) ^ zmm2
                    zmm0_2 = zmm3
                    float temp0_25[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm3[0] = zmm3[0] f* 0.00555555569f
                    zmm0_2.d = zmm0_2.d f* 0.00555555569f
                    temp0_25[0] = temp0_25[0] * 0.00555555569f
                    uint32_t var_b0_2 = zmm3[0]
                    var_b8.d = zmm0_2.d
                    var_b8:4.d = temp0_25[0]
                    
                    if (rax_3 == 0)
                        zmm6 = 0xbf800000
                    else
                        zmm6 = *(sub_141ea47f0(arg1[1]) + 0x128)
                    
                    int64_t r14_1 = arg1[-0x28]
                    int64_t rsi_1 = *(result_1 + 0x48)
                    var_a8 = var_b8
                    uint32_t var_a0_1 = var_b0_2
                    int32_t rax_8 = *(result_1 + 0x28)
                    var_b8 = *(result_1 + 0x20)
                    int32_t var_b0_3 = rax_8
                    char rax_9 = (*(r14_1 + 0x5a0))(&arg1[-0x28])
                    int64_t rdi
                    rdi.b = rsi_1 != 0
                    void** var_98
                    void*** rax_10 = sub_141ed2ac0(&var_98, &arg1[0x73])
                    char var_e0
                    var_e0.q = *(result_1 + 0x50)
                    char var_e8
                    var_e8.q = rsi_1
                    var_f0.d = *(result_1 + 0x34)
                    var_100.q = &var_b8
                    int64_t var_108
                    var_108.d = zmm6[0]
                    result = (*(r14_1 + 0xa88))(&arg1[-0x28], *(result_1 + 0x18), rax_10, 
                        zx.q(rax_3), var_108, var_100, &var_a8, var_f0, var_e8, var_e0, rdi.b, 
                        *(result_1 + 0x59), rax_9)
                else if (rax_3 == 0)
                    char rax_5
                    
                    if (0f f!= *(result_1 + 0x2c) || 0f f!= *(result_1 + 0x30)
                            || 0f f!= *(result_1 + 0x34))
                        rax_5 = 0
                    else
                        rax_5 = 1
                    
                    int64_t rdi_2 = arg1[-0x28]
                    int64_t rbx_3 = *(result_1 + 0x48)
                    int64_t var_f8
                    
                    if (rax_5 == 0)
                        int32_t rax_24 = *(result_1 + 0x34)
                        var_a8 = *(result_1 + 0x2c)
                        int32_t var_a0_5 = rax_24
                        int32_t rax_25 = *(result_1 + 0x28)
                        var_b8 = *(result_1 + 0x20)
                        int32_t var_b0_6 = rax_25
                        char rax_26 = (*(rdi_2 + 0x5a0))(&arg1[-0x28])
                        var_f0.b = *(result_1 + 0x59)
                        var_f8.b = rbx_3 != 0
                        var_100.q = *(result_1 + 0x50)
                        result = (*(rdi_2 + 0xa58))(&arg1[-0x28], *(result_1 + 0x18), &var_b8, 
                            &var_a8, rbx_3, var_100, var_f8, var_f0, rax_26)
                    else
                        int32_t rax_20 = *(result_1 + 0x28)
                        var_a8 = *(result_1 + 0x20)
                        int32_t var_a0_4 = rax_20
                        var_f0.b = (*(rdi_2 + 0x5a0))(&arg1[-0x28])
                        var_f8.b = *(result_1 + 0x59)
                        var_100.b = rbx_3 != 0
                        result = (*(rdi_2 + 0xa68))(&arg1[-0x28], *(result_1 + 0x18), &var_a8, 
                            rbx_3, *(result_1 + 0x50), var_100, var_f8, var_f0)
                else
                    zmm8 = data_143f3abe0
                    zmm4_1 = zx.o(*(result_1 + 0x38))
                    int32_t rax_13 = *(result_1 + 0x40)
                    zmm0_2 = zmm4_1
                    void* rcx_11 = arg1[1]
                    zmm5_1 = _mm_and_ps(data_143f3a9d0, zmm8)
                    zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0x55), 0)
                    float temp0_31[0x4] =
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, rax_13[0].q), zmm2[0].q)
                    float temp0_32[0x4] = _mm_sub_ps(zx.o(0), zmm5_1)
                    zmm2 = data_143f3abf0
                    var_a8 = zmm4_1.q
                    float temp0_33[0x4] = _mm_div_ps(temp0_31, zmm8)
                    zmm3 = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_33))
                    float temp0_42[0x4] = _mm_max_ps(temp0_32, 
                        _mm_min_ps(
                            _mm_sub_ps(temp0_31, 
                                _mm_mul_ps(
                                    _mm_and_ps(
                                        _mm_cmpeq_ps(zmm2, 
                                            __andps_xmmxud_memxud(temp0_33, data_143f3a9d0), 2), 
                                        temp0_33 ^ zmm3) ^ zmm3, 
                                    zmm8)), 
                            zmm5_1))
                    zmm0_2 = _mm_add_ps(temp0_42, zmm8)
                    zmm2 =
                        _mm_and_ps(zmm0_2 ^ temp0_42, _mm_cmpeq_ps(zx.o(0), temp0_42, 2)) ^ zmm0_2
                    zmm0_2 = _mm_cmpeq_ps(data_143f3abd0, zmm2, 1)
                    zmm3 = _mm_and_ps(_mm_sub_ps(zmm2, zmm8) ^ zmm2, zmm0_2) ^ zmm2
                    zmm2 = zmm3
                    zmm2[0] = zmm2[0] f* 0.00555555569f
                    float temp0_49[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    temp0_49[0] = temp0_49[0] * 0.00555555569f
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm3[0] = zmm3[0] f* 0.00555555569f
                    var_a8 = (_mm_unpacklo_ps(zmm2, temp0_49[0].q)).q
                    uint32_t var_a0_3 = zmm3[0]
                    int32_t rax_15 = *(result_1 + 0x28)
                    var_b8 = *(result_1 + 0x20)
                    int32_t var_b0_5 = rax_15
                    void* rax_16 = sub_141ea47f0(rcx_11)
                    int64_t rdi_1 = arg1[-0x28]
                    int64_t rbx_2 = *(result_1 + 0x48)
                    zmm6 = *(rax_16 + 0x128)
                    char rax_17 = (*(rdi_1 + 0x5a0))(&arg1[-0x28])
                    result = (*(rdi_1 + 0xa78))(&arg1[-0x28], *(result_1 + 0x18), zmm6, &var_b8, 
                        &var_a8, (*(result_1 + 0x34)).d, rbx_2, *(result_1 + 0x50), rbx_2 != 0, 
                        *(result_1 + 0x59), rax_17)
        else if (not(zmm2[0] f- *(arg1 + 0x12c) f<= arg1[0x33].d))
            int64_t rax_2 = arg1[-0x28]
            *(arg1 + 0x12c) = zmm2[0]
            result = (*(rax_2 + 0xa48))(&arg1[-0x28], *(result_1 + 0x18))
        
        *(result_1 + 0x80) &= 0xfffffffe
        *(result_1 + 0x18) = 0
        *(result_1 + 0x58) = 0

return result
