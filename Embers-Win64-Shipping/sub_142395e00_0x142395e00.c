// 函数: sub_142395e00
// 地址: 0x142395e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = *arg8
*arg8 = 0
int32_t rsi = arg8[1].d
int32_t rdi = *(arg8 + 0xc)
arg8[1] = 0
void var_68
int64_t* rax = sub_14237ab10(&var_68, arg4)
int64_t var_48 = *arg3
int64_t var_40
sub_140596d10(&var_40, &arg3[1])
int64_t* var_88 = &var_48
void var_30
void* var_80 = &var_30
int128_t zmm0 = var_88.o
int64_t var_98 = 0
int32_t var_90 = 0
int128_t var_78 = zmm0
var_88 = rbp
var_80.d = rsi
var_80:4.d = rdi

if (rax != &var_98 && rax[1].d != 0)
    int64_t* rcx_3 = *rax
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x40))(rcx_3, &var_98)

void var_58
sub_1423960c0(arg1, arg2, sub_14237d6f0(&var_58, &var_78), &var_98, arg5, arg6, arg7, &var_88)
int64_t rcx_6 = var_40

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140745b20(rax)
int64_t rcx_8 = *arg8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg2
