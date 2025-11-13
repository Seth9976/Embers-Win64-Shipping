// 函数: sub_142aa60d0
// 地址: 0x142aa60d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2.b u< 0xc0)
    return arg2

int32_t rax = arg2 & 0xf

if (rax == 0xa)
    return zx.q(*(*(arg1 + 8) + (zx.q(arg2) u>> 0xd << 2)))

if (rax == 0xd)
    return 0xffffffff

if (rax != 0xb)
    return arg2

return **(arg1 + 8)
