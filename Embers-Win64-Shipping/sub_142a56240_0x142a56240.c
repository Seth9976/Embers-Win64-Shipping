// 函数: sub_142a56240
// 地址: 0x142a56240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    if (arg2 == 1)
        if (arg1[2].d s< 0)
            int32_t r11_2 = *(arg1 + 0xc)
            int32_t rdi_2 = 0
            int64_t rbx_3 = *arg1
            int32_t r9_2 = 0
            
            if (r11_2 s> 0)
                do
                    int64_t rax_28 = sx.q(r9_2)
                    r9_2 += 1
                    uint32_t r8_8 = zx.d(*(rax_28 + rbx_3))
                    
                    if (r8_8.b s< 0)
                        if (r9_2 == r11_2)
                            r8_8 = 0xfffd
                        else
                            int32_t r8_13
                            
                            if (r8_8 u< 0xe0)
                                if (r8_8 u< 0xc2)
                                    r8_8 = 0xfffd
                                else
                                    r8_13 = r8_8 & 0x1f
                                label_142a56635:
                                    char rcx_25 = *(sx.q(r9_2) + rbx_3) - 0x80
                                    
                                    if (rcx_25 u> 0x3f)
                                        r8_8 = 0xfffd
                                    else
                                        r8_8 = r8_13 << 6 | zx.d(rcx_25)
                                        r9_2 += 1
                            else
                                uint64_t r8_9
                                uint32_t r10_3
                                
                                if (r8_8 u< 0xf0)
                                    r8_9 = zx.q(r8_8) & 0xf
                                    r10_3 = zx.d(*(sx.q(r9_2) + rbx_3))
                                    
                                    if (not(test_bit(sx.d((*" 000000000000")[r8_9]), 
                                            zx.d((r10_3 u>> 5).b))))
                                        r8_8 = 0xfffd
                                    else
                                        r10_3.b &= 0x3f
                                    label_142a565d4:
                                        r9_2 += 1
                                        r8_13 = r8_9.d << 6 | zx.d(r10_3.b)
                                        
                                        if (r9_2 != r11_2)
                                            goto label_142a56635
                                        
                                        r8_8 = 0xfffd
                                else if (r8_8 - 0xf0 s> 4)
                                    r8_8 = 0xfffd
                                else
                                    uint32_t rcx_22 = zx.d(*(sx.q(r9_2) + rbx_3))
                                    
                                    if (not(test_bit(sx.d(*((zx.q(rcx_22) u>> 4) + 0x14363c6e8)), 
                                            r8_8 - 0xf0)))
                                        r8_8 = 0xfffd
                                    else
                                        r9_2 += 1
                                        r8_9 = (zx.q(rcx_22.b) & 0x3f) | zx.q((r8_8 - 0xf0) << 6)
                                        
                                        if (r9_2 == r11_2)
                                            r8_8 = 0xfffd
                                        else
                                            r10_3.b = *(sx.q(r9_2) + rbx_3) - 0x80
                                            
                                            if (r10_3.b u<= 0x3f)
                                                goto label_142a565d4
                                            
                                            r8_8 = 0xfffd
                    
                    int32_t rax_41
                    rax_41.b = r8_8 u> 0xffff
                    rdi_2 += rax_41 + 1
                while (r9_2 s< r11_2)
            
            *(arg1 + 0xc) = r9_2
            
            if (r9_2 == *(arg1 + 0x14))
                arg1[1].d = rdi_2
            
            int32_t rax_43 = rdi_2 - 1
            
            if (arg1[3].d == 0)
                rax_43 = rdi_2
            
            arg1[2].d = rax_43
        
        return zx.q(arg1[2].d)
    
    if (arg2 == 2)
    label_142a56287:
        
        if (arg1[1].d s< 0)
            int32_t rdi_1 = arg1[2].d
            int64_t r11_1 = *arg1
            int32_t r9_1
            
            if (rdi_1 s>= 0)
                r9_1 = *(arg1 + 0xc)
                
                if (arg1[3].d != 0)
                    rdi_1 += 1
            else
                int32_t rbx_1 = *(arg1 + 0xc)
                rdi_1 = 0
                r9_1 = 0
                
                if (rbx_1 s> 0)
                    do
                        int64_t rax_2 = sx.q(r9_1)
                        r9_1 += 1
                        uint32_t r8_1 = zx.d(*(rax_2 + r11_1))
                        
                        if (r8_1.b s< 0)
                            if (r9_1 == rbx_1)
                                r8_1 = 0xfffd
                            else
                                int32_t r8_6
                                
                                if (r8_1 u< 0xe0)
                                    if (r8_1 u< 0xc2)
                                        r8_1 = 0xfffd
                                    else
                                        r8_6 = r8_1 & 0x1f
                                    label_142a563c1:
                                        char rcx_4 = *(sx.q(r9_1) + r11_1) - 0x80
                                        
                                        if (rcx_4 u> 0x3f)
                                            r8_1 = 0xfffd
                                        else
                                            r8_1 = r8_6 << 6 | zx.d(rcx_4)
                                            r9_1 += 1
                                else
                                    uint64_t r8_2
                                    uint32_t r10_1
                                    
                                    if (r8_1 u< 0xf0)
                                        r8_2 = zx.q(r8_1) & 0xf
                                        r10_1 = zx.d(*(sx.q(r9_1) + r11_1))
                                        
                                        if (not(test_bit(sx.d((*" 000000000000")[r8_2]), 
                                                zx.d((r10_1 u>> 5).b))))
                                            r8_1 = 0xfffd
                                        else
                                            r10_1.b &= 0x3f
                                        label_142a5636a:
                                            r9_1 += 1
                                            r8_6 = r8_2.d << 6 | zx.d(r10_1.b)
                                            
                                            if (r9_1 != rbx_1)
                                                goto label_142a563c1
                                            
                                            r8_1 = 0xfffd
                                    else if (r8_1 - 0xf0 s> 4)
                                        r8_1 = 0xfffd
                                    else
                                        uint32_t rcx_1 = zx.d(*(sx.q(r9_1) + r11_1))
                                        
                                        if (not(test_bit(
                                                sx.d(*((zx.q(rcx_1) u>> 4) + 0x14363c6e8)), 
                                                r8_1 - 0xf0)))
                                            r8_1 = 0xfffd
                                        else
                                            r9_1 += 1
                                            r8_2 = (zx.q(rcx_1.b) & 0x3f) | zx.q((r8_1 - 0xf0) << 6)
                                            
                                            if (r9_1 == rbx_1)
                                                r8_1 = 0xfffd
                                            else
                                                r10_1.b = *(sx.q(r9_1) + r11_1) - 0x80
                                                
                                                if (r10_1.b u<= 0x3f)
                                                    goto label_142a5636a
                                                
                                                r8_1 = 0xfffd
                        
                        int32_t rax_15
                        rax_15.b = r8_1 u> 0xffff
                        rdi_1 += rax_15 + 1
                    while (r9_1 s< rbx_1)
                
                bool cond:2_1 = arg1[3].d != 0
                int32_t rax_17 = rdi_1 - 1
                *(arg1 + 0xc) = r9_1
                
                if (not(cond:2_1))
                    rax_17 = rdi_1
                
                arg1[2].d = rax_17
            
            int32_t rbx_2 = *(arg1 + 0x14)
            
            while (r9_1 s< rbx_2)
                int64_t rax_20 = sx.q(r9_1)
                r9_1 += 1
                uint32_t rax_21 = zx.d(*(rax_20 + r11_1))
                
                if (rax_21.b s< 0)
                    if (r9_1 == rbx_2)
                        rax_21 = 0xfffd
                    else
                        int32_t rax_26
                        
                        if (rax_21 u< 0xe0)
                            if (rax_21 u< 0xc2)
                                rax_21 = 0xfffd
                            else
                                rax_26 = rax_21 & 0x1f
                            label_142a564dd:
                                char rdx_9 = *(sx.q(r9_1) + r11_1) - 0x80
                                
                                if (rdx_9 u> 0x3f)
                                    rax_21 = 0xfffd
                                else
                                    rax_21 = rax_26 << 6 | zx.d(rdx_9)
                                    r9_1 += 1
                        else
                            uint64_t rax_22
                            uint32_t r10_2
                            
                            if (rax_21 u< 0xf0)
                                rax_22 = zx.q(rax_21) & 0xf
                                r10_2 = zx.d(*(sx.q(r9_1) + r11_1))
                                
                                if (not(test_bit(sx.d((*" 000000000000")[rax_22]), 
                                        zx.d((r10_2 u>> 5).b))))
                                    rax_21 = 0xfffd
                                else
                                    r10_2.b &= 0x3f
                                label_142a56496:
                                    r9_1 += 1
                                    rax_26 = rax_22.d << 6 | zx.d(r10_2.b)
                                    
                                    if (r9_1 != rbx_2)
                                        goto label_142a564dd
                                    
                                    rax_21 = 0xfffd
                            else if (rax_21 - 0xf0 s> 4)
                                rax_21 = 0xfffd
                            else
                                uint32_t rdx_6 = zx.d(*(sx.q(r9_1) + r11_1))
                                
                                if (not(test_bit(sx.d(*((zx.q(rdx_6) u>> 4) + 0x14363c6e8)), 
                                        rax_21 - 0xf0)))
                                    rax_21 = 0xfffd
                                else
                                    r9_1 += 1
                                    rax_22 = (zx.q(rdx_6.b) & 0x3f) | zx.q((rax_21 - 0xf0) << 6)
                                    
                                    if (r9_1 == rbx_2)
                                        rax_21 = 0xfffd
                                    else
                                        r10_2.b = *(sx.q(r9_1) + r11_1) - 0x80
                                        
                                        if (r10_2.b u<= 0x3f)
                                            goto label_142a56496
                                        
                                        rax_21 = 0xfffd
                
                int32_t rcx_17
                rcx_17.b = rax_21 u> 0xffff
                rdi_1 += rcx_17 + 1
            
            arg1[1].d = rdi_1
        
        return zx.q(arg1[1].d)
    
    if (arg2 != 3)
        if (arg2 != 4)
            return 0xffffffff
        
        goto label_142a56287

return 0
