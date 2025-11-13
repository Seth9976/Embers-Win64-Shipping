// 函数: sub_140a1fe40
// 地址: 0x140a1fe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *arg1
int32_t* rsi = arg1[1]
uint128_t zmm6 = zx.o(rdi)
zmm6 = _mm_unpacklo_epi64(zmm6, zmm6.q)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
*rdi += 1
int32_t i_1 = 0
int64_t i_2 = 0x3e8

if (data_143ccb970 s< 2)
    int64_t i
    
    do
        uint32_t rdx_2 = (rdi u>> 4).d
        rdi = &rdi[2]
        int32_t r8_2 = (0x9e3779b9 - rdx_2) ^ rdx_2 << 8
        int32_t rcx_3 = neg.d(r8_2 + rdx_2) ^ r8_2 u>> 0xd
        int32_t rdx_5 = (rdx_2 - r8_2 - rcx_3) ^ rcx_3 u>> 0xc
        int32_t r8_5 = (r8_2 - rdx_5 - rcx_3) ^ rdx_5 << 0x10
        int32_t rcx_6 = (rcx_3 - r8_5 - rdx_5) ^ r8_5 u>> 5
        int32_t rdx_8 = (rdx_5 - r8_5 - rcx_6) ^ rcx_6 u>> 3
        int32_t r8_8 = (r8_5 - rdx_8 - rcx_6) ^ rdx_8 << 0xa
        i_1 += (rcx_6 - r8_8 - rdx_8) ^ r8_8 u>> 0xf
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    int128_t zmm11 = data_142e11d00
    int128_t zmm12 = data_142e51f40
    uint128_t zmm14 = 4
    uint128_t zmm10 = 0
    int128_t var_c8
    __builtin_memset(&var_c8, 0, 0x20)
    uint128_t zmm9 = 0
    uint128_t zmm8 = 0xd
    uint128_t zmm13 = 3
    int32_t temp0_1[0x4] = _mm_srl_epi32(zx.o(0), zmm8)
    uint128_t zmm15 = 8
    int32_t zmm2[0x4]
    
    do
        uint128_t zmm0 = 0
        uint32_t zmm4_1[0x4] = _mm_sub_epi32(
            _mm_shuffle_epi32(
                _mm_srl_epi64(
                    _mm_add_epi64(
                        _mm_sll_epi64(
                            _mm_cvtepi32_epi64(_mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1), 0), 
                                zx.o(zmm11.q)).q), 
                            zmm13), 
                        zmm6), 
                    zmm14), 
                0xd8), 
            zmm0) ^ zx.o(temp0_1[0].q)
        uint128_t zmm3 = _mm_sub_epi32(_mm_sub_epi32(zx.o(zmm12.q), zmm4_1), zmm0)
            ^ _mm_sll_epi32(zmm4_1, zx.o(zmm15.q))
        int32_t temp0_13[0x4] = _mm_sub_epi32(0, zmm3)
        uint128_t zmm1 = _mm_srl_epi32(zmm3, zx.o(zmm8.q))
        zmm2 = _mm_sub_epi32(temp0_13, zmm4_1) ^ zmm1
        zmm4_1 = _mm_sub_epi32(_mm_sub_epi32(zmm4_1, zmm3), zmm2) ^ _mm_srl_epi32(zmm2, 0xc)
        zmm3 = _mm_sub_epi32(zmm3, zmm4_1)
        zmm1 = _mm_sll_epi32(zmm4_1, 0x10)
        zmm3 = _mm_sub_epi32(zmm3, zmm2) ^ zmm1
        int32_t temp0_22[0x4] = _mm_sub_epi32(zmm2, zmm3)
        zmm1 = _mm_srl_epi32(zmm3, 5)
        zmm2 = _mm_sub_epi32(temp0_22, zmm4_1) ^ zmm1
        zmm4_1 = _mm_sub_epi32(_mm_sub_epi32(zmm4_1, zmm3), zmm2) ^ _mm_srl_epi32(zmm2, 3)
        zmm3 = _mm_sub_epi32(_mm_sub_epi32(zmm3, zmm4_1), zmm2) ^ _mm_sll_epi32(zmm4_1, 0xa)
        int32_t temp0_31[0x4] = _mm_sub_epi32(zmm2, zmm3)
        zmm1 = _mm_shuffle_epi32(zx.o(i_1 + 2), 0)
        zmm2 = _mm_sub_epi32(temp0_31, zmm4_1) ^ _mm_srl_epi32(zmm3, 0xf)
        zmm1 = _mm_add_epi32(zmm1, zx.o(zmm11.q))
        zmm0 = 0
        zmm10 = _mm_add_epi32(zx.o(zmm10.q), zmm2)
        zmm4_1 = _mm_sub_epi32(
            _mm_shuffle_epi32(
                _mm_srl_epi64(
                    _mm_add_epi64(_mm_sll_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm13), zmm6), zmm14), 
                0xd8), 
            zmm0) ^ zx.o(temp0_1[0].q)
        i_1 += 4
        zmm3 = _mm_sub_epi32(_mm_sub_epi32(zx.o(zmm12.q), zmm4_1), zmm0)
            ^ _mm_sll_epi32(zmm4_1, zx.o(zmm15.q))
        int32_t temp0_47[0x4] = _mm_sub_epi32(_mm_sub_epi32(0, zmm3), zmm4_1)
        zmm4_1 = _mm_sub_epi32(zmm4_1, zmm3)
        zmm2 = temp0_47 ^ _mm_srl_epi32(zmm3, zx.o(zmm8.q))
        zmm4_1 = _mm_sub_epi32(zmm4_1, zmm2) ^ _mm_srl_epi32(zmm2, 0xc)
        zmm3 = _mm_sub_epi32(_mm_sub_epi32(zmm3, zmm4_1), zmm2) ^ _mm_sll_epi32(zmm4_1, 0x10)
        int32_t temp0_56[0x4] = _mm_sub_epi32(_mm_sub_epi32(zmm2, zmm3), zmm4_1)
        zmm4_1 = _mm_sub_epi32(zmm4_1, zmm3)
        zmm2 = temp0_56 ^ _mm_srl_epi32(zmm3, 5)
        zmm4_1 = _mm_sub_epi32(zmm4_1, zmm2) ^ _mm_srl_epi32(zmm2, 3)
        zmm3 = _mm_sub_epi32(_mm_sub_epi32(zmm3, zmm4_1), zmm2) ^ _mm_sll_epi32(zmm4_1, 0xa)
        zmm9 = _mm_add_epi32(zx.o(zmm9.q), 
            _mm_sub_epi32(_mm_sub_epi32(zmm2, zmm3), zmm4_1) ^ _mm_srl_epi32(zmm3, 0xf))
    while (i_1 s< 0x3e8)
    
    zmm2 = zx.o(_mm_add_epi32(zx.o(zmm9.q), zx.o(zmm10.q)).q)
    int32_t temp0_70[0x4] = _mm_add_epi32(zmm2, _mm_bsrli_si128(zmm2, 8))
    i_1 = _mm_add_epi32(temp0_70, _mm_bsrli_si128(temp0_70, 4))[0]

int64_t performanceCount_1
int64_t result = QueryPerformanceCounter(&performanceCount_1)
*rsi += (i_1 & 1) - performanceCount.d + performanceCount_1.d
return result
