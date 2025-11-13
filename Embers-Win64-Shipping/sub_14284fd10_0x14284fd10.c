// 函数: sub_14284fd10
// 地址: 0x14284fd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x210)
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t result

if (arg3 u<= 0x20)
    uint64_t r8 = zx.q(arg3)
    uint64_t var_168_1 = r8
    int32_t var_1f8 = *arg1
    void var_160
    memcpy(&var_160, arg2, r8.d)
    sub_1428a5c40(*(*(arg1 + 0x738) + 0x378))
    int64_t* rax_4 = sub_1428a8d10(*(*(arg1 + 0x738) + 0x28), &var_1f8)
    sub_1428a5d00(*(*(arg1 + 0x738) + 0x378))
    result.b = rax_4 != 0
else
    result = 0

__security_check_cookie(rax_1 ^ &var_218)
return result
