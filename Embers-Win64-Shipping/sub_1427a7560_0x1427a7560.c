// 函数: sub_1427a7560
// 地址: 0x1427a7560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*arg3 u>> 1).b & 1) == 0)
    int64_t zmm2 = data_143dbb1f8.q
    int32_t var_30_1 = 0x3f800000
    int32_t var_24 = data_143dbb200
    uint64_t var_20 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    int32_t var_18 = 0x3f800000
    *(arg2 + 0x1c) = 0
    uint128_t zmm0
    zmm0.q = zmm2
    arg2[3].b = 0
    *arg2 = zmm0
    arg2[2] = var_20
    return arg2

*(arg1 + 0x30) = 2
*arg2 = data_143dbb1f8.q
arg2[1].d = data_143dbb200
int32_t var_30 = 0x3f800000
*(arg2 + 0xc) = _mm_unpacklo_ps(zx.o(0), 0)
*(arg2 + 0x14) = 0x3f800000
*arg2 = *(arg3 + 0x9c)
arg2[2] = *(arg3 + 0xac)
arg2[3].b = 1
*(arg2 + 0x1c) = *(arg3 + 0x8c)
return arg2
