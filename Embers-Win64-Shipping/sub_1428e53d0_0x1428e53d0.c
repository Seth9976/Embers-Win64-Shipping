// 函数: sub_1428e53d0
// 地址: 0x1428e53d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
void var_48
int64_t var_18 = __security_cookie ^ &var_48
int64_t var_28 = arg1
int64_t rax_2 = 8
int64_t* rcx = &var_18

do
    rcx -= 1
    rax_2 -= 1
    *rcx = arg2.b
    arg2 u>>= 8
while (arg2 != 0)

int64_t result = sub_1428e5240(rcx, 8 - rax_2, arg3, &var_28)
__security_check_cookie(var_18 ^ &var_48)
return result
