// 函数: sub_142942360
// 地址: 0x142942360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x170)
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int128_t zmm0 = *arg2
uint128_t zmm1 = arg2[1]
uint128_t var_28 = zmm1
uint128_t temp0 = _mm_bsrli_si128(zmm1, 8)
int128_t var_38 = zmm0
var_38.b = zmm0.b & 0xf8
var_28:0xf.b = ((temp0.q u>> 0x38).b & 0x3f) | 0x40
void var_128
sub_142945ea0(&var_128, &var_38)
int32_t var_100
int32_t var_d8
int32_t var_60 = var_d8 - var_100
int32_t var_88 = var_100 + var_d8
int32_t var_fc
int32_t var_d4
int32_t var_5c = var_d4 - var_fc
int32_t var_84 = var_fc + var_d4
int32_t var_f8
int32_t var_d0
int32_t var_58 = var_d0 - var_f8
int32_t var_80 = var_f8 + var_d0
int32_t var_f4
int32_t var_cc
int32_t var_54 = var_cc - var_f4
int32_t var_7c = var_f4 + var_cc
int32_t var_f0
int32_t var_c8
int32_t var_50 = var_c8 - var_f0
int32_t var_78 = var_f0 + var_c8
int32_t var_ec
int32_t var_c4
int32_t var_4c = var_c4 - var_ec
int32_t var_74 = var_ec + var_c4
int32_t var_e8
int32_t var_c0
int32_t var_48 = var_c0 - var_e8
int32_t var_70 = var_e8 + var_c0
int32_t var_e4
int32_t var_bc
int32_t var_44 = var_bc - var_e4
int32_t var_6c = var_e4 + var_bc
int32_t var_e0
int32_t var_b8
int32_t var_40 = var_b8 - var_e0
int32_t var_68 = var_e0 + var_b8
int32_t var_dc
int32_t var_b4
int32_t var_3c = var_b4 - var_dc
int32_t var_64 = var_dc + var_b4
void var_158
sub_142942950(&var_158, &var_60)
sub_142942bd0(&var_88, &var_88, &var_158)
sub_1429444b0(arg1, &var_88)
int64_t result = sub_1428b8960(&var_38, 0x20)
__security_check_cookie(rax_1 ^ &var_178)
return result
