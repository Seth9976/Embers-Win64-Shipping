// 函数: sub_142b92f00
// 地址: 0x142b92f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && *(arg1 + 0x80) != 0)
    int64_t* rsi_1 = *(arg1 + 0x78)
    
    if (rsi_1 != 0)
        sub_142b98b80(rsi_1)
        int64_t* rdi = *(arg1 + 0x90)
        int32_t rcx_2 = arg3 | 0x801
        int64_t* r12 = *(rdi[1] + 0x130)
        
        if ((arg3 & 0x400) == 0)
            rcx_2 = arg3
        
        if ((rcx_2.b & 1) != 0)
            rcx_2 = (rcx_2 & 0xfffffffb) | 0xa
        
        int32_t r14_1 = rcx_2 & 0xfffffffb
        
        if ((rcx_2 & 0x400000) == 0)
            r14_1 = rcx_2
        
        int32_t r15_1
        
        if (r12 == 0 || (r14_1 & 0x8002) != 0 || (*(arg1 + 8) & 0x2001) != 1)
        label_142b93102:
            int32_t rax_19 = (*(rdi[3] + 0x78))(rsi_1, *(arg1 + 0x80), zx.q(arg2), zx.q(r14_1))
            r15_1 = rax_19
            
            if (rax_19 == 0)
                if (rsi_1[0xc].d != 0x6f75746c)
                    goto label_142b9314f
                
                int32_t rax_20 = sub_142b94210(&rsi_1[0x13])
                r15_1 = rax_20
                
                if (rax_20 == 0)
                    if ((r14_1.b & 2) == 0)
                        sub_142b98db0(rsi_1, (r14_1 u>> 4).b & 1)
                    
                    goto label_142b9314f
        else
            int32_t* rax_7
            int32_t rcx_4
            
            if (not(test_bit(r14_1, 0xb)))
                rax_7 = *(arg1 + 0xd0)
                rcx_4 = rax_7[2]
            
            if (not(test_bit(r14_1, 0xb)) && (rcx_4 != 0 || *rax_7 == rcx_4)
                    && (*rax_7 != 0 || rcx_4 == 0))
                goto label_142b93102
            
            char rcx_7
            
            if ((r14_1.b & 0x20) == 0 && (**rdi & 0x400) != 0)
                if (strstr(sub_142b92010(arg1, arg4), "Type 1") == 0 || rdi[7].d != 1)
                    rcx_7 = 0
                else
                    rcx_7 = 1
            
            if ((r14_1.b & 0x20) == 0 && (**rdi & 0x400) != 0
                    && ((r14_1 & 0xf0000) != 0x10000 || (**rdi & 0x800) != 0 || rcx_7 != 0) && (
                    (*(arg1 + 8) & 8) == 0 || *(arg1 + 0x434) == 0 || *(arg1 + 0x18a) != 0
                    || *(arg1 + 0x3b0) != 0 || *(arg1 + 0x3c0) != 0))
                goto label_142b93102
            
            int32_t rax_15
            
            if ((*(arg1 + 8) & 2) != 0 && (r14_1.b & 8) == 0)
                rax_15 = (*(rdi[3] + 0x78))(rsi_1, *(arg1 + 0x80), zx.q(arg2), zx.q(r14_1) | 0x4000)
                r15_1 = rax_15
            
            if ((*(arg1 + 8) & 2) != 0 && (r14_1.b & 8) == 0 && rax_15 == 0
                    && rsi_1[0xc].d == 0x62697473)
                goto label_142b9314f
            
            void* rdi_1 = *(arg1 + 0xd0)
            int32_t var_38 = r14_1
            int32_t rbx_1 = *(rdi_1 + 0x18)
            *(rdi_1 + 0x18) = 0
            r15_1 = (*(*(*r12 + 0x18) + 0x18))(r12, rsi_1, *(arg1 + 0x80), zx.q(arg2), var_38)
            *(rdi_1 + 0x18) = rbx_1
        label_142b9314f:
            
            if ((r14_1.b & 0x10) == 0)
                rsi_1[0xb].d = rsi_1[8].d
                *(rsi_1 + 0x5c) = 0
            else
                *(rsi_1 + 0x5c) = *(rsi_1 + 0x4c)
                rsi_1[0xb].d = 0
            
            if (not(test_bit(r14_1, 0xd)) && (*(arg1 + 8) & 1) != 0)
                int64_t rax_23 = sx.q(rsi_1[0xa].d)
                int32_t r8_3 = 1
                void* r11_1 = *(arg1 + 0x80)
                int32_t rdx_5 = 1
                int64_t r9_5 = rax_23
                int64_t r10_2 = sx.q(*(r11_1 + 0x1c))
                int64_t rcx_13 = r10_2
                
                if (rax_23.d s< 0)
                    r9_5 = neg.q(r9_5)
                    rdx_5 = -1
                
                if (r10_2.d s< 0)
                    rcx_13 = neg.q(rcx_13)
                    rdx_5 = neg.d(rdx_5)
                
                uint32_t rcx_16 = ((rcx_13 * r9_5 + 0x20) u>> 6).d
                
                if (rdx_5 s< 0)
                    rcx_16 = neg.d(rcx_16)
                
                int64_t rax_24 = sx.q(*(rsi_1 + 0x54))
                rsi_1[0xa].d = rcx_16
                int64_t rdx_6 = rax_24
                int64_t r9_6 = sx.q(*(r11_1 + 0x20))
                int64_t rcx_17 = r9_6
                
                if (rax_24.d s< 0)
                    rdx_6 = neg.q(rdx_6)
                    r8_3 = -1
                
                if (r9_6.d s< 0)
                    rcx_17 = neg.q(rcx_17)
                    r8_3 = neg.d(r8_3)
                
                uint32_t rcx_20 = ((rcx_17 * rdx_6 + 0x20) u>> 6).d
                
                if (r8_3 s< 0)
                    rcx_20 = neg.d(rcx_20)
                
                *(rsi_1 + 0x54) = rcx_20
            
            if (not(test_bit(r14_1, 0xb)))
                int32_t* rbx_2 = *(arg1 + 0xd0)
                int32_t r8_4 = rbx_2[6]
                
                if (r8_4 != 0)
                    void* rax_26 = *(*(rsi_1[1] + 0x90) + 8)
                    void* const r10_3 = *(rax_26 + 0x128)
                    int32_t rdx_7
                    
                    if (r10_3 != 0)
                        rdx_7 = rsi_1[0xc].d
                    
                    if (r10_3 == 0 || *(r10_3 + 0x20) != rdx_7)
                        void* i = *(rax_26 + 0x118)
                        r10_3 = nullptr
                        rdx_7 = rsi_1[0xc].d
                        
                        for (; i != 0; i = *(i + 8))
                            void* rcx_22 = *(i + 0x10)
                            
                            if (*(rcx_22 + 0x20) == rdx_7)
                                r10_3 = rcx_22
                                break
                    
                    if (r10_3 != 0)
                        r15_1 = (*(*(r10_3 + 0x18) + 0x48))(r10_3, rsi_1, rbx_2, &rbx_2[4], var_38)
                    else if (rdx_7 == 0x6f75746c)
                        if ((r8_4.b & 1) != 0)
                            sub_142b95190(&rsi_1[0x13], rbx_2)
                        
                        if ((rbx_2[6].b & 2) != 0)
                            sub_142b95270(&rsi_1[0x13], rbx_2[4], rbx_2[5])
                    
                    sub_142b97680(&rsi_1[0xb], rbx_2)
            
            rsi_1[3].d = arg2
            *(rsi_1[0x1e] + 0x30) = r14_1
            
            if (r15_1 == 0 && (r14_1.b & 1) == 0)
                int32_t rax_30 = rsi_1[0xc].d
                
                if (rax_30 != 0x62697473 && rax_30 != 0x636f6d70)
                    int32_t rdx_14 = r14_1 s>> 0x10 & 0xf
                    
                    if (rdx_14 == 0 && test_bit(r14_1, 0xc))
                        rdx_14 = 2
                    
                    if ((r14_1.b & 4) == 0)
                        sub_142b98f20(rsi_1, rdx_14, nullptr)
                    else
                        void* rax_31 = rsi_1[1]
                        
                        if (rax_31 == 0)
                            r15_1 = 6
                        else
                            r15_1 = sub_142b95ae0(*(*(rax_31 + 0x90) + 8), rsi_1, rdx_14)
        
        return zx.q(r15_1)

return 0x23
