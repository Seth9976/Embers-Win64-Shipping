// 函数: sub_140d43790
// 地址: 0x140d43790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x30, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142ebdf30
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    result_1[3] = *(arg1 + 0x18)
    void* rax = *(arg1 + 0x20)
    result_1[4] = rax
    
    if (rax != 0)
        *(rax + 8) += 1
    
    result = *(arg1 + 0x28)
    result_1[5] = result

return result
