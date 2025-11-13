// 函数: sub_142b95700
// 地址: 0x142b95700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rax_2 = arg2[4]
uint64_t rdi = zx.q(arg3)
int32_t result

if (rax_2 != 0)
    if (rax_2(arg2, zx.q(rdi.d), 0, 0) == 0)
        goto label_142b95755
    
    result = 0x55
else if (rdi.d u> arg2[1].d)
    result = 0x55
else
label_142b95755:
    int32_t rsi_1 = arg2[1].d
    *(arg2 + 0xc) = rdi.d
    
    if (rdi.d u< rsi_1)
        int64_t rax_4 = arg2[4]
        char var_60
        uint32_t count
        
        if (rax_4 == 0)
            count = rsi_1 - rdi.d
            
            if (count u> 0x10)
                count = 0x10
            
            memcpy(&var_60, rdi + *arg2, count)
        else
            count = rax_4(arg2, zx.q(rdi.d), &var_60, 0x10)
        
        int32_t rax_6 = count + rdi.d
        *(arg2 + 0xc) = rax_6
        result = sbb.d(rax_6, rax_6, count u< 0x10) & 0x55
        
        if (result == 0)
            char rax_8 = var_60
            char var_5c
            char var_58
            char var_54
            
            if (rax_8 u>= 0x80 || var_5c u>= 0x80 || var_58 u>= 0x80 || var_54 u>= 0x80)
                result = 2
            else
                char var_5f
                char var_5e
                char var_5d
                uint32_t rcx_11 =
                    ((zx.d(rax_8) << 8 | zx.d(var_5f)) << 8 | zx.d(var_5e)) << 8 | zx.d(var_5d)
                *arg6 = rcx_11
                char var_5b
                char var_5a
                char var_59
                uint32_t rsi_8 =
                    ((zx.d(var_5c) << 8 | zx.d(var_5b)) << 8 | zx.d(var_5a)) << 8 | zx.d(var_59)
                char var_57
                char var_56
                char var_55
                uint32_t r8_9 =
                    ((zx.d(var_58) << 8 | zx.d(var_57)) << 8 | zx.d(var_56)) << 8 | zx.d(var_55)
                char var_53
                char var_52
                char var_51
                uint32_t r9_7 =
                    ((zx.d(var_54) << 8 | zx.d(var_53)) << 8 | zx.d(var_52)) << 8 | zx.d(var_51)
                
                if (rsi_8 == 0)
                    result = 2
                else if (rcx_11 s< rsi_8)
                    if (rcx_11 s<= rsi_8 - r8_9 && 0x7fffffff - r8_9 s>= rcx_11
                            && 0x7fffffff - r9_7 s>= rsi_8 && 0x7fffffff - r8_9 - rcx_11 s>= rdi.d
                            && 0x7fffffff - r9_7 - rsi_8 s>= rdi.d)
                        goto label_142b958dc
                    
                    result = 2
                else if (rsi_8 s> rcx_11 - r9_7 || 0x7fffffff - r8_9 s< rcx_11
                        || 0x7fffffff - r9_7 s< rsi_8 || 0x7fffffff - r8_9 - rcx_11 s< rdi.d
                        || 0x7fffffff - r9_7 - rsi_8 s< rdi.d)
                    result = 2
                else
                label_142b958dc:
                    int32_t rdx_7 = arg2[1].d
                    
                    if (rcx_11 + rdi.d + r8_9 u> rdx_7 || rdi.d + r9_7 + rsi_8 u> rdx_7)
                        result = 2
                    else
                        int32_t rsi_9 = rsi_8 + rdi.d
                        *arg6 = rcx_11 + rdi.d
                        result = sub_142b97060(arg2, rsi_9, arg5)
                        
                        if (result == 0)
                            uint64_t r14_1 = zx.q(*(arg2 + 0xc))
                            int32_t rdi_1 = arg2[1].d
                            char var_41_1 = var_51 + 1
                            
                            if (r14_1.d u>= rdi_1)
                                result = 0x55
                            else
                                int64_t rax_33 = arg2[4]
                                char var_50[0xf]
                                uint32_t count_1
                                
                                if (rax_33 == 0)
                                    count_1 = rdi_1 - r14_1.d
                                    
                                    if (count_1 u> 0x10)
                                        count_1 = 0x10
                                    
                                    memcpy(&var_50, r14_1 + *arg2, count_1)
                                else
                                    count_1 = rax_33(arg2, zx.q(r14_1.d), &var_50, 0x10)
                                
                                int32_t rax_35 = count_1 + r14_1.d
                                *(arg2 + 0xc) = rax_35
                                result = sbb.d(rax_35, rax_35, count_1 u< 0x10) & 0x55
                                
                                if (result == 0)
                                    int32_t r9_8 = 1
                                    int64_t i = 0
                                    int32_t r10_1 = 1
                                    int32_t rax_38
                                    
                                    do
                                        char rdx_12 = var_50[i]
                                        int32_t rax_37 = 0
                                        char rcx_15 = (&var_60)[i]
                                        i += 1
                                        
                                        if (rdx_12 == 0)
                                            rax_37 = r9_8
                                        
                                        r9_8 = rax_37
                                        rax_38 = 0
                                        
                                        if (rdx_12 == rcx_15)
                                            rax_38 = r10_1
                                        
                                        r10_1 = rax_38
                                    while (i s< 0x10)
                                    
                                    if (r9_8 != 0 || rax_38 != 0)
                                        int32_t result_1 = sub_142b970b0(arg2, 8)
                                        int32_t rcx_18 = sx.d(sub_142b96f00(arg2, &result_1))
                                        result = result_1
                                        
                                        if (result == 0)
                                            if (rcx_18 s< 0)
                                                result = 2
                                            else
                                                int32_t rdi_2 = rcx_18 + rsi_9
                                                result = sub_142b97060(arg2, rdi_2, arg5)
                                                
                                                if (result == 0)
                                                    *arg4 = rdi_2
                                    else
                                        result = 2
    else
        result = 0x55

__security_check_cookie(rax_1 ^ &var_88)
return result
