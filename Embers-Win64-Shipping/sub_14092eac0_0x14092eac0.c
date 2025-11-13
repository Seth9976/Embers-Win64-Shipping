// 函数: sub_14092eac0
// 地址: 0x14092eac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x1e8)
int64_t* var_18
int32_t result = (*(*rcx + 0x68))(rcx, &var_18)

if (var_18 != 0)
    int64_t* rcx_1 = *(arg1 + 0x1e8)
    char rax_2 = (*(*rcx_1 + 0x130))(rcx_1, arg2)
    int64_t* rcx_2 = var_18
    int64_t rax_3 = *rcx_2
    
    if (rax_2 != 0)
        result = (*(rax_3 + 8))(rcx_2)
    else
        result = (*(rax_3 + 0x58))(rcx_2, arg2)

int64_t* var_10

if (var_10 != 0)
    result = var_10[1].d
    var_10[1].d -= 1
    
    if (result == 1)
        result = (**var_10)(var_10)
        int32_t rdi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return result
