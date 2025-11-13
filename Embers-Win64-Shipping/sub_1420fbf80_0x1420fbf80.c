// 函数: sub_1420fbf80
// 地址: 0x1420fbf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *arg4
arg2[1] = arg4[1]
arg2[2] = arg4[2]
arg2[3] = arg4[3]
int64_t zmm0 = *(arg3 + 0x60c)
int32_t var_30 = *(arg3 + 0x614)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0xb0), (*(arg1 + 0xb4))[0].q)
float zmm2[0x4] = *(arg1 + 0x170)
int64_t var_38 = zmm0
int32_t var_20 = (*(arg1 + 0xb8)).d
int64_t var_28 = temp0.q
int32_t result
result.b = sub_140ad0000(arg2, &var_28, zmm2, &var_38, arg3 + 0x340, arg3 + 0x280) == 1
return result
