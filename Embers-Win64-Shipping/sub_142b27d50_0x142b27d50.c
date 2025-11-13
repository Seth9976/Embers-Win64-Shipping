// 函数: sub_142b27d50
// 地址: 0x142b27d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_4 = *(arg1 + 0x190)

if (rax_4 s<= 1)
    jump(*(*(arg1 + 0x188) + 0x20))

if (rax_4 == 2)
    return zx.q(*(arg1 + 0x198))

if (*(arg1 + 0x198) != 0)
    return zx.q(*(arg1 + 0x19c))

return zx.q(*(arg1 + 0x194))
