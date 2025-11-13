// 函数: sub_141edf170
// 地址: 0x141edf170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x124) &= 0xf7
int64_t result = sub_141f0f2e0(arg1)

if ((*(arg1 + 0x8a) & 1) == 0)
    result = (*(*arg1 + 0x710))(arg1)
    int64_t* rcx_1 = arg1[0x29]
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x7a8))(rcx_1)

*(arg1 + 0x124) |= 8
return result
