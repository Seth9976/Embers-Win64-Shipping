// 函数: sub_1426ce840
// 地址: 0x1426ce840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (arg2 != 0)
    int64_t* rax_1 = j_sub_140a82f30(0x38)
    int64_t* rsi_1 = rax_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        *rax_1 = 0
        rax_1[1] = 0
        *(rax_1 + 0x14) = 0
        rax_1[4] = 0
        rax_1[5].d = 0
        rax_1[6].d = 0xffffffff
        *(rax_1 + 0x34) = 0
    
    rsi_1[2] = arg3
    rsi_1[3].d = arg4
    *(rsi_1 + 0x1c) = 1
    sub_1407473e0(&rsi_1[4], arg5)
    sub_1426e8150(rsi_1, arg2)
    void*** rax_2 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rbx_1 = &data_143478000
        rbx_1[2] = rsi_1
    
    void* rax_3
    
    if (*rsi_1 != 0)
        rax_3 = rsi_1[1]
    
    if (*rsi_1 == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rsi_1 = rsi_1
        int64_t* rcx_2 = rsi_1[1]
        
        if (rbx_1 != rcx_2)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_2 = rsi_1[1]
            
            if (rcx_2 != 0)
                int32_t temp2_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
            
            rsi_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    
    void var_28
    
    if (arg1 == &var_28)
    label_1426ce9b2:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
    else
        *arg1 = rsi_1
        void*** rdi_1 = arg1[1]
        
        if (rbx_1 == rdi_1)
            goto label_1426ce9b2
        
        arg1[1] = rbx_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp6_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*rdi_1)[1](rdi_1, 1)

return arg1
