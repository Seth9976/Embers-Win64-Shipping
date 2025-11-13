// 函数: sub_14187b190
// 地址: 0x14187b190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
int32_t result = sub_14185baa0(&var_18, arg1)
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
