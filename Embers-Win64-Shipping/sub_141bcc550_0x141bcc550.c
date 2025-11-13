// 函数: sub_141bcc550
// 地址: 0x141bcc550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t* rax = sub_141b6d970(arg1, &var_18)
*arg2 = *rax
void* rcx_1 = rax[1]
arg2[1] = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
