// 函数: sub_1403b7940
// 地址: 0x1403b7940
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
int32_t zmm8[0x4]
int32_t zmm9[0x4]
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
        
        uint64_t r9 = zx.q(arg4 << 5)
        zmm8 = *(&data_14427edf0 + r9)
        zmm9 = *(r9 + 0x14427ee00)
        zmm10 = data_14427ede0
        int32_t temp0_66[0x4]
        int32_t i_1
        
        do
            zmm0 = *arg1
            zmm4 = *(arg1 + arg2)
            zmm1 = *r10
            zmm2 = _mm_unpackhi_epi8(zmm0, 0)
            int32_t temp0_49[0x4] = _mm_unpackhi_epi8(zmm4, 0)
            zmm0 = _mm_unpacklo_epi8(zmm0, 0)
            int32_t temp0_51[0x4] = _mm_unpacklo_epi8(zmm4, 0)
            zmm2 = _mm_mullo_epi16(zmm2, zmm8)
            int32_t temp0_53[0x4] = _mm_mullo_epi16(temp0_49, zmm9)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm0 = _mm_mullo_epi16(zmm0, zmm8)
            int32_t temp0_56[0x4] = _mm_mullo_epi16(temp0_51, zmm9)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_add_epi16(zmm2, temp0_53)
            zmm0 = _mm_add_epi16(zmm0, temp0_56)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            uint8_t temp0_63[0x10] =
                __pavgb_xmmdq_memdq(_mm_packus_epi16(_mm_srai_epi16(zmm0, 4), zmm2), *rax)
            zmm2 = _mm_unpackhi_epi8(temp0_63, 0)
            zmm0 = _mm_unpacklo_epi8(temp0_63, 0)
            temp0_66 = _mm_unpackhi_epi8(zmm1, 0)
            int32_t temp0_67[0x4] = _mm_unpacklo_epi8(zmm1, 0)
            zmm2 = _mm_sub_epi16(zmm2, temp0_66)
            zmm0 = _mm_sub_epi16(zmm0, temp0_67)
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
        int64_t temp0_76 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        temp0_66[0].q = zmm7 u>> 0x40
        int32_t temp0_77[0x4] = _mm_unpacklo_epi16(zmm6, temp0_76)
        int32_t temp0_78[0x4] = _mm_unpackhi_epi16(zmm6, temp0_76)
        int32_t temp0_79[0x4] = _mm_add_epi32(zmm7, temp0_66)
        int32_t temp0_80[0x4] = _mm_add_epi32(temp0_78, temp0_77)
        zmm3 = _mm_shuffle_epi32(temp0_79, 1)
        temp0_77[0].q = temp0_80 u>> 0x40
        int32_t temp0_82[0x4] = _mm_add_epi32(temp0_79, zmm3)
        int32_t temp0_83[0x4] = _mm_add_epi32(temp0_80, temp0_77)
        zmm4 = _mm_shuffle_epi32(temp0_83, 1)
        *arg10 = temp0_82[0]
        return zx.q(_mm_add_epi32(temp0_83, zmm4)[0])
    
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
            int32_t temp0_112[0x4]
            int32_t i_3
            
            do
                zmm1 = *r10
                zmm4 = _mm_avg_epu8(*rcx, *(rcx + 1))
                temp0_112 = _mm_unpackhi_epi8(zmm1, 0)
                uint8_t temp0_113[0x10] = _mm_avg_epu8(zmm0, zmm4)
                int32_t temp0_114[0x4] = _mm_unpacklo_epi8(zmm1, 0)
                uint8_t temp0_115[0x10] = __pavgb_xmmdq_memdq(temp0_113, *rax)
                zmm2 = _mm_unpackhi_epi8(temp0_115, 0)
                zmm0 = _mm_unpacklo_epi8(temp0_115, 0)
                zmm2 = _mm_sub_epi16(zmm2, temp0_112)
                zmm0 = _mm_sub_epi16(zmm0, temp0_114)
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
            int64_t temp0_126 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            temp0_112[0].q = zmm7 u>> 0x40
            int32_t temp0_127[0x4] = _mm_unpacklo_epi16(zmm6, temp0_126)
            int32_t temp0_128[0x4] = _mm_unpackhi_epi16(zmm6, temp0_126)
            int32_t temp0_129[0x4] = _mm_add_epi32(zmm7, temp0_112)
            int32_t temp0_130[0x4] = _mm_add_epi32(temp0_128, temp0_127)
            zmm3 = _mm_shuffle_epi32(temp0_129, 1)
            temp0_127[0].q = temp0_130 u>> 0x40
            int32_t temp0_132[0x4] = _mm_add_epi32(temp0_129, zmm3)
            int32_t temp0_133[0x4] = _mm_add_epi32(temp0_130, temp0_127)
            zmm4 = _mm_shuffle_epi32(temp0_133, 1)
            *arg10 = temp0_132[0]
            return zx.q(_mm_add_epi32(temp0_133, zmm4)[0])
        
        uint64_t r9_1 = zx.q(arg4 << 5)
        zmm8 = *(&data_14427edf0 + r9_1)
        zmm9 = *(r9_1 + 0x14427ee00)
        zmm10 = data_14427ede0
        void* rcx_1 = arg1 + arg2
        zmm0 = _mm_avg_epu8(*arg1, *(arg1 + 1))
        int32_t temp0_151[0x4]
        int32_t i_4
        
        do
            zmm1 = *r10
            zmm4 = _mm_avg_epu8(*rcx_1, *(rcx_1 + 1))
            zmm2 = _mm_unpackhi_epi8(zmm0, 0)
            int32_t temp0_139[0x4] = _mm_unpackhi_epi8(zmm4, 0)
            zmm2 = _mm_mullo_epi16(zmm2, zmm8)
            int32_t temp0_141[0x4] = _mm_mullo_epi16(temp0_139, zmm9)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm0 = _mm_unpacklo_epi8(zmm0, 0)
            zmm2 = _mm_add_epi16(zmm2, temp0_141)
            int32_t temp0_145[0x4] = _mm_unpacklo_epi8(zmm4, 0)
            zmm0 = _mm_mullo_epi16(zmm0, zmm8)
            int32_t temp0_147[0x4] = _mm_mullo_epi16(temp0_145, zmm9)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_srai_epi16(zmm2, 4)
            zmm0 = _mm_add_epi16(zmm0, temp0_147)
            temp0_151 = _mm_unpackhi_epi8(zmm1, 0)
            uint8_t temp0_154[0x10] =
                __pavgb_xmmdq_memdq(_mm_packus_epi16(_mm_srai_epi16(zmm0, 4), zmm2), *rax)
            zmm2 = _mm_unpackhi_epi8(temp0_154, 0)
            zmm0 = _mm_unpacklo_epi8(temp0_154, 0)
            int32_t temp0_157[0x4] = _mm_unpacklo_epi8(zmm1, 0)
            zmm2 = _mm_sub_epi16(zmm2, temp0_151)
            zmm0 = _mm_sub_epi16(zmm0, temp0_157)
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
        int64_t temp0_166 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        temp0_151[0].q = zmm7 u>> 0x40
        int32_t temp0_167[0x4] = _mm_unpacklo_epi16(zmm6, temp0_166)
        int32_t temp0_168[0x4] = _mm_unpackhi_epi16(zmm6, temp0_166)
        int32_t temp0_169[0x4] = _mm_add_epi32(zmm7, temp0_151)
        int32_t temp0_170[0x4] = _mm_add_epi32(temp0_168, temp0_167)
        zmm3 = _mm_shuffle_epi32(temp0_169, 1)
        temp0_167[0].q = temp0_170 u>> 0x40
        int32_t temp0_172[0x4] = _mm_add_epi32(temp0_169, zmm3)
        int32_t temp0_173[0x4] = _mm_add_epi32(temp0_170, temp0_167)
        zmm4 = _mm_shuffle_epi32(temp0_173, 1)
        *arg10 = temp0_172[0]
        return zx.q(_mm_add_epi32(temp0_173, zmm4)[0])
    
    int32_t temp0_87[0x4]
    int32_t i_5
    
    do
        zmm1 = *r10
        uint8_t temp0_86[0x10] = _mm_avg_epu8(*arg1, *(arg1 + 1))
        temp0_87 = _mm_unpackhi_epi8(zmm1, 0)
        uint8_t temp0_88[0x10] = __pavgb_xmmdq_memdq(temp0_86, *rax)
        int32_t temp0_89[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_unpackhi_epi8(temp0_88, 0)
        zmm0 = _mm_unpacklo_epi8(temp0_88, 0)
        zmm2 = _mm_sub_epi16(zmm2, temp0_87)
        zmm0 = _mm_sub_epi16(zmm0, temp0_89)
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
    int64_t temp0_100 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_87[0].q = zmm7 u>> 0x40
    int32_t temp0_101[0x4] = _mm_unpacklo_epi16(zmm6, temp0_100)
    int32_t temp0_102[0x4] = _mm_unpackhi_epi16(zmm6, temp0_100)
    int32_t temp0_103[0x4] = _mm_add_epi32(zmm7, temp0_87)
    int32_t temp0_104[0x4] = _mm_add_epi32(temp0_102, temp0_101)
    zmm3 = _mm_shuffle_epi32(temp0_103, 1)
    temp0_101[0].q = temp0_104 u>> 0x40
    int32_t temp0_106[0x4] = _mm_add_epi32(temp0_103, zmm3)
    int32_t temp0_107[0x4] = _mm_add_epi32(temp0_104, temp0_101)
    zmm4 = _mm_shuffle_epi32(temp0_107, 1)
    *arg10 = temp0_106[0]
    return zx.q(_mm_add_epi32(temp0_107, zmm4)[0])

if (arg4 == 0)
    uint64_t r8 = zx.q(arg3 << 5)
    zmm8 = *(&data_14427edf0 + r8)
    zmm9 = *(r8 + 0x14427ee00)
    zmm10 = data_14427ede0
    int32_t temp0_194[0x4]
    int32_t i_6
    
    do
        zmm0 = *arg1
        zmm4 = *(arg1 + 1)
        zmm1 = *r10
        zmm2 = _mm_unpackhi_epi8(zmm0, 0)
        int32_t temp0_177[0x4] = _mm_unpackhi_epi8(zmm4, 0)
        zmm0 = _mm_unpacklo_epi8(zmm0, 0)
        int32_t temp0_179[0x4] = _mm_unpacklo_epi8(zmm4, 0)
        zmm2 = _mm_mullo_epi16(zmm2, zmm8)
        int32_t temp0_181[0x4] = _mm_mullo_epi16(temp0_177, zmm9)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm0 = _mm_mullo_epi16(zmm0, zmm8)
        int32_t temp0_184[0x4] = _mm_mullo_epi16(temp0_179, zmm9)
        zmm0 = _mm_add_epi16(zmm0, zmm10)
        zmm2 = _mm_add_epi16(zmm2, temp0_181)
        zmm0 = _mm_add_epi16(zmm0, temp0_184)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        uint8_t temp0_191[0x10] =
            __pavgb_xmmdq_memdq(_mm_packus_epi16(_mm_srai_epi16(zmm0, 4), zmm2), *rax)
        zmm2 = _mm_unpackhi_epi8(temp0_191, 0)
        zmm0 = _mm_unpacklo_epi8(temp0_191, 0)
        temp0_194 = _mm_unpackhi_epi8(zmm1, 0)
        int32_t temp0_195[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        zmm2 = _mm_sub_epi16(zmm2, temp0_194)
        zmm0 = _mm_sub_epi16(zmm0, temp0_195)
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
    int64_t temp0_204 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_194[0].q = zmm7 u>> 0x40
    int32_t temp0_205[0x4] = _mm_unpacklo_epi16(zmm6, temp0_204)
    int32_t temp0_206[0x4] = _mm_unpackhi_epi16(zmm6, temp0_204)
    int32_t temp0_207[0x4] = _mm_add_epi32(zmm7, temp0_194)
    int32_t temp0_208[0x4] = _mm_add_epi32(temp0_206, temp0_205)
    zmm3 = _mm_shuffle_epi32(temp0_207, 1)
    temp0_205[0].q = temp0_208 u>> 0x40
    int32_t temp0_210[0x4] = _mm_add_epi32(temp0_207, zmm3)
    int32_t temp0_211[0x4] = _mm_add_epi32(temp0_208, temp0_205)
    zmm4 = _mm_shuffle_epi32(temp0_211, 1)
    *arg10 = temp0_210[0]
    return zx.q(_mm_add_epi32(temp0_211, zmm4)[0])

if (arg4 == 4)
    uint64_t r8_1 = zx.q(arg3 << 5)
    zmm8 = *(&data_14427edf0 + r8_1)
    zmm9 = *(r8_1 + 0x14427ee00)
    zmm10 = data_14427ede0
    zmm0 = *arg1
    zmm1 = *(arg1 + 1)
    zmm2 = _mm_unpackhi_epi8(zmm0, 0)
    int32_t temp0_215[0x4] = _mm_unpackhi_epi8(zmm1, 0)
    zmm0 = _mm_unpacklo_epi8(zmm0, 0)
    int32_t temp0_217[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    zmm0 = _mm_mullo_epi16(zmm0, zmm8)
    int32_t temp0_219[0x4] = _mm_mullo_epi16(temp0_217, zmm9)
    zmm0 = _mm_add_epi16(zmm0, zmm10)
    zmm2 = _mm_mullo_epi16(zmm2, zmm8)
    int32_t temp0_222[0x4] = _mm_mullo_epi16(temp0_215, zmm9)
    zmm2 = _mm_add_epi16(zmm2, zmm10)
    zmm0 = _mm_add_epi16(zmm0, temp0_219)
    zmm2 = _mm_add_epi16(zmm2, temp0_222)
    void* rcx_2 = arg1 + arg2
    zmm0 = _mm_packus_epi16(_mm_srai_epi16(zmm0, 4), _mm_srai_epi16(zmm2, 4))
    int32_t temp0_243[0x4]
    int32_t i_7
    
    do
        zmm4 = *rcx_2
        zmm3 = *(rcx_2 + 1)
        zmm2 = _mm_unpackhi_epi8(zmm4, 0)
        int32_t temp0_230[0x4] = _mm_unpackhi_epi8(zmm3, 0)
        int32_t temp0_231[0x4] = _mm_unpacklo_epi8(zmm4, 0)
        int32_t temp0_232[0x4] = _mm_unpacklo_epi8(zmm3, 0)
        int32_t temp0_233[0x4] = _mm_mullo_epi16(temp0_231, zmm8)
        int32_t temp0_234[0x4] = _mm_mullo_epi16(temp0_232, zmm9)
        zmm4 = _mm_add_epi16(temp0_233, zmm10)
        zmm2 = _mm_mullo_epi16(zmm2, zmm8)
        int32_t temp0_237[0x4] = _mm_mullo_epi16(temp0_230, zmm9)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm4 = _mm_add_epi16(zmm4, temp0_234)
        zmm2 = _mm_add_epi16(zmm2, temp0_237)
        zmm1 = *r10
        zmm4 = _mm_srai_epi16(zmm4, 4)
        zmm2 = _mm_srai_epi16(zmm2, 4)
        temp0_243 = _mm_unpackhi_epi8(zmm1, 0)
        zmm4 = _mm_packus_epi16(zmm4, zmm2)
        int32_t temp0_245[0x4] = _mm_unpacklo_epi8(zmm1, 0)
        uint8_t temp0_247[0x10] = __pavgb_xmmdq_memdq(_mm_avg_epu8(zmm0, zmm4), *rax)
        zmm2 = _mm_unpackhi_epi8(temp0_247, 0)
        zmm0 = _mm_unpacklo_epi8(temp0_247, 0)
        zmm2 = _mm_sub_epi16(zmm2, temp0_243)
        zmm0 = _mm_sub_epi16(zmm0, temp0_245)
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
    int64_t temp0_258 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    temp0_243[0].q = zmm7 u>> 0x40
    int32_t temp0_259[0x4] = _mm_unpacklo_epi16(zmm6, temp0_258)
    int32_t temp0_260[0x4] = _mm_unpackhi_epi16(zmm6, temp0_258)
    int32_t temp0_261[0x4] = _mm_add_epi32(zmm7, temp0_243)
    int32_t temp0_262[0x4] = _mm_add_epi32(temp0_260, temp0_259)
    zmm3 = _mm_shuffle_epi32(temp0_261, 1)
    temp0_259[0].q = temp0_262 u>> 0x40
    int32_t temp0_264[0x4] = _mm_add_epi32(temp0_261, zmm3)
    int32_t temp0_265[0x4] = _mm_add_epi32(temp0_262, temp0_259)
    zmm4 = _mm_shuffle_epi32(temp0_265, 1)
    *arg10 = temp0_264[0]
    return zx.q(_mm_add_epi32(temp0_265, zmm4)[0])

uint64_t r8_2 = zx.q(arg3 << 5)
uint64_t r9_2 = zx.q(arg4 << 5)
zmm8 = *(&data_14427edf0 + r8_2)
zmm9 = *(r8_2 + 0x14427ee00)
zmm10 = *(&data_14427edf0 + r9_2)
int32_t zmm11[0x4] = *(r9_2 + 0x14427ee00)
int16_t zmm12[0x8] = data_14427ede0
zmm0 = *arg1
zmm1 = *(arg1 + 1)
zmm2 = _mm_unpackhi_epi8(zmm0, 0)
int32_t temp0_269[0x4] = _mm_unpackhi_epi8(zmm1, 0)
zmm0 = _mm_unpacklo_epi8(zmm0, 0)
int32_t temp0_271[0x4] = _mm_unpacklo_epi8(zmm1, 0)
zmm0 = _mm_mullo_epi16(zmm0, zmm8)
int32_t temp0_273[0x4] = _mm_mullo_epi16(temp0_271, zmm9)
zmm0 = _mm_add_epi16(zmm0, zmm12)
zmm2 = _mm_mullo_epi16(zmm2, zmm8)
int32_t temp0_276[0x4] = _mm_mullo_epi16(temp0_269, zmm9)
zmm2 = _mm_add_epi16(zmm2, zmm12)
zmm0 = _mm_add_epi16(zmm0, temp0_273)
zmm2 = _mm_add_epi16(zmm2, temp0_276)
void* rcx_3 = arg1 + arg2
zmm0 = _mm_packus_epi16(_mm_srai_epi16(zmm0, 4), _mm_srai_epi16(zmm2, 4))
int32_t temp0_309[0x4]
int32_t i_8

do
    zmm3 = *rcx_3
    zmm4 = *(rcx_3 + 1)
    int32_t temp0_283[0x4] = _mm_unpackhi_epi8(zmm3, 0)
    zmm2 = _mm_unpackhi_epi8(zmm4, 0)
    int32_t temp0_285[0x4] = _mm_unpacklo_epi8(zmm3, 0)
    int32_t temp0_286[0x4] = _mm_unpacklo_epi8(zmm4, 0)
    int32_t temp0_287[0x4] = _mm_mullo_epi16(temp0_285, zmm8)
    int32_t temp0_288[0x4] = _mm_mullo_epi16(temp0_286, zmm9)
    zmm3 = _mm_add_epi16(temp0_287, zmm12)
    int32_t temp0_290[0x4] = _mm_mullo_epi16(temp0_283, zmm8)
    zmm2 = _mm_mullo_epi16(zmm2, zmm9)
    zmm1 = _mm_add_epi16(temp0_290, zmm12)
    zmm3 = _mm_add_epi16(zmm3, temp0_288)
    zmm1 = _mm_add_epi16(zmm1, zmm2)
    zmm3 = _mm_srai_epi16(zmm3, 4)
    zmm1 = _mm_srai_epi16(zmm1, 4)
    zmm4 = _mm_packus_epi16(zmm3, zmm1)
    zmm2 = _mm_unpackhi_epi8(zmm0, 0)
    zmm0 = _mm_unpacklo_epi8(zmm0, 0)
    zmm2 = _mm_mullo_epi16(zmm2, zmm10)
    int32_t temp0_301[0x4] = _mm_mullo_epi16(zmm1, zmm11)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm0 = _mm_mullo_epi16(zmm0, zmm10)
    int32_t temp0_304[0x4] = _mm_mullo_epi16(zmm3, zmm11)
    zmm2 = _mm_add_epi16(zmm2, temp0_301)
    zmm1 = *r10
    zmm0 = _mm_add_epi16(zmm0, zmm12)
    zmm2 = _mm_srai_epi16(zmm2, 4)
    zmm0 = _mm_add_epi16(zmm0, temp0_304)
    temp0_309 = _mm_unpackhi_epi8(zmm1, 0)
    zmm0 = _mm_srai_epi16(zmm0, 4)
    int32_t temp0_311[0x4] = _mm_unpacklo_epi8(zmm1, 0)
    uint8_t temp0_313[0x10] = __pavgb_xmmdq_memdq(_mm_packus_epi16(zmm0, zmm2), *rax)
    zmm2 = _mm_unpackhi_epi8(temp0_313, 0)
    zmm0 = _mm_unpacklo_epi8(temp0_313, 0)
    zmm2 = _mm_sub_epi16(zmm2, temp0_309)
    zmm0 = _mm_sub_epi16(zmm0, temp0_311)
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
int64_t temp0_324 = _mm_cmpgt_epi16(zx.o(0), zmm6)
temp0_309[0].q = zmm7 u>> 0x40
int32_t temp0_325[0x4] = _mm_unpacklo_epi16(zmm6, temp0_324)
int32_t temp0_326[0x4] = _mm_unpackhi_epi16(zmm6, temp0_324)
int32_t temp0_327[0x4] = _mm_add_epi32(zmm7, temp0_309)
int32_t temp0_328[0x4] = _mm_add_epi32(temp0_326, temp0_325)
zmm3 = _mm_shuffle_epi32(temp0_327, 1)
temp0_325[0].q = temp0_328 u>> 0x40
int32_t temp0_330[0x4] = _mm_add_epi32(temp0_327, zmm3)
int32_t temp0_331[0x4] = _mm_add_epi32(temp0_328, temp0_325)
zmm4 = _mm_shuffle_epi32(temp0_331, 1)
*arg10 = temp0_330[0]
return zx.q(_mm_add_epi32(temp0_331, zmm4)[0])
