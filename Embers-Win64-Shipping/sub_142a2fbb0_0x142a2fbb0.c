// 函数: sub_142a2fbb0
// 地址: 0x142a2fbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbp = *(arg1 + 0x1eb0)
sub_142a2e9c0(arg1)
int32_t rcx = *(arg1 + 0x1e74)
int32_t i = 0
*(arg1 + 0xf8c) = 0
int32_t i_1 = 0
*(arg1 + 0xf90) = (rcx << 7) - 0x80
int32_t result = (*(arg1 + 0x1e78) << 7) - 0x80
int32_t result_1 = result

if (rcx s> 0)
    do
        int32_t j = 0
        *(arg1 + 0xf84) = 0
        *(arg1 + 0xf88) = result
        
        if (*(arg1 + 0x1e78) s> 0)
            do
                if (*(arg1 + 0xf61) == 0)
                    if (*(arg1 + 0x1e64) == 0)
                        rbp[0xb] = 0
                else if (*(arg1 + 0xf60) != 0)
                    int32_t r14_1 = 0
                    int32_t rsi_4 = ((zx.d(*(arg1 + 0xf64)) * (*(arg1 + 0x36bc) - 1)) u>> 8) + 1
                    
                    if (*(arg1 + 0x36b8) s< 0)
                        sub_142a2e350(arg1 + 0x36a0)
                    
                    int64_t r8_1 = *(arg1 + 0x36b0)
                    uint64_t rcx_3 = zx.q(rsi_4) << 0x38
                    
                    if (r8_1 u>= rcx_3)
                        r14_1 = 1
                        rsi_4 = *(arg1 + 0x36bc) - rsi_4
                        r8_1 -= rcx_3
                    
                    char r15_1 = 0
                    uint32_t rdx_1 = zx.d(*(zx.q(rsi_4) + &data_143609200))
                    int32_t r9_2 = *(arg1 + 0x36b8) - rdx_1
                    int32_t rsi_5 = rsi_4 << rdx_1.b
                    *(arg1 + 0x36b0) = r8_1 << rdx_1.b
                    *(arg1 + 0x36b8) = r9_2
                    *(arg1 + 0x36bc) = rsi_5
                    
                    if (r14_1 == 0)
                        int32_t r14_10 = ((zx.d(*(arg1 + 0xf65)) * (rsi_5 - 1)) u>> 8) + 1
                        
                        if (r9_2 s< 0)
                            sub_142a2e350(arg1 + 0x36a0)
                        
                        int64_t r8_5 = *(arg1 + 0x36b0)
                        uint64_t rcx_13 = zx.q(r14_10) << 0x38
                        
                        if (r8_5 u>= rcx_13)
                            r15_1 = 1
                            r14_10 = *(arg1 + 0x36bc) - r14_10
                            r8_5 -= rcx_13
                        
                        uint32_t rdx_3 = zx.d(*(zx.q(r14_10) + &data_143609200))
                        *(arg1 + 0x36b8) -= rdx_3
                        *(arg1 + 0x36bc) = r14_10 << rdx_3.b
                        *(arg1 + 0x36b0) = r8_5 << rdx_3.b
                        rbp[0xb] = r15_1
                    else
                        int32_t r14_5 = ((zx.d(*(arg1 + 0xf66)) * (rsi_5 - 1)) u>> 8) + 1
                        
                        if (r9_2 s< 0)
                            sub_142a2e350(arg1 + 0x36a0)
                        
                        int64_t r8_3 = *(arg1 + 0x36b0)
                        uint64_t rcx_8 = zx.q(r14_5) << 0x38
                        
                        if (r8_3 u>= rcx_8)
                            r15_1 = 1
                            r14_5 = *(arg1 + 0x36bc) - r14_5
                            r8_3 -= rcx_8
                        
                        uint32_t rdx_2 = zx.d(*(zx.q(r14_5) + &data_143609200))
                        *(arg1 + 0x36b8) -= rdx_2
                        *(arg1 + 0x36b0) = r8_3 << rdx_2.b
                        *(arg1 + 0x36bc) = r14_5 << rdx_2.b
                        rbp[0xb] = r15_1 + 2
                
                if (*(arg1 + 0x1e80) == 0)
                    rbp[9] = 0
                else
                    char r14_12 = 0
                    int32_t rdi_5 = ((zx.d(*(arg1 + 0x3827)) * (*(arg1 + 0x36bc) - 1)) u>> 8) + 1
                    
                    if (*(arg1 + 0x36b8) s< 0)
                        sub_142a2e350(arg1 + 0x36a0)
                    
                    int64_t r8_7 = *(arg1 + 0x36b0)
                    uint64_t rcx_18 = zx.q(rdi_5) << 0x38
                    
                    if (r8_7 u>= rcx_18)
                        r14_12 = 1
                        rdi_5 = *(arg1 + 0x36bc) - rdi_5
                        r8_7 -= rcx_18
                    
                    uint32_t rdx_4 = zx.d(*(zx.q(rdi_5) + &data_143609200))
                    *(arg1 + 0x36b8) -= rdx_4
                    *(arg1 + 0x36bc) = rdi_5 << rdx_4.b
                    *(arg1 + 0x36b0) = r8_7 << rdx_4.b
                    rbp[9] = r14_12
                
                rbp[3] = 0
                
                if (*(arg1 + 0x1e64) != 0)
                    sub_142a2f0e0(arg1, rbp, rbp)
                else
                    sub_142a2ee90(arg1, rbp)
                
                *(arg1 + 0xf84) -= 0x80
                rbp = &rbp[0x4c]
                *(arg1 + 0xf88) -= 0x80
                j += 1
            while (j s< *(arg1 + 0x1e78))
            
            i = i_1
            result = result_1
        
        *(arg1 + 0xf8c) -= 0x80
        i += 1
        *(arg1 + 0xf90) -= 0x80
        rbp = &rbp[0x4c]
        i_1 = i
    while (i s< *(arg1 + 0x1e74))

return result
