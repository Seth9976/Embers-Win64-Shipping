// 函数: sub_141b380e0
// 地址: 0x141b380e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14086c240(arg1 + 8, arg2 + 8)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x38) = *(arg2 + 0x38)

if (arg1 + 0x40 != arg2 + 0x40)
    int32_t r8_1 = *(arg1 + 0x4c)
    int64_t rbp_1 = *(arg2 + 0x40)
    int64_t rsi_1 = sx.q(*(arg2 + 0x48))
    *(arg1 + 0x48) = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1407751d0(arg1 + 0x40, rsi_1.d, r8_1)
        memcpy(*(arg1 + 0x40), rbp_1, (rsi_1 * 0x28).d)
    else
        *(arg1 + 0x4c) = rsi_1.d

sub_141f98dc0(arg1 + 0x50)
return arg1
