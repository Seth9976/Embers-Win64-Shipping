// 函数: sub_1427ed830
// 地址: 0x1427ed830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x48)
uint64_t rbx = zx.q(arg2)
void var_b8
void var_b0
(*(*rcx + 0x30))(rcx, &var_b8, &var_b0)
int32_t var_98
sub_1427ec150(arg1 - 0x18, &var_98, *(&var_b8 + (rbx << 3)))
int128_t zmm12 = var_98 ^ 0x80000000
int32_t var_94
int128_t zmm10 = var_94 ^ 0x80000000
int32_t var_90
int128_t zmm11 = var_90 ^ 0x80000000
int64_t rbx_1 = rbx * 0x1c
int32_t var_c8 = zmm12.d
int32_t var_c4 = zmm10.d
int32_t var_c0 = zmm11.d
float var_8c
float var_bc = var_8c
void* r8_3 = arg1 + 0x10 + rbx_1
float var_88
float zmm5 = (*(r8_3 + 0x10) - var_88) * 2f
float var_84
float zmm4 = (*(r8_3 + 0x14) - var_84) * 2f
float var_80
float zmm8 = (*(r8_3 + 0x18) - var_80) * 2f
float zmm2 = zmm10.d * zmm4 + zmm12.d * zmm5 + zmm11.d * zmm8
zmm12.d = zmm12.d f* zmm4
zmm10.d = zmm10.d f* zmm5
zmm12.d = zmm12.d f- zmm10.d
zmm12.d = zmm12.d f* var_8c
zmm11.d = zmm11.d f* zmm2
zmm12.d = zmm12.d f+ (var_8c * var_8c - 0.5f) * zmm8
zmm12.d = zmm12.d f+ zmm11.d
float var_a8[0x4]
float* rax_1
int32_t zmm6_1
int32_t zmm7_1
rax_1, zmm6_1, zmm7_1 = sub_1417c7990(&var_c8, &var_a8, r8_3)
int64_t* rcx_3 = *(arg1 + 0x48)
int64_t rax_2 = *(arg1 + 0x50)
*(rax_2 + rbx_1 + 0x10) = *rax_1
*(rax_2 + rbx_1 + 0x20) = zmm7_1
*(rax_2 + rbx_1 + 0x24) = zmm6_1
*(rax_2 + rbx_1 + 0x28) = zmm12.d
jump(*(*rcx_3 + 0x40))
