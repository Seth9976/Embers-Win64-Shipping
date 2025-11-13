// 函数: sub_140f43220
// 地址: 0x140f43220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x40, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142ee6968
    result_1[1] = *(arg1 + 8)
    void* rax = *(arg1 + 0x10)
    result_1[2] = rax
    
    if (rax != 0)
        *(rax + 0xc) += 1
    
    *(result_1 + 0x18) = *(arg1 + 0x18)
    result_1[5] = 0
    result_1[6].d = 0
    sub_1407473e0(&result_1[5], arg1 + 0x28)
    result = *(arg1 + 0x38)
    result_1[7] = result

return result
