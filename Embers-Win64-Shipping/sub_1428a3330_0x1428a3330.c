// 函数: sub_1428a3330
// 地址: 0x1428a3330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
sub_1428ac180(arg1, nullptr)
char var_28
int32_t rax_2 =
    sub_142891710(*(arg1 + 0x18), sx.q(*(arg1 + 0x20)), &var_28, nullptr, &data_1434e9110, nullptr)

if (rax_2 == 0)
    __security_check_cookie(rax_1 ^ &var_58)
    return rax_2

char var_27
char var_26
char var_25
uint64_t rax_9 = zx.q(((zx.d(var_25) << 8 | zx.d(var_26)) << 8 | zx.d(var_27)) << 8) | zx.q(var_28)
__security_check_cookie(rax_1 ^ &var_58)
return rax_9
