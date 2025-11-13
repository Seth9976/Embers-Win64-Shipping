// 函数: sub_1407ad4e0
// 地址: 0x1407ad4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg2
int64_t* result_1

if (result == data_143ce0740 || result == data_143ce0730 || result == data_143ce0748
        || result == data_143ce0750 || result == data_143ce0758 || result == data_143ce0760
        || result == data_143ce0768 || result == data_143ce0770 || result == data_143ce0778
        || result == data_143ce0780)
    void*** rax = sub_140a84c80(0, 0x30, 0)
    
    if (rax != 0)
        *rax = &data_142dc0378
        sub_140d3a3a0(&rax[1], arg1)
        rax[2] = sub_140594850
        rax[4] = sub_140a387b0()
        *rax = &data_142dc03d0
    
    result = &result_1
    
    if (&result_1 != arg4)
        if (rax != 0)
            result = (*rax)[8](rax, arg4)
        else if (arg4[1].d != 0)
            int64_t* rcx_2 = *arg4
            
            if (rcx_2 != 0)
                result = (*(*rcx_2 + 0x38))(rcx_2, 0)
                int64_t* rcx_3 = *arg4
                
                if (rcx_3 != 0)
                    result = sub_140a84c80(rcx_3, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rax != 0)
        (*rax)[7](rax, 0)
        result = sub_140a84c80(rax, 0, 0)
    label_1407ad6a5:
        
        if (result != 0)
            return sub_140a74f90(result)
else if (result == data_143ce0738)
    result = sub_1407473e0(arg4, sub_14077a560(&result_1, arg1, sub_140594850))
    int32_t var_10
    
    if (var_10 == 0)
        result = result_1
        goto label_1407ad6a5
    
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        (*(*result_2 + 0x38))(result_2, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        int32_t var_10_1 = 0
        goto label_1407ad6a5
return result
