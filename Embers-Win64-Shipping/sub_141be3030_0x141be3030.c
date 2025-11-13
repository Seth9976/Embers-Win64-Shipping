// 函数: sub_141be3030
// 地址: 0x141be3030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
uint64_t result = __security_cookie ^ &var_58
uint64_t result_1 = result
int64_t* r8 = *(arg1 + 0x308)
*(arg1 + 0x2cd) = arg2

if (r8 != 0)
    int32_t var_18
    char var_14_1
    
    if (arg2 == 0)
        var_18 = *(arg1 + 0x2c8)
        var_14_1 = 1
    else
        var_14_1 = 0
    
    char var_34_1 = 0
    int32_t var_38
    
    if (var_14_1 != 0)
        var_38 = var_18
        char var_34_2 = 1
    
    char var_30_1 = 1
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    result = sub_140f8c6f0(r8, &var_38)

__security_check_cookie(result_1 ^ &var_58)
return result
