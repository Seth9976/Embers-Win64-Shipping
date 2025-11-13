// 函数: sub_14232dbb0
// 地址: 0x14232dbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* r8 = *arg1
int64_t var_188
__builtin_memset(&var_188, 0, 0x30)
int32_t var_118 = 0
int64_t var_110
__builtin_memset(&var_110, 0, 0x40)
int32_t var_c4
__builtin_memset(&var_c4, 0, 0x59)
int64_t var_68
__builtin_memset(&var_68, 0, 0x58)
int32_t var_114 = 4
int64_t var_d0 = -1
int32_t var_c8 = 0xffffffff
sub_1423234f0(&var_188, &arg1[1], r8)
sub_142323400(&var_188, &arg1[1])
sub_142068140(*arg1, &var_188)
int64_t* rcx_4 = *arg1 + 0xd0
(*(*rcx_4 + 0x28))(rcx_4)
int128_t var_28
int64_t rcx_5 = var_28:8.q

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t result = sub_1405ec8a0(&var_28)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
