// 函数: sub_142b2aeb0
// 地址: 0x142b2aeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx_1

while (true)
    int32_t rcx = *(arg1 + 0x198)
    
    if (rcx == 0)
        int64_t r8_1 = sx.q(*(arg1 + 0x190))
        int32_t r10_1 = *(arg1 + 0x194)
        
        if (r8_1.d != r10_1)
            int64_t r9_1 = *(arg1 + 0x188)
            rbx_1 = zx.d(*(r8_1 + r9_1))
            
            if (rbx_1 != 0 || r10_1 s>= 0)
                if (rbx_1.b s>= 0)
                    *(arg1 + 0x190) += 1
                    break
                
                int32_t r8_2 = r8_1.d + 1
                *(arg1 + 0x190) = r8_2
                
                if (rbx_1.b s>= 0)
                    goto label_142b2b025
                
                uint32_t rcx_5
                
                if (r8_2 == r10_1)
                    rbx_1 = 0xfffd
                    rcx_5 = 0xfffd
                else
                    int32_t rbx_6
                    
                    if (rbx_1 u< 0xe0)
                        if (rbx_1 u< 0xc2)
                            rbx_1 = 0xfffd
                            rcx_5 = 0xfffd
                        else
                            rbx_6 = rbx_1 & 0x1f
                        label_142b2b00b:
                            char rcx_6 = *(sx.q(r8_2) + r9_1) - 0x80
                            
                            if (rcx_6 u> 0x3f)
                                rbx_1 = 0xfffd
                                rcx_5 = 0xfffd
                            else
                                rbx_1 = rbx_6 << 6 | zx.d(rcx_6)
                                *(arg1 + 0x190) = r8_2 + 1
                            label_142b2b025:
                                
                                if (rbx_1 s> 0xffff)
                                    rcx_5 = zx.d((rbx_1 s>> 0xa).w - 0x2840)
                                else
                                    rcx_5 = rbx_1
                    else
                        uint64_t rbx_2
                        uint32_t r8_3
                        
                        if (rbx_1 u< 0xf0)
                            rbx_2 = zx.q(rbx_1) & 0xf
                            r8_3 = zx.d(*(sx.q(r8_2) + r9_1))
                            
                            if (not(test_bit(sx.d((*" 000000000000")[rbx_2]), 
                                    zx.d((r8_3 u>> 5).b))))
                                rbx_1 = 0xfffd
                                rcx_5 = 0xfffd
                            else
                                r8_3.b &= 0x3f
                            label_142b2afd4:
                                *(arg1 + 0x190) += 1
                                r8_2 = *(arg1 + 0x190)
                                rbx_6 = rbx_2.d << 6 | zx.d(r8_3.b)
                                
                                if (r8_2 != r10_1)
                                    goto label_142b2b00b
                                
                                rbx_1 = 0xfffd
                                rcx_5 = 0xfffd
                        else if (rbx_1 - 0xf0 s> 4)
                            rbx_1 = 0xfffd
                            rcx_5 = 0xfffd
                        else
                            uint32_t rcx_2 = zx.d(*(sx.q(r8_2) + r9_1))
                            
                            if (not(test_bit(sx.d(*((zx.q(rcx_2) u>> 4) + 0x14363c6e8)), 
                                    rbx_1 - 0xf0)))
                                rbx_1 = 0xfffd
                                rcx_5 = 0xfffd
                            else
                                rbx_2 = (zx.q(rcx_2.b) & 0x3f) | zx.q((rbx_1 - 0xf0) << 6)
                                *(arg1 + 0x190) = r8_2 + 1
                                
                                if (r8_2 + 1 == r10_1)
                                    rbx_1 = 0xfffd
                                    rcx_5 = 0xfffd
                                else
                                    r8_3.b = *(sx.q(r8_2 + 1) + r9_1) - 0x80
                                    
                                    if (r8_3.b u<= 0x3f)
                                        goto label_142b2afd4
                                    
                                    rbx_1 = 0xfffd
                                    rcx_5 = 0xfffd
                
                if (rcx_5 s< 0xc0)
                    break
                
                uint64_t rdx = zx.q(*((sx.q(rcx_5) s>> 5) + 0x14367be00))
                
                if (rdx.d == 0)
                    break
                
                if (not(test_bit(*((rdx << 2) + 0x14367c720), rcx_5 & 0x1f)))
                    break
                
                if ((rbx_1 & 0x1fff01) != 0xf01)
                    if (*(arg1 + 0x190) == r10_1)
                        break
                    
                    if (sub_142b2b4e0(arg1) == 0)
                        break
                
                int32_t rax_24
                
                if (rbx_1 u<= 0x7f)
                    rax_24 = 1
                else if (rbx_1 u<= 0x7ff)
                    rax_24 = 2
                else if (rbx_1 u> 0xd7ff)
                    rax_24 = 0
                    
                    if (rbx_1 - 0xe000 u<= 0x101fff)
                        rax_24.b = rbx_1 u> 0xffff
                        rax_24 += 3
                else
                    rax_24 = 3
                
                *(arg1 + 0x190) -= rax_24
                
                if (sub_142b2b6c0(arg1, arg2) != 0)
                    continue
        
        return -1
    
    if (rcx == 2 && *(arg1 + 0x190) != *(arg1 + 0x1a0))
        int64_t rcx_11 = sx.q(*(arg1 + 0x190))
        int64_t r10_2 = *(arg1 + 0x188)
        int32_t r9_2 = (rcx_11 + 1).d
        uint32_t r8_5 = zx.d(*(rcx_11 + r10_2))
        *(arg1 + 0x190) = r9_2
        
        if (r8_5.b s>= 0)
            return r8_5
        
        int32_t r11_1 = *(arg1 + 0x194)
        
        if (r9_2 != r11_1)
            int32_t r8_10
            
            if (r8_5 u< 0xe0)
                if (r8_5 u>= 0xc2)
                    r8_10 = r8_5 & 0x1f
                label_142b2b2b9:
                    char rcx_16 = *(sx.q(r9_2) + r10_2) - 0x80
                    
                    if (rcx_16 u<= 0x3f)
                        *(arg1 + 0x190) = r9_2 + 1
                        return r8_10 << 6 | zx.d(rcx_16)
            else
                uint64_t r8_6
                uint32_t r9_3
                
                if (r8_5 u< 0xf0)
                    r8_6 = zx.q(r8_5) & 0xf
                    r9_3 = zx.d(*(sx.q(r9_2) + r10_2))
                    
                    if (test_bit(sx.d((*" 000000000000")[r8_6]), zx.d((r9_3 u>> 5).b)))
                        r9_3.b &= 0x3f
                    label_142b2b27c:
                        *(arg1 + 0x190) += 1
                        r9_2 = *(arg1 + 0x190)
                        r8_10 = r8_6.d << 6 | zx.d(r9_3.b)
                        
                        if (r9_2 != r11_1)
                            goto label_142b2b2b9
                else if (r8_5 - 0xf0 s<= 4)
                    uint32_t rcx_13 = zx.d(*(sx.q(r9_2) + r10_2))
                    
                    if (test_bit(sx.d(*((zx.q(rcx_13) u>> 4) + 0x14363c6e8)), r8_5 - 0xf0))
                        r8_6 = (zx.q(rcx_13.b) & 0x3f) | zx.q((r8_5 - 0xf0) << 6)
                        *(arg1 + 0x190) = r9_2 + 1
                        
                        if (r9_2 + 1 != r11_1)
                            r9_3.b = *(sx.q(r9_2 + 1) + r10_2) - 0x80
                            
                            if (r9_3.b u<= 0x3f)
                                goto label_142b2b27c
        
        return 0xfffd
    
    if (rcx == 3)
        int16_t rax_28 = *(arg1 + 0x1b8)
        int32_t rax_30
        
        if (rax_28 s< 0)
            rax_30 = *(arg1 + 0x1bc)
        else
            rax_30 = sx.d(rax_28) s>> 5
        
        if (*(arg1 + 0x190) != rax_30)
            uint32_t rax_49 = sub_142a486d0(arg1 + 0x1b0, *(arg1 + 0x190))
            int32_t rsi
            rsi.b = rax_49 u> 0xffff
            *(arg1 + 0x190) += rsi + 1
            return rax_49
    
    if (rcx != 1)
        if (rcx != 2)
            int32_t rax_33 = *(arg1 + 0x1a0)
            *(arg1 + 0x190) = rax_33
            *(arg1 + 0x19c) = rax_33
        
        *(arg1 + 0x198) = 0
    else
        int32_t rcx_10 = 2
        *(arg1 + 0x19c) = *(arg1 + 0x190)
        
        if (*(arg1 + 0x190) == *(arg1 + 0x1a0))
            rcx_10 = 0
        
        *(arg1 + 0x198) = rcx_10

return rbx_1
