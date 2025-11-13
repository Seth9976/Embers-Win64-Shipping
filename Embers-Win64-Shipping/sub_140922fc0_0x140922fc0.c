// 函数: sub_140922fc0
// 地址: 0x140922fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x28, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e21be0
    result_1[1] = 0
    result_1[2].d = 0
    
    if (arg1 + 8 != &result_1[1] && *(arg1 + 0x10) != 0)
        int64_t* rcx = *(arg1 + 8)
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx)
    
    result_1[4] = *(arg1 + 0x20)
    result = &data_142e21c38
    *result_1 = &data_142e21c38

return result
