// 函数: sub_142b00d20
// 地址: 0x142b00d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 8)
char* r9 = *(arg1 + 0x10)
uint16_t* rbx = *(arg1 + 0x20)
int64_t rdi = *(arg1 + 0x18)
uint64_t result = zx.q(*(rbp + 0x40))
int64_t r14 = *(arg1 + 0x28)
uint64_t r11_1

if (result.b s> 0 && rbx u< r14)
    *(rbp + 0x40) = 0
    void* rcx = *(arg1 + 8)
    r11_1 = zx.q(sx.d(result.b))
    result = zx.q(*(rcx + 0x48) - 1)
    *(rcx + 0x48) = 0
    
    if (r11_1.d u>= 4)
        goto label_142b00dd2
    
    goto label_142b00d9e

while (r9 u< rdi)
    if (rbx u< r14)
        r11_1 = 0
        result = 0
    label_142b00d9e:
        uint32_t r10_1 = (r11_1 << 3).d
    label_142b00da6:
        
        if (r9 u>= rdi)
            *(*(arg1 + 8) + 0x48) = (result + 1).d
            result = *(arg1 + 8)
            *(result + 0x40) = r11_1.b
        else
            uint32_t r8_1 = zx.d(*r9)
            *(r11_1 + rbp + 0x41) = r8_1.b
            r11_1 = zx.q(r11_1.d + 1)
            result = zx.q(result.d) | zx.q(r8_1 << r10_1.b)
            r10_1 += 8
            r9 = &r9[1]
            
            if (r10_1 u< 0x20)
                goto label_142b00da6
            
        label_142b00dd2:
            
            if (result.d u> 0x10ffff || (result.d & 0xfffff800) == 0xd800)
                result = *(arg1 + 8)
                *(result + 0x40) = r11_1.b
                *arg2 = 0xc
            else
                if (result.d u<= 0xffff)
                label_142b00e0f:
                    *rbx = result.w
                    rbx = &rbx[1]
                    continue
                else
                    uint16_t rcx_5 = (result.d u>> 0xa).w
                    result = (zx.q(result.d) & 0x3ff) | 0xdc00
                    *rbx = rcx_5 - 0x2840
                    rbx = &rbx[1]
                    
                    if (rbx u< r14)
                        goto label_142b00e0f
                
                *(*(arg1 + 8) + 0x90) = result.w
                result = *(arg1 + 8)
                *(result + 0x5d) = 1
                *arg2 = 0xf
    
    if (r9 u< rdi && rbx u>= r14 && *arg2 s<= 0)
        *arg2 = 0xf
    
label_142b00e7b:
    *(arg1 + 0x20) = rbx
    *(arg1 + 0x10) = r9
    return result

goto label_142b00e7b
