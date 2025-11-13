// 函数: sub_14207b8a0
// 地址: 0x14207b8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140758d90(arg1 + 0x50, arg2)

if (result.d == 0xffffffff)
    int64_t rdi_1 = sx.q(*(arg1 + 0x58))
    int32_t rax = (rdi_1 + 1).d
    *(arg1 + 0x58) = rax
    
    if (rax s> *(arg1 + 0x5c))
        sub_1405a4f90(arg1 + 0x50)
    
    result = *(arg1 + 0x50)
    *(result + rdi_1 * 0x10) = *arg2

return result
