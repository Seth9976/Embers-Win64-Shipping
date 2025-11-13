// 函数: sub_1428e5760
// 地址: 0x1428e5760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
__time64_t _Time
int64_t var_48
bool cond:0

if (arg3 != 0)
    cond:0 = sub_1428e5bc0(&var_48, arg3) == 0
else
    _time64(&_Time)
    __builtin_memset(&var_48, 0, 0x24)
    cond:0 = sub_14292b0d0(&_Time, &var_48) == 0

int64_t var_70
bool cond:1_1

if (not(cond:0))
    if (arg4 != 0)
        cond:1_1 = sub_1428e5bc0(&var_70, arg4) == 0
    else
        _time64(&_Time)
        __builtin_memset(&var_70, 0, 0x24)
        cond:1_1 = sub_14292b0d0(&_Time, &var_70) == 0

int64_t result

if (cond:0 || cond:1_1)
    result = 0
else
    result = sub_14292b2a0(arg1, arg2, &var_48, &var_70)

__security_check_cookie(rax_1 ^ &var_98)
return result
