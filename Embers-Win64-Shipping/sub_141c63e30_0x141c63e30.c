// 函数: sub_141c63e30
// 地址: 0x141c63e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)

if (rcx == 0)
    int64_t result
    result.b = 1
    return result

char rax_1 = (*(*rcx + 8))(rcx)

if (rax_1 != 0)
    int64_t* rcx_1 = *(arg1 + 0x30)
    
    if (rcx_1 != 0)
        int64_t r8_1 = *rcx_1
        (*r8_1)(rcx_1, 1, r8_1)
    
    *(arg1 + 0x30) = 0

return zx.q(rax_1)
