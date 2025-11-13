// 函数: sub_142b0c400
// 地址: 0x142b0c400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 8)
char* r9 = *(arg1 + 0x10)
int64_t rsi = *(arg1 + 0x18)
int32_t rdx = 0x40
int16_t* rbx = *(arg1 + 0x20)
int32_t r8 = *(r14 + 0x48)
int32_t r11 = *(r14 + 0x4c)
int64_t rbp = *(arg1 + 0x28)

if (r8 == 0)
    r8 = 0x40

char rdi = *(r14 + 0x40)
uint64_t r11_1 = zx.q(r11 s>> 2)
int32_t arg_8 = 0x2840
int32_t r10_1 = r11 & 3
uint32_t rax

if (r10_1 == 0 || rdi s<= 0 || rbx u>= rbp)
label_142b0c483:
    r11_1 = zx.q(rsi.d - r9.d)
    r10_1 = ((*(arg1 + 0x28) - rbx) s>> 1).d
    
    if (r10_1 s> r11_1.d)
        r10_1 = r11_1.d
    
    while (true)
        if (r10_1 s<= 0)
            goto label_142b0c4ea
        
        uint32_t rcx = zx.d(*r9)
        
        if (rcx - 0x50 u> 0x7f)
            if (rcx s> 0x20)
                goto label_142b0c4ea
            
            if (rcx != 0x20)
                r8 = rdx
            
            *rbx = rcx.w
            r9 = &r9[1]
            r10_1 -= 1
            rbx = &rbx[1]
        else
            rax = r8 - 0x90 + rcx
            
            if (rax s>= 0x3000)
                break
            
            *rbx = rax.w
            r9 = &r9[1]
            r8 = (rax & 0xffffff80) + 0x40
            r10_1 -= 1
            rbx = &rbx[1]
    
    goto label_142b0c4ea

while (true)
    if (r9 u>= rsi)
    label_142b0c732:
        
        if (*arg2 == 0xc)
            *(r14 + 0x48) = 0x40
            break
    else
        uint64_t rdx_1 = zx.q(*r9)
        r9 = &r9[1]
        int64_t rcx_4 = sx.q(rdi)
        rdi += 1
        *(rcx_4 + r14 + 0x41) = rdx_1.b
        
        if (rdx_1.d s> 0x20)
            rax = rdx_1.d - 0xd
        else
            rax = sx.d(*(rdx_1 + &data_143669868))
        
        if (r10_1 != 1)
            if (r10_1 != 2)
                rax *= 0xe6a9
            else
                rax *= 0xf3
        
        if (rax s< 0)
        label_142b0c5b2:
            *arg2 = 0xc
            *(r14 + 0x48) = 0x40
            break
        
        r11_1 = zx.q(r11_1.d + rax)
        int32_t temp0_1 = r10_1
        r10_1 -= 1
        uint32_t rcx_1
        
        if (temp0_1 != 1)
            continue
        else
            rdi = 0
            rcx_1 = r11_1.d + r8
            
            if (rcx_1 u> 0x10ffff)
                goto label_142b0c5b2
        
        rdx = r10_1 + 0x40
    label_142b0c665:
        
        if (rcx_1 - 0x3040 u> 0xa763)
            r8 = (rcx_1 & 0xffffff80) + 0x40
        else if (rcx_1 s<= 0x309f)
            r8 = 0x3070
        else if (rcx_1 - 0x4e00 u<= 0x51a5)
            r8 = 0x7711
        else if (rcx_1 s< 0xac00)
            r8 = (rcx_1 & 0xffffff80) + 0x40
        else
            r8 = 0xc1d1
        
        if (rcx_1 s<= 0xffff)
        label_142b0c4e3:
            
            while (true)
                *rbx = rcx_1.w
                rbx = &rbx[1]
            label_142b0c4ea:
                
                if (r9 u>= rsi)
                    goto label_142b0c732
                
                if (rbx u>= rbp)
                    goto label_142b0c6ef
                
                rcx_1 = zx.d(*r9)
                r9 = &r9[1]
                
                if (rcx_1 - 0x50 u<= 0x7f)
                    rcx_1 = rcx_1 - 0x90 + r8
                    
                    if (rcx_1 s>= 0x3000)
                        goto label_142b0c665
                    
                    *rbx = rcx_1.w
                    rbx = &rbx[1]
                    r8 = (rcx_1 & 0xffffff80) + 0x40
                    goto label_142b0c483
                
                if (rcx_1 s> 0x20)
                    if (rcx_1 - 0x25 u> 0xd5 || r9 u>= rsi)
                        if (rcx_1 != 0xff)
                            *(r14 + 0x41) = rcx_1.b
                            rdi = 1
                            rax = sub_142b0cb20(rcx_1)
                            r10_1 = rax & 3
                            r11_1 = zx.q(rax s>> 2)
                            break
                        
                        r8 = rdx
                        goto label_142b0c4ea
                    
                    int32_t r11_3 = rcx_1 * 0xf3
                    
                    if (rcx_1 s< 0x90)
                        r11_1 = zx.q(r11_3 - 0x4c30)
                    else
                        r11_1 = zx.q(r11_3 - 0xc530)
                    
                    uint64_t rax_2 = zx.q(*r9)
                    int32_t rax_3
                    
                    if (rax_2.d u> 0x20)
                        rax_3 = rax_2.d - 0xd
                    else
                        rax_3 = sx.d(*(rax_2 + &data_143669868))
                    
                    r9 = &r9[1]
                    
                    if (rax_3 s>= 0)
                        rcx_1 = rax_3 + r11_1.d + r8
                        
                        if (rcx_1 u<= 0x10ffff)
                            goto label_142b0c665
                    
                    rdi = 2
                    *(r14 + 0x41) = r9[-2]
                    *(r14 + 0x42) = r9[-1]
                    goto label_142b0c5b2
                
                if (rcx_1 != 0x20)
                    r8 = rdx
            
            continue
        else
            *rbx = (rcx_1 s>> 0xa).w - 0x2840
            rcx_1.w &= 0x3ff
            rbx = &rbx[1]
            rcx_1.w |= 0xdc00
            
            if (rbx u< rbp)
                goto label_142b0c4e3
        
        *(r14 + 0x90) = rcx_1.w
        *(r14 + 0x5d) = 1
    label_142b0c6ef:
        *arg2 = 0xf
    
    *(r14 + 0x48) = r8
    *(r14 + 0x4c) = (r11_1 << 2).d | r10_1
    break

*(r14 + 0x40) = rdi
*(arg1 + 0x20) = rbx
*(arg1 + 0x10) = r9
