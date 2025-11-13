// 函数: sub_14093e160
// 地址: 0x14093e160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
int32_t result = (*(*arg1 + 0xa0))(arg1, &var_18)
int64_t* rcx = var_18

if (rcx != 0)
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    (*(*rcx + 0x30))(rcx, arg2, &var_28)
    result = sub_14091aa80(&var_28)

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
