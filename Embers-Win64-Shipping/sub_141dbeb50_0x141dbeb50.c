// 函数: sub_141dbeb50
// 地址: 0x141dbeb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd6120(arg1, 0)
sub_142452bd0(arg1)
int64_t* var_18
int64_t* result = sub_141dcb520(arg1 + 0x18e, &var_18)
int64_t* rcx_2 = var_18

if (rcx_2 != 0)
    int64_t* arg_8 = arg1
    result = sub_1405a9f90(rcx_2, &arg_8)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*var_10 + 8))

return result
