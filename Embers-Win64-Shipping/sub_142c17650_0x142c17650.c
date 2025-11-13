// 函数: sub_142c17650
// 地址: 0x142c17650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])

if (r8_2 == 1)
    return sub_142c2a360(arg1, arg2) __tailcall

if (r8_2 == 2)
    return sub_142c2a480(arg1, arg2) __tailcall

if (r8_2 == 3)
    return sub_142c2a8d0(arg2, zx.d(arg1[3]) + (zx.d(arg1[2]) << 8), &arg1[8], sub_142c22190, arg1)

uint32_t result
result.b = 0
return result
