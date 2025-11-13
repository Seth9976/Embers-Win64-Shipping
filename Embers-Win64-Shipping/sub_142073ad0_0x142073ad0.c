// 函数: sub_142073ad0
// 地址: 0x142073ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void** result_1 = arg2
int64_t i_2 = sx.q(arg2[1].d)

if (i_2.d s> 0 && arg1[4].d == 0)
    int64_t rbp
    rbp.b = 0
    int32_t r13_1 = 0
    
    if (i_2.d s> *(arg1 + 0x24))
        sub_140991380(&arg1[3], i_2.d)
        arg2 = result_1
    
    int64_t i_1 = i_2
    int32_t r12_1 = 0
    int128_t var_50
    int128_t zmm0
    
    if (i_2.d s> 0)
        int32_t* r14_1 = nullptr
        int64_t i
        
        do
            zmm0 = *(r14_1 + *arg2)
            
            if (not(zmm0.d f< *(arg1 + 0x54)) && not(zmm0.d f> arg1[0xb].d))
                int64_t rsi = sx.q(arg1[4].d)
                int32_t rax_1 = (rsi + 1).d
                arg1[4].d = rax_1
                
                if (rax_1 s> *(arg1 + 0x24))
                    sub_140adefe0(&arg1[3])
                    arg2 = result_1
                
                int64_t r15_1 = rsi * 9
                *(arg1[3] + (r15_1 << 2)) = *(r14_1 + *arg2)
                char rcx_3 = *(*arg2 + r14_1 + 0x28)
                
                if (rcx_3 u> 5 || not(test_bit(0x2b, zx.d(rcx_3))))
                    *(arg1[3] + (r15_1 << 2) + 0x1c) = rcx_3
                    
                    if (rbp.b != 0)
                        rbp = sx.q(arg1[6].d)
                        int32_t arg_24 = rsi.d
                        int32_t rax_8 = (rbp + 1).d
                        arg1[6].d = rax_8
                        
                        if (rax_8 s> *(arg1 + 0x34))
                            sub_1405a4d70(&arg1[5])
                        
                        *(arg1[5] + (rbp << 3)) = r13_1.q
                    
                    r13_1 = r12_1
                    rbp.b = 0
                else
                    rbp.b = 1
                    *(arg1[3] + (r15_1 << 2) + 0x1c) = 3
                
                if (rbp.b == 0)
                    int64_t rax_10 = arg1[3]
                    __builtin_memset(&var_50, 0, 0x18)
                    sub_141fda810(arg1, *(rax_10 + (r15_1 << 2)), &var_50)
            
            arg2 = result_1
            r12_1 += 1
            r14_1 = &r14_1[0xb]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t rdx_3 = arg1[1].d
    uint128_t zmm1 = *arg1[3]
    
    if (rdx_3 != 0)
        zmm0.d = (**arg1).d f- zmm1.d
    
    if (rdx_3 == 0 || zmm0.d f<= -9.99999975e-05f || not(zmm0.d f< 9.99999975e-05f))
        __builtin_memset(&var_50, 0, 0x18)
        sub_141fda810(arg1, zmm1, &var_50)
        rdx_3 = arg1[1].d
    
    zmm1 = *(arg1[3] + sx.q(arg1[4].d) * 0x24 - 0x24)
    result = *arg1
    zmm0.d = result[sx.q(rdx_3) * 0xa - 0xa].d.d f- zmm1.d
    
    if (zmm0.d f<= -9.99999975e-05f || not(zmm0.d f< 9.99999975e-05f))
        __builtin_memset(&var_50, 0, 0x18)
        result = sub_141fda810(arg1, zmm1, &var_50)
    
    if (rbp.b != 0)
        int64_t rbx_1 = sx.q(arg1[6].d)
        result_1:4.d = arg1[4].d - 1
        result_1.d = r13_1
        int32_t rax_18 = (rbx_1 + 1).d
        arg1[6].d = rax_18
        
        if (rax_18 s> *(arg1 + 0x34))
            sub_1405a4d70(&arg1[5])
        
        result = result_1
        *(arg1[5] + (rbx_1 << 3)) = result

return result
