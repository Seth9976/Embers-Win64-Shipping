// 函数: sub_142b08bf0
// 地址: 0x142b08bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
char* r9 = *(arg1 + 0x10)
int64_t rdi = *(arg1 + 0x18)
uint16_t* r8 = *(arg1 + 0x20)
void* r14 = *(rbx + 0x10)
int64_t r11 = *(arg1 + 0x28)
char r12 = *(r14 + 0x40)
char r10 = *(r14 + 0x41)
char r15 = *(r14 + 0x42)
uint8_t rsi = *(r14 + 0x43)
uint8_t rbp = *(r14 + 0x44)

if (r12 == 0)
    if (r10 != 0)
        goto label_142b08ca2
    
    goto label_142b08c61

if (r10 != 0)
label_142b08dd3:
    
    while (true)
        if (r9 u>= rdi)
            goto label_142b0908e
        
        if (r8 u>= r11)
            goto label_142b0901c
        
        uint8_t rdx_1 = *r9
        r9 = &r9[1]
        uint64_t rax_8 = zx.q(r10)
        
        if (rax_8.d u<= 6)
            switch (rax_8)
                case 0
                    if ((1 << rdx_1 & 0x2601) != 0)
                        *r8 = zx.w(rdx_1)
                        r8 = &r8[1]
                        break
                    
                    if (rdx_1 u>= 0x10)
                        if (rdx_1 u<= 0x17)
                            rsi = rdx_1 - 0x10
                            break
                        
                        *(rbx + 0x41) = rdx_1
                        rsi = rdx_1 - 0x18
                        *(rbx + 0x40) = 1
                        r10 = 6
                        continue
                    else if (rdx_1 u<= 8)
                        *(rbx + 0x41) = rdx_1
                        r15 = rdx_1 - 1
                        *(rbx + 0x40) = 1
                        r10 = 3
                        continue
                    else if (rdx_1 != 0xb)
                        if (rdx_1 == 0xe)
                            r10 = 1
                            *(rbx + 0x41) = rdx_1
                            *(rbx + 0x40) = 1
                            continue
                        
                        if (rdx_1 == 0xf)
                            r12 = 0
                        label_142b08c61:
                            void* rdx = &r9[1]
                            
                            if (rdx u< rdi)
                            label_142b08c70:
                                
                                if (r8 u< r11)
                                    char rcx = *r9
                                    
                                    if (rcx + 0x20 u> 0x12)
                                        uint16_t rax_2 = zx.w(*rdx)
                                        r9 = &r9[2]
                                        rdx += 2
                                        *r8 = zx.w(rcx) << 8 | rax_2
                                        r8 = &r8[1]
                                        
                                        if (rdx u< rdi)
                                            goto label_142b08c70
                            
                        label_142b08ca2:
                            
                            if (r9 u>= rdi)
                                goto label_142b0908e
                            
                            if (r8 u>= r11)
                                goto label_142b0901c
                            
                            rdx_1 = *r9
                            r9 = &r9[1]
                            uint32_t rcx_2 = zx.d(r10)
                            
                            if (r10 != 0)
                                if (rcx_2 == 1)
                                    *(rbx + 0x42) = rdx_1
                                    rbp = rdx_1
                                    *(rbx + 0x40) = 2
                                    r10 = 2
                                    goto label_142b08ca2
                                
                                if (rcx_2 != 2)
                                    goto label_142b08ca2
                                
                                *r8 = zx.w(rbp) << 8 | zx.w(rdx_1)
                                r8 = &r8[1]
                                r10 = 0
                                goto label_142b08c61
                            
                            if (rdx_1 + 0x20 u> 0x12)
                                *(rbx + 0x41) = rdx_1
                                rbp = rdx_1
                                *(rbx + 0x40) = 1
                                r10 = 2
                                goto label_142b08ca2
                            
                            if (rdx_1 u<= 0xe7)
                                rsi = rdx_1 + 0x20
                                r12 = 1
                                break
                            
                            if (rdx_1 u<= 0xef)
                                r12 = 1
                                *(rbx + 0x41) = rdx_1
                                *(rbx + 0x40) = 1
                                rsi = rdx_1 + 0x18
                                r10 = 6
                                continue
                            else if (rdx_1 == 0xf1)
                                r12 = 1
                                *(rbx + 0x40) = 0xf101
                                r10 = 4
                                continue
                            else if (rdx_1 == 0xf0)
                                *(rbx + 0x40) = 0xf001
                                r10 = 1
                                goto label_142b08ca2
                        
                        *arg2 = 0xc
                        *(rbx + 0x41) = rdx_1
                        *(rbx + 0x40) = 1
                        goto label_142b0908e
                    else
                        *(rbx + 0x41) = rdx_1
                        r10 = 4
                        *(rbx + 0x40) = 1
                        continue
                case 1
                    *(rbx + 0x42) = rdx_1
                    rbp = rdx_1
                    *(rbx + 0x40) = 2
                    r10 = 2
                    continue
                case 2
                    *r8 = zx.w(rbp) << 8 | zx.w(rdx_1)
                    r8 = &r8[1]
                    r10 = 0
                    break
                case 3
                    if (rdx_1 u< 0x80)
                        r10 = 0
                        *r8 = *((sx.q(r15) << 2) + &data_143668d60) + zx.w(rdx_1)
                        r8 = &r8[1]
                        break
                    
                    int32_t rcx_17 = (zx.d(rdx_1) & 0x7f) + *(r14 + (sx.q(r15) << 2))
                    
                    if (rcx_17 u> 0xffff)
                        *r8 = (rcx_17 u>> 0xa).w - 0x2840
                        rcx_17.w &= 0x3ff
                        r8 = &r8[1]
                        rcx_17.w |= 0xdc00
                        
                        if (r8 u>= r11)
                            *(rbx + 0x90) = rcx_17.w
                            goto label_142b09018
                    
                    r10 = 0
                    *r8 = rcx_17.w
                    r8 = &r8[1]
                    break
                case 4
                    *(rbx + 0x42) = rdx_1
                    rsi = rdx_1 u>> 5
                    rbp = rdx_1 & 0x1f
                    *(rbx + 0x40) = 2
                    r10 = 5
                    continue
                case 5
                    r10 = 0
                    *(r14 + (sx.q(rsi) << 2)) = ((zx.d(rbp) << 8 | zx.d(rdx_1)) << 7) + 0x10000
                    break
                case 6
                    if (rdx_1 == 0)
                        *(rbx + 0x42) = 0
                    else
                        if (rdx_1 u< 0x68)
                            r10 = 0
                            *(r14 + (sx.q(rsi) << 2)) = zx.d(rdx_1) << 7
                            break
                        
                        if (rdx_1 - 0x68 u< 0x40)
                            r10 = 0
                            *(r14 + (sx.q(rsi) << 2)) = (zx.d(rdx_1) << 7) + 0xac00
                            break
                        
                        if (rdx_1 u>= 0xf9)
                            r10 = 0
                            *(r14 + (sx.q(rsi) << 2)) =
                                *((sx.q(zx.d(rdx_1) - 0xf9) << 2) + &data_143668da0)
                            break
                        
                        *(rbx + 0x42) = rdx_1
                    
                    *(rbx + 0x40) = 2
                    goto label_142b0908e

