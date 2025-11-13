// 函数: sub_142c06360
// 地址: 0x142c06360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax_5 = *arg1
uint64_t rcx_2 = zx.q(zx.d(rax_5:1.b) - 1 + (zx.d(rax_5.b) << 8))

if (rcx_2.d u< (zx.d(*arg1) << 8) + zx.d(*(arg1 + 1)))
    return rcx_2 * 3 + arg1 + 5

&data_14369a5d0:3
return &data_14369a5d0:3
