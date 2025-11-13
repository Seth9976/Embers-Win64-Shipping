// 函数: sub_140e676b0
// 地址: 0x140e676b0
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
    void* rbp_1 = *(arg1 + 0x398)
    
    if (rbp_1 != 0)
        int64_t* var_18
        sub_140e152a0(rbp_1, &var_18)
        int64_t* rcx_1 = var_18
        char rax_4
        
        if (rcx_1 != 0)
            rax_4 = (*(*rcx_1 + 0x70))(rcx_1)
        
        if (rcx_1 == 0 || rax_4 == 0)
            if (sub_140e19820(rbp_1) != 0)
                int64_t* rcx_6 = *(arg1 + 0x430)
                
                if ((*(*rcx_6 + 0x250))(rcx_6) == 0)
                    int64_t* rcx_7 = *(arg1 + 0x430)
                    char rax_14 = (*(*rcx_7 + 0x1c8))(rcx_7)
                    int64_t rbx_5 = *(arg1 + 0x3a8)
                    
                    if (rax_14 == 0)
                        result = rbx_5 + 0x288
                    else
                        result = rbx_5 + 0x310
                else
                    result = *(arg1 + 0x3a8) + 0x398
            else
                result = *(arg1 + 0x3a8) + 0x420
        else if (sub_140e19820(rbp_1) != 0)
            int64_t* rcx_3 = *(arg1 + 0x430)
            
            if ((*(*rcx_3 + 0x250))(rcx_3) == 0)
                int64_t* rcx_4 = *(arg1 + 0x430)
                char rax_9 = (*(*rcx_4 + 0x1c8))(rcx_4)
                int64_t rbx_2 = *(arg1 + 0x3a8)
                
                if (rax_9 == 0)
                    result = rbx_2 + 0x500
                else
                    result = rbx_2 + 0x588
            else
                result = *(arg1 + 0x3a8) + 0x610
        else
            result = *(arg1 + 0x3a8) + 0x420
        
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