if (r9 u>= rdi)
label_142b0908e:
    int32_t rax_25 = *arg2
    
    if (rax_25 s<= 0 || rax_25 == 0xf)
    label_142b09024:
        
        if (r10 == 0)
            *(rbx + 0x40) = r10
    else
        r10 = 0
    
    *(r14 + 0x43) = rsi
    *(r14 + 0x44) = rbp
    *(r14 + 0x40) = r12
    *(r14 + 0x41) = r10
    *(r14 + 0x42) = r15
    *(arg1 + 0x10) = r9
    *(arg1 + 0x20) = r8
    return arg1

while (true)
    if (r8 u>= r11)
        goto label_142b08dd3
    
    char rax_5 = *r9
    
    if (rax_5 u< 0x20)
        goto label_142b08dd3
    
    r9 = &r9[1]
    uint32_t rax_6 = zx.d(rax_5)
    
    if (rax_5 u> 0x7f)
        rax_6 = (rax_6 & 0x7f) + *(r14 + (sx.q(rsi) << 2))
        
        if (rax_6 u> 0xffff)
            *r8 = (rax_6 u>> 0xa).w - 0x2840
            rax_6.w &= 0x3ff
            r8 = &r8[1]
            rax_6.w |= 0xdc00
            
            if (r8 u>= r11)
                *(rbx + 0x90) = rax_6.w
            label_142b09018:
                *(rbx + 0x5d) = 1
            label_142b0901c:
                *arg2 = 0xf
                break
    
    *r8 = rax_6.w
    r8 = &r8[1]
    
    if (r9 u>= rdi)
        goto label_142b08dd3

goto label_142b09024
