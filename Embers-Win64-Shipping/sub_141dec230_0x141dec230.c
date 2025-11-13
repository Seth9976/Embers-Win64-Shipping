// 函数: sub_141dec230
// 地址: 0x141dec230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (not(arg3[0] f== arg4.d) && *(arg1 + 0x1c) != 0)
    void* const r14_1 = *arg1
    
    if (r14_1 != 0)
        float zmm6[0x4] = arg1[1].d
        int64_t r15
        r15.b = arg3[0] f> arg4.d
        float zmm0_1[0x4]
        zmm0_1, result = sub_141debb60(arg1)
        zmm0_1[0] = zmm0_1[0] + zmm6[0]
        bool cond:1_1
        
        if (r15.b == 0)
            if (not(arg3[0] >= zmm0_1[0]))
                cond:1_1 = arg4.d f<= zmm6[0]
            label_141dec2c0:
                
                if (not(cond:1_1))
                    float zmm13[0x4] = sub_141decb10(arg1)
                    float arg_18
                    float zmm8[0x4]
                    
                    if (r15.b == 0)
                        float temp0_3[0x4] = _mm_max_ss(zmm6[0], arg3[0])
                        arg_18 = temp0_3[0]
                        zmm8 = temp0_3
                        _mm_min_ss(zmm0_1[0], arg4.d)
                    else
                        zmm8 = _mm_min_ss(zmm0_1[0], arg3[0])
                        _mm_max_ss(zmm6[0], arg4.d)
                        arg_18 = zmm8[0]
                    
                    float zmm0_3[0x4]
                    uint32_t zmm6_1[0x4]
                    zmm0_3, zmm6_1 = sub_141de6e10(arg1, &arg_18)
                    float zmm9[0x4] = *(arg1 + 0xc)
                    float zmm7_1[0x4] = zmm0_3
                    zmm0_3 = arg1[2].d
                    
                    if (not(zmm7_1[0] >= zmm9[0]))
                        zmm7_1 = zmm9
                    else if (not(zmm7_1[0] < zmm0_3[0]))
                        zmm7_1 = zmm0_3
                    
                    uint32_t zmm11[0x4] = 0x7fffffff
                    zmm6_1[0] = zmm6_1[0] f- zmm8[0]
                    int128_t zmm12 = zx.o(0)
                    zmm13[0] - 0f
                    bool c_1 = zmm13[0] < 0f
                    zmm6_1 = _mm_and_ps(zmm6_1, 0x7fffffff)
                    float zmm10[0x4]
                    
                    if (c_1 == r15.b)
                        zmm10 = zmm9
                        zmm9 = zmm0_3
                    else
                        zmm10 = zmm0_3
                    
                    void* rax_1 = sub_1424696d0()
                    void* rdx_1 = *(r14_1 + 0x10)
                    result = sx.q(*(rax_1 + 0x38))
                    
                    if (result.d s> *(rdx_1 + 0x38))
                        r14_1 = nullptr
                    else
                        void* const* result_1 = result
                        result = *(rdx_1 + 0x30)
                        
                        if (result[result_1] != rax_1 + 0x30)
                            r14_1 = nullptr
                    
                    void* const rbp_1 = *arg1
                    
                    if (rbp_1 == 0)
                        rbp_1 = nullptr
                    else
                        void* rax_2 = sub_14245c1f0()
                        void* rdx_2 = *(rbp_1 + 0x10)
                        result = sx.q(*(rax_2 + 0x38))
                        
                        if (result.d s> *(rdx_2 + 0x38))
                            rbp_1 = nullptr
                        else
                            void* const* result_2 = result
                            result = *(rdx_2 + 0x30)
                            
                            if (result[result_2] != rax_2 + 0x30)
                                rbp_1 = nullptr
                    
                    if (r14_1 != 0 || rbp_1 != 0)
                        int32_t rsi_1 = 1
                        
                        if (arg1[3].d s>= 1)
                            rsi_1 = arg1[3].d
                        
                        if (rsi_1 s> 0)
                            while (not(zmm6_1[0] f<= zmm12.d))
                                zmm8 = zmm9
                                zmm8[0] = zmm8[0] - zmm7_1[0]
                                uint32_t temp0_6[0x4] = _mm_and_ps(zmm6_1, zmm11)
                                zmm8[0] = zmm8[0] / zmm13[0]
                                uint32_t temp0_7[0x4] = _mm_and_ps(zmm8, zmm11)
                                
                                if (temp0_6[0] f< temp0_7[0])
                                    float zmm3[0x4]
                                    
                                    zmm3 = r15.b == 0 ? 0x3f800000 : 0xbf800000
                                    
                                    zmm3[0] = zmm3[0] * zmm13[0]
                                    zmm3[0] = zmm3[0] f* zmm6_1[0]
                                    zmm3[0] = zmm3[0] + zmm7_1[0]
                                    
                                    if (r14_1 != 0)
                                        int64_t rdi_2 = sx.q(arg2[1].d)
                                        float var_a0_2 = zmm7_1[0]
                                        float var_9c_2 = zmm3[0]
                                        int32_t rax_4 = (rdi_2 + 1).d
                                        arg2[1].d = rax_4
                                        
                                        if (rax_4 s> *(arg2 + 0xc))
                                            sub_1405a4f90(arg2)
                                        
                                        result = *arg2
                                        *(result + rdi_2 * 0x10) = r14_1.o
                                    else if (rbp_1 != 0)
                                        return sub_141dec590(rbp_1 + 0xa8, arg2, zmm7_1, zmm3)
                                    
                                    break
                                
                                if (r14_1 != 0)
                                    int64_t rdi_1 = sx.q(arg2[1].d)
                                    float var_a0_1 = zmm7_1[0]
                                    float var_9c_1 = zmm9[0]
                                    int32_t rax_3 = (rdi_1 + 1).d
                                    arg2[1].d = rax_3
                                    
                                    if (rax_3 s> *(arg2 + 0xc))
                                        sub_1405a4f90(arg2)
                                    
                                    result = *arg2
                                    *(result + rdi_1 * 0x10) = r14_1.o
                                else if (rbp_1 != 0)
                                    result, zmm6_1, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
                                        sub_141dec590(rbp_1 + 0xa8, arg2, zmm7_1, zmm9)
                                
                                rsi_1 -= 1
                                zmm6_1[0] = zmm6_1[0] f- zmm8[0]
                                zmm7_1 = zmm10
                                
                                if (rsi_1 s<= 0)
                                    break
        else if (not(arg4.d f>= zmm0_1[0]))
            cond:1_1 = arg3[0] <= zmm6[0]
            goto label_141dec2c0

return result
