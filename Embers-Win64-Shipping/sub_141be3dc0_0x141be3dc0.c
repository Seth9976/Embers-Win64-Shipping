// 函数: sub_141be3dc0
// 地址: 0x141be3dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
uint64_t result = 0

if (arg2 s<= 0)
    arg2 = 0

*(arg1 + 0x414) = arg2
void* rcx = *(arg1 + 0x508)

if (rcx != 0)
    int32_t var_38 = arg2
    char var_34_1 = 1
    char var_30_1 = 1
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    sub_141be3cb0(rcx, &var_38)
    result = sub_140745b20(&var_28)

__security_check_cookie(rax_1 ^ &var_58)
return result
