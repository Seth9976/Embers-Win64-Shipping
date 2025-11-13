// 函数: sub_142317820
// 地址: 0x142317820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141f64a80(arg1)
uint64_t result_2 = result

if (arg2 != 0 && result != 0 && arg1[0x86] != 0 && arg1[0x101].d s<= 0)
    result = arg1[0x15]
    
    if (result == 0)
        result = sub_141ee69e0(arg1)
    
    if ((*(result_2 + 0x78) & 1) == 0 || result == 0)
    label_1423178a2:
        bool cond:0_1 = arg1[0x86] == 0
        float zmm1[0x4] = *(arg1 + 0x1e0)
        float var_88 = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_80_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_84_1 = temp0_1[0]
        arg1[0xf4].d = 0xffffffff
        
        if (not(cond:0_1))
            result = sub_141f64a80(arg1)
            uint64_t result_1 = result
            
            if (result != 0)
                void* rcx_3 = arg1[0x86]
                int32_t rbp_1 = 0
                int32_t i = 0
                
                if (*(rcx_3 + 0x1b0) s> 0)
                    int64_t* rsi_1 = nullptr
                    
                    do
                        result = sub_142249710(result_1, *(rsi_1 + *(rcx_3 + 0x1a8)))
                        int32_t r15_1 = result.d
                        
                        if (result.d != 0xffffffff)
                            sub_142265e50(arg2, *(arg1 + 0xc))
                            int64_t r8_2 = sx.q(*(result_2 + 0x48))
                            
                            if (r8_2 s> 0)
                                int64_t rdx_3 = 0
                                
                                do
                                    void* rcx_6 = *(*(result_2 + 0x40) + (rdx_3 << 3))
                                    
                                    if (rcx_6 != 0)
                                        rbp_1 += *(rcx_6 + 0x70) + *(rcx_6 + 0x60) + *(rcx_6 + 0x50)
                                            + *(rcx_6 + 0x40) + *(rcx_6 + 0x30)
                                    
                                    rdx_3 += 1
                                while (rdx_3 s< r8_2)
                            
                            int64_t* arg_10
                            
                            if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(
                                    &arg1[0x104]) != 0 || rbp_1 s<= arg1[0xed].d || rbp_1 u> 0x80)
                                __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(
                                    &arg1[0x104])
                            else
                                arg1[0x104] = *sub_142264e10(&arg_10, zx.q(*(result_2 + 0x48)))
                            
                            int64_t** var_70_1 = &arg_10
                            int128_t* (* var_78)(int128_t* arg1, int64_t* arg2, int32_t* arg3) =
                                sub_14230afa0
                            arg_10 = arg1
                            sub_1423185e0(arg1, result_2, &var_88, &arg1[0x100], &arg1[0x102], 
                                &var_78, arg2, arg1, r15_1, &arg1[0x104])
                            sub_141f49140(arg1, r15_1)
                            float var_68[0x4][0x4]
                            float (* rax_8)[0x4] = sub_141f5e2b0(arg1, &var_68, 0)
                            *(arg1 + 0x870) = *rax_8
                            *(arg1 + 0x880) = rax_8[1]
                            *(arg1 + 0x890) = rax_8[2]
                            *(arg1 + 0x8a0) = rax_8[3]
                            sub_141f374d0(arg1)
                            return sub_141f374f0(arg1)
                        
                        rcx_3 = arg1[0x86]
                        i += 1
                        rsi_1 += 0xc
                    while (i s< *(rcx_3 + 0x1b0))
    else
        result = sub_14243ac50(result)
        
        if (result.d != 1 || data_143a2feb0 == 0)
            goto label_1423178a2

return result
