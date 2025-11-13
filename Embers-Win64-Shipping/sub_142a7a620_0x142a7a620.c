// 函数: sub_142a7a620
// 地址: 0x142a7a620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x90)

if (rbx == 0)
    rbx = *(arg1 + 0x70)

int64_t r14 = *(*(arg1 + 0x20) + 0x30)
int64_t rax

if (*(arg1 + 0x82) != 0)
    int64_t rax_1 = *(arg1 + 0x90)
    *(arg1 + 0x98) = rax_1
    
    if (*(arg1 + 0x88) != rax_1)
        goto label_142a7a6c5
    
    rax = sx.q(rbx)
    
    if (rax s< *(arg1 + 0x78))
        rbx += 1
        
        if ((zx.d(*(r14 + (rax << 1))) & 0xfffffc00) == 0xd800)
            int64_t rax_4 = sx.q(rbx)
            
            if (rax_4 != *(arg1 + 0x30) && (zx.d(*(r14 + (rax_4 << 1))) & 0xfffffc00) == 0xdc00)
                rbx += 1
        
        goto label_142a7a6c5
    
    *(arg1 + 0x82) = 0
else if (*(arg1 + 0x98) s< 0)
label_142a7a6c5:
    void* rdx = *(arg1 + 8)
    rax = zx.q(*(arg1 + 0x78) - *(rdx + 0x7c))
    
    if (rbx s<= rax.d)
        int64_t rcx = sx.q(*(rdx + 0xa0))
        
        if (rcx.d u> 5)
            abort()
            noreturn
        
        int64_t r13 = sx.q(rax.d)
        int64_t rsi = sx.q(rbx)
        int64_t rax_8
        
        switch (rcx)
            case 0
                sub_142a76f00(arg1, rbx, 0, arg2)
                
                if (*arg2 s<= 0)
                    while (true)
                        if (*(arg1 + 0x82) != 0)
                            goto label_142a7a9b4
                        
                        if (rsi s>= r13)
                            break
                        
                        rbx += 1
                        int32_t rax_10 = zx.d(*(r14 + (rsi << 1))) & 0xfffffc00
                        rsi += 1
                        
                        if (rax_10 == 0xd800 && sx.q(rbx) != *(arg1 + 0x78)
                                && (zx.d(*(r14 + (rsi << 1))) & 0xfffffc00) == 0xdc00)
                            rbx += 1
                            rsi += 1
                        
                        if (sub_142a7a5e0(arg1, sx.q(rbx), arg2).b != 0)
                            goto label_142a7a988_2
                        
                        sub_142a76f00(arg1, rbx, 0, arg2)
                        
                        if (*arg2 s> 0)
                            rax_8.b = 0
                            return rax_8
                    
                    goto label_142a7a981
                
            labelid_42:
                rax_8.b = 0
            case 1, 5
                int32_t rbp_2 = *(rdx + 0xb8)
                
                while (true)
                    uint32_t rcx_15 = zx.d(*(r14 + (rsi << 1)))
                    int32_t rdx_10 = rbx
                    rbx += 1
                    rsi += 1
                    
                    if ((rcx_15 & 0xfffffc00) == 0xd800 && sx.q(rbx) != *(arg1 + 0x78))
                        uint32_t r8_4 = zx.d(*(r14 + (rsi << 1)))
                        
                        if ((r8_4 & 0xfffffc00) == 0xdc00)
                            rbx += 1
                            rsi += 1
                            rcx_15 = ((rcx_15 - 0xd7f7) << 0xa) + r8_4
                    
                    if (rcx_15 == rbp_2)
                        sub_142a76f00(arg1, rdx_10, 0, arg2)
                        
                        if (*arg2 s> 0)
                            goto label_142a7a988_2
                        
                        if (*(arg1 + 0x82) != 0)
                            goto label_142a7a9b4
                    
                    if (rsi s> r13)
                        break
                    
                    int64_t rax_22 = *(arg1 + 0x128)
                    
                    if (rax_22 != 0)
                        rax_8 = rax_22(*(arg1 + 0x130), sx.q(rbx))
                        
                        if (rax_8.b == 0)
                            *arg2 = 0x10313
                            return rax_8
                
                goto label_142a7a97a
            case 2
                while (true)
                    uint32_t r9_6 = zx.d(*(r14 + (rsi << 1)))
                    int32_t rbp_1 = rbx
                    rbx += 1
                    rsi += 1
                    
                    if ((r9_6 & 0xfffffc00) == 0xd800 && sx.q(rbx) != *(arg1 + 0x78))
                        uint32_t rcx_7 = zx.d(*(r14 + (rsi << 1)))
                        
                        if ((rcx_7 & 0xfffffc00) == 0xdc00)
                            rbx += 1
                            rsi += 1
                            r9_6 = ((r9_6 - 0xd7f7) << 0xa) + rcx_7
                    
                    if (r9_6 s>= 0x100)
                        if (sub_142a9f280(*(*(arg1 + 8) + 0xb0), zx.q(r9_6)).b != 0)
                        label_142a7a88b:
                            sub_142a76f00(arg1, rbp_1, 0, arg2)
                            
                            if (*arg2 s> 0)
                                goto label_142a7a988_2
                            
                            if (*(arg1 + 0x82) != 0)
                                goto label_142a7a9b4
                    else if (test_bit(sx.d(*((sx.q(r9_6) s>> 3) + *(*(arg1 + 8) + 0xc0))), 
                            r9_6 & 7))
                        goto label_142a7a88b
                    
                    if (rsi s> r13)
                        break
                    
                    if (sub_142a7a5e0(arg1, sx.q(rbx), arg2).b != 0)
                        rax_8.b = 0
                        return rax_8
                
            label_142a7a97a:
                *(arg1 + 0x82) = 0
            label_142a7a981:
                *(arg1 + 0xa8) = 1
            label_142a7a988:
                rax_8.b = 0
            case 3
                if (rsi s<= *(arg1 + 0x70))
                    sub_142a76f00(arg1, rbx, 0, arg2)
                    
                    if (*arg2 s<= 0)
                        return zx.q(*(arg1 + 0x82))
                    
                label_142a7a988_1:
                    rax_8.b = 0
                else
                    *(arg1 + 0x82) = 0
                    rax_8.b = 0
            case 4
                if (rsi != *(arg1 + 0x50))
                label_142a7a9f7:
                    int64_t r12_1 = sx.q(rbx)
                    int64_t rsi_1 = r12_1
                    int16_t* rbp_4 = r14 - 2 + (r12_1 << 1)
                    
                    if ((*(*(arg1 + 8) + 0x18) & 1) == 0)
                        while (true)
                            uint32_t rcx_21 = zx.d(*rbp_4)
                            
                            if (sub_142a7b5d0(rcx_21).b != 0)
                                if (rcx_21 == 0xd && r12_1 s< *(arg1 + 0x78)
                                        && *(r14 + (rsi_1 << 1)) == 0xa)
                                    rbx += 1
                                    rsi_1 += 1
                                    rbp_4 = &rbp_4[1]
                                
                                sub_142a76f00(arg1, rbx, 0, arg2)
                                
                                if (*arg2 s> 0)
                                    goto label_142a7ab7b
                                
                                if (*(arg1 + 0x82) != 0)
                                    break
                            
                            if (rsi_1 s>= r13)
                                goto label_142a7ab6d
                            
                            rbx += 1
                            int32_t rax_34 = zx.d(*(r14 + (rsi_1 << 1))) & 0xfffffc00
                            rsi_1 += 1
                            rbp_4 = &rbp_4[1]
                            
                            if (rax_34 == 0xd800 && sx.q(rbx) != *(arg1 + 0x78)
                                    && (zx.d(*(r14 + (rsi_1 << 1))) & 0xfffffc00) == 0xdc00)
                                rbx += 1
                                rsi_1 += 1
                                rbp_4 = &rbp_4[1]
                            
                            r12_1 = sx.q(rbx)
                            
                            if (sub_142a7a5e0(arg1, r12_1, arg2).b != 0)
                                rax_8.b = 0
                                return rax_8
                    else
                        while (true)
                            if (*rbp_4 != 0xa)
                            label_142a7aa3e:
                                
                                if (rsi_1 s>= r13)
                                label_142a7ab6d:
                                    *(arg1 + 0x82) = 0
                                    *(arg1 + 0xa8) = 1
                                else
                                    rbx += 1
                                    int32_t rax_29 = zx.d(*(r14 + (rsi_1 << 1))) & 0xfffffc00
                                    rsi_1 += 1
                                    rbp_4 = &rbp_4[1]
                                    
                                    if (rax_29 == 0xd800 && sx.q(rbx) != *(arg1 + 0x78)
                                            && (zx.d(*(r14 + (rsi_1 << 1))) & 0xfffffc00)
                                            == 0xdc00)
                                        rbx += 1
                                        rsi_1 += 1
                                        rbp_4 = &rbp_4[1]
                                    
                                    if (sub_142a7a5e0(arg1, sx.q(rbx), arg2).b == 0)
                                        continue
                                    
                                    rax_8.b = 0
                                    return rax_8
                            else
                                sub_142a76f00(arg1, rbx, 0, arg2)
                                
                                if (*arg2 s<= 0)
                                    if (*(arg1 + 0x82) != 0)
                                        break
                                    
                                    goto label_142a7aa3e
                            
                        label_142a7ab7b:
                            rax_8.b = 0
                            return rax_8
                    
                    rax_8.b = 1
                else
                    sub_142a76f00(arg1, rbx, 0, arg2)
                    
                    if (*arg2 s> 0)
                    label_142a7a988_2:
                        rax_8.b = 0
                    else
                        if (*(arg1 + 0x82) == 0)
                            rbx += 1
                            
                            if ((zx.d(*(r14 + (rsi << 1))) & 0xfffffc00) == 0xd800)
                                int64_t rax_25 = sx.q(rbx)
                                
                                if (rax_25 != *(arg1 + 0x78)
                                        && (zx.d(*(r14 + (rax_25 << 1))) & 0xfffffc00) == 0xdc00)
                                    rbx += 1
                            
                            goto label_142a7a9f7
                        
                    label_142a7a9b4:
                        rax_8.b = 1
        
        return rax_8
    
    *(arg1 + 0x82) = 0

*(arg1 + 0xa8) = 1
rax.b = 0
return rax
