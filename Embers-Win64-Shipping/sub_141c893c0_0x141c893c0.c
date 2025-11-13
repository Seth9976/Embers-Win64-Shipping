// 函数: sub_141c893c0
// 地址: 0x141c893c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(**arg1)()
int64_t var_18
int32_t result = &var_18
int64_t* var_10 = nullptr

if (&arg1[0x13] != &var_18)
    arg1[0x13] = 0
    var_18 = 0
    result = sub_1405aeff0(&arg1[0x14], &var_10)
    int64_t* rcx_2 = var_10
    
    if (rcx_2 != 0)
        result = rcx_2[1].d
        rcx_2[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_1 = var_10
            result = (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_4 = var_10
                return (*(*rcx_4 + 8))(rcx_4, zx.q(rdi_1))

return result
