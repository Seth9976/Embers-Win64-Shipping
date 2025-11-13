// 函数: sub_142b06e10
// 地址: 0x142b06e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r12 = *(arg1 + 0x10)
int64_t rcx = *(arg1 + 0x18)
uint64_t rdi
rdi.b = 0
char arg_8 = 0
uint64_t result = *(arg1 + 8)
char* r9 = *(arg1 + 0x20)
int64_t r15 = *(arg1 + 0x28)
int32_t* r8 = *(arg1 + 0x30)

if (result == 0 || r15 u< r9 || rcx u< r12)
    *arg2 = 1
    return result

uint32_t r10 = *(result + 0x54)
void* rbp = *(result + 0x10)
uint16_t r13 = *(rbp + 6) u>> 7

if (r10 != 0)
label_142b074d9:
    
    if (r12 u>= rcx)
        *arg2 = 0
    else
        uint32_t rcx_41 = zx.d(*r12)
        
        if ((rcx_41 & 0xfffffc00) != 0xdc00)
        label_142b074c8:
            *arg2 = 0xc
        else
            r12 = &r12[1]
            r10 = ((r10 - 0xd7f7) << 0xa) + rcx_41
        label_142b07500:
            *arg2 = 0xa
    
    result = *(arg1 + 8)
    *(result + 0x54) = r10
