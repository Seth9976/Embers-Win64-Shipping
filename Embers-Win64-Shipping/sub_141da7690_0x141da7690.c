// 函数: sub_141da7690
// 地址: 0x141da7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x30, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_14323ab28
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    result_1[3] = 0
    result_1[4].d = 0
    
    if (arg1 + 0x18 != &result_1[3] && *(arg1 + 0x20) != 0)
        int64_t* rcx_1 = *(arg1 + 0x18)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1)
    
    result_1[5] = *(arg1 + 0x28)
    result = &data_14323ab80
    *result_1 = &data_14323ab80

return result
