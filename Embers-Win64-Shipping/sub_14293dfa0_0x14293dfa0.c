// 函数: sub_14293dfa0
// 地址: 0x14293dfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x320)
void var_328
int64_t rax_1 = __security_cookie ^ &var_328
int128_t zmm2 = *arg2
int128_t zmm1 = arg2[2]
uint128_t var_38 = arg2[1]
uint64_t var_18
var_18:7.b = arg2[3].q:7.b | 0x80
int128_t var_48 = zmm2
var_48.b = zmm2.b & 0xfc
int128_t var_28 = zmm1
void var_2c8
sub_14296e560(&var_2c8, &var_48, 0x38)

for (int32_t i = 1; i u< 2; i *= 2)
    sub_14296e7c0(&var_2c8, &var_2c8)

void var_148
sub_14293f1a0(&var_148, data_143b868f0, &var_2c8)
void var_248
void* rcx_3 = &var_248
int64_t i_2 = 2
void* rax_3 = &var_148
int64_t i_1

do
    rcx_3 += 0x80
    int128_t zmm0_1 = *rax_3
    int128_t zmm1_1 = *(rax_3 + 0x10)
    rax_3 += 0x80
    *(rcx_3 - 0x80) = zmm0_1
    zmm0_1 = *(rax_3 - 0x60)
    *(rcx_3 - 0x70) = zmm1_1
    zmm1_1 = *(rax_3 - 0x50)
    *(rcx_3 - 0x60) = zmm0_1
    zmm0_1 = *(rax_3 - 0x40)
    *(rcx_3 - 0x50) = zmm1_1
    zmm1_1 = *(rax_3 - 0x30)
    *(rcx_3 - 0x40) = zmm0_1
    zmm0_1 = *(rax_3 - 0x20)
    *(rcx_3 - 0x30) = zmm1_1
    zmm1_1 = *(rax_3 - 0x10)
    *(rcx_3 - 0x20) = zmm0_1
    *(rcx_3 - 0x10) = zmm1_1
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
void var_288
sub_14296e1c0(&var_288, &var_248)
int128_t var_308
sub_14296cfc0(&var_308, &var_288)
sub_14296e1c0(&var_288, &var_308)
sub_14296dcf0(&var_308, &var_288, &var_248)
int128_t var_188 = var_308
int128_t var_2f8
int128_t var_178 = var_2f8
int128_t var_2e8
int128_t var_168 = var_2e8
int128_t var_2d8
int128_t var_158 = var_2d8
void var_208
void var_1c8
sub_14296dcf0(&var_1c8, &var_188, &var_208)
sub_14296e1c0(&var_208, &var_1c8)
sub_14296d520(arg1, &var_208)
sub_1428b8960(&var_248, 0x100)
int64_t result = sub_1428b8960(&var_148, 0x100)
__security_check_cookie(rax_1 ^ &var_328)
return result
