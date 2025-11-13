// 函数: sub_14213ff60
// 地址: 0x14213ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x28, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_1432dd6c0
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    void* rax = *(arg1 + 0x18)
    result_1[3] = rax
    
    if (rax != 0)
        *(rax + 8) += 1
    
    result_1[4] = *(arg1 + 0x20)
    result = &data_1432dd718
    *result_1 = &data_1432dd718

return result
