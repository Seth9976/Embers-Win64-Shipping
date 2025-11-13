// 函数: sub_1408f4ba0
// 地址: 0x1408f4ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1408f4ea0()

if (result != 0)
    sub_1408f4c10(result + 0x20)
    int64_t rdi_1 = sx.q(*(result + 0x28))
    int32_t rax = (rdi_1 + 1).d
    *(result + 0x28) = rax
    
    if (rax s> *(result + 0x2c))
        sub_1405a4f90(result + 0x20)
    
    result = *(result + 0x20)
    *(result + rdi_1 * 0x10) = *arg1

return result
