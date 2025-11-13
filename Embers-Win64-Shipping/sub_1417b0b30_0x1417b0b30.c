// 函数: sub_1417b0b30
// 地址: 0x1417b0b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8_2 = zx.q(arg2)
uint64_t rdx_2 = (zx.q(r8_2.d) & 7) << 5

if (*(rdx_2 + arg1 + 0x20) s<= 0)
    return 0

return *(*(rdx_2 + arg1 + 0x18) + (r8_2 u>> 3) * 0x10)
