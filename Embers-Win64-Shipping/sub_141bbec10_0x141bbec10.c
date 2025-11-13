// 函数: sub_141bbec10
// 地址: 0x141bbec10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* rcx = *(arg1 + 0x150)

if (rcx != 0)
    int64_t* var_18
    (*(*(rcx + 0x4f8) + 0xd0))(rcx + 0x4f8, &var_18, &arg_10)
    int64_t* rcx_2 = var_18
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x38))(rcx_2) s> 0)
        int64_t* rcx_4 = *(arg1 + 0x150) + 0x4f8
        char rax_5
        int64_t r8_2
        rax_5, r8_2 = (*(*rcx_4 + 0x60))(rcx_4, &arg_10)
        r8_2.b = rax_5 == 0
        int64_t* rcx_6 = *(arg1 + 0x150) + 0x4f8
        (*(*rcx_6 + 0x50))(rcx_6, arg_10, r8_2)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

int64_t arg_8 = arg_10
return sub_1405a9f90(arg1 + 0x100, &arg_8)
