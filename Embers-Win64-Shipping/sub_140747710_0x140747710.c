// 函数: sub_140747710
// 地址: 0x140747710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].q = arg2[1].q

if (arg1 + 0x18 != arg2 + 0x18)
    int32_t r8_1 = *(arg1 + 0x24)
    int64_t rbp_1 = *(arg2 + 0x18)
    uint32_t count = arg2[2].d
    arg1[2].d = count
    
    if (count != 0 || r8_1 != 0)
        sub_1405da9e0(arg1 + 0x18, count, r8_1)
        memcpy(*(arg1 + 0x18), rbp_1, count)
    else
        *(arg1 + 0x24) = count

return arg1
