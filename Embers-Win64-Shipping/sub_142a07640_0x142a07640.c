// 函数: sub_142a07640
// 地址: 0x142a07640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_88 = *arg1
int64_t rax = sx.q(arg2)
int64_t rax_1 = rax * 2
int128_t var_78 = *(arg1 + (rax << 1))
void* rcx_1 = arg1 + (rax << 1) + rax_1
void* rcx_2 = rcx_1 + rax_1
int128_t var_68 = *rcx_1
void* rcx_3 = rcx_2 + rax_1
int128_t var_58 = *rcx_2
void* rcx_4 = rcx_3 + rax_1
int128_t var_48 = *rcx_3
void* rcx_5 = rcx_4 + rax_1
int128_t var_38 = *rcx_4
int128_t zmm0 = *rcx_5
int128_t zmm1 = *(rax_1 + rcx_5)
sub_142a073f0(&var_88, 0)
int64_t result = sub_142a073f0(&var_88, 1)
*arg3 = var_88
arg3[1] = var_78
arg3[2] = var_68
arg3[3] = var_58
arg3[4] = var_48
arg3[5] = var_38
arg3[6] = zmm0
arg3[7] = zmm1
return result
