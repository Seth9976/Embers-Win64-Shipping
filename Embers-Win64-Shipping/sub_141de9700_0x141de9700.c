// 函数: sub_141de9700
// 地址: 0x141de9700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int128_t zmm7 = *arg3
uint32_t zmm8[0x4] = *arg2

if (not(zmm8[0] f== zmm7.d))
    int128_t zmm9 = arg1[1].d
    int64_t rsi
    rsi.b = zmm8[0] f> zmm7.d
    int128_t zmm0_1
    zmm0_1, result = sub_141debb60(arg1)
    int128_t zmm6
    zmm6.d = zmm0_1.d f+ zmm9.d
    bool cond:0_1
    
    if (rsi.b == 0)
        if (not(zmm8[0] f>= zmm6.d))
            cond:0_1 = zmm7.d f<= zmm9.d
        label_141de9779:
            
            if (not(cond:0_1))
                int64_t* rdi_1 = *arg1
                
                if (rdi_1 != 0)
                    uint32_t zmm0_2[0x4] = sub_141decb10(arg1)
                    uint32_t temp0_1[0x4] = _mm_and_ps(zmm0_2, 0x7fffffff)
                    uint32_t zmm1_1 = zmm8[0]
                    
                    if (rsi.b == 0)
                        zmm1_1 = _mm_max_ss(zmm1_1, zmm9.d)
                    else
                        zmm1_1 = _mm_min_ss(zmm1_1, zmm6.d)
                    
                    uint32_t var_98[0x4]
                    var_98[0] = zmm1_1
                    uint32_t zmm0_3[0x4]
                    uint32_t zmm7_1[0x4]
                    zmm0_3, zmm7_1 = sub_141de6e10(arg1, &var_98)
                    uint32_t zmm6_1[0x4] = *(arg1 + 0xc)
                    float zmm2_1 = zmm0_3[0]
                    bool cond:1_1 = zmm2_1 f>= zmm6_1[0]
                    zmm0_3 = arg1[2].d
                    float arg_10 = zmm2_1
                    
                    if (not(cond:1_1))
                        arg_10 = zmm6_1[0]
                        zmm2_1 = zmm6_1[0]
                    else if (not(zmm2_1 f< zmm0_3[0]))
                        arg_10 = zmm0_3[0]
                        zmm2_1 = zmm0_3[0]
                    
                    zmm7_1[0] = zmm7_1[0] f- zmm8[0]
                    zmm0_2[0] f- 0f
                    bool c_1 = zmm0_2[0] f< 0f
                    uint32_t temp0_4[0x4] = _mm_and_ps(zmm7_1, 0x7fffffff)
                    
                    zmm8 = c_1 == rsi.b ? zmm6_1 : zmm0_3
                    
                    if (c_1 == rsi.b)
                        zmm6_1 = zmm0_3
                    
                    result = arg1[3].d
                    int32_t result_1 = 1
                    uint32_t arg_18 = zmm6_1[0]
                    
                    if (result s>= 1)
                        result_1 = result
                    
                    if (result_1 s> 0)
                        while (not(temp0_4[0] f<= 0f))
                            zmm6_1[0] = zmm6_1[0] f- zmm2_1
                            uint32_t temp0_5[0x4] = _mm_and_ps(temp0_4, 0x7fffffff)
                            zmm6_1[0] = zmm6_1[0] f/ temp0_1[0]
                            uint32_t temp0_6[0x4] = _mm_and_ps(zmm6_1, 0x7fffffff)
                            
                            if (temp0_5[0] f< temp0_6[0])
                                zmm0_3 = rsi.b == 0 ? 0x3f800000 : 0xbf800000
                                
                                int64_t rax_2 = *rdi_1
                                zmm0_3[0] = zmm0_3[0] f* zmm0_2[0]
                                zmm0_3[0] = zmm0_3[0] f* temp0_4[0]
                                zmm0_3[0] = zmm0_3[0] f+ zmm2_1
                                var_98[0] = zmm0_3[0]
                                return (*(rax_2 + 0x288))(rdi_1, &arg_10, &var_98, arg4, var_98[0])
                            
                            result = (*(*rdi_1 + 0x288))(rdi_1, &arg_10, &arg_18, arg4)
                            result_1 -= 1
                            arg_10 = zmm8[0]
                            temp0_4[0] = temp0_4[0] f- zmm6_1[0]
                            zmm2_1 = zmm8[0]
                            
                            if (result_1 s<= 0)
                                break
                            
                            zmm6_1 = arg_18
    else if (not(zmm7.d f>= zmm6.d))
        cond:0_1 = zmm8[0] f<= zmm9.d
        goto label_141de9779

return result
