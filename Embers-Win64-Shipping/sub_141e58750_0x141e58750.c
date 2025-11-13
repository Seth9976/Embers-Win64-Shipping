// 函数: sub_141e58750
// 地址: 0x141e58750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x38, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_14324cf40
    result_1[1] = 0
    result_1[2].d = 0
    
    if (arg1 + 8 != &result_1[1] && *(arg1 + 0x10) != 0)
        int64_t* rcx = *(arg1 + 8)
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx, &result_1[1])
    
    result_1[3] = 0
    int64_t rbp_1 = sx.q(*(arg1 + 0x20))
    int64_t rdi_2 = *(arg1 + 0x18)
    result_1[4].d = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_140638750(&result_1[3], rbp_1.d, 0)
        memcpy(result_1[3], rdi_2, (rbp_1 << 2).d)
    else
        *(result_1 + 0x24) = 0
    
    result_1[6] = *(arg1 + 0x30)
    result = &data_14324cf98
    *result_1 = &data_14324cf98

return result
