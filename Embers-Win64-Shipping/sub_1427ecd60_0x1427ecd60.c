// 函数: sub_1427ecd60
// 地址: 0x1427ecd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x60)
int64_t* var_118
int64_t* var_110
(*(*rcx + 0x30))(rcx, &var_118, &var_110)
void var_f8
int64_t* rax_1 = sub_1427ebef0(arg1, &var_f8, var_118)
float zmm9 = *(arg1 + 0x38)
float zmm6 = *(arg1 + 0x3c)
zmm9 = zmm9 + zmm9
float zmm8 = *(arg1 + 0x40)
zmm6 = zmm6 + zmm6
float zmm5 = *(rax_1 + 0xc)
zmm8 = zmm8 + zmm8
int128_t zmm2 = *(rax_1 + 4)
float zmm10 = *rax_1
int128_t zmm4 = rax_1[1].d
int128_t zmm14
zmm14.d = zmm2.d f* zmm8
float zmm7 = zmm5 * zmm5 - 0.5f
int128_t zmm13
zmm13.d = zmm4.d f* zmm9
zmm14.d = zmm14.d f- zmm4.d * zmm6
float zmm3 = zmm10 * zmm9 + zmm2.d * zmm6 + zmm4.d * zmm8
zmm14.d = zmm14.d f* zmm5
zmm14.d = zmm14.d f+ zmm7 * zmm9
zmm4.d = zmm4.d f* zmm3
zmm14.d = zmm14.d f+ zmm10 * zmm3
float zmm1 = zmm2.d
zmm2.d = zmm2.d f* zmm9
zmm13.d = zmm13.d f- zmm10 * zmm8
zmm14.d = zmm14.d f+ rax_1[2].d
zmm13.d = zmm13.d f* zmm5
zmm13.d = zmm13.d f+ zmm7 * zmm6
zmm13.d = zmm13.d f+ zmm1 * zmm3
zmm10 = (zmm10 * zmm6 f- zmm2.d) * zmm5 + zmm7 * zmm8 f+ zmm4.d f+ rax_1[3].d
zmm13.d = zmm13.d f+ *(rax_1 + 0x14)
float var_108
float* rax_2 = sub_1417c7990(rax_1, &var_108, arg1 + 0x28)
int32_t zmm1_1 = rax_2[2]
int128_t zmm15 = rax_2[3]
float arg_8 = *rax_2
float zmm0_1 = rax_2[1]
int64_t* rax_3 = sub_1427ebef0(arg1, &var_f8, var_110)
float zmm9_1 = *(arg1 + 0x54)
float zmm6_1 = *(arg1 + 0x58)
zmm9_1 = zmm9_1 + zmm9_1
float zmm8_1 = *(arg1 + 0x5c)
zmm6_1 = zmm6_1 + zmm6_1
float zmm4_1 = *(rax_3 + 0xc)
zmm8_1 = zmm8_1 + zmm8_1
float zmm2_1 = *(rax_3 + 4)
float zmm12 = *rax_3
float zmm5_1 = rax_3[1].d
rax_3[2].d
zmm12 = (zmm12 * zmm6_1 - zmm2_1 * zmm9_1) * zmm4_1 + (zmm4_1 * zmm4_1 - 0.5f) * zmm8_1
    + zmm5_1 * (zmm12 * zmm9_1 + zmm2_1 * zmm6_1 + zmm5_1 * zmm8_1) f+ rax_3[3].d
*(rax_3 + 0x14)
float* rax_4
float zmm10_2
float zmm11_1
rax_4, zmm10_2, zmm11_1 = sub_1417c7990(rax_3, &var_108, arg1 + 0x44)
float var_c8 = zmm11_1
float var_c4 = zmm10_2
float var_c0 = zmm12
int128_t var_d8 = *rax_4
int128_t zmm8_2 = arg_8 ^ 0x80000000
var_108 = zmm8_2.d
int128_t zmm4_2 = zmm0_1 ^ 0x80000000
int32_t var_fc = zmm15.d
int128_t zmm5_2 = zmm1_1 ^ 0x80000000
int32_t var_104 = zmm4_2.d
zmm11_1 = (zmm11_1 f- zmm14.d) * 2f
zmm12 = (zmm12 - zmm10) * 2f
zmm10_2 = (zmm10_2 f- zmm13.d) * 2f
int128_t zmm3_2
zmm3_2.d = zmm15.d f* zmm15.d
int128_t zmm0_3
zmm0_3.d = zmm8_2.d f* zmm11_1
zmm3_2.d = zmm3_2.d f- 0.5f
float zmm2_2 = zmm4_2.d * zmm10_2 f+ zmm0_3.d
int32_t var_100 = zmm5_2.d
zmm0_3.d = zmm5_2.d f* zmm10_2
zmm0_3.d = zmm3_2.d f* zmm11_1
zmm5_2.d = zmm5_2.d f* (zmm2_2 + zmm5_2.d * zmm12)
zmm0_3.d = zmm8_2.d f* zmm12
zmm8_2.d = zmm8_2.d f* zmm10_2
zmm0_3.d = zmm3_2.d f* zmm10_2
zmm3_2.d = zmm3_2.d f* zmm12
zmm4_2.d = zmm4_2.d f* zmm11_1
zmm8_2.d = zmm8_2.d f- zmm4_2.d
zmm8_2.d = zmm8_2.d f* zmm15.d
zmm8_2.d = zmm8_2.d f+ zmm3_2.d
zmm8_2.d = zmm8_2.d f+ zmm5_2.d
float* rax_5
int32_t zmm6_3
int32_t zmm7_3
int32_t zmm8_3
rax_5, zmm6_3, zmm7_3, zmm8_3 = sub_1417c7990(&var_108, &var_f8, &var_d8)
*arg2 = *rax_5
arg2[1] = rax_5[1]
arg2[2] = rax_5[2]
arg2[3] = rax_5[3]
arg2[4] = zmm7_3
arg2[5] = zmm6_3
arg2[6] = zmm8_3
return arg2
