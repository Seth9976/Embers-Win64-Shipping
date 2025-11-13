// 函数: sub_14210f5d0
// 地址: 0x14210f5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_5 = *(arg1 + 0x151)

if (rax_5 != 1)
    return zx.q(rax_5)

return zx.q(zx.d(not.b(*(arg1 + 0x20a))) u>> 4) & 1
