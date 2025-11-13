// 函数: sub_1403b5970
// 地址: 0x1403b5970
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
char zmm8[0x10]
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
        
        zmm8 = *(&data_14427eef0 + zx.q(arg4 << 4))
        zmm10 = data_14427ede0
        int32_t temp0_54[0x4]
        int32_t i_1
        
        do
            zmm0 = *arg1
            zmm4 = *(arg1 + arg2)
            zmm1 = *r10
            int32_t temp0_46[0x4] = _mm_unpackhi_epi8(zmm0, zmm4[0].q)
            int32_t temp0_47[0x4] = _mm_unpacklo_epi8(zmm0, zmm4[0].q)
            zmm2 = _mm_maddubs_epi16(temp0_46, zmm8)
            zmm0 = _mm_maddubs_epi16(temp0_47, zmm8)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            zmm0 = _mm_srai_epi16(zmm0, 4)
            temp0_54 = _mm_unpackhi_epi8(zmm1, 0)
            int32_t temp0_55[0x4] = _mm_unpacklo_epi8(zmm1, 0)
            int32_t temp0_56[0x4] = _mm_sub_epi16(zmm2, temp0_54)
            int32_t temp0_57[0x4] = _mm_sub_epi16(zmm0, temp0_55)
            zmm6 = _mm_add_epi16(zmm6, temp0_56)
            zmm2 = _mm_madd_epi16(temp0_56, temp0_56)
            zmm6 = _mm_add_epi16(zmm6, temp0_57)
            zmm0 = _mm_madd_epi16(temp0_57, temp0_57)
            zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
            arg1 += arg2
            r10 += arg6
            i_1 = i_9
            i_9 -= 1
        while (i_1 s> 1)
        int64_t temp0_64 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        temp0_54[0].q = zmm7 u>> 0x40
        int32_t temp0_65[0x4] = _mm_unpacklo_epi16(zmm6, temp0_64)
        int32_t temp0_66[0x4] = _mm_unpackhi_epi16(zmm6, temp0_64)
        int32_t temp0_67[0x4] = _mm_add_epi32(zmm7, temp0_54)
        int32_t temp0_68[0x4] = _mm_add_epi32(temp0_66, temp0_65)
        zmm3 = _mm_shuffle_epi32(temp0_67, 1)
        temp0_65[0].q = temp0_68 u>> 0x40
        int32_t temp0_70[0x4] = _mm_add_epi32(temp0_67, zmm3)
        int32_t temp0_71[0x4] = _mm_add_epi32(temp0_68, temp0_65)
        zmm4 = _mm_shuffle_epi32(temp0_71, 1)
        *arg8 = temp0_70[0]
        return zx.q(_mm_add_epi32(temp0_71, zmm4)[0])
    
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
            int32_t temp0_99[0x4]
            int32_t i_3
            
            do
                zmm1 = *r10
                zmm4 = _mm_avg_epu8(*rcx, *(rcx + 1))
                temp0_99 = _mm_unpackhi_epi8(zmm1, 0)
                zmm0 = _mm_avg_epu8(zmm0, zmm4)
                int32_t temp0_101[0x4] = _mm_unpackhi_epi8(zmm0, 0)
                int32_t temp0_102[0x4] = _mm_unpacklo_epi8(zmm0, 0)
                int32_t temp0_103[0x4] = _mm_unpacklo_epi8(zmm1, 0)
                int32_t temp0_104[0x4] = _mm_sub_epi16(temp0_101, temp0_99)
                int32_t temp0_105[0x4] = _mm_sub_epi16(temp0_102, temp0_103)
                zmm6 = _mm_add_epi16(zmm6, temp0_104)
                zmm2 = _mm_madd_epi16(temp0_104, temp0_104)
                zmm6 = _mm_add_epi16(zmm6, temp0_105)
                zmm0 = _mm_madd_epi16(temp0_105, temp0_105)
                zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
                zmm0 = zmm4
                rcx += arg2
                r10 += arg6
                i_3 = i_9
                i_9 -= 1
            while (i_3 s> 1)
            int64_t temp0_112 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            temp0_99[0].q = zmm7 u>> 0x40
            int32_t temp0_113[0x4] = _mm_unpacklo_epi16(zmm6, temp0_112)
            int32_t temp0_114[0x4] = _mm_unpackhi_epi16(zmm6, temp0_112)
            int32_t temp0_115[0x4] = _mm_add_epi32(zmm7, temp0_99)
            int32_t temp0_116[0x4] = _mm_add_epi32(temp0_114, temp0_113)
            zmm3 = _mm_shuffle_epi32(temp0_115, 1)
            temp0_113[0].q = temp0_116 u>> 0x40
            int32_t temp0_118[0x4] = _mm_add_epi32(temp0_115, zmm3)
            int32_t temp0_119[0x4] = _mm_add_epi32(temp0_116, temp0_113)
            zmm4 = _mm_shuffle_epi32(temp0_119, 1)
            *arg8 = temp0_118[0]
            return zx.q(_mm_add_epi32(temp0_119, zmm4)[0])
        
        zmm8 = *(&data_14427eef0 + zx.q(arg4 << 4))
        zmm10 = data_14427ede0
        void* rcx_1 = arg1 + arg2
        zmm0 = _mm_avg_epu8(*arg1, *(arg1 + 1))
        int32_t temp0_131[0x4]
        int32_t i_4
        
        do
            zmm1 = *r10
            zmm4 = _mm_avg_epu8(*rcx_1, *(rcx_1 + 1))
            int32_t temp0_124[0x4] = _mm_unpackhi_epi8(zmm0, zmm4[0].q)
            int32_t temp0_125[0x4] = _mm_unpacklo_epi8(zmm0, zmm4[0].q)
            zmm2 = _mm_maddubs_epi16(temp0_124, zmm8)
            zmm0 = _mm_maddubs_epi16(temp0_125, zmm8)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            temp0_131 = _mm_unpackhi_epi8(zmm1, 0)
            zmm0 = _mm_srai_epi16(zmm0, 4)
            int32_t temp0_133[0x4] = _mm_unpacklo_epi8(zmm1, 0)
            int32_t temp0_134[0x4] = _mm_sub_epi16(zmm2, temp0_131)
            int32_t temp0_135[0x4] = _mm_sub_epi16(zmm0, temp0_133)
            zmm6 = _mm_add_epi16(zmm6, temp0_134)
            zmm2 = _mm_madd_epi16(temp0_134, temp0_134)
            zmm6 = _mm_add_epi16(zmm6, temp0_135)
            zmm0 = _mm_madd_epi16(temp0_135, temp0_135)
            zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
            zmm0 = zmm4
            rcx_1 += arg2
            r10 += arg6
            i_4 = i_9
            i_9 -= 1
        while (i_4 s> 1)
        int64_t temp0_142 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        temp0_131[0].q = zmm7 u>> 0x40
        int32_t temp0_143[0x4] = _mm_unpacklo_epi16(zmm6, temp0_142)
        int32_t temp0_144[0x4] = _mm_unpackhi_epi16(zmm6, temp0_142)
        int32_t temp0_145[0x4] = _mm_add_epi32(zmm7, temp0_131)
        int32_t temp0_146[0x4] = _mm_add_epi32(temp0_144, temp0_143)
        zmm3 = _mm_shuffle_epi32(temp0_145, 1)
        temp0_143[0].q = temp0_146 u>> 0x40
        int32_t temp0_148[0x4] = _mm_add_epi32(temp0_145, zmm3)
        int32_t temp0_149[0x4] = _mm_add_epi32(temp0_146, temp0_143)
        zmm4 = _mm_shuffle_epi32(temp0_149, 1)
        *arg8 = temp0_148[0]
        return zx.q(_mm_add_epi32(temp0_149, zmm4)[0])
    
    int32_t temp0_75[0x4]
    int32_t i_5
    
    do
        zmm1 = *r10
        zmm0 = _mm_avg_epu8(*arg1, *(arg1 + 1))
        temp0_75 = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_76[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        int32_t temp0_77[0x4] = _mm_unpackhi_epi8(zmm0, 0)
        int32_t temp0_78[0x4] = _mm_unpacklo_epi8(zmm0, 0)
        int32_t temp0_79[0x4] = _mm_sub_epi16(temp0_77, temp0_75)
        int32_t temp0_80[0x4] = _mm_sub_epi16(temp0_78, temp0_76)
        zmm6 = _mm_add_epi16(zmm6, temp0_79)
        zmm2 = _mm_madd_epi16(temp0_79, temp0_79)
        zmm6 = _mm_add_epi16(zmm6, temp0_80)
        zmm0 = _mm_madd_epi16(temp0_80, temp0_80)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2
        r10 += arg6
        i_5 = i_9
        i_9 -= 1
    while (i_5 s> 1)
    int64_t temp0_87 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_75[0].q = zmm7 u>> 0x40
    int32_t temp0_88[0x4] = _mm_unpacklo_epi16(zmm6, temp0_87)
    int32_t temp0_89[0x4] = _mm_unpackhi_epi16(zmm6, temp0_87)
    int32_t temp0_90[0x4] = _mm_add_epi32(zmm7, temp0_75)
    int32_t temp0_91[0x4] = _mm_add_epi32(temp0_89, temp0_88)
    zmm3 = _mm_shuffle_epi32(temp0_90, 1)
    temp0_88[0].q = temp0_91 u>> 0x40
    int32_t temp0_93[0x4] = _mm_add_epi32(temp0_90, zmm3)
    int32_t temp0_94[0x4] = _mm_add_epi32(temp0_91, temp0_88)
    zmm4 = _mm_shuffle_epi32(temp0_94, 1)
    *arg8 = temp0_93[0]
    return zx.q(_mm_add_epi32(temp0_94, zmm4)[0])

if (arg4 == 0)
    zmm8 = *(&data_14427eef0 + zx.q(arg3 << 4))
    zmm10 = data_14427ede0
    int32_t temp0_160[0x4]
    int32_t i_6
    
    do
        zmm0 = *arg1
        zmm4 = *(arg1 + 1)
        zmm1 = *r10
        int32_t temp0_152[0x4] = _mm_unpackhi_epi8(zmm0, zmm4[0].q)
        int32_t temp0_153[0x4] = _mm_unpacklo_epi8(zmm0, zmm4[0].q)
        zmm2 = _mm_maddubs_epi16(temp0_152, zmm8)
        zmm0 = _mm_maddubs_epi16(temp0_153, zmm8)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm0 = _mm_add_epi16(zmm0, zmm10)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        zmm0 = _mm_srai_epi16(zmm0, 4)
        temp0_160 = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_161[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        int32_t temp0_162[0x4] = _mm_sub_epi16(zmm2, temp0_160)
        int32_t temp0_163[0x4] = _mm_sub_epi16(zmm0, temp0_161)
        zmm6 = _mm_add_epi16(zmm6, temp0_162)
        zmm2 = _mm_madd_epi16(temp0_162, temp0_162)
        zmm6 = _mm_add_epi16(zmm6, temp0_163)
        zmm0 = _mm_madd_epi16(temp0_163, temp0_163)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2
        r10 += arg6
        i_6 = i_9
        i_9 -= 1
    while (i_6 s> 1)
    int64_t temp0_170 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_160[0].q = zmm7 u>> 0x40
    int32_t temp0_171[0x4] = _mm_unpacklo_epi16(zmm6, temp0_170)
    int32_t temp0_172[0x4] = _mm_unpackhi_epi16(zmm6, temp0_170)
    int32_t temp0_173[0x4] = _mm_add_epi32(zmm7, temp0_160)
    int32_t temp0_174[0x4] = _mm_add_epi32(temp0_172, temp0_171)
    zmm3 = _mm_shuffle_epi32(temp0_173, 1)
    temp0_171[0].q = temp0_174 u>> 0x40
    int32_t temp0_176[0x4] = _mm_add_epi32(temp0_173, zmm3)
    int32_t temp0_177[0x4] = _mm_add_epi32(temp0_174, temp0_171)
    zmm4 = _mm_shuffle_epi32(temp0_177, 1)
    *arg8 = temp0_176[0]
    return zx.q(_mm_add_epi32(temp0_177, zmm4)[0])

if (arg4 == 4)
    zmm8 = *(&data_14427eef0 + zx.q(arg3 << 4))
    zmm10 = data_14427ede0
    zmm0 = *arg1
    zmm1 = *(arg1 + 1)
    int32_t temp0_180[0x4] = _mm_unpackhi_epi8(zmm0, zmm1[0].q)
    int32_t temp0_181[0x4] = _mm_unpacklo_epi8(zmm0, zmm1[0].q)
    zmm2 = _mm_maddubs_epi16(temp0_180, zmm8)
    zmm0 = _mm_maddubs_epi16(temp0_181, zmm8)
    zmm2 = _mm_add_epi16(zmm2, zmm10)
    void* rcx_2 = arg1 + arg2
    zmm0 = _mm_packus_epi16(_mm_srai_epi16(_mm_add_epi16(zmm0, zmm10), 4), _mm_srai_epi16(zmm2, 4))
    int32_t temp0_199[0x4]
    int32_t i_7
    
    do
        zmm4 = *rcx_2
        zmm3 = *(rcx_2 + 1)
        zmm1 = *r10
        int32_t temp0_189[0x4] = _mm_unpackhi_epi8(zmm4, zmm3[0].q)
        int32_t temp0_190[0x4] = _mm_unpacklo_epi8(zmm4, zmm3[0].q)
        zmm2 = _mm_maddubs_epi16(temp0_189, zmm8)
        zmm4 = _mm_maddubs_epi16(temp0_190, zmm8)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm4 = _mm_add_epi16(zmm4, zmm10)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        zmm4 = _mm_packus_epi16(_mm_srai_epi16(zmm4, 4), zmm2)
        zmm0 = _mm_avg_epu8(zmm0, zmm4)
        temp0_199 = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_200[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        int32_t temp0_201[0x4] = _mm_unpackhi_epi8(zmm0, 0)
        int32_t temp0_202[0x4] = _mm_unpacklo_epi8(zmm0, 0)
        int32_t temp0_203[0x4] = _mm_sub_epi16(temp0_201, temp0_199)
        int32_t temp0_204[0x4] = _mm_sub_epi16(temp0_202, temp0_200)
        zmm6 = _mm_add_epi16(zmm6, temp0_203)
        zmm2 = _mm_madd_epi16(temp0_203, temp0_203)
        zmm6 = _mm_add_epi16(zmm6, temp0_204)
        zmm0 = _mm_madd_epi16(temp0_204, temp0_204)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        zmm0 = zmm4
        rcx_2 += arg2
        r10 += arg6
        i_7 = i_9
        i_9 -= 1
    while (i_7 s> 1)
    int64_t temp0_211 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_199[0].q = zmm7 u>> 0x40
    int32_t temp0_212[0x4] = _mm_unpacklo_epi16(zmm6, temp0_211)
    int32_t temp0_213[0x4] = _mm_unpackhi_epi16(zmm6, temp0_211)
    int32_t temp0_214[0x4] = _mm_add_epi32(zmm7, temp0_199)
    int32_t temp0_215[0x4] = _mm_add_epi32(temp0_213, temp0_212)
    zmm3 = _mm_shuffle_epi32(temp0_214, 1)
    temp0_212[0].q = temp0_215 u>> 0x40
    int32_t temp0_217[0x4] = _mm_add_epi32(temp0_214, zmm3)
    int32_t temp0_218[0x4] = _mm_add_epi32(temp0_215, temp0_212)
    zmm4 = _mm_shuffle_epi32(temp0_218, 1)
    *arg8 = temp0_217[0]
    return zx.q(_mm_add_epi32(temp0_218, zmm4)[0])

zmm8 = *(&data_14427eef0 + zx.q(arg3 << 4))
zmm10 = *(&data_14427eef0 + zx.q(arg4 << 4))
int16_t zmm12[0x8] = data_14427ede0
zmm0 = *arg1
zmm1 = *(arg1 + 1)
int32_t temp0_221[0x4] = _mm_unpackhi_epi8(zmm0, zmm1[0].q)
int32_t temp0_222[0x4] = _mm_unpacklo_epi8(zmm0, zmm1[0].q)
zmm2 = _mm_maddubs_epi16(temp0_221, zmm8)
zmm0 = _mm_maddubs_epi16(temp0_222, zmm8)
zmm2 = _mm_add_epi16(zmm2, zmm12)
void* rcx_3 = arg1 + arg2
zmm0 = _mm_packus_epi16(_mm_srai_epi16(_mm_add_epi16(zmm0, zmm12), 4), _mm_srai_epi16(zmm2, 4))
int32_t temp0_234[0x4]
int32_t i_8

do
    zmm4 = *rcx_3
    zmm3 = *(rcx_3 + 1)
    zmm1 = *r10
    int32_t temp0_230[0x4] = _mm_unpackhi_epi8(zmm4, zmm3[0].q)
    int32_t temp0_231[0x4] = _mm_unpacklo_epi8(zmm4, zmm3[0].q)
    zmm2 = _mm_maddubs_epi16(temp0_230, zmm8)
    zmm4 = _mm_maddubs_epi16(temp0_231, zmm8)
    temp0_234 = _mm_unpackhi_epi8(zmm1, 0)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm4 = _mm_add_epi16(zmm4, zmm12)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm4 = _mm_packus_epi16(_mm_srai_epi16(zmm4, 4), zmm2)
    int32_t temp0_240[0x4] = _mm_unpackhi_epi8(zmm0, zmm4[0].q)
    int32_t temp0_241[0x4] = _mm_unpacklo_epi8(zmm0, zmm4[0].q)
    zmm2 = _mm_maddubs_epi16(temp0_240, zmm10)
    zmm0 = _mm_maddubs_epi16(temp0_241, zmm10)
    int32_t temp0_244[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm0 = _mm_add_epi16(zmm0, zmm12)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm0 = _mm_srai_epi16(zmm0, 4)
    int32_t temp0_249[0x4] = _mm_sub_epi16(zmm2, temp0_234)
    int32_t temp0_250[0x4] = _mm_sub_epi16(zmm0, temp0_244)
    zmm6 = _mm_add_epi16(zmm6, temp0_249)
    zmm2 = _mm_madd_epi16(temp0_249, temp0_249)
    zmm6 = _mm_add_epi16(zmm6, temp0_250)
    zmm0 = _mm_madd_epi16(temp0_250, temp0_250)
    zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
    zmm0 = zmm4
    rcx_3 += arg2
    r10 += arg6
    i_8 = i_9
    i_9 -= 1
while (i_8 s> 1)
int64_t temp0_257 = _mm_cmpgt_epi16(zx.o(0), zmm6)
temp0_234[0].q = zmm7 u>> 0x40
int32_t temp0_258[0x4] = _mm_unpacklo_epi16(zmm6, temp0_257)
int32_t temp0_259[0x4] = _mm_unpackhi_epi16(zmm6, temp0_257)
int32_t temp0_260[0x4] = _mm_add_epi32(zmm7, temp0_234)
int32_t temp0_261[0x4] = _mm_add_epi32(temp0_259, temp0_258)
int32_t temp0_262[0x4] = _mm_shuffle_epi32(temp0_260, 1)
temp0_258[0].q = temp0_261 u>> 0x40
int32_t temp0_263[0x4] = _mm_add_epi32(temp0_260, temp0_262)
int32_t temp0_264[0x4] = _mm_add_epi32(temp0_261, temp0_258)
zmm4 = _mm_shuffle_epi32(temp0_264, 1)
*arg8 = temp0_263[0]
return zx.q(_mm_add_epi32(temp0_264, zmm4)[0])
