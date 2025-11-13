// 函数: sub_142baa620
// 地址: 0x142baa620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg1

if (*(*(result + 0x90) + 0x78) != 0x28 || *(arg1 + 0x373) == 0)
    goto label_142baa674

if (*(arg1 + 0x374) == 0 || *(arg1 + 0x375) == 0)
    if ((arg1[0x43].b & 1) != 0)
        *(arg1 + 0x374) = 1
        goto label_142baa674
    
    *(arg1 + 0x375) = 1
label_142baa674:
    
    if (*(arg1 + 0x106) != 0)
        int64_t var_58
        int64_t arg_10
        int64_t rax_1
        int64_t r12_1
        int64_t r15
        
        if ((arg1[0x43].b & 1) == 0)
            r15.b = 0x10
            int64_t rcx_1 = arg1[0x21] + 4
            r12_1 = arg1[0x22] + 4
            arg_10 = rcx_1
            rax_1 = arg1[0x23] + 4
            var_58 = rcx_1
        else
            int64_t rax = arg1[0x21]
            r15.b = 8
            r12_1 = arg1[0x22]
            arg_10 = rax
            var_58 = rax
            rax_1 = arg1[0x23]
        
        int64_t var_48_1 = rax_1
        uint32_t var_40_1 = zx.d(*(arg1 + 0x104))
        result = 0
        int32_t arg_8 = 0
        uint64_t rbx_1 = 0
        int64_t var_50_1 = r12_1
        
        do
            uint64_t r13_1 = zx.q(rbx_1.d)
            uint32_t i = zx.d(*(arg1[0x25] + (sx.q(result.w) << 1))) - zx.d(arg1[0x26].w)
            uint32_t rax_6 = zx.d(*(arg1 + 0x104))
            
            if (i u>= rax_6)
                i = rax_6 - 1
            
            while (rbx_1.d u<= i)
                if ((*(zx.q(rbx_1.d) + arg1[0x24]) & r15.b) != 0)
                    if (rbx_1.d u<= i)
                        int32_t rbp_1 = rbx_1.d
                        int32_t rsi_1 = rbx_1.d
                        rbx_1 = zx.q(rbx_1.d + 1)
                        
                        while (rbx_1.d u<= i)
                            if ((*(rbx_1 + arg1[0x24]) & r15.b) != 0)
                                sub_142bb06f0(&var_58, rsi_1 + 1, (rbx_1 - 1).d, rsi_1, rbx_1.d)
                                rsi_1 = rbx_1.d
                            
                            rbx_1 = zx.q(rbx_1.d + 1)
                        
                        if (rsi_1 != rbp_1)
                            sub_142bb06f0(&var_58, zx.d(rsi_1.w + 1), i, rsi_1, rbp_1)
                            
                            if (rbp_1 != 0)
                                sub_142bb06f0(&var_58, r13_1.d, rbp_1 - 1, rsi_1, rbp_1)
                        else
                            uint64_t rax_9 = zx.q(rsi_1)
                            int32_t rdx_2 = *(r12_1 + (rax_9 << 3))
                            int32_t rdx_3 = rdx_2 - *(arg_10 + (rax_9 << 3))
                            
                            if (rdx_2 != *(arg_10 + (rax_9 << 3)))
                                if (r13_1.d u< rsi_1)
                                    int32_t* rcx_6 = r12_1 + (r13_1 << 3)
                                    uint64_t j_1 = zx.q(rsi_1 - r13_1.d)
                                    uint64_t j
                                    
                                    do
                                        *rcx_6 += rdx_3
                                        rcx_6 = &rcx_6[2]
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                
                                uint64_t rcx_7 = zx.q(rsi_1 + 1)
                                
                                while (rcx_7.d u<= i)
                                    *(r12_1 + (rcx_7 << 3)) += rdx_3
                                    rcx_7 = zx.q(rcx_7.d + 1)
                    
                    break
                
                rbx_1 = zx.q(rbx_1.d + 1)
            
            result.w = arg_8.w + 1
            arg_8 = result.d
        while (result.w s< *(arg1 + 0x106))

return result
