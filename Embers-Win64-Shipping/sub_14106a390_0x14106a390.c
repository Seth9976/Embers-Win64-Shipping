// 函数: sub_14106a390
// 地址: 0x14106a390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2)
int64_t rdx_1 = result * 0x60

if (*(rdx_1 + arg1 + 0x109) == 0 && *(arg1 + 0x1c9) == 0)
    void* rbx_2 = arg1 + 0xc8 + rdx_1
    sub_141062d30(rbx_2, 8, 0)
    
    if (*(rbx_2 + 0x41) == 0)
        *(*(rbx_2 + 0x10) + *(rbx_2 + 0x38)) = 0
        *(rbx_2 + 0x38) += 8
    
    result = sub_141062d30(rbx_2, 8, 0)
    
    if (*(rbx_2 + 0x41) == 0)
        result = *(rbx_2 + 0x10) + *(rbx_2 + 0x38)
        *result = 0
        *(rbx_2 + 0x38) += 8

return result
