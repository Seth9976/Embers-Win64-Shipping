// 函数: sub_140207890
// 地址: 0x140207890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm15[0x4]
int32_t var_58[0x4] = zmm15
int64_t var_68[0x2] = arg11
uint32_t var_78[0x4] = arg10
int32_t zmm12[0x4]
int32_t var_88[0x4] = zmm12
float var_98[0x4] = arg9
float zmm10[0x4]
float var_a8[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_b8[0x4] = zmm9
int32_t var_c8[0x4] = arg8
int64_t var_d8[0x2] = arg7
int32_t var_e8[0x4] = arg6
float zmm2[0x4] = arg13
int32_t i_3 = ((arg15 s>> 0x1f u>> 0x1e) + arg15) & 0xfffffffc
int64_t result
int64_t var_508[0x2]
uint32_t var_4d8[0x4]
uint32_t var_4b8[0x4]
uint32_t var_428[0x4]
int32_t var_3f8[0x4]
int32_t var_3e8[0x4]
uint32_t var_3d8[0x4]
int64_t var_3c8[0x2]
int64_t var_3b8[0x2]
int32_t var_3a8[0x4]
int32_t var_398[0x4]
int32_t var_388[0x4]
float var_378[0x4]
int32_t var_368[0x4]
uint32_t var_358[0x4]
int64_t var_348[0x2]
int32_t var_338[0x4]
float var_328[0x4]
int32_t var_318[0x4]
float var_308[0x4]
uint128_t var_2f8
uint128_t var_2e8
uint128_t var_2d8
uint128_t var_2c8
uint128_t var_2b8
uint128_t var_2a8
uint128_t var_298
uint128_t var_288
uint128_t var_278
uint128_t var_268
uint128_t var_258
uint128_t var_248
uint128_t var_238
uint128_t var_228
uint128_t var_218
uint128_t var_208
uint128_t var_1f8
int32_t var_1e8[0x4]
int32_t var_1d8[0x4]
uint128_t var_1c8
int32_t var_1b8[0x4]
int32_t var_1a8[0x4]
uint128_t var_198
uint128_t var_188
uint64_t r12
uint128_t zmm0
uint128_t zmm1
int32_t zmm3[0x4]
int32_t zmm4[0x4]

if (i_3 s<= 0)
    r12 = 0
    result = zx.q(arg15)
    
    if (0 s< result.d)
    label_14020c41b:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r12.d), 0), data_142e11d00)
        arg9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & arg9
        int64_t rax_220 = sx.q(zmm0.d)
        int64_t rbp_31 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rdi_6 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rcx_89 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm10 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg2 + rax_220)), *(arg2 + rbp_31), 1), 
                *(arg2 + rdi_6), 2), 
            *(arg2 + rcx_89), 3)
        zmm0 = data_142fc95e0 & arg9
        int32_t* rax_221 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* rbp_32 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rbx_26 = zx.q(_mm_extract_epi32(zmm0, 3))
        int32_t temp0_1068[0x4] = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(zx.q(zmm0.d) + arg2 + rax_220)), 
                    *(rax_221 + arg2 + rbp_31), 1), 
                *(rbp_32 + arg2 + rdi_6), 2), 
            *(rbx_26 + arg2 + rcx_89), 3)
        zmm0 = _mm_slli_epi32(temp0_1068, 3) & arg9
        int64_t rcx_91 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rdx_1 = sx.q(_mm_extract_epi32(zmm0, 2))
        int32_t temp0_1072 = _mm_extract_epi32(zmm0, 3)
        zmm0 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + sx.q(zmm0.d))), *(arg3 + rcx_91), 1), 
                *(arg3 + rdx_1), 2), 
            *(arg3 + sx.q(temp0_1072)), 3)
        arg10 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(arg10, arg10), zmm0)
        zmm9 = arg10 & not.o(arg9)
        char rcx_96
        
        if (_mm_movemask_ps(zmm9) == 0)
            rcx_96 = _mm_movemask_ps(arg10 & arg9)
            
            if (rcx_96 != 0)
            label_14020c8b7:
                char temp1_1 = rcx_96 & 1
                
                if (temp1_1 != 0)
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                    
                    if (temp1_1 != 0)
                        goto label_14020c909
                else if (temp1_1 != 0)
                label_14020c909:
                    arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                    
                    if (temp1_1 != 0)
                        goto label_14020c8c7
                    
                    goto label_14020c911
                
                bool cond:15_1
                bool cond:16_1
                bool cond:20_1
                bool cond:21_1
                
                if (temp1_1 != 0)
                label_14020c8c7:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                    char temp4_1 = rcx_96 & 2
                    cond:15_1 = temp4_1 == 0
                    cond:16_1 = temp4_1 != 0
                    cond:20_1 = temp4_1 == 0
                    cond:21_1 = temp4_1 != 0
                    
                    if (temp4_1 != 0)
                        goto label_14020c916
                    
                    goto label_14020c8d2
                
            label_14020c911:
                char temp3_1 = rcx_96 & 2
                cond:15_1 = temp3_1 == 0
                cond:16_1 = temp3_1 != 0
                cond:20_1 = temp3_1 == 0
                cond:21_1 = temp3_1 != 0
                
                if (temp3_1 == 0)
                label_14020c8d2:
                    
                    if (not(cond:15_1))
                    label_14020c8d4:
                        arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                        
                        if (cond:21_1)
                            goto label_14020c921
                        
                        goto label_14020c8dc
                else
                label_14020c916:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                    
                    if (cond:16_1)
                        goto label_14020c8d4
                
                bool cond:25_1
                bool cond:26_1
                bool cond:36_1
                bool cond:37_1
                
                if (not(cond:20_1))
                label_14020c921:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                    char temp8_1 = rcx_96 & 4
                    cond:25_1 = temp8_1 == 0
                    cond:26_1 = temp8_1 != 0
                    cond:36_1 = temp8_1 == 0
                    cond:37_1 = temp8_1 != 0
                    
                    if (temp8_1 != 0)
                        goto label_14020c8e1
                    
                    goto label_14020c92c
                
            label_14020c8dc:
                char temp7_1 = rcx_96 & 4
                cond:25_1 = temp7_1 == 0
                cond:26_1 = temp7_1 != 0
                cond:36_1 = temp7_1 == 0
                cond:37_1 = temp7_1 != 0
                
                if (temp7_1 == 0)
                label_14020c92c:
                    
                    if (not(cond:25_1))
                    label_14020c92e:
                        arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                        
                        if (cond:37_1)
                            goto label_14020c8ec
                        
                        goto label_14020c936
                else
                label_14020c8e1:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                    
                    if (cond:26_1)
                        goto label_14020c92e
                
                bool cond:52_1
                bool cond:53_1
                bool cond:61_1
                bool cond:62_1
                
                if (not(cond:36_1))
                label_14020c8ec:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                    char temp16_1 = rcx_96 & 8
                    cond:52_1 = temp16_1 == 0
                    cond:53_1 = temp16_1 != 0
                    cond:61_1 = temp16_1 == 0
                    cond:62_1 = temp16_1 == 0
                    
                    if (temp16_1 != 0)
                        goto label_14020c93b
                    
                    goto label_14020c8f7
                
            label_14020c936:
                char temp15_1 = rcx_96 & 8
                cond:52_1 = temp15_1 == 0
                cond:53_1 = temp15_1 != 0
                cond:61_1 = temp15_1 == 0
                cond:62_1 = temp15_1 == 0
                
                if (temp15_1 != 0)
                label_14020c93b:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                    
                    if (cond:53_1)
                        goto label_14020c8f9
                    
                    goto label_14020c944
                
            label_14020c8f7:
                
                if (cond:52_1)
                label_14020c944:
                    
                    if (not(cond:61_1))
                        arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                else
                label_14020c8f9:
                    arg5 = _mm_blend_ps(arg5, zx.o(0), 8)
                    
                    if (not(cond:62_1))
                        arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
        else
            float var_408_3[0x4] = arg10
            int32_t var_448_2[0x4] = arg9
            uint32_t temp0_1079[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm2 = _mm_add_epi64(4, zx.o(arg4))
            arg7 = _mm_srai_epi32(_mm_slli_epi32(zmm9, 0x1f), 0x1f)
            zmm3 = arg7 & zmm0
            int64_t rax_228 = sx.q(zmm3[0])
            int64_t rcx_93 = sx.q(_mm_extract_epi32(zmm3, 1))
            int64_t rdx_3 = sx.q(_mm_extract_epi32(zmm3, 2))
            int64_t rbp_35 = sx.q(_mm_extract_epi32(zmm3, 3))
            arg11 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_228)), *(arg4 + rcx_93), 1), 
                    *(arg4 + rdx_3), 2), 
                *(arg4 + rbp_35), 3)
            arg6 = _mm_srli_epi32(arg11, 0x1c)
            zmm3 = _mm_slli_epi32(arg6, 2) & arg7
            uint64_t rax_229 = zx.q(zmm3[0])
            uint64_t rcx_94 = zx.q(_mm_extract_epi32(zmm3, 1))
            uint64_t rdx_4 = zx.q(_mm_extract_epi32(zmm3, 2))
            uint64_t rbp_36 = zx.q(_mm_extract_epi32(zmm3, 3))
            int32_t temp0_1096[0x4] = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(rax_229 + &data_143442c70)), 
                        *(rcx_94 + &data_143442c70), 1), 
                    *(rdx_4 + &data_143442c70), 2), 
                *(rbp_36 + &data_143442c70), 3)
            arg5 = _mm_srli_epi32(arg11, 0x18)
            int32_t var_4a8_4[0x4] = arg5
            arg5 = (_mm_slli_epi32(arg6, 3) | (data_143442c00 & arg5)) & arg7
            uint64_t rax_230 = zx.q(arg5[0])
            uint64_t rdx_5 = zx.q(_mm_extract_epi32(arg5, 1))
            uint64_t rbp_37 = zx.q(_mm_extract_epi32(arg5, 2))
            uint64_t rbx_27 = zx.q(_mm_extract_epi32(arg5, 3))
            zmm4 = _mm_cvtepu8_epi32(__pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(
                    __pinsrb_xmmdq_memb_immb(zx.o(*(rax_230 + &data_143442c90)), 
                        *(rdx_5 + &data_143442c90), 1), 
                    *(rbp_37 + &data_143442c90), 2), 
                *(rbx_27 + &data_143442c90), 3)[0])
            int64_t var_478_4[0x2] = arg6
            arg9 = _mm_cmpeq_epi32(data_142fc95c0, arg6)
            arg5 = _mm_srai_epi32(_mm_slli_epi32(arg9 & not.o(zmm9), 0x1f), 0x1f)
            zmm12 = zx.o(0)
            
            if (_mm_movemask_ps(arg5) != 0)
                zmm12 = arg5 & zmm4
            
            arg8 = _mm_cvtepi32_epi64(zmm0.q)
            zmm15 = _mm_cvtepi32_epi64(temp0_1079[0].q)
            uint32_t temp0_1112[0x4] = _mm_shuffle_epi32(zmm2, 0x44)
            arg6 = data_143442be0 & arg11
            float var_4e8_4[0x4] = arg7
            zmm1 = data_142fc95e0 & arg7
            zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm9 & arg9, 0x1f), 0x1f)
            char temp0_1115 = _mm_movemask_ps(zmm0)
            zmm2 = data_142d3f5b0
            float var_498_3[0x4] = zmm0
            arg5 = _mm_blendv_ps(zmm12, zmm2, zmm0)
            zmm0 = zx.o(0)
            
            if (temp0_1115 != 0)
                zmm4 &= var_498_3
                zmm0 = zmm4
                zmm12 = arg5
            
            int32_t var_468_1[0x4] = _mm_madd_epi16(zmm0, zmm1)
            zmm12 = _mm_mullo_epi32(zmm12, temp0_1096 & arg7)
            int32_t var_5a8_1[0x4] = _mm_add_epi64(temp0_1112, zmm15)
            arg10 = _mm_add_epi64(temp0_1112, arg8)
            int32_t var_4c8_1[0x4] = zmm9
            zmm0 = _mm_cmpgt_epi32(arg6, zmm2) & zmm9
            float var_588_4[0x4] = arg9
            int32_t var_558_1[0x4] = arg11
            uint32_t var_538_2[0x4] = arg10
            int32_t var_578_2[0x4] = zmm12
            arg7 = arg9
            int32_t var_438_2[0x4] = zmm15
            uint32_t var_418_2[0x4] = arg8
            float var_488_2[0x4]
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm0, 0x1f)) == 0)
                zmm1 = zx.o(0)
                var_488_2 = zx.o(0)
                arg11 = var_4c8_1
                zmm9 = zx.o(0)
            else
                arg9 = zx.o(0)
                arg10 = _mm_cmpeq_epi32(data_143442c30 & arg11, zx.o(0))
                zmm9 = _mm_slli_epi32(zmm0 & arg10, 0x1f)
                
                if (_mm_movemask_ps(zmm9) == 0)
                    zmm4 = zx.o(0)
                    arg5 = zx.o(0)
                    var_488_2 = zx.o(0)
                    zmm9 = zx.o(0)
                    zmm2 = zx.o(arg13)
                else
                    zmm1 = zx.o(0)
                    zmm3 = zx.o(arg13)
                    zmm2 = zmm3
                    
                    if (0f f>= zmm3[0])
                        arg9 = zx.o(0)
                        zmm4 = zx.o(0)
                        arg5 = zx.o(0)
                        var_488_2 = zx.o(0)
                    else
                        zmm3 = zmm2
                        zmm2 = _mm_add_epi32(_mm_cmpeq_epi32(zmm2, zmm2), arg6)
                        
                        if (zmm3[0] f>= 1f)
                            arg9 = _mm_srai_epi32(zmm9, 0x1f) & zmm2
                            zmm4 = arg9
                            arg5 = arg9
                            var_488_2 = arg9
                            zmm2 = zmm3
                        else
                            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0)
                            zmm3 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), zmm1)
                            zmm4 = _mm_round_ps(zmm3, 9)
                            arg9 = _mm_min_epi32(_mm_cvttps_epi32(zmm4), zmm2)
                            arg5 = _mm_srai_epi32(zmm9, 0x1f)
                            arg9 &= arg5
                            zmm1 = zx.o(0)
                            
                            if (arg14 != 1)
                                zmm3 = _mm_sub_ps(zmm3, zmm4)
                                zmm1 = zmm3
                            
                            arg5 &= _mm_min_epi32(_mm_sub_epi32(arg9, _mm_cmpeq_epi32(zmm3, zmm3)), 
                                zmm2)
                            zmm4 = arg9
                            var_488_2 = arg5
                            zmm2 = zx.o(arg13)
                    
                    zmm9 = _mm_srai_epi32(zmm9, 0x1f) & zmm1
                
                uint32_t temp0_1155[0x4] = _mm_slli_epi32(arg10 & not.o(zmm0), 0x1f)
                zmm1 = _mm_srai_epi32(temp0_1155, 0x1f)
                
                if (_mm_movemask_ps(zmm1) == 0)
                    arg10 = var_538_2
                    zmm1 = zmm4
                    arg11 = var_4c8_1
                else
                    arg11 = arg6
                    zmm0 = _mm_cmpeq_epi32(_mm_min_epu32(data_142d3f5b0, arg6), arg6)
                    int32_t rax_236
                    rax_236.b = zx.o(0)[0] f>= zmm2[0]
                    arg6 = _mm_shuffle_epi32(zx.o(neg.d(rax_236)), 0) | zmm0
                    zmm0 = arg6 & zmm1
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        zmm3 = arg13
                        zmm0 = var_488_2
                    else
                        arg9 = _mm_blendv_ps(arg9, zx.o(0), zmm0)
                        arg5 = _mm_blendv_ps(arg5, zx.o(0), zmm0)
                        zmm4 = arg9
                        zmm0 = arg5
                        zmm3 = arg13
                    
                    zmm12 = arg6 & not.o(zmm1)
                    uint32_t temp0_1164 = _mm_movemask_ps(zmm12)
                    zmm1 = zx.o(0)
                    
                    if (temp0_1164 == 0)
                        arg9 = zmm4
                        arg5 = zmm0
                        arg7 = var_588_4
                        arg11 = var_4c8_1
                    else
                        zmm4 = _mm_add_epi32(arg11, _mm_cmpeq_epi32(zmm0, zmm0))
                        
                        if (zmm3[0] f>= 1f)
                            zmm0 = zmm12
                            arg9 = _mm_blendv_ps(arg9, zmm4, zmm0)
                            arg5 = _mm_blendv_ps(arg5, zmm4, zmm0)
                            arg7 = var_588_4
                            arg11 = var_4c8_1
                        else
                            int32_t var_548_3[0x4] = zmm9
                            zmm1 = var_468_1
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                            arg7 = _mm_cvtepu32_epi64(zmm1.q)
                            int32_t var_568_2[0x4] = zmm4
                            zmm4 = _mm_cvtepu32_epi64(zmm0.q)
                            zmm0 = _mm_mullo_epi32(var_578_2, arg11)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            int32_t temp0_1172[0x4] = __paddq_xmmdq_memdq(zmm4, var_5a8_1)
                            arg7 = __paddq_xmmdq_memdq(arg7, var_538_2)
                            zmm2 = data_143442a20
                            zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            int32_t temp0_1177[0x4] =
                                _mm_add_epi64(_mm_add_epi64(temp0_1172, zmm2), zmm1)
                            arg7 = _mm_add_epi64(_mm_add_epi64(arg7, zmm2), zmm0)
                            zmm0 = data_143442c10
                            arg7 &= zmm0
                            int32_t var_528_4[0x4] = temp0_1177 & zmm0
                            zmm4 = var_568_2
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                            zmm1 = _mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm0)
                            zmm0.d = float.s(arg12 - 1)
                            zmm0.d = zmm0.d f* zmm3[0]
                            int32_t var_488_3[0x4] = zmm0
                            zmm3 = zx.o(0)
                            zmm0 = _mm_min_epi32(zx.o(arg12 - 2), 
                                _mm_max_epi32(zx.o(int.d(zmm0.d)), zx.o(0)))
                            int32_t temp0_1187[0x4] =
                                _mm_min_epi32(_mm_max_epi32(_mm_cvttps_epi32(zmm1), zx.o(0)), zmm4)
                            int64_t var_598_1[0x2] = arg7
                            int32_t var_518_3[0x4] = arg6
                            int32_t var_4f8_5[0x4] = arg5
                            
                            if (arg12 s< 0x100)
                                zmm1 = _mm_shuffle_epi32(temp0_1187, 0x4e)
                                zmm2 = _mm_add_epi64(_mm_cvtepi32_epi64(temp0_1187[0].q), arg7)
                                char rdx_9 = temp0_1164.b
                                
                                if ((rdx_9 & 1) == 0)
                                    zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                                    
                                    if ((rdx_9 & 2) != 0)
                                        goto label_14020d303
                                    
                                    goto label_14020cf73
                                
                                arg7 = zx.o(*zmm2[0].q)
                                zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                                
                                if ((rdx_9 & 2) != 0)
                                label_14020d303:
                                    arg7 =
                                        _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_528_4)
                                    
                                    if ((rdx_9 & 4) == 0)
                                        goto label_14020cf85
                                    
                                    goto label_14020d323
                                
                            label_14020cf73:
                                zmm1 = __paddq_xmmdq_memdq(zmm1, var_528_4)
                                
                                if ((rdx_9 & 4) != 0)
                                label_14020d323:
                                    arg7 = _mm_insert_epi32(arg7, zx.d(*zmm1.q), 2)
                                    
                                    if ((rdx_9 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                else
                                label_14020cf85:
                                    
                                    if ((rdx_9 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                
                                arg6 = arg11
                                arg7 &= data_142ed6810
                                arg8 = _mm_shuffle_epi32(zmm0, 0)
                                arg7 = _mm_cmpgt_epi32(arg7, arg8)
                                int32_t var_458_3[0x4] = arg7 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                                zmm2 = temp0_1187
                                
                                if (_mm_movemask_ps(arg7 & not.o(zmm12)) != 0)
                                    zmm2 = __blendvps_xmmdq_memdq(temp0_1187, var_568_2, var_458_3)
                                    zmm0 = __psubd_xmmdq_memdq(temp0_1187, data_142d3f800)
                                    arg7 &= not.o(_mm_cmpgt_epi32(arg6, zmm0))
                                    arg5 = zmm12 & arg7
                                    uint32_t temp0_1246 = _mm_movemask_ps(arg5)
                                    
                                    if (temp0_1246 != 0)
                                        return sub_14020d080(temp0_1115, rdx_9, zmm2, arg4, 
                                            temp0_1246, arg1, zmm0, zmm3, temp0_1187, arg5, arg7, 
                                            arg8, temp0_1187, arg9, zmm12, temp0_1155, arg11, 
                                            var_528_4, var_518_3, var_508, var_4f8_5, var_4e8_4, 
                                            var_4d8, var_4c8_1, var_4b8, var_4a8_4, var_498_3, 
                                            var_488_3, var_478_4, var_468_1, var_458_3, var_448_2, 
                                            var_438_2, var_428, var_418_2, var_408_3, var_3f8, 
                                            var_3e8, var_3d8, var_3c8, var_3b8, var_3a8, var_398, 
                                            var_388, var_378, var_368, var_358, var_348, var_338, 
                                            var_328, var_318, var_308, var_2f8, var_2e8, var_2d8, 
                                            var_2c8, var_2b8, var_2a8, var_298, var_288, var_278, 
                                            var_268, var_258, var_248, var_238, var_228, var_218, 
                                            var_208, var_1f8, var_1e8, var_1d8, var_1c8, var_1b8, 
                                            var_1a8, var_198, var_188) __tailcall
                                
                                zmm0 = var_458_3
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(zmm0, zmm12)) == 0)
                                    zmm9 = var_548_3
                                    arg5 = var_4f8_5
                                    arg7 = var_598_1
                                else
                                    zmm0 ^= data_142d3f800
                                    zmm2 = _mm_blendv_ps(zmm2, zx.o(0), zmm0)
                                    arg11 = _mm_cmpeq_epi32(arg11, arg11)
                                    zmm9 = _mm_add_epi32(temp0_1187, arg11)
                                    arg5 = _mm_cmpgt_epi32(zmm9, zx.o(0)) & zmm0
                                    zmm0 = arg5 & zmm12
                                    uint32_t i = _mm_movemask_ps(zmm0)
                                    
                                    if (i == 0)
                                        arg7 = var_598_1
                                    else
                                        arg7 = var_598_1
                                        
                                        do
                                            zmm4 = _mm_shuffle_epi32(zmm9, 0x4e)
                                            zmm1 =
                                                _mm_add_epi64(_mm_cvtepi32_epi64(zmm9[0].q), arg7)
                                            char temp0_1262 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_1262 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm4[0].q)
                                                
                                                if ((temp0_1262 & 2) != 0)
                                                    goto label_14020d1ae
                                                
                                                goto label_14020d202
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm4[0].q)
                                            
                                            if ((temp0_1262 & 2) != 0)
                                            label_14020d1ae:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, var_528_4)
                                                
                                                if ((temp0_1262 & 4) == 0)
                                                    goto label_14020d20c
                                                
                                                goto label_14020d1c6
                                            
                                        label_14020d202:
                                            zmm0 = _mm_add_epi64(zmm0, var_528_4)
                                            
                                            if ((temp0_1262 & 4) != 0)
                                            label_14020d1c6:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1262 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_14020d20c:
                                                
                                                if ((temp0_1262 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm0 = _mm_cmpgt_epi32(zmm3 & data_142ed6810, arg8)
                                                & not.o(arg5)
                                            zmm2 = _mm_blendv_ps(zmm2, zmm9, zmm0)
                                            zmm4 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != i)
                                                zmm4 = zmm0 ^ arg5
                                            
                                            zmm9 = _mm_add_epi32(zmm9, arg11)
                                            arg5 = _mm_cmpgt_epi32(zmm9, zx.o(0)) & zmm4
                                            zmm0 = arg5 & zmm12
                                            i = _mm_movemask_ps(zmm0)
                                        while (i != 0)
                                    
                                    zmm9 = var_548_3
                                    arg5 = var_4f8_5
                                
                                arg9 = _mm_blendv_ps(arg9, zmm2, zmm12)
                                zmm0 = _mm_shuffle_epi32(arg9, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), arg7)
                                
                                if ((rdx_9 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    zmm2 = var_568_2
                                    
                                    if ((rdx_9 & 2) != 0)
                                        goto label_140210966
                                    
                                    goto label_14020d5b1
                                
                                arg8 = zx.o(*zmm1.q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                zmm2 = var_568_2
                                
                                if ((rdx_9 & 2) != 0)
                                label_140210966:
                                    arg8 =
                                        _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, var_528_4)
                                    
                                    if ((rdx_9 & 4) == 0)
                                        goto label_14020d5bf
                                    
                                    goto label_140210983
                                
                            label_14020d5b1:
                                zmm0 = _mm_add_epi64(zmm0, var_528_4)
                                
                                if ((rdx_9 & 4) != 0)
                                label_140210983:
                                    arg8 = _mm_insert_epi32(arg8, zx.d(*zmm0.q), 2)
                                    
                                    if ((rdx_9 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_14020d5bf:
                                    
                                    if ((rdx_9 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                arg5 = _mm_blendv_ps(arg5, 
                                    _mm_sub_epi32(arg9, _mm_cmpeq_epi32(zmm0, zmm0)), zmm12)
                                arg6 = _mm_cmpgt_epi32(arg6, arg5) & not.o(zmm12)
                                
                                if (_mm_movemask_ps(arg6) != 0)
                                    arg5 = _mm_blendv_ps(arg5, zmm2, arg6)
                                
                                arg7 = var_588_4
                                arg11 = var_4c8_1
                                zmm1 = _mm_shuffle_epi32(arg5, 0x4e)
                                zmm0 = _mm_cvtepi32_epi64(arg5[0].q)
                                zmm2 = _mm_add_epi64(var_598_1, zmm0)
                                
                                if ((rdx_9 & 1) == 0)
                                    zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                                    
                                    if ((rdx_9 & 2) != 0)
                                        goto label_1402109c8
                                    
                                    goto label_14020d644
                                
                                zmm0 = zx.o(*zmm2.q)
                                zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                                
                                if ((rdx_9 & 2) != 0)
                                label_1402109c8:
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm15 = _mm_add_epi64(var_528_4, zmm1)
                                    
                                    if ((rdx_9 & 4) == 0)
                                        goto label_14020d652
                                    
                                    goto label_1402109e4
                                
                            label_14020d644:
                                zmm15 = _mm_add_epi64(var_528_4, zmm1)
                                
                                if ((rdx_9 & 4) != 0)
                                label_1402109e4:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm15[0].q), 2)
                                    
                                    if ((rdx_9 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                                else
                                label_14020d652:
                                    
                                    if ((rdx_9 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                                
                                arg8 &= data_142ed6810
                                zmm0 &= data_142ed6810
                            else
                                zmm1 = _mm_add_epi32(temp0_1187, temp0_1187)
                                zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                                int32_t temp0_1191[0x4] =
                                    _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), arg7)
                                char rdx_7 = temp0_1164.b
                                
                                if ((rdx_7 & 1) == 0)
                                    zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                                    
                                    if ((rdx_7 & 2) != 0)
                                        goto label_14020d2ab
                                    
                                    goto label_14020cbf1
                                
                                zmm1 = zx.o(*temp0_1191[0].q)
                                zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((rdx_7 & 2) != 0)
                                label_14020d2ab:
                                    zmm1 = _mm_insert_epi32(zmm1, 
                                        zx.d(*_mm_extract_epi64(temp0_1191, 1)), 1)
                                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_528_4)
                                    
                                    if ((rdx_7 & 4) == 0)
                                        goto label_14020cc03
                                    
                                    goto label_14020d2cb
                                
                            label_14020cbf1:
                                zmm2 = __paddq_xmmdq_memdq(zmm2, var_528_4)
                                
                                if ((rdx_7 & 4) != 0)
                                label_14020d2cb:
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2[0].q), 2)
                                    
                                    if ((rdx_7 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                else
                                label_14020cc03:
                                    
                                    if ((rdx_7 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                
                                arg6 = arg11
                                int32_t temp0_1195[0x4] = _mm_blend_epi16(zx.o(0), zmm1, 0x55)
                                arg8 = _mm_shuffle_epi32(zmm0, 0)
                                zmm3 = _mm_cmpgt_epi32(temp0_1195, arg8)
                                uint128_t var_458_2 = zmm3 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                                zmm2 = temp0_1187
                                
                                if (_mm_movemask_ps(zmm3 & not.o(zmm12)) != 0)
                                    zmm2 = __blendvps_xmmdq_memdq(temp0_1187, var_568_2, var_458_2)
                                    zmm0 = __psubd_xmmdq_memdq(temp0_1187, data_142d3f800)
                                    zmm3 &= not.o(_mm_cmpgt_epi32(arg6, zmm0))
                                    zmm4 = zmm12 & zmm3
                                    uint32_t temp0_1203 = _mm_movemask_ps(zmm4)
                                    
                                    if (temp0_1203 != 0)
                                        return sub_14020cd00(temp0_1115, rdx_7, zmm2, arg4, 
                                            temp0_1203, arg1, zmm0, temp0_1187, zmm3, zmm4, arg5, 
                                            arg8, temp0_1187, arg9, zmm12, temp0_1155, arg11) __tailcall
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(var_458_2, zmm12)) == 0)
                                    zmm9 = var_548_3
                                    arg5 = var_4f8_5
                                    zmm15 = var_528_4
                                    arg7 = var_598_1
                                else
                                    zmm0 = var_458_2 ^ data_142d3f800
                                    zmm2 = _mm_blendv_ps(zmm2, zx.o(0), zmm0)
                                    arg11 = _mm_cmpeq_epi32(arg11, arg11)
                                    zmm9 = _mm_add_epi32(temp0_1187, arg11)
                                    arg5 = _mm_cmpgt_epi32(zmm9, zx.o(0)) & zmm0
                                    zmm0 = arg5 & zmm12
                                    uint32_t i_1 = _mm_movemask_ps(zmm0)
                                    
                                    if (i_1 == 0)
                                        zmm15 = var_528_4
                                        arg7 = var_598_1
                                    else
                                        zmm15 = var_528_4
                                        arg7 = var_598_1
                                        
                                        do
                                            zmm1 = _mm_add_epi32(zmm9, zmm9)
                                            zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
                                            zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), arg7)
                                            char temp0_1220 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_1220 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm4[0].q)
                                                
                                                if ((temp0_1220 & 2) != 0)
                                                    goto label_14020ce45
                                                
                                                goto label_14020ce9a
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm4[0].q)
                                            
                                            if ((temp0_1220 & 2) != 0)
                                            label_14020ce45:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                                
                                                if ((temp0_1220 & 4) == 0)
                                                    goto label_14020cea4
                                                
                                                goto label_14020ce5d
                                            
                                        label_14020ce9a:
                                            zmm0 = _mm_add_epi64(zmm0, zmm15)
                                            
                                            if ((temp0_1220 & 4) != 0)
                                            label_14020ce5d:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1220 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_14020cea4:
                                                
                                                if ((temp0_1220 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm0 = _mm_cmpgt_epi32(
                                                _mm_blend_epi16(zmm3, zx.o(0), 0xaa), arg8)
                                                & not.o(arg5)
                                            zmm2 = _mm_blendv_ps(zmm2, zmm9, zmm0)
                                            zmm4 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != i_1)
                                                zmm4 = zmm0 ^ arg5
                                            
                                            zmm9 = _mm_add_epi32(zmm9, arg11)
                                            arg5 = _mm_cmpgt_epi32(zmm9, zx.o(0)) & zmm4
                                            zmm0 = arg5 & zmm12
                                            i_1 = _mm_movemask_ps(zmm0)
                                        while (i_1 != 0)
                                    
                                    zmm9 = var_548_3
                                    arg5 = var_4f8_5
                                
                                arg9 = _mm_blendv_ps(arg9, zmm2, zmm12)
                                zmm1 = _mm_add_epi32(arg9, arg9)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), arg7)
                                
                                if ((rdx_7 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    zmm2 = var_568_2
                                    
                                    if ((rdx_7 & 2) != 0)
                                        goto label_14020d4d0
                                    
                                    goto label_14020d3ce
                                
                                arg8 = zx.o(*zmm1.q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                zmm2 = var_568_2
                                
                                if ((rdx_7 & 2) != 0)
                                label_14020d4d0:
                                    arg8 =
                                        _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                                    
                                    if ((rdx_7 & 4) == 0)
                                        goto label_14020d3dc
                                    
                                    goto label_14020d4ed
                                
                            label_14020d3ce:
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((rdx_7 & 4) != 0)
                                label_14020d4ed:
                                    arg8 = _mm_insert_epi32(arg8, zx.d(*zmm0.q), 2)
                                    
                                    if ((rdx_7 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_14020d3dc:
                                    
                                    if ((rdx_7 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                arg5 = _mm_blendv_ps(arg5, 
                                    _mm_sub_epi32(arg9, _mm_cmpeq_epi32(zmm0, zmm0)), zmm12)
                                arg6 = _mm_cmpgt_epi32(arg6, arg5) & not.o(zmm12)
                                
                                if (_mm_movemask_ps(arg6) != 0)
                                    arg5 = _mm_blendv_ps(arg5, zmm2, arg6)
                                
                                arg7 = var_588_4
                                arg11 = var_4c8_1
                                zmm1 = _mm_add_epi32(arg5, arg5)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                                zmm2 = _mm_add_epi64(var_598_1, zmm1)
                                
                                if ((rdx_7 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rdx_7 & 2) != 0)
                                        goto label_14020d532
                                    
                                    goto label_14020d469
                                
                                zmm1 = zx.o(*zmm2.q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rdx_7 & 2) != 0)
                                label_14020d532:
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm15 = _mm_add_epi64(zmm15, zmm0)
                                    
                                    if ((rdx_7 & 4) == 0)
                                        goto label_14020d477
                                    
                                    goto label_14020d54e
                                
                            label_14020d469:
                                zmm15 = _mm_add_epi64(zmm15, zmm0)
                                
                                if ((rdx_7 & 4) != 0)
                                label_14020d54e:
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm15[0].q), 2)
                                    zmm0 = zx.o(0)
                                    
                                    if ((rdx_7 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                                else
                                label_14020d477:
                                    zmm0 = zx.o(0)
                                    
                                    if ((rdx_7 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                                
                                arg8 = _mm_blend_epi16(arg8, zmm0, 0xaa)
                                zmm0 = _mm_blend_epi16(zx.o(0), zmm1, 0x55)
                            
                            zmm1 = var_518_3 ^ data_142d3f800
                            zmm2 = zx.o(0)
                            
                            if (arg14 != 1)
                                zmm0 =
                                    __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm0, arg8), data_142d3f5b0)
                                zmm2 = _mm_div_ps(
                                    _mm_sub_ps(_mm_shuffle_ps(var_488_3, var_488_3, 0), 
                                        _mm_cvtepi32_ps(arg8)), 
                                    _mm_cvtepi32_ps(zmm0))
                            
                            zmm1 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                            zmm15 = var_438_2
                            arg8 = var_418_2
                    
                    zmm9 = _mm_blendv_ps(zmm9, zmm1, temp0_1155)
                    zmm1 = arg9
                    var_488_2 = arg5
                    arg10 = var_538_2
                
                zmm12 = var_578_2
            
            zmm0 = var_468_1
            zmm2 = _mm_cvtepu32_epi64(zmm0.q)
            zmm3 = _mm_cvtepu32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
            int32_t var_528_5[0x4] = zmm1
            zmm0 = _mm_mullo_epi32(zmm1, zmm12)
            zmm1 = _mm_cvtepi32_epi64(zmm0.q)
            zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
            int32_t var_4b8_1[0x4] = zmm0
            int32_t var_468_2[0x4] = zmm3
            zmm0 = _mm_add_epi64(zmm0, zmm3)
            uint128_t var_4d8_1 = zmm1
            int32_t var_598_4[0x4] = zmm2
            uint128_t var_428_2 = _mm_add_epi64(_mm_add_epi64(zmm1, zmm2), arg10)
            uint128_t var_508_2 = __paddq_xmmdq_memdq(zmm0, var_5a8_1)
            arg9 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, var_478_4)
            zmm3 = arg9 & arg11
            zmm0 = _mm_slli_epi32(zmm3, 0x1f)
            int32_t var_548_4[0x4] = zmm9
            float var_568_3[0x4] = arg9
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm0 = var_558_1
                arg5 = zx.o(0)
                arg11 = _mm_cmpeq_epi32(data_143442c60 & zmm0, arg5)
                zmm4 = _mm_slli_epi32(zmm3 & arg11, 0x1f)
                char temp0_1355 = _mm_movemask_ps(zmm4)
                
                if (temp0_1355 != 0)
                    int32_t temp0_1356[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                    int32_t temp0_1357[0x4] = __paddq_xmmdq_memdq(zmm15, var_468_2)
                    arg7 = __paddq_xmmdq_memdq(arg8, var_598_4)
                    arg8 = data_1434426c0
                    arg7 = __paddq_xmmdq_memdq(arg7, var_4d8_1)
                    int32_t temp0_1361[0x4] =
                        _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1357, var_4b8_1), arg8)
                    arg7 = _mm_add_epi64(arg7, arg8)
                    zmm1 = _mm_shuffle_epi32(temp0_1356, 0x50)
                    float temp0_1364[0x4] = _mm_blendv_ps(zx.o(0), arg7, zmm1)
                    zmm4 = _mm_shuffle_epi32(temp0_1356, 0xfa)
                    arg7 = _mm_blendv_ps(zx.o(0), temp0_1361, zmm4)
                    int64_t rax_304 = _mm_extract_epi64(temp0_1364, 1)
                    void* rbp_41 = arg4 + rax_304
                    zmm12 = *(arg4 + rax_304)
                    int64_t rax_305 = arg7[0]
                    int64_t rsi_22 = _mm_extract_epi64(arg7, 1)
                    void* rdi_8 = arg4 + rax_305
                    arg7 = _mm_blendv_ps(zx.o(0), arg8, zmm1)
                    arg10 = *(arg4 + rax_305)
                    arg6 = _mm_blendv_ps(zx.o(0), arg8, zmm4)
                    int32_t var_518_5 = (*(arg4 + rsi_22)).d
                    void* rbx_32 = temp0_1364[0].q + arg4
                    zmm2 = *(arg7[0] + rbx_32)
                    zmm9 = *(_mm_extract_epi64(arg7, 1) + rbp_41)
                    zmm15 = *(arg6[0].q + rdi_8)
                    void* rsi_23 = arg4 + rsi_22
                    int32_t var_4f8_6 = (*(_mm_extract_epi64(arg6, 1) + rsi_23)).d
                    arg6 = data_1434426e0
                    arg7 = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                    float temp0_1370[0x4] = _mm_blendv_ps(arg5, arg6, zmm4)
                    arg6 = *(arg7[0] + rbx_32)
                    zmm4 = *(_mm_extract_epi64(arg7, 1) + rbp_41)
                    uint128_t* rax_312 = temp0_1370[0].q
                    uint128_t* rbp_42 = _mm_extract_epi64(temp0_1370, 1)
                    zmm1 = *(rax_312 + rdi_8)
                    zmm0 = *(rbp_42 + rsi_23)
                    bool cond:28_1
                    bool cond:29_1
                    bool cond:40_1
                    bool cond:41_1
                    
                    if ((temp0_1355 & 1) == 0)
                        char temp10_1 = temp0_1355 & 2
                        cond:28_1 = temp10_1 != 0
                        cond:29_1 = temp10_1 == 0
                        cond:40_1 = temp10_1 != 0
                        cond:41_1 = temp10_1 == 0
                        
                        if (temp10_1 == 0)
                            goto label_14020d9b5
                        
                        goto label_14020d94f
                    
                    arg8 = *rbx_32
                    char temp9_1 = temp0_1355 & 2
                    cond:28_1 = temp9_1 != 0
                    cond:29_1 = temp9_1 == 0
                    cond:40_1 = temp9_1 != 0
                    cond:41_1 = temp9_1 == 0
                    
                    if (temp9_1 == 0)
                    label_14020d9b5:
                        arg7 = var_588_4
                        arg5 = zmm2
                        
                        if (cond:29_1)
                            goto label_14020d961
                        
                        goto label_14020d9c0
                    
                label_14020d94f:
                    arg8 = _mm_insert_ps(arg8, zmm12, 0x10)
                    arg7 = var_588_4
                    arg5 = zmm2
                    
                    if (not(cond:28_1))
                    label_14020d961:
                        
                        if (cond:41_1)
                            goto label_14020d9c9
                        
                        goto label_14020d963
                    
                label_14020d9c0:
                    arg5 = _mm_insert_ps(arg5, zmm9, 0x10)
                    bool cond:54_1
                    bool cond:55_1
                    bool cond:65_1
                    bool cond:66_1
                    
                    if (not(cond:40_1))
                    label_14020d9c9:
                        char temp18_1 = temp0_1355 & 4
                        cond:54_1 = temp18_1 != 0
                        cond:55_1 = temp18_1 == 0
                        cond:65_1 = temp18_1 != 0
                        cond:66_1 = temp18_1 == 0
                        zmm9 = var_548_4
                        
                        if (temp18_1 == 0)
                            goto label_14020d974
                        
                        goto label_14020d9d4
                    
                label_14020d963:
                    arg6 = _mm_insert_ps(arg6, zmm4, 0x10)
                    char temp17_1 = temp0_1355 & 4
                    cond:54_1 = temp17_1 != 0
                    cond:55_1 = temp17_1 == 0
                    cond:65_1 = temp17_1 != 0
                    cond:66_1 = temp17_1 == 0
                    zmm9 = var_548_4
                    
                    if (temp17_1 == 0)
                    label_14020d974:
                        arg10 = var_538_2
                        zmm12 = var_578_2
                        
                        if (cond:55_1)
                            goto label_14020d9eb
                        
                        goto label_14020d984
                    
                label_14020d9d4:
                    arg8 = _mm_insert_ps(arg8, arg10, 0x20)
                    arg10 = var_538_2
                    zmm12 = var_578_2
                    
                    if (not(cond:54_1))
                    label_14020d9eb:
                        
                        if (cond:66_1)
                            goto label_14020d98d
                        
                        goto label_14020d9ed
                    
                label_14020d984:
                    arg5 = _mm_insert_ps(arg5, zmm15, 0x20)
                    bool cond:87_1
                    bool cond:88_1
                    bool cond:107_1
                    bool cond:108_1
                    
                    if (not(cond:65_1))
                    label_14020d98d:
                        char temp32_1 = temp0_1355 & 8
                        cond:87_1 = temp32_1 != 0
                        cond:88_1 = temp32_1 == 0
                        cond:107_1 = temp32_1 == 0
                        cond:108_1 = temp32_1 != 0
                        
                        if (temp32_1 == 0)
                            goto label_14020d9f8
                        
                        goto label_14020d992
                    
                label_14020d9ed:
                    arg6 = _mm_insert_ps(arg6, zmm1, 0x20)
                    char temp31_1 = temp0_1355 & 8
                    cond:87_1 = temp31_1 != 0
                    cond:88_1 = temp31_1 == 0
                    cond:107_1 = temp31_1 == 0
                    cond:108_1 = temp31_1 != 0
                    
                    if (temp31_1 == 0)
                    label_14020d9f8:
                        
                        if (cond:88_1)
                            goto label_14020d9a0
                        
                        goto label_14020d9fa
                    
                label_14020d992:
                    arg8 = __insertps_xmmps_memd_immb(arg8, var_518_5, 0x30)
                    
                    if (cond:87_1)
                    label_14020d9fa:
                        arg5 = __insertps_xmmps_memd_immb(arg5, var_4f8_6, 0x30)
                        
                        if (not(cond:107_1))
                            arg6 = _mm_insert_ps(arg6, zmm0, 0x30)
                    else
                    label_14020d9a0:
                        
                        if (cond:108_1)
                            arg6 = _mm_insert_ps(arg6, zmm0, 0x30)
                
                arg11 &= not.o(zmm3)
                zmm4 = _mm_slli_epi32(arg11, 0x1f)
                char temp0_1381 = _mm_movemask_ps(zmm4)
                
                if (temp0_1381 == 0)
                    arg11 = var_4c8_1
                else
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f)
                    zmm4 = _mm_srai_epi32(zmm4, 0x1f) & zmm1
                    float var_518_6[0x4] = arg5
                    zmm3 = arg7
                    arg10 = arg6
                    
                    if (_mm_movemask_ps(zmm4) == 0)
                        arg9 = var_428_2
                        zmm9 = var_508_2
                    else
                        zmm2 = data_1434426c0
                        zmm9 = var_508_2
                        int32_t temp0_1386[0x4] = _mm_add_epi64(zmm9, zmm2)
                        arg9 = var_428_2
                        arg7 = _mm_add_epi64(arg9, zmm2)
                        float temp0_1388[0x4] = _mm_unpacklo_ps(zmm4, zmm4[0].q)
                        arg9 = _mm_blendv_ps(arg9, arg7, temp0_1388)
                        int32_t temp0_1390[0x4] = _mm_unpackhi_epi32(zmm4, zmm4[0].q)
                        zmm9 = _mm_blendv_ps(zmm9, temp0_1386, temp0_1390)
                        int32_t temp0_1392[0x4] = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                        arg7 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_418_2, var_598_4), 
                            var_4d8_1)
                        int32_t temp0_1396[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1392, var_4b8_1), zmm2)
                        float temp0_1398[0x4] =
                            _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg7, zmm2), temp0_1388)
                        arg7 = _mm_blendv_ps(zx.o(0), temp0_1396, temp0_1390)
                        arg5 = *(arg4 + temp0_1398[0].q)
                        int64_t rax_315 = _mm_extract_epi64(temp0_1398, 1)
                        int64_t rbp_43 = arg7[0]
                        int64_t rbx_33 = _mm_extract_epi64(arg7, 1)
                        arg5 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg5, *(arg4 + rax_315), 0x10), 
                                *(arg4 + rbp_43), 0x20), 
                            *(arg4 + rbx_33), 0x30)
                    
                    zmm4 = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                    
                    if ((temp0_1381 & 1) != 0)
                        arg8 = _mm_blend_ps(arg8, zmm4, 1)
                        zmm0 = var_558_1
                        arg7 = zmm3
                        
                        if ((temp0_1381 & 2) != 0)
                            goto label_14020dba2
                        
                        goto label_14020db80
                    
                    zmm0 = var_558_1
                    arg7 = zmm3
                    
                    if ((temp0_1381 & 2) != 0)
                    label_14020dba2:
                        arg8 = _mm_blend_ps(arg8, zmm4, 2)
                        
                        if ((temp0_1381 & 4) != 0)
                            goto label_14020db85
                        
                        goto label_14020dbae
                    
                label_14020db80:
                    
                    if ((temp0_1381 & 4) == 0)
                    label_14020dbae:
                        
                        if ((temp0_1381 & 8) != 0)
                            arg8 = _mm_blend_ps(arg8, zmm4, 8)
                    else
                    label_14020db85:
                        arg8 = _mm_blend_ps(arg8, zmm4, 4)
                        
                        if ((temp0_1381 & 8) != 0)
                            arg8 = _mm_blend_ps(arg8, zmm4, 8)
                    
                    arg5 = data_143442c40
                    zmm1 = zmm0 & arg5
                    arg5 = _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm1) & arg11, 0x1f)
                    char temp0_1410 = _mm_movemask_ps(arg5)
                    
                    if (temp0_1410 == 0)
                        arg5 = var_518_6
                        arg6 = arg10
                        arg10 = var_538_2
                        zmm12 = var_578_2
                    else
                        arg5 = _mm_srai_epi32(arg5, 0x1f)
                        zmm2 = data_1434426c0
                        int32_t temp0_1412[0x4] = _mm_add_epi64(zmm9, zmm2)
                        zmm4 = _mm_blendv_ps(arg9, _mm_add_epi64(zmm2, arg9), 
                            _mm_shuffle_epi32(arg5, 0x50))
                        zmm0 = _mm_shuffle_epi32(arg5, 0xfa)
                        float temp0_1417[0x4] = _mm_blendv_ps(zmm9, temp0_1412, zmm0)
                        
                        if ((temp0_1410 & 1) != 0)
                            zmm0 = *arg9[0].q
                        
                        if ((temp0_1410 & 2) != 0)
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg9, 1), 0x10)
                        
                        arg6 = arg10
                        arg10 = var_538_2
                        zmm12 = var_578_2
                        
                        if ((temp0_1410 & 4) != 0)
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm9[0].q, 0x20)
                        
                        if ((temp0_1410 & 8) != 0)
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm9, 1), 0x30)
                        
                        arg9 = zmm4
                        zmm9 = temp0_1417
                        arg5 = var_518_6
                    
                    zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                    
                    if ((temp0_1381 & 1) != 0)
                        arg5 = _mm_blend_epi16(arg5, zmm1, 3)
                        
                        if ((temp0_1381 & 2) != 0)
                            goto label_14020dcd7
                        
                        goto label_14020dcc0
                    
                    if ((temp0_1381 & 2) != 0)
                    label_14020dcd7:
                        arg5 = _mm_blend_epi16(arg5, zmm1, 0xc)
                        
                        if ((temp0_1381 & 4) != 0)
                            goto label_14020dcc5
                        
                        goto label_14020dce2
                    
                label_14020dcc0:
                    
                    if ((temp0_1381 & 4) == 0)
                    label_14020dce2:
                        
                        if ((temp0_1381 & 8) != 0)
                            arg5 = _mm_blend_epi16(arg5, zmm1, 0xc0)
                    else
                    label_14020dcc5:
                        arg5 = _mm_blend_epi16(arg5, zmm1, 0x30)
                        
                        if ((temp0_1381 & 8) != 0)
                            arg5 = _mm_blend_epi16(arg5, zmm1, 0xc0)
                    
                    zmm1 = data_143442c50
                    zmm0 = var_558_1 & zmm1
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm0)
                    char temp0_1428 = _mm_movemask_ps(_mm_slli_epi32(arg11 & zmm1, 0x1f))
                    
                    if (temp0_1428 == 0)
                        zmm9 = var_548_4
                        arg11 = var_4c8_1
                        arg9 = var_568_3
                    else
                        if ((temp0_1428 & 1) == 0)
                            if ((temp0_1428 & 2) != 0)
                                goto label_14020df34
                            
                            goto label_14020dd2f
                        
                        zmm1 = *arg9[0].q
                        
                        if ((temp0_1428 & 2) != 0)
                        label_14020df34:
                            zmm1 =
                                __insertps_xmmps_memd_immb(zmm1, *_mm_extract_epi64(arg9, 1), 0x10)
                            arg9 = var_568_3
                            arg11 = var_4c8_1
                            
                            if ((temp0_1428 & 4) == 0)
                                goto label_14020dd4a
                            
                            goto label_14020df5a
                        
                    label_14020dd2f:
                        arg9 = var_568_3
                        arg11 = var_4c8_1
                        
                        if ((temp0_1428 & 4) != 0)
                        label_14020df5a:
                            zmm1 = __insertps_xmmps_memd_immb(zmm1, *zmm9[0].q, 0x20)
                            
                            if ((temp0_1428 & 8) != 0)
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(zmm9, 1), 0x30)
                        else
                        label_14020dd4a:
                            
                            if ((temp0_1428 & 8) != 0)
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(zmm9, 1), 0x30)
                        
                        zmm9 = var_548_4
                    
                    zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                    
                    if ((temp0_1381 & 1) != 0)
                        arg6 = _mm_blend_ps(arg6, zmm0, 1)
                        
                        if ((temp0_1381 & 2) != 0)
                            goto label_14020ddaf
                        
                        goto label_14020dd98
                    
                    if ((temp0_1381 & 2) != 0)
                    label_14020ddaf:
                        arg6 = _mm_blend_ps(arg6, zmm0, 2)
                        
                        if ((temp0_1381 & 4) != 0)
                            goto label_14020dd9d
                        
                        goto label_14020ddba
                    
                label_14020dd98:
                    
                    if ((temp0_1381 & 4) == 0)
                    label_14020ddba:
                        
                        if ((temp0_1381 & 8) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 8)
                    else
                    label_14020dd9d:
                        arg6 = _mm_blend_ps(arg6, zmm0, 4)
                        
                        if ((temp0_1381 & 8) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 8)
            
            uint128_t var_4f8_7 = _mm_cmpeq_epi32(zmm0, zmm0) ^ arg9
            
            if (_mm_movemask_ps(_mm_slli_epi32(arg9 & not.o(arg11), 0x1f)) == 0)
                zmm15 = var_528_5
            else
                if (temp0_1115 != 0)
                    float var_518_7[0x4] = arg5
                    arg5 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f) & arg7
                    zmm1 = var_4e8_4 & arg5
                    float var_4e8_5[0x4] = zx.o(0)
                    uint32_t temp0_1440 = _mm_movemask_ps(zmm1)
                    zmm12 = arg10
                    zmm15 = var_5a8_1
                    arg10 = zx.o(0)
                    zmm9 = zx.o(0)
                    
                    if (temp0_1440 != 0)
                        zmm4 = data_1434426c0
                        arg7 = var_5a8_1
                        int32_t temp0_1441[0x4] = _mm_add_epi64(arg7, zmm4)
                        zmm2 = var_538_2
                        int32_t temp0_1442[0x4] = _mm_add_epi64(zmm2, zmm4)
                        arg9 = _mm_unpacklo_epi32(zmm1, zmm1.q)
                        arg11 = _mm_blendv_ps(zmm2, temp0_1442, arg9)
                        zmm1 = _mm_unpackhi_ps(zmm1, zmm1)
                        zmm0 = zmm1
                        zmm3 = _mm_blendv_ps(arg7, temp0_1441, zmm0)
                        char rdx_16 = temp0_1440.b
                        
                        if ((rdx_16 & 1) == 0)
                            if ((rdx_16 & 2) != 0)
                                goto label_14020df88
                            
                            goto label_14020deb2
                        
                        zmm0 = *zmm2[0].q
                        
                        if ((rdx_16 & 2) != 0)
                        label_14020df88:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm2, 1), 0x10)
                            arg6 = arg6
                            
                            if ((rdx_16 & 4) == 0)
                                goto label_14020debf
                            
                            goto label_14020dfa5
                        
                    label_14020deb2:
                        arg6 = arg6
                        
                        if ((rdx_16 & 4) == 0)
                        label_14020debf:
                            
                            if ((rdx_16 & 8) != 0)
                                goto label_14020dfc0
                            
                            goto label_14020dec8
                        
                    label_14020dfa5:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0], 0x20)
                        char rbp_48
                        
                        if ((rdx_16 & 8) != 0)
                        label_14020dfc0:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                            rbp_48 = _mm_movemask_ps(arg5)
                            arg10 = zx.o(0)
                            
                            if ((rbp_48 & 1) != 0)
                                goto label_14020deda
                            
                            goto label_14020dfd8
                        
                    label_14020dec8:
                        rbp_48 = _mm_movemask_ps(arg5)
                        arg10 = zx.o(0)
                        
                        if ((rbp_48 & 1) != 0)
                        label_14020deda:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 3)
                            
                            if ((rbp_48 & 2) != 0)
                                goto label_14020dfe2
                            
                            goto label_14020deeb
                        
                    label_14020dfd8:
                        
                        if ((rbp_48 & 2) != 0)
                        label_14020dfe2:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 0xc)
                            
                            if ((rbp_48 & 4) != 0)
                                goto label_14020def5
                            
                            goto label_14020dff3
                        
                    label_14020deeb:
                        
                        if ((rbp_48 & 4) == 0)
                        label_14020dff3:
                            
                            if ((rbp_48 & 8) != 0)
                                arg10 = _mm_blend_epi16(arg10, zmm0, 0xc0)
                        else
                        label_14020def5:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 0x30)
                            
                            if ((rbp_48 & 8) != 0)
                                arg10 = _mm_blend_epi16(arg10, zmm0, 0xc0)
                        
                        arg5 = _mm_add_epi64(zmm3, zmm4)
                        zmm12 = _mm_blendv_ps(arg11, _mm_add_epi64(zmm4, arg11), arg9)
                        zmm0 = zmm1
                        zmm15 = _mm_blendv_ps(zmm3, arg5, zmm0)
                        
                        if ((rdx_16 & 1) == 0)
                            if ((rdx_16 & 2) != 0)
                                goto label_14020e087
                            
                            goto label_14020e032
                        
                        zmm0 = *arg11[0]
                        
                        if ((rdx_16 & 2) != 0)
                        label_14020e087:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg11, 1), 0x10)
                            arg11 = var_4c8_1
                            
                            if ((rdx_16 & 4) == 0)
                                goto label_14020e041
                            
                            goto label_14020e0a1
                        
                    label_14020e032:
                        arg11 = var_4c8_1
                        
                        if ((rdx_16 & 4) == 0)
                        label_14020e041:
                            
                            if ((rdx_16 & 8) != 0)
                                goto label_14020e0b3
                            
                            goto label_14020e046
                        
                    label_14020e0a1:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm3[0].q, 0x20)
                        
                        if ((rdx_16 & 8) != 0)
                        label_14020e0b3:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm3, 1), 0x30)
                            zmm9 = zx.o(0)
                            
                            if ((rbp_48 & 1) != 0)
                                goto label_14020e050
                            
                            goto label_14020e0c3
                        
                    label_14020e046:
                        zmm9 = zx.o(0)
                        
                        if ((rbp_48 & 1) != 0)
                        label_14020e050:
                            zmm9 = _mm_blend_ps(zmm9, zmm0, 1)
                            
                            if ((rbp_48 & 2) != 0)
                                goto label_14020e0c9
                            
                            goto label_14020e05d
                        
                    label_14020e0c3:
                        
                        if ((rbp_48 & 2) != 0)
                        label_14020e0c9:
                            zmm9 = _mm_blend_ps(zmm9, zmm0, 2)
                            
                            if ((rbp_48 & 4) != 0)
                                goto label_14020e063
                            
                            goto label_14020e0d6
                        
                    label_14020e05d:
                        
                        if ((rbp_48 & 4) == 0)
                        label_14020e0d6:
                            
                            if ((rbp_48 & 8) != 0)
                                zmm9 = _mm_blend_ps(zmm9, zmm0, 8)
                        else
                        label_14020e063:
                            zmm9 = _mm_blend_ps(zmm9, zmm0, 4)
                            
                            if ((rbp_48 & 8) != 0)
                                zmm9 = _mm_blend_ps(zmm9, zmm0, 8)
                    
                    zmm0 = data_143442c40
                    zmm2 = var_558_1
                    arg5 = _mm_cmpeq_epi32(zmm2 & zmm0, zmm0) & var_588_4
                    zmm3 = _mm_slli_epi32(arg5 & arg11, 0x1f)
                    char temp0_1471 = _mm_movemask_ps(zmm3)
                    int32_t var_458_4[0x4] = arg6
                    
                    if (temp0_1471 == 0)
                        arg9 = zx.o(0)
                        arg6 = zmm2
                    else
                        int32_t temp0_1472[0x4] = _mm_srai_epi32(zmm3, 0x1f)
                        zmm4 = data_1434426c0
                        int32_t temp0_1473[0x4] = _mm_add_epi64(zmm15, zmm4)
                        arg7 = _mm_add_epi64(zmm12, zmm4)
                        zmm1 = _mm_shuffle_epi32(temp0_1472, 0x50)
                        float temp0_1476[0x4] = _mm_blendv_ps(zmm12, arg7, zmm1)
                        zmm3 = _mm_shuffle_epi32(temp0_1472, 0xfa)
                        zmm0 = zmm3
                        arg7 = _mm_blendv_ps(zmm15, temp0_1473, zmm0)
                        
                        if ((temp0_1471 & 1) == 0)
                            if ((temp0_1471 & 2) != 0)
                                goto label_14020e1cd
                            
                            goto label_14020e174
                        
                        zmm0 = *zmm12[0].q
                        
                        if ((temp0_1471 & 2) != 0)
                        label_14020e1cd:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm12, 1), 0x10)
                            
                            if ((temp0_1471 & 4) == 0)
                                goto label_14020e179
                            
                            goto label_14020e1dd
                        
                    label_14020e174:
                        
                        if ((temp0_1471 & 4) == 0)
                        label_14020e179:
                            
                            if ((temp0_1471 & 8) != 0)
                                goto label_14020e1ef
                            
                            goto label_14020e17e
                        
                    label_14020e1dd:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm15[0].q, 0x20)
                        char rbp_49
                        
                        if ((temp0_1471 & 8) != 0)
                        label_14020e1ef:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm15, 1), 0x30)
                            rbp_49 = _mm_movemask_ps(arg5)
                            arg5 = zx.o(0)
                            
                            if ((rbp_49 & 1) != 0)
                                goto label_14020e18a
                            
                            goto label_14020e201
                        
                    label_14020e17e:
                        rbp_49 = _mm_movemask_ps(arg5)
                        arg5 = zx.o(0)
                        
                        if ((rbp_49 & 1) != 0)
                        label_14020e18a:
                            arg5 = _mm_blend_ps(arg5, zmm0, 1)
                            
                            if ((rbp_49 & 2) != 0)
                                goto label_14020e207
                            
                            goto label_14020e196
                        
                    label_14020e201:
                        
                        if ((rbp_49 & 2) != 0)
                        label_14020e207:
                            arg5 = _mm_blend_ps(arg5, zmm0, 2)
                            
                            if ((rbp_49 & 4) != 0)
                                goto label_14020e19c
                            
                            goto label_14020e213
                        
                    label_14020e196:
                        
                        if ((rbp_49 & 4) == 0)
                        label_14020e213:
                            
                            if ((rbp_49 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm0, 8)
                        else
                        label_14020e19c:
                            arg5 = _mm_blend_ps(arg5, zmm0, 4)
                            
                            if ((rbp_49 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm0, 8)
                        
                        var_4e8_5 = arg5
                        arg5 = _mm_add_epi64(arg7, zmm4)
                        zmm12 = _mm_blendv_ps(temp0_1476, _mm_add_epi64(zmm4, temp0_1476), zmm1)
                        zmm0 = zmm3
                        zmm15 = _mm_blendv_ps(arg7, arg5, zmm0)
                        
                        if ((temp0_1471 & 1) == 0)
                            if ((temp0_1471 & 2) != 0)
                                goto label_14020e2aa
                            
                            goto label_14020e258
                        
                        zmm0 = *temp0_1476[0].q
                        
                        if ((temp0_1471 & 2) != 0)
                        label_14020e2aa:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_1476, 1), 0x10)
                            
                            if ((temp0_1471 & 4) == 0)
                                goto label_14020e25d
                            
                            goto label_14020e2ba
                        
                    label_14020e258:
                        
                        if ((temp0_1471 & 4) == 0)
                        label_14020e25d:
                            
                            if ((temp0_1471 & 8) != 0)
                                goto label_14020e2cc
                            
                            goto label_14020e262
                        
                    label_14020e2ba:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg7[0], 0x20)
                        
                        if ((temp0_1471 & 8) != 0)
                        label_14020e2cc:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg7, 1), 0x30)
                            arg6 = var_558_1
                            arg9 = zx.o(0)
                            
                            if ((rbp_49 & 1) != 0)
                                goto label_14020e273
                            
                            goto label_14020e2e3
                        
                    label_14020e262:
                        arg6 = var_558_1
                        arg9 = zx.o(0)
                        
                        if ((rbp_49 & 1) != 0)
                        label_14020e273:
                            arg9 = _mm_blend_epi16(arg9, zmm0, 3)
                            
                            if ((rbp_49 & 2) != 0)
                                goto label_14020e2e9
                            
                            goto label_14020e280
                        
                    label_14020e2e3:
                        
                        if ((rbp_49 & 2) != 0)
                        label_14020e2e9:
                            arg9 = _mm_blend_epi16(arg9, zmm0, 0xc)
                            
                            if ((rbp_49 & 4) != 0)
                                goto label_14020e286
                            
                            goto label_14020e2f6
                        
                    label_14020e280:
                        
                        if ((rbp_49 & 4) == 0)
                        label_14020e2f6:
                            
                            if ((rbp_49 & 8) != 0)
                                arg9 = _mm_blend_epi16(arg9, zmm0, 0xc0)
                        else
                        label_14020e286:
                            arg9 = _mm_blend_epi16(arg9, zmm0, 0x30)
                            
                            if ((rbp_49 & 8) != 0)
                                arg9 = _mm_blend_epi16(arg9, zmm0, 0xc0)
                    
                    zmm0 = data_143442c50
                    arg6 = _mm_cmpeq_epi32(arg6 & zmm0, zmm0) & var_588_4
                    arg5 = _mm_slli_epi32(arg6 & arg11, 0x1f)
                    char temp0_1501 = _mm_movemask_ps(arg5)
                    zmm3 = zx.o(0)
                    zmm2 = zx.o(0)
                    
                    if (temp0_1501 != 0)
                        arg5 = _mm_srai_epi32(arg5, 0x1f)
                        zmm2 = data_1434426c0
                        int32_t temp0_1503[0x4] = _mm_add_epi64(zmm15, zmm2)
                        zmm4 = _mm_blendv_ps(zmm12, _mm_add_epi64(zmm2, zmm12), 
                            _mm_shuffle_epi32(arg5, 0x50))
                        zmm0 = _mm_shuffle_epi32(arg5, 0xfa)
                        float temp0_1508[0x4] = _mm_blendv_ps(zmm15, temp0_1503, zmm0)
                        
                        if ((temp0_1501 & 1) == 0)
                            if ((temp0_1501 & 2) != 0)
                                goto label_14020e44f
                            
                            goto label_14020e38a
                        
                        zmm0 = *zmm12[0].q
                        
                        if ((temp0_1501 & 2) != 0)
                        label_14020e44f:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm12, 1), 0x10)
                            
                            if ((temp0_1501 & 4) == 0)
                                goto label_14020e393
                            
                            goto label_14020e463
                        
                    label_14020e38a:
                        
                        if ((temp0_1501 & 4) == 0)
                        label_14020e393:
                            
                            if ((temp0_1501 & 8) != 0)
                                goto label_14020e479
                            
                            goto label_14020e39c
                        
                    label_14020e463:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm15[0].q, 0x20)
                        char rbp_50
                        
                        if ((temp0_1501 & 8) != 0)
                        label_14020e479:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm15, 1), 0x30)
                            rbp_50 = _mm_movemask_ps(arg6)
                            zmm3 = zx.o(0)
                            
                            if ((rbp_50 & 1) != 0)
                                goto label_14020e3ac
                            
                            goto label_14020e48f
                        
                    label_14020e39c:
                        rbp_50 = _mm_movemask_ps(arg6)
                        zmm3 = zx.o(0)
                        
                        if ((rbp_50 & 1) != 0)
                        label_14020e3ac:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 1)
                            
                            if ((rbp_50 & 2) != 0)
                                goto label_14020e499
                            
                            goto label_14020e3bc
                        
                    label_14020e48f:
                        
                        if ((rbp_50 & 2) != 0)
                        label_14020e499:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                            
                            if ((rbp_50 & 4) != 0)
                                goto label_14020e3c6
                            
                            goto label_14020e4a9
                        
                    label_14020e3bc:
                        
                        if ((rbp_50 & 4) != 0)
                        label_14020e3c6:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                            
                            if ((rbp_50 & 8) != 0)
                                goto label_14020e4b3
                            
                            goto label_14020e3d6
                        
                    label_14020e4a9:
                        
                        if ((rbp_50 & 8) != 0)
                        label_14020e4b3:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                            
                            if ((temp0_1501 & 1) == 0)
                                goto label_14020e3df
                            
                            goto label_14020e4c7
                        
                    label_14020e3d6:
                        
                        if ((temp0_1501 & 1) == 0)
                        label_14020e3df:
                            
                            if ((temp0_1501 & 2) != 0)
                                goto label_14020e4db
                            
                            goto label_14020e3e8
                        
                    label_14020e4c7:
                        zmm0 = *zmm4[0].q
                        
                        if ((temp0_1501 & 2) != 0)
                        label_14020e4db:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm4, 1), 0x10)
                            
                            if ((temp0_1501 & 4) == 0)
                                goto label_14020e3f1
                            
                            goto label_14020e4ef
                        
                    label_14020e3e8:
                        
                        if ((temp0_1501 & 4) == 0)
                        label_14020e3f1:
                            
                            if ((temp0_1501 & 8) != 0)
                                goto label_14020e505
                            
                            goto label_14020e3fa
                        
                    label_14020e4ef:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1508[0].q, 0x20)
                        
                        if ((temp0_1501 & 8) != 0)
                        label_14020e505:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_1508, 1), 0x30)
                            zmm2 = zx.o(0)
                            
                            if ((rbp_50 & 1) != 0)
                                goto label_14020e407
                            
                            goto label_14020e518
                        
                    label_14020e3fa:
                        zmm2 = zx.o(0)
                        
                        if ((rbp_50 & 1) != 0)
                        label_14020e407:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 1)
                            
                            if ((rbp_50 & 2) != 0)
                                goto label_14020e522
                            
                            goto label_14020e417
                        
                    label_14020e518:
                        
                        if ((rbp_50 & 2) != 0)
                        label_14020e522:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 2)
                            
                            if ((rbp_50 & 4) != 0)
                                goto label_14020e421
                            
                            goto label_14020e532
                        
                    label_14020e417:
                        
                        if ((rbp_50 & 4) == 0)
                        label_14020e532:
                            
                            if ((rbp_50 & 8) != 0)
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                        else
                        label_14020e421:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 4)
                            
                            if ((rbp_50 & 8) != 0)
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                    
                    int32_t temp0_1525[0x4] = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                    arg5 = __paddq_xmmdq_memdq(var_418_2, var_598_4)
                    zmm0 = data_1434426c0
                    arg5 = __paddq_xmmdq_memdq(arg5, var_4d8_1)
                    int32_t temp0_1529[0x4] =
                        _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1525, var_4b8_1), zmm0)
                    zmm1 = var_498_3
                    int32_t temp0_1532[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, zmm0), 
                        _mm_shuffle_epi32(zmm1, 0x50))
                    arg7 = _mm_blendv_ps(zx.o(0), temp0_1529, _mm_shuffle_epi32(zmm1, 0xfa))
                    int64_t rax_349 = temp0_1532[0].q
                    int64_t rdx_21 = _mm_extract_epi64(temp0_1532, 1)
                    int64_t rbp_51 = _mm_extract_epi64(arg7, 1)
                    zmm0 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_349)), *(arg4 + rdx_21), 1), 
                            *(arg4 + arg7[0]), 2), 
                        *(arg4 + rbp_51), 3)
                    zmm4 = _mm_srli_epi32(zmm0, 0x15)
                    arg5 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    arg10 = _mm_add_ps(arg10, 
                        _mm_mul_ps(zmm9, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    zmm0 = data_143442440
                    float temp0_1546[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                    arg6 = data_143442690
                    float temp0_1548[0x4] = _mm_mul_ps(arg9, _mm_div_ps(temp0_1546, arg6))
                    zmm4 = _mm_add_epi32(zmm4, zmm0)
                    zmm0 = _mm_div_ps(_mm_cvtepi32_ps(zmm4), arg6)
                    char temp25_1 = temp0_1115 & 1
                    
                    if (temp25_1 != 0)
                        arg8 = _mm_blend_ps(arg8, arg10, 1)
                    
                    arg7 = var_588_4
                    arg5 = var_518_7
                    arg6 = var_458_4
                    float temp0_1553[0x4] = _mm_mul_ps(zmm2, zmm0)
                    zmm1 = _mm_add_ps(var_4e8_5, temp0_1548)
                    
                    if (temp25_1 != 0)
                        arg5 = _mm_blend_ps(arg5, zmm1, 1)
                        arg9 = var_568_3
                        zmm3 = _mm_add_ps(zmm3, temp0_1553)
                        
                        if (temp25_1 != 0)
                            goto label_14020e87b
                        
                        goto label_14020e68a
                    
                    arg9 = var_568_3
                    zmm3 = _mm_add_ps(zmm3, temp0_1553)
                    bool cond:120_1
                    bool cond:121_1
                    bool cond:140_1
                    bool cond:141_1
                    
                    if (temp25_1 != 0)
                    label_14020e87b:
                        arg6 = _mm_blend_ps(arg6, zmm3, 1)
                        char temp41_1 = temp0_1115 & 2
                        cond:120_1 = temp41_1 == 0
                        cond:121_1 = temp41_1 != 0
                        cond:140_1 = temp41_1 == 0
                        cond:141_1 = temp41_1 != 0
                        
                        if (temp41_1 != 0)
                            goto label_14020e693
                        
                        goto label_14020e88a
                    
                label_14020e68a:
                    char temp40_1 = temp0_1115 & 2
                    cond:120_1 = temp40_1 == 0
                    cond:121_1 = temp40_1 != 0
                    cond:140_1 = temp40_1 == 0
                    cond:141_1 = temp40_1 != 0
                    
                    if (temp40_1 == 0)
                    label_14020e88a:
                        
                        if (not(cond:120_1))
                        label_14020e890:
                            arg5 = _mm_blend_ps(arg5, zmm1, 2)
                            
                            if (cond:141_1)
                                goto label_14020e6a6
                            
                            goto label_14020e89c
                    else
                    label_14020e693:
                        arg8 = _mm_blend_ps(arg8, arg10, 2)
                        
                        if (cond:121_1)
                            goto label_14020e890
                    
                    bool cond:174_1
                    bool cond:175_1
                    bool cond:198_1
                    bool cond:199_1
                    
                    if (not(cond:140_1))
                    label_14020e6a6:
                        arg6 = _mm_blend_ps(arg6, zmm3, 2)
                        char temp63_1 = temp0_1115 & 4
                        cond:174_1 = temp63_1 == 0
                        cond:175_1 = temp63_1 != 0
                        cond:198_1 = temp63_1 == 0
                        cond:199_1 = temp63_1 != 0
                        
                        if (temp63_1 != 0)
                            goto label_14020e8a5
                        
                        goto label_14020e6b5
                    
                label_14020e89c:
                    char temp62_1 = temp0_1115 & 4
                    cond:174_1 = temp62_1 == 0
                    cond:175_1 = temp62_1 != 0
                    cond:198_1 = temp62_1 == 0
                    cond:199_1 = temp62_1 != 0
                    
                    if (temp62_1 == 0)
                    label_14020e6b5:
                        
                        if (not(cond:174_1))
                        label_14020e6bb:
                            arg5 = _mm_blend_ps(arg5, zmm1, 4)
                            
                            if (cond:199_1)
                                goto label_14020e8b8
                            
                            goto label_14020e6c7
                    else
                    label_14020e8a5:
                        arg8 = _mm_blend_ps(arg8, arg10, 4)
                        
                        if (cond:175_1)
                            goto label_14020e6bb
                    
                    bool cond:243_1
                    bool cond:244_1
                    bool cond:269_1
                    bool cond:270_1
                    
                    if (not(cond:198_1))
                    label_14020e8b8:
                        arg6 = _mm_blend_ps(arg6, zmm3, 4)
                        char temp86_1 = temp0_1115 & 8
                        cond:243_1 = temp86_1 == 0
                        cond:244_1 = temp86_1 != 0
                        cond:269_1 = temp86_1 == 0
                        cond:270_1 = temp86_1 != 0
                        
                        if (temp86_1 != 0)
                            goto label_14020e6d0
                        
                        goto label_14020e8c7
                    
                label_14020e6c7:
                    char temp85_1 = temp0_1115 & 8
                    cond:243_1 = temp85_1 == 0
                    cond:244_1 = temp85_1 != 0
                    cond:269_1 = temp85_1 == 0
                    cond:270_1 = temp85_1 != 0
                    
                    if (temp85_1 != 0)
                    label_14020e6d0:
                        arg8 = _mm_blend_ps(arg8, arg10, 8)
                        arg10 = var_538_2
                        zmm12 = var_578_2
                        
                        if (cond:244_1)
                            goto label_14020e8db
                        
                        goto label_14020e6eb
                    
                label_14020e8c7:
                    arg10 = var_538_2
                    zmm12 = var_578_2
                    
                    if (cond:243_1)
                    label_14020e6eb:
                        
                        if (not(cond:269_1))
                            arg6 = _mm_blend_ps(arg6, zmm3, 8)
                    else
                    label_14020e8db:
                        arg5 = _mm_blend_ps(arg5, zmm1, 8)
                        
                        if (cond:270_1)
                            arg6 = _mm_blend_ps(arg6, zmm3, 8)
                
                zmm9 = arg7 ^ var_4f8_7
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm9 & arg11, 0x1f)) == 0)
                    zmm9 = var_548_4
                    zmm15 = var_528_5
                else
                    int32_t temp0_1564[0x4] = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_478_4)
                    arg9 = temp0_1564 & arg11
                    zmm2 = _mm_slli_epi32(arg9, 0x1f)
                    char temp0_1566 = _mm_movemask_ps(zmm2)
                    
                    if (temp0_1566 == 0)
                        arg9 = var_568_3
                    else
                        arg11 = arg6
                        arg10 = arg5
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f) & zmm1
                        
                        if (_mm_movemask_ps(zmm2) == 0)
                            zmm12 = var_428_2
                        else
                            arg6 = data_1434426b0
                            zmm4 = var_508_2
                            arg7 = _mm_add_epi64(zmm4, arg6)
                            zmm12 = var_428_2
                            int32_t temp0_1572[0x4] = _mm_add_epi64(arg6, zmm12)
                            zmm3 = _mm_unpacklo_ps(zmm2, zmm2[0].q)
                            zmm12 = _mm_blendv_ps(zmm12, temp0_1572, zmm3)
                            float temp0_1575[0x4] = _mm_unpackhi_ps(zmm2, zmm2)
                            var_508_2 = _mm_blendv_ps(zmm4, arg7, temp0_1575)
                            int32_t temp0_1577[0x4] = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                            arg7 = __paddq_xmmdq_memdq(var_418_2, var_598_4)
                            zmm0 = data_1434426c0
                            arg7 = __paddq_xmmdq_memdq(arg7, var_4d8_1)
                            int32_t temp0_1581[0x4] =
                                _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1577, var_4b8_1), zmm0)
                            float temp0_1583[0x4] =
                                _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg7, zmm0), zmm3)
                            zmm4 = _mm_blendv_ps(zx.o(0), temp0_1581, temp0_1575)
                            int64_t rax_352 = _mm_extract_epi64(temp0_1583, 1)
                            int64_t rdx_22 = temp0_1583[0].q
                            int64_t rbp_52 = zmm4[0].q
                            int64_t rbx_35 = _mm_extract_epi64(zmm4, 1)
                            zmm3 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdx_22)), 
                                            *(arg4 + rax_352), 1), 
                                        *(arg4 + rbp_52), 2), 
                                    *(arg4 + rbx_35), 3).q), 
                                data_143442b40))
                        
                        zmm0 = zmm1
                        float temp0_1597[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm0)
                        
                        if ((temp0_1566 & 1) != 0)
                            arg8 = _mm_blend_ps(arg8, temp0_1597, 1)
                            arg6 = arg11
                            arg11 = var_4c8_1
                            
                            if ((temp0_1566 & 2) != 0)
                                goto label_14020e96a
                            
                            goto label_14020e944
                        
                        arg6 = arg11
                        arg11 = var_4c8_1
                        
                        if ((temp0_1566 & 2) != 0)
                        label_14020e96a:
                            arg8 = _mm_blend_ps(arg8, temp0_1597, 2)
                            
                            if ((temp0_1566 & 4) != 0)
                                goto label_14020e949
                            
                            goto label_14020e976
                        
                    label_14020e944:
                        
                        if ((temp0_1566 & 4) == 0)
                        label_14020e976:
                            
                            if ((temp0_1566 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, temp0_1597, 8)
                        else
                        label_14020e949:
                            arg8 = _mm_blend_ps(arg8, temp0_1597, 4)
                            
                            if ((temp0_1566 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, temp0_1597, 8)
                        
                        zmm1 = data_143442c40
                        zmm3 = var_558_1 & zmm1
                        zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm3) & arg9, 0x1f)
                        char temp0_1604 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_1604 == 0)
                            zmm2 = zmm12
                            zmm1 = var_508_2
                            arg5 = arg10
                            arg10 = var_538_2
                            zmm12 = var_578_2
                        else
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            zmm4 = data_1434426b0
                            arg7 = var_508_2
                            arg5 = _mm_add_epi64(arg7, zmm4)
                            zmm2 = _mm_blendv_ps(zmm12, _mm_add_epi64(zmm4, zmm12), 
                                _mm_shuffle_epi32(zmm1, 0x50))
                            zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm1 = _mm_blendv_ps(arg7, arg5, zmm0)
                            
                            if ((temp0_1604 & 1) != 0)
                                zmm0 = zx.o(*zmm12[0].q)
                            
                            if ((temp0_1604 & 2) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm12, 1)), 1)
                            
                            arg5 = arg10
                            arg10 = var_538_2
                            zmm12 = var_578_2
                            
                            if ((temp0_1604 & 4) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*var_508_2[0].q), 2)
                            
                            if ((temp0_1604 & 8) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, 
                                    zx.d(*_mm_extract_epi64(var_508_2, 1)), 3)
                            
                            zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zx.o(0), zmm0, 0x55), data_143442b40))
                        
                        zmm4 = zx.o(0)
                        zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0)) & not.o(zmm0)
                        
                        if ((temp0_1566 & 1) != 0)
                            arg5 = _mm_blend_ps(arg5, zmm3, 1)
                            
                            if ((temp0_1566 & 2) != 0)
                                goto label_14020eac9
                            
                            goto label_14020eab2
                        
                        if ((temp0_1566 & 2) != 0)
                        label_14020eac9:
                            arg5 = _mm_blend_ps(arg5, zmm3, 2)
                            
                            if ((temp0_1566 & 4) != 0)
                                goto label_14020eab7
                            
                            goto label_14020ead4
                        
                    label_14020eab2:
                        
                        if ((temp0_1566 & 4) == 0)
                        label_14020ead4:
                            
                            if ((temp0_1566 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm3, 8)
                        else
                        label_14020eab7:
                            arg5 = _mm_blend_ps(arg5, zmm3, 4)
                            
                            if ((temp0_1566 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm3, 8)
                        
                        zmm3 = data_143442c50
                        zmm0 = var_558_1 & zmm3
                        zmm3 = _mm_cmpeq_epi32(zmm3, zmm0)
                        char temp0_1625 = _mm_movemask_ps(_mm_slli_epi32(arg9 & zmm3, 0x1f))
                        
                        if (temp0_1625 == 0)
                            arg9 = var_568_3
                        else
                            arg9 = var_568_3
                            
                            if ((temp0_1625 & 1) == 0)
                                if ((temp0_1625 & 2) != 0)
                                    goto label_14020f68f
                                
                                goto label_14020eb24
                            
                            zmm3 = zx.o(*zmm2[0].q)
                            
                            if ((temp0_1625 & 2) != 0)
                            label_14020f68f:
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                
                                if ((temp0_1625 & 4) == 0)
                                    goto label_14020eb2d
                                
                                goto label_14020f6a6
                            
                        label_14020eb24:
                            
                            if ((temp0_1625 & 4) != 0)
                            label_14020f6a6:
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 2)
                                
                                if ((temp0_1625 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                            else
                            label_14020eb2d:
                                
                                if ((temp0_1625 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                            
                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zx.o(0), zmm3, 0x55), data_143442b40))
                        
                        zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_1566 & 1) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 1)
                            
                            if ((temp0_1566 & 2) != 0)
                                goto label_14020eb93
                            
                            goto label_14020eb7c
                        
                        if ((temp0_1566 & 2) != 0)
                        label_14020eb93:
                            arg6 = _mm_blend_ps(arg6, zmm0, 2)
                            
                            if ((temp0_1566 & 4) != 0)
                                goto label_14020eb81
                            
                            goto label_14020eb9e
                        
                    label_14020eb7c:
                        
                        if ((temp0_1566 & 4) == 0)
                        label_14020eb9e:
                            
                            if ((temp0_1566 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                        else
                        label_14020eb81:
                            arg6 = _mm_blend_ps(arg6, zmm0, 4)
                            
                            if ((temp0_1566 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                    
                    zmm9 = (zmm9 ^ temp0_1564) & arg11
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm9, 0x1f)) == 0)
                        zmm9 = var_548_4
                        arg7 = var_588_4
                        zmm15 = var_528_5
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(data_143442ad0, var_478_4)
                        char temp0_1639 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & arg11, 0x1f))
                        
                        if (temp0_1639 == 0)
                            arg7 = var_588_4
                            zmm15 = var_528_5
                        else
                            char temp30_1 = temp0_1639 & 1
                            
                            if (temp30_1 == 0)
                                arg7 = var_588_4
                                zmm15 = var_528_5
                                
                                if (temp30_1 != 0)
                                label_14020ec6a:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                                    
                                    if (temp30_1 != 0)
                                        goto label_14020ec18
                                    
                                    goto label_14020ec72
                            else
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                                arg7 = var_588_4
                                zmm15 = var_528_5
                                
                                if (temp30_1 != 0)
                                    goto label_14020ec6a
                            
                            bool cond:138_1
                            bool cond:139_1
                            bool cond:156_1
                            bool cond:157_1
                            
                            if (temp30_1 != 0)
                            label_14020ec18:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                                char temp49_1 = temp0_1639 & 2
                                cond:138_1 = temp49_1 == 0
                                cond:139_1 = temp49_1 != 0
                                cond:156_1 = temp49_1 == 0
                                cond:157_1 = temp49_1 != 0
                                
                                if (temp49_1 != 0)
                                    goto label_14020ec77
                                
                                goto label_14020ec23
                            
                        label_14020ec72:
                            char temp48_1 = temp0_1639 & 2
                            cond:138_1 = temp48_1 == 0
                            cond:139_1 = temp48_1 != 0
                            cond:156_1 = temp48_1 == 0
                            cond:157_1 = temp48_1 != 0
                            
                            if (temp48_1 == 0)
                            label_14020ec23:
                                
                                if (not(cond:138_1))
                                label_14020ec25:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                                    
                                    if (cond:157_1)
                                        goto label_14020ec82
                                    
                                    goto label_14020ec2d
                            else
                            label_14020ec77:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                                
                                if (cond:139_1)
                                    goto label_14020ec25
                            
                            bool cond:196_1
                            bool cond:197_1
                            bool cond:221_1
                            bool cond:222_1
                            
                            if (not(cond:156_1))
                            label_14020ec82:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                                char temp72_1 = temp0_1639 & 4
                                cond:196_1 = temp72_1 == 0
                                cond:197_1 = temp72_1 != 0
                                cond:221_1 = temp72_1 == 0
                                cond:222_1 = temp72_1 != 0
                                
                                if (temp72_1 != 0)
                                    goto label_14020ec32
                                
                                goto label_14020ec8d
                            
                        label_14020ec2d:
                            char temp71_1 = temp0_1639 & 4
                            cond:196_1 = temp71_1 == 0
                            cond:197_1 = temp71_1 != 0
                            cond:221_1 = temp71_1 == 0
                            cond:222_1 = temp71_1 != 0
                            
                            if (temp71_1 == 0)
                            label_14020ec8d:
                                
                                if (not(cond:196_1))
                                label_14020ec8f:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                                    
                                    if (cond:222_1)
                                        goto label_14020ec3d
                                    
                                    goto label_14020ec97
                            else
                            label_14020ec32:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                                
                                if (cond:197_1)
                                    goto label_14020ec8f
                            
                            bool cond:267_1
                            bool cond:268_1
                            bool cond:291_1
                            bool cond:292_1
                            
                            if (not(cond:221_1))
                            label_14020ec3d:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                                char temp100_1 = temp0_1639 & 8
                                cond:267_1 = temp100_1 == 0
                                cond:268_1 = temp100_1 != 0
                                cond:291_1 = temp100_1 == 0
                                cond:292_1 = temp100_1 == 0
                                
                                if (temp100_1 != 0)
                                    goto label_14020ec9c
                                
                                goto label_14020ec48
                            
                        label_14020ec97:
                            char temp99_1 = temp0_1639 & 8
                            cond:267_1 = temp99_1 == 0
                            cond:268_1 = temp99_1 != 0
                            cond:291_1 = temp99_1 == 0
                            cond:292_1 = temp99_1 == 0
                            
                            if (temp99_1 != 0)
                            label_14020ec9c:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                                
                                if (cond:268_1)
                                    goto label_14020ec4a
                                
                                goto label_14020eca5
                            
                        label_14020ec48:
                            
                            if (cond:267_1)
                            label_14020eca5:
                                
                                if (not(cond:291_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                            else
                            label_14020ec4a:
                                arg5 = _mm_blend_ps(arg5, zx.o(0), 8)
                                
                                if (not(cond:292_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                        
                        char temp0_1653 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm9), 0x1f))
                        
                        if (temp0_1653 == 0)
                            zmm9 = var_548_4
                        else
                            char temp39_1 = temp0_1653 & 1
                            zmm9 = var_548_4
                            
                            if (temp39_1 != 0)
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                                
                                if (temp39_1 != 0)
                                    goto label_14020ed49
                            else if (temp39_1 != 0)
                            label_14020ed49:
                                arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                                
                                if (temp39_1 != 0)
                                    goto label_14020ed0b
                                
                                goto label_14020ed51
                            
                            bool cond:154_1
                            bool cond:155_1
                            bool cond:172_1
                            bool cond:173_1
                            
                            if (temp39_1 != 0)
                            label_14020ed0b:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                                char temp61_1 = temp0_1653 & 2
                                cond:154_1 = temp61_1 == 0
                                cond:155_1 = temp61_1 != 0
                                cond:172_1 = temp61_1 == 0
                                cond:173_1 = temp61_1 != 0
                                
                                if (temp61_1 != 0)
                                    goto label_14020ed56
                                
                                goto label_14020ed16
                            
                        label_14020ed51:
                            char temp60_1 = temp0_1653 & 2
                            cond:154_1 = temp60_1 == 0
                            cond:155_1 = temp60_1 != 0
                            cond:172_1 = temp60_1 == 0
                            cond:173_1 = temp60_1 != 0
                            
                            if (temp60_1 == 0)
                            label_14020ed16:
                                
                                if (not(cond:154_1))
                                label_14020ed18:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                                    
                                    if (cond:173_1)
                                        goto label_14020ed61
                                    
                                    goto label_14020ed20
                            else
                            label_14020ed56:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                                
                                if (cond:155_1)
                                    goto label_14020ed18
                            
                            bool cond:219_1
                            bool cond:220_1
                            bool cond:241_1
                            bool cond:242_1
                            
                            if (not(cond:172_1))
                            label_14020ed61:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                                char temp84_1 = temp0_1653 & 4
                                cond:219_1 = temp84_1 == 0
                                cond:220_1 = temp84_1 != 0
                                cond:241_1 = temp84_1 == 0
                                cond:242_1 = temp84_1 != 0
                                
                                if (temp84_1 != 0)
                                    goto label_14020ed25
                                
                                goto label_14020ed6c
                            
                        label_14020ed20:
                            char temp83_1 = temp0_1653 & 4
                            cond:219_1 = temp83_1 == 0
                            cond:220_1 = temp83_1 != 0
                            cond:241_1 = temp83_1 == 0
                            cond:242_1 = temp83_1 != 0
                            
                            if (temp83_1 == 0)
                            label_14020ed6c:
                                
                                if (not(cond:219_1))
                                label_14020ed6e:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                                    
                                    if (cond:242_1)
                                        goto label_14020ed30
                                    
                                    goto label_14020ed76
                            else
                            label_14020ed25:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                                
                                if (cond:220_1)
                                    goto label_14020ed6e
                            
                            bool cond:289_1
                            bool cond:290_1
                            bool cond:305_1
                            bool cond:306_1
                            
                            if (not(cond:241_1))
                            label_14020ed30:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                                char temp112_1 = temp0_1653 & 8
                                cond:289_1 = temp112_1 == 0
                                cond:290_1 = temp112_1 != 0
                                cond:305_1 = temp112_1 == 0
                                cond:306_1 = temp112_1 == 0
                                
                                if (temp112_1 != 0)
                                    goto label_14020ed7b
                                
                                goto label_14020ed3b
                            
                        label_14020ed76:
                            char temp111_1 = temp0_1653 & 8
                            cond:289_1 = temp111_1 == 0
                            cond:290_1 = temp111_1 != 0
                            cond:305_1 = temp111_1 == 0
                            cond:306_1 = temp111_1 == 0
                            
                            if (temp111_1 != 0)
                            label_14020ed7b:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                                
                                if (cond:290_1)
                                    goto label_14020ed3d
                                
                                goto label_14020ed84
                            
                        label_14020ed3b:
                            
                            if (cond:289_1)
                            label_14020ed84:
                                
                                if (not(cond:305_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                            else
                            label_14020ed3d:
                                arg5 = _mm_blend_ps(arg5, zx.o(0), 8)
                                
                                if (not(cond:306_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
            
            zmm0 = var_488_2
            zmm15 = _mm_cmpeq_epi32(zmm15, zmm0) & not.o(arg11)
            arg11 = _mm_slli_epi32(zmm15, 0x1f)
            char temp0_1668 = _mm_movemask_ps(arg11)
            
            if (temp0_1668 == 0)
                arg9 = var_448_2
                rcx_96 = _mm_movemask_ps(_mm_and_ps(var_408_3, arg9))
                
                if (rcx_96 != 0)
                    goto label_14020c8b7
            else
                zmm0 = _mm_mullo_epi32(zmm0, zmm12)
                zmm1 = _mm_cvtepi32_epi64(zmm0.q)
                zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
                int32_t var_488_4[0x4] = zmm0
                zmm0 = __paddq_xmmdq_memdq(zmm0, var_468_2)
                int32_t var_4c8_2[0x4] = zmm1
                uint128_t var_4b8_2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_598_4), arg10)
                uint128_t var_4d8_2 = __paddq_xmmdq_memdq(zmm0, var_5a8_1)
                arg9 &= zmm15
                float var_518_8[0x4] = arg5
                int32_t var_458_5[0x4] = arg6
                
                if (_mm_movemask_ps(_mm_slli_epi32(arg9, 0x1f)) == 0)
                    arg6 = var_558_1
                else
                    arg6 = var_558_1
                    zmm4 = zx.o(0)
                    arg10 = _mm_cmpeq_epi32(data_143442c60 & arg6, zx.o(0))
                    zmm3 = _mm_slli_epi32(arg9 & arg10, 0x1f)
                    char temp0_1681 = _mm_movemask_ps(zmm3)
                    
                    if (temp0_1681 != 0)
                        float var_568_4[0x4] = arg9
                        int32_t temp0_1682[0x4] = _mm_srai_epi32(zmm3, 0x1f)
                        int32_t temp0_1683[0x4] = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                        arg7 = __paddq_xmmdq_memdq(var_418_2, var_598_4)
                        zmm2 = data_1434426c0
                        arg7 = __paddq_xmmdq_memdq(arg7, var_4c8_2)
                        int32_t temp0_1687[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1683, var_488_4), zmm2)
                        arg7 = _mm_add_epi64(arg7, zmm2)
                        zmm1 = _mm_shuffle_epi32(temp0_1682, 0x50)
                        float temp0_1690[0x4] = _mm_blendv_ps(zx.o(0), arg7, zmm1)
                        zmm3 = _mm_shuffle_epi32(temp0_1682, 0xfa)
                        arg7 = _mm_blendv_ps(zx.o(0), temp0_1687, zmm3)
                        int64_t rax_365 = _mm_extract_epi64(temp0_1690, 1)
                        void* rbp_53 = arg4 + rax_365
                        arg9 = *(arg4 + rax_365)
                        int64_t rax_366 = arg7[0]
                        int64_t rsi_24 = _mm_extract_epi64(arg7, 1)
                        void* rdi_9 = arg4 + rax_366
                        arg7 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        int32_t var_428_3 = (*(arg4 + rax_366)).d
                        int32_t temp0_1694[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm3)
                        int32_t var_508_3 = (*(arg4 + rsi_24)).d
                        void* rbx_37 = temp0_1690[0].q + arg4
                        var_578_2 = *(arg7[0] + rbx_37)
                        arg7 = *(_mm_extract_epi64(arg7, 1) + rbp_53)
                        zmm9 = *(temp0_1694[0].q + rdi_9)
                        void* rsi_25 = arg4 + rsi_24
                        int32_t var_498_4 = (*(_mm_extract_epi64(temp0_1694, 1) + rsi_25)).d
                        arg5 = data_1434426e0
                        int32_t temp0_1695[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        zmm4 = _mm_blendv_ps(zx.o(0), arg5, zmm3)
                        zmm12 = *(temp0_1695[0].q + rbx_37)
                        zmm3 = *(_mm_extract_epi64(temp0_1695, 1) + rbp_53)
                        uint128_t* rax_373 = zmm4[0].q
                        uint128_t* rbp_54 = _mm_extract_epi64(zmm4, 1)
                        zmm1 = *(rax_373 + rdi_9)
                        zmm0 = *(rbp_54 + rsi_25)
                        bool cond:72_1
                        bool cond:73_1
                        bool cond:80_1
                        bool cond:81_1
                        
                        if ((temp0_1681 & 1) == 0)
                            char temp24_1 = temp0_1681 & 2
                            cond:72_1 = temp24_1 != 0
                            cond:73_1 = temp24_1 == 0
                            cond:80_1 = temp24_1 != 0
                            cond:81_1 = temp24_1 == 0
                            
                            if (temp24_1 == 0)
                                goto label_14020f070
                            
                            goto label_14020efdc
                        
                        zmm2 = *rbx_37
                        char temp23_1 = temp0_1681 & 2
                        cond:72_1 = temp23_1 != 0
                        cond:73_1 = temp23_1 == 0
                        cond:80_1 = temp23_1 != 0
                        cond:81_1 = temp23_1 == 0
                        
                        if (temp23_1 == 0)
                        label_14020f070:
                            zmm4 = var_588_4
                            arg5 = var_518_8
                            
                            if (cond:73_1)
                                goto label_14020eff7
                            
                            goto label_14020f08f
                        
                    label_14020efdc:
                        zmm2 = _mm_insert_ps(zmm2, arg9, 0x10)
                        zmm4 = var_588_4
                        arg5 = var_518_8
                        
                        if (not(cond:72_1))
                        label_14020eff7:
                            
                            if (cond:81_1)
                                goto label_14020f09a
                            
                            goto label_14020effd
                        
                    label_14020f08f:
                        var_578_2 = _mm_insert_ps(var_578_2, arg7, 0x10)
                        bool cond:116_1
                        bool cond:117_1
                        bool cond:137_1
                        
                        if (not(cond:80_1))
                        label_14020f09a:
                            char temp38_1 = temp0_1681 & 4
                            cond:116_1 = temp38_1 == 0
                            cond:117_1 = temp38_1 == 0
                            cond:137_1 = temp38_1 == 0
                            arg6 = var_558_1
                            arg7 = zmm4
                            
                            if (temp38_1 == 0)
                                goto label_14020f017
                            
                            goto label_14020f0b0
                        
                    label_14020effd:
                        zmm12 = _mm_insert_ps(zmm12, zmm3, 0x10)
                        char temp37_1 = temp0_1681 & 4
                        cond:116_1 = temp37_1 == 0
                        cond:117_1 = temp37_1 == 0
                        cond:137_1 = temp37_1 == 0
                        arg6 = var_558_1
                        arg7 = zmm4
                        
                        if (temp37_1 != 0)
                        label_14020f0b0:
                            zmm4 = __insertps_xmmps_memd_immb(zmm2, var_428_3, 0x20)
                            arg9 = var_568_4
                            
                            if (not(cond:116_1))
                                var_578_2 = _mm_insert_ps(var_578_2, zmm9, 0x20)
                        else
                        label_14020f017:
                            arg9 = var_568_4
                            zmm4 = zmm2
                            
                            if (not(cond:117_1))
                                var_578_2 = _mm_insert_ps(var_578_2, zmm9, 0x20)
                        
                        zmm9 = var_548_4
                        bool cond:170_1
                        bool cond:171_1
                        bool cond:194_1
                        bool cond:195_1
                        
                        if (not(cond:137_1))
                            zmm12 = _mm_insert_ps(zmm12, zmm1, 0x20)
                            char temp59_1 = temp0_1681 & 8
                            cond:170_1 = temp59_1 == 0
                            cond:171_1 = temp59_1 != 0
                            cond:194_1 = temp59_1 == 0
                            cond:195_1 = temp59_1 != 0
                            
                            if (temp59_1 != 0)
                                goto label_14020f109
                            
                            goto label_14020f0e9
                        
                        char temp58_1 = temp0_1681 & 8
                        cond:170_1 = temp58_1 == 0
                        cond:171_1 = temp58_1 != 0
                        cond:194_1 = temp58_1 == 0
                        cond:195_1 = temp58_1 != 0
                        
                        if (temp58_1 != 0)
                        label_14020f109:
                            zmm4 = __insertps_xmmps_memd_immb(zmm4, var_508_3, 0x30)
                            
                            if (cond:171_1)
                                goto label_14020f0fb
                            
                            goto label_14020f116
                        
                    label_14020f0e9:
                        
                        if (cond:170_1)
                        label_14020f116:
                            
                            if (not(cond:194_1))
                                zmm12 = _mm_insert_ps(zmm12, zmm0, 0x30)
                        else
                        label_14020f0fb:
                            var_578_2 = __insertps_xmmps_memd_immb(var_578_2, var_498_4, 0x30)
                            
                            if (cond:195_1)
                                zmm12 = _mm_insert_ps(zmm12, zmm0, 0x30)
                    
                    arg10 &= not.o(arg9)
                    zmm3 = _mm_slli_epi32(arg10, 0x1f)
                    char temp0_1709 = _mm_movemask_ps(zmm3)
                    
                    if (temp0_1709 == 0)
                        arg10 = var_538_2
                    else
                        arg7 = zmm4
                        int32_t var_568_5[0x4] = zmm12
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f)
                        zmm3 = _mm_srai_epi32(zmm3, 0x1f) & zmm1
                        
                        if (_mm_movemask_ps(zmm3) == 0)
                            arg9 = var_4b8_2
                            zmm12 = var_4d8_2
                        else
                            zmm2 = data_1434426c0
                            zmm12 = var_4d8_2
                            arg5 = _mm_add_epi64(zmm12, zmm2)
                            arg9 = var_4b8_2
                            int32_t temp0_1715[0x4] = _mm_add_epi64(arg9, zmm2)
                            zmm4 = _mm_unpacklo_ps(zmm3, zmm3[0].q)
                            arg9 = _mm_blendv_ps(arg9, temp0_1715, zmm4)
                            zmm3 = _mm_unpackhi_ps(zmm3, zmm3)
                            zmm12 = _mm_blendv_ps(zmm12, arg5, zmm3)
                            arg5 = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                            int32_t temp0_1722[0x4] = __paddq_xmmdq_memdq(
                                __paddq_xmmdq_memdq(var_418_2, var_598_4), var_4c8_2)
                            arg5 = _mm_add_epi64(__paddq_xmmdq_memdq(arg5, var_488_4), zmm2)
                            float temp0_1726[0x4] =
                                _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_1722, zmm2), zmm4)
                            int32_t temp0_1727[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm3)
                            zmm4 = *(arg4 + temp0_1726[0].q)
                            int64_t rax_376 = _mm_extract_epi64(temp0_1726, 1)
                            int64_t rbp_55 = temp0_1727[0].q
                            int64_t rbx_38 = _mm_extract_epi64(temp0_1727, 1)
                            zmm4 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm4, *(arg4 + rax_376), 0x10), 
                                    *(arg4 + rbp_55), 0x20), 
                                *(arg4 + rbx_38), 0x30)
                        
                        zmm0 = zmm1
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm4, zmm0)
                        
                        if ((temp0_1709 & 1) != 0)
                            arg7 = _mm_blend_ps(arg7, zmm3, 1)
                            arg5 = var_518_8
                            
                            if ((temp0_1709 & 2) != 0)
                                goto label_14020f2a0
                            
                            goto label_14020f281
                        
                        arg5 = var_518_8
                        
                        if ((temp0_1709 & 2) != 0)
                        label_14020f2a0:
                            arg7 = _mm_blend_ps(arg7, zmm3, 2)
                            
                            if ((temp0_1709 & 4) != 0)
                                goto label_14020f286
                            
                            goto label_14020f2ab
                        
                    label_14020f281:
                        
                        if ((temp0_1709 & 4) == 0)
                        label_14020f2ab:
                            
                            if ((temp0_1709 & 8) != 0)
                                arg7 = _mm_blend_ps(arg7, zmm3, 8)
                        else
                        label_14020f286:
                            arg7 = _mm_blend_ps(arg7, zmm3, 4)
                            
                            if ((temp0_1709 & 8) != 0)
                                arg7 = _mm_blend_ps(arg7, zmm3, 8)
                        
                        zmm4 = data_143442c40
                        zmm1 = var_558_1 & zmm4
                        zmm4 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm4, zmm1) & arg10, 0x1f)
                        char temp0_1738 = _mm_movemask_ps(zmm4)
                        
                        if (temp0_1738 != 0)
                            int32_t temp0_1739[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                            zmm2 = data_1434426c0
                            arg5 = _mm_add_epi64(zmm12, zmm2)
                            zmm3 = _mm_blendv_ps(arg9, _mm_add_epi64(zmm2, arg9), 
                                _mm_shuffle_epi32(temp0_1739, 0x50))
                            zmm0 = _mm_shuffle_epi32(temp0_1739, 0xfa)
                            zmm4 = _mm_blendv_ps(zmm12, arg5, zmm0)
                            
                            if ((temp0_1738 & 1) == 0)
                                if ((temp0_1738 & 2) != 0)
                                    goto label_14020f6d4
                                
                                goto label_14020f32f
                            
                            zmm0 = *arg9[0].q
                            
                            if ((temp0_1738 & 2) != 0)
                            label_14020f6d4:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg9, 1), 0x10)
                                arg5 = var_518_8
                                
                                if ((temp0_1738 & 4) == 0)
                                    goto label_14020f341
                                
                                goto label_14020f6f1
                            
                        label_14020f32f:
                            arg5 = var_518_8
                            
                            if ((temp0_1738 & 4) != 0)
                            label_14020f6f1:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm12[0].q, 0x20)
                                
                                if ((temp0_1738 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            else
                            label_14020f341:
                                
                                if ((temp0_1738 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            
                            arg9 = zmm3
                            zmm12 = zmm4
                        
                        zmm4 = arg7
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                        
                        if ((temp0_1709 & 1) != 0)
                            var_578_2 = _mm_blend_epi16(var_578_2, zmm1, 3)
                            
                            if ((temp0_1709 & 2) != 0)
                                goto label_14020f3b8
                            
                            goto label_14020f389
                        
                        if ((temp0_1709 & 2) != 0)
                        label_14020f3b8:
                            var_578_2 = _mm_blend_epi16(var_578_2, zmm1, 0xc)
                            
                            if ((temp0_1709 & 4) != 0)
                                goto label_14020f39a
                            
                            goto label_14020f3c3
                        
                    label_14020f389:
                        
                        if ((temp0_1709 & 4) == 0)
                        label_14020f3c3:
                            
                            if ((temp0_1709 & 8) != 0)
                                var_578_2 = _mm_blend_epi16(var_578_2, zmm1, 0xc0)
                        else
                        label_14020f39a:
                            var_578_2 = _mm_blend_epi16(var_578_2, zmm1, 0x30)
                            
                            if ((temp0_1709 & 8) != 0)
                                var_578_2 = _mm_blend_epi16(var_578_2, zmm1, 0xc0)
                        
                        zmm1 = data_143442c50
                        zmm0 = var_558_1 & zmm1
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm0)
                        char temp0_1754 = _mm_movemask_ps(_mm_slli_epi32(arg10 & zmm1, 0x1f))
                        
                        if (temp0_1754 == 0)
                            arg7 = var_588_4
                            arg6 = var_558_1
                            arg10 = var_538_2
                        else
                            arg10 = var_538_2
                            
                            if ((temp0_1754 & 1) == 0)
                                if ((temp0_1754 & 2) != 0)
                                    goto label_14020f720
                                
                                goto label_14020f423
                            
                            zmm1 = *arg9[0].q
                            
                            if ((temp0_1754 & 2) != 0)
                            label_14020f720:
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(arg9, 1), 0x10)
                                arg6 = var_558_1
                                
                                if ((temp0_1754 & 4) == 0)
                                    goto label_14020f433
                                
                                goto label_14020f73b
                            
                        label_14020f423:
                            arg6 = var_558_1
                            
                            if ((temp0_1754 & 4) != 0)
                            label_14020f73b:
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, *zmm12[0].q, 0x20)
                                
                                if ((temp0_1754 & 8) != 0)
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            else
                            label_14020f433:
                                
                                if ((temp0_1754 & 8) != 0)
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            
                            arg7 = var_588_4
                        
                        zmm12 = var_568_5
                        zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_1709 & 1) != 0)
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 3)
                            
                            if ((temp0_1709 & 2) != 0)
                                goto label_14020f49d
                            
                            goto label_14020f485
                        
                        if ((temp0_1709 & 2) != 0)
                        label_14020f49d:
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc)
                            
                            if ((temp0_1709 & 4) != 0)
                                goto label_14020f48a
                            
                            goto label_14020f4a9
                        
                    label_14020f485:
                        
                        if ((temp0_1709 & 4) == 0)
                        label_14020f4a9:
                            
                            if ((temp0_1709 & 8) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                        else
                        label_14020f48a:
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 0x30)
                            
                            if ((temp0_1709 & 8) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm15 & var_4f8_7, 0x1f)) == 0)
                    arg9 = var_448_2
                    arg10 = var_408_3
                    zmm3 = var_458_5
                    arg11 = var_578_2
                else
                    int32_t var_528_6[0x4] = zmm15
                    int32_t temp0_1764[0x4] =
                        _mm_srai_epi32(_mm_slli_epi32(zmm15 & arg7, 0x1f), 0x1f)
                    char temp0_1765 = _mm_movemask_ps(temp0_1764)
                    
                    if (temp0_1765 == 0)
                        zmm15 = zmm4
                        arg9 = var_448_2
                        arg10 = var_408_3
                        zmm3 = var_458_5
                        zmm2 = var_528_6
                        arg11 = var_578_2
                    else
                        int32_t var_498_5[0x4] = zmm4
                        zmm4 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f) & arg7
                        arg11 = _mm_srai_epi32(arg11, 0x1f) & zmm4
                        uint128_t var_508_4 = zx.o(0)
                        uint32_t temp0_1769 = _mm_movemask_ps(arg11)
                        float var_4e8_6[0x4]
                        int32_t var_428_4[0x4]
                        
                        if (temp0_1769 == 0)
                            var_4e8_6 = zx.o(0)
                            var_428_4 = zx.o(0)
                            arg9 = var_448_2
                            arg10 = var_408_3
                            arg11 = var_578_2
                        else
                            zmm1 = data_1434426c0
                            zmm2 = _mm_add_epi64(var_5a8_1, zmm1)
                            int32_t temp0_1771[0x4] = _mm_add_epi64(arg10, zmm1)
                            zmm9 = _mm_unpacklo_ps(arg11, arg11[0])
                            float temp0_1773[0x4] = _mm_blendv_ps(arg10, temp0_1771, zmm9)
                            arg11 = _mm_unpackhi_ps(arg11, arg11)
                            zmm0 = arg11
                            zmm3 = _mm_blendv_ps(var_5a8_1, zmm2, zmm0)
                            char rbp_61 = temp0_1769.b
                            
                            if ((rbp_61 & 1) == 0)
                                if ((rbp_61 & 2) != 0)
                                    goto label_14020f76a
                                
                                goto label_14020f596
                            
                            zmm0 = *arg10[0].q
                            
                            if ((rbp_61 & 2) != 0)
                            label_14020f76a:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg10, 1), 0x10)
                                
                                if ((rbp_61 & 4) == 0)
                                    goto label_14020f5a0
                                
                                goto label_14020f784
                            
                        label_14020f596:
                            
                            if ((rbp_61 & 4) == 0)
                            label_14020f5a0:
                                
                                if ((rbp_61 & 8) != 0)
                                    goto label_14020f7a0
                                
                                goto label_14020f5aa
                            
                        label_14020f784:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0].q, 0x20)
                            char rbx_39
                            
                            if ((rbp_61 & 8) != 0)
                            label_14020f7a0:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                rbx_39 = _mm_movemask_ps(zmm4)
                                zmm2 = zx.o(0)
                                
                                if ((rbx_39 & 1) != 0)
                                    goto label_14020f5ba
                                
                                goto label_14020f7b6
                            
                        label_14020f5aa:
                            rbx_39 = _mm_movemask_ps(zmm4)
                            zmm2 = zx.o(0)
                            
                            if ((rbx_39 & 1) != 0)
                            label_14020f5ba:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 3)
                                
                                if ((rbx_39 & 2) != 0)
                                    goto label_14020f7bf
                                
                                goto label_14020f5c9
                            
                        label_14020f7b6:
                            
                            if ((rbx_39 & 2) != 0)
                            label_14020f7bf:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc)
                                
                                if ((rbx_39 & 4) != 0)
                                    goto label_14020f5d2
                                
                                goto label_14020f7ce
                            
                        label_14020f5c9:
                            
                            if ((rbx_39 & 4) == 0)
                            label_14020f7ce:
                                
                                if ((rbx_39 & 8) != 0)
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc0)
                            else
                            label_14020f5d2:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 0x30)
                                
                                if ((rbx_39 & 8) != 0)
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc0)
                            
                            var_4e8_6 = zmm2
                            zmm2 = _mm_add_epi64(zmm3, zmm1)
                            var_538_2 =
                                _mm_blendv_ps(temp0_1773, _mm_add_epi64(zmm1, temp0_1773), zmm9)
                            zmm0 = arg11
                            var_5a8_1 = _mm_blendv_ps(zmm3, zmm2, zmm0)
                            
                            if ((rbp_61 & 1) != 0)
                                zmm0 = *temp0_1773[0].q
                            
                            arg9 = var_448_2
                            arg10 = var_408_3
                            arg6 = var_558_1
                            arg11 = var_578_2
                            
                            if ((rbp_61 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_1773, 1), 0x10)
                                
                                if ((rbp_61 & 4) != 0)
                                label_14020f88a:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm3[0].q, 0x20)
                                    
                                    if ((rbp_61 & 8) == 0)
                                        goto label_14020f84d
                                    
                                    goto label_14020f89d
                            else if ((rbp_61 & 4) != 0)
                                goto label_14020f88a
                            
                            if ((rbp_61 & 8) == 0)
                            label_14020f84d:
                                zmm1 = zx.o(0)
                                
                                if ((rbx_39 & 1) == 0)
                                    goto label_14020f8ab
                                
                                goto label_14020f855
                            
                        label_14020f89d:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm3, 1), 0x30)
                            zmm1 = zx.o(0)
                            
                            if ((rbx_39 & 1) == 0)
                            label_14020f8ab:
                                
                                if ((rbx_39 & 2) == 0)
                                    goto label_14020f860
                                
                                goto label_14020f8b0
                            
                        label_14020f855:
                            zmm1 = _mm_blend_ps(zmm1, zmm0, 1)
                            
                            if ((rbx_39 & 2) == 0)
                            label_14020f860:
                                
                                if ((rbx_39 & 4) == 0)
                                    goto label_14020f8bb
                                
                                goto label_14020f865
                            
                        label_14020f8b0:
                            zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                            
                            if ((rbx_39 & 4) != 0)
                            label_14020f865:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 4)
                                
                                if ((rbx_39 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                            label_14020f8bb:
                                
                                if ((rbx_39 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            
                            var_428_4 = zmm1
                        
                        zmm0 = data_143442c40
                        zmm4 = _mm_cmpeq_epi32(arg6 & zmm0, zmm0) & arg7
                        zmm2 = _mm_slli_epi32(var_528_6 & zmm4, 0x1f)
                        char temp0_1804 = _mm_movemask_ps(zmm2)
                        int32_t var_568_6[0x4] = zmm12
                        
                        if (temp0_1804 == 0)
                            zmm9 = zx.o(0)
                        else
                            zmm12 = arg7
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm3 = data_1434426c0
                            zmm1 = _mm_add_epi64(var_5a8_1, zmm3)
                            arg5 = var_538_2
                            arg7 = _mm_add_epi64(arg5, zmm3)
                            zmm9 = _mm_shuffle_epi32(zmm2, 0x50)
                            float temp0_1809[0x4] = _mm_blendv_ps(arg5, arg7, zmm9)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                            zmm0 = zmm2
                            arg7 = _mm_blendv_ps(var_5a8_1, zmm1, zmm0)
                            
                            if ((temp0_1804 & 1) == 0)
                                if ((temp0_1804 & 2) != 0)
                                    goto label_14020f9e0
                                
                                goto label_14020f969
                            
                            zmm0 = *var_538_2.q
                            
                            if ((temp0_1804 & 2) != 0)
                            label_14020f9e0:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_538_2, 1), 0x10)
                                
                                if ((temp0_1804 & 4) == 0)
                                    goto label_14020f96f
                                
                                goto label_14020f9f6
                            
                        label_14020f969:
                            
                            if ((temp0_1804 & 4) == 0)
                            label_14020f96f:
                                
                                if ((temp0_1804 & 8) != 0)
                                    goto label_14020fa12
                                
                                goto label_14020f979
                            
                        label_14020f9f6:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1.q, 0x20)
                            char rbx_40
                            
                            if ((temp0_1804 & 8) != 0)
                            label_14020fa12:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                rbx_40 = _mm_movemask_ps(zmm4)
                                zmm1 = zx.o(0)
                                
                                if ((rbx_40 & 1) != 0)
                                    goto label_14020f989
                                
                                goto label_14020fa28
                            
                        label_14020f979:
                            rbx_40 = _mm_movemask_ps(zmm4)
                            zmm1 = zx.o(0)
                            
                            if ((rbx_40 & 1) != 0)
                            label_14020f989:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 3)
                                
                                if ((rbx_40 & 2) != 0)
                                    goto label_14020fa31
                                
                                goto label_14020f998
                            
                        label_14020fa28:
                            
                            if ((rbx_40 & 2) != 0)
                            label_14020fa31:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc)
                                
                                if ((rbx_40 & 4) != 0)
                                    goto label_14020f9a1
                                
                                goto label_14020fa40
                            
                        label_14020f998:
                            
                            if ((rbx_40 & 4) == 0)
                            label_14020fa40:
                                
                                if ((rbx_40 & 8) != 0)
                                    zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                            else
                            label_14020f9a1:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0x30)
                                
                                if ((rbx_40 & 8) != 0)
                                    zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                            
                            var_508_4 = zmm1
                            zmm1 = _mm_add_epi64(arg7, zmm3)
                            var_538_2 =
                                _mm_blendv_ps(temp0_1809, _mm_add_epi64(zmm3, temp0_1809), zmm9)
                            zmm0 = zmm2
                            var_5a8_1 = _mm_blendv_ps(arg7, zmm1, zmm0)
                            
                            if ((temp0_1804 & 1) == 0)
                                if ((temp0_1804 & 2) != 0)
                                    goto label_14020fc66
                                
                                goto label_14020fa95
                            
                            zmm0 = *temp0_1809[0].q
                            
                            if ((temp0_1804 & 2) != 0)
                            label_14020fc66:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_1809, 1), 0x10)
                                
                                if ((temp0_1804 & 4) == 0)
                                    goto label_14020fa9f
                                
                                goto label_14020fc7b
                            
                        label_14020fa95:
                            
                            if ((temp0_1804 & 4) != 0)
                            label_14020fc7b:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg7[0], 0x20)
                                
                                if ((temp0_1804 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg7, 1), 0x30)
                            else
                            label_14020fa9f:
                                
                                if ((temp0_1804 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg7, 1), 0x30)
                            
                            arg6 = var_558_1
                            arg7 = zmm12
                            zmm9 = zx.o(0)
                            
                            if ((rbx_40 & 1) != 0)
                                zmm9 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rbx_40 & 2) != 0)
                                    goto label_14020faeb
                                
                                goto label_14020fad3
                            
                            if ((rbx_40 & 2) != 0)
                            label_14020faeb:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc)
                                
                                if ((rbx_40 & 4) != 0)
                                    goto label_14020fad8
                                
                                goto label_14020faf7
                            
                        label_14020fad3:
                            
                            if ((rbx_40 & 4) == 0)
                            label_14020faf7:
                                
                                if ((rbx_40 & 8) != 0)
                                    zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                            else
                            label_14020fad8:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0x30)
                                
                                if ((rbx_40 & 8) != 0)
                                    zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                        
                        zmm0 = data_143442c50
                        zmm12 = arg7
                        zmm3 = _mm_cmpeq_epi32(arg6 & zmm0, zmm0) & arg7
                        zmm4 = _mm_slli_epi32(var_528_6 & zmm3, 0x1f)
                        char temp0_1832 = _mm_movemask_ps(zmm4)
                        zmm2 = zx.o(0)
                        arg5 = zx.o(0)
                        
                        if (temp0_1832 != 0)
                            int32_t temp0_1833[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                            zmm1 = data_1434426c0
                            zmm2 = _mm_add_epi64(var_5a8_1, zmm1)
                            arg5 = var_538_2
                            float temp0_1837[0x4] = _mm_blendv_ps(arg5, _mm_add_epi64(zmm1, arg5), 
                                _mm_shuffle_epi32(temp0_1833, 0x50))
                            zmm0 = _mm_shuffle_epi32(temp0_1833, 0xfa)
                            zmm12 = _mm_blendv_ps(var_5a8_1, zmm2, zmm0)
                            
                            if ((temp0_1832 & 1) == 0)
                                if ((temp0_1832 & 2) != 0)
                                    goto label_14020fcb6
                                
                                goto label_14020fb9b
                            
                            zmm0 = *var_538_2.q
                            
                            if ((temp0_1832 & 2) != 0)
                            label_14020fcb6:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_538_2, 1), 0x10)
                                
                                if ((temp0_1832 & 4) == 0)
                                    goto label_14020fba5
                                
                                goto label_14020fcd0
                            
                        label_14020fb9b:
                            
                            if ((temp0_1832 & 4) == 0)
                            label_14020fba5:
                                
                                if ((temp0_1832 & 8) != 0)
                                    goto label_14020fcec
                                
                                goto label_14020fbaf
                            
                        label_14020fcd0:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1.q, 0x20)
                            char rbx_41
                            
                            if ((temp0_1832 & 8) != 0)
                            label_14020fcec:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                rbx_41 = _mm_movemask_ps(zmm3)
                                zmm2 = zx.o(0)
                                
                                if ((rbx_41 & 1) != 0)
                                    goto label_14020fbbe
                                
                                goto label_14020fd01
                            
                        label_14020fbaf:
                            rbx_41 = _mm_movemask_ps(zmm3)
                            zmm2 = zx.o(0)
                            
                            if ((rbx_41 & 1) != 0)
                            label_14020fbbe:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 1)
                                
                                if ((rbx_41 & 2) != 0)
                                    goto label_14020fd0a
                                
                                goto label_14020fbcd
                            
                        label_14020fd01:
                            
                            if ((rbx_41 & 2) != 0)
                            label_14020fd0a:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 2)
                                
                                if ((rbx_41 & 4) != 0)
                                    goto label_14020fbd6
                                
                                goto label_14020fd19
                            
                        label_14020fbcd:
                            
                            if ((rbx_41 & 4) != 0)
                            label_14020fbd6:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 4)
                                
                                if ((rbx_41 & 8) != 0)
                                    goto label_14020fd22
                                
                                goto label_14020fbe5
                            
                        label_14020fd19:
                            
                            if ((rbx_41 & 8) != 0)
                            label_14020fd22:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                                
                                if ((temp0_1832 & 1) == 0)
                                    goto label_14020fbef
                                
                                goto label_14020fd37
                            
                        label_14020fbe5:
                            
                            if ((temp0_1832 & 1) == 0)
                            label_14020fbef:
                                
                                if ((temp0_1832 & 2) != 0)
                                    goto label_14020fd4c
                                
                                goto label_14020fbf9
                            
                        label_14020fd37:
                            zmm0 = *temp0_1837[0].q
                            
                            if ((temp0_1832 & 2) != 0)
                            label_14020fd4c:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_1837, 1), 0x10)
                                
                                if ((temp0_1832 & 4) == 0)
                                    goto label_14020fc03
                                
                                goto label_14020fd61
                            
                        label_14020fbf9:
                            
                            if ((temp0_1832 & 4) == 0)
                            label_14020fc03:
                                
                                if ((temp0_1832 & 8) != 0)
                                    goto label_14020fd78
                                
                                goto label_14020fc0d
                            
                        label_14020fd61:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm12[0].q, 0x20)
                            
                            if ((temp0_1832 & 8) != 0)
                            label_14020fd78:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm12, 1), 0x30)
                                zmm12 = var_588_4
                                arg5 = zx.o(0)
                                
                                if ((rbx_41 & 1) != 0)
                                    goto label_14020fc20
                                
                                goto label_14020fd91
                            
                        label_14020fc0d:
                            zmm12 = var_588_4
                            arg5 = zx.o(0)
                            
                            if ((rbx_41 & 1) != 0)
                            label_14020fc20:
                                arg5 = _mm_blend_ps(arg5, zmm0, 1)
                                
                                if ((rbx_41 & 2) != 0)
                                    goto label_14020fd9a
                                
                                goto label_14020fc2f
                            
                        label_14020fd91:
                            
                            if ((rbx_41 & 2) != 0)
                            label_14020fd9a:
                                arg5 = _mm_blend_ps(arg5, zmm0, 2)
                                
                                if ((rbx_41 & 4) != 0)
                                    goto label_14020fc38
                                
                                goto label_14020fda9
                            
                        label_14020fc2f:
                            
                            if ((rbx_41 & 4) == 0)
                            label_14020fda9:
                                
                                if ((rbx_41 & 8) != 0)
                                    arg5 = _mm_blend_ps(arg5, zmm0, 8)
                            else
                            label_14020fc38:
                                arg5 = _mm_blend_ps(arg5, zmm0, 4)
                                
                                if ((rbx_41 & 8) != 0)
                                    arg5 = _mm_blend_ps(arg5, zmm0, 8)
                        
                        int32_t temp0_1858[0x4] = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                        int32_t temp0_1859[0x4] = __paddq_xmmdq_memdq(var_418_2, var_598_4)
                        zmm0 = data_1434426c0
                        int32_t temp0_1860[0x4] = __paddq_xmmdq_memdq(temp0_1859, var_4c8_2)
                        int32_t temp0_1862[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1858, var_488_4), zmm0)
                        zmm1 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_1860, zmm0), 
                            _mm_shuffle_epi32(temp0_1764, 0x50))
                        arg7 =
                            _mm_blendv_ps(zx.o(0), temp0_1862, _mm_shuffle_epi32(temp0_1764, 0xfa))
                        int64_t rbp_66 = _mm_extract_epi64(zmm1, 1)
                        int64_t rbx_42 = _mm_extract_epi64(arg7, 1)
                        zmm0 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), *(arg4 + rbp_66), 
                                    1), 
                                *(arg4 + arg7[0]), 2), 
                            *(arg4 + rbx_42), 3)
                        zmm1 = _mm_srli_epi32(zmm0, 0x15)
                        zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm4 = _mm_add_ps(var_4e8_6, 
                            _mm_mul_ps(var_428_4, 
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0)))
                        zmm0 = data_143442440
                        zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                        arg6 = data_143442690
                        zmm9 = _mm_mul_ps(zmm9, _mm_div_ps(zmm3, arg6))
                        zmm0 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm0)), arg6)
                        char temp57_1 = temp0_1765 & 1
                        
                        if (temp57_1 == 0)
                            arg6 = var_558_1
                            zmm3 = var_458_5
                            arg7 = zmm12
                            zmm15 = var_498_5
                        else
                            zmm15 = _mm_blend_ps(var_498_5, zmm4, 1)
                            arg6 = var_558_1
                            zmm3 = var_458_5
                            arg7 = zmm12
                        
                        float temp0_1886[0x4] = _mm_mul_ps(arg5, zmm0)
                        zmm1 = _mm_add_ps(var_508_4, zmm9)
                        zmm12 = var_568_6
                        
                        if (temp57_1 != 0)
                            arg11 = _mm_blend_ps(arg11, zmm1, 1)
                            zmm9 = var_548_4
                            zmm2 = _mm_add_ps(zmm2, temp0_1886)
                            
                            if (temp57_1 != 0)
                                goto label_140210141
                            
                            goto label_14020ff31
                        
                        zmm9 = var_548_4
                        zmm2 = _mm_add_ps(zmm2, temp0_1886)
                        bool cond:239_1
                        bool cond:240_1
                        bool cond:264_1
                        bool cond:265_1
                        
                        if (temp57_1 != 0)
                        label_140210141:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 1)
                            arg5 = var_518_8
                            char temp98_1 = temp0_1765 & 2
                            cond:239_1 = temp98_1 == 0
                            cond:240_1 = temp98_1 != 0
                            cond:264_1 = temp98_1 == 0
                            cond:265_1 = temp98_1 != 0
                            
                            if (temp98_1 != 0)
                                goto label_14020ff42
                            
                            goto label_140210159
                        
                    label_14020ff31:
                        arg5 = var_518_8
                        char temp97_1 = temp0_1765 & 2
                        cond:239_1 = temp97_1 == 0
                        cond:240_1 = temp97_1 != 0
                        cond:264_1 = temp97_1 == 0
                        cond:265_1 = temp97_1 != 0
                        
                        if (temp97_1 == 0)
                        label_140210159:
                            
                            if (not(cond:239_1))
                            label_14021015f:
                                arg11 = _mm_blend_ps(arg11, zmm1, 2)
                                
                                if (cond:265_1)
                                    goto label_14020ff55
                                
                                goto label_14021016c
                        else
                        label_14020ff42:
                            zmm15 = _mm_blend_ps(zmm15, zmm4, 2)
                            
                            if (cond:240_1)
                                goto label_14021015f
                        
                        bool cond:303_1
                        bool cond:304_1
                        bool cond:321_1
                        bool cond:322_1
                        
                        if (not(cond:264_1))
                        label_14020ff55:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 2)
                            char temp120_1 = temp0_1765 & 4
                            cond:303_1 = temp120_1 == 0
                            cond:304_1 = temp120_1 != 0
                            cond:321_1 = temp120_1 == 0
                            cond:322_1 = temp120_1 != 0
                            
                            if (temp120_1 != 0)
                                goto label_140210175
                            
                            goto label_14020ff65
                        
                    label_14021016c:
                        char temp119_1 = temp0_1765 & 4
                        cond:303_1 = temp119_1 == 0
                        cond:304_1 = temp119_1 != 0
                        cond:321_1 = temp119_1 == 0
                        cond:322_1 = temp119_1 != 0
                        
                        if (temp119_1 == 0)
                        label_14020ff65:
                            
                            if (not(cond:303_1))
                            label_14020ff6b:
                                arg11 = _mm_blend_ps(arg11, zmm1, 4)
                                
                                if (cond:322_1)
                                    goto label_140210188
                                
                                goto label_14020ff78
                        else
                        label_140210175:
                            zmm15 = _mm_blend_ps(zmm15, zmm4, 4)
                            
                            if (cond:304_1)
                                goto label_14020ff6b
                        
                        bool cond:341_1
                        bool cond:342_1
                        bool cond:353_1
                        bool cond:354_1
                        
                        if (not(cond:321_1))
                        label_140210188:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 4)
                            char temp134_1 = temp0_1765 & 8
                            cond:341_1 = temp134_1 == 0
                            cond:342_1 = temp134_1 != 0
                            cond:353_1 = temp134_1 == 0
                            cond:354_1 = temp134_1 != 0
                            
                            if (temp134_1 != 0)
                                goto label_14020ff81
                            
                            goto label_140210198
                        
                    label_14020ff78:
                        char temp133_1 = temp0_1765 & 8
                        cond:341_1 = temp133_1 == 0
                        cond:342_1 = temp133_1 != 0
                        cond:353_1 = temp133_1 == 0
                        cond:354_1 = temp133_1 != 0
                        
                        if (temp133_1 != 0)
                        label_14020ff81:
                            zmm15 = _mm_blend_ps(zmm15, zmm4, 8)
                            
                            if (cond:342_1)
                                goto label_14021019e
                            
                            goto label_14020ff8e
                        
                    label_140210198:
                        
                        if (cond:341_1)
                        label_14020ff8e:
                            
                            if (not(cond:353_1))
                                zmm12 = _mm_blend_ps(zmm12, zmm2, 8)
                        else
                        label_14021019e:
                            arg11 = _mm_blend_ps(arg11, zmm1, 8)
                            
                            if (cond:354_1)
                                zmm12 = _mm_blend_ps(zmm12, zmm2, 8)
                        
                        zmm2 = var_528_6
                    
                    arg7 ^= var_4f8_7
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm2 & arg7, 0x1f)) == 0)
                        zmm4 = zmm15
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_478_4)
                        zmm4 = zmm2 & zmm0
                        zmm1 = _mm_slli_epi32(zmm4, 0x1f)
                        char temp0_1899 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_1899 == 0)
                            zmm4 = zmm15
                        else
                            uint128_t var_5a8_2 = zmm0
                            zmm0 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f)
                            uint128_t var_4a8_5 = zmm0
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm0
                            int64_t var_588_5[0x2] = arg7
                            int64_t var_578_3[0x2] = arg11
                            
                            if (_mm_movemask_ps(zmm1) != 0)
                                arg5 = data_1434426b0
                                zmm3 = var_4d8_2
                                int32_t temp0_1904[0x4] = _mm_add_epi64(zmm3, arg5)
                                arg7 = var_4b8_2
                                arg5 = _mm_add_epi64(arg5, arg7)
                                float temp0_1906[0x4] = _mm_unpacklo_ps(zmm1, zmm1.q)
                                var_4b8_2 = _mm_blendv_ps(arg7, arg5, temp0_1906)
                                zmm1 = _mm_unpackhi_ps(zmm1, zmm1)
                                var_4d8_2 = _mm_blendv_ps(zmm3, temp0_1904, zmm1)
                                arg11 = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                                int32_t temp0_1911[0x4] = __paddq_xmmdq_memdq(var_418_2, var_598_4)
                                zmm0 = data_1434426c0
                                int32_t temp0_1912[0x4] = __paddq_xmmdq_memdq(temp0_1911, var_4c8_2)
                                arg11 = _mm_add_epi64(__paddq_xmmdq_memdq(arg11, var_488_4), zmm0)
                                int32_t temp0_1916[0x4] = _mm_blendv_ps(zx.o(0), 
                                    _mm_add_epi64(temp0_1912, zmm0), temp0_1906)
                                float temp0_1917[0x4] = _mm_blendv_ps(zx.o(0), arg11, zmm1)
                                int64_t rax_419 = _mm_extract_epi64(temp0_1916, 1)
                                int64_t rbp_67 = temp0_1916[0].q
                                int64_t rbx_43 = temp0_1917[0].q
                                int64_t rdi_11 = _mm_extract_epi64(temp0_1917, 1)
                                zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbp_67)), 
                                                *(arg4 + rax_419), 1), 
                                            *(arg4 + rbx_43), 2), 
                                        *(arg4 + rdi_11), 3).q), 
                                    data_143442b40))
                            
                            zmm1 = _mm_blendv_ps(zx.o(0), zmm2, var_4a8_5)
                            
                            if ((temp0_1899 & 1) != 0)
                                zmm15 = _mm_blend_ps(zmm15, zmm1, 1)
                            
                            zmm0 = arg6
                            arg11 = var_578_3
                            zmm12 = zmm12
                            
                            if ((temp0_1899 & 2) != 0)
                                zmm15 = _mm_blend_ps(zmm15, zmm1, 2)
                                
                                if ((temp0_1899 & 4) != 0)
                                    goto label_1402102ec
                                
                                goto label_14021020d
                            
                            if ((temp0_1899 & 4) == 0)
                            label_14021020d:
                                
                                if ((temp0_1899 & 8) != 0)
                                    zmm15 = _mm_blend_ps(zmm15, zmm1, 8)
                            else
                            label_1402102ec:
                                zmm15 = _mm_blend_ps(zmm15, zmm1, 4)
                                
                                if ((temp0_1899 & 8) != 0)
                                    zmm15 = _mm_blend_ps(zmm15, zmm1, 8)
                            
                            zmm1 = data_143442c40
                            arg5 = zmm0 & zmm1
                            zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, arg5) & zmm4, 0x1f)
                            char temp0_1936 = _mm_movemask_ps(zmm1)
                            
                            if (temp0_1936 == 0)
                                arg7 = zmm0
                                zmm2 = var_4b8_2
                                zmm1 = var_4d8_2
                            else
                                zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                                arg6 = data_1434426b0
                                zmm3 = var_4d8_2
                                arg7 = _mm_add_epi64(zmm3, arg6)
                                zmm2 = var_4b8_2
                                zmm2 = _mm_blendv_ps(zmm2, _mm_add_epi64(arg6, zmm2), 
                                    _mm_shuffle_epi32(zmm1, 0x50))
                                zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                                zmm1 = _mm_blendv_ps(zmm3, arg7, zmm0)
                                
                                if ((temp0_1936 & 1) == 0)
                                    if ((temp0_1936 & 2) != 0)
                                        goto label_1402108a6
                                    
                                    goto label_14021029d
                                
                                zmm0 = zx.o(*var_4b8_2.q)
                                
                                if ((temp0_1936 & 2) != 0)
                                label_1402108a6:
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_4b8_2, 1)), 1)
                                    arg7 = var_558_1
                                    
                                    if ((temp0_1936 & 4) == 0)
                                        goto label_1402102ad
                                    
                                    goto label_1402108cd
                                
                            label_14021029d:
                                arg7 = var_558_1
                                
                                if ((temp0_1936 & 4) != 0)
                                label_1402108cd:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*var_4d8_2[0].q), 2)
                                    
                                    if ((temp0_1936 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(var_4d8_2, 1)), 3)
                                else
                                label_1402102ad:
                                    
                                    if ((temp0_1936 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(var_4d8_2, 1)), 3)
                                
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_blend_epi16(zx.o(0), zmm0, 0x55), data_143442b40))
                            
                            arg5 = _mm_cmpeq_epi32(arg5, zx.o(0)) & not.o(zmm0)
                            
                            if ((temp0_1899 & 1) != 0)
                                arg11 = _mm_blend_epi16(arg11, arg5, 3)
                            
                            zmm3 = var_458_5
                            arg6 = arg7
                            arg7 = var_588_5
                            
                            if ((temp0_1899 & 2) != 0)
                                arg11 = _mm_blend_epi16(arg11, arg5, 0xc)
                                
                                if ((temp0_1899 & 4) != 0)
                                    goto label_1402103f2
                                
                                goto label_140210358
                            
                            if ((temp0_1899 & 4) == 0)
                            label_140210358:
                                
                                if ((temp0_1899 & 8) != 0)
                                    arg11 = _mm_blend_epi16(arg11, arg5, 0xc0)
                            else
                            label_1402103f2:
                                arg11 = _mm_blend_epi16(arg11, arg5, 0x30)
                                
                                if ((temp0_1899 & 8) != 0)
                                    arg11 = _mm_blend_epi16(arg11, arg5, 0xc0)
                            
                            arg5 = var_518_8
                            zmm0 = data_143442c50
                            arg6 &= zmm0
                            zmm0 = _mm_cmpeq_epi32(zmm0, arg6)
                            char temp0_1955 = _mm_movemask_ps(_mm_slli_epi32(zmm4 & zmm0, 0x1f))
                            
                            if (temp0_1955 == 0)
                                zmm4 = zmm15
                                zmm2 = var_528_6
                            else
                                if ((temp0_1955 & 1) == 0)
                                    if ((temp0_1955 & 2) != 0)
                                        goto label_140210902
                                    
                                    goto label_1402103a5
                                
                                zmm0 = zx.o(*zmm2[0].q)
                                
                                if ((temp0_1955 & 2) != 0)
                                label_140210902:
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm4 = zmm15
                                    zmm2 = var_528_6
                                    
                                    if ((temp0_1955 & 4) == 0)
                                        goto label_1402103bc
                                    
                                    goto label_140210927
                                
                            label_1402103a5:
                                zmm4 = zmm15
                                zmm2 = var_528_6
                                
                                if ((temp0_1955 & 4) != 0)
                                label_140210927:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm1.q), 2)
                                    
                                    if ((temp0_1955 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                else
                                label_1402103bc:
                                    
                                    if ((temp0_1955 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_blend_epi16(zx.o(0), zmm0, 0x55), data_143442b40))
                            
                            arg6 = _mm_cmpeq_epi32(arg6, zx.o(0)) & not.o(zmm0)
                            
                            if ((temp0_1899 & 1) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, arg6, 3)
                                zmm0 = var_5a8_2
                                
                                if ((temp0_1899 & 2) != 0)
                                    goto label_140210453
                                
                                goto label_140210436
                            
                            zmm0 = var_5a8_2
                            
                            if ((temp0_1899 & 2) != 0)
                            label_140210453:
                                zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc)
                                
                                if ((temp0_1899 & 4) != 0)
                                    goto label_14021043b
                                
                                goto label_14021045f
                            
                        label_140210436:
                            
                            if ((temp0_1899 & 4) == 0)
                            label_14021045f:
                                
                                if ((temp0_1899 & 8) != 0)
                                    zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc0)
                            else
                            label_14021043b:
                                zmm12 = _mm_blend_epi16(zmm12, arg6, 0x30)
                                
                                if ((temp0_1899 & 8) != 0)
                                    zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc0)
                        
                        arg7 = (arg7 ^ zmm0) & zmm2
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(arg7, 0x1f)) != 0)
                            zmm0 = __pcmpeqd_xmmdq_memdq(var_478_4, data_143442ad0)
                            char temp0_1970 = _mm_movemask_ps(_mm_slli_epi32(zmm2 & zmm0, 0x1f))
                            
                            if (temp0_1970 != 0)
                                char temp70_1 = temp0_1970 & 1
                                
                                if (temp70_1 != 0)
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 1)
                                    
                                    if (temp70_1 != 0)
                                        goto label_140210507
                                else if (temp70_1 != 0)
                                label_140210507:
                                    arg11 = _mm_blend_ps(arg11, zx.o(0), 1)
                                    
                                    if (temp70_1 != 0)
                                        goto label_1402104c6
                                    
                                    goto label_140210510
                                
                                bool cond:262_1
                                bool cond:263_1
                                bool cond:286_1
                                bool cond:287_1
                                
                                if (temp70_1 != 0)
                                label_1402104c6:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 1)
                                    char temp96_1 = temp0_1970 & 2
                                    cond:262_1 = temp96_1 == 0
                                    cond:263_1 = temp96_1 != 0
                                    cond:286_1 = temp96_1 == 0
                                    cond:287_1 = temp96_1 != 0
                                    
                                    if (temp96_1 != 0)
                                        goto label_140210515
                                    
                                    goto label_1402104d2
                                
                            label_140210510:
                                char temp95_1 = temp0_1970 & 2
                                cond:262_1 = temp95_1 == 0
                                cond:263_1 = temp95_1 != 0
                                cond:286_1 = temp95_1 == 0
                                cond:287_1 = temp95_1 != 0
                                
                                if (temp95_1 == 0)
                                label_1402104d2:
                                    
                                    if (not(cond:262_1))
                                    label_1402104d4:
                                        arg11 = _mm_blend_ps(arg11, zx.o(0), 2)
                                        
                                        if (cond:287_1)
                                            goto label_14021051f
                                        
                                        goto label_1402104dd
                                else
                                label_140210515:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 2)
                                    
                                    if (cond:263_1)
                                        goto label_1402104d4
                                
                                bool cond:319_1
                                bool cond:320_1
                                bool cond:335_1
                                bool cond:336_1
                                
                                if (not(cond:286_1))
                                label_14021051f:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 2)
                                    char temp118_1 = temp0_1970 & 4
                                    cond:319_1 = temp118_1 == 0
                                    cond:320_1 = temp118_1 != 0
                                    cond:335_1 = temp118_1 == 0
                                    cond:336_1 = temp118_1 != 0
                                    
                                    if (temp118_1 != 0)
                                        goto label_1402104e2
                                    
                                    goto label_14021052b
                                
                            label_1402104dd:
                                char temp117_1 = temp0_1970 & 4
                                cond:319_1 = temp117_1 == 0
                                cond:320_1 = temp117_1 != 0
                                cond:335_1 = temp117_1 == 0
                                cond:336_1 = temp117_1 != 0
                                
                                if (temp117_1 == 0)
                                label_14021052b:
                                    
                                    if (not(cond:319_1))
                                    label_14021052d:
                                        arg11 = _mm_blend_ps(arg11, zx.o(0), 4)
                                        
                                        if (cond:336_1)
                                            goto label_1402104ec
                                        
                                        goto label_140210536
                                else
                                label_1402104e2:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 4)
                                    
                                    if (cond:320_1)
                                        goto label_14021052d
                                
                                bool cond:351_1
                                bool cond:352_1
                                bool cond:363_1
                                bool cond:364_1
                                
                                if (not(cond:335_1))
                                label_1402104ec:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 4)
                                    char temp132_1 = temp0_1970 & 8
                                    cond:351_1 = temp132_1 == 0
                                    cond:352_1 = temp132_1 != 0
                                    cond:363_1 = temp132_1 == 0
                                    cond:364_1 = temp132_1 != 0
                                    
                                    if (temp132_1 != 0)
                                        goto label_14021053b
                                    
                                    goto label_1402104f8
                                
                            label_140210536:
                                char temp131_1 = temp0_1970 & 8
                                cond:351_1 = temp131_1 == 0
                                cond:352_1 = temp131_1 != 0
                                cond:363_1 = temp131_1 == 0
                                cond:364_1 = temp131_1 != 0
                                
                                if (temp131_1 != 0)
                                label_14021053b:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 8)
                                    
                                    if (cond:352_1)
                                        goto label_1402104fa
                                    
                                    goto label_140210543
                                
                            label_1402104f8:
                                
                                if (cond:351_1)
                                label_140210543:
                                    
                                    if (not(cond:363_1))
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                                else
                                label_1402104fa:
                                    arg11 = _mm_blend_ps(arg11, zx.o(0), 8)
                                    
                                    if (cond:364_1)
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                            
                            char temp0_1984 =
                                _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(arg7), 0x1f))
                            
                            if (temp0_1984 != 0)
                                char temp77_1 = temp0_1984 & 1
                                
                                if (temp77_1 != 0)
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 1)
                                    
                                    if (temp77_1 != 0)
                                        goto label_1402105b7
                                else if (temp77_1 != 0)
                                label_1402105b7:
                                    arg11 = _mm_blend_ps(arg11, zx.o(0), 1)
                                    
                                    if (temp77_1 != 0)
                                        goto label_140210576
                                    
                                    goto label_1402105c0
                                
                                bool cond:284_1
                                bool cond:285_1
                                bool cond:301_1
                                bool cond:302_1
                                
                                if (temp77_1 != 0)
                                label_140210576:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 1)
                                    char temp104_1 = temp0_1984 & 2
                                    cond:284_1 = temp104_1 == 0
                                    cond:285_1 = temp104_1 != 0
                                    cond:301_1 = temp104_1 == 0
                                    cond:302_1 = temp104_1 != 0
                                    
                                    if (temp104_1 != 0)
                                        goto label_1402105c5
                                    
                                    goto label_140210582
                                
                            label_1402105c0:
                                char temp103_1 = temp0_1984 & 2
                                cond:284_1 = temp103_1 == 0
                                cond:285_1 = temp103_1 != 0
                                cond:301_1 = temp103_1 == 0
                                cond:302_1 = temp103_1 != 0
                                
                                if (temp103_1 == 0)
                                label_140210582:
                                    
                                    if (not(cond:284_1))
                                    label_140210584:
                                        arg11 = _mm_blend_ps(arg11, zx.o(0), 2)
                                        
                                        if (cond:302_1)
                                            goto label_1402105cf
                                        
                                        goto label_14021058d
                                else
                                label_1402105c5:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 2)
                                    
                                    if (cond:285_1)
                                        goto label_140210584
                                
                                bool cond:333_1
                                bool cond:334_1
                                bool cond:339_1
                                bool cond:340_1
                                
                                if (not(cond:301_1))
                                label_1402105cf:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 2)
                                    char temp124_1 = temp0_1984 & 4
                                    cond:333_1 = temp124_1 == 0
                                    cond:334_1 = temp124_1 != 0
                                    cond:339_1 = temp124_1 == 0
                                    cond:340_1 = temp124_1 != 0
                                    
                                    if (temp124_1 != 0)
                                        goto label_140210592
                                    
                                    goto label_1402105db
                                
                            label_14021058d:
                                char temp123_1 = temp0_1984 & 4
                                cond:333_1 = temp123_1 == 0
                                cond:334_1 = temp123_1 != 0
                                cond:339_1 = temp123_1 == 0
                                cond:340_1 = temp123_1 != 0
                                
                                if (temp123_1 == 0)
                                label_1402105db:
                                    
                                    if (not(cond:333_1))
                                    label_1402105dd:
                                        arg11 = _mm_blend_ps(arg11, zx.o(0), 4)
                                        
                                        if (cond:340_1)
                                            goto label_14021059c
                                        
                                        goto label_1402105e6
                                else
                                label_140210592:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 4)
                                    
                                    if (cond:334_1)
                                        goto label_1402105dd
                                
                                bool cond:361_1
                                bool cond:362_1
                                bool cond:369_1
                                bool cond:370_1
                                
                                if (not(cond:339_1))
                                label_14021059c:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 4)
                                    char temp136_1 = temp0_1984 & 8
                                    cond:361_1 = temp136_1 == 0
                                    cond:362_1 = temp136_1 != 0
                                    cond:369_1 = temp136_1 == 0
                                    cond:370_1 = temp136_1 != 0
                                    
                                    if (temp136_1 != 0)
                                        goto label_1402105eb
                                    
                                    goto label_1402105a8
                                
                            label_1402105e6:
                                char temp135_1 = temp0_1984 & 8
                                cond:361_1 = temp135_1 == 0
                                cond:362_1 = temp135_1 != 0
                                cond:369_1 = temp135_1 == 0
                                cond:370_1 = temp135_1 != 0
                                
                                if (temp135_1 != 0)
                                label_1402105eb:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 8)
                                    
                                    if (cond:362_1)
                                        goto label_1402105aa
                                    
                                    goto label_1402105f3
                                
                            label_1402105a8:
                                
                                if (cond:361_1)
                                label_1402105f3:
                                    
                                    if (not(cond:369_1))
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                                else
                                label_1402105aa:
                                    arg11 = _mm_blend_ps(arg11, zx.o(0), 8)
                                    
                                    if (cond:370_1)
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                
                zmm4 = _mm_sub_ps(zmm4, arg8)
                arg11 = _mm_sub_ps(arg11, arg5)
                zmm4 = _mm_mul_ps(zmm4, zmm9)
                zmm1 = arg8
                char temp29_1 = temp0_1668 & 1
                
                if (temp29_1 != 0)
                    zmm1.d = arg8.d f+ zmm4[0]
                    zmm12 = _mm_sub_ps(zmm12, zmm3)
                    arg11 = _mm_mul_ps(arg11, zmm9)
                    zmm2 = arg5
                    
                    if (temp29_1 != 0)
                        goto label_1402107f2
                    
                    goto label_140210631
                
                zmm12 = _mm_sub_ps(zmm12, zmm3)
                arg11 = _mm_mul_ps(arg11, zmm9)
                zmm2 = arg5
                
                if (temp29_1 != 0)
                label_1402107f2:
                    zmm2 = arg5
                    zmm2[0] = zmm2[0] f+ arg11[0].d
                    zmm9 = _mm_mul_ps(zmm9, zmm12)
                    zmm0 = zmm3
                    
                    if (temp29_1 != 0)
                        goto label_140210641
                    
                    goto label_140210807
                
            label_140210631:
                zmm9 = _mm_mul_ps(zmm9, zmm12)
                zmm0 = zmm3
                bool cond:135_1
                bool cond:136_1
                bool cond:152_1
                bool cond:153_1
                
                if (temp29_1 != 0)
                label_140210641:
                    zmm0.d = zmm3.d f+ zmm9[0]
                    arg8 = _mm_add_ps(arg8, zmm4)
                    char temp47_1 = temp0_1668 & 2
                    cond:135_1 = temp47_1 == 0
                    cond:136_1 = temp47_1 != 0
                    cond:152_1 = temp47_1 == 0
                    cond:153_1 = temp47_1 != 0
                    
                    if (temp47_1 != 0)
                        goto label_140210814
                    
                    goto label_140210653
                
            label_140210807:
                arg8 = _mm_add_ps(arg8, zmm4)
                char temp46_1 = temp0_1668 & 2
                cond:135_1 = temp46_1 == 0
                cond:136_1 = temp46_1 != 0
                cond:152_1 = temp46_1 == 0
                cond:153_1 = temp46_1 != 0
                
                if (temp46_1 != 0)
                label_140210814:
                    zmm1 = _mm_blend_ps(zmm1, arg8, 2)
                    arg5 = _mm_add_ps(arg5, arg11)
                    
                    if (cond:136_1)
                        goto label_14021065d
                    
                    goto label_140210825
                
            label_140210653:
                arg5 = _mm_add_ps(arg5, arg11)
                
                if (not(cond:135_1))
                label_14021065d:
                    zmm2 = _mm_blend_ps(zmm2, arg5, 2)
                    zmm3 = _mm_add_ps(zmm3, zmm9)
                    
                    if (cond:153_1)
                        goto label_14021082f
                    
                    goto label_14021066d
                
            label_140210825:
                zmm3 = _mm_add_ps(zmm3, zmm9)
                bool cond:187_1
                bool cond:188_1
                bool cond:213_1
                bool cond:214_1
                
                if (not(cond:152_1))
                label_14021082f:
                    zmm0 = _mm_blend_ps(zmm0, zmm3, 2)
                    char temp69_1 = temp0_1668 & 4
                    cond:187_1 = temp69_1 == 0
                    cond:188_1 = temp69_1 != 0
                    cond:213_1 = temp69_1 == 0
                    cond:214_1 = temp69_1 != 0
                    
                    if (temp69_1 != 0)
                        goto label_140210676
                    
                    goto label_14021083e
                
            label_14021066d:
                char temp68_1 = temp0_1668 & 4
                cond:187_1 = temp68_1 == 0
                cond:188_1 = temp68_1 != 0
                cond:213_1 = temp68_1 == 0
                cond:214_1 = temp68_1 != 0
                
                if (temp68_1 == 0)
                label_14021083e:
                    
                    if (not(cond:187_1))
                    label_140210844:
                        zmm2 = _mm_blend_ps(zmm2, arg5, 4)
                        
                        if (cond:214_1)
                            goto label_140210689
                        
                        goto label_140210850
                else
                label_140210676:
                    zmm1 = _mm_blend_ps(zmm1, arg8, 4)
                    
                    if (cond:188_1)
                        goto label_140210844
                
                bool cond:260_1
                bool cond:261_1
                bool cond:282_1
                bool cond:283_1
                
                if (not(cond:213_1))
                label_140210689:
                    zmm0 = _mm_blend_ps(zmm0, zmm3, 4)
                    char temp94_1 = temp0_1668 & 8
                    cond:260_1 = temp94_1 == 0
                    cond:261_1 = temp94_1 != 0
                    cond:282_1 = temp94_1 != 0
                    cond:283_1 = temp94_1 == 0
                    
                    if (temp94_1 != 0)
                        goto label_140210859
                    
                    goto label_140210698
                
            label_140210850:
                char temp93_1 = temp0_1668 & 8
                cond:260_1 = temp93_1 == 0
                cond:261_1 = temp93_1 != 0
                cond:282_1 = temp93_1 != 0
                cond:283_1 = temp93_1 == 0
                
                if (temp93_1 != 0)
                label_140210859:
                    arg8 = _mm_blend_ps(arg8, zmm1, 7)
                    
                    if (cond:261_1)
                        goto label_1402106a2
                    
                    goto label_140210866
                
            label_140210698:
                arg8 = zmm1
                
                if (cond:260_1)
                label_140210866:
                    arg5 = zmm2
                    
                    if (cond:282_1)
                        zmm0 = _mm_blend_ps(zmm0, zmm3, 8)
                else
                label_1402106a2:
                    arg5 = _mm_blend_ps(arg5, zmm2, 7)
                    
                    if (not(cond:283_1))
                        zmm0 = _mm_blend_ps(zmm0, zmm3, 8)
                
                arg6 = zmm0
                rcx_96 = _mm_movemask_ps(_mm_and_ps(arg10, arg9))
                
                if (rcx_96 != 0)
                    goto label_14020c8b7
        zmm1 = _mm_unpacklo_ps(arg6, 0)
        float temp0_2014[0x4] = _mm_unpackhi_ps(arg6, zx.o(0))
        zmm0 = _mm_unpacklo_ps(arg8, arg5[0].q)
        arg8 = _mm_unpackhi_ps(arg8, arg5)
        int32_t var_168[0x4] = _mm_insert_ps(zmm0, arg6, 0x28)
        uint128_t var_158_1 = _mm_unpackhi_pd(zmm0, zmm1.q)
        uint128_t var_148_1 = _mm_insert_ps(arg8, arg6, 0xa8)
        int32_t var_138_1[0x4] = _mm_unpackhi_pd(arg8, temp0_2014[0].q)
        uint64_t i_2 = zx.q(_mm_movemask_ps(arg9))
        
        do
            uint64_t rcx_109
            uint64_t rflags_1
            
            if (i_2 == 0)
                rcx_109 = 0x40
            else
                rcx_109, rflags_1 = _bit_scan_forward(i_2)
            float var_178[0x4] = zmm10
            result = sx.q(var_178[zx.q(rcx_109.d) & 3]) * 0x30
            *(arg1 + result + 0x10) = (&var_168)[rcx_109]
            i_2 &= rol.q(-2, rcx_109.b)
        while (i_2 != 0)
