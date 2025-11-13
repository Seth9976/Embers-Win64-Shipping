// 函数: sub_140e11c60
// 地址: 0x140e11c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
(*(*arg1 + 8))(arg1, &var_18, arg2)
int64_t* rcx = var_18
int32_t rdi

if (rcx == 0)
    rdi = -1
else
    rdi = (*(*rcx + 8))(rcx)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return zx.q(rdi)
