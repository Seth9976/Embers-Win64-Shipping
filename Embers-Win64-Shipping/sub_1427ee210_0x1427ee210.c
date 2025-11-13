// 函数: sub_1427ee210
// 地址: 0x1427ee210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *arg3
float zmm4 = arg3[2]
float zmm5 = arg3[3]
int128_t zmm6 = arg3[1]
int128_t zmm9 = arg3[5]
int128_t zmm10 = arg3[4]
int128_t zmm11 = arg3[6]
int64_t rdi = sx.q(arg2) * 0x1c
int32_t var_88 = zmm10.d
int32_t var_84 = zmm9.d
float zmm1 = 1f / _mm_sqrt_ss(0, zmm3 * zmm3 + zmm6.d f* zmm6.d + zmm4 * zmm4 + zmm5 * zmm5)
int32_t var_80 = zmm11.d
zmm3 = zmm3 * zmm1
zmm6.d = zmm6.d f* zmm1
*(rdi + arg1 + 0x28) = zmm3
zmm4 = zmm4 * zmm1
*(rdi + arg1 + 0x2c) = zmm6.d
zmm5 = zmm5 * zmm1
*(rdi + arg1 + 0x30) = zmm4
float var_98 = zmm3
*(rdi + arg1 + 0x34) = zmm5
*(rdi + arg1 + 0x38) = zmm10.d
*(rdi + arg1 + 0x3c) = zmm9.d
*(rdi + arg1 + 0x40) = zmm11.d
int64_t* rcx = *(arg1 + 0x60)
int32_t var_94 = zmm6.d
float var_90 = zmm4
float var_8c = zmm5
void var_d8
void var_d0
(*(*rcx + 0x30))(rcx, &var_d8, &var_d0)
int32_t var_b8
float zmm9_1
float zmm10_1
float zmm11_1
zmm9_1, zmm10_1, zmm11_1 = sub_1427ec150(arg1, &var_b8, *(&var_d8 + (zx.q(arg2) << 3)))
int32_t var_b4
int128_t zmm5_1 = var_b4 ^ 0x80000000
int128_t zmm12 = var_b8 ^ 0x80000000
int32_t var_b0
int128_t zmm8 = var_b0 ^ 0x80000000
int32_t var_e8 = zmm12.d
float var_a8
zmm10_1 = (zmm10_1 - var_a8) * 2f
float var_a4
zmm9_1 = (zmm9_1 - var_a4) * 2f
float var_a0
zmm11_1 = (zmm11_1 - var_a0) * 2f
int32_t var_e4 = zmm5_1.d
int32_t var_e0 = zmm8.d
float var_ac
float var_dc = var_ac
zmm8.d = zmm8.d f* (zmm5_1.d * zmm9_1 + zmm12.d * zmm10_1 + zmm8.d * zmm11_1)
zmm12.d = zmm12.d f* zmm9_1
zmm5_1.d = zmm5_1.d f* zmm10_1
zmm12.d = zmm12.d f- zmm5_1.d
zmm12.d = zmm12.d f* var_ac
zmm12.d = zmm12.d f+ (var_ac * var_ac - 0.5f) * zmm11_1
zmm12.d = zmm12.d f+ zmm8.d
float var_c8[0x4]
float* rax_2
int32_t zmm6_2
int32_t zmm7_1
rax_2, zmm6_2, zmm7_1 = sub_1417c7990(&var_e8, &var_c8, &var_98)
int64_t* rcx_3 = *(arg1 + 0x60)
int64_t rax_3 = *(arg1 + 0x68)
*(rax_3 + rdi + 0x10) = *rax_2
*(rax_3 + rdi + 0x20) = zmm7_1
*(rax_3 + rdi + 0x24) = zmm6_2
*(rax_3 + rdi + 0x28) = zmm12.d
jump(*(*rcx_3 + 0x40))
