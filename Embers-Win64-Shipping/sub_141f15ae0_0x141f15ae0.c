// 函数: sub_141f15ae0
// 地址: 0x141f15ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = data_143dbb1f8.q
arg2[1].d = data_143dbb200
*(arg2 + 0xc) = 0
uint128_t zmm2
zmm2.d = (*(arg1 + 0x18c)).d f* *(arg1 + 0x30)
uint128_t zmm0
zmm0.d = (*(arg1 + 0x194)).d f* *(arg1 + 0x38)
float zmm1[0x4] = *(arg1 + 0x190)
zmm1[0] = zmm1[0] f* *(arg1 + 0x34)
*(arg2 + 0x1c) = 0
arg2[2] = (_mm_unpacklo_ps(zmm2, zmm1[0].q)).q
arg2[3].d = zmm0.d
zmm0 = *(arg1 + 0x60)
arg2[4] = (_mm_unpacklo_ps(*(arg1 + 0x40) ^ 0x80000000, (*(arg1 + 0x50) ^ 0x80000000).q)).q
arg2[5].d = (zmm0 ^ 0x80000000).d
zmm1 = *(arg1 + 0x40) ^ 0x80000000
int32_t var_10_2 = (*(arg1 + 0x60) ^ 0x80000000).d
zmm2 = *(arg1 + 0x50) ^ 0x80000000
arg2[8] = 0
arg2[6] = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
arg2[7].d = var_10_2
*(arg2 + 0x2c) = *(arg1 + 0xe4)
zmm0.d = (*(arg1 + 0x1c4)).d f* 0.00872664619f
*(arg2 + 0x3c) = sinf(zmm0.d)
float zmm0_2 = sinf(*(arg1 + 0x1c8) * 0.00872664619f)
*(arg2 + 0x4c) = 0
arg2[9].d = zmm0_2
void* result = data_143f10dc8
arg2[0xb] = *(result + 0x10)
return result
