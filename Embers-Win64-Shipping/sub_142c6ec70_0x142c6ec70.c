// 函数: sub_142c6ec70
// 地址: 0x142c6ec70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t result

if (arg2 == 0)
    result = 0
else
    int64_t rax_2
    
    if (*(arg1 + 0x3f7) != 0)
        rax_2 = *(arg1 + 0x118)
    else if (*(arg1 + 0x3f6) != 0)
        rax_2 = *(arg1 + 0x150)
    else if (*(arg1 + 0x3f3) == 0)
        rax_2 = *(arg1 + 0xd0)
    else
        rax_2 = *(arg1 + 0xf8)
    
    int64_t var_a8_1 = rax_2
    char var_98[0x80]
    sub_142c564b0(&var_98, 0x80, "%ld%s", zx.q(*(arg1 + 0x178)), arg3)
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (var_98[r8_1] != 0)
    
    result = sub_142c671a0(arg2, &var_98, r8_1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
