// 函数: sub_1405af700
// 地址: 0x1405af700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 9) = *(arg2 + 9)

if (arg1 + 0x10 != arg2 + 0x10)
    int64_t rbp_1 = sx.q(*(arg2 + 0x18))
    int64_t r14_1 = *(arg2 + 0x10)
    int32_t r8_1 = *(arg1 + 0x1c)
    *(arg1 + 0x18) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405c4a90(arg1 + 0x10, rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x10), r14_1, (rbp_1 << 2).d)
    else
        *(arg1 + 0x1c) = rbp_1.d

if (arg1 + 0x20 != arg2 + 0x20)
    int32_t rbp_2 = *(arg2 + 0x28)
    int64_t r14_2 = *(arg2 + 0x20)
    int32_t r8_4 = *(arg1 + 0x2c)
    *(arg1 + 0x28) = rbp_2
    
    if (rbp_2 != 0 || r8_4 != 0)
        sub_1405c4b20(arg1 + 0x20, rbp_2, r8_4)
        memcpy(*(arg1 + 0x20), r14_2, rbp_2 * 0x1c)
    else
        *(arg1 + 0x2c) = rbp_2

*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
sub_141f98dc0(arg1 + 0x38)
*(arg1 + 0x98) = *(arg2 + 0x98)
return arg1
