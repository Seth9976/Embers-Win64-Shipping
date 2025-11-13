// 函数: sub_140923030
// 地址: 0x140923030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x68, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e219d0
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
        *(rax_2 + 8) += 1
    
    result_1[9] = *(arg1 + 0x48)
    void* rax_4 = *(arg1 + 0x50)
    result_1[0xa] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 0xc) += 1
    
    result_1[0xc] = *(arg1 + 0x60)
    result = &data_142e21a28
    *result_1 = &data_142e21a28

return result
