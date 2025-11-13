// 函数: sub_142b6bba0
// 地址: 0x142b6bba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = arg3

if (arg1 != 0)
    int32_t rax_3 = arg2 s>> 0xa
    
    if (rax_3 s< *(arg1 + 0x2c))
        void* rdx_1 = sx.q(*(arg1 + 0x28)) + arg1
        uint64_t r8 = zx.q(*(sx.q(*(arg1 + 0x34)) + arg1 + (zx.q((arg2 & 0xf) + (
            zx.d(*(rdx_1 + (zx.q(zx.d(*(rdx_1 + (sx.q(rax_3) << 1))) + (arg2 s>> 4 & 0x3f)) << 1)))
            << 2)) << 1)))
        int32_t rdx_2 = *(sx.q(*(arg1 + 0x3c)) + arg1 + (r8 << 2))
        
        if (rdx_2 != 0)
            int32_t rdi_1
            int32_t r12_1
            
            if (rdx_2 u< 0x1f0000)
                void* rcx_8 = sx.q(*(arg1 + 0x14)) + arg1
                void* r8_2 = sx.q(*(arg1 + 0x18)) + arg1
                void* arg_8 = rcx_8
                rdi_1 = 0
                int64_t r10_1 = sx.q(arg4)
                r12_1 = 0
                void* var_48_1 = r8_2
                int32_t rsi_1 = 0
                int64_t var_40_1 = r10_1
                int32_t rbp_1 = 0
                int64_t r14_1 = 0
                int64_t r15_1 = 0
                
                while (true)
                    int64_t rax_11 = sx.q(rdx_2)
                    void* r13_1 = r8_2 + (rax_11 << 2)
                    int32_t rcx_9 = *r13_1
                    
                    if (rcx_9 != 0 && ((rcx_9 & 0xc0000000) != 0 || arg8 != 0
                            || arg2 - 0xe000 u< 0x1900 || arg2 - 0xf0000 u< 0x20000)
                            && not(test_bit(rcx_9, 0x1d)))
                        rdi_1 = rcx_9
                        r12_1 = rbp_1 + 2 + rsi_1
                    
                    int16_t r8_3
                    
                    if (r15_1 s>= r10_1)
                        if (r14_1 s>= sx.q(arg6))
                            if (arg9 == 0)
                                int32_t rcx_11 = rsi_1 + rbp_1
                                
                                if (rcx_11 s<= 0x13)
                                    return zx.q(0xfffffffe - rcx_11)
                            
                            break
                        
                        rsi_1 += 1
                        r8_3 = *(arg5 + (r14_1 << 1))
                        r14_1 += 1
                    else
                        r8_3 = *(r11 + (r15_1 << 1))
                        rbp_1 += 1
                        r15_1 += 1
                    
                    int32_t rax_16 = sub_142b6b830(rcx_8 + (rax_11 << 1) + 2, 
                        zx.d(*(rcx_8 + (rax_11 << 1))), r8_3)
                    
                    if (rax_16 s< 0)
                        break
                    
                    r11 = arg3
                    rcx_8 = arg_8
                    r8_2 = var_48_1
                    r10_1 = var_40_1
                    rdx_2 = *(r13_1 + (sx.q(rax_16) << 2) + 4)
                    
                    if (rdx_2 u>= 0x1000000)
                        if (((rdx_2 & 0xc0000000) != 0 || arg8 != 0 || arg2 - 0xe000 u< 0x1900
                                || arg2 - 0xf0000 u< 0x20000) && not(test_bit(rdx_2, 0x1d)))
                            rdi_1 = rdx_2
                            r12_1 = rbp_1 + 2 + rsi_1
                        
                        break
                
                if (r12_1 == 0)
                    return 0
            else if ((rdx_2 & 0xc0000000) != 0 || arg8 != 0 || arg2 - 0xe000 u< 0x1900)
                if (test_bit(rdx_2, 0x1d))
                    return 0
                
                rdi_1 = rdx_2
                r12_1 = 2
            else
                if (arg2 - 0xf0000 u>= 0x20000 || test_bit(rdx_2, 0x1d))
                    return 0
                
                rdi_1 = rdx_2
                r12_1 = 2
            
            if (rdi_1 == 0x80000001)
                return 1
            
            *arg7 = rdi_1
            return zx.q(r12_1)

return 0
