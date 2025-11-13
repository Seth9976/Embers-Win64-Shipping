// 函数: sub_1412475f0
// 地址: 0x1412475f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_5c = 0x80
void** var_a8
int64_t* var_b8 = &var_a8
void** var_98
int64_t* var_c0 = &var_98
void* var_88
int64_t* var_c8 = &var_88
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
__builtin_memset(&var_a8, 0, 0x4c)
sub_141247f20(arg1, arg2, arg3, arg4, var_c8, var_c0, var_b8)
sub_141225b40(arg1, arg2, arg3, &var_88, &var_98, &var_a8)
void** rcx_1 = var_a8

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

void** rcx_2 = var_98

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_80
var_80.d = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int64_t var_78
void* result = sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

void* rcx_7 = var_88

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_e8)
return result
