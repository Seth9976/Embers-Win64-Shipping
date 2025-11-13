// 函数: sub_1422dff00
// 地址: 0x1422dff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *(arg3 + 0x294)
float zmm2 = arg2
zmm5[0] = zmm5[0] * 0.5f
float zmm4 = *(arg3 + 0x60c) - *arg1
float zmm3 = *(arg3 + 0x614) - arg1[2]
arg2 = *(arg3 + 0x280) * 0.5f
float zmm6[0x4] = *(arg3 + 0x610)
zmm6[0] = zmm6[0] - arg1[1]
float temp0[0x4] = _mm_max_ss(zmm5[0], arg2)
zmm6[0] = zmm6[0] * zmm6[0]
temp0[0] = temp0[0] * zmm2
zmm6[0] = zmm6[0] + zmm4 * zmm4
temp0[0] = temp0[0] * temp0[0]
zmm6[0] = zmm6[0] + zmm3 * zmm3
zmm6[0] = zmm6[0] f* *(arg3 + 0x2ac)
float temp0_1[0x4] = __maxss_xmmss_memss(zmm6[0], 0x3f800000)
temp0[0] = temp0[0] / temp0_1[0]
int512_t result
result.o = temp0
return result
