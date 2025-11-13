// 函数: sub_141adad70
// 地址: 0x141adad70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)

if (arg1 + 0x10 != arg2 + 0x10)
    int64_t rbp_1 = sx.q(*(arg2 + 0x18))
    int64_t r14_1 = *(arg2 + 0x10)
    int32_t r8_1 = *(arg1 + 0x1c)
    *(arg1 + 0x18) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405a4be0(arg1 + 0x10, rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x10), r14_1, (rbp_1 << 4).d)
    else
        *(arg1 + 0x1c) = rbp_1.d

sub_140627690(arg1 + 0x20, arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x31) = *(arg2 + 0x31)
*(arg1 + 0x32) = *(arg2 + 0x32)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x40) = *(arg2 + 0x40)

if (arg1 + 0x48 != arg2 + 0x48)
    int64_t rbp_2 = sx.q(*(arg2 + 0x50))
    int64_t r14_2 = *(arg2 + 0x48)
    int32_t r8_4 = *(arg1 + 0x54)
    *(arg1 + 0x50) = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1405a4b40(arg1 + 0x48, rbp_2.d, r8_4)
        memcpy(*(arg1 + 0x48), r14_2, (rbp_2 * 0x30).d)
    else
        *(arg1 + 0x54) = rbp_2.d

sub_140627690(arg1 + 0x58, arg2 + 0x58)
sub_140627690(arg1 + 0x68, arg2 + 0x68)
sub_141ada350(arg1 + 0x78, arg2 + 0x78)
sub_14090a0d0(arg1 + 0x88, arg2 + 0x88)
return arg1
