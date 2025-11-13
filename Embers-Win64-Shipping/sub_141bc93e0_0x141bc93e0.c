// 函数: sub_141bc93e0
// 地址: 0x141bc93e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t result = sub_140cdd6a0(arg1)

if (result s< 0x1d3)
    result = sub_140db26d0(&arg1[0x7b])
    
    if (result.b != 0)
        sub_140d962e0(&arg1[0x2e], &arg1[0x7b])
        void var_58
        result = sub_140693420(&arg1[0x7b], sub_140d93b50(&var_58))
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                result = (**var_20)(var_20)
                int32_t temp1_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*var_20 + 8))(var_20, 1)

return result
