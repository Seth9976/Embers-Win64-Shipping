// 函数: sub_140d370f0
// 地址: 0x140d370f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *(arg2 + 0x20)
int64_t var_58 = 0
int64_t var_50 = 0
uint32_t rcx = zx.d(*rax)
*(arg2 + 0x20) = &rax[1]
(&data_143e1cd60)[zx.q(rcx)](*(arg2 + 0x18), arg4, &var_58)
int64_t var_28
__builtin_memset(&var_28, 0, 0x18)
void var_38
int128_t var_48 = *sub_140a1dfc0(&var_58, &var_38)
sub_140d2c760(&var_28, &var_48)
int64_t rax_4 = var_28
*arg3 = 0xffffffff
arg3[1] = 0
*(arg3 + 0x10) = rax_4
int64_t var_20
int64_t* result = sub_140597df0(&arg3[6], &var_20)
int64_t rcx_5 = var_20
arg3[2] = 0

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = var_58

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
