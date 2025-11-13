// 函数: sub_142b0a840
// 地址: 0x142b0a840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 8)
int64_t r14 = *(arg1 + 0x18)
int64_t rdi = *(arg1 + 0x28)
char* r9 = *(arg1 + 0x10)
uint32_t rsi = *(result + 0x48)
char rbp = *(result + 0x40)
uint16_t* r10 = *(arg1 + 0x20)
uint32_t* r8 = *(arg1 + 0x30)
uint32_t r15_1
r15_1.b = (rsi u>> 0x18).b & 1
uint8_t r13_1 = (rsi u>> 0x10).b
int64_t var_50 = r14
uint32_t r11 = sbb.d(arg3, arg3, rbp != 0)
int64_t arg_20 = rdi
uint32_t arg_18 = r15_1
uint32_t rbx = 0
void* rdx_3
int32_t* r12_1

if (r15_1.b == 0)
    while (true)
    label_142b0a942:
        char r14_1 = rbp
        uint32_t rcx_3 = rbx
        uint32_t r15_2 = rbx
        uint32_t r12 = rbx
        
        if (r9 u>= var_50)
            r14 = var_50
            rbx = arg_18
            r12_1 = arg2
            goto label_142b0abfe
        
        if (r10 u>= rdi)
            *arg2 = 0xf
        else
            char rdi_1 = *r9
            rbx += 1
            r9 = &r9[1]
            uint64_t rax_5 = zx.q(rbp)
            rbp += 1
            *(rax_5 + result + 0x41) = rdi_1
            uint64_t rdx_2
            rdx_2.b = 0xfd
            
            if (rdi_1 u< 0x7e)
                rdx_2 = zx.q(*(zx.q(rdi_1) + 0x143669150))
            
            if (rdi_1 u>= 0x7e || rdx_2.b == 0xfd || rdx_2.b == 0xff)
                rbx.b = 1
                
                if (r13_1 == 0xff)
                    r9 -= 1
                    rbp = 1
                    *(result + 0x41) = 0x2b
                    *arg2 = 0xc
                    break
                
                if (rsi.w != 0)
                    r9 -= 1
                    rbp = r14_1
                else if (rdx_2.b != 0xfd)
                    r14 = var_50
                    r9 -= 1
                    rdi = arg_20
                    r11 = rcx_3
                    goto label_142b0a8c7
                
                *arg2 = 0xc
                break
            
            if (rdx_2.b s< 0)
                arg_18.b = 1
                
                if (r13_1 == 0xff)
                    *r10 = 0x2b
                    r10 = &r10[1]
                    
                    if (r8 == 0)
                        goto label_142b0aae9
                    
                    r14 = var_50
                    uint32_t rax_16 = r11 - 1
                    rdi = arg_20
                    r11 = rbx
                    *r8 = rax_16
                    r8 = &r8[1]
                    goto label_142b0a8ba
                
                if (rsi.w == 0)
                label_142b0aae9:
                    r14 = var_50
                    r11 = rbx
                    rdi = arg_20
                    goto label_142b0a8ba
                
                *arg2 = 0xc
            else
                if (sx.d(r13_1) + 1 u<= 8)
                    switch (r13_1)
                        case 0, 0xff
                            rsi = sx.d(rdx_2.b)
                            r13_1 = 1
                        case 1, 3, 4, 6
                            rsi.w <<= 6
                            rsi.w |= sx.w(rdx_2.b)
                            r13_1 += 1
                        case 2
                            rsi.w <<= 4
                            *r10 = sx.w(rdx_2.b s>> 2) | rsi.w
                            r10 = &r10[1]
                            
                            if (r8 != 0)
                                *r8 = r11
                                r8 = &r8[1]
                                r11 = r12
                            
                            rdx_2.b &= 3
                            rbp = 1
                            rsi = zx.d(rdx_2.b)
                            r13_1 = 3
                            *(result + 0x41) = rdi_1
                        case 5
                            rsi.w <<= 2
                            *r10 = sx.w(rdx_2.b s>> 4) | rsi.w
                            r10 = &r10[1]
                            
                            if (r8 != 0)
                                *r8 = r11
                                r8 = &r8[1]
                                r11 = r15_2
                            
                            rdx_2.b &= 0xf
                            rbp = 1
                            rsi = zx.d(rdx_2.b)
                            r13_1 = 6
                            *(result + 0x41) = rdi_1
                        case 7
                            rsi.w <<= 6
                            rsi.w |= sx.w(rdx_2.b)
                            *r10 = rsi.w
                            r10 = &r10[1]
                            
                            if (r8 != 0)
                                *r8 = r11
                                r8 = &r8[1]
                                r11 = rbx
                            
                            rbp = 0
                            rsi = 0
                            r13_1 = 0
                
                rdi = arg_20
                continue
        
        rbx = arg_18
        break
    
    rdx_3 = arg1
else
label_142b0a8ba:
    rbx = arg_18
label_142b0a8c7:
    int32_t rdx_1 = r14.d - r9.d
    int32_t rax_3 = ((rdi - r10) s>> 1).d
    rbp = 0
    
    if (rdx_1 s> rax_3)
        rdx_1 = rax_3
    
    while (true)
        if (rdx_1 s<= 0)
            r12_1 = arg2
            break
        
        char rax_4 = *r9
        r9 = &r9[1]
        
        if ((rax_4 - 0x20 u>= 0x5e || rax_4 == 0x5c) && (((rax_4 - 9) & 0xfa) != 0 || rax_4 == 0xe))
            rbp = 1
            r12_1 = arg2
            *(result + 0x41) = rax_4
            *r12_1 = 0xc
            break
        
        if (rax_4 == 0x2b)
            r11 += 1
            arg_18.b = 0
            rbx = r11
            rbp = 0
            rsi = 0
            r13_1 = 0xff
            goto label_142b0a942
        
        *r10 = zx.w(rax_4)
        r10 = &r10[1]
        
        if (r8 != 0)
            *r8 = r11
            r8 = &r8[1]
            r11 += 1
        
        rdx_1 -= 1
    
    if (r9 u>= r14 || r10 u< rdi)
    label_142b0abfe:
        
        if (*r12_1 s> 0)
            rdx_3 = arg1
        else
            rdx_3 = arg1
            
            if (*(rdx_3 + 2) != 0 && r9 == r14 && rsi.w == 0)
                rbp = 0
    else
        *r12_1 = 0xf
        rdx_3 = arg1
*(result + 0x48) = (zx.d(rbx.b) << 8 | zx.d(r13_1)) << 0x10 | zx.d(rsi.w)
*(result + 0x40) = rbp
*(rdx_3 + 0x10) = r9
*(rdx_3 + 0x20) = r10
*(rdx_3 + 0x30) = r8
return result
