// 函数: sub_142395f80
// 地址: 0x142395f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg3
int64_t var_20
sub_140596d10(&var_20, &arg3[1])
int64_t* var_58 = &var_28
int64_t var_68 = 0
void var_10
void* var_50 = &var_10
int128_t zmm0 = var_58.o
var_58 = *arg8
*arg8 = 0
var_50.d = arg8[1].d
var_50:4.d = *(arg8 + 0xc)
int128_t var_48 = zmm0
arg8[1] = 0
int32_t var_60 = 0

if (arg4 != &var_68 && arg4[1].d != 0)
    int64_t* rcx_1 = *arg4
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, &var_68)

void var_38
sub_1423960c0(arg1, arg2, sub_14237d6f0(&var_38, &var_48), &var_68, arg5, arg6, arg7, &var_58)
int64_t rcx_4 = var_20

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140745b20(arg4)
int64_t rcx_6 = *arg8

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg2
