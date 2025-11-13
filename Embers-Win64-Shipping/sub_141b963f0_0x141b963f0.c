// 函数: sub_141b963f0
// 地址: 0x141b963f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rbx = *(arg1 + 8)
void var_e8
int128_t* rax_2 = sub_141b71eb0(rbx, &var_e8, arg3)
int32_t rcx_1 = *(rax_2 + 0x18)
int128_t zmm1 = *rax_2
int64_t zmm0 = rax_2[1].q
void** const var_c8 = &data_1430840f0
int64_t var_a0
sub_1405ac3f0(&var_a0, rbx)
arg2[4].b &= 0xfc
void** rax_3 = sub_140a82f30(0xa0, 8)
char rcx_3 = arg2[4].b
void** rdx_2 = rax_3
*arg2 = rax_3
rcx_3 |= 1
arg2[4].b = rcx_3

if ((rcx_3 & 2) != 0)
    rdx_2 = arg2

*rdx_2 = &data_1430840f0
*(rdx_2 + 8) = zmm1
rdx_2[3] = zmm0
rdx_2[4].d = rcx_1
sub_1405ac2f0(&rdx_2[5], &var_a0)
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

int64_t rcx_9 = var_a0

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_108)
return arg2
