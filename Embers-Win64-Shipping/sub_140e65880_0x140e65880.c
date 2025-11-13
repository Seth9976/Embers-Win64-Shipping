// 函数: sub_140e65880
// 地址: 0x140e65880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x3a0)
int64_t result = 0
int64_t* rax = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
        rax = nullptr
    else
        rbx[1].d = rax_1 + 1
        rax = rbx

if (rax != 0)
    void* rcx = *(arg1 + 0x398)
    
    if (rcx != 0)
        void var_18
        sub_140e152a0(rcx, &var_18)
        int64_t* rcx_1 = *(arg1 + 0x440)
        
        if ((*(*rcx_1 + 0x250))(rcx_1) == 0)
            int64_t* rcx_2 = *(arg1 + 0x440)
            char rax_6 = (*(*rcx_2 + 0x1c8))(rcx_2)
            int64_t rdi_1 = *(arg1 + 0x3a8)
            
            if (rax_6 == 0)
                result = rdi_1 + 0x778
            else
                result = rdi_1 + 0x800
        else
            result = *(arg1 + 0x3a8) + 0x888
        
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp3_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8_1 = *rbx
        (*r8_1)(rbx, arg2, r8_1)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

return result
