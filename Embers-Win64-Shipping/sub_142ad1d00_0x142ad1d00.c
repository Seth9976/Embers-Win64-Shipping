// 函数: sub_142ad1d00
// 地址: 0x142ad1d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t rax_3 = (*(*arg1 + 0x188))()
int64_t var_20 = 0
int32_t var_18 = 0
int32_t var_28 = 0
sub_142b54090(data_144016670, rax_3, &var_20, &var_28)

if (arg2 != var_20.d)
    __security_check_cookie(rax_1 ^ &var_48)
    return 0

uint64_t result = zx.q(var_20:4.d - 1)
__security_check_cookie(rax_1 ^ &var_48)
return result
