// 函数: sub_14231ac00
// 地址: 0x14231ac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x8b0)

if (result != 0)
    sub_141f3e8a0(arg1)
    int64_t* rcx = *(arg1 + 0x8b0)
    (*(*rcx + 0x70))(rcx)
    result = *(arg1 + 0x8b0)
    
    if (result != 0)
        sub_141f3e8a0(arg1)
        jump(*(**(arg1 + 0x8b0) + 0x48))

return result
