// 函数: sub_14207b840
// 地址: 0x14207b840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140758d90(arg1 + 0x40, arg2)

if (result.d == 0xffffffff)
    int64_t rdi_1 = sx.q(*(arg1 + 0x48))
    int32_t rax = (rdi_1 + 1).d
    *(arg1 + 0x48) = rax
    
    if (rax s> *(arg1 + 0x4c))
        sub_1405a4f90(arg1 + 0x40)
    
    result = *(arg1 + 0x40)
    *(result + rdi_1 * 0x10) = *arg2

return result
