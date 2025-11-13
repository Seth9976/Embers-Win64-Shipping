// 函数: sub_142801ca0
// 地址: 0x142801ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e0 = 0
int64_t* rax = *(arg5 + 0x10)
int64_t var_d8 = 0
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x28)
int64_t var_90 = 0
int64_t* var_e8 = rax
int64_t* var_c8 = rax
int32_t var_98 = 0x3f400000
int32_t var_94 = 0xffffffff
sub_1427e68b0(&var_c8, 0x40)
int64_t* var_f8 = &var_c8
int64_t var_78
sub_1427e3660(&var_78, &var_e8, arg4, arg2, arg5, arg3)
int64_t var_48 = var_78
int64_t var_70
int64_t var_40 = var_70
int64_t var_68
int64_t var_38 = var_68
int64_t var_60
int64_t var_30 = var_60
int64_t var_58
int64_t var_28 = var_58
int64_t var_50
int64_t var_20 = var_50
int128_t var_18 = zx.o(0)
sub_142806c00(&var_48)
int64_t rdx_1 = var_c0

if (rdx_1 != 0)
    int64_t* rcx_3 = *var_c8
    (*(*rcx_3 + 0x10))(rcx_3, rdx_1)

int32_t result = var_d8:4.d

if ((result & 0x7fffffff) == 0 || result s< 0 || var_e0 == 0)
    return result

int64_t* rcx_4 = *var_e8
return (*(*rcx_4 + 0x10))(rcx_4, var_e0)
