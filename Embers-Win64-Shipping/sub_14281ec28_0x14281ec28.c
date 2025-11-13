// 函数: sub_14281ec28
// 地址: 0x14281ec28
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0xb0)
int64_t rax_2 = (*(arg1 + 0xb8) - rdx) s>> 3

if (rax_2 u> 1)
    return *(arg1 + 0xc8) - *(*(rdx + (rax_2 << 3) - 0x10) + 8)

return 0
