// 函数: sub_140956fe0
// 地址: 0x140956fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x38, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e34008
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    result_1[3] = *(arg1 + 0x18)
    result_1[4] = 0
    result_1[5].d = 0
    
    if (arg1 + 0x20 != &result_1[4] && *(arg1 + 0x28) != 0)
        int64_t* rcx_2 = *(arg1 + 0x20)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x40))(rcx_2)
    
    result_1[6] = *(arg1 + 0x30)
    result = &data_142e34060
    *result_1 = &data_142e34060

return result
