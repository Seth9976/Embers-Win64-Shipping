// 函数: sub_140d9a850
// 地址: 0x140d9a850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
sub_140d9a770(&var_18, arg2)
void* result = sub_140d9a5d0(arg1, &var_18)
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
