// 函数: sub_141b065e0
// 地址: 0x141b065e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rdi = *(arg1 + 8)
void var_108
sub_1405bb0c0(rdi, &var_108, arg3)
void* rax_2 = sub_1405bdd80(&var_108)
int64_t rax_3

if (rax_2 != 0)
    rax_3 = sx.q(*(rax_2 + 0x4c))

int64_t var_e0
int32_t zmm6

if (rax_2 == 0 || rax_3 == neg.q(var_e0))
    zmm6 = (zx.o(0)).d
else
    zmm6 = *(rax_3 + var_e0)

int64_t var_f0

if (var_f0 != 0)
    sub_140a74f90(var_f0)

void** const var_c8 = &data_14305da90
int64_t var_b8
sub_1405ac3f0(&var_b8, rdi)
arg2[4].b &= 0xfc
void*** rax_5 = sub_140a82f30(0x88, 8)
arg2[4].b |= 1
bool cond:0 = (arg2[4].b & 2) != 0
*arg2 = rax_5

if (cond:0)
    rax_5 = arg2

*rax_5 = &data_14305da90
rax_5[1].d = zmm6
sub_1405ac2f0(&rax_5[2], &var_b8)
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

int64_t rcx_9 = var_b8

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
