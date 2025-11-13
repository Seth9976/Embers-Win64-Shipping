// 函数: sub_14285e030
// 地址: 0x14285e030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_70 = arg3
int32_t var_78 = 0
void* rsi = arg2
int64_t result

if (arg2 != 0)
label_14285e0a3:
    
    if (sub_142882cb0(arg1) == 0)
        result = 0
    else
        var_78:3.b = var_70.b
        var_78.b = 0xfe
        
        if (sub_142882640(arg1, &var_78, 4) == 0)
            result = 0
        else if (sub_142882640(arg1, rsi, var_70) == 0)
            result = 0
        else if (arg4 == 0)
            result = 1
        else if (sub_142882640(arg1, arg4, arg5) == 0)
            result = 0
        else if (sub_142882640(arg1, *(*(arg1 + 0x88) + 8), *(*(arg1 + 0xa8) + 0x228) + 4) == 0)
            result = 0
        else
            result = 1
else
    void var_68
    rsi = &var_68
    var_70 = 0
    
    if (sub_1428821e0(arg1, arg2.d) == 0)
        result = 0
    else
        if (sub_142851d80(arg1, &var_68, 0x40, &var_70) != 0)
            goto label_14285e0a3
        
        result = 0

__security_check_cookie(rax_1 ^ &var_98)
return result
