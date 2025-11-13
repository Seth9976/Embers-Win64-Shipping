// 函数: sub_142b766f0
// 地址: 0x142b766f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = arg7

if (*r14 s<= 0)
    if (arg4 s<= 0x7fff)
        arg7.d = *(arg1 + 0x60)
        sub_142b74dc0(arg1, 0, arg2, arg3.w, arg4.w, r14)
        int32_t rbx_1 = arg2 + arg3
        
        if (*r14 s<= 0)
            int16_t r15_1 = 0
            
            while (true)
                int16_t rax_2 = *(arg1 + 0x18)
                int32_t rsi_1 = rbx_1
                int32_t r9_1 = rbx_1
                int32_t rdx = rbx_1
                int32_t r8_1 = rbx_1
                int32_t rax_4
                
                if (rax_2 s< 0)
                    rax_4 = *(arg1 + 0x1c)
                else
                    rax_4 = sx.d(rax_2) s>> 5
                
                if (rbx_1 s>= rax_4)
                    if (arg4 s> 0 && (arg4 != 1 || arg5 != 2 || ***(arg1 + 0x50) == 0))
                        sub_142b77300(arg1, arg6, 0)
                        *r14 = 0x10109
                        break
                    
                    *(**(arg1 + 0x50) + sx.q(arg7.d) * 0x10 + 0xc) = *(arg1 + 0x60)
                    int32_t r8_8 = *(arg1 + 0x60)
                    int64_t* rcx_21 = *(arg1 + 0x50)
                    
                    if (*r14 s<= 0)
                        if (rcx_21[1].d s<= r8_8 && sub_142b77260(rcx_21, r8_8 * 2, r8_8) == 0)
                            *r14 = 7
                            return zx.q(rbx_1)
                        
                        int64_t rax_30 = sx.q(*(arg1 + 0x60))
                        *(arg1 + 0x60) = rax_30.d + 1
                        int32_t* rcx_24 = (rax_30 << 4) + **(arg1 + 0x50)
                        *rcx_24 = 1
                        rcx_24[1] = rbx_1
                        rcx_24[2].w = 0
                        *(rcx_24 + 0xa) = arg4.w
                        rcx_24[3] = 0
                    
                    return zx.q(rbx_1)
                
                int16_t rcx = *(arg1 + 0x18)
                int32_t rax_6
                
                if (rcx s< 0)
                    rax_6 = *(arg1 + 0x1c)
                else
                    rax_6 = sx.d(rcx) s>> 5
                
                int16_t rcx_2
                
                if (rbx_1 u>= rax_6)
                    rcx_2 = -1
                else
                    void* rcx_1 = arg1 + 0x1a
                    
                    if ((rcx.b & 2) == 0)
                        rcx_1 = *(arg1 + 0x28)
                    
                    rcx_2 = *(rcx_1 + (sx.q(rbx_1) << 1))
                
                rbx_1 += 1
                int32_t var_48
                
                if (rcx_2 == 0x27)
                    int16_t rax_8 = *(arg1 + 0x18)
                    int32_t rax_10
                    
                    if (rax_8 s< 0)
                        rax_10 = *(arg1 + 0x1c)
                    else
                        rax_10 = sx.d(rax_8) s>> 5
                    
                    if (rbx_1 == rax_10)
                    label_142b76994:
                        var_48 = 0x27
                        sub_142b74dc0(arg1, 3, rbx_1, 0, 0x27, r14)
                        *(arg1 + 0x7e) = 1
                    else
                        int16_t rcx_3 = *(arg1 + 0x18)
                        int32_t rax_12
                        
                        if (rcx_3 s< 0)
                            rax_12 = *(arg1 + 0x1c)
                        else
                            rax_12 = sx.d(rcx_3) s>> 5
                        
                        int16_t rcx_5
                        
                        if (rbx_1 u>= rax_12)
                            rcx_5 = -1
                        label_142b76880:
                            
                            if (*(arg1 + 8) != 1 && (0xfffd & (rcx_5 - 0x7b)) != 0)
                                bool cond:3_1
                                
                                if (arg5 != 2)
                                    if (((arg5 - 3) & 0xfffffffd) != 0)
                                        goto label_142b76994
                                    
                                    cond:3_1 = rcx_5 != 0x23
                                else
                                    cond:3_1 = rcx_5 != 0x7c
                                
                                if (cond:3_1)
                                    goto label_142b76994
                            
                            sub_142b74dc0(arg1, 2, r8_1, 1, 0, r14)
                            int32_t rax_16 = sub_142b342c0(arg1 + 0x10, 0x27, rbx_1 + 1)
                            int32_t rbx_2 = rax_16
                            
                            if (rax_16 s< 0)
                            label_142b76949:
                                int16_t rax_21 = *(arg1 + 0x18)
                                
                                if (rax_21 s< 0)
                                    rbx_1 = *(arg1 + 0x1c)
                                else
                                    rbx_1 = sx.d(rax_21) s>> 5
                                
                                goto label_142b76994
                            
                            while (true)
                                int16_t rcx_9 = *(arg1 + 0x18)
                                int32_t rax_18
                                
                                if (rcx_9 s< 0)
                                    rax_18 = *(arg1 + 0x1c)
                                else
                                    rax_18 = sx.d(rcx_9) s>> 5
                                
                                if (rbx_2 + 1 u< rax_18)
                                    void* rcx_10 = arg1 + 0x1a
                                    
                                    if ((rcx_9.b & 2) == 0)
                                        rcx_10 = *(arg1 + 0x28)
                                    
                                    if (*(rcx_10 + (sx.q(rbx_2 + 1) << 1)) == 0x27)
                                        sub_142b74dc0(arg1, 2, rbx_2 + 1, 1, 0, r14)
                                        int32_t rax_20 = sub_142b342c0(arg1 + 0x10, 0x27, rbx_2 + 2)
                                        rbx_2 = rax_20
                                        
                                        if (rax_20 s< 0)
                                            goto label_142b76949
                                        
                                        continue
                                
                                var_48 = 0
                                sub_142b74dc0(arg1, 2, rbx_2, 1, 0, r14)
                                rbx_1 = rbx_2 + 1
                                break
                        else
                            void* rcx_4 = arg1 + 0x1a
                            
                            if ((rcx_3.b & 2) == 0)
                                rcx_4 = *(arg1 + 0x28)
                            
                            rcx_5 = *(rcx_4 + (sx.q(rbx_1) << 1))
                            
                            if (rcx_5 != 0x27)
                                goto label_142b76880
                            
                            var_48 = 0
                            sub_142b74dc0(arg1, 2, rbx_1, 1, 0, r14)
                            rbx_1 += 1
                else if (((arg5 - 3) & 0xfffffffd) == 0 && rcx_2 == 0x23)
                    var_48 = 0
                    sub_142b74dc0(arg1, 4, r8_1, 1, 0, r14)
                else if (rcx_2 != 0x7b)
                    if (arg4 s> 0 && rcx_2 == 0x7d)
                        if (arg5 == 2)
                            goto label_142b76a84
                        
                    label_142b76a69:
                        r15_1 = 1
                    label_142b76a84:
                        int32_t* var_40
                        var_40.d = arg4
                        sub_142b74d10(arg1, arg7.d, 1, r9_1, r15_1, var_40.w, r14)
                        
                        if (arg5 == 2)
                            rbx_1 = rsi_1
                        
                        return zx.q(rbx_1)
                    
                    if (arg5 == 2 && rcx_2 == 0x7c)
                        if (rcx_2 == 0x7d)
                            goto label_142b76a84
                        
                        goto label_142b76a69
                else
                    var_48.q = arg6
                    rbx_1 = sub_142b75bf0(arg1, rdx, 1, arg4, var_48, r14)
                
                if (*r14 s> 0)
                    break
        
        return 0
    
    *r14 = 8

return 0
