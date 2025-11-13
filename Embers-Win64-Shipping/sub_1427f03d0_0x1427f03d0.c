// 函数: sub_1427f03d0
// 地址: 0x1427f03d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_118
void* rax_1 = (*(*arg1 + 0xf0))(arg1, &var_118)
int128_t zmm5 = *(arg2 + 0xc)
int128_t zmm2 = *(arg2 + 4)
int128_t zmm11 = *arg2
int128_t zmm4 = *(arg2 + 8)
int128_t zmm9 = *(rax_1 + 0x10)
int128_t zmm6 = *(rax_1 + 0x14)
zmm9.d = zmm9.d f+ zmm9.d
int128_t zmm8 = *(rax_1 + 0x18)
zmm6.d = zmm6.d f+ zmm6.d
zmm8.d = zmm8.d f+ zmm8.d
int128_t zmm7
zmm7.d = zmm5.d f* zmm5.d
int128_t zmm3
zmm3.d = zmm11.d f* zmm9.d
zmm7.d = zmm7.d f- 0.5f
int128_t zmm0
zmm0.d = zmm2.d f* zmm6.d
int128_t zmm1
zmm1.d = zmm4.d f* zmm8.d
zmm3.d = zmm3.d f+ zmm0.d
int128_t zmm10
zmm10.d = zmm2.d f* zmm8.d
int128_t zmm15
zmm15.d = zmm4.d f* zmm9.d
zmm0.d = zmm4.d f* zmm6.d
zmm3.d = zmm3.d f+ zmm1.d
zmm10.d = zmm10.d f- zmm0.d
zmm0.d = zmm7.d f* zmm9.d
zmm1.d = zmm11.d f* zmm3.d
zmm10.d = zmm10.d f* zmm5.d
zmm4.d = zmm4.d f* zmm3.d
zmm10.d = zmm10.d f+ zmm0.d
zmm0 = zmm11
zmm11.d = zmm11.d f* zmm6.d
zmm0.d = zmm0.d f* zmm8.d
zmm10.d = zmm10.d f+ zmm1.d
zmm1 = zmm2
zmm2.d = zmm2.d f* zmm9.d
zmm15.d = zmm15.d f- zmm0.d
zmm1.d = zmm1.d f* zmm3.d
zmm11.d = zmm11.d f- zmm2.d
zmm0 = zmm7
zmm7.d = zmm7.d f* zmm8.d
zmm10.d = zmm10.d f+ arg2[1].d
zmm15.d = zmm15.d f* zmm5.d
zmm11.d = zmm11.d f* zmm5.d
zmm0.d = zmm0.d f* zmm6.d
zmm11.d = zmm11.d f+ zmm7.d
float arg_8 = zmm10.d
zmm15.d = zmm15.d f+ zmm0.d
zmm11.d = zmm11.d f+ zmm4.d
zmm15.d = zmm15.d f+ zmm1.d
zmm11.d = zmm11.d f+ *(arg2 + 0x18)
zmm15.d = zmm15.d f+ *(arg2 + 0x14)
float arg_10 = zmm11.d
(*(*arg1 + 0x108))(arg1)
int128_t zmm14
zmm14.d = zmm0.d f* arg5
void var_c8
int32_t* rax_4 = (*(*arg1 + 0x120))(arg1, &var_c8)
zmm0 = *(arg2 + 4)
zmm3 = arg6
zmm11 = *arg2
int128_t zmm13
zmm13.d = zmm0.d f+ zmm0.d
zmm1.d = zmm3.d f* *rax_4
zmm2.d = zmm3.d f* rax_4[1]
zmm3.d = zmm3.d f* rax_4[2]
zmm10.d = zmm11.d f+ zmm11.d
int32_t var_128 = zmm1.d
zmm1 = *(arg2 + 8)
int128_t zmm12
zmm12.d = zmm13.d f* zmm0.d
zmm9.d = zmm13.d f* zmm1.d
zmm7.d = zmm10.d f* zmm1.d
zmm6.d = zmm10.d f* zmm0.d
int32_t var_124 = zmm2.d
zmm2 = *(arg2 + 0xc)
zmm13.d = zmm13.d f* zmm2.d
zmm8.d = zmm10.d f* zmm2.d
zmm0.d = zmm7.d f- zmm13.d
int32_t var_120 = zmm3.d
zmm10.d = zmm10.d f* zmm11.d
zmm3.d = zmm1.d f+ zmm1.d
zmm13.d = zmm13.d f+ zmm7.d
int32_t var_110 = zmm0.d
zmm0.d = zmm9.d f+ zmm8.d
zmm9.d = zmm9.d f- zmm8.d
float zmm5_1 = zmm3.d
zmm3.d = zmm3.d f* zmm2.d
zmm5_1 = zmm5_1 f* zmm1.d
int128_t zmm4_1
zmm4_1.d = 1f f- zmm10.d
int32_t var_104 = zmm0.d
int32_t var_100 = zmm13.d
zmm1.d = zmm3.d f+ zmm6.d
int32_t var_fc = zmm9.d
zmm2.d = 1f f- zmm12.d
zmm6.d = zmm6.d f- zmm3.d
int32_t var_114 = zmm1.d
zmm1.d = zmm4_1.d f- zmm5_1
zmm2.d = zmm2.d f- zmm5_1
int32_t var_10c = zmm6.d
zmm4_1.d = zmm4_1.d f- zmm12.d
int32_t var_108 = zmm1.d
var_118 = zmm2.d
int32_t var_f8 = zmm4_1.d
float var_f0
sub_1427f4b70(&var_128, &var_118, &var_f0)
float zmm1_1 = zmm14.d * *arg4
float result = zmm14.d * arg4[1]
zmm14.d = zmm14.d f* arg4[2]
*arg7 = zmm1_1
arg7[1] = result
arg7[2] = zmm14.d
float zmm5_2 = *arg3 - arg_8
float zmm4_2 = arg3[1] f- zmm15.d
float zmm3_1 = arg4[2]
float result_1 = arg4[1]
zmm1_1 = *arg4
result = result_1
float zmm2_1 = arg3[2] - arg_10
result_1 = result_1 * zmm5_2 - zmm1_1 * zmm4_2
float zmm11_1 = zmm3_1 * zmm4_2 - result * zmm2_1
float zmm6_1 = zmm1_1 * zmm2_1 - zmm3_1 * zmm5_2
float var_e4
result = var_e4 * zmm6_1
float var_d8
*arg8 = var_f0 * zmm11_1 + result + var_d8 * result_1
float var_ec
float var_e0
float var_d4
arg8[1] = var_ec * zmm11_1 + var_e0 * zmm6_1 + var_d4 * result_1
float var_e8
float var_dc
float var_d0
arg8[2] = var_e8 * zmm11_1 + var_dc * zmm6_1 + var_d0 * result_1
return result
