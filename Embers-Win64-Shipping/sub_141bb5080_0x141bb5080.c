// 函数: sub_141bb5080
// 地址: 0x141bb5080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
sub_140a96170(&var_28)
sub_14065da90(&var_28, arg2)
char r8
char var_10 = r8
int32_t result = sub_1405a9f90(arg1 + 0xc60, &var_28)
int64_t* var_20

if (var_20 != 0)
    result = var_20[1].d
    var_20[1].d -= 1
    
    if (result == 1)
        result = (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
