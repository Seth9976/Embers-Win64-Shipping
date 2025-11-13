// 函数: sub_141adeef0
// 地址: 0x141adeef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x15) = *(arg2 + 0x15)
*(arg1 + 0x16) = *(arg2 + 0x16)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x44) = *(arg2 + 0x44)

if (arg1 + 0x48 != arg2 + 0x48)
    int64_t rbp_1 = sx.q(*(arg2 + 0x50))
    int64_t r14_1 = *(arg2 + 0x48)
    int32_t r8_1 = *(arg1 + 0x54)
    *(arg1 + 0x50) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1407c3650(arg1 + 0x48, rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x48), r14_1, (rbp_1 * 0xc).d)
    else
        *(arg1 + 0x54) = rbp_1.d

if (arg1 + 0x58 != arg2 + 0x58)
    uint32_t count = *(arg2 + 0x60)
    int64_t r14_2 = *(arg2 + 0x58)
    int32_t r8_5 = *(arg1 + 0x64)
    *(arg1 + 0x60) = count
    
    if (count != 0 || r8_5 != 0)
        sub_1405da9e0(arg1 + 0x58, count, r8_5)
        memcpy(*(arg1 + 0x58), r14_2, count)
    else
        *(arg1 + 0x64) = count

sub_140627690(arg1 + 0x68, arg2 + 0x68)
return arg1
