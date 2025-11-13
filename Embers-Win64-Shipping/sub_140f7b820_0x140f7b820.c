// 函数: sub_140f7b820
// 地址: 0x140f7b820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0

if (*(arg1 + 0xa1) == 0)
    int64_t result
    result.b = 0
    return result

if (*(arg1 + 0xb0) != 0)
    int64_t* rcx = *(arg1 + 0xa8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0xb0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0xa8)
        
        *(arg1 + 0xa0) = (*(*rcx_1 + 0x48))(rcx_1)

return zx.q(*(arg1 + 0xa0))
