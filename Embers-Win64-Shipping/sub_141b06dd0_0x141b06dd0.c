// 函数: sub_141b06dd0
// 地址: 0x141b06dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rsi = *(arg1 + 8)
void var_108
sub_1405bb0c0(rsi, &var_108, arg3)
void* rax_2 = sub_1405bdd80(&var_108)
int64_t rax_3

if (rax_2 != 0)
    rax_3 = sx.q(*(rax_2 + 0x4c))

int64_t var_e0
int128_t zmm0

if (rax_2 == 0 || rax_3 == neg.q(var_e0))
    zmm0 = data_142d3f660
else
    zmm0 = *(rax_3 + var_e0)

int64_t var_f0

if (var_f0 != 0)
    sub_140a74f90(var_f0)

void** const var_c8 = &data_14305dae0
int64_t var_a8
sub_1405ac3f0(&var_a8, rsi)
arg2[4].b &= 0xfc
void*** rax_5 = sub_140a82f30(0xa0, 0x10)
*arg2 = rax_5
void*** rcx_4 = rax_5
char rax_6 = arg2[4].b | 1
arg2[4].b = rax_6

if ((rax_6 & 2) != 0)
    rcx_4 = arg2

*rcx_4 = &data_14305dae0
*(rcx_4 + 0x10) = zmm0
sub_1405ac2f0(&rcx_4[4], &var_a8)
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int32_t var_60 = 0
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_1405b8a50(&var_a8, 0)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_10 = var_a8

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
