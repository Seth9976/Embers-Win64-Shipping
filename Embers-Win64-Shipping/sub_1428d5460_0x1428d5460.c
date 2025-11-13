// 函数: sub_1428d5460
// 地址: 0x1428d5460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
uint64_t result

if (arg3 - 1 u> 0xf)
    result = 0xffffffff
else
    int64_t r8 = *(arg1 + 0x10)
    int64_t var_38 = *(arg1 + 0xa0) ^ *(arg1 + 0x90) ^ *(arg1 + 0x48)
    int64_t rax_8 = *(arg1 + 0xa8) ^ *(arg1 + 0x98) ^ *(arg1 + 0x50)
    (*arg1)(&var_38, &var_38, r8)
    var_38 ^= *(arg1 + 0x80)
    int64_t var_30_2 = rax_8 ^ *(arg1 + 0x88)
    
    if (arg4 == 0)
        result = sub_1428bc500(&var_38, arg2, arg3)
    else
        memcpy(arg2, &var_38, arg3.d)
        result = 1

__security_check_cookie(rax_1 ^ &var_58)
return result
