// 函数: sub_142a06cb0
// 地址: 0x142a06cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = arg5[0].o
int128_t var_28 = arg6[0].o
int128_t var_68 = arg7[0].o
int128_t var_78 = arg8[0].o
int128_t var_88 = arg9[0].o
int16_t zmm9[0x10]
zmm9[0].o = zx.o(0)
int32_t zmm10[0x8] = zmm9
uint8_t zmm8[0x20] = zmm9
uint8_t zmm0[0x20]
uint8_t zmm1[0x20]
uint8_t zmm2[0x20]
uint8_t zmm3[0x20]
int16_t zmm4[0x10]

if (arg3 != 0)
    int16_t zmm5[0x10]
    
    if (arg3 != 8)
        int64_t rax_14 = sx.q(arg3 << 5)
        
        if (arg4 != 0)
            zmm5 = *arg1
            uint8_t temp0_110[0x20] = __vpunpckhbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1))
            
            if (arg4 != 8)
                arg7 = *(rax_14 + &data_143600720)
                arg6 = data_143600920
                zmm1 = _mm256_maddubs_epi16(temp0_110, arg7)
                uint8_t temp0_142[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1))
                int16_t temp0_144[0x10] = _mm256_srai_epi16(_mm256_add_epi16(zmm1, arg6), 4)
                zmm2 = _mm256_add_epi16(_mm256_maddubs_epi16(temp0_142, arg7), arg6)
                arg8 = *(sx.q(arg4 << 5) + &data_143600720)
                arg9 = _mm256_packus_epi16(_mm256_srai_epi16(zmm2, 4), temp0_144)
                
                if (arg12 s> 0)
                    uint64_t i_16 = zx.q(arg12)
                    uint8_t (* rax_21)[0x20] = arg10
                    uint64_t i
                    
                    do
                        arg5 = *rax_21
                        arg1 += sx.q(arg2)
                        rax_21 = &(*rax_21)[sx.q(arg11)]
                        zmm5 = *arg1
                        zmm1 = _mm256_maddubs_epi16(
                            __vpunpckhbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1)), arg7)
                        uint8_t temp0_151[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1))
                        zmm2 = _mm256_add_epi16(zmm1, arg6)
                        zmm1 = _mm256_maddubs_epi16(temp0_151, arg7)
                        int16_t temp0_154[0x10] = _mm256_srai_epi16(zmm2, 4)
                        zmm5 = _mm256_packus_epi16(
                            _mm256_srai_epi16(_mm256_add_epi16(zmm1, arg6), 4), temp0_154)
                        zmm2 = _mm256_add_epi16(
                            _mm256_maddubs_epi16(_mm256_unpacklo_epi8(arg9, zmm5), arg8), arg6)
                        zmm1 = _mm256_maddubs_epi16(_mm256_unpackhi_epi8(arg9, zmm5), arg8)
                        int16_t temp0_163[0x10] = _mm256_srai_epi16(zmm2, 4)
                        zmm2 = _mm256_add_epi16(zmm1, arg6)
                        uint8_t temp0_165[0x20] = _mm256_unpacklo_epi8(arg5, zmm8)
                        zmm2 = _mm256_sub_epi16(_mm256_srai_epi16(zmm2, 4), 
                            _mm256_unpackhi_epi8(arg5, zmm8))
                        arg9 = zmm5
                        int16_t temp0_169[0x10] = _mm256_sub_epi16(temp0_163, temp0_165)
                        zmm9 = _mm256_add_epi16(_mm256_add_epi16(temp0_169, zmm9), zmm2)
                        zmm10 = _mm256_add_epi32(
                            _mm256_add_epi32(_mm256_madd_epi16(temp0_169, temp0_169), zmm10), 
                            _mm256_madd_epi16(zmm2, zmm2))
                        i = i_16
                        i_16 -= 1
                    while (i != 1)
            else
                arg6 = *(rax_14 + &data_143600720)
                arg7 = data_143600920
                zmm1 = _mm256_maddubs_epi16(temp0_110, arg6)
                uint8_t temp0_112[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1))
                int16_t temp0_114[0x10] = _mm256_srai_epi16(_mm256_add_epi16(zmm1, arg7), 4)
                arg8 = _mm256_packus_epi16(
                    _mm256_srai_epi16(
                        _mm256_add_epi16(_mm256_maddubs_epi16(temp0_112, arg6), arg7), 4), 
                    temp0_114)
                
                if (arg12 s> 0)
                    uint64_t i_15 = zx.q(arg12)
                    uint8_t (* rax_18)[0x20] = arg10
                    uint64_t i_1
                    
                    do
                        arg5 = *rax_18
                        arg1 += sx.q(arg2)
                        rax_18 = &(*rax_18)[sx.q(arg11)]
                        zmm5 = *arg1
                        zmm1 = _mm256_maddubs_epi16(
                            __vpunpckhbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1)), arg6)
                        uint8_t temp0_121[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1))
                        int16_t temp0_123[0x10] = _mm256_srai_epi16(_mm256_add_epi16(zmm1, arg7), 4)
                        zmm5 = _mm256_packus_epi16(
                            _mm256_srai_epi16(
                                _mm256_add_epi16(_mm256_maddubs_epi16(temp0_121, arg6), arg7), 4), 
                            temp0_123)
                        uint8_t temp0_128[0x20] = _mm256_avg_epu8(arg8, zmm5)
                        int16_t temp0_131[0x10] = _mm256_sub_epi16(
                            _mm256_unpacklo_epi8(temp0_128, zmm8), _mm256_unpacklo_epi8(arg5, zmm8))
                        uint8_t temp0_132[0x20] = _mm256_unpackhi_epi8(arg5, zmm8)
                        zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_128, zmm8), temp0_132)
                        zmm1 = _mm256_add_epi16(temp0_131, zmm9)
                        zmm0 = _mm256_madd_epi16(temp0_131, temp0_131)
                        zmm9 = _mm256_add_epi16(zmm1, zmm3)
                        zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), 
                            _mm256_madd_epi16(zmm3, zmm3))
                        arg8 = zmm5
                        i_1 = i_15
                        i_15 -= 1
                    while (i_1 != 1)
        else
            arg7 = *(rax_14 + &data_143600720)
            arg8 = data_143600920
            
            if (arg12 s> 0)
                uint64_t i_14 = zx.q(arg12)
                uint8_t (* rax_16)[0x20] = arg10
                uint64_t i_2
                
                do
                    arg5 = *arg1
                    uint8_t temp0_92[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(arg5, *(arg1 + 1))
                    arg6 = *rax_16
                    zmm2 = _mm256_add_epi16(_mm256_maddubs_epi16(temp0_92, arg7), arg8)
                    uint8_t temp0_95[0x20] = __vpunpckhbw_ymmqq_ymmqq_memqq(arg5, *(arg1 + 1))
                    int16_t temp0_98[0x10] = _mm256_sub_epi16(_mm256_srai_epi16(zmm2, 4), 
                        _mm256_unpacklo_epi8(arg6, zmm8))
                    int16_t temp0_103[0x10] = _mm256_sub_epi16(
                        _mm256_srai_epi16(
                            _mm256_add_epi16(_mm256_maddubs_epi16(temp0_95, arg7), arg8), 4), 
                        _mm256_unpackhi_epi8(arg6, zmm8))
                    zmm9 = _mm256_add_epi16(_mm256_add_epi16(temp0_98, zmm9), temp0_103)
                    arg1 += sx.q(arg2)
                    rax_16 = &(*rax_16)[sx.q(arg11)]
                    zmm10 = _mm256_add_epi32(
                        _mm256_add_epi32(_mm256_madd_epi16(temp0_98, temp0_98), zmm10), 
                        _mm256_madd_epi16(temp0_103, temp0_103))
                    i_2 = i_14
                    i_14 -= 1
                while (i_2 != 1)
    else if (arg4 != 0)
        zmm1 = *arg1
        
        if (arg4 != 8)
            arg8 = data_143600920
            arg6 = __vpavgb_ymmqq_ymmqq_memqq(zmm1, *(arg1 + 1))
            arg7 = *(sx.q(arg4 << 5) + &data_143600720)
            
            if (arg12 s> 0)
                uint64_t i_13 = zx.q(arg12)
                uint8_t (* rax_13)[0x20] = arg10
                uint64_t i_3
                
                do
                    arg5 = *rax_13
                    zmm4 = arg6
                    arg1 += sx.q(arg2)
                    rax_13 = &(*rax_13)[sx.q(arg11)]
                    arg6 = __vpavgb_ymmqq_ymmqq_memqq(*arg1, *(arg1 + 1))
                    zmm3 = _mm256_srai_epi16(
                        _mm256_add_epi16(
                            _mm256_maddubs_epi16(_mm256_unpacklo_epi8(zmm4, arg6), arg7), arg8), 
                        4)
                    uint8_t temp0_78[0x20] = _mm256_unpackhi_epi8(zmm4, arg6)
                    int16_t temp0_80[0x10] =
                        _mm256_sub_epi16(zmm3, _mm256_unpacklo_epi8(arg5, zmm8))
                    int16_t temp0_85[0x10] = _mm256_sub_epi16(
                        _mm256_srai_epi16(
                            _mm256_add_epi16(_mm256_maddubs_epi16(temp0_78, arg7), arg8), 4), 
                        _mm256_unpackhi_epi8(arg5, zmm8))
                    zmm1 = _mm256_add_epi16(temp0_80, zmm9)
                    zmm0 = _mm256_madd_epi16(temp0_80, temp0_80)
                    zmm9 = _mm256_add_epi16(zmm1, temp0_85)
                    zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), 
                        _mm256_madd_epi16(temp0_85, temp0_85))
                    i_3 = i_13
                    i_13 -= 1
                while (i_3 != 1)
        else
            zmm5 = __vpavgb_ymmqq_ymmqq_memqq(zmm1, *(arg1 + 1))
            
            if (arg12 s> 0)
                uint64_t i_12 = zx.q(arg12)
                uint8_t (* rax_10)[0x20] = arg10
                uint64_t i_4
                
                do
                    zmm3 = *rax_10
                    arg1 += sx.q(arg2)
                    rax_10 = &(*rax_10)[sx.q(arg11)]
                    uint8_t temp0_58[0x20] = _mm256_unpacklo_epi8(zmm3, zmm8)
                    zmm2 = zmm5
                    zmm5 = __vpavgb_ymmqq_ymmqq_memqq(*arg1, *(arg1 + 1))
                    uint8_t temp0_60[0x20] = _mm256_avg_epu8(zmm2, zmm5)
                    int16_t temp0_62[0x10] =
                        _mm256_sub_epi16(_mm256_unpacklo_epi8(temp0_60, zmm8), temp0_58)
                    uint8_t temp0_63[0x20] = _mm256_unpackhi_epi8(zmm3, zmm8)
                    zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_60, zmm8), temp0_63)
                    zmm1 = _mm256_add_epi16(temp0_62, zmm9)
                    zmm0 = _mm256_madd_epi16(temp0_62, temp0_62)
                    zmm9 = _mm256_add_epi16(zmm1, zmm3)
                    zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), 
                        _mm256_madd_epi16(zmm3, zmm3))
                    i_4 = i_12
                    i_12 -= 1
                while (i_4 != 1)
    else if (arg12 s> 0)
        uint64_t i_11 = zx.q(arg12)
        uint8_t (* rax_8)[0x20] = arg10
        uint64_t i_5
        
        do
            uint8_t temp0_44[0x20] = __vpavgb_ymmqq_ymmqq_memqq(*arg1, *(arg1 + 1))
            zmm2 = *rax_8
            uint8_t temp0_45[0x20] = _mm256_unpacklo_epi8(zmm2, zmm8)
            int16_t temp0_47[0x10] =
                _mm256_sub_epi16(_mm256_unpacklo_epi8(temp0_44, zmm8), temp0_45)
            zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_44, zmm8), 
                _mm256_unpackhi_epi8(zmm2, zmm8))
            zmm1 = _mm256_add_epi16(temp0_47, zmm9)
            zmm0 = _mm256_madd_epi16(temp0_47, temp0_47)
            zmm9 = _mm256_add_epi16(zmm1, zmm3)
            arg1 += sx.q(arg2)
            rax_8 = &(*rax_8)[sx.q(arg11)]
            zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), _mm256_madd_epi16(zmm3, zmm3))
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
else if (arg4 != 0)
    if (arg4 != 8)
        arg8 = data_143600920
        arg7 = *(sx.q(arg4 << 5) + &data_143600720)
        
        if (arg12 s> 0)
            uint64_t i_10 = zx.q(arg12)
            uint8_t (* rax_6)[0x20] = arg10
            uint64_t i_6
            
            do
                arg5 = *arg1
                arg6 = *rax_6
                arg1 += sx.q(arg2)
                rax_6 = &(*rax_6)[sx.q(arg11)]
                zmm2 = _mm256_add_epi16(
                    _mm256_maddubs_epi16(__vpunpcklbw_ymmqq_ymmqq_memqq(arg5, *arg1), arg7), arg8)
                uint8_t temp0_29[0x20] = __vpunpckhbw_ymmqq_ymmqq_memqq(arg5, *arg1)
                int16_t temp0_32[0x10] =
                    _mm256_sub_epi16(_mm256_srai_epi16(zmm2, 4), _mm256_unpacklo_epi8(arg6, zmm8))
                int16_t temp0_37[0x10] = _mm256_sub_epi16(
                    _mm256_srai_epi16(_mm256_add_epi16(_mm256_maddubs_epi16(temp0_29, arg7), arg8), 
                        4), 
                    _mm256_unpackhi_epi8(arg6, zmm8))
                zmm9 = _mm256_add_epi16(_mm256_add_epi16(temp0_32, zmm9), temp0_37)
                zmm10 = _mm256_add_epi32(
                    _mm256_add_epi32(_mm256_madd_epi16(temp0_32, temp0_32), zmm10), 
                    _mm256_madd_epi16(temp0_37, temp0_37))
                i_6 = i_10
                i_10 -= 1
            while (i_6 != 1)
    else if (arg12 s> 0)
        uint64_t i_17 = zx.q(arg12)
        int64_t r9_1 = sx.q(arg2)
        uint8_t (* rdx)[0x20] = arg10
        uint64_t i_7
        
        do
            uint8_t temp0_13[0x20] = __vpavgb_ymmqq_ymmqq_memqq(*arg1, *(r9_1 + arg1))
            zmm2 = *rdx
            uint8_t temp0_14[0x20] = _mm256_unpacklo_epi8(zmm2, zmm8)
            int16_t temp0_16[0x10] =
                _mm256_sub_epi16(_mm256_unpacklo_epi8(temp0_13, zmm8), temp0_14)
            rdx = &(*rdx)[sx.q(arg11)]
            arg1 += r9_1
            zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_13, zmm8), 
                _mm256_unpackhi_epi8(zmm2, zmm8))
            zmm1 = _mm256_add_epi16(temp0_16, zmm9)
            zmm0 = _mm256_madd_epi16(temp0_16, temp0_16)
            zmm9 = _mm256_add_epi16(zmm1, zmm3)
            zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), _mm256_madd_epi16(zmm3, zmm3))
            i_7 = i_17
            i_17 -= 1
        while (i_7 != 1)
