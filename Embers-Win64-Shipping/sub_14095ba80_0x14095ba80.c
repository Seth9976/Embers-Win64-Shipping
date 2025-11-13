// 函数: sub_14095ba80
// 地址: 0x14095ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = 0
int64_t* var_18
int64_t entry_rdx
int32_t result = sub_1409633d0(&var_18, entry_rdx, 0)
int64_t* rcx_1 = var_18

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x378))(rcx_1)

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
