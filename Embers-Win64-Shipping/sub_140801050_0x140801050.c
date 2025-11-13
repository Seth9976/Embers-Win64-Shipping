// 函数: sub_140801050
// 地址: 0x140801050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2
void** const rax_2
void*** rdi_1

if (result == data_143ce2e28)
    void*** rax = sub_140a84c80(0, 0x20, 0)
    rdi_1 = rax
    
    if (rax == 0)
        goto label_1408010fe
    
    rdi_1[1] = arg1
    *rdi_1 = &data_142dd17f8
    rdi_1[3] = sub_140a387b0()
    rax_2 = &data_142dd1850
label_1408010fb:
    *rdi_1 = rax_2
label_1408010fe:
    void var_18
    result = &var_18
    
    if (&var_18 != arg4)
        if (rdi_1 != 0)
            result = (*rdi_1)[8](rdi_1, arg4)
        else if (arg4[1].d != 0)
            void* rcx_2 = *arg4
            
            if (rcx_2 != 0)
                result = (*(*rcx_2 + 0x38))(rcx_2, 0)
                void* rcx_3 = *arg4
                
                if (rcx_3 != 0)
                    result = sub_140a84c80(rcx_3, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rdi_1 != 0)
        (*rdi_1)[7](rdi_1, 0)
        result = sub_140a84c80(rdi_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
else if (result == data_143ce2e30)
    void*** rax_3 = sub_140a84c80(0, 0x30, 0)
    rdi_1 = rax_3
    
    if (rax_3 == 0)
        goto label_1408010fe
    
    *rdi_1 = &data_142dc0378
    sub_140d3a3a0(&rdi_1[1], arg1)
    rdi_1[2] = sub_1407feeb0
    rdi_1[4] = sub_140a387b0()
    rax_2 = &data_142dc03d0
    goto label_1408010fb
return result
