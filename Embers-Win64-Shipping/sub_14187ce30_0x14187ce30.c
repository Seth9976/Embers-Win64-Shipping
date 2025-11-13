// 函数: sub_14187ce30
// 地址: 0x14187ce30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x60, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142fe83f8
    result_1[1] = *(arg1 + 8)
    void* rax = *(arg1 + 0x10)
    result_1[2] = rax
    
    if (rax != 0)
        *(rax + 0xc) += 1
    
    result_1[3] = *(arg1 + 0x18)
    result_1[4].d = *(arg1 + 0x20)
    sub_140596d10(&result_1[5], arg1 + 0x28)
    result_1[7].b = *(arg1 + 0x38)
    *(result_1 + 0x3c) = *(arg1 + 0x3c)
    *(result_1 + 0x40) = *(arg1 + 0x40)
    result_1[0xa] = *(arg1 + 0x50)
    result_1[0xb] = *(arg1 + 0x58)
    result = &data_142fe8450
    *result_1 = &data_142fe8450

return result
