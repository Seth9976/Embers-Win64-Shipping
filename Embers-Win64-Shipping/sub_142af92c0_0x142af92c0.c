// 函数: sub_142af92c0
// 地址: 0x142af92c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 8)

if (*(r14 + 0x11a) s<= 0)
    void* r10_1 = *(r14 + 0x30)
    
    if ((*(r10_1 + 0xfd) & 2) == 0)
        if (*(r10_1 + 0x30) == 1)
            return sub_142afba90(arg1, arg2) __tailcall
        
        char* r11_1 = *(arg1 + 0x10)
        char* rbx = r11_1
        int64_t rbp = *(arg1 + 0x18)
        int64_t r15
        
        if ((*(r14 + 0x38) & 0x10) == 0)
            r15 = *(r10_1 + 0x38)
        else
            r15 = *(r10_1 + 0x40)
        
        int32_t r9_1 = *(r14 + 0x48)
        uint8_t rsi = *(r14 + 0x4c)
        int64_t r12 = *(r10_1 + 0x48)
        
        if (rsi == 0)
            rsi = *(r10_1 + 0x31)
        
        uint32_t rdx_1 = -1
        
        if (r11_1 u>= rbp)
        label_142af9565:
            
            if (*arg2 s> 0)
                char rbp_1 = *(*(r14 + 0x30) + 0x31)
                void* r11_2 = &r11_1[1]
                *(r14 + 0x41) = *r11_1
                void* r8_7 = r14 + 0x42
                
                if (r11_2 != rbx)
                    r10_1.b = 1
                    
                    while (r11_2 u< rbx)
                        uint64_t r9_5 = zx.q(*r11_2)
                        int32_t rcx_10 = *(r15 + (((zx.q(rsi) << 8) + r9_5) << 2))
                        uint64_t rax_26
                        
                        if (rcx_10 s< 0)
                            uint8_t rcx_13 = (rcx_10 u>> 0x14).b & 0xf
                            
                            if (rcx_13 != 8 || rbp_1 == 0)
                                rax_26.b = rcx_13 != 7
                                goto label_142af9616
                        else
                            rax_26, r8_7, r9_5, r10_1, r11_2 =
                                sub_142afae10(r15, (rcx_10 u>> 0x18).b)
                        label_142af9616:
                            
                            if (rax_26.b != 0)
                                break
                        *r8_7 = r9_5.b
                        r11_2 += 1
                        r8_7 += 1
                        r10_1.b += 1
                    
                    *(r14 + 0x40) = r10_1.b
                    rbx = r11_2
                else
                    *(r14 + 0x40) = 1
            else if (rbx != rbp || r11_1 u>= rbx)
                *arg2 = 8
            else
                *(r14 + 0x40) = rbx.b - r11_1.b
                void* r14_1 = r14 - r11_1
                
                do
                    *(r14_1 + r11_1 + 0x41) = *r11_1
                    r11_1 = &r11_1[1]
                while (r11_1 u< rbx)
                
                *arg2 = 0xb
            
            rdx_1 = 0xffff
        else
            do
                uint64_t rax_4 = zx.q(*rbx)
                rbx = &rbx[1]
                int32_t r8_2 = *(r15 + (((zx.q(rsi) << 8) + rax_4) << 2))
                
                if (r8_2 s< 0)
                    void* rcx_7 = r14 + 0x4c
                    uint32_t rax_10 = zx.d(rsi)
                    rsi = (r8_2 u>> 0x18).b & 0x7f
                    *rcx_7 = rax_10
                    
                    switch ((r8_2 u>> 0x14).b & 0xf)
                        case 0
                            rdx_1 = zx.d(r8_2.w)
                            break
                        case 1, 3
                            rdx_1 = (r8_2 & 0xfffff) + 0x10000
                            break
                        case 2
                            rdx_1 = zx.d(r8_2.w)
                            break
                        case 4
                            uint64_t r9_4 = zx.q(r9_1 + zx.d(r8_2.w))
                            rdx_1 = zx.d(*(r12 + (r9_4 << 1)))
                            
                            if (rdx_1 u< 0xfffe)
                                break
                            
                            if (rdx_1 != 0xfffe)
                                *arg2 = 0xc
                                break
                            
                            uint32_t rax_17
                            rax_17, r10_1 = sub_142afb4b0(r10_1 + 0x30, r9_4.d)
                            rdx_1 = rax_17
                            
                            if (rax_17 != 0xfffe)
                                break
                            
                            rcx_7 = r14 + 0x4c
                            goto label_142af952d
                        case 5
                            uint64_t r9_2 = zx.q(r9_1 + zx.d(r8_2.w))
                            rdx_1 = zx.d(*(r12 + (r9_2 << 1)))
                            uint64_t r9_3 = zx.q(r9_2.d + 1)
                            
                            if (rdx_1 u< 0xd800)
                                break
                            
                            if (rdx_1 u<= 0xdfff)
                                rdx_1 = (((rdx_1 & 0x3ff) + 9) << 0xa) + zx.d(*(r12 + (r9_3 << 1)))
                                break
                            
                            if ((rdx_1 & 0xfffe) == 0xe000)
                                rdx_1 = zx.d(*(r12 + (r9_3 << 1)))
                                break
                            
                            if (rdx_1 == 0xffff)
                                *arg2 = 0xc
                                break
                            
                        label_142af952d:
                            
                            if (*arg2 s> 0)
                                break
                            
                            *(r14 + 0x48) = 0
                            *rcx_7 = zx.d(rsi)
                            *(arg1 + 0x10) = r11_1
                            return 0xfffffff7
                        case 6
                            goto label_142af952d
                        case 7
                            *arg2 = 0xc
                            break
                        case 8
                            if (*(r10_1 + 0x31) == 0)
                                goto label_142af952d
                            
                            rsi = *rcx_7
                            *arg2 = 0xc
                            break
                    
                    r9_1 = 0
                    r11_1 = rbx
                else
                    r9_1 += r8_2 & 0xffffff
                    rsi = (r8_2 u>> 0x18).b
                    
                    if (rbx u>= rbp)
                        break
                    
                    int32_t r8_4 = *(r15 + (((zx.q(rsi) << 8) + zx.q(*rbx)) << 2))
                    
                    if (r8_4 s< 0 && (r8_4 & 0xf00000) == 0x400000)
                        rdx_1 = zx.d(*(r12 + (zx.q(zx.d(r8_4.w) + r9_1) << 1)))
                        
                        if (rdx_1 u< 0xfffe)
                            rbx = &rbx[1]
                            rsi = (r8_4 u>> 0x18).b & 0x7f
                            break
            while (rbx u< rbp)
            
            if (rdx_1 s< 0)
                goto label_142af9565
        
        *(r14 + 0x48) = 0
        *(r14 + 0x4c) = zx.d(rsi)
        *(arg1 + 0x10) = rbx
        return zx.q(rdx_1)

return 0xfffffff7
