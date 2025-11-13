// 函数: sub_141c59660
// 地址: 0x141c59660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143f34a18
char rsi = arg2
int64_t r12 = sx.q(arg3)
sub_140b34200("SourceBuffers", rax)

if (r12.d s< arg4)
    int128_t zmm6 = 0x3f800000
    void* rbx_1 = r12 * 0x3f0
    
    do
        void* rdi_1 = *(arg1 + 0xc8)
        char rax_2 = *(rbx_1 + rdi_1 + 0x3d0)
        
        if (rax_2 s< 0 && (rax_2 & 8) != 0 && (rax_2 & 0x10) == 0)
            if ((*(rbx_1 + rdi_1 + 0x3d1) & 0x10) == 0)
                int32_t r15_2 = *(rbx_1 + rdi_1 + 0xb8)
                
                if (rsi == 0)
                    if (r15_2 == 0xffffffff)
                    label_141c59848:
                        int32_t r14_3 = *(rbx_1 + rdi_1 + 0x3d4) * *(arg1 + 0x1b0)
                        void* rsi_4 = rdi_1 + 0x50 + rbx_1
                        int32_t rax_9 = *(rsi_4 + 0xc)
                        *(rsi_4 + 8) = 0
                        
                        if (rax_9 s< 0 && rax_9 != 0)
                            sub_140775b10(rsi_4, 0)
                        
                        sub_14074a020(rsi_4, r14_3)
                        int32_t rax_10 = *(rbx_1 + rdi_1 + 0x6c)
                        void* rbp_3 = rbx_1 + rdi_1
                        *(rbp_3 + 0x68) = 0
                        
                        if (rax_10 s< 0 && rax_10 != 0)
                            sub_140775b10(rbp_3 + 0x60, 0)
                        
                        sub_14074a020(rbp_3 + 0x60, r14_3)
                        int32_t rax_11 = *(rbx_1 + rdi_1 + 0x3c)
                        void* rbp_4 = rbx_1 + rdi_1
                        *(rbp_4 + 0x38) = 0
                        
                        if (rax_11 s< 0 && rax_11 != 0)
                            sub_140775b10(rbp_4 + 0x30, 0)
                        
                        sub_14074a020(rbp_4 + 0x30, r14_3)
                        int64_t r14_4 = *rsi_4
                        
                        if (r15_2 == 0xffffffff)
                            int64_t rsi_5 = 0
                            int32_t rbp_5 = 0
                            
                            if (*(arg1 + 0x1b0) s> 0)
                                while ((*(rbx_1 + rdi_1 + 0x3d1) & 0x20) == 0)
                                    uint8_t rax_19 = *(rbx_1 + rdi_1 + 0x3d0)
                                    float j = *(rbx_1 + rdi_1 + 0x90)
                                    *(rbx_1 + rdi_1 + 0x3d0) = rax_19 | 0x40
                                    
                                    if (not(j f< zmm6.d))
                                        int64_t rax_20 = *(rbx_1 + rdi_1 + 0x98)
                                        int32_t rcx_22 = *(rbx_1 + rdi_1 + 0x94)
                                        
                                        do
                                            j = j + -1f
                                            rcx_22 += 1
                                            rax_20 += 1
                                        while (j f>= zmm6.d)
                                        
                                        *(rbx_1 + rdi_1 + 0x90) = j
                                        *(rbx_1 + rdi_1 + 0x98) = rax_20
                                        *(rbx_1 + rdi_1 + 0x94) = rcx_22
                                        zmm6 = sub_141c6a1e0(arg1, r12.d)
                                    else if ((not.b(rax_19 u>> 6) & 1) != 0)
                                        zmm6 = sub_141c6a1e0(arg1, r12.d)
                                    
                                    int32_t j_1 = 0
                                    
                                    if (*(rbx_1 + rdi_1 + 0x3d4) s> 0)
                                        float* rcx_24 = nullptr
                                        
                                        do
                                            j_1 += 1
                                            float zmm1_1 = *(rcx_24 + *(rbx_1 + rdi_1 + 0x70))
                                            j = *(rcx_24 + *(rbx_1 + rdi_1 + 0x80))
                                            rcx_24 = &rcx_24[1]
                                            *(r14_4 + (rsi_5 << 2)) =
                                                (j - zmm1_1) f* *(rbx_1 + rdi_1 + 0x90) + zmm1_1
                                            rsi_5 += 1
                                        while (j_1 s< *(rbx_1 + rdi_1 + 0x3d4))
                                    
                                    rbp_5 += 1
                                    j = *(rbx_1 + rdi_1 + 0xf4) f+ *(rbx_1 + rdi_1 + 0xe8)
                                    *(rbx_1 + rdi_1 + 0xe8) = j
                                    *(rbx_1 + rdi_1 + 0x90) = j f+ *(rbx_1 + rdi_1 + 0x90)
                                    
                                    if (rbp_5 s>= *(arg1 + 0x1b0))
                                        break
                            
                            rsi = arg2
                            *(rbx_1 + rdi_1 + 0xe8) = *(rbx_1 + rdi_1 + 0xf0)
                            *(rbx_1 + rdi_1 + 0xf4) = 0
                        else
                            int32_t* r8_5
                            
                            if (*(arg1 + 0xf0) == *(arg1 + 0x11c))
                            label_141c5994f:
                                r8_5 = nullptr
                            else
                                void* r8_3 = arg1 + 0x120
                                void* rdx_8 = *(r8_3 + 8)
                                int64_t r10_2 = sx.q(*(rbx_1 + rdi_1 + 0xb8))
                                
                                if (rdx_8 != 0)
                                    r8_3 = rdx_8
                                
                                int32_t rax_13 =
                                    *(r8_3 + (((sx.q(*(arg1 + 0x130)) - 1) & r10_2) << 2))
                                
                                if (rax_13 == 0xffffffff)
                                label_141c5994f_1:
                                    r8_5 = nullptr
                                else
                                    while (true)
                                        r8_5 = sx.q(rax_13) * 0x78 + *(arg1 + 0xe8)
                                        
                                        if (*r8_5 == r10_2.d)
                                            break
                                        
                                        rax_13 = r8_5[0x1c]
                                        
                                        if (rax_13 == 0xffffffff)
                                            goto label_141c5994f_2
                                    
                                    if (rax_13 == 0xffffffff)
                                    label_141c5994f_2:
                                        r8_5 = nullptr
                            
                            void* rcx_17 = &r8_5[2]
                            int64_t r8_6 = *(rbx_1 + rdi_1 + 0xc0)
                            
                            if (r8_5 == 0)
                                rcx_17 = nullptr
                            
                            int64_t rdx_9 = *(rcx_17 + (sx.q(*(rcx_17 + 0x50)) + 3) * 0x10)
                            int64_t rcx_18 = sx.q(*(arg1 + 0x1b0))
                            
                            if (r8_6 != -1)
                                int64_t r9_2 = *(rbx_1 + rdi_1 + 0x98)
                                
                                if (r9_2 + rcx_18 s>= r8_6)
                                    rcx_18 = zx.q(r8_6.d - r9_2.d)
                                    *(rbx_1 + rdi_1 + 0x3d1) |= 0x20
                            
                            int64_t r8_7 = sx.q(*(rbx_1 + rdi_1 + 0x3d4))
                            int64_t rax_18 = sx.q(rcx_18.d)
                            *(rbx_1 + rdi_1 + 0x98) += rax_18
                            memcpy(r14_4, rdx_9, ((r8_7 * rax_18) << 2).d)
                            rsi = arg2
                else if (r15_2 != 0xffffffff)
                    goto label_141c59848
            else
                void* rsi_1 = rbx_1 + rdi_1
                int32_t rbp_2 = *(rbx_1 + rdi_1 + 0x3d4) * *(arg1 + 0x1b0)
                *(rsi_1 + 0x58) = 0
                
                if (*(rsi_1 + 0x5c) s<= 0xffffffff)
                    sub_140775b10(rsi_1 + 0x50, 0)
                
                int64_t r14_1 = sx.q(*(rsi_1 + 0x58))
                int32_t rax_3 = r14_1.d + rbp_2
                *(rsi_1 + 0x58) = rax_3
                
                if (rax_3 s> *(rsi_1 + 0x5c))
                    sub_140775270(rsi_1 + 0x50)
                
                int64_t count = sx.q(rbp_2) << 2
                memset(*(rsi_1 + 0x50) + (r14_1 << 2), 0, count)
                void* rdi_2 = rdi_1 + rbx_1
                int32_t rax_5 = *(rdi_2 + 0x3c)
                *(rdi_2 + 0x38) = 0
                
                if (rax_5 s< 0 && rax_5 != 0)
                    sub_140775b10(rdi_2 + 0x30, 0)
                
                int64_t rsi_2 = sx.q(*(rdi_2 + 0x38))
                int32_t rax_6 = rsi_2.d + rbp_2
                *(rdi_2 + 0x38) = rax_6
                
                if (rax_6 s> *(rdi_2 + 0x3c))
                    sub_140775270(rdi_2 + 0x30)
                
                memset(*(rdi_2 + 0x30) + (rsi_2 << 2), 0, count)
                rsi = arg2
        
        r12 = zx.q(r12.d + 1)
        rbx_1 += 0x3f0
    while (r12.d s< arg4)

return sub_140b38680("SourceBuffers", rax) __tailcall
