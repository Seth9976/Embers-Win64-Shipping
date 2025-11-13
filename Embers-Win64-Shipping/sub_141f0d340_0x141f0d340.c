// 函数: sub_141f0d340
// 地址: 0x141f0d340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xe8) & 0x10) != 0)
    float zmm4 = *(arg1 + 0xd4)
    float zmm2 = *(arg1 + 0xd0)
    float zmm5 = *(arg1 + 0xd8)
    int128_t zmm6 = arg3[1].d
    uint128_t zmm7 = *arg3
    uint128_t zmm8 = *(arg3 + 4)
    uint128_t zmm0
    zmm0.d = zmm8.d f* zmm4
    float zmm3 = zmm7.d * zmm2 f+ zmm0.d + zmm6.d * zmm5
    zmm7.d = zmm7.d f- zmm2 * zmm3
    zmm8.d = zmm8.d f- zmm4 * zmm3
    zmm6.d = zmm6.d f- zmm5 * zmm3
    *arg3 = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
    arg3[1].d = zmm6.d

int32_t rax_2 = arg3[1].d
*arg2 = *arg3
arg2[1].d = rax_2
return arg2
