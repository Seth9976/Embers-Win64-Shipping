// 函数: sub_142bcb0e0
// 地址: 0x142bcb0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r8 = *(arg1 + 0x18)
uint32_t r9 = zx.d(r8[1])

if (arg2 u<= (zx.d(r8[3]) << 8) + r9)
    uint32_t r11_1 = zx.d(r8[2])
    uint32_t r10_1 = zx.d(*r8)
    
    if (arg2 u>= (r11_1 << 8) + r10_1)
        int16_t rax_6 = arg2.w & 0xff
        
        if (rax_6 u>= r10_1.w && rax_6 u<= r9.w)
            return zx.q(*(*(r8 + 0x10) + (
                sx.q((zx.d((arg2 u>> 8).w) - r11_1) * (r9 - r10_1 + 1) - r10_1 + zx.d(rax_6))
                << 1)))

return 0
