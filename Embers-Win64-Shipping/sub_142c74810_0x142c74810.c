// 函数: sub_142c74810
// 地址: 0x142c74810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t var_68 = arg6
char var_50[0x20]
int512_t zmm2 = sub_142c564b0(&var_50, 0x20, "%s(%s)", arg4, arg5)

if (arg7 != 0)
    sub_1428f6370(arg2, arg7)

int64_t var_58
int32_t rax_3 = sub_142899cf0(arg2, 3, 0, &var_58)
sub_142c5b900(arg1, arg3, &var_50, var_58, zmm2, sx.q(rax_3))
int64_t result = sub_142899cf0(arg2, 1, 0, 0)
__security_check_cookie(rax_1 ^ &var_88)
return result
