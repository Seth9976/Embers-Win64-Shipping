// 函数: sub_1418f5030
// 地址: 0x1418f5030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rbx = sx.q(arg4)
void* rbp = *(*(arg2 + 0x240) + 0x70)
int128_t var_58
__builtin_memset(&var_58, 0, 0x14)
int32_t var_40 = 0
sub_1418bb540(arg2 + 0x160, rbx.d, 0x10, &var_58)
memcpy(var_58.q, arg5, rbx.d)
void* rcx_2 = *(arg3 + 0x40)
void* rdx_2 = var_58:8.q
int64_t var_28 = rbx
int32_t var_48
uint64_t var_38 = zx.q(*(rdx_2 + 0x14) + var_48)
uint64_t var_30 = zx.q(*(rcx_2 + 0x14))
char rbx_1 = *(rbp + 0x2c)
int64_t rdi_1 = *(*(rcx_2 + 0x20) + 0x60)

if (rbx_1 == 2 || (*(rbp + 0x2d) & 0x40) == 0)
    sub_1418bc8b0(rbp)
    rdx_2 = var_58:8.q

int64_t result = data_143efb9f0(*(rbp + 0x40), *(rdx_2 + 0x28), rdi_1, 1, &var_38)

if (rbx_1 == 2)
    result = sub_1418bded0(rbp)

__security_check_cookie(rax_1 ^ &var_88)
return result
