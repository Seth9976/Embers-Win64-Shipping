// 函数: sub_1407cf020
// 地址: 0x1407cf020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result
void var_18

if (*(arg3 + 8) != 0)
    int32_t rbx_1 = *(arg3 + 0x114)
    void* result_1 = sub_140a84c80(0, 0x20, 0)
    
    if (((rbx_1 u>> 1).b & 1) == 0)
        if (result_1 != 0)
            *(result_1 + 8) = arg1
            *result_1 = &data_142dd1e68
            *(result_1 + 0x18) = sub_140a387b0()
            *result_1 = &data_142dd1ec0
    else if (result_1 != 0)
        *(result_1 + 8) = arg1
        *result_1 = &data_142dd1db8
        *(result_1 + 0x18) = sub_140a387b0()
        *result_1 = &data_142dd1e10
    
    result = result_1
    
    if (&var_18 != arg4)
        if (result_1 != 0)
            (*(*result_1 + 0x40))(result_1, arg4)
            result = result_1
        else if (arg4[1].d != 0)
            void* rcx_8 = *arg4
            
            if (rcx_8 != 0)
                (*(*rcx_8 + 0x38))(rcx_8, 0)
                void* rcx_9 = *arg4
                result = result_1
                
                if (rcx_9 != 0)
                    *arg4 = sub_140a84c80(rcx_9, 0, 0)
                    result = result_1
                
                arg4[1].d = 0
    
    if (result != 0)
        (*(*result_1 + 0x38))(result_1, 0)
        result = sub_140a84c80(result_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)
else
    void*** rax = sub_140a84c80(0, 0x20, 0)
    
    if (rax != 0)
        rax[1] = arg1
        *rax = &data_142dd1d08
        rax[3] = sub_140a387b0()
        *rax = &data_142dd1d60
    
    result = &var_18
    
    if (&var_18 != arg4)
        if (rax != 0)
            result = (*rax)[8](rax, arg4)
        else if (arg4[1].d != 0)
            void* rcx_1 = *arg4
            
            if (rcx_1 != 0)
                result = (*(*rcx_1 + 0x38))(rcx_1, 0)
                void* rcx_2 = *arg4
                
                if (rcx_2 != 0)
                    result = sub_140a84c80(rcx_2, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
    
    if (rax != 0)
        (*rax)[7](rax, 0)
        result = sub_140a84c80(rax, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result) __tailcall
return result
