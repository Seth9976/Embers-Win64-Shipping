// 函数: sub_14270cb80
// 地址: 0x14270cb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void var_98
sub_141b7af80(&var_98, arg7)
sub_141eb8b10(&var_98, arg4)
int32_t var_dc = 1
float var_d4 = arg8[1]
float var_d8 = *arg8
float var_d0 = arg8[2]
float zmm0 = arg3[1] f- arg2[1]
float var_e8 = *arg3 - *arg2
float var_e4 = zmm0
float var_e0 = arg3[2] f- arg2[2]
int32_t* var_f0 = &data_143f3a660
void* var_f8 = &var_98
int32_t* var_100 = &var_dc
void var_b8
float var_a8[0x4]
float var_c8[0x4] = *sub_140ade170(sub_140adf3c0(&var_e8, &var_b8), &var_a8)
char rax_6 = sub_141ecd9f0(arg5, arg2, arg3, &var_c8, arg6, var_100, var_f8, var_f0)
int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rax_6)
