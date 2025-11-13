// 函数: sub_1426bc100
// 地址: 0x1426bc100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x260))

if (result.d s< *(arg1 + 0x118))
    void* rbx_2 = result * 0x58 + *(arg1 + 0x110)
    int32_t var_10_1 = 0
    int64_t rsi_1 = sx.q(*(rbx_2 + 0x28))
    int32_t rax = (rsi_1 + 1).d
    *(rbx_2 + 0x28) = rax
    
    if (rax s> *(rbx_2 + 0x2c))
        sub_1405a4f90(rbx_2 + 0x20)
    
    result = *(rbx_2 + 0x20)
    *(result + rsi_1 * 0x10) = arg2.o
    
    if (*(rbx_2 + 8) == arg2)
        *(rbx_2 + 0x41) = 3

return result
