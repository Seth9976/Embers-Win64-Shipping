// 函数: sub_142aa6250
// 地址: 0x142aa6250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2 & 0xf

if (rax == 0xa)
    return zx.q(*(*(arg1 + 8) + (zx.q(arg2) u>> 0xd << 2)))

if (rax == 0xd)
    return 0xffffffff

if (rax != 0xb)
    return zx.q(arg2)

return zx.q(**(arg1 + 8))
