// 函数: sub_1429d6e30
// 地址: 0x1429d6e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 8)
int32_t i = 0
int32_t i_1 = 0

if (*result s> 0)
    int64_t r9_1 = 0
    int64_t arg_18 = 0
    
    do
        void* rdx_1 = *(arg1 + 0x58)
        int64_t j_2 = sx.q(*(rdx_1 + r9_1))
        int32_t arg_10 = j_2.d
        int32_t* r13_1 = *(arg1 + 0x78) + (sx.q(*(rdx_1 + r9_1 + 4)) << 2)
        
        if (j_2.d s> 0)
            int32_t rsi_1 = 1
            int32_t* r9_2 = r13_1
            int32_t* r15_2 = *(arg1 + 0x90) + (sx.q(*(r9_1 + *(arg1 + 0x68) + 4)) << 2) - r13_1
            int64_t j_1 = j_2
            int64_t j
            
            do
                int32_t rcx_2 = *(r15_2 + r9_2)
                
                if (rcx_2 != 0xffffffff)
                    void* r8_1 = *(arg1 + 0x10)
                    int32_t r11 = rcx_2 * 2
                    int64_t rdi_1 = sx.q(r11) << 2
                    int32_t* rdx_3 = *(r8_1 + 0x90) + rdi_1
                    *rdx_3 = 2
                    int32_t rax_4
                    
                    if (rcx_2 != 0)
                        rax_4 = rdx_3[-2] + rdx_3[-1]
                    else
                        rax_4 = 0
                    
                    rdx_3[1] = rax_4
                    int32_t rax_6 = *(r8_1 + 0x10)
                    
                    if (rax_6 s< 2)
                        rax_6 = 2
                    
                    *(r8_1 + 0x10) = rax_6
                    void* r8_2 = *(arg1 + 0x10)
                    int64_t rcx_3 = sx.q(r11 + 1)
                    int32_t* rbx_1 = *(r8_2 + 0xa8) + (sx.q(*(*(r8_2 + 0x90) + (rcx_3 << 2))) << 2)
                    int16_t* r14_1 = *(r8_2 + 0xc0) + (sx.q(*(*(r8_2 + 0x90) + (rcx_3 << 2))) << 1)
                    int32_t rax_12 = *r9_2
                    int32_t rcx_6 = 0
                    
                    if (rsi_1 s< arg_10)
                        rcx_6 = rsi_1
                    
                    int32_t rdx_5 = 0
                    int64_t r11_1 = 0
                    
                    if (rax_12 != 0xffffffff)
                        *rbx_1 = rax_12
                        int16_t rax_13 = 1
                        rdx_5 = 1
                        
                        if (arg_10 == 4)
                            rax_13 = rcx_6.w
                        
                        r11_1 = 1
                        *r14_1 = rax_13
                    
                    int32_t r8_4 = r13_1[sx.q(rcx_6)]
                    
                    if (r8_4 != 0xffffffff)
                        rbx_1[r11_1] = r8_4
                        int16_t rax_16
                        
                        if (j_2 != 4)
                            rax_16 = 2
                        else
                            rax_16 = (rcx_6.w - 2) & 3
                        
                        r14_1[r11_1] = rax_16
                        rdx_5 += 1
                    
                    *(rdi_1 + *(*(arg1 + 0x10) + 0x90)) = rdx_5
                
                rsi_1 += 1
                r9_2 = &r9_2[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            r9_1 = arg_18
            i = i_1
        
        result = *(arg1 + 8)
        i += 1
        r9_1 += 8
        i_1 = i
        arg_18 = r9_1
    while (i s< *result)

return result
