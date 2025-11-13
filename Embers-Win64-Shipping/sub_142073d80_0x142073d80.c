// 函数: sub_142073d80
// 地址: 0x142073d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t i_3 = sx.q(arg2[1].d)

if (i_3.d s> 0 && arg1[4].d == 0)
    int64_t rbp
    rbp.b = 0
    int128_t* r14_1 = nullptr
    int32_t arg_10 = 0
    
    if (i_3.d s> *(arg1 + 0x24))
        sub_14083ad30(&arg1[3], i_3.d)
    
    int32_t r12_1 = 0
    int64_t i_2 = i_3
    int64_t i_1 = i_3
    float zmm0[0x4]
    int128_t zmm6
    
    if (i_3.d s> 0)
        int64_t i
        
        do
            zmm0 = *(r14_1 + *arg2)
            
            if (not(zmm0[0] f< arg1[8].d) && not(zmm0[0] f> *(arg1 + 0x44)))
                int64_t rsi = sx.q(arg1[4].d)
                int32_t rax_1 = (rsi + 1).d
                arg1[4].d = rax_1
                
                if (rax_1 s> *(arg1 + 0x24))
                    sub_14083a7e0(&arg1[3])
                    i_1 = i_2
                
                int64_t r8_1 = rsi * 3
                *(arg1[3] + (r8_1 << 2)) = *(r14_1 + *arg2)
                char rcx_3 = *(*arg2 + r14_1 + 0x10)
                
                if (rcx_3 u> 5 || not(test_bit(0x2b, zx.d(rcx_3))))
                    int64_t r15_1 = rsi * 3
                    *(arg1[3] + (r15_1 << 2) + 8) = rcx_3
                    
                    if (rbp.b != 0)
                        rbp = sx.q(arg1[6].d)
                        int32_t rax_8 = arg_10
                        int32_t var_6c_1 = rsi.d
                        int32_t rax_9 = (rbp + 1).d
                        arg1[6].d = rax_9
                        
                        if (rax_9 s> *(arg1 + 0x34))
                            sub_1405a4d70(&arg1[5])
                        
                        *(arg1[5] + (rbp << 3)) = rax_8.q
                    
                    int64_t rax_11 = arg1[3]
                    rbp.b = 0
                    arg_10 = r12_1
                    int32_t arg_20 = 0
                    zmm6 = sub_141fda760(arg1, *(rax_11 + (r15_1 << 2)), &arg_20)
                    i_1 = i_2
                else
                    rbp.b = 1
                    *(arg1[3] + (r8_1 << 2) + 8) = 3
            
            r12_1 += 1
            r14_1 += 0x14
            i = i_1
            i_1 -= 1
            i_2 = i_1
        while (i != 1)
        r14_1 = zx.q(arg_10)
    
    int64_t r8_3 = sx.q(arg1[1].d)
    int128_t* rdx_3 = *arg1
    int128_t var_48_1 = zmm6
    zmm6 = *arg1[3]
    
    if (r8_3.d != 0)
        zmm0 = *rdx_3
        zmm0[0] = zmm0[0] f- zmm6.d
    
    int128_t zmm1
    
    if (r8_3.d == 0 || zmm0[0] <= -9.99999975e-05f || not(zmm0[0] < 9.99999975e-05f))
        int32_t rsi_1 = 0
        arg_10 = 0
        
        if (r8_3.d s> 0)
            int64_t rax_13 = 0
            
            while (not(zmm6.d f<= *rdx_3))
                rsi_1 += 1
                rax_13 += 1
                rdx_3 += 0x14
                
                if (rax_13 s>= r8_3)
                    break
        
        sub_141fd3f30(arg1, rsi_1, 1)
        int64_t rcx_8 = *arg1
        zmm1 = arg_10
        int64_t var_60_1 = 0
        float var_68[0x4]
        var_68[0] = zmm6.d
        float temp0_1[0x4] = _mm_shuffle_ps(var_68, var_68, 0xe1)
        temp0_1[0] = zmm1.d
        int64_t rdx_5 = sx.q(rsi_1) * 5
        *(rcx_8 + (rdx_5 << 2)) = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
        *(rcx_8 + (rdx_5 << 2) + 0x10) = 0.d
        r8_3 = zx.q(arg1[1].d)
        rdx_3 = *arg1
    
    zmm1 = *(arg1[3] + sx.q(arg1[4].d) * 0xc - 0xc)
    result = sx.q(r8_3.d)
    zmm0 = *(rdx_3 + result * 0x14 - 0x14)
    zmm0[0] = zmm0[0] f- zmm1.d
    
    if (zmm0[0] <= -9.99999975e-05f || not(zmm0[0] < 9.99999975e-05f))
        arg_10 = 0
        result = sub_141fda760(arg1, zmm1, &arg_10)
    
    if (rbp.b != 0)
        int64_t rbx_1 = sx.q(arg1[6].d)
        int32_t arg_14 = arg1[4].d - 1
        arg_10 = r14_1.d
        int32_t rax_20 = (rbx_1 + 1).d
        arg1[6].d = rax_20
        
        if (rax_20 s> *(arg1 + 0x34))
            sub_1405a4d70(&arg1[5])
        
        result = arg_10.q
        *(arg1[5] + (rbx_1 << 3)) = result

return result
