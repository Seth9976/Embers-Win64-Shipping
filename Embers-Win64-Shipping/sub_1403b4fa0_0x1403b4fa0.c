// 函数: sub_1403b4fa0
// 地址: 0x1403b4fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = arg5
int32_t zmm6[0x4] = zx.o(0)
int32_t zmm7[0x4] = zx.o(0)
int32_t i_9 = arg7 s>> 1
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
int32_t zmm4[0x4]
char zmm8[0x10]
int16_t zmm10[0x8]

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
            int64_t temp0_37 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            zmm3.q = zmm7 u>> 0x40
            int32_t temp0_38[0x4] = _mm_unpacklo_epi16(zmm6, temp0_37)
            int32_t temp0_39[0x4] = _mm_unpackhi_epi16(zmm6, temp0_37)
            int32_t temp0_40[0x4] = _mm_add_epi32(zmm7, zmm3)
            int32_t temp0_41[0x4] = _mm_add_epi32(temp0_39, temp0_38)
            zmm3 = _mm_shuffle_epi32(temp0_40, 1)
            temp0_38[0].q = temp0_41 u>> 0x40
            int32_t temp0_43[0x4] = _mm_add_epi32(temp0_40, zmm3)
            int32_t temp0_44[0x4] = _mm_add_epi32(temp0_41, temp0_38)
            zmm4 = _mm_shuffle_epi32(temp0_44, 1)
            *arg8 = temp0_43[0]
            return zx.q(_mm_add_epi32(temp0_44, zmm4)[0])
        
        zmm8 = *(&data_14427eef0 + zx.q(arg4 << 4))
        zmm10 = data_14427ede0
        int32_t i_1
        
        do
            zmm2 = zx.o(*(arg1 + arg2))
            zmm4 = zx.o(*(arg1 + (arg2 << 1)))
            zmm3 = zx.o(*(r10 + arg6))
            zmm1 = zx.o(*r10)
            zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), zmm2.q)
            zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
            zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
            zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm0 = _mm_srai_epi16(_mm_add_epi16(zmm0, zmm10), 4)
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
        int64_t temp0_65 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        zmm3.q = zmm7 u>> 0x40
        int32_t temp0_66[0x4] = _mm_unpacklo_epi16(zmm6, temp0_65)
        int32_t temp0_67[0x4] = _mm_unpackhi_epi16(zmm6, temp0_65)
        int32_t temp0_68[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_69[0x4] = _mm_add_epi32(temp0_67, temp0_66)
        zmm3 = _mm_shuffle_epi32(temp0_68, 1)
        temp0_66[0].q = temp0_69 u>> 0x40
        int32_t temp0_71[0x4] = _mm_add_epi32(temp0_68, zmm3)
        int32_t temp0_72[0x4] = _mm_add_epi32(temp0_69, temp0_66)
        zmm4 = _mm_shuffle_epi32(temp0_72, 1)
        *arg8 = temp0_71[0]
        return zx.q(_mm_add_epi32(temp0_72, zmm4)[0])
    
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
    int64_t temp0_13 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    int32_t temp0_14[0x4] = _mm_unpacklo_epi16(zmm6, temp0_13)
    int32_t temp0_15[0x4] = _mm_unpackhi_epi16(zmm6, temp0_13)
    int32_t temp0_16[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_17[0x4] = _mm_add_epi32(temp0_15, temp0_14)
    zmm3 = _mm_shuffle_epi32(temp0_16, 1)
    temp0_14[0].q = temp0_17 u>> 0x40
    int32_t temp0_19[0x4] = _mm_add_epi32(temp0_16, zmm3)
    int32_t temp0_20[0x4] = _mm_add_epi32(temp0_17, temp0_14)
    zmm4 = _mm_shuffle_epi32(temp0_20, 1)
    *arg8 = temp0_19[0]
    return zx.q(_mm_add_epi32(temp0_20, zmm4)[0])

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
            int64_t temp0_116 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            zmm3.q = zmm7 u>> 0x40
            int32_t temp0_117[0x4] = _mm_unpacklo_epi16(zmm6, temp0_116)
            int32_t temp0_118[0x4] = _mm_unpackhi_epi16(zmm6, temp0_116)
            int32_t temp0_119[0x4] = _mm_add_epi32(zmm7, zmm3)
            int32_t temp0_120[0x4] = _mm_add_epi32(temp0_118, temp0_117)
            zmm3 = _mm_shuffle_epi32(temp0_119, 1)
            temp0_117[0].q = temp0_120 u>> 0x40
            int32_t temp0_122[0x4] = _mm_add_epi32(temp0_119, zmm3)
            int32_t temp0_123[0x4] = _mm_add_epi32(temp0_120, temp0_117)
            zmm4 = _mm_shuffle_epi32(temp0_123, 1)
            *arg8 = temp0_122[0]
            return zx.q(_mm_add_epi32(temp0_123, zmm4)[0])
        
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
            zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
            zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
            zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
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
        int64_t temp0_147 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        zmm3.q = zmm7 u>> 0x40
        int32_t temp0_148[0x4] = _mm_unpacklo_epi16(zmm6, temp0_147)
        int32_t temp0_149[0x4] = _mm_unpackhi_epi16(zmm6, temp0_147)
        int32_t temp0_150[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_151[0x4] = _mm_add_epi32(temp0_149, temp0_148)
        zmm3 = _mm_shuffle_epi32(temp0_150, 1)
        temp0_148[0].q = temp0_151 u>> 0x40
        int32_t temp0_153[0x4] = _mm_add_epi32(temp0_150, zmm3)
        int32_t temp0_154[0x4] = _mm_add_epi32(temp0_151, temp0_148)
        zmm4 = _mm_shuffle_epi32(temp0_154, 1)
        *arg8 = temp0_153[0]
        return zx.q(_mm_add_epi32(temp0_154, zmm4)[0])
    
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
    int64_t temp0_89 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    int32_t temp0_90[0x4] = _mm_unpacklo_epi16(zmm6, temp0_89)
    int32_t temp0_91[0x4] = _mm_unpackhi_epi16(zmm6, temp0_89)
    int32_t temp0_92[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_93[0x4] = _mm_add_epi32(temp0_91, temp0_90)
    zmm3 = _mm_shuffle_epi32(temp0_92, 1)
    temp0_90[0].q = temp0_93 u>> 0x40
    int32_t temp0_95[0x4] = _mm_add_epi32(temp0_92, zmm3)
    int32_t temp0_96[0x4] = _mm_add_epi32(temp0_93, temp0_90)
    zmm4 = _mm_shuffle_epi32(temp0_96, 1)
    *arg8 = temp0_95[0]
    return zx.q(_mm_add_epi32(temp0_96, zmm4)[0])

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
        zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
        zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
        zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm0 = _mm_add_epi16(zmm0, zmm10)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
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
    int64_t temp0_175 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    int32_t temp0_176[0x4] = _mm_unpacklo_epi16(zmm6, temp0_175)
    int32_t temp0_177[0x4] = _mm_unpackhi_epi16(zmm6, temp0_175)
    int32_t temp0_178[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_179[0x4] = _mm_add_epi32(temp0_177, temp0_176)
    zmm3 = _mm_shuffle_epi32(temp0_178, 1)
    temp0_176[0].q = temp0_179 u>> 0x40
    int32_t temp0_181[0x4] = _mm_add_epi32(temp0_178, zmm3)
    int32_t temp0_182[0x4] = _mm_add_epi32(temp0_179, temp0_176)
    zmm4 = _mm_shuffle_epi32(temp0_182, 1)
    *arg8 = temp0_181[0]
    return zx.q(_mm_add_epi32(temp0_182, zmm4)[0])

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
        int32_t temp0_190[0x4] = _mm_unpacklo_epi8(zmm4, zmm3.q)
        zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
        zmm4 = _mm_maddubs_epi16(temp0_190, zmm8)
        zmm1 = zx.o(*r10)
        zmm3 = zx.o(*(r10 + arg6))
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm4 = _mm_add_epi16(zmm4, zmm10)
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
    int64_t temp0_209 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    int32_t temp0_210[0x4] = _mm_unpacklo_epi16(zmm6, temp0_209)
    int32_t temp0_211[0x4] = _mm_unpackhi_epi16(zmm6, temp0_209)
    int32_t temp0_212[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_213[0x4] = _mm_add_epi32(temp0_211, temp0_210)
    zmm3 = _mm_shuffle_epi32(temp0_212, 1)
    temp0_210[0].q = temp0_213 u>> 0x40
    int32_t temp0_215[0x4] = _mm_add_epi32(temp0_212, zmm3)
    int32_t temp0_216[0x4] = _mm_add_epi32(temp0_213, temp0_210)
    zmm4 = _mm_shuffle_epi32(temp0_216, 1)
    *arg8 = temp0_215[0]
    return zx.q(_mm_add_epi32(temp0_216, zmm4)[0])

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
    int32_t temp0_225[0x4] = _mm_unpacklo_epi8(zmm4, zmm3.q)
    zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
    zmm4 = _mm_maddubs_epi16(temp0_225, zmm8)
    zmm3 = zx.o(*(r10 + arg6))
    zmm1 = zx.o(*r10)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm4 = _mm_add_epi16(zmm4, zmm12)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm4 = _mm_srai_epi16(zmm4, 4)
    zmm2 = _mm_packus_epi16(zmm2, zmm2)
    zmm4 = _mm_packus_epi16(zmm4, zmm4)
    zmm0 = _mm_unpacklo_epi8(zmm0, zmm2.q)
    zmm2 = _mm_unpacklo_epi8(zmm2, zmm4[0].q)
    zmm0 = _mm_maddubs_epi16(zmm0, zmm10)
    zmm2 = _mm_maddubs_epi16(zmm2, zmm10)
    zmm3 = _mm_unpacklo_epi8(zmm3, 0)
    zmm0 = _mm_add_epi16(zmm0, zmm12)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
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
int64_t temp0_252 = _mm_cmpgt_epi16(zx.o(0), zmm6)
zmm3.q = zmm7 u>> 0x40
int32_t temp0_253[0x4] = _mm_unpacklo_epi16(zmm6, temp0_252)
int32_t temp0_254[0x4] = _mm_unpackhi_epi16(zmm6, temp0_252)
int32_t temp0_255[0x4] = _mm_add_epi32(zmm7, zmm3)
int32_t temp0_256[0x4] = _mm_add_epi32(temp0_254, temp0_253)
zmm3 = _mm_shuffle_epi32(temp0_255, 1)
temp0_253[0].q = temp0_256 u>> 0x40
int32_t temp0_258[0x4] = _mm_add_epi32(temp0_255, zmm3)
int32_t temp0_259[0x4] = _mm_add_epi32(temp0_256, temp0_253)
int32_t temp0_260[0x4] = _mm_shuffle_epi32(temp0_259, 1)
*arg8 = temp0_258[0]
return zx.q(_mm_add_epi32(temp0_259, temp0_260)[0])
