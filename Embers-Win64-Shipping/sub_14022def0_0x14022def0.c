// 函数: sub_14022def0
// 地址: 0x14022def0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg12
uint128_t zmm14
uint128_t var_68 = zmm14
float var_78[0x4] = arg11
float zmm12[0x4]
float var_88[0x4] = zmm12
int32_t var_98[0x4] = arg10
float zmm10[0x4]
float var_a8[0x4] = zmm10
float var_b8[0x4] = arg9
uint128_t var_c8 = arg8
float var_d8[0x4] = arg7
int32_t var_e8[0x4] = arg6
uint128_t zmm2 = arg15
int32_t i_5 = ((arg17 s>> 0x1f u>> 0x1e) + arg17) & 0xfffffffc
int64_t result
uint64_t r15
uint128_t zmm0
float zmm1[0x4]
float zmm3[0x4]
int32_t zmm4[0x4]

if (i_5 s<= 0)
    r15 = 0
    result = zx.q(arg17)
    
    if (0 s< result.d)
    label_140232d5e:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15.d), 0), data_142e11d00)
        arg10 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & arg10
        int64_t rax_221 = sx.q(zmm0.d)
        int64_t rbp_30 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rdi_27 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rcx_86 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm10 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg2 + rax_221)), *(arg2 + rbp_30), 1), 
                *(arg2 + rdi_27), 2), 
            *(arg2 + rcx_86), 3)
        zmm0 = data_142fc95e0 & arg10
        int32_t* rax_222 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rcx_87 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rdx = zx.q(_mm_extract_epi32(zmm0, 3))
        int32_t temp0_1068[0x4] = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(zx.q(zmm0.d) + arg2 + rax_221)), 
                    *(rax_222 + arg2 + rbp_30), 1), 
                *(rcx_87 + arg2 + rdi_27), 2), 
            *(rdx + arg2 + rcx_86), 3)
        zmm1 =
            _mm_mullo_epi32(_mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0), temp0_1068) & arg10
        float rax_223 = zmm1[0]
        int64_t rcx_89 = sx.q(_mm_extract_epi32(zmm1, 1))
        int64_t rdx_2 = sx.q(_mm_extract_epi32(zmm1, 2))
        int32_t temp0_1074 = _mm_extract_epi32(zmm1, 3)
        zmm0 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + sx.q(rax_223))), *(arg3 + rcx_89), 1), 
                *(arg3 + rdx_2), 2), 
            *(arg3 + sx.q(temp0_1074)), 3)
        arg11 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(arg11, arg11), zmm0)
        arg9 = arg11 & not.o(arg10)
        char rcx_93
        
        if (_mm_movemask_ps(arg9) == 0)
            rcx_93 = _mm_movemask_ps(arg11 & arg10)
            
            if (rcx_93 != 0)
            label_140233207:
                char temp1_1 = rcx_93 & 1
                
                if (temp1_1 != 0)
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                    
                    if (temp1_1 != 0)
                        goto label_140233259
                else if (temp1_1 != 0)
                label_140233259:
                    arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                    
                    if (temp1_1 != 0)
                        goto label_140233217
                    
                    goto label_140233261
                
                bool cond:16_1
                bool cond:17_1
                bool cond:21_1
                bool cond:22_1
                
                if (temp1_1 != 0)
                label_140233217:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                    char temp4_1 = rcx_93 & 2
                    cond:16_1 = temp4_1 == 0
                    cond:17_1 = temp4_1 != 0
                    cond:21_1 = temp4_1 == 0
                    cond:22_1 = temp4_1 != 0
                    
                    if (temp4_1 != 0)
                        goto label_140233266
                    
                    goto label_140233222
                
            label_140233261:
                char temp3_1 = rcx_93 & 2
                cond:16_1 = temp3_1 == 0
                cond:17_1 = temp3_1 != 0
                cond:21_1 = temp3_1 == 0
                cond:22_1 = temp3_1 != 0
                
                if (temp3_1 == 0)
                label_140233222:
                    
                    if (not(cond:16_1))
                    label_140233224:
                        arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                        
                        if (cond:22_1)
                            goto label_140233271
                        
                        goto label_14023322c
                else
                label_140233266:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                    
                    if (cond:17_1)
                        goto label_140233224
                
                bool cond:26_1
                bool cond:27_1
                bool cond:37_1
                bool cond:38_1
                
                if (not(cond:21_1))
                label_140233271:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                    char temp8_1 = rcx_93 & 4
                    cond:26_1 = temp8_1 == 0
                    cond:27_1 = temp8_1 != 0
                    cond:37_1 = temp8_1 == 0
                    cond:38_1 = temp8_1 != 0
                    
                    if (temp8_1 != 0)
                        goto label_140233231
                    
                    goto label_14023327c
                
            label_14023322c:
                char temp7_1 = rcx_93 & 4
                cond:26_1 = temp7_1 == 0
                cond:27_1 = temp7_1 != 0
                cond:37_1 = temp7_1 == 0
                cond:38_1 = temp7_1 != 0
                
                if (temp7_1 == 0)
                label_14023327c:
                    
                    if (not(cond:26_1))
                    label_14023327e:
                        arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                        
                        if (cond:38_1)
                            goto label_14023323c
                        
                        goto label_140233286
                else
                label_140233231:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                    
                    if (cond:27_1)
                        goto label_14023327e
                
                bool cond:53_1
                bool cond:54_1
                bool cond:62_1
                bool cond:63_1
                
                if (not(cond:37_1))
                label_14023323c:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                    char temp16_1 = rcx_93 & 8
                    cond:53_1 = temp16_1 == 0
                    cond:54_1 = temp16_1 != 0
                    cond:62_1 = temp16_1 == 0
                    cond:63_1 = temp16_1 == 0
                    
                    if (temp16_1 != 0)
                        goto label_14023328b
                    
                    goto label_140233247
                
            label_140233286:
                char temp15_1 = rcx_93 & 8
                cond:53_1 = temp15_1 == 0
                cond:54_1 = temp15_1 != 0
                cond:62_1 = temp15_1 == 0
                cond:63_1 = temp15_1 == 0
                
                if (temp15_1 != 0)
                label_14023328b:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                    
                    if (cond:54_1)
                        goto label_140233249
                    
                    goto label_140233294
                
            label_140233247:
                
                if (cond:53_1)
                label_140233294:
                    
                    if (not(cond:62_1))
                        arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                else
                label_140233249:
                    arg5 = _mm_blend_ps(arg5, zx.o(0), 8)
                    
                    if (not(cond:63_1))
                        arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
        else
            float var_428_3[0x4] = arg11
            int32_t var_458_4[0x4] = arg10
            arg11 = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm2 = _mm_add_epi64(4, zx.o(arg13))
            arg7 = _mm_srai_epi32(_mm_slli_epi32(arg9, 0x1f), 0x1f)
            zmm3 = arg7 & zmm0
            int64_t rax_228 = sx.q(zmm3[0])
            int64_t rcx_91 = sx.q(_mm_extract_epi32(zmm3, 1))
            int64_t rdx_4 = sx.q(_mm_extract_epi32(zmm3, 2))
            int64_t rbp_33 = sx.q(_mm_extract_epi32(zmm3, 3))
            zmm14 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg13 + rax_228)), *(arg13 + rcx_91), 1), 
                    *(arg13 + rdx_4), 2), 
                *(arg13 + rbp_33), 3)
            arg6 = _mm_srli_epi32(zmm14, 0x1c)
            zmm3 = _mm_slli_epi32(arg6, 2) & arg7
            uint64_t rax_229 = zx.q(zmm3[0])
            uint64_t rcx_92 = zx.q(_mm_extract_epi32(zmm3, 1))
            uint64_t rdx_5 = zx.q(_mm_extract_epi32(zmm3, 2))
            uint64_t rbp_34 = zx.q(_mm_extract_epi32(zmm3, 3))
            zmm3 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(rax_229 + &data_143442c70)), 
                        *(rcx_92 + &data_143442c70), 1), 
                    *(rdx_5 + &data_143442c70), 2), 
                *(rbp_34 + &data_143442c70), 3)
            arg5 = _mm_srli_epi32(zmm14, 0x18)
            uint128_t var_4e8_2 = arg5
            arg5 = (_mm_slli_epi32(arg6, 3) | (data_143442c00 & arg5)) & arg7
            uint64_t rdx_6 = zx.q(_mm_extract_epi32(arg5, 1))
            uint64_t rbp_35 = zx.q(_mm_extract_epi32(arg5, 2))
            uint64_t rbx_15 = zx.q(_mm_extract_epi32(arg5, 3))
            zmm4 = _mm_cvtepu8_epi32(__pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(
                    __pinsrb_xmmdq_memb_immb(zx.o(*(zx.q(arg5.d) + &data_143442c90)), 
                        *(rdx_6 + &data_143442c90), 1), 
                    *(rbp_35 + &data_143442c90), 2), 
                *(rbx_15 + &data_143442c90), 3)[0])
            int32_t var_508_3[0x4] = arg6
            int32_t temp0_1108[0x4] = _mm_cmpeq_epi32(data_142fc95c0, arg6)
            arg5 = _mm_srai_epi32(_mm_slli_epi32(temp0_1108 & not.o(arg9), 0x1f), 0x1f)
            zmm12 = zx.o(0)
            
            if (_mm_movemask_ps(arg5) != 0)
                zmm12 = arg5 & zmm4
            
            arg8 = _mm_cvtepi32_epi64(zmm0.q)
            arg12 = _mm_cvtepi32_epi64(arg11[0].q)
            arg11 = _mm_shuffle_epi32(zmm2, 0x44)
            arg6 = data_143442be0 & zmm14
            float var_498_3[0x4] = arg7
            zmm1 = data_142fc95e0 & arg7
            zmm0 = _mm_srai_epi32(_mm_slli_epi32(arg9 & temp0_1108, 0x1f), 0x1f)
            char temp0_1117 = _mm_movemask_ps(zmm0)
            zmm2 = data_142d3f5b0
            uint128_t var_4c8_2 = zmm0
            arg5 = _mm_blendv_ps(zmm12, zmm2, zmm0)
            zmm0 = zx.o(0)
            
            if (temp0_1117 != 0)
                zmm4 &= var_4c8_2
                zmm0 = zmm4
                zmm12 = arg5
            
            uint128_t var_4f8_4 = _mm_madd_epi16(zmm0, zmm1)
            zmm12 = _mm_mullo_epi32(zmm12, zmm3 & arg7)
            uint128_t var_598_5 = _mm_add_epi64(arg11, arg12)
            arg11 = _mm_add_epi64(arg11, arg8)
            uint128_t var_5b8_1 = arg9
            zmm0 = _mm_cmpgt_epi32(arg6, zmm2) & arg9
            uint128_t var_588_1 = zmm14
            float var_5d8_1[0x4] = arg11
            uint128_t var_568_1 = zmm12
            arg7 = temp0_1108
            uint128_t var_4b8_3 = arg12
            uint128_t var_478_2 = arg8
            uint128_t var_4a8_2
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm0, 0x1f)) == 0)
                zmm1 = zx.o(0)
                var_4a8_2 = zx.o(0)
                zmm14 = var_5b8_1
                arg9 = zx.o(0)
            else
                arg10 = zx.o(0)
                arg11 = _mm_cmpeq_epi32(data_143442c30 & zmm14, zx.o(0))
                arg9 = _mm_slli_epi32(zmm0 & arg11, 0x1f)
                
                if (_mm_movemask_ps(arg9) == 0)
                    zmm4 = zx.o(0)
                    arg5 = zx.o(0)
                    var_4a8_2 = zx.o(0)
                    arg9 = zx.o(0)
                    zmm2 = zx.o(arg15)
                else
                    zmm1 = zx.o(0)
                    zmm3 = zx.o(arg15)
                    zmm2 = zmm3
                    
                    if (0f >= zmm3[0])
                        arg10 = zx.o(0)
                        zmm4 = zx.o(0)
                        arg5 = zx.o(0)
                        var_4a8_2 = zx.o(0)
                    else
                        zmm3 = zmm2
                        zmm2 = _mm_add_epi32(_mm_cmpeq_epi32(zmm2, zmm2), arg6)
                        
                        if (zmm3[0] >= 1f)
                            arg10 = _mm_srai_epi32(arg9, 0x1f) & zmm2
                            zmm4 = arg10
                            arg5 = arg10
                            var_4a8_2 = arg10
                            zmm2 = zmm3
                        else
                            float temp0_1131[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                            zmm3 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_1131)
                            zmm4 = _mm_round_ps(zmm3, 9)
                            int32_t temp0_1136[0x4] = _mm_min_epi32(_mm_cvttps_epi32(zmm4), zmm2)
                            arg5 = _mm_srai_epi32(arg9, 0x1f)
                            arg10 = temp0_1136 & arg5
                            zmm1 = zx.o(0)
                            
                            if (arg16 != 1)
                                zmm3 = _mm_sub_ps(zmm3, zmm4)
                                zmm1 = zmm3
                            
                            arg5 &= _mm_min_epi32(
                                _mm_sub_epi32(arg10, _mm_cmpeq_epi32(zmm3, zmm3)), zmm2)
                            zmm4 = arg10
                            var_4a8_2 = arg5
                            zmm2 = zx.o(arg15)
                    
                    arg9 = _mm_srai_epi32(arg9, 0x1f) & zmm1
                
                arg11 = _mm_slli_epi32(arg11 & not.o(zmm0), 0x1f)
                zmm1 = _mm_srai_epi32(arg11, 0x1f)
                
                if (_mm_movemask_ps(zmm1) == 0)
                    arg11 = var_5d8_1
                    zmm1 = zmm4
                    zmm14 = var_5b8_1
                else
                    zmm14 = arg6
                    zmm0 = _mm_cmpeq_epi32(_mm_min_epu32(data_142d3f5b0, arg6), arg6)
                    int32_t rax_236
                    rax_236.b = zx.o(0).d f>= zmm2[0]
                    arg6 = _mm_shuffle_epi32(zx.o(neg.d(rax_236)), 0) | zmm0
                    zmm0 = arg6 & zmm1
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        zmm3 = arg15
                        zmm0 = var_4a8_2
                    else
                        arg10 = _mm_blendv_ps(arg10, zx.o(0), zmm0)
                        arg5 = _mm_blendv_ps(arg5, zx.o(0), zmm0)
                        zmm4 = arg10
                        zmm0 = arg5
                        zmm3 = arg15
                    
                    zmm12 = arg6 & not.o(zmm1)
                    uint32_t temp0_1166 = _mm_movemask_ps(zmm12)
                    zmm1 = zx.o(0)
                    
                    if (temp0_1166 == 0)
                        arg10 = zmm4
                        arg5 = zmm0
                        arg7 = temp0_1108
                        zmm14 = var_5b8_1
                    else
                        zmm4 = _mm_add_epi32(zmm14, _mm_cmpeq_epi32(zmm0, zmm0))
                        
                        if (zmm3[0] >= 1f)
                            zmm0 = zmm12
                            arg10 = _mm_blendv_ps(arg10, zmm4, zmm0)
                            arg5 = _mm_blendv_ps(arg5, zmm4, zmm0)
                            arg7 = temp0_1108
                            zmm14 = var_5b8_1
                        else
                            float var_578_3[0x4] = arg9
                            zmm1 = var_4f8_4
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                            arg7 = _mm_cvtepu32_epi64(zmm1[0].q)
                            int32_t var_558_3[0x4] = zmm4
                            zmm4 = _mm_cvtepu32_epi64(zmm0.q)
                            zmm0 = _mm_mullo_epi32(var_568_1, zmm14)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            int32_t temp0_1174[0x4] = __paddq_xmmdq_memdq(zmm4, var_598_5)
                            arg7 = __paddq_xmmdq_memdq(arg7, var_5d8_1)
                            zmm2 = data_143442a20
                            zmm1 = _mm_cvtepi32_epi64(zmm1[0].q)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            int32_t temp0_1179[0x4] =
                                _mm_add_epi64(_mm_add_epi64(temp0_1174, zmm2), zmm1)
                            arg7 = _mm_add_epi64(_mm_add_epi64(arg7, zmm2), zmm0)
                            zmm0 = data_143442c10
                            arg7 &= zmm0
                            int32_t var_548_4[0x4] = temp0_1179 & zmm0
                            zmm4 = var_558_3
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                            float temp0_1184[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm0)
                            zmm0.d = float.s(arg14 - 1)
                            zmm0.d = zmm0.d f* zmm3[0]
                            uint128_t var_4a8_3 = zmm0
                            zmm3 = zx.o(0)
                            zmm0 = _mm_min_epi32(zx.o(arg14 - 2), 
                                _mm_max_epi32(zx.o(int.d(zmm0.d)), zx.o(0)))
                            arg9 = _mm_min_epi32(
                                _mm_max_epi32(_mm_cvttps_epi32(temp0_1184), zx.o(0)), zmm4)
                            float var_5a8_2[0x4] = arg7
                            int32_t var_518_2[0x4] = arg6
                            uint128_t var_448_2 = arg5
                            
                            if (arg14 s< 0x100)
                                zmm1 = _mm_shuffle_epi32(arg9, 0x4e)
                                zmm2 = _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), arg7)
                                char rbp_38 = temp0_1166.b
                                
                                if ((rbp_38 & 1) == 0)
                                    zmm1 = _mm_cvtepi32_epi64(zmm1[0].q)
                                    
                                    if ((rbp_38 & 2) != 0)
                                        goto label_140233c67
                                    
                                    goto label_1402338c2
                                
                                arg7 = zx.o(*zmm2.q)
                                zmm1 = _mm_cvtepi32_epi64(zmm1[0].q)
                                
                                if ((rbp_38 & 2) != 0)
                                label_140233c67:
                                    arg7 =
                                        _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_548_4)
                                    
                                    if ((rbp_38 & 4) == 0)
                                        goto label_1402338d5
                                    
                                    goto label_140233c88
                                
                            label_1402338c2:
                                zmm1 = __paddq_xmmdq_memdq(zmm1, var_548_4)
                                
                                if ((rbp_38 & 4) != 0)
                                label_140233c88:
                                    arg7 = _mm_insert_epi32(arg7, zx.d(*zmm1[0].q), 2)
                                    
                                    if ((rbp_38 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                else
                                label_1402338d5:
                                    
                                    if ((rbp_38 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                
                                arg6 = zmm14
                                arg7 &= data_142ed6810
                                arg8 = _mm_shuffle_epi32(zmm0, 0)
                                arg7 = _mm_cmpgt_epi32(arg7, arg8)
                                uint128_t var_538_3 = arg7 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                                zmm2 = arg9
                                arg12 = var_548_4
                                
                                if (_mm_movemask_ps(arg7 & not.o(zmm12)) != 0)
                                    zmm2 = __blendvps_xmmdq_memdq(arg9, var_558_3, var_538_3)
                                    zmm0 = __psubd_xmmdq_memdq(arg9, data_142d3f800)
                                    arg7 &= not.o(_mm_cmpgt_epi32(arg6, zmm0))
                                    arg5 = zmm12 & arg7
                                    uint32_t i = _mm_movemask_ps(arg5)
                                    
                                    if (i != 0)
                                        zmm4 = arg9
                                        
                                        do
                                            zmm1 = zmm0
                                            zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                            int32_t temp0_1276[0x4] = __paddq_xmmdq_memdq(
                                                _mm_cvtepi32_epi64(zmm1[0].q), var_5a8_2)
                                            char temp0_1277 = _mm_movemask_ps(arg5)
                                            
                                            if ((temp0_1277 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_1277 & 2) != 0)
                                                    goto label_1402339a8
                                                
                                                goto label_140233a06
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*temp0_1276[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                            
                                            if ((temp0_1277 & 2) != 0)
                                            label_1402339a8:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(temp0_1276, 1)), 1)
                                                arg6 = zmm14
                                                zmm0 = _mm_add_epi64(zmm0, arg12)
                                                
                                                if ((temp0_1277 & 4) == 0)
                                                    goto label_140233a15
                                                
                                                goto label_1402339c5
                                            
                                        label_140233a06:
                                            arg6 = zmm14
                                            zmm0 = _mm_add_epi64(zmm0, arg12)
                                            
                                            if ((temp0_1277 & 4) != 0)
                                            label_1402339c5:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1277 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_140233a15:
                                                
                                                if ((temp0_1277 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm0 =
                                                _mm_cmpgt_epi32(zmm3 & data_142ed6810, arg8) & arg7
                                            zmm2 = _mm_blendv_ps(zmm2, zmm4, zmm0)
                                            zmm4 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != i)
                                                zmm4 = zmm0 ^ arg7
                                            
                                            zmm0 = __psubd_xmmdq_memdq(zmm1, data_142d3f800)
                                            arg7 = _mm_cmpgt_epi32(arg6, zmm0) & zmm4
                                            arg5 = arg7 & zmm12
                                            i = _mm_movemask_ps(arg5)
                                            zmm4 = zmm1
                                        while (i != 0)
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(var_538_3, zmm12)) == 0)
                                    arg9 = var_578_3
                                    arg5 = var_448_2
                                    arg7 = var_5a8_2
                                else
                                    zmm0 = var_538_3 ^ data_142d3f800
                                    zmm2 = _mm_blendv_ps(zmm2, zx.o(0), zmm0)
                                    zmm14 = _mm_cmpeq_epi32(zmm14, zmm14)
                                    arg9 = _mm_add_epi32(arg9, zmm14)
                                    arg5 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm0
                                    zmm0 = arg5 & zmm12
                                    uint32_t i_1 = _mm_movemask_ps(zmm0)
                                    
                                    if (i_1 == 0)
                                        arg7 = var_5a8_2
                                    else
                                        arg7 = var_5a8_2
                                        
                                        do
                                            int32_t temp0_1299[0x4] = _mm_shuffle_epi32(arg9, 0x4e)
                                            zmm1 =
                                                _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), arg7)
                                            char temp0_1302 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_1302 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(temp0_1299[0].q)
                                                
                                                if ((temp0_1302 & 2) != 0)
                                                    goto label_140233b0e
                                                
                                                goto label_140233b62
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(temp0_1299[0].q)
                                            
                                            if ((temp0_1302 & 2) != 0)
                                            label_140233b0e:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg12)
                                                
                                                if ((temp0_1302 & 4) == 0)
                                                    goto label_140233b6c
                                                
                                                goto label_140233b26
                                            
                                        label_140233b62:
                                            zmm0 = _mm_add_epi64(zmm0, arg12)
                                            
                                            if ((temp0_1302 & 4) != 0)
                                            label_140233b26:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1302 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_140233b6c:
                                                
                                                if ((temp0_1302 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm0 = _mm_cmpgt_epi32(zmm3 & data_142ed6810, arg8)
                                                & not.o(arg5)
                                            zmm2 = _mm_blendv_ps(zmm2, arg9, zmm0)
                                            zmm4 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != i_1)
                                                zmm4 = zmm0 ^ arg5
                                            
                                            arg9 = _mm_add_epi32(arg9, zmm14)
                                            arg5 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm4
                                            zmm0 = arg5 & zmm12
                                            i_1 = _mm_movemask_ps(zmm0)
                                        while (i_1 != 0)
                                    
                                    arg9 = var_578_3
                                    arg5 = var_448_2
                                
                                arg10 = _mm_blendv_ps(arg10, zmm2, zmm12)
                                zmm0 = _mm_shuffle_epi32(arg10, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg10[0].q), arg7)
                                
                                if ((rbp_38 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    zmm2 = var_558_3
                                    
                                    if ((rbp_38 & 2) != 0)
                                        goto label_1402372fa
                                    
                                    goto label_140233f2d
                                
                                arg8 = zx.o(*zmm1[0].q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                zmm2 = var_558_3
                                
                                if ((rbp_38 & 2) != 0)
                                label_1402372fa:
                                    arg8 =
                                        _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg12)
                                    
                                    if ((rbp_38 & 4) == 0)
                                        goto label_140233f3c
                                    
                                    goto label_140237318
                                
                            label_140233f2d:
                                zmm0 = _mm_add_epi64(zmm0, arg12)
                                
                                if ((rbp_38 & 4) != 0)
                                label_140237318:
                                    arg8 = _mm_insert_epi32(arg8, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbp_38 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140233f3c:
                                    
                                    if ((rbp_38 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                arg5 = _mm_blendv_ps(arg5, 
                                    _mm_sub_epi32(arg10, _mm_cmpeq_epi32(zmm0, zmm0)), zmm12)
                                arg6 = _mm_cmpgt_epi32(arg6, arg5) & not.o(zmm12)
                                
                                if (_mm_movemask_ps(arg6) != 0)
                                    arg5 = _mm_blendv_ps(arg5, zmm2, arg6)
                                
                                arg7 = temp0_1108
                                zmm14 = var_5b8_1
                                zmm1 = _mm_shuffle_epi32(arg5, 0x4e)
                                zmm0 = _mm_cvtepi32_epi64(arg5.q)
                                zmm2 = _mm_add_epi64(var_5a8_2, zmm0)
                                
                                if ((rbp_38 & 1) == 0)
                                    zmm1 = _mm_cvtepi32_epi64(zmm1[0].q)
                                    
                                    if ((rbp_38 & 2) != 0)
                                        goto label_14023735f
                                    
                                    goto label_140233fc1
                                
                                zmm0 = zx.o(*zmm2.q)
                                zmm1 = _mm_cvtepi32_epi64(zmm1[0].q)
                                
                                if ((rbp_38 & 2) != 0)
                                label_14023735f:
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    arg12 = _mm_add_epi64(arg12, zmm1)
                                    
                                    if ((rbp_38 & 4) == 0)
                                        goto label_140233fd0
                                    
                                    goto label_14023737c
                                
                            label_140233fc1:
                                arg12 = _mm_add_epi64(arg12, zmm1)
                                
                                if ((rbp_38 & 4) != 0)
                                label_14023737c:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*arg12[0].q), 2)
                                    
                                    if ((rbp_38 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(arg12, 1)), 3)
                                else
                                label_140233fd0:
                                    
                                    if ((rbp_38 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(arg12, 1)), 3)
                                
                                arg8 &= data_142ed6810
                                zmm0 &= data_142ed6810
                            else
                                zmm1 = _mm_add_epi32(arg9, arg9)
                                zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm3 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1[0].q), arg7)
                                char rbp_37 = temp0_1166.b
                                
                                if ((rbp_37 & 1) == 0)
                                    zmm2 = _mm_cvtepi32_epi64(zmm2.q)
                                    
                                    if ((rbp_37 & 2) != 0)
                                        goto label_140233c0c
                                    
                                    goto label_140233542
                                
                                zmm1 = zx.o(*zmm3[0].q)
                                zmm2 = _mm_cvtepi32_epi64(zmm2.q)
                                
                                if ((rbp_37 & 2) != 0)
                                label_140233c0c:
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_548_4)
                                    
                                    if ((rbp_37 & 4) == 0)
                                        goto label_140233555
                                    
                                    goto label_140233c2d
                                
                            label_140233542:
                                zmm2 = __paddq_xmmdq_memdq(zmm2, var_548_4)
                                
                                if ((rbp_37 & 4) != 0)
                                label_140233c2d:
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2.q), 2)
                                    
                                    if ((rbp_37 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                else
                                label_140233555:
                                    
                                    if ((rbp_37 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                
                                arg6 = zmm14
                                zmm3 = _mm_blend_epi16(zx.o(0), zmm1, 0x55)
                                arg8 = _mm_shuffle_epi32(zmm0, 0)
                                zmm3 = _mm_cmpgt_epi32(zmm3, arg8)
                                uint128_t var_538_2 = zmm3 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                                zmm2 = arg9
                                
                                if (_mm_movemask_ps(zmm3 & not.o(zmm12)) != 0)
                                    zmm2 = __blendvps_xmmdq_memdq(arg9, var_558_3, var_538_2)
                                    zmm0 = __psubd_xmmdq_memdq(arg9, data_142d3f800)
                                    zmm3 &= not.o(_mm_cmpgt_epi32(arg6, zmm0))
                                    zmm4 = zmm12 & zmm3
                                    uint32_t i_2 = _mm_movemask_ps(zmm4)
                                    
                                    if (i_2 != 0)
                                        zmm1 = arg9
                                        
                                        do
                                            arg12 = zmm0
                                            int32_t temp0_1211[0x4] = _mm_add_epi32(zmm0, zmm0)
                                            zmm0 = _mm_shuffle_epi32(temp0_1211, 0x4e)
                                            arg7 = __paddq_xmmdq_memdq(
                                                _mm_cvtepi32_epi64(temp0_1211[0].q), var_5a8_2)
                                            char temp0_1215 = _mm_movemask_ps(zmm4)
                                            
                                            if ((temp0_1215 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                arg6 = zmm14
                                                
                                                if ((temp0_1215 & 2) != 0)
                                                    goto label_140233625
                                                
                                                goto label_140233684
                                            
                                            arg5 = _mm_insert_epi32(arg5, zx.d(*arg7[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                            arg6 = zmm14
                                            
                                            if ((temp0_1215 & 2) != 0)
                                            label_140233625:
                                                arg5 = _mm_insert_epi32(arg5, 
                                                    zx.d(*_mm_extract_epi64(arg7, 1)), 1)
                                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_548_4)
                                                
                                                if ((temp0_1215 & 4) == 0)
                                                    goto label_140233692
                                                
                                                goto label_140233641
                                            
                                        label_140233684:
                                            zmm0 = __paddq_xmmdq_memdq(zmm0, var_548_4)
                                            
                                            if ((temp0_1215 & 4) != 0)
                                            label_140233641:
                                                arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1215 & 8) != 0)
                                                    arg5 = _mm_insert_epi32(arg5, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_140233692:
                                                
                                                if ((temp0_1215 & 8) != 0)
                                                    arg5 = _mm_insert_epi32(arg5, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm4 = zx.o(0)
                                            zmm0 = _mm_cmpgt_epi32(
                                                _mm_blend_epi16(arg5, zmm4, 0xaa), arg8) & zmm3
                                            zmm2 = _mm_blendv_ps(zmm2, zmm1, zmm0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != i_2)
                                                zmm4 = zmm0 ^ zmm3
                                            
                                            zmm0 = __psubd_xmmdq_memdq(arg12, data_142d3f800)
                                            zmm3 = _mm_cmpgt_epi32(arg6, zmm0) & zmm4
                                            zmm4 = zmm3 & zmm12
                                            i_2 = _mm_movemask_ps(zmm4)
                                            zmm1 = arg12
                                        while (i_2 != 0)
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(var_538_2, zmm12)) == 0)
                                    arg9 = var_578_3
                                    arg5 = var_448_2
                                    arg12 = var_548_4
                                    arg7 = var_5a8_2
                                else
                                    zmm0 = var_538_2 ^ data_142d3f800
                                    zmm2 = _mm_blendv_ps(zmm2, zx.o(0), zmm0)
                                    zmm14 = _mm_cmpeq_epi32(zmm14, zmm14)
                                    arg9 = _mm_add_epi32(arg9, zmm14)
                                    arg5 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm0
                                    zmm0 = arg5 & zmm12
                                    uint32_t i_3 = _mm_movemask_ps(zmm0)
                                    
                                    if (i_3 == 0)
                                        arg12 = var_548_4
                                        arg7 = var_5a8_2
                                    else
                                        arg12 = var_548_4
                                        arg7 = var_5a8_2
                                        
                                        do
                                            zmm1 = _mm_add_epi32(arg9, arg9)
                                            zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
                                            zmm1 =
                                                _mm_add_epi64(_mm_cvtepi32_epi64(zmm1[0].q), arg7)
                                            char temp0_1242 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_1242 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm4[0].q)
                                                
                                                if ((temp0_1242 & 2) != 0)
                                                    goto label_140233795
                                                
                                                goto label_1402337ea
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm4[0].q)
                                            
                                            if ((temp0_1242 & 2) != 0)
                                            label_140233795:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg12)
                                                
                                                if ((temp0_1242 & 4) == 0)
                                                    goto label_1402337f4
                                                
                                                goto label_1402337ad
                                            
                                        label_1402337ea:
                                            zmm0 = _mm_add_epi64(zmm0, arg12)
                                            
                                            if ((temp0_1242 & 4) != 0)
                                            label_1402337ad:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1242 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_1402337f4:
                                                
                                                if ((temp0_1242 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm0 = _mm_cmpgt_epi32(
                                                _mm_blend_epi16(zmm3, zx.o(0), 0xaa), arg8)
                                                & not.o(arg5)
                                            zmm2 = _mm_blendv_ps(zmm2, arg9, zmm0)
                                            zmm4 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != i_3)
                                                zmm4 = zmm0 ^ arg5
                                            
                                            arg9 = _mm_add_epi32(arg9, zmm14)
                                            arg5 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm4
                                            zmm0 = arg5 & zmm12
                                            i_3 = _mm_movemask_ps(zmm0)
                                        while (i_3 != 0)
                                    
                                    arg9 = var_578_3
                                    arg5 = var_448_2
                                
                                arg10 = _mm_blendv_ps(arg10, zmm2, zmm12)
                                zmm1 = _mm_add_epi32(arg10, arg10)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1[0].q), arg7)
                                
                                if ((rbp_37 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    zmm2 = var_558_3
                                    
                                    if ((rbp_37 & 2) != 0)
                                        goto label_140233e42
                                    
                                    goto label_140233d39
                                
                                arg8 = zx.o(*zmm1[0].q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                zmm2 = var_558_3
                                
                                if ((rbp_37 & 2) != 0)
                                label_140233e42:
                                    arg8 =
                                        _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg12)
                                    
                                    if ((rbp_37 & 4) == 0)
                                        goto label_140233d48
                                    
                                    goto label_140233e60
                                
                            label_140233d39:
                                zmm0 = _mm_add_epi64(zmm0, arg12)
                                
                                if ((rbp_37 & 4) != 0)
                                label_140233e60:
                                    arg8 = _mm_insert_epi32(arg8, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbp_37 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140233d48:
                                    
                                    if ((rbp_37 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                arg5 = _mm_blendv_ps(arg5, 
                                    _mm_sub_epi32(arg10, _mm_cmpeq_epi32(zmm0, zmm0)), zmm12)
                                arg6 = _mm_cmpgt_epi32(arg6, arg5) & not.o(zmm12)
                                
                                if (_mm_movemask_ps(arg6) != 0)
                                    arg5 = _mm_blendv_ps(arg5, zmm2, arg6)
                                
                                arg7 = temp0_1108
                                zmm14 = var_5b8_1
                                zmm1 = _mm_add_epi32(arg5, arg5)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_cvtepi32_epi64(zmm1[0].q)
                                zmm2 = _mm_add_epi64(var_5a8_2, zmm1)
                                
                                if ((rbp_37 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbp_37 & 2) != 0)
                                        goto label_140233ea7
                                    
                                    goto label_140233dd5
                                
                                zmm1 = zx.o(*zmm2[0].q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbp_37 & 2) != 0)
                                label_140233ea7:
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    arg12 = _mm_add_epi64(arg12, zmm0)
                                    
                                    if ((rbp_37 & 4) == 0)
                                        goto label_140233de4
                                    
                                    goto label_140233ec4
                                
                            label_140233dd5:
                                arg12 = _mm_add_epi64(arg12, zmm0)
                                
                                if ((rbp_37 & 4) != 0)
                                label_140233ec4:
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*arg12[0].q), 2)
                                    zmm0 = zx.o(0)
                                    
                                    if ((rbp_37 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(arg12, 1)), 3)
                                else
                                label_140233de4:
                                    zmm0 = zx.o(0)
                                    
                                    if ((rbp_37 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(arg12, 1)), 3)
                                
                                arg8 = _mm_blend_epi16(arg8, zmm0, 0xaa)
                                zmm0 = _mm_blend_epi16(zx.o(0), zmm1, 0x55)
                            
                            zmm1 = var_518_2 ^ data_142d3f800
                            zmm2 = zx.o(0)
                            
                            if (arg16 != 1)
                                zmm0 =
                                    __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm0, arg8), data_142d3f5b0)
                                zmm3 = var_4a8_3
                                zmm2 = _mm_div_ps(
                                    _mm_sub_ps(_mm_shuffle_ps(zmm3, zmm3, 0), 
                                        _mm_cvtepi32_ps(arg8)), 
                                    _mm_cvtepi32_ps(zmm0))
                            
                            zmm1 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                            arg12 = var_4b8_3
                            arg8 = var_478_2
                    
                    arg9 = _mm_blendv_ps(arg9, zmm1, arg11)
                    zmm1 = arg10
                    var_4a8_2 = arg5
                    arg11 = var_5d8_1
                
                zmm12 = var_568_1
            
            zmm2 = _mm_cvtepu32_epi64(var_4f8_4.q)
            zmm3 = _mm_cvtepu32_epi64(_mm_shuffle_epi32(var_4f8_4, 0x4e).q)
            float var_548_5[0x4] = zmm1
            zmm0 = _mm_mullo_epi32(zmm1, zmm12)
            zmm1 = _mm_cvtepi32_epi64(zmm0.q)
            zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
            uint128_t var_4d8_2 = zmm0
            int32_t var_4f8_5[0x4] = zmm3
            zmm0 = _mm_add_epi64(zmm0, zmm3)
            float var_528_2[0x4] = zmm1
            uint128_t var_5a8_5 = zmm2
            float var_468_3[0x4] = _mm_add_epi64(_mm_add_epi64(zmm1, zmm2), arg11)
            uint128_t var_488_1 = __paddq_xmmdq_memdq(zmm0, var_598_5)
            arg10 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, var_508_3)
            zmm3 = arg10 & zmm14
            zmm0 = _mm_slli_epi32(zmm3, 0x1f)
            float var_578_4[0x4] = arg9
            int32_t var_558_4[0x4] = arg10
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm0 = var_588_1
                arg5 = zx.o(0)
                zmm14 = _mm_cmpeq_epi32(data_143442c60 & zmm0, arg5)
                zmm4 = _mm_slli_epi32(zmm3 & zmm14, 0x1f)
                char temp0_1395 = _mm_movemask_ps(zmm4)
                
                if (temp0_1395 != 0)
                    int32_t temp0_1396[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                    arg12 = __paddq_xmmdq_memdq(arg12, var_4f8_5)
                    arg7 = __paddq_xmmdq_memdq(arg8, var_5a8_5)
                    arg8 = data_1434426c0
                    arg7 = __paddq_xmmdq_memdq(arg7, var_528_2)
                    arg12 = _mm_add_epi64(__paddq_xmmdq_memdq(arg12, var_4d8_2), arg8)
                    arg7 = _mm_add_epi64(arg7, arg8)
                    zmm1 = _mm_shuffle_epi32(temp0_1396, 0x50)
                    zmm2 = _mm_blendv_ps(zx.o(0), arg7, zmm1)
                    zmm4 = _mm_shuffle_epi32(temp0_1396, 0xfa)
                    float temp0_1406[0x4] = _mm_blendv_ps(zx.o(0), arg12, zmm4)
                    int64_t rax_320 = _mm_extract_epi64(zmm2, 1)
                    void* rbp_39 = arg13 + rax_320
                    zmm12 = *(arg13 + rax_320)
                    int64_t rax_321 = temp0_1406[0].q
                    int64_t rsi_18 = _mm_extract_epi64(temp0_1406, 1)
                    void* rdi_29 = arg13 + rax_321
                    float temp0_1407[0x4] = _mm_blendv_ps(zx.o(0), arg8, zmm1)
                    arg11 = *(arg13 + rax_321)
                    arg6 = _mm_blendv_ps(zx.o(0), arg8, zmm4)
                    int32_t var_518_4 = (*(arg13 + rsi_18)).d
                    void* rbx_22 = zmm2.q + arg13
                    zmm2 = *(temp0_1407[0].q + rbx_22)
                    arg9 = *(_mm_extract_epi64(temp0_1407, 1) + rbp_39)
                    arg12 = *(arg6[0].q + rdi_29)
                    void* rsi_19 = arg13 + rsi_18
                    int32_t var_448_3 = (*(_mm_extract_epi64(arg6, 1) + rsi_19)).d
                    arg6 = data_1434426e0
                    float temp0_1409[0x4] = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                    arg5 = _mm_blendv_ps(arg5, arg6, zmm4)
                    arg6 = *(temp0_1409[0].q + rbx_22)
                    zmm4 = *(_mm_extract_epi64(temp0_1409, 1) + rbp_39)
                    uint128_t* rbp_40 = _mm_extract_epi64(arg5, 1)
                    zmm1 = *(arg5.q + rdi_29)
                    zmm0 = *(rbp_40 + rsi_19)
                    bool cond:29_1
                    bool cond:30_1
                    bool cond:41_1
                    bool cond:42_1
                    
                    if ((temp0_1395 & 1) == 0)
                        char temp10_1 = temp0_1395 & 2
                        cond:29_1 = temp10_1 != 0
                        cond:30_1 = temp10_1 == 0
                        cond:41_1 = temp10_1 != 0
                        cond:42_1 = temp10_1 == 0
                        
                        if (temp10_1 == 0)
                            goto label_140234336
                        
                        goto label_1402342d1
                    
                    arg8 = *rbx_22
                    char temp9_1 = temp0_1395 & 2
                    cond:29_1 = temp9_1 != 0
                    cond:30_1 = temp9_1 == 0
                    cond:41_1 = temp9_1 != 0
                    cond:42_1 = temp9_1 == 0
                    
                    if (temp9_1 == 0)
                    label_140234336:
                        arg7 = temp0_1108
                        arg5 = zmm2
                        
                        if (cond:30_1)
                            goto label_1402342e3
                        
                        goto label_140234341
                    
                label_1402342d1:
                    arg8 = _mm_insert_ps(arg8, zmm12, 0x10)
                    arg7 = temp0_1108
                    arg5 = zmm2
                    
                    if (not(cond:29_1))
                    label_1402342e3:
                        
                        if (cond:42_1)
                            goto label_14023434a
                        
                        goto label_1402342e5
                    
                label_140234341:
                    arg5 = _mm_insert_ps(arg5, arg9, 0x10)
                    bool cond:55_1
                    bool cond:56_1
                    bool cond:66_1
                    bool cond:67_1
                    
                    if (not(cond:41_1))
                    label_14023434a:
                        char temp18_1 = temp0_1395 & 4
                        cond:55_1 = temp18_1 != 0
                        cond:56_1 = temp18_1 == 0
                        cond:66_1 = temp18_1 != 0
                        cond:67_1 = temp18_1 == 0
                        arg9 = var_578_4
                        
                        if (temp18_1 == 0)
                            goto label_1402342f6
                        
                        goto label_140234355
                    
                label_1402342e5:
                    arg6 = _mm_insert_ps(arg6, zmm4, 0x10)
                    char temp17_1 = temp0_1395 & 4
                    cond:55_1 = temp17_1 != 0
                    cond:56_1 = temp17_1 == 0
                    cond:66_1 = temp17_1 != 0
                    cond:67_1 = temp17_1 == 0
                    arg9 = var_578_4
                    
                    if (temp17_1 == 0)
                    label_1402342f6:
                        arg11 = var_5d8_1
                        zmm12 = var_568_1
                        
                        if (cond:56_1)
                            goto label_14023436b
                        
                        goto label_140234305
                    
                label_140234355:
                    arg8 = _mm_insert_ps(arg8, arg11, 0x20)
                    arg11 = var_5d8_1
                    zmm12 = var_568_1
                    
                    if (not(cond:55_1))
                    label_14023436b:
                        
                        if (cond:67_1)
                            goto label_14023430e
                        
                        goto label_14023436d
                    
                label_140234305:
                    arg5 = _mm_insert_ps(arg5, arg12, 0x20)
                    bool cond:87_1
                    bool cond:88_1
                    bool cond:105_1
                    bool cond:106_1
                    
                    if (not(cond:66_1))
                    label_14023430e:
                        char temp31_1 = temp0_1395 & 8
                        cond:87_1 = temp31_1 != 0
                        cond:88_1 = temp31_1 == 0
                        cond:105_1 = temp31_1 == 0
                        cond:106_1 = temp31_1 != 0
                        
                        if (temp31_1 == 0)
                            goto label_140234378
                        
                        goto label_140234313
                    
                label_14023436d:
                    arg6 = _mm_insert_ps(arg6, zmm1, 0x20)
                    char temp30_1 = temp0_1395 & 8
                    cond:87_1 = temp30_1 != 0
                    cond:88_1 = temp30_1 == 0
                    cond:105_1 = temp30_1 == 0
                    cond:106_1 = temp30_1 != 0
                    
                    if (temp30_1 == 0)
                    label_140234378:
                        
                        if (cond:88_1)
                            goto label_140234321
                        
                        goto label_14023437a
                    
                label_140234313:
                    arg8 = __insertps_xmmps_memd_immb(arg8, var_518_4, 0x30)
                    
                    if (cond:87_1)
                    label_14023437a:
                        arg5 = __insertps_xmmps_memd_immb(arg5, var_448_3, 0x30)
                        
                        if (not(cond:105_1))
                            arg6 = _mm_insert_ps(arg6, zmm0, 0x30)
                    else
                    label_140234321:
                        
                        if (cond:106_1)
                            arg6 = _mm_insert_ps(arg6, zmm0, 0x30)
                
                zmm14 &= not.o(zmm3)
                zmm4 = _mm_slli_epi32(zmm14, 0x1f)
                char temp0_1421 = _mm_movemask_ps(zmm4)
                
                if (temp0_1421 == 0)
                    zmm14 = var_5b8_1
                else
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_4e8_2, 0x1f), 0x1f)
                    zmm4 = _mm_srai_epi32(zmm4, 0x1f) & zmm1
                    uint128_t var_518_5 = arg5
                    zmm3 = arg7
                    arg11 = arg6
                    
                    if (_mm_movemask_ps(zmm4) == 0)
                        arg10 = var_468_3
                        arg9 = var_488_1
                    else
                        zmm2 = data_1434426c0
                        arg9 = var_488_1
                        int32_t temp0_1426[0x4] = _mm_add_epi64(arg9, zmm2)
                        arg10 = var_468_3
                        arg7 = _mm_add_epi64(arg10, zmm2)
                        arg5 = _mm_unpacklo_ps(zmm4, zmm4[0].q)
                        arg10 = _mm_blendv_ps(arg10, arg7, arg5)
                        int32_t temp0_1430[0x4] = _mm_unpackhi_epi32(zmm4, zmm4[0].q)
                        arg9 = _mm_blendv_ps(arg9, temp0_1426, temp0_1430)
                        int32_t temp0_1432[0x4] = __paddq_xmmdq_memdq(var_4b8_3, var_4f8_5)
                        arg7 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_478_2, var_5a8_5), 
                            var_528_2)
                        int32_t temp0_1436[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1432, var_4d8_2), zmm2)
                        zmm2 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg7, zmm2), arg5)
                        float temp0_1439[0x4] = _mm_blendv_ps(zx.o(0), temp0_1436, temp0_1430)
                        arg5 = *(arg13 + zmm2.q)
                        int64_t rax_331 = _mm_extract_epi64(zmm2, 1)
                        int64_t rbp_41 = temp0_1439[0].q
                        int64_t rbx_23 = _mm_extract_epi64(temp0_1439, 1)
                        arg5 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg5, *(arg13 + rax_331), 0x10), 
                                *(arg13 + rbp_41), 0x20), 
                            *(arg13 + rbx_23), 0x30)
                    
                    zmm4 = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                    
                    if ((temp0_1421 & 1) != 0)
                        arg8 = _mm_blend_ps(arg8, zmm4, 1)
                        zmm0 = var_588_1
                        arg7 = zmm3
                        
                        if ((temp0_1421 & 2) != 0)
                            goto label_140234524
                        
                        goto label_1402344ff
                    
                    zmm0 = var_588_1
                    arg7 = zmm3
                    
                    if ((temp0_1421 & 2) != 0)
                    label_140234524:
                        arg8 = _mm_blend_ps(arg8, zmm4, 2)
                        
                        if ((temp0_1421 & 4) != 0)
                            goto label_140234505
                        
                        goto label_140234531
                    
                label_1402344ff:
                    
                    if ((temp0_1421 & 4) == 0)
                    label_140234531:
                        
                        if ((temp0_1421 & 8) != 0)
                            arg8 = _mm_blend_ps(arg8, zmm4, 8)
                    else
                    label_140234505:
                        arg8 = _mm_blend_ps(arg8, zmm4, 4)
                        
                        if ((temp0_1421 & 8) != 0)
                            arg8 = _mm_blend_ps(arg8, zmm4, 8)
                    
                    arg5 = data_143442c40
                    zmm1 = zmm0 & arg5
                    arg5 = _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm1) & zmm14, 0x1f)
                    char temp0_1450 = _mm_movemask_ps(arg5)
                    
                    if (temp0_1450 == 0)
                        arg5 = var_518_5
                        arg6 = arg11
                        arg11 = var_5d8_1
                        zmm12 = var_568_1
                    else
                        arg5 = _mm_srai_epi32(arg5, 0x1f)
                        zmm2 = data_1434426c0
                        int32_t temp0_1452[0x4] = _mm_add_epi64(arg9, zmm2)
                        zmm4 = _mm_blendv_ps(arg10, _mm_add_epi64(zmm2, arg10), 
                            _mm_shuffle_epi32(arg5, 0x50))
                        zmm0 = _mm_shuffle_epi32(arg5, 0xfa)
                        arg5 = _mm_blendv_ps(arg9, temp0_1452, zmm0)
                        
                        if ((temp0_1450 & 1) != 0)
                            zmm0 = *arg10[0].q
                        
                        if ((temp0_1450 & 2) != 0)
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg10, 1), 0x10)
                        
                        arg6 = arg11
                        arg11 = var_5d8_1
                        zmm12 = var_568_1
                        
                        if ((temp0_1450 & 4) != 0)
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg9[0].q, 0x20)
                        
                        if ((temp0_1450 & 8) != 0)
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg9, 1), 0x30)
                        
                        arg10 = zmm4
                        arg9 = arg5
                        arg5 = var_518_5
                    
                    zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                    
                    if ((temp0_1421 & 1) != 0)
                        arg5 = _mm_blend_epi16(arg5, zmm1, 3)
                        
                        if ((temp0_1421 & 2) != 0)
                            goto label_140234658
                        
                        goto label_14023463e
                    
                    if ((temp0_1421 & 2) != 0)
                    label_140234658:
                        arg5 = _mm_blend_epi16(arg5, zmm1, 0xc)
                        
                        if ((temp0_1421 & 4) != 0)
                            goto label_140234644
                        
                        goto label_140234664
                    
                label_14023463e:
                    
                    if ((temp0_1421 & 4) == 0)
                    label_140234664:
                        
                        if ((temp0_1421 & 8) != 0)
                            arg5 = _mm_blend_epi16(arg5, zmm1, 0xc0)
                    else
                    label_140234644:
                        arg5 = _mm_blend_epi16(arg5, zmm1, 0x30)
                        
                        if ((temp0_1421 & 8) != 0)
                            arg5 = _mm_blend_epi16(arg5, zmm1, 0xc0)
                    
                    zmm1 = data_143442c50
                    zmm0 = var_588_1 & zmm1
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm0)
                    char temp0_1468 = _mm_movemask_ps(_mm_slli_epi32(zmm14 & zmm1, 0x1f))
                    
                    if (temp0_1468 == 0)
                        arg9 = var_578_4
                        zmm14 = var_5b8_1
                        arg10 = var_558_4
                    else
                        if ((temp0_1468 & 1) == 0)
                            if ((temp0_1468 & 2) != 0)
                                goto label_1402348b8
                            
                            goto label_1402346ae
                        
                        zmm1 = *arg10[0].q
                        
                        if ((temp0_1468 & 2) != 0)
                        label_1402348b8:
                            zmm1 =
                                __insertps_xmmps_memd_immb(zmm1, *_mm_extract_epi64(arg10, 1), 0x10)
                            arg10 = var_558_4
                            zmm14 = var_5b8_1
                            
                            if ((temp0_1468 & 4) == 0)
                                goto label_1402346c8
                            
                            goto label_1402348dd
                        
                    label_1402346ae:
                        arg10 = var_558_4
                        zmm14 = var_5b8_1
                        
                        if ((temp0_1468 & 4) != 0)
                        label_1402348dd:
                            zmm1 = __insertps_xmmps_memd_immb(zmm1, *arg9[0].q, 0x20)
                            
                            if ((temp0_1468 & 8) != 0)
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(arg9, 1), 0x30)
                        else
                        label_1402346c8:
                            
                            if ((temp0_1468 & 8) != 0)
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(arg9, 1), 0x30)
                        
                        arg9 = var_578_4
                    
                    zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                    
                    if ((temp0_1421 & 1) != 0)
                        arg6 = _mm_blend_ps(arg6, zmm0, 1)
                        
                        if ((temp0_1421 & 2) != 0)
                            goto label_140234731
                        
                        goto label_140234717
                    
                    if ((temp0_1421 & 2) != 0)
                    label_140234731:
                        arg6 = _mm_blend_ps(arg6, zmm0, 2)
                        
                        if ((temp0_1421 & 4) != 0)
                            goto label_14023471d
                        
                        goto label_14023473d
                    
                label_140234717:
                    
                    if ((temp0_1421 & 4) == 0)
                    label_14023473d:
                        
                        if ((temp0_1421 & 8) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 8)
                    else
                    label_14023471d:
                        arg6 = _mm_blend_ps(arg6, zmm0, 4)
                        
                        if ((temp0_1421 & 8) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 8)
            
            uint128_t var_448_4 = _mm_cmpeq_epi32(zmm0, zmm0) ^ arg10
            
            if (_mm_movemask_ps(_mm_slli_epi32(arg10 & not.o(zmm14), 0x1f)) == 0)
                arg12 = var_548_5
            else
                if (temp0_1117 != 0)
                    uint128_t var_518_6 = arg5
                    arg5 = _mm_srai_epi32(_mm_slli_epi32(var_4e8_2, 0x1f), 0x1f) & arg7
                    zmm1 = var_498_3 & arg5
                    uint128_t var_498_4 = zx.o(0)
                    uint32_t temp0_1480 = _mm_movemask_ps(zmm1)
                    zmm12 = arg11
                    arg12 = var_598_5
                    arg11 = zx.o(0)
                    arg9 = zx.o(0)
                    
                    if (temp0_1480 != 0)
                        arg9 = arg6
                        zmm4 = data_1434426c0
                        arg7 = var_598_5
                        int32_t temp0_1481[0x4] = _mm_add_epi64(arg7, zmm4)
                        zmm2 = var_5d8_1
                        zmm3 = _mm_add_epi64(zmm2, zmm4)
                        int32_t temp0_1483[0x4] = _mm_unpacklo_epi32(zmm1, zmm1[0].q)
                        zmm14 = _mm_blendv_ps(zmm2, zmm3, temp0_1483)
                        float temp0_1485[0x4] = _mm_unpackhi_ps(zmm1, zmm1)
                        zmm0 = temp0_1485
                        float temp0_1486[0x4] = _mm_blendv_ps(arg7, temp0_1481, zmm0)
                        char rbp_43 = temp0_1480.b
                        
                        if ((rbp_43 & 1) == 0)
                            if ((rbp_43 & 2) != 0)
                                goto label_14023490b
                            
                            goto label_140234839
                        
                        zmm0 = *zmm2.q
                        
                        if ((rbp_43 & 2) != 0)
                        label_14023490b:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm2, 1), 0x10)
                            arg6 = arg9
                            
                            if ((rbp_43 & 4) == 0)
                                goto label_140234847
                            
                            goto label_14023492a
                        
                    label_140234839:
                        arg6 = arg9
                        
                        if ((rbp_43 & 4) == 0)
                        label_140234847:
                            
                            if ((rbp_43 & 8) != 0)
                                goto label_140234947
                            
                            goto label_140234851
                        
                    label_14023492a:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_598_5[0].q, 0x20)
                        char rbx_24
                        
                        if ((rbp_43 & 8) != 0)
                        label_140234947:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(var_598_5, 1), 0x30)
                            rbx_24 = _mm_movemask_ps(arg5)
                            arg11 = zx.o(0)
                            
                            if ((rbx_24 & 1) != 0)
                                goto label_140234862
                            
                            goto label_14023495e
                        
                    label_140234851:
                        rbx_24 = _mm_movemask_ps(arg5)
                        arg11 = zx.o(0)
                        
                        if ((rbx_24 & 1) != 0)
                        label_140234862:
                            arg11 = _mm_blend_epi16(arg11, zmm0, 3)
                            
                            if ((rbx_24 & 2) != 0)
                                goto label_140234967
                            
                            goto label_140234872
                        
                    label_14023495e:
                        
                        if ((rbx_24 & 2) != 0)
                        label_140234967:
                            arg11 = _mm_blend_epi16(arg11, zmm0, 0xc)
                            
                            if ((rbx_24 & 4) != 0)
                                goto label_14023487b
                            
                            goto label_140234977
                        
                    label_140234872:
                        
                        if ((rbx_24 & 4) == 0)
                        label_140234977:
                            
                            if ((rbx_24 & 8) != 0)
                                arg11 = _mm_blend_epi16(arg11, zmm0, 0xc0)
                        else
                        label_14023487b:
                            arg11 = _mm_blend_epi16(arg11, zmm0, 0x30)
                            
                            if ((rbx_24 & 8) != 0)
                                arg11 = _mm_blend_epi16(arg11, zmm0, 0xc0)
                        
                        arg5 = _mm_add_epi64(temp0_1486, zmm4)
                        zmm12 = _mm_blendv_ps(zmm14, _mm_add_epi64(zmm4, zmm14), temp0_1483)
                        zmm0 = temp0_1485
                        arg12 = _mm_blendv_ps(temp0_1486, arg5, zmm0)
                        
                        if ((rbp_43 & 1) == 0)
                            if ((rbp_43 & 2) != 0)
                                goto label_140234a08
                            
                            goto label_1402349b7
                        
                        zmm0 = *zmm14.q
                        
                        if ((rbp_43 & 2) != 0)
                        label_140234a08:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm14, 1), 0x10)
                            zmm14 = var_5b8_1
                            
                            if ((rbp_43 & 4) == 0)
                                goto label_1402349c4
                            
                            goto label_140234a20
                        
                    label_1402349b7:
                        zmm14 = var_5b8_1
                        
                        if ((rbp_43 & 4) == 0)
                        label_1402349c4:
                            
                            if ((rbp_43 & 8) != 0)
                                goto label_140234a33
                            
                            goto label_1402349ca
                        
                    label_140234a20:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1486[0].q, 0x20)
                        
                        if ((rbp_43 & 8) != 0)
                        label_140234a33:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_1486, 1), 0x30)
                            arg9 = zx.o(0)
                            
                            if ((rbx_24 & 1) != 0)
                                goto label_1402349d3
                            
                            goto label_140234a42
                        
                    label_1402349ca:
                        arg9 = zx.o(0)
                        
                        if ((rbx_24 & 1) != 0)
                        label_1402349d3:
                            arg9 = _mm_blend_ps(arg9, zmm0, 1)
                            
                            if ((rbx_24 & 2) != 0)
                                goto label_140234a47
                            
                            goto label_1402349df
                        
                    label_140234a42:
                        
                        if ((rbx_24 & 2) != 0)
                        label_140234a47:
                            arg9 = _mm_blend_ps(arg9, zmm0, 2)
                            
                            if ((rbx_24 & 4) != 0)
                                goto label_1402349e4
                            
                            goto label_140234a53
                        
                    label_1402349df:
                        
                        if ((rbx_24 & 4) == 0)
                        label_140234a53:
                            
                            if ((rbx_24 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm0, 8)
                        else
                        label_1402349e4:
                            arg9 = _mm_blend_ps(arg9, zmm0, 4)
                            
                            if ((rbx_24 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm0, 8)
                    
                    zmm0 = data_143442c40
                    arg5 = _mm_cmpeq_epi32(var_588_1 & zmm0, zmm0) & temp0_1108
                    zmm3 = _mm_slli_epi32(arg5 & zmm14, 0x1f)
                    char temp0_1511 = _mm_movemask_ps(zmm3)
                    int32_t var_538_4[0x4] = arg6
                    
                    if (temp0_1511 == 0)
                        arg10 = zx.o(0)
                        arg6 = var_588_1
                    else
                        zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                        zmm4 = data_1434426c0
                        int32_t temp0_1513[0x4] = _mm_add_epi64(arg12, zmm4)
                        arg7 = _mm_add_epi64(zmm12, zmm4)
                        zmm1 = _mm_shuffle_epi32(zmm3, 0x50)
                        zmm2 = _mm_blendv_ps(zmm12, arg7, zmm1)
                        zmm3 = _mm_shuffle_epi32(zmm3, 0xfa)
                        zmm0 = zmm3
                        float temp0_1518[0x4] = _mm_blendv_ps(arg12, temp0_1513, zmm0)
                        
                        if ((temp0_1511 & 1) == 0)
                            if ((temp0_1511 & 2) != 0)
                                goto label_140234b4a
                            
                            goto label_140234af2
                        
                        zmm0 = *zmm12[0].q
                        
                        if ((temp0_1511 & 2) != 0)
                        label_140234b4a:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm12, 1), 0x10)
                            
                            if ((temp0_1511 & 4) == 0)
                                goto label_140234af8
                            
                            goto label_140234b5b
                        
                    label_140234af2:
                        
                        if ((temp0_1511 & 4) == 0)
                        label_140234af8:
                            
                            if ((temp0_1511 & 8) != 0)
                                goto label_140234b6e
                            
                            goto label_140234afe
                        
                    label_140234b5b:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg12[0].q, 0x20)
                        char rbx_25
                        
                        if ((temp0_1511 & 8) != 0)
                        label_140234b6e:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg12, 1), 0x30)
                            rbx_25 = _mm_movemask_ps(arg5)
                            arg5 = zx.o(0)
                            
                            if ((rbx_25 & 1) != 0)
                                goto label_140234b09
                            
                            goto label_140234b7f
                        
                    label_140234afe:
                        rbx_25 = _mm_movemask_ps(arg5)
                        arg5 = zx.o(0)
                        
                        if ((rbx_25 & 1) != 0)
                        label_140234b09:
                            arg5 = _mm_blend_ps(arg5, zmm0, 1)
                            
                            if ((rbx_25 & 2) != 0)
                                goto label_140234b84
                            
                            goto label_140234b14
                        
                    label_140234b7f:
                        
                        if ((rbx_25 & 2) != 0)
                        label_140234b84:
                            arg5 = _mm_blend_ps(arg5, zmm0, 2)
                            
                            if ((rbx_25 & 4) != 0)
                                goto label_140234b19
                            
                            goto label_140234b8f
                        
                    label_140234b14:
                        
                        if ((rbx_25 & 4) == 0)
                        label_140234b8f:
                            
                            if ((rbx_25 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm0, 8)
                        else
                        label_140234b19:
                            arg5 = _mm_blend_ps(arg5, zmm0, 4)
                            
                            if ((rbx_25 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm0, 8)
                        
                        var_498_4 = arg5
                        arg5 = _mm_add_epi64(temp0_1518, zmm4)
                        zmm12 = _mm_blendv_ps(zmm2, _mm_add_epi64(zmm4, zmm2), zmm1)
                        zmm0 = zmm3
                        arg12 = _mm_blendv_ps(temp0_1518, arg5, zmm0)
                        
                        if ((temp0_1511 & 1) == 0)
                            if ((temp0_1511 & 2) != 0)
                                goto label_140234c26
                            
                            goto label_140234bd5
                        
                        zmm0 = *zmm2.q
                        
                        if ((temp0_1511 & 2) != 0)
                        label_140234c26:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm2, 1), 0x10)
                            
                            if ((temp0_1511 & 4) == 0)
                                goto label_140234bdb
                            
                            goto label_140234c37
                        
                    label_140234bd5:
                        
                        if ((temp0_1511 & 4) == 0)
                        label_140234bdb:
                            
                            if ((temp0_1511 & 8) != 0)
                                goto label_140234c4a
                            
                            goto label_140234be1
                        
                    label_140234c37:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1518[0].q, 0x20)
                        
                        if ((temp0_1511 & 8) != 0)
                        label_140234c4a:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_1518, 1), 0x30)
                            arg6 = var_588_1
                            arg10 = zx.o(0)
                            
                            if ((rbx_25 & 1) != 0)
                                goto label_140234bf1
                            
                            goto label_140234c60
                        
                    label_140234be1:
                        arg6 = var_588_1
                        arg10 = zx.o(0)
                        
                        if ((rbx_25 & 1) != 0)
                        label_140234bf1:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 3)
                            
                            if ((rbx_25 & 2) != 0)
                                goto label_140234c65
                            
                            goto label_140234bfd
                        
                    label_140234c60:
                        
                        if ((rbx_25 & 2) != 0)
                        label_140234c65:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 0xc)
                            
                            if ((rbx_25 & 4) != 0)
                                goto label_140234c02
                            
                            goto label_140234c71
                        
                    label_140234bfd:
                        
                        if ((rbx_25 & 4) == 0)
                        label_140234c71:
                            
                            if ((rbx_25 & 8) != 0)
                                arg10 = _mm_blend_epi16(arg10, zmm0, 0xc0)
                        else
                        label_140234c02:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 0x30)
                            
                            if ((rbx_25 & 8) != 0)
                                arg10 = _mm_blend_epi16(arg10, zmm0, 0xc0)
                    
                    zmm0 = data_143442c50
                    arg6 = _mm_cmpeq_epi32(arg6 & zmm0, zmm0) & temp0_1108
                    arg5 = _mm_slli_epi32(arg6 & zmm14, 0x1f)
                    char temp0_1541 = _mm_movemask_ps(arg5)
                    zmm3 = zx.o(0)
                    zmm2 = zx.o(0)
                    
                    if (temp0_1541 != 0)
                        arg5 = _mm_srai_epi32(arg5, 0x1f)
                        zmm2 = data_1434426c0
                        zmm3 = _mm_add_epi64(arg12, zmm2)
                        zmm4 = _mm_blendv_ps(zmm12, _mm_add_epi64(zmm2, zmm12), 
                            _mm_shuffle_epi32(arg5, 0x50))
                        zmm0 = _mm_shuffle_epi32(arg5, 0xfa)
                        zmm2 = _mm_blendv_ps(arg12, zmm3, zmm0)
                        
                        if ((temp0_1541 & 1) == 0)
                            if ((temp0_1541 & 2) != 0)
                                goto label_140234dc9
                            
                            goto label_140234d04
                        
                        zmm0 = *zmm12[0].q
                        
                        if ((temp0_1541 & 2) != 0)
                        label_140234dc9:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm12, 1), 0x10)
                            
                            if ((temp0_1541 & 4) == 0)
                                goto label_140234d0d
                            
                            goto label_140234ddd
                        
                    label_140234d04:
                        
                        if ((temp0_1541 & 4) == 0)
                        label_140234d0d:
                            
                            if ((temp0_1541 & 8) != 0)
                                goto label_140234df3
                            
                            goto label_140234d16
                        
                    label_140234ddd:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg12[0].q, 0x20)
                        char rbp_45
                        
                        if ((temp0_1541 & 8) != 0)
                        label_140234df3:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg12, 1), 0x30)
                            rbp_45 = _mm_movemask_ps(arg6)
                            zmm3 = zx.o(0)
                            
                            if ((rbp_45 & 1) != 0)
                                goto label_140234d26
                            
                            goto label_140234e09
                        
                    label_140234d16:
                        rbp_45 = _mm_movemask_ps(arg6)
                        zmm3 = zx.o(0)
                        
                        if ((rbp_45 & 1) != 0)
                        label_140234d26:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 1)
                            
                            if ((rbp_45 & 2) != 0)
                                goto label_140234e13
                            
                            goto label_140234d36
                        
                    label_140234e09:
                        
                        if ((rbp_45 & 2) != 0)
                        label_140234e13:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                            
                            if ((rbp_45 & 4) != 0)
                                goto label_140234d40
                            
                            goto label_140234e23
                        
                    label_140234d36:
                        
                        if ((rbp_45 & 4) != 0)
                        label_140234d40:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                            
                            if ((rbp_45 & 8) != 0)
                                goto label_140234e2d
                            
                            goto label_140234d50
                        
                    label_140234e23:
                        
                        if ((rbp_45 & 8) != 0)
                        label_140234e2d:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                            
                            if ((temp0_1541 & 1) == 0)
                                goto label_140234d59
                            
                            goto label_140234e41
                        
                    label_140234d50:
                        
                        if ((temp0_1541 & 1) == 0)
                        label_140234d59:
                            
                            if ((temp0_1541 & 2) != 0)
                                goto label_140234e55
                            
                            goto label_140234d62
                        
                    label_140234e41:
                        zmm0 = *zmm4[0].q
                        
                        if ((temp0_1541 & 2) != 0)
                        label_140234e55:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm4, 1), 0x10)
                            
                            if ((temp0_1541 & 4) == 0)
                                goto label_140234d6b
                            
                            goto label_140234e69
                        
                    label_140234d62:
                        
                        if ((temp0_1541 & 4) == 0)
                        label_140234d6b:
                            
                            if ((temp0_1541 & 8) != 0)
                                goto label_140234e7f
                            
                            goto label_140234d74
                        
                    label_140234e69:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm2.q, 0x20)
                        
                        if ((temp0_1541 & 8) != 0)
                        label_140234e7f:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm2, 1), 0x30)
                            zmm2 = zx.o(0)
                            
                            if ((rbp_45 & 1) != 0)
                                goto label_140234d81
                            
                            goto label_140234e92
                        
                    label_140234d74:
                        zmm2 = zx.o(0)
                        
                        if ((rbp_45 & 1) != 0)
                        label_140234d81:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 1)
                            
                            if ((rbp_45 & 2) != 0)
                                goto label_140234e9c
                            
                            goto label_140234d91
                        
                    label_140234e92:
                        
                        if ((rbp_45 & 2) != 0)
                        label_140234e9c:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 2)
                            
                            if ((rbp_45 & 4) != 0)
                                goto label_140234d9b
                            
                            goto label_140234eac
                        
                    label_140234d91:
                        
                        if ((rbp_45 & 4) == 0)
                        label_140234eac:
                            
                            if ((rbp_45 & 8) != 0)
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                        else
                        label_140234d9b:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 4)
                            
                            if ((rbp_45 & 8) != 0)
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                    
                    int32_t temp0_1565[0x4] = __paddq_xmmdq_memdq(var_4b8_3, var_4f8_5)
                    arg5 = __paddq_xmmdq_memdq(var_478_2, var_5a8_5)
                    zmm0 = data_1434426c0
                    arg5 = __paddq_xmmdq_memdq(arg5, var_528_2)
                    int32_t temp0_1569[0x4] =
                        _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1565, var_4d8_2), zmm0)
                    zmm1 = var_4c8_2
                    arg6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, zmm0), 
                        _mm_shuffle_epi32(zmm1, 0x50))
                    float temp0_1574[0x4] =
                        _mm_blendv_ps(zx.o(0), temp0_1569, _mm_shuffle_epi32(zmm1, 0xfa))
                    int64_t rax_365 = arg6[0].q
                    int64_t rcx_107 = _mm_extract_epi64(arg6, 1)
                    int64_t rbp_46 = _mm_extract_epi64(temp0_1574, 1)
                    zmm0 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg13 + rax_365)), *(arg13 + rcx_107), 
                                1), 
                            *(arg13 + temp0_1574[0].q), 2), 
                        *(arg13 + rbp_46), 3)
                    zmm4 = _mm_srli_epi32(zmm0, 0x15)
                    arg5 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    float temp0_1584[0x4] = _mm_add_ps(arg11, 
                        _mm_mul_ps(arg9, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    zmm0 = data_143442440
                    arg5 = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                    arg6 = data_143442690
                    arg10 = _mm_mul_ps(arg10, _mm_div_ps(arg5, arg6))
                    zmm4 = _mm_add_epi32(zmm4, zmm0)
                    zmm0 = _mm_div_ps(_mm_cvtepi32_ps(zmm4), arg6)
                    char temp23_1 = temp0_1117 & 1
                    
                    if (temp23_1 != 0)
                        arg8 = _mm_blend_ps(arg8, temp0_1584, 1)
                    
                    arg7 = temp0_1108
                    arg5 = var_518_6
                    arg6 = var_538_4
                    zmm2 = _mm_mul_ps(zmm2, zmm0)
                    float temp0_1594[0x4] = _mm_add_ps(var_498_4, arg10)
                    
                    if (temp23_1 != 0)
                        arg5 = _mm_blend_ps(arg5, temp0_1594, 1)
                        arg10 = var_558_4
                        zmm3 = _mm_add_ps(zmm3, zmm2)
                        
                        if (temp23_1 != 0)
                            goto label_1402351fa
                        
                        goto label_140235007
                    
                    arg10 = var_558_4
                    zmm3 = _mm_add_ps(zmm3, zmm2)
                    bool cond:119_1
                    bool cond:120_1
                    bool cond:137_1
                    bool cond:138_1
                    
                    if (temp23_1 != 0)
                    label_1402351fa:
                        arg6 = _mm_blend_ps(arg6, zmm3, 1)
                        char temp41_1 = temp0_1117 & 2
                        cond:119_1 = temp41_1 == 0
                        cond:120_1 = temp41_1 != 0
                        cond:137_1 = temp41_1 == 0
                        cond:138_1 = temp41_1 != 0
                        
                        if (temp41_1 != 0)
                            goto label_140235010
                        
                        goto label_140235209
                    
                label_140235007:
                    char temp40_1 = temp0_1117 & 2
                    cond:119_1 = temp40_1 == 0
                    cond:120_1 = temp40_1 != 0
                    cond:137_1 = temp40_1 == 0
                    cond:138_1 = temp40_1 != 0
                    
                    if (temp40_1 == 0)
                    label_140235209:
                        
                        if (not(cond:119_1))
                        label_14023520f:
                            arg5 = _mm_blend_ps(arg5, temp0_1594, 2)
                            
                            if (cond:138_1)
                                goto label_140235023
                            
                            goto label_14023521b
                    else
                    label_140235010:
                        arg8 = _mm_blend_ps(arg8, temp0_1584, 2)
                        
                        if (cond:120_1)
                            goto label_14023520f
                    
                    bool cond:178_1
                    bool cond:179_1
                    bool cond:197_1
                    bool cond:198_1
                    
                    if (not(cond:137_1))
                    label_140235023:
                        arg6 = _mm_blend_ps(arg6, zmm3, 2)
                        char temp63_1 = temp0_1117 & 4
                        cond:178_1 = temp63_1 == 0
                        cond:179_1 = temp63_1 != 0
                        cond:197_1 = temp63_1 == 0
                        cond:198_1 = temp63_1 != 0
                        
                        if (temp63_1 != 0)
                            goto label_140235224
                        
                        goto label_140235032
                    
                label_14023521b:
                    char temp62_1 = temp0_1117 & 4
                    cond:178_1 = temp62_1 == 0
                    cond:179_1 = temp62_1 != 0
                    cond:197_1 = temp62_1 == 0
                    cond:198_1 = temp62_1 != 0
                    
                    if (temp62_1 == 0)
                    label_140235032:
                        
                        if (not(cond:178_1))
                        label_140235038:
                            arg5 = _mm_blend_ps(arg5, temp0_1594, 4)
                            
                            if (cond:198_1)
                                goto label_140235237
                            
                            goto label_140235044
                    else
                    label_140235224:
                        arg8 = _mm_blend_ps(arg8, temp0_1584, 4)
                        
                        if (cond:179_1)
                            goto label_140235038
                    
                    bool cond:245_1
                    bool cond:246_1
                    bool cond:264_1
                    bool cond:265_1
                    
                    if (not(cond:197_1))
                    label_140235237:
                        arg6 = _mm_blend_ps(arg6, zmm3, 4)
                        char temp85_1 = temp0_1117 & 8
                        cond:245_1 = temp85_1 == 0
                        cond:246_1 = temp85_1 != 0
                        cond:264_1 = temp85_1 == 0
                        cond:265_1 = temp85_1 != 0
                        
                        if (temp85_1 != 0)
                            goto label_14023504d
                        
                        goto label_140235246
                    
                label_140235044:
                    char temp84_1 = temp0_1117 & 8
                    cond:245_1 = temp84_1 == 0
                    cond:246_1 = temp84_1 != 0
                    cond:264_1 = temp84_1 == 0
                    cond:265_1 = temp84_1 != 0
                    
                    if (temp84_1 != 0)
                    label_14023504d:
                        arg8 = _mm_blend_ps(arg8, temp0_1584, 8)
                        arg11 = var_5d8_1
                        zmm12 = var_568_1
                        
                        if (cond:246_1)
                            goto label_140235259
                        
                        goto label_140235067
                    
                label_140235246:
                    arg11 = var_5d8_1
                    zmm12 = var_568_1
                    
                    if (cond:245_1)
                    label_140235067:
                        
                        if (not(cond:264_1))
                            arg6 = _mm_blend_ps(arg6, zmm3, 8)
                    else
                    label_140235259:
                        arg5 = _mm_blend_ps(arg5, temp0_1594, 8)
                        
                        if (cond:265_1)
                            arg6 = _mm_blend_ps(arg6, zmm3, 8)
                
                arg9 = arg7 ^ var_448_4
                
                if (_mm_movemask_ps(_mm_slli_epi32(arg9 & zmm14, 0x1f)) == 0)
                    arg9 = var_578_4
                    arg12 = var_548_5
                else
                    arg12 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_508_3)
                    arg10 = arg12 & zmm14
                    zmm2 = _mm_slli_epi32(arg10, 0x1f)
                    char temp0_1606 = _mm_movemask_ps(zmm2)
                    
                    if (temp0_1606 == 0)
                        arg10 = var_558_4
                    else
                        zmm14 = arg6
                        arg11 = arg5
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_4e8_2, 0x1f), 0x1f)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f) & zmm1
                        
                        if (_mm_movemask_ps(zmm2) == 0)
                            zmm12 = var_468_3
                        else
                            arg6 = data_1434426b0
                            zmm4 = var_488_1
                            arg7 = _mm_add_epi64(zmm4, arg6)
                            int32_t temp0_1612[0x4] = _mm_add_epi64(arg6, var_468_3)
                            float temp0_1613[0x4] = _mm_unpacklo_ps(zmm2, zmm2.q)
                            zmm12 = _mm_blendv_ps(var_468_3, temp0_1612, temp0_1613)
                            zmm2 = _mm_unpackhi_ps(zmm2, zmm2)
                            var_488_1 = _mm_blendv_ps(zmm4, arg7, zmm2)
                            int32_t temp0_1617[0x4] = __paddq_xmmdq_memdq(var_4b8_3, var_4f8_5)
                            arg7 = __paddq_xmmdq_memdq(var_478_2, var_5a8_5)
                            zmm0 = data_1434426c0
                            arg7 = __paddq_xmmdq_memdq(arg7, var_528_2)
                            int32_t temp0_1621[0x4] =
                                _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1617, var_4d8_2), zmm0)
                            arg5 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg7, zmm0), temp0_1613)
                            zmm4 = _mm_blendv_ps(zx.o(0), temp0_1621, zmm2)
                            int64_t rax_368 = _mm_extract_epi64(arg5, 1)
                            int64_t rbp_47 = zmm4[0].q
                            int64_t rbx_27 = _mm_extract_epi64(zmm4, 1)
                            zmm3 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg13 + arg5.q)), 
                                            *(arg13 + rax_368), 1), 
                                        *(arg13 + rbp_47), 2), 
                                    *(arg13 + rbx_27), 3).q), 
                                data_143442b40))
                        
                        zmm0 = zmm1
                        zmm2 = _mm_blendv_ps(zx.o(0), zmm3, zmm0)
                        
                        if ((temp0_1606 & 1) != 0)
                            arg8 = _mm_blend_ps(arg8, zmm2, 1)
                            arg6 = zmm14
                            zmm14 = var_5b8_1
                            
                            if ((temp0_1606 & 2) != 0)
                                goto label_1402352e5
                            
                            goto label_1402352c2
                        
                        arg6 = zmm14
                        zmm14 = var_5b8_1
                        
                        if ((temp0_1606 & 2) != 0)
                        label_1402352e5:
                            arg8 = _mm_blend_ps(arg8, zmm2, 2)
                            
                            if ((temp0_1606 & 4) != 0)
                                goto label_1402352c7
                            
                            goto label_1402352f1
                        
                    label_1402352c2:
                        
                        if ((temp0_1606 & 4) == 0)
                        label_1402352f1:
                            
                            if ((temp0_1606 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm2, 8)
                        else
                        label_1402352c7:
                            arg8 = _mm_blend_ps(arg8, zmm2, 4)
                            
                            if ((temp0_1606 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm2, 8)
                        
                        zmm1 = data_143442c40
                        zmm3 = var_588_1 & zmm1
                        zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm3) & arg10, 0x1f)
                        char temp0_1644 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_1644 == 0)
                            zmm2 = zmm12
                            zmm1 = var_488_1
                            arg5 = arg11
                            arg11 = var_5d8_1
                            zmm12 = var_568_1
                        else
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            zmm4 = data_1434426b0
                            arg7 = var_488_1
                            arg5 = _mm_add_epi64(arg7, zmm4)
                            zmm2 = _mm_blendv_ps(zmm12, _mm_add_epi64(zmm4, zmm12), 
                                _mm_shuffle_epi32(zmm1, 0x50))
                            zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm1 = _mm_blendv_ps(arg7, arg5, zmm0)
                            
                            if ((temp0_1644 & 1) != 0)
                                zmm0 = zx.o(*zmm12[0].q)
                            
                            if ((temp0_1644 & 2) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm12, 1)), 1)
                            
                            arg5 = arg11
                            arg11 = var_5d8_1
                            zmm12 = var_568_1
                            
                            if ((temp0_1644 & 4) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*var_488_1[0].q), 2)
                            
                            if ((temp0_1644 & 8) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, 
                                    zx.d(*_mm_extract_epi64(var_488_1, 1)), 3)
                            
                            zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zx.o(0), zmm0, 0x55), data_143442b40))
                        
                        zmm4 = zx.o(0)
                        zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0)) & not.o(zmm0)
                        
                        if ((temp0_1606 & 1) != 0)
                            arg5 = _mm_blend_ps(arg5, zmm3, 1)
                            
                            if ((temp0_1606 & 2) != 0)
                                goto label_140235442
                            
                            goto label_14023542b
                        
                        if ((temp0_1606 & 2) != 0)
                        label_140235442:
                            arg5 = _mm_blend_ps(arg5, zmm3, 2)
                            
                            if ((temp0_1606 & 4) != 0)
                                goto label_140235430
                            
                            goto label_14023544d
                        
                    label_14023542b:
                        
                        if ((temp0_1606 & 4) == 0)
                        label_14023544d:
                            
                            if ((temp0_1606 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm3, 8)
                        else
                        label_140235430:
                            arg5 = _mm_blend_ps(arg5, zmm3, 4)
                            
                            if ((temp0_1606 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm3, 8)
                        
                        zmm3 = data_143442c50
                        zmm0 = var_588_1 & zmm3
                        zmm3 = _mm_cmpeq_epi32(zmm3, zmm0)
                        char temp0_1665 = _mm_movemask_ps(_mm_slli_epi32(arg10 & zmm3, 0x1f))
                        
                        if (temp0_1665 == 0)
                            arg10 = var_558_4
                        else
                            arg10 = var_558_4
                            
                            if ((temp0_1665 & 1) == 0)
                                if ((temp0_1665 & 2) != 0)
                                    goto label_14023601d
                                
                                goto label_1402354a0
                            
                            zmm3 = zx.o(*zmm2.q)
                            
                            if ((temp0_1665 & 2) != 0)
                            label_14023601d:
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                
                                if ((temp0_1665 & 4) == 0)
                                    goto label_1402354a9
                                
                                goto label_140236034
                            
                        label_1402354a0:
                            
                            if ((temp0_1665 & 4) != 0)
                            label_140236034:
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1[0].q), 2)
                                
                                if ((temp0_1665 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                            else
                            label_1402354a9:
                                
                                if ((temp0_1665 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                            
                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zx.o(0), zmm3, 0x55), data_143442b40))
                        
                        zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_1606 & 1) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 1)
                            
                            if ((temp0_1606 & 2) != 0)
                                goto label_140235512
                            
                            goto label_1402354fb
                        
                        if ((temp0_1606 & 2) != 0)
                        label_140235512:
                            arg6 = _mm_blend_ps(arg6, zmm0, 2)
                            
                            if ((temp0_1606 & 4) != 0)
                                goto label_140235500
                            
                            goto label_14023551d
                        
                    label_1402354fb:
                        
                        if ((temp0_1606 & 4) == 0)
                        label_14023551d:
                            
                            if ((temp0_1606 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                        else
                        label_140235500:
                            arg6 = _mm_blend_ps(arg6, zmm0, 4)
                            
                            if ((temp0_1606 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                    
                    arg9 = (arg9 ^ arg12) & zmm14
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(arg9, 0x1f)) == 0)
                        arg9 = var_578_4
                        arg7 = temp0_1108
                        arg12 = var_548_5
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(data_143442ad0, var_508_3)
                        char temp0_1679 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & zmm14, 0x1f))
                        
                        if (temp0_1679 == 0)
                            arg7 = temp0_1108
                            arg12 = var_548_5
                        else
                            char temp29_1 = temp0_1679 & 1
                            
                            if (temp29_1 == 0)
                                arg7 = temp0_1108
                                arg12 = var_548_5
                                
                                if (temp29_1 != 0)
                                label_1402355e9:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                                    
                                    if (temp29_1 != 0)
                                        goto label_140235597
                                    
                                    goto label_1402355f1
                            else
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                                arg7 = temp0_1108
                                arg12 = var_548_5
                                
                                if (temp29_1 != 0)
                                    goto label_1402355e9
                            
                            bool cond:135_1
                            bool cond:136_1
                            bool cond:155_1
                            bool cond:156_1
                            
                            if (temp29_1 != 0)
                            label_140235597:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                                char temp47_1 = temp0_1679 & 2
                                cond:135_1 = temp47_1 == 0
                                cond:136_1 = temp47_1 != 0
                                cond:155_1 = temp47_1 == 0
                                cond:156_1 = temp47_1 != 0
                                
                                if (temp47_1 != 0)
                                    goto label_1402355f6
                                
                                goto label_1402355a2
                            
                        label_1402355f1:
                            char temp46_1 = temp0_1679 & 2
                            cond:135_1 = temp46_1 == 0
                            cond:136_1 = temp46_1 != 0
                            cond:155_1 = temp46_1 == 0
                            cond:156_1 = temp46_1 != 0
                            
                            if (temp46_1 == 0)
                            label_1402355a2:
                                
                                if (not(cond:135_1))
                                label_1402355a4:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                                    
                                    if (cond:156_1)
                                        goto label_140235601
                                    
                                    goto label_1402355ac
                            else
                            label_1402355f6:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                                
                                if (cond:136_1)
                                    goto label_1402355a4
                            
                            bool cond:195_1
                            bool cond:196_1
                            bool cond:217_1
                            bool cond:218_1
                            
                            if (not(cond:155_1))
                            label_140235601:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                                char temp68_1 = temp0_1679 & 4
                                cond:195_1 = temp68_1 == 0
                                cond:196_1 = temp68_1 != 0
                                cond:217_1 = temp68_1 == 0
                                cond:218_1 = temp68_1 != 0
                                
                                if (temp68_1 != 0)
                                    goto label_1402355b1
                                
                                goto label_14023560c
                            
                        label_1402355ac:
                            char temp67_1 = temp0_1679 & 4
                            cond:195_1 = temp67_1 == 0
                            cond:196_1 = temp67_1 != 0
                            cond:217_1 = temp67_1 == 0
                            cond:218_1 = temp67_1 != 0
                            
                            if (temp67_1 == 0)
                            label_14023560c:
                                
                                if (not(cond:195_1))
                                label_14023560e:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                                    
                                    if (cond:218_1)
                                        goto label_1402355bc
                                    
                                    goto label_140235616
                            else
                            label_1402355b1:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                                
                                if (cond:196_1)
                                    goto label_14023560e
                            
                            bool cond:262_1
                            bool cond:263_1
                            bool cond:285_1
                            bool cond:286_1
                            
                            if (not(cond:217_1))
                            label_1402355bc:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                                char temp93_1 = temp0_1679 & 8
                                cond:262_1 = temp93_1 == 0
                                cond:263_1 = temp93_1 != 0
                                cond:285_1 = temp93_1 == 0
                                cond:286_1 = temp93_1 == 0
                                
                                if (temp93_1 != 0)
                                    goto label_14023561b
                                
                                goto label_1402355c7
                            
                        label_140235616:
                            char temp92_1 = temp0_1679 & 8
                            cond:262_1 = temp92_1 == 0
                            cond:263_1 = temp92_1 != 0
                            cond:285_1 = temp92_1 == 0
                            cond:286_1 = temp92_1 == 0
                            
                            if (temp92_1 != 0)
                            label_14023561b:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                                
                                if (cond:263_1)
                                    goto label_1402355c9
                                
                                goto label_140235624
                            
                        label_1402355c7:
                            
                            if (cond:262_1)
                            label_140235624:
                                
                                if (not(cond:285_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                            else
                            label_1402355c9:
                                arg5 = _mm_blend_ps(arg5, zx.o(0), 8)
                                
                                if (not(cond:286_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                        
                        char temp0_1693 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(arg9), 0x1f))
                        
                        if (temp0_1693 == 0)
                            arg9 = var_578_4
                        else
                            char temp39_1 = temp0_1693 & 1
                            arg9 = var_578_4
                            
                            if (temp39_1 != 0)
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                                
                                if (temp39_1 != 0)
                                    goto label_1402356c8
                            else if (temp39_1 != 0)
                            label_1402356c8:
                                arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                                
                                if (temp39_1 != 0)
                                    goto label_14023568a
                                
                                goto label_1402356d0
                            
                            bool cond:153_1
                            bool cond:154_1
                            bool cond:176_1
                            bool cond:177_1
                            
                            if (temp39_1 != 0)
                            label_14023568a:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                                char temp61_1 = temp0_1693 & 2
                                cond:153_1 = temp61_1 == 0
                                cond:154_1 = temp61_1 != 0
                                cond:176_1 = temp61_1 == 0
                                cond:177_1 = temp61_1 != 0
                                
                                if (temp61_1 != 0)
                                    goto label_1402356d5
                                
                                goto label_140235695
                            
                        label_1402356d0:
                            char temp60_1 = temp0_1693 & 2
                            cond:153_1 = temp60_1 == 0
                            cond:154_1 = temp60_1 != 0
                            cond:176_1 = temp60_1 == 0
                            cond:177_1 = temp60_1 != 0
                            
                            if (temp60_1 == 0)
                            label_140235695:
                                
                                if (not(cond:153_1))
                                label_140235697:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                                    
                                    if (cond:177_1)
                                        goto label_1402356e0
                                    
                                    goto label_14023569f
                            else
                            label_1402356d5:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                                
                                if (cond:154_1)
                                    goto label_140235697
                            
                            bool cond:215_1
                            bool cond:216_1
                            bool cond:243_1
                            bool cond:244_1
                            
                            if (not(cond:176_1))
                            label_1402356e0:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                                char temp83_1 = temp0_1693 & 4
                                cond:215_1 = temp83_1 == 0
                                cond:216_1 = temp83_1 != 0
                                cond:243_1 = temp83_1 == 0
                                cond:244_1 = temp83_1 != 0
                                
                                if (temp83_1 != 0)
                                    goto label_1402356a4
                                
                                goto label_1402356eb
                            
                        label_14023569f:
                            char temp82_1 = temp0_1693 & 4
                            cond:215_1 = temp82_1 == 0
                            cond:216_1 = temp82_1 != 0
                            cond:243_1 = temp82_1 == 0
                            cond:244_1 = temp82_1 != 0
                            
                            if (temp82_1 == 0)
                            label_1402356eb:
                                
                                if (not(cond:215_1))
                                label_1402356ed:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                                    
                                    if (cond:244_1)
                                        goto label_1402356af
                                    
                                    goto label_1402356f5
                            else
                            label_1402356a4:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                                
                                if (cond:216_1)
                                    goto label_1402356ed
                            
                            bool cond:283_1
                            bool cond:284_1
                            bool cond:305_1
                            bool cond:306_1
                            
                            if (not(cond:243_1))
                            label_1402356af:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                                char temp109_1 = temp0_1693 & 8
                                cond:283_1 = temp109_1 == 0
                                cond:284_1 = temp109_1 != 0
                                cond:305_1 = temp109_1 == 0
                                cond:306_1 = temp109_1 == 0
                                
                                if (temp109_1 != 0)
                                    goto label_1402356fa
                                
                                goto label_1402356ba
                            
                        label_1402356f5:
                            char temp108_1 = temp0_1693 & 8
                            cond:283_1 = temp108_1 == 0
                            cond:284_1 = temp108_1 != 0
                            cond:305_1 = temp108_1 == 0
                            cond:306_1 = temp108_1 == 0
                            
                            if (temp108_1 != 0)
                            label_1402356fa:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                                
                                if (cond:284_1)
                                    goto label_1402356bc
                                
                                goto label_140235703
                            
                        label_1402356ba:
                            
                            if (cond:283_1)
                            label_140235703:
                                
                                if (not(cond:305_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                            else
                            label_1402356bc:
                                arg5 = _mm_blend_ps(arg5, zx.o(0), 8)
                                
                                if (not(cond:306_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
            
            arg12 = _mm_cmpeq_epi32(arg12, var_4a8_2) & not.o(zmm14)
            zmm14 = _mm_slli_epi32(arg12, 0x1f)
            char temp0_1708 = _mm_movemask_ps(zmm14)
            
            if (temp0_1708 == 0)
                arg10 = var_458_4
                rcx_93 = _mm_movemask_ps(_mm_and_ps(var_428_3, arg10))
                
                if (rcx_93 != 0)
                    goto label_140233207
            else
                zmm0 = _mm_mullo_epi32(var_4a8_2, zmm12)
                zmm1 = _mm_cvtepi32_epi64(zmm0.q)
                zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
                int32_t var_4a8_4[0x4] = zmm0
                zmm0 = __paddq_xmmdq_memdq(zmm0, var_4f8_5)
                int32_t var_5b8_2[0x4] = zmm1
                float var_4d8_3[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_5a8_5), arg11)
                uint128_t var_528_3 = __paddq_xmmdq_memdq(zmm0, var_598_5)
                arg10 &= arg12
                uint128_t var_518_7 = arg5
                int32_t var_538_5[0x4] = arg6
                
                if (_mm_movemask_ps(_mm_slli_epi32(arg10, 0x1f)) == 0)
                    arg6 = var_588_1
                else
                    arg6 = var_588_1
                    zmm4 = zx.o(0)
                    arg11 = _mm_cmpeq_epi32(data_143442c60 & arg6, zx.o(0))
                    zmm3 = _mm_slli_epi32(arg10 & arg11, 0x1f)
                    char temp0_1721 = _mm_movemask_ps(zmm3)
                    
                    if (temp0_1721 != 0)
                        int32_t var_558_5[0x4] = arg10
                        zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                        int32_t temp0_1723[0x4] = __paddq_xmmdq_memdq(var_4b8_3, var_4f8_5)
                        arg7 = __paddq_xmmdq_memdq(var_478_2, var_5a8_5)
                        zmm2 = data_1434426c0
                        arg7 = __paddq_xmmdq_memdq(arg7, var_5b8_2)
                        int32_t temp0_1727[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1723, var_4a8_4), zmm2)
                        arg7 = _mm_add_epi64(arg7, zmm2)
                        zmm1 = _mm_shuffle_epi32(zmm3, 0x50)
                        arg5 = _mm_blendv_ps(zx.o(0), arg7, zmm1)
                        zmm3 = _mm_shuffle_epi32(zmm3, 0xfa)
                        float temp0_1732[0x4] = _mm_blendv_ps(zx.o(0), temp0_1727, zmm3)
                        int64_t rax_381 = _mm_extract_epi64(arg5, 1)
                        void* rbp_48 = arg13 + rax_381
                        arg10 = *(arg13 + rax_381)
                        int64_t rax_382 = temp0_1732[0].q
                        int64_t rsi_20 = _mm_extract_epi64(temp0_1732, 1)
                        void* rdi_30 = arg13 + rax_382
                        float temp0_1733[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        int32_t var_468_4 = (*(arg13 + rax_382)).d
                        int32_t temp0_1734[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm3)
                        int32_t var_488_2 = (*(arg13 + rsi_20)).d
                        void* rbx_29 = arg5.q + arg13
                        var_568_1 = *(temp0_1733[0].q + rbx_29)
                        arg7 = *(_mm_extract_epi64(temp0_1733, 1) + rbp_48)
                        arg9 = *(temp0_1734[0].q + rdi_30)
                        void* rsi_21 = arg13 + rsi_20
                        int32_t var_4c8_3 = (*(_mm_extract_epi64(temp0_1734, 1) + rsi_21)).d
                        arg5 = data_1434426e0
                        int32_t temp0_1735[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        zmm4 = _mm_blendv_ps(zx.o(0), arg5, zmm3)
                        zmm12 = *(temp0_1735[0].q + rbx_29)
                        zmm3 = *(_mm_extract_epi64(temp0_1735, 1) + rbp_48)
                        float (* rax_389)[0x4] = zmm4[0].q
                        uint128_t* rbp_49 = _mm_extract_epi64(zmm4, 1)
                        zmm1 = *(rax_389 + rdi_30)
                        zmm0 = *(rbp_49 + rsi_21)
                        bool cond:72_1
                        bool cond:73_1
                        bool cond:80_1
                        bool cond:81_1
                        
                        if ((temp0_1721 & 1) == 0)
                            char temp22_1 = temp0_1721 & 2
                            cond:72_1 = temp22_1 != 0
                            cond:73_1 = temp22_1 == 0
                            cond:80_1 = temp22_1 != 0
                            cond:81_1 = temp22_1 == 0
                            
                            if (temp22_1 == 0)
                                goto label_1402359f0
                            
                            goto label_140235959
                        
                        zmm2 = *rbx_29
                        char temp21_1 = temp0_1721 & 2
                        cond:72_1 = temp21_1 != 0
                        cond:73_1 = temp21_1 == 0
                        cond:80_1 = temp21_1 != 0
                        cond:81_1 = temp21_1 == 0
                        
                        if (temp21_1 == 0)
                        label_1402359f0:
                            zmm4 = temp0_1108
                            arg5 = var_518_7
                            
                            if (cond:73_1)
                                goto label_140235974
                            
                            goto label_140235a0f
                        
                    label_140235959:
                        zmm2 = _mm_insert_ps(zmm2, arg10, 0x10)
                        zmm4 = temp0_1108
                        arg5 = var_518_7
                        
                        if (not(cond:72_1))
                        label_140235974:
                            
                            if (cond:81_1)
                                goto label_140235a1a
                            
                            goto label_14023597a
                        
                    label_140235a0f:
                        var_568_1 = _mm_insert_ps(var_568_1, arg7, 0x10)
                        bool cond:115_1
                        bool cond:116_1
                        bool cond:134_1
                        
                        if (not(cond:80_1))
                        label_140235a1a:
                            char temp38_1 = temp0_1721 & 4
                            cond:115_1 = temp38_1 == 0
                            cond:116_1 = temp38_1 == 0
                            cond:134_1 = temp38_1 == 0
                            arg6 = var_588_1
                            arg7 = zmm4
                            
                            if (temp38_1 == 0)
                                goto label_140235994
                            
                            goto label_140235a30
                        
                    label_14023597a:
                        zmm12 = _mm_insert_ps(zmm12, zmm3, 0x10)
                        char temp37_1 = temp0_1721 & 4
                        cond:115_1 = temp37_1 == 0
                        cond:116_1 = temp37_1 == 0
                        cond:134_1 = temp37_1 == 0
                        arg6 = var_588_1
                        arg7 = zmm4
                        
                        if (temp37_1 != 0)
                        label_140235a30:
                            zmm4 = __insertps_xmmps_memd_immb(zmm2, var_468_4, 0x20)
                            arg10 = var_558_5
                            
                            if (not(cond:115_1))
                                var_568_1 = _mm_insert_ps(var_568_1, arg9, 0x20)
                        else
                        label_140235994:
                            arg10 = var_558_5
                            zmm4 = zmm2
                            
                            if (not(cond:116_1))
                                var_568_1 = _mm_insert_ps(var_568_1, arg9, 0x20)
                        
                        arg9 = var_578_4
                        bool cond:174_1
                        bool cond:175_1
                        bool cond:193_1
                        bool cond:194_1
                        
                        if (not(cond:134_1))
                            zmm12 = _mm_insert_ps(zmm12, zmm1, 0x20)
                            char temp59_1 = temp0_1721 & 8
                            cond:174_1 = temp59_1 == 0
                            cond:175_1 = temp59_1 != 0
                            cond:193_1 = temp59_1 == 0
                            cond:194_1 = temp59_1 != 0
                            
                            if (temp59_1 != 0)
                                goto label_140235a8c
                            
                            goto label_140235a6c
                        
                        char temp58_1 = temp0_1721 & 8
                        cond:174_1 = temp58_1 == 0
                        cond:175_1 = temp58_1 != 0
                        cond:193_1 = temp58_1 == 0
                        cond:194_1 = temp58_1 != 0
                        
                        if (temp58_1 != 0)
                        label_140235a8c:
                            zmm4 = __insertps_xmmps_memd_immb(zmm4, var_488_2, 0x30)
                            
                            if (cond:175_1)
                                goto label_140235a7e
                            
                            goto label_140235a99
                        
                    label_140235a6c:
                        
                        if (cond:174_1)
                        label_140235a99:
                            
                            if (not(cond:193_1))
                                zmm12 = _mm_insert_ps(zmm12, zmm0, 0x30)
                        else
                        label_140235a7e:
                            var_568_1 = __insertps_xmmps_memd_immb(var_568_1, var_4c8_3, 0x30)
                            
                            if (cond:194_1)
                                zmm12 = _mm_insert_ps(zmm12, zmm0, 0x30)
                    
                    arg11 &= not.o(arg10)
                    zmm3 = _mm_slli_epi32(arg11, 0x1f)
                    char temp0_1749 = _mm_movemask_ps(zmm3)
                    
                    if (temp0_1749 == 0)
                        arg11 = var_5d8_1
                    else
                        arg7 = zmm4
                        float var_558_6[0x4] = zmm12
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_4e8_2, 0x1f), 0x1f)
                        zmm3 = _mm_srai_epi32(zmm3, 0x1f) & zmm1
                        
                        if (_mm_movemask_ps(zmm3) == 0)
                            arg10 = var_4d8_3
                            zmm12 = var_528_3
                        else
                            zmm2 = data_1434426c0
                            zmm12 = var_528_3
                            arg5 = _mm_add_epi64(zmm12, zmm2)
                            arg10 = var_4d8_3
                            int32_t temp0_1755[0x4] = _mm_add_epi64(arg10, zmm2)
                            zmm4 = _mm_unpacklo_ps(zmm3, zmm3[0].q)
                            arg10 = _mm_blendv_ps(arg10, temp0_1755, zmm4)
                            float temp0_1758[0x4] = _mm_unpackhi_ps(zmm3, zmm3)
                            zmm12 = _mm_blendv_ps(zmm12, arg5, temp0_1758)
                            arg5 = __paddq_xmmdq_memdq(var_4b8_3, var_4f8_5)
                            int32_t temp0_1762[0x4] = __paddq_xmmdq_memdq(
                                __paddq_xmmdq_memdq(var_478_2, var_5a8_5), var_5b8_2)
                            arg5 = _mm_add_epi64(__paddq_xmmdq_memdq(arg5, var_4a8_4), zmm2)
                            zmm2 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_1762, zmm2), zmm4)
                            int32_t temp0_1767[0x4] = _mm_blendv_ps(zx.o(0), arg5, temp0_1758)
                            zmm4 = *(arg13 + zmm2.q)
                            int64_t rax_392 = _mm_extract_epi64(zmm2, 1)
                            int64_t rbp_50 = temp0_1767[0].q
                            int64_t rbx_30 = _mm_extract_epi64(temp0_1767, 1)
                            zmm4 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm4, *(arg13 + rax_392), 0x10), 
                                    *(arg13 + rbp_50), 0x20), 
                                *(arg13 + rbx_30), 0x30)
                        
                        zmm0 = zmm1
                        float temp0_1771[0x4] = _mm_blendv_ps(zx.o(0), zmm4, zmm0)
                        
                        if ((temp0_1749 & 1) != 0)
                            arg7 = _mm_blend_ps(arg7, temp0_1771, 1)
                            arg5 = var_518_7
                            
                            if ((temp0_1749 & 2) != 0)
                                goto label_140235c27
                            
                            goto label_140235c05
                        
                        arg5 = var_518_7
                        
                        if ((temp0_1749 & 2) != 0)
                        label_140235c27:
                            arg7 = _mm_blend_ps(arg7, temp0_1771, 2)
                            
                            if ((temp0_1749 & 4) != 0)
                                goto label_140235c0b
                            
                            goto label_140235c33
                        
                    label_140235c05:
                        
                        if ((temp0_1749 & 4) == 0)
                        label_140235c33:
                            
                            if ((temp0_1749 & 8) != 0)
                                arg7 = _mm_blend_ps(arg7, temp0_1771, 8)
                        else
                        label_140235c0b:
                            arg7 = _mm_blend_ps(arg7, temp0_1771, 4)
                            
                            if ((temp0_1749 & 8) != 0)
                                arg7 = _mm_blend_ps(arg7, temp0_1771, 8)
                        
                        zmm4 = data_143442c40
                        zmm1 = var_588_1 & zmm4
                        zmm4 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm4, zmm1) & arg11, 0x1f)
                        char temp0_1778 = _mm_movemask_ps(zmm4)
                        
                        if (temp0_1778 != 0)
                            int32_t temp0_1779[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                            zmm2 = data_1434426c0
                            arg5 = _mm_add_epi64(zmm12, zmm2)
                            float temp0_1783[0x4] = _mm_blendv_ps(arg10, 
                                _mm_add_epi64(zmm2, arg10), _mm_shuffle_epi32(temp0_1779, 0x50))
                            zmm0 = _mm_shuffle_epi32(temp0_1779, 0xfa)
                            zmm4 = _mm_blendv_ps(zmm12, arg5, zmm0)
                            
                            if ((temp0_1778 & 1) == 0)
                                if ((temp0_1778 & 2) != 0)
                                    goto label_140236061
                                
                                goto label_140235cb4
                            
                            zmm0 = *arg10[0].q
                            
                            if ((temp0_1778 & 2) != 0)
                            label_140236061:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg10, 1), 0x10)
                                arg5 = var_518_7
                                
                                if ((temp0_1778 & 4) == 0)
                                    goto label_140235cc5
                                
                                goto label_14023607d
                            
                        label_140235cb4:
                            arg5 = var_518_7
                            
                            if ((temp0_1778 & 4) != 0)
                            label_14023607d:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm12[0].q, 0x20)
                                
                                if ((temp0_1778 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            else
                            label_140235cc5:
                                
                                if ((temp0_1778 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            
                            arg10 = temp0_1783
                            zmm12 = zmm4
                        
                        zmm4 = arg7
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                        
                        if ((temp0_1749 & 1) != 0)
                            var_568_1 = _mm_blend_epi16(var_568_1, zmm1, 3)
                            
                            if ((temp0_1749 & 2) != 0)
                                goto label_140235d40
                            
                            goto label_140235d0e
                        
                        if ((temp0_1749 & 2) != 0)
                        label_140235d40:
                            var_568_1 = _mm_blend_epi16(var_568_1, zmm1, 0xc)
                            
                            if ((temp0_1749 & 4) != 0)
                                goto label_140235d20
                            
                            goto label_140235d4c
                        
                    label_140235d0e:
                        
                        if ((temp0_1749 & 4) == 0)
                        label_140235d4c:
                            
                            if ((temp0_1749 & 8) != 0)
                                var_568_1 = _mm_blend_epi16(var_568_1, zmm1, 0xc0)
                        else
                        label_140235d20:
                            var_568_1 = _mm_blend_epi16(var_568_1, zmm1, 0x30)
                            
                            if ((temp0_1749 & 8) != 0)
                                var_568_1 = _mm_blend_epi16(var_568_1, zmm1, 0xc0)
                        
                        zmm1 = data_143442c50
                        zmm0 = var_588_1 & zmm1
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm0)
                        char temp0_1794 = _mm_movemask_ps(_mm_slli_epi32(arg11 & zmm1, 0x1f))
                        
                        if (temp0_1794 == 0)
                            arg7 = temp0_1108
                            arg6 = var_588_1
                            arg11 = var_5d8_1
                        else
                            arg11 = var_5d8_1
                            
                            if ((temp0_1794 & 1) == 0)
                                if ((temp0_1794 & 2) != 0)
                                    goto label_1402360aa
                                
                                goto label_140235da8
                            
                            zmm1 = *arg10[0].q
                            
                            if ((temp0_1794 & 2) != 0)
                            label_1402360aa:
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(arg10, 1), 0x10)
                                arg6 = var_588_1
                                
                                if ((temp0_1794 & 4) == 0)
                                    goto label_140235db7
                                
                                goto label_1402360c4
                            
                        label_140235da8:
                            arg6 = var_588_1
                            
                            if ((temp0_1794 & 4) != 0)
                            label_1402360c4:
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, *zmm12[0].q, 0x20)
                                
                                if ((temp0_1794 & 8) != 0)
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            else
                            label_140235db7:
                                
                                if ((temp0_1794 & 8) != 0)
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            
                            arg7 = temp0_1108
                        
                        zmm12 = var_558_6
                        zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_1749 & 1) != 0)
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 3)
                            
                            if ((temp0_1749 & 2) != 0)
                                goto label_140235e27
                            
                            goto label_140235e0c
                        
                        if ((temp0_1749 & 2) != 0)
                        label_140235e27:
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc)
                            
                            if ((temp0_1749 & 4) != 0)
                                goto label_140235e12
                            
                            goto label_140235e34
                        
                    label_140235e0c:
                        
                        if ((temp0_1749 & 4) == 0)
                        label_140235e34:
                            
                            if ((temp0_1749 & 8) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                        else
                        label_140235e12:
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 0x30)
                            
                            if ((temp0_1749 & 8) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                
                if (_mm_movemask_ps(_mm_slli_epi32(arg12 & var_448_4, 0x1f)) == 0)
                    arg10 = var_458_4
                    arg11 = var_428_3
                    zmm3 = var_538_5
                    zmm14 = var_568_1
                else
                    float var_548_6[0x4] = arg12
                    arg12 = _mm_srai_epi32(_mm_slli_epi32(arg12 & arg7, 0x1f), 0x1f)
                    char temp0_1805 = _mm_movemask_ps(arg12)
                    
                    if (temp0_1805 == 0)
                        arg12 = zmm4
                        arg10 = var_458_4
                        arg11 = var_428_3
                        zmm3 = var_538_5
                        zmm2 = var_548_6
                        zmm14 = var_568_1
                    else
                        int32_t var_4c8_4[0x4] = zmm4
                        zmm4 = _mm_srai_epi32(_mm_slli_epi32(var_4e8_2, 0x1f), 0x1f) & arg7
                        zmm14 = _mm_srai_epi32(zmm14, 0x1f) & zmm4
                        float var_488_3[0x4] = zx.o(0)
                        uint32_t temp0_1809 = _mm_movemask_ps(zmm14)
                        uint128_t var_498_5
                        int32_t var_468_5[0x4]
                        
                        if (temp0_1809 == 0)
                            var_498_5 = zx.o(0)
                            var_468_5 = zx.o(0)
                            arg10 = var_458_4
                            arg11 = var_428_3
                            zmm14 = var_568_1
                        else
                            zmm1 = data_1434426c0
                            arg6 = var_598_5
                            zmm2 = _mm_add_epi64(arg6, zmm1)
                            zmm3 = _mm_add_epi64(arg11, zmm1)
                            float temp0_1812[0x4] = _mm_unpacklo_ps(zmm14, zmm14.q)
                            arg5 = _mm_blendv_ps(arg11, zmm3, temp0_1812)
                            zmm14 = _mm_unpackhi_ps(zmm14, zmm14)
                            zmm0 = zmm14
                            float temp0_1815[0x4] = _mm_blendv_ps(arg6, zmm2, zmm0)
                            char rbx_31 = temp0_1809.b
                            
                            if ((rbx_31 & 1) == 0)
                                if ((rbx_31 & 2) != 0)
                                    goto label_1402360f1
                                
                                goto label_140235f22
                            
                            zmm0 = *arg11[0].q
                            
                            if ((rbx_31 & 2) != 0)
                            label_1402360f1:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg11, 1), 0x10)
                                
                                if ((rbx_31 & 4) == 0)
                                    goto label_140235f2b
                                
                                goto label_14023610b
                            
                        label_140235f22:
                            
                            if ((rbx_31 & 4) == 0)
                            label_140235f2b:
                                
                                if ((rbx_31 & 8) != 0)
                                    goto label_140236127
                                
                                goto label_140235f34
                            
                        label_14023610b:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_598_5.q, 0x20)
                            char rdi_31
                            
                            if ((rbx_31 & 8) != 0)
                            label_140236127:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_598_5, 1), 0x30)
                                rdi_31 = _mm_movemask_ps(zmm4)
                                zmm2 = zx.o(0)
                                
                                if ((rdi_31 & 1) != 0)
                                    goto label_140235f45
                                
                                goto label_14023613e
                            
                        label_140235f34:
                            rdi_31 = _mm_movemask_ps(zmm4)
                            zmm2 = zx.o(0)
                            
                            if ((rdi_31 & 1) != 0)
                            label_140235f45:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 3)
                                
                                if ((rdi_31 & 2) != 0)
                                    goto label_140236148
                                
                                goto label_140235f55
                            
                        label_14023613e:
                            
                            if ((rdi_31 & 2) != 0)
                            label_140236148:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc)
                                
                                if ((rdi_31 & 4) != 0)
                                    goto label_140235f5f
                                
                                goto label_140236158
                            
                        label_140235f55:
                            
                            if ((rdi_31 & 4) == 0)
                            label_140236158:
                                
                                if ((rdi_31 & 8) != 0)
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc0)
                            else
                            label_140235f5f:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 0x30)
                                
                                if ((rdi_31 & 8) != 0)
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc0)
                            
                            var_498_5 = zmm2
                            zmm2 = _mm_add_epi64(temp0_1815, zmm1)
                            var_5d8_1 = _mm_blendv_ps(arg5, _mm_add_epi64(zmm1, arg5), temp0_1812)
                            zmm0 = zmm14
                            var_598_5 = _mm_blendv_ps(temp0_1815, zmm2, zmm0)
                            
                            if ((rbx_31 & 1) != 0)
                                zmm0 = *arg5.q
                            
                            arg10 = var_458_4
                            arg11 = var_428_3
                            arg6 = var_588_1
                            zmm14 = var_568_1
                            
                            if ((rbx_31 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg5, 1), 0x10)
                                
                                if ((rbx_31 & 4) != 0)
                                label_140236214:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1815[0].q, 0x20)
                                    
                                    if ((rbx_31 & 8) == 0)
                                        goto label_1402361d4
                                    
                                    goto label_140236226
                            else if ((rbx_31 & 4) != 0)
                                goto label_140236214
                            
                            if ((rbx_31 & 8) == 0)
                            label_1402361d4:
                                zmm1 = zx.o(0)
                                
                                if ((rdi_31 & 1) == 0)
                                    goto label_140236235
                                
                                goto label_1402361dd
                            
                        label_140236226:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_1815, 1), 0x30)
                            zmm1 = zx.o(0)
                            
                            if ((rdi_31 & 1) == 0)
                            label_140236235:
                                
                                if ((rdi_31 & 2) == 0)
                                    goto label_1402361e9
                                
                                goto label_14023623b
                            
                        label_1402361dd:
                            zmm1 = _mm_blend_ps(zmm1, zmm0, 1)
                            
                            if ((rdi_31 & 2) == 0)
                            label_1402361e9:
                                
                                if ((rdi_31 & 4) == 0)
                                    goto label_140236247
                                
                                goto label_1402361ef
                            
                        label_14023623b:
                            zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                            
                            if ((rdi_31 & 4) != 0)
                            label_1402361ef:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 4)
                                
                                if ((rdi_31 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                            label_140236247:
                                
                                if ((rdi_31 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            
                            var_468_5 = zmm1
                        
                        zmm0 = data_143442c40
                        zmm4 = _mm_cmpeq_epi32(arg6 & zmm0, zmm0) & arg7
                        zmm2 = _mm_slli_epi32(var_548_6 & zmm4, 0x1f)
                        char temp0_1844 = _mm_movemask_ps(zmm2)
                        float var_558_7[0x4] = zmm12
                        
                        if (temp0_1844 == 0)
                            arg9 = zx.o(0)
                        else
                            zmm12 = arg7
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm3 = data_1434426c0
                            arg6 = var_598_5
                            zmm1 = _mm_add_epi64(arg6, zmm3)
                            arg5 = var_5d8_1
                            arg7 = _mm_add_epi64(arg5, zmm3)
                            arg9 = _mm_shuffle_epi32(zmm2, 0x50)
                            arg5 = _mm_blendv_ps(arg5, arg7, arg9)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                            zmm0 = zmm2
                            float temp0_1851[0x4] = _mm_blendv_ps(arg6, zmm1, zmm0)
                            
                            if ((temp0_1844 & 1) == 0)
                                if ((temp0_1844 & 2) != 0)
                                    goto label_14023636b
                                
                                goto label_1402362f5
                            
                            zmm0 = *var_5d8_1.q
                            
                            if ((temp0_1844 & 2) != 0)
                            label_14023636b:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5d8_1, 1), 0x10)
                                
                                if ((temp0_1844 & 4) == 0)
                                    goto label_1402362fa
                                
                                goto label_140236381
                            
                        label_1402362f5:
                            
                            if ((temp0_1844 & 4) == 0)
                            label_1402362fa:
                                
                                if ((temp0_1844 & 8) != 0)
                                    goto label_14023639d
                                
                                goto label_140236303
                            
                        label_140236381:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_598_5[0].q, 0x20)
                            char rdi_32
                            
                            if ((temp0_1844 & 8) != 0)
                            label_14023639d:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_598_5, 1), 0x30)
                                rdi_32 = _mm_movemask_ps(zmm4)
                                zmm1 = zx.o(0)
                                
                                if ((rdi_32 & 1) != 0)
                                    goto label_140236314
                                
                                goto label_1402363b4
                            
                        label_140236303:
                            rdi_32 = _mm_movemask_ps(zmm4)
                            zmm1 = zx.o(0)
                            
                            if ((rdi_32 & 1) != 0)
                            label_140236314:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 3)
                                
                                if ((rdi_32 & 2) != 0)
                                    goto label_1402363be
                                
                                goto label_140236324
                            
                        label_1402363b4:
                            
                            if ((rdi_32 & 2) != 0)
                            label_1402363be:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc)
                                
                                if ((rdi_32 & 4) != 0)
                                    goto label_14023632e
                                
                                goto label_1402363ce
                            
                        label_140236324:
                            
                            if ((rdi_32 & 4) == 0)
                            label_1402363ce:
                                
                                if ((rdi_32 & 8) != 0)
                                    zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                            else
                            label_14023632e:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0x30)
                                
                                if ((rdi_32 & 8) != 0)
                                    zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                            
                            var_488_3 = zmm1
                            zmm1 = _mm_add_epi64(temp0_1851, zmm3)
                            var_5d8_1 = _mm_blendv_ps(arg5, _mm_add_epi64(zmm3, arg5), arg9)
                            zmm0 = zmm2
                            var_598_5 = _mm_blendv_ps(temp0_1851, zmm1, zmm0)
                            
                            if ((temp0_1844 & 1) == 0)
                                if ((temp0_1844 & 2) != 0)
                                    goto label_1402365ed
                                
                                goto label_140236422
                            
                            zmm0 = *arg5.q
                            
                            if ((temp0_1844 & 2) != 0)
                            label_1402365ed:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg5, 1), 0x10)
                                
                                if ((temp0_1844 & 4) == 0)
                                    goto label_14023642b
                                
                                goto label_140236601
                            
                        label_140236422:
                            
                            if ((temp0_1844 & 4) != 0)
                            label_140236601:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1851[0].q, 0x20)
                                
                                if ((temp0_1844 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_1851, 1), 0x30)
                            else
                            label_14023642b:
                                
                                if ((temp0_1844 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_1851, 1), 0x30)
                            
                            arg6 = var_588_1
                            arg7 = zmm12
                            arg9 = zx.o(0)
                            
                            if ((rdi_32 & 1) != 0)
                                arg9 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rdi_32 & 2) != 0)
                                    goto label_14023647b
                                
                                goto label_140236460
                            
                            if ((rdi_32 & 2) != 0)
                            label_14023647b:
                                arg9 = _mm_blend_epi16(arg9, zmm0, 0xc)
                                
                                if ((rdi_32 & 4) != 0)
                                    goto label_140236466
                                
                                goto label_140236488
                            
                        label_140236460:
                            
                            if ((rdi_32 & 4) == 0)
                            label_140236488:
                                
                                if ((rdi_32 & 8) != 0)
                                    arg9 = _mm_blend_epi16(arg9, zmm0, 0xc0)
                            else
                            label_140236466:
                                arg9 = _mm_blend_epi16(arg9, zmm0, 0x30)
                                
                                if ((rdi_32 & 8) != 0)
                                    arg9 = _mm_blend_epi16(arg9, zmm0, 0xc0)
                        
                        zmm0 = data_143442c50
                        zmm12 = arg7
                        zmm3 = _mm_cmpeq_epi32(arg6 & zmm0, zmm0) & arg7
                        zmm4 = _mm_slli_epi32(var_548_6 & zmm3, 0x1f)
                        char temp0_1872 = _mm_movemask_ps(zmm4)
                        zmm2 = zx.o(0)
                        arg5 = zx.o(0)
                        
                        if (temp0_1872 != 0)
                            int32_t temp0_1873[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                            zmm1 = data_1434426c0
                            zmm12 = var_598_5
                            zmm2 = _mm_add_epi64(zmm12, zmm1)
                            arg5 = var_5d8_1
                            arg5 = _mm_blendv_ps(arg5, _mm_add_epi64(zmm1, arg5), 
                                _mm_shuffle_epi32(temp0_1873, 0x50))
                            zmm0 = _mm_shuffle_epi32(temp0_1873, 0xfa)
                            float temp0_1879[0x4] = _mm_blendv_ps(zmm12, zmm2, zmm0)
                            
                            if ((temp0_1872 & 1) == 0)
                                if ((temp0_1872 & 2) != 0)
                                    goto label_140236638
                                
                                goto label_140236529
                            
                            zmm0 = *var_5d8_1.q
                            
                            if ((temp0_1872 & 2) != 0)
                            label_140236638:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5d8_1, 1), 0x10)
                                
                                if ((temp0_1872 & 4) == 0)
                                    goto label_140236532
                                
                                goto label_140236652
                            
                        label_140236529:
                            
                            if ((temp0_1872 & 4) == 0)
                            label_140236532:
                                
                                if ((temp0_1872 & 8) != 0)
                                    goto label_14023666e
                                
                                goto label_14023653b
                            
                        label_140236652:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_598_5[0].q, 0x20)
                            char rbx_33
                            
                            if ((temp0_1872 & 8) != 0)
                            label_14023666e:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_598_5, 1), 0x30)
                                rbx_33 = _mm_movemask_ps(zmm3)
                                zmm2 = zx.o(0)
                                
                                if ((rbx_33 & 1) != 0)
                                    goto label_14023654a
                                
                                goto label_140236683
                            
                        label_14023653b:
                            rbx_33 = _mm_movemask_ps(zmm3)
                            zmm2 = zx.o(0)
                            
                            if ((rbx_33 & 1) != 0)
                            label_14023654a:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 1)
                                
                                if ((rbx_33 & 2) != 0)
                                    goto label_14023668c
                                
                                goto label_140236559
                            
                        label_140236683:
                            
                            if ((rbx_33 & 2) != 0)
                            label_14023668c:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 2)
                                
                                if ((rbx_33 & 4) != 0)
                                    goto label_140236562
                                
                                goto label_14023669b
                            
                        label_140236559:
                            
                            if ((rbx_33 & 4) != 0)
                            label_140236562:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 4)
                                
                                if ((rbx_33 & 8) != 0)
                                    goto label_1402366a4
                                
                                goto label_140236571
                            
                        label_14023669b:
                            
                            if ((rbx_33 & 8) != 0)
                            label_1402366a4:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                                
                                if ((temp0_1872 & 1) == 0)
                                    goto label_14023657a
                                
                                goto label_1402366b8
                            
                        label_140236571:
                            
                            if ((temp0_1872 & 1) == 0)
                            label_14023657a:
                                
                                if ((temp0_1872 & 2) != 0)
                                    goto label_1402366cc
                                
                                goto label_140236583
                            
                        label_1402366b8:
                            zmm0 = *arg5.q
                            
                            if ((temp0_1872 & 2) != 0)
                            label_1402366cc:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg5, 1), 0x10)
                                
                                if ((temp0_1872 & 4) == 0)
                                    goto label_14023658c
                                
                                goto label_1402366e0
                            
                        label_140236583:
                            
                            if ((temp0_1872 & 4) == 0)
                            label_14023658c:
                                
                                if ((temp0_1872 & 8) != 0)
                                    goto label_1402366f6
                                
                                goto label_140236595
                            
                        label_1402366e0:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1879[0].q, 0x20)
                            
                            if ((temp0_1872 & 8) != 0)
                            label_1402366f6:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_1879, 1), 0x30)
                                zmm12 = temp0_1108
                                arg5 = zx.o(0)
                                
                                if ((rbx_33 & 1) != 0)
                                    goto label_1402365a8
                                
                                goto label_14023670f
                            
                        label_140236595:
                            zmm12 = temp0_1108
                            arg5 = zx.o(0)
                            
                            if ((rbx_33 & 1) != 0)
                            label_1402365a8:
                                arg5 = _mm_blend_ps(arg5, zmm0, 1)
                                
                                if ((rbx_33 & 2) != 0)
                                    goto label_140236718
                                
                                goto label_1402365b7
                            
                        label_14023670f:
                            
                            if ((rbx_33 & 2) != 0)
                            label_140236718:
                                arg5 = _mm_blend_ps(arg5, zmm0, 2)
                                
                                if ((rbx_33 & 4) != 0)
                                    goto label_1402365c0
                                
                                goto label_140236727
                            
                        label_1402365b7:
                            
                            if ((rbx_33 & 4) == 0)
                            label_140236727:
                                
                                if ((rbx_33 & 8) != 0)
                                    arg5 = _mm_blend_ps(arg5, zmm0, 8)
                            else
                            label_1402365c0:
                                arg5 = _mm_blend_ps(arg5, zmm0, 4)
                                
                                if ((rbx_33 & 8) != 0)
                                    arg5 = _mm_blend_ps(arg5, zmm0, 8)
                        
                        zmm3 = __paddq_xmmdq_memdq(var_4b8_3, var_4f8_5)
                        int32_t temp0_1899[0x4] = __paddq_xmmdq_memdq(var_478_2, var_5a8_5)
                        zmm0 = data_1434426c0
                        int32_t temp0_1900[0x4] = __paddq_xmmdq_memdq(temp0_1899, var_5b8_2)
                        zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm3, var_4a8_4), zmm0)
                        float temp0_1905[0x4] = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(temp0_1900, zmm0), _mm_shuffle_epi32(arg12, 0x50))
                        float temp0_1907[0x4] =
                            _mm_blendv_ps(zx.o(0), zmm3, _mm_shuffle_epi32(arg12, 0xfa))
                        int64_t rax_432 = temp0_1905[0].q
                        int64_t rcx_129 = _mm_extract_epi64(temp0_1905, 1)
                        int64_t rbx_34 = _mm_extract_epi64(temp0_1907, 1)
                        zmm0 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg13 + rax_432)), 
                                    *(arg13 + rcx_129), 1), 
                                *(arg13 + temp0_1907[0].q), 2), 
                            *(arg13 + rbx_34), 3)
                        zmm1 = _mm_srli_epi32(zmm0, 0x15)
                        zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm4 = _mm_add_ps(var_498_5, 
                            _mm_mul_ps(var_468_5, 
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0)))
                        zmm0 = data_143442440
                        float temp0_1919[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                        arg6 = data_143442690
                        float temp0_1921[0x4] = _mm_mul_ps(arg9, _mm_div_ps(temp0_1919, arg6))
                        zmm0 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm0)), arg6)
                        char temp57_1 = temp0_1805 & 1
                        
                        if (temp57_1 == 0)
                            arg6 = var_588_1
                            zmm3 = var_538_5
                            arg7 = zmm12
                            arg12 = var_4c8_4
                        else
                            arg12 = _mm_blend_ps(var_4c8_4, zmm4, 1)
                            arg6 = var_588_1
                            zmm3 = var_538_5
                            arg7 = zmm12
                        
                        arg5 = _mm_mul_ps(arg5, zmm0)
                        float temp0_1927[0x4] = _mm_add_ps(var_488_3, temp0_1921)
                        zmm12 = var_558_7
                        
                        if (temp57_1 != 0)
                            zmm14 = _mm_blend_ps(zmm14, temp0_1927, 1)
                            arg9 = var_578_4
                            zmm2 = _mm_add_ps(zmm2, arg5)
                            
                            if (temp57_1 != 0)
                                goto label_140236ac1
                            
                            goto label_1402368b0
                        
                        arg9 = var_578_4
                        zmm2 = _mm_add_ps(zmm2, arg5)
                        bool cond:241_1
                        bool cond:242_1
                        bool cond:259_1
                        bool cond:260_1
                        
                        if (temp57_1 != 0)
                        label_140236ac1:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 1)
                            arg5 = var_518_7
                            char temp91_1 = temp0_1805 & 2
                            cond:241_1 = temp91_1 == 0
                            cond:242_1 = temp91_1 != 0
                            cond:259_1 = temp91_1 == 0
                            cond:260_1 = temp91_1 != 0
                            
                            if (temp91_1 != 0)
                                goto label_1402368c1
                            
                            goto label_140236ad9
                        
                    label_1402368b0:
                        arg5 = var_518_7
                        char temp90_1 = temp0_1805 & 2
                        cond:241_1 = temp90_1 == 0
                        cond:242_1 = temp90_1 != 0
                        cond:259_1 = temp90_1 == 0
                        cond:260_1 = temp90_1 != 0
                        
                        if (temp90_1 == 0)
                        label_140236ad9:
                            
                            if (not(cond:241_1))
                            label_140236adf:
                                zmm14 = _mm_blend_ps(zmm14, temp0_1927, 2)
                                
                                if (cond:260_1)
                                    goto label_1402368d4
                                
                                goto label_140236aec
                        else
                        label_1402368c1:
                            arg12 = _mm_blend_ps(arg12, zmm4, 2)
                            
                            if (cond:242_1)
                                goto label_140236adf
                        
                        bool cond:303_1
                        bool cond:304_1
                        bool cond:319_1
                        bool cond:320_1
                        
                        if (not(cond:259_1))
                        label_1402368d4:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 2)
                            char temp113_1 = temp0_1805 & 4
                            cond:303_1 = temp113_1 == 0
                            cond:304_1 = temp113_1 != 0
                            cond:319_1 = temp113_1 == 0
                            cond:320_1 = temp113_1 != 0
                            
                            if (temp113_1 != 0)
                                goto label_140236af5
                            
                            goto label_1402368e4
                        
                    label_140236aec:
                        char temp112_1 = temp0_1805 & 4
                        cond:303_1 = temp112_1 == 0
                        cond:304_1 = temp112_1 != 0
                        cond:319_1 = temp112_1 == 0
                        cond:320_1 = temp112_1 != 0
                        
                        if (temp112_1 == 0)
                        label_1402368e4:
                            
                            if (not(cond:303_1))
                            label_1402368ea:
                                zmm14 = _mm_blend_ps(zmm14, temp0_1927, 4)
                                
                                if (cond:320_1)
                                    goto label_140236b08
                                
                                goto label_1402368f7
                        else
                        label_140236af5:
                            arg12 = _mm_blend_ps(arg12, zmm4, 4)
                            
                            if (cond:304_1)
                                goto label_1402368ea
                        
                        bool cond:343_1
                        bool cond:344_1
                        bool cond:351_1
                        bool cond:352_1
                        
                        if (not(cond:319_1))
                        label_140236b08:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 4)
                            char temp127_1 = temp0_1805 & 8
                            cond:343_1 = temp127_1 == 0
                            cond:344_1 = temp127_1 != 0
                            cond:351_1 = temp127_1 == 0
                            cond:352_1 = temp127_1 != 0
                            
                            if (temp127_1 != 0)
                                goto label_140236900
                            
                            goto label_140236b18
                        
                    label_1402368f7:
                        char temp126_1 = temp0_1805 & 8
                        cond:343_1 = temp126_1 == 0
                        cond:344_1 = temp126_1 != 0
                        cond:351_1 = temp126_1 == 0
                        cond:352_1 = temp126_1 != 0
                        
                        if (temp126_1 != 0)
                        label_140236900:
                            arg12 = _mm_blend_ps(arg12, zmm4, 8)
                            
                            if (cond:344_1)
                                goto label_140236b1e
                            
                            goto label_14023690d
                        
                    label_140236b18:
                        
                        if (cond:343_1)
                        label_14023690d:
                            
                            if (not(cond:351_1))
                                zmm12 = _mm_blend_ps(zmm12, zmm2, 8)
                        else
                        label_140236b1e:
                            zmm14 = _mm_blend_ps(zmm14, temp0_1927, 8)
                            
                            if (cond:352_1)
                                zmm12 = _mm_blend_ps(zmm12, zmm2, 8)
                        
                        zmm2 = var_548_6
                    
                    arg7 ^= var_448_4
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm2 & arg7, 0x1f)) == 0)
                        zmm4 = arg12
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_508_3)
                        zmm4 = zmm2 & zmm0
                        zmm1 = _mm_slli_epi32(zmm4, 0x1f)
                        char temp0_1939 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_1939 == 0)
                            zmm4 = arg12
                        else
                            uint128_t var_598_6 = zmm0
                            zmm0 = _mm_srai_epi32(_mm_slli_epi32(var_4e8_2, 0x1f), 0x1f)
                            uint128_t var_4e8_3 = zmm0
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm0
                            float var_5c8_8[0x4] = arg7
                            uint128_t var_568_2 = zmm14
                            
                            if (_mm_movemask_ps(zmm1) != 0)
                                arg5 = data_1434426b0
                                zmm3 = var_528_3
                                int32_t temp0_1944[0x4] = _mm_add_epi64(zmm3, arg5)
                                arg5 = _mm_add_epi64(arg5, var_4d8_3)
                                zmm2 = _mm_unpacklo_ps(zmm1, zmm1[0].q)
                                var_4d8_3 = _mm_blendv_ps(var_4d8_3, arg5, zmm2)
                                float temp0_1948[0x4] = _mm_unpackhi_ps(zmm1, zmm1)
                                var_528_3 = _mm_blendv_ps(zmm3, temp0_1944, temp0_1948)
                                zmm14 = __paddq_xmmdq_memdq(var_4b8_3, var_4f8_5)
                                zmm3 = __paddq_xmmdq_memdq(var_478_2, var_5a8_5)
                                zmm0 = data_1434426c0
                                zmm3 = __paddq_xmmdq_memdq(zmm3, var_5b8_2)
                                zmm14 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm14, var_4a8_4), zmm0)
                                int32_t temp0_1956[0x4] =
                                    _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm3, zmm0), zmm2)
                                arg5 = _mm_blendv_ps(zx.o(0), zmm14, temp0_1948)
                                int64_t rax_435 = _mm_extract_epi64(temp0_1956, 1)
                                int64_t rbp_53 = temp0_1956[0].q
                                int64_t rdi_34 = _mm_extract_epi64(arg5, 1)
                                zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg13 + rbp_53)), 
                                                *(arg13 + rax_435), 1), 
                                            *(arg13 + arg5.q), 2), 
                                        *(arg13 + rdi_34), 3).q), 
                                    data_143442b40))
                            
                            float temp0_1970[0x4] = _mm_blendv_ps(zx.o(0), zmm2, var_4e8_3)
                            
                            if ((temp0_1939 & 1) != 0)
                                arg12 = _mm_blend_ps(arg12, temp0_1970, 1)
                            
                            zmm0 = arg6
                            zmm14 = var_568_2
                            zmm12 = zmm12
                            
                            if ((temp0_1939 & 2) != 0)
                                arg12 = _mm_blend_ps(arg12, temp0_1970, 2)
                                
                                if ((temp0_1939 & 4) != 0)
                                    goto label_140236c6f
                                
                                goto label_140236b90
                            
                            if ((temp0_1939 & 4) == 0)
                            label_140236b90:
                                
                                if ((temp0_1939 & 8) != 0)
                                    arg12 = _mm_blend_ps(arg12, temp0_1970, 8)
                            else
                            label_140236c6f:
                                arg12 = _mm_blend_ps(arg12, temp0_1970, 4)
                                
                                if ((temp0_1939 & 8) != 0)
                                    arg12 = _mm_blend_ps(arg12, temp0_1970, 8)
                            
                            zmm1 = data_143442c40
                            arg5 = zmm0 & zmm1
                            zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, arg5) & zmm4, 0x1f)
                            char temp0_1976 = _mm_movemask_ps(zmm1)
                            
                            if (temp0_1976 == 0)
                                arg7 = zmm0
                                zmm2 = var_4d8_3
                                zmm1 = var_528_3
                            else
                                zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                                arg6 = data_1434426b0
                                zmm3 = var_528_3
                                arg7 = _mm_add_epi64(zmm3, arg6)
                                zmm2 = var_4d8_3
                                zmm2 = _mm_blendv_ps(zmm2, _mm_add_epi64(arg6, zmm2), 
                                    _mm_shuffle_epi32(zmm1, 0x50))
                                zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                                zmm1 = _mm_blendv_ps(zmm3, arg7, zmm0)
                                
                                if ((temp0_1976 & 1) == 0)
                                    if ((temp0_1976 & 2) != 0)
                                        goto label_140237236
                                    
                                    goto label_140236c20
                                
                                zmm0 = zx.o(*var_4d8_3.q)
                                
                                if ((temp0_1976 & 2) != 0)
                                label_140237236:
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_4d8_3, 1)), 1)
                                    arg7 = var_588_1
                                    
                                    if ((temp0_1976 & 4) == 0)
                                        goto label_140236c30
                                    
                                    goto label_14023725d
                                
                            label_140236c20:
                                arg7 = var_588_1
                                
                                if ((temp0_1976 & 4) != 0)
                                label_14023725d:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*var_528_3[0].q), 2)
                                    
                                    if ((temp0_1976 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(var_528_3, 1)), 3)
                                else
                                label_140236c30:
                                    
                                    if ((temp0_1976 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(var_528_3, 1)), 3)
                                
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_blend_epi16(zx.o(0), zmm0, 0x55), data_143442b40))
                            
                            arg5 = _mm_cmpeq_epi32(arg5, zx.o(0)) & not.o(zmm0)
                            
                            if ((temp0_1939 & 1) != 0)
                                zmm14 = _mm_blend_epi16(zmm14, arg5, 3)
                            
                            zmm3 = var_538_5
                            arg6 = arg7
                            arg7 = var_5c8_8
                            
                            if ((temp0_1939 & 2) != 0)
                                zmm14 = _mm_blend_epi16(zmm14, arg5, 0xc)
                                
                                if ((temp0_1939 & 4) != 0)
                                    goto label_140236d75
                                
                                goto label_140236cdb
                            
                            if ((temp0_1939 & 4) == 0)
                            label_140236cdb:
                                
                                if ((temp0_1939 & 8) != 0)
                                    zmm14 = _mm_blend_epi16(zmm14, arg5, 0xc0)
                            else
                            label_140236d75:
                                zmm14 = _mm_blend_epi16(zmm14, arg5, 0x30)
                                
                                if ((temp0_1939 & 8) != 0)
                                    zmm14 = _mm_blend_epi16(zmm14, arg5, 0xc0)
                            
                            arg5 = var_518_7
                            zmm0 = data_143442c50
                            arg6 &= zmm0
                            zmm0 = _mm_cmpeq_epi32(zmm0, arg6)
                            char temp0_1995 = _mm_movemask_ps(_mm_slli_epi32(zmm4 & zmm0, 0x1f))
                            
                            if (temp0_1995 == 0)
                                zmm4 = arg12
                                zmm2 = var_548_6
                            else
                                if ((temp0_1995 & 1) == 0)
                                    if ((temp0_1995 & 2) != 0)
                                        goto label_140237292
                                    
                                    goto label_140236d28
                                
                                zmm0 = zx.o(*zmm2.q)
                                
                                if ((temp0_1995 & 2) != 0)
                                label_140237292:
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm4 = arg12
                                    zmm2 = var_548_6
                                    
                                    if ((temp0_1995 & 4) == 0)
                                        goto label_140236d3f
                                    
                                    goto label_1402372b7
                                
                            label_140236d28:
                                zmm4 = arg12
                                zmm2 = var_548_6
                                
                                if ((temp0_1995 & 4) != 0)
                                label_1402372b7:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm1[0].q), 2)
                                    
                                    if ((temp0_1995 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                else
                                label_140236d3f:
                                    
                                    if ((temp0_1995 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_blend_epi16(zx.o(0), zmm0, 0x55), data_143442b40))
                            
                            arg6 = _mm_cmpeq_epi32(arg6, zx.o(0)) & not.o(zmm0)
                            
                            if ((temp0_1939 & 1) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, arg6, 3)
                                zmm0 = var_598_6
                                
                                if ((temp0_1939 & 2) != 0)
                                    goto label_140236dd8
                                
                                goto label_140236dba
                            
                            zmm0 = var_598_6
                            
                            if ((temp0_1939 & 2) != 0)
                            label_140236dd8:
                                zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc)
                                
                                if ((temp0_1939 & 4) != 0)
                                    goto label_140236dbf
                                
                                goto label_140236de4
                            
                        label_140236dba:
                            
                            if ((temp0_1939 & 4) == 0)
                            label_140236de4:
                                
                                if ((temp0_1939 & 8) != 0)
                                    zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc0)
                            else
                            label_140236dbf:
                                zmm12 = _mm_blend_epi16(zmm12, arg6, 0x30)
                                
                                if ((temp0_1939 & 8) != 0)
                                    zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc0)
                        
                        arg7 = (arg7 ^ zmm0) & zmm2
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(arg7, 0x1f)) != 0)
                            zmm0 = __pcmpeqd_xmmdq_memdq(var_508_3, data_143442ad0)
                            char temp0_2010 = _mm_movemask_ps(_mm_slli_epi32(zmm2 & zmm0, 0x1f))
                            
                            if (temp0_2010 != 0)
                                char temp66_1 = temp0_2010 & 1
                                
                                if (temp66_1 != 0)
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 1)
                                    
                                    if (temp66_1 != 0)
                                        goto label_140236e8c
                                else if (temp66_1 != 0)
                                label_140236e8c:
                                    zmm14 = _mm_blend_ps(zmm14, zx.o(0), 1)
                                    
                                    if (temp66_1 != 0)
                                        goto label_140236e4b
                                    
                                    goto label_140236e95
                                
                                bool cond:257_1
                                bool cond:258_1
                                bool cond:280_1
                                bool cond:281_1
                                
                                if (temp66_1 != 0)
                                label_140236e4b:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 1)
                                    char temp89_1 = temp0_2010 & 2
                                    cond:257_1 = temp89_1 == 0
                                    cond:258_1 = temp89_1 != 0
                                    cond:280_1 = temp89_1 == 0
                                    cond:281_1 = temp89_1 != 0
                                    
                                    if (temp89_1 != 0)
                                        goto label_140236e9a
                                    
                                    goto label_140236e57
                                
                            label_140236e95:
                                char temp88_1 = temp0_2010 & 2
                                cond:257_1 = temp88_1 == 0
                                cond:258_1 = temp88_1 != 0
                                cond:280_1 = temp88_1 == 0
                                cond:281_1 = temp88_1 != 0
                                
                                if (temp88_1 == 0)
                                label_140236e57:
                                    
                                    if (not(cond:257_1))
                                    label_140236e59:
                                        zmm14 = _mm_blend_ps(zmm14, zx.o(0), 2)
                                        
                                        if (cond:281_1)
                                            goto label_140236ea4
                                        
                                        goto label_140236e62
                                else
                                label_140236e9a:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 2)
                                    
                                    if (cond:258_1)
                                        goto label_140236e59
                                
                                bool cond:317_1
                                bool cond:318_1
                                bool cond:333_1
                                bool cond:334_1
                                
                                if (not(cond:280_1))
                                label_140236ea4:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 2)
                                    char temp111_1 = temp0_2010 & 4
                                    cond:317_1 = temp111_1 == 0
                                    cond:318_1 = temp111_1 != 0
                                    cond:333_1 = temp111_1 == 0
                                    cond:334_1 = temp111_1 != 0
                                    
                                    if (temp111_1 != 0)
                                        goto label_140236e67
                                    
                                    goto label_140236eb0
                                
                            label_140236e62:
                                char temp110_1 = temp0_2010 & 4
                                cond:317_1 = temp110_1 == 0
                                cond:318_1 = temp110_1 != 0
                                cond:333_1 = temp110_1 == 0
                                cond:334_1 = temp110_1 != 0
                                
                                if (temp110_1 == 0)
                                label_140236eb0:
                                    
                                    if (not(cond:317_1))
                                    label_140236eb2:
                                        zmm14 = _mm_blend_ps(zmm14, zx.o(0), 4)
                                        
                                        if (cond:334_1)
                                            goto label_140236e71
                                        
                                        goto label_140236ebb
                                else
                                label_140236e67:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 4)
                                    
                                    if (cond:318_1)
                                        goto label_140236eb2
                                
                                bool cond:349_1
                                bool cond:350_1
                                bool cond:361_1
                                bool cond:362_1
                                
                                if (not(cond:333_1))
                                label_140236e71:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 4)
                                    char temp125_1 = temp0_2010 & 8
                                    cond:349_1 = temp125_1 == 0
                                    cond:350_1 = temp125_1 != 0
                                    cond:361_1 = temp125_1 == 0
                                    cond:362_1 = temp125_1 != 0
                                    
                                    if (temp125_1 != 0)
                                        goto label_140236ec0
                                    
                                    goto label_140236e7d
                                
                            label_140236ebb:
                                char temp124_1 = temp0_2010 & 8
                                cond:349_1 = temp124_1 == 0
                                cond:350_1 = temp124_1 != 0
                                cond:361_1 = temp124_1 == 0
                                cond:362_1 = temp124_1 != 0
                                
                                if (temp124_1 != 0)
                                label_140236ec0:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 8)
                                    
                                    if (cond:350_1)
                                        goto label_140236e7f
                                    
                                    goto label_140236ec8
                                
                            label_140236e7d:
                                
                                if (cond:349_1)
                                label_140236ec8:
                                    
                                    if (not(cond:361_1))
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                                else
                                label_140236e7f:
                                    zmm14 = _mm_blend_ps(zmm14, zx.o(0), 8)
                                    
                                    if (cond:362_1)
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                            
                            char temp0_2024 =
                                _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(arg7), 0x1f))
                            
                            if (temp0_2024 != 0)
                                char temp71_1 = temp0_2024 & 1
                                
                                if (temp71_1 != 0)
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 1)
                                    
                                    if (temp71_1 != 0)
                                        goto label_140236f3c
                                else if (temp71_1 != 0)
                                label_140236f3c:
                                    zmm14 = _mm_blend_ps(zmm14, zx.o(0), 1)
                                    
                                    if (temp71_1 != 0)
                                        goto label_140236efb
                                    
                                    goto label_140236f45
                                
                                bool cond:278_1
                                bool cond:279_1
                                bool cond:301_1
                                bool cond:302_1
                                
                                if (temp71_1 != 0)
                                label_140236efb:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 1)
                                    char temp98_1 = temp0_2024 & 2
                                    cond:278_1 = temp98_1 == 0
                                    cond:279_1 = temp98_1 != 0
                                    cond:301_1 = temp98_1 == 0
                                    cond:302_1 = temp98_1 != 0
                                    
                                    if (temp98_1 != 0)
                                        goto label_140236f4a
                                    
                                    goto label_140236f07
                                
                            label_140236f45:
                                char temp97_1 = temp0_2024 & 2
                                cond:278_1 = temp97_1 == 0
                                cond:279_1 = temp97_1 != 0
                                cond:301_1 = temp97_1 == 0
                                cond:302_1 = temp97_1 != 0
                                
                                if (temp97_1 == 0)
                                label_140236f07:
                                    
                                    if (not(cond:278_1))
                                    label_140236f09:
                                        zmm14 = _mm_blend_ps(zmm14, zx.o(0), 2)
                                        
                                        if (cond:302_1)
                                            goto label_140236f54
                                        
                                        goto label_140236f12
                                else
                                label_140236f4a:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 2)
                                    
                                    if (cond:279_1)
                                        goto label_140236f09
                                
                                bool cond:331_1
                                bool cond:332_1
                                bool cond:341_1
                                bool cond:342_1
                                
                                if (not(cond:301_1))
                                label_140236f54:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 2)
                                    char temp119_1 = temp0_2024 & 4
                                    cond:331_1 = temp119_1 == 0
                                    cond:332_1 = temp119_1 != 0
                                    cond:341_1 = temp119_1 == 0
                                    cond:342_1 = temp119_1 != 0
                                    
                                    if (temp119_1 != 0)
                                        goto label_140236f17
                                    
                                    goto label_140236f60
                                
                            label_140236f12:
                                char temp118_1 = temp0_2024 & 4
                                cond:331_1 = temp118_1 == 0
                                cond:332_1 = temp118_1 != 0
                                cond:341_1 = temp118_1 == 0
                                cond:342_1 = temp118_1 != 0
                                
                                if (temp118_1 == 0)
                                label_140236f60:
                                    
                                    if (not(cond:331_1))
                                    label_140236f62:
                                        zmm14 = _mm_blend_ps(zmm14, zx.o(0), 4)
                                        
                                        if (cond:342_1)
                                            goto label_140236f21
                                        
                                        goto label_140236f6b
                                else
                                label_140236f17:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 4)
                                    
                                    if (cond:332_1)
                                        goto label_140236f62
                                
                                bool cond:359_1
                                bool cond:360_1
                                bool cond:368_1
                                bool cond:369_1
                                
                                if (not(cond:341_1))
                                label_140236f21:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 4)
                                    char temp131_1 = temp0_2024 & 8
                                    cond:359_1 = temp131_1 == 0
                                    cond:360_1 = temp131_1 != 0
                                    cond:368_1 = temp131_1 == 0
                                    cond:369_1 = temp131_1 != 0
                                    
                                    if (temp131_1 != 0)
                                        goto label_140236f70
                                    
                                    goto label_140236f2d
                                
                            label_140236f6b:
                                char temp130_1 = temp0_2024 & 8
                                cond:359_1 = temp130_1 == 0
                                cond:360_1 = temp130_1 != 0
                                cond:368_1 = temp130_1 == 0
                                cond:369_1 = temp130_1 != 0
                                
                                if (temp130_1 != 0)
                                label_140236f70:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 8)
                                    
                                    if (cond:360_1)
                                        goto label_140236f2f
                                    
                                    goto label_140236f78
                                
                            label_140236f2d:
                                
                                if (cond:359_1)
                                label_140236f78:
                                    
                                    if (not(cond:368_1))
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                                else
                                label_140236f2f:
                                    zmm14 = _mm_blend_ps(zmm14, zx.o(0), 8)
                                    
                                    if (cond:369_1)
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                
                zmm4 = _mm_sub_ps(zmm4, arg8)
                zmm14 = _mm_sub_ps(zmm14, arg5)
                zmm4 = _mm_mul_ps(zmm4, arg9)
                zmm1 = arg8
                char temp28_1 = temp0_1708 & 1
                
                if (temp28_1 != 0)
                    zmm1 = arg8
                    zmm1[0] = zmm1[0] f+ zmm4[0]
                    zmm12 = _mm_sub_ps(zmm12, zmm3)
                    zmm14 = _mm_mul_ps(zmm14, arg9)
                    zmm2 = arg5
                    
                    if (temp28_1 != 0)
                        goto label_140237185
                    
                    goto label_140236fb6
                
                zmm12 = _mm_sub_ps(zmm12, zmm3)
                zmm14 = _mm_mul_ps(zmm14, arg9)
                zmm2 = arg5
                
                if (temp28_1 != 0)
                label_140237185:
                    zmm2.d = arg5.d f+ zmm14.d
                    arg9 = _mm_mul_ps(arg9, zmm12)
                    zmm0 = zmm3
                    
                    if (temp28_1 != 0)
                        goto label_140236fc6
                    
                    goto label_140237197
                
            label_140236fb6:
                arg9 = _mm_mul_ps(arg9, zmm12)
                zmm0 = zmm3
                bool cond:132_1
                bool cond:133_1
                bool cond:151_1
                bool cond:152_1
                
                if (temp28_1 != 0)
                label_140236fc6:
                    zmm0.d = zmm3.d f+ arg9[0]
                    arg8 = _mm_add_ps(arg8, zmm4)
                    char temp45_1 = temp0_1708 & 2
                    cond:132_1 = temp45_1 == 0
                    cond:133_1 = temp45_1 != 0
                    cond:151_1 = temp45_1 == 0
                    cond:152_1 = temp45_1 != 0
                    
                    if (temp45_1 != 0)
                        goto label_1402371a4
                    
                    goto label_140236fd8
                
            label_140237197:
                arg8 = _mm_add_ps(arg8, zmm4)
                char temp44_1 = temp0_1708 & 2
                cond:132_1 = temp44_1 == 0
                cond:133_1 = temp44_1 != 0
                cond:151_1 = temp44_1 == 0
                cond:152_1 = temp44_1 != 0
                
                if (temp44_1 != 0)
                label_1402371a4:
                    zmm1 = _mm_blend_ps(zmm1, arg8, 2)
                    arg5 = _mm_add_ps(arg5, zmm14)
                    
                    if (cond:133_1)
                        goto label_140236fe2
                    
                    goto label_1402371b5
                
            label_140236fd8:
                arg5 = _mm_add_ps(arg5, zmm14)
                
                if (not(cond:132_1))
                label_140236fe2:
                    zmm2 = _mm_blend_ps(zmm2, arg5, 2)
                    zmm3 = _mm_add_ps(zmm3, arg9)
                    
                    if (cond:152_1)
                        goto label_1402371bf
                    
                    goto label_140236ff2
                
            label_1402371b5:
                zmm3 = _mm_add_ps(zmm3, arg9)
                bool cond:186_1
                bool cond:187_1
                bool cond:209_1
                bool cond:210_1
                
                if (not(cond:151_1))
                label_1402371bf:
                    zmm0 = _mm_blend_ps(zmm0, zmm3, 2)
                    char temp65_1 = temp0_1708 & 4
                    cond:186_1 = temp65_1 == 0
                    cond:187_1 = temp65_1 != 0
                    cond:209_1 = temp65_1 == 0
                    cond:210_1 = temp65_1 != 0
                    
                    if (temp65_1 != 0)
                        goto label_140236ffb
                    
                    goto label_1402371ce
                
            label_140236ff2:
                char temp64_1 = temp0_1708 & 4
                cond:186_1 = temp64_1 == 0
                cond:187_1 = temp64_1 != 0
                cond:209_1 = temp64_1 == 0
                cond:210_1 = temp64_1 != 0
                
                if (temp64_1 == 0)
                label_1402371ce:
                    
                    if (not(cond:186_1))
                    label_1402371d4:
                        zmm2 = _mm_blend_ps(zmm2, arg5, 4)
                        
                        if (cond:210_1)
                            goto label_14023700e
                        
                        goto label_1402371e0
                else
                label_140236ffb:
                    zmm1 = _mm_blend_ps(zmm1, arg8, 4)
                    
                    if (cond:187_1)
                        goto label_1402371d4
                
                bool cond:255_1
                bool cond:256_1
                bool cond:276_1
                bool cond:277_1
                
                if (not(cond:209_1))
                label_14023700e:
                    zmm0 = _mm_blend_ps(zmm0, zmm3, 4)
                    char temp87_1 = temp0_1708 & 8
                    cond:255_1 = temp87_1 == 0
                    cond:256_1 = temp87_1 != 0
                    cond:276_1 = temp87_1 != 0
                    cond:277_1 = temp87_1 == 0
                    
                    if (temp87_1 != 0)
                        goto label_1402371e9
                    
                    goto label_14023701d
                
            label_1402371e0:
                char temp86_1 = temp0_1708 & 8
                cond:255_1 = temp86_1 == 0
                cond:256_1 = temp86_1 != 0
                cond:276_1 = temp86_1 != 0
                cond:277_1 = temp86_1 == 0
                
                if (temp86_1 != 0)
                label_1402371e9:
                    arg8 = _mm_blend_ps(arg8, zmm1, 7)
                    
                    if (cond:256_1)
                        goto label_140237027
                    
                    goto label_1402371f6
                
            label_14023701d:
                arg8 = zmm1
                
                if (cond:255_1)
                label_1402371f6:
                    arg5 = zmm2
                    
                    if (cond:276_1)
                        zmm0 = _mm_blend_ps(zmm0, zmm3, 8)
                else
                label_140237027:
                    arg5 = _mm_blend_ps(arg5, zmm2, 7)
                    
                    if (not(cond:277_1))
                        zmm0 = _mm_blend_ps(zmm0, zmm3, 8)
                
                arg6 = zmm0
                rcx_93 = _mm_movemask_ps(_mm_and_ps(arg11, arg10))
                
                if (rcx_93 != 0)
                    goto label_140233207
        float temp0_2053[0x4] = _mm_unpacklo_ps(arg6, 0)
        zmm2 = _mm_unpackhi_ps(arg6, zx.o(0))
        zmm0 = _mm_unpacklo_ps(arg8, arg5.q)
        arg8 = _mm_unpackhi_ps(arg8, arg5)
        float var_168[0x4] = _mm_insert_ps(zmm0, arg6, 0x28)
        uint128_t var_158_1 = _mm_unpackhi_pd(zmm0, temp0_2053[0].q)
        uint128_t var_148_1 = _mm_insert_ps(arg8, arg6, 0xa8)
        uint128_t var_138_1 = _mm_unpackhi_pd(arg8, zmm2.q)
        uint64_t i_4 = zx.q(_mm_movemask_ps(arg10))
        
        do
            uint64_t rcx_138
            uint64_t rflags_1
            
            if (i_4 == 0)
                rcx_138 = 0x40
            else
                rcx_138, rflags_1 = _bit_scan_forward(i_4)
            float var_178[0x4] = zmm10
            result = sx.q(var_178[zx.q(rcx_138.d) & 3]) * 0x30
            *(arg1 + result + 0x20) = (&var_168)[rcx_138]
            i_4 &= rol.q(-2, rcx_138.b)
        while (i_4 != 0)
else
    uint128_t var_188_1 = _mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0)
    uint128_t var_198_1 = _mm_shuffle_epi32(_mm_add_epi64(4, zx.o(arg13)), 0x44)
    uint128_t var_308_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t rbp_1
    rbp_1.b = 0f f>= zmm2.d
    uint128_t var_1a8_1 = _mm_shuffle_epi32(zx.o(neg.d(rbp_1)), 0)
    zmm3[0] = float.s(arg14 - 1)
    zmm3[0] = zmm3[0] f* zmm2.d
    arg11 = zx.o(0)
    uint128_t var_448_1 = _mm_shuffle_epi32(
        _mm_min_epi32(zx.o(arg14 - 2), _mm_max_epi32(zx.o(int.d(zmm3[0])), zx.o(0))), 0)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    r15 = 0
    arg10 = _mm_cmpeq_epi32(arg10, arg10)
    
    do
        int64_t rcx_29 = sx.q((r15 << 3).d)
        zmm0 = *(arg2 + rcx_29)
        zmm12 = *(arg2 + rcx_29 + 0x10)
        uint128_t var_4a8_1 = zmm0
        zmm0 = __pmulld_xmmdq_memdq(_mm_shuffle_ps(zmm0, zmm12, 0xdd), var_188_1)
        int32_t temp0_365 = _mm_extract_epi32(zmm0, 1)
        int64_t rdi_7 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rsi_2 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm2 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + sx.q(zmm0.d))), *(arg3 + sx.q(temp0_365)), 
                    1), 
                *(arg3 + rdi_7), 2), 
            *(arg3 + rsi_2), 3)
        zmm14 = _mm_cmpeq_epi32(zmm2, arg10)
        arg8 = zmm14 ^ arg10
        float var_598[0x4]
        uint32_t rcx_27
        
        if (_mm_movemask_ps(arg8) == 0)
            zmm10 = var_598
            arg8 ^= arg10
            rcx_27 = _mm_movemask_ps(arg8)
            
            if (rcx_27 != 0)
            label_140232b56:
                char rcx_68 = rcx_27.b
                char temp2_1 = rcx_68 & 1
                
                if (temp2_1 != 0)
                    zmm10 = _mm_blend_ps(zmm10, arg11, 1)
                    
                    if (temp2_1 != 0)
                        goto label_140232bb2
                else if (temp2_1 != 0)
                label_140232bb2:
                    arg7 = _mm_blend_ps(arg7, arg11, 1)
                    
                    if (temp2_1 != 0)
                        goto label_140232b68
                    
                    goto label_140232bbb
                
                bool cond:18_1
                bool cond:19_1
                bool cond:23_1
                bool cond:24_1
                
                if (temp2_1 != 0)
                label_140232b68:
                    arg12 = _mm_blend_ps(arg12, arg11, 1)
                    char temp6_1 = rcx_68 & 2
                    cond:18_1 = temp6_1 == 0
                    cond:19_1 = temp6_1 != 0
                    cond:23_1 = temp6_1 == 0
                    cond:24_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_140232bc0
                    
                    goto label_140232b74
                
            label_140232bbb:
                char temp5_1 = rcx_68 & 2
                cond:18_1 = temp5_1 == 0
                cond:19_1 = temp5_1 != 0
                cond:23_1 = temp5_1 == 0
                cond:24_1 = temp5_1 != 0
                
                if (temp5_1 == 0)
                label_140232b74:
                    
                    if (not(cond:18_1))
                    label_140232b76:
                        arg7 = _mm_blend_ps(arg7, arg11, 2)
                        
                        if (cond:24_1)
                            goto label_140232bcb
                        
                        goto label_140232b7f
                else
                label_140232bc0:
                    zmm10 = _mm_blend_ps(zmm10, arg11, 2)
                    
                    if (cond:19_1)
                        goto label_140232b76
                
                bool cond:31_1
                bool cond:32_1
                bool cond:44_1
                bool cond:45_1
                
                if (not(cond:23_1))
                label_140232bcb:
                    arg12 = _mm_blend_ps(arg12, arg11, 2)
                    char temp12_1 = rcx_68 & 4
                    cond:31_1 = temp12_1 == 0
                    cond:32_1 = temp12_1 != 0
                    cond:44_1 = temp12_1 == 0
                    cond:45_1 = temp12_1 != 0
                    
                    if (temp12_1 != 0)
                        goto label_140232b84
                    
                    goto label_140232bd7
                
            label_140232b7f:
                char temp11_1 = rcx_68 & 4
                cond:31_1 = temp11_1 == 0
                cond:32_1 = temp11_1 != 0
                cond:44_1 = temp11_1 == 0
                cond:45_1 = temp11_1 != 0
                
                if (temp11_1 == 0)
                label_140232bd7:
                    
                    if (not(cond:31_1))
                    label_140232bd9:
                        arg7 = _mm_blend_ps(arg7, arg11, 4)
                        
                        if (cond:45_1)
                            goto label_140232b8f
                        
                        goto label_140232be2
                else
                label_140232b84:
                    zmm10 = _mm_blend_ps(zmm10, arg11, 4)
                    
                    if (cond:32_1)
                        goto label_140232bd9
                
                bool cond:57_1
                bool cond:68_1
                bool cond:69_1
                bool cond:58_1
                
                if (cond:44_1)
                label_140232be2:
                    char temp19_1 = rcx_68 & 8
                    cond:57_1 = temp19_1 == 0
                    cond:58_1 = temp19_1 != 0
                    cond:68_1 = temp19_1 == 0
                    cond:69_1 = temp19_1 != 0
                    
                    if (temp19_1 != 0)
                    label_140232be7:
                        zmm10 = _mm_blend_ps(zmm10, arg11, 8)
                        
                        if (cond:58_1)
                            goto label_140232b9d
                        
                        goto label_140232bf0
                else
                label_140232b8f:
                    arg12 = _mm_blend_ps(arg12, arg11, 4)
                    char temp20_1 = rcx_68 & 8
                    cond:57_1 = temp20_1 == 0
                    cond:58_1 = temp20_1 != 0
                    cond:68_1 = temp20_1 == 0
                    cond:69_1 = temp20_1 != 0
                    
                    if (temp20_1 != 0)
                        goto label_140232be7
                
                if (cond:57_1)
                label_140232bf0:
                    var_598 = zmm10
                    
                    if (not(cond:68_1))
                        arg12 = _mm_blend_ps(arg12, arg11, 8)
                else
                label_140232b9d:
                    arg7 = _mm_blend_ps(arg7, arg11, 8)
                    var_598 = zmm10
                    
                    if (cond:69_1)
                        arg12 = _mm_blend_ps(arg12, arg11, 8)
            else
                var_598 = zmm10
        else
            zmm10 = arg7
            float var_5c8_1[0x4] = arg12
            arg11 = arg9
            arg7 = _mm_shuffle_epi32(zmm2, 0x4e)
            zmm1 = zmm14 & not.o(zmm2)
            int64_t rcx_34 = sx.q(zmm1[0])
            int32_t temp0_374 = _mm_extract_epi32(zmm1, 1)
            int64_t rdi_9 = sx.q(_mm_extract_epi32(zmm1, 2))
            int64_t rsi_4 = sx.q(_mm_extract_epi32(zmm1, 3))
            zmm1 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg13 + rcx_34)), *(arg13 + sx.q(temp0_374)), 
                        1), 
                    *(arg13 + rdi_9), 2), 
                *(arg13 + rsi_4), 3)
            float var_488[0x4]
            float temp0_380[0x4] = _mm_blendv_ps(var_488, zmm1 & data_143442be0, arg8)
            uint128_t var_588
            arg5 = _mm_blendv_ps(var_588, _mm_srli_epi32(zmm1, 0x18) & data_143442bf0, arg8)
            int32_t var_568[0x4]
            arg6 = _mm_blendv_ps(var_568, _mm_srli_epi32(zmm1, 0x1c), arg8)
            zmm1 = zmm14 & not.o(_mm_slli_epi32(arg6, 2))
            float rcx_35 = zmm1[0]
            int64_t rbp_15 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t rdi_11 = sx.q(_mm_extract_epi32(zmm1, 2))
            int32_t temp0_388 = _mm_extract_epi32(zmm1, 3)
            zmm3 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(sx.q(rcx_35) + &data_143442c70)), 
                        *(rbp_15 + &data_143442c70), 1), 
                    *(rdi_11 + &data_143442c70), 2), 
                *(sx.q(temp0_388) + &data_143442c70), 3)
            var_588 = arg5
            arg5 = __andps_xmmxud_memxud(arg5, data_143442c00)
            uint128_t var_1e8_1 = arg5
            zmm4 = zmm14 & not.o(_mm_slli_epi32(arg6, 3) | arg5)
            int64_t rcx_39 = sx.q(zmm4[0])
            int64_t rbp_17 = sx.q(_mm_extract_epi32(zmm4, 1))
            int32_t temp0_395 = _mm_extract_epi32(zmm4, 2)
            int64_t rsi_7 = sx.q(_mm_extract_epi32(zmm4, 3))
            zmm1 = _mm_cvtepu8_epi32(__pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(
                    __pinsrb_xmmdq_memb_immb(zx.o(*(rcx_39 + &data_143442c90)), 
                        *(rbp_17 + &data_143442c90), 1), 
                    *(sx.q(temp0_395) + &data_143442c90), 2), 
                *(rsi_7 + &data_143442c90), 3)[0])
            var_568 = arg6
            int32_t temp0_401[0x4] = __pcmpeqd_xmmdq_memdq(arg6, data_142fc95c0)
            arg5 = temp0_401 & not.o(arg8)
            zmm4 = zx.o(0)
            
            if (_mm_movemask_ps(arg5) != 0)
                zmm4 = arg5 & zmm1
            
            arg7 = _mm_cvtepi32_epi64(arg7[0].q)
            arg9 = _mm_cvtepi32_epi64(zmm2.q)
            zmm2 = zmm14 & not.o(zmm3)
            zmm3 = zmm14 & not.o(data_142fc95e0)
            zmm0 = zmm14 & not.o(temp0_401)
            char temp0_405 = _mm_movemask_ps(zmm0)
            uint128_t var_1f8_1 = zmm0
            arg10 = data_142d3f5b0
            arg6 = _mm_blendv_ps(zmm4, arg10, zmm0)
            arg5 = zx.o(0)
            
            if (temp0_405 != 0)
                arg5 = zmm1 & var_1f8_1
                zmm4 = arg6
            
            float var_4f8_1[0x4] = zmm10
            arg5 = _mm_madd_epi16(arg5, zmm3)
            int32_t temp0_408[0x4] = _mm_mullo_epi32(zmm4, zmm2)
            float var_4d8_1[0x4] = arg9
            float var_518_1[0x4] = _mm_add_epi64(var_198_1, arg9)
            uint128_t var_5a8_1 = _mm_add_epi64(var_198_1, arg7)
            arg9 = _mm_blendv_ps(arg11, temp0_408, arg8)
            float var_3b8[0x4]
            arg5 = _mm_blendv_ps(var_3b8, arg5, arg8)
            uint128_t var_578_2 = zmm14
            arg6 = zmm14 & not.o(_mm_cmpgt_epi32(temp0_380, arg10))
            var_488 = temp0_380
            float var_538_1[0x4] = zmm12
            uint128_t var_4c8_1 = arg8
            float var_478_1[0x4] = arg7
            var_3b8 = arg5
            float var_528_1[0x4] = arg9
            float var_3f8_1[0x4]
            
            if (_mm_movemask_ps(arg6) == 0)
                zmm2 = arg7
                zmm1 = arg10
                zmm14 = zx.o(0)
                var_3f8_1 = zx.o(0)
                arg11 = zx.o(0)
                zmm12 = zmm12
                arg10 = zx.o(0)
                arg12 = var_5c8_1
                zmm10 = var_598
            else
                zmm10 = var_588 & data_142fc95f0
                zmm4 = zx.o(0)
                arg10 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm10, zx.o(0)) & arg6, 0x1f)
                arg11 = zx.o(0)
                
                if (_mm_movemask_ps(arg10) == 0)
                    zmm14 = zx.o(0)
                    zmm3 = zx.o(0)
                    zmm1 = zx.o(0)
                    arg10 = zx.o(0)
                    zmm12 = zmm12
                    arg12 = var_5c8_1
                else
                    zmm2 = zx.o(0)
                    zmm1 = zx.o(arg15)
                    
                    if (0f >= zmm1[0])
                        zmm4 = zx.o(0)
                        zmm14 = zx.o(0)
                        zmm3 = zx.o(0)
                        zmm1 = zx.o(0)
                        zmm12 = zmm12
                        arg12 = var_5c8_1
                    else
                        bool cond:20_1 = zmm1[0] >= 1f
                        zmm1 = __paddd_xmmdq_memdq(temp0_380, data_142d3f800)
                        
                        if (cond:20_1)
                            zmm4 = _mm_srai_epi32(arg10, 0x1f) & zmm1
                            zmm14 = zmm4
                            zmm3 = zmm4
                            zmm1 = zmm4
                            zmm12 = zmm12
                            arg12 = var_5c8_1
                        else
                            float temp0_420[0x4] =
                                __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1), var_308_1)
                            zmm4 = _mm_round_ps(temp0_420, 9)
                            zmm0 = _mm_min_epi32(_mm_cvttps_epi32(zmm4), zmm1)
                            zmm2 = _mm_srai_epi32(arg10, 0x1f)
                            arg7 = zmm2
                            zmm0 &= zmm2
                            zmm2 = zx.o(0)
                            
                            if (arg16 != 1)
                                zmm2 = _mm_sub_ps(temp0_420, zmm4)
                            
                            zmm3 = _mm_sub_epi32(zmm0, _mm_cmpeq_epi32(zmm4, zmm4))
                            zmm4 = zmm0
                            arg7 &= _mm_min_epi32(zmm3, zmm1)
                            zmm3 = arg7
                            zmm14 = zmm0
                            zmm1 = arg7
                            arg12 = var_5c8_1
                            zmm12 = zmm12
                    
                    arg10 = _mm_srai_epi32(arg10, 0x1f) & zmm2
                
                zmm10 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm10, arg11) & not.o(arg6), 0x1f)
                zmm2 = _mm_srai_epi32(zmm10, 0x1f)
                
                if (_mm_movemask_ps(zmm2) == 0)
                    var_3f8_1 = zmm1
                    zmm2 = var_478_1
                    zmm1 = data_142d3f5b0
                    zmm10 = var_598
                else
                    int32_t var_508_1[0x4] = arg10
                    arg7 = __pcmpgtd_xmmdq_memdq(data_1434422d0, var_488) | var_1a8_1
                    zmm0 = arg7 & zmm2
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        zmm0 = zmm1
                        zmm1 = arg5
                    else
                        zmm1 = arg5
                        zmm4 = _mm_blendv_ps(zmm4, arg11, zmm0)
                        zmm3 = _mm_blendv_ps(zmm3, arg11, zmm0)
                        zmm14 = zmm4
                        zmm0 = zmm3
                    
                    arg5 = arg7 & not.o(zmm2)
                    uint32_t temp0_440 = _mm_movemask_ps(arg5)
                    zmm2 = zx.o(0)
                    
                    if (temp0_440 == 0)
                        zmm4 = zmm14
                        zmm3 = zmm0
                        arg5 = zmm1
                        arg10 = var_508_1
                    else
                        int32_t temp0_442[0x4] = _mm_add_epi32(var_488, _mm_cmpeq_epi32(zmm0, zmm0))
                        
                        if (arg15.d f>= 1f)
                            zmm4 = _mm_blendv_ps(zmm4, temp0_442, arg5)
                            zmm3 = _mm_blendv_ps(zmm3, temp0_442, arg5)
                            arg5 = zmm1
                            arg10 = var_508_1
                        else
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                            arg12 = _mm_cvtepi32_epi64(zmm1[0].q)
                            arg8 = _mm_cvtepi32_epi64(zmm0.q)
                            arg9 = __pmulld_xmmdq_memdq(arg9, var_488)
                            zmm1 = _mm_shuffle_epi32(arg9, 0x4e)
                            arg8 = __paddq_xmmdq_memdq(arg8, var_5a8_1)
                            arg12 = __paddq_xmmdq_memdq(arg12, var_518_1)
                            zmm1 = _mm_cvtepi32_epi64(zmm1[0].q)
                            zmm0 = _mm_cvtepi32_epi64(arg9[0].q)
                            zmm2 = data_143442a20
                            arg8 = _mm_add_epi64(_mm_add_epi64(arg8, zmm2), zmm1)
                            arg12 = _mm_add_epi64(_mm_add_epi64(arg12, zmm2), zmm0)
                            zmm0 = data_143442c10
                            arg12 &= zmm0
                            arg8 &= zmm0
                            arg9 = _mm_min_epi32(
                                _mm_max_epi32(
                                    _mm_cvttps_epi32(__mulps_xmmps_memps(
                                        _mm_cvtepi32_ps(temp0_442), var_308_1)), 
                                    arg11), 
                                temp0_442)
                            float var_558_1[0x4] = zmm3
                            float var_4b8_1[0x4] = arg7
                            
                            if (arg14 s< 0x100)
                                zmm0 = _mm_shuffle_epi32(arg9, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), arg12)
                                char rbp_19 = temp0_440.b
                                uint128_t var_1c8
                                zmm2 = var_1c8
                                arg10 = var_508_1
                                
                                if ((rbp_19 & 1) == 0)
                                    arg11 = temp0_442
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbp_19 & 2) != 0)
                                        goto label_140230614
                                    
                                    goto label_1402303ac
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1[0].q), 0)
                                arg11 = temp0_442
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbp_19 & 2) != 0)
                                label_140230614:
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbp_19 & 4) == 0)
                                        goto label_1402303bb
                                    
                                    goto label_140230631
                                
                            label_1402303ac:
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbp_19 & 4) != 0)
                                label_140230631:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbp_19 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402303bb:
                                    
                                    if ((rbp_19 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm1 = __pcmpgtd_xmmdq_memdq(zmm2 & data_142ed6810, var_448_1)
                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                zmm0 = zmm1 ^ zmm3
                                var_1c8 = zmm2
                                float var_458_1[0x4] = zmm4
                                
                                if (_mm_movemask_ps(zmm1 & not.o(arg5)) == 0)
                                    zmm12 = zmm0
                                    zmm14 = _mm_cmpeq_epi32(zmm14, zmm14)
                                    zmm4 = arg9
                                else
                                    zmm12 = zmm0
                                    zmm4 = _mm_blendv_ps(arg9, arg11, zmm0)
                                    zmm0 = _mm_sub_epi32(arg9, zmm3)
                                    zmm2 = _mm_cmpgt_epi32(zmm0, arg11)
                                    zmm14 = _mm_cmpeq_epi32(zmm14, zmm14)
                                    zmm1 &= not.o(zmm2 ^ zmm3)
                                    arg6 = arg5 & zmm1
                                    uint32_t j = _mm_movemask_ps(arg6)
                                    
                                    if (j != 0)
                                        arg7 = arg9
                                        
                                        do
                                            zmm2 = zmm0
                                            zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                            zmm3 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm2.q), arg12)
                                            char temp0_516 = _mm_movemask_ps(arg6)
                                            int32_t var_218[0x4]
                                            
                                            if ((temp0_516 & 1) != 0)
                                                arg6 =
                                                    _mm_insert_epi32(var_218, zx.d(*zmm3[0].q), 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_516 & 2) != 0)
                                                    arg6 = _mm_insert_epi32(arg6, 
                                                        zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                            else
                                                arg6 = var_218
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_516 & 2) != 0)
                                                    arg6 = _mm_insert_epi32(arg6, 
                                                        zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                            
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_516 & 4) != 0)
                                                arg6 = _mm_insert_epi32(arg6, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_516 & 8) != 0)
                                                    arg6 = _mm_insert_epi32(arg6, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else if ((temp0_516 & 8) != 0)
                                                arg6 = _mm_insert_epi32(arg6, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            var_218 = arg6
                                            zmm0 = __pcmpgtd_xmmdq_memdq(arg6 & data_142ed6810, 
                                                var_448_1) & zmm1
                                            zmm4 = _mm_blendv_ps(zmm4, arg7, zmm0)
                                            zmm3 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & arg5) != j)
                                                zmm3 = zmm0 ^ zmm1
                                            
                                            zmm0 = _mm_sub_epi32(zmm2, zmm14)
                                            zmm1 = _mm_cmpgt_epi32(zmm0, arg11) & not.o(zmm3)
                                            arg6 = zmm1 & arg5
                                            j = _mm_movemask_ps(arg6)
                                            arg7 = zmm2
                                        while (j != 0)
                                
                                zmm1 = zmm12 & not.o(arg5)
                                float var_3a8[0x4]
                                uint128_t var_348
                                
                                if (_mm_movemask_ps(zmm1) == 0)
                                    zmm3 = var_3a8
                                    zmm2 = var_348
                                    arg11 = zx.o(0)
                                else
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                    zmm0 = zmm12 ^ zmm1
                                    arg11 = zx.o(0)
                                    zmm4 = _mm_blendv_ps(zmm4, arg11, zmm0)
                                    zmm14 = _mm_cmpeq_epi32(zmm14, zmm14)
                                    arg9 = _mm_add_epi32(arg9, zmm1)
                                    arg6 = _mm_cmpgt_epi32(arg9, arg11) & zmm0
                                    zmm0 = arg6 & arg5
                                    uint32_t j_1 = _mm_movemask_ps(zmm0)
                                    
                                    if (j_1 == 0)
                                        zmm3 = var_3a8
                                    else
                                        zmm3 = var_3a8
                                        
                                        do
                                            zmm2 = _mm_shuffle_epi32(arg9, 0x4e)
                                            zmm1 =
                                                _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), arg12)
                                            char temp0_583 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_583 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm2.q)
                                                
                                                if ((temp0_583 & 2) != 0)
                                                    goto label_140230863
                                                
                                                goto label_1402308b5
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm2.q)
                                            
                                            if ((temp0_583 & 2) != 0)
                                            label_140230863:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                                
                                                if ((temp0_583 & 4) == 0)
                                                    goto label_1402308c0
                                                
                                                goto label_14023087c
                                            
                                        label_1402308b5:
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_583 & 4) != 0)
                                            label_14023087c:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_583 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_1402308c0:
                                                
                                                if ((temp0_583 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm0 = __pcmpgtd_xmmdq_memdq(zmm3 & data_142ed6810, 
                                                var_448_1) & not.o(arg6)
                                            zmm4 = _mm_blendv_ps(zmm4, arg9, zmm0)
                                            zmm2 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & arg5) != j_1)
                                                zmm2 = zmm0 ^ arg6
                                            
                                            arg9 = _mm_add_epi32(arg9, zmm14)
                                            arg6 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm2
                                            zmm0 = arg6 & arg5
                                            j_1 = _mm_movemask_ps(zmm0)
                                        while (j_1 != 0)
                                    
                                    zmm2 = var_348
                                
                                arg9 = var_528_1
                                float temp0_623[0x4] = _mm_blendv_ps(var_458_1, zmm4, arg5)
                                zmm4 = temp0_623
                                zmm0 = _mm_shuffle_epi32(temp0_623, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(temp0_623[0].q), arg12)
                                var_3a8 = zmm3
                                
                                if ((rbp_19 & 1) != 0)
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1[0].q), 0)
                                
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbp_19 & 2) == 0)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbp_19 & 4) != 0)
                                        goto label_140230cc6
                                    
                                    goto label_140230c1a
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbp_19 & 4) == 0)
                                label_140230c1a:
                                    
                                    if ((rbp_19 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140230cc6:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbp_19 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm3 = _mm_blendv_ps(var_558_1, _mm_sub_epi32(zmm4, zmm14), arg5)
                                zmm1 = temp0_442
                                zmm0 = _mm_cmpgt_epi32(zmm3, zmm1) & arg5
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    zmm3 = _mm_blendv_ps(zmm3, zmm1, zmm0)
                                
                                arg5 = var_3b8
                                zmm0 = _mm_shuffle_epi32(zmm3, 0x4e)
                                arg12 = _mm_add_epi64(arg12, _mm_cvtepi32_epi64(zmm3[0].q))
                                zmm14 = zmm3
                                float var_368[0x4]
                                
                                if ((rbp_19 & 1) != 0)
                                    zmm3 = _mm_insert_epi32(var_368, zx.d(*arg12[0].q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbp_19 & 2) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(arg12, 1)), 1)
                                else
                                    zmm3 = var_368
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbp_19 & 2) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(arg12, 1)), 1)
                                
                                zmm12 = var_538_1
                                arg12 = var_5c8_1
                                zmm4 = zmm4
                                arg8 = _mm_add_epi64(arg8, zmm0)
                                
                                if ((rbp_19 & 4) != 0)
                                    zmm3 = _mm_insert_epi32(zmm3, zx.d(*arg8.q), 2)
                                
                                if ((rbp_19 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(arg8, 1)), 3)
                                
                                arg8 = var_4c8_1
                                var_348 = zmm2
                                zmm1 = data_142ed6810
                                zmm0 = zmm2 & zmm1
                                var_368 = zmm3
                                zmm2 = zmm3 & zmm1
                                zmm3 = zmm14
                                arg7 = var_4b8_1 ^ data_142d3f800
                                zmm1 = zx.o(0)
                                
                                if (arg16 != 1)
                                    zmm2 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm2, zmm0), 
                                        data_142d3f5b0)
                                    zmm1 = _mm_div_ps(_mm_sub_ps(temp0_10, _mm_cvtepi32_ps(zmm0)), 
                                        _mm_cvtepi32_ps(zmm2))
                            else
                                zmm1 = _mm_add_epi32(arg9, arg9)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1[0].q), arg12)
                                char rbp_18 = temp0_440.b
                                int32_t var_1b8[0x4]
                                arg6 = var_1b8
                                
                                if ((rbp_18 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbp_18 & 2) != 0)
                                        goto label_1402305b2
                                    
                                    goto label_14023015a
                                
                                arg6 = _mm_insert_epi32(arg6, zx.d(*zmm1[0].q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbp_18 & 2) != 0)
                                label_1402305b2:
                                    arg6 =
                                        _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbp_18 & 4) == 0)
                                        goto label_140230169
                                    
                                    goto label_1402305cf
                                
                            label_14023015a:
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbp_18 & 4) != 0)
                                label_1402305cf:
                                    arg6 = _mm_insert_epi32(arg6, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbp_18 & 8) != 0)
                                        arg6 = _mm_insert_epi32(arg6, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140230169:
                                    
                                    if ((rbp_18 & 8) != 0)
                                        arg6 = _mm_insert_epi32(arg6, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                var_1b8 = arg6
                                int32_t temp0_469[0x4] = __pcmpgtd_xmmdq_memdq(
                                    _mm_blend_epi16(arg6, arg11, 0xaa), var_448_1)
                                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                zmm14 = temp0_469 ^ zmm2
                                arg11 = zmm4
                                
                                if (_mm_movemask_ps(temp0_469 & not.o(arg5)) == 0)
                                    zmm12 = _mm_cmpeq_epi32(zmm12, zmm12)
                                    arg7 = arg9
                                else
                                    zmm3 = temp0_442
                                    arg7 = _mm_blendv_ps(arg9, zmm3, zmm14)
                                    zmm0 = _mm_sub_epi32(arg9, zmm2)
                                    zmm1 = _mm_cmpgt_epi32(zmm0, zmm3)
                                    zmm12 = _mm_cmpeq_epi32(zmm12, zmm12)
                                    zmm1 ^= zmm2
                                    arg6 = temp0_469 & not.o(zmm1)
                                    zmm4 = arg5 & arg6
                                    uint32_t j_2 = _mm_movemask_ps(zmm4)
                                    
                                    if (j_2 != 0)
                                        zmm2 = arg9
                                        
                                        do
                                            arg10 = zmm0
                                            zmm1 = _mm_add_epi32(zmm0, zmm0)
                                            zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                            zmm1 =
                                                _mm_add_epi64(_mm_cvtepi32_epi64(zmm1[0].q), arg12)
                                            char temp0_482 = _mm_movemask_ps(zmm4)
                                            int32_t var_208[0x4]
                                            
                                            if ((temp0_482 & 1) != 0)
                                                zmm4 =
                                                    _mm_insert_epi32(var_208, zx.d(*zmm1[0].q), 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_482 & 2) != 0)
                                                    zmm4 = _mm_insert_epi32(zmm4, 
                                                        zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                            else
                                                zmm4 = var_208
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_482 & 2) != 0)
                                                    zmm4 = _mm_insert_epi32(zmm4, 
                                                        zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                            
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_482 & 4) != 0)
                                                zmm4 = _mm_insert_epi32(zmm4, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_482 & 8) != 0)
                                                    zmm4 = _mm_insert_epi32(zmm4, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else if ((temp0_482 & 8) != 0)
                                                zmm4 = _mm_insert_epi32(zmm4, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm1 = zx.o(0)
                                            var_208 = zmm4
                                            zmm0 = __pcmpgtd_xmmdq_memdq(
                                                _mm_blend_epi16(zmm4, zx.o(0), 0xaa), var_448_1) & arg6
                                            arg7 = _mm_blendv_ps(arg7, zmm2, zmm0)
                                            
                                            if (_mm_movemask_ps(zmm0 & arg5) != j_2)
                                                zmm1 = zmm0 ^ arg6
                                            
                                            zmm0 = _mm_sub_epi32(arg10, zmm12)
                                            arg6 = _mm_cmpgt_epi32(zmm0, zmm3) & not.o(zmm1)
                                            zmm4 = arg6 & arg5
                                            j_2 = _mm_movemask_ps(zmm4)
                                            zmm2 = arg10
                                        while (j_2 != 0)
                                
                                int32_t var_398[0x4]
                                
                                if (_mm_movemask_ps(zmm14 & not.o(arg5)) == 0)
                                    zmm14 = zmm10
                                    zmm4 = var_398
                                else
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                    zmm14 ^= zmm1
                                    zmm2 = zx.o(0)
                                    arg7 = _mm_blendv_ps(arg7, zmm2, zmm14)
                                    zmm12 = _mm_cmpeq_epi32(zmm12, zmm12)
                                    arg9 = _mm_add_epi32(arg9, zmm1)
                                    arg6 = _mm_cmpgt_epi32(arg9, zmm2) & zmm14
                                    zmm0 = arg6 & arg5
                                    uint32_t j_3 = _mm_movemask_ps(zmm0)
                                    
                                    if (j_3 == 0)
                                        zmm4 = var_398
                                    else
                                        zmm4 = var_398
                                        
                                        do
                                            zmm1 = _mm_add_epi32(arg9, arg9)
                                            zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                                            zmm1 =
                                                _mm_add_epi64(_mm_cvtepi32_epi64(zmm1[0].q), arg12)
                                            char temp0_556 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_556 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm2.q)
                                                
                                                if ((temp0_556 & 2) != 0)
                                                    goto label_1402306e3
                                                
                                                goto label_14023073d
                                            
                                            zmm4 = _mm_insert_epi32(zmm4, zx.d(*zmm1[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm2.q)
                                            
                                            if ((temp0_556 & 2) != 0)
                                            label_1402306e3:
                                                zmm4 = _mm_insert_epi32(zmm4, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                                
                                                if ((temp0_556 & 4) == 0)
                                                    goto label_140230748
                                                
                                                goto label_1402306fc
                                            
                                        label_14023073d:
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_556 & 4) != 0)
                                            label_1402306fc:
                                                zmm4 = _mm_insert_epi32(zmm4, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_556 & 8) != 0)
                                                    zmm4 = _mm_insert_epi32(zmm4, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_140230748:
                                                
                                                if ((temp0_556 & 8) != 0)
                                                    zmm4 = _mm_insert_epi32(zmm4, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm0 = __pcmpgtd_xmmdq_memdq(
                                                _mm_blend_epi16(zmm4, zx.o(0), 0xaa), var_448_1)
                                                & not.o(arg6)
                                            arg7 = _mm_blendv_ps(arg7, arg9, zmm0)
                                            zmm2 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & arg5) != j_3)
                                                zmm2 = zmm0 ^ arg6
                                            
                                            arg9 = _mm_add_epi32(arg9, zmm12)
                                            arg6 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm2
                                            zmm0 = arg6 & arg5
                                            j_3 = _mm_movemask_ps(zmm0)
                                        while (j_3 != 0)
                                    
                                    zmm14 = zmm10
                                
                                float var_338[0x4]
                                zmm10 = var_338
                                float temp0_593[0x4] = _mm_blendv_ps(arg11, arg7, arg5)
                                zmm1 = _mm_add_epi32(temp0_593, temp0_593)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1[0].q), arg12)
                                var_398 = zmm4
                                
                                if ((rbp_18 & 1) != 0)
                                    zmm10 = _mm_insert_epi32(zmm10, zx.d(*zmm1[0].q), 0)
                                
                                arg9 = var_528_1
                                arg10 = var_508_1
                                arg11 = zx.o(0)
                                zmm4 = temp0_593
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbp_18 & 2) == 0)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbp_18 & 4) != 0)
                                        goto label_140230ab1
                                    
                                    goto label_140230a00
                                
                                zmm10 =
                                    _mm_insert_epi32(zmm10, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbp_18 & 4) == 0)
                                label_140230a00:
                                    
                                    if ((rbp_18 & 8) != 0)
                                        zmm10 = _mm_insert_epi32(zmm10, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140230ab1:
                                    zmm10 = _mm_insert_epi32(zmm10, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbp_18 & 8) != 0)
                                        zmm10 = _mm_insert_epi32(zmm10, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm3 = _mm_blendv_ps(var_558_1, _mm_sub_epi32(zmm4, zmm12), arg5)
                                zmm1 = temp0_442
                                zmm0 = _mm_cmpgt_epi32(zmm3, zmm1) & arg5
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    zmm3 = _mm_blendv_ps(zmm3, zmm1, zmm0)
                                
                                arg5 = var_3b8
                                zmm1 = _mm_add_epi32(zmm3, zmm3)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                arg12 = _mm_add_epi64(arg12, _mm_cvtepi32_epi64(zmm1[0].q))
                                float var_358[0x4]
                                
                                if ((rbp_18 & 1) != 0)
                                    zmm1 = _mm_insert_epi32(var_358, zx.d(*arg12[0].q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbp_18 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(arg12, 1)), 1)
                                else
                                    zmm1 = var_358
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbp_18 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(arg12, 1)), 1)
                                
                                zmm12 = var_538_1
                                arg12 = var_5c8_1
                                arg8 = _mm_add_epi64(arg8, zmm0)
                                
                                if ((rbp_18 & 4) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*arg8.q), 2)
                                
                                if ((rbp_18 & 8) != 0)
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(arg8, 1)), 3)
                                
                                arg8 = var_4c8_1
                                var_338 = zmm10
                                zmm0 = _mm_blend_epi16(zmm10, zx.o(0), 0xaa)
                                var_358 = zmm1
                                zmm2 = _mm_blend_epi16(zmm1, zx.o(0), 0xaa)
                                zmm10 = zmm14
                                arg7 = var_4b8_1 ^ data_142d3f800
                                zmm1 = zx.o(0)
                                
                                if (arg16 != 1)
                                    zmm2 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm2, zmm0), 
                                        data_142d3f5b0)
                                    zmm1 = _mm_div_ps(_mm_sub_ps(temp0_10, _mm_cvtepi32_ps(zmm0)), 
                                        _mm_cvtepi32_ps(zmm2))
                            
                            zmm2 = _mm_blendv_ps(zx.o(0), zmm1, arg7)
                    
                    arg10 = _mm_blendv_ps(arg10, zmm2, zmm10)
                    zmm14 = zmm4
                    var_3f8_1 = zmm3
                    zmm10 = var_598
                    zmm2 = var_478_1
                    zmm1 = data_142d3f5b0
            
            zmm3 = _mm_cvtepi32_epi64(arg5.q)
            zmm4 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(arg5, 0x4e).q)
            zmm0 = _mm_mullo_epi32(zmm14, arg9)
            arg5 = _mm_cvtepi32_epi64(zmm0.q)
            zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
            uint128_t var_498_1 = zmm0
            int32_t var_4b8_2[0x4] = zmm4
            zmm0 = _mm_add_epi64(zmm0, zmm4)
            uint128_t var_468_1 = arg5
            float var_558_2[0x4] = zmm3
            int32_t var_3d8_1[0x4] = __paddq_xmmdq_memdq(_mm_add_epi64(arg5, zmm3), var_518_1)
            uint128_t var_438_2 = __paddq_xmmdq_memdq(zmm0, var_5a8_1)
            zmm3 = _mm_cmpeq_epi32(var_568, zmm1)
            zmm1 = var_578_2
            arg5 = zmm1 & not.o(zmm3)
            int32_t var_508_2[0x4] = arg10
            uint128_t var_548_2 = zmm14
            float var_458_2[0x4] = zmm3
            
            if (_mm_movemask_ps(arg5) == 0)
                arg7 = var_4f8_1
            else
                int32_t temp0_670[0x4] = _mm_cmpeq_epi32(var_1e8_1, arg11)
                zmm1 = _mm_slli_epi32(temp0_670 & arg5, 0x1f)
                char temp0_672 = _mm_movemask_ps(zmm1)
                
                if (temp0_672 == 0)
                    arg7 = var_4f8_1
                else
                    arg8 = arg12
                    arg12 = zmm10
                    zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                    int32_t temp0_674[0x4] = __paddq_xmmdq_memdq(zmm2, var_4b8_2)
                    int32_t temp0_676[0x4] =
                        __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8_1, var_558_2), var_468_1)
                    int32_t temp0_677[0x4] = __paddq_xmmdq_memdq(temp0_674, var_498_1)
                    zmm0 = data_1434426c0
                    int32_t temp0_678[0x4] = _mm_add_epi64(temp0_677, zmm0)
                    int32_t temp0_679[0x4] = _mm_add_epi64(temp0_676, zmm0)
                    zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                    float temp0_681[0x4] = _mm_blendv_ps(zx.o(0), temp0_679, zmm3)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                    float temp0_683[0x4] = _mm_blendv_ps(zx.o(0), temp0_678, zmm4)
                    int64_t rsi_8 = _mm_extract_epi64(temp0_681, 1)
                    void* rbp_20 = arg13 + rsi_8
                    arg9 = *(arg13 + rsi_8)
                    int64_t rsi_9 = temp0_683[0].q
                    int64_t rax_152 = _mm_extract_epi64(temp0_683, 1)
                    void* rdi_18 = arg13 + rsi_9
                    float temp0_684[0x4] = _mm_blendv_ps(zx.o(0), zmm0, zmm3)
                    int32_t var_428_1 = (*(arg13 + rsi_9)).d
                    arg6 = _mm_blendv_ps(zx.o(0), zmm0, zmm4)
                    int32_t var_598_1 = (*(arg13 + rax_152)).d
                    void* rsi_11 = temp0_681[0].q + arg13
                    zmm10 = *(temp0_684[0].q + rsi_11)
                    arg7 = *(_mm_extract_epi64(temp0_684, 1) + rbp_20)
                    zmm2 = *(arg6[0].q + rdi_18)
                    int64_t rbx_7 = _mm_extract_epi64(arg6, 1)
                    void* rax_153 = arg13 + rax_152
                    zmm1 = data_1434426e0
                    arg6 = _mm_blendv_ps(zx.o(0), zmm1, zmm3)
                    int32_t var_5c8_2 = (*(rbx_7 + rax_153)).d
                    float temp0_687[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm4)
                    zmm1 = *(arg6[0].q + rsi_11)
                    zmm3 = *(_mm_extract_epi64(arg6, 1) + rbp_20)
                    int32_t (* rbx_10)[0x4] = temp0_687[0].q
                    int64_t rbp_21 = _mm_extract_epi64(temp0_687, 1)
                    zmm4 = *(rbx_10 + rdi_18)
                    zmm12 = *(rbp_21 + rax_153)
                    
                    if ((temp0_672 & 1) != 0)
                        arg12 = _mm_blend_epi16(arg12, zx.o(*rsi_11), 3)
                    
                    char temp13_1 = temp0_672 & 1
                    
                    if (temp13_1 == 0)
                        arg6 = var_4f8_1
                        
                        if (temp13_1 != 0)
                            arg8 = _mm_blend_ps(arg8, zmm1, 1)
                    else
                        arg6 = _mm_blend_ps(var_4f8_1, zmm10, 1)
                        
                        if (temp13_1 != 0)
                            arg8 = _mm_blend_ps(arg8, zmm1, 1)
                    
                    char temp14_1 = temp0_672 & 2
                    
                    if (temp14_1 != 0)
                        arg12 = _mm_insert_ps(arg12, arg9, 0x10)
                        
                        if (temp14_1 != 0)
                            goto label_1402312b6
                    else if (temp14_1 != 0)
                    label_1402312b6:
                        arg6 = _mm_insert_ps(arg6, arg7, 0x10)
                        
                        if (temp14_1 != 0)
                            goto label_1402310b7
                        
                        goto label_1402312c2
                    
                    bool cond:76_1
                    bool cond:77_1
                    bool cond:93_1
                    bool cond:94_1
                    
                    if (temp14_1 != 0)
                    label_1402310b7:
                        arg8 = _mm_insert_ps(arg8, zmm3, 0x10)
                        char temp27_1 = temp0_672 & 4
                        cond:76_1 = temp27_1 == 0
                        cond:77_1 = temp27_1 != 0
                        cond:93_1 = temp27_1 == 0
                        cond:94_1 = temp27_1 != 0
                        
                        if (temp27_1 != 0)
                            goto label_1402312d7
                        
                        goto label_1402310c7
                    
                label_1402312c2:
                    char temp26_1 = temp0_672 & 4
                    cond:76_1 = temp26_1 == 0
                    cond:77_1 = temp26_1 != 0
                    cond:93_1 = temp26_1 == 0
                    cond:94_1 = temp26_1 != 0
                    
                    if (temp26_1 != 0)
                    label_1402312d7:
                        zmm10 = __insertps_xmmps_memd_immb(arg12, var_428_1, 0x20)
                        
                        if (cond:77_1)
                            goto label_1402310da
                        
                        goto label_1402312ea
                    
                label_1402310c7:
                    zmm10 = arg12
                    
                    if (not(cond:76_1))
                    label_1402310da:
                        arg6 = _mm_insert_ps(arg6, zmm2, 0x20)
                        arg12 = arg8
                        zmm14 = var_548_2
                        
                        if (cond:94_1)
                            goto label_1402312f9
                        
                        goto label_1402310ef
                    
                label_1402312ea:
                    arg12 = arg8
                    zmm14 = var_548_2
                    bool cond:130_1
                    bool cond:131_1
                    bool cond:147_1
                    bool cond:148_1
                    
                    if (not(cond:93_1))
                    label_1402312f9:
                        arg12 = _mm_insert_ps(arg12, zmm4, 0x20)
                        arg8 = var_4c8_1
                        arg7 = arg6
                        char temp43_1 = temp0_672 & 8
                        cond:130_1 = temp43_1 == 0
                        cond:131_1 = temp43_1 != 0
                        cond:147_1 = temp43_1 == 0
                        cond:148_1 = temp43_1 != 0
                        
                        if (temp43_1 != 0)
                            goto label_140231104
                        
                        goto label_140231315
                    
                label_1402310ef:
                    arg8 = var_4c8_1
                    arg7 = arg6
                    char temp42_1 = temp0_672 & 8
                    cond:130_1 = temp42_1 == 0
                    cond:131_1 = temp42_1 != 0
                    cond:147_1 = temp42_1 == 0
                    cond:148_1 = temp42_1 != 0
                    
                    if (temp42_1 != 0)
                    label_140231104:
                        zmm10 = __insertps_xmmps_memd_immb(zmm10, var_598_1, 0x30)
                        arg11 = zx.o(0)
                        
                        if (cond:131_1)
                            goto label_14023131f
                        
                        goto label_140231117
                    
                label_140231315:
                    arg11 = zx.o(0)
                    
                    if (cond:130_1)
                    label_140231117:
                        
                        if (not(cond:147_1))
                            arg12 = _mm_insert_ps(arg12, zmm12, 0x30)
                    else
                    label_14023131f:
                        arg7 = __insertps_xmmps_memd_immb(arg7, var_5c8_2, 0x30)
                        
                        if (cond:148_1)
                            arg12 = _mm_insert_ps(arg12, zmm12, 0x30)
                
                arg10 = temp0_670 & not.o(arg5)
                zmm1 = _mm_slli_epi32(arg10, 0x1f)
                char temp0_697 = _mm_movemask_ps(zmm1)
                
                if (temp0_697 == 0)
                    arg9 = var_528_1
                    zmm12 = var_538_1
                    arg10 = var_508_2
                    zmm1 = var_578_2
                    zmm3 = var_458_2
                else
                    zmm12 = zmm10
                    zmm14 = arg7
                    zmm3 = _mm_srai_epi32(_mm_slli_epi32(var_588, 0x1f), 0x1f)
                    zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm3
                    zmm2 = var_3d8_1
                    zmm10 = zmm2
                    arg7 = var_438_2
                    arg9 = arg7
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        zmm0 = data_1434426c0
                        arg11 = zmm0
                        int32_t temp0_702[0x4] = _mm_add_epi64(arg7, zmm0)
                        arg5 = _mm_add_epi64(zmm2, zmm0)
                        zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm10 = _mm_blendv_ps(zmm2, arg5, zmm4)
                        arg5 = _mm_shuffle_epi32(zmm1, 0xfa)
                        arg9 = _mm_blendv_ps(arg7, temp0_702, arg5)
                        zmm1 = __paddq_xmmdq_memdq(var_478_1, var_4b8_2)
                        int32_t temp0_710[0x4] = __paddq_xmmdq_memdq(
                            __paddq_xmmdq_memdq(var_4d8_1, var_558_2), var_468_1)
                        zmm1 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_498_1), arg11)
                        float temp0_714[0x4] =
                            _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_710, arg11), zmm4)
                        zmm4 = _mm_blendv_ps(zx.o(0), zmm1, arg5)
                        arg5 = *(arg13 + temp0_714[0].q)
                        int64_t rax_156 = _mm_extract_epi64(temp0_714, 1)
                        arg11 = zx.o(0)
                        int64_t rsi_12 = zmm4[0].q
                        int64_t rdi_19 = _mm_extract_epi64(zmm4, 1)
                        arg5 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg5, *(arg13 + rax_156), 0x10), 
                                *(arg13 + rsi_12), 0x20), 
                            *(arg13 + rdi_19), 0x30)
                    
                    zmm4 = _mm_blendv_ps(zx.o(0), arg5, zmm3)
                    
                    if ((temp0_697 & 1) != 0)
                        zmm12 = _mm_blend_epi16(zmm12, zmm4, 3)
                        
                        if ((temp0_697 & 2) != 0)
                            goto label_14023134a
                        
                        goto label_14023128e
                    
                    if ((temp0_697 & 2) != 0)
                    label_14023134a:
                        zmm12 = _mm_blend_epi16(zmm12, zmm4, 0xc)
                        
                        if ((temp0_697 & 4) != 0)
                            goto label_140231298
                        
                        goto label_14023135b
                    
                label_14023128e:
                    
                    if ((temp0_697 & 4) == 0)
                    label_14023135b:
                        
                        if ((temp0_697 & 8) != 0)
                            zmm12 = _mm_blend_epi16(zmm12, zmm4, 0xc0)
                    else
                    label_140231298:
                        zmm12 = _mm_blend_epi16(zmm12, zmm4, 0x30)
                        
                        if ((temp0_697 & 8) != 0)
                            zmm12 = _mm_blend_epi16(zmm12, zmm4, 0xc0)
                    
                    zmm0 = data_1434422d0
                    arg5 = var_588 & zmm0
                    zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm0) & arg10, 0x1f)
                    char temp0_730 = _mm_movemask_ps(zmm1)
                    uint128_t var_378
                    
                    if (temp0_730 != 0)
                        zmm0 = data_1434426c0
                        int32_t temp0_731[0x4] = _mm_add_epi64(arg9, zmm0)
                        zmm3 = _mm_add_epi64(zmm10, zmm0)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm4 = _mm_blendv_ps(zmm10, zmm3, _mm_shuffle_epi32(zmm1, 0x50))
                        zmm3 = _mm_blendv_ps(arg9, temp0_731, _mm_shuffle_epi32(zmm1, 0xfa))
                        
                        if ((temp0_730 & 1) != 0)
                            zmm0 = _mm_blend_epi16(var_378, zx.o(*zmm10[0].q), 3)
                            
                            if ((temp0_730 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm10, 1), 0x10)
                        else
                            zmm0 = var_378
                            
                            if ((temp0_730 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm10, 1), 0x10)
                        
                        arg7 = zmm14
                        zmm1 = var_538_1
                        zmm14 = var_548_2
                        zmm10 = zmm12
                        
                        if ((temp0_730 & 4) != 0)
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg9[0].q, 0x20)
                            
                            if ((temp0_730 & 8) != 0)
                            label_140231815:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg9, 1), 0x30)
                                arg5 = _mm_cmpeq_epi32(arg5, arg11) & not.o(zmm0)
                                
                                if ((temp0_697 & 1) == 0)
                                    goto label_140231470
                                
                                goto label_14023159c
                        else if ((temp0_730 & 8) != 0)
                            goto label_140231815
                        
                        arg5 = _mm_cmpeq_epi32(arg5, arg11) & not.o(zmm0)
                        
                        if ((temp0_697 & 1) == 0)
                            goto label_140231470
                        
                        goto label_14023159c
                    
                    zmm4 = zmm10
                    zmm3 = arg9
                    arg7 = zmm14
                    zmm0 = var_378
                    zmm1 = var_538_1
                    zmm14 = var_548_2
                    zmm10 = zmm12
                    arg5 = _mm_cmpeq_epi32(arg5, arg11) & not.o(zmm0)
                    
                    if ((temp0_697 & 1) == 0)
                    label_140231470:
                        zmm12 = zmm1
                        
                        if ((temp0_697 & 2) == 0)
                            goto label_1402315b0
                        
                        goto label_14023147e
                    
                label_14023159c:
                    arg7 = _mm_blend_ps(arg7, arg5, 1)
                    zmm12 = zmm1
                    
                    if ((temp0_697 & 2) == 0)
                    label_1402315b0:
                        
                        if ((temp0_697 & 4) == 0)
                            goto label_140231492
                        
                        goto label_1402315ba
                    
                label_14023147e:
                    arg7 = _mm_blend_ps(arg7, arg5, 2)
                    
                    if ((temp0_697 & 4) != 0)
                    label_1402315ba:
                        arg7 = _mm_blend_ps(arg7, arg5, 4)
                        var_378 = zmm0
                        
                        if ((temp0_697 & 8) != 0)
                            arg7 = _mm_blend_ps(arg7, arg5, 8)
                    else
                    label_140231492:
                        var_378 = zmm0
                        
                        if ((temp0_697 & 8) != 0)
                            arg7 = _mm_blend_ps(arg7, arg5, 8)
                    
                    zmm1 = data_142fc95e0
                    zmm0 = var_588 & zmm1
                    char temp0_743 =
                        _mm_movemask_ps(_mm_slli_epi32(arg10 & _mm_cmpeq_epi32(zmm0, zmm1), 0x1f))
                    uint128_t var_408
                    
                    if (temp0_743 == 0)
                        arg9 = var_528_1
                        arg10 = var_508_2
                    else
                        if ((temp0_743 & 1) == 0)
                            if ((temp0_743 & 2) != 0)
                                goto label_140231616
                            
                            goto label_1402314e8
                        
                        var_408 = _mm_blend_epi16(var_408, zx.o(*zmm4[0].q), 3)
                        
                        if ((temp0_743 & 2) != 0)
                        label_140231616:
                            var_408 = __insertps_xmmps_memd_immb(var_408, 
                                *_mm_extract_epi64(zmm4, 1), 0x10)
                            arg9 = var_528_1
                            arg10 = var_508_2
                            
                            if ((temp0_743 & 4) == 0)
                                goto label_140231503
                            
                            goto label_14023164c
                        
                    label_1402314e8:
                        arg9 = var_528_1
                        arg10 = var_508_2
                        
                        if ((temp0_743 & 4) != 0)
                        label_14023164c:
                            var_408 = __insertps_xmmps_memd_immb(var_408, *zmm3[0].q, 0x20)
                            
                            if ((temp0_743 & 8) != 0)
                                var_408 = __insertps_xmmps_memd_immb(var_408, 
                                    *_mm_extract_epi64(zmm3, 1), 0x30)
                        else
                        label_140231503:
                            
                            if ((temp0_743 & 8) != 0)
                                var_408 = __insertps_xmmps_memd_immb(var_408, 
                                    *_mm_extract_epi64(zmm3, 1), 0x30)
                    
                    zmm1 = var_578_2
                    zmm3 = var_458_2
                    zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(var_408)
                    
                    if ((temp0_697 & 1) != 0)
                        arg12 = _mm_blend_epi16(arg12, zmm0, 3)
                        
                        if ((temp0_697 & 2) != 0)
                            goto label_1402316c6
                        
                        goto label_1402316a6
                    
                    if ((temp0_697 & 2) != 0)
                    label_1402316c6:
                        arg12 = _mm_blend_epi16(arg12, zmm0, 0xc)
                        
                        if ((temp0_697 & 4) != 0)
                            goto label_1402316ac
                        
                        goto label_1402316d3
                    
                label_1402316a6:
                    
                    if ((temp0_697 & 4) == 0)
                    label_1402316d3:
                        
                        if ((temp0_697 & 8) != 0)
                            arg12 = _mm_blend_epi16(arg12, zmm0, 0xc0)
                    else
                    label_1402316ac:
                        arg12 = _mm_blend_epi16(arg12, zmm0, 0x30)
                        
                        if ((temp0_697 & 8) != 0)
                            arg12 = _mm_blend_epi16(arg12, zmm0, 0xc0)
            
            zmm2 = zmm3 ^ data_142d3f800
            uint128_t var_428_2 = zmm2
            
            if (_mm_movemask_ps(zmm1 & not.o(zmm2)) == 0)
                zmm1 = var_3f8_1
            else
                if (temp0_405 == 0)
                    zmm2 = arg12
                    arg12 = arg8
                    arg8 = zmm14
                else
                    zmm2 = temp0_401
                    arg5 = _mm_srai_epi32(_mm_slli_epi32(var_588, 0x1f), 0x1f) & zmm2
                    zmm3 = arg5 & arg8
                    uint32_t temp0_761 = _mm_movemask_ps(zmm3)
                    arg9 = zx.o(0)
                    float var_598_2[0x4] = zmm10
                    float var_4f8_2[0x4] = arg7
                    float var_5c8_4[0x4]
                    
                    if (temp0_761 == 0)
                        zmm14 = arg12
                        zmm10 = var_518_1
                        arg12 = var_5a8_1
                        var_5c8_4 = zx.o(0)
                        arg11 = zx.o(0)
                    else
                        zmm0 = data_1434426c0
                        zmm1 = _mm_add_epi64(var_5a8_1, zmm0)
                        arg6 = var_518_1
                        arg7 = _mm_add_epi64(arg6, zmm0)
                        int32_t temp0_764[0x4] = _mm_unpacklo_epi32(zmm3, zmm3[0].q)
                        arg10 = _mm_blendv_ps(arg6, arg7, temp0_764)
                        float temp0_766[0x4] = _mm_unpackhi_ps(zmm3, zmm3)
                        float temp0_767[0x4] = _mm_blendv_ps(var_5a8_1, zmm1, temp0_766)
                        char rbp_23 = temp0_761.b
                        uint128_t var_228
                        
                        if ((rbp_23 & 1) != 0)
                            zmm0 = _mm_blend_ps(var_228, *arg6[0].q, 1)
                            
                            if ((rbp_23 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg6, 1), 0x10)
                        else
                            zmm0 = var_228
                            
                            if ((rbp_23 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg6, 1), 0x10)
                        
                        if ((rbp_23 & 4) == 0)
                            if ((rbp_23 & 8) != 0)
                                goto label_1402318d0
                            
                            goto label_14023186c
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0].q, 0x20)
                        char rdi_20
                        
                        if ((rbp_23 & 8) != 0)
                        label_1402318d0:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                            rdi_20 = _mm_movemask_ps(arg5)
                            zmm1 = zx.o(0)
                            
                            if ((rdi_20 & 1) != 0)
                                goto label_14023187b
                            
                            goto label_1402318e3
                        
                    label_14023186c:
                        rdi_20 = _mm_movemask_ps(arg5)
                        zmm1 = zx.o(0)
                        
                        if ((rdi_20 & 1) == 0)
                        label_1402318e3:
                            
                            if ((rdi_20 & 2) != 0)
                            label_1402318e9:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                                
                                if ((rdi_20 & 4) != 0)
                                    goto label_14023188d
                                
                                goto label_1402318f9
                        else
                        label_14023187b:
                            zmm1 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rdi_20 & 2) != 0)
                                goto label_1402318e9
                        
                        if ((rdi_20 & 4) == 0)
                        label_1402318f9:
                            var_228 = zmm0
                            
                            if ((rdi_20 & 8) == 0)
                                var_5c8_4 = zmm1
                                zmm14 = arg12
                            else
                                zmm14 = arg12
                                var_5c8_4 = _mm_blend_ps(zmm1, zmm0, 8)
                        else
                        label_14023188d:
                            zmm1 = _mm_blend_ps(zmm1, zmm0, 4)
                            var_228 = zmm0
                            
                            if ((rdi_20 & 8) != 0)
                                zmm14 = arg12
                                var_5c8_4 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                                var_5c8_4 = zmm1
                                zmm14 = arg12
                        
                        zmm0 = data_1434426c0
                        zmm10 = _mm_blendv_ps(arg10, _mm_add_epi64(arg10, zmm0), temp0_764)
                        arg12 = _mm_blendv_ps(temp0_767, _mm_add_epi64(temp0_767, zmm0), temp0_766)
                        uint128_t var_238
                        
                        if ((rbp_23 & 1) != 0)
                            zmm0 = _mm_blend_ps(var_238, *arg10[0].q, 1)
                            zmm1 = var_578_2
                            
                            if ((rbp_23 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg10, 1), 0x10)
                        else
                            zmm0 = var_238
                            zmm1 = var_578_2
                            
                            if ((rbp_23 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg10, 1), 0x10)
                        
                        zmm2 = temp0_401
                        
                        if ((rbp_23 & 4) == 0)
                            if ((rbp_23 & 8) != 0)
                                goto label_1402319fc
                            
                            goto label_1402319ac
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_767[0].q, 0x20)
                        
                        if ((rbp_23 & 8) != 0)
                        label_1402319fc:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_767, 1), 0x30)
                            arg11 = zx.o(0)
                            
                            if ((rdi_20 & 1) != 0)
                                goto label_1402319ba
                            
                            goto label_140231a0c
                        
                    label_1402319ac:
                        arg11 = zx.o(0)
                        
                        if ((rdi_20 & 1) == 0)
                        label_140231a0c:
                            
                            if ((rdi_20 & 2) != 0)
                            label_140231a12:
                                arg11 = _mm_blend_ps(arg11, zmm0, 2)
                                
                                if ((rdi_20 & 4) != 0)
                                    goto label_1402319cd
                                
                                goto label_140231a23
                        else
                        label_1402319ba:
                            arg11 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rdi_20 & 2) != 0)
                                goto label_140231a12
                        
                        if ((rdi_20 & 4) == 0)
                        label_140231a23:
                            var_238 = zmm0
                            
                            if ((rdi_20 & 8) != 0)
                                arg11 = _mm_blend_ps(arg11, zmm0, 8)
                        else
                        label_1402319cd:
                            arg11 = _mm_blend_ps(arg11, zmm0, 4)
                            var_238 = zmm0
                            
                            if ((rdi_20 & 8) != 0)
                                arg11 = _mm_blend_ps(arg11, zmm0, 8)
                    
                    zmm0 = data_1434422d0
                    arg5 = _mm_cmpeq_epi32(var_588 & zmm0, zmm0) & zmm2
                    zmm1 &= not.o(arg5)
                    char temp0_794 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_794 == 0)
                        arg8 = zx.o(0)
                        zmm1 = var_578_2
                    else
                        arg7 = zmm14
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
                        zmm0 = data_1434426c0
                        zmm2 = _mm_add_epi64(arg12, zmm0)
                        int32_t temp0_798[0x4] = _mm_add_epi64(zmm10, zmm0)
                        zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm14 = _mm_blendv_ps(zmm10, temp0_798, zmm3)
                        zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                        arg6 = _mm_blendv_ps(arg12, zmm2, zmm4)
                        uint128_t var_248
                        
                        if ((temp0_794 & 1) != 0)
                            zmm0 = _mm_blend_epi16(var_248, zx.o(*zmm10[0].q), 3)
                            
                            if ((temp0_794 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm10, 1), 0x10)
                        else
                            zmm0 = var_248
                            
                            if ((temp0_794 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm10, 1), 0x10)
                        
                        if ((temp0_794 & 4) == 0)
                            if ((temp0_794 & 8) != 0)
                                goto label_140231b5b
                            
                            goto label_140231b08
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg12[0].q, 0x20)
                        char rdi_21
                        
                        if ((temp0_794 & 8) != 0)
                        label_140231b5b:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg12, 1), 0x30)
                            rdi_21 = _mm_movemask_ps(arg5)
                            arg9 = zx.o(0)
                            
                            if ((rdi_21 & 1) != 0)
                                goto label_140231b19
                            
                            goto label_140231b6e
                        
                    label_140231b08:
                        rdi_21 = _mm_movemask_ps(arg5)
                        arg9 = zx.o(0)
                        
                        if ((rdi_21 & 1) == 0)
                        label_140231b6e:
                            
                            if ((rdi_21 & 2) != 0)
                            label_140231b74:
                                arg9 = _mm_blend_ps(arg9, zmm0, 2)
                                
                                if ((rdi_21 & 4) != 0)
                                    goto label_140231b2c
                                
                                goto label_140231b85
                        else
                        label_140231b19:
                            arg9 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rdi_21 & 2) != 0)
                                goto label_140231b74
                        
                        if ((rdi_21 & 4) == 0)
                        label_140231b85:
                            var_248 = zmm0
                            
                            if ((rdi_21 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm0, 8)
                        else
                        label_140231b2c:
                            arg9 = _mm_blend_ps(arg9, zmm0, 4)
                            var_248 = zmm0
                            
                            if ((rdi_21 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm0, 8)
                        
                        zmm0 = data_1434426c0
                        zmm10 = _mm_blendv_ps(zmm14, _mm_add_epi64(zmm14, zmm0), zmm3)
                        arg12 = _mm_blendv_ps(arg6, _mm_add_epi64(arg6, zmm0), zmm4)
                        uint128_t var_258
                        
                        if ((temp0_794 & 1) != 0)
                            zmm0 = _mm_blend_ps(var_258, *zmm14.q, 1)
                            zmm1 = var_578_2
                            
                            if ((temp0_794 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm14, 1), 0x10)
                        else
                            zmm0 = var_258
                            zmm1 = var_578_2
                            
                            if ((temp0_794 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm14, 1), 0x10)
                        
                        zmm14 = arg7
                        
                        if ((temp0_794 & 4) == 0)
                            if ((temp0_794 & 8) != 0)
                                goto label_140231c85
                            
                            goto label_140231c2c
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg6[0].q, 0x20)
                        
                        if ((temp0_794 & 8) != 0)
                        label_140231c85:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg6, 1), 0x30)
                            zmm2 = temp0_401
                            arg8 = zx.o(0)
                            
                            if ((rdi_21 & 1) != 0)
                                goto label_140231c43
                            
                            goto label_140231c9e
                        
                    label_140231c2c:
                        zmm2 = temp0_401
                        arg8 = zx.o(0)
                        
                        if ((rdi_21 & 1) == 0)
                        label_140231c9e:
                            
                            if ((rdi_21 & 2) != 0)
                            label_140231ca4:
                                arg8 = _mm_blend_ps(arg8, zmm0, 2)
                                
                                if ((rdi_21 & 4) != 0)
                                    goto label_140231c56
                                
                                goto label_140231cb5
                        else
                        label_140231c43:
                            arg8 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rdi_21 & 2) != 0)
                                goto label_140231ca4
                        
                        if ((rdi_21 & 4) == 0)
                        label_140231cb5:
                            var_258 = zmm0
                            
                            if ((rdi_21 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm0, 8)
                        else
                        label_140231c56:
                            arg8 = _mm_blend_ps(arg8, zmm0, 4)
                            var_258 = zmm0
                            
                            if ((rdi_21 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm0, 8)
                    
                    zmm0 = data_142fc95e0
                    zmm4 = _mm_cmpeq_epi32(var_588 & zmm0, zmm0) & zmm2
                    zmm1 &= not.o(zmm4)
                    char temp0_826 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_826 == 0)
                        zmm4 = zx.o(0)
                        arg6 = zx.o(0)
                        zmm10 = var_598_2
                        arg7 = var_4f8_2
                        arg10 = var_508_2
                        zmm1 = var_4d8_1
                    else
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
                        zmm0 = data_1434426c0
                        zmm2 = _mm_add_epi64(arg12, zmm0)
                        arg5 = _mm_blendv_ps(zmm10, _mm_add_epi64(zmm10, zmm0), 
                            _mm_shuffle_epi32(zmm1, 0x50))
                        arg6 = _mm_blendv_ps(arg12, zmm2, _mm_shuffle_epi32(zmm1, 0xfa))
                        uint128_t var_268
                        
                        if ((temp0_826 & 1) != 0)
                            zmm0 = _mm_blend_epi16(var_268, zx.o(*zmm10[0].q), 3)
                            
                            if ((temp0_826 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm10, 1), 0x10)
                        else
                            zmm0 = var_268
                            
                            if ((temp0_826 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm10, 1), 0x10)
                        
                        arg7 = var_4f8_2
                        arg10 = var_508_2
                        
                        if ((temp0_826 & 4) != 0)
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg12[0].q, 0x20)
                            
                            if ((temp0_826 & 8) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg12, 1), 0x30)
                        else if ((temp0_826 & 8) != 0)
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg12, 1), 0x30)
                        
                        zmm10 = var_598_2
                        char temp0_838 = _mm_movemask_ps(zmm4)
                        zmm4 = zx.o(0)
                        
                        if ((temp0_838 & 1) != 0)
                            zmm4 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((temp0_838 & 2) != 0)
                                goto label_140231e28
                            
                            goto label_140231dec
                        
                        if ((temp0_838 & 2) == 0)
                        label_140231dec:
                            
                            if ((temp0_838 & 4) != 0)
                            label_140231df1:
                                zmm4 = _mm_blend_ps(zmm4, zmm0, 4)
                                
                                if ((temp0_838 & 8) != 0)
                                    goto label_140231e38
                                
                                goto label_140231e00
                        else
                        label_140231e28:
                            zmm4 = _mm_blend_ps(zmm4, zmm0, 2)
                            
                            if ((temp0_838 & 4) != 0)
                                goto label_140231df1
                        
                        if ((temp0_838 & 8) != 0)
                        label_140231e38:
                            zmm4 = _mm_blend_ps(zmm4, zmm0, 8)
                            var_268 = zmm0
                            
                            if ((temp0_826 & 1) == 0)
                                goto label_140231e0a
                            
                            goto label_140231e63
                        
                    label_140231e00:
                        var_268 = zmm0
                        uint128_t var_278
                        
                        if ((temp0_826 & 1) != 0)
                        label_140231e63:
                            zmm0 = _mm_blend_ps(var_278, *arg5.q, 1)
                            zmm1 = var_4d8_1
                            
                            if ((temp0_826 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg5, 1), 0x10)
                        else
                        label_140231e0a:
                            zmm0 = var_278
                            zmm1 = var_4d8_1
                            
                            if ((temp0_826 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg5, 1), 0x10)
                        
                        if ((temp0_826 & 4) == 0)
                            if ((temp0_826 & 8) != 0)
                                goto label_140231ef0
                            
                            goto label_140231e8e
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg6[0].q, 0x20)
                        
                        if ((temp0_826 & 8) != 0)
                        label_140231ef0:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg6, 1), 0x30)
                            arg6 = zx.o(0)
                            
                            if ((temp0_838 & 1) != 0)
                                goto label_140231e99
                            
                            goto label_140231efe
                        
                    label_140231e8e:
                        arg6 = zx.o(0)
                        
                        if ((temp0_838 & 1) == 0)
                        label_140231efe:
                            
                            if ((temp0_838 & 2) != 0)
                            label_140231f03:
                                arg6 = _mm_blend_ps(arg6, zmm0, 2)
                                
                                if ((temp0_838 & 4) != 0)
                                    goto label_140231ea9
                                
                                goto label_140231f11
                        else
                        label_140231e99:
                            arg6 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((temp0_838 & 2) != 0)
                                goto label_140231f03
                        
                        if ((temp0_838 & 4) == 0)
                        label_140231f11:
                            var_278 = zmm0
                            
                            if ((temp0_838 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                        else
                        label_140231ea9:
                            arg6 = _mm_blend_ps(arg6, zmm0, 4)
                            var_278 = zmm0
                            
                            if ((temp0_838 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                    
                    zmm1 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(zmm1, var_558_2), var_468_1)
                    zmm0 = data_1434426c0
                    zmm3 = var_1f8_1
                    arg5 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), 
                        _mm_shuffle_epi32(zmm3, 0x50))
                    zmm2 = _mm_blendv_ps(zx.o(0), 
                        _mm_add_epi64(
                            __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_478_1, var_4b8_2), 
                                var_498_1), 
                            zmm0), 
                        _mm_shuffle_epi32(zmm3, 0xfa))
                    int64_t rcx_57 = _mm_extract_epi64(arg5, 1)
                    int64_t rdi_23 = _mm_extract_epi64(zmm2, 1)
                    zmm0 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg13 + arg5.q)), *(arg13 + rcx_57), 
                                1), 
                            *(arg13 + zmm2.q), 2), 
                        *(arg13 + rdi_23), 3)
                    zmm1 = zmm0
                    arg5 = _mm_add_ps(var_5c8_4, 
                        _mm_mul_ps(arg11, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    zmm2 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    zmm0 = data_143442440
                    zmm3 = zmm0
                    zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm0))
                    zmm2 = data_143442690
                    arg8 = _mm_mul_ps(arg8, _mm_div_ps(zmm0, zmm2))
                    zmm0 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm1, 0x15), zmm3)), zmm2)
                    char temp36_1 = temp0_405 & 1
                    
                    if (temp36_1 != 0)
                        zmm10 = _mm_blend_ps(zmm10, arg5, 1)
                    
                    arg11 = zx.o(0)
                    zmm1 = var_578_2
                    zmm3 = var_458_2
                    arg6 = _mm_mul_ps(arg6, zmm0)
                    float temp0_881[0x4] = _mm_add_ps(arg9, arg8)
                    
                    if (temp36_1 != 0)
                        arg7 = _mm_blend_ps(arg7, temp0_881, 1)
                        arg8 = var_548_2
                        zmm4 = _mm_add_ps(zmm4, arg6)
                        
                        if (temp36_1 != 0)
                            goto label_140232282
                        
                        goto label_140232071
                    
                    arg8 = var_548_2
                    zmm4 = _mm_add_ps(zmm4, arg6)
                    bool cond:170_1
                    bool cond:171_1
                    bool cond:184_1
                    bool cond:185_1
                    
                    if (temp36_1 != 0)
                    label_140232282:
                        zmm14 = _mm_blend_ps(zmm14, zmm4, 1)
                        char temp56_1 = temp0_405 & 2
                        cond:170_1 = temp56_1 == 0
                        cond:171_1 = temp56_1 != 0
                        cond:184_1 = temp56_1 == 0
                        cond:185_1 = temp56_1 != 0
                        
                        if (temp56_1 != 0)
                            goto label_14023207a
                        
                        goto label_140232292
                    
                label_140232071:
                    char temp55_1 = temp0_405 & 2
                    cond:170_1 = temp55_1 == 0
                    cond:171_1 = temp55_1 != 0
                    cond:184_1 = temp55_1 == 0
                    cond:185_1 = temp55_1 != 0
                    
                    if (temp55_1 == 0)
                    label_140232292:
                        
                        if (not(cond:170_1))
                        label_140232298:
                            arg7 = _mm_blend_ps(arg7, temp0_881, 2)
                            
                            if (cond:185_1)
                                goto label_14023208d
                            
                            goto label_1402322a5
                    else
                    label_14023207a:
                        zmm10 = _mm_blend_ps(zmm10, arg5, 2)
                        
                        if (cond:171_1)
                            goto label_140232298
                    
                    bool cond:235_1
                    bool cond:236_1
                    bool cond:253_1
                    bool cond:254_1
                    
                    if (not(cond:184_1))
                    label_14023208d:
                        zmm14 = _mm_blend_ps(zmm14, zmm4, 2)
                        char temp81_1 = temp0_405 & 4
                        cond:235_1 = temp81_1 == 0
                        cond:236_1 = temp81_1 != 0
                        cond:253_1 = temp81_1 == 0
                        cond:254_1 = temp81_1 != 0
                        
                        if (temp81_1 != 0)
                            goto label_1402322ae
                        
                        goto label_14023209d
                    
                label_1402322a5:
                    char temp80_1 = temp0_405 & 4
                    cond:235_1 = temp80_1 == 0
                    cond:236_1 = temp80_1 != 0
                    cond:253_1 = temp80_1 == 0
                    cond:254_1 = temp80_1 != 0
                    
                    if (temp80_1 == 0)
                    label_14023209d:
                        
                        if (not(cond:235_1))
                        label_1402320a3:
                            arg7 = _mm_blend_ps(arg7, temp0_881, 4)
                            
                            if (cond:254_1)
                                goto label_1402322c8
                            
                            goto label_1402320b0
                    else
                    label_1402322ae:
                        zmm10 = _mm_blend_ps(zmm10, arg5, 4)
                        
                        if (cond:236_1)
                            goto label_1402320a3
                    
                    bool cond:297_1
                    bool cond:298_1
                    bool cond:315_1
                    bool cond:316_1
                    
                    if (not(cond:253_1))
                    label_1402322c8:
                        zmm2 = _mm_blend_ps(zmm14, zmm4, 4)
                        char temp107_1 = temp0_405 & 8
                        cond:297_1 = temp107_1 == 0
                        cond:298_1 = temp107_1 != 0
                        cond:315_1 = temp107_1 == 0
                        cond:316_1 = temp107_1 != 0
                        
                        if (temp107_1 != 0)
                            goto label_1402320bd
                        
                        goto label_1402322d5
                    
                label_1402320b0:
                    zmm2 = zmm14
                    char temp106_1 = temp0_405 & 8
                    cond:297_1 = temp106_1 == 0
                    cond:298_1 = temp106_1 != 0
                    cond:315_1 = temp106_1 == 0
                    cond:316_1 = temp106_1 != 0
                    
                    if (temp106_1 != 0)
                    label_1402320bd:
                        zmm10 = _mm_blend_ps(zmm10, arg5, 8)
                        arg12 = var_4c8_1
                        
                        if (cond:298_1)
                            goto label_1402322e4
                        
                        goto label_1402320d3
                    
                label_1402322d5:
                    arg12 = var_4c8_1
                    
                    if (cond:297_1)
                    label_1402320d3:
                        
                        if (not(cond:315_1))
                            zmm2 = _mm_blend_ps(zmm2, zmm4, 8)
                    else
                    label_1402322e4:
                        arg7 = _mm_blend_ps(arg7, temp0_881, 8)
                        
                        if (cond:316_1)
                            zmm2 = _mm_blend_ps(zmm2, zmm4, 8)
                
                arg9 = temp0_401 ^ var_428_2
                
                if (_mm_movemask_ps(zmm1 & not.o(arg9)) == 0)
                    arg9 = var_528_1
                    zmm14 = arg8
                    arg8 = arg12
                    zmm12 = var_538_1
                    arg12 = zmm2
                    zmm1 = var_3f8_1
                else
                    zmm12 = zmm10
                    uint128_t var_5c8_5 = zmm2
                    zmm14 = arg7
                    arg5 = __pcmpeqd_xmmdq_memdq(var_568, data_1434422d0)
                    zmm10 = zmm1 & not.o(arg5)
                    char temp0_891 = _mm_movemask_ps(zmm10)
                    
                    if (temp0_891 == 0)
                        arg7 = zmm14
                        arg10 = var_508_2
                        zmm14 = arg8
                        arg8 = arg12
                        zmm4 = var_538_1
                        arg12 = var_5c8_5
                        zmm10 = zmm12
                    else
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_588, 0x1f), 0x1f)
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm10, 0x1f), 0x1f) & zmm2
                        uint128_t var_598_3 = arg5
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            arg6 = var_438_2
                            zmm0 = data_1434426b0
                            arg7 = _mm_add_epi64(arg6, zmm0)
                            arg5 = _mm_add_epi64(var_3d8_1, zmm0)
                            zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                            var_3d8_1 = _mm_blendv_ps(var_3d8_1, arg5, zmm3)
                            zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                            var_438_2 = _mm_blendv_ps(arg6, arg7, zmm4)
                            zmm1 = __paddq_xmmdq_memdq(var_478_1, var_4b8_2)
                            arg7 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8_1, var_558_2), 
                                var_468_1)
                            zmm1 = __paddq_xmmdq_memdq(zmm1, var_498_1)
                            zmm0 = data_1434426c0
                            zmm1 = _mm_add_epi64(zmm1, zmm0)
                            arg6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg7, zmm0), zmm3)
                            float temp0_910[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm4)
                            int64_t rax_192 = _mm_extract_epi64(arg6, 1)
                            int64_t rbp_25 = arg6[0].q
                            int64_t rbx_11 = temp0_910[0].q
                            int64_t rdi_24 = _mm_extract_epi64(temp0_910, 1)
                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg13 + rbp_25)), 
                                            *(arg13 + rax_192), 1), 
                                        *(arg13 + rbx_11), 2), 
                                    *(arg13 + rdi_24), 3).q), 
                                data_143442b40))
                        
                        float temp0_923[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        
                        if ((temp0_891 & 1) != 0)
                            zmm12 = _mm_blend_epi16(zmm12, temp0_923, 3)
                            arg11 = zx.o(0)
                            
                            if ((temp0_891 & 2) != 0)
                                goto label_14023238f
                            
                            goto label_14023236f
                        
                        arg11 = zx.o(0)
                        
                        if ((temp0_891 & 2) != 0)
                        label_14023238f:
                            zmm12 = _mm_blend_epi16(zmm12, temp0_923, 0xc)
                            
                            if ((temp0_891 & 4) != 0)
                                goto label_140232375
                            
                            goto label_14023239c
                        
                    label_14023236f:
                        
                        if ((temp0_891 & 4) == 0)
                        label_14023239c:
                            
                            if ((temp0_891 & 8) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, temp0_923, 0xc0)
                        else
                        label_140232375:
                            zmm12 = _mm_blend_epi16(zmm12, temp0_923, 0x30)
                            
                            if ((temp0_891 & 8) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, temp0_923, 0xc0)
                        
                        zmm0 = data_1434422d0
                        zmm4 = var_588 & zmm0
                        zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm4, zmm0) & zmm10, 0x1f)
                        char temp0_930 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_930 == 0)
                            arg10 = var_3d8_1
                            zmm2 = var_438_2
                            zmm4 = _mm_cmpeq_epi32(zmm4, arg11) & not.o(zmm0)
                            
                            if ((temp0_891 & 1) != 0)
                                zmm14 = _mm_blend_ps(zmm14, zmm4, 1)
                        else
                            arg7 = var_438_2
                            zmm0 = data_1434426b0
                            int32_t temp0_931[0x4] = _mm_add_epi64(arg7, zmm0)
                            zmm3 = var_3d8_1
                            zmm2 = _mm_add_epi64(zmm3, zmm0)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            arg10 = _mm_blendv_ps(zmm3, zmm2, _mm_shuffle_epi32(zmm1, 0x50))
                            zmm2 = _mm_blendv_ps(arg7, temp0_931, _mm_shuffle_epi32(zmm1, 0xfa))
                            uint128_t var_288
                            
                            if ((temp0_930 & 1) != 0)
                                zmm0 = _mm_insert_epi32(var_288, zx.d(*zmm3[0].q), 0)
                                
                                if ((temp0_930 & 2) != 0)
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_3d8_1, 1)), 1)
                            else
                                zmm0 = var_288
                                
                                if ((temp0_930 & 2) != 0)
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_3d8_1, 1)), 1)
                            
                            if ((temp0_930 & 4) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*var_438_2[0].q), 2)
                                
                                if ((temp0_930 & 8) != 0)
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_438_2, 1)), 3)
                            else if ((temp0_930 & 8) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, 
                                    zx.d(*_mm_extract_epi64(var_438_2, 1)), 3)
                            
                            var_288 = zmm0
                            zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zmm0, arg11, 0xaa), data_143442b40))
                            zmm4 = _mm_cmpeq_epi32(zmm4, arg11) & not.o(zmm0)
                            
                            if ((temp0_891 & 1) != 0)
                                zmm14 = _mm_blend_ps(zmm14, zmm4, 1)
                        
                        if ((temp0_891 & 2) != 0)
                            zmm14 = _mm_blend_ps(zmm14, zmm4, 2)
                            
                            if ((temp0_891 & 4) != 0)
                                goto label_140232567
                            
                            goto label_140232502
                        
                        if ((temp0_891 & 4) == 0)
                        label_140232502:
                            
                            if ((temp0_891 & 8) != 0)
                                zmm14 = _mm_blend_ps(zmm14, zmm4, 8)
                        else
                        label_140232567:
                            zmm14 = _mm_blend_ps(zmm14, zmm4, 4)
                            
                            if ((temp0_891 & 8) != 0)
                                zmm14 = _mm_blend_ps(zmm14, zmm4, 8)
                        
                        zmm1 = data_142fc95e0
                        zmm0 = var_588 & zmm1
                        zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm0, zmm1) & zmm10, 0x1f)
                        char temp0_951 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_951 != 0)
                            float var_298[0x4]
                            
                            if ((temp0_951 & 1) != 0)
                                zmm1 = _mm_insert_epi32(var_298, zx.d(*arg10[0].q), 0)
                                
                                if ((temp0_951 & 2) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, 
                                        zx.d(*_mm_extract_epi64(arg10, 1)), 1)
                            else
                                zmm1 = var_298
                                
                                if ((temp0_951 & 2) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, 
                                        zx.d(*_mm_extract_epi64(arg10, 1)), 1)
                            
                            arg7 = zmm14
                            zmm3 = var_5c8_5
                            arg10 = var_508_2
                            zmm14 = arg8
                            arg8 = arg12
                            zmm4 = var_538_1
                            zmm10 = zmm12
                            arg5 = var_598_3
                            
                            if ((temp0_951 & 4) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2.q), 2)
                            
                            if ((temp0_951 & 8) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                            
                            var_298 = zmm1
                            float temp0_961[0x4] = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zmm1, arg11, 0xaa), data_143442b40))
                            zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(temp0_961)
                            
                            if ((temp0_891 & 1) == 0)
                                goto label_1402325b8
                            
                            goto label_1402326b6
                        
                        arg7 = zmm14
                        zmm3 = var_5c8_5
                        arg10 = var_508_2
                        zmm14 = arg8
                        arg8 = arg12
                        zmm4 = var_538_1
                        zmm10 = zmm12
                        arg5 = var_598_3
                        zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(zmm1)
                        
                        if ((temp0_891 & 1) != 0)
                        label_1402326b6:
                            arg12 = _mm_blend_epi16(zmm3, zmm0, 3)
                            zmm1 = var_578_2
                            zmm3 = var_458_2
                            
                            if ((temp0_891 & 2) != 0)
                                arg12 = _mm_blend_epi16(arg12, zmm0, 0xc)
                        else
                        label_1402325b8:
                            zmm1 = var_578_2
                            arg12 = zmm3
                            zmm3 = var_458_2
                            
                            if ((temp0_891 & 2) != 0)
                                arg12 = _mm_blend_epi16(arg12, zmm0, 0xc)
                        
                        if ((temp0_891 & 4) != 0)
                            arg12 = _mm_blend_epi16(arg12, zmm0, 0x30)
                            
                            if ((temp0_891 & 8) != 0)
                                arg12 = _mm_blend_epi16(arg12, zmm0, 0xc0)
                        else if ((temp0_891 & 8) != 0)
                            arg12 = _mm_blend_epi16(arg12, zmm0, 0xc0)
                    
                    zmm0 = zmm1 & not.o(arg9 ^ arg5)
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        arg9 = var_528_1
                        zmm12 = zmm4
                        zmm1 = var_3f8_1
                    else
                        zmm2 = __pcmpeqd_xmmdq_memdq(var_568, data_143442ad0)
                        char temp0_969 = _mm_movemask_ps(zmm1 & not.o(zmm2))
                        
                        if (temp0_969 == 0)
                            arg9 = var_528_1
                            zmm12 = zmm4
                            zmm1 = var_3f8_1
                        else
                            char temp35_1 = temp0_969 & 1
                            
                            if (temp35_1 == 0)
                                arg9 = var_528_1
                                zmm12 = zmm4
                                zmm1 = var_3f8_1
                                
                                if (temp35_1 != 0)
                                label_1402327b8:
                                    arg7 = _mm_blend_ps(arg7, arg11, 1)
                                    
                                    if (temp35_1 != 0)
                                        goto label_14023275b
                                    
                                    goto label_1402327c1
                            else
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 3)
                                arg9 = var_528_1
                                zmm12 = zmm4
                                zmm1 = var_3f8_1
                                
                                if (temp35_1 != 0)
                                    goto label_1402327b8
                            
                            bool cond:168_1
                            bool cond:169_1
                            bool cond:182_1
                            bool cond:183_1
                            
                            if (temp35_1 != 0)
                            label_14023275b:
                                arg12 = _mm_blend_epi16(arg12, arg11, 3)
                                char temp54_1 = temp0_969 & 2
                                cond:168_1 = temp54_1 == 0
                                cond:169_1 = temp54_1 != 0
                                cond:182_1 = temp54_1 == 0
                                cond:183_1 = temp54_1 != 0
                                
                                if (temp54_1 != 0)
                                    goto label_1402327c6
                                
                                goto label_140232767
                            
                        label_1402327c1:
                            char temp53_1 = temp0_969 & 2
                            cond:168_1 = temp53_1 == 0
                            cond:169_1 = temp53_1 != 0
                            cond:182_1 = temp53_1 == 0
                            cond:183_1 = temp53_1 != 0
                            
                            if (temp53_1 == 0)
                            label_140232767:
                                
                                if (not(cond:168_1))
                                label_140232769:
                                    arg7 = _mm_blend_ps(arg7, arg11, 2)
                                    
                                    if (cond:183_1)
                                        goto label_1402327d1
                                    
                                    goto label_140232772
                            else
                            label_1402327c6:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0xc)
                                
                                if (cond:169_1)
                                    goto label_140232769
                            
                            bool cond:233_1
                            bool cond:234_1
                            bool cond:251_1
                            bool cond:252_1
                            
                            if (not(cond:182_1))
                            label_1402327d1:
                                arg12 = _mm_blend_epi16(arg12, arg11, 0xc)
                                char temp79_1 = temp0_969 & 4
                                cond:233_1 = temp79_1 == 0
                                cond:234_1 = temp79_1 != 0
                                cond:251_1 = temp79_1 == 0
                                cond:252_1 = temp79_1 != 0
                                
                                if (temp79_1 != 0)
                                    goto label_140232777
                                
                                goto label_1402327dd
                            
                        label_140232772:
                            char temp78_1 = temp0_969 & 4
                            cond:233_1 = temp78_1 == 0
                            cond:234_1 = temp78_1 != 0
                            cond:251_1 = temp78_1 == 0
                            cond:252_1 = temp78_1 != 0
                            
                            if (temp78_1 == 0)
                            label_1402327dd:
                                
                                if (not(cond:233_1))
                                label_1402327df:
                                    arg7 = _mm_blend_ps(arg7, arg11, 4)
                                    
                                    if (cond:252_1)
                                        goto label_140232782
                                    
                                    goto label_1402327e8
                            else
                            label_140232777:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0x30)
                                
                                if (cond:234_1)
                                    goto label_1402327df
                            
                            bool cond:295_1
                            bool cond:296_1
                            bool cond:313_1
                            bool cond:314_1
                            
                            if (not(cond:251_1))
                            label_140232782:
                                arg12 = _mm_blend_epi16(arg12, arg11, 0x30)
                                char temp105_1 = temp0_969 & 8
                                cond:295_1 = temp105_1 == 0
                                cond:296_1 = temp105_1 != 0
                                cond:313_1 = temp105_1 == 0
                                cond:314_1 = temp105_1 == 0
                                
                                if (temp105_1 != 0)
                                    goto label_1402327ed
                                
                                goto label_14023278e
                            
                        label_1402327e8:
                            char temp104_1 = temp0_969 & 8
                            cond:295_1 = temp104_1 == 0
                            cond:296_1 = temp104_1 != 0
                            cond:313_1 = temp104_1 == 0
                            cond:314_1 = temp104_1 == 0
                            
                            if (temp104_1 != 0)
                            label_1402327ed:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0xc0)
                                
                                if (cond:296_1)
                                    goto label_140232790
                                
                                goto label_1402327f6
                            
                        label_14023278e:
                            
                            if (cond:295_1)
                            label_1402327f6:
                                
                                if (not(cond:313_1))
                                    arg12 = _mm_blend_epi16(arg12, arg11, 0xc0)
                            else
                            label_140232790:
                                arg7 = _mm_blend_ps(arg7, arg11, 8)
                                
                                if (not(cond:314_1))
                                    arg12 = _mm_blend_epi16(arg12, arg11, 0xc0)
                        
                        char temp0_56 = _mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm0), 0x1f))
                        
                        if (temp0_56 != 0)
                            char temp48_1 = temp0_56 & 1
                            
                            if (temp48_1 != 0)
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 3)
                                
                                if (temp48_1 != 0)
                                    goto label_14022e3c5
                            else if (temp48_1 != 0)
                            label_14022e3c5:
                                arg7 = _mm_blend_ps(arg7, arg11, 1)
                                
                                if (temp48_1 != 0)
                                    goto label_14022e37f
                                
                                goto label_14022e3ce
                            
                            bool cond:180_1
                            bool cond:181_1
                            bool cond:207_1
                            bool cond:208_1
                            
                            if (temp48_1 != 0)
                            label_14022e37f:
                                arg12 = _mm_blend_epi16(arg12, arg11, 3)
                                char temp70_1 = temp0_56 & 2
                                cond:180_1 = temp70_1 == 0
                                cond:181_1 = temp70_1 != 0
                                cond:207_1 = temp70_1 == 0
                                cond:208_1 = temp70_1 != 0
                                
                                if (temp70_1 != 0)
                                    goto label_14022e3d3
                                
                                goto label_14022e38b
                            
                        label_14022e3ce:
                            char temp69_1 = temp0_56 & 2
                            cond:180_1 = temp69_1 == 0
                            cond:181_1 = temp69_1 != 0
                            cond:207_1 = temp69_1 == 0
                            cond:208_1 = temp69_1 != 0
                            
                            if (temp69_1 == 0)
                            label_14022e38b:
                                
                                if (not(cond:180_1))
                                label_14022e38d:
                                    arg7 = _mm_blend_ps(arg7, arg11, 2)
                                    
                                    if (cond:208_1)
                                        goto label_14022e3de
                                    
                                    goto label_14022e396
                            else
                            label_14022e3d3:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0xc)
                                
                                if (cond:181_1)
                                    goto label_14022e38d
                            
                            bool cond:249_1
                            bool cond:250_1
                            bool cond:274_1
                            bool cond:275_1
                            
                            if (not(cond:207_1))
                            label_14022e3de:
                                arg12 = _mm_blend_epi16(arg12, arg11, 0xc)
                                char temp96_1 = temp0_56 & 4
                                cond:249_1 = temp96_1 == 0
                                cond:250_1 = temp96_1 != 0
                                cond:274_1 = temp96_1 == 0
                                cond:275_1 = temp96_1 != 0
                                
                                if (temp96_1 != 0)
                                    goto label_14022e39b
                                
                                goto label_14022e3ea
                            
                        label_14022e396:
                            char temp95_1 = temp0_56 & 4
                            cond:249_1 = temp95_1 == 0
                            cond:250_1 = temp95_1 != 0
                            cond:274_1 = temp95_1 == 0
                            cond:275_1 = temp95_1 != 0
                            
                            if (temp95_1 == 0)
                            label_14022e3ea:
                                
                                if (not(cond:249_1))
                                label_14022e3ec:
                                    arg7 = _mm_blend_ps(arg7, arg11, 4)
                                    
                                    if (cond:275_1)
                                        goto label_14022e3a6
                                    
                                    goto label_14022e3f5
                            else
                            label_14022e39b:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0x30)
                                
                                if (cond:250_1)
                                    goto label_14022e3ec
                            
                            bool cond:311_1
                            bool cond:312_1
                            bool cond:327_1
                            bool cond:328_1
                            
                            if (not(cond:274_1))
                            label_14022e3a6:
                                arg12 = _mm_blend_epi16(arg12, arg11, 0x30)
                                char temp117_1 = temp0_56 & 8
                                cond:311_1 = temp117_1 == 0
                                cond:312_1 = temp117_1 != 0
                                cond:327_1 = temp117_1 == 0
                                cond:328_1 = temp117_1 == 0
                                
                                if (temp117_1 != 0)
                                    goto label_14022e3fa
                                
                                goto label_14022e3b2
                            
                        label_14022e3f5:
                            char temp116_1 = temp0_56 & 8
                            cond:311_1 = temp116_1 == 0
                            cond:312_1 = temp116_1 != 0
                            cond:327_1 = temp116_1 == 0
                            cond:328_1 = temp116_1 == 0
                            
                            if (temp116_1 != 0)
                            label_14022e3fa:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0xc0)
                                
                                if (cond:312_1)
                                    goto label_14022e3b4
                                
                                goto label_14022e403
                            
                        label_14022e3b2:
                            
                            if (cond:311_1)
                            label_14022e403:
                                
                                if (not(cond:327_1))
                                    arg12 = _mm_blend_epi16(arg12, arg11, 0xc0)
                            else
                            label_14022e3b4:
                                arg7 = _mm_blend_ps(arg7, arg11, 8)
                                
                                if (not(cond:328_1))
                                    arg12 = _mm_blend_epi16(arg12, arg11, 0xc0)
            
            zmm14 = _mm_cmpeq_epi32(zmm14, zmm1) & not.o(arg8)
            char temp0_983 = _mm_movemask_ps(zmm14)
            
            if (temp0_983 == 0)
                arg10 = _mm_cmpeq_epi32(arg10, arg10)
                arg8 ^= arg10
                rcx_27 = _mm_movemask_ps(arg8)
                
                if (rcx_27 != 0)
                    goto label_140232b56
                
                var_598 = zmm10
            else
                float var_5c8_6[0x4] = arg12
                float var_598_4[0x4] = zmm10
                zmm1 = _mm_mullo_epi32(zmm1, arg9)
                zmm2 = _mm_cvtepi32_epi64(zmm1[0].q)
                zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
                float var_498_2[0x4] = zmm1
                zmm1 = __paddq_xmmdq_memdq(zmm1, var_4b8_2)
                uint128_t var_468_2 = zmm2
                uint128_t var_578_1 =
                    __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(zmm2, var_558_2), var_518_1)
                zmm3 &= zmm14
                float var_4f8_3[0x4] = arg7
                uint128_t var_548_3 = zmm14
                float var_438_1[0x4] = __paddq_xmmdq_memdq(zmm1, var_5a8_1)
                float var_5d8[0x4]
                int32_t var_5b8[0x4]
                uint128_t var_3c8
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm3, 0x1f)) == 0)
                    arg12 = var_3c8
                    arg7 = temp0_401
                else
                    arg7 = _mm_cmpeq_epi32(var_1e8_1, arg11)
                    zmm1 = _mm_slli_epi32(zmm3 & arg7, 0x1f)
                    char temp0_996 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_996 == 0)
                        zmm10 = var_478_1
                        arg12 = var_3c8
                        arg10 = var_578_1
                    else
                        float var_458_3[0x4] = zmm3
                        arg12 = arg7
                        arg10 = arg9
                        arg9 = var_3c8
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        int32_t temp0_998[0x4] = __paddq_xmmdq_memdq(var_478_1, var_4b8_2)
                        zmm3 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8_1, var_558_2), 
                            var_468_2)
                        int32_t temp0_1001[0x4] = __paddq_xmmdq_memdq(temp0_998, var_498_2)
                        zmm0 = data_1434426c0
                        arg7 = zmm0
                        int32_t temp0_1002[0x4] = _mm_add_epi64(temp0_1001, zmm0)
                        zmm3 = _mm_add_epi64(zmm3, zmm0)
                        zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                        arg5 = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                        zmm3 = _mm_shuffle_epi32(zmm1, 0xfa)
                        float temp0_1007[0x4] = _mm_blendv_ps(zx.o(0), temp0_1002, zmm3)
                        int64_t rax_211 = _mm_extract_epi64(arg5, 1)
                        void* rbp_27 = arg13 + rax_211
                        zmm12 = *(arg13 + rax_211)
                        int64_t rax_212 = temp0_1007[0].q
                        int64_t rbx_12 = _mm_extract_epi64(temp0_1007, 1)
                        void* rdi_25 = arg13 + rax_212
                        float temp0_1008[0x4] = _mm_blendv_ps(zx.o(0), arg7, zmm2)
                        zmm10 = *(arg13 + rax_212)
                        arg6 = _mm_blendv_ps(zx.o(0), arg7, zmm3)
                        arg11 = *(arg13 + rbx_12)
                        void* rsi_16 = arg5.q + arg13
                        zmm4 = *(temp0_1008[0].q + rsi_16)
                        arg7 = *(_mm_extract_epi64(temp0_1008, 1) + rbp_27)
                        arg5 = *(arg6[0].q + rdi_25)
                        uint128_t* rax_216 = _mm_extract_epi64(arg6, 1)
                        void* rbx_13 = arg13 + rbx_12
                        zmm0 = zmm2
                        zmm2 = data_1434426e0
                        float temp0_1010[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm0)
                        arg8 = *(rax_216 + rbx_13)
                        arg6 = _mm_blendv_ps(zx.o(0), zmm2, zmm3)
                        zmm2 = *(temp0_1010[0].q + rsi_16)
                        zmm1 = *(_mm_extract_epi64(temp0_1010, 1) + rbp_27)
                        float (* rax_219)[0x4] = arg6[0].q
                        uint128_t* rbp_28 = _mm_extract_epi64(arg6, 1)
                        zmm3 = *(rax_219 + rdi_25)
                        zmm0 = *(rbp_28 + rbx_13)
                        bool cond:70_1
                        bool cond:71_1
                        
                        if ((temp0_996 & 1) == 0)
                            char temp25_1 = temp0_996 & 1
                            cond:70_1 = temp25_1 != 0
                            cond:71_1 = temp25_1 == 0
                            
                            if (temp25_1 == 0)
                                goto label_14022e2c2
                            
                            goto label_140232a6f
                        
                        arg9 = _mm_blend_ps(arg9, *rsi_16, 1)
                        char temp24_1 = temp0_996 & 1
                        cond:70_1 = temp24_1 != 0
                        cond:71_1 = temp24_1 == 0
                        
                        if (temp24_1 == 0)
                        label_14022e2c2:
                            
                            if (cond:71_1)
                                goto label_140232a7a
                            
                            goto label_14022e2d2
                        
                    label_140232a6f:
                        var_5b8 = _mm_blend_ps(var_5b8, zmm4, 1)
                        bool cond:91_1
                        bool cond:92_1
                        bool cond:109_1
                        bool cond:110_1
                        
                        if (not(cond:70_1))
                        label_140232a7a:
                            char temp34_1 = temp0_996 & 2
                            cond:91_1 = temp34_1 != 0
                            cond:92_1 = temp34_1 == 0
                            cond:109_1 = temp34_1 != 0
                            cond:110_1 = temp34_1 == 0
                            
                            if (temp34_1 == 0)
                                goto label_14022e2df
                            
                            goto label_140232a8a
                        
                    label_14022e2d2:
                        var_5d8 = _mm_blend_ps(var_5d8, zmm2, 1)
                        char temp33_1 = temp0_996 & 2
                        cond:91_1 = temp33_1 != 0
                        cond:92_1 = temp33_1 == 0
                        cond:109_1 = temp33_1 != 0
                        cond:110_1 = temp33_1 == 0
                        
                        if (temp33_1 == 0)
                        label_14022e2df:
                            zmm4 = arg9
                            
                            if (cond:92_1)
                                goto label_140232a94
                            
                            goto label_14022e2f4
                        
                    label_140232a8a:
                        zmm4 = _mm_insert_ps(arg9, zmm12, 0x10)
                        
                        if (not(cond:91_1))
                        label_140232a94:
                            
                            if (cond:110_1)
                                goto label_14022e2ff
                            
                            goto label_140232aa4
                        
                    label_14022e2f4:
                        var_5b8 = _mm_insert_ps(var_5b8, arg7, 0x10)
                        bool cond:141_1
                        bool cond:142_1
                        bool cond:166_1
                        bool cond:167_1
                        
                        if (not(cond:109_1))
                        label_14022e2ff:
                            char temp52_1 = temp0_996 & 4
                            cond:141_1 = temp52_1 != 0
                            cond:142_1 = temp52_1 == 0
                            cond:166_1 = temp52_1 != 0
                            cond:167_1 = temp52_1 == 0
                            
                            if (temp52_1 == 0)
                                goto label_140232ab1
                            
                            goto label_14022e308
                        
                    label_140232aa4:
                        var_5d8 = _mm_insert_ps(var_5d8, zmm1, 0x10)
                        char temp51_1 = temp0_996 & 4
                        cond:141_1 = temp51_1 != 0
                        cond:142_1 = temp51_1 == 0
                        cond:166_1 = temp51_1 != 0
                        cond:167_1 = temp51_1 == 0
                        
                        if (temp51_1 == 0)
                        label_140232ab1:
                            zmm10 = var_478_1
                            
                            if (cond:142_1)
                                goto label_14022e31f
                            
                            goto label_140232acc
                        
                    label_14022e308:
                        zmm4 = _mm_insert_ps(zmm4, zmm10, 0x20)
                        zmm10 = var_478_1
                        
                        if (not(cond:141_1))
                        label_14022e31f:
                            
                            if (cond:167_1)
                                goto label_140232ad7
                            
                            goto label_14022e32f
                        
                    label_140232acc:
                        var_5b8 = _mm_insert_ps(var_5b8, arg5, 0x20)
                        bool cond:206_1
                        bool cond:232_1
                        
                        if (cond:166_1)
                        label_14022e32f:
                            var_5d8 = _mm_insert_ps(var_5d8, zmm3, 0x20)
                            char temp76_1 = temp0_996 & 8
                            cond:206_1 = temp76_1 == 0
                            cond:232_1 = temp76_1 == 0
                            
                            if (temp76_1 != 0)
                                zmm4 = _mm_insert_ps(zmm4, arg11, 0x30)
                        else
                        label_140232ad7:
                            char temp77_1 = temp0_996 & 8
                            cond:206_1 = temp77_1 == 0
                            cond:232_1 = temp77_1 == 0
                            
                            if (temp77_1 != 0)
                                zmm4 = _mm_insert_ps(zmm4, arg11, 0x30)
                        
                        arg11 = zx.o(0)
                        arg9 = arg10
                        zmm12 = var_538_1
                        arg7 = arg12
                        arg10 = var_578_1
                        
                        if (not(cond:206_1))
                            var_5b8 = _mm_insert_ps(var_5b8, arg8, 0x30)
                        
                        arg8 = var_4c8_1
                        arg12 = zmm4
                        
                        if (not(cond:232_1))
                            var_5d8 = _mm_insert_ps(var_5d8, zmm0, 0x30)
                        
                        zmm3 = var_458_3
                    
                    arg7 &= not.o(zmm3)
                    zmm1 = _mm_slli_epi32(arg7, 0x1f)
                    char temp0_13 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_13 == 0)
                        arg10 = var_508_2
                        arg7 = temp0_401
                    else
                        arg9 = arg12
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_588, 0x1f), 0x1f)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm2
                        arg12 = arg10
                        arg8 = var_438_1
                        zmm14 = arg8
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            zmm0 = data_1434426c0
                            arg6 = zmm0
                            arg5 = _mm_add_epi64(arg8, zmm0)
                            int32_t temp0_19[0x4] = _mm_add_epi64(arg10, zmm0)
                            zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                            arg12 = _mm_blendv_ps(arg10, temp0_19, zmm3)
                            zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm14 = _mm_blendv_ps(arg8, arg5, zmm4)
                            zmm1 = __paddq_xmmdq_memdq(zmm10, var_4b8_2)
                            arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8_1, var_558_2), 
                                var_468_2)
                            zmm1 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_498_2), arg6)
                            arg6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, arg6), zmm3)
                            arg5 = _mm_blendv_ps(zx.o(0), zmm1, zmm4)
                            zmm3 = *(arg13 + arg6[0].q)
                            int64_t rax_3 = _mm_extract_epi64(arg6, 1)
                            int64_t rbx_1 = _mm_extract_epi64(arg5, 1)
                            zmm3 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm3, *(arg13 + rax_3), 0x10), 
                                    *(arg13 + arg5.q), 0x20), 
                                *(arg13 + rbx_1), 0x30)
                        
                        float temp0_35[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                        
                        if ((temp0_13 & 1) != 0)
                            arg9 = _mm_blend_ps(arg9, temp0_35, 1)
                            
                            if ((temp0_13 & 2) != 0)
                                goto label_14022e1ea
                            
                            goto label_14022e1cf
                        
                        if ((temp0_13 & 2) != 0)
                        label_14022e1ea:
                            arg9 = _mm_blend_ps(arg9, temp0_35, 2)
                            
                            if ((temp0_13 & 4) != 0)
                                goto label_14022e1d5
                            
                            goto label_14022e1f7
                        
                    label_14022e1cf:
                        
                        if ((temp0_13 & 4) == 0)
                        label_14022e1f7:
                            
                            if ((temp0_13 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, temp0_35, 8)
                        else
                        label_14022e1d5:
                            arg9 = _mm_blend_ps(arg9, temp0_35, 4)
                            
                            if ((temp0_13 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, temp0_35, 8)
                        
                        zmm0 = data_1434422d0
                        zmm3 = var_588 & zmm0
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm3, zmm0) & arg7, 0x1f)
                        char temp0_42 = _mm_movemask_ps(zmm2)
                        int32_t var_388[0x4]
                        
                        if (temp0_42 == 0)
                            zmm1 = arg12
                            zmm2 = zmm14
                            zmm0 = var_5b8
                            zmm4 = var_388
                            arg8 = var_4c8_1
                            arg11 = zx.o(0)
                            arg10 = var_508_2
                            arg12 = arg9
                            arg9 = var_528_1
                            zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0)) & not.o(zmm4)
                            
                            if ((temp0_13 & 1) != 0)
                                zmm0 = _mm_blend_epi16(zmm0, zmm3, 3)
                        else
                            zmm0 = data_1434426c0
                            int32_t temp0_43[0x4] = _mm_add_epi64(zmm14, zmm0)
                            arg5 = _mm_add_epi64(arg12, zmm0)
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm1 = _mm_blendv_ps(arg12, arg5, _mm_shuffle_epi32(zmm2, 0x50))
                            zmm2 = _mm_blendv_ps(zmm14, temp0_43, _mm_shuffle_epi32(zmm2, 0xfa))
                            
                            if ((temp0_42 & 1) != 0)
                                zmm4 = _mm_blend_ps(var_388, *arg12[0].q, 1)
                                zmm0 = var_5b8
                                
                                if ((temp0_42 & 2) != 0)
                                    zmm4 = __insertps_xmmps_memd_immb(zmm4, 
                                        *_mm_extract_epi64(arg12, 1), 0x10)
                            else
                                zmm0 = var_5b8
                                zmm4 = var_388
                                
                                if ((temp0_42 & 2) != 0)
                                    zmm4 = __insertps_xmmps_memd_immb(zmm4, 
                                        *_mm_extract_epi64(arg12, 1), 0x10)
                            
                            arg11 = zx.o(0)
                            arg10 = var_508_2
                            arg12 = arg9
                            arg9 = var_528_1
                            
                            if ((temp0_42 & 4) != 0)
                                zmm4 = __insertps_xmmps_memd_immb(zmm4, *zmm14.q, 0x20)
                            
                            if ((temp0_42 & 8) != 0)
                                zmm4 = __insertps_xmmps_memd_immb(zmm4, 
                                    *_mm_extract_epi64(zmm14, 1), 0x30)
                            
                            arg8 = var_4c8_1
                            zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0)) & not.o(zmm4)
                            
                            if ((temp0_13 & 1) != 0)
                                zmm0 = _mm_blend_epi16(zmm0, zmm3, 3)
                        
                        if ((temp0_13 & 2) != 0)
                            zmm0 = _mm_blend_epi16(zmm0, zmm3, 0xc)
                            
                            if ((temp0_13 & 4) != 0)
                                goto label_14022e5dc
                            
                            goto label_14022e512
                        
                        if ((temp0_13 & 4) == 0)
                        label_14022e512:
                            var_388 = zmm4
                            
                            if ((temp0_13 & 8) != 0)
                                zmm0 = _mm_blend_epi16(zmm0, zmm3, 0xc0)
                        else
                        label_14022e5dc:
                            zmm0 = _mm_blend_epi16(zmm0, zmm3, 0x30)
                            var_388 = zmm4
                            
                            if ((temp0_13 & 8) != 0)
                                zmm0 = _mm_blend_epi16(zmm0, zmm3, 0xc0)
                        
                        var_5b8 = zmm0
                        zmm3 = data_142fc95e0
                        zmm0 = var_588 & zmm3
                        zmm3 = _mm_cmpeq_epi32(zmm0, zmm3)
                        char temp0_80 = _mm_movemask_ps(_mm_slli_epi32(arg7 & zmm3, 0x1f))
                        int32_t var_418[0x4]
                        
                        if (temp0_80 != 0)
                            if ((temp0_80 & 1) == 0)
                                if ((temp0_80 & 2) != 0)
                                    goto label_14022e7bc
                                
                                goto label_14022e56f
                            
                            zmm3 = zx.o(*zmm1[0].q)
                            var_418 = _mm_blend_epi16(var_418, zmm3, 3)
                            
                            if ((temp0_80 & 2) != 0)
                            label_14022e7bc:
                                var_418 = __insertps_xmmps_memd_immb(var_418, 
                                    *_mm_extract_epi64(zmm1, 1), 0x10)
                                arg7 = temp0_401
                                
                                if ((temp0_80 & 4) == 0)
                                    goto label_14022e581
                                
                                goto label_14022e7e9
                            
                        label_14022e56f:
                            arg7 = temp0_401
                            
                            if ((temp0_80 & 4) == 0)
                            label_14022e581:
                                
                                if ((temp0_80 & 8) != 0)
                                    goto label_14022e80f
                                
                                goto label_14022e58f
                            
                        label_14022e7e9:
                            var_418 = __insertps_xmmps_memd_immb(var_418, *zmm2.q, 0x20)
                            
                            if ((temp0_80 & 8) == 0)
                            label_14022e58f:
                                zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(var_418)
                                
                                if ((temp0_13 & 1) == 0)
                                    goto label_14022e616
                                
                                goto label_14022e5a9
                            
                        label_14022e80f:
                            var_418 = __insertps_xmmps_memd_immb(var_418, 
                                *_mm_extract_epi64(zmm2, 1), 0x30)
                            zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(var_418)
                            
                            if ((temp0_13 & 1) == 0)
                                goto label_14022e616
                            
                            goto label_14022e5a9
                        
                        arg7 = temp0_401
                        zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(var_418)
                        
                        if ((temp0_13 & 1) == 0)
                        label_14022e616:
                            
                            if ((temp0_13 & 2) == 0)
                                goto label_14022e5b4
                            
                            goto label_14022e627
                        
                    label_14022e5a9:
                        var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 3)
                        
                        if ((temp0_13 & 2) == 0)
                        label_14022e5b4:
                            
                            if ((temp0_13 & 4) == 0)
                                goto label_14022e632
                            
                            goto label_14022e5c5
                        
                    label_14022e627:
                        var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0xc)
                        
                        if ((temp0_13 & 4) != 0)
                        label_14022e5c5:
                            var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0x30)
                            
                            if ((temp0_13 & 8) != 0)
                                var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0xc0)
                        else
                        label_14022e632:
                            
                            if ((temp0_13 & 8) != 0)
                                var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0xc0)
                
                zmm1 = var_548_3
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm1 & var_428_2, 0x1f)) == 0)
                    zmm3 = var_5b8
                    zmm10 = var_598_4
                    zmm2 = var_4f8_3
                    arg5 = var_5c8_6
                else
                    zmm10 = _mm_srai_epi32(_mm_slli_epi32(zmm1 & arg7, 0x1f), 0x1f)
                    char temp0_92 = _mm_movemask_ps(zmm10)
                    
                    if (temp0_92 == 0)
                        zmm4 = var_4f8_3
                    else
                        arg9 = arg12
                        arg5 = _mm_srai_epi32(_mm_slli_epi32(var_588, 0x1f), 0x1f) & arg7
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f) & arg5
                        zmm12 = zx.o(0)
                        uint32_t temp0_97 = _mm_movemask_ps(zmm2)
                        zmm14 = zmm1
                        
                        if (temp0_97 == 0)
                            arg10 = zx.o(0)
                            arg8 = zx.o(0)
                        else
                            arg7 = var_5a8_1
                            zmm0 = data_1434426c0
                            int32_t temp0_98[0x4] = _mm_add_epi64(arg7, zmm0)
                            int32_t temp0_99[0x4] = _mm_add_epi64(var_518_1, zmm0)
                            float temp0_100[0x4] = _mm_unpacklo_ps(zmm2, zmm2.q)
                            arg8 = _mm_blendv_ps(var_518_1, temp0_99, temp0_100)
                            zmm2 = _mm_unpackhi_ps(zmm2, zmm2)
                            arg6 = _mm_blendv_ps(arg7, temp0_98, zmm2)
                            char rdi_1 = temp0_97.b
                            uint128_t var_2a8
                            
                            if ((rdi_1 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_2a8, *var_518_1[0].q, 1)
                                
                                if ((rdi_1 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_518_1, 1), 0x10)
                            else
                                zmm0 = var_2a8
                                
                                if ((rdi_1 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_518_1, 1), 0x10)
                            
                            if ((rdi_1 & 4) == 0)
                                if ((rdi_1 & 8) != 0)
                                    goto label_14022e8cd
                                
                                goto label_14022e86d
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0].q, 0x20)
                            char r10_1
                            
                            if ((rdi_1 & 8) != 0)
                            label_14022e8cd:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                r10_1 = _mm_movemask_ps(arg5)
                                arg10 = zx.o(0)
                                
                                if ((r10_1 & 1) != 0)
                                    goto label_14022e87f
                                
                                goto label_14022e8e1
                            
                        label_14022e86d:
                            r10_1 = _mm_movemask_ps(arg5)
                            arg10 = zx.o(0)
                            
                            if ((r10_1 & 1) == 0)
                            label_14022e8e1:
                                
                                if ((r10_1 & 2) != 0)
                                label_14022e8e7:
                                    arg10 = _mm_blend_ps(arg10, zmm0, 2)
                                    
                                    if ((r10_1 & 4) != 0)
                                        goto label_14022e892
                                    
                                    goto label_14022e8f8
                            else
                            label_14022e87f:
                                arg10 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((r10_1 & 2) != 0)
                                    goto label_14022e8e7
                            
                            if ((r10_1 & 4) == 0)
                            label_14022e8f8:
                                var_2a8 = zmm0
                                
                                if ((r10_1 & 8) != 0)
                                    arg10 = _mm_blend_ps(arg10, zmm0, 8)
                            else
                            label_14022e892:
                                arg10 = _mm_blend_ps(arg10, zmm0, 4)
                                var_2a8 = zmm0
                                
                                if ((r10_1 & 8) != 0)
                                    arg10 = _mm_blend_ps(arg10, zmm0, 8)
                            
                            zmm0 = data_1434426c0
                            float temp0_120[0x4] =
                                _mm_blendv_ps(arg8, _mm_add_epi64(arg8, zmm0), temp0_100)
                            var_5a8_1 = _mm_blendv_ps(arg6, _mm_add_epi64(arg6, zmm0), zmm2)
                            uint128_t var_2b8
                            
                            if ((rdi_1 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_2b8, *arg8.q, 1)
                                
                                if ((rdi_1 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg8, 1), 0x10)
                            else
                                zmm0 = var_2b8
                                
                                if ((rdi_1 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg8, 1), 0x10)
                            
                            if ((rdi_1 & 4) == 0)
                                var_518_1 = temp0_120
                                
                                if ((rdi_1 & 8) != 0)
                                    goto label_14022e9f8
                                
                                goto label_14022e997
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg6[0].q, 0x20)
                            var_518_1 = temp0_120
                            
                            if ((rdi_1 & 8) != 0)
                            label_14022e9f8:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg6, 1), 0x30)
                                arg7 = temp0_401
                                arg8 = zx.o(0)
                                
                                if ((r10_1 & 1) != 0)
                                    goto label_14022e9ae
                                
                                goto label_14022ea11
                            
                        label_14022e997:
                            arg7 = temp0_401
                            arg8 = zx.o(0)
                            
                            if ((r10_1 & 1) == 0)
                            label_14022ea11:
                                
                                if ((r10_1 & 2) != 0)
                                label_14022ea17:
                                    arg8 = _mm_blend_ps(arg8, zmm0, 2)
                                    
                                    if ((r10_1 & 4) != 0)
                                        goto label_14022e9c1
                                    
                                    goto label_14022ea28
                            else
                            label_14022e9ae:
                                arg8 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((r10_1 & 2) != 0)
                                    goto label_14022ea17
                            
                            if ((r10_1 & 4) == 0)
                            label_14022ea28:
                                var_2b8 = zmm0
                                
                                if ((r10_1 & 8) != 0)
                                    arg8 = _mm_blend_ps(arg8, zmm0, 8)
                            else
                            label_14022e9c1:
                                arg8 = _mm_blend_ps(arg8, zmm0, 4)
                                var_2b8 = zmm0
                                
                                if ((r10_1 & 8) != 0)
                                    arg8 = _mm_blend_ps(arg8, zmm0, 8)
                        
                        zmm0 = data_1434422d0
                        zmm4 = _mm_cmpeq_epi32(var_588 & zmm0, zmm0) & arg7
                        zmm1 = _mm_slli_epi32(zmm14 & zmm4, 0x1f)
                        char temp0_133 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_133 == 0)
                            arg12 = zx.o(0)
                        else
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            arg7 = var_5a8_1
                            zmm0 = data_1434426c0
                            int32_t temp0_135[0x4] = _mm_add_epi64(arg7, zmm0)
                            arg5 = var_518_1
                            zmm3 = _mm_add_epi64(arg5, zmm0)
                            zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                            float temp0_138[0x4] = _mm_blendv_ps(arg5, zmm3, zmm2)
                            zmm3 = _mm_shuffle_epi32(zmm1, 0xfa)
                            float temp0_140[0x4] = _mm_blendv_ps(arg7, temp0_135, zmm3)
                            uint128_t var_2f8
                            
                            if ((temp0_133 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_2f8, *arg5.q, 1)
                                
                                if ((temp0_133 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_518_1, 1), 0x10)
                            else
                                zmm0 = var_2f8
                                
                                if ((temp0_133 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_518_1, 1), 0x10)
                            
                            if ((temp0_133 & 4) == 0)
                                if ((temp0_133 & 8) != 0)
                                    goto label_14022eb79
                                
                                goto label_14022eb1e
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0].q, 0x20)
                            char rcx_12
                            
                            if ((temp0_133 & 8) != 0)
                            label_14022eb79:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                rcx_12 = _mm_movemask_ps(zmm4)
                                zmm12 = zx.o(0)
                                
                                if ((rcx_12 & 1) != 0)
                                    goto label_14022eb2e
                                
                                goto label_14022eb8b
                            
                        label_14022eb1e:
                            rcx_12 = _mm_movemask_ps(zmm4)
                            zmm12 = zx.o(0)
                            
                            if ((rcx_12 & 1) == 0)
                            label_14022eb8b:
                                
                                if ((rcx_12 & 2) != 0)
                                label_14022eb90:
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 2)
                                    
                                    if ((rcx_12 & 4) != 0)
                                        goto label_14022eb3f
                                    
                                    goto label_14022eb9f
                            else
                            label_14022eb2e:
                                zmm12 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rcx_12 & 2) != 0)
                                    goto label_14022eb90
                            
                            if ((rcx_12 & 4) == 0)
                            label_14022eb9f:
                                var_2f8 = zmm0
                                
                                if ((rcx_12 & 8) != 0)
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 8)
                            else
                            label_14022eb3f:
                                zmm12 = _mm_blend_ps(zmm12, zmm0, 4)
                                var_2f8 = zmm0
                                
                                if ((rcx_12 & 8) != 0)
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 8)
                            
                            zmm0 = data_1434426c0
                            var_518_1 =
                                _mm_blendv_ps(temp0_138, _mm_add_epi64(temp0_138, zmm0), zmm2)
                            var_5a8_1 =
                                _mm_blendv_ps(temp0_140, _mm_add_epi64(temp0_140, zmm0), zmm3)
                            uint128_t var_2e8
                            
                            if ((temp0_133 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_2e8, *temp0_138[0].q, 1)
                                arg7 = temp0_401
                                
                                if ((temp0_133 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_138, 1), 0x10)
                            else
                                zmm0 = var_2e8
                                arg7 = temp0_401
                                
                                if ((temp0_133 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_138, 1), 0x10)
                            
                            if ((temp0_133 & 4) == 0)
                                if ((temp0_133 & 8) != 0)
                                    goto label_14022ec9e
                                
                                goto label_14022ec52
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_140[0].q, 0x20)
                            
                            if ((temp0_133 & 8) != 0)
                            label_14022ec9e:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_140, 1), 0x30)
                                arg12 = zx.o(0)
                                
                                if ((rcx_12 & 1) != 0)
                                    goto label_14022ec5f
                                
                                goto label_14022ecad
                            
                        label_14022ec52:
                            arg12 = zx.o(0)
                            
                            if ((rcx_12 & 1) == 0)
                            label_14022ecad:
                                
                                if ((rcx_12 & 2) != 0)
                                label_14022ecb2:
                                    arg12 = _mm_blend_ps(arg12, zmm0, 2)
                                    
                                    if ((rcx_12 & 4) != 0)
                                        goto label_14022ec70
                                    
                                    goto label_14022ecc1
                            else
                            label_14022ec5f:
                                arg12 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rcx_12 & 2) != 0)
                                    goto label_14022ecb2
                            
                            if ((rcx_12 & 4) == 0)
                            label_14022ecc1:
                                var_2e8 = zmm0
                                
                                if ((rcx_12 & 8) != 0)
                                    arg12 = _mm_blend_ps(arg12, zmm0, 8)
                            else
                            label_14022ec70:
                                arg12 = _mm_blend_ps(arg12, zmm0, 4)
                                var_2e8 = zmm0
                                
                                if ((rcx_12 & 8) != 0)
                                    arg12 = _mm_blend_ps(arg12, zmm0, 8)
                        
                        zmm0 = data_142fc95e0
                        zmm3 = _mm_cmpeq_epi32(var_588 & zmm0, zmm0) & arg7
                        zmm1 = _mm_slli_epi32(zmm14 & zmm3, 0x1f)
                        char temp0_165 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_165 == 0)
                            zmm3 = zx.o(0)
                            zmm1 = zx.o(0)
                        else
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            arg7 = var_5a8_1
                            zmm0 = data_1434426c0
                            int32_t temp0_167[0x4] = _mm_add_epi64(arg7, zmm0)
                            arg5 = var_518_1
                            float temp0_170[0x4] = _mm_blendv_ps(arg5, _mm_add_epi64(arg5, zmm0), 
                                _mm_shuffle_epi32(zmm1, 0x50))
                            float temp0_172[0x4] =
                                _mm_blendv_ps(arg7, temp0_167, _mm_shuffle_epi32(zmm1, 0xfa))
                            uint128_t var_2d8
                            
                            if ((temp0_165 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_2d8, *arg5.q, 1)
                                
                                if ((temp0_165 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_518_1, 1), 0x10)
                            else
                                zmm0 = var_2d8
                                
                                if ((temp0_165 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_518_1, 1), 0x10)
                            
                            if ((temp0_165 & 4) == 0)
                                if ((temp0_165 & 8) != 0)
                                    goto label_14022ee20
                                
                                goto label_14022edac
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0].q, 0x20)
                            char rdi_3
                            
                            if ((temp0_165 & 8) != 0)
                            label_14022ee20:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                rdi_3 = _mm_movemask_ps(zmm3)
                                zmm3 = zx.o(0)
                                
                                if ((rdi_3 & 1) != 0)
                                    goto label_14022edbb
                                
                                goto label_14022ee32
                            
                        label_14022edac:
                            rdi_3 = _mm_movemask_ps(zmm3)
                            zmm3 = zx.o(0)
                            
                            if ((rdi_3 & 1) != 0)
                            label_14022edbb:
                                zmm3 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rdi_3 & 2) != 0)
                                    goto label_14022ee38
                                
                                goto label_14022edc7
                            
                        label_14022ee32:
                            
                            if ((rdi_3 & 2) == 0)
                            label_14022edc7:
                                
                                if ((rdi_3 & 4) != 0)
                                label_14022edcd:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                                    
                                    if ((rdi_3 & 8) != 0)
                                        goto label_14022ee4a
                                    
                                    goto label_14022eddc
                            else
                            label_14022ee38:
                                zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                                
                                if ((rdi_3 & 4) != 0)
                                    goto label_14022edcd
                            
                            if ((rdi_3 & 8) != 0)
                            label_14022ee4a:
                                zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                                var_2d8 = zmm0
                                
                                if ((temp0_165 & 1) == 0)
                                    goto label_14022ede6
                                
                                goto label_14022ee75
                            
                        label_14022eddc:
                            var_2d8 = zmm0
                            uint128_t var_2c8
                            
                            if ((temp0_165 & 1) != 0)
                            label_14022ee75:
                                zmm0 = _mm_blend_epi16(var_2c8, zx.o(*temp0_170[0].q), 3)
                                
                                if ((temp0_165 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_170, 1), 0x10)
                            else
                            label_14022ede6:
                                zmm0 = var_2c8
                                
                                if ((temp0_165 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_170, 1), 0x10)
                            
                            if ((temp0_165 & 4) == 0)
                                if ((temp0_165 & 8) != 0)
                                    goto label_14022eee0
                                
                                goto label_14022ee95
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_172[0].q, 0x20)
                            
                            if ((temp0_165 & 8) != 0)
                            label_14022eee0:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_172, 1), 0x30)
                                zmm1 = zx.o(0)
                                
                                if ((rdi_3 & 1) != 0)
                                    goto label_14022eea1
                                
                                goto label_14022eeef
                            
                        label_14022ee95:
                            zmm1 = zx.o(0)
                            
                            if ((rdi_3 & 1) == 0)
                            label_14022eeef:
                                
                                if ((rdi_3 & 2) != 0)
                                label_14022eef5:
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                                    
                                    if ((rdi_3 & 4) != 0)
                                        goto label_14022eeb3
                                    
                                    goto label_14022ef05
                            else
                            label_14022eea1:
                                zmm1 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rdi_3 & 2) != 0)
                                    goto label_14022eef5
                            
                            if ((rdi_3 & 4) == 0)
                            label_14022ef05:
                                var_2c8 = zmm0
                                
                                if ((rdi_3 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                            label_14022eeb3:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 4)
                                var_2c8 = zmm0
                                
                                if ((rdi_3 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                        
                        int32_t temp0_192[0x4] = __paddq_xmmdq_memdq(
                            __paddq_xmmdq_memdq(var_4d8_1, var_558_2), var_468_2)
                        zmm0 = data_1434426c0
                        arg5 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_192, zmm0), 
                            _mm_shuffle_epi32(zmm10, 0x50))
                        arg6 = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(
                                __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_478_1, var_4b8_2), 
                                    var_498_2), 
                                zmm0), 
                            _mm_shuffle_epi32(zmm10, 0xfa))
                        int64_t rcx_15 = _mm_extract_epi64(arg5, 1)
                        int64_t rbx_2 = arg6[0].q
                        int64_t rdi_4 = _mm_extract_epi64(arg6, 1)
                        zmm0 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg13 + arg5.q)), 
                                    *(arg13 + rcx_15), 1), 
                                *(arg13 + rbx_2), 2), 
                            *(arg13 + rdi_4), 3)
                        zmm4 = zmm0
                        arg10 = _mm_add_ps(arg10, 
                            _mm_mul_ps(arg8, 
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0)))
                        arg5 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm0 = data_143442440
                        arg6 = zmm0
                        zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                        arg5 = data_143442690
                        float temp0_213[0x4] = _mm_mul_ps(arg12, _mm_div_ps(zmm0, arg5))
                        zmm0 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm4, 0x15), arg6)), arg5)
                        char temp75_1 = temp0_92 & 1
                        
                        if (temp75_1 != 0)
                            arg9 = _mm_blend_ps(arg9, arg10, 1)
                        
                        zmm4 = var_4f8_3
                        arg8 = var_4c8_1
                        arg7 = temp0_401
                        float temp0_219[0x4] = _mm_mul_ps(zmm1, zmm0)
                        float temp0_220[0x4] = _mm_add_ps(zmm12, temp0_213)
                        
                        if (temp75_1 == 0)
                            zmm0 = var_5b8
                            zmm3 = _mm_add_ps(zmm3, temp0_219)
                            
                            if (temp75_1 != 0)
                                var_5d8 = _mm_blend_ps(var_5d8, zmm3, 1)
                        else
                            zmm0 = _mm_blend_ps(var_5b8, temp0_220, 1)
                            zmm3 = _mm_add_ps(zmm3, temp0_219)
                            
                            if (temp75_1 != 0)
                                var_5d8 = _mm_blend_ps(var_5d8, zmm3, 1)
                        
                        char temp103_1 = temp0_92 & 2
                        
                        if (temp103_1 != 0)
                            arg9 = _mm_blend_ps(arg9, arg10, 2)
                            
                            if (temp103_1 != 0)
                                goto label_14022f0ca
                        else if (temp103_1 != 0)
                        label_14022f0ca:
                            zmm0 = _mm_blend_ps(zmm0, temp0_220, 2)
                            
                            if (temp103_1 != 0)
                                goto label_14022f092
                            
                            goto label_14022f0d3
                        
                        bool cond:323_1
                        bool cond:324_1
                        bool cond:339_1
                        bool cond:340_1
                        
                        if (temp103_1 != 0)
                        label_14022f092:
                            var_5d8 = _mm_blend_ps(var_5d8, zmm3, 2)
                            char temp123_1 = temp0_92 & 4
                            cond:323_1 = temp123_1 == 0
                            cond:324_1 = temp123_1 != 0
                            cond:339_1 = temp123_1 == 0
                            cond:340_1 = temp123_1 != 0
                            
                            if (temp123_1 != 0)
                                goto label_14022f0d8
                            
                            goto label_14022f09b
                        
                    label_14022f0d3:
                        char temp122_1 = temp0_92 & 4
                        cond:323_1 = temp122_1 == 0
                        cond:324_1 = temp122_1 != 0
                        cond:339_1 = temp122_1 == 0
                        cond:340_1 = temp122_1 != 0
                        
                        if (temp122_1 == 0)
                        label_14022f09b:
                            
                            if (not(cond:323_1))
                            label_14022f09d:
                                zmm0 = _mm_blend_ps(zmm0, temp0_220, 4)
                                
                                if (cond:340_1)
                                    goto label_14022f0ed
                                
                                goto label_14022f0a6
                        else
                        label_14022f0d8:
                            arg9 = _mm_blend_ps(arg9, arg10, 4)
                            
                            if (cond:324_1)
                                goto label_14022f09d
                        
                        bool cond:355_1
                        bool cond:356_1
                        bool cond:367_1
                        
                        if (not(cond:339_1))
                        label_14022f0ed:
                            var_5d8 = _mm_blend_ps(var_5d8, zmm3, 4)
                            char temp135_1 = temp0_92 & 8
                            cond:355_1 = temp135_1 == 0
                            cond:356_1 = temp135_1 != 0
                            cond:367_1 = temp135_1 == 0
                            
                            if (temp135_1 != 0)
                                goto label_14022f0ab
                            
                            goto label_14022f0f6
                        
                    label_14022f0a6:
                        char temp134_1 = temp0_92 & 8
                        cond:355_1 = temp134_1 == 0
                        cond:356_1 = temp134_1 != 0
                        cond:367_1 = temp134_1 == 0
                        
                        if (temp134_1 == 0)
                        label_14022f0f6:
                            zmm1 = var_528_1
                            arg10 = var_508_2
                            
                            if (not(cond:355_1))
                                zmm0 = _mm_blend_ps(zmm0, temp0_220, 8)
                        else
                        label_14022f0ab:
                            arg9 = _mm_blend_ps(arg9, arg10, 8)
                            zmm1 = var_528_1
                            arg10 = var_508_2
                            
                            if (cond:356_1)
                                zmm0 = _mm_blend_ps(zmm0, temp0_220, 8)
                        
                        arg12 = arg9
                        zmm12 = var_538_1
                        arg9 = zmm1
                        var_5b8 = zmm0
                        
                        if (not(cond:367_1))
                            var_5d8 = _mm_blend_ps(var_5d8, zmm3, 8)
                    
                    arg7 ^= var_428_2
                    zmm1 = var_548_3
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm1 & arg7, 0x1f)) == 0)
                        zmm3 = var_5b8
                        zmm10 = var_598_4
                        arg5 = var_5c8_6
                        arg11 = zx.o(0)
                        zmm2 = zmm4
                    else
                        zmm12 = arg7
                        arg9 = __pcmpeqd_xmmdq_memdq(var_568, data_1434422d0)
                        zmm14 = zmm1 & arg9
                        zmm1 = _mm_slli_epi32(zmm14, 0x1f)
                        char temp0_238 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_238 == 0)
                            zmm10 = var_598_4
                            arg5 = var_5c8_6
                            arg11 = zx.o(0)
                        else
                            zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_588, 0x1f), 0x1f)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm2
                            
                            if (_mm_movemask_ps(zmm1) == 0)
                                zmm10 = var_5d8
                            else
                                zmm10 = var_5d8
                                arg6 = var_438_1
                                zmm0 = data_1434426b0
                                arg5 = _mm_add_epi64(arg6, zmm0)
                                zmm4 = var_578_1
                                arg7 = _mm_add_epi64(zmm4, zmm0)
                                zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                                var_578_1 = _mm_blendv_ps(zmm4, arg7, zmm3)
                                zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                                var_438_1 = _mm_blendv_ps(arg6, arg5, zmm4)
                                arg5 = __paddq_xmmdq_memdq(var_478_1, var_4b8_2)
                                int32_t temp0_251[0x4] = __paddq_xmmdq_memdq(
                                    __paddq_xmmdq_memdq(var_4d8_1, var_558_2), var_468_2)
                                arg5 = __paddq_xmmdq_memdq(arg5, var_498_2)
                                zmm0 = data_1434426c0
                                arg5 = _mm_add_epi64(arg5, zmm0)
                                float temp0_255[0x4] =
                                    _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_251, zmm0), zmm3)
                                float temp0_256[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm4)
                                int64_t rax_40 = _mm_extract_epi64(temp0_255, 1)
                                int64_t rbp_7 = temp0_255[0].q
                                int64_t rbx_3 = temp0_256[0].q
                                int64_t rdi_5 = _mm_extract_epi64(temp0_256, 1)
                                zmm3 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg13 + rbp_7)), 
                                                *(arg13 + rax_40), 1), 
                                            *(arg13 + rbx_3), 2), 
                                        *(arg13 + rdi_5), 3).q), 
                                    data_143442b40))
                            
                            float temp0_263[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                            var_5d8 = zmm10
                            
                            if ((temp0_238 & 1) != 0)
                                arg12 = _mm_blend_ps(arg12, temp0_263, 1)
                                
                                if ((temp0_238 & 2) != 0)
                                    goto label_14022f32f
                                
                                goto label_14022f314
                            
                            if ((temp0_238 & 2) != 0)
                            label_14022f32f:
                                arg12 = _mm_blend_ps(arg12, temp0_263, 2)
                                
                                if ((temp0_238 & 4) != 0)
                                    goto label_14022f31a
                                
                                goto label_14022f33c
                            
                        label_14022f314:
                            
                            if ((temp0_238 & 4) == 0)
                            label_14022f33c:
                                
                                if ((temp0_238 & 8) != 0)
                                    arg12 = _mm_blend_ps(arg12, temp0_263, 8)
                            else
                            label_14022f31a:
                                arg12 = _mm_blend_ps(arg12, temp0_263, 4)
                                
                                if ((temp0_238 & 8) != 0)
                                    arg12 = _mm_blend_ps(arg12, temp0_263, 8)
                            
                            zmm0 = data_1434422d0
                            zmm1 = var_588 & zmm0
                            zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm0) & zmm14, 0x1f)
                            char temp0_270 = _mm_movemask_ps(zmm2)
                            
                            if (temp0_270 != 0)
                                zmm0 = data_1434426b0
                                int32_t temp0_271[0x4] = _mm_add_epi64(var_438_1, zmm0)
                                arg6 = var_578_1
                                arg5 = _mm_add_epi64(arg6, zmm0)
                                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                arg11 = _mm_blendv_ps(arg6, arg5, _mm_shuffle_epi32(zmm2, 0x50))
                                zmm2 = _mm_blendv_ps(var_438_1, temp0_271, 
                                    _mm_shuffle_epi32(zmm2, 0xfa))
                                uint128_t var_328
                                
                                if ((temp0_270 & 1) != 0)
                                    zmm0 = _mm_insert_epi32(var_328, zx.d(*arg6[0].q), 0)
                                    
                                    if ((temp0_270 & 2) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(var_578_1, 1)), 1)
                                else
                                    zmm0 = var_328
                                    
                                    if ((temp0_270 & 2) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(var_578_1, 1)), 1)
                                
                                zmm10 = var_598_4
                                
                                if ((temp0_270 & 4) != 0)
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*var_438_1[0].q), 2)
                                    
                                    if ((temp0_270 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(var_438_1, 1)), 3)
                                else if ((temp0_270 & 8) != 0)
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_438_1, 1)), 3)
                                
                                arg5 = var_5c8_6
                                var_328 = zmm0
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_blend_epi16(zmm0, zx.o(0), 0xaa), data_143442b40))
                                zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                                
                                if ((temp0_238 & 1) == 0)
                                    goto label_14022f405
                                
                                goto label_14022f4b4
                            
                            arg11 = var_578_1
                            zmm2 = var_438_1
                            zmm10 = var_598_4
                            arg5 = var_5c8_6
                            zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                            
                            if ((temp0_238 & 1) != 0)
                            label_14022f4b4:
                                zmm0 = _mm_blend_epi16(var_5b8, zmm1, 3)
                                
                                if ((temp0_238 & 2) != 0)
                                    zmm0 = _mm_blend_epi16(zmm0, zmm1, 0xc)
                            else
                            label_14022f405:
                                zmm0 = var_5b8
                                
                                if ((temp0_238 & 2) != 0)
                                    zmm0 = _mm_blend_epi16(zmm0, zmm1, 0xc)
                            
                            if ((temp0_238 & 4) != 0)
                                zmm0 = _mm_blend_epi16(zmm0, zmm1, 0x30)
                                
                                if ((temp0_238 & 8) != 0)
                                    zmm0 = _mm_blend_epi16(zmm0, zmm1, 0xc0)
                            else if ((temp0_238 & 8) != 0)
                                zmm0 = _mm_blend_epi16(zmm0, zmm1, 0xc0)
                            
                            var_5b8 = zmm0
                            zmm1 = data_142fc95e0
                            zmm0 = var_588 & zmm1
                            zmm1 = _mm_cmpeq_epi32(zmm0, zmm1)
                            char temp0_292 = _mm_movemask_ps(_mm_slli_epi32(zmm14 & zmm1, 0x1f))
                            
                            if (temp0_292 == 0)
                                arg11 = zx.o(0)
                                zmm4 = var_4f8_3
                                zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(zmm1)
                                
                                if ((temp0_238 & 1) != 0)
                                    var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 3)
                            else
                                float var_318[0x4]
                                
                                if ((temp0_292 & 1) != 0)
                                    zmm1 = _mm_insert_epi32(var_318, zx.d(*arg11[0].q), 0)
                                    
                                    if ((temp0_292 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(arg11, 1)), 1)
                                else
                                    zmm1 = var_318
                                    
                                    if ((temp0_292 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(arg11, 1)), 1)
                                
                                arg11 = zx.o(0)
                                zmm4 = var_4f8_3
                                
                                if ((temp0_292 & 4) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2.q), 2)
                                    
                                    if ((temp0_292 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                else if ((temp0_292 & 8) != 0)
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                
                                var_318 = zmm1
                                float temp0_300[0x4] = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_blend_epi16(zmm1, arg11, 0xaa), data_143442b40))
                                zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(temp0_300)
                                
                                if ((temp0_238 & 1) != 0)
                                    var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 3)
                            
                            if ((temp0_238 & 2) != 0)
                                var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0xc)
                                
                                if ((temp0_238 & 4) != 0)
                                    goto label_14022f76a
                                
                                goto label_14022f636
                            
                            if ((temp0_238 & 4) == 0)
                            label_14022f636:
                                
                                if ((temp0_238 & 8) != 0)
                                    var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0xc0)
                            else
                            label_14022f76a:
                                var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0x30)
                                
                                if ((temp0_238 & 8) != 0)
                                    var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0xc0)
                        
                        zmm1 = var_548_3
                        zmm2 = (zmm12 ^ arg9) & zmm1
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) == 0)
                            zmm3 = var_5b8
                            arg9 = var_528_1
                            zmm12 = var_538_1
                            zmm2 = zmm4
                        else
                            zmm0 = __pcmpeqd_xmmdq_memdq(var_568, data_143442ad0)
                            char temp0_309 = _mm_movemask_ps(_mm_slli_epi32(zmm1 & zmm0, 0x1f))
                            
                            if (temp0_309 == 0)
                                arg9 = var_528_1
                                zmm12 = var_538_1
                            else
                                char temp74_1 = temp0_309 & 1
                                
                                if (temp74_1 == 0)
                                    arg9 = var_528_1
                                    zmm12 = var_538_1
                                    
                                    if (temp74_1 != 0)
                                    label_14022f7a2:
                                        var_5b8 = _mm_blend_ps(var_5b8, arg11, 1)
                                        
                                        if (temp74_1 != 0)
                                            goto label_14022f6d5
                                        
                                        goto label_14022f7ad
                                else
                                    arg12 = _mm_blend_ps(arg12, arg11, 1)
                                    arg9 = var_528_1
                                    zmm12 = var_538_1
                                    
                                    if (temp74_1 != 0)
                                        goto label_14022f7a2
                                
                                bool cond:268_1
                                bool cond:269_1
                                bool cond:291_1
                                bool cond:292_1
                                
                                if (temp74_1 != 0)
                                label_14022f6d5:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 1)
                                    char temp102_1 = temp0_309 & 2
                                    cond:268_1 = temp102_1 == 0
                                    cond:269_1 = temp102_1 != 0
                                    cond:291_1 = temp102_1 == 0
                                    cond:292_1 = temp102_1 != 0
                                    
                                    if (temp102_1 != 0)
                                        goto label_14022f7b6
                                    
                                    goto label_14022f6e2
                                
                            label_14022f7ad:
                                char temp101_1 = temp0_309 & 2
                                cond:268_1 = temp101_1 == 0
                                cond:269_1 = temp101_1 != 0
                                cond:291_1 = temp101_1 == 0
                                cond:292_1 = temp101_1 != 0
                                
                                if (temp101_1 == 0)
                                label_14022f6e2:
                                    
                                    if (not(cond:268_1))
                                    label_14022f6f4:
                                        var_5b8 = _mm_blend_ps(var_5b8, arg11, 2)
                                        
                                        if (cond:292_1)
                                            goto label_14022f7d4
                                        
                                        goto label_14022f6ff
                                else
                                label_14022f7b6:
                                    arg12 = _mm_blend_ps(arg12, arg11, 2)
                                    
                                    if (cond:269_1)
                                        goto label_14022f6f4
                                
                                bool cond:321_1
                                bool cond:322_1
                                bool cond:337_1
                                bool cond:338_1
                                
                                if (not(cond:291_1))
                                label_14022f7d4:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 2)
                                    char temp121_1 = temp0_309 & 4
                                    cond:321_1 = temp121_1 == 0
                                    cond:322_1 = temp121_1 != 0
                                    cond:337_1 = temp121_1 == 0
                                    cond:338_1 = temp121_1 != 0
                                    
                                    if (temp121_1 != 0)
                                        goto label_14022f708
                                    
                                    goto label_14022f7e1
                                
                            label_14022f6ff:
                                char temp120_1 = temp0_309 & 4
                                cond:321_1 = temp120_1 == 0
                                cond:322_1 = temp120_1 != 0
                                cond:337_1 = temp120_1 == 0
                                cond:338_1 = temp120_1 != 0
                                
                                if (temp120_1 == 0)
                                label_14022f7e1:
                                    
                                    if (not(cond:321_1))
                                    label_14022f7f3:
                                        var_5b8 = _mm_blend_ps(var_5b8, arg11, 4)
                                        
                                        if (cond:338_1)
                                            goto label_14022f726
                                        
                                        goto label_14022f7fe
                                else
                                label_14022f708:
                                    arg12 = _mm_blend_ps(arg12, arg11, 4)
                                    
                                    if (cond:322_1)
                                        goto label_14022f7f3
                                
                                bool cond:353_1
                                bool cond:354_1
                                bool cond:365_1
                                bool cond:366_1
                                
                                if (not(cond:337_1))
                                label_14022f726:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 4)
                                    char temp133_1 = temp0_309 & 8
                                    cond:353_1 = temp133_1 == 0
                                    cond:354_1 = temp133_1 != 0
                                    cond:365_1 = temp133_1 == 0
                                    cond:366_1 = temp133_1 == 0
                                    
                                    if (temp133_1 != 0)
                                        goto label_14022f807
                                    
                                    goto label_14022f733
                                
                            label_14022f7fe:
                                char temp132_1 = temp0_309 & 8
                                cond:353_1 = temp132_1 == 0
                                cond:354_1 = temp132_1 != 0
                                cond:365_1 = temp132_1 == 0
                                cond:366_1 = temp132_1 == 0
                                
                                if (temp132_1 != 0)
                                label_14022f807:
                                    arg12 = _mm_blend_ps(arg12, arg11, 8)
                                    
                                    if (cond:354_1)
                                        goto label_14022f745
                                    
                                    goto label_14022f814
                                
                            label_14022f733:
                                
                                if (cond:353_1)
                                label_14022f814:
                                    
                                    if (not(cond:365_1))
                                        var_5d8 = _mm_blend_ps(var_5d8, arg11, 8)
                                else
                                label_14022f745:
                                    var_5b8 = _mm_blend_ps(var_5b8, arg11, 8)
                                    
                                    if (not(cond:366_1))
                                        var_5d8 = _mm_blend_ps(var_5d8, arg11, 8)
                            
                            char temp0_324 =
                                _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm2), 0x1f))
                            
                            if (temp0_324 == 0)
                                zmm3 = var_5b8
                                zmm2 = zmm4
                            else
                                char temp94_1 = temp0_324 & 1
                                
                                if (temp94_1 == 0)
                                    zmm3 = var_5b8
                                    
                                    if (temp94_1 != 0)
                                    label_14022f8e0:
                                        zmm3 = _mm_blend_ps(zmm3, arg11, 1)
                                        
                                        if (temp94_1 != 0)
                                            goto label_14022f890
                                        
                                        goto label_14022f8e9
                                else
                                    arg12 = _mm_blend_ps(arg12, arg11, 1)
                                    zmm3 = var_5b8
                                    
                                    if (temp94_1 != 0)
                                        goto label_14022f8e0
                                
                                bool cond:289_1
                                bool cond:290_1
                                bool cond:307_1
                                bool cond:308_1
                                
                                if (temp94_1 != 0)
                                label_14022f890:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 1)
                                    char temp115_1 = temp0_324 & 2
                                    cond:289_1 = temp115_1 == 0
                                    cond:290_1 = temp115_1 != 0
                                    cond:307_1 = temp115_1 == 0
                                    cond:308_1 = temp115_1 != 0
                                    
                                    if (temp115_1 != 0)
                                        goto label_14022f8ee
                                    
                                    goto label_14022f899
                                
                            label_14022f8e9:
                                char temp114_1 = temp0_324 & 2
                                cond:289_1 = temp114_1 == 0
                                cond:290_1 = temp114_1 != 0
                                cond:307_1 = temp114_1 == 0
                                cond:308_1 = temp114_1 != 0
                                
                                if (temp114_1 == 0)
                                label_14022f899:
                                    
                                    if (not(cond:289_1))
                                    label_14022f89b:
                                        zmm3 = _mm_blend_ps(zmm3, arg11, 2)
                                        
                                        if (cond:308_1)
                                            goto label_14022f904
                                        
                                        goto label_14022f8a4
                                else
                                label_14022f8ee:
                                    arg12 = _mm_blend_ps(arg12, arg11, 2)
                                    
                                    if (cond:290_1)
                                        goto label_14022f89b
                                
                                bool cond:335_1
                                bool cond:336_1
                                bool cond:345_1
                                bool cond:346_1
                                
                                if (not(cond:307_1))
                                label_14022f904:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 2)
                                    char temp129_1 = temp0_324 & 4
                                    cond:335_1 = temp129_1 == 0
                                    cond:336_1 = temp129_1 != 0
                                    cond:345_1 = temp129_1 == 0
                                    cond:346_1 = temp129_1 != 0
                                    
                                    if (temp129_1 != 0)
                                        goto label_14022f8a9
                                    
                                    goto label_14022f90d
                                
                            label_14022f8a4:
                                char temp128_1 = temp0_324 & 4
                                cond:335_1 = temp128_1 == 0
                                cond:336_1 = temp128_1 != 0
                                cond:345_1 = temp128_1 == 0
                                cond:346_1 = temp128_1 != 0
                                
                                if (temp128_1 == 0)
                                label_14022f90d:
                                    
                                    if (not(cond:335_1))
                                    label_14022f90f:
                                        zmm3 = _mm_blend_ps(zmm3, arg11, 4)
                                        
                                        if (cond:346_1)
                                            goto label_14022f8bf
                                        
                                        goto label_14022f918
                                else
                                label_14022f8a9:
                                    arg12 = _mm_blend_ps(arg12, arg11, 4)
                                    
                                    if (cond:336_1)
                                        goto label_14022f90f
                                
                                bool cond:363_1
                                bool cond:370_1
                                bool cond:371_1
                                bool cond:364_1
                                
                                if (cond:345_1)
                                label_14022f918:
                                    char temp136_1 = temp0_324 & 8
                                    cond:363_1 = temp136_1 == 0
                                    cond:364_1 = temp136_1 != 0
                                    cond:370_1 = temp136_1 == 0
                                    cond:371_1 = temp136_1 == 0
                                    
                                    if (temp136_1 != 0)
                                    label_14022f91d:
                                        arg12 = _mm_blend_ps(arg12, arg11, 8)
                                        
                                        if (cond:364_1)
                                            goto label_14022f8ca
                                        
                                        goto label_14022f926
                                else
                                label_14022f8bf:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 4)
                                    char temp137_1 = temp0_324 & 8
                                    cond:363_1 = temp137_1 == 0
                                    cond:364_1 = temp137_1 != 0
                                    cond:370_1 = temp137_1 == 0
                                    cond:371_1 = temp137_1 == 0
                                    
                                    if (temp137_1 != 0)
                                        goto label_14022f91d
                                
                                if (cond:363_1)
                                label_14022f926:
                                    zmm2 = zmm4
                                    
                                    if (not(cond:370_1))
                                        var_5d8 = _mm_blend_ps(var_5d8, arg11, 8)
                                else
                                label_14022f8ca:
                                    zmm3 = _mm_blend_ps(zmm3, arg11, 8)
                                    zmm2 = zmm4
                                    
                                    if (not(cond:371_1))
                                        var_5d8 = _mm_blend_ps(var_5d8, arg11, 8)
                
                zmm4 = _mm_sub_ps(arg12, zmm10)
                var_5b8 = zmm3
                float temp0_338[0x4] = _mm_sub_ps(zmm3, zmm2)
                zmm4 = _mm_mul_ps(zmm4, arg10)
                zmm1 = zmm10
                char temp32_1 = temp0_983 & 1
                
                if (temp32_1 != 0)
                    zmm1 = zmm10
                    zmm1[0] = zmm1[0] f+ zmm4[0]
                
                zmm0 = _mm_sub_ps(var_5d8, arg5)
                float temp0_341[0x4] = _mm_mul_ps(temp0_338, arg10)
                arg7 = zmm2
                
                if (temp32_1 != 0)
                    zmm2.d = arg7.d f+ temp0_341[0]
                    arg10 = _mm_mul_ps(arg10, zmm0)
                    zmm0 = arg5
                    
                    if (temp32_1 != 0)
                        goto label_14022f9fc
                    
                    goto label_14022f999
                
                arg10 = _mm_mul_ps(arg10, zmm0)
                zmm0 = arg5
                bool cond:139_1
                bool cond:140_1
                bool cond:163_1
                bool cond:164_1
                
                if (temp32_1 != 0)
                label_14022f9fc:
                    zmm0.d = arg5.d f+ arg10[0]
                    zmm10 = _mm_add_ps(zmm10, zmm4)
                    char temp50_1 = temp0_983 & 2
                    cond:139_1 = temp50_1 == 0
                    cond:140_1 = temp50_1 != 0
                    cond:163_1 = temp50_1 == 0
                    cond:164_1 = temp50_1 != 0
                    
                    if (temp50_1 != 0)
                        goto label_14022f9a2
                    
                    goto label_14022fa0a
                
            label_14022f999:
                zmm10 = _mm_add_ps(zmm10, zmm4)
                char temp49_1 = temp0_983 & 2
                cond:139_1 = temp49_1 == 0
                cond:140_1 = temp49_1 != 0
                cond:163_1 = temp49_1 == 0
                cond:164_1 = temp49_1 != 0
                
                if (temp49_1 != 0)
                label_14022f9a2:
                    zmm1 = _mm_blend_ps(zmm1, zmm10, 2)
                    arg7 = _mm_add_ps(arg7, temp0_341)
                    
                    if (cond:140_1)
                        goto label_14022fa0f
                    
                    goto label_14022f9ae
                
            label_14022fa0a:
                arg7 = _mm_add_ps(arg7, temp0_341)
                
                if (not(cond:139_1))
                label_14022fa0f:
                    zmm2 = _mm_blend_ps(zmm2, arg7, 2)
                    arg5 = _mm_add_ps(arg5, arg10)
                    
                    if (cond:164_1)
                        goto label_14022f9b4
                    
                    goto label_14022fa1b
                
            label_14022f9ae:
                arg5 = _mm_add_ps(arg5, arg10)
                bool cond:199_1
                bool cond:200_1
                bool cond:222_1
                bool cond:223_1
                
                if (not(cond:163_1))
                label_14022f9b4:
                    zmm0 = _mm_blend_ps(zmm0, arg5, 2)
                    arg10 = _mm_cmpeq_epi32(arg10, arg10)
                    char temp73_1 = temp0_983 & 4
                    cond:199_1 = temp73_1 == 0
                    cond:200_1 = temp73_1 != 0
                    cond:222_1 = temp73_1 == 0
                    cond:223_1 = temp73_1 != 0
                    
                    if (temp73_1 != 0)
                        goto label_14022fa25
                    
                    goto label_14022f9c4
                
            label_14022fa1b:
                arg10 = _mm_cmpeq_epi32(arg10, arg10)
                char temp72_1 = temp0_983 & 4
                cond:199_1 = temp72_1 == 0
                cond:200_1 = temp72_1 != 0
                cond:222_1 = temp72_1 == 0
                cond:223_1 = temp72_1 != 0
                
                if (temp72_1 == 0)
                label_14022f9c4:
                    
                    if (not(cond:199_1))
                    label_14022f9c6:
                        zmm2 = _mm_blend_ps(zmm2, arg7, 4)
                        
                        if (cond:223_1)
                            goto label_14022fa30
                        
                        goto label_14022f9ce
                else
                label_14022fa25:
                    zmm1 = _mm_blend_ps(zmm1, zmm10, 4)
                    
                    if (cond:200_1)
                        goto label_14022f9c6
                
                bool cond:266_1
                bool cond:267_1
                bool cond:287_1
                bool cond:288_1
                
                if (not(cond:222_1))
                label_14022fa30:
                    zmm0 = _mm_blend_ps(zmm0, arg5, 4)
                    char temp100_1 = temp0_983 & 8
                    cond:266_1 = temp100_1 == 0
                    cond:267_1 = temp100_1 != 0
                    cond:287_1 = temp100_1 != 0
                    cond:288_1 = temp100_1 == 0
                    
                    if (temp100_1 != 0)
                        goto label_14022f9d3
                    
                    goto label_14022fa3b
                
            label_14022f9ce:
                char temp99_1 = temp0_983 & 8
                cond:266_1 = temp99_1 == 0
                cond:267_1 = temp99_1 != 0
                cond:287_1 = temp99_1 != 0
                cond:288_1 = temp99_1 == 0
                
                if (temp99_1 != 0)
                label_14022f9d3:
                    zmm10 = _mm_blend_ps(zmm10, zmm1, 7)
                    
                    if (cond:267_1)
                        goto label_14022fa41
                    
                    goto label_14022f9dc
                
            label_14022fa3b:
                zmm10 = zmm1
                
                if (cond:266_1)
                label_14022f9dc:
                    arg7 = zmm2
                    var_3c8 = arg12
                    
                    if (cond:287_1)
                        zmm0 = _mm_blend_ps(zmm0, arg5, 8)
                else
                label_14022fa41:
                    arg7 = _mm_blend_ps(arg7, zmm2, 7)
                    var_3c8 = arg12
                    
                    if (not(cond:288_1))
                        zmm0 = _mm_blend_ps(zmm0, arg5, 8)
                
                arg12 = zmm0
                arg8 ^= arg10
                rcx_27 = _mm_movemask_ps(arg8)
                
                if (rcx_27 != 0)
                    goto label_140232b56
                
                var_598 = zmm10
        zmm2 = _mm_unpacklo_ps(arg12, arg11[0].q)
        zmm0 = _mm_unpackhi_ps(arg12, arg11)
        arg6 = var_598
        float temp0_1035[0x4] = _mm_unpacklo_ps(arg6, arg7[0].q)
        float temp0_1036[0x4] = _mm_unpackhi_ps(arg6, arg7)
        zmm4 = _mm_insert_ps(temp0_1035, arg12, 0x28)
        arg5 = var_4a8_1
        int64_t rcx_72 = sx.q(arg5.d) * 0x30
        *(arg1 + rcx_72 + 0x20) = __extractps_memd_xmmps_immb(arg6, 0)
        int32_t var_128_1[0x4] = zmm4
        *(arg1 + rcx_72 + 0x24) = __extractps_memd_xmmps_immb(arg7, 0)
        *(arg1 + rcx_72 + 0x28) = __extractps_memd_xmmps_immb(arg12, 0)
        *(arg1 + rcx_72 + 0x2c) = 0
        int64_t rcx_76 = sx.q(_mm_extract_epi32(arg5, 2)) * 0x30
        *(arg1 + rcx_76 + 0x20) = __extractps_memd_xmmps_immb(arg6, 1)
        zmm3 = _mm_unpackhi_pd(temp0_1035, zmm2.q)
        *(arg1 + rcx_76 + 0x24) = __extractps_memd_xmmps_immb(arg7, 1)
        float var_118_1[0x4] = zmm3
        *(arg1 + rcx_76 + 0x28) = __extractps_memd_xmmps_immb(arg12, 1)
        *(arg1 + rcx_76 + 0x2c) = 0
        int64_t rcx_80 = sx.q(zmm12[0]) * 0x30
        *(arg1 + rcx_80 + 0x20) = __extractps_memd_xmmps_immb(arg6, 2)
        zmm2 = _mm_insert_ps(temp0_1036, arg12, 0xa8)
        *(arg1 + rcx_80 + 0x24) = __extractps_memd_xmmps_immb(arg7, 2)
        uint128_t var_108_1 = zmm2
        *(arg1 + rcx_80 + 0x28) = __extractps_memd_xmmps_immb(arg12, 2)
        zmm1 = _mm_unpackhi_pd(temp0_1036, zmm0.q)
        *(arg1 + rcx_80 + 0x2c) = 0
        *(arg1 + sx.q(_mm_extract_epi32(zmm12, 2)) * 0x30 + 0x20) = zmm1
        r15 = zx.q(r15.d + 4)
    while (r15.d s< i_5)
    
    result = zx.q(arg17)
    
    if (r15.d s< result.d)
        goto label_140232d5e
return result
