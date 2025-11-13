// 函数: sub_142a9efc0
// 地址: 0x142a9efc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48

if (*(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0 && (*(arg1 + 0x20) & 1) == 0)
    if (arg2 s< 0)
        arg2 = 0
    else if (arg2 s> 0x10ffff)
        arg2 = 0x10ffff
    
    if (arg3 s< 0)
        arg3 = 0
    else if (arg3 s> 0x10ffff)
        arg3 = 0x10ffff
    
    if (arg2 s<= arg3)
        int32_t var_28 = arg2
        int32_t var_24_1 = arg3 + 1
        int32_t var_20_1 = 0x110000
        sub_142a9f7b0(arg1, &var_28, 2, 0)
    
    int64_t rcx = *(arg1 + 0x40)
    
    if (rcx != 0)
        sub_142a7dcd0(rcx)
        *(arg1 + 0x40) = 0
        *(arg1 + 0x48) = 0

__security_check_cookie(rax_1 ^ &var_48)
return arg1
