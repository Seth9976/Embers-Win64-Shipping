// 函数: sub_141f80710
// 地址: 0x141f80710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(_mm_and_ps(*arg2, 0x7fffffff)[0] f>= 1.00000002e+20f)
        && not(_mm_and_ps(*(arg2 + 4), 0x7fffffff)[0] f>= 1.00000002e+20f)
        && not(_mm_and_ps(*(arg2 + 8), 0x7fffffff)[0] f>= 1.00000002e+20f))
    int32_t rbx_1 = 0
    bool cond:1_1 = data_143f3bc60 == 0
    int128_t zmm8
    zmm8.d = arg5.d f* __maxss_xmmss_memss((*data_143f5a0e8)[0], *data_143f5a100)[0]
    
    if (not(cond:1_1))
        bool cond:2_1 = data_143f3c534 == 0
        data_143f3bc60 = 0
        data_143f3c530 = 0
        
        if (not(cond:2_1))
            sub_1405c5660(&data_143f3c528, 0)
        
        bool cond:4_1 = data_143f3c554 == 0
        data_143f3c550 = 0
        
        if (not(cond:4_1))
            sub_1405a5130(&data_143f3c548, 0)
    
    int128_t zmm9 = arg7
    
    if (not(zmm9.d f> 0f))
        int32_t rdx = data_143f3c540
        
        if (rdx s> 0)
            int64_t r9_1 = data_143f3c538
            int32_t* rdi_1 = nullptr
            
            do
                uint32_t zmm0[0x4] = *arg2
                zmm0[0] = zmm0[0] f- *(rdi_1 + r9_1)
                
                if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
                    zmm0 = *(arg2 + 4)
                    zmm0[0] = zmm0[0] f- *(rdi_1 + r9_1 + 4)
                    
                    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
                        zmm0 = *(arg2 + 8)
                        zmm0[0] = zmm0[0] f- *(rdi_1 + r9_1 + 8)
                        
                        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
                            int32_t rcx_2 = rdx - rbx_1 - 1
                            
                            if (rcx_2 s>= 1)
                                rcx_2 = 1
                            
                            if (rcx_2 != 0)
                                memcpy(r9_1 + sx.q(rbx_1) * 0x28, r9_1 + sx.q(rdx - rcx_2) * 0x28, 
                                    rcx_2 * 0x28)
                                rdx = data_143f3c540
                            
                            data_143f3c540 = rdx - 1
                            sub_1409da680(&data_143f3c538)
                            rdx = data_143f3c540
                            rbx_1 -= 1
                            r9_1 = data_143f3c538
                            rdi_1 -= 0x28
                
                rbx_1 += 1
                rdi_1 = &rdi_1[0xa]
            while (rbx_1 s< rdx)
    
    int32_t var_88_1
    int64_t* rcx_6
    
    if (zmm9.d f<= 0f)
        var_88_1 = 0
        rcx_6 = &data_143f3c528
    else
        var_88_1 = zmm9.d
        rcx_6 = &data_143f3c538
    
    return sub_141f80550(rcx_6, arg2, arg3, arg4, zmm8.d, arg6, var_88_1, arg8)

return &__return_addr
