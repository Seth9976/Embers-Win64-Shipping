// 函数: sub_142a56080
// 地址: 0x142a56080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[3].d != 0)
    return (zx.q(arg1[3].w) & 0x3ff) | 0xdc00

int64_t r9 = sx.q(*(arg1 + 0xc))
int32_t rbx = *(arg1 + 0x14)

if (r9.d s>= rbx)
    return 0xffffffff

int64_t rdi = *arg1
uint64_t r8 = zx.q(*(r9 + rdi))
int32_t r9_1 = r9.d + 1

if (r8.b s< 0)
    uint32_t r11
    r11.b = 0
    
    if (r9_1 == rbx)
        return 0xfffd
    
    int32_t r10_1
    
    if (r8.d u>= 0xe0)
        r10_1 = 1
        int32_t rax_8
        
        if (r8.d u>= 0xf0)
            r8 = zx.q(r8.d - 0xf0)
            
            if (r8.d s> 4)
                rax_8 = 0
            else
                r11 = zx.d(*(sx.q(r9_1) + rdi))
                
                if (not(test_bit(sx.d(*((zx.q(r11) u>> 4) + 0x14363c6e8)), r8.d)))
                    rax_8 = 0
                else
                    r9_1 += 1
                    r8 = (zx.q(r11.b) & 0x3f) | zx.q(r8.d << 6)
                    
                    if (r9_1 == rbx)
                        rax_8 = 0
                    else
                        r11.b = *(sx.q(r9_1) + rdi) - 0x80
                        
                        rax_8 = r11.b u> 0x3f ? 0 : 1
        else
            r8 = zx.q(r8.d) & 0xf
            r11 = zx.d(*(sx.q(r9_1) + rdi))
            
            if (not(test_bit(sx.d((*" 000000000000")[r8]), zx.d((r11 u>> 5).b))))
                rax_8 = 0
            else
                r11.b &= 0x3f
                rax_8 = 1
        
        if (rax_8 == 0)
            r10_1 = 0
        else
            r9_1 += 1
            r8 = zx.q(r8.d << 6) | zx.q(r11.b)
            
            if (r9_1 == rbx)
                r10_1 = 0
    else if (r8.d u< 0xc2)
        r10_1 = 0
    else
        r8 = zx.q(r8.d) & 0x1f
        r10_1 = 1
    
    if (r10_1 == 0)
        return 0xfffd
    
    char rcx_3 = *(sx.q(r9_1) + rdi) - 0x80
    
    if (rcx_3 u> 0x3f)
        return 0xfffd
    
    r8 = zx.q(r8.d << 6) | zx.q(rcx_3)

if (r8.d s> 0xffff)
    return zx.q((r8.d s>> 0xa).w - 0x2840)

return zx.q(r8.d)
