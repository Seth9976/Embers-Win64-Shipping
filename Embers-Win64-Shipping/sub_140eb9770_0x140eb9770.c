// 函数: sub_140eb9770
// 地址: 0x140eb9770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != 0)
    int64_t* rcx = *arg1
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[1].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *arg1
        
        int64_t var_18 = *arg2
        void* rax_3 = arg2[1]
        void* var_10 = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        char rax_5 = (*(*rcx_1 + 0x50))(rcx_1, &var_18)
        int64_t* rbx_1 = arg2[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                int64_t rdx_1 = *rbx_1
                (*rdx_1)(rbx_1, rdx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        return zx.q(rax_5)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return 0
