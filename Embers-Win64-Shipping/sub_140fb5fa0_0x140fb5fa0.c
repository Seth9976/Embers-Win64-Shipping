// 函数: sub_140fb5fa0
// 地址: 0x140fb5fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x488) == 0)
    return zx.q(*(arg1 + 0x478))

int64_t* rcx = *(arg1 + 0x480)

if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
    int64_t* rcx_1
    
    if (*(arg1 + 0x488) == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x480)
    
    *(arg1 + 0x478) = (*(*rcx_1 + 0x48))(rcx_1)

return zx.q(*(arg1 + 0x478))
