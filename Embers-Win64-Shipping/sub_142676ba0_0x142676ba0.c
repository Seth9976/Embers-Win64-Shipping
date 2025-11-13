// 函数: sub_142676ba0
// 地址: 0x142676ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm5 = arg4[1]
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(arg3 + 1)).d f* arg6
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg2))
zmm0.d = zmm0.d f+ arg4[2]
zmm1.d = zmm1.d f* arg6
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg2 + 1))
zmm1.d = zmm1.d f+ *arg4
int32_t var_50 = zmm0.d
zmm6.d = zmm6.d f* arg6
zmm0.d = _mm_cvtepi32_ps(zx.o(arg3)).d f* arg6
zmm6.d = zmm6.d f+ *arg4
zmm0.d = zmm0.d f+ arg4[2]
arg1[3].b = 1
*arg1 = (_mm_unpacklo_ps(zmm1, zmm5)).q
*(arg1 + 0xc) = (_mm_unpacklo_ps(zmm6, zmm5)).q
arg1[1].d = zmm0.d
*(arg1 + 0x14) = var_50
zmm1 = *(arg1 + 0xc)
int32_t var_58 = (*arg1 ^ 0x80000000).d
int32_t var_4c = (zmm1 ^ 0x80000000).d
int32_t var_54 = (arg1[1].d ^ 0x80000000).d
int32_t var_50_1 = (*(arg1 + 4)).d
int32_t var_48 = (*(arg1 + 0x14) ^ 0x80000000).d
int32_t var_44 = arg1[2].d.d
float var_40[0x4]
sub_140acc6d0(&var_40, &var_58, 2)
*arg1 = var_40
int64_t var_30
arg1[2] = var_30
int32_t var_28
arg1[3].d = var_28
arg1[1].d = *(arg5 + 8)
*(arg1 + 0x14) = *(arg5 + 0x14)
return arg1
