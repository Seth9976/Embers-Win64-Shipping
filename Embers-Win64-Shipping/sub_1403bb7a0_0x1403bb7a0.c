// 函数: sub_1403bb7a0
// 地址: 0x1403bb7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = _mm_mullo_epi16(__pinsrw_xmmdq_memw_immb(zx.o(*arg1), arg1[8].w, 4), 
    __pinsrw_xmmdq_memw_immb(zx.o(*arg2), *arg2, 4))
*arg1 = 0
arg1[8] = 0
int64_t rdx_1 = sx.q(arg4)
zmm4 = _mm_srai_epi16(
    __paddw_xmmdq_memdq(_mm_shufflehi_epi16(_mm_shufflelo_epi16(zmm4, 0), 0), data_14427f040), 3)
uint128_t zmm1 = zx.o(*(arg3 + rdx_1))
uint128_t zmm2 = zx.o(*(arg3 + (rdx_1 << 1)))
uint128_t zmm3 = zx.o(*(arg3 + rdx_1 * 3))
uint128_t zmm0 = _mm_unpacklo_epi8(zx.o(*arg3), 0)
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
int64_t* result = arg3 + (rdx_1 << 1)
*result = zmm2.q
*(result + rdx_1) = zmm3.q
return result
