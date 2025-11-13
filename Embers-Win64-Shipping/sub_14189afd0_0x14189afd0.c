// 函数: sub_14189afd0
// 地址: 0x14189afd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(arg2 f<= *(arg1 + 0x58)))
    *(arg1 + 0x58) = arg2
    *(arg1 + 0x60) = arg2 f* *(arg1 + 0x30)
    return 

if (arg2 f>= *(arg1 + 0x60))
    return 

*(arg1 + 0x60) = arg2
double zmm0 = arg2 f/ *(arg1 + 0x30)
*(arg1 + 0x58) = zmm0

if (not(zmm0 > arg2))
    *(arg1 + 0x60) = zmm0 * 0.59999999999999998
