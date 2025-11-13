// 函数: sub_142a06430
// 地址: 0x142a06430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = arg5[0].o
int128_t var_28 = arg6[0].o
int128_t var_68 = arg7[0].o
int128_t var_78 = arg8[0].o
int128_t var_88 = arg9[0].o
int128_t var_98 = arg10[0].o
int16_t zmm9[0x10]
zmm9[0].o = zx.o(0)
int32_t zmm10[0x8] = zmm9
uint8_t zmm8[0x20] = zmm9
uint8_t zmm0[0x20]
uint8_t zmm1[0x20]
uint8_t zmm2[0x20]
uint8_t zmm3[0x20]
uint8_t zmm5[0x20]

if (arg3 != 0)
    if (arg3 != 8)
        int64_t rax_14 = sx.q(arg3 << 5)
        
        if (arg4 != 0)
            zmm5 = *arg1
            uint8_t temp0_126[0x20] = __vpunpckhbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1))
            arg7 = data_143600920
            
            if (arg4 != 8)
                arg8 = *(rax_14 + &data_143600720)
                zmm1 = _mm256_maddubs_epi16(temp0_126, arg8)
                uint8_t temp0_159[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1))
                int16_t temp0_161[0x10] = _mm256_srai_epi16(_mm256_add_epi16(zmm1, arg7), 4)
                zmm2 = _mm256_add_epi16(_mm256_maddubs_epi16(temp0_159, arg8), arg7)
                arg9 = *(sx.q(arg4 << 5) + &data_143600720)
                arg10 = _mm256_packus_epi16(_mm256_srai_epi16(zmm2, 4), temp0_161)
                
                if (arg15 s> 0)
                    uint64_t i_16 = zx.q(arg15)
                    uint8_t (* rax_21)[0x20] = arg13
                    uint8_t (* rdx_8)[0x20] = arg11
                    uint64_t i
                    
                    do
                        arg6 = *rdx_8
                        arg1 = &(*arg1)[sx.q(arg2)]
                        rdx_8 = &(*rdx_8)[sx.q(arg12)]
                        zmm5 = *arg1
                        zmm1 = _mm256_maddubs_epi16(
                            __vpunpckhbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1)), arg8)
                        uint8_t temp0_168[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1))
                        zmm2 = _mm256_add_epi16(zmm1, arg7)
                        zmm1 = _mm256_maddubs_epi16(temp0_168, arg8)
                        int16_t temp0_171[0x10] = _mm256_srai_epi16(zmm2, 4)
                        arg5 = _mm256_packus_epi16(
                            _mm256_srai_epi16(_mm256_add_epi16(zmm1, arg7), 4), temp0_171)
                        int16_t temp0_178[0x10] = _mm256_srai_epi16(
                            _mm256_add_epi16(
                                _mm256_maddubs_epi16(_mm256_unpackhi_epi8(arg10, arg5), arg9), 
                                arg7), 
                            4)
                        uint8_t temp0_184[0x20] = __vpavgb_ymmqq_ymmqq_memqq(
                            _mm256_packus_epi16(
                                _mm256_srai_epi16(
                                    _mm256_add_epi16(
                                        _mm256_maddubs_epi16(_mm256_unpacklo_epi8(arg10, arg5), 
                                            arg9), 
                                        arg7), 
                                    4), 
                                temp0_178), 
                            *rax_21)
                        uint8_t temp0_185[0x20] = _mm256_unpacklo_epi8(temp0_184, zmm8)
                        uint8_t temp0_186[0x20] = _mm256_unpackhi_epi8(temp0_184, zmm8)
                        int16_t temp0_188[0x10] =
                            _mm256_sub_epi16(temp0_185, _mm256_unpacklo_epi8(arg6, zmm8))
                        zmm2 = _mm256_sub_epi16(temp0_186, _mm256_unpackhi_epi8(arg6, zmm8))
                        zmm9 = _mm256_add_epi16(_mm256_add_epi16(temp0_188, zmm9), zmm2)
                        rax_21 = &(*rax_21)[sx.q(arg14)]
                        zmm10 = _mm256_add_epi32(
                            _mm256_add_epi32(_mm256_madd_epi16(temp0_188, temp0_188), zmm10), 
                            _mm256_madd_epi16(zmm2, zmm2))
                        arg10 = arg5
                        i = i_16
                        i_16 -= 1
                    while (i != 1)
            else
                arg6 = *(rax_14 + &data_143600720)
                zmm1 = _mm256_maddubs_epi16(temp0_126, arg6)
                uint8_t temp0_128[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1))
                int16_t temp0_130[0x10] = _mm256_srai_epi16(_mm256_add_epi16(zmm1, arg7), 4)
                arg8 = _mm256_packus_epi16(
                    _mm256_srai_epi16(
                        _mm256_add_epi16(_mm256_maddubs_epi16(temp0_128, arg6), arg7), 4), 
                    temp0_130)
                
                if (arg15 s> 0)
                    uint64_t i_15 = zx.q(arg15)
                    uint8_t (* rax_18)[0x20] = arg13
                    uint8_t (* rdx_7)[0x20] = arg11
                    uint64_t i_1
                    
                    do
                        arg5 = *rdx_7
                        arg1 = &(*arg1)[sx.q(arg2)]
                        rdx_7 = &(*rdx_7)[sx.q(arg12)]
                        zmm5 = *arg1
                        zmm1 = _mm256_maddubs_epi16(
                            __vpunpckhbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1)), arg6)
                        uint8_t temp0_137[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(zmm5, *(arg1 + 1))
                        zmm2 = _mm256_add_epi16(zmm1, arg7)
                        zmm1 = _mm256_maddubs_epi16(temp0_137, arg6)
                        int16_t temp0_140[0x10] = _mm256_srai_epi16(zmm2, 4)
                        uint8_t temp0_143[0x20] = _mm256_packus_epi16(
                            _mm256_srai_epi16(_mm256_add_epi16(zmm1, arg7), 4), temp0_140)
                        uint8_t temp0_145[0x20] =
                            __vpavgb_ymmqq_ymmqq_memqq(_mm256_avg_epu8(arg8, temp0_143), *rax_18)
                        int16_t temp0_148[0x10] = _mm256_sub_epi16(
                            _mm256_unpacklo_epi8(temp0_145, zmm8), _mm256_unpacklo_epi8(arg5, zmm8))
                        uint8_t temp0_149[0x20] = _mm256_unpackhi_epi8(arg5, zmm8)
                        zmm2 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_145, zmm8), temp0_149)
                        zmm9 = _mm256_add_epi16(_mm256_add_epi16(temp0_148, zmm9), zmm2)
                        rax_18 = &(*rax_18)[sx.q(arg14)]
                        zmm10 = _mm256_add_epi32(
                            _mm256_add_epi32(_mm256_madd_epi16(temp0_148, temp0_148), zmm10), 
                            _mm256_madd_epi16(zmm2, zmm2))
                        arg8 = temp0_143
                        i_1 = i_15
                        i_15 -= 1
                    while (i_1 != 1)
        else
            arg7 = *(rax_14 + &data_143600720)
            arg8 = data_143600920
            
            if (arg15 s> 0)
                uint64_t i_14 = zx.q(arg15)
                uint8_t (* rax_16)[0x20] = arg13
                uint8_t (* rdx_6)[0x20] = arg11
                uint64_t i_2
                
                do
                    arg5 = *arg1
                    uint8_t temp0_104[0x20] = __vpunpckhbw_ymmqq_ymmqq_memqq(arg5, *(arg1 + 1))
                    arg6 = *rdx_6
                    zmm1 = _mm256_maddubs_epi16(temp0_104, arg7)
                    uint8_t temp0_106[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(arg5, *(arg1 + 1))
                    zmm2 = _mm256_add_epi16(zmm1, arg8)
                    zmm1 = _mm256_maddubs_epi16(temp0_106, arg7)
                    int16_t temp0_109[0x10] = _mm256_srai_epi16(zmm2, 4)
                    uint8_t temp0_113[0x20] = __vpavgb_ymmqq_ymmqq_memqq(
                        _mm256_packus_epi16(_mm256_srai_epi16(_mm256_add_epi16(zmm1, arg8), 4), 
                            temp0_109), 
                        *rax_16)
                    int16_t temp0_116[0x10] = _mm256_sub_epi16(
                        _mm256_unpacklo_epi8(temp0_113, zmm8), _mm256_unpacklo_epi8(arg6, zmm8))
                    zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_113, zmm8), 
                        _mm256_unpackhi_epi8(arg6, zmm8))
                    zmm1 = _mm256_add_epi16(temp0_116, zmm9)
                    zmm0 = _mm256_madd_epi16(temp0_116, temp0_116)
                    zmm9 = _mm256_add_epi16(zmm1, zmm3)
                    rax_16 = &(*rax_16)[sx.q(arg14)]
                    arg1 = &(*arg1)[sx.q(arg2)]
                    rdx_6 = &(*rdx_6)[sx.q(arg12)]
                    zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), 
                        _mm256_madd_epi16(zmm3, zmm3))
                    i_2 = i_14
                    i_14 -= 1
                while (i_2 != 1)
    else if (arg4 != 0)
        zmm1 = *arg1
        
        if (arg4 != 8)
            arg8 = data_143600920
            arg6 = __vpavgb_ymmqq_ymmqq_memqq(zmm1, *(arg1 + 1))
            arg7 = *(sx.q(arg4 << 5) + &data_143600720)
            
            if (arg15 s> 0)
                uint64_t i_13 = zx.q(arg15)
                uint8_t (* rax_13)[0x20] = arg13
                uint8_t (* rdx_5)[0x20] = arg11
                uint64_t i_3
                
                do
                    arg5 = *rdx_5
                    zmm3 = arg6
                    arg1 = &(*arg1)[sx.q(arg2)]
                    rdx_5 = &(*rdx_5)[sx.q(arg12)]
                    arg6 = __vpavgb_ymmqq_ymmqq_memqq(*arg1, *(arg1 + 1))
                    int16_t temp0_85[0x10] = _mm256_srai_epi16(
                        _mm256_add_epi16(
                            _mm256_maddubs_epi16(_mm256_unpackhi_epi8(zmm3, arg6), arg7), arg8), 
                        4)
                    uint8_t temp0_91[0x20] = __vpavgb_ymmqq_ymmqq_memqq(
                        _mm256_packus_epi16(
                            _mm256_srai_epi16(
                                _mm256_add_epi16(
                                    _mm256_maddubs_epi16(_mm256_unpacklo_epi8(zmm3, arg6), arg7), 
                                    arg8), 
                                4), 
                            temp0_85), 
                        *rax_13)
                    int16_t temp0_94[0x10] = _mm256_sub_epi16(_mm256_unpacklo_epi8(temp0_91, zmm8), 
                        _mm256_unpacklo_epi8(arg5, zmm8))
                    uint8_t temp0_95[0x20] = _mm256_unpackhi_epi8(arg5, zmm8)
                    zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_91, zmm8), temp0_95)
                    zmm1 = _mm256_add_epi16(temp0_94, zmm9)
                    zmm0 = _mm256_madd_epi16(temp0_94, temp0_94)
                    zmm9 = _mm256_add_epi16(zmm1, zmm3)
                    rax_13 = &(*rax_13)[sx.q(arg14)]
                    zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), 
                        _mm256_madd_epi16(zmm3, zmm3))
                    i_3 = i_13
                    i_13 -= 1
                while (i_3 != 1)
        else
            zmm5 = __vpavgb_ymmqq_ymmqq_memqq(zmm1, *(arg1 + 1))
            
            if (arg15 s> 0)
                uint64_t i_12 = zx.q(arg15)
                uint8_t (* rax_10)[0x20] = arg13
                uint8_t (* rdx_4)[0x20] = arg11
                uint64_t i_4
                
                do
                    zmm3 = *rdx_4
                    arg1 = &(*arg1)[sx.q(arg2)]
                    rdx_4 = &(*rdx_4)[sx.q(arg12)]
                    zmm2 = zmm5
                    zmm5 = __vpavgb_ymmqq_ymmqq_memqq(*arg1, *(arg1 + 1))
                    uint8_t temp0_67[0x20] =
                        __vpavgb_ymmqq_ymmqq_memqq(_mm256_avg_epu8(zmm2, zmm5), *rax_10)
                    int16_t temp0_70[0x10] = _mm256_sub_epi16(_mm256_unpacklo_epi8(temp0_67, zmm8), 
                        _mm256_unpacklo_epi8(zmm3, zmm8))
                    uint8_t temp0_71[0x20] = _mm256_unpackhi_epi8(zmm3, zmm8)
                    zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_67, zmm8), temp0_71)
                    zmm1 = _mm256_add_epi16(temp0_70, zmm9)
                    zmm0 = _mm256_madd_epi16(temp0_70, temp0_70)
                    zmm9 = _mm256_add_epi16(zmm1, zmm3)
                    rax_10 = &(*rax_10)[sx.q(arg14)]
                    zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), 
                        _mm256_madd_epi16(zmm3, zmm3))
                    i_4 = i_12
                    i_12 -= 1
                while (i_4 != 1)
    else if (arg15 s> 0)
        uint64_t i_11 = zx.q(arg15)
        uint8_t (* rax_8)[0x20] = arg13
        uint8_t (* rdx_3)[0x20] = arg11
        uint64_t i_5
        
        do
            zmm5 = *rdx_3
            uint8_t temp0_51[0x20] =
                __vpavgb_ymmqq_ymmqq_memqq(__vpavgb_ymmqq_ymmqq_memqq(*arg1, *(arg1 + 1)), *rax_8)
            int16_t temp0_54[0x10] = _mm256_sub_epi16(_mm256_unpacklo_epi8(temp0_51, zmm8), 
                _mm256_unpacklo_epi8(zmm5, zmm8))
            zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_51, zmm8), 
                _mm256_unpackhi_epi8(zmm5, zmm8))
            zmm1 = _mm256_add_epi16(temp0_54, zmm9)
            zmm0 = _mm256_madd_epi16(temp0_54, temp0_54)
            zmm9 = _mm256_add_epi16(zmm1, zmm3)
            rax_8 = &(*rax_8)[sx.q(arg14)]
            arg1 = &(*arg1)[sx.q(arg2)]
            rdx_3 = &(*rdx_3)[sx.q(arg12)]
            zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), _mm256_madd_epi16(zmm3, zmm3))
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
else if (arg4 != 0)
    if (arg4 != 8)
        arg8 = data_143600920
        arg7 = *(sx.q(arg4 << 5) + &data_143600720)
        
        if (arg15 s> 0)
            uint64_t i_10 = zx.q(arg15)
            uint8_t (* rax_6)[0x20] = arg13
            int256_t* rdx_2 = arg11
            uint64_t i_6
            
            do
                arg5 = *arg1
                arg6 = *rdx_2
                arg1 = &(*arg1)[sx.q(arg2)]
                rdx_2 += sx.q(arg12)
                zmm1 = _mm256_maddubs_epi16(__vpunpckhbw_ymmqq_ymmqq_memqq(arg5, *arg1), arg7)
                uint8_t temp0_30[0x20] = __vpunpcklbw_ymmqq_ymmqq_memqq(arg5, *arg1)
                zmm2 = _mm256_add_epi16(zmm1, arg8)
                zmm1 = _mm256_maddubs_epi16(temp0_30, arg7)
                int16_t temp0_33[0x10] = _mm256_srai_epi16(zmm2, 4)
                uint8_t temp0_37[0x20] = __vpavgb_ymmqq_ymmqq_memqq(
                    _mm256_packus_epi16(_mm256_srai_epi16(_mm256_add_epi16(zmm1, arg8), 4), 
                        temp0_33), 
                    *rax_6)
                int16_t temp0_40[0x10] = _mm256_sub_epi16(_mm256_unpacklo_epi8(temp0_37, zmm8), 
                    _mm256_unpacklo_epi8(arg6, zmm8))
                zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_37, zmm8), 
                    _mm256_unpackhi_epi8(arg6, zmm8))
                zmm1 = _mm256_add_epi16(temp0_40, zmm9)
                zmm0 = _mm256_madd_epi16(temp0_40, temp0_40)
                zmm9 = _mm256_add_epi16(zmm1, zmm3)
                rax_6 = &(*rax_6)[sx.q(arg14)]
                zmm10 =
                    _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), _mm256_madd_epi16(zmm3, zmm3))
                i_6 = i_10
                i_10 -= 1
            while (i_6 != 1)
    else if (arg15 s> 0)
        uint64_t i_17 = zx.q(arg15)
        int256_t* r8 = arg11
        int64_t r10_2 = sx.q(arg2)
        uint8_t (* rdx_1)[0x20] = arg13
        uint64_t i_7
        
        do
            zmm5 = *r8
            uint8_t temp0_15[0x20] = __vpavgb_ymmqq_ymmqq_memqq(
                __vpavgb_ymmqq_ymmqq_memqq(*arg1, *(r10_2 + arg1)), *rdx_1)
            rdx_1 = &(*rdx_1)[sx.q(arg14)]
            int16_t temp0_18[0x10] = _mm256_sub_epi16(_mm256_unpacklo_epi8(temp0_15, zmm8), 
                _mm256_unpacklo_epi8(zmm5, zmm8))
            zmm3 = _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_15, zmm8), 
                _mm256_unpackhi_epi8(zmm5, zmm8))
            zmm1 = _mm256_add_epi16(temp0_18, zmm9)
            zmm0 = _mm256_madd_epi16(temp0_18, temp0_18)
            zmm9 = _mm256_add_epi16(zmm1, zmm3)
            r8 += sx.q(arg12)
            arg1 = &(*arg1)[r10_2]
            zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), _mm256_madd_epi16(zmm3, zmm3))
            i_7 = i_17
            i_17 -= 1
        while (i_7 != 1)
