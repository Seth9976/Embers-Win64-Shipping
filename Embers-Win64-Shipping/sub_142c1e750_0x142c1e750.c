// 函数: sub_142c1e750
// 地址: 0x142c1e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_1 = (zx.d(*arg1) << 8) + zx.d(arg1[1])

if (r8_1 != 1)
    if (r8_1 == 2)
        return sub_142c1e7d0(arg1, arg2) __tailcall
    
    return 0

int32_t rdx_2 = arg2 - (zx.d(arg1[2]) << 8) - zx.d(arg1[3])

if (rdx_2 u< (zx.d(arg1[4]) << 8) + zx.d(arg1[5]))
    return zx.q((zx.d(arg1[4 + ((zx.q(rdx_2) + 1) << 1)]) << 8)
        + zx.d(arg1[((zx.q(rdx_2) + 1) << 1) + 5]))

return 0
