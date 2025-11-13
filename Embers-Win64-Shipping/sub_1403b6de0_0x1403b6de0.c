// 函数: sub_1403b6de0
// 地址: 0x1403b6de0
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
int32_t zmm8[0x4]
int32_t zmm9[0x4]
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
            zmm4 = _mm_unpacklo_epi8(zmm4, 0)
            zmm0 = _mm_mullo_epi16(zmm0, zmm8)
            zmm1 = _mm_mullo_epi16(zmm2, zmm9)
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_mullo_epi16(zmm2, zmm8)
            zmm4 = _mm_mullo_epi16(zmm4, zmm9)
            zmm0 = _mm_add_epi16(zmm0, zmm1)
            zmm2 = _mm_add_epi16(zmm2, zmm10)
            zmm1 = zx.o(*r10)
            zmm2 = _mm_add_epi16(zmm2, zmm4)
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
            i_1 = i_9
            i_9 -= 1
        while (i_1 s> 1)
        int64_t temp0_75 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        zmm3.q = zmm7 u>> 0x40
        zmm4 = _mm_unpacklo_epi16(zmm6, temp0_75)
        int32_t temp0_77[0x4] = _mm_unpackhi_epi16(zmm6, temp0_75)
        int32_t temp0_78[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_79[0x4] = _mm_add_epi32(temp0_77, zmm4)
        zmm4.q = temp0_79 u>> 0x40
        int32_t temp0_81[0x4] = _mm_add_epi32(temp0_78, _mm_shuffle_epi32(temp0_78, 1))
        int32_t temp0_82[0x4] = _mm_add_epi32(temp0_79, zmm4)
        zmm4 = _mm_shuffle_epi32(temp0_82, 1)
        *arg10 = temp0_81[0]
        return zx.q(_mm_add_epi32(temp0_82, zmm4)[0])
    
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
            int64_t temp0_125 = _mm_cmpgt_epi16(zx.o(0), zmm6)
            zmm3.q = zmm7 u>> 0x40
            zmm4 = _mm_unpacklo_epi16(zmm6, temp0_125)
            int32_t temp0_127[0x4] = _mm_unpackhi_epi16(zmm6, temp0_125)
            int32_t temp0_128[0x4] = _mm_add_epi32(zmm7, zmm3)
            int32_t temp0_129[0x4] = _mm_add_epi32(temp0_127, zmm4)
            zmm4.q = temp0_129 u>> 0x40
            int32_t temp0_131[0x4] = _mm_add_epi32(temp0_128, _mm_shuffle_epi32(temp0_128, 1))
            int32_t temp0_132[0x4] = _mm_add_epi32(temp0_129, zmm4)
            zmm4 = _mm_shuffle_epi32(temp0_132, 1)
            *arg10 = temp0_131[0]
            return zx.q(_mm_add_epi32(temp0_132, zmm4)[0])
        
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
            zmm4 = _mm_unpacklo_epi8(zmm4, 0)
            zmm0 = _mm_mullo_epi16(zmm0, zmm8)
            zmm1 = _mm_mullo_epi16(zmm2, zmm9)
            zmm3 = _mm_unpacklo_epi8(zmm3, 0)
            zmm0 = _mm_add_epi16(zmm0, zmm10)
            zmm2 = _mm_mullo_epi16(zmm2, zmm8)
            zmm0 = _mm_add_epi16(zmm0, zmm1)
            zmm1 = _mm_mullo_epi16(zmm4, zmm9)
            zmm2 = _mm_add_epi16(_mm_add_epi16(zmm2, zmm10), zmm1)
            zmm1 = zx.o(*r10)
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
        int64_t temp0_165 = _mm_cmpgt_epi16(zx.o(0), zmm6)
        zmm3.q = zmm7 u>> 0x40
        zmm4 = _mm_unpacklo_epi16(zmm6, temp0_165)
        int32_t temp0_167[0x4] = _mm_unpackhi_epi16(zmm6, temp0_165)
        int32_t temp0_168[0x4] = _mm_add_epi32(zmm7, zmm3)
        int32_t temp0_169[0x4] = _mm_add_epi32(temp0_167, zmm4)
        zmm4.q = temp0_169 u>> 0x40
        int32_t temp0_171[0x4] = _mm_add_epi32(temp0_168, _mm_shuffle_epi32(temp0_168, 1))
        int32_t temp0_172[0x4] = _mm_add_epi32(temp0_169, zmm4)
        zmm4 = _mm_shuffle_epi32(temp0_172, 1)
        *arg10 = temp0_171[0]
        return zx.q(_mm_add_epi32(temp0_172, zmm4)[0])
    
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
    int64_t temp0_99 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    zmm4 = _mm_unpacklo_epi16(zmm6, temp0_99)
    int32_t temp0_101[0x4] = _mm_unpackhi_epi16(zmm6, temp0_99)
    int32_t temp0_102[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_103[0x4] = _mm_add_epi32(temp0_101, zmm4)
    zmm4.q = temp0_103 u>> 0x40
    int32_t temp0_105[0x4] = _mm_add_epi32(temp0_102, _mm_shuffle_epi32(temp0_102, 1))
    int32_t temp0_106[0x4] = _mm_add_epi32(temp0_103, zmm4)
    zmm4 = _mm_shuffle_epi32(temp0_106, 1)
    *arg10 = temp0_105[0]
    return zx.q(_mm_add_epi32(temp0_106, zmm4)[0])

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
        zmm4 = _mm_unpacklo_epi8(zmm4, 0)
        zmm0 = _mm_mullo_epi16(zmm0, zmm8)
        zmm1 = _mm_mullo_epi16(zmm1, zmm9)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm0 = _mm_add_epi16(zmm0, zmm10)
        zmm2 = _mm_mullo_epi16(zmm2, zmm8)
        zmm4 = _mm_mullo_epi16(zmm4, zmm9)
        zmm0 = _mm_add_epi16(zmm0, zmm1)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm1 = zx.o(*r10)
        zmm2 = _mm_add_epi16(zmm2, zmm4)
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
    int64_t temp0_203 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    zmm4 = _mm_unpacklo_epi16(zmm6, temp0_203)
    int32_t temp0_205[0x4] = _mm_unpackhi_epi16(zmm6, temp0_203)
    int32_t temp0_206[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_207[0x4] = _mm_add_epi32(temp0_205, zmm4)
    zmm4.q = temp0_207 u>> 0x40
    int32_t temp0_209[0x4] = _mm_add_epi32(temp0_206, _mm_shuffle_epi32(temp0_206, 1))
    int32_t temp0_210[0x4] = _mm_add_epi32(temp0_207, zmm4)
    zmm4 = _mm_shuffle_epi32(temp0_210, 1)
    *arg10 = temp0_209[0]
    return zx.q(_mm_add_epi32(temp0_210, zmm4)[0])

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
        zmm4 = _mm_unpacklo_epi8(zmm4, 0)
        zmm3 = _mm_unpacklo_epi8(zmm3, 0)
        zmm2 = _mm_mullo_epi16(zmm2, zmm8)
        zmm1 = _mm_mullo_epi16(zmm1, zmm9)
        zmm2 = _mm_add_epi16(zmm2, zmm10)
        zmm4 = _mm_mullo_epi16(zmm4, zmm8)
        zmm3 = _mm_mullo_epi16(zmm3, zmm9)
        zmm4 = _mm_add_epi16(zmm4, zmm10)
        zmm2 = _mm_add_epi16(zmm2, zmm1)
        zmm1 = zx.o(*r10)
        zmm4 = _mm_add_epi16(zmm4, zmm3)
        zmm3 = zx.o(*(r10 + arg6))
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
    int64_t temp0_250 = _mm_cmpgt_epi16(zx.o(0), zmm6)
    zmm3.q = zmm7 u>> 0x40
    zmm4 = _mm_unpacklo_epi16(zmm6, temp0_250)
    int32_t temp0_252[0x4] = _mm_unpackhi_epi16(zmm6, temp0_250)
    int32_t temp0_253[0x4] = _mm_add_epi32(zmm7, zmm3)
    int32_t temp0_254[0x4] = _mm_add_epi32(temp0_252, zmm4)
    zmm4.q = temp0_254 u>> 0x40
    int32_t temp0_256[0x4] = _mm_add_epi32(temp0_253, _mm_shuffle_epi32(temp0_253, 1))
    int32_t temp0_257[0x4] = _mm_add_epi32(temp0_254, zmm4)
    zmm4 = _mm_shuffle_epi32(temp0_257, 1)
    *arg10 = temp0_256[0]
    return zx.q(_mm_add_epi32(temp0_257, zmm4)[0])

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
    zmm4 = _mm_unpacklo_epi8(zmm4, 0)
    zmm3 = _mm_unpacklo_epi8(zmm3, 0)
    zmm2 = _mm_mullo_epi16(zmm2, zmm8)
    zmm1 = _mm_mullo_epi16(zmm1, zmm9)
    zmm2 = _mm_add_epi16(zmm2, zmm12)
    zmm4 = _mm_mullo_epi16(zmm4, zmm8)
    zmm3 = _mm_mullo_epi16(zmm3, zmm9)
    zmm4 = _mm_add_epi16(zmm4, zmm12)
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
int64_t temp0_305 = _mm_cmpgt_epi16(zx.o(0), zmm6)
zmm3.q = zmm7 u>> 0x40
zmm4 = _mm_unpacklo_epi16(zmm6, temp0_305)
int32_t temp0_307[0x4] = _mm_unpackhi_epi16(zmm6, temp0_305)
int32_t temp0_308[0x4] = _mm_add_epi32(zmm7, zmm3)
int32_t temp0_309[0x4] = _mm_add_epi32(temp0_307, zmm4)
zmm4.q = temp0_309 u>> 0x40
int32_t temp0_311[0x4] = _mm_add_epi32(temp0_308, _mm_shuffle_epi32(temp0_308, 1))
int32_t temp0_312[0x4] = _mm_add_epi32(temp0_309, zmm4)
zmm4 = _mm_shuffle_epi32(temp0_312, 1)
*arg10 = temp0_311[0]
return zx.q(_mm_add_epi32(temp0_312, zmm4)[0])
