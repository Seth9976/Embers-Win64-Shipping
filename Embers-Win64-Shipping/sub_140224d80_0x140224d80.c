// 函数: sub_140224d80
// 地址: 0x140224d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
int32_t var_68[0x4] = arg11
float var_78[0x4] = arg10
int32_t zmm12[0x4]
int32_t var_88[0x4] = zmm12
float var_98[0x4] = arg9
uint128_t zmm10
uint128_t var_a8 = zmm10
uint128_t zmm9
uint128_t var_b8 = zmm9
int32_t var_c8[0x4] = arg8
int32_t var_d8[0x4] = arg7
int32_t var_e8[0x4] = arg6
uint128_t zmm2 = arg13
int32_t i_5 = ((arg15 s>> 0x1f u>> 0x1e) + arg15) & 0xfffffffc
uint64_t result
uint64_t r12
uint128_t zmm0
uint128_t zmm1
float zmm3[0x4]
uint128_t zmm4

if (i_5 s<= 0)
    r12 = 0
    result = zx.q(arg15)
    
    if (0 s< result.d)
    label_14022990b:
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
        uint64_t rbp_32 = zx.q(_mm_extract_epi32(zmm0, 2))
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
            label_140229da7:
                char temp1_1 = rcx_96 & 1
                
                if (temp1_1 != 0)
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                    
                    if (temp1_1 != 0)
                        goto label_140229df9
                else if (temp1_1 != 0)
                label_140229df9:
                    arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                    
                    if (temp1_1 != 0)
                        goto label_140229db7
                    
                    goto label_140229e01
                
                bool cond:15_1
                bool cond:16_1
                bool cond:20_1
                bool cond:21_1
                
                if (temp1_1 != 0)
                label_140229db7:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                    char temp4_1 = rcx_96 & 2
                    cond:15_1 = temp4_1 == 0
                    cond:16_1 = temp4_1 != 0
                    cond:20_1 = temp4_1 == 0
                    cond:21_1 = temp4_1 != 0
                    
                    if (temp4_1 != 0)
                        goto label_140229e06
                    
                    goto label_140229dc2
                
            label_140229e01:
                char temp3_1 = rcx_96 & 2
                cond:15_1 = temp3_1 == 0
                cond:16_1 = temp3_1 != 0
                cond:20_1 = temp3_1 == 0
                cond:21_1 = temp3_1 != 0
                
                if (temp3_1 == 0)
                label_140229dc2:
                    
                    if (not(cond:15_1))
                    label_140229dc4:
                        arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                        
                        if (cond:21_1)
                            goto label_140229e11
                        
                        goto label_140229dcc
                else
                label_140229e06:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                    
                    if (cond:16_1)
                        goto label_140229dc4
                
                bool cond:25_1
                bool cond:26_1
                bool cond:36_1
                bool cond:37_1
                
                if (not(cond:20_1))
                label_140229e11:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                    char temp8_1 = rcx_96 & 4
                    cond:25_1 = temp8_1 == 0
                    cond:26_1 = temp8_1 != 0
                    cond:36_1 = temp8_1 == 0
                    cond:37_1 = temp8_1 != 0
                    
                    if (temp8_1 != 0)
                        goto label_140229dd1
                    
                    goto label_140229e1c
                
            label_140229dcc:
                char temp7_1 = rcx_96 & 4
                cond:25_1 = temp7_1 == 0
                cond:26_1 = temp7_1 != 0
                cond:36_1 = temp7_1 == 0
                cond:37_1 = temp7_1 != 0
                
                if (temp7_1 == 0)
                label_140229e1c:
                    
                    if (not(cond:25_1))
                    label_140229e1e:
                        arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                        
                        if (cond:37_1)
                            goto label_140229ddc
                        
                        goto label_140229e26
                else
                label_140229dd1:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                    
                    if (cond:26_1)
                        goto label_140229e1e
                
                bool cond:52_1
                bool cond:53_1
                bool cond:61_1
                bool cond:62_1
                
                if (not(cond:36_1))
                label_140229ddc:
                    arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                    char temp16_1 = rcx_96 & 8
                    cond:52_1 = temp16_1 == 0
                    cond:53_1 = temp16_1 != 0
                    cond:61_1 = temp16_1 == 0
                    cond:62_1 = temp16_1 == 0
                    
                    if (temp16_1 != 0)
                        goto label_140229e2b
                    
                    goto label_140229de7
                
            label_140229e26:
                char temp15_1 = rcx_96 & 8
                cond:52_1 = temp15_1 == 0
                cond:53_1 = temp15_1 != 0
                cond:61_1 = temp15_1 == 0
                cond:62_1 = temp15_1 == 0
                
                if (temp15_1 != 0)
                label_140229e2b:
                    arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                    
                    if (cond:53_1)
                        goto label_140229de9
                    
                    goto label_140229e34
                
            label_140229de7:
                
                if (cond:52_1)
                label_140229e34:
                    
                    if (not(cond:61_1))
                        arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                else
                label_140229de9:
                    arg5 = _mm_blend_ps(arg5, zx.o(0), 8)
                    
                    if (not(cond:62_1))
                        arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
        else
            float var_408_3[0x4] = arg10
            float var_448_2[0x4] = arg9
            float temp0_1079[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm2 = _mm_add_epi64(4, zx.o(arg4))
            int32_t temp0_1082[0x4] = _mm_srai_epi32(_mm_slli_epi32(zmm9, 0x1f), 0x1f)
            zmm3 = temp0_1082 & zmm0
            int64_t rax_228 = sx.q(zmm3[0])
            int64_t rcx_93 = sx.q(_mm_extract_epi32(zmm3, 1))
            int64_t rdx_3 = sx.q(_mm_extract_epi32(zmm3, 2))
            int64_t rbp_35 = sx.q(_mm_extract_epi32(zmm3, 3))
            int32_t temp0_1088[0x4] = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_228)), *(arg4 + rcx_93), 1), 
                    *(arg4 + rdx_3), 2), 
                *(arg4 + rbp_35), 3)
            arg6 = _mm_srli_epi32(temp0_1088, 0x1c)
            zmm3 = _mm_slli_epi32(arg6, 2) & temp0_1082
            uint64_t rax_229 = zx.q(zmm3[0])
            uint64_t rcx_94 = zx.q(_mm_extract_epi32(zmm3, 1))
            uint64_t rdx_4 = zx.q(_mm_extract_epi32(zmm3, 2))
            uint64_t rbp_36 = zx.q(_mm_extract_epi32(zmm3, 3))
            zmm3 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(rax_229 + &data_143442c70)), 
                        *(rcx_94 + &data_143442c70), 1), 
                    *(rdx_4 + &data_143442c70), 2), 
                *(rbp_36 + &data_143442c70), 3)
            arg5 = _mm_srli_epi32(temp0_1088, 0x18)
            float var_4a8_4[0x4] = arg5
            arg5 = (_mm_slli_epi32(arg6, 3) | (data_143442c00 & arg5)) & temp0_1082
            uint64_t rax_230 = zx.q(arg5[0])
            uint64_t rdx_5 = zx.q(_mm_extract_epi32(arg5, 1))
            uint64_t rbp_37 = zx.q(_mm_extract_epi32(arg5, 2))
            uint64_t rbx_27 = zx.q(_mm_extract_epi32(arg5, 3))
            zmm4 = _mm_cvtepu8_epi32(__pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(
                    __pinsrb_xmmdq_memb_immb(zx.o(*(rax_230 + &data_143442c90)), 
                        *(rdx_5 + &data_143442c90), 1), 
                    *(rbp_37 + &data_143442c90), 2), 
                *(rbx_27 + &data_143442c90), 3).d)
            int32_t var_478_4[0x4] = arg6
            arg9 = _mm_cmpeq_epi32(data_142fc95c0, arg6)
            arg5 = _mm_srai_epi32(_mm_slli_epi32(arg9 & not.o(zmm9), 0x1f), 0x1f)
            zmm12 = zx.o(0)
            
            if (_mm_movemask_ps(arg5) != 0)
                zmm12 = arg5 & zmm4
            
            arg8 = _mm_cvtepi32_epi64(zmm0.q)
            zmm15 = _mm_cvtepi32_epi64(temp0_1079[0].q)
            float temp0_1112[0x4] = _mm_shuffle_epi32(zmm2, 0x44)
            arg6 = data_143442be0 & temp0_1088
            zmm1 = data_142fc95e0 & temp0_1082
            zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm9 & arg9, 0x1f), 0x1f)
            char temp0_1115 = _mm_movemask_ps(zmm0)
            zmm2 = data_142d3f5b0
            uint128_t var_498_3 = zmm0
            arg5 = _mm_blendv_ps(zmm12, zmm2, zmm0)
            zmm0 = zx.o(0)
            
            if (temp0_1115 != 0)
                zmm4 &= var_498_3
                zmm0 = zmm4
                zmm12 = arg5
            
            uint128_t var_468_1 = _mm_madd_epi16(zmm0, zmm1)
            zmm12 = _mm_mullo_epi32(zmm12, zmm3 & temp0_1082)
            uint128_t var_5a8_1 = _mm_add_epi64(temp0_1112, zmm15)
            arg10 = _mm_add_epi64(temp0_1112, arg8)
            int32_t var_4c8_1[0x4] = zmm9
            zmm0 = _mm_cmpgt_epi32(arg6, zmm2) & zmm9
            float var_588_4[0x4] = arg9
            float var_538_2[0x4] = arg10
            int32_t var_578_2[0x4] = zmm12
            arg7 = arg9
            int32_t var_438_2[0x4] = zmm15
            int32_t var_418_2[0x4] = arg8
            float var_488_2[0x4]
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm0, 0x1f)) == 0)
                zmm1 = zx.o(0)
                var_488_2 = zx.o(0)
                arg11 = var_4c8_1
                zmm9 = zx.o(0)
            else
                arg9 = zx.o(0)
                arg10 = _mm_cmpeq_epi32(data_143442c30 & temp0_1088, zx.o(0))
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
                    
                    if (0f >= zmm3[0])
                        arg9 = zx.o(0)
                        zmm4 = zx.o(0)
                        arg5 = zx.o(0)
                        var_488_2 = zx.o(0)
                    else
                        zmm3 = zmm2
                        zmm2 = _mm_add_epi32(_mm_cmpeq_epi32(zmm2, zmm2), arg6)
                        
                        if (zmm3[0] >= 1f)
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
                
                arg10 = _mm_slli_epi32(arg10 & not.o(zmm0), 0x1f)
                zmm1 = _mm_srai_epi32(arg10, 0x1f)
                
                if (_mm_movemask_ps(zmm1) == 0)
                    arg10 = var_538_2
                    zmm1 = zmm4
                    arg11 = var_4c8_1
                else
                    arg11 = arg6
                    zmm0 = _mm_cmpeq_epi32(_mm_min_epu32(data_142d3f5b0, arg6), arg6)
                    int32_t rax_236
                    rax_236.b = zx.o(0).d f>= zmm2[0]
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
                        
                        if (zmm3[0] >= 1f)
                            zmm0 = zmm12
                            arg9 = _mm_blendv_ps(arg9, zmm4, zmm0)
                            arg5 = _mm_blendv_ps(arg5, zmm4, zmm0)
                            arg7 = var_588_4
                            arg11 = var_4c8_1
                        else
                            uint128_t var_548_3 = zmm9
                            zmm0 = _mm_shuffle_epi32(var_468_1, 0x4e)
                            arg7 = _mm_cvtepu32_epi64(var_468_1.q)
                            uint128_t var_568_2 = zmm4
                            zmm4 = _mm_cvtepu32_epi64(zmm0.q)
                            zmm0 = _mm_mullo_epi32(var_578_2, arg11)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm4 = __paddq_xmmdq_memdq(zmm4, var_5a8_1)
                            int32_t temp0_1173[0x4] = __paddq_xmmdq_memdq(arg7, var_538_2)
                            zmm2 = data_143442a20
                            zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            zmm4 = _mm_add_epi64(_mm_add_epi64(zmm4, zmm2), zmm1)
                            int32_t temp0_1179[0x4] =
                                _mm_add_epi64(_mm_add_epi64(temp0_1173, zmm2), zmm0)
                            zmm0 = data_143442c10
                            arg7 = temp0_1179 & zmm0
                            uint128_t var_528_4 = zmm4 & zmm0
                            zmm4 = var_568_2
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                            zmm1 = _mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm0)
                            zmm0.d = float.s(arg12 - 1)
                            zmm0.d = zmm0.d f* zmm3[0]
                            uint128_t var_488_3 = zmm0
                            zmm3 = zx.o(0)
                            zmm0 = _mm_min_epi32(zx.o(arg12 - 2), 
                                _mm_max_epi32(zx.o(int.d(zmm0.d)), zx.o(0)))
                            zmm9 =
                                _mm_min_epi32(_mm_max_epi32(_mm_cvttps_epi32(zmm1), zx.o(0)), zmm4)
                            int32_t var_598_1[0x4] = arg7
                            int32_t var_518_3[0x4] = arg6
                            float var_4f8_5[0x4] = arg5
                            
                            if (arg12 s< 0x100)
                                zmm1 = _mm_shuffle_epi32(zmm9, 0x4e)
                                zmm2 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm9.q), arg7)
                                char rdx_8 = temp0_1164.b
                                
                                if ((rdx_8 & 1) == 0)
                                    zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                                    
                                    if ((rdx_8 & 2) != 0)
                                        goto label_14022a7f3
                                    
                                    goto label_14022a463
                                
                                arg7 = zx.o(*zmm2.q)
                                zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                                
                                if ((rdx_8 & 2) != 0)
                                label_14022a7f3:
                                    arg7 =
                                        _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_528_4)
                                    
                                    if ((rdx_8 & 4) == 0)
                                        goto label_14022a475
                                    
                                    goto label_14022a813
                                
                            label_14022a463:
                                zmm1 = __paddq_xmmdq_memdq(zmm1, var_528_4)
                                
                                if ((rdx_8 & 4) != 0)
                                label_14022a813:
                                    arg7 = _mm_insert_epi32(arg7, zx.d(*zmm1.q), 2)
                                    
                                    if ((rdx_8 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                else
                                label_14022a475:
                                    
                                    if ((rdx_8 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                
                                arg6 = arg11
                                arg7 &= data_142ed6810
                                arg8 = _mm_shuffle_epi32(zmm0, 0)
                                int32_t temp0_1260[0x4] = _mm_cmpgt_epi32(arg7, arg8)
                                uint128_t var_458_3 = temp0_1260 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                                zmm2 = zmm9
                                zmm15 = var_528_4
                                
                                if (_mm_movemask_ps(temp0_1260 & not.o(zmm12)) != 0)
                                    zmm2 = __blendvps_xmmdq_memdq(zmm9, var_568_2, var_458_3)
                                    zmm0 = __psubd_xmmdq_memdq(zmm9, data_142d3f800)
                                    arg7 = temp0_1260 & not.o(_mm_cmpgt_epi32(arg6, zmm0))
                                    arg5 = zmm12 & arg7
                                    uint32_t i = _mm_movemask_ps(arg5)
                                    
                                    if (i != 0)
                                        zmm4 = zmm9
                                        
                                        do
                                            zmm1 = zmm0
                                            zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                            int32_t temp0_1274[0x4] = __paddq_xmmdq_memdq(
                                                _mm_cvtepi32_epi64(zmm1.q), var_598_1)
                                            char temp0_1275 = _mm_movemask_ps(arg5)
                                            
                                            if ((temp0_1275 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_1275 & 2) != 0)
                                                    goto label_14022a544
                                                
                                                goto label_14022a596
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*temp0_1274[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                            
                                            if ((temp0_1275 & 2) != 0)
                                            label_14022a544:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(temp0_1274, 1)), 1)
                                                arg6 = arg11
                                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                                
                                                if ((temp0_1275 & 4) == 0)
                                                    goto label_14022a5a5
                                                
                                                goto label_14022a561
                                            
                                        label_14022a596:
                                            arg6 = arg11
                                            zmm0 = _mm_add_epi64(zmm0, zmm15)
                                            
                                            if ((temp0_1275 & 4) != 0)
                                            label_14022a561:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1275 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_14022a5a5:
                                                
                                                if ((temp0_1275 & 8) != 0)
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
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(var_458_3, zmm12)) == 0)
                                    zmm9 = var_548_3
                                    arg5 = var_4f8_5
                                    arg7 = var_598_1
                                else
                                    zmm0 = var_458_3 ^ data_142d3f800
                                    zmm2 = _mm_blendv_ps(zmm2, zx.o(0), zmm0)
                                    int32_t temp0_1288[0x4] = _mm_cmpeq_epi32(arg11, arg11)
                                    zmm9 = _mm_add_epi32(zmm9, temp0_1288)
                                    arg5 = _mm_cmpgt_epi32(zmm9, zx.o(0)) & zmm0
                                    zmm0 = arg5 & zmm12
                                    uint32_t i_1 = _mm_movemask_ps(zmm0)
                                    
                                    if (i_1 == 0)
                                        arg7 = var_598_1
                                    else
                                        arg7 = var_598_1
                                        
                                        do
                                            uint128_t temp0_1297 = _mm_shuffle_epi32(zmm9, 0x4e)
                                            zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm9.q), arg7)
                                            char temp0_1300 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_1300 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(temp0_1297.q)
                                                
                                                if ((temp0_1300 & 2) != 0)
                                                    goto label_14022a69e
                                                
                                                goto label_14022a6f2
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(temp0_1297.q)
                                            
                                            if ((temp0_1300 & 2) != 0)
                                            label_14022a69e:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                                
                                                if ((temp0_1300 & 4) == 0)
                                                    goto label_14022a6fc
                                                
                                                goto label_14022a6b6
                                            
                                        label_14022a6f2:
                                            zmm0 = _mm_add_epi64(zmm0, zmm15)
                                            
                                            if ((temp0_1300 & 4) != 0)
                                            label_14022a6b6:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1300 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_14022a6fc:
                                                
                                                if ((temp0_1300 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm0 = _mm_cmpgt_epi32(zmm3 & data_142ed6810, arg8)
                                                & not.o(arg5)
                                            zmm2 = _mm_blendv_ps(zmm2, zmm9, zmm0)
                                            zmm4 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != i_1)
                                                zmm4 = zmm0 ^ arg5
                                            
                                            zmm9 = _mm_add_epi32(zmm9, temp0_1288)
                                            arg5 = _mm_cmpgt_epi32(zmm9, zx.o(0)) & zmm4
                                            zmm0 = arg5 & zmm12
                                            i_1 = _mm_movemask_ps(zmm0)
                                        while (i_1 != 0)
                                    
                                    zmm9 = var_548_3
                                    arg5 = var_4f8_5
                                
                                arg9 = _mm_blendv_ps(arg9, zmm2, zmm12)
                                zmm0 = _mm_shuffle_epi32(arg9, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), arg7)
                                
                                if ((rdx_8 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    zmm2 = var_568_2
                                    
                                    if ((rdx_8 & 2) != 0)
                                        goto label_14022de56
                                    
                                    goto label_14022aaa1
                                
                                arg8 = zx.o(*zmm1.q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                zmm2 = var_568_2
                                
                                if ((rdx_8 & 2) != 0)
                                label_14022de56:
                                    arg8 =
                                        _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                                    
                                    if ((rdx_8 & 4) == 0)
                                        goto label_14022aaaf
                                    
                                    goto label_14022de73
                                
                            label_14022aaa1:
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((rdx_8 & 4) != 0)
                                label_14022de73:
                                    arg8 = _mm_insert_epi32(arg8, zx.d(*zmm0.q), 2)
                                    
                                    if ((rdx_8 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_14022aaaf:
                                    
                                    if ((rdx_8 & 8) != 0)
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
                                
                                if ((rdx_8 & 1) == 0)
                                    zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                                    
                                    if ((rdx_8 & 2) != 0)
                                        goto label_14022deb8
                                    
                                    goto label_14022ab34
                                
                                zmm0 = zx.o(*zmm2.q)
                                zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                                
                                if ((rdx_8 & 2) != 0)
                                label_14022deb8:
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm15 = _mm_add_epi64(zmm15, zmm1)
                                    
                                    if ((rdx_8 & 4) == 0)
                                        goto label_14022ab42
                                    
                                    goto label_14022ded4
                                
                            label_14022ab34:
                                zmm15 = _mm_add_epi64(zmm15, zmm1)
                                
                                if ((rdx_8 & 4) != 0)
                                label_14022ded4:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm15[0].q), 2)
                                    
                                    if ((rdx_8 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                                else
                                label_14022ab42:
                                    
                                    if ((rdx_8 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                                
                                arg8 &= data_142ed6810
                                zmm0 &= data_142ed6810
                            else
                                zmm1 = _mm_add_epi32(zmm9, zmm9)
                                zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm3 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), arg7)
                                char rdx_7 = temp0_1164.b
                                
                                if ((rdx_7 & 1) == 0)
                                    zmm2 = _mm_cvtepi32_epi64(zmm2.q)
                                    
                                    if ((rdx_7 & 2) != 0)
                                        goto label_14022a79b
                                    
                                    goto label_14022a0e1
                                
                                zmm1 = zx.o(*zmm3[0].q)
                                zmm2 = _mm_cvtepi32_epi64(zmm2.q)
                                
                                if ((rdx_7 & 2) != 0)
                                label_14022a79b:
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_528_4)
                                    
                                    if ((rdx_7 & 4) == 0)
                                        goto label_14022a0f3
                                    
                                    goto label_14022a7bb
                                
                            label_14022a0e1:
                                zmm2 = __paddq_xmmdq_memdq(zmm2, var_528_4)
                                
                                if ((rdx_7 & 4) != 0)
                                label_14022a7bb:
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2.q), 2)
                                    
                                    if ((rdx_7 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                else
                                label_14022a0f3:
                                    
                                    if ((rdx_7 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                                
                                arg6 = arg11
                                zmm3 = _mm_blend_epi16(zx.o(0), zmm1, 0x55)
                                arg8 = _mm_shuffle_epi32(zmm0, 0)
                                zmm3 = _mm_cmpgt_epi32(zmm3, arg8)
                                uint128_t var_458_2 = zmm3 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                                zmm2 = zmm9
                                
                                if (_mm_movemask_ps(zmm3 & not.o(zmm12)) != 0)
                                    zmm2 = __blendvps_xmmdq_memdq(zmm9, var_568_2, var_458_2)
                                    zmm0 = __psubd_xmmdq_memdq(zmm9, data_142d3f800)
                                    zmm3 &= not.o(_mm_cmpgt_epi32(arg6, zmm0))
                                    zmm4 = zmm12 & zmm3
                                    uint32_t i_2 = _mm_movemask_ps(zmm4)
                                    
                                    if (i_2 != 0)
                                        zmm1 = zmm9
                                        
                                        do
                                            zmm15 = zmm0
                                            int32_t temp0_1209[0x4] = _mm_add_epi32(zmm0, zmm0)
                                            zmm0 = _mm_shuffle_epi32(temp0_1209, 0x4e)
                                            int32_t temp0_1212[0x4] = __paddq_xmmdq_memdq(
                                                _mm_cvtepi32_epi64(temp0_1209[0].q), var_598_1)
                                            char temp0_1213 = _mm_movemask_ps(zmm4)
                                            
                                            if ((temp0_1213 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                arg6 = arg11
                                                
                                                if ((temp0_1213 & 2) != 0)
                                                    goto label_14022a1bf
                                                
                                                goto label_14022a224
                                            
                                            arg5 = _mm_insert_epi32(arg5, zx.d(*temp0_1212[0].q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                            arg6 = arg11
                                            
                                            if ((temp0_1213 & 2) != 0)
                                            label_14022a1bf:
                                                arg5 = _mm_insert_epi32(arg5, 
                                                    zx.d(*_mm_extract_epi64(temp0_1212, 1)), 1)
                                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_528_4)
                                                
                                                if ((temp0_1213 & 4) == 0)
                                                    goto label_14022a232
                                                
                                                goto label_14022a1db
                                            
                                        label_14022a224:
                                            zmm0 = __paddq_xmmdq_memdq(zmm0, var_528_4)
                                            
                                            if ((temp0_1213 & 4) != 0)
                                            label_14022a1db:
                                                arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1213 & 8) != 0)
                                                    arg5 = _mm_insert_epi32(arg5, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_14022a232:
                                                
                                                if ((temp0_1213 & 8) != 0)
                                                    arg5 = _mm_insert_epi32(arg5, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm4 = zx.o(0)
                                            zmm0 = _mm_cmpgt_epi32(
                                                _mm_blend_epi16(arg5, zmm4, 0xaa), arg8) & zmm3
                                            zmm2 = _mm_blendv_ps(zmm2, zmm1, zmm0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != i_2)
                                                zmm4 = zmm0 ^ zmm3
                                            
                                            zmm0 = __psubd_xmmdq_memdq(zmm15, data_142d3f800)
                                            zmm3 = _mm_cmpgt_epi32(arg6, zmm0) & zmm4
                                            zmm4 = zmm3 & zmm12
                                            i_2 = _mm_movemask_ps(zmm4)
                                            zmm1 = zmm15
                                        while (i_2 != 0)
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(var_458_2, zmm12)) == 0)
                                    zmm9 = var_548_3
                                    arg5 = var_4f8_5
                                    zmm15 = var_528_4
                                    arg7 = var_598_1
                                else
                                    zmm0 = var_458_2 ^ data_142d3f800
                                    zmm2 = _mm_blendv_ps(zmm2, zx.o(0), zmm0)
                                    int32_t temp0_1227[0x4] = _mm_cmpeq_epi32(arg11, arg11)
                                    zmm9 = _mm_add_epi32(zmm9, temp0_1227)
                                    arg5 = _mm_cmpgt_epi32(zmm9, zx.o(0)) & zmm0
                                    zmm0 = arg5 & zmm12
                                    uint32_t i_3 = _mm_movemask_ps(zmm0)
                                    
                                    if (i_3 == 0)
                                        zmm15 = var_528_4
                                        arg7 = var_598_1
                                    else
                                        zmm15 = var_528_4
                                        arg7 = var_598_1
                                        
                                        do
                                            zmm1 = _mm_add_epi32(zmm9, zmm9)
                                            zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
                                            zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), arg7)
                                            char temp0_1240 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_1240 & 1) == 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm4.q)
                                                
                                                if ((temp0_1240 & 2) != 0)
                                                    goto label_14022a335
                                                
                                                goto label_14022a38a
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm4.q)
                                            
                                            if ((temp0_1240 & 2) != 0)
                                            label_14022a335:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                                
                                                if ((temp0_1240 & 4) == 0)
                                                    goto label_14022a394
                                                
                                                goto label_14022a34d
                                            
                                        label_14022a38a:
                                            zmm0 = _mm_add_epi64(zmm0, zmm15)
                                            
                                            if ((temp0_1240 & 4) != 0)
                                            label_14022a34d:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_1240 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_14022a394:
                                                
                                                if ((temp0_1240 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm0 = _mm_cmpgt_epi32(
                                                _mm_blend_epi16(zmm3, zx.o(0), 0xaa), arg8)
                                                & not.o(arg5)
                                            zmm2 = _mm_blendv_ps(zmm2, zmm9, zmm0)
                                            zmm4 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != i_3)
                                                zmm4 = zmm0 ^ arg5
                                            
                                            zmm9 = _mm_add_epi32(zmm9, temp0_1227)
                                            arg5 = _mm_cmpgt_epi32(zmm9, zx.o(0)) & zmm4
                                            zmm0 = arg5 & zmm12
                                            i_3 = _mm_movemask_ps(zmm0)
                                        while (i_3 != 0)
                                    
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
                                        goto label_14022a9c0
                                    
                                    goto label_14022a8be
                                
                                arg8 = zx.o(*zmm1.q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                zmm2 = var_568_2
                                
                                if ((rdx_7 & 2) != 0)
                                label_14022a9c0:
                                    arg8 =
                                        _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                                    
                                    if ((rdx_7 & 4) == 0)
                                        goto label_14022a8cc
                                    
                                    goto label_14022a9dd
                                
                            label_14022a8be:
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((rdx_7 & 4) != 0)
                                label_14022a9dd:
                                    arg8 = _mm_insert_epi32(arg8, zx.d(*zmm0.q), 2)
                                    
                                    if ((rdx_7 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_14022a8cc:
                                    
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
                                        goto label_14022aa22
                                    
                                    goto label_14022a959
                                
                                zmm1 = zx.o(*zmm2.q)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rdx_7 & 2) != 0)
                                label_14022aa22:
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm15 = _mm_add_epi64(zmm15, zmm0)
                                    
                                    if ((rdx_7 & 4) == 0)
                                        goto label_14022a967
                                    
                                    goto label_14022aa3e
                                
                            label_14022a959:
                                zmm15 = _mm_add_epi64(zmm15, zmm0)
                                
                                if ((rdx_7 & 4) != 0)
                                label_14022aa3e:
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm15[0].q), 2)
                                    zmm0 = zx.o(0)
                                    
                                    if ((rdx_7 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                                else
                                label_14022a967:
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
                                zmm3 = var_488_3
                                zmm2 = _mm_div_ps(
                                    _mm_sub_ps(_mm_shuffle_ps(zmm3, zmm3, 0), 
                                        _mm_cvtepi32_ps(arg8)), 
                                    _mm_cvtepi32_ps(zmm0))
                            
                            zmm1 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                            zmm15 = var_438_2
                            arg8 = var_418_2
                    
                    zmm9 = _mm_blendv_ps(zmm9, zmm1, arg10)
                    zmm1 = arg9
                    var_488_2 = arg5
                    arg10 = var_538_2
                
                zmm12 = var_578_2
            
            zmm2 = _mm_cvtepu32_epi64(var_468_1.q)
            zmm3 = _mm_cvtepu32_epi64(_mm_shuffle_epi32(var_468_1, 0x4e).q)
            uint128_t var_528_5 = zmm1
            zmm0 = _mm_mullo_epi32(zmm1, zmm12)
            zmm1 = _mm_cvtepi32_epi64(zmm0.q)
            zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
            uint128_t var_4b8_1 = zmm0
            int32_t var_468_2[0x4] = zmm3
            zmm0 = _mm_add_epi64(zmm0, zmm3)
            uint128_t var_4d8_2 = zmm1
            uint128_t var_598_4 = zmm2
            float var_428_3[0x4] = _mm_add_epi64(_mm_add_epi64(zmm1, zmm2), arg10)
            uint128_t var_508_2 = __paddq_xmmdq_memdq(zmm0, var_5a8_1)
            arg9 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, var_478_4)
            zmm3 = arg9 & arg11
            zmm0 = _mm_slli_epi32(zmm3, 0x1f)
            uint128_t var_548_4 = zmm9
            float var_568_3[0x4] = arg9
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm0 = temp0_1088
                arg5 = zx.o(0)
                int32_t temp0_1391[0x4] = _mm_cmpeq_epi32(data_143442c60 & zmm0, arg5)
                zmm4 = _mm_slli_epi32(zmm3 & temp0_1391, 0x1f)
                char temp0_1393 = _mm_movemask_ps(zmm4)
                
                if (temp0_1393 != 0)
                    zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                    zmm15 = __paddq_xmmdq_memdq(zmm15, var_468_2)
                    int32_t temp0_1396[0x4] = __paddq_xmmdq_memdq(arg8, var_598_4)
                    arg8 = data_1434426c0
                    int32_t temp0_1397[0x4] = __paddq_xmmdq_memdq(temp0_1396, var_4d8_2)
                    zmm15 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm15, var_4b8_1), arg8)
                    int32_t temp0_1400[0x4] = _mm_add_epi64(temp0_1397, arg8)
                    zmm1 = _mm_shuffle_epi32(zmm4, 0x50)
                    zmm2 = _mm_blendv_ps(zx.o(0), temp0_1400, zmm1)
                    zmm4 = _mm_shuffle_epi32(zmm4, 0xfa)
                    arg7 = _mm_blendv_ps(zx.o(0), zmm15, zmm4)
                    int64_t rax_320 = _mm_extract_epi64(zmm2, 1)
                    void* rbp_39 = arg4 + rax_320
                    zmm12 = *(arg4 + rax_320)
                    int64_t rax_321 = arg7[0].q
                    int64_t rsi_22 = _mm_extract_epi64(arg7, 1)
                    void* rdi_8 = arg4 + rax_321
                    arg7 = _mm_blendv_ps(zx.o(0), arg8, zmm1)
                    arg10 = *(arg4 + rax_321)
                    arg6 = _mm_blendv_ps(zx.o(0), arg8, zmm4)
                    int32_t var_518_5 = (*(arg4 + rsi_22)).d
                    void* rbx_34 = zmm2.q + arg4
                    zmm2 = *(arg7[0].q + rbx_34)
                    zmm9 = *(_mm_extract_epi64(arg7, 1) + rbp_39)
                    zmm15 = *(arg6[0].q + rdi_8)
                    void* rsi_23 = arg4 + rsi_22
                    int32_t var_4f8_6 = (*(_mm_extract_epi64(arg6, 1) + rsi_23)).d
                    arg6 = data_1434426e0
                    arg7 = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                    float temp0_1408[0x4] = _mm_blendv_ps(arg5, arg6, zmm4)
                    arg6 = *(arg7[0].q + rbx_34)
                    zmm4 = *(_mm_extract_epi64(arg7, 1) + rbp_39)
                    uint128_t* rax_328 = temp0_1408[0].q
                    int64_t rbp_40 = _mm_extract_epi64(temp0_1408, 1)
                    zmm1 = *(rax_328 + rdi_8)
                    zmm0 = *(rbp_40 + rsi_23)
                    bool cond:28_1
                    bool cond:29_1
                    bool cond:40_1
                    bool cond:41_1
                    
                    if ((temp0_1393 & 1) == 0)
                        char temp10_1 = temp0_1393 & 2
                        cond:28_1 = temp10_1 != 0
                        cond:29_1 = temp10_1 == 0
                        cond:40_1 = temp10_1 != 0
                        cond:41_1 = temp10_1 == 0
                        
                        if (temp10_1 == 0)
                            goto label_14022aea5
                        
                        goto label_14022ae3f
                    
                    arg8 = *rbx_34
                    char temp9_1 = temp0_1393 & 2
                    cond:28_1 = temp9_1 != 0
                    cond:29_1 = temp9_1 == 0
                    cond:40_1 = temp9_1 != 0
                    cond:41_1 = temp9_1 == 0
                    
                    if (temp9_1 == 0)
                    label_14022aea5:
                        arg7 = var_588_4
                        arg5 = zmm2
                        
                        if (cond:29_1)
                            goto label_14022ae51
                        
                        goto label_14022aeb0
                    
                label_14022ae3f:
                    arg8 = _mm_insert_ps(arg8, zmm12, 0x10)
                    arg7 = var_588_4
                    arg5 = zmm2
                    
                    if (not(cond:28_1))
                    label_14022ae51:
                        
                        if (cond:41_1)
                            goto label_14022aeb9
                        
                        goto label_14022ae53
                    
                label_14022aeb0:
                    arg5 = _mm_insert_ps(arg5, zmm9, 0x10)
                    bool cond:54_1
                    bool cond:55_1
                    bool cond:65_1
                    bool cond:66_1
                    
                    if (not(cond:40_1))
                    label_14022aeb9:
                        char temp18_1 = temp0_1393 & 4
                        cond:54_1 = temp18_1 != 0
                        cond:55_1 = temp18_1 == 0
                        cond:65_1 = temp18_1 != 0
                        cond:66_1 = temp18_1 == 0
                        zmm9 = var_548_4
                        
                        if (temp18_1 == 0)
                            goto label_14022ae64
                        
                        goto label_14022aec4
                    
                label_14022ae53:
                    arg6 = _mm_insert_ps(arg6, zmm4, 0x10)
                    char temp17_1 = temp0_1393 & 4
                    cond:54_1 = temp17_1 != 0
                    cond:55_1 = temp17_1 == 0
                    cond:65_1 = temp17_1 != 0
                    cond:66_1 = temp17_1 == 0
                    zmm9 = var_548_4
                    
                    if (temp17_1 == 0)
                    label_14022ae64:
                        arg10 = var_538_2
                        zmm12 = var_578_2
                        
                        if (cond:55_1)
                            goto label_14022aedb
                        
                        goto label_14022ae74
                    
                label_14022aec4:
                    arg8 = _mm_insert_ps(arg8, arg10, 0x20)
                    arg10 = var_538_2
                    zmm12 = var_578_2
                    
                    if (not(cond:54_1))
                    label_14022aedb:
                        
                        if (cond:66_1)
                            goto label_14022ae7d
                        
                        goto label_14022aedd
                    
                label_14022ae74:
                    arg5 = _mm_insert_ps(arg5, zmm15, 0x20)
                    bool cond:87_1
                    bool cond:88_1
                    bool cond:107_1
                    bool cond:108_1
                    
                    if (not(cond:65_1))
                    label_14022ae7d:
                        char temp32_1 = temp0_1393 & 8
                        cond:87_1 = temp32_1 != 0
                        cond:88_1 = temp32_1 == 0
                        cond:107_1 = temp32_1 == 0
                        cond:108_1 = temp32_1 != 0
                        
                        if (temp32_1 == 0)
                            goto label_14022aee8
                        
                        goto label_14022ae82
                    
                label_14022aedd:
                    arg6 = _mm_insert_ps(arg6, zmm1, 0x20)
                    char temp31_1 = temp0_1393 & 8
                    cond:87_1 = temp31_1 != 0
                    cond:88_1 = temp31_1 == 0
                    cond:107_1 = temp31_1 == 0
                    cond:108_1 = temp31_1 != 0
                    
                    if (temp31_1 == 0)
                    label_14022aee8:
                        
                        if (cond:88_1)
                            goto label_14022ae90
                        
                        goto label_14022aeea
                    
                label_14022ae82:
                    arg8 = __insertps_xmmps_memd_immb(arg8, var_518_5, 0x30)
                    
                    if (cond:87_1)
                    label_14022aeea:
                        arg5 = __insertps_xmmps_memd_immb(arg5, var_4f8_6, 0x30)
                        
                        if (not(cond:107_1))
                            arg6 = _mm_insert_ps(arg6, zmm0, 0x30)
                    else
                    label_14022ae90:
                        
                        if (cond:108_1)
                            arg6 = _mm_insert_ps(arg6, zmm0, 0x30)
                
                arg11 = temp0_1391 & not.o(zmm3)
                zmm4 = _mm_slli_epi32(arg11, 0x1f)
                char temp0_1419 = _mm_movemask_ps(zmm4)
                
                if (temp0_1419 == 0)
                    arg11 = var_4c8_1
                else
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f)
                    zmm4 = _mm_srai_epi32(zmm4, 0x1f) & zmm1
                    float var_518_6[0x4] = arg5
                    zmm3 = arg7
                    arg10 = arg6
                    
                    if (_mm_movemask_ps(zmm4) == 0)
                        arg9 = var_428_3
                        zmm9 = var_508_2
                    else
                        zmm2 = data_1434426c0
                        int32_t temp0_1424[0x4] = _mm_add_epi64(var_508_2, zmm2)
                        int32_t temp0_1425[0x4] = _mm_add_epi64(var_428_3, zmm2)
                        float temp0_1426[0x4] = _mm_unpacklo_ps(zmm4, zmm4.q)
                        arg9 = _mm_blendv_ps(var_428_3, temp0_1425, temp0_1426)
                        zmm4 = _mm_unpackhi_epi32(zmm4, zmm4.q)
                        zmm9 = _mm_blendv_ps(var_508_2, temp0_1424, zmm4)
                        int32_t temp0_1430[0x4] = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                        int32_t temp0_1432[0x4] = __paddq_xmmdq_memdq(
                            __paddq_xmmdq_memdq(var_418_2, var_598_4), var_4d8_2)
                        int32_t temp0_1434[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1430, var_4b8_1), zmm2)
                        zmm2 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_1432, zmm2), temp0_1426)
                        arg7 = _mm_blendv_ps(zx.o(0), temp0_1434, zmm4)
                        arg5 = *(arg4 + zmm2.q)
                        int64_t rax_331 = _mm_extract_epi64(zmm2, 1)
                        int64_t rbp_41 = arg7[0].q
                        int64_t rbx_35 = _mm_extract_epi64(arg7, 1)
                        arg5 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg5, *(arg4 + rax_331), 0x10), 
                                *(arg4 + rbp_41), 0x20), 
                            *(arg4 + rbx_35), 0x30)
                    
                    zmm4 = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                    
                    if ((temp0_1419 & 1) != 0)
                        arg8 = _mm_blend_ps(arg8, zmm4, 1)
                        zmm0 = temp0_1088
                        arg7 = zmm3
                        
                        if ((temp0_1419 & 2) != 0)
                            goto label_14022b092
                        
                        goto label_14022b070
                    
                    zmm0 = temp0_1088
                    arg7 = zmm3
                    
                    if ((temp0_1419 & 2) != 0)
                    label_14022b092:
                        arg8 = _mm_blend_ps(arg8, zmm4, 2)
                        
                        if ((temp0_1419 & 4) != 0)
                            goto label_14022b075
                        
                        goto label_14022b09e
                    
                label_14022b070:
                    
                    if ((temp0_1419 & 4) == 0)
                    label_14022b09e:
                        
                        if ((temp0_1419 & 8) != 0)
                            arg8 = _mm_blend_ps(arg8, zmm4, 8)
                    else
                    label_14022b075:
                        arg8 = _mm_blend_ps(arg8, zmm4, 4)
                        
                        if ((temp0_1419 & 8) != 0)
                            arg8 = _mm_blend_ps(arg8, zmm4, 8)
                    
                    arg5 = data_143442c40
                    zmm1 = zmm0 & arg5
                    arg5 = _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm1) & arg11, 0x1f)
                    char temp0_1448 = _mm_movemask_ps(arg5)
                    
                    if (temp0_1448 == 0)
                        arg5 = var_518_6
                        arg6 = arg10
                        arg10 = var_538_2
                        zmm12 = var_578_2
                    else
                        arg5 = _mm_srai_epi32(arg5, 0x1f)
                        zmm2 = data_1434426c0
                        int32_t temp0_1450[0x4] = _mm_add_epi64(zmm9, zmm2)
                        zmm4 = _mm_blendv_ps(arg9, _mm_add_epi64(zmm2, arg9), 
                            _mm_shuffle_epi32(arg5, 0x50))
                        zmm0 = _mm_shuffle_epi32(arg5, 0xfa)
                        float temp0_1455[0x4] = _mm_blendv_ps(zmm9, temp0_1450, zmm0)
                        
                        if ((temp0_1448 & 1) != 0)
                            zmm0 = *arg9[0].q
                        
                        if ((temp0_1448 & 2) != 0)
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg9, 1), 0x10)
                        
                        arg6 = arg10
                        arg10 = var_538_2
                        zmm12 = var_578_2
                        
                        if ((temp0_1448 & 4) != 0)
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm9.q, 0x20)
                        
                        if ((temp0_1448 & 8) != 0)
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm9, 1), 0x30)
                        
                        arg9 = zmm4
                        zmm9 = temp0_1455
                        arg5 = var_518_6
                    
                    zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                    
                    if ((temp0_1419 & 1) != 0)
                        arg5 = _mm_blend_epi16(arg5, zmm1, 3)
                        
                        if ((temp0_1419 & 2) != 0)
                            goto label_14022b1c7
                        
                        goto label_14022b1b0
                    
                    if ((temp0_1419 & 2) != 0)
                    label_14022b1c7:
                        arg5 = _mm_blend_epi16(arg5, zmm1, 0xc)
                        
                        if ((temp0_1419 & 4) != 0)
                            goto label_14022b1b5
                        
                        goto label_14022b1d2
                    
                label_14022b1b0:
                    
                    if ((temp0_1419 & 4) == 0)
                    label_14022b1d2:
                        
                        if ((temp0_1419 & 8) != 0)
                            arg5 = _mm_blend_epi16(arg5, zmm1, 0xc0)
                    else
                    label_14022b1b5:
                        arg5 = _mm_blend_epi16(arg5, zmm1, 0x30)
                        
                        if ((temp0_1419 & 8) != 0)
                            arg5 = _mm_blend_epi16(arg5, zmm1, 0xc0)
                    
                    zmm1 = data_143442c50
                    zmm0 = temp0_1088 & zmm1
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm0)
                    char temp0_1466 = _mm_movemask_ps(_mm_slli_epi32(arg11 & zmm1, 0x1f))
                    
                    if (temp0_1466 == 0)
                        zmm9 = var_548_4
                        arg11 = var_4c8_1
                        arg9 = var_568_3
                    else
                        if ((temp0_1466 & 1) == 0)
                            if ((temp0_1466 & 2) != 0)
                                goto label_14022b424
                            
                            goto label_14022b21f
                        
                        zmm1 = *arg9[0].q
                        
                        if ((temp0_1466 & 2) != 0)
                        label_14022b424:
                            zmm1 =
                                __insertps_xmmps_memd_immb(zmm1, *_mm_extract_epi64(arg9, 1), 0x10)
                            arg9 = var_568_3
                            arg11 = var_4c8_1
                            
                            if ((temp0_1466 & 4) == 0)
                                goto label_14022b23a
                            
                            goto label_14022b44a
                        
                    label_14022b21f:
                        arg9 = var_568_3
                        arg11 = var_4c8_1
                        
                        if ((temp0_1466 & 4) != 0)
                        label_14022b44a:
                            zmm1 = __insertps_xmmps_memd_immb(zmm1, *zmm9.q, 0x20)
                            
                            if ((temp0_1466 & 8) != 0)
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(zmm9, 1), 0x30)
                        else
                        label_14022b23a:
                            
                            if ((temp0_1466 & 8) != 0)
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(zmm9, 1), 0x30)
                        
                        zmm9 = var_548_4
                    
                    zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                    
                    if ((temp0_1419 & 1) != 0)
                        arg6 = _mm_blend_ps(arg6, zmm0, 1)
                        
                        if ((temp0_1419 & 2) != 0)
                            goto label_14022b29f
                        
                        goto label_14022b288
                    
                    if ((temp0_1419 & 2) != 0)
                    label_14022b29f:
                        arg6 = _mm_blend_ps(arg6, zmm0, 2)
                        
                        if ((temp0_1419 & 4) != 0)
                            goto label_14022b28d
                        
                        goto label_14022b2aa
                    
                label_14022b288:
                    
                    if ((temp0_1419 & 4) == 0)
                    label_14022b2aa:
                        
                        if ((temp0_1419 & 8) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 8)
                    else
                    label_14022b28d:
                        arg6 = _mm_blend_ps(arg6, zmm0, 4)
                        
                        if ((temp0_1419 & 8) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 8)
            
            uint128_t var_4f8_7 = _mm_cmpeq_epi32(zmm0, zmm0) ^ arg9
            
            if (_mm_movemask_ps(_mm_slli_epi32(arg9 & not.o(arg11), 0x1f)) == 0)
                zmm15 = var_528_5
            else
                if (temp0_1115 != 0)
                    float var_518_7[0x4] = arg5
                    arg5 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f) & arg7
                    zmm1 = temp0_1082 & arg5
                    float var_4e8_5[0x4] = zx.o(0)
                    uint32_t temp0_1478 = _mm_movemask_ps(zmm1)
                    zmm12 = arg10
                    zmm15 = var_5a8_1
                    arg10 = zx.o(0)
                    zmm9 = zx.o(0)
                    
                    if (temp0_1478 != 0)
                        zmm9 = arg6
                        zmm4 = data_1434426c0
                        arg7 = var_5a8_1
                        int32_t temp0_1479[0x4] = _mm_add_epi64(arg7, zmm4)
                        zmm2 = var_538_2
                        zmm3 = _mm_add_epi64(zmm2, zmm4)
                        arg9 = _mm_unpacklo_epi32(zmm1, zmm1.q)
                        arg11 = _mm_blendv_ps(zmm2, zmm3, arg9)
                        zmm1 = _mm_unpackhi_ps(zmm1, zmm1)
                        zmm0 = zmm1
                        float temp0_1484[0x4] = _mm_blendv_ps(arg7, temp0_1479, zmm0)
                        char rdx_14 = temp0_1478.b
                        
                        if ((rdx_14 & 1) == 0)
                            if ((rdx_14 & 2) != 0)
                                goto label_14022b478
                            
                            goto label_14022b3a2
                        
                        zmm0 = *zmm2.q
                        
                        if ((rdx_14 & 2) != 0)
                        label_14022b478:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm2, 1), 0x10)
                            arg6 = zmm9
                            
                            if ((rdx_14 & 4) == 0)
                                goto label_14022b3af
                            
                            goto label_14022b495
                        
                    label_14022b3a2:
                        arg6 = zmm9
                        
                        if ((rdx_14 & 4) == 0)
                        label_14022b3af:
                            
                            if ((rdx_14 & 8) != 0)
                                goto label_14022b4b0
                            
                            goto label_14022b3b8
                        
                    label_14022b495:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1[0].q, 0x20)
                        char rbp_46
                        
                        if ((rdx_14 & 8) != 0)
                        label_14022b4b0:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                            rbp_46 = _mm_movemask_ps(arg5)
                            arg10 = zx.o(0)
                            
                            if ((rbp_46 & 1) != 0)
                                goto label_14022b3ca
                            
                            goto label_14022b4c8
                        
                    label_14022b3b8:
                        rbp_46 = _mm_movemask_ps(arg5)
                        arg10 = zx.o(0)
                        
                        if ((rbp_46 & 1) != 0)
                        label_14022b3ca:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 3)
                            
                            if ((rbp_46 & 2) != 0)
                                goto label_14022b4d2
                            
                            goto label_14022b3db
                        
                    label_14022b4c8:
                        
                        if ((rbp_46 & 2) != 0)
                        label_14022b4d2:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 0xc)
                            
                            if ((rbp_46 & 4) != 0)
                                goto label_14022b3e5
                            
                            goto label_14022b4e3
                        
                    label_14022b3db:
                        
                        if ((rbp_46 & 4) == 0)
                        label_14022b4e3:
                            
                            if ((rbp_46 & 8) != 0)
                                arg10 = _mm_blend_epi16(arg10, zmm0, 0xc0)
                        else
                        label_14022b3e5:
                            arg10 = _mm_blend_epi16(arg10, zmm0, 0x30)
                            
                            if ((rbp_46 & 8) != 0)
                                arg10 = _mm_blend_epi16(arg10, zmm0, 0xc0)
                        
                        arg5 = _mm_add_epi64(temp0_1484, zmm4)
                        zmm12 = _mm_blendv_ps(arg11, _mm_add_epi64(zmm4, arg11), arg9)
                        zmm0 = zmm1
                        zmm15 = _mm_blendv_ps(temp0_1484, arg5, zmm0)
                        
                        if ((rdx_14 & 1) == 0)
                            if ((rdx_14 & 2) != 0)
                                goto label_14022b577
                            
                            goto label_14022b522
                        
                        zmm0 = *arg11[0].q
                        
                        if ((rdx_14 & 2) != 0)
                        label_14022b577:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg11, 1), 0x10)
                            arg11 = var_4c8_1
                            
                            if ((rdx_14 & 4) == 0)
                                goto label_14022b531
                            
                            goto label_14022b591
                        
                    label_14022b522:
                        arg11 = var_4c8_1
                        
                        if ((rdx_14 & 4) == 0)
                        label_14022b531:
                            
                            if ((rdx_14 & 8) != 0)
                                goto label_14022b5a3
                            
                            goto label_14022b536
                        
                    label_14022b591:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1484[0].q, 0x20)
                        
                        if ((rdx_14 & 8) != 0)
                        label_14022b5a3:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_1484, 1), 0x30)
                            zmm9 = zx.o(0)
                            
                            if ((rbp_46 & 1) != 0)
                                goto label_14022b540
                            
                            goto label_14022b5b3
                        
                    label_14022b536:
                        zmm9 = zx.o(0)
                        
                        if ((rbp_46 & 1) != 0)
                        label_14022b540:
                            zmm9 = _mm_blend_ps(zmm9, zmm0, 1)
                            
                            if ((rbp_46 & 2) != 0)
                                goto label_14022b5b9
                            
                            goto label_14022b54d
                        
                    label_14022b5b3:
                        
                        if ((rbp_46 & 2) != 0)
                        label_14022b5b9:
                            zmm9 = _mm_blend_ps(zmm9, zmm0, 2)
                            
                            if ((rbp_46 & 4) != 0)
                                goto label_14022b553
                            
                            goto label_14022b5c6
                        
                    label_14022b54d:
                        
                        if ((rbp_46 & 4) == 0)
                        label_14022b5c6:
                            
                            if ((rbp_46 & 8) != 0)
                                zmm9 = _mm_blend_ps(zmm9, zmm0, 8)
                        else
                        label_14022b553:
                            zmm9 = _mm_blend_ps(zmm9, zmm0, 4)
                            
                            if ((rbp_46 & 8) != 0)
                                zmm9 = _mm_blend_ps(zmm9, zmm0, 8)
                    
                    zmm0 = data_143442c40
                    zmm2 = temp0_1088
                    arg5 = _mm_cmpeq_epi32(zmm2 & zmm0, zmm0) & var_588_4
                    zmm3 = _mm_slli_epi32(arg5 & arg11, 0x1f)
                    char temp0_1509 = _mm_movemask_ps(zmm3)
                    int32_t var_458_4[0x4] = arg6
                    
                    if (temp0_1509 == 0)
                        arg9 = zx.o(0)
                        arg6 = zmm2
                    else
                        zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                        zmm4 = data_1434426c0
                        int32_t temp0_1511[0x4] = _mm_add_epi64(zmm15, zmm4)
                        int32_t temp0_1512[0x4] = _mm_add_epi64(zmm12, zmm4)
                        zmm1 = _mm_shuffle_epi32(zmm3, 0x50)
                        zmm2 = _mm_blendv_ps(zmm12, temp0_1512, zmm1)
                        zmm3 = _mm_shuffle_epi32(zmm3, 0xfa)
                        zmm0 = zmm3
                        arg7 = _mm_blendv_ps(zmm15, temp0_1511, zmm0)
                        
                        if ((temp0_1509 & 1) == 0)
                            if ((temp0_1509 & 2) != 0)
                                goto label_14022b6bd
                            
                            goto label_14022b664
                        
                        zmm0 = *zmm12[0].q
                        
                        if ((temp0_1509 & 2) != 0)
                        label_14022b6bd:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm12, 1), 0x10)
                            
                            if ((temp0_1509 & 4) == 0)
                                goto label_14022b669
                            
                            goto label_14022b6cd
                        
                    label_14022b664:
                        
                        if ((temp0_1509 & 4) == 0)
                        label_14022b669:
                            
                            if ((temp0_1509 & 8) != 0)
                                goto label_14022b6df
                            
                            goto label_14022b66e
                        
                    label_14022b6cd:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm15[0].q, 0x20)
                        char rbp_47
                        
                        if ((temp0_1509 & 8) != 0)
                        label_14022b6df:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm15, 1), 0x30)
                            rbp_47 = _mm_movemask_ps(arg5)
                            arg5 = zx.o(0)
                            
                            if ((rbp_47 & 1) != 0)
                                goto label_14022b67a
                            
                            goto label_14022b6f1
                        
                    label_14022b66e:
                        rbp_47 = _mm_movemask_ps(arg5)
                        arg5 = zx.o(0)
                        
                        if ((rbp_47 & 1) != 0)
                        label_14022b67a:
                            arg5 = _mm_blend_ps(arg5, zmm0, 1)
                            
                            if ((rbp_47 & 2) != 0)
                                goto label_14022b6f7
                            
                            goto label_14022b686
                        
                    label_14022b6f1:
                        
                        if ((rbp_47 & 2) != 0)
                        label_14022b6f7:
                            arg5 = _mm_blend_ps(arg5, zmm0, 2)
                            
                            if ((rbp_47 & 4) != 0)
                                goto label_14022b68c
                            
                            goto label_14022b703
                        
                    label_14022b686:
                        
                        if ((rbp_47 & 4) == 0)
                        label_14022b703:
                            
                            if ((rbp_47 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm0, 8)
                        else
                        label_14022b68c:
                            arg5 = _mm_blend_ps(arg5, zmm0, 4)
                            
                            if ((rbp_47 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm0, 8)
                        
                        var_4e8_5 = arg5
                        arg5 = _mm_add_epi64(arg7, zmm4)
                        zmm12 = _mm_blendv_ps(zmm2, _mm_add_epi64(zmm4, zmm2), zmm1)
                        zmm0 = zmm3
                        zmm15 = _mm_blendv_ps(arg7, arg5, zmm0)
                        
                        if ((temp0_1509 & 1) == 0)
                            if ((temp0_1509 & 2) != 0)
                                goto label_14022b79a
                            
                            goto label_14022b748
                        
                        zmm0 = *zmm2.q
                        
                        if ((temp0_1509 & 2) != 0)
                        label_14022b79a:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm2, 1), 0x10)
                            
                            if ((temp0_1509 & 4) == 0)
                                goto label_14022b74d
                            
                            goto label_14022b7aa
                        
                    label_14022b748:
                        
                        if ((temp0_1509 & 4) == 0)
                        label_14022b74d:
                            
                            if ((temp0_1509 & 8) != 0)
                                goto label_14022b7bc
                            
                            goto label_14022b752
                        
                    label_14022b7aa:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg7[0].q, 0x20)
                        
                        if ((temp0_1509 & 8) != 0)
                        label_14022b7bc:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg7, 1), 0x30)
                            arg6 = temp0_1088
                            arg9 = zx.o(0)
                            
                            if ((rbp_47 & 1) != 0)
                                goto label_14022b763
                            
                            goto label_14022b7d3
                        
                    label_14022b752:
                        arg6 = temp0_1088
                        arg9 = zx.o(0)
                        
                        if ((rbp_47 & 1) != 0)
                        label_14022b763:
                            arg9 = _mm_blend_epi16(arg9, zmm0, 3)
                            
                            if ((rbp_47 & 2) != 0)
                                goto label_14022b7d9
                            
                            goto label_14022b770
                        
                    label_14022b7d3:
                        
                        if ((rbp_47 & 2) != 0)
                        label_14022b7d9:
                            arg9 = _mm_blend_epi16(arg9, zmm0, 0xc)
                            
                            if ((rbp_47 & 4) != 0)
                                goto label_14022b776
                            
                            goto label_14022b7e6
                        
                    label_14022b770:
                        
                        if ((rbp_47 & 4) == 0)
                        label_14022b7e6:
                            
                            if ((rbp_47 & 8) != 0)
                                arg9 = _mm_blend_epi16(arg9, zmm0, 0xc0)
                        else
                        label_14022b776:
                            arg9 = _mm_blend_epi16(arg9, zmm0, 0x30)
                            
                            if ((rbp_47 & 8) != 0)
                                arg9 = _mm_blend_epi16(arg9, zmm0, 0xc0)
                    
                    zmm0 = data_143442c50
                    arg6 = _mm_cmpeq_epi32(arg6 & zmm0, zmm0) & var_588_4
                    arg5 = _mm_slli_epi32(arg6 & arg11, 0x1f)
                    char temp0_1539 = _mm_movemask_ps(arg5)
                    zmm3 = zx.o(0)
                    zmm2 = zx.o(0)
                    
                    if (temp0_1539 != 0)
                        arg5 = _mm_srai_epi32(arg5, 0x1f)
                        zmm2 = data_1434426c0
                        zmm3 = _mm_add_epi64(zmm15, zmm2)
                        zmm4 = _mm_blendv_ps(zmm12, _mm_add_epi64(zmm2, zmm12), 
                            _mm_shuffle_epi32(arg5, 0x50))
                        zmm0 = _mm_shuffle_epi32(arg5, 0xfa)
                        zmm2 = _mm_blendv_ps(zmm15, zmm3, zmm0)
                        
                        if ((temp0_1539 & 1) == 0)
                            if ((temp0_1539 & 2) != 0)
                                goto label_14022b93f
                            
                            goto label_14022b87a
                        
                        zmm0 = *zmm12[0].q
                        
                        if ((temp0_1539 & 2) != 0)
                        label_14022b93f:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm12, 1), 0x10)
                            
                            if ((temp0_1539 & 4) == 0)
                                goto label_14022b883
                            
                            goto label_14022b953
                        
                    label_14022b87a:
                        
                        if ((temp0_1539 & 4) == 0)
                        label_14022b883:
                            
                            if ((temp0_1539 & 8) != 0)
                                goto label_14022b969
                            
                            goto label_14022b88c
                        
                    label_14022b953:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm15[0].q, 0x20)
                        char rbp_48
                        
                        if ((temp0_1539 & 8) != 0)
                        label_14022b969:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm15, 1), 0x30)
                            rbp_48 = _mm_movemask_ps(arg6)
                            zmm3 = zx.o(0)
                            
                            if ((rbp_48 & 1) != 0)
                                goto label_14022b89c
                            
                            goto label_14022b97f
                        
                    label_14022b88c:
                        rbp_48 = _mm_movemask_ps(arg6)
                        zmm3 = zx.o(0)
                        
                        if ((rbp_48 & 1) != 0)
                        label_14022b89c:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 1)
                            
                            if ((rbp_48 & 2) != 0)
                                goto label_14022b989
                            
                            goto label_14022b8ac
                        
                    label_14022b97f:
                        
                        if ((rbp_48 & 2) != 0)
                        label_14022b989:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                            
                            if ((rbp_48 & 4) != 0)
                                goto label_14022b8b6
                            
                            goto label_14022b999
                        
                    label_14022b8ac:
                        
                        if ((rbp_48 & 4) != 0)
                        label_14022b8b6:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                            
                            if ((rbp_48 & 8) != 0)
                                goto label_14022b9a3
                            
                            goto label_14022b8c6
                        
                    label_14022b999:
                        
                        if ((rbp_48 & 8) != 0)
                        label_14022b9a3:
                            zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                            
                            if ((temp0_1539 & 1) == 0)
                                goto label_14022b8cf
                            
                            goto label_14022b9b7
                        
                    label_14022b8c6:
                        
                        if ((temp0_1539 & 1) == 0)
                        label_14022b8cf:
                            
                            if ((temp0_1539 & 2) != 0)
                                goto label_14022b9cb
                            
                            goto label_14022b8d8
                        
                    label_14022b9b7:
                        zmm0 = *zmm4.q
                        
                        if ((temp0_1539 & 2) != 0)
                        label_14022b9cb:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm4, 1), 0x10)
                            
                            if ((temp0_1539 & 4) == 0)
                                goto label_14022b8e1
                            
                            goto label_14022b9df
                        
                    label_14022b8d8:
                        
                        if ((temp0_1539 & 4) == 0)
                        label_14022b8e1:
                            
                            if ((temp0_1539 & 8) != 0)
                                goto label_14022b9f5
                            
                            goto label_14022b8ea
                        
                    label_14022b9df:
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm2.q, 0x20)
                        
                        if ((temp0_1539 & 8) != 0)
                        label_14022b9f5:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(zmm2, 1), 0x30)
                            zmm2 = zx.o(0)
                            
                            if ((rbp_48 & 1) != 0)
                                goto label_14022b8f7
                            
                            goto label_14022ba08
                        
                    label_14022b8ea:
                        zmm2 = zx.o(0)
                        
                        if ((rbp_48 & 1) != 0)
                        label_14022b8f7:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 1)
                            
                            if ((rbp_48 & 2) != 0)
                                goto label_14022ba12
                            
                            goto label_14022b907
                        
                    label_14022ba08:
                        
                        if ((rbp_48 & 2) != 0)
                        label_14022ba12:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 2)
                            
                            if ((rbp_48 & 4) != 0)
                                goto label_14022b911
                            
                            goto label_14022ba22
                        
                    label_14022b907:
                        
                        if ((rbp_48 & 4) == 0)
                        label_14022ba22:
                            
                            if ((rbp_48 & 8) != 0)
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                        else
                        label_14022b911:
                            zmm2 = _mm_blend_ps(zmm2, zmm0, 4)
                            
                            if ((rbp_48 & 8) != 0)
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                    
                    zmm4 = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                    arg5 = __paddq_xmmdq_memdq(var_418_2, var_598_4)
                    zmm0 = data_1434426c0
                    arg5 = __paddq_xmmdq_memdq(arg5, var_4d8_2)
                    zmm4 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm4, var_4b8_1), zmm0)
                    arg6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, zmm0), 
                        _mm_shuffle_epi32(var_498_3, 0x50))
                    arg7 = _mm_blendv_ps(zx.o(0), zmm4, _mm_shuffle_epi32(var_498_3, 0xfa))
                    int64_t rax_365 = arg6[0].q
                    int64_t rdx_19 = _mm_extract_epi64(arg6, 1)
                    int64_t rbp_49 = _mm_extract_epi64(arg7, 1)
                    zmm0 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_365)), *(arg4 + rdx_19), 1), 
                            *(arg4 + arg7[0].q), 2), 
                        *(arg4 + rbp_49), 3)
                    zmm4 = _mm_srli_epi32(zmm0, 0x15)
                    arg5 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    float temp0_1582[0x4] = _mm_add_ps(arg10, 
                        _mm_mul_ps(zmm9, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    zmm0 = data_143442440
                    float temp0_1584[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                    arg6 = data_143442690
                    float temp0_1586[0x4] = _mm_mul_ps(arg9, _mm_div_ps(temp0_1584, arg6))
                    zmm4 = _mm_add_epi32(zmm4, zmm0)
                    zmm0 = _mm_div_ps(_mm_cvtepi32_ps(zmm4), arg6)
                    char temp25_1 = temp0_1115 & 1
                    
                    if (temp25_1 != 0)
                        arg8 = _mm_blend_ps(arg8, temp0_1582, 1)
                    
                    arg7 = var_588_4
                    arg5 = var_518_7
                    arg6 = var_458_4
                    zmm2 = _mm_mul_ps(zmm2, zmm0)
                    zmm1 = _mm_add_ps(var_4e8_5, temp0_1586)
                    
                    if (temp25_1 != 0)
                        arg5 = _mm_blend_ps(arg5, zmm1, 1)
                        arg9 = var_568_3
                        zmm3 = _mm_add_ps(zmm3, zmm2)
                        
                        if (temp25_1 != 0)
                            goto label_14022bd6b
                        
                        goto label_14022bb7a
                    
                    arg9 = var_568_3
                    zmm3 = _mm_add_ps(zmm3, zmm2)
                    bool cond:120_1
                    bool cond:121_1
                    bool cond:140_1
                    bool cond:141_1
                    
                    if (temp25_1 != 0)
                    label_14022bd6b:
                        arg6 = _mm_blend_ps(arg6, zmm3, 1)
                        char temp41_1 = temp0_1115 & 2
                        cond:120_1 = temp41_1 == 0
                        cond:121_1 = temp41_1 != 0
                        cond:140_1 = temp41_1 == 0
                        cond:141_1 = temp41_1 != 0
                        
                        if (temp41_1 != 0)
                            goto label_14022bb83
                        
                        goto label_14022bd7a
                    
                label_14022bb7a:
                    char temp40_1 = temp0_1115 & 2
                    cond:120_1 = temp40_1 == 0
                    cond:121_1 = temp40_1 != 0
                    cond:140_1 = temp40_1 == 0
                    cond:141_1 = temp40_1 != 0
                    
                    if (temp40_1 == 0)
                    label_14022bd7a:
                        
                        if (not(cond:120_1))
                        label_14022bd80:
                            arg5 = _mm_blend_ps(arg5, zmm1, 2)
                            
                            if (cond:141_1)
                                goto label_14022bb96
                            
                            goto label_14022bd8c
                    else
                    label_14022bb83:
                        arg8 = _mm_blend_ps(arg8, temp0_1582, 2)
                        
                        if (cond:121_1)
                            goto label_14022bd80
                    
                    bool cond:176_1
                    bool cond:177_1
                    bool cond:200_1
                    bool cond:201_1
                    
                    if (not(cond:140_1))
                    label_14022bb96:
                        arg6 = _mm_blend_ps(arg6, zmm3, 2)
                        char temp63_1 = temp0_1115 & 4
                        cond:176_1 = temp63_1 == 0
                        cond:177_1 = temp63_1 != 0
                        cond:200_1 = temp63_1 == 0
                        cond:201_1 = temp63_1 != 0
                        
                        if (temp63_1 != 0)
                            goto label_14022bd95
                        
                        goto label_14022bba5
                    
                label_14022bd8c:
                    char temp62_1 = temp0_1115 & 4
                    cond:176_1 = temp62_1 == 0
                    cond:177_1 = temp62_1 != 0
                    cond:200_1 = temp62_1 == 0
                    cond:201_1 = temp62_1 != 0
                    
                    if (temp62_1 == 0)
                    label_14022bba5:
                        
                        if (not(cond:176_1))
                        label_14022bbab:
                            arg5 = _mm_blend_ps(arg5, zmm1, 4)
                            
                            if (cond:201_1)
                                goto label_14022bda8
                            
                            goto label_14022bbb7
                    else
                    label_14022bd95:
                        arg8 = _mm_blend_ps(arg8, temp0_1582, 4)
                        
                        if (cond:177_1)
                            goto label_14022bbab
                    
                    bool cond:245_1
                    bool cond:246_1
                    bool cond:271_1
                    bool cond:272_1
                    
                    if (not(cond:200_1))
                    label_14022bda8:
                        arg6 = _mm_blend_ps(arg6, zmm3, 4)
                        char temp86_1 = temp0_1115 & 8
                        cond:245_1 = temp86_1 == 0
                        cond:246_1 = temp86_1 != 0
                        cond:271_1 = temp86_1 == 0
                        cond:272_1 = temp86_1 != 0
                        
                        if (temp86_1 != 0)
                            goto label_14022bbc0
                        
                        goto label_14022bdb7
                    
                label_14022bbb7:
                    char temp85_1 = temp0_1115 & 8
                    cond:245_1 = temp85_1 == 0
                    cond:246_1 = temp85_1 != 0
                    cond:271_1 = temp85_1 == 0
                    cond:272_1 = temp85_1 != 0
                    
                    if (temp85_1 != 0)
                    label_14022bbc0:
                        arg8 = _mm_blend_ps(arg8, temp0_1582, 8)
                        arg10 = var_538_2
                        zmm12 = var_578_2
                        
                        if (cond:246_1)
                            goto label_14022bdcb
                        
                        goto label_14022bbdb
                    
                label_14022bdb7:
                    arg10 = var_538_2
                    zmm12 = var_578_2
                    
                    if (cond:245_1)
                    label_14022bbdb:
                        
                        if (not(cond:271_1))
                            arg6 = _mm_blend_ps(arg6, zmm3, 8)
                    else
                    label_14022bdcb:
                        arg5 = _mm_blend_ps(arg5, zmm1, 8)
                        
                        if (cond:272_1)
                            arg6 = _mm_blend_ps(arg6, zmm3, 8)
                
                zmm9 = arg7 ^ var_4f8_7
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm9 & arg11, 0x1f)) == 0)
                    zmm9 = var_548_4
                    zmm15 = var_528_5
                else
                    zmm15 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_478_4)
                    arg9 = zmm15 & arg11
                    zmm2 = _mm_slli_epi32(arg9, 0x1f)
                    char temp0_1604 = _mm_movemask_ps(zmm2)
                    
                    if (temp0_1604 == 0)
                        arg9 = var_568_3
                    else
                        arg11 = arg6
                        arg10 = arg5
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f) & zmm1
                        
                        if (_mm_movemask_ps(zmm2) == 0)
                            zmm12 = var_428_3
                        else
                            arg6 = data_1434426b0
                            int32_t temp0_1609[0x4] = _mm_add_epi64(var_508_2, arg6)
                            zmm12 = var_428_3
                            int32_t temp0_1610[0x4] = _mm_add_epi64(arg6, zmm12)
                            float temp0_1611[0x4] = _mm_unpacklo_ps(zmm2, zmm2.q)
                            zmm12 = _mm_blendv_ps(zmm12, temp0_1610, temp0_1611)
                            zmm2 = _mm_unpackhi_ps(zmm2, zmm2)
                            var_508_2 = _mm_blendv_ps(var_508_2, temp0_1609, zmm2)
                            int32_t temp0_1615[0x4] = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                            int32_t temp0_1616[0x4] = __paddq_xmmdq_memdq(var_418_2, var_598_4)
                            zmm0 = data_1434426c0
                            int32_t temp0_1617[0x4] = __paddq_xmmdq_memdq(temp0_1616, var_4d8_2)
                            int32_t temp0_1619[0x4] =
                                _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1615, var_4b8_1), zmm0)
                            float temp0_1621[0x4] =
                                _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_1617, zmm0), temp0_1611)
                            zmm4 = _mm_blendv_ps(zx.o(0), temp0_1619, zmm2)
                            int64_t rax_368 = _mm_extract_epi64(temp0_1621, 1)
                            int64_t rdx_20 = temp0_1621[0].q
                            int64_t rbx_37 = _mm_extract_epi64(zmm4, 1)
                            zmm3 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdx_20)), 
                                            *(arg4 + rax_368), 1), 
                                        *(arg4 + zmm4.q), 2), 
                                    *(arg4 + rbx_37), 3).q), 
                                data_143442b40))
                        
                        zmm0 = zmm1
                        zmm2 = _mm_blendv_ps(zx.o(0), zmm3, zmm0)
                        
                        if ((temp0_1604 & 1) != 0)
                            arg8 = _mm_blend_ps(arg8, zmm2, 1)
                            arg6 = arg11
                            arg11 = var_4c8_1
                            
                            if ((temp0_1604 & 2) != 0)
                                goto label_14022be5a
                            
                            goto label_14022be34
                        
                        arg6 = arg11
                        arg11 = var_4c8_1
                        
                        if ((temp0_1604 & 2) != 0)
                        label_14022be5a:
                            arg8 = _mm_blend_ps(arg8, zmm2, 2)
                            
                            if ((temp0_1604 & 4) != 0)
                                goto label_14022be39
                            
                            goto label_14022be66
                        
                    label_14022be34:
                        
                        if ((temp0_1604 & 4) == 0)
                        label_14022be66:
                            
                            if ((temp0_1604 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm2, 8)
                        else
                        label_14022be39:
                            arg8 = _mm_blend_ps(arg8, zmm2, 4)
                            
                            if ((temp0_1604 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm2, 8)
                        
                        zmm1 = data_143442c40
                        zmm3 = temp0_1088 & zmm1
                        zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm3) & arg9, 0x1f)
                        char temp0_1642 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_1642 == 0)
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
                            
                            if ((temp0_1642 & 1) != 0)
                                zmm0 = zx.o(*zmm12[0].q)
                            
                            if ((temp0_1642 & 2) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm12, 1)), 1)
                            
                            arg5 = arg10
                            arg10 = var_538_2
                            zmm12 = var_578_2
                            
                            if ((temp0_1642 & 4) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*var_508_2.q), 2)
                            
                            if ((temp0_1642 & 8) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, 
                                    zx.d(*_mm_extract_epi64(var_508_2, 1)), 3)
                            
                            zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zx.o(0), zmm0, 0x55), data_143442b40))
                        
                        zmm4 = zx.o(0)
                        zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0)) & not.o(zmm0)
                        
                        if ((temp0_1604 & 1) != 0)
                            arg5 = _mm_blend_ps(arg5, zmm3, 1)
                            
                            if ((temp0_1604 & 2) != 0)
                                goto label_14022bfb9
                            
                            goto label_14022bfa2
                        
                        if ((temp0_1604 & 2) != 0)
                        label_14022bfb9:
                            arg5 = _mm_blend_ps(arg5, zmm3, 2)
                            
                            if ((temp0_1604 & 4) != 0)
                                goto label_14022bfa7
                            
                            goto label_14022bfc4
                        
                    label_14022bfa2:
                        
                        if ((temp0_1604 & 4) == 0)
                        label_14022bfc4:
                            
                            if ((temp0_1604 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm3, 8)
                        else
                        label_14022bfa7:
                            arg5 = _mm_blend_ps(arg5, zmm3, 4)
                            
                            if ((temp0_1604 & 8) != 0)
                                arg5 = _mm_blend_ps(arg5, zmm3, 8)
                        
                        zmm3 = data_143442c50
                        zmm0 = temp0_1088 & zmm3
                        zmm3 = _mm_cmpeq_epi32(zmm3, zmm0)
                        char temp0_1663 = _mm_movemask_ps(_mm_slli_epi32(arg9 & zmm3, 0x1f))
                        
                        if (temp0_1663 == 0)
                            arg9 = var_568_3
                        else
                            arg9 = var_568_3
                            
                            if ((temp0_1663 & 1) == 0)
                                if ((temp0_1663 & 2) != 0)
                                    goto label_14022cb7f
                                
                                goto label_14022c014
                            
                            zmm3 = zx.o(*zmm2.q)
                            
                            if ((temp0_1663 & 2) != 0)
                            label_14022cb7f:
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                
                                if ((temp0_1663 & 4) == 0)
                                    goto label_14022c01d
                                
                                goto label_14022cb96
                            
                        label_14022c014:
                            
                            if ((temp0_1663 & 4) != 0)
                            label_14022cb96:
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 2)
                                
                                if ((temp0_1663 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                            else
                            label_14022c01d:
                                
                                if ((temp0_1663 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                            
                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zx.o(0), zmm3, 0x55), data_143442b40))
                        
                        zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_1604 & 1) != 0)
                            arg6 = _mm_blend_ps(arg6, zmm0, 1)
                            
                            if ((temp0_1604 & 2) != 0)
                                goto label_14022c083
                            
                            goto label_14022c06c
                        
                        if ((temp0_1604 & 2) != 0)
                        label_14022c083:
                            arg6 = _mm_blend_ps(arg6, zmm0, 2)
                            
                            if ((temp0_1604 & 4) != 0)
                                goto label_14022c071
                            
                            goto label_14022c08e
                        
                    label_14022c06c:
                        
                        if ((temp0_1604 & 4) == 0)
                        label_14022c08e:
                            
                            if ((temp0_1604 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                        else
                        label_14022c071:
                            arg6 = _mm_blend_ps(arg6, zmm0, 4)
                            
                            if ((temp0_1604 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                    
                    zmm9 = (zmm9 ^ zmm15) & arg11
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm9, 0x1f)) == 0)
                        zmm9 = var_548_4
                        arg7 = var_588_4
                        zmm15 = var_528_5
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(data_143442ad0, var_478_4)
                        char temp0_1677 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & arg11, 0x1f))
                        
                        if (temp0_1677 == 0)
                            arg7 = var_588_4
                            zmm15 = var_528_5
                        else
                            char temp30_1 = temp0_1677 & 1
                            
                            if (temp30_1 == 0)
                                arg7 = var_588_4
                                zmm15 = var_528_5
                                
                                if (temp30_1 != 0)
                                label_14022c15a:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                                    
                                    if (temp30_1 != 0)
                                        goto label_14022c108
                                    
                                    goto label_14022c162
                            else
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                                arg7 = var_588_4
                                zmm15 = var_528_5
                                
                                if (temp30_1 != 0)
                                    goto label_14022c15a
                            
                            bool cond:138_1
                            bool cond:139_1
                            bool cond:156_1
                            bool cond:157_1
                            
                            if (temp30_1 != 0)
                            label_14022c108:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                                char temp49_1 = temp0_1677 & 2
                                cond:138_1 = temp49_1 == 0
                                cond:139_1 = temp49_1 != 0
                                cond:156_1 = temp49_1 == 0
                                cond:157_1 = temp49_1 != 0
                                
                                if (temp49_1 != 0)
                                    goto label_14022c167
                                
                                goto label_14022c113
                            
                        label_14022c162:
                            char temp48_1 = temp0_1677 & 2
                            cond:138_1 = temp48_1 == 0
                            cond:139_1 = temp48_1 != 0
                            cond:156_1 = temp48_1 == 0
                            cond:157_1 = temp48_1 != 0
                            
                            if (temp48_1 == 0)
                            label_14022c113:
                                
                                if (not(cond:138_1))
                                label_14022c115:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                                    
                                    if (cond:157_1)
                                        goto label_14022c172
                                    
                                    goto label_14022c11d
                            else
                            label_14022c167:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                                
                                if (cond:139_1)
                                    goto label_14022c115
                            
                            bool cond:198_1
                            bool cond:199_1
                            bool cond:223_1
                            bool cond:224_1
                            
                            if (not(cond:156_1))
                            label_14022c172:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                                char temp72_1 = temp0_1677 & 4
                                cond:198_1 = temp72_1 == 0
                                cond:199_1 = temp72_1 != 0
                                cond:223_1 = temp72_1 == 0
                                cond:224_1 = temp72_1 != 0
                                
                                if (temp72_1 != 0)
                                    goto label_14022c122
                                
                                goto label_14022c17d
                            
                        label_14022c11d:
                            char temp71_1 = temp0_1677 & 4
                            cond:198_1 = temp71_1 == 0
                            cond:199_1 = temp71_1 != 0
                            cond:223_1 = temp71_1 == 0
                            cond:224_1 = temp71_1 != 0
                            
                            if (temp71_1 == 0)
                            label_14022c17d:
                                
                                if (not(cond:198_1))
                                label_14022c17f:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                                    
                                    if (cond:224_1)
                                        goto label_14022c12d
                                    
                                    goto label_14022c187
                            else
                            label_14022c122:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                                
                                if (cond:199_1)
                                    goto label_14022c17f
                            
                            bool cond:269_1
                            bool cond:270_1
                            bool cond:293_1
                            bool cond:294_1
                            
                            if (not(cond:223_1))
                            label_14022c12d:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                                char temp100_1 = temp0_1677 & 8
                                cond:269_1 = temp100_1 == 0
                                cond:270_1 = temp100_1 != 0
                                cond:293_1 = temp100_1 == 0
                                cond:294_1 = temp100_1 == 0
                                
                                if (temp100_1 != 0)
                                    goto label_14022c18c
                                
                                goto label_14022c138
                            
                        label_14022c187:
                            char temp99_1 = temp0_1677 & 8
                            cond:269_1 = temp99_1 == 0
                            cond:270_1 = temp99_1 != 0
                            cond:293_1 = temp99_1 == 0
                            cond:294_1 = temp99_1 == 0
                            
                            if (temp99_1 != 0)
                            label_14022c18c:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                                
                                if (cond:270_1)
                                    goto label_14022c13a
                                
                                goto label_14022c195
                            
                        label_14022c138:
                            
                            if (cond:269_1)
                            label_14022c195:
                                
                                if (not(cond:293_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                            else
                            label_14022c13a:
                                arg5 = _mm_blend_ps(arg5, zx.o(0), 8)
                                
                                if (not(cond:294_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                        
                        char temp0_1691 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm9), 0x1f))
                        
                        if (temp0_1691 == 0)
                            zmm9 = var_548_4
                        else
                            char temp39_1 = temp0_1691 & 1
                            zmm9 = var_548_4
                            
                            if (temp39_1 != 0)
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 1)
                                
                                if (temp39_1 != 0)
                                    goto label_14022c239
                            else if (temp39_1 != 0)
                            label_14022c239:
                                arg5 = _mm_blend_ps(arg5, zx.o(0), 1)
                                
                                if (temp39_1 != 0)
                                    goto label_14022c1fb
                                
                                goto label_14022c241
                            
                            bool cond:154_1
                            bool cond:155_1
                            bool cond:174_1
                            bool cond:175_1
                            
                            if (temp39_1 != 0)
                            label_14022c1fb:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 1)
                                char temp61_1 = temp0_1691 & 2
                                cond:154_1 = temp61_1 == 0
                                cond:155_1 = temp61_1 != 0
                                cond:174_1 = temp61_1 == 0
                                cond:175_1 = temp61_1 != 0
                                
                                if (temp61_1 != 0)
                                    goto label_14022c246
                                
                                goto label_14022c206
                            
                        label_14022c241:
                            char temp60_1 = temp0_1691 & 2
                            cond:154_1 = temp60_1 == 0
                            cond:155_1 = temp60_1 != 0
                            cond:174_1 = temp60_1 == 0
                            cond:175_1 = temp60_1 != 0
                            
                            if (temp60_1 == 0)
                            label_14022c206:
                                
                                if (not(cond:154_1))
                                label_14022c208:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 2)
                                    
                                    if (cond:175_1)
                                        goto label_14022c251
                                    
                                    goto label_14022c210
                            else
                            label_14022c246:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 2)
                                
                                if (cond:155_1)
                                    goto label_14022c208
                            
                            bool cond:221_1
                            bool cond:222_1
                            bool cond:243_1
                            bool cond:244_1
                            
                            if (not(cond:174_1))
                            label_14022c251:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 2)
                                char temp84_1 = temp0_1691 & 4
                                cond:221_1 = temp84_1 == 0
                                cond:222_1 = temp84_1 != 0
                                cond:243_1 = temp84_1 == 0
                                cond:244_1 = temp84_1 != 0
                                
                                if (temp84_1 != 0)
                                    goto label_14022c215
                                
                                goto label_14022c25c
                            
                        label_14022c210:
                            char temp83_1 = temp0_1691 & 4
                            cond:221_1 = temp83_1 == 0
                            cond:222_1 = temp83_1 != 0
                            cond:243_1 = temp83_1 == 0
                            cond:244_1 = temp83_1 != 0
                            
                            if (temp83_1 == 0)
                            label_14022c25c:
                                
                                if (not(cond:221_1))
                                label_14022c25e:
                                    arg5 = _mm_blend_ps(arg5, zx.o(0), 4)
                                    
                                    if (cond:244_1)
                                        goto label_14022c220
                                    
                                    goto label_14022c266
                            else
                            label_14022c215:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 4)
                                
                                if (cond:222_1)
                                    goto label_14022c25e
                            
                            bool cond:291_1
                            bool cond:292_1
                            bool cond:307_1
                            bool cond:308_1
                            
                            if (not(cond:243_1))
                            label_14022c220:
                                arg6 = _mm_blend_ps(arg6, zx.o(0), 4)
                                char temp112_1 = temp0_1691 & 8
                                cond:291_1 = temp112_1 == 0
                                cond:292_1 = temp112_1 != 0
                                cond:307_1 = temp112_1 == 0
                                cond:308_1 = temp112_1 == 0
                                
                                if (temp112_1 != 0)
                                    goto label_14022c26b
                                
                                goto label_14022c22b
                            
                        label_14022c266:
                            char temp111_1 = temp0_1691 & 8
                            cond:291_1 = temp111_1 == 0
                            cond:292_1 = temp111_1 != 0
                            cond:307_1 = temp111_1 == 0
                            cond:308_1 = temp111_1 == 0
                            
                            if (temp111_1 != 0)
                            label_14022c26b:
                                arg8 = _mm_blend_ps(arg8, zx.o(0), 8)
                                
                                if (cond:292_1)
                                    goto label_14022c22d
                                
                                goto label_14022c274
                            
                        label_14022c22b:
                            
                            if (cond:291_1)
                            label_14022c274:
                                
                                if (not(cond:307_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
                            else
                            label_14022c22d:
                                arg5 = _mm_blend_ps(arg5, zx.o(0), 8)
                                
                                if (not(cond:308_1))
                                    arg6 = _mm_blend_ps(arg6, zx.o(0), 8)
            
            zmm0 = var_488_2
            zmm15 = _mm_cmpeq_epi32(zmm15, zmm0) & not.o(arg11)
            arg11 = _mm_slli_epi32(zmm15, 0x1f)
            char temp0_1706 = _mm_movemask_ps(arg11)
            
            if (temp0_1706 == 0)
                arg9 = var_448_2
                rcx_96 = _mm_movemask_ps(_mm_and_ps(var_408_3, arg9))
                
                if (rcx_96 != 0)
                    goto label_140229da7
            else
                zmm0 = _mm_mullo_epi32(zmm0, zmm12)
                zmm1 = _mm_cvtepi32_epi64(zmm0.q)
                zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
                int32_t var_488_4[0x4] = zmm0
                zmm0 = __paddq_xmmdq_memdq(zmm0, var_468_2)
                int32_t var_4c8_2[0x4] = zmm1
                float var_4b8_2[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_598_4), arg10)
                uint128_t var_4d8_3 = __paddq_xmmdq_memdq(zmm0, var_5a8_1)
                arg9 &= zmm15
                float var_518_8[0x4] = arg5
                int32_t var_458_5[0x4] = arg6
                
                if (_mm_movemask_ps(_mm_slli_epi32(arg9, 0x1f)) == 0)
                    arg6 = temp0_1088
                else
                    arg6 = temp0_1088
                    zmm4 = zx.o(0)
                    arg10 = _mm_cmpeq_epi32(data_143442c60 & arg6, zx.o(0))
                    zmm3 = _mm_slli_epi32(arg9 & arg10, 0x1f)
                    char temp0_1719 = _mm_movemask_ps(zmm3)
                    
                    if (temp0_1719 != 0)
                        float var_568_4[0x4] = arg9
                        zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                        int32_t temp0_1721[0x4] = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                        int32_t temp0_1722[0x4] = __paddq_xmmdq_memdq(var_418_2, var_598_4)
                        zmm2 = data_1434426c0
                        int32_t temp0_1723[0x4] = __paddq_xmmdq_memdq(temp0_1722, var_4c8_2)
                        int32_t temp0_1725[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1721, var_488_4), zmm2)
                        int32_t temp0_1726[0x4] = _mm_add_epi64(temp0_1723, zmm2)
                        zmm1 = _mm_shuffle_epi32(zmm3, 0x50)
                        float temp0_1728[0x4] = _mm_blendv_ps(zx.o(0), temp0_1726, zmm1)
                        zmm3 = _mm_shuffle_epi32(zmm3, 0xfa)
                        arg7 = _mm_blendv_ps(zx.o(0), temp0_1725, zmm3)
                        int64_t rax_381 = _mm_extract_epi64(temp0_1728, 1)
                        void* rbp_51 = arg4 + rax_381
                        arg9 = *(arg4 + rax_381)
                        int64_t rax_382 = arg7[0].q
                        int64_t rsi_24 = _mm_extract_epi64(arg7, 1)
                        void* rdi_9 = arg4 + rax_382
                        arg7 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        int32_t var_428_4 = (*(arg4 + rax_382)).d
                        arg6 = _mm_blendv_ps(zx.o(0), zmm2, zmm3)
                        int32_t var_508_3 = (*(arg4 + rsi_24)).d
                        void* rbx_39 = temp0_1728[0].q + arg4
                        var_578_2 = *(arg7[0].q + rbx_39)
                        arg7 = *(_mm_extract_epi64(arg7, 1) + rbp_51)
                        zmm9 = *(arg6[0].q + rdi_9)
                        void* rsi_25 = arg4 + rsi_24
                        int32_t var_498_4 = (*(_mm_extract_epi64(arg6, 1) + rsi_25)).d
                        arg5 = data_1434426e0
                        arg6 = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        zmm4 = _mm_blendv_ps(zx.o(0), arg5, zmm3)
                        zmm12 = *(arg6[0].q + rbx_39)
                        zmm3 = *(_mm_extract_epi64(arg6, 1) + rbp_51)
                        int64_t rbp_52 = _mm_extract_epi64(zmm4, 1)
                        zmm1 = *(zmm4.q + rdi_9)
                        zmm0 = *(rbp_52 + rsi_25)
                        bool cond:72_1
                        bool cond:73_1
                        bool cond:80_1
                        bool cond:81_1
                        
                        if ((temp0_1719 & 1) == 0)
                            char temp24_1 = temp0_1719 & 2
                            cond:72_1 = temp24_1 != 0
                            cond:73_1 = temp24_1 == 0
                            cond:80_1 = temp24_1 != 0
                            cond:81_1 = temp24_1 == 0
                            
                            if (temp24_1 == 0)
                                goto label_14022c560
                            
                            goto label_14022c4cc
                        
                        zmm2 = *rbx_39
                        char temp23_1 = temp0_1719 & 2
                        cond:72_1 = temp23_1 != 0
                        cond:73_1 = temp23_1 == 0
                        cond:80_1 = temp23_1 != 0
                        cond:81_1 = temp23_1 == 0
                        
                        if (temp23_1 == 0)
                        label_14022c560:
                            zmm4 = var_588_4
                            arg5 = var_518_8
                            
                            if (cond:73_1)
                                goto label_14022c4e7
                            
                            goto label_14022c57f
                        
                    label_14022c4cc:
                        zmm2 = _mm_insert_ps(zmm2, arg9, 0x10)
                        zmm4 = var_588_4
                        arg5 = var_518_8
                        
                        if (not(cond:72_1))
                        label_14022c4e7:
                            
                            if (cond:81_1)
                                goto label_14022c58a
                            
                            goto label_14022c4ed
                        
                    label_14022c57f:
                        var_578_2 = _mm_insert_ps(var_578_2, arg7, 0x10)
                        bool cond:116_1
                        bool cond:117_1
                        bool cond:137_1
                        
                        if (not(cond:80_1))
                        label_14022c58a:
                            char temp38_1 = temp0_1719 & 4
                            cond:116_1 = temp38_1 == 0
                            cond:117_1 = temp38_1 == 0
                            cond:137_1 = temp38_1 == 0
                            arg6 = temp0_1088
                            arg7 = zmm4
                            
                            if (temp38_1 == 0)
                                goto label_14022c507
                            
                            goto label_14022c5a0
                        
                    label_14022c4ed:
                        zmm12 = _mm_insert_ps(zmm12, zmm3, 0x10)
                        char temp37_1 = temp0_1719 & 4
                        cond:116_1 = temp37_1 == 0
                        cond:117_1 = temp37_1 == 0
                        cond:137_1 = temp37_1 == 0
                        arg6 = temp0_1088
                        arg7 = zmm4
                        
                        if (temp37_1 != 0)
                        label_14022c5a0:
                            zmm4 = __insertps_xmmps_memd_immb(zmm2, var_428_4, 0x20)
                            arg9 = var_568_4
                            
                            if (not(cond:116_1))
                                var_578_2 = _mm_insert_ps(var_578_2, zmm9, 0x20)
                        else
                        label_14022c507:
                            arg9 = var_568_4
                            zmm4 = zmm2
                            
                            if (not(cond:117_1))
                                var_578_2 = _mm_insert_ps(var_578_2, zmm9, 0x20)
                        
                        zmm9 = var_548_4
                        bool cond:172_1
                        bool cond:173_1
                        bool cond:196_1
                        bool cond:197_1
                        
                        if (not(cond:137_1))
                            zmm12 = _mm_insert_ps(zmm12, zmm1, 0x20)
                            char temp59_1 = temp0_1719 & 8
                            cond:172_1 = temp59_1 == 0
                            cond:173_1 = temp59_1 != 0
                            cond:196_1 = temp59_1 == 0
                            cond:197_1 = temp59_1 != 0
                            
                            if (temp59_1 != 0)
                                goto label_14022c5f9
                            
                            goto label_14022c5d9
                        
                        char temp58_1 = temp0_1719 & 8
                        cond:172_1 = temp58_1 == 0
                        cond:173_1 = temp58_1 != 0
                        cond:196_1 = temp58_1 == 0
                        cond:197_1 = temp58_1 != 0
                        
                        if (temp58_1 != 0)
                        label_14022c5f9:
                            zmm4 = __insertps_xmmps_memd_immb(zmm4, var_508_3, 0x30)
                            
                            if (cond:173_1)
                                goto label_14022c5eb
                            
                            goto label_14022c606
                        
                    label_14022c5d9:
                        
                        if (cond:172_1)
                        label_14022c606:
                            
                            if (not(cond:196_1))
                                zmm12 = _mm_insert_ps(zmm12, zmm0, 0x30)
                        else
                        label_14022c5eb:
                            var_578_2 = __insertps_xmmps_memd_immb(var_578_2, var_498_4, 0x30)
                            
                            if (cond:197_1)
                                zmm12 = _mm_insert_ps(zmm12, zmm0, 0x30)
                    
                    arg10 &= not.o(arg9)
                    zmm3 = _mm_slli_epi32(arg10, 0x1f)
                    char temp0_1747 = _mm_movemask_ps(zmm3)
                    
                    if (temp0_1747 == 0)
                        arg10 = var_538_2
                    else
                        arg7 = zmm4
                        int32_t var_568_5[0x4] = zmm12
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f)
                        zmm3 = _mm_srai_epi32(zmm3, 0x1f) & zmm1
                        
                        if (_mm_movemask_ps(zmm3) == 0)
                            arg9 = var_4b8_2
                            zmm12 = var_4d8_3
                        else
                            zmm2 = data_1434426c0
                            zmm12 = var_4d8_3
                            arg5 = _mm_add_epi64(zmm12, zmm2)
                            int32_t temp0_1753[0x4] = _mm_add_epi64(var_4b8_2, zmm2)
                            zmm4 = _mm_unpacklo_ps(zmm3, zmm3[0].q)
                            arg9 = _mm_blendv_ps(var_4b8_2, temp0_1753, zmm4)
                            float temp0_1756[0x4] = _mm_unpackhi_ps(zmm3, zmm3)
                            zmm12 = _mm_blendv_ps(zmm12, arg5, temp0_1756)
                            arg5 = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                            int32_t temp0_1760[0x4] = __paddq_xmmdq_memdq(
                                __paddq_xmmdq_memdq(var_418_2, var_598_4), var_4c8_2)
                            arg5 = _mm_add_epi64(__paddq_xmmdq_memdq(arg5, var_488_4), zmm2)
                            zmm2 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_1760, zmm2), zmm4)
                            arg6 = _mm_blendv_ps(zx.o(0), arg5, temp0_1756)
                            zmm4 = *(arg4 + zmm2.q)
                            int64_t rax_392 = _mm_extract_epi64(zmm2, 1)
                            int64_t rbp_53 = arg6[0].q
                            int64_t rbx_40 = _mm_extract_epi64(arg6, 1)
                            zmm4 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm4, *(arg4 + rax_392), 0x10), 
                                    *(arg4 + rbp_53), 0x20), 
                                *(arg4 + rbx_40), 0x30)
                        
                        zmm0 = zmm1
                        float temp0_1769[0x4] = _mm_blendv_ps(zx.o(0), zmm4, zmm0)
                        
                        if ((temp0_1747 & 1) != 0)
                            arg7 = _mm_blend_ps(arg7, temp0_1769, 1)
                            arg5 = var_518_8
                            
                            if ((temp0_1747 & 2) != 0)
                                goto label_14022c790
                            
                            goto label_14022c771
                        
                        arg5 = var_518_8
                        
                        if ((temp0_1747 & 2) != 0)
                        label_14022c790:
                            arg7 = _mm_blend_ps(arg7, temp0_1769, 2)
                            
                            if ((temp0_1747 & 4) != 0)
                                goto label_14022c776
                            
                            goto label_14022c79b
                        
                    label_14022c771:
                        
                        if ((temp0_1747 & 4) == 0)
                        label_14022c79b:
                            
                            if ((temp0_1747 & 8) != 0)
                                arg7 = _mm_blend_ps(arg7, temp0_1769, 8)
                        else
                        label_14022c776:
                            arg7 = _mm_blend_ps(arg7, temp0_1769, 4)
                            
                            if ((temp0_1747 & 8) != 0)
                                arg7 = _mm_blend_ps(arg7, temp0_1769, 8)
                        
                        zmm4 = data_143442c40
                        zmm1 = temp0_1088 & zmm4
                        zmm4 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm4, zmm1) & arg10, 0x1f)
                        char temp0_1776 = _mm_movemask_ps(zmm4)
                        
                        if (temp0_1776 != 0)
                            zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                            zmm2 = data_1434426c0
                            arg5 = _mm_add_epi64(zmm12, zmm2)
                            float temp0_1781[0x4] = _mm_blendv_ps(arg9, _mm_add_epi64(zmm2, arg9), 
                                _mm_shuffle_epi32(zmm4, 0x50))
                            zmm0 = _mm_shuffle_epi32(zmm4, 0xfa)
                            zmm4 = _mm_blendv_ps(zmm12, arg5, zmm0)
                            
                            if ((temp0_1776 & 1) == 0)
                                if ((temp0_1776 & 2) != 0)
                                    goto label_14022cbc4
                                
                                goto label_14022c81f
                            
                            zmm0 = *arg9[0].q
                            
                            if ((temp0_1776 & 2) != 0)
                            label_14022cbc4:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg9, 1), 0x10)
                                arg5 = var_518_8
                                
                                if ((temp0_1776 & 4) == 0)
                                    goto label_14022c831
                                
                                goto label_14022cbe1
                            
                        label_14022c81f:
                            arg5 = var_518_8
                            
                            if ((temp0_1776 & 4) != 0)
                            label_14022cbe1:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm12[0].q, 0x20)
                                
                                if ((temp0_1776 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            else
                            label_14022c831:
                                
                                if ((temp0_1776 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            
                            arg9 = temp0_1781
                            zmm12 = zmm4
                        
                        zmm4 = arg7
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                        
                        if ((temp0_1747 & 1) != 0)
                            var_578_2 = _mm_blend_epi16(var_578_2, zmm1, 3)
                            
                            if ((temp0_1747 & 2) != 0)
                                goto label_14022c8a8
                            
                            goto label_14022c879
                        
                        if ((temp0_1747 & 2) != 0)
                        label_14022c8a8:
                            var_578_2 = _mm_blend_epi16(var_578_2, zmm1, 0xc)
                            
                            if ((temp0_1747 & 4) != 0)
                                goto label_14022c88a
                            
                            goto label_14022c8b3
                        
                    label_14022c879:
                        
                        if ((temp0_1747 & 4) == 0)
                        label_14022c8b3:
                            
                            if ((temp0_1747 & 8) != 0)
                                var_578_2 = _mm_blend_epi16(var_578_2, zmm1, 0xc0)
                        else
                        label_14022c88a:
                            var_578_2 = _mm_blend_epi16(var_578_2, zmm1, 0x30)
                            
                            if ((temp0_1747 & 8) != 0)
                                var_578_2 = _mm_blend_epi16(var_578_2, zmm1, 0xc0)
                        
                        zmm1 = data_143442c50
                        zmm0 = temp0_1088 & zmm1
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm0)
                        char temp0_1792 = _mm_movemask_ps(_mm_slli_epi32(arg10 & zmm1, 0x1f))
                        
                        if (temp0_1792 == 0)
                            arg7 = var_588_4
                            arg6 = temp0_1088
                            arg10 = var_538_2
                        else
                            arg10 = var_538_2
                            
                            if ((temp0_1792 & 1) == 0)
                                if ((temp0_1792 & 2) != 0)
                                    goto label_14022cc10
                                
                                goto label_14022c913
                            
                            zmm1 = *arg9[0].q
                            
                            if ((temp0_1792 & 2) != 0)
                            label_14022cc10:
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(arg9, 1), 0x10)
                                arg6 = temp0_1088
                                
                                if ((temp0_1792 & 4) == 0)
                                    goto label_14022c923
                                
                                goto label_14022cc2b
                            
                        label_14022c913:
                            arg6 = temp0_1088
                            
                            if ((temp0_1792 & 4) != 0)
                            label_14022cc2b:
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, *zmm12[0].q, 0x20)
                                
                                if ((temp0_1792 & 8) != 0)
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            else
                            label_14022c923:
                                
                                if ((temp0_1792 & 8) != 0)
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm12, 1), 0x30)
                            
                            arg7 = var_588_4
                        
                        zmm12 = var_568_5
                        zmm0 = _mm_cmpeq_epi32(zmm0, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_1747 & 1) != 0)
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 3)
                            
                            if ((temp0_1747 & 2) != 0)
                                goto label_14022c98d
                            
                            goto label_14022c975
                        
                        if ((temp0_1747 & 2) != 0)
                        label_14022c98d:
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc)
                            
                            if ((temp0_1747 & 4) != 0)
                                goto label_14022c97a
                            
                            goto label_14022c999
                        
                    label_14022c975:
                        
                        if ((temp0_1747 & 4) == 0)
                        label_14022c999:
                            
                            if ((temp0_1747 & 8) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                        else
                        label_14022c97a:
                            zmm12 = _mm_blend_epi16(zmm12, zmm0, 0x30)
                            
                            if ((temp0_1747 & 8) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm15 & var_4f8_7, 0x1f)) == 0)
                    arg9 = var_448_2
                    arg10 = var_408_3
                    zmm3 = var_458_5
                    arg11 = var_578_2
                else
                    float var_528_6[0x4] = zmm15
                    zmm15 = _mm_srai_epi32(_mm_slli_epi32(zmm15 & arg7, 0x1f), 0x1f)
                    char temp0_1803 = _mm_movemask_ps(zmm15)
                    
                    if (temp0_1803 == 0)
                        zmm15 = zmm4
                        arg9 = var_448_2
                        arg10 = var_408_3
                        zmm3 = var_458_5
                        zmm2 = var_528_6
                        arg11 = var_578_2
                    else
                        float var_498_5[0x4] = zmm4
                        zmm4 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f) & arg7
                        arg11 = _mm_srai_epi32(arg11, 0x1f) & zmm4
                        uint128_t var_508_4 = zx.o(0)
                        uint32_t temp0_1807 = _mm_movemask_ps(arg11)
                        uint128_t var_4e8_6
                        uint128_t var_428_5
                        
                        if (temp0_1807 == 0)
                            var_4e8_6 = zx.o(0)
                            var_428_5 = zx.o(0)
                            arg9 = var_448_2
                            arg10 = var_408_3
                            arg11 = var_578_2
                        else
                            zmm1 = data_1434426c0
                            arg6 = var_5a8_1
                            zmm2 = _mm_add_epi64(arg6, zmm1)
                            zmm3 = _mm_add_epi64(arg10, zmm1)
                            zmm9 = _mm_unpacklo_ps(arg11, arg11[0].q)
                            float temp0_1811[0x4] = _mm_blendv_ps(arg10, zmm3, zmm9)
                            arg11 = _mm_unpackhi_ps(arg11, arg11)
                            zmm0 = arg11
                            float temp0_1813[0x4] = _mm_blendv_ps(arg6, zmm2, zmm0)
                            char rbp_59 = temp0_1807.b
                            
                            if ((rbp_59 & 1) == 0)
                                if ((rbp_59 & 2) != 0)
                                    goto label_14022cc5a
                                
                                goto label_14022ca86
                            
                            zmm0 = *arg10[0].q
                            
                            if ((rbp_59 & 2) != 0)
                            label_14022cc5a:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg10, 1), 0x10)
                                
                                if ((rbp_59 & 4) == 0)
                                    goto label_14022ca90
                                
                                goto label_14022cc74
                            
                        label_14022ca86:
                            
                            if ((rbp_59 & 4) == 0)
                            label_14022ca90:
                                
                                if ((rbp_59 & 8) != 0)
                                    goto label_14022cc90
                                
                                goto label_14022ca9a
                            
                        label_14022cc74:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1.q, 0x20)
                            char rbx_41
                            
                            if ((rbp_59 & 8) != 0)
                            label_14022cc90:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                rbx_41 = _mm_movemask_ps(zmm4)
                                zmm2 = zx.o(0)
                                
                                if ((rbx_41 & 1) != 0)
                                    goto label_14022caaa
                                
                                goto label_14022cca6
                            
                        label_14022ca9a:
                            rbx_41 = _mm_movemask_ps(zmm4)
                            zmm2 = zx.o(0)
                            
                            if ((rbx_41 & 1) != 0)
                            label_14022caaa:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 3)
                                
                                if ((rbx_41 & 2) != 0)
                                    goto label_14022ccaf
                                
                                goto label_14022cab9
                            
                        label_14022cca6:
                            
                            if ((rbx_41 & 2) != 0)
                            label_14022ccaf:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc)
                                
                                if ((rbx_41 & 4) != 0)
                                    goto label_14022cac2
                                
                                goto label_14022ccbe
                            
                        label_14022cab9:
                            
                            if ((rbx_41 & 4) == 0)
                            label_14022ccbe:
                                
                                if ((rbx_41 & 8) != 0)
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc0)
                            else
                            label_14022cac2:
                                zmm2 = _mm_blend_epi16(zmm2, zmm0, 0x30)
                                
                                if ((rbx_41 & 8) != 0)
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc0)
                            
                            var_4e8_6 = zmm2
                            zmm2 = _mm_add_epi64(temp0_1813, zmm1)
                            var_538_2 =
                                _mm_blendv_ps(temp0_1811, _mm_add_epi64(zmm1, temp0_1811), zmm9)
                            zmm0 = arg11
                            var_5a8_1 = _mm_blendv_ps(temp0_1813, zmm2, zmm0)
                            
                            if ((rbp_59 & 1) != 0)
                                zmm0 = *temp0_1811[0].q
                            
                            arg9 = var_448_2
                            arg10 = var_408_3
                            arg6 = temp0_1088
                            arg11 = var_578_2
                            
                            if ((rbp_59 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_1811, 1), 0x10)
                                
                                if ((rbp_59 & 4) != 0)
                                label_14022cd7a:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_1813[0].q, 0x20)
                                    
                                    if ((rbp_59 & 8) == 0)
                                        goto label_14022cd3d
                                    
                                    goto label_14022cd8d
                            else if ((rbp_59 & 4) != 0)
                                goto label_14022cd7a
                            
                            if ((rbp_59 & 8) == 0)
                            label_14022cd3d:
                                zmm1 = zx.o(0)
                                
                                if ((rbx_41 & 1) == 0)
                                    goto label_14022cd9b
                                
                                goto label_14022cd45
                            
                        label_14022cd8d:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(temp0_1813, 1), 0x30)
                            zmm1 = zx.o(0)
                            
                            if ((rbx_41 & 1) == 0)
                            label_14022cd9b:
                                
                                if ((rbx_41 & 2) == 0)
                                    goto label_14022cd50
                                
                                goto label_14022cda0
                            
                        label_14022cd45:
                            zmm1 = _mm_blend_ps(zmm1, zmm0, 1)
                            
                            if ((rbx_41 & 2) == 0)
                            label_14022cd50:
                                
                                if ((rbx_41 & 4) == 0)
                                    goto label_14022cdab
                                
                                goto label_14022cd55
                            
                        label_14022cda0:
                            zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                            
                            if ((rbx_41 & 4) != 0)
                            label_14022cd55:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 4)
                                
                                if ((rbx_41 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                            label_14022cdab:
                                
                                if ((rbx_41 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            
                            var_428_5 = zmm1
                        
                        zmm0 = data_143442c40
                        zmm4 = _mm_cmpeq_epi32(arg6 & zmm0, zmm0) & arg7
                        zmm2 = _mm_slli_epi32(var_528_6 & zmm4, 0x1f)
                        char temp0_1842 = _mm_movemask_ps(zmm2)
                        int32_t var_568_6[0x4] = zmm12
                        
                        if (temp0_1842 == 0)
                            zmm9 = zx.o(0)
                        else
                            zmm12 = arg7
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm3 = data_1434426c0
                            arg6 = var_5a8_1
                            zmm1 = _mm_add_epi64(arg6, zmm3)
                            int32_t temp0_1845[0x4] = _mm_add_epi64(var_538_2, zmm3)
                            zmm9 = _mm_shuffle_epi32(zmm2, 0x50)
                            float temp0_1847[0x4] = _mm_blendv_ps(var_538_2, temp0_1845, zmm9)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                            zmm0 = zmm2
                            arg7 = _mm_blendv_ps(arg6, zmm1, zmm0)
                            
                            if ((temp0_1842 & 1) == 0)
                                if ((temp0_1842 & 2) != 0)
                                    goto label_14022ced0
                                
                                goto label_14022ce59
                            
                            zmm0 = *var_538_2.q
                            
                            if ((temp0_1842 & 2) != 0)
                            label_14022ced0:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_538_2, 1), 0x10)
                                
                                if ((temp0_1842 & 4) == 0)
                                    goto label_14022ce5f
                                
                                goto label_14022cee6
                            
                        label_14022ce59:
                            
                            if ((temp0_1842 & 4) == 0)
                            label_14022ce5f:
                                
                                if ((temp0_1842 & 8) != 0)
                                    goto label_14022cf02
                                
                                goto label_14022ce69
                            
                        label_14022cee6:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1.q, 0x20)
                            char rbx_42
                            
                            if ((temp0_1842 & 8) != 0)
                            label_14022cf02:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                rbx_42 = _mm_movemask_ps(zmm4)
                                zmm1 = zx.o(0)
                                
                                if ((rbx_42 & 1) != 0)
                                    goto label_14022ce79
                                
                                goto label_14022cf18
                            
                        label_14022ce69:
                            rbx_42 = _mm_movemask_ps(zmm4)
                            zmm1 = zx.o(0)
                            
                            if ((rbx_42 & 1) != 0)
                            label_14022ce79:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 3)
                                
                                if ((rbx_42 & 2) != 0)
                                    goto label_14022cf21
                                
                                goto label_14022ce88
                            
                        label_14022cf18:
                            
                            if ((rbx_42 & 2) != 0)
                            label_14022cf21:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc)
                                
                                if ((rbx_42 & 4) != 0)
                                    goto label_14022ce91
                                
                                goto label_14022cf30
                            
                        label_14022ce88:
                            
                            if ((rbx_42 & 4) == 0)
                            label_14022cf30:
                                
                                if ((rbx_42 & 8) != 0)
                                    zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                            else
                            label_14022ce91:
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0x30)
                                
                                if ((rbx_42 & 8) != 0)
                                    zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                            
                            var_508_4 = zmm1
                            zmm1 = _mm_add_epi64(arg7, zmm3)
                            var_538_2 =
                                _mm_blendv_ps(temp0_1847, _mm_add_epi64(zmm3, temp0_1847), zmm9)
                            zmm0 = zmm2
                            var_5a8_1 = _mm_blendv_ps(arg7, zmm1, zmm0)
                            
                            if ((temp0_1842 & 1) == 0)
                                if ((temp0_1842 & 2) != 0)
                                    goto label_14022d156
                                
                                goto label_14022cf85
                            
                            zmm0 = *temp0_1847[0].q
                            
                            if ((temp0_1842 & 2) != 0)
                            label_14022d156:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_1847, 1), 0x10)
                                
                                if ((temp0_1842 & 4) == 0)
                                    goto label_14022cf8f
                                
                                goto label_14022d16b
                            
                        label_14022cf85:
                            
                            if ((temp0_1842 & 4) != 0)
                            label_14022d16b:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg7[0].q, 0x20)
                                
                                if ((temp0_1842 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg7, 1), 0x30)
                            else
                            label_14022cf8f:
                                
                                if ((temp0_1842 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg7, 1), 0x30)
                            
                            arg6 = temp0_1088
                            arg7 = zmm12
                            zmm9 = zx.o(0)
                            
                            if ((rbx_42 & 1) != 0)
                                zmm9 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rbx_42 & 2) != 0)
                                    goto label_14022cfdb
                                
                                goto label_14022cfc3
                            
                            if ((rbx_42 & 2) != 0)
                            label_14022cfdb:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc)
                                
                                if ((rbx_42 & 4) != 0)
                                    goto label_14022cfc8
                                
                                goto label_14022cfe7
                            
                        label_14022cfc3:
                            
                            if ((rbx_42 & 4) == 0)
                            label_14022cfe7:
                                
                                if ((rbx_42 & 8) != 0)
                                    zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                            else
                            label_14022cfc8:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0x30)
                                
                                if ((rbx_42 & 8) != 0)
                                    zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                        
                        zmm0 = data_143442c50
                        zmm12 = arg7
                        zmm3 = _mm_cmpeq_epi32(arg6 & zmm0, zmm0) & arg7
                        zmm4 = _mm_slli_epi32(var_528_6 & zmm3, 0x1f)
                        char temp0_1870 = _mm_movemask_ps(zmm4)
                        zmm2 = zx.o(0)
                        arg5 = zx.o(0)
                        
                        if (temp0_1870 != 0)
                            zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                            zmm1 = data_1434426c0
                            zmm12 = var_5a8_1
                            zmm2 = _mm_add_epi64(zmm12, zmm1)
                            float temp0_1875[0x4] = _mm_blendv_ps(var_538_2, 
                                _mm_add_epi64(zmm1, var_538_2), _mm_shuffle_epi32(zmm4, 0x50))
                            zmm0 = _mm_shuffle_epi32(zmm4, 0xfa)
                            zmm12 = _mm_blendv_ps(zmm12, zmm2, zmm0)
                            
                            if ((temp0_1870 & 1) == 0)
                                if ((temp0_1870 & 2) != 0)
                                    goto label_14022d1a6
                                
                                goto label_14022d08b
                            
                            zmm0 = *var_538_2.q
                            
                            if ((temp0_1870 & 2) != 0)
                            label_14022d1a6:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_538_2, 1), 0x10)
                                
                                if ((temp0_1870 & 4) == 0)
                                    goto label_14022d095
                                
                                goto label_14022d1c0
                            
                        label_14022d08b:
                            
                            if ((temp0_1870 & 4) == 0)
                            label_14022d095:
                                
                                if ((temp0_1870 & 8) != 0)
                                    goto label_14022d1dc
                                
                                goto label_14022d09f
                            
                        label_14022d1c0:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_1.q, 0x20)
                            char rbx_43
                            
                            if ((temp0_1870 & 8) != 0)
                            label_14022d1dc:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_1, 1), 0x30)
                                rbx_43 = _mm_movemask_ps(zmm3)
                                zmm2 = zx.o(0)
                                
                                if ((rbx_43 & 1) != 0)
                                    goto label_14022d0ae
                                
                                goto label_14022d1f1
                            
                        label_14022d09f:
                            rbx_43 = _mm_movemask_ps(zmm3)
                            zmm2 = zx.o(0)
                            
                            if ((rbx_43 & 1) != 0)
                            label_14022d0ae:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 1)
                                
                                if ((rbx_43 & 2) != 0)
                                    goto label_14022d1fa
                                
                                goto label_14022d0bd
                            
                        label_14022d1f1:
                            
                            if ((rbx_43 & 2) != 0)
                            label_14022d1fa:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 2)
                                
                                if ((rbx_43 & 4) != 0)
                                    goto label_14022d0c6
                                
                                goto label_14022d209
                            
                        label_14022d0bd:
                            
                            if ((rbx_43 & 4) != 0)
                            label_14022d0c6:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 4)
                                
                                if ((rbx_43 & 8) != 0)
                                    goto label_14022d212
                                
                                goto label_14022d0d5
                            
                        label_14022d209:
                            
                            if ((rbx_43 & 8) != 0)
                            label_14022d212:
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                                
                                if ((temp0_1870 & 1) == 0)
                                    goto label_14022d0df
                                
                                goto label_14022d227
                            
                        label_14022d0d5:
                            
                            if ((temp0_1870 & 1) == 0)
                            label_14022d0df:
                                
                                if ((temp0_1870 & 2) != 0)
                                    goto label_14022d23c
                                
                                goto label_14022d0e9
                            
                        label_14022d227:
                            zmm0 = *temp0_1875[0].q
                            
                            if ((temp0_1870 & 2) != 0)
                            label_14022d23c:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_1875, 1), 0x10)
                                
                                if ((temp0_1870 & 4) == 0)
                                    goto label_14022d0f3
                                
                                goto label_14022d251
                            
                        label_14022d0e9:
                            
                            if ((temp0_1870 & 4) == 0)
                            label_14022d0f3:
                                
                                if ((temp0_1870 & 8) != 0)
                                    goto label_14022d268
                                
                                goto label_14022d0fd
                            
                        label_14022d251:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm12[0].q, 0x20)
                            
                            if ((temp0_1870 & 8) != 0)
                            label_14022d268:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm12, 1), 0x30)
                                zmm12 = var_588_4
                                arg5 = zx.o(0)
                                
                                if ((rbx_43 & 1) != 0)
                                    goto label_14022d110
                                
                                goto label_14022d281
                            
                        label_14022d0fd:
                            zmm12 = var_588_4
                            arg5 = zx.o(0)
                            
                            if ((rbx_43 & 1) != 0)
                            label_14022d110:
                                arg5 = _mm_blend_ps(arg5, zmm0, 1)
                                
                                if ((rbx_43 & 2) != 0)
                                    goto label_14022d28a
                                
                                goto label_14022d11f
                            
                        label_14022d281:
                            
                            if ((rbx_43 & 2) != 0)
                            label_14022d28a:
                                arg5 = _mm_blend_ps(arg5, zmm0, 2)
                                
                                if ((rbx_43 & 4) != 0)
                                    goto label_14022d128
                                
                                goto label_14022d299
                            
                        label_14022d11f:
                            
                            if ((rbx_43 & 4) == 0)
                            label_14022d299:
                                
                                if ((rbx_43 & 8) != 0)
                                    arg5 = _mm_blend_ps(arg5, zmm0, 8)
                            else
                            label_14022d128:
                                arg5 = _mm_blend_ps(arg5, zmm0, 4)
                                
                                if ((rbx_43 & 8) != 0)
                                    arg5 = _mm_blend_ps(arg5, zmm0, 8)
                        
                        zmm3 = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                        zmm4 = __paddq_xmmdq_memdq(var_418_2, var_598_4)
                        zmm0 = data_1434426c0
                        zmm4 = __paddq_xmmdq_memdq(zmm4, var_4c8_2)
                        zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm3, var_488_4), zmm0)
                        zmm1 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm4, zmm0), 
                            _mm_shuffle_epi32(zmm15, 0x50))
                        arg7 = _mm_blendv_ps(zx.o(0), zmm3, _mm_shuffle_epi32(zmm15, 0xfa))
                        int64_t rbp_64 = _mm_extract_epi64(zmm1, 1)
                        int64_t rbx_44 = _mm_extract_epi64(arg7, 1)
                        zmm0 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), *(arg4 + rbp_64), 
                                    1), 
                                *(arg4 + arg7[0].q), 2), 
                            *(arg4 + rbx_44), 3)
                        zmm1 = _mm_srli_epi32(zmm0, 0x15)
                        zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm4 = _mm_add_ps(var_4e8_6, 
                            _mm_mul_ps(var_428_5, 
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0)))
                        zmm0 = data_143442440
                        float temp0_1917[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                        arg6 = data_143442690
                        zmm9 = _mm_mul_ps(zmm9, _mm_div_ps(temp0_1917, arg6))
                        zmm0 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm0)), arg6)
                        char temp57_1 = temp0_1803 & 1
                        
                        if (temp57_1 == 0)
                            arg6 = temp0_1088
                            zmm3 = var_458_5
                            arg7 = zmm12
                            zmm15 = var_498_5
                        else
                            zmm15 = _mm_blend_ps(var_498_5, zmm4, 1)
                            arg6 = temp0_1088
                            zmm3 = var_458_5
                            arg7 = zmm12
                        
                        float temp0_1924[0x4] = _mm_mul_ps(arg5, zmm0)
                        zmm1 = _mm_add_ps(var_508_4, zmm9)
                        zmm12 = var_568_6
                        
                        if (temp57_1 != 0)
                            arg11 = _mm_blend_ps(arg11, zmm1, 1)
                            zmm9 = var_548_4
                            zmm2 = _mm_add_ps(zmm2, temp0_1924)
                            
                            if (temp57_1 != 0)
                                goto label_14022d631
                            
                            goto label_14022d421
                        
                        zmm9 = var_548_4
                        zmm2 = _mm_add_ps(zmm2, temp0_1924)
                        bool cond:241_1
                        bool cond:242_1
                        bool cond:266_1
                        bool cond:267_1
                        
                        if (temp57_1 != 0)
                        label_14022d631:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 1)
                            arg5 = var_518_8
                            char temp98_1 = temp0_1803 & 2
                            cond:241_1 = temp98_1 == 0
                            cond:242_1 = temp98_1 != 0
                            cond:266_1 = temp98_1 == 0
                            cond:267_1 = temp98_1 != 0
                            
                            if (temp98_1 != 0)
                                goto label_14022d432
                            
                            goto label_14022d649
                        
                    label_14022d421:
                        arg5 = var_518_8
                        char temp97_1 = temp0_1803 & 2
                        cond:241_1 = temp97_1 == 0
                        cond:242_1 = temp97_1 != 0
                        cond:266_1 = temp97_1 == 0
                        cond:267_1 = temp97_1 != 0
                        
                        if (temp97_1 == 0)
                        label_14022d649:
                            
                            if (not(cond:241_1))
                            label_14022d64f:
                                arg11 = _mm_blend_ps(arg11, zmm1, 2)
                                
                                if (cond:267_1)
                                    goto label_14022d445
                                
                                goto label_14022d65c
                        else
                        label_14022d432:
                            zmm15 = _mm_blend_ps(zmm15, zmm4, 2)
                            
                            if (cond:242_1)
                                goto label_14022d64f
                        
                        bool cond:305_1
                        bool cond:306_1
                        bool cond:323_1
                        bool cond:324_1
                        
                        if (not(cond:266_1))
                        label_14022d445:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 2)
                            char temp120_1 = temp0_1803 & 4
                            cond:305_1 = temp120_1 == 0
                            cond:306_1 = temp120_1 != 0
                            cond:323_1 = temp120_1 == 0
                            cond:324_1 = temp120_1 != 0
                            
                            if (temp120_1 != 0)
                                goto label_14022d665
                            
                            goto label_14022d455
                        
                    label_14022d65c:
                        char temp119_1 = temp0_1803 & 4
                        cond:305_1 = temp119_1 == 0
                        cond:306_1 = temp119_1 != 0
                        cond:323_1 = temp119_1 == 0
                        cond:324_1 = temp119_1 != 0
                        
                        if (temp119_1 == 0)
                        label_14022d455:
                            
                            if (not(cond:305_1))
                            label_14022d45b:
                                arg11 = _mm_blend_ps(arg11, zmm1, 4)
                                
                                if (cond:324_1)
                                    goto label_14022d678
                                
                                goto label_14022d468
                        else
                        label_14022d665:
                            zmm15 = _mm_blend_ps(zmm15, zmm4, 4)
                            
                            if (cond:306_1)
                                goto label_14022d45b
                        
                        bool cond:343_1
                        bool cond:344_1
                        bool cond:355_1
                        bool cond:356_1
                        
                        if (not(cond:323_1))
                        label_14022d678:
                            zmm12 = _mm_blend_ps(zmm12, zmm2, 4)
                            char temp134_1 = temp0_1803 & 8
                            cond:343_1 = temp134_1 == 0
                            cond:344_1 = temp134_1 != 0
                            cond:355_1 = temp134_1 == 0
                            cond:356_1 = temp134_1 != 0
                            
                            if (temp134_1 != 0)
                                goto label_14022d471
                            
                            goto label_14022d688
                        
                    label_14022d468:
                        char temp133_1 = temp0_1803 & 8
                        cond:343_1 = temp133_1 == 0
                        cond:344_1 = temp133_1 != 0
                        cond:355_1 = temp133_1 == 0
                        cond:356_1 = temp133_1 != 0
                        
                        if (temp133_1 != 0)
                        label_14022d471:
                            zmm15 = _mm_blend_ps(zmm15, zmm4, 8)
                            
                            if (cond:344_1)
                                goto label_14022d68e
                            
                            goto label_14022d47e
                        
                    label_14022d688:
                        
                        if (cond:343_1)
                        label_14022d47e:
                            
                            if (not(cond:355_1))
                                zmm12 = _mm_blend_ps(zmm12, zmm2, 8)
                        else
                        label_14022d68e:
                            arg11 = _mm_blend_ps(arg11, zmm1, 8)
                            
                            if (cond:356_1)
                                zmm12 = _mm_blend_ps(zmm12, zmm2, 8)
                        
                        zmm2 = var_528_6
                    
                    arg7 ^= var_4f8_7
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm2 & arg7, 0x1f)) == 0)
                        zmm4 = zmm15
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_478_4)
                        zmm4 = zmm2 & zmm0
                        zmm1 = _mm_slli_epi32(zmm4, 0x1f)
                        char temp0_1937 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_1937 == 0)
                            zmm4 = zmm15
                        else
                            uint128_t var_5a8_2 = zmm0
                            zmm0 = _mm_srai_epi32(_mm_slli_epi32(var_4a8_4, 0x1f), 0x1f)
                            uint128_t var_4a8_5 = zmm0
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm0
                            int32_t var_588_5[0x4] = arg7
                            int32_t var_568_7[0x4] = zmm12
                            zmm12 = arg6
                            
                            if (_mm_movemask_ps(zmm1) != 0)
                                arg5 = data_1434426b0
                                zmm3 = var_4d8_3
                                int32_t temp0_1942[0x4] = _mm_add_epi64(zmm3, arg5)
                                arg7 = var_4b8_2
                                arg5 = _mm_add_epi64(arg5, arg7)
                                zmm2 = _mm_unpacklo_ps(zmm1, zmm1.q)
                                var_4b8_2 = _mm_blendv_ps(arg7, arg5, zmm2)
                                zmm1 = _mm_unpackhi_ps(zmm1, zmm1)
                                var_4d8_3 = _mm_blendv_ps(zmm3, temp0_1942, zmm1)
                                int32_t temp0_1948[0x4] = __paddq_xmmdq_memdq(var_438_2, var_468_2)
                                zmm3 = __paddq_xmmdq_memdq(var_418_2, var_598_4)
                                zmm0 = data_1434426c0
                                zmm3 = __paddq_xmmdq_memdq(zmm3, var_4c8_2)
                                int32_t temp0_1952[0x4] =
                                    _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1948, var_488_4), zmm0)
                                arg6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm3, zmm0), zmm2)
                                float temp0_1955[0x4] = _mm_blendv_ps(zx.o(0), temp0_1952, zmm1)
                                int64_t rax_435 = _mm_extract_epi64(arg6, 1)
                                int64_t rbp_65 = arg6[0].q
                                int64_t rbx_45 = temp0_1955[0].q
                                int64_t rdi_11 = _mm_extract_epi64(temp0_1955, 1)
                                zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbp_65)), 
                                                *(arg4 + rax_435), 1), 
                                            *(arg4 + rbx_45), 2), 
                                        *(arg4 + rdi_11), 3).q), 
                                    data_143442b40))
                            
                            zmm1 = _mm_blendv_ps(zx.o(0), zmm2, var_4a8_5)
                            
                            if ((temp0_1937 & 1) != 0)
                                zmm15 = _mm_blend_ps(zmm15, zmm1, 1)
                            
                            zmm0 = zmm12
                            arg11 = arg11
                            zmm12 = var_568_7
                            
                            if ((temp0_1937 & 2) != 0)
                                zmm15 = _mm_blend_ps(zmm15, zmm1, 2)
                                
                                if ((temp0_1937 & 4) != 0)
                                    goto label_14022d7dc
                                
                                goto label_14022d6fd
                            
                            if ((temp0_1937 & 4) == 0)
                            label_14022d6fd:
                                
                                if ((temp0_1937 & 8) != 0)
                                    zmm15 = _mm_blend_ps(zmm15, zmm1, 8)
                            else
                            label_14022d7dc:
                                zmm15 = _mm_blend_ps(zmm15, zmm1, 4)
                                
                                if ((temp0_1937 & 8) != 0)
                                    zmm15 = _mm_blend_ps(zmm15, zmm1, 8)
                            
                            zmm1 = data_143442c40
                            arg5 = zmm0 & zmm1
                            zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, arg5) & zmm4, 0x1f)
                            char temp0_1974 = _mm_movemask_ps(zmm1)
                            
                            if (temp0_1974 == 0)
                                arg7 = zmm0
                                zmm2 = var_4b8_2
                                zmm1 = var_4d8_3
                            else
                                zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                                arg6 = data_1434426b0
                                zmm3 = var_4d8_3
                                int32_t temp0_1976[0x4] = _mm_add_epi64(zmm3, arg6)
                                zmm2 = var_4b8_2
                                zmm2 = _mm_blendv_ps(zmm2, _mm_add_epi64(arg6, zmm2), 
                                    _mm_shuffle_epi32(zmm1, 0x50))
                                zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                                zmm1 = _mm_blendv_ps(zmm3, temp0_1976, zmm0)
                                
                                if ((temp0_1974 & 1) == 0)
                                    if ((temp0_1974 & 2) != 0)
                                        goto label_14022dd96
                                    
                                    goto label_14022d78d
                                
                                zmm0 = zx.o(*var_4b8_2.q)
                                
                                if ((temp0_1974 & 2) != 0)
                                label_14022dd96:
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_4b8_2, 1)), 1)
                                    arg7 = temp0_1088
                                    
                                    if ((temp0_1974 & 4) == 0)
                                        goto label_14022d79d
                                    
                                    goto label_14022ddbd
                                
                            label_14022d78d:
                                arg7 = temp0_1088
                                
                                if ((temp0_1974 & 4) != 0)
                                label_14022ddbd:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*var_4d8_3[0].q), 2)
                                    
                                    if ((temp0_1974 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(var_4d8_3, 1)), 3)
                                else
                                label_14022d79d:
                                    
                                    if ((temp0_1974 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(var_4d8_3, 1)), 3)
                                
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_blend_epi16(zx.o(0), zmm0, 0x55), data_143442b40))
                            
                            arg5 = _mm_cmpeq_epi32(arg5, zx.o(0)) & not.o(zmm0)
                            
                            if ((temp0_1937 & 1) != 0)
                                arg11 = _mm_blend_epi16(arg11, arg5, 3)
                            
                            zmm3 = var_458_5
                            arg6 = arg7
                            arg7 = var_588_5
                            
                            if ((temp0_1937 & 2) != 0)
                                arg11 = _mm_blend_epi16(arg11, arg5, 0xc)
                                
                                if ((temp0_1937 & 4) != 0)
                                    goto label_14022d8e2
                                
                                goto label_14022d848
                            
                            if ((temp0_1937 & 4) == 0)
                            label_14022d848:
                                
                                if ((temp0_1937 & 8) != 0)
                                    arg11 = _mm_blend_epi16(arg11, arg5, 0xc0)
                            else
                            label_14022d8e2:
                                arg11 = _mm_blend_epi16(arg11, arg5, 0x30)
                                
                                if ((temp0_1937 & 8) != 0)
                                    arg11 = _mm_blend_epi16(arg11, arg5, 0xc0)
                            
                            arg5 = var_518_8
                            zmm0 = data_143442c50
                            arg6 &= zmm0
                            zmm0 = _mm_cmpeq_epi32(zmm0, arg6)
                            char temp0_1993 = _mm_movemask_ps(_mm_slli_epi32(zmm4 & zmm0, 0x1f))
                            
                            if (temp0_1993 == 0)
                                zmm4 = zmm15
                                zmm2 = var_528_6
                            else
                                if ((temp0_1993 & 1) == 0)
                                    if ((temp0_1993 & 2) != 0)
                                        goto label_14022ddf2
                                    
                                    goto label_14022d895
                                
                                zmm0 = zx.o(*zmm2.q)
                                
                                if ((temp0_1993 & 2) != 0)
                                label_14022ddf2:
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                    zmm4 = zmm15
                                    zmm2 = var_528_6
                                    
                                    if ((temp0_1993 & 4) == 0)
                                        goto label_14022d8ac
                                    
                                    goto label_14022de17
                                
                            label_14022d895:
                                zmm4 = zmm15
                                zmm2 = var_528_6
                                
                                if ((temp0_1993 & 4) != 0)
                                label_14022de17:
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm1.q), 2)
                                    
                                    if ((temp0_1993 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                else
                                label_14022d8ac:
                                    
                                    if ((temp0_1993 & 8) != 0)
                                        zmm0 = _mm_insert_epi32(zmm0, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                                
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_blend_epi16(zx.o(0), zmm0, 0x55), data_143442b40))
                            
                            arg6 = _mm_cmpeq_epi32(arg6, zx.o(0)) & not.o(zmm0)
                            
                            if ((temp0_1937 & 1) != 0)
                                zmm12 = _mm_blend_epi16(zmm12, arg6, 3)
                                zmm0 = var_5a8_2
                                
                                if ((temp0_1937 & 2) != 0)
                                    goto label_14022d943
                                
                                goto label_14022d926
                            
                            zmm0 = var_5a8_2
                            
                            if ((temp0_1937 & 2) != 0)
                            label_14022d943:
                                zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc)
                                
                                if ((temp0_1937 & 4) != 0)
                                    goto label_14022d92b
                                
                                goto label_14022d94f
                            
                        label_14022d926:
                            
                            if ((temp0_1937 & 4) == 0)
                            label_14022d94f:
                                
                                if ((temp0_1937 & 8) != 0)
                                    zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc0)
                            else
                            label_14022d92b:
                                zmm12 = _mm_blend_epi16(zmm12, arg6, 0x30)
                                
                                if ((temp0_1937 & 8) != 0)
                                    zmm12 = _mm_blend_epi16(zmm12, arg6, 0xc0)
                        
                        arg7 = (arg7 ^ zmm0) & zmm2
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(arg7, 0x1f)) != 0)
                            zmm0 = __pcmpeqd_xmmdq_memdq(var_478_4, data_143442ad0)
                            char temp0_2008 = _mm_movemask_ps(_mm_slli_epi32(zmm2 & zmm0, 0x1f))
                            
                            if (temp0_2008 != 0)
                                char temp70_1 = temp0_2008 & 1
                                
                                if (temp70_1 != 0)
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 1)
                                    
                                    if (temp70_1 != 0)
                                        goto label_14022d9f7
                                else if (temp70_1 != 0)
                                label_14022d9f7:
                                    arg11 = _mm_blend_ps(arg11, zx.o(0), 1)
                                    
                                    if (temp70_1 != 0)
                                        goto label_14022d9b6
                                    
                                    goto label_14022da00
                                
                                bool cond:264_1
                                bool cond:265_1
                                bool cond:288_1
                                bool cond:289_1
                                
                                if (temp70_1 != 0)
                                label_14022d9b6:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 1)
                                    char temp96_1 = temp0_2008 & 2
                                    cond:264_1 = temp96_1 == 0
                                    cond:265_1 = temp96_1 != 0
                                    cond:288_1 = temp96_1 == 0
                                    cond:289_1 = temp96_1 != 0
                                    
                                    if (temp96_1 != 0)
                                        goto label_14022da05
                                    
                                    goto label_14022d9c2
                                
                            label_14022da00:
                                char temp95_1 = temp0_2008 & 2
                                cond:264_1 = temp95_1 == 0
                                cond:265_1 = temp95_1 != 0
                                cond:288_1 = temp95_1 == 0
                                cond:289_1 = temp95_1 != 0
                                
                                if (temp95_1 == 0)
                                label_14022d9c2:
                                    
                                    if (not(cond:264_1))
                                    label_14022d9c4:
                                        arg11 = _mm_blend_ps(arg11, zx.o(0), 2)
                                        
                                        if (cond:289_1)
                                            goto label_14022da0f
                                        
                                        goto label_14022d9cd
                                else
                                label_14022da05:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 2)
                                    
                                    if (cond:265_1)
                                        goto label_14022d9c4
                                
                                bool cond:321_1
                                bool cond:322_1
                                bool cond:337_1
                                bool cond:338_1
                                
                                if (not(cond:288_1))
                                label_14022da0f:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 2)
                                    char temp118_1 = temp0_2008 & 4
                                    cond:321_1 = temp118_1 == 0
                                    cond:322_1 = temp118_1 != 0
                                    cond:337_1 = temp118_1 == 0
                                    cond:338_1 = temp118_1 != 0
                                    
                                    if (temp118_1 != 0)
                                        goto label_14022d9d2
                                    
                                    goto label_14022da1b
                                
                            label_14022d9cd:
                                char temp117_1 = temp0_2008 & 4
                                cond:321_1 = temp117_1 == 0
                                cond:322_1 = temp117_1 != 0
                                cond:337_1 = temp117_1 == 0
                                cond:338_1 = temp117_1 != 0
                                
                                if (temp117_1 == 0)
                                label_14022da1b:
                                    
                                    if (not(cond:321_1))
                                    label_14022da1d:
                                        arg11 = _mm_blend_ps(arg11, zx.o(0), 4)
                                        
                                        if (cond:338_1)
                                            goto label_14022d9dc
                                        
                                        goto label_14022da26
                                else
                                label_14022d9d2:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 4)
                                    
                                    if (cond:322_1)
                                        goto label_14022da1d
                                
                                bool cond:353_1
                                bool cond:354_1
                                bool cond:365_1
                                bool cond:366_1
                                
                                if (not(cond:337_1))
                                label_14022d9dc:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 4)
                                    char temp132_1 = temp0_2008 & 8
                                    cond:353_1 = temp132_1 == 0
                                    cond:354_1 = temp132_1 != 0
                                    cond:365_1 = temp132_1 == 0
                                    cond:366_1 = temp132_1 != 0
                                    
                                    if (temp132_1 != 0)
                                        goto label_14022da2b
                                    
                                    goto label_14022d9e8
                                
                            label_14022da26:
                                char temp131_1 = temp0_2008 & 8
                                cond:353_1 = temp131_1 == 0
                                cond:354_1 = temp131_1 != 0
                                cond:365_1 = temp131_1 == 0
                                cond:366_1 = temp131_1 != 0
                                
                                if (temp131_1 != 0)
                                label_14022da2b:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 8)
                                    
                                    if (cond:354_1)
                                        goto label_14022d9ea
                                    
                                    goto label_14022da33
                                
                            label_14022d9e8:
                                
                                if (cond:353_1)
                                label_14022da33:
                                    
                                    if (not(cond:365_1))
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                                else
                                label_14022d9ea:
                                    arg11 = _mm_blend_ps(arg11, zx.o(0), 8)
                                    
                                    if (cond:366_1)
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                            
                            char temp0_2022 =
                                _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(arg7), 0x1f))
                            
                            if (temp0_2022 != 0)
                                char temp77_1 = temp0_2022 & 1
                                
                                if (temp77_1 != 0)
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 1)
                                    
                                    if (temp77_1 != 0)
                                        goto label_14022daa7
                                else if (temp77_1 != 0)
                                label_14022daa7:
                                    arg11 = _mm_blend_ps(arg11, zx.o(0), 1)
                                    
                                    if (temp77_1 != 0)
                                        goto label_14022da66
                                    
                                    goto label_14022dab0
                                
                                bool cond:286_1
                                bool cond:287_1
                                bool cond:303_1
                                bool cond:304_1
                                
                                if (temp77_1 != 0)
                                label_14022da66:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 1)
                                    char temp104_1 = temp0_2022 & 2
                                    cond:286_1 = temp104_1 == 0
                                    cond:287_1 = temp104_1 != 0
                                    cond:303_1 = temp104_1 == 0
                                    cond:304_1 = temp104_1 != 0
                                    
                                    if (temp104_1 != 0)
                                        goto label_14022dab5
                                    
                                    goto label_14022da72
                                
                            label_14022dab0:
                                char temp103_1 = temp0_2022 & 2
                                cond:286_1 = temp103_1 == 0
                                cond:287_1 = temp103_1 != 0
                                cond:303_1 = temp103_1 == 0
                                cond:304_1 = temp103_1 != 0
                                
                                if (temp103_1 == 0)
                                label_14022da72:
                                    
                                    if (not(cond:286_1))
                                    label_14022da74:
                                        arg11 = _mm_blend_ps(arg11, zx.o(0), 2)
                                        
                                        if (cond:304_1)
                                            goto label_14022dabf
                                        
                                        goto label_14022da7d
                                else
                                label_14022dab5:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 2)
                                    
                                    if (cond:287_1)
                                        goto label_14022da74
                                
                                bool cond:335_1
                                bool cond:336_1
                                bool cond:341_1
                                bool cond:342_1
                                
                                if (not(cond:303_1))
                                label_14022dabf:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 2)
                                    char temp124_1 = temp0_2022 & 4
                                    cond:335_1 = temp124_1 == 0
                                    cond:336_1 = temp124_1 != 0
                                    cond:341_1 = temp124_1 == 0
                                    cond:342_1 = temp124_1 != 0
                                    
                                    if (temp124_1 != 0)
                                        goto label_14022da82
                                    
                                    goto label_14022dacb
                                
                            label_14022da7d:
                                char temp123_1 = temp0_2022 & 4
                                cond:335_1 = temp123_1 == 0
                                cond:336_1 = temp123_1 != 0
                                cond:341_1 = temp123_1 == 0
                                cond:342_1 = temp123_1 != 0
                                
                                if (temp123_1 == 0)
                                label_14022dacb:
                                    
                                    if (not(cond:335_1))
                                    label_14022dacd:
                                        arg11 = _mm_blend_ps(arg11, zx.o(0), 4)
                                        
                                        if (cond:342_1)
                                            goto label_14022da8c
                                        
                                        goto label_14022dad6
                                else
                                label_14022da82:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 4)
                                    
                                    if (cond:336_1)
                                        goto label_14022dacd
                                
                                bool cond:363_1
                                bool cond:364_1
                                bool cond:371_1
                                bool cond:372_1
                                
                                if (not(cond:341_1))
                                label_14022da8c:
                                    zmm12 = _mm_blend_ps(zmm12, zx.o(0), 4)
                                    char temp136_1 = temp0_2022 & 8
                                    cond:363_1 = temp136_1 == 0
                                    cond:364_1 = temp136_1 != 0
                                    cond:371_1 = temp136_1 == 0
                                    cond:372_1 = temp136_1 != 0
                                    
                                    if (temp136_1 != 0)
                                        goto label_14022dadb
                                    
                                    goto label_14022da98
                                
                            label_14022dad6:
                                char temp135_1 = temp0_2022 & 8
                                cond:363_1 = temp135_1 == 0
                                cond:364_1 = temp135_1 != 0
                                cond:371_1 = temp135_1 == 0
                                cond:372_1 = temp135_1 != 0
                                
                                if (temp135_1 != 0)
                                label_14022dadb:
                                    zmm4 = _mm_blend_ps(zmm4, zx.o(0), 8)
                                    
                                    if (cond:364_1)
                                        goto label_14022da9a
                                    
                                    goto label_14022dae3
                                
                            label_14022da98:
                                
                                if (cond:363_1)
                                label_14022dae3:
                                    
                                    if (not(cond:371_1))
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                                else
                                label_14022da9a:
                                    arg11 = _mm_blend_ps(arg11, zx.o(0), 8)
                                    
                                    if (cond:372_1)
                                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                
                zmm4 = _mm_sub_ps(zmm4, arg8)
                arg11 = _mm_sub_ps(arg11, arg5)
                zmm4 = _mm_mul_ps(zmm4, zmm9)
                zmm1 = arg8
                char temp29_1 = temp0_1706 & 1
                
                if (temp29_1 != 0)
                    zmm1.d = arg8.d f+ zmm4.d
                    zmm12 = _mm_sub_ps(zmm12, zmm3)
                    arg11 = _mm_mul_ps(arg11, zmm9)
                    zmm2 = arg5
                    
                    if (temp29_1 != 0)
                        goto label_14022dce5
                    
                    goto label_14022db21
                
                zmm12 = _mm_sub_ps(zmm12, zmm3)
                arg11 = _mm_mul_ps(arg11, zmm9)
                zmm2 = arg5
                
                if (temp29_1 != 0)
                label_14022dce5:
                    zmm2.d = arg5.d f+ arg11[0]
                    zmm9 = _mm_mul_ps(zmm9, zmm12)
                    zmm0 = zmm3
                    
                    if (temp29_1 != 0)
                        goto label_14022db31
                    
                    goto label_14022dcf7
                
            label_14022db21:
                zmm9 = _mm_mul_ps(zmm9, zmm12)
                zmm0 = zmm3
                bool cond:135_1
                bool cond:136_1
                bool cond:152_1
                bool cond:153_1
                
                if (temp29_1 != 0)
                label_14022db31:
                    zmm0.d = zmm3.d f+ zmm9.d
                    arg8 = _mm_add_ps(arg8, zmm4)
                    char temp47_1 = temp0_1706 & 2
                    cond:135_1 = temp47_1 == 0
                    cond:136_1 = temp47_1 != 0
                    cond:152_1 = temp47_1 == 0
                    cond:153_1 = temp47_1 != 0
                    
                    if (temp47_1 != 0)
                        goto label_14022dd04
                    
                    goto label_14022db43
                
            label_14022dcf7:
                arg8 = _mm_add_ps(arg8, zmm4)
                char temp46_1 = temp0_1706 & 2
                cond:135_1 = temp46_1 == 0
                cond:136_1 = temp46_1 != 0
                cond:152_1 = temp46_1 == 0
                cond:153_1 = temp46_1 != 0
                
                if (temp46_1 != 0)
                label_14022dd04:
                    zmm1 = _mm_blend_ps(zmm1, arg8, 2)
                    arg5 = _mm_add_ps(arg5, arg11)
                    
                    if (cond:136_1)
                        goto label_14022db4d
                    
                    goto label_14022dd15
                
            label_14022db43:
                arg5 = _mm_add_ps(arg5, arg11)
                
                if (not(cond:135_1))
                label_14022db4d:
                    zmm2 = _mm_blend_ps(zmm2, arg5, 2)
                    zmm3 = _mm_add_ps(zmm3, zmm9)
                    
                    if (cond:153_1)
                        goto label_14022dd1f
                    
                    goto label_14022db5d
                
            label_14022dd15:
                zmm3 = _mm_add_ps(zmm3, zmm9)
                bool cond:189_1
                bool cond:190_1
                bool cond:215_1
                bool cond:216_1
                
                if (not(cond:152_1))
                label_14022dd1f:
                    zmm0 = _mm_blend_ps(zmm0, zmm3, 2)
                    char temp69_1 = temp0_1706 & 4
                    cond:189_1 = temp69_1 == 0
                    cond:190_1 = temp69_1 != 0
                    cond:215_1 = temp69_1 == 0
                    cond:216_1 = temp69_1 != 0
                    
                    if (temp69_1 != 0)
                        goto label_14022db66
                    
                    goto label_14022dd2e
                
            label_14022db5d:
                char temp68_1 = temp0_1706 & 4
                cond:189_1 = temp68_1 == 0
                cond:190_1 = temp68_1 != 0
                cond:215_1 = temp68_1 == 0
                cond:216_1 = temp68_1 != 0
                
                if (temp68_1 == 0)
                label_14022dd2e:
                    
                    if (not(cond:189_1))
                    label_14022dd34:
                        zmm2 = _mm_blend_ps(zmm2, arg5, 4)
                        
                        if (cond:216_1)
                            goto label_14022db79
                        
                        goto label_14022dd40
                else
                label_14022db66:
                    zmm1 = _mm_blend_ps(zmm1, arg8, 4)
                    
                    if (cond:190_1)
                        goto label_14022dd34
                
                bool cond:262_1
                bool cond:263_1
                bool cond:284_1
                bool cond:285_1
                
                if (not(cond:215_1))
                label_14022db79:
                    zmm0 = _mm_blend_ps(zmm0, zmm3, 4)
                    char temp94_1 = temp0_1706 & 8
                    cond:262_1 = temp94_1 == 0
                    cond:263_1 = temp94_1 != 0
                    cond:284_1 = temp94_1 != 0
                    cond:285_1 = temp94_1 == 0
                    
                    if (temp94_1 != 0)
                        goto label_14022dd49
                    
                    goto label_14022db88
                
            label_14022dd40:
                char temp93_1 = temp0_1706 & 8
                cond:262_1 = temp93_1 == 0
                cond:263_1 = temp93_1 != 0
                cond:284_1 = temp93_1 != 0
                cond:285_1 = temp93_1 == 0
                
                if (temp93_1 != 0)
                label_14022dd49:
                    arg8 = _mm_blend_ps(arg8, zmm1, 7)
                    
                    if (cond:263_1)
                        goto label_14022db92
                    
                    goto label_14022dd56
                
            label_14022db88:
                arg8 = zmm1
                
                if (cond:262_1)
                label_14022dd56:
                    arg5 = zmm2
                    
                    if (cond:284_1)
                        zmm0 = _mm_blend_ps(zmm0, zmm3, 8)
                else
                label_14022db92:
                    arg5 = _mm_blend_ps(arg5, zmm2, 7)
                    
                    if (not(cond:285_1))
                        zmm0 = _mm_blend_ps(zmm0, zmm3, 8)
                
                arg6 = zmm0
                rcx_96 = _mm_movemask_ps(_mm_and_ps(arg10, arg9))
                
                if (rcx_96 != 0)
                    goto label_140229da7
        zmm1 = _mm_unpacklo_ps(arg6, 0)
        zmm2 = _mm_unpackhi_ps(arg6, zx.o(0))
        zmm0 = _mm_unpacklo_ps(arg8, arg5[0].q)
        arg8 = _mm_unpackhi_ps(arg8, arg5)
        float var_168[0x4] = _mm_insert_ps(zmm0, arg6, 0x28)
        uint128_t var_158_1 = _mm_unpackhi_pd(zmm0, zmm1.q)
        uint128_t var_148_1 = _mm_insert_ps(arg8, arg6, 0xa8)
        int32_t var_138_1[0x4] = _mm_unpackhi_pd(arg8, zmm2.q)
        uint64_t i_4 = zx.q(_mm_movemask_ps(arg9))
        
        do
            uint64_t rcx_107
            uint64_t rflags_1
            
            if (i_4 == 0)
                rcx_107 = 0x40
            else
                rcx_107, rflags_1 = _bit_scan_forward(i_4)
            uint128_t var_178 = zmm10
            result = sx.q(*(&var_178 + ((zx.q(rcx_107.d) & 3) << 2))) * 0x30
            *(arg1 + result + 0x10) = (&var_168)[rcx_107]
            i_4 &= rol.q(-2, rcx_107.b)
        while (i_4 != 0)
