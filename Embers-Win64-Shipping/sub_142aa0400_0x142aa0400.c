// 函数: sub_142aa0400
// 地址: 0x142aa0400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48

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
    sub_142aa0180(arg1, &var_28, 2, 0)
else if (*(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0)
    **(arg1 + 0x10) = 0x110000
    *(arg1 + 0x1c) = 1
    int64_t rcx_2 = *(arg1 + 0x40)
    
    if (rcx_2 != 0)
        sub_142a7dcd0(rcx_2)
        *(arg1 + 0x40) = 0
        *(arg1 + 0x48) = 0
    
    void* rcx_3 = *(arg1 + 0x50)
    
    if (rcx_3 != 0)
        sub_142ae76a0(rcx_3)
    
    *(arg1 + 0x20) = 0

__security_check_cookie(rax_1 ^ &var_48)
return arg1
