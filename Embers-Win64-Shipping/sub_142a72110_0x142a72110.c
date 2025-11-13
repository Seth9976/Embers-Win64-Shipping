// 函数: sub_142a72110
// 地址: 0x142a72110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_4 = *(arg1 + 0xc)

if (rax_4 s<= *(arg1 + 0x10))
    return 0xffff

*(arg1 + 0xc) = rax_4 - 1
return zx.q(*(*(arg1 + 0x18) + (sx.q(rax_4 - 1) << 1)))
