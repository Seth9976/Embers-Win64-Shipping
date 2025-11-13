// 函数: sub_140979260
// 地址: 0x140979260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2)

if (result.d s< *(arg1 + 0x48))
    uint64_t rax = zx.q(result.b)
    result = *(arg1 + 0x50)
    *(result + rax * 0xc + 1) = 1
    int64_t* rcx = *(arg1 + 0x38)
    
    if (rcx != 0)
        jump(*(*rcx + 0x10))

return result
