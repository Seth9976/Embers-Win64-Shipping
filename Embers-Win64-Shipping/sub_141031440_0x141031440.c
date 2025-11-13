// 函数: sub_141031440
// 地址: 0x141031440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14101f080(*(arg1 + 0x138) + 0x5e8, arg1)
void** var_18
int32_t result = sub_141022330(arg1, &var_18, 0)
int64_t* var_10

if (var_10 != 0)
    result = *(var_10 + 0x14)
    *(var_10 + 0x14) -= 1
    
    if (result == 1)
        return sub_141011360(var_10, result.b) __tailcall

return result
