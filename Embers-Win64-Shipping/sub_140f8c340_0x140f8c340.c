// 函数: sub_140f8c340
// 地址: 0x140f8c340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xd4].d = *arg2
*(arg1 + 0x6a4) = arg2[1].b
sub_140692f90(&arg1[0xd5], &arg2[2])
int64_t* rcx_1 = *arg1
void var_18
int64_t result = sub_140e19ef0(*(*(*rcx_1 + 0x80))(rcx_1, &var_18), 5)
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
