// 函数: sub_14196dc60
// 地址: 0x14196dc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x20)
(*(*rcx + 0x80))(rcx, *(arg1 + 0x10), zx.q(*(arg1 + 0x18)), **(*(arg1 + 0x20) + 0x10))
void* result = *(arg1 + 0x20)
void* rdx_1 = *(result + 0x10)
int32_t temp0 = *(rdx_1 + 8)
*(rdx_1 + 8) -= 1

if (temp0 != 1)
    return result

return sub_1405d1550(*(*(arg1 + 0x20) + 0x10)) __tailcall
