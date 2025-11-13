// 函数: sub_141f2f360
// 地址: 0x141f2f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t result = __security_cookie ^ &var_c8
uint64_t result_1 = result
void* rcx = *arg1

if (rcx != 0)
    *(rcx + 0x14c) ^= (arg1[1].b << 2 ^ *(rcx + 0x14c)) & 4
    void* rcx_1 = *arg1
    *(rcx_1 + 0x14c) ^= ((arg1[1].d u>> 1).b << 3 ^ *(rcx_1 + 0x14c)) & 8
    void* rcx_2 = *arg1
    result.b = (arg1[1].d u>> 2).b << 4
    result.b ^= *(rcx_2 + 0x14c)
    result.b &= 0x10
    *(rcx_2 + 0x14c) ^= result.b
    
    if ((arg1[1].b & 8) != 0)
        void* r8_1 = *arg1
        int64_t* rcx_3 = *(r8_1 + 0xc0)
        
        if (rcx_3 != 0)
            void var_58
            (*(*rcx_3 + 0x408))(rcx_3, &var_58, *(r8_1 + 0xc8), 0)
            float var_88[0x4]
            float zmm6_1[0x4] = sub_140ad7d70(*arg1 + 0x1c0, &var_88, &var_58)
            result = zx.q(arg1[1].d)
            
            if ((result.b & 1) == 0)
                void* rcx_6 = *arg1
                float var_78[0x4]
                float var_98_1 = _mm_shuffle_ps(var_78, var_78, 0xaa)[0]
                *(rcx_6 + 0x11c) =
                    (_mm_unpacklo_ps(var_78, _mm_shuffle_ps(var_78, var_78, 0x55)[0].q)).q
                *(rcx_6 + 0x124) = var_98_1
                result = zx.q(arg1[1].d)
            
            if ((result.b & 2) == 0)
                void* rcx_7 = *arg1
                float var_18_1[0x4] = zmm6_1
                zmm6_1 = var_88
                float (* rdi_1)[0x4] = rcx_7 + 0x1a0
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(*rdi_1, zmm6_1, 4)) != 0)
                    float zmm5_1[0x4] = data_143f3b3d0
                    float temp0_6[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
                    float temp0_8[0x4] = _mm_add_ps(temp0_6, _mm_shuffle_ps(temp0_6, temp0_6, 0x4e))
                    float temp0_10[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x39), temp0_8)
                    float temp0_11[0x4] = _mm_rsqrt_ps(temp0_10)
                    float temp0_12[0x4] = _mm_mul_ps(temp0_10, zmm5_1)
                    float temp0_17[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm5_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_12)), 
                            temp0_11), 
                        temp0_11)
                    float temp0_20[0x4] =
                        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_17, temp0_17), temp0_12))
                    float temp0_22[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_10, 2)
                    *rdi_1 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_20, temp0_17), temp0_17), zmm6_1)
                            ^ data_143f3b3c0, 
                        temp0_22) ^ data_143f3b3c0
                    void var_a0
                    int32_t* rax_8 = sub_140adf5d0(rdi_1, &var_a0)
                    rdi_1[1][0].q = *rax_8
                    (*rdi_1)[6] = rax_8[2]
                    rcx_7 = *arg1
                
                *(rcx_7 + 0x128) = rdi_1[1][0].q
                result = zx.q((*rdi_1)[6])
                *(rcx_7 + 0x130) = result.d
            
            if ((arg1[1].b & 4) == 0)
                void* rcx_9 = *arg1
                float var_68[0x4]
                result = zx.q(_mm_shuffle_ps(var_68, var_68, 0xaa)[0])
                *(rcx_9 + 0x134) =
                    (_mm_unpacklo_ps(var_68, _mm_shuffle_ps(var_68, var_68, 0x55)[0].q)).q
                *(rcx_9 + 0x13c) = result.d

__security_check_cookie(result_1 ^ &var_c8)
return result
