// 函数: sub_142298b20
// 地址: 0x142298b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58
__builtin_memset(&var_58, 0, 0x20)
int64_t var_48
sub_142291690(arg3, arg4, arg5, arg6, arg7, arg8, arg9, &var_48, &var_58)
int32_t var_88
var_88.b = 0
void var_38
sub_141fd6cc0(&var_38, *(arg1[1] + 0x1548), 1, 0, 0, nullptr)
sub_141fdaff0(&var_38, &var_48)
sub_141fdaba0(&var_38, &var_58)
int64_t* var_70
var_70.d = 0xffffffff
var_88.b = arg11
sub_141fdea20(&var_38, arg1, arg2, arg10, 0, 0, 1)
int64_t result = sub_141fd8140(&var_38)
int64_t rcx_6 = var_58

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_48

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
