// 函数: sub_142c5a130
// 地址: 0x142c5a130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t result = __security_cookie ^ &var_48
int64_t result_1 = result

if (*(arg1 + 0x594) != 0xffffffff && *(arg1 + 0xb0) != 0)
    if (*(arg1 + 0xd0) != 0)
        sub_142c52530(arg1, 3, 2)
    
    __time64_t _Time
    _time64(&_Time)
    int64_t* rcx_1 = *(arg1 + 0xb0)
    int32_t var_20 = *(arg1 + 0x594)
    __time64_t _Time_1 = _Time
    result = sub_142c66e60(rcx_1, &var_20, sub_142c5a8c0)
    
    if (*(arg1 + 0xd0) != 0)
        result = sub_142c52570(arg1, 3)

__security_check_cookie(result_1 ^ &var_48)
return result
