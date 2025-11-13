// 函数: sub_142a90420
// 地址: 0x142a90420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int32_t r15 = 0
int32_t rbp = 0
int64_t r14 = arg2
int32_t var_6c = 0
int32_t rdx = arg5
int32_t rsi = 0
int32_t var_74 = 0

if (rdx s> 0)
    int64_t rcx = 0
    
    while (true)
        uint32_t rbx_3 = zx.d(*(arg4 + (rcx << 1)))
        int16_t* rax_1 = arg4 + (rcx << 1)
        int32_t r12_1 = rbp + 1
        int32_t var_78_1 = r12_1
        int64_t var_60_1 = rcx + 1
        int32_t r13_1 = r12_1
        
        if ((rbx_3 & 0xfffffc00) == 0xd800 && r12_1 != rdx)
            uint32_t rdx_1 = zx.d(*(arg4 + ((rcx + 1) << 1)))
            
            if ((rdx_1 & 0xfffffc00) == 0xdc00)
                r13_1 += 1
                rbx_3 = ((rbx_3 - 0xd7f7) << 0xa) + rdx_1
                var_78_1 = r13_1
                var_60_1 = rcx + 2
        
        int32_t rax_7 = sub_142a530b0(rbx_3)
        int32_t rcx_4
        
        if ((rax_7.b & 4) == 0)
            rcx_4 = 0
            
            if (rax_7 != 0)
                rcx_4 = 1
        else
            rcx_4 = r15 & 1
        
        int32_t var_70_1 = rcx_4
        
        if (rbx_3 - 0x370 u> 0x1db6)
        label_142a90862:
            int32_t var_98_1 = 4
            int64_t var_50[0x2]
            int32_t rax_21 = sub_142a53c90(rbx_3, 0, 0, &var_50, 4)
            var_98_1.q = var_50[0]
            int32_t rax_22 =
                sub_142a8f800(r14, rsi, arg3, rax_21, var_98_1, r13_1 - rbp, arg1, arg6)
            rsi = rax_22
            
            if (rax_22 s< 0)
            label_142a908f4:
                *arg7 = 8
                return 0
        else
            uint32_t rdi_1
            
            if (rbx_3 s<= 0x3ff)
            label_142a9055e:
                rdi_1 = zx.d(*((sx.q(rbx_3 - 0x370) << 1) + 0x143642510))
            label_142a90566:
                
                if (rdi_1 == 0)
                    goto label_142a90862
            else
                if (rbx_3 s< 0x1f00)
                    goto label_142a90862
                
                if (rbx_3 s<= 0x3ff)
                    goto label_142a9055e
                
                if (rbx_3 s<= 0x1fff)
                    rdi_1 = zx.d(*((sx.q(rbx_3 - 0x1f00) << 1) + 0x143642630))
                    goto label_142a90566
                
                if (rbx_3 != 0x2126)
                    goto label_142a90862
                
                rdi_1 = 0x13a9
            
            int32_t r14_2 = rdi_1 & 0x3ff
            
            if (test_bit(rdi_1, 0xc) && (r15.b & 2) != 0 && (r14_2 == 0x399 || r14_2 == 0x3a5))
                rdi_1 |= 0x8000
            
            int64_t r8 = sx.q(arg5)
            int32_t i = rdi_1 u>> 0xd & 1
            
            if (var_60_1 s< r8)
                int64_t r15_1 = var_60_1
                
                do
                    int32_t rax_11 = sub_142a8fa40(zx.d(*(arg_20 + (r15_1 << 1))))
                    
                    if (rax_11 == 0)
                        break
                    
                    rdi_1 |= rax_11
                    r13_1 += 1
                    r15_1 += 1
                    int32_t i_1 = i + 1
                    
                    if (not(test_bit(rax_11, 0xd)))
                        i_1 = i
                    
                    i = i_1
                while (r15_1 s< r8)
                
                r8 = zx.q(arg5)
                var_60_1 = r15_1
                r15 = var_6c
                var_78_1 = r13_1
            
            int32_t rcx_8 = var_70_1 | 2
            
            if ((rdi_1 & 0xd000) != 0x5000)
                rcx_8 = var_70_1
            
            r13_1.b = 0
            var_70_1 = rcx_8
            int32_t r8_1
            int32_t r15_2
            
            if (r14_2 != 0x397 || not(test_bit(rdi_1, 0xe)) || i != 0)
                r15_2 = var_78_1
            label_142a90676:
                
                if (test_bit(rdi_1, 0xf))
                    if (r14_2 == 0x399)
                        r14_2 = 0x3aa
                        rdi_1 &= 0xfffe7fff
                    else if (r14_2 == 0x3a5)
                        r14_2 = 0x3ab
                        rdi_1 &= 0xfffe7fff
                
                r8_1 = var_74
            else
                r15_2 = var_78_1
                
                if ((r15.b & 1) != 0)
                    goto label_142a90676
                
                if (sub_142a8faf0(arg_20, r15_2, r8.d) != 0)
                    goto label_142a90676
                
                r8_1 = var_74
                
                if (r8_1 == r15_2)
                    r14_2 = 0x389
                
                r13_1.b = r8_1 != r15_2
            
            if (arg6 != 0 || (arg1 & 0x4000) != 0)
                int64_t rbx_4
                
                if (zx.d(*rax_1) != r14_2 || i s> 0)
                    rbx_4.b = 1
                else
                    rbx_4.b = 0
                
                uint32_t rax_15
                
                if ((rdi_1 & 0x18000) != 0)
                    if (r12_1 s>= r15_2 || rax_1[1] != 0x308)
                        rax_15 = 1
                    else
                        rax_15 = 0
                    
                    rbx_4.b |= rax_15.b
                    r12_1 += 1
                
                if (r13_1.b != 0)
                    if (r12_1 s>= r15_2 || *(arg_20 + (sx.q(r12_1) << 1)) != 0x301)
                        rax_15 = 1
                    else
                        rax_15 = 0
                    
                    rbx_4.b |= rax_15.b
                    r12_1 += 1
                
                int32_t rdx_4 = r15_2 - r8_1
                int32_t r12_4 = r12_1 - r8_1 + i
                rax_15.b = rdx_4 != r12_4
                rbx_4.b |= rax_15.b
                
                if (rbx_4.b == 0)
                    if (arg6 != 0)
                        sub_142afcd10(arg6, rdx_4)
                    
                    rbx_4.b = not.b((arg1 u>> 0xe).b)
                    rbx_4.b &= 1
                else if (arg6 != 0)
                    sub_142afcad0(arg6, rdx_4, r12_4)
                
                if (rbx_4.b != 0)
                    goto label_142a90777
                
                r13_1 = var_78_1
                r14 = arg2
            else
            label_142a90777:
                int64_t rdx_5 = sx.q(arg3)
                int64_t rcx_14
                
                if (rsi s>= rdx_5.d)
                    if (rsi != 0x7fffffff)
                        rcx_14 = arg2
                        goto label_142a907aa
                    
                    rsi = -1
                else
                    rcx_14 = arg2
                    *(rcx_14 + (sx.q(rsi) << 1)) = r14_2.w
                label_142a907aa:
                    int32_t temp0_1 = rsi
                    rsi += 1
                    
                    if (temp0_1 + 1 s>= 0)
                        if ((rdi_1 & 0x18000) == 0)
                            goto label_142a907cb
                        
                        if (rsi s>= rdx_5.d)
                            if (rsi != 0x7fffffff)
                                goto label_142a907c9
                            
                            rsi = -1
                        else
                            *(rcx_14 + (sx.q(rsi) << 1)) = 0x308
                        label_142a907c9:
                            rsi += 1
                        label_142a907cb:
                            
                            if (rsi s>= 0 && r13_1.b != 0)
                                if (rsi s< rdx_5.d)
                                    *(rcx_14 + (sx.q(rsi) << 1)) = 0x301
                                    rsi += 1
                                else if (rsi != 0x7fffffff)
                                    rsi += 1
                                else
                                    rsi = -1
                int64_t rax_20 = sx.q(rsi)
                
                if (rsi s< 0)
                    goto label_142a908f4
                
                while (i s> 0)
                    if (rax_20 s< rdx_5)
                        *(arg2 + (rax_20 << 1)) = 0x399
                    else if (rax_20 == 0x7fffffff)
                        goto label_142a908f4
                    
                    rsi += 1
                    i -= 1
                    int64_t temp1_1 = rax_20
                    rax_20 += 1
                    
                    if (temp1_1 + 1 s< 0)
                        break
                
                if (rsi s< 0)
                    goto label_142a908f4
                
                r13_1 = var_78_1
                r14 = arg2
        
        rdx = arg5
        rbp = r13_1
        r15 = var_70_1
        var_74 = r13_1
        var_6c = r15
        
        if (r13_1 s>= rdx)
            break
        
        rcx = var_60_1
        arg4 = arg_20

return zx.q(rsi)
