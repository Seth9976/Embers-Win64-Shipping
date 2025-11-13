// 函数: sub_140f4a7f0
// 地址: 0x140f4a7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x308)

if (rcx != 0)
    int64_t* var_18
    sub_140e152a0(rcx, &var_18)
    int64_t* rcx_1 = var_18
    
    if (rcx_1 != 0)
        if ((*(*rcx_1 + 0x68))(rcx_1) == 2 || *(arg1 + 0x320) == 0)
        label_140f4a876:
            int64_t* rcx_4 = var_18
            char rax_8 = (*(*rcx_4 + 0x70))(rcx_4)
            int64_t* rcx_5 = var_18
            int64_t rax_9 = *rcx_5
            
            if (rax_8 == 0)
                (*(rax_9 + 0x40))(rcx_5)
            else
                (*(rax_9 + 0x48))(rcx_5)
        else
            int64_t* rcx_2 = *(arg1 + 0x318)
            
            if (rcx_2 == 0)
                goto label_140f4a876
            
            if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
                goto label_140f4a876
            
            if (*(arg1 + 0x320) == 0)
                (*(*nullptr + 0x48))(0)
            else
                int64_t* rcx_3 = *(arg1 + 0x318)
                (*(*rcx_3 + 0x48))(rcx_3)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
