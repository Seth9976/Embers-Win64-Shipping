// 函数: sub_142b20ad0
// 地址: 0x142b20ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_20 = arg4
int32_t rsi = 0
uint32_t r13_1 = arg3 u>> 0x10
int32_t r14 = 0
uint32_t rbx = 0
uint32_t rdi = 0
void* r12 = &arg1[zx.q((*arg1).b)]
uint32_t rcx = zx.d(arg3.w)
uint32_t arg_8 = rcx
uint32_t rcx_9
uint32_t rdx_6

while (true)
    int32_t arg_18
    int32_t arg_28
    
    if (rbx == 0)
        while (true)
            if (rsi == arg_28)
                rbx = 2
                break
            
            int64_t rax_1 = sx.q(rsi)
            rsi += 1
            arg_18 = rsi
            uint64_t rdx = zx.q(*(rax_1 + arg4))
            uint32_t rbx_1
            
            if (rdx.d u> 0x7f)
                char rcx_1
                
                if (rdx.d u<= 0xc5 && rdx.d u>= 0xc2 && rsi != arg_28)
                    rcx_1 = *(sx.q(rsi) + arg4)
                
                if (rdx.d u> 0xc5 || rdx.d u< 0xc2 || rsi == arg_28 || rcx_1 - 0x80 u> 0x3f)
                    int32_t rax_7 = arg_28
                    int32_t rcx_2 = rsi + 1
                    
                    if (rcx_2 s< rax_7 || rax_7 s< 0)
                        int64_t rax_8 = sx.q(rsi)
                        rsi += 2
                        arg_18 = rsi
                        char r8 = *(rax_8 + arg4)
                        char rcx_3 = *(sx.q(rcx_2) + arg4)
                        
                        if (rdx.d == 0xe2 && r8 == 0x80 && rcx_3 - 0x80 u<= 0x3f)
                            rbx_1 = zx.d(*(r12 + (zx.q(rcx_3) << 1) + 0x200))
                            goto label_142b20bff
                        
                        if (rdx.d != 0xef || r8 != 0xbf)
                            goto label_142b20c2a
                        
                        if (rcx_3 == 0xbe)
                            rbx_1 = 3
                            goto label_142b20c2d
                        
                        if (rcx_3 != 0xbf)
                            goto label_142b20c2a
                        
                        rbx = 0xfc00
                    else
                    label_142b20c2a:
                        rbx_1 = 1
                    label_142b20c2d:
                        
                        if (rbx_1 u> r13_1)
                            rbx = rbx_1 & 0xfff8
                        else
                            uint32_t rax_12 =
                                sub_142b21dc0(r12, rdx.d, rbx_1, 0, arg4, &arg_18, &arg_28)
                            rbx = rax_12
                            
                            if (rax_12 == 1)
                                return 0xfffffffe
                            
                            uint32_t rax_13 = zx.d(rbx.w)
                            
                            if (rax_13 u< 0x1000)
                                if (rax_13 u> r13_1)
                                    rbx &= 0xfff8fff8
                                    goto label_142b20c8c
                                
                                if (rax_13 u>= 0xc00 || rbx == 0)
                                label_142b20c90:
                                    rsi = arg_18
                                    arg4 = arg_20
                                    rcx = arg_8
                                    continue
                            else
                                rbx &= 0xfc00fc00
                            label_142b20c8c:
                                
                                if (rbx == 0)
                                    goto label_142b20c90
                            
                            rsi = arg_18
                else
                    rsi += 1
                    rdx = zx.q(((rdx.d - 0xc2) << 6) + zx.d(rcx_1))
                    arg_18 = rsi
                    int64_t rax_6 = sx.q(rdx.d)
                    rbx = zx.d(*(arg2 + (rax_6 << 1)))
                    
                    if (rbx == 0)
                        rbx_1 = zx.d(*(r12 + (rax_6 << 1)))
                        goto label_142b20bff
            else
                rbx = zx.d(*(arg2 + (rdx << 1)))
                
                if (rbx != 0)
                    break
                
                if ((rdx - 0x30).d u<= 9 && (rcx.b & 2) != 0)
                    return 0xfffffffe
                
                rbx_1 = zx.d(*(r12 + (rdx << 1)))
            label_142b20bff:
                
                if (rbx_1 u< 0x1000)
                    goto label_142b20c2d
                
                rbx = rbx_1 & 0xfc00
            rcx = arg_8
            break
    
    int32_t arg_38
    
    if (rdi == 0)
        while (true)
            if (r14 == arg_38)
                rdi = 2
                break
            
            int64_t rax_14 = sx.q(r14)
            r14 += 1
            arg_18 = r14
            uint64_t rdx_3 = zx.q(*(rax_14 + arg5))
            uint32_t rdi_1
            
            if (rdx_3.d u<= 0x7f)
                rdi = zx.d(*(arg2 + (rdx_3 << 1)))
                
                if (rdi != 0)
                    break
                
                if ((rdx_3 - 0x30).d u<= 9 && (rcx.b & 2) != 0)
                    return 0xfffffffe
                
                rdi_1 = zx.d(*(r12 + (rdx_3 << 1)))
                goto label_142b20dc7
            
            char rcx_5
            
            if (rdx_3.d u<= 0xc5 && rdx_3.d u>= 0xc2 && r14 != arg_38)
                rcx_5 = *(sx.q(r14) + arg5)
            
            if (rdx_3.d u<= 0xc5 && rdx_3.d u>= 0xc2 && r14 != arg_38 && rcx_5 - 0x80 u<= 0x3f)
                r14 += 1
                rdx_3 = zx.q(((rdx_3.d - 0xc2) << 6) + zx.d(rcx_5))
                arg_18 = r14
                int64_t rax_19 = sx.q(rdx_3.d)
                rdi = zx.d(*(arg2 + (rax_19 << 1)))
                
                if (rdi != 0)
                    break
                
                rdi_1 = zx.d(*(r12 + (rax_19 << 1)))
                goto label_142b20dc7
            
            int32_t rax_20 = arg_38
            int32_t rcx_6 = r14 + 1
            
            if (rcx_6 s< rax_20 || rax_20 s< 0)
                int64_t rax_21 = sx.q(r14)
                r14 += 2
                arg_18 = r14
                char r8_2 = *(rax_21 + arg5)
                char rcx_7 = *(sx.q(rcx_6) + arg5)
                
                if (rdx_3.d == 0xe2 && r8_2 == 0x80 && rcx_7 - 0x80 u<= 0x3f)
                    rdi_1 = zx.d(*(r12 + (zx.q(rcx_7) << 1) + 0x200))
                label_142b20dc7:
                    
                    if (rdi_1 u>= 0x1000)
                        rdi = rdi_1 & 0xfc00
                        break
                else if (rdx_3.d != 0xef || r8_2 != 0xbf)
                    rdi_1 = 1
                else if (rcx_7 != 0xbe)
                    if (rcx_7 == 0xbf)
                        rdi = 0xfc00
                        break
                    
                    rdi_1 = 1
                else
                    rdi_1 = 3
            else
                rdi_1 = 1
            
            if (rdi_1 u> r13_1)
                rdi = rdi_1 & 0xfff8
                break
            
            uint32_t rax_25 = sub_142b21dc0(r12, rdx_3.d, rdi_1, 0, arg5, &arg_18, &arg_38)
            rdi = rax_25
            
            if (rax_25 == 1)
                return 0xfffffffe
            
            uint32_t rax_26 = zx.d(rdi.w)
            
            if (rax_26 u< 0x1000)
                if (rax_26 u> r13_1)
                    rdi &= 0xfff8fff8
                    goto label_142b20e54
                
                if (rax_26 u< 0xc00)
                    goto label_142b20e54
            else
                rdi &= 0xfc00fc00
            label_142b20e54:
                
                if (rdi != 0)
                    r14 = arg_18
                    break
            
            r14 = arg_18
            rcx = arg_8
    
    if (rbx != rdi)
        rcx_9 = zx.d(rbx.w)
        rdx_6 = zx.d(rdi.w)
        
        if (rcx_9 != rdx_6)
            break
        
        if (rbx != 2)
            arg4 = arg_20
            rcx = arg_8
            rbx u>>= 0x10
            rdi u>>= 0x10
            continue
    else if (rbx != 2)
        arg4 = arg_20
        rdi = 0
        rcx = arg_8
        rbx = 0
        continue
    
    if ((arg_8 & 0xfffff000) u>= 0x1000)
        int32_t rsi_1 = 0
        int32_t r14_1 = 0
    label_142b20ee9:
        uint32_t i = 0
        uint32_t rbx_2 = 0
        
        while (true)
            if (rbx_2 == 0)
                if (r14_1 == arg_28)
                    rbx_2 = 2
                else
                    int64_t rax_29 = sx.q(r14_1)
                    r14_1 += 1
                    arg_18 = r14_1
                    uint64_t rdx_7 = zx.q(*(rax_29 + arg_20))
                    uint32_t rbx_3
                    
                    if (rdx_7.d u<= 0x7f)
                        rbx_3 = zx.d(*(r12 + (rdx_7 << 1)))
                    label_142b20f70:
                        
                        if (rbx_3 u>= 0x1000)
                            goto label_142b21061
                        
                        goto label_142b20f8b
                    
                    if (rdx_7.d u<= 0xc5)
                        int64_t rax_34 =
                            sx.q(((rdx_7 - 0xc2).d << 6) + zx.d(*(sx.q(r14_1) + arg_20)))
                        r14_1 += 1
                        arg_18 = r14_1
                        rbx_3 = zx.d(*(r12 + (rax_34 << 1)))
                        goto label_142b20f70
                    
                    int32_t rax_35 = r14_1 + 1
                    r14_1 += 2
                    arg_18 = r14_1
                    char rax_36 = *(sx.q(rax_35) + arg_20)
                    
                    if (rdx_7.d == 0xe2)
                        rbx_3 = zx.d(*(r12 + (zx.q(rax_36) << 1) + 0x200))
                        goto label_142b20f70
                    
                    if (rax_36 != 0xbe)
                        rbx_3 = 0xfca8
                    label_142b21061:
                        int32_t rbx_8 = rbx_3 & 0x3e0
                        
                        if (rbx_8 u>= 0x180)
                            rbx_2 = (rbx_8 + 0x20) << 0x10 | 0xc0
                        else
                            rbx_2 = rbx_8 + 0x20
                    else
                        rbx_3 = 3
                    label_142b20f8b:
                        
                        if (rbx_3 u> r13_1)
                            rbx_2 = 0xc0
                        else
                            uint32_t rax_38 =
                                sub_142b21dc0(r12, rdx_7.d, rbx_3, 0, arg_20, &arg_18, &arg_28)
                            rbx_2 = rax_38
                            
                            if (rax_38 u> 0xffff)
                                uint32_t rax_39 = zx.d(rbx_2.w)
                                
                                if (rax_39 u>= 0x1000)
                                    r14_1 = arg_18
                                    rbx_2 = (rbx_2 & 0x3e003e0) + 0x200020
                                    continue
                                else if (rax_39 u> r13_1)
                                    r14_1 = arg_18
                                    rbx_2 = 0xc000c0
                                else
                                    rbx_2 = 0
                                    r14_1 = arg_18
                                    continue
                            else if (rax_38 u>= 0x1000)
                                int32_t rbx_4 = rbx_2 & 0x3e0
                                
                                if (rbx_4 u>= 0x180)
                                    r14_1 = arg_18
                                    rbx_2 = (rbx_4 + 0x20) << 0x10 | 0xc0
                                    continue
                                else
                                    r14_1 = arg_18
                                    rbx_2 = rbx_4 + 0x20
                                    continue
                            else if (rbx_2 u> r13_1)
                                r14_1 = arg_18
                                rbx_2 = 0xc0
                            else
                                if (rbx_2 u< 0xc00)
                                    r14_1 = arg_18
                                    continue
                                
                                r14_1 = arg_18
                                rbx_2 = 0
                                continue
            
            while (i == 0)
                if (rsi_1 == arg_38)
                    i = 2
                    break
                
                int64_t rax_40 = sx.q(rsi_1)
                rsi_1 += 1
                arg_18 = rsi_1
                uint64_t rdx_8 = zx.q(*(rax_40 + arg5))
                uint32_t rdi_2
                
                if (rdx_8.d u> 0x7f)
                    if (rdx_8.d u<= 0xc5)
                        int64_t rax_45 = sx.q(((rdx_8 - 0xc2).d << 6) + zx.d(*(sx.q(rsi_1) + arg5)))
                        rsi_1 += 1
                        arg_18 = rsi_1
                        rdi_2 = zx.d(*(r12 + (rax_45 << 1)))
                        goto label_142b21103
                    
                    int32_t rax_46 = rsi_1 + 1
                    rsi_1 += 2
                    arg_18 = rsi_1
                    char rax_47 = *(sx.q(rax_46) + arg5)
                    
                    if (rdx_8.d == 0xe2)
                        rdi_2 = zx.d(*(r12 + (zx.q(rax_47) << 1) + 0x200))
                        goto label_142b21103
                    
                    if (rax_47 != 0xbe)
                        rdi_2 = 0xfca8
                    label_142b211ed:
                        int32_t rdi_7 = rdi_2 & 0x3e0
                        
                        if (rdi_7 u>= 0x180)
                            i = (rdi_7 + 0x20) << 0x10 | 0xc0
                        else
                            i = rdi_7 + 0x20
                        
                        break
                        break
                    
                    rdi_2 = 3
                else
                    rdi_2 = zx.d(*(r12 + (rdx_8 << 1)))
                label_142b21103:
                    
                    if (rdi_2 u>= 0x1000)
                        goto label_142b211ed
                
                if (rdi_2 u> r13_1)
                    i = 0xc0
                    break
                
                uint32_t i_7 = sub_142b21dc0(r12, rdx_8.d, rdi_2, 0, arg5, &arg_18, &arg_38)
                i = i_7
                
                if (i_7 u> 0xffff)
                    uint32_t rax_49 = zx.d(i.w)
                    
                    if (rax_49 u< 0x1000)
                        if (rax_49 u> r13_1)
                            rsi_1 = arg_18
                            i = 0xc000c0
                            break
                        
                        i = 0
                    else
                        rsi_1 = arg_18
                        i = (i & 0x3e003e0) + 0x200020
                        continue
                else if (i_7 u< 0x1000)
                    if (i u> r13_1)
                        rsi_1 = arg_18
                        i = 0xc0
                        break
                    
                    if (i u>= 0xc00)
                        rsi_1 = arg_18
                        i = 0
                        continue
                else
                    int32_t rdi_3 = i & 0x3e0
                    
                    if (rdi_3 u>= 0x180)
                        rsi_1 = arg_18
                        i = (rdi_3 + 0x20) << 0x10 | 0xc0
                        continue
                    else
                        rsi_1 = arg_18
                        i = rdi_3 + 0x20
                        continue
                
                rsi_1 = arg_18
            
            if (rbx_2 == i)
                if (rbx_2 != 2)
                    goto label_142b20ee9
                
                goto label_142b21220
            
            rcx_9 = zx.d(rbx_2.w)
            rdx_6 = zx.d(i.w)
            
            if (rcx_9 != rdx_6)
                if ((arg_8 & 0x800) == 0)
                    break
                
                return 0xfffffffe
            
            if (rbx_2 == 2)
                goto label_142b21220
            
            rbx_2 u>>= 0x10
            i u>>= 0x10
        
        break
    
