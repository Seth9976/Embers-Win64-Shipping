// 函数: sub_140d7de90
// 地址: 0x140d7de90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)
int64_t* var_18
(*(*rcx + 0x58))(rcx, &var_18)
int64_t* rcx_1 = var_18
int64_t rax_2

if (rcx_1 == 0)
    rax_2 = 0
else
    rax_2 = (*(*rcx_1 + 0xc0))(rcx_1)

*arg3 = rax_2
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return 0
