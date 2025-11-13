// 函数: sub_142a56a90
// 地址: 0x142a56a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[3].d != 0)
    arg1[3].d = 0
    int32_t rax_1 = arg1[2].d
    
    if (rax_1 s>= 0)
        arg1[2].d = rax_1 + 1
    
    return (zx.q(arg1[3].w) & 0x3ff) | 0xdc00

int64_t rcx_1 = sx.q(*(arg1 + 0xc))
int32_t rbx = *(arg1 + 0x14)

if (rcx_1.d s>= rbx)
    return 0xffffffff

int64_t rsi = *arg1
int32_t rdi = (rcx_1 + 1).d
uint64_t r8 = zx.q(*(rcx_1 + rsi))
*(arg1 + 0xc) = rdi

if (r8.b s< 0)
    uint32_t r11
    r11.b = 0
    
    if (rdi == rbx)
        r8 = 0xfffd
    else
        int32_t r10_1
        
        if (r8.d u>= 0xe0)
            r10_1 = 1
            int32_t rax_8
            
            if (r8.d u>= 0xf0)
                r8 = zx.q(r8.d - 0xf0)
                
                if (r8.d s> 4)
                    rax_8 = 0
                else
                    r11 = zx.d(*(sx.q(rdi) + rsi))
                    
                    if (not(test_bit(sx.d(*((zx.q(r11) u>> 4) + 0x14363c6e8)), r8.d)))
                        rax_8 = 0
                    else
                        r8 = (zx.q(r11.b) & 0x3f) | zx.q(r8.d << 6)
                        *(arg1 + 0xc) = rdi + 1
                        
                        if (rdi + 1 == rbx)
                            rax_8 = 0
                        else
                            r11.b = *(sx.q(rdi + 1) + rsi) - 0x80
                            
                            rax_8 = r11.b u> 0x3f ? 0 : 1
            else
                r8 = zx.q(r8.d) & 0xf
                r11 = zx.d(*(sx.q(rdi) + rsi))
                
                if (not(test_bit(sx.d((*" 000000000000")[r8]), zx.d((r11 u>> 5).b))))
                    rax_8 = 0
                else
                    r11.b &= 0x3f
                    rax_8 = 1
            
            if (rax_8 == 0)
                r10_1 = 0
            else
                *(arg1 + 0xc) += 1
                r8 = zx.q(r8.d << 6) | zx.q(r11.b)
                
                if (*(arg1 + 0xc) == rbx)
                    r10_1 = 0
        else if (r8.d u< 0xc2)
            r10_1 = 0
        else
            r8 = zx.q(r8.d) & 0x1f
            r10_1 = 1
        
        if (r10_1 == 0)
            r8 = 0xfffd
        else
            int64_t rdx_1 = sx.q(*(arg1 + 0xc))
            char rcx_5 = *(rdx_1 + rsi) - 0x80
            
            if (rcx_5 u> 0x3f)
                r8 = 0xfffd
            else
                r8 = zx.q(r8.d << 6) | zx.q(rcx_5)
                *(arg1 + 0xc) = (rdx_1 + 1).d

int32_t rax_19 = arg1[2].d
int32_t rcx_6 = rax_19

if (rax_19 s>= 0)
    arg1[2].d = rax_19 + 1
    
    if (arg1[1].d s< 0 && *(arg1 + 0xc) == rbx)
        if (r8.d s> 0xffff)
            rcx_6 = rax_19 + 1
        
        arg1[1].d = rcx_6 + 1
else if (*(arg1 + 0xc) == rbx)
    int32_t rax_21 = arg1[1].d
    
    if (rax_21 s>= 0)
        if (r8.d s> 0xffff)
            rax_21 -= 1
        
        arg1[2].d = rax_21

if (r8.d s<= 0xffff)
    return zx.q(r8.d)

arg1[3].d = r8.d
return zx.q((r8.d s>> 0xa).w - 0x2840)
