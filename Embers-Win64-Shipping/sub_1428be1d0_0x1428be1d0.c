// 函数: sub_1428be1d0
// 地址: 0x1428be1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result
int32_t var_78
void var_68

if (*arg1 == 0)
    result = 0
else if (sub_1428918e0(*(arg1 + 8), &var_68, &var_78) == 0)
    result = 0
else if (sub_142891c70(*(arg1 + 8), *(arg1 + 0x18)) == 0)
    result = 0
else if (sub_142891c10(*(arg1 + 8), &var_68, zx.q(var_78)) == 0)
    result = 0
else if (sub_1428918e0(*(arg1 + 8), arg2, arg3) == 0)
    result = 0
else
    result = 1
__security_check_cookie(rax_1 ^ &var_98)
return result
