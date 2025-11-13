// 函数: sub_142c06110
// 地址: 0x142c06110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 0x20).b != 0)
    uint32_t r8_4 = ((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 0x10
    
    if (zx.d(arg1[3]) + (zx.d(arg1[2]) << 8) + r8_4 == 0x10000)
        result.b = 1
        return result
    
    if (zx.d(arg1[3]) + (zx.d(arg1[2]) << 8) + r8_4 == 0x20000)
        if (sub_142c061d0(&arg1[0x20], arg2).b != 0
                || (((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8)
                + zx.d(arg1[3]) == 0x30000)
            result.b = 1
            return result
    else if ((((((zx.d(*arg1) << 8) + zx.d(arg1[1])) << 8) + zx.d(arg1[2])) << 8) + zx.d(arg1[3])
            == 0x30000)
        result.b = 1
        return result

result.b = 0
return result
