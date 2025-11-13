// 函数: sub_140e3a660
// 地址: 0x140e3a660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 8)
void* r9 = arg2
int32_t r10

if (r11 s>= 0x32)
    r10 = (0x64 - r11) * 2
else
    r10 = divs.dp.d(0:0x1388, r11)

bool cond:0 = data_143ccb970 s< 2
uint128_t zmm3 = _mm_shuffle_epi32(zx.o(r10), 0)

if (not(cond:0) && (r9 u> arg3 + 0x7e || r9 + 0xfc u< arg3))
    int32_t zmm5[0x4] = *U"2222"
    int32_t zmm4[0x4] = data_142ed6820
    int32_t zmm8[0x4] = data_142ed6810
    int32_t zmm9[0x4] = data_142d3f5b0
    uint128_t zmm6 = 5
    uint128_t zmm7 = 0x1f
    int64_t i_2 = 8
    int64_t i
    
    do
        int32_t zmm0[0x4] = zx.o(*arg3)
        r9 += 0x20
        arg3 = &arg3[2]
        int32_t zmm1[0x4] =
            _mm_add_epi32(_mm_mullo_epi32(_mm_cvtepi16_epi32(zmm0[0].q), zmm3), zmm5)
        float zmm2[0x4] = _mm_sra_epi32(
            _mm_shuffle_ps(_mm_mul_epi32(_mm_unpacklo_epi32(zmm1, zmm1[0].q), zmm4), 
                _mm_mul_epi32(_mm_unpackhi_epi32(zmm1, zmm1[0].q), zmm4), 0xdd), 
            zmm6)
        *(r9 - 0x20) =
            _mm_min_epi32(_mm_max_epi32(_mm_add_epi32(_mm_srl_epi32(zmm2, zmm7), zmm2), zmm9), zmm8)
        zmm1 = _mm_add_epi32(_mm_mullo_epi32(_mm_cvtepi16_epi32(zx.o(arg3[-1])[0].q), zmm3), zmm5)
        zmm2 = _mm_sra_epi32(
            _mm_shuffle_ps(_mm_mul_epi32(_mm_unpacklo_epi32(zmm1, zmm1[0].q), zmm4), 
                _mm_mul_epi32(_mm_unpackhi_epi32(zmm1, zmm1[0].q), zmm4), 0xdd), 
            zmm6)
        *(r9 - 0x10) =
            _mm_min_epi32(_mm_max_epi32(_mm_add_epi32(_mm_srl_epi32(zmm2, zmm7), zmm2), zmm9), zmm8)
        i = i_2
        i_2 -= 1
    while (i != 1)
    return i_2

int64_t i_3 = 0x40
int32_t rax_5
int64_t i_1

do
    r9 += 4
    int32_t rcx_2 = sx.d(*arg3) * r10
    arg3 += 2
    int32_t rcx_4 = 1
    int32_t rdx_3 = (rcx_2 + 0x32) s/ 0x64
    rax_5 = 0xff
    
    if (rdx_3 s> 1)
        rcx_4 = rdx_3
    
    if (rcx_4 s< 0xff)
        rax_5 = rcx_4
    
    *(r9 - 4) = rax_5
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return rax_5
