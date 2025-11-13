// 函数: sub_142afe060
// 地址: 0x142afe060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 8)
char* r10 = *(arg1 + 0x10)
uint16_t* rdi = *(arg1 + 0x20)
int32_t* r12 = arg2
int64_t rsi = *(arg1 + 0x18)
uint32_t result = zx.d(*(r14 + 0x40))
int64_t r15 = *(arg1 + 0x28)
int64_t rbp = *(r14 + 0x30)
int32_t r8_1
int32_t r11_1

if (result.b s> 0 && rdi u< r15)
    r11_1 = *(r14 + 0x4c)
    r8_1 = sx.d(result.b)
    result = *(r14 + 0x48)
    *(r14 + 0x48) = 0
    *(r14 + 0x40) = 0
    goto label_142afe12a

while (r10 u< rsi)
    if (rdi u< r15)
        result = zx.d(*r10)
        r10 = &r10[1]
        
        if (result.b s>= 0)
        label_142afe227:
            *rdi = result.w
            rdi = &rdi[1]
            continue
        else
            *(r14 + 0x41) = result.b
            
            if (result.b + 0x3e u> 0x32)
                r11_1 = 0
            else
                arg2.b = result.b u>= 0xf0
                int32_t rcx_1
                rcx_1.b = result.b u>= 0xe0
                r11_1 = rcx_1 + 2 + arg2.d
            
            r8_1 = 1
        label_142afe12a:
            bool cond:0_1 = r8_1 != r11_1
            
            if (r8_1 s>= r11_1)
            label_142afe1ea:
                
                if (cond:0_1 || (rbp == &data_1436646f0 && r8_1 s> 3))
                    *(r14 + 0x40) = r8_1.b
                    *r12 = 0xc
                else
                    result -= *((sx.q(r11_1) << 2) + 0x1436645a0)
                    
                    if (result u<= 0xffff)
                        goto label_142afe227
                    
                    uint16_t rcx_13 = (result u>> 0xa).w
                    result = (result & 0x3ff) | 0xdc00
                    *rdi = rcx_13 - 0x2840
                    rdi = &rdi[1]
                    
                    if (rdi u< r15)
                        goto label_142afe227
                    
                    *(r14 + 0x90) = result.w
                    *(r14 + 0x5d) = 1
                    *r12 = 0xf
            else
                int64_t rbx_1 = sx.q(r11_1)
            label_142afe136:
                
                if (r10 u< rsi)
                    uint64_t r9_1 = zx.q(*r10)
                    *(sx.q(r8_1) + r14 + 0x41) = r9_1.b
                    
                    if (rbx_1 s<= 2 || r8_1 s> 1)
                        arg2.b = r9_1.b s< 0xc0
                    else if (rbx_1 != 3)
                        arg2.b = 1 << (result.b & 7)
                        arg2.b &= *((r9_1 u>> 4) + 0x14363c6e8)
                        rbx_1 = sx.q(r11_1)
                    else
                        arg2.b = 1 << (r9_1.d u>> 5).b
                        arg2.b &= *((zx.q(result) & 0xf) + " 000000000000")
                        rbx_1 = sx.q(r11_1)
                    
                    if (arg2.b != 0)
                    label_142afe1c9:
                        r10 = &r10[1]
                        result = (result << 6) + r9_1.d
                        r8_1 += 1
                        
                        if (r8_1 s< r11_1)
                            goto label_142afe136
                    else if (rbp == &data_1436646f0 && r8_1 == 1 && result == 0xed
                            && r9_1.b s< 0xc0)
                        goto label_142afe1c9
                    
                    cond:0_1 = r8_1 != r11_1
                    goto label_142afe1ea
                
                *(r14 + 0x48) = result
                *(r14 + 0x4c) = r11_1
                *(r14 + 0x40) = r8_1.b
    
    if (r10 u< rsi && rdi u>= r15 && *r12 s<= 0)
        *r12 = 0xf
    
label_142afe28c:
    *(arg1 + 0x20) = rdi
    *(arg1 + 0x10) = r10
    return result

goto label_142afe28c
