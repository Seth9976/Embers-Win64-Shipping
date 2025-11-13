// 函数: sub_141527e10
// 地址: 0x141527e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = arg4
int64_t result = *(arg1 + 0x30)
int64_t r8 = sx.q(*(arg1 + 0x1c) * 3)
arg4.q = arg4.q f* *(result + (r8 << 3) + 0x10)
double zmm4 = arg3.q f* *(result + (r8 << 3) + 8) + arg2.q f* *(result + (r8 << 3)) f+ arg4.q

if (not(zmm4 >= arg5))
    return sub_141527f80(arg1, arg2, arg3, zmm5, arg5, zmm4)

result.b = 1
return result
