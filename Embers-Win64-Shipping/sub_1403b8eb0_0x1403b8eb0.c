// 函数: sub_1403b8eb0
// 地址: 0x1403b8eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = arg5
uint8_t (* rax)[0x10] = arg7
int32_t zmm6[0x4] = zx.o(0)
int32_t zmm7[0x4] = zx.o(0)
int32_t i_9 = arg9 s>> 1
int64_t rdi_1 = arg8 << 1
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4
char zmm8[0x10]
int16_t zmm10[0x8]

if (arg3 == 0)
    if (arg4 != 0)
        if (arg4 == 4)
            int32_t i
            
            do
                zmm2 = *(arg1 + arg2) | *(arg1 + (arg2 << 1)) << 0x40
                zmm1 = zx.o(*r10)
                zmm3 = zx.o(*(r10 + arg6))
                zmm0 = _mm_avg_epu8(*arg1 | zmm2.q << 0x40, zmm2)
                zmm1 = _mm_unpacklo_epi8(zmm1, 0)
                zmm0 = __pavgb_xmmdq_memdq(zmm0, *rax)
                zmm3 = _mm_unpacklo_epi8(zmm3, 0)
                zmm2 = _mm_unpackhi_epi8(zmm0, 0)
                zmm0 = _mm_unpacklo_epi8(zmm0, 0)
                zmm2 = _mm_sub_epi16(zmm2, zmm3)
                zmm0 = _mm_sub_epi16(zmm0, zmm1)
                zmm6 = _mm_add_epi16(zmm6, zmm2)
                zmm2 = _mm_madd_epi16(zmm2, zmm2)
                zmm6 = _mm_add_epi16(zmm6, zmm0)
                zmm0 = _mm_madd_epi16(zmm0, zmm0)
                zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
                arg1 += arg2 << 1
                r10 += arg6 << 1
                rax = &(*rax)[rdi_1]
                i = i_9
                i_9 -= 1
            while (i s> 1)
            int64_t temp0_38 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            zmm3.q = zmm7 u>> 0x40
            zmm4 = _mm_unpacklo_epi16(zmm6, temp0_38)
            int32_t temp0_40[0x4] = _mm_unpackhi_epi16(zmm6, temp0_38)
            int32_t temp0_41[0x4] = _mm_add_epi32(zmm7, zmm3)
            int32_t temp0_42[0x4] = _mm_add_epi32(temp0_40, zmm4)
            zmm4.q = temp0_42 u>> 0x40
            int32_t temp0_44[0x4] = _mm_add_epi32(temp0_41, _mm_shuffle_epi32(temp0_41, 1))
            int32_t temp0_45[0x4] = _mm_add_epi32(temp0_42, zmm4)
            zmm4 = _mm_shuffle_epi32(temp0_45, 1)
            *arg10 = temp0_44[0]
            return zx.q(_mm_add_epi32(temp0_45, zmm4)[0])
        
        zmm8 = *(&data_14427eef0 + zx.q(arg4 << 4))
        zmm10 = data_14427ede0
        int32_t i_1
        
        do
            zmm2 = zx.o(*(arg1 + arg2))
            zmm4 = zx.o(*(arg1 + (arg2 << 1)))
            zmm3 = zx.o(*(r10 + arg6))
            zmm1 = zx.o(*r10)
            zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), zmm2.q)
            zmm2 = _mm_unpacklo_epi8(zmm2, zmm4.q)
            zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
            zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm0 = __pavgb_xmmdq_memdq(
                _mm_packus_epi16(_mm_srai_epi16(_mm_add_epi16(zmm0, zmm10), 4), 
                    _mm_srai_epi16(zmm2, 4)), 
                *rax)
            zmm2 = _mm_unpackhi_epi8(zmm0, 0)
            zmm0 = _mm_unpacklo_epi8(zmm0, 0)
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
            rax = &(*rax)[rdi_1]
            i_1 = i_9
            i_9 -= 1
        while (i_1 s> 1)
        int64_t temp0_70 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        zmm3.q = zmm7 u>> 0x40
        zmm4 = _mm_unpacklo_epi16(zmm6, temp0_70)
        int32_t temp0_72[0x4] = _mm_unpackhi_epi16(zmm6, temp0_70)
        int32_t temp0_73[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_74[0x4] = _mm_add_epi32(temp0_72, zmm4)
        zmm4.q = temp0_74 u>> 0x40
        int32_t temp0_76[0x4] = _mm_add_epi32(temp0_73, _mm_shuffle_epi32(temp0_73, 1))
        int32_t temp0_77[0x4] = _mm_add_epi32(temp0_74, zmm4)
        zmm4 = _mm_shuffle_epi32(temp0_77, 1)
        *arg10 = temp0_76[0]
        return zx.q(_mm_add_epi32(temp0_77, zmm4)[0])
    
    int32_t i_2
    
    do
        zmm1 = zx.o(*r10)
        zmm3 = zx.o(*(r10 + arg6))
        zmm0 = __pavgb_xmmdq_memdq(*arg1 | *(arg1 + arg2) << 0x40, *rax)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_unpackhi_epi8(zmm0, 0)
        zmm0 = _mm_unpacklo_epi8(zmm0, 0)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2 << 1
        r10 += arg6 << 1
        rax = &(*rax)[rdi_1]
        i_2 = i_9
        i_9 -= 1
    while (i_2 s> 1)
    int64_t temp0_14 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    zmm4 = _mm_unpacklo_epi16(zmm6, temp0_14)
    int32_t temp0_16[0x4] = _mm_unpackhi_epi16(zmm6, temp0_14)
    int32_t temp0_17[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_18[0x4] = _mm_add_epi32(temp0_16, zmm4)
    zmm4.q = temp0_18 u>> 0x40
    int32_t temp0_20[0x4] = _mm_add_epi32(temp0_17, _mm_shuffle_epi32(temp0_17, 1))
    int32_t temp0_21[0x4] = _mm_add_epi32(temp0_18, zmm4)
    zmm4 = _mm_shuffle_epi32(temp0_21, 1)
    *arg10 = temp0_20[0]
    return zx.q(_mm_add_epi32(temp0_21, zmm4)[0])

if (arg3 == 4)
    if (arg4 != 0)
        if (arg4 == 4)
            void* rcx = arg1 + arg2
            zmm0 = _mm_avg_epu8(zx.o(*arg1), zx.o(*(arg1 + 1)))
            int32_t i_3
            
            do
                zmm2 = _mm_avg_epu8(*rcx | *(rcx + arg2) << 0x40, 
                    *(rcx + 1) | *(rcx + arg2 + 1) << 0x40)
                zmm4.q = zmm2 u>> 0x40
                zmm1 = zx.o(*r10)
                zmm0 = _mm_avg_epu8(zmm0.q | zmm2.q << 0x40, zmm2)
                zmm3 = zx.o(*(r10 + arg6))
                zmm0 = __pavgb_xmmdq_memdq(zmm0, *rax)
                zmm3 = _mm_unpacklo_epi8(zmm3, 0)
                zmm1 = _mm_unpacklo_epi8(zmm1, 0)
                zmm2 = _mm_unpackhi_epi8(zmm0, 0)
                zmm0 = _mm_unpacklo_epi8(zmm0, 0)
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
                rax = &(*rax)[rdi_1]
                i_3 = i_9
                i_9 -= 1
            while (i_3 s> 1)
            int64_t temp0_120 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            zmm3.q = zmm7 u>> 0x40
            zmm4 = _mm_unpacklo_epi16(zmm6, temp0_120)
            int32_t temp0_122[0x4] = _mm_unpackhi_epi16(zmm6, temp0_120)
            int32_t temp0_123[0x4] = _mm_add_epi32(zmm7, zmm3)
            int32_t temp0_124[0x4] = _mm_add_epi32(temp0_122, zmm4)
            zmm4.q = temp0_124 u>> 0x40
            int32_t temp0_126[0x4] = _mm_add_epi32(temp0_123, _mm_shuffle_epi32(temp0_123, 1))
            int32_t temp0_127[0x4] = _mm_add_epi32(temp0_124, zmm4)
            zmm4 = _mm_shuffle_epi32(temp0_127, 1)
            *arg10 = temp0_126[0]
            return zx.q(_mm_add_epi32(temp0_127, zmm4)[0])
        
        zmm8 = *(&data_14427eef0 + zx.q(arg4 << 4))
        zmm10 = data_14427ede0
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
            zmm2 = _mm_unpacklo_epi8(zmm2, zmm4.q)
            zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
            zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm0 = __pavgb_xmmdq_memdq(
                _mm_packus_epi16(_mm_srai_epi16(zmm0, 4), _mm_srai_epi16(zmm2, 4)), *rax)
            zmm2 = _mm_unpackhi_epi8(zmm0, 0)
            zmm0 = _mm_unpacklo_epi8(zmm0, 0)
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
            rax = &(*rax)[rdi_1]
            i_4 = i_9
            i_9 -= 1
        while (i_4 s> 1)
        int64_t temp0_155 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        zmm3.q = zmm7 u>> 0x40
        zmm4 = _mm_unpacklo_epi16(zmm6, temp0_155)
        int32_t temp0_157[0x4] = _mm_unpackhi_epi16(zmm6, temp0_155)
        int32_t temp0_158[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_159[0x4] = _mm_add_epi32(temp0_157, zmm4)
        zmm4.q = temp0_159 u>> 0x40
        int32_t temp0_161[0x4] = _mm_add_epi32(temp0_158, _mm_shuffle_epi32(temp0_158, 1))
        int32_t temp0_162[0x4] = _mm_add_epi32(temp0_159, zmm4)
        zmm4 = _mm_shuffle_epi32(temp0_162, 1)
        *arg10 = temp0_161[0]
        return zx.q(_mm_add_epi32(temp0_162, zmm4)[0])
    
    int32_t i_5
    
    do
        zmm1 = zx.o(*r10)
        zmm3 = zx.o(*(r10 + arg6))
        zmm0 =
            _mm_avg_epu8(*arg1 | *(arg1 + arg2) << 0x40, *(arg1 + 1) | *(arg1 + arg2 + 1) << 0x40)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm0 = __pavgb_xmmdq_memdq(zmm0, *rax)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_unpackhi_epi8(zmm0, 0)
        zmm0 = _mm_unpacklo_epi8(zmm0, 0)
        zmm2 = _mm_sub_epi16(zmm2, zmm3)
        zmm0 = _mm_sub_epi16(zmm0, zmm1)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2 << 1
        r10 += arg6 << 1
        rax = &(*rax)[rdi_1]
        i_5 = i_9
        i_9 -= 1
    while (i_5 s> 1)
    int64_t temp0_94 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    zmm4 = _mm_unpacklo_epi16(zmm6, temp0_94)
    int32_t temp0_96[0x4] = _mm_unpackhi_epi16(zmm6, temp0_94)
    int32_t temp0_97[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_98[0x4] = _mm_add_epi32(temp0_96, zmm4)
    zmm4.q = temp0_98 u>> 0x40
    int32_t temp0_100[0x4] = _mm_add_epi32(temp0_97, _mm_shuffle_epi32(temp0_97, 1))
    int32_t temp0_101[0x4] = _mm_add_epi32(temp0_98, zmm4)
    zmm4 = _mm_shuffle_epi32(temp0_101, 1)
    *arg10 = temp0_100[0]
    return zx.q(_mm_add_epi32(temp0_101, zmm4)[0])

if (arg4 == 0)
    zmm8 = *(&data_14427eef0 + zx.q(arg3 << 4))
    zmm10 = data_14427ede0
    int32_t i_6
    
    do
        zmm2 = zx.o(*(arg1 + arg2))
        zmm4 = zx.o(*(arg1 + arg2 + 1))
        zmm3 = zx.o(*(r10 + arg6))
        zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), *(arg1 + 1))
        zmm1 = zx.o(*r10)
        zmm2 = _mm_unpacklo_epi8(zmm2, zmm4.q)
        zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
        zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm0 = _mm_add_epi16(zmm0, zmm10)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm0 = __pavgb_xmmdq_memdq(
            _mm_packus_epi16(_mm_srai_epi16(zmm0, 4), _mm_srai_epi16(zmm2, 4)), *rax)
        zmm2 = _mm_unpackhi_epi8(zmm0, 0)
        zmm0 = _mm_unpacklo_epi8(zmm0, 0)
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
        rax = &(*rax)[rdi_1]
        i_6 = i_9
        i_9 -= 1
    while (i_6 s> 1)
    int64_t temp0_187 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    zmm4 = _mm_unpacklo_epi16(zmm6, temp0_187)
    int32_t temp0_189[0x4] = _mm_unpackhi_epi16(zmm6, temp0_187)
    int32_t temp0_190[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_191[0x4] = _mm_add_epi32(temp0_189, zmm4)
    zmm4.q = temp0_191 u>> 0x40
    int32_t temp0_193[0x4] = _mm_add_epi32(temp0_190, _mm_shuffle_epi32(temp0_190, 1))
    int32_t temp0_194[0x4] = _mm_add_epi32(temp0_191, zmm4)
    zmm4 = _mm_shuffle_epi32(temp0_194, 1)
    *arg10 = temp0_193[0]
    return zx.q(_mm_add_epi32(temp0_194, zmm4)[0])

if (arg4 == 4)
    zmm8 = *(&data_14427eef0 + zx.q(arg3 << 4))
    zmm10 = data_14427ede0
    void* rcx_2 = arg1 + arg2
    zmm0 = _mm_srai_epi16(
        _mm_add_epi16(_mm_maddubs_epi16(_mm_unpacklo_epi8(zx.o(*arg1), *(arg1 + 1)), zmm8), zmm10), 
        4)
    int32_t i_7
    
    do
        zmm4 = zx.o(*(rcx_2 + arg2))
        zmm3 = zx.o(*(rcx_2 + arg2 + 1))
        zmm2 = _mm_unpacklo_epi8(zx.o(*rcx_2), *(rcx_2 + 1))
        zmm4 = _mm_unpacklo_epi8(zmm4, zmm3.q)
        zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
        zmm4 = _mm_maddubs_epi16(zmm4, zmm8)
        zmm1 = zx.o(*r10)
        zmm3 = zx.o(*(r10 + arg6))
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm4 = _mm_add_epi16(zmm4, zmm10)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        zmm4 = _mm_srai_epi16(zmm4, 4)
        zmm0 = __pavgb_xmmdq_memdq(
            _mm_packus_epi16(_mm_avg_epu16(zmm0, zmm2), _mm_avg_epu16(zmm2, zmm4)), *rax)
        zmm2 = _mm_unpackhi_epi8(zmm0, 0)
        zmm0 = _mm_unpacklo_epi8(zmm0, 0)
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
        rax = &(*rax)[rdi_1]
        i_7 = i_9
        i_9 -= 1
    while (i_7 s> 1)
    int64_t temp0_225 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    zmm4 = _mm_unpacklo_epi16(zmm6, temp0_225)
    int32_t temp0_227[0x4] = _mm_unpackhi_epi16(zmm6, temp0_225)
    int32_t temp0_228[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_229[0x4] = _mm_add_epi32(temp0_227, zmm4)
    zmm4.q = temp0_229 u>> 0x40
    int32_t temp0_231[0x4] = _mm_add_epi32(temp0_228, _mm_shuffle_epi32(temp0_228, 1))
    int32_t temp0_232[0x4] = _mm_add_epi32(temp0_229, zmm4)
    zmm4 = _mm_shuffle_epi32(temp0_232, 1)
    *arg10 = temp0_231[0]
    return zx.q(_mm_add_epi32(temp0_232, zmm4)[0])

zmm8 = *(&data_14427eef0 + zx.q(arg3 << 4))
zmm10 = *(&data_14427eef0 + zx.q(arg4 << 4))
int16_t zmm12[0x8] = data_14427ede0
zmm0 = _mm_srai_epi16(
    _mm_add_epi16(_mm_maddubs_epi16(_mm_unpacklo_epi8(zx.o(*arg1), *(arg1 + 1)), zmm8), zmm12), 4)
zmm0 = _mm_packus_epi16(zmm0, zmm0)
void* rcx_3 = arg1 + arg2
int32_t i_8

do
    void* rcx_4 = rcx_3 + arg2
    zmm4 = zx.o(*rcx_4)
    zmm3 = zx.o(*(rcx_4 + 1))
    zmm2 = _mm_unpacklo_epi8(zx.o(*rcx_3), *(rcx_3 + 1))
    zmm4 = _mm_unpacklo_epi8(zmm4, zmm3.q)
    zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
    zmm4 = _mm_maddubs_epi16(zmm4, zmm8)
    zmm3 = zx.o(*(r10 + arg6))
    zmm1 = zx.o(*r10)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm4 = _mm_add_epi16(zmm4, zmm12)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm4 = _mm_srai_epi16(zmm4, 4)
    zmm2 = _mm_packus_epi16(zmm2, zmm2)
    zmm4 = _mm_packus_epi16(zmm4, zmm4)
    zmm0 = _mm_unpacklo_epi8(zmm0, zmm2.q)
    zmm2 = _mm_unpacklo_epi8(zmm2, zmm4.q)
    zmm0 = _mm_maddubs_epi16(zmm0, zmm10)
    zmm2 = _mm_maddubs_epi16(zmm2, zmm10)
    zmm3 = _mm_unpacklo_epi8(zmm3, 0)
    zmm0 = _mm_add_epi16(zmm0, zmm12)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm0 = _mm_srai_epi16(zmm0, 4)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm1 = _mm_unpacklo_epi8(zmm1, 0)
    zmm0 = __pavgb_xmmdq_memdq(_mm_packus_epi16(zmm0, zmm2), *rax)
    zmm2 = _mm_unpackhi_epi8(zmm0, 0)
    zmm0 = _mm_unpacklo_epi8(zmm0, 0)
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
    rax = &(*rax)[rdi_1]
    i_8 = i_9
    i_9 -= 1
while (i_8 s> 1)
int64_t temp0_272 = _mm_cmpgt_epi16(zx.o(0), zmm6)
zmm3.q = zmm7 u>> 0x40
zmm4 = _mm_unpacklo_epi16(zmm6, temp0_272)
int32_t temp0_274[0x4] = _mm_unpackhi_epi16(zmm6, temp0_272)
int32_t temp0_275[0x4] = _mm_add_epi32(zmm7, zmm3)
int32_t temp0_276[0x4] = _mm_add_epi32(temp0_274, zmm4)
zmm4.q = temp0_276 u>> 0x40
int32_t temp0_278[0x4] = _mm_add_epi32(temp0_275, _mm_shuffle_epi32(temp0_275, 1))
int32_t temp0_279[0x4] = _mm_add_epi32(temp0_276, zmm4)
zmm4 = _mm_shuffle_epi32(temp0_279, 1)
*arg10 = temp0_278[0]
return zx.q(_mm_add_epi32(temp0_279, zmm4)[0])
