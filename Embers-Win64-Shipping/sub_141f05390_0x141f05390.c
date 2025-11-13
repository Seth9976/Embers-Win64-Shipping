// 函数: sub_141f05390
// 地址: 0x141f05390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 9) = *(arg2 + 9)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x94) = *(arg2 + 0x94)
*(arg1 + 0x95) = *(arg2 + 0x95)

if (arg1 + 0x98 != arg2 + 0x98)
    int32_t r8_1 = *(arg1 + 0xa4)
    int32_t rbp_1 = *(arg2 + 0xa0)
    int64_t r14_1 = *(arg2 + 0x98)
    *(arg1 + 0xa0) = rbp_1
    
    if (rbp_1 != 0 || r8_1 != 0)
        sub_1405c4b20(arg1 + 0x98, rbp_1, r8_1)
        memcpy(*(arg1 + 0x98), r14_1, rbp_1 * 0x1c)
    else
        *(arg1 + 0xa4) = rbp_1

*(arg1 + 0xa8) = *(arg2 + 0xa8)
return arg1
