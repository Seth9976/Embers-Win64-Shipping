// 函数: sub_141779320
// 地址: 0x141779320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *(arg2 + 0xc)
float zmm1 = *(arg1 + 0xc)
float zmm2[0x4] = *(arg2 + 4)
float zmm6[0x4] = *arg1
zmm6[0] = zmm6[0] * zmm3[0]
float zmm9[0x4] = *(arg1 + 4)
uint32_t zmm13[0x4] = zmm2
zmm2[0] = zmm2[0] * zmm1
float zmm14[0x4] = *(arg1 + 8)
float zmm15[0x4] = *arg2
float arg_8 = zmm2[0]
float zmm11[0x4] = *(arg2 + 8)
float zmm5 = zmm11[0]
zmm15[0] = zmm15[0] * zmm1
zmm15[0] = zmm15[0] + zmm6[0]
zmm15[0] = zmm15[0] * zmm9[0]
zmm13[0] = zmm13[0] f* zmm9[0]
zmm9[0] = zmm9[0] * zmm3[0]
zmm2[0] = zmm2[0] + zmm9[0]
zmm14[0] = zmm14[0] * zmm3[0]
zmm3[0] = zmm3[0] * zmm1
zmm5 = zmm5 * zmm1 + zmm14[0]
zmm1 = zmm11[0] * zmm14[0]
float zmm8[0x4] = zmm3
float arg_10 = zmm3[0]
zmm15[0] = zmm15[0] * zmm6[0]
zmm15[0] = zmm15[0] + zmm15[0]
zmm15[0] = zmm15[0] * zmm14[0]
zmm13[0] = zmm13[0] f+ zmm15[0]
zmm2[0] = zmm2[0] * zmm6[0]
zmm15[0] = zmm15[0] * zmm6[0]
zmm15[0] = zmm15[0] + zmm2[0]
zmm13[0] = zmm13[0] f+ zmm1
zmm11[0] = zmm11[0] * zmm6[0]
zmm15[0] = zmm15[0] + zmm11[0]
zmm15[0] = zmm15[0] + zmm5
zmm8[0] = zmm8[0] f- zmm13[0]
zmm15[0] = zmm15[0] - zmm5
zmm1 = zmm15[0]
zmm15[0] = zmm15[0] * 0.5f
zmm1 = zmm1 - zmm2[0]
zmm15[0] = zmm15[0] + zmm8[0]
zmm15[0] = zmm15[0] * 0.5f
zmm15[0] = zmm15[0] * 0.5f
zmm3 = arg_8
float temp0[0x4] = _mm_unpacklo_ps(zmm15, zmm15[0].q)
zmm9[0] = zmm9[0] + zmm9[0]
*arg3 = temp0.q
arg3[2] = zmm1 * 0.5f
zmm9[0] = zmm9[0] * zmm3[0]
zmm9[0] = zmm9[0] + zmm8[0]
zmm9[0] = zmm9[0] * 0.5f
zmm15[0] = zmm15[0] + zmm2[0]
zmm13[0] = zmm13[0] f+ arg_10
zmm3[0] = zmm3[0] * zmm14[0]
zmm11[0] = zmm11[0] * zmm9[0]
zmm14[0] = zmm14[0] + zmm14[0]
zmm1 = zmm15[0]
zmm15[0] = zmm15[0] * 0.5f
uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm13, data_142d3f770)
zmm3[0] = zmm3[0] + zmm11[0]
zmm14[0] = zmm14[0] * zmm11[0]
float temp0_2[0x4] = _mm_unpacklo_ps(zmm15, zmm9[0].q)
bool cond:0 = temp0_1[0] f>= 9.99999994e-09f
*arg4 = temp0_2.q
zmm1 = zmm1 + zmm3[0]
zmm3[0] = zmm3[0] - zmm15[0]
zmm14[0] = zmm14[0] + zmm8[0]
zmm3[0] = zmm3[0] * 0.5f
arg4[1].d = zmm1 * 0.5f
zmm14[0] = zmm14[0] * 0.5f
*arg5 = (_mm_unpacklo_ps(zmm15, zmm3[0].q)).q
float result = zmm14[0]
arg5[1].d = result

if (not(cond:0))
    float zmm0[0x4] = *arg3
    zmm0[0] = zmm0[0] + 9.99999994e-09f
    *arg3 = zmm0[0]
    *(arg4 + 4) = *(arg4 + 4) + 9.99999994e-09f
    zmm0 = arg5[1].d
    zmm0[0] = zmm0[0] + 9.99999994e-09f
    arg5[1].d = zmm0[0]

return result
