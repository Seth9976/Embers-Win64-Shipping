// 函数: sub_140a8d860
// 地址: 0x140a8d860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg7 = 0
*arg8 = 0
*arg9 = 0

if (**arg1 == 0)
    int16_t* rax_1
    rax_1.b = 1
    return rax_1

if (sub_140a84510(arg1, arg7, sub_140a7b8a0(arg4), 0).b != 0)
label_140a8d9d4:
    
    if ((*arg5 & 1) != 0)
    label_140a8d9df:
        int16_t* rcx_16 = *arg1
        int64_t r14
        r14.b = 1
        
        if (rcx_16 u< arg2)
            while (true)
                int16_t rdx_8 = *rcx_16
                
                if (rdx_8 == *(arg3 + 0x72))
                    break
                
                if (rdx_8 != *(arg3 + 0x70))
                    int32_t r8_8 = 0
                    void* const rcx_17 = u"0123456789"
                    
                    while (true)
                        if (rdx_8 != *(arg3 - 0x142e624c2 + rcx_17) && rdx_8 != *rcx_17)
                            r8_8 += 1
                            rcx_17 += 2
                            
                            if (r8_8 u< 0xa)
                                continue
                            
                            rcx_16 = *arg1
                            r14.b = 0
                            break
                        
                        rcx_16 = *arg1 + 2
                        *arg1 = rcx_16
                        
                        if (arg6 == 0 || zx.d(*arg9) s< *arg6)
                            *arg9 += 1
                            *arg8 = sx.q(r8_8) + *arg8 * 0xa
                            rcx_16 = *arg1
                        
                        goto label_140a8da8e
                    
                    break
                
                if ((*arg5 & 8) == 0)
                    goto label_140a8dbcf
                
                rcx_16 = &rcx_16[1]
                *arg1 = rcx_16
            label_140a8da8e:
                
                if (rcx_16 u>= arg2)
                    r14.b = 1
                    break
        
        if (*rcx_16 != *(arg3 + 0x72))
            goto label_140a8dac9
        
        if ((*arg5 & 4) != 0)
            *arg1 = &rcx_16[1]
        label_140a8dac9:
            
            if (sub_140a84510(arg1, arg7, sub_140a7b930(arg4), 0).b == 0
                    && sub_140a84510(arg1, arg7, sub_140a7b010(arg4), 1).b == 0
                    && sub_140a84510(arg1, arg7, sub_140a7b930(&arg4[0xc]), 0).b == 0
                    && sub_140a84510(arg1, arg7, sub_140a7b010(&arg4[0xc]), 1).b == 0
                    && sub_140a84510(arg1, arg7, sub_140a7b930(&arg4[0x18]), 0).b == 0
                    && sub_140a84510(arg1, arg7, sub_140a7b010(&arg4[0x18]), 1).b == 0
                    && sub_140a84510(arg1, arg7, sub_140a7b930(&arg4[0x24]), 0).b == 0
                    && sub_140a84510(arg1, arg7, sub_140a7b010(&arg4[0x24]), 1).b == 0)
                return zx.q(r14.b)
            
            r14.b = 1
            
            if ((*arg5 & 2) != 0)
                return zx.q(r14.b)
else
    if (sub_140a84510(arg1, arg7, sub_140a7af80(arg4), 1).b != 0)
        goto label_140a8d9d4
    
    if (sub_140a84510(arg1, arg7, sub_140a7b8a0(&arg4[0xc]), 0).b != 0)
        goto label_140a8d9d4
    
    if (sub_140a84510(arg1, arg7, sub_140a7af80(&arg4[0xc]), 1).b != 0)
        goto label_140a8d9d4
    
    if (sub_140a84510(arg1, arg7, sub_140a7b8a0(&arg4[0x18]), 0).b != 0)
        goto label_140a8d9d4
    
    if (sub_140a84510(arg1, arg7, sub_140a7af80(&arg4[0x18]), 1).b != 0)
        goto label_140a8d9d4
    
    if (sub_140a84510(arg1, arg7, sub_140a7b8a0(&arg4[0x24]), 0).b != 0)
        goto label_140a8d9d4
    
    if (sub_140a84510(arg1, arg7, sub_140a7af80(&arg4[0x24]), 1).b == 0 || (*arg5 & 1) != 0)
        goto label_140a8d9df

label_140a8dbcf:
uint64_t rax_3
rax_3.b = 0
return rax_3
