// 函数: sub_142a98bf0
// 地址: 0x142a98bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_8 = *(arg1 + 0x10)
uint32_t rdx = zx.d(*rax_8)
uint32_t rdx_1

if (not(test_bit(rdx, 0xf)))
    if (rdx u< 0x4040)
        return zx.q((rdx u>> 6) - 1)
    
    if (rdx u< 0x7fc0)
        return zx.q(((rdx & 0x7fc0) - 0x4040) << 0xa) | zx.q(rax_8[1])
    
    rdx_1 = zx.d(rax_8[1]) << 0x10 | zx.d(rax_8[2])
else
    rdx_1 = rdx & 0x7fff
    
    if (rdx_1 u>= 0x4000)
        if (rdx_1 u>= 0x7fff)
            return zx.q(zx.d(rax_8[1]) << 0x10) | zx.q(rax_8[2])
        
        return zx.q((rdx_1 - 0x4000) << 0x10) | zx.q(rax_8[1])

return zx.q(rdx_1)
