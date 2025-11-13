// 函数: sub_142c063b0
// 地址: 0x142c063b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_9 = *arg1
uint64_t rdx_6 = zx.q(zx.d(rax_9:3.b) - 1 + (zx.d(rax_9:2.b) << 8) + (zx.d(rax_9:1.b) << 0x10)
    + (zx.d(rax_9.b) << 0x18))

if (rdx_6.d u< (zx.d(*(arg1 + 1)) << 0x10) + (zx.d(*(arg1 + 2)) << 8) + (zx.d(*arg1) << 0x18)
        + zx.d(*(arg1 + 3)))
    return arg1 + ((rdx_6 * 3 + 5) << 1)

&data_14369a5d0:6
return &data_14369a5d0:6
