// 函数: sub_1403bb280
// 地址: 0x1403bb280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 8
int128_t result = data_14427eff0.o
int32_t i

do
    __builtin_memset(arg1, 0x80, 0x20)
    __builtin_memset(arg1 + arg2, 0x80, 0x20)
    *(arg1 + (arg2 << 1)) = result
    *(arg1 + (arg2 << 1) + 0x10) = result
    __builtin_memset(arg1 + arg2 * 3, 0x80, 0x20)
    arg1 += arg2 << 2
    i = i_1
    i_1 -= 1
while (i != 1)
return result
