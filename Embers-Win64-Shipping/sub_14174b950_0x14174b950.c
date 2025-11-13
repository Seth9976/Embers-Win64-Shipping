// 函数: sub_14174b950
// 地址: 0x14174b950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = arg4[0]
float var_38[0x4] = data_142d3f660
int32_t var_50 = 0x1010000
*arg9 = 0xffffffff
float zmm2[0x4] = *(arg2 + 4)
float temp0[0x4] = _mm_unpacklo_ps(*arg2, (*(arg2 + 8))[0].q)
float zmm0[0x4] = data_14399f670
char var_4c = 1
void** const var_58 = &data_142fc46f0
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q)
zmm2 = data_14399f66c
float var_28[0x4] = temp0_2
float temp0_3[0x4] = _mm_unpacklo_ps(data_14399f668, zmm0[0].q)
int32_t var_60 = 0
int32_t var_40 = 0
int64_t var_48 = (_mm_unpacklo_ps(zx.o(0), 0)).q
float temp0_6[0x4] = _mm_unpacklo_ps(temp0_3, _mm_unpacklo_ps(zmm2, 0)[0].q)
int32_t var_68 = 0x3f800000
float var_3c = arg5[0]
float var_18[0x4] = temp0_6
int64_t var_64 = 0
return sub_14167f140(arg1, &var_58, &var_38, arg3, zmm5, arg6, arg7, arg8, 0, &var_68, 0)
