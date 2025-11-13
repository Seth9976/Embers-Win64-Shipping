// 函数: sub_14092e650
// 地址: 0x14092e650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x1e8)
int32_t result = (*(*rcx + 0x118))(rcx)

if (result.b == 0)
    int64_t* rcx_1 = *(arg1 + 0x1e8)
    int64_t* var_18
    result = (*(*rcx_1 + 0x68))(rcx_1, &var_18)
    int64_t* rcx_2 = var_18
    
    if (rcx_2 != 0)
        int32_t rbx_1 = 0
        
        while (true)
            result = (*(*rcx_2 + 0x38))(arg2, zx.q(rbx_1))
            rbx_1 += 1
            
            if (rbx_1 s>= 4)
                break
            
            rcx_2 = var_18
    
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
