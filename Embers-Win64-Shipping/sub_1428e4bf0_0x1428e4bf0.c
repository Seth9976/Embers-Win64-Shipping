// 函数: sub_1428e4bf0
// 地址: 0x1428e4bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void var_38
int64_t rax_1 = __security_cookie ^ &var_38
arg1[1] = arg3
int64_t rax_2 = 8
char var_18[0x8]
int32_t r8

if (arg2 s>= 0)
    do
        rax_2 -= 1
        var_18[rax_2] = arg2.b
        arg2 u>>= 8
    while (arg2 != 0)
    
    r8 = arg3 & 0xfffffeff
else
    int64_t i = neg.q(arg2)
    
    do
        rax_2 -= 1
        var_18[rax_2] = i.b
        i u>>= 8
    while (i != 0)
    
    r8 = arg3 | 0x100

arg1[1] = r8
int64_t result = sub_1428f2d50(arg1, &var_18[rax_2], 8 - rax_2.d)
__security_check_cookie(rax_1 ^ &var_38)
return result
