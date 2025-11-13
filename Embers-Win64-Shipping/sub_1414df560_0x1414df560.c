// 函数: sub_1414df560
// 地址: 0x1414df560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = data_143ec4fec
int32_t arg_1c = data_143ec4ff0
data_143ec4ffc
int32_t zmm6_1 = sub_14139c770(&data_143ec4c60, arg2, arg_18.q)
char var_40 = 0
int32_t zmm6_2 = sub_1410f5f00(arg1, arg2, data_143ec4e28 + 8, arg3, zmm6_1, 0)
XXH64_copyState(arg4, *(arg3 + 0x15b0))
uint128_t zmm1 = zx.o(*(arg3 + 0x159c))
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x1598))).d f* zmm6_2
zmm1.d = _mm_cvtepi32_ps(zmm1).d f* zmm6_2
int32_t rax = int.d(zmm0.d)
zmm0 = zx.o(*(arg3 + 0x15a0))
int32_t var_38 = rax
int32_t rax_1 = int.d(zmm1.d)
zmm1 = zx.o(*(arg3 + 0x15a4))
int32_t var_34 = rax_1
zmm0.d = _mm_cvtepi32_ps(zmm0).d f* zmm6_2
zmm1.d = _mm_cvtepi32_ps(zmm1).d f* zmm6_2
int32_t var_30 = int.d(zmm0.d)
int32_t var_2c = int.d(zmm1.d)
var_40.q = arg3 + 0x4990
int32_t var_48
var_48.q = arg3 + 0x280
return sub_1422f50b0(arg3, arg4, &arg_18, &var_38, var_48)
