// 函数: sub_142b45950
// 地址: 0x142b45950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void var_38
int32_t var_34
int32_t var_30
char var_28[0x18]
sub_142b38c50(arg1, 0, 0, &var_28, 0x12, &var_38, &var_34, &var_30)
int32_t rcx = var_34

if (arg2 != 0)
    if (rcx != 1)
        *arg2 = 0xff
    else
        *arg2 = var_28[0] - 0x30

uint64_t result = zx.q(rcx.w - var_30.w)
__security_check_cookie(rax_1 ^ &var_78)
return result
