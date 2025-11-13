// 函数: sub_14222b260
// 地址: 0x14222b260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t* rax_2 = arg1[1]
int32_t* rdx = *arg1
int32_t var_bc = 0
int32_t var_ac = 0
int128_t zmm9 = rax_2[2]
float zmm1 = *rdx
int128_t zmm6 = rdx[1]
float zmm5 = rdx[2]
int128_t zmm7 = rax_2[1]
float zmm3 = *rax_2
float* rax_3 = arg1[2]
int32_t var_9c = 0
float var_c8 = zmm1
int128_t zmm8
zmm8.d = zmm6.d f* zmm9.d
int32_t var_c4 = zmm6.d
float var_c0 = zmm5
zmm8.d = zmm8.d f- zmm5 f* zmm7.d
float var_b8 = zmm3
int32_t var_b4 = zmm7.d
float var_94 = rax_3[1]
int32_t var_b0 = zmm9.d
int32_t var_a8 = zmm8.d
int32_t var_8c = 0x3f800000
float var_a4 = zmm3 * zmm5 - zmm1 f* zmm9.d
float var_98 = *rax_3
float var_90 = rax_3[2]
float var_a0 = zmm1 f* zmm7.d - zmm3 f* zmm6.d
void var_88
sub_1407c8dd0(&var_88, &var_c8)
void** result = sub_142279530(arg2, &var_88, *arg1[3])
__security_check_cookie(rax_1 ^ &var_e8)
return result
