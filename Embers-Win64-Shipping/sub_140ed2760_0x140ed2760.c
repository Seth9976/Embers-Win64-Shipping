// 函数: sub_140ed2760
// 地址: 0x140ed2760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x58) == 0)
    return zx.q(*(arg1 - 0x68))

int64_t* rcx = *(arg1 - 0x60)

if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
    if (*(arg1 - 0x58) != 0)
        int64_t* rcx_1 = *(arg1 - 0x60)
        int32_t result = (*(*rcx_1 + 0x48))(rcx_1)
        *(arg1 - 0x68) = result
        return result
    
    *(arg1 - 0x68) = (*(*nullptr + 0x48))(0)

return zx.q(*(arg1 - 0x68))
