// 函数: sub_142859ae0
// 地址: 0x142859ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc8)
char i = *arg1
int32_t rbp = 1
int32_t arg_8 = 0
void** r11 = arg4
int32_t var_74 = 1
char* _Str1_2 = arg1

if (i == 0)
    return 1

do
    int32_t var_6c_1
    int32_t r10_1
    
    if (i != 0x2d)
        if (i == 0x2b)
            _Str1_2 = &_Str1_2[1]
            r10_1 = 4
            goto label_142859b74
        
        if (i == 0x21)
            _Str1_2 = &_Str1_2[1]
            r10_1 = 2
            goto label_142859b74
        
        if (i == 0x40)
            _Str1_2 = &_Str1_2[1]
            r10_1 = 5
            goto label_142859b74
        
        r10_1 = 1
        var_6c_1 = 1
        
        if (i u> 0x3b || not(test_bit(0xc00100100000000, sx.q(i))))
            goto label_142859b79
        
        i = _Str1_2[1]
        _Str1_2 = &_Str1_2[1]
    else
        _Str1_2 = &_Str1_2[1]
        r10_1 = 3
    label_142859b74:
        var_6c_1 = r10_1
    label_142859b79:
        int32_t rdi_1 = 0
        int32_t var_68_1 = 0
        int32_t var_5c_1 = 0
        int32_t rdx = 0
        int32_t var_60_1 = 0
        int32_t rsi_1 = 0
        int32_t var_64_1 = 0
        int32_t var_70_1 = 0
        int32_t var_78_1 = 0
    label_142859bb0:
        int32_t r12_1 = 0
        char* _Str1_1 = _Str1_2
        int64_t rbp_1 = 0
        char* _Str1 = _Str1_2
        char r15_1
        
        while (true)
            r15_1 = *_Str1_2
            
            if ((r15_1 - 0x2d u> 0x2d || not(test_bit(0x3ffffff11ffb, sx.q(r15_1 - 0x2d))))
                    && r15_1 - 0x61 u> 0x19)
                break
            
            _Str1_2 = &_Str1_2[1]
            r12_1 += 1
            rbp_1 += 1
        
        int32_t r13_1
        int32_t r14_1
        
        if (r12_1 != 0)
            if (r10_1 == 5)
                goto label_142859d24
            
            char* _Str1_3 = &_Str1_2[1]
            
            if (r15_1 != 0x2b)
                _Str1_3 = _Str1_2
            
            r14_1 = 0
            _Str1_2 = _Str1_3
            arg_8 = 0
            void* rax_3 = *r11
            r13_1 = 0
            int64_t rsi_2 = 0
            
            if (rax_3 != 0)
                void** rdi_2 = r11
                
                while (true)
                    if (strncmp(_Str1, *(rax_3 + 8), sx.q(r12_1)) == 0
                            && (*(*rdi_2 + 8))[rbp_1] == 0)
                        r11 = arg4
                        r13_1 = 1
                        rdi_1 = var_68_1
                        int32_t* rdx_2 = r11[rsi_2]
                        int32_t rax_6 = rdx_2[7]
                        
                        if (rax_6 == 0)
                            goto label_142859d6a
                        
                        if (rdi_1 == 0)
                            rdi_1 = rax_6
                            var_68_1 = rax_6
                        label_142859d6a:
                            int32_t rax_10 = rdx_2[8]
                            
                            if (rax_10 == 0)
                                goto label_142859d8f
                            
                            if (var_5c_1 == 0)
                                var_5c_1 = rax_10
                            label_142859d8f:
                                int32_t rax_11 = rdx_2[9]
                                
                                if (rax_11 == 0)
                                    goto label_142859db4
                                
                                if (var_60_1 == 0)
                                    var_60_1 = rax_11
                                label_142859db4:
                                    int32_t rax_12 = rdx_2[0xa]
                                    
                                    if (rax_12 == 0)
                                        goto label_142859dd9
                                    
                                    if (var_64_1 == 0)
                                        var_64_1 = rax_12
                                    label_142859dd9:
                                        int32_t rcx_3 = rdx_2[0xf]
                                        rsi_1 = var_70_1
                                        int32_t rax_14 = rcx_3 & 0x1f
                                        
                                        if (rax_14 == 0)
                                            goto label_142859e0e
                                        
                                        if ((rsi_1.b & 0x1f) == 0)
                                            rsi_1 = rax_14
                                            var_70_1 = rax_14
                                        label_142859e0e:
                                            int32_t rax_18 = rcx_3 & 0x20
                                            
                                            if (rax_18 == 0)
                                                goto label_142859e33
                                            
                                            if ((rsi_1.b & 0x20) == 0)
                                                rsi_1 |= rax_18
                                                var_70_1 = rsi_1
                                            label_142859e33:
                                                
                                                if (*rdx_2 == 0)
                                                    int32_t rax_19 = rdx_2[0xb]
                                                    
                                                    if (rax_19 == 0)
                                                        r14_1 = 0
                                                        rdx = var_78_1
                                                    else
                                                        rdx = var_78_1
                                                        
                                                        if (rdx != 0 && rdx != rax_19)
                                                            r13_1 = 0
                                                            r14_1 = 0
                                                            goto label_142859d0b
                                                        
                                                        r14_1 = 0
                                                        rdx = rax_19
                                                        var_78_1 = rax_19
                                                else
                                                    r14_1 = rdx_2[6]
                                                    arg_8 = r14_1
                                                    rdx = var_78_1
                                                
                                                if (r15_1 != 0x2b)
                                                    goto label_142859d0b
                                                
                                                r10_1 = var_6c_1
                                                goto label_142859bb0
                                            
                                            rsi_1 &= rcx_3 | 0xffffffdf
                                            var_70_1 = rsi_1
                                            
                                            if ((rsi_1.b & 0x20) != 0)
                                                goto label_142859e33
                                        else
                                            rsi_1 &= rcx_3 | 0xffffffe0
                                            var_70_1 = rsi_1
                                            
                                            if ((rsi_1.b & 0x1f) != 0)
                                                goto label_142859e0e
                                        
                                        r13_1 = 0
                                    else
                                        int32_t r8_7 = var_64_1 & rax_12
                                        var_64_1 = r8_7
                                        
                                        if (r8_7 != 0)
                                            goto label_142859dd9
                                        
                                        rsi_1 = var_70_1
                                        r13_1 = 0
                                else
                                    int32_t r8_5 = var_60_1 & rax_11
                                    var_60_1 = r8_5
                                    
                                    if (r8_5 != 0)
                                        goto label_142859db4
                                    
                                    rsi_1 = var_70_1
                                    r13_1 = 0
                            else
                                int32_t r8_3 = var_5c_1 & rax_10
                                var_5c_1 = r8_3
                                
                                if (r8_3 != 0)
                                    goto label_142859d8f
                                
                                rsi_1 = var_70_1
                                r13_1 = 0
                        else
                            rdi_1 &= rax_6
                            var_68_1 = rdi_1
                            
                            if (rdi_1 != 0)
                                goto label_142859d6a
                            
                            rsi_1 = var_70_1
                            r13_1 = 0
                        
                        rdx = var_78_1
                        r14_1 = 0
                        goto label_142859d0b
                    
                    rsi_2 += 1
                    rax_3 = arg4[rsi_2]
                    rdi_2 = &arg4[rsi_2]
                    
                    if (rax_3 == 0)
                        rdi_1 = var_68_1
                        r14_1 = 0
                        rdx = var_78_1
                        break
                    
                    _Str1 = _Str1_1
            
            rsi_1 = var_70_1
        label_142859d0b:
            rbp = var_74
            goto label_142859d13
        
        sub_1428a5670(0x14, 0xe6, 0x118, "ssl\ssl_ciph.c", 0x402)
        rdx = var_78_1
        rbp = 0
        r14_1 = arg_8
        r13_1 = 0
        var_74 = 0
        _Str1_2 = &_Str1_2[1]
    label_142859d13:
        
        if (var_6c_1 == 5)
            _Str1 = _Str1_1
        label_142859d24:
            int32_t rdi_3 = 0
            
            if (r12_1 == 8)
                if (strncmp(_Str1, "STRENGTH", zx.q(r12_1)) != 0)
                    sub_1428a5670(0x14, 0xe6, 0x118, "ssl\ssl_ciph.c", 0x4a7)
                else
                    rdi_3 = sub_14285a0a0(arg2, arg3)
            else if (r12_1 != 0xa)
                sub_1428a5670(0x14, 0xe6, 0x118, "ssl\ssl_ciph.c", 0x4a7)
            else if (strncmp(_Str1, "SECLEVEL=", zx.q(r12_1 - 1)) != 0)
                sub_1428a5670(0x14, 0xe6, 0x118, "ssl\ssl_ciph.c", 0x4a7)
            else
                int32_t rax_23 = sx.d(_Str1_1[9]) - 0x30
                
                if (rax_23 u> 5)
                    sub_1428a5670(0x14, 0xe6, 0x118, "ssl\ssl_ciph.c", 0x4a1)
                else
                    rdi_3 = r12_1 - 9
                    *(arg5 + 0x200) = rax_23
            
            int32_t rax_24 = 0
            
            if (rdi_3 != 0)
                rax_24 = var_74
            
            rbp = rax_24
            var_74 = rax_24
            char j = *_Str1_2
            
            if (j != 0)
                while (j u> 0x3b || not(test_bit(0xc00100100000000, sx.q(j))))
                    j = _Str1_2[1]
                    _Str1_2 = &_Str1_2[1]
                    
                    if (j == 0)
                        break
            
            i = *_Str1_2
        else if (r13_1 == 0)
            char i_2 = *_Str1_2
            
            if (i_2 == 0)
                break
            
            char i_1 = i_2
            
            do
                i = i_1
                
                if (i_1 == 0x3a)
                    break
                
                if (i_1 == 0x20)
                    break
                
                if (i_1 == 0x3b)
                    break
                
                if (i_1 == 0x2c)
                    break
                
                i = _Str1_2[1]
                _Str1_2 = &_Str1_2[1]
                i_1 = i
            while (i != 0)
        else
            sub_142859110(r14_1, rdi_1, var_5c_1, var_60_1, var_64_1, rdx, rsi_1.b, var_6c_1, 
                0xffffffff, arg2, arg3)
            i = *_Str1_2
        
        if (i == 0)
            break
        
        r11 = arg4
while (i != 0)

return zx.q(rbp)
