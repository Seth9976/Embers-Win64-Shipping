// 函数: sub_1422dffa0
// 地址: 0x1422dffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = arg2
arg2 = *(arg3 + 0x280) * 0.5f
float zmm5 = *(arg3 + 0x610) - arg1[1]
float zmm4 = *(arg3 + 0x60c) - *arg1
float zmm2 = *(arg3 + 0x614) - arg1[2]
float zmm6[0x4] = *(arg3 + 0x294)
zmm6[0] = zmm6[0] * 0.5f
float temp0[0x4] = _mm_max_ss(zmm6[0], arg2)
temp0[0] = temp0[0] * zmm3
float temp0_2 =
    __maxss_xmmss_memss(_mm_sqrt_ss(0, zmm5 * zmm5 + zmm4 * zmm4 + zmm2 * zmm2), 0x3f800000)
temp0[0] = temp0[0] / temp0_2
temp0[0] = temp0[0] + temp0[0]
int512_t result
result.o = temp0
return result
