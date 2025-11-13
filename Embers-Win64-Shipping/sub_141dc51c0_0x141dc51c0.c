// 函数: sub_141dc51c0
// 地址: 0x141dc51c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
(*(*arg1 + 0x548))(arg1, &var_38, zx.q(arg2) ^ 1, zx.q(arg5))
float zmm6[0x4] = var_38
int32_t var_24
float zmm0[0x4] = var_24
int32_t var_2c
float zmm3[0x4] = var_2c
float var_30
zmm0[0] = zmm0[0] - var_30
int32_t var_34
int64_t zmm5 = var_34
zmm3[0] = zmm3[0] - zmm6[0]
int32_t var_28
int64_t zmm2
zmm2.d = var_28.d f- zmm5.d
zmm0[0] = zmm0[0] * 0.5f
zmm3[0] = zmm3[0] * 0.5f
float var_40 = zmm0[0]
zmm2.d = zmm2.d f* 0.5f
*arg4 = (_mm_unpacklo_ps(zmm3, zmm2)).q
arg4[1].d = var_40
zmm6[0] = zmm6[0] f+ *arg4
zmm5.d = zmm5.d f+ *(arg4 + 4)
float result = var_30 f+ arg4[1].d
*arg3 = (_mm_unpacklo_ps(zmm6, zmm5)).q
arg3[1].d = result
return result
