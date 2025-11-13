// 函数: sub_1417ed350
// 地址: 0x1417ed350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141f08a30(arg1)

if (arg1[0x92] != 0)
    EnterCriticalSection(&data_143ef96b0)
    *(arg1[0x92] + 0x18) = 0
    LeaveCriticalSection(&data_143ef96b0)
    int64_t var_18
    result = &var_18
    int64_t* var_10 = nullptr
    
    if (&arg1[0x92] != &var_18)
        arg1[0x92] = 0
        var_18 = 0
        result = sub_1405aeff0(&arg1[0x93], &var_10)
        int64_t* rcx_1 = var_10
        
        if (rcx_1 != 0)
            result = rcx_1[1].d
            rcx_1[1].d -= 1
            
            if (result == 1)
                int64_t* rbx_2 = var_10
                result = (**rbx_2)(rbx_2)
                int32_t rdi_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    int64_t* rcx_3 = var_10
                    return (*(*rcx_3 + 8))(rcx_3, zx.q(rdi_1))

return result
