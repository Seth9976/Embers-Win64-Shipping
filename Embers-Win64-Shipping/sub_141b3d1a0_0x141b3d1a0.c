// 函数: sub_141b3d1a0
// 地址: 0x141b3d1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_140597df0(&arg1[1], &arg2[1])

if (&arg1[3] != &arg2[3])
    int32_t r8_1 = *(arg1 + 0x24)
    int64_t rbp_1 = arg2[3]
    uint32_t count = arg2[4].d
    arg1[4].d = count
    
    if (count != 0 || r8_1 != 0)
        sub_1405da9e0(&arg1[3], count, r8_1)
        memcpy(arg1[3], rbp_1, count)
    else
        *(arg1 + 0x24) = count

return arg1