else
    var_188 = _mm_shuffle_epi32(_mm_add_epi64(4, zx.o(arg4)), 0x44)
    var_2d8 = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t rbp_1
    rbp_1.b = 0f >= zmm2[0]
    var_198 = _mm_shuffle_epi32(zx.o(neg.d(rbp_1)), 0)
    zmm3[0] = float.s(arg12 - 1)
    zmm3[0] = zmm3[0] f* zmm2[0]
    zmm12 = zx.o(0)
    uint128_t var_418_1 = _mm_shuffle_epi32(
        _mm_min_epi32(zx.o(arg12 - 2), _mm_max_epi32(zx.o(int.d(zmm3[0])), zx.o(0))), 0)
    var_1b8 = _mm_shuffle_ps(zmm3, zmm3, 0)
    r12 = 0
    arg7 = _mm_cmpeq_epi32(arg7, arg7)
    zmm15 = data_142d3f5b0
    
    do
        int64_t rcx_4 = sx.q((r12 << 3).d)
        zmm0 = *(arg2 + rcx_4)
        zmm1 = *(arg2 + rcx_4 + 0x10)
        uint128_t var_458_1 = zmm0
        uint128_t var_488_1 = zmm1
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, zmm1, 0xdd), 3)
        int32_t temp0_13 = _mm_extract_epi32(zmm0, 1)
        int64_t rbx_2 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rsi_2 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm2 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + sx.q(zmm0.d))), *(arg3 + sx.q(temp0_13)), 
                    1), 
                *(arg3 + rbx_2), 2), 
            *(arg3 + rsi_2), 3)
        zmm10 = _mm_cmpeq_epi32(zmm2, arg7)
        zmm9 = zmm10 ^ arg7
        uint32_t rcx_47
        
        if (_mm_movemask_ps(zmm9) == 0)
        label_14020c2aa:
            rcx_47 = _mm_movemask_ps(zmm9 ^ arg7)
            
            if (rcx_47 != 0)
            label_14020a8c1:
                char rcx_48 = rcx_47.b
                char temp2_1 = rcx_48 & 1
                
                if (temp2_1 != 0)
                    arg11 = _mm_blend_ps(arg11, zmm12, 1)
                    
                    if (temp2_1 != 0)
                        goto label_14020a922
                else if (temp2_1 != 0)
                label_14020a922:
                    arg9 = _mm_blend_ps(arg9, zmm12, 1)
                    
                    if (temp2_1 != 0)
                        goto label_14020a8d3
                    
                    goto label_14020a92b
                
                bool cond:17_1
                bool cond:18_1
                bool cond:22_1
                bool cond:23_1
                
                if (temp2_1 != 0)
                label_14020a8d3:
                    arg10 = _mm_blend_ps(arg10, zmm12, 1)
                    char temp6_1 = rcx_48 & 2
                    cond:17_1 = temp6_1 == 0
                    cond:18_1 = temp6_1 != 0
                    cond:22_1 = temp6_1 == 0
                    cond:23_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_14020a930
                    
                    goto label_14020a8df
                
            label_14020a92b:
                char temp5_1 = rcx_48 & 2
                cond:17_1 = temp5_1 == 0
                cond:18_1 = temp5_1 != 0
                cond:22_1 = temp5_1 == 0
                cond:23_1 = temp5_1 != 0
                
                if (temp5_1 == 0)
                label_14020a8df:
                    
                    if (not(cond:17_1))
                    label_14020a8e1:
                        arg9 = _mm_blend_ps(arg9, zmm12, 2)
                        
                        if (cond:23_1)
                            goto label_14020a93b
                        
                        goto label_14020a8ea
                else
                label_14020a930:
                    arg11 = _mm_blend_ps(arg11, zmm12, 2)
                    
                    if (cond:18_1)
                        goto label_14020a8e1
                
                bool cond:30_1
                bool cond:31_1
                bool cond:43_1
                bool cond:44_1
                
                if (not(cond:22_1))
                label_14020a93b:
                    arg10 = _mm_blend_ps(arg10, zmm12, 2)
                    char temp12_1 = rcx_48 & 4
                    cond:30_1 = temp12_1 == 0
                    cond:31_1 = temp12_1 != 0
                    cond:43_1 = temp12_1 == 0
                    cond:44_1 = temp12_1 != 0
                    
                    if (temp12_1 != 0)
                        goto label_14020a8ef
                    
                    goto label_14020a947
                
            label_14020a8ea:
                char temp11_1 = rcx_48 & 4
                cond:30_1 = temp11_1 == 0
                cond:31_1 = temp11_1 != 0
                cond:43_1 = temp11_1 == 0
                cond:44_1 = temp11_1 != 0
                
                if (temp11_1 == 0)
                label_14020a947:
                    
                    if (not(cond:30_1))
                    label_14020a949:
                        arg9 = _mm_blend_ps(arg9, zmm12, 4)
                        
                        if (cond:44_1)
                            goto label_14020a8fa
                        
                        goto label_14020a952
                else
                label_14020a8ef:
                    arg11 = _mm_blend_ps(arg11, zmm12, 4)
                    
                    if (cond:31_1)
                        goto label_14020a949
                
                bool cond:56_1
                bool cond:57_1
                bool cond:67_1
                bool cond:68_1
                
                if (not(cond:43_1))
                label_14020a8fa:
                    arg10 = _mm_blend_ps(arg10, zmm12, 4)
                    char temp20_1 = rcx_48 & 8
                    cond:56_1 = temp20_1 == 0
                    cond:57_1 = temp20_1 != 0
                    cond:67_1 = temp20_1 == 0
                    cond:68_1 = temp20_1 != 0
                    
                    if (temp20_1 != 0)
                        goto label_14020a957
                    
                    goto label_14020a906
                
            label_14020a952:
                char temp19_1 = rcx_48 & 8
                cond:56_1 = temp19_1 == 0
                cond:57_1 = temp19_1 != 0
                cond:67_1 = temp19_1 == 0
                cond:68_1 = temp19_1 != 0
                
                if (temp19_1 != 0)
                label_14020a957:
                    arg11 = _mm_blend_ps(arg11, zmm12, 8)
                    
                    if (cond:57_1)
                        goto label_14020a908
                    
                    goto label_14020a960
                
            label_14020a906:
                
                if (cond:56_1)
                label_14020a960:
                    
                    if (not(cond:67_1))
                        arg10 = _mm_blend_ps(arg10, zmm12, 8)
                else
                label_14020a908:
                    arg9 = _mm_blend_ps(arg9, zmm12, 8)
                    
                    if (cond:68_1)
                        arg10 = _mm_blend_ps(arg10, zmm12, 8)
        else
            zmm3 = _mm_shuffle_epi32(zmm2, 0x4e)
            zmm0 = zmm10 & not.o(zmm2)
            int32_t temp0_22 = _mm_extract_epi32(zmm0, 1)
            int64_t rbx_4 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rsi_4 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm1 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + sx.q(zmm0.d))), 
                        *(arg4 + sx.q(temp0_22)), 1), 
                    *(arg4 + rbx_4), 2), 
                *(arg4 + rsi_4), 3)
            arg8 = zx.o(0)
            zmm0 = zmm9
            float var_4c8[0x4] = _mm_blendv_ps(var_4c8, zmm1 & data_143442be0, zmm0)
            float var_558[0x4]
            float temp0_30[0x4] =
                _mm_blendv_ps(var_558, _mm_srli_epi32(zmm1, 0x18) & data_143442bf0, zmm0)
            int32_t var_468[0x4]
            arg6 = _mm_blendv_ps(var_468, _mm_srli_epi32(zmm1, 0x1c), zmm0)
            zmm1 = zmm10 & not.o(_mm_slli_epi32(arg6, 2))
            int64_t rbp_9 = sx.q(_mm_extract_epi32(zmm1, 1))
            int64_t rbx_6 = sx.q(_mm_extract_epi32(zmm1, 2))
            int32_t temp0_36 = _mm_extract_epi32(zmm1, 3)
            zmm0 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(sx.q(zmm1.d) + &data_143442c70)), 
                        *(rbp_9 + &data_143442c70), 1), 
                    *(rbx_6 + &data_143442c70), 2), 
                *(sx.q(temp0_36) + &data_143442c70), 3)
            var_558 = temp0_30
            arg5 = __andps_xmmxud_memxud(temp0_30, data_143442c00)
            float var_408_1[0x4] = arg5
            zmm4 = zmm10 & not.o(_mm_slli_epi32(arg6, 3) | arg5)
            int64_t rcx_14 = sx.q(zmm4[0])
            int64_t rbp_11 = sx.q(_mm_extract_epi32(zmm4, 1))
            int32_t temp0_43 = _mm_extract_epi32(zmm4, 2)
            int64_t rsi_7 = sx.q(_mm_extract_epi32(zmm4, 3))
            zmm4 = zmm9
            zmm9 = _mm_cvtepu8_epi32(__pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(
                    __pinsrb_xmmdq_memb_immb(zx.o(*(rcx_14 + &data_143442c90)), 
                        *(rbp_11 + &data_143442c90), 1), 
                    *(sx.q(temp0_43) + &data_143442c90), 2), 
                *(rsi_7 + &data_143442c90), 3).d)
            var_468 = arg6
            int32_t temp0_49[0x4] = __pcmpeqd_xmmdq_memdq(arg6, data_142fc95c0)
            zmm12 = zmm4
            arg5 = temp0_49 & not.o(zmm4)
            zmm4 = zx.o(0)
            
            if (_mm_movemask_ps(arg5) != 0)
                zmm4 = arg5 & zmm9
            
            int64_t temp0_51[0x2] = _mm_cvtepi32_epi64(zmm3[0].q)
            zmm1 = _mm_cvtepi32_epi64(zmm2[0].q)
            zmm2 = zmm10 & not.o(zmm0)
            zmm3 = zmm10 & not.o(data_142fc95e0)
            zmm0 = zmm10 & not.o(temp0_49)
            char temp0_53 = _mm_movemask_ps(zmm0)
            var_1c8 = zmm0
            arg6 = _mm_blendv_ps(zmm4, zmm15, zmm0)
            arg5 = zx.o(0)
            
            if (temp0_53 != 0)
                arg5 = zmm9 & var_1c8
                zmm4 = arg6
            
            arg5 = _mm_madd_epi16(arg5, zmm3)
            int32_t temp0_56[0x4] = _mm_mullo_epi32(zmm4, zmm2)
            uint128_t var_448_1 = zmm1
            arg6 = _mm_add_epi64(var_188, zmm1)
            var_4d8 = temp0_51
            uint128_t var_538_1 = _mm_add_epi64(var_188, temp0_51)
            zmm9 = zmm12
            zmm0 = zmm12
            float temp0_59[0x4] = _mm_blendv_ps(var_4b8, temp0_56, zmm0)
            zmm12 = _mm_blendv_ps(var_3a8, arg5, zmm0)
            zmm0 = zmm10 & not.o(_mm_cmpgt_epi32(var_4c8, zmm15))
            zmm4 = temp0_59
            var_4b8 = temp0_59
            int32_t var_568_1[0x4] = zmm9
            int32_t var_578_1[0x4] = arg6
            var_3a8 = zmm12
            float var_528_1[0x4] = arg9
            float var_518_1[0x4] = zmm10
            
            if (_mm_movemask_ps(zmm0) == 0)
                zmm3 = zx.o(0)
                zmm15 = zx.o(0)
            else
                uint32_t var_4f8_1[0x4] = arg10
                int64_t var_4e8_1[0x2] = arg11
                arg10 = var_558 & data_142fc95f0
                arg11 = zx.o(0)
                arg8 = _mm_slli_epi32(_mm_cmpeq_epi32(arg10, arg11) & zmm0, 0x1f)
                bool cond:11_1 = _mm_movemask_ps(arg8) == 0
                arg7 = _mm_cmpeq_epi32(temp0_51, temp0_51)
                int32_t var_588_1[0x4]
                
                if (cond:11_1)
                    zmm3 = zx.o(0)
                    var_588_1 = zx.o(0)
                    zmm15 = zx.o(0)
                    arg8 = zx.o(0)
                else
                    zmm2 = zx.o(0)
                    zmm1 = arg13
                    
                    if (0f f>= zmm1.d)
                        arg11 = zx.o(0)
                        zmm3 = zx.o(0)
                        var_588_1 = zx.o(0)
                        zmm15 = zx.o(0)
                    else
                        bool cond:19_1 = zmm1.d f>= 1f
                        zmm1 = _mm_add_epi32(var_4c8, arg7)
                        
                        if (cond:19_1)
                            arg11 = _mm_srai_epi32(arg8, 0x1f) & zmm1
                            zmm3 = arg11
                            var_588_1 = arg11
                            zmm15 = arg11
                        else
                            zmm3 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1), var_2d8)
                            arg7 = _mm_round_ps(zmm3, 9)
                            arg11 = _mm_min_epi32(_mm_cvttps_epi32(arg7), zmm1)
                            zmm2 = _mm_srai_epi32(arg8, 0x1f)
                            zmm15 = zmm2
                            arg11 &= zmm2
                            zmm2 = zx.o(0)
                            
                            if (arg14 != 1)
                                zmm2 = _mm_sub_ps(zmm3, arg7)
                            
                            arg7 = _mm_cmpeq_epi32(arg7, arg7)
                            zmm15 &= _mm_min_epi32(_mm_sub_epi32(arg11, arg7), zmm1)
                            zmm3 = arg11
                            var_588_1 = zmm15
                    
                    arg8 = _mm_srai_epi32(arg8, 0x1f) & zmm2
                
                uint32_t temp0_81[0x4] =
                    _mm_slli_epi32(_mm_cmpeq_epi32(arg10, zx.o(0)) & not.o(zmm0), 0x1f)
                zmm2 = _mm_srai_epi32(temp0_81, 0x1f)
                
                if (_mm_movemask_ps(zmm2) != 0)
                    zmm4 = var_4c8
                    arg5 = _mm_cmpgt_epi32(data_1434422d0, zmm4) | var_198
                    zmm0 = arg5 & zmm2
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm3 = zx.o(0)
                        arg11 = _mm_blendv_ps(arg11, zmm3, zmm0)
                        zmm15 = _mm_blendv_ps(var_588_1, zmm3, zmm0)
                        zmm3 = arg11
                        var_588_1 = zmm15
                    
                    zmm9 = arg5 & not.o(zmm2)
                    uint32_t temp0_88 = _mm_movemask_ps(zmm9)
                    zmm2 = zx.o(0)
                    
                    if (temp0_88 == 0)
                        arg11 = zmm3
                        arg9 = zmm15
                        zmm4 = var_4b8
                        zmm9 = var_568_1
                    else
                        float var_478_1[0x4] = arg5
                        arg5 = _mm_add_epi32(zmm4, arg7)
                        
                        if (arg13.d f>= 1f)
                            zmm0 = zmm9
                            arg11 = _mm_blendv_ps(arg11, arg5, zmm0)
                            arg9 = _mm_blendv_ps(var_588_1, arg5, zmm0)
                            zmm4 = var_4b8
                            zmm9 = var_568_1
                        else
                            int32_t var_548_1[0x4] = arg8
                            zmm0 = _mm_shuffle_epi32(zmm12, 0x4e)
                            zmm15 = _mm_cvtepi32_epi64(zmm12[0].q)
                            arg8 = _mm_cvtepi32_epi64(zmm0.q)
                            zmm0 = _mm_mullo_epi32(var_4b8, zmm4)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            int32_t temp0_95[0x4] = __paddq_xmmdq_memdq(arg8, var_538_1)
                            int32_t temp0_96[0x4] = _mm_add_epi64(zmm15, arg6)
                            zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            zmm2 = data_143442a20
                            int32_t temp0_100[0x4] =
                                _mm_add_epi64(_mm_add_epi64(temp0_95, zmm2), zmm1)
                            int32_t temp0_102[0x4] =
                                _mm_add_epi64(_mm_add_epi64(temp0_96, zmm2), zmm0)
                            zmm0 = data_143442c10
                            zmm15 = temp0_102 & zmm0
                            arg8 = temp0_100 & zmm0
                            zmm2 = zx.o(0)
                            arg9 = _mm_min_epi32(
                                _mm_max_epi32(
                                    _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(arg5), 
                                        var_2d8)), 
                                    zx.o(0)), 
                                arg5)
                            
                            if (arg12 s< 0x100)
                                zmm0 = _mm_shuffle_epi32(arg9, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), zmm15)
                                char rbx_10 = temp0_88.b
                                zmm12 = data_142ed6810
                                
                                if ((rbx_10 & 1) != 0)
                                    zmm3 = _mm_insert_epi32(var_318, zx.d(*zmm1.q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_10 & 2) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                else
                                    zmm3 = var_318
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_10 & 2) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbx_10 & 4) != 0)
                                    zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbx_10 & 8) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else if ((rbx_10 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm1 = __pcmpgtd_xmmdq_memdq(zmm3 & zmm12, var_418_1)
                                zmm0 = zmm1 ^ arg7
                                var_318 = zmm3
                                uint128_t var_4a8_2 = zmm0
                                zmm4 = arg9
                                
                                if (_mm_movemask_ps(zmm1 & not.o(zmm9)) != 0)
                                    zmm4 = _mm_blendv_ps(zmm4, arg5, zmm0)
                                    zmm0 = _mm_sub_epi32(arg9, arg7)
                                    zmm1 &= not.o(_mm_cmpgt_epi32(zmm0, arg5) ^ arg7)
                                    arg6 = zmm9 & zmm1
                                    uint32_t j = _mm_movemask_ps(arg6)
                                    
                                    if (j != 0)
                                        arg7 = arg9
                                        
                                        do
                                            zmm2 = zmm0
                                            zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                            int32_t temp0_167[0x4] =
                                                _mm_add_epi64(_mm_cvtepi32_epi64(zmm2[0].q), zmm15)
                                            char temp0_168 = _mm_movemask_ps(arg6)
                                            
                                            if ((temp0_168 & 1) != 0)
                                                arg6 = _mm_insert_epi32(var_1e8, 
                                                    zx.d(*temp0_167[0].q), 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_168 & 2) != 0)
                                                    arg6 = _mm_insert_epi32(arg6, 
                                                        zx.d(*_mm_extract_epi64(temp0_167, 1)), 1)
                                            else
                                                arg6 = var_1e8
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_168 & 2) != 0)
                                                    arg6 = _mm_insert_epi32(arg6, 
                                                        zx.d(*_mm_extract_epi64(temp0_167, 1)), 1)
                                            
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_168 & 4) != 0)
                                                arg6 = _mm_insert_epi32(arg6, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_168 & 8) != 0)
                                                    arg6 = _mm_insert_epi32(arg6, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else if ((temp0_168 & 8) != 0)
                                                arg6 = _mm_insert_epi32(arg6, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            var_1e8 = arg6
                                            zmm0 = __pcmpgtd_xmmdq_memdq(arg6 & zmm12, var_418_1)
                                                & zmm1
                                            zmm4 = _mm_blendv_ps(zmm4, arg7, zmm0)
                                            zmm3 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm9) != j)
                                                zmm3 = zmm0 ^ zmm1
                                            
                                            zmm0 = __psubd_xmmdq_memdq(zmm2, data_142d3f800)
                                            zmm1 = _mm_cmpgt_epi32(zmm0, arg5) & not.o(zmm3)
                                            arg6 = zmm1 & zmm9
                                            j = _mm_movemask_ps(arg6)
                                            arg7 = zmm2
                                        while (j != 0)
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(var_4a8_2, zmm9)) == 0)
                                    zmm3 = var_398
                                    zmm2 = var_328
                                    arg7 = _mm_cmpeq_epi32(arg7, arg7)
                                else
                                    arg7 = _mm_cmpeq_epi32(arg7, arg7)
                                    zmm0 = var_4a8_2 ^ arg7
                                    zmm4 = _mm_blendv_ps(zmm4, zx.o(0), zmm0)
                                    arg9 = _mm_add_epi32(arg9, arg7)
                                    arg6 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm0
                                    zmm0 = arg6 & zmm9
                                    uint32_t j_1 = _mm_movemask_ps(zmm0)
                                    
                                    if (j_1 == 0)
                                        zmm3 = var_398
                                    else
                                        zmm3 = var_398
                                        
                                        do
                                            zmm2 = _mm_shuffle_epi32(arg9, 0x4e)
                                            zmm1 =
                                                _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), zmm15)
                                            char temp0_196 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_196 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                                
                                                if ((temp0_196 & 2) != 0)
                                                    goto label_140208573
                                                
                                                goto label_1402085c5
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                            
                                            if ((temp0_196 & 2) != 0)
                                            label_140208573:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                                
                                                if ((temp0_196 & 4) == 0)
                                                    goto label_1402085d0
                                                
                                                goto label_14020858c
                                            
                                        label_1402085c5:
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_196 & 4) != 0)
                                            label_14020858c:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_196 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_1402085d0:
                                                
                                                if ((temp0_196 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm0 = __pcmpgtd_xmmdq_memdq(zmm3 & zmm12, var_418_1)
                                                & not.o(arg6)
                                            zmm4 = _mm_blendv_ps(zmm4, arg9, zmm0)
                                            zmm2 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm9) != j_1)
                                                zmm2 = zmm0 ^ arg6
                                            
                                            arg9 = _mm_add_epi32(arg9, arg7)
                                            arg6 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm2
                                            zmm0 = arg6 & zmm9
                                            j_1 = _mm_movemask_ps(zmm0)
                                        while (j_1 != 0)
                                    
                                    zmm2 = var_328
                                
                                arg11 = _mm_blendv_ps(arg11, zmm4, zmm9)
                                zmm0 = _mm_shuffle_epi32(arg11, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg11[0]), zmm15)
                                var_398 = zmm3
                                
                                if ((rbx_10 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_10 & 2) != 0)
                                        goto label_140208afd
                                    
                                    goto label_140208a41
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbx_10 & 2) != 0)
                                label_140208afd:
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbx_10 & 4) == 0)
                                        goto label_140208a4f
                                    
                                    goto label_140208b19
                                
                            label_140208a41:
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbx_10 & 4) != 0)
                                label_140208b19:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbx_10 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140208a4f:
                                    
                                    if ((rbx_10 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                arg9 = _mm_blendv_ps(var_588_1, _mm_sub_epi32(arg11, arg7), zmm9)
                                zmm0 = _mm_cmpgt_epi32(arg9, arg5) & zmm9
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    arg9 = _mm_blendv_ps(arg9, arg5, zmm0)
                                
                                zmm12 = var_3a8
                                zmm4 = var_4b8
                                zmm9 = var_568_1
                                zmm0 = _mm_shuffle_epi32(arg9, 0x4e)
                                int32_t temp0_283[0x4] =
                                    _mm_add_epi64(zmm15, _mm_cvtepi32_epi64(arg9[0].q))
                                
                                if ((rbx_10 & 1) != 0)
                                    zmm3 = _mm_insert_epi32(var_348, zx.d(*temp0_283[0].q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_10 & 2) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(temp0_283, 1)), 1)
                                else
                                    zmm3 = var_348
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_10 & 2) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(temp0_283, 1)), 1)
                                
                                arg6 = var_578_1
                                int32_t temp0_293[0x4] = _mm_add_epi64(arg8, zmm0)
                                
                                if ((rbx_10 & 4) != 0)
                                    zmm3 = _mm_insert_epi32(zmm3, zx.d(*temp0_293[0].q), 2)
                                    
                                    if ((rbx_10 & 8) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(temp0_293, 1)), 3)
                                else if ((rbx_10 & 8) != 0)
                                    zmm3 = _mm_insert_epi32(zmm3, 
                                        zx.d(*_mm_extract_epi64(temp0_293, 1)), 3)
                                
                                arg8 = var_548_1
                                var_328 = zmm2
                                zmm1 = data_142ed6810
                                zmm0 = zmm2 & zmm1
                                var_348 = zmm3
                                zmm2 = zmm3 & zmm1
                            else
                                zmm1 = _mm_add_epi32(arg9, arg9)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                                char rbx_9 = temp0_88.b
                                zmm3 = var_1a8
                                
                                if ((rbx_9 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_9 & 2) != 0)
                                        goto label_1402082b3
                                    
                                    goto label_140208046
                                
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbx_9 & 2) != 0)
                                label_1402082b3:
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbx_9 & 4) == 0)
                                        goto label_140208054
                                    
                                    goto label_1402082cf
                                
                            label_140208046:
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbx_9 & 4) != 0)
                                label_1402082cf:
                                    zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbx_9 & 8) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140208054:
                                    
                                    if ((rbx_9 & 8) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                int32_t temp0_116[0x4] = __pcmpgtd_xmmdq_memdq(
                                    _mm_blend_epi16(zmm3, zx.o(0), 0xaa), var_418_1)
                                zmm0 = temp0_116 ^ arg7
                                var_1a8 = zmm3
                                uint128_t var_4a8_1 = zmm0
                                
                                if (_mm_movemask_ps(temp0_116 & not.o(zmm9)) == 0)
                                    arg7 = arg9
                                else
                                    zmm2 = _mm_cmpeq_epi32(zx.o(0), zx.o(0))
                                    arg7 = _mm_blendv_ps(arg9, arg5, zmm0)
                                    zmm12 = _mm_sub_epi32(arg9, zmm2)
                                    arg6 = temp0_116 & not.o(_mm_cmpgt_epi32(zmm12, arg5) ^ zmm2)
                                    zmm4 = zmm9 & arg6
                                    uint32_t j_2 = _mm_movemask_ps(zmm4)
                                    
                                    if (j_2 != 0)
                                        zmm2 = arg9
                                        
                                        do
                                            zmm3 = zmm12
                                            zmm1 = _mm_add_epi32(zmm12, zmm12)
                                            zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                            zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                                            char temp0_128 = _mm_movemask_ps(zmm4)
                                            
                                            if ((temp0_128 & 1) != 0)
                                                zmm4 = _mm_insert_epi32(var_1d8, zx.d(*zmm1.q), 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_128 & 2) != 0)
                                                    zmm4 = _mm_insert_epi32(zmm4, 
                                                        zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                            else
                                                zmm4 = var_1d8
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_128 & 2) != 0)
                                                    zmm4 = _mm_insert_epi32(zmm4, 
                                                        zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                            
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_128 & 4) != 0)
                                                zmm4 = _mm_insert_epi32(zmm4, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_128 & 8) != 0)
                                                    zmm4 = _mm_insert_epi32(zmm4, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else if ((temp0_128 & 8) != 0)
                                                zmm4 = _mm_insert_epi32(zmm4, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm1 = zx.o(0)
                                            var_1d8 = zmm4
                                            zmm0 = __pcmpgtd_xmmdq_memdq(
                                                _mm_blend_epi16(zmm4, zx.o(0), 0xaa), var_418_1) & arg6
                                            arg7 = _mm_blendv_ps(arg7, zmm2, zmm0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm9) != j_2)
                                                zmm1 = zmm0 ^ arg6
                                            
                                            zmm12 = __psubd_xmmdq_memdq(zmm3, data_142d3f800)
                                            arg6 = _mm_cmpgt_epi32(zmm12, arg5) & not.o(zmm1)
                                            zmm4 = arg6 & zmm9
                                            j_2 = _mm_movemask_ps(zmm4)
                                            zmm2 = zmm3
                                        while (j_2 != 0)
                                
                                uint32_t temp0_208 = _mm_movemask_ps(_mm_andnot_ps(var_4a8_1, zmm9))
                                uint32_t j_3
                                int32_t temp0_211[0x4]
                                
                                if (temp0_208 != 0)
                                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                    zmm0 = var_4a8_1 ^ zmm2
                                    arg7 = _mm_blendv_ps(arg7, zx.o(0), zmm0)
                                    temp0_211 = _mm_cmpeq_epi32(zmm4, zmm4)
                                    arg9 = _mm_add_epi32(arg9, zmm2)
                                    arg6 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm0
                                    zmm0 = arg6 & zmm9
                                    j_3 = _mm_movemask_ps(zmm0)
                                
                                if (temp0_208 == 0 || j_3 == 0)
                                    zmm3 = var_388
                                else
                                    zmm3 = var_388
                                    
                                    do
                                        zmm1 = _mm_add_epi32(arg9, arg9)
                                        zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                                        zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                                        char temp0_224 = _mm_movemask_ps(zmm0)
                                        
                                        if ((temp0_224 & 1) == 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                            
                                            if ((temp0_224 & 2) != 0)
                                                goto label_1402086f3
                                            
                                            goto label_14020874d
                                        
                                        zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                        
                                        if ((temp0_224 & 2) != 0)
                                        label_1402086f3:
                                            zmm3 = _mm_insert_epi32(zmm3, 
                                                zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_224 & 4) == 0)
                                                goto label_140208758
                                            
                                            goto label_14020870c
                                        
                                    label_14020874d:
                                        zmm0 = _mm_add_epi64(zmm0, arg8)
                                        
                                        if ((temp0_224 & 4) != 0)
                                        label_14020870c:
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                            
                                            if ((temp0_224 & 8) != 0)
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        else
                                        label_140208758:
                                            
                                            if ((temp0_224 & 8) != 0)
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        
                                        zmm0 = __pcmpgtd_xmmdq_memdq(
                                            _mm_blend_epi16(zmm3, zx.o(0), 0xaa), var_418_1)
                                            & not.o(arg6)
                                        arg7 = _mm_blendv_ps(arg7, arg9, zmm0)
                                        zmm2 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm0 & zmm9) != j_3)
                                            zmm2 = zmm0 ^ arg6
                                        
                                        arg9 = _mm_add_epi32(arg9, temp0_211)
                                        arg6 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm2
                                        zmm0 = arg6 & zmm9
                                        j_3 = _mm_movemask_ps(zmm0)
                                    while (j_3 != 0)
                                
                                zmm2 = var_308
                                arg11 = _mm_blendv_ps(arg11, arg7, zmm9)
                                zmm1 = _mm_add_epi32(arg11, arg11)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                                
                                if ((rbx_9 & 1) == 0)
                                    arg7 = _mm_cmpeq_epi32(arg7, arg7)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_9 & 2) != 0)
                                        goto label_1402088fc
                                    
                                    goto label_140208828
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                                arg7 = _mm_cmpeq_epi32(arg7, arg7)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbx_9 & 2) != 0)
                                label_1402088fc:
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbx_9 & 4) == 0)
                                        goto label_140208836
                                    
                                    goto label_140208918
                                
                            label_140208828:
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbx_9 & 4) != 0)
                                label_140208918:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbx_9 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140208836:
                                    
                                    if ((rbx_9 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                arg9 = _mm_blendv_ps(var_588_1, _mm_sub_epi32(arg11, arg7), zmm9)
                                zmm0 = _mm_cmpgt_epi32(arg9, arg5) & zmm9
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    arg9 = _mm_blendv_ps(arg9, arg5, zmm0)
                                
                                zmm12 = var_3a8
                                zmm4 = var_4b8
                                zmm9 = var_568_1
                                zmm1 = _mm_add_epi32(arg9, arg9)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                int32_t temp0_252[0x4] =
                                    _mm_add_epi64(zmm15, _mm_cvtepi32_epi64(zmm1.q))
                                
                                if ((rbx_9 & 1) != 0)
                                    zmm1 = _mm_insert_epi32(var_338, zx.d(*temp0_252[0].q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    var_388 = zmm3
                                    
                                    if ((rbx_9 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(temp0_252, 1)), 1)
                                else
                                    zmm1 = var_338
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    var_388 = zmm3
                                    
                                    if ((rbx_9 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(temp0_252, 1)), 1)
                                
                                arg6 = var_578_1
                                int32_t temp0_263[0x4] = _mm_add_epi64(arg8, zmm0)
                                
                                if ((rbx_9 & 4) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*temp0_263[0].q), 2)
                                    
                                    if ((rbx_9 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(temp0_263, 1)), 3)
                                else if ((rbx_9 & 8) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, 
                                        zx.d(*_mm_extract_epi64(temp0_263, 1)), 3)
                                
                                arg8 = var_548_1
                                var_308 = zmm2
                                zmm0 = _mm_blend_epi16(zmm2, zx.o(0), 0xaa)
                                var_338 = zmm1
                                zmm2 = _mm_blend_epi16(zmm1, zx.o(0), 0xaa)
                            
                            zmm1 = zx.o(0)
                            
                            if (arg14 != 1)
                                zmm2 =
                                    __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm2, zmm0), data_142d3f5b0)
                                zmm1 = _mm_div_ps(_mm_sub_ps(var_1b8, _mm_cvtepi32_ps(zmm0)), 
                                    _mm_cvtepi32_ps(zmm2))
                            
                            zmm2 = _mm_blendv_ps(zx.o(0), zmm1, var_478_1 ^ arg7)
                    
                    arg8 = _mm_blendv_ps(arg8, zmm2, temp0_81)
                    zmm3 = arg11
                    zmm15 = arg9
                
                arg11 = var_4e8_1
                arg10 = var_4f8_1
            
            zmm1 = _mm_cvtepi32_epi64(zmm12[0].q)
            zmm2 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm12, 0x4e).q)
            zmm0 = _mm_mullo_epi32(zmm3, zmm4)
            arg5 = _mm_cvtepi32_epi64(zmm0.q)
            zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
            var_3e8 = zmm0
            float var_4a8_3[0x4] = zmm2
            zmm0 = _mm_add_epi64(zmm0, zmm2)
            float var_4e8_2[0x4] = arg5
            uint128_t var_478_3 = zmm1
            var_3f8 = _mm_add_epi64(_mm_add_epi64(arg5, zmm1), arg6)
            var_358 = __paddq_xmmdq_memdq(zmm0, var_538_1)
            arg7 = __pcmpeqd_xmmdq_memdq(var_468, data_142d3f5b0)
            arg5 = var_518_1 & not.o(arg7)
            int32_t var_548_2[0x4] = arg8
            int32_t var_588_2[0x4] = zmm3
            int64_t var_498_1[0x2] = arg7
            var_3b8 = zmm15
            int32_t var_5a8[0x4]
            
            if (_mm_movemask_ps(arg5) == 0)
                zmm4 = var_5a8
                arg9 = var_528_1
                zmm12 = zx.o(0)
            else
                zmm12 = zx.o(0)
                int32_t temp0_316[0x4] = _mm_cmpeq_epi32(var_408_1, zmm12)
                zmm1 = _mm_slli_epi32(temp0_316 & arg5, 0x1f)
                char temp0_318 = _mm_movemask_ps(zmm1)
                
                if (temp0_318 == 0)
                    arg9 = var_528_1
                else
                    zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                    int32_t temp0_320[0x4] = __paddq_xmmdq_memdq(var_4d8, var_4a8_3)
                    int32_t temp0_322[0x4] =
                        __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_448_1, var_478_3), var_4e8_2)
                    int32_t temp0_323[0x4] = __paddq_xmmdq_memdq(temp0_320, var_3e8)
                    zmm0 = data_1434426c0
                    zmm2 = zmm0
                    int32_t temp0_324[0x4] = _mm_add_epi64(temp0_323, zmm0)
                    int32_t temp0_325[0x4] = _mm_add_epi64(temp0_322, zmm0)
                    zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                    arg7 = _mm_blendv_ps(zx.o(0), temp0_325, zmm3)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                    zmm1 = _mm_blendv_ps(zx.o(0), temp0_324, zmm4)
                    int64_t rbx_11 = _mm_extract_epi64(arg7, 1)
                    void* rsi_12 = arg4 + rbx_11
                    zmm12 = *(arg4 + rbx_11)
                    int64_t rbp_12 = zmm1.q
                    int64_t r14_1 = _mm_extract_epi64(zmm1, 1)
                    void* rbx_12 = arg4 + rbp_12
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm2, zmm3)
                    int32_t var_428_1 = (*(arg4 + rbp_12)).d
                    arg6 = _mm_blendv_ps(zx.o(0), zmm2, zmm4)
                    int32_t var_4f8_2 = (*(arg4 + r14_1)).d
                    void* r10_2 = arg7[0] + arg4
                    zmm9 = *(zmm1.q + r10_2)
                    zmm2 = *(_mm_extract_epi64(zmm1, 1) + rsi_12)
                    arg8 = *(arg6[0].q + rbx_12)
                    int64_t rbp_16 = _mm_extract_epi64(arg6, 1)
                    void* rax_95 = arg4 + r14_1
                    zmm1 = data_1434426e0
                    arg6 = _mm_blendv_ps(zx.o(0), zmm1, zmm3)
                    arg7 = *(rbp_16 + rax_95)
                    float temp0_333[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm4)
                    zmm1 = *(arg6[0].q + r10_2)
                    zmm3 = *(_mm_extract_epi64(arg6, 1) + rsi_12)
                    int32_t (* rsi_13)[0x4] = temp0_333[0].q
                    uint128_t* rbp_19 = _mm_extract_epi64(temp0_333, 1)
                    zmm4 = *(rsi_13 + rbx_12)
                    zmm0 = *(rbp_19 + rax_95)
                    
                    if ((temp0_318 & 1) != 0)
                        arg11 = _mm_blend_ps(arg11, *r10_2, 1)
                    
                    char temp13_1 = temp0_318 & 1
                    
                    if (temp13_1 == 0)
                        arg9 = var_528_1
                        
                        if (temp13_1 != 0)
                            arg10 = _mm_blend_ps(arg10, zmm1, 1)
                    else
                        arg9 = _mm_blend_ps(var_528_1, zmm9, 1)
                        
                        if (temp13_1 != 0)
                            arg10 = _mm_blend_ps(arg10, zmm1, 1)
                    
                    char temp14_1 = temp0_318 & 2
                    
                    if (temp14_1 != 0)
                        arg11 = _mm_insert_ps(arg11, zmm12, 0x10)
                        
                        if (temp14_1 != 0)
                            goto label_1402090d6
                    else if (temp14_1 != 0)
                    label_1402090d6:
                        arg9 = _mm_insert_ps(arg9, zmm2, 0x10)
                        
                        if (temp14_1 != 0)
                            goto label_140208f03
                        
                        goto label_1402090e3
                    
                    bool cond:76_1
                    bool cond:94_1
                    bool cond:95_1
                    bool cond:77_1
                    
                    if (temp14_1 == 0)
                    label_1402090e3:
                        zmm3 = var_588_2
                        char temp27_1 = temp0_318 & 4
                        cond:76_1 = temp27_1 == 0
                        cond:77_1 = temp27_1 != 0
                        cond:94_1 = temp27_1 == 0
                        cond:95_1 = temp27_1 != 0
                        
                        if (temp27_1 != 0)
                        label_1402090f2:
                            arg11 = __insertps_xmmps_memd_immb(arg11, var_428_1, 0x20)
                            
                            if (cond:77_1)
                                goto label_140208f1f
                            
                            goto label_140209104
                    else
                    label_140208f03:
                        arg10 = _mm_insert_ps(arg10, zmm3, 0x10)
                        zmm3 = var_588_2
                        char temp28_1 = temp0_318 & 4
                        cond:76_1 = temp28_1 == 0
                        cond:77_1 = temp28_1 != 0
                        cond:94_1 = temp28_1 == 0
                        cond:95_1 = temp28_1 != 0
                        
                        if (temp28_1 != 0)
                            goto label_1402090f2
                    
                    if (not(cond:76_1))
                    label_140208f1f:
                        arg9 = _mm_insert_ps(arg9, arg8, 0x20)
                        arg8 = var_548_2
                        
                        if (cond:95_1)
                            goto label_140209111
                        
                        goto label_140208f33
                    
                label_140209104:
                    arg8 = var_548_2
                    bool cond:133_1
                    bool cond:149_1
                    bool cond:150_1
                    bool cond:134_1
                    
                    if (cond:94_1)
                    label_140208f33:
                        char temp44_1 = temp0_318 & 8
                        cond:133_1 = temp44_1 == 0
                        cond:134_1 = temp44_1 != 0
                        cond:149_1 = temp44_1 == 0
                        cond:150_1 = temp44_1 != 0
                        
                        if (temp44_1 != 0)
                        label_140208f3c:
                            arg11 = __insertps_xmmps_memd_immb(arg11, var_4f8_2, 0x30)
                            
                            if (cond:134_1)
                                goto label_140209127
                            
                            goto label_140208f4e
                    else
                    label_140209111:
                        arg10 = _mm_insert_ps(arg10, zmm4, 0x20)
                        char temp45_1 = temp0_318 & 8
                        cond:133_1 = temp45_1 == 0
                        cond:134_1 = temp45_1 != 0
                        cond:149_1 = temp45_1 == 0
                        cond:150_1 = temp45_1 != 0
                        
                        if (temp45_1 != 0)
                            goto label_140208f3c
                    
                    if (cond:133_1)
                    label_140208f4e:
                        zmm12 = zx.o(0)
                        
                        if (not(cond:149_1))
                            arg10 = _mm_insert_ps(arg10, zmm0, 0x30)
                    else
                    label_140209127:
                        arg9 = _mm_insert_ps(arg9, arg7, 0x30)
                        zmm12 = zx.o(0)
                        
                        if (cond:150_1)
                            arg10 = _mm_insert_ps(arg10, zmm0, 0x30)
                
                zmm15 = temp0_316 & not.o(arg5)
                zmm1 = _mm_slli_epi32(zmm15, 0x1f)
                char temp0_343 = _mm_movemask_ps(zmm1)
                
                if (temp0_343 == 0)
                    zmm4 = var_5a8
                    zmm9 = var_568_1
                    arg6 = var_578_1
                    arg7 = var_498_1
                    zmm15 = var_3b8
                else
                    int32_t temp0_345[0x4] = _mm_srai_epi32(_mm_slli_epi32(var_558, 0x1f), 0x1f)
                    zmm1 = _mm_srai_epi32(zmm1, 0x1f) & temp0_345
                    zmm2 = var_3f8
                    zmm9 = zmm2
                    arg7 = var_358
                    arg8 = arg7
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        zmm0 = data_1434426c0
                        zmm10 = zmm0
                        int32_t temp0_348[0x4] = _mm_add_epi64(arg7, zmm0)
                        arg5 = _mm_add_epi64(zmm2, zmm0)
                        zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm9 = _mm_blendv_ps(zmm2, arg5, zmm4)
                        arg5 = _mm_shuffle_epi32(zmm1, 0xfa)
                        arg8 = _mm_blendv_ps(arg7, temp0_348, arg5)
                        zmm1 = __paddq_xmmdq_memdq(var_4d8, var_4a8_3)
                        int32_t temp0_356[0x4] = __paddq_xmmdq_memdq(
                            __paddq_xmmdq_memdq(var_448_1, var_478_3), var_4e8_2)
                        zmm1 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_3e8), zmm10)
                        arg7 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_356, zmm10), zmm4)
                        zmm4 = _mm_blendv_ps(zx.o(0), zmm1, arg5)
                        arg5 = *(arg4 + arg7[0])
                        int64_t rax_98 = _mm_extract_epi64(arg7, 1)
                        int64_t rbp_20 = zmm4[0].q
                        int64_t rbx_13 = _mm_extract_epi64(zmm4, 1)
                        arg5 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg5, *(arg4 + rax_98), 0x10), 
                                *(arg4 + rbp_20), 0x20), 
                            *(arg4 + rbx_13), 0x30)
                    
                    zmm4 = _mm_blendv_ps(zx.o(0), arg5, temp0_345)
                    
                    if ((temp0_343 & 1) != 0)
                        arg11 = _mm_blend_ps(arg11, zmm4, 1)
                        
                        if ((temp0_343 & 2) != 0)
                            goto label_140209149
                        
                        goto label_1402090b2
                    
                    if ((temp0_343 & 2) != 0)
                    label_140209149:
                        arg11 = _mm_blend_ps(arg11, zmm4, 2)
                        
                        if ((temp0_343 & 4) != 0)
                            goto label_1402090bb
                        
                        goto label_140209159
                    
                label_1402090b2:
                    
                    if ((temp0_343 & 4) == 0)
                    label_140209159:
                        
                        if ((temp0_343 & 8) != 0)
                            arg11 = _mm_blend_ps(arg11, zmm4, 8)
                    else
                    label_1402090bb:
                        arg11 = _mm_blend_ps(arg11, zmm4, 4)
                        
                        if ((temp0_343 & 8) != 0)
                            arg11 = _mm_blend_ps(arg11, zmm4, 8)
                    
                    zmm0 = data_1434422d0
                    arg5 = var_558 & zmm0
                    zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm0) & zmm15, 0x1f)
                    char temp0_376 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_376 == 0)
                        zmm4 = zmm9
                        zmm3 = arg8
                        zmm0 = var_368
                        zmm9 = var_568_1
                        arg8 = var_548_2
                        zmm12 = zx.o(0)
                        arg7 = var_498_1
                        arg5 = _mm_cmpeq_epi32(arg5, zx.o(0)) & not.o(zmm0)
                        
                        if ((temp0_343 & 1) != 0)
                            arg9 = _mm_blend_ps(arg9, arg5, 1)
                    else
                        zmm0 = data_1434426c0
                        int32_t temp0_377[0x4] = _mm_add_epi64(arg8, zmm0)
                        int32_t temp0_378[0x4] = _mm_add_epi64(zmm9, zmm0)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm4 = _mm_blendv_ps(zmm9, temp0_378, _mm_shuffle_epi32(zmm1, 0x50))
                        zmm3 = _mm_blendv_ps(arg8, temp0_377, _mm_shuffle_epi32(zmm1, 0xfa))
                        
                        if ((temp0_376 & 1) != 0)
                            zmm0 = _mm_blend_epi16(var_368, zx.o(*zmm9[0].q), 3)
                            zmm12 = zx.o(0)
                            
                            if ((temp0_376 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm9, 1), 0x10)
                        else
                            zmm0 = var_368
                            zmm12 = zx.o(0)
                            
                            if ((temp0_376 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm9, 1), 0x10)
                        
                        zmm9 = var_568_1
                        arg7 = var_498_1
                        
                        if ((temp0_376 & 4) != 0)
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg8[0].q, 0x20)
                            
                            if ((temp0_376 & 8) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg8, 1), 0x30)
                        else if ((temp0_376 & 8) != 0)
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg8, 1), 0x30)
                        
                        arg8 = var_548_2
                        arg5 = _mm_cmpeq_epi32(arg5, zmm12) & not.o(zmm0)
                        
                        if ((temp0_343 & 1) != 0)
                            arg9 = _mm_blend_ps(arg9, arg5, 1)
                    
                    if ((temp0_343 & 2) != 0)
                        arg9 = _mm_blend_ps(arg9, arg5, 2)
                        
                        if ((temp0_343 & 4) != 0)
                            goto label_140209529
                        
                        goto label_1402092f7
                    
                    if ((temp0_343 & 4) == 0)
                    label_1402092f7:
                        var_368 = zmm0
                        
                        if ((temp0_343 & 8) != 0)
                            arg9 = _mm_blend_ps(arg9, arg5, 8)
                    else
                    label_140209529:
                        arg9 = _mm_blend_ps(arg9, arg5, 4)
                        var_368 = zmm0
                        
                        if ((temp0_343 & 8) != 0)
                            arg9 = _mm_blend_ps(arg9, arg5, 8)
                    
                    zmm1 = data_142fc95e0
                    zmm0 = var_558 & zmm1
                    char temp0_394 =
                        _mm_movemask_ps(_mm_slli_epi32(zmm15 & _mm_cmpeq_epi32(zmm0, zmm1), 0x1f))
                    
                    if (temp0_394 == 0)
                        zmm4 = var_5a8
                        arg6 = var_578_1
                        zmm3 = var_588_2
                        zmm15 = var_3b8
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(var_3c8)
                        
                        if ((temp0_343 & 1) != 0)
                            arg10 = _mm_blend_ps(arg10, zmm0, 1)
                    else
                        if ((temp0_394 & 1) != 0)
                            var_3c8 = _mm_blend_epi16(var_3c8, zx.o(*zmm4[0].q), 3)
                        
                        if ((temp0_394 & 2) != 0)
                            var_3c8 = __insertps_xmmps_memd_immb(var_3c8, 
                                *_mm_extract_epi64(zmm4, 1), 0x10)
                        
                        zmm4 = var_5a8
                        arg6 = var_578_1
                        zmm15 = var_3b8
                        
                        if ((temp0_394 & 4) != 0)
                            var_3c8 = __insertps_xmmps_memd_immb(var_3c8, *zmm3[0].q, 0x20)
                        
                        if ((temp0_394 & 8) != 0)
                            var_3c8 = __insertps_xmmps_memd_immb(var_3c8, 
                                *_mm_extract_epi64(zmm3, 1), 0x30)
                        
                        zmm3 = var_588_2
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(var_3c8)
                        
                        if ((temp0_343 & 1) != 0)
                            arg10 = _mm_blend_ps(arg10, zmm0, 1)
                    
                    if ((temp0_343 & 2) != 0)
                        arg10 = _mm_blend_ps(arg10, zmm0, 2)
                        
                        if ((temp0_343 & 4) != 0)
                            goto label_140209559
                        
                        goto label_140209417
                    
                    if ((temp0_343 & 4) == 0)
                    label_140209417:
                        
                        if ((temp0_343 & 8) != 0)
                            arg10 = _mm_blend_ps(arg10, zmm0, 8)
                    else
                    label_140209559:
                        arg10 = _mm_blend_ps(arg10, zmm0, 4)
                        
                        if ((temp0_343 & 8) != 0)
                            arg10 = _mm_blend_ps(arg10, zmm0, 8)
            
            zmm1 = arg7 ^ data_142d3f800
            var_428 = zmm1
            
            if (_mm_movemask_ps(var_518_1 & not.o(zmm1)) != 0)
                if (temp0_53 == 0)
                    zmm1 = var_518_1
                else
                    uint32_t var_4f8_3[0x4] = arg10
                    arg5 = _mm_srai_epi32(_mm_slli_epi32(var_558, 0x1f), 0x1f) & temp0_49
                    zmm3 = arg5 & zmm9
                    uint32_t temp0_406 = _mm_movemask_ps(zmm3)
                    zmm9 = zx.o(0)
                    float var_528_2[0x4] = arg9
                    
                    if (temp0_406 == 0)
                        arg9 = arg11
                        zmm15 = var_578_1
                        arg11 = var_538_1
                        arg10 = zx.o(0)
                        arg8 = zx.o(0)
                        zmm1 = var_518_1
                    else
                        zmm2 = var_538_1
                        zmm0 = data_1434426c0
                        zmm1 = _mm_add_epi64(zmm2, zmm0)
                        arg7 = _mm_add_epi64(var_578_1, zmm0)
                        arg8 = _mm_unpacklo_ps(zmm3, zmm3[0].q)
                        zmm4 = _mm_blendv_ps(var_578_1, arg7, arg8)
                        zmm3 = _mm_unpackhi_ps(zmm3, zmm3)
                        arg7 = _mm_blendv_ps(zmm2, zmm1, zmm3)
                        char rbx_15 = temp0_406.b
                        
                        if ((rbx_15 & 1) != 0)
                            zmm0 = _mm_blend_ps(var_1f8, *var_578_1[0].q, 1)
                            
                            if ((rbx_15 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_578_1, 1), 0x10)
                        else
                            zmm0 = var_1f8
                            
                            if ((rbx_15 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_578_1, 1), 0x10)
                        
                        arg6 = var_518_1
                        
                        if ((rbx_15 & 4) == 0)
                            if ((rbx_15 & 8) != 0)
                                goto label_140209695
                            
                            goto label_140209637
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_538_1.q, 0x20)
                        char rcx_29
                        
                        if ((rbx_15 & 8) != 0)
                        label_140209695:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(var_538_1, 1), 0x30)
                            rcx_29 = _mm_movemask_ps(arg5)
                            arg10 = zx.o(0)
                            
                            if ((rcx_29 & 1) != 0)
                                goto label_140209647
                            
                            goto label_1402096a7
                        
                    label_140209637:
                        rcx_29 = _mm_movemask_ps(arg5)
                        arg10 = zx.o(0)
                        
                        if ((rcx_29 & 1) == 0)
                        label_1402096a7:
                            
                            if ((rcx_29 & 2) != 0)
                            label_1402096ac:
                                arg10 = _mm_blend_ps(arg10, zmm0, 2)
                                
                                if ((rcx_29 & 4) != 0)
                                    goto label_140209658
                                
                                goto label_1402096bb
                        else
                        label_140209647:
                            arg10 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rcx_29 & 2) != 0)
                                goto label_1402096ac
                        
                        if ((rcx_29 & 4) == 0)
                        label_1402096bb:
                            var_1f8 = zmm0
                            arg9 = arg11
                            
                            if ((rcx_29 & 8) != 0)
                                arg10 = _mm_blend_ps(arg10, zmm0, 8)
                        else
                        label_140209658:
                            arg10 = _mm_blend_ps(arg10, zmm0, 4)
                            var_1f8 = zmm0
                            arg9 = arg11
                            
                            if ((rcx_29 & 8) != 0)
                                arg10 = _mm_blend_ps(arg10, zmm0, 8)
                        
                        zmm0 = data_1434426c0
                        zmm15 = _mm_blendv_ps(zmm4, _mm_add_epi64(zmm4, zmm0), arg8)
                        arg11 = _mm_blendv_ps(arg7, _mm_add_epi64(arg7, zmm0), zmm3)
                        
                        if ((rbx_15 & 1) != 0)
                            zmm0 = _mm_blend_ps(var_208, *zmm4[0].q, 1)
                            zmm1 = arg6
                            
                            if ((rbx_15 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm4, 1), 0x10)
                        else
                            zmm0 = var_208
                            zmm1 = arg6
                            
                            if ((rbx_15 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm4, 1), 0x10)
                        
                        if ((rbx_15 & 4) == 0)
                            if ((rbx_15 & 8) != 0)
                                goto label_1402097a2
                            
                            goto label_140209757
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg7[0], 0x20)
                        
                        if ((rbx_15 & 8) != 0)
                        label_1402097a2:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg7, 1), 0x30)
                            arg8 = zx.o(0)
                            
                            if ((rcx_29 & 1) != 0)
                                goto label_140209764
                            
                            goto label_1402097b1
                        
                    label_140209757:
                        arg8 = zx.o(0)
                        
                        if ((rcx_29 & 1) == 0)
                        label_1402097b1:
                            
                            if ((rcx_29 & 2) != 0)
                            label_1402097b6:
                                arg8 = _mm_blend_ps(arg8, zmm0, 2)
                                
                                if ((rcx_29 & 4) != 0)
                                    goto label_140209775
                                
                                goto label_1402097c5
                        else
                        label_140209764:
                            arg8 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rcx_29 & 2) != 0)
                                goto label_1402097b6
                        
                        if ((rcx_29 & 4) == 0)
                        label_1402097c5:
                            var_208 = zmm0
                            
                            if ((rcx_29 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm0, 8)
                        else
                        label_140209775:
                            arg8 = _mm_blend_ps(arg8, zmm0, 4)
                            var_208 = zmm0
                            
                            if ((rcx_29 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm0, 8)
                    
                    zmm0 = data_1434422d0
                    arg5 = _mm_cmpeq_epi32(var_558 & zmm0, zmm0) & temp0_49
                    zmm12 = zmm1
                    zmm1 &= not.o(arg5)
                    char temp0_440 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_440 == 0)
                        zmm3 = zx.o(0)
                        zmm1 = zmm12
                    else
                        arg7 = arg10
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
                        zmm0 = data_1434426c0
                        zmm2 = _mm_add_epi64(arg11, zmm0)
                        int32_t temp0_444[0x4] = _mm_add_epi64(zmm15, zmm0)
                        zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                        arg10 = _mm_blendv_ps(zmm15, temp0_444, zmm3)
                        zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                        arg6 = _mm_blendv_ps(arg11, zmm2, zmm4)
                        
                        if ((temp0_440 & 1) != 0)
                            zmm0 = _mm_blend_epi16(var_218, zx.o(*zmm15[0].q), 3)
                            
                            if ((temp0_440 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm15, 1), 0x10)
                        else
                            zmm0 = var_218
                            
                            if ((temp0_440 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm15, 1), 0x10)
                        
                        if ((temp0_440 & 4) == 0)
                            if ((temp0_440 & 8) != 0)
                                goto label_1402098fe
                            
                            goto label_1402098ae
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg11[0], 0x20)
                        char rcx_31
                        
                        if ((temp0_440 & 8) != 0)
                        label_1402098fe:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg11, 1), 0x30)
                            rcx_31 = _mm_movemask_ps(arg5)
                            zmm9 = zx.o(0)
                            
                            if ((rcx_31 & 1) != 0)
                                goto label_1402098c0
                            
                            goto label_140209911
                        
                    label_1402098ae:
                        rcx_31 = _mm_movemask_ps(arg5)
                        zmm9 = zx.o(0)
                        
                        if ((rcx_31 & 1) == 0)
                        label_140209911:
                            
                            if ((rcx_31 & 2) != 0)
                            label_140209916:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc)
                                
                                if ((rcx_31 & 4) != 0)
                                    goto label_1402098d1
                                
                                goto label_140209925
                        else
                        label_1402098c0:
                            zmm9 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                            
                            if ((rcx_31 & 2) != 0)
                                goto label_140209916
                        
                        if ((rcx_31 & 4) == 0)
                        label_140209925:
                            var_218 = zmm0
                            
                            if ((rcx_31 & 8) != 0)
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                        else
                        label_1402098d1:
                            zmm9 = _mm_blend_epi16(zmm9, zmm0, 0x30)
                            var_218 = zmm0
                            
                            if ((rcx_31 & 8) != 0)
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                        
                        zmm0 = data_1434426c0
                        zmm15 = _mm_blendv_ps(arg10, _mm_add_epi64(arg10, zmm0), zmm3)
                        arg11 = _mm_blendv_ps(arg6, _mm_add_epi64(arg6, zmm0), zmm4)
                        
                        if ((temp0_440 & 1) != 0)
                            zmm0 = _mm_blend_ps(var_228, *arg10[0].q, 1)
                            zmm1 = zmm12
                            
                            if ((temp0_440 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg10, 1), 0x10)
                        else
                            zmm0 = var_228
                            zmm1 = zmm12
                            
                            if ((temp0_440 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg10, 1), 0x10)
                        
                        arg10 = arg7
                        
                        if ((temp0_440 & 4) == 0)
                            if ((temp0_440 & 8) != 0)
                                goto label_140209a0e
                            
                            goto label_1402099c5
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg6[0].q, 0x20)
                        
                        if ((temp0_440 & 8) != 0)
                        label_140209a0e:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg6, 1), 0x30)
                            zmm3 = zx.o(0)
                            
                            if ((rcx_31 & 1) != 0)
                                goto label_1402099d2
                            
                            goto label_140209a1d
                        
                    label_1402099c5:
                        zmm3 = zx.o(0)
                        
                        if ((rcx_31 & 1) == 0)
                        label_140209a1d:
                            
                            if ((rcx_31 & 2) != 0)
                            label_140209a22:
                                zmm3 = _mm_blend_epi16(zmm3, zmm0, 0xc)
                                
                                if ((rcx_31 & 4) != 0)
                                    goto label_1402099e2
                                
                                goto label_140209a30
                        else
                        label_1402099d2:
                            zmm3 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                            
                            if ((rcx_31 & 2) != 0)
                                goto label_140209a22
                        
                        if ((rcx_31 & 4) == 0)
                        label_140209a30:
                            var_228 = zmm0
                            
                            if ((rcx_31 & 8) != 0)
                                zmm3 = _mm_blend_epi16(zmm3, zmm0, 0xc0)
                        else
                        label_1402099e2:
                            zmm3 = _mm_blend_epi16(zmm3, zmm0, 0x30)
                            var_228 = zmm0
                            
                            if ((rcx_31 & 8) != 0)
                                zmm3 = _mm_blend_epi16(zmm3, zmm0, 0xc0)
                    
                    zmm0 = data_142fc95e0
                    zmm4 = _mm_cmpeq_epi32(var_558 & zmm0, zmm0) & temp0_49
                    zmm1 &= not.o(zmm4)
                    char temp0_472 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_472 == 0)
                        zmm4 = zx.o(0)
                        arg6 = zx.o(0)
                        arg11 = arg9
                        arg9 = var_528_2
                        zmm1 = var_448_1
                        zmm15 = var_3b8
                    else
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
                        zmm0 = data_1434426c0
                        zmm2 = _mm_add_epi64(arg11, zmm0)
                        float temp0_478[0x4] = _mm_blendv_ps(zmm15, _mm_add_epi64(zmm15, zmm0), 
                            _mm_shuffle_epi32(zmm1, 0x50))
                        arg6 = _mm_blendv_ps(arg11, zmm2, _mm_shuffle_epi32(zmm1, 0xfa))
                        
                        if ((temp0_472 & 1) != 0)
                            zmm0 = _mm_blend_epi16(var_238, zx.o(*zmm15[0].q), 3)
                            
                            if ((temp0_472 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm15, 1), 0x10)
                        else
                            zmm0 = var_238
                            
                            if ((temp0_472 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm15, 1), 0x10)
                        
                        zmm15 = var_3b8
                        
                        if ((temp0_472 & 4) != 0)
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg11[0], 0x20)
                            
                            if ((temp0_472 & 8) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg11, 1), 0x30)
                        else if ((temp0_472 & 8) != 0)
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg11, 1), 0x30)
                        
                        arg11 = arg9
                        arg9 = var_528_2
                        char temp0_484 = _mm_movemask_ps(zmm4)
                        zmm4 = zx.o(0)
                        
                        if ((temp0_484 & 1) != 0)
                            zmm4 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((temp0_484 & 2) != 0)
                                goto label_140209ba6
                            
                            goto label_140209b69
                        
                        if ((temp0_484 & 2) == 0)
                        label_140209b69:
                            
                            if ((temp0_484 & 4) != 0)
                            label_140209b6f:
                                zmm4 = _mm_blend_ps(zmm4, zmm0, 4)
                                
                                if ((temp0_484 & 8) != 0)
                                    goto label_140209bb8
                                
                                goto label_140209b7e
                        else
                        label_140209ba6:
                            zmm4 = _mm_blend_ps(zmm4, zmm0, 2)
                            
                            if ((temp0_484 & 4) != 0)
                                goto label_140209b6f
                        
                        if ((temp0_484 & 8) != 0)
                        label_140209bb8:
                            zmm4 = _mm_blend_ps(zmm4, zmm0, 8)
                            var_238 = zmm0
                            
                            if ((temp0_472 & 1) == 0)
                                goto label_140209b88
                            
                            goto label_140209be2
                        
                    label_140209b7e:
                        var_238 = zmm0
                        
                        if ((temp0_472 & 1) != 0)
                        label_140209be2:
                            zmm0 = _mm_blend_ps(var_248, *temp0_478[0].q, 1)
                            zmm1 = var_448_1
                            
                            if ((temp0_472 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_478, 1), 0x10)
                        else
                        label_140209b88:
                            zmm0 = var_248
                            zmm1 = var_448_1
                            
                            if ((temp0_472 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_478, 1), 0x10)
                        
                        if ((temp0_472 & 4) == 0)
                            if ((temp0_472 & 8) != 0)
                                goto label_140209c6e
                            
                            goto label_140209c0a
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg6[0].q, 0x20)
                        
                        if ((temp0_472 & 8) != 0)
                        label_140209c6e:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg6, 1), 0x30)
                            arg6 = zx.o(0)
                            
                            if ((temp0_484 & 1) != 0)
                                goto label_140209c16
                            
                            goto label_140209c7d
                        
                    label_140209c0a:
                        arg6 = zx.o(0)
                        
                        if ((temp0_484 & 1) == 0)
                        label_140209c7d:
                            
                            if ((temp0_484 & 2) != 0)
                            label_140209c83:
                                arg6 = _mm_blend_ps(arg6, zmm0, 2)
                                
                                if ((temp0_484 & 4) != 0)
                                    goto label_140209c28
                                
                                goto label_140209c93
                        else
                        label_140209c16:
                            arg6 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((temp0_484 & 2) != 0)
                                goto label_140209c83
                        
                        if ((temp0_484 & 4) == 0)
                        label_140209c93:
                            var_248 = zmm0
                            
                            if ((temp0_484 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                        else
                        label_140209c28:
                            arg6 = _mm_blend_ps(arg6, zmm0, 4)
                            var_248 = zmm0
                            
                            if ((temp0_484 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                    
                    zmm1 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(zmm1, var_478_3), var_4e8_2)
                    zmm0 = data_1434426c0
                    arg7 = var_1c8
                    float temp0_502[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), 
                        _mm_shuffle_epi32(arg7, 0x50))
                    float temp0_507[0x4] = _mm_blendv_ps(zx.o(0), 
                        _mm_add_epi64(
                            __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8, var_4a8_3), var_3e8), 
                            zmm0), 
                        _mm_shuffle_epi32(arg7, 0xfa))
                    int64_t rax_131 = temp0_502[0].q
                    int64_t rcx_34 = _mm_extract_epi64(temp0_502, 1)
                    int64_t rbp_21 = temp0_507[0].q
                    int64_t rbx_17 = _mm_extract_epi64(temp0_507, 1)
                    zmm0 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_131)), *(arg4 + rcx_34), 1), 
                            *(arg4 + rbp_21), 2), 
                        *(arg4 + rbx_17), 3)
                    zmm1 = zmm0
                    arg10 = _mm_add_ps(arg10, 
                        _mm_mul_ps(arg8, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    zmm2 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    zmm0 = data_143442440
                    arg5 = zmm0
                    zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm0))
                    zmm2 = data_143442690
                    zmm3 = _mm_mul_ps(zmm3, _mm_div_ps(zmm0, zmm2))
                    zmm0 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm1, 0x15), arg5)), zmm2)
                    char temp36_1 = temp0_53 & 1
                    
                    if (temp36_1 != 0)
                        arg11 = _mm_blend_ps(arg11, arg10, 1)
                        zmm1 = zmm12
                        arg6 = _mm_mul_ps(arg6, zmm0)
                        zmm9 = _mm_add_ps(zmm9, zmm3)
                        
                        if (temp36_1 != 0)
                            goto label_140209ea2
                        
                        goto label_140209dca
                    
                    zmm1 = zmm12
                    arg6 = _mm_mul_ps(arg6, zmm0)
                    zmm9 = _mm_add_ps(zmm9, zmm3)
                    
                    if (temp36_1 != 0)
                    label_140209ea2:
                        arg9 = _mm_blend_ps(arg9, zmm9, 1)
                        zmm3 = var_588_2
                        zmm4 = _mm_add_ps(zmm4, arg6)
                        
                        if (temp36_1 != 0)
                            goto label_140209de7
                        
                        goto label_140209eb8
                    
                label_140209dca:
                    zmm3 = var_588_2
                    zmm4 = _mm_add_ps(zmm4, arg6)
                    bool cond:166_1
                    bool cond:167_1
                    bool cond:185_1
                    bool cond:186_1
                    
                    if (temp36_1 != 0)
                    label_140209de7:
                        var_4f8_3 = _mm_blend_ps(var_4f8_3, zmm4, 1)
                        zmm12 = zx.o(0)
                        char temp56_1 = temp0_53 & 2
                        cond:166_1 = temp56_1 == 0
                        cond:167_1 = temp56_1 != 0
                        cond:185_1 = temp56_1 == 0
                        cond:186_1 = temp56_1 != 0
                        
                        if (temp56_1 != 0)
                            goto label_140209ec6
                        
                        goto label_140209dfd
                    
                label_140209eb8:
                    zmm12 = zx.o(0)
                    char temp55_1 = temp0_53 & 2
                    cond:166_1 = temp55_1 == 0
                    cond:167_1 = temp55_1 != 0
                    cond:185_1 = temp55_1 == 0
                    cond:186_1 = temp55_1 != 0
                    
                    if (temp55_1 == 0)
                    label_140209dfd:
                        
                        if (not(cond:166_1))
                        label_140209e03:
                            arg9 = _mm_blend_ps(arg9, zmm9, 2)
                            
                            if (cond:186_1)
                                goto label_140209ee7
                            
                            goto label_140209e10
                    else
                    label_140209ec6:
                        arg11 = _mm_blend_ps(arg11, arg10, 2)
                        
                        if (cond:167_1)
                            goto label_140209e03
                    
                    bool cond:233_1
                    bool cond:234_1
                    bool cond:256_1
                    bool cond:257_1
                    
                    if (not(cond:185_1))
                    label_140209ee7:
                        var_4f8_3 = _mm_blend_ps(var_4f8_3, zmm4, 2)
                        char temp82_1 = temp0_53 & 4
                        cond:233_1 = temp82_1 == 0
                        cond:234_1 = temp82_1 != 0
                        cond:256_1 = temp82_1 == 0
                        cond:257_1 = temp82_1 != 0
                        
                        if (temp82_1 != 0)
                            goto label_140209e19
                        
                        goto label_140209ef8
                    
                label_140209e10:
                    char temp81_1 = temp0_53 & 4
                    cond:233_1 = temp81_1 == 0
                    cond:234_1 = temp81_1 != 0
                    cond:256_1 = temp81_1 == 0
                    cond:257_1 = temp81_1 != 0
                    
                    if (temp81_1 == 0)
                    label_140209ef8:
                        
                        if (not(cond:233_1))
                        label_140209efe:
                            arg9 = _mm_blend_ps(arg9, zmm9, 4)
                            
                            if (cond:257_1)
                                goto label_140209e3a
                            
                            goto label_140209f0b
                    else
                    label_140209e19:
                        arg11 = _mm_blend_ps(arg11, arg10, 4)
                        
                        if (cond:234_1)
                            goto label_140209efe
                    
                    bool cond:297_1
                    bool cond:298_1
                    bool cond:317_1
                    bool cond:318_1
                    
                    if (not(cond:256_1))
                    label_140209e3a:
                        var_4f8_3 = _mm_blend_ps(var_4f8_3, zmm4, 4)
                        char temp110_1 = temp0_53 & 8
                        cond:297_1 = temp110_1 == 0
                        cond:298_1 = temp110_1 != 0
                        cond:317_1 = temp110_1 == 0
                        cond:318_1 = temp110_1 != 0
                        
                        if (temp110_1 != 0)
                            goto label_140209f14
                        
                        goto label_140209e4b
                    
                label_140209f0b:
                    char temp109_1 = temp0_53 & 8
                    cond:297_1 = temp109_1 == 0
                    cond:298_1 = temp109_1 != 0
                    cond:317_1 = temp109_1 == 0
                    cond:318_1 = temp109_1 != 0
                    
                    if (temp109_1 != 0)
                    label_140209f14:
                        arg11 = _mm_blend_ps(arg11, arg10, 8)
                        arg8 = var_548_2
                        
                        if (cond:298_1)
                            goto label_140209e58
                        
                        goto label_140209f28
                    
                label_140209e4b:
                    arg8 = var_548_2
                    
                    if (cond:297_1)
                    label_140209f28:
                        arg10 = var_4f8_3
                        arg7 = var_498_1
                        zmm9 = var_568_1
                        
                        if (not(cond:317_1))
                            arg10 = _mm_blend_ps(arg10, zmm4, 8)
                    else
                    label_140209e58:
                        arg9 = _mm_blend_ps(arg9, zmm9, 8)
                        arg10 = var_4f8_3
                        arg7 = var_498_1
                        zmm9 = var_568_1
                        
                        if (cond:318_1)
                            arg10 = _mm_blend_ps(arg10, zmm4, 8)
                    
                    zmm4 = var_5a8
                
                arg5 = temp0_49 ^ var_428
                
                if (_mm_movemask_ps(zmm1 & not.o(arg5)) == 0)
                    arg6 = var_578_1
                else
                    int32_t temp0_544[0x4] = __pcmpeqd_xmmdq_memdq(var_468, data_1434422d0)
                    zmm9 = zmm1 & not.o(temp0_544)
                    char temp0_545 = _mm_movemask_ps(zmm9)
                    
                    if (temp0_545 == 0)
                        zmm9 = var_568_1
                        arg7 = var_498_1
                        arg6 = var_578_1
                    else
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_558, 0x1f), 0x1f)
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm9, 0x1f), 0x1f) & zmm2
                        var_5a8 = zmm4
                        
                        if (_mm_movemask_ps(zmm1) == 0)
                            zmm12 = var_358
                        else
                            zmm12 = var_358
                            zmm0 = data_1434426b0
                            arg7 = _mm_add_epi64(zmm12, zmm0)
                            int32_t temp0_552[0x4] = _mm_add_epi64(var_3f8, zmm0)
                            zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                            var_3f8 = _mm_blendv_ps(var_3f8, temp0_552, zmm3)
                            zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm12 = _mm_blendv_ps(zmm12, arg7, zmm4)
                            zmm1 = __paddq_xmmdq_memdq(var_4d8, var_4a8_3)
                            arg7 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_448_1, var_478_3), 
                                var_4e8_2)
                            zmm1 = __paddq_xmmdq_memdq(zmm1, var_3e8)
                            zmm0 = data_1434426c0
                            zmm1 = _mm_add_epi64(zmm1, zmm0)
                            arg6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg7, zmm0), zmm3)
                            zmm3 = _mm_blendv_ps(zx.o(0), zmm1, zmm4)
                            int64_t rax_134 = _mm_extract_epi64(arg6, 1)
                            int64_t rbp_22 = arg6[0].q
                            int64_t rbx_18 = zmm3[0].q
                            int64_t rsi_15 = _mm_extract_epi64(zmm3, 1)
                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbp_22)), 
                                            *(arg4 + rax_134), 1), 
                                        *(arg4 + rbx_18), 2), 
                                    *(arg4 + rsi_15), 3).q), 
                                data_143442b40))
                        
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        
                        if ((temp0_545 & 1) != 0)
                            arg11 = _mm_blend_ps(arg11, zmm3, 1)
                            
                            if ((temp0_545 & 2) != 0)
                                goto label_14020a12d
                            
                            goto label_14020a115
                        
                        if ((temp0_545 & 2) != 0)
                        label_14020a12d:
                            arg11 = _mm_blend_ps(arg11, zmm3, 2)
                            
                            if ((temp0_545 & 4) != 0)
                                goto label_14020a11a
                            
                            goto label_14020a139
                        
                    label_14020a115:
                        
                        if ((temp0_545 & 4) == 0)
                        label_14020a139:
                            
                            if ((temp0_545 & 8) != 0)
                                arg11 = _mm_blend_ps(arg11, zmm3, 8)
                        else
                        label_14020a11a:
                            arg11 = _mm_blend_ps(arg11, zmm3, 4)
                            
                            if ((temp0_545 & 8) != 0)
                                arg11 = _mm_blend_ps(arg11, zmm3, 8)
                        
                        zmm0 = data_1434422d0
                        zmm4 = var_558 & zmm0
                        zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm4, zmm0) & zmm9, 0x1f)
                        char temp0_578 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_578 == 0)
                            arg7 = var_3f8
                            zmm2 = zmm12
                            zmm12 = zx.o(0)
                            zmm4 = _mm_cmpeq_epi32(zmm4, zmm12) & not.o(zmm0)
                            
                            if ((temp0_545 & 1) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm4, 1)
                        else
                            zmm0 = data_1434426b0
                            int32_t temp0_579[0x4] = _mm_add_epi64(zmm12, zmm0)
                            zmm2 = _mm_add_epi64(var_3f8, zmm0)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            arg7 = _mm_blendv_ps(var_3f8, zmm2, _mm_shuffle_epi32(zmm1, 0x50))
                            zmm2 = _mm_blendv_ps(zmm12, temp0_579, _mm_shuffle_epi32(zmm1, 0xfa))
                            zmm1 = zmm12
                            
                            if ((temp0_578 & 1) != 0)
                                zmm0 = _mm_insert_epi32(var_258, zx.d(*var_3f8[0].q), 0)
                                zmm12 = zx.o(0)
                                
                                if ((temp0_578 & 2) != 0)
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_3f8, 1)), 1)
                            else
                                zmm0 = var_258
                                zmm12 = zx.o(0)
                                
                                if ((temp0_578 & 2) != 0)
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_3f8, 1)), 1)
                            
                            if ((temp0_578 & 4) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm1.q), 2)
                                
                                if ((temp0_578 & 8) != 0)
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                            else if ((temp0_578 & 8) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                            
                            var_258 = zmm0
                            zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zmm0, zmm12, 0xaa), data_143442b40))
                            zmm4 = _mm_cmpeq_epi32(zmm4, zmm12) & not.o(zmm0)
                            
                            if ((temp0_545 & 1) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm4, 1)
                        
                        if ((temp0_545 & 2) != 0)
                            arg9 = _mm_blend_ps(arg9, zmm4, 2)
                            
                            if ((temp0_545 & 4) != 0)
                                goto label_14020a2f0
                            
                            goto label_14020a291
                        
                        if ((temp0_545 & 4) == 0)
                        label_14020a291:
                            
                            if ((temp0_545 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm4, 8)
                        else
                        label_14020a2f0:
                            arg9 = _mm_blend_ps(arg9, zmm4, 4)
                            
                            if ((temp0_545 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm4, 8)
                        
                        zmm1 = data_142fc95e0
                        zmm0 = var_558 & zmm1
                        zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm0, zmm1) & zmm9, 0x1f)
                        char temp0_599 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_599 == 0)
                            zmm9 = var_568_1
                            zmm3 = var_588_2
                            arg7 = var_498_1
                            zmm4 = var_5a8
                            arg6 = var_578_1
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(zmm1)
                            
                            if ((temp0_545 & 1) != 0)
                                arg10 = _mm_blend_ps(arg10, zmm0, 1)
                        else
                            if ((temp0_599 & 1) != 0)
                                zmm1 = _mm_insert_epi32(var_268, zx.d(*arg7[0]), 0)
                                
                                if ((temp0_599 & 2) != 0)
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(arg7, 1)), 1)
                            else
                                zmm1 = var_268
                                
                                if ((temp0_599 & 2) != 0)
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(arg7, 1)), 1)
                            
                            zmm9 = var_568_1
                            zmm3 = var_588_2
                            arg7 = var_498_1
                            zmm4 = var_5a8
                            arg6 = var_578_1
                            
                            if ((temp0_599 & 4) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2[0].q), 2)
                            
                            if ((temp0_599 & 8) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                            
                            var_268 = zmm1
                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zmm1, zmm12, 0xaa), data_143442b40))
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(zmm1)
                            
                            if ((temp0_545 & 1) != 0)
                                arg10 = _mm_blend_ps(arg10, zmm0, 1)
                        
                        zmm1 = var_518_1
                        
                        if ((temp0_545 & 2) != 0)
                            arg10 = _mm_blend_ps(arg10, zmm0, 2)
                            
                            if ((temp0_545 & 4) != 0)
                                goto label_14020a4c2
                            
                            goto label_14020a417
                        
                        if ((temp0_545 & 4) == 0)
                        label_14020a417:
                            
                            if ((temp0_545 & 8) != 0)
                                arg10 = _mm_blend_ps(arg10, zmm0, 8)
                        else
                        label_14020a4c2:
                            arg10 = _mm_blend_ps(arg10, zmm0, 4)
                            
                            if ((temp0_545 & 8) != 0)
                                arg10 = _mm_blend_ps(arg10, zmm0, 8)
                    
                    zmm0 = zmm1 & not.o(arg5 ^ temp0_544)
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        arg8 = var_548_2
                    else
                        zmm2 = __pcmpeqd_xmmdq_memdq(var_468, data_143442ad0)
                        char temp0_616 = _mm_movemask_ps(zmm1 & not.o(zmm2))
                        
                        if (temp0_616 == 0)
                            arg8 = var_548_2
                        else
                            char temp35_1 = temp0_616 & 1
                            
                            if (temp35_1 == 0)
                                arg8 = var_548_2
                                
                                if (temp35_1 != 0)
                                label_14020a4e0:
                                    arg9 = _mm_blend_ps(arg9, zmm12, 1)
                                    
                                    if (temp35_1 != 0)
                                        goto label_14020a475
                                    
                                    goto label_14020a4e9
                            else
                                arg11 = _mm_blend_ps(arg11, zmm12, 1)
                                arg8 = var_548_2
                                
                                if (temp35_1 != 0)
                                    goto label_14020a4e0
                            
                            bool cond:164_1
                            bool cond:165_1
                            bool cond:183_1
                            bool cond:184_1
                            
                            if (temp35_1 != 0)
                            label_14020a475:
                                arg10 = _mm_blend_ps(arg10, zmm12, 1)
                                char temp54_1 = temp0_616 & 2
                                cond:164_1 = temp54_1 == 0
                                cond:165_1 = temp54_1 != 0
                                cond:183_1 = temp54_1 == 0
                                cond:184_1 = temp54_1 != 0
                                
                                if (temp54_1 != 0)
                                    goto label_14020a4ee
                                
                                goto label_14020a481
                            
                        label_14020a4e9:
                            char temp53_1 = temp0_616 & 2
                            cond:164_1 = temp53_1 == 0
                            cond:165_1 = temp53_1 != 0
                            cond:183_1 = temp53_1 == 0
                            cond:184_1 = temp53_1 != 0
                            
                            if (temp53_1 == 0)
                            label_14020a481:
                                
                                if (not(cond:164_1))
                                label_14020a483:
                                    arg9 = _mm_blend_ps(arg9, zmm12, 2)
                                    
                                    if (cond:184_1)
                                        goto label_14020a4f9
                                    
                                    goto label_14020a48c
                            else
                            label_14020a4ee:
                                arg11 = _mm_blend_ps(arg11, zmm12, 2)
                                
                                if (cond:165_1)
                                    goto label_14020a483
                            
                            bool cond:231_1
                            bool cond:232_1
                            bool cond:254_1
                            bool cond:255_1
                            
                            if (not(cond:183_1))
                            label_14020a4f9:
                                arg10 = _mm_blend_ps(arg10, zmm12, 2)
                                char temp80_1 = temp0_616 & 4
                                cond:231_1 = temp80_1 == 0
                                cond:232_1 = temp80_1 != 0
                                cond:254_1 = temp80_1 == 0
                                cond:255_1 = temp80_1 != 0
                                
                                if (temp80_1 != 0)
                                    goto label_14020a491
                                
                                goto label_14020a505
                            
                        label_14020a48c:
                            char temp79_1 = temp0_616 & 4
                            cond:231_1 = temp79_1 == 0
                            cond:232_1 = temp79_1 != 0
                            cond:254_1 = temp79_1 == 0
                            cond:255_1 = temp79_1 != 0
                            
                            if (temp79_1 == 0)
                            label_14020a505:
                                
                                if (not(cond:231_1))
                                label_14020a507:
                                    arg9 = _mm_blend_ps(arg9, zmm12, 4)
                                    
                                    if (cond:255_1)
                                        goto label_14020a49c
                                    
                                    goto label_14020a510
                            else
                            label_14020a491:
                                arg11 = _mm_blend_ps(arg11, zmm12, 4)
                                
                                if (cond:232_1)
                                    goto label_14020a507
                            
                            bool cond:295_1
                            bool cond:296_1
                            bool cond:315_1
                            bool cond:316_1
                            
                            if (not(cond:254_1))
                            label_14020a49c:
                                arg10 = _mm_blend_ps(arg10, zmm12, 4)
                                char temp108_1 = temp0_616 & 8
                                cond:295_1 = temp108_1 == 0
                                cond:296_1 = temp108_1 != 0
                                cond:315_1 = temp108_1 == 0
                                cond:316_1 = temp108_1 == 0
                                
                                if (temp108_1 != 0)
                                    goto label_14020a515
                                
                                goto label_14020a4a8
                            
                        label_14020a510:
                            char temp107_1 = temp0_616 & 8
                            cond:295_1 = temp107_1 == 0
                            cond:296_1 = temp107_1 != 0
                            cond:315_1 = temp107_1 == 0
                            cond:316_1 = temp107_1 == 0
                            
                            if (temp107_1 != 0)
                            label_14020a515:
                                arg11 = _mm_blend_ps(arg11, zmm12, 8)
                                
                                if (cond:296_1)
                                    goto label_14020a4aa
                                
                                goto label_14020a51e
                            
                        label_14020a4a8:
                            
                            if (cond:295_1)
                            label_14020a51e:
                                
                                if (not(cond:315_1))
                                    arg10 = _mm_blend_ps(arg10, zmm12, 8)
                            else
                            label_14020a4aa:
                                arg9 = _mm_blend_ps(arg9, zmm12, 8)
                                
                                if (not(cond:316_1))
                                    arg10 = _mm_blend_ps(arg10, zmm12, 8)
                        
                        char temp0_631 = _mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm0), 0x1f))
                        
                        if (temp0_631 != 0)
                            char temp52_1 = temp0_631 & 1
                            
                            if (temp52_1 != 0)
                                arg11 = _mm_blend_ps(arg11, zmm12, 1)
                                
                                if (temp52_1 != 0)
                                    goto label_14020a5a5
                            else if (temp52_1 != 0)
                            label_14020a5a5:
                                arg9 = _mm_blend_ps(arg9, zmm12, 1)
                                
                                if (temp52_1 != 0)
                                    goto label_14020a563
                                
                                goto label_14020a5ae
                            
                            bool cond:181_1
                            bool cond:182_1
                            bool cond:211_1
                            bool cond:212_1
                            
                            if (temp52_1 != 0)
                            label_14020a563:
                                arg10 = _mm_blend_ps(arg10, zmm12, 1)
                                char temp76_1 = temp0_631 & 2
                                cond:181_1 = temp76_1 == 0
                                cond:182_1 = temp76_1 != 0
                                cond:211_1 = temp76_1 == 0
                                cond:212_1 = temp76_1 != 0
                                
                                if (temp76_1 != 0)
                                    goto label_14020a5b3
                                
                                goto label_14020a56f
                            
                        label_14020a5ae:
                            char temp75_1 = temp0_631 & 2
                            cond:181_1 = temp75_1 == 0
                            cond:182_1 = temp75_1 != 0
                            cond:211_1 = temp75_1 == 0
                            cond:212_1 = temp75_1 != 0
                            
                            if (temp75_1 == 0)
                            label_14020a56f:
                                
                                if (not(cond:181_1))
                                label_14020a571:
                                    arg9 = _mm_blend_ps(arg9, zmm12, 2)
                                    
                                    if (cond:212_1)
                                        goto label_14020a5be
                                    
                                    goto label_14020a57a
                            else
                            label_14020a5b3:
                                arg11 = _mm_blend_ps(arg11, zmm12, 2)
                                
                                if (cond:182_1)
                                    goto label_14020a571
                            
                            bool cond:252_1
                            bool cond:253_1
                            bool cond:280_1
                            bool cond:281_1
                            
                            if (not(cond:211_1))
                            label_14020a5be:
                                arg10 = _mm_blend_ps(arg10, zmm12, 2)
                                char temp102_1 = temp0_631 & 4
                                cond:252_1 = temp102_1 == 0
                                cond:253_1 = temp102_1 != 0
                                cond:280_1 = temp102_1 == 0
                                cond:281_1 = temp102_1 != 0
                                
                                if (temp102_1 != 0)
                                    goto label_14020a57f
                                
                                goto label_14020a5ca
                            
                        label_14020a57a:
                            char temp101_1 = temp0_631 & 4
                            cond:252_1 = temp101_1 == 0
                            cond:253_1 = temp101_1 != 0
                            cond:280_1 = temp101_1 == 0
                            cond:281_1 = temp101_1 != 0
                            
                            if (temp101_1 == 0)
                            label_14020a5ca:
                                
                                if (not(cond:252_1))
                                label_14020a5cc:
                                    arg9 = _mm_blend_ps(arg9, zmm12, 4)
                                    
                                    if (cond:281_1)
                                        goto label_14020a58a
                                    
                                    goto label_14020a5d5
                            else
                            label_14020a57f:
                                arg11 = _mm_blend_ps(arg11, zmm12, 4)
                                
                                if (cond:253_1)
                                    goto label_14020a5cc
                            
                            bool cond:313_1
                            bool cond:314_1
                            bool cond:329_1
                            bool cond:330_1
                            
                            if (not(cond:280_1))
                            label_14020a58a:
                                arg10 = _mm_blend_ps(arg10, zmm12, 4)
                                char temp122_1 = temp0_631 & 8
                                cond:313_1 = temp122_1 == 0
                                cond:314_1 = temp122_1 != 0
                                cond:329_1 = temp122_1 == 0
                                cond:330_1 = temp122_1 != 0
                                
                                if (temp122_1 != 0)
                                    goto label_14020a5da
                                
                                goto label_14020a596
                            
                        label_14020a5d5:
                            char temp121_1 = temp0_631 & 8
                            cond:313_1 = temp121_1 == 0
                            cond:314_1 = temp121_1 != 0
                            cond:329_1 = temp121_1 == 0
                            cond:330_1 = temp121_1 != 0
                            
                            if (temp121_1 != 0)
                            label_14020a5da:
                                arg11 = _mm_blend_ps(arg11, zmm12, 8)
                                
                                if (cond:314_1)
                                    goto label_14020a598
                                
                                goto label_14020a5e3
                            
                        label_14020a596:
                            
                            if (cond:313_1)
                            label_14020a5e3:
                                
                                if (not(cond:329_1))
                                    arg10 = _mm_blend_ps(arg10, zmm12, 8)
                            else
                            label_14020a598:
                                arg9 = _mm_blend_ps(arg9, zmm12, 8)
                                
                                if (cond:330_1)
                                    arg10 = _mm_blend_ps(arg10, zmm12, 8)
            
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm15) & not.o(zmm9)
            char temp0_645 = _mm_movemask_ps(zmm3)
            
            if (temp0_645 != 0)
                int64_t var_4e8_3[0x2] = arg11
                int32_t temp0_646[0x4] = __pmulld_xmmdq_memdq(zmm15, var_4b8)
                zmm1 = _mm_cvtepi32_epi64(temp0_646[0].q)
                int64_t temp0_649[0x2] = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_646, 0x4e).q)
                arg11 = __paddq_xmmdq_memdq(temp0_649, var_4a8_3)
                uint128_t var_518_2 = zmm1
                var_3e8 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_478_3), arg6)
                arg11 = __paddq_xmmdq_memdq(arg11, var_538_1)
                arg7 &= zmm3
                float var_528_3[0x4] = arg9
                int32_t var_588_3[0x4] = zmm3
                uint128_t var_598
                
                if (_mm_movemask_ps(_mm_slli_epi32(arg7, 0x1f)) == 0)
                    zmm1 = var_508
                else
                    var_3f8 = arg11
                    zmm0 = _mm_cmpeq_epi32(var_408_1, zmm12)
                    arg11 = zmm0
                    zmm1 = _mm_slli_epi32(arg7 & zmm0, 0x1f)
                    char temp0_658 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_658 == 0)
                        zmm15 = var_4d8
                    else
                        int64_t var_498_2[0x2] = arg7
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        int32_t temp0_660[0x4] = __paddq_xmmdq_memdq(var_4d8, var_4a8_3)
                        int32_t temp0_662[0x4] = __paddq_xmmdq_memdq(
                            __paddq_xmmdq_memdq(var_448_1, var_478_3), var_518_2)
                        int32_t temp0_663[0x4] = __paddq_xmmdq_memdq(temp0_660, temp0_649)
                        zmm0 = data_1434426c0
                        arg7 = zmm0
                        int32_t temp0_664[0x4] = _mm_add_epi64(temp0_663, zmm0)
                        int32_t temp0_665[0x4] = _mm_add_epi64(temp0_662, zmm0)
                        zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                        float temp0_667[0x4] = _mm_blendv_ps(zx.o(0), temp0_665, zmm2)
                        zmm3 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm1 = _mm_blendv_ps(zx.o(0), temp0_664, zmm3)
                        int64_t rax_153 = _mm_extract_epi64(temp0_667, 1)
                        void* rsi_16 = arg4 + rax_153
                        zmm15 = *(arg4 + rax_153)
                        int64_t rax_154 = zmm1.q
                        int64_t rdi_1 = _mm_extract_epi64(zmm1, 1)
                        void* rbx_20 = arg4 + rax_154
                        zmm1 = _mm_blendv_ps(zx.o(0), arg7, zmm2)
                        zmm9 = *(arg4 + rax_154)
                        arg6 = _mm_blendv_ps(zx.o(0), arg7, zmm3)
                        zmm12 = *(arg4 + rdi_1)
                        void* rbp_25 = temp0_667[0].q + arg4
                        zmm4 = zx.o(*(zmm1.q + rbp_25))
                        zmm10 = *(_mm_extract_epi64(zmm1, 1) + rsi_16)
                        arg8 = *(arg6[0].q + rbx_20)
                        int64_t rax_158 = _mm_extract_epi64(arg6, 1)
                        void* rdi_2 = arg4 + rdi_1
                        zmm0 = zmm2
                        zmm2 = data_1434426e0
                        zmm1 = _mm_blendv_ps(zx.o(0), zmm2, zmm0)
                        arg9 = *(rax_158 + rdi_2)
                        arg6 = _mm_blendv_ps(zx.o(0), zmm2, zmm3)
                        zmm2 = zx.o(*(zmm1.q + rbp_25))
                        zmm1 = *(_mm_extract_epi64(zmm1, 1) + rsi_16)
                        int32_t (* rax_161)[0x4] = arg6[0].q
                        int64_t rsi_17 = _mm_extract_epi64(arg6, 1)
                        zmm3 = *(rax_161 + rbx_20)
                        arg5 = *(rsi_17 + rdi_2)
                        bool cond:70_1
                        bool cond:71_1
                        
                        if ((temp0_658 & 1) == 0)
                            char temp22_1 = temp0_658 & 1
                            cond:70_1 = temp22_1 != 0
                            cond:71_1 = temp22_1 == 0
                            
                            if (temp22_1 == 0)
                                goto label_14020a9af
                            
                            goto label_14020a82e
                        
                        var_598 = _mm_blend_epi16(var_598, zx.o(*rbp_25), 3)
                        char temp21_1 = temp0_658 & 1
                        cond:70_1 = temp21_1 != 0
                        cond:71_1 = temp21_1 == 0
                        
                        if (temp21_1 == 0)
                        label_14020a9af:
                            
                            if (cond:71_1)
                                goto label_14020a839
                            
                            goto label_14020a9c4
                        
                    label_14020a82e:
                        var_5a8 = _mm_blend_epi16(var_5a8, zmm4, 3)
                        bool cond:92_1
                        bool cond:93_1
                        bool cond:109_1
                        bool cond:110_1
                        
                        if (not(cond:70_1))
                        label_14020a839:
                            arg6 = zmm12
                            char temp34_1 = temp0_658 & 2
                            cond:92_1 = temp34_1 != 0
                            cond:93_1 = temp34_1 == 0
                            cond:109_1 = temp34_1 != 0
                            cond:110_1 = temp34_1 == 0
                            
                            if (temp34_1 == 0)
                                goto label_14020a9da
                            
                            goto label_14020a852
                        
                    label_14020a9c4:
                        var_508 = _mm_blend_epi16(var_508, zmm2, 3)
                        arg6 = zmm12
                        char temp33_1 = temp0_658 & 2
                        cond:92_1 = temp33_1 != 0
                        cond:93_1 = temp33_1 == 0
                        cond:109_1 = temp33_1 != 0
                        cond:110_1 = temp33_1 == 0
                        
                        if (temp33_1 == 0)
                        label_14020a9da:
                            zmm12 = zx.o(0)
                            zmm4 = var_5a8
                            
                            if (cond:93_1)
                                goto label_14020a865
                            
                            goto label_14020a9e8
                        
                    label_14020a852:
                        var_598 = _mm_insert_ps(var_598, zmm15, 0x10)
                        zmm12 = zx.o(0)
                        zmm4 = var_5a8
                        
                        if (not(cond:92_1))
                        label_14020a865:
                            zmm15 = var_4d8
                            
                            if (cond:110_1)
                                goto label_14020a9ff
                            
                            goto label_14020a883
                        
                    label_14020a9e8:
                        zmm4 = _mm_insert_ps(zmm4, zmm10, 0x10)
                        zmm15 = var_4d8
                        bool cond:144_1
                        bool cond:162_1
                        bool cond:163_1
                        
                        if (cond:109_1)
                        label_14020a883:
                            zmm1 = _mm_insert_ps(var_508, zmm1, 0x10)
                            char temp50_1 = temp0_658 & 4
                            cond:144_1 = temp50_1 == 0
                            cond:162_1 = temp50_1 == 0
                            cond:163_1 = temp50_1 != 0
                            
                            if (temp50_1 != 0)
                                var_598 = _mm_insert_ps(var_598, zmm9, 0x20)
                        else
                        label_14020a9ff:
                            zmm1 = var_508
                            char temp51_1 = temp0_658 & 4
                            cond:144_1 = temp51_1 == 0
                            cond:162_1 = temp51_1 == 0
                            cond:163_1 = temp51_1 != 0
                            
                            if (temp51_1 != 0)
                                var_598 = _mm_insert_ps(var_598, zmm9, 0x20)
                        
                        zmm9 = var_568_1
                        arg7 = var_498_2
                        
                        if (not(cond:144_1))
                            zmm4 = _mm_insert_ps(zmm4, arg8, 0x20)
                            
                            if (cond:163_1)
                                goto label_14020abd9
                            
                            goto label_14020aa40
                        
                        bool cond:209_1
                        bool cond:210_1
                        bool cond:229_1
                        bool cond:230_1
                        
                        if (not(cond:162_1))
                        label_14020abd9:
                            zmm1 = _mm_insert_ps(zmm1, zmm3, 0x20)
                            char temp74_1 = temp0_658 & 8
                            cond:209_1 = temp74_1 == 0
                            cond:210_1 = temp74_1 != 0
                            cond:229_1 = temp74_1 == 0
                            cond:230_1 = temp74_1 != 0
                            
                            if (temp74_1 != 0)
                                goto label_14020aa54
                            
                            goto label_14020abe8
                        
                    label_14020aa40:
                        char temp73_1 = temp0_658 & 8
                        cond:209_1 = temp73_1 == 0
                        cond:210_1 = temp73_1 != 0
                        cond:229_1 = temp73_1 == 0
                        cond:230_1 = temp73_1 != 0
                        
                        if (temp73_1 != 0)
                        label_14020aa54:
                            var_598 = _mm_insert_ps(var_598, arg6, 0x30)
                            
                            if (cond:210_1)
                                goto label_14020abee
                            
                            goto label_14020aa5f
                        
                    label_14020abe8:
                        
                        if (cond:209_1)
                        label_14020aa5f:
                            
                            if (not(cond:229_1))
                                zmm1 = _mm_insert_ps(zmm1, arg5, 0x30)
                        else
                        label_14020abee:
                            zmm4 = _mm_insert_ps(zmm4, arg9, 0x30)
                            
                            if (cond:230_1)
                                zmm1 = _mm_insert_ps(zmm1, arg5, 0x30)
                        
                        var_508 = zmm1
                    
                    arg11 &= not.o(arg7)
                    float var_408_2[0x4] = arg11
                    zmm1 = _mm_slli_epi32(arg11, 0x1f)
                    char temp0_699 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_699 == 0)
                        zmm1 = var_508
                        arg8 = var_548_2
                        zmm3 = var_588_3
                        arg11 = var_3f8
                    else
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_558, 0x1f), 0x1f)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm2
                        zmm10 = var_3e8
                        arg11 = var_3f8
                        arg8 = arg11
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            zmm0 = data_1434426c0
                            arg6 = zmm0
                            arg5 = _mm_add_epi64(arg11, zmm0)
                            arg7 = zmm4
                            int32_t temp0_705[0x4] = _mm_add_epi64(var_3e8, zmm0)
                            zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                            zmm10 = _mm_blendv_ps(var_3e8, temp0_705, zmm3)
                            zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                            arg8 = _mm_blendv_ps(arg11, arg5, zmm4)
                            int32_t temp0_710[0x4] = __paddq_xmmdq_memdq(zmm15, var_4a8_3)
                            arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_448_1, var_478_3), 
                                var_518_2)
                            int32_t temp0_714[0x4] =
                                _mm_add_epi64(__paddq_xmmdq_memdq(temp0_710, temp0_649), arg6)
                            arg6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, arg6), zmm3)
                            zmm0 = zmm4
                            zmm4 = arg7
                            float temp0_717[0x4] = _mm_blendv_ps(zx.o(0), temp0_714, zmm0)
                            zmm3 = *(arg4 + arg6[0].q)
                            int64_t rax_164 = _mm_extract_epi64(arg6, 1)
                            zmm12 = zx.o(0)
                            int64_t rbp_26 = temp0_717[0].q
                            int64_t rbx_21 = _mm_extract_epi64(temp0_717, 1)
                            zmm3 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm3, *(arg4 + rax_164), 0x10), 
                                    *(arg4 + rbp_26), 0x20), 
                                *(arg4 + rbx_21), 0x30)
                        
                        zmm1 = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                        
                        if ((temp0_699 & 1) == 0)
                            zmm0 = var_598
                            
                            if ((temp0_699 & 2) != 0)
                                zmm0 = _mm_blend_ps(zmm0, zmm1, 2)
                        else
                            zmm0 = _mm_blend_ps(var_598, zmm1, 1)
                            
                            if ((temp0_699 & 2) != 0)
                                zmm0 = _mm_blend_ps(zmm0, zmm1, 2)
                        
                        if ((temp0_699 & 4) != 0)
                            zmm0 = _mm_blend_ps(zmm0, zmm1, 4)
                            
                            if ((temp0_699 & 8) != 0)
                                zmm0 = _mm_blend_ps(zmm0, zmm1, 8)
                        else if ((temp0_699 & 8) != 0)
                            zmm0 = _mm_blend_ps(zmm0, zmm1, 8)
                        
                        var_598 = zmm0
                        zmm0 = data_1434422d0
                        zmm3 = var_558 & zmm0
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm3, zmm0) & var_408_2, 0x1f)
                        char temp0_730 = _mm_movemask_ps(zmm2)
                        
                        if (temp0_730 == 0)
                            zmm1 = zmm10
                            zmm2 = arg8
                            zmm0 = var_378
                            arg8 = var_548_2
                            zmm9 = var_568_1
                            zmm3 = _mm_cmpeq_epi32(zmm3, zmm12) & not.o(zmm0)
                            
                            if ((temp0_699 & 1) != 0)
                                zmm4 = _mm_blend_ps(zmm4, zmm3, 1)
                        else
                            arg7 = zmm4
                            zmm0 = data_1434426c0
                            int32_t temp0_731[0x4] = _mm_add_epi64(arg8, zmm0)
                            arg5 = _mm_add_epi64(zmm10, zmm0)
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm1 = _mm_blendv_ps(zmm10, arg5, _mm_shuffle_epi32(zmm2, 0x50))
                            zmm2 = _mm_blendv_ps(arg8, temp0_731, _mm_shuffle_epi32(zmm2, 0xfa))
                            
                            if ((temp0_730 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_378, *zmm10[0].q, 1)
                                zmm4 = arg7
                                
                                if ((temp0_730 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm10, 1), 0x10)
                            else
                                zmm0 = var_378
                                zmm4 = arg7
                                
                                if ((temp0_730 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm10, 1), 0x10)
                            
                            zmm9 = var_568_1
                            
                            if ((temp0_730 & 4) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg8[0].q, 0x20)
                                
                                if ((temp0_730 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg8, 1), 0x30)
                            else if ((temp0_730 & 8) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg8, 1), 0x30)
                            
                            arg8 = var_548_2
                            zmm3 = _mm_cmpeq_epi32(zmm3, zmm12) & not.o(zmm0)
                            
                            if ((temp0_699 & 1) != 0)
                                zmm4 = _mm_blend_ps(zmm4, zmm3, 1)
                        
                        if ((temp0_699 & 2) != 0)
                            zmm4 = _mm_blend_ps(zmm4, zmm3, 2)
                            
                            if ((temp0_699 & 4) != 0)
                                goto label_14020ae5a
                            
                            goto label_14020ad97
                        
                        if ((temp0_699 & 4) == 0)
                        label_14020ad97:
                            var_378 = zmm0
                            
                            if ((temp0_699 & 8) != 0)
                                zmm4 = _mm_blend_ps(zmm4, zmm3, 8)
                        else
                        label_14020ae5a:
                            zmm4 = _mm_blend_ps(zmm4, zmm3, 4)
                            var_378 = zmm0
                            
                            if ((temp0_699 & 8) != 0)
                                zmm4 = _mm_blend_ps(zmm4, zmm3, 8)
                        
                        arg5 = zmm4
                        zmm3 = data_142fc95e0
                        zmm0 = var_558 & zmm3
                        char temp0_748 = _mm_movemask_ps(_mm_slli_epi32(
                            var_408_2 & _mm_cmpeq_epi32(zmm0, zmm3), 0x1f))
                        
                        if (temp0_748 != 0)
                            if ((temp0_748 & 1) == 0)
                                zmm4 = arg5
                                
                                if ((temp0_748 & 2) != 0)
                                    goto label_14020b05c
                                
                                goto label_14020ae01
                            
                            var_3d8 = _mm_blend_epi16(var_3d8, zx.o(*zmm1.q), 3)
                            zmm4 = arg5
                            
                            if ((temp0_748 & 2) != 0)
                            label_14020b05c:
                                var_3d8 = __insertps_xmmps_memd_immb(var_3d8, 
                                    *_mm_extract_epi64(zmm1, 1), 0x10)
                                zmm1 = var_508
                                
                                if ((temp0_748 & 4) == 0)
                                    goto label_14020ae13
                                
                                goto label_14020b089
                            
                        label_14020ae01:
                            zmm1 = var_508
                            
                            if ((temp0_748 & 4) == 0)
                            label_14020ae13:
                                zmm3 = var_588_3
                                
                                if ((temp0_748 & 8) != 0)
                                    goto label_14020b0b4
                                
                                goto label_14020ae26
                            
                        label_14020b089:
                            var_3d8 = __insertps_xmmps_memd_immb(var_3d8, *zmm2[0].q, 0x20)
                            zmm3 = var_588_3
                            
                            if ((temp0_748 & 8) == 0)
                            label_14020ae26:
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(var_3d8)
                                
                                if ((temp0_699 & 1) == 0)
                                    goto label_14020ae9a
                                
                                goto label_14020ae34
                            
                        label_14020b0b4:
                            var_3d8 = __insertps_xmmps_memd_immb(var_3d8, 
                                *_mm_extract_epi64(zmm2, 1), 0x30)
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(var_3d8)
                            
                            if ((temp0_699 & 1) == 0)
                                goto label_14020ae9a
                            
                            goto label_14020ae34
                        
                        zmm1 = var_508
                        zmm3 = var_588_3
                        zmm4 = arg5
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(var_3d8)
                        
                        if ((temp0_699 & 1) == 0)
                        label_14020ae9a:
                            
                            if ((temp0_699 & 2) == 0)
                                goto label_14020ae3f
                            
                            goto label_14020ae9f
                        
                    label_14020ae34:
                        zmm1 = _mm_blend_epi16(zmm1, zmm0, 3)
                        
                        if ((temp0_699 & 2) == 0)
                        label_14020ae3f:
                            
                            if ((temp0_699 & 4) == 0)
                                goto label_14020aeaa
                            
                            goto label_14020ae44
                        
                    label_14020ae9f:
                        zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc)
                        
                        if ((temp0_699 & 4) != 0)
                        label_14020ae44:
                            zmm1 = _mm_blend_epi16(zmm1, zmm0, 0x30)
                            
                            if ((temp0_699 & 8) != 0)
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                        else
                        label_14020aeaa:
                            
                            if ((temp0_699 & 8) != 0)
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                
                var_5a8 = zmm4
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm3 & var_428, 0x1f)) == 0)
                    var_508 = zmm1
                    arg7 = _mm_cmpeq_epi32(arg7, arg7)
                    zmm15 = data_142d3f5b0
                    arg9 = var_528_3
                    zmm4 = var_598
                    arg11 = var_4e8_3
                else
                    zmm15 = temp0_49
                    zmm10 = _mm_srai_epi32(_mm_slli_epi32(zmm3 & zmm15, 0x1f), 0x1f)
                    char temp0_760 = _mm_movemask_ps(zmm10)
                    
                    if (temp0_760 == 0)
                        zmm12 = var_3e8
                    else
                        arg5 = _mm_srai_epi32(_mm_slli_epi32(var_558, 0x1f), 0x1f) & zmm15
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(zmm3, 0x1f), 0x1f) & arg5
                        arg8 = zx.o(0)
                        uint32_t temp0_765 = _mm_movemask_ps(zmm2)
                        uint128_t var_508_1 = zmm1
                        
                        if (temp0_765 == 0)
                            zmm12 = zx.o(0)
                            zmm9 = zx.o(0)
                        else
                            zmm9 = var_538_1
                            zmm0 = data_1434426c0
                            int32_t temp0_766[0x4] = _mm_add_epi64(zmm9, zmm0)
                            arg7 = var_578_1
                            int32_t temp0_767[0x4] = _mm_add_epi64(arg7, zmm0)
                            zmm3 = _mm_unpacklo_ps(zmm2, zmm2[0].q)
                            zmm1 = _mm_blendv_ps(arg7, temp0_767, zmm3)
                            float temp0_770[0x4] = _mm_unpackhi_ps(zmm2, zmm2)
                            zmm9 = _mm_blendv_ps(zmm9, temp0_766, temp0_770)
                            char rcx_55 = temp0_765.b
                            
                            if ((rcx_55 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_278, *arg7[0], 1)
                                
                                if ((rcx_55 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_578_1, 1), 0x10)
                            else
                                zmm0 = var_278
                                
                                if ((rcx_55 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_578_1, 1), 0x10)
                            
                            if ((rcx_55 & 4) == 0)
                                if ((rcx_55 & 8) != 0)
                                    goto label_14020b172
                                
                                goto label_14020b114
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_538_1[0].q, 0x20)
                            char rsi_18
                            
                            if ((rcx_55 & 8) != 0)
                            label_14020b172:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_538_1, 1), 0x30)
                                rsi_18 = _mm_movemask_ps(arg5)
                                zmm12 = zx.o(0)
                                
                                if ((rsi_18 & 1) != 0)
                                    goto label_14020b125
                                
                                goto label_14020b185
                            
                        label_14020b114:
                            rsi_18 = _mm_movemask_ps(arg5)
                            zmm12 = zx.o(0)
                            
                            if ((rsi_18 & 1) == 0)
                            label_14020b185:
                                
                                if ((rsi_18 & 2) != 0)
                                label_14020b18b:
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 2)
                                    
                                    if ((rsi_18 & 4) != 0)
                                        goto label_14020b138
                                    
                                    goto label_14020b19c
                            else
                            label_14020b125:
                                zmm12 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rsi_18 & 2) != 0)
                                    goto label_14020b18b
                            
                            if ((rsi_18 & 4) == 0)
                            label_14020b19c:
                                var_278 = zmm0
                                
                                if ((rsi_18 & 8) != 0)
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 8)
                            else
                            label_14020b138:
                                zmm12 = _mm_blend_ps(zmm12, zmm0, 4)
                                var_278 = zmm0
                                
                                if ((rsi_18 & 8) != 0)
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 8)
                            
                            zmm0 = data_1434426c0
                            var_578_1 = _mm_blendv_ps(zmm1, _mm_add_epi64(zmm1, zmm0), zmm3)
                            var_538_1 = _mm_blendv_ps(zmm9, _mm_add_epi64(zmm9, zmm0), temp0_770)
                            
                            if ((rcx_55 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_288, *zmm1.q, 1)
                                zmm3 = var_588_3
                                
                                if ((rcx_55 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm1, 1), 0x10)
                            else
                                zmm0 = var_288
                                zmm3 = var_588_3
                                
                                if ((rcx_55 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm1, 1), 0x10)
                            
                            if ((rcx_55 & 4) == 0)
                                if ((rcx_55 & 8) != 0)
                                    goto label_14020b28c
                                
                                goto label_14020b23d
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm9[0].q, 0x20)
                            
                            if ((rcx_55 & 8) != 0)
                            label_14020b28c:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm9, 1), 0x30)
                                zmm9 = zx.o(0)
                                
                                if ((rsi_18 & 1) != 0)
                                    goto label_14020b24b
                                
                                goto label_14020b29c
                            
                        label_14020b23d:
                            zmm9 = zx.o(0)
                            
                            if ((rsi_18 & 1) == 0)
                            label_14020b29c:
                                
                                if ((rsi_18 & 2) != 0)
                                label_14020b2a2:
                                    zmm9 = _mm_blend_ps(zmm9, zmm0, 2)
                                    
                                    if ((rsi_18 & 4) != 0)
                                        goto label_14020b25e
                                    
                                    goto label_14020b2b3
                            else
                            label_14020b24b:
                                zmm9 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rsi_18 & 2) != 0)
                                    goto label_14020b2a2
                            
                            if ((rsi_18 & 4) == 0)
                            label_14020b2b3:
                                var_288 = zmm0
                                
                                if ((rsi_18 & 8) != 0)
                                    zmm9 = _mm_blend_ps(zmm9, zmm0, 8)
                            else
                            label_14020b25e:
                                zmm9 = _mm_blend_ps(zmm9, zmm0, 4)
                                var_288 = zmm0
                                
                                if ((rsi_18 & 8) != 0)
                                    zmm9 = _mm_blend_ps(zmm9, zmm0, 8)
                        
                        zmm0 = data_1434422d0
                        zmm4 = _mm_cmpeq_epi32(var_558 & zmm0, zmm0) & zmm15
                        zmm1 = _mm_slli_epi32(zmm3 & zmm4, 0x1f)
                        char temp0_803 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_803 == 0)
                            zmm2 = zx.o(0)
                        else
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            arg7 = var_538_1
                            zmm0 = data_1434426c0
                            int32_t temp0_805[0x4] = _mm_add_epi64(arg7, zmm0)
                            arg5 = var_578_1
                            int32_t temp0_806[0x4] = _mm_add_epi64(arg5, zmm0)
                            zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                            float temp0_808[0x4] = _mm_blendv_ps(arg5, temp0_806, zmm2)
                            zmm3 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm1 = _mm_blendv_ps(arg7, temp0_805, zmm3)
                            
                            if ((temp0_803 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_2c8, *arg5[0].q, 1)
                                
                                if ((temp0_803 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg5, 1), 0x10)
                            else
                                zmm0 = var_2c8
                                
                                if ((temp0_803 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg5, 1), 0x10)
                            
                            if ((temp0_803 & 4) == 0)
                                if ((temp0_803 & 8) != 0)
                                    goto label_14020b3f7
                                
                                goto label_14020b397
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_538_1[0].q, 0x20)
                            char rsi_19
                            
                            if ((temp0_803 & 8) != 0)
                            label_14020b3f7:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_538_1, 1), 0x30)
                                rsi_19 = _mm_movemask_ps(zmm4)
                                arg8 = zx.o(0)
                                
                                if ((rsi_19 & 1) != 0)
                                    goto label_14020b3aa
                                
                                goto label_14020b40b
                            
                        label_14020b397:
                            rsi_19 = _mm_movemask_ps(zmm4)
                            arg8 = zx.o(0)
                            
                            if ((rsi_19 & 1) == 0)
                            label_14020b40b:
                                
                                if ((rsi_19 & 2) != 0)
                                label_14020b411:
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 0xc)
                                    
                                    if ((rsi_19 & 4) != 0)
                                        goto label_14020b3bd
                                    
                                    goto label_14020b422
                            else
                            label_14020b3aa:
                                arg8 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rsi_19 & 2) != 0)
                                    goto label_14020b411
                            
                            if ((rsi_19 & 4) == 0)
                            label_14020b422:
                                var_2c8 = zmm0
                                
                                if ((rsi_19 & 8) != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 0xc0)
                            else
                            label_14020b3bd:
                                arg8 = _mm_blend_epi16(arg8, zmm0, 0x30)
                                var_2c8 = zmm0
                                
                                if ((rsi_19 & 8) != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 0xc0)
                            
                            zmm0 = data_1434426c0
                            float temp0_822[0x4] =
                                _mm_blendv_ps(temp0_808, _mm_add_epi64(temp0_808, zmm0), zmm2)
                            var_538_1 = _mm_blendv_ps(zmm1, _mm_add_epi64(zmm1, zmm0), zmm3)
                            var_578_1 = temp0_822
                            
                            if ((temp0_803 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_2b8, *temp0_808[0].q, 1)
                                zmm15 = temp0_49
                                
                                if ((temp0_803 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_808, 1), 0x10)
                            else
                                zmm0 = var_2b8
                                zmm15 = temp0_49
                                
                                if ((temp0_803 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_808, 1), 0x10)
                            
                            if ((temp0_803 & 4) == 0)
                                if ((temp0_803 & 8) != 0)
                                    goto label_14020b51a
                                
                                goto label_14020b4cf
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm1.q, 0x20)
                            
                            if ((temp0_803 & 8) != 0)
                            label_14020b51a:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm1, 1), 0x30)
                                zmm2 = zx.o(0)
                                
                                if ((rsi_19 & 1) != 0)
                                    goto label_14020b4db
                                
                                goto label_14020b529
                            
                        label_14020b4cf:
                            zmm2 = zx.o(0)
                            
                            if ((rsi_19 & 1) == 0)
                            label_14020b529:
                                
                                if ((rsi_19 & 2) != 0)
                                label_14020b52f:
                                    zmm2 = _mm_blend_ps(zmm2, zmm0, 2)
                                    
                                    if ((rsi_19 & 4) != 0)
                                        goto label_14020b4ed
                                    
                                    goto label_14020b53f
                            else
                            label_14020b4db:
                                zmm2 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rsi_19 & 2) != 0)
                                    goto label_14020b52f
                            
                            if ((rsi_19 & 4) == 0)
                            label_14020b53f:
                                var_2b8 = zmm0
                                
                                if ((rsi_19 & 8) != 0)
                                    zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                            else
                            label_14020b4ed:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 4)
                                var_2b8 = zmm0
                                
                                if ((rsi_19 & 8) != 0)
                                    zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                        
                        zmm0 = data_142fc95e0
                        zmm3 = _mm_cmpeq_epi32(var_558 & zmm0, zmm0) & zmm15
                        zmm1 = _mm_slli_epi32(var_588_3 & zmm3, 0x1f)
                        char temp0_835 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_835 == 0)
                            zmm3 = zx.o(0)
                            zmm1 = zx.o(0)
                            arg7 = zmm12
                        else
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            arg7 = var_538_1
                            zmm0 = data_1434426c0
                            int32_t temp0_837[0x4] = _mm_add_epi64(arg7, zmm0)
                            arg5 = var_578_1
                            float temp0_840[0x4] = _mm_blendv_ps(arg5, _mm_add_epi64(arg5, zmm0), 
                                _mm_shuffle_epi32(zmm1, 0x50))
                            zmm1 = _mm_blendv_ps(arg7, temp0_837, _mm_shuffle_epi32(zmm1, 0xfa))
                            
                            if ((temp0_835 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_2a8, *arg5[0].q, 1)
                                
                                if ((temp0_835 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_578_1, 1), 0x10)
                            else
                                zmm0 = var_2a8
                                
                                if ((temp0_835 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_578_1, 1), 0x10)
                            
                            if ((temp0_835 & 4) == 0)
                                if ((temp0_835 & 8) != 0)
                                    goto label_14020b69d
                                
                                goto label_14020b629
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_538_1[0].q, 0x20)
                            char rsi_20
                            
                            if ((temp0_835 & 8) != 0)
                            label_14020b69d:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_538_1, 1), 0x30)
                                rsi_20 = _mm_movemask_ps(zmm3)
                                zmm3 = zx.o(0)
                                
                                if ((rsi_20 & 1) != 0)
                                    goto label_14020b638
                                
                                goto label_14020b6af
                            
                        label_14020b629:
                            rsi_20 = _mm_movemask_ps(zmm3)
                            zmm3 = zx.o(0)
                            
                            if ((rsi_20 & 1) != 0)
                            label_14020b638:
                                zmm3 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rsi_20 & 2) != 0)
                                    goto label_14020b6b5
                                
                                goto label_14020b644
                            
                        label_14020b6af:
                            
                            if ((rsi_20 & 2) == 0)
                            label_14020b644:
                                
                                if ((rsi_20 & 4) != 0)
                                label_14020b64a:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                                    
                                    if ((rsi_20 & 8) != 0)
                                        goto label_14020b6c7
                                    
                                    goto label_14020b659
                            else
                            label_14020b6b5:
                                zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                                
                                if ((rsi_20 & 4) != 0)
                                    goto label_14020b64a
                            
                            if ((rsi_20 & 8) != 0)
                            label_14020b6c7:
                                zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                                var_2a8 = zmm0
                                
                                if ((temp0_835 & 1) == 0)
                                    goto label_14020b663
                                
                                goto label_14020b6f2
                            
                        label_14020b659:
                            var_2a8 = zmm0
                            
                            if ((temp0_835 & 1) != 0)
                            label_14020b6f2:
                                zmm0 = _mm_blend_epi16(var_298, zx.o(*temp0_840[0].q), 3)
                                
                                if ((temp0_835 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_840, 1), 0x10)
                            else
                            label_14020b663:
                                zmm0 = var_298
                                
                                if ((temp0_835 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_840, 1), 0x10)
                            
                            arg7 = zmm12
                            
                            if ((temp0_835 & 4) == 0)
                                if ((temp0_835 & 8) != 0)
                                    goto label_14020b761
                                
                                goto label_14020b716
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm1.q, 0x20)
                            
                            if ((temp0_835 & 8) != 0)
                            label_14020b761:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm1, 1), 0x30)
                                zmm1 = zx.o(0)
                                
                                if ((rsi_20 & 1) != 0)
                                    goto label_14020b722
                                
                                goto label_14020b770
                            
                        label_14020b716:
                            zmm1 = zx.o(0)
                            
                            if ((rsi_20 & 1) == 0)
                            label_14020b770:
                                
                                if ((rsi_20 & 2) != 0)
                                label_14020b776:
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                                    
                                    if ((rsi_20 & 4) != 0)
                                        goto label_14020b734
                                    
                                    goto label_14020b786
                            else
                            label_14020b722:
                                zmm1 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rsi_20 & 2) != 0)
                                    goto label_14020b776
                            
                            if ((rsi_20 & 4) == 0)
                            label_14020b786:
                                var_298 = zmm0
                                
                                if ((rsi_20 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                            label_14020b734:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 4)
                                var_298 = zmm0
                                
                                if ((rsi_20 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                        
                        int32_t temp0_862[0x4] = __paddq_xmmdq_memdq(
                            __paddq_xmmdq_memdq(var_448_1, var_478_3), var_518_2)
                        zmm0 = data_1434426c0
                        float temp0_865[0x4] = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(temp0_862, zmm0), _mm_shuffle_epi32(zmm10, 0x50))
                        arg6 = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(
                                __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8, var_4a8_3), 
                                    temp0_649), 
                                zmm0), 
                            _mm_shuffle_epi32(zmm10, 0xfa))
                        int64_t rax_198 = temp0_865[0].q
                        int64_t rcx_60 = _mm_extract_epi64(temp0_865, 1)
                        int64_t rbp_27 = arg6[0].q
                        int64_t rdi_3 = _mm_extract_epi64(arg6, 1)
                        zmm0 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_198)), *(arg4 + rcx_60), 
                                    1), 
                                *(arg4 + rbp_27), 2), 
                            *(arg4 + rdi_3), 3)
                        zmm4 = zmm0
                        arg7 = _mm_add_ps(arg7, 
                            _mm_mul_ps(zmm9, 
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0)))
                        arg5 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm0 = data_143442440
                        arg6 = zmm0
                        zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                        arg5 = data_143442690
                        float temp0_883[0x4] = _mm_mul_ps(zmm2, _mm_div_ps(zmm0, arg5))
                        zmm0 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm4, 0x15), arg6)), arg5)
                        char temp67_1 = temp0_760 & 1
                        
                        if (temp67_1 != 0)
                            var_598 = _mm_blend_ps(var_598, arg7, 1)
                        
                        zmm9 = var_568_1
                        zmm12 = var_3e8
                        zmm1 = _mm_mul_ps(zmm1, zmm0)
                        arg8 = _mm_add_ps(arg8, temp0_883)
                        
                        if (temp67_1 != 0)
                            var_5a8 = _mm_blend_ps(var_5a8, arg8, 1)
                        
                        zmm0 = var_598
                        zmm3 = _mm_add_ps(zmm3, zmm1)
                        bool cond:249_1
                        bool cond:277_1
                        bool cond:278_1
                        
                        if (temp67_1 == 0)
                            zmm1 = var_508_1
                            char temp91_1 = temp0_760 & 2
                            cond:249_1 = temp91_1 == 0
                            cond:277_1 = temp91_1 == 0
                            cond:278_1 = temp91_1 != 0
                            
                            if (temp91_1 != 0)
                                zmm0 = _mm_blend_ps(zmm0, arg7, 2)
                        else
                            zmm1 = _mm_blend_ps(var_508_1, zmm3, 1)
                            char temp92_1 = temp0_760 & 2
                            cond:249_1 = temp92_1 == 0
                            cond:277_1 = temp92_1 == 0
                            cond:278_1 = temp92_1 != 0
                            
                            if (temp92_1 != 0)
                                zmm0 = _mm_blend_ps(zmm0, arg7, 2)
                        
                        if (not(cond:249_1))
                            var_5a8 = _mm_blend_ps(var_5a8, arg8, 2)
                            
                            if (cond:278_1)
                                goto label_14020b955
                            
                            goto label_14020b91f
                        
                        bool cond:309_1
                        bool cond:310_1
                        bool cond:327_1
                        bool cond:328_1
                        
                        if (not(cond:277_1))
                        label_14020b955:
                            zmm1 = _mm_blend_ps(zmm1, zmm3, 2)
                            char temp116_1 = temp0_760 & 4
                            cond:309_1 = temp116_1 == 0
                            cond:310_1 = temp116_1 != 0
                            cond:327_1 = temp116_1 == 0
                            cond:328_1 = temp116_1 != 0
                            
                            if (temp116_1 != 0)
                                goto label_14020b924
                            
                            goto label_14020b960
                        
                    label_14020b91f:
                        char temp115_1 = temp0_760 & 4
                        cond:309_1 = temp115_1 == 0
                        cond:310_1 = temp115_1 != 0
                        cond:327_1 = temp115_1 == 0
                        cond:328_1 = temp115_1 != 0
                        
                        if (temp115_1 == 0)
                        label_14020b960:
                            
                            if (not(cond:309_1))
                            label_14020b96d:
                                var_5a8 = _mm_blend_ps(var_5a8, arg8, 4)
                                
                                if (cond:328_1)
                                    goto label_14020b92e
                                
                                goto label_14020b973
                        else
                        label_14020b924:
                            zmm0 = _mm_blend_ps(zmm0, arg7, 4)
                            
                            if (cond:310_1)
                                goto label_14020b96d
                        
                        bool cond:345_1
                        bool cond:359_1
                        bool cond:360_1
                        bool cond:346_1
                        
                        if (cond:327_1)
                        label_14020b973:
                            char temp129_1 = temp0_760 & 8
                            cond:345_1 = temp129_1 == 0
                            cond:346_1 = temp129_1 != 0
                            cond:359_1 = temp129_1 == 0
                            cond:360_1 = temp129_1 != 0
                            
                            if (temp129_1 != 0)
                            label_14020b978:
                                zmm0 = _mm_blend_ps(zmm0, arg7, 8)
                                
                                if (cond:346_1)
                                    goto label_14020b946
                                
                                goto label_14020b980
                        else
                        label_14020b92e:
                            zmm1 = _mm_blend_ps(zmm1, zmm3, 4)
                            char temp130_1 = temp0_760 & 8
                            cond:345_1 = temp130_1 == 0
                            cond:346_1 = temp130_1 != 0
                            cond:359_1 = temp130_1 == 0
                            cond:360_1 = temp130_1 != 0
                            
                            if (temp130_1 != 0)
                                goto label_14020b978
                        
                        if (cond:345_1)
                        label_14020b980:
                            var_598 = zmm0
                            
                            if (not(cond:359_1))
                                zmm1 = _mm_blend_ps(zmm1, zmm3, 8)
                        else
                        label_14020b946:
                            var_5a8 = _mm_blend_ps(var_5a8, arg8, 8)
                            var_598 = zmm0
                            
                            if (cond:360_1)
                                zmm1 = _mm_blend_ps(zmm1, zmm3, 8)
                        
                        zmm3 = var_588_3
                    
                    zmm15 ^= var_428
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm3 & zmm15, 0x1f)) == 0)
                        var_508 = zmm1
                        arg7 = _mm_cmpeq_epi32(arg7, arg7)
                        zmm15 = data_142d3f5b0
                        arg9 = var_528_3
                        zmm4 = var_598
                        arg11 = var_4e8_3
                        arg8 = var_548_2
                        zmm12 = zx.o(0)
                    else
                        zmm10 = zmm9
                        arg8 = zmm1
                        int32_t temp0_905[0x4] = __pcmpeqd_xmmdq_memdq(var_468, data_1434422d0)
                        arg6 = zmm3 & temp0_905
                        zmm1 = _mm_slli_epi32(arg6, 0x1f)
                        char temp0_907 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_907 == 0)
                            arg7 = _mm_cmpeq_epi32(arg7, arg7)
                            arg9 = var_528_3
                            arg11 = var_4e8_3
                            zmm12 = zx.o(0)
                        else
                            zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_558, 0x1f), 0x1f)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm2
                            
                            if (_mm_movemask_ps(zmm1) != 0)
                                zmm0 = data_1434426b0
                                arg5 = _mm_add_epi64(arg11, zmm0)
                                int32_t temp0_913[0x4] = _mm_add_epi64(zmm12, zmm0)
                                zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                                zmm12 = _mm_blendv_ps(zmm12, temp0_913, zmm3)
                                zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                                arg11 = _mm_blendv_ps(arg11, arg5, zmm4)
                                arg5 = __paddq_xmmdq_memdq(var_4d8, var_4a8_3)
                                arg7 = __paddq_xmmdq_memdq(
                                    __paddq_xmmdq_memdq(var_448_1, var_478_3), var_518_2)
                                arg5 = __paddq_xmmdq_memdq(arg5, temp0_649)
                                zmm0 = data_1434426c0
                                arg5 = _mm_add_epi64(arg5, zmm0)
                                arg7 = _mm_add_epi64(arg7, zmm0)
                                zmm1 = _mm_blendv_ps(zx.o(0), arg7, zmm3)
                                zmm3 = _mm_blendv_ps(zx.o(0), arg5, zmm4)
                                int64_t rax_201 = _mm_extract_epi64(zmm1, 1)
                                int64_t rbx_24 = zmm3[0].q
                                int64_t rdi_4 = _mm_extract_epi64(zmm3, 1)
                                zmm3 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + zmm1.q)), 
                                                *(arg4 + rax_201), 1), 
                                            *(arg4 + rbx_24), 2), 
                                        *(arg4 + rdi_4), 3).q), 
                                    data_143442b40))
                            
                            arg7 = _mm_cmpeq_epi32(arg7, arg7)
                            zmm1 = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                            
                            if ((temp0_907 & 1) == 0)
                                zmm0 = var_598
                                arg9 = var_528_3
                                
                                if ((temp0_907 & 2) != 0)
                                    zmm0 = _mm_blend_ps(zmm0, zmm1, 2)
                            else
                                zmm0 = _mm_blend_ps(var_598, zmm1, 1)
                                arg9 = var_528_3
                                
                                if ((temp0_907 & 2) != 0)
                                    zmm0 = _mm_blend_ps(zmm0, zmm1, 2)
                            
                            if ((temp0_907 & 4) != 0)
                                zmm0 = _mm_blend_ps(zmm0, zmm1, 4)
                                
                                if ((temp0_907 & 8) != 0)
                                    zmm0 = _mm_blend_ps(zmm0, zmm1, 8)
                            else if ((temp0_907 & 8) != 0)
                                zmm0 = _mm_blend_ps(zmm0, zmm1, 8)
                            
                            var_598 = zmm0
                            zmm0 = data_1434422d0
                            zmm1 = var_558 & zmm0
                            zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm0) & arg6, 0x1f)
                            char temp0_942 = _mm_movemask_ps(zmm2)
                            
                            if (temp0_942 == 0)
                                zmm3 = zmm12
                                zmm2 = arg11
                                arg11 = var_4e8_3
                                zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                                
                                if ((temp0_907 & 1) != 0)
                                    var_5a8 = _mm_blend_epi16(var_5a8, zmm1, 3)
                            else
                                zmm0 = data_1434426b0
                                int32_t temp0_943[0x4] = _mm_add_epi64(arg11, zmm0)
                                arg5 = _mm_add_epi64(zmm12, zmm0)
                                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                zmm3 = _mm_blendv_ps(zmm12, arg5, _mm_shuffle_epi32(zmm2, 0x50))
                                zmm2 =
                                    _mm_blendv_ps(arg11, temp0_943, _mm_shuffle_epi32(zmm2, 0xfa))
                                
                                if ((temp0_942 & 1) != 0)
                                    zmm0 = _mm_insert_epi32(var_2f8, zx.d(*zmm12[0].q), 0)
                                    zmm4 = arg11
                                    
                                    if ((temp0_942 & 2) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm12, 1)), 1)
                                else
                                    zmm0 = var_2f8
                                    zmm4 = arg11
                                    
                                    if ((temp0_942 & 2) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm12, 1)), 1)
                                
                                arg11 = var_4e8_3
                                
                                if ((temp0_942 & 4) != 0)
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm4[0].q), 2)
                                    
                                    if ((temp0_942 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm4, 1)), 3)
                                else if ((temp0_942 & 8) != 0)
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm4, 1)), 3)
                                
                                var_2f8 = zmm0
                                zmm4 = zx.o(0)
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_blend_epi16(zmm0, zmm4, 0xaa), data_143442b40))
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm4) & not.o(zmm0)
                                
                                if ((temp0_907 & 1) != 0)
                                    var_5a8 = _mm_blend_epi16(var_5a8, zmm1, 3)
                            
                            if ((temp0_907 & 2) != 0)
                                var_5a8 = _mm_blend_epi16(var_5a8, zmm1, 0xc)
                                
                                if ((temp0_907 & 4) != 0)
                                    goto label_14020bd82
                                
                                goto label_14020bd14
                            
                            if ((temp0_907 & 4) == 0)
                            label_14020bd14:
                                
                                if ((temp0_907 & 8) != 0)
                                    var_5a8 = _mm_blend_epi16(var_5a8, zmm1, 0xc0)
                            else
                            label_14020bd82:
                                var_5a8 = _mm_blend_epi16(var_5a8, zmm1, 0x30)
                                
                                if ((temp0_907 & 8) != 0)
                                    var_5a8 = _mm_blend_epi16(var_5a8, zmm1, 0xc0)
                            
                            zmm1 = data_142fc95e0
                            zmm0 = var_558 & zmm1
                            zmm1 = _mm_cmpeq_epi32(zmm0, zmm1)
                            arg6 = _mm_slli_epi32(arg6 & zmm1, 0x1f)
                            char temp0_963 = _mm_movemask_ps(arg6)
                            
                            if (temp0_963 == 0)
                                zmm3 = var_588_3
                                zmm12 = zx.o(0)
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(zmm1)
                                
                                if ((temp0_907 & 1) != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 3)
                            else
                                if ((temp0_963 & 1) != 0)
                                    zmm1 = _mm_insert_epi32(var_2e8, zx.d(*zmm3[0].q), 0)
                                    
                                    if ((temp0_963 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                else
                                    zmm1 = var_2e8
                                    
                                    if ((temp0_963 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                
                                zmm3 = var_588_3
                                zmm12 = zx.o(0)
                                
                                if ((temp0_963 & 4) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2[0].q), 2)
                                    
                                    if ((temp0_963 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                else if ((temp0_963 & 8) != 0)
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                
                                var_2e8 = zmm1
                                zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_blend_epi16(zmm1, zmm12, 0xaa), data_143442b40))
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(zmm1)
                                
                                if ((temp0_907 & 1) != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 3)
                            
                            if ((temp0_907 & 2) != 0)
                                arg8 = _mm_blend_epi16(arg8, zmm0, 0xc)
                                
                                if ((temp0_907 & 4) != 0)
                                    goto label_14020bf78
                                
                                goto label_14020be68
                            
                            if ((temp0_907 & 4) == 0)
                            label_14020be68:
                                
                                if ((temp0_907 & 8) != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 0xc0)
                            else
                            label_14020bf78:
                                arg8 = _mm_blend_epi16(arg8, zmm0, 0x30)
                                
                                if ((temp0_907 & 8) != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 0xc0)
                        
                        zmm15 = (zmm15 ^ temp0_905) & zmm3
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(zmm15, 0x1f)) == 0)
                            var_508 = arg8
                            zmm4 = var_598
                            arg8 = var_548_2
                            zmm15 = data_142d3f5b0
                            zmm9 = zmm10
                        else
                            zmm0 = __pcmpeqd_xmmdq_memdq(var_468, data_143442ad0)
                            char temp0_981 = _mm_movemask_ps(_mm_slli_epi32(zmm3 & zmm0, 0x1f))
                            
                            if (temp0_981 == 0)
                                zmm9 = zmm10
                            else
                                char temp66_1 = temp0_981 & 1
                                
                                if (temp66_1 == 0)
                                    zmm9 = zmm10
                                    
                                    if (temp66_1 != 0)
                                    label_14020bfa4:
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 3)
                                        
                                        if (temp66_1 != 0)
                                            goto label_14020bee8
                                        
                                        goto label_14020bfaf
                                else
                                    var_598 = _mm_blend_epi16(var_598, zmm12, 3)
                                    zmm9 = zmm10
                                    
                                    if (temp66_1 != 0)
                                        goto label_14020bfa4
                                
                                bool cond:247_1
                                bool cond:248_1
                                bool cond:275_1
                                bool cond:276_1
                                
                                if (temp66_1 != 0)
                                label_14020bee8:
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 3)
                                    char temp90_1 = temp0_981 & 2
                                    cond:247_1 = temp90_1 == 0
                                    cond:248_1 = temp90_1 != 0
                                    cond:275_1 = temp90_1 == 0
                                    cond:276_1 = temp90_1 != 0
                                    
                                    if (temp90_1 != 0)
                                        goto label_14020bfc5
                                    
                                    goto label_14020bef8
                                
                            label_14020bfaf:
                                char temp89_1 = temp0_981 & 2
                                cond:247_1 = temp89_1 == 0
                                cond:248_1 = temp89_1 != 0
                                cond:275_1 = temp89_1 == 0
                                cond:276_1 = temp89_1 != 0
                                
                                if (temp89_1 == 0)
                                label_14020bef8:
                                    
                                    if (not(cond:247_1))
                                    label_14020bf0a:
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0xc)
                                        
                                        if (cond:276_1)
                                            goto label_14020bfd7
                                        
                                        goto label_14020bf15
                                else
                                label_14020bfc5:
                                    var_598 = _mm_blend_epi16(var_598, zmm12, 0xc)
                                    
                                    if (cond:248_1)
                                        goto label_14020bf0a
                                
                                bool cond:307_1
                                bool cond:308_1
                                bool cond:325_1
                                bool cond:326_1
                                
                                if (not(cond:275_1))
                                label_14020bfd7:
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 0xc)
                                    char temp114_1 = temp0_981 & 4
                                    cond:307_1 = temp114_1 == 0
                                    cond:308_1 = temp114_1 != 0
                                    cond:325_1 = temp114_1 == 0
                                    cond:326_1 = temp114_1 != 0
                                    
                                    if (temp114_1 != 0)
                                        goto label_14020bf2b
                                    
                                    goto label_14020bfe7
                                
                            label_14020bf15:
                                char temp113_1 = temp0_981 & 4
                                cond:307_1 = temp113_1 == 0
                                cond:308_1 = temp113_1 != 0
                                cond:325_1 = temp113_1 == 0
                                cond:326_1 = temp113_1 != 0
                                
                                if (temp113_1 == 0)
                                label_14020bfe7:
                                    
                                    if (not(cond:307_1))
                                    label_14020bff9:
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0x30)
                                        
                                        if (cond:326_1)
                                            goto label_14020bf3d
                                        
                                        goto label_14020c004
                                else
                                label_14020bf2b:
                                    var_598 = _mm_blend_epi16(var_598, zmm12, 0x30)
                                    
                                    if (cond:308_1)
                                        goto label_14020bff9
                                
                                bool cond:343_1
                                bool cond:344_1
                                bool cond:357_1
                                bool cond:358_1
                                
                                if (not(cond:325_1))
                                label_14020bf3d:
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 0x30)
                                    char temp128_1 = temp0_981 & 8
                                    cond:343_1 = temp128_1 == 0
                                    cond:344_1 = temp128_1 != 0
                                    cond:357_1 = temp128_1 == 0
                                    cond:358_1 = temp128_1 == 0
                                    
                                    if (temp128_1 != 0)
                                        goto label_14020c01a
                                    
                                    goto label_14020bf4d
                                
                            label_14020c004:
                                char temp127_1 = temp0_981 & 8
                                cond:343_1 = temp127_1 == 0
                                cond:344_1 = temp127_1 != 0
                                cond:357_1 = temp127_1 == 0
                                cond:358_1 = temp127_1 == 0
                                
                                if (temp127_1 != 0)
                                label_14020c01a:
                                    var_598 = _mm_blend_epi16(var_598, zmm12, 0xc0)
                                    
                                    if (cond:344_1)
                                        goto label_14020bf5f
                                    
                                    goto label_14020c026
                                
                            label_14020bf4d:
                                
                                if (cond:343_1)
                                label_14020c026:
                                    
                                    if (not(cond:357_1))
                                        arg8 = _mm_blend_epi16(arg8, zmm12, 0xc0)
                                else
                                label_14020bf5f:
                                    var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0xc0)
                                    
                                    if (not(cond:358_1))
                                        arg8 = _mm_blend_epi16(arg8, zmm12, 0xc0)
                            
                            char temp0_996 =
                                _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm15), 0x1f))
                            
                            if (temp0_996 == 0)
                                var_508 = arg8
                                zmm4 = var_598
                                arg8 = var_548_2
                                zmm15 = data_142d3f5b0
                            else
                                char temp78_1 = temp0_996 & 1
                                
                                if (temp78_1 == 0)
                                    zmm4 = var_598
                                    
                                    if (temp78_1 != 0)
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 3)
                                else
                                    zmm4 = _mm_blend_epi16(var_598, zmm12, 3)
                                    
                                    if (temp78_1 != 0)
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 3)
                                
                                zmm15 = data_142d3f5b0
                                bool cond:273_1
                                bool cond:274_1
                                bool cond:293_1
                                bool cond:294_1
                                
                                if (temp78_1 != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 3)
                                    char temp106_1 = temp0_996 & 2
                                    cond:273_1 = temp106_1 == 0
                                    cond:274_1 = temp106_1 != 0
                                    cond:293_1 = temp106_1 == 0
                                    cond:294_1 = temp106_1 != 0
                                    
                                    if (temp106_1 != 0)
                                        goto label_14020c14a
                                    
                                    goto label_14020c0fd
                                
                                char temp105_1 = temp0_996 & 2
                                cond:273_1 = temp105_1 == 0
                                cond:274_1 = temp105_1 != 0
                                cond:293_1 = temp105_1 == 0
                                cond:294_1 = temp105_1 != 0
                                
                                if (temp105_1 == 0)
                                label_14020c0fd:
                                    
                                    if (not(cond:273_1))
                                    label_14020c10b:
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0xc)
                                        
                                        if (cond:294_1)
                                            goto label_14020c155
                                        
                                        goto label_14020c112
                                else
                                label_14020c14a:
                                    zmm4 = _mm_blend_epi16(zmm4, zmm12, 0xc)
                                    
                                    if (cond:274_1)
                                        goto label_14020c10b
                                
                                bool cond:323_1
                                bool cond:324_1
                                bool cond:337_1
                                bool cond:338_1
                                
                                if (not(cond:293_1))
                                label_14020c155:
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 0xc)
                                    char temp126_1 = temp0_996 & 4
                                    cond:323_1 = temp126_1 == 0
                                    cond:324_1 = temp126_1 != 0
                                    cond:337_1 = temp126_1 == 0
                                    cond:338_1 = temp126_1 != 0
                                    
                                    if (temp126_1 != 0)
                                        goto label_14020c117
                                    
                                    goto label_14020c161
                                
                            label_14020c112:
                                char temp125_1 = temp0_996 & 4
                                cond:323_1 = temp125_1 == 0
                                cond:324_1 = temp125_1 != 0
                                cond:337_1 = temp125_1 == 0
                                cond:338_1 = temp125_1 != 0
                                
                                if (temp125_1 == 0)
                                label_14020c161:
                                    
                                    if (not(cond:323_1))
                                    label_14020c16f:
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0x30)
                                        
                                        if (cond:338_1)
                                            goto label_14020c122
                                        
                                        goto label_14020c176
                                else
                                label_14020c117:
                                    zmm4 = _mm_blend_epi16(zmm4, zmm12, 0x30)
                                    
                                    if (cond:324_1)
                                        goto label_14020c16f
                                
                                bool cond:355_1
                                bool cond:356_1
                                bool cond:365_1
                                bool cond:366_1
                                
                                if (not(cond:337_1))
                                label_14020c122:
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 0x30)
                                    char temp138_1 = temp0_996 & 8
                                    cond:355_1 = temp138_1 == 0
                                    cond:356_1 = temp138_1 != 0
                                    cond:365_1 = temp138_1 == 0
                                    cond:366_1 = temp138_1 != 0
                                    
                                    if (temp138_1 != 0)
                                        goto label_14020c17b
                                    
                                    goto label_14020c12e
                                
                            label_14020c176:
                                char temp137_1 = temp0_996 & 8
                                cond:355_1 = temp137_1 == 0
                                cond:356_1 = temp137_1 != 0
                                cond:365_1 = temp137_1 == 0
                                cond:366_1 = temp137_1 != 0
                                
                                if (temp137_1 != 0)
                                label_14020c17b:
                                    zmm4 = _mm_blend_epi16(zmm4, zmm12, 0xc0)
                                    
                                    if (cond:356_1)
                                        goto label_14020c13c
                                    
                                    goto label_14020c184
                                
                            label_14020c12e:
                                
                                if (cond:355_1)
                                label_14020c184:
                                    
                                    if (not(cond:365_1))
                                        arg8 = _mm_blend_epi16(arg8, zmm12, 0xc0)
                                else
                                label_14020c13c:
                                    var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0xc0)
                                    
                                    if (cond:366_1)
                                        arg8 = _mm_blend_epi16(arg8, zmm12, 0xc0)
                                
                                var_508 = arg8
                                arg8 = var_548_2
                
                var_598 = zmm4
                zmm4 = _mm_sub_ps(zmm4, arg11)
                zmm3 = _mm_sub_ps(var_5a8, arg9)
                zmm4 = _mm_mul_ps(zmm4, arg8)
                zmm1 = arg11
                char temp26_1 = temp0_645 & 1
                
                if (temp26_1 != 0)
                    zmm1.d = arg11.d f+ zmm4[0]
                
                zmm0 = _mm_sub_ps(var_508, arg10)
                zmm3 = _mm_mul_ps(zmm3, arg8)
                zmm2 = arg9
                
                if (temp26_1 != 0)
                    zmm2 = arg9
                    zmm2[0] = zmm2[0] f+ zmm3[0]
                    arg8 = _mm_mul_ps(arg8, zmm0)
                    zmm0 = arg10
                    
                    if (temp26_1 != 0)
                        goto label_14020c24e
                    
                    goto label_14020c1f3
                
                arg8 = _mm_mul_ps(arg8, zmm0)
                zmm0 = arg10
                bool cond:123_1
                bool cond:124_1
                bool cond:142_1
                bool cond:143_1
                
                if (temp26_1 != 0)
                label_14020c24e:
                    zmm0.d = arg10.d f+ arg8[0]
                    arg11 = _mm_add_ps(arg11, zmm4)
                    char temp43_1 = temp0_645 & 2
                    cond:123_1 = temp43_1 == 0
                    cond:124_1 = temp43_1 != 0
                    cond:142_1 = temp43_1 == 0
                    cond:143_1 = temp43_1 != 0
                    
                    if (temp43_1 != 0)
                        goto label_14020c1fc
                    
                    goto label_14020c25c
                
            label_14020c1f3:
                arg11 = _mm_add_ps(arg11, zmm4)
                char temp42_1 = temp0_645 & 2
                cond:123_1 = temp42_1 == 0
                cond:124_1 = temp42_1 != 0
                cond:142_1 = temp42_1 == 0
                cond:143_1 = temp42_1 != 0
                
                if (temp42_1 != 0)
                label_14020c1fc:
                    zmm1 = _mm_blend_ps(zmm1, arg11, 2)
                    arg9 = _mm_add_ps(arg9, zmm3)
                    
                    if (cond:124_1)
                        goto label_14020c262
                    
                    goto label_14020c209
                
            label_14020c25c:
                arg9 = _mm_add_ps(arg9, zmm3)
                
                if (not(cond:123_1))
                label_14020c262:
                    zmm2 = _mm_blend_ps(zmm2, arg9, 2)
                    arg10 = _mm_add_ps(arg10, arg8)
                    
                    if (cond:143_1)
                        goto label_14020c20f
                    
                    goto label_14020c26f
                
            label_14020c209:
                arg10 = _mm_add_ps(arg10, arg8)
                bool cond:176_1
                bool cond:177_1
                bool cond:200_1
                bool cond:201_1
                
                if (not(cond:142_1))
                label_14020c20f:
                    zmm0 = _mm_blend_ps(zmm0, arg10, 2)
                    char temp65_1 = temp0_645 & 4
                    cond:176_1 = temp65_1 == 0
                    cond:177_1 = temp65_1 != 0
                    cond:200_1 = temp65_1 == 0
                    cond:201_1 = temp65_1 != 0
                    
                    if (temp65_1 != 0)
                        goto label_14020c274
                    
                    goto label_14020c21b
                
            label_14020c26f:
                char temp64_1 = temp0_645 & 4
                cond:176_1 = temp64_1 == 0
                cond:177_1 = temp64_1 != 0
                cond:200_1 = temp64_1 == 0
                cond:201_1 = temp64_1 != 0
                
                if (temp64_1 == 0)
                label_14020c21b:
                    
                    if (not(cond:176_1))
                    label_14020c21d:
                        zmm2 = _mm_blend_ps(zmm2, arg9, 4)
                        
                        if (cond:201_1)
                            goto label_14020c27f
                        
                        goto label_14020c226
                else
                label_14020c274:
                    zmm1 = _mm_blend_ps(zmm1, arg11, 4)
                    
                    if (cond:177_1)
                        goto label_14020c21d
                
                bool cond:245_1
                bool cond:246_1
                bool cond:271_1
                bool cond:272_1
                
                if (not(cond:200_1))
                label_14020c27f:
                    zmm0 = _mm_blend_ps(zmm0, arg10, 4)
                    char temp88_1 = temp0_645 & 8
                    cond:245_1 = temp88_1 == 0
                    cond:246_1 = temp88_1 != 0
                    cond:271_1 = temp88_1 != 0
                    cond:272_1 = temp88_1 == 0
                    
                    if (temp88_1 != 0)
                        goto label_14020c22b
                    
                    goto label_14020c28b
                
            label_14020c226:
                char temp87_1 = temp0_645 & 8
                cond:245_1 = temp87_1 == 0
                cond:246_1 = temp87_1 != 0
                cond:271_1 = temp87_1 != 0
                cond:272_1 = temp87_1 == 0
                
                if (temp87_1 != 0)
                label_14020c22b:
                    arg11 = _mm_blend_ps(arg11, zmm1, 7)
                    
                    if (cond:246_1)
                        goto label_14020c291
                    
                    goto label_14020c234
                
            label_14020c28b:
                arg11 = zmm1
                
                if (cond:245_1)
                label_14020c234:
                    arg9 = zmm2
                    
                    if (cond:271_1)
                        zmm0 = _mm_blend_ps(zmm0, arg10, 8)
                else
                label_14020c291:
                    arg9 = _mm_blend_ps(arg9, zmm2, 7)
                    
                    if (not(cond:272_1))
                        zmm0 = _mm_blend_ps(zmm0, arg10, 8)
                
                arg10 = zmm0
                goto label_14020c2aa
            
            var_5a8 = zmm4
            zmm15 = data_142d3f5b0
            arg7 = _mm_cmpeq_epi32(arg7, arg7)
            rcx_47 = _mm_movemask_ps(zmm9 ^ arg7)
            
            if (rcx_47 != 0)
                goto label_14020a8c1
        float temp0_1033[0x4] = _mm_unpacklo_ps(arg10, zmm12[0].q)
        zmm0 = _mm_unpackhi_ps(arg10, zmm12)
        zmm3 = _mm_unpacklo_ps(arg11, arg9[0].q)
        zmm1 = _mm_unpackhi_ps(arg11, arg9)
        zmm4 = _mm_insert_ps(zmm3, arg10, 0x28)
        arg5 = var_458_1
        int64_t rcx_75 = sx.q(arg5[0]) * 0x30
        *(arg1 + rcx_75 + 0x10) = __extractps_memd_xmmps_immb(arg11, 0)
        int32_t var_128_1[0x4] = zmm4
        *(arg1 + rcx_75 + 0x14) = __extractps_memd_xmmps_immb(arg9, 0)
        *(arg1 + rcx_75 + 0x18) = __extractps_memd_xmmps_immb(arg10, 0)
        *(arg1 + rcx_75 + 0x1c) = 0
        int64_t rcx_79 = sx.q(_mm_extract_epi32(arg5, 2)) * 0x30
        *(arg1 + rcx_79 + 0x10) = __extractps_memd_xmmps_immb(arg11, 1)
        zmm3 = _mm_unpackhi_pd(zmm3, temp0_1033[0].q)
        *(arg1 + rcx_79 + 0x14) = __extractps_memd_xmmps_immb(arg9, 1)
        int32_t var_118_1[0x4] = zmm3
        *(arg1 + rcx_79 + 0x18) = __extractps_memd_xmmps_immb(arg10, 1)
        *(arg1 + rcx_79 + 0x1c) = 0
        zmm3 = var_488_1
        int64_t rcx_83 = sx.q(zmm3[0]) * 0x30
        *(arg1 + rcx_83 + 0x10) = __extractps_memd_xmmps_immb(arg11, 2)
        float temp0_1047[0x4] = _mm_insert_ps(zmm1, arg10, 0xa8)
        *(arg1 + rcx_83 + 0x14) = __extractps_memd_xmmps_immb(arg9, 2)
        float var_108_1[0x4] = temp0_1047
        *(arg1 + rcx_83 + 0x18) = __extractps_memd_xmmps_immb(arg10, 2)
        zmm1 = _mm_unpackhi_pd(zmm1, zmm0.q)
        *(arg1 + rcx_83 + 0x1c) = 0
        *(arg1 + sx.q(_mm_extract_epi32(zmm3, 2)) * 0x30 + 0x10) = zmm1
        r12 = zx.q(r12.d + 4)
    while (r12.d s< i_3)
    
    result = zx.q(arg15)
    
    if (r12.d s< result.d)
        goto label_14020c41b
return result
