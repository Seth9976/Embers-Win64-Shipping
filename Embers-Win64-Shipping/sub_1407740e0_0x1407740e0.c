// 函数: sub_1407740e0
// 地址: 0x1407740e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10 = arg2[0]
float zmm6[0x4] = arg2
float zmm10[0x4] = *arg1
float zmm11[0x4] = *(arg1 + 4)
zmm10[0] = zmm10[0] * zmm10[0]
zmm11[0] = zmm11[0] * zmm11[0]
float zmm12[0x4] = *(arg1 + 8)
zmm10[0] = zmm10[0] + zmm11[0]
float zmm13[0x4] = arg1[1].d
zmm12[0] = zmm12[0] * zmm12[0]
float zmm14[0x4] = *(arg1 + 0x14)
zmm10[0] = zmm10[0] + zmm12[0]
zmm13[0] = zmm13[0] * zmm13[0]
float zmm2[0x4] = *(arg1 + 0x28)
float zmm15[0x4] = *(arg1 + 0x18)
zmm14[0] = zmm14[0] * zmm14[0]
zmm15[0] = zmm15[0] * zmm15[0]
zmm13[0] = zmm13[0] + zmm14[0]
float var_b4 = zmm2[0]
float zmm0[0x4] = arg1[2].d
float zmm3[0x4] = zmm0
float arg_20 = zmm0[0]
zmm3[0] = zmm3[0] * zmm0[0]
zmm13[0] = zmm13[0] + zmm15[0]
arg2 = *(arg1 + 0x24)
zmm0 = arg2
float var_b8 = arg2[0]
zmm0[0] = zmm0[0] * arg2[0]
arg2 = zmm2
arg2[0] = arg2[0] * zmm2[0]
zmm3[0] = zmm3[0] + zmm0[0]
zmm10[0] = zmm10[0] - zmm6[0]
zmm6 = 0x3f800000
zmm2 = 0x3f000000
zmm3[0] = zmm3[0] + arg2[0]
float arg_18 = zmm3[0]
float temp0[0x4] = _mm_rsqrt_ss(zmm10[0], zmm10[0])
zmm10[0] = zmm10[0] * 0.5f
temp0[0] = temp0[0] * temp0[0]
zmm10[0] = zmm10[0] * temp0[0]
zmm2[0] = 0.5f - zmm10[0]
temp0[0] = temp0[0] * zmm2[0]
temp0[0] = temp0[0] + temp0[0]
zmm0 = 0x3f000000
temp0[0] = temp0[0] * temp0[0]
zmm10[0] = zmm10[0] * temp0[0]
zmm0[0] = 0.5f - zmm10[0]
temp0[0] = temp0[0] * zmm0[0]
bool cond:0 = zmm10[0] < 0f
temp0[0] = temp0[0] + temp0[0]
int128_t zmm8

if (cond:0)
    zmm8 = 0x3f800000
else
    zmm8 = temp0[0]

zmm2 = 0x3f000000
zmm13[0] = zmm13[0] - arg_10
float temp0_1[0x4] = _mm_rsqrt_ss(zmm13[0], zmm13[0])
zmm13[0] = zmm13[0] * 0.5f
temp0_1[0] = temp0_1[0] * temp0_1[0]
zmm13[0] = zmm13[0] * temp0_1[0]
zmm2[0] = 0.5f - zmm13[0]
temp0_1[0] = temp0_1[0] * zmm2[0]
temp0_1[0] = temp0_1[0] + temp0_1[0]
zmm0 = 0x3f000000
temp0_1[0] = temp0_1[0] * temp0_1[0]
zmm13[0] = zmm13[0] * temp0_1[0]
zmm0[0] = 0.5f - zmm13[0]
temp0_1[0] = temp0_1[0] * zmm0[0]
bool cond:1 = zmm13[0] < 0f
temp0_1[0] = temp0_1[0] + temp0_1[0]
float zmm5[0x4]

if (cond:1)
    zmm5 = 0x3f800000
else
    zmm5 = temp0_1[0]

float zmm9[0x4] = arg_18
zmm2 = 0x3f000000
zmm9[0] = zmm9[0] - arg_10
float temp0_2[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
zmm9[0] = zmm9[0] * 0.5f
temp0_2[0] = temp0_2[0] * temp0_2[0]
zmm9[0] = zmm9[0] * temp0_2[0]
zmm2[0] = 0.5f - zmm9[0]
temp0_2[0] = temp0_2[0] * zmm2[0]
temp0_2[0] = temp0_2[0] + temp0_2[0]
temp0_2[0] = temp0_2[0] * temp0_2[0]
zmm9[0] = zmm9[0] * temp0_2[0]
int128_t zmm7
zmm7.d = 0.5f - zmm9[0]
temp0_2[0] = temp0_2[0] f* zmm7.d
temp0_2[0] = temp0_2[0] + temp0_2[0]

if (not(zmm9[0] < 0f))
    zmm6 = temp0_2[0]

zmm0 = arg_20
arg2 = var_b8
zmm0[0] = zmm0[0] * zmm6[0]
zmm10[0] = zmm10[0] f* zmm8.d
zmm11[0] = zmm11[0] f* zmm8.d
zmm12[0] = zmm12[0] f* zmm8.d
arg1[2].d = zmm0[0]
zmm0 = var_b4
zmm13[0] = zmm13[0] * zmm5[0]
zmm14[0] = zmm14[0] * zmm5[0]
zmm15[0] = zmm15[0] * zmm5[0]
zmm0[0] = zmm0[0] * zmm6[0]
arg2[0] = arg2[0] * zmm6[0]
*arg1 = zmm10[0]
*(arg1 + 4) = zmm11[0]
*(arg1 + 8) = zmm12[0]
arg1[1].d = zmm13[0]
*(arg1 + 0x14) = zmm14[0]
*(arg1 + 0x18) = zmm15[0]
*(arg1 + 0x28) = zmm0[0]
*(arg1 + 0x24) = arg2[0]
