// 函数: sub_142b3d020
// 地址: 0x142b3d020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x4c)
int32_t rdi = 0

if (r8 s> 0)
    rdi = sub_142a48c90(arg1 + 8, 2, r8)

int32_t r8_1 = *(arg1 + 0x54)

if (r8_1 s<= 0)
    return zx.q(rdi)

return zx.q(sub_142a48c90(arg1 + 8, *(arg1 + 0x50) + 1, r8_1) + rdi)
