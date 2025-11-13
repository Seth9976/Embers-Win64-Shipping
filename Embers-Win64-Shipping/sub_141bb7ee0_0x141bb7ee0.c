// 函数: sub_141bb7ee0
// 地址: 0x141bb7ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
int64_t* result = sub_141bab3c0(arg1, &var_18)

if (var_18 != 0)
    sub_141bf4410(arg1)
    result = sub_140e19ef0(var_18, arg2)

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
