// 函数: sub_1427eba20
// 地址: 0x1427eba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm5 = *(arg2 + 0xc)
int128_t zmm2 = *(arg2 + 4)
int128_t zmm4 = *(arg2 + 8)
int128_t zmm7 = *(arg1 + 0x24)
zmm7.d = zmm7.d f+ zmm7.d
int128_t zmm9 = *(arg1 + 0x28)
zmm9.d = zmm9.d f+ zmm9.d
int128_t zmm10 = *(arg1 + 0x20)
zmm10.d = zmm10.d f+ zmm10.d
int128_t zmm12 = *arg2
int128_t zmm8
zmm8.d = zmm5.d f* zmm5.d
int128_t zmm11
zmm11.d = zmm2.d f* zmm9.d
zmm8.d = zmm8.d f- 0.5f
int128_t zmm6
zmm6.d = zmm4.d f* zmm10.d
zmm11.d = zmm11.d f- zmm4.d f* zmm7.d
float zmm3 = zmm12.d f* zmm10.d + zmm2.d f* zmm7.d + zmm4.d f* zmm9.d
zmm11.d = zmm11.d f* zmm5.d
float zmm1 = zmm12.d * zmm3
zmm11.d = zmm11.d f+ zmm8.d f* zmm10.d
zmm4.d = zmm4.d f* zmm3
float zmm0 = zmm12.d
zmm12.d = zmm12.d f* zmm7.d
zmm11.d = zmm11.d f+ zmm1
zmm1 = zmm2.d
zmm2.d = zmm2.d f* zmm10.d
zmm6.d = zmm6.d f- zmm0 f* zmm9.d
zmm12.d = zmm12.d f- zmm2.d
zmm0 = zmm8.d
zmm8.d = zmm8.d f* zmm9.d
zmm11.d = zmm11.d f+ arg2[1].d
zmm6.d = zmm6.d f* zmm5.d
zmm12.d = zmm12.d f* zmm5.d
zmm12.d = zmm12.d f+ zmm8.d
zmm6.d = zmm6.d f+ zmm0 f* zmm7.d
zmm12.d = zmm12.d f+ zmm4.d
zmm6.d = zmm6.d f+ zmm1 * zmm3
zmm12.d = zmm12.d f+ *(arg2 + 0x18)
zmm6.d = zmm6.d f+ *(arg2 + 0x14)
float var_98
float* rax_1
float zmm6_1
float zmm11_1
rax_1, zmm6_1, zmm11_1 = sub_1417c7990(arg2, &var_98, arg1 + 0x10)
*arg4 = *rax_1
*(arg4 + 0x14) = zmm6_1
arg4[1].d = zmm11_1
*(arg4 + 0x18) = zmm12.d
float zmm10_1 = *(arg1 + 0x3c)
zmm6_1 = *(arg1 + 0x40)
zmm10_1 = zmm10_1 + zmm10_1
zmm6_1 = zmm6_1 + zmm6_1
int128_t zmm4_1 = *(arg3 + 0xc)
int128_t zmm2_1 = *(arg3 + 4)
int128_t zmm5_1 = *(arg3 + 8)
zmm12 = *arg3
float zmm9_1 = *(arg1 + 0x44)
int128_t zmm0_1
zmm0_1.d = zmm2_1.d f* zmm6_1
zmm9_1 = zmm9_1 + zmm9_1
int128_t zmm7_1
zmm7_1.d = zmm4_1.d f* zmm4_1.d
zmm7_1.d = zmm7_1.d f- 0.5f
float zmm3_1 = zmm12.d * zmm10_1 f+ zmm0_1.d
zmm0_1.d = zmm5_1.d f* zmm6_1
zmm0_1.d = zmm7_1.d f* zmm10_1
zmm5_1.d = zmm5_1.d f* (zmm3_1 + zmm5_1.d * zmm9_1)
zmm0_1 = zmm12
zmm12.d = zmm12.d f* zmm6_1
zmm0_1.d = zmm0_1.d f* zmm9_1
zmm2_1.d = zmm2_1.d f* zmm10_1
zmm12.d = zmm12.d f- zmm2_1.d
zmm0_1 = zmm7_1
zmm7_1.d = zmm7_1.d f* zmm9_1
arg3[1].d
zmm12.d = zmm12.d f* zmm4_1.d
zmm0_1.d = zmm0_1.d f* zmm6_1
zmm12.d = zmm12.d f+ zmm7_1.d
zmm12.d = zmm12.d f+ zmm5_1.d
zmm12.d = zmm12.d f+ *(arg3 + 0x18)
*(arg3 + 0x14)
float* rax_2
int128_t zmm8_2
int128_t zmm11_2
rax_2, zmm8_2, zmm11_2 = sub_1417c7990(arg3, &var_98, arg1 + 0x2c)
*arg5 = *rax_2
arg5[4] = zmm11_2.d
arg5[5] = zmm8_2.d
arg5[6] = zmm12.d
int128_t zmm4_2 = arg5[1]
int128_t zmm3_2 = *arg5
int128_t zmm0_2
zmm0_2.d = zmm3_2.d f* *arg4
int128_t zmm5_2 = arg5[2]
int128_t zmm6_2 = arg5[3]
float zmm2_2 = zmm4_2.d f* *(arg4 + 4) f+ zmm0_2.d
zmm0_2.d = zmm6_2.d f* *(arg4 + 0xc)

