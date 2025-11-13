// 函数: sub_142c31fb0
// 地址: 0x142c31fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3)) u> arg2
        || arg2 - (zx.d(*(arg1 + 2)) << 8) - zx.d(*(arg1 + 3))
        u>= (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)))
    return 0

void* result = arg1 + 6 + (zx.q(arg2 - (zx.d(*(arg1 + 2)) << 8) - zx.d(*(arg1 + 3))) << 2)

if (result u>= arg1 + 6)
    return result

return &data_14369a5d0
