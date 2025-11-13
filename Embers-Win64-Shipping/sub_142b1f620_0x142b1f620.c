// 函数: sub_142b1f620
// 地址: 0x142b1f620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg2 + 0x10)
void* r9 = arg1
void* i_5 = *(arg2 + 0x20)
int16_t* i_3 = result + (sx.q(arg3) << 1)

if (i_3 != i_5)
    char r10 = 0
    int16_t* r14_1 = nullptr
    char arg_18 = 0
    char var_68_1 = 0
label_142b1f67d:
    int16_t* r15_1 = nullptr
    
    while (true)
        uint32_t rdi_3 = zx.d(*i_3)
        i_3 = &i_3[1]
        int32_t r8_2
        
        if ((rdi_3 & 0xfffff800) == 0xd800)
            uint32_t rcx_1
            
            if (not(test_bit(rdi_3, 0xa)) && i_3 != i_5)
                rcx_1 = zx.d(*i_3)
            
            if (test_bit(rdi_3, 0xa) || i_3 == i_5 || (rcx_1 & 0xfffffc00) != 0xdc00)
                r8_2 = *(*(r9 + 0x20) + 0x14) - 1
            else
                i_3 = &i_3[1]
                rdi_3 = ((rdi_3 - 0xd7f7) << 0xa) + rcx_1
                int64_t* rcx_2 = *(r9 + 0x20)
                
                if (rdi_3 s< rcx_2[3].d)
                    r9 = arg1
                    r8_2 = sub_142b6a760(rcx_2, rdi_3)
                    r10 = var_68_1
                else
                    r8_2 = *(rcx_2 + 0x14) - 2
        else
            r8_2 = zx.d(*(**(r9 + 0x20) + (zx.q(rdi_3) s>> 6 << 1))) + (rdi_3 & 0x3f)
        
        uint16_t rsi_1 = *(*(*(r9 + 0x20) + 8) + (sx.q(r8_2) << 1))
        uint16_t rbp_1
        
        if (rsi_1 u< 0xfc00)
            rbp_1.b = 0
        else
            rbp_1 = rsi_1 u>> 1
        
        int16_t r12_1 = *(r9 + 0x1e)
        
        if (r12_1 u> rsi_1 || rsi_1 u> 0xfe00 || r15_1 == 0 || (r10 u>= rbp_1.b && r10 != 0))
            goto label_142b1fa51
        
        if (rsi_1 != 0xfe00)
            uint32_t rax_15 = sub_142b1a210(r15_1, rdi_3)
            char r10_1 = rax_15.b
            
            if (rax_15 s< 0)
                r9 = arg1
            label_142b1fa51:
                var_68_1 = rbp_1.b
                r10 = rbp_1.b
                
                if (i_3 != i_5)
                    if (rbp_1.b == 0)
                        if (rsi_1 - 2 u> 0xfbfd)
                            goto label_142b1f67d
                        
                        uint64_t rcx_15 = zx.q(rsi_1)
                        int64_t rax_29
                        uint64_t rcx_16
                        
                        if (rsi_1 u>= r12_1)
                            rcx_16 = rcx_15 - zx.q(r12_1)
                            rax_29 = *(r9 + 0x28)
                        else
                            rax_29 = *(r9 + 0x30)
                            rcx_16 = rcx_15 u>> 1
                        
                        r15_1 = rax_29 + (rcx_16 << 1)
                        
                        if (r15_1 == 0)
                            continue
                        else if (rdi_3 u> 0xffff)
                            arg_18 = 1
                            r14_1 = &i_3[-2]
                            continue
                        else
                            r14_1 = &i_3[-1]
                            arg_18 = 0
                            continue
                    else if (arg4 == 0)
                        continue
                    else
                        r15_1 = nullptr
                        continue
            else
                int32_t r11_2 = rax_15 s>> 1
                int64_t rcx_7
                rcx_7.b = rdi_3 u> 0xffff
                void* i_1 = i_3 - (rcx_7 + 1) * 2
                
                if (arg_18 == 0)
                    if (r11_2 - 0x10000 u> 0xfffff)
                        *r14_1 = r11_2.w
                    else
                        void* i = i_1
                        arg_18 = 1
                        i_1 += 2
                        
                        if (&r14_1[1] u< i)
                            void* rdx_8 = i_1 - i
                            
                            do
                                int16_t rax_21 = *(i - 2)
                                i -= 2
                                *(rdx_8 + i) = rax_21
                            while (i u> &r14_1[1])
                        
                        r14_1[1] = (r11_2.w & 0x3ff) | 0xdc00
                        *r14_1 = (r11_2 s>> 0xa).w - 0x2840
                else if (r11_2 - 0x10000 u> 0xfffff)
                    *r14_1 = r11_2.w
                    void* rdx_6 = &r14_1[1]
                    arg_18 = 0
                    void* rcx_10 = rdx_6 + 2
                    int64_t r8_9 = 0
                    uint64_t r10_5 = (i_1 - rcx_10 + 1) u>> 1
                    
                    if (rcx_10 u> i_1)
                        r10_5 = 0
                    
                    if (r10_5 != 0)
                        do
                            r8_9 += 1
                            *rdx_6 = *rcx_10
                            rdx_6 += 2
                            rcx_10 += 2
                        while (r8_9 u< r10_5)
                    
                    r10_1 = rax_15.b
                    i_1 -= 2
                else
                    *r14_1 = (r11_2 s>> 0xa).w - 0x2840
                    r14_1[1] = (r11_2.w & 0x3ff) | 0xdc00
                
                if (i_1 u< i_3)
                    void* i_2 = i_1
                    int64_t rdx_9 = 0
                    uint64_t r8_13 = (i_5 - i_3 + 1) u>> 1
                    
                    if (i_3 u> i_5)
                        r8_13 = 0
                    
                    if (r8_13 != 0)
                        do
                            rdx_9 += 1
                            *i_2 = *(i_3 - i_1 + i_2)
                            i_2 += 2
                        while (rdx_9 u< r8_13)
                    
                    i_5 = i_2
                    i_3 = i_1
                
                if (i_3 != i_5)
                    if ((r10_1 & 1) == 0)
                        r9 = arg1
                        r15_1 = nullptr
                        r10 = var_68_1
                        continue
                    else
                        r9 = arg1
                        r10 = var_68_1
                        uint64_t rcx_13 = zx.q(sub_142b1e310(arg1, r11_2))
                        int64_t rax_27 = *(r9 + 0x30)
                        uint64_t rcx_14 = rcx_13 u>> 1
                        r15_1 = rax_27 + (rcx_14 << 1)
                            + (((zx.q(*(rax_27 + (rcx_14 << 1))) & 0x1f) + 1) << 1)
                        continue
        else
            if (rdi_3 s< 0x11a7)
                int16_t rax_10 = *r14_1 - 0x1100
                
                if (rax_10 u< 0x13)
                    void* i_4 = &i_3[-1]
                    int16_t rcx_5 = (rax_10 * 0x15 + rdi_3.w) * 0x1c - 0x3a9c
                    
                    if (i_3 != i_5)
                        int16_t rax_13 = *i_3 - 0x11a7
                        
                        if (rax_13 u< 0x1c)
                            i_3 = &i_3[1]
                            rcx_5 += rax_13
                    
                    *r14_1 = rcx_5
                    void* i_6 = i_4
                    int64_t rdx_4 = 0
                    uint64_t r8_8 = (i_5 - i_3 + 1) u>> 1
                    
                    if (i_3 u> i_5)
                        r8_8 = 0
                    
                    if (r8_8 != 0)
                        do
                            rdx_4 += 1
                            *i_6 = *(i_3 - i_4 + i_6)
                            i_6 += 2
                        while (rdx_4 u< r8_8)
                    
                    i_3 = i_4
                    i_5 = i_6
                    r9 = arg1
            
            if (i_3 != i_5)
                r15_1 = nullptr
                continue
        
        result = (*(arg2 + 0x20) - i_5) s>> 1
        *(arg2 + 0x28) += result.d
        *(arg2 + 0x20) = i_5
        *(arg2 + 0x18) = i_5
        *(arg2 + 0x2c) = 0
        break

return result
