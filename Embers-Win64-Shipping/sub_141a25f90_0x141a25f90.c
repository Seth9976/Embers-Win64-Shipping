// 函数: sub_141a25f90
// 地址: 0x141a25f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *arg2
int64_t r9_1 = sx.q((r8 u>> 0x20).d) * sx.q(*arg1)
int64_t result = sx.q(arg1[1]) * sx.q(r8.d)

if (r9_1 s<= result && mods.dp.q(sx.o(result), r9_1) == 0)
    result.b = 1
    return result

result.b = 0
return result
