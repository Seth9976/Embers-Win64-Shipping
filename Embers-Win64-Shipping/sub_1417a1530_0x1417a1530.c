// 函数: sub_1417a1530
// 地址: 0x1417a1530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t* result = arg1
*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *arg3
*(arg1 + 0x14) = arg3[1].d
arg1[3] = *arg4
arg1[4].d = arg4[1].d
uint128_t zmm3
zmm3.d = (*(arg1 + 0xc)).d f- *arg1
int64_t zmm2
zmm2.d = arg1[2].d.d f- *(arg1 + 4)
float zmm1 = *(arg1 + 0x14) f- arg1[1].d
zmm3.d = zmm3.d f/ _mm_cvtepi32_ps(zx.o(arg1[3].d)).d
zmm2.d = zmm2.d f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c))).d
zmm1 = zmm1 f/ _mm_cvtepi32_ps(zx.o(arg1[4].d)).d
*(arg1 + 0x24) = (_mm_unpacklo_ps(zmm3, zmm2)).q
*(arg1 + 0x2c) = zmm1
uint64_t rcx = zx.q(arg5)

if (rcx.d != 0)
    uint128_t zmm4
    zmm4.d = float.s(rcx)
    zmm2.d = (*(result + 0x28)).d f* zmm4.d
    zmm3.d = (*(result + 0x2c)).d f* zmm4.d
    uint128_t zmm0
    zmm0.d = (*result).d f- zmm4.d f* *(result + 0x24)
    *result = zmm0.d
    zmm0.d = (*(result + 4)).d f- zmm2.d
    *(result + 4) = zmm0.d
    zmm0.d = (*(result + 8)).d f- zmm3.d
    *(result + 8) = zmm0.d
    zmm0.d = zmm4.d f* *(result + 0x24)
    zmm0.d = zmm0.d f+ *(result + 0xc)
    zmm2.d = (*(result + 0x2c)).d f* zmm4.d
    zmm1 = *(result + 0x28) f* zmm4.d f+ result[1].d
    *(result + 0xc) = zmm0.d
    zmm2.d = zmm2.d f+ *(result + 0x14)
    zmm0.d = float.s(zx.q(rcx.d * 2))
    result[1].d = zmm1
    *(result + 0x14) = zmm2.d
    int32_t rax_4 = int.d(zmm0.d)
    *(result + 0x18) += rax_4
    *(result + 0x1c) += rax_4
    result[2].d += rax_4

return result