label_142b21220:
    uint32_t rax_68 = arg_8
    uint64_t r15
    
    if (test_bit(rax_68, 0xa))
        int32_t rsi_2 = 0
        r15 = zx.q(rax_68 u>> 0xc)
        int32_t r14_2 = 0
    label_142b21239:
        int32_t i_2 = 0
        int32_t i_1 = 0
        
        while (true)
            while (i_1 == 0)
                if (r14_2 == arg_28)
                    i_1 = 2
                    break
                
                uint64_t r8_6 = arg_20
                int64_t rax_50 = sx.q(r14_2)
                r14_2 += 1
                arg_18 = r14_2
                uint64_t rdx_9 = zx.q(*(rax_50 + r8_6))
                uint32_t i_8
                
                if (rdx_9.d u<= 0x7f)
                    i_8 = zx.d(*(r12 + (rdx_9 << 1)))
                else if (rdx_9.d u> 0xc5)
                    int32_t rax_56 = r14_2 + 1
                    r14_2 += 2
                    arg_18 = r14_2
                    char r8_7 = *(sx.q(rax_56) + r8_6)
                    
                    if (rdx_9.d != 0xe2)
                        i_8 = 0xfca8
                        
                        if (r8_7 == 0xbe)
                            i_8 = 3
                    else
                        i_8 = zx.d(*(r12 + (zx.q(r8_7) << 1) + 0x200))
                    
                    r8_6 = arg_20
                else
                    int64_t rax_55 = sx.q(((rdx_9 - 0xc2).d << 6) + zx.d(*(sx.q(r14_2) + r8_6)))
                    r14_2 += 1
                    arg_18 = r14_2
                    i_8 = zx.d(*(r12 + (rax_55 << 1)))
                
                if (i_8 u< 0xc00)
                    i_8 = sub_142b21dc0(r12, rdx_9.d, i_8, 0, r8_6, &arg_18, &arg_28)
                    r14_2 = arg_18
                
                i_1 = i_8
                
                if (i_8 u> 0xffff)
                    uint32_t rcx_19 = zx.d(i_8.w)
                    
                    if (rcx_19 u< 0x1000)
                        if (rcx_19 u> r13_1)
                            i_1 = 0x80008
                            break
                        
                        i_1 = 0
                    else
                        int32_t rbx_11
                        
                        if (r15.d == 0)
                            rbx_11 = (r15 + 0x18).d
                        
                        if (r15.d != 0 || (i_8 & 0xfc000000) != 0)
                            rbx_11 = 0x180018
                        
                        i_1 = rbx_11 & i_8
                else if (i_8 u< 0x1000)
                    if (i_8 u> r13_1)
                        i_1 = 8
                        break
                    
                    if (i_8 u>= 0xc00)
                        i_1 = 0
                else
                    i_1 &= 0x18
                    
                    if (r15.d != 0 && (i_8 & 0x3e0) u>= 0x180)
                        i_1 |= 0x80000
            
            while (i_2 == 0)
                if (rsi_2 == arg_38)
                    i_2 = 2
                    break
                
                int64_t r8_9 = arg5
                int64_t rax_59 = sx.q(rsi_2)
                rsi_2 += 1
                arg_18 = rsi_2
                uint64_t rdx_10 = zx.q(*(rax_59 + r8_9))
                uint32_t i_9
                
                if (rdx_10.d u<= 0x7f)
                    i_9 = zx.d(*(r12 + (rdx_10 << 1)))
                else if (rdx_10.d u> 0xc5)
                    int32_t rax_65 = rsi_2 + 1
                    rsi_2 += 2
                    arg_18 = rsi_2
                    char r8_10 = *(sx.q(rax_65) + r8_9)
                    
                    if (rdx_10.d != 0xe2)
                        i_9 = 0xfca8
                        
                        if (r8_10 == 0xbe)
                            i_9 = 3
                    else
                        i_9 = zx.d(*(r12 + (zx.q(r8_10) << 1) + 0x200))
                    
                    r8_9 = arg5
                else
                    int64_t rax_64 = sx.q(((rdx_10 - 0xc2).d << 6) + zx.d(*(sx.q(rsi_2) + r8_9)))
                    rsi_2 += 1
                    arg_18 = rsi_2
                    i_9 = zx.d(*(r12 + (rax_64 << 1)))
                
                if (i_9 u< 0xc00)
                    i_9 = sub_142b21dc0(r12, rdx_10.d, i_9, 0, r8_9, &arg_18, &arg_38)
                    rsi_2 = arg_18
                
                i_2 = i_9
                
                if (i_9 u> 0xffff)
                    uint32_t rcx_23 = zx.d(i_9.w)
                    
                    if (rcx_23 u< 0x1000)
                        if (rcx_23 u> r13_1)
                            i_2 = 0x80008
                            break
                        
                        i_2 = 0
                    else
                        int32_t rdi_10
                        
                        if (r15.d == 0)
                            rdi_10 = (r15 + 0x18).d
                        
                        if (r15.d != 0 || (i_9 & 0xfc000000) != 0)
                            rdi_10 = 0x180018
                        
                        i_2 = rdi_10 & i_9
                else if (i_9 u< 0x1000)
                    if (i_9 u> r13_1)
                        i_2 = 8
                        break
                    
                    if (i_9 u>= 0xc00)
                        i_2 = 0
                else
                    i_2 &= 0x18
                    
                    if (r15.d != 0 && (i_9 & 0x3e0) u>= 0x180)
                        i_2 |= 0x80000
            
            if (i_1 == i_2)
                if (i_1 != 2)
                    goto label_142b21239
                
            label_142b21518:
                rax_68 = arg_8
                break
            
            rcx_9 = zx.d(i_1.w)
            rdx_6 = zx.d(i_2.w)
            
            if (rcx_9 != rdx_6)
                if ((arg_8 & 0x100) == 0)
                    goto label_142b21a55
                
                if (rcx_9 u< rdx_6)
                    return 1
                
                return 0xffffffff
            
            if (i_1 == 2)
                goto label_142b21518
            
            i_1 u>>= 0x10
            i_2 u>>= 0x10
    
    if ((rax_68 & 0xfffff000) u<= 0x1000)
        return 0
    
    r15.b = (arg_8 & 0x600) == 0x200
    int32_t rbx_12 = 0
    int32_t rdi_11 = 0
