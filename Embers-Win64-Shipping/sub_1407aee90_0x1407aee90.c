// 函数: sub_1407aee90
// 地址: 0x1407aee90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140b5b9d0(arg2, u"GetNextValue")

if (result.b != 0)
    void*** rax_1 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_1 != 0)
        *rax_1 = &data_142dc0378
        sub_140d3a3a0(&rax_1[1], arg1)
        rax_1[2] = sub_1407a6160
        rax_1[4] = sub_140a387b0()
        *rax_1 = &data_142dc03d0
    
    void var_18
    result = &var_18
    
    if (&var_18 != arg4)
        if (rax_1 != 0)
            result = (*rax_1)[8](rax_1, arg4)
        else if (arg4[1].d != 0)
            void* rcx_3 = *arg4
            
            if (rcx_3 != 0)
                result = (*(*rcx_3 + 0x38))(rcx_3, 0)
                void* rcx_4 = *arg4
                
                if (rcx_4 != 0)
                    result = sub_140a84c80(rcx_4, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rax_1 != 0)
        (*rax_1)[7](rax_1, 0)
        result = sub_140a84c80(rax_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)

return result
