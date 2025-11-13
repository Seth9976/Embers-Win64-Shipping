// 函数: sub_141b97310
// 地址: 0x141b97310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg4
void* rax_1 = arg4[1]
void* var_20 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void* var_18
sub_141b86f00(arg2, &var_18, *arg3, &var_28)
*arg1 = var_18
int64_t* var_10
arg1[1] = var_10

if (var_10 != 0)
    int32_t rax_3 = var_10[1].d
    var_10[1].d = rax_3
    
    if (rax_3 == 0)
        (**var_10)(var_10)
        int32_t temp0_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg1
