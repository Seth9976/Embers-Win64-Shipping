// 函数: sub_1407ad9a0
// 地址: 0x1407ad9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1407ad870(arg1, arg2, arg3, arg4)
void* result = *arg2
void** const rax_2
void*** rbx_1

if (result == data_143ce0740)
    void*** rax = sub_140a84c80(0, 0x20, 0)
    rbx_1 = rax
    
    if (rax == 0)
        goto label_1407ada8a
    
    rbx_1[1] = arg1
    *rbx_1 = &data_142dc0468
    rbx_1[3] = sub_140a387b0()
    rax_2 = &data_142dc04c0
label_1407ada87:
    *rbx_1 = rax_2
label_1407ada8a:
    void var_18
    result = &var_18
    
    if (&var_18 != arg4)
        if (rbx_1 != 0)
            result = (*rbx_1)[8](rbx_1, arg4)
        else if (arg4[1].d != 0)
            void* rcx_2 = *arg4
            
            if (rcx_2 != 0)
                result = (*(*rcx_2 + 0x38))(rcx_2, 0)
                void* rcx_3 = *arg4
                
                if (rcx_3 != 0)
                    result = sub_140a84c80(rcx_3, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rbx_1 != 0)
        (*rbx_1)[7](rbx_1, 0)
        result = sub_140a84c80(rbx_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
else if (result == data_143ce0530 || result == data_143ce0538 || result == data_143ce0540
        || result == data_143ce0548 || result == data_143ce0550 || result == data_143ce0558)
    void*** rax_3 = sub_140a84c80(0, 0x30, 0)
    rbx_1 = rax_3
    
    if (rax_3 == 0)
        goto label_1407ada8a
    
    *rbx_1 = &data_142dc0378
    sub_140d3a3a0(&rbx_1[1], arg1)
    rbx_1[2] = sub_140594850
    rbx_1[4] = sub_140a387b0()
    rax_2 = &data_142dc03d0
    goto label_1407ada87
return result
