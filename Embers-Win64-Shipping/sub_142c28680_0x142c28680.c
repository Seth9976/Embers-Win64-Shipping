// 函数: sub_142c28680
// 地址: 0x142c28680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t result

if (sub_142bf7510(arg2, arg1, 0xa).b != 0)
    int16_t r8_2 = zx.w(*arg1) * 0x100
    result = zx.w(arg1[1])
    int16_t temp0_1 = r8_2
    r8_2 += result
    
    if (temp0_1 != neg.w(result))
        if (zx.w(arg1[2]) * 0x100 == neg.w(zx.w(arg1[3]))
                && zx.w(arg1[4]) * 0x100 == neg.w(zx.w(arg1[5]))
                && zx.w(arg1[6]) * 0x100 == neg.w(zx.w(arg1[7]))
                && zx.w(arg1[8]) * 0x100 == neg.w(zx.w(arg1[9])))
            result.b = 1
            return result
        
        if (r8_2 u>= zx.w(arg1[6]) * 0x100 + zx.w(arg1[7])
                && r8_2 u<= zx.w(arg1[8]) * 0x100 + zx.w(arg1[9])
                && zx.w(arg1[4]) * 0x100 + zx.w(arg1[5]) u>= 0x100
                && zx.w(arg1[4]) * 0x100 + zx.w(arg1[5]) u<= 0x7fff)
            result.b = 1
            return result

result.b = 0
return result
