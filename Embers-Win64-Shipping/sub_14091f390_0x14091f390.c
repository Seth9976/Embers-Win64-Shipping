// 函数: sub_14091f390
// 地址: 0x14091f390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
void arg_8

if (arg3[1].d != 0)
    int64_t* rcx = *arg3
    
    if (rcx != 0)
        int64_t* var_28 = nullptr
        int32_t var_20_1 = 0
        
        if (arg3 != &var_28)
            (*(*rcx + 0x40))(rcx, &var_28)
        
        arg2.b = 1
        sub_140599630(arg1 + 0x20, arg2.b)
        
        if (var_20_1 != 0)
            int64_t* rcx_2 = var_28
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x30))(rcx_2, &arg_8)
        
        int64_t rbp_1 = sx.q(*(arg1 + 0x28))
        int32_t rax_3 = (rbp_1 + 1).d
        *(arg1 + 0x28) = rax_3
        
        if (rax_3 s> *(arg1 + 0x2c))
            sub_1405a4f90(arg1 + 0x20)
        
        int64_t** rcx_6 = (rbp_1 << 4) + *(arg1 + 0x20)
        *rcx_6 = nullptr
        *rcx_6 = var_28
        var_28 = nullptr
        rcx_6[1].d = var_20_1
        int64_t* rcx_7 = var_28
        int32_t var_20_2 = 0
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)

bool cond:0 = arg3[1].d == 0
*result = 0

if (not(cond:0))
    int64_t* rcx_8 = *arg3
    
    if (rcx_8 != 0)
        *result = *(*(*rcx_8 + 0x30))(rcx_8, &arg_8)

return result
