// 函数: sub_142af21f0
// 地址: 0x142af21f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

while (true)
    void* rcx = *(*(arg1 + 0x10) + 8)
    int64_t rax_2 = sx.q(*(rcx + 0x28))
    int64_t rax_3
    
    if (rax_2.d s> *(rcx + 0x1c))
        rax_3 = (*(*(rcx + 0x38) + 0x40))()
    else
        rax_3 = rax_2 + *(rcx + 0x20)
    
    *(arg1 + 0x20) = rax_3
    result = sub_142af2620(arg1, arg3)
    *arg2 = result.d
    arg2[1].b = 0
    
    if (*(arg1 + 0x28) == 0)
        if (*(arg1 + 0x29) != 0)
            *(arg1 + 0x29) = 0x100
            break
        
        if ((*(arg1 + 0x124) & 4) != 0 && result.d != 0xffffffff)
            do
                if (*arg2 == 0x23 && *(arg1 + 0x2a) == 1)
                    int32_t rax_5 = sub_142af2620(arg1, arg3)
                    *arg2 = rax_5
                    
                    if (rax_5 != 0xffffffff)
                        int32_t i
                        
                        do
                            int32_t rax_6 = *arg2
                            
                            if (rax_6 == 0xd)
                                break
                            
                            if (rax_6 == 0xa)
                                break
                            
                            if (rax_6 == 0x85)
                                break
                            
                            if (rax_6 == 0x2028)
                                break
                            
                            i = sub_142af2620(arg1, arg3)
                            *arg2 = i
                        while (i != 0xffffffff)
                
                result = sub_142b13730(*arg2)
                
                if (result.b == 0)
                    break
                
                result = sub_142af2620(arg1, arg3)
                *arg2 = result.d
            while (result.d != 0xffffffff)
        
        if (*arg2 == 0x5c)
            void* rcx_8 = *(*(arg1 + 0x10) + 8)
            int64_t rax_8 = sx.q(*(rcx_8 + 0x28))
            int64_t rbp_2
            
            if (rax_8.d s> *(rcx_8 + 0x1c))
                rbp_2 = (*(*(rcx_8 + 0x38) + 0x40))()
            else
                rbp_2 = rax_8 + *(rcx_8 + 0x20)
            
            if (*(arg1 + 0x44) == 0xffffffff)
                *(arg1 + 0x44) = sub_142af2620(arg1, arg3)
            
            char rax_12
            rax_12, arg3 = sub_142a9f280(data_144016850 + 0x9d8, zx.q(*(arg1 + 0x44)))
            
            if (rax_12 != 0)
                sub_142af2620(arg1, arg3)
                arg2[1].b = 1
                void* rcx_24 = *(*(arg1 + 0x10) + 8)
                int64_t r8_1 = *(rcx_24 + 0x20)
                int64_t rdx_1
                
                if (r8_1 == 0)
                    rdx_1 = *(arg1 + 0x170)
                
                int32_t result_1
                
                if (r8_1 != 0 || rdx_1 != *(rcx_24 + 0x10) || rdx_1 != sx.q(*(rcx_24 + 0x1c)))
                    void* var_18 = rcx_24
                    result_1 = 0
                    int64_t rdx_7 = rbp_2 - r8_1
                    int32_t var_10_1 = 0xffffffff
                    
                    if (rbp_2 - r8_1 s< 0 || rdx_7 s>= sx.q(*(rcx_24 + 0x1c))
                            || *(*(rcx_24 + 0x30) + (rdx_7 << 1)) u>= 0xdc00)
                        sub_142aeacd0(rcx_24, rbp_2)
                    else
                        *(rcx_24 + 0x28) = rdx_7.d
                    
                    int32_t rax_24
                    int512_t zmm0
                    rax_24, zmm0 =
                        sub_142a8c490(sub_142af4c20, &result_1, 0x7fffffff, &var_18, arg3)
                    int32_t result_2 = result_1
                    *arg2 = rax_24
                    
                    if (result_2 == 0)
                        sub_142af0120(arg1, 0x10303)
                        result = sx.q(result_1)
                        *(arg1 + 0x38) += result
                        *(arg1 + 0x2a) = 1
                    else if (var_10_1 != result_2)
                        if (var_10_1 != result_2 - 1)
                            sub_142aea770(*(*(arg1 + 0x10) + 8), result_2 - var_10_1 - 1, zmm0)
                            result_2 = result_1
                        
                        result = sx.q(result_2)
                        *(arg1 + 0x38) += result
                        *(arg1 + 0x2a) = 1
                    else
                        void* rdx_11 = *(*(arg1 + 0x10) + 8)
                        int32_t rax_26 = *(rdx_11 + 0x28)
                        
                        if (rax_26 s<= 0
                                || *(*(rdx_11 + 0x30) + (sx.q(rax_26 - 1) << 1)) u>= 0xd800)
                            sub_142aeabf0(rdx_11)
                            result = sx.q(result_1)
                            *(arg1 + 0x38) += result
                            *(arg1 + 0x2a) = 1
                        else
                            *(rdx_11 + 0x28) = rax_26 - 1
                            result = sx.q(result_1)
                            *(arg1 + 0x38) += result
                            *(arg1 + 0x2a) = 1
                else
                    result_1 = rbp_2.d
                    int32_t rax_17 =
                        sub_142a8c490(sub_142af4c10, &result_1, rdx_1.d, *(rcx_24 + 0x30), arg3)
                    int64_t result_3 = sx.q(result_1)
                    *arg2 = rax_17
                    
                    if (result_3 == rbp_2)
                        sub_142af0120(arg1, 0x10303)
                        result_3 = zx.q(result_1)
                    
                    int64_t r9_2 = sx.q(result_3.d)
                    *(arg1 + 0x38) += r9_2 - rbp_2
                    void* rcx_26 = *(*(arg1 + 0x10) + 8)
                    int64_t rdx_4 = r9_2 - *(rcx_26 + 0x20)
                    
                    if (r9_2 - *(rcx_26 + 0x20) s>= 0 && rdx_4 s< sx.q(*(rcx_26 + 0x1c)))
                        result = *(rcx_26 + 0x30)
                    
                    if (r9_2 - *(rcx_26 + 0x20) s< 0 || rdx_4 s>= sx.q(*(rcx_26 + 0x1c))
                            || *(result + (rdx_4 << 1)) u>= 0xdc00)
                        result = sub_142aeacd0(rcx_26, r9_2)
                        *(arg1 + 0x2a) = 1
                    else
                        *(rcx_26 + 0x28) = rdx_4.d
                        *(arg1 + 0x2a) = 1
                break
            
            if (*(arg1 + 0x44) == 0xffffffff)
                *(arg1 + 0x44) = sub_142af2620(arg1, arg3)
            
            result = zx.q(*(arg1 + 0x44))
            
            if (result.d == 0x30)
                int32_t rsi_1 = 0
                *arg2 = 0
                sub_142af2620(arg1, arg3)
                
                while (true)
                    if (*(arg1 + 0x44) == 0xffffffff)
                        *(arg1 + 0x44) = sub_142af2620(arg1, arg3)
                    
                    int32_t rcx_17 = *(arg1 + 0x44)
                    result = zx.q(rcx_17 - 0x30)
                    
                    if (result.d u> 7)
                        if (rsi_1 == 0)
                            result = sub_142af0120(arg1, 0x10303)
                        
                        arg2[1].b = 1
                        break
                    
                    result = zx.q(*arg2)
                    int32_t rcx_19 = (rcx_17 & 7) + (result << 3).d
                    *arg2 = rcx_19
                    
                    if (rcx_19 s> 0xff)
                        *arg2 = rcx_19 s>> 3
                    else
                        result = sub_142af2620(arg1, arg3)
                    
                    rsi_1 += 1
                    
                    if (rsi_1 s>= 3)
                        arg2[1].b = 1
                        *(arg1 + 0x2a) = 1
                        goto label_142af261b
            else
                if (result.d == 0xffffffff)
                    result = sub_142af2620(arg1, arg3)
                    *(arg1 + 0x44) = result.d
                
                if (*(arg1 + 0x44) != 0x51)
                    *(arg1 + 0x29) = 0x101
                    break
                
                *(arg1 + 0x28) = 1
                sub_142af2620(arg1, arg3)
                continue
    else
        arg2[1].b = 1
        
        if (result.d != 0x5c)
        label_142af226f:
            
            if (*arg2 == 0xffffffff)
            label_142af227b:
                *(arg1 + 0x28) = 0
                sub_142af2620(arg1, arg3)
                continue
        else
            if (*(arg1 + 0x44) == 0xffffffff)
                result = sub_142af2620(arg1, arg3)
                *(arg1 + 0x44) = result.d
            
            if (*(arg1 + 0x44) != 0x45)
                goto label_142af226f
            
            if ((*(arg1 + 0x124) & 0x10) == 0 || *arg2 == 0xffffffff)
                goto label_142af227b
    
    *(arg1 + 0x2a) = 1
    break

label_142af261b:
return result
