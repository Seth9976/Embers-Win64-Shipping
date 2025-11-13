// 函数: sub_142af0790
// 地址: 0x142af0790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x180) s<= 0)
    return sub_142af0120(arg1, 0x10306) __tailcall

sub_142af0340(arg1, 0)
int32_t rsi = 0

while (true)
    int32_t rax_2 = *(arg1 + 0x180)
    int32_t rbx_1 = 0
    
    if (rax_2 s> 0)
        *(arg1 + 0x180) = rax_2 - 1
        rbx_1 = *(*(arg1 + 0x190) + (sx.q(rax_2 - 1) << 2))
        
        if (rbx_1 s< 0)
            int32_t rcx_4 = *(arg1 + 0x180)
            int32_t rax_8 = 0
            
            if (rcx_4 s> 0)
                *(arg1 + 0x180) = rcx_4 - 1
                rax_8 = *(*(arg1 + 0x190) + (sx.q(rcx_4 - 1) << 2))
            
            *(arg1 + 0x124) = rax_8
            
            if (rbx_1 + 8 u> 7)
                abort()
                noreturn
            
            int32_t rax_14
            int32_t rdx_6
            void* rbx_3
            int32_t* r8_4
            int32_t r8_8
            void* r9_3
            
            switch (rbx_1)
                case 0xfffffff8
                    int32_t rcx_58 = *(arg1 + 0x198)
                    void* rbx_11 = *(*(arg1 + 0x10) + 0x20)
                    int32_t rbp_8
                    
                    if (rcx_58 - 5 s< 0 || rcx_58 - 5 s>= *(rbx_11 + 8))
                        rbp_8 = 0
                    else
                        rbp_8 = *(*(rbx_11 + 0x18) + (sx.q(rcx_58 - 5) << 3))
                    
                    int32_t* r8_16 = *(arg1 + 8)
                    int32_t rax_62 = *r8_16
                    int32_t rbp_10
                    
                    if (rax_62 s<= 0)
                        rbp_10 = (rbp_8 & 0xffffff) | 0x30000000
                    else
                        rbp_10 = 0
                    
                    if (rax_62 s<= 0)
                        int32_t rdx_32 = *(rbx_11 + 8)
                        char rax_63
                        
                        if (rdx_32 + 1 s< 0 || *(rbx_11 + 0xc) s< rdx_32 + 1)
                            rax_63 = sub_142aeb240(rbx_11, rdx_32 + 1, r8_16)
                        
                        if ((rdx_32 + 1 s>= 0 && *(rbx_11 + 0xc) s>= rdx_32 + 1) || rax_63 != 0)
                            *(*(rbx_11 + 0x18) + (sx.q(*(rbx_11 + 8)) << 3)) = sx.q(rbp_10)
                            *(rbx_11 + 8) += 1
                        
                        if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                            sub_142af0120(arg1, 0x10314)
                    
                    int32_t rbx_12 = *(*(*(arg1 + 0x10) + 0x20) + 8)
                    int32_t rbp_11 = sub_142af1df0(arg1, *(arg1 + 0x198), rbx_12 - 1)
                    int32_t rax_69 = sub_142af1a00(arg1, *(arg1 + 0x198), rbx_12 - 1)
                    int64_t rbx_13 = sx.q(rax_69)
                    
                    if (rbx_13.d u< 0x1000000 && rbx_13.d != 0x7fffffff)
                        if (rbp_11 == 0x7fffffff && rax_69 == 0)
                            rbp_11 = 0
                        
                        sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(rbp_11), *(arg1 + 0x198) - 3)
                        sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), rbx_13, *(arg1 + 0x198) - 2)
                        r9_3 = *(*(arg1 + 0x10) + 0x20)
                        int32_t rcx_72 = *(r9_3 + 8)
                        
                        if (**(arg1 + 8) s<= 0)
                            if (rcx_72 s> 0xffffff)
                                abort()
                                noreturn
                            
                            if (rcx_72 s< 0)
                                abort()
                                noreturn
                            
                            rsi = rcx_72 | 0x1f000000
                        
                        r8_8 = *(arg1 + 0x198) - 1
                        goto label_142af0e7a
                    
                    sub_142af0120(arg1, 0x1030c)
                case 0xfffffff9
                    int32_t rcx_39 = *(arg1 + 0x198)
                    void* rbx_7 = *(*(arg1 + 0x10) + 0x20)
                    int32_t rbp_4
                    
                    if (rcx_39 - 4 s< 0 || rcx_39 - 4 s>= *(rbx_7 + 8))
                        rbp_4 = 0
                    else
                        rbp_4 = *(*(rbx_7 + 0x18) + (sx.q(rcx_39 - 4) << 3))
                    
                    int32_t* r8_9 = *(arg1 + 8)
                    int32_t rbp_5 = rbp_4 & 0xffffff
                    int32_t rax_46 = *r8_9
                    int32_t r14_4
                    
                    if (rax_46 s<= 0)
                        r14_4 = rbp_5 | 0x2e000000
                    else
                        r14_4 = 0
                    
                    if (rax_46 s<= 0)
                        int32_t rdx_22 = *(rbx_7 + 8)
                        char rax_47
                        
                        if (rdx_22 + 1 s< 0 || *(rbx_7 + 0xc) s< rdx_22 + 1)
                            rax_47 = sub_142aeb240(rbx_7, rdx_22 + 1, r8_9)
                        
                        if ((rdx_22 + 1 s>= 0 && *(rbx_7 + 0xc) s>= rdx_22 + 1) || rax_47 != 0)
                            *(*(rbx_7 + 0x18) + (sx.q(*(rbx_7 + 8)) << 3)) = sx.q(r14_4)
                            *(rbx_7 + 8) += 1
                        
                        if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                            sub_142af0120(arg1, 0x10314)
                    
                    int32_t* r8_10 = *(arg1 + 8)
                    int32_t rax_51 = *r8_10
                    int32_t rbp_6
                    
                    if (rax_51 s<= 0)
                        rbp_6 = rbp_5 | 0x26000000
                    else
                        rbp_6 = 0
                    
                    if (rax_51 s<= 0)
                        void* rbx_8 = *(*(arg1 + 0x10) + 0x20)
                        int32_t rdx_25 = *(rbx_8 + 8)
                        char rax_53
                        
                        if (rdx_25 + 1 s< 0 || *(rbx_8 + 0xc) s< rdx_25 + 1)
                            rax_53 = sub_142aeb240(rbx_8, rdx_25 + 1, r8_10)
                        
                        if ((rdx_25 + 1 s>= 0 && *(rbx_8 + 0xc) s>= rdx_25 + 1) || rax_53 != 0)
                            *(*(rbx_8 + 0x18) + (sx.q(*(rbx_8 + 8)) << 3)) = sx.q(rbp_6)
                            *(rbx_8 + 8) += 1
                        
                        if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                            sub_142af0120(arg1, 0x10314)
                    
                    int32_t rbx_9 = *(*(*(arg1 + 0x10) + 0x20) + 8)
                    int32_t rbp_7 = sub_142af1df0(arg1, *(arg1 + 0x198), rbx_9 - 1)
                    int32_t rax_59 = sub_142af1a00(arg1, *(arg1 + 0x198), rbx_9 - 1)
                    int64_t rbx_10 = sx.q(rax_59)
                    
                    if (rbx_10.d u< 0x1000000 && rbx_10.d != 0x7fffffff)
                        if (rbp_7 == 0x7fffffff && rax_59 == 0)
                            rbp_7 = 0
                        
                        sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(rbp_7), *(arg1 + 0x198) - 2)
                        sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), rbx_10, *(arg1 + 0x198) - 1)
                    else
                        sub_142af0120(arg1, 0x1030c)
                case 0xfffffffb
                    int32_t rcx_21 = *(arg1 + 0x198)
                    void* rbx_4 = *(*(arg1 + 0x10) + 0x20)
                    int32_t rbp_1
                    
                    if (rcx_21 - 1 s< 0 || rcx_21 - 1 s>= *(rbx_4 + 8))
                        rbp_1 = 0
                    else
                        rbp_1 = *(*(rbx_4 + 0x18) + (sx.q(rcx_21 - 1) << 3))
                    
                    int32_t* r8_5 = *(arg1 + 8)
                    int32_t rbp_2 = rbp_1 & 0xffffff
                    int32_t rax_25 = *r8_5
                    int32_t r14_1
                    
                    if (rax_25 s<= 0)
                        r14_1 = rbp_2 | 0x26000000
                    else
                        r14_1 = 0
                    
                    if (rax_25 s<= 0)
                        int32_t rdx_14 = *(rbx_4 + 8)
                        char rax_26
                        
                        if (rdx_14 + 1 s< 0 || *(rbx_4 + 0xc) s< rdx_14 + 1)
                            rax_26 = sub_142aeb240(rbx_4, rdx_14 + 1, r8_5)
                        
                        if ((rdx_14 + 1 s>= 0 && *(rbx_4 + 0xc) s>= rdx_14 + 1) || rax_26 != 0)
                            *(*(rbx_4 + 0x18) + (sx.q(*(rbx_4 + 8)) << 3)) = sx.q(r14_1)
                            *(rbx_4 + 8) += 1
                        
                        if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                            sub_142af0120(arg1, 0x10314)
                    
                    int32_t* r8_6 = *(arg1 + 8)
                    int64_t r14_3 = 0x1000000
                    int32_t rax_30 = *r8_6
                    
                    if (rax_30 s> 0)
                        r14_3 = 0
                    
                    if (rax_30 s<= 0)
                        void* rbx_5 = *(*(arg1 + 0x10) + 0x20)
                        int32_t rdx_17 = *(rbx_5 + 8)
                        char rax_32
                        
                        if (rdx_17 + 1 s< 0 || *(rbx_5 + 0xc) s< rdx_17 + 1)
                            rax_32 = sub_142aeb240(rbx_5, rdx_17 + 1, r8_6)
                        
                        if ((rdx_17 + 1 s>= 0 && *(rbx_5 + 0xc) s>= rdx_17 + 1) || rax_32 != 0)
                            *(*(rbx_5 + 0x18) + (sx.q(*(rbx_5 + 8)) << 3)) = r14_3
                            *(rbx_5 + 8) += 1
                        
                        if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                            sub_142af0120(arg1, 0x10314)
                    
                    int32_t* r8_7 = *(arg1 + 8)
                    int32_t rax_36 = *r8_7
                    int32_t rbp_3
                    
                    if (rax_36 s<= 0)
                        rbp_3 = rbp_2 | 0x26000000
                    else
                        rbp_3 = 0
                    
                    if (rax_36 s<= 0)
                        void* rbx_6 = *(*(arg1 + 0x10) + 0x20)
                        int32_t rdx_19 = *(rbx_6 + 8)
                        char rax_38
                        
                        if (rdx_19 + 1 s< 0 || *(rbx_6 + 0xc) s< rdx_19 + 1)
                            rax_38 = sub_142aeb240(rbx_6, rdx_19 + 1, r8_7)
                        
                        if ((rdx_19 + 1 s>= 0 && *(rbx_6 + 0xc) s>= rdx_19 + 1) || rax_38 != 0)
                            *(*(rbx_6 + 0x18) + (sx.q(*(rbx_6 + 8)) << 3)) = sx.q(rbp_3)
                            *(rbx_6 + 8) += 1
                        
                        if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                            sub_142af0120(arg1, 0x10314)
                    
                    r9_3 = *(*(arg1 + 0x10) + 0x20)
                    int32_t rcx_37 = *(r9_3 + 8) - 1
                    
                    if (**(arg1 + 8) s<= 0)
                        if (rcx_37 s> 0xffffff)
                            abort()
                            noreturn
                        
                        if (rcx_37 s< 0)
                            abort()
                            noreturn
                        
                        rsi = rcx_37 | 0x6000000
                    
                    r8_8 = *(arg1 + 0x198)
                label_142af0e7a:
                    sub_142aeb3c0(r9_3, sx.q(rsi), r8_8)
                case 0xfffffffc
                    int32_t rcx_18 = *(arg1 + 0x198)
                    rbx_3 = *(*(arg1 + 0x10) + 0x20)
                    int32_t rdx_12
                    
                    if (rcx_18 - 5 s< 0 || rcx_18 - 5 s>= *(rbx_3 + 8))
                        rdx_12 = 0
                    else
                        rdx_12 = *(*(rbx_3 + 0x18) + (sx.q(rcx_18 - 5) << 3))
                    
                    r8_4 = *(arg1 + 8)
                    rax_14 = *r8_4
                    
                    if (rax_14 s<= 0)
                        rdx_6 = (rdx_12 & 0xffffff) | 0x26000000
                        goto label_142af08bb
                case 0xfffffffd
                    int32_t rcx_15 = *(arg1 + 0x198)
                    rbx_3 = *(*(arg1 + 0x10) + 0x20)
                    int32_t rdx_10
                    
                    if (rcx_15 + 1 s< 0 || rcx_15 + 1 s>= *(rbx_3 + 8))
                        rdx_10 = 0
                    else
                        rdx_10 = *(*(rbx_3 + 0x18) + (sx.q(rcx_15 + 1) << 3))
                    
                    r8_4 = *(arg1 + 8)
                    rax_14 = *r8_4
                    
                    if (rax_14 s<= 0)
                        rdx_6 = (rdx_10 & 0xffffff) | 0x21000000
                        goto label_142af08bb
                case 0xfffffffe
                    int32_t rcx_8 = *(arg1 + 0x198)
                    rbx_3 = *(*(arg1 + 0x10) + 0x20)
                    int32_t rdx_4
                    
                    if (rcx_8 + 1 s< 0 || rcx_8 + 1 s>= *(rbx_3 + 8))
                        rdx_4 = 0
                    else
                        rdx_4 = *(*(rbx_3 + 0x18) + (sx.q(rcx_8 + 1) << 3))
                    
                    r8_4 = *(arg1 + 8)
                    rax_14 = *r8_4
                    
                    if (rax_14 s<= 0)
                        rdx_6 = (rdx_4 & 0xffffff) | 0x9000000
                    label_142af08bb:
                        
                        if (rax_14 s<= 0)
                            int32_t rdx_7 = *(rbx_3 + 8)
                            char rax_15
                            
                            if (rdx_7 + 1 s< 0 || *(rbx_3 + 0xc) s< rdx_7 + 1)
                                rax_15 = sub_142aeb240(rbx_3, rdx_7 + 1, r8_4)
                            
                            if ((rdx_7 + 1 s>= 0 && *(rbx_3 + 0xc) s>= rdx_7 + 1) || rax_15 != 0)
                                *(*(rbx_3 + 0x18) + (sx.q(*(rbx_3 + 8)) << 3)) = sx.q(rdx_6)
                                *(rbx_3 + 8) += 1
                            
                            if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                                sub_142af0120(arg1, 0x10314)
            
            int32_t result = *(*(*(arg1 + 0x10) + 0x20) + 8)
            *(arg1 + 0x19c) = result
            return result
    
    void* r9_2 = *(*(arg1 + 0x10) + 0x20)
    int32_t r8_2
    
    if (rbx_1 s>= *(r9_2 + 8))
        r8_2 = 0
    else
        r8_2 = *(*(r9_2 + 0x18) + (sx.q(rbx_1) << 3))
    
    sub_142aeb3c0(r9_2, sx.q(*(r9_2 + 8)) | sx.q(r8_2), rbx_1)
    *(arg1 + 0x198) = rbx_1
