// 函数: sub_140800e50
// 地址: 0x140800e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2
void** const rax_2
void*** rdi_1

if (result != data_143ce2e08 || arg2[3].d != 3 || arg2[4].d != 3)
    int64_t (* rax_4)(void* arg1, void* arg2)
    
    if (result == data_143ce2e18 && arg2[3].d == 0 && arg2[4].d == 3)
        void*** rax_3 = sub_140a84c80(0, 0x30, 0)
        rdi_1 = rax_3
        
        if (rax_3 == 0)
            goto label_140800fc4
        
        *rdi_1 = &data_142dc0378
        sub_140d3a3a0(&rdi_1[1], arg1)
        rax_4 = sub_1407efe40
    label_140800fad:
        rdi_1[2] = rax_4
        rdi_1[4] = sub_140a387b0()
        rax_2 = &data_142dc03d0
        goto label_140800fc1
    
    if (result == data_143ce2e20 && arg2[3].d == 0 && arg2[4].d == 6)
        void*** rax_5 = sub_140a84c80(0, 0x30, 0)
        rdi_1 = rax_5
        
        if (rax_5 == 0)
            goto label_140800fc4
        
        *rdi_1 = &data_142dc0378
        sub_140d3a3a0(&rdi_1[1], arg1)
        rax_4 = sub_1407efae0
        goto label_140800fad
    
    if (result == data_143ce2e10 && arg2[3].d == 0 && arg2[4].d == 3)
        void*** rax_6 = sub_140a84c80(0, 0x30, 0)
        rdi_1 = rax_6
        
        if (rax_6 == 0)
            goto label_140800fc4
        
        *rdi_1 = &data_142dc0378
        sub_140d3a3a0(&rdi_1[1], arg1)
        rax_4 = sub_1407efff0
        goto label_140800fad
else
    void*** rax = sub_140a84c80(0, 0x20, 0)
    rdi_1 = rax
    
    if (rax == 0)
        goto label_140800fc4
    
    rdi_1[1] = arg1
    *rdi_1 = &data_142dd1738
    rdi_1[3] = sub_140a387b0()
    rax_2 = &data_142dd1790
label_140800fc1:
    *rdi_1 = rax_2
label_140800fc4:
    void var_18
    result = &var_18
    
    if (&var_18 != arg4)
        if (rdi_1 != 0)
            result = (*rdi_1)[8](rdi_1, arg4)
        else if (arg4[1].d != 0)
            void* rcx_4 = *arg4
            
            if (rcx_4 != 0)
                result = (*(*rcx_4 + 0x38))(rcx_4, 0)
                void* rcx_5 = *arg4
                
                if (rcx_5 != 0)
                    result = sub_140a84c80(rcx_5, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rdi_1 != 0)
        (*rdi_1)[7](rdi_1, 0)
        result = sub_140a84c80(rdi_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
return result
