// 函数: sub_141be94f0
// 地址: 0x141be94f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x750) == 0)
    return zx.q(*(arg1 + 0x740))

int64_t* rcx = *(arg1 + 0x748)

if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
    int64_t* rcx_1
    
    if (*(arg1 + 0x750) == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x748)
    
    *(arg1 + 0x740) = (*(*rcx_1 + 0x48))(rcx_1)

return zx.q(*(arg1 + 0x740))
