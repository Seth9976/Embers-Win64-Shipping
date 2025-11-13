// 函数: sub_141c855c0
// 地址: 0x141c855c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x48, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_14320f870
    result_1[1] = *(arg1 + 8)
    *(result_1 + 0x10) = *(arg1 + 0x10)
    *(result_1 + 0x20) = *(arg1 + 0x20)
    result_1[6] = *(arg1 + 0x30)
    void* rax_1 = *(arg1 + 0x38)
    result_1[7] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 0xc) += 1
    
    result_1[8] = *(arg1 + 0x40)
    result = &data_14320f8c8
    *result_1 = &data_14320f8c8

return result
