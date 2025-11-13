// 函数: sub_141d4a9a0
// 地址: 0x141d4a9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x118)

if (rcx != 0)
    int64_t rdx
    rdx.b = 1
    (*(*rcx + 0x10))(rcx, rdx)
    int64_t* rcx_1 = *(arg1 + 0x118)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x20))(rcx_1, 1)
    
    *(arg1 + 0x118) = 0

*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) s<= 0xffffffff)
    sub_1405c5570(arg1 + 8, 0)

int32_t result = *(arg1 + 0xac)
*(arg1 + 0xa8) = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(arg1 + 0xa0, 0) __tailcall

return result
