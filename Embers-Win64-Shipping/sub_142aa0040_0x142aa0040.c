// 函数: sub_142aa0040
// 地址: 0x142aa0040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t rcx = 0

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> 0x10ffff)
    arg2 = 0x10ffff

if (arg3 s>= 0)
    rcx = arg3
    
    if (arg3 s> 0x10ffff)
        rcx = 0x10ffff

if (arg2 s<= rcx)
    int32_t var_28 = arg2
    int32_t var_24_1 = rcx + 1
    int32_t var_20_1 = 0x110000
    sub_142aa0180(arg1, &var_28, 2, 2)

__security_check_cookie(rax_1 ^ &var_48)
return arg1
