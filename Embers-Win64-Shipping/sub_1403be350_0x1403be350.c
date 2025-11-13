// 函数: sub_1403be350
// 地址: 0x1403be350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r10 = arg6
int128_t* result = arg8

if (arg2 == 4)
    int32_t i
    
    do
        uint64_t st2 = zx.q(*(r10 + arg7))
        uint64_t st1 = zx.q(*result)
        uint64_t st3 = zx.q(*(result + arg9))
        uint64_t st0 = _m_punpckhwd(zx.q(*r10), arg5)
        st1 = _m_punpckhwd(st1, arg5)
        st2 = _m_punpckhwd(st2, arg5)
        st3 = _m_punpckhwd(st3, arg5)
        int64_t temp0_59 = _m_psubw(st0, st1)
        int64_t temp0_60 = _m_psubw(st2, st3)
        *arg3 = temp0_59
        *(arg3 + (arg4 << 1)) = temp0_60
        arg3 += arg4 << 2
        r10 += arg7 << 1
        result += arg9 << 1
        i = arg1
        arg1 -= 2
    while (i s> 2)
    return result

int32_t zmm0[0x4]
int32_t zmm1[0x4]
int32_t zmm2[0x4]
int32_t zmm3[0x4]

if (arg2 == 8)
    int32_t i_1
    
    do
        zmm2 = zx.o(*(r10 + arg7))
        zmm1 = zx.o(*result)
        zmm3 = zx.o(*(result + arg9))
        zmm0 = _mm_unpacklo_epi8(zx.o(*r10), 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_unpacklo_epi8(zmm2, 0)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        *arg3 = zmm0
        *(arg3 + (arg4 << 1)) = zmm2
        arg3 += arg4 << 2
        r10 += arg7 << 1
        result += arg9 << 1
        i_1 = arg1
        arg1 -= 2
    while (i_1 s> 2)
    return result

int32_t zmm4[0x4]
int32_t zmm5[0x4]

if (arg2 == 0x10)
    int32_t i_2
    
    do
        zmm0 = *r10
        zmm4 = *(r10 + arg7)
        zmm1 = *result
        zmm5 = *(result + arg9)
        zmm2 = _mm_unpackhi_epi8(zmm0, 0)
        zmm3 = _mm_unpackhi_epi8(zmm1, 0)
        zmm0 = _mm_unpacklo_epi8(zmm0, 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm1 = _mm_unpackhi_epi8(zmm4, 0)
        zmm3 = _mm_unpackhi_epi8(zmm5, 0)
        zmm4 = _mm_unpacklo_epi8(zmm4, 0)
        zmm5 = _mm_unpacklo_epi8(zmm5, 0)
        zmm1 = _mm_sub_epi16(zmm1, zmm3)
        zmm4 = _mm_sub_epi16(zmm4, zmm5)
        *arg3 = zmm0
        *(arg3 + 0x10) = zmm2
        *(arg3 + (arg4 << 1)) = zmm4
        *(arg3 + (arg4 << 1) + 0x10) = zmm1
        arg3 += arg4 << 2
        result += arg9 << 1
        r10 += arg7 << 1
        i_2 = arg1
        arg1 -= 2
    while (i_2 s> 2)
    return result

if (arg2 == 0x20)
    int32_t i_3
    
    do
        zmm0 = *r10
        zmm4 = r10[1]
        zmm1 = *result
        zmm5 = result[1]
        zmm2 = _mm_unpackhi_epi8(zmm0, 0)
        zmm3 = _mm_unpackhi_epi8(zmm1, 0)
        zmm0 = _mm_unpacklo_epi8(zmm0, 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm1 = _mm_unpackhi_epi8(zmm4, 0)
        zmm3 = _mm_unpackhi_epi8(zmm5, 0)
        zmm4 = _mm_unpacklo_epi8(zmm4, 0)
        zmm5 = _mm_unpacklo_epi8(zmm5, 0)
        zmm1 = _mm_sub_epi16(zmm1, zmm3)
        zmm4 = _mm_sub_epi16(zmm4, zmm5)
        *arg3 = zmm0
        *(arg3 + 0x10) = zmm2
        *(arg3 + 0x20) = zmm4
        *(arg3 + 0x30) = zmm1
        arg3 += arg4 << 1
        result += arg9
        r10 += arg7
        i_3 = arg1
        arg1 -= 1
    while (i_3 s> 1)
    return result

int32_t i_4

do
    zmm0 = *r10
    zmm4 = r10[1]
    zmm1 = *result
    zmm5 = result[1]
    zmm2 = _mm_unpackhi_epi8(zmm0, 0)
    zmm3 = _mm_unpackhi_epi8(zmm1, 0)
    zmm0 = _mm_unpacklo_epi8(zmm0, 0)
    zmm1 = _mm_unpacklo_epi8(zmm1, 0)
    zmm2 = _mm_sub_epi16(zmm2, zmm3)
    zmm0 = _mm_sub_epi16(zmm0, zmm1)
    zmm1 = _mm_unpackhi_epi8(zmm4, 0)
    zmm3 = _mm_unpackhi_epi8(zmm5, 0)
    zmm4 = _mm_unpacklo_epi8(zmm4, 0)
    zmm5 = _mm_unpacklo_epi8(zmm5, 0)
    zmm1 = _mm_sub_epi16(zmm1, zmm3)
    zmm4 = _mm_sub_epi16(zmm4, zmm5)
    *arg3 = zmm0
    *(arg3 + 0x10) = zmm2
    *(arg3 + 0x20) = zmm4
    *(arg3 + 0x30) = zmm1
    zmm0 = r10[2]
    zmm4 = r10[3]
    zmm1 = result[2]
    zmm5 = result[3]
    zmm2 = _mm_unpackhi_epi8(zmm0, 0)
    zmm3 = _mm_unpackhi_epi8(zmm1, 0)
    zmm0 = _mm_unpacklo_epi8(zmm0, 0)
    zmm1 = _mm_unpacklo_epi8(zmm1, 0)
    zmm2 = _mm_sub_epi16(zmm2, zmm3)
    zmm0 = _mm_sub_epi16(zmm0, zmm1)
    zmm1 = _mm_unpackhi_epi8(zmm4, 0)
    zmm3 = _mm_unpackhi_epi8(zmm5, 0)
    zmm4 = _mm_unpacklo_epi8(zmm4, 0)
    zmm5 = _mm_unpacklo_epi8(zmm5, 0)
    zmm1 = _mm_sub_epi16(zmm1, zmm3)
    zmm4 = _mm_sub_epi16(zmm4, zmm5)
    *(arg3 + 0x40) = zmm0
    *(arg3 + 0x50) = zmm2
    *(arg3 + 0x60) = zmm4
    *(arg3 + 0x70) = zmm1
    arg3 += arg4 << 1
    result += arg9
    r10 += arg7
    i_4 = arg1
    arg1 -= 1
while (i_4 s> 1)
return result
