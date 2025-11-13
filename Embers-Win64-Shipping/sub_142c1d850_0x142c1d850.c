// 函数: sub_142c1d850
// 地址: 0x142c1d850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
uint64_t var_150
__builtin_memset(&var_150, 0, 0x14)
int32_t var_148
int32_t var_138[0x40]
char result
int32_t var_140

if (sub_142c22240(arg1, arg4, arg5, *arg10, arg10[2], &var_148, &var_138, var_150) == 0)
    result = 0
else if (sub_142c22080(arg1, arg2, arg3, *arg10, arg10[1], &var_140) == 0)
    result = 0
else
    int32_t rsi_1 = var_148
    int32_t* var_160_1
    var_160_1.d = rsi_1
    int32_t var_144
    
    if (sub_142c224a0(arg1, arg6, arg7, *arg10, arg10[3], var_160_1.d, &var_144) == 0)
        result = 0
    else
        sub_142bf5b60(*(arg1 + 0x90), var_140, var_144)
        var_160_1.d = rsi_1
        result = 1
        
        if (sub_142c1cf80(arg1, arg4, &var_138, arg8, arg9, var_160_1.d) == 0)
            result = 0
__security_check_cookie(rax_1 ^ &var_188)
return result
