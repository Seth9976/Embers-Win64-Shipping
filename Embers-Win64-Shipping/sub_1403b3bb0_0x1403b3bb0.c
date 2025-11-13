// 函数: sub_1403b3bb0
// 地址: 0x1403b3bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r10 = arg5
int32_t i_9 = arg7
int32_t zmm6[0x4] = zx.o(0)
int32_t zmm7[0x4] = zx.o(0)
int32_t zmm0[0x4]
int32_t zmm1[0x4]
int32_t zmm2[0x4]
int32_t zmm3[0x4]
int32_t zmm4[0x4]
int32_t zmm8[0x4]
int32_t zmm9[0x4]
int16_t zmm10[0x8]

if (arg3 == 0)
    if (arg4 != 0)
        if (arg4 == 4)
            int32_t temp0_24[0x4]
            int32_t i
            
            do
                zmm1 = *r10
                zmm0 = _mm_avg_epu8(*arg1, *(arg1 + arg2))
                temp0_24 = _mm_unpackhi_epi8(zmm1, 0)
                int32_t temp0_25[0x4] = _mm_unpacklo_epi8(zmm1, 0)
                int32_t temp0_26[0x4] = _mm_unpackhi_epi8(zmm0, 0)
                int32_t temp0_27[0x4] = _mm_unpacklo_epi8(zmm0, 0)
                int32_t temp0_28[0x4] = _mm_sub_epi16(temp0_26, temp0_24)
                int32_t temp0_29[0x4] = _mm_sub_epi16(temp0_27, temp0_25)
                zmm6 = _mm_add_epi16(zmm6, temp0_28)
                zmm2 = _mm_madd_epi16(temp0_28, temp0_28)
                zmm6 = _mm_add_epi16(zmm6, temp0_29)
                zmm0 = _mm_madd_epi16(temp0_29, temp0_29)
                zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
                arg1 += arg2
                r10 += arg6
                i = i_9
                i_9 -= 1
            while (i s> 1)
            int64_t temp0_36 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            temp0_24[0].q = zmm7 u>> 0x40
            int32_t temp0_37[0x4] = _mm_unpacklo_epi16(zmm6, temp0_36)
            int32_t temp0_38[0x4] = _mm_unpackhi_epi16(zmm6, temp0_36)
            int32_t temp0_39[0x4] = _mm_add_epi32(zmm7, temp0_24)
            int32_t temp0_40[0x4] = _mm_add_epi32(temp0_38, temp0_37)
            zmm3 = _mm_shuffle_epi32(temp0_39, 1)
            temp0_37[0].q = temp0_40 u>> 0x40
            int32_t temp0_42[0x4] = _mm_add_epi32(temp0_39, zmm3)
            int32_t temp0_43[0x4] = _mm_add_epi32(temp0_40, temp0_37)
            zmm4 = _mm_shuffle_epi32(temp0_43, 1)
            *arg8 = temp0_42[0]
            return zx.q(_mm_add_epi32(temp0_43, zmm4)[0])
        
        uint64_t r9 = zx.q(arg4 << 5)
        zmm8 = *(&data_14427edf0 + r9)
        zmm9 = *(r9 + 0x14427ee00)
        zmm10 = data_14427ede0
        int32_t temp0_60[0x4]
        int32_t i_1
        
        do
            zmm0 = *arg1
            zmm4 = *(arg1 + arg2)
            zmm1 = *r10
            int32_t temp0_46[0x4] = _mm_unpackhi_epi8(zmm0, 0)
            int32_t temp0_47[0x4] = _mm_unpackhi_epi8(zmm4, 0)
            int32_t temp0_48[0x4] = _mm_unpacklo_epi8(zmm0, 0)
            int32_t temp0_49[0x4] = _mm_unpacklo_epi8(zmm4, 0)
            int32_t temp0_50[0x4] = _mm_mullo_epi16(temp0_46, zmm8)
            int32_t temp0_51[0x4] = _mm_mullo_epi16(temp0_47, zmm9)
            zmm2 = _mm_add_epi16(temp0_50, zmm10)
            int32_t temp0_53[0x4] = _mm_mullo_epi16(temp0_48, zmm8)
            int32_t temp0_54[0x4] = _mm_mullo_epi16(temp0_49, zmm9)
            zmm0 = _mm_add_epi16(temp0_53, zmm10)
            zmm2 = _mm_add_epi16(zmm2, temp0_51)
            zmm0 = _mm_add_epi16(zmm0, temp0_54)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            zmm0 = _mm_srai_epi16(zmm0, 4)
            temp0_60 = _mm_unpackhi_epi8(zmm1, 0)
            int32_t temp0_61[0x4] = _mm_unpacklo_epi8(zmm1, 0)
            int32_t temp0_62[0x4] = _mm_sub_epi16(zmm2, temp0_60)
            int32_t temp0_63[0x4] = _mm_sub_epi16(zmm0, temp0_61)
            zmm6 = _mm_add_epi16(zmm6, temp0_62)
            zmm2 = _mm_madd_epi16(temp0_62, temp0_62)
            zmm6 = _mm_add_epi16(zmm6, temp0_63)
            zmm0 = _mm_madd_epi16(temp0_63, temp0_63)
            zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
            arg1 += arg2
            r10 += arg6
            i_1 = i_9
            i_9 -= 1
        while (i_1 s> 1)
        int64_t temp0_70 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        temp0_60[0].q = zmm7 u>> 0x40
        int32_t temp0_71[0x4] = _mm_unpacklo_epi16(zmm6, temp0_70)
        int32_t temp0_72[0x4] = _mm_unpackhi_epi16(zmm6, temp0_70)
        int32_t temp0_73[0x4] = _mm_add_epi32(zmm7, temp0_60)
        int32_t temp0_74[0x4] = _mm_add_epi32(temp0_72, temp0_71)
        zmm3 = _mm_shuffle_epi32(temp0_73, 1)
        temp0_71[0].q = temp0_74 u>> 0x40
        int32_t temp0_76[0x4] = _mm_add_epi32(temp0_73, zmm3)
        int32_t temp0_77[0x4] = _mm_add_epi32(temp0_74, temp0_71)
        zmm4 = _mm_shuffle_epi32(temp0_77, 1)
        *arg8 = temp0_76[0]
        return zx.q(_mm_add_epi32(temp0_77, zmm4)[0])
    
    int32_t temp0_3[0x4]
    int32_t i_2
    
    do
        zmm0 = *arg1
        zmm1 = *r10
        int32_t temp0_1[0x4] = _mm_unpackhi_epi8(zmm0, 0)
        int32_t temp0_2[0x4] = _mm_unpacklo_epi8(zmm0, 0)
        temp0_3 = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_4[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        int32_t temp0_5[0x4] = _mm_sub_epi16(temp0_1, temp0_3)
        int32_t temp0_6[0x4] = _mm_sub_epi16(temp0_2, temp0_4)
        zmm6 = _mm_add_epi16(zmm6, temp0_5)
        zmm2 = _mm_madd_epi16(temp0_5, temp0_5)
        zmm6 = _mm_add_epi16(zmm6, temp0_6)
        zmm0 = _mm_madd_epi16(temp0_6, temp0_6)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2
        r10 += arg6
        i_2 = i_9
        i_9 -= 1
    while (i_2 s> 1)
    int64_t temp0_13 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_3[0].q = zmm7 u>> 0x40
    int32_t temp0_14[0x4] = _mm_unpacklo_epi16(zmm6, temp0_13)
    int32_t temp0_15[0x4] = _mm_unpackhi_epi16(zmm6, temp0_13)
    int32_t temp0_16[0x4] = _mm_add_epi32(zmm7, temp0_3)
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
            zmm0 = _mm_avg_epu8(*arg1, *(arg1 + 1))
            int32_t temp0_105[0x4]
            int32_t i_3
            
            do
                zmm1 = *r10
                zmm4 = _mm_avg_epu8(*rcx, *(rcx + 1))
                temp0_105 = _mm_unpackhi_epi8(zmm1, 0)
                zmm0 = _mm_avg_epu8(zmm0, zmm4)
                int32_t temp0_107[0x4] = _mm_unpackhi_epi8(zmm0, 0)
                int32_t temp0_108[0x4] = _mm_unpacklo_epi8(zmm0, 0)
                int32_t temp0_109[0x4] = _mm_unpacklo_epi8(zmm1, 0)
                int32_t temp0_110[0x4] = _mm_sub_epi16(temp0_107, temp0_105)
                int32_t temp0_111[0x4] = _mm_sub_epi16(temp0_108, temp0_109)
                zmm6 = _mm_add_epi16(zmm6, temp0_110)
                zmm2 = _mm_madd_epi16(temp0_110, temp0_110)
                zmm6 = _mm_add_epi16(zmm6, temp0_111)
                zmm0 = _mm_madd_epi16(temp0_111, temp0_111)
                zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
                zmm0 = zmm4
                rcx += arg2
                r10 += arg6
                i_3 = i_9
                i_9 -= 1
            while (i_3 s> 1)
            int64_t temp0_118 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            temp0_105[0].q = zmm7 u>> 0x40
            int32_t temp0_119[0x4] = _mm_unpacklo_epi16(zmm6, temp0_118)
            int32_t temp0_120[0x4] = _mm_unpackhi_epi16(zmm6, temp0_118)
            int32_t temp0_121[0x4] = _mm_add_epi32(zmm7, temp0_105)
            int32_t temp0_122[0x4] = _mm_add_epi32(temp0_120, temp0_119)
            zmm3 = _mm_shuffle_epi32(temp0_121, 1)
            temp0_119[0].q = temp0_122 u>> 0x40
            int32_t temp0_124[0x4] = _mm_add_epi32(temp0_121, zmm3)
            int32_t temp0_125[0x4] = _mm_add_epi32(temp0_122, temp0_119)
            zmm4 = _mm_shuffle_epi32(temp0_125, 1)
            *arg8 = temp0_124[0]
            return zx.q(_mm_add_epi32(temp0_125, zmm4)[0])
        
        uint64_t r9_1 = zx.q(arg4 << 5)
        zmm8 = *(&data_14427edf0 + r9_1)
        zmm9 = *(r9_1 + 0x14427ee00)
        zmm10 = data_14427ede0
        void* rcx_1 = arg1 + arg2
        zmm0 = _mm_avg_epu8(*arg1, *(arg1 + 1))
        int32_t temp0_143[0x4]
        int32_t i_4
        
        do
            zmm1 = *r10
            zmm4 = _mm_avg_epu8(*rcx_1, *(rcx_1 + 1))
            int32_t temp0_130[0x4] = _mm_unpackhi_epi8(zmm0, 0)
            int32_t temp0_131[0x4] = _mm_unpackhi_epi8(zmm4, 0)
            int32_t temp0_132[0x4] = _mm_mullo_epi16(temp0_130, zmm8)
            int32_t temp0_133[0x4] = _mm_mullo_epi16(temp0_131, zmm9)
            zmm2 = _mm_add_epi16(temp0_132, zmm10)
            int32_t temp0_135[0x4] = _mm_unpacklo_epi8(zmm0, 0)
            zmm2 = _mm_add_epi16(zmm2, temp0_133)
            int32_t temp0_137[0x4] = _mm_unpacklo_epi8(zmm4, 0)
            int32_t temp0_138[0x4] = _mm_mullo_epi16(temp0_135, zmm8)
            int32_t temp0_139[0x4] = _mm_mullo_epi16(temp0_137, zmm9)
            zmm0 = _mm_add_epi16(temp0_138, zmm10)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            zmm0 = _mm_add_epi16(zmm0, temp0_139)
            temp0_143 = _mm_unpackhi_epi8(zmm1, 0)
            zmm0 = _mm_srai_epi16(zmm0, 4)
            int32_t temp0_145[0x4] = _mm_unpacklo_epi8(zmm1, 0)
            int32_t temp0_146[0x4] = _mm_sub_epi16(zmm2, temp0_143)
            int32_t temp0_147[0x4] = _mm_sub_epi16(zmm0, temp0_145)
            zmm6 = _mm_add_epi16(zmm6, temp0_146)
            zmm2 = _mm_madd_epi16(temp0_146, temp0_146)
            zmm6 = _mm_add_epi16(zmm6, temp0_147)
            zmm0 = _mm_madd_epi16(temp0_147, temp0_147)
            zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
            zmm0 = zmm4
            rcx_1 += arg2
            r10 += arg6
            i_4 = i_9
            i_9 -= 1
        while (i_4 s> 1)
        int64_t temp0_154 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        temp0_143[0].q = zmm7 u>> 0x40
        int32_t temp0_155[0x4] = _mm_unpacklo_epi16(zmm6, temp0_154)
        int32_t temp0_156[0x4] = _mm_unpackhi_epi16(zmm6, temp0_154)
        int32_t temp0_157[0x4] = _mm_add_epi32(zmm7, temp0_143)
        int32_t temp0_158[0x4] = _mm_add_epi32(temp0_156, temp0_155)
        zmm3 = _mm_shuffle_epi32(temp0_157, 1)
        temp0_155[0].q = temp0_158 u>> 0x40
        int32_t temp0_160[0x4] = _mm_add_epi32(temp0_157, zmm3)
        int32_t temp0_161[0x4] = _mm_add_epi32(temp0_158, temp0_155)
        zmm4 = _mm_shuffle_epi32(temp0_161, 1)
        *arg8 = temp0_160[0]
        return zx.q(_mm_add_epi32(temp0_161, zmm4)[0])
    
    int32_t temp0_81[0x4]
    int32_t i_5
    
    do
        zmm1 = *r10
        zmm0 = _mm_avg_epu8(*arg1, *(arg1 + 1))
        temp0_81 = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_82[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        int32_t temp0_83[0x4] = _mm_unpackhi_epi8(zmm0, 0)
        int32_t temp0_84[0x4] = _mm_unpacklo_epi8(zmm0, 0)
        int32_t temp0_85[0x4] = _mm_sub_epi16(temp0_83, temp0_81)
        int32_t temp0_86[0x4] = _mm_sub_epi16(temp0_84, temp0_82)
        zmm6 = _mm_add_epi16(zmm6, temp0_85)
        zmm2 = _mm_madd_epi16(temp0_85, temp0_85)
        zmm6 = _mm_add_epi16(zmm6, temp0_86)
        zmm0 = _mm_madd_epi16(temp0_86, temp0_86)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2
        r10 += arg6
        i_5 = i_9
        i_9 -= 1
    while (i_5 s> 1)
    int64_t temp0_93 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_81[0].q = zmm7 u>> 0x40
    int32_t temp0_94[0x4] = _mm_unpacklo_epi16(zmm6, temp0_93)
    int32_t temp0_95[0x4] = _mm_unpackhi_epi16(zmm6, temp0_93)
    int32_t temp0_96[0x4] = _mm_add_epi32(zmm7, temp0_81)
    int32_t temp0_97[0x4] = _mm_add_epi32(temp0_95, temp0_94)
    zmm3 = _mm_shuffle_epi32(temp0_96, 1)
    temp0_94[0].q = temp0_97 u>> 0x40
    int32_t temp0_99[0x4] = _mm_add_epi32(temp0_96, zmm3)
    int32_t temp0_100[0x4] = _mm_add_epi32(temp0_97, temp0_94)
    zmm4 = _mm_shuffle_epi32(temp0_100, 1)
    *arg8 = temp0_99[0]
    return zx.q(_mm_add_epi32(temp0_100, zmm4)[0])

if (arg4 == 0)
    uint64_t r8 = zx.q(arg3 << 5)
    zmm8 = *(&data_14427edf0 + r8)
    zmm9 = *(r8 + 0x14427ee00)
    zmm10 = data_14427ede0
    int32_t temp0_178[0x4]
    int32_t i_6
    
    do
        zmm0 = *arg1
        zmm4 = *(arg1 + 1)
        zmm1 = *r10
        int32_t temp0_164[0x4] = _mm_unpackhi_epi8(zmm0, 0)
        int32_t temp0_165[0x4] = _mm_unpackhi_epi8(zmm4, 0)
        int32_t temp0_166[0x4] = _mm_unpacklo_epi8(zmm0, 0)
        int32_t temp0_167[0x4] = _mm_unpacklo_epi8(zmm4, 0)
        int32_t temp0_168[0x4] = _mm_mullo_epi16(temp0_164, zmm8)
        int32_t temp0_169[0x4] = _mm_mullo_epi16(temp0_165, zmm9)
        zmm2 = _mm_add_epi16(temp0_168, zmm10)
        int32_t temp0_171[0x4] = _mm_mullo_epi16(temp0_166, zmm8)
        int32_t temp0_172[0x4] = _mm_mullo_epi16(temp0_167, zmm9)
        zmm0 = _mm_add_epi16(temp0_171, zmm10)
        zmm2 = _mm_add_epi16(zmm2, temp0_169)
        zmm0 = _mm_add_epi16(zmm0, temp0_172)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        zmm0 = _mm_srai_epi16(zmm0, 4)
        temp0_178 = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_179[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        int32_t temp0_180[0x4] = _mm_sub_epi16(zmm2, temp0_178)
        int32_t temp0_181[0x4] = _mm_sub_epi16(zmm0, temp0_179)
        zmm6 = _mm_add_epi16(zmm6, temp0_180)
        zmm2 = _mm_madd_epi16(temp0_180, temp0_180)
        zmm6 = _mm_add_epi16(zmm6, temp0_181)
        zmm0 = _mm_madd_epi16(temp0_181, temp0_181)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2
        r10 += arg6
        i_6 = i_9
        i_9 -= 1
    while (i_6 s> 1)
    int64_t temp0_188 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_178[0].q = zmm7 u>> 0x40
    int32_t temp0_189[0x4] = _mm_unpacklo_epi16(zmm6, temp0_188)
    int32_t temp0_190[0x4] = _mm_unpackhi_epi16(zmm6, temp0_188)
    int32_t temp0_191[0x4] = _mm_add_epi32(zmm7, temp0_178)
    int32_t temp0_192[0x4] = _mm_add_epi32(temp0_190, temp0_189)
    zmm3 = _mm_shuffle_epi32(temp0_191, 1)
    temp0_189[0].q = temp0_192 u>> 0x40
    int32_t temp0_194[0x4] = _mm_add_epi32(temp0_191, zmm3)
    int32_t temp0_195[0x4] = _mm_add_epi32(temp0_192, temp0_189)
    zmm4 = _mm_shuffle_epi32(temp0_195, 1)
    *arg8 = temp0_194[0]
    return zx.q(_mm_add_epi32(temp0_195, zmm4)[0])

if (arg4 == 4)
    uint64_t r8_1 = zx.q(arg3 << 5)
    zmm8 = *(&data_14427edf0 + r8_1)
    zmm9 = *(r8_1 + 0x14427ee00)
    zmm10 = data_14427ede0
    zmm0 = *arg1
    zmm1 = *(arg1 + 1)
    int32_t temp0_198[0x4] = _mm_unpackhi_epi8(zmm0, 0)
    int32_t temp0_199[0x4] = _mm_unpackhi_epi8(zmm1, 0)
    int32_t temp0_200[0x4] = _mm_unpacklo_epi8(zmm0, 0)
    int32_t temp0_201[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    int32_t temp0_202[0x4] = _mm_mullo_epi16(temp0_200, zmm8)
    int32_t temp0_203[0x4] = _mm_mullo_epi16(temp0_201, zmm9)
    zmm0 = _mm_add_epi16(temp0_202, zmm10)
    int32_t temp0_205[0x4] = _mm_mullo_epi16(temp0_198, zmm8)
    int32_t temp0_206[0x4] = _mm_mullo_epi16(temp0_199, zmm9)
    zmm2 = _mm_add_epi16(temp0_205, zmm10)
    zmm0 = _mm_add_epi16(zmm0, temp0_203)
    zmm2 = _mm_add_epi16(zmm2, temp0_206)
    void* rcx_2 = arg1 + arg2
    zmm0 = _mm_packus_epi16(_mm_srai_epi16(zmm0, 4), _mm_srai_epi16(zmm2, 4))
    int32_t temp0_227[0x4]
    int32_t i_7
    
    do
        zmm4 = *rcx_2
        zmm3 = *(rcx_2 + 1)
        int32_t temp0_213[0x4] = _mm_unpackhi_epi8(zmm4, 0)
        int32_t temp0_214[0x4] = _mm_unpackhi_epi8(zmm3, 0)
        int32_t temp0_215[0x4] = _mm_unpacklo_epi8(zmm4, 0)
        int32_t temp0_216[0x4] = _mm_unpacklo_epi8(zmm3, 0)
        int32_t temp0_217[0x4] = _mm_mullo_epi16(temp0_215, zmm8)
        int32_t temp0_218[0x4] = _mm_mullo_epi16(temp0_216, zmm9)
        zmm4 = _mm_add_epi16(temp0_217, zmm10)
        int32_t temp0_220[0x4] = _mm_mullo_epi16(temp0_213, zmm8)
        int32_t temp0_221[0x4] = _mm_mullo_epi16(temp0_214, zmm9)
        zmm2 = _mm_add_epi16(temp0_220, zmm10)
        zmm4 = _mm_add_epi16(zmm4, temp0_218)
        zmm2 = _mm_add_epi16(zmm2, temp0_221)
        zmm1 = *r10
        zmm4 = _mm_srai_epi16(zmm4, 4)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        temp0_227 = _mm_unpackhi_epi8(zmm1, 0)
        zmm4 = _mm_packus_epi16(zmm4, zmm2)
        int32_t temp0_229[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        zmm0 = _mm_avg_epu8(zmm0, zmm4)
        int32_t temp0_231[0x4] = _mm_unpackhi_epi8(zmm0, 0)
        int32_t temp0_232[0x4] = _mm_unpacklo_epi8(zmm0, 0)
        int32_t temp0_233[0x4] = _mm_sub_epi16(temp0_231, temp0_227)
        int32_t temp0_234[0x4] = _mm_sub_epi16(temp0_232, temp0_229)
        zmm6 = _mm_add_epi16(zmm6, temp0_233)
        zmm2 = _mm_madd_epi16(temp0_233, temp0_233)
        zmm6 = _mm_add_epi16(zmm6, temp0_234)
        zmm0 = _mm_madd_epi16(temp0_234, temp0_234)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        zmm0 = zmm4
        rcx_2 += arg2
        r10 += arg6
        i_7 = i_9
        i_9 -= 1
    while (i_7 s> 1)
    int64_t temp0_241 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_227[0].q = zmm7 u>> 0x40
    int32_t temp0_242[0x4] = _mm_unpacklo_epi16(zmm6, temp0_241)
    int32_t temp0_243[0x4] = _mm_unpackhi_epi16(zmm6, temp0_241)
    int32_t temp0_244[0x4] = _mm_add_epi32(zmm7, temp0_227)
    int32_t temp0_245[0x4] = _mm_add_epi32(temp0_243, temp0_242)
    zmm3 = _mm_shuffle_epi32(temp0_244, 1)
    temp0_242[0].q = temp0_245 u>> 0x40
    int32_t temp0_247[0x4] = _mm_add_epi32(temp0_244, zmm3)
    int32_t temp0_248[0x4] = _mm_add_epi32(temp0_245, temp0_242)
    zmm4 = _mm_shuffle_epi32(temp0_248, 1)
    *arg8 = temp0_247[0]
    return zx.q(_mm_add_epi32(temp0_248, zmm4)[0])

uint64_t r8_2 = zx.q(arg3 << 5)
uint64_t r9_2 = zx.q(arg4 << 5)
zmm8 = *(&data_14427edf0 + r8_2)
zmm9 = *(r8_2 + 0x14427ee00)
zmm10 = *(&data_14427edf0 + r9_2)
int32_t zmm11[0x4] = *(r9_2 + 0x14427ee00)
int16_t zmm12[0x8] = data_14427ede0
zmm0 = *arg1
zmm1 = *(arg1 + 1)
int32_t temp0_251[0x4] = _mm_unpackhi_epi8(zmm0, 0)
int32_t temp0_252[0x4] = _mm_unpackhi_epi8(zmm1, 0)
int32_t temp0_253[0x4] = _mm_unpacklo_epi8(zmm0, 0)
int32_t temp0_254[0x4] = _mm_unpacklo_epi8(zmm1, 0)
int32_t temp0_255[0x4] = _mm_mullo_epi16(temp0_253, zmm8)
int32_t temp0_256[0x4] = _mm_mullo_epi16(temp0_254, zmm9)
zmm0 = _mm_add_epi16(temp0_255, zmm12)
int32_t temp0_258[0x4] = _mm_mullo_epi16(temp0_251, zmm8)
int32_t temp0_259[0x4] = _mm_mullo_epi16(temp0_252, zmm9)
zmm2 = _mm_add_epi16(temp0_258, zmm12)
zmm0 = _mm_add_epi16(zmm0, temp0_256)
zmm2 = _mm_add_epi16(zmm2, temp0_259)
void* rcx_3 = arg1 + arg2
zmm0 = _mm_packus_epi16(_mm_srai_epi16(zmm0, 4), _mm_srai_epi16(zmm2, 4))
int32_t temp0_292[0x4]
int32_t i_8

do
    zmm3 = *rcx_3
    zmm4 = *(rcx_3 + 1)
    int32_t temp0_266[0x4] = _mm_unpackhi_epi8(zmm3, 0)
    int32_t temp0_267[0x4] = _mm_unpackhi_epi8(zmm4, 0)
    int32_t temp0_268[0x4] = _mm_unpacklo_epi8(zmm3, 0)
    int32_t temp0_269[0x4] = _mm_unpacklo_epi8(zmm4, 0)
    int32_t temp0_270[0x4] = _mm_mullo_epi16(temp0_268, zmm8)
    int32_t temp0_271[0x4] = _mm_mullo_epi16(temp0_269, zmm9)
    zmm3 = _mm_add_epi16(temp0_270, zmm12)
    int32_t temp0_273[0x4] = _mm_mullo_epi16(temp0_266, zmm8)
    int32_t temp0_274[0x4] = _mm_mullo_epi16(temp0_267, zmm9)
    zmm1 = _mm_add_epi16(temp0_273, zmm12)
    zmm3 = _mm_add_epi16(zmm3, temp0_271)
    zmm1 = _mm_add_epi16(zmm1, temp0_274)
    zmm3 = _mm_srai_epi16(zmm3, 4)
    zmm1 = _mm_srai_epi16(zmm1, 4)
    zmm4 = _mm_packus_epi16(zmm3, zmm1)
    int32_t temp0_281[0x4] = _mm_unpackhi_epi8(zmm0, 0)
    int32_t temp0_282[0x4] = _mm_unpacklo_epi8(zmm0, 0)
    int32_t temp0_283[0x4] = _mm_mullo_epi16(temp0_281, zmm10)
    int32_t temp0_284[0x4] = _mm_mullo_epi16(zmm1, zmm11)
    zmm2 = _mm_add_epi16(temp0_283, zmm12)
    int32_t temp0_286[0x4] = _mm_mullo_epi16(temp0_282, zmm10)
    int32_t temp0_287[0x4] = _mm_mullo_epi16(zmm3, zmm11)
    zmm2 = _mm_add_epi16(zmm2, temp0_284)
    zmm1 = *r10
    zmm0 = _mm_add_epi16(temp0_286, zmm12)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm0 = _mm_add_epi16(zmm0, temp0_287)
    temp0_292 = _mm_unpackhi_epi8(zmm1, 0)
    zmm0 = _mm_srai_epi16(zmm0, 4)
    int32_t temp0_294[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    int32_t temp0_295[0x4] = _mm_sub_epi16(zmm2, temp0_292)
    int32_t temp0_296[0x4] = _mm_sub_epi16(zmm0, temp0_294)
    zmm6 = _mm_add_epi16(zmm6, temp0_295)
    zmm2 = _mm_madd_epi16(temp0_295, temp0_295)
    zmm6 = _mm_add_epi16(zmm6, temp0_296)
    zmm0 = _mm_madd_epi16(temp0_296, temp0_296)
    zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
    zmm0 = zmm4
    rcx_3 += arg2
    r10 += arg6
    i_8 = i_9
    i_9 -= 1
while (i_8 s> 1)
int64_t temp0_303 = _mm_cmpgt_epi16(zx.o(0), zmm6)
temp0_292[0].q = zmm7 u>> 0x40
int32_t temp0_304[0x4] = _mm_unpacklo_epi16(zmm6, temp0_303)
int32_t temp0_305[0x4] = _mm_unpackhi_epi16(zmm6, temp0_303)
int32_t temp0_306[0x4] = _mm_add_epi32(zmm7, temp0_292)
int32_t temp0_307[0x4] = _mm_add_epi32(temp0_305, temp0_304)
zmm3 = _mm_shuffle_epi32(temp0_306, 1)
temp0_304[0].q = temp0_307 u>> 0x40
int32_t temp0_309[0x4] = _mm_add_epi32(temp0_306, zmm3)
int32_t temp0_310[0x4] = _mm_add_epi32(temp0_307, temp0_304)
zmm4 = _mm_shuffle_epi32(temp0_310, 1)
*arg8 = temp0_309[0]
return zx.q(_mm_add_epi32(temp0_310, zmm4)[0])
