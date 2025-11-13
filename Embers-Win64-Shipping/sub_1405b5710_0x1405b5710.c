// 函数: sub_1405b5710
// 地址: 0x1405b5710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* rsi = *(arg1 + 8)
void var_118
sub_1405bb0c0(rsi, &var_118, arg3)
void* rax_2 = sub_1405bdd80(&var_118)
int64_t var_f0
int64_t rax_3
int128_t* rax_4

if (rax_2 != 0)
    rax_3 = sx.q(*(rax_2 + 0x4c))
    rax_4 = rax_3 + var_f0

int128_t var_138
int32_t var_128

if (rax_2 == 0 || rax_3 == neg.q(var_f0))
    var_138 = data_142d4cc10
    int32_t var_124_1 = 0x3f800000
    var_128 = 0
else
    var_138 = *rax_4
    var_128.q = rax_4[1].q

int64_t var_100

if (var_100 != 0)
    sub_140a74f90(var_100)

void** const var_d8 = &data_142d4cbd0
int64_t var_b8
sub_1405ac3f0(&var_b8, rsi)
arg2[4].b &= 0xfc
void*** rax_5 = sub_140a82f30(0x98, 8)
*arg2 = rax_5
void*** rcx_4 = rax_5
char rax_6 = arg2[4].b | 1
arg2[4].b = rax_6

if ((rax_6 & 2) != 0)
    rcx_4 = arg2

*rcx_4 = &data_142d4cbd0
*(rcx_4 + 8) = var_138
rcx_4[3] = var_128.q
sub_1405ac2f0(&rcx_4[4], &var_b8)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int32_t var_70 = 0
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

sub_1405b8a50(&var_b8, 0)
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t rcx_10 = var_b8

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
