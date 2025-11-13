// 函数: sub_142c33050
// 地址: 0x142c33050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg4 == 0)
    return zx.q(arg1)

char* rbx_1 = zx.q(arg1) + arg3

if (arg2 u< 0x7fffffff && sub_142bf7510(arg4 + 0x20, rbx_1, arg2 * 2) != 0)
    return zx.q(sx.d(zx.w(rbx_1[1]) + zx.w(*rbx_1) * 0x100))

return 0
