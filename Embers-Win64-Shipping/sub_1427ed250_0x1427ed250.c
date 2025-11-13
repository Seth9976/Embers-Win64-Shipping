// 函数: sub_1427ed250
// 地址: 0x1427ed250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *arg4
float zmm4 = arg4[2]
float zmm5 = arg4[3]
int128_t zmm6 = arg4[1]
float temp0 = _mm_sqrt_ss(0, zmm3 * zmm3 + zmm6.d f* zmm6.d + zmm4 * zmm4 + zmm5 * zmm5)
float zmm2 = arg4[6]
float zmm0 = 1f / temp0
float zmm1 = arg4[5]
zmm3 = zmm3 * zmm0
zmm6.d = zmm6.d f* zmm0
zmm4 = zmm4 * zmm0
zmm5 = zmm5 * zmm0
zmm0 = arg4[4]
*(arg1 + 0x28) = zmm3
*(arg1 + 0x2c) = zmm6.d
*(arg1 + 0x30) = zmm4
*(arg1 + 0x34) = zmm5
*(arg1 + 0x38) = zmm0
*(arg1 + 0x40) = zmm2
*(arg1 + 0x3c) = zmm1
zmm6 = arg6[1]
zmm3 = *arg6
zmm4 = arg6[2]
zmm5 = arg6[3]
zmm1 = arg6[5]
float temp0_1 = _mm_sqrt_ss(0, zmm3 * zmm3 + zmm6.d f* zmm6.d + zmm4 * zmm4 + zmm5 * zmm5)
zmm2 = arg6[6]
int128_t zmm7
zmm7.d = 1f / temp0_1
zmm0 = arg6[4]
*(arg1 + 0x44) = zmm3 f* zmm7.d
*(arg1 + 0x4c) = zmm4 f* zmm7.d
zmm6.d = zmm6.d f* zmm7.d
*(arg1 + 0x50) = zmm5 f* zmm7.d
*(arg1 + 0x48) = zmm6.d
*(arg1 + 0x54) = zmm0
*(arg1 + 0x58) = zmm1
*(arg1 + 0x5c) = zmm2
void var_b8
int64_t* rax = sub_1427ec150(arg1, &var_b8, arg3)
float zmm9 = *(rax + 0xc)
int128_t zmm11 = rax[1].d
int128_t zmm12 = *rax ^ 0x80000000
float zmm5_1 = arg4[4] f- rax[2].d
float zmm4_1 = arg4[5] f- *(rax + 0x14)
int128_t zmm10 = *(rax + 4) ^ 0x80000000
float zmm8 = arg4[6] f- rax[3].d
int32_t var_d8 = zmm12.d
zmm11 ^= 0x80000000
zmm5_1 = zmm5_1 * 2f
zmm4_1 = zmm4_1 * 2f
zmm8 = zmm8 * 2f
int32_t var_d4 = zmm10.d
int32_t var_d0 = zmm11.d
float var_cc = zmm9
zmm11.d = zmm11.d f* (zmm10.d * zmm4_1 + zmm12.d * zmm5_1 + zmm11.d * zmm8)
zmm12.d = zmm12.d f* zmm4_1
zmm10.d = zmm10.d f* zmm5_1
zmm12.d = zmm12.d f- zmm10.d
zmm12.d = zmm12.d f* zmm9
zmm12.d = zmm12.d f+ (zmm9 * zmm9 - 0.5f) * zmm8
zmm12.d = zmm12.d f+ zmm11.d
float var_c8[0x4]
float* rax_1
int32_t zmm6_2
int32_t zmm7_2
rax_1, zmm6_2, zmm7_2 = sub_1417c7990(&var_d8, &var_c8, arg4)
*(arg2 + 0x10) = *rax_1
arg2[8] = zmm7_2
arg2[9] = zmm6_2
arg2[0xa] = zmm12.d
int64_t* rax_2
float zmm14
int128_t zmm15
rax_2, zmm14, zmm15 = sub_1427ec150(arg1, &var_b8, arg5)
int128_t zmm12_1 = *rax_2 ^ zmm15
var_d8 = zmm12_1.d
float zmm9_1 = *(rax_2 + 0xc)
int128_t zmm10_1 = *(rax_2 + 4) ^ zmm15
int128_t zmm11_1 = rax_2[1].d ^ zmm15
float zmm5_2 = (arg6[4] f- rax_2[2].d) * zmm14
float zmm4_2 = (arg6[5] f- *(rax_2 + 0x14)) * zmm14
float zmm8_1 = (arg6[6] f- rax_2[3].d) * zmm14
int32_t var_d4_1 = zmm10_1.d
int32_t var_d0_1 = zmm11_1.d
float var_cc_1 = zmm9_1
zmm11_1.d = zmm11_1.d f* (zmm10_1.d * zmm4_2 + zmm12_1.d * zmm5_2 + zmm11_1.d * zmm8_1)
zmm12_1.d = zmm12_1.d f* zmm4_2
zmm10_1.d = zmm10_1.d f* zmm5_2
zmm12_1.d = zmm12_1.d f- zmm10_1.d
zmm12_1.d = zmm12_1.d f* zmm9_1
zmm12_1.d = zmm12_1.d f+ (zmm9_1 * zmm9_1 - 0.5f) * zmm8_1
zmm12_1.d = zmm12_1.d f+ zmm11_1.d
float* result
int32_t zmm6_4
int32_t zmm7_4
result, zmm6_4, zmm7_4 = sub_1417c7990(&var_d8, &var_c8, arg6)
*(arg2 + 0x2c) = *result
arg2[0xf] = zmm7_4
arg2[0x10] = zmm6_4
arg2[0x11] = zmm12_1.d
*arg2 = 0x3f800000
arg2[1] = 0x3f800000
arg2[2] = 0x3f800000
arg2[3] = 0x3f800000
return result
