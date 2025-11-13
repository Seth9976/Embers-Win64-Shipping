// 函数: sub_1428179b0
// 地址: 0x1428179b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = arg6
*arg4 = *arg5
int128_t zmm5 = *(rdi + 0xc)
int128_t zmm2 = *(rdi + 4)
int128_t zmm4 = *(rdi + 8)
int128_t zmm9 = arg5[2].d
zmm9.d = zmm9.d f+ zmm9.d
int128_t zmm6 = *(arg5 + 0x24)
int128_t zmm12 = *rdi
zmm6.d = zmm6.d f+ zmm6.d
int128_t zmm8 = *(arg5 + 0x28)
int128_t zmm7
zmm7.d = zmm5.d f* zmm5.d
zmm8.d = zmm8.d f+ zmm8.d
int128_t zmm0
zmm0.d = zmm2.d f* zmm6.d
zmm7.d = zmm7.d f- 0.5f
float zmm3 = zmm12.d f* zmm9.d f+ zmm0.d
int128_t zmm11
zmm11.d = zmm2.d f* zmm8.d
int128_t zmm13
zmm13.d = zmm4.d f* zmm9.d
zmm0.d = zmm4.d f* zmm6.d
zmm3 = zmm3 + zmm4.d f* zmm8.d
zmm11.d = zmm11.d f- zmm0.d
zmm0.d = zmm7.d f* zmm9.d
float zmm1 = zmm12.d * zmm3
zmm11.d = zmm11.d f* zmm5.d
zmm4.d = zmm4.d f* zmm3
zmm11.d = zmm11.d f+ zmm0.d
zmm0 = zmm12
zmm12.d = zmm12.d f* zmm6.d
zmm0.d = zmm0.d f* zmm8.d
zmm11.d = zmm11.d f+ zmm1
zmm1 = zmm2.d
zmm2.d = zmm2.d f* zmm9.d
zmm13.d = zmm13.d f- zmm0.d
zmm12.d = zmm12.d f- zmm2.d
zmm0 = zmm7
zmm7.d = zmm7.d f* zmm8.d
zmm11.d = zmm11.d f+ rdi[1].d
zmm13.d = zmm13.d f* zmm5.d
zmm12.d = zmm12.d f* zmm5.d
zmm0.d = zmm0.d f* zmm6.d
zmm12.d = zmm12.d f+ zmm7.d
arg6.d = zmm11.d
zmm13.d = zmm13.d f+ zmm0.d
zmm12.d = zmm12.d f+ zmm4.d
zmm13.d = zmm13.d f+ zmm1 * zmm3
zmm12.d = zmm12.d f+ *(rdi + 0x18)
zmm13.d = zmm13.d f+ *(rdi + 0x14)
float arg_8 = zmm12.d
float arg_10 = zmm13.d
float var_138
float* rax = sub_1417c7990(rdi, &var_138, &arg5[1])
int128_t zmm14 = *rax
int32_t var_108 = zmm14.d
float zmm9_1 = *(arg5 + 0x3c)
void* r8_1 = arg5 + 0x2c
zmm9_1 = zmm9_1 + zmm9_1
float zmm6_1 = *(r8_1 + 0x14)
float zmm4_1 = *(arg7 + 0xc)
zmm6_1 = zmm6_1 + zmm6_1
int128_t zmm2_1 = *(arg7 + 4)
float zmm5_1 = *(arg7 + 8)
float zmm10 = *arg7
float zmm8_1 = *(r8_1 + 0x18)
zmm12 = rax[1]
zmm8_1 = zmm8_1 + zmm8_1
int128_t zmm15 = rax[2]
float var_f8 = arg6.d
arg5.d = zmm10
int32_t var_f4 = zmm13.d
float var_f0 = arg_8
zmm13.d = zmm2_1.d f* zmm8_1
int32_t var_104 = zmm12.d
int32_t var_100 = zmm15.d
zmm13.d = zmm13.d f- zmm5_1 * zmm6_1
int32_t var_fc = rax[3]
zmm13.d = zmm13.d f* zmm4_1
zmm13.d = zmm13.d f+ (zmm4_1 * zmm4_1 - 0.5f) * zmm9_1
zmm13.d = zmm13.d f+ zmm10 * (zmm10 * zmm9_1 + zmm2_1.d * zmm6_1 + zmm5_1 * zmm8_1)
zmm2_1.d = zmm2_1.d f* zmm9_1
zmm13.d = zmm13.d f+ arg7[1].d
*(arg7 + 0x14)
*(arg7 + 0x18)
float* rax_1
int128_t zmm9_2
float zmm10_1
float zmm11_2
rax_1, zmm9_2, zmm10_1, zmm11_2 = sub_1417c7990(arg7, &var_138, r8_1)
int32_t var_118 = zmm13.d
float var_114 = zmm10_1
int32_t var_110 = zmm9_2.d
int128_t var_128 = *rax_1
int64_t var_e8 = arg1
float zmm8_2 = (zmm13.d f- arg6.d) * 2f
float zmm6_2 = zmm11_2 * zmm11_2 - 0.5f
float zmm7_2 = (zmm10_1 - arg_10) * 2f
float zmm5_2 = (zmm9_2.d - arg_8) * 2f
int128_t zmm0_2
zmm0_2.d = zmm14.d f* zmm8_2
float zmm4_2 = zmm12.d * zmm7_2 f+ zmm0_2.d
zmm0_2.d = zmm15.d f* zmm7_2
zmm4_2 = zmm4_2 + zmm15.d * zmm5_2
float zmm1_2 = zmm12.d * zmm5_2 f- zmm0_2.d
zmm0_2.d = zmm14.d f* zmm4_2
float zmm2_2 = zmm6_2 * zmm8_2 - zmm1_2 * zmm11_2
zmm1_2 = zmm15.d * zmm8_2
zmm15.d = zmm15.d f* zmm4_2
zmm2_2 = zmm2_2 f+ zmm0_2.d
zmm0_2.d = zmm14.d f* zmm5_2
zmm14.d = zmm14.d f* zmm7_2
zmm1_2 = zmm1_2 f- zmm0_2.d
var_138 = zmm2_2
zmm0_2.d = zmm12.d f* zmm4_2
zmm12.d = zmm12.d f* zmm8_2
float zmm3_2 = zmm6_2 * zmm7_2 - zmm1_2 * zmm11_2
zmm1_2 = zmm10_1 f- *(rdi + 0x14)
zmm14.d = zmm14.d f- zmm12.d
zmm3_2 = zmm3_2 f+ zmm0_2.d
zmm0_2.d = zmm9_2.d f- *(rdi + 0x18)
*arg2 = zmm13.d f- rdi[1].d
arg2[1] = zmm1_2
arg2[2] = zmm0_2.d
zmm0_2.d = arg_10.d f- *(rdi + 0x14)
zmm13.d = zmm13.d f- arg7[1].d
zmm9_2.d = zmm9_2.d f- *(arg7 + 0x18)
zmm14.d = zmm14.d f* zmm11_2
int32_t var_d4 = zmm0_2.d
float var_134 = zmm3_2
float var_d8 = arg6.d f- rdi[1].d
float var_d0 = arg_8 f- *(rdi + 0x18)
int32_t var_cc = zmm13.d
float var_c8 = zmm10_1 f- *(arg7 + 0x14)
int32_t var_c4 = zmm9_2.d
float var_130 = zmm6_2 * zmm5_2 f- zmm14.d f+ zmm15.d
sub_142810290(&var_e8, &var_108, &var_128, &var_138, 7, 7)
return (arg1 - var_e8) s/ 0x50
