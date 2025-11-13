// 函数: sub_142b00540
// 地址: 0x142b00540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
char* r8 = *(arg1 + 0x10)
uint16_t* r10 = *(arg1 + 0x20)
int64_t r11 = *(arg1 + 0x18)
uint64_t result = zx.q(*(rdi + 0x40))
int64_t rsi = *(arg1 + 0x28)
uint64_t r9_1

if (result.b s> 0 && r10 u< rsi)
    *(rdi + 0x40) = 0
    void* rcx = *(arg1 + 8)
    r9_1 = zx.q(sx.d(result.b))
    result = zx.q(*(rcx + 0x48) - 1)
    *(rcx + 0x48) = 0
    
    if (r9_1.d u>= 4)
        goto label_142b005e3
    
    goto label_142b005e1

while (r8 u< r11)
    if (r10 u< rsi)
        r9_1 = 0
        result = 0
    label_142b005e1:
        
        do
            if (r8 u>= r11)
                *(*(arg1 + 8) + 0x48) = (result + 1).d
                result = *(arg1 + 8)
                *(result + 0x40) = r9_1.b
                goto label_142b0066c
            
            uint32_t rdx = zx.d(*r8)
            r8 = &r8[1]
            *(r9_1 + rdi + 0x41) = rdx.b
            result = zx.q(result.d << 8) | zx.q(rdx)
            r9_1 = zx.q(r9_1.d + 1)
        while (r9_1.d u< 4)
        
    label_142b005e3:
        
        if (result.d u> 0x10ffff || (result.d & 0xfffff800) == 0xd800)
            result = *(arg1 + 8)
            *(result + 0x40) = r9_1.b
            *arg2 = 0xc
        else
            if (result.d u<= 0xffff)
            label_142b00620:
                *r10 = result.w
                r10 = &r10[1]
                continue
            else
                uint16_t rcx_4 = (result.d u>> 0xa).w
                result = (zx.q(result.d) & 0x3ff) | 0xdc00
                *r10 = rcx_4 - 0x2840
                r10 = &r10[1]
                
                if (r10 u< rsi)
                    goto label_142b00620
            
            *(*(arg1 + 8) + 0x90) = result.w
            result = *(arg1 + 8)
            *(result + 0x5d) = 1
            *arg2 = 0xf
    
label_142b0066c:
    
    if (r8 u< r11 && r10 u>= rsi && *arg2 s<= 0)
        *arg2 = 0xf
    
label_142b00692:
    *(arg1 + 0x20) = r10
    *(arg1 + 0x10) = r8
    return result

goto label_142b00692
