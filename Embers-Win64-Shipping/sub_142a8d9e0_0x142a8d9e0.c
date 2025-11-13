// 函数: sub_142a8d9e0
// 地址: 0x142a8d9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)

if (*arg8 s> 0)
    return 0

int16_t* rax_34

if (arg4 != 0)
    if (arg5 s>= 0xffffffff && r8.d s>= 0 && (arg1 != 0 || r8.d s<= 0) && arg6 s<= 0x10ffff
            && (arg6 & 0xfffff800) != 0xd800)
        goto label_142a8da8c
    
    rax_34 = nullptr
    *arg8 = 1
else if (arg5 != 0 || arg5 s< 0xffffffff || r8.d s< 0 || (arg1 == 0 && r8.d s> 0)
        || arg6 s> 0x10ffff || (arg6 & 0xfffff800) == 0xd800)
    rax_34 = nullptr
    *arg8 = 1
else
label_142a8da8c:
    
    if (arg7 != 0)
        *arg7 = 0
    
    int32_t r15_1 = 0
    int32_t r13_1 = 0
    void* r9 = &arg1[r8]
    void* var_40_1 = r9
    int16_t* rbx_1 = arg1
    int32_t var_48
    
    if (arg5 s< 0)
        int32_t r8_1 = 0
        var_48 = 0
        uint32_t rdx_1 = zx.d(*arg4)
        
        if (rdx_1 == 0)
        label_142a8dc24:
            uint32_t r9_3 = zx.d(arg4[sx.q(r8_1)])
            
            if (r9_3 == 0)
            label_142a8dd2a:
                int32_t r15_2 = r15_1 + ((rbx_1 - arg1) s>> 1).d
                
                if (arg7 != 0)
                    *arg7 = r13_1
                
                if (arg3 != 0)
                    *arg3 = r15_2
                
                sub_142a8c440(arg1, arg2, r15_2, arg8)
                return arg1
            
            while (true)
                r8_1 += 1
                var_48 = r8_1
                
                if (r9_3.b s>= 0)
                    r15_1 += 1
                else if (r9_3 s>= 0xe0)
                    if (r9_3 s>= 0xf0 || not(test_bit(
                            sx.d(*((zx.q(r9_3) & 0xf) + " 000000000000")), 
                            zx.d(arg4[sx.q(r8_1)] u>> 5))) || arg4[sx.q(r8_1 + 1)] - 0x80 u> 0x3f)
                        if (r9_3 s>= 0xe0 || r9_3 s< 0xc2 || arg4[sx.q(r8_1)] - 0x80 u> 0x3f)
                            goto label_142a8dcdd
                        
                        goto label_142a8dcc1
                    
                    r15_1 += 1
                    r8_1 += 2
                    var_48 = r8_1
                else if (r9_3 s< 0xc2 || arg4[sx.q(r8_1)] - 0x80 u> 0x3f)
                label_142a8dcdd:
                    uint32_t rax_28 = sub_142a9bc10(arg4, &var_48, 0xffffffff, r9_3, 0xff)
                    uint32_t rcx_11 = rax_28
                    
                    if (rax_28 s< 0)
                        r13_1 += 1
                        rcx_11 = arg6
                        
                        if (arg6 s< 0)
                            break
                    
                    r8_1 = var_48
                    int32_t rax_29
                    rax_29.b = rcx_11 u> 0xffff
                    r15_1 += rax_29 + 1
                else
                label_142a8dcc1:
                    r15_1 += 1
                    r8_1 += 1
                    var_48 = r8_1
                
                r9_3 = zx.d(arg4[sx.q(r8_1)])
                
                if (r9_3 == 0)
                    goto label_142a8dd2a
            
            goto label_142a8e1ac
        
        while (true)
            if (rbx_1 u>= r9)
                goto label_142a8dc24
            
            r8_1 += 1
            var_48 = r8_1
            
            if (rdx_1.b s>= 0)
                *rbx_1 = rdx_1.w
            else
                uint32_t rcx_3
                
                if (rdx_1 s>= 0xe0)
                    if (rdx_1 s>= 0xf0)
                        goto label_142a8db62
                    
                    uint32_t r9_1 = zx.d(arg4[sx.q(r8_1)])
                    char rax_12
                    
                    if (test_bit(sx.d(*((zx.q(rdx_1) & 0xf) + " 000000000000")), 
                            zx.d((r9_1 u>> 5).b)))
                        rax_12 = arg4[sx.q(r8_1 + 1)] - 0x80
                    
                    if (not(test_bit(sx.d(*((zx.q(rdx_1) & 0xf) + " 000000000000")), 
                            zx.d((r9_1 u>> 5).b))) || rax_12 u> 0x3f)
                        r9 = var_40_1
                    label_142a8db62:
                        
                        if (rdx_1 s>= 0xe0 || rdx_1 s< 0xc2)
                            goto label_142a8dbae
                        
                        goto label_142a8db79
                    
                    r9_1.b &= 0x3f
                    rdx_1.w <<= 6
                    r9 = var_40_1
                    rcx_3.w = zx.w(r9_1.b) | rdx_1.w
                    rcx_3.w <<= 6
                    rcx_3.w |= zx.w(rax_12)
                    r8_1 += 2
                    var_48 = r8_1
                    *rbx_1 = rcx_3.w
                else if (rdx_1 s< 0xc2)
                label_142a8dbae:
                    uint32_t rax_16 = sub_142a9bc10(arg4, &var_48, 0xffffffff, rdx_1, 0xff)
                    rcx_3 = rax_16
                    
                    if (rax_16 s< 0)
                        r13_1 += 1
                        rcx_3 = arg6
                        
                        if (arg6 s< 0)
                            break
                    
                    r9 = var_40_1
                    
                    if (rcx_3 s> 0xffff)
                        *rbx_1 = (rcx_3 s>> 0xa).w - 0x2840
                        rbx_1 = &rbx_1[1]
                        
                        if (rbx_1 u>= r9)
                            r8_1 = var_48
                            r15_1 = 1
                            goto label_142a8dc24
                        
                        rcx_3.w &= 0x3ff
                        rcx_3.w |= 0xdc00
                    
                    r8_1 = var_48
                    *rbx_1 = rcx_3.w
                else
                label_142a8db79:
                    char rcx_4 = arg4[sx.q(r8_1)] - 0x80
                    
                    if (rcx_4 u> 0x3f)
                        goto label_142a8dbae
                    
                    rdx_1.w &= 0x1f
                    rdx_1.w <<= 6
                    rdx_1.w |= zx.w(rcx_4)
                    r8_1 += 1
                    *rbx_1 = rdx_1.w
                    var_48 = r8_1
            
            rbx_1 = &rbx_1[1]
            rdx_1 = zx.d(arg4[sx.q(r8_1)])
            
            if (rdx_1 == 0)
                goto label_142a8dc24
        
        goto label_142a8e1ac
    
    int32_t r10_1 = 0
