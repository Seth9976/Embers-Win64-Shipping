// 函数: sub_141b06f40
// 地址: 0x141b06f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rsi = *(arg1 + 8)
void var_f8
sub_1405bb0c0(rsi, &var_f8, arg3)
void* rax_2 = sub_1405bdd80(&var_f8)
int64_t var_108
int32_t var_100

if (rax_2 != 0)
    int64_t rax_3 = sx.q(*(rax_2 + 0x4c))
    int64_t var_d0
    int64_t* rax_4 = rax_3 + var_d0
    
    if (rax_3 != neg.q(var_d0))
        var_108 = *rax_4
        var_100 = rax_4[1].d

int64_t var_e0

if (var_e0 != 0)
    sub_140a74f90(var_e0)

void** const var_b8 = &data_14305daf0
int64_t var_a0
sub_1405ac3f0(&var_a0, rsi)
arg2[4].b &= 0xfc
void*** rax_7 = sub_140a82f30(0x90, 8)
*arg2 = rax_7
void*** rcx_4 = rax_7
char rax_8 = arg2[4].b | 1
arg2[4].b = rax_8

if ((rax_8 & 2) != 0)
    rcx_4 = arg2

*rcx_4 = &data_14305daf0
rcx_4[1] = var_108
rcx_4[2].d = var_100
sub_1405ac2f0(&rcx_4[3], &var_a0)
int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

int32_t var_58 = 0
int64_t var_60

if (var_60 != 0)
    sub_140a74f90(var_60)

sub_1405b8a50(&var_a0, 0)
int64_t var_80

if (var_80 != 0)
    sub_140a74f90(var_80)

int64_t rcx_10 = var_a0

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
