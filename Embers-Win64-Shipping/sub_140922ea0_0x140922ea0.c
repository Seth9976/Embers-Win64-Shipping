// 函数: sub_140922ea0
// 地址: 0x140922ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x38, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e21ea0
    result_1[1] = *(arg1 + 8)
    void* rax = *(arg1 + 0x10)
    result_1[2] = rax
    
    if (rax != 0)
        *(rax + 0xc) += 1
    
    result_1[3] = 0
    result_1[4].d = 0
    
    if (arg1 + 0x18 != &result_1[3] && *(arg1 + 0x20) != 0)
        int64_t* rcx = *(arg1 + 0x18)
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx)
    
    result_1[6] = *(arg1 + 0x30)
    result = &data_142e21ef8
    *result_1 = &data_142e21ef8

return result
