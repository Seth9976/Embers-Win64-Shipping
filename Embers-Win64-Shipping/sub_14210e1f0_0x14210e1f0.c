// 函数: sub_14210e1f0
// 地址: 0x14210e1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_1405978f0(0x30, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_1432d44d0
    result_1[1] = *(arg1 + 8)
    void* rax = *(arg1 + 0x10)
    result_1[2] = rax
    
    if (rax != 0)
        *(rax + 0xc) += 1
    
    result_1[3] = *(arg1 + 0x18)
    result_1[5] = *(arg1 + 0x28)
    result = &data_1432d4528
    *result_1 = &data_1432d4528

return result
