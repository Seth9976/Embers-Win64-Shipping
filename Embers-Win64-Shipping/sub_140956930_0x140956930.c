// 函数: sub_140956930
// 地址: 0x140956930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x28, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e342c8
    result_1[1] = 0
    result_1[2].d = 0
    
    if (arg1 + 8 != &result_1[1] && *(arg1 + 0x10) != 0)
        int64_t* rcx = *(arg1 + 8)
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx)
    
    result_1[4] = *(arg1 + 0x20)
    result = &data_142e34320
    *result_1 = &data_142e34320

return result
