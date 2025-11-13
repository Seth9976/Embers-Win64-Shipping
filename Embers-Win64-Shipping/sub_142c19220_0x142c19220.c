// 函数: sub_142c19220
// 地址: 0x142c19220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1

do
    rdx_1 = *(arg1 + 0x88)
    *(arg1 + 0x88) = rdx_1 + 1
    rdx_1.b &= 7
while (rdx_1.b == 0)

return zx.q(rdx_1.b)
