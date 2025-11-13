// 函数: sub_1407ca030
// 地址: 0x1407ca030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *(arg2 + 4)
float zmm5[0x4] = *(arg2 + 8)
int64_t zmm2 = zmm4[0].q
float zmm3 = zmm5[0]
float zmm6[0x4] = *arg2
float zmm1 = zmm6[0] * 0.333333343f
float zmm15[0x4] = zmm6
zmm15[0] = zmm15[0] + zmm1
zmm2.d = zmm2.d f* 0.333333343f
zmm3 = zmm3 * 0.333333343f
zmm15[0] = zmm15[0] f+ zmm2.d
zmm15[0] = zmm15[0] + zmm3
int32_t rcx = int.d(zmm15[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx))[0] == zmm15[0]))
    zmm15 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm15, zmm15[0].q)) & 1)))

float zmm14[0x4] = zmm4
zmm14[0] = zmm14[0] + zmm1
zmm14[0] = zmm14[0] f+ zmm2.d
zmm14[0] = zmm14[0] + zmm3
int32_t rcx_2 = int.d(zmm14[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2))[0] == zmm14[0]))
    zmm14 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm14, zmm14[0].q)) & 1)))

float zmm13[0x4] = zmm5
zmm13[0] = zmm13[0] + zmm1
zmm13[0] = zmm13[0] f+ zmm2.d
zmm13[0] = zmm13[0] + zmm3
int32_t rcx_4 = int.d(zmm13[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4))[0] == zmm13[0]))
    zmm13 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm13, zmm13[0].q)) & 1)))

float zmm7[0x4] = 0x3f800000
zmm2.d = zmm15[0].q.d f* 0.166666672f
float zmm9[0x4] = 0x3f800000
zmm1 = zmm14[0] * 0.166666672f
zmm15[0] = zmm15[0] f- zmm2.d
zmm13[0] = zmm13[0] * 0.166666672f
float zmm8[0x4] = 0x3f800000
zmm14[0] = zmm14[0] f- zmm2.d
zmm13[0] = zmm13[0] f- zmm2.d
zmm15[0] = zmm15[0] - zmm1
zmm14[0] = zmm14[0] - zmm1
zmm13[0] = zmm13[0] - zmm1
zmm15[0] = zmm15[0] - zmm13[0]
zmm14[0] = zmm14[0] - zmm13[0]
zmm13[0] = zmm13[0] - zmm13[0]
zmm6[0] = zmm6[0] - zmm15[0]
zmm15[0] = zmm15[0] + 0.5f
zmm4[0] = zmm4[0] - zmm14[0]
zmm5[0] = zmm5[0] - zmm13[0]
float var_e0 = zmm13[0]
zmm14[0] = zmm14[0] + 0.5f
zmm13[0] = zmm13[0] + 0.5f
float var_b8 = zmm13[0]
int32_t rax_7
rax_7.b = zmm6[0] >= zmm4[0]
zmm3 = float.s(rax_7)
int32_t rax_8
rax_8.b = zmm4[0] >= zmm5[0]
zmm4 = zx.o(0)
bool cond:2 = zmm5[0] >= zmm6[0]
zmm4[0] = float.s(rax_8)
int32_t rcx_6
rcx_6.b = cond:2
zmm8[0] = 1f - zmm3
zmm5 = zx.o(0)
zmm7[0] = 1f - zmm4[0]
zmm5[0] = float.s(rcx_6)
zmm2 = zmm8[0].q
float temp0_13[0x4] = _mm_min_ss(zmm8[0], zmm4[0])
float temp0_14[0x4] = _mm_max_ss(zmm7[0], zmm5[0])
zmm9[0] = 1f - zmm5[0]
float temp0_15[0x4] = _mm_min_ss(zmm7[0], zmm5[0])
int64_t temp0_16 = _mm_max_ss(zmm2.d, zmm4[0])
temp0_13[0] = temp0_13[0] + zmm14[0]
temp0_14[0] = temp0_14[0] + zmm13[0]
float temp0_17[0x4] = _mm_min_ss(zmm9[0], zmm3)
float temp0_18[0x4] = _mm_max_ss(zmm9[0], zmm3)
temp0_15[0] = temp0_15[0] + zmm13[0]
temp0_13[0] = temp0_13[0] - 0.166666672f
temp0_14[0] = temp0_14[0] - 0.333333343f
temp0_17[0] = temp0_17[0] + zmm15[0]
temp0_18[0] = temp0_18[0] + zmm15[0]
zmm2.d = temp0_16.d f+ zmm14[0]
temp0_15[0] = temp0_15[0] - 0.166666672f
float var_c4 = temp0_14[0]
float temp0_19[0x4] = _mm_unpacklo_ps(zmm15, zmm14[0].q)
temp0_17[0] = temp0_17[0] - 0.166666672f
*arg1 = temp0_19.q
temp0_18[0] = temp0_18[0] - 0.333333343f
zmm2.d = zmm2.d f- 0.333333343f
arg1[1].d = var_e0
float var_d0 = temp0_15[0]
*(arg1 + 0xc) = (_mm_unpacklo_ps(temp0_17, temp0_13[0].q)).q
arg1[3] = (_mm_unpacklo_ps(temp0_18, zmm2)).q
*(arg1 + 0x14) = var_d0
float temp0_22[0x4] = _mm_unpacklo_ps(zmm15, zmm14[0].q)
arg1[4].d = var_c4
*(arg1 + 0x24) = temp0_22.q
*(arg1 + 0x2c) = var_b8
return arg1
