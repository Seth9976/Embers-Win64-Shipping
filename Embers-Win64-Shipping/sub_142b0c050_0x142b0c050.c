// 函数: sub_142b0c050
// 地址: 0x142b0c050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1
int64_t var_8 = arg3
void* r13 = *(arg1 + 8)
char* r9 = *(arg1 + 0x10)
int64_t r14 = *(arg1 + 0x18)
int16_t* rbx = *(arg1 + 0x20)
int32_t r8 = *(r13 + 0x48)
int32_t r10 = *(r13 + 0x4c)
char rsi = *(r13 + 0x40)

if (r8 == 0)
    r8 = 0x40

int64_t r15 = *(arg1 + 0x28)
int32_t* rdi = *(arg1 + 0x30)
uint64_t r10_1 = zx.q(r10 s>> 2)
int32_t arg_10 = 0x2840
int32_t rbp = sbb.d(arg3.d, arg3.d, rsi != 0)
int32_t r11 = 0
int32_t i = r10 & 3

if (i == 0 || rsi s<= 0 || rbx u>= r15)
label_142b0c0d4:
    r10_1 = zx.q(r14.d - r9.d)
    i = ((*(arg1 + 0x28) - rbx) s>> 1).d
    
    if (i s> r10_1.d)
        i = r10_1.d
    
    if (i s<= 0)
        goto label_142b0c13e
    
    do
        uint32_t rcx = zx.d(*r9)
        
        if (rcx - 0x50 u> 0x7f)
            if (rcx s> 0x20)
                goto label_142b0c13e
            
            if (rcx != 0x20)
                r8 = 0x40
            
            *rbx = rcx.w
        else
            int32_t rax_3 = r8 - 0x90 + rcx
            
            if (rax_3 s>= 0x3000)
                goto label_142b0c13e
            
            *rbx = rax_3.w
            r8 = (rax_3 & 0xffffff80) + 0x40
        
        *rdi = r11
        r9 = &r9[1]
        rdi = &rdi[1]
        r11 += 1
        i -= 1
        rbx = &rbx[1]
    while (i s> 0)
    
    goto label_142b0c13e

while (true)
label_142b0c276:
    
    if (r9 u< r14)
        uint32_t rax_11 = zx.d(*r9)
        r11 += 1
        int64_t rcx_5 = sx.q(rsi)
        r9 = &r9[1]
        rsi += 1
        *(rcx_5 + r13 + 0x41) = rax_11.b
        int32_t rax_12
        
        if (rax_11 s> 0x20)
            rax_12 = rax_11 - 0xd
        else
            rax_12 = sx.d(*(zx.q(rax_11) + &data_143669868))
        
        if (i != 1)
            if (i != 2)
                rax_12 *= 0xe6a9
            else
                rax_12 *= 0xf3
        
        if (rax_12 s< 0)
        label_142b0c236:
            *arg2 = 0xc
            *(r13 + 0x48) = 0x40
            break
        
        r10_1 = zx.q(r10_1.d + rax_12)
        int32_t i_1 = i
        i -= 1
        int32_t rcx_3
        
        if (i_1 != 1)
            continue
        else
            rsi = 0
            rcx_3 = r10_1.d + r8
            
            if (rcx_3 u> 0x10ffff)
                goto label_142b0c236
        
        while (true)
            if (rcx_3 - 0x3040 u> 0xa763)
                r8 = (rcx_3 & 0xffffff80) + 0x40
            else if (rcx_3 s<= 0x309f)
                r8 = 0x3070
            else if (rcx_3 - 0x4e00 u<= 0x51a5)
                r8 = 0x7711
            else if (rcx_3 s< 0xac00)
                r8 = (rcx_3 & 0xffffff80) + 0x40
            else
                r8 = 0xc1d1
            
            if (rcx_3 s> 0xffff)
                *rbx = (rcx_3 s>> 0xa).w - 0x2840
                rcx_3.w &= 0x3ff
                rbx = &rbx[1]
                
                if (rbx u< r15)
                    rcx_3.w |= 0xdc00
                    *rbx = rcx_3.w
                    rbx = &rbx[1]
                    *rdi = rbp
                    rdi[1] = rbp
                    rdi = &rdi[2]
                    goto label_142b0c13e
                
                *rdi = rbp
                rdi = &rdi[1]
                rcx_3.w |= 0xdc00
                *(r13 + 0x90) = rcx_3.w
                *(r13 + 0x5d) = 1
            else
                *rbx = rcx_3.w
                rbx = &rbx[1]
                *rdi = rbp
                rdi = &rdi[1]
            label_142b0c13e:
                rbp = r11
                
                if (r9 u>= r14)
                    break
                
                if (rbx u< r15)
                    uint32_t rcx_1 = zx.d(*r9)
                    r11 += 1
                    r9 = &r9[1]
                    
                    if (rcx_1 - 0x50 u<= 0x7f)
                        rcx_3 = rcx_1 - 0x90 + r8
                        
                        if (rcx_3 s< 0x3000)
                            *rbx = rcx_3.w
                            arg1 = result
                            *rdi = rbp
                            rbx = &rbx[1]
                            rdi = &rdi[1]
                            r8 = (rcx_3 & 0xffffff80) + 0x40
                            goto label_142b0c0d4
                        
                        continue
                    
                    if (rcx_1 s<= 0x20)
                        *rbx = rcx_1.w
                        
                        if (rcx_1 != 0x20)
                            r8 = 0x40
                        
                        *rdi = rbp
                        rbx = &rbx[1]
                        rdi = &rdi[1]
                        goto label_142b0c13e
                    
                    if (rcx_1 - 0x25 u> 0xd5 || r9 u>= r14)
                        if (rcx_1 != 0xff)
                            *(r13 + 0x41) = rcx_1.b
                            rsi = 1
                            int32_t rax_10 = sub_142b0cb20(rcx_1)
                            i = rax_10 & 3
                            r10_1 = zx.q(rax_10 s>> 2)
                            goto label_142b0c276
                        
                        r8 = 0x40
                        goto label_142b0c13e
                    
                    int32_t r10_3 = rcx_1 * 0xf3
                    
                    if (rcx_1 s< 0x90)
                        r10_1 = zx.q(r10_3 - 0x4c30)
                    else
                        r10_1 = zx.q(r10_3 - 0xc530)
                    
                    uint64_t rax_6 = zx.q(*r9)
                    r11 += 1
                    int32_t rax_7
                    
                    if (rax_6.d u> 0x20)
                        rax_7 = rax_6.d - 0xd
                    else
                        rax_7 = sx.d(*(rax_6 + &data_143669868))
                    
                    r9 = &r9[1]
                    
                    if (rax_7 s>= 0)
                        rcx_3 = rax_7 + r10_1.d + r8
                        
                        if (rcx_3 u<= 0x10ffff)
                            continue
                    
                    rsi = 2
                    *(r13 + 0x41) = r9[-2]
                    *(r13 + 0x42) = r9[-1]
                    goto label_142b0c236
            
            *arg2 = 0xf
            goto label_142b0c3b2
    
    if (*arg2 == 0xc)
        *(r13 + 0x48) = 0x40
        break
    
label_142b0c3b2:
    *(r13 + 0x48) = r8
    *(r13 + 0x4c) = (r10_1 << 2).d | i
    break

*(r13 + 0x40) = rsi
*(result + 0x20) = rbx
*(result + 0x10) = r9
*(result + 0x30) = rdi
return result
