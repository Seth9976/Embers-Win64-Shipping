// 函数: sub_141c213f0
// 地址: 0x141c213f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)

if (arg1 + 0x18 != arg2 + 0x18)
    uint32_t count = *(arg2 + 0x20)
    int64_t r14_1 = *(arg2 + 0x18)
    int32_t r8_1 = *(arg1 + 0x24)
    *(arg1 + 0x20) = count
    
    if (count != 0 || r8_1 != 0)
        sub_1405da9e0(arg1 + 0x18, count, r8_1)
        memcpy(*(arg1 + 0x18), r14_1, count)
    else
        *(arg1 + 0x24) = 0

if (arg1 + 0x28 != arg2 + 0x28)
    int64_t rbp_1 = sx.q(*(arg2 + 0x30))
    int64_t r14_2 = *(arg2 + 0x28)
    int32_t r8_3 = *(arg1 + 0x34)
    *(arg1 + 0x30) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_3 != 0)
        sub_1405a4be0(arg1 + 0x28, rbp_1.d, r8_3)
        memcpy(*(arg1 + 0x28), r14_2, (rbp_1 << 4).d)
    else
        *(arg1 + 0x34) = 0

if (arg1 + 0x38 != arg2 + 0x38)
    int64_t rbp_2 = sx.q(*(arg2 + 0x40))
    int64_t r14_3 = *(arg2 + 0x38)
    int32_t r8_6 = *(arg1 + 0x44)
    *(arg1 + 0x40) = rbp_2.d
    
    if (rbp_2.d != 0 || r8_6 != 0)
        sub_1405c4a00(arg1 + 0x38, rbp_2.d, r8_6)
        memcpy(*(arg1 + 0x38), r14_3, (rbp_2 << 3).d)
    else
        *(arg1 + 0x44) = 0

if (arg1 + 0x48 != arg2 + 0x48)
    int64_t rsi_3 = sx.q(*(arg2 + 0x50))
    int64_t rbp_3 = *(arg2 + 0x48)
    int32_t r8_9 = *(arg1 + 0x54)
    *(arg1 + 0x50) = rsi_3.d
    
    if (rsi_3.d != 0 || r8_9 != 0)
        sub_1405c4a00(arg1 + 0x48, rsi_3.d, r8_9)
        memcpy(*(arg1 + 0x48), rbp_3, (rsi_3 << 3).d)
    else
        *(arg1 + 0x54) = 0

return arg1
