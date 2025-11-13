// 函数: sub_14183eeb0
// 地址: 0x14183eeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rax_2 = *arg1
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
(*(rax_2 + 0x198))(arg1, &var_88)
(*(*arg1 + 0x110))(arg1, arg2, arg3, &var_88, arg4)
int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t result = sub_14059ad90(&var_88, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_4 = var_88

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

__security_check_cookie(rax_1 ^ &var_b8)
return result
