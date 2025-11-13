// 函数: sub_141d35cf0
// 地址: 0x141d35cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg2

if (*(arg1 + 0x5a0) == 0)
    *(arg1 + 0x5a0) = sub_141d37d90(arg1 + 0x4b8)

void* rax_2 = *(arg3 + 0x10)
void* rcx_1 = arg3 + 0x20
float arg_10 = zmm6[0]

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t result = (*arg3)((*(*rcx_1 + 8))(rcx_1), &arg_10, arg1 + 0x20)

if (result.b != 0)
    int64_t* r15_1 = *(arg1 + 0x5a0)
    sub_141d40e10(r15_1, *(arg1 + 0x48), 1)
    sub_141d40e90(&r15_1[2], *(arg1 + 0x48), 1)
    sub_141d40e90(&r15_1[4], *(arg1 + 0x48), 1)
    int32_t* rsi_1 = *(arg1 + 0x40)
    int64_t rbp_1 = 0
    uint64_t r14_2 = sx.q(*(arg1 + 0x48)) << 2 u>> 2
    
    if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x48))])
        r14_2 = 0
    
    if (r14_2 != 0)
        int128_t zmm7 = 0x322bcc77
        float zmm8[0x4] = 0x3f800000
        
        do
            int32_t r10_1 = *(arg1 + 0xc8)
            int64_t r9_1 = sx.q(*rsi_1)
            int32_t* rdx_9
            
            if (r10_1 == *(arg1 + 0xf4))
            label_141d35e7e:
                rdx_9 = nullptr
            else
                void* r8_4 = arg1 + 0xf8
                void* rcx_6 = *(r8_4 + 8)
                
                if (rcx_6 != 0)
                    r8_4 = rcx_6
                
                int32_t rax_7 = *(r8_4 + (((sx.q(*(arg1 + 0x108)) - 1) & r9_1) << 2))
                
                if (rax_7 == 0xffffffff)
                label_141d35e7e_1:
                    rdx_9 = nullptr
                else
                    while (true)
                        rdx_9 = (sx.q(rax_7) << 4) + *(arg1 + 0xc0)
                        
                        if (*rdx_9 == r9_1.d)
                            break
                        
                        rax_7 = rdx_9[2]
                        
                        if (rax_7 == 0xffffffff)
                            goto label_141d35e7e_2
                    
                    if (rax_7 == 0xffffffff)
                    label_141d35e7e_2:
                        rdx_9 = nullptr
            
            int64_t r11_1 = sx.q(rdx_9[1])
            
            if (r11_1.d != 0xffffffff)
                int32_t* rdx_15
                
                if (r10_1 - *(arg1 + 0xf4) == 0)
                label_141d35eee:
                    rdx_15 = nullptr
                else
                    void* r8_6 = arg1 + 0xf8
                    void* rcx_7 = *(r8_6 + 8)
                    
                    if (rcx_7 != 0)
                        r8_6 = rcx_7
                    
                    int32_t rax_8 = *(r8_6 + (((sx.q(*(arg1 + 0x108)) - 1) & r9_1) << 2))
                    
                    if (rax_8 == 0xffffffff)
                    label_141d35eee_1:
                        rdx_15 = nullptr
                    else
                        while (true)
                            rdx_15 = (sx.q(rax_8) << 4) + *(arg1 + 0xc0)
                            
                            if (*rdx_15 == r9_1.d)
                                break
                            
                            rax_8 = rdx_15[2]
                            
                            if (rax_8 == 0xffffffff)
                                goto label_141d35eee_2
                        
                        if (rax_8 == 0xffffffff)
                        label_141d35eee_2:
                            rdx_15 = nullptr
                
                int128_t* r10_5 = sx.q(rdx_15[1]) * 0x30 + *(arg1 + 0x170)
                int32_t* rdx_21
                
                if (*(arg1 + 0xc8) == *(arg1 + 0xf4))
                label_141d35f5f:
                    rdx_21 = nullptr
                else
                    void* r8_8 = arg1 + 0xf8
                    void* rcx_8 = *(r8_8 + 8)
                    
                    if (rcx_8 != 0)
                        r8_8 = rcx_8
                    
                    int32_t rax_11 = *(r8_8 + (((sx.q(*(arg1 + 0x108)) - 1) & r9_1) << 2))
                    
                    if (rax_11 == 0xffffffff)
                    label_141d35f5f_1:
                        rdx_21 = nullptr
                    else
                        while (true)
                            rdx_21 = (sx.q(rax_11) << 4) + *(arg1 + 0xc0)
                            
                            if (*rdx_21 == r9_1.d)
                                break
                            
                            rax_11 = rdx_21[2]
                            
                            if (rax_11 == 0xffffffff)
                                goto label_141d35f5f_2
                        
                        if (rax_11 == 0xffffffff)
                        label_141d35f5f_2:
                            rdx_21 = nullptr
                
                int64_t rax_12 = sx.q(rdx_21[1])
                int128_t* rdx_24
                
                if (rax_12.d s< 0 || rax_12.d s>= *(arg1 + 0x188))
                    rdx_24 = nullptr
                else
                    rdx_24 = rax_12 * 0x30 + *(arg1 + 0x180)
                
                if (zmm6[0] f<= zmm7.d || rdx_24 == 0)
                    int64_t rdx_26 = r11_1 * 3
                    float (* rax_20)[0x4] = r11_1 * 0x30 + *r15_1
                    *rax_20 = *r10_5
                    rax_20[1] = r10_5[1]
                    rax_20[2] = r10_5[2]
                    int64_t rcx_12 = r15_1[2]
                    *(rcx_12 + (rdx_26 << 2)) = data_143dbb1f8.q
                    *(rcx_12 + (rdx_26 << 2) + 8) = data_143dbb200
                    int64_t rcx_13 = r15_1[4]
                    *(rcx_13 + (rdx_26 << 2)) = data_143dbb1f8.q
                    *(rcx_13 + (rdx_26 << 2) + 8) = data_143dbb200
                else
                    float zmm0_1[0x4] = *rdx_24
                    int128_t* rax_15 = r11_1 * 0x30 + *r15_1
                    int64_t rbx_1 = r11_1 * 3
                    zmm8[0] = zmm8[0] / zmm6[0]
                    *rax_15 = zmm0_1
                    rax_15[1] = rdx_24[1]
                    rax_15[2] = rdx_24[2]
                    float zmm2[0x4] = rdx_24[1]
                    float zmm5_1[0x4] = r10_5[1]
                    int64_t rcx_9 = r15_1[2]
                    float zmm4_1[0x4] = zmm5_1
                    zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                    zmm4_1[0] = zmm4_1[0] - zmm2[0]
                    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    arg2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                    arg2[0] = arg2[0] - zmm0_1[0]
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
                    zmm5_1[0] = zmm5_1[0] - zmm2[0]
                    zmm4_1[0] = zmm4_1[0] * zmm8[0]
                    arg2[0] = arg2[0] * zmm8[0]
                    zmm5_1[0] = zmm5_1[0] * zmm8[0]
                    *(rcx_9 + (rbx_1 << 2)) = (_mm_unpacklo_ps(zmm4_1, arg2[0].q)).q
                    *(rcx_9 + (rbx_1 << 2) + 8) = zmm5_1[0]
                    arg2 = *rdx_24
                    float var_78[0x4] = *r10_5
                    float var_68[0x4] = arg2
                    int64_t var_98
                    zmm6, zmm7, zmm8 = sub_141733ba0(&var_98, &var_68, &var_78, zmm6)
                    int64_t rcx_11 = r15_1[4]
                    *(rcx_11 + (rbx_1 << 2)) = var_98
                    int32_t var_90
                    *(rcx_11 + (rbx_1 << 2) + 8) = var_90
            
            rsi_1 = &rsi_1[1]
            rbp_1 += 1
        while (rbp_1 != r14_2)
    
    result = sub_141d37d90(arg1 + 0x4b8)
    *(arg1 + 0x5a0) = result

return result
