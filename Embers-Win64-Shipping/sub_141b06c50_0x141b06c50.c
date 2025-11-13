// 函数: sub_141b06c50
// 地址: 0x141b06c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rdi = *(arg1 + 8)
void var_118
sub_1405bb0c0(rdi, &var_118, arg3)
void* rax_2 = sub_1405bdd80(&var_118)
int32_t var_128

if (rax_2 != 0)
    int64_t rax_3 = sx.q(*(rax_2 + 0x4c))
    int64_t var_f0
    
    if (rax_3 != neg.q(var_f0))
        var_128.q = *(rax_3 + var_f0)

int64_t var_100

if (var_100 != 0)
    sub_140a74f90(var_100)

void** const var_d8 = &data_14305dab0
int32_t var_124
int32_t var_cc = var_124.d
int64_t var_c8
sub_1405ac3f0(&var_c8, rdi)
arg2[4].b &= 0xfc
void*** rax_5 = sub_140a82f30(0x88, 8)
*arg2 = rax_5
void*** rcx_4 = rax_5
char rax_6 = arg2[4].b | 1
arg2[4].b = rax_6

if ((rax_6 & 2) != 0)
    rcx_4 = arg2

*rcx_4 = &data_14305dab0
rcx_4[1] = var_128.q
sub_1405ac2f0(&rcx_4[2], &var_c8)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int32_t var_80 = 0
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

sub_1405b8a50(&var_c8, 0)
int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

int64_t rcx_10 = var_c8

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

__security_check_cookie(rax_1 ^ &var_148)
return arg2
