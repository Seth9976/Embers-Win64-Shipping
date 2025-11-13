// 函数: sub_140da2a70
// 地址: 0x140da2a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e20dc8 == 0)
    void*** rax_1 = j_sub_140a82f30(0x128)
    void*** rsi_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        rsi_1 = sub_140d922d0(rax_1)
    
    int64_t* rax_3 = j_sub_140a82f30(0x18)
    int64_t* rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rbx_1 = &data_142d42ea8
        rbx_1[2] = rsi_1
    
    void**** rdi_1 = &rsi_1[2]
    
    if (rsi_1 == 0)
        rdi_1 = nullptr
    
    if (rdi_1 != 0)
        void* rax_4
        
        if (*rdi_1 != 0)
            rax_4 = rdi_1[1]
        
        if (*rdi_1 == 0 || rax_4 == 0 || *(rax_4 + 8) s<= 0)
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            *rdi_1 = rsi_1
            int64_t* rcx_2 = rdi_1[1]
            
            if (rbx_1 != rcx_2)
                if (rbx_1 != 0)
                    *(rbx_1 + 0xc) += 1
                    rcx_2 = rdi_1[1]
                
                if (rcx_2 != 0)
                    int32_t temp6_1 = *(rcx_2 + 0xc)
                    *(rcx_2 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rcx_2 + 8))(rcx_2, 1)
                
                rdi_1[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rdi_2 = data_143e20dd0
    data_143e20dc8 = rsi_1
    
    if (rbx_1 != rdi_2)
        data_143e20dd0 = rbx_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    else if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return data_143e20dc8
