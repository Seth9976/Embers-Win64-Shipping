// 函数: sub_1408d30d0
// 地址: 0x1408d30d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t i_1 = 0

if (arg1[0x1a].d s<= 0)
    return 

int64_t r12_1 = 0
int64_t arg_18 = 0

do
    int64_t rbp_1 = arg1[0x19]
    int64_t rsi_2 = r12_1 * 6
    uint32_t rdx_1 = zx.d(*(rbp_1 + (rsi_2 << 3) + 3))
    int32_t rcx = *(rbp_1 + (rsi_2 << 3) + 0x14)
    
    if (rdx_1 s< arg1[0xc].d && rcx s>= 0)
        int64_t rax_2 = arg1[0xb]
        uint64_t rdx_3 = zx.q(rdx_1.b) * 0xa0
        
        if (rcx s< *(rax_2 + rdx_3 + 0x48))
            void* r8_2 = rax_2 + 0x30 + rdx_3
            void* rax_3 = *(r8_2 + 0x10)
            
            if (rax_3 != 0)
                r8_2 = rax_3
            
            int32_t rax_4 = rcx
            
            if (rcx s< 0)
                rax_4 = rcx + 0x1f
            
            int64_t rdx_4 = sx.q(rax_4 s>> 5)
            *(r8_2 + (rdx_4 << 2)) |= 1 << (rcx.b & 0x1f)
    
    uint64_t rax
    
    for (int32_t* j = *(rbp_1 + (rsi_2 << 3) + 0x20); 
            j != &j[sx.q(*(rbp_1 + (rsi_2 << 3) + 0x28))]; j = &j[1])
        if (*((sx.q(*j) << 6) + arg1[7] + 0xc) != 0)
            int32_t rcx_2 = *(rbp_1 + (rsi_2 << 3) + 0x14)
            
            if (rcx_2 s>= 0)
                rax = arg1[0xb]
                uint64_t rdx_7 = zx.q(*(rbp_1 + (rsi_2 << 3) + 3)) * 0xa0
                
                if (rcx_2 s< *(rax + rdx_7 + 0x88))
                    void* r8_5 = rax + 0x70 + rdx_7
                    void* rax_9 = *(r8_5 + 0x10)
                    
                    if (rax_9 != 0)
                        r8_5 = rax_9
                    
                    int32_t rax_10 = rcx_2
                    
                    if (rcx_2 s< 0)
                        rax_10 = rcx_2 + 0x1f
                    
                    int64_t rdx_8 = sx.q(rax_10 s>> 5)
                    *(r8_5 + (rdx_8 << 2)) |= 1 << (rcx_2.b & 0x1f)
            
            break
    
    int32_t zmm0 = arg1[0x26].d
    
    if (not(zmm0 f< *(rbp_1 + (rsi_2 << 3) + 0x10)))
        uint32_t rdx_9 = zx.d(*(rbp_1 + (rsi_2 << 3) + 3))
        int32_t rcx_4 = *(rbp_1 + (rsi_2 << 3) + 0x14)
        
        if (rdx_9 s< arg1[0xc].d && rcx_4 s>= 0)
            int64_t rax_13 = arg1[0xb]
            uint64_t rdx_11 = zx.q(rdx_9.b) * 0xa0
            
            if (rcx_4 s< *(rax_13 + rdx_11 + 0x48))
                void* r8_7 = rax_13 + 0x30 + rdx_11
                void* rax_14 = *(r8_7 + 0x10)
                
                if (rax_14 != 0)
                    r8_7 = rax_14
                
                int32_t rax_15 = rcx_4
                
                if (rcx_4 s< 0)
                    rax_15 = rcx_4 + 0x1f
                
                int64_t rdx_12 = sx.q(rax_15 s>> 5)
                *(r8_7 + (rdx_12 << 2)) &= not.d(1 << (rcx_4.b & 0x1f))
        
        int32_t* r13_1 = *(rbp_1 + (rsi_2 << 3) + 0x20)
        int64_t rcx_6 = sx.q(*(rbp_1 + (rsi_2 << 3) + 0x28))
        uint64_t arg_20 = 0
        uint64_t rdx_14 = rcx_6 << 2 u>> 2
        
        if (r13_1 u> &r13_1[rcx_6])
            rdx_14 = 0
        
        if (rdx_14 != 0)
            uint64_t r14_3
            
            do
                int64_t r9_1 = sx.q(*r13_1)
                int64_t rax_20 = arg1[7]
                int64_t rdi_2 = r9_1 << 6
                char rdx_15 = *(rdi_2 + rax_20)
                int32_t rax_21
                int64_t* rcx_7
                int64_t r8_9
                uint64_t r12_2
                uint64_t r14_1
                int32_t r15_1
                
                if (*(rbp_1 + (rsi_2 << 3) + 2) == 0)
                    char r14_4 = *(rbp_1 + (rsi_2 << 3) + 4)
                    
                    if (r14_4 != 0xff)
                        int32_t r12_3 = *(rbp_1 + (rsi_2 << 3) + 0x18)
                        uint64_t r15_3 = zx.q(r14_4) * 0xa0
                        
                        if (r12_3 == 0xffffffff)
                            sub_1408d07a0(arg1, r14_4, r9_1.d)
                            
                            if (*(r15_3 + arg1[0xb]) != 0)
                                int64_t rcx_22 = sx.q(*(rdi_2 + arg1[7] + 0x14))
                                
                                if (rcx_22.d != 0xffffffff)
                                    char* rcx_25 = rcx_22 * 0x30 + arg1[0x19]
                                    
                                    if (*rcx_25 == 0)
                                        *rcx_25 = 1
                                        *(rcx_25 + 8) = arg1[0x26].d
                        else
                            int64_t r8_15 = arg1[0xb]
                            int32_t rax_43 = *(r15_3 + r8_15 + 0x28) - 1
                            
                            if (rax_43 u<= r12_3)
                                r12_3 = rax_43
                            
                            sub_1408cf420(arg1, zx.q(r9_1.d), 
                                *(*(r15_3 + r8_15 + 0x20) + (sx.q(r12_3) << 3)))
                            *(rdi_2 + arg1[7] + 2) = r12_3.b
                        
                        int64_t rcx_26 = arg1[7]
                        *(rdi_2 + rcx_26 + 1) = *(rdi_2 + rcx_26)
                        *(rdi_2 + arg1[7]) = r14_4
                    else if (rdx_15 != *(rbp_1 + (rsi_2 << 3) + 3))
                        int64_t r8_19 = arg1[0xb]
                        
                        if (*(zx.q(rdx_15) * 0xa0 + r8_19) == 0 || *(rbp_1 + (rsi_2 << 3) + 1) == 0)
                            r15_1 = *(rbp_1 + (rsi_2 << 3) + 0x18)
                            rcx_7 = arg1
                            r12_2 = zx.q(rdx_15)
                            r14_1 = r12_2 * 0xa0
                            
                            if (r15_1 == 0xffffffff)
                                goto label_1408d3304
                            
                            rax_21 = *(r8_19 + r14_1 + 0x28)
                            r8_9 = *(r8_19 + r14_1 + 0x20)
                            goto label_1408d3603
                else
                    r12_2 = zx.q(*(rdi_2 + rax_20 + 1))
                    rcx_7 = arg1
                    r15_1 = *(rbp_1 + (rsi_2 << 3) + 0x18)
                    r14_1 = r12_2 * 0xa0
                    
                    if (r15_1 == 0xffffffff)
                        rdx_15 = r12_2.b
                    label_1408d3304:
                        sub_1408d07a0(rcx_7, rdx_15, r9_1.d)
                        
                        if (*(r14_1 + arg1[0xb]) != 0)
                            int64_t rcx_8 = sx.q(*(rdi_2 + arg1[7] + 0x14))
                            
                            if (rcx_8.d != 0xffffffff)
                                char* rcx_11 = rcx_8 * 0x30 + arg1[0x19]
                                
                                if (*rcx_11 == 0)
                                    *rcx_11 = 1
                                    *(rcx_11 + 8) = arg1[0x26].d
                        
                        goto label_1408d3342
                    
                    int64_t r8_8 = arg1[0xb]
                    rax_21 = *(r14_1 + r8_8 + 0x28)
                    r8_9 = *(r14_1 + r8_8 + 0x20)
                label_1408d3603:
                    
                    if (rax_21 - 1 u<= r15_1)
                        r15_1 = rax_21 - 1
                    
                    sub_1408cf420(rcx_7, zx.q(r9_1.d), *(r8_9 + (sx.q(r15_1) << 3)))
                    *(rdi_2 + arg1[7] + 2) = r15_1.b
                label_1408d3342:
                    int64_t rcx_12 = arg1[7]
                    *(rdi_2 + rcx_12 + 1) = *(rdi_2 + rcx_12)
                    *(rdi_2 + arg1[7]) = r12_2.b
                r13_1 = &r13_1[1]
                r14_3 = arg_20 + 1
                arg_20 = r14_3
            while (r14_3 != rdx_14)
            rcx_6 = zx.q(*(rbp_1 + (rsi_2 << 3) + 0x28))
            i = i_1
            r12_1 = arg_18
        
        int32_t* r8_11 = *(rbp_1 + (rsi_2 << 3) + 0x20)
        int64_t r9_2 = 0
        uint64_t r10_2 = sx.q(rcx_6.d) << 2 u>> 2
        
        if (r8_11 u> &r8_11[sx.q(rcx_6.d)])
            r10_2 = 0
        
        if (r10_2 != 0)
            do
                int64_t rdx_16 = sx.q(*r8_11)
                r8_11 = &r8_11[1]
                r9_2 += 1
                *((rdx_16 << 6) + arg1[7] + 0x14) = 0xffffffff
                *((rdx_16 << 6) + arg1[7] + 4) = 0
            while (r9_2 != r10_2)
        
        int64_t rax_31 = sx.q(arg1[0x1a].d)
        int32_t r11_1 = (rax_31 - 1).d
        
        if (rax_31.d s> 1 && i != r11_1)
            int64_t rax_32 = arg1[0x19]
            int64_t rcx_16 = rax_31 * 6
            int32_t* rdx_18 = *(rax_32 + (rcx_16 << 3) - 0x10)
            int64_t rcx_17 = 0
            uint64_t r10_4 = sx.q(*(rax_32 + (rcx_16 << 3) - 8)) << 2 u>> 2
            
            if (rdx_18 u> &rdx_18[sx.q(*(rax_32 + (rcx_16 << 3) - 8))])
                r10_4 = 0
            
            if (r10_4 != 0)
                do
                    int64_t r9_3 = arg1[7]
                    int64_t rax_36 = sx.q(*rdx_18) << 6
                    int32_t r8_12 = *(rax_36 + r9_3 + 0x14)
                    
                    if (r8_12 == i || r8_12 == r11_1)
                        *(rax_36 + r9_3 + 0x14) = i
                    
                    rdx_18 = &rdx_18[1]
                    rcx_17 += 1
                while (rcx_17 != r10_4)
        
        int64_t rdi_4 = sx.q(i) * 0x30
        int64_t rcx_18 = *(rdi_4 + arg1[0x19] + 0x20)
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        int32_t r9_5 = arg1[0x1a].d
        int32_t rdx_21 = r9_5 - i - 1
        
        if (rdx_21 s>= 1)
            rdx_21 = 1
        
        if (rdx_21 != 0)
            int64_t rcx_19 = arg1[0x19]
            memcpy(rcx_19 + rdi_4, sx.q(r9_5 - rdx_21) * 0x30 + rcx_19, rdx_21 * 0x30)
            r9_5 = arg1[0x1a].d
        
        i -= 1
        r12_1 -= 1
        arg1[0x1a].d = r9_5 - 1
    else if (*(rbp_1 + (rsi_2 << 3) + 1) == 0 && not(zmm0 f< *(rbp_1 + (rsi_2 << 3) + 0xc)))
        int64_t r13_2 = 0
        int32_t* r15_4 = *(rbp_1 + (rsi_2 << 3) + 0x20)
        uint64_t rcx_30 = sx.q(*(rbp_1 + (rsi_2 << 3) + 0x28)) << 2 u>> 2
        
        if (r15_4 u> &r15_4[sx.q(*(rbp_1 + (rsi_2 << 3) + 0x28))])
            rcx_30 = 0
        
        if (rcx_30 != 0)
            do
                char* rcx_31 = arg1[0x23]
                int64_t r14_6 = sx.q(*r15_4)
                int64_t rdi_6
                
                if (*rcx_31 != 0)
                    rdi_6 = r14_6 << 6
                
                if (*rcx_31 == 0 || *(rcx_31 + 4) f> *(rdi_6 + arg1[7] + 8))
                    r12_1.b = 0
                    i = i_1
                else
                    r12_1.b = 1
                    void arg_8
                    sub_1408ce1c0(arg1, r14_6.d, &arg_8)
                    char r8_22
                    
                    if (*(rbp_1 + (rsi_2 << 3) + 2) == 0)
                        r8_22 = *(rbp_1 + (rsi_2 << 3) + 4)
                        
                        if (r8_22 != 0xff)
                        label_1408d36fb:
                            rax = sub_1408d01c0(arg1, *(arg1[0x19] + (rsi_2 << 3) + 3), r8_22, 
                                r14_6.d)
                            i = i_1
                            
                            if (rax.d != 0xffffffff)
                                int64_t rcx_34 = sx.q(rax.d) * 0x38
                                *(arg1[0x17] + rcx_34 + 0x30) = i
                                *(rbp_1 + (rsi_2 << 3) + 0x18) = *(arg1[0x17] + rcx_34 + 0x14)
                        else
                            r8_22 = *(rdi_6 + arg1[7])
                            
                            if (r8_22 != *(rbp_1 + (rsi_2 << 3) + 3) && r8_22 != 0xff)
                                goto label_1408d36fb
                            
                            i = i_1
                    else
                        r8_22 = *(rdi_6 + arg1[7] + 1)
                        
                        if (r8_22 != 0xff)
                            goto label_1408d36fb
                        
                        i = i_1
                
                *(rbp_1 + (rsi_2 << 3) + 1) |= r12_1.b
                r15_4 = &r15_4[1]
                r13_2 += 1
            while (r13_2 != rcx_30)
            
            r12_1 = arg_18
    
    i += 1
    r12_1 += 1
    i_1 = i
    arg_18 = r12_1
while (i s< arg1[0x1a].d)
