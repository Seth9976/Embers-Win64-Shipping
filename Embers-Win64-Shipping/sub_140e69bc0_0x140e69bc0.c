// 函数: sub_140e69bc0
// 地址: 0x140e69bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x3a0)
int64_t result = 0
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
        char rax_4
        
        if (rcx_1 != 0)
            rax_4 = (*(*rcx_1 + 0xc8))(rcx_1)
        
        if (rcx_1 == 0 || rax_4 == 0)
            result = *(arg1 + 0x3a8) + 0xcd8
        else
            result = *(arg1 + 0x3a8) + 0xc50
        
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp3_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        int64_t r8_1 = *rdi
        (*r8_1)(rdi, arg2, r8_1)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rdi
            (*(r8_2 + 8))(rdi, 1, r8_2)

return result
