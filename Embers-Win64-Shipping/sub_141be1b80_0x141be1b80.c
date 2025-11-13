// 函数: sub_141be1b80
// 地址: 0x141be1b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
int32_t* result = __security_cookie ^ &var_18
int32_t* result_1 = result
void* rdx = *(arg1 + 0x58)
*(arg1 + 0x4c) = arg2

if (rdx != 0)
    char var_14_1
    
    if (arg2 f!= 0f)
        var_18 = arg2
        var_14_1 = 1
    else
        var_14_1 = 0
    
    int32_t zmm0
    
    zmm0 = var_14_1 == 0 ? var_18 : var_18
    
    result = rdx + 0x50
    
    if (&var_18 != result)
        if (result[1].b != 0)
            result[1].b = 0
        
        if (var_14_1 != 0)
            *result = zmm0
            result[1].b = 1

__security_check_cookie(result_1 ^ &var_18)
return result
