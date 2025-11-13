// 函数: sub_14293ef00
// 地址: 0x14293ef00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2b0)
void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
void var_118
void* rax_2 = &var_118
int64_t i_1 = 2
int64_t i

do
    rax_2 += 0x80
    int128_t zmm0 = *arg2
    int128_t zmm1 = arg2[1]
    arg2 = &arg2[8]
    *(rax_2 - 0x80) = zmm0
    zmm0 = arg2[-6]
    *(rax_2 - 0x70) = zmm1
    zmm1 = arg2[-5]
    *(rax_2 - 0x60) = zmm0
    zmm0 = arg2[-4]
    *(rax_2 - 0x50) = zmm1
    zmm1 = arg2[-3]
    *(rax_2 - 0x40) = zmm0
    zmm0 = arg2[-2]
    *(rax_2 - 0x30) = zmm1
    zmm1 = arg2[-1]
    *(rax_2 - 0x20) = zmm0
    *(rax_2 - 0x10) = zmm1
    i = i_1
    i_1 -= 1
while (i != 1)
void var_218
sub_14296e1c0(&var_218, &var_118)
void var_1d8
void var_d8
sub_14296e1c0(&var_1d8, &var_d8)
int128_t var_258
sub_14296c9a0(&var_258, &var_218, &var_1d8)
int128_t var_298
sub_14296c9a0(&var_298, &var_d8, &var_118)
void var_198
sub_14296e1c0(&var_198, &var_298)
sub_14296dba0(&var_198, &var_198, &var_258)
sub_14296dba0(&var_298, &var_1d8, &var_218)
void var_98
sub_14296e1c0(&var_218, &var_98)
sub_14296c9a0(&var_1d8, &var_218, &var_218)
sub_14296dba0(&var_1d8, &var_1d8, &var_298)
sub_14296dcf0(&var_218, &var_1d8, &var_198)
sub_14296dcf0(&var_198, &var_298, &var_258)
sub_14296dcf0(&var_298, &var_258, &var_1d8)
sub_1428b8960(&var_258, 0x40)
void var_158
sub_14296e1c0(&var_158, &var_298)
sub_14296cfc0(&var_258, &var_158)
sub_14296e1c0(&var_158, &var_258)
sub_14296dcf0(&var_258, &var_158, &var_298)
var_298 = var_258
int128_t var_248
int128_t var_288 = var_248
int128_t var_238
int128_t var_278 = var_238
int128_t var_228
int128_t var_268 = var_228
sub_14296dcf0(&var_1d8, &var_218, &var_298)
sub_14296dcf0(&var_218, &var_198, &var_298)
*(arg1 + 0x38) = 0
sub_14296d520(arg1, &var_218)
char rax_3 = sub_14296d4b0(&var_1d8) & 0x80
*(arg1 + 0x38) |= rax_3
sub_1428b8960(&var_218, 0x40)
sub_1428b8960(&var_198, 0x40)
sub_1428b8960(&var_298, 0x40)
sub_1428b8960(&var_1d8, 0x40)
int64_t result = sub_1428b8960(&var_118, 0x100)
__security_check_cookie(rax_1 ^ &var_2b8)
return result
