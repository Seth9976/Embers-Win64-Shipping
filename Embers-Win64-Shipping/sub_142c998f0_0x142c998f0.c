// 函数: sub_142c998f0
// 地址: 0x142c998f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r9_1 = (arg1 s>> 0x10).w & 0x8000
uint32_t r11 = zx.d((arg1 s>> 0x17).b)
int32_t r10_1 = arg1 & 0x7fffff
int16_t rax_5

if (r11 u> 0x70)
    if (r11 != 0xff)
        int32_t rdx_6 = 0
        int32_t rcx_3 = r10_1 + 0xfff + (r10_1 u>> 0xd & 1)
        int32_t rax_10 = rcx_3 & 0x800000
        int32_t r8_2
        r8_2.b = rax_10 != 0
        int32_t r8_4 = r8_2 - 0x70 + r11
        
        if (rax_10 == 0)
            rdx_6 = rcx_3
        
        if (r8_4 s<= 0x1e)
            r8_4.w <<= 0xa
            return zx.q((rdx_6 u>> 0xd).w) | zx.q(r8_4.w) | zx.q(r9_1)
        
        int64_t i_1 = 0xa
        float arg_8 = 1e+10f
        int64_t i
        
        do
            arg_8 = arg_8 * arg_8
            i = i_1
            i_1 -= 1
        while (i != 1)
        int64_t result
        result.w = 0x7c00 | r9_1
        return result
    
    rax_5 = 0x7c00
    
    if (r10_1 != 0)
        uint32_t r10_3 = r10_1 u>> 0xd
        int16_t rdx_5
        rdx_5.b = r10_3 == 0
        return 0x7c00 | rdx_5 | r10_3.w | r9_1
else
    if (r11 u< 0x66)
        return zx.q(r9_1)
    
    int32_t r10_2 = r10_1 | 0x800000
    rax_5 = (((1 << (0x7e - r11.b - 1)) + r10_2 - 1 + (r10_2 s>> (0x7e - r11.b) & 1))
        s>> (0x7e - r11.b)).w

return rax_5 | r9_1
