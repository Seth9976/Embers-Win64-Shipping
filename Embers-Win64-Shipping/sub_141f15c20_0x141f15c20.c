// 函数: sub_141f15c20
// 地址: 0x141f15c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *(arg1 + 0xb8)
*arg2 = (_mm_unpacklo_ps(*(arg1 + 0xb0), (*(arg1 + 0xb4)).q)).q
arg2[1].d = zmm0.d
*(arg2 + 0xc) = *(arg1 + 0x174)
zmm0 = *(arg1 + 0x38)
arg2[2] = (_mm_unpacklo_ps(*(arg1 + 0x30), (*(arg1 + 0x34)).q)).q
arg2[3].d = zmm0.d
*(arg2 + 0x1c) = *(arg1 + 0x180)
zmm0 = *(arg1 + 0x60) ^ 0x80000000
arg2[4] = (_mm_unpacklo_ps(*(arg1 + 0x40) ^ 0x80000000, (*(arg1 + 0x50) ^ 0x80000000).q)).q
arg2[5].d = zmm0.d
int128_t zmm2 = *(arg1 + 0x58)
float zmm1[0x4] = *(arg1 + 0x48)
zmm0 = *(arg1 + 0x68)
arg2[8].d = 0xc0000000
*(arg2 + 0x44) = 0x3f800000
arg2[6] = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
arg2[7].d = zmm0.d
*(arg2 + 0x2c) = *(arg1 + 0xe4)
*(arg2 + 0x3c) = *(arg1 + 0x184)
arg2[9].d = *(arg1 + 0x188)
*(arg2 + 0x4c) = *(arg1 + 0x18c)
void* result = data_143f10dc8
arg2[0xb] = *(result + 0x10)
arg2[0xa].d = 0
*(arg2 + 0x54) = 0xc0000000
return result
