// 函数: sub_141ba6650
// 地址: 0x141ba6650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t* rax_1 = (*(arg1 + 0x10))(sub_140d3c6e0(arg1 + 8), &var_18, arg3)
*arg2 = *rax_1
void* rcx_3 = rax_1[1]
arg2[1] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

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
