// 函数: sub_14222cd70
// 地址: 0x14222cd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x30, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_143307270
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    result_1[3] = 0
    result_1[4].d = 0
    
    if (arg1 + 0x18 != &result_1[3] && *(arg1 + 0x20) != 0)
        int64_t* rcx_1 = *(arg1 + 0x18)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1)
    
    result_1[5] = *(arg1 + 0x28)
    result = &data_1433072c8
    *result_1 = &data_1433072c8

return result
