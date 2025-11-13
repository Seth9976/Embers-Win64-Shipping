// 函数: sub_141fa0fe0
// 地址: 0x141fa0fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = *arg4
int128_t var_38
__builtin_memset(&var_38, 0, 0x24)
sub_141fa1530(&var_38, arg3, &var_58)
int64_t rbx = sx.q(*(arg1 + 0xd8))
int32_t rax_1 = (rbx + 1).d
*(arg1 + 0xd8) = rax_1

if (rax_1 s> *(arg1 + 0xdc))
    sub_1407c3b60(arg1 + 0xd0)

char* rcx_3 = rbx * 0x38 + *(arg1 + 0xd0)
char var_48
*rcx_3 = (var_48 & 0xfd) | 1
*(rcx_3 + 4) = arg2
*(rcx_3 + 0x10) = var_38.q
*(rcx_3 + 0x18) = var_38:8.q
__builtin_memset(&rcx_3[0x20], 0, 0x14)
int64_t rbx_1 = sx.q(*(arg1 + 0xd8) - 1) * 0x38
__builtin_memset(&var_38, 0, 0x20)
int64_t result = rbx_1 + *(arg1 + 0xd0)
sub_140e53610(&var_38)
return result
