// 函数: sub_140f8c140
// 地址: 0x140f8c140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140f7ac20(&arg1[0xd1], arg2)

if (result == 0)
    arg1[0xd1].d = *arg2
    *(arg1 + 0x68c) = arg2[1].b
    sub_140692f90(&arg1[0xd2], &arg2[2])
    int64_t* rcx_2 = *arg1
    void var_18
    result = sub_140e19ef0(*(*(*rcx_2 + 0x80))(rcx_2, &var_18), 5)
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
