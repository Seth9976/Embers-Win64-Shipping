// 函数: sub_142b50700
// 地址: 0x142b50700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint32_t result = zx.d(*(arg1 + 8))

if ((result.w & 0xffe0) != 0)
    int32_t r8_2
    
    if (result.w s< 0)
        r8_2 = *(arg1 + 0xc)
    else
        r8_2 = sx.d(result.w) s>> 5
    
    int32_t var_b0_1 = 0
    char var_a8[0x90]
    uint32_t count = sub_142a49990(arg1, 0, r8_2, &var_a8, 0x81)
    __builtin_strncpy(arg2, "meta:", 5)
    memcpy(&arg2[5], &var_a8, count)
    result = count + 5
    *(sx.q(result) + arg2) = 0
else
    *arg2 = 0

__security_check_cookie(rax_1 ^ &var_d8)
return result
