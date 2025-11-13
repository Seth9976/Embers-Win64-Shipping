// 函数: sub_141ba0280
// 地址: 0x141ba0280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x38, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_143083f50
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    result_1[3].b = *(arg1 + 0x18)
    *(result_1 + 0x19) = *(arg1 + 0x19)
    result_1[4] = 0
    result_1[5].d = 0
    
    if (arg1 + 0x20 != &result_1[4] && *(arg1 + 0x28) != 0)
        int64_t* rcx_3 = *(arg1 + 0x20)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x40))(rcx_3)
    
    result = *(arg1 + 0x30)
    result_1[6] = result

return result
