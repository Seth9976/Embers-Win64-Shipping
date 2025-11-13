// 函数: sub_142b085c0
// 地址: 0x142b085c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 8)
char* r10 = *(arg1 + 0x10)
int64_t r14 = *(arg1 + 0x18)
uint16_t* r9 = *(arg1 + 0x20)
void* r13 = *(rbp + 0x10)
int64_t rsi = *(arg1 + 0x28)
int32_t* result = *(arg1 + 0x30)
char r8 = *(r13 + 0x40)
char rdi = *(r13 + 0x41)
uint8_t r15 = *(r13 + 0x43)
uint8_t r12 = *(r13 + 0x44)
int32_t r11 = sbb.d(arg3, arg3, rdi != 0)
char arg_18 = r8
int32_t rbx = 0
char arg_20 = *(r13 + 0x42)

if (r8 == 0)
    if (rdi != 0)
        goto label_142b08686
    
    goto label_142b08637

int32_t* rcx_26
int32_t rdx_10

if (rdi != 0)
label_142b08843:
    
    while (true)
        if (r10 u>= r14)
            goto label_142b08bb2
        
        if (r9 u>= rsi)
            goto label_142b08b59
        
        uint8_t r8_2 = *r10
        rbx += 1
        r10 = &r10[1]
        uint64_t rcx_9 = zx.q(rdi)
        
        if (rcx_9.d u<= 6)
            switch (rcx_9)
                case 0
                    if ((1 << r8_2 & 0x2601) != 0)
                        *r9 = zx.w(r8_2)
                        r9 = &r9[1]
                        
                        if (result != 0)
                            *result = r11
                            result = &result[1]
                    else if (r8_2 u< 0x10)
                        if (r8_2 u<= 8)
                            *(rbp + 0x41) = r8_2
                            arg_20 = r8_2 - 1
                            rdi = 3
                            *(rbp + 0x40) = 1
                            continue
                        else if (r8_2 == 0xb)
                            *(rbp + 0x41) = r8_2
                            rdi = 4
                            *(rbp + 0x40) = 1
                            continue
                        else if (r8_2 != 0xe)
                            if (r8_2 != 0xf)
                            label_142b08b15:
                                rcx_26 = arg2
                                *rcx_26 = 0xc
                                *(rbp + 0x41) = r8_2
                                *(rbp + 0x40) = 1
                                goto label_142b08bb7
                            
                            r11 = rbx
                            arg_18 = 0
                        label_142b08637:
                            void* r8_1 = &r10[1]
                            
                            if (r8_1 u< r14)
                            label_142b08640:
                                
                                if (r9 u< rsi)
                                    char rdx_1 = *r10
                                    
                                    if (rdx_1 + 0x20 u> 0x12)
                                        *r9 = zx.w(rdx_1) << 8 | zx.w(*r8_1)
                                        r9 = &r9[1]
                                        
                                        if (result != 0)
                                            *result = r11
                                            result = &result[1]
                                        
                                        r11 = rbx
                                        r10 = &r10[2]
                                        rbx += 2
                                        r8_1 += 2
                                        
                                        if (r8_1 u< r14)
                                            goto label_142b08640
                            
                        label_142b08686:
                            
                            if (r10 u>= r14)
                                goto label_142b08bb2
                            
                            if (r9 u>= rsi)
                                goto label_142b08b59
                            
                            r8_2 = *r10
                            rbx += 1
                            r10 = &r10[1]
                            uint32_t rdx_3 = zx.d(rdi)
                            
                            if (rdi != 0)
                                if (rdx_3 == 1)
                                    *(rbp + 0x42) = r8_2
                                    r12 = r8_2
                                    *(rbp + 0x40) = 2
                                    rdi = 2
                                    goto label_142b08686
                                
                                if (rdx_3 != 2)
                                    goto label_142b08686
                                
                                *r9 = zx.w(r12) << 8 | zx.w(r8_2)
                                r9 = &r9[1]
                                
                                if (result != 0)
                                    *result = r11
                                    result = &result[1]
                                
                                r11 = rbx
                                rdi = 0
                                goto label_142b08637
                            
                            if (r8_2 + 0x20 u> 0x12)
                                *(rbp + 0x41) = r8_2
                                r12 = r8_2
                                *(rbp + 0x40) = 1
                                rdi = 2
                                goto label_142b08686
                            
                            if (r8_2 u> 0xe7)
                                if (r8_2 u<= 0xef)
                                    *(rbp + 0x41) = r8_2
                                    r15 = r8_2 + 0x18
                                    *(rbp + 0x40) = 1
                                    rdi = 6
                                    arg_18 = 1
                                    continue
                                else if (r8_2 == 0xf1)
                                    arg_18 = 1
                                    rdi = 4
                                    *(rbp + 0x40) = 0xf101
                                    continue
                                else if (r8_2 == 0xf0)
                                    *(rbp + 0x40) = 0xf001
                                    rdi = 1
                                    goto label_142b08686
                                
                                goto label_142b08b15
                            
                            r15 = r8_2 + 0x20
                            arg_18 = 1
                        else
                            rdi = 1
                            *(rbp + 0x41) = r8_2
                            *(rbp + 0x40) = 1
                            continue
                    else if (r8_2 u<= 0x17)
                        r15 = r8_2 - 0x10
                    else
                        *(rbp + 0x41) = r8_2
                        r15 = r8_2 - 0x18
                        *(rbp + 0x40) = 1
                        rdi = 6
                        continue
                    
                    r11 = rbx
                    goto label_142b08772
                case 1
                    *(rbp + 0x42) = r8_2
                    r12 = r8_2
                    *(rbp + 0x40) = 2
                    rdi = 2
                    continue
                case 2
                    *r9 = zx.w(r12) << 8 | zx.w(r8_2)
                    r9 = &r9[1]
                    
                    if (result != 0)
                        *result = r11
                        result = &result[1]
                    
                    rdi = 0
                    r11 = rbx
                    goto label_142b08772
                case 3
                    if (r8_2 u>= 0x80)
                        rdx_10 = (zx.d(r8_2) & 0x7f) + *(r13 + (sx.q(arg_20) << 2))
                        
                        if (rdx_10 u> 0xffff)
                            *r9 = (rdx_10 u>> 0xa).w - 0x2840
                            r9 = &r9[1]
                            
                            if (r9 u>= rsi)
                                break
                            
                            rdx_10.w &= 0x3ff
                            rdx_10.w |= 0xdc00
                            *r9 = rdx_10.w
                            r9 = &r9[1]
                            
                            if (result != 0)
                                *result = r11
                                result[1] = r11
                                result = &result[2]
                            
                            rdi = 0
                        else
                            *r9 = rdx_10.w
                            r9 = &r9[1]
                            
                            if (result == 0)
                                rdi = 0
                            else
                                *result = r11
                                result = &result[1]
                                rdi = 0
                    else
                        *r9 = *((sx.q(arg_20) << 2) + &data_143668d60) + zx.w(r8_2)
                        r9 = &r9[1]
                        
                        if (result == 0)
                            rdi = 0
                        else
                            *result = r11
                            result = &result[1]
                            rdi = 0
                    
                    r11 = rbx
                    goto label_142b08772
                case 4
                    *(rbp + 0x42) = r8_2
                    r15 = r8_2 u>> 5
                    r12 = r8_2 & 0x1f
                    *(rbp + 0x40) = 2
                    rdi = 5
                    continue
                case 5
                    rdi = 0
                    *(r13 + (sx.q(r15) << 2)) = ((zx.d(r12) << 8 | zx.d(r8_2)) << 7) + 0x10000
                    r11 = rbx
                    goto label_142b08772
                case 6
                    if (r8_2 == 0)
                        *(rbp + 0x42) = 0
                        *(rbp + 0x40) = 2
                        goto label_142b08bb2
                    
                    if (r8_2 u< 0x68)
                        rdi = 0
                        *(r13 + (sx.q(r15) << 2)) = zx.d(r8_2) << 7
                    else if (r8_2 - 0x68 u>= 0x40)
                        if (r8_2 u< 0xf9)
                            *(rbp + 0x42) = r8_2
                            *(rbp + 0x40) = 2
                            goto label_142b08bb2
                        
                        rdi = 0
                        *(r13 + (sx.q(r15) << 2)) =
                            *((sx.q(zx.d(r8_2) - 0xf9) << 2) + &data_143668da0)
                    else
                        rdi = 0
                        *(r13 + (sx.q(r15) << 2)) = (zx.d(r8_2) << 7) + 0xac00
                    
                    r11 = rbx
                    goto label_142b08772
    
