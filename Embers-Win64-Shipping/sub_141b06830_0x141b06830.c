// 函数: sub_141b06830
// 地址: 0x141b06830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t* rsi = *(arg1 + 8)
void var_128
sub_1405bb0c0(rsi, &var_128, arg3)
void* rax_2 = sub_1405bdd80(&var_128)
int32_t var_138_1

if (rax_2 != 0)
    int64_t rax_3 = sx.q(*(rax_2 + 0x4c))
    int64_t var_100
    
    if (rax_3 != neg.q(var_100))
        var_138_1 = (rax_3 + var_100)[2].d

int128_t var_158
__builtin_memset(&var_158, 0, 0x24)
int64_t var_110

if (var_110 != 0)
    sub_140a74f90(var_110)

int128_t zmm0 = var_158
void** const var_e8 = &data_14305dac0
int64_t var_b8
sub_1405ac3f0(&var_b8, rsi)
arg2[4].b &= 0xfc
void*** rax_7 = sub_140a82f30(0xa8, 8)
*arg2 = rax_7
void*** rcx_4 = rax_7
char rax_8 = arg2[4].b | 1
arg2[4].b = rax_8

if ((rax_8 & 2) != 0)
    rcx_4 = arg2

*rcx_4 = &data_14305dac0
*(rcx_4 + 8) = zmm0
int128_t var_148
*(rcx_4 + 0x18) = var_148
rcx_4[5].d = var_138_1
sub_1405ac2f0(&rcx_4[6], &var_b8)
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

__security_check_cookie(rax_1 ^ &var_178)
return arg2
