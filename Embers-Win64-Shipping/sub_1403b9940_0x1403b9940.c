// 函数: sub_1403b9940
// 地址: 0x1403b9940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r10 = arg5
uint8_t (* rax)[0x10] = arg7
int32_t i_9 = arg9
int32_t zmm6[0x4] = zx.o(0)
int32_t zmm7[0x4] = zx.o(0)
uint8_t zmm0[0x10]
int32_t zmm1[0x4]
uint8_t zmm2[0x10]
int32_t zmm3[0x4]
int32_t zmm4[0x4]
char zmm8[0x10]
int16_t zmm10[0x8]

if (arg3 == 0)
    if (arg4 != 0)
        if (arg4 == 4)
            int32_t temp0_25[0x4]
            int32_t i
            
            do
                zmm1 = *r10
                uint8_t temp0_24[0x10] = _mm_avg_epu8(*arg1, *(arg1 + arg2))
                temp0_25 = _mm_unpackhi_epi8(zmm1, 0)
                uint8_t temp0_26[0x10] = __pavgb_xmmdq_memdq(temp0_24, *rax)
                int32_t temp0_27[0x4] = _mm_unpacklo_epi8(zmm1, 0)
                zmm2 = _mm_unpackhi_epi8(temp0_26, 0)
                zmm0 = _mm_unpacklo_epi8(temp0_26, 0)
                zmm2 = _mm_sub_epi16(zmm2, temp0_25)
                zmm0 = _mm_sub_epi16(zmm0, temp0_27)
                zmm6 = _mm_add_epi16(zmm6, zmm2)
                zmm2 = _mm_madd_epi16(zmm2, zmm2)
                zmm6 = _mm_add_epi16(zmm6, zmm0)
                zmm0 = _mm_madd_epi16(zmm0, zmm0)
                zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
                arg1 += arg2
                r10 += arg6
                rax = &(*rax)[arg8]
                i = i_9
                i_9 -= 1
            while (i s> 1)
            int64_t temp0_38 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            temp0_25[0].q = zmm7 u>> 0x40
            int32_t temp0_39[0x4] = _mm_unpacklo_epi16(zmm6, temp0_38)
            int32_t temp0_40[0x4] = _mm_unpackhi_epi16(zmm6, temp0_38)
            int32_t temp0_41[0x4] = _mm_add_epi32(zmm7, temp0_25)
            int32_t temp0_42[0x4] = _mm_add_epi32(temp0_40, temp0_39)
            zmm3 = _mm_shuffle_epi32(temp0_41, 1)
            temp0_39[0].q = temp0_42 u>> 0x40
            int32_t temp0_44[0x4] = _mm_add_epi32(temp0_41, zmm3)
            int32_t temp0_45[0x4] = _mm_add_epi32(temp0_42, temp0_39)
            zmm4 = _mm_shuffle_epi32(temp0_45, 1)
            *arg10 = temp0_44[0]
            return zx.q(_mm_add_epi32(temp0_45, zmm4)[0])
        
        zmm8 = *(&data_14427eef0 + zx.q(arg4 << 4))
        zmm10 = data_14427ede0
        int32_t temp0_60[0x4]
        int32_t i_1
        
        do
            zmm0 = *arg1
            zmm4 = *(arg1 + arg2)
            zmm1 = *r10
            zmm2 = _mm_unpackhi_epi8(zmm0, zmm4[0].q)
            zmm0 = _mm_unpacklo_epi8(zmm0, zmm4[0].q)
            zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
            zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            uint8_t temp0_57[0x10] =
                __pavgb_xmmdq_memdq(_mm_packus_epi16(_mm_srai_epi16(zmm0, 4), zmm2), *rax)
            zmm2 = _mm_unpackhi_epi8(temp0_57, 0)
            zmm0 = _mm_unpacklo_epi8(temp0_57, 0)
            temp0_60 = _mm_unpackhi_epi8(zmm1, 0)
            int32_t temp0_61[0x4] = _mm_unpacklo_epi8(zmm1, 0)
            zmm2 = _mm_sub_epi16(zmm2, temp0_60)
            zmm0 = _mm_sub_epi16(zmm0, temp0_61)
            zmm6 = _mm_add_epi16(zmm6, zmm2)
            zmm2 = _mm_madd_epi16(zmm2, zmm2)
            zmm6 = _mm_add_epi16(zmm6, zmm0)
            zmm0 = _mm_madd_epi16(zmm0, zmm0)
            zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
            arg1 += arg2
            r10 += arg6
            rax = &(*rax)[arg8]
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
        *arg10 = temp0_76[0]
        return zx.q(_mm_add_epi32(temp0_77, zmm4)[0])
    
    int32_t temp0_2[0x4]
    int32_t i_2
    
    do
        zmm1 = *r10
        uint8_t temp0_1[0x10] = __pavgb_xmmdq_memdq(*arg1, *rax)
        temp0_2 = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_3[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_unpackhi_epi8(temp0_1, 0)
        zmm0 = _mm_unpacklo_epi8(temp0_1, 0)
        zmm2 = _mm_sub_epi16(zmm2, temp0_2)
        zmm0 = _mm_sub_epi16(zmm0, temp0_3)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2
        r10 += arg6
        rax = &(*rax)[arg8]
        i_2 = i_9
        i_9 -= 1
    while (i_2 s> 1)
    int64_t temp0_14 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_2[0].q = zmm7 u>> 0x40
    int32_t temp0_15[0x4] = _mm_unpacklo_epi16(zmm6, temp0_14)
    int32_t temp0_16[0x4] = _mm_unpackhi_epi16(zmm6, temp0_14)
    int32_t temp0_17[0x4] = _mm_add_epi32(zmm7, temp0_2)
    int32_t temp0_18[0x4] = _mm_add_epi32(temp0_16, temp0_15)
    zmm3 = _mm_shuffle_epi32(temp0_17, 1)
    temp0_15[0].q = temp0_18 u>> 0x40
    int32_t temp0_20[0x4] = _mm_add_epi32(temp0_17, zmm3)
    int32_t temp0_21[0x4] = _mm_add_epi32(temp0_18, temp0_15)
    zmm4 = _mm_shuffle_epi32(temp0_21, 1)
    *arg10 = temp0_20[0]
    return zx.q(_mm_add_epi32(temp0_21, zmm4)[0])

if (arg3 == 4)
    if (arg4 != 0)
        if (arg4 == 4)
            void* rcx = arg1 + arg2
            zmm0 = _mm_avg_epu8(*arg1, *(arg1 + 1))
            int32_t temp0_106[0x4]
            int32_t i_3
            
            do
                zmm1 = *r10
                zmm4 = _mm_avg_epu8(*rcx, *(rcx + 1))
                temp0_106 = _mm_unpackhi_epi8(zmm1, 0)
                uint8_t temp0_107[0x10] = _mm_avg_epu8(zmm0, zmm4)
                int32_t temp0_108[0x4] = _mm_unpacklo_epi8(zmm1, 0)
                uint8_t temp0_109[0x10] = __pavgb_xmmdq_memdq(temp0_107, *rax)
                zmm2 = _mm_unpackhi_epi8(temp0_109, 0)
                zmm0 = _mm_unpacklo_epi8(temp0_109, 0)
                zmm2 = _mm_sub_epi16(zmm2, temp0_106)
                zmm0 = _mm_sub_epi16(zmm0, temp0_108)
                zmm6 = _mm_add_epi16(zmm6, zmm2)
                zmm2 = _mm_madd_epi16(zmm2, zmm2)
                zmm6 = _mm_add_epi16(zmm6, zmm0)
                zmm0 = _mm_madd_epi16(zmm0, zmm0)
                zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
                zmm0 = zmm4
                rcx += arg2
                r10 += arg6
                rax = &(*rax)[arg8]
                i_3 = i_9
                i_9 -= 1
            while (i_3 s> 1)
            int64_t temp0_120 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            temp0_106[0].q = zmm7 u>> 0x40
            int32_t temp0_121[0x4] = _mm_unpacklo_epi16(zmm6, temp0_120)
            int32_t temp0_122[0x4] = _mm_unpackhi_epi16(zmm6, temp0_120)
            int32_t temp0_123[0x4] = _mm_add_epi32(zmm7, temp0_106)
            int32_t temp0_124[0x4] = _mm_add_epi32(temp0_122, temp0_121)
            zmm3 = _mm_shuffle_epi32(temp0_123, 1)
            temp0_121[0].q = temp0_124 u>> 0x40
            int32_t temp0_126[0x4] = _mm_add_epi32(temp0_123, zmm3)
            int32_t temp0_127[0x4] = _mm_add_epi32(temp0_124, temp0_121)
            zmm4 = _mm_shuffle_epi32(temp0_127, 1)
            *arg10 = temp0_126[0]
            return zx.q(_mm_add_epi32(temp0_127, zmm4)[0])
        
        zmm8 = *(&data_14427eef0 + zx.q(arg4 << 4))
        zmm10 = data_14427ede0
        void* rcx_1 = arg1 + arg2
        zmm0 = _mm_avg_epu8(*arg1, *(arg1 + 1))
        int32_t temp0_139[0x4]
        int32_t i_4
        
        do
            zmm1 = *r10
            zmm4 = _mm_avg_epu8(*rcx_1, *(rcx_1 + 1))
            zmm2 = _mm_unpackhi_epi8(zmm0, zmm4[0].q)
            zmm0 = _mm_unpacklo_epi8(zmm0, zmm4[0].q)
            zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
            zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            temp0_139 = _mm_unpackhi_epi8(zmm1, 0)
            uint8_t temp0_142[0x10] =
                __pavgb_xmmdq_memdq(_mm_packus_epi16(_mm_srai_epi16(zmm0, 4), zmm2), *rax)
            zmm2 = _mm_unpackhi_epi8(temp0_142, 0)
            zmm0 = _mm_unpacklo_epi8(temp0_142, 0)
            int32_t temp0_145[0x4] = _mm_unpacklo_epi8(zmm1, 0)
            zmm2 = _mm_sub_epi16(zmm2, temp0_139)
            zmm0 = _mm_sub_epi16(zmm0, temp0_145)
            zmm6 = _mm_add_epi16(zmm6, zmm2)
            zmm2 = _mm_madd_epi16(zmm2, zmm2)
            zmm6 = _mm_add_epi16(zmm6, zmm0)
            zmm0 = _mm_madd_epi16(zmm0, zmm0)
            zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
            zmm0 = zmm4
            rcx_1 += arg2
            r10 += arg6
            rax = &(*rax)[arg8]
            i_4 = i_9
            i_9 -= 1
        while (i_4 s> 1)
        int64_t temp0_154 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        temp0_139[0].q = zmm7 u>> 0x40
        int32_t temp0_155[0x4] = _mm_unpacklo_epi16(zmm6, temp0_154)
        int32_t temp0_156[0x4] = _mm_unpackhi_epi16(zmm6, temp0_154)
        int32_t temp0_157[0x4] = _mm_add_epi32(zmm7, temp0_139)
        int32_t temp0_158[0x4] = _mm_add_epi32(temp0_156, temp0_155)
        zmm3 = _mm_shuffle_epi32(temp0_157, 1)
        temp0_155[0].q = temp0_158 u>> 0x40
        int32_t temp0_160[0x4] = _mm_add_epi32(temp0_157, zmm3)
        int32_t temp0_161[0x4] = _mm_add_epi32(temp0_158, temp0_155)
        zmm4 = _mm_shuffle_epi32(temp0_161, 1)
        *arg10 = temp0_160[0]
        return zx.q(_mm_add_epi32(temp0_161, zmm4)[0])
    
    int32_t temp0_81[0x4]
    int32_t i_5
    
    do
        zmm1 = *r10
        uint8_t temp0_80[0x10] = _mm_avg_epu8(*arg1, *(arg1 + 1))
        temp0_81 = _mm_unpackhi_epi8(zmm1, 0)
        uint8_t temp0_82[0x10] = __pavgb_xmmdq_memdq(temp0_80, *rax)
        int32_t temp0_83[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_unpackhi_epi8(temp0_82, 0)
        zmm0 = _mm_unpacklo_epi8(temp0_82, 0)
        zmm2 = _mm_sub_epi16(zmm2, temp0_81)
        zmm0 = _mm_sub_epi16(zmm0, temp0_83)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2
        r10 += arg6
        rax = &(*rax)[arg8]
        i_5 = i_9
        i_9 -= 1
    while (i_5 s> 1)
    int64_t temp0_94 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_81[0].q = zmm7 u>> 0x40
    int32_t temp0_95[0x4] = _mm_unpacklo_epi16(zmm6, temp0_94)
    int32_t temp0_96[0x4] = _mm_unpackhi_epi16(zmm6, temp0_94)
    int32_t temp0_97[0x4] = _mm_add_epi32(zmm7, temp0_81)
    int32_t temp0_98[0x4] = _mm_add_epi32(temp0_96, temp0_95)
    zmm3 = _mm_shuffle_epi32(temp0_97, 1)
    temp0_95[0].q = temp0_98 u>> 0x40
    int32_t temp0_100[0x4] = _mm_add_epi32(temp0_97, zmm3)
    int32_t temp0_101[0x4] = _mm_add_epi32(temp0_98, temp0_95)
    zmm4 = _mm_shuffle_epi32(temp0_101, 1)
    *arg10 = temp0_100[0]
    return zx.q(_mm_add_epi32(temp0_101, zmm4)[0])

if (arg4 == 0)
    zmm8 = *(&data_14427eef0 + zx.q(arg3 << 4))
    zmm10 = data_14427ede0
    int32_t temp0_176[0x4]
    int32_t i_6
    
    do
        zmm0 = *arg1
        zmm4 = *(arg1 + 1)
        zmm1 = *r10
        zmm2 = _mm_unpackhi_epi8(zmm0, zmm4[0].q)
        zmm0 = _mm_unpacklo_epi8(zmm0, zmm4[0].q)
        zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
        zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm0 = _mm_add_epi16(zmm0, zmm10)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        uint8_t temp0_173[0x10] =
            __pavgb_xmmdq_memdq(_mm_packus_epi16(_mm_srai_epi16(zmm0, 4), zmm2), *rax)
        zmm2 = _mm_unpackhi_epi8(temp0_173, 0)
        zmm0 = _mm_unpacklo_epi8(temp0_173, 0)
        temp0_176 = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_177[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_sub_epi16(zmm2, temp0_176)
        zmm0 = _mm_sub_epi16(zmm0, temp0_177)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        arg1 += arg2
        r10 += arg6
        rax = &(*rax)[arg8]
        i_6 = i_9
        i_9 -= 1
    while (i_6 s> 1)
    int64_t temp0_186 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_176[0].q = zmm7 u>> 0x40
    int32_t temp0_187[0x4] = _mm_unpacklo_epi16(zmm6, temp0_186)
    int32_t temp0_188[0x4] = _mm_unpackhi_epi16(zmm6, temp0_186)
    int32_t temp0_189[0x4] = _mm_add_epi32(zmm7, temp0_176)
    int32_t temp0_190[0x4] = _mm_add_epi32(temp0_188, temp0_187)
    zmm3 = _mm_shuffle_epi32(temp0_189, 1)
    temp0_187[0].q = temp0_190 u>> 0x40
    int32_t temp0_192[0x4] = _mm_add_epi32(temp0_189, zmm3)
    int32_t temp0_193[0x4] = _mm_add_epi32(temp0_190, temp0_187)
    zmm4 = _mm_shuffle_epi32(temp0_193, 1)
    *arg10 = temp0_192[0]
    return zx.q(_mm_add_epi32(temp0_193, zmm4)[0])

if (arg4 == 4)
    zmm8 = *(&data_14427eef0 + zx.q(arg3 << 4))
    zmm10 = data_14427ede0
    zmm0 = *arg1
    zmm1 = *(arg1 + 1)
    zmm2 = _mm_unpackhi_epi8(zmm0, zmm1[0].q)
    zmm0 = _mm_unpacklo_epi8(zmm0, zmm1[0].q)
    zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
    zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
    zmm2 = _mm_add_epi16(zmm2, zmm10)
    void* rcx_2 = arg1 + arg2
    zmm0 = _mm_packus_epi16(_mm_srai_epi16(_mm_add_epi16(zmm0, zmm10), 4), _mm_srai_epi16(zmm2, 4))
    int32_t temp0_215[0x4]
    int32_t i_7
    
    do
        zmm4 = *rcx_2
        zmm3 = *(rcx_2 + 1)
        zmm1 = *r10
        zmm2 = _mm_unpackhi_epi8(zmm4, zmm3[0].q)
        int32_t temp0_206[0x4] = _mm_unpacklo_epi8(zmm4, zmm3[0].q)
        zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
        zmm4 = _mm_maddubs_epi16(temp0_206, zmm8)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm4 = _mm_add_epi16(zmm4, zmm10)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        zmm4 = _mm_packus_epi16(_mm_srai_epi16(zmm4, 4), zmm2)
        uint8_t temp0_214[0x10] = _mm_avg_epu8(zmm0, zmm4)
        temp0_215 = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_216[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        uint8_t temp0_217[0x10] = __pavgb_xmmdq_memdq(temp0_214, *rax)
        zmm2 = _mm_unpackhi_epi8(temp0_217, 0)
        zmm0 = _mm_unpacklo_epi8(temp0_217, 0)
        zmm2 = _mm_sub_epi16(zmm2, temp0_215)
        zmm0 = _mm_sub_epi16(zmm0, temp0_216)
        zmm6 = _mm_add_epi16(zmm6, zmm2)
        zmm2 = _mm_madd_epi16(zmm2, zmm2)
        zmm6 = _mm_add_epi16(zmm6, zmm0)
        zmm0 = _mm_madd_epi16(zmm0, zmm0)
        zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
        zmm0 = zmm4
        rcx_2 += arg2
        r10 += arg6
        rax = &(*rax)[arg8]
        i_7 = i_9
        i_9 -= 1
    while (i_7 s> 1)
    int64_t temp0_228 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_215[0].q = zmm7 u>> 0x40
    int32_t temp0_229[0x4] = _mm_unpacklo_epi16(zmm6, temp0_228)
    int32_t temp0_230[0x4] = _mm_unpackhi_epi16(zmm6, temp0_228)
    int32_t temp0_231[0x4] = _mm_add_epi32(zmm7, temp0_215)
    int32_t temp0_232[0x4] = _mm_add_epi32(temp0_230, temp0_229)
    zmm3 = _mm_shuffle_epi32(temp0_231, 1)
    temp0_229[0].q = temp0_232 u>> 0x40
    int32_t temp0_234[0x4] = _mm_add_epi32(temp0_231, zmm3)
    int32_t temp0_235[0x4] = _mm_add_epi32(temp0_232, temp0_229)
    zmm4 = _mm_shuffle_epi32(temp0_235, 1)
    *arg10 = temp0_234[0]
    return zx.q(_mm_add_epi32(temp0_235, zmm4)[0])

zmm8 = *(&data_14427eef0 + zx.q(arg3 << 4))
zmm10 = *(&data_14427eef0 + zx.q(arg4 << 4))
int16_t zmm12[0x8] = data_14427ede0
zmm0 = *arg1
zmm1 = *(arg1 + 1)
zmm2 = _mm_unpackhi_epi8(zmm0, zmm1[0].q)
zmm0 = _mm_unpacklo_epi8(zmm0, zmm1[0].q)
zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
zmm0 = _mm_maddubs_epi16(zmm0, zmm8)
zmm2 = _mm_add_epi16(zmm2, zmm12)
void* rcx_3 = arg1 + arg2
zmm0 = _mm_packus_epi16(_mm_srai_epi16(_mm_add_epi16(zmm0, zmm12), 4), _mm_srai_epi16(zmm2, 4))
int32_t temp0_251[0x4]
int32_t i_8

do
    zmm4 = *rcx_3
    zmm3 = *(rcx_3 + 1)
    zmm1 = *r10
    zmm2 = _mm_unpackhi_epi8(zmm4, zmm3[0].q)
    int32_t temp0_248[0x4] = _mm_unpacklo_epi8(zmm4, zmm3[0].q)
    zmm2 = _mm_maddubs_epi16(zmm2, zmm8)
    zmm4 = _mm_maddubs_epi16(temp0_248, zmm8)
    temp0_251 = _mm_unpackhi_epi8(zmm1, 0)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm4 = _mm_add_epi16(zmm4, zmm12)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm4 = _mm_packus_epi16(_mm_srai_epi16(zmm4, 4), zmm2)
    zmm2 = _mm_unpackhi_epi8(zmm0, zmm4[0].q)
    zmm0 = _mm_unpacklo_epi8(zmm0, zmm4[0].q)
    zmm2 = _mm_maddubs_epi16(zmm2, zmm10)
    zmm0 = _mm_maddubs_epi16(zmm0, zmm10)
    int32_t temp0_261[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm0 = _mm_add_epi16(zmm0, zmm12)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    uint8_t temp0_267[0x10] =
        __pavgb_xmmdq_memdq(_mm_packus_epi16(_mm_srai_epi16(zmm0, 4), zmm2), *rax)
    zmm2 = _mm_unpackhi_epi8(temp0_267, 0)
    zmm0 = _mm_unpacklo_epi8(temp0_267, 0)
    zmm2 = _mm_sub_epi16(zmm2, temp0_251)
    zmm0 = _mm_sub_epi16(zmm0, temp0_261)
    zmm6 = _mm_add_epi16(zmm6, zmm2)
    zmm2 = _mm_madd_epi16(zmm2, zmm2)
    zmm6 = _mm_add_epi16(zmm6, zmm0)
    zmm0 = _mm_madd_epi16(zmm0, zmm0)
    zmm7 = _mm_add_epi32(_mm_add_epi32(zmm7, zmm2), zmm0)
    zmm0 = zmm4
    rcx_3 += arg2
    r10 += arg6
    rax = &(*rax)[arg8]
    i_8 = i_9
    i_9 -= 1
while (i_8 s> 1)
int64_t temp0_278 = _mm_cmpgt_epi16(zx.o(0), zmm6)
temp0_251[0].q = zmm7 u>> 0x40
int32_t temp0_279[0x4] = _mm_unpacklo_epi16(zmm6, temp0_278)
int32_t temp0_280[0x4] = _mm_unpackhi_epi16(zmm6, temp0_278)
int32_t temp0_281[0x4] = _mm_add_epi32(zmm7, temp0_251)
int32_t temp0_282[0x4] = _mm_add_epi32(temp0_280, temp0_279)
zmm3 = _mm_shuffle_epi32(temp0_281, 1)
temp0_279[0].q = temp0_282 u>> 0x40
int32_t temp0_284[0x4] = _mm_add_epi32(temp0_281, zmm3)
int32_t temp0_285[0x4] = _mm_add_epi32(temp0_282, temp0_279)
zmm4 = _mm_shuffle_epi32(temp0_285, 1)
*arg10 = temp0_284[0]
return zx.q(_mm_add_epi32(temp0_285, zmm4)[0])
