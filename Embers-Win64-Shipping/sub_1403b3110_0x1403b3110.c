// 函数: sub_1403b3110
// 地址: 0x1403b3110
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
int32_t zmm8[0x4]
int32_t zmm9[0x4]
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
        
        uint64_t r9 = zx.q(arg4 << 5)
        zmm8 = *(&data_14427edf0 + r9)
        zmm9 = *(r9 + 0x14427ee00)
        zmm10 = data_14427ede0
        int32_t i_1
        
        do
            zmm2 = zx.o(*(arg1 + arg2))
            zmm4 = zx.o(*(arg1 + (arg2 << 1)))
            zmm3 = zx.o(*(r10 + arg6))
            zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), 0)
            zmm2 = _mm_unpacklo_epi8(zmm2, 0)
            int32_t temp0_49[0x4] = _mm_unpacklo_epi8(zmm4, 0)
            zmm0 = _mm_mullo_epi16(zmm0, zmm8)
            zmm1 = _mm_mullo_epi16(zmm2, zmm9)
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_mullo_epi16(zmm2, zmm8)
            int32_t temp0_55[0x4] = _mm_mullo_epi16(temp0_49, zmm9)
            zmm0 = _mm_add_epi16(zmm0, zmm1)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm1 = zx.o(*r10)
            zmm2 = _mm_add_epi16(zmm2, temp0_55)
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
            i_1 = i_9
            i_9 -= 1
        while (i_1 s> 1)
        int64_t temp0_70 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        zmm3.q = zmm7 u>> 0x40
        int32_t temp0_71[0x4] = _mm_unpacklo_epi16(zmm6, temp0_70)
        int32_t temp0_72[0x4] = _mm_unpackhi_epi16(zmm6, temp0_70)
        int32_t temp0_73[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_74[0x4] = _mm_add_epi32(temp0_72, temp0_71)
        zmm3 = _mm_shuffle_epi32(temp0_73, 1)
        temp0_71[0].q = temp0_74 u>> 0x40
        int32_t temp0_76[0x4] = _mm_add_epi32(temp0_73, zmm3)
        int32_t temp0_77[0x4] = _mm_add_epi32(temp0_74, temp0_71)
        zmm4 = _mm_shuffle_epi32(temp0_77, 1)
        *arg8 = temp0_76[0]
        return zx.q(_mm_add_epi32(temp0_77, zmm4)[0])
    
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
            int64_t temp0_121 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            zmm3.q = zmm7 u>> 0x40
            int32_t temp0_122[0x4] = _mm_unpacklo_epi16(zmm6, temp0_121)
            int32_t temp0_123[0x4] = _mm_unpackhi_epi16(zmm6, temp0_121)
            int32_t temp0_124[0x4] = _mm_add_epi32(zmm7, zmm3)
            int32_t temp0_125[0x4] = _mm_add_epi32(temp0_123, temp0_122)
            zmm3 = _mm_shuffle_epi32(temp0_124, 1)
            temp0_122[0].q = temp0_125 u>> 0x40
            int32_t temp0_127[0x4] = _mm_add_epi32(temp0_124, zmm3)
            int32_t temp0_128[0x4] = _mm_add_epi32(temp0_125, temp0_122)
            zmm4 = _mm_shuffle_epi32(temp0_128, 1)
            *arg8 = temp0_127[0]
            return zx.q(_mm_add_epi32(temp0_128, zmm4)[0])
        
        uint64_t r9_1 = zx.q(arg4 << 5)
        zmm8 = *(&data_14427edf0 + r9_1)
        zmm9 = *(r9_1 + 0x14427ee00)
        zmm10 = data_14427ede0
        void* rcx_1 = arg1 + arg2
        zmm0 = _mm_unpacklo_epi8(_mm_avg_epu8(zx.o(*arg1), zx.o(*(arg1 + 1))), 0)
        int32_t i_4
        
        do
            zmm4 = zx.o(*(rcx_1 + arg2))
            zmm3 = zx.o(*(rcx_1 + arg2 + 1))
            zmm2 = _mm_avg_epu8(zx.o(*rcx_1), zx.o(*(rcx_1 + 1)))
            zmm4 = _mm_avg_epu8(zmm4, zmm3)
            zmm3 = zx.o(*(r10 + arg6))
            zmm2 = _mm_unpacklo_epi8(zmm2, 0)
            int32_t temp0_136[0x4] = _mm_unpacklo_epi8(zmm4, 0)
            zmm0 = _mm_mullo_epi16(zmm0, zmm8)
            zmm1 = _mm_mullo_epi16(zmm2, zmm9)
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_mullo_epi16(zmm2, zmm8)
            zmm0 = _mm_add_epi16(zmm0, zmm1)
            zmm1 = _mm_mullo_epi16(temp0_136, zmm9)
            zmm2 = _mm_add_epi16(_mm_add_epi16(zmm2, zmm10), zmm1)
            zmm1 = zx.o(*r10)
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
            zmm0 = temp0_136
            rcx_1 += arg2 << 1
            r10 += arg6 << 1
            i_4 = i_9
            i_9 -= 1
        while (i_4 s> 1)
        int64_t temp0_157 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        zmm3.q = zmm7 u>> 0x40
        int32_t temp0_158[0x4] = _mm_unpacklo_epi16(zmm6, temp0_157)
        int32_t temp0_159[0x4] = _mm_unpackhi_epi16(zmm6, temp0_157)
        int32_t temp0_160[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_161[0x4] = _mm_add_epi32(temp0_159, temp0_158)
        zmm3 = _mm_shuffle_epi32(temp0_160, 1)
        temp0_158[0].q = temp0_161 u>> 0x40
        int32_t temp0_163[0x4] = _mm_add_epi32(temp0_160, zmm3)
        int32_t temp0_164[0x4] = _mm_add_epi32(temp0_161, temp0_158)
        zmm4 = _mm_shuffle_epi32(temp0_164, 1)
        *arg8 = temp0_163[0]
        return zx.q(_mm_add_epi32(temp0_164, zmm4)[0])
    
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
    int64_t temp0_94 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    int32_t temp0_95[0x4] = _mm_unpacklo_epi16(zmm6, temp0_94)
    int32_t temp0_96[0x4] = _mm_unpackhi_epi16(zmm6, temp0_94)
    int32_t temp0_97[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_98[0x4] = _mm_add_epi32(temp0_96, temp0_95)
    zmm3 = _mm_shuffle_epi32(temp0_97, 1)
    temp0_95[0].q = temp0_98 u>> 0x40
    int32_t temp0_100[0x4] = _mm_add_epi32(temp0_97, zmm3)
    int32_t temp0_101[0x4] = _mm_add_epi32(temp0_98, temp0_95)
    zmm4 = _mm_shuffle_epi32(temp0_101, 1)
    *arg8 = temp0_100[0]
    return zx.q(_mm_add_epi32(temp0_101, zmm4)[0])

if (arg4 == 0)
    uint64_t r8 = zx.q(arg3 << 5)
    zmm8 = *(&data_14427edf0 + r8)
    zmm9 = *(r8 + 0x14427ee00)
    zmm10 = data_14427ede0
    int32_t i_6
    
    do
        zmm1 = zx.o(*(arg1 + 1))
        zmm2 = zx.o(*(arg1 + arg2))
        zmm4 = zx.o(*(arg1 + arg2 + 1))
        zmm3 = zx.o(*(r10 + arg6))
        zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_unpacklo_epi8(zmm2, 0)
        int32_t temp0_170[0x4] = _mm_unpacklo_epi8(zmm4, 0)
        zmm0 = _mm_mullo_epi16(zmm0, zmm8)
        zmm1 = _mm_mullo_epi16(zmm1, zmm9)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm0 = _mm_add_epi16(zmm0, zmm10)
        zmm2 = _mm_mullo_epi16(zmm2, zmm8)
        int32_t temp0_176[0x4] = _mm_mullo_epi16(temp0_170, zmm9)
        zmm0 = _mm_add_epi16(zmm0, zmm1)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm1 = zx.o(*r10)
        zmm2 = _mm_add_epi16(zmm2, temp0_176)
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
    int64_t temp0_191 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    int32_t temp0_192[0x4] = _mm_unpacklo_epi16(zmm6, temp0_191)
    int32_t temp0_193[0x4] = _mm_unpackhi_epi16(zmm6, temp0_191)
    int32_t temp0_194[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_195[0x4] = _mm_add_epi32(temp0_193, temp0_192)
    zmm3 = _mm_shuffle_epi32(temp0_194, 1)
    temp0_192[0].q = temp0_195 u>> 0x40
    int32_t temp0_197[0x4] = _mm_add_epi32(temp0_194, zmm3)
    int32_t temp0_198[0x4] = _mm_add_epi32(temp0_195, temp0_192)
    zmm4 = _mm_shuffle_epi32(temp0_198, 1)
    *arg8 = temp0_197[0]
    return zx.q(_mm_add_epi32(temp0_198, zmm4)[0])

if (arg4 == 4)
    uint64_t r8_1 = zx.q(arg3 << 5)
    zmm8 = *(&data_14427edf0 + r8_1)
    zmm9 = *(r8_1 + 0x14427ee00)
    zmm10 = data_14427ede0
    zmm1 = zx.o(*(arg1 + 1))
    zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), 0)
    zmm1 = _mm_unpacklo_epi8(zmm1, 0)
    zmm0 = _mm_mullo_epi16(zmm0, zmm8)
    zmm1 = _mm_mullo_epi16(zmm1, zmm9)
    void* rcx_2 = arg1 + arg2
    zmm0 = _mm_srai_epi16(_mm_add_epi16(_mm_add_epi16(zmm0, zmm10), zmm1), 4)
    int32_t i_7
    
    do
        zmm1 = zx.o(*(rcx_2 + 1))
        zmm4 = zx.o(*(rcx_2 + arg2))
        zmm3 = zx.o(*(rcx_2 + arg2 + 1))
        zmm2 = _mm_unpacklo_epi8(zx.o(*rcx_2), 0)
        zmm1 = _mm_unpacklo_epi8(zmm1, 0)
        int32_t temp0_210[0x4] = _mm_unpacklo_epi8(zmm4, 0)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm2 = _mm_mullo_epi16(zmm2, zmm8)
        zmm1 = _mm_mullo_epi16(zmm1, zmm9)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        int32_t temp0_215[0x4] = _mm_mullo_epi16(temp0_210, zmm8)
        zmm3 = _mm_mullo_epi16(zmm3, zmm9)
        zmm4 = _mm_add_epi16(temp0_215, zmm10)
        zmm2 = _mm_add_epi16(zmm2, zmm1)
        zmm1 = zx.o(*r10)
        zmm4 = _mm_add_epi16(zmm4, zmm3)
        zmm3 = zx.o(*(r10 + arg6))
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
    int64_t temp0_234 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    int32_t temp0_235[0x4] = _mm_unpacklo_epi16(zmm6, temp0_234)
    int32_t temp0_236[0x4] = _mm_unpackhi_epi16(zmm6, temp0_234)
    int32_t temp0_237[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_238[0x4] = _mm_add_epi32(temp0_236, temp0_235)
    zmm3 = _mm_shuffle_epi32(temp0_237, 1)
    temp0_235[0].q = temp0_238 u>> 0x40
    int32_t temp0_240[0x4] = _mm_add_epi32(temp0_237, zmm3)
    int32_t temp0_241[0x4] = _mm_add_epi32(temp0_238, temp0_235)
    zmm4 = _mm_shuffle_epi32(temp0_241, 1)
    *arg8 = temp0_240[0]
    return zx.q(_mm_add_epi32(temp0_241, zmm4)[0])

uint64_t r8_2 = zx.q(arg3 << 5)
uint64_t r9_2 = zx.q(arg4 << 5)
zmm8 = *(&data_14427edf0 + r8_2)
zmm9 = *(r8_2 + 0x14427ee00)
zmm10 = *(&data_14427edf0 + r9_2)
int32_t zmm11[0x4] = *(r9_2 + 0x14427ee00)
int16_t zmm12[0x8] = data_14427ede0
zmm1 = zx.o(*(arg1 + 1))
zmm0 = _mm_unpacklo_epi8(zx.o(*arg1), 0)
zmm1 = _mm_unpacklo_epi8(zmm1, 0)
zmm0 = _mm_mullo_epi16(zmm0, zmm8)
zmm1 = _mm_mullo_epi16(zmm1, zmm9)
zmm0 = _mm_srai_epi16(_mm_add_epi16(_mm_add_epi16(zmm0, zmm12), zmm1), 4)
void* rcx_3 = arg1 + arg2
int32_t i_8

do
    zmm1 = zx.o(*(rcx_3 + 1))
    void* rcx_4 = rcx_3 + arg2
    zmm4 = zx.o(*rcx_4)
    zmm3 = zx.o(*(rcx_4 + 1))
    zmm2 = _mm_unpacklo_epi8(zx.o(*rcx_3), 0)
    zmm1 = _mm_unpacklo_epi8(zmm1, 0)
    int32_t temp0_253[0x4] = _mm_unpacklo_epi8(zmm4, 0)
    zmm3 = _mm_unpacklo_epi8(zmm3, 0)
    zmm2 = _mm_mullo_epi16(zmm2, zmm8)
    zmm1 = _mm_mullo_epi16(zmm1, zmm9)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    int32_t temp0_258[0x4] = _mm_mullo_epi16(temp0_253, zmm8)
    zmm3 = _mm_mullo_epi16(zmm3, zmm9)
    zmm4 = _mm_add_epi16(temp0_258, zmm12)
    zmm2 = _mm_add_epi16(zmm2, zmm1)
    zmm4 = _mm_add_epi16(zmm4, zmm3)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm4 = _mm_srai_epi16(zmm4, 4)
    zmm0 = _mm_mullo_epi16(zmm0, zmm10)
    zmm3 = _mm_mullo_epi16(zmm2, zmm11)
    zmm0 = _mm_add_epi16(zmm0, zmm12)
    zmm2 = _mm_mullo_epi16(zmm2, zmm10)
    zmm1 = _mm_mullo_epi16(zmm4, zmm11)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm0 = _mm_add_epi16(zmm0, zmm3)
    zmm3 = zx.o(*(r10 + arg6))
    zmm2 = _mm_add_epi16(zmm2, zmm1)
    zmm1 = zx.o(*r10)
    zmm0 = _mm_srai_epi16(zmm0, 4)
    zmm2 = _mm_srai_epi16(zmm2, 4)
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
    rcx_3 = rcx_4 + arg2
    r10 += arg6 << 1
    i_8 = i_9
    i_9 -= 1
while (i_8 s> 1)
int64_t temp0_285 = _mm_cmpgt_epi16(zx.o(0), zmm6)
zmm3.q = zmm7 u>> 0x40
int32_t temp0_286[0x4] = _mm_unpacklo_epi16(zmm6, temp0_285)
int32_t temp0_287[0x4] = _mm_unpackhi_epi16(zmm6, temp0_285)
int32_t temp0_288[0x4] = _mm_add_epi32(zmm7, zmm3)
int32_t temp0_289[0x4] = _mm_add_epi32(temp0_287, temp0_286)
zmm3 = _mm_shuffle_epi32(temp0_288, 1)
temp0_286[0].q = temp0_289 u>> 0x40
int32_t temp0_291[0x4] = _mm_add_epi32(temp0_288, zmm3)
int32_t temp0_292[0x4] = _mm_add_epi32(temp0_289, temp0_286)
int32_t temp0_293[0x4] = _mm_shuffle_epi32(temp0_292, 1)
*arg8 = temp0_291[0]
return zx.q(_mm_add_epi32(temp0_292, temp0_293)[0])
