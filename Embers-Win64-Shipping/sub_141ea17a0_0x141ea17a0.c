// 函数: sub_141ea17a0
// 地址: 0x141ea17a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_3 = *(arg1 + 0x220)

if (rax_3 == 0)
    return 0xffffffff

return zx.q(zx.d(rax_3) - 1)
