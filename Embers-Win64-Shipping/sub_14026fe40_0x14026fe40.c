// 函数: sub_14026fe40
// 地址: 0x14026fe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg11
uint128_t var_68 = arg10
float var_78[0x4] = arg9
float zmm12[0x4]
float var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float var_a8[0x4] = arg8
uint128_t var_b8 = arg7
int32_t var_c8[0x4] = arg6
float zmm7[0x4]
float var_d8[0x4] = zmm7
uint128_t zmm6
uint128_t var_e8 = zmm6
float zmm2[0x4] = arg14
int32_t i_5 = ((arg16 s>> 0x1f u>> 0x1e) + arg16) & 0xfffffffc
uint64_t result
float var_5b8[0x4]
uint64_t r15
uint128_t zmm0
uint128_t zmm1
uint32_t zmm3[0x4]
int32_t zmm4[0x4]

if (i_5 s<= 0)
    r15 = 0
    result = zx.q(arg16)
    
    if (0 s< result.d)
    label_140275a48:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15.d), 0), data_142e11d00)
        arg11 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & arg11
        int64_t rbp_25 = sx.q(zmm0.d)
        int64_t rbx_18 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        int64_t rdi_31 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        int64_t rcx_44 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        uint128_t var_4a8_3 = *(arg2 + rcx_44)
        uint128_t var_498_3 = *(arg2 + rdi_31)
        zmm7 = zx.o(*(arg2 + rbp_25))
        uint128_t var_3b8_1 = *(arg2 + rbx_18)
        zmm0 = data_142fc95e0 & arg11
        uint64_t rcx_45 = zx.q(zmm0.d)
        uint64_t rdx = zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        uint64_t rdi_32 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + arg2 + rcx_44))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(rdi_32 + arg2 + rdi_31)), zmm0.q)
        zmm3 = zx.o(*(rdx + arg2 + rbx_18))
        zmm2 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(rcx_45 + arg2 + rbp_25)), zmm3[0].q), 
            zmm1.q)
        zmm1 = _mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0)
        zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm1), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_ps(zmm3, zmm0, 0), zmm1), 0xe8).q) & arg11
        int64_t rax_277 = sx.q(zmm2[0])
        int64_t rcx_47 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
        int64_t rdx_2 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
        zmm0 = zx.o(*(arg3 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rdx_2)), zmm0.q)
        zmm0 = zx.o(*(arg3 + rcx_47))
        int32_t temp0_1343[0x4] =
            _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(arg3 + rax_277)), zmm0.q), zmm1.q)
        zmm0 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(zmm0, zmm0), temp0_1343)
        uint128_t var_518_1 = zmm0
        arg9 = zmm0 & not.o(arg11)
        
        if (_mm_movemask_ps(arg9) == 0)
            zmm3 = var_498_3
        else
            arg6 = zx.o(0)
            uint128_t temp0_1347 = _mm_cmpgt_epi32(zx.o(0), temp0_1343)
            uint128_t temp0_1348 = _mm_shuffle_epi32(temp0_1343, 0x4e)
            zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_1348)
            zmm1 = _mm_add_epi64(4, zx.o(arg12))
            zmm0 = temp0_1343 & arg9
            int64_t rax_280 = sx.q(zmm0.d)
            int64_t rcx_49 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            int64_t rdx_4 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            zmm0 = zx.o(*(arg12 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)))
            zmm3 = _mm_unpacklo_epi32(zx.o(*(arg12 + rdx_4)), zmm0.q)
            zmm6 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg12 + rax_280)), zx.q(*(arg12 + rcx_49))), zmm3[0].q)
            zmm11 = arg9 & zmm6
            arg8 = _mm_srli_epi32(zmm6, 0x18) & arg9
            zmm6 = _mm_srli_epi32(zmm6, 0x1c) & arg9
            zmm0 = _mm_slli_epi32(zmm6, 2) & arg9
            uint64_t rax_281 = zx.q(zmm0.d)
            uint64_t rdx_5 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            uint64_t rbp_30 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + &data_143442cf0))
            zmm3 = _mm_unpacklo_epi32(zx.o(*(rbp_30 + &data_143442cf0)), zmm0.q)
            arg5 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(rax_281 + &data_143442cf0)), 
                    zx.q(*(rdx_5 + &data_143442cf0))), 
                zmm3[0].q)
            zmm3 = data_143442c00 & arg8
            uint32_t var_358_2[0x4] = zmm3
            zmm0 = (_mm_slli_epi32(zmm6, 3) | zmm3) & arg9
            uint32_t rax_283 = zx.d(*(zx.q(zmm0.d) + &data_143442d10))
            uint64_t rdx_6 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            uint32_t rbp_32 = zx.d(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + &data_143442d10))
            uint32_t rbx_24 =
                zx.d(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + &data_143442d10)) << 8 | rbp_32
            zmm12 = _mm_unpacklo_epi16(
                _mm_unpacklo_epi8(
                    _mm_insert_epi16(zx.o(zx.d(*(rdx_6 + &data_143442d10)) << 8) | zx.o(rax_283), 
                        rbx_24, 1), 
                    arg6[0].q), 
                arg6[0].q)
            uint128_t var_458_2 = zmm6
            zmm3 = _mm_cmpeq_epi32(data_142fc95c0, zmm6)
            zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm3 & not.o(arg9), 0x1f), 0x1f)
            zmm6 = zx.o(0)
            
            if (_mm_movemask_ps(zmm0) != 0)
                zmm6 = zmm0 & zmm12
            
            int32_t temp0_1377[0x4] = _mm_unpacklo_epi32(temp0_1343, temp0_1347.q)
            arg10 = _mm_unpacklo_epi32(temp0_1348, zmm2[0].q)
            uint128_t temp0_1379 = _mm_shuffle_epi32(zmm1, 0x44)
            zmm11 &= data_143442be0
            arg5 &= arg9
            zmm0 = data_142fc95e0 & arg9
            zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg9 & zmm3, 0x1f), 0x1f)
            char temp0_1382 = _mm_movemask_ps(zmm2)
            uint32_t var_548_4[0x4] = zmm3
            float var_2e8_2[0x4] = zmm2
            float var_478_3[0x4] = zmm7
            
            if (temp0_1382 == 0)
                zmm12 = zx.o(0)
            else
                zmm12 &= zmm2
                zmm6 = _mm_srli_epi32(zmm2, 0x1f) | (zmm2 & not.o(zmm6))
            
            zmm12 = _mm_madd_epi16(zmm12, zmm0)
            uint128_t var_4e8_2 = arg10
            zmm1 = _mm_add_epi64(temp0_1379, arg10)
            uint128_t var_408_2 = temp0_1377
            arg7 = _mm_add_epi64(temp0_1379, temp0_1377)
            arg8 &= data_143442bf0
            zmm0 = _mm_shuffle_epi32(zmm6, 0xf5)
            arg10 = zmm1
            float var_4f8_2[0x4] = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(zmm6, arg5), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg5, 0xf5), zmm0), 0xe8).q) & arg9
            zmm12 &= arg9
            zmm7 = zmm11
            zmm2 = __pcmpgtd_xmmdq_memdq(zmm11, data_142d3f5b0) & arg9
            arg5 = arg7
            arg7 = zx.o(0)
            zmm11 = zx.o(0)
            float var_468_3[0x4] = arg11
            float var_5e8_1[0x4] = arg5
            float var_568_3[0x4] = arg9
            float var_5c8_5[0x4] = arg8
            uint128_t var_4b8_2 = arg10
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) != 0)
                arg6 = zx.o(0)
                arg8 = _mm_cmpeq_epi32(data_142fc95f0 & arg8, arg6)
                int32_t temp0_1399[0x4] = _mm_srai_epi32(_mm_slli_epi32(arg8 & zmm2, 0x1f), 0x1f)
                arg7 = zx.o(0)
                zmm11 = zx.o(0)
                zmm1 = arg14
                
                if (_mm_movemask_ps(temp0_1399) != 0)
                    zmm11 = zx.o(0)
                    
                    if (0f f>= zmm1.d)
                        arg6 = zx.o(0)
                        arg7 = zx.o(0)
                    else
                        arg5 = _mm_add_epi32(_mm_cmpeq_epi32(arg5, arg5), zmm7)
                        
                        if (zmm1.d f>= 1f)
                            arg5 &= temp0_1399
                            arg6 = arg5
                            arg7 = arg5
                        else
                            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
                            zmm0 = _mm_mul_ps(_mm_cvtepi32_ps(arg5), zmm1)
                            zmm1 = data_142d3f780
                            zmm3 = __addps_xmmps_memps(_mm_and_ps(data_142d3f770, zmm0), 
                                data_142d3f740)
                            zmm1 = _mm_and_ps(zmm1, zmm0)
                            zmm3 = __addps_xmmps_memps(zmm3, data_1434427a0) ^ zmm1
                            zmm11 = zx.o(0)
                            zmm1 = _mm_add_ps(
                                __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm0, zmm3, 1), data_142d3f7e0), 
                                zmm3)
                            zmm3 = _mm_cvttps_epi32(zmm1)
                            int32_t temp0_1414[0x4] = _mm_cmpgt_epi32(zmm3, arg5)
                            arg6 = ((temp0_1414 & not.o(zmm3)) | (arg5 & temp0_1414)) & temp0_1399
                            
                            if (arg15 != 1)
                                zmm0 = _mm_sub_ps(zmm0, zmm1)
                                zmm11 = zmm0
                            
                            zmm1 = _mm_sub_epi32(arg6, _mm_cmpeq_epi32(zmm0, zmm0))
                            arg7 = _mm_cmpgt_epi32(arg5, zmm1)
                            arg7 = ((arg7 & not.o(arg5)) | (zmm1 & arg7)) & temp0_1399
                            zmm1 = arg14
                    
                    zmm11 &= temp0_1399
                
                arg8 = _mm_srai_epi32(_mm_slli_epi32(arg8 & not.o(zmm2), 0x1f), 0x1f)
                
                if (_mm_movemask_ps(arg8) == 0)
                    arg8 = var_5c8_5
                    arg5 = var_5e8_1
                else
                    zmm2 = zmm1
                    zmm1 = _mm_cmpgt_epi32(data_143442ce0, data_142d3f780 ^ zmm7)
                    int32_t rax_288
                    rax_288.b = 0f >= zmm2[0]
                    zmm6 = _mm_shuffle_epi32(zx.o(neg.d(rax_288)), 0) | zmm1
                    zmm0 = zmm6 & arg8
                    float var_578_2[0x4] = zmm11
                    arg11 = arg10
                    uint128_t var_5d8_2
                    uint128_t var_538_2
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        var_5d8_2 = arg7
                        var_538_2 = arg6
                    else
                        zmm1 = zmm0 & not.o(arg6)
                        zmm0 &= not.o(arg7)
                        var_538_2 = zmm1
                        var_5d8_2 = zmm0
                    
                    arg5 = arg14
                    zmm4 = zx.o(0)
                    arg10 = zmm6 & not.o(arg8)
                    uint32_t temp0_1425 = _mm_movemask_ps(arg10)
                    
                    if (temp0_1425 == 0)
                        arg5 = var_578_2
                        arg6 = var_538_2
                        arg10 = arg11
                    else
                        int32_t temp0_1427[0x4] = _mm_add_epi32(zmm7, _mm_cmpeq_epi32(zmm0, zmm0))
                        
                        if (arg5[0] >= 1f)
                            arg6 = temp0_1427 & arg10
                            var_5d8_2 = (arg10 & not.o(var_5d8_2)) | arg6
                            arg6 |= arg10 & not.o(var_538_2)
                            arg5 = var_578_2
                            arg10 = arg11
                        else
                            zmm0 = _mm_shuffle_epi32(zmm7, 0xf5)
                            zmm1 = _mm_mul_epu32(_mm_shuffle_epi32(var_4f8_2, 0xf5), zmm0)
                            float var_588_3[0x4] = zmm7
                            zmm0 = _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(var_4f8_2, zmm7), 0xe8), 
                                _mm_shuffle_epi32(zmm1, 0xe8).q)
                            zmm7 = _mm_unpacklo_epi32(zmm12, 0)
                            float var_598_5[0x4] = zmm12
                            zmm11 = _mm_unpackhi_epi32(zmm12, 0)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                            int32_t temp0_1439[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            zmm11 = _mm_add_epi64(zmm11, arg11)
                            zmm7 = __paddq_xmmdq_memdq(zmm7, var_5e8_1)
                            zmm3 = data_143442a20
                            zmm1 = _mm_unpacklo_epi32(zmm1, zmm2[0].q)
                            zmm0 = _mm_unpacklo_epi32(zmm0, temp0_1439[0].q)
                            zmm11 = _mm_add_epi64(_mm_add_epi64(zmm11, zmm3), zmm1)
                            zmm7 = _mm_add_epi64(_mm_add_epi64(zmm7, zmm3), zmm0)
                            zmm0 = data_143442c10
                            zmm7 &= zmm0
                            zmm11 &= zmm0
                            zmm0 = _mm_shuffle_ps(arg5, arg5, 0)
                            zmm1 = _mm_cvtepi32_ps(temp0_1427)
                            zmm2 = zx.o(0)
                            zmm2[0] = float.s(arg13 - 1)
                            zmm1 = _mm_mul_ps(zmm1, zmm0)
                            zmm2[0] = zmm2[0] * arg5[0]
                            float var_418_3[0x4] = zmm2
                            int32_t rax_292 = int.d(zmm2[0])
                            int32_t rbx_25 = 0
                            
                            if (rax_292 s>= 0)
                                rbx_25 = rax_292
                            
                            if (rbx_25 s> arg13 - 2)
                                rbx_25 = arg13 - 2
                            
                            zmm1 = _mm_cvttps_epi32(zmm1)
                            zmm2 = _mm_cmpgt_epi32(zmm1, zx.o(0)) & zmm1
                            zmm12 = _mm_cmpgt_epi32(temp0_1427, zmm2)
                            zmm12 = (zmm12 & not.o(temp0_1427)) | (zmm2 & zmm12)
                            var_5b8 = zmm7
                            
                            if (arg13 s< 0x100)
                                zmm2 = _mm_shuffle_epi32(zmm12, 0x4e)
                                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm1 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm12, _mm_cmpgt_epi32(zx.o(0), zmm12).q), 
                                    zmm7)
                                char rbp_35 = temp0_1425.b
                                
                                if ((rbp_35 & 1) == 0)
                                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
                                    
                                    if ((rbp_35 & 2) != 0)
                                        goto label_1402767d6
                                    
                                    goto label_140276525
                                
                                arg5 = zx.o(*zmm1.q)
                                zmm2 = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
                                
                                if ((rbp_35 & 2) != 0)
                                label_1402767d6:
                                    arg5 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            arg5, 0), 
                                        arg5, 0xe2)
                                    zmm2 = _mm_add_epi64(zmm2, zmm11)
                                    
                                    if ((rbp_35 & 4) == 0)
                                        goto label_140276534
                                    
                                    goto label_1402767f8
                                
                            label_140276525:
                                zmm2 = _mm_add_epi64(zmm2, zmm11)
                                
                                if ((rbp_35 & 4) != 0)
                                label_1402767f8:
                                    arg5 = _mm_shuffle_ps(arg5, 
                                        _mm_shuffle_ps(zx.o(*zmm2[0].q), arg5, 0x30), 0x84)
                                    
                                    if ((rbp_35 & 8) != 0)
                                        arg5 = _mm_shuffle_ps(arg5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                arg5, 0x20), 
                                            0x24)
                                else
                                label_140276534:
                                    
                                    if ((rbp_35 & 8) != 0)
                                        arg5 = _mm_shuffle_ps(arg5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                arg5, 0x20), 
                                            0x24)
                                
                                arg5 = __andps_xmmxud_memxud(arg5, data_142ed6810)
                                zmm0 = zx.o(rbx_25)
                                int32_t temp0_1510[0x4] = _mm_shuffle_epi32(zmm0, 0)
                                arg5 = _mm_cmpgt_epi32(arg5, temp0_1510)
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                float var_5a8_5[0x4] = arg5 ^ zmm0
                                zmm4 = zmm12
                                
                                if (_mm_movemask_ps(arg5 & not.o(arg10)) != 0)
                                    arg11 = (arg5 & not.o(temp0_1427)) | (arg5 & zmm12)
                                    arg7 = _mm_sub_epi32(zmm12, zmm1)
                                    arg5 &= not.o(_mm_cmpgt_epi32(var_588_3, arg7))
                                    zmm3 = arg10 & arg5
                                    uint32_t i = _mm_movemask_ps(zmm3)
                                    
                                    if (i == 0)
                                        zmm4 = arg11
                                    else
                                        zmm2 = zmm12
                                        
                                        do
                                            arg9 = arg7
                                            zmm4 = _mm_shuffle_epi32(arg7, 0x4e)
                                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                            zmm0 = __paddq_xmmdq_memdq(
                                                _mm_unpacklo_epi32(arg7, 
                                                    _mm_cmpgt_epi32(zx.o(0), arg7).q), 
                                                var_5b8)
                                            char temp0_1530 = _mm_movemask_ps(zmm3)
                                            
                                            if ((temp0_1530 & 1) == 0)
                                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm1.q)
                                                
                                                if ((temp0_1530 & 2) != 0)
                                                    goto label_14027661f
                                                
                                                goto label_140276694
                                            
                                            zmm7[0] = zx.o(*zmm0.q)[0]
                                            zmm4 = _mm_unpacklo_epi32(zmm4, zmm1.q)
                                            
                                            if ((temp0_1530 & 2) != 0)
                                            label_14027661f:
                                                zmm7 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                        zmm7, 0), 
                                                    zmm7, 0xe2)
                                                zmm4 = _mm_add_epi64(zmm4, zmm11)
                                                
                                                if ((temp0_1530 & 4) == 0)
                                                    goto label_14027669e
                                                
                                                goto label_14027663c
                                            
                                        label_140276694:
                                            zmm4 = _mm_add_epi64(zmm4, zmm11)
                                            
                                            if ((temp0_1530 & 4) != 0)
                                            label_14027663c:
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm7, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_1530 & 8) != 0)
                                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                            zmm7, 0x20), 
                                                        0x24)
                                            else
                                            label_14027669e:
                                                
                                                if ((temp0_1530 & 8) != 0)
                                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                            zmm7, 0x20), 
                                                        0x24)
                                            
                                            zmm1 = _mm_cmpgt_epi32(
                                                __andps_xmmxud_memxud(zmm7, data_142ed6810), 
                                                temp0_1510) & arg5
                                            zmm0 = zx.o(0)
                                            zmm4 = zmm1 & not.o(arg11)
                                            zmm2 &= zmm1
                                            
                                            if (_mm_movemask_ps(zmm1 & arg10) != i)
                                                zmm1 ^= arg5
                                                zmm0 = zmm1
                                            
                                            zmm4 |= zmm2
                                            arg7 = __psubd_xmmdq_memdq(arg9, data_142d3f800)
                                            arg5 = _mm_cmpgt_epi32(var_588_3, arg7) & zmm0
                                            zmm3 = arg5 & arg10
                                            i = _mm_movemask_ps(zmm3)
                                            zmm2 = arg9
                                            arg11 = zmm4
                                        while (i != 0)
                                
                                uint32_t temp0_2578 =
                                    _mm_movemask_ps(_mm_andnot_ps(var_5a8_5, arg10))
                                uint32_t i_1
                                
                                if (temp0_2578 != 0)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ var_5a8_5
                                    zmm4 &= var_5a8_5
                                    arg7 = _mm_cmpeq_epi32(arg7, arg7)
                                    zmm12 = _mm_add_epi32(zmm12, arg7)
                                    arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm1
                                    zmm3 = arg5 & arg10
                                    i_1 = _mm_movemask_ps(zmm3)
                                
                                if (temp0_2578 == 0 || i_1 == 0)
                                    zmm2 = zmm4
                                    arg11 = zmm11
                                    zmm11 = var_5b8
                                else
                                    arg9 = data_142ed6810
                                    arg11 = zmm11
                                    zmm11 = var_5b8
                                    
                                    do
                                        zmm2 = _mm_shuffle_epi32(zmm12, 0x4e)
                                        zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                        zmm0 = _mm_add_epi64(
                                            _mm_unpacklo_epi32(zmm12, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm12).q), 
                                            zmm11)
                                        char temp0_2596 = _mm_movemask_ps(zmm3)
                                        
                                        if ((temp0_2596 & 1) == 0)
                                            zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                                            
                                            if ((temp0_2596 & 2) != 0)
                                                goto label_14027a6e7
                                            
                                            goto label_14027a74a
                                        
                                        zmm7[0] = zx.o(*zmm0.q)[0]
                                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                                        
                                        if ((temp0_2596 & 2) != 0)
                                        label_14027a6e7:
                                            zmm7 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm7, 
                                                    0), 
                                                zmm7, 0xe2)
                                            zmm2 = _mm_add_epi64(zmm2, arg11)
                                            
                                            if ((temp0_2596 & 4) == 0)
                                                goto label_14027a754
                                            
                                            goto label_14027a704
                                        
                                    label_14027a74a:
                                        zmm2 = _mm_add_epi64(zmm2, arg11)
                                        
                                        if ((temp0_2596 & 4) != 0)
                                        label_14027a704:
                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                _mm_shuffle_ps(zx.o(*zmm2[0].q), zmm7, 0x30), 0x84)
                                            
                                            if ((temp0_2596 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        else
                                        label_14027a754:
                                            
                                            if ((temp0_2596 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        
                                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm7, arg9), temp0_1510)
                                            & not.o(arg5)
                                        zmm2 = zmm1 & not.o(zmm4)
                                        zmm4 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm1 & arg10) != i_1)
                                            zmm4 = zmm1 ^ arg5
                                        
                                        zmm2 |= zmm1 & zmm12
                                        zmm12 = _mm_add_epi32(zmm12, arg7)
                                        arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm4
                                        zmm3 = arg5 & arg10
                                        i_1 = _mm_movemask_ps(zmm3)
                                        zmm4 = zmm2
                                    while (i_1 != 0)
                                
                                zmm3 = (zmm2 & arg10) | (arg10 & not.o(var_538_2))
                                zmm4 = _mm_shuffle_epi32(zmm3, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                                arg6 = zmm3
                                zmm0 = _mm_add_epi64(_mm_unpacklo_epi32(zmm3, zmm2[0].q), zmm11)
                                
                                if ((rbp_35 & 1) != 0)
                                    zmm2 = zx.o(*zmm0.q)
                                
                                int32_t temp0_2613[0x4] = _mm_unpacklo_epi32(zmm4, zmm1.q)
                                zmm12 = var_598_5
                                arg9 = var_568_3
                                
                                if ((rbp_35 & 2) == 0)
                                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                    zmm4 = _mm_add_epi64(temp0_2613, arg11)
                                    
                                    if ((rbp_35 & 4) != 0)
                                        goto label_14027a935
                                    
                                    goto label_14027a891
                                
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm2, 
                                        0), 
                                    zmm2, 0xe2)
                                zmm2 = zmm0
                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                zmm4 = _mm_add_epi64(temp0_2613, arg11)
                                
                                if ((rbp_35 & 4) == 0)
                                label_14027a891:
                                    zmm3 ^= arg10
                                    
                                    if ((rbp_35 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                else
                                label_14027a935:
                                    zmm0 = _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm2, 0x30)
                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                    zmm3 ^= arg10
                                    
                                    if ((rbp_35 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                
                                zmm4 = (_mm_sub_epi32(arg6, _mm_cmpeq_epi32(zmm0, zmm0)) & arg10)
                                    | (var_5d8_2 & zmm3)
                                arg5 = _mm_cmpgt_epi32(var_588_3, zmm4) & not.o(arg10)
                                
                                if (_mm_movemask_ps(arg5) == 0)
                                    zmm3 = zmm4
                                else
                                    zmm3 = (temp0_1427 & arg5) | (arg5 & not.o(zmm4))
                                
                                arg5 = var_578_2
                                arg10 = var_4b8_2
                                zmm4 = _mm_shuffle_epi32(zmm3, 0x4e)
                                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                var_5d8_2 = zmm3
                                zmm3 = _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3).q)
                                zmm11 = _mm_add_epi64(zmm11, zmm3)
                                
                                if ((rbp_35 & 1) == 0)
                                    zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                    
                                    if ((rbp_35 & 2) != 0)
                                        goto label_14027aa1c
                                    
                                    goto label_14027a994
                                
                                zmm3 = zx.o(*zmm11[0].q)
                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                
                                if ((rbp_35 & 2) != 0)
                                label_14027aa1c:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm11, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                                    zmm3 = zmm0
                                    arg11 = _mm_add_epi64(arg11, zmm4)
                                    
                                    if ((rbp_35 & 4) == 0)
                                        goto label_14027a9a3
                                    
                                    goto label_14027aa3e
                                
                            label_14027a994:
                                arg11 = _mm_add_epi64(arg11, zmm4)
                                
                                if ((rbp_35 & 4) != 0)
                                label_14027aa3e:
                                    zmm0 = _mm_shuffle_ps(zx.o(*arg11[0].q), zmm3, 0x30)
                                    zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                                    
                                    if ((rbp_35 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg11, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                else
                                label_14027a9a3:
                                    
                                    if ((rbp_35 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg11, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm2 = __andps_xmmxud_memxud(zmm2, data_142ed6810)
                                zmm3 = __andps_xmmxud_memxud(zmm3, data_142ed6810)
                                zmm6 ^= zmm0
                                zmm4 = zx.o(0)
                                
                                if (arg15 != 1)
                                label_140276bb6:
                                    zmm3 = _mm_sub_epi32(zmm3, zmm2)
                                    zmm0 = __pcmpgtd_xmmdq_memdq(zmm3, data_142d3f5b0)
                                    zmm4 = var_418_3
                                    zmm4 = _mm_div_ps(
                                        _mm_sub_ps(_mm_shuffle_ps(zmm4, zmm4, 0), 
                                            _mm_cvtepi32_ps(zmm2)), 
                                        _mm_cvtepi32_ps((zmm0 & zmm3)
                                        | (zmm0 & not.o(data_142d3f5b0))))
                            else
                                int32_t temp0_1454[0x4] = _mm_add_epi32(zmm12, zmm12)
                                zmm2 = _mm_shuffle_epi32(temp0_1454, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                int32_t temp0_1459[0x4] = _mm_add_epi64(
                                    _mm_unpacklo_epi32(temp0_1454, 
                                        _mm_cmpgt_epi32(zx.o(0), temp0_1454).q), 
                                    zmm7)
                                char rbp_34 = temp0_1425.b
                                
                                if ((rbp_34 & 1) == 0)
                                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                                    
                                    if ((rbp_34 & 2) != 0)
                                        goto label_14027676e
                                    
                                    goto label_14027626f
                                
                                zmm3 = zx.o(*temp0_1459[0].q)
                                zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                                
                                if ((rbp_34 & 2) != 0)
                                label_14027676e:
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(temp0_1459, 0x4e).q), zmm3, 0), 
                                        zmm3, 0xe2)
                                    zmm2 = _mm_add_epi64(zmm2, zmm11)
                                    
                                    if ((rbp_34 & 4) == 0)
                                        goto label_14027627e
                                    
                                    goto label_140276790
                                
                            label_14027626f:
                                zmm2 = _mm_add_epi64(zmm2, zmm11)
                                
                                if ((rbp_34 & 4) != 0)
                                label_140276790:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*zmm2[0].q), zmm3, 0x30), 0x84)
                                    
                                    if ((rbp_34 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                else
                                label_14027627e:
                                    
                                    if ((rbp_34 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                
                                uint32_t temp0_1465[0x4] =
                                    __andps_xmmxud_memxud(zmm3, data_143442cd0)
                                zmm0 = zx.o(rbx_25)
                                arg9 = _mm_shuffle_epi32(zmm0, 0)
                                zmm3 = _mm_cmpgt_epi32(temp0_1465, arg9)
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                float var_5a8_4[0x4] = zmm3 ^ zmm0
                                zmm4 = zmm12
                                
                                if (_mm_movemask_ps(zmm3 & not.o(arg10)) != 0)
                                    zmm7 = (zmm3 & not.o(temp0_1427)) | (zmm3 & zmm12)
                                    arg7 = _mm_sub_epi32(zmm12, zmm1)
                                    zmm3 &= not.o(_mm_cmpgt_epi32(var_588_3, arg7))
                                    arg5 = arg10 & zmm3
                                    uint32_t i_2 = _mm_movemask_ps(arg5)
                                    
                                    if (i_2 == 0)
                                        zmm4 = zmm7
                                    else
                                        arg6 = zmm12
                                        
                                        do
                                            zmm0 = arg7
                                            zmm2 = _mm_add_epi32(arg7, arg7)
                                            zmm4 = _mm_shuffle_epi32(zmm2, 0x4e)
                                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                            zmm2 = __paddq_xmmdq_memdq(
                                                _mm_unpacklo_epi32(zmm2, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm2).q), 
                                                var_5b8)
                                            char temp0_1487 = _mm_movemask_ps(arg5)
                                            
                                            if ((temp0_1487 & 1) == 0)
                                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm1.q)
                                                
                                                if ((temp0_1487 & 2) != 0)
                                                    goto label_140276369
                                                
                                                goto label_1402763e7
                                            
                                            arg11[0] = zx.o(*zmm2[0].q)[0]
                                            zmm4 = _mm_unpacklo_epi32(zmm4, zmm1.q)
                                            
                                            if ((temp0_1487 & 2) != 0)
                                            label_140276369:
                                                arg11 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        arg11, 0), 
                                                    arg11, 0xe2)
                                                zmm4 = _mm_add_epi64(zmm4, zmm11)
                                                
                                                if ((temp0_1487 & 4) == 0)
                                                    goto label_1402763f1
                                                
                                                goto label_140276388
                                            
                                        label_1402763e7:
                                            zmm4 = _mm_add_epi64(zmm4, zmm11)
                                            
                                            if ((temp0_1487 & 4) != 0)
                                            label_140276388:
                                                arg11 = _mm_shuffle_ps(arg11, 
                                                    _mm_shuffle_ps(zx.o(*zmm4[0].q), arg11, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_1487 & 8) != 0)
                                                    arg11 = _mm_shuffle_ps(arg11, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                            arg11, 0x20), 
                                                        0x24)
                                            else
                                            label_1402763f1:
                                                
                                                if ((temp0_1487 & 8) != 0)
                                                    arg11 = _mm_shuffle_ps(arg11, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                            arg11, 0x20), 
                                                        0x24)
                                            
                                            zmm2 = _mm_cmpgt_epi32(
                                                __andps_xmmxud_memxud(arg11, data_143442cd0), arg9)
                                                & zmm3
                                            zmm1 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm2 & arg10) != i_2)
                                                zmm1 = zmm2 ^ zmm3
                                            
                                            zmm4 = (zmm2 & not.o(zmm7)) | (arg6 & zmm2)
                                            arg7 = __psubd_xmmdq_memdq(zmm0, data_142d3f800)
                                            zmm3 = _mm_cmpgt_epi32(var_588_3, arg7) & zmm1
                                            arg5 = zmm3 & arg10
                                            i_2 = _mm_movemask_ps(arg5)
                                            arg6 = zmm0
                                            zmm7 = zmm4
                                        while (i_2 != 0)
                                
                                uint32_t temp0_1557 =
                                    _mm_movemask_ps(_mm_andnot_ps(var_5a8_4, arg10))
                                uint32_t i_3
                                
                                if (temp0_1557 != 0)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ var_5a8_4
                                    zmm4 &= var_5a8_4
                                    arg7 = _mm_cmpeq_epi32(arg7, arg7)
                                    zmm12 = _mm_add_epi32(zmm12, arg7)
                                    arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm1
                                    zmm3 = arg5 & arg10
                                    i_3 = _mm_movemask_ps(zmm3)
                                
                                if (temp0_1557 == 0 || i_3 == 0)
                                    zmm2 = zmm4
                                    arg11 = zmm11
                                    zmm11 = var_5b8
                                else
                                    arg6 = data_143442cd0
                                    arg11 = zmm11
                                    zmm11 = var_5b8
                                    
                                    do
                                        zmm0 = _mm_add_epi32(zmm12, zmm12)
                                        zmm2 = _mm_shuffle_epi32(zmm0, 0x4e)
                                        zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                        zmm0 = _mm_add_epi64(
                                            _mm_unpacklo_epi32(zmm0, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm0).q), 
                                            zmm11)
                                        char temp0_1576 = _mm_movemask_ps(zmm3)
                                        
                                        if ((temp0_1576 & 1) == 0)
                                            zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                                            
                                            if ((temp0_1576 & 2) != 0)
                                                goto label_1402768a8
                                            
                                            goto label_14027690d
                                        
                                        zmm7[0] = zx.o(*zmm0.q)[0]
                                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                                        
                                        if ((temp0_1576 & 2) != 0)
                                        label_1402768a8:
                                            zmm7 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm7, 
                                                    0), 
                                                zmm7, 0xe2)
                                            zmm2 = _mm_add_epi64(zmm2, arg11)
                                            
                                            if ((temp0_1576 & 4) == 0)
                                                goto label_140276917
                                            
                                            goto label_1402768c5
                                        
                                    label_14027690d:
                                        zmm2 = _mm_add_epi64(zmm2, arg11)
                                        
                                        if ((temp0_1576 & 4) != 0)
                                        label_1402768c5:
                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                _mm_shuffle_ps(zx.o(*zmm2[0].q), zmm7, 0x30), 0x84)
                                            
                                            if ((temp0_1576 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        else
                                        label_140276917:
                                            
                                            if ((temp0_1576 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        
                                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm7, arg6), arg9)
                                            & not.o(arg5)
                                        zmm2 = zmm1 & not.o(zmm4)
                                        zmm4 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm1 & arg10) != i_3)
                                            zmm4 = zmm1 ^ arg5
                                        
                                        zmm2 |= zmm1 & zmm12
                                        zmm12 = _mm_add_epi32(zmm12, arg7)
                                        arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm4
                                        zmm3 = arg5 & arg10
                                        i_3 = _mm_movemask_ps(zmm3)
                                        zmm4 = zmm2
                                    while (i_3 != 0)
                                
                                zmm2 = (zmm2 & arg10) | (arg10 & not.o(var_538_2))
                                arg6 = zmm2
                                zmm0 = _mm_add_epi32(zmm2, zmm2)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm0 = _mm_add_epi64(_mm_unpacklo_epi32(zmm0, zmm2[0].q), zmm11)
                                
                                if ((rbp_34 & 1) != 0)
                                    zmm2 = zx.o(*zmm0.q)
                                
                                int32_t temp0_1594[0x4] = _mm_unpacklo_epi32(zmm4, zmm1.q)
                                zmm12 = var_598_5
                                arg9 = var_568_3
                                
                                if ((rbp_34 & 2) == 0)
                                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                    zmm4 = _mm_add_epi64(temp0_1594, arg11)
                                    
                                    if ((rbp_34 & 4) != 0)
                                        goto label_140276af8
                                    
                                    goto label_140276a54
                                
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm2, 
                                        0), 
                                    zmm2, 0xe2)
                                zmm2 = zmm0
                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                zmm4 = _mm_add_epi64(temp0_1594, arg11)
                                
                                if ((rbp_34 & 4) == 0)
                                label_140276a54:
                                    zmm3 ^= arg10
                                    
                                    if ((rbp_34 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                else
                                label_140276af8:
                                    zmm0 = _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm2, 0x30)
                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                    zmm3 ^= arg10
                                    
                                    if ((rbp_34 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                
                                zmm4 = (_mm_sub_epi32(arg6, _mm_cmpeq_epi32(zmm0, zmm0)) & arg10)
                                    | (var_5d8_2 & zmm3)
                                arg5 = _mm_cmpgt_epi32(var_588_3, zmm4) & not.o(arg10)
                                
                                if (_mm_movemask_ps(arg5) == 0)
                                    zmm1 = zmm4
                                else
                                    zmm1 = (temp0_1427 & arg5) | (arg5 & not.o(zmm4))
                                
                                arg5 = var_578_2
                                arg10 = var_4b8_2
                                var_5d8_2 = zmm1
                                zmm1 = _mm_add_epi32(zmm1, zmm1)
                                zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                                zmm11 = _mm_add_epi64(zmm11, _mm_unpacklo_epi32(zmm1, zmm3[0].q))
                                
                                if ((rbp_34 & 1) == 0)
                                    zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                    
                                    if ((rbp_34 & 2) != 0)
                                        goto label_14027a610
                                    
                                    goto label_140276b63
                                
                                zmm3 = zx.o(*zmm11[0].q)
                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                
                                if ((rbp_34 & 2) != 0)
                                label_14027a610:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm11, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                                    zmm3 = zmm0
                                    arg11 = _mm_add_epi64(arg11, zmm4)
                                    
                                    if ((rbp_34 & 4) == 0)
                                        goto label_140276b72
                                    
                                    goto label_14027a632
                                
                            label_140276b63:
                                arg11 = _mm_add_epi64(arg11, zmm4)
                                
                                if ((rbp_34 & 4) != 0)
                                label_14027a632:
                                    zmm0 = _mm_shuffle_ps(zx.o(*arg11[0].q), zmm3, 0x30)
                                    zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                                    
                                    if ((rbp_34 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg11, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                else
                                label_140276b72:
                                    
                                    if ((rbp_34 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg11, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm2 = __andps_xmmxud_memxud(zmm2, data_143442cd0)
                                zmm3 = __andps_xmmxud_memxud(zmm3, data_143442cd0)
                                zmm6 ^= zmm0
                                zmm4 = zx.o(0)
                                
                                if (arg15 != 1)
                                    goto label_140276bb6
                            
                            zmm4 = _mm_and_ps(zmm4, zmm6)
                    
                    zmm11 = (arg8 & not.o(arg5)) | (zmm4 & arg8)
                    arg8 = var_5c8_5
                    arg5 = var_5e8_1
                    arg7 = var_5d8_2
            
            float var_578_3[0x4] = zmm11
            zmm3 = _mm_unpacklo_epi32(zmm12, 0)
            zmm12 = _mm_unpackhi_epi32(zmm12, 0)
            uint128_t temp0_1636 = _mm_shuffle_epi32(_mm_mul_epu32(arg6, var_4f8_2), 0xe8)
            zmm4 = _mm_shuffle_epi32(var_4f8_2, 0xf5)
            int32_t var_538_3[0x4] = arg6
            zmm6 = _mm_unpacklo_epi32(temp0_1636, 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg6, 0xf5), zmm4), 0xe8).q)
            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm6)
            zmm7 = _mm_shuffle_epi32(zmm6, 0x4e)
            zmm6 = _mm_unpacklo_epi32(zmm6, zmm0.q)
            zmm7 = _mm_unpacklo_epi32(zmm7, _mm_cmpgt_epi32(zx.o(0), zmm7).q)
            float var_508_5[0x4] = zmm7
            zmm7 = _mm_add_epi64(zmm7, zmm12)
            zmm11 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, var_458_2)
            zmm2 = zmm11 & arg9
            char temp0_1650 = _mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f))
            int32_t var_488_1[0x4] = zmm6
            zmm0 = zmm6
            zmm6 = arg10
            int32_t var_588_4[0x4] = zmm3
            zmm0 = _mm_add_epi64(_mm_add_epi64(zmm0, zmm3), arg5)
            uint128_t var_5a8_6 = zmm0
            zmm7 = _mm_add_epi64(zmm7, arg10)
            uint128_t var_4c8_1 = zmm7
            int32_t var_598_6[0x4] = zmm12
            float var_4d8_2[0x4] = zmm11
            uint128_t var_5d8_3 = arg7
            int32_t var_388_1[0x4] = zmm4
            
            if (temp0_1650 == 0)
                zmm4 = var_548_4
                arg11 = arg7
            else
                zmm1 = _mm_srai_epi32(
                    _mm_slli_epi32(__pcmpeqd_xmmdq_memdq(zx.o(0), var_358_2) & zmm2, 0x1f), 0x1f)
                char temp0_1657 = _mm_movemask_ps(zmm1)
                
                if (temp0_1657 == 0)
                    zmm4 = var_548_4
                else
                    zmm3 = _mm_add_epi64(var_4e8_2, zmm12)
                    zmm6 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_408_2, var_588_4), var_488_1)
                    zmm3 = __paddq_xmmdq_memdq(zmm3, var_508_5)
                    zmm7 = data_1434426c0
                    zmm3 = _mm_add_epi64(zmm3, zmm7)
                    zmm6 = _mm_add_epi64(zmm6, zmm7)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                    zmm6 &= zmm4
                    zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                    zmm3 &= zmm0
                    int64_t rax_351 = _mm_shuffle_epi32(zmm6, 0x4e).q
                    void* rbx_29 = arg12 + rax_351
                    zmm1 = *(arg12 + rax_351)
                    int64_t rax_352 = zmm3[0].q
                    void* rdi_34 = arg12 + rax_352
                    arg5 = *(arg12 + rax_352)
                    int64_t rax_353 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                    void* rsi_7 = arg12 + rax_353
                    zmm12 = *(arg12 + rax_353)
                    zmm3 = zmm4 & zmm7
                    zmm7 &= zmm0
                    void* rbp_37 = zmm6.q + arg12
                    zmm11 = *(zmm3[0].q + rbp_37)
                    arg7 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rbx_29)
                    zmm6 = *(zmm7[0].q + rdi_34)
                    arg9 = *(_mm_shuffle_epi32(zmm7, 0x4e)[0].q + rsi_7)
                    zmm7 = data_1434426e0
                    zmm4 &= zmm7
                    zmm0 &= zmm7
                    arg10 = *(zmm4[0].q + rbp_37)
                    zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rbx_29)
                    zmm3 = *(zmm0.q + rdi_34)
                    arg11 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rsi_7)
                    bool cond:32_1
                    bool cond:33_1
                    bool cond:37_1
                    bool cond:38_1
                    
                    if ((temp0_1657 & 1) == 0)
                        char temp7_1 = temp0_1657 & 2
                        cond:32_1 = temp7_1 != 0
                        cond:33_1 = temp7_1 == 0
                        cond:37_1 = temp7_1 != 0
                        cond:38_1 = temp7_1 == 0
                        
                        if (temp7_1 == 0)
                            goto label_140276eba
                        
                        goto label_140276e6d
                    
                    arg6 = *rbp_37
                    char temp6_1 = temp0_1657 & 2
                    cond:32_1 = temp6_1 != 0
                    cond:33_1 = temp6_1 == 0
                    cond:37_1 = temp6_1 != 0
                    cond:38_1 = temp6_1 == 0
                    
                    if (temp6_1 == 0)
                    label_140276eba:
                        
                        if (cond:33_1)
                            goto label_140276e73
                        
                        goto label_140276ebc
                    
                label_140276e6d:
                    arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg6, 0), arg6, 0xe2)
                    
                    if (not(cond:32_1))
                    label_140276e73:
                        
                        if (cond:38_1)
                            goto label_140276ec2
                        
                        goto label_140276e75
                    
                label_140276ebc:
                    zmm11 = _mm_unpacklo_ps(zmm11, arg7.q)
                    bool cond:56_1
                    bool cond:57_1
                    bool cond:62_1
                    bool cond:63_1
                    
                    if (not(cond:37_1))
                    label_140276ec2:
                        char temp13_1 = temp0_1657 & 4
                        cond:56_1 = temp13_1 != 0
                        cond:57_1 = temp13_1 == 0
                        cond:62_1 = temp13_1 != 0
                        cond:63_1 = temp13_1 == 0
                        
                        if (temp13_1 == 0)
                            goto label_140276e7e
                        
                        goto label_140276ecc
                    
                label_140276e75:
                    arg10 = _mm_unpacklo_ps(arg10, zmm4[0].q)
                    char temp12_1 = temp0_1657 & 4
                    cond:56_1 = temp12_1 != 0
                    cond:57_1 = temp12_1 == 0
                    cond:62_1 = temp12_1 != 0
                    cond:63_1 = temp12_1 == 0
                    
                    if (temp12_1 == 0)
                    label_140276e7e:
                        
                        if (cond:57_1)
                            goto label_140276ed3
                        
                        goto label_140276e85
                    
                label_140276ecc:
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg5, arg6, 0x30), 0x84)
                    
                    if (cond:56_1)
                    label_140276e85:
                        zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm6, zmm11, 0x30), 0x84)
                        
                        if (cond:62_1)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm3, arg10, 0x30), 0x84)
                    else
                    label_140276ed3:
                        
                        if (not(cond:63_1))
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm3, arg10, 0x30), 0x84)
                    
                    zmm4 = var_548_4
                    zmm0 = zmm11
                    char temp25_1 = temp0_1657 & 8
                    arg8 = var_5c8_5
                    zmm11 = var_4d8_2
                    
                    if (temp25_1 != 0)
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm12, arg6, 0x20), 0x24)
                        zmm12 = var_598_6
                        
                        if (temp25_1 != 0)
                            goto label_1402771df
                        
                        goto label_140276f1d
                    
                    zmm12 = var_598_6
                    
                    if (temp25_1 == 0)
                    label_140276f1d:
                        arg9 = var_568_3
                        
                        if (temp25_1 != 0)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(arg11, arg10, 0x20), 0x24)
                    else
                    label_1402771df:
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg9, zmm0, 0x20), 0x24)
                        arg9 = var_568_3
                        
                        if (temp25_1 != 0)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(arg11, arg10, 0x20), 0x24)
                    
                    zmm6 = var_4b8_2
                
                zmm3 = __pcmpeqd_xmmdq_memdq(zx.o(0), var_358_2) & not.o(zmm2)
                arg5 = _mm_slli_epi32(zmm3, 0x1f)
                char temp0_1688 = _mm_movemask_ps(arg5)
                
                if (temp0_1688 == 0)
                    zmm3 = zmm0
                    var_5b8 = arg6
                    arg11 = var_5d8_3
                else
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg8, 0x1f), 0x1f)
                    arg5 = _mm_srai_epi32(arg5, 0x1f) & zmm1
                    arg11 = zmm6
                    uint128_t var_528_3 = zmm0
                    char rbp_38
                    
                    if (_mm_movemask_ps(arg5) == 0)
                        zmm11 = var_5a8_6
                        zmm12 = var_4c8_1
                        zmm1 &= zmm0
                        rbp_38 = temp0_1688
                        
                        if ((rbp_38 & 1) != 0)
                            arg6[0] = zmm1.d
                    else
                        arg7 = data_1434426c0
                        zmm2 = _mm_add_epi64(var_4c8_1, arg7)
                        zmm4 = var_5a8_6
                        zmm6 = _mm_add_epi64(zmm4, arg7)
                        zmm7 = _mm_cmpeq_epi32(zmm7, zmm7) ^ arg5
                        zmm11 = _mm_shuffle_epi32(zmm7, 0x50)
                        zmm11 = (zmm11 & not.o(zmm6)) | (zmm4 & zmm11)
                        zmm6 = zmm12
                        zmm12 = _mm_shuffle_epi32(zmm7, 0xfa)
                        zmm12 = (zmm12 & not.o(zmm2)) | (var_4c8_1 & zmm12)
                        zmm2 = _mm_add_epi64(var_4e8_2, zmm6)
                        int32_t temp0_1700[0x4] = __paddq_xmmdq_memdq(
                            __paddq_xmmdq_memdq(var_408_2, var_588_4), var_488_1)
                        zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, var_508_5), arg7)
                        int32_t temp0_1703[0x4] = _mm_add_epi64(temp0_1700, arg7)
                        zmm6 = _mm_shuffle_epi32(arg5, 0x50) & temp0_1703
                        zmm4 = _mm_shuffle_epi32(arg5, 0xfa) & zmm2
                        zmm0 = _mm_unpacklo_epi32(zx.o(*(arg12 + zmm6.q)), 
                            zx.o(*(arg12 + _mm_shuffle_epi32(zmm6, 0x4e)[0].q))[0].q)
                        zmm2 = _mm_unpacklo_epi32(zx.o(*(arg12 + zmm4[0].q)), 
                            zx.o(*(arg12 + _mm_shuffle_epi32(zmm4, 0x4e)[0].q))[0].q)
                        zmm0 = _mm_unpacklo_epi64(zmm0, zmm2[0].q)
                        zmm1 &= zmm0
                        rbp_38 = temp0_1688
                        
                        if ((rbp_38 & 1) != 0)
                            arg6[0] = zmm1.d
                    
                    zmm6 = arg11
                    
                    if ((rbp_38 & 2) != 0)
                        zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg6, 1), arg6, 0xe2)
                        arg6 = zmm0
                        
                        if ((rbp_38 & 4) != 0)
                            goto label_140277205
                        
                        goto label_1402770c6
                    
                    if ((rbp_38 & 4) == 0)
                    label_1402770c6:
                        
                        if ((rbp_38 & 8) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                    else
                    label_140277205:
                        zmm0 = _mm_shuffle_ps(zmm1, arg6, 0x32)
                        arg6 = _mm_shuffle_ps(arg6, zmm0, 0x84)
                        
                        if ((rbp_38 & 8) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                    
                    zmm7 = data_1434422d0
                    zmm1 = arg8 & zmm7
                    zmm7 = _mm_srai_epi32(_mm_slli_epi32(_mm_cmpeq_epi32(zmm7, zmm1) & zmm3, 0x1f), 
                        0x1f)
                    char temp0_1718 = _mm_movemask_ps(zmm7)
                    
                    if (temp0_1718 == 0)
                        zmm4 = var_548_4
                        zmm7 = var_528_3
                    else
                        zmm6 = data_1434426c0
                        zmm7 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                        
                        if ((temp0_1718 & 1) != 0)
                            arg5 = *zmm11[0].q
                        
                        zmm2 = _mm_add_epi64(zmm12, zmm6)
                        zmm6 = _mm_add_epi64(zmm6, zmm11)
                        zmm0 = _mm_shuffle_epi32(zmm7, 0x50)
                        zmm7 = _mm_shuffle_epi32(zmm7, 0xfa)
                        
                        if ((temp0_1718 & 2) != 0)
                            arg5 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e)[0].q, arg5, 0), 
                                arg5, 0xe2)
                        
                        zmm11 &= zmm0
                        zmm0 &= not.o(zmm6)
                        zmm6 = zmm12 & zmm7
                        zmm7 &= not.o(zmm2)
                        
                        if ((temp0_1718 & 4) != 0)
                            zmm2 = _mm_shuffle_ps(*zmm12[0].q, arg5, 0x30)
                            arg5 = _mm_shuffle_ps(arg5, zmm2, 0x84)
                        
                        zmm11 |= zmm0
                        
                        if ((temp0_1718 & 8) != 0)
                            arg5 = _mm_shuffle_ps(arg5, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, arg5, 0x20), 0x24)
                        
                        zmm12 = zmm6 | zmm7
                        zmm4 = var_548_4
                        zmm7 = var_528_3
                        zmm6 = arg11
                    
                    zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(arg5)
                    
                    if ((rbp_38 & 1) != 0)
                        zmm7[0] = zmm1.d
                        arg11 = var_5d8_3
                        
                        if ((rbp_38 & 2) != 0)
                            goto label_1402772bf
                        
                        goto label_14027728e
                    
                    arg11 = var_5d8_3
                    
                    if ((rbp_38 & 2) != 0)
                    label_1402772bf:
                        zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm7, 1), zmm7, 0xe2)
                        
                        if ((rbp_38 & 4) != 0)
                            goto label_14027729b
                        
                        goto label_1402772c8
                    
                label_14027728e:
                    
                    if ((rbp_38 & 4) == 0)
                    label_1402772c8:
                        
                        if ((rbp_38 & 8) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, zmm7, 0x23), 0x24)
                    else
                    label_14027729b:
                        zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, zmm7, 0x32), 0x84)
                        
                        if ((rbp_38 & 8) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, zmm7, 0x23), 0x24)
                    
                    zmm0 = data_142fc95e0
                    zmm1 = arg8 & zmm0
                    zmm3 = _mm_slli_epi32(zmm3 & _mm_cmpeq_epi32(zmm0, zmm1), 0x1f)
                    char temp0_1745 = _mm_movemask_ps(zmm3)
                    
                    if (temp0_1745 == 0)
                        zmm12 = var_598_6
                        arg9 = var_568_3
                        zmm11 = var_4d8_2
                    else
                        if ((temp0_1745 & 1) != 0)
                            zmm3 = *zmm11[0].q
                        
                        if ((temp0_1745 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                        
                        zmm11 = var_4d8_2
                        arg9 = var_568_3
                        
                        if ((temp0_1745 & 4) != 0)
                            zmm3 =
                                _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm12[0].q, zmm3, 0x30), 0x84)
                        
                        if ((temp0_1745 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm3, 0x20), 0x24)
                        
                        zmm12 = var_598_6
                    
                    zmm0 = zx.o(0)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm0) & not.o(zmm3)
                    
                    if ((rbp_38 & 1) != 0)
                        arg10.d = zmm1.d
                        
                        if ((rbp_38 & 2) != 0)
                            goto label_1402773f8
                    else if ((rbp_38 & 2) != 0)
                    label_1402773f8:
                        zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg10, 1), arg10, 0xe2)
                        arg10 = zmm0
                        
                        if ((rbp_38 & 4) != 0)
                            goto label_1402773cf
                        
                        goto label_14027740b
                    
                    if ((rbp_38 & 4) == 0)
                    label_14027740b:
                        var_5b8 = arg6
                        zmm3 = zmm7
                        
                        if ((rbp_38 & 8) != 0)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm1, arg10, 0x23), 0x24)
                    else
                    label_1402773cf:
                        zmm0 = _mm_shuffle_ps(zmm1, arg10, 0x32)
                        arg10 = _mm_shuffle_ps(arg10, zmm0, 0x84)
                        var_5b8 = arg6
                        zmm3 = zmm7
                        
                        if ((rbp_38 & 8) != 0)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm1, arg10, 0x23), 0x24)
            
            uint128_t var_418_4 = _mm_cmpeq_epi32(zmm0, zmm0) ^ zmm11
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm11 & not.o(arg9), 0x1f)) == 0)
                zmm2 = var_578_3
                zmm0 = var_538_3
                arg7 = zmm3
            else
                if (temp0_1382 == 0)
                    arg7 = zmm3
                else
                    uint128_t var_558_7 = arg10
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg8, 0x1f), 0x1f) & zmm4
                    zmm1 = zmm2 & arg9
                    uint32_t temp0_1766 = _mm_movemask_ps(zmm1)
                    zmm7 = zx.o(0)
                    arg8 = var_5e8_1
                    zmm12 = zmm6
                    zmm0 = zx.o(0)
                    uint128_t var_528_4 = zx.o(0)
                    zmm11 = zx.o(0)
                    arg6 = var_5b8
                    arg7 = zmm3
                    
                    if (temp0_1766 != 0)
                        char rbp_39 = temp0_1766.b
                        
                        if ((rbp_39 & 1) == 0)
                            if ((rbp_39 & 2) != 0)
                                goto label_140277522
                            
                            goto label_1402774bd
                        
                        zmm0 = var_5e8_1
                        zmm4 = *zmm0.q
                        
                        if ((rbp_39 & 2) != 0)
                        label_140277522:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*__pshufd_xmmdq_memdq_immb(var_5e8_1, 0x4e).q, zmm4, 
                                    0), 
                                zmm4, 0xe2)
                            zmm4 = zmm0
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((rbp_39 & 4) == 0)
                                goto label_1402774c7
                            
                            goto label_140277540
                        
                    label_1402774bd:
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                        
                        if ((rbp_39 & 4) != 0)
                        label_140277540:
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(*zmm6.q, zmm4, 0x30), 0x84)
                            zmm1 ^= zmm0
                            
                            if ((rbp_39 & 8) == 0)
                                arg10 = zmm6
                            else
                                arg10 = zmm6
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm4, 0x20), 
                                    0x24)
                        else
                        label_1402774c7:
                            zmm1 ^= zmm0
                            
                            if ((rbp_39 & 8) != 0)
                                arg10 = zmm6
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm4, 0x20), 
                                    0x24)
                            else
                                arg10 = zmm6
                        
                        uint128_t temp0_1777 = _mm_shuffle_epi32(zmm1, 0x50)
                        char temp0_1778 = _mm_movemask_ps(zmm2)
                        zmm3 = zx.o(0)
                        
                        if ((temp0_1778 & 1) != 0)
                            zmm3[0] = zmm4[0]
                        
                        arg9 = data_1434426c0
                        zmm6 = _mm_slli_epi32(temp0_1777, 0x1f)
                        
                        if ((temp0_1778 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm3, 1), zmm3, 0xe2)
                        
                        zmm7 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm0 = _mm_add_epi64(var_5e8_1, arg9)
                        zmm6 = _mm_srai_epi32(zmm6, 0x1f)
                        
                        if ((temp0_1778 & 4) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x32), 0x84)
                        
                        zmm7 = _mm_slli_epi32(zmm7, 0x1f)
                        zmm2 = zmm6 & not.o(zmm0)
                        arg8 = var_5e8_1 & zmm6
                        
                        if ((temp0_1778 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x23), 0x24)
                        
                        var_528_4 = zmm3
                        zmm0 = _mm_add_epi64(arg10, arg9)
                        zmm7 = _mm_srai_epi32(zmm7, 0x1f)
                        zmm2 |= arg8
                        
                        if ((rbp_39 & 1) != 0)
                            zmm3 = *zmm2[0].q
                        
                        zmm1 = zmm7 & not.o(zmm0)
                        zmm12 = arg10 & zmm7
                        
                        if ((rbp_39 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                            zmm1 |= zmm12
                            
                            if ((rbp_39 & 4) != 0)
                            label_140277860:
                                zmm3 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm1.q, zmm3, 0x30), 0x84)
                                
                                if ((rbp_39 & 8) == 0)
                                    goto label_14027764b
                                
                                goto label_140277880
                        else
                            zmm1 |= zmm12
                            
                            if ((rbp_39 & 4) != 0)
                                goto label_140277860
                        
                        if ((rbp_39 & 8) == 0)
                        label_14027764b:
                            zmm11 = zx.o(0)
                            
                            if ((temp0_1778 & 1) == 0)
                                goto label_140277892
                            
                            goto label_140277659
                        
                    label_140277880:
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e).q, zmm3, 0x20), 0x24)
                        zmm11 = zx.o(0)
                        
                        if ((temp0_1778 & 1) == 0)
                        label_140277892:
                            
                            if ((temp0_1778 & 2) == 0)
                                goto label_140277667
                            
                            goto label_1402778a8
                        
                    label_140277659:
                        zmm11[0] = zmm3[0]
                        
                        if ((temp0_1778 & 2) != 0)
                        label_1402778a8:
                            zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm11, 1), zmm11, 0xe2)
                            zmm1 = _mm_add_epi64(zmm1, arg9)
                            zmm2 = _mm_add_epi64(zmm2, arg9)
                            
                            if ((temp0_1778 & 4) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm3, zmm11, 0x32), 0x84)
                        else
                        label_140277667:
                            zmm1 = _mm_add_epi64(zmm1, arg9)
                            zmm2 = _mm_add_epi64(zmm2, arg9)
                            
                            if ((temp0_1778 & 4) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm3, zmm11, 0x32), 0x84)
                        
                        arg9 = var_568_3
                        
                        if ((temp0_1778 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, zmm11, 0x23)
                            zmm11 = _mm_shuffle_ps(zmm11, zmm3, 0x24)
                        
                        arg8 |= zmm6 & not.o(zmm2)
                        zmm12 |= zmm7 & not.o(zmm1)
                        zmm4 = var_548_4
                        zmm7 = zx.o(0)
                    
                    zmm0 = data_1434422d0
                    zmm2 = _mm_cmpeq_epi32(var_5c8_5 & zmm0, zmm0) & zmm4
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm2 & arg9, 0x1f), 0x1f)
                    char temp0_1801 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_1801 == 0)
                        arg11 = zx.o(0)
                    else
                        if ((temp0_1801 & 1) == 0)
                            if ((temp0_1801 & 2) != 0)
                                goto label_1402778e9
                            
                            goto label_14027770b
                        
                        zmm3 = *arg8[0].q
                        
                        if ((temp0_1801 & 2) != 0)
                        label_1402778e9:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                            zmm3 = zmm0
                            
                            if ((temp0_1801 & 4) == 0)
                                goto label_140277714
                            
                            goto label_140277902
                        
                    label_14027770b:
                        
                        if ((temp0_1801 & 4) != 0)
                        label_140277902:
                            zmm0 = _mm_shuffle_ps(*zmm12[0].q, zmm3, 0x30)
                            zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                            
                            if ((temp0_1801 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm3, 0x20)
                                zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                        else
                        label_140277714:
                            
                            if ((temp0_1801 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm3, 0x20)
                                zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                        
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                        char temp0_1806 = _mm_movemask_ps(zmm2)
                        zmm7 = zx.o(0)
                        
                        if ((temp0_1806 & 1) != 0)
                            zmm7[0] = zmm3[0]
                        
                        arg5 = data_1434426c0
                        zmm1 ^= zmm0
                        
                        if ((temp0_1806 & 2) != 0)
                            zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm7, 1), zmm7, 0xe2)
                        
                        zmm2 = _mm_add_epi64(arg8, arg5)
                        uint128_t temp0_1810 = _mm_shuffle_epi32(zmm1, 0x50)
                        
                        if ((temp0_1806 & 4) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm3, zmm7, 0x32), 0x84)
                        
                        if ((temp0_1806 & 8) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm3, zmm7, 0x23), 0x24)
                        
                        zmm3 = _mm_add_epi64(zmm12, arg5)
                        zmm1 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm2 = (arg8 & temp0_1810) | (temp0_1810 & not.o(zmm2))
                        
                        if ((temp0_1801 & 1) != 0)
                            arg9 = *zmm2[0].q
                        
                        zmm0 = zmm1 & not.o(zmm3)
                        zmm3 = zmm12 & zmm1
                        
                        if ((temp0_1801 & 2) != 0)
                            arg9 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, arg9, 0), arg9, 
                                0xe2)
                            zmm4 = var_548_4
                            zmm3 |= zmm0
                            
                            if ((temp0_1801 & 4) != 0)
                            label_14027795e:
                                arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(*zmm3[0].q, arg9, 0x30), 
                                    0x84)
                                
                                if ((temp0_1801 & 8) == 0)
                                    goto label_1402777f4
                                
                                goto label_14027797f
                        else
                            zmm3 |= zmm0
                            
                            if ((temp0_1801 & 4) != 0)
                                goto label_14027795e
                        
                        if ((temp0_1801 & 8) == 0)
                        label_1402777f4:
                            arg11 = zx.o(0)
                            
                            if ((temp0_1806 & 1) == 0)
                                goto label_140277993
                            
                            goto label_140277803
                        
                    label_14027797f:
                        arg9 = _mm_shuffle_ps(arg9, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, arg9, 0x20), 0x24)
                        arg11 = zx.o(0)
                        
                        if ((temp0_1806 & 1) != 0)
                        label_140277803:
                            arg11[0] = arg9[0]
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            zmm6 = _mm_slli_epi32(temp0_1810, 0x1f)
                            
                            if ((temp0_1806 & 2) != 0)
                                arg11 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg11, 1), arg11, 0xe2)
                        else
                        label_140277993:
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            zmm6 = _mm_slli_epi32(temp0_1810, 0x1f)
                            
                            if ((temp0_1806 & 2) != 0)
                                arg11 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg11, 1), arg11, 0xe2)
                        
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm6 = _mm_srai_epi32(zmm6, 0x1f)
                        zmm3 = _mm_add_epi64(zmm3, arg5)
                        zmm2 = _mm_add_epi64(zmm2, arg5)
                        
                        if ((temp0_1806 & 4) != 0)
                            arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(arg9, arg11, 0x32), 0x84)
                        
                        if ((temp0_1806 & 8) != 0)
                            arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(arg9, arg11, 0x23), 0x24)
                        
                        arg9 = var_568_3
                        arg8 = (arg8 & zmm6) | (zmm6 & not.o(zmm2))
                        zmm12 = (zmm12 & zmm1) | (zmm1 & not.o(zmm3))
                    
                    zmm0 = data_142fc95e0
                    zmm3 = _mm_cmpeq_epi32(var_5c8_5 & zmm0, zmm0) & zmm4
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm3 & arg9, 0x1f), 0x1f)
                    char temp0_1859 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_1859 == 0)
                        arg5 = zmm4
                        arg9 = zx.o(0)
                        zmm1 = zx.o(0)
                        zmm3 = var_598_6
                        zmm6 = var_528_4
                    else
                        if ((temp0_1859 & 1) == 0)
                            if ((temp0_1859 & 2) != 0)
                                goto label_140278051
                            
                            goto label_140277a5f
                        
                        zmm2 = *arg8[0].q
                        
                        if ((temp0_1859 & 2) != 0)
                        label_140278051:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm2, 0), zmm2, 
                                0xe2)
                            zmm2 = zmm0
                            
                            if ((temp0_1859 & 4) == 0)
                                goto label_140277a69
                            
                            goto label_14027806b
                        
                    label_140277a5f:
                        
                        if ((temp0_1859 & 4) != 0)
                        label_14027806b:
                            zmm0 = _mm_shuffle_ps(*zmm12[0].q, zmm2, 0x30)
                            zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                            
                            if ((temp0_1859 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm2, 0x20)
                                zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                        else
                        label_140277a69:
                            
                            if ((temp0_1859 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm2, 0x20)
                                zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                        
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                        char temp0_1864 = _mm_movemask_ps(zmm3)
                        arg9 = zx.o(0)
                        
                        if ((temp0_1864 & 1) != 0)
                            arg9[0] = zmm2[0]
                        
                        zmm3 = data_1434426c0
                        zmm1 ^= zmm0
                        
                        if ((temp0_1864 & 2) != 0)
                            arg9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg9, 1), arg9, 0xe2)
                        
                        zmm0 = _mm_add_epi64(arg8, zmm3)
                        uint128_t temp0_1868 = _mm_shuffle_epi32(zmm1, 0x50)
                        
                        if ((temp0_1864 & 4) != 0)
                            arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm2, arg9, 0x32), 0x84)
                            zmm4 = var_548_4
                        
                        zmm6 = temp0_1868 & not.o(zmm0)
                        
                        if ((temp0_1864 & 8) != 0)
                            zmm2 = _mm_shuffle_ps(zmm2, arg9, 0x23)
                            arg9 = _mm_shuffle_ps(arg9, zmm2, 0x24)
                        
                        zmm3 = _mm_add_epi64(zmm3, zmm12)
                        zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                        arg8 = (arg8 & temp0_1868) | zmm6
                        
                        if ((temp0_1859 & 1) == 0)
                            zmm12 &= zmm0
                            zmm0 &= not.o(zmm3)
                            
                            if ((temp0_1859 & 2) != 0)
                                goto label_1402780b5
                            
                            goto label_140277b36
                        
                        zmm2 = *arg8[0].q
                        zmm12 &= zmm0
                        zmm0 &= not.o(zmm3)
                        
                        if ((temp0_1859 & 2) != 0)
                        label_1402780b5:
                            zmm2 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm2, 0), zmm2, 
                                0xe2)
                            zmm12 |= zmm0
                            
                            if ((temp0_1859 & 4) == 0)
                                goto label_140277b45
                            
                            goto label_1402780d4
                        
                    label_140277b36:
                        zmm12 |= zmm0
                        
                        if ((temp0_1859 & 4) != 0)
                        label_1402780d4:
                            zmm2 =
                                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm12[0].q, zmm2, 0x30), 0x84)
                            
                            if ((temp0_1859 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm2, 0x20), 
                                    0x24)
                        else
                        label_140277b45:
                            
                            if ((temp0_1859 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm2, 0x20), 
                                    0x24)
                        
                        zmm3 = var_598_6
                        zmm6 = var_528_4
                        zmm1 = zx.o(0)
                        
                        if ((temp0_1864 & 1) != 0)
                            zmm1.d = zmm2[0]
                            
                            if ((temp0_1864 & 2) != 0)
                                goto label_140277bad
                        else if ((temp0_1864 & 2) != 0)
                        label_140277bad:
                            zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm1, 1), zmm1, 0xe2)
                            
                            if ((temp0_1864 & 4) != 0)
                                goto label_140277b8e
                            
                            goto label_140277bb5
                        
                        if ((temp0_1864 & 4) == 0)
                        label_140277bb5:
                            arg5 = zmm4
                            
                            if ((temp0_1864 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                        else
                        label_140277b8e:
                            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x32), 0x84)
                            arg5 = zmm4
                            
                            if ((temp0_1864 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                    
                    zmm0 = _mm_add_epi64(var_4e8_2, zmm3)
                    zmm2 = __paddq_xmmdq_memdq(var_408_2, var_588_4)
                    zmm3 = data_1434426c0
                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_488_1)
                    zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm0, var_508_5), zmm3)
                    zmm2 = _mm_add_epi64(zmm2, zmm3)
                    zmm4 = var_2e8_2
                    zmm3 = _mm_shuffle_epi32(zmm4, 0x50) & zmm2
                    zmm2 = _mm_shuffle_epi32(zmm4, 0xfa) & zmm0
                    int64_t rax_399 = zmm3[0].q
                    int64_t rcx_60 = _mm_shuffle_epi32(zmm3, 0x4e).q
                    int64_t rbp_42 = zmm2[0].q
                    int64_t rbx_32 = _mm_shuffle_epi32(zmm2, 0x4e).q
                    zmm0 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg12 + rax_399)), zx.o(*(arg12 + rcx_60))[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg12 + rbp_42)), zx.o(*(arg12 + rbx_32))[0].q)[0]
                            .q)
                    zmm2 = _mm_srli_epi32(zmm0, 0x15)
                    zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    zmm6 = _mm_add_ps(zmm6, 
                        _mm_mul_ps(zmm11, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    zmm0 = data_143442440
                    zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                    zmm4 = data_143442690
                    float temp0_1907[0x4] = _mm_mul_ps(arg11, _mm_div_ps(zmm3, zmm4))
                    zmm0 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm0)), zmm4)
                    char temp24_1 = temp0_1382 & 1
                    
                    if (temp24_1 != 0)
                        arg6[0] = zmm6.d
                    
                    arg8 = var_5c8_5
                    zmm11 = var_4d8_2
                    arg10 = var_558_7
                    zmm1 = _mm_mul_ps(zmm1, zmm0)
                    float temp0_1912[0x4] = _mm_add_ps(zmm7, temp0_1907)
                    zmm4 = arg5
                    
                    if (temp24_1 != 0)
                        arg7.d = temp0_1912[0]
                        zmm2 = var_4b8_2
                        arg9 = _mm_add_ps(arg9, zmm1)
                        
                        if (temp24_1 != 0)
                            goto label_140277f61
                        
                        goto label_140277d2f
                    
                    zmm2 = var_4b8_2
                    arg9 = _mm_add_ps(arg9, zmm1)
                    bool cond:123_1
                    bool cond:124_1
                    bool cond:139_1
                    bool cond:140_1
                    
                    if (temp24_1 != 0)
                    label_140277f61:
                        arg10.d = arg9[0]
                        char temp36_1 = temp0_1382 & 2
                        cond:123_1 = temp36_1 == 0
                        cond:124_1 = temp36_1 != 0
                        cond:139_1 = temp36_1 == 0
                        cond:140_1 = temp36_1 != 0
                        
                        if (temp36_1 != 0)
                            goto label_140277d45
                        
                        goto label_140277f6f
                    
                label_140277d2f:
                    char temp35_1 = temp0_1382 & 2
                    cond:123_1 = temp35_1 == 0
                    cond:124_1 = temp35_1 != 0
                    cond:139_1 = temp35_1 == 0
                    cond:140_1 = temp35_1 != 0
                    
                    if (temp35_1 == 0)
                    label_140277f6f:
                        
                        if (not(cond:123_1))
                        label_140277f82:
                            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_1912, arg7, 1), arg7, 0xe2)
                            
                            if (cond:140_1)
                                goto label_140277d63
                            
                            goto label_140277f8c
                    else
                    label_140277d45:
                        arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, arg6, 1), arg6, 0xe2)
                        
                        if (cond:124_1)
                            goto label_140277f82
                    
                    bool cond:171_1
                    bool cond:172_1
                    bool cond:191_1
                    bool cond:192_1
                    
                    if (not(cond:139_1))
                    label_140277d63:
                        arg10 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg10, 1), arg10, 0xe2)
                        char temp56_1 = temp0_1382 & 4
                        cond:171_1 = temp56_1 == 0
                        cond:172_1 = temp56_1 != 0
                        cond:191_1 = temp56_1 == 0
                        cond:192_1 = temp56_1 != 0
                        
                        if (temp56_1 != 0)
                            goto label_140277f9d
                        
                        goto label_140277d70
                    
                label_140277f8c:
                    char temp55_1 = temp0_1382 & 4
                    cond:171_1 = temp55_1 == 0
                    cond:172_1 = temp55_1 != 0
                    cond:191_1 = temp55_1 == 0
                    cond:192_1 = temp55_1 != 0
                    
                    if (temp55_1 == 0)
                    label_140277d70:
                        
                        if (not(cond:171_1))
                        label_140277d7e:
                            arg7 =
                                _mm_shuffle_ps(arg7, _mm_shuffle_ps(temp0_1912, arg7, 0x32), 0x84)
                            
                            if (cond:192_1)
                                goto label_140277fb7
                            
                            goto label_140277d89
                    else
                    label_140277f9d:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm6, arg6, 0x32), 0x84)
                        
                        if (cond:172_1)
                            goto label_140277d7e
                    
                    bool cond:235_1
                    bool cond:236_1
                    bool cond:261_1
                    bool cond:262_1
                    
                    if (not(cond:191_1))
                    label_140277fb7:
                        arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(arg9, arg10, 0x32), 0x84)
                        char temp79_1 = temp0_1382 & 8
                        cond:235_1 = temp79_1 == 0
                        cond:236_1 = temp79_1 != 0
                        cond:261_1 = temp79_1 == 0
                        cond:262_1 = temp79_1 != 0
                        
                        if (temp79_1 != 0)
                            goto label_140277d97
                        
                        goto label_140277fc5
                    
                label_140277d89:
                    char temp78_1 = temp0_1382 & 8
                    cond:235_1 = temp78_1 == 0
                    cond:236_1 = temp78_1 != 0
                    cond:261_1 = temp78_1 == 0
                    cond:262_1 = temp78_1 != 0
                    
                    if (temp78_1 != 0)
                    label_140277d97:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm6, arg6, 0x23), 0x24)
                        zmm6 = zmm2
                        
                        if (cond:236_1)
                            goto label_140277fd4
                        
                        goto label_140277da6
                    
                label_140277fc5:
                    zmm6 = zmm2
                    
                    if (cond:235_1)
                    label_140277da6:
                        var_5b8 = arg6
                        
                        if (not(cond:261_1))
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(arg9, arg10, 0x23), 0x24)
                    else
                    label_140277fd4:
                        arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(temp0_1912, arg7, 0x23), 0x24)
                        var_5b8 = arg6
                        
                        if (cond:262_1)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(arg9, arg10, 0x23), 0x24)
                    
                    arg9 = var_568_3
                
                arg6 = zmm4 ^ var_418_4
                
                if (_mm_movemask_ps(_mm_slli_epi32(arg6 & arg9, 0x1f)) == 0)
                    zmm2 = var_578_3
                    zmm0 = var_538_3
                    zmm12 = var_598_6
                    arg11 = var_5d8_3
                else
                    zmm12 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_458_2)
                    zmm0 = arg9
                    arg9 = zmm12 & zmm0
                    arg5 = _mm_slli_epi32(arg9, 0x1f)
                    char temp0_1928 = _mm_movemask_ps(arg5)
                    
                    if (temp0_1928 == 0)
                        zmm2 = var_578_3
                        arg9 = var_568_3
                        arg11 = var_5d8_3
                        zmm3 = var_5b8
                    else
                        zmm11 = zmm4
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg8, 0x1f), 0x1f)
                        arg5 = _mm_srai_epi32(arg5, 0x1f) & zmm1
                        
                        if (_mm_movemask_ps(arg5) != 0)
                            zmm0 = data_1434426b0
                            zmm3 = var_4c8_1
                            zmm2 = _mm_add_epi64(zmm3, zmm0)
                            zmm7 = var_5a8_6
                            zmm0 = _mm_add_epi64(zmm0, zmm7)
                            zmm4 = _mm_cmpeq_epi32(zmm4, zmm4) ^ arg5
                            uint128_t temp0_1936 = _mm_shuffle_epi32(zmm4, 0x50)
                            var_5a8_6 = (zmm7 & temp0_1936) | (temp0_1936 & not.o(zmm0))
                            zmm0 = _mm_shuffle_epi32(zmm4, 0xfa)
                            zmm3 &= zmm0
                            zmm0 &= not.o(zmm2)
                            zmm2 = __paddq_xmmdq_memdq(var_4e8_2, var_598_6)
                            int32_t temp0_1939[0x4] = __paddq_xmmdq_memdq(var_408_2, var_588_4)
                            zmm6 = data_1434426c0
                            int32_t temp0_1940[0x4] = __paddq_xmmdq_memdq(temp0_1939, var_488_1)
                            zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, var_508_5), zmm6)
                            int32_t temp0_1943[0x4] = _mm_add_epi64(temp0_1940, zmm6)
                            zmm6 = _mm_shuffle_epi32(arg5, 0x50) & temp0_1943
                            zmm4 = _mm_shuffle_epi32(arg5, 0xfa) & zmm2
                            int64_t rdx_8 = _mm_shuffle_epi32(zmm6, 0x4e)[0].q
                            int64_t rbp_43 = zmm4[0].q
                            int64_t rbx_33 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                            var_4c8_1 = zmm3 | zmm0
                            zmm2 = __paddd_xmmdq_memdq(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg12 + zmm6.q), 
                                                0), 
                                            *(arg12 + rdx_8), 2), 
                                        *(arg12 + rbp_43), 4), 
                                    *(arg12 + rbx_33), 6), 
                                data_143442b40)
                            zmm0 = _mm_cvtepi32_ps(zmm2)
                        
                        arg11 = var_5d8_3
                        zmm3 = var_5b8
                        zmm1 &= zmm0
                        
                        if ((temp0_1928 & 1) != 0)
                            zmm3[0] = zmm1.d
                            zmm4 = zmm11
                            zmm11 = var_4d8_2
                            
                            if ((temp0_1928 & 2) != 0)
                                goto label_140278149
                            
                            goto label_140278117
                        
                        zmm4 = zmm11
                        zmm11 = var_4d8_2
                        
                        if ((temp0_1928 & 2) != 0)
                        label_140278149:
                            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm3, 1), zmm3, 0xe2)
                            zmm3 = zmm0
                            
                            if ((temp0_1928 & 4) != 0)
                                goto label_14027811f
                            
                            goto label_140278155
                        
                    label_140278117:
                        
                        if ((temp0_1928 & 4) == 0)
                        label_140278155:
                            
                            if ((temp0_1928 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm1, zmm3, 0x23), 0x24)
                        else
                        label_14027811f:
                            zmm0 = _mm_shuffle_ps(zmm1, zmm3, 0x32)
                            zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                            
                            if ((temp0_1928 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm1, zmm3, 0x23), 0x24)
                        
                        zmm6 = data_1434422d0
                        zmm1 = arg8 & zmm6
                        zmm6 = _mm_srai_epi32(
                            _mm_slli_epi32(_mm_cmpeq_epi32(zmm6, zmm1) & arg9, 0x1f), 0x1f)
                        char temp0_1982 = _mm_movemask_ps(zmm6)
                        
                        if (temp0_1982 != 0)
                            uint32_t var_5b8_1[0x4] = zmm3
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            zmm3 = var_5a8_6
                            
                            if ((temp0_1982 & 1) != 0)
                                arg5 = zx.o(*zmm3[0].q)
                            
                            zmm7 = data_1434426b0
                            zmm6 ^= zmm0
                            
                            if ((temp0_1982 & 2) != 0)
                                arg5 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), arg5, 
                                        0), 
                                    arg5, 0xe2)
                            
                            int32_t temp0_1987[0x4] = _mm_add_epi64(var_4c8_1, zmm7)
                            zmm7 = _mm_add_epi64(zmm7, zmm3)
                            zmm2 = _mm_shuffle_epi32(zmm6, 0x50)
                            zmm6 = _mm_shuffle_epi32(zmm6, 0xfa)
                            
                            if ((temp0_1982 & 4) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*var_4c8_1.q), arg5, 0x30), 0x84)
                            
                            if ((temp0_1982 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(var_4c8_1, 0x4e)[0].q), 
                                        arg5, 0x20), 
                                    0x24)
                            
                            zmm4 = var_548_4
                            arg7 = arg7
                            arg8 = var_5c8_5
                            zmm11 = var_4d8_2
                            var_5a8_6 = (zmm3 & zmm2) | (zmm2 & not.o(zmm7))
                            zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(arg5, data_143442cd0), data_143442b40))
                            var_4c8_1 = (var_4c8_1 & zmm6) | (zmm6 & not.o(temp0_1987))
                            arg11 = var_5d8_3
                            zmm3 = var_5b8_1
                        
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                        zmm6 = var_4b8_2
                        
                        if ((temp0_1928 & 1) != 0)
                            arg7.d = zmm1.d
                            
                            if ((temp0_1928 & 2) != 0)
                                goto label_140278315
                            
                            goto label_1402782ea
                        
                        if ((temp0_1928 & 2) != 0)
                        label_140278315:
                            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg7, 1), arg7, 0xe2)
                            
                            if ((temp0_1928 & 4) != 0)
                                goto label_1402782f7
                            
                            goto label_14027831e
                        
                    label_1402782ea:
                        
                        if ((temp0_1928 & 4) == 0)
                        label_14027831e:
                            
                            if ((temp0_1928 & 8) != 0)
                                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x23), 0x24)
                        else
                        label_1402782f7:
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x32), 0x84)
                            
                            if ((temp0_1928 & 8) != 0)
                                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x23), 0x24)
                        
                        zmm0 = data_142fc95e0
                        zmm1 = arg8 & zmm0
                        zmm0 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm0, zmm1) & arg9, 0x1f)
                        char temp0_2008 = _mm_movemask_ps(zmm0)
                        
                        if (temp0_2008 == 0)
                            arg9 = var_568_3
                        else
                            zmm2 = zmm4
                            arg9 = var_568_3
                            
                            if ((temp0_2008 & 1) == 0)
                                if ((temp0_2008 & 2) != 0)
                                    goto label_14027916f
                                
                                goto label_140278376
                            
                            zmm4 = zx.o(*var_5a8_6.q)
                            
                            if ((temp0_2008 & 2) != 0)
                            label_14027916f:
                                zmm4 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(
                                        zx.o(*__pshufd_xmmdq_memdq_immb(var_5a8_6, 0x4e).q), zmm4, 
                                        0), 
                                    zmm4, 0xe2)
                                
                                if ((temp0_2008 & 4) == 0)
                                    goto label_14027837f
                                
                                goto label_140279194
                            
                        label_140278376:
                            
                            if ((temp0_2008 & 4) != 0)
                            label_140279194:
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(zx.o(*var_4c8_1.q), zmm4, 0x30), 0x84)
                                
                                if ((temp0_2008 & 8) != 0)
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(
                                            zx.o(*__pshufd_xmmdq_memdq_immb(var_4c8_1, 0x4e).q), 
                                            zmm4, 0x20), 
                                        0x24)
                            else
                            label_14027837f:
                                
                                if ((temp0_2008 & 8) != 0)
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(
                                            zx.o(*__pshufd_xmmdq_memdq_immb(var_4c8_1, 0x4e).q), 
                                            zmm4, 0x20), 
                                        0x24)
                            
                            zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm4, data_143442cd0), data_143442b40))
                            zmm4 = zmm2
                        
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                        
                        if ((temp0_1928 & 1) != 0)
                            arg10.d = zmm1.d
                            zmm2 = var_578_3
                            
                            if ((temp0_1928 & 2) != 0)
                                goto label_140278414
                            
                            goto label_1402783e4
                        
                        zmm2 = var_578_3
                        
                        if ((temp0_1928 & 2) != 0)
                        label_140278414:
                            arg10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg10, 1), arg10, 0xe2)
                            
                            if ((temp0_1928 & 4) != 0)
                                goto label_1402783f1
                            
                            goto label_14027841d
                        
                    label_1402783e4:
                        
                        if ((temp0_1928 & 4) == 0)
                        label_14027841d:
                            
                            if ((temp0_1928 & 8) != 0)
                                arg10 =
                                    _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm1, arg10, 0x23), 0x24)
                        else
                        label_1402783f1:
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm1, arg10, 0x32), 0x84)
                            
                            if ((temp0_1928 & 8) != 0)
                                arg10 =
                                    _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm1, arg10, 0x23), 0x24)
                    
                    arg6 = (arg6 ^ zmm12) & arg9
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(arg6, 0x1f)) == 0)
                        var_5b8 = zmm3
                        zmm12 = var_598_6
                    else
                        zmm1 = __pcmpeqd_xmmdq_memdq(data_143442ad0, var_458_2)
                        char temp0_2026 = _mm_movemask_ps(_mm_slli_epi32(zmm1 & arg9, 0x1f))
                        
                        if (temp0_2026 == 0)
                            zmm12 = var_598_6
                        else
                            char temp27_1 = temp0_2026 & 1
                            
                            if (temp27_1 == 0)
                                zmm12 = var_598_6
                                
                                if (temp27_1 != 0)
                                label_1402784f4:
                                    arg7.d = 0
                                    
                                    if (temp27_1 != 0)
                                        goto label_140278493
                                    
                                    goto label_1402784fb
                            else
                                zmm3[0] = 0
                                zmm12 = var_598_6
                                
                                if (temp27_1 != 0)
                                    goto label_1402784f4
                            
                            bool cond:154_1
                            bool cond:155_1
                            bool cond:169_1
                            bool cond:170_1
                            
                            if (temp27_1 != 0)
                            label_140278493:
                                arg10.d = 0
                                char temp41_1 = temp0_2026 & 2
                                cond:154_1 = temp41_1 == 0
                                cond:155_1 = temp41_1 != 0
                                cond:169_1 = temp41_1 == 0
                                cond:170_1 = temp41_1 != 0
                                
                                if (temp41_1 != 0)
                                    goto label_14027850b
                                
                                goto label_14027849d
                            
                        label_1402784fb:
                            char temp40_1 = temp0_2026 & 2
                            cond:154_1 = temp40_1 == 0
                            cond:155_1 = temp40_1 != 0
                            cond:169_1 = temp40_1 == 0
                            cond:170_1 = temp40_1 != 0
                            
                            if (temp40_1 == 0)
                            label_14027849d:
                                
                                if (not(cond:154_1))
                                label_1402784ac:
                                    arg7 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg7, 0), arg7, 0xe2)
                                    
                                    if (cond:170_1)
                                        goto label_14027851f
                                    
                                    goto label_1402784b2
                            else
                            label_14027850b:
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm3, 0), zmm3, 0xe2)
                                
                                if (cond:155_1)
                                    goto label_1402784ac
                            
                            bool cond:211_1
                            bool cond:212_1
                            bool cond:231_1
                            bool cond:232_1
                            
                            if (not(cond:169_1))
                            label_14027851f:
                                arg10 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg10, 0), arg10, 0xe2)
                                char temp63_1 = temp0_2026 & 4
                                cond:211_1 = temp63_1 == 0
                                cond:212_1 = temp63_1 != 0
                                cond:231_1 = temp63_1 == 0
                                cond:232_1 = temp63_1 != 0
                                
                                if (temp63_1 != 0)
                                    goto label_1402784be
                                
                                goto label_140278528
                            
                        label_1402784b2:
                            char temp62_1 = temp0_2026 & 4
                            cond:211_1 = temp62_1 == 0
                            cond:212_1 = temp62_1 != 0
                            cond:231_1 = temp62_1 == 0
                            cond:232_1 = temp62_1 != 0
                            
                            if (temp62_1 == 0)
                            label_140278528:
                                
                                if (not(cond:211_1))
                                label_140278532:
                                    arg7 = _mm_shuffle_ps(arg7, 
                                        _mm_shuffle_ps(zx.o(0), arg7, 0x30), 0x84)
                                    
                                    if (cond:232_1)
                                        goto label_1402784ce
                                    
                                    goto label_140278539
                            else
                            label_1402784be:
                                zmm3 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x30), 0x84)
                                
                                if (cond:212_1)
                                    goto label_140278532
                            
                            bool cond:284_1
                            bool cond:285_1
                            bool cond:300_1
                            bool cond:301_1
                            
                            if (not(cond:231_1))
                            label_1402784ce:
                                arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zx.o(0), arg10, 0x30), 
                                    0x84)
                                char temp89_1 = temp0_2026 & 8
                                cond:284_1 = temp89_1 == 0
                                cond:285_1 = temp89_1 != 0
                                cond:300_1 = temp89_1 == 0
                                cond:301_1 = temp89_1 != 0
                                
                                if (temp89_1 != 0)
                                    goto label_140278545
                                
                                goto label_1402784d8
                            
                        label_140278539:
                            char temp88_1 = temp0_2026 & 8
                            cond:284_1 = temp88_1 == 0
                            cond:285_1 = temp88_1 != 0
                            cond:300_1 = temp88_1 == 0
                            cond:301_1 = temp88_1 != 0
                            
                            if (temp88_1 != 0)
                            label_140278545:
                                zmm3 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x20), 0x24)
                                
                                if (cond:285_1)
                                    goto label_1402784e2
                                
                                goto label_14027854b
                            
                        label_1402784d8:
                            
                            if (cond:284_1)
                            label_14027854b:
                                
                                if (not(cond:300_1))
                                    arg10 = _mm_shuffle_ps(arg10, 
                                        _mm_shuffle_ps(zx.o(0), arg10, 0x20), 0x24)
                            else
                            label_1402784e2:
                                arg7 =
                                    _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x20), 0x24)
                                
                                if (cond:301_1)
                                    arg10 = _mm_shuffle_ps(arg10, 
                                        _mm_shuffle_ps(zx.o(0), arg10, 0x20), 0x24)
                            
                            zmm2 = zmm2
                            zmm11 = var_4d8_2
                        
                        char temp0_2046 = _mm_movemask_ps(_mm_slli_epi32(zmm1 & not.o(arg6), 0x1f))
                        
                        if (temp0_2046 == 0)
                            var_5b8 = zmm3
                        else
                            char temp34_1 = temp0_2046 & 1
                            
                            if (temp34_1 != 0)
                                zmm3[0] = 0
                                
                                if (temp34_1 != 0)
                                    goto label_140278606
                            else if (temp34_1 != 0)
                            label_140278606:
                                arg7.d = 0
                                
                                if (temp34_1 != 0)
                                    goto label_1402785a7
                                
                                goto label_14027860d
                            
                            bool cond:167_1
                            bool cond:168_1
                            bool cond:188_1
                            bool cond:189_1
                            
                            if (temp34_1 != 0)
                            label_1402785a7:
                                arg10.d = 0
                                char temp54_1 = temp0_2046 & 2
                                cond:167_1 = temp54_1 == 0
                                cond:168_1 = temp54_1 != 0
                                cond:188_1 = temp54_1 == 0
                                cond:189_1 = temp54_1 != 0
                                
                                if (temp54_1 != 0)
                                    goto label_14027861d
                                
                                goto label_1402785b1
                            
                        label_14027860d:
                            char temp53_1 = temp0_2046 & 2
                            cond:167_1 = temp53_1 == 0
                            cond:168_1 = temp53_1 != 0
                            cond:188_1 = temp53_1 == 0
                            cond:189_1 = temp53_1 != 0
                            
                            if (temp53_1 == 0)
                            label_1402785b1:
                                
                                if (not(cond:167_1))
                                label_1402785c0:
                                    arg7 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg7, 0), arg7, 0xe2)
                                    
                                    if (cond:189_1)
                                        goto label_140278631
                                    
                                    goto label_1402785c6
                            else
                            label_14027861d:
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm3, 0), zmm3, 0xe2)
                                
                                if (cond:168_1)
                                    goto label_1402785c0
                            
                            bool cond:229_1
                            bool cond:230_1
                            bool cond:259_1
                            bool cond:260_1
                            
                            if (not(cond:188_1))
                            label_140278631:
                                arg10 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg10, 0), arg10, 0xe2)
                                char temp77_1 = temp0_2046 & 4
                                cond:229_1 = temp77_1 == 0
                                cond:230_1 = temp77_1 != 0
                                cond:259_1 = temp77_1 == 0
                                cond:260_1 = temp77_1 != 0
                                
                                if (temp77_1 != 0)
                                    goto label_1402785d2
                                
                                goto label_14027863a
                            
                        label_1402785c6:
                            char temp76_1 = temp0_2046 & 4
                            cond:229_1 = temp76_1 == 0
                            cond:230_1 = temp76_1 != 0
                            cond:259_1 = temp76_1 == 0
                            cond:260_1 = temp76_1 != 0
                            
                            if (temp76_1 == 0)
                            label_14027863a:
                                
                                if (not(cond:229_1))
                                label_140278644:
                                    arg7 = _mm_shuffle_ps(arg7, 
                                        _mm_shuffle_ps(zx.o(0), arg7, 0x30), 0x84)
                                    
                                    if (cond:260_1)
                                        goto label_1402785e2
                                    
                                    goto label_14027864b
                            else
                            label_1402785d2:
                                zmm3 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x30), 0x84)
                                
                                if (cond:230_1)
                                    goto label_140278644
                            
                            bool cond:298_1
                            bool cond:316_1
                            bool cond:317_1
                            bool cond:299_1
                            
                            if (cond:259_1)
                            label_14027864b:
                                char temp103_1 = temp0_2046 & 8
                                cond:298_1 = temp103_1 == 0
                                cond:299_1 = temp103_1 != 0
                                cond:316_1 = temp103_1 == 0
                                cond:317_1 = temp103_1 == 0
                                
                                if (temp103_1 != 0)
                                label_140278657:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(0), zmm3, 0x20), 0x24)
                                    
                                    if (cond:299_1)
                                        goto label_1402785f6
                                    
                                    goto label_14027865d
                            else
                            label_1402785e2:
                                arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zx.o(0), arg10, 0x30), 
                                    0x84)
                                char temp104_1 = temp0_2046 & 8
                                cond:298_1 = temp104_1 == 0
                                cond:299_1 = temp104_1 != 0
                                cond:316_1 = temp104_1 == 0
                                cond:317_1 = temp104_1 == 0
                                
                                if (temp104_1 != 0)
                                    goto label_140278657
                            
                            if (cond:298_1)
                            label_14027865d:
                                var_5b8 = zmm3
                                
                                if (not(cond:316_1))
                                    arg10 = _mm_shuffle_ps(arg10, 
                                        _mm_shuffle_ps(zx.o(0), arg10, 0x20), 0x24)
                            else
                            label_1402785f6:
                                arg7 =
                                    _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x20), 0x24)
                                var_5b8 = zmm3
                                
                                if (not(cond:317_1))
                                    arg10 = _mm_shuffle_ps(arg10, 
                                        _mm_shuffle_ps(zx.o(0), arg10, 0x20), 0x24)
                    
                    zmm0 = var_538_3
            
            zmm0 = _mm_cmpeq_epi32(zmm0, arg11) & not.o(arg9)
            arg6 = _mm_slli_epi32(zmm0, 0x1f)
            char temp0_2067 = _mm_movemask_ps(arg6)
            
            if (temp0_2067 == 0)
                zmm3 = var_498_3
                arg11 = var_468_3
                arg5 = var_5b8
                zmm7 = var_478_3
            else
                arg5 = zmm0
                zmm3 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(var_4f8_2, arg11), 0xe8), 
                    _mm_shuffle_epi32(
                        __pmuludq_xmmdq_memdq(_mm_shuffle_epi32(arg11, 0xf5), var_388_1), 0xe8).q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                zmm7 = _mm_shuffle_epi32(zmm3, 0x4e)
                zmm3 = _mm_unpacklo_epi32(zmm3, zmm0.q)
                zmm7 = _mm_unpacklo_epi32(zmm7, _mm_cmpgt_epi32(zx.o(0), zmm7).q)
                int32_t var_508_6[0x4] = zmm7
                zmm0 = _mm_add_epi64(zmm7, zmm12)
                uint32_t var_488_2[0x4] = zmm3
                arg11 = var_5e8_1
                float var_5a8_8[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(zmm3, var_588_4), arg11)
                uint128_t var_4c8_2 = _mm_add_epi64(zmm0, zmm6)
                zmm11 &= arg5
                uint128_t var_528_5 = arg7
                uint128_t var_558_9 = arg10
                float var_538_4[0x4] = arg5
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm11, 0x1f)) != 0)
                    zmm1 = _mm_srai_epi32(
                        _mm_slli_epi32(__pcmpeqd_xmmdq_memdq(zx.o(0), var_358_2) & zmm11, 0x1f), 
                        0x1f)
                    char temp0_2088 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_2088 != 0)
                        float var_4d8_3[0x4] = zmm11
                        zmm11 = arg5
                        zmm6 = _mm_add_epi64(var_4e8_2, zmm12)
                        zmm7 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_408_2, var_588_4), 
                            var_488_2)
                        zmm6 = __paddq_xmmdq_memdq(zmm6, var_508_6)
                        zmm4 = data_1434426c0
                        zmm6 = _mm_add_epi64(zmm6, zmm4)
                        zmm7 = _mm_add_epi64(zmm7, zmm4)
                        arg5 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm7 &= arg5
                        zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm6 &= zmm0
                        int64_t rax_425 = _mm_shuffle_epi32(zmm7, 0x4e).q
                        void* rbx_34 = arg12 + rax_425
                        zmm2 = *(arg12 + rax_425)
                        int64_t rax_426 = zmm6.q
                        void* rdi_35 = arg12 + rax_426
                        zmm1 = *(arg12 + rax_426)
                        int64_t rax_427 = _mm_shuffle_epi32(zmm6, 0x4e).q
                        void* rsi_8 = arg12 + rax_427
                        arg11 = *(arg12 + rax_427)
                        zmm6 = arg5 & zmm4
                        zmm4 &= zmm0
                        void* rbp_45 = zmm7[0].q + arg12
                        var_568_3 = *(zmm6.q + rbp_45)
                        arg10 = *(_mm_shuffle_epi32(zmm6, 0x4e).q + rbx_34)
                        zmm6 = *(zmm4[0].q + rdi_35)
                        zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rsi_8)
                        zmm7 = data_1434426e0
                        arg5 &= zmm7
                        zmm0 &= zmm7
                        var_4f8_2 = *(arg5[0].q + rbp_45)
                        zmm12 = *(_mm_shuffle_epi32(arg5, 0x4e)[0].q + rbx_34)
                        arg7 = *(zmm0.q + rdi_35)
                        zmm7 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rsi_8)
                        bool cond:71_1
                        bool cond:72_1
                        bool cond:85_1
                        bool cond:86_1
                        
                        if ((temp0_2088 & 1) == 0)
                            char temp19_1 = temp0_2088 & 2
                            cond:71_1 = temp19_1 != 0
                            cond:72_1 = temp19_1 == 0
                            cond:85_1 = temp19_1 != 0
                            cond:86_1 = temp19_1 == 0
                            
                            if (temp19_1 == 0)
                                goto label_1402789dc
                            
                            goto label_1402788d9
                        
                        var_5d8_3 = *rbp_45
                        char temp18_1 = temp0_2088 & 2
                        cond:71_1 = temp18_1 != 0
                        cond:72_1 = temp18_1 == 0
                        cond:85_1 = temp18_1 != 0
                        cond:86_1 = temp18_1 == 0
                        
                        if (temp18_1 == 0)
                        label_1402789dc:
                            
                            if (cond:72_1)
                                goto label_1402788e4
                            
                            goto label_1402789ee
                        
                    label_1402788d9:
                        var_5d8_3 =
                            _mm_shuffle_ps(_mm_shuffle_ps(zmm2, var_5d8_3, 0), var_5d8_3, 0xe2)
                        
                        if (not(cond:71_1))
                        label_1402788e4:
                            
                            if (cond:86_1)
                                goto label_1402789fc
                            
                            goto label_1402788f6
                        
                    label_1402789ee:
                        var_568_3 = _mm_unpacklo_ps(var_568_3, arg10.q)
                        bool cond:117_1
                        bool cond:118_1
                        bool cond:134_1
                        bool cond:135_1
                        
                        if (not(cond:85_1))
                        label_1402789fc:
                            char temp29_1 = temp0_2088 & 4
                            cond:117_1 = temp29_1 != 0
                            cond:118_1 = temp29_1 == 0
                            cond:134_1 = temp29_1 != 0
                            cond:135_1 = temp29_1 == 0
                            zmm2 = var_578_3
                            arg5 = zmm11
                            
                            if (temp29_1 == 0)
                                goto label_140278911
                            
                            goto label_140278a1c
                        
                    label_1402788f6:
                        var_4f8_2 = _mm_unpacklo_ps(var_4f8_2, zmm12[0].q)
                        char temp28_1 = temp0_2088 & 4
                        cond:117_1 = temp28_1 != 0
                        cond:118_1 = temp28_1 == 0
                        cond:134_1 = temp28_1 != 0
                        cond:135_1 = temp28_1 == 0
                        zmm2 = var_578_3
                        arg5 = zmm11
                        
                        if (temp28_1 == 0)
                        label_140278911:
                            arg8 = var_5c8_5
                            zmm11 = var_4d8_3
                            
                            if (cond:118_1)
                                goto label_140278a38
                            
                            goto label_140278928
                        
                    label_140278a1c:
                        var_5d8_3 =
                            _mm_shuffle_ps(var_5d8_3, _mm_shuffle_ps(zmm1, var_5d8_3, 0x30), 0x84)
                        arg8 = var_5c8_5
                        zmm11 = var_4d8_3
                        
                        if (not(cond:117_1))
                        label_140278a38:
                            zmm1 = var_5d8_3
                            
                            if (cond:135_1)
                                goto label_14027894b
                            
                            goto label_140278a43
                        
                    label_140278928:
                        zmm0 = var_568_3
                        var_568_3 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm6, zmm0, 0x30), 0x84)
                        zmm1 = var_5d8_3
                        bool cond:165_1
                        bool cond:166_1
                        bool cond:186_1
                        bool cond:187_1
                        
                        if (not(cond:134_1))
                        label_14027894b:
                            zmm0 = var_548_4
                            arg7 = var_528_5
                            char temp46_1 = temp0_2088 & 8
                            cond:165_1 = temp46_1 != 0
                            cond:166_1 = temp46_1 == 0
                            cond:186_1 = temp46_1 == 0
                            cond:187_1 = temp46_1 != 0
                            
                            if (temp46_1 == 0)
                                goto label_140278a78
                            
                            goto label_140278970
                        
                    label_140278a43:
                        zmm0 = var_4f8_2
                        var_4f8_2 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg7, zmm0, 0x30), 0x84)
                        zmm0 = var_548_4
                        arg7 = var_528_5
                        char temp45_1 = temp0_2088 & 8
                        cond:165_1 = temp45_1 != 0
                        cond:166_1 = temp45_1 == 0
                        cond:186_1 = temp45_1 == 0
                        cond:187_1 = temp45_1 != 0
                        
                        if (temp45_1 == 0)
                        label_140278a78:
                            zmm6 = var_4b8_2
                            
                            if (cond:166_1)
                                goto label_140278984
                            
                            goto label_140278a87
                        
                    label_140278970:
                        var_5d8_3 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg11, zmm1, 0x20), 0x24)
                        zmm6 = var_4b8_2
                        
                        if (cond:165_1)
                        label_140278a87:
                            zmm1 = var_568_3
                            var_568_3 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x20), 0x24)
                            arg11 = var_5e8_1
                            zmm4 = zmm0
                            
                            if (not(cond:186_1))
                            label_140278aab:
                                zmm0 = var_4f8_2
                                zmm7 = _mm_shuffle_ps(zmm7, zmm0, 0x20)
                                var_4f8_2 = _mm_shuffle_ps(zmm0, zmm7, 0x24)
                        else
                        label_140278984:
                            arg11 = var_5e8_1
                            zmm4 = zmm0
                            
                            if (cond:187_1)
                                goto label_140278aab
                    
                    zmm0 = zx.o(0)
                    zmm1 = _mm_cmpeq_epi32(var_358_2, zmm0) & not.o(zmm11)
                    zmm11 = zmm1
                    zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                    char temp0_2121 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_2121 == 0)
                        arg10 = var_558_9
                        zmm11 = var_4f8_2
                        arg9 = var_568_3
                    else
                        arg5 = _mm_srai_epi32(_mm_slli_epi32(arg8, 0x1f), 0x1f)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f) & arg5
                        
                        if (_mm_movemask_ps(zmm1) == 0)
                            arg11 = var_5a8_8
                            zmm12 = var_4c8_2
                        else
                            zmm0 = data_1434426c0
                            zmm3 = var_4c8_2
                            zmm2 = _mm_add_epi64(zmm3, zmm0)
                            zmm4 = var_5a8_8
                            zmm6 = _mm_add_epi64(zmm4, zmm0)
                            zmm7 = _mm_cmpeq_epi32(zmm7, zmm7) ^ zmm1
                            float temp0_2129[0x4] = _mm_shuffle_epi32(zmm7, 0x50)
                            arg11 = (temp0_2129 & not.o(zmm6)) | (zmm4 & temp0_2129)
                            zmm12 = _mm_shuffle_epi32(zmm7, 0xfa)
                            zmm12 = (zmm12 & not.o(zmm2)) | (zmm3 & zmm12)
                            zmm2 = __paddq_xmmdq_memdq(var_4e8_2, var_598_6)
                            int32_t temp0_2133[0x4] = __paddq_xmmdq_memdq(
                                __paddq_xmmdq_memdq(var_408_2, var_588_4), var_488_2)
                            zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, var_508_6), zmm0)
                            int32_t temp0_2136[0x4] = _mm_add_epi64(temp0_2133, zmm0)
                            zmm6 = _mm_shuffle_epi32(zmm1, 0x50) & temp0_2136
                            zmm1 = _mm_shuffle_epi32(zmm1, 0xfa) & zmm2
                            zmm0 = _mm_unpacklo_ps(*(arg12 + zmm6.q), 
                                (*(arg12 + _mm_shuffle_epi32(zmm6, 0x4e)[0].q))[0].q).q |
                                _mm_unpacklo_ps(*(arg12 + zmm1.q), 
                                (*(arg12 + _mm_shuffle_epi32(zmm1, 0x4e).q)).q)[0].q << 0x40
                        
                        zmm1 = var_5d8_3
                        arg5 &= zmm0
                        
                        if ((temp0_2121 & 1) != 0)
                            zmm1.d = arg5[0]
                            
                            if ((temp0_2121 & 2) != 0)
                                goto label_140278c6b
                            
                            goto label_140278c45
                        
                        if ((temp0_2121 & 2) != 0)
                        label_140278c6b:
                            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm1, 1), zmm1, 0xe2)
                            zmm1 = zmm0
                            
                            if ((temp0_2121 & 4) != 0)
                                goto label_140278c4e
                            
                            goto label_140278c78
                        
                    label_140278c45:
                        
                        if ((temp0_2121 & 4) == 0)
                        label_140278c78:
                            
                            if ((temp0_2121 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg5, zmm1, 0x23), 0x24)
                        else
                        label_140278c4e:
                            zmm0 = _mm_shuffle_ps(arg5, zmm1, 0x32)
                            zmm1 = _mm_shuffle_ps(zmm1, zmm0, 0x84)
                            
                            if ((temp0_2121 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg5, zmm1, 0x23), 0x24)
                        
                        var_5d8_3 = zmm1
                        zmm7 = data_1434422d0
                        zmm6 = arg8 & zmm7
                        zmm7 = _mm_srai_epi32(
                            _mm_slli_epi32(_mm_cmpeq_epi32(zmm7, zmm6) & zmm11, 0x1f), 0x1f)
                        char temp0_2152 = _mm_movemask_ps(zmm7)
                        
                        if (temp0_2152 != 0)
                            arg5 = data_1434426c0
                            zmm7 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((temp0_2152 & 1) != 0)
                                zmm1 = *arg11[0].q
                            
                            zmm2 = _mm_add_epi64(zmm12, arg5)
                            arg5 = _mm_add_epi64(arg5, arg11)
                            zmm0 = _mm_shuffle_epi32(zmm7, 0x50)
                            zmm7 = _mm_shuffle_epi32(zmm7, 0xfa)
                            
                            if ((temp0_2152 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg11, 0x4e)[0].q, zmm1, 0), 
                                    zmm1, 0xe2)
                            
                            arg11 &= zmm0
                            zmm0 &= not.o(arg5)
                            
                            if ((temp0_2152 & 4) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*zmm12[0].q, zmm1, 0x30), 0x84)
                            
                            arg11 |= zmm0
                            
                            if ((temp0_2152 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                            
                            zmm12 = (zmm12 & zmm7) | (zmm7 & not.o(zmm2))
                        
                        zmm4 = var_548_4
                        arg7 = var_528_5
                        arg9 = var_568_3
                        zmm6 = _mm_cmpeq_epi32(zmm6, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_2121 & 1) != 0)
                            arg9[0] = zmm6.d
                            
                            if ((temp0_2121 & 2) != 0)
                                goto label_140278dcf
                            
                            goto label_140278da1
                        
                        if ((temp0_2121 & 2) != 0)
                        label_140278dcf:
                            arg9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, arg9, 1), arg9, 0xe2)
                            
                            if ((temp0_2121 & 4) != 0)
                                goto label_140278daf
                            
                            goto label_140278dd9
                        
                    label_140278da1:
                        
                        if ((temp0_2121 & 4) == 0)
                        label_140278dd9:
                            
                            if ((temp0_2121 & 8) != 0)
                                arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm6, arg9, 0x23), 0x24)
                        else
                        label_140278daf:
                            arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm6, arg9, 0x32), 0x84)
                            
                            if ((temp0_2121 & 8) != 0)
                                arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm6, arg9, 0x23), 0x24)
                        
                        zmm0 = data_142fc95e0
                        zmm6 = arg8 & zmm0
                        char temp0_2175 = _mm_movemask_ps(_mm_slli_epi32(
                            zmm11 & _mm_cmpeq_epi32(zmm0, zmm6), 0x1f))
                        
                        if (temp0_2175 == 0)
                            zmm2 = var_578_3
                            arg5 = var_538_4
                            arg10 = var_558_9
                            zmm11 = var_4f8_2
                            arg11 = var_5e8_1
                        else
                            arg10 = var_558_9
                            zmm11 = var_4f8_2
                            
                            if ((temp0_2175 & 1) != 0)
                                zmm1 = *arg11[0].q
                            
                            if ((temp0_2175 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg11, 0x4e).q, zmm1, 0), 
                                    zmm1, 0xe2)
                            
                            zmm2 = var_578_3
                            arg5 = var_538_4
                            arg11 = var_5e8_1
                            
                            if ((temp0_2175 & 4) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*zmm12[0].q, zmm1, 0x30), 0x84)
                            
                            if ((temp0_2175 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                        
                        zmm6 = _mm_cmpeq_epi32(zmm6, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_2121 & 1) != 0)
                            zmm11[0] = zmm6.d
                            
                            if ((temp0_2121 & 2) != 0)
                                goto label_140278f0f
                            
                            goto label_140278ee1
                        
                        if ((temp0_2121 & 2) != 0)
                        label_140278f0f:
                            zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm11, 1), zmm11, 0xe2)
                            
                            if ((temp0_2121 & 4) != 0)
                                goto label_140278eef
                            
                            goto label_140278f19
                        
                    label_140278ee1:
                        
                        if ((temp0_2121 & 4) == 0)
                        label_140278f19:
                            
                            if ((temp0_2121 & 8) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm6, zmm11, 0x23), 0x24)
                        else
                        label_140278eef:
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm6, zmm11, 0x32), 0x84)
                            
                            if ((temp0_2121 & 8) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm6, zmm11, 0x23), 0x24)
                        
                        zmm6 = var_4b8_2
                
                zmm0 = _mm_slli_epi32(arg5 & var_418_4, 0x1f)
                
                if (_mm_movemask_ps(zmm0) == 0)
                    arg11 = var_5d8_3
                    zmm6 = var_5b8
                else
                    zmm12 = _mm_srai_epi32(_mm_slli_epi32(arg5 & zmm4, 0x1f), 0x1f)
                    char temp0_2195 = _mm_movemask_ps(zmm12)
                    
                    if (temp0_2195 == 0)
                        arg11 = var_5d8_3
                    else
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg8, 0x1f), 0x1f) & zmm4
                        arg6 = _mm_srai_epi32(arg6, 0x1f) & zmm1
                        uint32_t temp0_2199 = _mm_movemask_ps(arg6)
                        float var_4f8_3[0x4] = zmm11
                        float var_568_4[0x4] = arg9
                        
                        if (temp0_2199 == 0)
                            arg8 = zx.o(0)
                            zmm7 = zx.o(0)
                            arg6 = zx.o(0)
                        else
                            char rdi_36 = temp0_2199.b
                            
                            if ((rdi_36 & 1) == 0)
                                if ((rdi_36 & 2) != 0)
                                    goto label_1402791cc
                                
                                goto label_140278fc4
                            
                            arg5 = *arg11[0].q
                            
                            if ((rdi_36 & 2) != 0)
                            label_1402791cc:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg11, 0x4e).q, arg5, 0), 
                                    arg5, 0xe2)
                                arg5 = zmm0
                                
                                if ((rdi_36 & 4) == 0)
                                    goto label_140278fce
                                
                                goto label_1402791e6
                            
                        label_140278fc4:
                            
                            if ((rdi_36 & 4) != 0)
                            label_1402791e6:
                                zmm0 = _mm_shuffle_ps(*zmm6.q, arg5, 0x30)
                                arg5 = _mm_shuffle_ps(arg5, zmm0, 0x84)
                                
                                if ((rdi_36 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            else
                            label_140278fce:
                                
                                if ((rdi_36 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            char temp0_2204 = _mm_movemask_ps(zmm1)
                            arg8 = zx.o(0)
                            
                            if ((temp0_2204 & 1) != 0)
                                arg8[0] = arg5[0]
                            
                            arg10 = data_1434426c0
                            arg6 ^= zmm0
                            
                            if ((temp0_2204 & 2) != 0)
                                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, arg8, 1), arg8, 0xe2)
                            
                            zmm1 = _mm_add_epi64(arg11, arg10)
                            zmm2 = _mm_shuffle_epi32(arg6, 0x50)
                            arg9 = zmm4
                            zmm4 = zmm6
                            
                            if ((temp0_2204 & 4) != 0)
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg5, arg8, 0x32), 0x84)
                            
                            zmm0 = zmm2 & not.o(zmm1)
                            
                            if ((temp0_2204 & 8) != 0)
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg5, arg8, 0x23), 0x24)
                            
                            zmm1 = _mm_add_epi64(zmm4, arg10)
                            uint32_t temp0_2214[0x4] = _mm_shuffle_epi32(arg6, 0xfa)
                            zmm6 = (arg11 & zmm2) | zmm0
                            
                            if ((rdi_36 & 1) != 0)
                                zmm11 = *zmm6.q
                            
                            zmm0 = temp0_2214 & not.o(zmm1)
                            zmm1 = zmm4 & temp0_2214
                            arg6 = zx.o(0)
                            
                            if ((rdi_36 & 2) != 0)
                                zmm11 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e)[0].q, zmm11, 0), 
                                    zmm11, 0xe2)
                                arg7 = var_528_5
                                zmm4 = var_548_4
                                arg5 = var_538_4
                                zmm1 |= zmm0
                                
                                if ((rdi_36 & 4) != 0)
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(*zmm1.q, zmm11, 0x30), 0x84)
                            else
                                zmm4 = arg9
                                arg5 = var_538_4
                                zmm1 |= zmm0
                                
                                if ((rdi_36 & 4) != 0)
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(*zmm1.q, zmm11, 0x30), 0x84)
                            
                            if ((rdi_36 & 8) == 0)
                                zmm7 = zx.o(0)
                                
                                if ((temp0_2204 & 1) == 0)
                                    goto label_14027926c
                                
                                goto label_1402790f3
                            
                            zmm11 = _mm_shuffle_ps(zmm11, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e).q, zmm11, 0x20), 0x24)
                            zmm7 = zx.o(0)
                            
                            if ((temp0_2204 & 1) != 0)
                            label_1402790f3:
                                zmm7[0] = zmm11[0]
                                zmm3 = _mm_slli_epi32(temp0_2214, 0x1f)
                                zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                
                                if ((temp0_2204 & 2) != 0)
                                    zmm7 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm7, 1), zmm7, 0xe2)
                            else
                            label_14027926c:
                                zmm3 = _mm_slli_epi32(temp0_2214, 0x1f)
                                zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                
                                if ((temp0_2204 & 2) != 0)
                                    zmm7 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm7, 1), zmm7, 0xe2)
                            
                            zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm1 = _mm_add_epi64(zmm1, arg10)
                            zmm6 = _mm_add_epi64(zmm6, arg10)
                            
                            if ((temp0_2204 & 4) != 0)
                                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm11, zmm7, 0x32), 0x84)
                            
                            arg11 &= zmm2
                            
                            if ((temp0_2204 & 8) != 0)
                                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm11, zmm7, 0x23), 0x24)
                            
                            arg11 |= zmm2 & not.o(zmm6)
                            zmm6 = (var_4b8_2 & zmm3) | (zmm3 & not.o(zmm1))
                        
                        zmm0 = data_1434422d0
                        zmm1 = _mm_cmpeq_epi32(var_5c8_5 & zmm0, zmm0) & zmm4
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg5 & zmm1, 0x1f), 0x1f)
                        char temp0_2250 = _mm_movemask_ps(zmm2)
                        float var_5e8_2[0x4] = zmm7
                        
                        if (temp0_2250 == 0)
                            zmm11 = zmm6
                            zmm2 = zx.o(0)
                        else
                            if ((temp0_2250 & 1) == 0)
                                if ((temp0_2250 & 2) != 0)
                                    goto label_14027949b
                                
                                goto label_140279333
                            
                            arg5 = *arg11[0].q
                            
                            if ((temp0_2250 & 2) != 0)
                            label_14027949b:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg11, 0x4e).q, arg5, 0), 
                                    arg5, 0xe2)
                                arg5 = zmm0
                                
                                if ((temp0_2250 & 4) == 0)
                                    goto label_14027933d
                                
                                goto label_1402794b5
                            
                        label_140279333:
                            
                            if ((temp0_2250 & 4) != 0)
                            label_1402794b5:
                                zmm0 = _mm_shuffle_ps(*zmm6.q, arg5, 0x30)
                                arg5 = _mm_shuffle_ps(arg5, zmm0, 0x84)
                                
                                if ((temp0_2250 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            else
                            label_14027933d:
                                
                                if ((temp0_2250 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            char temp0_2255 = _mm_movemask_ps(zmm1)
                            arg6 = zx.o(0)
                            
                            if ((temp0_2255 & 1) != 0)
                                arg6[0] = arg5[0]
                            
                            arg7 = data_1434426c0
                            zmm2 ^= zmm0
                            
                            if ((temp0_2255 & 2) != 0)
                                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, arg6, 1), arg6, 0xe2)
                            
                            zmm1 = _mm_add_epi64(arg11, arg7)
                            uint32_t temp0_2259[0x4] = _mm_shuffle_epi32(zmm2, 0x50)
                            zmm7 = zmm6
                            
                            if ((temp0_2255 & 4) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg5, arg6, 0x32), 0x84)
                            
                            zmm0 = temp0_2259 & not.o(zmm1)
                            arg9 = arg11
                            
                            if ((temp0_2255 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, arg6, 0x23)
                                arg6 = _mm_shuffle_ps(arg6, arg5, 0x24)
                            
                            zmm1 = _mm_add_epi64(zmm7, arg7)
                            uint128_t temp0_2265 = _mm_shuffle_epi32(zmm2, 0xfa)
                            arg11 = (arg11 & temp0_2259) | zmm0
                            
                            if ((temp0_2250 & 1) != 0)
                                arg5 = *arg11[0].q
                            
                            zmm0 = temp0_2265 & not.o(zmm1)
                            zmm11 = zmm7
                            zmm1 = zmm7 & temp0_2265
                            zmm7 = arg7
                            
                            if ((temp0_2250 & 2) != 0)
                                arg5 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg11, 0x4e)[0].q, arg5, 0), 
                                    arg5, 0xe2)
                                arg7 = var_528_5
                                zmm1 |= zmm0
                                
                                if ((temp0_2250 & 4) != 0)
                                label_14027950a:
                                    arg5 = _mm_shuffle_ps(arg5, 
                                        _mm_shuffle_ps(*zmm1.q, arg5, 0x30), 0x84)
                                    
                                    if ((temp0_2250 & 8) == 0)
                                        goto label_14027943f
                                    
                                    goto label_14027952a
                            else
                                arg7 = var_528_5
                                zmm1 |= zmm0
                                
                                if ((temp0_2250 & 4) != 0)
                                    goto label_14027950a
                            
                            if ((temp0_2250 & 8) == 0)
                            label_14027943f:
                                zmm2 = zx.o(0)
                                
                                if ((temp0_2255 & 1) == 0)
                                    goto label_14027953b
                                
                                goto label_14027944c
                            
                        label_14027952a:
                            arg5 = _mm_shuffle_ps(arg5, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e).q, arg5, 0x20), 0x24)
                            zmm2 = zx.o(0)
                            
                            if ((temp0_2255 & 1) != 0)
                            label_14027944c:
                                zmm2[0] = arg5[0]
                                zmm6 = _mm_slli_epi32(temp0_2265, 0x1f)
                                zmm3 = _mm_slli_epi32(temp0_2259, 0x1f)
                                
                                if ((temp0_2255 & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm2, 1), zmm2, 0xe2)
                            else
                            label_14027953b:
                                zmm6 = _mm_slli_epi32(temp0_2265, 0x1f)
                                zmm3 = _mm_slli_epi32(temp0_2259, 0x1f)
                                
                                if ((temp0_2255 & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm2, 1), zmm2, 0xe2)
                            
                            zmm6 = _mm_srai_epi32(zmm6, 0x1f)
                            zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                            zmm1 = _mm_add_epi64(zmm1, zmm7)
                            arg11 = _mm_add_epi64(arg11, zmm7)
                            
                            if ((temp0_2255 & 4) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg5, zmm2, 0x32), 0x84)
                            
                            if ((temp0_2255 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg5, zmm2, 0x23), 0x24)
                            
                            arg5 = var_538_4
                            zmm7 = var_5e8_2
                            arg11 = (arg9 & zmm3) | (zmm3 & not.o(arg11))
                            zmm11 = (zmm11 & zmm6) | (zmm6 & not.o(zmm1))
                        
                        zmm0 = data_142fc95e0
                        zmm1 = _mm_cmpeq_epi32(var_5c8_5 & zmm0, zmm0) & zmm4
                        zmm6 = _mm_srai_epi32(_mm_slli_epi32(arg5 & zmm1, 0x1f), 0x1f)
                        char temp0_2296 = _mm_movemask_ps(zmm6)
                        
                        if (temp0_2296 == 0)
                            zmm3 = zx.o(0)
                            zmm6 = zx.o(0)
                            arg10 = var_558_9
                            zmm11 = var_4f8_3
                        else
                            if ((temp0_2296 & 1) == 0)
                                if ((temp0_2296 & 2) != 0)
                                    goto label_14027978d
                                
                                goto label_140279603
                            
                            zmm4 = *arg11[0].q
                            
                            if ((temp0_2296 & 2) != 0)
                            label_14027978d:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg11, 0x4e).q, zmm4, 0), 
                                    zmm4, 0xe2)
                                zmm4 = zmm0
                                
                                if ((temp0_2296 & 4) == 0)
                                    goto label_14027960c
                                
                                goto label_1402797a6
                            
                        label_140279603:
                            
                            if ((temp0_2296 & 4) != 0)
                            label_1402797a6:
                                zmm0 = _mm_shuffle_ps(*zmm11[0].q, zmm4, 0x30)
                                zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x84)
                                
                                if ((temp0_2296 & 8) != 0)
                                    zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm4, 
                                        0x20)
                                    zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                            else
                            label_14027960c:
                                
                                if ((temp0_2296 & 8) != 0)
                                    zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm4, 
                                        0x20)
                                    zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                            
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            char temp0_2301 = _mm_movemask_ps(zmm1)
                            zmm3 = zx.o(0)
                            
                            if ((temp0_2301 & 1) != 0)
                                zmm3[0] = zmm4[0]
                            
                            zmm7 = data_1434426c0
                            zmm6 ^= zmm0
                            
                            if ((temp0_2301 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm3, 1), zmm3, 0xe2)
                            
                            zmm0 = _mm_add_epi64(arg11, zmm7)
                            zmm1 = _mm_shuffle_epi32(zmm6, 0x50)
                            
                            if ((temp0_2301 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x32), 0x84)
                            
                            arg11 &= zmm1
                            zmm1 &= not.o(zmm0)
                            
                            if ((temp0_2301 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x23), 0x24)
                            
                            zmm7 = _mm_add_epi64(zmm7, zmm11)
                            zmm0 = _mm_shuffle_epi32(zmm6, 0xfa)
                            arg11 |= zmm1
                            
                            if ((temp0_2296 & 1) != 0)
                                zmm1 = *arg11[0].q
                            
                            zmm11 &= zmm0
                            zmm0 &= not.o(zmm7)
                            
                            if ((temp0_2296 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg11, 0x4e)[0].q, zmm1, 0), 
                                    zmm1, 0xe2)
                            
                            zmm4 = zmm11
                            arg7 = var_528_5
                            arg10 = var_558_9
                            zmm11 = var_4f8_3
                            zmm7 = var_5e8_2
                            zmm4 |= zmm0
                            
                            if ((temp0_2296 & 4) == 0)
                                if ((temp0_2296 & 8) != 0)
                                    goto label_1402797e8
                                
                                goto label_14027970e
                            
                            zmm1 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*zmm4[0].q, zmm1, 0x30), 0x84)
                            
                            if ((temp0_2296 & 8) != 0)
                            label_1402797e8:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                zmm6 = zx.o(0)
                                
                                if ((temp0_2301 & 1) != 0)
                                    goto label_14027971b
                                
                                goto label_1402797f9
                            
                        label_14027970e:
                            zmm6 = zx.o(0)
                            
                            if ((temp0_2301 & 1) != 0)
                            label_14027971b:
                                zmm6.d = zmm1.d
                                
                                if ((temp0_2301 & 2) != 0)
                                    goto label_14027980d
                                
                                goto label_140279728
                            
                        label_1402797f9:
                            
                            if ((temp0_2301 & 2) != 0)
                            label_14027980d:
                                zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm6, 1), zmm6, 0xe2)
                                
                                if ((temp0_2301 & 4) != 0)
                                    goto label_140279738
                                
                                goto label_140279819
                            
                        label_140279728:
                            
                            if ((temp0_2301 & 4) == 0)
                            label_140279819:
                                
                                if ((temp0_2301 & 8) != 0)
                                    zmm6 =
                                        _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm1, zmm6, 0x23), 0x24)
                            else
                            label_140279738:
                                zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm1, zmm6, 0x32), 0x84)
                                
                                if ((temp0_2301 & 8) != 0)
                                    zmm6 =
                                        _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm1, zmm6, 0x23), 0x24)
                        
                        zmm0 = __paddq_xmmdq_memdq(var_4e8_2, var_598_6)
                        zmm1 = __paddq_xmmdq_memdq(var_408_2, var_588_4)
                        arg5 = data_1434426c0
                        zmm1 = __paddq_xmmdq_memdq(zmm1, var_488_2)
                        zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm0, var_508_6), arg5)
                        zmm1 = _mm_add_epi64(zmm1, arg5)
                        arg5 = _mm_shuffle_epi32(zmm12, 0x50) & zmm1
                        zmm1 = _mm_shuffle_epi32(zmm12, 0xfa) & zmm0
                        int64_t rax_485 = arg5[0].q
                        int64_t rcx_73 = _mm_shuffle_epi32(arg5, 0x4e).q
                        int64_t rdi_38 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg12 + rax_485)), zx.q(*(arg12 + rcx_73))), 
                            _mm_unpacklo_epi32(zx.o(*(arg12 + zmm1.q)), 
                                zx.o(*(arg12 + rdi_38))[0].q).q)
                        zmm1 = _mm_srli_epi32(zmm0, 0x15)
                        zmm4 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        float temp0_2350[0x4] = _mm_add_ps(arg8, 
                            _mm_mul_ps(zmm7, 
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0)))
                        zmm0 = data_143442440
                        zmm4 = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm0))
                        arg5 = data_143442690
                        float temp0_2354[0x4] = _mm_mul_ps(zmm2, _mm_div_ps(zmm4, arg5))
                        zmm0 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm0)), arg5)
                        char temp52_1 = temp0_2195 & 1
                        
                        if (temp52_1 != 0)
                            zmm1.d = temp0_2350[0]
                            var_5d8_3 = zmm1
                        
                        arg9 = var_568_4
                        zmm6 = _mm_mul_ps(zmm6, zmm0)
                        arg6 = _mm_add_ps(arg6, temp0_2354)
                        zmm4 = var_548_4
                        
                        if (temp52_1 != 0)
                            arg9[0] = arg6[0]
                            zmm2 = var_578_3
                            arg5 = var_538_4
                            zmm3 = _mm_add_ps(zmm3, zmm6)
                            
                            if (temp52_1 != 0)
                                goto label_140279d3d
                            
                            goto label_140279970
                        
                        zmm2 = var_578_3
                        arg5 = var_538_4
                        zmm3 = _mm_add_ps(zmm3, zmm6)
                        bool cond:256_1
                        bool cond:257_1
                        bool cond:281_1
                        bool cond:282_1
                        
                        if (temp52_1 != 0)
                        label_140279d3d:
                            zmm11[0] = zmm3[0]
                            arg11 = var_5d8_3
                            char temp75_1 = temp0_2195 & 2
                            cond:256_1 = temp75_1 == 0
                            cond:257_1 = temp75_1 != 0
                            cond:281_1 = temp75_1 == 0
                            cond:282_1 = temp75_1 != 0
                            
                            if (temp75_1 != 0)
                                goto label_14027998d
                            
                            goto label_140279d51
                        
                    label_140279970:
                        arg11 = var_5d8_3
                        char temp74_1 = temp0_2195 & 2
                        cond:256_1 = temp74_1 == 0
                        cond:257_1 = temp74_1 != 0
                        cond:281_1 = temp74_1 == 0
                        cond:282_1 = temp74_1 != 0
                        
                        if (temp74_1 == 0)
                        label_140279d51:
                            
                            if (not(cond:256_1))
                            label_140279d65:
                                arg9 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, arg9, 1), arg9, 0xe2)
                                
                                if (cond:282_1)
                                    goto label_1402799aa
                                
                                goto label_140279d6f
                        else
                        label_14027998d:
                            arg11 =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_2350, arg11, 1), arg11, 0xe2)
                            
                            if (cond:257_1)
                                goto label_140279d65
                        
                        bool cond:314_1
                        bool cond:315_1
                        bool cond:333_1
                        bool cond:334_1
                        
                        if (not(cond:281_1))
                        label_1402799aa:
                            zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm11, 1), zmm11, 0xe2)
                            char temp102_1 = temp0_2195 & 4
                            cond:314_1 = temp102_1 == 0
                            cond:315_1 = temp102_1 != 0
                            cond:333_1 = temp102_1 == 0
                            cond:334_1 = temp102_1 != 0
                            
                            if (temp102_1 != 0)
                                goto label_140279d81
                            
                            goto label_1402799b7
                        
                    label_140279d6f:
                        char temp101_1 = temp0_2195 & 4
                        cond:314_1 = temp101_1 == 0
                        cond:315_1 = temp101_1 != 0
                        cond:333_1 = temp101_1 == 0
                        cond:334_1 = temp101_1 != 0
                        
                        if (temp101_1 == 0)
                        label_1402799b7:
                            
                            if (not(cond:314_1))
                            label_1402799c6:
                                arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(arg6, arg9, 0x32), 0x84)
                                
                                if (cond:334_1)
                                    goto label_140279d9a
                                
                                goto label_1402799d1
                        else
                        label_140279d81:
                            arg11 =
                                _mm_shuffle_ps(arg11, _mm_shuffle_ps(temp0_2350, arg11, 0x32), 0x84)
                            
                            if (cond:315_1)
                                goto label_1402799c6
                        
                        bool cond:345_1
                        bool cond:346_1
                        bool cond:361_1
                        bool cond:362_1
                        
                        if (not(cond:333_1))
                        label_140279d9a:
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm3, zmm11, 0x32), 0x84)
                            char temp124_1 = temp0_2195 & 8
                            cond:345_1 = temp124_1 == 0
                            cond:346_1 = temp124_1 != 0
                            cond:361_1 = temp124_1 == 0
                            cond:362_1 = temp124_1 != 0
                            
                            if (temp124_1 != 0)
                                goto label_1402799df
                            
                            goto label_140279da8
                        
                    label_1402799d1:
                        char temp123_1 = temp0_2195 & 8
                        cond:345_1 = temp123_1 == 0
                        cond:346_1 = temp123_1 != 0
                        cond:361_1 = temp123_1 == 0
                        cond:362_1 = temp123_1 != 0
                        
                        if (temp123_1 != 0)
                        label_1402799df:
                            arg11 =
                                _mm_shuffle_ps(arg11, _mm_shuffle_ps(temp0_2350, arg11, 0x23), 0x24)
                            arg8 = var_5c8_5
                            
                            if (cond:346_1)
                                goto label_140279dba
                            
                            goto label_1402799f1
                        
                    label_140279da8:
                        arg8 = var_5c8_5
                        
                        if (cond:345_1)
                        label_1402799f1:
                            
                            if (not(cond:361_1))
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm3, zmm11, 0x23), 0x24)
                        else
                        label_140279dba:
                            arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(arg6, arg9, 0x23), 0x24)
                            
                            if (cond:362_1)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm3, zmm11, 0x23), 0x24)
                    
                    zmm4 ^= var_418_4
                    zmm0 = _mm_slli_epi32(arg5 & zmm4, 0x1f)
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        zmm6 = var_5b8
                    else
                        zmm12 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_458_2)
                        arg6 = arg5 & zmm12
                        zmm1 = _mm_slli_epi32(arg6, 0x1f)
                        char temp0_2375 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_2375 == 0)
                            zmm6 = var_5b8
                        else
                            int32_t var_548_5[0x4] = zmm4
                            int32_t temp0_2377[0x4] =
                                _mm_srai_epi32(_mm_slli_epi32(arg8, 0x1f), 0x1f)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f) & temp0_2377
                            char rcx_76
                            
                            if (_mm_movemask_ps(zmm1) == 0)
                                zmm4 = temp0_2377 & zmm0
                                rcx_76 = temp0_2375
                                
                                if ((rcx_76 & 1) != 0)
                                    arg11[0] = zmm4[0]
                            else
                                zmm0 = data_1434426b0
                                zmm7 = var_4c8_2
                                zmm2 = _mm_add_epi64(zmm7, zmm0)
                                zmm3 = var_5a8_8
                                zmm0 = _mm_add_epi64(zmm0, zmm3)
                                arg5 = _mm_cmpeq_epi32(arg5, arg5) ^ zmm1
                                uint128_t temp0_2383 = _mm_shuffle_epi32(arg5, 0x50)
                                var_5a8_8 = (zmm3 & temp0_2383) | (temp0_2383 & not.o(zmm0))
                                zmm0 = _mm_shuffle_epi32(arg5, 0xfa)
                                zmm7 &= zmm0
                                zmm0 &= not.o(zmm2)
                                zmm6 = __paddq_xmmdq_memdq(var_4e8_2, var_598_6)
                                arg5 = __paddq_xmmdq_memdq(var_408_2, var_588_4)
                                zmm2 = data_1434426c0
                                arg5 = __paddq_xmmdq_memdq(arg5, var_488_2)
                                zmm6 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm6, var_508_6), zmm2)
                                arg5 = _mm_add_epi64(arg5, zmm2)
                                zmm2 = _mm_shuffle_epi32(zmm1, 0x50) & arg5
                                zmm1 = _mm_shuffle_epi32(zmm1, 0xfa) & zmm6
                                int64_t rax_488 = zmm2[0].q
                                int64_t rbp_48 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                                int64_t rdi_39 = _mm_shuffle_epi32(zmm1, 0x4e).q
                                var_4c8_2 = zmm7 | zmm0
                                zmm1 = __paddd_xmmdq_memdq(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(
                                                __pinsrw_xmmdq_memw_immb(zx.o(0), 
                                                    *(arg12 + rax_488), 0), 
                                                *(arg12 + rbp_48), 2), 
                                            *(arg12 + zmm1.q), 4), 
                                        *(arg12 + rdi_39), 6), 
                                    data_143442b40)
                                zmm0 = _mm_cvtepi32_ps(zmm1)
                                zmm4 = temp0_2377 & zmm0
                                rcx_76 = temp0_2375
                                
                                if ((rcx_76 & 1) != 0)
                                    arg11[0] = zmm4[0]
                            
                            zmm2 = var_578_3
                            
                            if ((rcx_76 & 2) != 0)
                                zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg11, 1), arg11, 0xe2)
                                arg11 = zmm0
                                
                                if ((rcx_76 & 4) != 0)
                                    goto label_140279dd6
                                
                                goto label_140279bb9
                            
                            if ((rcx_76 & 4) == 0)
                            label_140279bb9:
                                
                                if ((rcx_76 & 8) != 0)
                                    arg11 = _mm_shuffle_ps(arg11, 
                                        _mm_shuffle_ps(zmm4, arg11, 0x23), 0x24)
                            else
                            label_140279dd6:
                                zmm0 = _mm_shuffle_ps(zmm4, arg11, 0x32)
                                arg11 = _mm_shuffle_ps(arg11, zmm0, 0x84)
                                
                                if ((rcx_76 & 8) != 0)
                                    arg11 = _mm_shuffle_ps(arg11, 
                                        _mm_shuffle_ps(zmm4, arg11, 0x23), 0x24)
                            
                            arg5 = data_1434422d0
                            zmm4 = arg8 & arg5
                            arg5 = _mm_srai_epi32(
                                _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm4) & arg6, 0x1f), 0x1f)
                            char temp0_2408 = _mm_movemask_ps(arg5)
                            
                            if (temp0_2408 != 0)
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm3 = var_5a8_8
                                
                                if ((temp0_2408 & 1) != 0)
                                    zmm1 = zx.o(*zmm3[0].q)
                                
                                zmm6 = data_1434426b0
                                arg5 ^= zmm0
                                
                                if ((temp0_2408 & 2) != 0)
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                            zmm1, 0), 
                                        zmm1, 0xe2)
                                
                                arg8 = var_4c8_2
                                zmm2 = _mm_add_epi64(arg8, zmm6)
                                zmm6 = _mm_add_epi64(zmm6, zmm3)
                                zmm7 = _mm_shuffle_epi32(arg5, 0x50)
                                arg5 = _mm_shuffle_epi32(arg5, 0xfa)
                                
                                if ((temp0_2408 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*arg8[0].q), zmm1, 0x30), 0x84)
                                
                                zmm0 = arg8 & arg5
                                arg5 &= not.o(zmm2)
                                
                                if ((temp0_2408 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg8, 0x4e)[0].q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                zmm2 = var_578_3
                                var_5a8_8 = (zmm3 & zmm7) | (zmm7 & not.o(zmm6))
                                zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_143442cd0), data_143442b40))
                                var_4c8_2 = zmm0 | arg5
                                arg8 = var_5c8_5
                                arg7 = var_528_5
                                arg10 = var_558_9
                            
                            arg9 = arg9
                            zmm4 = _mm_cmpeq_epi32(zmm4, zx.o(0)) & not.o(zmm1)
                            
                            if ((rcx_76 & 1) != 0)
                                arg9[0] = zmm4[0]
                                arg5 = var_538_4
                                
                                if ((rcx_76 & 2) != 0)
                                    goto label_140279e6e
                                
                                goto label_140279e3a
                            
                            arg5 = var_538_4
                            
                            if ((rcx_76 & 2) != 0)
                            label_140279e6e:
                                arg9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg9, 1), arg9, 0xe2)
                                
                                if ((rcx_76 & 4) != 0)
                                    goto label_140279e47
                                
                                goto label_140279e77
                            
                        label_140279e3a:
                            
                            if ((rcx_76 & 4) == 0)
                            label_140279e77:
                                
                                if ((rcx_76 & 8) != 0)
                                    arg9 =
                                        _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm4, arg9, 0x23), 0x24)
                            else
                            label_140279e47:
                                arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm4, arg9, 0x32), 0x84)
                                
                                if ((rcx_76 & 8) != 0)
                                    arg9 =
                                        _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm4, arg9, 0x23), 0x24)
                            
                            zmm4 = var_548_5
                            zmm0 = data_142fc95e0
                            arg8 &= zmm0
                            zmm0 = _mm_cmpeq_epi32(zmm0, arg8)
                            char temp0_2445 = _mm_movemask_ps(_mm_slli_epi32(arg6 & zmm0, 0x1f))
                            
                            if (temp0_2445 == 0)
                                zmm6 = var_5b8
                            else
                                if ((temp0_2445 & 1) == 0)
                                    if ((temp0_2445 & 2) != 0)
                                        goto label_14027a5a7
                                    
                                    goto label_140279ecb
                                
                                zmm1 = zx.o(*var_5a8_8.q)
                                
                                if ((temp0_2445 & 2) != 0)
                                label_14027a5a7:
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            zx.o(*__pshufd_xmmdq_memdq_immb(var_5a8_8, 0x4e).q), 
                                            zmm1, 0), 
                                        zmm1, 0xe2)
                                    
                                    if ((temp0_2445 & 4) == 0)
                                        goto label_140279ed5
                                    
                                    goto label_14027a5cd
                                
                            label_140279ecb:
                                
                                if ((temp0_2445 & 4) != 0)
                                label_14027a5cd:
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*var_4c8_2.q), zmm1, 0x30), 0x84)
                                    
                                    if ((temp0_2445 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(
                                                zx.o(
                                                    *__pshufd_xmmdq_memdq_immb(var_4c8_2, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                else
                                label_140279ed5:
                                    
                                    if ((temp0_2445 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(
                                                zx.o(
                                                    *__pshufd_xmmdq_memdq_immb(var_4c8_2, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                
                                zmm6 = var_5b8
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_143442cd0), data_143442b40))
                            
                            arg8 = _mm_cmpeq_epi32(arg8, zx.o(0)) & not.o(zmm0)
                            
                            if ((rcx_76 & 1) != 0)
                                zmm11[0] = arg8[0]
                                
                                if ((rcx_76 & 2) != 0)
                                    goto label_140279f61
                                
                                goto label_140279f34
                            
                            if ((rcx_76 & 2) != 0)
                            label_140279f61:
                                zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm11, 1), zmm11, 0xe2)
                                
                                if ((rcx_76 & 4) != 0)
                                    goto label_140279f42
                                
                                goto label_140279f6a
                            
                        label_140279f34:
                            
                            if ((rcx_76 & 4) == 0)
                            label_140279f6a:
                                
                                if ((rcx_76 & 8) != 0)
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(arg8, zmm11, 0x23), 0x24)
                            else
                            label_140279f42:
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(arg8, zmm11, 0x32), 0x84)
                                
                                if ((rcx_76 & 8) != 0)
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(arg8, zmm11, 0x23), 0x24)
                        
                        zmm4 = (zmm4 ^ zmm12) & arg5
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(zmm4, 0x1f)) != 0)
                            zmm0 = __pcmpeqd_xmmdq_memdq(var_458_2, data_143442ad0)
                            char temp0_2463 = _mm_movemask_ps(_mm_slli_epi32(arg5 & zmm0, 0x1f))
                            
                            if (temp0_2463 != 0)
                                char temp51_1 = temp0_2463 & 1
                                
                                if (temp51_1 != 0)
                                    arg11[0] = 0
                                    
                                    if (temp51_1 != 0)
                                        goto label_14027a033
                                else if (temp51_1 != 0)
                                label_14027a033:
                                    arg9[0] = 0
                                    
                                    if (temp51_1 != 0)
                                        goto label_140279fd3
                                    
                                    goto label_14027a03a
                                
                                bool cond:254_1
                                bool cond:255_1
                                bool cond:279_1
                                bool cond:280_1
                                
                                if (temp51_1 != 0)
                                label_140279fd3:
                                    zmm11[0] = 0
                                    char temp73_1 = temp0_2463 & 2
                                    cond:254_1 = temp73_1 == 0
                                    cond:255_1 = temp73_1 != 0
                                    cond:279_1 = temp73_1 == 0
                                    cond:280_1 = temp73_1 != 0
                                    
                                    if (temp73_1 != 0)
                                        goto label_14027a04d
                                    
                                    goto label_140279fdd
                                
                            label_14027a03a:
                                char temp72_1 = temp0_2463 & 2
                                cond:254_1 = temp72_1 == 0
                                cond:255_1 = temp72_1 != 0
                                cond:279_1 = temp72_1 == 0
                                cond:280_1 = temp72_1 != 0
                                
                                if (temp72_1 == 0)
                                label_140279fdd:
                                    
                                    if (not(cond:254_1))
                                    label_140279fed:
                                        arg9 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg9, 0), 
                                            arg9, 0xe2)
                                        
                                        if (cond:280_1)
                                            goto label_14027a063
                                        
                                        goto label_140279ff3
                                else
                                label_14027a04d:
                                    arg11 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg11, 0), 
                                        arg11, 0xe2)
                                    
                                    if (cond:255_1)
                                        goto label_140279fed
                                
                                bool cond:312_1
                                bool cond:313_1
                                bool cond:331_1
                                bool cond:332_1
                                
                                if (not(cond:279_1))
                                label_14027a063:
                                    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm11, 0), 
                                        zmm11, 0xe2)
                                    char temp100_1 = temp0_2463 & 4
                                    cond:312_1 = temp100_1 == 0
                                    cond:313_1 = temp100_1 != 0
                                    cond:331_1 = temp100_1 == 0
                                    cond:332_1 = temp100_1 != 0
                                    
                                    if (temp100_1 != 0)
                                        goto label_14027a001
                                    
                                    goto label_14027a06c
                                
                            label_140279ff3:
                                char temp99_1 = temp0_2463 & 4
                                cond:312_1 = temp99_1 == 0
                                cond:313_1 = temp99_1 != 0
                                cond:331_1 = temp99_1 == 0
                                cond:332_1 = temp99_1 != 0
                                
                                if (temp99_1 == 0)
                                label_14027a06c:
                                    
                                    if (not(cond:312_1))
                                    label_14027a077:
                                        arg9 = _mm_shuffle_ps(arg9, 
                                            _mm_shuffle_ps(zx.o(0), arg9, 0x30), 0x84)
                                        
                                        if (cond:332_1)
                                            goto label_14027a013
                                        
                                        goto label_14027a07e
                                else
                                label_14027a001:
                                    arg11 = _mm_shuffle_ps(arg11, 
                                        _mm_shuffle_ps(zx.o(0), arg11, 0x30), 0x84)
                                    
                                    if (cond:313_1)
                                        goto label_14027a077
                                
                                bool cond:343_1
                                bool cond:344_1
                                bool cond:359_1
                                bool cond:360_1
                                
                                if (not(cond:331_1))
                                label_14027a013:
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zx.o(0), zmm11, 0x30), 0x84)
                                    char temp122_1 = temp0_2463 & 8
                                    cond:343_1 = temp122_1 == 0
                                    cond:344_1 = temp122_1 != 0
                                    cond:359_1 = temp122_1 == 0
                                    cond:360_1 = temp122_1 != 0
                                    
                                    if (temp122_1 != 0)
                                        goto label_14027a08c
                                    
                                    goto label_14027a01d
                                
                            label_14027a07e:
                                char temp121_1 = temp0_2463 & 8
                                cond:343_1 = temp121_1 == 0
                                cond:344_1 = temp121_1 != 0
                                cond:359_1 = temp121_1 == 0
                                cond:360_1 = temp121_1 != 0
                                
                                if (temp121_1 != 0)
                                label_14027a08c:
                                    arg11 = _mm_shuffle_ps(arg11, 
                                        _mm_shuffle_ps(zx.o(0), arg11, 0x20), 0x24)
                                    
                                    if (cond:344_1)
                                        goto label_14027a028
                                    
                                    goto label_14027a093
                                
                            label_14027a01d:
                                
                                if (cond:343_1)
                                label_14027a093:
                                    
                                    if (not(cond:359_1))
                                        zmm11 = _mm_shuffle_ps(zmm11, 
                                            _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                                else
                                label_14027a028:
                                    arg9 = _mm_shuffle_ps(arg9, 
                                        _mm_shuffle_ps(zx.o(0), arg9, 0x20), 0x24)
                                    
                                    if (cond:360_1)
                                        zmm11 = _mm_shuffle_ps(zmm11, 
                                            _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                            
                            char temp0_2483 =
                                _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm4), 0x1f))
                            
                            if (temp0_2483 != 0)
                                char temp61_1 = temp0_2483 & 1
                                
                                if (temp61_1 != 0)
                                    arg11[0] = 0
                                    
                                    if (temp61_1 != 0)
                                        goto label_14027a127
                                else if (temp61_1 != 0)
                                label_14027a127:
                                    arg9[0] = 0
                                    
                                    if (temp61_1 != 0)
                                        goto label_14027a0c7
                                    
                                    goto label_14027a12e
                                
                                bool cond:277_1
                                bool cond:278_1
                                bool cond:295_1
                                bool cond:296_1
                                
                                if (temp61_1 != 0)
                                label_14027a0c7:
                                    zmm11[0] = 0
                                    char temp87_1 = temp0_2483 & 2
                                    cond:277_1 = temp87_1 == 0
                                    cond:278_1 = temp87_1 != 0
                                    cond:295_1 = temp87_1 == 0
                                    cond:296_1 = temp87_1 != 0
                                    
                                    if (temp87_1 != 0)
                                        goto label_14027a141
                                    
                                    goto label_14027a0d1
                                
                            label_14027a12e:
                                char temp86_1 = temp0_2483 & 2
                                cond:277_1 = temp86_1 == 0
                                cond:278_1 = temp86_1 != 0
                                cond:295_1 = temp86_1 == 0
                                cond:296_1 = temp86_1 != 0
                                
                                if (temp86_1 == 0)
                                label_14027a0d1:
                                    
                                    if (not(cond:277_1))
                                    label_14027a0e1:
                                        arg9 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg9, 0), 
                                            arg9, 0xe2)
                                        
                                        if (cond:296_1)
                                            goto label_14027a157
                                        
                                        goto label_14027a0e7
                                else
                                label_14027a141:
                                    arg11 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg11, 0), 
                                        arg11, 0xe2)
                                    
                                    if (cond:278_1)
                                        goto label_14027a0e1
                                
                                bool cond:329_1
                                bool cond:330_1
                                bool cond:339_1
                                bool cond:340_1
                                
                                if (not(cond:295_1))
                                label_14027a157:
                                    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm11, 0), 
                                        zmm11, 0xe2)
                                    char temp112_1 = temp0_2483 & 4
                                    cond:329_1 = temp112_1 == 0
                                    cond:330_1 = temp112_1 != 0
                                    cond:339_1 = temp112_1 == 0
                                    cond:340_1 = temp112_1 != 0
                                    
                                    if (temp112_1 != 0)
                                        goto label_14027a0f5
                                    
                                    goto label_14027a160
                                
                            label_14027a0e7:
                                char temp111_1 = temp0_2483 & 4
                                cond:329_1 = temp111_1 == 0
                                cond:330_1 = temp111_1 != 0
                                cond:339_1 = temp111_1 == 0
                                cond:340_1 = temp111_1 != 0
                                
                                if (temp111_1 == 0)
                                label_14027a160:
                                    
                                    if (not(cond:329_1))
                                    label_14027a16b:
                                        arg9 = _mm_shuffle_ps(arg9, 
                                            _mm_shuffle_ps(zx.o(0), arg9, 0x30), 0x84)
                                        
                                        if (cond:340_1)
                                            goto label_14027a107
                                        
                                        goto label_14027a172
                                else
                                label_14027a0f5:
                                    arg11 = _mm_shuffle_ps(arg11, 
                                        _mm_shuffle_ps(zx.o(0), arg11, 0x30), 0x84)
                                    
                                    if (cond:330_1)
                                        goto label_14027a16b
                                
                                bool cond:357_1
                                bool cond:358_1
                                bool cond:367_1
                                bool cond:368_1
                                
                                if (not(cond:339_1))
                                label_14027a107:
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zx.o(0), zmm11, 0x30), 0x84)
                                    char temp130_1 = temp0_2483 & 8
                                    cond:357_1 = temp130_1 == 0
                                    cond:358_1 = temp130_1 != 0
                                    cond:367_1 = temp130_1 == 0
                                    cond:368_1 = temp130_1 != 0
                                    
                                    if (temp130_1 != 0)
                                        goto label_14027a180
                                    
                                    goto label_14027a111
                                
                            label_14027a172:
                                char temp129_1 = temp0_2483 & 8
                                cond:357_1 = temp129_1 == 0
                                cond:358_1 = temp129_1 != 0
                                cond:367_1 = temp129_1 == 0
                                cond:368_1 = temp129_1 != 0
                                
                                if (temp129_1 != 0)
                                label_14027a180:
                                    arg11 = _mm_shuffle_ps(arg11, 
                                        _mm_shuffle_ps(zx.o(0), arg11, 0x20), 0x24)
                                    
                                    if (cond:358_1)
                                        goto label_14027a11c
                                    
                                    goto label_14027a187
                                
                            label_14027a111:
                                
                                if (cond:357_1)
                                label_14027a187:
                                    
                                    if (not(cond:367_1))
                                        zmm11 = _mm_shuffle_ps(zmm11, 
                                            _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                                else
                                label_14027a11c:
                                    arg9 = _mm_shuffle_ps(arg9, 
                                        _mm_shuffle_ps(zx.o(0), arg9, 0x20), 0x24)
                                    
                                    if (cond:368_1)
                                        zmm11 = _mm_shuffle_ps(zmm11, 
                                            _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                            
                            zmm2 = var_578_3
                
                float temp0_2502[0x4] = _mm_sub_ps(arg11, zmm6)
                float temp0_2503[0x4] = _mm_sub_ps(arg9, arg7)
                float temp0_2504[0x4] = _mm_mul_ps(temp0_2502, zmm2)
                zmm3 = zmm6
                char temp26_1 = temp0_2067 & 1
                
                if (temp26_1 != 0)
                    zmm3 = zmm6
                    zmm3[0] = zmm3[0] f+ temp0_2504[0]
                    zmm11 = _mm_sub_ps(zmm11, arg10)
                    arg9 = _mm_mul_ps(temp0_2503, zmm2)
                    zmm4 = arg7
                    
                    if (temp26_1 != 0)
                        goto label_14027a299
                    
                    goto label_14027a1cd
                
                zmm11 = _mm_sub_ps(zmm11, arg10)
                arg9 = _mm_mul_ps(temp0_2503, zmm2)
                zmm4 = arg7
                
                if (temp26_1 != 0)
                label_14027a299:
                    zmm4 = arg7
                    zmm4[0] = zmm4[0] f+ arg9[0]
                    zmm11 = _mm_mul_ps(zmm11, zmm2)
                    zmm2 = arg10
                    
                    if (temp26_1 != 0)
                        goto label_14027a1db
                    
                    goto label_14027a2b0
                
            label_14027a1cd:
                zmm11 = _mm_mul_ps(zmm11, zmm2)
                zmm2 = arg10
                bool cond:152_1
                bool cond:153_1
                bool cond:163_1
                bool cond:164_1
                
                if (temp26_1 != 0)
                label_14027a1db:
                    zmm2 = arg10
                    zmm2[0] = zmm2[0] + zmm11[0]
                    zmm6 = _mm_add_ps(zmm6, temp0_2504)
                    char temp39_1 = temp0_2067 & 2
                    cond:152_1 = temp39_1 == 0
                    cond:153_1 = temp39_1 != 0
                    cond:163_1 = temp39_1 == 0
                    cond:164_1 = temp39_1 != 0
                    
                    if (temp39_1 != 0)
                        goto label_14027a2c8
                    
                    goto label_14027a1f1
                
            label_14027a2b0:
                zmm6 = _mm_add_ps(zmm6, temp0_2504)
                char temp38_1 = temp0_2067 & 2
                cond:152_1 = temp38_1 == 0
                cond:153_1 = temp38_1 != 0
                cond:163_1 = temp38_1 == 0
                cond:164_1 = temp38_1 != 0
                
                if (temp38_1 != 0)
                label_14027a2c8:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm3, 1), zmm3, 0xe2)
                    arg7 = _mm_add_ps(arg7, arg9)
                    
                    if (cond:153_1)
                        goto label_14027a207
                    
                    goto label_14027a2d5
                
            label_14027a1f1:
                arg7 = _mm_add_ps(arg7, arg9)
                
                if (not(cond:152_1))
                label_14027a207:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm4, 1), zmm4, 0xe2)
                    arg10 = _mm_add_ps(arg10, zmm11)
                    
                    if (cond:164_1)
                        goto label_14027a2eb
                    
                    goto label_14027a214
                
            label_14027a2d5:
                arg10 = _mm_add_ps(arg10, zmm11)
                bool cond:203_1
                bool cond:204_1
                bool cond:224_1
                bool cond:225_1
                
                if (not(cond:163_1))
                label_14027a2eb:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg10, zmm2, 1), zmm2, 0xe2)
                    arg11 = var_468_3
                    zmm7 = var_478_3
                    char temp60_1 = temp0_2067 & 4
                    cond:203_1 = temp60_1 == 0
                    cond:204_1 = temp60_1 != 0
                    cond:224_1 = temp60_1 == 0
                    cond:225_1 = temp60_1 != 0
                    
                    if (temp60_1 != 0)
                        goto label_14027a237
                    
                    goto label_14027a30a
                
            label_14027a214:
                arg11 = var_468_3
                zmm7 = var_478_3
                char temp59_1 = temp0_2067 & 4
                cond:203_1 = temp59_1 == 0
                cond:204_1 = temp59_1 != 0
                cond:224_1 = temp59_1 == 0
                cond:225_1 = temp59_1 != 0
                
                if (temp59_1 == 0)
                label_14027a30a:
                    
                    if (not(cond:203_1))
                    label_14027a318:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x32), 0x84)
                        
                        if (cond:225_1)
                            goto label_14027a24f
                        
                        goto label_14027a322
                else
                label_14027a237:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm6, zmm3, 0x32), 0x84)
                    
                    if (cond:204_1)
                        goto label_14027a318
                
                bool cond:275_1
                bool cond:276_1
                bool cond:293_1
                bool cond:294_1
                
                if (not(cond:224_1))
                label_14027a24f:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg10, zmm2, 0x32), 0x84)
                    char temp85_1 = temp0_2067 & 8
                    cond:275_1 = temp85_1 == 0
                    cond:276_1 = temp85_1 != 0
                    cond:293_1 = temp85_1 == 0
                    cond:294_1 = temp85_1 != 0
                    
                    if (temp85_1 != 0)
                        goto label_14027a333
                    
                    goto label_14027a25c
                
            label_14027a322:
                char temp84_1 = temp0_2067 & 8
                cond:275_1 = temp84_1 == 0
                cond:276_1 = temp84_1 != 0
                cond:293_1 = temp84_1 == 0
                cond:294_1 = temp84_1 != 0
                
                if (temp84_1 != 0)
                label_14027a333:
                    arg5 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm6, zmm3, 0x23), 0x24)
                    zmm3 = var_498_3
                    
                    if (cond:276_1)
                        goto label_14027a278
                    
                    goto label_14027a345
                
            label_14027a25c:
                arg5 = zmm3
                zmm3 = var_498_3
                
                if (cond:275_1)
                label_14027a345:
                    arg7 = zmm4
                    
                    if (not(cond:293_1))
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg10, zmm2, 0x23), 0x24)
                else
                label_14027a278:
                    arg7 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x23), 0x24)
                    
                    if (cond:294_1)
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg10, zmm2, 0x23), 0x24)
                
                arg10 = zmm2
        
        zmm3 = __punpckldq_xmmdq_memdq(zmm3, var_4a8_3)
        zmm7 = __punpckldq_xmmdq_memdq(zmm7, var_3b8_1)
        char temp0_2537 = _mm_movemask_ps(var_518_1 & arg11)
        
        if (temp0_2537 != 0)
            char temp0_2538 = temp0_2537 & 1
            
            if (temp0_2538 != 0)
                arg5[0] = 0
                
                if (temp0_2538 != 0)
                    goto label_14027a3f1
            else if (temp0_2538 != 0)
            label_14027a3f1:
                arg7.d = 0
                
                if (temp0_2538 != 0)
                    goto label_14027a397
                
                goto label_14027a3f8
            
            bool cond:23_1
            bool cond:24_1
            bool cond:28_1
            bool cond:29_1
            
            if (temp0_2538 != 0)
            label_14027a397:
                arg10.d = 0
                char temp3_1 = temp0_2537 & 2
                cond:23_1 = temp3_1 == 0
                cond:24_1 = temp3_1 != 0
                cond:28_1 = temp3_1 == 0
                cond:29_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                    goto label_14027a408
                
                goto label_14027a3a1
            
        label_14027a3f8:
            char temp2_1 = temp0_2537 & 2
            cond:23_1 = temp2_1 == 0
            cond:24_1 = temp2_1 != 0
            cond:28_1 = temp2_1 == 0
            cond:29_1 = temp2_1 != 0
            
            if (temp2_1 == 0)
            label_14027a3a1:
                
                if (not(cond:23_1))
                label_14027a3b0:
                    arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg7, 0), arg7, 0xe2)
                    
                    if (cond:29_1)
                        goto label_14027a41c
                    
                    goto label_14027a3b6
            else
            label_14027a408:
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg5, 0), arg5, 0xe2)
                
                if (cond:24_1)
                    goto label_14027a3b0
            
            bool cond:47_1
            bool cond:48_1
            bool cond:54_1
            bool cond:55_1
            
            if (not(cond:28_1))
            label_14027a41c:
                arg10 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg10, 0), arg10, 0xe2)
                char temp9_1 = temp0_2537 & 4
                cond:47_1 = temp9_1 == 0
                cond:48_1 = temp9_1 != 0
                cond:54_1 = temp9_1 == 0
                cond:55_1 = temp9_1 != 0
                
                if (temp9_1 != 0)
                    goto label_14027a3c2
                
                goto label_14027a425
            
        label_14027a3b6:
            char temp8_1 = temp0_2537 & 4
            cond:47_1 = temp8_1 == 0
            cond:48_1 = temp8_1 != 0
            cond:54_1 = temp8_1 == 0
            cond:55_1 = temp8_1 != 0
            
            if (temp8_1 == 0)
            label_14027a425:
                
                if (not(cond:47_1))
                label_14027a42f:
                    arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x30), 0x84)
                    
                    if (cond:55_1)
                        goto label_14027a3d2
                    
                    goto label_14027a436
            else
            label_14027a3c2:
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(0), arg5, 0x30), 0x84)
                
                if (cond:48_1)
                    goto label_14027a42f
            
            bool cond:68_1
            bool cond:69_1
            bool cond:83_1
            bool cond:84_1
            
            if (not(cond:54_1))
            label_14027a3d2:
                arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zx.o(0), arg10, 0x30), 0x84)
                char temp17_1 = temp0_2537 & 8
                cond:68_1 = temp17_1 == 0
                cond:69_1 = temp17_1 != 0
                cond:83_1 = temp17_1 == 0
                cond:84_1 = temp17_1 != 0
                
                if (temp17_1 != 0)
                    goto label_14027a442
                
                goto label_14027a3dc
            
        label_14027a436:
            char temp16_1 = temp0_2537 & 8
            cond:68_1 = temp16_1 == 0
            cond:69_1 = temp16_1 != 0
            cond:83_1 = temp16_1 == 0
            cond:84_1 = temp16_1 != 0
            
            if (temp16_1 != 0)
            label_14027a442:
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(0), arg5, 0x20), 0x24)
                
                if (cond:69_1)
                    goto label_14027a3e6
                
                goto label_14027a448
            
        label_14027a3dc:
            
            if (cond:68_1)
            label_14027a448:
                
                if (not(cond:83_1))
                    arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zx.o(0), arg10, 0x20), 0x24)
            else
            label_14027a3e6:
                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x20), 0x24)
                
                if (cond:84_1)
                    arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zx.o(0), arg10, 0x20), 0x24)
        
        zmm7 = _mm_unpacklo_epi64(zmm7, zmm3[0].q)
        zmm0 = zx.o(arg10.q)
        arg10 = _mm_unpackhi_ps(arg10, zx.o(0))
        zmm1 = _mm_unpacklo_ps(arg5, arg7.q)
        float temp0_2560[0x4] = _mm_unpackhi_ps(arg5, arg7)
        float var_168[0x4] = _mm_shuffle_ps(zmm1, zmm0, 0x84)
        uint128_t var_158_1 = _mm_shuffle_ps(zmm1, zmm0, 0xde)
        uint128_t var_148_1 = temp0_2560.q | arg10.q << 0x40
        float var_138_1[0x4] = _mm_unpackhi_pd(temp0_2560, arg10.q)
        uint64_t i_4 = zx.q(_mm_movemask_ps(arg11))
        
        do
            uint64_t rcx_81
            uint64_t rflags_1
            
            if (i_4 == 0)
                rcx_81 = 0x40
            else
                rcx_81, rflags_1 = _bit_scan_forward(i_4)
            float var_178[0x4] = zmm7
            result = sx.q(var_178[zx.q(rcx_81.d) & 3]) * 0x30
            *(arg1 + result + 0x20) = (&var_168)[rcx_81]
            i_4 &= rol.q(-2, rcx_81.b)
        while (i_4 != 0)
else
    uint32_t temp0_2[0x4] = _mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0)
    uint128_t var_1b8_1 = _mm_shuffle_epi32(_mm_add_epi64(4, zx.o(arg12)), 0x44)
    uint128_t var_298_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t rax_1
    rax_1.b = 0f >= zmm2[0]
    uint128_t var_1c8_1 = _mm_shuffle_epi32(zx.o(neg.d(rax_1)), 0)
    zmm1.d = float.s(arg13 - 1)
    zmm1.d = zmm1.d f* zmm2[0]
    int32_t rcx_1 = int.d(zmm1.d)
    r15 = 0
    
    if (rcx_1 s< 0)
        rcx_1 = 0
    
    if (rcx_1 s> arg13 - 2)
        rcx_1 = arg13 - 2
    
    uint128_t var_458_1 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
    uint128_t var_1d8_1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    uint128_t var_188_1 = _mm_shuffle_epi32(temp0_2, 0xf5)
    arg6 = _mm_cmpeq_epi32(arg6, arg6)
    zmm11 = zx.o(0)
    
    do
        int64_t rax_95 = sx.q((r15 << 3).d)
        zmm1 = *(arg2 + rax_95)
        zmm2 = *(arg2 + rax_95 + 0x10)
        zmm0 = _mm_shuffle_ps(zmm1, zmm2, 0xdd)
        uint128_t var_408_1 = zmm1
        float var_358_1[0x4] = zmm2
        zmm1 = __pmuludq_xmmdq_memdq(_mm_shuffle_ps(zmm1, zmm2, 0xff), var_188_1)
        zmm2 = _mm_shuffle_epi32(zmm1, 0xe8)
        zmm0 = __pmuludq_xmmdq_memdq(zmm0, temp0_2)
        zmm3 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm0, 0xe8), zmm2[0].q)
        int64_t rax_97 = sx.q(zmm0.d)
        int64_t rcx_20 = sx.q(zmm1.d)
        int64_t rbp_6 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
        zmm0 = zx.o(*(arg3 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rbp_6)), zmm0.q)
        arg10 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + rax_97)), zx.q(*(arg3 + rcx_20))), zmm1.q)
        arg7 = _mm_cmpeq_epi32(arg10, arg6)
        arg5 = arg7 ^ arg6
        float var_5c8[0x4]
        float var_548[0x4]
        uint32_t rax_72
        
        if (_mm_movemask_ps(arg5) == 0)
            zmm6 = arg8
            arg8 = var_548
            zmm12 = var_5c8
            rax_72 = _mm_movemask_ps(arg5 ^ arg6)
            
            if (rax_72 != 0)
            label_140275783:
                char rcx_42 = rax_72.b
                char temp1_1 = rcx_42 & 1
                
                if (temp1_1 != 0)
                    zmm12[0] = 0
                    
                    if (temp1_1 != 0)
                        goto label_140275839
                else if (temp1_1 != 0)
                label_140275839:
                    arg9[0] = 0
                    
                    if (temp1_1 != 0)
                        goto label_1402757a5
                    
                    goto label_140275844
                
                bool cond:19_1
                bool cond:20_1
                bool cond:25_1
                bool cond:26_1
                
                if (temp1_1 != 0)
                label_1402757a5:
                    arg8[0] = 0
                    char temp5_1 = rcx_42 & 2
                    cond:19_1 = temp5_1 == 0
                    cond:20_1 = temp5_1 != 0
                    cond:25_1 = temp5_1 == 0
                    cond:26_1 = temp5_1 != 0
                    
                    if (temp5_1 != 0)
                        goto label_14027585a
                    
                    goto label_1402757b3
                
            label_140275844:
                char temp4_1 = rcx_42 & 2
                cond:19_1 = temp4_1 == 0
                cond:20_1 = temp4_1 != 0
                cond:25_1 = temp4_1 == 0
                cond:26_1 = temp4_1 != 0
                
                if (temp4_1 == 0)
                label_1402757b3:
                    
                    if (not(cond:19_1))
                    label_1402757c6:
                        arg9 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg9, 0), arg9, 0xe2)
                        
                        if (cond:26_1)
                            goto label_140275877
                        
                        goto label_1402757d0
                else
                label_14027585a:
                    zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm12, 0), zmm12, 0xe2)
                    
                    if (cond:20_1)
                        goto label_1402757c6
                
                bool cond:40_1
                bool cond:41_1
                bool cond:49_1
                bool cond:50_1
                
                if (not(cond:25_1))
                label_140275877:
                    arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                    char temp11_1 = rcx_42 & 4
                    cond:40_1 = temp11_1 == 0
                    cond:41_1 = temp11_1 != 0
                    cond:49_1 = temp11_1 == 0
                    cond:50_1 = temp11_1 != 0
                    
                    if (temp11_1 != 0)
                        goto label_1402757e1
                    
                    goto label_140275884
                
            label_1402757d0:
                char temp10_1 = rcx_42 & 4
                cond:40_1 = temp10_1 == 0
                cond:41_1 = temp10_1 != 0
                cond:49_1 = temp10_1 == 0
                cond:50_1 = temp10_1 != 0
                
                if (temp10_1 == 0)
                label_140275884:
                    
                    if (not(cond:40_1))
                    label_140275892:
                        arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zx.o(0), arg9, 0x30), 0x84)
                        
                        if (cond:50_1)
                            goto label_1402757fa
                        
                        goto label_14027589d
                else
                label_1402757e1:
                    zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x30), 0x84)
                    
                    if (cond:41_1)
                        goto label_140275892
                
                bool cond:64_1
                bool cond:77_1
                bool cond:78_1
                bool cond:65_1
                
                if (cond:49_1)
                label_14027589d:
                    char temp20_1 = rcx_42 & 8
                    cond:64_1 = temp20_1 == 0
                    cond:65_1 = temp20_1 != 0
                    cond:77_1 = temp20_1 == 0
                    cond:78_1 = temp20_1 != 0
                    
                    if (temp20_1 != 0)
                    label_1402758ae:
                        zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x20), 0x24)
                        
                        if (cond:65_1)
                            goto label_140275816
                        
                        goto label_1402758b9
                else
                label_1402757fa:
                    arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                    char temp21_1 = rcx_42 & 8
                    cond:64_1 = temp21_1 == 0
                    cond:65_1 = temp21_1 != 0
                    cond:77_1 = temp21_1 == 0
                    cond:78_1 = temp21_1 != 0
                    
                    if (temp21_1 != 0)
                        goto label_1402758ae
                
                if (cond:64_1)
                label_1402758b9:
                    var_5c8 = zmm12
                    
                    if (not(cond:77_1))
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                else
                label_140275816:
                    arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zx.o(0), arg9, 0x20), 0x24)
                    var_5c8 = zmm12
                    
                    if (cond:78_1)
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
            else
                var_5c8 = zmm12
        else
            float var_558_1[0x4] = arg9
            arg9 = _mm_shuffle_epi32(arg10, 0x4e)
            arg6 = zx.o(0)
            zmm12 = _mm_cmpgt_epi32(zx.o(0), arg9)
            zmm1 = _mm_cmpgt_epi32(zx.o(0), arg10)
            zmm2 = arg10 & arg5
            int64_t rax_100 = sx.q(zmm2[0])
            int64_t rcx_22 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            int64_t rbp_8 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            zmm2 = zx.o(*(arg12 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])))
            zmm3 = _mm_unpacklo_epi32(zx.o(*(arg12 + rbp_8)), zmm2[0].q)
            int32_t temp0_566[0x4] = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg12 + rax_100)), zx.o(*(arg12 + rcx_22))[0].q), 
                zmm3[0].q)
            zmm2 = arg7 & not.o(temp0_566 & data_143442be0)
            zmm0 = arg5
            arg11 =
                (arg11 & arg7) | (arg7 & not.o(_mm_srli_epi32(temp0_566, 0x18)) & data_143442bf0)
            float var_3b8[0x4]
            zmm7 = (var_3b8 & arg7) | (arg7 & not.o(_mm_srli_epi32(temp0_566, 0x1c)))
            zmm3 = _mm_slli_epi32(zmm7, 2) & zmm0
            int64_t rax_102 = sx.q(zmm3[0])
            int64_t rcx_24 = sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
            int64_t rbp_10 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
            zmm3 = zx.o(*(sx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + &data_143442cf0))
            arg5 = _mm_unpacklo_epi32(zx.o(*(rbp_10 + &data_143442cf0)), zmm3[0].q)
            zmm3 = _mm_unpacklo_epi32(zx.o(*(rax_102 + &data_143442cf0)), 
                zx.o(*(rcx_24 + &data_143442cf0))[0].q)
            zmm6 = arg11 & data_143442c00
            uint128_t var_418_1 = zmm6
            zmm4 = (_mm_slli_epi32(zmm7, 3) | zmm6) & zmm0
            uint32_t rax_105 = zx.d(*(sx.q(zmm4[0]) + &data_143442d10))
            int64_t rcx_26 = sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d)
            uint32_t rbp_13 = zx.d(*(sx.q(_mm_shuffle_epi32(zmm4, 0x4e).d) + &data_143442d10))
            uint32_t rdi_16 =
                zx.d(*(sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + &data_143442d10)) << 8 | rbp_13
            int32_t temp0_579[0x4] = _mm_insert_epi16(
                zx.o(zx.d(*(rcx_26 + &data_143442d10)) << 8) | zx.o(rax_105), rdi_16, 1)
            zmm3 = _mm_unpacklo_epi64(zmm3, arg5[0].q)
            int32_t temp0_582[0x4] =
                _mm_unpacklo_epi16(_mm_unpacklo_epi8(temp0_579, arg6[0].q), arg6[0].q)
            var_3b8 = zmm7
            zmm7 = __pcmpeqd_xmmdq_memdq(zmm7, data_142fc95c0)
            zmm6 = zmm7 & not.o(zmm0)
            arg5 = zx.o(0)
            
            if (_mm_movemask_ps(zmm6) != 0)
                arg5 = zmm6 & temp0_582
            
            arg9 = _mm_unpacklo_epi32(arg9, zmm12[0].q)
            arg10 = _mm_unpacklo_epi32(arg10, zmm1.q)
            float var_4c8[0x4]
            zmm11 = (var_4c8 & arg7) | zmm2
            zmm3 &= zmm0
            arg6 = zmm0
            zmm0 &= data_142fc95e0
            float var_578_1[0x4] = zmm7
            zmm2 = arg7 & not.o(zmm7)
            char temp0_587 = _mm_movemask_ps(zmm2)
            zmm7 = arg7
            float var_1a8_1[0x4] = zmm2
            
            if (temp0_587 == 0)
                zmm4 = zx.o(0)
            else
                zmm4 = temp0_582 & zmm2
                arg5 = _mm_srli_epi32(zmm2, 0x1f) | (zmm2 & not.o(arg5))
            
            zmm4 = _mm_madd_epi16(zmm4, zmm0)
            uint128_t var_4b8_1 = arg10
            arg7 = _mm_add_epi64(var_1b8_1, arg10)
            float var_4f8_1[0x4] = arg9
            zmm6 = _mm_add_epi64(var_1b8_1, arg9)
            zmm0 = _mm_shuffle_epi32(arg5, 0xf5)
            uint32_t var_4d8[0x4]
            zmm3 = (var_4d8 & zmm7) | (zmm7 & not.o(_mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(arg5, zmm3), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm0), 0xe8).q)))
            zmm2 = zmm7
            float var_388[0x4]
            zmm7 = (var_388 & zmm2) | (zmm7 & not.o(zmm4))
            float var_4a8_1[0x4] = zmm2
            zmm0 = zmm2 & not.o(__pcmpgtd_xmmdq_memdq(zmm11, data_142d3f5b0))
            var_388 = zmm7
            var_4d8 = zmm3
            var_4c8 = zmm11
            int32_t var_4e8_1[0x4] = arg6
            uint128_t var_5d8_1 = zmm6
            uint128_t var_588_2 = arg7
            float var_538_1[0x4] = arg11
            var_5b8 = arg8
            
            if (_mm_movemask_ps(zmm0) == 0)
                zmm11 = zmm6
                zmm3 = zx.o(0)
                arg11 = zx.o(0)
                zmm4 = zx.o(0)
                arg8 = var_548
                zmm12 = var_5c8
            else
                arg9 = zmm11
                arg10 = arg11 & data_142fc95f0
                zmm4 = zx.o(0)
                zmm1 = _mm_srai_epi32(_mm_slli_epi32(_mm_cmpeq_epi32(arg10, zx.o(0)) & zmm0, 0x1f), 
                    0x1f)
                zmm3 = zx.o(0)
                arg11 = zx.o(0)
                arg8 = var_548
                zmm12 = var_5c8
                
                if (_mm_movemask_ps(zmm1) != 0)
                    arg11 = zx.o(0)
                    zmm2 = zx.o(arg14)
                    
                    if (0f >= zmm2[0])
                        zmm4 = zx.o(0)
                        zmm3 = zx.o(0)
                    else
                        bool cond:22_1 = zmm2[0] >= 1f
                        zmm2 = __paddd_xmmdq_memdq(arg9, data_142d3f800)
                        
                        if (cond:22_1)
                            zmm2 &= zmm1
                            zmm4 = zmm2
                            zmm3 = zmm2
                        else
                            zmm3 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm2), var_298_1)
                            zmm4 = __andps_xmmxud_memxud(zmm3, data_142d3f780)
                            arg5 = __addps_xmmps_memps(
                                __addps_xmmps_memps(__andps_xmmxud_memxud(zmm3, data_142d3f770), 
                                    data_142d3f740), 
                                data_1434427a0) ^ zmm4
                            arg11 = zx.o(0)
                            zmm4 = _mm_add_ps(
                                __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm3, arg5, 1), data_142d3f7e0), 
                                arg5)
                            arg9 = _mm_cvttps_epi32(zmm4)
                            arg5 = _mm_cmpgt_epi32(arg9, zmm2)
                            arg5 = ((arg5 & not.o(arg9)) | (zmm2 & arg5)) & zmm1
                            
                            if (arg15 != 1)
                                arg11 = _mm_sub_ps(zmm3, zmm4)
                            
                            zmm4 = arg5
                            zmm3 = __psubd_xmmdq_memdq(arg5, data_142d3f800)
                            arg5 = _mm_cmpgt_epi32(zmm2, zmm3)
                            zmm3 = ((arg5 & not.o(zmm2)) | (zmm3 & arg5)) & zmm1
                            zmm6 = var_5d8_1
                            arg7 = var_588_2
                            arg9 = zmm11
                    
                    arg11 &= zmm1
                
                arg10 = _mm_srai_epi32(
                    _mm_slli_epi32(_mm_cmpeq_epi32(arg10, zx.o(0)) & not.o(zmm0), 0x1f), 0x1f)
                
                if (_mm_movemask_ps(arg10) == 0)
                    zmm11 = zmm6
                else
                    arg5 = _mm_cmpgt_epi32(data_1434422d0, arg9) | var_1c8_1
                    zmm0 = arg5 & arg10
                    float var_528_1[0x4] = arg11
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm4 = zmm0 & not.o(zmm4)
                        zmm3 = zmm0 & not.o(zmm3)
                    
                    arg11 = arg5 & not.o(arg10)
                    uint32_t temp0_627 = _mm_movemask_ps(arg11)
                    zmm1 = zx.o(0)
                    float var_598_2[0x4]
                    
                    if (temp0_627 == 0)
                        zmm11 = zmm6
                        var_598_2 = zmm4
                        zmm4 = var_528_1
                    else
                        arg9 = __paddd_xmmdq_memdq(var_4c8, data_142d3f800)
                        
                        if (arg14.d f>= 1f)
                            zmm11 = zmm6
                            arg9 &= arg11
                            var_598_2 = (arg11 & not.o(zmm4)) | arg9
                            zmm3 = (arg11 & not.o(zmm3)) | arg9
                            zmm4 = var_528_1
                        else
                            uint32_t var_5a8_2[0x4] = zmm3
                            int32_t var_598_1[0x4] = zmm4
                            zmm0 = _mm_shuffle_epi32(var_4c8, 0xf5)
                            zmm1 = _mm_mul_epu32(_mm_shuffle_epi32(var_4d8, 0xf5), zmm0)
                            zmm0 = _mm_mul_epu32(var_4d8, var_4c8)
                            zmm4 = arg7
                            arg7 = _mm_shuffle_epi32(zmm7, 0x4e)
                            zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm0, 0xe8), 
                                _mm_shuffle_epi32(zmm1, 0xe8).q)
                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm7)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), arg7)
                            zmm12 = _mm_unpacklo_epi32(zmm7, zmm1.q)
                            arg7 = _mm_unpacklo_epi32(arg7, zmm2[0].q)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                            zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            arg7 = _mm_add_epi64(arg7, zmm6)
                            zmm12 = _mm_add_epi64(zmm12, zmm4)
                            zmm1 = _mm_unpacklo_epi32(zmm1, zmm2[0].q)
                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                            zmm2 = data_143442a20
                            arg7 = _mm_add_epi64(_mm_add_epi64(arg7, zmm2), zmm1)
                            zmm12 = _mm_add_epi64(_mm_add_epi64(zmm12, zmm2), zmm0)
                            zmm0 = data_143442c10
                            zmm12 &= zmm0
                            arg7 &= zmm0
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(arg9), 
                                var_298_1))
                            zmm1 = __pcmpgtd_xmmdq_memdq(zmm0, data_142d8f750) & zmm0
                            zmm11 = _mm_cmpgt_epi32(arg9, zmm1)
                            zmm11 = (zmm11 & not.o(arg9)) | (zmm1 & zmm11)
                            float var_568_1[0x4] = arg5
                            
                            if (arg13 s< 0x100)
                                zmm1 = _mm_shuffle_epi32(zmm11, 0x4e)
                                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm11, 
                                        _mm_cmpgt_epi32(zx.o(0), zmm11)[0].q), 
                                    zmm12)
                                char rbp_15 = temp0_627.b
                                zmm6 = _mm_cmpeq_epi32(zmm6, zmm6)
                                float var_2c8[0x4]
                                
                                if ((rbp_15 & 1) != 0)
                                    zmm2 = var_2c8
                                    zmm2[0] = zx.o(*zmm0.q)[0]
                                    zmm1 = _mm_unpacklo_epi32(zmm1, zmm3[0].q)
                                    
                                    if ((rbp_15 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm2, 0), 
                                            zmm2, 0xe2)
                                else
                                    zmm2 = var_2c8
                                    zmm1 = _mm_unpacklo_epi32(zmm1, zmm3[0].q)
                                    
                                    if ((rbp_15 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm2, 0), 
                                            zmm2, 0xe2)
                                
                                zmm1 = _mm_add_epi64(zmm1, arg7)
                                
                                if ((rbp_15 & 4) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*zmm1.q), zmm2, 0x30), 0x84)
                                    
                                    if ((rbp_15 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                zmm2, 0x20), 
                                            0x24)
                                else if ((rbp_15 & 8) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            zmm2, 0x20), 
                                        0x24)
                                
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm2, data_142ed6810), var_458_1)
                                var_2c8 = zmm2
                                uint128_t var_508_2 = zmm3 ^ zmm6
                                
                                if (_mm_movemask_ps(zmm3 & not.o(arg11)) == 0)
                                    zmm1 = zmm11
                                else
                                    arg5 = (zmm3 & not.o(arg9)) | (zmm3 & zmm11)
                                    zmm0 = _mm_sub_epi32(zmm11, zmm6)
                                    zmm3 &= not.o(_mm_cmpgt_epi32(zmm0, arg9) ^ zmm6)
                                    zmm4 = arg11 & zmm3
                                    uint32_t j = _mm_movemask_ps(zmm4)
                                    
                                    if (j == 0)
                                        zmm1 = arg5
                                    else
                                        zmm7 = zmm11
                                        
                                        do
                                            zmm6 = zmm0
                                            uint128_t temp0_727 = _mm_shuffle_epi32(zmm0, 0x4e)
                                            int32_t temp0_728[0x4] =
                                                _mm_cmpgt_epi32(zx.o(0), temp0_727)
                                            zmm0 = _mm_add_epi64(
                                                _mm_unpacklo_epi32(zmm0, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                                zmm12)
                                            char temp0_732 = _mm_movemask_ps(zmm4)
                                            int32_t var_1f8[0x4]
                                            
                                            if ((temp0_732 & 1) != 0)
                                                var_1f8[0] = zx.o(*zmm0.q)[0]
                                                zmm2 = var_1f8
                                                zmm1 = _mm_unpacklo_epi32(temp0_727, temp0_728[0].q)
                                                
                                                if ((temp0_732 & 2) != 0)
                                                    zmm2 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                            zmm2, 0), 
                                                        zmm2, 0xe2)
                                            else
                                                zmm2 = var_1f8
                                                zmm1 = _mm_unpacklo_epi32(temp0_727, temp0_728[0].q)
                                                
                                                if ((temp0_732 & 2) != 0)
                                                    zmm2 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                            zmm2, 0), 
                                                        zmm2, 0xe2)
                                            
                                            zmm1 = _mm_add_epi64(zmm1, arg7)
                                            
                                            if ((temp0_732 & 4) != 0)
                                                zmm2 = _mm_shuffle_ps(zmm2, 
                                                    _mm_shuffle_ps(zx.o(*zmm1.q), zmm2, 0x30), 0x84)
                                                
                                                if ((temp0_732 & 8) != 0)
                                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                            zmm2, 0x20), 
                                                        0x24)
                                            else if ((temp0_732 & 8) != 0)
                                                zmm2 = _mm_shuffle_ps(zmm2, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                        zmm2, 0x20), 
                                                    0x24)
                                            
                                            var_1f8 = zmm2
                                            zmm0 = __pcmpgtd_xmmdq_memdq(
                                                __andps_xmmxud_memxud(zmm2, data_142ed6810), 
                                                var_458_1) & zmm3
                                            zmm4 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & arg11) != j)
                                                zmm4 = zmm0 ^ zmm3
                                            
                                            zmm1 = (zmm0 & not.o(arg5)) | (zmm7 & zmm0)
                                            zmm0 = __psubd_xmmdq_memdq(zmm6, data_142d3f800)
                                            zmm3 = _mm_cmpgt_epi32(zmm0, arg9) & not.o(zmm4)
                                            zmm4 = zmm3 & arg11
                                            j = _mm_movemask_ps(zmm4)
                                            zmm7 = zmm6
                                            arg5 = zmm1
                                        while (j != 0)
                                
                                zmm2 = var_508_2
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(zmm2, arg11)) == 0)
                                    arg5 = zmm1
                                    zmm7 = _mm_cmpeq_epi32(zmm7, zmm7)
                                else
                                    zmm1 &= zmm2
                                    zmm7 = _mm_cmpeq_epi32(zmm7, zmm7)
                                    zmm11 = _mm_add_epi32(zmm11, zmm7)
                                    zmm3 =
                                        __pcmpgtd_xmmdq_memdq(zmm11, data_142d8f750) & (zmm2 ^ zmm7)
                                    zmm0 = zmm3 & arg11
                                    uint32_t j_1 = _mm_movemask_ps(zmm0)
                                    
                                    if (j_1 != 0)
                                        do
                                            arg5 = _mm_shuffle_epi32(zmm11, 0x4e)
                                            zmm6 = _mm_cmpgt_epi32(zx.o(0), arg5)
                                            int32_t temp0_796[0x4] = _mm_add_epi64(
                                                _mm_unpacklo_epi32(zmm11, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm11)[0].q), 
                                                zmm12)
                                            char temp0_797 = _mm_movemask_ps(zmm0)
                                            float var_1e8[0x4]
                                            
                                            if ((temp0_797 & 1) != 0)
                                                zmm2 = var_1e8
                                                zmm2[0] = zx.d(*temp0_796[0].q)
                                                arg5 = _mm_unpacklo_epi32(arg5, zmm6.q)
                                                
                                                if ((temp0_797 & 2) != 0)
                                                    zmm2 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(temp0_796, 0x4e).q), 
                                                            zmm2, 0), 
                                                        zmm2, 0xe2)
                                            else
                                                zmm2 = var_1e8
                                                arg5 = _mm_unpacklo_epi32(arg5, zmm6.q)
                                                
                                                if ((temp0_797 & 2) != 0)
                                                    zmm2 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(temp0_796, 0x4e).q), 
                                                            zmm2, 0), 
                                                        zmm2, 0xe2)
                                            
                                            arg5 = _mm_add_epi64(arg5, arg7)
                                            
                                            if ((temp0_797 & 4) != 0)
                                                zmm2 = _mm_shuffle_ps(zmm2, 
                                                    _mm_shuffle_ps(zx.o(*arg5[0].q), zmm2, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_797 & 8) != 0)
                                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(arg5, 0x4e).q), 
                                                            zmm2, 0x20), 
                                                        0x24)
                                            else if ((temp0_797 & 8) != 0)
                                                zmm2 = _mm_shuffle_ps(zmm2, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(arg5, 0x4e).q), 
                                                        zmm2, 0x20), 
                                                    0x24)
                                            
                                            var_1e8 = zmm2
                                            zmm4 = __pcmpgtd_xmmdq_memdq(
                                                __andps_xmmxud_memxud(zmm2, data_142ed6810), 
                                                var_458_1) & not.o(zmm3)
                                            zmm6 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm4 & arg11) != j_1)
                                                zmm6 = zmm4 ^ zmm3
                                            
                                            arg5 = (zmm4 & not.o(zmm1)) | (zmm4 & zmm11)
                                            zmm11 = _mm_add_epi32(zmm11, zmm7)
                                            zmm3 = _mm_cmpgt_epi32(zmm11, zx.o(0)) & zmm6
                                            zmm0 = zmm3 & arg11
                                            j_1 = _mm_movemask_ps(zmm0)
                                            zmm1 = arg5
                                        while (j_1 != 0)
                                    else
                                        arg5 = zmm1
                                
                                arg5 = (arg5 & arg11) | (arg11 & not.o(var_598_1))
                                zmm1 = _mm_shuffle_epi32(arg5, 0x4e)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(arg5, _mm_cmpgt_epi32(zx.o(0), arg5)[0].q), 
                                    zmm12)
                                int32_t var_368[0x4]
                                
                                if ((rbp_15 & 1) != 0)
                                    var_368[0] = zx.o(*zmm0.q)[0]
                                
                                zmm11 = var_5d8_1
                                zmm1 = _mm_unpacklo_epi32(zmm1, zmm2[0].q)
                                
                                if ((rbp_15 & 2) != 0)
                                    zmm2 = var_368
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm2, 0), 
                                        zmm2, 0xe2)
                                    zmm1 = _mm_add_epi64(zmm1, arg7)
                                    
                                    if ((rbp_15 & 4) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zx.o(*zmm1.q), zmm2, 0x30), 0x84)
                                else
                                    zmm2 = var_368
                                    zmm1 = _mm_add_epi64(zmm1, arg7)
                                    
                                    if ((rbp_15 & 4) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zx.o(*zmm1.q), zmm2, 0x30), 0x84)
                                
                                if ((rbp_15 & 8) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            zmm2, 0x20), 
                                        0x24)
                                
                                var_368 = zmm2
                                zmm3 = (_mm_sub_epi32(arg5, zmm7) & arg11)
                                    | (var_5a8_2 & (arg11 ^ zmm7))
                                zmm0 = _mm_cmpgt_epi32(zmm3, arg9) & arg11
                                var_598_2 = arg5
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    zmm3 = (arg9 & zmm0) | (zmm0 & not.o(zmm3))
                                
                                zmm4 = var_528_1
                                zmm0 = _mm_shuffle_epi32(zmm3, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm6 = zmm3
                                zmm12 = _mm_add_epi64(zmm12, 
                                    _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3)[0].q))
                                float var_2b8[0x4]
                                
                                if ((rbp_15 & 1) != 0)
                                    zmm3 = var_2b8
                                    zmm3[0] = zx.o(*zmm12[0].q)[0]
                                    zmm2 = zmm3
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                    
                                    if ((rbp_15 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), 
                                                zmm2, 0), 
                                            zmm2, 0xe2)
                                else
                                    zmm2 = var_2b8
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                    
                                    if ((rbp_15 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), 
                                                zmm2, 0), 
                                            zmm2, 0xe2)
                                
                                zmm12 = var_5c8
                                arg7 = _mm_add_epi64(arg7, zmm0)
                                
                                if ((rbp_15 & 4) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*arg7.q), zmm2, 0x30), 0x84)
                                    arg5 = _mm_cmpeq_epi32(arg5, arg5)
                                    
                                    if ((rbp_15 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg7, 0x4e).q), 
                                                zmm2, 0x20), 
                                            0x24)
                                else
                                    arg5 = _mm_cmpeq_epi32(arg5, arg5)
                                    
                                    if ((rbp_15 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg7, 0x4e).q), 
                                                zmm2, 0x20), 
                                            0x24)
                                
                                zmm7 = var_388
                                arg6 = var_4e8_1
                                arg7 = var_588_2
                                zmm1 = data_142ed6810
                                zmm0 = _mm_and_ps(var_368, zmm1)
                                var_2b8 = zmm2
                            else
                                zmm0 = _mm_add_epi32(zmm11, zmm11)
                                zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                    zmm12)
                                char rbp_14 = temp0_627.b
                                arg6 = data_143442cd0
                                zmm6 = _mm_cmpeq_epi32(zmm6, zmm6)
                                float var_2d8[0x4]
                                
                                if ((rbp_14 & 1) != 0)
                                    zmm2 = var_2d8
                                    zmm2[0] = zx.o(*zmm0.q)[0]
                                    zmm1 = _mm_unpacklo_epi32(zmm1, zmm3[0].q)
                                    
                                    if ((rbp_14 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm2, 0), 
                                            zmm2, 0xe2)
                                else
                                    zmm2 = var_2d8
                                    zmm1 = _mm_unpacklo_epi32(zmm1, zmm3[0].q)
                                    
                                    if ((rbp_14 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm2, 0), 
                                            zmm2, 0xe2)
                                
                                zmm1 = _mm_add_epi64(zmm1, arg7)
                                
                                if ((rbp_14 & 4) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*zmm1.q), zmm2, 0x30), 0x84)
                                    
                                    if ((rbp_14 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                zmm2, 0x20), 
                                            0x24)
                                else if ((rbp_14 & 8) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            zmm2, 0x20), 
                                        0x24)
                                
                                arg5 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(zmm2, arg6), var_458_1)
                                zmm1 = arg5 ^ zmm6
                                var_2d8 = zmm2
                                float var_498_1[0x4] = zmm12
                                uint128_t var_508_1 = zmm1
                                
                                if (_mm_movemask_ps(arg5 & not.o(arg11)) == 0)
                                    zmm3 = zmm11
                                else
                                    zmm4 = (arg5 & not.o(arg9)) | (arg5 & zmm11)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                    zmm7 = _mm_sub_epi32(zmm11, zmm1)
                                    arg5 &= not.o(_mm_cmpgt_epi32(zmm7, arg9) ^ zmm1)
                                    zmm1 = arg11 & arg5
                                    uint32_t j_2 = _mm_movemask_ps(zmm1)
                                    
                                    if (j_2 == 0)
                                        zmm3 = zmm4
                                    else
                                        zmm6 = zmm11
                                        
                                        do
                                            zmm12 = arg7
                                            zmm0 = zmm7
                                            zmm7 = _mm_add_epi32(zmm7, zmm7)
                                            uint32_t temp0_688[0x4] = _mm_shuffle_epi32(zmm7, 0x4e)
                                            int32_t temp0_689[0x4] =
                                                _mm_cmpgt_epi32(zx.o(0), temp0_688)
                                            zmm7 = __paddq_xmmdq_memdq(
                                                _mm_unpacklo_epi32(zmm7, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm7)[0].q), 
                                                var_498_1)
                                            char temp0_693 = _mm_movemask_ps(zmm1)
                                            float var_488[0x4]
                                            
                                            if ((temp0_693 & 1) != 0)
                                                zmm2 = var_488
                                                zmm2[0] = zx.d(*zmm7[0].q)
                                                var_488 = zmm2
                                            
                                            zmm3 = _mm_unpacklo_epi32(temp0_688, temp0_689[0].q)
                                            arg9 = arg9
                                            
                                            if ((temp0_693 & 2) != 0)
                                                zmm2 = var_488
                                                zmm7 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                                        zmm2, 0), 
                                                    zmm2, 0xe2)
                                            else
                                                zmm7 = var_488
                                            
                                            arg6 = arg6
                                            arg7 = zmm12
                                            zmm3 = _mm_add_epi64(zmm3, zmm12)
                                            
                                            if ((temp0_693 & 4) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(zx.o(*zmm3[0].q), zmm7, 0x30), 
                                                    0x84)
                                            
                                            if ((temp0_693 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                            
                                            var_488 = zmm7
                                            zmm7 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(zmm7, arg6), 
                                                var_458_1) & arg5
                                            zmm1 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm7 & arg11) != j_2)
                                                zmm1 = zmm7 ^ arg5
                                            
                                            zmm3 = (zmm7 & not.o(zmm4)) | (zmm6 & zmm7)
                                            zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                            zmm7 = _mm_sub_epi32(zmm0, zmm2)
                                            arg5 = _mm_cmpgt_epi32(zmm7, arg9) & not.o(zmm1)
                                            zmm1 = arg5 & arg11
                                            j_2 = _mm_movemask_ps(zmm1)
                                            zmm6 = zmm0
                                            zmm4 = zmm3
                                        while (j_2 != 0)
                                
                                zmm2 = var_508_1
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(zmm2, arg11)) == 0)
                                    arg5 = zmm3
                                    zmm7 = _mm_cmpeq_epi32(zmm7, zmm7)
                                    zmm12 = var_498_1
                                else
                                    zmm3 &= zmm2
                                    zmm7 = _mm_cmpeq_epi32(zmm7, zmm7)
                                    zmm11 = _mm_add_epi32(zmm11, zmm7)
                                    zmm1 =
                                        __pcmpgtd_xmmdq_memdq(zmm11, data_142d8f750) & (zmm2 ^ zmm7)
                                    zmm0 = zmm1 & arg11
                                    uint32_t j_3 = _mm_movemask_ps(zmm0)
                                    
                                    if (j_3 == 0)
                                        arg5 = zmm3
                                        zmm12 = var_498_1
                                    else
                                        zmm12 = var_498_1
                                        
                                        do
                                            int32_t temp0_760[0x4] = _mm_add_epi32(zmm11, zmm11)
                                            arg5 = _mm_shuffle_epi32(temp0_760, 0x4e)
                                            zmm6 = _mm_cmpgt_epi32(zx.o(0), arg5)
                                            int32_t temp0_765[0x4] = _mm_add_epi64(
                                                _mm_unpacklo_epi32(temp0_760, 
                                                    _mm_cmpgt_epi32(zx.o(0), temp0_760)[0].q), 
                                                zmm12)
                                            char temp0_766 = _mm_movemask_ps(zmm0)
                                            float var_208[0x4]
                                            
                                            if ((temp0_766 & 1) != 0)
                                                zmm7 = var_208
                                                zmm7[0] = zx.d(*temp0_765[0].q)
                                                arg5 = _mm_unpacklo_epi32(arg5, zmm6.q)
                                                
                                                if ((temp0_766 & 2) != 0)
                                                    zmm7 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(temp0_765, 0x4e).q), 
                                                            zmm7, 0), 
                                                        zmm7, 0xe2)
                                            else
                                                zmm7 = var_208
                                                arg5 = _mm_unpacklo_epi32(arg5, zmm6.q)
                                                
                                                if ((temp0_766 & 2) != 0)
                                                    zmm7 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(temp0_765, 0x4e).q), 
                                                            zmm7, 0), 
                                                        zmm7, 0xe2)
                                            
                                            arg5 = _mm_add_epi64(arg5, arg7)
                                            
                                            if ((temp0_766 & 4) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(zx.o(*arg5[0].q), zmm7, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_766 & 8) != 0)
                                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(arg5, 0x4e).q), 
                                                            zmm7, 0x20), 
                                                        0x24)
                                            else if ((temp0_766 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(arg5, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                            
                                            zmm4 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(zmm7, arg6), 
                                                var_458_1) & not.o(zmm1)
                                            zmm6 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm4 & arg11) != j_3)
                                                zmm6 = zmm4 ^ zmm1
                                            
                                            var_208 = zmm7
                                            arg5 = (zmm4 & not.o(zmm3)) | (zmm4 & zmm11)
                                            zmm7 = _mm_cmpeq_epi32(zmm7, zmm7)
                                            zmm11 = _mm_add_epi32(zmm11, zmm7)
                                            zmm1 = _mm_cmpgt_epi32(zmm11, zx.o(0)) & zmm6
                                            zmm0 = zmm1 & arg11
                                            j_3 = _mm_movemask_ps(zmm0)
                                            zmm3 = arg5
                                        while (j_3 != 0)
                                
                                arg5 = (arg5 & arg11) | (arg11 & not.o(var_598_1))
                                zmm0 = _mm_add_epi32(arg5, arg5)
                                zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                    zmm12)
                                uint32_t var_338[0x4]
                                
                                if ((rbp_14 & 1) != 0)
                                    zmm4 = var_338
                                    zmm4[0] = zx.o(*zmm0.q)[0]
                                    zmm3 = zmm4
                                else
                                    zmm3 = var_338
                                
                                arg8 = var_548
                                zmm11 = var_5d8_1
                                zmm1 = _mm_unpacklo_epi32(zmm1, zmm2[0].q)
                                
                                if ((rbp_14 & 2) == 0)
                                    zmm1 = _mm_add_epi64(zmm1, arg7)
                                    
                                    if ((rbp_14 & 4) != 0)
                                        goto label_140273b22
                                    
                                    goto label_1402739e8
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm1 = _mm_add_epi64(zmm1, arg7)
                                
                                if ((rbp_14 & 4) == 0)
                                label_1402739e8:
                                    zmm0 = arg11 ^ zmm7
                                    
                                    if ((rbp_14 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                else
                                label_140273b22:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*zmm1.q), zmm3, 0x30), 0x84)
                                    zmm0 = arg11 ^ zmm7
                                    
                                    if ((rbp_14 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                
                                zmm2 = (_mm_sub_epi32(arg5, zmm7) & arg11) | (var_5a8_2 & zmm0)
                                zmm0 = _mm_cmpgt_epi32(zmm2, arg9) & arg11
                                var_338 = zmm3
                                var_598_2 = arg5
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    zmm2 = (arg9 & zmm0) | (zmm0 & not.o(zmm2))
                                
                                zmm4 = var_528_1
                                zmm6 = zmm2
                                zmm2 = _mm_add_epi32(zmm2, zmm2)
                                zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm12 = _mm_add_epi64(zmm12, 
                                    _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q))
                                uint32_t var_348[0x4]
                                
                                if ((rbp_14 & 1) != 0)
                                    var_348[0] = zx.o(*zmm12[0].q)[0]
                                
                                zmm2 = data_143442cd0
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                
                                if ((rbp_14 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), 
                                            var_348, 0), 
                                        var_348, 0xe2)
                                    zmm12 = var_5c8
                                    arg7 = _mm_add_epi64(arg7, zmm0)
                                    
                                    if ((rbp_14 & 4) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*arg7.q), zmm3, 0x30), 0x84)
                                else
                                    zmm12 = var_5c8
                                    zmm3 = var_348
                                    arg7 = _mm_add_epi64(arg7, zmm0)
                                    
                                    if ((rbp_14 & 4) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*arg7.q), zmm3, 0x30), 0x84)
                                
                                arg5 = _mm_cmpeq_epi32(arg5, arg5)
                                
                                if ((rbp_14 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg7, 0x4e).q), 
                                            zmm3, 0x20), 
                                        0x24)
                                
                                zmm7 = var_388
                                arg6 = var_4e8_1
                                arg7 = var_588_2
                                zmm0 = _mm_and_ps(var_338, zmm2)
                                zmm1 = zmm2
                                var_348 = zmm3
                                zmm2 = zmm3
                            
                            zmm2 = _mm_and_ps(zmm2, zmm1)
                            zmm1 = zx.o(0)
                            
                            if (arg15 != 1)
                                zmm2 = _mm_sub_epi32(zmm2, zmm0)
                                zmm1 = data_142d3f5b0
                                zmm3 = _mm_cmpgt_epi32(zmm2, zmm1)
                                zmm1 = _mm_div_ps(_mm_sub_ps(var_1d8_1, _mm_cvtepi32_ps(zmm0)), 
                                    _mm_cvtepi32_ps((zmm3 & not.o(zmm1)) | (zmm2 & zmm3)))
                            
                            zmm1 = _mm_and_ps(zmm1, var_568_1 ^ arg5)
                            zmm3 = zmm6
                    
                    arg11 = (arg10 & not.o(zmm4)) | (zmm1 & arg10)
                    zmm4 = var_598_2
            
            zmm1 = _mm_unpacklo_epi32(zmm7, _mm_cmpgt_epi32(zx.o(0), zmm7).q)
            zmm6 = _mm_shuffle_epi32(zmm7, 0x4e)
            zmm6 = _mm_unpacklo_epi32(zmm6, _mm_cmpgt_epi32(zx.o(0), zmm6).q)
            arg5 = var_4d8
            zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(zmm4, arg5), 0xe8)
            arg5 = _mm_shuffle_epi32(arg5, 0xf5)
            float var_198_1[0x4] = arg5
            zmm2 = _mm_unpacklo_epi32(zmm2, 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), arg5), 0xe8).q)
            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
            arg5 = _mm_shuffle_epi32(zmm2, 0x4e)
            zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
            arg5 = _mm_unpacklo_epi32(arg5, _mm_cmpgt_epi32(zx.o(0), arg5).q)
            float var_478_1[0x4] = arg5
            uint128_t var_568_2 = zmm6
            zmm0 = _mm_add_epi64(arg5, zmm6)
            float var_468_1[0x4] = zmm2
            uint128_t var_498_2 = zmm1
            float var_2f8_1[0x4] = _mm_add_epi64(_mm_add_epi64(zmm2, zmm1), arg7)
            zmm6 = zmm11
            uint128_t var_548_2 = _mm_add_epi64(zmm0, zmm11)
            zmm11 = __pcmpeqd_xmmdq_memdq(var_3b8, data_142d3f5b0)
            zmm1 = var_4a8_1 & not.o(zmm11)
            float var_528_2[0x4] = arg11
            uint32_t var_5a8_3[0x4] = zmm3
            int32_t var_598_3[0x4] = zmm4
            
            if (_mm_movemask_ps(zmm1) == 0)
                arg9 = var_558_1
                zmm7 = var_4a8_1
                arg5 = arg6
                arg6 = _mm_cmpeq_epi32(arg6, arg6)
            else
                arg7 = _mm_cmpeq_epi32(var_418_1, zx.o(0))
                zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg7 & zmm1, 0x1f), 0x1f)
                char temp0_925 = _mm_movemask_ps(zmm2)
                
                if (temp0_925 == 0)
                    arg9 = var_558_1
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    zmm7 = var_4a8_1
                else
                    arg6 = zmm11
                    zmm3 = __paddq_xmmdq_memdq(var_4f8_1, var_568_2)
                    arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4b8_1, var_498_2), var_468_1)
                    zmm3 = __paddq_xmmdq_memdq(zmm3, var_478_1)
                    zmm4 = data_1434426c0
                    zmm0 = zmm4
                    zmm3 = _mm_add_epi64(zmm3, zmm4)
                    arg5 = _mm_add_epi64(arg5, zmm4)
                    zmm4 = _mm_shuffle_epi32(zmm2, 0x50)
                    arg5 &= zmm4
                    zmm7 = _mm_shuffle_epi32(zmm2, 0xfa)
                    zmm3 &= zmm7
                    int64_t rax_203 = _mm_shuffle_epi32(arg5, 0x4e)[0].q
                    void* rbp_16 = arg12 + rax_203
                    zmm2 = *(arg12 + rax_203)
                    int64_t rax_204 = zmm3[0].q
                    void* rsi_2 = arg12 + rax_204
                    arg11 = *(arg12 + rax_204)
                    int64_t rdi_21 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                    void* rax_205 = arg12 + rdi_21
                    uint32_t var_5c8_2[0x4] = *(arg12 + rdi_21)
                    zmm3 = zmm4 & zmm0
                    zmm6 = zmm7 & zmm0
                    void* rdi_23 = arg5[0].q + arg12
                    arg5 = *(zmm3[0].q + rdi_23)
                    zmm3 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rbp_16)
                    zmm11 = *(zmm6.q + rsi_2)
                    uint128_t var_508_3 = *(_mm_shuffle_epi32(zmm6, 0x4e).q + rax_205)
                    zmm0 = data_1434426e0
                    zmm4 &= zmm0
                    zmm7 &= zmm0
                    arg10 = *(zmm4[0].q + rdi_23)
                    zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rbp_16)
                    zmm6 = *(zmm7[0].q + rsi_2)
                    zmm0 = *(_mm_shuffle_epi32(zmm7, 0x4e)[0].q + rax_205)
                    bool cond:44_1
                    bool cond:45_1
                    
                    if ((temp0_925 & 1) == 0)
                        arg9 = var_558_1
                        char temp15_1 = temp0_925 & 1
                        cond:44_1 = temp15_1 != 0
                        cond:45_1 = temp15_1 == 0
                        zmm7 = var_4a8_1
                        
                        if (temp15_1 == 0)
                            goto label_14027460b
                        
                        goto label_140273ee8
                    
                    zmm12[0] = (*rdi_23)[0]
                    arg9 = var_558_1
                    char temp14_1 = temp0_925 & 1
                    cond:44_1 = temp14_1 != 0
                    cond:45_1 = temp14_1 == 0
                    zmm7 = var_4a8_1
                    
                    if (temp14_1 == 0)
                    label_14027460b:
                        
                        if (cond:45_1)
                            goto label_140273ef3
                        
                        goto label_140274611
                    
                label_140273ee8:
                    arg9[0] = arg5[0]
                    bool cond:60_1
                    bool cond:61_1
                    bool cond:66_1
                    bool cond:67_1
                    
                    if (not(cond:44_1))
                    label_140273ef3:
                        char temp23_1 = temp0_925 & 2
                        cond:60_1 = temp23_1 != 0
                        cond:61_1 = temp23_1 == 0
                        cond:66_1 = temp23_1 != 0
                        cond:67_1 = temp23_1 == 0
                        
                        if (temp23_1 == 0)
                            goto label_14027461f
                        
                        goto label_140273f06
                    
                label_140274611:
                    arg8[0] = arg10.d
                    char temp22_1 = temp0_925 & 2
                    cond:60_1 = temp22_1 != 0
                    cond:61_1 = temp22_1 == 0
                    cond:66_1 = temp22_1 != 0
                    cond:67_1 = temp22_1 == 0
                    
                    if (temp22_1 == 0)
                    label_14027461f:
                        
                        if (cond:61_1)
                            goto label_140273f10
                        
                        goto label_14027462f
                    
                label_140273f06:
                    zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm12, 0), zmm12, 0xe2)
                    
                    if (not(cond:60_1))
                    label_140273f10:
                        zmm3 = var_5a8_3
                        
                        if (cond:67_1)
                            goto label_14027463f
                        
                        goto label_140273f26
                    
                label_14027462f:
                    arg9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, arg9, 0), arg9, 0xe2)
                    zmm3 = var_5a8_3
                    bool cond:93_1
                    bool cond:94_1
                    bool cond:112_1
                    bool cond:113_1
                    
                    if (not(cond:66_1))
                    label_14027463f:
                        char temp33_1 = temp0_925 & 4
                        cond:93_1 = temp33_1 != 0
                        cond:94_1 = temp33_1 == 0
                        cond:112_1 = temp33_1 != 0
                        cond:113_1 = temp33_1 == 0
                        
                        if (temp33_1 == 0)
                            goto label_140273f33
                        
                        goto label_14027464d
                    
                label_140273f26:
                    arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg8, 0), arg8, 0xe2)
                    char temp32_1 = temp0_925 & 4
                    cond:93_1 = temp32_1 != 0
                    cond:94_1 = temp32_1 == 0
                    cond:112_1 = temp32_1 != 0
                    cond:113_1 = temp32_1 == 0
                    
                    if (temp32_1 == 0)
                    label_140273f33:
                        
                        if (cond:94_1)
                            goto label_140274658
                        
                        goto label_140273f3e
                    
                label_14027464d:
                    zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(arg11, zmm12, 0x30), 0x84)
                    
                    if (not(cond:93_1))
                    label_140274658:
                        zmm11 = arg6
                        
                        if (cond:113_1)
                            goto label_140273f4e
                        
                        goto label_140274668
                    
                label_140273f3e:
                    arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm11, arg9, 0x30), 0x84)
                    zmm11 = arg6
                    bool cond:149_1
                    bool cond:150_1
                    bool cond:161_1
                    bool cond:162_1
                    
                    if (not(cond:112_1))
                    label_140273f4e:
                        zmm6 = var_5d8_1
                        char temp50_1 = temp0_925 & 8
                        cond:149_1 = temp50_1 != 0
                        cond:150_1 = temp50_1 == 0
                        cond:161_1 = temp50_1 != 0
                        cond:162_1 = temp50_1 == 0
                        
                        if (temp50_1 == 0)
                            goto label_14027467c
                        
                        goto label_140273f67
                    
                label_140274668:
                    arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm6, arg8, 0x30), 0x84)
                    zmm6 = var_5d8_1
                    char temp49_1 = temp0_925 & 8
                    cond:149_1 = temp49_1 != 0
                    cond:150_1 = temp49_1 == 0
                    cond:161_1 = temp49_1 != 0
                    cond:162_1 = temp49_1 == 0
                    
                    if (temp49_1 == 0)
                    label_14027467c:
                        
                        if (cond:150_1)
                            goto label_140273f72
                        
                        goto label_14027468f
                    
                label_140273f67:
                    zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(var_5c8_2, zmm12, 0x20), 0x24)
                    
                    if (cond:149_1)
                    label_14027468f:
                        arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(var_508_3, arg9, 0x20), 0x24)
                        
                        if (cond:161_1)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm0, arg8, 0x20), 0x24)
                    else
                    label_140273f72:
                        
                        if (not(cond:162_1))
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm0, arg8, 0x20), 0x24)
                    
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                
                arg7 &= not.o(zmm1)
                zmm4 = _mm_slli_epi32(arg7, 0x1f)
                char temp0_954 = _mm_movemask_ps(zmm4)
                
                if (temp0_954 == 0)
                    arg5 = var_4e8_1
                    zmm4 = var_598_3
                    arg7 = var_588_2
                else
                    float var_5c8_3[0x4] = zmm12
                    zmm3 = _mm_srai_epi32(_mm_slli_epi32(var_538_1, 0x1f), 0x1f)
                    zmm4 = _mm_srai_epi32(zmm4, 0x1f) & zmm3
                    arg6 = var_2f8_1
                    zmm12 = arg6
                    zmm2 = var_548_2
                    
                    if (_mm_movemask_ps(zmm4) != 0)
                        zmm0 = zmm7
                        zmm2 = data_1434426c0
                        arg11 = zmm11
                        zmm11 = arg8
                        arg8 = zmm2
                        zmm7 = _mm_add_epi64(var_548_2, zmm2)
                        zmm2 = _mm_add_epi64(arg6, arg8)
                        arg5 = zmm4 ^ data_142d3f800
                        zmm12 = _mm_shuffle_epi32(arg5, 0x50)
                        zmm12 = (zmm12 & not.o(zmm2)) | (arg6 & zmm12)
                        zmm2 = _mm_shuffle_epi32(arg5, 0xfa)
                        zmm1 = var_548_2 & zmm2
                        zmm2 &= not.o(zmm7)
                        zmm7 = zmm0
                        zmm2 |= zmm1
                        zmm1 = __paddq_xmmdq_memdq(var_4f8_1, var_568_2)
                        arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4b8_1, var_498_2), 
                            var_468_1)
                        zmm1 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_478_1), arg8)
                        arg5 = _mm_add_epi64(arg5, arg8)
                        arg8 = zmm11
                        zmm11 = arg11
                        zmm6 = _mm_shuffle_epi32(zmm4, 0x50) & arg5
                        zmm4 = _mm_shuffle_epi32(zmm4, 0xfa) & zmm1
                        arg5 = zx.o(*(arg12 + zmm6.q))
                        zmm1 = _mm_shuffle_epi32(zmm6, 0x4e)
                        zmm6 = var_5d8_1
                        arg5 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(arg5, zx.q(*(arg12 + zmm1.q))), 
                            _mm_unpacklo_epi32(zx.o(*(arg12 + zmm4[0].q)), 
                                zx.o(*(arg12 + _mm_shuffle_epi32(zmm4, 0x4e)[0].q))[0].q).q)
                    
                    zmm3 &= arg5
                    
                    if ((temp0_954 & 1) != 0)
                        zmm0.d = zmm3[0]
                        var_5c8_3 = zmm0
                        
                        if ((temp0_954 & 2) != 0)
                            goto label_140274199
                        
                        goto label_140274163
                    
                    if ((temp0_954 & 2) != 0)
                    label_140274199:
                        arg10 = var_5c8_3
                        var_5c8_3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, arg10, 1), arg10, 0xe2)
                        
                        if ((temp0_954 & 4) != 0)
                            goto label_14027416c
                        
                        goto label_1402741b4
                    
                label_140274163:
                    
                    if ((temp0_954 & 4) == 0)
                    label_1402741b4:
                        
                        if ((temp0_954 & 8) != 0)
                            zmm0 = var_5c8_3
                            var_5c8_3 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm3, zmm0, 0x23), 0x24)
                    else
                    label_14027416c:
                        zmm0 = var_5c8_3
                        var_5c8_3 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm3, zmm0, 0x32), 0x84)
                        
                        if ((temp0_954 & 8) != 0)
                            zmm0 = var_5c8_3
                            var_5c8_3 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm3, zmm0, 0x23), 0x24)
                    
                    zmm1 = data_1434422d0
                    zmm4 = var_538_1 & zmm1
                    uint32_t temp0_983[0x4] =
                        _mm_slli_epi32(_mm_cmpeq_epi32(zmm4, zmm1) & arg7, 0x1f)
                    char temp0_984 = _mm_movemask_ps(temp0_983)
                    uint128_t var_3d8
                    
                    if (temp0_984 == 0)
                        zmm3 = zmm2
                        zmm4 = __pcmpeqd_xmmdq_memdq(zmm4, data_142d8f750) & not.o(var_3d8)
                        
                        if ((temp0_954 & 1) != 0)
                            arg9[0] = zmm4[0]
                    else
                        zmm3 = _mm_srai_epi32(temp0_983, 0x1f) ^ data_142d3f800
                        
                        if ((temp0_984 & 1) != 0)
                            zmm0.d = (*zmm12[0].q).d
                            var_3d8 = zmm0
                        
                        zmm1 = data_1434426c0
                        zmm7 = _mm_add_epi64(zmm2, zmm1)
                        zmm1 = _mm_add_epi64(zmm12, zmm1)
                        zmm6 = _mm_shuffle_epi32(zmm3, 0x50)
                        arg5 = _mm_shuffle_epi32(zmm3, 0xfa)
                        
                        if ((temp0_984 & 2) != 0)
                            var_3d8 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q, var_3d8, 0), 
                                var_3d8, 0xe2)
                        
                        zmm3 = zmm2 & arg5
                        arg5 &= not.o(zmm7)
                        
                        if ((temp0_984 & 4) != 0)
                            var_3d8 = _mm_shuffle_ps(var_3d8, 
                                _mm_shuffle_ps(*zmm2[0].q, var_3d8, 0x30), 0x84)
                        
                        arg8 = arg8
                        zmm7 = var_4a8_1
                        zmm12 = (zmm12 & zmm6) | (zmm6 & not.o(zmm1))
                        zmm3 |= arg5
                        
                        if ((temp0_984 & 8) != 0)
                            var_3d8 = _mm_shuffle_ps(var_3d8, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e).q, var_3d8, 0x20), 
                                0x24)
                        
                        zmm6 = var_5d8_1
                        zmm4 = __pcmpeqd_xmmdq_memdq(zmm4, data_142d8f750) & not.o(var_3d8)
                        
                        if ((temp0_954 & 1) != 0)
                            arg9[0] = zmm4[0]
                    
                    if ((temp0_954 & 2) != 0)
                        arg9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg9, 1), arg9, 0xe2)
                        
                        if ((temp0_954 & 4) != 0)
                            goto label_1402744e2
                        
                        goto label_140274354
                    
                    if ((temp0_954 & 4) == 0)
                    label_140274354:
                        
                        if ((temp0_954 & 8) != 0)
                            arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm4, arg9, 0x23), 0x24)
                    else
                    label_1402744e2:
                        arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm4, arg9, 0x32), 0x84)
                        
                        if ((temp0_954 & 8) != 0)
                            arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm4, arg9, 0x23), 0x24)
                    
                    zmm1 = data_142fc95e0
                    zmm2 = var_538_1 & zmm1
                    char temp0_1005 =
                        _mm_movemask_ps(_mm_slli_epi32(arg7 & _mm_cmpeq_epi32(zmm2, zmm1), 0x1f))
                    uint128_t var_3c8
                    
                    if (temp0_1005 == 0)
                        arg6 = zmm7
                        zmm7 = zmm11
                        arg11 = zmm6
                        arg5 = var_4e8_1
                        zmm4 = var_598_3
                        zmm3 = var_5a8_3
                        arg7 = var_588_2
                        zmm12 = var_5c8_3
                        zmm2 = _mm_cmpeq_epi32(zmm2, zx.o(0)) & not.o(var_3c8)
                        
                        if ((temp0_954 & 1) != 0)
                            arg8[0] = zmm2[0]
                    else
                        if ((temp0_1005 & 1) != 0)
                            zmm1.d = (*zmm12[0].q).d
                            var_3c8 = zmm1
                        
                        arg6 = zmm7
                        zmm7 = zmm11
                        arg11 = zmm6
                        
                        if ((temp0_1005 & 2) != 0)
                            var_3c8 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, var_3c8, 0), 
                                var_3c8, 0xe2)
                        
                        arg5 = var_4e8_1
                        zmm4 = var_598_3
                        arg7 = var_588_2
                        zmm12 = var_5c8_3
                        
                        if ((temp0_1005 & 4) != 0)
                            var_3c8 = _mm_shuffle_ps(var_3c8, 
                                _mm_shuffle_ps(*zmm3[0].q, var_3c8, 0x30), 0x84)
                        
                        if ((temp0_1005 & 8) != 0)
                            var_3c8 = _mm_shuffle_ps(var_3c8, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, var_3c8, 0x20), 
                                0x24)
                        
                        zmm3 = var_5a8_3
                        zmm2 = _mm_cmpeq_epi32(zmm2, zx.o(0)) & not.o(var_3c8)
                        
                        if ((temp0_954 & 1) != 0)
                            arg8[0] = zmm2[0]
                    zmm6 = arg11
                    
                    if ((temp0_954 & 2) != 0)
                        arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg8, 1), arg8, 0xe2)
                        zmm11 = zmm7
                        zmm7 = arg6
                        
                        if ((temp0_954 & 4) != 0)
                            goto label_140274518
                        
                        goto label_1402744b7
                    
                    zmm11 = zmm7
                    zmm7 = arg6
                    
                    if ((temp0_954 & 4) == 0)
                    label_1402744b7:
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        
                        if ((temp0_954 & 8) != 0)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x23), 0x24)
                    else
                    label_140274518:
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x32), 0x84)
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        
                        if ((temp0_954 & 8) != 0)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x23), 0x24)
            
            arg10 = zmm11 ^ arg6
            uint128_t var_508_4 = arg10
            
            if (_mm_movemask_ps(zmm7 & not.o(arg10)) == 0)
                zmm7 = var_578_1
            else
                if (temp0_587 != 0)
                    arg6 = var_538_1
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x1f), 0x1f) & var_578_1
                    zmm1 = zmm2 & arg5
                    uint32_t temp0_1028 = _mm_movemask_ps(zmm1)
                    arg7 = zx.o(0)
                    float var_308_1[0x4] = zmm11
                    
                    if (temp0_1028 == 0)
                        zmm11 = var_588_2
                        arg5 = zmm6
                        arg10 = zx.o(0)
                        zmm1 = zx.o(0)
                    else
                        char rdi_24 = temp0_1028.b
                        uint128_t var_318
                        float var_238[0x4]
                        
                        if ((rdi_24 & 1) != 0)
                            zmm7 = var_238
                            zmm7[0] = (*var_588_2.q)[0]
                            zmm0 = var_318
                            
                            if ((rdi_24 & 2) != 0)
                                zmm7 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(
                                        *__pshufd_xmmdq_memdq_immb(var_588_2, 0x4e)[0].q, zmm7, 0), 
                                    zmm7, 0xe2)
                        else
                            zmm0 = var_318
                            zmm7 = var_238
                            
                            if ((rdi_24 & 2) != 0)
                                zmm7 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(
                                        *__pshufd_xmmdq_memdq_immb(var_588_2, 0x4e)[0].q, zmm7, 0), 
                                    zmm7, 0xe2)
                        
                        if ((rdi_24 & 4) == 0)
                            if ((rdi_24 & 8) != 0)
                                goto label_1402747cd
                            
                            goto label_14027477c
                        
                        zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(*zmm6.q, zmm7, 0x30), 0x84)
                        char rbp_18
                        
                        if ((rdi_24 & 8) != 0)
                        label_1402747cd:
                            zmm7 = _mm_shuffle_ps(zmm7, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e)[0].q, zmm7, 0x20), 
                                0x24)
                            rbp_18 = _mm_movemask_ps(zmm2)
                            arg10 = zx.o(0)
                            
                            if ((rbp_18 & 1) != 0)
                                goto label_14027478f
                            
                            goto label_1402747df
                        
                    label_14027477c:
                        rbp_18 = _mm_movemask_ps(zmm2)
                        arg10 = zx.o(0)
                        
                        if ((rbp_18 & 1) == 0)
                        label_1402747df:
                            zmm1 ^= data_142d3f800
                            
                            if ((rbp_18 & 2) != 0)
                                arg10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg10, 1), arg10, 0xe2)
                        else
                        label_14027478f:
                            arg10.d = zmm7[0]
                            zmm1 ^= data_142d3f800
                            
                            if ((rbp_18 & 2) != 0)
                                arg10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg10, 1), arg10, 0xe2)
                        
                        int32_t temp0_1051[0x4] = __paddq_xmmdq_memdq(var_588_2, data_1434426c0)
                        zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                        
                        if ((rbp_18 & 4) != 0)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm7, arg10, 0x32), 0x84)
                        
                        if ((rbp_18 & 8) != 0)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm7, arg10, 0x23), 0x24)
                        
                        zmm6 = __paddq_xmmdq_memdq(zmm6, data_1434426c0)
                        zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                        arg5 = (var_588_2 & zmm2) | (zmm2 & not.o(temp0_1051))
                        
                        if ((rdi_24 & 1) != 0)
                            zmm0.d = (*arg5[0].q).d
                        
                        zmm1 = zmm4 & not.o(zmm6)
                        zmm3 = var_5d8_1 & zmm4
                        
                        if ((rdi_24 & 2) != 0)
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm0, 0), zmm0, 
                                0xe2)
                            zmm3 |= zmm1
                            
                            if ((rdi_24 & 4) != 0)
                            label_1402748e9:
                                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(*zmm3[0].q, zmm0, 0x30), 
                                    0x84)
                                
                                if ((rdi_24 & 8) == 0)
                                    goto label_140274895
                                
                                goto label_140274905
                        else
                            zmm3 |= zmm1
                            
                            if ((rdi_24 & 4) != 0)
                                goto label_1402748e9
                        
                        if ((rdi_24 & 8) == 0)
                        label_140274895:
                            zmm1 = zx.o(0)
                            
                            if ((rbp_18 & 1) == 0)
                                goto label_140274912
                            
                            goto label_1402748a3
                        
                    label_140274905:
                        zmm0 = _mm_shuffle_ps(zmm0, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm0, 0x20), 0x24)
                        zmm1 = zx.o(0)
                        
                        if ((rbp_18 & 1) != 0)
                        label_1402748a3:
                            zmm1.d = zmm0.d
                            zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            
                            if ((rbp_18 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm1, 1), zmm1, 0xe2)
                        else
                        label_140274912:
                            zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            
                            if ((rbp_18 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm1, 1), zmm1, 0xe2)
                        
                        int32_t temp0_1073[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                        zmm6 = data_1434426c0
                        zmm3 = _mm_add_epi64(zmm3, zmm6)
                        arg5 = _mm_add_epi64(arg5, zmm6)
                        var_318 = zmm0
                        var_238 = zmm7
                        
                        if ((rbp_18 & 4) != 0)
                            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm0, zmm1, 0x32), 0x84)
                        
                        zmm6 = var_5d8_1
                        zmm7 = var_4a8_1
                        
                        if ((rbp_18 & 8) != 0)
                            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(var_318, zmm1, 0x23), 0x24)
                        
                        zmm11 = (var_588_2 & zmm2) | (zmm2 & not.o(arg5))
                        arg5 = (zmm6 & temp0_1073) | (temp0_1073 & not.o(zmm3))
                    
                    zmm2 = data_1434422d0
                    zmm4 = _mm_cmpeq_epi32(arg6 & zmm2, zmm2) & var_578_1
                    zmm2 = zmm7 & not.o(zmm4)
                    char temp0_1082 = _mm_movemask_ps(zmm2)
                    
                    if (temp0_1082 == 0)
                        arg11 = zx.o(0)
                    else
                        uint128_t var_228
                        
                        if ((temp0_1082 & 1) != 0)
                            zmm3 = var_228
                            zmm3[0] = (*zmm11[0].q).d
                            zmm0 = zmm3
                            
                            if ((temp0_1082 & 2) != 0)
                                zmm3 = zmm0
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm3, 0), 
                                    zmm3, 0xe2)
                        else
                            zmm0 = var_228
                            
                            if ((temp0_1082 & 2) != 0)
                                zmm3 = zmm0
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm3, 0), 
                                    zmm3, 0xe2)
                        
                        if ((temp0_1082 & 4) != 0)
                            zmm3 = zmm0
                            zmm0 =
                                _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*arg5[0].q, zmm3, 0x30), 0x84)
                            zmm2 ^= data_142d3f800
                            
                            if ((temp0_1082 & 8) != 0)
                                zmm3 = zmm0
                                zmm0 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm3, 0x20), 
                                    0x24)
                        else
                            zmm2 ^= data_142d3f800
                            
                            if ((temp0_1082 & 8) != 0)
                                zmm3 = zmm0
                                zmm0 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm3, 0x20), 
                                    0x24)
                        
                        uint32_t temp0_1089[0x4] = _mm_shuffle_epi32(zmm2, 0x50)
                        char temp0_1090 = _mm_movemask_ps(zmm4)
                        arg7 = zx.o(0)
                        
                        if ((temp0_1090 & 1) != 0)
                            arg7.d = zmm0.d
                        
                        uint32_t temp0_1091[0x4] = _mm_slli_epi32(temp0_1089, 0x1f)
                        
                        if ((temp0_1090 & 2) != 0)
                            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg7, 1), arg7, 0xe2)
                        
                        zmm4 = _mm_shuffle_epi32(zmm2, 0xfa)
                        zmm6 = __paddq_xmmdq_memdq(zmm11, data_1434426c0)
                        zmm3 = _mm_srai_epi32(temp0_1091, 0x1f)
                        
                        if ((temp0_1090 & 4) != 0)
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm0, arg7, 0x32), 0x84)
                        
                        zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                        zmm11 &= zmm3
                        
                        if ((temp0_1090 & 8) != 0)
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm0, arg7, 0x23), 0x24)
                        
                        zmm7 = __paddq_xmmdq_memdq(arg5, data_1434426c0)
                        int32_t temp0_1103[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                        zmm2 = (zmm3 & not.o(zmm6)) | zmm11
                        var_228 = zmm0
                        uint128_t var_438
                        
                        if ((temp0_1082 & 1) != 0)
                            zmm0.d = (*zmm2[0].q).d
                            var_438 = zmm0
                        
                        zmm6 = temp0_1103 & not.o(zmm7)
                        arg5 &= temp0_1103
                        
                        if ((temp0_1082 & 2) != 0)
                            var_438 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, var_438, 0), 
                                var_438, 0xe2)
                            zmm6 |= arg5
                            
                            if ((temp0_1082 & 4) != 0)
                            label_140274c15:
                                var_438 = _mm_shuffle_ps(var_438, 
                                    _mm_shuffle_ps(*zmm6.q, var_438, 0x30), 0x84)
                                
                                if ((temp0_1082 & 8) == 0)
                                    goto label_140274b6a
                                
                                goto label_140274c45
                        else
                            zmm6 |= arg5
                            
                            if ((temp0_1082 & 4) != 0)
                                goto label_140274c15
                        
                        if ((temp0_1082 & 8) == 0)
                        label_140274b6a:
                            arg11 = zx.o(0)
                            
                            if ((temp0_1090 & 1) == 0)
                                goto label_140274c5c
                            
                            goto label_140274b79
                        
                    label_140274c45:
                        var_438 = _mm_shuffle_ps(var_438, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e)[0].q, var_438, 0x20), 
                            0x24)
                        arg11 = zx.o(0)
                        
                        if ((temp0_1090 & 1) != 0)
                        label_140274b79:
                            arg11 = zx.o(0)
                            arg11[0] = var_438.d
                            
                            if ((temp0_1090 & 2) != 0)
                                arg11 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(var_438, arg11, 1), arg11, 0xe2)
                        else
                        label_140274c5c:
                            
                            if ((temp0_1090 & 2) != 0)
                                arg11 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(var_438, arg11, 1), arg11, 0xe2)
                        
                        zmm7 = data_1434426c0
                        zmm6 = _mm_add_epi64(zmm6, zmm7)
                        zmm2 = _mm_add_epi64(zmm2, zmm7)
                        
                        if ((temp0_1090 & 4) != 0)
                            arg11 =
                                _mm_shuffle_ps(arg11, _mm_shuffle_ps(var_438, arg11, 0x32), 0x84)
                        
                        arg8 = arg8
                        zmm7 = var_4a8_1
                        zmm4 = temp0_1103 & not.o(zmm6)
                        
                        if ((temp0_1090 & 8) != 0)
                            arg11 =
                                _mm_shuffle_ps(arg11, _mm_shuffle_ps(var_438, arg11, 0x23), 0x24)
                        
                        zmm6 = var_5d8_1
                        zmm11 |= zmm3 & not.o(zmm2)
                        arg5 |= zmm4
                    
                    zmm2 = data_142fc95e0
                    zmm3 = _mm_cmpeq_epi32(var_538_1 & zmm2, zmm2) & var_578_1
                    zmm2 = zmm7 & not.o(zmm3)
                    char temp0_1123 = _mm_movemask_ps(zmm2)
                    
                    if (temp0_1123 == 0)
                        zmm0 = zmm7
                        arg6 = zx.o(0)
                        zmm2 = zx.o(0)
                        zmm11 = var_308_1
                    else
                        uint128_t var_428
                        
                        if ((temp0_1123 & 1) != 0)
                            zmm6.d = (*zmm11[0].q)[0]
                            var_428 = zmm6
                            
                            if ((temp0_1123 & 2) != 0)
                            label_140274e8d:
                                var_428 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e)[0].q, var_428, 
                                        0), 
                                    var_428, 0xe2)
                                
                                if ((temp0_1123 & 4) == 0)
                                    goto label_140274d34
                                
                                goto label_140274eb8
                        else if ((temp0_1123 & 2) != 0)
                            goto label_140274e8d
                        
                        if ((temp0_1123 & 4) != 0)
                        label_140274eb8:
                            var_428 = _mm_shuffle_ps(var_428, 
                                _mm_shuffle_ps(*arg5[0].q, var_428, 0x30), 0x84)
                            zmm2 ^= data_142d3f800
                            
                            if ((temp0_1123 & 8) != 0)
                                var_428 = _mm_shuffle_ps(var_428, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e)[0].q, var_428, 
                                        0x20), 
                                    0x24)
                        else
                        label_140274d34:
                            zmm2 ^= data_142d3f800
                            
                            if ((temp0_1123 & 8) != 0)
                                var_428 = _mm_shuffle_ps(var_428, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e)[0].q, var_428, 
                                        0x20), 
                                    0x24)
                        
                        zmm4 = _mm_shuffle_epi32(zmm2, 0x50)
                        char temp0_1128 = _mm_movemask_ps(zmm3)
                        arg6 = zx.o(0)
                        
                        if ((temp0_1128 & 1) != 0)
                            arg6 = zx.o(0)
                            arg6[0] = var_428[0]
                        
                        zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                        
                        if ((temp0_1128 & 2) != 0)
                            arg6 = _mm_shuffle_ps(_mm_shuffle_ps(var_428, arg6, 1), arg6, 0xe2)
                        
                        zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                        zmm3 = __paddq_xmmdq_memdq(zmm11, data_1434426c0)
                        int32_t temp0_1134[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                        
                        if ((temp0_1128 & 4) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(var_428, arg6, 0x32), 0x84)
                        
                        zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                        zmm4 = temp0_1134 & not.o(zmm3)
                        
                        if ((temp0_1128 & 8) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(var_428, arg6, 0x23), 0x24)
                        
                        zmm3 = __paddq_xmmdq_memdq(arg5, data_1434426c0)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                        zmm11 = (zmm11 & temp0_1134) | zmm4
                        int32_t var_218[0x4]
                        
                        if ((temp0_1123 & 1) != 0)
                            zmm6.d = (*zmm11[0].q)[0]
                            zmm4 = zmm6
                        else
                            zmm4 = var_218
                        
                        zmm6 = var_5d8_1
                        arg5 &= zmm2
                        zmm2 &= not.o(zmm3)
                        
                        if ((temp0_1123 & 2) != 0)
                            zmm4 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e)[0].q, zmm4, 0), 
                                zmm4, 0xe2)
                            zmm11 = var_308_1
                            arg5 |= zmm2
                            
                            if ((temp0_1123 & 4) != 0)
                            label_140274fb0:
                                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(*arg5[0].q, zmm4, 0x30), 
                                    0x84)
                                
                                if ((temp0_1123 & 8) == 0)
                                    goto label_140274f25
                                
                                goto label_140274fd0
                        else
                            zmm11 = var_308_1
                            arg5 |= zmm2
                            
                            if ((temp0_1123 & 4) != 0)
                                goto label_140274fb0
                        
                        if ((temp0_1123 & 8) == 0)
                        label_140274f25:
                            zmm2 = zx.o(0)
                            
                            if ((temp0_1128 & 1) == 0)
                                goto label_140274fe0
                            
                            goto label_140274f32
                        
                    label_140274fd0:
                        zmm4 = _mm_shuffle_ps(zmm4, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e)[0].q, zmm4, 0x20), 0x24)
                        zmm2 = zx.o(0)
                        
                        if ((temp0_1128 & 1) == 0)
                        label_140274fe0:
                            
                            if ((temp0_1128 & 2) == 0)
                                goto label_140274f43
                            
                            goto label_140274ff4
                        
                    label_140274f32:
                        zmm2 = zx.o(0)
                        zmm2[0] = zmm4[0]
                        
                        if ((temp0_1128 & 2) == 0)
                        label_140274f43:
                            
                            if ((temp0_1128 & 4) == 0)
                                goto label_140275003
                            
                            goto label_140274f53
                        
                    label_140274ff4:
                        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm2, 1), zmm2, 0xe2)
                        
                        if ((temp0_1128 & 4) != 0)
                        label_140274f53:
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm4, zmm2, 0x32), 0x84)
                            var_218 = zmm4
                            zmm0 = zmm7
                            
                            if ((temp0_1128 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm4, zmm2, 0x23), 0x24)
                        else
                        label_140275003:
                            var_218 = zmm4
                            zmm0 = zmm7
                            
                            if ((temp0_1128 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm4, zmm2, 0x23), 0x24)
                    
                    zmm3 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4b8_1, var_498_2), var_468_1)
                    zmm4 = data_1434426c0
                    arg5 = zmm4
                    zmm3 = _mm_add_epi64(zmm3, zmm4)
                    zmm4 = _mm_shuffle_epi32(var_1a8_1, 0x50) & zmm3
                    zmm3 = _mm_add_epi64(
                        __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4f8_1, var_568_2), var_478_1), 
                        arg5)
                    arg5 = _mm_shuffle_epi32(var_1a8_1, 0xfa) & zmm3
                    int64_t rax_249 = zmm4[0].q
                    int64_t rcx_37 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    int64_t rsi_4 = arg5[0].q
                    int64_t rdi_26 = _mm_shuffle_epi32(arg5, 0x4e)[0].q
                    zmm3 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg12 + rax_249)), zx.o(*(arg12 + rcx_37))[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg12 + rsi_4)), zx.o(*(arg12 + rdi_26))[0].q)[0]
                            .q)
                    zmm4 = zmm3
                    arg10 = _mm_add_ps(arg10, 
                        _mm_mul_ps(zmm1, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm3 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    arg5 = _mm_srli_epi32(zmm3, 0xa) & data_143442480
                    zmm1 = data_143442440
                    zmm3 = zmm1
                    zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm1))
                    arg5 = data_143442690
                    float temp0_1183[0x4] = _mm_mul_ps(arg11, _mm_div_ps(zmm1, arg5))
                    zmm1 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm4, 0x15), zmm3)), arg5)
                    char temp44_1 = temp0_587 & 1
                    
                    if (temp44_1 != 0)
                        zmm12[0] = arg10.d
                    
                    zmm4 = var_598_3
                    float temp0_1188[0x4] = _mm_mul_ps(zmm2, zmm1)
                    arg7 = _mm_add_ps(arg7, temp0_1183)
                    zmm7 = zmm0
                    
                    if (temp44_1 != 0)
                        arg9[0] = arg7.d
                        arg6 = _mm_add_ps(arg6, temp0_1188)
                        
                        if (temp44_1 != 0)
                            goto label_1402753aa
                        
                        goto label_14027515d
                    
                    arg6 = _mm_add_ps(arg6, temp0_1188)
                    bool cond:181_1
                    bool cond:182_1
                    bool cond:200_1
                    bool cond:201_1
                    
                    if (temp44_1 != 0)
                    label_1402753aa:
                        arg8[0] = arg6[0]
                        char temp67_1 = temp0_587 & 2
                        cond:181_1 = temp67_1 == 0
                        cond:182_1 = temp67_1 != 0
                        cond:200_1 = temp67_1 == 0
                        cond:201_1 = temp67_1 != 0
                        
                        if (temp67_1 != 0)
                            goto label_140275174
                        
                        goto label_1402753b8
                    
                label_14027515d:
                    char temp66_1 = temp0_587 & 2
                    cond:181_1 = temp66_1 == 0
                    cond:182_1 = temp66_1 != 0
                    cond:200_1 = temp66_1 == 0
                    cond:201_1 = temp66_1 != 0
                    
                    if (temp66_1 == 0)
                    label_1402753b8:
                        
                        if (not(cond:181_1))
                        label_1402753cc:
                            arg9 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, arg9, 1), arg9, 0xe2)
                            
                            if (cond:201_1)
                                goto label_140275192
                            
                            goto label_1402753d6
                    else
                    label_140275174:
                        zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(arg10, zmm12, 1), zmm12, 0xe2)
                        
                        if (cond:182_1)
                            goto label_1402753cc
                    
                    bool cond:251_1
                    bool cond:252_1
                    bool cond:273_1
                    bool cond:274_1
                    
                    if (not(cond:200_1))
                    label_140275192:
                        arg8 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, arg8, 1), arg8, 0xe2)
                        char temp93_1 = temp0_587 & 4
                        cond:251_1 = temp93_1 == 0
                        cond:252_1 = temp93_1 != 0
                        cond:273_1 = temp93_1 == 0
                        cond:274_1 = temp93_1 != 0
                        
                        if (temp93_1 != 0)
                            goto label_1402753e8
                        
                        goto label_14027519f
                    
                label_1402753d6:
                    char temp92_1 = temp0_587 & 4
                    cond:251_1 = temp92_1 == 0
                    cond:252_1 = temp92_1 != 0
                    cond:273_1 = temp92_1 == 0
                    cond:274_1 = temp92_1 != 0
                    
                    if (temp92_1 == 0)
                    label_14027519f:
                        
                        if (not(cond:251_1))
                        label_1402751ae:
                            arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(arg7, arg9, 0x32), 0x84)
                            
                            if (cond:274_1)
                                goto label_140275402
                            
                            goto label_1402751b9
                    else
                    label_1402753e8:
                        zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(arg10, zmm12, 0x32), 0x84)
                        
                        if (cond:252_1)
                            goto label_1402751ae
                    
                    bool cond:310_1
                    bool cond:311_1
                    bool cond:327_1
                    bool cond:328_1
                    
                    if (not(cond:273_1))
                    label_140275402:
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg6, arg8, 0x32), 0x84)
                        char temp114_1 = temp0_587 & 8
                        cond:310_1 = temp114_1 == 0
                        cond:311_1 = temp114_1 != 0
                        cond:327_1 = temp114_1 == 0
                        cond:328_1 = temp114_1 != 0
                        
                        if (temp114_1 != 0)
                            goto label_1402751c7
                        
                        goto label_140275410
                    
                label_1402751b9:
                    char temp113_1 = temp0_587 & 8
                    cond:310_1 = temp113_1 == 0
                    cond:311_1 = temp113_1 != 0
                    cond:327_1 = temp113_1 == 0
                    cond:328_1 = temp113_1 != 0
                    
                    if (temp113_1 != 0)
                    label_1402751c7:
                        zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(arg10, zmm12, 0x23), 0x24)
                        arg10 = var_508_4
                        
                        if (cond:311_1)
                            goto label_140275425
                        
                        goto label_1402751dc
                    
                label_140275410:
                    arg10 = var_508_4
                    
                    if (cond:310_1)
                    label_1402751dc:
                        arg5 = var_4e8_1
                        arg7 = var_588_2
                        
                        if (not(cond:327_1))
                            arg6 = _mm_shuffle_ps(arg6, arg8, 0x23)
                            arg8 = _mm_shuffle_ps(arg8, arg6, 0x24)
                    else
                    label_140275425:
                        arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(arg7, arg9, 0x23), 0x24)
                        arg5 = var_4e8_1
                        arg7 = var_588_2
                        
                        if (cond:328_1)
                            arg6 = _mm_shuffle_ps(arg6, arg8, 0x23)
                            arg8 = _mm_shuffle_ps(arg8, arg6, 0x24)
                    
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                
                zmm0 = var_578_1 ^ arg10
                
                if (_mm_movemask_ps(zmm7 & not.o(zmm0)) == 0)
                    zmm3 = var_5a8_3
                    zmm7 = var_578_1
                else
                    zmm1 = zmm7
                    zmm7 = _mm_cmpeq_epi32(zmm7, zmm7)
                    zmm2 = __pcmpeqd_xmmdq_memdq(var_3b8, data_1434422d0)
                    arg6 = zmm1 & not.o(zmm2)
                    char temp0_1205 = _mm_movemask_ps(arg6)
                    
                    if (temp0_1205 == 0)
                        zmm3 = var_5a8_3
                        zmm7 = zmm1
                    else
                        float var_558_3[0x4] = zmm2
                        arg10 = zmm4
                        arg7 = arg8
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_538_1, 0x1f), 0x1f)
                        zmm4 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x1f), 0x1f) & zmm2
                        arg8 = arg9
                        float var_5c8_1[0x4] = zmm12
                        
                        if (_mm_movemask_ps(zmm4) == 0)
                            zmm3 = var_548_2
                            zmm12 = var_2f8_1
                        else
                            zmm1 = data_1434426b0
                            arg5 = _mm_add_epi64(var_2f8_1, zmm1)
                            zmm6 = zmm4 ^ zmm7
                            zmm7 = _mm_shuffle_epi32(zmm6, 0x50)
                            zmm12 = (var_2f8_1 & zmm7) | (zmm7 & not.o(arg5))
                            zmm3 = var_548_2
                            arg5 = _mm_add_epi64(zmm3, zmm1)
                            zmm6 = _mm_shuffle_epi32(zmm6, 0xfa)
                            zmm3 = (zmm3 & zmm6) | (zmm6 & not.o(arg5))
                            arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4b8_1, var_498_2), 
                                var_468_1)
                            zmm6 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4f8_1, var_568_2), 
                                var_478_1)
                            zmm1 = data_1434426c0
                            arg5 = _mm_add_epi64(arg5, zmm1)
                            zmm7 = _mm_shuffle_epi32(zmm4, 0x50) & arg5
                            zmm6 = _mm_add_epi64(zmm6, zmm1)
                            zmm4 = _mm_shuffle_epi32(zmm4, 0xfa) & zmm6
                            int64_t rax_252 = zmm7[0].q
                            int64_t rbp_21 = _mm_shuffle_epi32(zmm7, 0x4e)[0].q
                            int64_t rbx_10 = zmm4[0].q
                            int64_t rdi_27 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                            zmm4 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg12 + rax_252), 
                                                0), 
                                            *(arg12 + rbp_21), 2), 
                                        *(arg12 + rbx_10), 4), 
                                    *(arg12 + rdi_27), 6), 
                                data_143442b40))
                        
                        zmm2 &= zmm4
                        uint32_t var_548_1[0x4] = zmm3
                        
                        if ((temp0_1205 & 1) != 0)
                            zmm1.d = zmm2[0]
                            var_5c8_1 = zmm1
                        
                        arg9 = arg8
                        zmm6 = var_5d8_1
                        zmm7 = _mm_cmpeq_epi32(zmm7, zmm7)
                        zmm3 = var_4a8_1
                        
                        if ((temp0_1205 & 2) != 0)
                            zmm1 = var_5c8_1
                            var_5c8_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm1, 1), zmm1, 0xe2)
                            
                            if ((temp0_1205 & 4) != 0)
                                goto label_14027055a
                            
                            goto label_1402704ce
                        
                        if ((temp0_1205 & 4) == 0)
                        label_1402704ce:
                            
                            if ((temp0_1205 & 8) != 0)
                                zmm1 = var_5c8_1
                                var_5c8_1 =
                                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                        else
                        label_14027055a:
                            zmm1 = var_5c8_1
                            var_5c8_1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x32), 0x84)
                            
                            if ((temp0_1205 & 8) != 0)
                                zmm1 = var_5c8_1
                                var_5c8_1 =
                                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                        
                        zmm1 = data_1434422d0
                        zmm2 = var_538_1 & zmm1
                        zmm4 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm2, zmm1) & arg6, 0x1f)
                        char temp0_72 = _mm_movemask_ps(zmm4)
                        
                        if (temp0_72 == 0)
                            arg8 = arg7
                            zmm7 = var_4e8_1
                            arg7 = var_588_2
                            zmm2 = __pcmpeqd_xmmdq_memdq(zmm2, data_142d8f750) & not.o(zmm4)
                            
                            if ((temp0_1205 & 1) != 0)
                                arg9[0] = zmm2[0]
                        else
                            int32_t temp0_73[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                            float var_288[0x4]
                            
                            if ((temp0_72 & 1) != 0)
                                arg11 = var_288
                                arg11[0] = zx.o(*zmm12[0].q)[0]
                                zmm3 = var_548_1
                                zmm4 = temp0_73 ^ zmm7
                                
                                if ((temp0_72 & 2) != 0)
                                    arg11 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), 
                                            arg11, 0), 
                                        arg11, 0xe2)
                            else
                                arg11 = var_288
                                zmm3 = var_548_1
                                zmm4 = temp0_73 ^ zmm7
                                
                                if ((temp0_72 & 2) != 0)
                                    arg11 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), 
                                            arg11, 0), 
                                        arg11, 0xe2)
                            
                            zmm1 = data_1434426b0
                            zmm7 = _mm_add_epi64(zmm3, zmm1)
                            zmm6 = _mm_add_epi64(zmm12, zmm1)
                            arg5 = _mm_shuffle_epi32(zmm4, 0x50)
                            zmm4 = _mm_shuffle_epi32(zmm4, 0xfa)
                            
                            if ((temp0_72 & 4) != 0)
                                arg11 = _mm_shuffle_ps(arg11, 
                                    _mm_shuffle_ps(zx.o(*zmm3[0].q), arg11, 0x30), 0x84)
                            
                            zmm1 = arg11
                            zmm12 &= arg5
                            arg5 &= not.o(zmm6)
                            zmm6 = zmm3 & zmm4
                            zmm4 &= not.o(zmm7)
                            
                            if ((temp0_72 & 8) != 0)
                                zmm7 = zmm1
                                zmm1 = _mm_shuffle_ps(zmm7, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), zmm7, 
                                        0x20), 
                                    0x24)
                            
                            arg9 = arg8
                            arg8 = arg7
                            zmm7 = var_4e8_1
                            arg7 = var_588_2
                            zmm3 = var_4a8_1
                            zmm12 |= arg5
                            zmm6 |= zmm4
                            var_288 = zmm1
                            zmm4 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm1, data_143442cd0), data_143442b40))
                            var_548_1 = zmm6
                            zmm6 = var_5d8_1
                            zmm2 = __pcmpeqd_xmmdq_memdq(zmm2, data_142d8f750) & not.o(zmm4)
                            
                            if ((temp0_1205 & 1) != 0)
                                arg9[0] = zmm2[0]
                        
                        arg5 = zmm7
                        zmm7 = zmm3
                        
                        if ((temp0_1205 & 2) != 0)
                            arg9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg9, 1), arg9, 0xe2)
                            
                            if ((temp0_1205 & 4) != 0)
                                goto label_140270a61
                            
                            goto label_1402709ef
                        
                        if ((temp0_1205 & 4) == 0)
                        label_1402709ef:
                            
                            if ((temp0_1205 & 8) != 0)
                                arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm2, arg9, 0x23), 0x24)
                        else
                        label_140270a61:
                            arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm2, arg9, 0x32), 0x84)
                            
                            if ((temp0_1205 & 8) != 0)
                                arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm2, arg9, 0x23), 0x24)
                        
                        zmm1 = data_142fc95e0
                        zmm2 = var_538_1 & zmm1
                        char temp0_133 = _mm_movemask_ps(_mm_slli_epi32(
                            _mm_cmpeq_epi32(zmm2, zmm1) & arg6, 0x1f))
                        
                        if (temp0_133 == 0)
                            zmm4 = arg10
                            arg10 = var_508_4
                            zmm12 = var_5c8_1
                            zmm2 = __pcmpeqd_xmmdq_memdq(zmm2, data_142d8f750) & not.o(zmm3)
                            
                            if ((temp0_1205 & 1) != 0)
                                arg8[0] = zmm2[0]
                        else
                            uint32_t var_278[0x4]
                            
                            if ((temp0_133 & 1) != 0)
                                zmm3 = var_278
                                zmm3[0] = zx.d(*zmm12[0].q)
                                
                                if ((temp0_133 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            else
                                zmm3 = var_278
                                
                                if ((temp0_133 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            
                            zmm4 = arg10
                            arg10 = var_508_4
                            zmm12 = var_5c8_1
                            
                            if ((temp0_133 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*var_548_1.q), zmm3, 0x30), 0x84)
                            
                            if ((temp0_133 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(
                                        zx.o(*__pshufd_xmmdq_memdq_immb(var_548_1, 0x4e).q), zmm3, 
                                        0x20), 
                                    0x24)
                            
                            var_278 = zmm3
                            zmm3 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm3, data_143442cd0), data_143442b40))
                            zmm2 = __pcmpeqd_xmmdq_memdq(zmm2, data_142d8f750) & not.o(zmm3)
                            
                            if ((temp0_1205 & 1) != 0)
                                arg8[0] = zmm2[0]
                        
                        zmm3 = var_5a8_3
                        
                        if ((temp0_1205 & 2) != 0)
                            arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg8, 1), arg8, 0xe2)
                            
                            if ((temp0_1205 & 4) != 0)
                                goto label_140270d95
                            
                            goto label_140270c7f
                        
                        if ((temp0_1205 & 4) == 0)
                        label_140270c7f:
                            
                            if ((temp0_1205 & 8) != 0)
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x23), 0x24)
                        else
                        label_140270d95:
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x32), 0x84)
                            
                            if ((temp0_1205 & 8) != 0)
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x23), 0x24)
                        
                        zmm2 = var_558_3
                    
                    zmm1 = zmm7 & not.o(zmm0 ^ zmm2)
                    
                    if (_mm_movemask_ps(zmm1) == 0)
                        zmm7 = var_578_1
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(var_3b8, data_143442ad0)
                        char temp0_165 = _mm_movemask_ps(zmm7 & not.o(zmm0))
                        
                        if (temp0_165 == 0)
                            zmm7 = var_578_1
                            arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        else
                            char temp37_1 = temp0_165 & 1
                            
                            if (temp37_1 == 0)
                                zmm7 = var_578_1
                                arg6 = _mm_cmpeq_epi32(arg6, arg6)
                                
                                if (temp37_1 != 0)
                                label_140270dbd:
                                    arg9[0] = 0
                                    
                                    if (temp37_1 != 0)
                                        goto label_140270cfe
                                    
                                    goto label_140270dc8
                            else
                                zmm12[0] = zx.o(0)[0]
                                zmm7 = var_578_1
                                arg6 = _mm_cmpeq_epi32(arg6, arg6)
                                
                                if (temp37_1 != 0)
                                    goto label_140270dbd
                            
                            bool cond:159_1
                            bool cond:160_1
                            bool cond:179_1
                            bool cond:180_1
                            
                            if (temp37_1 != 0)
                            label_140270cfe:
                                arg8[0] = 0
                                char temp58_1 = temp0_165 & 2
                                cond:159_1 = temp58_1 == 0
                                cond:160_1 = temp58_1 != 0
                                cond:179_1 = temp58_1 == 0
                                cond:180_1 = temp58_1 != 0
                                
                                if (temp58_1 != 0)
                                    goto label_140270ddf
                                
                                goto label_140270d0c
                            
                        label_140270dc8:
                            char temp57_1 = temp0_165 & 2
                            cond:159_1 = temp57_1 == 0
                            cond:160_1 = temp57_1 != 0
                            cond:179_1 = temp57_1 == 0
                            cond:180_1 = temp57_1 != 0
                            
                            if (temp57_1 == 0)
                            label_140270d0c:
                                
                                if (not(cond:159_1))
                                label_140270d20:
                                    arg9 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg9, 0), arg9, 0xe2)
                                    
                                    if (cond:180_1)
                                        goto label_140270dfd
                                    
                                    goto label_140270d2a
                            else
                            label_140270ddf:
                                zmm12 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm12, 0), zmm12, 0xe2)
                                
                                if (cond:160_1)
                                    goto label_140270d20
                            
                            bool cond:219_1
                            bool cond:220_1
                            bool cond:249_1
                            bool cond:250_1
                            
                            if (not(cond:179_1))
                            label_140270dfd:
                                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                                char temp83_1 = temp0_165 & 4
                                cond:219_1 = temp83_1 == 0
                                cond:220_1 = temp83_1 != 0
                                cond:249_1 = temp83_1 == 0
                                cond:250_1 = temp83_1 != 0
                                
                                if (temp83_1 != 0)
                                    goto label_140270d3c
                                
                                goto label_140270e0a
                            
                        label_140270d2a:
                            char temp82_1 = temp0_165 & 4
                            cond:219_1 = temp82_1 == 0
                            cond:220_1 = temp82_1 != 0
                            cond:249_1 = temp82_1 == 0
                            cond:250_1 = temp82_1 != 0
                            
                            if (temp82_1 == 0)
                            label_140270e0a:
                                
                                if (not(cond:219_1))
                                label_140270e19:
                                    arg9 = _mm_shuffle_ps(arg9, 
                                        _mm_shuffle_ps(zx.o(0), arg9, 0x30), 0x84)
                                    
                                    if (cond:250_1)
                                        goto label_140270d56
                                    
                                    goto label_140270e24
                            else
                            label_140270d3c:
                                zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x30), 
                                    0x84)
                                
                                if (cond:220_1)
                                    goto label_140270e19
                            
                            bool cond:290_1
                            bool cond:291_1
                            bool cond:308_1
                            bool cond:309_1
                            
                            if (not(cond:249_1))
                            label_140270d56:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                                char temp110_1 = temp0_165 & 8
                                cond:290_1 = temp110_1 == 0
                                cond:291_1 = temp110_1 != 0
                                cond:308_1 = temp110_1 == 0
                                cond:309_1 = temp110_1 == 0
                                
                                if (temp110_1 != 0)
                                    goto label_140270e36
                                
                                goto label_140270d64
                            
                        label_140270e24:
                            char temp109_1 = temp0_165 & 8
                            cond:290_1 = temp109_1 == 0
                            cond:291_1 = temp109_1 != 0
                            cond:308_1 = temp109_1 == 0
                            cond:309_1 = temp109_1 == 0
                            
                            if (temp109_1 != 0)
                            label_140270e36:
                                zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x20), 
                                    0x24)
                                
                                if (cond:291_1)
                                    goto label_140270d73
                                
                                goto label_140270e41
                            
                        label_140270d64:
                            
                            if (cond:290_1)
                            label_140270e41:
                                
                                if (not(cond:308_1))
                                    arg8 = _mm_shuffle_ps(arg8, 
                                        _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                            else
                            label_140270d73:
                                arg9 =
                                    _mm_shuffle_ps(arg9, _mm_shuffle_ps(zx.o(0), arg9, 0x20), 0x24)
                                
                                if (not(cond:309_1))
                                    arg8 = _mm_shuffle_ps(arg8, 
                                        _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                        
                        char temp0_191 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm1), 0x1f))
                        
                        if (temp0_191 != 0)
                            char temp48_1 = temp0_191 & 1
                            
                            if (temp48_1 != 0)
                                zmm12[0] = 0
                                
                                if (temp48_1 != 0)
                                    goto label_140270efa
                            else if (temp48_1 != 0)
                            label_140270efa:
                                arg9[0] = 0
                                
                                if (temp48_1 != 0)
                                    goto label_140270e97
                                
                                goto label_140270f01
                            
                            bool cond:177_1
                            bool cond:178_1
                            bool cond:198_1
                            bool cond:199_1
                            
                            if (temp48_1 != 0)
                            label_140270e97:
                                arg8[0] = 0
                                char temp71_1 = temp0_191 & 2
                                cond:177_1 = temp71_1 == 0
                                cond:178_1 = temp71_1 != 0
                                cond:198_1 = temp71_1 == 0
                                cond:199_1 = temp71_1 != 0
                                
                                if (temp71_1 != 0)
                                    goto label_140270f13
                                
                                goto label_140270ea1
                            
                        label_140270f01:
                            char temp70_1 = temp0_191 & 2
                            cond:177_1 = temp70_1 == 0
                            cond:178_1 = temp70_1 != 0
                            cond:198_1 = temp70_1 == 0
                            cond:199_1 = temp70_1 != 0
                            
                            if (temp70_1 == 0)
                            label_140270ea1:
                                
                                if (not(cond:177_1))
                                label_140270eb0:
                                    arg9 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg9, 0), arg9, 0xe2)
                                    
                                    if (cond:199_1)
                                        goto label_140270f28
                                    
                                    goto label_140270eb6
                            else
                            label_140270f13:
                                zmm12 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm12, 0), zmm12, 0xe2)
                                
                                if (cond:178_1)
                                    goto label_140270eb0
                            
                            bool cond:247_1
                            bool cond:248_1
                            bool cond:271_1
                            bool cond:272_1
                            
                            if (not(cond:198_1))
                            label_140270f28:
                                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                                char temp98_1 = temp0_191 & 4
                                cond:247_1 = temp98_1 == 0
                                cond:248_1 = temp98_1 != 0
                                cond:271_1 = temp98_1 == 0
                                cond:272_1 = temp98_1 != 0
                                
                                if (temp98_1 != 0)
                                    goto label_140270ec3
                                
                                goto label_140270f31
                            
                        label_140270eb6:
                            char temp97_1 = temp0_191 & 4
                            cond:247_1 = temp97_1 == 0
                            cond:248_1 = temp97_1 != 0
                            cond:271_1 = temp97_1 == 0
                            cond:272_1 = temp97_1 != 0
                            
                            if (temp97_1 == 0)
                            label_140270f31:
                                
                                if (not(cond:247_1))
                                label_140270f3b:
                                    arg9 = _mm_shuffle_ps(arg9, 
                                        _mm_shuffle_ps(zx.o(0), arg9, 0x30), 0x84)
                                    
                                    if (cond:272_1)
                                        goto label_140270ed4
                                    
                                    goto label_140270f42
                            else
                            label_140270ec3:
                                zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x30), 
                                    0x84)
                                
                                if (cond:248_1)
                                    goto label_140270f3b
                            
                            bool cond:306_1
                            bool cond:307_1
                            bool cond:325_1
                            bool cond:326_1
                            
                            if (not(cond:271_1))
                            label_140270ed4:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                                char temp120_1 = temp0_191 & 8
                                cond:306_1 = temp120_1 == 0
                                cond:307_1 = temp120_1 != 0
                                cond:325_1 = temp120_1 == 0
                                cond:326_1 = temp120_1 == 0
                                
                                if (temp120_1 != 0)
                                    goto label_140270f4f
                                
                                goto label_140270ede
                            
                        label_140270f42:
                            char temp119_1 = temp0_191 & 8
                            cond:306_1 = temp119_1 == 0
                            cond:307_1 = temp119_1 != 0
                            cond:325_1 = temp119_1 == 0
                            cond:326_1 = temp119_1 == 0
                            
                            if (temp119_1 != 0)
                            label_140270f4f:
                                zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x20), 
                                    0x24)
                                
                                if (cond:307_1)
                                    goto label_140270ee8
                                
                                goto label_140270f56
                            
                        label_140270ede:
                            
                            if (cond:306_1)
                            label_140270f56:
                                
                                if (not(cond:325_1))
                                    arg8 = _mm_shuffle_ps(arg8, 
                                        _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                            else
                            label_140270ee8:
                                arg9 =
                                    _mm_shuffle_ps(arg9, _mm_shuffle_ps(zx.o(0), arg9, 0x20), 0x24)
                                
                                if (not(cond:326_1))
                                    arg8 = _mm_shuffle_ps(arg8, 
                                        _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
            
            zmm4 = _mm_cmpeq_epi32(zmm4, zmm3) & not.o(arg5)
            char temp0_1241 = _mm_movemask_ps(zmm4)
            
            if (temp0_1241 == 0)
                arg11 = var_538_1
                zmm6 = var_5b8
                zmm11 = zx.o(0)
                rax_72 = _mm_movemask_ps(arg5 ^ arg6)
                
                if (rax_72 != 0)
                    goto label_140275783
                
                var_5c8 = zmm12
            else
                zmm0 = _mm_shuffle_epi32(zmm3, 0xf5)
                arg11 = _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(zmm3, var_4d8), 0xe8), 
                    _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(zmm0, var_198_1), 0xe8).q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), arg11)
                zmm1 = _mm_shuffle_epi32(arg11, 0x4e)
                arg11 = _mm_unpacklo_epi32(arg11, zmm0.q)
                zmm1 = _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1).q)
                uint128_t var_4a8_2 = zmm1
                zmm0 = __paddq_xmmdq_memdq(zmm1, var_568_2)
                uint128_t var_468_2 = _mm_add_epi64(__paddq_xmmdq_memdq(arg11, var_498_2), arg7)
                float var_5a8_1[0x4] = _mm_add_epi64(zmm0, zmm6)
                zmm11 &= zmm4
                float var_558_4[0x4] = arg9
                int32_t var_598_4[0x4] = zmm4
                float var_5c8_4[0x4] = zmm12
                uint128_t var_5e8
                uint128_t var_518
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm11, 0x1f)) == 0)
                    arg6 = var_518
                    zmm11 = zx.o(0)
                else
                    arg10 = arg8
                    arg8 = var_5b8
                    zmm0 = _mm_cmpeq_epi32(var_418_1, zx.o(0))
                    arg6 = zmm11
                    uint128_t var_418_2 = zmm0
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm11 & zmm0, 0x1f), 0x1f)
                    char temp0_1262 = _mm_movemask_ps(zmm1)
                    float var_478_2[0x4] = arg11
                    
                    if (temp0_1262 == 0)
                        arg11 = var_518
                    else
                        uint128_t var_548_3 = arg10
                        zmm3 = __paddq_xmmdq_memdq(var_4f8_1, var_568_2)
                        int32_t temp0_1265[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(var_4b8_1, var_498_2), arg11)
                        zmm3 = __paddq_xmmdq_memdq(zmm3, var_4a8_2)
                        zmm0 = data_1434426c0
                        arg5 = zmm0
                        zmm3 = _mm_add_epi64(zmm3, zmm0)
                        int32_t temp0_1268[0x4] = _mm_add_epi64(temp0_1265, zmm0)
                        zmm0 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm4 = temp0_1268 & zmm0
                        zmm2 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm3 &= zmm2
                        int64_t rax_254 = _mm_shuffle_epi32(zmm4, 0x4e).q
                        void* rbp_22 = arg12 + rax_254
                        zmm7 = *(arg12 + rax_254)
                        int64_t rax_255 = zmm3[0].q
                        void* rsi_5 = arg12 + rax_255
                        arg10 = *(arg12 + rax_255)
                        int64_t rbx_11 = _mm_shuffle_epi32(zmm3, 0x4e).q
                        void* rax_256 = arg12 + rbx_11
                        arg7 = *(arg12 + rbx_11)
                        zmm3 = zmm0 & arg5
                        zmm6 = zmm2 & arg5
                        void* rdi_29 = zmm4[0].q + arg12
                        zmm1 = *(zmm3[0].q + rdi_29)
                        zmm4 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rbp_22)
                        arg5 = *(zmm6.q + rsi_5)
                        zmm12 = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rax_256)
                        zmm3 = data_1434426e0
                        zmm0 &= zmm3
                        zmm2 &= zmm3
                        zmm3 = *(zmm0.q + rdi_29)
                        zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rbp_22)
                        zmm6 = *(zmm2[0].q + rsi_5)
                        zmm11 = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rax_256)
                        bool cond:80_1
                        bool cond:81_1
                        
                        if ((temp0_1262 & 1) == 0)
                            char temp31_1 = temp0_1262 & 1
                            cond:80_1 = temp31_1 != 0
                            cond:81_1 = temp31_1 == 0
                            
                            if (temp31_1 == 0)
                                goto label_140270004
                            
                            goto label_1402756a4
                        
                        arg8[0] = (*rdi_29)[0]
                        char temp30_1 = temp0_1262 & 1
                        cond:80_1 = temp30_1 != 0
                        cond:81_1 = temp30_1 == 0
                        
                        if (temp30_1 == 0)
                        label_140270004:
                            
                            if (cond:81_1)
                                goto label_1402756be
                            
                            goto label_14027000e
                        
                    label_1402756a4:
                        zmm2 = var_518
                        zmm2[0] = zmm1.d
                        var_518 = zmm2
                        bool cond:108_1
                        bool cond:109_1
                        bool cond:127_1
                        bool cond:128_1
                        
                        if (not(cond:80_1))
                        label_1402756be:
                            char temp43_1 = temp0_1262 & 2
                            cond:108_1 = temp43_1 != 0
                            cond:109_1 = temp43_1 == 0
                            cond:127_1 = temp43_1 != 0
                            cond:128_1 = temp43_1 == 0
                            
                            if (temp43_1 == 0)
                                goto label_14027001f
                            
                            goto label_1402756d1
                        
                    label_14027000e:
                        zmm1.d = zmm3[0]
                        var_5e8 = zmm1
                        char temp42_1 = temp0_1262 & 2
                        cond:108_1 = temp42_1 != 0
                        cond:109_1 = temp42_1 == 0
                        cond:127_1 = temp42_1 != 0
                        cond:128_1 = temp42_1 == 0
                        
                        if (temp42_1 == 0)
                        label_14027001f:
                            arg9 = var_558_4
                            zmm7 = var_578_1
                            
                            if (cond:109_1)
                                goto label_1402756e9
                            
                            goto label_14027003f
                        
                    label_1402756d1:
                        arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg8, 0), arg8, 0xe2)
                        arg9 = var_558_4
                        zmm7 = var_578_1
                        
                        if (not(cond:108_1))
                        label_1402756e9:
                            
                            if (cond:128_1)
                                goto label_140270051
                            
                            goto label_1402756fb
                        
                    label_14027003f:
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, var_518, 0), var_518, 0xe2)
                        var_518 = zmm4
                        bool cond:157_1
                        bool cond:158_1
                        bool cond:175_1
                        bool cond:176_1
                        
                        if (not(cond:127_1))
                        label_140270051:
                            char temp65_1 = temp0_1262 & 4
                            cond:157_1 = temp65_1 != 0
                            cond:158_1 = temp65_1 == 0
                            cond:175_1 = temp65_1 != 0
                            cond:176_1 = temp65_1 == 0
                            
                            if (temp65_1 == 0)
                                goto label_140275708
                            
                            goto label_14027005f
                        
                    label_1402756fb:
                        var_5e8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, var_5e8, 0), var_5e8, 0xe2)
                        char temp64_1 = temp0_1262 & 4
                        cond:157_1 = temp64_1 != 0
                        cond:158_1 = temp64_1 == 0
                        cond:175_1 = temp64_1 != 0
                        cond:176_1 = temp64_1 == 0
                        
                        if (temp64_1 == 0)
                        label_140275708:
                            arg11 = var_518
                            
                            if (cond:158_1)
                                goto label_140270073
                            
                            goto label_14027571c
                        
                    label_14027005f:
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg10, arg8, 0x30), 0x84)
                        arg11 = var_518
                        
                        if (not(cond:157_1))
                        label_140270073:
                            arg10 = var_548_3
                            
                            if (cond:176_1)
                                goto label_140275730
                            
                            goto label_14027008e
                        
                    label_14027571c:
                        arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(arg5, arg11, 0x30), 0x84)
                        arg10 = var_548_3
                        bool cond:217_1
                        bool cond:218_1
                        bool cond:245_1
                        bool cond:246_1
                        
                        if (not(cond:175_1))
                        label_140275730:
                            zmm6 = var_5d8_1
                            char temp91_1 = temp0_1262 & 8
                            cond:217_1 = temp91_1 != 0
                            cond:218_1 = temp91_1 == 0
                            cond:245_1 = temp91_1 == 0
                            cond:246_1 = temp91_1 != 0
                            
                            if (temp91_1 == 0)
                                goto label_1402700a1
                            
                            goto label_140275744
                        
                    label_14027008e:
                        var_5e8 = _mm_shuffle_ps(var_5e8, _mm_shuffle_ps(zmm6, var_5e8, 0x30), 0x84)
                        zmm6 = var_5d8_1
                        char temp90_1 = temp0_1262 & 8
                        cond:217_1 = temp90_1 != 0
                        cond:218_1 = temp90_1 == 0
                        cond:245_1 = temp90_1 == 0
                        cond:246_1 = temp90_1 != 0
                        
                        if (temp90_1 == 0)
                        label_1402700a1:
                            
                            if (cond:218_1)
                                goto label_14027574f
                            
                            goto label_1402700ac
                        
                    label_140275744:
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg7, arg8, 0x20), 0x24)
                        
                        if (cond:217_1)
                        label_1402700ac:
                            arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm12, arg11, 0x20), 0x24)
                            
                            if (not(cond:245_1))
                                var_5e8 = _mm_shuffle_ps(var_5e8, 
                                    _mm_shuffle_ps(zmm11, var_5e8, 0x20), 0x24)
                        else
                        label_14027574f:
                            
                            if (cond:246_1)
                                var_5e8 = _mm_shuffle_ps(var_5e8, 
                                    _mm_shuffle_ps(zmm11, var_5e8, 0x20), 0x24)
                    
                    zmm3 = var_418_2 & not.o(arg6)
                    zmm12 = zmm3
                    uint32_t temp0_21[0x4] = _mm_slli_epi32(zmm3, 0x1f)
                    char temp0_22 = _mm_movemask_ps(temp0_21)
                    
                    if (temp0_22 == 0)
                        zmm4 = var_598_4
                        var_5b8 = arg8
                        arg8 = arg10
                        zmm12 = var_5c8_4
                        arg10 = var_508_4
                        arg7 = var_588_2
                        zmm11 = zx.o(0)
                        arg6 = arg11
                        arg11 = var_478_2
                    else
                        zmm0 = zmm7
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_538_1, 0x1f), 0x1f)
                        zmm3 = _mm_srai_epi32(temp0_21, 0x1f) & zmm2
                        arg6 = var_468_2
                        arg7 = arg6
                        zmm1 = var_5a8_1
                        
                        if (_mm_movemask_ps(zmm3) != 0)
                            zmm0 = data_1434426c0
                            int32_t temp0_27[0x4] = _mm_add_epi64(var_5a8_1, zmm0)
                            zmm1 = _mm_add_epi64(arg6, zmm0)
                            arg5 = zmm3 ^ data_142d3f800
                            arg7 = _mm_shuffle_epi32(arg5, 0x50)
                            arg7 = (arg7 & not.o(zmm1)) | (arg6 & arg7)
                            zmm1 = _mm_shuffle_epi32(arg5, 0xfa)
                            zmm1 = (zmm1 & not.o(temp0_27)) | (var_5a8_1 & zmm1)
                            int32_t temp0_31[0x4] = __paddq_xmmdq_memdq(var_4f8_1, var_568_2)
                            arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4b8_1, var_498_2), 
                                var_478_2)
                            int32_t temp0_35[0x4] =
                                _mm_add_epi64(__paddq_xmmdq_memdq(temp0_31, var_4a8_2), zmm0)
                            arg5 = _mm_add_epi64(arg5, zmm0)
                            zmm0 = var_578_1
                            arg9 = var_558_4
                            zmm6 = _mm_shuffle_epi32(zmm3, 0x50) & arg5
                            zmm3 = _mm_shuffle_epi32(zmm3, 0xfa) & temp0_35
                            zmm4 = *(arg12 + zmm6.q)
                            arg5 = _mm_shuffle_epi32(zmm6, 0x4e)
                            zmm6 = var_5d8_1
                            zmm4 = _mm_unpacklo_ps(zmm4, (*(arg12 + arg5[0].q))[0].q)
                            float temp0_42[0x4] = _mm_unpacklo_ps(*(arg12 + zmm3[0].q), 
                                (*(arg12 + _mm_shuffle_epi32(zmm3, 0x4e)[0].q))[0].q)
                            zmm4 = zmm4[0].q | temp0_42[0].q << 0x40
                        
                        zmm2 &= zmm4
                        
                        if ((temp0_22 & 1) != 0)
                            arg8[0] = zmm2[0]
                        
                        zmm11 = arg8
                        arg8 = arg10
                        arg6 = arg11
                        arg11 = var_478_2
                        
                        if ((temp0_22 & 2) != 0)
                            zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm11, 1), zmm11, 0xe2)
                            zmm7 = zmm0
                            
                            if ((temp0_22 & 4) != 0)
                                goto label_140270400
                            
                            goto label_14027026d
                        
                        zmm7 = zmm0
                        
                        if ((temp0_22 & 4) == 0)
                        label_14027026d:
                            
                            if ((temp0_22 & 8) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm2, zmm11, 0x23), 0x24)
                        else
                        label_140270400:
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm2, zmm11, 0x32), 0x84)
                            
                            if ((temp0_22 & 8) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm2, zmm11, 0x23), 0x24)
                        
                        zmm2 = data_1434422d0
                        zmm3 = var_538_1 & zmm2
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm3, zmm2) & zmm12, 0x1f)
                        char temp0_49 = _mm_movemask_ps(zmm2)
                        float var_3f8[0x4]
                        
                        if (temp0_49 != 0)
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f) ^ data_142d3f800
                            
                            if ((temp0_49 & 1) != 0)
                                var_3f8[0] = (*arg7.q)[0]
                            
                            zmm4 = data_1434426c0
                            zmm6 = _mm_add_epi64(zmm1, zmm4)
                            zmm7 = _mm_add_epi64(arg7, zmm4)
                            arg5 = _mm_shuffle_epi32(zmm2, 0x50)
                            zmm4 = _mm_shuffle_epi32(zmm2, 0xfa)
                            
                            if ((temp0_49 & 2) != 0)
                                zmm0 = var_3f8
                                var_3f8 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, zmm0, 0), 
                                    zmm0, 0xe2)
                            
                            arg7 &= arg5
                            arg5 &= not.o(zmm7)
                            zmm2 = zmm1 & zmm4
                            zmm4 &= not.o(zmm6)
                            
                            if ((temp0_49 & 4) != 0)
                                zmm0 = var_3f8
                                var_3f8 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(*zmm1.q, zmm0, 0x30), 0x84)
                            
                            arg9 = var_558_4
                            zmm7 = var_578_1
                            zmm6 = var_5d8_1
                            arg7 |= arg5
                            zmm2 |= zmm4
                            
                            if ((temp0_49 & 8) == 0)
                                zmm3 = __pcmpeqd_xmmdq_memdq(zmm3, data_142d8f750) & not.o(var_3f8)
                                
                                if ((temp0_22 & 1) == 0)
                                    goto label_14027059a
                                
                                goto label_1402703b0
                            
                            zmm0 = var_3f8
                            var_3f8 = _mm_shuffle_ps(zmm0, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e).q, zmm0, 0x20), 0x24)
                            zmm3 = __pcmpeqd_xmmdq_memdq(zmm3, data_142d8f750) & not.o(var_3f8)
                            
                            if ((temp0_22 & 1) == 0)
                                goto label_14027059a
                            
                            goto label_1402703b0
                        
                        zmm2 = zmm1
                        zmm3 = __pcmpeqd_xmmdq_memdq(zmm3, data_142d8f750) & not.o(var_3f8)
                        
                        if ((temp0_22 & 1) == 0)
                        label_14027059a:
                            
                            if ((temp0_22 & 2) == 0)
                                goto label_1402703bf
                            
                            goto label_1402705b1
                        
                    label_1402703b0:
                        arg6[0] = zmm3[0]
                        
                        if ((temp0_22 & 2) == 0)
                        label_1402703bf:
                            
                            if ((temp0_22 & 4) == 0)
                                goto label_1402705c3
                            
                            goto label_1402703d1
                        
                    label_1402705b1:
                        arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, arg6, 1), arg6, 0xe2)
                        
                        if ((temp0_22 & 4) != 0)
                        label_1402703d1:
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm3, arg6, 0x32), 0x84)
                            var_5b8 = zmm11
                            
                            if ((temp0_22 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm3, arg6, 0x23), 0x24)
                        else
                        label_1402705c3:
                            var_5b8 = zmm11
                            
                            if ((temp0_22 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm3, arg6, 0x23), 0x24)
                        
                        zmm3 = data_142fc95e0
                        zmm1 = var_538_1 & zmm3
                        char temp0_83 = _mm_movemask_ps(_mm_slli_epi32(
                            zmm12 & _mm_cmpeq_epi32(zmm1, zmm3), 0x1f))
                        int32_t var_3e8[0x4]
                        
                        if (temp0_83 != 0)
                            if ((temp0_83 & 1) != 0)
                                var_3e8[0] = (*arg7.q)[0]
                            
                            if ((temp0_83 & 2) != 0)
                                zmm3 = var_3e8
                                var_3e8 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, zmm3, 0), 
                                    zmm3, 0xe2)
                            
                            zmm4 = var_598_4
                            zmm11 = zx.o(0)
                            zmm12 = var_5c8_4
                            arg10 = var_508_4
                            arg7 = var_588_2
                            
                            if ((temp0_83 & 4) == 0)
                                if ((temp0_83 & 8) != 0)
                                    goto label_140270ad2
                                
                                goto label_140270695
                            
                            zmm3 = var_3e8
                            var_3e8 =
                                _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm2[0].q, zmm3, 0x30), 0x84)
                            
                            if ((temp0_83 & 8) == 0)
                            label_140270695:
                                zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(var_3e8)
                                
                                if ((temp0_22 & 1) == 0)
                                    goto label_14027074e
                                
                                goto label_1402706ac
                            
                        label_140270ad2:
                            zmm0 = *_mm_shuffle_epi32(zmm2, 0x4e).q
                            zmm2 = var_3e8
                            var_3e8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x20), 0x24)
                            zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(var_3e8)
                            
                            if ((temp0_22 & 1) == 0)
                                goto label_14027074e
                            
                            goto label_1402706ac
                        
                        zmm4 = var_598_4
                        zmm11 = zx.o(0)
                        zmm12 = var_5c8_4
                        arg10 = var_508_4
                        arg7 = var_588_2
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(var_3e8)
                        
                        if ((temp0_22 & 1) == 0)
                        label_14027074e:
                            
                            if ((temp0_22 & 2) == 0)
                                goto label_1402706be
                            
                            goto label_14027075b
                        
                    label_1402706ac:
                        zmm0.d = zmm1.d
                        var_5e8 = zmm0
                        
                        if ((temp0_22 & 2) == 0)
                        label_1402706be:
                            
                            if ((temp0_22 & 4) == 0)
                                goto label_140270775
                            
                            goto label_1402706cb
                        
                    label_14027075b:
                        zmm2 = var_5e8
                        var_5e8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                        
                        if ((temp0_22 & 4) != 0)
                        label_1402706cb:
                            zmm2 = var_5e8
                            var_5e8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x32), 0x84)
                            
                            if ((temp0_22 & 8) != 0)
                                var_5e8 = _mm_shuffle_ps(var_5e8, 
                                    _mm_shuffle_ps(zmm1, var_5e8, 0x23), 0x24)
                        else
                        label_140270775:
                            
                            if ((temp0_22 & 8) != 0)
                                var_5e8 = _mm_shuffle_ps(var_5e8, 
                                    _mm_shuffle_ps(zmm1, var_5e8, 0x23), 0x24)
                
                var_518 = arg6
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm4 & arg10, 0x1f)) == 0)
                    goto label_140271bcd
                
                int32_t temp0_100[0x4] =
                    _mm_srai_epi32(_mm_slli_epi32(_mm_and_ps(zmm4, zmm7), 0x1f), 0x1f)
                char temp0_101 = _mm_movemask_ps(temp0_100)
                
                if (temp0_101 == 0)
                    zmm11 = zx.o(0)
                    arg6 = var_518
                else
                    zmm0 = _mm_srai_epi32(_mm_slli_epi32(var_538_1, 0x1f), 0x1f) & zmm7
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f) & zmm0
                    uint32_t temp0_106 = _mm_movemask_ps(zmm1)
                    zmm12 = zx.o(0)
                    
                    if (temp0_106 == 0)
                        arg9 = arg7
                        arg7 = zx.o(0)
                        arg10 = zx.o(0)
                    else
                        char r10_1 = temp0_106.b
                        uint128_t var_268
                        
                        if ((r10_1 & 1) != 0)
                            zmm6.d = (*arg7.q)[0]
                            
                            if ((r10_1 & 2) != 0)
                                zmm6 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, zmm6, 0), 
                                    zmm6, 0xe2)
                        else
                            zmm6 = var_268
                            
                            if ((r10_1 & 2) != 0)
                                zmm6 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, zmm6, 0), 
                                    zmm6, 0xe2)
                        
                        if ((r10_1 & 4) == 0)
                            zmm7 = arg7
                            
                            if ((r10_1 & 8) != 0)
                                goto label_140270fa8
                            
                            goto label_140270b59
                        
                        zmm6 =
                            _mm_shuffle_ps(zmm6, _mm_shuffle_ps(*var_5d8_1[0].q, zmm6, 0x30), 0x84)
                        zmm7 = arg7
                        char rdi_1
                        
                        if ((r10_1 & 8) != 0)
                        label_140270fa8:
                            zmm6 = _mm_shuffle_ps(zmm6, 
                                _mm_shuffle_ps(*__pshufd_xmmdq_memdq_immb(var_5d8_1, 0x4e)[0].q, 
                                    zmm6, 0x20), 
                                0x24)
                            rdi_1 = _mm_movemask_ps(zmm0)
                            arg7 = zx.o(0)
                            
                            if ((rdi_1 & 1) != 0)
                                goto label_140270b70
                            
                            goto label_140270fbe
                        
                    label_140270b59:
                        rdi_1 = _mm_movemask_ps(zmm0)
                        arg7 = zx.o(0)
                        
                        if ((rdi_1 & 1) == 0)
                        label_140270fbe:
                            zmm1 ^= data_142d3f800
                            
                            if ((rdi_1 & 2) != 0)
                                arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, arg7, 1), arg7, 0xe2)
                        else
                        label_140270b70:
                            arg7.d = zmm6.d
                            zmm1 ^= data_142d3f800
                            
                            if ((rdi_1 & 2) != 0)
                                arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, arg7, 1), arg7, 0xe2)
                        
                        zmm3 = __paddq_xmmdq_memdq(zmm7, data_1434426c0)
                        zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                        
                        if ((rdi_1 & 4) != 0)
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm6, arg7, 0x32), 0x84)
                        
                        zmm0 = zmm2 & not.o(zmm3)
                        
                        if ((rdi_1 & 8) != 0)
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm6, arg7, 0x23), 0x24)
                        
                        zmm3 = __paddq_xmmdq_memdq(var_5d8_1, data_1434426c0)
                        arg5 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm7 = (zmm7 & zmm2) | zmm0
                        uint128_t var_258
                        
                        if ((r10_1 & 1) != 0)
                            zmm1.d = (*zmm7[0].q).d
                        else
                            zmm1 = var_258
                        
                        zmm0 = arg5 & not.o(zmm3)
                        zmm3 = var_5d8_1 & arg5
                        
                        if ((r10_1 & 2) == 0)
                            zmm3 |= zmm0
                            
                            if ((r10_1 & 4) != 0)
                                goto label_1402710f9
                            
                            goto label_140271082
                        
                        zmm4 = zmm1
                        zmm1 = _mm_shuffle_ps(
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm7, 0x4e).q, zmm4, 0), zmm4, 0xe2)
                        zmm4 = var_598_4
                        zmm3 |= zmm0
                        
                        if ((r10_1 & 4) != 0)
                        label_1402710f9:
                            zmm1 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*zmm3[0].q, zmm1, 0x30), 0x84)
                            var_268 = zmm6
                            
                            if ((r10_1 & 8) == 0)
                                goto label_14027108c
                            
                            goto label_14027111d
                        
                    label_140271082:
                        var_268 = zmm6
                        
                        if ((r10_1 & 8) == 0)
                        label_14027108c:
                            zmm6 = var_5d8_1
                            arg10 = zx.o(0)
                            
                            if ((rdi_1 & 1) == 0)
                                goto label_140271136
                            
                            goto label_1402710a6
                        
                    label_14027111d:
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm1, 0x20), 0x24)
                        zmm6 = var_5d8_1
                        arg10 = zx.o(0)
                        
                        if ((rdi_1 & 1) != 0)
                        label_1402710a6:
                            arg10.d = zmm1.d
                            arg5 = _mm_slli_epi32(arg5, 0x1f)
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            
                            if ((rdi_1 & 2) != 0)
                                arg10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg10, 1), arg10, 0xe2)
                        else
                        label_140271136:
                            arg5 = _mm_slli_epi32(arg5, 0x1f)
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            
                            if ((rdi_1 & 2) != 0)
                                arg10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg10, 1), arg10, 0xe2)
                        
                        arg5 = _mm_srai_epi32(arg5, 0x1f)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                        zmm0 = data_1434426c0
                        zmm3 = _mm_add_epi64(zmm3, zmm0)
                        zmm7 = _mm_add_epi64(zmm7, zmm0)
                        
                        if ((rdi_1 & 4) != 0)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm1, arg10, 0x32), 0x84)
                        
                        uint128_t var_588_1 = var_588_2 & zmm2
                        zmm2 &= not.o(zmm7)
                        var_258 = zmm1
                        
                        if ((rdi_1 & 8) != 0)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm1, arg10, 0x23), 0x24)
                        
                        zmm7 = var_578_1
                        arg9 = var_588_1 | zmm2
                        zmm6 = (zmm6 & arg5) | (arg5 & not.o(zmm3))
                    
                    zmm1 = data_1434422d0
                    zmm0 = _mm_cmpeq_epi32(var_538_1 & zmm1, zmm1) & zmm7
                    arg5 = _mm_srai_epi32(_mm_slli_epi32(zmm4 & zmm0, 0x1f), 0x1f)
                    char temp0_251 = _mm_movemask_ps(arg5)
                    
                    if (temp0_251 == 0)
                        arg5 = zx.o(0)
                    else
                        float var_3a8[0x4]
                        
                        if ((temp0_251 & 1) != 0)
                            zmm2 = var_3a8
                            zmm2[0] = (*arg9[0].q).d
                            
                            if ((temp0_251 & 2) != 0)
                                zmm2 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg9, 0x4e).q, zmm2, 0), 
                                    zmm2, 0xe2)
                        else
                            zmm2 = var_3a8
                            
                            if ((temp0_251 & 2) != 0)
                                zmm2 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg9, 0x4e).q, zmm2, 0), 
                                    zmm2, 0xe2)
                        
                        if ((temp0_251 & 4) != 0)
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm6.q, zmm2, 0x30), 0x84)
                            
                            if ((temp0_251 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm2, 0x20), 
                                    0x24)
                        else if ((temp0_251 & 8) != 0)
                            zmm2 = _mm_shuffle_ps(zmm2, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm2, 0x20), 0x24)
                        
                        var_3a8 = zmm2
                        char temp0_258 = _mm_movemask_ps(zmm0)
                        zmm12 = zx.o(0)
                        
                        if ((temp0_258 & 1) != 0)
                            zmm12 = zx.o(0)
                            zmm12[0] = var_3a8.d
                        
                        arg5 ^= data_142d3f800
                        
                        if ((temp0_258 & 2) != 0)
                            zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(var_3a8, zmm12, 1), zmm12, 0xe2)
                        
                        zmm1 = __paddq_xmmdq_memdq(arg9, data_1434426c0)
                        zmm2 = _mm_shuffle_epi32(arg5, 0x50)
                        
                        if ((temp0_258 & 4) != 0)
                            zmm12 =
                                _mm_shuffle_ps(zmm12, _mm_shuffle_ps(var_3a8, zmm12, 0x32), 0x84)
                        
                        zmm0 = zmm2 & not.o(zmm1)
                        
                        if ((temp0_258 & 8) != 0)
                            zmm12 =
                                _mm_shuffle_ps(zmm12, _mm_shuffle_ps(var_3a8, zmm12, 0x23), 0x24)
                        
                        zmm1 = __paddq_xmmdq_memdq(zmm6, data_1434426c0)
                        zmm7 = _mm_shuffle_epi32(arg5, 0xfa)
                        zmm3 = (arg9 & zmm2) | zmm0
                        float var_398[0x4]
                        
                        if ((temp0_251 & 1) != 0)
                            arg5 = var_398
                            arg5[0] = (*zmm3[0].q).d
                        else
                            arg5 = var_398
                        
                        zmm4 = zmm7 & not.o(zmm1)
                        zmm0 = zmm6 & zmm7
                        
                        if ((temp0_251 & 2) == 0)
                            zmm0 |= zmm4
                            
                            if ((temp0_251 & 4) != 0)
                                goto label_1402713fe
                            
                            goto label_14027138c
                        
                        arg5 = _mm_shuffle_ps(
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, arg5, 0), arg5, 0xe2)
                        zmm0 |= zmm4
                        
                        if ((temp0_251 & 4) != 0)
                        label_1402713fe:
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(*zmm0.q, arg5, 0x30), 0x84)
                            zmm4 = var_598_4
                            
                            if ((temp0_251 & 8) == 0)
                                goto label_140271396
                            
                            goto label_140271422
                        
                    label_14027138c:
                        zmm4 = var_598_4
                        
                        if ((temp0_251 & 8) == 0)
                        label_140271396:
                            var_398 = arg5
                            arg5 = zx.o(0)
                            
                            if ((temp0_258 & 1) == 0)
                                goto label_140271437
                            
                            goto label_1402713ab
                        
                    label_140271422:
                        var_398 = _mm_shuffle_ps(arg5, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm0, 0x4e).q, arg5, 0x20), 0x24)
                        arg5 = zx.o(0)
                        
                        if ((temp0_258 & 1) != 0)
                        label_1402713ab:
                            arg5 = zx.o(0)
                            arg5[0] = var_398.d
                            zmm7 = _mm_slli_epi32(zmm7, 0x1f)
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            
                            if ((temp0_258 & 2) != 0)
                                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(var_398, arg5, 1), arg5, 0xe2)
                        else
                        label_140271437:
                            zmm7 = _mm_slli_epi32(zmm7, 0x1f)
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            
                            if ((temp0_258 & 2) != 0)
                                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(var_398, arg5, 1), arg5, 0xe2)
                        
                        zmm7 = _mm_srai_epi32(zmm7, 0x1f)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                        zmm1 = data_1434426c0
                        zmm0 = _mm_add_epi64(zmm0, zmm1)
                        zmm3 = _mm_add_epi64(zmm3, zmm1)
                        
                        if ((temp0_258 & 4) != 0)
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(var_398, arg5, 0x32), 0x84)
                        
                        if ((temp0_258 & 8) != 0)
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(var_398, arg5, 0x23), 0x24)
                        
                        arg9 = (arg9 & zmm2) | (zmm2 & not.o(zmm3))
                        zmm6 = (zmm6 & zmm7) | (zmm7 & not.o(zmm0))
                        zmm7 = var_578_1
                    
                    zmm1 = data_142fc95e0
                    zmm0 = _mm_cmpeq_epi32(var_538_1 & zmm1, zmm1) & zmm7
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(_mm_and_ps(zmm4, zmm0), 0x1f), 0x1f)
                    char temp0_297 = _mm_movemask_ps(zmm2)
                    
                    if (temp0_297 == 0)
                        zmm7 = zx.o(0)
                        zmm2 = zx.o(0)
                    else
                        if ((temp0_297 & 1) == 0)
                            if ((temp0_297 & 2) != 0)
                                goto label_140271584
                            
                            goto label_140271501
                        
                        uint128_t var_448
                        zmm3 = var_448
                        zmm3[0] = (*arg9[0].q).d
                        var_448 = zmm3
                        
                        if ((temp0_297 & 2) != 0)
                        label_140271584:
                            zmm3 = var_448
                            var_448 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg9, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                            
                            if ((temp0_297 & 4) == 0)
                                goto label_14027150a
                            
                            goto label_1402715ae
                        
                    label_140271501:
                        
                        if ((temp0_297 & 4) == 0)
                        label_14027150a:
                            
                            if ((temp0_297 & 8) != 0)
                                goto label_1402715dd
                            
                            goto label_140271513
                        
                    label_1402715ae:
                        zmm3 = var_448
                        var_448 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm6.q, zmm3, 0x30), 0x84)
                        char rdi_3
                        
                        if ((temp0_297 & 8) != 0)
                        label_1402715dd:
                            zmm3 = var_448
                            var_448 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm3, 0x20), 0x24)
                            rdi_3 = _mm_movemask_ps(zmm0)
                            zmm7 = zx.o(0)
                            
                            if ((rdi_3 & 1) != 0)
                                goto label_140271523
                            
                            goto label_140271605
                        
                    label_140271513:
                        rdi_3 = _mm_movemask_ps(zmm0)
                        zmm7 = zx.o(0)
                        
                        if ((rdi_3 & 1) == 0)
                        label_140271605:
                            zmm2 ^= data_142d3f800
                            
                            if ((rdi_3 & 2) != 0)
                                zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(var_448, zmm7, 1), zmm7, 0xe2)
                        else
                        label_140271523:
                            zmm7 = zx.o(0)
                            zmm7[0] = var_448.d
                            zmm2 ^= data_142d3f800
                            
                            if ((rdi_3 & 2) != 0)
                                zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(var_448, zmm7, 1), zmm7, 0xe2)
                        
                        zmm0 = __paddq_xmmdq_memdq(arg9, data_1434426c0)
                        uint32_t temp0_311[0x4] = _mm_shuffle_epi32(zmm2, 0x50)
                        
                        if ((rdi_3 & 4) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(var_448, zmm7, 0x32), 0x84)
                        
                        zmm3 = temp0_311 & not.o(zmm0)
                        
                        if ((rdi_3 & 8) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(var_448, zmm7, 0x23), 0x24)
                        
                        int32_t temp0_316[0x4] = __paddq_xmmdq_memdq(zmm6, data_1434426c0)
                        zmm0 = _mm_shuffle_epi32(zmm2, 0xfa)
                        arg9 = (arg9 & temp0_311) | zmm3
                        uint32_t var_248[0x4]
                        
                        if ((temp0_297 & 1) != 0)
                            zmm3 = var_248
                            zmm3[0] = (*arg9[0].q).d
                            zmm6 &= zmm0
                            zmm0 &= not.o(temp0_316)
                            
                            if ((temp0_297 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg9, 0x4e).q, zmm3, 0), 
                                    zmm3, 0xe2)
                        else
                            zmm3 = var_248
                            zmm6 &= zmm0
                            zmm0 &= not.o(temp0_316)
                            
                            if ((temp0_297 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg9, 0x4e).q, zmm3, 0), 
                                    zmm3, 0xe2)
                        
                        zmm6 |= zmm0
                        
                        if ((temp0_297 & 4) == 0)
                            if ((temp0_297 & 8) != 0)
                                goto label_140271753
                            
                            goto label_1402716f2
                        
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm6.q, zmm3, 0x30), 0x84)
                        
                        if ((temp0_297 & 8) != 0)
                        label_140271753:
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm3, 0x20), 0x24)
                            zmm2 = zx.o(0)
                            
                            if ((rdi_3 & 1) != 0)
                                goto label_1402716fc
                            
                            goto label_140271761
                        
                    label_1402716f2:
                        zmm2 = zx.o(0)
                        
                        if ((rdi_3 & 1) == 0)
                        label_140271761:
                            
                            if ((rdi_3 & 2) != 0)
                            label_140271772:
                                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm2, 1), zmm2, 0xe2)
                                
                                if ((rdi_3 & 4) != 0)
                                    goto label_140271717
                                
                                goto label_14027177f
                        else
                        label_1402716fc:
                            zmm2 = zx.o(0)
                            zmm2[0] = zmm3[0]
                            
                            if ((rdi_3 & 2) != 0)
                                goto label_140271772
                        
                        if ((rdi_3 & 4) == 0)
                        label_14027177f:
                            var_248 = zmm3
                            
                            if ((rdi_3 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm3, zmm2, 0x23), 0x24)
                        else
                        label_140271717:
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm3, zmm2, 0x32), 0x84)
                            var_248 = zmm3
                            
                            if ((rdi_3 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm3, zmm2, 0x23), 0x24)
                    
                    zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(var_4b8_1, var_498_2), arg11)
                    zmm1 = data_1434426c0
                    zmm3 = zmm1
                    zmm0 = _mm_add_epi64(zmm0, zmm1)
                    zmm1 = _mm_shuffle_epi32(temp0_100, 0x50) & zmm0
                    zmm0 = _mm_add_epi64(
                        __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4f8_1, var_568_2), var_4a8_2), 
                        zmm3)
                    zmm3 = _mm_shuffle_epi32(temp0_100, 0xfa) & zmm0
                    int64_t rcx_11 = _mm_shuffle_epi32(zmm1, 0x4e).q
                    int64_t rbx_1 = zmm3[0].q
                    int64_t rdi_4 = _mm_shuffle_epi32(zmm3, 0x4e).q
                    zmm0 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg12 + zmm1.q)), zx.q(*(arg12 + rcx_11))), 
                        _mm_unpacklo_epi32(zx.o(*(arg12 + rbx_1)), zx.o(*(arg12 + rdi_4))[0].q).q)
                    zmm1 = zmm0
                    arg7 = _mm_add_ps(arg7, 
                        _mm_mul_ps(arg10, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    zmm0 = data_143442440
                    zmm4 = zmm0
                    zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                    zmm3 = data_143442690
                    float temp0_354[0x4] = _mm_mul_ps(arg5, _mm_div_ps(zmm0, zmm3))
                    zmm0 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm1, 0x15), zmm4)), zmm3)
                    char temp81_1 = temp0_101 & 1
                    
                    if (temp81_1 != 0)
                        zmm1.d = arg7.d
                        var_5b8 = zmm1
                    
                    zmm4 = var_598_4
                    arg10 = var_508_4
                    arg6 = var_518
                    float temp0_359[0x4] = _mm_mul_ps(zmm2, zmm0)
                    float temp0_360[0x4] = _mm_add_ps(zmm12, temp0_354)
                    
                    if (temp81_1 != 0)
                        arg6[0] = temp0_360[0]
                        zmm11 = zx.o(0)
                        zmm7 = _mm_add_ps(zmm7, temp0_359)
                        
                        if (temp81_1 != 0)
                            goto label_140271b2d
                        
                        goto label_1402718e6
                    
                    zmm11 = zx.o(0)
                    zmm7 = _mm_add_ps(zmm7, temp0_359)
                    bool cond:269_1
                    bool cond:270_1
                    bool cond:288_1
                    bool cond:289_1
                    
                    if (temp81_1 != 0)
                    label_140271b2d:
                        zmm0.d = zmm7[0]
                        var_5e8 = zmm0
                        char temp108_1 = temp0_101 & 2
                        cond:269_1 = temp108_1 == 0
                        cond:270_1 = temp108_1 != 0
                        cond:288_1 = temp108_1 == 0
                        cond:289_1 = temp108_1 != 0
                        
                        if (temp108_1 != 0)
                            goto label_1402718f3
                        
                        goto label_140271b3e
                    
                label_1402718e6:
                    char temp107_1 = temp0_101 & 2
                    cond:269_1 = temp107_1 == 0
                    cond:270_1 = temp107_1 != 0
                    cond:288_1 = temp107_1 == 0
                    cond:289_1 = temp107_1 != 0
                    
                    if (temp107_1 == 0)
                    label_140271b3e:
                        
                        if (not(cond:269_1))
                        label_140271b52:
                            arg6 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_360, arg6, 1), arg6, 0xe2)
                            
                            if (cond:289_1)
                                goto label_140271920
                            
                            goto label_140271b5c
                    else
                    label_1402718f3:
                        zmm1 = var_5b8
                        var_5b8 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm1, 1), zmm1, 0xe2)
                        
                        if (cond:270_1)
                            goto label_140271b52
                    
                    bool cond:323_1
                    bool cond:324_1
                    bool cond:337_1
                    bool cond:338_1
                    
                    if (not(cond:288_1))
                    label_140271920:
                        var_5e8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, var_5e8, 1), var_5e8, 0xe2)
                        char temp128_1 = temp0_101 & 4
                        cond:323_1 = temp128_1 == 0
                        cond:324_1 = temp128_1 != 0
                        cond:337_1 = temp128_1 == 0
                        cond:338_1 = temp128_1 != 0
                        
                        if (temp128_1 != 0)
                            goto label_140271b69
                        
                        goto label_14027192d
                    
                label_140271b5c:
                    char temp127_1 = temp0_101 & 4
                    cond:323_1 = temp127_1 == 0
                    cond:324_1 = temp127_1 != 0
                    cond:337_1 = temp127_1 == 0
                    cond:338_1 = temp127_1 != 0
                    
                    if (temp127_1 == 0)
                    label_14027192d:
                        
                        if (not(cond:323_1))
                        label_14027193c:
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(temp0_360, arg6, 0x32), 0x84)
                            
                            if (cond:338_1)
                                goto label_140271b96
                            
                            goto label_140271947
                    else
                    label_140271b69:
                        zmm1 = var_5b8
                        var_5b8 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg7, zmm1, 0x32), 0x84)
                        
                        if (cond:324_1)
                            goto label_14027193c
                    
                    bool cond:352_1
                    bool cond:365_1
                    bool cond:366_1
                    bool cond:353_1
                    
                    if (cond:337_1)
                    label_140271947:
                        char temp135_1 = temp0_101 & 8
                        cond:352_1 = temp135_1 == 0
                        cond:353_1 = temp135_1 != 0
                        cond:365_1 = temp135_1 == 0
                        cond:366_1 = temp135_1 != 0
                        
                        if (temp135_1 != 0)
                        label_140271950:
                            zmm0 = var_5b8
                            arg7 = _mm_shuffle_ps(arg7, zmm0, 0x23)
                            var_5b8 = _mm_shuffle_ps(zmm0, arg7, 0x24)
                            
                            if (cond:353_1)
                                goto label_140271bae
                            
                            goto label_14027196a
                    else
                    label_140271b96:
                        var_5e8 = _mm_shuffle_ps(var_5e8, _mm_shuffle_ps(zmm7, var_5e8, 0x32), 0x84)
                        char temp136_1 = temp0_101 & 8
                        cond:352_1 = temp136_1 == 0
                        cond:353_1 = temp136_1 != 0
                        cond:365_1 = temp136_1 == 0
                        cond:366_1 = temp136_1 != 0
                        
                        if (temp136_1 != 0)
                            goto label_140271950
                    
                    if (cond:352_1)
                    label_14027196a:
                        zmm12 = var_5c8_4
                        
                        if (not(cond:365_1))
                            var_5e8 =
                                _mm_shuffle_ps(var_5e8, _mm_shuffle_ps(zmm7, var_5e8, 0x23), 0x24)
                    else
                    label_140271bae:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(temp0_360, arg6, 0x23), 0x24)
                        zmm12 = var_5c8_4
                        
                        if (cond:366_1)
                            var_5e8 =
                                _mm_shuffle_ps(var_5e8, _mm_shuffle_ps(zmm7, var_5e8, 0x23), 0x24)
                    
                    arg9 = var_558_4
                    zmm7 = var_578_1
                
                zmm7 ^= arg10
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm4 & zmm7, 0x1f)) == 0)
                    var_518 = arg6
                label_140271bcd:
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    zmm6 = var_5b8
                    zmm7 = var_528_2
                else
                    arg10 = __pcmpeqd_xmmdq_memdq(var_3b8, data_1434422d0)
                    zmm1 = zmm4 & arg10
                    uint32_t temp0_375[0x4] = _mm_slli_epi32(zmm1, 0x1f)
                    char temp0_376 = _mm_movemask_ps(temp0_375)
                    
                    if (temp0_376 == 0)
                        var_518 = arg6
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    else
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_538_1, 0x1f), 0x1f)
                        zmm3 = _mm_srai_epi32(temp0_375, 0x1f) & zmm2
                        float var_2a8[0x4]
                        
                        if (_mm_movemask_ps(zmm3) == 0)
                            arg11 = zmm7
                            arg5 = var_2a8
                            zmm0 = var_468_2
                        else
                            arg7 = arg11
                            arg11 = zmm7
                            arg5 = data_1434426b0
                            zmm7 = arg5
                            int32_t temp0_381[0x4] = _mm_add_epi64(var_468_2, arg5)
                            arg5 = zmm3 ^ data_142d3f800
                            zmm6 = _mm_shuffle_epi32(arg5, 0x50)
                            zmm0 = (var_468_2 & zmm6) | (zmm6 & not.o(temp0_381))
                            zmm6 = var_5a8_1
                            int32_t temp0_383[0x4] = _mm_add_epi64(zmm6, zmm7)
                            arg5 = _mm_shuffle_epi32(arg5, 0xfa)
                            var_5a8_1 = (zmm6 & arg5) | (arg5 & not.o(temp0_383))
                            zmm7 = __paddq_xmmdq_memdq(var_4f8_1, var_568_2)
                            zmm6 = _mm_add_epi64(__paddq_xmmdq_memdq(var_4b8_1, var_498_2), arg7)
                            zmm7 = __paddq_xmmdq_memdq(zmm7, var_4a8_2)
                            zmm4 = data_1434426c0
                            arg5 = zmm4
                            zmm6 = _mm_add_epi64(zmm6, zmm4)
                            zmm4 = _mm_shuffle_epi32(zmm3, 0x50) & zmm6
                            zmm7 = _mm_add_epi64(zmm7, arg5)
                            zmm3 = _mm_shuffle_epi32(zmm3, 0xfa) & zmm7
                            int64_t rax_71 = zmm4[0].q
                            int64_t rbp_3 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                            int64_t rbx_2 = zmm3[0].q
                            int64_t rdi_5 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                            zmm3 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg12 + rax_71), 
                                                0), 
                                            *(arg12 + rbp_3), 2), 
                                        *(arg12 + rbx_2), 4), 
                                    *(arg12 + rdi_5), 6), 
                                data_143442b40))
                            arg5 = var_2a8
                        
                        zmm2 &= zmm3
                        arg7 = arg6
                        zmm6 = zmm0
                        
                        if ((temp0_376 & 1) != 0)
                            zmm3 = var_5b8
                            zmm3[0] = zmm2[0]
                            var_5b8 = zmm3
                        
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        arg9 = var_558_4
                        zmm7 = arg11
                        
                        if ((temp0_376 & 2) != 0)
                            zmm0 = var_5b8
                            var_5b8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm0, 1), zmm0, 0xe2)
                            
                            if ((temp0_376 & 4) != 0)
                                goto label_140271eca
                            
                            goto label_140271e28
                        
                        if ((temp0_376 & 4) == 0)
                        label_140271e28:
                            
                            if ((temp0_376 & 8) != 0)
                                zmm0 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm2, zmm0, 0x23), 0x24)
                        else
                        label_140271eca:
                            zmm0 = var_5b8
                            var_5b8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm2, zmm0, 0x32), 0x84)
                            
                            if ((temp0_376 & 8) != 0)
                                zmm0 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm2, zmm0, 0x23), 0x24)
                        
                        zmm3 = data_1434422d0
                        zmm2 = var_538_1 & zmm3
                        uint32_t temp0_450[0x4] =
                            _mm_slli_epi32(_mm_cmpeq_epi32(zmm2, zmm3) & zmm1, 0x1f)
                        char temp0_451 = _mm_movemask_ps(temp0_450)
                        
                        if (temp0_451 == 0)
                            zmm2 = _mm_cmpeq_epi32(zmm2, zmm11) & not.o(temp0_450)
                            
                            if ((temp0_376 & 1) != 0)
                                arg7.d = zmm2[0]
                        else
                            zmm3 = _mm_srai_epi32(temp0_450, 0x1f)
                            
                            if ((temp0_451 & 1) != 0)
                                zmm0 = zmm6
                                arg5[0] = zx.o(*zmm6.q)[0]
                                zmm11 = var_5a8_1
                                zmm3 ^= arg6
                                arg6 = zmm12
                                
                                if ((temp0_451 & 2) != 0)
                                    zmm12 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q), 
                                            arg5, 0), 
                                        arg5, 0xe2)
                                else
                                    zmm12 = arg5
                            else
                                zmm11 = var_5a8_1
                                zmm0 = zmm6
                                zmm3 ^= arg6
                                arg6 = zmm12
                                
                                if ((temp0_451 & 2) == 0)
                                    zmm12 = arg5
                                else
                                    zmm12 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e)[0].q), 
                                            arg5, 0), 
                                        arg5, 0xe2)
                            
                            zmm4 = data_1434426b0
                            zmm6 = _mm_add_epi64(zmm11, zmm4)
                            arg5 = _mm_add_epi64(zmm0, zmm4)
                            zmm4 = _mm_shuffle_epi32(zmm3, 0x50)
                            uint32_t temp0_462[0x4] = _mm_shuffle_epi32(zmm3, 0xfa)
                            arg11 = zmm7
                            
                            if ((temp0_451 & 4) != 0)
                                zmm12 = _mm_shuffle_ps(zmm12, 
                                    _mm_shuffle_ps(zx.o(*zmm11[0].q), zmm12, 0x30), 0x84)
                            
                            zmm0 &= zmm4
                            zmm4 &= not.o(arg5)
                            arg5 = zmm11 & temp0_462
                            zmm3 = temp0_462 & not.o(zmm6)
                            
                            if ((temp0_451 & 8) != 0)
                                zmm7 = _mm_shuffle_ps(zmm12, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm11, 0x4e).q), zmm12, 
                                        0x20), 
                                    0x24)
                            else
                                zmm7 = zmm12
                            
                            zmm12 = arg6
                            zmm11 = zx.o(0)
                            zmm6 = zmm0 | zmm4
                            arg5 |= zmm3
                            var_2a8 = zmm7
                            zmm3 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm7, data_143442cd0), data_143442b40))
                            var_5a8_1 = arg5
                            arg9 = var_558_4
                            zmm7 = arg11
                            arg6 = _mm_cmpeq_epi32(arg6, arg6)
                            zmm2 = _mm_cmpeq_epi32(zmm2, zmm11) & not.o(zmm3)
                            
                            if ((temp0_376 & 1) != 0)
                                arg7.d = zmm2[0]
                        
                        if ((temp0_376 & 2) != 0)
                            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg7, 1), arg7, 0xe2)
                            
                            if ((temp0_376 & 4) != 0)
                                goto label_1402720a1
                            
                            goto label_140272032
                        
                        if ((temp0_376 & 4) == 0)
                        label_140272032:
                            
                            if ((temp0_376 & 8) != 0)
                                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm2, arg7, 0x23), 0x24)
                        else
                        label_1402720a1:
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm2, arg7, 0x32), 0x84)
                            
                            if ((temp0_376 & 8) != 0)
                                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm2, arg7, 0x23), 0x24)
                        
                        zmm3 = data_142fc95e0
                        zmm2 = var_538_1 & zmm3
                        zmm1 = _mm_slli_epi32(zmm1 & _mm_cmpeq_epi32(zmm2, zmm3), 0x1f)
                        char temp0_479 = _mm_movemask_ps(zmm1)
                        var_518 = arg7
                        uint32_t var_328[0x4]
                        
                        if (temp0_479 == 0)
                            zmm3 = var_328
                            zmm4 = var_598_4
                            zmm2 = _mm_cmpeq_epi32(zmm2, zmm11) & not.o(zmm1)
                            
                            if ((temp0_376 & 1) != 0)
                                zmm1.d = zmm2[0]
                                var_5e8 = zmm1
                        else
                            if ((temp0_479 & 1) != 0)
                                zmm3 = var_328
                                zmm3[0] = zx.d(*zmm6.q)
                                
                                if ((temp0_479 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm6, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            else
                                zmm3 = var_328
                                
                                if ((temp0_479 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm6, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            
                            zmm4 = var_598_4
                            
                            if ((temp0_479 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*var_5a8_1.q), zmm3, 0x30), 0x84)
                                
                                if ((temp0_479 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(
                                            zx.o(*__pshufd_xmmdq_memdq_immb(var_5a8_1, 0x4e).q), 
                                            zmm3, 0x20), 
                                        0x24)
                            else if ((temp0_479 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(
                                        zx.o(*__pshufd_xmmdq_memdq_immb(var_5a8_1, 0x4e).q), zmm3, 
                                        0x20), 
                                    0x24)
                            
                            zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm3, data_143442cd0), data_143442b40))
                            zmm2 = _mm_cmpeq_epi32(zmm2, zmm11) & not.o(zmm1)
                            
                            if ((temp0_376 & 1) != 0)
                                zmm1.d = zmm2[0]
                                var_5e8 = zmm1
                        
                        var_328 = zmm3
                        
                        if ((temp0_376 & 2) != 0)
                            zmm3 = var_5e8
                            var_5e8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm3, 1), zmm3, 0xe2)
                            
                            if ((temp0_376 & 4) != 0)
                                goto label_14027220b
                            
                            goto label_140272195
                        
                        if ((temp0_376 & 4) == 0)
                        label_140272195:
                            
                            if ((temp0_376 & 8) != 0)
                                var_5e8 = _mm_shuffle_ps(var_5e8, 
                                    _mm_shuffle_ps(zmm2, var_5e8, 0x23), 0x24)
                        else
                        label_14027220b:
                            zmm3 = var_5e8
                            var_5e8 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm2, zmm3, 0x32), 0x84)
                            
                            if ((temp0_376 & 8) != 0)
                                var_5e8 = _mm_shuffle_ps(var_5e8, 
                                    _mm_shuffle_ps(zmm2, var_5e8, 0x23), 0x24)
                    
                    zmm7 = (zmm7 ^ arg10) & zmm4
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm7, 0x1f)) == 0)
                        zmm6 = var_5b8
                        zmm7 = var_528_2
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(var_3b8, data_143442ad0)
                        char temp0_501 = _mm_movemask_ps(_mm_slli_epi32(zmm4 & zmm0, 0x1f))
                        
                        if (temp0_501 == 0)
                            zmm6 = var_5b8
                        else
                            char temp80_1 = temp0_501 & 1
                            
                            if (temp80_1 == 0)
                                zmm6 = var_5b8
                                
                                if (temp80_1 != 0)
                                    zmm1.d = 0
                                    var_518 = zmm1
                            else
                                zmm6.d = zx.o(0).d
                                
                                if (temp80_1 != 0)
                                    zmm1.d = 0
                                    var_518 = zmm1
                            
                            bool cond:267_1
                            bool cond:268_1
                            bool cond:286_1
                            bool cond:287_1
                            
                            if (temp80_1 != 0)
                                zmm1.d = 0
                                var_5e8 = zmm1
                                char temp106_1 = temp0_501 & 2
                                cond:267_1 = temp106_1 == 0
                                cond:268_1 = temp106_1 != 0
                                cond:286_1 = temp106_1 == 0
                                cond:287_1 = temp106_1 != 0
                                
                                if (temp106_1 != 0)
                                    goto label_140272339
                                
                                goto label_140272296
                            
                            char temp105_1 = temp0_501 & 2
                            cond:267_1 = temp105_1 == 0
                            cond:268_1 = temp105_1 != 0
                            cond:286_1 = temp105_1 == 0
                            cond:287_1 = temp105_1 != 0
                            
                            if (temp105_1 == 0)
                            label_140272296:
                                
                                if (not(cond:267_1))
                                label_14027229f:
                                    zmm2 = var_518
                                    var_518 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm2, 0), zmm2, 0xe2)
                                    
                                    if (cond:287_1)
                                        goto label_14027234b
                                    
                                    goto label_1402722bd
                            else
                            label_140272339:
                                zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm6, 0), zmm6, 0xe2)
                                
                                if (cond:268_1)
                                    goto label_14027229f
                            
                            bool cond:320_1
                            bool cond:321_1
                            bool cond:335_1
                            bool cond:336_1
                            
                            if (not(cond:286_1))
                            label_14027234b:
                                zmm2 = var_5e8
                                var_5e8 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm2, 0), zmm2, 0xe2)
                                char temp126_1 = temp0_501 & 4
                                cond:320_1 = temp126_1 == 0
                                cond:321_1 = temp126_1 != 0
                                cond:335_1 = temp126_1 == 0
                                cond:336_1 = temp126_1 != 0
                                
                                if (temp126_1 != 0)
                                    goto label_1402722cd
                                
                                goto label_140272364
                            
                        label_1402722bd:
                            char temp125_1 = temp0_501 & 4
                            cond:320_1 = temp125_1 == 0
                            cond:321_1 = temp125_1 != 0
                            cond:335_1 = temp125_1 == 0
                            cond:336_1 = temp125_1 != 0
                            
                            if (temp125_1 == 0)
                            label_140272364:
                                
                                if (not(cond:320_1))
                                label_14027236d:
                                    zmm2 = var_518
                                    var_518 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(0), zmm2, 0x30), 0x84)
                                    
                                    if (cond:336_1)
                                        goto label_1402722e0
                                    
                                    goto label_14027238b
                            else
                            label_1402722cd:
                                zmm6 =
                                    _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zx.o(0), zmm6, 0x30), 0x84)
                                
                                if (cond:321_1)
                                    goto label_14027236d
                            
                            bool cond:349_1
                            bool cond:350_1
                            bool cond:363_1
                            bool cond:364_1
                            
                            if (not(cond:335_1))
                            label_1402722e0:
                                zmm2 = var_5e8
                                var_5e8 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x30), 0x84)
                                char temp134_1 = temp0_501 & 8
                                cond:349_1 = temp134_1 == 0
                                cond:350_1 = temp134_1 != 0
                                cond:363_1 = temp134_1 == 0
                                cond:364_1 = temp134_1 != 0
                                
                                if (temp134_1 != 0)
                                    goto label_14027239b
                                
                                goto label_1402722f9
                            
                        label_14027238b:
                            char temp133_1 = temp0_501 & 8
                            cond:349_1 = temp133_1 == 0
                            cond:350_1 = temp133_1 != 0
                            cond:363_1 = temp133_1 == 0
                            cond:364_1 = temp133_1 != 0
                            
                            if (temp133_1 != 0)
                            label_14027239b:
                                zmm6 =
                                    _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zx.o(0), zmm6, 0x20), 0x24)
                                
                                if (cond:350_1)
                                    goto label_140272302
                                
                                goto label_1402723a5
                            
                        label_1402722f9:
                            
                            if (cond:349_1)
                            label_1402723a5:
                                
                                if (not(cond:363_1))
                                    zmm2 = var_5e8
                                    var_5e8 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                            else
                            label_140272302:
                                zmm2 = var_518
                                var_518 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                                
                                if (cond:364_1)
                                    zmm2 = var_5e8
                                    var_5e8 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                        
                        char temp0_525 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm7), 0x1f))
                        
                        if (temp0_525 == 0)
                            zmm7 = var_528_2
                        else
                            char temp96_1 = temp0_525 & 1
                            
                            if (temp96_1 != 0)
                                zmm6.d = 0
                                
                                if (temp96_1 != 0)
                                    goto label_1402724af
                                
                                goto label_1402723e7
                            
                            if (temp96_1 != 0)
                            label_1402724af:
                                zmm0.d = 0
                                var_518 = zmm0
                                zmm7 = var_528_2
                                
                                if (temp96_1 != 0)
                                    goto label_1402723fd
                                
                                goto label_1402724c9
                            
                        label_1402723e7:
                            zmm7 = var_528_2
                            bool cond:302_1
                            bool cond:303_1
                            bool cond:318_1
                            bool cond:319_1
                            
                            if (temp96_1 != 0)
                            label_1402723fd:
                                zmm0.d = 0
                                var_5e8 = zmm0
                                char temp118_1 = temp0_525 & 2
                                cond:302_1 = temp118_1 == 0
                                cond:303_1 = temp118_1 != 0
                                cond:318_1 = temp118_1 == 0
                                cond:319_1 = temp118_1 != 0
                                
                                if (temp118_1 != 0)
                                    goto label_1402724dd
                                
                                goto label_14027240e
                            
                        label_1402724c9:
                            char temp117_1 = temp0_525 & 2
                            cond:302_1 = temp117_1 == 0
                            cond:303_1 = temp117_1 != 0
                            cond:318_1 = temp117_1 == 0
                            cond:319_1 = temp117_1 != 0
                            
                            if (temp117_1 == 0)
                            label_14027240e:
                                
                                if (not(cond:302_1))
                                label_140272427:
                                    var_518 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), var_518, 0), 
                                        var_518, 0xe2)
                                    
                                    if (cond:319_1)
                                        goto label_1402724fb
                                    
                                    goto label_140272435
                            else
                            label_1402724dd:
                                zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm6, 0), zmm6, 0xe2)
                                
                                if (cond:303_1)
                                    goto label_140272427
                            
                            bool cond:341_1
                            bool cond:342_1
                            bool cond:347_1
                            bool cond:348_1
                            
                            if (not(cond:318_1))
                            label_1402724fb:
                                var_5e8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), var_5e8, 0), 
                                    var_5e8, 0xe2)
                                char temp132_1 = temp0_525 & 4
                                cond:341_1 = temp132_1 == 0
                                cond:342_1 = temp132_1 != 0
                                cond:347_1 = temp132_1 == 0
                                cond:348_1 = temp132_1 != 0
                                
                                if (temp132_1 != 0)
                                    goto label_140272445
                                
                                goto label_140272508
                            
                        label_140272435:
                            char temp131_1 = temp0_525 & 4
                            cond:341_1 = temp131_1 == 0
                            cond:342_1 = temp131_1 != 0
                            cond:347_1 = temp131_1 == 0
                            cond:348_1 = temp131_1 != 0
                            
                            if (temp131_1 == 0)
                            label_140272508:
                                
                                if (not(cond:341_1))
                                label_140272521:
                                    var_518 = _mm_shuffle_ps(var_518, 
                                        _mm_shuffle_ps(zx.o(0), var_518, 0x30), 0x84)
                                    
                                    if (cond:348_1)
                                        goto label_140272464
                                    
                                    goto label_14027252f
                            else
                            label_140272445:
                                zmm6 =
                                    _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zx.o(0), zmm6, 0x30), 0x84)
                                
                                if (cond:342_1)
                                    goto label_140272521
                            
                            bool cond:369_1
                            bool cond:370_1
                            bool cond:371_1
                            bool cond:372_1
                            
                            if (not(cond:347_1))
                            label_140272464:
                                var_5e8 = _mm_shuffle_ps(var_5e8, 
                                    _mm_shuffle_ps(zx.o(0), var_5e8, 0x30), 0x84)
                                char temp138_1 = temp0_525 & 8
                                cond:369_1 = temp138_1 == 0
                                cond:370_1 = temp138_1 != 0
                                cond:371_1 = temp138_1 == 0
                                cond:372_1 = temp138_1 == 0
                                
                                if (temp138_1 != 0)
                                    goto label_14027253f
                                
                                goto label_140272471
                            
                        label_14027252f:
                            char temp137_1 = temp0_525 & 8
                            cond:369_1 = temp137_1 == 0
                            cond:370_1 = temp137_1 != 0
                            cond:371_1 = temp137_1 == 0
                            cond:372_1 = temp137_1 == 0
                            
                            if (temp137_1 != 0)
                            label_14027253f:
                                zmm6 =
                                    _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zx.o(0), zmm6, 0x20), 0x24)
                                
                                if (cond:370_1)
                                    goto label_14027248a
                                
                                goto label_140272549
                            
                        label_140272471:
                            
                            if (cond:369_1)
                            label_140272549:
                                
                                if (not(cond:371_1))
                                    var_5e8 = _mm_shuffle_ps(var_5e8, 
                                        _mm_shuffle_ps(zx.o(0), var_5e8, 0x20), 0x24)
                            else
                            label_14027248a:
                                var_518 = _mm_shuffle_ps(var_518, 
                                    _mm_shuffle_ps(zx.o(0), var_518, 0x20), 0x24)
                                
                                if (not(cond:372_1))
                                    var_5e8 = _mm_shuffle_ps(var_5e8, 
                                        _mm_shuffle_ps(zx.o(0), var_5e8, 0x20), 0x24)
                
                float temp0_411[0x4] = _mm_sub_ps(zmm6, zmm12)
                zmm3 = _mm_sub_ps(var_518, arg9)
                float temp0_413[0x4] = _mm_mul_ps(temp0_411, zmm7)
                zmm1 = zmm12
                char temp47_1 = temp0_1241 & 1
                
                if (temp47_1 != 0)
                    zmm1.d = zmm12.d f+ temp0_413[0]
                
                zmm4 = _mm_sub_ps(var_5e8, arg8)
                zmm3 = _mm_mul_ps(zmm3, zmm7)
                zmm2 = arg9
                
                if (temp47_1 != 0)
                    zmm2 = arg9
                    zmm2[0] = zmm2[0] f+ zmm3[0]
                    zmm4 = _mm_mul_ps(zmm4, zmm7)
                    zmm0 = arg8
                    
                    if (temp47_1 != 0)
                        goto label_140271d01
                    
                    goto label_140271c34
                
                zmm4 = _mm_mul_ps(zmm4, zmm7)
                zmm0 = arg8
                bool cond:125_1
                bool cond:126_1
                bool cond:143_1
                bool cond:144_1
                
                if (temp47_1 != 0)
                label_140271d01:
                    zmm0.d = arg8.d f+ zmm4[0]
                    zmm12 = _mm_add_ps(zmm12, temp0_413)
                    char temp69_1 = temp0_1241 & 2
                    cond:125_1 = temp69_1 == 0
                    cond:126_1 = temp69_1 != 0
                    cond:143_1 = temp69_1 == 0
                    cond:144_1 = temp69_1 != 0
                    arg11 = var_538_1
                    
                    if (temp69_1 != 0)
                        goto label_140271c56
                    
                    goto label_140271d1b
                
            label_140271c34:
                zmm12 = _mm_add_ps(zmm12, temp0_413)
                char temp68_1 = temp0_1241 & 2
                cond:125_1 = temp68_1 == 0
                cond:126_1 = temp68_1 != 0
                cond:143_1 = temp68_1 == 0
                cond:144_1 = temp68_1 != 0
                arg11 = var_538_1
                
                if (temp68_1 != 0)
                label_140271c56:
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 1), zmm1, 0xe2)
                    arg5 = var_4e8_1
                    arg9 = _mm_add_ps(arg9, zmm3)
                    
                    if (cond:126_1)
                        goto label_140271d3a
                    
                    goto label_140271c6c
                
            label_140271d1b:
                arg5 = var_4e8_1
                arg9 = _mm_add_ps(arg9, zmm3)
                
                if (not(cond:125_1))
                label_140271d3a:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, zmm2, 1), zmm2, 0xe2)
                    arg8 = _mm_add_ps(arg8, zmm4)
                    
                    if (cond:144_1)
                        goto label_140271c82
                    
                    goto label_140271d47
                
            label_140271c6c:
                arg8 = _mm_add_ps(arg8, zmm4)
                bool cond:173_1
                bool cond:174_1
                bool cond:193_1
                bool cond:194_1
                
                if (not(cond:143_1))
                label_140271c82:
                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm0, 1), zmm0, 0xe2)
                    char temp95_1 = temp0_1241 & 4
                    cond:173_1 = temp95_1 == 0
                    cond:174_1 = temp95_1 != 0
                    cond:193_1 = temp95_1 == 0
                    cond:194_1 = temp95_1 != 0
                    
                    if (temp95_1 != 0)
                        goto label_140271d58
                    
                    goto label_140271c8e
                
            label_140271d47:
                char temp94_1 = temp0_1241 & 4
                cond:173_1 = temp94_1 == 0
                cond:174_1 = temp94_1 != 0
                cond:193_1 = temp94_1 == 0
                cond:194_1 = temp94_1 != 0
                
                if (temp94_1 == 0)
                label_140271c8e:
                    
                    if (not(cond:173_1))
                    label_140271c9c:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg9, zmm2, 0x32), 0x84)
                        
                        if (cond:194_1)
                            goto label_140271d70
                        
                        goto label_140271ca6
                else
                label_140271d58:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x32), 0x84)
                    
                    if (cond:174_1)
                        goto label_140271c9c
                
                bool cond:239_1
                bool cond:240_1
                bool cond:263_1
                bool cond:264_1
                
                if (not(cond:193_1))
                label_140271d70:
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x32), 0x84)
                    char temp116_1 = temp0_1241 & 8
                    cond:239_1 = temp116_1 == 0
                    cond:240_1 = temp116_1 != 0
                    cond:263_1 = temp116_1 == 0
                    cond:264_1 = temp116_1 != 0
                    
                    if (temp116_1 != 0)
                        goto label_140271cb9
                    
                    goto label_140271d7d
                
            label_140271ca6:
                char temp115_1 = temp0_1241 & 8
                cond:239_1 = temp115_1 == 0
                cond:240_1 = temp115_1 != 0
                cond:263_1 = temp115_1 == 0
                cond:264_1 = temp115_1 != 0
                
                if (temp115_1 != 0)
                label_140271cb9:
                    zmm12 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x23), 0x24)
                    
                    if (cond:240_1)
                        goto label_140271d91
                    
                    goto label_140271cc3
                
            label_140271d7d:
                zmm12 = zmm1
                
                if (cond:239_1)
                label_140271cc3:
                    arg9 = zmm2
                    
                    if (not(cond:263_1))
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x23), 0x24)
                else
                label_140271d91:
                    arg9 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg9, zmm2, 0x23), 0x24)
                    
                    if (cond:264_1)
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x23), 0x24)
                
                arg8 = zmm0
                rax_72 = _mm_movemask_ps(arg5 ^ arg6)
                
                if (rax_72 != 0)
                    goto label_140275783
                
                var_5c8 = zmm12
        var_548 = arg8
        arg8 = zmm6
        zmm4 = var_548
        zmm3 = zx.o(zmm4[0].q)
        int32_t temp0_1304[0x4] = _mm_unpackhi_epi32(zmm4, zmm11[0].q)
        float temp0_1305[0x4] = _mm_unpacklo_ps(var_5c8, arg9[0].q)
        zmm0 = _mm_unpackhi_ps(var_5c8, arg9)
        arg5 = _mm_shuffle_ps(temp0_1305, zmm3, 0x84)
        float var_128_1[0x4] = arg5
        float temp0_1308[0x4] = _mm_shuffle_ps(temp0_1305, zmm3, 0xde)
        float var_118_1[0x4] = temp0_1308
        zmm1 = zmm0.q | temp0_1304[0].q << 0x40
        uint128_t var_108_1 = zmm1
        temp0_1304[0].q = zmm0 u>> 0x40
        zmm4 = _mm_shuffle_epi32(arg5, 0x4e)
        int64_t rax_260 = sx.q(var_408_1.d) * 0x30
        *(arg1 + rax_260 + 0x20) = var_5c8[0]
        *(arg1 + rax_260 + 0x24) = arg9[0]
        *(arg1 + rax_260 + 0x28) = zmm4[0]
        *(arg1 + rax_260 + 0x2c) = 0
        int64_t rax_262 = sx.q(_mm_shuffle_epi32(var_408_1, 0x4e)[0])
        zmm4 = _mm_shuffle_ps(arg9, zmm3, 0xd5)
        uint32_t temp0_1312[0x4] = _mm_shuffle_epi32(temp0_1308, 0x4e)
        int64_t rax_264 = rax_262 * 0x30
        *(arg1 + rax_264 + 0x20) = temp0_1308[0]
        *(arg1 + rax_264 + 0x24) = zmm4[0]
        *(arg1 + rax_264 + 0x28) = temp0_1312[0]
        *(arg1 + rax_264 + 0x2c) = 0
        zmm3 = var_358_1
        int64_t rax_266 = sx.q(zmm3[0])
        zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
        int64_t rax_268 = rax_266 * 0x30
        *(arg1 + rax_268 + 0x20) = zmm0.d
        *(arg1 + rax_268 + 0x24) = zmm1.d
        *(arg1 + rax_268 + 0x28) = zmm2[0]
        *(arg1 + rax_268 + 0x2c) = 0
        *(arg1 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d) * 0x30 + 0x20) = temp0_1304
        r15 = zx.q(r15.d + 4)
    while (r15.d s< i_5)
    
    result = zx.q(arg16)
    
    if (r15.d s< result.d)
        goto label_140275a48
return result
