// 函数: sub_140f05340
// 地址: 0x140f05340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x260) == 0)
    return zx.q(*(arg1 + 0x250))

int64_t* rcx = *(arg1 + 0x258)

if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
    int64_t* rcx_1
    
    if (*(arg1 + 0x260) == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x258)
    
    *(arg1 + 0x250) = (*(*rcx_1 + 0x48))(rcx_1)

return zx.q(*(arg1 + 0x250))
