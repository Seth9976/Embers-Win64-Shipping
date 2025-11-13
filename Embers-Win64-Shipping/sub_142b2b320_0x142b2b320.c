// 函数: sub_142b2b320
// 地址: 0x142b2b320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x190))
int32_t rbx = *(arg1 + 0x194)

if (rcx.d == rbx)
    return 0xffffffff

int64_t rsi = *(arg1 + 0x188)
char rdx = *(rcx + rsi)

if (rdx == 0 && rbx s< 0)
    *(arg1 + 0x194) = rcx.d
    return 0xffffffff

int32_t rdi = (rcx + 1).d
uint64_t r8 = zx.q(rdx)
*(arg1 + 0x190) = rdi

if (r8.b s< 0)
    uint32_t r11
    r11.b = 0
    
    if (rdi != rbx)
        int32_t r10_1
        
        if (r8.d u>= 0xe0)
            r10_1 = 1
            int32_t rax_7
            
            if (r8.d u>= 0xf0)
                r8 = zx.q(r8.d - 0xf0)
                
                if (r8.d s> 4)
                    rax_7 = 0
                else
                    r11 = zx.d(*(sx.q(rdi) + rsi))
                    
                    if (not(test_bit(sx.d(*((zx.q(r11) u>> 4) + 0x14363c6e8)), r8.d)))
                        rax_7 = 0
                    else
                        r8 = (zx.q(r11.b) & 0x3f) | zx.q(r8.d << 6)
                        *(arg1 + 0x190) = rdi + 1
                        
                        if (rdi + 1 == rbx)
                            rax_7 = 0
                        else
                            r11.b = *(sx.q(rdi + 1) + rsi) - 0x80
                            
                            rax_7 = r11.b u> 0x3f ? 0 : 1
            else
                r8 = zx.q(r8.d) & 0xf
                r11 = zx.d(*(sx.q(rdi) + rsi))
                
                if (not(test_bit(sx.d((*" 000000000000")[r8]), zx.d((r11 u>> 5).b))))
                    rax_7 = 0
                else
                    r11.b &= 0x3f
                    rax_7 = 1
            
            if (rax_7 == 0)
                r10_1 = 0
            else
                *(arg1 + 0x190) += 1
                r8 = zx.q(r8.d << 6) | zx.q(r11.b)
                
                if (*(arg1 + 0x190) == rbx)
                    r10_1 = 0
        else if (r8.d u< 0xc2)
            r10_1 = 0
        else
            r8 = zx.q(r8.d) & 0x1f
            r10_1 = 1
        
        if (r10_1 != 0)
            int64_t rdx_1 = sx.q(*(arg1 + 0x190))
            char rcx_4 = *(rdx_1 + rsi) - 0x80
            
            if (rcx_4 u<= 0x3f)
                *(arg1 + 0x190) = (rdx_1 + 1).d
                return zx.q(r8.d << 6) | zx.q(rcx_4)
    
    r8 = 0xfffd

return zx.q(r8.d)
