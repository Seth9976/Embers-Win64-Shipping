// 函数: sub_141b06b00
// 地址: 0x141b06b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rbx = *(arg1 + 8)
void var_118
int128_t* rax_2 = sub_141af02f0(rbx, &var_118, arg3)
int128_t zmm0 = *rax_2
int128_t zmm1 = rax_2[1]
int128_t zmm2 = rax_2[2]
void** const var_e8 = &data_14305dad0
int64_t var_a8
sub_1405ac3f0(&var_a8, rbx)
arg2[4].b &= 0xfc
void** rax_3 = sub_140a82f30(0xc0, 0x10)
char rcx_2 = arg2[4].b
*arg2 = rax_3
rcx_2 |= 1
arg2[4].b = rcx_2

if ((rcx_2 & 2) != 0)
    rax_3 = arg2

*rax_3 = &data_14305dad0
*(rax_3 + 0x10) = zmm0
*(rax_3 + 0x20) = zmm1
*(rax_3 + 0x30) = zmm2
sub_1405ac2f0(&rax_3[8], &var_a8)
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

__security_check_cookie(rax_1 ^ &var_138)
return arg2
