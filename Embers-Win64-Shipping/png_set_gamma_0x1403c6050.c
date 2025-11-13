// 函数: png_set_gamma
// 地址: 0x1403c6050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t rax_2 = sub_1403c0150(arg1, arg3.q, "png_set_gamma file gamma")
int32_t result = sub_1403c0150(arg1, arg2.q, "png_set_gamma screen gamma")

if (arg1 != 0)
    int32_t result_1 = result
    result.b = *(arg1 + 0x25e)
    
    if (result.b == 3)
        *(arg1 + 0x15d) |= 0x20
    else
        result.b &= 4
        
        if (result.b != 0)
            *(arg1 + 0x15d) |= 0x20
        else
            int32_t var_34
            result = sub_1403c01b0(&var_34, result_1, rax_2, 0x186a0)
            
            if (result == 0)
                *(arg1 + 0x15d) |= 0x20
            else
                result = sub_1403c0440(var_34)
                
                if (result != 0)
                    *(arg1 + 0x15d) |= 0x20
    
    *(arg1 + 0x29c) = rax_2
    *(arg1 + 0x2a0) = result_1

__security_check_cookie(rax_1 ^ &var_58)
return result
