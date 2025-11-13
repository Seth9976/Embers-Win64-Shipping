// 函数: sub_1409233b0
// 地址: 0x1409233b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x38, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e21920
    result_1[1] = 0
    result_1[2].d = 0
    
    if (arg1 + 8 != &result_1[1] && *(arg1 + 0x10) != 0)
        int64_t* rcx = *(arg1 + 8)
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx, &result_1[1])
    
    sub_140596d10(&result_1[3], arg1 + 0x18)
    result_1[6] = *(arg1 + 0x30)
    result = &data_142e21978
    *result_1 = &data_142e21978

return result
