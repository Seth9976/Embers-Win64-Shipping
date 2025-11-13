// 函数: sub_14229efa0
// 地址: 0x14229efa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_10 = arg2
int128_t zmm8 = *arg4
int128_t zmm9 = *(arg4 + 4)
int128_t zmm10 = *(arg4 + 8)
int128_t zmm11 = arg5
float zmm5 = zmm9.d f* zmm11.d f+ arg1[1]
float temp0 = __maxss_xmmss_memss(arg6 f- zmm11.d, 0x3f800000)
float zmm4 = zmm10.d f* zmm11.d f+ arg1[2]
int128_t zmm6
zmm6.d = zmm8.d f* zmm11.d
float var_f4 = zmm5
float zmm3 = temp0 + temp0
int32_t var_118 = zmm11.d
zmm6.d = zmm6.d f+ *arg1
float var_f0 = zmm4
int32_t var_114 = zmm11.d
int32_t var_110 = zmm11.d
float zmm1 = zmm9.d * zmm3 + zmm5
float zmm2 = zmm8.d * zmm3 f+ zmm6.d
int32_t var_f8 = zmm6.d
float zmm0 = zmm10.d * zmm3 + zmm4
float var_104 = zmm1
zmm1 = zmm1 - zmm5
float var_108 = zmm2
zmm2 = zmm2 f- zmm6.d
float var_100 = zmm0
zmm0 = zmm0 - zmm4
float temp0_1[0x4] = _mm_sqrt_ss(0, zmm1 * zmm1 + zmm2 * zmm2 + zmm0 * zmm0)
temp0_1[0] = temp0_1[0] * 0.5f
zmm8.d = zmm8.d f* temp0_1[0]
zmm9.d = zmm9.d f* temp0_1[0]
zmm10.d = zmm10.d f* temp0_1[0]
zmm8.d = zmm8.d f+ zmm6.d
zmm9.d = zmm9.d f+ zmm5
zmm10.d = zmm10.d f+ zmm4
int32_t var_128 = zmm8.d
int32_t var_124 = zmm9.d
int32_t var_120 = zmm10.d
float var_e8[0x4]
int32_t var_d8[0x10]
float* rax_1
uint128_t zmm7_1
float zmm8_1[0x4]
float zmm9_1[0x4]
float zmm10_1[0x4]
float zmm11_1[0x4]
float zmm12[0x4]
float zmm13[0x4]
uint128_t zmm15
rax_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12, zmm13, zmm15 =
    sub_140adf440(sub_140ada430(&var_d8, arg2, arg3), &var_e8)
float zmm7_2
int32_t zmm11_2
zmm7_2, zmm11_2 = sub_1422a00e0(&var_108, rax_1, &var_118, arg7, 0x3fc90fdb, zmm7_1, zmm8_1, 
    zmm9_1, zmm10_1, zmm11_1, zmm12, zmm13, zmm15, arg7, 0, 0x3fc90fdb, arg8, arg9, arg10, arg11, 
    arg12, 0, 0)
char var_158
var_158.q = arg8
int64_t var_160
var_160.d = arg7
int32_t var_178
var_178.q = arg4
int32_t zmm11_3 = sub_14229f7b0(&data_14399f6e0, &var_128, arg_10, arg3, var_178, zmm11_2, zmm7_2, 
    var_160.d, var_158, arg9, arg11, arg12)
var_128 = zmm11_3
int32_t var_124_1 = zmm11_3
int32_t var_120_1 = zmm11_3
float* rax_3
uint128_t zmm6_2
uint128_t zmm7_3
float zmm8_2[0x4]
float zmm9_2[0x4]
float zmm10_2[0x4]
float zmm11_4[0x4]
float zmm12_1[0x4]
float zmm13_1[0x4]
uint128_t zmm15_1
rax_3, zmm6_2, zmm7_3, zmm8_2, zmm9_2, zmm10_2, zmm11_4, zmm12_1, zmm13_1, zmm15_1 =
    sub_140adf440(sub_140ada430(&var_d8, arg_10, arg3), &var_e8)
return sub_1422a00e0(&var_f8, rax_3, &var_128, arg7, zmm6_2, zmm7_3, zmm8_2, zmm9_2, zmm10_2, 
    zmm11_4, zmm12_1, zmm13_1, zmm15_1, arg7, zmm6_2.d, 0x40490fdb, arg8, arg9, arg10, arg11, 
    arg12, 0, 0)
