// 函数: sub_142b1fca0
// 地址: 0x142b1fca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = arg4
uint32_t r13_1 = arg3 u>> 0x10
int32_t rsi = 0
uint32_t r9 = zx.d(arg3.w)
int32_t r14 = 0
uint32_t rbx = 0
uint32_t arg_8 = r9
void* r12 = &arg1[zx.q((*arg1).b)]
uint32_t rdi = 0
int32_t rcx_12
bool cond:2_1

while (true)
    uint32_t r8 = 1
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
            uint64_t rdx = zx.q(*(r11 + (rax_1 << 1)))
            uint32_t rbx_1
            
            if (rdx.d u> 0x17f)
                if (rdx.d u< 0x2000 || (rdx.d u>= 0x2040 && (rdx.d u< 0x2000 || rdx.d u>= 0x2040)))
                    if (rdx.d != 0xfffe)
                        if (rdx.d != 0xffff)
                            rbx_1 = 1
                            goto label_142b1fd91
                        
                        rbx = 0xfc00
                        break
                        break
                    
                    rbx_1 = 3
                else
                    rbx_1 = zx.d(*(r12 + (sx.q((rdx - 0x1e80).d) << 1)))
                label_142b1fd65:
                    
                    if (rbx_1 u>= 0x1000)
                        rbx = rbx_1 & 0xfc00
                        break
                        break
                
            label_142b1fd91:
                
                if (rbx_1 u> r13_1)
                    rbx = rbx_1 & 0xfff8
                    break
                
                uint32_t rax_4 = sub_142b21dc0(r12, rdx.d, rbx_1, r11, 0, &arg_18, &arg_28)
                rbx = rax_4
                
                if (rax_4 != 1)
                    uint32_t rax_5 = zx.d(rbx.w)
                    
                    if (rax_5 u< 0x1000)
                        if (rax_5 u> r13_1)
                            rbx &= 0xfff8fff8
                            goto label_142b1fdf4
                        
                        if (rax_5 u< 0xc00)
                            goto label_142b1fdf4
                    else
                        rbx &= 0xfc00fc00
                    label_142b1fdf4:
                        
                        if (rbx != 0)
                            rsi = arg_18
                            r8 = 1
                            r9 = arg_8
                            break
                    
                    rsi = arg_18
                    r8 = 1
                    r9 = arg_8
                    r11 = arg4
                    continue
            else
                rbx = zx.d(*(arg2 + (rdx << 1)))
                
                if (rbx != 0)
                    break
                
                if ((rdx - 0x30).d u> 9 || (r9.b & 2) == 0)
                    rbx_1 = zx.d(*(r12 + (rdx << 1)))
                    goto label_142b1fd65
            return 0xfffffffe
    
    int32_t arg_38
    
    if (rdi == 0)
        while (true)
            if (r14 == arg_38)
                rdi = 2
                break
            
            int64_t rax_6 = sx.q(r14)
            r14 += 1
            arg_18 = r14
            uint64_t rdx_1 = zx.q(*(arg5 + (rax_6 << 1)))
            uint32_t rdi_1
            
            if (rdx_1.d u<= 0x17f)
                rdi = zx.d(*(arg2 + (rdx_1 << 1)))
                
                if (rdi != 0)
                    break
                
                if ((rdx_1 - 0x30).d u<= 9 && (r9.b & 2) != 0)
                    return 0xfffffffe
                
                rdi_1 = zx.d(*(r12 + (rdx_1 << 1)))
                goto label_142b1febb
            
            if (rdx_1.d u>= 0x2000
                    && (rdx_1.d u< 0x2040 || (rdx_1.d u>= 0x2000 && rdx_1.d u< 0x2040)))
                rdi_1 = zx.d(*(r12 + (sx.q((rdx_1 - 0x1e80).d) << 1)))
            label_142b1febb:
                
                if (rdi_1 u>= 0x1000)
                    rdi = rdi_1 & 0xfc00
                    break
            else if (rdx_1.d != 0xfffe)
                if (rdx_1.d == 0xffff)
                    rdi = 0xfc00
                    break
                
                rdi_1 = r8
            else
                rdi_1 = 3
            
            if (rdi_1 u> r13_1)
                rdi = rdi_1 & 0xfff8
                break
            
            uint32_t rax_9 = sub_142b21dc0(r12, rdx_1.d, rdi_1, arg5, 0, &arg_18, &arg_38)
            rdi = rax_9
            
            if (rax_9 == 1)
                return 0xfffffffe
            
            uint32_t rax_10 = zx.d(rdi.w)
            
            if (rax_10 u>= 0x1000)
                rdi &= 0xfc00fc00
            else if (rax_10 u> r13_1)
                rdi &= 0xfff8fff8
            else if (rax_10 u>= 0xc00)
                r14 = arg_18
                r8 = 1
                r9 = arg_8
                continue
            
            r14 = arg_18
            
            if (rdi != 0)
                break
            
            r9 = arg_8
            r8 = rdi + 1
    
    if (rbx == rdi)
        if (rbx == 2)
            goto label_142b1ffdd
        
        r9 = arg_8
        rdi = 0
        r11 = arg4
        rbx = 0
        continue
    
    uint32_t rcx_4 = zx.d(rbx.w)
    uint32_t rdx_2 = zx.d(rdi.w)
    
    if (rcx_4 == rdx_2)
        if (rbx != 2)
            r9 = arg_8
            r11 = arg4
            rbx u>>= 0x10
            rdi u>>= 0x10
            continue
        
    label_142b1ffdd:
        
        if ((arg_8 & 0xfffff000) u>= 0x1000)
            int32_t rsi_1 = 0
            int32_t r14_1 = 0
        label_142b1fff1:
            uint32_t i = 0
            uint32_t rbx_2 = 0
            
            while (true)
                if (rbx_2 == 0)
                    if (r14_1 == arg_28)
                        rbx_2 = 2
                    else
                        int64_t rcx_5 = arg4
                        int64_t rax_13 = sx.q(r14_1)
                        r14_1 += 1
                        arg_18 = r14_1
                        uint64_t rdx_3 = zx.q(*(rcx_5 + (rax_13 << 1)))
                        uint32_t rbx_3
                        
                        if (rdx_3.d u<= 0x17f)
                            rbx_3 = zx.d(*(r12 + (rdx_3 << 1)))
                        label_142b20055:
                            
                            if (rbx_3 u>= 0x1000)
                                goto label_142b2015b
                            
                            goto label_142b20081
                        
                        if ((rdx_3 - 0x2000).d u<= 0x3f
                                || (rdx_3.d u>= 0x2000 && rdx_3.d u< 0x2040))
                            rbx_3 = zx.d(*(r12 + (sx.q((rdx_3 - 0x1e80).d) << 1)))
                            rcx_5 = arg4
                            goto label_142b20055
                        
                        if (rdx_3.d != 0xfffe)
                            if (rdx_3.d != 0xffff)
                                rbx_3 = 1
                                goto label_142b20081
                            
                            rbx_3 = 0xfca8
                        label_142b2015b:
                            int32_t rbx_8 = rbx_3 & 0x3e0
                            
                            if (rbx_8 u>= 0x180)
                                rbx_2 = (rbx_8 + 0x20) << 0x10 | 0xc0
                            else
                                rbx_2 = rbx_8 + 0x20
                        else
                            rbx_3 = 3
                        label_142b20081:
                            
                            if (rbx_3 u> r13_1)
                                rbx_2 = 0xc0
                            else
                                uint32_t rax_16 =
                                    sub_142b21dc0(r12, rdx_3.d, rbx_3, rcx_5, 0, &arg_18, &arg_28)
                                rbx_2 = rax_16
                                
                                if (rax_16 u> 0xffff)
                                    uint32_t rax_17 = zx.d(rbx_2.w)
                                    
                                    if (rax_17 u>= 0x1000)
                                        r14_1 = arg_18
                                        rbx_2 = (rbx_2 & 0x3e003e0) + 0x200020
                                        continue
                                    else if (rax_17 u> r13_1)
                                        r14_1 = arg_18
                                        rbx_2 = 0xc000c0
                                    else
                                        rbx_2 = 0
                                        r14_1 = arg_18
                                        continue
                                else if (rax_16 u>= 0x1000)
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
                    
                    int64_t rax_18 = sx.q(rsi_1)
                    rsi_1 += 1
                    arg_18 = rsi_1
                    uint64_t rdx_4 = zx.q(*(arg5 + (rax_18 << 1)))
                    uint32_t rdi_2
                    
                    if (rdx_4.d u> 0x17f)
                        if ((rdx_4 - 0x2000).d u<= 0x3f
                                || (rdx_4.d u>= 0x2000 && rdx_4.d u< 0x2040))
                            rdi_2 = zx.d(*(r12 + (sx.q((rdx_4 - 0x1e80).d) << 1)))
                            goto label_142b201db
                        
                        if (rdx_4.d != 0xfffe)
                            if (rdx_4.d == 0xffff)
                                rdi_2 = 0xfca8
                            label_142b202da:
                                int32_t rdi_7 = rdi_2 & 0x3e0
                                
                                if (rdi_7 u>= 0x180)
                                    i = (rdi_7 + 0x20) << 0x10 | 0xc0
                                else
                                    i = rdi_7 + 0x20
                                
                                break
                                break
                            
                            rdi_2 = 1
                        else
                            rdi_2 = 3
                    else
                        rdi_2 = zx.d(*(r12 + (rdx_4 << 1)))
                    label_142b201db:
                        
                        if (rdi_2 u>= 0x1000)
                            goto label_142b202da
                    
                    if (rdi_2 u> r13_1)
                        i = 0xc0
                        break
                    
                    uint32_t i_7 = sub_142b21dc0(r12, rdx_4.d, rdi_2, arg5, 0, &arg_18, &arg_38)
                    i = i_7
                    
                    if (i_7 u> 0xffff)
                        uint32_t rax_21 = zx.d(i.w)
                        
                        if (rax_21 u< 0x1000)
                            if (rax_21 u> r13_1)
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
                        goto label_142b1fff1
                    
                    goto label_142b2030d
                
                uint32_t rcx_11 = zx.d(rbx_2.w)
                uint32_t rdx_6 = zx.d(i.w)
                
                if (rcx_11 != rdx_6)
                    if ((arg_8 & 0x800) != 0)
                        return 0xfffffffe
                    
                    cond:2_1 = rcx_11 u< rdx_6
                    rcx_12 = 1
                    break
                
                if (rbx_2 == 2)
                    goto label_142b2030d
                
                rbx_2 u>>= 0x10
                i u>>= 0x10
            
            break
        
    label_142b2030d:
        uint32_t rax_30 = arg_8
        uint64_t r15
        
        if (test_bit(rax_30, 0xa))
            int32_t r14_2 = 0
            uint32_t rsi_3 = rax_30 u>> 0xc
            r15 = 0
        label_142b20325:
            uint32_t i_2 = 0
            uint32_t i_1 = 0
            
            while (true)
                while (i_1 == 0)
                    if (r15.d == arg_28)
                        i_1 = 2
                        break
                    
                    int64_t rcx_10 = arg4
                    int64_t rax_22 = sx.q(r15.d)
                    r15 = zx.q(r15.d + 1)
                    arg_18 = r15.d
                    uint64_t rdx_5 = zx.q(*(rcx_10 + (rax_22 << 1)))
                    uint32_t i_8
                    
                    if (rdx_5.d u<= 0x17f)
                        i_8 = zx.d(*(r12 + (rdx_5 << 1)))
                    else if ((rdx_5 - 0x2000).d u<= 0x3f)
                        i_8 = zx.d(*(r12 + (sx.q((rdx_5 - 0x1e80).d) << 1)))
                        rcx_10 = arg4
                    else if (rdx_5.d != 0xfffe)
                        i_8 = 1
                        
                        if (rdx_5.d == 0xffff)
                            i_8 = 0xfca8
                    else
                        i_8 = 3
                    
                    if (i_8 u< 0xc00)
                        i_8 = sub_142b21dc0(r12, rdx_5.d, i_8, rcx_10, 0, &arg_18, &arg_28)
                        r15 = zx.q(arg_18)
                    
                    i_1 = i_8
                    
                    if (i_8 u> 0xffff)
                        uint32_t rcx_15 = zx.d(i_8.w)
                        
                        if (rcx_15 u< 0x1000)
                            if (rcx_15 u> r13_1)
                                i_1 = 0x80008
                                break
                            
                            i_1 = 0
                        else
                            int32_t rbx_11
                            
                            if (rsi_3 == 0)
                                rbx_11 = rsi_3 + 0x18
                            
                            if (rsi_3 != 0 || (i_8 & 0xfc000000) != 0)
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
                        
                        if (rsi_3 != 0 && (i_8 & 0x3e0) u>= 0x180)
                            i_1 |= 0x80000
                
                while (i_2 == 0)
                    if (r14_2 == arg_38)
                        i_2 = 2
                        break
                    
                    int64_t rcx_16 = arg5
                    int64_t rax_26 = sx.q(r14_2)
                    r14_2 += 1
                    arg_18 = r14_2
                    uint64_t rdx_7 = zx.q(*(rcx_16 + (rax_26 << 1)))
                    uint32_t i_9
                    
                    if (rdx_7.d u<= 0x17f)
                        i_9 = zx.d(*(r12 + (rdx_7 << 1)))
                    else if ((rdx_7 - 0x2000).d u<= 0x3f)
                        i_9 = zx.d(*(r12 + (sx.q((rdx_7 - 0x1e80).d) << 1)))
                        rcx_16 = arg5
                    else if (rdx_7.d != 0xfffe)
                        i_9 = 1
                        
                        if (rdx_7.d == 0xffff)
                            i_9 = 0xfca8
                    else
                        i_9 = 3
                    
                    if (i_9 u< 0xc00)
                        i_9 = sub_142b21dc0(r12, rdx_7.d, i_9, rcx_16, 0, &arg_18, &arg_38)
                        r14_2 = arg_18
                    
                    i_2 = i_9
                    
                    if (i_9 u> 0xffff)
                        uint32_t rcx_19 = zx.d(i_9.w)
                        
                        if (rcx_19 u< 0x1000)
                            if (rcx_19 u> r13_1)
                                i_2 = 0x80008
                                break
                            
                            i_2 = 0
                        else
                            int32_t rdi_10
                            
                            if (rsi_3 == 0)
                                rdi_10 = rsi_3 + 0x18
                            
                            if (rsi_3 != 0 || (i_9 & 0xfc000000) != 0)
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
                        
                        if (rsi_3 != 0 && (i_9 & 0x3e0) u>= 0x180)
                            i_2 |= 0x80000
                
                if (i_1 == i_2)
                    if (i_1 != 2)
                        goto label_142b20325
                    
                label_142b205cc:
                    rax_30 = arg_8
                    break
                
                rcx_4 = zx.d(i_1.w)
                rdx_2 = zx.d(i_2.w)
                
                if (rcx_4 != rdx_2)
                    if ((arg_8 & 0x100) == 0)
                        goto label_142b20a9d
                    
                    if (rcx_4 u< rdx_2)
                        return 1
                    
                    return 0xffffffff
                
                if (i_1 == 2)
                    goto label_142b205cc
                
                i_1 u>>= 0x10
                i_2 u>>= 0x10
        
        if ((rax_30 & 0xfffff000) u<= 0x1000)
            return 0
        
        r15.b = (arg_8 & 0x600) == 0x200
        int32_t rsi_4 = 0
        int32_t r14_3 = 0
    label_142b20633:
        uint32_t i_15 = 0
        uint32_t i_14 = 0
        
        while (true)
            if (i_14 == 0)
                uint32_t i_3
                
                do
                    if (r14_3 == arg_28)
                        i_14 = 2
                        break
                    
                    int64_t rcx_20 = arg4
                    int64_t rax_35 = sx.q(r14_3)
                    r14_3 += 1
                    arg_18 = r14_3
                    uint64_t rdx_8 = zx.q(*(rcx_20 + (rax_35 << 1)))
                    uint32_t rax_36
                    
                    if (rdx_8.d u<= 0x17f)
                        rax_36 = zx.d(*(r12 + (rdx_8 << 1)))
                    else if ((rdx_8 - 0x2000).d u<= 0x3f)
                        rax_36 = zx.d(*(r12 + (sx.q((rdx_8 - 0x1e80).d) << 1)))
                        rcx_20 = arg4
                    else if (rdx_8.d != 0xfffe)
                        rax_36 = 1
                        
                        if (rdx_8.d == 0xffff)
                            rax_36 = 0xfca8
                    else
                        rax_36 = 3
                    
                    if (rax_36 u< 0xc00)
                        rax_36 = sub_142b21dc0(r12, rdx_8.d, rax_36, rcx_20, 0, &arg_18, &arg_28)
                        r14_3 = arg_18
                    
                    i_3 = sub_142b21ce0(r13_1, r15.b, rax_36)
                    i_14 = i_3
                while (i_3 == 0)
            
            if (i_15 == 0)
                uint32_t i_4
                
                do
                    if (rsi_4 == arg_38)
                        i_15 = 2
                        break
                    
                    int64_t rcx_24 = arg5
                    int64_t rax_39 = sx.q(rsi_4)
                    rsi_4 += 1
                    arg_18 = rsi_4
                    uint64_t rdx_10 = zx.q(*(rcx_24 + (rax_39 << 1)))
                    uint32_t rax_40
                    
                    if (rdx_10.d u<= 0x17f)
                        rax_40 = zx.d(*(r12 + (rdx_10 << 1)))
                    else if ((rdx_10 - 0x2000).d u<= 0x3f)
                        rax_40 = zx.d(*(r12 + (sx.q((rdx_10 - 0x1e80).d) << 1)))
                        rcx_24 = arg5
                    else if (rdx_10.d != 0xfffe)
                        rax_40 = 1
                        
                        if (rdx_10.d == 0xffff)
                            rax_40 = 0xfca8
                    else
                        rax_40 = 3
                    
                    if (rax_40 u< 0xc00)
                        rax_40 = sub_142b21dc0(r12, rdx_10.d, rax_40, rcx_24, 0, &arg_18, &arg_38)
                        rsi_4 = arg_18
                    
                    i_4 = sub_142b21ce0(r13_1, r15.b, rax_40)
                    i_15 = i_4
                while (i_4 == 0)
            
            if (i_14 == i_15)
                if (i_14 != 2)
                    goto label_142b20633
                
                goto label_142b207e3
            
            rcx_4 = zx.d(i_14.w)
            rdx_2 = zx.d(i_15.w)
            
            if (rcx_4 != rdx_2)
                if ((arg_8 & 0x700) == 0x300)
                    uint32_t rax_58 = rcx_4 ^ 0x18
                    
                    if (rcx_4 u<= 3)
                        rax_58 = rcx_4
                    
                    rcx_4 = rax_58
                    
                    if (rdx_2 u> 3)
                        rdx_2 ^= 0x18
                
                break
            
            if (i_14 == 2)
            label_142b207e3:
                
                if ((arg_8 & 0xfffff000) u<= 0x2000)
                    return 0
                
                int32_t rsi_5 = 0
                int32_t r14_4 = 0
                
                while (true)
                    uint32_t i_5 = 0
                    uint32_t i_6 = 0
                    
                    while (true)
                        while (i_5 == 0)
                            if (r14_4 == arg_28)
                                i_5 = 2
                                break
                            
                            int64_t rcx_28 = arg4
                            int64_t rax_45 = sx.q(r14_4)
                            r14_4 += 1
                            arg_18 = r14_4
                            uint64_t rdx_12 = zx.q(*(rcx_28 + (rax_45 << 1)))
                            
                            if (rdx_12.d u<= 0x17f)
                                i_5 = zx.d(*(r12 + (rdx_12 << 1)))
                            else if ((rdx_12 - 0x2000).d u<= 0x3f)
                                i_5 = zx.d(*(r12 + (sx.q((rdx_12 - 0x1e80).d) << 1)))
                                rcx_28 = arg4
                            else if (rdx_12.d != 0xfffe)
                                i_5 = 1
                                
                                if (rdx_12.d == 0xffff)
                                    i_5 = 0xfca8
                            else
                                i_5 = 3
                            
                            if (i_5 u< 0xc00)
                                uint32_t i_10 =
                                    sub_142b21dc0(r12, rdx_12.d, i_5, rcx_28, 0, &arg_18, &arg_28)
                                r14_4 = arg_18
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
                            if (rsi_5 == arg_38)
                                i_6 = 2
                                break
                            
                            int64_t rcx_31 = arg5
                            int64_t rax_50 = sx.q(rsi_5)
                            rsi_5 += 1
                            arg_18 = rsi_5
                            uint64_t rdx_13 = zx.q(*(rcx_31 + (rax_50 << 1)))
                            
                            if (rdx_13.d u<= 0x17f)
                                i_6 = zx.d(*(r12 + (rdx_13 << 1)))
                            else if ((rdx_13 - 0x2000).d u<= 0x3f)
                                i_6 = zx.d(*(r12 + (sx.q((rdx_13 - 0x1e80).d) << 1)))
                                rcx_31 = arg5
                            else if (rdx_13.d != 0xfffe)
                                i_6 = 1
                                
                                if (rdx_13.d == 0xffff)
                                    i_6 = 0xfca8
                            else
                                i_6 = 3
                            
                            if (i_6 u< 0xc00)
                                uint32_t i_12 =
                                    sub_142b21dc0(r12, rdx_13.d, i_6, rcx_31, 0, &arg_18, &arg_38)
                                rsi_5 = arg_18
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
                        
                        rcx_4 = zx.d(i_5.w)
                        rdx_2 = zx.d(i_6.w)
                        
                        if (rcx_4 != rdx_2)
                            goto label_142b20a9d
                        
                        if (i_5 == 2)
                            return 0
                        
                        i_5 u>>= 0x10
                        i_6 u>>= 0x10
            else
                i_14 u>>= 0x10
                i_15 u>>= 0x10
    
label_142b20a9d:
    cond:2_1 = rcx_4 u< rdx_2
    rcx_12 = 1
    break

if (cond:2_1)
    rcx_12 = -1

return zx.q(rcx_12)
