// 函数: sub_1427fb850
// 地址: 0x1427fb850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = *(arg2 + 0x24)
zmm7.d = zmm7.d f+ zmm7.d
int128_t zmm9 = *(arg2 + 0x28)
zmm9.d = zmm9.d f+ zmm9.d
int128_t zmm10 = *(arg2 + 0x20)
zmm10.d = zmm10.d f+ zmm10.d
int128_t zmm5 = *(arg3 + 0xc)
int128_t zmm2 = *(arg3 + 4)
int128_t zmm12 = *arg3
int128_t zmm4 = *(arg3 + 8)
int128_t zmm8
zmm8.d = zmm5.d f* zmm5.d
int128_t zmm11
zmm11.d = zmm2.d f* zmm9.d
int128_t zmm6
zmm6.d = zmm4.d f* zmm10.d
zmm8.d = zmm8.d f- 0.5f
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
zmm11.d = zmm11.d f+ arg3[1].d
zmm6.d = zmm6.d f* zmm5.d
zmm12.d = zmm12.d f* zmm5.d
zmm12.d = zmm12.d f+ zmm8.d
zmm6.d = zmm6.d f+ zmm0 f* zmm7.d
zmm12.d = zmm12.d f+ zmm4.d
zmm6.d = zmm6.d f+ zmm1 * zmm3
zmm12.d = zmm12.d f+ *(arg3 + 0x18)
zmm6.d = zmm6.d f+ *(arg3 + 0x14)
float var_108[0x4]
float* rax_1
float zmm6_1
float zmm11_1
rax_1, zmm6_1, zmm11_1 = sub_1417c7990(arg3, &var_108, arg2 + 0x10)
float var_f8 = *rax_1
float var_f4 = rax_1[1]
float var_f0 = rax_1[2]
float zmm4_1 = *(arg4 + 0xc)
float zmm2_1 = *(arg4 + 4)
float zmm5_1 = *(arg4 + 8)
float zmm10_1 = *(arg2 + 0x3c)
float zmm7_1 = *(arg2 + 0x40)
zmm10_1 = zmm10_1 + zmm10_1
float zmm9_1 = *(arg2 + 0x44)
zmm7_1 = zmm7_1 + zmm7_1
float var_e0 = zmm12.d
zmm9_1 = zmm9_1 + zmm9_1
zmm12 = *arg4
float var_ec = rax_1[3]
float zmm3_1 = zmm12.d * zmm10_1 + zmm2_1 * zmm7_1 + zmm5_1 * zmm9_1
zmm12.d = zmm12.d f* zmm7_1
zmm12.d = zmm12.d f- zmm2_1 * zmm10_1
arg4[1].d
zmm12.d = zmm12.d f* zmm4_1
zmm12.d = zmm12.d f+ (zmm4_1 * zmm4_1 - 0.5f) * zmm9_1
zmm12.d = zmm12.d f+ zmm5_1 * zmm3_1
zmm12.d = zmm12.d f+ *(arg4 + 0x18)
*(arg4 + 0x14)
float* rax_2
float zmm6_2
float zmm11_2
rax_2, zmm6_2, zmm11_2 = sub_1417c7990(arg4, &var_108, arg2 + 0x2c)
float var_d8 = *rax_2
float var_d4 = rax_2[1]
float var_d0 = rax_2[2]
float var_cc = rax_2[3]
float var_c8 = zmm11_2
float var_c4 = zmm6_2
int32_t var_c0 = zmm12.d
bool result = (*(*arg1 + 8))(arg1, &var_f8, &var_d8)
int128_t zmm15 = var_f0
int128_t zmm14 = var_f4
zmm12 = var_f8
float zmm0_2 = zmm15.d * 0f
float zmm2_2 = zmm14.d * 0f
zmm6_2 = var_ec * var_ec - 0.5f
int128_t zmm13
zmm13.d = zmm12.d f* 0f
float arg_10 = zmm6_2
float zmm4_2 = zmm12.d * 2f + zmm2_2 + zmm0_2
zmm11_2 = (zmm15.d * 2f f- zmm13.d) * var_ec
zmm13.d = zmm13.d f- zmm14.d * 2f
float arg_18 = (zmm2_2 - zmm0_2) * var_ec + zmm6_2 * 2f + zmm12.d * zmm4_2
zmm2_2 = zmm6_2 * 0f
zmm13.d = zmm13.d f* var_ec
zmm13.d = zmm13.d f+ zmm2_2
zmm6_2 = (var_c8 - zmm11_1) * 2f
zmm11_2 = zmm11_2 + zmm2_2 + zmm14.d * zmm4_2
int32_t zmm3_2 = (var_c0 f- var_e0) f* 2f
float zmm5_2 = (var_c4 - zmm6_1) * 2f
zmm13.d = zmm13.d f+ zmm15.d * zmm4_2
zmm2_2 = zmm14.d * zmm5_2 + zmm12.d * zmm6_2 + zmm15.d f* zmm3_2
zmm4_2 = (arg_10 * zmm6_2 - (zmm14.d f* zmm3_2 - zmm15.d * zmm5_2) * var_ec + zmm12.d * zmm2_2
    - zmm11_1) * arg_18
float zmm1_2 = zmm15.d * zmm6_2 - zmm12.d f* zmm3_2
zmm12.d = zmm12.d f* zmm5_2
zmm15.d = zmm15.d f* zmm2_2
zmm0_2 = zmm14.d * zmm2_2
zmm14.d = zmm14.d f* zmm6_2
zmm12.d = zmm12.d f- zmm14.d
zmm12.d = zmm12.d f* var_ec
zmm1_2 = (arg_10 * zmm5_2 - zmm1_2 * var_ec + zmm0_2 - zmm6_1) * zmm11_2 + zmm4_2
    + (arg_10 f* zmm3_2 f- zmm12.d f+ zmm15.d - var_e0) f* zmm13.d

if ((*(arg2 + 0x74) & 2) == 0)
    return result

int64_t r9 = *arg1
(*(r9 + 0x10))(arg1, &var_f8, &var_d8, r9, *(arg2 + 0x68) f+ *(arg2 + 0x60) > zmm1_2)
int64_t r9_1 = *arg1
return (*(r9_1 + 0x10))(arg1, &var_f8, &var_d8, r9_1, zmm1_2 > *(arg2 + 0x64) f- *(arg2 + 0x60))