else
    uint128_t var_188_1 = _mm_shuffle_epi32(_mm_add_epi64(4, zx.o(arg4)), 0x44)
    uint128_t var_2d8_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t rbp_1
    rbp_1.b = 0f f>= zmm2.d
    uint128_t var_198_1 = _mm_shuffle_epi32(zx.o(neg.d(rbp_1)), 0)
    zmm3[0] = float.s(arg12 - 1)
    zmm3[0] = zmm3[0] f* zmm2.d
    zmm12 = zx.o(0)
    uint128_t var_418_1 = _mm_shuffle_epi32(
        _mm_min_epi32(zx.o(arg12 - 2), _mm_max_epi32(zx.o(int.d(zmm3[0])), zx.o(0))), 0)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
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
        label_14022979a:
            rcx_47 = _mm_movemask_ps(zmm9 ^ arg7)
            
            if (rcx_47 != 0)
            label_140227db1:
                char rcx_48 = rcx_47.b
                char temp2_1 = rcx_48 & 1
                
                if (temp2_1 != 0)
                    arg11 = _mm_blend_ps(arg11, zmm12, 1)
                    
                    if (temp2_1 != 0)
                        goto label_140227e12
                else if (temp2_1 != 0)
                label_140227e12:
                    arg9 = _mm_blend_ps(arg9, zmm12, 1)
                    
                    if (temp2_1 != 0)
                        goto label_140227dc3
                    
                    goto label_140227e1b
                
                bool cond:17_1
                bool cond:18_1
                bool cond:22_1
                bool cond:23_1
                
                if (temp2_1 != 0)
                label_140227dc3:
                    arg10 = _mm_blend_ps(arg10, zmm12, 1)
                    char temp6_1 = rcx_48 & 2
                    cond:17_1 = temp6_1 == 0
                    cond:18_1 = temp6_1 != 0
                    cond:22_1 = temp6_1 == 0
                    cond:23_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        goto label_140227e20
                    
                    goto label_140227dcf
                
            label_140227e1b:
                char temp5_1 = rcx_48 & 2
                cond:17_1 = temp5_1 == 0
                cond:18_1 = temp5_1 != 0
                cond:22_1 = temp5_1 == 0
                cond:23_1 = temp5_1 != 0
                
                if (temp5_1 == 0)
                label_140227dcf:
                    
                    if (not(cond:17_1))
                    label_140227dd1:
                        arg9 = _mm_blend_ps(arg9, zmm12, 2)
                        
                        if (cond:23_1)
                            goto label_140227e2b
                        
                        goto label_140227dda
                else
                label_140227e20:
                    arg11 = _mm_blend_ps(arg11, zmm12, 2)
                    
                    if (cond:18_1)
                        goto label_140227dd1
                
                bool cond:30_1
                bool cond:31_1
                bool cond:43_1
                bool cond:44_1
                
                if (not(cond:22_1))
                label_140227e2b:
                    arg10 = _mm_blend_ps(arg10, zmm12, 2)
                    char temp12_1 = rcx_48 & 4
                    cond:30_1 = temp12_1 == 0
                    cond:31_1 = temp12_1 != 0
                    cond:43_1 = temp12_1 == 0
                    cond:44_1 = temp12_1 != 0
                    
                    if (temp12_1 != 0)
                        goto label_140227ddf
                    
                    goto label_140227e37
                
            label_140227dda:
                char temp11_1 = rcx_48 & 4
                cond:30_1 = temp11_1 == 0
                cond:31_1 = temp11_1 != 0
                cond:43_1 = temp11_1 == 0
                cond:44_1 = temp11_1 != 0
                
                if (temp11_1 == 0)
                label_140227e37:
                    
                    if (not(cond:30_1))
                    label_140227e39:
                        arg9 = _mm_blend_ps(arg9, zmm12, 4)
                        
                        if (cond:44_1)
                            goto label_140227dea
                        
                        goto label_140227e42
                else
                label_140227ddf:
                    arg11 = _mm_blend_ps(arg11, zmm12, 4)
                    
                    if (cond:31_1)
                        goto label_140227e39
                
                bool cond:56_1
                bool cond:57_1
                bool cond:67_1
                bool cond:68_1
                
                if (not(cond:43_1))
                label_140227dea:
                    arg10 = _mm_blend_ps(arg10, zmm12, 4)
                    char temp20_1 = rcx_48 & 8
                    cond:56_1 = temp20_1 == 0
                    cond:57_1 = temp20_1 != 0
                    cond:67_1 = temp20_1 == 0
                    cond:68_1 = temp20_1 != 0
                    
                    if (temp20_1 != 0)
                        goto label_140227e47
                    
                    goto label_140227df6
                
            label_140227e42:
                char temp19_1 = rcx_48 & 8
                cond:56_1 = temp19_1 == 0
                cond:57_1 = temp19_1 != 0
                cond:67_1 = temp19_1 == 0
                cond:68_1 = temp19_1 != 0
                
                if (temp19_1 != 0)
                label_140227e47:
                    arg11 = _mm_blend_ps(arg11, zmm12, 8)
                    
                    if (cond:57_1)
                        goto label_140227df8
                    
                    goto label_140227e50
                
            label_140227df6:
                
                if (cond:56_1)
                label_140227e50:
                    
                    if (not(cond:67_1))
                        arg10 = _mm_blend_ps(arg10, zmm12, 8)
                else
                label_140227df8:
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
            float var_4c8[0x4] = _mm_blendv_ps(var_4c8, zmm1 & data_143442be0, zmm9)
            float var_558[0x4]
            float temp0_30[0x4] =
                _mm_blendv_ps(var_558, _mm_srli_epi32(zmm1, 0x18) & data_143442bf0, zmm9)
            int32_t var_468[0x4]
            arg6 = _mm_blendv_ps(var_468, _mm_srli_epi32(zmm1, 0x1c), zmm9)
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
            int64_t rbp_11 = sx.q(_mm_extract_epi32(zmm4, 1))
            int32_t temp0_43 = _mm_extract_epi32(zmm4, 2)
            int64_t rsi_7 = sx.q(_mm_extract_epi32(zmm4, 3))
            zmm1 = __pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(
                    __pinsrb_xmmdq_memb_immb(zx.o(*(sx.q(zmm4.d) + &data_143442c90)), 
                        *(rbp_11 + &data_143442c90), 1), 
                    *(sx.q(temp0_43) + &data_143442c90), 2), 
                *(rsi_7 + &data_143442c90), 3)
            zmm4 = zmm9
            zmm9 = _mm_cvtepu8_epi32(zmm1.d)
            var_468 = arg6
            int32_t temp0_49[0x4] = __pcmpeqd_xmmdq_memdq(arg6, data_142fc95c0)
            zmm12 = zmm4
            arg5 = temp0_49 & not.o(zmm4)
            zmm4 = zx.o(0)
            
            if (_mm_movemask_ps(arg5) != 0)
                zmm4 = arg5 & zmm9
            
            arg7 = _mm_cvtepi32_epi64(zmm3[0].q)
            zmm1 = _mm_cvtepi32_epi64(zmm2.q)
            zmm2 = zmm10 & not.o(zmm0)
            zmm3 = zmm10 & not.o(data_142fc95e0)
            zmm0 = zmm10 & not.o(temp0_49)
            char temp0_53 = _mm_movemask_ps(zmm0)
            uint128_t var_1c8_1 = zmm0
            arg6 = _mm_blendv_ps(zmm4, zmm15, zmm0)
            arg5 = zx.o(0)
            
            if (temp0_53 != 0)
                arg5 = zmm9 & var_1c8_1
                zmm4 = arg6
            
            arg5 = _mm_madd_epi16(arg5, zmm3)
            zmm4 = _mm_mullo_epi32(zmm4, zmm2)
            uint128_t var_448_1 = zmm1
            arg6 = _mm_add_epi64(var_188_1, zmm1)
            int32_t var_4d8_1[0x4] = arg7
            uint128_t var_538_1 = _mm_add_epi64(var_188_1, arg7)
            zmm9 = zmm12
            zmm0 = zmm12
            uint128_t var_4b8
            zmm2 = _mm_blendv_ps(var_4b8, zmm4, zmm0)
            int32_t var_3a8[0x4]
            zmm12 = _mm_blendv_ps(var_3a8, arg5, zmm0)
            zmm0 = zmm10 & not.o(_mm_cmpgt_epi32(var_4c8, zmm15))
            zmm4 = zmm2
            var_4b8 = zmm2
            uint128_t var_568_1 = zmm9
            int32_t var_578_1[0x4] = arg6
            var_3a8 = zmm12
            float var_528_1[0x4] = arg9
            
            if (_mm_movemask_ps(zmm0) == 0)
                zmm3 = zx.o(0)
                zmm15 = zx.o(0)
            else
                float var_4f8_1[0x4] = arg10
                int32_t var_4e8_1[0x4] = arg11
                arg10 = var_558 & data_142fc95f0
                arg11 = zx.o(0)
                arg8 = _mm_slli_epi32(_mm_cmpeq_epi32(arg10, arg11) & zmm0, 0x1f)
                bool cond:11_1 = _mm_movemask_ps(arg8) == 0
                arg7 = _mm_cmpeq_epi32(arg7, arg7)
                float var_588_1[0x4]
                
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
                            float temp0_69[0x4] =
                                __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1), var_2d8_1)
                            arg7 = _mm_round_ps(temp0_69, 9)
                            int32_t temp0_72[0x4] = _mm_min_epi32(_mm_cvttps_epi32(arg7), zmm1)
                            zmm2 = _mm_srai_epi32(arg8, 0x1f)
                            zmm15 = zmm2
                            arg11 = temp0_72 & zmm2
                            zmm2 = zx.o(0)
                            
                            if (arg14 != 1)
                                zmm2 = _mm_sub_ps(temp0_69, arg7)
                            
                            arg7 = _mm_cmpeq_epi32(arg7, arg7)
                            zmm15 &= _mm_min_epi32(_mm_sub_epi32(arg11, arg7), zmm1)
                            zmm3 = arg11
                            var_588_1 = zmm15
                    
                    arg8 = _mm_srai_epi32(arg8, 0x1f) & zmm2
                
                arg10 = _mm_slli_epi32(_mm_cmpeq_epi32(arg10, zx.o(0)) & not.o(zmm0), 0x1f)
                zmm2 = _mm_srai_epi32(arg10, 0x1f)
                
                if (_mm_movemask_ps(zmm2) != 0)
                    zmm4 = var_4c8
                    arg5 = _mm_cmpgt_epi32(data_1434422d0, zmm4) | var_198_1
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
                            arg11 = _mm_blendv_ps(arg11, arg5, zmm9)
                            arg9 = _mm_blendv_ps(var_588_1, arg5, zmm9)
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
                            zmm15 = _mm_add_epi64(zmm15, arg6)
                            zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            zmm2 = data_143442a20
                            int32_t temp0_100[0x4] =
                                _mm_add_epi64(_mm_add_epi64(temp0_95, zmm2), zmm1)
                            zmm15 = _mm_add_epi64(_mm_add_epi64(zmm15, zmm2), zmm0)
                            zmm0 = data_143442c10
                            zmm15 &= zmm0
                            arg8 = temp0_100 & zmm0
                            zmm2 = zx.o(0)
                            arg9 = _mm_min_epi32(
                                _mm_max_epi32(
                                    _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(arg5), 
                                        var_2d8_1)), 
                                    zx.o(0)), 
                                arg5)
                            
                            if (arg12 s< 0x100)
                                zmm0 = _mm_shuffle_epi32(arg9, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), zmm15)
                                char rbx_10 = temp0_88.b
                                zmm12 = data_142ed6810
                                float var_318[0x4]
                                
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
                                            zmm3 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm2.q), zmm15)
                                            char temp0_168 = _mm_movemask_ps(arg6)
                                            int32_t var_1e8[0x4]
                                            
                                            if ((temp0_168 & 1) != 0)
                                                arg6 =
                                                    _mm_insert_epi32(var_1e8, zx.d(*zmm3[0].q), 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_168 & 2) != 0)
                                                    arg6 = _mm_insert_epi32(arg6, 
                                                        zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                            else
                                                arg6 = var_1e8
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_168 & 2) != 0)
                                                    arg6 = _mm_insert_epi32(arg6, 
                                                        zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                            
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
                                
                                float var_398[0x4]
                                uint128_t var_328
                                
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
                                                zmm0 = _mm_cvtepi32_epi64(zmm2.q)
                                                
                                                if ((temp0_196 & 2) != 0)
                                                    goto label_140225a63
                                                
                                                goto label_140225ab5
                                            
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm2.q)
                                            
                                            if ((temp0_196 & 2) != 0)
                                            label_140225a63:
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                                
                                                if ((temp0_196 & 4) == 0)
                                                    goto label_140225ac0
                                                
                                                goto label_140225a7c
                                            
                                        label_140225ab5:
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_196 & 4) != 0)
                                            label_140225a7c:
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_196 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else
                                            label_140225ac0:
                                                
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
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg11[0].q), zmm15)
                                var_398 = zmm3
                                
                                if ((rbx_10 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_10 & 2) != 0)
                                        goto label_140225fed
                                    
                                    goto label_140225f31
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbx_10 & 2) != 0)
                                label_140225fed:
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbx_10 & 4) == 0)
                                        goto label_140225f3f
                                    
                                    goto label_140226009
                                
                            label_140225f31:
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbx_10 & 4) != 0)
                                label_140226009:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbx_10 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140225f3f:
                                    
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
                                zmm15 = _mm_add_epi64(zmm15, _mm_cvtepi32_epi64(arg9[0].q))
                                float var_348[0x4]
                                
                                if ((rbx_10 & 1) != 0)
                                    zmm3 = _mm_insert_epi32(var_348, zx.d(*zmm15[0].q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_10 & 2) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                                else
                                    zmm3 = var_348
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_10 & 2) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                                
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
                                float var_1a8[0x4]
                                zmm3 = var_1a8
                                
                                if ((rbx_9 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_9 & 2) != 0)
                                        goto label_1402257a3
                                    
                                    goto label_140225536
                                
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbx_9 & 2) != 0)
                                label_1402257a3:
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbx_9 & 4) == 0)
                                        goto label_140225544
                                    
                                    goto label_1402257bf
                                
                            label_140225536:
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbx_9 & 4) != 0)
                                label_1402257bf:
                                    zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbx_9 & 8) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140225544:
                                    
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
                                            uint128_t var_1d8
                                            
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
                                
                                if (temp0_208 != 0)
                                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                    zmm0 = var_4a8_1 ^ zmm2
                                    arg7 = _mm_blendv_ps(arg7, zx.o(0), zmm0)
                                    zmm4 = _mm_cmpeq_epi32(zmm4, zmm4)
                                    arg9 = _mm_add_epi32(arg9, zmm2)
                                    arg6 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm0
                                    zmm0 = arg6 & zmm9
                                    j_3 = _mm_movemask_ps(zmm0)
                                
                                float var_388[0x4]
                                
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
                                            zmm0 = _mm_cvtepi32_epi64(zmm2.q)
                                            
                                            if ((temp0_224 & 2) != 0)
                                                goto label_140225be3
                                            
                                            goto label_140225c3d
                                        
                                        zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm2.q)
                                        
                                        if ((temp0_224 & 2) != 0)
                                        label_140225be3:
                                            zmm3 = _mm_insert_epi32(zmm3, 
                                                zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                            zmm0 = _mm_add_epi64(zmm0, arg8)
                                            
                                            if ((temp0_224 & 4) == 0)
                                                goto label_140225c48
                                            
                                            goto label_140225bfc
                                        
                                    label_140225c3d:
                                        zmm0 = _mm_add_epi64(zmm0, arg8)
                                        
                                        if ((temp0_224 & 4) != 0)
                                        label_140225bfc:
                                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                            
                                            if ((temp0_224 & 8) != 0)
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        else
                                        label_140225c48:
                                            
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
                                        
                                        arg9 = _mm_add_epi32(arg9, zmm4)
                                        arg6 = _mm_cmpgt_epi32(arg9, zx.o(0)) & zmm2
                                        zmm0 = arg6 & zmm9
                                        j_3 = _mm_movemask_ps(zmm0)
                                    while (j_3 != 0)
                                
                                uint128_t var_308
                                zmm2 = var_308
                                arg11 = _mm_blendv_ps(arg11, arg7, zmm9)
                                zmm1 = _mm_add_epi32(arg11, arg11)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                                
                                if ((rbx_9 & 1) == 0)
                                    arg7 = _mm_cmpeq_epi32(arg7, arg7)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rbx_9 & 2) != 0)
                                        goto label_140225dec
                                    
                                    goto label_140225d18
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                                arg7 = _mm_cmpeq_epi32(arg7, arg7)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbx_9 & 2) != 0)
                                label_140225dec:
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg8)
                                    
                                    if ((rbx_9 & 4) == 0)
                                        goto label_140225d26
                                    
                                    goto label_140225e08
                                
                            label_140225d18:
                                zmm0 = _mm_add_epi64(zmm0, arg8)
                                
                                if ((rbx_9 & 4) != 0)
                                label_140225e08:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rbx_9 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_140225d26:
                                    
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
                                zmm15 = _mm_add_epi64(zmm15, _mm_cvtepi32_epi64(zmm1.q))
                                uint128_t var_338
                                
                                if ((rbx_9 & 1) != 0)
                                    zmm1 = _mm_insert_epi32(var_338, zx.d(*zmm15[0].q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    var_388 = zmm3
                                    
                                    if ((rbx_9 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                                else
                                    zmm1 = var_338
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    var_388 = zmm3
                                    
                                    if ((rbx_9 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                                
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
                                zmm1 = _mm_div_ps(_mm_sub_ps(temp0_8, _mm_cvtepi32_ps(zmm0)), 
                                    _mm_cvtepi32_ps(zmm2))
                            
                            zmm2 = _mm_blendv_ps(zx.o(0), zmm1, var_478_1 ^ arg7)
                    
                    arg8 = _mm_blendv_ps(arg8, zmm2, arg10)
                    zmm3 = arg11
                    zmm15 = arg9
                
                arg11 = var_4e8_1
                arg10 = var_4f8_1
            
            zmm1 = _mm_cvtepi32_epi64(zmm12[0].q)
            zmm2 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm12, 0x4e).q)
            zmm0 = _mm_mullo_epi32(zmm3, zmm4)
            arg5 = _mm_cvtepi32_epi64(zmm0.q)
            zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
            uint128_t var_3e8_1 = zmm0
            uint128_t var_4a8_3 = zmm2
            zmm0 = _mm_add_epi64(zmm0, zmm2)
            float var_4e8_2[0x4] = arg5
            uint128_t var_478_3 = zmm1
            uint128_t var_3f8_1 = _mm_add_epi64(_mm_add_epi64(arg5, zmm1), arg6)
            uint128_t var_358_1 = __paddq_xmmdq_memdq(zmm0, var_538_1)
            arg7 = __pcmpeqd_xmmdq_memdq(var_468, data_142d3f5b0)
            arg5 = zmm10 & not.o(arg7)
            int32_t var_548_2[0x4] = arg8
            float var_588_2[0x4] = zmm3
            int32_t var_498_1[0x4] = arg7
            float var_3b8_1[0x4] = zmm15
            uint128_t var_5a8
            
            if (_mm_movemask_ps(arg5) == 0)
                zmm4 = var_5a8
                arg9 = var_528_1
                zmm12 = zx.o(0)
            else
                zmm12 = zx.o(0)
                zmm15 = _mm_cmpeq_epi32(var_408_1, zmm12)
                zmm1 = _mm_slli_epi32(zmm15 & arg5, 0x1f)
                char temp0_318 = _mm_movemask_ps(zmm1)
                
                if (temp0_318 == 0)
                    arg9 = var_528_1
                else
                    zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                    int32_t temp0_320[0x4] = __paddq_xmmdq_memdq(var_4d8_1, var_4a8_3)
                    zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_448_1, var_478_3), var_4e8_2)
                    int32_t temp0_323[0x4] = __paddq_xmmdq_memdq(temp0_320, var_3e8_1)
                    zmm0 = data_1434426c0
                    int32_t temp0_324[0x4] = _mm_add_epi64(temp0_323, zmm0)
                    zmm4 = _mm_add_epi64(zmm4, zmm0)
                    zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                    arg7 = _mm_blendv_ps(zx.o(0), zmm4, zmm3)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                    zmm1 = _mm_blendv_ps(zx.o(0), temp0_324, zmm4)
                    int64_t rbx_11 = _mm_extract_epi64(arg7, 1)
                    void* rsi_12 = arg4 + rbx_11
                    zmm12 = *(arg4 + rbx_11)
                    int64_t rbp_12 = zmm1.q
                    int64_t r14_1 = _mm_extract_epi64(zmm1, 1)
                    void* rbx_12 = arg4 + rbp_12
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm0, zmm3)
                    int32_t var_428_1 = (*(arg4 + rbp_12)).d
                    arg6 = _mm_blendv_ps(zx.o(0), zmm0, zmm4)
                    int32_t var_4f8_2 = (*(arg4 + r14_1)).d
                    void* r10_2 = arg7[0].q + arg4
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
                    uint128_t* rsi_13 = temp0_333[0].q
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
                            goto label_1402265c6
                    else if (temp14_1 != 0)
                    label_1402265c6:
                        arg9 = _mm_insert_ps(arg9, zmm2, 0x10)
                        
                        if (temp14_1 != 0)
                            goto label_1402263f3
                        
                        goto label_1402265d3
                    
                    bool cond:76_1
                    bool cond:94_1
                    bool cond:95_1
                    bool cond:77_1
                    
                    if (temp14_1 == 0)
                    label_1402265d3:
                        zmm3 = var_588_2
                        char temp27_1 = temp0_318 & 4
                        cond:76_1 = temp27_1 == 0
                        cond:77_1 = temp27_1 != 0
                        cond:94_1 = temp27_1 == 0
                        cond:95_1 = temp27_1 != 0
                        
                        if (temp27_1 != 0)
                        label_1402265e2:
                            arg11 = __insertps_xmmps_memd_immb(arg11, var_428_1, 0x20)
                            
                            if (cond:77_1)
                                goto label_14022640f
                            
                            goto label_1402265f4
                    else
                    label_1402263f3:
                        arg10 = _mm_insert_ps(arg10, zmm3, 0x10)
                        zmm3 = var_588_2
                        char temp28_1 = temp0_318 & 4
                        cond:76_1 = temp28_1 == 0
                        cond:77_1 = temp28_1 != 0
                        cond:94_1 = temp28_1 == 0
                        cond:95_1 = temp28_1 != 0
                        
                        if (temp28_1 != 0)
                            goto label_1402265e2
                    
                    if (not(cond:76_1))
                    label_14022640f:
                        arg9 = _mm_insert_ps(arg9, arg8, 0x20)
                        arg8 = var_548_2
                        
                        if (cond:95_1)
                            goto label_140226601
                        
                        goto label_140226423
                    
                label_1402265f4:
                    arg8 = var_548_2
                    bool cond:133_1
                    bool cond:149_1
                    bool cond:150_1
                    bool cond:134_1
                    
                    if (cond:94_1)
                    label_140226423:
                        char temp44_1 = temp0_318 & 8
                        cond:133_1 = temp44_1 == 0
                        cond:134_1 = temp44_1 != 0
                        cond:149_1 = temp44_1 == 0
                        cond:150_1 = temp44_1 != 0
                        
                        if (temp44_1 != 0)
                        label_14022642c:
                            arg11 = __insertps_xmmps_memd_immb(arg11, var_4f8_2, 0x30)
                            
                            if (cond:134_1)
                                goto label_140226617
                            
                            goto label_14022643e
                    else
                    label_140226601:
                        arg10 = _mm_insert_ps(arg10, zmm4, 0x20)
                        char temp45_1 = temp0_318 & 8
                        cond:133_1 = temp45_1 == 0
                        cond:134_1 = temp45_1 != 0
                        cond:149_1 = temp45_1 == 0
                        cond:150_1 = temp45_1 != 0
                        
                        if (temp45_1 != 0)
                            goto label_14022642c
                    
                    if (cond:133_1)
                    label_14022643e:
                        zmm12 = zx.o(0)
                        
                        if (not(cond:149_1))
                            arg10 = _mm_insert_ps(arg10, zmm0, 0x30)
                    else
                    label_140226617:
                        arg9 = _mm_insert_ps(arg9, arg7, 0x30)
                        zmm12 = zx.o(0)
                        
                        if (cond:150_1)
                            arg10 = _mm_insert_ps(arg10, zmm0, 0x30)
                
                zmm15 &= not.o(arg5)
                zmm1 = _mm_slli_epi32(zmm15, 0x1f)
                char temp0_343 = _mm_movemask_ps(zmm1)
                
                if (temp0_343 == 0)
                    zmm4 = var_5a8
                    zmm9 = var_568_1
                    arg6 = var_578_1
                    arg7 = var_498_1
                    zmm15 = var_3b8_1
                else
                    zmm3 = _mm_srai_epi32(_mm_slli_epi32(var_558, 0x1f), 0x1f)
                    zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm3
                    zmm9 = var_3f8_1
                    arg7 = var_358_1
                    arg8 = arg7
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        zmm0 = data_1434426c0
                        int32_t temp0_348[0x4] = _mm_add_epi64(arg7, zmm0)
                        arg5 = _mm_add_epi64(var_3f8_1, zmm0)
                        zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm9 = _mm_blendv_ps(var_3f8_1, arg5, zmm4)
                        arg5 = _mm_shuffle_epi32(zmm1, 0xfa)
                        arg8 = _mm_blendv_ps(arg7, temp0_348, arg5)
                        zmm1 = __paddq_xmmdq_memdq(var_4d8_1, var_4a8_3)
                        int32_t temp0_356[0x4] = __paddq_xmmdq_memdq(
                            __paddq_xmmdq_memdq(var_448_1, var_478_3), var_4e8_2)
                        zmm1 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_3e8_1), zmm0)
                        arg7 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_356, zmm0), zmm4)
                        zmm4 = _mm_blendv_ps(zx.o(0), zmm1, arg5)
                        arg5 = *(arg4 + arg7[0].q)
                        int64_t rax_98 = _mm_extract_epi64(arg7, 1)
                        int64_t rbx_13 = _mm_extract_epi64(zmm4, 1)
                        arg5 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg5, *(arg4 + rax_98), 0x10), 
                                *(arg4 + zmm4.q), 0x20), 
                            *(arg4 + rbx_13), 0x30)
                    
                    zmm4 = _mm_blendv_ps(zx.o(0), arg5, zmm3)
                    
                    if ((temp0_343 & 1) != 0)
                        arg11 = _mm_blend_ps(arg11, zmm4, 1)
                        
                        if ((temp0_343 & 2) != 0)
                            goto label_140226639
                        
                        goto label_1402265a2
                    
                    if ((temp0_343 & 2) != 0)
                    label_140226639:
                        arg11 = _mm_blend_ps(arg11, zmm4, 2)
                        
                        if ((temp0_343 & 4) != 0)
                            goto label_1402265ab
                        
                        goto label_140226649
                    
                label_1402265a2:
                    
                    if ((temp0_343 & 4) == 0)
                    label_140226649:
                        
                        if ((temp0_343 & 8) != 0)
                            arg11 = _mm_blend_ps(arg11, zmm4, 8)
                    else
                    label_1402265ab:
                        arg11 = _mm_blend_ps(arg11, zmm4, 4)
                        
                        if ((temp0_343 & 8) != 0)
                            arg11 = _mm_blend_ps(arg11, zmm4, 8)
                    
                    zmm0 = data_1434422d0
                    arg5 = var_558 & zmm0
                    zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm0) & zmm15, 0x1f)
                    char temp0_376 = _mm_movemask_ps(zmm1)
                    uint128_t var_368
                    
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
                        zmm3 = _mm_add_epi64(zmm9, zmm0)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm4 = _mm_blendv_ps(zmm9, zmm3, _mm_shuffle_epi32(zmm1, 0x50))
                        zmm3 = _mm_blendv_ps(arg8, temp0_377, _mm_shuffle_epi32(zmm1, 0xfa))
                        
                        if ((temp0_376 & 1) != 0)
                            zmm0 = _mm_blend_epi16(var_368, zx.o(*zmm9.q), 3)
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
                            goto label_140226a19
                        
                        goto label_1402267e7
                    
                    if ((temp0_343 & 4) == 0)
                    label_1402267e7:
                        var_368 = zmm0
                        
                        if ((temp0_343 & 8) != 0)
                            arg9 = _mm_blend_ps(arg9, arg5, 8)
                    else
                    label_140226a19:
                        arg9 = _mm_blend_ps(arg9, arg5, 4)
                        var_368 = zmm0
                        
                        if ((temp0_343 & 8) != 0)
                            arg9 = _mm_blend_ps(arg9, arg5, 8)
                    
                    zmm1 = data_142fc95e0
                    zmm0 = var_558 & zmm1
                    char temp0_394 =
                        _mm_movemask_ps(_mm_slli_epi32(zmm15 & _mm_cmpeq_epi32(zmm0, zmm1), 0x1f))
                    uint128_t var_3c8
                    
                    if (temp0_394 == 0)
                        zmm4 = var_5a8
                        arg6 = var_578_1
                        zmm3 = var_588_2
                        zmm15 = var_3b8_1
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(var_3c8)
                        
                        if ((temp0_343 & 1) != 0)
                            arg10 = _mm_blend_ps(arg10, zmm0, 1)
                    else
                        if ((temp0_394 & 1) != 0)
                            var_3c8 = _mm_blend_epi16(var_3c8, zx.o(*zmm4.q), 3)
                        
                        if ((temp0_394 & 2) != 0)
                            var_3c8 = __insertps_xmmps_memd_immb(var_3c8, 
                                *_mm_extract_epi64(zmm4, 1), 0x10)
                        
                        zmm4 = var_5a8
                        arg6 = var_578_1
                        zmm15 = var_3b8_1
                        
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
                            goto label_140226a49
                        
                        goto label_140226907
                    
                    if ((temp0_343 & 4) == 0)
                    label_140226907:
                        
                        if ((temp0_343 & 8) != 0)
                            arg10 = _mm_blend_ps(arg10, zmm0, 8)
                    else
                    label_140226a49:
                        arg10 = _mm_blend_ps(arg10, zmm0, 4)
                        
                        if ((temp0_343 & 8) != 0)
                            arg10 = _mm_blend_ps(arg10, zmm0, 8)
            
            zmm1 = arg7 ^ data_142d3f800
            uint128_t var_428_2 = zmm1
            
            if (_mm_movemask_ps(zmm10 & not.o(zmm1)) != 0)
                if (temp0_53 == 0)
                    zmm1 = zmm10
                else
                    float var_4f8_3[0x4] = arg10
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
                        zmm1 = zmm10
                    else
                        zmm0 = data_1434426c0
                        zmm1 = _mm_add_epi64(var_538_1, zmm0)
                        int32_t temp0_408[0x4] = _mm_add_epi64(var_578_1, zmm0)
                        arg8 = _mm_unpacklo_ps(zmm3, zmm3[0].q)
                        zmm4 = _mm_blendv_ps(var_578_1, temp0_408, arg8)
                        float temp0_411[0x4] = _mm_unpackhi_ps(zmm3, zmm3)
                        arg7 = _mm_blendv_ps(var_538_1, zmm1, temp0_411)
                        char rbx_15 = temp0_406.b
                        uint128_t var_1f8
                        
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
                        
                        arg6 = zmm10
                        
                        if ((rbx_15 & 4) == 0)
                            if ((rbx_15 & 8) != 0)
                                goto label_140226b85
                            
                            goto label_140226b27
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_538_1.q, 0x20)
                        char rcx_29
                        
                        if ((rbx_15 & 8) != 0)
                        label_140226b85:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                *_mm_extract_epi64(var_538_1, 1), 0x30)
                            rcx_29 = _mm_movemask_ps(arg5)
                            arg10 = zx.o(0)
                            
                            if ((rcx_29 & 1) != 0)
                                goto label_140226b37
                            
                            goto label_140226b97
                        
                    label_140226b27:
                        rcx_29 = _mm_movemask_ps(arg5)
                        arg10 = zx.o(0)
                        
                        if ((rcx_29 & 1) == 0)
                        label_140226b97:
                            
                            if ((rcx_29 & 2) != 0)
                            label_140226b9c:
                                arg10 = _mm_blend_ps(arg10, zmm0, 2)
                                
                                if ((rcx_29 & 4) != 0)
                                    goto label_140226b48
                                
                                goto label_140226bab
                        else
                        label_140226b37:
                            arg10 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rcx_29 & 2) != 0)
                                goto label_140226b9c
                        
                        if ((rcx_29 & 4) == 0)
                        label_140226bab:
                            var_1f8 = zmm0
                            arg9 = arg11
                            
                            if ((rcx_29 & 8) != 0)
                                arg10 = _mm_blend_ps(arg10, zmm0, 8)
                        else
                        label_140226b48:
                            arg10 = _mm_blend_ps(arg10, zmm0, 4)
                            var_1f8 = zmm0
                            arg9 = arg11
                            
                            if ((rcx_29 & 8) != 0)
                                arg10 = _mm_blend_ps(arg10, zmm0, 8)
                        
                        zmm0 = data_1434426c0
                        zmm15 = _mm_blendv_ps(zmm4, _mm_add_epi64(zmm4, zmm0), arg8)
                        arg11 = _mm_blendv_ps(arg7, _mm_add_epi64(arg7, zmm0), temp0_411)
                        uint128_t var_208
                        
                        if ((rbx_15 & 1) != 0)
                            zmm0 = _mm_blend_ps(var_208, *zmm4.q, 1)
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
                                goto label_140226c92
                            
                            goto label_140226c47
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg7[0].q, 0x20)
                        
                        if ((rbx_15 & 8) != 0)
                        label_140226c92:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg7, 1), 0x30)
                            arg8 = zx.o(0)
                            
                            if ((rcx_29 & 1) != 0)
                                goto label_140226c54
                            
                            goto label_140226ca1
                        
                    label_140226c47:
                        arg8 = zx.o(0)
                        
                        if ((rcx_29 & 1) == 0)
                        label_140226ca1:
                            
                            if ((rcx_29 & 2) != 0)
                            label_140226ca6:
                                arg8 = _mm_blend_ps(arg8, zmm0, 2)
                                
                                if ((rcx_29 & 4) != 0)
                                    goto label_140226c65
                                
                                goto label_140226cb5
                        else
                        label_140226c54:
                            arg8 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((rcx_29 & 2) != 0)
                                goto label_140226ca6
                        
                        if ((rcx_29 & 4) == 0)
                        label_140226cb5:
                            var_208 = zmm0
                            
                            if ((rcx_29 & 8) != 0)
                                arg8 = _mm_blend_ps(arg8, zmm0, 8)
                        else
                        label_140226c65:
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
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
                        zmm0 = data_1434426c0
                        zmm2 = _mm_add_epi64(arg11, zmm0)
                        zmm4 = _mm_add_epi64(zmm15, zmm0)
                        zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                        float temp0_446[0x4] = _mm_blendv_ps(zmm15, zmm4, zmm3)
                        zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                        arg6 = _mm_blendv_ps(arg11, zmm2, zmm4)
                        uint128_t var_218
                        
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
                                goto label_140226dee
                            
                            goto label_140226d9e
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg11[0].q, 0x20)
                        char rcx_31
                        
                        if ((temp0_440 & 8) != 0)
                        label_140226dee:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg11, 1), 0x30)
                            rcx_31 = _mm_movemask_ps(arg5)
                            zmm9 = zx.o(0)
                            
                            if ((rcx_31 & 1) != 0)
                                goto label_140226db0
                            
                            goto label_140226e01
                        
                    label_140226d9e:
                        rcx_31 = _mm_movemask_ps(arg5)
                        zmm9 = zx.o(0)
                        
                        if ((rcx_31 & 1) == 0)
                        label_140226e01:
                            
                            if ((rcx_31 & 2) != 0)
                            label_140226e06:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc)
                                
                                if ((rcx_31 & 4) != 0)
                                    goto label_140226dc1
                                
                                goto label_140226e15
                        else
                        label_140226db0:
                            zmm9 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                            
                            if ((rcx_31 & 2) != 0)
                                goto label_140226e06
                        
                        if ((rcx_31 & 4) == 0)
                        label_140226e15:
                            var_218 = zmm0
                            
                            if ((rcx_31 & 8) != 0)
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                        else
                        label_140226dc1:
                            zmm9 = _mm_blend_epi16(zmm9, zmm0, 0x30)
                            var_218 = zmm0
                            
                            if ((rcx_31 & 8) != 0)
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                        
                        zmm0 = data_1434426c0
                        zmm15 = _mm_blendv_ps(temp0_446, _mm_add_epi64(temp0_446, zmm0), zmm3)
                        arg11 = _mm_blendv_ps(arg6, _mm_add_epi64(arg6, zmm0), zmm4)
                        uint128_t var_228
                        
                        if ((temp0_440 & 1) != 0)
                            zmm0 = _mm_blend_ps(var_228, *temp0_446[0].q, 1)
                            zmm1 = zmm12
                            
                            if ((temp0_440 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_446, 1), 0x10)
                        else
                            zmm0 = var_228
                            zmm1 = zmm12
                            
                            if ((temp0_440 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_446, 1), 0x10)
                        
                        arg10 = arg10
                        
                        if ((temp0_440 & 4) == 0)
                            if ((temp0_440 & 8) != 0)
                                goto label_140226efe
                            
                            goto label_140226eb5
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg6[0].q, 0x20)
                        
                        if ((temp0_440 & 8) != 0)
                        label_140226efe:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg6, 1), 0x30)
                            zmm3 = zx.o(0)
                            
                            if ((rcx_31 & 1) != 0)
                                goto label_140226ec2
                            
                            goto label_140226f0d
                        
                    label_140226eb5:
                        zmm3 = zx.o(0)
                        
                        if ((rcx_31 & 1) == 0)
                        label_140226f0d:
                            
                            if ((rcx_31 & 2) != 0)
                            label_140226f12:
                                zmm3 = _mm_blend_epi16(zmm3, zmm0, 0xc)
                                
                                if ((rcx_31 & 4) != 0)
                                    goto label_140226ed2
                                
                                goto label_140226f20
                        else
                        label_140226ec2:
                            zmm3 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                            
                            if ((rcx_31 & 2) != 0)
                                goto label_140226f12
                        
                        if ((rcx_31 & 4) == 0)
                        label_140226f20:
                            var_228 = zmm0
                            
                            if ((rcx_31 & 8) != 0)
                                zmm3 = _mm_blend_epi16(zmm3, zmm0, 0xc0)
                        else
                        label_140226ed2:
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
                        zmm15 = var_3b8_1
                    else
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
                        zmm0 = data_1434426c0
                        zmm2 = _mm_add_epi64(arg11, zmm0)
                        float temp0_478[0x4] = _mm_blendv_ps(zmm15, _mm_add_epi64(zmm15, zmm0), 
                            _mm_shuffle_epi32(zmm1, 0x50))
                        arg6 = _mm_blendv_ps(arg11, zmm2, _mm_shuffle_epi32(zmm1, 0xfa))
                        uint128_t var_238
                        
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
                        
                        zmm15 = var_3b8_1
                        
                        if ((temp0_472 & 4) != 0)
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg11[0].q, 0x20)
                            
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
                                goto label_140227096
                            
                            goto label_140227059
                        
                        if ((temp0_484 & 2) == 0)
                        label_140227059:
                            
                            if ((temp0_484 & 4) != 0)
                            label_14022705f:
                                zmm4 = _mm_blend_ps(zmm4, zmm0, 4)
                                
                                if ((temp0_484 & 8) != 0)
                                    goto label_1402270a8
                                
                                goto label_14022706e
                        else
                        label_140227096:
                            zmm4 = _mm_blend_ps(zmm4, zmm0, 2)
                            
                            if ((temp0_484 & 4) != 0)
                                goto label_14022705f
                        
                        if ((temp0_484 & 8) != 0)
                        label_1402270a8:
                            zmm4 = _mm_blend_ps(zmm4, zmm0, 8)
                            var_238 = zmm0
                            
                            if ((temp0_472 & 1) == 0)
                                goto label_140227078
                            
                            goto label_1402270d2
                        
                    label_14022706e:
                        var_238 = zmm0
                        uint128_t var_248
                        
                        if ((temp0_472 & 1) != 0)
                        label_1402270d2:
                            zmm0 = _mm_blend_ps(var_248, *temp0_478[0].q, 1)
                            zmm1 = var_448_1
                            
                            if ((temp0_472 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_478, 1), 0x10)
                        else
                        label_140227078:
                            zmm0 = var_248
                            zmm1 = var_448_1
                            
                            if ((temp0_472 & 2) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_478, 1), 0x10)
                        
                        if ((temp0_472 & 4) == 0)
                            if ((temp0_472 & 8) != 0)
                                goto label_14022715e
                            
                            goto label_1402270fa
                        
                        zmm0 = __insertps_xmmps_memd_immb(zmm0, *arg6[0].q, 0x20)
                        
                        if ((temp0_472 & 8) != 0)
                        label_14022715e:
                            zmm0 =
                                __insertps_xmmps_memd_immb(zmm0, *_mm_extract_epi64(arg6, 1), 0x30)
                            arg6 = zx.o(0)
                            
                            if ((temp0_484 & 1) != 0)
                                goto label_140227106
                            
                            goto label_14022716d
                        
                    label_1402270fa:
                        arg6 = zx.o(0)
                        
                        if ((temp0_484 & 1) == 0)
                        label_14022716d:
                            
                            if ((temp0_484 & 2) != 0)
                            label_140227173:
                                arg6 = _mm_blend_ps(arg6, zmm0, 2)
                                
                                if ((temp0_484 & 4) != 0)
                                    goto label_140227118
                                
                                goto label_140227183
                        else
                        label_140227106:
                            arg6 = _mm_blend_ps(zx.o(0), zmm0, 1)
                            
                            if ((temp0_484 & 2) != 0)
                                goto label_140227173
                        
                        if ((temp0_484 & 4) == 0)
                        label_140227183:
                            var_248 = zmm0
                            
                            if ((temp0_484 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                        else
                        label_140227118:
                            arg6 = _mm_blend_ps(arg6, zmm0, 4)
                            var_248 = zmm0
                            
                            if ((temp0_484 & 8) != 0)
                                arg6 = _mm_blend_ps(arg6, zmm0, 8)
                    
                    zmm1 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(zmm1, var_478_3), var_4e8_2)
                    zmm0 = data_1434426c0
                    arg7 = var_1c8_1
                    float temp0_502[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), 
                        _mm_shuffle_epi32(arg7, 0x50))
                    zmm2 = _mm_blendv_ps(zx.o(0), 
                        _mm_add_epi64(
                            __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8_1, var_4a8_3), 
                                var_3e8_1), 
                            zmm0), 
                        _mm_shuffle_epi32(arg7, 0xfa))
                    int64_t rax_131 = temp0_502[0].q
                    int64_t rcx_34 = _mm_extract_epi64(temp0_502, 1)
                    int64_t rbx_17 = _mm_extract_epi64(zmm2, 1)
                    zmm0 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_131)), *(arg4 + rcx_34), 1), 
                            *(arg4 + zmm2.q), 2), 
                        *(arg4 + rbx_17), 3)
                    zmm1 = zmm0
                    float temp0_515[0x4] = _mm_add_ps(arg10, 
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
                    float temp0_520[0x4] = _mm_mul_ps(zmm3, _mm_div_ps(zmm0, zmm2))
                    zmm0 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm1, 0x15), arg5)), zmm2)
                    char temp36_1 = temp0_53 & 1
                    
                    if (temp36_1 != 0)
                        arg11 = _mm_blend_ps(arg11, temp0_515, 1)
                        zmm1 = zmm12
                        arg6 = _mm_mul_ps(arg6, zmm0)
                        zmm9 = _mm_add_ps(zmm9, temp0_520)
                        
                        if (temp36_1 != 0)
                            goto label_140227392
                        
                        goto label_1402272ba
                    
                    zmm1 = zmm12
                    arg6 = _mm_mul_ps(arg6, zmm0)
                    zmm9 = _mm_add_ps(zmm9, temp0_520)
                    
                    if (temp36_1 != 0)
                    label_140227392:
                        arg9 = _mm_blend_ps(arg9, zmm9, 1)
                        zmm3 = var_588_2
                        zmm4 = _mm_add_ps(zmm4, arg6)
                        
                        if (temp36_1 != 0)
                            goto label_1402272d7
                        
                        goto label_1402273a8
                    
                label_1402272ba:
                    zmm3 = var_588_2
                    zmm4 = _mm_add_ps(zmm4, arg6)
                    bool cond:168_1
                    bool cond:169_1
                    bool cond:187_1
                    bool cond:188_1
                    
                    if (temp36_1 != 0)
                    label_1402272d7:
                        var_4f8_3 = _mm_blend_ps(var_4f8_3, zmm4, 1)
                        zmm12 = zx.o(0)
                        char temp56_1 = temp0_53 & 2
                        cond:168_1 = temp56_1 == 0
                        cond:169_1 = temp56_1 != 0
                        cond:187_1 = temp56_1 == 0
                        cond:188_1 = temp56_1 != 0
                        
                        if (temp56_1 != 0)
                            goto label_1402273b6
                        
                        goto label_1402272ed
                    
                label_1402273a8:
                    zmm12 = zx.o(0)
                    char temp55_1 = temp0_53 & 2
                    cond:168_1 = temp55_1 == 0
                    cond:169_1 = temp55_1 != 0
                    cond:187_1 = temp55_1 == 0
                    cond:188_1 = temp55_1 != 0
                    
                    if (temp55_1 == 0)
                    label_1402272ed:
                        
                        if (not(cond:168_1))
                        label_1402272f3:
                            arg9 = _mm_blend_ps(arg9, zmm9, 2)
                            
                            if (cond:188_1)
                                goto label_1402273d7
                            
                            goto label_140227300
                    else
                    label_1402273b6:
                        arg11 = _mm_blend_ps(arg11, temp0_515, 2)
                        
                        if (cond:169_1)
                            goto label_1402272f3
                    
                    bool cond:235_1
                    bool cond:236_1
                    bool cond:258_1
                    bool cond:259_1
                    
                    if (not(cond:187_1))
                    label_1402273d7:
                        var_4f8_3 = _mm_blend_ps(var_4f8_3, zmm4, 2)
                        char temp82_1 = temp0_53 & 4
                        cond:235_1 = temp82_1 == 0
                        cond:236_1 = temp82_1 != 0
                        cond:258_1 = temp82_1 == 0
                        cond:259_1 = temp82_1 != 0
                        
                        if (temp82_1 != 0)
                            goto label_140227309
                        
                        goto label_1402273e8
                    
                label_140227300:
                    char temp81_1 = temp0_53 & 4
                    cond:235_1 = temp81_1 == 0
                    cond:236_1 = temp81_1 != 0
                    cond:258_1 = temp81_1 == 0
                    cond:259_1 = temp81_1 != 0
                    
                    if (temp81_1 == 0)
                    label_1402273e8:
                        
                        if (not(cond:235_1))
                        label_1402273ee:
                            arg9 = _mm_blend_ps(arg9, zmm9, 4)
                            
                            if (cond:259_1)
                                goto label_14022732a
                            
                            goto label_1402273fb
                    else
                    label_140227309:
                        arg11 = _mm_blend_ps(arg11, temp0_515, 4)
                        
                        if (cond:236_1)
                            goto label_1402273ee
                    
                    bool cond:299_1
                    bool cond:300_1
                    bool cond:319_1
                    bool cond:320_1
                    
                    if (not(cond:258_1))
                    label_14022732a:
                        var_4f8_3 = _mm_blend_ps(var_4f8_3, zmm4, 4)
                        char temp110_1 = temp0_53 & 8
                        cond:299_1 = temp110_1 == 0
                        cond:300_1 = temp110_1 != 0
                        cond:319_1 = temp110_1 == 0
                        cond:320_1 = temp110_1 != 0
                        
                        if (temp110_1 != 0)
                            goto label_140227404
                        
                        goto label_14022733b
                    
                label_1402273fb:
                    char temp109_1 = temp0_53 & 8
                    cond:299_1 = temp109_1 == 0
                    cond:300_1 = temp109_1 != 0
                    cond:319_1 = temp109_1 == 0
                    cond:320_1 = temp109_1 != 0
                    
                    if (temp109_1 != 0)
                    label_140227404:
                        arg11 = _mm_blend_ps(arg11, temp0_515, 8)
                        arg8 = var_548_2
                        
                        if (cond:300_1)
                            goto label_140227348
                        
                        goto label_140227418
                    
                label_14022733b:
                    arg8 = var_548_2
                    
                    if (cond:299_1)
                    label_140227418:
                        arg10 = var_4f8_3
                        arg7 = var_498_1
                        zmm9 = var_568_1
                        
                        if (not(cond:319_1))
                            arg10 = _mm_blend_ps(arg10, zmm4, 8)
                    else
                    label_140227348:
                        arg9 = _mm_blend_ps(arg9, zmm9, 8)
                        arg10 = var_4f8_3
                        arg7 = var_498_1
                        zmm9 = var_568_1
                        
                        if (cond:320_1)
                            arg10 = _mm_blend_ps(arg10, zmm4, 8)
                    
                    zmm4 = var_5a8
                
                arg5 = temp0_49 ^ var_428_2
                
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
                            zmm12 = var_358_1
                        else
                            zmm12 = var_358_1
                            zmm0 = data_1434426b0
                            int32_t temp0_551[0x4] = _mm_add_epi64(zmm12, zmm0)
                            arg6 = var_3f8_1
                            zmm4 = _mm_add_epi64(arg6, zmm0)
                            zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                            var_3f8_1 = _mm_blendv_ps(arg6, zmm4, zmm3)
                            zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm12 = _mm_blendv_ps(zmm12, temp0_551, zmm4)
                            zmm1 = __paddq_xmmdq_memdq(var_4d8_1, var_4a8_3)
                            int32_t temp0_559[0x4] = __paddq_xmmdq_memdq(
                                __paddq_xmmdq_memdq(var_448_1, var_478_3), var_4e8_2)
                            zmm1 = __paddq_xmmdq_memdq(zmm1, var_3e8_1)
                            zmm0 = data_1434426c0
                            zmm1 = _mm_add_epi64(zmm1, zmm0)
                            arg6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_559, zmm0), zmm3)
                            float temp0_564[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm4)
                            int64_t rax_134 = _mm_extract_epi64(arg6, 1)
                            int64_t rbp_22 = arg6[0].q
                            int64_t rbx_18 = temp0_564[0].q
                            int64_t rsi_15 = _mm_extract_epi64(temp0_564, 1)
                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbp_22)), 
                                            *(arg4 + rax_134), 1), 
                                        *(arg4 + rbx_18), 2), 
                                    *(arg4 + rsi_15), 3).q), 
                                data_143442b40))
                        
                        float temp0_571[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        
                        if ((temp0_545 & 1) != 0)
                            arg11 = _mm_blend_ps(arg11, temp0_571, 1)
                            
                            if ((temp0_545 & 2) != 0)
                                goto label_14022761d
                            
                            goto label_140227605
                        
                        if ((temp0_545 & 2) != 0)
                        label_14022761d:
                            arg11 = _mm_blend_ps(arg11, temp0_571, 2)
                            
                            if ((temp0_545 & 4) != 0)
                                goto label_14022760a
                            
                            goto label_140227629
                        
                    label_140227605:
                        
                        if ((temp0_545 & 4) == 0)
                        label_140227629:
                            
                            if ((temp0_545 & 8) != 0)
                                arg11 = _mm_blend_ps(arg11, temp0_571, 8)
                        else
                        label_14022760a:
                            arg11 = _mm_blend_ps(arg11, temp0_571, 4)
                            
                            if ((temp0_545 & 8) != 0)
                                arg11 = _mm_blend_ps(arg11, temp0_571, 8)
                        
                        zmm0 = data_1434422d0
                        zmm4 = var_558 & zmm0
                        zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm4, zmm0) & zmm9, 0x1f)
                        char temp0_578 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_578 == 0)
                            arg7 = var_3f8_1
                            zmm2 = zmm12
                            zmm12 = zx.o(0)
                            zmm4 = _mm_cmpeq_epi32(zmm4, zmm12) & not.o(zmm0)
                            
                            if ((temp0_545 & 1) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm4, 1)
                        else
                            zmm0 = data_1434426b0
                            int32_t temp0_579[0x4] = _mm_add_epi64(zmm12, zmm0)
                            zmm3 = var_3f8_1
                            zmm2 = _mm_add_epi64(zmm3, zmm0)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            arg7 = _mm_blendv_ps(zmm3, zmm2, _mm_shuffle_epi32(zmm1, 0x50))
                            zmm2 = _mm_blendv_ps(zmm12, temp0_579, _mm_shuffle_epi32(zmm1, 0xfa))
                            zmm1 = zmm12
                            uint128_t var_258
                            
                            if ((temp0_578 & 1) != 0)
                                zmm0 = _mm_insert_epi32(var_258, zx.d(*zmm3[0].q), 0)
                                zmm12 = zx.o(0)
                                
                                if ((temp0_578 & 2) != 0)
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_3f8_1, 1)), 1)
                            else
                                zmm0 = var_258
                                zmm12 = zx.o(0)
                                
                                if ((temp0_578 & 2) != 0)
                                    zmm0 = _mm_insert_epi32(zmm0, 
                                        zx.d(*_mm_extract_epi64(var_3f8_1, 1)), 1)
                            
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
                                goto label_1402277e0
                            
                            goto label_140227781
                        
                        if ((temp0_545 & 4) == 0)
                        label_140227781:
                            
                            if ((temp0_545 & 8) != 0)
                                arg9 = _mm_blend_ps(arg9, zmm4, 8)
                        else
                        label_1402277e0:
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
                            uint128_t var_268
                            
                            if ((temp0_599 & 1) != 0)
                                zmm1 = _mm_insert_epi32(var_268, zx.d(*arg7[0].q), 0)
                                
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
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2.q), 2)
                            
                            if ((temp0_599 & 8) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                            
                            var_268 = zmm1
                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_blend_epi16(zmm1, zmm12, 0xaa), data_143442b40))
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(zmm1)
                            
                            if ((temp0_545 & 1) != 0)
                                arg10 = _mm_blend_ps(arg10, zmm0, 1)
                        
                        zmm1 = zmm10
                        
                        if ((temp0_545 & 2) != 0)
                            arg10 = _mm_blend_ps(arg10, zmm0, 2)
                            
                            if ((temp0_545 & 4) != 0)
                                goto label_1402279b2
                            
                            goto label_140227907
                        
                        if ((temp0_545 & 4) == 0)
                        label_140227907:
                            
                            if ((temp0_545 & 8) != 0)
                                arg10 = _mm_blend_ps(arg10, zmm0, 8)
                        else
                        label_1402279b2:
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
                                label_1402279d0:
                                    arg9 = _mm_blend_ps(arg9, zmm12, 1)
                                    
                                    if (temp35_1 != 0)
                                        goto label_140227965
                                    
                                    goto label_1402279d9
                            else
                                arg11 = _mm_blend_ps(arg11, zmm12, 1)
                                arg8 = var_548_2
                                
                                if (temp35_1 != 0)
                                    goto label_1402279d0
                            
                            bool cond:166_1
                            bool cond:167_1
                            bool cond:185_1
                            bool cond:186_1
                            
                            if (temp35_1 != 0)
                            label_140227965:
                                arg10 = _mm_blend_ps(arg10, zmm12, 1)
                                char temp54_1 = temp0_616 & 2
                                cond:166_1 = temp54_1 == 0
                                cond:167_1 = temp54_1 != 0
                                cond:185_1 = temp54_1 == 0
                                cond:186_1 = temp54_1 != 0
                                
                                if (temp54_1 != 0)
                                    goto label_1402279de
                                
                                goto label_140227971
                            
                        label_1402279d9:
                            char temp53_1 = temp0_616 & 2
                            cond:166_1 = temp53_1 == 0
                            cond:167_1 = temp53_1 != 0
                            cond:185_1 = temp53_1 == 0
                            cond:186_1 = temp53_1 != 0
                            
                            if (temp53_1 == 0)
                            label_140227971:
                                
                                if (not(cond:166_1))
                                label_140227973:
                                    arg9 = _mm_blend_ps(arg9, zmm12, 2)
                                    
                                    if (cond:186_1)
                                        goto label_1402279e9
                                    
                                    goto label_14022797c
                            else
                            label_1402279de:
                                arg11 = _mm_blend_ps(arg11, zmm12, 2)
                                
                                if (cond:167_1)
                                    goto label_140227973
                            
                            bool cond:233_1
                            bool cond:234_1
                            bool cond:256_1
                            bool cond:257_1
                            
                            if (not(cond:185_1))
                            label_1402279e9:
                                arg10 = _mm_blend_ps(arg10, zmm12, 2)
                                char temp80_1 = temp0_616 & 4
                                cond:233_1 = temp80_1 == 0
                                cond:234_1 = temp80_1 != 0
                                cond:256_1 = temp80_1 == 0
                                cond:257_1 = temp80_1 != 0
                                
                                if (temp80_1 != 0)
                                    goto label_140227981
                                
                                goto label_1402279f5
                            
                        label_14022797c:
                            char temp79_1 = temp0_616 & 4
                            cond:233_1 = temp79_1 == 0
                            cond:234_1 = temp79_1 != 0
                            cond:256_1 = temp79_1 == 0
                            cond:257_1 = temp79_1 != 0
                            
                            if (temp79_1 == 0)
                            label_1402279f5:
                                
                                if (not(cond:233_1))
                                label_1402279f7:
                                    arg9 = _mm_blend_ps(arg9, zmm12, 4)
                                    
                                    if (cond:257_1)
                                        goto label_14022798c
                                    
                                    goto label_140227a00
                            else
                            label_140227981:
                                arg11 = _mm_blend_ps(arg11, zmm12, 4)
                                
                                if (cond:234_1)
                                    goto label_1402279f7
                            
                            bool cond:297_1
                            bool cond:298_1
                            bool cond:317_1
                            bool cond:318_1
                            
                            if (not(cond:256_1))
                            label_14022798c:
                                arg10 = _mm_blend_ps(arg10, zmm12, 4)
                                char temp108_1 = temp0_616 & 8
                                cond:297_1 = temp108_1 == 0
                                cond:298_1 = temp108_1 != 0
                                cond:317_1 = temp108_1 == 0
                                cond:318_1 = temp108_1 == 0
                                
                                if (temp108_1 != 0)
                                    goto label_140227a05
                                
                                goto label_140227998
                            
                        label_140227a00:
                            char temp107_1 = temp0_616 & 8
                            cond:297_1 = temp107_1 == 0
                            cond:298_1 = temp107_1 != 0
                            cond:317_1 = temp107_1 == 0
                            cond:318_1 = temp107_1 == 0
                            
                            if (temp107_1 != 0)
                            label_140227a05:
                                arg11 = _mm_blend_ps(arg11, zmm12, 8)
                                
                                if (cond:298_1)
                                    goto label_14022799a
                                
                                goto label_140227a0e
                            
                        label_140227998:
                            
                            if (cond:297_1)
                            label_140227a0e:
                                
                                if (not(cond:317_1))
                                    arg10 = _mm_blend_ps(arg10, zmm12, 8)
                            else
                            label_14022799a:
                                arg9 = _mm_blend_ps(arg9, zmm12, 8)
                                
                                if (not(cond:318_1))
                                    arg10 = _mm_blend_ps(arg10, zmm12, 8)
                        
                        char temp0_631 = _mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm0), 0x1f))
                        
                        if (temp0_631 != 0)
                            char temp52_1 = temp0_631 & 1
                            
                            if (temp52_1 != 0)
                                arg11 = _mm_blend_ps(arg11, zmm12, 1)
                                
                                if (temp52_1 != 0)
                                    goto label_140227a95
                            else if (temp52_1 != 0)
                            label_140227a95:
                                arg9 = _mm_blend_ps(arg9, zmm12, 1)
                                
                                if (temp52_1 != 0)
                                    goto label_140227a53
                                
                                goto label_140227a9e
                            
                            bool cond:183_1
                            bool cond:184_1
                            bool cond:213_1
                            bool cond:214_1
                            
                            if (temp52_1 != 0)
                            label_140227a53:
                                arg10 = _mm_blend_ps(arg10, zmm12, 1)
                                char temp76_1 = temp0_631 & 2
                                cond:183_1 = temp76_1 == 0
                                cond:184_1 = temp76_1 != 0
                                cond:213_1 = temp76_1 == 0
                                cond:214_1 = temp76_1 != 0
                                
                                if (temp76_1 != 0)
                                    goto label_140227aa3
                                
                                goto label_140227a5f
                            
                        label_140227a9e:
                            char temp75_1 = temp0_631 & 2
                            cond:183_1 = temp75_1 == 0
                            cond:184_1 = temp75_1 != 0
                            cond:213_1 = temp75_1 == 0
                            cond:214_1 = temp75_1 != 0
                            
                            if (temp75_1 == 0)
                            label_140227a5f:
                                
                                if (not(cond:183_1))
                                label_140227a61:
                                    arg9 = _mm_blend_ps(arg9, zmm12, 2)
                                    
                                    if (cond:214_1)
                                        goto label_140227aae
                                    
                                    goto label_140227a6a
                            else
                            label_140227aa3:
                                arg11 = _mm_blend_ps(arg11, zmm12, 2)
                                
                                if (cond:184_1)
                                    goto label_140227a61
                            
                            bool cond:254_1
                            bool cond:255_1
                            bool cond:282_1
                            bool cond:283_1
                            
                            if (not(cond:213_1))
                            label_140227aae:
                                arg10 = _mm_blend_ps(arg10, zmm12, 2)
                                char temp102_1 = temp0_631 & 4
                                cond:254_1 = temp102_1 == 0
                                cond:255_1 = temp102_1 != 0
                                cond:282_1 = temp102_1 == 0
                                cond:283_1 = temp102_1 != 0
                                
                                if (temp102_1 != 0)
                                    goto label_140227a6f
                                
                                goto label_140227aba
                            
                        label_140227a6a:
                            char temp101_1 = temp0_631 & 4
                            cond:254_1 = temp101_1 == 0
                            cond:255_1 = temp101_1 != 0
                            cond:282_1 = temp101_1 == 0
                            cond:283_1 = temp101_1 != 0
                            
                            if (temp101_1 == 0)
                            label_140227aba:
                                
                                if (not(cond:254_1))
                                label_140227abc:
                                    arg9 = _mm_blend_ps(arg9, zmm12, 4)
                                    
                                    if (cond:283_1)
                                        goto label_140227a7a
                                    
                                    goto label_140227ac5
                            else
                            label_140227a6f:
                                arg11 = _mm_blend_ps(arg11, zmm12, 4)
                                
                                if (cond:255_1)
                                    goto label_140227abc
                            
                            bool cond:315_1
                            bool cond:316_1
                            bool cond:331_1
                            bool cond:332_1
                            
                            if (not(cond:282_1))
                            label_140227a7a:
                                arg10 = _mm_blend_ps(arg10, zmm12, 4)
                                char temp122_1 = temp0_631 & 8
                                cond:315_1 = temp122_1 == 0
                                cond:316_1 = temp122_1 != 0
                                cond:331_1 = temp122_1 == 0
                                cond:332_1 = temp122_1 != 0
                                
                                if (temp122_1 != 0)
                                    goto label_140227aca
                                
                                goto label_140227a86
                            
                        label_140227ac5:
                            char temp121_1 = temp0_631 & 8
                            cond:315_1 = temp121_1 == 0
                            cond:316_1 = temp121_1 != 0
                            cond:331_1 = temp121_1 == 0
                            cond:332_1 = temp121_1 != 0
                            
                            if (temp121_1 != 0)
                            label_140227aca:
                                arg11 = _mm_blend_ps(arg11, zmm12, 8)
                                
                                if (cond:316_1)
                                    goto label_140227a88
                                
                                goto label_140227ad3
                            
                        label_140227a86:
                            
                            if (cond:315_1)
                            label_140227ad3:
                                
                                if (not(cond:331_1))
                                    arg10 = _mm_blend_ps(arg10, zmm12, 8)
                            else
                            label_140227a88:
                                arg9 = _mm_blend_ps(arg9, zmm12, 8)
                                
                                if (cond:332_1)
                                    arg10 = _mm_blend_ps(arg10, zmm12, 8)
            
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm15) & not.o(zmm9)
            char temp0_645 = _mm_movemask_ps(zmm3)
            
            if (temp0_645 != 0)
                int32_t var_4e8_3[0x4] = arg11
                zmm15 = __pmulld_xmmdq_memdq(zmm15, var_4b8)
                zmm1 = _mm_cvtepi32_epi64(zmm15[0].q)
                arg11 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm15, 0x4e).q)
                int32_t var_4f8_4[0x4] = arg11
                int32_t temp0_650[0x4] = __paddq_xmmdq_memdq(arg11, var_4a8_3)
                uint128_t var_518_2 = zmm1
                uint128_t var_3e8_2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_478_3), arg6)
                arg11 = __paddq_xmmdq_memdq(temp0_650, var_538_1)
                arg7 &= zmm3
                float var_528_3[0x4] = arg9
                float var_588_3[0x4] = zmm3
                uint128_t var_598
                int32_t var_508[0x4]
                
                if (_mm_movemask_ps(_mm_slli_epi32(arg7, 0x1f)) == 0)
                    zmm1 = var_508
                else
                    int32_t var_3f8_2[0x4] = arg11
                    zmm0 = _mm_cmpeq_epi32(var_408_1, zmm12)
                    arg11 = zmm0
                    zmm1 = _mm_slli_epi32(arg7 & zmm0, 0x1f)
                    char temp0_658 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_658 == 0)
                        zmm15 = var_4d8_1
                    else
                        int32_t var_498_2[0x4] = arg7
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm4 = __paddq_xmmdq_memdq(var_4d8_1, var_4a8_3)
                        zmm3 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_448_1, var_478_3), 
                            var_518_2)
                        zmm4 = __paddq_xmmdq_memdq(zmm4, var_4f8_4)
                        zmm0 = data_1434426c0
                        arg7 = zmm0
                        zmm4 = _mm_add_epi64(zmm4, zmm0)
                        zmm3 = _mm_add_epi64(zmm3, zmm0)
                        zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                        float temp0_667[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                        zmm3 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm1 = _mm_blendv_ps(zx.o(0), zmm4, zmm3)
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
                        float (* rax_161)[0x4] = arg6[0].q
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
                                goto label_140227e9f
                            
                            goto label_140227d1e
                        
                        var_598 = _mm_blend_epi16(var_598, zx.o(*rbp_25), 3)
                        char temp21_1 = temp0_658 & 1
                        cond:70_1 = temp21_1 != 0
                        cond:71_1 = temp21_1 == 0
                        
                        if (temp21_1 == 0)
                        label_140227e9f:
                            
                            if (cond:71_1)
                                goto label_140227d29
                            
                            goto label_140227eb4
                        
                    label_140227d1e:
                        var_5a8 = _mm_blend_epi16(var_5a8, zmm4, 3)
                        bool cond:92_1
                        bool cond:93_1
                        bool cond:109_1
                        bool cond:110_1
                        
                        if (not(cond:70_1))
                        label_140227d29:
                            arg6 = zmm12
                            char temp34_1 = temp0_658 & 2
                            cond:92_1 = temp34_1 != 0
                            cond:93_1 = temp34_1 == 0
                            cond:109_1 = temp34_1 != 0
                            cond:110_1 = temp34_1 == 0
                            
                            if (temp34_1 == 0)
                                goto label_140227eca
                            
                            goto label_140227d42
                        
                    label_140227eb4:
                        var_508 = _mm_blend_epi16(var_508, zmm2, 3)
                        arg6 = zmm12
                        char temp33_1 = temp0_658 & 2
                        cond:92_1 = temp33_1 != 0
                        cond:93_1 = temp33_1 == 0
                        cond:109_1 = temp33_1 != 0
                        cond:110_1 = temp33_1 == 0
                        
                        if (temp33_1 == 0)
                        label_140227eca:
                            zmm12 = zx.o(0)
                            zmm4 = var_5a8
                            
                            if (cond:93_1)
                                goto label_140227d55
                            
                            goto label_140227ed8
                        
                    label_140227d42:
                        var_598 = _mm_insert_ps(var_598, zmm15, 0x10)
                        zmm12 = zx.o(0)
                        zmm4 = var_5a8
                        
                        if (not(cond:92_1))
                        label_140227d55:
                            zmm15 = var_4d8_1
                            
                            if (cond:110_1)
                                goto label_140227eef
                            
                            goto label_140227d73
                        
                    label_140227ed8:
                        zmm4 = _mm_insert_ps(zmm4, zmm10, 0x10)
                        zmm15 = var_4d8_1
                        bool cond:144_1
                        bool cond:164_1
                        bool cond:165_1
                        
                        if (cond:109_1)
                        label_140227d73:
                            zmm1 = _mm_insert_ps(var_508, zmm1, 0x10)
                            char temp50_1 = temp0_658 & 4
                            cond:144_1 = temp50_1 == 0
                            cond:164_1 = temp50_1 == 0
                            cond:165_1 = temp50_1 != 0
                            
                            if (temp50_1 != 0)
                                var_598 = _mm_insert_ps(var_598, zmm9, 0x20)
                        else
                        label_140227eef:
                            zmm1 = var_508
                            char temp51_1 = temp0_658 & 4
                            cond:144_1 = temp51_1 == 0
                            cond:164_1 = temp51_1 == 0
                            cond:165_1 = temp51_1 != 0
                            
                            if (temp51_1 != 0)
                                var_598 = _mm_insert_ps(var_598, zmm9, 0x20)
                        
                        zmm9 = var_568_1
                        arg7 = var_498_2
                        
                        if (not(cond:144_1))
                            zmm4 = _mm_insert_ps(zmm4, arg8, 0x20)
                            
                            if (cond:165_1)
                                goto label_1402280c9
                            
                            goto label_140227f30
                        
                        bool cond:211_1
                        bool cond:212_1
                        bool cond:231_1
                        bool cond:232_1
                        
                        if (not(cond:164_1))
                        label_1402280c9:
                            zmm1 = _mm_insert_ps(zmm1, zmm3, 0x20)
                            char temp74_1 = temp0_658 & 8
                            cond:211_1 = temp74_1 == 0
                            cond:212_1 = temp74_1 != 0
                            cond:231_1 = temp74_1 == 0
                            cond:232_1 = temp74_1 != 0
                            
                            if (temp74_1 != 0)
                                goto label_140227f44
                            
                            goto label_1402280d8
                        
                    label_140227f30:
                        char temp73_1 = temp0_658 & 8
                        cond:211_1 = temp73_1 == 0
                        cond:212_1 = temp73_1 != 0
                        cond:231_1 = temp73_1 == 0
                        cond:232_1 = temp73_1 != 0
                        
                        if (temp73_1 != 0)
                        label_140227f44:
                            var_598 = _mm_insert_ps(var_598, arg6, 0x30)
                            
                            if (cond:212_1)
                                goto label_1402280de
                            
                            goto label_140227f4f
                        
                    label_1402280d8:
                        
                        if (cond:211_1)
                        label_140227f4f:
                            
                            if (not(cond:231_1))
                                zmm1 = _mm_insert_ps(zmm1, arg5, 0x30)
                        else
                        label_1402280de:
                            zmm4 = _mm_insert_ps(zmm4, arg9, 0x30)
                            
                            if (cond:232_1)
                                zmm1 = _mm_insert_ps(zmm1, arg5, 0x30)
                        
                        var_508 = zmm1
                    
                    arg11 &= not.o(arg7)
                    int32_t var_408_2[0x4] = arg11
                    zmm1 = _mm_slli_epi32(arg11, 0x1f)
                    char temp0_699 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_699 == 0)
                        zmm1 = var_508
                        arg8 = var_548_2
                        zmm3 = var_588_3
                        arg11 = var_3f8_2
                    else
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_558, 0x1f), 0x1f)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm2
                        zmm10 = var_3e8_2
                        arg11 = var_3f8_2
                        arg8 = arg11
                        
                        if (_mm_movemask_ps(zmm1) != 0)
                            zmm0 = data_1434426c0
                            arg6 = zmm0
                            arg5 = _mm_add_epi64(arg11, zmm0)
                            arg7 = zmm4
                            zmm4 = _mm_add_epi64(var_3e8_2, zmm0)
                            zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                            zmm10 = _mm_blendv_ps(var_3e8_2, zmm4, zmm3)
                            zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                            arg8 = _mm_blendv_ps(arg11, arg5, zmm4)
                            zmm15 = __paddq_xmmdq_memdq(zmm15, var_4a8_3)
                            arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_448_1, var_478_3), 
                                var_518_2)
                            zmm15 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm15, var_4f8_4), arg6)
                            arg6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, arg6), zmm3)
                            zmm0 = zmm4
                            zmm4 = arg7
                            float temp0_717[0x4] = _mm_blendv_ps(zx.o(0), zmm15, zmm0)
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
                        uint128_t var_378
                        
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
                            zmm4 = _mm_add_epi64(arg8, zmm0)
                            arg5 = _mm_add_epi64(zmm10, zmm0)
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm1 = _mm_blendv_ps(zmm10, arg5, _mm_shuffle_epi32(zmm2, 0x50))
                            zmm2 = _mm_blendv_ps(arg8, zmm4, _mm_shuffle_epi32(zmm2, 0xfa))
                            
                            if ((temp0_730 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_378, *zmm10.q, 1)
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
                                goto label_14022834a
                            
                            goto label_140228287
                        
                        if ((temp0_699 & 4) == 0)
                        label_140228287:
                            var_378 = zmm0
                            
                            if ((temp0_699 & 8) != 0)
                                zmm4 = _mm_blend_ps(zmm4, zmm3, 8)
                        else
                        label_14022834a:
                            zmm4 = _mm_blend_ps(zmm4, zmm3, 4)
                            var_378 = zmm0
                            
                            if ((temp0_699 & 8) != 0)
                                zmm4 = _mm_blend_ps(zmm4, zmm3, 8)
                        
                        arg5 = zmm4
                        zmm3 = data_142fc95e0
                        zmm0 = var_558 & zmm3
                        char temp0_748 = _mm_movemask_ps(_mm_slli_epi32(
                            var_408_2 & _mm_cmpeq_epi32(zmm0, zmm3), 0x1f))
                        uint128_t var_3d8
                        
                        if (temp0_748 != 0)
                            if ((temp0_748 & 1) == 0)
                                zmm4 = arg5
                                
                                if ((temp0_748 & 2) != 0)
                                    goto label_14022854c
                                
                                goto label_1402282f1
                            
                            var_3d8 = _mm_blend_epi16(var_3d8, zx.o(*zmm1.q), 3)
                            zmm4 = arg5
                            
                            if ((temp0_748 & 2) != 0)
                            label_14022854c:
                                var_3d8 = __insertps_xmmps_memd_immb(var_3d8, 
                                    *_mm_extract_epi64(zmm1, 1), 0x10)
                                zmm1 = var_508
                                
                                if ((temp0_748 & 4) == 0)
                                    goto label_140228303
                                
                                goto label_140228579
                            
                        label_1402282f1:
                            zmm1 = var_508
                            
                            if ((temp0_748 & 4) == 0)
                            label_140228303:
                                zmm3 = var_588_3
                                
                                if ((temp0_748 & 8) != 0)
                                    goto label_1402285a4
                                
                                goto label_140228316
                            
                        label_140228579:
                            var_3d8 = __insertps_xmmps_memd_immb(var_3d8, *zmm2.q, 0x20)
                            zmm3 = var_588_3
                            
                            if ((temp0_748 & 8) == 0)
                            label_140228316:
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(var_3d8)
                                
                                if ((temp0_699 & 1) == 0)
                                    goto label_14022838a
                                
                                goto label_140228324
                            
                        label_1402285a4:
                            var_3d8 = __insertps_xmmps_memd_immb(var_3d8, 
                                *_mm_extract_epi64(zmm2, 1), 0x30)
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(var_3d8)
                            
                            if ((temp0_699 & 1) == 0)
                                goto label_14022838a
                            
                            goto label_140228324
                        
                        zmm1 = var_508
                        zmm3 = var_588_3
                        zmm4 = arg5
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm12) & not.o(var_3d8)
                        
                        if ((temp0_699 & 1) == 0)
                        label_14022838a:
                            
                            if ((temp0_699 & 2) == 0)
                                goto label_14022832f
                            
                            goto label_14022838f
                        
                    label_140228324:
                        zmm1 = _mm_blend_epi16(zmm1, zmm0, 3)
                        
                        if ((temp0_699 & 2) == 0)
                        label_14022832f:
                            
                            if ((temp0_699 & 4) == 0)
                                goto label_14022839a
                            
                            goto label_140228334
                        
                    label_14022838f:
                        zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc)
                        
                        if ((temp0_699 & 4) != 0)
                        label_140228334:
                            zmm1 = _mm_blend_epi16(zmm1, zmm0, 0x30)
                            
                            if ((temp0_699 & 8) != 0)
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                        else
                        label_14022839a:
                            
                            if ((temp0_699 & 8) != 0)
                                zmm1 = _mm_blend_epi16(zmm1, zmm0, 0xc0)
                
                var_5a8 = zmm4
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm3 & var_428_2, 0x1f)) == 0)
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
                        zmm12 = var_3e8_2
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
                            zmm0 = data_1434426c0
                            zmm4 = _mm_add_epi64(var_538_1, zmm0)
                            int32_t temp0_767[0x4] = _mm_add_epi64(var_578_1, zmm0)
                            float temp0_768[0x4] = _mm_unpacklo_ps(zmm2, zmm2.q)
                            zmm1 = _mm_blendv_ps(var_578_1, temp0_767, temp0_768)
                            zmm2 = _mm_unpackhi_ps(zmm2, zmm2)
                            zmm9 = _mm_blendv_ps(var_538_1, zmm4, zmm2)
                            char rcx_55 = temp0_765.b
                            uint128_t var_278
                            
                            if ((rcx_55 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_278, *var_578_1[0].q, 1)
                                
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
                                    goto label_140228662
                                
                                goto label_140228604
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_538_1.q, 0x20)
                            char rsi_18
                            
                            if ((rcx_55 & 8) != 0)
                            label_140228662:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_538_1, 1), 0x30)
                                rsi_18 = _mm_movemask_ps(arg5)
                                zmm12 = zx.o(0)
                                
                                if ((rsi_18 & 1) != 0)
                                    goto label_140228615
                                
                                goto label_140228675
                            
                        label_140228604:
                            rsi_18 = _mm_movemask_ps(arg5)
                            zmm12 = zx.o(0)
                            
                            if ((rsi_18 & 1) == 0)
                            label_140228675:
                                
                                if ((rsi_18 & 2) != 0)
                                label_14022867b:
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 2)
                                    
                                    if ((rsi_18 & 4) != 0)
                                        goto label_140228628
                                    
                                    goto label_14022868c
                            else
                            label_140228615:
                                zmm12 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rsi_18 & 2) != 0)
                                    goto label_14022867b
                            
                            if ((rsi_18 & 4) == 0)
                            label_14022868c:
                                var_278 = zmm0
                                
                                if ((rsi_18 & 8) != 0)
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 8)
                            else
                            label_140228628:
                                zmm12 = _mm_blend_ps(zmm12, zmm0, 4)
                                var_278 = zmm0
                                
                                if ((rsi_18 & 8) != 0)
                                    zmm12 = _mm_blend_ps(zmm12, zmm0, 8)
                            
                            zmm0 = data_1434426c0
                            var_578_1 = _mm_blendv_ps(zmm1, _mm_add_epi64(zmm1, zmm0), temp0_768)
                            var_538_1 = _mm_blendv_ps(zmm9, _mm_add_epi64(zmm9, zmm0), zmm2)
                            uint128_t var_288
                            
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
                                    goto label_14022877c
                                
                                goto label_14022872d
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm9.q, 0x20)
                            
                            if ((rcx_55 & 8) != 0)
                            label_14022877c:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm9, 1), 0x30)
                                zmm9 = zx.o(0)
                                
                                if ((rsi_18 & 1) != 0)
                                    goto label_14022873b
                                
                                goto label_14022878c
                            
                        label_14022872d:
                            zmm9 = zx.o(0)
                            
                            if ((rsi_18 & 1) == 0)
                            label_14022878c:
                                
                                if ((rsi_18 & 2) != 0)
                                label_140228792:
                                    zmm9 = _mm_blend_ps(zmm9, zmm0, 2)
                                    
                                    if ((rsi_18 & 4) != 0)
                                        goto label_14022874e
                                    
                                    goto label_1402287a3
                            else
                            label_14022873b:
                                zmm9 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rsi_18 & 2) != 0)
                                    goto label_140228792
                            
                            if ((rsi_18 & 4) == 0)
                            label_1402287a3:
                                var_288 = zmm0
                                
                                if ((rsi_18 & 8) != 0)
                                    zmm9 = _mm_blend_ps(zmm9, zmm0, 8)
                            else
                            label_14022874e:
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
                            zmm3 = _mm_add_epi64(arg5, zmm0)
                            zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                            float temp0_808[0x4] = _mm_blendv_ps(arg5, zmm3, zmm2)
                            zmm3 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm1 = _mm_blendv_ps(arg7, temp0_805, zmm3)
                            uint128_t var_2c8
                            
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
                                    goto label_1402288e7
                                
                                goto label_140228887
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_538_1[0].q, 0x20)
                            char rsi_19
                            
                            if ((temp0_803 & 8) != 0)
                            label_1402288e7:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_538_1, 1), 0x30)
                                rsi_19 = _mm_movemask_ps(zmm4)
                                arg8 = zx.o(0)
                                
                                if ((rsi_19 & 1) != 0)
                                    goto label_14022889a
                                
                                goto label_1402288fb
                            
                        label_140228887:
                            rsi_19 = _mm_movemask_ps(zmm4)
                            arg8 = zx.o(0)
                            
                            if ((rsi_19 & 1) == 0)
                            label_1402288fb:
                                
                                if ((rsi_19 & 2) != 0)
                                label_140228901:
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 0xc)
                                    
                                    if ((rsi_19 & 4) != 0)
                                        goto label_1402288ad
                                    
                                    goto label_140228912
                            else
                            label_14022889a:
                                arg8 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rsi_19 & 2) != 0)
                                    goto label_140228901
                            
                            if ((rsi_19 & 4) == 0)
                            label_140228912:
                                var_2c8 = zmm0
                                
                                if ((rsi_19 & 8) != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 0xc0)
                            else
                            label_1402288ad:
                                arg8 = _mm_blend_epi16(arg8, zmm0, 0x30)
                                var_2c8 = zmm0
                                
                                if ((rsi_19 & 8) != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 0xc0)
                            
                            zmm0 = data_1434426c0
                            float temp0_822[0x4] =
                                _mm_blendv_ps(temp0_808, _mm_add_epi64(temp0_808, zmm0), zmm2)
                            var_538_1 = _mm_blendv_ps(zmm1, _mm_add_epi64(zmm1, zmm0), zmm3)
                            var_578_1 = temp0_822
                            uint128_t var_2b8
                            
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
                                    goto label_140228a0a
                                
                                goto label_1402289bf
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm1.q, 0x20)
                            
                            if ((temp0_803 & 8) != 0)
                            label_140228a0a:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm1, 1), 0x30)
                                zmm2 = zx.o(0)
                                
                                if ((rsi_19 & 1) != 0)
                                    goto label_1402289cb
                                
                                goto label_140228a19
                            
                        label_1402289bf:
                            zmm2 = zx.o(0)
                            
                            if ((rsi_19 & 1) == 0)
                            label_140228a19:
                                
                                if ((rsi_19 & 2) != 0)
                                label_140228a1f:
                                    zmm2 = _mm_blend_ps(zmm2, zmm0, 2)
                                    
                                    if ((rsi_19 & 4) != 0)
                                        goto label_1402289dd
                                    
                                    goto label_140228a2f
                            else
                            label_1402289cb:
                                zmm2 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rsi_19 & 2) != 0)
                                    goto label_140228a1f
                            
                            if ((rsi_19 & 4) == 0)
                            label_140228a2f:
                                var_2b8 = zmm0
                                
                                if ((rsi_19 & 8) != 0)
                                    zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                            else
                            label_1402289dd:
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
                            zmm4 = _mm_add_epi64(arg7, zmm0)
                            arg5 = var_578_1
                            float temp0_840[0x4] = _mm_blendv_ps(arg5, _mm_add_epi64(arg5, zmm0), 
                                _mm_shuffle_epi32(zmm1, 0x50))
                            zmm1 = _mm_blendv_ps(arg7, zmm4, _mm_shuffle_epi32(zmm1, 0xfa))
                            uint128_t var_2a8
                            
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
                                    goto label_140228b8d
                                
                                goto label_140228b19
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_538_1.q, 0x20)
                            char rsi_20
                            
                            if ((temp0_835 & 8) != 0)
                            label_140228b8d:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_538_1, 1), 0x30)
                                rsi_20 = _mm_movemask_ps(zmm3)
                                zmm3 = zx.o(0)
                                
                                if ((rsi_20 & 1) != 0)
                                    goto label_140228b28
                                
                                goto label_140228b9f
                            
                        label_140228b19:
                            rsi_20 = _mm_movemask_ps(zmm3)
                            zmm3 = zx.o(0)
                            
                            if ((rsi_20 & 1) != 0)
                            label_140228b28:
                                zmm3 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rsi_20 & 2) != 0)
                                    goto label_140228ba5
                                
                                goto label_140228b34
                            
                        label_140228b9f:
                            
                            if ((rsi_20 & 2) == 0)
                            label_140228b34:
                                
                                if ((rsi_20 & 4) != 0)
                                label_140228b3a:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                                    
                                    if ((rsi_20 & 8) != 0)
                                        goto label_140228bb7
                                    
                                    goto label_140228b49
                            else
                            label_140228ba5:
                                zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                                
                                if ((rsi_20 & 4) != 0)
                                    goto label_140228b3a
                            
                            if ((rsi_20 & 8) != 0)
                            label_140228bb7:
                                zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                                var_2a8 = zmm0
                                
                                if ((temp0_835 & 1) == 0)
                                    goto label_140228b53
                                
                                goto label_140228be2
                            
                        label_140228b49:
                            var_2a8 = zmm0
                            uint128_t var_298
                            
                            if ((temp0_835 & 1) != 0)
                            label_140228be2:
                                zmm0 = _mm_blend_epi16(var_298, zx.o(*temp0_840[0].q), 3)
                                
                                if ((temp0_835 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_840, 1), 0x10)
                            else
                            label_140228b53:
                                zmm0 = var_298
                                
                                if ((temp0_835 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_840, 1), 0x10)
                            
                            arg7 = zmm12
                            
                            if ((temp0_835 & 4) == 0)
                                if ((temp0_835 & 8) != 0)
                                    goto label_140228c51
                                
                                goto label_140228c06
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm1.q, 0x20)
                            
                            if ((temp0_835 & 8) != 0)
                            label_140228c51:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm1, 1), 0x30)
                                zmm1 = zx.o(0)
                                
                                if ((rsi_20 & 1) != 0)
                                    goto label_140228c12
                                
                                goto label_140228c60
                            
                        label_140228c06:
                            zmm1 = zx.o(0)
                            
                            if ((rsi_20 & 1) == 0)
                            label_140228c60:
                                
                                if ((rsi_20 & 2) != 0)
                                label_140228c66:
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                                    
                                    if ((rsi_20 & 4) != 0)
                                        goto label_140228c24
                                    
                                    goto label_140228c76
                            else
                            label_140228c12:
                                zmm1 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((rsi_20 & 2) != 0)
                                    goto label_140228c66
                            
                            if ((rsi_20 & 4) == 0)
                            label_140228c76:
                                var_298 = zmm0
                                
                                if ((rsi_20 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                            label_140228c24:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 4)
                                var_298 = zmm0
                                
                                if ((rsi_20 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                        
                        zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_448_1, var_478_3), 
                            var_518_2)
                        zmm0 = data_1434426c0
                        float temp0_865[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm4, zmm0), 
                            _mm_shuffle_epi32(zmm10, 0x50))
                        arg6 = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(
                                __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8_1, var_4a8_3), 
                                    var_4f8_4), 
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
                        zmm2 = _mm_mul_ps(zmm2, _mm_div_ps(zmm0, arg5))
                        zmm0 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm4, 0x15), arg6)), arg5)
                        char temp67_1 = temp0_760 & 1
                        
                        if (temp67_1 != 0)
                            var_598 = _mm_blend_ps(var_598, arg7, 1)
                        
                        zmm9 = var_568_1
                        zmm12 = var_3e8_2
                        zmm1 = _mm_mul_ps(zmm1, zmm0)
                        arg8 = _mm_add_ps(arg8, zmm2)
                        
                        if (temp67_1 != 0)
                            var_5a8 = _mm_blend_ps(var_5a8, arg8, 1)
                        
                        zmm0 = var_598
                        float temp0_892[0x4] = _mm_add_ps(zmm3, zmm1)
                        bool cond:251_1
                        bool cond:279_1
                        bool cond:280_1
                        
                        if (temp67_1 == 0)
                            zmm1 = var_508_1
                            char temp91_1 = temp0_760 & 2
                            cond:251_1 = temp91_1 == 0
                            cond:279_1 = temp91_1 == 0
                            cond:280_1 = temp91_1 != 0
                            
                            if (temp91_1 != 0)
                                zmm0 = _mm_blend_ps(zmm0, arg7, 2)
                        else
                            zmm1 = _mm_blend_ps(var_508_1, temp0_892, 1)
                            char temp92_1 = temp0_760 & 2
                            cond:251_1 = temp92_1 == 0
                            cond:279_1 = temp92_1 == 0
                            cond:280_1 = temp92_1 != 0
                            
                            if (temp92_1 != 0)
                                zmm0 = _mm_blend_ps(zmm0, arg7, 2)
                        
                        if (not(cond:251_1))
                            var_5a8 = _mm_blend_ps(var_5a8, arg8, 2)
                            
                            if (cond:280_1)
                                goto label_140228e45
                            
                            goto label_140228e0f
                        
                        bool cond:311_1
                        bool cond:312_1
                        bool cond:329_1
                        bool cond:330_1
                        
                        if (not(cond:279_1))
                        label_140228e45:
                            zmm1 = _mm_blend_ps(zmm1, temp0_892, 2)
                            char temp116_1 = temp0_760 & 4
                            cond:311_1 = temp116_1 == 0
                            cond:312_1 = temp116_1 != 0
                            cond:329_1 = temp116_1 == 0
                            cond:330_1 = temp116_1 != 0
                            
                            if (temp116_1 != 0)
                                goto label_140228e14
                            
                            goto label_140228e50
                        
                    label_140228e0f:
                        char temp115_1 = temp0_760 & 4
                        cond:311_1 = temp115_1 == 0
                        cond:312_1 = temp115_1 != 0
                        cond:329_1 = temp115_1 == 0
                        cond:330_1 = temp115_1 != 0
                        
                        if (temp115_1 == 0)
                        label_140228e50:
                            
                            if (not(cond:311_1))
                            label_140228e5d:
                                var_5a8 = _mm_blend_ps(var_5a8, arg8, 4)
                                
                                if (cond:330_1)
                                    goto label_140228e1e
                                
                                goto label_140228e63
                        else
                        label_140228e14:
                            zmm0 = _mm_blend_ps(zmm0, arg7, 4)
                            
                            if (cond:312_1)
                                goto label_140228e5d
                        
                        bool cond:347_1
                        bool cond:361_1
                        bool cond:362_1
                        bool cond:348_1
                        
                        if (cond:329_1)
                        label_140228e63:
                            char temp129_1 = temp0_760 & 8
                            cond:347_1 = temp129_1 == 0
                            cond:348_1 = temp129_1 != 0
                            cond:361_1 = temp129_1 == 0
                            cond:362_1 = temp129_1 != 0
                            
                            if (temp129_1 != 0)
                            label_140228e68:
                                zmm0 = _mm_blend_ps(zmm0, arg7, 8)
                                
                                if (cond:348_1)
                                    goto label_140228e36
                                
                                goto label_140228e70
                        else
                        label_140228e1e:
                            zmm1 = _mm_blend_ps(zmm1, temp0_892, 4)
                            char temp130_1 = temp0_760 & 8
                            cond:347_1 = temp130_1 == 0
                            cond:348_1 = temp130_1 != 0
                            cond:361_1 = temp130_1 == 0
                            cond:362_1 = temp130_1 != 0
                            
                            if (temp130_1 != 0)
                                goto label_140228e68
                        
                        if (cond:347_1)
                        label_140228e70:
                            var_598 = zmm0
                            
                            if (not(cond:361_1))
                                zmm1 = _mm_blend_ps(zmm1, temp0_892, 8)
                        else
                        label_140228e36:
                            var_5a8 = _mm_blend_ps(var_5a8, arg8, 8)
                            var_598 = zmm0
                            
                            if (cond:362_1)
                                zmm1 = _mm_blend_ps(zmm1, temp0_892, 8)
                        
                        zmm3 = var_588_3
                    
                    zmm15 ^= var_428_2
                    
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
                        zmm9 = __pcmpeqd_xmmdq_memdq(var_468, data_1434422d0)
                        arg6 = zmm3 & zmm9
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
                                zmm4 = _mm_add_epi64(zmm12, zmm0)
                                zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                                zmm12 = _mm_blendv_ps(zmm12, zmm4, zmm3)
                                zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                                arg11 = _mm_blendv_ps(arg11, arg5, zmm4)
                                arg5 = __paddq_xmmdq_memdq(var_4d8_1, var_4a8_3)
                                int32_t temp0_920[0x4] = __paddq_xmmdq_memdq(
                                    __paddq_xmmdq_memdq(var_448_1, var_478_3), var_518_2)
                                arg5 = __paddq_xmmdq_memdq(arg5, var_4f8_4)
                                zmm0 = data_1434426c0
                                arg5 = _mm_add_epi64(arg5, zmm0)
                                arg7 = _mm_add_epi64(temp0_920, zmm0)
                                zmm1 = _mm_blendv_ps(zx.o(0), arg7, zmm3)
                                float temp0_925[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm4)
                                int64_t rax_201 = _mm_extract_epi64(zmm1, 1)
                                int64_t rbx_24 = temp0_925[0].q
                                int64_t rdi_4 = _mm_extract_epi64(temp0_925, 1)
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
                                zmm4 = _mm_add_epi64(arg11, zmm0)
                                arg5 = _mm_add_epi64(zmm12, zmm0)
                                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                zmm3 = _mm_blendv_ps(zmm12, arg5, _mm_shuffle_epi32(zmm2, 0x50))
                                zmm2 = _mm_blendv_ps(arg11, zmm4, _mm_shuffle_epi32(zmm2, 0xfa))
                                uint128_t var_2f8
                                
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
                                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm4.q), 2)
                                    
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
                                    goto label_140229272
                                
                                goto label_140229204
                            
                            if ((temp0_907 & 4) == 0)
                            label_140229204:
                                
                                if ((temp0_907 & 8) != 0)
                                    var_5a8 = _mm_blend_epi16(var_5a8, zmm1, 0xc0)
                            else
                            label_140229272:
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
                                uint128_t var_2e8
                                
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
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2.q), 2)
                                    
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
                                    goto label_140229468
                                
                                goto label_140229358
                            
                            if ((temp0_907 & 4) == 0)
                            label_140229358:
                                
                                if ((temp0_907 & 8) != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 0xc0)
                            else
                            label_140229468:
                                arg8 = _mm_blend_epi16(arg8, zmm0, 0x30)
                                
                                if ((temp0_907 & 8) != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm0, 0xc0)
                        
                        zmm15 = (zmm15 ^ zmm9) & zmm3
                        
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
                                    label_140229494:
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 3)
                                        
                                        if (temp66_1 != 0)
                                            goto label_1402293d8
                                        
                                        goto label_14022949f
                                else
                                    var_598 = _mm_blend_epi16(var_598, zmm12, 3)
                                    zmm9 = zmm10
                                    
                                    if (temp66_1 != 0)
                                        goto label_140229494
                                
                                bool cond:249_1
                                bool cond:250_1
                                bool cond:277_1
                                bool cond:278_1
                                
                                if (temp66_1 != 0)
                                label_1402293d8:
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 3)
                                    char temp90_1 = temp0_981 & 2
                                    cond:249_1 = temp90_1 == 0
                                    cond:250_1 = temp90_1 != 0
                                    cond:277_1 = temp90_1 == 0
                                    cond:278_1 = temp90_1 != 0
                                    
                                    if (temp90_1 != 0)
                                        goto label_1402294b5
                                    
                                    goto label_1402293e8
                                
                            label_14022949f:
                                char temp89_1 = temp0_981 & 2
                                cond:249_1 = temp89_1 == 0
                                cond:250_1 = temp89_1 != 0
                                cond:277_1 = temp89_1 == 0
                                cond:278_1 = temp89_1 != 0
                                
                                if (temp89_1 == 0)
                                label_1402293e8:
                                    
                                    if (not(cond:249_1))
                                    label_1402293fa:
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0xc)
                                        
                                        if (cond:278_1)
                                            goto label_1402294c7
                                        
                                        goto label_140229405
                                else
                                label_1402294b5:
                                    var_598 = _mm_blend_epi16(var_598, zmm12, 0xc)
                                    
                                    if (cond:250_1)
                                        goto label_1402293fa
                                
                                bool cond:309_1
                                bool cond:310_1
                                bool cond:327_1
                                bool cond:328_1
                                
                                if (not(cond:277_1))
                                label_1402294c7:
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 0xc)
                                    char temp114_1 = temp0_981 & 4
                                    cond:309_1 = temp114_1 == 0
                                    cond:310_1 = temp114_1 != 0
                                    cond:327_1 = temp114_1 == 0
                                    cond:328_1 = temp114_1 != 0
                                    
                                    if (temp114_1 != 0)
                                        goto label_14022941b
                                    
                                    goto label_1402294d7
                                
                            label_140229405:
                                char temp113_1 = temp0_981 & 4
                                cond:309_1 = temp113_1 == 0
                                cond:310_1 = temp113_1 != 0
                                cond:327_1 = temp113_1 == 0
                                cond:328_1 = temp113_1 != 0
                                
                                if (temp113_1 == 0)
                                label_1402294d7:
                                    
                                    if (not(cond:309_1))
                                    label_1402294e9:
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0x30)
                                        
                                        if (cond:328_1)
                                            goto label_14022942d
                                        
                                        goto label_1402294f4
                                else
                                label_14022941b:
                                    var_598 = _mm_blend_epi16(var_598, zmm12, 0x30)
                                    
                                    if (cond:310_1)
                                        goto label_1402294e9
                                
                                bool cond:345_1
                                bool cond:346_1
                                bool cond:359_1
                                bool cond:360_1
                                
                                if (not(cond:327_1))
                                label_14022942d:
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 0x30)
                                    char temp128_1 = temp0_981 & 8
                                    cond:345_1 = temp128_1 == 0
                                    cond:346_1 = temp128_1 != 0
                                    cond:359_1 = temp128_1 == 0
                                    cond:360_1 = temp128_1 == 0
                                    
                                    if (temp128_1 != 0)
                                        goto label_14022950a
                                    
                                    goto label_14022943d
                                
                            label_1402294f4:
                                char temp127_1 = temp0_981 & 8
                                cond:345_1 = temp127_1 == 0
                                cond:346_1 = temp127_1 != 0
                                cond:359_1 = temp127_1 == 0
                                cond:360_1 = temp127_1 == 0
                                
                                if (temp127_1 != 0)
                                label_14022950a:
                                    var_598 = _mm_blend_epi16(var_598, zmm12, 0xc0)
                                    
                                    if (cond:346_1)
                                        goto label_14022944f
                                    
                                    goto label_140229516
                                
                            label_14022943d:
                                
                                if (cond:345_1)
                                label_140229516:
                                    
                                    if (not(cond:359_1))
                                        arg8 = _mm_blend_epi16(arg8, zmm12, 0xc0)
                                else
                                label_14022944f:
                                    var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0xc0)
                                    
                                    if (not(cond:360_1))
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
                                bool cond:275_1
                                bool cond:276_1
                                bool cond:295_1
                                bool cond:296_1
                                
                                if (temp78_1 != 0)
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 3)
                                    char temp106_1 = temp0_996 & 2
                                    cond:275_1 = temp106_1 == 0
                                    cond:276_1 = temp106_1 != 0
                                    cond:295_1 = temp106_1 == 0
                                    cond:296_1 = temp106_1 != 0
                                    
                                    if (temp106_1 != 0)
                                        goto label_14022963a
                                    
                                    goto label_1402295ed
                                
                                char temp105_1 = temp0_996 & 2
                                cond:275_1 = temp105_1 == 0
                                cond:276_1 = temp105_1 != 0
                                cond:295_1 = temp105_1 == 0
                                cond:296_1 = temp105_1 != 0
                                
                                if (temp105_1 == 0)
                                label_1402295ed:
                                    
                                    if (not(cond:275_1))
                                    label_1402295fb:
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0xc)
                                        
                                        if (cond:296_1)
                                            goto label_140229645
                                        
                                        goto label_140229602
                                else
                                label_14022963a:
                                    zmm4 = _mm_blend_epi16(zmm4, zmm12, 0xc)
                                    
                                    if (cond:276_1)
                                        goto label_1402295fb
                                
                                bool cond:325_1
                                bool cond:326_1
                                bool cond:339_1
                                bool cond:340_1
                                
                                if (not(cond:295_1))
                                label_140229645:
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 0xc)
                                    char temp126_1 = temp0_996 & 4
                                    cond:325_1 = temp126_1 == 0
                                    cond:326_1 = temp126_1 != 0
                                    cond:339_1 = temp126_1 == 0
                                    cond:340_1 = temp126_1 != 0
                                    
                                    if (temp126_1 != 0)
                                        goto label_140229607
                                    
                                    goto label_140229651
                                
                            label_140229602:
                                char temp125_1 = temp0_996 & 4
                                cond:325_1 = temp125_1 == 0
                                cond:326_1 = temp125_1 != 0
                                cond:339_1 = temp125_1 == 0
                                cond:340_1 = temp125_1 != 0
                                
                                if (temp125_1 == 0)
                                label_140229651:
                                    
                                    if (not(cond:325_1))
                                    label_14022965f:
                                        var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0x30)
                                        
                                        if (cond:340_1)
                                            goto label_140229612
                                        
                                        goto label_140229666
                                else
                                label_140229607:
                                    zmm4 = _mm_blend_epi16(zmm4, zmm12, 0x30)
                                    
                                    if (cond:326_1)
                                        goto label_14022965f
                                
                                bool cond:357_1
                                bool cond:358_1
                                bool cond:367_1
                                bool cond:368_1
                                
                                if (not(cond:339_1))
                                label_140229612:
                                    arg8 = _mm_blend_epi16(arg8, zmm12, 0x30)
                                    char temp138_1 = temp0_996 & 8
                                    cond:357_1 = temp138_1 == 0
                                    cond:358_1 = temp138_1 != 0
                                    cond:367_1 = temp138_1 == 0
                                    cond:368_1 = temp138_1 != 0
                                    
                                    if (temp138_1 != 0)
                                        goto label_14022966b
                                    
                                    goto label_14022961e
                                
                            label_140229666:
                                char temp137_1 = temp0_996 & 8
                                cond:357_1 = temp137_1 == 0
                                cond:358_1 = temp137_1 != 0
                                cond:367_1 = temp137_1 == 0
                                cond:368_1 = temp137_1 != 0
                                
                                if (temp137_1 != 0)
                                label_14022966b:
                                    zmm4 = _mm_blend_epi16(zmm4, zmm12, 0xc0)
                                    
                                    if (cond:358_1)
                                        goto label_14022962c
                                    
                                    goto label_140229674
                                
                            label_14022961e:
                                
                                if (cond:357_1)
                                label_140229674:
                                    
                                    if (not(cond:367_1))
                                        arg8 = _mm_blend_epi16(arg8, zmm12, 0xc0)
                                else
                                label_14022962c:
                                    var_5a8 = _mm_blend_epi16(var_5a8, zmm12, 0xc0)
                                    
                                    if (cond:368_1)
                                        arg8 = _mm_blend_epi16(arg8, zmm12, 0xc0)
                                
                                var_508 = arg8
                                arg8 = var_548_2
                
                var_598 = zmm4
                zmm4 = _mm_sub_ps(zmm4, arg11)
                float temp0_1011[0x4] = _mm_sub_ps(var_5a8, arg9)
                zmm4 = _mm_mul_ps(zmm4, arg8)
                zmm1 = arg11
                char temp26_1 = temp0_645 & 1
                
                if (temp26_1 != 0)
                    zmm1.d = arg11.d f+ zmm4.d
                
                zmm0 = _mm_sub_ps(var_508, arg10)
                float temp0_1014[0x4] = _mm_mul_ps(temp0_1011, arg8)
                zmm2 = arg9
                
                if (temp26_1 != 0)
                    zmm2.d = arg9.d f+ temp0_1014[0]
                    arg8 = _mm_mul_ps(arg8, zmm0)
                    zmm0 = arg10
                    
                    if (temp26_1 != 0)
                        goto label_14022973e
                    
                    goto label_1402296e3
                
                arg8 = _mm_mul_ps(arg8, zmm0)
                zmm0 = arg10
                bool cond:123_1
                bool cond:124_1
                bool cond:142_1
                bool cond:143_1
                
                if (temp26_1 != 0)
                label_14022973e:
                    zmm0.d = arg10.d f+ arg8[0]
                    arg11 = _mm_add_ps(arg11, zmm4)
                    char temp43_1 = temp0_645 & 2
                    cond:123_1 = temp43_1 == 0
                    cond:124_1 = temp43_1 != 0
                    cond:142_1 = temp43_1 == 0
                    cond:143_1 = temp43_1 != 0
                    
                    if (temp43_1 != 0)
                        goto label_1402296ec
                    
                    goto label_14022974c
                
            label_1402296e3:
                arg11 = _mm_add_ps(arg11, zmm4)
                char temp42_1 = temp0_645 & 2
                cond:123_1 = temp42_1 == 0
                cond:124_1 = temp42_1 != 0
                cond:142_1 = temp42_1 == 0
                cond:143_1 = temp42_1 != 0
                
                if (temp42_1 != 0)
                label_1402296ec:
                    zmm1 = _mm_blend_ps(zmm1, arg11, 2)
                    arg9 = _mm_add_ps(arg9, temp0_1014)
                    
                    if (cond:124_1)
                        goto label_140229752
                    
                    goto label_1402296f9
                
            label_14022974c:
                arg9 = _mm_add_ps(arg9, temp0_1014)
                
                if (not(cond:123_1))
                label_140229752:
                    zmm2 = _mm_blend_ps(zmm2, arg9, 2)
                    arg10 = _mm_add_ps(arg10, arg8)
                    
                    if (cond:143_1)
                        goto label_1402296ff
                    
                    goto label_14022975f
                
            label_1402296f9:
                arg10 = _mm_add_ps(arg10, arg8)
                bool cond:178_1
                bool cond:179_1
                bool cond:202_1
                bool cond:203_1
                
                if (not(cond:142_1))
                label_1402296ff:
                    zmm0 = _mm_blend_ps(zmm0, arg10, 2)
                    char temp65_1 = temp0_645 & 4
                    cond:178_1 = temp65_1 == 0
                    cond:179_1 = temp65_1 != 0
                    cond:202_1 = temp65_1 == 0
                    cond:203_1 = temp65_1 != 0
                    
                    if (temp65_1 != 0)
                        goto label_140229764
                    
                    goto label_14022970b
                
            label_14022975f:
                char temp64_1 = temp0_645 & 4
                cond:178_1 = temp64_1 == 0
                cond:179_1 = temp64_1 != 0
                cond:202_1 = temp64_1 == 0
                cond:203_1 = temp64_1 != 0
                
                if (temp64_1 == 0)
                label_14022970b:
                    
                    if (not(cond:178_1))
                    label_14022970d:
                        zmm2 = _mm_blend_ps(zmm2, arg9, 4)
                        
                        if (cond:203_1)
                            goto label_14022976f
                        
                        goto label_140229716
                else
                label_140229764:
                    zmm1 = _mm_blend_ps(zmm1, arg11, 4)
                    
                    if (cond:179_1)
                        goto label_14022970d
                
                bool cond:247_1
                bool cond:248_1
                bool cond:273_1
                bool cond:274_1
                
                if (not(cond:202_1))
                label_14022976f:
                    zmm0 = _mm_blend_ps(zmm0, arg10, 4)
                    char temp88_1 = temp0_645 & 8
                    cond:247_1 = temp88_1 == 0
                    cond:248_1 = temp88_1 != 0
                    cond:273_1 = temp88_1 != 0
                    cond:274_1 = temp88_1 == 0
                    
                    if (temp88_1 != 0)
                        goto label_14022971b
                    
                    goto label_14022977b
                
            label_140229716:
                char temp87_1 = temp0_645 & 8
                cond:247_1 = temp87_1 == 0
                cond:248_1 = temp87_1 != 0
                cond:273_1 = temp87_1 != 0
                cond:274_1 = temp87_1 == 0
                
                if (temp87_1 != 0)
                label_14022971b:
                    arg11 = _mm_blend_ps(arg11, zmm1, 7)
                    
                    if (cond:248_1)
                        goto label_140229781
                    
                    goto label_140229724
                
            label_14022977b:
                arg11 = zmm1
                
                if (cond:247_1)
                label_140229724:
                    arg9 = zmm2
                    
                    if (cond:273_1)
                        zmm0 = _mm_blend_ps(zmm0, arg10, 8)
                else
                label_140229781:
                    arg9 = _mm_blend_ps(arg9, zmm2, 7)
                    
                    if (not(cond:274_1))
                        zmm0 = _mm_blend_ps(zmm0, arg10, 8)
                
                arg10 = zmm0
                goto label_14022979a
            
            var_5a8 = zmm4
            zmm15 = data_142d3f5b0
            arg7 = _mm_cmpeq_epi32(arg7, arg7)
            rcx_47 = _mm_movemask_ps(zmm9 ^ arg7)
            
            if (rcx_47 != 0)
                goto label_140227db1
        zmm2 = _mm_unpacklo_ps(arg10, zmm12[0].q)
        zmm0 = _mm_unpackhi_ps(arg10, zmm12)
        float temp0_1035[0x4] = _mm_unpacklo_ps(arg11, arg9[0].q)
        zmm1 = _mm_unpackhi_ps(arg11, arg9)
        zmm4 = _mm_insert_ps(temp0_1035, arg10, 0x28)
        arg5 = var_458_1
        int64_t rcx_75 = sx.q(arg5[0]) * 0x30
        *(arg1 + rcx_75 + 0x10) = __extractps_memd_xmmps_immb(arg11, 0)
        uint128_t var_128_1 = zmm4
        *(arg1 + rcx_75 + 0x14) = __extractps_memd_xmmps_immb(arg9, 0)
        *(arg1 + rcx_75 + 0x18) = __extractps_memd_xmmps_immb(arg10, 0)
        *(arg1 + rcx_75 + 0x1c) = 0
        int64_t rcx_79 = sx.q(_mm_extract_epi32(arg5, 2)) * 0x30
        *(arg1 + rcx_79 + 0x10) = __extractps_memd_xmmps_immb(arg11, 1)
        zmm3 = _mm_unpackhi_pd(temp0_1035, zmm2.q)
        *(arg1 + rcx_79 + 0x14) = __extractps_memd_xmmps_immb(arg9, 1)
        float var_118_1[0x4] = zmm3
        *(arg1 + rcx_79 + 0x18) = __extractps_memd_xmmps_immb(arg10, 1)
        *(arg1 + rcx_79 + 0x1c) = 0
        zmm3 = var_488_1
        int64_t rcx_83 = sx.q(zmm3[0]) * 0x30
        *(arg1 + rcx_83 + 0x10) = __extractps_memd_xmmps_immb(arg11, 2)
        zmm2 = _mm_insert_ps(zmm1, arg10, 0xa8)
        *(arg1 + rcx_83 + 0x14) = __extractps_memd_xmmps_immb(arg9, 2)
        uint128_t var_108_1 = zmm2
        *(arg1 + rcx_83 + 0x18) = __extractps_memd_xmmps_immb(arg10, 2)
        zmm1 = _mm_unpackhi_pd(zmm1, zmm0.q)
        *(arg1 + rcx_83 + 0x1c) = 0
        *(arg1 + sx.q(_mm_extract_epi32(zmm3, 2)) * 0x30 + 0x10) = zmm1
        r12 = zx.q(r12.d + 4)
    while (r12.d s< i_5)
    
    result = zx.q(arg15)
    
    if (r12.d s< result.d)
        goto label_14022990b
return result
