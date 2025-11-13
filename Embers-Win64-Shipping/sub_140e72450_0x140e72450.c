// 函数: sub_140e72450
// 地址: 0x140e72450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x3a0)
int64_t* rax = rdi

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 == 0)
        rdi = nullptr
        rax = nullptr
    else
        rdi[1].d = rax_1 + 1
        rax = rdi

if (rax != 0)
    void* rcx = *(arg1 + 0x398)
    
    if (rcx != 0)
        int64_t* var_18
        sub_140e152a0(rcx, &var_18)
        int64_t* rcx_1 = var_18
        
        if (rcx_1 != 0)
            char rax_4 = (*(*rcx_1 + 0x70))(rcx_1)
            int64_t* rcx_2 = var_18
            int64_t rax_5 = *rcx_2
            
            if (rax_4 == 0)
                (*(rax_5 + 0x40))(rcx_2)
            else
                (*(rax_5 + 0x48))(rcx_2)
        
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp3_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
