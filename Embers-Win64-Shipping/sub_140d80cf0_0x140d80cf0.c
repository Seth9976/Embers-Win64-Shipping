// 函数: sub_140d80cf0
// 地址: 0x140d80cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x50)

if (rax == 0 || arg2 != rax)
    return 0x8000ffff

if (arg3 != 0)
    int64_t rax_1 = *arg3
    int64_t* var_18 = nullptr
    (*rax_1)(arg3, &data_1434cb310, &var_18)
    int64_t* rcx_1 = var_18
    int32_t arg_8
    int32_t arg_20
    
    if ((*(*rcx_1 + 0xc8))(rcx_1, &arg_20, &arg_8) s< 0)
        int64_t* rcx_2 = var_18
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x10))(rcx_2)
        
        return 0x80004005
    
    int64_t* rcx_3 = *(arg1 + 0x10)
    (*(*rcx_3 + 0x68))(rcx_3, zx.q(arg_20), zx.q(arg_8))
    int64_t* rcx_4 = var_18
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x10))(rcx_4)

return 0
