// 函数: sub_1407ad6d0
// 地址: 0x1407ad6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1407ad4e0(arg1, arg2, arg3, arg4)
int64_t* result = *arg2
void** const rax_2
void*** rbx_1

if (result != data_143ce0740)
    if (result == data_143ce0738)
        void*** rax_3 = sub_140a84c80(0, 0x20, 0)
        rbx_1 = rax_3
        
        if (rax_3 == 0)
            goto label_1407ad7e2
        
        rbx_1[1] = arg1
        *rbx_1 = &data_142dc02c8
        rbx_1[3] = sub_140a387b0()
        rax_2 = &data_142dc0320
        goto label_1407ad7df
    
    if (result == data_143ce04d0 || result == data_143ce04c8 || result == data_143ce04d8)
        void*** rax_5 = sub_140a84c80(0, 0x30, 0)
        rbx_1 = rax_5
        
        if (rax_5 == 0)
            goto label_1407ad7e2
        
        *rbx_1 = &data_142dc0378
        sub_140d3a3a0(&rbx_1[1], arg1)
        rbx_1[2] = sub_140594850
        rbx_1[4] = sub_140a387b0()
        rax_2 = &data_142dc03d0
        goto label_1407ad7df
else
    void*** rax = sub_140a84c80(0, 0x20, 0)
    rbx_1 = rax
    
    if (rax == 0)
        goto label_1407ad7e2
    
    rbx_1[1] = arg1
    *rbx_1 = &data_142dc0218
    rbx_1[3] = sub_140a387b0()
    rax_2 = &data_142dc0270
label_1407ad7df:
    *rbx_1 = rax_2
label_1407ad7e2:
    void var_18
    result = &var_18
    
    if (&var_18 != arg4)
        if (rbx_1 != 0)
            result = (*rbx_1)[8](rbx_1, arg4)
        else if (arg4[1].d != 0)
            int64_t* rcx_2 = *arg4
            
            if (rcx_2 != 0)
                result = (*(*rcx_2 + 0x38))(rcx_2, 0)
                int64_t* rcx_3 = *arg4
                
                if (rcx_3 != 0)
                    result = sub_140a84c80(rcx_3, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rbx_1 != 0)
        (*rbx_1)[7](rbx_1, 0)
        result = sub_140a84c80(rbx_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
return result
