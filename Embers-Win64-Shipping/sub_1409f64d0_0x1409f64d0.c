// 函数: sub_1409f64d0
// 地址: 0x1409f64d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140cd7d40(arg1)
int64_t* rcx = *(arg1 + 0x68)

if (rcx != 0)
    (*(*rcx + 0xb8))(rcx)
    int64_t var_18
    result = &var_18
    int64_t* var_10 = nullptr
    
    if (arg1 + 0x68 != &var_18)
        *(arg1 + 0x68) = 0
        var_18 = 0
        result = sub_1405aeff0(arg1 + 0x70, &var_10)
        int64_t* rcx_2 = var_10
        
        if (rcx_2 != 0)
            result = rcx_2[1].d
            rcx_2[1].d -= 1
            
            if (result == 1)
                int64_t* rbx_2 = var_10
                result = (**rbx_2)(rbx_2)
                int32_t rdi_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    int64_t* rcx_4 = var_10
                    return (*(*rcx_4 + 8))(rcx_4, zx.q(rdi_1))

return result
