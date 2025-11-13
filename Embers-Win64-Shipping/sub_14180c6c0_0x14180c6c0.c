// 函数: sub_14180c6c0
// 地址: 0x14180c6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x40, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142fe2f58
    result_1[1] = *(arg1 + 8)
    void* rax = *(arg1 + 0x10)
    result_1[2] = rax
    
    if (rax != 0)
        *(rax + 0xc) += 1
    
    *(result_1 + 0x18) = *(arg1 + 0x18)
    result_1[5] = *(arg1 + 0x28)
    void* rax_2 = *(arg1 + 0x30)
    result_1[6] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    result_1[7] = *(arg1 + 0x38)
    result = &data_142fe2fb0
    *result_1 = &data_142fe2fb0

return result
