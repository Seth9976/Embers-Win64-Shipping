// 函数: sub_142053780
// 地址: 0x142053780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x40, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_1432abdc0
    result_1[1] = *(arg1 + 8)
    *(result_1 + 0x10) = *(arg1 + 0x10)
    result_1[4] = *(arg1 + 0x20)
    void* rax = *(arg1 + 0x28)
    result_1[5] = rax
    
    if (rax != 0)
        *(rax + 8) += 1
    
    result_1[6] = *(arg1 + 0x30)
    result_1[7] = *(arg1 + 0x38)
    result = &data_1432abe18
    *result_1 = &data_1432abe18

return result
