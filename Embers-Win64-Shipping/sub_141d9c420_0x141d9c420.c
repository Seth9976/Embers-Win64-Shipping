// 函数: sub_141d9c420
// 地址: 0x141d9c420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x10) = &data_143239620
*(arg2 + 0x18) = *(arg1 + 8)
*(arg2 + 0x20) = 0
*(arg2 + 0x28) = 0

if (arg1 + 0x10 != arg2 + 0x20 && *(arg1 + 0x18) != 0)
    int64_t* rcx_1 = *(arg1 + 0x10)
    
    if (rcx_1 != 0)
        int64_t r8_1 = *rcx_1
        (*(r8_1 + 0x40))(rcx_1, arg2 + 0x20, r8_1)

*(arg2 + 0x10) = &data_143239640
return arg2 + 0x18