else if (arg12 s> 0)
    uint64_t i_9 = zx.q(arg12)
    int256_t* rax_1 = arg10
    uint64_t i_8
    
    do
        zmm3 = *arg1
        zmm2 = *rax_1
        uint8_t temp0_1[0x20] = _mm256_unpacklo_epi8(zmm2, zmm8)
        int16_t temp0_3[0x10] = _mm256_sub_epi16(_mm256_unpacklo_epi8(zmm3, zmm8), temp0_1)
        zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(zmm3, zmm8), _mm256_unpackhi_epi8(zmm2, zmm8))
        zmm1 = _mm256_add_epi16(temp0_3, zmm9)
        zmm0 = _mm256_madd_epi16(temp0_3, temp0_3)
        zmm9 = _mm256_add_epi16(zmm1, zmm3)
        arg1 += sx.q(arg2)
        rax_1 += sx.q(arg11)
        zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), _mm256_madd_epi16(zmm3, zmm3))
        i_8 = i_9
        i_9 -= 1
    while (i_8 != 1)

zmm2 = _mm256_cmpgt_epi16(zmm8, zmm9)
zmm1 = _mm256_unpacklo_epi16(zmm9, zmm2)
zmm4 = _mm256_add_epi32(_mm256_srli_si256(zmm10, 8), zmm10)
zmm3 = _mm256_add_epi32(_mm256_unpackhi_epi16(zmm9, zmm2), zmm1)
zmm1 = _mm256_srli_si256(zmm4, 4)
zmm2 = _mm256_add_epi32(zmm1, zmm4)
zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm0 = _mm256_srli_si256(zmm3, 8)
int32_t rax_22 = zmm2[0].d
zmm4 = _mm256_add_epi32(zmm0, zmm3)
int32_t rcx_1 = zmm1[0].d + rax_22
zmm2 = _mm256_add_epi32(_mm256_srli_si256(zmm4, 4), zmm4)
zmm1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
*arg13 = rcx_1
uint64_t result = zx.q(zmm1[0].d + zmm2[0].d)
_mm256_zeroupper()
arg5[0].o = var_18
arg6[0].o = var_28
arg7[0].o = var_68
arg8[0].o = var_78
arg9[0].o = var_88
return result