if (not(zmm2_2 + zmm5_2.d f* *(arg4 + 8) f+ zmm0_2.d >= 0f))
    *arg5 = (zmm3_2 ^ 0x80000000).d
    arg5[1] = (zmm4_2 ^ 0x80000000).d
    arg5[2] = (zmm5_2 ^ 0x80000000).d
    arg5[3] = (zmm6_2 ^ 0x80000000).d

int128_t zmm9_2 = *(arg4 + 0xc)
zmm12 = *arg4 ^ 0x80000000
int128_t zmm10_2 = *(arg4 + 4) ^ 0x80000000
zmm11_2 = *(arg4 + 8) ^ 0x80000000
zmm5_2.d = arg5[4].d f- arg4[1].d
zmm4_2.d = zmm8_2.d f- *(arg4 + 0x14)
zmm8_2.d = arg5[6].d f- *(arg4 + 0x18)
var_98 = zmm12.d
zmm5_2.d = zmm5_2.d f* 2f
zmm4_2.d = zmm4_2.d f* 2f
zmm8_2.d = zmm8_2.d f* 2f
zmm3_2.d = zmm9_2.d f* zmm9_2.d
zmm0_2.d = zmm12.d f* zmm5_2.d
zmm3_2.d = zmm3_2.d f- 0.5f
zmm6_2.d = zmm11_2.d f* zmm5_2.d
int32_t var_94 = zmm10_2.d
int32_t var_90 = zmm11_2.d
zmm2_2 = zmm10_2.d f* zmm4_2.d f+ zmm0_2.d
int32_t var_8c = zmm9_2.d
zmm0_2.d = zmm11_2.d f* zmm4_2.d
zmm2_2 = zmm2_2 + zmm11_2.d f* zmm8_2.d
zmm0_2.d = zmm3_2.d f* zmm5_2.d
zmm11_2.d = zmm11_2.d f* zmm2_2
zmm0_2 = zmm12
zmm12.d = zmm12.d f* zmm4_2.d
zmm0_2.d = zmm0_2.d f* zmm8_2.d
float zmm1_2 = zmm10_2.d
zmm10_2.d = zmm10_2.d f* zmm5_2.d
zmm6_2.d = zmm6_2.d f- zmm0_2.d
zmm12.d = zmm12.d f- zmm10_2.d
zmm0_2 = zmm3_2
zmm3_2.d = zmm3_2.d f* zmm8_2.d
zmm6_2.d = zmm6_2.d f* zmm9_2.d
zmm12.d = zmm12.d f* zmm9_2.d
zmm0_2.d = zmm0_2.d f* zmm4_2.d
zmm12.d = zmm12.d f+ zmm3_2.d
zmm6_2.d = zmm6_2.d f+ zmm0_2.d
zmm12.d = zmm12.d f+ zmm11_2.d
zmm6_2.d = zmm6_2.d f+ zmm1_2 * zmm2_2
float var_88[0x4]
float* rax_3
int32_t zmm6_3
int32_t zmm7_3
rax_3, zmm6_3, zmm7_3 = sub_1417c7990(&var_98, &var_88, arg5)
*arg6 = *rax_3
arg6[1].d = zmm7_3
*(arg6 + 0x14) = zmm6_3
*(arg6 + 0x18) = zmm12.d
return arg6
