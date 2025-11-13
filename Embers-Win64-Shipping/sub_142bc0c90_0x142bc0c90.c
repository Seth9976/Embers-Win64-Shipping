// 函数: sub_142bc0c90
// 地址: 0x142bc0c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_2 = zx.d(*arg1)

if (r8_2 != 0x1c)
    if (r8_2 != 0x1d)
        if (r8_2 u< 0xf7)
            return zx.q(r8_2 - 0x8b)
        
        if (r8_2 u>= 0xfb)
            if (&arg1[2] u<= arg2)
                return zx.q(0xfa94 - (r8_2 << 8) - zx.d(arg1[1]))
        else if (&arg1[2] u<= arg2)
            return zx.q(zx.d(arg1[1]) - 0xf694 + (r8_2 << 8))
    else if (&arg1[5] u<= arg2)
        return zx.q(((zx.d(arg1[1]) << 8 | zx.d(arg1[2])) << 8 | zx.d(arg1[3])) << 8)
            | zx.q(arg1[4])
else if (&arg1[3] u<= arg2)
    return zx.q(sx.d(zx.w(arg1[1]) << 8)) | zx.q(arg1[2])

return 0
