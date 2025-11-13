// 函数: sub_1406ee620
// 地址: 0x1406ee620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg3 + 0x88)
void*** result_2 = sub_140a84c80(0, 0x20, 0)
void* result
bool cond:1
void var_18

if (rsi != 1)
    void* result_1 = result_2
    
    if (rsi s<= 1)
        if (result_2 != 0)
            result_2[1] = arg1
            *result_2 = &data_142da3238
            result_2[3] = sub_140a387b0()
            *result_2 = &data_142da3290
    else if (result_2 != 0)
        result_2[1] = arg1
        *result_2 = &data_142da3188
        result_2[3] = sub_140a387b0()
        *result_2 = &data_142da31e0
    
    result = result_1
    
    if (&var_18 != arg4)
        if (result_1 != 0)
            (*result_2)[8](result_2, arg4)
            result = result_1
        else if (arg4[1].d != 0)
            void* rcx_4 = *arg4
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x38))(rcx_4, 0)
                void* rcx_5 = *arg4
                result = result_1
                
                if (rcx_5 != 0)
                    *arg4 = sub_140a84c80(rcx_5, 0, 0)
                    result = result_1
                
                arg4[1].d = 0
    
    cond:1 = result == 0
else
    if (result_2 != 0)
        result_2[1] = arg1
        *result_2 = &data_142da30d8
        result_2[3] = sub_140a387b0()
        *result_2 = &data_142da3130
    
    result = &var_18
    
    if (&var_18 == arg4)
        cond:1 = result_2 == 0
    else if (result_2 == 0)
        if (arg4[1].d != 0)
            void* rcx_1 = *arg4
            
            if (rcx_1 != 0)
                result = (*(*rcx_1 + 0x38))(rcx_1, 0)
                void* rcx_2 = *arg4
                
                if (rcx_2 != 0)
                    result = sub_140a84c80(rcx_2, 0, 0)
                    *arg4 = result
                
                arg4[1].d = 0
        
        cond:1 = result_2 == 0
    else
        result = (*result_2)[8](result_2, arg4)
        cond:1 = result_2 == 0

if (not(cond:1))
    (*result_2)[7](result_2, 0)
    result = sub_140a84c80(result_2, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
