// 函数: sub_140e69d90
// 地址: 0x140e69d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e20d18
int32_t var_28 = int.d(fconvert.t(*arg3))
int32_t var_24 = int.d(fconvert.t(arg3[1]))
int32_t var_20 = int.d(fconvert.t(arg3[2]))
int32_t var_1c = int.d(fconvert.t(arg3[3]))
int32_t var_18
(*(*rcx + 0xb0))(rcx, &var_18, &var_28)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(var_18))
int32_t var_14
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(var_14))
*arg2 = zmm0.d
arg2[1] = zmm1.d
int32_t var_10
zmm0 = _mm_cvtepi32_ps(zx.o(var_10))
int32_t var_c
zmm1 = _mm_cvtepi32_ps(zx.o(var_c))
arg2[2] = zmm0.d
arg2[3] = zmm1.d
return arg2
