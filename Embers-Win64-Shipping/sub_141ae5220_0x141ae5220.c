// 函数: sub_141ae5220
// 地址: 0x141ae5220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)

if (arg1 + 0x10 != arg2 + 0x10)
    int32_t r8_1 = *(arg1 + 0x1c)
    int64_t rbp_1 = sx.q(*(arg2 + 0x18))
    int64_t r14_1 = *(arg2 + 0x10)
    *(arg1 + 0x18) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405a4be0(arg1 + 0x10, rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x10), r14_1, (rbp_1 << 4).d)
    else
        *(arg1 + 0x1c) = rbp_1.d

sub_140627690(arg1 + 0x20, arg2 + 0x20)
sub_140627690(arg1 + 0x30, arg2 + 0x30)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x49) = *(arg2 + 0x49)
return arg1
