// 函数: sub_142badcb0
// 地址: 0x142badcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(*(arg1 + 0x34))
char* rbx = *(arg1 + 0x120)
int64_t rsi = *(arg1 + 0x128)
int64_t* r14 = *(arg1 + 0x18)
int32_t rax_3
int32_t r13_1

if (r12.d != 0 && sx.d(r14[3].w) + sx.d(r14[0xc].w) + r12.d u> *(r14 + 0xc))
    rax_3 = sub_142b92690(r14, 0, r12.d)
    r13_1 = rax_3

if (r12.d == 0 || sx.d(r14[3].w) + sx.d(r14[0xc].w) + r12.d u<= *(r14 + 0xc) || rax_3 == 0)
    uint16_t* rdx_3 = r14[0xf]
    
    if (r12.d s>= 0xfff || &rbx[sx.q(((r12 << 1) + 2).d)] u> rsi)
    labelid_a:
        r13_1 = 0x14
    else
        void* rbx_1 = &rbx[2]
        uint16_t rdi_1 = zx.w(*rbx) << 8 | zx.w(*(rbx_1 - 1))
        
        if (r12.d s> 0)
            *rdx_3 = rdi_1
        
        if (rdi_1 s< 0)
        labelid_a:
            r13_1 = 0x14
        else
            void* i = &rdx_3[1]
            
            while (i u< &rdx_3[r12])
                uint16_t rcx_3 = zx.w(*rbx_1)
                rbx_1 += 2
                rcx_3 = rcx_3 << 8 | zx.w(*(rbx_1 - 1))
                *i = rcx_3
                
                if (rcx_3 s<= rdi_1)
                    goto label_142bae0de_2
                
                i += 2
                rdi_1 = rcx_3
            
            int32_t arg_10 = 0
            int32_t rdi_2 = 0
            int32_t rdi_3
            
            if (r12.d s> 0)
                rdi_3 = sx.d(*(i - 2))
                rdi_2 = rdi_3 + 1
                arg_10 = rdi_2
            
            if (r12.d s> 0 && rdi_3 + 1 s< 0)
            label_142bae0de:
                r13_1 = 0x14
            else if (rdi_2 == 0xfffffffc
                    || sx.d(*(r14 + 0x1a)) + 4 + sx.d(*(r14 + 0x62)) + rdi_2 u<= r14[1].d)
                r13_1 = 0
            label_142bade03:
                *(*(arg1 + 0x10) + 0xd8) = 0
                *(*(arg1 + 0x10) + 0xd0) = 0
                
                if (rbx_1 + 2 u> rsi)
                label_142bae0de_1:
                    r13_1 = 0x14
                else
                    uint16_t rdi_4 = zx.w(*rbx_1) << 8 | zx.w(*(rbx_1 + 1))
                    
                    if ((*(arg1 + 0x20) & 2) != 0)
                    label_142badf1a:
                        char* rdx_6 = r14[0xe]
                        int64_t r11_1 = sx.q(arg_10)
                        void* rbx_3 = rbx_1 + 2 + zx.q(rdi_4)
                        void* r10_1 = &rdx_6[r11_1]
                        
                        if (rdx_6 u< r10_1)
                            void* r8_5 = rbx_3 + 1
                            
                            do
                                if (r8_5 u> rsi)
                                    goto label_142bae0de_2
                                
                                char rcx_13 = *rbx_3
                                r8_5 += 1
                                *rdx_6 = rcx_13
                                rbx_3 += 1
                                rdx_6 = &rdx_6[1]
                                
                                if ((rcx_13 & 8) != 0)
                                    if (r8_5 u> rsi)
                                        goto label_142bae0de_2
                                    
                                    uint64_t rdi_5 = zx.q(*rbx_3)
                                    r8_5 += 1
                                    rbx_3 += 1
                                    uint64_t r9_2 = zx.q(rdi_5.d)
                                    
                                    if (&rdx_6[rdi_5] u> r10_1)
                                        goto label_142bae0de_2
                                    
                                    if (rdi_5.b != 0)
                                        char* rdi_6 = rdx_6
                                        rdx_6 = &rdx_6[r9_2]
                                        int64_t rcx_15
                                        int64_t rdi_7
                                        rdi_7, rcx_15 = __memfill_u8(rdi_6, rcx_13, zx.q(r9_2.d))
                            while (rdx_6 u< r10_1)
                        
                        int32_t* rdi_8 = r14[0xd]
                        char* r10_2 = r14[0xe]
                        int32_t r11_2 = 0
                        void* rbp_3 = &rdi_8[r11_1 * 2]
                        
                        if (rbx_3 u> rsi)
                        label_142bae0de_2:
                            r13_1 = 0x14
                        else
                            if (rdi_8 u< rbp_3)
                                void* r8_6 = rbx_3 + 2
                                void* r9_3 = rbx_3 + 1
                                
                                do
                                    char rdx_7 = *r10_2
                                    uint32_t rcx_16 = 0
                                    
                                    if ((rdx_7 & 2) != 0)
                                        if (r9_3 u> rsi)
                                            goto label_142bae0de_2
                                        
                                        uint32_t rax_24 = zx.d(*rbx_3)
                                        r9_3 += 1
                                        rbx_3 += 1
                                        rcx_16 = neg.d(rax_24)
                                        r8_6 += 1
                                        
                                        if ((rdx_7 & 0x10) != 0)
                                            rcx_16 = rax_24
                                    else if ((rdx_7 & 0x10) == 0)
                                        if (r8_6 u> rsi)
                                            goto label_142bae0de_2
                                        
                                        uint16_t rax_25 = zx.w(*rbx_3)
                                        rbx_3 += 2
                                        r9_3 += 2
                                        r8_6 += 2
                                        rcx_16 = sx.d(rax_25 << 8) | zx.d(*(rbx_3 - 1))
                                    
                                    r11_2 += rcx_16
                                    r10_2 = &r10_2[1]
                                    *rdi_8 = r11_2
                                    rdi_8 = &rdi_8[2]
                                while (rdi_8 u< rbp_3)
                            
                            void* r10_3 = r14[0xd]
                            int32_t rbp_4 = 0
                            char* r11_3 = r14[0xe]
                            void* r15_3 = (r11_1 << 3) + r10_3
                            
                            if (r10_3 u< r15_3)
                                void* r8_7 = rbx_3 + 2
                                void* r9_4 = rbx_3 + 1
                                
                                do
                                    char rdi_9 = *r11_3
                                    int32_t rdx_8 = 0
                                    
                                    if ((rdi_9 & 4) != 0)
                                        if (r9_4 u> rsi)
                                            goto label_142bae0de_2
                                        
                                        int32_t rcx_19 = zx.d(*rbx_3)
                                        r9_4 += 1
                                        rbx_3 += 1
                                        rdx_8 = neg.d(rcx_19)
                                        r8_7 += 1
                                        
                                        if ((rdi_9 & 0x20) != 0)
                                            rdx_8 = rcx_19
                                    else if ((rdi_9 & 0x20) == 0)
                                        if (r8_7 u> rsi)
                                            goto label_142bae0de_2
                                        
                                        uint16_t rax_28 = zx.w(*rbx_3)
                                        rbx_3 += 2
                                        r9_4 += 2
                                        r8_7 += 2
                                        rdx_8 = sx.d(rax_28 << 8) | zx.d(*(rbx_3 - 1))
                                    
                                    rbp_4 += rdx_8
                                    *(r10_3 + 4) = rbp_4
                                    r10_3 += 8
                                    *r11_3 = rdi_9 & 1
                                    r11_3 = &r11_3[1]
                                while (r10_3 u< r15_3)
                            
                            *(r14 + 0x62) = arg_10.w
                            r14[0xc].w = r12.w
                            *(arg1 + 0x120) = rbx_3
                    else
                        uint64_t r12_1 = zx.q(rdi_4)
                        
                        if (rsi - (rbx_1 + 2) s>= r12_1)
                            void* r13_2 = *(arg1 + 0xe8)
                            uint32_t r15_1 = zx.d(rdi_4)
                            uint32_t rbp_1 = *(r13_2 + 0x230)
                            
                            if (rbp_1 u>= r15_1)
                                r13_1 = 0
                            else
                                int32_t arg_20
                                *(r13_2 + 0x238) = sub_142b99a90(*(r13_2 + 0x10), 1, rbp_1, r15_1, 
                                    *(r13_2 + 0x238), &arg_20)
                                r13_1 = arg_20
                                
                                if (r13_1 == 0)
                                    rbp_1 = r15_1
                                    r13_1 = 0
                            
                            *(*(arg1 + 0xe8) + 0x230) = zx.d(rbp_1.w)
                            
                            if (r13_1 == 0)
                                *(*(arg1 + 0x10) + 0xd8) = r15_1
                                *(*(arg1 + 0x10) + 0xd0) = *(*(arg1 + 0xe8) + 0x238)
                                
                                if (rdi_4 != 0)
                                    memcpy(*(*(arg1 + 0xe8) + 0x238), rbx_1 + 2, r12_1.d)
                                
                                r12 = zx.q(r12.d)
                                goto label_142badf1a
                        else
                            r13_1 = 0x16
            else
                int32_t rax_9 = sub_142b92690(r14, rdi_2 + 4, 0)
                r13_1 = rax_9
                
                if (rax_9 == 0)
                    goto label_142bade03

return zx.q(r13_1)
