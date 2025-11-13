// 函数: sub_14038d100
// 地址: 0x14038d100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result[0x4] = *arg3
uint8_t zmm4[0x10] = arg3[1]
int64_t r8 = arg2 * 3
uint8_t (* r9_1)[0x10] = &arg1[arg2]
int32_t zmm1[0x4] = data_14427e2d0
int32_t temp0[0x4] = __pshufb_xmmdq_memdq(zmm4, data_14427e2e0)
int32_t zmm3[0x4] = _mm_avg_epu8(temp0, zmm4)
int128_t zmm5 = result u>> 8 | zmm4 << 0x78
uint8_t zmm6[0x10] = result u>> 0x10 | zmm4 << 0x70
zmm4 =
    _mm_avg_epu8(_mm_shuffle_epi8(zmm4, zmm1), _mm_sub_epi8(zmm3, (temp0 ^ zmm4) & data_14427e270))
zmm3 = _mm_avg_epu8(result, zmm6)
result = (result ^ zmm6) & data_14427e270
zmm5 = _mm_avg_epu8(zmm5, _mm_sub_epi8(zmm3, result))
int32_t i_1 = 4
int32_t i

do
    *arg1 = zmm5
    arg1[1] = zmm4
    *r9_1 = zmm4
    zmm3 = zmm5 u>> 8 | zmm4 << 0x78
    zmm4 = _mm_shuffle_epi8(zmm4, zmm1)
    *(arg1 + arg2) = zmm3
    *(arg1 + arg2 + 0x10) = zmm4
    *(r9_1 + arg2) = zmm4
    zmm5 = zmm3 u>> 8 | zmm4 << 0x78
    zmm4 = _mm_shuffle_epi8(zmm4, zmm1)
    *(arg1 + (arg2 << 1)) = zmm5
    *(arg1 + (arg2 << 1) + 0x10) = zmm4
    *(r9_1 + (arg2 << 1)) = zmm4
    zmm3 = zmm5 u>> 8 | zmm4 << 0x78
    zmm4 = _mm_shuffle_epi8(zmm4, zmm1)
    *(arg1 + r8) = zmm3
    *(arg1 + r8 + 0x10) = zmm4
    *(r9_1 + r8) = zmm4
    zmm5 = zmm3 u>> 8 | zmm4 << 0x78
    zmm4 = _mm_shuffle_epi8(zmm4, zmm1)
    arg1 += arg2 << 2
    r9_1 = &(*r9_1)[arg2 << 2]
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[1] = zmm4
*(arg1 + arg2 + 0x10) = zmm4
*(arg1 + (arg2 << 1) + 0x10) = zmm4
*(arg1 + r8 + 0x10) = zmm4
void* rcx = arg1 + (arg2 << 2)
*(rcx + 0x10) = zmm4
*(rcx + arg2 + 0x10) = zmm4
*(rcx + (arg2 << 1) + 0x10) = zmm4
*(rcx + r8 + 0x10) = zmm4
void* rcx_1 = rcx + (arg2 << 2)
*(rcx_1 + 0x10) = zmm4
*(rcx_1 + arg2 + 0x10) = zmm4
*(rcx_1 + (arg2 << 1) + 0x10) = zmm4
*(rcx_1 + r8 + 0x10) = zmm4
void* rcx_2 = rcx_1 + (arg2 << 2)
*(rcx_2 + 0x10) = zmm4
*(rcx_2 + arg2 + 0x10) = zmm4
*(rcx_2 + (arg2 << 1) + 0x10) = zmm4
*(rcx_2 + r8 + 0x10) = zmm4
return result
