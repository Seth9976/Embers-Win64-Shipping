// 函数: sub_142982350
// 地址: 0x142982350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result_1
(*(*arg2 + 0x10))(arg2, &result_1, 4, arg2)
uint32_t result = zx.d(result_1)
result_1.d = ((zx.d(arg5) << 8 | zx.d(arg4)) << 8 | zx.d(arg3)) << 8 | result
*(arg1 + 8) = result_1.d
return result
