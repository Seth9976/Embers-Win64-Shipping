// 函数: sub_141bca940
// 地址: 0x141bca940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x68) == 0)
    return zx.q(*(arg1 - 0x78))

int64_t* rcx = *(arg1 - 0x70)

if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
    if (*(arg1 - 0x68) != 0)
        int64_t* rcx_1 = *(arg1 - 0x70)
        int32_t result = (*(*rcx_1 + 0x48))(rcx_1)
        *(arg1 - 0x78) = result
        return result
    
    *(arg1 - 0x78) = (*(*nullptr + 0x48))(0)

return zx.q(*(arg1 - 0x78))
