// 函数: sub_141fd7690
// 地址: 0x141fd7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[6].b |= 3
*arg1 = &data_1432952b8
arg1[5] = &data_143294f00
arg1[0xa] = 0
*(arg1 + 0x64) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
int32_t var_10 = 0x3f800000
*(arg1 + 0x6c) = 0x3f800000
int32_t var_10_1 = 0x3f800000
*(arg1 + 0x7c) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
*(arg1 + 0x84) = 0x3f800000
return arg1
