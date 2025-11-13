// 函数: sub_141f84360
// 地址: 0x141f84360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x30, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_143287ef0
    result_1[1] = *(arg1 + 8)
    void* rax = *(arg1 + 0x10)
    result_1[2] = rax
    
    if (rax != 0)
        *(rax + 0xc) += 1
    
    result_1[3] = *(arg1 + 0x18)
    result_1[5] = *(arg1 + 0x28)
    result = &data_143287f48
    *result_1 = &data_143287f48

return result
