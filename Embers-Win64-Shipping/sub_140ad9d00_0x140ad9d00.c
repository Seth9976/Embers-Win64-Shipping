// 函数: sub_140ad9d00
// 地址: 0x140ad9d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *(arg2 + 8)
float zmm7[0x4] = *(arg2 + 0xc)
zmm6[0] = zmm6[0] + zmm6[0]
float zmm9[0x4] = *(arg2 + 4)
float zmm2 = zmm9[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm2 = zmm2 + zmm9[0]
int32_t var_dc = 0
float zmm4 = zmm9[0]
int128_t zmm11 = data_143dbb1fc
zmm9[0] = zmm9[0] * zmm6[0]
int32_t var_cc = 0
zmm4 = zmm4 * zmm2
float zmm15[0x4] = *arg2
float zmm3 = zmm15[0]
int128_t zmm13 = data_143dbb1f8
zmm15[0] = zmm15[0] + zmm15[0]
zmm3 = zmm3 * zmm2
int32_t var_bc = 0
int32_t var_ac = 0x3f800000
zmm15[0] = zmm15[0] * zmm6[0]
zmm15[0] = zmm15[0] * zmm15[0]
zmm7[0] = zmm7[0] * zmm15[0]
zmm7[0] = zmm7[0] * zmm6[0]
zmm6[0] = zmm6[0] + zmm4
zmm7[0] = zmm7[0] * zmm2
zmm6[0] = zmm6[0] + zmm15[0]
float zmm5 = zmm3 - zmm7[0]
zmm7[0] = zmm7[0] + zmm3
zmm2 = 1f - zmm6[0]
zmm7[0] = zmm7[0] + zmm15[0]
zmm15[0] = zmm15[0] - zmm7[0]
float var_d8[0x4]
var_d8[0] = zmm5
zmm3 = 1f - zmm6[0]
float temp0[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
zmm4 = zmm4 + zmm15[0]
float var_e8[0x4]
var_e8[0] = zmm2
float temp0_1[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xe1)
zmm9[0] = zmm9[0] - zmm7[0]
temp0_1[0] = zmm7[0]
zmm7[0] = zmm7[0] + zmm9[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0[0] = zmm3
temp0_2[0] = zmm15[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
int128_t zmm14
zmm14.d = 1f - zmm4
zmm4 = data_143dbb200
*arg1 = temp0_4
temp0_3[0] = zmm7[0]
float var_c8[0x4]
var_c8[0] = zmm7[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
float temp0_6[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
temp0_6[0] = zmm9[0]
arg1[1] = temp0_5
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
float var_b8[0x4]
var_b8[0] = zmm13.d
temp0_7[0] = zmm14.d
float temp0_8[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xe1)
temp0_8[0] = zmm11.d
float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
temp0_10[0] = zmm4
arg1[2] = temp0_9
arg1[3] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
return arg1
