// 函数: sub_140eec900
// 地址: 0x140eec900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18
void**** rax_1 = sub_140ef74d0(&var_18, arg1 + 0x18, arg1 + 0x78, arg1 + 0x88, arg1 + 0x2f0)
*arg2 = *rax_1
void* rcx_2 = rax_1[1]
arg2[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

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