else if (arg15 s> 0)
    uint64_t i_9 = zx.q(arg15)
    int256_t* rax_1 = arg13
    int256_t* rdx = arg11
    uint64_t i_8
    
    do
        uint8_t temp0_1[0x20] = __vpavgb_ymmqq_ymmqq_memqq(*rax_1, *arg1)
        zmm2 = *rdx
        uint8_t temp0_2[0x20] = _mm256_unpacklo_epi8(zmm2, zmm8)
        int16_t temp0_4[0x10] = _mm256_sub_epi16(_mm256_unpacklo_epi8(temp0_1, zmm8), temp0_2)
        zmm3 =
            _mm256_sub_epi16(_mm256_unpackhi_epi8(temp0_1, zmm8), _mm256_unpackhi_epi8(zmm2, zmm8))
        zmm1 = _mm256_add_epi16(temp0_4, zmm9)
        zmm0 = _mm256_madd_epi16(temp0_4, temp0_4)
        zmm9 = _mm256_add_epi16(zmm1, zmm3)
        rax_1 += sx.q(arg14)
        arg1 = &(*arg1)[sx.q(arg2)]
        rdx += sx.q(arg12)
        zmm10 = _mm256_add_epi32(_mm256_add_epi32(zmm0, zmm10), _mm256_madd_epi16(zmm3, zmm3))
        i_8 = i_9
        i_9 -= 1
    while (i_8 != 1)
zmm2 = _mm256_cmpgt_epi16(zmm8, zmm9)
zmm1 = _mm256_unpacklo_epi16(zmm9, zmm2)
int16_t zmm4[0x10] = _mm256_add_epi32(_mm256_srli_si256(zmm10, 8), zmm10)
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
*arg16 = rcx_1
uint64_t result = zx.q(zmm1[0].d + zmm2[0].d)
_mm256_zeroupper()
arg5[0].o = var_18
arg6[0].o = var_28
arg7[0].o = var_68
arg8[0].o = var_78
arg9[0].o = var_88
arg10[0].o = var_98
return result
