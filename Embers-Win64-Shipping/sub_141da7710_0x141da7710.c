// 函数: sub_141da7710
// 地址: 0x141da7710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x40, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_14323ac88
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    result_1[3] = 0
    result_1[4].d = 0
    
    if (arg1 + 0x18 != &result_1[3] && *(arg1 + 0x20) != 0)
        int64_t* rcx = *(arg1 + 0x18)
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx, &result_1[3])
    
    sub_140596d10(&result_1[5], arg1 + 0x28)
    result_1[7] = *(arg1 + 0x38)
    result = &data_14323ace0
    *result_1 = &data_14323ace0

return result
