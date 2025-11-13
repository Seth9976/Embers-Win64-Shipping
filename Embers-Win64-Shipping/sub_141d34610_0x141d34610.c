// 函数: sub_141d34610
// 地址: 0x141d34610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x80) != 0)
    *(arg1 + 0x70) = arg2
    int32_t var_50_1 = arg2
    void* var_58 = arg1
    int128_t var_48
    __builtin_memset(&var_48, 0, 0x40)
    result = sub_141d36e90(&var_58)
    int128_t var_18
    int64_t* rbx_1 = var_18:8.q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    int128_t var_28
    int64_t* rbx_2 = var_28:8.q
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)
    
    int128_t var_38
    int64_t* rbx_3 = var_38:8.q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            result = (**rbx_3)(rbx_3)
            int32_t temp6_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                result = (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rbx_4 = var_48:8.q
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            result = (**rbx_4)(rbx_4)
            int32_t temp7_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp7_1 == 1)
                return (*(*rbx_4 + 8))(rbx_4, 1)

return result
