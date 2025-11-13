// 函数: sub_142b00ea0
// 地址: 0x142b00ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 8)
int32_t rbp = 0
char* r9 = *(arg1 + 0x10)
uint16_t* rbx = *(arg1 + 0x20)
int32_t* rdi = *(arg1 + 0x30)
uint64_t result = zx.q(*(r15 + 0x40))
int64_t rsi = *(arg1 + 0x18)
int64_t r12 = *(arg1 + 0x28)
uint64_t r11_1

if (result.b s> 0 && rbx u< r12)
    *(r15 + 0x40) = 0
    void* rcx = *(arg1 + 8)
    r11_1 = zx.q(sx.d(result.b))
    result = zx.q(*(rcx + 0x48) - 1)
    *(rcx + 0x48) = 0
    
    if (r11_1.d u>= 4)
        goto label_142b00f61
    
    goto label_142b00f22

while (r9 u< rsi)
    if (rbx u< r12)
        r11_1 = 0
        result = 0
    label_142b00f22:
        uint32_t r10_1 = (r11_1 << 3).d
    label_142b00f30:
        
        if (r9 u>= rsi)
            *(*(arg1 + 8) + 0x48) = (result + 1).d
            result = *(arg1 + 8)
            *(result + 0x40) = r11_1.b
        else
            uint32_t r8_1 = zx.d(*r9)
            *(r11_1 + r15 + 0x41) = r8_1.b
            r11_1 = zx.q(r11_1.d + 1)
            result = zx.q(result.d) | zx.q(r8_1 << r10_1.b)
            r10_1 += 8
            r9 = &r9[1]
            
            if (r10_1 u< 0x20)
                goto label_142b00f30
            
        label_142b00f61:
            
            if (result.d u> 0x10ffff || (result.d & 0xfffff800) == 0xd800)
                result = *(arg1 + 8)
                *(result + 0x40) = r11_1.b
                *arg2 = 0xc
            else
                if (result.d u<= 0xffff)
                label_142b00fa3:
                    *rbx = result.w
                    rbx = &rbx[1]
                    *rdi = rbp
                    rbp += r11_1.d
                    rdi = &rdi[1]
                    continue
                else
                    uint16_t rcx_5 = (result.d u>> 0xa).w
                    result = (zx.q(result.d) & 0x3ff) | 0xdc00
                    *rbx = rcx_5 - 0x2840
                    rbx = &rbx[1]
                    *rdi = rbp
                    rdi = &rdi[1]
                    
                    if (rbx u< r12)
                        goto label_142b00fa3
                
                *(*(arg1 + 8) + 0x90) = result.w
                result = *(arg1 + 8)
                *(result + 0x5d) = 1
                *arg2 = 0xf
    
    if (r9 u< rsi && rbx u>= r12 && *arg2 s<= 0)
        *arg2 = 0xf
    
label_142b0101c:
    *(arg1 + 0x20) = rbx
    *(arg1 + 0x30) = rdi
    *(arg1 + 0x10) = r9
    return result

goto label_142b0101c
