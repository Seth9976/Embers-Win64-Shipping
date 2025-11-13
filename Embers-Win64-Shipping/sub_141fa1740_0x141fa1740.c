// 函数: sub_141fa1740
// 地址: 0x141fa1740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_30
__builtin_memset(&var_30, 0, 0x20)
int128_t var_48 = *arg4
sub_141fa10e0(&var_30, arg3, &var_48)
int64_t rdi = sx.q(*(arg1 + 0xc8))
int32_t rax_1 = (rdi + 1).d
*(arg1 + 0xc8) = rax_1

if (rax_1 s> *(arg1 + 0xcc))
    sub_1405c4ec0(arg1 + 0xc0)

char* rdx_2 = *(arg1 + 0xc0) + rdi * 0x28
char var_38
*rdx_2 = (var_38 & 0xfd) | 1
rdx_2[1] = arg2
*(rdx_2 + 8) = var_30.q
*(rdx_2 + 0x10) = var_30:8.q
int128_t var_20
*(rdx_2 + 0x18) = var_20.q
*(rdx_2 + 0x20) = var_20:8.q
int64_t rax_11 = sx.q(*(arg1 + 0xc8) - 1)
__builtin_memset(&var_30, 0, 0x20)
int64_t result = *(arg1 + 0xc0) + rax_11 * 0x28
sub_140e53610(&var_30)
return result
