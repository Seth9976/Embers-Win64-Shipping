// 函数: sub_14188ed20
// 地址: 0x14188ed20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r12 = arg4

if (*arg2 == 1 && *(arg2 + 4) == 0 && arg2[1].d == 0 && *(arg2 + 0xc) u<= 0xff)
    *arg4 = 1
    *arg5 = 0
    int64_t* rax_1
    rax_1.b = 1
    return rax_1

int64_t* rcx = *(arg1 + 0x50)

while (true)
    int64_t rdx = rcx[1]
    
    if (rdx != 0)
        int64_t rax_2 = arg3[1]
        
        if (rax_2 != 0)
            int64_t r8 = *arg3
            int64_t r9 = *rcx
            
            if (r9 u<= rax_2 - 1 + r8 && rdx - 1 + r9 u>= r8)
                int64_t* r14 = *(arg1 + 0x40)
                int32_t arg_10
                sub_141884440(r14, &arg_10, arg2)
                int64_t rax_7 = sx.q(arg_10)
                int32_t r8_2 = 0
                void* const rsi_1
                
                if (rax_7.d == 0xffffffff)
                    rsi_1 = nullptr
                else
                    rsi_1 = rax_7 * 0x88 + *r14
                
                int64_t* r13 = *(arg1 + 0x50)
                int64_t rbx_3 = r13[0xd] - *r13 + *arg3
                *r12 = 0
                int32_t rcx_2 = *(rsi_1 + 0x30)
                int64_t* rax_9
                
                if (rcx_2 == *(rsi_1 + 0x5c))
                label_14188ef53:
                    int32_t rdx_9 = *(rsi_1 + 0x20)
                    int32_t temp2_1 = r13[2].d
                    rax_7.b = rdx_9 == temp2_1
                    *r12 = rax_7.b
                    int64_t rbx_4
                    
                    if (rdx_9 != temp2_1)
                        rbx_4 = -1
                    else
                        int64_t rcx_10 = *(rsi_1 + 0x78)
                        int64_t rax_24 = rbx_3
                        
                        if (rcx_10 u<= rbx_3)
                            rax_24 = rcx_10
                        
                        if (rcx_10 u>= rbx_3)
                            rbx_3 = rcx_10
                        
                        rbx_4 = rbx_3 - rax_24
                    
                    *arg5 = rbx_4
                    rax_9.b = 1
                else if (r13[4].d - *(r13 + 0x4c) s> rcx_2 - *(rsi_1 + 0x5c))
                    rax_9.b = 0
                else
                    int32_t r10_1 = r13[8].d
                    void* r9_1 = &r13[5]
                    int32_t var_78_1 = 0
                    int32_t rcx_4 = 0
                    int32_t var_74_1 = 1
                    void* var_70 = r9_1
                    int32_t var_68_1 = 0xffffffff
                    int32_t var_64_1 = 0
                    int32_t var_60_1 = 0
                    
                    if (r10_1 != 0)
                        void* rax_10 = *(r9_1 + 0x10)
                        
                        if (rax_10 != 0)
                            r9_1 = rax_10
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(r10_1 - 1)
                        int32_t rdx_4 = *r9_1
                        int32_t var_64_3
                        
                        if (rdx_4 != 0)
                        label_14188eea8:
                            int32_t rax_17 = neg.d(rdx_4) & rdx_4
                            uint64_t rflags_1
                            int32_t temp0_1
                            temp0_1, rflags_1 = _bit_scan_reverse(rax_17)
                            int32_t var_74_2 = rax_17
                            int32_t rax_18
                            
                            if (rax_17 == 0)
                                rax_18 = 0x20
                            else
                                rax_18 = 0x1f - temp0_1
                            
                            int32_t var_64_2 = rcx_4 - rax_18 + 0x1f
                            
                            if (rcx_4 - rax_18 + 0x1f s> r10_1)
                                var_64_3 = r10_1
                        else
                            while (true)
                                int64_t rdx_5 = sx.q(r8_2)
                                rcx_4 += 0x20
                                r8_2 += 1
                                var_60_1 = rcx_4
                                var_78_1 = r8_2
                                
                                if (rdx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                                var_68_1 = 0xffffffff
                                
                                if (rdx_4 != 0)
                                    goto label_14188eea8
                            
                            var_64_3 = r10_1
                    
                    int128_t var_38_1 = 0xffffffff
                    int128_t var_48_1 = var_78_1.o
                    var_78_1.o = (&r13[3]).o
                    int64_t var_58_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                    var_68_1.o = var_48_1
                    
                    if (0 s>= r10_1)
                        goto label_14188ef53
                    
                    int32_t var_5c
                    int32_t rcx_6 = var_5c
                    
                    while (*sub_140960120(rsi_1 + 0x28, &arg_10, *var_78_1.q + sx.q(rcx_6) * 0x18)
                            != 0xffffffff)
                        var_60_1 &= not.d(var_70:4.d)
                        sub_14059bdd0(&var_70)
                        rcx_6 = var_5c
                        
                        if (rcx_6 s>= *(var_68_1.q + 0x18))
                            goto label_14188ef53
                    
                    rax_9.b = 0
                
                return rax_9
    
    rcx = rcx[0xe]
    *(arg1 + 0x50) = rcx
