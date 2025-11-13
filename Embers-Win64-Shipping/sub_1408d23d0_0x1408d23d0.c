// 函数: sub_1408d23d0
// 地址: 0x1408d23d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0
int64_t* rsi = arg1

if (arg1[0x1c].d s> 0)
    void* r15_1 = nullptr
    
    do
        void* rbx_1 = rsi[0x1b]
        int32_t rcx = *(r15_1 + rbx_1 + 0x20)
        void* r13_1 = r15_1 + rbx_1
        char* rdi_2 = rbx_1 + 1 + r15_1
        uint64_t rdx_1 = zx.q(*rdi_2)
        
        if (rdx_1.d s>= rsi[0xc].d)
        label_1408d2496:
            
            if (rcx s>= 0)
                int64_t rax_8 = rsi[0xb]
                rdx_1 = zx.q(rdx_1.b) * 0xa0
                
                if (rcx s< *(rax_8 + rdx_1 + 0x88))
                    void* r8_5 = rax_8 + 0x70 + rdx_1
                    void* rax_9 = *(r8_5 + 0x10)
                    
                    if (rax_9 != 0)
                        r8_5 = rax_9
                    
                    int32_t rax_10 = rcx
                    
                    if (rcx s< 0)
                        rax_10 = rcx + 0x1f
                    
                    rdx_1 = sx.q(rax_10 s>> 5)
                    *(r8_5 + (rdx_1 << 2)) |= 1 << (rcx.b & 0x1f)
        else if (rcx s>= 0)
            int64_t rax_1 = rsi[0xb]
            uint64_t r8_2 = zx.q(rdx_1.b) * 0xa0
            
            if (rcx s< *(r8_2 + rax_1 + 0x48))
                void* r8_3 = r8_2 + rax_1 + 0x30
                void* rax_3 = *(r8_3 + 0x10)
                
                if (rax_3 != 0)
                    r8_3 = rax_3
                
                int32_t rax_4 = rcx
                
                if (rcx s< 0)
                    rax_4 = rcx + 0x1f
                
                int64_t rdx_2 = sx.q(rax_4 s>> 5)
                *(r8_3 + (rdx_2 << 2)) |= 1 << (rcx.b & 0x1f)
                rcx = *(r13_1 + 0x20)
                rdx_1 = zx.q(*rdi_2)
            
            goto label_1408d2496
        
        if (*(r15_1 + rbx_1) == 0)
            result = *(r15_1 + rbx_1 + 0x18)
            *(r15_1 + rbx_1) = 1
            void* rcx_28 = result[1]
            
            if (rcx_28 != 0)
                result[4].b = 0
                *(rcx_28 + 0x27c) = 0
            
            int32_t rdx_16 = *(r15_1 + rbx_1 + 8)
            
            if (rdx_16 != 0xffffffff)
                result = sub_1408cf420(rsi, rdx_16, **(r15_1 + rbx_1 + 0x18))
        else
            result = (*(*rsi + 0x150))(rsi, rdx_1)
            
            if (not(*(r15_1 + rbx_1 + 4) f> result[0xa4].d))
                int64_t rax_14 = sx.q(*(r15_1 + rbx_1 + 8))
                
                if (rax_14.d s>= 0 && rax_14.d s< rsi[8].d)
                    *((rax_14 << 6) + rsi[7] + 5) = 0
                    *((sx.q(*(r15_1 + rbx_1 + 8)) << 6) + rsi[7] + 0x18) = 0xffffffff
                    sub_1408cf420(rsi, zx.q(*(r15_1 + rbx_1 + 8)), 
                        *(*(r15_1 + rbx_1 + 0x18) + 0x18))
                
                int64_t* rbp_1 = *(r15_1 + rbx_1 + 0x18)
                
                if (rbp_1[1] != 0)
                    int64_t* rcx_9 = *rbp_1
                    (*(*rcx_9 + 0x340))(rcx_9, 0)
                    int64_t* rcx_10 = *rbp_1
                    (*(*rcx_10 + 0x3d0))(rcx_10, rbp_1[3])
                
                int64_t rbx_2 = sx.q(rsi[0x12].d)
                int32_t rax_19 = (rbx_2 + 1).d
                rsi[0x12].d = rax_19
                
                if (rax_19 s> *(rsi + 0x94))
                    sub_1405a4d70(&rsi[0x11])
                
                *(rsi[0x11] + (rbx_2 << 3)) = rbp_1
                int32_t rbx_3 = 0
                int32_t rcx_12 = rsi[0x14].d
                
                if (rcx_12 s> 0)
                    int64_t* rdi_3 = nullptr
                    int32_t rax_21
                    
                    do
                        int64_t r9_1 = rsi[0x13]
                        rax_21 = rcx_12
                        
                        if (*(rdi_3 + r9_1) == rbp_1)
                            int32_t rax_23 = rax_21 - rbx_3 - 1
                            
                            if (rax_23 s>= 1)
                                rax_23 = 1
                            
                            if (rax_23 != 0)
                                memcpy(r9_1 + (sx.q(rbx_3) << 3), 
                                    r9_1 + (sx.q(rcx_12 - rax_23) << 3), rax_23 << 3)
                                rcx_12 = rsi[0x14].d
                            
                            rsi[0x14].d = rcx_12 - 1
                            sub_1405c53d0(&rsi[0x13])
                            rax_21 = rsi[0x14].d
                            rbx_3 -= 1
                            rdi_3 -= 8
                        
                        rbx_3 += 1
                        rdi_3 = &rdi_3[1]
                        rcx_12 = rax_21
                    while (rbx_3 s< rax_21)
                    rsi = arg1
                
                int64_t rcx_16 = sx.q(rsi[0x1c].d)
                
                if (rcx_16.d s> 1 && i != (rcx_16 - 1).d)
                    int64_t rdx_8 = sx.q(*(rsi[0x1b] + rcx_16 * 0x28 - 0x20))
                    
                    if (rdx_8.d != 0xffffffff)
                        *((rdx_8 << 6) + rsi[7] + 0x18) = i
                
                int32_t rdx_11 = rsi[0x1c].d
                int32_t rcx_22 = rdx_11 - i - 1
                
                if (rcx_22 s>= 1)
                    rcx_22 = 1
                
                if (rcx_22 != 0)
                    int64_t r9_2 = rsi[0x1b]
                    memcpy(r9_2 + sx.q(i) * 0x28, r9_2 + sx.q(rdx_11 - rcx_22) * 0x28, 
                        rcx_22 * 0x28)
                    rdx_11 = rsi[0x1c].d
                
                result = zx.q(rdx_11 - 1)
                i -= 1
                rsi[0x1c].d = result.d
                r15_1 -= 0x28
                uint32_t rdx_12 = zx.d(*rdi_2)
                int32_t rcx_26 = *(r13_1 + 0x20)
                
                if (rdx_12 s< rsi[0xc].d && rcx_26 s>= 0)
                    result = rsi[0xb]
                    
                    if (rcx_26 s< result[zx.q(rdx_12.b) * 0x14 + 9].d)
                        void* r8_13 = &result[6 + zx.q(rdx_12.b) * 0x14]
                        void* rax_34 = *(r8_13 + 0x10)
                        
                        if (rax_34 != 0)
                            r8_13 = rax_34
                        
                        int32_t rax_35 = rcx_26
                        
                        if (rcx_26 s< 0)
                            rax_35 = rcx_26 + 0x1f
                        
                        int64_t rdx_15 = sx.q(rax_35 s>> 5)
                        result = zx.q(not.d(1 << (rcx_26.b & 0x1f)))
                        *(r8_13 + (rdx_15 << 2)) &= result.d
        
        i += 1
        r15_1 += 0x28
    while (i s< rsi[0x1c].d)

return result
