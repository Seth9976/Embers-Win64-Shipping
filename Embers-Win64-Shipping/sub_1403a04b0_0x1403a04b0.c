// 函数: sub_1403a04b0
// 地址: 0x1403a04b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t (* r10)[0x10] = arg5
int64_t rdx = sx.q(arg2)
int64_t r9 = sx.q(arg4)
int32_t i_1 = 2
int32_t zmm0[0x4] = zx.o(0)
int32_t temp0_6[0x4]
int32_t i

do
    uint128_t zmm3 = zx.o(*(arg3 + (r9 << 1)))
    uint128_t zmm4 = zx.o(*(arg3 + r9 * 3))
    int32_t temp0_1[0x4] = _mm_unpacklo_epi32(zx.o(*arg3), zx.q(*(arg3 + r9)))
    zmm3 = _mm_unpacklo_epi32(zmm3, zmm4.q)
    int32_t zmm1[0x4] = __pavgb_xmmdq_memdq(temp0_1[0].q | zmm3.q << 0x40, *r10)
    r10 = &r10[1]
    temp0_6 = _mm_sad_epu8(zmm1, 
        _mm_unpacklo_epi32(zx.o(*arg1), zx.q(*(arg1 + rdx))).q
            | _mm_unpacklo_epi32(zx.o(*(arg1 + (rdx << 1))), zx.q(*(arg1 + rdx * 3))).q << 0x40)
    arg3 += r9 << 2
    zmm0 = _mm_add_epi32(zmm0, temp0_6)
    arg1 = &arg1[rdx]
    i = i_1
    i_1 -= 1
while (i s> 1)
temp0_6[0].q = zmm0 u>> 0x40
return zx.q(_mm_add_epi32(zmm0, temp0_6)[0])
