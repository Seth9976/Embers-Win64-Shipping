// 函数: sub_142774610
// 地址: 0x142774610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0xa0)
int64_t* rcx = *(result + 0x28)

if (rcx != 0)
    result = zx.q(*(arg1 + 0xb0))
    
    if (result.d != 4 && result.d != 1)
        result = (*(*rcx + 0x50))()
        *(arg1 + 0xb0) = 4

return result
