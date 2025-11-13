// 函数: sub_1420cc3e0
// 地址: 0x1420cc3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = 0x3f000000
float zmm12[0x4] = *arg2
float zmm13[0x4] = *(arg2 + 4)
zmm12[0] = zmm12[0] * zmm12[0]
zmm13[0] = zmm13[0] * zmm13[0]
int128_t zmm14 = *(arg2 + 8)
zmm12[0] = zmm12[0] + zmm13[0]
zmm12[0] = zmm12[0] + zmm14.d f* zmm14.d
float zmm2[0x4]
float zmm4[0x4]

if (not(zmm12[0] <= 9.99999994e-09f))
    zmm4 = 0x3f000000
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm12[0], zmm12[0])
    zmm2 = 0x3f000000
    zmm12[0] = zmm12[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm12[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm12[0] = zmm12[0] * temp0_1[0] * temp0_1[0]
    zmm4[0] = 0.5f - zmm12[0]
    zmm3 = 0x3f000000
    temp0_1[0] = temp0_1[0] * zmm4[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm12[0] = zmm12[0] * temp0_1[0]
    zmm13[0] = zmm13[0] * temp0_1[0]
    zmm14.d = zmm14.d f* temp0_1[0]

float zmm7[0x4] = *(arg3 + 4)
float zmm6[0x4] = *arg3
int128_t zmm8 = *(arg3 + 8)
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm8.d f* zmm8.d

if (not(zmm6[0] <= 9.99999994e-09f))
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
    zmm6[0] = zmm6[0] * zmm3[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm3[0] = zmm3[0] - zmm6[0] * temp0_2[0]
    temp0_2[0] = temp0_2[0] * zmm3[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    zmm6[0] = zmm6[0] * temp0_2[0] * temp0_2[0]
    zmm3[0] = zmm3[0] - zmm6[0]
    temp0_2[0] = temp0_2[0] * zmm3[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    zmm6[0] = zmm6[0] * temp0_2[0]
    zmm7[0] = zmm7[0] * temp0_2[0]
    zmm8.d = zmm8.d f* temp0_2[0]

float zmm10[0x4] = (*arg4)[1]
float zmm9[0x4] = *arg4
int128_t zmm11 = (*arg4)[2]
zmm9[0] = zmm9[0] * zmm9[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm9[0] = zmm9[0] + zmm10[0]
zmm9[0] = zmm9[0] + zmm11.d f* zmm11.d

if (not(zmm9[0] <= 9.99999994e-09f))
    zmm4 = 0x3f000000
    float temp0_3[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
    zmm2 = 0x3f000000
    zmm9[0] = zmm9[0] * 0.5f
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    zmm2[0] = 0.5f - zmm9[0] * temp0_3[0]
    temp0_3[0] = temp0_3[0] * zmm2[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    zmm9[0] = zmm9[0] * temp0_3[0] * temp0_3[0]
    zmm4[0] = 0.5f - zmm9[0]
    temp0_3[0] = temp0_3[0] * zmm4[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    zmm9[0] = zmm9[0] * temp0_3[0]
    zmm10[0] = zmm10[0] * temp0_3[0]
    zmm11.d = zmm11.d f* temp0_3[0]

float var_a8 = data_143dbb1f8[0]
float var_a4 = data_143dbb1fc
float var_a0 = data_143dbb200[0]
int32_t var_9c = 0x3f800000
float var_d8 = zmm12[0]
float var_d4 = zmm13[0]
int32_t var_d0 = zmm14.d
float var_c8 = zmm6[0]
float var_c4 = zmm7[0]
int32_t var_c0 = zmm8.d
float var_b8 = zmm9[0]
float var_b4 = zmm10[0]
int32_t var_b0 = zmm11.d
int32_t var_cc = 0
int32_t var_bc = 0
int32_t var_ac = 0
sub_140adf440(&var_d8, arg1)
return arg1
