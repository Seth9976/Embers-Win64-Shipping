// 函数: sub_140f2fca0
// 地址: 0x140f2fca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98
sub_140f20380(&var_98, arg3, arg4, arg6)
float zmm4[0x4] = *(arg3 + 8)
float zmm2[0x4] = *(arg3 + 0xc)
int32_t var_90
zmm4[0] = zmm4[0] f* var_90
int64_t* rcx_1 = data_143e29f28
int32_t var_8c
zmm4[0] = zmm4[0] f* var_8c
float zmm5 = zmm4[0]
float zmm3 = arg3[1].d
zmm4[0] = zmm4[0] + zmm2[0]
zmm4[0] = zmm4[0] + zmm3
float arg_10 = zmm4[0]
float var_80
zmm5 = zmm5 * var_80 + zmm2[0]
float zmm0[0x4] = var_98
zmm0[0] = zmm0[0] * zmm4[0]
float arg_14 = zmm4[0]
int32_t var_94
float zmm1[0x4] = var_94
zmm1[0] = zmm1[0] * zmm4[0]
float temp0[0x4] = _mm_unpacklo_ps(zmm0, zmm1[0].q)
zmm1 = zmm4
int32_t var_84
zmm1[0] = zmm1[0] f* var_84
int64_t var_b8 = temp0.q
int32_t var_7c
zmm4[0] = zmm4[0] f* var_7c
int32_t var_88
zmm4[0] = zmm4[0] f* var_88
zmm1[0] = zmm1[0] + zmm3
zmm4[0] = zmm4[0] + zmm3
zmm4[0] = zmm4[0] + zmm2[0]
bool cond:0 = zmm1[0] <= zmm4[0]
float temp0_1 = _mm_max_ss(zmm5, zmm4[0])
zmm2 = zmm4
float temp0_2 = _mm_min_ss(zmm5, zmm4[0])

if (not(cond:0))
    zmm4 = zmm1
    zmm1 = zmm2

float var_b0 = temp0_2
float var_ac = zmm1[0]
float var_a8 = temp0_1
float var_a4 = zmm4[0]
int32_t var_78
int32_t arg_18
(*(*rcx_1 + 0x1b8))(rcx_1, &arg_18, &var_b0, &var_b8, 0, &arg_10, var_78)
zmm1 = 0x3f800000
int128_t zmm7 = *(arg3 + 0xc)
int128_t zmm8 = arg3[1].d
char rbx = *(arg3 + 0x34)
zmm1[0] = 1f f/ (*(arg3 + 8)).d
arg2[1] = 0x3f800000
zmm1[0] = zmm1[0] f* arg_18
zmm1[0] = zmm1[0] f* arg5
zmm1[0] = zmm1[0] f* zmm7.d
zmm1[0] = zmm1[0] f* zmm8.d
zmm1[0] = zmm1[0] - zmm1[0]
*arg2 = var_98.q
zmm0 = data_142d8c9b0
zmm1[0] = zmm1[0] - zmm1[0]
var_b0.o = zmm0
arg2[2].d = 0
float var_a0 = zmm1[0]
float var_9c = zmm1[0]
int32_t zmm7_1
float zmm8_1
int32_t zmm9_1
float zmm10_1[0x4]
zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_1408b8950(arg2 + 0x1c, &var_b0, arg3 + 0x1c)
*(arg2 + 0x34) &= 0xfe
arg2[1].d = zmm10_1[0]
float zmm0_1 = zmm10_1[0]
zmm10_1[0] = zmm10_1[0] f* zmm9_1
*(arg2 + 0x34) |= rbx & 1
zmm10_1[0] = zmm10_1[0] f+ zmm7_1
zmm0_1 = zmm0_1 * zmm1[0]
*(arg2 + 0x14) = zmm9_1
arg2[3].d = zmm1[0]
*(arg2 + 0xc) = zmm10_1[0]
arg2[2].d = zmm0_1 + zmm8_1
return arg2
