// 函数: sub_141ed5680
// 地址: 0x141ed5680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result

if (arg2 == 0)
    result = (*(*arg1 + 0x2b0))()

if (arg2 != 0 || result == 1)
    int512_t zmm1
    zmm1.o = zx.o(0)
    result = (*(*arg1 + 0x530))(arg1, zmm1)
    
    if ((*(arg1 + 0x8a) & 1) != 0)
        int64_t* var_18
        result = sub_141c5eb40(arg1 + 0x8d, &var_18)
        int64_t* rcx_2 = var_18
        
        if (rcx_2 != 0)
            int64_t* var_28 = arg1
            char var_20_1 = arg2
            result = sub_1405a9f90(rcx_2, &var_28)
        
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                result = (**var_10)(var_10)
                int32_t temp1_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*var_10 + 8))(var_10, 1)

return result
