// 函数: sub_141d9c3c0
// 地址: 0x141d9c3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_143239910
*(arg2 + 0x18) = 0
*(arg2 + 0x20) = 0

if (arg1 + 8 != arg2 + 0x18 && *(arg1 + 0x10) != 0)
    int64_t* rcx_1 = *(arg1 + 8)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, arg2 + 0x18)

*(arg2 + 0x10) = &data_143239930
return arg2 + 0x18
