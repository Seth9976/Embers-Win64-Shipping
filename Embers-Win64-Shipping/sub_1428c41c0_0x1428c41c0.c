// 函数: sub_1428c41c0
// 地址: 0x1428c41c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x88)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_48
int64_t* rbx = &var_48
int32_t var_58 = 0
char var_40[0x18]
char (* var_60)[0x18] = &var_40
char var_68 = 0

if (arg1 != 0)
    rbx = arg1

int32_t var_70 = 0
var_48 = 0
var_40[0] = 0
int64_t result

if (sub_1428c5060(rbx, arg2, arg3, arg4, 0xffffffff, var_70, var_68, var_60, var_58) s> 0)
    result = *rbx
else
    sub_1428c3d40(rbx, arg4)
    result = 0

__security_check_cookie(rax_1 ^ &var_98)
return result
