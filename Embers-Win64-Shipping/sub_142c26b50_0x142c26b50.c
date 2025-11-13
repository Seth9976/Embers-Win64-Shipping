// 函数: sub_142c26b50
// 地址: 0x142c26b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 0x10).b != 0
        && (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + (zx.d(arg1[1]) << 0x10) + zx.d(arg1[3])
        u>= 4 && sub_142bfad50(&arg1[4], arg2, arg1).b != 0 && sub_142c25530(
        &arg1[((zx.q(arg1[6]) + (((zx.q(arg1[4]) << 8) + zx.q(arg1[5])) << 8)) << 8)
            + zx.q(arg1[7])], 
        arg2).b != 0)
    void* r15_1 = &arg1[((zx.q(arg1[0xa]) + ((zx.q(arg1[9]) + (zx.q(arg1[8]) << 8)) << 8)) << 8)
        + zx.q(arg1[0xb])]
    void* rdx_8 = &arg1[((zx.q(arg1[0xe]) + (((zx.q(arg1[0xc]) << 8) + zx.q(arg1[0xd])) << 8)) << 8)
        + zx.q(arg1[0xf])]
    uint64_t r13_4 =
        zx.q((zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + (zx.d(arg1[1]) << 0x10) + zx.d(arg1[3]))
    uint64_t rax_25
    
    if (r13_4.d u< 0x7fffffff)
        uint32_t rdi_1 = 0
        rax_25 = 0
        uint32_t arg_20 = 0
        uint32_t rsi_1 = 0
        uint64_t rbx_1 = 0
        int32_t var_48_1 = 0
        int32_t r12_1 = 0
        
        while (true)
            uint32_t rcx_13 = (r13_4 << 1).d
            
            if (rdi_1 s>= rax_25.d)
                if (r12_1 s<= rsi_1)
                    goto label_142c26dbe
                
                if (arg3 != 0)
                    *arg3 = rbx_1.d
                
                rax_25.b = 1
                break
            
            if (r13_4.d == 0 || rdi_1 u< divu.dp.d(0:0xffffffff, r13_4.d))
                int32_t r8_7 = neg.d(rdi_1)
                void* r14_2 = r15_1 + (zx.q(rdi_1 * r13_4.d) << 1)
                
                if ((rcx_13 == 0 || r8_7 u< divu.dp.d(0:0xffffffff, rcx_13))
                        && sub_142bf7510(arg2, r14_2, r8_7 * rcx_13).b != 0)
                    arg2[6] += rdi_1 - arg_20
                    
                    if (arg2[6] s> 0 && r14_2 u<= r15_1)
                        if (r14_2 u< r15_1)
                            void* r9_1 = r15_1 - 2
                            int64_t i_2 = ((r15_1 - r14_2 - 1) u>> 1) + 1
                            int64_t i
                            
                            do
                                uint32_t rax_29 = zx.d(*r9_1)
                                uint32_t rcx_12 = zx.d(*(r9_1 + 1))
                                r9_1 -= 2
                                int32_t rdx_13 = (rax_29 << 8) + 1 + rcx_12
                                
                                if (rbx_1.d u> rdx_13)
                                    rdx_13 = rbx_1.d
                                
                                rbx_1 = zx.q(rdx_13)
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                        
                        arg_20 = rdi_1
                        
                        if (r12_1 s> rsi_1)
                        label_142c26e64:
                            
                            if (rbx_1.d u< 0x2aaaaaaa
                                    && sub_142bf7510(arg2, rdx_8, (rbx_1 * 3).d * 2).b != 0)
                                uint64_t rdx_20 = zx.q(var_48_1)
                                arg2[6] += rdx_20.d - rbx_1.d
                                
                                if (arg2[6] s> 0)
                                    for (void* i_1 = rdx_8 + rdx_20 * 6; 
                                            i_1 u< rdx_8 + zx.q(rbx_1.d) * 6; i_1 += 6)
                                        uint32_t rcx_21 = zx.d(*(i_1 + 1)) + (zx.d(*i_1) << 8)
                                        
                                        if (rdi_1 s>= rcx_21)
                                            rdi_1 = rcx_21
                                        
                                        if (rsi_1 s<= rcx_21)
                                            rsi_1 = rcx_21
                                    
                                    rax_25 = zx.q(arg_20)
                                    var_48_1 = rbx_1.d
                                    continue
                        else
                            rcx_13 = (r13_4 << 1).d
                        label_142c26dbe:
                            
                            if ((rcx_13 == 0 || rsi_1 + 1 u< divu.dp.d(0:0xffffffff, rcx_13))
                                    && sub_142bf7510(arg2, r15_1, (rsi_1 + 1) * rcx_13).b != 0)
                                arg2[6] += r12_1 - rsi_1 - 1
                                
                                if (arg2[6] s> 0 && (r13_4.d == 0
                                        || rsi_1 + 1 u< divu.dp.d(0:0xffffffff, r13_4.d)))
                                    void* r9_2 = r15_1 + (zx.q((rsi_1 + 1) * r13_4.d) << 1)
                                    
                                    if (r9_2 u>= r15_1)
                                        void* r8_15 = r15_1 + (zx.q(r12_1 * r13_4.d) << 1)
                                        
                                        while (r8_15 u< r9_2)
                                            rax_25 = zx.q(*(r8_15 + 1))
                                            uint32_t rcx_15 = zx.d(*r8_15)
                                            r8_15 += 2
                                            int32_t rdx_18 = (rax_25 + 1).d + (rcx_15 << 8)
                                            
                                            if (rbx_1.d u> rdx_18)
                                                rdx_18 = rbx_1.d
                                            
                                            rbx_1 = zx.q(rdx_18)
                                        
                                        r12_1 = rsi_1 + 1
                                        goto label_142c26e64
            
            rax_25.b = 0
            break
    else
        rax_25.b = 0
    
    return rax_25

uint32_t rax
rax.b = 0
return rax
