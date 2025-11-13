// 函数: sub_142c1dbf0
// 地址: 0x142c1dbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((zx.d(*arg1) << 8) + zx.d(arg1[1]) != 1)
    uint32_t result
    result.b = 0
    return result

char r8 = 0
int32_t r9_2

if ((zx.d(arg1[2]) << 8) + zx.d(arg1[3]) u>= arg3)
    r9_2 = 0
else
    r9_2 = *(arg2 + (((zx.q(arg1[2]) << 8) + zx.q(arg1[3])) << 2))

if (sx.d(zx.w(arg1[5]) + zx.w(arg1[4]) * 0x100) s<= r9_2
        && r9_2 s<= sx.d(zx.w(arg1[7]) + zx.w(arg1[6]) * 0x100))
    r8 = 1

return zx.q(r8)
