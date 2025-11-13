// 函数: sub_142092ae0
// 地址: 0x142092ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4
float zmm7[0x4] = arg3
void var_d0
int64_t* rax_1
uint128_t zmm7_1
void var_e0

if (*(arg1 + 0x40) != 0 || (*(arg1 + 0xc0) & 1) == 0)
    int32_t* rax_7
    rax_7, zmm7_1 = sub_142088e30(arg1, &var_d0, arg2, zmm7)
    rax_1 = sub_140ada0c0(&var_e0, rax_7)
else
    int64_t rax = sx.q(*(arg1 + 0x90))
    float var_b8[0x4]
    
    if (rax.d != 0)
        int32_t* rcx_1
        
        if (rax.d s>= 2)
            rcx_1 = *(arg1 + 0x88)
        
        float var_88[0x4]
        void arg_8
        
        if (rax.d s< 2 || zmm7[0] f<= *rcx_1)
            sub_142093410(arg1, arg2, 0, &arg_8, &var_d0, nullptr, nullptr)
            var_b8 = *sub_140ada080(&var_88, &var_d0)
        else
            void var_98
            
            if (zmm7[0] f< rcx_1[rax * 0xb - 0xb])
                rcx_1.b = 0
                int32_t r14_1 = 1
                
                if (rax s> 1)
                    float (* rbx_1)[0x4] = 0x2c
                    int64_t rsi_1 = 1
                    int128_t zmm9 = 0x3f800000
                    float zmm8[0x4] = zx.o(0)
                    float zmm6[0x4]
                    float var_48_1[0x4] = zmm6
                    
                    while (rcx_1.b == 0)
                        int64_t rax_4 = *(arg1 + 0x88)
                        float zmm1[0x4] = *(rbx_1 + rax_4)
                        
                        if (not(zmm7[0] >= zmm1[0]))
                            zmm1[0] = zmm1[0] f- *(rax_4 + rbx_1 - 0x2c)
                            zmm7[0] = zmm7[0] f- *(rax_4 + rbx_1 - 0x2c)
                            zmm7[0] = zmm7[0] / zmm1[0]
                            
                            if (zmm7[0] >= zmm8[0])
                                _mm_min_ss(zmm7[0], zmm9.d)
                            
                            sub_142093410(arg1, arg2, r14_1 - 1, &arg_8, &var_e0, nullptr, nullptr)
                            sub_142093410(arg1, arg2, r14_1, &arg_8, &var_d0, nullptr, nullptr)
                            sub_140ada080(&var_98, &var_e0)
                            void var_a8
                            float (* rax_5)[0x4]
                            rax_5, rcx_1, zmm7, zmm8, zmm9 = sub_140ae0e60(&var_88, &var_98, 
                                &var_a8, sub_140ada080(&var_a8, &var_d0))
                            float zmm5_1[0x4] = data_143f47860
                            rcx_1.b = 1
                            zmm6 = *rax_5
                            float temp0_2[0x4] = _mm_mul_ps(zmm6, zmm6)
                            float temp0_4[0x4] =
                                _mm_add_ps(temp0_2, _mm_shuffle_ps(temp0_2, temp0_2, 0x4e))
                            float temp0_6[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x39), temp0_4)
                            float temp0_7[0x4] = _mm_rsqrt_ps(temp0_6)
                            uint32_t zmm3_2[0x4] = _mm_mul_ps(temp0_6, zmm5_1)
                            float temp0_13[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm5_1, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_7, temp0_7), zmm3_2)), 
                                    temp0_7), 
                                temp0_7)
                            float temp0_16[0x4] = _mm_sub_ps(zmm5_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_13, temp0_13), zmm3_2))
                            float temp0_18[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_6, 2)
                            var_b8 = _mm_and_ps(
                                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_16, temp0_13), temp0_13), 
                                    zmm6) ^ data_143f47850, 
                                temp0_18) ^ data_143f47850
                        
                        r14_1 += 1
                        rsi_1 += 1
                        rbx_1 = &(*rbx_1)[0xb]
                        
                        if (rsi_1 s>= rax)
                            break
                    
                    rbx = arg4
            else
                sub_142093410(arg1, arg2, (rax - 1).d, &arg_8, &var_e0, nullptr, nullptr)
                var_b8 = *sub_140ada080(&var_98, &var_e0)
        rax_1, zmm7_1 = sub_140acd070(&var_d0, &var_b8)
    else
        var_b8 = data_14399f720
        rax_1, zmm7_1 = sub_140acd070(&var_d0, &var_b8)
*arg5 = *rax_1
arg5[1].d = rax_1[1].d
int64_t* rax_9 = sub_142088800(arg1, &var_d0, arg2, zmm7_1)
*rbx = *rax_9
int32_t result = rax_9[1].d
rbx[1].d = result
return result
