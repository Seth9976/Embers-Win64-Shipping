// 函数: sub_1407acd60
// 地址: 0x1407acd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2
void** const rax_2
void*** rdi_1

if (result != data_143ce0388)
    if (result == data_143ce0380)
        void*** rax_3 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_3
        
        if (rax_3 == 0)
            goto label_1407acecd
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbf858
        rdi_1[3] = sub_140a387b0()
        rax_2 = &data_142dbf8b0
        goto label_1407aceca
    
    if (result == data_143ce0378)
        void*** rax_5 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_5
        
        if (rax_5 == 0)
            goto label_1407acecd
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbfa68
        rdi_1[3] = sub_140a387b0()
        rax_2 = &data_142dbfac0
        goto label_1407aceca
    
    if (result == data_143ce0370)
        void*** rax_7 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_7
        
        if (rax_7 == 0)
            goto label_1407acecd
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbf9b8
        rdi_1[3] = sub_140a387b0()
        rax_2 = &data_142dbfa10
        goto label_1407aceca
    
    if (result == data_143ce0368)
        void*** rax_9 = sub_140a84c80(0, 0x20, 0)
        rdi_1 = rax_9
        
        if (rax_9 == 0)
            goto label_1407acecd
        
        rdi_1[1] = arg1
        *rdi_1 = &data_142dbf908
        rdi_1[3] = sub_140a387b0()
        rax_2 = &data_142dbf960
        goto label_1407aceca
else
    void*** rax = sub_140a84c80(0, 0x20, 0)
    rdi_1 = rax
    
    if (rax == 0)
        goto label_1407acecd
    
    rdi_1[1] = arg1
    *rdi_1 = &data_142dbf7a8
    rdi_1[3] = sub_140a387b0()
    rax_2 = &data_142dbf800
label_1407aceca:
    *rdi_1 = rax_2
label_1407acecd:
    void var_18
    result = &var_18
    
    if (&var_18 != arg4)
        if (rdi_1 != 0)
            result = (*rdi_1)[8](rdi_1, arg4)
        else if (arg4[1].d != 0)
            void* rcx_1 = *arg4
            
            if (rcx_1 != 0)
                result = (*(*rcx_1 + 0x38))(rcx_1, 0)
                void* rcx_2 = *arg4
                
                if (rcx_2 != 0)
                    result = sub_140a84c80(rcx_2, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rdi_1 != 0)
        (*rdi_1)[7](rdi_1, 0)
        result = sub_140a84c80(rdi_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
return result
