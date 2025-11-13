// 函数: sub_141e20140
// 地址: 0x141e20140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 f== *(arg1 + 0x5c))
    int512_t zmm0
    zmm0.o = *(arg1 + 0x58)
    return zmm0

*(arg1 + 0x5c) = arg2
sub_141e6cd00(arg1 + 0x60, arg1 + 0x34, arg2, arg1 + 0x70)
float zmm0_1 = sub_141e58580(arg1 + 0x60, *(arg1 + 0x34), *(arg1 + 0x5c))
*(arg1 + 0x58) = zmm0_1
return zmm0_1
