// 函数: sub_142afd1c0
// 地址: 0x142afd1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg2 + 8)
char* r11 = *(arg1 + 0x20)
char* r9 = *(arg2 + 0x10)
int32_t r10_1 = *(arg1 + 0x28) - r11.d
void* rbx = *(arg2 + 0x18)
int32_t rdx = 0

if (*(rsi + 0x40) s<= 0)
    goto label_142afd252

int32_t rcx = *(rsi + 0x48)

if (rcx == 0)
    goto label_142afd252

if (r9 u>= rbx)
    goto label_142afd2b2

if (r10_1 == 0)
    *arg3 = 0xf
    return 

uint32_t rax

if (rcx - 0xc2 u<= 1)
    rax.b = *r9 - 0x80

if (rcx - 0xc2 u> 1 || rax.b u> 0x3f)
    *arg3 = 0xffffff81
    return 

rcx.b <<= 6
r9 = &r9[1]
rcx.b |= rax.b
*r11 = rcx.b
r11 = &r11[1]
r10_1 -= 1
*(rsi + 0x48) = 0
*(rsi + 0x40) = 0
label_142afd252:

if (r9 u< rbx)
    rax.b = *(rbx - 1) + 0x3e
    
    if (rax.b u<= 0x32)
        rbx -= 1
    
    while (r9 u< rbx)
        char* r8 = r9
        
        if (r10_1 s<= 0)
            *arg3 = 0xf
            goto label_142afd30b
        
        uint32_t rcx_2 = zx.d(*r9)
        r9 = &r9[1]
        
        if (rcx_2.b s< 0)
            if ((rcx_2 + 0x3e).b u<= 1)
                rax.b = *r9 - 0x80
            
            if ((rcx_2 + 0x3e).b u> 1 || rax.b u> 0x3f)
                *(arg2 + 0x10) = r8
                *(arg1 + 0x20) = r11
                *arg3 = 0xffffff81
                return 
            
            r9 = &r9[1]
            rcx_2.b <<= 6
            rcx_2.b |= rax.b
        
        r10_1 -= 1
        *r11 = rcx_2.b
        r11 = &r11[1]
    
    goto label_142afd2b2

label_142afd2b2:

if (*arg3 s<= 0 && r9 u< *(arg2 + 0x18))
    uint32_t rcx_3 = zx.d(*r9)
    r9 = &r9[1]
    *(rsi + 0x41) = rcx_3.b
    *(rsi + 0x48) = rcx_3
    *(rsi + 0x40) = 1
    
    if (rcx_3.b s>= 0)
        rdx = 1
    else if ((rcx_3 + 0x3e).b u<= 0x32)
        rdx.b = rcx_3.b u>= 0xf0
        rdx += sbb.d(rcx_3 + 0x3e, rcx_3 + 0x3e, rcx_3.b u< 0xe0) + 3
    
    *(rsi + 0x4c) = rdx

label_142afd30b:
*(arg2 + 0x10) = r9
*(arg1 + 0x20) = r11
