// 函数: sub_142c321c0
// 地址: 0x142c321c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)) u<= arg2
        && arg2 - (zx.d(*(arg1 + 4)) << 8) - zx.d(*(arg1 + 5))
        u< (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7)))
    int128_t* const r8_2 = &data_14369a5d0
    uint32_t rcx_5 = zx.d(*(arg1 + 3))
    void* rax_11 = zx.q((zx.d(*(arg1 + 3)) + (zx.d(*(arg1 + 2)) << 8))
        * (arg2 - (zx.d(*(arg1 + 4)) << 8) - zx.d(*(arg1 + 5)))) + arg1 + 8
    
    if (rax_11 u>= arg1 + 8)
        r8_2 = rax_11
    
    int32_t result = 0
    uint32_t rdx_4 = zx.d(*(arg1 + 2)) << 8
    uint64_t i_1 = zx.q(rdx_4 + rcx_5)
    
    if (rdx_4 != neg.d(rcx_5))
        uint64_t i
        
        do
            uint32_t rcx_6 = zx.d(*r8_2)
            r8_2 += 1
            result = result << 8 | rcx_6
            i = i_1
            i_1 -= 1
        while (i != 1)
        return result

return 0
