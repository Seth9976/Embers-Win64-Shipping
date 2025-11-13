// 函数: sub_142b2b4e0
// 地址: 0x142b2b4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x190))
int64_t rbx = *(arg1 + 0x188)
uint32_t rdx = zx.d(*(r9 + rbx))

if (rdx u< 0xcc || (rdx - 0xe4 u<= 9 && rdx != 0xea))
    int32_t rax
    rax.b = 0
    return rax

uint64_t r8 = zx.q(*(r9 + rbx))
int32_t r9_1 = r9.d + 1

if (r8.b s>= 0)
    goto label_142b2b638

int32_t rdi_1 = *(arg1 + 0x194)
uint32_t r11
r11.b = 0

if (r9_1 == rdi_1)
label_142b2b6a2:
    r8 = 0xfffd
label_142b2b65b:
    uint64_t rdx_1 = zx.q(*((sx.q(r8.d) s>> 5) + 0x14367b600))
    
    if (rdx_1.d != 0 && test_bit(*((rdx_1 << 2) + 0x14367c600), r8.d & 0x1f))
        int32_t rax_18
        rax_18.b = 1
        return rax_18
else
    int32_t r10_1
    
    if (r8.d u>= 0xe0)
        r10_1 = 1
        int32_t rax_5
        
        if (r8.d u>= 0xf0)
            r8 = zx.q(r8.d - 0xf0)
            
            if (r8.d s> 4)
                rax_5 = 0
            else
                r11 = zx.d(*(sx.q(r9_1) + rbx))
                
                if (not(test_bit(sx.d(*((zx.q(r11) u>> 4) + 0x14363c6e8)), r8.d)))
                    rax_5 = 0
                else
                    r9_1 += 1
                    r8 = (zx.q(r11.b) & 0x3f) | zx.q(r8.d << 6)
                    
                    if (r9_1 == rdi_1)
                        rax_5 = 0
                    else
                        r11.b = *(sx.q(r9_1) + rbx) - 0x80
                        
                        rax_5 = r11.b u> 0x3f ? 0 : 1
        else
            r8 = zx.q(r8.d) & 0xf
            r11 = zx.d(*(sx.q(r9_1) + rbx))
            
            if (not(test_bit(sx.d((*" 000000000000")[r8]), zx.d((r11 u>> 5).b))))
                rax_5 = 0
            else
                r11.b &= 0x3f
                rax_5 = 1
        
        if (rax_5 == 0)
            r10_1 = 0
        else
            r9_1 += 1
            r8 = zx.q(r8.d << 6) | zx.q(r11.b)
            
            if (r9_1 == rdi_1)
                r10_1 = 0
    else if (r8.d u< 0xc2)
        r10_1 = 0
    else
        r8 = zx.q(r8.d) & 0x1f
        r10_1 = 1
    
    if (r10_1 == 0)
        goto label_142b2b6a2
    
    char rcx_3 = *(sx.q(r9_1) + rbx) - 0x80
    
    if (rcx_3 u> 0x3f)
        goto label_142b2b6a2
    
    r8 = zx.q(r8.d << 6) | zx.q(rcx_3)
label_142b2b638:
    
    if (r8.d s> 0xffff)
        r8 = zx.q((r8.d s>> 0xa).w - 0x2840)
    
    if (r8.d s>= 0x300)
        goto label_142b2b65b

return 0
