// 函数: sub_142387fb0
// 地址: 0x142387fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x40, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_143336b28
    result_1[1] = *(arg1 + 8)
    void* rax = *(arg1 + 0x10)
    result_1[2] = rax
    
    if (rax != 0)
        *(rax + 0xc) += 1
    
    result_1[3] = *(arg1 + 0x18)
    result_1[4] = *(arg1 + 0x20)
    sub_140596d10(&result_1[5], arg1 + 0x28)
    result_1[7] = *(arg1 + 0x38)
    result = &data_143336b80
    *result_1 = &data_143336b80

return result
