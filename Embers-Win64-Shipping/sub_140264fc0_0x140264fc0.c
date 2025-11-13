// 函数: sub_140264fc0
// 地址: 0x140264fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm15[0x4]
int32_t var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float var_78[0x4] = arg8
float zmm12[0x4]
float var_88[0x4] = zmm12
int32_t zmm11[0x4]
int32_t var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_b8[0x4] = zmm9
int32_t var_c8[0x4] = arg7
float zmm7[0x4]
float var_d8[0x4] = zmm7
int32_t var_e8[0x4] = arg6
uint128_t zmm2 = arg10
int32_t i_5 = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
int64_t result
int32_t var_5b8[0x4]
uint64_t r15
uint128_t zmm0
float zmm1[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (i_5 s<= 0)
    r15 = 0
    result = zx.q(arg12)
    
    if (0 s< result.d)
    label_14026ac1d:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15.d), 0), data_142e11d00)
        zmm3 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm3
        int64_t rbp_16 = sx.q(zmm0.d)
        int64_t rbx_30 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        int64_t rdi_11 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        int64_t rcx_48 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        uint128_t var_468_3 = *(arg2 + rcx_48)
        zmm7 = zx.o(*(arg2 + rdi_11))
        zmm10 = zx.o(*(arg2 + rbp_16))
        int32_t var_448_4[0x4] = *(arg2 + rbx_30)
        zmm0 = data_142fc95e0 & zmm3
        uint64_t rcx_49 = zx.q(zmm0.d)
        uint64_t rdx = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        uint64_t rdi_12 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + arg2 + rcx_48))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(rdi_12 + arg2 + rdi_11)), zmm0.q)
        zmm0 = _mm_slli_epi32(
            _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(rcx_49 + arg2 + rbp_16)), zx.q(*(rdx + arg2 + rbx_30))), 
                zmm1[0].q), 
            3) & zmm3
        int64_t rax_284 = sx.q(zmm0.d)
        int64_t rcx_51 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        int64_t rdx_2 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        zmm0 = zx.o(*(arg3 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rdx_2)), zmm0.q)
        zmm14 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + rax_284)), zx.q(*(arg3 + rcx_51))), zmm1[0].q)
        arg5 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(arg5, arg5), zmm14)
        float var_418_3[0x4] = arg5
        arg5 &= not.o(zmm3)
        
        if (_mm_movemask_ps(arg5) != 0)
            float var_558_3[0x4] = zmm7
            float var_368_1[0x4] = zmm3
            arg7 = zx.o(0)
            int32_t temp0_1334[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm14)
            zmm2 = _mm_shuffle_epi32(zmm14, 0x4e)
            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
            zmm4 = _mm_add_epi64(4, zx.o(arg4))
            zmm0 = zmm14 & arg5
            int64_t rax_287 = sx.q(zmm0.d)
            int64_t rcx_53 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            int64_t rdx_4 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            zmm0 = zx.o(*(arg4 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)))
            zmm3 = _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_4)), zmm0.q)
            int32_t temp0_1343[0x4] = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_287)), zx.q(*(arg4 + rcx_53))), zmm3[0].q)
            zmm7 = _mm_srli_epi32(temp0_1343, 0x18) & arg5
            arg6 = _mm_srli_epi32(temp0_1343, 0x1c) & arg5
            zmm0 = _mm_slli_epi32(arg6, 2) & arg5
            uint64_t rax_288 = zx.q(zmm0.d)
            uint64_t rdx_5 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            uint64_t rbp_21 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + &data_143442cf0))
            zmm3 = _mm_unpacklo_epi32(zx.o(*(rbp_21 + &data_143442cf0)), zmm0.q)
            int32_t temp0_1352[0x4] = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(rax_288 + &data_143442cf0)), 
                    zx.q(*(rdx_5 + &data_143442cf0))), 
                zmm3[0].q)
            arg8 = zmm7
            zmm3 = data_143442c00 & zmm7
            float var_598_1[0x4] = zmm3
            zmm0 = (_mm_slli_epi32(arg6, 3) | zmm3) & arg5
            uint32_t rax_290 = zx.d(*(zx.q(zmm0.d) + &data_143442d10))
            uint64_t rdx_6 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            uint32_t rbp_23 = zx.d(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + &data_143442d10))
            uint32_t rbx_36 =
                zx.d(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + &data_143442d10)) << 8 | rbp_23
            zmm3 = _mm_unpacklo_epi16(
                _mm_unpacklo_epi8(
                    _mm_insert_epi16(zx.o(zx.d(*(rdx_6 + &data_143442d10)) << 8) | zx.o(rax_290), 
                        rbx_36, 1), 
                    arg7[0].q), 
                arg7[0].q)
            int32_t var_488_2[0x4] = arg6
            zmm7 = _mm_cmpeq_epi32(data_142fc95c0, arg6)
            zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm7 & not.o(arg5), 0x1f), 0x1f)
            arg6 = zx.o(0)
            
            if (_mm_movemask_ps(zmm0) != 0)
                arg6 = zmm0 & zmm3
            
            zmm14 = _mm_unpacklo_epi32(zmm14, temp0_1334[0].q)
            zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
            int32_t temp0_1366[0x4] = _mm_shuffle_epi32(zmm4, 0x44)
            zmm12 = arg5 & temp0_1343 & data_143442be0
            zmm15 = temp0_1352 & arg5
            zmm0 = data_142fc95e0 & arg5
            int32_t var_588_5[0x4] = arg5
            arg5 = _mm_srai_epi32(_mm_slli_epi32(arg5 & zmm7, 0x1f), 0x1f)
            char temp0_1369 = _mm_movemask_ps(arg5)
            int32_t var_568_3[0x4] = zmm7
            float var_348_2[0x4] = arg5
            
            if (temp0_1369 == 0)
                zmm3 = zx.o(0)
            else
                zmm3 &= arg5
                arg6 = _mm_srli_epi32(arg5, 0x1f) | (arg5 & not.o(arg6))
            
            zmm3 = _mm_madd_epi16(zmm3, zmm0)
            uint128_t var_398_2 = zmm2
            arg5 = _mm_add_epi64(temp0_1366, zmm2)
            zmm11 = _mm_add_epi64(temp0_1366, zmm14)
            arg8 &= data_143442bf0
            zmm0 = _mm_shuffle_epi32(arg6, 0xf5)
            zmm9 = var_588_5
            uint128_t var_4b8_2 = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(arg6, zmm15), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm15, 0xf5), zmm0), 0xe8).q) & zmm9
            zmm3 &= zmm9
            zmm2 = __pcmpgtd_xmmdq_memdq(zmm12, data_142d3f5b0) & zmm9
            zmm15 = zx.o(0)
            arg6 = arg8
            arg8 = arg5
            zmm7 = zx.o(0)
            int32_t var_518_4[0x4] = zmm11
            float var_538_2[0x4] = arg5
            int32_t var_5a8_1[0x4] = arg6
            float var_438_2[0x4] = zmm14
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) != 0)
                float var_548_2[0x4] = zmm3
                arg7 = zx.o(0)
                int32_t temp0_1384[0x4] = _mm_cmpeq_epi32(data_142fc95f0 & arg6, arg7)
                zmm4 = _mm_srai_epi32(_mm_slli_epi32(temp0_1384 & zmm2, 0x1f), 0x1f)
                zmm15 = zx.o(0)
                zmm7 = zx.o(0)
                zmm1 = arg10
                
                if (_mm_movemask_ps(zmm4) != 0)
                    zmm7 = zx.o(0)
                    
                    if (0f >= zmm1[0])
                        arg7 = zx.o(0)
                        zmm15 = zx.o(0)
                    else
                        arg5 = _mm_add_epi32(_mm_cmpeq_epi32(arg5, arg5), zmm12)
                        
                        if (zmm1[0] >= 1f)
                            arg5 &= zmm4
                            arg7 = arg5
                            zmm15 = arg5
                        else
                            float temp0_1390[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
                            zmm0 = _mm_mul_ps(_mm_cvtepi32_ps(arg5), temp0_1390)
                            zmm1 = data_142d3f780
                            float temp0_1394[0x4] = __addps_xmmps_memps(
                                _mm_and_ps(data_142d3f770, zmm0), data_142d3f740)
                            zmm1 = _mm_and_ps(zmm1, zmm0)
                            zmm3 = __addps_xmmps_memps(temp0_1394, data_1434427a0) ^ zmm1
                            zmm7 = zx.o(0)
                            float temp0_1399[0x4] = _mm_add_ps(
                                __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm0, zmm3, 1), data_142d3f7e0), 
                                zmm3)
                            zmm3 = _mm_cvttps_epi32(temp0_1399)
                            int32_t temp0_1401[0x4] = _mm_cmpgt_epi32(zmm3, arg5)
                            arg7 = ((temp0_1401 & not.o(zmm3)) | (arg5 & temp0_1401)) & zmm4
                            
                            if (arg11 != 1)
                                zmm0 = _mm_sub_ps(zmm0, temp0_1399)
                                zmm7 = zmm0
                            
                            zmm1 = _mm_sub_epi32(arg7, _mm_cmpeq_epi32(zmm0, zmm0))
                            int32_t temp0_1405[0x4] = _mm_cmpgt_epi32(arg5, zmm1)
                            zmm15 = ((temp0_1405 & not.o(arg5)) | (zmm1 & temp0_1405)) & zmm4
                            zmm1 = arg10
                            zmm9 = var_588_5
                    
                    zmm7 &= zmm4
                
                int32_t temp0_1407[0x4] =
                    _mm_srai_epi32(_mm_slli_epi32(temp0_1384 & not.o(zmm2), 0x1f), 0x1f)
                
                if (_mm_movemask_ps(temp0_1407) != 0)
                    zmm9 = zmm12
                    zmm2 = zmm1
                    zmm1 = _mm_cmpgt_epi32(data_143442ce0, data_142d3f780 ^ zmm12)
                    int32_t rax_295
                    rax_295.b = 0f f>= zmm2.d
                    zmm2 = _mm_shuffle_epi32(zx.o(neg.d(rax_295)), 0) | zmm1
                    zmm0 = zmm2 & temp0_1407
                    float var_498_1[0x4] = zmm7
                    int32_t var_528_2[0x4]
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        var_528_2 = arg7
                    else
                        zmm1 = zmm0 & not.o(arg7)
                        zmm0 &= not.o(zmm15)
                        var_528_2 = zmm1
                        zmm15 = zmm0
                    
                    arg5 = arg10
                    zmm4 = zx.o(0)
                    zmm14 = zmm2 & not.o(temp0_1407)
                    uint32_t temp0_1412 = _mm_movemask_ps(zmm14)
                    
                    if (temp0_1412 == 0)
                        arg5 = var_498_1
                        arg7 = var_528_2
                        zmm9 = var_588_5
                    else
                        int32_t temp0_1414[0x4] = _mm_add_epi32(zmm9, _mm_cmpeq_epi32(zmm0, zmm0))
                        
                        if (arg5[0] >= 1f)
                            arg6 = temp0_1414 & zmm14
                            zmm15 = (zmm14 & not.o(zmm15)) | arg6
                            arg7 = (zmm14 & not.o(var_528_2)) | arg6
                            arg5 = var_498_1
                            zmm9 = var_588_5
                        else
                            uint128_t var_578_3 = zmm2
                            zmm0 = _mm_shuffle_epi32(zmm9, 0xf5)
                            arg7 = arg5
                            zmm1 = _mm_mul_epu32(_mm_shuffle_epi32(var_4b8_2, 0xf5), zmm0)
                            zmm0 = _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(var_4b8_2, zmm9), 0xe8), 
                                _mm_shuffle_epi32(zmm1, 0xe8)[0].q)
                            arg5 = _mm_unpacklo_epi32(var_548_2, 0)
                            zmm7 = _mm_unpackhi_epi32(var_548_2, 0)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                            zmm4 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            zmm7 = _mm_add_epi64(zmm7, arg8)
                            arg5 = __paddq_xmmdq_memdq(arg5, var_518_4)
                            zmm3 = data_143442a20
                            zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm4[0].q)
                            zmm7 = _mm_add_epi64(_mm_add_epi64(zmm7, zmm3), zmm1)
                            arg5 = _mm_add_epi64(_mm_add_epi64(arg5, zmm3), zmm0)
                            zmm0 = data_143442c10
                            arg5 &= zmm0
                            zmm7 &= zmm0
                            var_5b8 = zmm7
                            zmm0 = _mm_shuffle_ps(arg7, arg7, 0)
                            zmm2.d = float.s(arg9 - 1)
                            float temp0_1437[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(temp0_1414), zmm0)
                            zmm2.d = zmm2.d f* arg7[0]
                            uint128_t var_428_2 = zmm2
                            int32_t rax_299 = int.d(zmm2.d)
                            int32_t rbp_24 = 0
                            
                            if (rax_299 s>= 0)
                                rbp_24 = rax_299
                            
                            if (rbp_24 s> arg9 - 2)
                                rbp_24 = arg9 - 2
                            
                            zmm1 = _mm_cvttps_epi32(temp0_1437)
                            zmm2 = _mm_cmpgt_epi32(zmm1, zx.o(0)) & zmm1
                            zmm12 = _mm_cmpgt_epi32(temp0_1414, zmm2)
                            zmm12 = (zmm12 & not.o(temp0_1414)) | (zmm2 & zmm12)
                            int32_t var_4d8_2[0x4] = zmm15
                            int32_t var_4f8_4[0x4] = zmm9
                            float var_508_4[0x4] = arg5
                            
                            if (arg9 s< 0x100)
                                zmm2 = _mm_shuffle_epi32(zmm12, 0x4e)
                                float temp0_1487[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm1 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm12, _mm_cmpgt_epi32(zx.o(0), zmm12).q), 
                                    arg5)
                                char rdx_9 = temp0_1412.b
                                
                                if ((rdx_9 & 1) == 0)
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_1487[0].q)
                                    
                                    if ((rdx_9 & 2) != 0)
                                        goto label_14026b97c
                                    
                                    goto label_14026b6c6
                                
                                arg5 = zx.o(*zmm1[0].q)
                                zmm2 = _mm_unpacklo_epi32(zmm2, temp0_1487[0].q)
                                
                                if ((rdx_9 & 2) != 0)
                                label_14026b97c:
                                    arg5 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            arg5, 0), 
                                        arg5, 0xe2)
                                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_5b8)
                                    
                                    if ((rdx_9 & 4) == 0)
                                        goto label_14026b6d4
                                    
                                    goto label_14026b99d
                                
                            label_14026b6c6:
                                zmm2 = __paddq_xmmdq_memdq(zmm2, var_5b8)
                                
                                if ((rdx_9 & 4) != 0)
                                label_14026b99d:
                                    arg5 = _mm_shuffle_ps(arg5, 
                                        _mm_shuffle_ps(zx.o(*zmm2.q), arg5, 0x30), 0x84)
                                    
                                    if ((rdx_9 & 8) != 0)
                                        arg5 = _mm_shuffle_ps(arg5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                arg5, 0x20), 
                                            0x24)
                                else
                                label_14026b6d4:
                                    
                                    if ((rdx_9 & 8) != 0)
                                        arg5 = _mm_shuffle_ps(arg5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                arg5, 0x20), 
                                            0x24)
                                
                                arg5 = __andps_xmmxud_memxud(arg5, data_142ed6810)
                                zmm0 = zx.o(rbp_24)
                                int32_t temp0_1497[0x4] = _mm_shuffle_epi32(zmm0, 0)
                                arg5 = _mm_cmpgt_epi32(arg5, temp0_1497)
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                uint128_t var_478_4 = arg5 ^ zmm0
                                zmm4 = zmm12
                                
                                if (_mm_movemask_ps(arg5 & not.o(zmm14)) != 0)
                                    zmm15 = (arg5 & not.o(temp0_1414)) | (arg5 & zmm12)
                                    zmm9 = _mm_sub_epi32(zmm12, zmm1)
                                    arg5 &= not.o(_mm_cmpgt_epi32(var_4f8_4, zmm9))
                                    zmm3 = zmm14 & arg5
                                    uint32_t i = _mm_movemask_ps(zmm3)
                                    
                                    if (i == 0)
                                        zmm4 = zmm15
                                    else
                                        zmm2 = zmm12
                                        
                                        do
                                            arg8 = zmm9
                                            zmm4 = _mm_shuffle_epi32(zmm9, 0x4e)
                                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                            zmm0 = __paddq_xmmdq_memdq(
                                                _mm_unpacklo_epi32(zmm9, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm9)[0].q), 
                                                var_508_4)
                                            char temp0_1517 = _mm_movemask_ps(zmm3)
                                            
                                            if ((temp0_1517 & 1) == 0)
                                                zmm3 = var_5b8
                                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                                
                                                if ((temp0_1517 & 2) != 0)
                                                    goto label_14026b7c9
                                                
                                                goto label_14026b83c
                                            
                                            zmm7[0] = zx.o(*zmm0.q)[0]
                                            zmm3 = var_5b8
                                            zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                            
                                            if ((temp0_1517 & 2) != 0)
                                            label_14026b7c9:
                                                zmm7 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                        zmm7, 0), 
                                                    zmm7, 0xe2)
                                                zmm4 = _mm_add_epi64(zmm4, zmm3)
                                                
                                                if ((temp0_1517 & 4) == 0)
                                                    goto label_14026b845
                                                
                                                goto label_14026b7e5
                                            
                                        label_14026b83c:
                                            zmm4 = _mm_add_epi64(zmm4, zmm3)
                                            
                                            if ((temp0_1517 & 4) != 0)
                                            label_14026b7e5:
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm7, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_1517 & 8) != 0)
                                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                            zmm7, 0x20), 
                                                        0x24)
                                            else
                                            label_14026b845:
                                                
                                                if ((temp0_1517 & 8) != 0)
                                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                            zmm7, 0x20), 
                                                        0x24)
                                            
                                            zmm1 = _mm_cmpgt_epi32(
                                                __andps_xmmxud_memxud(zmm7, data_142ed6810), 
                                                temp0_1497) & arg5
                                            zmm0 = zx.o(0)
                                            zmm4 = zmm1 & not.o(zmm15)
                                            zmm2 &= zmm1
                                            
                                            if (_mm_movemask_ps(zmm1 & zmm14) != i)
                                                zmm1 ^= arg5
                                                zmm0 = zmm1
                                            
                                            zmm4 |= zmm2
                                            zmm9 = __psubd_xmmdq_memdq(arg8, data_142d3f800)
                                            arg5 = _mm_cmpgt_epi32(var_4f8_4, zmm9) & zmm0
                                            zmm3 = arg5 & zmm14
                                            i = _mm_movemask_ps(zmm3)
                                            zmm2 = arg8
                                            zmm15 = zmm4
                                        while (i != 0)
                                
                                uint32_t temp0_2567 =
                                    _mm_movemask_ps(_mm_andnot_ps(var_478_4, zmm14))
                                uint32_t i_1
                                int32_t temp0_2569[0x4]
                                
                                if (temp0_2567 != 0)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ var_478_4
                                    zmm4 &= var_478_4
                                    temp0_2569 = _mm_cmpeq_epi32(zmm9, zmm9)
                                    zmm12 = _mm_add_epi32(zmm12, temp0_2569)
                                    arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm1
                                    zmm3 = arg5 & zmm14
                                    i_1 = _mm_movemask_ps(zmm3)
                                
                                if (temp0_2567 == 0 || i_1 == 0)
                                    zmm2 = zmm4
                                    zmm15 = var_4d8_2
                                else
                                    arg8 = data_142ed6810
                                    zmm15 = var_4d8_2
                                    
                                    do
                                        zmm2 = _mm_shuffle_epi32(zmm12, 0x4e)
                                        zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                        zmm0 = __paddq_xmmdq_memdq(
                                            _mm_unpacklo_epi32(zmm12, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm12)[0].q), 
                                            var_508_4)
                                        char temp0_2585 = _mm_movemask_ps(zmm3)
                                        
                                        if ((temp0_2585 & 1) == 0)
                                            zmm3 = var_5b8
                                            zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                            
                                            if ((temp0_2585 & 2) != 0)
                                                goto label_14026fab6
                                            
                                            goto label_14026fb27
                                        
                                        zmm7[0] = zx.o(*zmm0.q)[0]
                                        zmm3 = var_5b8
                                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                        
                                        if ((temp0_2585 & 2) != 0)
                                        label_14026fab6:
                                            zmm7 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm7, 
                                                    0), 
                                                zmm7, 0xe2)
                                            zmm2 = _mm_add_epi64(zmm2, zmm3)
                                            
                                            if ((temp0_2585 & 4) == 0)
                                                goto label_14026fb30
                                            
                                            goto label_14026fad2
                                        
                                    label_14026fb27:
                                        zmm2 = _mm_add_epi64(zmm2, zmm3)
                                        
                                        if ((temp0_2585 & 4) != 0)
                                        label_14026fad2:
                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                _mm_shuffle_ps(zx.o(*zmm2.q), zmm7, 0x30), 0x84)
                                            
                                            if ((temp0_2585 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        else
                                        label_14026fb30:
                                            
                                            if ((temp0_2585 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        
                                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm7, arg8), temp0_1497)
                                            & not.o(arg5)
                                        zmm2 = zmm1 & not.o(zmm4)
                                        zmm4 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm1 & zmm14) != i_1)
                                            zmm4 = zmm1 ^ arg5
                                        
                                        zmm2 |= zmm1 & zmm12
                                        zmm12 = _mm_add_epi32(zmm12, temp0_2569)
                                        arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm4
                                        zmm3 = arg5 & zmm14
                                        i_1 = _mm_movemask_ps(zmm3)
                                        zmm4 = zmm2
                                    while (i_1 != 0)
                                
                                zmm3 = (zmm2 & zmm14) | (zmm14 & not.o(var_528_2))
                                float temp0_2597[0x4] = _mm_shuffle_epi32(zmm3, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_2597)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                                arg7 = zmm3
                                zmm0 =
                                    __paddq_xmmdq_memdq(_mm_unpacklo_epi32(zmm3, zmm2.q), var_508_4)
                                
                                if ((rdx_9 & 1) != 0)
                                    zmm2 = zx.o(*zmm0.q)
                                
                                zmm4 = _mm_unpacklo_epi32(temp0_2597, zmm1[0].q)
                                arg8 = var_538_2
                                
                                if ((rdx_9 & 2) == 0)
                                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                    zmm4 = __paddq_xmmdq_memdq(zmm4, var_5b8)
                                    
                                    if ((rdx_9 & 4) != 0)
                                        goto label_14026fdbb
                                    
                                    goto label_14026fc5b
                                
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm2, 
                                        0), 
                                    zmm2, 0xe2)
                                zmm2 = zmm0
                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                zmm4 = __paddq_xmmdq_memdq(zmm4, var_5b8)
                                
                                if ((rdx_9 & 4) == 0)
                                label_14026fc5b:
                                    zmm3 ^= zmm14
                                    
                                    if ((rdx_9 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                else
                                label_14026fdbb:
                                    zmm0 = _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm2, 0x30)
                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                    zmm3 ^= zmm14
                                    
                                    if ((rdx_9 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                
                                zmm15 = (_mm_sub_epi32(arg7, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm14)
                                    | (zmm15 & zmm3)
                                arg5 = _mm_cmpgt_epi32(var_4f8_4, zmm15) & not.o(zmm14)
                                
                                if (_mm_movemask_ps(arg5) != 0)
                                    zmm15 = (temp0_1414 & arg5) | (arg5 & not.o(zmm15))
                                
                                arg5 = var_498_1
                                zmm9 = var_588_5
                                zmm4 = _mm_shuffle_epi32(zmm15, 0x4e)
                                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                zmm3 =
                                    _mm_unpacklo_epi32(zmm15, _mm_cmpgt_epi32(zx.o(0), zmm15)[0].q)
                                zmm1 = _mm_add_epi64(var_508_4, zmm3)
                                
                                if ((rdx_9 & 1) == 0)
                                    zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                    
                                    if ((rdx_9 & 2) != 0)
                                        goto label_14026fe04
                                    
                                    goto label_14026fd29
                                
                                zmm3 = zx.o(*zmm1[0].q)
                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                
                                if ((rdx_9 & 2) != 0)
                                label_14026fe04:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                                    zmm3 = zmm0
                                    arg6 = _mm_add_epi64(var_5b8, zmm4)
                                    
                                    if ((rdx_9 & 4) == 0)
                                        goto label_14026fd36
                                    
                                    goto label_14026fe24
                                
                            label_14026fd29:
                                arg6 = _mm_add_epi64(var_5b8, zmm4)
                                
                                if ((rdx_9 & 4) != 0)
                                label_14026fe24:
                                    zmm0 = _mm_shuffle_ps(zx.o(*arg6[0].q), zmm3, 0x30)
                                    zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                                    
                                    if ((rdx_9 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg6, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                else
                                label_14026fd36:
                                    
                                    if ((rdx_9 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg6, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm2 = __andps_xmmxud_memxud(zmm2, data_142ed6810)
                                zmm3 = __andps_xmmxud_memxud(zmm3, data_142ed6810)
                                zmm7 = var_578_3 ^ zmm0
                                zmm4 = zx.o(0)
                                
                                if (arg11 != 1)
                                label_14026bd22:
                                    zmm3 = _mm_sub_epi32(zmm3, zmm2)
                                    zmm0 = __pcmpgtd_xmmdq_memdq(zmm3, data_142d3f5b0)
                                    zmm4 = var_428_2
                                    zmm4 = _mm_div_ps(
                                        _mm_sub_ps(_mm_shuffle_ps(zmm4, zmm4, 0), 
                                            _mm_cvtepi32_ps(zmm2)), 
                                        _mm_cvtepi32_ps((zmm0 & zmm3)
                                        | (zmm0 & not.o(data_142d3f5b0))))
                            else
                                zmm4 = _mm_add_epi32(zmm12, zmm12)
                                zmm2 = _mm_shuffle_epi32(zmm4, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm4 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q), 
                                    arg5)
                                char rdx_8 = temp0_1412.b
                                
                                if ((rdx_8 & 1) == 0)
                                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                    
                                    if ((rdx_8 & 2) != 0)
                                        goto label_14026b917
                                    
                                    goto label_14026b3f6
                                
                                zmm3 = zx.o(*zmm4[0].q)
                                zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                
                                if ((rdx_8 & 2) != 0)
                                label_14026b917:
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_5b8)
                                    
                                    if ((rdx_8 & 4) == 0)
                                        goto label_14026b404
                                    
                                    goto label_14026b938
                                
                            label_14026b3f6:
                                zmm2 = __paddq_xmmdq_memdq(zmm2, var_5b8)
                                
                                if ((rdx_8 & 4) != 0)
                                label_14026b938:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*zmm2.q), zmm3, 0x30), 0x84)
                                    
                                    if ((rdx_8 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                else
                                label_14026b404:
                                    
                                    if ((rdx_8 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                
                                zmm3 = __andps_xmmxud_memxud(zmm3, data_143442cd0)
                                zmm0 = zx.o(rbp_24)
                                arg8 = _mm_shuffle_epi32(zmm0, 0)
                                zmm3 = _mm_cmpgt_epi32(zmm3, arg8)
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                uint128_t var_478_3 = zmm3 ^ zmm0
                                zmm4 = zmm12
                                
                                if (_mm_movemask_ps(zmm3 & not.o(zmm14)) != 0)
                                    zmm7 = (zmm3 & not.o(temp0_1414)) | (zmm3 & zmm12)
                                    zmm9 = _mm_sub_epi32(zmm12, zmm1)
                                    zmm3 &= not.o(_mm_cmpgt_epi32(var_4f8_4, zmm9))
                                    arg5 = zmm14 & zmm3
                                    uint32_t i_2 = _mm_movemask_ps(arg5)
                                    
                                    if (i_2 == 0)
                                        zmm4 = zmm7
                                    else
                                        arg7 = zmm12
                                        
                                        do
                                            zmm0 = zmm9
                                            zmm2 = _mm_add_epi32(zmm9, zmm9)
                                            zmm4 = _mm_shuffle_epi32(zmm2, 0x4e)
                                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                            zmm2 = __paddq_xmmdq_memdq(
                                                _mm_unpacklo_epi32(zmm2, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q), 
                                                var_508_4)
                                            char temp0_1474 = _mm_movemask_ps(arg5)
                                            
                                            if ((temp0_1474 & 1) == 0)
                                                arg5 = var_5b8
                                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                                
                                                if ((temp0_1474 & 2) != 0)
                                                    goto label_14026b4f9
                                                
                                                goto label_14026b57f
                                            
                                            zmm15[0] = zx.o(*zmm2.q)[0]
                                            arg5 = var_5b8
                                            zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                            
                                            if ((temp0_1474 & 2) != 0)
                                            label_14026b4f9:
                                                zmm15 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                        zmm15, 0), 
                                                    zmm15, 0xe2)
                                                zmm4 = _mm_add_epi64(zmm4, arg5)
                                                
                                                if ((temp0_1474 & 4) == 0)
                                                    goto label_14026b58c
                                                
                                                goto label_14026b51b
                                            
                                        label_14026b57f:
                                            zmm4 = _mm_add_epi64(zmm4, arg5)
                                            
                                            if ((temp0_1474 & 4) != 0)
                                            label_14026b51b:
                                                zmm15 = _mm_shuffle_ps(zmm15, 
                                                    _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm15, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_1474 & 8) != 0)
                                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                            zmm15, 0x20), 
                                                        0x24)
                                            else
                                            label_14026b58c:
                                                
                                                if ((temp0_1474 & 8) != 0)
                                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                            zmm15, 0x20), 
                                                        0x24)
                                            
                                            zmm2 = _mm_cmpgt_epi32(
                                                __andps_xmmxud_memxud(zmm15, data_143442cd0), arg8)
                                                & zmm3
                                            zmm1 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm2 & zmm14) != i_2)
                                                zmm1 = zmm2 ^ zmm3
                                            
                                            zmm4 = (zmm2 & not.o(zmm7)) | (arg7 & zmm2)
                                            zmm9 = __psubd_xmmdq_memdq(zmm0, data_142d3f800)
                                            zmm3 = _mm_cmpgt_epi32(var_4f8_4, zmm9) & zmm1
                                            arg5 = zmm3 & zmm14
                                            i_2 = _mm_movemask_ps(arg5)
                                            arg7 = zmm0
                                            zmm7 = zmm4
                                        while (i_2 != 0)
                                
                                uint32_t temp0_1544 =
                                    _mm_movemask_ps(_mm_andnot_ps(var_478_3, zmm14))
                                uint32_t i_3
                                int32_t temp0_1546[0x4]
                                
                                if (temp0_1544 != 0)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ var_478_3
                                    zmm4 &= var_478_3
                                    temp0_1546 = _mm_cmpeq_epi32(zmm9, zmm9)
                                    zmm12 = _mm_add_epi32(zmm12, temp0_1546)
                                    arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm1
                                    zmm3 = arg5 & zmm14
                                    i_3 = _mm_movemask_ps(zmm3)
                                
                                if (temp0_1544 == 0 || i_3 == 0)
                                    zmm2 = zmm4
                                    zmm15 = var_4d8_2
                                else
                                    arg7 = data_143442cd0
                                    zmm15 = var_4d8_2
                                    
                                    do
                                        zmm0 = _mm_add_epi32(zmm12, zmm12)
                                        zmm2 = _mm_shuffle_epi32(zmm0, 0x4e)
                                        zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                        zmm0 = __paddq_xmmdq_memdq(
                                            _mm_unpacklo_epi32(zmm0, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                            var_508_4)
                                        char temp0_1563 = _mm_movemask_ps(zmm3)
                                        
                                        if ((temp0_1563 & 1) == 0)
                                            zmm3 = var_5b8
                                            zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                            
                                            if ((temp0_1563 & 2) != 0)
                                                goto label_14026ba56
                                            
                                            goto label_14026baca
                                        
                                        zmm7[0] = zx.o(*zmm0.q)[0]
                                        zmm3 = var_5b8
                                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                        
                                        if ((temp0_1563 & 2) != 0)
                                        label_14026ba56:
                                            zmm7 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm7, 
                                                    0), 
                                                zmm7, 0xe2)
                                            zmm2 = _mm_add_epi64(zmm2, zmm3)
                                            
                                            if ((temp0_1563 & 4) == 0)
                                                goto label_14026bad3
                                            
                                            goto label_14026ba72
                                        
                                    label_14026baca:
                                        zmm2 = _mm_add_epi64(zmm2, zmm3)
                                        
                                        if ((temp0_1563 & 4) != 0)
                                        label_14026ba72:
                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                _mm_shuffle_ps(zx.o(*zmm2.q), zmm7, 0x30), 0x84)
                                            
                                            if ((temp0_1563 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        else
                                        label_14026bad3:
                                            
                                            if ((temp0_1563 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        
                                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm7, arg7), arg8)
                                            & not.o(arg5)
                                        zmm2 = zmm1 & not.o(zmm4)
                                        zmm4 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm1 & zmm14) != i_3)
                                            zmm4 = zmm1 ^ arg5
                                        
                                        zmm2 |= zmm1 & zmm12
                                        zmm12 = _mm_add_epi32(zmm12, temp0_1546)
                                        arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm4
                                        zmm3 = arg5 & zmm14
                                        i_3 = _mm_movemask_ps(zmm3)
                                        zmm4 = zmm2
                                    while (i_3 != 0)
                                
                                zmm2 = (zmm2 & zmm14) | (zmm14 & not.o(var_528_2))
                                arg7 = zmm2
                                zmm0 = _mm_add_epi32(zmm2, zmm2)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm0 =
                                    __paddq_xmmdq_memdq(_mm_unpacklo_epi32(zmm0, zmm2.q), var_508_4)
                                
                                if ((rdx_8 & 1) != 0)
                                    zmm2 = zx.o(*zmm0.q)
                                
                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                arg8 = var_538_2
                                
                                if ((rdx_8 & 2) == 0)
                                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                    zmm4 = __paddq_xmmdq_memdq(zmm4, var_5b8)
                                    
                                    if ((rdx_8 & 4) != 0)
                                        goto label_14026f98f
                                    
                                    goto label_14026bbfe
                                
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm2, 
                                        0), 
                                    zmm2, 0xe2)
                                zmm2 = zmm0
                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                zmm4 = __paddq_xmmdq_memdq(zmm4, var_5b8)
                                
                                if ((rdx_8 & 4) == 0)
                                label_14026bbfe:
                                    zmm3 ^= zmm14
                                    
                                    if ((rdx_8 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                else
                                label_14026f98f:
                                    zmm0 = _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm2, 0x30)
                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                    zmm3 ^= zmm14
                                    
                                    if ((rdx_8 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                
                                zmm15 = (_mm_sub_epi32(arg7, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm14)
                                    | (zmm15 & zmm3)
                                arg5 = _mm_cmpgt_epi32(var_4f8_4, zmm15) & not.o(zmm14)
                                
                                if (_mm_movemask_ps(arg5) != 0)
                                    zmm15 = (temp0_1414 & arg5) | (arg5 & not.o(zmm15))
                                
                                arg5 = var_498_1
                                zmm9 = var_588_5
                                zmm1 = _mm_add_epi32(zmm15, zmm15)
                                zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                zmm3 = _mm_add_epi64(var_508_4, 
                                    _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1)[0].q))
                                zmm1 = zmm3
                                
                                if ((rdx_8 & 1) == 0)
                                    zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                    
                                    if ((rdx_8 & 2) != 0)
                                        goto label_14026f9d8
                                    
                                    goto label_14026bcd3
                                
                                zmm3 = zx.o(*zmm1[0].q)
                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                
                                if ((rdx_8 & 2) != 0)
                                label_14026f9d8:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                                    zmm3 = zmm0
                                    arg6 = _mm_add_epi64(var_5b8, zmm4)
                                    
                                    if ((rdx_8 & 4) == 0)
                                        goto label_14026bce0
                                    
                                    goto label_14026f9f8
                                
                            label_14026bcd3:
                                arg6 = _mm_add_epi64(var_5b8, zmm4)
                                
                                if ((rdx_8 & 4) != 0)
                                label_14026f9f8:
                                    zmm0 = _mm_shuffle_ps(zx.o(*arg6[0].q), zmm3, 0x30)
                                    zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                                    
                                    if ((rdx_8 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg6, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                else
                                label_14026bce0:
                                    
                                    if ((rdx_8 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg6, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm2 = __andps_xmmxud_memxud(zmm2, data_143442cd0)
                                zmm3 = __andps_xmmxud_memxud(zmm3, data_143442cd0)
                                zmm7 = var_578_3 ^ zmm0
                                zmm4 = zx.o(0)
                                
                                if (arg11 != 1)
                                    goto label_14026bd22
                            
                            zmm4 = _mm_and_ps(zmm4, zmm7)
                    
                    zmm7 = (temp0_1407 & not.o(arg5)) | (zmm4 & temp0_1407)
                
                arg6 = var_5a8_1
                zmm3 = var_548_2
                zmm11 = var_518_4
            
            float var_498_2[0x4] = zmm7
            zmm7 = _mm_unpacklo_epi32(zmm3, 0)
            zmm3 = _mm_unpackhi_epi32(zmm3, 0)
            arg5 = _mm_shuffle_epi32(_mm_mul_epu32(arg7, var_4b8_2), 0xe8)
            zmm14 = _mm_shuffle_epi32(var_4b8_2, 0xf5)
            int32_t var_528_3[0x4] = arg7
            arg5 = _mm_unpacklo_epi32(arg5, 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg7, 0xf5), zmm14), 0xe8).q)
            zmm0 = _mm_cmpgt_epi32(zx.o(0), arg5)
            zmm4 = _mm_shuffle_epi32(arg5, 0x4e)
            arg5 = _mm_unpacklo_epi32(arg5, zmm0.q)
            zmm4 = _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q)
            float var_4e8_4[0x4] = zmm4
            zmm4 = _mm_add_epi64(zmm4, zmm3)
            zmm2 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, var_488_2)
            uint128_t var_4f8_5 = zmm2
            zmm2 &= zmm9
            char temp0_1630 = _mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f))
            float var_478_5[0x4] = arg5
            float var_508_5[0x4] = zmm7
            zmm0 = _mm_add_epi64(_mm_add_epi64(arg5, zmm7), zmm11)
            int32_t var_458_4[0x4] = zmm0
            float var_4a8_3[0x4] = _mm_add_epi64(zmm4, arg8)
            int32_t var_548_3[0x4] = zmm3
            int32_t var_4d8_3[0x4] = zmm15
            float var_3a8_2[0x4] = zmm14
            
            if (temp0_1630 == 0)
                arg5 = var_568_3
                zmm2 = var_4f8_5
                zmm4 = arg6
                zmm7 = var_558_3
            else
                zmm1 = _mm_srai_epi32(
                    _mm_slli_epi32(__pcmpeqd_xmmdq_memdq(zx.o(0), var_598_1) & zmm2, 0x1f), 0x1f)
                char temp0_1637 = _mm_movemask_ps(zmm1)
                
                if (temp0_1637 == 0)
                    zmm0 = var_568_3
                    zmm4 = arg6
                    zmm7 = var_558_3
                else
                    zmm14 = arg6
                    arg5 = _mm_add_epi64(var_398_2, zmm3)
                    int32_t temp0_1640[0x4] =
                        __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_438_2, var_508_5), var_478_5)
                    arg5 = __paddq_xmmdq_memdq(arg5, var_4e8_4)
                    zmm7 = data_1434426c0
                    arg5 = _mm_add_epi64(arg5, zmm7)
                    int32_t temp0_1643[0x4] = _mm_add_epi64(temp0_1640, zmm7)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                    arg6 = temp0_1643 & zmm4
                    zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                    arg5 &= zmm0
                    int64_t rax_354 = _mm_shuffle_epi32(arg6, 0x4e)[0].q
                    void* rbx_41 = arg4 + rax_354
                    zmm1 = *(arg4 + rax_354)
                    int64_t rax_355 = arg5[0].q
                    void* rdi_14 = arg4 + rax_355
                    zmm9 = *(arg4 + rax_355)
                    int64_t rax_356 = _mm_shuffle_epi32(arg5, 0x4e)[0].q
                    void* rsi_13 = arg4 + rax_356
                    zmm12 = *(arg4 + rax_356)
                    zmm3 = zmm4 & zmm7
                    zmm7 &= zmm0
                    void* rbp_26 = arg6[0].q + arg4
                    arg7 = *(zmm3[0].q + rbp_26)
                    zmm3 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rbx_41)
                    arg6 = *(zmm7[0].q + rdi_14)
                    arg8 = *(_mm_shuffle_epi32(zmm7, 0x4e)[0].q + rsi_13)
                    zmm7 = data_1434426e0
                    zmm4 &= zmm7
                    zmm0 &= zmm7
                    arg5 = *(zmm4[0].q + rbp_26)
                    zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rbx_41)
                    zmm7 = *(zmm0.q + rdi_14)
                    zmm15 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rsi_13)
                    bool cond:26_1
                    bool cond:27_1
                    bool cond:31_1
                    bool cond:32_1
                    
                    if ((temp0_1637 & 1) == 0)
                        char temp5_1 = temp0_1637 & 2
                        cond:26_1 = temp5_1 != 0
                        cond:27_1 = temp5_1 == 0
                        cond:31_1 = temp5_1 != 0
                        cond:32_1 = temp5_1 == 0
                        
                        if (temp5_1 == 0)
                            goto label_14026c21f
                        
                        goto label_14026bfda
                    
                    var_5b8 = *rbp_26
                    char temp4_1 = temp0_1637 & 2
                    cond:26_1 = temp4_1 != 0
                    cond:27_1 = temp4_1 == 0
                    cond:31_1 = temp4_1 != 0
                    cond:32_1 = temp4_1 == 0
                    
                    if (temp4_1 == 0)
                    label_14026c21f:
                        
                        if (cond:27_1)
                            goto label_14026bff0
                        
                        goto label_14026c225
                    
                label_14026bfda:
                    zmm0 = var_5b8
                    var_5b8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm0, 0), zmm0, 0xe2)
                    
                    if (not(cond:26_1))
                    label_14026bff0:
                        
                        if (cond:32_1)
                            goto label_14026c22f
                        
                        goto label_14026bff6
                    
                label_14026c225:
                    arg7 = _mm_unpacklo_ps(arg7, zmm3[0].q)
                    bool cond:49_1
                    bool cond:50_1
                    bool cond:56_1
                    bool cond:57_1
                    
                    if (not(cond:31_1))
                    label_14026c22f:
                        char temp11_1 = temp0_1637 & 4
                        cond:49_1 = temp11_1 != 0
                        cond:50_1 = temp11_1 == 0
                        cond:56_1 = temp11_1 != 0
                        cond:57_1 = temp11_1 == 0
                        
                        if (temp11_1 == 0)
                            goto label_14026c002
                        
                        goto label_14026c238
                    
                label_14026bff6:
                    arg5 = _mm_unpacklo_ps(arg5, zmm4[0].q)
                    char temp10_1 = temp0_1637 & 4
                    cond:49_1 = temp10_1 != 0
                    cond:50_1 = temp10_1 == 0
                    cond:56_1 = temp10_1 != 0
                    cond:57_1 = temp10_1 == 0
                    
                    if (temp10_1 == 0)
                    label_14026c002:
                        
                        if (cond:50_1)
                            goto label_14026c250
                        
                        goto label_14026c00d
                    
                label_14026c238:
                    zmm0 = var_5b8
                    var_5b8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm9, zmm0, 0x30), 0x84)
                    
                    if (not(cond:49_1))
                    label_14026c250:
                        zmm9 = var_588_5
                        
                        if (cond:57_1)
                            goto label_14026c01f
                        
                        goto label_14026c261
                    
                label_14026c00d:
                    arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(arg6, arg7, 0x30), 0x84)
                    zmm9 = var_588_5
                    bool cond:82_1
                    bool cond:83_1
                    bool cond:104_1
                    bool cond:105_1
                    
                    if (not(cond:56_1))
                    label_14026c01f:
                        zmm0 = var_568_3
                        zmm4 = zmm14
                        char temp23_1 = temp0_1637 & 8
                        cond:82_1 = temp23_1 != 0
                        cond:83_1 = temp23_1 == 0
                        cond:104_1 = temp23_1 != 0
                        cond:105_1 = temp23_1 == 0
                        
                        if (temp23_1 == 0)
                            goto label_14026c279
                        
                        goto label_14026c033
                    
                label_14026c261:
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm7, arg5, 0x30), 0x84)
                    zmm0 = var_568_3
                    zmm4 = zmm14
                    char temp22_1 = temp0_1637 & 8
                    cond:82_1 = temp22_1 != 0
                    cond:83_1 = temp22_1 == 0
                    cond:104_1 = temp22_1 != 0
                    cond:105_1 = temp22_1 == 0
                    
                    if (temp22_1 == 0)
                    label_14026c279:
                        
                        if (cond:83_1)
                            goto label_14026c04b
                        
                        goto label_14026c284
                    
                label_14026c033:
                    zmm1 = var_5b8
                    var_5b8 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x20), 0x24)
                    
                    if (cond:82_1)
                    label_14026c284:
                        arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(arg8, arg7, 0x20), 0x24)
                        arg8 = var_538_2
                        
                        if (cond:104_1)
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm15, arg5, 0x20), 0x24)
                    else
                    label_14026c04b:
                        arg8 = var_538_2
                        
                        if (not(cond:105_1))
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm15, arg5, 0x20), 0x24)
                    
                    zmm14 = arg5
                    zmm7 = var_558_3
                    zmm11 = var_518_4
                    zmm15 = var_4d8_3
                
                zmm3 = __pcmpeqd_xmmdq_memdq(zx.o(0), var_598_1) & not.o(zmm2)
                arg5 = _mm_slli_epi32(zmm3, 0x1f)
                char temp0_1663 = _mm_movemask_ps(arg5)
                
                if (temp0_1663 == 0)
                    arg5 = zmm0
                    zmm2 = var_4f8_5
                    arg6 = zmm14
                else
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                    arg5 = _mm_srai_epi32(arg5, 0x1f) & zmm1
                    int32_t var_578_4[0x4] = arg7
                    arg8 = zmm4
                    
                    if (_mm_movemask_ps(arg5) == 0)
                        zmm15 = var_458_4
                        zmm12 = var_4a8_3
                    else
                        arg7 = data_1434426c0
                        zmm0 = var_4a8_3
                        zmm2 = _mm_add_epi64(zmm0, arg7)
                        zmm4 = var_458_4
                        int32_t temp0_1669[0x4] = _mm_add_epi64(zmm4, arg7)
                        zmm7 = _mm_cmpeq_epi32(zmm7, zmm7) ^ arg5
                        int32_t temp0_1671[0x4] = _mm_shuffle_epi32(zmm7, 0x50)
                        zmm15 = (temp0_1671 & not.o(temp0_1669)) | (zmm4 & temp0_1671)
                        zmm12 = _mm_shuffle_epi32(zmm7, 0xfa)
                        zmm12 = (zmm12 & not.o(zmm2)) | (zmm0 & zmm12)
                        zmm2 = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                        zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_438_2, var_508_5), 
                            var_478_5)
                        zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, var_4e8_4), arg7)
                        zmm4 = _mm_add_epi64(zmm4, arg7)
                        arg6 = _mm_shuffle_epi32(arg5, 0x50) & zmm4
                        zmm4 = _mm_shuffle_epi32(arg5, 0xfa) & zmm2
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + arg6[0].q)), 
                                zx.q(*(arg4 + _mm_shuffle_epi32(arg6, 0x4e).q))), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm4[0].q)), 
                            zx.o(*(arg4 + _mm_shuffle_epi32(zmm4, 0x4e)[0].q))[0].q).q)
                    
                    zmm2 = var_5b8
                    zmm1 &= zmm0
                    
                    if ((temp0_1663 & 1) != 0)
                        zmm2.d = zmm1[0]
                        zmm9 = var_588_5
                        
                        if ((temp0_1663 & 2) != 0)
                            goto label_14026c2fc
                        
                        goto label_14026c2d2
                    
                    zmm9 = var_588_5
                    
                    if ((temp0_1663 & 2) != 0)
                    label_14026c2fc:
                        zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                        zmm2 = zmm0
                        
                        if ((temp0_1663 & 4) != 0)
                            goto label_14026c2da
                        
                        goto label_14026c308
                    
                label_14026c2d2:
                    
                    if ((temp0_1663 & 4) == 0)
                    label_14026c308:
                        
                        if ((temp0_1663 & 8) != 0)
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                    else
                    label_14026c2da:
                        zmm0 = _mm_shuffle_ps(zmm1, zmm2, 0x32)
                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                        
                        if ((temp0_1663 & 8) != 0)
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                    
                    zmm7 = data_1434422d0
                    zmm1 = arg8 & zmm7
                    zmm7 = _mm_srai_epi32(_mm_slli_epi32(_mm_cmpeq_epi32(zmm7, zmm1) & zmm3, 0x1f), 
                        0x1f)
                    char temp0_1702 = _mm_movemask_ps(zmm7)
                    var_5b8 = zmm2
                    
                    if (temp0_1702 == 0)
                        zmm2 = var_568_3
                        arg7 = var_578_4
                    else
                        arg6 = data_1434426c0
                        zmm7 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                        
                        if ((temp0_1702 & 1) != 0)
                            arg5 = *zmm15[0].q
                        
                        zmm2 = _mm_add_epi64(zmm12, arg6)
                        int32_t temp0_1705[0x4] = _mm_add_epi64(arg6, zmm15)
                        zmm0 = _mm_shuffle_epi32(zmm7, 0x50)
                        zmm7 = _mm_shuffle_epi32(zmm7, 0xfa)
                        
                        if ((temp0_1702 & 2) != 0)
                            arg5 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm15, 0x4e)[0].q, arg5, 0), 
                                arg5, 0xe2)
                        
                        if ((temp0_1702 & 4) != 0)
                            arg5 =
                                _mm_shuffle_ps(arg5, _mm_shuffle_ps(*zmm12[0].q, arg5, 0x30), 0x84)
                        
                        zmm15 = (zmm15 & zmm0) | (zmm0 & not.o(temp0_1705))
                        
                        if ((temp0_1702 & 8) != 0)
                            arg5 = _mm_shuffle_ps(arg5, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, arg5, 0x20), 0x24)
                        
                        zmm12 = (zmm12 & zmm7) | (zmm7 & not.o(zmm2))
                        zmm2 = var_568_3
                        arg7 = var_578_4
                        zmm9 = var_588_5
                    
                    arg6 = zmm14
                    zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(arg5)
                    
                    if ((temp0_1663 & 1) != 0)
                        arg7[0] = zmm1[0]
                        arg5 = zmm2
                        zmm2 = var_4f8_5
                        
                        if ((temp0_1663 & 2) != 0)
                            goto label_14026c47d
                        
                        goto label_14026c445
                    
                    arg5 = zmm2
                    zmm2 = var_4f8_5
                    
                    if ((temp0_1663 & 2) != 0)
                    label_14026c47d:
                        arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg7, 1), arg7, 0xe2)
                        
                        if ((temp0_1663 & 4) != 0)
                            goto label_14026c452
                        
                        goto label_14026c486
                    
                label_14026c445:
                    
                    if ((temp0_1663 & 4) == 0)
                    label_14026c486:
                        
                        if ((temp0_1663 & 8) != 0)
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x23), 0x24)
                    else
                    label_14026c452:
                        arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x32), 0x84)
                        
                        if ((temp0_1663 & 8) != 0)
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x23), 0x24)
                    
                    zmm0 = data_142fc95e0
                    zmm1 = arg8 & zmm0
                    zmm3 = _mm_slli_epi32(zmm3 & _mm_cmpeq_epi32(zmm0, zmm1), 0x1f)
                    char temp0_1725 = _mm_movemask_ps(zmm3)
                    
                    if (temp0_1725 == 0)
                        zmm4 = arg8
                        zmm11 = var_518_4
                        arg8 = var_538_2
                        zmm7 = var_558_3
                        zmm15 = var_4d8_3
                    else
                        if ((temp0_1725 & 1) != 0)
                            zmm3 = *zmm15[0].q
                        
                        if ((temp0_1725 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm15, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                        
                        zmm4 = arg8
                        zmm11 = var_518_4
                        zmm15 = var_4d8_3
                        arg8 = var_538_2
                        
                        if ((temp0_1725 & 4) != 0)
                            zmm3 =
                                _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm12[0].q, zmm3, 0x30), 0x84)
                        
                        if ((temp0_1725 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm3, 0x20), 0x24)
                        
                        zmm7 = var_558_3
                    
                    zmm0 = zx.o(0)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm0) & not.o(zmm3)
                    
                    if ((temp0_1663 & 1) != 0)
                        arg6[0] = zmm1[0]
                        
                        if ((temp0_1663 & 2) != 0)
                            goto label_14026c5b5
                        
                        goto label_14026c592
                    
                    if ((temp0_1663 & 2) != 0)
                    label_14026c5b5:
                        zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg6, 1), arg6, 0xe2)
                        arg6 = zmm0
                        
                        if ((temp0_1663 & 4) != 0)
                            goto label_14026c59a
                        
                        goto label_14026c5c1
                    
                label_14026c592:
                    
                    if ((temp0_1663 & 4) == 0)
                    label_14026c5c1:
                        
                        if ((temp0_1663 & 8) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                    else
                    label_14026c59a:
                        zmm0 = _mm_shuffle_ps(zmm1, arg6, 0x32)
                        arg6 = _mm_shuffle_ps(arg6, zmm0, 0x84)
                        
                        if ((temp0_1663 & 8) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
            
            uint128_t var_428_3 = _mm_cmpeq_epi32(zmm0, zmm0) ^ zmm2
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm9), 0x1f)) == 0)
                zmm14 = var_528_3
            else
                if (temp0_1369 != 0)
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f) & arg5
                    zmm1 = zmm2 & zmm9
                    uint32_t temp0_1746 = _mm_movemask_ps(zmm1)
                    zmm7 = zx.o(0)
                    zmm3 = arg5
                    zmm14 = zmm11
                    zmm12 = arg8
                    float var_338_1[0x4] = zx.o(0)
                    arg5 = zx.o(0)
                    int32_t var_4c8_2[0x4] = arg6
                    
                    if (temp0_1746 != 0)
                        char rdx_14 = temp0_1746.b
                        
                        if ((rdx_14 & 1) == 0)
                            if ((rdx_14 & 2) != 0)
                                goto label_14026c80b
                            
                            goto label_14026c665
                        
                        zmm4 = *zmm11[0].q
                        
                        if ((rdx_14 & 2) != 0)
                        label_14026c80b:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm4, 0), zmm4, 
                                0xe2)
                            zmm4 = zmm0
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((rdx_14 & 4) == 0)
                                goto label_14026c672
                            
                            goto label_14026c82c
                        
                    label_14026c665:
                        zmm0 = _mm_cmpeq_epi32(zx.o(0), zx.o(0))
                        
                        if ((rdx_14 & 4) != 0)
                        label_14026c82c:
                            zmm4 =
                                _mm_shuffle_ps(zmm4, _mm_shuffle_ps(*arg8[0].q, zmm4, 0x30), 0x84)
                            zmm1 ^= zmm0
                            
                            if ((rdx_14 & 8) != 0)
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm4, 0x20), 
                                    0x24)
                        else
                        label_14026c672:
                            zmm1 ^= zmm0
                            
                            if ((rdx_14 & 8) != 0)
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm4, 0x20), 
                                    0x24)
                        
                        arg6 = _mm_shuffle_epi32(zmm1, 0x50)
                        char temp0_1752 = _mm_movemask_ps(zmm2)
                        zmm3 = zx.o(0)
                        
                        if ((temp0_1752 & 1) != 0)
                            zmm3[0] = zmm4[0]
                        
                        arg8 = data_1434426c0
                        arg6 = _mm_slli_epi32(arg6, 0x1f)
                        
                        if ((temp0_1752 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm3, 1), zmm3, 0xe2)
                        
                        zmm7 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm0 = _mm_add_epi64(zmm11, arg8)
                        int32_t temp0_1758[0x4] = _mm_srai_epi32(arg6, 0x1f)
                        
                        if ((temp0_1752 & 4) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x32), 0x84)
                        
                        zmm7 = _mm_slli_epi32(zmm7, 0x1f)
                        zmm2 = temp0_1758 & not.o(zmm0)
                        zmm14 = zmm11 & temp0_1758
                        
                        if ((temp0_1752 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x23), 0x24)
                        
                        zmm4 = var_5a8_1
                        var_338_1 = zmm3
                        zmm0 = _mm_add_epi64(var_538_2, arg8)
                        zmm7 = _mm_srai_epi32(zmm7, 0x1f)
                        zmm2 |= zmm14
                        
                        if ((rdx_14 & 1) != 0)
                            zmm3 = *zmm2.q
                        
                        zmm1 = zmm7 & not.o(zmm0)
                        zmm12 = var_538_2 & zmm7
                        
                        if ((rdx_14 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                            zmm1 |= zmm12
                            
                            if ((rdx_14 & 4) != 0)
                            label_14026c876:
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm1[0].q, zmm3, 0x30), 
                                    0x84)
                                
                                if ((rdx_14 & 8) == 0)
                                    goto label_14026c785
                                
                                goto label_14026c895
                        else
                            zmm1 |= zmm12
                            
                            if ((rdx_14 & 4) != 0)
                                goto label_14026c876
                        
                        if ((rdx_14 & 8) == 0)
                        label_14026c785:
                            arg5 = zx.o(0)
                            
                            if ((temp0_1752 & 1) == 0)
                                goto label_14026c8a7
                            
                            goto label_14026c793
                        
                    label_14026c895:
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e).q, zmm3, 0x20), 0x24)
                        arg5 = zx.o(0)
                        
                        if ((temp0_1752 & 1) == 0)
                        label_14026c8a7:
                            
                            if ((temp0_1752 & 2) == 0)
                                goto label_14026c7a1
                            
                            goto label_14026c8bc
                        
                    label_14026c793:
                        arg5[0] = zmm3[0]
                        
                        if ((temp0_1752 & 2) == 0)
                        label_14026c7a1:
                            zmm1 = _mm_add_epi64(zmm1, arg8)
                            zmm2 = _mm_add_epi64(zmm2, arg8)
                            
                            if ((temp0_1752 & 4) == 0)
                                goto label_14026c8d3
                            
                            goto label_14026c7bc
                        
                    label_14026c8bc:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, arg5, 1), arg5, 0xe2)
                        zmm1 = _mm_add_epi64(zmm1, arg8)
                        zmm2 = _mm_add_epi64(zmm2, arg8)
                        
                        if ((temp0_1752 & 4) != 0)
                        label_14026c7bc:
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm3, arg5, 0x32), 0x84)
                            arg6 = temp0_1758 & not.o(zmm2)
                            zmm7 &= not.o(zmm1)
                            
                            if ((temp0_1752 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm3, arg5, 0x23), 0x24)
                        else
                        label_14026c8d3:
                            arg6 = temp0_1758 & not.o(zmm2)
                            zmm7 &= not.o(zmm1)
                            
                            if ((temp0_1752 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm3, arg5, 0x23), 0x24)
                        
                        zmm14 |= arg6
                        zmm12 |= zmm7
                        zmm3 = var_568_3
                        zmm9 = var_588_5
                        arg6 = var_4c8_2
                        zmm7 = zx.o(0)
                    
                    zmm11 = arg5
                    zmm0 = data_1434422d0
                    arg5 = zmm3
                    zmm2 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & zmm3
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm2 & zmm9, 0x1f), 0x1f)
                    char temp0_1793 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_1793 == 0)
                        zmm15 = zx.o(0)
                    else
                        if ((temp0_1793 & 1) == 0)
                            if ((temp0_1793 & 2) != 0)
                                goto label_14026cab1
                            
                            goto label_14026c968
                        
                        zmm3 = *zmm14[0].q
                        
                        if ((temp0_1793 & 2) != 0)
                        label_14026cab1:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                            zmm3 = zmm0
                            
                            if ((temp0_1793 & 4) == 0)
                                goto label_14026c972
                            
                            goto label_14026cacb
                        
                    label_14026c968:
                        
                        if ((temp0_1793 & 4) != 0)
                        label_14026cacb:
                            zmm0 = _mm_shuffle_ps(*zmm12[0].q, zmm3, 0x30)
                            zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                            
                            if ((temp0_1793 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm3, 0x20)
                                zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                        else
                        label_14026c972:
                            
                            if ((temp0_1793 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm3, 0x20)
                                zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                        
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                        char temp0_1798 = _mm_movemask_ps(zmm2)
                        zmm7 = zx.o(0)
                        
                        if ((temp0_1798 & 1) != 0)
                            zmm7[0] = zmm3[0]
                        
                        zmm9 = data_1434426c0
                        zmm1 ^= zmm0
                        
                        if ((temp0_1798 & 2) != 0)
                            zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm7, 1), zmm7, 0xe2)
                        
                        zmm2 = _mm_add_epi64(zmm14, zmm9)
                        arg6 = _mm_shuffle_epi32(zmm1, 0x50)
                        
                        if ((temp0_1798 & 4) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm3, zmm7, 0x32), 0x84)
                        
                        if ((temp0_1798 & 8) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm3, zmm7, 0x23), 0x24)
                        
                        zmm3 = _mm_add_epi64(zmm12, zmm9)
                        zmm1 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm2 = (zmm14 & arg6) | (arg6 & not.o(zmm2))
                        
                        if ((temp0_1793 & 1) != 0)
                            arg8 = *zmm2.q
                        
                        zmm0 = zmm1 & not.o(zmm3)
                        zmm3 = zmm12 & zmm1
                        
                        if ((temp0_1793 & 2) != 0)
                            arg8 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, arg8, 0), arg8, 
                                0xe2)
                            zmm4 = var_5a8_1
                            arg5 = var_568_3
                            zmm3 |= zmm0
                            
                            if ((temp0_1793 & 4) != 0)
                            label_14026cb2c:
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(*zmm3[0].q, arg8, 0x30), 
                                    0x84)
                                
                                if ((temp0_1793 & 8) == 0)
                                    goto label_14026ca56
                                
                                goto label_14026cb4e
                        else
                            zmm3 |= zmm0
                            
                            if ((temp0_1793 & 4) != 0)
                                goto label_14026cb2c
                        
                        if ((temp0_1793 & 8) == 0)
                        label_14026ca56:
                            zmm15 = zx.o(0)
                            
                            if ((temp0_1798 & 1) == 0)
                                goto label_14026cb61
                            
                            goto label_14026ca64
                        
                    label_14026cb4e:
                        arg8 = _mm_shuffle_ps(arg8, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, arg8, 0x20), 0x24)
                        zmm15 = zx.o(0)
                        
                        if ((temp0_1798 & 1) != 0)
                        label_14026ca64:
                            zmm15[0] = arg8[0]
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            arg6 = _mm_slli_epi32(arg6, 0x1f)
                            
                            if ((temp0_1798 & 2) != 0)
                                zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm15, 1), zmm15, 0xe2)
                        else
                        label_14026cb61:
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            arg6 = _mm_slli_epi32(arg6, 0x1f)
                            
                            if ((temp0_1798 & 2) != 0)
                                zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm15, 1), zmm15, 0xe2)
                        
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        int32_t temp0_1829[0x4] = _mm_srai_epi32(arg6, 0x1f)
                        zmm3 = _mm_add_epi64(zmm3, zmm9)
                        zmm2 = _mm_add_epi64(zmm2, zmm9)
                        
                        if ((temp0_1798 & 4) != 0)
                            zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg8, zmm15, 0x32), 0x84)
                        
                        if ((temp0_1798 & 8) != 0)
                            zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg8, zmm15, 0x23), 0x24)
                        
                        zmm14 = (zmm14 & temp0_1829) | (temp0_1829 & not.o(zmm2))
                        zmm12 = (zmm12 & zmm1) | (zmm1 & not.o(zmm3))
                        zmm9 = var_588_5
                        arg6 = var_4c8_2
                    
                    zmm0 = data_142fc95e0
                    zmm3 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & arg5
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm3 & zmm9, 0x1f), 0x1f)
                    char temp0_1839 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_1839 == 0)
                        arg8 = zx.o(0)
                        zmm1 = zx.o(0)
                        zmm14 = arg5
                        arg5 = var_338_1
                    else
                        if ((temp0_1839 & 1) == 0)
                            if ((temp0_1839 & 2) != 0)
                                goto label_14026cdb2
                            
                            goto label_14026cc2e
                        
                        zmm2 = *zmm14[0].q
                        
                        if ((temp0_1839 & 2) != 0)
                        label_14026cdb2:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm2, 0), zmm2, 
                                0xe2)
                            zmm2 = zmm0
                            
                            if ((temp0_1839 & 4) == 0)
                                goto label_14026cc37
                            
                            goto label_14026cdcb
                        
                    label_14026cc2e:
                        
                        if ((temp0_1839 & 4) != 0)
                        label_14026cdcb:
                            zmm0 = _mm_shuffle_ps(*zmm12[0].q, zmm2, 0x30)
                            zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                            
                            if ((temp0_1839 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm2, 0x20)
                                zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                        else
                        label_14026cc37:
                            
                            if ((temp0_1839 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm2, 0x20)
                                zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                        
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                        char temp0_1844 = _mm_movemask_ps(zmm3)
                        arg8 = zx.o(0)
                        
                        if ((temp0_1844 & 1) != 0)
                            arg8[0] = zmm2.d
                        
                        zmm3 = data_1434426c0
                        zmm1 ^= zmm0
                        
                        if ((temp0_1844 & 2) != 0)
                            arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg8, 1), arg8, 0xe2)
                        
                        zmm0 = _mm_add_epi64(zmm14, zmm3)
                        arg6 = _mm_shuffle_epi32(zmm1, 0x50)
                        
                        if ((temp0_1844 & 4) != 0)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x32), 0x84)
                            arg5 = var_568_3
                        
                        zmm14 &= arg6
                        arg6 &= not.o(zmm0)
                        
                        if ((temp0_1844 & 8) != 0)
                            zmm2 = _mm_shuffle_ps(zmm2, arg8, 0x23)
                            arg8 = _mm_shuffle_ps(arg8, zmm2, 0x24)
                        
                        zmm3 = _mm_add_epi64(zmm3, zmm12)
                        zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm14 |= arg6
                        
                        if ((temp0_1839 & 1) != 0)
                            zmm2 = *zmm14[0].q
                        
                        zmm12 &= zmm0
                        zmm0 &= not.o(zmm3)
                        zmm9 = var_588_5
                        arg6 = var_4c8_2
                        
                        if ((temp0_1839 & 2) == 0)
                            zmm12 |= zmm0
                            
                            if ((temp0_1839 & 4) != 0)
                                goto label_14026ce16
                            
                            goto label_14026cd1e
                        
                        zmm2 = _mm_shuffle_ps(
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q, zmm2, 0), zmm2, 
                            0xe2)
                        zmm12 |= zmm0
                        
                        if ((temp0_1839 & 4) != 0)
                        label_14026ce16:
                            zmm2 =
                                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm12[0].q, zmm2, 0x30), 0x84)
                            zmm14 = arg5
                            
                            if ((temp0_1839 & 8) == 0)
                                goto label_14026cd2c
                            
                            goto label_14026ce3b
                        
                    label_14026cd1e:
                        zmm14 = arg5
                        
                        if ((temp0_1839 & 8) == 0)
                        label_14026cd2c:
                            arg5 = var_338_1
                            zmm1 = zx.o(0)
                            
                            if ((temp0_1844 & 1) == 0)
                                goto label_14026ce55
                            
                            goto label_14026cd42
                        
                    label_14026ce3b:
                        zmm2 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm2, 0x20), 0x24)
                        arg5 = var_338_1
                        zmm1 = zx.o(0)
                        
                        if ((temp0_1844 & 1) == 0)
                        label_14026ce55:
                            
                            if ((temp0_1844 & 2) == 0)
                                goto label_14026cd50
                            
                            goto label_14026ce6a
                        
                    label_14026cd42:
                        zmm1[0] = zmm2.d
                        
                        if ((temp0_1844 & 2) == 0)
                        label_14026cd50:
                            
                            if ((temp0_1844 & 4) == 0)
                                goto label_14026ce77
                            
                            goto label_14026cd61
                        
                    label_14026ce6a:
                        zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm1, 1), zmm1, 0xe2)
                        
                        if ((temp0_1844 & 4) != 0)
                        label_14026cd61:
                            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x32), 0x84)
                            
                            if ((temp0_1844 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                        else
                        label_14026ce77:
                            
                            if ((temp0_1844 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                    
                    zmm0 = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                    zmm2 = __paddq_xmmdq_memdq(var_438_2, var_508_5)
                    zmm3 = data_1434426c0
                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_478_5)
                    zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm0, var_4e8_4), zmm3)
                    zmm2 = _mm_add_epi64(zmm2, zmm3)
                    zmm3 = _mm_shuffle_epi32(var_348_2, 0x50) & zmm2
                    zmm2 = _mm_shuffle_epi32(var_348_2, 0xfa) & zmm0
                    int64_t rax_408 = zmm3[0].q
                    int64_t rdx_17 = _mm_shuffle_epi32(zmm3, 0x4e).q
                    int64_t rbx_42 = _mm_shuffle_epi32(zmm2, 0x4e).q
                    zmm0 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rax_408)), zx.q(*(arg4 + rdx_17))), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm2.q)), zx.o(*(arg4 + rbx_42))[0].q).q)
                    zmm2 = _mm_srli_epi32(zmm0, 0x15)
                    zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    float temp0_1893[0x4] = _mm_add_ps(arg5, 
                        _mm_mul_ps(zmm11, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    zmm0 = data_143442440
                    float temp0_1895[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                    zmm4 = data_143442690
                    zmm15 = _mm_mul_ps(zmm15, _mm_div_ps(temp0_1895, zmm4))
                    zmm0 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm0)), zmm4)
                    char temp21_1 = temp0_1369 & 1
                    
                    if (temp21_1 != 0)
                        zmm2.d = temp0_1893[0]
                        var_5b8 = zmm2
                        zmm1 = _mm_mul_ps(zmm1, zmm0)
                        zmm7 = _mm_add_ps(zmm7, zmm15)
                        zmm4 = var_5a8_1
                        
                        if (temp21_1 != 0)
                            goto label_14026d06c
                        
                        goto label_14026cfb3
                    
                    zmm1 = _mm_mul_ps(zmm1, zmm0)
                    zmm7 = _mm_add_ps(zmm7, zmm15)
                    zmm4 = var_5a8_1
                    
                    if (temp21_1 != 0)
                    label_14026d06c:
                        arg7[0] = zmm7[0]
                        zmm11 = var_518_4
                        zmm15 = var_4d8_3
                        arg8 = _mm_add_ps(arg8, zmm1)
                        
                        if (temp21_1 != 0)
                            goto label_14026cfd1
                        
                        goto label_14026d08f
                    
                label_14026cfb3:
                    zmm11 = var_518_4
                    zmm15 = var_4d8_3
                    arg8 = _mm_add_ps(arg8, zmm1)
                    bool cond:131_1
                    bool cond:132_1
                    bool cond:151_1
                    bool cond:152_1
                    
                    if (temp21_1 != 0)
                    label_14026cfd1:
                        arg6[0] = arg8[0]
                        char temp37_1 = temp0_1369 & 2
                        cond:131_1 = temp37_1 == 0
                        cond:132_1 = temp37_1 != 0
                        cond:151_1 = temp37_1 == 0
                        cond:152_1 = temp37_1 != 0
                        
                        if (temp37_1 != 0)
                            goto label_14026d09b
                        
                        goto label_14026cfdf
                    
                label_14026d08f:
                    char temp36_1 = temp0_1369 & 2
                    cond:131_1 = temp36_1 == 0
                    cond:132_1 = temp36_1 != 0
                    cond:151_1 = temp36_1 == 0
                    cond:152_1 = temp36_1 != 0
                    
                    if (temp36_1 == 0)
                    label_14026cfdf:
                        
                        if (not(cond:131_1))
                        label_14026cff2:
                            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg7, 1), arg7, 0xe2)
                            
                            if (cond:152_1)
                                goto label_14026d0c3
                            
                            goto label_14026cffc
                    else
                    label_14026d09b:
                        zmm1 = var_5b8
                        var_5b8 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_1893, zmm1, 1), zmm1, 0xe2)
                        
                        if (cond:132_1)
                            goto label_14026cff2
                    
                    bool cond:187_1
                    bool cond:188_1
                    bool cond:211_1
                    bool cond:212_1
                    
                    if (not(cond:151_1))
                    label_14026d0c3:
                        arg6 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, arg6, 1), arg6, 0xe2)
                        char temp57_1 = temp0_1369 & 4
                        cond:187_1 = temp57_1 == 0
                        cond:188_1 = temp57_1 != 0
                        cond:211_1 = temp57_1 == 0
                        cond:212_1 = temp57_1 != 0
                        
                        if (temp57_1 != 0)
                            goto label_14026d008
                        
                        goto label_14026d0cf
                    
                label_14026cffc:
                    char temp56_1 = temp0_1369 & 4
                    cond:187_1 = temp56_1 == 0
                    cond:188_1 = temp56_1 != 0
                    cond:211_1 = temp56_1 == 0
                    cond:212_1 = temp56_1 != 0
                    
                    if (temp56_1 == 0)
                    label_14026d0cf:
                        
                        if (not(cond:187_1))
                        label_14026d0dd:
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm7, arg7, 0x32), 0x84)
                            
                            if (cond:212_1)
                                goto label_14026d02c
                            
                            goto label_14026d0e8
                    else
                    label_14026d008:
                        zmm1 = var_5b8
                        var_5b8 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_1893, zmm1, 0x32), 0x84)
                        
                        if (cond:188_1)
                            goto label_14026d0dd
                    
                    bool cond:253_1
                    bool cond:254_1
                    bool cond:277_1
                    bool cond:278_1
                    
                    if (not(cond:211_1))
                    label_14026d02c:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg8, arg6, 0x32), 0x84)
                        char temp81_1 = temp0_1369 & 8
                        cond:253_1 = temp81_1 == 0
                        cond:254_1 = temp81_1 != 0
                        cond:277_1 = temp81_1 == 0
                        cond:278_1 = temp81_1 != 0
                        
                        if (temp81_1 != 0)
                            goto label_14026d0f1
                        
                        goto label_14026d039
                    
                label_14026d0e8:
                    char temp80_1 = temp0_1369 & 8
                    cond:253_1 = temp80_1 == 0
                    cond:254_1 = temp80_1 != 0
                    cond:277_1 = temp80_1 == 0
                    cond:278_1 = temp80_1 != 0
                    
                    if (temp80_1 != 0)
                    label_14026d0f1:
                        zmm0 = var_5b8
                        var_5b8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(temp0_1893, zmm0, 0x23), 0x24)
                        arg5 = zmm14
                        
                        if (cond:254_1)
                            goto label_14026d049
                        
                        goto label_14026d10c
                    
                label_14026d039:
                    arg5 = zmm14
                    
                    if (cond:253_1)
                    label_14026d10c:
                        
                        if (not(cond:277_1))
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg8, arg6, 0x23), 0x24)
                    else
                    label_14026d049:
                        arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm7, arg7, 0x23), 0x24)
                        
                        if (cond:278_1)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg8, arg6, 0x23), 0x24)
                    
                    arg8 = var_538_2
                    zmm2 = var_4f8_5
                
                zmm3 = arg5 ^ var_428_3
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm3 & zmm9, 0x1f)) == 0)
                    zmm14 = var_528_3
                    zmm7 = var_558_3
                else
                    zmm12 = arg5
                    zmm0 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_488_2)
                    arg8 = zmm0 & zmm9
                    arg5 = _mm_slli_epi32(arg8, 0x1f)
                    char temp0_1929 = _mm_movemask_ps(arg5)
                    
                    if (temp0_1929 == 0)
                        zmm14 = var_528_3
                        arg8 = var_538_2
                        arg5 = zmm12
                    else
                        uint128_t var_348_3 = zmm0
                        int32_t var_4c8_3[0x4] = arg6
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                        arg5 = _mm_srai_epi32(arg5, 0x1f) & zmm1
                        char rcx_60
                        
                        if (_mm_movemask_ps(arg5) == 0)
                            zmm14 = var_528_3
                            arg5 = zmm12
                            zmm11 = var_458_4
                            zmm1 &= zmm0
                            rcx_60 = temp0_1929
                            
                            if ((rcx_60 & 1) != 0)
                                zmm0.d = zmm1[0]
                                var_5b8 = zmm0
                        else
                            zmm0 = data_1434426b0
                            zmm2 = _mm_add_epi64(var_4a8_3, zmm0)
                            zmm0 = _mm_add_epi64(zmm0, var_458_4)
                            zmm4 = _mm_cmpeq_epi32(zmm4, zmm4) ^ arg5
                            arg6 = _mm_shuffle_epi32(zmm4, 0x50)
                            zmm11 = (var_458_4 & arg6) | (arg6 & not.o(zmm0))
                            zmm0 = _mm_shuffle_epi32(zmm4, 0xfa)
                            zmm7 = var_4a8_3 & zmm0
                            zmm0 &= not.o(zmm2)
                            zmm2 = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                            zmm4 = __paddq_xmmdq_memdq(var_438_2, var_508_5)
                            arg6 = data_1434426c0
                            zmm4 = __paddq_xmmdq_memdq(zmm4, var_478_5)
                            zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, var_4e8_4), arg6)
                            zmm4 = _mm_add_epi64(zmm4, arg6)
                            arg6 = _mm_shuffle_epi32(arg5, 0x50) & zmm4
                            zmm4 = _mm_shuffle_epi32(arg5, 0xfa) & zmm2
                            int64_t rax_411 = arg6[0].q
                            int64_t rdx_18 = _mm_shuffle_epi32(arg6, 0x4e).q
                            int64_t rbp_33 = zmm4[0].q
                            int64_t rbx_43 = _mm_shuffle_epi32(zmm4, 0x4e).q
                            var_4a8_3 = zmm7 | zmm0
                            zmm2 = __paddd_xmmdq_memdq(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + rax_411), 
                                                0), 
                                            *(arg4 + rdx_18), 2), 
                                        *(arg4 + rbp_33), 4), 
                                    *(arg4 + rbx_43), 6), 
                                data_143442b40)
                            zmm0 = _mm_cvtepi32_ps(zmm2)
                            zmm14 = var_528_3
                            arg5 = zmm12
                            zmm1 &= zmm0
                            rcx_60 = temp0_1929
                            
                            if ((rcx_60 & 1) != 0)
                                zmm0.d = zmm1[0]
                                var_5b8 = zmm0
                        
                        zmm4 = var_5a8_1
                        zmm12 = var_4a8_3
                        
                        if ((rcx_60 & 2) != 0)
                            zmm2 = var_5b8
                            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                            var_5b8 = zmm0
                            
                            if ((rcx_60 & 4) != 0)
                                goto label_14026d450
                            
                            goto label_14026d310
                        
                        if ((rcx_60 & 4) == 0)
                        label_14026d310:
                            
                            if ((rcx_60 & 8) != 0)
                            label_14026d315:
                                zmm0 = var_5b8
                                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm1, zmm0, 0x23), 0x24)
                                var_5b8 = zmm0
                        else
                        label_14026d450:
                            zmm2 = var_5b8
                            zmm0 = _mm_shuffle_ps(zmm1, zmm2, 0x32)
                            zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                            var_5b8 = zmm2
                            
                            if ((rcx_60 & 8) != 0)
                                goto label_14026d315
                        
                        arg6 = data_1434422d0
                        zmm1 = zmm4 & arg6
                        int32_t temp0_1961[0x4] = _mm_srai_epi32(
                            _mm_slli_epi32(_mm_cmpeq_epi32(arg6, zmm1) & arg8, 0x1f), 0x1f)
                        char temp0_1962 = _mm_movemask_ps(temp0_1961)
                        
                        if (temp0_1962 != 0)
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((temp0_1962 & 1) != 0)
                                arg5 = zx.o(*zmm11[0].q)
                            
                            zmm7 = data_1434426b0
                            arg6 = temp0_1961 ^ zmm0
                            
                            if ((temp0_1962 & 2) != 0)
                                arg5 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm11, 0x4e).q), arg5, 
                                        0), 
                                    arg5, 0xe2)
                            
                            zmm4 = _mm_add_epi64(zmm12, zmm7)
                            zmm7 = _mm_add_epi64(zmm7, zmm11)
                            zmm2 = _mm_shuffle_epi32(arg6, 0x50)
                            arg6 = _mm_shuffle_epi32(arg6, 0xfa)
                            
                            if ((temp0_1962 & 4) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*zmm12[0].q), arg5, 0x30), 0x84)
                            
                            if ((temp0_1962 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), 
                                        arg5, 0x20), 
                                    0x24)
                            
                            zmm11 = (zmm11 & zmm2) | (zmm2 & not.o(zmm7))
                            zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(arg5, data_143442cd0), data_143442b40))
                            zmm12 = (zmm12 & arg6) | (arg6 & not.o(zmm4))
                            arg5 = var_568_3
                            zmm4 = var_5a8_1
                        
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                        zmm9 = var_588_5
                        arg6 = var_4c8_3
                        
                        if ((rcx_60 & 1) != 0)
                            arg7[0] = zmm1[0]
                            
                            if ((rcx_60 & 2) != 0)
                                goto label_14026d524
                            
                            goto label_14026d4f9
                        
                        if ((rcx_60 & 2) != 0)
                        label_14026d524:
                            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg7, 1), arg7, 0xe2)
                            
                            if ((rcx_60 & 4) != 0)
                                goto label_14026d506
                            
                            goto label_14026d52d
                        
                    label_14026d4f9:
                        
                        if ((rcx_60 & 4) == 0)
                        label_14026d52d:
                            
                            if ((rcx_60 & 8) != 0)
                                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x23), 0x24)
                        else
                        label_14026d506:
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x32), 0x84)
                            
                            if ((rcx_60 & 8) != 0)
                                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x23), 0x24)
                        
                        zmm0 = data_142fc95e0
                        zmm1 = zmm4 & zmm0
                        zmm0 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm0, zmm1) & arg8, 0x1f)
                        char temp0_1990 = _mm_movemask_ps(zmm0)
                        
                        if (temp0_1990 == 0)
                            arg8 = var_538_2
                        else
                            arg8 = var_538_2
                            
                            if ((temp0_1990 & 1) == 0)
                                if ((temp0_1990 & 2) != 0)
                                    goto label_14026e16a
                                
                                goto label_14026d580
                            
                            zmm4 = zx.o(*zmm11[0].q)
                            
                            if ((temp0_1990 & 2) != 0)
                            label_14026e16a:
                                zmm4 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm11, 0x4e).q), zmm4, 
                                        0), 
                                    zmm4, 0xe2)
                                
                                if ((temp0_1990 & 4) == 0)
                                    goto label_14026d589
                                
                                goto label_14026e186
                            
                        label_14026d580:
                            
                            if ((temp0_1990 & 4) != 0)
                            label_14026e186:
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(zx.o(*zmm12[0].q), zmm4, 0x30), 0x84)
                                
                                if ((temp0_1990 & 8) != 0)
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), 
                                            zmm4, 0x20), 
                                        0x24)
                            else
                            label_14026d589:
                                
                                if ((temp0_1990 & 8) != 0)
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), 
                                            zmm4, 0x20), 
                                        0x24)
                            
                            zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm4, data_143442cd0), data_143442b40))
                            zmm4 = var_5a8_1
                        
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                        zmm11 = var_518_4
                        
                        if ((rcx_60 & 1) == 0)
                            zmm2 = var_4f8_5
                            
                            if ((rcx_60 & 2) != 0)
                            label_14026d632:
                                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg6, 1), arg6, 0xe2)
                                
                                if ((rcx_60 & 4) != 0)
                                    goto label_14026d605
                                
                                goto label_14026d63a
                        else
                            arg6[0] = zmm1[0]
                            zmm2 = var_4f8_5
                            
                            if ((rcx_60 & 2) != 0)
                                goto label_14026d632
                        
                        if ((rcx_60 & 4) == 0)
                        label_14026d63a:
                            zmm0 = var_348_3
                            
                            if ((rcx_60 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                        else
                        label_14026d605:
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x32), 0x84)
                            zmm0 = var_348_3
                            
                            if ((rcx_60 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                    
                    zmm3 = (zmm3 ^ zmm0) & zmm9
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm3, 0x1f)) == 0)
                        zmm7 = var_558_3
                    else
                        zmm1 = __pcmpeqd_xmmdq_memdq(data_143442ad0, var_488_2)
                        char temp0_2008 = _mm_movemask_ps(_mm_slli_epi32(zmm1 & zmm9, 0x1f))
                        
                        if (temp0_2008 == 0)
                            zmm7 = var_558_3
                        else
                            zmm2 = zx.o(0)
                            char temp20_1 = temp0_2008 & 1
                            
                            if (temp20_1 == 0)
                                zmm7 = var_558_3
                                
                                if (temp20_1 != 0)
                                label_14026d75f:
                                    arg7[0] = zmm2.d
                                    
                                    if (temp20_1 != 0)
                                        goto label_14026d6c5
                                    
                                    goto label_14026d76a
                            else
                                zmm0.d = zmm2.d
                                var_5b8 = zmm0
                                zmm7 = var_558_3
                                
                                if (temp20_1 != 0)
                                    goto label_14026d75f
                            
                            bool cond:129_1
                            bool cond:130_1
                            bool cond:149_1
                            bool cond:150_1
                            
                            if (temp20_1 != 0)
                            label_14026d6c5:
                                arg6[0] = zmm2.d
                                zmm12 = zmm4
                                char temp35_1 = temp0_2008 & 2
                                cond:129_1 = temp35_1 == 0
                                cond:130_1 = temp35_1 != 0
                                cond:149_1 = temp35_1 == 0
                                cond:150_1 = temp35_1 != 0
                                
                                if (temp35_1 != 0)
                                    goto label_14026d77b
                                
                                goto label_14026d6d7
                            
                        label_14026d76a:
                            zmm12 = zmm4
                            char temp34_1 = temp0_2008 & 2
                            cond:129_1 = temp34_1 == 0
                            cond:130_1 = temp34_1 != 0
                            cond:149_1 = temp34_1 == 0
                            cond:150_1 = temp34_1 != 0
                            
                            if (temp34_1 == 0)
                            label_14026d6d7:
                                
                                if (not(cond:129_1))
                                label_14026d6ea:
                                    arg7 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg7, 0), arg7, 0xe2)
                                    
                                    if (cond:150_1)
                                        goto label_14026d7a2
                                    
                                    goto label_14026d6f4
                            else
                            label_14026d77b:
                                zmm4 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm4, 0), zmm4, 0xe2)
                                
                                if (cond:130_1)
                                    goto label_14026d6ea
                            
                            bool cond:185_1
                            bool cond:186_1
                            bool cond:208_1
                            bool cond:209_1
                            
                            if (not(cond:149_1))
                            label_14026d7a2:
                                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg6, 0), arg6, 0xe2)
                                char temp55_1 = temp0_2008 & 4
                                cond:185_1 = temp55_1 == 0
                                cond:186_1 = temp55_1 != 0
                                cond:208_1 = temp55_1 == 0
                                cond:209_1 = temp55_1 != 0
                                
                                if (temp55_1 != 0)
                                    goto label_14026d700
                                
                                goto label_14026d7ae
                            
                        label_14026d6f4:
                            char temp54_1 = temp0_2008 & 4
                            cond:185_1 = temp54_1 == 0
                            cond:186_1 = temp54_1 != 0
                            cond:208_1 = temp54_1 == 0
                            cond:209_1 = temp54_1 != 0
                            
                            if (temp54_1 == 0)
                            label_14026d7ae:
                                
                                if (not(cond:185_1))
                                label_14026d7bc:
                                    arg7 = _mm_shuffle_ps(arg7, 
                                        _mm_shuffle_ps(zx.o(0), arg7, 0x30), 0x84)
                                    
                                    if (cond:209_1)
                                        goto label_14026d723
                                    
                                    goto label_14026d7c7
                            else
                            label_14026d700:
                                zmm4 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(0), zmm4, 0x30), 0x84)
                                
                                if (cond:186_1)
                                    goto label_14026d7bc
                            
                            bool cond:251_1
                            bool cond:252_1
                            bool cond:275_1
                            bool cond:276_1
                            
                            if (not(cond:208_1))
                            label_14026d723:
                                arg6 =
                                    _mm_shuffle_ps(arg6, _mm_shuffle_ps(zx.o(0), arg6, 0x30), 0x84)
                                char temp79_1 = temp0_2008 & 8
                                cond:251_1 = temp79_1 == 0
                                cond:252_1 = temp79_1 != 0
                                cond:275_1 = temp79_1 == 0
                                cond:276_1 = temp79_1 != 0
                                
                                if (temp79_1 != 0)
                                    goto label_14026d7d3
                                
                                goto label_14026d730
                            
                        label_14026d7c7:
                            char temp78_1 = temp0_2008 & 8
                            cond:251_1 = temp78_1 == 0
                            cond:252_1 = temp78_1 != 0
                            cond:275_1 = temp78_1 == 0
                            cond:276_1 = temp78_1 != 0
                            
                            if (temp78_1 != 0)
                            label_14026d7d3:
                                zmm4 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(0), zmm4, 0x20), 0x24)
                                zmm4 = zmm12
                                
                                if (cond:252_1)
                                    goto label_14026d743
                                
                                goto label_14026d7ee
                            
                        label_14026d730:
                            zmm4 = zmm12
                            
                            if (cond:251_1)
                            label_14026d7ee:
                                
                                if (not(cond:275_1))
                                    arg6 =
                                        _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm2, arg6, 0x20), 0x24)
                            else
                            label_14026d743:
                                arg7 =
                                    _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x20), 0x24)
                                
                                if (cond:276_1)
                                    arg6 =
                                        _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm2, arg6, 0x20), 0x24)
                            
                            zmm2 = var_4f8_5
                        
                        char temp0_2028 = _mm_movemask_ps(_mm_slli_epi32(zmm1 & not.o(zmm3), 0x1f))
                        
                        if (temp0_2028 != 0)
                            char temp31_1 = temp0_2028 & 1
                            
                            if (temp31_1 != 0)
                                zmm0.d = 0
                                var_5b8 = zmm0
                                
                                if (temp31_1 != 0)
                                    goto label_14026d8a2
                            else if (temp31_1 != 0)
                            label_14026d8a2:
                                arg7[0] = 0
                                
                                if (temp31_1 != 0)
                                    goto label_14026d843
                                
                                goto label_14026d8a9
                            
                            bool cond:147_1
                            bool cond:148_1
                            bool cond:168_1
                            bool cond:169_1
                            
                            if (temp31_1 != 0)
                            label_14026d843:
                                arg6[0] = 0
                                char temp50_1 = temp0_2028 & 2
                                cond:147_1 = temp50_1 == 0
                                cond:148_1 = temp50_1 != 0
                                cond:168_1 = temp50_1 == 0
                                cond:169_1 = temp50_1 != 0
                                
                                if (temp50_1 != 0)
                                    goto label_14026d8b1
                                
                                goto label_14026d84c
                            
                        label_14026d8a9:
                            char temp49_1 = temp0_2028 & 2
                            cond:147_1 = temp49_1 == 0
                            cond:148_1 = temp49_1 != 0
                            cond:168_1 = temp49_1 == 0
                            cond:169_1 = temp49_1 != 0
                            
                            if (temp49_1 == 0)
                            label_14026d84c:
                                
                                if (not(cond:147_1))
                                label_14026d85b:
                                    arg7 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg7, 0), arg7, 0xe2)
                                    
                                    if (cond:169_1)
                                        goto label_14026d8d0
                                    
                                    goto label_14026d861
                            else
                            label_14026d8b1:
                                zmm3 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm3, 0), zmm3, 0xe2)
                                
                                if (cond:148_1)
                                    goto label_14026d85b
                            
                            bool cond:206_1
                            bool cond:207_1
                            bool cond:228_1
                            bool cond:229_1
                            
                            if (not(cond:168_1))
                            label_14026d8d0:
                                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg6, 0), arg6, 0xe2)
                                char temp72_1 = temp0_2028 & 4
                                cond:206_1 = temp72_1 == 0
                                cond:207_1 = temp72_1 != 0
                                cond:228_1 = temp72_1 == 0
                                cond:229_1 = temp72_1 != 0
                                
                                if (temp72_1 != 0)
                                    goto label_14026d869
                                
                                goto label_14026d8d8
                            
                        label_14026d861:
                            char temp71_1 = temp0_2028 & 4
                            cond:206_1 = temp71_1 == 0
                            cond:207_1 = temp71_1 != 0
                            cond:228_1 = temp71_1 == 0
                            cond:229_1 = temp71_1 != 0
                            
                            if (temp71_1 == 0)
                            label_14026d8d8:
                                
                                if (not(cond:206_1))
                                label_14026d8e2:
                                    arg7 = _mm_shuffle_ps(arg7, 
                                        _mm_shuffle_ps(zx.o(0), arg7, 0x30), 0x84)
                                    
                                    if (cond:229_1)
                                        goto label_14026d884
                                    
                                    goto label_14026d8e9
                            else
                            label_14026d869:
                                zmm3 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x30), 0x84)
                                
                                if (cond:207_1)
                                    goto label_14026d8e2
                            
                            bool cond:273_1
                            bool cond:274_1
                            bool cond:292_1
                            bool cond:293_1
                            
                            if (not(cond:228_1))
                            label_14026d884:
                                arg6 =
                                    _mm_shuffle_ps(arg6, _mm_shuffle_ps(zx.o(0), arg6, 0x30), 0x84)
                                char temp97_1 = temp0_2028 & 8
                                cond:273_1 = temp97_1 == 0
                                cond:274_1 = temp97_1 != 0
                                cond:292_1 = temp97_1 == 0
                                cond:293_1 = temp97_1 != 0
                                
                                if (temp97_1 != 0)
                                    goto label_14026d8f1
                                
                                goto label_14026d88d
                            
                        label_14026d8e9:
                            char temp96_1 = temp0_2028 & 8
                            cond:273_1 = temp96_1 == 0
                            cond:274_1 = temp96_1 != 0
                            cond:292_1 = temp96_1 == 0
                            cond:293_1 = temp96_1 != 0
                            
                            if (temp96_1 != 0)
                            label_14026d8f1:
                                zmm3 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x20), 0x24)
                                
                                if (cond:274_1)
                                    goto label_14026d897
                                
                                goto label_14026d903
                            
                        label_14026d88d:
                            
                            if (cond:273_1)
                            label_14026d903:
                                
                                if (not(cond:292_1))
                                    arg6 = _mm_shuffle_ps(arg6, 
                                        _mm_shuffle_ps(zx.o(0), arg6, 0x20), 0x24)
                            else
                            label_14026d897:
                                arg7 =
                                    _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x20), 0x24)
                                
                                if (cond:293_1)
                                    arg6 = _mm_shuffle_ps(arg6, 
                                        _mm_shuffle_ps(zx.o(0), arg6, 0x20), 0x24)
            
            zmm14 = _mm_cmpeq_epi32(zmm14, zmm15) & not.o(zmm9)
            zmm12 = _mm_slli_epi32(zmm14, 0x1f)
            char temp0_2049 = _mm_movemask_ps(zmm12)
            
            if (temp0_2049 == 0)
                zmm3 = var_368_1
                arg5 = var_5b8
            else
                zmm3 = arg5
                arg5 = zmm4
                zmm4 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(var_4b8_2, zmm15), 0xe8), 
                    _mm_shuffle_epi32(
                        __pmuludq_xmmdq_memdq(_mm_shuffle_epi32(zmm15, 0xf5), var_3a8_2), 0xe8).q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                int32_t temp0_2057[0x4] = _mm_shuffle_epi32(zmm4, 0x4e)
                zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                int32_t temp0_2060[0x4] =
                    _mm_unpacklo_epi32(temp0_2057, _mm_cmpgt_epi32(zx.o(0), temp0_2057).q)
                int32_t temp0_2061[0x4] = __paddq_xmmdq_memdq(temp0_2060, var_548_3)
                float var_4d8_4[0x4] = zmm4
                uint128_t var_4e8_5 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm4, var_508_5), zmm11)
                zmm9 = _mm_add_epi64(temp0_2061, arg8)
                zmm2 &= zmm14
                int32_t var_578_7[0x4] = arg7
                int32_t var_4c8_4[0x4] = arg6
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) == 0)
                    zmm4 = arg5
                    arg5 = zmm3
                else
                    zmm1 = _mm_srai_epi32(
                        _mm_slli_epi32(__pcmpeqd_xmmdq_memdq(zx.o(0), var_598_1) & zmm2, 0x1f), 
                        0x1f)
                    char temp0_2070 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_2070 == 0)
                        zmm4 = arg5
                        arg5 = zmm3
                    else
                        uint128_t var_4f8_6 = zmm2
                        zmm11 = zmm14
                        int32_t temp0_2071[0x4] = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                        zmm7 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_438_2, var_508_5), 
                            var_4d8_4)
                        int32_t temp0_2074[0x4] = __paddq_xmmdq_memdq(temp0_2071, temp0_2060)
                        zmm4 = data_1434426c0
                        int32_t temp0_2075[0x4] = _mm_add_epi64(temp0_2074, zmm4)
                        zmm7 = _mm_add_epi64(zmm7, zmm4)
                        arg5 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm7 &= arg5
                        zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                        arg6 = temp0_2075 & zmm0
                        int64_t rax_428 = _mm_shuffle_epi32(zmm7, 0x4e)[0].q
                        void* rbx_44 = arg4 + rax_428
                        zmm2 = *(arg4 + rax_428)
                        int64_t rax_429 = arg6[0].q
                        void* rdi_15 = arg4 + rax_429
                        arg8 = *(arg4 + rax_429)
                        int64_t rax_430 = _mm_shuffle_epi32(arg6, 0x4e)[0].q
                        void* rsi_14 = arg4 + rax_430
                        float var_528_4[0x4] = *(arg4 + rax_430)
                        arg6 = arg5 & zmm4
                        zmm4 &= zmm0
                        void* rbp_35 = zmm7[0].q + arg4
                        zmm1 = *(arg6[0].q + rbp_35)
                        zmm14 = *(_mm_shuffle_epi32(arg6, 0x4e)[0].q + rbx_44)
                        arg6 = *(zmm4[0].q + rdi_15)
                        zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rsi_14)
                        zmm7 = data_1434426e0
                        arg5 &= zmm7
                        zmm0 &= zmm7
                        zmm15 = *(arg5[0].q + rbp_35)
                        zmm3 = *(_mm_shuffle_epi32(arg5, 0x4e)[0].q + rbx_44)
                        zmm7 = *(zmm0.q + rdi_15)
                        arg5 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rsi_14)
                        bool cond:63_1
                        bool cond:64_1
                        bool cond:73_1
                        bool cond:74_1
                        
                        if ((temp0_2070 & 1) == 0)
                            char temp19_1 = temp0_2070 & 2
                            cond:63_1 = temp19_1 != 0
                            cond:64_1 = temp19_1 == 0
                            cond:73_1 = temp19_1 != 0
                            cond:74_1 = temp19_1 == 0
                            
                            if (temp19_1 == 0)
                                goto label_14026dda8
                            
                            goto label_14026db46
                        
                        var_588_5 = *rbp_35
                        char temp18_1 = temp0_2070 & 2
                        cond:63_1 = temp18_1 != 0
                        cond:64_1 = temp18_1 == 0
                        cond:73_1 = temp18_1 != 0
                        cond:74_1 = temp18_1 == 0
                        
                        if (temp18_1 == 0)
                        label_14026dda8:
                            
                            if (cond:64_1)
                                goto label_14026db5e
                            
                            goto label_14026ddae
                        
                    label_14026db46:
                        zmm0 = var_588_5
                        var_588_5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm0, 0), zmm0, 0xe2)
                        
                        if (not(cond:63_1))
                        label_14026db5e:
                            
                            if (cond:74_1)
                                goto label_14026ddb8
                            
                            goto label_14026db64
                        
                    label_14026ddae:
                        zmm1 = _mm_unpacklo_ps(zmm1, zmm14[0].q)
                        bool cond:111_1
                        bool cond:112_1
                        bool cond:127_1
                        bool cond:128_1
                        
                        if (not(cond:73_1))
                        label_14026ddb8:
                            char temp30_1 = temp0_2070 & 4
                            cond:111_1 = temp30_1 != 0
                            cond:112_1 = temp30_1 == 0
                            cond:127_1 = temp30_1 != 0
                            cond:128_1 = temp30_1 == 0
                            zmm14 = zmm11
                            var_4b8_2 = zmm1
                            
                            if (temp30_1 == 0)
                                goto label_14026db7e
                            
                            goto label_14026ddce
                        
                    label_14026db64:
                        zmm15 = _mm_unpacklo_ps(zmm15, zmm3[0].q)
                        char temp29_1 = temp0_2070 & 4
                        cond:111_1 = temp29_1 != 0
                        cond:112_1 = temp29_1 == 0
                        cond:127_1 = temp29_1 != 0
                        cond:128_1 = temp29_1 == 0
                        zmm14 = zmm11
                        var_4b8_2 = zmm1
                        
                        if (temp29_1 == 0)
                        label_14026db7e:
                            zmm0 = var_5a8_1
                            arg8 = var_538_2
                            
                            if (cond:112_1)
                                goto label_14026ddf8
                            
                            goto label_14026db94
                        
                    label_14026ddce:
                        zmm0 = var_588_5
                        var_588_5 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x30), 0x84)
                        zmm0 = var_5a8_1
                        arg8 = var_538_2
                        
                        if (not(cond:111_1))
                        label_14026ddf8:
                            
                            if (cond:128_1)
                                goto label_14026dbb2
                            
                            goto label_14026de03
                        
                    label_14026db94:
                        zmm1 = var_4b8_2
                        var_4b8_2 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg6, zmm1, 0x30), 0x84)
                        bool cond:166_1
                        bool cond:167_1
                        bool cond:183_1
                        bool cond:184_1
                        
                        if (not(cond:127_1))
                        label_14026dbb2:
                            zmm1 = var_568_3
                            arg7 = var_578_7
                            char temp48_1 = temp0_2070 & 8
                            cond:166_1 = temp48_1 != 0
                            cond:167_1 = temp48_1 == 0
                            cond:183_1 = temp48_1 != 0
                            cond:184_1 = temp48_1 == 0
                            
                            if (temp48_1 == 0)
                                goto label_14026de1c
                            
                            goto label_14026dbc6
                        
                    label_14026de03:
                        zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm7, zmm15, 0x30), 0x84)
                        zmm1 = var_568_3
                        arg7 = var_578_7
                        char temp47_1 = temp0_2070 & 8
                        cond:166_1 = temp47_1 != 0
                        cond:167_1 = temp47_1 == 0
                        cond:183_1 = temp47_1 != 0
                        cond:184_1 = temp47_1 == 0
                        
                        if (temp47_1 == 0)
                        label_14026de1c:
                            zmm7 = var_558_3
                            zmm11 = var_518_4
                            
                            if (cond:167_1)
                                goto label_14026dbf6
                            
                            goto label_14026de32
                        
                    label_14026dbc6:
                        zmm2 = var_588_5
                        var_588_5 =
                            _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_528_4, zmm2, 0x20), 0x24)
                        zmm7 = var_558_3
                        zmm11 = var_518_4
                        
                        if (cond:166_1)
                        label_14026de32:
                            arg6 = var_4b8_2
                            var_4b8_2 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm4, arg6, 0x20), 0x24)
                            zmm4 = zmm0
                            arg6 = var_4c8_4
                            zmm2 = var_4f8_6
                            
                            if (cond:183_1)
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg5, zmm15, 0x20), 0x24)
                        else
                        label_14026dbf6:
                            zmm4 = zmm0
                            arg6 = var_4c8_4
                            zmm2 = var_4f8_6
                            
                            if (not(cond:184_1))
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg5, zmm15, 0x20), 0x24)
                        
                        arg5 = zmm1
                    
                    zmm0 = zx.o(0)
                    zmm1 = _mm_cmpeq_epi32(var_598_1, zmm0) & not.o(zmm2)
                    float var_598_2[0x4] = zmm1
                    zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                    char temp0_2096 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_2096 != 0)
                        int32_t var_538_3[0x4] = zmm15
                        zmm15 = zmm11
                        float var_528_5[0x4] = zmm14
                        arg5 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f) & arg5
                        int32_t var_4a8_4[0x4] = zmm9
                        
                        if (_mm_movemask_ps(zmm1) == 0)
                            zmm14 = var_4e8_5
                            zmm3 = zmm9
                        else
                            zmm0 = data_1434426c0
                            zmm2 = _mm_add_epi64(zmm9, zmm0)
                            zmm4 = var_4e8_5
                            int32_t temp0_2102[0x4] = _mm_add_epi64(zmm4, zmm0)
                            zmm7 = _mm_cmpeq_epi32(zmm7, zmm7) ^ zmm1
                            zmm14 = _mm_shuffle_epi32(zmm7, 0x50)
                            zmm14 = (zmm14 & not.o(temp0_2102)) | (zmm4 & zmm14)
                            zmm3 = _mm_shuffle_epi32(zmm7, 0xfa)
                            zmm3 = (zmm3 & not.o(zmm2)) | (zmm9 & zmm3)
                            zmm2 = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                            zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_438_2, var_508_5), 
                                var_4d8_4)
                            zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, temp0_2060), zmm0)
                            zmm4 = _mm_add_epi64(zmm4, zmm0)
                            arg6 = _mm_shuffle_epi32(zmm1, 0x50) & zmm4
                            zmm1 = _mm_shuffle_epi32(zmm1, 0xfa) & zmm2
                            zmm0 = _mm_unpacklo_ps(*(arg4 + arg6[0].q), 
                                (*(arg4 + _mm_shuffle_epi32(arg6, 0x4e).q)).q)
                            zmm2 = *(arg4 + zmm1[0].q)
                            zmm1 = *(arg4 + _mm_shuffle_epi32(zmm1, 0x4e)[0].q)
                            zmm0 = zmm0.q | _mm_unpacklo_ps(zmm2, zmm1[0].q).q << 0x40
                        
                        zmm9 = arg8
                        arg5 &= zmm0
                        
                        if ((temp0_2096 & 1) != 0)
                            zmm0.d = arg5[0]
                            var_588_5 = zmm0
                            arg8 = var_5a8_1
                            zmm11 = zmm15
                            
                            if ((temp0_2096 & 2) != 0)
                                goto label_14026dede
                            
                            goto label_14026dea9
                        
                        arg8 = var_5a8_1
                        zmm11 = zmm15
                        
                        if ((temp0_2096 & 2) != 0)
                        label_14026dede:
                            zmm1 = var_588_5
                            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm1, 1), zmm1, 0xe2)
                            var_588_5 = zmm0
                            
                            if ((temp0_2096 & 4) != 0)
                                goto label_14026deb1
                            
                            goto label_14026def5
                        
                    label_14026dea9:
                        
                        if ((temp0_2096 & 4) == 0)
                        label_14026def5:
                            
                            if ((temp0_2096 & 8) != 0)
                            label_14026defa:
                                zmm0 = var_588_5
                                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg5, zmm0, 0x23), 0x24)
                                var_588_5 = zmm0
                        else
                        label_14026deb1:
                            zmm1 = var_588_5
                            zmm0 = _mm_shuffle_ps(arg5, zmm1, 0x32)
                            zmm1 = _mm_shuffle_ps(zmm1, zmm0, 0x84)
                            var_588_5 = zmm1
                            
                            if ((temp0_2096 & 8) != 0)
                                goto label_14026defa
                        
                        zmm7 = data_1434422d0
                        arg6 = arg8 & zmm7
                        zmm7 = _mm_srai_epi32(
                            _mm_slli_epi32(_mm_cmpeq_epi32(zmm7, arg6) & var_598_2, 0x1f), 0x1f)
                        char temp0_2134 = _mm_movemask_ps(zmm7)
                        
                        if (temp0_2134 == 0)
                            arg5 = var_568_3
                            arg7 = var_578_7
                            zmm15 = var_538_3
                        else
                            arg5 = data_1434426c0
                            zmm7 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((temp0_2134 & 1) != 0)
                                zmm1 = *zmm14[0].q
                            
                            zmm2 = _mm_add_epi64(zmm3, arg5)
                            arg5 = _mm_add_epi64(arg5, zmm14)
                            zmm0 = _mm_shuffle_epi32(zmm7, 0x50)
                            zmm7 = _mm_shuffle_epi32(zmm7, 0xfa)
                            
                            if ((temp0_2134 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q, zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm11 = zmm15
                                arg8 = var_5a8_1
                            
                            zmm15 = var_538_3
                            zmm14 &= zmm0
                            zmm0 &= not.o(arg5)
                            
                            if ((temp0_2134 & 4) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*zmm3[0].q, zmm1, 0x30), 
                                    0x84)
                            
                            zmm14 |= zmm0
                            
                            if ((temp0_2134 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                            
                            zmm3 = (zmm3 & zmm7) | (zmm7 & not.o(zmm2))
                            arg5 = var_568_3
                            arg7 = var_578_7
                        
                        zmm4 = arg8
                        arg8 = zmm9
                        zmm9 = var_4a8_4
                        arg6 = _mm_cmpeq_epi32(arg6, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_2096 & 1) != 0)
                            zmm0.d = arg6[0]
                            var_4b8_2 = zmm0
                            
                            if ((temp0_2096 & 2) != 0)
                                goto label_14026e08e
                            
                            goto label_14026e05f
                        
                        if ((temp0_2096 & 2) != 0)
                        label_14026e08e:
                            zmm1 = var_4b8_2
                            var_4b8_2 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, zmm1, 1), zmm1, 0xe2)
                            
                            if ((temp0_2096 & 4) != 0)
                                goto label_14026e067
                            
                            goto label_14026e0ab
                        
                    label_14026e05f:
                        
                        if ((temp0_2096 & 4) == 0)
                        label_14026e0ab:
                            
                            if ((temp0_2096 & 8) != 0)
                                var_4b8_2 = _mm_shuffle_ps(var_4b8_2, 
                                    _mm_shuffle_ps(arg6, var_4b8_2, 0x23), 0x24)
                        else
                        label_14026e067:
                            zmm1 = var_4b8_2
                            var_4b8_2 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg6, zmm1, 0x32), 0x84)
                            
                            if ((temp0_2096 & 8) != 0)
                                var_4b8_2 = _mm_shuffle_ps(var_4b8_2, 
                                    _mm_shuffle_ps(arg6, var_4b8_2, 0x23), 0x24)
                        
                        zmm0 = data_142fc95e0
                        arg6 = zmm4 & zmm0
                        zmm1 = _mm_slli_epi32(var_598_2 & _mm_cmpeq_epi32(zmm0, arg6), 0x1f)
                        char temp0_2157 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_2157 == 0)
                            zmm14 = var_528_5
                        else
                            if ((temp0_2157 & 1) == 0)
                                if ((temp0_2157 & 2) != 0)
                                    goto label_14026e1c2
                                
                                goto label_14026e109
                            
                            zmm1 = *zmm14[0].q
                            
                            if ((temp0_2157 & 2) != 0)
                            label_14026e1c2:
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm14 = var_528_5
                                
                                if ((temp0_2157 & 4) == 0)
                                    goto label_14026e11d
                                
                                goto label_14026e1e6
                            
                        label_14026e109:
                            zmm14 = var_528_5
                            
                            if ((temp0_2157 & 4) != 0)
                            label_14026e1e6:
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*zmm3[0].q, zmm1, 0x30), 
                                    0x84)
                                
                                if ((temp0_2157 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm1, 
                                            0x20), 
                                        0x24)
                            else
                            label_14026e11d:
                                
                                if ((temp0_2157 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm1, 
                                            0x20), 
                                        0x24)
                        
                        zmm7 = var_558_3
                        arg6 = _mm_cmpeq_epi32(arg6, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_2096 & 1) != 0)
                            zmm15[0] = arg6[0]
                            
                            if ((temp0_2096 & 2) != 0)
                                goto label_14026e251
                            
                            goto label_14026e226
                        
                        if ((temp0_2096 & 2) != 0)
                        label_14026e251:
                            zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, zmm15, 1), zmm15, 0xe2)
                            
                            if ((temp0_2096 & 4) != 0)
                                goto label_14026e233
                            
                            goto label_14026e25a
                        
                    label_14026e226:
                        
                        if ((temp0_2096 & 4) == 0)
                        label_14026e25a:
                            
                            if ((temp0_2096 & 8) != 0)
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg6, zmm15, 0x23), 0x24)
                        else
                        label_14026e233:
                            zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg6, zmm15, 0x32), 0x84)
                            
                            if ((temp0_2096 & 8) != 0)
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg6, zmm15, 0x23), 0x24)
                        
                        arg6 = var_4c8_4
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm14 & var_428_3, 0x1f)) == 0)
                    zmm1 = var_498_2
                    zmm12 = var_4b8_2
                    arg8 = var_588_5
                    arg5 = var_5b8
                else
                    zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm14 & arg5, 0x1f), 0x1f)
                    char temp0_2182 = _mm_movemask_ps(zmm0)
                    
                    if (temp0_2182 == 0)
                        zmm12 = var_4b8_2
                        arg8 = var_588_5
                    else
                        int32_t var_4a8_5[0x4] = zmm9
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f) & arg5
                        zmm12 = _mm_srai_epi32(zmm12, 0x1f) & zmm1
                        uint32_t temp0_2186 = _mm_movemask_ps(zmm12)
                        zmm9 = zx.o(0)
                        int32_t var_538_4[0x4] = zmm15
                        uint128_t var_4f8_7 = zmm0
                        uint128_t var_598_3
                        
                        if (temp0_2186 == 0)
                            var_598_3 = zx.o(0)
                            zmm7 = zx.o(0)
                        else
                            zmm15 = arg5
                            char rbx_45 = temp0_2186.b
                            
                            if ((rbx_45 & 1) == 0)
                                if ((rbx_45 & 2) != 0)
                                    goto label_14026e3da
                                
                                goto label_14026e30f
                            
                            arg5 = *zmm11[0].q
                            
                            if ((rbx_45 & 2) != 0)
                            label_14026e3da:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, arg5, 0), 
                                    arg5, 0xe2)
                                arg5 = zmm0
                                
                                if ((rbx_45 & 4) == 0)
                                    goto label_14026e318
                                
                                goto label_14026e3f3
                            
                        label_14026e30f:
                            
                            if ((rbx_45 & 4) != 0)
                            label_14026e3f3:
                                zmm0 = _mm_shuffle_ps(*arg8[0].q, arg5, 0x30)
                                arg5 = _mm_shuffle_ps(arg5, zmm0, 0x84)
                                
                                if ((rbx_45 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            else
                            label_14026e318:
                                
                                if ((rbx_45 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            char temp0_2191 = _mm_movemask_ps(zmm1)
                            zmm1 = zx.o(0)
                            
                            if ((temp0_2191 & 1) != 0)
                                zmm1[0] = arg5[0]
                            
                            zmm7 = data_1434426c0
                            zmm12 ^= zmm0
                            
                            if ((temp0_2191 & 2) == 0)
                                var_598_3 = zmm1
                            else
                                var_598_3 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm1, 1), zmm1, 0xe2)
                            
                            zmm1 = _mm_add_epi64(zmm11, zmm7)
                            zmm2 = _mm_shuffle_epi32(zmm12, 0x50)
                            
                            if ((temp0_2191 & 4) != 0)
                                zmm3 = var_598_3
                                var_598_3 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg5, zmm3, 0x32), 0x84)
                            
                            zmm0 = zmm2 & not.o(zmm1)
                            
                            if ((temp0_2191 & 8) != 0)
                                zmm1 = var_598_3
                                arg5 = _mm_shuffle_ps(arg5, zmm1, 0x23)
                                var_598_3 = _mm_shuffle_ps(zmm1, arg5, 0x24)
                            
                            zmm1 = _mm_add_epi64(arg8, zmm7)
                            zmm3 = _mm_shuffle_epi32(zmm12, 0xfa)
                            arg6 = (zmm11 & zmm2) | zmm0
                            
                            if ((rbx_45 & 1) != 0)
                                arg5 = *arg6[0].q
                            
                            zmm0 = zmm3 & not.o(zmm1)
                            zmm1 = arg8 & zmm3
                            zmm12 = zmm7
                            
                            if ((rbx_45 & 2) != 0)
                                arg5 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg6, 0x4e)[0].q, arg5, 0), 
                                    arg5, 0xe2)
                                zmm7 = zmm4
                                arg7 = var_578_7
                                zmm15 = var_568_3
                                zmm1 |= zmm0
                                
                                if ((rbx_45 & 4) != 0)
                                    arg5 = _mm_shuffle_ps(arg5, 
                                        _mm_shuffle_ps(*zmm1[0].q, arg5, 0x30), 0x84)
                            else
                                zmm7 = zmm4
                                zmm1 |= zmm0
                                
                                if ((rbx_45 & 4) != 0)
                                    arg5 = _mm_shuffle_ps(arg5, 
                                        _mm_shuffle_ps(*zmm1[0].q, arg5, 0x30), 0x84)
                            
                            zmm4 = zmm7
                            zmm9 = zx.o(0)
                            
                            if ((rbx_45 & 8) == 0)
                                zmm7 = zx.o(0)
                                
                                if ((temp0_2191 & 1) == 0)
                                    goto label_14026e547
                                
                                goto label_14026e4d3
                            
                            arg5 = _mm_shuffle_ps(arg5, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e).q, arg5, 0x20), 0x24)
                            zmm7 = zx.o(0)
                            
                            if ((temp0_2191 & 1) != 0)
                            label_14026e4d3:
                                zmm7[0] = arg5[0]
                                zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                
                                if ((temp0_2191 & 2) != 0)
                                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm7, 1), zmm7, 0xe2)
                            else
                            label_14026e547:
                                zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                
                                if ((temp0_2191 & 2) != 0)
                                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm7, 1), zmm7, 0xe2)
                            
                            zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm1 = _mm_add_epi64(zmm1, zmm12)
                            int32_t temp0_2224[0x4] = _mm_add_epi64(arg6, zmm12)
                            
                            if ((temp0_2191 & 4) != 0)
                                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg5, zmm7, 0x32), 0x84)
                            
                            if ((temp0_2191 & 8) != 0)
                                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg5, zmm7, 0x23), 0x24)
                            
                            arg5 = zmm15
                            zmm15 = var_538_4
                            zmm11 = (zmm11 & zmm2) | (zmm2 & not.o(temp0_2224))
                            arg8 = (arg8 & zmm3) | (zmm3 & not.o(zmm1))
                        
                        zmm0 = data_1434422d0
                        zmm1 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & arg5
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(zmm14 & zmm1, 0x1f), 0x1f)
                        char temp0_2232 = _mm_movemask_ps(zmm2)
                        float var_518_5[0x4] = zmm7
                        
                        if (temp0_2232 == 0)
                            zmm12 = zx.o(0)
                            zmm2 = var_598_3
                        else
                            if ((temp0_2232 & 1) == 0)
                                if ((temp0_2232 & 2) != 0)
                                    goto label_14026e770
                                
                                goto label_14026e616
                            
                            arg5 = *zmm11[0].q
                            
                            if ((temp0_2232 & 2) != 0)
                            label_14026e770:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, arg5, 0), 
                                    arg5, 0xe2)
                                arg5 = zmm0
                                
                                if ((temp0_2232 & 4) == 0)
                                    goto label_14026e61f
                                
                                goto label_14026e789
                            
                        label_14026e616:
                            
                            if ((temp0_2232 & 4) != 0)
                            label_14026e789:
                                zmm0 = _mm_shuffle_ps(*arg8[0].q, arg5, 0x30)
                                arg5 = _mm_shuffle_ps(arg5, zmm0, 0x84)
                                
                                if ((temp0_2232 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            else
                            label_14026e61f:
                                
                                if ((temp0_2232 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            char temp0_2237 = _mm_movemask_ps(zmm1)
                            arg6 = zx.o(0)
                            
                            if ((temp0_2237 & 1) != 0)
                                arg6[0] = arg5[0]
                            
                            zmm9 = data_1434426c0
                            zmm2 ^= zmm0
                            
                            if ((temp0_2237 & 2) != 0)
                                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, arg6, 1), arg6, 0xe2)
                            
                            zmm1 = _mm_add_epi64(zmm11, zmm9)
                            zmm3 = _mm_shuffle_epi32(zmm2, 0x50)
                            
                            if ((temp0_2237 & 4) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg5, arg6, 0x32), 0x84)
                            
                            zmm0 = zmm3 & not.o(zmm1)
                            arg7 = zmm11
                            
                            if ((temp0_2237 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, arg6, 0x23)
                                arg6 = _mm_shuffle_ps(arg6, arg5, 0x24)
                            
                            int32_t var_528_6[0x4] = arg6
                            zmm1 = _mm_add_epi64(arg8, zmm9)
                            arg6 = _mm_shuffle_epi32(zmm2, 0xfa)
                            zmm11 = (zmm11 & zmm3) | zmm0
                            
                            if ((temp0_2232 & 1) != 0)
                                arg5 = *zmm11[0].q
                            
                            zmm0 = arg6 & not.o(zmm1)
                            zmm4 = arg8
                            arg8 &= arg6
                            
                            if ((temp0_2232 & 2) != 0)
                                arg5 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, arg5, 0), 
                                    arg5, 0xe2)
                                zmm2 = var_598_3
                                arg8 |= zmm0
                                
                                if ((temp0_2232 & 4) != 0)
                                label_14026e7d9:
                                    arg5 = _mm_shuffle_ps(arg5, 
                                        _mm_shuffle_ps(*arg8[0].q, arg5, 0x30), 0x84)
                                    
                                    if ((temp0_2232 & 8) == 0)
                                        goto label_14026e711
                                    
                                    goto label_14026e7f9
                            else
                                zmm2 = var_598_3
                                arg8 |= zmm0
                                
                                if ((temp0_2232 & 4) != 0)
                                    goto label_14026e7d9
                            
                            if ((temp0_2232 & 8) == 0)
                            label_14026e711:
                                zmm12 = zx.o(0)
                                
                                if ((temp0_2237 & 1) == 0)
                                    goto label_14026e80b
                                
                                goto label_14026e71f
                            
                        label_14026e7f9:
                            arg5 = _mm_shuffle_ps(arg5, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, arg5, 0x20), 0x24)
                            zmm12 = zx.o(0)
                            
                            if ((temp0_2237 & 1) != 0)
                            label_14026e71f:
                                zmm12[0] = arg5[0]
                                arg6 = _mm_slli_epi32(arg6, 0x1f)
                                zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                
                                if ((temp0_2237 & 2) != 0)
                                    zmm12 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm12, 1), zmm12, 0xe2)
                            else
                            label_14026e80b:
                                arg6 = _mm_slli_epi32(arg6, 0x1f)
                                zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                
                                if ((temp0_2237 & 2) != 0)
                                    zmm12 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm12, 1), zmm12, 0xe2)
                            
                            int32_t temp0_2267[0x4] = _mm_srai_epi32(arg6, 0x1f)
                            zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                            arg8 = _mm_add_epi64(arg8, zmm9)
                            int32_t temp0_2270[0x4] = _mm_add_epi64(zmm11, zmm9)
                            
                            if ((temp0_2237 & 4) != 0)
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(arg5, zmm12, 0x32), 0x84)
                            
                            arg6 = temp0_2267 & not.o(arg8)
                            
                            if ((temp0_2237 & 8) != 0)
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(arg5, zmm12, 0x23), 0x24)
                            
                            zmm11 = arg7 & zmm3
                            arg8 = zmm4 & temp0_2267
                            arg7 = var_578_7
                            zmm4 = var_5a8_1
                            arg5 = var_568_3
                            zmm15 = var_538_4
                            zmm9 = var_528_6
                            zmm11 |= zmm3 & not.o(temp0_2270)
                            arg8 |= arg6
                        
                        zmm0 = data_142fc95e0
                        zmm1 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & arg5
                        int32_t temp0_2277[0x4] =
                            _mm_srai_epi32(_mm_slli_epi32(zmm14 & zmm1, 0x1f), 0x1f)
                        char temp0_2278 = _mm_movemask_ps(temp0_2277)
                        
                        if (temp0_2278 == 0)
                            arg8 = arg5
                            zmm3 = zx.o(0)
                            arg6 = zx.o(0)
                        else
                            zmm2 = zmm11
                            
                            if ((temp0_2278 & 1) == 0)
                                if ((temp0_2278 & 2) != 0)
                                    goto label_14026ea73
                                
                                goto label_14026e901
                            
                            zmm4 = *zmm2.q
                            
                            if ((temp0_2278 & 2) != 0)
                            label_14026ea73:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e).q, zmm4, 0), 
                                    zmm4, 0xe2)
                                zmm4 = zmm0
                                
                                if ((temp0_2278 & 4) == 0)
                                    goto label_14026e90b
                                
                                goto label_14026ea8d
                            
                        label_14026e901:
                            
                            if ((temp0_2278 & 4) != 0)
                            label_14026ea8d:
                                zmm0 = _mm_shuffle_ps(*arg8[0].q, zmm4, 0x30)
                                zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x84)
                                
                                if ((temp0_2278 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm4, 0x20)
                                    zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                            else
                            label_14026e90b:
                                
                                if ((temp0_2278 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm4, 0x20)
                                    zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                            
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            char temp0_2283 = _mm_movemask_ps(zmm1)
                            zmm3 = zx.o(0)
                            
                            if ((temp0_2283 & 1) != 0)
                                zmm3[0] = zmm4[0]
                            
                            zmm7 = data_1434426c0
                            arg6 = temp0_2277 ^ zmm0
                            
                            if ((temp0_2283 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm3, 1), zmm3, 0xe2)
                            
                            zmm0 = _mm_add_epi64(zmm2, zmm7)
                            zmm1 = _mm_shuffle_epi32(arg6, 0x50)
                            
                            if ((temp0_2283 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x32), 0x84)
                            
                            zmm2 &= zmm1
                            zmm1 &= not.o(zmm0)
                            
                            if ((temp0_2283 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x23), 0x24)
                            
                            zmm7 = _mm_add_epi64(zmm7, arg8)
                            zmm0 = _mm_shuffle_epi32(arg6, 0xfa)
                            zmm2 |= zmm1
                            
                            if ((temp0_2278 & 1) != 0)
                                zmm1 = *zmm2.q
                            
                            if ((temp0_2278 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, zmm1, 0), 
                                    zmm1, 0xe2)
                            
                            zmm4 = var_568_3
                            arg7 = var_578_7
                            zmm2 = var_598_3
                            arg8 = (arg8 & zmm0) | (zmm0 & not.o(zmm7))
                            
                            if ((temp0_2278 & 4) == 0)
                                if ((temp0_2278 & 8) != 0)
                                    goto label_14026ead2
                                
                                goto label_14026e9fc
                            
                            zmm1 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*arg8[0].q, zmm1, 0x30), 0x84)
                            
                            if ((temp0_2278 & 8) != 0)
                            label_14026ead2:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                arg6 = zx.o(0)
                                
                                if ((temp0_2283 & 1) != 0)
                                    goto label_14026ea09
                                
                                goto label_14026eae3
                            
                        label_14026e9fc:
                            arg6 = zx.o(0)
                            
                            if ((temp0_2283 & 1) == 0)
                            label_14026eae3:
                                
                                if ((temp0_2283 & 2) != 0)
                                label_14026eaf7:
                                    arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg6, 1), arg6, 0xe2)
                                    
                                    if ((temp0_2283 & 4) != 0)
                                        goto label_14026ea26
                                    
                                    goto label_14026eb03
                            else
                            label_14026ea09:
                                arg6[0] = zmm1[0]
                                
                                if ((temp0_2283 & 2) != 0)
                                    goto label_14026eaf7
                            
                            if ((temp0_2283 & 4) == 0)
                            label_14026eb03:
                                arg8 = zmm4
                                
                                if ((temp0_2283 & 8) != 0)
                                    arg6 =
                                        _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                            else
                            label_14026ea26:
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x32), 0x84)
                                arg8 = zmm4
                                
                                if ((temp0_2283 & 8) != 0)
                                    arg6 =
                                        _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                        
                        zmm0 = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                        zmm1 = __paddq_xmmdq_memdq(var_438_2, var_508_5)
                        arg5 = data_1434426c0
                        zmm1 = __paddq_xmmdq_memdq(zmm1, var_4d8_4)
                        zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm0, temp0_2060), arg5)
                        zmm1 = _mm_add_epi64(zmm1, arg5)
                        zmm4 = var_4f8_7
                        arg5 = _mm_shuffle_epi32(zmm4, 0x50) & zmm1
                        zmm1 = _mm_shuffle_epi32(zmm4, 0xfa) & zmm0
                        int64_t rax_488 = arg5[0].q
                        int64_t rbp_41 = _mm_shuffle_epi32(arg5, 0x4e).q
                        int64_t rbx_48 = zmm1[0].q
                        int64_t rdi_16 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_488)), 
                                zx.o(*(arg4 + rbp_41))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rbx_48)), zx.o(*(arg4 + rdi_16))[0].q)[
                            0].q)
                        zmm1 = _mm_srli_epi32(zmm0, 0x15)
                        zmm4 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm2 = _mm_add_ps(zmm2, 
                            _mm_mul_ps(var_518_5, 
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0)))
                        zmm0 = data_143442440
                        float temp0_2334[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm0))
                        arg5 = data_143442690
                        float temp0_2336[0x4] = _mm_mul_ps(zmm12, _mm_div_ps(temp0_2334, arg5))
                        zmm0 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm0)), arg5)
                        char temp53_1 = temp0_2182 & 1
                        
                        if (temp53_1 != 0)
                            zmm1 = var_588_5
                            zmm1[0] = zmm2.d
                            var_588_5 = zmm1
                        
                        arg6 = _mm_mul_ps(arg6, zmm0)
                        zmm9 = _mm_add_ps(zmm9, temp0_2336)
                        zmm4 = var_5a8_1
                        arg5 = arg8
                        
                        if (temp53_1 == 0)
                            zmm12 = var_4b8_2
                            arg8 = var_588_5
                            zmm3 = _mm_add_ps(zmm3, arg6)
                            
                            if (temp53_1 != 0)
                                zmm15[0] = zmm3[0]
                        else
                            zmm12 = var_4b8_2
                            zmm12[0] = zmm9[0]
                            arg8 = var_588_5
                            zmm3 = _mm_add_ps(zmm3, arg6)
                            
                            if (temp53_1 != 0)
                                zmm15[0] = zmm3[0]
                        
                        arg6 = var_4c8_4
                        char temp77_1 = temp0_2182 & 2
                        
                        if (temp77_1 != 0)
                            arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg8, 1), arg8, 0xe2)
                            
                            if (temp77_1 != 0)
                                goto label_14026ef53
                        else if (temp77_1 != 0)
                        label_14026ef53:
                            zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm12, 1), zmm12, 0xe2)
                            
                            if (temp77_1 != 0)
                                goto label_14026eca5
                            
                            goto label_14026ef5d
                        
                        bool cond:309_1
                        bool cond:310_1
                        bool cond:322_1
                        bool cond:323_1
                        
                        if (temp77_1 != 0)
                        label_14026eca5:
                            zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm15, 1), zmm15, 0xe2)
                            char temp104_1 = temp0_2182 & 4
                            cond:309_1 = temp104_1 == 0
                            cond:310_1 = temp104_1 != 0
                            cond:322_1 = temp104_1 == 0
                            cond:323_1 = temp104_1 != 0
                            
                            if (temp104_1 != 0)
                                goto label_14026ef6e
                            
                            goto label_14026ecb2
                        
                    label_14026ef5d:
                        char temp103_1 = temp0_2182 & 4
                        cond:309_1 = temp103_1 == 0
                        cond:310_1 = temp103_1 != 0
                        cond:322_1 = temp103_1 == 0
                        cond:323_1 = temp103_1 != 0
                        
                        if (temp103_1 == 0)
                        label_14026ecb2:
                            
                            if (not(cond:309_1))
                            label_14026ecc1:
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm9, zmm12, 0x32), 0x84)
                                
                                if (cond:323_1)
                                    goto label_14026ef87
                                
                                goto label_14026eccc
                        else
                        label_14026ef6e:
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x32), 0x84)
                            
                            if (cond:310_1)
                                goto label_14026ecc1
                        
                        bool cond:345_1
                        bool cond:351_1
                        bool cond:352_1
                        bool cond:346_1
                        
                        if (cond:322_1)
                        label_14026eccc:
                            char temp122_1 = temp0_2182 & 8
                            cond:345_1 = temp122_1 == 0
                            cond:346_1 = temp122_1 != 0
                            cond:351_1 = temp122_1 == 0
                            cond:352_1 = temp122_1 != 0
                            
                            if (temp122_1 != 0)
                            label_14026ecda:
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x23), 0x24)
                                
                                if (cond:346_1)
                                    goto label_14026efa0
                                
                                goto label_14026ece5
                        else
                        label_14026ef87:
                            zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm3, zmm15, 0x32), 0x84)
                            char temp123_1 = temp0_2182 & 8
                            cond:345_1 = temp123_1 == 0
                            cond:346_1 = temp123_1 != 0
                            cond:351_1 = temp123_1 == 0
                            cond:352_1 = temp123_1 != 0
                            
                            if (temp123_1 != 0)
                                goto label_14026ecda
                        
                        if (cond:345_1)
                        label_14026ece5:
                            zmm9 = var_4a8_5
                            
                            if (not(cond:351_1))
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm3, zmm15, 0x23), 0x24)
                        else
                        label_14026efa0:
                            zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm9, zmm12, 0x23), 0x24)
                            zmm9 = var_4a8_5
                            
                            if (cond:352_1)
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm3, zmm15, 0x23), 0x24)
                    
                    arg5 ^= var_428_3
                    zmm0 = _mm_slli_epi32(zmm14 & arg5, 0x1f)
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                    label_14026f32c:
                        zmm7 = var_558_3
                        zmm1 = var_498_2
                        arg5 = var_5b8
                    else
                        zmm7 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_488_2)
                        zmm11 = zmm14 & zmm7
                        zmm1 = _mm_slli_epi32(zmm11, 0x1f)
                        char temp0_2357 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_2357 != 0)
                            zmm4 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm4
                            float var_568_4[0x4] = arg5
                            char rdx_28
                            
                            if (_mm_movemask_ps(zmm1) == 0)
                                zmm4 &= zmm0
                                rdx_28 = temp0_2357
                                
                                if ((rdx_28 & 1) != 0)
                                    arg8[0] = zmm4[0]
                            else
                                zmm0 = data_1434426b0
                                zmm2 = _mm_add_epi64(zmm9, zmm0)
                                zmm3 = var_4e8_5
                                zmm0 = _mm_add_epi64(zmm0, zmm3)
                                arg5 = _mm_cmpeq_epi32(arg5, arg5) ^ zmm1
                                arg6 = _mm_shuffle_epi32(arg5, 0x50)
                                var_4e8_5 = (zmm3 & arg6) | (arg6 & not.o(zmm0))
                                zmm0 = _mm_shuffle_epi32(arg5, 0xfa)
                                zmm9 &= zmm0
                                zmm0 &= not.o(zmm2)
                                arg5 = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                                int32_t temp0_2368[0x4] = __paddq_xmmdq_memdq(var_438_2, var_508_5)
                                zmm2 = data_1434426c0
                                int32_t temp0_2369[0x4] = __paddq_xmmdq_memdq(temp0_2368, var_4d8_4)
                                arg5 = _mm_add_epi64(__paddq_xmmdq_memdq(arg5, temp0_2060), zmm2)
                                int32_t temp0_2372[0x4] = _mm_add_epi64(temp0_2369, zmm2)
                                zmm2 = _mm_shuffle_epi32(zmm1, 0x50) & temp0_2372
                                zmm1 = _mm_shuffle_epi32(zmm1, 0xfa) & arg5
                                int64_t rbp_42 = _mm_shuffle_epi32(zmm2, 0x4e).q
                                int64_t rbx_49 = zmm1[0].q
                                int64_t rdi_17 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                                zmm9 |= zmm0
                                zmm1 = __paddd_xmmdq_memdq(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(
                                                __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + zmm2.q), 
                                                    0), 
                                                *(arg4 + rbp_42), 2), 
                                            *(arg4 + rbx_49), 4), 
                                        *(arg4 + rdi_17), 6), 
                                    data_143442b40)
                                zmm0 = _mm_cvtepi32_ps(zmm1)
                                zmm4 &= zmm0
                                rdx_28 = temp0_2357
                                
                                if ((rdx_28 & 1) != 0)
                                    arg8[0] = zmm4[0]
                            
                            arg6 = var_4c8_4
                            
                            if ((rdx_28 & 2) != 0)
                                zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg8, 1), arg8, 0xe2)
                                arg8 = zmm0
                                
                                if ((rdx_28 & 4) != 0)
                                    goto label_14026efc6
                                
                                goto label_14026ee9e
                            
                            if ((rdx_28 & 4) == 0)
                            label_14026ee9e:
                                
                                if ((rdx_28 & 8) != 0)
                                    arg8 =
                                        _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm4, arg8, 0x23), 0x24)
                            else
                            label_14026efc6:
                                zmm0 = _mm_shuffle_ps(zmm4, arg8, 0x32)
                                arg8 = _mm_shuffle_ps(arg8, zmm0, 0x84)
                                
                                if ((rdx_28 & 8) != 0)
                                    arg8 =
                                        _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm4, arg8, 0x23), 0x24)
                            
                            arg5 = data_1434422d0
                            zmm4 = var_5a8_1 & arg5
                            arg5 = _mm_srai_epi32(
                                _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm4) & zmm11, 0x1f), 0x1f)
                            char temp0_2390 = _mm_movemask_ps(arg5)
                            
                            if (temp0_2390 == 0)
                                arg5 = var_568_4
                            else
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm3 = var_4e8_5
                                
                                if ((temp0_2390 & 1) != 0)
                                    zmm1 = zx.o(*zmm3[0].q)
                                
                                arg6 = data_1434426b0
                                arg5 ^= zmm0
                                float var_598_4[0x4] = zmm7
                                arg7 = zmm14
                                
                                if ((temp0_2390 & 2) != 0)
                                    zmm14 = var_568_4
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                            zmm1, 0), 
                                        zmm1, 0xe2)
                                else
                                    zmm14 = var_568_4
                                
                                zmm2 = _mm_add_epi64(zmm9, arg6)
                                int32_t temp0_2407[0x4] = _mm_add_epi64(arg6, zmm3)
                                zmm7 = _mm_shuffle_epi32(arg5, 0x50)
                                arg5 = _mm_shuffle_epi32(arg5, 0xfa)
                                
                                if ((temp0_2390 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm9[0].q), zmm1, 0x30), 0x84)
                                
                                if ((temp0_2390 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm9, 0x4e).q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                arg6 = var_4c8_4
                                var_4e8_5 = (zmm3 & zmm7) | (zmm7 & not.o(temp0_2407))
                                zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_143442cd0), data_143442b40))
                                zmm9 = (zmm9 & arg5) | (arg5 & not.o(zmm2))
                                arg5 = zmm14
                                zmm14 = arg7
                                arg7 = var_578_7
                                arg8 = arg8
                                zmm7 = var_598_4
                            
                            zmm4 = _mm_cmpeq_epi32(zmm4, zx.o(0)) & not.o(zmm1)
                            
                            if ((rdx_28 & 1) != 0)
                                zmm12[0] = zmm4[0]
                                
                                if ((rdx_28 & 2) != 0)
                                    goto label_14026f143
                                
                                goto label_14026f118
                            
                            if ((rdx_28 & 2) != 0)
                            label_14026f143:
                                zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm12, 1), zmm12, 0xe2)
                                
                                if ((rdx_28 & 4) != 0)
                                    goto label_14026f125
                                
                                goto label_14026f14c
                            
                        label_14026f118:
                            
                            if ((rdx_28 & 4) == 0)
                            label_14026f14c:
                                
                                if ((rdx_28 & 8) != 0)
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(zmm4, zmm12, 0x23), 0x24)
                            else
                            label_14026f125:
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm4, zmm12, 0x32), 0x84)
                                
                                if ((rdx_28 & 8) != 0)
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(zmm4, zmm12, 0x23), 0x24)
                            
                            zmm0 = data_142fc95e0
                            zmm2 = var_5a8_1 & zmm0
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm2)
                            char temp0_2427 = _mm_movemask_ps(_mm_slli_epi32(zmm11 & zmm0, 0x1f))
                            
                            if (temp0_2427 != 0)
                                if ((temp0_2427 & 1) == 0)
                                    if ((temp0_2427 & 2) != 0)
                                        goto label_14026f925
                                    
                                    goto label_14026f19b
                                
                                zmm1 = zx.o(*var_4e8_5.q)
                                
                                if ((temp0_2427 & 2) != 0)
                                label_14026f925:
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            zx.o(*__pshufd_xmmdq_memdq_immb(var_4e8_5, 0x4e).q), 
                                            zmm1, 0), 
                                        zmm1, 0xe2)
                                    
                                    if ((temp0_2427 & 4) == 0)
                                        goto label_14026f1a5
                                    
                                    goto label_14026f942
                                
                            label_14026f19b:
                                
                                if ((temp0_2427 & 4) != 0)
                                label_14026f942:
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm9[0].q), zmm1, 0x30), 0x84)
                                    
                                    if ((temp0_2427 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm9, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                else
                                label_14026f1a5:
                                    
                                    if ((temp0_2427 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm9, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_143442cd0), data_143442b40))
                            
                            zmm2 = _mm_cmpeq_epi32(zmm2, zx.o(0)) & not.o(zmm0)
                            
                            if ((rdx_28 & 1) != 0)
                                zmm15[0] = zmm2.d
                                
                                if ((rdx_28 & 2) != 0)
                                    goto label_14026f21f
                                
                                goto label_14026f1f4
                            
                            if ((rdx_28 & 2) != 0)
                            label_14026f21f:
                                zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm15, 1), zmm15, 0xe2)
                                
                                if ((rdx_28 & 4) != 0)
                                    goto label_14026f201
                                
                                goto label_14026f228
                            
                        label_14026f1f4:
                            
                            if ((rdx_28 & 4) == 0)
                            label_14026f228:
                                
                                if ((rdx_28 & 8) != 0)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm2, zmm15, 0x23), 0x24)
                            else
                            label_14026f201:
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm2, zmm15, 0x32), 0x84)
                                
                                if ((rdx_28 & 8) != 0)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm2, zmm15, 0x23), 0x24)
                        
                        arg5 = (arg5 ^ zmm7) & zmm14
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(arg5, 0x1f)) == 0)
                            goto label_14026f32c
                        
                        zmm0 = __pcmpeqd_xmmdq_memdq(var_488_2, data_143442ad0)
                        char temp0_2445 = _mm_movemask_ps(_mm_slli_epi32(zmm14 & zmm0, 0x1f))
                        zmm7 = var_558_3
                        
                        if (temp0_2445 != 0)
                            zmm2 = zx.o(0)
                            char temp46_1 = temp0_2445 & 1
                            
                            if (temp46_1 != 0)
                                arg8[0] = zmm2.d
                                
                                if (temp46_1 != 0)
                                    goto label_14026f6e7
                            else if (temp46_1 != 0)
                            label_14026f6e7:
                                zmm12[0] = zmm2.d
                                
                                if (temp46_1 != 0)
                                    goto label_14026f2a7
                                
                                goto label_14026f6f2
                            
                            bool cond:225_1
                            bool cond:226_1
                            bool cond:246_1
                            bool cond:247_1
                            
                            if (temp46_1 != 0)
                            label_14026f2a7:
                                zmm15[0] = zmm2.d
                                char temp70_1 = temp0_2445 & 2
                                cond:225_1 = temp70_1 == 0
                                cond:226_1 = temp70_1 != 0
                                cond:246_1 = temp70_1 == 0
                                cond:247_1 = temp70_1 != 0
                                
                                if (temp70_1 != 0)
                                    goto label_14026f709
                                
                                goto label_14026f2b5
                            
                        label_14026f6f2:
                            char temp69_1 = temp0_2445 & 2
                            cond:225_1 = temp69_1 == 0
                            cond:226_1 = temp69_1 != 0
                            cond:246_1 = temp69_1 == 0
                            cond:247_1 = temp69_1 != 0
                            
                            if (temp69_1 == 0)
                            label_14026f2b5:
                                
                                if (not(cond:225_1))
                                label_14026f2c9:
                                    zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm12, 0), 
                                        zmm12, 0xe2)
                                    
                                    if (cond:247_1)
                                        goto label_14026f727
                                    
                                    goto label_14026f2d3
                            else
                            label_14026f709:
                                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                                
                                if (cond:226_1)
                                    goto label_14026f2c9
                            
                            bool cond:290_1
                            bool cond:291_1
                            bool cond:307_1
                            bool cond:308_1
                            
                            if (not(cond:246_1))
                            label_14026f727:
                                zmm15 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm15, 0), zmm15, 0xe2)
                                char temp95_1 = temp0_2445 & 4
                                cond:290_1 = temp95_1 == 0
                                cond:291_1 = temp95_1 != 0
                                cond:307_1 = temp95_1 == 0
                                cond:308_1 = temp95_1 != 0
                                
                                if (temp95_1 != 0)
                                    goto label_14026f2e5
                                
                                goto label_14026f734
                            
                        label_14026f2d3:
                            char temp94_1 = temp0_2445 & 4
                            cond:290_1 = temp94_1 == 0
                            cond:291_1 = temp94_1 != 0
                            cond:307_1 = temp94_1 == 0
                            cond:308_1 = temp94_1 != 0
                            
                            if (temp94_1 == 0)
                            label_14026f734:
                                
                                if (not(cond:290_1))
                                label_14026f743:
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(zx.o(0), zmm12, 0x30), 0x84)
                                    
                                    if (cond:308_1)
                                        goto label_14026f2ff
                                    
                                    goto label_14026f74e
                            else
                            label_14026f2e5:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                                
                                if (cond:291_1)
                                    goto label_14026f743
                            
                            bool cond:333_1
                            bool cond:334_1
                            bool cond:343_1
                            bool cond:344_1
                            
                            if (not(cond:307_1))
                            label_14026f2ff:
                                zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zx.o(0), zmm15, 0x30), 
                                    0x84)
                                char temp115_1 = temp0_2445 & 8
                                cond:333_1 = temp115_1 == 0
                                cond:334_1 = temp115_1 != 0
                                cond:343_1 = temp115_1 == 0
                                cond:344_1 = temp115_1 != 0
                                
                                if (temp115_1 != 0)
                                    goto label_14026f760
                                
                                goto label_14026f30d
                            
                        label_14026f74e:
                            char temp114_1 = temp0_2445 & 8
                            cond:333_1 = temp114_1 == 0
                            cond:334_1 = temp114_1 != 0
                            cond:343_1 = temp114_1 == 0
                            cond:344_1 = temp114_1 != 0
                            
                            if (temp114_1 != 0)
                            label_14026f760:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                                
                                if (cond:334_1)
                                    goto label_14026f31c
                                
                                goto label_14026f76b
                            
                        label_14026f30d:
                            
                            if (cond:333_1)
                            label_14026f76b:
                                
                                if (not(cond:343_1))
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm2, zmm15, 0x20), 0x24)
                            else
                            label_14026f31c:
                                zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x20), 
                                    0x24)
                                
                                if (cond:344_1)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm2, zmm15, 0x20), 0x24)
                        
                        char temp0_2528 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(arg5), 0x1f))
                        
                        if (temp0_2528 == 0)
                            zmm1 = var_498_2
                            arg5 = var_5b8
                        else
                            char temp52_1 = temp0_2528 & 1
                            
                            if (temp52_1 != 0)
                                arg8[0] = 0
                                
                                if (temp52_1 != 0)
                                    goto label_14026f843
                                
                                goto label_14026f7a6
                            
                            if (temp52_1 != 0)
                            label_14026f843:
                                zmm12[0] = 0
                                zmm1 = var_498_2
                                arg5 = var_5b8
                                
                                if (temp52_1 != 0)
                                    goto label_14026f7b8
                                
                                goto label_14026f85a
                            
                        label_14026f7a6:
                            zmm1 = var_498_2
                            arg5 = var_5b8
                            bool cond:244_1
                            bool cond:245_1
                            bool cond:269_1
                            bool cond:270_1
                            
                            if (temp52_1 != 0)
                            label_14026f7b8:
                                zmm15[0] = 0
                                char temp76_1 = temp0_2528 & 2
                                cond:244_1 = temp76_1 == 0
                                cond:245_1 = temp76_1 != 0
                                cond:269_1 = temp76_1 == 0
                                cond:270_1 = temp76_1 != 0
                                
                                if (temp76_1 != 0)
                                    goto label_14026f871
                                
                                goto label_14026f7c6
                            
                        label_14026f85a:
                            char temp75_1 = temp0_2528 & 2
                            cond:244_1 = temp75_1 == 0
                            cond:245_1 = temp75_1 != 0
                            cond:269_1 = temp75_1 == 0
                            cond:270_1 = temp75_1 != 0
                            
                            if (temp75_1 == 0)
                            label_14026f7c6:
                                
                                if (not(cond:244_1))
                                label_14026f7da:
                                    zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm12, 0), 
                                        zmm12, 0xe2)
                                    
                                    if (cond:270_1)
                                        goto label_14026f88f
                                    
                                    goto label_14026f7e4
                            else
                            label_14026f871:
                                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                                
                                if (cond:245_1)
                                    goto label_14026f7da
                            
                            bool cond:305_1
                            bool cond:306_1
                            bool cond:320_1
                            bool cond:321_1
                            
                            if (not(cond:269_1))
                            label_14026f88f:
                                zmm15 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm15, 0), zmm15, 0xe2)
                                char temp102_1 = temp0_2528 & 4
                                cond:305_1 = temp102_1 == 0
                                cond:306_1 = temp102_1 != 0
                                cond:320_1 = temp102_1 == 0
                                cond:321_1 = temp102_1 != 0
                                
                                if (temp102_1 != 0)
                                    goto label_14026f7f6
                                
                                goto label_14026f89c
                            
                        label_14026f7e4:
                            char temp101_1 = temp0_2528 & 4
                            cond:305_1 = temp101_1 == 0
                            cond:306_1 = temp101_1 != 0
                            cond:320_1 = temp101_1 == 0
                            cond:321_1 = temp101_1 != 0
                            
                            if (temp101_1 == 0)
                            label_14026f89c:
                                
                                if (not(cond:305_1))
                                label_14026f8ab:
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(zx.o(0), zmm12, 0x30), 0x84)
                                    
                                    if (cond:321_1)
                                        goto label_14026f810
                                    
                                    goto label_14026f8b6
                            else
                            label_14026f7f6:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                                
                                if (cond:306_1)
                                    goto label_14026f8ab
                            
                            bool cond:341_1
                            bool cond:342_1
                            bool cond:349_1
                            bool cond:350_1
                            
                            if (not(cond:320_1))
                            label_14026f810:
                                zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zx.o(0), zmm15, 0x30), 
                                    0x84)
                                char temp121_1 = temp0_2528 & 8
                                cond:341_1 = temp121_1 == 0
                                cond:342_1 = temp121_1 != 0
                                cond:349_1 = temp121_1 == 0
                                cond:350_1 = temp121_1 == 0
                                
                                if (temp121_1 != 0)
                                    goto label_14026f8c8
                                
                                goto label_14026f81e
                            
                        label_14026f8b6:
                            char temp120_1 = temp0_2528 & 8
                            cond:341_1 = temp120_1 == 0
                            cond:342_1 = temp120_1 != 0
                            cond:349_1 = temp120_1 == 0
                            cond:350_1 = temp120_1 == 0
                            
                            if (temp120_1 != 0)
                            label_14026f8c8:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                                
                                if (cond:342_1)
                                    goto label_14026f82d
                                
                                goto label_14026f8d3
                            
                        label_14026f81e:
                            
                            if (cond:341_1)
                            label_14026f8d3:
                                
                                if (not(cond:349_1))
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zx.o(0), zmm15, 0x20), 0x24)
                            else
                            label_14026f82d:
                                zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x20), 
                                    0x24)
                                
                                if (not(cond:350_1))
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zx.o(0), zmm15, 0x20), 0x24)
                
                float temp0_2454[0x4] = _mm_sub_ps(arg8, arg5)
                float temp0_2455[0x4] = _mm_sub_ps(zmm12, arg7)
                float temp0_2456[0x4] = _mm_mul_ps(temp0_2454, zmm1)
                zmm3 = arg5
                char temp28_1 = temp0_2049 & 1
                
                if (temp28_1 != 0)
                    zmm3 = arg5
                    zmm3[0] = zmm3[0] + temp0_2456[0]
                    zmm15 = _mm_sub_ps(zmm15, arg6)
                    zmm12 = _mm_mul_ps(temp0_2455, zmm1)
                    zmm4 = arg7
                    
                    if (temp28_1 != 0)
                        goto label_14026f429
                    
                    goto label_14026f373
                
                zmm15 = _mm_sub_ps(zmm15, arg6)
                zmm12 = _mm_mul_ps(temp0_2455, zmm1)
                zmm4 = arg7
                
                if (temp28_1 != 0)
                label_14026f429:
                    zmm4 = arg7
                    zmm4[0] = zmm4[0] + zmm12[0]
                    zmm15 = _mm_mul_ps(zmm15, zmm1)
                    zmm2 = arg6
                    
                    if (temp28_1 != 0)
                        goto label_14026f383
                    
                    goto label_14026f43f
                
            label_14026f373:
                zmm15 = _mm_mul_ps(zmm15, zmm1)
                zmm2 = arg6
                bool cond:124_1
                bool cond:125_1
                bool cond:145_1
                bool cond:146_1
                
                if (temp28_1 != 0)
                label_14026f383:
                    zmm2.d = arg6.d f+ zmm15[0]
                    arg5 = _mm_add_ps(arg5, temp0_2456)
                    char temp42_1 = temp0_2049 & 2
                    cond:124_1 = temp42_1 == 0
                    cond:125_1 = temp42_1 != 0
                    cond:145_1 = temp42_1 == 0
                    cond:146_1 = temp42_1 != 0
                    
                    if (temp42_1 != 0)
                        goto label_14026f457
                    
                    goto label_14026f395
                
            label_14026f43f:
                arg5 = _mm_add_ps(arg5, temp0_2456)
                char temp41_1 = temp0_2049 & 2
                cond:124_1 = temp41_1 == 0
                cond:125_1 = temp41_1 != 0
                cond:145_1 = temp41_1 == 0
                cond:146_1 = temp41_1 != 0
                
                if (temp41_1 != 0)
                label_14026f457:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm3, 1), zmm3, 0xe2)
                    arg7 = _mm_add_ps(arg7, zmm12)
                    
                    if (cond:125_1)
                        goto label_14026f3ab
                    
                    goto label_14026f464
                
            label_14026f395:
                arg7 = _mm_add_ps(arg7, zmm12)
                
                if (not(cond:124_1))
                label_14026f3ab:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm4, 1), zmm4, 0xe2)
                    arg6 = _mm_add_ps(arg6, zmm15)
                    
                    if (cond:146_1)
                        goto label_14026f479
                    
                    goto label_14026f3b8
                
            label_14026f464:
                arg6 = _mm_add_ps(arg6, zmm15)
                bool cond:176_1
                bool cond:177_1
                bool cond:200_1
                bool cond:201_1
                
                if (not(cond:145_1))
                label_14026f479:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, zmm2, 1), zmm2, 0xe2)
                    char temp64_1 = temp0_2049 & 4
                    cond:176_1 = temp64_1 == 0
                    cond:177_1 = temp64_1 != 0
                    cond:200_1 = temp64_1 == 0
                    cond:201_1 = temp64_1 != 0
                    
                    if (temp64_1 != 0)
                        goto label_14026f3c8
                    
                    goto label_14026f485
                
            label_14026f3b8:
                char temp63_1 = temp0_2049 & 4
                cond:176_1 = temp63_1 == 0
                cond:177_1 = temp63_1 != 0
                cond:200_1 = temp63_1 == 0
                cond:201_1 = temp63_1 != 0
                
                if (temp63_1 == 0)
                label_14026f485:
                    
                    if (not(cond:176_1))
                    label_14026f493:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x32), 0x84)
                        
                        if (cond:201_1)
                            goto label_14026f3df
                        
                        goto label_14026f49d
                else
                label_14026f3c8:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg5, zmm3, 0x32), 0x84)
                    
                    if (cond:177_1)
                        goto label_14026f493
                
                bool cond:242_1
                bool cond:243_1
                bool cond:267_1
                bool cond:268_1
                
                if (not(cond:200_1))
                label_14026f3df:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg6, zmm2, 0x32), 0x84)
                    char temp89_1 = temp0_2049 & 8
                    cond:242_1 = temp89_1 == 0
                    cond:243_1 = temp89_1 != 0
                    cond:267_1 = temp89_1 == 0
                    cond:268_1 = temp89_1 != 0
                    
                    if (temp89_1 != 0)
                        goto label_14026f4ae
                    
                    goto label_14026f3ec
                
            label_14026f49d:
                char temp88_1 = temp0_2049 & 8
                cond:242_1 = temp88_1 == 0
                cond:243_1 = temp88_1 != 0
                cond:267_1 = temp88_1 == 0
                cond:268_1 = temp88_1 != 0
                
                if (temp88_1 != 0)
                label_14026f4ae:
                    arg5 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg5, zmm3, 0x23), 0x24)
                    zmm3 = var_368_1
                    
                    if (cond:243_1)
                        goto label_14026f408
                    
                    goto label_14026f4c0
                
            label_14026f3ec:
                arg5 = zmm3
                zmm3 = var_368_1
                
                if (cond:242_1)
                label_14026f4c0:
                    arg7 = zmm4
                    
                    if (not(cond:267_1))
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg6, zmm2, 0x23), 0x24)
                else
                label_14026f408:
                    arg7 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x23), 0x24)
                    
                    if (cond:268_1)
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg6, zmm2, 0x23), 0x24)
                
                arg6 = zmm2
        
        zmm7 = __punpckldq_xmmdq_memdq(zmm7, var_468_3)
        zmm10 = __punpckldq_xmmdq_memdq(zmm10, var_448_4)
        char temp0_2489 = _mm_movemask_ps(var_418_3 & zmm3)
        
        if (temp0_2489 != 0)
            char temp0_2490 = temp0_2489 & 1
            
            if (temp0_2490 != 0)
                arg5[0] = 0
                
                if (temp0_2490 != 0)
                    goto label_14026f566
            else if (temp0_2490 != 0)
            label_14026f566:
                arg7[0] = 0
                
                if (temp0_2490 != 0)
                    goto label_14026f50f
                
                goto label_14026f56d
            
            bool cond:18_1
            bool cond:19_1
            bool cond:23_1
            bool cond:24_1
            
            if (temp0_2490 != 0)
            label_14026f50f:
                arg6[0] = 0
                char temp3_1 = temp0_2489 & 2
                cond:18_1 = temp3_1 == 0
                cond:19_1 = temp3_1 != 0
                cond:23_1 = temp3_1 == 0
                cond:24_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                    goto label_14026f57d
                
                goto label_14026f518
            
        label_14026f56d:
            char temp2_1 = temp0_2489 & 2
            cond:18_1 = temp2_1 == 0
            cond:19_1 = temp2_1 != 0
            cond:23_1 = temp2_1 == 0
            cond:24_1 = temp2_1 != 0
            
            if (temp2_1 == 0)
            label_14026f518:
                
                if (not(cond:18_1))
                label_14026f527:
                    arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg7, 0), arg7, 0xe2)
                    
                    if (cond:24_1)
                        goto label_14026f58f
                    
                    goto label_14026f52d
            else
            label_14026f57d:
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg5, 0), arg5, 0xe2)
                
                if (cond:19_1)
                    goto label_14026f527
            
            bool cond:37_1
            bool cond:38_1
            bool cond:47_1
            bool cond:48_1
            
            if (not(cond:23_1))
            label_14026f58f:
                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg6, 0), arg6, 0xe2)
                char temp9_1 = temp0_2489 & 4
                cond:37_1 = temp9_1 == 0
                cond:38_1 = temp9_1 != 0
                cond:47_1 = temp9_1 == 0
                cond:48_1 = temp9_1 != 0
                
                if (temp9_1 != 0)
                    goto label_14026f539
                
                goto label_14026f597
            
        label_14026f52d:
            char temp8_1 = temp0_2489 & 4
            cond:37_1 = temp8_1 == 0
            cond:38_1 = temp8_1 != 0
            cond:47_1 = temp8_1 == 0
            cond:48_1 = temp8_1 != 0
            
            if (temp8_1 == 0)
            label_14026f597:
                
                if (not(cond:37_1))
                label_14026f5a1:
                    arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x30), 0x84)
                    
                    if (cond:48_1)
                        goto label_14026f548
                    
                    goto label_14026f5a8
            else
            label_14026f539:
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(0), arg5, 0x30), 0x84)
                
                if (cond:38_1)
                    goto label_14026f5a1
            
            bool cond:60_1
            bool cond:61_1
            bool cond:69_1
            bool cond:70_1
            
            if (not(cond:47_1))
            label_14026f548:
                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zx.o(0), arg6, 0x30), 0x84)
                char temp15_1 = temp0_2489 & 8
                cond:60_1 = temp15_1 == 0
                cond:61_1 = temp15_1 != 0
                cond:69_1 = temp15_1 == 0
                cond:70_1 = temp15_1 != 0
                
                if (temp15_1 != 0)
                    goto label_14026f5b4
                
                goto label_14026f551
            
        label_14026f5a8:
            char temp14_1 = temp0_2489 & 8
            cond:60_1 = temp14_1 == 0
            cond:61_1 = temp14_1 != 0
            cond:69_1 = temp14_1 == 0
            cond:70_1 = temp14_1 != 0
            
            if (temp14_1 != 0)
            label_14026f5b4:
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(0), arg5, 0x20), 0x24)
                
                if (cond:61_1)
                    goto label_14026f55b
                
                goto label_14026f5ba
            
        label_14026f551:
            
            if (cond:60_1)
            label_14026f5ba:
                
                if (not(cond:69_1))
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zx.o(0), arg6, 0x20), 0x24)
            else
            label_14026f55b:
                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x20), 0x24)
                
                if (cond:70_1)
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zx.o(0), arg6, 0x20), 0x24)
        
        zmm10 = _mm_unpacklo_epi64(zmm10, zmm7[0].q)
        zmm0 = zx.o(arg6[0].q)
        arg6 = _mm_unpackhi_ps(arg6, zx.o(0))
        float temp0_2511[0x4] = _mm_unpacklo_ps(arg5, arg7[0].q)
        float temp0_2512[0x4] = _mm_unpackhi_ps(arg5, arg7)
        uint128_t var_168 = _mm_shuffle_ps(temp0_2511, zmm0, 0x84)
        float var_158_1[0x4] = _mm_shuffle_ps(temp0_2511, zmm0, 0xde)
        uint128_t var_148_1 = temp0_2512.q | arg6[0].q << 0x40
        float var_138_1[0x4] = _mm_unpackhi_pd(temp0_2512, arg6[0].q)
        uint64_t i_4 = zx.q(_mm_movemask_ps(zmm3))
        
        do
            uint64_t rcx_66
            uint64_t rflags_1
            
            if (i_4 == 0)
                rcx_66 = 0x40
            else
                rcx_66, rflags_1 = _bit_scan_forward(i_4)
            float var_178[0x4] = zmm10
            result = sx.q(var_178[zx.q(rcx_66.d) & 3]) * 0x30
            *(arg1 + result + 0x10) = (&var_168)[rcx_66]
            i_4 &= rol.q(-2, rcx_66.b)
        while (i_4 != 0)
else
    uint128_t var_1a8_1 = _mm_shuffle_epi32(_mm_add_epi64(4, zx.o(arg4)), 0x44)
    uint128_t var_258_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t rcx
    rcx.b = 0f f>= zmm2.d
    zmm1 = zx.o(0)
    zmm1[0] = float.s(arg9 - 1)
    uint128_t var_1b8_1 = _mm_shuffle_epi32(zx.o(neg.d(rcx)), 0)
    zmm1[0] = zmm1[0] f* zmm2.d
    int32_t rax_2 = int.d(zmm1[0])
    r15 = 0
    
    if (rax_2 s< 0)
        rax_2 = 0
    
    if (rax_2 s> arg9 - 2)
        rax_2 = arg9 - 2
    
    uint128_t var_438_1 = _mm_shuffle_epi32(zx.o(rax_2), 0)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    arg6 = _mm_cmpeq_epi32(arg6, arg6)
    zmm10 = zx.o(0)
    
    do
        int64_t rax_27 = sx.q((r15 << 3).d)
        zmm0 = *(arg2 + rax_27)
        zmm1 = *(arg2 + rax_27 + 0x10)
        uint128_t var_4b8_1 = zmm0
        float var_398_1[0x4] = zmm1
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, zmm1, 0xdd), 3)
        int64_t rax_29 = sx.q(zmm0.d)
        int64_t rcx_8 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        int64_t rbp_2 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        zmm0 = zx.o(*(arg3 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rbp_2)), zmm0.q)
        int32_t temp0_127[0x4] = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + rax_29)), zx.q(*(arg3 + rcx_8))), zmm1[0].q)
        zmm12 = _mm_cmpeq_epi32(temp0_127, arg6)
        zmm0 = zmm12 ^ arg6
        int32_t var_568[0x4]
        float var_548[0x4]
        
        if (_mm_movemask_ps(zmm0) == 0)
            arg5 = arg7
            arg7 = var_548
            zmm14 = var_568
            zmm15 = zmm0
            zmm11 = var_5b8
        else
            zmm7 = _mm_shuffle_epi32(temp0_127, 0x4e)
            zmm14 = zx.o(0)
            int32_t temp0_131[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm7)
            zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_127)
            zmm2 = temp0_127 & zmm0
            int64_t rax_32 = sx.q(zmm2.d)
            int64_t rcx_10 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            int64_t rbp_4 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            zmm2 = zx.o(*(arg4 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)))
            zmm3 = _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_4)), zmm2.q)
            zmm4 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_32)), zx.q(*(arg4 + rcx_10))), zmm3[0].q)
            zmm2 = zmm12 & not.o(zmm4 & data_143442be0)
            arg6 = (arg7 & zmm12) | (zmm12 & not.o(_mm_srli_epi32(zmm4, 0x18)) & data_143442bf0)
            float var_4c8[0x4]
            zmm10 = (var_4c8 & zmm12) | (zmm12 & not.o(_mm_srli_epi32(zmm4, 0x1c)))
            zmm3 = _mm_slli_epi32(zmm10, 2) & zmm0
            int64_t rax_34 = sx.q(zmm3[0])
            int64_t rcx_12 = sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
            int64_t rbp_6 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
            zmm3 = zx.o(*(sx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + &data_143442cf0))
            arg5 = _mm_unpacklo_epi32(zx.o(*(rbp_6 + &data_143442cf0)), zmm3[0].q)
            zmm3 = _mm_unpacklo_epi32(zx.o(*(rax_34 + &data_143442cf0)), 
                zx.o(*(rcx_12 + &data_143442cf0))[0].q)
            arg7 = arg6
            arg6 &= data_143442c00
            int32_t var_348_1[0x4] = arg6
            zmm4 = (_mm_slli_epi32(zmm10, 3) | arg6) & zmm0
            uint32_t rax_37 = zx.d(*(sx.q(zmm4[0]) + &data_143442d10))
            int64_t rcx_14 = sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])
            uint32_t rbp_9 = zx.d(*(sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + &data_143442d10))
            uint32_t rbx_12 =
                zx.d(*(sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + &data_143442d10)) << 8 | rbp_9
            zmm4 = _mm_insert_epi16(zx.o(zx.d(*(rcx_14 + &data_143442d10)) << 8) | zx.o(rax_37), 
                rbx_12, 1)
            zmm3 = _mm_unpacklo_epi64(zmm3, arg5[0].q)
            zmm4 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm4, zmm14[0].q), zmm14[0].q)
            var_4c8 = zmm10
            zmm10 = __pcmpeqd_xmmdq_memdq(zmm10, data_142fc95c0)
            arg6 = zmm10 & not.o(zmm0)
            arg5 = zx.o(0)
            
            if (_mm_movemask_ps(arg6) != 0)
                arg6 &= zmm4
                arg5 = arg6
            
            zmm7 = _mm_unpacklo_epi32(zmm7, temp0_131[0].q)
            int32_t temp0_158[0x4] = _mm_unpacklo_epi32(temp0_127, zmm1[0].q)
            int32_t var_338[0x4]
            zmm11 = (var_338 & zmm12) | zmm2
            zmm3 &= zmm0
            zmm15 = zmm0
            zmm0 &= data_142fc95e0
            float var_558_1[0x4] = zmm10
            zmm2 = zmm12 & not.o(zmm10)
            char temp0_159 = _mm_movemask_ps(zmm2)
            uint128_t var_198_1 = zmm2
            
            if (temp0_159 == 0)
                zmm4 = zx.o(0)
            else
                zmm4 &= zmm2
                arg5 = _mm_srli_epi32(zmm2, 0x1f) | (zmm2 & not.o(arg5))
            
            zmm10 = zx.o(0)
            int32_t temp0_161[0x4] = _mm_cmpeq_epi32(arg6, arg6)
            zmm4 = _mm_madd_epi16(zmm4, zmm0)
            float var_588_1[0x4] = _mm_add_epi64(var_1a8_1, temp0_158)
            uint128_t var_528_1 = _mm_add_epi64(var_1a8_1, zmm7)
            zmm0 = _mm_shuffle_epi32(arg5, 0xf5)
            uint128_t var_498
            zmm2 = (var_498 & zmm12) | (zmm12 & not.o(_mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(arg5, zmm3), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm0), 0xe8).q)))
            zmm14 = (var_548 & zmm12) | (zmm12 & not.o(zmm4))
            float var_508_3[0x4] = zmm12
            zmm0 = zmm12 & not.o(__pcmpgtd_xmmdq_memdq(zmm11, data_142d3f5b0))
            zmm12 = zmm2
            var_498 = zmm2
            int32_t var_538_1[0x4] = arg7
            var_338 = zmm11
            int32_t var_488_1[0x4] = zmm15
            float var_548_1[0x4] = zmm14
            float var_4d8_1[0x4] = zmm7
            uint128_t var_468_1
            
            if (_mm_movemask_ps(zmm0) == 0)
                zmm4 = zx.o(0)
                var_468_1 = zx.o(0)
            label_1402661ea:
                arg5 = var_558_1
                arg7 = var_528_1
                zmm11 = var_568
                arg6 = var_5b8
            else
                arg5 = arg7
                float var_4f8_1[0x4] = arg8
                arg8 = arg7 & data_142fc95f0
                zmm10 = zx.o(0)
                zmm1 = _mm_srai_epi32(_mm_slli_epi32(_mm_cmpeq_epi32(arg8, zx.o(0)) & zmm0, 0x1f), 
                    0x1f)
                zmm4 = zx.o(0)
                var_468_1 = zx.o(0)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    uint128_t var_468_2 = zx.o(0)
                    zmm2 = zx.o(arg10)
                    
                    if (0f f>= zmm2.d)
                        zmm10 = zx.o(0)
                        zmm4 = zx.o(0)
                    else
                        zmm3 = _mm_add_epi32(zmm11, temp0_161)
                        
                        if (zmm2.d f>= 1f)
                            zmm3 &= zmm1
                            zmm10 = zmm3
                            zmm4 = zmm3
                        else
                            zmm2 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm3), var_258_1)
                            zmm4 = __andps_xmmxud_memxud(zmm2, data_142d3f780)
                            arg5 = __addps_xmmps_memps(
                                __addps_xmmps_memps(__andps_xmmxud_memxud(zmm2, data_142d3f770), 
                                    data_142d3f740), 
                                data_1434427a0) ^ zmm4
                            var_468_2 = zx.o(0)
                            float temp0_187[0x4] = _mm_add_ps(
                                __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm2, arg5, 1), data_142d3f7e0), 
                                arg5)
                            arg5 = _mm_cvttps_epi32(temp0_187)
                            zmm10 = _mm_cmpgt_epi32(arg5, zmm3)
                            zmm10 = ((zmm10 & not.o(arg5)) | (zmm3 & zmm10)) & zmm1
                            
                            if (arg11 != 1)
                                var_468_2 = _mm_sub_ps(zmm2, temp0_187)
                            
                            zmm2 = _mm_sub_epi32(zmm10, _mm_cmpeq_epi32(temp0_187, temp0_187))
                            zmm4 = _mm_cmpgt_epi32(zmm3, zmm2)
                            zmm4 = ((zmm4 & not.o(zmm3)) | (zmm2 & zmm4)) & zmm1
                    
                    var_468_1 = var_468_2 & zmm1
                
                arg8 = _mm_srai_epi32(
                    _mm_slli_epi32(_mm_cmpeq_epi32(arg8, zx.o(0)) & not.o(zmm0), 0x1f), 0x1f)
                
                if (_mm_movemask_ps(arg8) == 0)
                    arg8 = var_4f8_1
                    goto label_1402661ea
                
                zmm2 = _mm_cmpgt_epi32(data_1434422d0, zmm11) | var_1b8_1
                zmm0 = zmm2 & arg8
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm10 = zmm0 & not.o(zmm10)
                    zmm4 = zmm0 & not.o(zmm4)
                
                zmm0 = var_468_1
                zmm3 = zmm14
                arg6 = var_5b8
                zmm14 = zmm2 & not.o(arg8)
                uint32_t temp0_200 = _mm_movemask_ps(zmm14)
                zmm1 = zx.o(0)
                
                if (temp0_200 == 0)
                    zmm15 = zmm3
                    zmm11 = var_568
                    arg5 = var_558_1
                    zmm9 = var_528_1
                else
                    int32_t temp0_202[0x4] = _mm_add_epi32(zmm11, _mm_cmpeq_epi32(zmm0, zmm0))
                    
                    if (arg10.d f>= 1f)
                        zmm15 = var_548_1
                        arg7 = temp0_202 & zmm14
                        zmm10 = (zmm14 & not.o(zmm10)) | arg7
                        zmm4 = (zmm14 & not.o(zmm4)) | arg7
                        zmm11 = var_568
                        zmm0 = var_468_1
                        arg5 = var_558_1
                        zmm9 = var_528_1
                    else
                        uint128_t var_418_1 = zmm2
                        float var_4e8_1[0x4] = zmm4
                        float var_518_1[0x4] = zmm10
                        int32_t var_5b8_1[0x4] = arg6
                        zmm0 = _mm_shuffle_epi32(zmm11, 0xf5)
                        zmm1 = _mm_mul_epu32(_mm_shuffle_epi32(zmm12, 0xf5), zmm0)
                        zmm0 = _mm_mul_epu32(zmm12, zmm11)
                        zmm15 = _mm_shuffle_epi32(var_548_1, 0x4e)
                        zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm0, 0xe8), 
                            _mm_shuffle_epi32(zmm1, 0xe8)[0].q)
                        zmm1 = _mm_cmpgt_epi32(zx.o(0), var_548_1)
                        zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm15)
                        zmm12 = _mm_unpacklo_epi32(var_548_1, zmm1[0].q)
                        int32_t temp0_214[0x4] = _mm_unpacklo_epi32(zmm15, zmm2.q)
                        zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                        zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                        zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                        int32_t temp0_218[0x4] = __paddq_xmmdq_memdq(temp0_214, var_528_1)
                        zmm12 = __paddq_xmmdq_memdq(zmm12, var_588_1)
                        zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                        zmm2 = data_143442a20
                        int32_t temp0_223[0x4] = _mm_add_epi64(_mm_add_epi64(temp0_218, zmm2), zmm1)
                        zmm12 = _mm_add_epi64(_mm_add_epi64(zmm12, zmm2), zmm0)
                        zmm0 = data_143442c10
                        zmm12 &= zmm0
                        zmm15 = temp0_223 & zmm0
                        zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(temp0_202), 
                            var_258_1))
                        zmm2 = __pcmpgtd_xmmdq_memdq(zmm0, data_142d8f750) & zmm0
                        zmm10 = _mm_cmpgt_epi32(temp0_202, zmm2)
                        zmm10 = (zmm10 & not.o(temp0_202)) | (zmm2 & zmm10)
                        
                        if (arg9 s< 0x100)
                            zmm3 = _mm_shuffle_epi32(zmm10, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                            zmm0 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm10, _mm_cmpgt_epi32(zx.o(0), zmm10)[0].q), 
                                zmm12)
                            char rbx_14 = temp0_200.b
                            arg5 = _mm_cmpeq_epi32(arg5, arg5)
                            float var_288[0x4]
                            
                            if ((rbx_14 & 1) != 0)
                                zmm1 = var_288
                                zmm1[0] = zx.o(*zmm0.q)[0]
                                arg7 = var_548_1
                                zmm3 = _mm_unpacklo_epi32(zmm3, zmm2.q)
                                
                                if ((rbx_14 & 2) != 0)
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm1, 0), 
                                        zmm1, 0xe2)
                            else
                                zmm1 = var_288
                                arg7 = var_548_1
                                zmm3 = _mm_unpacklo_epi32(zmm3, zmm2.q)
                                
                                if ((rbx_14 & 2) != 0)
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm1, 0), 
                                        zmm1, 0xe2)
                            
                            zmm3 = _mm_add_epi64(zmm3, zmm15)
                            
                            if ((rbx_14 & 4) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(zx.o(*zmm3[0].q), zmm1, 0x30), 0x84)
                                
                                if ((rbx_14 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                            zmm1, 0x20), 
                                        0x24)
                            else if ((rbx_14 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), zmm1, 
                                        0x20), 
                                    0x24)
                            
                            zmm7 = __pcmpgtd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm1, data_142ed6810), var_438_1)
                            arg6 = zmm7 ^ arg5
                            var_288 = zmm1
                            int32_t var_448_2[0x4] = arg6
                            
                            if (_mm_movemask_ps(zmm7 & not.o(zmm14)) == 0)
                                zmm3 = zmm10
                            else
                                zmm4 = (zmm7 & not.o(temp0_202)) | (zmm7 & zmm10)
                                zmm0 = _mm_sub_epi32(zmm10, arg5)
                                zmm7 &= not.o(_mm_cmpgt_epi32(zmm0, temp0_202) ^ arg5)
                                zmm2 = zmm14 & zmm7
                                uint32_t j = _mm_movemask_ps(zmm2)
                                
                                if (j == 0)
                                    zmm3 = zmm4
                                else
                                    int32_t temp0_300[0x4] = _mm_cmpeq_epi32(temp0_158, temp0_158)
                                    arg6 = zmm10
                                    
                                    do
                                        arg5 = zmm0
                                        float temp0_303[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
                                        int32_t temp0_304[0x4] = _mm_cmpgt_epi32(zx.o(0), temp0_303)
                                        zmm0 = _mm_add_epi64(
                                            _mm_unpacklo_epi32(zmm0, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                            zmm12)
                                        char temp0_308 = _mm_movemask_ps(zmm2)
                                        float var_1e8[0x4]
                                        
                                        if ((temp0_308 & 1) != 0)
                                            zmm2.d = zx.o(*zmm0.q)[0]
                                            zmm1 = zmm2
                                            zmm3 = _mm_unpacklo_epi32(temp0_303, temp0_304[0].q)
                                            
                                            if ((temp0_308 & 2) != 0)
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                        else
                                            zmm1 = var_1e8
                                            zmm3 = _mm_unpacklo_epi32(temp0_303, temp0_304[0].q)
                                            
                                            if ((temp0_308 & 2) != 0)
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                        
                                        arg7 = var_548_1
                                        zmm3 = _mm_add_epi64(zmm3, zmm15)
                                        
                                        if ((temp0_308 & 4) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(zx.o(*zmm3[0].q), zmm1, 0x30), 0x84)
                                            
                                            if ((temp0_308 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                                        zmm1, 0x20), 
                                                    0x24)
                                        else if ((temp0_308 & 8) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), zmm1, 
                                                    0x20), 
                                                0x24)
                                        
                                        var_1e8 = zmm1
                                        zmm0 = __pcmpgtd_xmmdq_memdq(
                                            __andps_xmmxud_memxud(zmm1, data_142ed6810), var_438_1)
                                            & zmm7
                                        zmm2 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm0 & zmm14) != j)
                                            zmm2 = zmm0 ^ zmm7
                                        
                                        zmm3 = (zmm0 & not.o(zmm4)) | (arg6 & zmm0)
                                        zmm0 = _mm_sub_epi32(arg5, temp0_300)
                                        zmm7 = _mm_cmpgt_epi32(zmm0, temp0_202) & not.o(zmm2)
                                        zmm2 = zmm7 & zmm14
                                        j = _mm_movemask_ps(zmm2)
                                        arg6 = arg5
                                        zmm4 = zmm3
                                    while (j != 0)
                            
                            zmm1 = var_448_2
                            
                            if (_mm_movemask_ps(_mm_andnot_ps(zmm1, zmm14)) == 0)
                                zmm4 = zmm3
                                arg6 = _mm_cmpeq_epi32(arg6, arg6)
                            else
                                zmm3 &= zmm1
                                arg6 = _mm_cmpeq_epi32(arg6, arg6)
                                zmm10 = _mm_add_epi32(zmm10, arg6)
                                zmm7 = __pcmpgtd_xmmdq_memdq(zmm10, data_142d8f750) & (zmm1 ^ arg6)
                                zmm0 = zmm7 & zmm14
                                uint32_t j_1 = _mm_movemask_ps(zmm0)
                                
                                if (j_1 != 0)
                                    do
                                        zmm4 = _mm_shuffle_epi32(zmm10, 0x4e)
                                        arg5 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                        zmm2 = _mm_add_epi64(
                                            _mm_unpacklo_epi32(zmm10, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm10)[0].q), 
                                            zmm12)
                                        char temp0_412 = _mm_movemask_ps(zmm0)
                                        float var_1d8[0x4]
                                        
                                        if ((temp0_412 & 1) != 0)
                                            zmm1 = var_1d8
                                            zmm1[0] = zx.d(*zmm2.q)
                                            zmm4 = _mm_unpacklo_epi32(zmm4, arg5[0].q)
                                            
                                            if ((temp0_412 & 2) != 0)
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                        else
                                            zmm1 = var_1d8
                                            zmm4 = _mm_unpacklo_epi32(zmm4, arg5[0].q)
                                            
                                            if ((temp0_412 & 2) != 0)
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                        
                                        zmm4 = _mm_add_epi64(zmm4, zmm15)
                                        
                                        if ((temp0_412 & 4) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm1, 0x30), 0x84)
                                            
                                            if ((temp0_412 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                        zmm1, 0x20), 
                                                    0x24)
                                        else if ((temp0_412 & 8) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm1, 
                                                    0x20), 
                                                0x24)
                                        
                                        var_1d8 = zmm1
                                        zmm2 = __pcmpgtd_xmmdq_memdq(
                                            __andps_xmmxud_memxud(zmm1, data_142ed6810), var_438_1)
                                            & not.o(zmm7)
                                        arg5 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm2 & zmm14) != j_1)
                                            arg5 = zmm2 ^ zmm7
                                        
                                        zmm4 = (zmm2 & not.o(zmm3)) | (zmm2 & zmm10)
                                        zmm10 = _mm_add_epi32(zmm10, arg6)
                                        zmm7 = _mm_cmpgt_epi32(zmm10, zx.o(0)) & arg5
                                        zmm0 = zmm7 & zmm14
                                        j_1 = _mm_movemask_ps(zmm0)
                                        zmm3 = zmm4
                                    while (j_1 != 0)
                                else
                                    zmm4 = zmm3
                            
                            zmm10 = (zmm4 & zmm14) | (zmm14 & not.o(var_518_1))
                            zmm1 = _mm_shuffle_epi32(zmm10, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                            zmm0 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm10, _mm_cmpgt_epi32(zx.o(0), zmm10)[0].q), 
                                zmm12)
                            float var_318[0x4]
                            
                            if ((rbx_14 & 1) != 0)
                                var_318[0] = zx.o(*zmm0.q)[0]
                                zmm3 = var_318
                            else
                                zmm3 = var_318
                            
                            zmm9 = var_528_1
                            zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                            
                            if ((rbx_14 & 2) == 0)
                                zmm1 = _mm_add_epi64(zmm1, zmm15)
                                
                                if ((rbx_14 & 4) != 0)
                                    goto label_140266fb9
                                
                                goto label_140266ec8
                            
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                            zmm1 = _mm_add_epi64(zmm1, zmm15)
                            
                            if ((rbx_14 & 4) == 0)
                            label_140266ec8:
                                zmm0 = zmm14 ^ arg6
                                
                                if ((rbx_14 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), 
                                            zmm3, 0x20), 
                                        0x24)
                            else
                            label_140266fb9:
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*zmm1[0].q), zmm3, 0x30), 0x84)
                                zmm0 = zmm14 ^ arg6
                                
                                if ((rbx_14 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), 
                                            zmm3, 0x20), 
                                        0x24)
                            
                            zmm4 = (_mm_sub_epi32(zmm10, arg6) & zmm14) | (var_4e8_1 & zmm0)
                            zmm0 = _mm_cmpgt_epi32(zmm4, temp0_202) & zmm14
                            var_318 = zmm3
                            
                            if (_mm_movemask_ps(zmm0) != 0)
                                zmm4 = (temp0_202 & zmm0) | (zmm0 & not.o(zmm4))
                            
                            zmm11 = var_568
                            zmm0 = _mm_shuffle_epi32(zmm4, 0x4e)
                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                            zmm12 = _mm_add_epi64(zmm12, _mm_unpacklo_epi32(zmm4, zmm2.q))
                            float var_268[0x4]
                            
                            if ((rbx_14 & 1) != 0)
                                zmm2 = zx.o(*zmm12[0].q)
                                zmm3 = var_268
                                zmm3[0] = zmm2.d
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                
                                if ((rbx_14 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            else
                                zmm3 = var_268
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                
                                if ((rbx_14 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            
                            zmm12 = var_498
                            int32_t temp0_458[0x4] = _mm_add_epi64(zmm15, zmm0)
                            
                            if ((rbx_14 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*temp0_458[0].q), zmm3, 0x30), 0x84)
                                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                arg5 = var_558_1
                                
                                if ((rbx_14 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_458, 0x4e).q), 
                                            zmm3, 0x20), 
                                        0x24)
                            else
                                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                arg5 = var_558_1
                                
                                if ((rbx_14 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_458, 0x4e).q), 
                                            zmm3, 0x20), 
                                        0x24)
                            
                            arg6 = var_5b8_1
                            zmm1 = data_142ed6810
                            zmm0 = _mm_and_ps(var_318, zmm1)
                            var_268 = zmm3
                        else
                            zmm0 = _mm_add_epi32(zmm10, zmm10)
                            zmm3 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                            zmm0 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                zmm12)
                            char rbx_13 = temp0_200.b
                            zmm11 = data_143442cd0
                            int32_t temp0_237[0x4] = _mm_cmpeq_epi32(arg6, arg6)
                            float var_298[0x4]
                            
                            if ((rbx_13 & 1) != 0)
                                zmm1 = var_298
                                zmm1[0] = zx.o(*zmm0.q)[0]
                                arg7 = var_548_1
                                zmm3 = _mm_unpacklo_epi32(zmm3, zmm2.q)
                                
                                if ((rbx_13 & 2) != 0)
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm1, 0), 
                                        zmm1, 0xe2)
                            else
                                zmm1 = var_298
                                arg7 = var_548_1
                                zmm3 = _mm_unpacklo_epi32(zmm3, zmm2.q)
                                
                                if ((rbx_13 & 2) != 0)
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm1, 0), 
                                        zmm1, 0xe2)
                            
                            zmm3 = _mm_add_epi64(zmm3, zmm15)
                            
                            if ((rbx_13 & 4) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(zx.o(*zmm3[0].q), zmm1, 0x30), 0x84)
                                
                                if ((rbx_13 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                            zmm1, 0x20), 
                                        0x24)
                            else if ((rbx_13 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), zmm1, 
                                        0x20), 
                                    0x24)
                            
                            arg5 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(zmm1, zmm11), var_438_1)
                            var_298 = zmm1
                            uint128_t var_478_1 = arg5 ^ temp0_237
                            
                            if (_mm_movemask_ps(arg5 & not.o(zmm14)) == 0)
                                zmm7 = zmm10
                                zmm9 = var_528_1
                            else
                                zmm4 = temp0_202
                                zmm2 = (arg5 & not.o(zmm4)) | (arg5 & zmm10)
                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                arg6 = _mm_sub_epi32(zmm10, zmm3)
                                arg5 &= not.o(_mm_cmpgt_epi32(arg6, zmm4) ^ zmm3)
                                zmm3 = zmm14 & arg5
                                uint32_t j_2 = _mm_movemask_ps(zmm3)
                                
                                if (j_2 == 0)
                                    zmm7 = zmm2
                                    zmm9 = var_528_1
                                else
                                    zmm4 = zmm10
                                    
                                    do
                                        zmm0 = arg6
                                        int32_t temp0_261[0x4] = _mm_add_epi32(arg6, arg6)
                                        zmm7 = _mm_shuffle_epi32(temp0_261, 0x4e)
                                        int32_t temp0_263[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm7)
                                        int32_t temp0_266[0x4] = _mm_add_epi64(
                                            _mm_unpacklo_epi32(temp0_261, 
                                                _mm_cmpgt_epi32(zx.o(0), temp0_261)[0].q), 
                                            zmm12)
                                        char temp0_267 = _mm_movemask_ps(zmm3)
                                        float var_368[0x4]
                                        
                                        if ((temp0_267 & 1) != 0)
                                            zmm1 = var_368
                                            zmm1[0] = zx.o(*temp0_266[0].q)[0]
                                            var_368 = zmm1
                                        
                                        zmm7 = _mm_unpacklo_epi32(zmm7, temp0_263[0].q)
                                        zmm9 = var_528_1
                                        
                                        if ((temp0_267 & 2) != 0)
                                            zmm1 = var_368
                                            arg6 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(temp0_266, 0x4e)[0].q), 
                                                    zmm1, 0), 
                                                zmm1, 0xe2)
                                            arg7 = var_548_1
                                            zmm7 = _mm_add_epi64(zmm7, zmm15)
                                            
                                            if ((temp0_267 & 4) != 0)
                                                arg6 = _mm_shuffle_ps(arg6, 
                                                    _mm_shuffle_ps(zx.o(*zmm7[0].q), arg6, 0x30), 
                                                    0x84)
                                        else
                                            arg6 = var_368
                                            arg7 = var_548_1
                                            zmm7 = _mm_add_epi64(zmm7, zmm15)
                                            
                                            if ((temp0_267 & 4) != 0)
                                                arg6 = _mm_shuffle_ps(arg6, 
                                                    _mm_shuffle_ps(zx.o(*zmm7[0].q), arg6, 0x30), 
                                                    0x84)
                                        
                                        if ((temp0_267 & 8) != 0)
                                            arg6 = _mm_shuffle_ps(arg6, 
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm7, 0x4e)[0].q), 
                                                    arg6, 0x20), 
                                                0x24)
                                        
                                        var_368 = arg6
                                        arg6 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(arg6, zmm11), 
                                            var_438_1) & arg5
                                        zmm3 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(arg6 & zmm14) != j_2)
                                            zmm3 = arg6 ^ arg5
                                        
                                        zmm7 = (arg6 & not.o(zmm2)) | (zmm4 & arg6)
                                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                        arg6 = _mm_sub_epi32(zmm0, zmm1)
                                        arg5 = __pcmpgtd_xmmdq_memdq(arg6, temp0_202) & not.o(zmm3)
                                        zmm3 = arg5 & zmm14
                                        j_2 = _mm_movemask_ps(zmm3)
                                        zmm4 = zmm0
                                        zmm2 = zmm7
                                    while (j_2 != 0)
                            
                            zmm1 = var_478_1
                            zmm0 = _mm_andnot_ps(zmm1, zmm14)
                            uint32_t temp0_329 = _mm_movemask_ps(zmm0)
                            uint32_t j_3
                            
                            if (temp0_329 != 0)
                                zmm7 &= zmm1
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm1 ^= zmm0
                                zmm10 = _mm_add_epi32(zmm10, zmm0)
                                zmm3 = __pcmpgtd_xmmdq_memdq(zmm10, data_142d8f750) & zmm1
                                zmm0 = zmm3 & zmm14
                                j_3 = _mm_movemask_ps(zmm0)
                            
                            if (temp0_329 == 0 || j_3 == 0)
                                zmm4 = zmm7
                            else
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                
                                do
                                    zmm2 = _mm_add_epi32(zmm10, zmm10)
                                    zmm4 = _mm_shuffle_epi32(zmm2, 0x4e)
                                    arg5 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                    zmm2 = _mm_add_epi64(
                                        _mm_unpacklo_epi32(zmm2, 
                                            _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q), 
                                        zmm12)
                                    char temp0_343 = _mm_movemask_ps(zmm0)
                                    int32_t var_1f8[0x4]
                                    
                                    if ((temp0_343 & 1) != 0)
                                        arg6 = var_1f8
                                        arg6[0] = zx.d(*zmm2.q)
                                        zmm4 = _mm_unpacklo_epi32(zmm4, arg5[0].q)
                                        
                                        if ((temp0_343 & 2) != 0)
                                            arg6 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), arg6, 
                                                    0), 
                                                arg6, 0xe2)
                                    else
                                        arg6 = var_1f8
                                        zmm4 = _mm_unpacklo_epi32(zmm4, arg5[0].q)
                                        
                                        if ((temp0_343 & 2) != 0)
                                            arg6 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), arg6, 
                                                    0), 
                                                arg6, 0xe2)
                                    
                                    zmm4 = _mm_add_epi64(zmm4, zmm15)
                                    
                                    if ((temp0_343 & 4) != 0)
                                        arg6 = _mm_shuffle_ps(arg6, 
                                            _mm_shuffle_ps(zx.o(*zmm4[0].q), arg6, 0x30), 0x84)
                                        
                                        if ((temp0_343 & 8) != 0)
                                            arg6 = _mm_shuffle_ps(arg6, 
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), arg6, 
                                                    0x20), 
                                                0x24)
                                    else if ((temp0_343 & 8) != 0)
                                        arg6 = _mm_shuffle_ps(arg6, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                arg6, 0x20), 
                                            0x24)
                                    
                                    var_1f8 = arg6
                                    zmm2 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(arg6, zmm11), var_438_1)
                                        & not.o(zmm3)
                                    arg5 = zmm2 & zmm10
                                    arg6 = zx.o(0)
                                    
                                    if (_mm_movemask_ps(zmm2 & zmm14) != j_3)
                                        arg6 = zmm2 ^ zmm3
                                    
                                    zmm4 = (zmm2 & not.o(zmm7)) | arg5
                                    zmm10 = _mm_add_epi32(zmm10, zmm1)
                                    zmm3 = _mm_cmpgt_epi32(zmm10, zx.o(0)) & arg6
                                    zmm0 = zmm3 & zmm14
                                    j_3 = _mm_movemask_ps(zmm0)
                                    zmm7 = zmm4
                                while (j_3 != 0)
                            
                            zmm10 = (zmm4 & zmm14) | (zmm14 & not.o(var_518_1))
                            zmm0 = _mm_add_epi32(zmm10, zmm10)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                            zmm0 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                zmm12)
                            float var_328[0x4]
                            
                            if ((rbx_13 & 1) != 0)
                                var_328[0] = zx.o(*zmm0.q)[0]
                                zmm3 = var_328
                            else
                                zmm3 = var_328
                            
                            arg5 = _mm_cmpeq_epi32(arg5, arg5)
                            zmm7 = temp0_202
                            zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                            
                            if ((rbx_13 & 2) == 0)
                                zmm1 = _mm_add_epi64(zmm1, zmm15)
                                
                                if ((rbx_13 & 4) != 0)
                                    goto label_140266b87
                                
                                goto label_140266a97
                            
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                            zmm1 = _mm_add_epi64(zmm1, zmm15)
                            
                            if ((rbx_13 & 4) == 0)
                            label_140266a97:
                                zmm0 = zmm14 ^ arg5
                                
                                if ((rbx_13 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), 
                                            zmm3, 0x20), 
                                        0x24)
                            else
                            label_140266b87:
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*zmm1[0].q), zmm3, 0x30), 0x84)
                                zmm0 = zmm14 ^ arg5
                                
                                if ((rbx_13 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), 
                                            zmm3, 0x20), 
                                        0x24)
                            
                            zmm4 = (_mm_sub_epi32(zmm10, arg5) & zmm14) | (var_4e8_1 & zmm0)
                            zmm0 = _mm_cmpgt_epi32(zmm4, zmm7) & zmm14
                            var_328 = zmm3
                            
                            if (_mm_movemask_ps(zmm0) != 0)
                                zmm4 = (zmm7 & zmm0) | (zmm0 & not.o(zmm4))
                            
                            zmm11 = var_568
                            zmm2 = _mm_add_epi32(zmm4, zmm4)
                            zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            zmm2 = _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q)
                            zmm12 = _mm_add_epi64(zmm12, zmm2)
                            float var_278[0x4]
                            
                            if ((rbx_13 & 1) != 0)
                                zmm2 = zx.o(*zmm12[0].q)
                                zmm3 = var_278
                                zmm3[0] = zmm2.d
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                
                                if ((rbx_13 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            else
                                zmm3 = var_278
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                
                                if ((rbx_13 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            
                            zmm1 = data_143442cd0
                            zmm12 = var_498
                            int32_t temp0_391[0x4] = _mm_add_epi64(zmm15, zmm0)
                            
                            if ((rbx_13 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*temp0_391[0].q), zmm3, 0x30), 0x84)
                            
                            zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                            arg5 = var_558_1
                            
                            if ((rbx_13 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_391, 0x4e).q), 
                                        zmm3, 0x20), 
                                    0x24)
                            
                            arg6 = var_5b8_1
                            zmm0 = _mm_and_ps(var_328, zmm1)
                            var_278 = zmm3
                        
                        zmm3 = _mm_and_ps(zmm3, zmm1)
                        zmm15 = arg7
                        zmm7 = var_418_1 ^ zmm2
                        zmm1 = zx.o(0)
                        
                        if (arg11 != 1)
                            zmm3 = _mm_sub_epi32(zmm3, zmm0)
                            zmm1 = data_142d3f5b0
                            zmm2 = _mm_cmpgt_epi32(zmm3, zmm1)
                            zmm1 = _mm_div_ps(_mm_sub_ps(temp0_6, _mm_cvtepi32_ps(zmm0)), 
                                _mm_cvtepi32_ps((zmm2 & not.o(zmm1)) | (zmm3 & zmm2)))
                        
                        zmm1 = _mm_and_ps(zmm1, zmm7)
                        zmm0 = var_468_1
                
                var_468_1 = (arg8 & not.o(zmm0)) | _mm_and_ps(zmm1, arg8)
                arg8 = var_4f8_1
                arg7 = zmm9
                zmm14 = zmm15
                zmm15 = var_488_1
            
            zmm1 = _mm_unpacklo_epi32(zmm14, _mm_cmpgt_epi32(zx.o(0), zmm14).q)
            zmm7 = _mm_shuffle_epi32(zmm14, 0x4e)
            zmm7 = _mm_unpacklo_epi32(zmm7, _mm_cmpgt_epi32(zx.o(0), zmm7).q)
            zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(zmm10, zmm12), 0xe8)
            zmm3 = _mm_shuffle_epi32(zmm12, 0xf5)
            float var_188_1[0x4] = zmm3
            zmm2 = _mm_unpacklo_epi32(zmm2, 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm10, 0xf5), zmm3), 0xe8).q)
            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
            zmm3 = _mm_shuffle_epi32(zmm2, 0x4e)
            zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
            zmm3 = _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3).q)
            float var_458_2[0x4] = zmm3
            float var_418_2[0x4] = zmm7
            zmm0 = _mm_add_epi64(zmm3, zmm7)
            uint128_t var_4a8_1 = zmm2
            float var_448_3[0x4] = zmm1
            uint128_t var_2a8_1 = __paddq_xmmdq_memdq(_mm_add_epi64(zmm2, zmm1), var_588_1)
            zmm9 = arg7
            uint128_t var_3a8_1 = _mm_add_epi64(zmm0, arg7)
            zmm2 = __pcmpeqd_xmmdq_memdq(var_4c8, data_142d3f5b0)
            zmm3 = var_508_3 & not.o(zmm2)
            float var_4e8_2[0x4] = zmm4
            float var_518_2[0x4] = zmm10
            uint128_t var_568_1 = zmm2
            
            if (_mm_movemask_ps(zmm3) == 0)
                zmm7 = arg5
                arg7 = zmm14
                zmm14 = zmm11
                zmm11 = arg6
                arg6 = _mm_cmpeq_epi32(arg6, arg6)
                arg5 = var_538_1
            else
                int32_t temp0_496[0x4] = _mm_cmpeq_epi32(var_348_1, zx.o(0))
                zmm1 = _mm_srai_epi32(_mm_slli_epi32(temp0_496 & zmm3, 0x1f), 0x1f)
                char temp0_499 = _mm_movemask_ps(zmm1)
                
                if (temp0_499 == 0)
                    zmm7 = arg5
                    zmm14 = zmm11
                    zmm11 = arg6
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    arg5 = var_538_1
                else
                    zmm12 = arg6
                    zmm14 = zmm11
                    zmm2 = __paddq_xmmdq_memdq(var_4d8_1, var_418_2)
                    arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(temp0_158, var_448_3), var_4a8_1)
                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_458_2)
                    zmm4 = data_1434426c0
                    zmm0 = zmm4
                    zmm2 = _mm_add_epi64(zmm2, zmm4)
                    arg5 = _mm_add_epi64(arg5, zmm4)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                    arg5 &= zmm4
                    arg6 = _mm_shuffle_epi32(zmm1, 0xfa)
                    zmm2 &= arg6
                    int64_t rax_133 = _mm_shuffle_epi32(arg5, 0x4e)[0].q
                    void* rsi_5 = arg4 + rax_133
                    zmm1 = *(arg4 + rax_133)
                    int64_t rax_134 = zmm2.q
                    void* r10_1 = arg4 + rax_134
                    zmm10 = *(arg4 + rax_134)
                    int64_t rax_135 = _mm_shuffle_epi32(zmm2, 0x4e).q
                    void* r11_1 = arg4 + rax_135
                    uint128_t var_5b8_2 = *(arg4 + rax_135)
                    zmm2 = zmm4 & zmm0
                    zmm7 = arg6 & zmm0
                    void* rbx_16 = arg5[0].q + arg4
                    arg7 = *(zmm2.q + rbx_16)
                    zmm2 = *(_mm_shuffle_epi32(zmm2, 0x4e).q + rsi_5)
                    zmm9 = *(zmm7[0].q + r10_1)
                    zmm7 = *(_mm_shuffle_epi32(zmm7, 0x4e)[0].q + r11_1)
                    zmm0 = data_1434426e0
                    zmm4 &= zmm0
                    arg6 &= zmm0
                    zmm11 = *(zmm4[0].q + rbx_16)
                    arg5 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rsi_5)
                    zmm4 = *(arg6[0].q + r10_1)
                    zmm0 = *(_mm_shuffle_epi32(arg6, 0x4e)[0].q + r11_1)
                    bool cond:43_1
                    bool cond:44_1
                    
                    if ((temp0_499 & 1) == 0)
                        char temp17_1 = temp0_499 & 1
                        cond:43_1 = temp17_1 != 0
                        cond:44_1 = temp17_1 == 0
                        arg6 = var_538_1
                        
                        if (temp17_1 == 0)
                            goto label_140267775
                        
                        goto label_140267394
                    
                    zmm14[0] = (*rbx_16)[0]
                    char temp16_1 = temp0_499 & 1
                    cond:43_1 = temp16_1 != 0
                    cond:44_1 = temp16_1 == 0
                    arg6 = var_538_1
                    
                    if (temp16_1 == 0)
                    label_140267775:
                        
                        if (cond:44_1)
                            goto label_14026739f
                        
                        goto label_14026777b
                    
                label_140267394:
                    arg8[0] = arg7[0]
                    bool cond:58_1
                    bool cond:59_1
                    bool cond:67_1
                    bool cond:68_1
                    
                    if (not(cond:43_1))
                    label_14026739f:
                        zmm11 = zmm12
                        char temp27_1 = temp0_499 & 2
                        cond:58_1 = temp27_1 != 0
                        cond:59_1 = temp27_1 == 0
                        cond:67_1 = temp27_1 != 0
                        cond:68_1 = temp27_1 == 0
                        
                        if (temp27_1 == 0)
                            goto label_14026778d
                        
                        goto label_1402673b7
                    
                label_14026777b:
                    zmm12[0] = zmm11[0]
                    zmm11 = zmm12
                    char temp26_1 = temp0_499 & 2
                    cond:58_1 = temp26_1 != 0
                    cond:59_1 = temp26_1 == 0
                    cond:67_1 = temp26_1 != 0
                    cond:68_1 = temp26_1 == 0
                    
                    if (temp26_1 == 0)
                    label_14026778d:
                        
                        if (cond:59_1)
                            goto label_1402673c1
                        
                        goto label_14026779d
                    
                label_1402673b7:
                    zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm14, 0), zmm14, 0xe2)
                    
                    if (not(cond:58_1))
                    label_1402673c1:
                        
                        if (cond:68_1)
                            goto label_1402677a7
                        
                        goto label_1402673d1
                    
                label_14026779d:
                    arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg8, 0), arg8, 0xe2)
                    bool cond:108_1
                    bool cond:109_1
                    bool cond:122_1
                    bool cond:123_1
                    
                    if (not(cond:67_1))
                    label_1402677a7:
                        arg5 = arg6
                        char temp40_1 = temp0_499 & 4
                        cond:108_1 = temp40_1 != 0
                        cond:109_1 = temp40_1 == 0
                        cond:122_1 = temp40_1 != 0
                        cond:123_1 = temp40_1 == 0
                        
                        if (temp40_1 == 0)
                            goto label_1402673e2
                        
                        goto label_1402677b9
                    
                label_1402673d1:
                    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm11, 0), zmm11, 0xe2)
                    arg5 = arg6
                    char temp39_1 = temp0_499 & 4
                    cond:108_1 = temp39_1 != 0
                    cond:109_1 = temp39_1 == 0
                    cond:122_1 = temp39_1 != 0
                    cond:123_1 = temp39_1 == 0
                    
                    if (temp39_1 == 0)
                    label_1402673e2:
                        zmm10 = var_518_2
                        
                        if (cond:109_1)
                            goto label_1402677ce
                        
                        goto label_1402673f7
                    
                label_1402677b9:
                    zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zmm10, zmm14, 0x30), 0x84)
                    zmm10 = var_518_2
                    
                    if (not(cond:108_1))
                    label_1402677ce:
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        zmm9 = var_528_1
                        
                        if (cond:123_1)
                            goto label_140267410
                        
                        goto label_1402677e7
                    
                label_1402673f7:
                    arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm9, arg8, 0x30), 0x84)
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    zmm9 = var_528_1
                    bool cond:162_1
                    bool cond:163_1
                    bool cond:174_1
                    bool cond:175_1
                    
                    if (not(cond:122_1))
                    label_140267410:
                        char temp62_1 = temp0_499 & 8
                        cond:162_1 = temp62_1 != 0
                        cond:163_1 = temp62_1 == 0
                        cond:174_1 = temp62_1 != 0
                        cond:175_1 = temp62_1 == 0
                        
                        if (temp62_1 == 0)
                            goto label_1402677f5
                        
                        goto label_140267422
                    
                label_1402677e7:
                    zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm4, zmm11, 0x30), 0x84)
                    char temp61_1 = temp0_499 & 8
                    cond:162_1 = temp61_1 != 0
                    cond:163_1 = temp61_1 == 0
                    cond:174_1 = temp61_1 != 0
                    cond:175_1 = temp61_1 == 0
                    
                    if (temp61_1 == 0)
                    label_1402677f5:
                        
                        if (cond:163_1)
                            goto label_14026742d
                        
                        goto label_140267800
                    
                label_140267422:
                    zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(var_5b8_2, zmm14, 0x20), 0x24)
                    
                    if (cond:162_1)
                    label_140267800:
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm7, arg8, 0x20), 0x24)
                        zmm7 = var_558_1
                        
                        if (cond:174_1)
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm0, zmm11, 0x20), 0x24)
                    else
                    label_14026742d:
                        zmm7 = var_558_1
                        
                        if (not(cond:175_1))
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm0, zmm11, 0x20), 0x24)
                    
                    zmm12 = var_498
                
                zmm15 = temp0_496 & not.o(zmm3)
                zmm4 = _mm_slli_epi32(zmm15, 0x1f)
                char temp0_528 = _mm_movemask_ps(zmm4)
                
                if (temp0_528 == 0)
                    arg7 = var_548_1
                    zmm15 = var_488_1
                    zmm4 = var_4e8_2
                    zmm2 = var_568_1
                else
                    zmm10 = zmm14
                    zmm7 = arg5
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg5, 0x1f), 0x1f)
                    zmm4 = _mm_srai_epi32(zmm4, 0x1f) & zmm2
                    arg7 = var_2a8_1
                    zmm14 = arg7
                    zmm3 = var_3a8_1
                    zmm1 = zmm3
                    
                    if (_mm_movemask_ps(zmm4) != 0)
                        zmm9 = zmm12
                        zmm1 = data_1434426c0
                        zmm0 = zmm1
                        zmm12 = _mm_add_epi64(zmm3, zmm1)
                        zmm1 = _mm_add_epi64(arg7, zmm0)
                        arg5 = zmm4 ^ arg6
                        zmm14 = _mm_shuffle_epi32(arg5, 0x50)
                        zmm14 = (zmm14 & not.o(zmm1)) | (arg7 & zmm14)
                        zmm1 = _mm_shuffle_epi32(arg5, 0xfa)
                        zmm3 &= zmm1
                        zmm1 &= not.o(zmm12)
                        zmm12 = zmm9
                        zmm1 |= zmm3
                        zmm3 = __paddq_xmmdq_memdq(var_4d8_1, var_418_2)
                        arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(temp0_158, var_448_3), 
                            var_4a8_1)
                        zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm3, var_458_2), zmm0)
                        arg5 = _mm_add_epi64(arg5, zmm0)
                        arg6 = _mm_shuffle_epi32(zmm4, 0x50) & arg5
                        zmm4 = _mm_shuffle_epi32(zmm4, 0xfa) & zmm3
                        arg5 = zx.o(*(arg4 + arg6[0].q))
                        zmm3 = _mm_shuffle_epi32(arg6, 0x4e)
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        arg5 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(arg5, zx.o(*(arg4 + zmm3[0].q))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm4[0].q)), 
                                zx.o(*(arg4 + _mm_shuffle_epi32(zmm4, 0x4e)[0].q))[0].q)[0].q)
                    
                    zmm2 &= arg5
                    
                    if ((temp0_528 & 1) != 0)
                        zmm10[0] = zmm2.d
                        arg5 = zmm7
                        
                        if ((temp0_528 & 2) != 0)
                            goto label_140267626
                        
                        goto label_1402675f6
                    
                    arg5 = zmm7
                    
                    if ((temp0_528 & 2) != 0)
                    label_140267626:
                        zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm10, 1), zmm10, 0xe2)
                        
                        if ((temp0_528 & 4) != 0)
                            goto label_140267603
                        
                        goto label_14026762f
                    
                label_1402675f6:
                    
                    if ((temp0_528 & 4) == 0)
                    label_14026762f:
                        
                        if ((temp0_528 & 8) != 0)
                            zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x23), 0x24)
                    else
                    label_140267603:
                        zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x32), 0x84)
                        
                        if ((temp0_528 & 8) != 0)
                            zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x23), 0x24)
                    
                    zmm2 = data_1434422d0
                    arg5 &= zmm2
                    zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm2) & zmm15, 0x1f)
                    char temp0_559 = _mm_movemask_ps(zmm2)
                    uint128_t var_358
                    
                    if (temp0_559 == 0)
                        zmm2 = zmm1
                        zmm0 = var_358
                        arg5 = __pcmpeqd_xmmdq_memdq(arg5, data_142d8f750) & not.o(zmm0)
                        
                        if ((temp0_528 & 1) != 0)
                            arg8[0] = arg5[0]
                    else
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f) ^ arg6
                        
                        if ((temp0_559 & 1) != 0)
                            zmm0.d = (*zmm14[0].q)[0]
                            var_358 = zmm0
                        
                        zmm3 = data_1434426c0
                        zmm7 = _mm_add_epi64(zmm1, zmm3)
                        zmm3 = _mm_add_epi64(zmm14, zmm3)
                        arg6 = _mm_shuffle_epi32(zmm2, 0x50)
                        zmm4 = _mm_shuffle_epi32(zmm2, 0xfa)
                        
                        if ((temp0_559 & 2) != 0)
                            var_358 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, var_358, 0), 
                                var_358, 0xe2)
                        
                        zmm14 &= arg6
                        arg6 &= not.o(zmm3)
                        zmm2 = zmm1 & zmm4
                        zmm4 &= not.o(zmm7)
                        
                        if ((temp0_559 & 4) != 0)
                            zmm0 = _mm_shuffle_ps(var_358, 
                                _mm_shuffle_ps(*zmm1[0].q, var_358, 0x30), 0x84)
                            zmm7 = var_538_1
                            zmm14 |= arg6
                            zmm2 |= zmm4
                            
                            if ((temp0_559 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm0, 
                                        0x20), 
                                    0x24)
                        else
                            zmm7 = var_538_1
                            zmm0 = var_358
                            zmm14 |= arg6
                            zmm2 |= zmm4
                            
                            if ((temp0_559 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm0, 
                                        0x20), 
                                    0x24)
                        
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        arg5 = __pcmpeqd_xmmdq_memdq(arg5, data_142d8f750) & not.o(zmm0)
                        
                        if ((temp0_528 & 1) != 0)
                            arg8[0] = arg5[0]
                    
                    if ((temp0_528 & 2) != 0)
                        arg8 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, arg8, 1), arg8, 0xe2)
                        
                        if ((temp0_528 & 4) != 0)
                            goto label_140267af1
                        
                        goto label_1402678bc
                    
                    if ((temp0_528 & 4) == 0)
                    label_1402678bc:
                        var_358 = zmm0
                        
                        if ((temp0_528 & 8) != 0)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg5, arg8, 0x23), 0x24)
                    else
                    label_140267af1:
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg5, arg8, 0x32), 0x84)
                        var_358 = zmm0
                        
                        if ((temp0_528 & 8) != 0)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg5, arg8, 0x23), 0x24)
                    
                    arg5 = zmm7
                    zmm3 = data_142fc95e0
                    zmm1 = zmm7 & zmm3
                    char temp0_591 =
                        _mm_movemask_ps(_mm_slli_epi32(zmm15 & _mm_cmpeq_epi32(zmm1, zmm3), 0x1f))
                    float var_378[0x4]
                    
                    if (temp0_591 == 0)
                        arg7 = var_548_1
                        zmm15 = var_488_1
                        zmm4 = var_4e8_2
                        zmm7 = var_558_1
                        zmm9 = var_528_1
                        zmm2 = var_568_1
                        zmm14 = zmm10
                        zmm10 = var_518_2
                        zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(var_378)
                        
                        if ((temp0_528 & 1) != 0)
                            zmm11[0] = zmm1[0]
                    else
                        if ((temp0_591 & 1) != 0)
                            var_378[0] = (*zmm14[0].q).d
                        
                        if ((temp0_591 & 2) != 0)
                            var_378 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, var_378, 0), 
                                var_378, 0xe2)
                        
                        arg7 = var_548_1
                        zmm15 = var_488_1
                        zmm4 = var_4e8_2
                        zmm7 = var_558_1
                        zmm9 = var_528_1
                        zmm14 = zmm10
                        zmm10 = var_518_2
                        
                        if ((temp0_591 & 4) != 0)
                            var_378 = _mm_shuffle_ps(var_378, 
                                _mm_shuffle_ps(*zmm2.q, var_378, 0x30), 0x84)
                        
                        if ((temp0_591 & 8) != 0)
                            zmm0 = *_mm_shuffle_epi32(zmm2, 0x4e).q
                            zmm2 = var_378
                            var_378 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x20), 0x24)
                        
                        zmm2 = var_568_1
                        zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(var_378)
                        
                        if ((temp0_528 & 1) != 0)
                            zmm11[0] = zmm1[0]
                    
                    if ((temp0_528 & 2) != 0)
                        zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm11, 1), zmm11, 0xe2)
                        
                        if ((temp0_528 & 4) != 0)
                            goto label_140267b21
                        
                        goto label_140267a25
                    
                    if ((temp0_528 & 4) == 0)
                    label_140267a25:
                        
                        if ((temp0_528 & 8) != 0)
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x23), 0x24)
                    else
                    label_140267b21:
                        zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x32), 0x84)
                        
                        if ((temp0_528 & 8) != 0)
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x23), 0x24)
            
            zmm1 = zmm2 ^ arg6
            float var_478_2[0x4] = zmm1
            zmm0 = var_508_3 & not.o(zmm1)
            
            if (_mm_movemask_ps(zmm0) != 0)
                if (temp0_159 != 0)
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg5, 0x1f), 0x1f) & zmm7
                    zmm2 = zmm1 & zmm15
                    uint32_t temp0_608 = _mm_movemask_ps(zmm2)
                    zmm15 = zx.o(0)
                    int32_t var_5b8_3[0x4] = zmm11
                    float var_4f8_2[0x4] = arg8
                    float var_2b8[0x4]
                    
                    if (temp0_608 == 0)
                        zmm10 = var_588_1
                        arg7 = zmm9
                        arg8 = zx.o(0)
                        zmm3 = zx.o(0)
                        zmm12 = var_2b8
                    else
                        char rcx_24 = temp0_608.b
                        float var_2c8[0x4]
                        uint128_t var_218
                        
                        if ((rcx_24 & 1) != 0)
                            arg7 = var_588_1
                            zmm0.d = (*arg7[0].q)[0]
                            zmm7 = var_2c8
                            
                            if ((rcx_24 & 2) != 0)
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, zmm0, 0), 
                                    zmm0, 0xe2)
                        else
                            zmm7 = var_2c8
                            zmm0 = var_218
                            arg7 = var_588_1
                            
                            if ((rcx_24 & 2) != 0)
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, zmm0, 0), 
                                    zmm0, 0xe2)
                        
                        zmm12 = var_2b8
                        
                        if ((rcx_24 & 4) == 0)
                            if ((rcx_24 & 8) != 0)
                                goto label_140267c51
                            
                            goto label_140267c08
                        
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(*zmm9[0].q, zmm0, 0x30), 0x84)
                        char rbx_18
                        
                        if ((rcx_24 & 8) != 0)
                        label_140267c51:
                            zmm0 = _mm_shuffle_ps(zmm0, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q, zmm0, 0x20), 
                                0x24)
                            rbx_18 = _mm_movemask_ps(zmm1)
                            arg8 = zx.o(0)
                            
                            if ((rbx_18 & 1) != 0)
                                goto label_140267c14
                            
                            goto label_140267c61
                        
                    label_140267c08:
                        rbx_18 = _mm_movemask_ps(zmm1)
                        arg8 = zx.o(0)
                        
                        if ((rbx_18 & 1) == 0)
                        label_140267c61:
                            zmm2 ^= arg6
                            
                            if ((rbx_18 & 2) != 0)
                                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg8, 1), arg8, 0xe2)
                        else
                        label_140267c14:
                            arg8 = zx.o(0)
                            arg8[0] = zmm0.d
                            zmm2 ^= arg6
                            
                            if ((rbx_18 & 2) != 0)
                                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg8, 1), arg8, 0xe2)
                        
                        zmm4 = __paddq_xmmdq_memdq(arg7, data_1434426c0)
                        zmm1 = _mm_shuffle_epi32(zmm2, 0x50)
                        zmm11 = arg5
                        
                        if ((rbx_18 & 4) != 0)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm0, arg8, 0x32), 0x84)
                        
                        zmm3 = zmm1 & not.o(zmm4)
                        
                        if ((rbx_18 & 8) != 0)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm0, arg8, 0x23), 0x24)
                        
                        zmm4 = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                        zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                        arg5 = (arg7 & zmm1) | zmm3
                        
                        if ((rcx_24 & 1) != 0)
                            zmm7[0] = (*arg5[0].q)[0]
                        
                        zmm3 = zmm2 & not.o(zmm4)
                        arg6 = zmm9 & zmm2
                        
                        if ((rcx_24 & 2) != 0)
                            zmm7 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e)[0].q, zmm7, 0), zmm7, 
                                0xe2)
                            arg6 |= zmm3
                            
                            if ((rcx_24 & 4) != 0)
                            label_140267d64:
                                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(*arg6[0].q, zmm7, 0x30), 
                                    0x84)
                                
                                if ((rcx_24 & 8) == 0)
                                    goto label_140267d13
                                
                                goto label_140267d7f
                        else
                            arg6 |= zmm3
                            
                            if ((rcx_24 & 4) != 0)
                                goto label_140267d64
                        
                        if ((rcx_24 & 8) == 0)
                        label_140267d13:
                            zmm3 = zx.o(0)
                            
                            if ((rbx_18 & 1) == 0)
                                goto label_140267d8b
                            
                            goto label_140267d1c
                        
                    label_140267d7f:
                        zmm7 = _mm_shuffle_ps(zmm7, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg6, 0x4e)[0].q, zmm7, 0x20), 0x24)
                        zmm3 = zx.o(0)
                        
                        if ((rbx_18 & 1) != 0)
                        label_140267d1c:
                            zmm3 = zx.o(0)
                            zmm3[0] = zmm7[0]
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            
                            if ((rbx_18 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm3, 1), zmm3, 0xe2)
                        else
                        label_140267d8b:
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            
                            if ((rbx_18 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm3, 1), zmm3, 0xe2)
                        
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm4 = data_1434426c0
                        int32_t temp0_650[0x4] = _mm_add_epi64(arg6, zmm4)
                        arg5 = _mm_add_epi64(arg5, zmm4)
                        var_2c8 = zmm7
                        var_218 = zmm0
                        
                        if ((rbx_18 & 4) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm7, zmm3, 0x32), 0x84)
                        
                        zmm7 = var_558_1
                        zmm10 = arg7 & zmm1
                        zmm1 &= not.o(arg5)
                        
                        if ((rbx_18 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(var_2c8, zmm3, 0x23), 0x24)
                        
                        arg6 = _mm_cmpeq_epi32(temp0_650, temp0_650)
                        arg5 = zmm11
                        zmm10 |= zmm1
                        arg7 = (zmm9 & zmm2) | (zmm2 & not.o(temp0_650))
                    
                    zmm1 = data_1434422d0
                    zmm2 = _mm_cmpeq_epi32(arg5 & zmm1, zmm1) & zmm7
                    zmm1 = var_508_3 & not.o(zmm2)
                    char temp0_658 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_658 == 0)
                        zmm2 = arg5
                        arg5 = zx.o(0)
                    else
                        float var_3c8[0x4]
                        
                        if ((temp0_658 & 1) != 0)
                            zmm0 = *zmm10[0].q
                            var_3c8[0] = zmm0.d
                            
                            if ((temp0_658 & 2) != 0)
                            label_14026800e:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e).q, var_3c8, 0), 
                                    var_3c8, 0xe2)
                                var_3c8 = zmm0
                                
                                if ((temp0_658 & 4) == 0)
                                    goto label_140267e7a
                                
                                goto label_140268034
                        else if ((temp0_658 & 2) != 0)
                            goto label_14026800e
                        
                        if ((temp0_658 & 4) != 0)
                        label_140268034:
                            zmm0 = _mm_shuffle_ps(*arg7[0].q, var_3c8, 0x30)
                            var_3c8 = _mm_shuffle_ps(var_3c8, zmm0, 0x84)
                            zmm1 ^= arg6
                            
                            if ((temp0_658 & 8) != 0)
                                zmm0 =
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, var_3c8, 0x20)
                                var_3c8 = _mm_shuffle_ps(var_3c8, zmm0, 0x24)
                        else
                        label_140267e7a:
                            zmm1 ^= arg6
                            
                            if ((temp0_658 & 8) != 0)
                                zmm0 =
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, var_3c8, 0x20)
                                var_3c8 = _mm_shuffle_ps(var_3c8, zmm0, 0x24)
                        
                        zmm7 = _mm_shuffle_epi32(zmm1, 0x50)
                        char temp0_663 = _mm_movemask_ps(zmm2)
                        zmm15 = zx.o(0)
                        
                        if ((temp0_663 & 1) != 0)
                            zmm15 = zx.o(0)
                            zmm15[0] = var_3c8.d
                        
                        zmm7 = _mm_slli_epi32(zmm7, 0x1f)
                        
                        if ((temp0_663 & 2) != 0)
                            zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(var_3c8, zmm15, 1), zmm15, 0xe2)
                        
                        zmm2 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm4 = __paddq_xmmdq_memdq(zmm10, data_1434426c0)
                        zmm7 = _mm_srai_epi32(zmm7, 0x1f)
                        
                        if ((temp0_663 & 4) != 0)
                            zmm15 =
                                _mm_shuffle_ps(zmm15, _mm_shuffle_ps(var_3c8, zmm15, 0x32), 0x84)
                        
                        zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                        zmm10 &= zmm7
                        
                        if ((temp0_663 & 8) != 0)
                            zmm15 =
                                _mm_shuffle_ps(zmm15, _mm_shuffle_ps(var_3c8, zmm15, 0x23), 0x24)
                        
                        arg5 = __paddq_xmmdq_memdq(arg7, data_1434426c0)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                        zmm1 = (zmm7 & not.o(zmm4)) | zmm10
                        
                        if ((temp0_658 & 1) != 0)
                            zmm12[0] = (*zmm1[0].q)[0]
                        
                        zmm4 = zmm2 & not.o(arg5)
                        arg7 &= zmm2
                        
                        if ((temp0_658 & 2) != 0)
                            zmm12 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm12, 0), 
                                zmm12, 0xe2)
                            zmm4 |= arg7
                            
                            if ((temp0_658 & 4) != 0)
                            label_14026808e:
                                zmm12 = _mm_shuffle_ps(zmm12, 
                                    _mm_shuffle_ps(*zmm4[0].q, zmm12, 0x30), 0x84)
                                
                                if ((temp0_658 & 8) == 0)
                                    goto label_140267f9c
                                
                                goto label_1402680af
                        else
                            zmm4 |= arg7
                            
                            if ((temp0_658 & 4) != 0)
                                goto label_14026808e
                        
                        if ((temp0_658 & 8) == 0)
                        label_140267f9c:
                            arg5 = zx.o(0)
                            
                            if ((temp0_663 & 1) == 0)
                                goto label_1402680c0
                            
                            goto label_140267fa9
                        
                    label_1402680af:
                        zmm12 = _mm_shuffle_ps(zmm12, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q, zmm12, 0x20), 0x24)
                        arg5 = zx.o(0)
                        
                        if ((temp0_663 & 1) != 0)
                        label_140267fa9:
                            arg5 = zx.o(0)
                            arg5[0] = zmm12[0]
                            
                            if ((temp0_663 & 2) != 0)
                                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg5, 1), arg5, 0xe2)
                        else
                        label_1402680c0:
                            
                            if ((temp0_663 & 2) != 0)
                                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg5, 1), arg5, 0xe2)
                        
                        arg6 = data_1434426c0
                        zmm4 = _mm_add_epi64(zmm4, arg6)
                        zmm1 = _mm_add_epi64(zmm1, arg6)
                        
                        if ((temp0_663 & 4) != 0)
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm12, arg5, 0x32), 0x84)
                        
                        if ((temp0_663 & 8) != 0)
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm12, arg5, 0x23), 0x24)
                        
                        zmm10 |= zmm7 & not.o(zmm1)
                        arg7 |= zmm2 & not.o(zmm4)
                        zmm2 = var_538_1
                        zmm7 = var_558_1
                    
                    zmm9 = zmm2
                    zmm1 = data_142fc95e0
                    zmm2 = _mm_cmpeq_epi32(zmm2 & zmm1, zmm1) & zmm7
                    zmm1 = var_508_3 & not.o(zmm2)
                    char temp0_699 = _mm_movemask_ps(zmm1)
                    var_2b8 = zmm12
                    
                    if (temp0_699 == 0)
                        zmm12 = zx.o(0)
                        zmm1 = zx.o(0)
                        arg7 = var_548_1
                        zmm10 = var_518_2
                    else
                        int32_t var_3b8[0x4]
                        
                        if ((temp0_699 & 1) != 0)
                            var_3b8[0] = (*zmm10[0].q)[0]
                            
                            if ((temp0_699 & 2) != 0)
                            label_1402682e9:
                                var_3b8 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e)[0].q, var_3b8, 
                                        0), 
                                    var_3b8, 0xe2)
                                
                                if ((temp0_699 & 4) == 0)
                                    goto label_140268183
                                
                                goto label_140268313
                        else if ((temp0_699 & 2) != 0)
                            goto label_1402682e9
                        
                        if ((temp0_699 & 4) != 0)
                        label_140268313:
                            var_3b8 = _mm_shuffle_ps(var_3b8, 
                                _mm_shuffle_ps(*arg7[0].q, var_3b8, 0x30), 0x84)
                            zmm1 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((temp0_699 & 8) != 0)
                                var_3b8 = _mm_shuffle_ps(var_3b8, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, var_3b8, 
                                        0x20), 
                                    0x24)
                        else
                        label_140268183:
                            zmm1 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((temp0_699 & 8) != 0)
                                var_3b8 = _mm_shuffle_ps(var_3b8, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, var_3b8, 
                                        0x20), 
                                    0x24)
                        
                        zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                        char temp0_705 = _mm_movemask_ps(zmm2)
                        zmm12 = zx.o(0)
                        
                        if ((temp0_705 & 1) != 0)
                            zmm12 = zx.o(0)
                            zmm12[0] = var_3b8.d
                        
                        zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                        
                        if ((temp0_705 & 2) != 0)
                            zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(var_3b8, zmm12, 1), zmm12, 0xe2)
                        
                        zmm1 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm2 = __paddq_xmmdq_memdq(zmm10, data_1434426c0)
                        zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                        
                        if ((temp0_705 & 4) != 0)
                            zmm12 =
                                _mm_shuffle_ps(zmm12, _mm_shuffle_ps(var_3b8, zmm12, 0x32), 0x84)
                        
                        zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                        zmm10 &= zmm4
                        zmm4 &= not.o(zmm2)
                        
                        if ((temp0_705 & 8) != 0)
                            zmm12 =
                                _mm_shuffle_ps(zmm12, _mm_shuffle_ps(var_3b8, zmm12, 0x23), 0x24)
                        
                        zmm2 = __paddq_xmmdq_memdq(arg7, data_1434426c0)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm10 |= zmm4
                        float var_208[0x4]
                        
                        if ((temp0_699 & 1) != 0)
                            arg6 = var_208
                            arg6[0] = (*zmm10[0].q)[0]
                            zmm4 = arg6
                            arg7 &= zmm1
                            zmm1 &= not.o(zmm2)
                            
                            if ((temp0_699 & 2) != 0)
                                zmm4 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e).q, zmm4, 0), 
                                    zmm4, 0xe2)
                        else
                            zmm4 = var_208
                            arg7 &= zmm1
                            zmm1 &= not.o(zmm2)
                            
                            if ((temp0_699 & 2) != 0)
                                zmm4 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e).q, zmm4, 0), 
                                    zmm4, 0xe2)
                        
                        zmm10 = var_518_2
                        arg7 |= zmm1
                        
                        if ((temp0_699 & 4) == 0)
                            if ((temp0_699 & 8) != 0)
                                goto label_1402683ef
                            
                            goto label_14026838a
                        
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(*arg7[0].q, zmm4, 0x30), 0x84)
                        
                        if ((temp0_699 & 8) != 0)
                        label_1402683ef:
                            zmm4 = _mm_shuffle_ps(zmm4, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, zmm4, 0x20), 
                                0x24)
                            arg7 = var_548_1
                            zmm1 = zx.o(0)
                            
                            if ((temp0_705 & 1) != 0)
                                goto label_14026839a
                            
                            goto label_140268402
                        
                    label_14026838a:
                        arg7 = var_548_1
                        zmm1 = zx.o(0)
                        
                        if ((temp0_705 & 1) == 0)
                        label_140268402:
                            
                            if ((temp0_705 & 2) != 0)
                            label_140268412:
                                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 1), zmm1, 0xe2)
                                
                                if ((temp0_705 & 4) != 0)
                                    goto label_1402683b3
                                
                                goto label_14026841d
                        else
                        label_14026839a:
                            zmm1 = zx.o(0)
                            zmm1[0] = zmm4[0]
                            
                            if ((temp0_705 & 2) != 0)
                                goto label_140268412
                        
                        if ((temp0_705 & 4) == 0)
                        label_14026841d:
                            var_208 = zmm4
                            
                            if ((temp0_705 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x23), 0x24)
                        else
                        label_1402683b3:
                            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x32), 0x84)
                            var_208 = zmm4
                            
                            if ((temp0_705 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x23), 0x24)
                    
                    zmm2 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(temp0_158, var_448_3), var_4a8_1)
                    zmm4 = data_1434426c0
                    arg6 = zmm4
                    zmm2 = _mm_add_epi64(zmm2, zmm4)
                    zmm4 = _mm_shuffle_epi32(var_198_1, 0x50) & zmm2
                    zmm2 = _mm_add_epi64(
                        __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8_1, var_418_2), var_458_2), 
                        arg6)
                    arg6 = _mm_shuffle_epi32(var_198_1, 0xfa) & zmm2
                    int64_t rax_187 = zmm4[0].q
                    int64_t rcx_27 = _mm_shuffle_epi32(zmm4, 0x4e).q
                    int64_t rbx_21 = arg6[0].q
                    int64_t rsi_6 = _mm_shuffle_epi32(arg6, 0x4e).q
                    zmm2 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rax_187)), zx.o(*(arg4 + rcx_27))[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rbx_21)), zx.o(*(arg4 + rsi_6))[0].q)[0].q)
                    zmm4 = zmm2
                    float temp0_756[0x4] = _mm_add_ps(arg8, 
                        _mm_mul_ps(zmm3, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    arg6 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                    zmm2 = data_143442440
                    zmm3 = zmm2
                    zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(arg6, zmm2))
                    arg6 = data_143442690
                    float temp0_761[0x4] = _mm_mul_ps(arg5, _mm_div_ps(zmm2, arg6))
                    zmm2 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm4, 0x15), zmm3)), arg6)
                    char temp51_1 = temp0_159 & 1
                    
                    if (temp51_1 != 0)
                        zmm14[0] = temp0_756[0]
                    
                    float temp0_766[0x4] = _mm_mul_ps(zmm1, zmm2)
                    zmm15 = _mm_add_ps(zmm15, temp0_761)
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    zmm4 = var_4e8_2
                    
                    if (temp51_1 != 0)
                        zmm0.d = zmm15[0]
                        var_4f8_2 = zmm0
                        arg5 = zmm9
                        zmm12 = _mm_add_ps(zmm12, temp0_766)
                        zmm9 = var_528_1
                        
                        if (temp51_1 != 0)
                            goto label_1402688ad
                        
                        goto label_140268594
                    
                    arg5 = zmm9
                    zmm12 = _mm_add_ps(zmm12, temp0_766)
                    zmm9 = var_528_1
                    bool cond:198_1
                    bool cond:199_1
                    bool cond:221_1
                    bool cond:222_1
                    
                    if (temp51_1 != 0)
                    label_1402688ad:
                        zmm0.d = zmm12[0]
                        var_5b8_3 = zmm0
                        char temp74_1 = temp0_159 & 2
                        cond:198_1 = temp74_1 == 0
                        cond:199_1 = temp74_1 != 0
                        cond:221_1 = temp74_1 == 0
                        cond:222_1 = temp74_1 != 0
                        
                        if (temp74_1 != 0)
                            goto label_1402685ab
                        
                        goto label_1402688bf
                    
                label_140268594:
                    char temp73_1 = temp0_159 & 2
                    cond:198_1 = temp73_1 == 0
                    cond:199_1 = temp73_1 != 0
                    cond:221_1 = temp73_1 == 0
                    cond:222_1 = temp73_1 != 0
                    
                    if (temp73_1 == 0)
                    label_1402688bf:
                        
                        if (not(cond:198_1))
                        label_1402688c9:
                            zmm11 = var_4f8_2
                            var_4f8_2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm11, 1), zmm11, 0xe2)
                            
                            if (cond:222_1)
                                goto label_1402685bf
                            
                            goto label_1402688ea
                    else
                    label_1402685ab:
                        zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_756, zmm14, 1), zmm14, 0xe2)
                        
                        if (cond:199_1)
                            goto label_1402688c9
                    
                    bool cond:265_1
                    bool cond:266_1
                    bool cond:288_1
                    bool cond:289_1
                    
                    if (not(cond:221_1))
                    label_1402685bf:
                        zmm0 = var_5b8_3
                        var_5b8_3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm0, 1), zmm0, 0xe2)
                        char temp100_1 = temp0_159 & 4
                        cond:265_1 = temp100_1 == 0
                        cond:266_1 = temp100_1 != 0
                        cond:288_1 = temp100_1 == 0
                        cond:289_1 = temp100_1 != 0
                        
                        if (temp100_1 != 0)
                            goto label_1402688fc
                        
                        goto label_1402685d8
                    
                label_1402688ea:
                    char temp99_1 = temp0_159 & 4
                    cond:265_1 = temp99_1 == 0
                    cond:266_1 = temp99_1 != 0
                    cond:288_1 = temp99_1 == 0
                    cond:289_1 = temp99_1 != 0
                    
                    if (temp99_1 == 0)
                    label_1402685d8:
                        
                        if (not(cond:265_1))
                        label_1402685e2:
                            zmm0 = var_4f8_2
                            var_4f8_2 =
                                _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm15, zmm0, 0x32), 0x84)
                            
                            if (cond:289_1)
                                goto label_140268911
                            
                            goto label_140268600
                    else
                    label_1402688fc:
                        zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(temp0_756, zmm14, 0x32), 0x84)
                        
                        if (cond:266_1)
                            goto label_1402685e2
                    
                    bool cond:318_1
                    bool cond:319_1
                    bool cond:331_1
                    bool cond:332_1
                    
                    if (not(cond:288_1))
                    label_140268911:
                        zmm0 = var_5b8_3
                        var_5b8_3 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm12, zmm0, 0x32), 0x84)
                        char temp119_1 = temp0_159 & 8
                        cond:318_1 = temp119_1 == 0
                        cond:319_1 = temp119_1 != 0
                        cond:331_1 = temp119_1 == 0
                        cond:332_1 = temp119_1 != 0
                        
                        if (temp119_1 != 0)
                            goto label_14026860e
                        
                        goto label_14026892a
                    
                label_140268600:
                    char temp118_1 = temp0_159 & 8
                    cond:318_1 = temp118_1 == 0
                    cond:319_1 = temp118_1 != 0
                    cond:331_1 = temp118_1 == 0
                    cond:332_1 = temp118_1 != 0
                    
                    if (temp118_1 != 0)
                    label_14026860e:
                        zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(temp0_756, zmm14, 0x23), 0x24)
                        arg8 = var_4f8_2
                        zmm11 = var_5b8_3
                        
                        if (cond:319_1)
                            goto label_140268943
                        
                        goto label_140268627
                    
                label_14026892a:
                    arg8 = var_4f8_2
                    zmm11 = var_5b8_3
                    
                    if (cond:318_1)
                    label_140268627:
                        zmm15 = var_488_1
                        
                        if (not(cond:331_1))
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm12, zmm11, 0x23), 0x24)
                    else
                    label_140268943:
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm15, arg8, 0x23), 0x24)
                        zmm15 = var_488_1
                        
                        if (cond:332_1)
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm12, zmm11, 0x23), 0x24)
                    
                    zmm12 = var_498
                
                zmm0 = zmm7 ^ var_478_2
                zmm2 = var_508_3
                
                if (_mm_movemask_ps(zmm2 & not.o(zmm0)) == 0)
                    zmm2 = var_568_1
                else
                    int32_t var_5b8_4[0x4] = zmm11
                    int32_t temp0_781[0x4] = __pcmpeqd_xmmdq_memdq(var_4c8, data_1434422d0)
                    zmm11 = zmm2 & not.o(temp0_781)
                    char temp0_782 = _mm_movemask_ps(zmm11)
                    
                    if (temp0_782 == 0)
                        zmm11 = var_5b8_4
                        zmm15 = var_488_1
                    else
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg5, 0x1f), 0x1f)
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(zmm11, 0x1f), 0x1f) & zmm1
                        zmm10 = zmm14
                        char rbx_23
                        
                        if (_mm_movemask_ps(zmm2) == 0)
                            zmm14 = var_2a8_1
                            zmm1 &= zmm2
                            rbx_23 = temp0_782
                            
                            if ((rbx_23 & 1) != 0)
                                zmm10[0] = zmm1[0]
                        else
                            zmm14 = var_2a8_1
                            zmm3 = data_1434426b0
                            zmm4 = _mm_add_epi64(zmm14, zmm3)
                            arg6 = zmm2 ^ _mm_cmpeq_epi32(arg5, arg5)
                            zmm7 = _mm_shuffle_epi32(arg6, 0x50)
                            zmm14 = (zmm14 & zmm7) | (zmm7 & not.o(zmm4))
                            arg5 = var_3a8_1
                            zmm4 = _mm_add_epi64(arg5, zmm3)
                            arg6 = _mm_shuffle_epi32(arg6, 0xfa)
                            var_3a8_1 = (arg5 & arg6) | (arg6 & not.o(zmm4))
                            zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(temp0_158, var_448_3), 
                                var_4a8_1)
                            int32_t temp0_796[0x4] = __paddq_xmmdq_memdq(
                                __paddq_xmmdq_memdq(var_4d8_1, var_418_2), var_458_2)
                            zmm3 = data_1434426c0
                            zmm4 = _mm_add_epi64(zmm4, zmm3)
                            zmm7 = _mm_shuffle_epi32(zmm2, 0x50) & zmm4
                            arg6 = _mm_add_epi64(temp0_796, zmm3)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa) & arg6
                            int64_t rax_190 = zmm7[0].q
                            int64_t rbp_11 = _mm_shuffle_epi32(zmm7, 0x4e)[0].q
                            int64_t rsi_7 = _mm_shuffle_epi32(zmm2, 0x4e).q
                            zmm1 &= _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + rax_190), 
                                                0), 
                                            *(arg4 + rbp_11), 2), 
                                        *(arg4 + zmm2.q), 4), 
                                    *(arg4 + rsi_7), 6), 
                                data_143442b40))
                            rbx_23 = temp0_782
                            
                            if ((rbx_23 & 1) != 0)
                                zmm10[0] = zmm1[0]
                        
                        zmm4 = var_538_1
                        zmm7 = var_558_1
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        
                        if ((rbx_23 & 2) != 0)
                            zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm10, 1), zmm10, 0xe2)
                            
                            if ((rbx_23 & 4) != 0)
                                goto label_14026896e
                            
                            goto label_14026881c
                        
                        if ((rbx_23 & 4) == 0)
                        label_14026881c:
                            
                            if ((rbx_23 & 8) != 0)
                                zmm10 =
                                    _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm1, zmm10, 0x23), 0x24)
                        else
                        label_14026896e:
                            zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm1, zmm10, 0x32), 0x84)
                            
                            if ((rbx_23 & 8) != 0)
                                zmm10 =
                                    _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm1, zmm10, 0x23), 0x24)
                        
                        zmm2 = data_1434422d0
                        zmm1 = zmm4 & zmm2
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm2) & zmm11, 0x1f)
                        char temp0_816 = _mm_movemask_ps(zmm2)
                        float var_2f8[0x4]
                        
                        if (temp0_816 == 0)
                            zmm3 = zmm4
                            arg5 = var_2f8
                        else
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            
                            if ((temp0_816 & 1) != 0)
                                arg5 = var_2f8
                                arg5[0] = zx.o(*zmm14[0].q)[0]
                                zmm2 ^= arg6
                                
                                if ((temp0_816 & 2) != 0)
                                    arg5 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q), 
                                            arg5, 0), 
                                        arg5, 0xe2)
                            else
                                arg5 = var_2f8
                                zmm2 ^= arg6
                                
                                if ((temp0_816 & 2) != 0)
                                    arg5 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q), 
                                            arg5, 0), 
                                        arg5, 0xe2)
                            
                            zmm15 = var_3a8_1
                            zmm3 = data_1434426b0
                            zmm7 = _mm_add_epi64(zmm15, zmm3)
                            int32_t temp0_833[0x4] = _mm_add_epi64(zmm14, zmm3)
                            zmm4 = _mm_shuffle_epi32(zmm2, 0x50)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                            
                            if ((temp0_816 & 4) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*zmm15[0].q), arg5, 0x30), 0x84)
                            
                            arg6 = zmm15 & zmm2
                            zmm2 &= not.o(zmm7)
                            
                            if ((temp0_816 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm15, 0x4e)[0].q), 
                                        arg5, 0x20), 
                                    0x24)
                            
                            zmm3 = var_538_1
                            zmm7 = var_558_1
                            zmm14 = (zmm14 & zmm4) | (zmm4 & not.o(temp0_833))
                            arg6 |= zmm2
                            zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(arg5, data_143442cd0), data_143442b40))
                            var_3a8_1 = arg6
                            arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        
                        zmm4 = var_4e8_2
                        zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(zmm2)
                        
                        if ((rbx_23 & 1) != 0)
                            arg8[0] = zmm1[0]
                            
                            if ((rbx_23 & 2) != 0)
                                goto label_140268b10
                        else if ((rbx_23 & 2) != 0)
                        label_140268b10:
                            arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg8, 1), arg8, 0xe2)
                            
                            if ((rbx_23 & 4) != 0)
                                goto label_140268aea
                            
                            goto label_140268b1c
                        
                        if ((rbx_23 & 4) == 0)
                        label_140268b1c:
                            var_2f8 = arg5
                            
                            if ((rbx_23 & 8) != 0)
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm1, arg8, 0x23), 0x24)
                        else
                        label_140268aea:
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm1, arg8, 0x32), 0x84)
                            var_2f8 = arg5
                            
                            if ((rbx_23 & 8) != 0)
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm1, arg8, 0x23), 0x24)
                        
                        arg5 = zmm3
                        zmm2 = data_142fc95e0
                        zmm1 = zmm3 & zmm2
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm2) & zmm11, 0x1f)
                        char temp0_854 = _mm_movemask_ps(zmm2)
                        
                        if (temp0_854 == 0)
                            zmm11 = var_5b8_4
                            zmm15 = var_488_1
                            zmm14 = zmm10
                            zmm10 = var_518_2
                            zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(zmm2)
                            
                            if ((rbx_23 & 1) != 0)
                                zmm11[0] = zmm1[0]
                        else
                            uint128_t var_238
                            
                            if ((temp0_854 & 1) != 0)
                                zmm3 = var_238
                                zmm3[0] = zx.d(*zmm14[0].q)
                                zmm2 = zmm3
                                
                                if ((temp0_854 & 2) != 0)
                                    zmm3 = zmm2
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            else
                                zmm2 = var_238
                                
                                if ((temp0_854 & 2) != 0)
                                    zmm3 = zmm2
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            
                            zmm11 = var_5b8_4
                            zmm15 = var_488_1
                            zmm14 = zmm10
                            zmm10 = var_518_2
                            
                            if ((temp0_854 & 4) != 0)
                                zmm3 = zmm2
                                zmm2 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*var_3a8_1[0].q), zmm3, 0x30), 0x84)
                            
                            if ((temp0_854 & 8) != 0)
                                zmm3 = zmm2
                                zmm2 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(
                                        zx.o(*__pshufd_xmmdq_memdq_immb(var_3a8_1, 0x4e).q), zmm3, 
                                        0x20), 
                                    0x24)
                            
                            var_238 = zmm2
                            zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm2, data_143442cd0), data_143442b40))
                            zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(zmm2)
                            
                            if ((rbx_23 & 1) != 0)
                                zmm11[0] = zmm1[0]
                        
                        if ((rbx_23 & 2) != 0)
                            zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm11, 1), zmm11, 0xe2)
                            
                            if ((rbx_23 & 4) != 0)
                                goto label_140268db9
                            
                            goto label_140268cad
                        
                        if ((rbx_23 & 4) == 0)
                        label_140268cad:
                            
                            if ((rbx_23 & 8) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x23), 0x24)
                        else
                        label_140268db9:
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x32), 0x84)
                            
                            if ((rbx_23 & 8) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x23), 0x24)
                    
                    zmm2 = var_508_3
                    zmm1 = zmm2 & not.o(zmm0 ^ temp0_781)
                    
                    if (_mm_movemask_ps(zmm1) == 0)
                        arg7 = var_548_1
                        zmm2 = var_568_1
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(var_4c8, data_143442ad0)
                        char temp0_874 = _mm_movemask_ps(zmm2 & not.o(zmm0))
                        
                        if (temp0_874 == 0)
                            arg7 = var_548_1
                        else
                            char temp45_1 = temp0_874 & 1
                            
                            if (temp45_1 == 0)
                                arg7 = var_548_1
                                
                                if (temp45_1 != 0)
                                label_140268ddc:
                                    arg8[0] = 0
                                    
                                    if (temp45_1 != 0)
                                        goto label_140268d27
                                    
                                    goto label_140268de7
                            else
                                zmm14[0] = 0
                                arg7 = var_548_1
                                
                                if (temp45_1 != 0)
                                    goto label_140268ddc
                            
                            bool cond:172_1
                            bool cond:173_1
                            bool cond:196_1
                            bool cond:197_1
                            
                            if (temp45_1 != 0)
                            label_140268d27:
                                zmm11[0] = 0
                                char temp68_1 = temp0_874 & 2
                                cond:172_1 = temp68_1 == 0
                                cond:173_1 = temp68_1 != 0
                                cond:196_1 = temp68_1 == 0
                                cond:197_1 = temp68_1 != 0
                                
                                if (temp68_1 != 0)
                                    goto label_140268dfd
                                
                                goto label_140268d35
                            
                        label_140268de7:
                            char temp67_1 = temp0_874 & 2
                            cond:172_1 = temp67_1 == 0
                            cond:173_1 = temp67_1 != 0
                            cond:196_1 = temp67_1 == 0
                            cond:197_1 = temp67_1 != 0
                            
                            if (temp67_1 == 0)
                            label_140268d35:
                                
                                if (not(cond:172_1))
                                label_140268d48:
                                    arg8 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                                    
                                    if (cond:197_1)
                                        goto label_140268e1a
                                    
                                    goto label_140268d52
                            else
                            label_140268dfd:
                                zmm14 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm14, 0), zmm14, 0xe2)
                                
                                if (cond:173_1)
                                    goto label_140268d48
                            
                            bool cond:238_1
                            bool cond:239_1
                            bool cond:263_1
                            bool cond:264_1
                            
                            if (not(cond:196_1))
                            label_140268e1a:
                                zmm11 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm11, 0), zmm11, 0xe2)
                                char temp93_1 = temp0_874 & 4
                                cond:238_1 = temp93_1 == 0
                                cond:239_1 = temp93_1 != 0
                                cond:263_1 = temp93_1 == 0
                                cond:264_1 = temp93_1 != 0
                                
                                if (temp93_1 != 0)
                                    goto label_140268d63
                                
                                goto label_140268e27
                            
                        label_140268d52:
                            char temp92_1 = temp0_874 & 4
                            cond:238_1 = temp92_1 == 0
                            cond:239_1 = temp92_1 != 0
                            cond:263_1 = temp92_1 == 0
                            cond:264_1 = temp92_1 != 0
                            
                            if (temp92_1 == 0)
                            label_140268e27:
                                
                                if (not(cond:238_1))
                                label_140268e35:
                                    arg8 = _mm_shuffle_ps(arg8, 
                                        _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                                    
                                    if (cond:264_1)
                                        goto label_140268d7c
                                    
                                    goto label_140268e40
                            else
                            label_140268d63:
                                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x30), 
                                    0x84)
                                
                                if (cond:239_1)
                                    goto label_140268e35
                            
                            bool cond:302_1
                            bool cond:303_1
                            bool cond:316_1
                            bool cond:317_1
                            
                            if (not(cond:263_1))
                            label_140268d7c:
                                zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zx.o(0), zmm11, 0x30), 
                                    0x84)
                                char temp113_1 = temp0_874 & 8
                                cond:302_1 = temp113_1 == 0
                                cond:303_1 = temp113_1 != 0
                                cond:316_1 = temp113_1 == 0
                                cond:317_1 = temp113_1 == 0
                                
                                if (temp113_1 != 0)
                                    goto label_140268e51
                                
                                goto label_140268d8a
                            
                        label_140268e40:
                            char temp112_1 = temp0_874 & 8
                            cond:302_1 = temp112_1 == 0
                            cond:303_1 = temp112_1 != 0
                            cond:316_1 = temp112_1 == 0
                            cond:317_1 = temp112_1 == 0
                            
                            if (temp112_1 != 0)
                            label_140268e51:
                                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x20), 
                                    0x24)
                                
                                if (cond:303_1)
                                    goto label_140268d98
                                
                                goto label_140268e5c
                            
                        label_140268d8a:
                            
                            if (cond:302_1)
                            label_140268e5c:
                                
                                if (not(cond:316_1))
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                            else
                            label_140268d98:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                                
                                if (not(cond:317_1))
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                        
                        zmm2 = var_568_1
                        char temp0_1005 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm1), 0x1f))
                        
                        if (temp0_1005 != 0)
                            char temp60_1 = temp0_1005 & 1
                            
                            if (temp60_1 != 0)
                                zmm14[0] = 0
                                
                                if (temp60_1 != 0)
                                    goto label_140269738
                            else if (temp60_1 != 0)
                            label_140269738:
                                arg8[0] = 0
                                
                                if (temp60_1 != 0)
                                    goto label_1402696d5
                                
                                goto label_14026973f
                            
                            bool cond:194_1
                            bool cond:195_1
                            bool cond:219_1
                            bool cond:220_1
                            
                            if (temp60_1 != 0)
                            label_1402696d5:
                                zmm11[0] = 0
                                char temp87_1 = temp0_1005 & 2
                                cond:194_1 = temp87_1 == 0
                                cond:195_1 = temp87_1 != 0
                                cond:219_1 = temp87_1 == 0
                                cond:220_1 = temp87_1 != 0
                                
                                if (temp87_1 != 0)
                                    goto label_140269751
                                
                                goto label_1402696df
                            
                        label_14026973f:
                            char temp86_1 = temp0_1005 & 2
                            cond:194_1 = temp86_1 == 0
                            cond:195_1 = temp86_1 != 0
                            cond:219_1 = temp86_1 == 0
                            cond:220_1 = temp86_1 != 0
                            
                            if (temp86_1 == 0)
                            label_1402696df:
                                
                                if (not(cond:194_1))
                                label_1402696ee:
                                    arg8 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                                    
                                    if (cond:220_1)
                                        goto label_140269766
                                    
                                    goto label_1402696f4
                            else
                            label_140269751:
                                zmm14 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm14, 0), zmm14, 0xe2)
                                
                                if (cond:195_1)
                                    goto label_1402696ee
                            
                            bool cond:261_1
                            bool cond:262_1
                            bool cond:286_1
                            bool cond:287_1
                            
                            if (not(cond:219_1))
                            label_140269766:
                                zmm11 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm11, 0), zmm11, 0xe2)
                                char temp111_1 = temp0_1005 & 4
                                cond:261_1 = temp111_1 == 0
                                cond:262_1 = temp111_1 != 0
                                cond:286_1 = temp111_1 == 0
                                cond:287_1 = temp111_1 != 0
                                
                                if (temp111_1 != 0)
                                    goto label_140269701
                                
                                goto label_14026976f
                            
                        label_1402696f4:
                            char temp110_1 = temp0_1005 & 4
                            cond:261_1 = temp110_1 == 0
                            cond:262_1 = temp110_1 != 0
                            cond:286_1 = temp110_1 == 0
                            cond:287_1 = temp110_1 != 0
                            
                            if (temp110_1 == 0)
                            label_14026976f:
                                
                                if (not(cond:261_1))
                                label_140269779:
                                    arg8 = _mm_shuffle_ps(arg8, 
                                        _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                                    
                                    if (cond:287_1)
                                        goto label_140269712
                                    
                                    goto label_140269780
                            else
                            label_140269701:
                                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x30), 
                                    0x84)
                                
                                if (cond:262_1)
                                    goto label_140269779
                            
                            bool cond:314_1
                            bool cond:315_1
                            bool cond:329_1
                            bool cond:330_1
                            
                            if (not(cond:286_1))
                            label_140269712:
                                zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zx.o(0), zmm11, 0x30), 
                                    0x84)
                                char temp129_1 = temp0_1005 & 8
                                cond:314_1 = temp129_1 == 0
                                cond:315_1 = temp129_1 != 0
                                cond:329_1 = temp129_1 == 0
                                cond:330_1 = temp129_1 == 0
                                
                                if (temp129_1 != 0)
                                    goto label_14026978d
                                
                                goto label_14026971c
                            
                        label_140269780:
                            char temp128_1 = temp0_1005 & 8
                            cond:314_1 = temp128_1 == 0
                            cond:315_1 = temp128_1 != 0
                            cond:329_1 = temp128_1 == 0
                            cond:330_1 = temp128_1 == 0
                            
                            if (temp128_1 != 0)
                            label_14026978d:
                                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x20), 
                                    0x24)
                                
                                if (cond:315_1)
                                    goto label_140269726
                                
                                goto label_140269794
                            
                        label_14026971c:
                            
                            if (cond:314_1)
                            label_140269794:
                                
                                if (not(cond:329_1))
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                            else
                            label_140269726:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                                
                                if (not(cond:330_1))
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
            
            zmm10 = _mm_cmpeq_epi32(zmm10, zmm4) & not.o(zmm15)
            char temp0_896 = _mm_movemask_ps(zmm10)
            
            if (temp0_896 == 0)
                zmm10 = zx.o(0)
            else
                float var_4f8_3[0x4] = arg8
                zmm0 = _mm_shuffle_epi32(zmm4, 0xf5)
                zmm4 = _mm_mul_epu32(zmm4, zmm12)
                zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0xe8), 
                    _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(zmm0, var_188_1), 0xe8).q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                arg8 = _mm_shuffle_epi32(zmm1, 0x4e)
                zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
                arg8 = _mm_unpacklo_epi32(arg8, _mm_cmpgt_epi32(zx.o(0), arg8).q)
                float var_4a8_2[0x4] = arg8
                arg8 = __paddq_xmmdq_memdq(arg8, var_418_2)
                float var_4e8_3[0x4] = zmm1
                uint128_t var_508_1 =
                    __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(zmm1, var_448_3), var_588_1)
                arg8 = _mm_add_epi64(arg8, zmm9)
                zmm2 &= zmm10
                float var_518_3[0x4] = zmm10
                float var_5a8[0x4]
                float var_598[0x4]
                int32_t var_578[0x4]
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) == 0)
                    arg6 = var_578
                else
                    zmm3 = arg7
                    zmm10 = zx.o(0)
                    zmm0 = _mm_cmpeq_epi32(var_348_1, zx.o(0))
                    arg7 = zmm0
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm2 & zmm0, 0x1f), 0x1f)
                    char temp0_917 = _mm_movemask_ps(zmm1)
                    float var_458_3[0x4] = arg8
                    arg8 = zmm2
                    
                    if (temp0_917 == 0)
                        arg6 = var_578
                    else
                        int32_t var_5b8_5[0x4] = zmm11
                        float var_568_2[0x4] = zmm14
                        zmm2 = __paddq_xmmdq_memdq(var_4d8_1, var_418_2)
                        zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(temp0_158, var_448_3), 
                            var_4e8_3)
                        zmm2 = __paddq_xmmdq_memdq(zmm2, var_4a8_2)
                        zmm0 = data_1434426c0
                        arg5 = zmm0
                        zmm2 = _mm_add_epi64(zmm2, zmm0)
                        zmm4 = _mm_add_epi64(zmm4, zmm0)
                        zmm0 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm4 &= zmm0
                        zmm3 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm2 &= zmm3
                        int64_t rax_212 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        void* rsi_8 = arg4 + rax_212
                        zmm7 = *(arg4 + rax_212)
                        int64_t rax_213 = zmm2.q
                        void* rbp_12 = arg4 + rax_213
                        zmm14 = *(arg4 + rax_213)
                        int64_t rbx_24 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        void* rax_214 = arg4 + rbx_24
                        zmm11 = *(arg4 + rbx_24)
                        zmm2 = zmm0 & arg5
                        arg6 = zmm3 & arg5
                        void* rbx_26 = zmm4[0].q + arg4
                        zmm1 = *(zmm2.q + rbx_26)
                        zmm2 = *(_mm_shuffle_epi32(zmm2, 0x4e).q + rsi_8)
                        arg5 = *(arg6[0].q + rbp_12)
                        zmm12 = *(_mm_shuffle_epi32(arg6, 0x4e)[0].q + rax_214)
                        zmm4 = data_1434426e0
                        zmm0 &= zmm4
                        zmm3 &= zmm4
                        zmm4 = *(zmm0.q + rbx_26)
                        zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rsi_8)
                        zmm10 = *(zmm3[0].q + rbp_12)
                        zmm15 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rax_214)
                        bool cond:88_1
                        bool cond:89_1
                        
                        if ((temp0_917 & 1) == 0)
                            arg6 = var_578
                            char temp33_1 = temp0_917 & 1
                            cond:88_1 = temp33_1 != 0
                            cond:89_1 = temp33_1 == 0
                            
                            if (temp33_1 == 0)
                                goto label_1402695e5
                            
                            goto label_1402690d4
                        
                        zmm9 = var_5a8
                        zmm9[0] = (*rbx_26)[0]
                        var_5a8 = zmm9
                        arg6 = var_578
                        char temp32_1 = temp0_917 & 1
                        cond:88_1 = temp32_1 != 0
                        cond:89_1 = temp32_1 == 0
                        
                        if (temp32_1 == 0)
                        label_1402695e5:
                            
                            if (cond:89_1)
                                goto label_1402690de
                            
                            goto label_1402695f0
                        
                    label_1402690d4:
                        arg6[0] = zmm1[0]
                        bool cond:118_1
                        bool cond:119_1
                        bool cond:137_1
                        bool cond:138_1
                        
                        if (not(cond:88_1))
                        label_1402690de:
                            char temp44_1 = temp0_917 & 2
                            cond:118_1 = temp44_1 != 0
                            cond:119_1 = temp44_1 == 0
                            cond:137_1 = temp44_1 != 0
                            cond:138_1 = temp44_1 == 0
                            
                            if (temp44_1 == 0)
                                goto label_140269602
                            
                            goto label_1402690f4
                        
                    label_1402695f0:
                        var_598[0] = zmm4[0]
                        char temp43_1 = temp0_917 & 2
                        cond:118_1 = temp43_1 != 0
                        cond:119_1 = temp43_1 == 0
                        cond:137_1 = temp43_1 != 0
                        cond:138_1 = temp43_1 == 0
                        
                        if (temp43_1 == 0)
                        label_140269602:
                            zmm3 = var_538_1
                            zmm7 = var_558_1
                            
                            if (cond:119_1)
                                goto label_14026910e
                            
                            goto label_14026961f
                        
                    label_1402690f4:
                        var_5a8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, var_5a8, 0), var_5a8, 0xe2)
                        zmm3 = var_538_1
                        zmm7 = var_558_1
                        
                        if (not(cond:118_1))
                        label_14026910e:
                            
                            if (cond:138_1)
                                goto label_140269628
                            
                            goto label_140269121
                        
                    label_14026961f:
                        arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg6, 0), arg6, 0xe2)
                        bool cond:170_1
                        bool cond:171_1
                        bool cond:192_1
                        bool cond:193_1
                        
                        if (not(cond:137_1))
                        label_140269628:
                            char temp66_1 = temp0_917 & 4
                            cond:170_1 = temp66_1 != 0
                            cond:171_1 = temp66_1 == 0
                            cond:192_1 = temp66_1 != 0
                            cond:193_1 = temp66_1 == 0
                            
                            if (temp66_1 == 0)
                                goto label_14026912f
                            
                            goto label_140269631
                        
                    label_140269121:
                        var_598 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, var_598, 0), var_598, 0xe2)
                        char temp65_1 = temp0_917 & 4
                        cond:170_1 = temp65_1 != 0
                        cond:171_1 = temp65_1 == 0
                        cond:192_1 = temp65_1 != 0
                        cond:193_1 = temp65_1 == 0
                        
                        if (temp65_1 == 0)
                        label_14026912f:
                            zmm14 = var_568_2
                            
                            if (cond:171_1)
                                goto label_140269651
                            
                            goto label_14026913f
                        
                    label_140269631:
                        zmm0 = var_5a8
                        var_5a8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm14, zmm0, 0x30), 0x84)
                        zmm14 = var_568_2
                        
                        if (not(cond:170_1))
                        label_140269651:
                            arg5 = zmm3
                            
                            if (cond:193_1)
                                goto label_14026914d
                            
                            goto label_14026965b
                        
                    label_14026913f:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg5, arg6, 0x30), 0x84)
                        arg5 = zmm3
                        bool cond:236_1
                        bool cond:237_1
                        bool cond:259_1
                        bool cond:260_1
                        
                        if (not(cond:192_1))
                        label_14026914d:
                            char temp91_1 = temp0_917 & 8
                            cond:236_1 = temp91_1 != 0
                            cond:237_1 = temp91_1 == 0
                            cond:259_1 = temp91_1 != 0
                            cond:260_1 = temp91_1 == 0
                            
                            if (temp91_1 == 0)
                                goto label_140269678
                            
                            goto label_140269156
                        
                    label_14026965b:
                        zmm0 = var_598
                        var_598 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm10, zmm0, 0x30), 0x84)
                        char temp90_1 = temp0_917 & 8
                        cond:236_1 = temp90_1 != 0
                        cond:237_1 = temp90_1 == 0
                        cond:259_1 = temp90_1 != 0
                        cond:260_1 = temp90_1 == 0
                        
                        if (temp90_1 == 0)
                        label_140269678:
                            zmm11 = var_5b8_5
                            
                            if (cond:237_1)
                                goto label_140269176
                            
                            goto label_140269689
                        
                    label_140269156:
                        zmm0 = var_5a8
                        var_5a8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x20), 0x24)
                        zmm11 = var_5b8_5
                        
                        if (cond:236_1)
                        label_140269689:
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm12, arg6, 0x20), 0x24)
                            zmm10 = zx.o(0)
                            
                            if (cond:259_1)
                                zmm0 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm15, zmm0, 0x20), 0x24)
                        else
                        label_140269176:
                            zmm10 = zx.o(0)
                            
                            if (not(cond:260_1))
                                zmm0 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm15, zmm0, 0x20), 0x24)
                        
                        zmm3 = var_548_1
                        zmm15 = var_488_1
                    
                    arg7 &= not.o(arg8)
                    zmm2 = _mm_slli_epi32(arg7, 0x1f)
                    char temp0_943 = _mm_movemask_ps(zmm2)
                    
                    if (temp0_943 == 0)
                        zmm10 = var_518_3
                        zmm9 = var_528_1
                        arg7 = zmm3
                        arg8 = var_458_3
                    else
                        zmm9 = arg7
                        zmm12 = arg6
                        zmm3 = _mm_srai_epi32(_mm_slli_epi32(arg5, 0x1f), 0x1f)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f) & zmm3
                        arg6 = var_508_1
                        arg7 = arg6
                        arg8 = var_458_3
                        zmm1 = arg8
                        
                        if (_mm_movemask_ps(zmm2) != 0)
                            zmm0 = data_1434426c0
                            zmm4 = _mm_add_epi64(arg8, zmm0)
                            zmm1 = _mm_add_epi64(arg6, zmm0)
                            arg5 = zmm2 ^ data_142d3f800
                            arg7 = _mm_shuffle_epi32(arg5, 0x50)
                            arg7 = (arg7 & not.o(zmm1)) | (arg6 & arg7)
                            zmm1 = _mm_shuffle_epi32(arg5, 0xfa)
                            zmm1 = (zmm1 & not.o(zmm4)) | (arg8 & zmm1)
                            zmm4 = __paddq_xmmdq_memdq(var_4d8_1, var_418_2)
                            arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(temp0_158, var_448_3), 
                                var_4e8_3)
                            zmm4 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm4, var_4a8_2), zmm0)
                            arg5 = _mm_add_epi64(arg5, zmm0)
                            zmm7 = var_558_1
                            arg6 = _mm_shuffle_epi32(zmm2, 0x50) & arg5
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa) & zmm4
                            float temp0_961[0x4] = _mm_unpacklo_ps(*(arg4 + arg6[0].q), 
                                (*(arg4 + _mm_shuffle_epi32(arg6, 0x4e)[0].q))[0].q)
                            float temp0_963[0x4] = _mm_unpacklo_ps(*(arg4 + zmm2.q), 
                                (*(arg4 + _mm_shuffle_epi32(zmm2, 0x4e).q)).q)
                            zmm4 = temp0_961[0].q | temp0_963[0].q << 0x40
                            arg5 = var_538_1
                        
                        zmm3 &= zmm4
                        
                        if ((temp0_943 & 1) != 0)
                            zmm2.d = zmm3[0]
                            var_5a8 = zmm2
                            arg6 = zmm12
                            
                            if ((temp0_943 & 2) != 0)
                                goto label_14026937e
                            
                            goto label_140269344
                        
                        arg6 = zmm12
                        
                        if ((temp0_943 & 2) != 0)
                        label_14026937e:
                            var_5a8 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm3, var_5a8, 1), var_5a8, 0xe2)
                            
                            if ((temp0_943 & 4) != 0)
                                goto label_140269359
                            
                            goto label_140269388
                        
                    label_140269344:
                        
                        if ((temp0_943 & 4) == 0)
                        label_140269388:
                            
                            if ((temp0_943 & 8) != 0)
                                zmm2 = var_5a8
                                var_5a8 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm3, zmm2, 0x23), 0x24)
                        else
                        label_140269359:
                            var_5a8 =
                                _mm_shuffle_ps(var_5a8, _mm_shuffle_ps(zmm3, var_5a8, 0x32), 0x84)
                            
                            if ((temp0_943 & 8) != 0)
                                zmm2 = var_5a8
                                var_5a8 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm3, zmm2, 0x23), 0x24)
                        
                        zmm2 = data_1434422d0
                        zmm4 = arg5 & zmm2
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm4, zmm2) & zmm9, 0x1f)
                        char temp0_972 = _mm_movemask_ps(zmm2)
                        float var_388[0x4]
                        
                        if (temp0_972 == 0)
                            zmm3 = zmm1
                            zmm4 = _mm_cmpeq_epi32(zmm4, zmm10) & not.o(var_388)
                            
                            if ((temp0_943 & 1) != 0)
                                arg6[0] = zmm4[0]
                        else
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f) ^ data_142d3f800
                            zmm10 = zmm7
                            zmm7 = arg5
                            
                            if ((temp0_972 & 1) != 0)
                                var_388[0] = (*arg7[0].q)[0]
                            
                            zmm3 = data_1434426c0
                            int32_t temp0_974[0x4] = _mm_add_epi64(zmm1, zmm3)
                            zmm3 = _mm_add_epi64(arg7, zmm3)
                            arg5 = _mm_shuffle_epi32(zmm2, 0x50)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                            
                            if ((temp0_972 & 2) != 0)
                                zmm0 = var_388
                                var_388 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, zmm0, 0), 
                                    zmm0, 0xe2)
                                zmm10 = var_558_1
                                zmm7 = var_538_1
                            
                            arg7 &= arg5
                            
                            if ((temp0_972 & 4) != 0)
                                zmm0 = var_388
                                var_388 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(*zmm1[0].q, zmm0, 0x30), 0x84)
                            
                            arg6 = zmm12
                            arg7 |= arg5 & not.o(zmm3)
                            zmm3 = (zmm1 & zmm2) | (zmm2 & not.o(temp0_974))
                            
                            if ((temp0_972 & 8) != 0)
                                zmm0 = var_388
                                var_388 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm0, 
                                        0x20), 
                                    0x24)
                            
                            arg5 = zmm7
                            zmm7 = zmm10
                            zmm4 = _mm_cmpeq_epi32(zmm4, zx.o(0)) & not.o(var_388)
                            
                            if ((temp0_943 & 1) != 0)
                                arg6[0] = zmm4[0]
                        
                        if ((temp0_943 & 2) != 0)
                            arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg6, 1), arg6, 0xe2)
                            
                            if ((temp0_943 & 4) != 0)
                                goto label_140269590
                            
                            goto label_14026951e
                        
                        if ((temp0_943 & 4) == 0)
                        label_14026951e:
                            
                            if ((temp0_943 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm4, arg6, 0x23), 0x24)
                        else
                        label_140269590:
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm4, arg6, 0x32), 0x84)
                            
                            if ((temp0_943 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm4, arg6, 0x23), 0x24)
                        
                        zmm2 = data_142fc95e0
                        zmm1 = arg5 & zmm2
                        char temp0_993 = _mm_movemask_ps(_mm_slli_epi32(
                            zmm9 & _mm_cmpeq_epi32(zmm1, zmm2), 0x1f))
                        uint128_t var_2e8
                        
                        if (temp0_993 != 0)
                            if ((temp0_993 & 1) != 0)
                                zmm4 = var_2e8
                                zmm4[0] = (*arg7[0].q).d
                                zmm2 = zmm4
                                zmm4 = zx.o(0)
                                
                                if ((temp0_993 & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, zmm2, 0), 
                                        zmm2, 0xe2)
                            else
                                zmm2 = var_2e8
                                zmm4 = zx.o(0)
                                
                                if ((temp0_993 & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, zmm2, 0), 
                                        zmm2, 0xe2)
                            
                            arg7 = var_548_1
                            zmm10 = var_518_3
                            zmm9 = var_528_1
                            
                            if ((temp0_993 & 4) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm3[0].q, zmm2, 0x30), 
                                    0x84)
                                
                                if ((temp0_993 & 8) != 0)
                                label_140269a9d:
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm2, 
                                            0x20), 
                                        0x24)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm4) & not.o(zmm2)
                                    
                                    if ((temp0_943 & 1) == 0)
                                        goto label_140269807
                                    
                                    goto label_14026998f
                            else if ((temp0_993 & 8) != 0)
                                goto label_140269a9d
                            
                            zmm1 = _mm_cmpeq_epi32(zmm1, zmm4) & not.o(zmm2)
                            
                            if ((temp0_943 & 1) == 0)
                                goto label_140269807
                            
                            goto label_14026998f
                        
                        zmm2 = var_2e8
                        arg7 = var_548_1
                        zmm10 = var_518_3
                        zmm9 = var_528_1
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                        
                        if ((temp0_943 & 1) == 0)
                        label_140269807:
                            var_2e8 = zmm2
                            
                            if ((temp0_943 & 2) == 0)
                                goto label_1402699a9
                            
                            goto label_140269818
                        
                    label_14026998f:
                        zmm0.d = zmm1[0]
                        var_598 = zmm0
                        var_2e8 = zmm2
                        
                        if ((temp0_943 & 2) == 0)
                        label_1402699a9:
                            
                            if ((temp0_943 & 4) == 0)
                                goto label_140269833
                            
                            goto label_1402699b5
                        
                    label_140269818:
                        zmm2 = var_598
                        var_598 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                        
                        if ((temp0_943 & 4) != 0)
                        label_1402699b5:
                            zmm2 = var_598
                            var_598 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x32), 0x84)
                            
                            if ((temp0_943 & 8) != 0)
                                zmm0 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm1, zmm0, 0x23), 0x24)
                        else
                        label_140269833:
                            
                            if ((temp0_943 & 8) != 0)
                                zmm0 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm1, zmm0, 0x23), 0x24)
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm10 & var_478_2, 0x1f)) == 0)
                label_14026a750:
                    zmm7 = arg5
                    zmm10 = zx.o(0)
                    var_578 = arg6
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    arg8 = var_4f8_3
                else
                    zmm3 = zmm10
                    zmm10 = _mm_srai_epi32(_mm_slli_epi32(zmm10 & zmm7, 0x1f), 0x1f)
                    char temp0_1034 = _mm_movemask_ps(zmm10)
                    
                    if (temp0_1034 == 0)
                        arg5 = var_538_1
                        zmm9 = zx.o(0)
                    else
                        zmm0 = _mm_srai_epi32(_mm_slli_epi32(var_538_1, 0x1f), 0x1f) & zmm7
                        zmm3 = _mm_srai_epi32(_mm_slli_epi32(zmm3, 0x1f), 0x1f) & zmm0
                        uint32_t temp0_1039 = _mm_movemask_ps(zmm3)
                        zmm12 = zx.o(0)
                        int32_t var_578_2[0x4] = arg6
                        int32_t var_5b8_6[0x4] = zmm11
                        float var_2d8[0x4]
                        
                        if (temp0_1039 == 0)
                            zmm11 = zx.o(0)
                            arg7 = zx.o(0)
                            zmm3 = var_2d8
                        else
                            char rsi_9 = temp0_1039.b
                            uint128_t var_408
                            
                            if ((rsi_9 & 1) != 0)
                                arg6 = var_588_1
                                zmm2.d = (*arg6[0].q)[0]
                                var_408 = zmm2
                                
                                if ((rsi_9 & 2) != 0)
                                    var_408 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg6, 0x4e)[0].q, 
                                            var_408, 0), 
                                        var_408, 0xe2)
                            else
                                arg6 = var_588_1
                                
                                if ((rsi_9 & 2) != 0)
                                    var_408 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg6, 0x4e)[0].q, 
                                            var_408, 0), 
                                        var_408, 0xe2)
                            
                            if ((rsi_9 & 4) == 0)
                                if ((rsi_9 & 8) != 0)
                                    goto label_140269b01
                                
                                goto label_140269a38
                            
                            var_408 = _mm_shuffle_ps(var_408, 
                                _mm_shuffle_ps(*zmm9[0].q, var_408, 0x30), 0x84)
                            char rcx_39
                            
                            if ((rsi_9 & 8) != 0)
                            label_140269b01:
                                var_408 = _mm_shuffle_ps(var_408, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q, var_408, 
                                        0x20), 
                                    0x24)
                                rcx_39 = _mm_movemask_ps(zmm0)
                                zmm11 = zx.o(0)
                                
                                if ((rcx_39 & 1) != 0)
                                    goto label_140269a49
                                
                                goto label_140269b1a
                            
                        label_140269a38:
                            rcx_39 = _mm_movemask_ps(zmm0)
                            zmm11 = zx.o(0)
                            
                            if ((rcx_39 & 1) == 0)
                            label_140269b1a:
                                zmm3 ^= data_142d3f800
                                
                                if ((rcx_39 & 2) != 0)
                                    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(var_408, zmm11, 1), 
                                        zmm11, 0xe2)
                            else
                            label_140269a49:
                                zmm11 = zx.o(0)
                                zmm11[0] = var_408.d
                                zmm3 ^= data_142d3f800
                                
                                if ((rcx_39 & 2) != 0)
                                    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(var_408, zmm11, 1), 
                                        zmm11, 0xe2)
                            
                            zmm2 = __paddq_xmmdq_memdq(arg6, data_1434426c0)
                            zmm1 = _mm_shuffle_epi32(zmm3, 0x50)
                            
                            if ((rcx_39 & 4) != 0)
                                zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_408, zmm11, 0x32), 
                                    0x84)
                            
                            zmm0 = zmm1 & not.o(zmm2)
                            
                            if ((rcx_39 & 8) != 0)
                                zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_408, zmm11, 0x23), 
                                    0x24)
                            
                            zmm2 = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                            zmm4 = _mm_shuffle_epi32(zmm3, 0xfa)
                            arg6 = (arg6 & zmm1) | zmm0
                            float var_3f8[0x4]
                            
                            if ((rsi_9 & 1) != 0)
                                var_3f8[0] = (*arg6[0].q).d
                            
                            zmm3 = var_2d8
                            zmm0 = zmm4 & not.o(zmm2)
                            arg5 = zmm9 & zmm4
                            
                            if ((rsi_9 & 2) != 0)
                                zmm7 = var_558_1
                                var_3f8 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg6, 0x4e).q, var_3f8, 0), 
                                    var_3f8, 0xe2)
                                arg5 |= zmm0
                                
                                if ((rsi_9 & 4) != 0)
                                label_140269c6b:
                                    zmm2 = var_3f8
                                    var_3f8 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(*arg5[0].q, zmm2, 0x30), 0x84)
                                    
                                    if ((rsi_9 & 8) == 0)
                                        goto label_140269bf4
                                    
                                    goto label_140269c9b
                            else
                                arg5 |= zmm0
                                
                                if ((rsi_9 & 4) != 0)
                                    goto label_140269c6b
                            
                            if ((rsi_9 & 8) == 0)
                            label_140269bf4:
                                arg7 = zx.o(0)
                                
                                if ((rcx_39 & 1) == 0)
                                    goto label_140269cc1
                                
                                goto label_140269c02
                            
                        label_140269c9b:
                            zmm2 = var_3f8
                            var_3f8 = _mm_shuffle_ps(zmm2, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm2, 0x20), 0x24)
                            arg7 = zx.o(0)
                            
                            if ((rcx_39 & 1) != 0)
                            label_140269c02:
                                arg7 = zx.o(0)
                                arg7[0] = var_3f8.d
                                zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                                zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                                
                                if ((rcx_39 & 2) != 0)
                                    arg7 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(var_3f8, arg7, 1), arg7, 0xe2)
                            else
                            label_140269cc1:
                                zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                                zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                                
                                if ((rcx_39 & 2) != 0)
                                    arg7 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(var_3f8, arg7, 1), arg7, 0xe2)
                            
                            zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            zmm0 = data_1434426c0
                            arg5 = _mm_add_epi64(arg5, zmm0)
                            int32_t temp0_1089[0x4] = _mm_add_epi64(arg6, zmm0)
                            
                            if ((rcx_39 & 4) != 0)
                                arg7 =
                                    _mm_shuffle_ps(arg7, _mm_shuffle_ps(var_3f8, arg7, 0x32), 0x84)
                            
                            if ((rcx_39 & 8) != 0)
                                arg7 =
                                    _mm_shuffle_ps(arg7, _mm_shuffle_ps(var_3f8, arg7, 0x23), 0x24)
                            
                            var_588_1 = (var_588_1 & zmm1) | (zmm1 & not.o(temp0_1089))
                            zmm9 = (zmm9 & zmm4) | (zmm4 & not.o(arg5))
                        
                        zmm1 = data_1434422d0
                        zmm0 = _mm_cmpeq_epi32(var_538_1 & zmm1, zmm1) & zmm7
                        zmm4 = _mm_srai_epi32(_mm_slli_epi32(var_518_3 & zmm0, 0x1f), 0x1f)
                        char temp0_1097 = _mm_movemask_ps(zmm4)
                        
                        if (temp0_1097 == 0)
                            arg6 = zx.o(0)
                        else
                            if ((temp0_1097 & 1) == 0)
                                if ((temp0_1097 & 2) != 0)
                                    goto label_140269e25
                                
                                goto label_140269daa
                            
                            zmm3[0] = (*var_588_1[0].q)[0]
                            
                            if ((temp0_1097 & 2) != 0)
                            label_140269e25:
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(
                                        *__pshufd_xmmdq_memdq_immb(var_588_1, 0x4e)[0].q, zmm3, 0), 
                                    zmm3, 0xe2)
                                
                                if ((temp0_1097 & 4) == 0)
                                    goto label_140269db0
                                
                                goto label_140269e3b
                            
                        label_140269daa:
                            
                            if ((temp0_1097 & 4) == 0)
                            label_140269db0:
                                
                                if ((temp0_1097 & 8) != 0)
                                    goto label_140269e5c
                                
                                goto label_140269dba
                            
                        label_140269e3b:
                            zmm3 =
                                _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm9[0].q, zmm3, 0x30), 0x84)
                            char rcx_40
                            
                            if ((temp0_1097 & 8) != 0)
                            label_140269e5c:
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q, zmm3, 
                                        0x20), 
                                    0x24)
                                rcx_40 = _mm_movemask_ps(zmm0)
                                zmm12 = zx.o(0)
                                
                                if ((rcx_40 & 1) != 0)
                                    goto label_140269dcb
                                
                                goto label_140269e71
                            
                        label_140269dba:
                            rcx_40 = _mm_movemask_ps(zmm0)
                            zmm12 = zx.o(0)
                            
                            if ((rcx_40 & 1) == 0)
                            label_140269e71:
                                zmm4 ^= data_142d3f800
                                
                                if ((rcx_40 & 2) != 0)
                                    zmm12 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm12, 1), zmm12, 0xe2)
                            else
                            label_140269dcb:
                                zmm12 = zx.o(0)
                                zmm12[0] = zmm3[0]
                                zmm4 ^= data_142d3f800
                                
                                if ((rcx_40 & 2) != 0)
                                    zmm12 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm12, 1), zmm12, 0xe2)
                            
                            zmm2 = __paddq_xmmdq_memdq(var_588_1, data_1434426c0)
                            zmm1 = _mm_shuffle_epi32(zmm4, 0x50)
                            
                            if ((rcx_40 & 4) != 0)
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm3, zmm12, 0x32), 0x84)
                            
                            if ((rcx_40 & 8) != 0)
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm3, zmm12, 0x23), 0x24)
                            
                            int32_t temp0_1116[0x4] = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                            zmm4 = _mm_shuffle_epi32(zmm4, 0xfa)
                            arg5 = (var_588_1 & zmm1) | (zmm1 & not.o(zmm2))
                            uint128_t var_3e8
                            
                            if ((temp0_1097 & 1) != 0)
                                zmm2.d = (*arg5[0].q).d
                                var_3e8 = zmm2
                            
                            zmm2 = zmm4 & not.o(temp0_1116)
                            zmm0 = zmm9 & zmm4
                            zmm7 = zmm14
                            zmm14 = zmm3
                            
                            if ((temp0_1097 & 2) == 0)
                                zmm0 |= zmm2
                                
                                if ((temp0_1097 & 4) != 0)
                                    goto label_14026a118
                                
                                goto label_140269f42
                            
                            zmm3 = var_3e8
                            var_3e8 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e)[0].q, zmm3, 0), zmm3, 
                                0xe2)
                            zmm0 |= zmm2
                            
                            if ((temp0_1097 & 4) == 0)
                            label_140269f42:
                                
                                if ((temp0_1097 & 8) != 0)
                                    zmm3 = var_3e8
                                    var_3e8 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm0, 0x4e).q, zmm3, 
                                            0x20), 
                                        0x24)
                            else
                            label_14026a118:
                                zmm3 = var_3e8
                                var_3e8 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm0.q, zmm3, 0x30), 0x84)
                                
                                if ((temp0_1097 & 8) != 0)
                                    zmm3 = var_3e8
                                    var_3e8 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm0, 0x4e).q, zmm3, 
                                            0x20), 
                                        0x24)
                            
                            zmm3 = zmm14
                            zmm14 = zmm7
                            zmm7 = var_558_1
                            arg6 = zx.o(0)
                            
                            if ((rcx_40 & 1) != 0)
                                arg6 = zx.o(0)
                                arg6[0] = var_3e8.d
                            
                            zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            
                            if ((rcx_40 & 2) != 0)
                                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(var_3e8, arg6, 1), arg6, 0xe2)
                            
                            zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            zmm2 = data_1434426c0
                            zmm0 = _mm_add_epi64(zmm0, zmm2)
                            arg5 = _mm_add_epi64(arg5, zmm2)
                            
                            if ((rcx_40 & 4) != 0)
                                arg6 =
                                    _mm_shuffle_ps(arg6, _mm_shuffle_ps(var_3e8, arg6, 0x32), 0x84)
                            
                            if ((rcx_40 & 8) != 0)
                                arg6 =
                                    _mm_shuffle_ps(arg6, _mm_shuffle_ps(var_3e8, arg6, 0x23), 0x24)
                            
                            var_588_1 = (var_588_1 & zmm1) | (zmm1 & not.o(arg5))
                            zmm9 = (zmm9 & zmm4) | (zmm4 & not.o(zmm0))
                        
                        zmm1 = data_142fc95e0
                        zmm0 = _mm_cmpeq_epi32(var_538_1 & zmm1, zmm1) & zmm7
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_518_3 & zmm0, 0x1f), 0x1f)
                        char temp0_1136 = _mm_movemask_ps(zmm1)
                        var_2d8 = zmm3
                        
                        if (temp0_1136 == 0)
                            zmm4 = zx.o(0)
                            zmm1 = zx.o(0)
                        else
                            if ((temp0_1136 & 1) == 0)
                                if ((temp0_1136 & 2) != 0)
                                    goto label_14026a17b
                                
                                goto label_14026a085
                            
                            uint128_t var_3d8
                            zmm4 = var_3d8
                            zmm4[0] = (*var_588_1.q).d
                            var_3d8 = zmm4
                            
                            if ((temp0_1136 & 2) != 0)
                            label_14026a17b:
                                zmm4 = var_3d8
                                var_3d8 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*__pshufd_xmmdq_memdq_immb(var_588_1, 0x4e).q, 
                                        zmm4, 0), 
                                    zmm4, 0xe2)
                                
                                if ((temp0_1136 & 4) == 0)
                                    goto label_14026a08e
                                
                                goto label_14026a1a5
                            
                        label_14026a085:
                            
                            if ((temp0_1136 & 4) == 0)
                            label_14026a08e:
                                
                                if ((temp0_1136 & 8) != 0)
                                    goto label_14026a1d5
                                
                                goto label_14026a097
                            
                        label_14026a1a5:
                            zmm4 = var_3d8
                            var_3d8 =
                                _mm_shuffle_ps(zmm4, _mm_shuffle_ps(*zmm9[0].q, zmm4, 0x30), 0x84)
                            char rsi_11
                            
                            if ((temp0_1136 & 8) != 0)
                            label_14026a1d5:
                                zmm4 = var_3d8
                                var_3d8 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e).q, zmm4, 0x20), 
                                    0x24)
                                rsi_11 = _mm_movemask_ps(zmm0)
                                zmm4 = zx.o(0)
                                
                                if ((rsi_11 & 1) != 0)
                                    goto label_14026a0a8
                                
                                goto label_14026a1fd
                            
                        label_14026a097:
                            rsi_11 = _mm_movemask_ps(zmm0)
                            zmm4 = zx.o(0)
                            
                            if ((rsi_11 & 1) == 0)
                            label_14026a1fd:
                                zmm1 ^= data_142d3f800
                                
                                if ((rsi_11 & 2) != 0)
                                    zmm4 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(var_3d8, zmm4, 1), zmm4, 0xe2)
                            else
                            label_14026a0a8:
                                zmm4 = zx.o(0)
                                zmm4[0] = var_3d8.d
                                zmm1 ^= data_142d3f800
                                
                                if ((rsi_11 & 2) != 0)
                                    zmm4 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(var_3d8, zmm4, 1), zmm4, 0xe2)
                            
                            zmm0 = __paddq_xmmdq_memdq(var_588_1, data_1434426c0)
                            zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                            
                            if ((rsi_11 & 4) != 0)
                                zmm4 =
                                    _mm_shuffle_ps(zmm4, _mm_shuffle_ps(var_3d8, zmm4, 0x32), 0x84)
                            
                            float var_588_4[0x4] = var_588_1 & zmm2
                            zmm2 &= not.o(zmm0)
                            
                            if ((rsi_11 & 8) != 0)
                                zmm4 =
                                    _mm_shuffle_ps(zmm4, _mm_shuffle_ps(var_3d8, zmm4, 0x23), 0x24)
                            
                            arg5 = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                            zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm1 = var_588_4 | zmm2
                            uint128_t var_228
                            
                            if ((temp0_1136 & 1) != 0)
                                zmm2.d = (*zmm1[0].q)[0]
                                zmm9 &= zmm0
                                zmm0 &= not.o(arg5)
                                
                                if ((temp0_1136 & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm2, 
                                            0), 
                                        zmm2, 0xe2)
                            else
                                zmm2 = var_228
                                zmm9 &= zmm0
                                zmm0 &= not.o(arg5)
                                
                                if ((temp0_1136 & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm2, 
                                            0), 
                                        zmm2, 0xe2)
                            
                            zmm9 |= zmm0
                            
                            if ((temp0_1136 & 4) == 0)
                                if ((temp0_1136 & 8) != 0)
                                    goto label_14026a360
                                
                                goto label_14026a300
                            
                            zmm2 =
                                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm9[0].q, zmm2, 0x30), 0x84)
                            
                            if ((temp0_1136 & 8) != 0)
                            label_14026a360:
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e).q, zmm2, 0x20), 
                                    0x24)
                                zmm1 = zx.o(0)
                                
                                if ((rsi_11 & 1) != 0)
                                    goto label_14026a309
                                
                                goto label_14026a36d
                            
                        label_14026a300:
                            zmm1 = zx.o(0)
                            
                            if ((rsi_11 & 1) == 0)
                            label_14026a36d:
                                
                                if ((rsi_11 & 2) != 0)
                                label_14026a37e:
                                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm1, 1), zmm1, 0xe2)
                                    
                                    if ((rsi_11 & 4) != 0)
                                        goto label_14026a323
                                    
                                    goto label_14026a38b
                            else
                            label_14026a309:
                                zmm1 = zx.o(0)
                                zmm1[0] = zmm2.d
                                
                                if ((rsi_11 & 2) != 0)
                                    goto label_14026a37e
                            
                            if ((rsi_11 & 4) == 0)
                            label_14026a38b:
                                var_228 = zmm2
                                
                                if ((rsi_11 & 8) != 0)
                                    zmm1 =
                                        _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                            else
                            label_14026a323:
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x32), 0x84)
                                var_228 = zmm2
                                
                                if ((rsi_11 & 8) != 0)
                                    zmm1 =
                                        _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                        
                        zmm0 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(temp0_158, var_448_3), 
                            var_4e8_3)
                        zmm2 = data_1434426c0
                        arg5 = zmm2
                        zmm0 = _mm_add_epi64(zmm0, zmm2)
                        zmm2 = _mm_shuffle_epi32(zmm10, 0x50) & zmm0
                        zmm0 = _mm_add_epi64(
                            __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8_1, var_418_2), 
                                var_4a8_2), 
                            arg5)
                        arg5 = _mm_shuffle_epi32(zmm10, 0xfa) & zmm0
                        int64_t rcx_42 = _mm_shuffle_epi32(zmm2, 0x4e).q
                        int64_t rbp_14 = arg5[0].q
                        int64_t rdi_8 = _mm_shuffle_epi32(arg5, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm2.q)), zx.q(*(arg4 + rcx_42))), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_14)), zx.o(*(arg4 + rdi_8))[0].q)
                                .q)
                        zmm2 = zmm0
                        zmm11 = _mm_add_ps(zmm11, 
                            _mm_mul_ps(arg7, 
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0)))
                        arg5 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm0 = data_143442440
                        zmm3 = zmm0
                        zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                        arg5 = data_143442690
                        arg6 = _mm_mul_ps(arg6, _mm_div_ps(zmm0, arg5))
                        zmm0 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm2, 0x15), zmm3)), arg5)
                        char temp85_1 = temp0_1034 & 1
                        
                        if (temp85_1 != 0)
                            zmm2.d = zmm11[0]
                            var_5a8 = zmm2
                        
                        arg5 = var_538_1
                        arg7 = var_548_1
                        zmm3 = var_518_3
                        float temp0_1203[0x4] = _mm_mul_ps(zmm1, zmm0)
                        float temp0_1204[0x4] = _mm_add_ps(zmm12, arg6)
                        
                        if (temp85_1 == 0)
                            arg6 = var_578_2
                            zmm4 = _mm_add_ps(zmm4, temp0_1203)
                            
                            if (temp85_1 != 0)
                                zmm0.d = zmm4[0]
                                var_598 = zmm0
                        else
                            arg6 = var_578_2
                            arg6[0] = temp0_1204[0]
                            zmm4 = _mm_add_ps(zmm4, temp0_1203)
                            
                            if (temp85_1 != 0)
                                zmm0.d = zmm4[0]
                                var_598 = zmm0
                        
                        char temp109_1 = temp0_1034 & 2
                        
                        if (temp109_1 != 0)
                            var_5a8 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm11, var_5a8, 1), var_5a8, 0xe2)
                            
                            if (temp109_1 != 0)
                                goto label_140265126
                        else if (temp109_1 != 0)
                        label_140265126:
                            arg6 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_1204, arg6, 1), arg6, 0xe2)
                            
                            if (temp109_1 != 0)
                                goto label_14026a543
                            
                            goto label_14026512f
                        
                        bool cond:327_1
                        bool cond:328_1
                        bool cond:339_1
                        bool cond:340_1
                        
                        if (temp109_1 != 0)
                        label_14026a543:
                            var_598 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm4, var_598, 1), var_598, 0xe2)
                            char temp127_1 = temp0_1034 & 4
                            cond:327_1 = temp127_1 == 0
                            cond:328_1 = temp127_1 != 0
                            cond:339_1 = temp127_1 == 0
                            cond:340_1 = temp127_1 != 0
                            
                            if (temp127_1 != 0)
                                goto label_140265149
                            
                            goto label_14026a551
                        
                    label_14026512f:
                        char temp126_1 = temp0_1034 & 4
                        cond:327_1 = temp126_1 == 0
                        cond:328_1 = temp126_1 != 0
                        cond:339_1 = temp126_1 == 0
                        cond:340_1 = temp126_1 != 0
                        
                        if (temp126_1 == 0)
                        label_14026a551:
                            
                            if (not(cond:327_1))
                            label_14026a55f:
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(temp0_1204, arg6, 0x32), 
                                    0x84)
                                
                                if (cond:340_1)
                                    goto label_14026516a
                                
                                goto label_14026a569
                        else
                        label_140265149:
                            var_5a8 =
                                _mm_shuffle_ps(var_5a8, _mm_shuffle_ps(zmm11, var_5a8, 0x32), 0x84)
                            
                            if (cond:328_1)
                                goto label_14026a55f
                        
                        bool cond:356_1
                        bool cond:357_1
                        bool cond:364_1
                        bool cond:365_1
                        
                        if (not(cond:339_1))
                        label_14026516a:
                            var_598 =
                                _mm_shuffle_ps(var_598, _mm_shuffle_ps(zmm4, var_598, 0x32), 0x84)
                            char temp135_1 = temp0_1034 & 8
                            cond:356_1 = temp135_1 == 0
                            cond:357_1 = temp135_1 != 0
                            cond:364_1 = temp135_1 == 0
                            cond:365_1 = temp135_1 != 0
                            
                            if (temp135_1 != 0)
                                goto label_14026a572
                            
                            goto label_140265178
                        
                    label_14026a569:
                        char temp134_1 = temp0_1034 & 8
                        cond:356_1 = temp134_1 == 0
                        cond:357_1 = temp134_1 != 0
                        cond:364_1 = temp134_1 == 0
                        cond:365_1 = temp134_1 != 0
                        
                        if (temp134_1 != 0)
                        label_14026a572:
                            zmm0 = var_5a8
                            var_5a8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x23), 0x24)
                            zmm11 = var_5b8_6
                            zmm15 = var_488_1
                            
                            if (cond:357_1)
                                goto label_140265193
                            
                            goto label_14026a59c
                        
                    label_140265178:
                        zmm11 = var_5b8_6
                        zmm15 = var_488_1
                        
                        if (cond:356_1)
                        label_14026a59c:
                            zmm9 = zx.o(0)
                            
                            if (not(cond:364_1))
                                zmm0 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm4, zmm0, 0x23), 0x24)
                        else
                        label_140265193:
                            arg6 =
                                _mm_shuffle_ps(arg6, _mm_shuffle_ps(temp0_1204, arg6, 0x23), 0x24)
                            zmm9 = zx.o(0)
                            
                            if (cond:365_1)
                                zmm0 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm4, zmm0, 0x23), 0x24)
                    
                    zmm7 ^= var_478_2
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm3 & zmm7, 0x1f)) == 0)
                        goto label_14026a750
                    
                    int32_t temp0_1219[0x4] = __pcmpeqd_xmmdq_memdq(var_4c8, data_1434422d0)
                    zmm10 = zmm3 & temp0_1219
                    zmm2 = _mm_slli_epi32(zmm10, 0x1f)
                    char temp0_1221 = _mm_movemask_ps(zmm2)
                    float var_558_2[0x4] = zmm7
                    
                    if (temp0_1221 == 0)
                        zmm10 = zx.o(0)
                        var_578 = arg6
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        arg8 = var_4f8_3
                    else
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg5, 0x1f), 0x1f)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f) & zmm1
                        zmm3 = arg6
                        float var_458_1[0x4]
                        
                        if (_mm_movemask_ps(zmm2) == 0)
                            var_458_1 = arg8
                        else
                            arg5 = data_1434426b0
                            zmm7 = arg5
                            zmm4 = _mm_add_epi64(var_508_1, arg5)
                            arg5 = zmm2 ^ data_142d3f800
                            arg6 = _mm_shuffle_epi32(arg5, 0x50)
                            var_508_1 = (var_508_1 & arg6) | (arg6 & not.o(zmm4))
                            zmm4 = _mm_add_epi64(arg8, zmm7)
                            arg5 = _mm_shuffle_epi32(arg5, 0xfa)
                            var_458_1 = (arg8 & arg5) | (arg5 & not.o(zmm4))
                            int32_t temp0_1230[0x4] = __paddq_xmmdq_memdq(var_4d8_1, var_418_2)
                            zmm0 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(temp0_158, var_448_3), 
                                var_4e8_3)
                            int32_t temp0_1233[0x4] = __paddq_xmmdq_memdq(temp0_1230, var_4a8_2)
                            zmm4 = data_1434426c0
                            arg5 = zmm4
                            zmm0 = _mm_add_epi64(zmm0, zmm4)
                            zmm4 = _mm_shuffle_epi32(zmm2, 0x50) & zmm0
                            int32_t temp0_1236[0x4] = _mm_add_epi64(temp0_1233, arg5)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa) & temp0_1236
                            int64_t rax_262 = zmm4[0].q
                            int64_t rbp_15 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                            int64_t rdi_9 = _mm_shuffle_epi32(zmm2, 0x4e).q
                            zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + rax_262), 
                                                0), 
                                            *(arg4 + rbp_15), 2), 
                                        *(arg4 + zmm2.q), 4), 
                                    *(arg4 + rdi_9), 6), 
                                data_143442b40))
                        
                        float var_248[0x4]
                        zmm7 = var_248
                        arg8 = var_4f8_3
                        zmm1 &= zmm2
                        
                        if ((temp0_1221 & 1) != 0)
                            zmm2.d = zmm1[0]
                            var_5a8 = zmm2
                            arg5 = var_538_1
                            arg6 = zmm3
                            
                            if ((temp0_1221 & 2) != 0)
                                goto label_14026524c
                            
                            goto label_14026520a
                        
                        arg5 = var_538_1
                        arg6 = zmm3
                        
                        if ((temp0_1221 & 2) != 0)
                        label_14026524c:
                            var_5a8 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm1, var_5a8, 1), var_5a8, 0xe2)
                            
                            if ((temp0_1221 & 4) != 0)
                                goto label_14026521f
                            
                            goto label_140265256
                        
                    label_14026520a:
                        
                        if ((temp0_1221 & 4) == 0)
                        label_140265256:
                            
                            if ((temp0_1221 & 8) != 0)
                                zmm2 = var_5a8
                                var_5a8 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                        else
                        label_14026521f:
                            var_5a8 =
                                _mm_shuffle_ps(var_5a8, _mm_shuffle_ps(zmm1, var_5a8, 0x32), 0x84)
                            
                            if ((temp0_1221 & 8) != 0)
                                zmm2 = var_5a8
                                var_5a8 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                        
                        zmm2 = data_1434422d0
                        zmm1 = arg5 & zmm2
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm2) & zmm10, 0x1f)
                        char temp0_25 = _mm_movemask_ps(zmm2)
                        
                        if (temp0_25 == 0)
                            zmm1 = _mm_cmpeq_epi32(zmm1, zmm9) & not.o(zmm2)
                            
                            if ((temp0_1221 & 1) != 0)
                                arg6[0] = zmm1[0]
                        else
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            
                            if ((temp0_25 & 1) != 0)
                                zmm7[0] = zx.o(*var_508_1.q)[0]
                            
                            zmm2 ^= data_142d3f800
                            zmm0 = arg5
                            
                            if ((temp0_25 & 2) != 0)
                                arg5 = var_508_1
                                zmm7 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg5, 0x4e)[0].q), zmm7, 
                                        0), 
                                    zmm7, 0xe2)
                            else
                                arg5 = var_508_1
                            
                            zmm4 = data_1434426b0
                            int32_t temp0_31[0x4] = _mm_add_epi64(var_458_1, zmm4)
                            arg5 = _mm_add_epi64(arg5, zmm4)
                            zmm4 = _mm_shuffle_epi32(zmm2, 0x50)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                            
                            if ((temp0_25 & 4) != 0)
                                zmm0 = zmm7
                                zmm7 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(zx.o(*var_458_1[0].q), zmm0, 0x30), 0x84)
                                zmm0 = var_538_1
                            
                            zmm9 = var_508_1 & zmm4
                            
                            if ((temp0_25 & 8) != 0)
                                zmm7 = _mm_shuffle_ps(zmm7, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(var_458_1, 0x4e)[0].q), 
                                        zmm7, 0x20), 
                                    0x24)
                            
                            arg6 = arg6
                            var_508_1 = zmm9 | (zmm4 & not.o(arg5))
                            arg5 = (var_458_1 & zmm2) | (zmm2 & not.o(temp0_31))
                            zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm7, data_143442cd0), data_143442b40))
                            var_458_1 = arg5
                            arg5 = zmm0
                            zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                            
                            if ((temp0_1221 & 1) != 0)
                                arg6[0] = zmm1[0]
                        
                        if ((temp0_1221 & 2) != 0)
                            arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg6, 1), arg6, 0xe2)
                            
                            if ((temp0_1221 & 4) != 0)
                                goto label_14026549d
                            
                            goto label_14026542c
                        
                        if ((temp0_1221 & 4) == 0)
                        label_14026542c:
                            
                            if ((temp0_1221 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                        else
                        label_14026549d:
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x32), 0x84)
                            
                            if ((temp0_1221 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                        
                        zmm2 = data_142fc95e0
                        zmm1 = arg5 & zmm2
                        zmm2 = _mm_cmpeq_epi32(zmm1, zmm2)
                        char temp0_50 = _mm_movemask_ps(_mm_slli_epi32(zmm10 & zmm2, 0x1f))
                        var_578 = arg6
                        var_248 = zmm7
                        float var_308[0x4]
                        
                        if (temp0_50 == 0)
                            zmm10 = zx.o(0)
                            arg6 = _mm_cmpeq_epi32(arg6, arg6)
                            zmm3 = var_308
                            zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                            
                            if ((temp0_1221 & 1) != 0)
                                zmm2.d = zmm1[0]
                                var_598 = zmm2
                        else
                            if ((temp0_50 & 1) != 0)
                                zmm3 = var_308
                                zmm3[0] = zx.d(*var_508_1.q)
                                zmm10 = zx.o(0)
                                
                                if ((temp0_50 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(var_508_1, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            else
                                zmm3 = var_308
                                zmm10 = zx.o(0)
                                
                                if ((temp0_50 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(var_508_1, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                            
                            if ((temp0_50 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*var_458_1.q), zmm3, 0x30), 0x84)
                                
                                if ((temp0_50 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(
                                            zx.o(*__pshufd_xmmdq_memdq_immb(var_458_1, 0x4e).q), 
                                            zmm3, 0x20), 
                                        0x24)
                            else if ((temp0_50 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(
                                        zx.o(*__pshufd_xmmdq_memdq_immb(var_458_1, 0x4e).q), zmm3, 
                                        0x20), 
                                    0x24)
                            
                            arg6 = _mm_cmpeq_epi32(arg6, arg6)
                            zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm3, data_143442cd0), data_143442b40))
                            zmm1 = _mm_cmpeq_epi32(zmm1, zmm10) & not.o(zmm2)
                            
                            if ((temp0_1221 & 1) != 0)
                                zmm2.d = zmm1[0]
                                var_598 = zmm2
                        
                        var_308 = zmm3
                        
                        if ((temp0_1221 & 2) != 0)
                            var_598 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm1, var_598, 1), var_598, 0xe2)
                            
                            if ((temp0_1221 & 4) != 0)
                                goto label_1402656fc
                            
                            goto label_14026559e
                        
                        if ((temp0_1221 & 4) == 0)
                        label_14026559e:
                            
                            if ((temp0_1221 & 8) != 0)
                                zmm2 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                        else
                        label_1402656fc:
                            var_598 =
                                _mm_shuffle_ps(var_598, _mm_shuffle_ps(zmm1, var_598, 0x32), 0x84)
                            
                            if ((temp0_1221 & 8) != 0)
                                zmm2 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                    
                    zmm0 = (var_558_2 ^ temp0_1219) & var_518_3
                    zmm3 = zmm0
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm0, 0x1f)) == 0)
                        zmm7 = arg5
                        arg7 = var_548_1
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(var_4c8, data_143442ad0)
                        char temp0_74 = _mm_movemask_ps(_mm_slli_epi32(var_518_3 & zmm0, 0x1f))
                        
                        if (temp0_74 == 0)
                            zmm7 = arg5
                            arg7 = var_548_1
                        else
                            char temp84_1 = temp0_74 & 1
                            
                            if (temp84_1 == 0)
                                arg7 = var_548_1
                                
                                if (temp84_1 != 0)
                                label_14026571c:
                                    zmm1 = var_578
                                    zmm1[0] = 0
                                    var_578 = zmm1
                                    
                                    if (temp84_1 != 0)
                                        goto label_14026563e
                                    
                                    goto label_140265733
                            else
                                var_5a8[0] = zx.o(0).d
                                arg7 = var_548_1
                                
                                if (temp84_1 != 0)
                                    goto label_14026571c
                            
                            bool cond:281_1
                            bool cond:282_1
                            bool cond:296_1
                            bool cond:297_1
                            
                            if (temp84_1 != 0)
                            label_14026563e:
                                var_598[0] = 0
                                char temp108_1 = temp0_74 & 2
                                cond:281_1 = temp108_1 == 0
                                cond:282_1 = temp108_1 != 0
                                cond:296_1 = temp108_1 == 0
                                cond:297_1 = temp108_1 != 0
                                
                                if (temp108_1 != 0)
                                    goto label_14026573f
                                
                                goto label_140265650
                            
                        label_140265733:
                            char temp107_1 = temp0_74 & 2
                            cond:281_1 = temp107_1 == 0
                            cond:282_1 = temp107_1 != 0
                            cond:296_1 = temp107_1 == 0
                            cond:297_1 = temp107_1 != 0
                            
                            if (temp107_1 == 0)
                            label_140265650:
                                
                                if (not(cond:281_1))
                                label_140265659:
                                    zmm2 = var_578
                                    var_578 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm2, 0), zmm2, 0xe2)
                                    
                                    if (cond:297_1)
                                        goto label_140265760
                                    
                                    goto label_140265671
                            else
                            label_14026573f:
                                zmm2 = var_5a8
                                var_5a8 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm2, 0), zmm2, 0xe2)
                                
                                if (cond:282_1)
                                    goto label_140265659
                            
                            bool cond:324_1
                            bool cond:325_1
                            bool cond:337_1
                            bool cond:338_1
                            
                            if (not(cond:296_1))
                            label_140265760:
                                zmm2 = var_598
                                var_598 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm2, 0), zmm2, 0xe2)
                                char temp125_1 = temp0_74 & 4
                                cond:324_1 = temp125_1 == 0
                                cond:325_1 = temp125_1 != 0
                                cond:337_1 = temp125_1 == 0
                                cond:338_1 = temp125_1 != 0
                                
                                if (temp125_1 != 0)
                                    goto label_14026567d
                                
                                goto label_14026577b
                            
                        label_140265671:
                            char temp124_1 = temp0_74 & 4
                            cond:324_1 = temp124_1 == 0
                            cond:325_1 = temp124_1 != 0
                            cond:337_1 = temp124_1 == 0
                            cond:338_1 = temp124_1 != 0
                            
                            if (temp124_1 == 0)
                            label_14026577b:
                                
                                if (not(cond:324_1))
                                label_140265784:
                                    zmm2 = var_578
                                    var_578 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(0), zmm2, 0x30), 0x84)
                                    
                                    if (cond:338_1)
                                        goto label_14026569e
                                    
                                    goto label_14026579c
                            else
                            label_14026567d:
                                zmm2 = var_5a8
                                var_5a8 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x30), 0x84)
                                
                                if (cond:325_1)
                                    goto label_140265784
                            
                            bool cond:353_1
                            bool cond:362_1
                            bool cond:363_1
                            bool cond:354_1
                            
                            if (cond:337_1)
                            label_14026579c:
                                char temp132_1 = temp0_74 & 8
                                cond:353_1 = temp132_1 == 0
                                cond:354_1 = temp132_1 != 0
                                cond:362_1 = temp132_1 == 0
                                cond:363_1 = temp132_1 == 0
                                
                                if (temp132_1 != 0)
                                label_1402657a8:
                                    zmm2 = var_5a8
                                    var_5a8 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                                    
                                    if (cond:354_1)
                                        goto label_1402656c2
                                    
                                    goto label_1402657c0
                            else
                            label_14026569e:
                                zmm2 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x30), 0x84)
                                char temp133_1 = temp0_74 & 8
                                cond:353_1 = temp133_1 == 0
                                cond:354_1 = temp133_1 != 0
                                cond:362_1 = temp133_1 == 0
                                cond:363_1 = temp133_1 == 0
                                
                                if (temp133_1 != 0)
                                    goto label_1402657a8
                            
                            if (cond:353_1)
                            label_1402657c0:
                                zmm7 = arg5
                                
                                if (not(cond:362_1))
                                    zmm2 = var_598
                                    var_598 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                            else
                            label_1402656c2:
                                zmm2 = var_578
                                var_578 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                                zmm7 = arg5
                                
                                if (not(cond:363_1))
                                    zmm2 = var_598
                                    var_598 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                        
                        char temp0_96 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm3), 0x1f))
                        
                        if (temp0_96 != 0)
                            char temp98_1 = temp0_96 & 1
                            
                            if (temp98_1 != 0)
                                zmm0.d = 0
                                var_5a8 = zmm0
                                
                                if (temp98_1 != 0)
                                    goto label_1402658ec
                            else if (temp98_1 != 0)
                            label_1402658ec:
                                zmm0.d = 0
                                var_578 = zmm0
                                
                                if (temp98_1 != 0)
                                    goto label_14026583d
                                
                                goto label_1402658fb
                            
                            bool cond:294_1
                            bool cond:295_1
                            bool cond:312_1
                            bool cond:313_1
                            
                            if (temp98_1 != 0)
                            label_14026583d:
                                zmm0.d = 0
                                var_598 = zmm0
                                char temp117_1 = temp0_96 & 2
                                cond:294_1 = temp117_1 == 0
                                cond:295_1 = temp117_1 != 0
                                cond:312_1 = temp117_1 == 0
                                cond:313_1 = temp117_1 != 0
                                
                                if (temp117_1 != 0)
                                    goto label_140265914
                                
                                goto label_14026584f
                            
                        label_1402658fb:
                            char temp116_1 = temp0_96 & 2
                            cond:294_1 = temp116_1 == 0
                            cond:295_1 = temp116_1 != 0
                            cond:312_1 = temp116_1 == 0
                            cond:313_1 = temp116_1 != 0
                            
                            if (temp116_1 == 0)
                            label_14026584f:
                                
                                if (not(cond:294_1))
                                label_140265858:
                                    zmm1 = var_578
                                    var_578 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm1, 0), zmm1, 0xe2)
                                    
                                    if (cond:313_1)
                                        goto label_140265935
                                    
                                    goto label_140265870
                            else
                            label_140265914:
                                var_5a8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), var_5a8, 0), 
                                    var_5a8, 0xe2)
                                
                                if (cond:295_1)
                                    goto label_140265858
                            
                            bool cond:335_1
                            bool cond:336_1
                            bool cond:347_1
                            bool cond:348_1
                            
                            if (not(cond:312_1))
                            label_140265935:
                                var_598 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), var_598, 0), 
                                    var_598, 0xe2)
                                char temp131_1 = temp0_96 & 4
                                cond:335_1 = temp131_1 == 0
                                cond:336_1 = temp131_1 != 0
                                cond:347_1 = temp131_1 == 0
                                cond:348_1 = temp131_1 != 0
                                
                                if (temp131_1 != 0)
                                    goto label_140265889
                                
                                goto label_140265943
                            
                        label_140265870:
                            char temp130_1 = temp0_96 & 4
                            cond:335_1 = temp130_1 == 0
                            cond:336_1 = temp130_1 != 0
                            cond:347_1 = temp130_1 == 0
                            cond:348_1 = temp130_1 != 0
                            
                            if (temp130_1 == 0)
                            label_140265943:
                                
                                if (not(cond:335_1))
                                label_14026594c:
                                    zmm1 = var_578
                                    var_578 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(0), zmm1, 0x30), 0x84)
                                    
                                    if (cond:348_1)
                                        goto label_1402658aa
                                    
                                    goto label_140265964
                            else
                            label_140265889:
                                var_5a8 = _mm_shuffle_ps(var_5a8, 
                                    _mm_shuffle_ps(zx.o(0), var_5a8, 0x30), 0x84)
                                
                                if (cond:336_1)
                                    goto label_14026594c
                            
                            bool cond:360_1
                            bool cond:361_1
                            bool cond:366_1
                            bool cond:367_1
                            
                            if (not(cond:347_1))
                            label_1402658aa:
                                var_598 = _mm_shuffle_ps(var_598, 
                                    _mm_shuffle_ps(zx.o(0), var_598, 0x30), 0x84)
                                char temp137_1 = temp0_96 & 8
                                cond:360_1 = temp137_1 == 0
                                cond:361_1 = temp137_1 != 0
                                cond:366_1 = temp137_1 == 0
                                cond:367_1 = temp137_1 == 0
                                
                                if (temp137_1 != 0)
                                    goto label_14026597d
                                
                                goto label_1402658b8
                            
                        label_140265964:
                            char temp136_1 = temp0_96 & 8
                            cond:360_1 = temp136_1 == 0
                            cond:361_1 = temp136_1 != 0
                            cond:366_1 = temp136_1 == 0
                            cond:367_1 = temp136_1 == 0
                            
                            if (temp136_1 != 0)
                            label_14026597d:
                                var_5a8 = _mm_shuffle_ps(var_5a8, 
                                    _mm_shuffle_ps(zx.o(0), var_5a8, 0x20), 0x24)
                                
                                if (cond:361_1)
                                    goto label_1402658c1
                                
                                goto label_140265988
                            
                        label_1402658b8:
                            
                            if (cond:360_1)
                            label_140265988:
                                
                                if (not(cond:366_1))
                                    var_598 = _mm_shuffle_ps(var_598, 
                                        _mm_shuffle_ps(zx.o(0), var_598, 0x20), 0x24)
                            else
                            label_1402658c1:
                                zmm1 = var_578
                                var_578 =
                                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(0), zmm1, 0x20), 0x24)
                                
                                if (not(cond:367_1))
                                    var_598 = _mm_shuffle_ps(var_598, 
                                        _mm_shuffle_ps(zx.o(0), var_598, 0x20), 0x24)
                
                float temp0_1247[0x4] = _mm_sub_ps(var_5a8, zmm14)
                float temp0_1248[0x4] = _mm_sub_ps(var_578, arg8)
                float temp0_1249[0x4] = _mm_mul_ps(temp0_1247, var_468_1)
                zmm1 = zmm14
                char temp38_1 = temp0_896 & 1
                
                if (temp38_1 != 0)
                    zmm1 = zmm14
                    zmm1[0] = zmm1[0] + temp0_1249[0]
                
                float temp0_1250[0x4] = _mm_sub_ps(var_598, zmm11)
                float temp0_1251[0x4] = _mm_mul_ps(temp0_1248, var_468_1)
                zmm2 = arg8
                
                if (temp38_1 != 0)
                    zmm2.d = arg8.d f+ temp0_1251[0]
                    zmm4 = _mm_mul_ps(temp0_1250, var_468_1)
                    zmm0 = zmm11
                    
                    if (temp38_1 != 0)
                        goto label_14026aa01
                    
                    goto label_14026a7c8
                
                zmm4 = _mm_mul_ps(temp0_1250, var_468_1)
                zmm0 = zmm11
                bool cond:135_1
                bool cond:136_1
                bool cond:153_1
                bool cond:154_1
                
                if (temp38_1 != 0)
                label_14026aa01:
                    zmm0.d = zmm11.d f+ zmm4[0]
                    zmm14 = _mm_add_ps(zmm14, temp0_1249)
                    char temp59_1 = temp0_896 & 2
                    cond:135_1 = temp59_1 == 0
                    cond:136_1 = temp59_1 != 0
                    cond:153_1 = temp59_1 == 0
                    cond:154_1 = temp59_1 != 0
                    
                    if (temp59_1 != 0)
                        goto label_14026a7e1
                    
                    goto label_14026aa12
                
            label_14026a7c8:
                zmm14 = _mm_add_ps(zmm14, temp0_1249)
                char temp58_1 = temp0_896 & 2
                cond:135_1 = temp58_1 == 0
                cond:136_1 = temp58_1 != 0
                cond:153_1 = temp58_1 == 0
                cond:154_1 = temp58_1 != 0
                
                if (temp58_1 != 0)
                label_14026a7e1:
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm1, 1), zmm1, 0xe2)
                    arg5 = zmm7
                    arg8 = _mm_add_ps(arg8, temp0_1251)
                    
                    if (cond:136_1)
                        goto label_14026aa2c
                    
                    goto label_14026a7f2
                
            label_14026aa12:
                arg5 = zmm7
                arg8 = _mm_add_ps(arg8, temp0_1251)
                
                if (not(cond:135_1))
                label_14026aa2c:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm2, 1), zmm2, 0xe2)
                    zmm11 = _mm_add_ps(zmm11, zmm4)
                    
                    if (cond:154_1)
                        goto label_14026a808
                    
                    goto label_14026aa39
                
            label_14026a7f2:
                zmm11 = _mm_add_ps(zmm11, zmm4)
                bool cond:190_1
                bool cond:191_1
                bool cond:214_1
                bool cond:215_1
                
                if (not(cond:153_1))
                label_14026a808:
                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm0, 1), zmm0, 0xe2)
                    char temp83_1 = temp0_896 & 4
                    cond:190_1 = temp83_1 == 0
                    cond:191_1 = temp83_1 != 0
                    cond:214_1 = temp83_1 == 0
                    cond:215_1 = temp83_1 != 0
                    
                    if (temp83_1 != 0)
                        goto label_14026aa4a
                    
                    goto label_14026a814
                
            label_14026aa39:
                char temp82_1 = temp0_896 & 4
                cond:190_1 = temp82_1 == 0
                cond:191_1 = temp82_1 != 0
                cond:214_1 = temp82_1 == 0
                cond:215_1 = temp82_1 != 0
                
                if (temp82_1 == 0)
                label_14026a814:
                    
                    if (not(cond:190_1))
                    label_14026a822:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg8, zmm2, 0x32), 0x84)
                        
                        if (cond:215_1)
                            goto label_14026aa62
                        
                        goto label_14026a82c
                else
                label_14026aa4a:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm14, zmm1, 0x32), 0x84)
                    
                    if (cond:191_1)
                        goto label_14026a822
                
                bool cond:255_1
                bool cond:256_1
                bool cond:279_1
                bool cond:280_1
                
                if (not(cond:214_1))
                label_14026aa62:
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x32), 0x84)
                    char temp106_1 = temp0_896 & 8
                    cond:255_1 = temp106_1 == 0
                    cond:256_1 = temp106_1 != 0
                    cond:279_1 = temp106_1 == 0
                    cond:280_1 = temp106_1 != 0
                    
                    if (temp106_1 != 0)
                        goto label_14026a83f
                    
                    goto label_14026aa6f
                
            label_14026a82c:
                char temp105_1 = temp0_896 & 8
                cond:255_1 = temp105_1 == 0
                cond:256_1 = temp105_1 != 0
                cond:279_1 = temp105_1 == 0
                cond:280_1 = temp105_1 != 0
                
                if (temp105_1 != 0)
                label_14026a83f:
                    zmm14 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm14, zmm1, 0x23), 0x24)
                    
                    if (cond:256_1)
                        goto label_14026aa83
                    
                    goto label_14026a849
                
            label_14026aa6f:
                zmm14 = zmm1
                
                if (cond:255_1)
                label_14026a849:
                    arg8 = zmm2
                    
                    if (not(cond:279_1))
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x23), 0x24)
                else
                label_14026aa83:
                    arg8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg8, zmm2, 0x23), 0x24)
                    
                    if (cond:280_1)
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x23), 0x24)
                
                zmm11 = zmm0
        
        uint32_t temp0_1266 = _mm_movemask_ps(zmm15 ^ arg6)
        var_548 = arg7
        
        if (temp0_1266 == 0)
            var_5b8 = zmm11
            var_568 = zmm14
            arg7 = arg5
        else
            char rcx_46 = temp0_1266.b
            char temp1_1 = rcx_46 & 1
            
            if (temp1_1 != 0)
                zmm14[0] = 0
                
                if (temp1_1 != 0)
                    goto label_14026a939
            else if (temp1_1 != 0)
            label_14026a939:
                arg8[0] = 0
                
                if (temp1_1 != 0)
                    goto label_14026a897
                
                goto label_14026a944
            
            bool cond:21_1
            bool cond:22_1
            bool cond:28_1
            bool cond:29_1
            
            if (temp1_1 != 0)
            label_14026a897:
                zmm11[0] = 0
                char temp7_1 = rcx_46 & 2
                cond:21_1 = temp7_1 == 0
                cond:22_1 = temp7_1 != 0
                cond:28_1 = temp7_1 == 0
                cond:29_1 = temp7_1 != 0
                
                if (temp7_1 != 0)
                    goto label_14026a95a
                
                goto label_14026a8a5
            
        label_14026a944:
            char temp6_1 = rcx_46 & 2
            cond:21_1 = temp6_1 == 0
            cond:22_1 = temp6_1 != 0
            cond:28_1 = temp6_1 == 0
            cond:29_1 = temp6_1 != 0
            
            if (temp6_1 == 0)
            label_14026a8a5:
                
                if (not(cond:21_1))
                label_14026a8b8:
                    arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                    
                    if (cond:29_1)
                        goto label_14026a977
                    
                    goto label_14026a8c2
            else
            label_14026a95a:
                zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm14, 0), zmm14, 0xe2)
                
                if (cond:22_1)
                    goto label_14026a8b8
            
            bool cond:39_1
            bool cond:40_1
            bool cond:51_1
            bool cond:52_1
            
            if (not(cond:28_1))
            label_14026a977:
                zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm11, 0), zmm11, 0xe2)
                char temp13_1 = rcx_46 & 4
                cond:39_1 = temp13_1 == 0
                cond:40_1 = temp13_1 != 0
                cond:51_1 = temp13_1 == 0
                cond:52_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                    goto label_14026a8d3
                
                goto label_14026a984
            
        label_14026a8c2:
            char temp12_1 = rcx_46 & 4
            cond:39_1 = temp12_1 == 0
            cond:40_1 = temp12_1 != 0
            cond:51_1 = temp12_1 == 0
            cond:52_1 = temp12_1 != 0
            
            if (temp12_1 == 0)
            label_14026a984:
                
                if (not(cond:39_1))
                label_14026a992:
                    arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                    
                    if (cond:52_1)
                        goto label_14026a8ec
                    
                    goto label_14026a99d
            else
            label_14026a8d3:
                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x30), 0x84)
                
                if (cond:40_1)
                    goto label_14026a992
            
            bool cond:65_1
            bool cond:84_1
            bool cond:85_1
            bool cond:66_1
            
            if (cond:51_1)
            label_14026a99d:
                char temp24_1 = rcx_46 & 8
                cond:65_1 = temp24_1 == 0
                cond:66_1 = temp24_1 != 0
                cond:84_1 = temp24_1 == 0
                cond:85_1 = temp24_1 != 0
                
                if (temp24_1 != 0)
                label_14026a9ae:
                    zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x20), 0x24)
                    
                    if (cond:66_1)
                        goto label_14026a908
                    
                    goto label_14026a9b9
            else
            label_14026a8ec:
                zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zx.o(0), zmm11, 0x30), 0x84)
                char temp25_1 = rcx_46 & 8
                cond:65_1 = temp25_1 == 0
                cond:66_1 = temp25_1 != 0
                cond:84_1 = temp25_1 == 0
                cond:85_1 = temp25_1 != 0
                
                if (temp25_1 != 0)
                    goto label_14026a9ae
            
            if (cond:65_1)
            label_14026a9b9:
                var_568 = zmm14
                
                if (cond:84_1)
                    var_5b8 = zmm11
                    arg7 = arg5
                else
                    arg7 = arg5
                    var_5b8 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
            else
            label_14026a908:
                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                var_568 = zmm14
                
                if (cond:85_1)
                    arg7 = arg5
                    var_5b8 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                else
                    var_5b8 = zmm11
                    arg7 = arg5
        
        zmm4 = var_5b8
        zmm3 = zx.o(zmm4[0].q)
        zmm4 = _mm_unpackhi_epi32(zmm4, zmm10[0].q)
        zmm7 = var_568
        zmm2 = _mm_unpacklo_ps(zmm7, arg8[0].q)
        zmm0 = _mm_unpackhi_ps(zmm7, arg8)
        arg5 = _mm_shuffle_ps(zmm2, zmm3, 0x84)
        float var_128_1[0x4] = arg5
        zmm2 = _mm_shuffle_ps(zmm2, zmm3, 0xde)
        uint128_t var_118_1 = zmm2
        zmm1 = zmm0[0].q | zmm4[0].q << 0x40
        float var_108_1[0x4] = zmm1
        zmm4[0].q = zmm0 u>> 0x40
        float var_f8_1[0x4] = zmm4
        arg6 = var_4b8_1
        int64_t rax_265 = sx.q(arg6[0])
        zmm4 = _mm_shuffle_epi32(arg5, 0x4e)
        int64_t rax_267 = rax_265 * 0x30
        *(arg1 + rax_267 + 0x10) = zmm7[0]
        *(arg1 + rax_267 + 0x14) = arg8[0]
        *(arg1 + rax_267 + 0x18) = zmm4[0]
        *(arg1 + rax_267 + 0x1c) = 0
        int64_t rax_269 = sx.q(_mm_shuffle_epi32(arg6, 0x4e)[0])
        float temp0_1304[0x4] = _mm_shuffle_ps(arg8, zmm3, 0xd5)
        zmm3 = _mm_shuffle_epi32(zmm2, 0x4e)
        int64_t rax_271 = rax_269 * 0x30
        *(arg1 + rax_271 + 0x10) = zmm2.d
        *(arg1 + rax_271 + 0x14) = temp0_1304[0]
        *(arg1 + rax_271 + 0x18) = zmm3[0]
        *(arg1 + rax_271 + 0x1c) = 0
        int64_t rax_273 = sx.q(var_398_1[0])
        zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
        float temp0_1307[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
        int64_t rax_275 = rax_273 * 0x30
        *(arg1 + rax_275 + 0x10) = zmm0.d
        *(arg1 + rax_275 + 0x14) = temp0_1307[0]
        *(arg1 + rax_275 + 0x18) = zmm2.d
        *(arg1 + rax_275 + 0x1c) = 0
        *(arg1 + sx.q(_mm_shuffle_epi32(var_398_1, 0x4e).d) * 0x30 + 0x10) = var_f8_1
        r15 = zx.q(r15.d + 4)
        arg6 = _mm_cmpeq_epi32(arg6, arg6)
    while (r15.d s< i_5)
    
    result = zx.q(arg12)
    
    if (r15.d s< result.d)
        goto label_14026ac1d
return result