label_142a8dd88:
    var_48 = r10_1
label_142a8dd9e:
    int32_t r8_5 = ((r9 - rbx_1) s>> 1).d
    int32_t rsi_3 = (arg5 - r10_1) s/ 3
    
    if (r8_5 s<= rsi_3)
        rsi_3 = r8_5
    
    if (rsi_3 s< 3)
        if (r10_1 s>= arg5)
            goto label_142a8dd2a
        
        while (rbx_1 u< r9)
            int64_t rax_50 = sx.q(r10_1)
            r10_1 += 1
            uint32_t r9_6 = zx.d(arg4[rax_50])
            var_48 = r10_1
            
            if (r9_6.b s>= 0)
                *rbx_1 = r9_6.w
                r9 = var_40_1
            else
                uint32_t rcx_20
                
                if (r9_6 s>= 0xe0)
                    if (r9_6 s>= 0xf0 || r10_1 + 1 s>= arg5)
                    label_142a8dfe1:
                        
                        if (r9_6 s>= 0xe0 || r9_6 s< 0xc2 || r10_1 == arg5)
                            goto label_142a8e038
                        
                        goto label_142a8dfff
                    
                    uint32_t r8_8 = zx.d(arg4[sx.q(r10_1)])
                    
                    if (not(test_bit(sx.d(*((zx.q(r9_6) & 0xf) + " 000000000000")), 
                            zx.d((r8_8 u>> 5).b))))
                        goto label_142a8dfe1
                    
                    char rdx_11 = *(sx.q(r10_1 + 1) + arg4) - 0x80
                    
                    if (rdx_11 u> 0x3f)
                        goto label_142a8dfe1
                    
                    r9_6.w <<= 6
                    r8_8.b &= 0x3f
                    rcx_20.w = zx.w(r8_8.b) | r9_6.w
                    r9 = var_40_1
                    rcx_20.w <<= 6
                    rcx_20.w |= zx.w(rdx_11)
                    r10_1 += 2
                    var_48 = r10_1
                    *rbx_1 = rcx_20.w
                else if (r9_6 s< 0xc2 || r10_1 == arg5)
                label_142a8e038:
                    uint32_t rax_61 = sub_142a9bc10(arg4, &var_48, arg5, r9_6, 0xff)
                    rcx_20 = rax_61
                    
                    if (rax_61 s< 0)
                        r13_1 += 1
                        rcx_20 = arg6
                        
                        if (arg6 s< 0)
                            goto label_142a8e1ac
                    
                    r9 = var_40_1
                    
                    if (rcx_20 s> 0xffff)
                        *rbx_1 = (rcx_20 s>> 0xa).w - 0x2840
                        rbx_1 = &rbx_1[1]
                        
                        if (rbx_1 u>= r9)
                            r10_1 = var_48
                            r15_1 = 1
                            break
                        
                        rcx_20.w &= 0x3ff
                        rcx_20.w |= 0xdc00
                    
                    r10_1 = var_48
                    *rbx_1 = rcx_20.w
                else
                label_142a8dfff:
                    char rcx_21 = *(sx.q(r10_1) + arg4) - 0x80
                    
                    if (rcx_21 u> 0x3f)
                        goto label_142a8e038
                    
                    r9_6.w &= 0x1f
                    r9_6.w <<= 6
                    r9_6.w |= zx.w(rcx_21)
                    r10_1 += 1
                    *rbx_1 = r9_6.w
                    r9 = var_40_1
                    var_48 = r10_1
            
            rbx_1 = &rbx_1[1]
            
            if (r10_1 s>= arg5)
                break
        
        if (r10_1 s>= arg5)
            goto label_142a8dd2a
        
        while (true)
            int64_t rax_64 = sx.q(r10_1)
            r10_1 += 1
            uint32_t r9_7 = zx.d(arg4[rax_64])
            var_48 = r10_1
            
            if (r9_7.b s>= 0)
                r15_1 += 1
            else if (r9_7 s>= 0xe0)
                if (r9_7 s>= 0xf0 || r10_1 + 1 s>= arg5 || not(test_bit(
                        sx.d(*((zx.q(r9_7) & 0xf) + " 000000000000")), 
                        zx.d(arg4[sx.q(r10_1)] u>> 5))) || *(sx.q(r10_1 + 1) + arg4) - 0x80 u> 0x3f)
                    if (r9_7 s>= 0xe0 || r9_7 s< 0xc2 || r10_1 == arg5
                            || arg4[sx.q(r10_1)] - 0x80 u> 0x3f)
                        goto label_142a8e170
                    
                    goto label_142a8e155
                
                r15_1 += 1
                r10_1 += 2
                var_48 = r10_1
            else if (r9_7 s< 0xc2 || r10_1 == arg5 || arg4[sx.q(r10_1)] - 0x80 u> 0x3f)
            label_142a8e170:
                uint32_t rax_71 = sub_142a9bc10(arg4, &var_48, arg5, r9_7, 0xff)
                uint32_t rcx_28 = rax_71
                
                if (rax_71 s< 0)
                    r13_1 += 1
                    rcx_28 = arg6
                    
                    if (arg6 s< 0)
                        break
                
                r10_1 = var_48
                int32_t rax_72
                rax_72.b = rcx_28 u> 0xffff
                r15_1 += rax_72 + 1
            else
            label_142a8e155:
                r15_1 += 1
                r10_1 += 1
                var_48 = r10_1
            
            if (r10_1 s>= arg5)
                goto label_142a8dd2a
        
        goto label_142a8e1ac
    
    while (true)
        int64_t rax_36 = sx.q(r10_1)
        r10_1 += 1
        uint32_t r9_5 = zx.d(arg4[rax_36])
        var_48 = r10_1
        
        if (r9_5.b s>= 0)
            *rbx_1 = r9_5.w
        else
            uint32_t rcx_16
            
            if (r9_5 s>= 0xe0)
                if (r9_5 s>= 0xf0 || r10_1 + 1 s>= arg5)
                label_142a8de50:
                    
                    if (r9_5 s>= 0xe0 || r9_5 s< 0xc2 || r10_1 == arg5)
                        goto label_142a8dea4
                    
                    goto label_142a8de6e
                
                uint32_t r8_6 = zx.d(arg4[sx.q(r10_1)])
                
                if (not(test_bit(sx.d(*((zx.q(r9_5) & 0xf) + " 000000000000")), 
                        zx.d((r8_6 u>> 5).b))))
                    goto label_142a8de50
                
                char rdx_8 = arg4[sx.q(r10_1 + 1)] - 0x80
                
                if (rdx_8 u> 0x3f)
                    goto label_142a8de50
                
                r8_6.b &= 0x3f
                r9_5.w <<= 6
                rcx_16.w = zx.w(r8_6.b) | r9_5.w
                rcx_16.w <<= 6
                rcx_16.w |= zx.w(rdx_8)
                r10_1 += 2
                var_48 = r10_1
                *rbx_1 = rcx_16.w
            else if (r9_5 s< 0xc2 || r10_1 == arg5)
            label_142a8dea4:
                
                if (r9_5 s>= 0xf0 || arg6 s> 0xffff)
                    int32_t temp2_1 = rsi_3
                    rsi_3 -= 1
                    
                    if (temp2_1 == 1)
                        r9 = var_40_1
                        r10_1 -= 1
                        goto label_142a8dd88
                
                uint32_t rax_47 = sub_142a9bc10(arg4, &var_48, arg5, r9_5, 0xff)
                rcx_16 = rax_47
                
                if (rax_47 s< 0)
                    r13_1 += 1
                    rcx_16 = arg6
                    
                    if (arg6 s< 0)
                        break
                
                r10_1 = var_48
                
                if (rcx_16 s> 0xffff)
                    *rbx_1 = (rcx_16 s>> 0xa).w - 0x2840
                    rcx_16.w &= 0x3ff
                    rbx_1 = &rbx_1[1]
                    rcx_16.w |= 0xdc00
                
                *rbx_1 = rcx_16.w
            else
            label_142a8de6e:
                char rcx_17 = arg4[sx.q(r10_1)] - 0x80
                
                if (rcx_17 u> 0x3f)
                    goto label_142a8dea4
                
                r9_5.w &= 0x1f
                r9_5.w <<= 6
                r9_5.w |= zx.w(rcx_17)
                r10_1 += 1
                *rbx_1 = r9_5.w
                var_48 = r10_1
        
        r9 = var_40_1
        rbx_1 = &rbx_1[1]
        rsi_3 -= 1
        
        if (rsi_3 s<= 0)
            goto label_142a8dd9e
    
label_142a8e1ac:
    rax_34 = nullptr
    *arg8 = 0xa

return rax_34
