// 函数: sub_1427fdd90
// 地址: 0x1427fdd90
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
zmm11.d = zmm11.d f+ arg3[1].d
zmm6.d = zmm6.d f* zmm5.d
zmm12.d = zmm12.d f* zmm5.d
zmm12.d = zmm12.d f+ zmm8.d
zmm6.d = zmm6.d f+ zmm0 f* zmm7.d
zmm12.d = zmm12.d f+ zmm4.d
zmm6.d = zmm6.d f+ zmm1 * zmm3
zmm12.d = zmm12.d f+ *(arg3 + 0x18)
zmm6.d = zmm6.d f+ *(arg3 + 0x14)
float var_c8[0x4]
float* rax_1
float zmm6_1
float zmm11_1
rax_1, zmm6_1, zmm11_1 = sub_1417c7990(arg3, &var_c8, arg2 + 0x10)
float var_b8 = *rax_1
float var_b4 = rax_1[1]
float var_b0 = rax_1[2]
float var_ac = rax_1[3]
float var_a8 = zmm11_1
float var_a4 = zmm6_1
float zmm4_1 = *(arg4 + 0xc)
float zmm2_1 = *(arg4 + 4)
float zmm5_1 = *(arg4 + 8)
float zmm10_1 = *(arg2 + 0x3c)
float zmm7_1 = *(arg2 + 0x40)
zmm10_1 = zmm10_1 + zmm10_1
float zmm9_1 = *(arg2 + 0x44)
zmm7_1 = zmm7_1 + zmm7_1
int32_t var_a0 = zmm12.d
zmm9_1 = zmm9_1 + zmm9_1
zmm12 = *arg4
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
int512_t zmm2_2
int512_t zmm3_2
int32_t zmm6_2
int32_t zmm11_2
rax_2, zmm2_2, zmm3_2, zmm6_2, zmm11_2 = sub_1417c7990(arg4, &var_c8, arg2 + 0x2c)
float var_98 = *rax_2
int32_t var_94 = rax_2[1]
float var_90 = rax_2[2]
int32_t var_8c = rax_2[3]
int32_t var_88 = zmm11_2
int32_t var_84 = zmm6_2
int32_t var_80 = zmm12.d
int64_t result = (*(*arg1 + 8))(arg1, &var_b8, &var_98)

if ((*(arg2 + 0x8c) & 1) == 0)
    return result

zmm3_2.o = *(arg2 + 0x70)
zmm2_2.o = *(arg2 + 0x74)
return (*(*arg1 + 0x18))(arg1, &var_b8, zmm2_2, zmm3_2, 0)
