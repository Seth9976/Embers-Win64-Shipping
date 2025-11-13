// 函数: sub_1407aefa0
// 地址: 0x1407aefa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg3 == 0)
    void var_18
    result = &var_18
    
    if (&var_18 != arg4 && arg4[1].d != 0)
        void* rcx_7 = *arg4
        
        if (rcx_7 != 0)
            result = (*(*rcx_7 + 0x38))(rcx_7, 0)
            void* rcx_8 = *arg4
            
            if (rcx_8 != 0)
                result = sub_140a84c80(rcx_8, 0, 0)
                *arg4 = result
            
            arg4[1].d = 0
else
    if (sub_140d3c6e0(arg3) != 0)
        sub_142591550()
    
    sub_14074aa60(arg1, arg2, arg3, arg4)
    
    if (arg4[1].d == 0)
        result.b = 0
    else
        void* rcx_2 = *arg4
        
        if (rcx_2 == 0)
            result.b = 0
        else if ((*(*rcx_2 + 0x28))(rcx_2).b == 0)
            result.b = 0
        else
            result.b = 1
    
    if (result.b == 0)
        sub_14074b5d0(arg1, arg2, arg3, arg4)
        
        if (arg4[1].d == 0)
            result.b = 0
        else
            void* rcx_4 = *arg4
            
            if (rcx_4 == 0)
                result.b = 0
            else if ((*(*rcx_4 + 0x28))(rcx_4).b == 0)
                result.b = 0
            else
                result.b = 1
        
        if (result.b == 0)
            result = sub_14074bd90(arg1, arg2, arg3, arg4)
            
            if (arg4[1].d != 0)
                void* rcx_6 = *arg4
                
                if (rcx_6 != 0)
                    return (*(*rcx_6 + 0x28))(rcx_6)

return result
