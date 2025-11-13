// 函数: sub_140f03580
// 地址: 0x140f03580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x5b0) == 0)
    return *(arg1 + 0x598)

int64_t* rcx = *(arg1 + 0x5a8)

if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
    int64_t* rcx_1
    
    if (*(arg1 + 0x5b0) == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x5a8)
    
    *(arg1 + 0x598) = (*(*rcx_1 + 0x48))(rcx_1)

return *(arg1 + 0x598)
