// 函数: sub_141091090
// 地址: 0x141091090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax_1 = 0

if (arg1 != 0)
    rax_1 = *(*(*(arg1 + 0x110) + 8) + 0x30) - 0x8000

return zx.q(rax_1) << 0x30 | zx.q(arg2)
