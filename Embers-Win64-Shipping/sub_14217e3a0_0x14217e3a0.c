// 函数: sub_14217e3a0
// 地址: 0x14217e3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142168400()
void var_18
(*(*rax + 0x2a0))(rax, &var_18, arg3, arg2)
int64_t result = (*(*arg1 + 8))(arg1, &var_18)
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
