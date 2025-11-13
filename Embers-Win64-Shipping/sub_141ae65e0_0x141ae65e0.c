// 函数: sub_141ae65e0
// 地址: 0x141ae65e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
*(arg1 + 0x6d) = *(arg2 + 0x6d)

if (arg1 + 0x70 != arg2 + 0x70)
    int32_t r8_1 = *(arg1 + 0x7c)
    int32_t rbp_1 = *(arg2 + 0x78)
    int64_t r14_1 = *(arg2 + 0x70)
    *(arg1 + 0x78) = rbp_1
    
    if (rbp_1 != 0 || r8_1 != 0)
        sub_1405c4b20(arg1 + 0x70, rbp_1, r8_1)
        memcpy(*(arg1 + 0x70), r14_1, rbp_1 * 0x1c)
    else
        *(arg1 + 0x7c) = rbp_1

*(arg1 + 0x80) = *(arg2 + 0x80)
return arg1
