// 函数: sub_141ec81a0
// 地址: 0x141ec81a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2[5].b & 2) != 0)
    char rax = sub_141eb4c50((*arg1).d, arg2)
    char rax_1 = sub_141eb4c50(*(arg1 + 4), arg2)
    *arg4 = sub_141eb4c50(*(arg1 + 8), arg2) & rax & 1 & rax_1
    return 1

int32_t arg_10
(*(*arg2 + 0x160))(arg2, &arg_10, 0x10000)
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(arg_10 - 0x8000)).d f* 3.05185094e-05f
*arg1 = zmm0.d
int32_t arg_20
(*(*arg2 + 0x160))(arg2, &arg_20, 0x10000)
zmm0.d = _mm_cvtepi32_ps(zx.o(arg_20 - 0x8000)).d f* 3.05185094e-05f
*(arg1 + 4) = zmm0.d
int32_t var_28
(*(*arg2 + 0x160))(arg2, &var_28, 0x10000)
int32_t result
result.b = 1
zmm0.d = _mm_cvtepi32_ps(zx.o(var_28 - 0x8000)).d f* 3.05185094e-05f
*(arg1 + 8) = zmm0.d
*arg4 = 1
return result
