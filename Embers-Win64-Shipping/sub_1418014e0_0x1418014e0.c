// 函数: sub_1418014e0
// 地址: 0x1418014e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != 0)
    int64_t* rcx = *arg1
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[1].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *arg1
        
        int64_t var_38 = *arg3
        void* rax_3 = arg3[1]
        void* var_30_1 = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        int64_t var_28 = *arg2
        void* rax_5 = arg2[1]
        void* var_20_1 = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        char result = (*(*rcx_1 + 0x50))(rcx_1, &var_28, &var_38, arg4)
        int64_t* rbx_1 = arg2[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                int64_t rdx_1 = *rbx_1
                (*rdx_1)(rbx_1, rdx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rdi_1 = arg3[1]
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rbx_2 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))
        
        return result

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rdi_2 = arg3[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rbx_4 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rbx_4 == 1)
            (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_4))

return 0
