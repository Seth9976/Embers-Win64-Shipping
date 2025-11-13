// 函数: sub_142c272b0
// 地址: 0x142c272b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 8).b != 0 && zx.w(*arg1) * 0x100 + zx.w(arg1[1]) u>= 4
        && sub_142bf7510(arg2, &arg1[2], 2).b != 0
        && sub_142bf7510(arg2, arg1, (zx.d(arg1[2]) << 8) + zx.d(arg1[3])).b != 0
        && sub_142c24b90(&arg1[(zx.q(arg1[2]) << 8) + zx.q(arg1[3])], arg2).b != 0)
    void* r15_1 = &arg1[(zx.q(arg1[4]) << 8) + zx.q(arg1[5])]
    void* rcx_6 = &arg1[(zx.q(arg1[6]) << 8) + zx.q(arg1[7])]
    uint32_t rdi_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
    int32_t r14 = 0
    int32_t rax_12 = 0
    int32_t var_48 = 0
    int32_t arg_20 = 0
    int32_t r13 = 0
    uint64_t rbx = 0
    int32_t r12 = 0
    uint64_t rax_13
    
    while (true)
        if (r14 s>= rax_12)
            if (r12 s<= r13)
                goto label_142c274ba
            
            if (arg3 != 0)
                *arg3 = rbx.d
            
            rax_13.b = 1
            break
        
        if (rdi_2 == 0 || r14 u< divu.dp.d(0:0xffffffff, rdi_2))
            int32_t r8_4 = neg.d(r14)
            void* rbp_3 = zx.q(r14 * rdi_2) + r15_1
            
            if ((rdi_2 == 0 || r8_4 u< divu.dp.d(0:0xffffffff, rdi_2))
                    && sub_142bf7510(arg2, rbp_3, r8_4 * rdi_2).b != 0)
                arg2[6] += r14 - arg_20
                
                if (arg2[6] s> 0 && rbp_3 u<= r15_1)
                    void* rcx_8 = r15_1
                    
                    if (rbp_3 u< r15_1)
                        do
                            uint32_t rax_15 = zx.d(*(rcx_8 - 1))
                            rcx_8 -= 1
                            rax_13 = zx.q(rax_15 + 1)
                            
                            if (rbx.d u> rax_13.d)
                                rax_13 = zx.q(rbx.d)
                            
                            rbx = zx.q(rax_13.d)
                        while (rcx_8 u> rbp_3)
                    
                    arg_20 = r14
                    
                    if (r12 s> r13)
                    label_142c27548:
                        
                        if (rbx.d u< 0x3fffffff && sub_142bf7510(arg2, rcx_6, (rbx << 2).d).b != 0)
                            uint64_t rcx_13 = zx.q(var_48)
                            arg2[6] += rcx_13.d - rbx.d
                            
                            if (arg2[6] s> 0)
                                void* i = (rcx_13 << 2) + rcx_6
                                
                                while (i u< (zx.q(rbx.d) << 2) + rcx_6)
                                    uint32_t rcx_14 = zx.d(*i)
                                    uint32_t rax_25 = zx.d(*(i + 1))
                                    i += 4
                                    int32_t rax_29 = divs.dp.d(
                                        sx.q(rax_25 + (rcx_14 << 8)
                                            - (zx.d(arg1[5]) + (zx.d(arg1[4]) << 8))), 
                                        (zx.d(*arg1) << 8) + zx.d(arg1[1]))
                                    int32_t rcx_16 = rax_29
                                    
                                    if (r14 s< rax_29)
                                        rcx_16 = r14
                                    
                                    r14 = rcx_16
                                    
                                    if (r13 s> rax_29)
                                        rax_29 = r13
                                    
                                    r13 = rax_29
                                
                                rax_12 = arg_20
                                var_48 = rbx.d
                                continue
                    else
                    label_142c274ba:
                        
                        if ((rdi_2 == 0 || r13 + 1 u< divu.dp.d(0:0xffffffff, rdi_2))
                                && sub_142bf7510(arg2, r15_1, (r13 + 1) * rdi_2).b != 0)
                            arg2[6] += r12 - r13 - 1
                            
                            if (arg2[6] s> 0
                                    && (rdi_2 == 0 || r13 + 1 u< divu.dp.d(0:0xffffffff, rdi_2)))
                                void* rdx_13 = zx.q((r13 + 1) * rdi_2) + r15_1
                                
                                if (rdx_13 u>= r15_1)
                                    void* rcx_11 = zx.q(r12 * rdi_2) + r15_1
                                    
                                    while (rcx_11 u< rdx_13)
                                        uint32_t rax_19 = zx.d(*rcx_11)
                                        rcx_11 += 1
                                        rax_13 = zx.q(rax_19 + 1)
                                        
                                        if (rbx.d u> rax_13.d)
                                            rax_13 = zx.q(rbx.d)
                                        
                                        rbx = zx.q(rax_13.d)
                                    
                                    r12 = r13 + 1
                                    goto label_142c27548
        
        rax_13.b = 0
        break
    
    return rax_13

uint16_t rax
rax.b = 0
return rax
