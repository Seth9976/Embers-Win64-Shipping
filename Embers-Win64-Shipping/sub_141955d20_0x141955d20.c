// 函数: sub_141955d20
// 地址: 0x141955d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
*(arg1 + 0x1c) = 0xffffffff
*(arg1 + 0x20) = 0
sub_140af2b60()
char rax_2 = sub_140b21a10(&data_143dbb3f0, u"openglDebug")
int32_t rcx = 0
int32_t var_58 = 0x2091
int32_t var_54 = arg2
int64_t var_3c = 1
int32_t var_50 = 0x2092

if (rax_2 != 0)
    rcx = 1

int32_t var_4c = arg3
int32_t var_48 = 0x2094
int32_t var_44 = rcx | 2
int32_t var_40 = 0x9126
int64_t result = data_143f004e0(*(arg1 + 8), arg4, &var_58)
*(arg1 + 0x10) = result
__security_check_cookie(rax_1 ^ &var_78)
return result
