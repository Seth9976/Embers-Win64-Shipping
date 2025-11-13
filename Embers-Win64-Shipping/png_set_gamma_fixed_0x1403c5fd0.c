// 函数: png_set_gamma_fixed
// 地址: 0x1403c5fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
uint64_t result = __security_cookie ^ &var_48
uint64_t result_1 = result

if (arg1 != 0)
    result.b = *(arg1 + 0x25e)
    
    if (result.b == 3)
        *(arg1 + 0x15d) |= 0x20
    else
        result.b &= 4
        
        if (result.b != 0)
            *(arg1 + 0x15d) |= 0x20
        else
            int32_t var_24
            result = sub_1403c01b0(&var_24, arg2, arg3, 0x186a0)
            
            if (result.d == 0)
                *(arg1 + 0x15d) |= 0x20
            else
                result = sub_1403c0440(var_24)
                
                if (result.d != 0)
                    *(arg1 + 0x15d) |= 0x20
    
    *(arg1 + 0x29c) = arg3
    *(arg1 + 0x2a0) = arg2

__security_check_cookie(result_1 ^ &var_48)
return result
