// 函数: sub_140210a00
// 地址: 0x140210a00
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
    label_14021586e:
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
            label_140215d17:
                char temp1_1 = rcx_93 & 1
                
                if (temp1_1 != 0)
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                    
                    if (temp1_1 != 0)
                        goto label_140215d69
                else if (temp1_1 != 0)
                label_140215d69:
                    arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                    
                    if (temp1_1 != 0)
                        goto label_140215d27
                    
                    goto label_140215d71
                
                bool cond:16_1
                bool cond:17_1
                bool cond:21_1
                bool cond:22_1
                
                if (temp1_1 != 0)
                label_140215d27:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                    char temp4_1 = rcx_93 & 2
                    cond:16_1 = temp4_1 == 0
                    cond:17_1 = temp4_1 != 0
                    cond:21_1 = temp4_1 == 0
                    cond:22_1 = temp4_1 != 0
                    
                    if (temp4_1 != 0)
                        goto label_140215d76
                    
                    goto label_140215d32
                
            label_140215d71:
                char temp3_1 = rcx_93 & 2
                cond:16_1 = temp3_1 == 0
                cond:17_1 = temp3_1 != 0
                cond:21_1 = temp3_1 == 0
                cond:22_1 = temp3_1 != 0
                
                if (temp3_1 == 0)
                label_140215d32:
                    
                    if (not(cond:16_1))
                    label_140215d34:
                        arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                        
                        if (cond:22_1)
                            goto label_140215d81
                        
                        goto label_140215d3c
                else
                label_140215d76:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                    
                    if (cond:17_1)
                        goto label_140215d34
                
                bool cond:26_1
                bool cond:27_1
                bool cond:37_1
                bool cond:38_1
                
                if (not(cond:21_1))
                label_140215d81:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                    char temp8_1 = rcx_93 & 4
                    cond:26_1 = temp8_1 == 0
                    cond:27_1 = temp8_1 != 0
                    cond:37_1 = temp8_1 == 0
                    cond:38_1 = temp8_1 != 0
                    
                    if (temp8_1 != 0)
                        goto label_140215d41
                    
                    goto label_140215d8c
                
            label_140215d3c:
                char temp7_1 = rcx_93 & 4
                cond:26_1 = temp7_1 == 0
                cond:27_1 = temp7_1 != 0
                cond:37_1 = temp7_1 == 0
                cond:38_1 = temp7_1 != 0
                
                if (temp7_1 == 0)
                label_140215d8c:
                    
                    if (not(cond:26_1))
                    label_140215d8e:
                        arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                        
                        if (cond:38_1)
                            goto label_140215d4c
                        
                        goto label_140215d96
                else
                label_140215d41:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                    
                    if (cond:27_1)
                        goto label_140215d8e
                
                bool cond:53_1
                bool cond:54_1
                bool cond:62_1
                bool cond:63_1
                
                if (not(cond:37_1))
                label_140215d4c:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                    char temp16_1 = rcx_93 & 8
                    cond:53_1 = temp16_1 == 0
                    cond:54_1 = temp16_1 != 0
                    cond:62_1 = temp16_1 == 0
                    cond:63_1 = temp16_1 == 0
                    
                    if (temp16_1 != 0)
                        goto label_140215d9b
                    
                    goto label_140215d57
                
            label_140215d96:
                char temp15_1 = rcx_93 & 8
                cond:53_1 = temp15_1 == 0
                cond:54_1 = temp15_1 != 0
                cond:62_1 = temp15_1 == 0
                cond:63_1 = temp15_1 == 0
                
                if (temp15_1 != 0)
                label_140215d9b:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                    
                    if (cond:54_1)
                        goto label_140215d59
                    
                    goto label_140215da4
                
            label_140215d57:
                
                if (cond:53_1)
                label_140215da4:
                    
                    if (not(cond:62_1))
                        arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                else
                label_140215d59:
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
                                        goto label_140216777
                                    
                                    goto label_1402163d2
                                
                                arg7 = zx.o(*zmm2.q)
                                zmm1 = _mm_cvtepi32_epi64(zmm1[0].q)
                                
                                if ((rbp_38 & 2) != 0)
                                label_140216777:
                                    arg7 =
                                        _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_548_4)
                                    
                                    if ((rbp_38 & 4) == 0)
                                        goto label_1402163e5
                                    
                                    goto label_140216798
                                
                            label_1402163d2:
                                zmm1 = __paddq_xmmdq_memdq(zmm1, var_548_4)
                                
                                if ((rbp_38 & 4) != 0)
                                label_140216798:
                                    arg7 = _mm_insert_epi32(arg7, zx.d(*zmm1[0].q), 2)
                                    
                                    if ((rbp_38 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                else
                                label_1402163e5:
                                    
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
                                                    goto label_1402164b8
                                                
                                                goto label_140216516
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*temp0_1276[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                            
                                            if ((temp0_1277 & 2) != 0)
                                            label_1402164b8:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(temp0_1276, 1)), 1)
                                                arg6 = zmm14
                                                zmm0 = _mm_add_epi64(zmm0, arg12)
                                                
                                                if ((temp0_1277 & 4) == 0)
                                                    goto label_140216525
                                                
                                                goto label_1402164d5
                                            
                                        label_140216516:
                                            arg6 = zmm14
                                            zmm0 = _mm_add_epi64(zmm0, arg12)
                                            
                                            if ((temp0_1277 & 4) != 0)
                                            label_1402164d5:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1277 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_140216525:
                                                
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
                                                    goto label_14021661e
                                                
                                                goto label_140216672
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(temp0_1299[0].q)
                                            
                                            if ((temp0_1302 & 2) != 0)
                                            label_14021661e:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg12)
                                                
                                                if ((temp0_1302 & 4) == 0)
                                                    goto label_14021667c
                                                
                                                goto label_140216636
                                            
                                        label_140216672:
                                            zmm0 = _mm_add_epi64(zmm0, arg12)
                                            
                                            if ((temp0_1302 & 4) != 0)
                                            label_140216636:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1302 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_14021667c:
                                                
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
                                        goto label_140219e0a
                                    
                                    goto label_140216a3d
                                
                                arg8 = zx.o(*zmm1[0].q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                zmm2 = var_558_3
                                
                                if ((rbp_38 & 2) != 0)
                                label_140219e0a:
                                    arg8 =
                                        _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg12)
                                    
                                    if ((rbp_38 & 4) == 0)
                                        goto label_140216a4c
                                    
                                    goto label_140219e28
                                
                            label_140216a3d:
                                zmm0 = _mm_add_epi64(zmm0, arg12)
                                
                                if ((rbp_38 & 4) != 0)
                                label_140219e28:
                                    arg8 = _mm_insert_epi32(arg8, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbp_38 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140216a4c:
                                    
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
                                        goto label_140219e6f
                                    
                                    goto label_140216ad1
                                
                                zmm0 = zx.o(*zmm2.q)
                                zmm1 = _mm_cvtepi32_epi64(zmm1[0].q)
                                
                                if ((rbp_38 & 2) != 0)
                                label_140219e6f:
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    arg12 = _mm_add_epi64(arg12, zmm1)
                                    
                                    if ((rbp_38 & 4) == 0)
                                        goto label_140216ae0
                                    
                                    goto label_140219e8c
                                
                            label_140216ad1:
                                arg12 = _mm_add_epi64(arg12, zmm1)
                                
                                if ((rbp_38 & 4) != 0)
                                label_140219e8c:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*arg12[0].q), 2)
                                    
                                    if ((rbp_38 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(arg12, 1)), 3)
                                else
                                label_140216ae0:
                                    
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
                                        goto label_14021671c
                                    
                                    goto label_140216052
                                
                                zmm1 = zx.o(*zmm3[0].q)
                                zmm2 = _mm_cvtepi32_epi64(zmm2.q)
                                
                                if ((rbp_37 & 2) != 0)
                                label_14021671c:
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_548_4)
                                    
                                    if ((rbp_37 & 4) == 0)
                                        goto label_140216065
                                    
                                    goto label_14021673d
                                
                            label_140216052:
                                zmm2 = __paddq_xmmdq_memdq(zmm2, var_548_4)
                                
                                if ((rbp_37 & 4) != 0)
                                label_14021673d:
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2.q), 2)
                                    
                                    if ((rbp_37 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                else
                                label_140216065:
                                    
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
                                                    goto label_140216135
                                                
                                                goto label_140216194
                                            
                                            arg5 = _mm_insert_epi32(arg5, zx.d(*arg7[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                            arg6 = zmm14
                                            
                                            if ((temp0_1215 & 2) != 0)
                                            label_140216135:
                                                arg5 = _mm_insert_epi32(arg5, 
                                                    zx.d(*_mm_extract_epi64(arg7, 1)), 1)
                                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_548_4)
                                                
                                                if ((temp0_1215 & 4) == 0)
                                                    goto label_1402161a2
                                                
                                                goto label_140216151
                                            
                                        label_140216194:
                                            zmm0 = __paddq_xmmdq_memdq(zmm0, var_548_4)
                                            
                                            if ((temp0_1215 & 4) != 0)
                                            label_140216151:
                                                arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1215 & 8) != 0)
                                                    arg5 = _mm_insert_epi32(arg5, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_1402161a2:
                                                
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
                                                    goto label_1402162a5
                                                
                                                goto label_1402162fa
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm4[0].q)
                                            
                                            if ((temp0_1242 & 2) != 0)
                                            label_1402162a5:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg12)
                                                
                                                if ((temp0_1242 & 4) == 0)
                                                    goto label_140216304
                                                
                                                goto label_1402162bd
                                            
                                        label_1402162fa:
                                            zmm0 = _mm_add_epi64(zmm0, arg12)
                                            
                                            if ((temp0_1242 & 4) != 0)
                                            label_1402162bd:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1242 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_140216304:
                                                
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
                                        goto label_140216952
                                    
                                    goto label_140216849
                                
                                arg8 = zx.o(*zmm1[0].q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                zmm2 = var_558_3
                                
                                if ((rbp_37 & 2) != 0)
                                label_140216952:
                                    arg8 =
                                        _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg12)
                                    
                                    if ((rbp_37 & 4) == 0)
                                        goto label_140216858
                                    
                                    goto label_140216970
                                
                            label_140216849:
                                zmm0 = _mm_add_epi64(zmm0, arg12)
                                
                                if ((rbp_37 & 4) != 0)
                                label_140216970:
                                    arg8 = _mm_insert_epi32(arg8, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbp_37 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140216858:
                                    
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
                                        goto label_1402169b7
                                    
                                    goto label_1402168e5
                                
                                zmm1 = zx.o(*zmm2[0].q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbp_37 & 2) != 0)
                                label_1402169b7:
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    arg12 = _mm_add_epi64(arg12, zmm0)
                                    
                                    if ((rbp_37 & 4) == 0)
                                        goto label_1402168f4
                                    
                                    goto label_1402169d4
                                
                            label_1402168e5:
                                arg12 = _mm_add_epi64(arg12, zmm0)
                                
                                if ((rbp_37 & 4) != 0)
                                label_1402169d4:
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*arg12[0].q), 2)
                                    zmm0 = zx.o(0)
                                    
                                    if ((rbp_37 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(arg12, 1)), 3)
                                else
                                label_1402168f4:
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
                            goto label_140216e46
                        
                        goto label_140216de1
                    
                    arg8 = *rbx_22
                    char temp9_1 = temp0_1395 & 2
                    cond:29_1 = temp9_1 != 0
                    cond:30_1 = temp9_1 == 0
                    cond:41_1 = temp9_1 != 0
                    cond:42_1 = temp9_1 == 0
                    
                    if (temp9_1 == 0)
                    label_140216e46:
                        arg7 = temp0_1108
                        arg5 = zmm2
                        
                        if (cond:30_1)
                            goto label_140216df3
                        
                        goto label_140216e51
                    
                label_140216de1:
                    arg8 = _mm_insert_ps(arg8, zmm12, 0x10)
                    arg7 = temp0_1108
                    arg5 = zmm2
                    
                    if (not(cond:29_1))
                    label_140216df3:
                        
                        if (cond:42_1)
                            goto label_140216e5a
                        
                        goto label_140216df5
                    
                label_140216e51:
                    arg5 = _mm_insert_ps(arg5, arg9, 0x10)
                    bool cond:55_1
                    bool cond:56_1
                    bool cond:66_1
                    bool cond:67_1
                    
                    if (not(cond:41_1))
                    label_140216e5a:
                        char temp18_1 = temp0_1395 & 4
                        cond:55_1 = temp18_1 != 0
                        cond:56_1 = temp18_1 == 0
                        cond:66_1 = temp18_1 != 0
                        cond:67_1 = temp18_1 == 0
                        arg9 = var_578_4
                        
                        if (temp18_1 == 0)
                            goto label_140216e06
                        
                        goto label_140216e65
                    
                label_140216df5:
                    arg6 = _mm_insert_ps(arg6, zmm4, 0x10)
                    char temp17_1 = temp0_1395 & 4
                    cond:55_1 = temp17_1 != 0
                    cond:56_1 = temp17_1 == 0
                    cond:66_1 = temp17_1 != 0
                    cond:67_1 = temp17_1 == 0
                    arg9 = var_578_4
                    
                    if (temp17_1 == 0)
                    label_140216e06:
                        arg11 = var_5d8_1
                        zmm12 = var_568_1
                        
                        if (cond:56_1)
                            goto label_140216e7b
                        
                        goto label_140216e15
                    
                label_140216e65:
                    arg8 = _mm_insert_ps(arg8, arg11, 0x20)
                    arg11 = var_5d8_1
                    zmm12 = var_568_1
                    
                    if (not(cond:55_1))
                    label_140216e7b:
                        
                        if (cond:67_1)
                            goto label_140216e1e
                        
                        goto label_140216e7d
                    
                label_140216e15:
                    arg5 = _mm_insert_ps(arg5, arg12, 0x20)
                    bool cond:87_1
                    bool cond:88_1
                    bool cond:105_1
                    bool cond:106_1
                    
                    if (not(cond:66_1))
                    label_140216e1e:
                        char temp31_1 = temp0_1395 & 8
                        cond:87_1 = temp31_1 != 0
                        cond:88_1 = temp31_1 == 0
                        cond:105_1 = temp31_1 == 0
                        cond:106_1 = temp31_1 != 0
                        
                        if (temp31_1 == 0)
                            goto label_140216e88
                        
                        goto label_140216e23
                    
                label_140216e7d:
                    arg6 = _mm_insert_ps(arg6, zmm1, 0x20)
                    char temp30_1 = temp0_1395 & 8
                    cond:87_1 = temp30_1 != 0
                    cond:88_1 = temp30_1 == 0
                    cond:105_1 = temp30_1 == 0
                    cond:106_1 = temp30_1 != 0
                    
                    if (temp30_1 == 0)
                    label_140216e88:
                        
                        if (cond:88_1)
                            goto label_140216e31
                        
                        goto label_140216e8a
                    
                label_140216e23:
                    arg8 = __insertps_xmmps_memd_immb(arg8, var_518_4, 0x30)
                    
                    if (cond:87_1)
                    label_140216e8a:
                        arg5 = __insertps_xmmps_memd_immb(arg5, var_448_3, 0x30)
                        
                        if (not(cond:105_1))
                            arg6 = _mm_insert_ps(arg6, zmm0, 0x30)
                    else
                    label_140216e31:
                        
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
                            goto label_140217034
                        
                        goto label_14021700f
                    
                    zmm0 = var_588_1
                    arg7 = zmm3
                    
                    if ((temp0_1421 & 2) != 0)
                    label_140217034:
                        arg8 = _mm_blend_ps(arg8, zmm4, 2)
                        
                        if ((temp0_1421 & 4) != 0)
                            goto label_140217015
                        
                        goto label_140217041
                    
                label_14021700f:
                    
                    if ((temp0_1421 & 4) == 0)
                    label_140217041:
                        
                        if ((temp0_1421 & 8) != 0)
                            arg8 = _mm_blend_ps(arg8, zmm4, 8)
                    else
                    label_140217015:
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
                            goto label_140217168
                        
                        goto label_14021714e
                    
                    if ((temp0_1421 & 2) != 0)
                    label_140217168:
                        arg5 = _mm_blend_epi16(arg5, zmm1, 0xc)
                        
                        if ((temp0_1421 & 4) != 0)
                            goto label_140217154
                        
                        goto label_140217174
                    
                label_14021714e:
                    
                    if ((temp0_1421 & 4) == 0)
                    label_140217174:
                        
                        if ((temp0_1421 & 8) != 0)
                            arg5 = _mm_blend_epi16(arg5, zmm1, 0xc0)
                    else
                    label_140217154:
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
                                goto label_1402173c8
                            
                            goto label_1402171be
                        
                        zmm1 = *arg10[0].q
                        
                        if ((temp0_1468 & 2) != 0)
                        label_1402173c8:
                            zmm1 =
                                __insertps_xmmps_memd_immb(zmm1, *_mm_extract_epi64(arg10, 1), 0x10)
                            arg10 = var_558_4
                            zmm14 = var_5b8_1
                            
                            if ((temp0_1468 & 4) == 0)
                                goto label_1402171d8
                            
                            goto label_1402173ed
                        
                    label_1402171be:
                        arg10 = var_558_4
                        zmm14 = var_5b8_1
                        
                        if ((temp0_1468 & 4) != 0)
                        label_1402173ed:
                            zmm1 = __insertps_xmmps_memd_immb(zmm1, *arg9[0].q, 0x20)
                            
                            if ((temp0_1468 & 8) != 0)
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(arg9, 1), 0x30)
                        else
                        label_1402171d8:
                            
                            if ((temp0_1468 & 8) != 0)
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(arg9, 1), 0x30)
                        
                        arg9 = var_578_4
                    
                    zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                    
                    if ((temp0_1421 & 1) != 0)
                        arg6 = _mm_blend_ps(arg6, zmm0, 1)
                        
                        if ((temp0_1421 & 2) != 0)
                            goto label_140217241
                        
                        goto label_140217227
                    
                    if ((temp0_1421 & 2) != 0)
                    label_140217241:
                        arg6 = _mm_blend_ps(arg6, zmm0, 2)
                        
                        if ((temp0_1421 & 4) != 0)
                            goto label_14021722d
                        
                        goto label_14021724d
                    
                label_140217227:
                    
                    if ((temp0_1421 & 4) == 0)
                    label_14021724d:
                        
                        if ((temp0_1421 & 8) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 8)
                    else
                    label_14021722d:
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
                                goto label_14021741b
                            
                            goto label_140217349
                        
                        zmm0 = *zmm2.q
                        
                        if ((rbp_43 & 2) != 0)
                        label_14021741b:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm2, 1), 0x10)
                            arg6 = arg9
                            
                            if ((rbp_43 & 4) == 0)
                                goto label_140217357
                            
                            goto label_14021743a
                        
                    label_140217349:
                        arg6 = arg9
                        
                        if ((rbp_43 & 4) == 0)
                        label_140217357:
                            
                            if ((rbp_43 & 8) != 0)
                                goto label_140217457
                            
                            goto label_140217361
                        
                    label_14021743a:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_598_5[0].q, 0x20)
                        char rbx_24
                        
                        if ((rbp_43 & 8) != 0)
                        label_140217457:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(var_598_5, 1), 0x30)
                            rbx_24 = _mm_movemask_ps(arg5)
                            arg11 = zx.o(0)
                            
                            if ((rbx_24 & 1) != 0)
                                goto label_140217372
                            
                            goto label_14021746e
                        
                    label_140217361:
                        rbx_24 = _mm_movemask_ps(arg5)
                        arg11 = zx.o(0)
                        
                        if ((rbx_24 & 1) != 0)
                        label_140217372:
                            arg11 = _mm_blend_epi16(arg11, zmm0, 3)
                            
                            if ((rbx_24 & 2) != 0)
                                goto label_140217477
                            
                            goto label_140217382
                        
                    label_14021746e:
                        
                        if ((rbx_24 & 2) != 0)
                        label_140217477:
                            arg11 = _mm_blend_epi16(arg11, zmm0, 0xc)
                            
                            if ((rbx_24 & 4) != 0)
                                goto label_14021738b
                            
                            goto label_140217487
                        
                    label_140217382:
                        
                        if ((rbx_24 & 4) == 0)
                        label_140217487:
                            
                            if ((rbx_24 & 8) != 0)
                                arg11 = _mm_blend_epi16(arg11, zmm0, 0xc0)
                        else
                        label_14021738b:
                            arg11 = _mm_blend_epi16(arg11, zmm0, 0x30)
                            
                            if ((rbx_24 & 8) != 0)
                                arg11 = _mm_blend_epi16(arg11, zmm0, 0xc0)
                        
                        arg5 = _mm_add_epi64(temp0_1486, zmm4)
                        zmm12 = _mm_blendv_ps(zmm14, _mm_add_epi64(zmm4, zmm14), temp0_1483)
                        zmm0 = temp0_1485
                        arg12 = _mm_blendv_ps(temp0_1486, arg5, zmm0)
                        
                        if ((rbp_43 & 1) == 0)
                            if ((rbp_43 & 2) != 0)
                                goto label_140217518
                            
                            goto label_1402174c7
                        
                        zmm0 = *zmm14.q
                        
                        if ((rbp_43 & 2) != 0)
                        label_140217518:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm14, 1), 0x10)
                            zmm14 = var_5b8_1
                            
                            if ((rbp_43 & 4) == 0)
                                goto label_1402174d4
                            
                            goto label_140217530
                        
                    label_1402174c7:
                        zmm14 = var_5b8_1
                        
                        if ((rbp_43 & 4) == 0)
                        label_1402174d4:
                            
                            if ((rbp_43 & 8) != 0)
                                goto label_140217543
                            
                            goto label_1402174da
                        
                    label_140217530:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1486[0].q, 0x20)
                        
                        if ((rbp_43 & 8) != 0)
                        label_140217543:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_1486, 1), 0x30)
                            arg9 = zx.o(0)
                            
                            if ((rbx_24 & 1) != 0)
                                goto label_1402174e3
                            
                            goto label_140217552
                        
                    label_1402174da:
                        arg9 = zx.o(0)
                        
                        if ((rbx_24 & 1) != 0)
                        label_1402174e3:
                            arg9 = _mm_blend_ps(arg9, zmm0, 1)
                            
                            if ((rbx_24 & 2) != 0)
                                goto label_140217557
                            
                            goto label_1402174ef
                        
                    label_140217552:
                        
                        if ((rbx_24 & 2) != 0)
                        label_140217557:
                            arg9 = _mm_blend_ps(arg9, zmm0, 2)
                            
                            if ((rbx_24 & 4) != 0)
                                goto label_1402174f4
                            
                            goto label_140217563
                        
                    label_1402174ef:
                        
                        if ((rbx_24 & 4) == 0)
                        label_140217563:
                            
                            if ((rbx_24 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm0, 8)
                        else
                        label_1402174f4:
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
                                goto label_14021765a
                            
                            goto label_140217602
                        
                        zmm0 = *zmm12[0].q
                        
                        if ((temp0_1511 & 2) != 0)
                        label_14021765a:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm12, 1), 0x10)
                            
                            if ((temp0_1511 & 4) == 0)
                                goto label_140217608
                            
                            goto label_14021766b
                        
                    label_140217602:
                        
                        if ((temp0_1511 & 4) == 0)
                        label_140217608:
                            
                            if ((temp0_1511 & 8) != 0)
                                goto label_14021767e
                            
                            goto label_14021760e
                        
                    label_14021766b:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg12[0].q, 0x20)
                        char rbx_25
                        
                        if ((temp0_1511 & 8) != 0)
                        label_14021767e:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg12, 1), 0x30)
                            rbx_25 = _mm_movemask_ps(arg5)
                            arg5 = zx.o(0)
                            
                            if ((rbx_25 & 1) != 0)
                                goto label_140217619
                            
                            goto label_14021768f
                        
                    label_14021760e:
                        rbx_25 = _mm_movemask_ps(arg5)
                        arg5 = zx.o(0)
                        
                        if ((rbx_25 & 1) != 0)
                        label_140217619:
                            arg5 = _mm_blend_ps(arg5, zmm0, 1)
                            
                            if ((rbx_25 & 2) != 0)
                                goto label_140217694
                            
                            goto label_140217624
                        
                    label_14021768f:
                        
                        if ((rbx_25 & 2) != 0)
                        label_140217694:
                            arg5 = _mm_blend_ps(arg5, zmm0, 2)
                            
                            if ((rbx_25 & 4) != 0)
                                goto label_140217629
                            
                            goto label_14021769f
                        
                    label_140217624:
                        
                        if ((rbx_25 & 4) == 0)
                        label_14021769f:
                            
                            if ((rbx_25 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm0, 8)
                        else
                        label_140217629:
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
                                goto label_140217736
                            
                            goto label_1402176e5
                        
                        zmm0 = *zmm2.q
                        
                        if ((temp0_1511 & 2) != 0)
                        label_140217736:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm2, 1), 0x10)
                            
                            if ((temp0_1511 & 4) == 0)
                                goto label_1402176eb
                            
                            goto label_140217747
                        
                    label_1402176e5:
                        
                        if ((temp0_1511 & 4) == 0)
                        label_1402176eb:
                            
                            if ((temp0_1511 & 8) != 0)
                                goto label_14021775a
                            
                            goto label_1402176f1
                        
                    label_140217747:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1518[0].q, 0x20)
                        
                        if ((temp0_1511 & 8) != 0)
                        label_14021775a:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_1518, 1), 0x30)
                            arg6 = var_588_1
                            arg10 = zx.o(0)
                            
                            if ((rbx_25 & 1) != 0)
                                goto label_140217701
                            
                            goto label_140217770
                        
                    label_1402176f1:
                        arg6 = var_588_1
                        arg10 = zx.o(0)
                        
                        if ((rbx_25 & 1) != 0)
                        label_140217701:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 3)
                            
                            if ((rbx_25 & 2) != 0)
                                goto label_140217775
                            
                            goto label_14021770d
                        
                    label_140217770:
                        
                        if ((rbx_25 & 2) != 0)
                        label_140217775:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 0xc)
                            
                            if ((rbx_25 & 4) != 0)
                                goto label_140217712
                            
                            goto label_140217781
                        
                    label_14021770d:
                        
                        if ((rbx_25 & 4) == 0)
                        label_140217781:
                            
                            if ((rbx_25 & 8) != 0)
                                arg10 = _mm_blend_epi16(arg10, zmm0, 0xc0)
                        else
                        label_140217712:
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
                                goto label_1402178d9
                            
                            goto label_140217814
                        
                        zmm0 = *zmm12[0].q
                        
                        if ((temp0_1541 & 2) != 0)
                        label_1402178d9:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm12, 1), 0x10)
                            
                            if ((temp0_1541 & 4) == 0)
                                goto label_14021781d
                            
                            goto label_1402178ed
                        
                    label_140217814:
                        
                        if ((temp0_1541 & 4) == 0)
                        label_14021781d:
                            
                            if ((temp0_1541 & 8) != 0)
                                goto label_140217903
                            
                            goto label_140217826
                        
                    label_1402178ed:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg12[0].q, 0x20)
                        char rbp_45
                        
                        if ((temp0_1541 & 8) != 0)
                        label_140217903:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg12, 1), 0x30)
                            rbp_45 = _mm_movemask_ps(arg6)
                            zmm3 = zx.o(0)
                            
                            if ((rbp_45 & 1) != 0)
                                goto label_140217836
                            
                            goto label_140217919
                        
                    label_140217826:
                        rbp_45 = _mm_movemask_ps(arg6)
                        zmm3 = zx.o(0)
                        
                        if ((rbp_45 & 1) != 0)
                        label_140217836:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 1)
                            
                            if ((rbp_45 & 2) != 0)
                                goto label_140217923
                            
                            goto label_140217846
                        
                    label_140217919:
                        
                        if ((rbp_45 & 2) != 0)
                        label_140217923:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                            
                            if ((rbp_45 & 4) != 0)
                                goto label_140217850
                            
                            goto label_140217933
                        
                    label_140217846:
                        
                        if ((rbp_45 & 4) != 0)
                        label_140217850:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                            
                            if ((rbp_45 & 8) != 0)
                                goto label_14021793d
                            
                            goto label_140217860
                        
                    label_140217933:
                        
                        if ((rbp_45 & 8) != 0)
                        label_14021793d:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                            
                            if ((temp0_1541 & 1) == 0)
                                goto label_140217869
                            
                            goto label_140217951
                        
                    label_140217860:
                        
                        if ((temp0_1541 & 1) == 0)
                        label_140217869:
                            
                            if ((temp0_1541 & 2) != 0)
                                goto label_140217965
                            
                            goto label_140217872
                        
                    label_140217951:
                        zmm0 = *zmm4[0].q
                        
                        if ((temp0_1541 & 2) != 0)
                        label_140217965:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm4, 1), 0x10)
                            
                            if ((temp0_1541 & 4) == 0)
                                goto label_14021787b
                            
                            goto label_140217979
                        
                    label_140217872:
                        
                        if ((temp0_1541 & 4) == 0)
                        label_14021787b:
                            
                            if ((temp0_1541 & 8) != 0)
                                goto label_14021798f
                            
                            goto label_140217884
                        
                    label_140217979:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm2.q, 0x20)
                        
                        if ((temp0_1541 & 8) != 0)
                        label_14021798f:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm2, 1), 0x30)
                            zmm2 = zx.o(0)
                            
                            if ((rbp_45 & 1) != 0)
                                goto label_140217891
                            
                            goto label_1402179a2
                        
                    label_140217884:
                        zmm2 = zx.o(0)
                        
                        if ((rbp_45 & 1) != 0)
                        label_140217891:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 1)
                            
                            if ((rbp_45 & 2) != 0)
                                goto label_1402179ac
                            
                            goto label_1402178a1
                        
                    label_1402179a2:
                        
                        if ((rbp_45 & 2) != 0)
                        label_1402179ac:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 2)
                            
                            if ((rbp_45 & 4) != 0)
                                goto label_1402178ab
                            
                            goto label_1402179bc
                        
                    label_1402178a1:
                        
                        if ((rbp_45 & 4) == 0)
                        label_1402179bc:
                            
                            if ((rbp_45 & 8) != 0)
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                        else
                        label_1402178ab:
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
                            goto label_140217d0a
                        
                        goto label_140217b17
                    
                    arg10 = var_558_4
                    zmm3 = _mm_add_ps(zmm3, zmm2)
                    bool cond:119_1
                    bool cond:120_1
                    bool cond:137_1
                    bool cond:138_1
                    
                    if (temp23_1 != 0)
                    label_140217d0a:
                        arg6 = _mm_blend_ps(arg6, zmm3, 1)
                        char temp41_1 = temp0_1117 & 2
                        cond:119_1 = temp41_1 == 0
                        cond:120_1 = temp41_1 != 0
                        cond:137_1 = temp41_1 == 0
                        cond:138_1 = temp41_1 != 0
                        
                        if (temp41_1 != 0)
                            goto label_140217b20
                        
                        goto label_140217d19
                    
                label_140217b17:
                    char temp40_1 = temp0_1117 & 2
                    cond:119_1 = temp40_1 == 0
                    cond:120_1 = temp40_1 != 0
                    cond:137_1 = temp40_1 == 0
                    cond:138_1 = temp40_1 != 0
                    
                    if (temp40_1 == 0)
                    label_140217d19:
                        
                        if (not(cond:119_1))
                        label_140217d1f:
                            arg5 = _mm_blend_ps(arg5, temp0_1594, 2)
                            
                            if (cond:138_1)
                                goto label_140217b33
                            
                            goto label_140217d2b
                    else
                    label_140217b20:
                        arg8 = _mm_blend_ps(arg8, temp0_1584, 2)
                        
                        if (cond:120_1)
                            goto label_140217d1f
                    
                    bool cond:178_1
                    bool cond:179_1
                    bool cond:197_1
                    bool cond:198_1
                    
                    if (not(cond:137_1))
                    label_140217b33:
                        arg6 = _mm_blend_ps(arg6, zmm3, 2)
                        char temp63_1 = temp0_1117 & 4
                        cond:178_1 = temp63_1 == 0
                        cond:179_1 = temp63_1 != 0
                        cond:197_1 = temp63_1 == 0
                        cond:198_1 = temp63_1 != 0
                        
                        if (temp63_1 != 0)
                            goto label_140217d34
                        
                        goto label_140217b42
                    
                label_140217d2b:
                    char temp62_1 = temp0_1117 & 4
                    cond:178_1 = temp62_1 == 0
                    cond:179_1 = temp62_1 != 0
                    cond:197_1 = temp62_1 == 0
                    cond:198_1 = temp62_1 != 0
                    
                    if (temp62_1 == 0)
                    label_140217b42:
                        
                        if (not(cond:178_1))
                        label_140217b48:
                            arg5 = _mm_blend_ps(arg5, temp0_1594, 4)
                            
                            if (cond:198_1)
                                goto label_140217d47
                            
                            goto label_140217b54
                    else
                    label_140217d34:
                        arg8 = _mm_blend_ps(arg8, temp0_1584, 4)
                        
                        if (cond:179_1)
                            goto label_140217b48
                    
                    bool cond:245_1
                    bool cond:246_1
                    bool cond:264_1
                    bool cond:265_1
                    
                    if (not(cond:197_1))
                    label_140217d47:
                        arg6 = _mm_blend_ps(arg6, zmm3, 4)
                        char temp85_1 = temp0_1117 & 8
                        cond:245_1 = temp85_1 == 0
                        cond:246_1 = temp85_1 != 0
                        cond:264_1 = temp85_1 == 0
                        cond:265_1 = temp85_1 != 0
                        
                        if (temp85_1 != 0)
                            goto label_140217b5d
                        
                        goto label_140217d56
                    
                label_140217b54:
                    char temp84_1 = temp0_1117 & 8
                    cond:245_1 = temp84_1 == 0
                    cond:246_1 = temp84_1 != 0
                    cond:264_1 = temp84_1 == 0
                    cond:265_1 = temp84_1 != 0
                    
                    if (temp84_1 != 0)
                    label_140217b5d:
                        arg8 = _mm_blend_ps(arg8, temp0_1584, 8)
                        arg11 = var_5d8_1
                        zmm12 = var_568_1
                        
                        if (cond:246_1)
                            goto label_140217d69
                        
                        goto label_140217b77
                    
                label_140217d56:
                    arg11 = var_5d8_1
                    zmm12 = var_568_1
                    
                    if (cond:245_1)
                    label_140217b77:
                        
                        if (not(cond:264_1))
                            arg6 = _mm_blend_ps(arg6, zmm3, 8)
                    else
                    label_140217d69:
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
                                goto label_140217df5
                            
                            goto label_140217dd2
                        
                        arg6 = zmm14
                        zmm14 = var_5b8_1
                        
                        if ((temp0_1606 & 2) != 0)
                        label_140217df5:
                            arg8 = _mm_blend_ps(arg8, zmm2, 2)
                            
                            if ((temp0_1606 & 4) != 0)
                                goto label_140217dd7
                            
                            goto label_140217e01
                        
                    label_140217dd2:
                        
                        if ((temp0_1606 & 4) == 0)
                        label_140217e01:
                            
                            if ((temp0_1606 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm2, 8)
                        else
                        label_140217dd7:
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
                                goto label_140217f52
                            
                            goto label_140217f3b
                        
                        if ((temp0_1606 & 2) != 0)
                        label_140217f52:
                            arg5 = _mm_blend_ps(arg5, zmm3, 2)
                            
                            if ((temp0_1606 & 4) != 0)
                                goto label_140217f40
                            
                            goto label_140217f5d
                        
                    label_140217f3b:
                        
                        if ((temp0_1606 & 4) == 0)
                        label_140217f5d:
                            
                            if ((temp0_1606 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm3, 8)
                        else
                        label_140217f40:
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
                                    goto label_140218b2d
                                
                                goto label_140217fb0
                            
                            zmm3 = zx.o(*zmm2.q)
                            
                            if ((temp0_1665 & 2) != 0)
                            label_140218b2d:
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                
                                if ((temp0_1665 & 4) == 0)
                                    goto label_140217fb9
                                
                                goto label_140218b44
                            
                        label_140217fb0:
                            
                            if ((temp0_1665 & 4) != 0)
                            label_140218b44:
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1[0].q), 2)
                                
                                if ((temp0_1665 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                            else
                            label_140217fb9:
                                
                                if ((temp0_1665 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                            
                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zx.o(0), zmm3, 0x55), data_143442b40))
                        
                        zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_1606 & 1) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 1)
                            
                            if ((temp0_1606 & 2) != 0)
                                goto label_140218022
                            
                            goto label_14021800b
                        
                        if ((temp0_1606 & 2) != 0)
                        label_140218022:
                            arg6 = _mm_blend_ps(arg6, zmm0, 2)
                            
                            if ((temp0_1606 & 4) != 0)
                                goto label_140218010
                            
                            goto label_14021802d
                        
                    label_14021800b:
                        
                        if ((temp0_1606 & 4) == 0)
                        label_14021802d:
                            
                            if ((temp0_1606 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                        else
                        label_140218010:
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
                                label_1402180f9:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                                    
                                    if (temp29_1 != 0)
                                        goto label_1402180a7
                                    
                                    goto label_140218101
                            else
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                                arg7 = temp0_1108
                                arg12 = var_548_5
                                
                                if (temp29_1 != 0)
                                    goto label_1402180f9
                            
                            bool cond:135_1
                            bool cond:136_1
                            bool cond:155_1
                            bool cond:156_1
                            
                            if (temp29_1 != 0)
                            label_1402180a7:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                                char temp47_1 = temp0_1679 & 2
                                cond:135_1 = temp47_1 == 0
                                cond:136_1 = temp47_1 != 0
                                cond:155_1 = temp47_1 == 0
                                cond:156_1 = temp47_1 != 0
                                
                                if (temp47_1 != 0)
                                    goto label_140218106
                                
                                goto label_1402180b2
                            
                        label_140218101:
                            char temp46_1 = temp0_1679 & 2
                            cond:135_1 = temp46_1 == 0
                            cond:136_1 = temp46_1 != 0
                            cond:155_1 = temp46_1 == 0
                            cond:156_1 = temp46_1 != 0
                            
                            if (temp46_1 == 0)
                            label_1402180b2:
                                
                                if (not(cond:135_1))
                                label_1402180b4:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                                    
                                    if (cond:156_1)
                                        goto label_140218111
                                    
                                    goto label_1402180bc
                            else
                            label_140218106:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                                
                                if (cond:136_1)
                                    goto label_1402180b4
                            
                            bool cond:195_1
                            bool cond:196_1
                            bool cond:217_1
                            bool cond:218_1
                            
                            if (not(cond:155_1))
                            label_140218111:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                                char temp68_1 = temp0_1679 & 4
                                cond:195_1 = temp68_1 == 0
                                cond:196_1 = temp68_1 != 0
                                cond:217_1 = temp68_1 == 0
                                cond:218_1 = temp68_1 != 0
                                
                                if (temp68_1 != 0)
                                    goto label_1402180c1
                                
                                goto label_14021811c
                            
                        label_1402180bc:
                            char temp67_1 = temp0_1679 & 4
                            cond:195_1 = temp67_1 == 0
                            cond:196_1 = temp67_1 != 0
                            cond:217_1 = temp67_1 == 0
                            cond:218_1 = temp67_1 != 0
                            
                            if (temp67_1 == 0)
                            label_14021811c:
                                
                                if (not(cond:195_1))
                                label_14021811e:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                                    
                                    if (cond:218_1)
                                        goto label_1402180cc
                                    
                                    goto label_140218126
                            else
                            label_1402180c1:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                                
                                if (cond:196_1)
                                    goto label_14021811e
                            
                            bool cond:262_1
                            bool cond:263_1
                            bool cond:285_1
                            bool cond:286_1
                            
                            if (not(cond:217_1))
                            label_1402180cc:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                                char temp93_1 = temp0_1679 & 8
                                cond:262_1 = temp93_1 == 0
                                cond:263_1 = temp93_1 != 0
                                cond:285_1 = temp93_1 == 0
                                cond:286_1 = temp93_1 == 0
                                
                                if (temp93_1 != 0)
                                    goto label_14021812b
                                
                                goto label_1402180d7
                            
                        label_140218126:
                            char temp92_1 = temp0_1679 & 8
                            cond:262_1 = temp92_1 == 0
                            cond:263_1 = temp92_1 != 0
                            cond:285_1 = temp92_1 == 0
                            cond:286_1 = temp92_1 == 0
                            
                            if (temp92_1 != 0)
                            label_14021812b:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                                
                                if (cond:263_1)
                                    goto label_1402180d9
                                
                                goto label_140218134
                            
                        label_1402180d7:
                            
                            if (cond:262_1)
                            label_140218134:
                                
                                if (not(cond:285_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                            else
                            label_1402180d9:
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
                                    goto label_1402181d8
                            else if (temp39_1 != 0)
                            label_1402181d8:
                                arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                                
                                if (temp39_1 != 0)
                                    goto label_14021819a
                                
                                goto label_1402181e0
                            
                            bool cond:153_1
                            bool cond:154_1
                            bool cond:176_1
                            bool cond:177_1
                            
                            if (temp39_1 != 0)
                            label_14021819a:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                                char temp61_1 = temp0_1693 & 2
                                cond:153_1 = temp61_1 == 0
                                cond:154_1 = temp61_1 != 0
                                cond:176_1 = temp61_1 == 0
                                cond:177_1 = temp61_1 != 0
                                
                                if (temp61_1 != 0)
                                    goto label_1402181e5
                                
                                goto label_1402181a5
                            
                        label_1402181e0:
                            char temp60_1 = temp0_1693 & 2
                            cond:153_1 = temp60_1 == 0
                            cond:154_1 = temp60_1 != 0
                            cond:176_1 = temp60_1 == 0
                            cond:177_1 = temp60_1 != 0
                            
                            if (temp60_1 == 0)
                            label_1402181a5:
                                
                                if (not(cond:153_1))
                                label_1402181a7:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                                    
                                    if (cond:177_1)
                                        goto label_1402181f0
                                    
                                    goto label_1402181af
                            else
                            label_1402181e5:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                                
                                if (cond:154_1)
                                    goto label_1402181a7
                            
                            bool cond:215_1
                            bool cond:216_1
                            bool cond:243_1
                            bool cond:244_1
                            
                            if (not(cond:176_1))
                            label_1402181f0:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                                char temp83_1 = temp0_1693 & 4
                                cond:215_1 = temp83_1 == 0
                                cond:216_1 = temp83_1 != 0
                                cond:243_1 = temp83_1 == 0
                                cond:244_1 = temp83_1 != 0
                                
                                if (temp83_1 != 0)
                                    goto label_1402181b4
                                
                                goto label_1402181fb
                            
                        label_1402181af:
                            char temp82_1 = temp0_1693 & 4
                            cond:215_1 = temp82_1 == 0
                            cond:216_1 = temp82_1 != 0
                            cond:243_1 = temp82_1 == 0
                            cond:244_1 = temp82_1 != 0
                            
                            if (temp82_1 == 0)
                            label_1402181fb:
                                
                                if (not(cond:215_1))
                                label_1402181fd:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                                    
                                    if (cond:244_1)
                                        goto label_1402181bf
                                    
                                    goto label_140218205
                            else
                            label_1402181b4:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                                
                                if (cond:216_1)
                                    goto label_1402181fd
                            
                            bool cond:283_1
                            bool cond:284_1
                            bool cond:305_1
                            bool cond:306_1
                            
                            if (not(cond:243_1))
                            label_1402181bf:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                                char temp109_1 = temp0_1693 & 8
                                cond:283_1 = temp109_1 == 0
                                cond:284_1 = temp109_1 != 0
                                cond:305_1 = temp109_1 == 0
                                cond:306_1 = temp109_1 == 0
                                
                                if (temp109_1 != 0)
                                    goto label_14021820a
                                
                                goto label_1402181ca
                            
                        label_140218205:
                            char temp108_1 = temp0_1693 & 8
                            cond:283_1 = temp108_1 == 0
                            cond:284_1 = temp108_1 != 0
                            cond:305_1 = temp108_1 == 0
                            cond:306_1 = temp108_1 == 0
                            
                            if (temp108_1 != 0)
                            label_14021820a:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                                
                                if (cond:284_1)
                                    goto label_1402181cc
                                
                                goto label_140218213
                            
                        label_1402181ca:
                            
                            if (cond:283_1)
                            label_140218213:
                                
                                if (not(cond:305_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                            else
                            label_1402181cc:
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
                    goto label_140215d17
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
                                goto label_140218500
                            
                            goto label_140218469
                        
                        zmm2 = *rbx_29
                        char temp21_1 = temp0_1721 & 2
                        cond:72_1 = temp21_1 != 0
                        cond:73_1 = temp21_1 == 0
                        cond:80_1 = temp21_1 != 0
                        cond:81_1 = temp21_1 == 0
                        
                        if (temp21_1 == 0)
                        label_140218500:
                            zmm4 = temp0_1108
                            arg5 = var_518_7
                            
                            if (cond:73_1)
                                goto label_140218484
                            
                            goto label_14021851f
                        
                    label_140218469:
                        zmm2 = _mm_insert_ps(zmm2, arg10, 0x10)
                        zmm4 = temp0_1108
                        arg5 = var_518_7
                        
                        if (not(cond:72_1))
                        label_140218484:
                            
                            if (cond:81_1)
                                goto label_14021852a
                            
                            goto label_14021848a
                        
                    label_14021851f:
                        var_568_1 = _mm_insert_ps(var_568_1, arg7, 0x10)
                        bool cond:115_1
                        bool cond:116_1
                        bool cond:134_1
                        
                        if (not(cond:80_1))
                        label_14021852a:
                            char temp38_1 = temp0_1721 & 4
                            cond:115_1 = temp38_1 == 0
                            cond:116_1 = temp38_1 == 0
                            cond:134_1 = temp38_1 == 0
                            arg6 = var_588_1
                            arg7 = zmm4
                            
                            if (temp38_1 == 0)
                                goto label_1402184a4
                            
                            goto label_140218540
                        
                    label_14021848a:
                        zmm12 = _mm_insert_ps(zmm12, zmm3, 0x10)
                        char temp37_1 = temp0_1721 & 4
                        cond:115_1 = temp37_1 == 0
                        cond:116_1 = temp37_1 == 0
                        cond:134_1 = temp37_1 == 0
                        arg6 = var_588_1
                        arg7 = zmm4
                        
                        if (temp37_1 != 0)
                        label_140218540:
                            zmm4 = __insertps_xmmps_memd_immb(zmm2, var_468_4, 0x20)
                            arg10 = var_558_5
                            
                            if (not(cond:115_1))
                                var_568_1 = _mm_insert_ps(var_568_1, arg9, 0x20)
                        else
                        label_1402184a4:
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
                                goto label_14021859c
                            
                            goto label_14021857c
                        
                        char temp58_1 = temp0_1721 & 8
                        cond:174_1 = temp58_1 == 0
                        cond:175_1 = temp58_1 != 0
                        cond:193_1 = temp58_1 == 0
                        cond:194_1 = temp58_1 != 0
                        
                        if (temp58_1 != 0)
                        label_14021859c:
                            zmm4 = __insertps_xmmps_memd_immb(zmm4, var_488_2, 0x30)
                            
                            if (cond:175_1)
                                goto label_14021858e
                            
                            goto label_1402185a9
                        
                    label_14021857c:
                        
                        if (cond:174_1)
                        label_1402185a9:
                            
                            if (not(cond:193_1))
                                zmm12 = _mm_insert_ps(zmm12, zmm0, 0x30)
                        else
                        label_14021858e:
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
                                goto label_140218737
                            
                            goto label_140218715
                        
                        arg5 = var_518_7
                        
                        if ((temp0_1749 & 2) != 0)
                        label_140218737:
                            arg7 = _mm_blend_ps(arg7, temp0_1771, 2)
                            
                            if ((temp0_1749 & 4) != 0)
                                goto label_14021871b
                            
                            goto label_140218743
                        
                    label_140218715:
                        
                        if ((temp0_1749 & 4) == 0)
                        label_140218743:
                            
                            if ((temp0_1749 & 8) != 0)
                                arg7 = _mm_blend_ps(arg7, temp0_1771, 8)
                        else
                        label_14021871b:
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
                                    goto label_140218b71
                                
                                goto label_1402187c4
                            
                            zmm0 = *arg10[0].q
                            
                            if ((temp0_1778 & 2) != 0)
                            label_140218b71:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg10, 1), 0x10)
                                arg5 = var_518_7
                                
                                if ((temp0_1778 & 4) == 0)
                                    goto label_1402187d5
                                
                                goto label_140218b8d
                            
                        label_1402187c4:
                            arg5 = var_518_7
                            
                            if ((temp0_1778 & 4) != 0)
                            label_140218b8d:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm12[0].q, 0x20)
                                
                                if ((temp0_1778 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            else
                            label_1402187d5:
                                
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
                                goto label_140218850
                            
                            goto label_14021881e
                        
                        if ((temp0_1749 & 2) != 0)
                        label_140218850:
                            var_568_1 = _mm_blend_epi16(var_568_1, zmm1, 0xc)
                            
                            if ((temp0_1749 & 4) != 0)
                                goto label_140218830
                            
                            goto label_14021885c
                        
                    label_14021881e:
                        
                        if ((temp0_1749 & 4) == 0)
                        label_14021885c:
                            
                            if ((temp0_1749 & 8) != 0)
                                var_568_1 = _mm_blend_epi16(var_568_1, zmm1, 0xc0)
                        else
                        label_140218830:
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
                                    goto label_140218bba
                                
                                goto label_1402188b8
                            
                            zmm1 = *arg10[0].q
                            
                            if ((temp0_1794 & 2) != 0)
                            label_140218bba:
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(arg10, 1), 0x10)
                                arg6 = var_588_1
                                
                                if ((temp0_1794 & 4) == 0)
                                    goto label_1402188c7
                                
                                goto label_140218bd4
                            
                        label_1402188b8:
                            arg6 = var_588_1
                            
                            if ((temp0_1794 & 4) != 0)
                            label_140218bd4:
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, *zmm12[0].q, 0x20)
                                
                                if ((temp0_1794 & 8) != 0)
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            else
                            label_1402188c7:
                                
                                if ((temp0_1794 & 8) != 0)
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            
                            arg7 = temp0_1108
                        
                        zmm12 = var_558_6
                        zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_1749 & 1) != 0)
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 3)
                            
                            if ((temp0_1749 & 2) != 0)
                                goto label_140218937
                            
                            goto label_14021891c
                        
                        if ((temp0_1749 & 2) != 0)
                        label_140218937:
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc)
                            
                            if ((temp0_1749 & 4) != 0)
                                goto label_140218922
                            
                            goto label_140218944
                        
                    label_14021891c:
                        
                        if ((temp0_1749 & 4) == 0)
                        label_140218944:
                            
                            if ((temp0_1749 & 8) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                        else
                        label_140218922:
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
                                    goto label_140218c01
                                
                                goto label_140218a32
                            
                            zmm0 = *arg11[0].q
                            
                            if ((rbx_31 & 2) != 0)
                            label_140218c01:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg11, 1), 0x10)
                                
                                if ((rbx_31 & 4) == 0)
                                    goto label_140218a3b
                                
                                goto label_140218c1b
                            
                        label_140218a32:
                            
                            if ((rbx_31 & 4) == 0)
                            label_140218a3b:
                                
                                if ((rbx_31 & 8) != 0)
                                    goto label_140218c37
                                
                                goto label_140218a44
                            
                        label_140218c1b:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_598_5.q, 0x20)
                            char rdi_31
                            
                            if ((rbx_31 & 8) != 0)
                            label_140218c37:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_598_5, 1), 0x30)
                                rdi_31 = _mm_movemask_ps(zmm4)
                                zmm2 = zx.o(0)
                                
                                if ((rdi_31 & 1) != 0)
                                    goto label_140218a55
                                
                                goto label_140218c4e
                            
                        label_140218a44:
                            rdi_31 = _mm_movemask_ps(zmm4)
                            zmm2 = zx.o(0)
                            
                            if ((rdi_31 & 1) != 0)
                            label_140218a55:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 3)
                                
                                if ((rdi_31 & 2) != 0)
                                    goto label_140218c58
                                
                                goto label_140218a65
                            
                        label_140218c4e:
                            
                            if ((rdi_31 & 2) != 0)
                            label_140218c58:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc)
                                
                                if ((rdi_31 & 4) != 0)
                                    goto label_140218a6f
                                
                                goto label_140218c68
                            
                        label_140218a65:
                            
                            if ((rdi_31 & 4) == 0)
                            label_140218c68:
                                
                                if ((rdi_31 & 8) != 0)
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc0)
                            else
                            label_140218a6f:
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
                                label_140218d24:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1815[0].q, 0x20)
                                    
                                    if ((rbx_31 & 8) == 0)
                                        goto label_140218ce4
                                    
                                    goto label_140218d36
                            else if ((rbx_31 & 4) != 0)
                                goto label_140218d24
                            
                            if ((rbx_31 & 8) == 0)
                            label_140218ce4:
                                zmm1 = zx.o(0)
                                
                                if ((rdi_31 & 1) == 0)
                                    goto label_140218d45
                                
                                goto label_140218ced
                            
                        label_140218d36:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_1815, 1), 0x30)
                            zmm1 = zx.o(0)
                            
                            if ((rdi_31 & 1) == 0)
                            label_140218d45:
                                
                                if ((rdi_31 & 2) == 0)
                                    goto label_140218cf9
                                
                                goto label_140218d4b
                            
                        label_140218ced:
                            zmm1 = _mm_blend_ps(zmm1, zmm0, 1)
                            
                            if ((rdi_31 & 2) == 0)
                            label_140218cf9:
                                
                                if ((rdi_31 & 4) == 0)
                                    goto label_140218d57
                                
                                goto label_140218cff
                            
                        label_140218d4b:
                            zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                            
                            if ((rdi_31 & 4) != 0)
                            label_140218cff:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 4)
                                
                                if ((rdi_31 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                            label_140218d57:
                                
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
                                    goto label_140218e7b
                                
                                goto label_140218e05
                            
                            zmm0 = *var_5d8_1.q
                            
                            if ((temp0_1844 & 2) != 0)
                            label_140218e7b:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5d8_1, 1), 0x10)
                                
                                if ((temp0_1844 & 4) == 0)
                                    goto label_140218e0a
                                
                                goto label_140218e91
                            
                        label_140218e05:
                            
                            if ((temp0_1844 & 4) == 0)
                            label_140218e0a:
                                
                                if ((temp0_1844 & 8) != 0)
                                    goto label_140218ead
                                
                                goto label_140218e13
                            
                        label_140218e91:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_598_5[0].q, 0x20)
                            char rdi_32
                            
                            if ((temp0_1844 & 8) != 0)
                            label_140218ead:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_598_5, 1), 0x30)
                                rdi_32 = _mm_movemask_ps(zmm4)
                                zmm1 = zx.o(0)
                                
                                if ((rdi_32 & 1) != 0)
                                    goto label_140218e24
                                
                                goto label_140218ec4
                            
                        label_140218e13:
                            rdi_32 = _mm_movemask_ps(zmm4)
                            zmm1 = zx.o(0)
                            
                            if ((rdi_32 & 1) != 0)
                            label_140218e24:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 3)
                                
                                if ((rdi_32 & 2) != 0)
                                    goto label_140218ece
                                
                                goto label_140218e34
                            
                        label_140218ec4:
                            
                            if ((rdi_32 & 2) != 0)
                            label_140218ece:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc)
                                
                                if ((rdi_32 & 4) != 0)
                                    goto label_140218e3e
                                
                                goto label_140218ede
                            
                        label_140218e34:
                            
                            if ((rdi_32 & 4) == 0)
                            label_140218ede:
                                
                                if ((rdi_32 & 8) != 0)
                                    zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                            else
                            label_140218e3e:
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
                                    goto label_1402190fd
                                
                                goto label_140218f32
                            
                            zmm0 = *arg5.q
                            
                            if ((temp0_1844 & 2) != 0)
                            label_1402190fd:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg5, 1), 0x10)
                                
                                if ((temp0_1844 & 4) == 0)
                                    goto label_140218f3b
                                
                                goto label_140219111
                            
                        label_140218f32:
                            
                            if ((temp0_1844 & 4) != 0)
                            label_140219111:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1851[0].q, 0x20)
                                
                                if ((temp0_1844 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_1851, 1), 0x30)
                            else
                            label_140218f3b:
                                
                                if ((temp0_1844 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_1851, 1), 0x30)
                            
                            arg6 = var_588_1
                            arg7 = zmm12
                            arg9 = zx.o(0)
                            
                            if ((rdi_32 & 1) != 0)
                                arg9 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rdi_32 & 2) != 0)
                                    goto label_140218f8b
                                
                                goto label_140218f70
                            
                            if ((rdi_32 & 2) != 0)
                            label_140218f8b:
                                arg9 = _mm_blend_epi16(arg9, zmm0, 0xc)
                                
                                if ((rdi_32 & 4) != 0)
                                    goto label_140218f76
                                
                                goto label_140218f98
                            
                        label_140218f70:
                            
                            if ((rdi_32 & 4) == 0)
                            label_140218f98:
                                
                                if ((rdi_32 & 8) != 0)
                                    arg9 = _mm_blend_epi16(arg9, zmm0, 0xc0)
                            else
                            label_140218f76:
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
                                    goto label_140219148
                                
                                goto label_140219039
                            
                            zmm0 = *var_5d8_1.q
                            
                            if ((temp0_1872 & 2) != 0)
                            label_140219148:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5d8_1, 1), 0x10)
                                
                                if ((temp0_1872 & 4) == 0)
                                    goto label_140219042
                                
                                goto label_140219162
                            
                        label_140219039:
                            
                            if ((temp0_1872 & 4) == 0)
                            label_140219042:
                                
                                if ((temp0_1872 & 8) != 0)
                                    goto label_14021917e
                                
                                goto label_14021904b
                            
                        label_140219162:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_598_5[0].q, 0x20)
                            char rbx_33
                            
                            if ((temp0_1872 & 8) != 0)
                            label_14021917e:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_598_5, 1), 0x30)
                                rbx_33 = _mm_movemask_ps(zmm3)
                                zmm2 = zx.o(0)
                                
                                if ((rbx_33 & 1) != 0)
                                    goto label_14021905a
                                
                                goto label_140219193
                            
                        label_14021904b:
                            rbx_33 = _mm_movemask_ps(zmm3)
                            zmm2 = zx.o(0)
                            
                            if ((rbx_33 & 1) != 0)
                            label_14021905a:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 1)
                                
                                if ((rbx_33 & 2) != 0)
                                    goto label_14021919c
                                
                                goto label_140219069
                            
                        label_140219193:
                            
                            if ((rbx_33 & 2) != 0)
                            label_14021919c:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 2)
                                
                                if ((rbx_33 & 4) != 0)
                                    goto label_140219072
                                
                                goto label_1402191ab
                            
                        label_140219069:
                            
                            if ((rbx_33 & 4) != 0)
                            label_140219072:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 4)
                                
                                if ((rbx_33 & 8) != 0)
                                    goto label_1402191b4
                                
                                goto label_140219081
                            
                        label_1402191ab:
                            
                            if ((rbx_33 & 8) != 0)
                            label_1402191b4:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                                
                                if ((temp0_1872 & 1) == 0)
                                    goto label_14021908a
                                
                                goto label_1402191c8
                            
                        label_140219081:
                            
                            if ((temp0_1872 & 1) == 0)
                            label_14021908a:
                                
                                if ((temp0_1872 & 2) != 0)
                                    goto label_1402191dc
                                
                                goto label_140219093
                            
                        label_1402191c8:
                            zmm0 = *arg5.q
                            
                            if ((temp0_1872 & 2) != 0)
                            label_1402191dc:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg5, 1), 0x10)
                                
                                if ((temp0_1872 & 4) == 0)
                                    goto label_14021909c
                                
                                goto label_1402191f0
                            
                        label_140219093:
                            
                            if ((temp0_1872 & 4) == 0)
                            label_14021909c:
                                
                                if ((temp0_1872 & 8) != 0)
                                    goto label_140219206
                                
                                goto label_1402190a5
                            
                        label_1402191f0:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1879[0].q, 0x20)
                            
                            if ((temp0_1872 & 8) != 0)
                            label_140219206:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_1879, 1), 0x30)
                                zmm12 = temp0_1108
                                arg5 = zx.o(0)
                                
                                if ((rbx_33 & 1) != 0)
                                    goto label_1402190b8
                                
                                goto label_14021921f
                            
                        label_1402190a5:
                            zmm12 = temp0_1108
                            arg5 = zx.o(0)
                            
                            if ((rbx_33 & 1) != 0)
                            label_1402190b8:
                                arg5 = _mm_blend_ps(arg5, zmm0, 1)
                                
                                if ((rbx_33 & 2) != 0)
                                    goto label_140219228
                                
                                goto label_1402190c7
                            
                        label_14021921f:
                            
                            if ((rbx_33 & 2) != 0)
                            label_140219228:
                                arg5 = _mm_blend_ps(arg5, zmm0, 2)
                                
                                if ((rbx_33 & 4) != 0)
                                    goto label_1402190d0
                                
                                goto label_140219237
                            
                        label_1402190c7:
                            
                            if ((rbx_33 & 4) == 0)
                            label_140219237:
                                
                                if ((rbx_33 & 8) != 0)
                                    arg5 = _mm_blend_ps(arg5, zmm0, 8)
                            else
                            label_1402190d0:
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
                                goto label_1402195d1
                            
                            goto label_1402193c0
                        
                        arg9 = var_578_4
                        zmm2 = _mm_add_ps(zmm2, arg5)
                        bool cond:241_1
                        bool cond:242_1
                        bool cond:259_1
                        bool cond:260_1
                        
                        if (temp57_1 != 0)
                        label_1402195d1:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 1)
                            arg5 = var_518_7
                            char temp91_1 = temp0_1805 & 2
                            cond:241_1 = temp91_1 == 0
                            cond:242_1 = temp91_1 != 0
                            cond:259_1 = temp91_1 == 0
                            cond:260_1 = temp91_1 != 0
                            
                            if (temp91_1 != 0)
                                goto label_1402193d1
                            
                            goto label_1402195e9
                        
                    label_1402193c0:
                        arg5 = var_518_7
                        char temp90_1 = temp0_1805 & 2
                        cond:241_1 = temp90_1 == 0
                        cond:242_1 = temp90_1 != 0
                        cond:259_1 = temp90_1 == 0
                        cond:260_1 = temp90_1 != 0
                        
                        if (temp90_1 == 0)
                        label_1402195e9:
                            
                            if (not(cond:241_1))
                            label_1402195ef:
                                zmm14 = _mm_blend_ps(zmm14, temp0_1927, 2)
                                
                                if (cond:260_1)
                                    goto label_1402193e4
                                
                                goto label_1402195fc
                        else
                        label_1402193d1:
                            arg12 = _mm_blend_ps(arg12, zmm4, 2)
                            
                            if (cond:242_1)
                                goto label_1402195ef
                        
                        bool cond:303_1
                        bool cond:304_1
                        bool cond:319_1
                        bool cond:320_1
                        
                        if (not(cond:259_1))
                        label_1402193e4:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 2)
                            char temp113_1 = temp0_1805 & 4
                            cond:303_1 = temp113_1 == 0
                            cond:304_1 = temp113_1 != 0
                            cond:319_1 = temp113_1 == 0
                            cond:320_1 = temp113_1 != 0
                            
                            if (temp113_1 != 0)
                                goto label_140219605
                            
                            goto label_1402193f4
                        
                    label_1402195fc:
                        char temp112_1 = temp0_1805 & 4
                        cond:303_1 = temp112_1 == 0
                        cond:304_1 = temp112_1 != 0
                        cond:319_1 = temp112_1 == 0
                        cond:320_1 = temp112_1 != 0
                        
                        if (temp112_1 == 0)
                        label_1402193f4:
                            
                            if (not(cond:303_1))
                            label_1402193fa:
                                zmm14 = _mm_blend_ps(zmm14, temp0_1927, 4)
                                
                                if (cond:320_1)
                                    goto label_140219618
                                
                                goto label_140219407
                        else
                        label_140219605:
                            arg12 = _mm_blend_ps(arg12, zmm4, 4)
                            
                            if (cond:304_1)
                                goto label_1402193fa
                        
                        bool cond:343_1
                        bool cond:344_1
                        bool cond:351_1
                        bool cond:352_1
                        
                        if (not(cond:319_1))
                        label_140219618:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 4)
                            char temp127_1 = temp0_1805 & 8
                            cond:343_1 = temp127_1 == 0
                            cond:344_1 = temp127_1 != 0
                            cond:351_1 = temp127_1 == 0
                            cond:352_1 = temp127_1 != 0
                            
                            if (temp127_1 != 0)
                                goto label_140219410
                            
                            goto label_140219628
                        
                    label_140219407:
                        char temp126_1 = temp0_1805 & 8
                        cond:343_1 = temp126_1 == 0
                        cond:344_1 = temp126_1 != 0
                        cond:351_1 = temp126_1 == 0
                        cond:352_1 = temp126_1 != 0
                        
                        if (temp126_1 != 0)
                        label_140219410:
                            arg12 = _mm_blend_ps(arg12, zmm4, 8)
                            
                            if (cond:344_1)
                                goto label_14021962e
                            
                            goto label_14021941d
                        
                    label_140219628:
                        
                        if (cond:343_1)
                        label_14021941d:
                            
                            if (not(cond:351_1))
                                zmm12 = _mm_blend_ps(zmm12, zmm2, 8)
                        else
                        label_14021962e:
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
                                    goto label_14021977f
                                
                                goto label_1402196a0
                            
                            if ((temp0_1939 & 4) == 0)
                            label_1402196a0:
                                
                                if ((temp0_1939 & 8) != 0)
                                    arg12 = _mm_blend_ps(arg12, temp0_1970, 8)
                            else
                            label_14021977f:
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
                                        goto label_140219d46
                                    
                                    goto label_140219730
                                
                                zmm0 = zx.o(*var_4d8_3.q)
                                
                                if ((temp0_1976 & 2) != 0)
                                label_140219d46:
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_4d8_3, 1)), 1)
                                    arg7 = var_588_1
                                    
                                    if ((temp0_1976 & 4) == 0)
                                        goto label_140219740
                                    
                                    goto label_140219d6d
                                
                            label_140219730:
                                arg7 = var_588_1
                                
                                if ((temp0_1976 & 4) != 0)
                                label_140219d6d:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*var_528_3[0].q), 2)
                                    
                                    if ((temp0_1976 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(var_528_3, 1)), 3)
                                else
                                label_140219740:
                                    
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
                                    goto label_140219885
                                
                                goto label_1402197eb
                            
                            if ((temp0_1939 & 4) == 0)
                            label_1402197eb:
                                
                                if ((temp0_1939 & 8) != 0)
                                    zmm14 = _mm_blend_epi16(zmm14, arg5, 0xc0)
                            else
                            label_140219885:
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
                                        goto label_140219da2
                                    
                                    goto label_140219838
                                
                                zmm0 = zx.o(*zmm2.q)
                                
                                if ((temp0_1995 & 2) != 0)
                                label_140219da2:
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm4 = arg12
                                    zmm2 = var_548_6
                                    
                                    if ((temp0_1995 & 4) == 0)
                                        goto label_14021984f
                                    
                                    goto label_140219dc7
                                
                            label_140219838:
                                zmm4 = arg12
                                zmm2 = var_548_6
                                
                                if ((temp0_1995 & 4) != 0)
                                label_140219dc7:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm1[0].q), 2)
                                    
                                    if ((temp0_1995 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                else
                                label_14021984f:
                                    
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
                                    goto label_1402198e8
                                
                                goto label_1402198ca
                            
                            zmm0 = var_598_6
                            
                            if ((temp0_1939 & 2) != 0)
                            label_1402198e8:
                                zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc)
                                
                                if ((temp0_1939 & 4) != 0)
                                    goto label_1402198cf
                                
                                goto label_1402198f4
                            
                        label_1402198ca:
                            
                            if ((temp0_1939 & 4) == 0)
                            label_1402198f4:
                                
                                if ((temp0_1939 & 8) != 0)
                                    zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc0)
                            else
                            label_1402198cf:
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
                                        goto label_14021999c
                                else if (temp66_1 != 0)
                                label_14021999c:
                                    zmm14 = _mm_blend_ps(zmm14, zx.o(0), 1)
                                    
                                    if (temp66_1 != 0)
                                        goto label_14021995b
                                    
                                    goto label_1402199a5
                                
                                bool cond:257_1
                                bool cond:258_1
                                bool cond:280_1
                                bool cond:281_1
                                
                                if (temp66_1 != 0)
                                label_14021995b:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 1)
                                    char temp89_1 = temp0_2010 & 2
                                    cond:257_1 = temp89_1 == 0
                                    cond:258_1 = temp89_1 != 0
                                    cond:280_1 = temp89_1 == 0
                                    cond:281_1 = temp89_1 != 0
                                    
                                    if (temp89_1 != 0)
                                        goto label_1402199aa
                                    
                                    goto label_140219967
                                
                            label_1402199a5:
                                char temp88_1 = temp0_2010 & 2
                                cond:257_1 = temp88_1 == 0
                                cond:258_1 = temp88_1 != 0
                                cond:280_1 = temp88_1 == 0
                                cond:281_1 = temp88_1 != 0
                                
                                if (temp88_1 == 0)
                                label_140219967:
                                    
                                    if (not(cond:257_1))
                                    label_140219969:
                                        zmm14 = _mm_blend_ps(zmm14, zx.o(0), 2)
                                        
                                        if (cond:281_1)
                                            goto label_1402199b4
                                        
                                        goto label_140219972
                                else
                                label_1402199aa:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 2)
                                    
                                    if (cond:258_1)
                                        goto label_140219969
                                
                                bool cond:317_1
                                bool cond:318_1
                                bool cond:333_1
                                bool cond:334_1
                                
                                if (not(cond:280_1))
                                label_1402199b4:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 2)
                                    char temp111_1 = temp0_2010 & 4
                                    cond:317_1 = temp111_1 == 0
                                    cond:318_1 = temp111_1 != 0
                                    cond:333_1 = temp111_1 == 0
                                    cond:334_1 = temp111_1 != 0
                                    
                                    if (temp111_1 != 0)
                                        goto label_140219977
                                    
                                    goto label_1402199c0
                                
                            label_140219972:
                                char temp110_1 = temp0_2010 & 4
                                cond:317_1 = temp110_1 == 0
                                cond:318_1 = temp110_1 != 0
                                cond:333_1 = temp110_1 == 0
                                cond:334_1 = temp110_1 != 0
                                
                                if (temp110_1 == 0)
                                label_1402199c0:
                                    
                                    if (not(cond:317_1))
                                    label_1402199c2:
                                        zmm14 = _mm_blend_ps(zmm14, zx.o(0), 4)
                                        
                                        if (cond:334_1)
                                            goto label_140219981
                                        
                                        goto label_1402199cb
                                else
                                label_140219977:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 4)
                                    
                                    if (cond:318_1)
                                        goto label_1402199c2
                                
                                bool cond:349_1
                                bool cond:350_1
                                bool cond:361_1
                                bool cond:362_1
                                
                                if (not(cond:333_1))
                                label_140219981:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 4)
                                    char temp125_1 = temp0_2010 & 8
                                    cond:349_1 = temp125_1 == 0
                                    cond:350_1 = temp125_1 != 0
                                    cond:361_1 = temp125_1 == 0
                                    cond:362_1 = temp125_1 != 0
                                    
                                    if (temp125_1 != 0)
                                        goto label_1402199d0
                                    
                                    goto label_14021998d
                                
                            label_1402199cb:
                                char temp124_1 = temp0_2010 & 8
                                cond:349_1 = temp124_1 == 0
                                cond:350_1 = temp124_1 != 0
                                cond:361_1 = temp124_1 == 0
                                cond:362_1 = temp124_1 != 0
                                
                                if (temp124_1 != 0)
                                label_1402199d0:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 8)
                                    
                                    if (cond:350_1)
                                        goto label_14021998f
                                    
                                    goto label_1402199d8
                                
                            label_14021998d:
                                
                                if (cond:349_1)
                                label_1402199d8:
                                    
                                    if (not(cond:361_1))
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                                else
                                label_14021998f:
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
                                        goto label_140219a4c
                                else if (temp71_1 != 0)
                                label_140219a4c:
                                    zmm14 = _mm_blend_ps(zmm14, zx.o(0), 1)
                                    
                                    if (temp71_1 != 0)
                                        goto label_140219a0b
                                    
                                    goto label_140219a55
                                
                                bool cond:278_1
                                bool cond:279_1
                                bool cond:301_1
                                bool cond:302_1
                                
                                if (temp71_1 != 0)
                                label_140219a0b:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 1)
                                    char temp98_1 = temp0_2024 & 2
                                    cond:278_1 = temp98_1 == 0
                                    cond:279_1 = temp98_1 != 0
                                    cond:301_1 = temp98_1 == 0
                                    cond:302_1 = temp98_1 != 0
                                    
                                    if (temp98_1 != 0)
                                        goto label_140219a5a
                                    
                                    goto label_140219a17
                                
                            label_140219a55:
                                char temp97_1 = temp0_2024 & 2
                                cond:278_1 = temp97_1 == 0
                                cond:279_1 = temp97_1 != 0
                                cond:301_1 = temp97_1 == 0
                                cond:302_1 = temp97_1 != 0
                                
                                if (temp97_1 == 0)
                                label_140219a17:
                                    
                                    if (not(cond:278_1))
                                    label_140219a19:
                                        zmm14 = _mm_blend_ps(zmm14, zx.o(0), 2)
                                        
                                        if (cond:302_1)
                                            goto label_140219a64
                                        
                                        goto label_140219a22
                                else
                                label_140219a5a:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 2)
                                    
                                    if (cond:279_1)
                                        goto label_140219a19
                                
                                bool cond:331_1
                                bool cond:332_1
                                bool cond:341_1
                                bool cond:342_1
                                
                                if (not(cond:301_1))
                                label_140219a64:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 2)
                                    char temp119_1 = temp0_2024 & 4
                                    cond:331_1 = temp119_1 == 0
                                    cond:332_1 = temp119_1 != 0
                                    cond:341_1 = temp119_1 == 0
                                    cond:342_1 = temp119_1 != 0
                                    
                                    if (temp119_1 != 0)
                                        goto label_140219a27
                                    
                                    goto label_140219a70
                                
                            label_140219a22:
                                char temp118_1 = temp0_2024 & 4
                                cond:331_1 = temp118_1 == 0
                                cond:332_1 = temp118_1 != 0
                                cond:341_1 = temp118_1 == 0
                                cond:342_1 = temp118_1 != 0
                                
                                if (temp118_1 == 0)
                                label_140219a70:
                                    
                                    if (not(cond:331_1))
                                    label_140219a72:
                                        zmm14 = _mm_blend_ps(zmm14, zx.o(0), 4)
                                        
                                        if (cond:342_1)
                                            goto label_140219a31
                                        
                                        goto label_140219a7b
                                else
                                label_140219a27:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 4)
                                    
                                    if (cond:332_1)
                                        goto label_140219a72
                                
                                bool cond:359_1
                                bool cond:360_1
                                bool cond:368_1
                                bool cond:369_1
                                
                                if (not(cond:341_1))
                                label_140219a31:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 4)
                                    char temp131_1 = temp0_2024 & 8
                                    cond:359_1 = temp131_1 == 0
                                    cond:360_1 = temp131_1 != 0
                                    cond:368_1 = temp131_1 == 0
                                    cond:369_1 = temp131_1 != 0
                                    
                                    if (temp131_1 != 0)
                                        goto label_140219a80
                                    
                                    goto label_140219a3d
                                
                            label_140219a7b:
                                char temp130_1 = temp0_2024 & 8
                                cond:359_1 = temp130_1 == 0
                                cond:360_1 = temp130_1 != 0
                                cond:368_1 = temp130_1 == 0
                                cond:369_1 = temp130_1 != 0
                                
                                if (temp130_1 != 0)
                                label_140219a80:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 8)
                                    
                                    if (cond:360_1)
                                        goto label_140219a3f
                                    
                                    goto label_140219a88
                                
                            label_140219a3d:
                                
                                if (cond:359_1)
                                label_140219a88:
                                    
                                    if (not(cond:368_1))
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                                else
                                label_140219a3f:
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
                        goto label_140219c95
                    
                    goto label_140219ac6
                
                zmm12 = _mm_sub_ps(zmm12, zmm3)
                zmm14 = _mm_mul_ps(zmm14, arg9)
                zmm2 = arg5
                
                if (temp28_1 != 0)
                label_140219c95:
                    zmm2.d = arg5.d f+ zmm14.d
                    arg9 = _mm_mul_ps(arg9, zmm12)
                    zmm0 = zmm3
                    
                    if (temp28_1 != 0)
                        goto label_140219ad6
                    
                    goto label_140219ca7
                
            label_140219ac6:
                arg9 = _mm_mul_ps(arg9, zmm12)
                zmm0 = zmm3
                bool cond:132_1
                bool cond:133_1
                bool cond:151_1
                bool cond:152_1
                
                if (temp28_1 != 0)
                label_140219ad6:
                    zmm0.d = zmm3.d f+ arg9[0]
                    arg8 = _mm_add_ps(arg8, zmm4)
                    char temp45_1 = temp0_1708 & 2
                    cond:132_1 = temp45_1 == 0
                    cond:133_1 = temp45_1 != 0
                    cond:151_1 = temp45_1 == 0
                    cond:152_1 = temp45_1 != 0
                    
                    if (temp45_1 != 0)
                        goto label_140219cb4
                    
                    goto label_140219ae8
                
            label_140219ca7:
                arg8 = _mm_add_ps(arg8, zmm4)
                char temp44_1 = temp0_1708 & 2
                cond:132_1 = temp44_1 == 0
                cond:133_1 = temp44_1 != 0
                cond:151_1 = temp44_1 == 0
                cond:152_1 = temp44_1 != 0
                
                if (temp44_1 != 0)
                label_140219cb4:
                    zmm1 = _mm_blend_ps(zmm1, arg8, 2)
                    arg5 = _mm_add_ps(arg5, zmm14)
                    
                    if (cond:133_1)
                        goto label_140219af2
                    
                    goto label_140219cc5
                
            label_140219ae8:
                arg5 = _mm_add_ps(arg5, zmm14)
                
                if (not(cond:132_1))
                label_140219af2:
                    zmm2 = _mm_blend_ps(zmm2, arg5, 2)
                    zmm3 = _mm_add_ps(zmm3, arg9)
                    
                    if (cond:152_1)
                        goto label_140219ccf
                    
                    goto label_140219b02
                
            label_140219cc5:
                zmm3 = _mm_add_ps(zmm3, arg9)
                bool cond:186_1
                bool cond:187_1
                bool cond:209_1
                bool cond:210_1
                
                if (not(cond:151_1))
                label_140219ccf:
                    zmm0 = _mm_blend_ps(zmm0, zmm3, 2)
                    char temp65_1 = temp0_1708 & 4
                    cond:186_1 = temp65_1 == 0
                    cond:187_1 = temp65_1 != 0
                    cond:209_1 = temp65_1 == 0
                    cond:210_1 = temp65_1 != 0
                    
                    if (temp65_1 != 0)
                        goto label_140219b0b
                    
                    goto label_140219cde
                
            label_140219b02:
                char temp64_1 = temp0_1708 & 4
                cond:186_1 = temp64_1 == 0
                cond:187_1 = temp64_1 != 0
                cond:209_1 = temp64_1 == 0
                cond:210_1 = temp64_1 != 0
                
                if (temp64_1 == 0)
                label_140219cde:
                    
                    if (not(cond:186_1))
                    label_140219ce4:
                        zmm2 = _mm_blend_ps(zmm2, arg5, 4)
                        
                        if (cond:210_1)
                            goto label_140219b1e
                        
                        goto label_140219cf0
                else
                label_140219b0b:
                    zmm1 = _mm_blend_ps(zmm1, arg8, 4)
                    
                    if (cond:187_1)
                        goto label_140219ce4
                
                bool cond:255_1
                bool cond:256_1
                bool cond:276_1
                bool cond:277_1
                
                if (not(cond:209_1))
                label_140219b1e:
                    zmm0 = _mm_blend_ps(zmm0, zmm3, 4)
                    char temp87_1 = temp0_1708 & 8
                    cond:255_1 = temp87_1 == 0
                    cond:256_1 = temp87_1 != 0
                    cond:276_1 = temp87_1 != 0
                    cond:277_1 = temp87_1 == 0
                    
                    if (temp87_1 != 0)
                        goto label_140219cf9
                    
                    goto label_140219b2d
                
            label_140219cf0:
                char temp86_1 = temp0_1708 & 8
                cond:255_1 = temp86_1 == 0
                cond:256_1 = temp86_1 != 0
                cond:276_1 = temp86_1 != 0
                cond:277_1 = temp86_1 == 0
                
                if (temp86_1 != 0)
                label_140219cf9:
                    arg8 = _mm_blend_ps(arg8, zmm1, 7)
                    
                    if (cond:256_1)
                        goto label_140219b37
                    
                    goto label_140219d06
                
            label_140219b2d:
                arg8 = zmm1
                
                if (cond:255_1)
                label_140219d06:
                    arg5 = zmm2
                    
                    if (cond:276_1)
                        zmm0 = _mm_blend_ps(zmm0, zmm3, 8)
                else
                label_140219b37:
                    arg5 = _mm_blend_ps(arg5, zmm2, 7)
                    
                    if (not(cond:277_1))
                        zmm0 = _mm_blend_ps(zmm0, zmm3, 8)
                
                arg6 = zmm0
                rcx_93 = _mm_movemask_ps(_mm_and_ps(arg11, arg10))
                
                if (rcx_93 != 0)
                    goto label_140215d17
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
            label_140215666:
                char rcx_68 = rcx_27.b
                char temp2_1 = rcx_68 & 1
                
                if (temp2_1 != 0)
                    zmm10 = _mm_blend_ps(zmm10, arg11, 1)
                    
                    if (temp2_1 != 0)
                        goto label_1402156c2
                else if (temp2_1 != 0)
                label_1402156c2:
                    arg7 = _mm_blend_ps(arg7, arg11, 1)
                    
                    if (temp2_1 != 0)
                        goto label_140215678
                    
                    goto label_1402156cb
                
                bool cond:18_1
                bool cond:19_1
                bool cond:23_1
                bool cond:24_1
                
                if (temp2_1 != 0)
                label_140215678:
                    arg12 = _mm_blend_ps(arg12, arg11, 1)
                    char temp6_1 = rcx_68 & 2
                    cond:18_1 = temp6_1 == 0
                    cond:19_1 = temp6_1 != 0
                    cond:23_1 = temp6_1 == 0
                    cond:24_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_1402156d0
                    
                    goto label_140215684
                
            label_1402156cb:
                char temp5_1 = rcx_68 & 2
                cond:18_1 = temp5_1 == 0
                cond:19_1 = temp5_1 != 0
                cond:23_1 = temp5_1 == 0
                cond:24_1 = temp5_1 != 0
                
                if (temp5_1 == 0)
                label_140215684:
                    
                    if (not(cond:18_1))
                    label_140215686:
                        arg7 = _mm_blend_ps(arg7, arg11, 2)
                        
                        if (cond:24_1)
                            goto label_1402156db
                        
                        goto label_14021568f
                else
                label_1402156d0:
                    zmm10 = _mm_blend_ps(zmm10, arg11, 2)
                    
                    if (cond:19_1)
                        goto label_140215686
                
                bool cond:31_1
                bool cond:32_1
                bool cond:44_1
                bool cond:45_1
                
                if (not(cond:23_1))
                label_1402156db:
                    arg12 = _mm_blend_ps(arg12, arg11, 2)
                    char temp12_1 = rcx_68 & 4
                    cond:31_1 = temp12_1 == 0
                    cond:32_1 = temp12_1 != 0
                    cond:44_1 = temp12_1 == 0
                    cond:45_1 = temp12_1 != 0
                    
                    if (temp12_1 != 0)
                        goto label_140215694
                    
                    goto label_1402156e7
                
            label_14021568f:
                char temp11_1 = rcx_68 & 4
                cond:31_1 = temp11_1 == 0
                cond:32_1 = temp11_1 != 0
                cond:44_1 = temp11_1 == 0
                cond:45_1 = temp11_1 != 0
                
                if (temp11_1 == 0)
                label_1402156e7:
                    
                    if (not(cond:31_1))
                    label_1402156e9:
                        arg7 = _mm_blend_ps(arg7, arg11, 4)
                        
                        if (cond:45_1)
                            goto label_14021569f
                        
                        goto label_1402156f2
                else
                label_140215694:
                    zmm10 = _mm_blend_ps(zmm10, arg11, 4)
                    
                    if (cond:32_1)
                        goto label_1402156e9
                
                bool cond:57_1
                bool cond:68_1
                bool cond:69_1
                bool cond:58_1
                
                if (cond:44_1)
                label_1402156f2:
                    char temp19_1 = rcx_68 & 8
                    cond:57_1 = temp19_1 == 0
                    cond:58_1 = temp19_1 != 0
                    cond:68_1 = temp19_1 == 0
                    cond:69_1 = temp19_1 != 0
                    
                    if (temp19_1 != 0)
                    label_1402156f7:
                        zmm10 = _mm_blend_ps(zmm10, arg11, 8)
                        
                        if (cond:58_1)
                            goto label_1402156ad
                        
                        goto label_140215700
                else
                label_14021569f:
                    arg12 = _mm_blend_ps(arg12, arg11, 4)
                    char temp20_1 = rcx_68 & 8
                    cond:57_1 = temp20_1 == 0
                    cond:58_1 = temp20_1 != 0
                    cond:68_1 = temp20_1 == 0
                    cond:69_1 = temp20_1 != 0
                    
                    if (temp20_1 != 0)
                        goto label_1402156f7
                
                if (cond:57_1)
                label_140215700:
                    var_598 = zmm10
                    
                    if (not(cond:68_1))
                        arg12 = _mm_blend_ps(arg12, arg11, 8)
                else
                label_1402156ad:
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
                                        goto label_140213124
                                    
                                    goto label_140212ebc
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1[0].q), 0)
                                arg11 = temp0_442
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbp_19 & 2) != 0)
                                label_140213124:
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbp_19 & 4) == 0)
                                        goto label_140212ecb
                                    
                                    goto label_140213141
                                
                            label_140212ebc:
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbp_19 & 4) != 0)
                                label_140213141:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbp_19 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140212ecb:
                                    
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
                                                    goto label_140213373
                                                
                                                goto label_1402133c5
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm2.q)
                                            
                                            if ((temp0_583 & 2) != 0)
                                            label_140213373:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                                
                                                if ((temp0_583 & 4) == 0)
                                                    goto label_1402133d0
                                                
                                                goto label_14021338c
                                            
                                        label_1402133c5:
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_583 & 4) != 0)
                                            label_14021338c:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_583 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_1402133d0:
                                                
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
                                        goto label_1402137d6
                                    
                                    goto label_14021372a
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbp_19 & 4) == 0)
                                label_14021372a:
                                    
                                    if ((rbp_19 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402137d6:
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
                                        goto label_1402130c2
                                    
                                    goto label_140212c6a
                                
                                arg6 = _mm_insert_epi32(arg6, zx.d(*zmm1[0].q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbp_18 & 2) != 0)
                                label_1402130c2:
                                    arg6 =
                                        _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbp_18 & 4) == 0)
                                        goto label_140212c79
                                    
                                    goto label_1402130df
                                
                            label_140212c6a:
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbp_18 & 4) != 0)
                                label_1402130df:
                                    arg6 = _mm_insert_epi32(arg6, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbp_18 & 8) != 0)
                                        arg6 = _mm_insert_epi32(arg6, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140212c79:
                                    
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
                                                    goto label_1402131f3
                                                
                                                goto label_14021324d
                                            
                                            zmm4 = _mm_insert_epi32(zmm4, zx.d(*zmm1[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm2.q)
                                            
                                            if ((temp0_556 & 2) != 0)
                                            label_1402131f3:
                                                zmm4 = _mm_insert_epi32(zmm4, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                                
                                                if ((temp0_556 & 4) == 0)
                                                    goto label_140213258
                                                
                                                goto label_14021320c
                                            
                                        label_14021324d:
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_556 & 4) != 0)
                                            label_14021320c:
                                                zmm4 = _mm_insert_epi32(zmm4, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_556 & 8) != 0)
                                                    zmm4 = _mm_insert_epi32(zmm4, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_140213258:
                                                
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
                                        goto label_1402135c1
                                    
                                    goto label_140213510
                                
                                zmm10 =
                                    _mm_insert_epi32(zmm10, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbp_18 & 4) == 0)
                                label_140213510:
                                    
                                    if ((rbp_18 & 8) != 0)
                                        zmm10 = _mm_insert_epi32(zmm10, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402135c1:
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
                            goto label_140213dc6
                    else if (temp14_1 != 0)
                    label_140213dc6:
                        arg6 = _mm_insert_ps(arg6, arg7, 0x10)
                        
                        if (temp14_1 != 0)
                            goto label_140213bc7
                        
                        goto label_140213dd2
                    
                    bool cond:76_1
                    bool cond:77_1
                    bool cond:93_1
                    bool cond:94_1
                    
                    if (temp14_1 != 0)
                    label_140213bc7:
                        arg8 = _mm_insert_ps(arg8, zmm3, 0x10)
                        char temp27_1 = temp0_672 & 4
                        cond:76_1 = temp27_1 == 0
                        cond:77_1 = temp27_1 != 0
                        cond:93_1 = temp27_1 == 0
                        cond:94_1 = temp27_1 != 0
                        
                        if (temp27_1 != 0)
                            goto label_140213de7
                        
                        goto label_140213bd7
                    
                label_140213dd2:
                    char temp26_1 = temp0_672 & 4
                    cond:76_1 = temp26_1 == 0
                    cond:77_1 = temp26_1 != 0
                    cond:93_1 = temp26_1 == 0
                    cond:94_1 = temp26_1 != 0
                    
                    if (temp26_1 != 0)
                    label_140213de7:
                        zmm10 = __insertps_xmmps_memd_immb(arg12, var_428_1, 0x20)
                        
                        if (cond:77_1)
                            goto label_140213bea
                        
                        goto label_140213dfa
                    
                label_140213bd7:
                    zmm10 = arg12
                    
                    if (not(cond:76_1))
                    label_140213bea:
                        arg6 = _mm_insert_ps(arg6, zmm2, 0x20)
                        arg12 = arg8
                        zmm14 = var_548_2
                        
                        if (cond:94_1)
                            goto label_140213e09
                        
                        goto label_140213bff
                    
                label_140213dfa:
                    arg12 = arg8
                    zmm14 = var_548_2
                    bool cond:130_1
                    bool cond:131_1
                    bool cond:147_1
                    bool cond:148_1
                    
                    if (not(cond:93_1))
                    label_140213e09:
                        arg12 = _mm_insert_ps(arg12, zmm4, 0x20)
                        arg8 = var_4c8_1
                        arg7 = arg6
                        char temp43_1 = temp0_672 & 8
                        cond:130_1 = temp43_1 == 0
                        cond:131_1 = temp43_1 != 0
                        cond:147_1 = temp43_1 == 0
                        cond:148_1 = temp43_1 != 0
                        
                        if (temp43_1 != 0)
                            goto label_140213c14
                        
                        goto label_140213e25
                    
                label_140213bff:
                    arg8 = var_4c8_1
                    arg7 = arg6
                    char temp42_1 = temp0_672 & 8
                    cond:130_1 = temp42_1 == 0
                    cond:131_1 = temp42_1 != 0
                    cond:147_1 = temp42_1 == 0
                    cond:148_1 = temp42_1 != 0
                    
                    if (temp42_1 != 0)
                    label_140213c14:
                        zmm10 = __insertps_xmmps_memd_immb(zmm10, var_598_1, 0x30)
                        arg11 = zx.o(0)
                        
                        if (cond:131_1)
                            goto label_140213e2f
                        
                        goto label_140213c27
                    
                label_140213e25:
                    arg11 = zx.o(0)
                    
                    if (cond:130_1)
                    label_140213c27:
                        
                        if (not(cond:147_1))
                            arg12 = _mm_insert_ps(arg12, zmm12, 0x30)
                    else
                    label_140213e2f:
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
                            goto label_140213e5a
                        
                        goto label_140213d9e
                    
                    if ((temp0_697 & 2) != 0)
                    label_140213e5a:
                        zmm12 = _mm_blend_epi16(zmm12, zmm4, 0xc)
                        
                        if ((temp0_697 & 4) != 0)
                            goto label_140213da8
                        
                        goto label_140213e6b
                    
                label_140213d9e:
                    
                    if ((temp0_697 & 4) == 0)
                    label_140213e6b:
                        
                        if ((temp0_697 & 8) != 0)
                            zmm12 = _mm_blend_epi16(zmm12, zmm4, 0xc0)
                    else
                    label_140213da8:
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
                            label_140214325:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg9, 1), 0x30)
                                arg5 = _mm_cmpeq_epi32(arg5, arg11) & not.o(zmm0)
                                
                                if ((temp0_697 & 1) == 0)
                                    goto label_140213f80
                                
                                goto label_1402140ac
                        else if ((temp0_730 & 8) != 0)
                            goto label_140214325
                        
                        arg5 = _mm_cmpeq_epi32(arg5, arg11) & not.o(zmm0)
                        
                        if ((temp0_697 & 1) == 0)
                            goto label_140213f80
                        
                        goto label_1402140ac
                    
                    zmm4 = zmm10
                    zmm3 = arg9
                    arg7 = zmm14
                    zmm0 = var_378
                    zmm1 = var_538_1
                    zmm14 = var_548_2
                    zmm10 = zmm12
                    arg5 = _mm_cmpeq_epi32(arg5, arg11) & not.o(zmm0)
                    
                    if ((temp0_697 & 1) == 0)
                    label_140213f80:
                        zmm12 = zmm1
                        
                        if ((temp0_697 & 2) == 0)
                            goto label_1402140c0
                        
                        goto label_140213f8e
                    
                label_1402140ac:
                    arg7 = _mm_blend_ps(arg7, arg5, 1)
                    zmm12 = zmm1
                    
                    if ((temp0_697 & 2) == 0)
                    label_1402140c0:
                        
                        if ((temp0_697 & 4) == 0)
                            goto label_140213fa2
                        
                        goto label_1402140ca
                    
                label_140213f8e:
                    arg7 = _mm_blend_ps(arg7, arg5, 2)
                    
                    if ((temp0_697 & 4) != 0)
                    label_1402140ca:
                        arg7 = _mm_blend_ps(arg7, arg5, 4)
                        var_378 = zmm0
                        
                        if ((temp0_697 & 8) != 0)
                            arg7 = _mm_blend_ps(arg7, arg5, 8)
                    else
                    label_140213fa2:
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
                                goto label_140214126
                            
                            goto label_140213ff8
                        
                        var_408 = _mm_blend_epi16(var_408, zx.o(*zmm4[0].q), 3)
                        
                        if ((temp0_743 & 2) != 0)
                        label_140214126:
                            var_408 = __insertps_xmmps_memd_immb(var_408, 
                                *_mm_extract_epi64(zmm4, 1), 0x10)
                            arg9 = var_528_1
                            arg10 = var_508_2
                            
                            if ((temp0_743 & 4) == 0)
                                goto label_140214013
                            
                            goto label_14021415c
                        
                    label_140213ff8:
                        arg9 = var_528_1
                        arg10 = var_508_2
                        
                        if ((temp0_743 & 4) != 0)
                        label_14021415c:
                            var_408 = __insertps_xmmps_memd_immb(var_408, *zmm3[0].q, 0x20)
                            
                            if ((temp0_743 & 8) != 0)
                                var_408 = __insertps_xmmps_memd_immb(var_408, 
                                    *_mm_extract_epi64(zmm3, 1), 0x30)
                        else
                        label_140214013:
                            
                            if ((temp0_743 & 8) != 0)
                                var_408 = __insertps_xmmps_memd_immb(var_408, 
                                    *_mm_extract_epi64(zmm3, 1), 0x30)
                    
                    zmm1 = var_578_2
                    zmm3 = var_458_2
                    zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(var_408)
                    
                    if ((temp0_697 & 1) != 0)
                        arg12 = _mm_blend_epi16(arg12, zmm0, 3)
                        
                        if ((temp0_697 & 2) != 0)
                            goto label_1402141d6
                        
                        goto label_1402141b6
                    
                    if ((temp0_697 & 2) != 0)
                    label_1402141d6:
                        arg12 = _mm_blend_epi16(arg12, zmm0, 0xc)
                        
                        if ((temp0_697 & 4) != 0)
                            goto label_1402141bc
                        
                        goto label_1402141e3
                    
                label_1402141b6:
                    
                    if ((temp0_697 & 4) == 0)
                    label_1402141e3:
                        
                        if ((temp0_697 & 8) != 0)
                            arg12 = _mm_blend_epi16(arg12, zmm0, 0xc0)
                    else
                    label_1402141bc:
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
                                goto label_1402143e0
                            
                            goto label_14021437c
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0].q, 0x20)
                        char rdi_20
                        
                        if ((rbp_23 & 8) != 0)
                        label_1402143e0:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                            rdi_20 = _mm_movemask_ps(arg5)
                            zmm1 = zx.o(0)
                            
                            if ((rdi_20 & 1) != 0)
                                goto label_14021438b
                            
                            goto label_1402143f3
                        
                    label_14021437c:
                        rdi_20 = _mm_movemask_ps(arg5)
                        zmm1 = zx.o(0)
                        
                        if ((rdi_20 & 1) == 0)
                        label_1402143f3:
                            
                            if ((rdi_20 & 2) != 0)
                            label_1402143f9:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                                
                                if ((rdi_20 & 4) != 0)
                                    goto label_14021439d
                                
                                goto label_140214409
                        else
                        label_14021438b:
                            zmm1 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rdi_20 & 2) != 0)
                                goto label_1402143f9
                        
                        if ((rdi_20 & 4) == 0)
                        label_140214409:
                            var_228 = zmm0
                            
                            if ((rdi_20 & 8) == 0)
                                var_5c8_4 = zmm1
                                zmm14 = arg12
                            else
                                zmm14 = arg12
                                var_5c8_4 = _mm_blend_ps(zmm1, zmm0, 8)
                        else
                        label_14021439d:
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
                                goto label_14021450c
                            
                            goto label_1402144bc
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_767[0].q, 0x20)
                        
                        if ((rbp_23 & 8) != 0)
                        label_14021450c:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_767, 1), 0x30)
                            arg11 = zx.o(0)
                            
                            if ((rdi_20 & 1) != 0)
                                goto label_1402144ca
                            
                            goto label_14021451c
                        
                    label_1402144bc:
                        arg11 = zx.o(0)
                        
                        if ((rdi_20 & 1) == 0)
                        label_14021451c:
                            
                            if ((rdi_20 & 2) != 0)
                            label_140214522:
                                arg11 = _mm_blend_ps(arg11, zmm0, 2)
                                
                                if ((rdi_20 & 4) != 0)
                                    goto label_1402144dd
                                
                                goto label_140214533
                        else
                        label_1402144ca:
                            arg11 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rdi_20 & 2) != 0)
                                goto label_140214522
                        
                        if ((rdi_20 & 4) == 0)
                        label_140214533:
                            var_238 = zmm0
                            
                            if ((rdi_20 & 8) != 0)
                                arg11 = _mm_blend_ps(arg11, zmm0, 8)
                        else
                        label_1402144dd:
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
                                goto label_14021466b
                            
                            goto label_140214618
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg12[0].q, 0x20)
                        char rdi_21
                        
                        if ((temp0_794 & 8) != 0)
                        label_14021466b:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg12, 1), 0x30)
                            rdi_21 = _mm_movemask_ps(arg5)
                            arg9 = zx.o(0)
                            
                            if ((rdi_21 & 1) != 0)
                                goto label_140214629
                            
                            goto label_14021467e
                        
                    label_140214618:
                        rdi_21 = _mm_movemask_ps(arg5)
                        arg9 = zx.o(0)
                        
                        if ((rdi_21 & 1) == 0)
                        label_14021467e:
                            
                            if ((rdi_21 & 2) != 0)
                            label_140214684:
                                arg9 = _mm_blend_ps(arg9, zmm0, 2)
                                
                                if ((rdi_21 & 4) != 0)
                                    goto label_14021463c
                                
                                goto label_140214695
                        else
                        label_140214629:
                            arg9 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rdi_21 & 2) != 0)
                                goto label_140214684
                        
                        if ((rdi_21 & 4) == 0)
                        label_140214695:
                            var_248 = zmm0
                            
                            if ((rdi_21 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm0, 8)
                        else
                        label_14021463c:
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
                                goto label_140214795
                            
                            goto label_14021473c
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg6[0].q, 0x20)
                        
                        if ((temp0_794 & 8) != 0)
                        label_140214795:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg6, 1), 0x30)
                            zmm2 = temp0_401
                            arg8 = zx.o(0)
                            
                            if ((rdi_21 & 1) != 0)
                                goto label_140214753
                            
                            goto label_1402147ae
                        
                    label_14021473c:
                        zmm2 = temp0_401
                        arg8 = zx.o(0)
                        
                        if ((rdi_21 & 1) == 0)
                        label_1402147ae:
                            
                            if ((rdi_21 & 2) != 0)
                            label_1402147b4:
                                arg8 = _mm_blend_ps(arg8, zmm0, 2)
                                
                                if ((rdi_21 & 4) != 0)
                                    goto label_140214766
                                
                                goto label_1402147c5
                        else
                        label_140214753:
                            arg8 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rdi_21 & 2) != 0)
                                goto label_1402147b4
                        
                        if ((rdi_21 & 4) == 0)
                        label_1402147c5:
                            var_258 = zmm0
                            
                            if ((rdi_21 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm0, 8)
                        else
                        label_140214766:
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
                                goto label_140214938
                            
                            goto label_1402148fc
                        
                        if ((temp0_838 & 2) == 0)
                        label_1402148fc:
                            
                            if ((temp0_838 & 4) != 0)
                            label_140214901:
                                zmm4 = _mm_blend_ps(zmm4, zmm0, 4)
                                
                                if ((temp0_838 & 8) != 0)
                                    goto label_140214948
                                
                                goto label_140214910
                        else
                        label_140214938:
                            zmm4 = _mm_blend_ps(zmm4, zmm0, 2)
                            
                            if ((temp0_838 & 4) != 0)
                                goto label_140214901
                        
                        if ((temp0_838 & 8) != 0)
                        label_140214948:
                            zmm4 = _mm_blend_ps(zmm4, zmm0, 8)
                            var_268 = zmm0
                            
                            if ((temp0_826 & 1) == 0)
                                goto label_14021491a
                            
                            goto label_140214973
                        
                    label_140214910:
                        var_268 = zmm0
                        uint128_t var_278
                        
                        if ((temp0_826 & 1) != 0)
                        label_140214973:
                            zmm0 = _mm_blend_ps(var_278, *arg5.q, 1)
                            zmm1 = var_4d8_1
                            
                            if ((temp0_826 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg5, 1), 0x10)
                        else
                        label_14021491a:
                            zmm0 = var_278
                            zmm1 = var_4d8_1
                            
                            if ((temp0_826 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg5, 1), 0x10)
                        
                        if ((temp0_826 & 4) == 0)
                            if ((temp0_826 & 8) != 0)
                                goto label_140214a00
                            
                            goto label_14021499e
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg6[0].q, 0x20)
                        
                        if ((temp0_826 & 8) != 0)
                        label_140214a00:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg6, 1), 0x30)
                            arg6 = zx.o(0)
                            
                            if ((temp0_838 & 1) != 0)
                                goto label_1402149a9
                            
                            goto label_140214a0e
                        
                    label_14021499e:
                        arg6 = zx.o(0)
                        
                        if ((temp0_838 & 1) == 0)
                        label_140214a0e:
                            
                            if ((temp0_838 & 2) != 0)
                            label_140214a13:
                                arg6 = _mm_blend_ps(arg6, zmm0, 2)
                                
                                if ((temp0_838 & 4) != 0)
                                    goto label_1402149b9
                                
                                goto label_140214a21
                        else
                        label_1402149a9:
                            arg6 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((temp0_838 & 2) != 0)
                                goto label_140214a13
                        
                        if ((temp0_838 & 4) == 0)
                        label_140214a21:
                            var_278 = zmm0
                            
                            if ((temp0_838 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                        else
                        label_1402149b9:
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
                            goto label_140214d92
                        
                        goto label_140214b81
                    
                    arg8 = var_548_2
                    zmm4 = _mm_add_ps(zmm4, arg6)
                    bool cond:170_1
                    bool cond:171_1
                    bool cond:184_1
                    bool cond:185_1
                    
                    if (temp36_1 != 0)
                    label_140214d92:
                        zmm14 = _mm_blend_ps(zmm14, zmm4, 1)
                        char temp56_1 = temp0_405 & 2
                        cond:170_1 = temp56_1 == 0
                        cond:171_1 = temp56_1 != 0
                        cond:184_1 = temp56_1 == 0
                        cond:185_1 = temp56_1 != 0
                        
                        if (temp56_1 != 0)
                            goto label_140214b8a
                        
                        goto label_140214da2
                    
                label_140214b81:
                    char temp55_1 = temp0_405 & 2
                    cond:170_1 = temp55_1 == 0
                    cond:171_1 = temp55_1 != 0
                    cond:184_1 = temp55_1 == 0
                    cond:185_1 = temp55_1 != 0
                    
                    if (temp55_1 == 0)
                    label_140214da2:
                        
                        if (not(cond:170_1))
                        label_140214da8:
                            arg7 = _mm_blend_ps(arg7, temp0_881, 2)
                            
                            if (cond:185_1)
                                goto label_140214b9d
                            
                            goto label_140214db5
                    else
                    label_140214b8a:
                        zmm10 = _mm_blend_ps(zmm10, arg5, 2)
                        
                        if (cond:171_1)
                            goto label_140214da8
                    
                    bool cond:235_1
                    bool cond:236_1
                    bool cond:253_1
                    bool cond:254_1
                    
                    if (not(cond:184_1))
                    label_140214b9d:
                        zmm14 = _mm_blend_ps(zmm14, zmm4, 2)
                        char temp81_1 = temp0_405 & 4
                        cond:235_1 = temp81_1 == 0
                        cond:236_1 = temp81_1 != 0
                        cond:253_1 = temp81_1 == 0
                        cond:254_1 = temp81_1 != 0
                        
                        if (temp81_1 != 0)
                            goto label_140214dbe
                        
                        goto label_140214bad
                    
                label_140214db5:
                    char temp80_1 = temp0_405 & 4
                    cond:235_1 = temp80_1 == 0
                    cond:236_1 = temp80_1 != 0
                    cond:253_1 = temp80_1 == 0
                    cond:254_1 = temp80_1 != 0
                    
                    if (temp80_1 == 0)
                    label_140214bad:
                        
                        if (not(cond:235_1))
                        label_140214bb3:
                            arg7 = _mm_blend_ps(arg7, temp0_881, 4)
                            
                            if (cond:254_1)
                                goto label_140214dd8
                            
                            goto label_140214bc0
                    else
                    label_140214dbe:
                        zmm10 = _mm_blend_ps(zmm10, arg5, 4)
                        
                        if (cond:236_1)
                            goto label_140214bb3
                    
                    bool cond:297_1
                    bool cond:298_1
                    bool cond:315_1
                    bool cond:316_1
                    
                    if (not(cond:253_1))
                    label_140214dd8:
                        zmm2 = _mm_blend_ps(zmm14, zmm4, 4)
                        char temp107_1 = temp0_405 & 8
                        cond:297_1 = temp107_1 == 0
                        cond:298_1 = temp107_1 != 0
                        cond:315_1 = temp107_1 == 0
                        cond:316_1 = temp107_1 != 0
                        
                        if (temp107_1 != 0)
                            goto label_140214bcd
                        
                        goto label_140214de5
                    
                label_140214bc0:
                    zmm2 = zmm14
                    char temp106_1 = temp0_405 & 8
                    cond:297_1 = temp106_1 == 0
                    cond:298_1 = temp106_1 != 0
                    cond:315_1 = temp106_1 == 0
                    cond:316_1 = temp106_1 != 0
                    
                    if (temp106_1 != 0)
                    label_140214bcd:
                        zmm10 = _mm_blend_ps(zmm10, arg5, 8)
                        arg12 = var_4c8_1
                        
                        if (cond:298_1)
                            goto label_140214df4
                        
                        goto label_140214be3
                    
                label_140214de5:
                    arg12 = var_4c8_1
                    
                    if (cond:297_1)
                    label_140214be3:
                        
                        if (not(cond:315_1))
                            zmm2 = _mm_blend_ps(zmm2, zmm4, 8)
                    else
                    label_140214df4:
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
                                goto label_140214e9f
                            
                            goto label_140214e7f
                        
                        arg11 = zx.o(0)
                        
                        if ((temp0_891 & 2) != 0)
                        label_140214e9f:
                            zmm12 = _mm_blend_epi16(zmm12, temp0_923, 0xc)
                            
                            if ((temp0_891 & 4) != 0)
                                goto label_140214e85
                            
                            goto label_140214eac
                        
                    label_140214e7f:
                        
                        if ((temp0_891 & 4) == 0)
                        label_140214eac:
                            
                            if ((temp0_891 & 8) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, temp0_923, 0xc0)
                        else
                        label_140214e85:
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
                                goto label_140215077
                            
                            goto label_140215012
                        
                        if ((temp0_891 & 4) == 0)
                        label_140215012:
                            
                            if ((temp0_891 & 8) != 0)
                                zmm14 = _mm_blend_ps(zmm14, zmm4, 8)
                        else
                        label_140215077:
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
                                goto label_1402150c8
                            
                            goto label_1402151c6
                        
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
                        label_1402151c6:
                            arg12 = _mm_blend_epi16(zmm3, zmm0, 3)
                            zmm1 = var_578_2
                            zmm3 = var_458_2
                            
                            if ((temp0_891 & 2) != 0)
                                arg12 = _mm_blend_epi16(arg12, zmm0, 0xc)
                        else
                        label_1402150c8:
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
                                label_1402152c8:
                                    arg7 = _mm_blend_ps(arg7, arg11, 1)
                                    
                                    if (temp35_1 != 0)
                                        goto label_14021526b
                                    
                                    goto label_1402152d1
                            else
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 3)
                                arg9 = var_528_1
                                zmm12 = zmm4
                                zmm1 = var_3f8_1
                                
                                if (temp35_1 != 0)
                                    goto label_1402152c8
                            
                            bool cond:168_1
                            bool cond:169_1
                            bool cond:182_1
                            bool cond:183_1
                            
                            if (temp35_1 != 0)
                            label_14021526b:
                                arg12 = _mm_blend_epi16(arg12, arg11, 3)
                                char temp54_1 = temp0_969 & 2
                                cond:168_1 = temp54_1 == 0
                                cond:169_1 = temp54_1 != 0
                                cond:182_1 = temp54_1 == 0
                                cond:183_1 = temp54_1 != 0
                                
                                if (temp54_1 != 0)
                                    goto label_1402152d6
                                
                                goto label_140215277
                            
                        label_1402152d1:
                            char temp53_1 = temp0_969 & 2
                            cond:168_1 = temp53_1 == 0
                            cond:169_1 = temp53_1 != 0
                            cond:182_1 = temp53_1 == 0
                            cond:183_1 = temp53_1 != 0
                            
                            if (temp53_1 == 0)
                            label_140215277:
                                
                                if (not(cond:168_1))
                                label_140215279:
                                    arg7 = _mm_blend_ps(arg7, arg11, 2)
                                    
                                    if (cond:183_1)
                                        goto label_1402152e1
                                    
                                    goto label_140215282
                            else
                            label_1402152d6:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0xc)
                                
                                if (cond:169_1)
                                    goto label_140215279
                            
                            bool cond:233_1
                            bool cond:234_1
                            bool cond:251_1
                            bool cond:252_1
                            
                            if (not(cond:182_1))
                            label_1402152e1:
                                arg12 = _mm_blend_epi16(arg12, arg11, 0xc)
                                char temp79_1 = temp0_969 & 4
                                cond:233_1 = temp79_1 == 0
                                cond:234_1 = temp79_1 != 0
                                cond:251_1 = temp79_1 == 0
                                cond:252_1 = temp79_1 != 0
                                
                                if (temp79_1 != 0)
                                    goto label_140215287
                                
                                goto label_1402152ed
                            
                        label_140215282:
                            char temp78_1 = temp0_969 & 4
                            cond:233_1 = temp78_1 == 0
                            cond:234_1 = temp78_1 != 0
                            cond:251_1 = temp78_1 == 0
                            cond:252_1 = temp78_1 != 0
                            
                            if (temp78_1 == 0)
                            label_1402152ed:
                                
                                if (not(cond:233_1))
                                label_1402152ef:
                                    arg7 = _mm_blend_ps(arg7, arg11, 4)
                                    
                                    if (cond:252_1)
                                        goto label_140215292
                                    
                                    goto label_1402152f8
                            else
                            label_140215287:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0x30)
                                
                                if (cond:234_1)
                                    goto label_1402152ef
                            
                            bool cond:295_1
                            bool cond:296_1
                            bool cond:313_1
                            bool cond:314_1
                            
                            if (not(cond:251_1))
                            label_140215292:
                                arg12 = _mm_blend_epi16(arg12, arg11, 0x30)
                                char temp105_1 = temp0_969 & 8
                                cond:295_1 = temp105_1 == 0
                                cond:296_1 = temp105_1 != 0
                                cond:313_1 = temp105_1 == 0
                                cond:314_1 = temp105_1 == 0
                                
                                if (temp105_1 != 0)
                                    goto label_1402152fd
                                
                                goto label_14021529e
                            
                        label_1402152f8:
                            char temp104_1 = temp0_969 & 8
                            cond:295_1 = temp104_1 == 0
                            cond:296_1 = temp104_1 != 0
                            cond:313_1 = temp104_1 == 0
                            cond:314_1 = temp104_1 == 0
                            
                            if (temp104_1 != 0)
                            label_1402152fd:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0xc0)
                                
                                if (cond:296_1)
                                    goto label_1402152a0
                                
                                goto label_140215306
                            
                        label_14021529e:
                            
                            if (cond:295_1)
                            label_140215306:
                                
                                if (not(cond:313_1))
                                    arg12 = _mm_blend_epi16(arg12, arg11, 0xc0)
                            else
                            label_1402152a0:
                                arg7 = _mm_blend_ps(arg7, arg11, 8)
                                
                                if (not(cond:314_1))
                                    arg12 = _mm_blend_epi16(arg12, arg11, 0xc0)
                        
                        char temp0_56 = _mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm0), 0x1f))
                        
                        if (temp0_56 != 0)
                            char temp48_1 = temp0_56 & 1
                            
                            if (temp48_1 != 0)
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 3)
                                
                                if (temp48_1 != 0)
                                    goto label_140210ed5
                            else if (temp48_1 != 0)
                            label_140210ed5:
                                arg7 = _mm_blend_ps(arg7, arg11, 1)
                                
                                if (temp48_1 != 0)
                                    goto label_140210e8f
                                
                                goto label_140210ede
                            
                            bool cond:180_1
                            bool cond:181_1
                            bool cond:207_1
                            bool cond:208_1
                            
                            if (temp48_1 != 0)
                            label_140210e8f:
                                arg12 = _mm_blend_epi16(arg12, arg11, 3)
                                char temp70_1 = temp0_56 & 2
                                cond:180_1 = temp70_1 == 0
                                cond:181_1 = temp70_1 != 0
                                cond:207_1 = temp70_1 == 0
                                cond:208_1 = temp70_1 != 0
                                
                                if (temp70_1 != 0)
                                    goto label_140210ee3
                                
                                goto label_140210e9b
                            
                        label_140210ede:
                            char temp69_1 = temp0_56 & 2
                            cond:180_1 = temp69_1 == 0
                            cond:181_1 = temp69_1 != 0
                            cond:207_1 = temp69_1 == 0
                            cond:208_1 = temp69_1 != 0
                            
                            if (temp69_1 == 0)
                            label_140210e9b:
                                
                                if (not(cond:180_1))
                                label_140210e9d:
                                    arg7 = _mm_blend_ps(arg7, arg11, 2)
                                    
                                    if (cond:208_1)
                                        goto label_140210eee
                                    
                                    goto label_140210ea6
                            else
                            label_140210ee3:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0xc)
                                
                                if (cond:181_1)
                                    goto label_140210e9d
                            
                            bool cond:249_1
                            bool cond:250_1
                            bool cond:274_1
                            bool cond:275_1
                            
                            if (not(cond:207_1))
                            label_140210eee:
                                arg12 = _mm_blend_epi16(arg12, arg11, 0xc)
                                char temp96_1 = temp0_56 & 4
                                cond:249_1 = temp96_1 == 0
                                cond:250_1 = temp96_1 != 0
                                cond:274_1 = temp96_1 == 0
                                cond:275_1 = temp96_1 != 0
                                
                                if (temp96_1 != 0)
                                    goto label_140210eab
                                
                                goto label_140210efa
                            
                        label_140210ea6:
                            char temp95_1 = temp0_56 & 4
                            cond:249_1 = temp95_1 == 0
                            cond:250_1 = temp95_1 != 0
                            cond:274_1 = temp95_1 == 0
                            cond:275_1 = temp95_1 != 0
                            
                            if (temp95_1 == 0)
                            label_140210efa:
                                
                                if (not(cond:249_1))
                                label_140210efc:
                                    arg7 = _mm_blend_ps(arg7, arg11, 4)
                                    
                                    if (cond:275_1)
                                        goto label_140210eb6
                                    
                                    goto label_140210f05
                            else
                            label_140210eab:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0x30)
                                
                                if (cond:250_1)
                                    goto label_140210efc
                            
                            bool cond:311_1
                            bool cond:312_1
                            bool cond:327_1
                            bool cond:328_1
                            
                            if (not(cond:274_1))
                            label_140210eb6:
                                arg12 = _mm_blend_epi16(arg12, arg11, 0x30)
                                char temp117_1 = temp0_56 & 8
                                cond:311_1 = temp117_1 == 0
                                cond:312_1 = temp117_1 != 0
                                cond:327_1 = temp117_1 == 0
                                cond:328_1 = temp117_1 == 0
                                
                                if (temp117_1 != 0)
                                    goto label_140210f0a
                                
                                goto label_140210ec2
                            
                        label_140210f05:
                            char temp116_1 = temp0_56 & 8
                            cond:311_1 = temp116_1 == 0
                            cond:312_1 = temp116_1 != 0
                            cond:327_1 = temp116_1 == 0
                            cond:328_1 = temp116_1 == 0
                            
                            if (temp116_1 != 0)
                            label_140210f0a:
                                zmm10 = _mm_blend_epi16(zmm10, arg11, 0xc0)
                                
                                if (cond:312_1)
                                    goto label_140210ec4
                                
                                goto label_140210f13
                            
                        label_140210ec2:
                            
                            if (cond:311_1)
                            label_140210f13:
                                
                                if (not(cond:327_1))
                                    arg12 = _mm_blend_epi16(arg12, arg11, 0xc0)
                            else
                            label_140210ec4:
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
                    goto label_140215666
                
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
                                goto label_140210dd2
                            
                            goto label_14021557f
                        
                        arg9 = _mm_blend_ps(arg9, *rsi_16, 1)
                        char temp24_1 = temp0_996 & 1
                        cond:70_1 = temp24_1 != 0
                        cond:71_1 = temp24_1 == 0
                        
                        if (temp24_1 == 0)
                        label_140210dd2:
                            
                            if (cond:71_1)
                                goto label_14021558a
                            
                            goto label_140210de2
                        
                    label_14021557f:
                        var_5b8 = _mm_blend_ps(var_5b8, zmm4, 1)
                        bool cond:91_1
                        bool cond:92_1
                        bool cond:109_1
                        bool cond:110_1
                        
                        if (not(cond:70_1))
                        label_14021558a:
                            char temp34_1 = temp0_996 & 2
                            cond:91_1 = temp34_1 != 0
                            cond:92_1 = temp34_1 == 0
                            cond:109_1 = temp34_1 != 0
                            cond:110_1 = temp34_1 == 0
                            
                            if (temp34_1 == 0)
                                goto label_140210def
                            
                            goto label_14021559a
                        
                    label_140210de2:
                        var_5d8 = _mm_blend_ps(var_5d8, zmm2, 1)
                        char temp33_1 = temp0_996 & 2
                        cond:91_1 = temp33_1 != 0
                        cond:92_1 = temp33_1 == 0
                        cond:109_1 = temp33_1 != 0
                        cond:110_1 = temp33_1 == 0
                        
                        if (temp33_1 == 0)
                        label_140210def:
                            zmm4 = arg9
                            
                            if (cond:92_1)
                                goto label_1402155a4
                            
                            goto label_140210e04
                        
                    label_14021559a:
                        zmm4 = _mm_insert_ps(arg9, zmm12, 0x10)
                        
                        if (not(cond:91_1))
                        label_1402155a4:
                            
                            if (cond:110_1)
                                goto label_140210e0f
                            
                            goto label_1402155b4
                        
                    label_140210e04:
                        var_5b8 = _mm_insert_ps(var_5b8, arg7, 0x10)
                        bool cond:141_1
                        bool cond:142_1
                        bool cond:166_1
                        bool cond:167_1
                        
                        if (not(cond:109_1))
                        label_140210e0f:
                            char temp52_1 = temp0_996 & 4
                            cond:141_1 = temp52_1 != 0
                            cond:142_1 = temp52_1 == 0
                            cond:166_1 = temp52_1 != 0
                            cond:167_1 = temp52_1 == 0
                            
                            if (temp52_1 == 0)
                                goto label_1402155c1
                            
                            goto label_140210e18
                        
                    label_1402155b4:
                        var_5d8 = _mm_insert_ps(var_5d8, zmm1, 0x10)
                        char temp51_1 = temp0_996 & 4
                        cond:141_1 = temp51_1 != 0
                        cond:142_1 = temp51_1 == 0
                        cond:166_1 = temp51_1 != 0
                        cond:167_1 = temp51_1 == 0
                        
                        if (temp51_1 == 0)
                        label_1402155c1:
                            zmm10 = var_478_1
                            
                            if (cond:142_1)
                                goto label_140210e2f
                            
                            goto label_1402155dc
                        
                    label_140210e18:
                        zmm4 = _mm_insert_ps(zmm4, zmm10, 0x20)
                        zmm10 = var_478_1
                        
                        if (not(cond:141_1))
                        label_140210e2f:
                            
                            if (cond:167_1)
                                goto label_1402155e7
                            
                            goto label_140210e3f
                        
                    label_1402155dc:
                        var_5b8 = _mm_insert_ps(var_5b8, arg5, 0x20)
                        bool cond:206_1
                        bool cond:232_1
                        
                        if (cond:166_1)
                        label_140210e3f:
                            var_5d8 = _mm_insert_ps(var_5d8, zmm3, 0x20)
                            char temp76_1 = temp0_996 & 8
                            cond:206_1 = temp76_1 == 0
                            cond:232_1 = temp76_1 == 0
                            
                            if (temp76_1 != 0)
                                zmm4 = _mm_insert_ps(zmm4, arg11, 0x30)
                        else
                        label_1402155e7:
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
                                goto label_140210cfa
                            
                            goto label_140210cdf
                        
                        if ((temp0_13 & 2) != 0)
                        label_140210cfa:
                            arg9 = _mm_blend_ps(arg9, temp0_35, 2)
                            
                            if ((temp0_13 & 4) != 0)
                                goto label_140210ce5
                            
                            goto label_140210d07
                        
                    label_140210cdf:
                        
                        if ((temp0_13 & 4) == 0)
                        label_140210d07:
                            
                            if ((temp0_13 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, temp0_35, 8)
                        else
                        label_140210ce5:
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
                                goto label_1402110ec
                            
                            goto label_140211022
                        
                        if ((temp0_13 & 4) == 0)
                        label_140211022:
                            var_388 = zmm4
                            
                            if ((temp0_13 & 8) != 0)
                                zmm0 = _mm_blend_epi16(zmm0, zmm3, 0xc0)
                        else
                        label_1402110ec:
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
                                    goto label_1402112cc
                                
                                goto label_14021107f
                            
                            zmm3 = zx.o(*zmm1[0].q)
                            var_418 = _mm_blend_epi16(var_418, zmm3, 3)
                            
                            if ((temp0_80 & 2) != 0)
                            label_1402112cc:
                                var_418 = __insertps_xmmps_memd_immb(var_418, 
                                    *_mm_extract_epi64(zmm1, 1), 0x10)
                                arg7 = temp0_401
                                
                                if ((temp0_80 & 4) == 0)
                                    goto label_140211091
                                
                                goto label_1402112f9
                            
                        label_14021107f:
                            arg7 = temp0_401
                            
                            if ((temp0_80 & 4) == 0)
                            label_140211091:
                                
                                if ((temp0_80 & 8) != 0)
                                    goto label_14021131f
                                
                                goto label_14021109f
                            
                        label_1402112f9:
                            var_418 = __insertps_xmmps_memd_immb(var_418, *zmm2.q, 0x20)
                            
                            if ((temp0_80 & 8) == 0)
                            label_14021109f:
                                zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(var_418)
                                
                                if ((temp0_13 & 1) == 0)
                                    goto label_140211126
                                
                                goto label_1402110b9
                            
                        label_14021131f:
                            var_418 = __insertps_xmmps_memd_immb(var_418, 
                                *_mm_extract_epi64(zmm2, 1), 0x30)
                            zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(var_418)
                            
                            if ((temp0_13 & 1) == 0)
                                goto label_140211126
                            
                            goto label_1402110b9
                        
                        arg7 = temp0_401
                        zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(var_418)
                        
                        if ((temp0_13 & 1) == 0)
                        label_140211126:
                            
                            if ((temp0_13 & 2) == 0)
                                goto label_1402110c4
                            
                            goto label_140211137
                        
                    label_1402110b9:
                        var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 3)
                        
                        if ((temp0_13 & 2) == 0)
                        label_1402110c4:
                            
                            if ((temp0_13 & 4) == 0)
                                goto label_140211142
                            
                            goto label_1402110d5
                        
                    label_140211137:
                        var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0xc)
                        
                        if ((temp0_13 & 4) != 0)
                        label_1402110d5:
                            var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0x30)
                            
                            if ((temp0_13 & 8) != 0)
                                var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0xc0)
                        else
                        label_140211142:
                            
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
                                    goto label_1402113dd
                                
                                goto label_14021137d
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0].q, 0x20)
                            char r10_1
                            
                            if ((rdi_1 & 8) != 0)
                            label_1402113dd:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                r10_1 = _mm_movemask_ps(arg5)
                                arg10 = zx.o(0)
                                
                                if ((r10_1 & 1) != 0)
                                    goto label_14021138f
                                
                                goto label_1402113f1
                            
                        label_14021137d:
                            r10_1 = _mm_movemask_ps(arg5)
                            arg10 = zx.o(0)
                            
                            if ((r10_1 & 1) == 0)
                            label_1402113f1:
                                
                                if ((r10_1 & 2) != 0)
                                label_1402113f7:
                                    arg10 = _mm_blend_ps(arg10, zmm0, 2)
                                    
                                    if ((r10_1 & 4) != 0)
                                        goto label_1402113a2
                                    
                                    goto label_140211408
                            else
                            label_14021138f:
                                arg10 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((r10_1 & 2) != 0)
                                    goto label_1402113f7
                            
                            if ((r10_1 & 4) == 0)
                            label_140211408:
                                var_2a8 = zmm0
                                
                                if ((r10_1 & 8) != 0)
                                    arg10 = _mm_blend_ps(arg10, zmm0, 8)
                            else
                            label_1402113a2:
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
                                    goto label_140211508
                                
                                goto label_1402114a7
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg6[0].q, 0x20)
                            var_518_1 = temp0_120
                            
                            if ((rdi_1 & 8) != 0)
                            label_140211508:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg6, 1), 0x30)
                                arg7 = temp0_401
                                arg8 = zx.o(0)
                                
                                if ((r10_1 & 1) != 0)
                                    goto label_1402114be
                                
                                goto label_140211521
                            
                        label_1402114a7:
                            arg7 = temp0_401
                            arg8 = zx.o(0)
                            
                            if ((r10_1 & 1) == 0)
                            label_140211521:
                                
                                if ((r10_1 & 2) != 0)
                                label_140211527:
                                    arg8 = _mm_blend_ps(arg8, zmm0, 2)
                                    
                                    if ((r10_1 & 4) != 0)
                                        goto label_1402114d1
                                    
                                    goto label_140211538
                            else
                            label_1402114be:
                                arg8 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((r10_1 & 2) != 0)
                                    goto label_140211527
                            
                            if ((r10_1 & 4) == 0)
                            label_140211538:
                                var_2b8 = zmm0
                                
                                if ((r10_1 & 8) != 0)
                                    arg8 = _mm_blend_ps(arg8, zmm0, 8)
                            else
                            label_1402114d1:
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
                                    goto label_140211689
                                
                                goto label_14021162e
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0].q, 0x20)
                            char rcx_12
                            
                            if ((temp0_133 & 8) != 0)
                            label_140211689:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                rcx_12 = _mm_movemask_ps(zmm4)
                                zmm12 = zx.o(0)
                                
                                if ((rcx_12 & 1) != 0)
                                    goto label_14021163e
                                
                                goto label_14021169b
                            
                        label_14021162e:
                            rcx_12 = _mm_movemask_ps(zmm4)
                            zmm12 = zx.o(0)
                            
                            if ((rcx_12 & 1) == 0)
                            label_14021169b:
                                
                                if ((rcx_12 & 2) != 0)
                                label_1402116a0:
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 2)
                                    
                                    if ((rcx_12 & 4) != 0)
                                        goto label_14021164f
                                    
                                    goto label_1402116af
                            else
                            label_14021163e:
                                zmm12 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rcx_12 & 2) != 0)
                                    goto label_1402116a0
                            
                            if ((rcx_12 & 4) == 0)
                            label_1402116af:
                                var_2f8 = zmm0
                                
                                if ((rcx_12 & 8) != 0)
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 8)
                            else
                            label_14021164f:
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
                                    goto label_1402117ae
                                
                                goto label_140211762
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_140[0].q, 0x20)
                            
                            if ((temp0_133 & 8) != 0)
                            label_1402117ae:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_140, 1), 0x30)
                                arg12 = zx.o(0)
                                
                                if ((rcx_12 & 1) != 0)
                                    goto label_14021176f
                                
                                goto label_1402117bd
                            
                        label_140211762:
                            arg12 = zx.o(0)
                            
                            if ((rcx_12 & 1) == 0)
                            label_1402117bd:
                                
                                if ((rcx_12 & 2) != 0)
                                label_1402117c2:
                                    arg12 = _mm_blend_ps(arg12, zmm0, 2)
                                    
                                    if ((rcx_12 & 4) != 0)
                                        goto label_140211780
                                    
                                    goto label_1402117d1
                            else
                            label_14021176f:
                                arg12 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rcx_12 & 2) != 0)
                                    goto label_1402117c2
                            
                            if ((rcx_12 & 4) == 0)
                            label_1402117d1:
                                var_2e8 = zmm0
                                
                                if ((rcx_12 & 8) != 0)
                                    arg12 = _mm_blend_ps(arg12, zmm0, 8)
                            else
                            label_140211780:
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
                                    goto label_140211930
                                
                                goto label_1402118bc
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0].q, 0x20)
                            char rdi_3
                            
                            if ((temp0_165 & 8) != 0)
                            label_140211930:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                rdi_3 = _mm_movemask_ps(zmm3)
                                zmm3 = zx.o(0)
                                
                                if ((rdi_3 & 1) != 0)
                                    goto label_1402118cb
                                
                                goto label_140211942
                            
                        label_1402118bc:
                            rdi_3 = _mm_movemask_ps(zmm3)
                            zmm3 = zx.o(0)
                            
                            if ((rdi_3 & 1) != 0)
                            label_1402118cb:
                                zmm3 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rdi_3 & 2) != 0)
                                    goto label_140211948
                                
                                goto label_1402118d7
                            
                        label_140211942:
                            
                            if ((rdi_3 & 2) == 0)
                            label_1402118d7:
                                
                                if ((rdi_3 & 4) != 0)
                                label_1402118dd:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                                    
                                    if ((rdi_3 & 8) != 0)
                                        goto label_14021195a
                                    
                                    goto label_1402118ec
                            else
                            label_140211948:
                                zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                                
                                if ((rdi_3 & 4) != 0)
                                    goto label_1402118dd
                            
                            if ((rdi_3 & 8) != 0)
                            label_14021195a:
                                zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                                var_2d8 = zmm0
                                
                                if ((temp0_165 & 1) == 0)
                                    goto label_1402118f6
                                
                                goto label_140211985
                            
                        label_1402118ec:
                            var_2d8 = zmm0
                            uint128_t var_2c8
                            
                            if ((temp0_165 & 1) != 0)
                            label_140211985:
                                zmm0 = _mm_blend_epi16(var_2c8, zx.o(*temp0_170[0].q), 3)
                                
                                if ((temp0_165 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_170, 1), 0x10)
                            else
                            label_1402118f6:
                                zmm0 = var_2c8
                                
                                if ((temp0_165 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_170, 1), 0x10)
                            
                            if ((temp0_165 & 4) == 0)
                                if ((temp0_165 & 8) != 0)
                                    goto label_1402119f0
                                
                                goto label_1402119a5
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_172[0].q, 0x20)
                            
                            if ((temp0_165 & 8) != 0)
                            label_1402119f0:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_172, 1), 0x30)
                                zmm1 = zx.o(0)
                                
                                if ((rdi_3 & 1) != 0)
                                    goto label_1402119b1
                                
                                goto label_1402119ff
                            
                        label_1402119a5:
                            zmm1 = zx.o(0)
                            
                            if ((rdi_3 & 1) == 0)
                            label_1402119ff:
                                
                                if ((rdi_3 & 2) != 0)
                                label_140211a05:
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                                    
                                    if ((rdi_3 & 4) != 0)
                                        goto label_1402119c3
                                    
                                    goto label_140211a15
                            else
                            label_1402119b1:
                                zmm1 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rdi_3 & 2) != 0)
                                    goto label_140211a05
                            
                            if ((rdi_3 & 4) == 0)
                            label_140211a15:
                                var_2c8 = zmm0
                                
                                if ((rdi_3 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                            label_1402119c3:
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
                                goto label_140211bda
                        else if (temp103_1 != 0)
                        label_140211bda:
                            zmm0 = _mm_blend_ps(zmm0, temp0_220, 2)
                            
                            if (temp103_1 != 0)
                                goto label_140211ba2
                            
                            goto label_140211be3
                        
                        bool cond:323_1
                        bool cond:324_1
                        bool cond:339_1
                        bool cond:340_1
                        
                        if (temp103_1 != 0)
                        label_140211ba2:
                            var_5d8 = _mm_blend_ps(var_5d8, zmm3, 2)
                            char temp123_1 = temp0_92 & 4
                            cond:323_1 = temp123_1 == 0
                            cond:324_1 = temp123_1 != 0
                            cond:339_1 = temp123_1 == 0
                            cond:340_1 = temp123_1 != 0
                            
                            if (temp123_1 != 0)
                                goto label_140211be8
                            
                            goto label_140211bab
                        
                    label_140211be3:
                        char temp122_1 = temp0_92 & 4
                        cond:323_1 = temp122_1 == 0
                        cond:324_1 = temp122_1 != 0
                        cond:339_1 = temp122_1 == 0
                        cond:340_1 = temp122_1 != 0
                        
                        if (temp122_1 == 0)
                        label_140211bab:
                            
                            if (not(cond:323_1))
                            label_140211bad:
                                zmm0 = _mm_blend_ps(zmm0, temp0_220, 4)
                                
                                if (cond:340_1)
                                    goto label_140211bfd
                                
                                goto label_140211bb6
                        else
                        label_140211be8:
                            arg9 = _mm_blend_ps(arg9, arg10, 4)
                            
                            if (cond:324_1)
                                goto label_140211bad
                        
                        bool cond:355_1
                        bool cond:356_1
                        bool cond:367_1
                        
                        if (not(cond:339_1))
                        label_140211bfd:
                            var_5d8 = _mm_blend_ps(var_5d8, zmm3, 4)
                            char temp135_1 = temp0_92 & 8
                            cond:355_1 = temp135_1 == 0
                            cond:356_1 = temp135_1 != 0
                            cond:367_1 = temp135_1 == 0
                            
                            if (temp135_1 != 0)
                                goto label_140211bbb
                            
                            goto label_140211c06
                        
                    label_140211bb6:
                        char temp134_1 = temp0_92 & 8
                        cond:355_1 = temp134_1 == 0
                        cond:356_1 = temp134_1 != 0
                        cond:367_1 = temp134_1 == 0
                        
                        if (temp134_1 == 0)
                        label_140211c06:
                            zmm1 = var_528_1
                            arg10 = var_508_2
                            
                            if (not(cond:355_1))
                                zmm0 = _mm_blend_ps(zmm0, temp0_220, 8)
                        else
                        label_140211bbb:
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
                                    goto label_140211e3f
                                
                                goto label_140211e24
                            
                            if ((temp0_238 & 2) != 0)
                            label_140211e3f:
                                arg12 = _mm_blend_ps(arg12, temp0_263, 2)
                                
                                if ((temp0_238 & 4) != 0)
                                    goto label_140211e2a
                                
                                goto label_140211e4c
                            
                        label_140211e24:
                            
                            if ((temp0_238 & 4) == 0)
                            label_140211e4c:
                                
                                if ((temp0_238 & 8) != 0)
                                    arg12 = _mm_blend_ps(arg12, temp0_263, 8)
                            else
                            label_140211e2a:
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
                                    goto label_140211f15
                                
                                goto label_140211fc4
                            
                            arg11 = var_578_1
                            zmm2 = var_438_1
                            zmm10 = var_598_4
                            arg5 = var_5c8_6
                            zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                            
                            if ((temp0_238 & 1) != 0)
                            label_140211fc4:
                                zmm0 = _mm_blend_epi16(var_5b8, zmm1, 3)
                                
                                if ((temp0_238 & 2) != 0)
                                    zmm0 = _mm_blend_epi16(zmm0, zmm1, 0xc)
                            else
                            label_140211f15:
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
                                    goto label_14021227a
                                
                                goto label_140212146
                            
                            if ((temp0_238 & 4) == 0)
                            label_140212146:
                                
                                if ((temp0_238 & 8) != 0)
                                    var_5d8 = _mm_blend_epi16(var_5d8, zmm0, 0xc0)
                            else
                            label_14021227a:
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
                                    label_1402122b2:
                                        var_5b8 = _mm_blend_ps(var_5b8, arg11, 1)
                                        
                                        if (temp74_1 != 0)
                                            goto label_1402121e5
                                        
                                        goto label_1402122bd
                                else
                                    arg12 = _mm_blend_ps(arg12, arg11, 1)
                                    arg9 = var_528_1
                                    zmm12 = var_538_1
                                    
                                    if (temp74_1 != 0)
                                        goto label_1402122b2
                                
                                bool cond:268_1
                                bool cond:269_1
                                bool cond:291_1
                                bool cond:292_1
                                
                                if (temp74_1 != 0)
                                label_1402121e5:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 1)
                                    char temp102_1 = temp0_309 & 2
                                    cond:268_1 = temp102_1 == 0
                                    cond:269_1 = temp102_1 != 0
                                    cond:291_1 = temp102_1 == 0
                                    cond:292_1 = temp102_1 != 0
                                    
                                    if (temp102_1 != 0)
                                        goto label_1402122c6
                                    
                                    goto label_1402121f2
                                
                            label_1402122bd:
                                char temp101_1 = temp0_309 & 2
                                cond:268_1 = temp101_1 == 0
                                cond:269_1 = temp101_1 != 0
                                cond:291_1 = temp101_1 == 0
                                cond:292_1 = temp101_1 != 0
                                
                                if (temp101_1 == 0)
                                label_1402121f2:
                                    
                                    if (not(cond:268_1))
                                    label_140212204:
                                        var_5b8 = _mm_blend_ps(var_5b8, arg11, 2)
                                        
                                        if (cond:292_1)
                                            goto label_1402122e4
                                        
                                        goto label_14021220f
                                else
                                label_1402122c6:
                                    arg12 = _mm_blend_ps(arg12, arg11, 2)
                                    
                                    if (cond:269_1)
                                        goto label_140212204
                                
                                bool cond:321_1
                                bool cond:322_1
                                bool cond:337_1
                                bool cond:338_1
                                
                                if (not(cond:291_1))
                                label_1402122e4:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 2)
                                    char temp121_1 = temp0_309 & 4
                                    cond:321_1 = temp121_1 == 0
                                    cond:322_1 = temp121_1 != 0
                                    cond:337_1 = temp121_1 == 0
                                    cond:338_1 = temp121_1 != 0
                                    
                                    if (temp121_1 != 0)
                                        goto label_140212218
                                    
                                    goto label_1402122f1
                                
                            label_14021220f:
                                char temp120_1 = temp0_309 & 4
                                cond:321_1 = temp120_1 == 0
                                cond:322_1 = temp120_1 != 0
                                cond:337_1 = temp120_1 == 0
                                cond:338_1 = temp120_1 != 0
                                
                                if (temp120_1 == 0)
                                label_1402122f1:
                                    
                                    if (not(cond:321_1))
                                    label_140212303:
                                        var_5b8 = _mm_blend_ps(var_5b8, arg11, 4)
                                        
                                        if (cond:338_1)
                                            goto label_140212236
                                        
                                        goto label_14021230e
                                else
                                label_140212218:
                                    arg12 = _mm_blend_ps(arg12, arg11, 4)
                                    
                                    if (cond:322_1)
                                        goto label_140212303
                                
                                bool cond:353_1
                                bool cond:354_1
                                bool cond:365_1
                                bool cond:366_1
                                
                                if (not(cond:337_1))
                                label_140212236:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 4)
                                    char temp133_1 = temp0_309 & 8
                                    cond:353_1 = temp133_1 == 0
                                    cond:354_1 = temp133_1 != 0
                                    cond:365_1 = temp133_1 == 0
                                    cond:366_1 = temp133_1 == 0
                                    
                                    if (temp133_1 != 0)
                                        goto label_140212317
                                    
                                    goto label_140212243
                                
                            label_14021230e:
                                char temp132_1 = temp0_309 & 8
                                cond:353_1 = temp132_1 == 0
                                cond:354_1 = temp132_1 != 0
                                cond:365_1 = temp132_1 == 0
                                cond:366_1 = temp132_1 == 0
                                
                                if (temp132_1 != 0)
                                label_140212317:
                                    arg12 = _mm_blend_ps(arg12, arg11, 8)
                                    
                                    if (cond:354_1)
                                        goto label_140212255
                                    
                                    goto label_140212324
                                
                            label_140212243:
                                
                                if (cond:353_1)
                                label_140212324:
                                    
                                    if (not(cond:365_1))
                                        var_5d8 = _mm_blend_ps(var_5d8, arg11, 8)
                                else
                                label_140212255:
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
                                    label_1402123f0:
                                        zmm3 = _mm_blend_ps(zmm3, arg11, 1)
                                        
                                        if (temp94_1 != 0)
                                            goto label_1402123a0
                                        
                                        goto label_1402123f9
                                else
                                    arg12 = _mm_blend_ps(arg12, arg11, 1)
                                    zmm3 = var_5b8
                                    
                                    if (temp94_1 != 0)
                                        goto label_1402123f0
                                
                                bool cond:289_1
                                bool cond:290_1
                                bool cond:307_1
                                bool cond:308_1
                                
                                if (temp94_1 != 0)
                                label_1402123a0:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 1)
                                    char temp115_1 = temp0_324 & 2
                                    cond:289_1 = temp115_1 == 0
                                    cond:290_1 = temp115_1 != 0
                                    cond:307_1 = temp115_1 == 0
                                    cond:308_1 = temp115_1 != 0
                                    
                                    if (temp115_1 != 0)
                                        goto label_1402123fe
                                    
                                    goto label_1402123a9
                                
                            label_1402123f9:
                                char temp114_1 = temp0_324 & 2
                                cond:289_1 = temp114_1 == 0
                                cond:290_1 = temp114_1 != 0
                                cond:307_1 = temp114_1 == 0
                                cond:308_1 = temp114_1 != 0
                                
                                if (temp114_1 == 0)
                                label_1402123a9:
                                    
                                    if (not(cond:289_1))
                                    label_1402123ab:
                                        zmm3 = _mm_blend_ps(zmm3, arg11, 2)
                                        
                                        if (cond:308_1)
                                            goto label_140212414
                                        
                                        goto label_1402123b4
                                else
                                label_1402123fe:
                                    arg12 = _mm_blend_ps(arg12, arg11, 2)
                                    
                                    if (cond:290_1)
                                        goto label_1402123ab
                                
                                bool cond:335_1
                                bool cond:336_1
                                bool cond:345_1
                                bool cond:346_1
                                
                                if (not(cond:307_1))
                                label_140212414:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 2)
                                    char temp129_1 = temp0_324 & 4
                                    cond:335_1 = temp129_1 == 0
                                    cond:336_1 = temp129_1 != 0
                                    cond:345_1 = temp129_1 == 0
                                    cond:346_1 = temp129_1 != 0
                                    
                                    if (temp129_1 != 0)
                                        goto label_1402123b9
                                    
                                    goto label_14021241d
                                
                            label_1402123b4:
                                char temp128_1 = temp0_324 & 4
                                cond:335_1 = temp128_1 == 0
                                cond:336_1 = temp128_1 != 0
                                cond:345_1 = temp128_1 == 0
                                cond:346_1 = temp128_1 != 0
                                
                                if (temp128_1 == 0)
                                label_14021241d:
                                    
                                    if (not(cond:335_1))
                                    label_14021241f:
                                        zmm3 = _mm_blend_ps(zmm3, arg11, 4)
                                        
                                        if (cond:346_1)
                                            goto label_1402123cf
                                        
                                        goto label_140212428
                                else
                                label_1402123b9:
                                    arg12 = _mm_blend_ps(arg12, arg11, 4)
                                    
                                    if (cond:336_1)
                                        goto label_14021241f
                                
                                bool cond:363_1
                                bool cond:370_1
                                bool cond:371_1
                                bool cond:364_1
                                
                                if (cond:345_1)
                                label_140212428:
                                    char temp136_1 = temp0_324 & 8
                                    cond:363_1 = temp136_1 == 0
                                    cond:364_1 = temp136_1 != 0
                                    cond:370_1 = temp136_1 == 0
                                    cond:371_1 = temp136_1 == 0
                                    
                                    if (temp136_1 != 0)
                                    label_14021242d:
                                        arg12 = _mm_blend_ps(arg12, arg11, 8)
                                        
                                        if (cond:364_1)
                                            goto label_1402123da
                                        
                                        goto label_140212436
                                else
                                label_1402123cf:
                                    var_5d8 = _mm_blend_ps(var_5d8, arg11, 4)
                                    char temp137_1 = temp0_324 & 8
                                    cond:363_1 = temp137_1 == 0
                                    cond:364_1 = temp137_1 != 0
                                    cond:370_1 = temp137_1 == 0
                                    cond:371_1 = temp137_1 == 0
                                    
                                    if (temp137_1 != 0)
                                        goto label_14021242d
                                
                                if (cond:363_1)
                                label_140212436:
                                    zmm2 = zmm4
                                    
                                    if (not(cond:370_1))
                                        var_5d8 = _mm_blend_ps(var_5d8, arg11, 8)
                                else
                                label_1402123da:
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
                        goto label_14021250c
                    
                    goto label_1402124a9
                
                arg10 = _mm_mul_ps(arg10, zmm0)
                zmm0 = arg5
                bool cond:139_1
                bool cond:140_1
                bool cond:163_1
                bool cond:164_1
                
                if (temp32_1 != 0)
                label_14021250c:
                    zmm0.d = arg5.d f+ arg10[0]
                    zmm10 = _mm_add_ps(zmm10, zmm4)
                    char temp50_1 = temp0_983 & 2
                    cond:139_1 = temp50_1 == 0
                    cond:140_1 = temp50_1 != 0
                    cond:163_1 = temp50_1 == 0
                    cond:164_1 = temp50_1 != 0
                    
                    if (temp50_1 != 0)
                        goto label_1402124b2
                    
                    goto label_14021251a
                
            label_1402124a9:
                zmm10 = _mm_add_ps(zmm10, zmm4)
                char temp49_1 = temp0_983 & 2
                cond:139_1 = temp49_1 == 0
                cond:140_1 = temp49_1 != 0
                cond:163_1 = temp49_1 == 0
                cond:164_1 = temp49_1 != 0
                
                if (temp49_1 != 0)
                label_1402124b2:
                    zmm1 = _mm_blend_ps(zmm1, zmm10, 2)
                    arg7 = _mm_add_ps(arg7, temp0_341)
                    
                    if (cond:140_1)
                        goto label_14021251f
                    
                    goto label_1402124be
                
            label_14021251a:
                arg7 = _mm_add_ps(arg7, temp0_341)
                
                if (not(cond:139_1))
                label_14021251f:
                    zmm2 = _mm_blend_ps(zmm2, arg7, 2)
                    arg5 = _mm_add_ps(arg5, arg10)
                    
                    if (cond:164_1)
                        goto label_1402124c4
                    
                    goto label_14021252b
                
            label_1402124be:
                arg5 = _mm_add_ps(arg5, arg10)
                bool cond:199_1
                bool cond:200_1
                bool cond:222_1
                bool cond:223_1
                
                if (not(cond:163_1))
                label_1402124c4:
                    zmm0 = _mm_blend_ps(zmm0, arg5, 2)
                    arg10 = _mm_cmpeq_epi32(arg10, arg10)
                    char temp73_1 = temp0_983 & 4
                    cond:199_1 = temp73_1 == 0
                    cond:200_1 = temp73_1 != 0
                    cond:222_1 = temp73_1 == 0
                    cond:223_1 = temp73_1 != 0
                    
                    if (temp73_1 != 0)
                        goto label_140212535
                    
                    goto label_1402124d4
                
            label_14021252b:
                arg10 = _mm_cmpeq_epi32(arg10, arg10)
                char temp72_1 = temp0_983 & 4
                cond:199_1 = temp72_1 == 0
                cond:200_1 = temp72_1 != 0
                cond:222_1 = temp72_1 == 0
                cond:223_1 = temp72_1 != 0
                
                if (temp72_1 == 0)
                label_1402124d4:
                    
                    if (not(cond:199_1))
                    label_1402124d6:
                        zmm2 = _mm_blend_ps(zmm2, arg7, 4)
                        
                        if (cond:223_1)
                            goto label_140212540
                        
                        goto label_1402124de
                else
                label_140212535:
                    zmm1 = _mm_blend_ps(zmm1, zmm10, 4)
                    
                    if (cond:200_1)
                        goto label_1402124d6
                
                bool cond:266_1
                bool cond:267_1
                bool cond:287_1
                bool cond:288_1
                
                if (not(cond:222_1))
                label_140212540:
                    zmm0 = _mm_blend_ps(zmm0, arg5, 4)
                    char temp100_1 = temp0_983 & 8
                    cond:266_1 = temp100_1 == 0
                    cond:267_1 = temp100_1 != 0
                    cond:287_1 = temp100_1 != 0
                    cond:288_1 = temp100_1 == 0
                    
                    if (temp100_1 != 0)
                        goto label_1402124e3
                    
                    goto label_14021254b
                
            label_1402124de:
                char temp99_1 = temp0_983 & 8
                cond:266_1 = temp99_1 == 0
                cond:267_1 = temp99_1 != 0
                cond:287_1 = temp99_1 != 0
                cond:288_1 = temp99_1 == 0
                
                if (temp99_1 != 0)
                label_1402124e3:
                    zmm10 = _mm_blend_ps(zmm10, zmm1, 7)
                    
                    if (cond:267_1)
                        goto label_140212551
                    
                    goto label_1402124ec
                
            label_14021254b:
                zmm10 = zmm1
                
                if (cond:266_1)
                label_1402124ec:
                    arg7 = zmm2
                    var_3c8 = arg12
                    
                    if (cond:287_1)
                        zmm0 = _mm_blend_ps(zmm0, arg5, 8)
                else
                label_140212551:
                    arg7 = _mm_blend_ps(arg7, zmm2, 7)
                    var_3c8 = arg12
                    
                    if (not(cond:288_1))
                        zmm0 = _mm_blend_ps(zmm0, arg5, 8)
                
                arg12 = zmm0
                arg8 ^= arg10
                rcx_27 = _mm_movemask_ps(arg8)
                
                if (rcx_27 != 0)
                    goto label_140215666
                
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
        goto label_14021586e
return result
