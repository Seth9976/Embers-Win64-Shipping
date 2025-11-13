// 函数: sub_1403b4670
// 地址: 0x1403b4670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = arg5
int32_t zmm6[0x4] = zx.o(0)
int32_t zmm7[0x4] = zx.o(0)
int32_t i_9 = arg7 s>> 1
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
uint16_t zmm4[0x8]

if (arg3 == 0)
    if (arg4 != 0)
        if (arg4 == 4)
            int32_t i
            
            do
                zmm2 = zx.o(*(arg1 + arg2))
                zmm4 = zx.o(*(arg1 + (arg2 << 1)))
                zmm1 = zx.o(*r10)
                zmm0 = _mm_avg_epu8(zx.o(*arg1), zmm2)
                zmm3 = zx.o(*(r10 + arg6))
                zmm2 = _mm_avg_epu8(zmm2, zmm4)
                zmm0 = _mm_unpacklo_epi8(zmm0, 0)
                zmm2 = _mm_unpacklo_epi8(zmm2, 0)
                zmm3 = _mm_unpacklo_epi8(zmm3, 0)
                zmm1 = _mm_unpacklo_epi8(zmm1, 0)
                zmm2 = _mm_sub_epi16(zmm2, zmm3)
                zmm0 = _mm_sub_epi16(zmm0, zmm1)
                zmm6 = _mm_add_epi16(zmm6, zmm2)
                zmm2 = _mm_madd_epi16(zmm2, zmm2)
                zmm6 = _mm_add_epi16(zmm6, zmm0)
                zmm0 = _mm_madd_epi16(zmm0, zmm0)
                zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
                arg1 += arg2 << 1
                r10 += arg6 << 1
                i = i_9
                i_9 -= 1
            while (i s> 1)
            uint16_t temp0_35[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
            zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
            zmm6 = _mm_add_epi16(zmm6, temp0_35)
            int32_t temp0_38[0x4] = _mm_add_epi32(zmm7, zmm3)
            int32_t temp0_40[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
            *arg8 = temp0_38[0]
            return zx.q(_mm_add_epi32(temp0_40, _mm_shufflelo_epi16(temp0_40, 0xe))[0])
        
        int32_t i_1
        
        do
            zmm2 = zx.o(*(arg1 + arg2))
            zmm4 = zx.o(*(arg1 + (arg2 << 1)))
            zmm3 = zx.o(*(r10 + arg6))
            zmm1 = zx.o(*r10)
            zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), zmm2.q)
            zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
            zmm0 = __pmaddubsw_xmmdq_memdq(zmm0, *(zx.q(arg4 << 4) + &data_14427eef0))
            zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg4 << 4) + &data_14427eef0))
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
            zmm0 = _mm_srai_epi16(__paddw_xmmdq_memdq(zmm0, data_14427ede0), 4)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            zmm1 = _mm_unpacklo_epi8(zmm1, 0)
            zmm2 = _mm_sub_epi16(zmm2, zmm3)
            zmm0 = _mm_sub_epi16(zmm0, zmm1)
            zmm6 = _mm_add_epi16(zmm6, zmm2)
            zmm2 = _mm_madd_epi16(zmm2, zmm2)
            zmm6 = _mm_add_epi16(zmm6, zmm0)
            zmm0 = _mm_madd_epi16(zmm0, zmm0)
            zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
            arg1 += arg2 << 1
            r10 += arg6 << 1
            i_1 = i_9
            i_9 -= 1
        while (i_1 s> 1)
        uint16_t temp0_61[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
        zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
        zmm6 = _mm_add_epi16(zmm6, temp0_61)
        int32_t temp0_64[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_66[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
        *arg8 = temp0_64[0]
        return zx.q(_mm_add_epi32(temp0_66, _mm_shufflelo_epi16(temp0_66, 0xe))[0])
    
    int32_t i_2
    
    do
        zmm2 = zx.o(*(arg1 + arg2))
        zmm1 = zx.o(*r10)
        zmm3 = zx.o(*(r10 + arg6))
        zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), 0)
        zmm2 = _mm_unpacklo_epi8(zmm2, 0)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2 << 1
        r10 += arg6 << 1
        i_2 = i_9
        i_9 -= 1
    while (i_2 s> 1)
    uint16_t temp0_13[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
    zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
    zmm6 = _mm_add_epi16(zmm6, temp0_13)
    int32_t temp0_16[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_18[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
    *arg8 = temp0_16[0]
    return zx.q(_mm_add_epi32(temp0_18, _mm_shufflelo_epi16(temp0_18, 0xe))[0])

if (arg3 == 4)
    if (arg4 != 0)
        if (arg4 == 4)
            void* rcx = arg1 + arg2
            zmm0 = _mm_avg_epu8(zx.o(*arg1), zx.o(*(arg1 + 1)))
            int32_t i_3
            
            do
                zmm4 = zx.o(*(rcx + arg2))
                zmm1 = zx.o(*(rcx + arg2 + 1))
                zmm2 = _mm_avg_epu8(zx.o(*rcx), zx.o(*(rcx + 1)))
                zmm4 = _mm_avg_epu8(zmm4, zmm1)
                zmm0 = _mm_avg_epu8(zmm0, zmm2)
                zmm2 = _mm_avg_epu8(zmm2, zmm4)
                zmm1 = zx.o(*r10)
                zmm3 = zx.o(*(r10 + arg6))
                zmm0 = _mm_unpacklo_epi8(zmm0, 0)
                zmm2 = _mm_unpacklo_epi8(zmm2, 0)
                zmm3 = _mm_unpacklo_epi8(zmm3, 0)
                zmm1 = _mm_unpacklo_epi8(zmm1, 0)
                zmm2 = _mm_sub_epi16(zmm2, zmm3)
                zmm0 = _mm_sub_epi16(zmm0, zmm1)
                zmm6 = _mm_add_epi16(zmm6, zmm2)
                zmm2 = _mm_madd_epi16(zmm2, zmm2)
                zmm6 = _mm_add_epi16(zmm6, zmm0)
                zmm0 = _mm_madd_epi16(zmm0, zmm0)
                zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
                zmm0 = zmm4
                rcx += arg2 << 1
                r10 += arg6 << 1
                i_3 = i_9
                i_9 -= 1
            while (i_3 s> 1)
            uint16_t temp0_108[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
            zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
            zmm6 = _mm_add_epi16(zmm6, temp0_108)
            int32_t temp0_111[0x4] = _mm_add_epi32(zmm7, zmm3)
            int32_t temp0_113[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
            *arg8 = temp0_111[0]
            return zx.q(_mm_add_epi32(temp0_113, _mm_shufflelo_epi16(temp0_113, 0xe))[0])
        
        void* rcx_1 = arg1 + arg2
        zmm0 = _mm_avg_epu8(zx.o(*arg1), zx.o(*(arg1 + 1)))
        int32_t i_4
        
        do
            zmm4 = zx.o(*(rcx_1 + arg2))
            zmm3 = zx.o(*(rcx_1 + arg2 + 1))
            zmm2 = _mm_avg_epu8(zx.o(*rcx_1), zx.o(*(rcx_1 + 1)))
            zmm4 = _mm_avg_epu8(zmm4, zmm3)
            zmm3 = zx.o(*(r10 + arg6))
            zmm1 = zx.o(*r10)
            zmm0 = _mm_unpacklo_epi8(zmm0, zmm2.q)
            zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
            zmm0 = __pmaddubsw_xmmdq_memdq(zmm0, *(zx.q(arg4 << 4) + &data_14427eef0))
            zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg4 << 4) + &data_14427eef0))
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm0 = __paddw_xmmdq_memdq(zmm0, data_14427ede0)
            zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
            zmm0 = _mm_srai_epi16(zmm0, 4)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            zmm1 = _mm_unpacklo_epi8(zmm1, 0)
            zmm2 = _mm_sub_epi16(zmm2, zmm3)
            zmm0 = _mm_sub_epi16(zmm0, zmm1)
            zmm6 = _mm_add_epi16(zmm6, zmm2)
            zmm2 = _mm_madd_epi16(zmm2, zmm2)
            zmm6 = _mm_add_epi16(zmm6, zmm0)
            zmm0 = _mm_madd_epi16(zmm0, zmm0)
            zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
            zmm0 = zmm4
            rcx_1 += arg2 << 1
            r10 += arg6 << 1
            i_4 = i_9
            i_9 -= 1
        while (i_4 s> 1)
        uint16_t temp0_137[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
        zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
        zmm6 = _mm_add_epi16(zmm6, temp0_137)
        int32_t temp0_140[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_142[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
        *arg8 = temp0_140[0]
        return zx.q(_mm_add_epi32(temp0_142, _mm_shufflelo_epi16(temp0_142, 0xe))[0])
    
    int32_t i_5
    
    do
        zmm2 = zx.o(*(arg1 + arg2))
        zmm1 = zx.o(*r10)
        zmm0 = _mm_avg_epu8(zx.o(*arg1), zx.o(*(arg1 + 1)))
        zmm3 = zx.o(*(r10 + arg6))
        zmm2 = _mm_avg_epu8(zmm2, zx.o(*(arg1 + arg2 + 1)))
        zmm0 = _mm_unpacklo_epi8(zmm0, 0)
        zmm2 = _mm_unpacklo_epi8(zmm2, 0)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2 << 1
        r10 += arg6 << 1
        i_5 = i_9
        i_9 -= 1
    while (i_5 s> 1)
    uint16_t temp0_83[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
    zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
    zmm6 = _mm_add_epi16(zmm6, temp0_83)
    int32_t temp0_86[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_88[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
    *arg8 = temp0_86[0]
    return zx.q(_mm_add_epi32(temp0_88, _mm_shufflelo_epi16(temp0_88, 0xe))[0])

if (arg4 == 0)
    int32_t i_6
    
    do
        zmm2 = zx.o(*(arg1 + arg2))
        zmm4 = zx.o(*(arg1 + arg2 + 1))
        zmm3 = zx.o(*(r10 + arg6))
        zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), zx.q(*(arg1 + 1)))
        zmm1 = zx.o(*r10)
        zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
        zmm0 = __pmaddubsw_xmmdq_memdq(zmm0, *(zx.q(arg3 << 4) + &data_14427eef0))
        zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg3 << 4) + &data_14427eef0))
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm0 = __paddw_xmmdq_memdq(zmm0, data_14427ede0)
        zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
        zmm0 = _mm_srai_epi16(zmm0, 4)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2 << 1
        r10 += arg6 << 1
        i_6 = i_9
        i_9 -= 1
    while (i_6 s> 1)
    uint16_t temp0_163[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
    zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
    zmm6 = _mm_add_epi16(zmm6, temp0_163)
    int32_t temp0_166[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_168[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
    *arg8 = temp0_166[0]
    return zx.q(_mm_add_epi32(temp0_168, _mm_shufflelo_epi16(temp0_168, 0xe))[0])

if (arg4 == 4)
    void* rcx_2 = arg1 + arg2
    zmm0 = _mm_srai_epi16(
        __paddw_xmmdq_memdq(
            __pmaddubsw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(*arg1), zx.q(*(arg1 + 1))), 
                *(zx.q(arg3 << 4) + &data_14427eef0)), 
            data_14427ede0), 
        4)
    int32_t i_7
    
    do
        zmm4 = zx.o(*(rcx_2 + arg2))
        zmm3 = zx.o(*(rcx_2 + arg2 + 1))
        zmm2 = _mm_unpacklo_epi8(zx.o(*rcx_2), zx.q(*(rcx_2 + 1)))
        zmm4 = _mm_unpacklo_epi8(zmm4, zmm3.q)
        zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg3 << 4) + &data_14427eef0))
        zmm4 = __pmaddubsw_xmmdq_memdq(zmm4, *(zx.q(arg3 << 4) + &data_14427eef0))
        zmm1 = zx.o(*r10)
        zmm3 = zx.o(*(r10 + arg6))
        zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
        zmm4 = __paddw_xmmdq_memdq(zmm4, data_14427ede0)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        zmm4 = _mm_srai_epi16(zmm4, 4)
        zmm0 = _mm_avg_epu16(zmm0, zmm2)
        zmm2 = _mm_avg_epu16(zmm2, zmm4)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        zmm0 = zmm4
        rcx_2 += arg2 << 1
        r10 += arg6 << 1
        i_7 = i_9
        i_9 -= 1
    while (i_7 s> 1)
    uint16_t temp0_195[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
    zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
    zmm6 = _mm_add_epi16(zmm6, temp0_195)
    int32_t temp0_198[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_200[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
    *arg8 = temp0_198[0]
    return zx.q(_mm_add_epi32(temp0_200, _mm_shufflelo_epi16(temp0_200, 0xe))[0])

zmm0 = _mm_srai_epi16(
    __paddw_xmmdq_memdq(
        __pmaddubsw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(*arg1), zx.q(*(arg1 + 1))), 
            *(zx.q(arg3 << 4) + &data_14427eef0)), 
        data_14427ede0), 
    4)
zmm0 = _mm_packus_epi16(zmm0, zmm0)
void* rcx_3 = arg1 + arg2
int32_t i_8

do
    int32_t* rcx_4 = rcx_3 + arg2
    zmm4 = zx.o(*rcx_4)
    zmm3 = zx.o(*(rcx_4 + 1))
    zmm2 = _mm_unpacklo_epi8(zx.o(*rcx_3), zx.q(*(rcx_3 + 1)))
    zmm4 = _mm_unpacklo_epi8(zmm4, zmm3.q)
    zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg3 << 4) + &data_14427eef0))
    zmm4 = __pmaddubsw_xmmdq_memdq(zmm4, *(zx.q(arg3 << 4) + &data_14427eef0))
    zmm3 = zx.o(*(r10 + arg6))
    zmm1 = zx.o(*r10)
    zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
    zmm4 = __paddw_xmmdq_memdq(zmm4, data_14427ede0)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm4 = _mm_srai_epi16(zmm4, 4)
    zmm2 = _mm_packus_epi16(zmm2, zmm2)
    zmm4 = _mm_packus_epi16(zmm4, zmm4)
    zmm0 = _mm_unpacklo_epi8(zmm0, zmm2.q)
    zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
    zmm0 = __pmaddubsw_xmmdq_memdq(zmm0, *(zx.q(arg4 << 4) + &data_14427eef0))
    zmm2 = __pmaddubsw_xmmdq_memdq(zmm2, *(zx.q(arg4 << 4) + &data_14427eef0))
    zmm3 = _mm_unpacklo_epi8(zmm3, 0)
    zmm0 = __paddw_xmmdq_memdq(zmm0, data_14427ede0)
    zmm2 = __paddw_xmmdq_memdq(zmm2, data_14427ede0)
    zmm0 = _mm_srai_epi16(zmm0, 4)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm1 = _mm_unpacklo_epi8(zmm1, 0)
    zmm2 = _mm_sub_epi16(zmm2, zmm3)
    zmm0 = _mm_sub_epi16(zmm0, zmm1)
    zmm6 = _mm_add_epi16(zmm6, zmm2)
    zmm2 = _mm_madd_epi16(zmm2, zmm2)
    zmm6 = _mm_add_epi16(zmm6, zmm0)
    zmm0 = _mm_madd_epi16(zmm0, zmm0)
    zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
    zmm0 = zmm4
    rcx_3 = rcx_4 + arg2
    r10 += arg6 << 1
    i_8 = i_9
    i_9 -= 1
while (i_8 s> 1)
uint16_t temp0_236[0x8] = _mm_shufflelo_epi16(zmm6, 0xe)
zmm3 = _mm_shufflelo_epi16(zmm7, 0xe)
zmm6 = _mm_add_epi16(zmm6, temp0_236)
int32_t temp0_239[0x4] = _mm_add_epi32(zmm7, zmm3)
int32_t temp0_241[0x4] = _mm_unpacklo_epi16(zmm6, _mm_cmpgt_epi16(zx.o(0), zmm6))
*arg8 = temp0_239[0]
return zx.q(_mm_add_epi32(temp0_241, _mm_shufflelo_epi16(temp0_241, 0xe))[0])
