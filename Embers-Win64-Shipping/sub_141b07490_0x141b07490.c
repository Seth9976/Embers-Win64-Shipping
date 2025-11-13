// 函数: sub_141b07490
// 地址: 0x141b07490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rsi = *(arg1 + 8)
void var_e8
int128_t* rax_3 = sub_141b20d50(&var_e8, arg3, rsi)
void** const var_c8 = &data_143054100
int128_t zmm0 = *rax_3
char var_af = 0
char var_b0

if (*(rax_3 + 0x11) != 0)
    var_b0 = rax_3[1].b
    var_af = 1

int64_t var_a8
sub_1405ac3f0(&var_a8, rsi)

if (*(rax_3 + 0x11) != 0)
    *(rax_3 + 0x11) = 0

arg2[4].b &= 0xfc
int64_t* rax_5 = sub_140a82f30(0x98, 8)
*arg2 = rax_5
int64_t* rcx_2 = rax_5
char rax_6 = arg2[4].b | 1
arg2[4].b = rax_6

if ((rax_6 & 2) != 0)
    rcx_2 = arg2

*rcx_2 = &data_143054100
*(rcx_2 + 8) = zmm0
*(rcx_2 + 0x19) = 0

if (var_af != 0)
    rcx_2[3].b = var_b0
    *(rcx_2 + 0x19) = 1

sub_1405ac2f0(&rcx_2[4], &var_a8)
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

int64_t rcx_8 = var_a8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_108)
return arg2
