// 函数: sub_142a71980
// 地址: 0x142a71980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = sx.q(*(arg1 + 0xc))
int32_t r10 = *(arg1 + 0x10)

if (r8_1.d s>= r10)
    int32_t r9_1 = *(arg1 + 0x14)
    
    if (r8_1.d s< r9_1)
        int64_t r11 = *(arg1 + 0x18)
        uint32_t rdx = zx.d(*(r11 + (r8_1 << 1)))
        
        if ((rdx & 0xfffff800) == 0xd800)
            if (test_bit(rdx, 0xa))
                if (r8_1.d s> r10)
                    uint32_t rax_7 = zx.d(*(r11 + (sx.q((r8_1 - 1).d) << 1)))
                    
                    if ((rax_7 & 0xfffffc00) == 0xd800)
                        rdx += (rax_7 - 0xd7f7) << 0xa
            else if (r8_1.d + 1 != r9_1)
                uint32_t rcx = zx.d(*(r11 + (sx.q(r8_1.d + 1) << 1)))
                
                if ((rcx & 0xfffffc00) == 0xdc00)
                    return zx.q(((rdx - 0xd7f7) << 0xa) + rcx)
        
        return zx.q(rdx)

return 0xffff
