// 函数: sub_1427eddc0
// 地址: 0x1427eddc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x60)
(*(*rcx + 0x38))(rcx)
void var_b8
int64_t* rax_1 = sub_1427ec150(arg1, &var_b8, arg2)
float zmm9 = *(rax_1 + 0xc)
int128_t zmm12 = *rax_1 ^ 0x80000000
int128_t zmm10 = *(rax_1 + 4) ^ 0x80000000
int128_t zmm11 = rax_1[1].d ^ 0x80000000
float zmm5 = (*(arg1 + 0x38) f- rax_1[2].d) * 2f
float zmm4 = (*(arg1 + 0x3c) f- *(rax_1 + 0x14)) * 2f
float zmm8 = (*(arg1 + 0x40) f- rax_1[3].d) * 2f
int32_t var_d8 = zmm12.d
int32_t var_d4 = zmm10.d
int32_t var_d0 = zmm11.d
float var_cc = zmm9
float zmm2 = zmm10.d * zmm4 + zmm12.d * zmm5 + zmm11.d * zmm8
zmm12.d = zmm12.d f* zmm4
zmm10.d = zmm10.d f* zmm5
zmm12.d = zmm12.d f- zmm10.d
zmm12.d = zmm12.d f* zmm9
zmm12.d = zmm12.d f+ (zmm9 * zmm9 - 0.5f) * zmm8
zmm11.d = zmm11.d f* zmm2
zmm12.d = zmm12.d f+ zmm11.d
float var_c8[0x4]
float* rax_2
int32_t zmm6_1
int32_t zmm7_1
rax_2, zmm6_1, zmm7_1 = sub_1417c7990(&var_d8, &var_c8, arg1 + 0x28)
void* rax_3 = *(arg1 + 0x68)
*(rax_3 + 0x10) = *rax_2
*(rax_3 + 0x20) = zmm7_1
*(rax_3 + 0x24) = zmm6_1
*(rax_3 + 0x28) = zmm12.d
int64_t* rax_4
float zmm14
int128_t zmm15
rax_4, zmm14, zmm15 = sub_1427ec150(arg1, &var_b8, arg3)
float zmm9_1 = *(rax_4 + 0xc)
int128_t zmm12_1 = *rax_4 ^ zmm15
int128_t zmm11_1 = rax_4[1].d
float zmm5_1 = *(arg1 + 0x54) f- rax_4[2].d
float zmm4_1 = *(arg1 + 0x58) f- *(rax_4 + 0x14)
float zmm8_1 = *(arg1 + 0x5c) f- rax_4[3].d
int128_t zmm10_1 = *(rax_4 + 4) ^ zmm15
var_d8 = zmm12_1.d
zmm11_1 ^= zmm15
zmm5_1 = zmm5_1 * zmm14
zmm4_1 = zmm4_1 * zmm14
zmm8_1 = zmm8_1 * zmm14
int32_t var_d4_1 = zmm10_1.d
int32_t var_d0_1 = zmm11_1.d
float var_cc_1 = zmm9_1
zmm11_1.d = zmm11_1.d f* (zmm10_1.d * zmm4_1 + zmm12_1.d * zmm5_1 + zmm11_1.d * zmm8_1)
zmm12_1.d = zmm12_1.d f* zmm4_1
zmm10_1.d = zmm10_1.d f* zmm5_1
zmm12_1.d = zmm12_1.d f- zmm10_1.d
zmm12_1.d = zmm12_1.d f* zmm9_1
zmm12_1.d = zmm12_1.d f+ (zmm9_1 * zmm9_1 - 0.5f) * zmm8_1
zmm12_1.d = zmm12_1.d f+ zmm11_1.d
float* rax_5
int32_t zmm6_3
int32_t zmm7_3
rax_5, zmm6_3, zmm7_3 = sub_1417c7990(&var_d8, &var_c8, arg1 + 0x44)
int64_t* rcx_5 = *(arg1 + 0x60)
void* rax_6 = *(arg1 + 0x68)
*(rax_6 + 0x2c) = *rax_5
*(rax_6 + 0x3c) = zmm7_3
*(rax_6 + 0x40) = zmm6_3
*(rax_6 + 0x44) = zmm12_1.d
jump(*(*rcx_5 + 0x40))
