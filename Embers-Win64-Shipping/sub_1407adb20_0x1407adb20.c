// 函数: sub_1407adb20
// 地址: 0x1407adb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2
void*** rdi_1

if (result == data_143ce0560)
    void*** rax = sub_140a84c80(0, 0x20, 0)
    rdi_1 = rax
    
    if (rax == 0)
        goto label_1407adbbb
    
    rdi_1[1] = arg1
    *rdi_1 = &data_142dc0538
    rdi_1[3] = sub_140a387b0()
label_1407adbb8:
    *rdi_1 = &data_142dc0590
label_1407adbbb:
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
else if (result == data_143ce0568)
    void*** rax_2 = sub_140a84c80(0, 0x20, 0)
    rdi_1 = rax_2
    
    if (rax_2 == 0)
        goto label_1407adbbb
    
    rdi_1[1] = arg1
    *rdi_1 = &data_142dc0538
    rdi_1[3] = sub_140a387b0()
    goto label_1407adbb8
return result
