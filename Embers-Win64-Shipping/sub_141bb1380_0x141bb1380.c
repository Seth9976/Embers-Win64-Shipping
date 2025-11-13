// 函数: sub_141bb1380
// 地址: 0x141bb1380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_141bab3c0(arg1, &var_18)
int64_t rcx = var_18

if (rcx == 0)
    rcx = data_143e244b0

int64_t result = sub_140e12190(rcx)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return result
