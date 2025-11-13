// 函数: sub_142b718e0
// 地址: 0x142b718e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg2 s>= 0 && arg3 != 0 && arg4 != 0)
    int64_t rdx = sx.q(arg1[1].d)
    int32_t r8_1 = arg2 * 2
    int64_t r11_1 = *arg1
    int32_t r10_1 = *(arg1 + 0xc)
    int32_t r8_2
    
    if (r8_1 s< rdx.d)
        r8_2 = r8_1 + 1
        *arg3 = zx.d(*(r11_1 + (sx.q(r8_1) << 1)))
        
        if (r8_2 s>= rdx.d)
            goto label_142b71988
        
        int64_t rax_2
        rax_2.b = 1
        *arg4 = zx.d(*(r11_1 + (sx.q(r8_2) << 1))) - 1
        return rax_2
    
    r10_1 -= rdx.d
    int32_t r8_4 = (r8_1 - rdx.d) * 2
    
    if (r8_4 s< r10_1)
        r11_1 += rdx << 1
        *arg3 = zx.d(*(r11_1 + (sx.q(r8_4) << 1))) << 0x10 | zx.d(*(r11_1 + (sx.q(r8_4 + 1) << 1)))
        r8_2 = r8_4 + 2
    label_142b71988:
        
        if (r8_2 s>= r10_1)
            *arg4 = 0x10ffff
            int64_t rax_1
            rax_1.b = 1
            return rax_1
        
        uint32_t rax_7
        rax_7.b = 1
        *arg4 = (zx.d(*(r11_1 + (sx.q(r8_2) << 1))) << 0x10
            | zx.d(*(r11_1 + (sx.q(r8_2 + 1) << 1)))) - 1
        return rax_7

int64_t rax
rax.b = 0
return rax
