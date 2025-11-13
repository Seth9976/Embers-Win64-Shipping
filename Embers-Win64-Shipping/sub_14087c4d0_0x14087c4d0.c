// 函数: sub_14087c4d0
// 地址: 0x14087c4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
sub_140a96170(&var_38)
void var_20
sub_140a96170(&var_20)
sub_14065da90(&var_38, arg2)
sub_14065da90(&var_20, arg3)
int32_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143ce53b8), &var_38)
int64_t* var_18

if (var_18 != 0)
    result = var_18[1].d
    var_18[1].d -= 1
    
    if (result == 1)
        (**var_18)(var_18)
        result = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_18 + 8))(var_18, 1)

int64_t* var_30

if (var_30 != 0)
    result = var_30[1].d
    var_30[1].d -= 1
    
    if (result == 1)
        result = (**var_30)(var_30)
        int32_t rdi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_30 + 8))(var_30, zx.q(rdi_1))

return result