label_142b2157c:
    uint32_t i_15 = 0
    uint32_t i_14 = 0
    
    while (true)
        if (i_14 == 0)
            uint32_t i_3
            
            do
                if (rdi_11 == arg_28)
                    i_14 = 2
                    break
                
                uint64_t r8_12 = arg_20
                int64_t rax_73 = sx.q(rdi_11)
                rdi_11 += 1
                arg_18 = rdi_11
                uint64_t rdx_11 = zx.q(*(rax_73 + r8_12))
                uint32_t rax_74
                
                if (rdx_11.d u<= 0x7f)
                    rax_74 = zx.d(*(r12 + (rdx_11 << 1)))
                else if (rdx_11.d u> 0xc5)
                    int32_t rax_80 = rdi_11 + 1
                    rdi_11 += 2
                    arg_18 = rdi_11
                    char r8_13 = *(sx.q(rax_80) + r8_12)
                    
                    if (rdx_11.d != 0xe2)
                        rax_74 = 0xfca8
                        
                        if (r8_13 == 0xbe)
                            rax_74 = 3
                    else
                        rax_74 = zx.d(*(r12 + (zx.q(r8_13) << 1) + 0x200))
                    
                    r8_12 = arg_20
                else
                    int64_t rax_79 = sx.q(((rdx_11 - 0xc2).d << 6) + zx.d(*(sx.q(rdi_11) + r8_12)))
                    rdi_11 += 1
                    arg_18 = rdi_11
                    rax_74 = zx.d(*(r12 + (rax_79 << 1)))
                
                if (rax_74 u< 0xc00)
                    rax_74 = sub_142b21dc0(r12, rdx_11.d, rax_74, 0, r8_12, &arg_18, &arg_28)
                    rdi_11 = arg_18
                
                i_3 = sub_142b21ce0(r13_1, r15.b, rax_74)
                i_14 = i_3
            while (i_3 == 0)
        
        if (i_15 == 0)
            uint32_t i_4
            
            do
                if (rbx_12 == arg_38)
                    i_15 = 2
                    break
                
                int64_t r8_16 = arg5
                int64_t rax_82 = sx.q(rbx_12)
                rbx_12 += 1
                arg_18 = rbx_12
                uint64_t rdx_13 = zx.q(*(rax_82 + r8_16))
                uint32_t rax_83
                
                if (rdx_13.d u<= 0x7f)
                    rax_83 = zx.d(*(r12 + (rdx_13 << 1)))
                else if (rdx_13.d u> 0xc5)
                    int32_t rax_89 = rbx_12 + 1
                    rbx_12 += 2
                    arg_18 = rbx_12
                    char r8_17 = *(sx.q(rax_89) + r8_16)
                    
                    if (rdx_13.d != 0xe2)
                        rax_83 = 0xfca8
                        
                        if (r8_17 == 0xbe)
                            rax_83 = 3
                    else
                        rax_83 = zx.d(*(r12 + (zx.q(r8_17) << 1) + 0x200))
                    
                    r8_16 = arg5
                else
                    int64_t rax_88 = sx.q(((rdx_13 - 0xc2).d << 6) + zx.d(*(sx.q(rbx_12) + r8_16)))
                    rbx_12 += 1
                    arg_18 = rbx_12
                    rax_83 = zx.d(*(r12 + (rax_88 << 1)))
                
                if (rax_83 u< 0xc00)
                    rax_83 = sub_142b21dc0(r12, rdx_13.d, rax_83, 0, r8_16, &arg_18, &arg_38)
                    rbx_12 = arg_18
                
                i_4 = sub_142b21ce0(r13_1, r15.b, rax_83)
                i_15 = i_4
            while (i_4 == 0)
        
        if (i_14 == i_15)
            if (i_14 != 2)
                goto label_142b2157c
            
            goto label_142b21767
        
        rcx_9 = zx.d(i_14.w)
        rdx_6 = zx.d(i_15.w)
        
        if (rcx_9 != rdx_6)
            if ((arg_8 & 0x700) == 0x300)
                uint32_t rax_118 = rcx_9 ^ 0x18
                
                if (rcx_9 u<= 3)
                    rax_118 = rcx_9
                
                rcx_9 = rax_118
                
                if (rdx_6 u> 3)
                    rdx_6 ^= 0x18
            
            break
        
        if (i_14 == 2)
        label_142b21767:
            
            if ((arg_8 & 0xfffff000) u<= 0x2000)
                return 0
            
            int32_t rsi_3 = 0
            int32_t r14_3 = 0
            
            while (true)
                uint32_t i_6 = 0
                uint32_t i_5 = 0
                
                while (true)
                    while (i_5 == 0)
                        if (r14_3 == arg_28)
                            i_5 = 2
                            break
                        
                        int64_t rax_93 = sx.q(r14_3)
                        r14_3 += 1
                        arg_18 = r14_3
                        uint64_t rdx_15 = zx.q(*(rax_93 + arg_20))
                        
                        if (rdx_15.d u<= 0x7f)
                            i_5 = zx.d(*(r12 + (rdx_15 << 1)))
                        else if (rdx_15.d u> 0xc5)
                            int32_t rax_99 = r14_3 + 1
                            r14_3 += 2
                            arg_18 = r14_3
                            char rax_100 = *(sx.q(rax_99) + arg_20)
                            
                            if (rdx_15.d != 0xe2)
                                i_5 = 0xfca8
                                
                                if (rax_100 == 0xbe)
                                    i_5 = 3
                            else
                                i_5 = zx.d(*(r12 + (zx.q(rax_100) << 1) + 0x200))
                        else
                            int64_t rax_98 =
                                sx.q(((rdx_15 - 0xc2).d << 6) + zx.d(*(sx.q(r14_3) + arg_20)))
                            r14_3 += 1
                            arg_18 = r14_3
                            i_5 = zx.d(*(r12 + (rax_98 << 1)))
                        
                        if (i_5 u< 0xc00)
                            uint32_t i_10 =
                                sub_142b21dc0(r12, rdx_15.d, i_5, 0, arg_20, &arg_18, &arg_28)
                            r14_3 = arg_18
                            i_5 = i_10
                        
                        if (i_5 u> 0xffff)
                            if (zx.d(i_5.w) u> r13_1)
                                i_5 = -0x3ff0400
                                break
                            
                            i_5 &= 0xfff8fff8
                        else if (i_5 u< 0x1000)
                            if (i_5 u> r13_1)
                                i_5 = 0xfc00
                                break
                            
                            if (i_5 u>= 0xc00)
                                i_5 &= 0xfff8
                        else
                            uint32_t i_11 = i_5
                            i_5 = -0x3ff0400
                            
                            if ((i_11 & 0x3e0) u< 0x180)
                                i_5 = 0xfc00
                    
                    while (i_6 == 0)
                        if (rsi_3 == arg_38)
                            i_6 = 2
                            break
                        
                        int64_t rax_104 = sx.q(rsi_3)
                        rsi_3 += 1
                        arg_18 = rsi_3
                        uint64_t rdx_16 = zx.q(*(rax_104 + arg5))
                        
                        if (rdx_16.d u<= 0x7f)
                            i_6 = zx.d(*(r12 + (rdx_16 << 1)))
                        else if (rdx_16.d u> 0xc5)
                            int32_t rax_110 = rsi_3 + 1
                            rsi_3 += 2
                            arg_18 = rsi_3
                            char rax_111 = *(sx.q(rax_110) + arg5)
                            
                            if (rdx_16.d != 0xe2)
                                i_6 = 0xfca8
                                
                                if (rax_111 == 0xbe)
                                    i_6 = 3
                            else
                                i_6 = zx.d(*(r12 + (zx.q(rax_111) << 1) + 0x200))
                        else
                            int64_t rax_109 =
                                sx.q(((rdx_16 - 0xc2).d << 6) + zx.d(*(sx.q(rsi_3) + arg5)))
                            rsi_3 += 1
                            arg_18 = rsi_3
                            i_6 = zx.d(*(r12 + (rax_109 << 1)))
                        
                        if (i_6 u< 0xc00)
                            uint32_t i_12 =
                                sub_142b21dc0(r12, rdx_16.d, i_6, 0, arg5, &arg_18, &arg_38)
                            rsi_3 = arg_18
                            i_6 = i_12
                        
                        if (i_6 u> 0xffff)
                            if (zx.d(i_6.w) u> r13_1)
                                i_6 = -0x3ff0400
                                break
                            
                            i_6 &= 0xfff8fff8
                        else if (i_6 u< 0x1000)
                            if (i_6 u> r13_1)
                                i_6 = 0xfc00
                                break
                            
                            if (i_6 u>= 0xc00)
                                i_6 &= 0xfff8
                        else
                            uint32_t i_13 = i_6
                            i_6 = -0x3ff0400
                            
                            if ((i_13 & 0x3e0) u< 0x180)
                                i_6 = 0xfc00
                    
                    if (i_5 == i_6)
                        if (i_5 == 2)
                            return 0
                        
                        break
                    
                    rcx_9 = zx.d(i_5.w)
                    rdx_6 = zx.d(i_6.w)
                    
                    if (rcx_9 != rdx_6)
                        goto label_142b21a55
                    
                    if (i_5 == 2)
                        return 0
                    
                    i_5 u>>= 0x10
                    i_6 u>>= 0x10
        else
            i_14 u>>= 0x10
            i_15 u>>= 0x10
    
    break

label_142b21a55:
int32_t rcx_38 = 1

if (rcx_9 u< rdx_6)
    rcx_38 = -1

return zx.q(rcx_38)
