// 函数: sub_1407ad870
// 地址: 0x1407ad870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2

if (result == data_143ce0740 || result == data_143ce0720 || result == data_143ce0748
        || result == data_143ce0758 || result == data_143ce0778 || result == data_143ce0728)
    void*** rax = sub_140a84c80(0, 0x30, 0)
    
    if (rax != 0)
        *rax = &data_142dc0378
        sub_140d3a3a0(&rax[1], arg1)
        rax[2] = sub_140594850
        rax[4] = sub_140a387b0()
        *rax = &data_142dc03d0
    
    void var_18
    result = &var_18
    
    if (&var_18 != arg4)
        if (rax != 0)
            result = (*rax)[8](rax, arg4)
        else if (arg4[1].d != 0)
            void* rcx_2 = *arg4
            
            if (rcx_2 != 0)
                result = (*(*rcx_2 + 0x38))(rcx_2, 0)
                void* rcx_3 = *arg4
                
                if (rcx_3 != 0)
                    result = sub_140a84c80(rcx_3, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rax != 0)
        (*rax)[7](rax, 0)
        result = sub_140a84c80(rax, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)

return result
