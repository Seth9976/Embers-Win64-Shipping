// 函数: sub_142b0df30
// 地址: 0x142b0df30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_16 = zx.d(*arg1)
void* r8 = &arg1[1]

if (rdx_16 u>= 0xc0)
    if (rdx_16 u< 0xf0)
        return sx.q((rdx_16 - 0xc0) << 8 | zx.d(*r8)) + r8 + 1
    
    if (rdx_16 u< 0xfe)
        return sx.q(zx.d(*r8) << 8 | (rdx_16 - 0xf0) << 0x10 | zx.d(*(r8 + 1))) + r8 + 2
    
    uint32_t rdx_6 = zx.d(*r8)
    uint32_t rax_9 = zx.d(*(r8 + 1))
    
    if (rdx_16 == 0xfe)
        return sx.q((rdx_6 << 8 | rax_9) << 8 | zx.d(*(r8 + 2))) + r8 + 3
    
    rdx_16 = ((rdx_6 << 8 | rax_9) << 8 | zx.d(*(r8 + 2))) << 8 | zx.d(*(r8 + 3))
    r8 += 4

return sx.q(rdx_16) + r8
