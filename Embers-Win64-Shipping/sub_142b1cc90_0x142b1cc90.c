// 函数: sub_142b1cc90
// 地址: 0x142b1cc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char* result_1 = arg2
char var_58 = arg4
char* result

if (*arg7 s<= 0)
    bool cond:1_1 = arg2 u>= arg3
    
    while (true)
        if (not(cond:1_1))
            uint32_t rax_2 = zx.d(*result_1)
            char* result_2 = result_1
            result_1 = &result_1[1]
            
            if (rax_2.b s< 0)
                if (result_1 == arg3)
                    rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                else if (rax_2 u< 0xe0)
                    if (rax_2 u< 0xc2)
                        rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                    else
                        char rdx_5 = *result_1 - 0x80
                        
                        if (rdx_5 u> 0x3f)
                            rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                        else
                            rax_2 =
                                zx.d(*(**(arg1 + 0x20) + ((zx.q(rax_2) & 0x1f) << 1))) + zx.d(rdx_5)
                            result_1 = &result_1[1]
                else if (rax_2 u< 0xf0)
                    uint32_t r9 = zx.d(*result_1)
                    uint64_t rax_3 = zx.q(rax_2) & 0xf
                    
                    if (not(test_bit(sx.d((*" 000000000000")[rax_3]), zx.d((r9 u>> 5).b))))
                        arg4 = var_58
                        rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                    else
                        result_1 = &result_1[1]
                        
                        if (result_1 == arg3)
                            arg4 = var_58
                            rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                        else
                            char r8_2 = *result_1 - 0x80
                            
                            if (r8_2 u> 0x3f)
                                arg4 = var_58
                                rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                            else
                                arg4 = var_58
                                rax_2 = zx.d(
                                    *(**(arg1 + 0x20) + (zx.q((r9 & 0x3f) + (rax_3.d << 6)) << 1)))
                                    + zx.d(r8_2)
                                result_1 = &result_1[1]
                else if (rax_2 - 0xf0 s> 4)
                    rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                else
                    uint32_t rdx_1 = zx.d(*result_1)
                    
                    if (not(test_bit(sx.d(*((zx.q(rdx_1) u>> 4) + 0x14363c6e8)), rax_2 - 0xf0)))
                        rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                    else
                        result_1 = &result_1[1]
                        int32_t rdx_4 = (zx.d(rdx_1.b) & 0x3f) | (rax_2 - 0xf0) << 6
                        
                        if (result_1 == arg3)
                            rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                        else
                            char r8_3 = *result_1 - 0x80
                            
                            if (r8_3 u> 0x3f)
                                rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                            else
                                result_1 = &result_1[1]
                                
                                if (result_1 == arg3)
                                    rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                                else
                                    char r9_3 = *result_1 - 0x80
                                    
                                    if (r9_3 u> 0x3f)
                                        arg4 = var_58
                                        rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
                                    else
                                        int64_t* rcx_8 = *(arg1 + 0x20)
                                        
                                        if (rdx_4 s< zx.d(*(rcx_8 + 0x1c)))
                                            rax_2 = sub_142b6a810(rcx_8, rdx_4, r8_3, r9_3)
                                            arg4 = var_58
                                            result_1 = &result_1[1]
                                        else
                                            arg4 = var_58
                                            rax_2 = *(rcx_8 + 0x14) - 2
                                            result_1 = &result_1[1]
            
            int32_t rsi_1 = -1
            uint16_t rbp_1 = *(*(*(arg1 + 0x20) + 8) + (sx.q(rax_2) << 1))
            
            if (rbp_1 u>= *(arg1 + 0x1a))
                if (rbp_1 u>= *(arg1 + 0x1e))
                    int32_t rax_16 = sub_142b1a160(result_2, result_1)
                    char rcx_12
                    
                    if (rbp_1 u< 0xfc00)
                        rcx_12 = 0
                    else
                        rcx_12 = (rbp_1 u>> 1).b
                    
                    int32_t* r9_4 = arg7
                    char rax_17
                    
                    if (rax_16 s> 0xffff)
                        rax_17 = sub_142b19f70(arg6, rax_16, rcx_12, r9_4)
                    else
                        rax_17 = sub_142b19db0(arg6, rax_16.w, rcx_12, r9_4)
                    
                    if (rax_17 != 0)
                        arg4 = var_58
                        cond:1_1 = result_1 u>= arg3
                        continue
                    
                    result = nullptr
                    break
                    break
                
                if (arg4 != 0)
                    result = result_2
                    break
                    break
                
                int32_t rax_18 = sub_142b1a160(result_2, result_1)
                rsi_1 = (zx.d(rbp_1) u>> 3) - zx.d(*(arg1 + 0x1c)) + rax_18
                
                if (rsi_1 u<= 0xffff)
                    rbp_1 = *(*(*(arg1 + 0x20) + 8) + (
                        sx.q(zx.d(*(**(arg1 + 0x20) + (sx.q(rsi_1) s>> 6 << 1))) + (rsi_1 & 0x3f))
                        << 1))
                else if (rsi_1 u> 0x10ffff)
                    void* rax_25 = *(arg1 + 0x20)
                    rbp_1 = *(*(rax_25 + 8) + (sx.q(*(rax_25 + 0x14) - 1) << 1))
                else
                    int64_t* rcx_20 = *(arg1 + 0x20)
                    
                    if (rsi_1 s< rcx_20[3].d)
                        int64_t rdx_15 = sx.q(sub_142b6a760(rcx_20, rsi_1))
                        rbp_1 = *(*(*(arg1 + 0x20) + 8) + (rdx_15 << 1))
                    else
                        rbp_1 = *(*(*(arg1 + 0x20) + 8) + (sx.q(*(rcx_20 + 0x14) - 2) << 1))
            else if (arg4 != 0 && rbp_1 u< *(arg1 + 0x16))
                result = result_2
                break
                break
            
            int16_t rax_26 = *(arg1 + 0xe)
            
            if (rbp_1 u< rax_26)
                if (rsi_1 s< 0)
                    rsi_1 = sub_142b1a160(result_2, result_1)
                
                if (rsi_1 s> 0xffff)
                    if (arg6[5].d s< 2 && sub_142b1fbc0(arg6, 2, arg7) == 0)
                        result = nullptr
                        break
                        break
                    
                    *arg6[4] = (rsi_1 s>> 0xa).w - 0x2840
                    rsi_1.w &= 0x3ff
                    rsi_1.w |= 0xdc00
                    *(arg6[4] + 2) = rsi_1.w
                    arg6[4] += 4
                    arg6[5].d -= 2
                    arg6[3] = arg6[4]
                    *(arg6 + 0x2c) = 0
                else
                    if (arg6[5].d == 0 && sub_142b1fbc0(arg6, 1, arg7) == 0)
                        result = nullptr
                        break
                        break
                    
                    *arg6[4] = rsi_1.w
                    arg6[4] += 2
                    arg6[5].d -= 1
                    arg6[3] = arg6[4]
                    *(arg6 + 0x2c) = 0
            else if (rbp_1 == rax_26 || rbp_1 == (*(arg1 + 0x10) | 1))
                if (rsi_1 s< 0)
                    rsi_1 = sub_142b1a160(result_2, result_1)
                
                int32_t r8_15 = (rsi_1 - 0xac00) s/ 0x1c
                int32_t rsi_6 = (rsi_1 - 0xac00) s% 0x1c
                int16_t rdx_24 = (r8_15 s/ 0x15).w
                int16_t var_54 = 0x1100 + rdx_24
                r8_15.w -= rdx_24 * 0x15
                r8_15.w += 0x1161
                int16_t var_52_1 = r8_15.w
                int64_t rsi_7
                
                if (rsi_6 != 0)
                    rsi_6.w += 0x11a7
                    int16_t var_50_1 = rsi_6.w
                    rsi_7 = 6
                else
                    rsi_7 = 4
                
                if (&var_54 != &var_54 + rsi_7)
                    uint32_t rsi_8 = (rsi_7 u>> 1).d
                    
                    if (arg6[5].d s< rsi_8 && sub_142b1fbc0(arg6, rsi_8, arg7) == 0)
                        result = nullptr
                        break
                        break
                    
                    sub_142a8bca0(arg6[4], &var_54, rsi_8)
                    arg6[4] += sx.q(rsi_8) * 2
                    arg6[5].d -= rsi_8
                    arg6[3] = arg6[4]
                    *(arg6 + 0x2c) = 0
            else
                int64_t rax_34 = *(arg1 + 0x30)
                uint64_t rcx_34 = zx.q(rbp_1) u>> 1
                void* rdx_18 = rax_34 + (rcx_34 << 1)
                uint32_t rax_35 = zx.d(*(rax_34 + (rcx_34 << 1)))
                int32_t r8_12 = rax_35 & 0x1f
                uint16_t rcx_35 = rax_35.w u>> 8
                
                if (rax_35.b s>= 0)
                    rax_35.b = 0
                else
                    rax_35 = zx.d(*(rdx_18 - 1))
                
                if (sub_142b19b80(arg6, rdx_18 + 2, r8_12, 1, rax_35.b, rcx_35.b, arg7) == 0)
                    result = nullptr
                    break
                    break
            
            arg4 = var_58
            
            if (arg4 == 0 || (rbp_1.b & 1) == 0)
                cond:1_1 = result_1 u>= arg3
                continue
            else if (arg5 != 0 && rbp_1 != 1)
                bool cond:2_1
                
                if (rbp_1 u< *(arg1 + 0x1a))
                    cond:2_1 = *(*(arg1 + 0x30) + (zx.q(rbp_1) u>> 1 << 1)) u<= 0x1ff
                else
                    rbp_1.b &= 6
                    cond:2_1 = rbp_1.b u<= 2
                
                int32_t rdx_27
                rdx_27.b = cond:2_1
                
                if (rdx_27 == 0)
                    cond:1_1 = result_1 u>= arg3
                    continue
        
        result = result_1
        break
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_98)
return result
