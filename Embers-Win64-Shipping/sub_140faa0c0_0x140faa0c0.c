// 函数: sub_140faa0c0
// 地址: 0x140faa0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x38, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142eeffe0
    result_1[1] = *(arg1 + 8)
    void* rax = *(arg1 + 0x10)
    result_1[2] = rax
    
    if (rax != 0)
        *(rax + 0xc) += 1
    
    *(result_1 + 0x18) = *(arg1 + 0x18)
    result_1[5].d = *(arg1 + 0x28)
    result_1[6] = *(arg1 + 0x30)
    result = &data_142ef0038
    *result_1 = &data_142ef0038

return result
