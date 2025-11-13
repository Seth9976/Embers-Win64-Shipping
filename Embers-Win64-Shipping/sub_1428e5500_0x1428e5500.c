// 函数: sub_1428e5500
// 地址: 0x1428e5500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
__time64_t var_68 = arg2
struct tm var_60
struct tm* rax_2 = sub_14292b0d0(&var_68, &var_60)
int32_t rax_3

if (rax_2 != 0 && (arg3 != 0 || arg4 != 0))
    rax_3 = sub_14292b100(rax_2, arg3, arg4)

int32_t* result

if (rax_2 == 0 || ((arg3 != 0 || arg4 != 0) && rax_3 == 0))
    result = nullptr
else
    result = sub_1428e5a90(arg1, rax_2, 0x18)

__security_check_cookie(rax_1 ^ &var_88)
return result
