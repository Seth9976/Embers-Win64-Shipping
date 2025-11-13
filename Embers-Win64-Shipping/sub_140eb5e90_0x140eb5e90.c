// 函数: sub_140eb5e90
// 地址: 0x140eb5e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x60, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142ede270
    result_1[1] = *(arg1 + 8)
    void* rax = *(arg1 + 0x10)
    result_1[2] = rax
    
    if (rax != 0)
        *(rax + 0xc) += 1
    
    *(result_1 + 0x18) = *(arg1 + 0x18)
    result_1[5] = *(arg1 + 0x28)
    void* rax_2 = *(arg1 + 0x30)
    result_1[6] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    result_1[7].d = *(arg1 + 0x38)
    result_1[8].b = *(arg1 + 0x40)
    result_1[9] = 0
    result_1[0xa].d = 0
    sub_140692f90(&result_1[9], arg1 + 0x48)
    result = *(arg1 + 0x58)
    result_1[0xb] = result

return result
