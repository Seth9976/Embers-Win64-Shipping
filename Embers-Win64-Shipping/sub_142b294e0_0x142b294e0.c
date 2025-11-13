// 函数: sub_142b294e0
// 地址: 0x142b294e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_2 = *(arg1 + 0x190)

if (rax_2 == *(arg1 + 0x198))
    return 0

uint32_t r8 = zx.d(*rax_2)

if ((r8 & 0xfffffc00) == 0xdc00)
    *(arg1 + 0x190) = &rax_2[1]

return zx.q(r8.w)
