// 函数: sub_14238b5c0
// 地址: 0x14238b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    int64_t rbx_3 = data_143f59860
    
    if (rbx_3 != 0)
        sub_1405a46b0(&data_1439aa958, rbx_3)
        sub_1405a46b0(&data_1439aa970, rbx_3)
        int64_t* rbx_4 = data_143f59868
        data_143f59860 = 0
        
        if (rbx_4 != 0)
            data_143f59868 = 0
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp1_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
else if (data_143f59860 == 0)
    int64_t* rax_1 = j_sub_140a82f30(0x10)
    int64_t* rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        *rax_1 = 0
        rax_1[1] = 0
    
    void*** rax_2 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rbx_1 = &data_143287ed0
        rbx_1[2] = rdi_1
    
    if (rdi_1 != 0)
        void* rax_3
        
        if (*rdi_1 != 0)
            rax_3 = rdi_1[1]
        
        if (*rdi_1 == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            *rdi_1 = rdi_1
            int64_t* rcx = rdi_1[1]
            
            if (rbx_1 != rcx)
                if (rbx_1 != 0)
                    *(rbx_1 + 0xc) += 1
                    rcx = rdi_1[1]
                
                if (rcx != 0)
                    int32_t temp8_1 = *(rcx + 0xc)
                    *(rcx + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rcx + 8))(rcx, 1)
                
                rdi_1[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp7_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*rbx_1)[1](rbx_1, 1)
    
    data_143f59860 = rdi_1
    void*** rdi_2 = data_143f59868
    
    if (rbx_1 != rdi_2)
        data_143f59868 = rbx_1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp5_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rdi_2)[1](rdi_2, 1)
    else if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    int64_t* rbx_2 = data_143f59860
    int64_t* var_18
    int64_t* rax_10 = sub_14237abb0(&var_18, rbx_2, sub_142393770)
    void arg_10
    
    if (rax_10[1].d != 0 && *rax_10 != 0)
        sub_1408d6c30(&data_1439aa958, &arg_10, rax_10)
    
    int32_t var_10
    int64_t* rax_12
    
    if (var_10 == 0)
        rax_12 = var_18
    label_14238b795:
        
        if (rax_12 != 0)
            sub_140a74f90(rax_12)
    else
        int64_t* rcx_7 = var_18
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7, 0)
            rax_12 = var_18
            
            if (rax_12 != 0)
                rax_12 = sub_140a84c80(rax_12, 0, 0)
                var_18 = rax_12
            
            var_10 = 0
            goto label_14238b795
    int64_t* rax = sub_14237abb0(&var_18, rbx_2, sub_142392c50)
    
    if (rax[1].d != 0 && *rax != 0)
        sub_1408d6c30(&data_1439aa970, &arg_10, rax)
    
    if (var_10 == 0)
        rax = var_18
    label_14238b81a:
        
        if (rax != 0)
            sub_140a74f90(rax)
    else
        int64_t* rcx_11 = var_18
        
        if (rcx_11 != 0)
            (*(*rcx_11 + 0x38))(rcx_11, 0)
            rax = var_18
            
            if (rax != 0)
                rax = sub_140a84c80(rax, 0, 0)
                var_18 = rax
            
            int32_t var_10_1 = 0
            goto label_14238b81a
