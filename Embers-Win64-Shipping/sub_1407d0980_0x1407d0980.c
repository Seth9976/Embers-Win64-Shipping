// 函数: sub_1407d0980
// 地址: 0x1407d0980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = sub_140a84c80(0, 0x20, 0)

if (*(*(arg2 + 0x10) + 1) == 0)
    if (result_1 != 0)
        result_1[1] = arg1
        *result_1 = &data_142dd2e38
        result_1[3] = sub_140a387b0()
        *result_1 = &data_142dd2e90
else if (result_1 != 0)
    result_1[1] = arg1
    *result_1 = &data_142dd2d88
    result_1[3] = sub_140a387b0()
    *result_1 = &data_142dd2de0

void*** result = result_1
void var_18

if (&var_18 != arg4)
    if (result_1 != 0)
        (*result_1)[8](result_1, arg4)
        result = result_1
    else if (arg4[1].d != 0)
        int64_t* rcx_1 = *arg4
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = *arg4
            result = result_1
            
            if (rcx_2 != 0)
                *arg4 = sub_140a84c80(rcx_2, 0, 0)
                result = result_1
            
            arg4[1].d = 0

if (result != 0)
    (*result_1)[7](result_1, 0)
    result = sub_140a84c80(result_1, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
