// 函数: sub_142225ab0
// 地址: 0x142225ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1

if (*(*(*(arg1 + 0x30) + 0x88) + 0x134) == 1)
    int16_t* const rcx
    
    if (*(arg1 + 0xb8) == 0)
        rcx = &data_142d40450
    else
        rcx = *(arg1 + 0xb0)
    
    rax_1 = sub_140a54510(rcx, &data_142d40450)

int32_t result

if (*(*(*(arg1 + 0x30) + 0x88) + 0x134) != 1 || rax_1 != 0)
    int64_t* rcx_6 = *(arg1 + 0x30)
    result = (*(*rcx_6 + 0x2e8))(rcx_6, arg2)
    int64_t* rcx_7 = *(arg1 + 0x30)
    
    if (rcx_7 != 0)
        result = (*(*rcx_7 + 0x2f0))(rcx_7)
        int64_t* rcx_8 = *(arg1 + 0x30)
        
        if (rcx_8 != 0)
            result = (*(*rcx_8 + 0x2f8))(rcx_8, arg2)
            int64_t* rcx_9 = *(arg1 + 0x30)
            
            if (rcx_9 != 0)
                return (*(*rcx_9 + 0x300))(rcx_9)
else
    void var_38
    result = sub_140597df0(arg1 + 0xb0, 
        sub_140ac6680(_vfprintf_p_l(&var_38, Your connection to the host has been lost.", Engine")))
    int64_t* var_30
    
    if (var_30 != 0)
        result = var_30[1].d
        var_30[1].d -= 1
        
        if (result == 1)
            result = (**var_30)(var_30)
            int32_t rdi_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*var_30 + 8))(var_30, zx.q(rdi_1))

return result
