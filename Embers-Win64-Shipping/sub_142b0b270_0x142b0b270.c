// 函数: sub_142b0b270
// 地址: 0x142b0b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_8 = arg3
void* rcx = *(arg1 + 8)
void* arg_18 = rcx
int64_t r14 = *(arg1 + 0x18)
uint64_t r9 = *(arg1 + 0x28)
uint32_t r12 = *(rcx + 0x48)
char* r11 = *(arg1 + 0x10)
uint16_t* r10 = *(arg1 + 0x20)
int32_t* r8 = *(arg1 + 0x30)
char rsi = *(rcx + 0x40)
uint8_t rbp_1 = (r12 u>> 0x10).b
int64_t var_58 = r14
uint64_t arg_20 = r9
int32_t rbx = sbb.d(arg3.d, arg3.d, rsi != 0)
int32_t rdi = 0
uint8_t r13_1 = (r12 u>> 0x18).b & 1
void* rdx_3
void* rbx_1
int32_t* r15_2

if (r13_1 == 0)
    while (true)
    label_142b0b360:
        int32_t r14_1 = rdi
        int32_t r15_1 = rdi
        
        if (r11 u>= var_58)
            r14 = var_58
            r15_2 = arg2
            goto label_142b0b5ef
        
        if (r10 u>= r9)
            rdx_3 = arg1
            *arg2 = 0xf
            break
        
        char rdx_2 = *r11
        rdi += 1
        uint64_t rax_7 = zx.q(rsi)
        r11 = &r11[1]
        rsi += 1
        *(rax_7 + rcx + 0x41) = rdx_2
        
        if (rdx_2 u> 0x7e)
            goto label_142b0b573
        
        if (rdx_2 != 0x2c)
            if (rdx_2 == 0x2f)
            label_142b0b563:
                
                if (rbp_1 != 0xff)
                    goto label_142b0b573
                
                *(rcx + 0x41) = 0x26
                rsi = 2
                *(rcx + 0x42) = rdx_2
            label_142b0b573:
                r13_1 = 1
            label_142b0b57b:
                rdx_3 = arg1
                *arg2 = 0xc
                break
                break
            
            r9 = zx.q(*(zx.q(rdx_2) + 0x143669150))
            
            if (r9.b s< 0)
                if (r9.b != 0xfe)
                    goto label_142b0b563
                
                r13_1 = 1
                
                if (rbp_1 != 0xff)
                    if (r12.w == 0 && rbp_1 u<= 6 && test_bit(0x49, sx.d(rbp_1)))
                    label_142b0b550:
                        r14 = var_58
                        rbx = rdi
                        r9 = arg_20
                        goto label_142b0b2e9
                    
                    goto label_142b0b57b
                
                *r10 = 0x26
                r10 = &r10[1]
                
                if (r8 == 0)
                    goto label_142b0b550
                
                r14 = var_58
                int32_t rax_21 = rbx - 1
                r9 = arg_20
                rbx = rdi
                *r8 = rax_21
                r8 = &r8[1]
                goto label_142b0b2e9
        else
            r9.b = 0x3f
        
        if (sx.d(rbp_1) + 1 u> 8)
            r9 = arg_20
        else
            switch (rbp_1)
                case 0, 0xff
                    r12 = sx.d(r9.b)
                    rbp_1 = 1
                case 1, 3, 4, 6
                    r12.w <<= 6
                    r12.w |= sx.w(r9.b)
                    rbp_1 += 1
                case 2
                    uint16_t rcx_4 = sx.w(r9.b s>> 2) | r12.w << 4
                    
                    if (rcx_4 - 0x20 u<= 0x5e)
                        goto label_142b0b573
                    
                    *r10 = rcx_4
                    r10 = &r10[1]
                    
                    if (r8 != 0)
                        *r8 = rbx
                        r8 = &r8[1]
                        rbx = r15_1
                    
                    rcx = arg_18
                    r9.b &= 3
                    rsi = 1
                    r12 = zx.d(r9.b)
                    rbp_1 = 3
                    *(rcx + 0x41) = rdx_2
                    r9 = arg_20
                    continue
                    continue
                case 5
                    uint16_t rcx_5 = sx.w(r9.b s>> 4) | r12.w << 2
                    
                    if (rcx_5 - 0x20 u<= 0x5e)
                        goto label_142b0b573
                    
                    *r10 = rcx_5
                    r10 = &r10[1]
                    
                    if (r8 != 0)
                        *r8 = rbx
                        r8 = &r8[1]
                        rbx = r14_1
                    
                    rcx = arg_18
                    r9.b &= 0xf
                    rsi = 1
                    r12 = zx.d(r9.b)
                    rbp_1 = 6
                    *(rcx + 0x41) = rdx_2
                    r9 = arg_20
                    continue
                    continue
                case 7
                    uint16_t rcx_6 = r12.w << 6 | sx.w(r9.b)
                    
                    if (rcx_6 - 0x20 u<= 0x5e)
                        goto label_142b0b573
                    
                    *r10 = rcx_6
                    r10 = &r10[1]
                    
                    if (r8 != 0)
                        *r8 = rbx
                        r8 = &r8[1]
                        rbx = rdi
                    
                    rsi = 0
                    r12 = 0
                    rbp_1 = 0
            
            rcx = arg_18
            r9 = arg_20
    
    rbx_1 = arg_18
else
label_142b0b2e9:
    int32_t rdx_1 = r14.d - r11.d
    int32_t rax_4 = ((r9 - r10) s>> 1).d
    rsi = 0
    
    if (rdx_1 s> rax_4)
        rdx_1 = rax_4
    
    while (true)
        if (rdx_1 s<= 0)
            r15_2 = arg2
            rbx_1 = arg_18
            break
        
        char rcx_1 = *r11
        r11 = &r11[1]
        
        if (rcx_1 - 0x20 u> 0x5e)
            rbx_1 = arg_18
            rsi = 1
            r15_2 = arg2
            *(rbx_1 + 0x41) = rcx_1
            *r15_2 = 0xc
            break
        
        if (rcx_1 == 0x26)
            rcx = arg_18
            rbx += 1
            r13_1 = 0
            rdi = rbx
            rsi = 0
            r12 = 0
            rbp_1 = 0xff
            goto label_142b0b360
        
        *r10 = zx.w(rcx_1)
        r10 = &r10[1]
        
        if (r8 != 0)
            *r8 = rbx
            r8 = &r8[1]
            rbx += 1
        
        rdx_1 -= 1
    
    if (r11 u>= r14 || r10 u< r9)
        rcx = arg_18
    label_142b0b5ef:
        rdx_3 = arg1
        
        if (*r15_2 s<= 0 && r13_1 == 0 && rsi == 0 && *(rdx_3 + 2) != rsi && r11 u>= r14)
            if (rbp_1 == 0xff)
                *(rcx + 0x41) = 0x26
                rsi = 1
            
            r13_1 = 1
            *r15_2 = 0xb
        
        rbx_1 = arg_18
    else
        rdx_3 = arg1
        *r15_2 = 0xf
*(rbx_1 + 0x40) = rsi
uint32_t result = zx.d(r12.w)
*(rbx_1 + 0x48) = (zx.d(r13_1) << 8 | zx.d(rbp_1)) << 0x10 | result
*(rdx_3 + 0x10) = r11
*(rdx_3 + 0x20) = r10
*(rdx_3 + 0x30) = r8
return result
