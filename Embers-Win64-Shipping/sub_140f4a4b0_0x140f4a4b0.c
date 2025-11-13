// 函数: sub_140f4a4b0
// 地址: 0x140f4a4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2d8) == 0)
    return zx.q(*(arg1 + 0x2c8))

int64_t* rcx = *(arg1 + 0x2d0)

if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
    int64_t* rcx_1
    
    if (*(arg1 + 0x2d8) == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x2d0)
    
    *(arg1 + 0x2c8) = (*(*rcx_1 + 0x48))(rcx_1)

return zx.q(*(arg1 + 0x2c8))
