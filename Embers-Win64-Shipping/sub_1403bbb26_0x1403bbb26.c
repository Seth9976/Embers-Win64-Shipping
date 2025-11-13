// 函数: sub_1403bbb26
// 地址: 0x1403bbb26
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
uint128_t zmm4 = zx.o(*arg5)
int64_t rdx_1 = sx.q(arg4)
int64_t rcx = rdx_1 * 3
uint128_t zmm0 = zx.o(*arg3)
uint128_t zmm1 = zx.o(*(arg3 + rdx_1))
uint128_t zmm2 = zx.o(*(arg3 + (rdx_1 << 1)))
uint128_t zmm3 = zx.o(*(arg3 + rcx))
zmm4 = _mm_unpacklo_epi16(zmm4, zmm4.q)
zmm4 = _mm_srai_epi16(__paddw_xmmdq_memdq(_mm_unpacklo_epi32(zmm4, zmm4.q), data_14427f040), 3)
zmm0 = _mm_unpacklo_epi8(zmm0, 0)
zmm1 = _mm_unpacklo_epi8(zmm1, 0)
zmm2 = _mm_unpacklo_epi8(zmm2, 0)
zmm3 = _mm_unpacklo_epi8(zmm3, 0)
zmm0 = _mm_add_epi16(zmm0, zmm4)
zmm1 = _mm_add_epi16(zmm1, zmm4)
zmm2 = _mm_add_epi16(zmm2, zmm4)
zmm3 = _mm_add_epi16(zmm3, zmm4)
zmm0 = _mm_packus_epi16(zmm0, zx.o(0))
zmm1 = _mm_packus_epi16(zmm1, zx.o(0))
zmm2 = _mm_packus_epi16(zmm2, zx.o(0))
zmm3 = _mm_packus_epi16(zmm3, zx.o(0))
*arg3 = zmm0.q
*(arg3 + rdx_1) = zmm1.q
*(arg3 + (rdx_1 << 1)) = zmm2.q
*(arg3 + rcx) = zmm3.q
return arg1
