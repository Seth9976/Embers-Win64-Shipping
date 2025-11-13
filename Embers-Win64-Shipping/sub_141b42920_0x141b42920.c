// 函数: sub_141b42920
// 地址: 0x141b42920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14086c240(arg1 + 8, arg2 + 8)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x19) = *(arg2 + 0x19)

if (arg1 + 0x20 != arg2 + 0x20)
    int32_t r8_1 = *(arg1 + 0x2c)
    int64_t rbp_1 = *(arg2 + 0x20)
    uint32_t count = *(arg2 + 0x28)
    *(arg1 + 0x28) = count
    
    if (count != 0 || r8_1 != 0)
        sub_1405da9e0(arg1 + 0x20, count, r8_1)
        memcpy(*(arg1 + 0x20), rbp_1, count)
    else
        *(arg1 + 0x2c) = count

sub_141f98dc0(arg1 + 0x30)
return arg1
