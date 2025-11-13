// 函数: sub_141b06350
// 地址: 0x141b06350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rsi = *(arg1 + 8)
void var_f8
sub_1405bb0c0(rsi, &var_f8, arg3)
void* rax_2 = sub_1405bdd80(&var_f8)
int64_t rax_3

if (rax_2 != 0)
    rax_3 = sx.q(*(rax_2 + 0x4c))

int64_t var_d0
uint64_t rdi

if (rax_2 == 0 || rax_3 == neg.q(var_d0))
    rdi.b = 0
else
    rdi = zx.q(*(rax_3 + var_d0))

int64_t var_e0

if (var_e0 != 0)
    sub_140a74f90(var_e0)

char var_b0 = rdi.b
void** const var_b8 = &data_14305db30
int64_t var_a8
sub_1405ac3f0(&var_a8, rsi)
arg2[4].b &= 0xfc
void*** rax_5 = sub_140a82f30(0x88, 8)
arg2[4].b |= 1
bool cond:0 = (arg2[4].b & 2) != 0
void*** rcx_4 = rax_5
*arg2 = rax_5

if (cond:0)
    rcx_4 = arg2

*rcx_4 = &data_14305db30
rcx_4[1].b = var_b0
sub_1405ac2f0(&rcx_4[2], &var_a8)
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

__security_check_cookie(rax_1 ^ &var_118)
return arg2
