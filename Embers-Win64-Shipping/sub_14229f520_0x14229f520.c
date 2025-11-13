// 函数: sub_14229f520
// 地址: 0x14229f520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg5[0] = arg5[0] * 0.0174532924f
arg2[0] = arg2[0] * 0.0174532924f
int64_t var_58
__builtin_memset(&var_58, 0, 0x20)
int64_t var_48
int128_t zmm14
sub_142290970(arg2, arg5, arg3, zx.o(0), zmm14, arg4, &var_48, &var_58)
int32_t var_78
var_78.b = 0
void var_38
sub_141fd6cc0(&var_38, arg9[0x1d].d, 1, 0, var_78.b, nullptr)
sub_141fdaff0(&var_38, &var_48)
sub_141fdaba0(&var_38, &var_58)
int64_t* var_68
var_68.d = arg8
sub_141fe3230(&var_38, arg1, arg6, arg7, 0, 0, var_68.d, arg9)
int64_t result = sub_141fd8140(&var_38)
int64_t rcx_5 = var_58

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = var_48

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
