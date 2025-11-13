// 函数: sub_1427f0000
// 地址: 0x1427f0000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x108))()
float zmm2 = arg5 * *arg2
float zmm1 = arg5 * arg2[1]
arg5 = arg5 * arg2[2]
*arg4 = zmm2
arg4[1] = zmm1
arg4[2] = arg5
void var_e8
(*(*arg1 + 0xa0))(arg1, &var_e8)
void var_108
(*(*arg1 + 0xf0))(arg1, &var_108)
float var_118[0x4]
float* rax_3 = sub_1417c7990(&var_e8, &var_118, &var_108)
int128_t zmm10 = rax_3[2]
int128_t zmm7 = *rax_3
int128_t zmm3 = zmm10
int128_t zmm13 = rax_3[1]
int128_t zmm5 = rax_3[3]
float zmm6 = zmm7.d f+ zmm7.d
int128_t zmm0
zmm0.d = zmm13.d f+ zmm13.d
float zmm2_1 = zmm10.d
float zmm1_1 = zmm10.d f+ zmm10.d
float zmm4 = zmm5.d
zmm7.d = zmm7.d f* zmm6
float zmm8 = zmm13.d f* zmm0.d
int128_t zmm12
zmm12.d = zmm5.d f* zmm0.d
int128_t zmm15
zmm15.d = 1f f- zmm7.d
zmm10.d = zmm10.d f* zmm0.d
int128_t zmm9
zmm9.d = 1f - zmm8
zmm5.d = zmm5.d f* zmm1_1
zmm13.d = zmm13.d f* zmm6
zmm7 = zmm15
zmm4 = zmm4 * zmm6
zmm15.d = zmm15.d f- zmm8
zmm3.d = zmm3.d f* zmm6
zmm2_1 = zmm2_1 * zmm1_1
zmm0.d = zmm10.d f+ zmm4
int128_t zmm11
zmm11.d = zmm5.d f+ zmm13.d
zmm13.d = zmm13.d f- zmm5.d
zmm10.d = zmm10.d f- zmm4
int128_t zmm14
zmm14.d = zmm3.d f- zmm12.d
int32_t arg_10 = zmm0.d
zmm9.d = zmm9.d f- zmm2_1
float arg_8 = zmm11.d
zmm7.d = zmm7.d f- zmm2_1
zmm12.d = zmm12.d f+ zmm3.d
float arg_20 = zmm10.d
float var_128
(*(*arg1 + 0x120))(arg1, &var_128)
zmm0 = zmm13.d
float zmm4_1 = var_128
int32_t var_120
zmm3 = var_120
zmm13 = zmm11
float var_124
zmm6 = zmm0.d * var_124
int128_t zmm5_1
zmm5_1.d = zmm12.d f* zmm3.d
zmm0.d = zmm0.d f* zmm6
zmm12.d = zmm12.d f* zmm5_1.d
zmm11.d = zmm7.d f* var_124
zmm10.d = zmm9.d f* zmm4_1
zmm13.d = zmm13.d f* zmm4_1
zmm9.d = zmm9.d f* zmm10.d
zmm8 = arg_20 f* zmm3.d
zmm0.d = zmm0.d f+ zmm9.d
zmm9.d = arg_8.d f* zmm13.d
zmm0.d = zmm0.d f+ zmm12.d
float arg_18 = zmm0.d
zmm0.d = zmm7.d f* zmm11.d
zmm7.d = zmm7.d f* zmm6
zmm9.d = zmm9.d f+ zmm0.d
zmm0 = arg_10
zmm12.d = zmm0.d f* var_124
zmm9.d = zmm9.d f+ arg_20 * zmm8
zmm12.d = zmm12.d f* zmm0.d
zmm2_1 = arg_8 f* zmm10.d f+ zmm7.d
zmm0.d = zmm14.d f* zmm4_1
zmm0.d = zmm0.d f* zmm14.d
zmm7.d = arg_10.d f* zmm6
zmm12.d = zmm12.d f+ zmm0.d
zmm0.d = arg_20.d f* zmm5_1.d
zmm12.d = zmm12.d f+ zmm15.d f* zmm3.d f* zmm15.d
zmm1_1 = zmm15.d f* zmm5_1.d
zmm2_1 = zmm2_1 f+ zmm0.d
zmm5_1.d = arg_10.d f* zmm11.d
zmm0.d = zmm14.d f* zmm10.d
zmm14.d = zmm14.d f* zmm13.d
zmm7.d = zmm7.d f+ zmm0.d
zmm15.d = zmm15.d f* zmm8
zmm0 = *(arg3 + 8)
zmm5_1.d = zmm5_1.d f+ zmm14.d
zmm12.d = zmm12.d f* zmm0.d
zmm7.d = zmm7.d f+ zmm1_1
zmm1_1 = *(arg3 + 4)
zmm5_1.d = zmm5_1.d f+ zmm15.d
zmm9.d = zmm9.d f* zmm1_1
zmm4_1 = zmm7.d f* zmm0.d
zmm3.d = zmm5_1.d f* zmm0.d
zmm0 = *arg3
zmm5_1.d = zmm5_1.d f* zmm1_1
zmm7.d = zmm7.d f* zmm0.d
zmm7.d = zmm7.d f+ zmm5_1.d
*arg6 = zmm4_1 + arg_18 f* zmm0.d + zmm2_1 * zmm1_1
zmm12.d = zmm12.d f+ zmm7.d
zmm3.d = zmm3.d f+ zmm2_1 f* zmm0.d f+ zmm9.d
arg6[2] = zmm12.d
arg6[1] = zmm3.d
return arg6
