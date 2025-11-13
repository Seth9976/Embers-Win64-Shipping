// 函数: sub_142afe2b0
// 地址: 0x142afe2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_10 = arg2
void* r15 = *(arg1 + 8)
char* r10 = *(arg1 + 0x10)
int32_t rbp = 0
int16_t* r11 = *(arg1 + 0x20)
int32_t* r9 = arg2
int32_t* rsi = *(arg1 + 0x30)
char rax = *(r15 + 0x40)
int64_t r14 = *(arg1 + 0x18)
int64_t r13 = *(arg1 + 0x28)
int64_t r12 = *(r15 + 0x30)
uint32_t rax_1
int32_t rdi_1
int32_t r8_1

if (rax s> 0 && r11 u< r13)
    rdi_1 = *(r15 + 0x4c)
    r8_1 = sx.d(rax)
    rax_1 = *(r15 + 0x48)
    *(r15 + 0x48) = 0
    *(r15 + 0x40) = 0
    goto label_142afe380

while (r10 u< r14)
    if (r11 u< r13)
        rax_1 = zx.d(*r10)
        r10 = &r10[1]
        
        if (rax_1.b s< 0)
            *(r15 + 0x41) = rax_1.b
            
            if (rax_1.b + 0x3e u> 0x32)
                rdi_1 = 0
            else
                arg2.b = rax_1.b u>= 0xf0
                int32_t rcx_1
                rcx_1.b = rax_1.b u>= 0xe0
                rdi_1 = rcx_1 + 2 + arg2.d
            
            r8_1 = 1
        label_142afe380:
            bool cond:0_1 = r8_1 != rdi_1
            
            if (r8_1 s>= rdi_1)
            label_142afe453:
                
                if (not(cond:0_1) && (r12 != &data_1436646f0 || r8_1 s<= 3))
                    int32_t rax_3 = rax_1 - *((sx.q(rdi_1) << 2) + 0x1436645a0)
                    
                    if (rax_3 u> 0xffff)
                        int16_t rax_5 = (rax_3.w & 0x3ff) | 0xdc00
                        *r11 = (rax_3 u>> 0xa).w - 0x2840
                        r11 = &r11[1]
                        *rsi = rbp
                        rsi = &rsi[1]
                        
                        if (r11 u>= r13)
                            *(r15 + 0x90) = rax_5
                            rbp += r8_1
                            *(r15 + 0x5d) = 1
                            *r9 = 0xf
                            continue
                        else
                            *r11 = rax_5
                            r11 = &r11[1]
                            *rsi = rbp
                            rsi = &rsi[1]
                            rbp += r8_1
                            continue
                    else
                        *r11 = rax_3.w
                        r11 = &r11[1]
                        *rsi = rbp
                        rsi = &rsi[1]
                        rbp += r8_1
                        continue
                
                *(r15 + 0x40) = r8_1.b
                *r9 = 0xc
            else
                int64_t rbx_1 = sx.q(rdi_1)
            label_142afe390:
                
                if (r10 u< r14)
                    uint64_t r9_1 = zx.q(*r10)
                    *(sx.q(r8_1) + r15 + 0x41) = r9_1.b
                    
                    if (rbx_1 s<= 2 || r8_1 s> 1)
                        arg2.b = r9_1.b s< 0xc0
                    else if (rbx_1 != 3)
                        arg2.b = 1 << (rax_1.b & 7)
                        arg2.b &= *((r9_1 u>> 4) + 0x14363c6e8)
                        rbx_1 = sx.q(rdi_1)
                    else
                        arg2.b = 1 << (r9_1.d u>> 5).b
                        arg2.b &= *((zx.q(rax_1) & 0xf) + " 000000000000")
                        rbx_1 = sx.q(rdi_1)
                    
                    if (arg2.b != 0)
                    label_142afe423:
                        r10 = &r10[1]
                        rax_1 = (rax_1 << 6) + r9_1.d
                        r8_1 += 1
                        
                        if (r8_1 s< rdi_1)
                            goto label_142afe390
                    else if (r12 == &data_1436646f0 && r8_1 == 1 && rax_1 == 0xed && r9_1.b s< 0xc0)
                        goto label_142afe423
                    
                    r9 = arg_10
                    cond:0_1 = r8_1 != rdi_1
                    goto label_142afe453
                
                r9 = arg_10
                *(r15 + 0x48) = rax_1
                *(r15 + 0x4c) = rdi_1
                *(r15 + 0x40) = r8_1.b
        else
            *r11 = rax_1.w
            r11 = &r11[1]
            *rsi = rbp
            rsi = &rsi[1]
            rbp += 1
            continue
    
    if (r10 u< r14 && r11 u>= r13 && *r9 s<= 0)
        *r9 = 0xf
    
label_142afe520:
    *(arg1 + 0x20) = r11
    *(arg1 + 0x10) = r10
    *(arg1 + 0x30) = rsi
    return arg1

goto label_142afe520