else if (r12 u< rcx)
    while (true)
        void* rdx = *(arg1 + 8)
        
        if (*(rdx + 0x50) != 0xa)
        label_142b06f50:
            r10 = zx.d(*r12)
            uint32_t r11_1 = 0xffff
            uint32_t rsi_1 = zx.d(*(rbp + 2))
            r12 = &r12[1]
            int32_t rcx_9
            
            if (r10 s> 0xa0)
                if (r10 == 0x200c)
                    if (rsi_1.w == 0)
                        result = 0
                        *(rbp + 2) = 0
                    label_142b0736b:
                        
                        if (r12 u>= rcx)
                            goto label_142b07522
                        
                        rdi = zx.q(arg_8)
                        continue
                        continue
                    else
                        *(rbp + 2) = 0
                        r11_1 = 0xe8
                else if (r10 == 0x200d)
                    r11_1 = 0xd9
                    
                    if (rsi_1.w != 0)
                        r11_1 = 0xe9
                    
                    *(rbp + 2) = 0
                else if (0xd7f - r10.w u> 0x47f)
                label_142b07268:
                    *(rbp + 2) = 0
                else
                    if (r10 - 0x964 u> 1)
                        int32_t temp1_1
                        int32_t temp2_1
                        temp1_1:temp2_1 = sx.q(r10 - 0x900)
                        r13 = (((temp1_1 & 0x7f) + temp2_1) s>> 7).w
                        int16_t rdx_4 = r13 * 0x80
                        
                        if (rdx_4 != *(rbp + 6) || *(rbp + 0x18) != 0)
                            *(rbp + 6) = rdx_4
                            rdi.b = 1
                            arg_8 = 1
                            *(rbp + 0xc) = *(zx.q(r13) * 0xc + 0x143668664)
                            *(rbp + 0x18) = 0
                        
                        int16_t rax_13 = *(rbp + 6)
                        
                        if (rax_13 == 0x100)
                            if (r10 == 0xa70)
                                r10 = 0xa02
                            else if (r10 == 0xa71)
                                *(rbp + 2) = 0xa71
                        
                        r10 -= zx.d(rax_13)
                    
                    uint64_t rax_15 = zx.q(r10.b)
                    r11_1 = zx.d(*((rax_15 << 1) + 0x1436687a0))
                    
                    if ((*(rbp + 0xc) & *(rax_15 + 0x143668720)) == 0
                            && (*(rbp + 6) != 0x300 || r10 != 0x931))
                        r11_1 = 0xffff
                    
                    if (rdi.b == 0)
                    label_142b0724c:
                        
                        if (*(rbp + 6) != 0x100)
                            goto label_142b07268
                        
                        result = zx.q(r10 + 0x100)
                        
                        if (result.d == 0xa71)
                            goto label_142b0736b
                        
                        goto label_142b07268
                    
                    arg_8 = 0
                    int32_t rdi_2 = zx.d(*(zx.q(r13) * 0xc + 0x143668668)) + 0xef00
                    int32_t rcx_17 = ((r12 - *(arg1 + 0x10)) s>> 1).d - 1
                    
                    if (r9 u>= r15)
                        if ((rdi_2 & 0xff0000) != 0)
                            void* rdx_6 = *(arg1 + 8)
                            *(sx.q(*(rdx_6 + 0x5b)) + rdx_6 + 0x68) = (rdi_2 u>> 0x10).b
                            void* rax_30 = *(arg1 + 8)
                            *(rax_30 + 0x5b) += 1
                        
                        if ((rdi_2 & 0xff00) == 0)
                            goto label_142b0718c
                        
                    label_142b07173:
                        void* rdx_5 = *(arg1 + 8)
                        *(sx.q(*(rdx_5 + 0x5b)) + rdx_5 + 0x68) = (rdi_2 u>> 8).b
                        void* rax_21 = *(arg1 + 8)
                        *(rax_21 + 0x5b) += 1
                    label_142b0718c:
                        void* rcx_20 = *(arg1 + 8)
                        *(sx.q(*(rcx_20 + 0x5b)) + rcx_20 + 0x68) = rdi_2.b
                        void* rax_23 = *(arg1 + 8)
                        *(rax_23 + 0x5b) += 1
                        *arg2 = 0xf
                    else
                        if (rdi_2 u> 0xff)
                            if (rdi_2 u> 0xffff)
                                *r9 = (rdi_2 u>> 0x10).b
                                r9 = &r9[1]
                                
                                if (r8 != 0)
                                    rcx_17 -= 1
                                    *r8 = rcx_17
                                    r8 = &r8[1]
                            
                            if (r9 u>= r15)
                                goto label_142b07173
                            
                            *r9 = (rdi_2 u>> 8).b
                            r9 = &r9[1]
                            
                            if (r8 != 0)
                                *r8 = rcx_17
                                r8 = &r8[1]
                            
                            if (r9 u>= r15)
                                goto label_142b0718c
                        
                        *r9 = rdi_2.b
                        r9 = &r9[1]
                        
                        if (r8 != 0)
                            *r8 = rcx_17
                            r8 = &r8[1]
                        
                        if (*arg2 s<= 0)
                            goto label_142b0724c
                
                result = 0x100
                
                if (*(rbp + 6) != 0x100)
                label_142b072dc:
                    
                    if (r11_1 == 0xffff)
                        if ((r10 & 0xfffff800) != 0xd800)
                            goto label_142b07500
                        
                        if (not(test_bit(r10, 0xa)))
                            break
                        
                        goto label_142b074c8
                    
                    if (r11_1 == 0xe8)
                        *(rbp + 2) = 0xe8
                else
                    result = 0xa71
                    
                    if (rsi_1 != 0xa71)
                        goto label_142b072dc
                    
                    result = zx.q(r10 - 0x900)
                    
                    if (result.d u> 0x4f)
                        goto label_142b072dc
                    
                    result.b = *(sx.q(result.d) + 0x1436686d0) & 1
                    
                    if (result.b == 0)
                        goto label_142b072dc
                    
                    *(rbp + 2) = 0
                    result = zx.q(r11_1 << 0x10) | 0xe800
                    r11_1 |= result.d
                
                rcx_9 = ((r12 - *(arg1 + 0x10)) s>> 1).d - 1
                
                if (r9 u>= r15)
                    if ((r11_1 & 0xff0000) != 0)
                        void* rdx_11 = *(arg1 + 8)
                        *(sx.q(*(rdx_11 + 0x5b)) + rdx_11 + 0x68) = (r11_1 u>> 0x10).b
                        void* rax_45 = *(arg1 + 8)
                        *(rax_45 + 0x5b) += 1
                    
                    if ((r11_1 & 0xff00) == 0)
                        goto label_142b07494
                    
                label_142b0747a:
                    void* rdx_12 = *(arg1 + 8)
                    *(sx.q(*(rdx_12 + 0x5b)) + rdx_12 + 0x68) = (r11_1 u>> 8).b
                    void* rax_47 = *(arg1 + 8)
                    *(rax_47 + 0x5b) += 1
                label_142b07494:
                    void* rcx_40 = *(arg1 + 8)
                    *(sx.q(*(rcx_40 + 0x5b)) + rcx_40 + 0x68) = r11_1.b
                    result = *(arg1 + 8)
                    *(result + 0x5b) += 1
                    *arg2 = 0xf
                    goto label_142b07522
                
                if (r11_1 u<= 0xff)
                    *r9 = r11_1.b
                else
                    if (r11_1 u> 0xffff)
                        *r9 = (r11_1 u>> 0x10).b
                        r9 = &r9[1]
                        
                        if (r8 != 0)
                            rcx_9 -= 1
                            *r8 = rcx_9
                            r8 = &r8[1]
                    
                    if (r9 u>= r15)
                        goto label_142b0747a
                    
                    result = zx.q(r11_1 u>> 8)
                    *r9 = result.b
                    r9 = &r9[1]
                    
                    if (r8 != 0)
                        *r8 = rcx_9
                        r8 = &r8[1]
                    
                    if (r9 u>= r15)
                        goto label_142b07494
                    
                    *r9 = r11_1.b
                
                goto label_142b06fe2
            
            result = *(arg1 + 8)
            *(result + 0x50) = r10
            rcx_9 = ((r12 - *(arg1 + 0x10)) s>> 1).d - 1
            
            if (r9 u>= r15)
                if ((r10 & 0xff0000) != 0)
                    void* rdx_9 = *(arg1 + 8)
                    *(sx.q(*(rdx_9 + 0x5b)) + rdx_9 + 0x68) = (r10 s>> 0x10).b
                    void* rax_40 = *(arg1 + 8)
                    *(rax_40 + 0x5b) += 1
                
                if ((r10 & 0xff00) != 0)
                label_142b07413:
                    void* rdx_10 = *(arg1 + 8)
                    *(sx.q(*(rdx_10 + 0x5b)) + rdx_10 + 0x68) = (r10 s>> 8).b
                    void* rax_42 = *(arg1 + 8)
                    *(rax_42 + 0x5b) += 1
                
                void* rcx_35 = *(arg1 + 8)
                *(sx.q(*(rcx_35 + 0x5b)) + rcx_35 + 0x68) = r10.b
                result = *(arg1 + 8)
                *(result + 0x5b) += 1
                *arg2 = 0xf
                goto label_142b07522
            
            if (r10 s<= 0xff)
            label_142b06fdf:
                *r9 = r10.b
            label_142b06fe2:
                r9 = &r9[1]
                
                if (r8 != 0)
                    *r8 = rcx_9
                    r8 = &r8[1]
                
                if (*arg2 s> 0)
                    goto label_142b07522
                
                goto label_142b0736b
            
            if (r10 s> 0xffff)
                *r9 = (r10 s>> 0x10).b
                r9 = &r9[1]
                
                if (r8 != 0)
                    rcx_9 -= 1
                    *r8 = rcx_9
                    r8 = &r8[1]
            
            if (r9 u>= r15)
                goto label_142b07413
            
            result = zx.q(r10 s>> 8)
            *r9 = result.b
            r9 = &r9[1]
            
            if (r8 != 0)
                *r8 = rcx_9
                r8 = &r8[1]
            
            if (r9 u< r15)
                goto label_142b06fdf
        else
            result = nullptr
            uint32_t r10_1 = zx.d(*(zx.q(r13) * 0xc + 0x143668668))
            *(rdx + 0x50) = 0
            r10 = r10_1 + 0xef00
            int32_t rcx_5 = ((r12 - *(arg1 + 0x10)) s>> 1).d - 1
            
            if (r9 u>= r15)
                if ((r10 & 0xff0000) != 0)
                    void* rdx_7 = *(arg1 + 8)
                    *(sx.q(*(rdx_7 + 0x5b)) + rdx_7 + 0x68) = (r10 u>> 0x10).b
                    void* rax_35 = *(arg1 + 8)
                    *(rax_35 + 0x5b) += 1
                
                if ((r10 & 0xff00) != 0)
                label_142b073ac:
                    void* rdx_8 = *(arg1 + 8)
                    *(sx.q(*(rdx_8 + 0x5b)) + rdx_8 + 0x68) = (r10 u>> 8).b
                    void* rax_37 = *(arg1 + 8)
                    *(rax_37 + 0x5b) += 1
            else
                if (r10 u<= 0xff)
                label_142b06f34:
                    *r9 = r10.b
                    r9 = &r9[1]
                    
                    if (r8 != 0)
                        *r8 = rcx_5
                        r8 = &r8[1]
                    
                    if (*arg2 s> 0)
                        goto label_142b07522
                    
                    goto label_142b06f50
                
                if (r10 u> 0xffff)
                    *r9 = (r10 u>> 0x10).b
                    r9 = &r9[1]
                    
                    if (r8 != 0)
                        rcx_5 -= 1
                        *r8 = rcx_5
                        r8 = &r8[1]
                
                if (r9 u>= r15)
                    goto label_142b073ac
                
                result = zx.q(r10 u>> 8)
                *r9 = result.b
                r9 = &r9[1]
                
                if (r8 != 0)
                    *r8 = rcx_5
                    r8 = &r8[1]
                
                if (r9 u< r15)
                    goto label_142b06f34
        
        void* rcx_30 = *(arg1 + 8)
        *(sx.q(*(rcx_30 + 0x5b)) + rcx_30 + 0x68) = r10.b
        result = *(arg1 + 8)
        *(result + 0x5b) += 1
        *arg2 = 0xf
        goto label_142b07522
    
    goto label_142b074d9

label_142b07522:
*(arg1 + 0x10) = r12
*(arg1 + 0x20) = r9
return result
