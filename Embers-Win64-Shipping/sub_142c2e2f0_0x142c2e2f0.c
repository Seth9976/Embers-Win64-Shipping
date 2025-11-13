// 函数: sub_142c2e2f0
// 地址: 0x142c2e2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg4)

if (sub_142bf7510(arg2, arg1, 2) != 0
        && sub_142bf7510(arg2, arg3, (zx.d(*arg1) << 8) + zx.d(arg1[1])) != 0
        && rdi.d u< 0x3fffffff
        && sub_142bf7510(arg2, zx.q(arg1[1]) + (zx.q(*arg1) << 8) + arg3, (rdi << 2).d) != 0)
    return 1

return 0
