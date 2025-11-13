// 函数: sub_140f73ef0
// 地址: 0x140f73ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x30, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142ee9b40
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    void* rax = *(arg1 + 0x18)
    result_1[3] = rax
    
    if (rax != 0)
        *(rax + 0xc) += 1
    
    result = *(arg1 + 0x28)
    result_1[5] = result

return result