label_142b08b30:
    
    if (result != 0)
        *result = r11
        result = &result[1]
    
    rdx_10.w &= 0x3ff
    rdx_10.w |= 0xdc00
    *(rbp + 0x90) = rdx_10.w
    *(rbp + 0x5d) = 1
label_142b08b59:
    *arg2 = 0xf
label_142b08b5f:
    
    if (rdi == 0)
        *(rbp + 0x40) = rdi
else
label_142b08772:
    
    if (r10 u< r14)
        while (true)
            if (r9 u>= rsi)
                goto label_142b08843
            
            char rdx_7 = *r10
            
            if (rdx_7 u< 0x20)
                goto label_142b08843
            
            r10 = &r10[1]
            rbx += 1
            
            if (rdx_7 u> 0x7f)
                rdx_10 = (zx.d(rdx_7) & 0x7f) + *(r13 + (sx.q(r15) << 2))
                
                if (rdx_10 u> 0xffff)
                    *r9 = (rdx_10 u>> 0xa).w - 0x2840
                    r9 = &r9[1]
                    
                    if (r9 u>= rsi)
                        break
                    
                    rdx_10.w &= 0x3ff
                    rdx_10.w |= 0xdc00
                    *r9 = rdx_10.w
                    r9 = &r9[1]
                    
                    if (result != 0)
                        *result = r11
                        result[1] = r11
                        result = &result[2]
                else
                    *r9 = rdx_10.w
                    r9 = &r9[1]
                    
                    if (result != 0)
                        *result = r11
                        result = &result[1]
            else
                *r9 = zx.w(rdx_7)
                r9 = &r9[1]
                
                if (result != 0)
                    *result = r11
                    result = &result[1]
            
            r11 = rbx
            
            if (r10 u>= r14)
                goto label_142b08843
        
        goto label_142b08b30
    
label_142b08bb2:
    rcx_26 = arg2
label_142b08bb7:
    int32_t rcx_31 = *rcx_26
    
    if (rcx_31 s<= 0 || rcx_31 == 0xf)
        goto label_142b08b5f
    
    rdi = 0
*(r13 + 0x40) = arg_18
*(r13 + 0x42) = arg_20
*(r13 + 0x41) = rdi
*(r13 + 0x43) = r15
*(r13 + 0x44) = r12
*(arg1 + 0x10) = r10
*(arg1 + 0x20) = r9
*(arg1 + 0x30) = result
return result
