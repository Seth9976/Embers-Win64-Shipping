// 函数: sub_141d91c10
// 地址: 0x141d91c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x20))

if (result.d == 2)
    void** var_38
    sub_141d90b00(&var_38, arg1 + 0x28)
    int64_t var_20
    char var_c
    
    if (var_c != 0)
        int32_t var_30
        *(arg1 + 0x48) = var_30
        int32_t var_2c
        *(arg1 + 0x4c) = var_2c
        int32_t var_28
        *(arg1 + 0x50) = var_28
        sub_140597df0(arg1 + 0x58, &var_20)
        int32_t var_10
        *(arg1 + 0x68) = var_10
        *(arg1 + 0x6c) = var_c
    
    int64_t rcx_2 = var_20
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    result = sx.q(*(arg1 + 0x68))
    
    if (result s> *(arg1 + 0x70))
        int64_t* rcx_3 = *(arg1 + 0x10)
        int64_t rax_6 = (*(*rcx_3 + 0x20))(rcx_3)
        result = sub_141d90d30(arg1 - 8)
        int64_t* rcx_5 = *(arg1 + 0x10)
        
        if (rcx_5 != 0)
            int64_t r8_1 = *rcx_5
            return (*(r8_1 + 0x178))(rcx_5, rax_6, r8_1)
else if (result.d == 1)
    int64_t* rcx_6 = *(arg1 + 0x10)
    
    if (rcx_6 != 0)
        result = (*(*rcx_6 + 0x20))(rcx_6)
        
        if (sx.q(*(arg1 + 0x68)) s< result)
            int64_t* rcx_8 = *(arg1 + 0x10)
            int32_t rax_9 = (*(*rcx_8 + 0x20))(rcx_8)
            int64_t* rcx_9 = *(arg1 + 0x10)
            *(arg1 + 0x68) = rax_9
            (*(*rcx_9 + 0x1b0))(rcx_9)
            return sub_141d91d20(arg1 + 0x28, arg1 + 0x40) __tailcall

return result
