// 函数: sub_141be7470
// 地址: 0x141be7470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14065da90(arg1 + 0x40, arg2)
void* var_18
int64_t* result = sub_141bab3c0(arg1, &var_18)
void* rcx_2 = var_18

if (rcx_2 != 0)
    result = sub_140e251d0(rcx_2, arg2)

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
