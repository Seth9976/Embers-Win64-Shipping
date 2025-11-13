// 函数: sub_141ba0000
// 地址: 0x141ba0000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0xc0, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_143083930
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    sub_14068e310(&result_1[3], arg1 + 0x18)
    result_1[0x14].b = *(arg1 + 0xa0)
    result_1[0x15] = 0
    result_1[0x16].d = 0
    
    if (arg1 + 0xa8 != &result_1[0x15] && *(arg1 + 0xb0) != 0)
        int64_t* rcx_2 = *(arg1 + 0xa8)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x40))(rcx_2)
    
    result = *(arg1 + 0xb8)
    result_1[0x17] = result

return result
