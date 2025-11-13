// 函数: sub_1422aeae0
// 地址: 0x1422aeae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t result = __security_cookie ^ &var_c8
uint64_t result_1 = result

if ((arg1[0x11].b & 1) != 0)
    int64_t rax_1 = *arg1
    int64_t r8
    r8.b = 1
    int64_t var_88 = 0
    result = (*(rax_1 + 0x6a8))(arg1, 0, r8)
    uint64_t result_2 = result
    
    if (result != 0)
        result = sub_14221b2f0(result)
        
        if (result.b != 0)
            int64_t* r8_1 = arg1[0x14]
            
            if (r8_1 == 0)
            label_1422aebad:
                int32_t rax_12 = *(arg1 + 0xc)
                void* const rax_19
                
                if (rax_12 s>= data_143e1d9b4)
                    rax_19 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_12)
                    uint32_t rdx_5 = zx.d(temp0_1)
                    int32_t rax_14 = temp1_1 + rdx_5
                    rax_19 = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_14.w) - rdx_5) * 0x18
                
                result = zx.q(*(rax_19 + 8) u>> 0x1d)
                
                if ((result.b & 1) == 0)
                    int64_t rax_21 = *arg1
                    var_88 = 0
                    int64_t r8_2
                    result, r8_2 = (*(rax_21 + 0x3e8))(arg1, 0)
                    
                    if (result.b != 0)
                        int64_t rax_22 = *arg1
                        r8_2.b = 1
                        var_88 = 0
                        result = (*(rax_22 + 0x6a8))(arg1, 0, r8_2)
                        
                        if (result != 0)
                            result = sub_14221afe0(result)
                            
                            if (result.b != 0)
                                float var_58[0x4]
                                (*(*arg1 + 0x700))(arg1, &var_58, result_2)
                                uint32_t zmm4_1[0x4] = data_143f52900
                                float var_48[0x4]
                                float zmm1[0x4] = __subps_xmmps_memps(var_48, *(arg1 + 0x1d0))
                                float zmm6[0x4] = var_58
                                var_88.d = 0x38d1b717
                                float zmm2[0x4] = var_88.d
                                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(zmm1, zmm4_1), 1))
                                    != 0)
                                label_1422aecd5:
                                    zmm2 = *(arg1 + 0x1d0)
                                    float var_68[0x4] = zmm6
                                    var_48[0] = var_48[0] - zmm2[0]
                                    zmm1 = _mm_shuffle_ps(var_48, var_48, 0x55)
                                    float zmm5_1[0x4] = _mm_shuffle_ps(var_48, var_48, 0xaa)
                                    var_88.d = var_48[0]
                                    float zmm0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                    zmm1[0] = zmm1[0] - zmm0[0]
                                    zmm5_1[0] = zmm5_1[0] - zmm2[0]
                                    var_88:4.d = zmm1[0]
                                    float var_80_1 = zmm5_1[0]
                                    void var_78
                                    sub_140adf5d0(&var_68, &var_78)
                                    result = sub_141f42080(arg1, &var_88, &var_78, 0, nullptr, 2, 0)
                                else
                                    uint32_t zmm3[0x4] = *(arg1 + 0x1c0)
                                    result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(zmm2, 
                                        _mm_and_ps(_mm_sub_ps(zmm6, zmm3), zmm4_1), 1)))
                                    
                                    if (result.d != 0)
                                        result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(zmm2, 
                                            _mm_and_ps(_mm_add_ps(zmm3, zmm6), zmm4_1), 1)))
                                        
                                        if (result.d != 0)
                                            goto label_1422aecd5
            else
                int32_t rax_2 = *(r8_1 + 0xc)
                void* const rax_9
                
                if (rax_2 s>= data_143e1d9b4)
                    rax_9 = nullptr
                else
                    int16_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(rax_2)
                    uint32_t rdx_2 = zx.d(temp2_1)
                    int32_t rax_4 = temp3_1 + rdx_2
                    rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
                
                result = zx.q(*(rax_9 + 8) u>> 0x1d)
                
                if ((result.b & 1) == 0)
                    result = (*(*r8_1 + 0x448))(r8_1)
                    
                    if (result.b != 0)
                        goto label_1422aebad

__security_check_cookie(result_1 ^ &var_c8)
return result
