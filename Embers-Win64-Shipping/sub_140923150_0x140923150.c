// 函数: sub_140923150
// 地址: 0x140923150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x98, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e21a80
    result_1[2] = 0
    result_1[3] = 0
    result_1[1] = &data_142e1f860
    sub_140596d10(&result_1[4], arg1 + 0x20)
    result_1[6] = *(arg1 + 0x30)
    result_1[1] = &data_142e1f860
    result_1[7] = *(arg1 + 0x38)
    void* rax_2 = *(arg1 + 0x40)
    result_1[8] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 0xc) += 1
    
    sub_140596d10(&result_1[9], arg1 + 0x48)
    sub_140596d10(&result_1[0xb], arg1 + 0x58)
    sub_140596d10(&result_1[0xd], arg1 + 0x68)
    result_1[0xf] = 0
    result_1[0x10].d = 0
    
    if (arg1 + 0x78 != &result_1[0xf] && *(arg1 + 0x80) != 0)
        int64_t* rcx_5 = *(arg1 + 0x78)
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x40))(rcx_5)
    
    result_1[0x12] = *(arg1 + 0x90)
    result = &data_142e21ad8
    *result_1 = &data_142e21ad8

return result
