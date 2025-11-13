// 函数: sub_140243460
// 地址: 0x140243460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float var_78[0x4] = arg8
int32_t zmm12[0x4]
int32_t var_88[0x4] = zmm12
int32_t zmm11[0x4]
int32_t var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_b8[0x4] = zmm9
float var_c8[0x4] = arg7
uint32_t zmm7[0x4]
uint32_t var_d8[0x4] = zmm7
int32_t var_e8[0x4] = arg6
uint128_t zmm2 = arg10
int32_t i_5 = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
int64_t result
int32_t var_5b8[0x4]
uint64_t r15
uint128_t zmm0
float zmm1[0x4]
uint128_t zmm3
float zmm4[0x4]

if (i_5 s<= 0)
    r15 = 0
    result = zx.q(arg12)
    
    if (0 s< result.d)
    label_1402490bd:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15.d), 0), data_142e11d00)
        zmm3 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm3
        int64_t rbp_16 = sx.q(zmm0.d)
        int64_t rbx_30 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        int64_t rdi_11 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        int64_t rcx_35 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        int32_t var_468_3[0x4] = *(arg2 + rcx_35)
        zmm7 = zx.o(*(arg2 + rdi_11))
        zmm10 = zx.o(*(arg2 + rbp_16))
        int32_t var_448_4[0x4] = *(arg2 + rbx_30)
        zmm0 = data_142fc95e0 & zmm3
        uint64_t rcx_36 = zx.q(zmm0.d)
        uint64_t rdx_2 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        uint64_t rdi_12 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + arg2 + rcx_35))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(rdi_12 + arg2 + rdi_11)), zmm0.q)
        zmm0 = _mm_slli_epi32(
            _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(rcx_36 + arg2 + rbp_16)), 
                    zx.q(*(rdx_2 + arg2 + rbx_30))), 
                zmm1[0].q), 
            3) & zmm3
        int64_t rax_286 = sx.q(zmm0.d)
        int64_t rcx_38 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        int64_t rdx_4 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        zmm0 = zx.o(*(arg3 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rdx_4)), zmm0.q)
        zmm14 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + rax_286)), zx.q(*(arg3 + rcx_38))), zmm1[0].q)
        arg5 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(arg5, arg5), zmm14)
        float var_418_3[0x4] = arg5
        arg5 &= not.o(zmm3)
        
        if (_mm_movemask_ps(arg5) != 0)
            uint32_t var_558_3[0x4] = zmm7
            uint128_t var_368_1 = zmm3
            arg7 = zx.o(0)
            int32_t temp0_1323[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm14)
            zmm2 = _mm_shuffle_epi32(zmm14, 0x4e)
            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
            zmm4 = _mm_add_epi64(4, zx.o(arg4))
            zmm0 = zmm14 & arg5
            int64_t rax_289 = sx.q(zmm0.d)
            int64_t rcx_40 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
            int64_t rdx_6 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
            zmm0 = zx.o(*(arg4 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)))
            zmm3 = _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_6)), zmm0.q)
            int32_t temp0_1332[0x4] = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_289)), zx.q(*(arg4 + rcx_40))), zmm3.q)
            zmm7 = _mm_srli_epi32(temp0_1332, 0x18) & arg5
            arg6 = _mm_srli_epi32(temp0_1332, 0x1c) & arg5
            zmm0 = _mm_slli_epi32(arg6, 2) & arg5
            uint64_t rax_290 = zx.q(zmm0.d)
            uint64_t rdx_7 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
            uint64_t rbp_21 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
            zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + &data_143442cf0))
            zmm3 = _mm_unpacklo_epi32(zx.o(*(rbp_21 + &data_143442cf0)), zmm0.q)
            zmm15 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(rax_290 + &data_143442cf0)), 
                    zx.q(*(rdx_7 + &data_143442cf0))), 
                zmm3.q)
            arg8 = zmm7
            zmm3 = data_143442c00 & zmm7
            uint128_t var_598_1 = zmm3
            zmm0 = (_mm_slli_epi32(arg6, 3) | zmm3) & arg5
            uint32_t rax_292 = zx.d(*(zx.q(zmm0.d) + &data_143442d10))
            uint64_t rdx_8 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
            uint32_t rbp_23 = zx.d(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + &data_143442d10))
            uint32_t rbx_36 =
                zx.d(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + &data_143442d10)) << 8 | rbp_23
            zmm3 = _mm_unpacklo_epi16(
                _mm_unpacklo_epi8(
                    _mm_insert_epi16(zx.o(zx.d(*(rdx_8 + &data_143442d10)) << 8) | zx.o(rax_292), 
                        rbx_36, 1), 
                    arg7[0].q), 
                arg7[0].q)
            int32_t var_488_2[0x4] = arg6
            zmm7 = _mm_cmpeq_epi32(data_142fc95c0, arg6)
            zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm7 & not.o(arg5), 0x1f), 0x1f)
            arg6 = zx.o(0)
            
            if (_mm_movemask_ps(zmm0) != 0)
                arg6 = zmm0 & zmm3
            
            zmm14 = _mm_unpacklo_epi32(zmm14, temp0_1323[0].q)
            zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
            zmm11 = _mm_shuffle_epi32(zmm4, 0x44)
            zmm12 = arg5 & temp0_1332 & data_143442be0
            zmm15 &= arg5
            zmm0 = data_142fc95e0 & arg5
            int32_t var_588_5[0x4] = arg5
            arg5 = _mm_srai_epi32(_mm_slli_epi32(arg5 & zmm7, 0x1f), 0x1f)
            char temp0_1358 = _mm_movemask_ps(arg5)
            uint32_t var_568_3[0x4] = zmm7
            float var_348_2[0x4] = arg5
            
            if (temp0_1358 == 0)
                zmm3 = zx.o(0)
            else
                zmm3 &= arg5
                arg6 = _mm_srli_epi32(arg5, 0x1f) | (arg5 & not.o(arg6))
            
            zmm3 = _mm_madd_epi16(zmm3, zmm0)
            uint128_t var_398_2 = zmm2
            arg5 = _mm_add_epi64(zmm11, zmm2)
            zmm11 = _mm_add_epi64(zmm11, zmm14)
            arg8 &= data_143442bf0
            zmm0 = _mm_shuffle_epi32(arg6, 0xf5)
            zmm9 = var_588_5
            int32_t var_4b8_2[0x4] = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(arg6, zmm15), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm15, 0xf5), zmm0), 0xe8).q) & zmm9
            zmm3 &= zmm9
            zmm2 = __pcmpgtd_xmmdq_memdq(zmm12, data_142d3f5b0) & zmm9
            zmm15 = zx.o(0)
            arg6 = arg8
            arg8 = arg5
            zmm7 = zx.o(0)
            int32_t var_518_4[0x4] = zmm11
            int32_t var_538_2[0x4] = arg5
            uint32_t var_5a8_1[0x4] = arg6
            uint32_t var_438_2[0x4] = zmm14
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) != 0)
                uint128_t var_548_2 = zmm3
                arg7 = zx.o(0)
                int32_t temp0_1373[0x4] = _mm_cmpeq_epi32(data_142fc95f0 & arg6, arg7)
                zmm4 = _mm_srai_epi32(_mm_slli_epi32(temp0_1373 & zmm2, 0x1f), 0x1f)
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
                            float temp0_1379[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
                            zmm0 = _mm_mul_ps(_mm_cvtepi32_ps(arg5), temp0_1379)
                            zmm1 = data_142d3f780
                            zmm3 = __addps_xmmps_memps(_mm_and_ps(data_142d3f770, zmm0), 
                                data_142d3f740)
                            zmm1 = _mm_and_ps(zmm1, zmm0)
                            zmm3 = __addps_xmmps_memps(zmm3, data_1434427a0) ^ zmm1
                            zmm7 = zx.o(0)
                            float temp0_1388[0x4] = _mm_add_ps(
                                __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm0, zmm3, 1), data_142d3f7e0), 
                                zmm3)
                            zmm3 = _mm_cvttps_epi32(temp0_1388)
                            arg7 = _mm_cmpgt_epi32(zmm3, arg5)
                            arg7 = ((arg7 & not.o(zmm3)) | (arg5 & arg7)) & zmm4
                            
                            if (arg11 != 1)
                                zmm0 = _mm_sub_ps(zmm0, temp0_1388)
                                zmm7 = zmm0
                            
                            zmm1 = _mm_sub_epi32(arg7, _mm_cmpeq_epi32(zmm0, zmm0))
                            zmm15 = _mm_cmpgt_epi32(arg5, zmm1)
                            zmm15 = ((zmm15 & not.o(arg5)) | (zmm1 & zmm15)) & zmm4
                            zmm1 = arg10
                            zmm9 = var_588_5
                    
                    zmm7 &= zmm4
                
                int32_t temp0_1396[0x4] =
                    _mm_srai_epi32(_mm_slli_epi32(temp0_1373 & not.o(zmm2), 0x1f), 0x1f)
                
                if (_mm_movemask_ps(temp0_1396) != 0)
                    zmm9 = zmm12
                    zmm2 = zmm1
                    zmm1 = _mm_cmpgt_epi32(data_143442ce0, data_142d3f780 ^ zmm12)
                    int32_t rax_297
                    rax_297.b = 0f f>= zmm2.d
                    zmm2 = _mm_shuffle_epi32(zx.o(neg.d(rax_297)), 0) | zmm1
                    zmm0 = zmm2 & temp0_1396
                    uint32_t var_498_1[0x4] = zmm7
                    float var_528_2[0x4]
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        var_528_2 = arg7
                    else
                        zmm1 = zmm0 & not.o(arg7)
                        zmm0 &= not.o(zmm15)
                        var_528_2 = zmm1
                        zmm15 = zmm0
                    
                    arg5 = arg10
                    zmm4 = zx.o(0)
                    zmm14 = zmm2 & not.o(temp0_1396)
                    uint32_t temp0_1401 = _mm_movemask_ps(zmm14)
                    
                    if (temp0_1401 == 0)
                        arg5 = var_498_1
                        arg7 = var_528_2
                        zmm9 = var_588_5
                    else
                        int32_t temp0_1403[0x4] = _mm_add_epi32(zmm9, _mm_cmpeq_epi32(zmm0, zmm0))
                        
                        if (arg5[0] >= 1f)
                            arg6 = temp0_1403 & zmm14
                            zmm15 = (zmm14 & not.o(zmm15)) | arg6
                            arg7 = (zmm14 & not.o(var_528_2)) | arg6
                            arg5 = var_498_1
                            zmm9 = var_588_5
                        else
                            uint32_t var_578_3[0x4] = zmm2
                            zmm0 = _mm_shuffle_epi32(zmm9, 0xf5)
                            arg7 = arg5
                            zmm2 = var_4b8_2
                            zmm1 = _mm_mul_epu32(_mm_shuffle_epi32(zmm2, 0xf5), zmm0)
                            zmm0 = _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm9), 0xe8), 
                                _mm_shuffle_epi32(zmm1, 0xe8)[0].q)
                            zmm1 = var_548_2
                            arg5 = _mm_unpacklo_epi32(zmm1, 0)
                            zmm7 = _mm_unpackhi_epi32(zmm1, 0)
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
                            float temp0_1426[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(temp0_1403), zmm0)
                            zmm2.d = zmm2.d f* arg7[0]
                            uint128_t var_428_2 = zmm2
                            int32_t rax_301 = int.d(zmm2.d)
                            int32_t rbp_24 = 0
                            
                            if (rax_301 s>= 0)
                                rbp_24 = rax_301
                            
                            if (rbp_24 s> arg9 - 2)
                                rbp_24 = arg9 - 2
                            
                            zmm1 = _mm_cvttps_epi32(temp0_1426)
                            zmm2 = _mm_cmpgt_epi32(zmm1, zx.o(0)) & zmm1
                            int32_t temp0_1429[0x4] = _mm_cmpgt_epi32(temp0_1403, zmm2)
                            zmm12 = (temp0_1429 & not.o(temp0_1403)) | (zmm2 & temp0_1429)
                            float var_4d8_2[0x4] = zmm15
                            int32_t var_4f8_4[0x4] = zmm9
                            float var_508_4[0x4] = arg5
                            
                            if (arg9 s< 0x100)
                                zmm2 = _mm_shuffle_epi32(zmm12, 0x4e)
                                uint128_t temp0_1476 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm1 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm12, _mm_cmpgt_epi32(zx.o(0), zmm12).q), 
                                    arg5)
                                char rdx_11 = temp0_1401.b
                                
                                if ((rdx_11 & 1) == 0)
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_1476.q)
                                    
                                    if ((rdx_11 & 2) != 0)
                                        goto label_140249e1c
                                    
                                    goto label_140249b66
                                
                                arg5 = zx.o(*zmm1[0].q)
                                zmm2 = _mm_unpacklo_epi32(zmm2, temp0_1476.q)
                                
                                if ((rdx_11 & 2) != 0)
                                label_140249e1c:
                                    arg5 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            arg5, 0), 
                                        arg5, 0xe2)
                                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_5b8)
                                    
                                    if ((rdx_11 & 4) == 0)
                                        goto label_140249b74
                                    
                                    goto label_140249e3d
                                
                            label_140249b66:
                                zmm2 = __paddq_xmmdq_memdq(zmm2, var_5b8)
                                
                                if ((rdx_11 & 4) != 0)
                                label_140249e3d:
                                    arg5 = _mm_shuffle_ps(arg5, 
                                        _mm_shuffle_ps(zx.o(*zmm2.q), arg5, 0x30), 0x84)
                                    
                                    if ((rdx_11 & 8) != 0)
                                        arg5 = _mm_shuffle_ps(arg5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                arg5, 0x20), 
                                            0x24)
                                else
                                label_140249b74:
                                    
                                    if ((rdx_11 & 8) != 0)
                                        arg5 = _mm_shuffle_ps(arg5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                arg5, 0x20), 
                                            0x24)
                                
                                arg5 = __andps_xmmxud_memxud(arg5, data_142ed6810)
                                zmm0 = zx.o(rbp_24)
                                arg7 = _mm_shuffle_epi32(zmm0, 0)
                                arg5 = _mm_cmpgt_epi32(arg5, arg7)
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                uint128_t var_478_4 = arg5 ^ zmm0
                                zmm4 = zmm12
                                
                                if (_mm_movemask_ps(arg5 & not.o(zmm14)) != 0)
                                    zmm15 = (arg5 & not.o(temp0_1403)) | (arg5 & zmm12)
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
                                            char temp0_1506 = _mm_movemask_ps(zmm3)
                                            
                                            if ((temp0_1506 & 1) == 0)
                                                zmm3 = var_5b8
                                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                                
                                                if ((temp0_1506 & 2) != 0)
                                                    goto label_140249c69
                                                
                                                goto label_140249cdc
                                            
                                            zmm7[0] = zx.d(*zmm0.q)
                                            zmm3 = var_5b8
                                            zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                            
                                            if ((temp0_1506 & 2) != 0)
                                            label_140249c69:
                                                zmm7 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                        zmm7, 0), 
                                                    zmm7, 0xe2)
                                                zmm4 = _mm_add_epi64(zmm4, zmm3)
                                                
                                                if ((temp0_1506 & 4) == 0)
                                                    goto label_140249ce5
                                                
                                                goto label_140249c85
                                            
                                        label_140249cdc:
                                            zmm4 = _mm_add_epi64(zmm4, zmm3)
                                            
                                            if ((temp0_1506 & 4) != 0)
                                            label_140249c85:
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm7, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_1506 & 8) != 0)
                                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                            zmm7, 0x20), 
                                                        0x24)
                                            else
                                            label_140249ce5:
                                                
                                                if ((temp0_1506 & 8) != 0)
                                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                            zmm7, 0x20), 
                                                        0x24)
                                            
                                            zmm1 = _mm_cmpgt_epi32(
                                                __andps_xmmxud_memxud(zmm7, data_142ed6810), arg7)
                                                & arg5
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
                                
                                uint32_t temp0_2556 =
                                    _mm_movemask_ps(_mm_andnot_ps(var_478_4, zmm14))
                                uint32_t i_1
                                int32_t temp0_2558[0x4]
                                
                                if (temp0_2556 != 0)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ var_478_4
                                    zmm4 &= var_478_4
                                    temp0_2558 = _mm_cmpeq_epi32(zmm9, zmm9)
                                    zmm12 = _mm_add_epi32(zmm12, temp0_2558)
                                    arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm1
                                    zmm3 = arg5 & zmm14
                                    i_1 = _mm_movemask_ps(zmm3)
                                
                                if (temp0_2556 == 0 || i_1 == 0)
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
                                        char temp0_2574 = _mm_movemask_ps(zmm3)
                                        
                                        if ((temp0_2574 & 1) == 0)
                                            zmm3 = var_5b8
                                            zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                            
                                            if ((temp0_2574 & 2) != 0)
                                                goto label_14024df56
                                            
                                            goto label_14024dfc7
                                        
                                        zmm7[0] = zx.d(*zmm0.q)
                                        zmm3 = var_5b8
                                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                        
                                        if ((temp0_2574 & 2) != 0)
                                        label_14024df56:
                                            zmm7 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm7, 
                                                    0), 
                                                zmm7, 0xe2)
                                            zmm2 = _mm_add_epi64(zmm2, zmm3)
                                            
                                            if ((temp0_2574 & 4) == 0)
                                                goto label_14024dfd0
                                            
                                            goto label_14024df72
                                        
                                    label_14024dfc7:
                                        zmm2 = _mm_add_epi64(zmm2, zmm3)
                                        
                                        if ((temp0_2574 & 4) != 0)
                                        label_14024df72:
                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                _mm_shuffle_ps(zx.o(*zmm2.q), zmm7, 0x30), 0x84)
                                            
                                            if ((temp0_2574 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        else
                                        label_14024dfd0:
                                            
                                            if ((temp0_2574 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        
                                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm7, arg8), arg7)
                                            & not.o(arg5)
                                        zmm2 = zmm1 & not.o(zmm4)
                                        zmm4 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm1 & zmm14) != i_1)
                                            zmm4 = zmm1 ^ arg5
                                        
                                        zmm2 |= zmm1 & zmm12
                                        zmm12 = _mm_add_epi32(zmm12, temp0_2558)
                                        arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm4
                                        zmm3 = arg5 & zmm14
                                        i_1 = _mm_movemask_ps(zmm3)
                                        zmm4 = zmm2
                                    while (i_1 != 0)
                                
                                zmm3 = (zmm2 & zmm14) | (zmm14 & not.o(var_528_2))
                                float temp0_2586[0x4] = _mm_shuffle_epi32(zmm3, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_2586)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                                arg7 = zmm3
                                zmm0 =
                                    __paddq_xmmdq_memdq(_mm_unpacklo_epi32(zmm3, zmm2.q), var_508_4)
                                
                                if ((rdx_11 & 1) != 0)
                                    zmm2 = zx.o(*zmm0.q)
                                
                                zmm4 = _mm_unpacklo_epi32(temp0_2586, zmm1[0].q)
                                arg8 = var_538_2
                                
                                if ((rdx_11 & 2) == 0)
                                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                    zmm4 = __paddq_xmmdq_memdq(zmm4, var_5b8)
                                    
                                    if ((rdx_11 & 4) != 0)
                                        goto label_14024e25b
                                    
                                    goto label_14024e0fb
                                
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm2, 
                                        0), 
                                    zmm2, 0xe2)
                                zmm2 = zmm0
                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                zmm4 = __paddq_xmmdq_memdq(zmm4, var_5b8)
                                
                                if ((rdx_11 & 4) == 0)
                                label_14024e0fb:
                                    zmm3 ^= zmm14
                                    
                                    if ((rdx_11 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                else
                                label_14024e25b:
                                    zmm0 = _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm2, 0x30)
                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                    zmm3 ^= zmm14
                                    
                                    if ((rdx_11 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                
                                zmm15 = (_mm_sub_epi32(arg7, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm14)
                                    | (zmm15 & zmm3)
                                arg5 = _mm_cmpgt_epi32(var_4f8_4, zmm15) & not.o(zmm14)
                                
                                if (_mm_movemask_ps(arg5) != 0)
                                    zmm15 = (temp0_1403 & arg5) | (arg5 & not.o(zmm15))
                                
                                arg5 = var_498_1
                                zmm9 = var_588_5
                                float temp0_2601[0x4] = _mm_shuffle_epi32(zmm15, 0x4e)
                                zmm0 = _mm_cmpgt_epi32(zx.o(0), temp0_2601)
                                zmm3 =
                                    _mm_unpacklo_epi32(zmm15, _mm_cmpgt_epi32(zx.o(0), zmm15)[0].q)
                                zmm1 = _mm_add_epi64(var_508_4, zmm3)
                                
                                if ((rdx_11 & 1) == 0)
                                    zmm4 = _mm_unpacklo_epi32(temp0_2601, zmm0.q)
                                    
                                    if ((rdx_11 & 2) != 0)
                                        goto label_14024e2a4
                                    
                                    goto label_14024e1c9
                                
                                zmm3 = zx.o(*zmm1[0].q)
                                zmm4 = _mm_unpacklo_epi32(temp0_2601, zmm0.q)
                                
                                if ((rdx_11 & 2) != 0)
                                label_14024e2a4:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                                    zmm3 = zmm0
                                    arg6 = _mm_add_epi64(var_5b8, zmm4)
                                    
                                    if ((rdx_11 & 4) == 0)
                                        goto label_14024e1d6
                                    
                                    goto label_14024e2c4
                                
                            label_14024e1c9:
                                arg6 = _mm_add_epi64(var_5b8, zmm4)
                                
                                if ((rdx_11 & 4) != 0)
                                label_14024e2c4:
                                    zmm0 = _mm_shuffle_ps(zx.o(*arg6[0].q), zmm3, 0x30)
                                    zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                                    
                                    if ((rdx_11 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg6, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                else
                                label_14024e1d6:
                                    
                                    if ((rdx_11 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg6, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm2 = __andps_xmmxud_memxud(zmm2, data_142ed6810)
                                zmm3 = __andps_xmmxud_memxud(zmm3, data_142ed6810)
                                zmm7 = var_578_3 ^ zmm0
                                zmm4 = zx.o(0)
                                
                                if (arg11 != 1)
                                label_14024a1c2:
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
                                char rdx_10 = temp0_1401.b
                                
                                if ((rdx_10 & 1) == 0)
                                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                    
                                    if ((rdx_10 & 2) != 0)
                                        goto label_140249db7
                                    
                                    goto label_140249896
                                
                                zmm3 = zx.o(*zmm4[0].q)
                                zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                
                                if ((rdx_10 & 2) != 0)
                                label_140249db7:
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_5b8)
                                    
                                    if ((rdx_10 & 4) == 0)
                                        goto label_1402498a4
                                    
                                    goto label_140249dd8
                                
                            label_140249896:
                                zmm2 = __paddq_xmmdq_memdq(zmm2, var_5b8)
                                
                                if ((rdx_10 & 4) != 0)
                                label_140249dd8:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*zmm2.q), zmm3, 0x30), 0x84)
                                    
                                    if ((rdx_10 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                else
                                label_1402498a4:
                                    
                                    if ((rdx_10 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                
                                zmm3 = __andps_xmmxud_memxud(zmm3, data_143442cd0)
                                zmm0 = zx.o(rbp_24)
                                float temp0_1442[0x4] = _mm_shuffle_epi32(zmm0, 0)
                                zmm3 = _mm_cmpgt_epi32(zmm3, temp0_1442)
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                uint128_t var_478_3 = zmm3 ^ zmm0
                                zmm4 = zmm12
                                
                                if (_mm_movemask_ps(zmm3 & not.o(zmm14)) != 0)
                                    zmm7 = (zmm3 & not.o(temp0_1403)) | (zmm3 & zmm12)
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
                                            char temp0_1463 = _mm_movemask_ps(arg5)
                                            
                                            if ((temp0_1463 & 1) == 0)
                                                arg5 = var_5b8
                                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                                
                                                if ((temp0_1463 & 2) != 0)
                                                    goto label_140249999
                                                
                                                goto label_140249a1f
                                            
                                            zmm15[0] = zx.o(*zmm2.q)[0]
                                            arg5 = var_5b8
                                            zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                            
                                            if ((temp0_1463 & 2) != 0)
                                            label_140249999:
                                                zmm15 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                                        zmm15, 0), 
                                                    zmm15, 0xe2)
                                                zmm4 = _mm_add_epi64(zmm4, arg5)
                                                
                                                if ((temp0_1463 & 4) == 0)
                                                    goto label_140249a2c
                                                
                                                goto label_1402499bb
                                            
                                        label_140249a1f:
                                            zmm4 = _mm_add_epi64(zmm4, arg5)
                                            
                                            if ((temp0_1463 & 4) != 0)
                                            label_1402499bb:
                                                zmm15 = _mm_shuffle_ps(zmm15, 
                                                    _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm15, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_1463 & 8) != 0)
                                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                            zmm15, 0x20), 
                                                        0x24)
                                            else
                                            label_140249a2c:
                                                
                                                if ((temp0_1463 & 8) != 0)
                                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm4, 0x4e)[0].q), 
                                                            zmm15, 0x20), 
                                                        0x24)
                                            
                                            zmm2 = _mm_cmpgt_epi32(
                                                __andps_xmmxud_memxud(zmm15, data_143442cd0), 
                                                temp0_1442) & zmm3
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
                                
                                uint32_t temp0_1533 =
                                    _mm_movemask_ps(_mm_andnot_ps(var_478_3, zmm14))
                                uint32_t i_3
                                int32_t temp0_1535[0x4]
                                
                                if (temp0_1533 != 0)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ var_478_3
                                    zmm4 &= var_478_3
                                    temp0_1535 = _mm_cmpeq_epi32(zmm9, zmm9)
                                    zmm12 = _mm_add_epi32(zmm12, temp0_1535)
                                    arg5 = _mm_cmpgt_epi32(zmm12, zx.o(0)) & zmm1
                                    zmm3 = arg5 & zmm14
                                    i_3 = _mm_movemask_ps(zmm3)
                                
                                if (temp0_1533 == 0 || i_3 == 0)
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
                                        char temp0_1552 = _mm_movemask_ps(zmm3)
                                        
                                        if ((temp0_1552 & 1) == 0)
                                            zmm3 = var_5b8
                                            zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                            
                                            if ((temp0_1552 & 2) != 0)
                                                goto label_140249ef6
                                            
                                            goto label_140249f6a
                                        
                                        zmm7[0] = zx.d(*zmm0.q)
                                        zmm3 = var_5b8
                                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                        
                                        if ((temp0_1552 & 2) != 0)
                                        label_140249ef6:
                                            zmm7 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm7, 
                                                    0), 
                                                zmm7, 0xe2)
                                            zmm2 = _mm_add_epi64(zmm2, zmm3)
                                            
                                            if ((temp0_1552 & 4) == 0)
                                                goto label_140249f73
                                            
                                            goto label_140249f12
                                        
                                    label_140249f6a:
                                        zmm2 = _mm_add_epi64(zmm2, zmm3)
                                        
                                        if ((temp0_1552 & 4) != 0)
                                        label_140249f12:
                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                _mm_shuffle_ps(zx.o(*zmm2.q), zmm7, 0x30), 0x84)
                                            
                                            if ((temp0_1552 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        else
                                        label_140249f73:
                                            
                                            if ((temp0_1552 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        
                                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm7, arg7), temp0_1442)
                                            & not.o(arg5)
                                        zmm2 = zmm1 & not.o(zmm4)
                                        zmm4 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm1 & zmm14) != i_3)
                                            zmm4 = zmm1 ^ arg5
                                        
                                        zmm2 |= zmm1 & zmm12
                                        zmm12 = _mm_add_epi32(zmm12, temp0_1535)
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
                                
                                if ((rdx_10 & 1) != 0)
                                    zmm2 = zx.o(*zmm0.q)
                                
                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                                arg8 = var_538_2
                                
                                if ((rdx_10 & 2) == 0)
                                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                    zmm4 = __paddq_xmmdq_memdq(zmm4, var_5b8)
                                    
                                    if ((rdx_10 & 4) != 0)
                                        goto label_14024de2f
                                    
                                    goto label_14024a09e
                                
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm2, 
                                        0), 
                                    zmm2, 0xe2)
                                zmm2 = zmm0
                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                zmm4 = __paddq_xmmdq_memdq(zmm4, var_5b8)
                                
                                if ((rdx_10 & 4) == 0)
                                label_14024a09e:
                                    zmm3 ^= zmm14
                                    
                                    if ((rdx_10 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                else
                                label_14024de2f:
                                    zmm0 = _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm2, 0x30)
                                    zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                                    zmm3 ^= zmm14
                                    
                                    if ((rdx_10 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0x20)
                                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                                
                                zmm15 = (_mm_sub_epi32(arg7, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm14)
                                    | (zmm15 & zmm3)
                                arg5 = _mm_cmpgt_epi32(var_4f8_4, zmm15) & not.o(zmm14)
                                
                                if (_mm_movemask_ps(arg5) != 0)
                                    zmm15 = (temp0_1403 & arg5) | (arg5 & not.o(zmm15))
                                
                                arg5 = var_498_1
                                zmm9 = var_588_5
                                zmm1 = _mm_add_epi32(zmm15, zmm15)
                                zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                zmm3 = _mm_add_epi64(var_508_4, 
                                    _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1).q))
                                zmm1 = zmm3
                                
                                if ((rdx_10 & 1) == 0)
                                    zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                    
                                    if ((rdx_10 & 2) != 0)
                                        goto label_14024de78
                                    
                                    goto label_14024a173
                                
                                zmm3 = zx.o(*zmm1[0].q)
                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                
                                if ((rdx_10 & 2) != 0)
                                label_14024de78:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            zmm3, 0), 
                                        zmm3, 0xe2)
                                    zmm3 = zmm0
                                    arg6 = _mm_add_epi64(var_5b8, zmm4)
                                    
                                    if ((rdx_10 & 4) == 0)
                                        goto label_14024a180
                                    
                                    goto label_14024de98
                                
                            label_14024a173:
                                arg6 = _mm_add_epi64(var_5b8, zmm4)
                                
                                if ((rdx_10 & 4) != 0)
                                label_14024de98:
                                    zmm0 = _mm_shuffle_ps(zx.o(*arg6[0].q), zmm3, 0x30)
                                    zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                                    
                                    if ((rdx_10 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg6, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                else
                                label_14024a180:
                                    
                                    if ((rdx_10 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(arg6, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm2 = __andps_xmmxud_memxud(zmm2, data_143442cd0)
                                zmm3 = __andps_xmmxud_memxud(zmm3, data_143442cd0)
                                zmm7 = var_578_3 ^ zmm0
                                zmm4 = zx.o(0)
                                
                                if (arg11 != 1)
                                    goto label_14024a1c2
                            
                            zmm4 = _mm_and_ps(zmm4, zmm7)
                    
                    zmm7 = (temp0_1396 & not.o(arg5)) | (zmm4 & temp0_1396)
                
                arg6 = var_5a8_1
                zmm3 = var_548_2
                zmm11 = var_518_4
            
            uint32_t var_498_2[0x4] = zmm7
            zmm7 = _mm_unpacklo_epi32(zmm3, 0)
            zmm3 = _mm_unpackhi_epi32(zmm3, 0)
            zmm2 = var_4b8_2
            arg5 = _mm_shuffle_epi32(_mm_mul_epu32(arg7, zmm2), 0xe8)
            zmm14 = _mm_shuffle_epi32(zmm2, 0xf5)
            float var_528_3[0x4] = arg7
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
            char temp0_1619 = _mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f))
            float var_478_5[0x4] = arg5
            int32_t var_508_5[0x4] = zmm7
            zmm0 = _mm_add_epi64(_mm_add_epi64(arg5, zmm7), zmm11)
            uint128_t var_458_3 = zmm0
            uint32_t var_4a8_3[0x4] = _mm_add_epi64(zmm4, arg8)
            int32_t var_548_3[0x4] = zmm3
            float var_4d8_3[0x4] = zmm15
            float var_3a8_2[0x4] = zmm14
            
            if (temp0_1619 == 0)
                arg5 = var_568_3
                zmm2 = var_4f8_5
                zmm4 = arg6
                zmm7 = var_558_3
            else
                zmm1 = _mm_srai_epi32(
                    _mm_slli_epi32(__pcmpeqd_xmmdq_memdq(zx.o(0), var_598_1) & zmm2, 0x1f), 0x1f)
                char temp0_1626 = _mm_movemask_ps(zmm1)
                
                if (temp0_1626 == 0)
                    zmm0 = var_568_3
                    zmm4 = arg6
                    zmm7 = var_558_3
                else
                    zmm14 = arg6
                    arg5 = _mm_add_epi64(var_398_2, zmm3)
                    int32_t temp0_1629[0x4] =
                        __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_438_2, var_508_5), var_478_5)
                    arg5 = __paddq_xmmdq_memdq(arg5, var_4e8_4)
                    zmm7 = data_1434426c0
                    arg5 = _mm_add_epi64(arg5, zmm7)
                    int32_t temp0_1632[0x4] = _mm_add_epi64(temp0_1629, zmm7)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                    arg6 = temp0_1632 & zmm4
                    zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                    arg5 &= zmm0
                    int64_t rax_356 = _mm_shuffle_epi32(arg6, 0x4e)[0].q
                    void* rbx_41 = arg4 + rax_356
                    zmm1 = *(arg4 + rax_356)
                    int64_t rax_357 = arg5[0].q
                    void* rdi_14 = arg4 + rax_357
                    zmm9 = *(arg4 + rax_357)
                    int64_t rax_358 = _mm_shuffle_epi32(arg5, 0x4e).q
                    void* rsi_13 = arg4 + rax_358
                    zmm12 = *(arg4 + rax_358)
                    zmm3 = zmm4 & zmm7
                    zmm7 &= zmm0
                    void* rbp_26 = arg6[0].q + arg4
                    arg7 = *(zmm3.q + rbp_26)
                    zmm3 = *(_mm_shuffle_epi32(zmm3, 0x4e).q + rbx_41)
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
                    
                    if ((temp0_1626 & 1) == 0)
                        char temp5_1 = temp0_1626 & 2
                        cond:26_1 = temp5_1 != 0
                        cond:27_1 = temp5_1 == 0
                        cond:31_1 = temp5_1 != 0
                        cond:32_1 = temp5_1 == 0
                        
                        if (temp5_1 == 0)
                            goto label_14024a6bf
                        
                        goto label_14024a47a
                    
                    var_5b8 = *rbp_26
                    char temp4_1 = temp0_1626 & 2
                    cond:26_1 = temp4_1 != 0
                    cond:27_1 = temp4_1 == 0
                    cond:31_1 = temp4_1 != 0
                    cond:32_1 = temp4_1 == 0
                    
                    if (temp4_1 == 0)
                    label_14024a6bf:
                        
                        if (cond:27_1)
                            goto label_14024a490
                        
                        goto label_14024a6c5
                    
                label_14024a47a:
                    zmm0 = var_5b8
                    var_5b8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm0, 0), zmm0, 0xe2)
                    
                    if (not(cond:26_1))
                    label_14024a490:
                        
                        if (cond:32_1)
                            goto label_14024a6cf
                        
                        goto label_14024a496
                    
                label_14024a6c5:
                    arg7 = _mm_unpacklo_ps(arg7, zmm3.q)
                    bool cond:49_1
                    bool cond:50_1
                    bool cond:56_1
                    bool cond:57_1
                    
                    if (not(cond:31_1))
                    label_14024a6cf:
                        char temp11_1 = temp0_1626 & 4
                        cond:49_1 = temp11_1 != 0
                        cond:50_1 = temp11_1 == 0
                        cond:56_1 = temp11_1 != 0
                        cond:57_1 = temp11_1 == 0
                        
                        if (temp11_1 == 0)
                            goto label_14024a4a2
                        
                        goto label_14024a6d8
                    
                label_14024a496:
                    arg5 = _mm_unpacklo_ps(arg5, zmm4[0].q)
                    char temp10_1 = temp0_1626 & 4
                    cond:49_1 = temp10_1 != 0
                    cond:50_1 = temp10_1 == 0
                    cond:56_1 = temp10_1 != 0
                    cond:57_1 = temp10_1 == 0
                    
                    if (temp10_1 == 0)
                    label_14024a4a2:
                        
                        if (cond:50_1)
                            goto label_14024a6f0
                        
                        goto label_14024a4ad
                    
                label_14024a6d8:
                    zmm0 = var_5b8
                    var_5b8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm9, zmm0, 0x30), 0x84)
                    
                    if (not(cond:49_1))
                    label_14024a6f0:
                        zmm9 = var_588_5
                        
                        if (cond:57_1)
                            goto label_14024a4bf
                        
                        goto label_14024a701
                    
                label_14024a4ad:
                    arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(arg6, arg7, 0x30), 0x84)
                    zmm9 = var_588_5
                    bool cond:82_1
                    bool cond:83_1
                    bool cond:103_1
                    bool cond:104_1
                    
                    if (not(cond:56_1))
                    label_14024a4bf:
                        zmm0 = var_568_3
                        zmm4 = zmm14
                        char temp23_1 = temp0_1626 & 8
                        cond:82_1 = temp23_1 != 0
                        cond:83_1 = temp23_1 == 0
                        cond:103_1 = temp23_1 != 0
                        cond:104_1 = temp23_1 == 0
                        
                        if (temp23_1 == 0)
                            goto label_14024a719
                        
                        goto label_14024a4d3
                    
                label_14024a701:
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm7, arg5, 0x30), 0x84)
                    zmm0 = var_568_3
                    zmm4 = zmm14
                    char temp22_1 = temp0_1626 & 8
                    cond:82_1 = temp22_1 != 0
                    cond:83_1 = temp22_1 == 0
                    cond:103_1 = temp22_1 != 0
                    cond:104_1 = temp22_1 == 0
                    
                    if (temp22_1 == 0)
                    label_14024a719:
                        
                        if (cond:83_1)
                            goto label_14024a4eb
                        
                        goto label_14024a724
                    
                label_14024a4d3:
                    zmm1 = var_5b8
                    var_5b8 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x20), 0x24)
                    
                    if (cond:82_1)
                    label_14024a724:
                        arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(arg8, arg7, 0x20), 0x24)
                        arg8 = var_538_2
                        
                        if (cond:103_1)
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm15, arg5, 0x20), 0x24)
                    else
                    label_14024a4eb:
                        arg8 = var_538_2
                        
                        if (not(cond:104_1))
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm15, arg5, 0x20), 0x24)
                    
                    zmm14 = arg5
                    zmm7 = var_558_3
                    zmm11 = var_518_4
                    zmm15 = var_4d8_3
                
                zmm3 = __pcmpeqd_xmmdq_memdq(zx.o(0), var_598_1) & not.o(zmm2)
                arg5 = _mm_slli_epi32(zmm3, 0x1f)
                char temp0_1652 = _mm_movemask_ps(arg5)
                
                if (temp0_1652 == 0)
                    arg5 = zmm0
                    zmm2 = var_4f8_5
                    arg6 = zmm14
                else
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                    arg5 = _mm_srai_epi32(arg5, 0x1f) & zmm1
                    float var_578_4[0x4] = arg7
                    arg8 = zmm4
                    
                    if (_mm_movemask_ps(arg5) == 0)
                        zmm15 = var_458_3
                        zmm12 = var_4a8_3
                    else
                        arg7 = data_1434426c0
                        zmm0 = var_4a8_3
                        zmm2 = _mm_add_epi64(zmm0, arg7)
                        zmm4 = var_458_3
                        int32_t temp0_1658[0x4] = _mm_add_epi64(zmm4, arg7)
                        zmm7 = _mm_cmpeq_epi32(zmm7, zmm7) ^ arg5
                        zmm15 = _mm_shuffle_epi32(zmm7, 0x50)
                        zmm15 = (zmm15 & not.o(temp0_1658)) | (zmm4 & zmm15)
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
                    
                    if ((temp0_1652 & 1) != 0)
                        zmm2.d = zmm1[0]
                        zmm9 = var_588_5
                        
                        if ((temp0_1652 & 2) != 0)
                            goto label_14024a79c
                        
                        goto label_14024a772
                    
                    zmm9 = var_588_5
                    
                    if ((temp0_1652 & 2) != 0)
                    label_14024a79c:
                        zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                        zmm2 = zmm0
                        
                        if ((temp0_1652 & 4) != 0)
                            goto label_14024a77a
                        
                        goto label_14024a7a8
                    
                label_14024a772:
                    
                    if ((temp0_1652 & 4) == 0)
                    label_14024a7a8:
                        
                        if ((temp0_1652 & 8) != 0)
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                    else
                    label_14024a77a:
                        zmm0 = _mm_shuffle_ps(zmm1, zmm2, 0x32)
                        zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                        
                        if ((temp0_1652 & 8) != 0)
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                    
                    zmm7 = data_1434422d0
                    zmm1 = arg8 & zmm7
                    zmm7 = _mm_srai_epi32(_mm_slli_epi32(_mm_cmpeq_epi32(zmm7, zmm1) & zmm3, 0x1f), 
                        0x1f)
                    char temp0_1691 = _mm_movemask_ps(zmm7)
                    var_5b8 = zmm2
                    
                    if (temp0_1691 == 0)
                        zmm2 = var_568_3
                        arg7 = var_578_4
                    else
                        arg6 = data_1434426c0
                        zmm7 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                        
                        if ((temp0_1691 & 1) != 0)
                            arg5 = *zmm15[0].q
                        
                        zmm2 = _mm_add_epi64(zmm12, arg6)
                        int32_t temp0_1694[0x4] = _mm_add_epi64(arg6, zmm15)
                        zmm0 = _mm_shuffle_epi32(zmm7, 0x50)
                        uint32_t temp0_1696[0x4] = _mm_shuffle_epi32(zmm7, 0xfa)
                        
                        if ((temp0_1691 & 2) != 0)
                            arg5 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm15, 0x4e)[0].q, arg5, 0), 
                                arg5, 0xe2)
                        
                        if ((temp0_1691 & 4) != 0)
                            arg5 =
                                _mm_shuffle_ps(arg5, _mm_shuffle_ps(*zmm12[0].q, arg5, 0x30), 0x84)
                        
                        zmm15 = (zmm15 & zmm0) | (zmm0 & not.o(temp0_1694))
                        
                        if ((temp0_1691 & 8) != 0)
                            arg5 = _mm_shuffle_ps(arg5, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, arg5, 0x20), 0x24)
                        
                        zmm12 = (zmm12 & temp0_1696) | (temp0_1696 & not.o(zmm2))
                        zmm2 = var_568_3
                        arg7 = var_578_4
                        zmm9 = var_588_5
                    
                    arg6 = zmm14
                    zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(arg5)
                    
                    if ((temp0_1652 & 1) != 0)
                        arg7[0] = zmm1[0]
                        arg5 = zmm2
                        zmm2 = var_4f8_5
                        
                        if ((temp0_1652 & 2) != 0)
                            goto label_14024a91d
                        
                        goto label_14024a8e5
                    
                    arg5 = zmm2
                    zmm2 = var_4f8_5
                    
                    if ((temp0_1652 & 2) != 0)
                    label_14024a91d:
                        arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg7, 1), arg7, 0xe2)
                        
                        if ((temp0_1652 & 4) != 0)
                            goto label_14024a8f2
                        
                        goto label_14024a926
                    
                label_14024a8e5:
                    
                    if ((temp0_1652 & 4) == 0)
                    label_14024a926:
                        
                        if ((temp0_1652 & 8) != 0)
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x23), 0x24)
                    else
                    label_14024a8f2:
                        arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x32), 0x84)
                        
                        if ((temp0_1652 & 8) != 0)
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x23), 0x24)
                    
                    zmm0 = data_142fc95e0
                    zmm1 = arg8 & zmm0
                    zmm3 = _mm_slli_epi32(zmm3 & _mm_cmpeq_epi32(zmm0, zmm1), 0x1f)
                    char temp0_1714 = _mm_movemask_ps(zmm3)
                    
                    if (temp0_1714 == 0)
                        zmm4 = arg8
                        zmm11 = var_518_4
                        arg8 = var_538_2
                        zmm7 = var_558_3
                        zmm15 = var_4d8_3
                    else
                        if ((temp0_1714 & 1) != 0)
                            zmm3 = *zmm15[0].q
                        
                        if ((temp0_1714 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm15, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                        
                        zmm4 = arg8
                        zmm11 = var_518_4
                        zmm15 = var_4d8_3
                        arg8 = var_538_2
                        
                        if ((temp0_1714 & 4) != 0)
                            zmm3 =
                                _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm12[0].q, zmm3, 0x30), 0x84)
                        
                        if ((temp0_1714 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm3, 0x20), 0x24)
                        
                        zmm7 = var_558_3
                    
                    zmm0 = zx.o(0)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm0) & not.o(zmm3)
                    
                    if ((temp0_1652 & 1) != 0)
                        arg6[0] = zmm1[0]
                        
                        if ((temp0_1652 & 2) != 0)
                            goto label_14024aa55
                        
                        goto label_14024aa32
                    
                    if ((temp0_1652 & 2) != 0)
                    label_14024aa55:
                        zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg6, 1), arg6, 0xe2)
                        arg6 = zmm0
                        
                        if ((temp0_1652 & 4) != 0)
                            goto label_14024aa3a
                        
                        goto label_14024aa61
                    
                label_14024aa32:
                    
                    if ((temp0_1652 & 4) == 0)
                    label_14024aa61:
                        
                        if ((temp0_1652 & 8) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                    else
                    label_14024aa3a:
                        zmm0 = _mm_shuffle_ps(zmm1, arg6, 0x32)
                        arg6 = _mm_shuffle_ps(arg6, zmm0, 0x84)
                        
                        if ((temp0_1652 & 8) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
            
            uint128_t var_428_3 = _mm_cmpeq_epi32(zmm0, zmm0) ^ zmm2
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm9), 0x1f)) == 0)
                zmm14 = var_528_3
            else
                if (temp0_1358 != 0)
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f) & arg5
                    zmm1 = zmm2 & zmm9
                    uint32_t temp0_1735 = _mm_movemask_ps(zmm1)
                    zmm7 = zx.o(0)
                    zmm3 = arg5
                    zmm14 = zmm11
                    zmm12 = arg8
                    uint128_t var_338_1 = zx.o(0)
                    arg5 = zx.o(0)
                    int32_t var_4c8_2[0x4] = arg6
                    
                    if (temp0_1735 != 0)
                        char rdx_16 = temp0_1735.b
                        
                        if ((rdx_16 & 1) == 0)
                            if ((rdx_16 & 2) != 0)
                                goto label_14024acab
                            
                            goto label_14024ab05
                        
                        zmm4 = *zmm11[0].q
                        
                        if ((rdx_16 & 2) != 0)
                        label_14024acab:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm4, 0), zmm4, 
                                0xe2)
                            zmm4 = zmm0
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((rdx_16 & 4) == 0)
                                goto label_14024ab12
                            
                            goto label_14024accc
                        
                    label_14024ab05:
                        zmm0 = _mm_cmpeq_epi32(zx.o(0), zx.o(0))
                        
                        if ((rdx_16 & 4) != 0)
                        label_14024accc:
                            zmm4 =
                                _mm_shuffle_ps(zmm4, _mm_shuffle_ps(*arg8[0].q, zmm4, 0x30), 0x84)
                            zmm1 ^= zmm0
                            
                            if ((rdx_16 & 8) != 0)
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm4, 0x20), 
                                    0x24)
                        else
                        label_14024ab12:
                            zmm1 ^= zmm0
                            
                            if ((rdx_16 & 8) != 0)
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm4, 0x20), 
                                    0x24)
                        
                        arg6 = _mm_shuffle_epi32(zmm1, 0x50)
                        char temp0_1741 = _mm_movemask_ps(zmm2)
                        zmm3 = zx.o(0)
                        
                        if ((temp0_1741 & 1) != 0)
                            zmm3.d = zmm4[0]
                        
                        arg8 = data_1434426c0
                        arg6 = _mm_slli_epi32(arg6, 0x1f)
                        
                        if ((temp0_1741 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm3, 1), zmm3, 0xe2)
                        
                        uint32_t temp0_1745[0x4] = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm0 = _mm_add_epi64(zmm11, arg8)
                        int32_t temp0_1747[0x4] = _mm_srai_epi32(arg6, 0x1f)
                        
                        if ((temp0_1741 & 4) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x32), 0x84)
                        
                        uint32_t temp0_1750[0x4] = _mm_slli_epi32(temp0_1745, 0x1f)
                        zmm2 = temp0_1747 & not.o(zmm0)
                        zmm14 = zmm11 & temp0_1747
                        
                        if ((temp0_1741 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x23), 0x24)
                        
                        zmm4 = var_5a8_1
                        var_338_1 = zmm3
                        zmm0 = _mm_add_epi64(var_538_2, arg8)
                        zmm7 = _mm_srai_epi32(temp0_1750, 0x1f)
                        zmm2 |= zmm14
                        
                        if ((rdx_16 & 1) != 0)
                            zmm3 = *zmm2.q
                        
                        zmm1 = zmm7 & not.o(zmm0)
                        zmm12 = var_538_2 & zmm7
                        
                        if ((rdx_16 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                            zmm1 |= zmm12
                            
                            if ((rdx_16 & 4) != 0)
                            label_14024ad16:
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm1[0].q, zmm3, 0x30), 
                                    0x84)
                                
                                if ((rdx_16 & 8) == 0)
                                    goto label_14024ac25
                                
                                goto label_14024ad35
                        else
                            zmm1 |= zmm12
                            
                            if ((rdx_16 & 4) != 0)
                                goto label_14024ad16
                        
                        if ((rdx_16 & 8) == 0)
                        label_14024ac25:
                            arg5 = zx.o(0)
                            
                            if ((temp0_1741 & 1) == 0)
                                goto label_14024ad47
                            
                            goto label_14024ac33
                        
                    label_14024ad35:
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e).q, zmm3, 0x20), 0x24)
                        arg5 = zx.o(0)
                        
                        if ((temp0_1741 & 1) == 0)
                        label_14024ad47:
                            
                            if ((temp0_1741 & 2) == 0)
                                goto label_14024ac41
                            
                            goto label_14024ad5c
                        
                    label_14024ac33:
                        arg5[0] = zmm3.d
                        
                        if ((temp0_1741 & 2) == 0)
                        label_14024ac41:
                            zmm1 = _mm_add_epi64(zmm1, arg8)
                            zmm2 = _mm_add_epi64(zmm2, arg8)
                            
                            if ((temp0_1741 & 4) == 0)
                                goto label_14024ad73
                            
                            goto label_14024ac5c
                        
                    label_14024ad5c:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, arg5, 1), arg5, 0xe2)
                        zmm1 = _mm_add_epi64(zmm1, arg8)
                        zmm2 = _mm_add_epi64(zmm2, arg8)
                        
                        if ((temp0_1741 & 4) != 0)
                        label_14024ac5c:
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm3, arg5, 0x32), 0x84)
                            arg6 = temp0_1747 & not.o(zmm2)
                            zmm7 &= not.o(zmm1)
                            
                            if ((temp0_1741 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm3, arg5, 0x23), 0x24)
                        else
                        label_14024ad73:
                            arg6 = temp0_1747 & not.o(zmm2)
                            zmm7 &= not.o(zmm1)
                            
                            if ((temp0_1741 & 8) != 0)
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
                    char temp0_1782 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_1782 == 0)
                        zmm15 = zx.o(0)
                    else
                        if ((temp0_1782 & 1) == 0)
                            if ((temp0_1782 & 2) != 0)
                                goto label_14024af51
                            
                            goto label_14024ae08
                        
                        zmm3 = *zmm14[0].q
                        
                        if ((temp0_1782 & 2) != 0)
                        label_14024af51:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                            zmm3 = zmm0
                            
                            if ((temp0_1782 & 4) == 0)
                                goto label_14024ae12
                            
                            goto label_14024af6b
                        
                    label_14024ae08:
                        
                        if ((temp0_1782 & 4) != 0)
                        label_14024af6b:
                            zmm0 = _mm_shuffle_ps(*zmm12[0].q, zmm3, 0x30)
                            zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                            
                            if ((temp0_1782 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm3, 0x20)
                                zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                        else
                        label_14024ae12:
                            
                            if ((temp0_1782 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm3, 0x20)
                                zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                        
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                        char temp0_1787 = _mm_movemask_ps(zmm2)
                        zmm7 = zx.o(0)
                        
                        if ((temp0_1787 & 1) != 0)
                            zmm7[0] = zmm3.d
                        
                        zmm9 = data_1434426c0
                        zmm1 ^= zmm0
                        
                        if ((temp0_1787 & 2) != 0)
                            zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm7, 1), zmm7, 0xe2)
                        
                        zmm2 = _mm_add_epi64(zmm14, zmm9)
                        arg6 = _mm_shuffle_epi32(zmm1, 0x50)
                        
                        if ((temp0_1787 & 4) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm3, zmm7, 0x32), 0x84)
                        
                        if ((temp0_1787 & 8) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm3, zmm7, 0x23), 0x24)
                        
                        zmm3 = _mm_add_epi64(zmm12, zmm9)
                        zmm1 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm2 = (zmm14 & arg6) | (arg6 & not.o(zmm2))
                        
                        if ((temp0_1782 & 1) != 0)
                            arg8 = *zmm2.q
                        
                        zmm0 = zmm1 & not.o(zmm3)
                        zmm3 = zmm12 & zmm1
                        
                        if ((temp0_1782 & 2) != 0)
                            arg8 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, arg8, 0), arg8, 
                                0xe2)
                            zmm4 = var_5a8_1
                            arg5 = var_568_3
                            zmm3 |= zmm0
                            
                            if ((temp0_1782 & 4) != 0)
                            label_14024afcc:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(*zmm3.q, arg8, 0x30), 0x84)
                                
                                if ((temp0_1782 & 8) == 0)
                                    goto label_14024aef6
                                
                                goto label_14024afee
                        else
                            zmm3 |= zmm0
                            
                            if ((temp0_1782 & 4) != 0)
                                goto label_14024afcc
                        
                        if ((temp0_1782 & 8) == 0)
                        label_14024aef6:
                            zmm15 = zx.o(0)
                            
                            if ((temp0_1787 & 1) == 0)
                                goto label_14024b001
                            
                            goto label_14024af04
                        
                    label_14024afee:
                        arg8 = _mm_shuffle_ps(arg8, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, arg8, 0x20), 0x24)
                        zmm15 = zx.o(0)
                        
                        if ((temp0_1787 & 1) != 0)
                        label_14024af04:
                            zmm15[0] = arg8[0]
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            arg6 = _mm_slli_epi32(arg6, 0x1f)
                            
                            if ((temp0_1787 & 2) != 0)
                                zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm15, 1), zmm15, 0xe2)
                        else
                        label_14024b001:
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            arg6 = _mm_slli_epi32(arg6, 0x1f)
                            
                            if ((temp0_1787 & 2) != 0)
                                zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm15, 1), zmm15, 0xe2)
                        
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        int32_t temp0_1818[0x4] = _mm_srai_epi32(arg6, 0x1f)
                        zmm3 = _mm_add_epi64(zmm3, zmm9)
                        zmm2 = _mm_add_epi64(zmm2, zmm9)
                        
                        if ((temp0_1787 & 4) != 0)
                            zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg8, zmm15, 0x32), 0x84)
                        
                        if ((temp0_1787 & 8) != 0)
                            zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg8, zmm15, 0x23), 0x24)
                        
                        zmm14 = (zmm14 & temp0_1818) | (temp0_1818 & not.o(zmm2))
                        zmm12 = (zmm12 & zmm1) | (zmm1 & not.o(zmm3))
                        zmm9 = var_588_5
                        arg6 = var_4c8_2
                    
                    zmm0 = data_142fc95e0
                    zmm3 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & arg5
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm3 & zmm9, 0x1f), 0x1f)
                    char temp0_1828 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_1828 == 0)
                        arg8 = zx.o(0)
                        zmm1 = zx.o(0)
                        zmm14 = arg5
                        arg5 = var_338_1
                    else
                        if ((temp0_1828 & 1) == 0)
                            if ((temp0_1828 & 2) != 0)
                                goto label_14024b252
                            
                            goto label_14024b0ce
                        
                        zmm2 = *zmm14[0].q
                        
                        if ((temp0_1828 & 2) != 0)
                        label_14024b252:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm2, 0), zmm2, 
                                0xe2)
                            zmm2 = zmm0
                            
                            if ((temp0_1828 & 4) == 0)
                                goto label_14024b0d7
                            
                            goto label_14024b26b
                        
                    label_14024b0ce:
                        
                        if ((temp0_1828 & 4) != 0)
                        label_14024b26b:
                            zmm0 = _mm_shuffle_ps(*zmm12[0].q, zmm2, 0x30)
                            zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                            
                            if ((temp0_1828 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm2, 0x20)
                                zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                        else
                        label_14024b0d7:
                            
                            if ((temp0_1828 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm2, 0x20)
                                zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x24)
                        
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                        char temp0_1833 = _mm_movemask_ps(zmm3)
                        arg8 = zx.o(0)
                        
                        if ((temp0_1833 & 1) != 0)
                            arg8[0] = zmm2.d
                        
                        zmm3 = data_1434426c0
                        zmm1 ^= zmm0
                        
                        if ((temp0_1833 & 2) != 0)
                            arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg8, 1), arg8, 0xe2)
                        
                        zmm0 = _mm_add_epi64(zmm14, zmm3)
                        arg6 = _mm_shuffle_epi32(zmm1, 0x50)
                        
                        if ((temp0_1833 & 4) != 0)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x32), 0x84)
                            arg5 = var_568_3
                        
                        zmm14 &= arg6
                        arg6 &= not.o(zmm0)
                        
                        if ((temp0_1833 & 8) != 0)
                            zmm2 = _mm_shuffle_ps(zmm2, arg8, 0x23)
                            arg8 = _mm_shuffle_ps(arg8, zmm2, 0x24)
                        
                        zmm3 = _mm_add_epi64(zmm3, zmm12)
                        zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm14 |= arg6
                        
                        if ((temp0_1828 & 1) != 0)
                            zmm2 = *zmm14[0].q
                        
                        zmm12 &= zmm0
                        zmm0 &= not.o(zmm3)
                        zmm9 = var_588_5
                        arg6 = var_4c8_2
                        
                        if ((temp0_1828 & 2) == 0)
                            zmm12 |= zmm0
                            
                            if ((temp0_1828 & 4) != 0)
                                goto label_14024b2b6
                            
                            goto label_14024b1be
                        
                        zmm2 = _mm_shuffle_ps(
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q, zmm2, 0), zmm2, 
                            0xe2)
                        zmm12 |= zmm0
                        
                        if ((temp0_1828 & 4) != 0)
                        label_14024b2b6:
                            zmm2 =
                                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm12[0].q, zmm2, 0x30), 0x84)
                            zmm14 = arg5
                            
                            if ((temp0_1828 & 8) == 0)
                                goto label_14024b1cc
                            
                            goto label_14024b2db
                        
                    label_14024b1be:
                        zmm14 = arg5
                        
                        if ((temp0_1828 & 8) == 0)
                        label_14024b1cc:
                            arg5 = var_338_1
                            zmm1 = zx.o(0)
                            
                            if ((temp0_1833 & 1) == 0)
                                goto label_14024b2f5
                            
                            goto label_14024b1e2
                        
                    label_14024b2db:
                        zmm2 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm2, 0x20), 0x24)
                        arg5 = var_338_1
                        zmm1 = zx.o(0)
                        
                        if ((temp0_1833 & 1) == 0)
                        label_14024b2f5:
                            
                            if ((temp0_1833 & 2) == 0)
                                goto label_14024b1f0
                            
                            goto label_14024b30a
                        
                    label_14024b1e2:
                        zmm1[0] = zmm2.d
                        
                        if ((temp0_1833 & 2) == 0)
                        label_14024b1f0:
                            
                            if ((temp0_1833 & 4) == 0)
                                goto label_14024b317
                            
                            goto label_14024b201
                        
                    label_14024b30a:
                        zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm1, 1), zmm1, 0xe2)
                        
                        if ((temp0_1833 & 4) != 0)
                        label_14024b201:
                            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x32), 0x84)
                            
                            if ((temp0_1833 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                        else
                        label_14024b317:
                            
                            if ((temp0_1833 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                    
                    zmm0 = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                    zmm2 = __paddq_xmmdq_memdq(var_438_2, var_508_5)
                    zmm3 = data_1434426c0
                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_478_5)
                    zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm0, var_4e8_4), zmm3)
                    zmm2 = _mm_add_epi64(zmm2, zmm3)
                    zmm3 = _mm_shuffle_epi32(var_348_2, 0x50) & zmm2
                    zmm2 = _mm_shuffle_epi32(var_348_2, 0xfa) & zmm0
                    int64_t rdx_19 = _mm_shuffle_epi32(zmm3, 0x4e).q
                    int64_t rbx_42 = _mm_shuffle_epi32(zmm2, 0x4e).q
                    zmm0 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm3.q)), zx.q(*(arg4 + rdx_19))), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm2.q)), zx.q(*(arg4 + rbx_42))).q)
                    zmm2 = _mm_srli_epi32(zmm0, 0x15)
                    zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    float temp0_1882[0x4] = _mm_add_ps(arg5, 
                        _mm_mul_ps(zmm11, 
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0)))
                    zmm0 = data_143442440
                    zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                    zmm4 = data_143442690
                    float temp0_1886[0x4] = _mm_mul_ps(zmm15, _mm_div_ps(zmm3, zmm4))
                    zmm0 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm0)), zmm4)
                    char temp21_1 = temp0_1358 & 1
                    
                    if (temp21_1 != 0)
                        zmm2.d = temp0_1882[0]
                        var_5b8 = zmm2
                        zmm1 = _mm_mul_ps(zmm1, zmm0)
                        zmm7 = _mm_add_ps(zmm7, temp0_1886)
                        zmm4 = var_5a8_1
                        
                        if (temp21_1 != 0)
                            goto label_14024b50c
                        
                        goto label_14024b453
                    
                    zmm1 = _mm_mul_ps(zmm1, zmm0)
                    zmm7 = _mm_add_ps(zmm7, temp0_1886)
                    zmm4 = var_5a8_1
                    
                    if (temp21_1 != 0)
                    label_14024b50c:
                        arg7[0] = zmm7[0]
                        zmm11 = var_518_4
                        zmm15 = var_4d8_3
                        arg8 = _mm_add_ps(arg8, zmm1)
                        
                        if (temp21_1 != 0)
                            goto label_14024b471
                        
                        goto label_14024b52f
                    
                label_14024b453:
                    zmm11 = var_518_4
                    zmm15 = var_4d8_3
                    arg8 = _mm_add_ps(arg8, zmm1)
                    bool cond:128_1
                    bool cond:129_1
                    bool cond:146_1
                    bool cond:147_1
                    
                    if (temp21_1 != 0)
                    label_14024b471:
                        arg6[0] = arg8[0]
                        char temp37_1 = temp0_1358 & 2
                        cond:128_1 = temp37_1 == 0
                        cond:129_1 = temp37_1 != 0
                        cond:146_1 = temp37_1 == 0
                        cond:147_1 = temp37_1 != 0
                        
                        if (temp37_1 != 0)
                            goto label_14024b53b
                        
                        goto label_14024b47f
                    
                label_14024b52f:
                    char temp36_1 = temp0_1358 & 2
                    cond:128_1 = temp36_1 == 0
                    cond:129_1 = temp36_1 != 0
                    cond:146_1 = temp36_1 == 0
                    cond:147_1 = temp36_1 != 0
                    
                    if (temp36_1 == 0)
                    label_14024b47f:
                        
                        if (not(cond:128_1))
                        label_14024b492:
                            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg7, 1), arg7, 0xe2)
                            
                            if (cond:147_1)
                                goto label_14024b563
                            
                            goto label_14024b49c
                    else
                    label_14024b53b:
                        zmm1 = var_5b8
                        var_5b8 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_1882, zmm1, 1), zmm1, 0xe2)
                        
                        if (cond:129_1)
                            goto label_14024b492
                    
                    bool cond:180_1
                    bool cond:181_1
                    bool cond:202_1
                    bool cond:203_1
                    
                    if (not(cond:146_1))
                    label_14024b563:
                        arg6 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, arg6, 1), arg6, 0xe2)
                        char temp56_1 = temp0_1358 & 4
                        cond:180_1 = temp56_1 == 0
                        cond:181_1 = temp56_1 != 0
                        cond:202_1 = temp56_1 == 0
                        cond:203_1 = temp56_1 != 0
                        
                        if (temp56_1 != 0)
                            goto label_14024b4a8
                        
                        goto label_14024b56f
                    
                label_14024b49c:
                    char temp55_1 = temp0_1358 & 4
                    cond:180_1 = temp55_1 == 0
                    cond:181_1 = temp55_1 != 0
                    cond:202_1 = temp55_1 == 0
                    cond:203_1 = temp55_1 != 0
                    
                    if (temp55_1 == 0)
                    label_14024b56f:
                        
                        if (not(cond:180_1))
                        label_14024b57d:
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm7, arg7, 0x32), 0x84)
                            
                            if (cond:203_1)
                                goto label_14024b4cc
                            
                            goto label_14024b588
                    else
                    label_14024b4a8:
                        zmm1 = var_5b8
                        var_5b8 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_1882, zmm1, 0x32), 0x84)
                        
                        if (cond:181_1)
                            goto label_14024b57d
                    
                    bool cond:245_1
                    bool cond:246_1
                    bool cond:267_1
                    bool cond:268_1
                    
                    if (not(cond:202_1))
                    label_14024b4cc:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg8, arg6, 0x32), 0x84)
                        char temp78_1 = temp0_1358 & 8
                        cond:245_1 = temp78_1 == 0
                        cond:246_1 = temp78_1 != 0
                        cond:267_1 = temp78_1 == 0
                        cond:268_1 = temp78_1 != 0
                        
                        if (temp78_1 != 0)
                            goto label_14024b591
                        
                        goto label_14024b4d9
                    
                label_14024b588:
                    char temp77_1 = temp0_1358 & 8
                    cond:245_1 = temp77_1 == 0
                    cond:246_1 = temp77_1 != 0
                    cond:267_1 = temp77_1 == 0
                    cond:268_1 = temp77_1 != 0
                    
                    if (temp77_1 != 0)
                    label_14024b591:
                        zmm0 = var_5b8
                        var_5b8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(temp0_1882, zmm0, 0x23), 0x24)
                        arg5 = zmm14
                        
                        if (cond:246_1)
                            goto label_14024b4e9
                        
                        goto label_14024b5ac
                    
                label_14024b4d9:
                    arg5 = zmm14
                    
                    if (cond:245_1)
                    label_14024b5ac:
                        
                        if (not(cond:267_1))
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg8, arg6, 0x23), 0x24)
                    else
                    label_14024b4e9:
                        arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm7, arg7, 0x23), 0x24)
                        
                        if (cond:268_1)
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
                    char temp0_1918 = _mm_movemask_ps(arg5)
                    
                    if (temp0_1918 == 0)
                        zmm14 = var_528_3
                        arg8 = var_538_2
                        arg5 = zmm12
                    else
                        uint128_t var_348_3 = zmm0
                        int32_t var_4c8_3[0x4] = arg6
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                        arg5 = _mm_srai_epi32(arg5, 0x1f) & zmm1
                        char rcx_47
                        
                        if (_mm_movemask_ps(arg5) == 0)
                            zmm14 = var_528_3
                            arg5 = zmm12
                            zmm11 = var_458_3
                            zmm1 &= zmm0
                            rcx_47 = temp0_1918
                            
                            if ((rcx_47 & 1) != 0)
                                zmm0.d = zmm1[0]
                                var_5b8 = zmm0
                        else
                            zmm0 = data_1434426b0
                            zmm2 = _mm_add_epi64(var_4a8_3, zmm0)
                            zmm11 = var_458_3
                            zmm0 = _mm_add_epi64(zmm0, zmm11)
                            zmm4 = _mm_cmpeq_epi32(zmm4, zmm4) ^ arg5
                            arg6 = _mm_shuffle_epi32(zmm4, 0x50)
                            zmm11 = (zmm11 & arg6) | (arg6 & not.o(zmm0))
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
                            int64_t rax_413 = arg6[0].q
                            int64_t rdx_20 = _mm_shuffle_epi32(arg6, 0x4e).q
                            int64_t rbp_33 = zmm4[0].q
                            int64_t rbx_43 = _mm_shuffle_epi32(zmm4, 0x4e).q
                            var_4a8_3 = zmm7 | zmm0
                            zmm2 = __paddd_xmmdq_memdq(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + rax_413), 
                                                0), 
                                            *(arg4 + rdx_20), 2), 
                                        *(arg4 + rbp_33), 4), 
                                    *(arg4 + rbx_43), 6), 
                                data_143442b40)
                            zmm0 = _mm_cvtepi32_ps(zmm2)
                            zmm14 = var_528_3
                            arg5 = zmm12
                            zmm1 &= zmm0
                            rcx_47 = temp0_1918
                            
                            if ((rcx_47 & 1) != 0)
                                zmm0.d = zmm1[0]
                                var_5b8 = zmm0
                        
                        zmm4 = var_5a8_1
                        zmm12 = var_4a8_3
                        
                        if ((rcx_47 & 2) != 0)
                            zmm2 = var_5b8
                            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                            var_5b8 = zmm0
                            
                            if ((rcx_47 & 4) != 0)
                                goto label_14024b8f0
                            
                            goto label_14024b7b0
                        
                        if ((rcx_47 & 4) == 0)
                        label_14024b7b0:
                            
                            if ((rcx_47 & 8) != 0)
                            label_14024b7b5:
                                zmm0 = var_5b8
                                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm1, zmm0, 0x23), 0x24)
                                var_5b8 = zmm0
                        else
                        label_14024b8f0:
                            zmm2 = var_5b8
                            zmm0 = _mm_shuffle_ps(zmm1, zmm2, 0x32)
                            zmm2 = _mm_shuffle_ps(zmm2, zmm0, 0x84)
                            var_5b8 = zmm2
                            
                            if ((rcx_47 & 8) != 0)
                                goto label_14024b7b5
                        
                        arg6 = data_1434422d0
                        zmm1 = zmm4 & arg6
                        int32_t temp0_1950[0x4] = _mm_srai_epi32(
                            _mm_slli_epi32(_mm_cmpeq_epi32(arg6, zmm1) & arg8, 0x1f), 0x1f)
                        char temp0_1951 = _mm_movemask_ps(temp0_1950)
                        
                        if (temp0_1951 != 0)
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((temp0_1951 & 1) != 0)
                                arg5 = zx.o(*zmm11[0].q)
                            
                            zmm7 = data_1434426b0
                            arg6 = temp0_1950 ^ zmm0
                            
                            if ((temp0_1951 & 2) != 0)
                                arg5 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm11, 0x4e).q), arg5, 
                                        0), 
                                    arg5, 0xe2)
                            
                            zmm4 = _mm_add_epi64(zmm12, zmm7)
                            zmm7 = _mm_add_epi64(zmm7, zmm11)
                            zmm2 = _mm_shuffle_epi32(arg6, 0x50)
                            arg6 = _mm_shuffle_epi32(arg6, 0xfa)
                            
                            if ((temp0_1951 & 4) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*zmm12[0].q), arg5, 0x30), 0x84)
                            
                            if ((temp0_1951 & 8) != 0)
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
                        
                        if ((rcx_47 & 1) != 0)
                            arg7[0] = zmm1[0]
                            
                            if ((rcx_47 & 2) != 0)
                                goto label_14024b9c4
                            
                            goto label_14024b999
                        
                        if ((rcx_47 & 2) != 0)
                        label_14024b9c4:
                            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg7, 1), arg7, 0xe2)
                            
                            if ((rcx_47 & 4) != 0)
                                goto label_14024b9a6
                            
                            goto label_14024b9cd
                        
                    label_14024b999:
                        
                        if ((rcx_47 & 4) == 0)
                        label_14024b9cd:
                            
                            if ((rcx_47 & 8) != 0)
                                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x23), 0x24)
                        else
                        label_14024b9a6:
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x32), 0x84)
                            
                            if ((rcx_47 & 8) != 0)
                                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm1, arg7, 0x23), 0x24)
                        
                        zmm0 = data_142fc95e0
                        zmm1 = zmm4 & zmm0
                        zmm0 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm0, zmm1) & arg8, 0x1f)
                        char temp0_1979 = _mm_movemask_ps(zmm0)
                        
                        if (temp0_1979 == 0)
                            arg8 = var_538_2
                        else
                            arg8 = var_538_2
                            
                            if ((temp0_1979 & 1) == 0)
                                if ((temp0_1979 & 2) != 0)
                                    goto label_14024c60a
                                
                                goto label_14024ba20
                            
                            zmm4 = zx.o(*zmm11[0].q)
                            
                            if ((temp0_1979 & 2) != 0)
                            label_14024c60a:
                                zmm4 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm11, 0x4e).q), zmm4, 
                                        0), 
                                    zmm4, 0xe2)
                                
                                if ((temp0_1979 & 4) == 0)
                                    goto label_14024ba29
                                
                                goto label_14024c626
                            
                        label_14024ba20:
                            
                            if ((temp0_1979 & 4) != 0)
                            label_14024c626:
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(zx.o(*zmm12[0].q), zmm4, 0x30), 0x84)
                                
                                if ((temp0_1979 & 8) != 0)
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), 
                                            zmm4, 0x20), 
                                        0x24)
                            else
                            label_14024ba29:
                                
                                if ((temp0_1979 & 8) != 0)
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), 
                                            zmm4, 0x20), 
                                        0x24)
                            
                            zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm4, data_143442cd0), data_143442b40))
                            zmm4 = var_5a8_1
                        
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm0)
                        zmm11 = var_518_4
                        
                        if ((rcx_47 & 1) == 0)
                            zmm2 = var_4f8_5
                            
                            if ((rcx_47 & 2) != 0)
                            label_14024bad2:
                                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg6, 1), arg6, 0xe2)
                                
                                if ((rcx_47 & 4) != 0)
                                    goto label_14024baa5
                                
                                goto label_14024bada
                        else
                            arg6[0] = zmm1[0]
                            zmm2 = var_4f8_5
                            
                            if ((rcx_47 & 2) != 0)
                                goto label_14024bad2
                        
                        if ((rcx_47 & 4) == 0)
                        label_14024bada:
                            zmm0 = var_348_3
                            
                            if ((rcx_47 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                        else
                        label_14024baa5:
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x32), 0x84)
                            zmm0 = var_348_3
                            
                            if ((rcx_47 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                    
                    zmm3 = (zmm3 ^ zmm0) & zmm9
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm3, 0x1f)) == 0)
                        zmm7 = var_558_3
                    else
                        zmm1 = __pcmpeqd_xmmdq_memdq(data_143442ad0, var_488_2)
                        char temp0_1997 = _mm_movemask_ps(_mm_slli_epi32(zmm1 & zmm9, 0x1f))
                        
                        if (temp0_1997 == 0)
                            zmm7 = var_558_3
                        else
                            zmm2 = zx.o(0)
                            char temp20_1 = temp0_1997 & 1
                            
                            if (temp20_1 == 0)
                                zmm7 = var_558_3
                                
                                if (temp20_1 != 0)
                                label_14024bbff:
                                    arg7[0] = zmm2.d
                                    
                                    if (temp20_1 != 0)
                                        goto label_14024bb65
                                    
                                    goto label_14024bc0a
                            else
                                zmm0.d = zmm2.d
                                var_5b8 = zmm0
                                zmm7 = var_558_3
                                
                                if (temp20_1 != 0)
                                    goto label_14024bbff
                            
                            bool cond:126_1
                            bool cond:127_1
                            bool cond:144_1
                            bool cond:145_1
                            
                            if (temp20_1 != 0)
                            label_14024bb65:
                                arg6[0] = zmm2.d
                                zmm12 = zmm4
                                char temp35_1 = temp0_1997 & 2
                                cond:126_1 = temp35_1 == 0
                                cond:127_1 = temp35_1 != 0
                                cond:144_1 = temp35_1 == 0
                                cond:145_1 = temp35_1 != 0
                                
                                if (temp35_1 != 0)
                                    goto label_14024bc1b
                                
                                goto label_14024bb77
                            
                        label_14024bc0a:
                            zmm12 = zmm4
                            char temp34_1 = temp0_1997 & 2
                            cond:126_1 = temp34_1 == 0
                            cond:127_1 = temp34_1 != 0
                            cond:144_1 = temp34_1 == 0
                            cond:145_1 = temp34_1 != 0
                            
                            if (temp34_1 == 0)
                            label_14024bb77:
                                
                                if (not(cond:126_1))
                                label_14024bb8a:
                                    arg7 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg7, 0), arg7, 0xe2)
                                    
                                    if (cond:145_1)
                                        goto label_14024bc42
                                    
                                    goto label_14024bb94
                            else
                            label_14024bc1b:
                                zmm4 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm4, 0), zmm4, 0xe2)
                                
                                if (cond:127_1)
                                    goto label_14024bb8a
                            
                            bool cond:178_1
                            bool cond:179_1
                            bool cond:199_1
                            bool cond:200_1
                            
                            if (not(cond:144_1))
                            label_14024bc42:
                                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg6, 0), arg6, 0xe2)
                                char temp54_1 = temp0_1997 & 4
                                cond:178_1 = temp54_1 == 0
                                cond:179_1 = temp54_1 != 0
                                cond:199_1 = temp54_1 == 0
                                cond:200_1 = temp54_1 != 0
                                
                                if (temp54_1 != 0)
                                    goto label_14024bba0
                                
                                goto label_14024bc4e
                            
                        label_14024bb94:
                            char temp53_1 = temp0_1997 & 4
                            cond:178_1 = temp53_1 == 0
                            cond:179_1 = temp53_1 != 0
                            cond:199_1 = temp53_1 == 0
                            cond:200_1 = temp53_1 != 0
                            
                            if (temp53_1 == 0)
                            label_14024bc4e:
                                
                                if (not(cond:178_1))
                                label_14024bc5c:
                                    arg7 = _mm_shuffle_ps(arg7, 
                                        _mm_shuffle_ps(zx.o(0), arg7, 0x30), 0x84)
                                    
                                    if (cond:200_1)
                                        goto label_14024bbc3
                                    
                                    goto label_14024bc67
                            else
                            label_14024bba0:
                                zmm4 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(0), zmm4, 0x30), 0x84)
                                
                                if (cond:179_1)
                                    goto label_14024bc5c
                            
                            bool cond:243_1
                            bool cond:244_1
                            bool cond:265_1
                            bool cond:266_1
                            
                            if (not(cond:199_1))
                            label_14024bbc3:
                                arg6 =
                                    _mm_shuffle_ps(arg6, _mm_shuffle_ps(zx.o(0), arg6, 0x30), 0x84)
                                char temp76_1 = temp0_1997 & 8
                                cond:243_1 = temp76_1 == 0
                                cond:244_1 = temp76_1 != 0
                                cond:265_1 = temp76_1 == 0
                                cond:266_1 = temp76_1 != 0
                                
                                if (temp76_1 != 0)
                                    goto label_14024bc73
                                
                                goto label_14024bbd0
                            
                        label_14024bc67:
                            char temp75_1 = temp0_1997 & 8
                            cond:243_1 = temp75_1 == 0
                            cond:244_1 = temp75_1 != 0
                            cond:265_1 = temp75_1 == 0
                            cond:266_1 = temp75_1 != 0
                            
                            if (temp75_1 != 0)
                            label_14024bc73:
                                zmm4 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(0), zmm4, 0x20), 0x24)
                                zmm4 = zmm12
                                
                                if (cond:244_1)
                                    goto label_14024bbe3
                                
                                goto label_14024bc8e
                            
                        label_14024bbd0:
                            zmm4 = zmm12
                            
                            if (cond:243_1)
                            label_14024bc8e:
                                
                                if (not(cond:265_1))
                                    arg6 =
                                        _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm2, arg6, 0x20), 0x24)
                            else
                            label_14024bbe3:
                                arg7 =
                                    _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x20), 0x24)
                                
                                if (cond:266_1)
                                    arg6 =
                                        _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm2, arg6, 0x20), 0x24)
                            
                            zmm2 = var_4f8_5
                        
                        char temp0_2017 = _mm_movemask_ps(_mm_slli_epi32(zmm1 & not.o(zmm3), 0x1f))
                        
                        if (temp0_2017 != 0)
                            char temp31_1 = temp0_2017 & 1
                            
                            if (temp31_1 != 0)
                                zmm0.d = 0
                                var_5b8 = zmm0
                                
                                if (temp31_1 != 0)
                                    goto label_14024bd42
                            else if (temp31_1 != 0)
                            label_14024bd42:
                                arg7[0] = 0
                                
                                if (temp31_1 != 0)
                                    goto label_14024bce3
                                
                                goto label_14024bd49
                            
                            bool cond:142_1
                            bool cond:143_1
                            bool cond:161_1
                            bool cond:162_1
                            
                            if (temp31_1 != 0)
                            label_14024bce3:
                                arg6[0] = 0
                                char temp49_1 = temp0_2017 & 2
                                cond:142_1 = temp49_1 == 0
                                cond:143_1 = temp49_1 != 0
                                cond:161_1 = temp49_1 == 0
                                cond:162_1 = temp49_1 != 0
                                
                                if (temp49_1 != 0)
                                    goto label_14024bd51
                                
                                goto label_14024bcec
                            
                        label_14024bd49:
                            char temp48_1 = temp0_2017 & 2
                            cond:142_1 = temp48_1 == 0
                            cond:143_1 = temp48_1 != 0
                            cond:161_1 = temp48_1 == 0
                            cond:162_1 = temp48_1 != 0
                            
                            if (temp48_1 == 0)
                            label_14024bcec:
                                
                                if (not(cond:142_1))
                                label_14024bcfb:
                                    arg7 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg7, 0), arg7, 0xe2)
                                    
                                    if (cond:162_1)
                                        goto label_14024bd70
                                    
                                    goto label_14024bd01
                            else
                            label_14024bd51:
                                zmm3 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm3, 0), zmm3, 0xe2)
                                
                                if (cond:143_1)
                                    goto label_14024bcfb
                            
                            bool cond:197_1
                            bool cond:198_1
                            bool cond:218_1
                            bool cond:219_1
                            
                            if (not(cond:161_1))
                            label_14024bd70:
                                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg6, 0), arg6, 0xe2)
                                char temp69_1 = temp0_2017 & 4
                                cond:197_1 = temp69_1 == 0
                                cond:198_1 = temp69_1 != 0
                                cond:218_1 = temp69_1 == 0
                                cond:219_1 = temp69_1 != 0
                                
                                if (temp69_1 != 0)
                                    goto label_14024bd09
                                
                                goto label_14024bd78
                            
                        label_14024bd01:
                            char temp68_1 = temp0_2017 & 4
                            cond:197_1 = temp68_1 == 0
                            cond:198_1 = temp68_1 != 0
                            cond:218_1 = temp68_1 == 0
                            cond:219_1 = temp68_1 != 0
                            
                            if (temp68_1 == 0)
                            label_14024bd78:
                                
                                if (not(cond:197_1))
                                label_14024bd82:
                                    arg7 = _mm_shuffle_ps(arg7, 
                                        _mm_shuffle_ps(zx.o(0), arg7, 0x30), 0x84)
                                    
                                    if (cond:219_1)
                                        goto label_14024bd24
                                    
                                    goto label_14024bd89
                            else
                            label_14024bd09:
                                zmm3 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x30), 0x84)
                                
                                if (cond:198_1)
                                    goto label_14024bd82
                            
                            bool cond:263_1
                            bool cond:264_1
                            bool cond:282_1
                            bool cond:283_1
                            
                            if (not(cond:218_1))
                            label_14024bd24:
                                arg6 =
                                    _mm_shuffle_ps(arg6, _mm_shuffle_ps(zx.o(0), arg6, 0x30), 0x84)
                                char temp93_1 = temp0_2017 & 8
                                cond:263_1 = temp93_1 == 0
                                cond:264_1 = temp93_1 != 0
                                cond:282_1 = temp93_1 == 0
                                cond:283_1 = temp93_1 != 0
                                
                                if (temp93_1 != 0)
                                    goto label_14024bd91
                                
                                goto label_14024bd2d
                            
                        label_14024bd89:
                            char temp92_1 = temp0_2017 & 8
                            cond:263_1 = temp92_1 == 0
                            cond:264_1 = temp92_1 != 0
                            cond:282_1 = temp92_1 == 0
                            cond:283_1 = temp92_1 != 0
                            
                            if (temp92_1 != 0)
                            label_14024bd91:
                                zmm3 = var_5b8
                                var_5b8 =
                                    _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x20), 0x24)
                                
                                if (cond:264_1)
                                    goto label_14024bd37
                                
                                goto label_14024bda3
                            
                        label_14024bd2d:
                            
                            if (cond:263_1)
                            label_14024bda3:
                                
                                if (not(cond:282_1))
                                    arg6 = _mm_shuffle_ps(arg6, 
                                        _mm_shuffle_ps(zx.o(0), arg6, 0x20), 0x24)
                            else
                            label_14024bd37:
                                arg7 =
                                    _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x20), 0x24)
                                
                                if (cond:283_1)
                                    arg6 = _mm_shuffle_ps(arg6, 
                                        _mm_shuffle_ps(zx.o(0), arg6, 0x20), 0x24)
            
            zmm14 = _mm_cmpeq_epi32(zmm14, zmm15) & not.o(zmm9)
            zmm12 = _mm_slli_epi32(zmm14, 0x1f)
            char temp0_2038 = _mm_movemask_ps(zmm12)
            
            if (temp0_2038 == 0)
                zmm3 = var_368_1
                arg5 = var_5b8
            else
                zmm3 = arg5
                arg5 = zmm4
                zmm4 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(var_4b8_2, zmm15), 0xe8), 
                    _mm_shuffle_epi32(
                        __pmuludq_xmmdq_memdq(_mm_shuffle_epi32(zmm15, 0xf5), var_3a8_2), 0xe8).q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                int32_t temp0_2046[0x4] = _mm_shuffle_epi32(zmm4, 0x4e)
                zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                int32_t temp0_2049[0x4] =
                    _mm_unpacklo_epi32(temp0_2046, _mm_cmpgt_epi32(zx.o(0), temp0_2046).q)
                int32_t temp0_2050[0x4] = __paddq_xmmdq_memdq(temp0_2049, var_548_3)
                int32_t var_4d8_4[0x4] = zmm4
                float var_4e8_5[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(zmm4, var_508_5), zmm11)
                zmm9 = _mm_add_epi64(temp0_2050, arg8)
                zmm2 &= zmm14
                float var_578_7[0x4] = arg7
                int32_t var_4c8_4[0x4] = arg6
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) == 0)
                    zmm4 = arg5
                    arg5 = zmm3
                else
                    zmm1 = _mm_srai_epi32(
                        _mm_slli_epi32(__pcmpeqd_xmmdq_memdq(zx.o(0), var_598_1) & zmm2, 0x1f), 
                        0x1f)
                    char temp0_2059 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_2059 == 0)
                        zmm4 = arg5
                        arg5 = zmm3
                    else
                        uint128_t var_4f8_6 = zmm2
                        zmm11 = zmm14
                        int32_t temp0_2060[0x4] = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                        zmm7 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_438_2, var_508_5), 
                            var_4d8_4)
                        int32_t temp0_2063[0x4] = __paddq_xmmdq_memdq(temp0_2060, temp0_2049)
                        zmm4 = data_1434426c0
                        int32_t temp0_2064[0x4] = _mm_add_epi64(temp0_2063, zmm4)
                        zmm7 = _mm_add_epi64(zmm7, zmm4)
                        arg5 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm7 &= arg5
                        zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                        arg6 = temp0_2064 & zmm0
                        int64_t rax_430 = _mm_shuffle_epi32(zmm7, 0x4e)[0].q
                        void* rbx_44 = arg4 + rax_430
                        zmm2 = *(arg4 + rax_430)
                        int64_t rax_431 = arg6[0].q
                        void* rdi_15 = arg4 + rax_431
                        arg8 = *(arg4 + rax_431)
                        int64_t rax_432 = _mm_shuffle_epi32(arg6, 0x4e)[0].q
                        void* rsi_14 = arg4 + rax_432
                        float var_528_4[0x4] = *(arg4 + rax_432)
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
                        
                        if ((temp0_2059 & 1) == 0)
                            char temp19_1 = temp0_2059 & 2
                            cond:63_1 = temp19_1 != 0
                            cond:64_1 = temp19_1 == 0
                            cond:73_1 = temp19_1 != 0
                            cond:74_1 = temp19_1 == 0
                            
                            if (temp19_1 == 0)
                                goto label_14024c248
                            
                            goto label_14024bfe6
                        
                        var_588_5 = *rbp_35
                        char temp18_1 = temp0_2059 & 2
                        cond:63_1 = temp18_1 != 0
                        cond:64_1 = temp18_1 == 0
                        cond:73_1 = temp18_1 != 0
                        cond:74_1 = temp18_1 == 0
                        
                        if (temp18_1 == 0)
                        label_14024c248:
                            
                            if (cond:64_1)
                                goto label_14024bffe
                            
                            goto label_14024c24e
                        
                    label_14024bfe6:
                        zmm0 = var_588_5
                        var_588_5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm0, 0), zmm0, 0xe2)
                        
                        if (not(cond:63_1))
                        label_14024bffe:
                            
                            if (cond:74_1)
                                goto label_14024c258
                            
                            goto label_14024c004
                        
                    label_14024c24e:
                        zmm1 = _mm_unpacklo_ps(zmm1, zmm14[0].q)
                        bool cond:108_1
                        bool cond:109_1
                        bool cond:124_1
                        bool cond:125_1
                        
                        if (not(cond:73_1))
                        label_14024c258:
                            char temp30_1 = temp0_2059 & 4
                            cond:108_1 = temp30_1 != 0
                            cond:109_1 = temp30_1 == 0
                            cond:124_1 = temp30_1 != 0
                            cond:125_1 = temp30_1 == 0
                            zmm14 = zmm11
                            var_4b8_2 = zmm1
                            
                            if (temp30_1 == 0)
                                goto label_14024c01e
                            
                            goto label_14024c26e
                        
                    label_14024c004:
                        zmm15 = _mm_unpacklo_ps(zmm15, zmm3.q)
                        char temp29_1 = temp0_2059 & 4
                        cond:108_1 = temp29_1 != 0
                        cond:109_1 = temp29_1 == 0
                        cond:124_1 = temp29_1 != 0
                        cond:125_1 = temp29_1 == 0
                        zmm14 = zmm11
                        var_4b8_2 = zmm1
                        
                        if (temp29_1 == 0)
                        label_14024c01e:
                            zmm0 = var_5a8_1
                            arg8 = var_538_2
                            
                            if (cond:109_1)
                                goto label_14024c298
                            
                            goto label_14024c034
                        
                    label_14024c26e:
                        zmm0 = var_588_5
                        var_588_5 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x30), 0x84)
                        zmm0 = var_5a8_1
                        arg8 = var_538_2
                        
                        if (not(cond:108_1))
                        label_14024c298:
                            
                            if (cond:125_1)
                                goto label_14024c052
                            
                            goto label_14024c2a3
                        
                    label_14024c034:
                        zmm1 = var_4b8_2
                        var_4b8_2 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg6, zmm1, 0x30), 0x84)
                        bool cond:159_1
                        bool cond:160_1
                        bool cond:176_1
                        bool cond:177_1
                        
                        if (not(cond:124_1))
                        label_14024c052:
                            zmm1 = var_568_3
                            arg7 = var_578_7
                            char temp47_1 = temp0_2059 & 8
                            cond:159_1 = temp47_1 != 0
                            cond:160_1 = temp47_1 == 0
                            cond:176_1 = temp47_1 != 0
                            cond:177_1 = temp47_1 == 0
                            
                            if (temp47_1 == 0)
                                goto label_14024c2bc
                            
                            goto label_14024c066
                        
                    label_14024c2a3:
                        zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm7, zmm15, 0x30), 0x84)
                        zmm1 = var_568_3
                        arg7 = var_578_7
                        char temp46_1 = temp0_2059 & 8
                        cond:159_1 = temp46_1 != 0
                        cond:160_1 = temp46_1 == 0
                        cond:176_1 = temp46_1 != 0
                        cond:177_1 = temp46_1 == 0
                        
                        if (temp46_1 == 0)
                        label_14024c2bc:
                            zmm7 = var_558_3
                            zmm11 = var_518_4
                            
                            if (cond:160_1)
                                goto label_14024c096
                            
                            goto label_14024c2e2
                        
                    label_14024c066:
                        zmm2 = var_588_5
                        var_588_5 =
                            _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_528_4, zmm2, 0x20), 0x24)
                        zmm7 = var_558_3
                        zmm11 = var_518_4
                        
                        if (cond:159_1)
                        label_14024c2e2:
                            var_4b8_2 = _mm_shuffle_ps(var_4b8_2, 
                                _mm_shuffle_ps(zmm4, var_4b8_2, 0x20), 0x24)
                            zmm4 = zmm0
                            arg6 = var_4c8_4
                            zmm2 = var_4f8_6
                            
                            if (cond:176_1)
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg5, zmm15, 0x20), 0x24)
                        else
                        label_14024c096:
                            zmm4 = zmm0
                            arg6 = var_4c8_4
                            zmm2 = var_4f8_6
                            
                            if (not(cond:177_1))
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg5, zmm15, 0x20), 0x24)
                        
                        arg5 = zmm1
                    
                    zmm0 = zx.o(0)
                    zmm1 = _mm_cmpeq_epi32(var_598_1, zmm0) & not.o(zmm2)
                    float var_598_2[0x4] = zmm1
                    zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                    char temp0_2085 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_2085 != 0)
                        float var_538_3[0x4] = zmm15
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
                            int32_t temp0_2091[0x4] = _mm_add_epi64(var_4e8_5, zmm0)
                            zmm7 = _mm_cmpeq_epi32(zmm7, zmm7) ^ zmm1
                            zmm14 = _mm_shuffle_epi32(zmm7, 0x50)
                            zmm14 = (zmm14 & not.o(temp0_2091)) | (var_4e8_5 & zmm14)
                            zmm3 = _mm_shuffle_epi32(zmm7, 0xfa)
                            zmm3 = (zmm3 & not.o(zmm2)) | (zmm9 & zmm3)
                            zmm2 = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                            zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_438_2, var_508_5), 
                                var_4d8_4)
                            zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, temp0_2049), zmm0)
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
                        
                        if ((temp0_2085 & 1) != 0)
                            zmm0.d = arg5[0]
                            var_588_5 = zmm0
                            arg8 = var_5a8_1
                            zmm11 = zmm15
                            
                            if ((temp0_2085 & 2) != 0)
                                goto label_14024c37e
                            
                            goto label_14024c349
                        
                        arg8 = var_5a8_1
                        zmm11 = zmm15
                        
                        if ((temp0_2085 & 2) != 0)
                        label_14024c37e:
                            zmm1 = var_588_5
                            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm1, 1), zmm1, 0xe2)
                            var_588_5 = zmm0
                            
                            if ((temp0_2085 & 4) != 0)
                                goto label_14024c351
                            
                            goto label_14024c395
                        
                    label_14024c349:
                        
                        if ((temp0_2085 & 4) == 0)
                        label_14024c395:
                            
                            if ((temp0_2085 & 8) != 0)
                            label_14024c39a:
                                zmm0 = var_588_5
                                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg5, zmm0, 0x23), 0x24)
                                var_588_5 = zmm0
                        else
                        label_14024c351:
                            zmm1 = var_588_5
                            zmm0 = _mm_shuffle_ps(arg5, zmm1, 0x32)
                            zmm1 = _mm_shuffle_ps(zmm1, zmm0, 0x84)
                            var_588_5 = zmm1
                            
                            if ((temp0_2085 & 8) != 0)
                                goto label_14024c39a
                        
                        zmm7 = data_1434422d0
                        arg6 = arg8 & zmm7
                        zmm7 = _mm_srai_epi32(
                            _mm_slli_epi32(_mm_cmpeq_epi32(zmm7, arg6) & var_598_2, 0x1f), 0x1f)
                        char temp0_2123 = _mm_movemask_ps(zmm7)
                        
                        if (temp0_2123 == 0)
                            arg5 = var_568_3
                            arg7 = var_578_7
                            zmm15 = var_538_3
                        else
                            arg5 = data_1434426c0
                            zmm7 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((temp0_2123 & 1) != 0)
                                zmm1 = *zmm14[0].q
                            
                            zmm2 = _mm_add_epi64(zmm3, arg5)
                            arg5 = _mm_add_epi64(arg5, zmm14)
                            zmm0 = _mm_shuffle_epi32(zmm7, 0x50)
                            uint32_t temp0_2128[0x4] = _mm_shuffle_epi32(zmm7, 0xfa)
                            
                            if ((temp0_2123 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q, zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm11 = zmm15
                                arg8 = var_5a8_1
                            
                            zmm15 = var_538_3
                            
                            if ((temp0_2123 & 4) != 0)
                                zmm1 =
                                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*zmm3.q, zmm1, 0x30), 0x84)
                            
                            zmm14 = (zmm14 & zmm0) | (zmm0 & not.o(arg5))
                            
                            if ((temp0_2123 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                            
                            zmm3 = (zmm3 & temp0_2128) | (temp0_2128 & not.o(zmm2))
                            arg5 = var_568_3
                            arg7 = var_578_7
                        
                        zmm4 = arg8
                        arg8 = zmm9
                        zmm9 = var_4a8_4
                        arg6 = _mm_cmpeq_epi32(arg6, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_2085 & 1) != 0)
                            zmm0.d = arg6[0]
                            var_4b8_2 = zmm0
                            
                            if ((temp0_2085 & 2) != 0)
                                goto label_14024c52e
                            
                            goto label_14024c4ff
                        
                        if ((temp0_2085 & 2) != 0)
                        label_14024c52e:
                            zmm1 = var_4b8_2
                            var_4b8_2 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, zmm1, 1), zmm1, 0xe2)
                            
                            if ((temp0_2085 & 4) != 0)
                                goto label_14024c507
                            
                            goto label_14024c54b
                        
                    label_14024c4ff:
                        
                        if ((temp0_2085 & 4) == 0)
                        label_14024c54b:
                            
                            if ((temp0_2085 & 8) != 0)
                                zmm0 = var_4b8_2
                                var_4b8_2 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg6, zmm0, 0x23), 0x24)
                        else
                        label_14024c507:
                            zmm1 = var_4b8_2
                            var_4b8_2 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg6, zmm1, 0x32), 0x84)
                            
                            if ((temp0_2085 & 8) != 0)
                                zmm0 = var_4b8_2
                                var_4b8_2 =
                                    _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg6, zmm0, 0x23), 0x24)
                        
                        zmm0 = data_142fc95e0
                        arg6 = zmm4 & zmm0
                        zmm1 = _mm_slli_epi32(var_598_2 & _mm_cmpeq_epi32(zmm0, arg6), 0x1f)
                        char temp0_2146 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_2146 == 0)
                            zmm14 = var_528_5
                        else
                            if ((temp0_2146 & 1) == 0)
                                if ((temp0_2146 & 2) != 0)
                                    goto label_14024c662
                                
                                goto label_14024c5a9
                            
                            zmm1 = *zmm14[0].q
                            
                            if ((temp0_2146 & 2) != 0)
                            label_14024c662:
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm14 = var_528_5
                                
                                if ((temp0_2146 & 4) == 0)
                                    goto label_14024c5bd
                                
                                goto label_14024c686
                            
                        label_14024c5a9:
                            zmm14 = var_528_5
                            
                            if ((temp0_2146 & 4) != 0)
                            label_14024c686:
                                zmm1 =
                                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*zmm3.q, zmm1, 0x30), 0x84)
                                
                                if ((temp0_2146 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm1, 
                                            0x20), 
                                        0x24)
                            else
                            label_14024c5bd:
                                
                                if ((temp0_2146 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm1, 
                                            0x20), 
                                        0x24)
                        
                        zmm7 = var_558_3
                        arg6 = _mm_cmpeq_epi32(arg6, zx.o(0)) & not.o(zmm1)
                        
                        if ((temp0_2085 & 1) != 0)
                            zmm15[0] = arg6[0]
                            
                            if ((temp0_2085 & 2) != 0)
                                goto label_14024c6f1
                            
                            goto label_14024c6c6
                        
                        if ((temp0_2085 & 2) != 0)
                        label_14024c6f1:
                            zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, zmm15, 1), zmm15, 0xe2)
                            
                            if ((temp0_2085 & 4) != 0)
                                goto label_14024c6d3
                            
                            goto label_14024c6fa
                        
                    label_14024c6c6:
                        
                        if ((temp0_2085 & 4) == 0)
                        label_14024c6fa:
                            
                            if ((temp0_2085 & 8) != 0)
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg6, zmm15, 0x23), 0x24)
                        else
                        label_14024c6d3:
                            zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg6, zmm15, 0x32), 0x84)
                            
                            if ((temp0_2085 & 8) != 0)
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
                    char temp0_2171 = _mm_movemask_ps(zmm0)
                    
                    if (temp0_2171 == 0)
                        zmm12 = var_4b8_2
                        arg8 = var_588_5
                    else
                        int32_t var_4a8_5[0x4] = zmm9
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f) & arg5
                        zmm12 = _mm_srai_epi32(zmm12, 0x1f) & zmm1
                        uint32_t temp0_2175 = _mm_movemask_ps(zmm12)
                        zmm9 = zx.o(0)
                        float var_538_4[0x4] = zmm15
                        float var_4f8_7[0x4] = zmm0
                        uint128_t var_598_3
                        
                        if (temp0_2175 == 0)
                            var_598_3 = zx.o(0)
                            zmm7 = zx.o(0)
                        else
                            zmm15 = arg5
                            char rbx_45 = temp0_2175.b
                            
                            if ((rbx_45 & 1) == 0)
                                if ((rbx_45 & 2) != 0)
                                    goto label_14024c87a
                                
                                goto label_14024c7af
                            
                            arg5 = *zmm11[0].q
                            
                            if ((rbx_45 & 2) != 0)
                            label_14024c87a:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, arg5, 0), 
                                    arg5, 0xe2)
                                arg5 = zmm0
                                
                                if ((rbx_45 & 4) == 0)
                                    goto label_14024c7b8
                                
                                goto label_14024c893
                            
                        label_14024c7af:
                            
                            if ((rbx_45 & 4) != 0)
                            label_14024c893:
                                zmm0 = _mm_shuffle_ps(*arg8[0].q, arg5, 0x30)
                                arg5 = _mm_shuffle_ps(arg5, zmm0, 0x84)
                                
                                if ((rbx_45 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            else
                            label_14024c7b8:
                                
                                if ((rbx_45 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            char temp0_2180 = _mm_movemask_ps(zmm1)
                            zmm1 = zx.o(0)
                            
                            if ((temp0_2180 & 1) != 0)
                                zmm1[0] = arg5[0]
                            
                            zmm7 = data_1434426c0
                            zmm12 ^= zmm0
                            
                            if ((temp0_2180 & 2) == 0)
                                var_598_3 = zmm1
                            else
                                var_598_3 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm1, 1), zmm1, 0xe2)
                            
                            zmm1 = _mm_add_epi64(zmm11, zmm7)
                            zmm2 = _mm_shuffle_epi32(zmm12, 0x50)
                            
                            if ((temp0_2180 & 4) != 0)
                                var_598_3 = _mm_shuffle_ps(var_598_3, 
                                    _mm_shuffle_ps(arg5, var_598_3, 0x32), 0x84)
                            
                            zmm0 = zmm2 & not.o(zmm1)
                            
                            if ((temp0_2180 & 8) != 0)
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
                                
                                if ((temp0_2180 & 1) == 0)
                                    goto label_14024c9e7
                                
                                goto label_14024c973
                            
                            arg5 = _mm_shuffle_ps(arg5, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e).q, arg5, 0x20), 0x24)
                            zmm7 = zx.o(0)
                            
                            if ((temp0_2180 & 1) != 0)
                            label_14024c973:
                                zmm7[0] = arg5[0]
                                zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                
                                if ((temp0_2180 & 2) != 0)
                                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm7, 1), zmm7, 0xe2)
                            else
                            label_14024c9e7:
                                zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                
                                if ((temp0_2180 & 2) != 0)
                                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm7, 1), zmm7, 0xe2)
                            
                            zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm1 = _mm_add_epi64(zmm1, zmm12)
                            int32_t temp0_2213[0x4] = _mm_add_epi64(arg6, zmm12)
                            
                            if ((temp0_2180 & 4) != 0)
                                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg5, zmm7, 0x32), 0x84)
                            
                            if ((temp0_2180 & 8) != 0)
                                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(arg5, zmm7, 0x23), 0x24)
                            
                            arg5 = zmm15
                            zmm15 = var_538_4
                            zmm11 = (zmm11 & zmm2) | (zmm2 & not.o(temp0_2213))
                            arg8 = (arg8 & zmm3) | (zmm3 & not.o(zmm1))
                        
                        zmm0 = data_1434422d0
                        zmm1 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & arg5
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(zmm14 & zmm1, 0x1f), 0x1f)
                        char temp0_2221 = _mm_movemask_ps(zmm2)
                        uint32_t var_518_5[0x4] = zmm7
                        
                        if (temp0_2221 == 0)
                            zmm12 = zx.o(0)
                            zmm2 = var_598_3
                        else
                            if ((temp0_2221 & 1) == 0)
                                if ((temp0_2221 & 2) != 0)
                                    goto label_14024cc10
                                
                                goto label_14024cab6
                            
                            arg5 = *zmm11[0].q
                            
                            if ((temp0_2221 & 2) != 0)
                            label_14024cc10:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, arg5, 0), 
                                    arg5, 0xe2)
                                arg5 = zmm0
                                
                                if ((temp0_2221 & 4) == 0)
                                    goto label_14024cabf
                                
                                goto label_14024cc29
                            
                        label_14024cab6:
                            
                            if ((temp0_2221 & 4) != 0)
                            label_14024cc29:
                                zmm0 = _mm_shuffle_ps(*arg8[0].q, arg5, 0x30)
                                arg5 = _mm_shuffle_ps(arg5, zmm0, 0x84)
                                
                                if ((temp0_2221 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            else
                            label_14024cabf:
                                
                                if ((temp0_2221 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, arg5, 0x20)
                                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                            
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            char temp0_2226 = _mm_movemask_ps(zmm1)
                            arg6 = zx.o(0)
                            
                            if ((temp0_2226 & 1) != 0)
                                arg6[0] = arg5[0]
                            
                            zmm9 = data_1434426c0
                            zmm2 ^= zmm0
                            
                            if ((temp0_2226 & 2) != 0)
                                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, arg6, 1), arg6, 0xe2)
                            
                            zmm1 = _mm_add_epi64(zmm11, zmm9)
                            zmm3 = _mm_shuffle_epi32(zmm2, 0x50)
                            
                            if ((temp0_2226 & 4) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg5, arg6, 0x32), 0x84)
                            
                            zmm0 = zmm3 & not.o(zmm1)
                            arg7 = zmm11
                            
                            if ((temp0_2226 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, arg6, 0x23)
                                arg6 = _mm_shuffle_ps(arg6, arg5, 0x24)
                            
                            int32_t var_528_6[0x4] = arg6
                            zmm1 = _mm_add_epi64(arg8, zmm9)
                            arg6 = _mm_shuffle_epi32(zmm2, 0xfa)
                            zmm11 = (zmm11 & zmm3) | zmm0
                            
                            if ((temp0_2221 & 1) != 0)
                                arg5 = *zmm11[0].q
                            
                            zmm0 = arg6 & not.o(zmm1)
                            zmm4 = arg8
                            arg8 &= arg6
                            
                            if ((temp0_2221 & 2) != 0)
                                arg5 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, arg5, 0), 
                                    arg5, 0xe2)
                                zmm2 = var_598_3
                                arg8 |= zmm0
                                
                                if ((temp0_2221 & 4) != 0)
                                label_14024cc79:
                                    arg5 = _mm_shuffle_ps(arg5, 
                                        _mm_shuffle_ps(*arg8[0].q, arg5, 0x30), 0x84)
                                    
                                    if ((temp0_2221 & 8) == 0)
                                        goto label_14024cbb1
                                    
                                    goto label_14024cc99
                            else
                                zmm2 = var_598_3
                                arg8 |= zmm0
                                
                                if ((temp0_2221 & 4) != 0)
                                    goto label_14024cc79
                            
                            if ((temp0_2221 & 8) == 0)
                            label_14024cbb1:
                                zmm12 = zx.o(0)
                                
                                if ((temp0_2226 & 1) == 0)
                                    goto label_14024ccab
                                
                                goto label_14024cbbf
                            
                        label_14024cc99:
                            arg5 = _mm_shuffle_ps(arg5, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, arg5, 0x20), 0x24)
                            zmm12 = zx.o(0)
                            
                            if ((temp0_2226 & 1) != 0)
                            label_14024cbbf:
                                zmm12[0] = arg5[0]
                                arg6 = _mm_slli_epi32(arg6, 0x1f)
                                zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                
                                if ((temp0_2226 & 2) != 0)
                                    zmm12 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm12, 1), zmm12, 0xe2)
                            else
                            label_14024ccab:
                                arg6 = _mm_slli_epi32(arg6, 0x1f)
                                zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                                
                                if ((temp0_2226 & 2) != 0)
                                    zmm12 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm12, 1), zmm12, 0xe2)
                            
                            int32_t temp0_2256[0x4] = _mm_srai_epi32(arg6, 0x1f)
                            zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                            arg8 = _mm_add_epi64(arg8, zmm9)
                            int32_t temp0_2259[0x4] = _mm_add_epi64(zmm11, zmm9)
                            
                            if ((temp0_2226 & 4) != 0)
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(arg5, zmm12, 0x32), 0x84)
                            
                            arg6 = temp0_2256 & not.o(arg8)
                            
                            if ((temp0_2226 & 8) != 0)
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(arg5, zmm12, 0x23), 0x24)
                            
                            zmm11 = arg7 & zmm3
                            arg8 = zmm4 & temp0_2256
                            arg7 = var_578_7
                            zmm4 = var_5a8_1
                            arg5 = var_568_3
                            zmm15 = var_538_4
                            zmm9 = var_528_6
                            zmm11 |= zmm3 & not.o(temp0_2259)
                            arg8 |= arg6
                        
                        zmm0 = data_142fc95e0
                        zmm1 = _mm_cmpeq_epi32(zmm4 & zmm0, zmm0) & arg5
                        int32_t temp0_2266[0x4] =
                            _mm_srai_epi32(_mm_slli_epi32(zmm14 & zmm1, 0x1f), 0x1f)
                        char temp0_2267 = _mm_movemask_ps(temp0_2266)
                        
                        if (temp0_2267 == 0)
                            arg8 = arg5
                            zmm3 = zx.o(0)
                            arg6 = zx.o(0)
                        else
                            zmm2 = zmm11
                            
                            if ((temp0_2267 & 1) == 0)
                                if ((temp0_2267 & 2) != 0)
                                    goto label_14024cf13
                                
                                goto label_14024cda1
                            
                            zmm4 = *zmm2.q
                            
                            if ((temp0_2267 & 2) != 0)
                            label_14024cf13:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e).q, zmm4, 0), 
                                    zmm4, 0xe2)
                                zmm4 = zmm0
                                
                                if ((temp0_2267 & 4) == 0)
                                    goto label_14024cdab
                                
                                goto label_14024cf2d
                            
                        label_14024cda1:
                            
                            if ((temp0_2267 & 4) != 0)
                            label_14024cf2d:
                                zmm0 = _mm_shuffle_ps(*arg8[0].q, zmm4, 0x30)
                                zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x84)
                                
                                if ((temp0_2267 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm4, 0x20)
                                    zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                            else
                            label_14024cdab:
                                
                                if ((temp0_2267 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm4, 0x20)
                                    zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                            
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            char temp0_2272 = _mm_movemask_ps(zmm1)
                            zmm3 = zx.o(0)
                            
                            if ((temp0_2272 & 1) != 0)
                                zmm3.d = zmm4[0]
                            
                            zmm7 = data_1434426c0
                            arg6 = temp0_2266 ^ zmm0
                            
                            if ((temp0_2272 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm3, 1), zmm3, 0xe2)
                            
                            zmm0 = _mm_add_epi64(zmm2, zmm7)
                            zmm1 = _mm_shuffle_epi32(arg6, 0x50)
                            
                            if ((temp0_2272 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x32), 0x84)
                            
                            zmm2 &= zmm1
                            zmm1 &= not.o(zmm0)
                            
                            if ((temp0_2272 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm4, zmm3, 0x23), 0x24)
                            
                            zmm7 = _mm_add_epi64(zmm7, arg8)
                            zmm0 = _mm_shuffle_epi32(arg6, 0xfa)
                            zmm2 |= zmm1
                            
                            if ((temp0_2267 & 1) != 0)
                                zmm1 = *zmm2.q
                            
                            if ((temp0_2267 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q, zmm1, 0), 
                                    zmm1, 0xe2)
                            
                            zmm4 = var_568_3
                            arg7 = var_578_7
                            zmm2 = var_598_3
                            arg8 = (arg8 & zmm0) | (zmm0 & not.o(zmm7))
                            
                            if ((temp0_2267 & 4) == 0)
                                if ((temp0_2267 & 8) != 0)
                                    goto label_14024cf72
                                
                                goto label_14024ce9c
                            
                            zmm1 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*arg8[0].q, zmm1, 0x30), 0x84)
                            
                            if ((temp0_2267 & 8) != 0)
                            label_14024cf72:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg8, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                arg6 = zx.o(0)
                                
                                if ((temp0_2272 & 1) != 0)
                                    goto label_14024cea9
                                
                                goto label_14024cf83
                            
                        label_14024ce9c:
                            arg6 = zx.o(0)
                            
                            if ((temp0_2272 & 1) == 0)
                            label_14024cf83:
                                
                                if ((temp0_2272 & 2) != 0)
                                label_14024cf97:
                                    arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg6, 1), arg6, 0xe2)
                                    
                                    if ((temp0_2272 & 4) != 0)
                                        goto label_14024cec6
                                    
                                    goto label_14024cfa3
                            else
                            label_14024cea9:
                                arg6[0] = zmm1[0]
                                
                                if ((temp0_2272 & 2) != 0)
                                    goto label_14024cf97
                            
                            if ((temp0_2272 & 4) == 0)
                            label_14024cfa3:
                                arg8 = zmm4
                                
                                if ((temp0_2272 & 8) != 0)
                                    arg6 =
                                        _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                            else
                            label_14024cec6:
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x32), 0x84)
                                arg8 = zmm4
                                
                                if ((temp0_2272 & 8) != 0)
                                    arg6 =
                                        _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                        
                        zmm0 = __paddq_xmmdq_memdq(var_398_2, var_548_3)
                        zmm1 = __paddq_xmmdq_memdq(var_438_2, var_508_5)
                        arg5 = data_1434426c0
                        zmm1 = __paddq_xmmdq_memdq(zmm1, var_4d8_4)
                        zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm0, temp0_2049), arg5)
                        zmm1 = _mm_add_epi64(zmm1, arg5)
                        arg5 = _mm_shuffle_epi32(var_4f8_7, 0x50) & zmm1
                        zmm1 = _mm_shuffle_epi32(var_4f8_7, 0xfa) & zmm0
                        int64_t rax_490 = arg5[0].q
                        int64_t rbp_41 = _mm_shuffle_epi32(arg5, 0x4e).q
                        int64_t rbx_48 = zmm1[0].q
                        int64_t rdi_16 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_490)), 
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
                        float temp0_2323[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm0))
                        arg5 = data_143442690
                        zmm12 = _mm_mul_ps(zmm12, _mm_div_ps(temp0_2323, arg5))
                        zmm0 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm0)), arg5)
                        char temp52_1 = temp0_2171 & 1
                        
                        if (temp52_1 != 0)
                            zmm1 = var_588_5
                            zmm1[0] = zmm2.d
                            var_588_5 = zmm1
                        
                        arg6 = _mm_mul_ps(arg6, zmm0)
                        zmm9 = _mm_add_ps(zmm9, zmm12)
                        zmm4 = var_5a8_1
                        arg5 = arg8
                        
                        if (temp52_1 == 0)
                            zmm12 = var_4b8_2
                            arg8 = var_588_5
                            zmm3 = _mm_add_ps(zmm3, arg6)
                            
                            if (temp52_1 != 0)
                                zmm15[0] = zmm3.d
                        else
                            zmm12 = var_4b8_2
                            zmm12[0] = zmm9[0]
                            arg8 = var_588_5
                            zmm3 = _mm_add_ps(zmm3, arg6)
                            
                            if (temp52_1 != 0)
                                zmm15[0] = zmm3.d
                        
                        arg6 = var_4c8_4
                        char temp74_1 = temp0_2171 & 2
                        
                        if (temp74_1 != 0)
                            arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg8, 1), arg8, 0xe2)
                            
                            if (temp74_1 != 0)
                                goto label_14024d3f3
                        else if (temp74_1 != 0)
                        label_14024d3f3:
                            zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm12, 1), zmm12, 0xe2)
                            
                            if (temp74_1 != 0)
                                goto label_14024d145
                            
                            goto label_14024d3fd
                        
                        bool cond:301_1
                        bool cond:302_1
                        bool cond:314_1
                        bool cond:315_1
                        
                        if (temp74_1 != 0)
                        label_14024d145:
                            zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm15, 1), zmm15, 0xe2)
                            char temp100_1 = temp0_2171 & 4
                            cond:301_1 = temp100_1 == 0
                            cond:302_1 = temp100_1 != 0
                            cond:314_1 = temp100_1 == 0
                            cond:315_1 = temp100_1 != 0
                            
                            if (temp100_1 != 0)
                                goto label_14024d40e
                            
                            goto label_14024d152
                        
                    label_14024d3fd:
                        char temp99_1 = temp0_2171 & 4
                        cond:301_1 = temp99_1 == 0
                        cond:302_1 = temp99_1 != 0
                        cond:314_1 = temp99_1 == 0
                        cond:315_1 = temp99_1 != 0
                        
                        if (temp99_1 == 0)
                        label_14024d152:
                            
                            if (not(cond:301_1))
                            label_14024d161:
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm9, zmm12, 0x32), 0x84)
                                
                                if (cond:315_1)
                                    goto label_14024d427
                                
                                goto label_14024d16c
                        else
                        label_14024d40e:
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x32), 0x84)
                            
                            if (cond:302_1)
                                goto label_14024d161
                        
                        bool cond:341_1
                        bool cond:347_1
                        bool cond:348_1
                        bool cond:342_1
                        
                        if (cond:314_1)
                        label_14024d16c:
                            char temp118_1 = temp0_2171 & 8
                            cond:341_1 = temp118_1 == 0
                            cond:342_1 = temp118_1 != 0
                            cond:347_1 = temp118_1 == 0
                            cond:348_1 = temp118_1 != 0
                            
                            if (temp118_1 != 0)
                            label_14024d17a:
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm2, arg8, 0x23), 0x24)
                                
                                if (cond:342_1)
                                    goto label_14024d440
                                
                                goto label_14024d185
                        else
                        label_14024d427:
                            zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm3, zmm15, 0x32), 0x84)
                            char temp119_1 = temp0_2171 & 8
                            cond:341_1 = temp119_1 == 0
                            cond:342_1 = temp119_1 != 0
                            cond:347_1 = temp119_1 == 0
                            cond:348_1 = temp119_1 != 0
                            
                            if (temp119_1 != 0)
                                goto label_14024d17a
                        
                        if (cond:341_1)
                        label_14024d185:
                            zmm9 = var_4a8_5
                            
                            if (not(cond:347_1))
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm3, zmm15, 0x23), 0x24)
                        else
                        label_14024d440:
                            zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm9, zmm12, 0x23), 0x24)
                            zmm9 = var_4a8_5
                            
                            if (cond:348_1)
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm3, zmm15, 0x23), 0x24)
                    
                    arg5 ^= var_428_3
                    zmm0 = _mm_slli_epi32(zmm14 & arg5, 0x1f)
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                    label_14024d7cc:
                        zmm7 = var_558_3
                        zmm1 = var_498_2
                        arg5 = var_5b8
                    else
                        zmm7 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_488_2)
                        zmm11 = zmm14 & zmm7
                        zmm1 = _mm_slli_epi32(zmm11, 0x1f)
                        char temp0_2346 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_2346 != 0)
                            zmm4 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm4
                            float var_568_4[0x4] = arg5
                            char rdx_30
                            
                            if (_mm_movemask_ps(zmm1) == 0)
                                zmm4 &= zmm0
                                rdx_30 = temp0_2346
                                
                                if ((rdx_30 & 1) != 0)
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
                                int32_t temp0_2357[0x4] = __paddq_xmmdq_memdq(var_438_2, var_508_5)
                                zmm2 = data_1434426c0
                                int32_t temp0_2358[0x4] = __paddq_xmmdq_memdq(temp0_2357, var_4d8_4)
                                arg5 = _mm_add_epi64(__paddq_xmmdq_memdq(arg5, temp0_2049), zmm2)
                                int32_t temp0_2361[0x4] = _mm_add_epi64(temp0_2358, zmm2)
                                zmm2 = _mm_shuffle_epi32(zmm1, 0x50) & temp0_2361
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
                                rdx_30 = temp0_2346
                                
                                if ((rdx_30 & 1) != 0)
                                    arg8[0] = zmm4[0]
                            
                            arg6 = var_4c8_4
                            
                            if ((rdx_30 & 2) != 0)
                                zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg8, 1), arg8, 0xe2)
                                arg8 = zmm0
                                
                                if ((rdx_30 & 4) != 0)
                                    goto label_14024d466
                                
                                goto label_14024d33e
                            
                            if ((rdx_30 & 4) == 0)
                            label_14024d33e:
                                
                                if ((rdx_30 & 8) != 0)
                                    arg8 =
                                        _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm4, arg8, 0x23), 0x24)
                            else
                            label_14024d466:
                                zmm0 = _mm_shuffle_ps(zmm4, arg8, 0x32)
                                arg8 = _mm_shuffle_ps(arg8, zmm0, 0x84)
                                
                                if ((rdx_30 & 8) != 0)
                                    arg8 =
                                        _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm4, arg8, 0x23), 0x24)
                            
                            arg5 = data_1434422d0
                            zmm4 = var_5a8_1 & arg5
                            arg5 = _mm_srai_epi32(
                                _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm4) & zmm11, 0x1f), 0x1f)
                            char temp0_2379 = _mm_movemask_ps(arg5)
                            
                            if (temp0_2379 == 0)
                                arg5 = var_568_4
                            else
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm3 = var_4e8_5
                                
                                if ((temp0_2379 & 1) != 0)
                                    zmm1 = zx.o(*zmm3.q)
                                
                                arg6 = data_1434426b0
                                arg5 ^= zmm0
                                arg7 = zmm14
                                
                                if ((temp0_2379 & 2) != 0)
                                    zmm14 = var_568_4
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                            zmm1, 0), 
                                        zmm1, 0xe2)
                                else
                                    zmm14 = var_568_4
                                
                                zmm2 = _mm_add_epi64(zmm9, arg6)
                                int32_t temp0_2396[0x4] = _mm_add_epi64(arg6, zmm3)
                                uint32_t temp0_2397[0x4] = _mm_shuffle_epi32(arg5, 0x50)
                                arg5 = _mm_shuffle_epi32(arg5, 0xfa)
                                
                                if ((temp0_2379 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm9[0].q), zmm1, 0x30), 0x84)
                                
                                if ((temp0_2379 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm9, 0x4e).q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                arg6 = var_4c8_4
                                var_4e8_5 = (zmm3 & temp0_2397) | (temp0_2397 & not.o(temp0_2396))
                                zmm1 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_143442cd0), data_143442b40))
                                zmm9 = (zmm9 & arg5) | (arg5 & not.o(zmm2))
                                arg5 = zmm14
                                zmm14 = arg7
                                arg7 = var_578_7
                                arg8 = arg8
                                zmm7 = zmm7
                            
                            zmm4 = _mm_cmpeq_epi32(zmm4, zx.o(0)) & not.o(zmm1)
                            
                            if ((rdx_30 & 1) != 0)
                                zmm12[0] = zmm4[0]
                                
                                if ((rdx_30 & 2) != 0)
                                    goto label_14024d5e3
                                
                                goto label_14024d5b8
                            
                            if ((rdx_30 & 2) != 0)
                            label_14024d5e3:
                                zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm12, 1), zmm12, 0xe2)
                                
                                if ((rdx_30 & 4) != 0)
                                    goto label_14024d5c5
                                
                                goto label_14024d5ec
                            
                        label_14024d5b8:
                            
                            if ((rdx_30 & 4) == 0)
                            label_14024d5ec:
                                
                                if ((rdx_30 & 8) != 0)
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(zmm4, zmm12, 0x23), 0x24)
                            else
                            label_14024d5c5:
                                zmm12 =
                                    _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm4, zmm12, 0x32), 0x84)
                                
                                if ((rdx_30 & 8) != 0)
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(zmm4, zmm12, 0x23), 0x24)
                            
                            zmm0 = data_142fc95e0
                            zmm2 = var_5a8_1 & zmm0
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm2)
                            char temp0_2416 = _mm_movemask_ps(_mm_slli_epi32(zmm11 & zmm0, 0x1f))
                            
                            if (temp0_2416 != 0)
                                if ((temp0_2416 & 1) == 0)
                                    if ((temp0_2416 & 2) != 0)
                                        goto label_14024ddc5
                                    
                                    goto label_14024d63b
                                
                                zmm1 = zx.o(*var_4e8_5.q)
                                
                                if ((temp0_2416 & 2) != 0)
                                label_14024ddc5:
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            zx.o(*__pshufd_xmmdq_memdq_immb(var_4e8_5, 0x4e).q), 
                                            zmm1, 0), 
                                        zmm1, 0xe2)
                                    
                                    if ((temp0_2416 & 4) == 0)
                                        goto label_14024d645
                                    
                                    goto label_14024dde2
                                
                            label_14024d63b:
                                
                                if ((temp0_2416 & 4) != 0)
                                label_14024dde2:
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm9[0].q), zmm1, 0x30), 0x84)
                                    
                                    if ((temp0_2416 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm9, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                else
                                label_14024d645:
                                    
                                    if ((temp0_2416 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm9, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                
                                zmm0 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_143442cd0), data_143442b40))
                            
                            zmm2 = _mm_cmpeq_epi32(zmm2, zx.o(0)) & not.o(zmm0)
                            
                            if ((rdx_30 & 1) != 0)
                                zmm15[0] = zmm2.d
                                
                                if ((rdx_30 & 2) != 0)
                                    goto label_14024d6bf
                                
                                goto label_14024d694
                            
                            if ((rdx_30 & 2) != 0)
                            label_14024d6bf:
                                zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm15, 1), zmm15, 0xe2)
                                
                                if ((rdx_30 & 4) != 0)
                                    goto label_14024d6a1
                                
                                goto label_14024d6c8
                            
                        label_14024d694:
                            
                            if ((rdx_30 & 4) == 0)
                            label_14024d6c8:
                                
                                if ((rdx_30 & 8) != 0)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm2, zmm15, 0x23), 0x24)
                            else
                            label_14024d6a1:
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm2, zmm15, 0x32), 0x84)
                                
                                if ((rdx_30 & 8) != 0)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm2, zmm15, 0x23), 0x24)
                        
                        arg5 = (arg5 ^ zmm7) & zmm14
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(arg5, 0x1f)) == 0)
                            goto label_14024d7cc
                        
                        zmm0 = __pcmpeqd_xmmdq_memdq(var_488_2, data_143442ad0)
                        char temp0_2434 = _mm_movemask_ps(_mm_slli_epi32(zmm14 & zmm0, 0x1f))
                        zmm7 = var_558_3
                        
                        if (temp0_2434 != 0)
                            zmm2 = zx.o(0)
                            char temp45_1 = temp0_2434 & 1
                            
                            if (temp45_1 != 0)
                                arg8[0] = zmm2.d
                                
                                if (temp45_1 != 0)
                                    goto label_14024db87
                            else if (temp45_1 != 0)
                            label_14024db87:
                                zmm12[0] = zmm2.d
                                
                                if (temp45_1 != 0)
                                    goto label_14024d747
                                
                                goto label_14024db92
                            
                            bool cond:215_1
                            bool cond:216_1
                            bool cond:238_1
                            bool cond:239_1
                            
                            if (temp45_1 != 0)
                            label_14024d747:
                                zmm15[0] = zmm2.d
                                char temp67_1 = temp0_2434 & 2
                                cond:215_1 = temp67_1 == 0
                                cond:216_1 = temp67_1 != 0
                                cond:238_1 = temp67_1 == 0
                                cond:239_1 = temp67_1 != 0
                                
                                if (temp67_1 != 0)
                                    goto label_14024dba9
                                
                                goto label_14024d755
                            
                        label_14024db92:
                            char temp66_1 = temp0_2434 & 2
                            cond:215_1 = temp66_1 == 0
                            cond:216_1 = temp66_1 != 0
                            cond:238_1 = temp66_1 == 0
                            cond:239_1 = temp66_1 != 0
                            
                            if (temp66_1 == 0)
                            label_14024d755:
                                
                                if (not(cond:215_1))
                                label_14024d769:
                                    zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm12, 0), 
                                        zmm12, 0xe2)
                                    
                                    if (cond:239_1)
                                        goto label_14024dbc7
                                    
                                    goto label_14024d773
                            else
                            label_14024dba9:
                                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                                
                                if (cond:216_1)
                                    goto label_14024d769
                            
                            bool cond:280_1
                            bool cond:281_1
                            bool cond:299_1
                            bool cond:300_1
                            
                            if (not(cond:238_1))
                            label_14024dbc7:
                                zmm15 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm15, 0), zmm15, 0xe2)
                                char temp91_1 = temp0_2434 & 4
                                cond:280_1 = temp91_1 == 0
                                cond:281_1 = temp91_1 != 0
                                cond:299_1 = temp91_1 == 0
                                cond:300_1 = temp91_1 != 0
                                
                                if (temp91_1 != 0)
                                    goto label_14024d785
                                
                                goto label_14024dbd4
                            
                        label_14024d773:
                            char temp90_1 = temp0_2434 & 4
                            cond:280_1 = temp90_1 == 0
                            cond:281_1 = temp90_1 != 0
                            cond:299_1 = temp90_1 == 0
                            cond:300_1 = temp90_1 != 0
                            
                            if (temp90_1 == 0)
                            label_14024dbd4:
                                
                                if (not(cond:280_1))
                                label_14024dbe3:
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(zx.o(0), zmm12, 0x30), 0x84)
                                    
                                    if (cond:300_1)
                                        goto label_14024d79f
                                    
                                    goto label_14024dbee
                            else
                            label_14024d785:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                                
                                if (cond:281_1)
                                    goto label_14024dbe3
                            
                            bool cond:327_1
                            bool cond:328_1
                            bool cond:339_1
                            bool cond:340_1
                            
                            if (not(cond:299_1))
                            label_14024d79f:
                                zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zx.o(0), zmm15, 0x30), 
                                    0x84)
                                char temp111_1 = temp0_2434 & 8
                                cond:327_1 = temp111_1 == 0
                                cond:328_1 = temp111_1 != 0
                                cond:339_1 = temp111_1 == 0
                                cond:340_1 = temp111_1 != 0
                                
                                if (temp111_1 != 0)
                                    goto label_14024dc00
                                
                                goto label_14024d7ad
                            
                        label_14024dbee:
                            char temp110_1 = temp0_2434 & 8
                            cond:327_1 = temp110_1 == 0
                            cond:328_1 = temp110_1 != 0
                            cond:339_1 = temp110_1 == 0
                            cond:340_1 = temp110_1 != 0
                            
                            if (temp110_1 != 0)
                            label_14024dc00:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                                
                                if (cond:328_1)
                                    goto label_14024d7bc
                                
                                goto label_14024dc0b
                            
                        label_14024d7ad:
                            
                            if (cond:327_1)
                            label_14024dc0b:
                                
                                if (not(cond:339_1))
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm2, zmm15, 0x20), 0x24)
                            else
                            label_14024d7bc:
                                zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x20), 
                                    0x24)
                                
                                if (cond:340_1)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm2, zmm15, 0x20), 0x24)
                        
                        char temp0_2517 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(arg5), 0x1f))
                        
                        if (temp0_2517 == 0)
                            zmm1 = var_498_2
                            arg5 = var_5b8
                        else
                            char temp51_1 = temp0_2517 & 1
                            
                            if (temp51_1 != 0)
                                arg8[0] = 0
                                
                                if (temp51_1 != 0)
                                    goto label_14024dce3
                                
                                goto label_14024dc46
                            
                            if (temp51_1 != 0)
                            label_14024dce3:
                                zmm12[0] = 0
                                zmm1 = var_498_2
                                arg5 = var_5b8
                                
                                if (temp51_1 != 0)
                                    goto label_14024dc58
                                
                                goto label_14024dcfa
                            
                        label_14024dc46:
                            zmm1 = var_498_2
                            arg5 = var_5b8
                            bool cond:236_1
                            bool cond:237_1
                            bool cond:259_1
                            bool cond:260_1
                            
                            if (temp51_1 != 0)
                            label_14024dc58:
                                zmm15[0] = 0
                                char temp73_1 = temp0_2517 & 2
                                cond:236_1 = temp73_1 == 0
                                cond:237_1 = temp73_1 != 0
                                cond:259_1 = temp73_1 == 0
                                cond:260_1 = temp73_1 != 0
                                
                                if (temp73_1 != 0)
                                    goto label_14024dd11
                                
                                goto label_14024dc66
                            
                        label_14024dcfa:
                            char temp72_1 = temp0_2517 & 2
                            cond:236_1 = temp72_1 == 0
                            cond:237_1 = temp72_1 != 0
                            cond:259_1 = temp72_1 == 0
                            cond:260_1 = temp72_1 != 0
                            
                            if (temp72_1 == 0)
                            label_14024dc66:
                                
                                if (not(cond:236_1))
                                label_14024dc7a:
                                    zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm12, 0), 
                                        zmm12, 0xe2)
                                    
                                    if (cond:260_1)
                                        goto label_14024dd2f
                                    
                                    goto label_14024dc84
                            else
                            label_14024dd11:
                                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                                
                                if (cond:237_1)
                                    goto label_14024dc7a
                            
                            bool cond:297_1
                            bool cond:298_1
                            bool cond:312_1
                            bool cond:313_1
                            
                            if (not(cond:259_1))
                            label_14024dd2f:
                                zmm15 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm15, 0), zmm15, 0xe2)
                                char temp98_1 = temp0_2517 & 4
                                cond:297_1 = temp98_1 == 0
                                cond:298_1 = temp98_1 != 0
                                cond:312_1 = temp98_1 == 0
                                cond:313_1 = temp98_1 != 0
                                
                                if (temp98_1 != 0)
                                    goto label_14024dc96
                                
                                goto label_14024dd3c
                            
                        label_14024dc84:
                            char temp97_1 = temp0_2517 & 4
                            cond:297_1 = temp97_1 == 0
                            cond:298_1 = temp97_1 != 0
                            cond:312_1 = temp97_1 == 0
                            cond:313_1 = temp97_1 != 0
                            
                            if (temp97_1 == 0)
                            label_14024dd3c:
                                
                                if (not(cond:297_1))
                                label_14024dd4b:
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(zx.o(0), zmm12, 0x30), 0x84)
                                    
                                    if (cond:313_1)
                                        goto label_14024dcb0
                                    
                                    goto label_14024dd56
                            else
                            label_14024dc96:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                                
                                if (cond:298_1)
                                    goto label_14024dd4b
                            
                            bool cond:337_1
                            bool cond:338_1
                            bool cond:345_1
                            bool cond:346_1
                            
                            if (not(cond:312_1))
                            label_14024dcb0:
                                zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zx.o(0), zmm15, 0x30), 
                                    0x84)
                                char temp117_1 = temp0_2517 & 8
                                cond:337_1 = temp117_1 == 0
                                cond:338_1 = temp117_1 != 0
                                cond:345_1 = temp117_1 == 0
                                cond:346_1 = temp117_1 == 0
                                
                                if (temp117_1 != 0)
                                    goto label_14024dd68
                                
                                goto label_14024dcbe
                            
                        label_14024dd56:
                            char temp116_1 = temp0_2517 & 8
                            cond:337_1 = temp116_1 == 0
                            cond:338_1 = temp116_1 != 0
                            cond:345_1 = temp116_1 == 0
                            cond:346_1 = temp116_1 == 0
                            
                            if (temp116_1 != 0)
                            label_14024dd68:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                                
                                if (cond:338_1)
                                    goto label_14024dccd
                                
                                goto label_14024dd73
                            
                        label_14024dcbe:
                            
                            if (cond:337_1)
                            label_14024dd73:
                                
                                if (not(cond:345_1))
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zx.o(0), zmm15, 0x20), 0x24)
                            else
                            label_14024dccd:
                                zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x20), 
                                    0x24)
                                
                                if (not(cond:346_1))
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zx.o(0), zmm15, 0x20), 0x24)
                
                float temp0_2443[0x4] = _mm_sub_ps(arg8, arg5)
                zmm12 = _mm_sub_ps(zmm12, arg7)
                float temp0_2445[0x4] = _mm_mul_ps(temp0_2443, zmm1)
                zmm3 = arg5
                char temp28_1 = temp0_2038 & 1
                
                if (temp28_1 != 0)
                    zmm3.d = arg5.d f+ temp0_2445[0]
                    zmm15 = _mm_sub_ps(zmm15, arg6)
                    zmm12 = _mm_mul_ps(zmm12, zmm1)
                    zmm4 = arg7
                    
                    if (temp28_1 != 0)
                        goto label_14024d8c9
                    
                    goto label_14024d813
                
                zmm15 = _mm_sub_ps(zmm15, arg6)
                zmm12 = _mm_mul_ps(zmm12, zmm1)
                zmm4 = arg7
                
                if (temp28_1 != 0)
                label_14024d8c9:
                    zmm4 = arg7
                    zmm4[0] = zmm4[0] f+ zmm12[0]
                    zmm15 = _mm_mul_ps(zmm15, zmm1)
                    zmm2 = arg6
                    
                    if (temp28_1 != 0)
                        goto label_14024d823
                    
                    goto label_14024d8df
                
            label_14024d813:
                zmm15 = _mm_mul_ps(zmm15, zmm1)
                zmm2 = arg6
                bool cond:121_1
                bool cond:122_1
                bool cond:140_1
                bool cond:141_1
                
                if (temp28_1 != 0)
                label_14024d823:
                    zmm2.d = arg6.d f+ zmm15[0]
                    arg5 = _mm_add_ps(arg5, temp0_2445)
                    char temp41_1 = temp0_2038 & 2
                    cond:121_1 = temp41_1 == 0
                    cond:122_1 = temp41_1 != 0
                    cond:140_1 = temp41_1 == 0
                    cond:141_1 = temp41_1 != 0
                    
                    if (temp41_1 != 0)
                        goto label_14024d8f7
                    
                    goto label_14024d835
                
            label_14024d8df:
                arg5 = _mm_add_ps(arg5, temp0_2445)
                char temp40_1 = temp0_2038 & 2
                cond:121_1 = temp40_1 == 0
                cond:122_1 = temp40_1 != 0
                cond:140_1 = temp40_1 == 0
                cond:141_1 = temp40_1 != 0
                
                if (temp40_1 != 0)
                label_14024d8f7:
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm3, 1), zmm3, 0xe2)
                    arg7 = _mm_add_ps(arg7, zmm12)
                    
                    if (cond:122_1)
                        goto label_14024d84b
                    
                    goto label_14024d904
                
            label_14024d835:
                arg7 = _mm_add_ps(arg7, zmm12)
                
                if (not(cond:121_1))
                label_14024d84b:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm4, 1), zmm4, 0xe2)
                    arg6 = _mm_add_ps(arg6, zmm15)
                    
                    if (cond:141_1)
                        goto label_14024d919
                    
                    goto label_14024d858
                
            label_14024d904:
                arg6 = _mm_add_ps(arg6, zmm15)
                bool cond:169_1
                bool cond:170_1
                bool cond:191_1
                bool cond:192_1
                
                if (not(cond:140_1))
                label_14024d919:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, zmm2, 1), zmm2, 0xe2)
                    char temp61_1 = temp0_2038 & 4
                    cond:169_1 = temp61_1 == 0
                    cond:170_1 = temp61_1 != 0
                    cond:191_1 = temp61_1 == 0
                    cond:192_1 = temp61_1 != 0
                    
                    if (temp61_1 != 0)
                        goto label_14024d868
                    
                    goto label_14024d925
                
            label_14024d858:
                char temp60_1 = temp0_2038 & 4
                cond:169_1 = temp60_1 == 0
                cond:170_1 = temp60_1 != 0
                cond:191_1 = temp60_1 == 0
                cond:192_1 = temp60_1 != 0
                
                if (temp60_1 == 0)
                label_14024d925:
                    
                    if (not(cond:169_1))
                    label_14024d933:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x32), 0x84)
                        
                        if (cond:192_1)
                            goto label_14024d87f
                        
                        goto label_14024d93d
                else
                label_14024d868:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg5, zmm3, 0x32), 0x84)
                    
                    if (cond:170_1)
                        goto label_14024d933
                
                bool cond:234_1
                bool cond:235_1
                bool cond:257_1
                bool cond:258_1
                
                if (not(cond:191_1))
                label_14024d87f:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg6, zmm2, 0x32), 0x84)
                    char temp85_1 = temp0_2038 & 8
                    cond:234_1 = temp85_1 == 0
                    cond:235_1 = temp85_1 != 0
                    cond:257_1 = temp85_1 == 0
                    cond:258_1 = temp85_1 != 0
                    
                    if (temp85_1 != 0)
                        goto label_14024d94e
                    
                    goto label_14024d88c
                
            label_14024d93d:
                char temp84_1 = temp0_2038 & 8
                cond:234_1 = temp84_1 == 0
                cond:235_1 = temp84_1 != 0
                cond:257_1 = temp84_1 == 0
                cond:258_1 = temp84_1 != 0
                
                if (temp84_1 != 0)
                label_14024d94e:
                    arg5 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg5, zmm3, 0x23), 0x24)
                    zmm3 = var_368_1
                    
                    if (cond:235_1)
                        goto label_14024d8a8
                    
                    goto label_14024d960
                
            label_14024d88c:
                arg5 = zmm3
                zmm3 = var_368_1
                
                if (cond:234_1)
                label_14024d960:
                    arg7 = zmm4
                    
                    if (not(cond:257_1))
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg6, zmm2, 0x23), 0x24)
                else
                label_14024d8a8:
                    arg7 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x23), 0x24)
                    
                    if (cond:258_1)
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg6, zmm2, 0x23), 0x24)
                
                arg6 = zmm2
        
        zmm7 = __punpckldq_xmmdq_memdq(zmm7, var_468_3)
        zmm10 = __punpckldq_xmmdq_memdq(zmm10, var_448_4)
        char temp0_2478 = _mm_movemask_ps(var_418_3 & zmm3)
        
        if (temp0_2478 != 0)
            char temp0_2479 = temp0_2478 & 1
            
            if (temp0_2479 != 0)
                arg5[0] = 0
                
                if (temp0_2479 != 0)
                    goto label_14024da06
            else if (temp0_2479 != 0)
            label_14024da06:
                arg7[0] = 0
                
                if (temp0_2479 != 0)
                    goto label_14024d9af
                
                goto label_14024da0d
            
            bool cond:18_1
            bool cond:19_1
            bool cond:23_1
            bool cond:24_1
            
            if (temp0_2479 != 0)
            label_14024d9af:
                arg6[0] = 0
                char temp3_1 = temp0_2478 & 2
                cond:18_1 = temp3_1 == 0
                cond:19_1 = temp3_1 != 0
                cond:23_1 = temp3_1 == 0
                cond:24_1 = temp3_1 != 0
                
                if (temp3_1 != 0)
                    goto label_14024da1d
                
                goto label_14024d9b8
            
        label_14024da0d:
            char temp2_1 = temp0_2478 & 2
            cond:18_1 = temp2_1 == 0
            cond:19_1 = temp2_1 != 0
            cond:23_1 = temp2_1 == 0
            cond:24_1 = temp2_1 != 0
            
            if (temp2_1 == 0)
            label_14024d9b8:
                
                if (not(cond:18_1))
                label_14024d9c7:
                    arg7 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg7, 0), arg7, 0xe2)
                    
                    if (cond:24_1)
                        goto label_14024da2f
                    
                    goto label_14024d9cd
            else
            label_14024da1d:
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg5, 0), arg5, 0xe2)
                
                if (cond:19_1)
                    goto label_14024d9c7
            
            bool cond:37_1
            bool cond:38_1
            bool cond:47_1
            bool cond:48_1
            
            if (not(cond:23_1))
            label_14024da2f:
                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg6, 0), arg6, 0xe2)
                char temp9_1 = temp0_2478 & 4
                cond:37_1 = temp9_1 == 0
                cond:38_1 = temp9_1 != 0
                cond:47_1 = temp9_1 == 0
                cond:48_1 = temp9_1 != 0
                
                if (temp9_1 != 0)
                    goto label_14024d9d9
                
                goto label_14024da37
            
        label_14024d9cd:
            char temp8_1 = temp0_2478 & 4
            cond:37_1 = temp8_1 == 0
            cond:38_1 = temp8_1 != 0
            cond:47_1 = temp8_1 == 0
            cond:48_1 = temp8_1 != 0
            
            if (temp8_1 == 0)
            label_14024da37:
                
                if (not(cond:37_1))
                label_14024da41:
                    arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x30), 0x84)
                    
                    if (cond:48_1)
                        goto label_14024d9e8
                    
                    goto label_14024da48
            else
            label_14024d9d9:
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(0), arg5, 0x30), 0x84)
                
                if (cond:38_1)
                    goto label_14024da41
            
            bool cond:60_1
            bool cond:61_1
            bool cond:69_1
            bool cond:70_1
            
            if (not(cond:47_1))
            label_14024d9e8:
                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zx.o(0), arg6, 0x30), 0x84)
                char temp15_1 = temp0_2478 & 8
                cond:60_1 = temp15_1 == 0
                cond:61_1 = temp15_1 != 0
                cond:69_1 = temp15_1 == 0
                cond:70_1 = temp15_1 != 0
                
                if (temp15_1 != 0)
                    goto label_14024da54
                
                goto label_14024d9f1
            
        label_14024da48:
            char temp14_1 = temp0_2478 & 8
            cond:60_1 = temp14_1 == 0
            cond:61_1 = temp14_1 != 0
            cond:69_1 = temp14_1 == 0
            cond:70_1 = temp14_1 != 0
            
            if (temp14_1 != 0)
            label_14024da54:
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(0), arg5, 0x20), 0x24)
                
                if (cond:61_1)
                    goto label_14024d9fb
                
                goto label_14024da5a
            
        label_14024d9f1:
            
            if (cond:60_1)
            label_14024da5a:
                
                if (not(cond:69_1))
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zx.o(0), arg6, 0x20), 0x24)
            else
            label_14024d9fb:
                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x20), 0x24)
                
                if (cond:70_1)
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zx.o(0), arg6, 0x20), 0x24)
        
        zmm10 = _mm_unpacklo_epi64(zmm10, zmm7[0].q)
        zmm0 = zx.o(arg6[0].q)
        arg6 = _mm_unpackhi_ps(arg6, zx.o(0))
        float temp0_2500[0x4] = _mm_unpacklo_ps(arg5, arg7[0].q)
        float temp0_2501[0x4] = _mm_unpackhi_ps(arg5, arg7)
        uint128_t var_168 = _mm_shuffle_ps(temp0_2500, zmm0, 0x84)
        float var_158_1[0x4] = _mm_shuffle_ps(temp0_2500, zmm0, 0xde)
        uint128_t var_148_1 = temp0_2501.q | arg6[0].q << 0x40
        float var_138_1[0x4] = _mm_unpackhi_pd(temp0_2501, arg6[0].q)
        uint64_t i_4 = zx.q(_mm_movemask_ps(zmm3))
        
        do
            uint64_t rcx_53
            uint64_t rflags_1
            
            if (i_4 == 0)
                rcx_53 = 0x40
            else
                rcx_53, rflags_1 = _bit_scan_forward(i_4)
            float var_178[0x4] = zmm10
            result = sx.q(var_178[zx.q(rcx_53.d) & 3]) * 0x30
            *(arg1 + result + 0x10) = (&var_168)[rcx_53]
            i_4 &= rol.q(-2, rcx_53.b)
        while (i_4 != 0)
else
    uint128_t var_1a8_1 = _mm_shuffle_epi32(_mm_add_epi64(4, zx.o(arg4)), 0x44)
    float var_258_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
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
    
    float var_438_1[0x4] = _mm_shuffle_epi32(zx.o(rax_2), 0)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    arg6 = _mm_cmpeq_epi32(arg6, arg6)
    zmm10 = zx.o(0)
    
    do
        int64_t rax_27 = sx.q((r15 << 3).d)
        zmm0 = *(arg2 + rax_27)
        zmm1 = *(arg2 + rax_27 + 0x10)
        float var_4b8_1[0x4] = zmm0
        float var_398_1[0x4] = zmm1
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, zmm1, 0xdd), 3)
        int64_t rax_29 = sx.q(zmm0.d)
        int64_t rcx_8 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        int64_t rbp_2 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        zmm0 = zx.o(*(arg3 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rbp_2)), zmm0.q)
        int32_t temp0_127[0x4] = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + rax_29)), zx.q(*(arg3 + rcx_8))), zmm1[0].q)
        int32_t temp0_128[0x4] = _mm_cmpeq_epi32(temp0_127, arg6)
        zmm0 = temp0_128 ^ arg6
        int32_t var_568[0x4]
        float var_548[0x4]
        
        if (_mm_movemask_ps(zmm0) == 0)
            arg5 = arg7
            arg7 = var_548
            zmm14 = var_568
            zmm15 = zmm0
            zmm11 = var_5b8
        else
            uint32_t temp0_130[0x4] = _mm_shuffle_epi32(temp0_127, 0x4e)
            zmm14 = zx.o(0)
            zmm15 = _mm_cmpgt_epi32(zx.o(0), temp0_130)
            zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_127)
            zmm2 = temp0_127 & zmm0
            int64_t rax_32 = sx.q(zmm2.d)
            int64_t rcx_10 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
            int64_t rbp_4 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
            zmm2 = zx.o(*(arg4 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)))
            zmm3 = _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_4)), zmm2.q)
            zmm4 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_32)), zx.q(*(arg4 + rcx_10))), zmm3.q)
            zmm2 = temp0_128 & not.o(zmm4 & data_143442be0)
            arg6 = (arg7 & temp0_128)
                | (temp0_128 & not.o(_mm_srli_epi32(zmm4, 0x18)) & data_143442bf0)
            float var_4c8[0x4]
            zmm10 = (var_4c8 & temp0_128) | (temp0_128 & not.o(_mm_srli_epi32(zmm4, 0x1c)))
            zmm3 = _mm_slli_epi32(zmm10, 2) & zmm0
            int64_t rax_34 = sx.q(zmm3.d)
            int64_t rcx_12 = sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
            int64_t rbp_6 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
            zmm3 = zx.o(*(sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + &data_143442cf0))
            arg5 = _mm_unpacklo_epi32(zx.o(*(rbp_6 + &data_143442cf0)), zmm3.q)
            zmm3 = _mm_unpacklo_epi32(zx.o(*(rax_34 + &data_143442cf0)), 
                zx.o(*(rcx_12 + &data_143442cf0))[0].q)
            arg7 = arg6
            arg6 &= data_143442c00
            float var_348_1[0x4] = arg6
            zmm4 = (_mm_slli_epi32(zmm10, 3) | arg6) & zmm0
            uint32_t rax_37 = zx.d(*(sx.q(zmm4[0]) + &data_143442d10))
            int64_t rcx_14 = sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])
            uint32_t rbp_9 = zx.d(*(sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + &data_143442d10))
            uint32_t rbx_12 =
                zx.d(*(sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + &data_143442d10)) << 8 | rbp_9
            uint32_t j = zx.d(*(rcx_14 + &data_143442d10)) << 8 | rax_37
            zmm4 = _mm_insert_epi16(zx.o(j), rbx_12, 1)
            zmm3 = _mm_unpacklo_epi64(zmm3, arg5[0].q)
            zmm4 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm4, zmm14[0].q), zmm14[0].q)
            var_4c8 = zmm10
            zmm10 = __pcmpeqd_xmmdq_memdq(zmm10, data_142fc95c0)
            arg6 = zmm10 & not.o(zmm0)
            arg5 = zx.o(0)
            
            if (_mm_movemask_ps(arg6) != 0)
                arg6 &= zmm4
                arg5 = arg6
            
            zmm7 = _mm_unpacklo_epi32(temp0_130, zmm15[0].q)
            int32_t temp0_158[0x4] = _mm_unpacklo_epi32(temp0_127, zmm1[0].q)
            float var_338[0x4]
            zmm11 = (var_338 & temp0_128) | zmm2
            zmm3 &= zmm0
            zmm15 = zmm0
            zmm0 &= data_142fc95e0
            float var_558_1[0x4] = zmm10
            zmm2 = temp0_128 & not.o(zmm10)
            char j_1 = _mm_movemask_ps(zmm2)
            uint128_t var_198_1 = zmm2
            
            if (j_1 == 0)
                zmm4 = zx.o(0)
            else
                zmm4 &= zmm2
                arg5 = _mm_srli_epi32(zmm2, 0x1f) | (zmm2 & not.o(arg5))
            
            zmm10 = zx.o(0)
            int32_t temp0_160[0x4] = _mm_cmpeq_epi32(arg6, arg6)
            zmm4 = _mm_madd_epi16(zmm4, zmm0)
            float var_588_1[0x4] = _mm_add_epi64(var_1a8_1, temp0_158)
            float var_528_1[0x4] = _mm_add_epi64(var_1a8_1, zmm7)
            zmm0 = _mm_shuffle_epi32(arg5, 0xf5)
            float var_498[0x4]
            zmm2 = (var_498 & temp0_128) | (temp0_128 & not.o(_mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(arg5, zmm3), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm0), 0xe8).q)))
            zmm14 = (var_548 & temp0_128) | (temp0_128 & not.o(zmm4))
            zmm0 = temp0_128 & not.o(__pcmpgtd_xmmdq_memdq(zmm11, data_142d3f5b0))
            zmm12 = zmm2
            var_498 = zmm2
            float var_538_1[0x4] = arg7
            var_338 = zmm11
            float var_488_1[0x4] = zmm15
            float var_548_1[0x4] = zmm14
            float var_428_1[0x4] = temp0_158
            float var_4d8_1[0x4] = zmm7
            float var_468_1[0x4]
            float var_368[0x4]
            float var_328[0x4]
            float var_318[0x4]
            float var_298[0x4]
            float var_288[0x4]
            int32_t var_278[0x4]
            float var_268[0x4]
            float var_1f8[0x4]
            float var_1e8[0x4]
            float var_1d8[0x4]
            
            if (_mm_movemask_ps(zmm0) == 0)
                zmm4 = zx.o(0)
                var_468_1 = zx.o(0)
            label_14024468a:
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
                        zmm3 = _mm_add_epi32(zmm11, temp0_160)
                        
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
                            float temp0_186[0x4] = _mm_add_ps(
                                __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm2, arg5, 1), data_142d3f7e0), 
                                arg5)
                            arg5 = _mm_cvttps_epi32(temp0_186)
                            zmm10 = _mm_cmpgt_epi32(arg5, zmm3)
                            zmm10 = ((zmm10 & not.o(arg5)) | (zmm3 & zmm10)) & zmm1
                            
                            if (arg11 != 1)
                                var_468_2 = _mm_sub_ps(zmm2, temp0_186)
                            
                            zmm2 = _mm_sub_epi32(zmm10, _mm_cmpeq_epi32(temp0_186, temp0_186))
                            zmm4 = _mm_cmpgt_epi32(zmm3, zmm2)
                            zmm4 = ((zmm4 & not.o(zmm3)) | (zmm2 & zmm4)) & zmm1
                    
                    var_468_1 = var_468_2 & zmm1
                
                arg8 = _mm_srai_epi32(
                    _mm_slli_epi32(_mm_cmpeq_epi32(arg8, zx.o(0)) & not.o(zmm0), 0x1f), 0x1f)
                
                if (_mm_movemask_ps(arg8) == 0)
                    arg8 = var_4f8_1
                    goto label_14024468a
                
                zmm2 = _mm_cmpgt_epi32(data_1434422d0, zmm11) | var_1b8_1
                zmm0 = zmm2 & arg8
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm10 = zmm0 & not.o(zmm10)
                    zmm4 = zmm0 & not.o(zmm4)
                
                zmm0 = var_468_1
                zmm3 = zmm14
                arg6 = var_5b8
                zmm14 = zmm2 & not.o(arg8)
                j = _mm_movemask_ps(zmm14)
                zmm1 = zx.o(0)
                
                if (j == 0)
                    zmm15 = zmm3
                    zmm11 = var_568
                    arg5 = var_558_1
                    zmm9 = var_528_1
                else
                    arg7 = _mm_add_epi32(zmm11, _mm_cmpeq_epi32(zmm0, zmm0))
                    
                    if (arg10.d f>= 1f)
                        zmm15 = var_548_1
                        arg7 &= zmm14
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
                        zmm12 = var_548_1
                        zmm15 = _mm_shuffle_epi32(zmm12, 0x4e)
                        zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm0, 0xe8), 
                            _mm_shuffle_epi32(zmm1, 0xe8)[0].q)
                        zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm12)
                        zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm15)
                        int32_t temp0_212[0x4] = _mm_unpacklo_epi32(zmm12, zmm1[0].q)
                        zmm15 = _mm_unpacklo_epi32(zmm15, zmm2.q)
                        zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                        zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                        zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                        zmm15 = __paddq_xmmdq_memdq(zmm15, var_528_1)
                        int32_t temp0_218[0x4] = __paddq_xmmdq_memdq(temp0_212, var_588_1)
                        zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm3.q)
                        zmm2 = data_143442a20
                        zmm15 = _mm_add_epi64(_mm_add_epi64(zmm15, zmm2), zmm1)
                        int32_t temp0_224[0x4] = _mm_add_epi64(_mm_add_epi64(temp0_218, zmm2), zmm0)
                        zmm0 = data_143442c10
                        zmm12 = temp0_224 & zmm0
                        zmm15 &= zmm0
                        zmm0 =
                            _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(arg7), var_258_1))
                        zmm2 = __pcmpgtd_xmmdq_memdq(zmm0, data_142d8f750) & zmm0
                        zmm10 = _mm_cmpgt_epi32(arg7, zmm2)
                        zmm10 = (zmm10 & not.o(arg7)) | (zmm2 & zmm10)
                        zmm11 = arg7
                        
                        if (arg9 s< 0x100)
                            zmm3 = _mm_shuffle_epi32(zmm10, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                            zmm0 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm10, _mm_cmpgt_epi32(zx.o(0), zmm10)[0].q), 
                                zmm12)
                            char rbx_14 = j.b
                            arg5 = _mm_cmpeq_epi32(arg5, arg5)
                            
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
                                    _mm_shuffle_ps(zx.o(*zmm3.q), zmm1, 0x30), 0x84)
                                
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
                                zmm4 = (zmm7 & not.o(zmm11)) | (zmm7 & zmm10)
                                zmm0 = _mm_sub_epi32(zmm10, arg5)
                                zmm7 &= not.o(_mm_cmpgt_epi32(zmm0, zmm11) ^ arg5)
                                zmm2 = zmm14 & zmm7
                                j = _mm_movemask_ps(zmm2)
                                
                                if (j == 0)
                                    zmm3 = zmm4
                                else
                                    int32_t temp0_299[0x4] = _mm_cmpeq_epi32(temp0_158, temp0_158)
                                    arg6 = zmm10
                                    
                                    do
                                        arg5 = zmm0
                                        uint128_t temp0_302 = _mm_shuffle_epi32(zmm0, 0x4e)
                                        arg7 = _mm_cmpgt_epi32(zx.o(0), temp0_302)
                                        zmm0 = _mm_add_epi64(
                                            _mm_unpacklo_epi32(zmm0, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                            zmm12)
                                        char temp0_307 = _mm_movemask_ps(zmm2)
                                        
                                        if ((temp0_307 & 1) != 0)
                                            zmm2.d = zx.o(*zmm0.q)[0]
                                            zmm1 = zmm2
                                            zmm3 = _mm_unpacklo_epi32(temp0_302, arg7[0].q)
                                            
                                            if ((temp0_307 & 2) != 0)
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                        else
                                            zmm1 = var_1e8
                                            zmm3 = _mm_unpacklo_epi32(temp0_302, arg7[0].q)
                                            
                                            if ((temp0_307 & 2) != 0)
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                        
                                        arg7 = var_548_1
                                        zmm3 = _mm_add_epi64(zmm3, zmm15)
                                        
                                        if ((temp0_307 & 4) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(zx.o(*zmm3.q), zmm1, 0x30), 0x84)
                                            
                                            if ((temp0_307 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                                        zmm1, 0x20), 
                                                    0x24)
                                        else if ((temp0_307 & 8) != 0)
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
                                        zmm0 = _mm_sub_epi32(arg5, temp0_299)
                                        zmm7 = _mm_cmpgt_epi32(zmm0, zmm11) & not.o(zmm2)
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
                                j = _mm_movemask_ps(zmm0)
                                
                                if (j != 0)
                                    do
                                        zmm4 = _mm_shuffle_epi32(zmm10, 0x4e)
                                        arg5 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                                        zmm2 = _mm_add_epi64(
                                            _mm_unpacklo_epi32(zmm10, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm10)[0].q), 
                                            zmm12)
                                        char temp0_411 = _mm_movemask_ps(zmm0)
                                        
                                        if ((temp0_411 & 1) != 0)
                                            zmm1 = var_1d8
                                            zmm1[0] = zx.d(*zmm2.q)
                                            zmm4 = _mm_unpacklo_epi32(zmm4, arg5[0].q)
                                            
                                            if ((temp0_411 & 2) != 0)
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                        else
                                            zmm1 = var_1d8
                                            zmm4 = _mm_unpacklo_epi32(zmm4, arg5[0].q)
                                            
                                            if ((temp0_411 & 2) != 0)
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                        
                                        zmm4 = _mm_add_epi64(zmm4, zmm15)
                                        
                                        if ((temp0_411 & 4) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(zx.o(*zmm4[0].q), zmm1, 0x30), 0x84)
                                            
                                            if ((temp0_411 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                        zmm1, 0x20), 
                                                    0x24)
                                        else if ((temp0_411 & 8) != 0)
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
                                        
                                        if (_mm_movemask_ps(zmm2 & zmm14) != j)
                                            arg5 = zmm2 ^ zmm7
                                        
                                        zmm4 = (zmm2 & not.o(zmm3)) | (zmm2 & zmm10)
                                        zmm10 = _mm_add_epi32(zmm10, arg6)
                                        zmm7 = _mm_cmpgt_epi32(zmm10, zx.o(0)) & arg5
                                        zmm0 = zmm7 & zmm14
                                        j = _mm_movemask_ps(zmm0)
                                        zmm3 = zmm4
                                    while (j != 0)
                                else
                                    zmm4 = zmm3
                            
                            zmm10 = (zmm4 & zmm14) | (zmm14 & not.o(var_518_1))
                            zmm1 = _mm_shuffle_epi32(zmm10, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                            zmm0 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm10, _mm_cmpgt_epi32(zx.o(0), zmm10).q), zmm12)
                            
                            if ((rbx_14 & 1) != 0)
                                var_318[0] = zx.d(*zmm0.q)
                                zmm3 = var_318
                            else
                                zmm3 = var_318
                            
                            zmm7 = var_558_1
                            zmm9 = var_528_1
                            zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                            
                            if ((rbx_14 & 2) == 0)
                                zmm1 = _mm_add_epi64(zmm1, zmm15)
                                
                                if ((rbx_14 & 4) != 0)
                                    goto label_140245459
                                
                                goto label_140245368
                            
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                            zmm1 = _mm_add_epi64(zmm1, zmm15)
                            
                            if ((rbx_14 & 4) == 0)
                            label_140245368:
                                zmm0 = zmm14 ^ arg6
                                
                                if ((rbx_14 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), 
                                            zmm3, 0x20), 
                                        0x24)
                            else
                            label_140245459:
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*zmm1[0].q), zmm3, 0x30), 0x84)
                                zmm0 = zmm14 ^ arg6
                                
                                if ((rbx_14 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), 
                                            zmm3, 0x20), 
                                        0x24)
                            
                            zmm4 = (_mm_sub_epi32(zmm10, arg6) & zmm14) | (var_4e8_1 & zmm0)
                            zmm0 = _mm_cmpgt_epi32(zmm4, zmm11) & zmm14
                            var_318 = zmm3
                            
                            if (_mm_movemask_ps(zmm0) != 0)
                                zmm4 = (zmm11 & zmm0) | (zmm0 & not.o(zmm4))
                            
                            zmm11 = var_568
                            zmm0 = _mm_shuffle_epi32(zmm4, 0x4e)
                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                            int32_t temp0_445[0x4] =
                                _mm_add_epi64(zmm12, _mm_unpacklo_epi32(zmm4, zmm2.q))
                            
                            if ((rbx_14 & 1) != 0)
                                zmm2 = zx.o(*temp0_445[0].q)
                                zmm3.d = zmm2.d
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                
                                if ((rbx_14 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(temp0_445, 0x4e)[0].q), zmm3, 
                                            0), 
                                        zmm3, 0xe2)
                            else
                                zmm3 = var_268
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                
                                if ((rbx_14 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(temp0_445, 0x4e)[0].q), zmm3, 
                                            0), 
                                        zmm3, 0xe2)
                            
                            zmm12 = var_498
                            zmm15 = _mm_add_epi64(zmm15, zmm0)
                            
                            if ((rbx_14 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*zmm15[0].q), zmm3, 0x30), 0x84)
                                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                arg5 = zmm7
                                
                                if ((rbx_14 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm15, 0x4e).q), 
                                            zmm3, 0x20), 
                                        0x24)
                            else
                                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                arg5 = zmm7
                                
                                if ((rbx_14 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm15, 0x4e).q), 
                                            zmm3, 0x20), 
                                        0x24)
                            
                            arg6 = var_5b8_1
                            zmm1 = data_142ed6810
                            zmm0 = _mm_and_ps(var_318, zmm1)
                            var_268 = zmm3
                        else
                            int32_t var_448_1[0x4] = zmm11
                            zmm0 = _mm_add_epi32(zmm10, zmm10)
                            zmm3 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                            zmm0 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                zmm12)
                            char rbx_13 = j.b
                            zmm11 = data_143442cd0
                            int32_t temp0_236[0x4] = _mm_cmpeq_epi32(arg6, arg6)
                            
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
                                    _mm_shuffle_ps(zx.o(*zmm3.q), zmm1, 0x30), 0x84)
                                
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
                            uint128_t var_478_1 = arg5 ^ temp0_236
                            
                            if (_mm_movemask_ps(arg5 & not.o(zmm14)) == 0)
                                zmm7 = zmm10
                                zmm9 = var_528_1
                            else
                                zmm4 = var_448_1
                                zmm2 = (arg5 & not.o(zmm4)) | (arg5 & zmm10)
                                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                                arg6 = _mm_sub_epi32(zmm10, zmm3)
                                arg5 &= not.o(_mm_cmpgt_epi32(arg6, zmm4) ^ zmm3)
                                zmm3 = zmm14 & arg5
                                j = _mm_movemask_ps(zmm3)
                                
                                if (j == 0)
                                    zmm7 = zmm2
                                    zmm9 = var_528_1
                                else
                                    zmm4 = zmm10
                                    
                                    do
                                        zmm0 = arg6
                                        int32_t temp0_260[0x4] = _mm_add_epi32(arg6, arg6)
                                        uint32_t temp0_261[0x4] = _mm_shuffle_epi32(temp0_260, 0x4e)
                                        arg7 = _mm_cmpgt_epi32(zx.o(0), temp0_261)
                                        int32_t temp0_265[0x4] = _mm_add_epi64(
                                            _mm_unpacklo_epi32(temp0_260, 
                                                _mm_cmpgt_epi32(zx.o(0), temp0_260)[0].q), 
                                            zmm12)
                                        char temp0_266 = _mm_movemask_ps(zmm3)
                                        
                                        if ((temp0_266 & 1) != 0)
                                            zmm1 = var_368
                                            zmm1[0] = zx.d(*temp0_265[0].q)
                                            var_368 = zmm1
                                        
                                        zmm7 = _mm_unpacklo_epi32(temp0_261, arg7[0].q)
                                        zmm9 = var_528_1
                                        
                                        if ((temp0_266 & 2) != 0)
                                            zmm1 = var_368
                                            arg6 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(temp0_265, 0x4e).q), 
                                                    zmm1, 0), 
                                                zmm1, 0xe2)
                                            arg7 = var_548_1
                                            zmm7 = _mm_add_epi64(zmm7, zmm15)
                                            
                                            if ((temp0_266 & 4) != 0)
                                                arg6 = _mm_shuffle_ps(arg6, 
                                                    _mm_shuffle_ps(zx.o(*zmm7[0].q), arg6, 0x30), 
                                                    0x84)
                                        else
                                            arg6 = var_368
                                            arg7 = var_548_1
                                            zmm7 = _mm_add_epi64(zmm7, zmm15)
                                            
                                            if ((temp0_266 & 4) != 0)
                                                arg6 = _mm_shuffle_ps(arg6, 
                                                    _mm_shuffle_ps(zx.o(*zmm7[0].q), arg6, 0x30), 
                                                    0x84)
                                        
                                        if ((temp0_266 & 8) != 0)
                                            arg6 = _mm_shuffle_ps(arg6, 
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), arg6, 
                                                    0x20), 
                                                0x24)
                                        
                                        var_368 = arg6
                                        arg6 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(arg6, zmm11), 
                                            var_438_1) & arg5
                                        zmm3 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(arg6 & zmm14) != j)
                                            zmm3 = arg6 ^ arg5
                                        
                                        zmm7 = (arg6 & not.o(zmm2)) | (zmm4 & arg6)
                                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                        arg6 = _mm_sub_epi32(zmm0, zmm1)
                                        arg5 = __pcmpgtd_xmmdq_memdq(arg6, var_448_1) & not.o(zmm3)
                                        zmm3 = arg5 & zmm14
                                        j = _mm_movemask_ps(zmm3)
                                        zmm4 = zmm0
                                        zmm2 = zmm7
                                    while (j != 0)
                            
                            zmm1 = var_478_1
                            zmm0 = _mm_andnot_ps(zmm1, zmm14)
                            uint32_t temp0_328 = _mm_movemask_ps(zmm0)
                            
                            if (temp0_328 != 0)
                                zmm7 &= zmm1
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm1 ^= zmm0
                                zmm10 = _mm_add_epi32(zmm10, zmm0)
                                zmm3 = __pcmpgtd_xmmdq_memdq(zmm10, data_142d8f750) & zmm1
                                zmm0 = zmm3 & zmm14
                                j = _mm_movemask_ps(zmm0)
                            
                            if (temp0_328 == 0 || j == 0)
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
                                    char temp0_342 = _mm_movemask_ps(zmm0)
                                    
                                    if ((temp0_342 & 1) != 0)
                                        arg6 = var_1f8
                                        arg6[0] = zx.d(*zmm2.q)
                                        zmm4 = _mm_unpacklo_epi32(zmm4, arg5[0].q)
                                        
                                        if ((temp0_342 & 2) != 0)
                                            arg6 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), arg6, 
                                                    0), 
                                                arg6, 0xe2)
                                    else
                                        arg6 = var_1f8
                                        zmm4 = _mm_unpacklo_epi32(zmm4, arg5[0].q)
                                        
                                        if ((temp0_342 & 2) != 0)
                                            arg6 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), arg6, 
                                                    0), 
                                                arg6, 0xe2)
                                    
                                    zmm4 = _mm_add_epi64(zmm4, zmm15)
                                    
                                    if ((temp0_342 & 4) != 0)
                                        arg6 = _mm_shuffle_ps(arg6, 
                                            _mm_shuffle_ps(zx.o(*zmm4[0].q), arg6, 0x30), 0x84)
                                        
                                        if ((temp0_342 & 8) != 0)
                                            arg6 = _mm_shuffle_ps(arg6, 
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), arg6, 
                                                    0x20), 
                                                0x24)
                                    else if ((temp0_342 & 8) != 0)
                                        arg6 = _mm_shuffle_ps(arg6, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                arg6, 0x20), 
                                            0x24)
                                    
                                    var_1f8 = arg6
                                    zmm2 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(arg6, zmm11), var_438_1)
                                        & not.o(zmm3)
                                    arg5 = zmm2 & zmm10
                                    arg6 = zx.o(0)
                                    
                                    if (_mm_movemask_ps(zmm2 & zmm14) != j)
                                        arg6 = zmm2 ^ zmm3
                                    
                                    zmm4 = (zmm2 & not.o(zmm7)) | arg5
                                    zmm10 = _mm_add_epi32(zmm10, zmm1)
                                    zmm3 = _mm_cmpgt_epi32(zmm10, zx.o(0)) & arg6
                                    zmm0 = zmm3 & zmm14
                                    j = _mm_movemask_ps(zmm0)
                                    zmm7 = zmm4
                                while (j != 0)
                            
                            zmm10 = (zmm4 & zmm14) | (zmm14 & not.o(var_518_1))
                            zmm0 = _mm_add_epi32(zmm10, zmm10)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                            zmm0 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0).q), zmm12)
                            
                            if ((rbx_13 & 1) != 0)
                                var_328[0] = zx.d(*zmm0.q)
                                zmm3 = var_328
                            else
                                zmm3 = var_328
                            
                            arg5 = _mm_cmpeq_epi32(arg5, arg5)
                            zmm7 = var_448_1
                            zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                            
                            if ((rbx_13 & 2) == 0)
                                zmm1 = _mm_add_epi64(zmm1, zmm15)
                                
                                if ((rbx_13 & 4) != 0)
                                    goto label_140245027
                                
                                goto label_140244f37
                            
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                            zmm1 = _mm_add_epi64(zmm1, zmm15)
                            
                            if ((rbx_13 & 4) == 0)
                            label_140244f37:
                                zmm0 = zmm14 ^ arg5
                                
                                if ((rbx_13 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), 
                                            zmm3, 0x20), 
                                        0x24)
                            else
                            label_140245027:
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
                            zmm2 = _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2).q)
                            int32_t temp0_378[0x4] = _mm_add_epi64(zmm12, zmm2)
                            
                            if ((rbx_13 & 1) != 0)
                                zmm2 = zx.o(*temp0_378[0].q)
                                zmm3.d = zmm2.d
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                
                                if ((rbx_13 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(temp0_378, 0x4e)[0].q), zmm3, 
                                            0), 
                                        zmm3, 0xe2)
                            else
                                zmm3 = var_278
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                
                                if ((rbx_13 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(temp0_378, 0x4e)[0].q), zmm3, 
                                            0), 
                                        zmm3, 0xe2)
                            
                            zmm1 = data_143442cd0
                            zmm12 = var_498
                            zmm15 = _mm_add_epi64(zmm15, zmm0)
                            
                            if ((rbx_13 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*zmm15[0].q), zmm3, 0x30), 0x84)
                            
                            zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                            arg5 = var_558_1
                            
                            if ((rbx_13 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm15, 0x4e).q), zmm3, 
                                        0x20), 
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
            uint32_t temp0_474[0x4] = _mm_shuffle_epi32(zmm14, 0x4e)
            zmm7 = _mm_unpacklo_epi32(temp0_474, _mm_cmpgt_epi32(zx.o(0), temp0_474).q)
            zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(zmm10, zmm12), 0xe8)
            zmm3 = _mm_shuffle_epi32(zmm12, 0xf5)
            uint128_t var_188_1 = zmm3
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
            float var_2a8_1[0x4] = __paddq_xmmdq_memdq(_mm_add_epi64(zmm2, zmm1), var_588_1)
            zmm9 = arg7
            float var_3a8_1[0x4] = _mm_add_epi64(zmm0, arg7)
            zmm2 = __pcmpeqd_xmmdq_memdq(var_4c8, data_142d3f5b0)
            zmm3 = temp0_128 & not.o(zmm2)
            float var_4e8_2[0x4] = zmm4
            float var_518_2[0x4] = zmm10
            uint128_t var_568_1 = zmm2
            float var_378[0x4]
            float var_358[0x4]
            
            if (_mm_movemask_ps(zmm3) == 0)
                zmm7 = arg5
                arg7 = zmm14
                zmm14 = zmm11
                zmm11 = arg6
                arg6 = _mm_cmpeq_epi32(arg6, arg6)
                arg5 = var_538_1
            else
                zmm15 = _mm_cmpeq_epi32(var_348_1, zx.o(0))
                zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm15 & zmm3, 0x1f), 0x1f)
                char temp0_498 = _mm_movemask_ps(zmm1)
                
                if (temp0_498 == 0)
                    zmm7 = arg5
                    zmm14 = zmm11
                    zmm11 = arg6
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    arg5 = var_538_1
                else
                    zmm12 = arg6
                    zmm14 = zmm11
                    zmm2 = __paddq_xmmdq_memdq(var_4d8_1, var_418_2)
                    arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_428_1, var_448_3), var_4a8_1)
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
                    
                    if ((temp0_498 & 1) == 0)
                        char temp17_1 = temp0_498 & 1
                        cond:43_1 = temp17_1 != 0
                        cond:44_1 = temp17_1 == 0
                        arg6 = var_538_1
                        
                        if (temp17_1 == 0)
                            goto label_140245c15
                        
                        goto label_140245834
                    
                    zmm14[0] = (*rbx_16)[0]
                    char temp16_1 = temp0_498 & 1
                    cond:43_1 = temp16_1 != 0
                    cond:44_1 = temp16_1 == 0
                    arg6 = var_538_1
                    
                    if (temp16_1 == 0)
                    label_140245c15:
                        
                        if (cond:44_1)
                            goto label_14024583f
                        
                        goto label_140245c1b
                    
                label_140245834:
                    arg8[0] = arg7[0]
                    bool cond:58_1
                    bool cond:59_1
                    bool cond:67_1
                    bool cond:68_1
                    
                    if (not(cond:43_1))
                    label_14024583f:
                        zmm11 = zmm12
                        char temp27_1 = temp0_498 & 2
                        cond:58_1 = temp27_1 != 0
                        cond:59_1 = temp27_1 == 0
                        cond:67_1 = temp27_1 != 0
                        cond:68_1 = temp27_1 == 0
                        
                        if (temp27_1 == 0)
                            goto label_140245c2d
                        
                        goto label_140245857
                    
                label_140245c1b:
                    zmm12[0] = zmm11[0]
                    zmm11 = zmm12
                    char temp26_1 = temp0_498 & 2
                    cond:58_1 = temp26_1 != 0
                    cond:59_1 = temp26_1 == 0
                    cond:67_1 = temp26_1 != 0
                    cond:68_1 = temp26_1 == 0
                    
                    if (temp26_1 == 0)
                    label_140245c2d:
                        
                        if (cond:59_1)
                            goto label_140245861
                        
                        goto label_140245c3d
                    
                label_140245857:
                    zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm14, 0), zmm14, 0xe2)
                    
                    if (not(cond:58_1))
                    label_140245861:
                        
                        if (cond:68_1)
                            goto label_140245c47
                        
                        goto label_140245871
                    
                label_140245c3d:
                    arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg8, 0), arg8, 0xe2)
                    bool cond:105_1
                    bool cond:106_1
                    bool cond:119_1
                    bool cond:120_1
                    
                    if (not(cond:67_1))
                    label_140245c47:
                        arg5 = arg6
                        char temp39_1 = temp0_498 & 4
                        cond:105_1 = temp39_1 != 0
                        cond:106_1 = temp39_1 == 0
                        cond:119_1 = temp39_1 != 0
                        cond:120_1 = temp39_1 == 0
                        
                        if (temp39_1 == 0)
                            goto label_140245882
                        
                        goto label_140245c59
                    
                label_140245871:
                    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm11, 0), zmm11, 0xe2)
                    arg5 = arg6
                    char temp38_1 = temp0_498 & 4
                    cond:105_1 = temp38_1 != 0
                    cond:106_1 = temp38_1 == 0
                    cond:119_1 = temp38_1 != 0
                    cond:120_1 = temp38_1 == 0
                    
                    if (temp38_1 == 0)
                    label_140245882:
                        zmm10 = var_518_2
                        
                        if (cond:106_1)
                            goto label_140245c6e
                        
                        goto label_140245897
                    
                label_140245c59:
                    zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zmm10, zmm14, 0x30), 0x84)
                    zmm10 = var_518_2
                    
                    if (not(cond:105_1))
                    label_140245c6e:
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        zmm9 = var_528_1
                        
                        if (cond:120_1)
                            goto label_1402458b0
                        
                        goto label_140245c87
                    
                label_140245897:
                    arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm9, arg8, 0x30), 0x84)
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    zmm9 = var_528_1
                    bool cond:155_1
                    bool cond:156_1
                    bool cond:167_1
                    bool cond:168_1
                    
                    if (not(cond:119_1))
                    label_1402458b0:
                        char temp59_1 = temp0_498 & 8
                        cond:155_1 = temp59_1 != 0
                        cond:156_1 = temp59_1 == 0
                        cond:167_1 = temp59_1 != 0
                        cond:168_1 = temp59_1 == 0
                        
                        if (temp59_1 == 0)
                            goto label_140245c95
                        
                        goto label_1402458c2
                    
                label_140245c87:
                    zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm4, zmm11, 0x30), 0x84)
                    char temp58_1 = temp0_498 & 8
                    cond:155_1 = temp58_1 != 0
                    cond:156_1 = temp58_1 == 0
                    cond:167_1 = temp58_1 != 0
                    cond:168_1 = temp58_1 == 0
                    
                    if (temp58_1 == 0)
                    label_140245c95:
                        
                        if (cond:156_1)
                            goto label_1402458cd
                        
                        goto label_140245ca0
                    
                label_1402458c2:
                    zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(var_5b8_2, zmm14, 0x20), 0x24)
                    
                    if (cond:155_1)
                    label_140245ca0:
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm7, arg8, 0x20), 0x24)
                        zmm7 = var_558_1
                        
                        if (cond:167_1)
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm0, zmm11, 0x20), 0x24)
                    else
                    label_1402458cd:
                        zmm7 = var_558_1
                        
                        if (not(cond:168_1))
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm0, zmm11, 0x20), 0x24)
                    
                    zmm12 = var_498
                
                zmm15 &= not.o(zmm3)
                zmm4 = _mm_slli_epi32(zmm15, 0x1f)
                j = _mm_movemask_ps(zmm4)
                
                if (j.b == 0)
                    arg7 = var_548_1
                    zmm15 = var_488_1
                    zmm4 = var_4e8_2
                    zmm2 = var_568_1
                else
                    zmm10 = zmm14
                    zmm7 = arg5
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg5, 0x1f), 0x1f)
                    zmm4 = _mm_srai_epi32(zmm4, 0x1f) & zmm2
                    zmm14 = var_2a8_1
                    zmm3 = var_3a8_1
                    zmm1 = zmm3
                    
                    if (_mm_movemask_ps(zmm4) != 0)
                        zmm1 = data_1434426c0
                        zmm0 = zmm1
                        int32_t temp0_532[0x4] = _mm_add_epi64(zmm3, zmm1)
                        zmm1 = _mm_add_epi64(var_2a8_1, zmm0)
                        arg5 = zmm4 ^ arg6
                        zmm14 = _mm_shuffle_epi32(arg5, 0x50)
                        zmm14 = (zmm14 & not.o(zmm1)) | (var_2a8_1 & zmm14)
                        zmm1 = _mm_shuffle_epi32(arg5, 0xfa)
                        zmm1 = (zmm1 & not.o(temp0_532)) | (zmm3 & zmm1)
                        zmm3 = __paddq_xmmdq_memdq(var_4d8_1, var_418_2)
                        arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_428_1, var_448_3), 
                            var_4a8_1)
                        zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm3, var_458_2), zmm0)
                        arg5 = _mm_add_epi64(arg5, zmm0)
                        arg6 = _mm_shuffle_epi32(zmm4, 0x50) & arg5
                        zmm4 = _mm_shuffle_epi32(zmm4, 0xfa) & zmm3
                        arg5 = zx.o(*(arg4 + arg6[0].q))
                        zmm3 = _mm_shuffle_epi32(arg6, 0x4e)
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        arg5 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(arg5, zx.q(*(arg4 + zmm3.q))), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm4[0].q)), 
                                zx.o(*(arg4 + _mm_shuffle_epi32(zmm4, 0x4e)[0].q))[0].q).q)
                    
                    zmm2 &= arg5
                    char rbx_17 = j.b
                    
                    if ((rbx_17 & 1) != 0)
                        zmm10[0] = zmm2.d
                        arg5 = zmm7
                        
                        if ((rbx_17 & 2) != 0)
                            goto label_140245ac6
                        
                        goto label_140245a96
                    
                    arg5 = zmm7
                    
                    if ((rbx_17 & 2) != 0)
                    label_140245ac6:
                        zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm10, 1), zmm10, 0xe2)
                        
                        if ((rbx_17 & 4) != 0)
                            goto label_140245aa3
                        
                        goto label_140245acf
                    
                label_140245a96:
                    
                    if ((rbx_17 & 4) == 0)
                    label_140245acf:
                        
                        if ((rbx_17 & 8) != 0)
                            zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x23), 0x24)
                    else
                    label_140245aa3:
                        zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x32), 0x84)
                        
                        if ((rbx_17 & 8) != 0)
                            zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm2, zmm10, 0x23), 0x24)
                    
                    zmm2 = data_1434422d0
                    arg5 &= zmm2
                    zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(arg5, zmm2) & zmm15, 0x1f)
                    char j_2 = _mm_movemask_ps(zmm2)
                    
                    if (j_2 == 0)
                        zmm2 = zmm1
                        zmm0 = var_358
                        arg5 = __pcmpeqd_xmmdq_memdq(arg5, data_142d8f750) & not.o(zmm0)
                        
                        if ((rbx_17 & 1) != 0)
                            arg8[0] = arg5[0]
                    else
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f) ^ arg6
                        j = zx.d(j_2)
                        
                        if ((j.b & 1) != 0)
                            zmm0.d = (*zmm14[0].q).d
                            var_358 = zmm0
                        
                        zmm3 = data_1434426c0
                        zmm7 = _mm_add_epi64(zmm1, zmm3)
                        zmm3 = _mm_add_epi64(zmm14, zmm3)
                        arg6 = _mm_shuffle_epi32(zmm2, 0x50)
                        zmm4 = _mm_shuffle_epi32(zmm2, 0xfa)
                        
                        if ((j.b & 2) != 0)
                            zmm0 = var_358
                            var_358 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm0, 0), zmm0, 
                                0xe2)
                        
                        zmm14 &= arg6
                        arg6 &= not.o(zmm3)
                        zmm2 = zmm1 & zmm4
                        zmm4 &= not.o(zmm7)
                        
                        if ((j.b & 4) != 0)
                            zmm0 = var_358
                            zmm0 =
                                _mm_shuffle_ps(zmm0, _mm_shuffle_ps(*zmm1[0].q, zmm0, 0x30), 0x84)
                            zmm7 = var_538_1
                            zmm14 |= arg6
                            zmm2 |= zmm4
                            
                            if ((j.b & 8) != 0)
                                zmm0 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm0, 
                                        0x20), 
                                    0x24)
                        else
                            zmm7 = var_538_1
                            zmm0 = var_358
                            zmm14 |= arg6
                            zmm2 |= zmm4
                            
                            if ((j.b & 8) != 0)
                                zmm0 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm0, 
                                        0x20), 
                                    0x24)
                        
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        arg5 = __pcmpeqd_xmmdq_memdq(arg5, data_142d8f750) & not.o(zmm0)
                        
                        if ((rbx_17 & 1) != 0)
                            arg8[0] = arg5[0]
                    
                    if ((rbx_17 & 2) != 0)
                        arg8 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, arg8, 1), arg8, 0xe2)
                        
                        if ((rbx_17 & 4) != 0)
                            goto label_140245f91
                        
                        goto label_140245d5c
                    
                    if ((rbx_17 & 4) == 0)
                    label_140245d5c:
                        var_358 = zmm0
                        
                        if ((rbx_17 & 8) != 0)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg5, arg8, 0x23), 0x24)
                    else
                    label_140245f91:
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg5, arg8, 0x32), 0x84)
                        var_358 = zmm0
                        
                        if ((rbx_17 & 8) != 0)
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg5, arg8, 0x23), 0x24)
                    
                    arg5 = zmm7
                    zmm3 = data_142fc95e0
                    zmm1 = zmm7 & zmm3
                    char j_3 =
                        _mm_movemask_ps(_mm_slli_epi32(zmm15 & _mm_cmpeq_epi32(zmm1, zmm3), 0x1f))
                    
                    if (j_3 == 0)
                        arg7 = var_548_1
                        zmm15 = var_488_1
                        zmm4 = var_4e8_2
                        zmm7 = var_558_1
                        zmm9 = var_528_1
                        zmm2 = var_568_1
                        zmm14 = zmm10
                        zmm10 = var_518_2
                        zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(var_378)
                        
                        if ((rbx_17 & 1) != 0)
                            zmm11[0] = zmm1[0]
                    else
                        j = zx.d(j_3)
                        
                        if ((j.b & 1) != 0)
                            zmm3.d = (*zmm14[0].q).d
                            var_378 = zmm3
                        
                        if ((j.b & 2) != 0)
                            zmm3 = var_378
                            var_378 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm3, 0), zmm3, 
                                0xe2)
                        
                        arg7 = var_548_1
                        zmm15 = var_488_1
                        zmm4 = var_4e8_2
                        zmm7 = var_558_1
                        zmm9 = var_528_1
                        zmm14 = zmm10
                        zmm10 = var_518_2
                        
                        if ((j.b & 4) != 0)
                            zmm3 = var_378
                            var_378 =
                                _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm2.q, zmm3, 0x30), 0x84)
                        
                        if ((j.b & 8) != 0)
                            zmm0 = *_mm_shuffle_epi32(zmm2, 0x4e).q
                            zmm2 = var_378
                            var_378 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x20), 0x24)
                        
                        zmm2 = var_568_1
                        zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(var_378)
                        
                        if ((rbx_17 & 1) != 0)
                            zmm11[0] = zmm1[0]
                    
                    if ((rbx_17 & 2) != 0)
                        zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm11, 1), zmm11, 0xe2)
                        
                        if ((rbx_17 & 4) != 0)
                            goto label_140245fc1
                        
                        goto label_140245ec5
                    
                    if ((rbx_17 & 4) == 0)
                    label_140245ec5:
                        
                        if ((rbx_17 & 8) != 0)
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x23), 0x24)
                    else
                    label_140245fc1:
                        zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x32), 0x84)
                        
                        if ((rbx_17 & 8) != 0)
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x23), 0x24)
            
            zmm1 = zmm2 ^ arg6
            float var_478_2[0x4] = zmm1
            zmm0 = temp0_128 & not.o(zmm1)
            float var_3c8[0x4]
            float var_3b8[0x4]
            float var_2f8[0x4]
            float var_2c8[0x4]
            float var_2b8[0x4]
            float var_238[0x4]
            float var_218[0x4]
            float var_208[0x4]
            
            if (_mm_movemask_ps(zmm0) != 0)
                if (j_1 != 0)
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg5, 0x1f), 0x1f) & zmm7
                    zmm2 = zmm1 & zmm15
                    uint32_t temp0_605 = _mm_movemask_ps(zmm2)
                    zmm15 = zx.o(0)
                    int32_t var_5b8_3[0x4] = zmm11
                    float var_4f8_2[0x4] = arg8
                    
                    if (temp0_605 == 0)
                        zmm10 = var_588_1
                        arg7 = zmm9
                        arg8 = zx.o(0)
                        zmm3 = zx.o(0)
                        zmm12 = var_2b8
                    else
                        char rcx_19 = temp0_605.b
                        
                        if ((rcx_19 & 1) != 0)
                            arg7 = var_588_1
                            zmm0.d = (*arg7[0].q).d
                            zmm7 = var_2c8
                            
                            if ((rcx_19 & 2) != 0)
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, zmm0, 0), 
                                    zmm0, 0xe2)
                        else
                            zmm7 = var_2c8
                            zmm0 = var_218
                            arg7 = var_588_1
                            
                            if ((rcx_19 & 2) != 0)
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, zmm0, 0), 
                                    zmm0, 0xe2)
                        
                        zmm12 = var_2b8
                        
                        if ((rcx_19 & 4) == 0)
                            if ((rcx_19 & 8) != 0)
                                goto label_1402460f1
                            
                            goto label_1402460a8
                        
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(*zmm9[0].q, zmm0, 0x30), 0x84)
                        char rbx_18
                        
                        if ((rcx_19 & 8) != 0)
                        label_1402460f1:
                            zmm0 = _mm_shuffle_ps(zmm0, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e).q, zmm0, 0x20), 0x24)
                            rbx_18 = _mm_movemask_ps(zmm1)
                            arg8 = zx.o(0)
                            
                            if ((rbx_18 & 1) != 0)
                                goto label_1402460b4
                            
                            goto label_140246101
                        
                    label_1402460a8:
                        rbx_18 = _mm_movemask_ps(zmm1)
                        arg8 = zx.o(0)
                        
                        if ((rbx_18 & 1) == 0)
                        label_140246101:
                            zmm2 ^= arg6
                            
                            if ((rbx_18 & 2) != 0)
                                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg8, 1), arg8, 0xe2)
                        else
                        label_1402460b4:
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
                        
                        if ((rcx_19 & 1) != 0)
                            zmm7[0] = (*arg5[0].q).d
                        
                        zmm3 = zmm2 & not.o(zmm4)
                        arg6 = zmm9 & zmm2
                        
                        if ((rcx_19 & 2) != 0)
                            zmm7 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e)[0].q, zmm7, 0), zmm7, 
                                0xe2)
                            arg6 |= zmm3
                            
                            if ((rcx_19 & 4) != 0)
                            label_140246204:
                                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(*arg6[0].q, zmm7, 0x30), 
                                    0x84)
                                
                                if ((rcx_19 & 8) == 0)
                                    goto label_1402461b3
                                
                                goto label_14024621f
                        else
                            arg6 |= zmm3
                            
                            if ((rcx_19 & 4) != 0)
                                goto label_140246204
                        
                        if ((rcx_19 & 8) == 0)
                        label_1402461b3:
                            zmm3 = zx.o(0)
                            
                            if ((rbx_18 & 1) == 0)
                                goto label_14024622b
                            
                            goto label_1402461c0
                        
                    label_14024621f:
                        zmm7 = _mm_shuffle_ps(zmm7, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg6, 0x4e).q, zmm7, 0x20), 0x24)
                        zmm3 = zx.o(0)
                        
                        if ((rbx_18 & 1) != 0)
                        label_1402461c0:
                            zmm3.d = zmm7[0]
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            
                            if ((rbx_18 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm3, 1), zmm3, 0xe2)
                        else
                        label_14024622b:
                            zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            
                            if ((rbx_18 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm3, 1), zmm3, 0xe2)
                        
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm4 = data_1434426c0
                        int32_t temp0_647[0x4] = _mm_add_epi64(arg6, zmm4)
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
                        
                        arg6 = _mm_cmpeq_epi32(temp0_647, temp0_647)
                        arg5 = zmm11
                        zmm10 |= zmm1
                        arg7 = (zmm9 & zmm2) | (zmm2 & not.o(temp0_647))
                    
                    zmm1 = data_1434422d0
                    zmm2 = _mm_cmpeq_epi32(arg5 & zmm1, zmm1) & zmm7
                    zmm1 = temp0_128 & not.o(zmm2)
                    char temp0_655 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_655 == 0)
                        zmm2 = arg5
                        arg5 = zx.o(0)
                    else
                        if ((temp0_655 & 1) != 0)
                            zmm0 = *zmm10[0].q
                            var_3c8[0] = zmm0.d
                            
                            if ((temp0_655 & 2) != 0)
                            label_1402464ae:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e).q, var_3c8, 0), 
                                    var_3c8, 0xe2)
                                var_3c8 = zmm0
                                
                                if ((temp0_655 & 4) == 0)
                                    goto label_14024631a
                                
                                goto label_1402464d4
                        else if ((temp0_655 & 2) != 0)
                            goto label_1402464ae
                        
                        if ((temp0_655 & 4) != 0)
                        label_1402464d4:
                            zmm0 = _mm_shuffle_ps(*arg7[0].q, var_3c8, 0x30)
                            var_3c8 = _mm_shuffle_ps(var_3c8, zmm0, 0x84)
                            zmm1 ^= arg6
                            
                            if ((temp0_655 & 8) != 0)
                                zmm0 =
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, var_3c8, 0x20)
                                var_3c8 = _mm_shuffle_ps(var_3c8, zmm0, 0x24)
                        else
                        label_14024631a:
                            zmm1 ^= arg6
                            
                            if ((temp0_655 & 8) != 0)
                                zmm0 =
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, var_3c8, 0x20)
                                var_3c8 = _mm_shuffle_ps(var_3c8, zmm0, 0x24)
                        
                        uint32_t temp0_659[0x4] = _mm_shuffle_epi32(zmm1, 0x50)
                        char temp0_660 = _mm_movemask_ps(zmm2)
                        zmm15 = zx.o(0)
                        
                        if ((temp0_660 & 1) != 0)
                            zmm15 = zx.o(0)
                            zmm15[0] = var_3c8.d
                        
                        uint32_t temp0_661[0x4] = _mm_slli_epi32(temp0_659, 0x1f)
                        
                        if ((temp0_660 & 2) != 0)
                            zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(var_3c8, zmm15, 1), zmm15, 0xe2)
                        
                        zmm2 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm4 = __paddq_xmmdq_memdq(zmm10, data_1434426c0)
                        zmm7 = _mm_srai_epi32(temp0_661, 0x1f)
                        
                        if ((temp0_660 & 4) != 0)
                            zmm15 =
                                _mm_shuffle_ps(zmm15, _mm_shuffle_ps(var_3c8, zmm15, 0x32), 0x84)
                        
                        zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                        zmm10 &= zmm7
                        
                        if ((temp0_660 & 8) != 0)
                            zmm15 =
                                _mm_shuffle_ps(zmm15, _mm_shuffle_ps(var_3c8, zmm15, 0x23), 0x24)
                        
                        arg5 = __paddq_xmmdq_memdq(arg7, data_1434426c0)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                        zmm1 = (zmm7 & not.o(zmm4)) | zmm10
                        
                        if ((temp0_655 & 1) != 0)
                            zmm12[0] = (*zmm1[0].q)[0]
                        
                        zmm4 = zmm2 & not.o(arg5)
                        arg7 &= zmm2
                        
                        if ((temp0_655 & 2) != 0)
                            zmm12 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm12, 0), 
                                zmm12, 0xe2)
                            zmm4 |= arg7
                            
                            if ((temp0_655 & 4) != 0)
                            label_14024652e:
                                zmm12 = _mm_shuffle_ps(zmm12, 
                                    _mm_shuffle_ps(*zmm4[0].q, zmm12, 0x30), 0x84)
                                
                                if ((temp0_655 & 8) == 0)
                                    goto label_14024643c
                                
                                goto label_14024654f
                        else
                            zmm4 |= arg7
                            
                            if ((temp0_655 & 4) != 0)
                                goto label_14024652e
                        
                        if ((temp0_655 & 8) == 0)
                        label_14024643c:
                            arg5 = zx.o(0)
                            
                            if ((temp0_660 & 1) == 0)
                                goto label_140246560
                            
                            goto label_140246449
                        
                    label_14024654f:
                        zmm12 = _mm_shuffle_ps(zmm12, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e)[0].q, zmm12, 0x20), 0x24)
                        arg5 = zx.o(0)
                        
                        if ((temp0_660 & 1) != 0)
                        label_140246449:
                            arg5 = zx.o(0)
                            arg5[0] = zmm12[0]
                            
                            if ((temp0_660 & 2) != 0)
                                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg5, 1), arg5, 0xe2)
                        else
                        label_140246560:
                            
                            if ((temp0_660 & 2) != 0)
                                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg5, 1), arg5, 0xe2)
                        
                        arg6 = data_1434426c0
                        zmm4 = _mm_add_epi64(zmm4, arg6)
                        zmm1 = _mm_add_epi64(zmm1, arg6)
                        
                        if ((temp0_660 & 4) != 0)
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm12, arg5, 0x32), 0x84)
                        
                        if ((temp0_660 & 8) != 0)
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm12, arg5, 0x23), 0x24)
                        
                        zmm10 |= zmm7 & not.o(zmm1)
                        arg7 |= zmm2 & not.o(zmm4)
                        zmm2 = var_538_1
                        zmm7 = var_558_1
                    
                    zmm9 = zmm2
                    zmm1 = data_142fc95e0
                    zmm2 = _mm_cmpeq_epi32(zmm2 & zmm1, zmm1) & zmm7
                    zmm1 = temp0_128 & not.o(zmm2)
                    char temp0_696 = _mm_movemask_ps(zmm1)
                    var_2b8 = zmm12
                    
                    if (temp0_696 == 0)
                        zmm12 = zx.o(0)
                        zmm1 = zx.o(0)
                        arg7 = var_548_1
                        zmm10 = var_518_2
                    else
                        if ((temp0_696 & 1) != 0)
                            arg6 = var_3b8
                            arg6[0] = (*zmm10[0].q)[0]
                            var_3b8 = arg6
                            
                            if ((temp0_696 & 2) != 0)
                            label_140246779:
                                arg6 = var_3b8
                                var_3b8 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e)[0].q, arg6, 0), 
                                    arg6, 0xe2)
                                
                                if ((temp0_696 & 4) == 0)
                                    goto label_140246623
                                
                                goto label_1402467a3
                        else if ((temp0_696 & 2) != 0)
                            goto label_140246779
                        
                        if ((temp0_696 & 4) != 0)
                        label_1402467a3:
                            arg6 = var_3b8
                            var_3b8 =
                                _mm_shuffle_ps(arg6, _mm_shuffle_ps(*arg7[0].q, arg6, 0x30), 0x84)
                            zmm1 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((temp0_696 & 8) != 0)
                                arg6 = var_3b8
                                var_3b8 = _mm_shuffle_ps(arg6, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, arg6, 
                                        0x20), 
                                    0x24)
                        else
                        label_140246623:
                            zmm1 ^= _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((temp0_696 & 8) != 0)
                                arg6 = var_3b8
                                var_3b8 = _mm_shuffle_ps(arg6, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, arg6, 
                                        0x20), 
                                    0x24)
                        
                        zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                        char temp0_702 = _mm_movemask_ps(zmm2)
                        zmm12 = zx.o(0)
                        
                        if ((temp0_702 & 1) != 0)
                            zmm12 = zx.o(0)
                            zmm12[0] = var_3b8.d
                        
                        zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                        
                        if ((temp0_702 & 2) != 0)
                            zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(var_3b8, zmm12, 1), zmm12, 0xe2)
                        
                        zmm1 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm2 = __paddq_xmmdq_memdq(zmm10, data_1434426c0)
                        zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                        
                        if ((temp0_702 & 4) != 0)
                            zmm12 =
                                _mm_shuffle_ps(zmm12, _mm_shuffle_ps(var_3b8, zmm12, 0x32), 0x84)
                        
                        zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                        zmm10 &= zmm4
                        zmm4 &= not.o(zmm2)
                        
                        if ((temp0_702 & 8) != 0)
                            zmm12 =
                                _mm_shuffle_ps(zmm12, _mm_shuffle_ps(var_3b8, zmm12, 0x23), 0x24)
                        
                        zmm2 = __paddq_xmmdq_memdq(arg7, data_1434426c0)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm10 |= zmm4
                        
                        if ((temp0_696 & 1) != 0)
                            arg6 = var_208
                            arg6[0] = (*zmm10[0].q)[0]
                            zmm4 = arg6
                            arg7 &= zmm1
                            zmm1 &= not.o(zmm2)
                            
                            if ((temp0_696 & 2) != 0)
                                zmm4 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e).q, zmm4, 0), 
                                    zmm4, 0xe2)
                        else
                            zmm4 = var_208
                            arg7 &= zmm1
                            zmm1 &= not.o(zmm2)
                            
                            if ((temp0_696 & 2) != 0)
                                zmm4 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm10, 0x4e).q, zmm4, 0), 
                                    zmm4, 0xe2)
                        
                        zmm10 = var_518_2
                        arg7 |= zmm1
                        
                        if ((temp0_696 & 4) == 0)
                            if ((temp0_696 & 8) != 0)
                                goto label_14024688f
                            
                            goto label_14024682a
                        
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(*arg7[0].q, zmm4, 0x30), 0x84)
                        
                        if ((temp0_696 & 8) != 0)
                        label_14024688f:
                            zmm4 = _mm_shuffle_ps(zmm4, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, zmm4, 0x20), 
                                0x24)
                            arg7 = var_548_1
                            zmm1 = zx.o(0)
                            
                            if ((temp0_702 & 1) != 0)
                                goto label_14024683a
                            
                            goto label_1402468a2
                        
                    label_14024682a:
                        arg7 = var_548_1
                        zmm1 = zx.o(0)
                        
                        if ((temp0_702 & 1) == 0)
                        label_1402468a2:
                            
                            if ((temp0_702 & 2) != 0)
                            label_1402468b2:
                                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 1), zmm1, 0xe2)
                                
                                if ((temp0_702 & 4) != 0)
                                    goto label_140246853
                                
                                goto label_1402468bd
                        else
                        label_14024683a:
                            zmm1 = zx.o(0)
                            zmm1[0] = zmm4[0]
                            
                            if ((temp0_702 & 2) != 0)
                                goto label_1402468b2
                        
                        if ((temp0_702 & 4) == 0)
                        label_1402468bd:
                            var_208 = zmm4
                            
                            if ((temp0_702 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x23), 0x24)
                        else
                        label_140246853:
                            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x32), 0x84)
                            var_208 = zmm4
                            
                            if ((temp0_702 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x23), 0x24)
                    
                    zmm2 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_428_1, var_448_3), var_4a8_1)
                    zmm4 = data_1434426c0
                    arg6 = zmm4
                    zmm2 = _mm_add_epi64(zmm2, zmm4)
                    zmm4 = _mm_shuffle_epi32(var_198_1, 0x50) & zmm2
                    zmm2 = _mm_add_epi64(
                        __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8_1, var_418_2), var_458_2), 
                        arg6)
                    arg6 = _mm_shuffle_epi32(var_198_1, 0xfa) & zmm2
                    int64_t rax_187 = zmm4[0].q
                    int64_t rcx_22 = _mm_shuffle_epi32(zmm4, 0x4e).q
                    int64_t rbx_21 = arg6[0].q
                    int64_t rsi_6 = _mm_shuffle_epi32(arg6, 0x4e).q
                    zmm2 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rax_187)), zx.o(*(arg4 + rcx_22))[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rbx_21)), zx.o(*(arg4 + rsi_6))[0].q)[0].q)
                    zmm4 = zmm2
                    float temp0_753[0x4] = _mm_add_ps(arg8, 
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
                    float temp0_758[0x4] = _mm_mul_ps(arg5, _mm_div_ps(zmm2, arg6))
                    zmm2 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm4, 0x15), zmm3)), arg6)
                    j = zx.d(j_1)
                    char temp50_1 = j.b & 1
                    
                    if (temp50_1 != 0)
                        zmm14[0] = temp0_753[0]
                    
                    float temp0_763[0x4] = _mm_mul_ps(zmm1, zmm2)
                    float temp0_764[0x4] = _mm_add_ps(zmm15, temp0_758)
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    zmm4 = var_4e8_2
                    
                    if (temp50_1 != 0)
                        zmm0.d = temp0_764[0]
                        var_4f8_2 = zmm0
                        arg5 = zmm9
                        zmm12 = _mm_add_ps(zmm12, temp0_763)
                        zmm9 = var_528_1
                        
                        if (temp50_1 != 0)
                            goto label_140246d4d
                        
                        goto label_140246a34
                    
                    arg5 = zmm9
                    zmm12 = _mm_add_ps(zmm12, temp0_763)
                    zmm9 = var_528_1
                    bool cond:189_1
                    bool cond:190_1
                    bool cond:211_1
                    bool cond:212_1
                    
                    if (temp50_1 != 0)
                    label_140246d4d:
                        zmm0.d = zmm12[0]
                        var_5b8_3 = zmm0
                        char temp71_1 = j.b & 2
                        cond:189_1 = temp71_1 == 0
                        cond:190_1 = temp71_1 != 0
                        cond:211_1 = temp71_1 == 0
                        cond:212_1 = temp71_1 != 0
                        
                        if (temp71_1 != 0)
                            goto label_140246a4b
                        
                        goto label_140246d5f
                    
                label_140246a34:
                    char temp70_1 = j.b & 2
                    cond:189_1 = temp70_1 == 0
                    cond:190_1 = temp70_1 != 0
                    cond:211_1 = temp70_1 == 0
                    cond:212_1 = temp70_1 != 0
                    
                    if (temp70_1 == 0)
                    label_140246d5f:
                        
                        if (not(cond:189_1))
                        label_140246d69:
                            zmm11 = var_4f8_2
                            var_4f8_2 =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_764, zmm11, 1), zmm11, 0xe2)
                            
                            if (cond:212_1)
                                goto label_140246a5f
                            
                            goto label_140246d8a
                    else
                    label_140246a4b:
                        zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_753, zmm14, 1), zmm14, 0xe2)
                        
                        if (cond:190_1)
                            goto label_140246d69
                    
                    bool cond:255_1
                    bool cond:256_1
                    bool cond:278_1
                    bool cond:279_1
                    
                    if (not(cond:211_1))
                    label_140246a5f:
                        zmm0 = var_5b8_3
                        var_5b8_3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm0, 1), zmm0, 0xe2)
                        char temp96_1 = j.b & 4
                        cond:255_1 = temp96_1 == 0
                        cond:256_1 = temp96_1 != 0
                        cond:278_1 = temp96_1 == 0
                        cond:279_1 = temp96_1 != 0
                        
                        if (temp96_1 != 0)
                            goto label_140246d9c
                        
                        goto label_140246a78
                    
                label_140246d8a:
                    char temp95_1 = j.b & 4
                    cond:255_1 = temp95_1 == 0
                    cond:256_1 = temp95_1 != 0
                    cond:278_1 = temp95_1 == 0
                    cond:279_1 = temp95_1 != 0
                    
                    if (temp95_1 == 0)
                    label_140246a78:
                        
                        if (not(cond:255_1))
                        label_140246a82:
                            zmm0 = var_4f8_2
                            var_4f8_2 =
                                _mm_shuffle_ps(zmm0, _mm_shuffle_ps(temp0_764, zmm0, 0x32), 0x84)
                            
                            if (cond:279_1)
                                goto label_140246db1
                            
                            goto label_140246aa0
                    else
                    label_140246d9c:
                        zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(temp0_753, zmm14, 0x32), 0x84)
                        
                        if (cond:256_1)
                            goto label_140246a82
                    
                    bool cond:310_1
                    bool cond:311_1
                    bool cond:325_1
                    bool cond:326_1
                    
                    if (not(cond:278_1))
                    label_140246db1:
                        zmm0 = var_5b8_3
                        var_5b8_3 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm12, zmm0, 0x32), 0x84)
                        char temp115_1 = j.b & 8
                        cond:310_1 = temp115_1 == 0
                        cond:311_1 = temp115_1 != 0
                        cond:325_1 = temp115_1 == 0
                        cond:326_1 = temp115_1 != 0
                        
                        if (temp115_1 != 0)
                            goto label_140246aae
                        
                        goto label_140246dca
                    
                label_140246aa0:
                    char temp114_1 = j.b & 8
                    cond:310_1 = temp114_1 == 0
                    cond:311_1 = temp114_1 != 0
                    cond:325_1 = temp114_1 == 0
                    cond:326_1 = temp114_1 != 0
                    
                    if (temp114_1 != 0)
                    label_140246aae:
                        zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(temp0_753, zmm14, 0x23), 0x24)
                        arg8 = var_4f8_2
                        zmm11 = var_5b8_3
                        
                        if (cond:311_1)
                            goto label_140246de3
                        
                        goto label_140246ac7
                    
                label_140246dca:
                    arg8 = var_4f8_2
                    zmm11 = var_5b8_3
                    
                    if (cond:310_1)
                    label_140246ac7:
                        zmm15 = var_488_1
                        
                        if (not(cond:325_1))
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm12, zmm11, 0x23), 0x24)
                    else
                    label_140246de3:
                        arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(temp0_764, arg8, 0x23), 0x24)
                        zmm15 = var_488_1
                        
                        if (cond:326_1)
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm12, zmm11, 0x23), 0x24)
                    
                    zmm12 = var_498
                
                zmm0 = zmm7 ^ var_478_2
                zmm2 = temp0_128
                
                if (_mm_movemask_ps(zmm2 & not.o(zmm0)) == 0)
                    zmm2 = var_568_1
                else
                    int32_t var_5b8_4[0x4] = zmm11
                    arg7 = __pcmpeqd_xmmdq_memdq(var_4c8, data_1434422d0)
                    zmm11 = zmm2 & not.o(arg7)
                    j = _mm_movemask_ps(zmm11)
                    
                    if (j.b == 0)
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
                            rbx_23 = j.b
                            
                            if ((rbx_23 & 1) != 0)
                                zmm10[0] = zmm1[0]
                        else
                            zmm3 = data_1434426b0
                            zmm4 = _mm_add_epi64(var_2a8_1, zmm3)
                            arg6 = zmm2 ^ _mm_cmpeq_epi32(arg5, arg5)
                            uint32_t temp0_787[0x4] = _mm_shuffle_epi32(arg6, 0x50)
                            zmm14 = (var_2a8_1 & temp0_787) | (temp0_787 & not.o(zmm4))
                            zmm4 = _mm_add_epi64(var_3a8_1, zmm3)
                            arg6 = _mm_shuffle_epi32(arg6, 0xfa)
                            var_3a8_1 = (var_3a8_1 & arg6) | (arg6 & not.o(zmm4))
                            zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_428_1, var_448_3), 
                                var_4a8_1)
                            int32_t temp0_793[0x4] = __paddq_xmmdq_memdq(
                                __paddq_xmmdq_memdq(var_4d8_1, var_418_2), var_458_2)
                            zmm3 = data_1434426c0
                            zmm4 = _mm_add_epi64(zmm4, zmm3)
                            zmm7 = _mm_shuffle_epi32(zmm2, 0x50) & zmm4
                            arg6 = _mm_add_epi64(temp0_793, zmm3)
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
                            rbx_23 = j.b
                            
                            if ((rbx_23 & 1) != 0)
                                zmm10[0] = zmm1[0]
                        
                        zmm7 = var_558_1
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        
                        if ((rbx_23 & 2) != 0)
                            zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm10, 1), zmm10, 0xe2)
                            
                            if ((rbx_23 & 4) != 0)
                                goto label_140246e0e
                            
                            goto label_140246cbc
                        
                        if ((rbx_23 & 4) == 0)
                        label_140246cbc:
                            
                            if ((rbx_23 & 8) != 0)
                                zmm10 =
                                    _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm1, zmm10, 0x23), 0x24)
                        else
                        label_140246e0e:
                            zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm1, zmm10, 0x32), 0x84)
                            
                            if ((rbx_23 & 8) != 0)
                                zmm10 =
                                    _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm1, zmm10, 0x23), 0x24)
                        
                        zmm2 = data_1434422d0
                        zmm1 = var_538_1 & zmm2
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm2) & zmm11, 0x1f)
                        char j_4 = _mm_movemask_ps(zmm2)
                        
                        if (j_4 == 0)
                            zmm3 = var_538_1
                            arg5 = var_2f8
                        else
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            j = zx.d(j_4)
                            
                            if ((j.b & 1) != 0)
                                arg5 = var_2f8
                                arg5[0] = zx.o(*zmm14[0].q)[0]
                                zmm2 ^= arg6
                                
                                if ((j.b & 2) != 0)
                                    arg5 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q), 
                                            arg5, 0), 
                                        arg5, 0xe2)
                            else
                                arg5 = var_2f8
                                zmm2 ^= arg6
                                
                                if ((j.b & 2) != 0)
                                    arg5 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q), 
                                            arg5, 0), 
                                        arg5, 0xe2)
                            
                            zmm3 = data_1434426b0
                            zmm7 = _mm_add_epi64(var_3a8_1, zmm3)
                            int32_t temp0_829[0x4] = _mm_add_epi64(zmm14, zmm3)
                            zmm4 = _mm_shuffle_epi32(zmm2, 0x50)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                            
                            if ((j.b & 4) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*var_3a8_1[0].q), arg5, 0x30), 0x84)
                            
                            arg6 = var_3a8_1 & zmm2
                            zmm2 &= not.o(zmm7)
                            
                            if ((j.b & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(var_3a8_1, 0x4e).q), 
                                        arg5, 0x20), 
                                    0x24)
                            
                            zmm3 = var_538_1
                            zmm7 = var_558_1
                            zmm14 = (zmm14 & zmm4) | (zmm4 & not.o(temp0_829))
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
                                goto label_140246fb0
                        else if ((rbx_23 & 2) != 0)
                        label_140246fb0:
                            arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg8, 1), arg8, 0xe2)
                            
                            if ((rbx_23 & 4) != 0)
                                goto label_140246f8a
                            
                            goto label_140246fbc
                        
                        if ((rbx_23 & 4) == 0)
                        label_140246fbc:
                            var_2f8 = arg5
                            
                            if ((rbx_23 & 8) != 0)
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm1, arg8, 0x23), 0x24)
                        else
                        label_140246f8a:
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm1, arg8, 0x32), 0x84)
                            var_2f8 = arg5
                            
                            if ((rbx_23 & 8) != 0)
                                arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zmm1, arg8, 0x23), 0x24)
                        
                        arg5 = zmm3
                        zmm2 = data_142fc95e0
                        zmm1 = zmm3 & zmm2
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm2) & zmm11, 0x1f)
                        char j_5 = _mm_movemask_ps(zmm2)
                        
                        if (j_5 == 0)
                            zmm11 = var_5b8_4
                            zmm15 = var_488_1
                            zmm14 = zmm10
                            zmm10 = var_518_2
                            zmm1 = __pcmpeqd_xmmdq_memdq(zmm1, data_142d8f750) & not.o(zmm2)
                            
                            if ((rbx_23 & 1) != 0)
                                zmm11[0] = zmm1[0]
                        else
                            j = zx.d(j_5)
                            
                            if ((j.b & 1) != 0)
                                zmm3.d = zx.d(*zmm14[0].q)
                                zmm2 = zmm3
                                
                                if ((j.b & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e).q), 
                                            zmm2, 0), 
                                        zmm2, 0xe2)
                            else
                                zmm2 = var_238
                                
                                if ((j.b & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e).q), 
                                            zmm2, 0), 
                                        zmm2, 0xe2)
                            
                            zmm11 = var_5b8_4
                            zmm15 = var_488_1
                            zmm14 = zmm10
                            zmm10 = var_518_2
                            
                            if ((j.b & 4) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(zx.o(*var_3a8_1.q), zmm2, 0x30), 0x84)
                            
                            if ((j.b & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(
                                        zx.o(*__pshufd_xmmdq_memdq_immb(var_3a8_1, 0x4e).q), zmm2, 
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
                                goto label_140247259
                            
                            goto label_14024714d
                        
                        if ((rbx_23 & 4) == 0)
                        label_14024714d:
                            
                            if ((rbx_23 & 8) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x23), 0x24)
                        else
                        label_140247259:
                            zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x32), 0x84)
                            
                            if ((rbx_23 & 8) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm1, zmm11, 0x23), 0x24)
                    
                    zmm2 = temp0_128
                    zmm1 = zmm2 & not.o(zmm0 ^ arg7)
                    
                    if (_mm_movemask_ps(zmm1) == 0)
                        arg7 = var_548_1
                        zmm2 = var_568_1
                    else
                        zmm0 = __pcmpeqd_xmmdq_memdq(var_4c8, data_143442ad0)
                        char j_6 = _mm_movemask_ps(zmm2 & not.o(zmm0))
                        
                        if (j_6 == 0)
                            arg7 = var_548_1
                        else
                            j = zx.d(j_6)
                            char temp44_1 = j.b & 1
                            
                            if (temp44_1 == 0)
                                arg7 = var_548_1
                                
                                if (temp44_1 != 0)
                                label_14024727c:
                                    arg8[0] = 0
                                    
                                    if (temp44_1 != 0)
                                        goto label_1402471c7
                                    
                                    goto label_140247287
                            else
                                zmm14[0] = 0
                                arg7 = var_548_1
                                
                                if (temp44_1 != 0)
                                    goto label_14024727c
                            
                            bool cond:165_1
                            bool cond:166_1
                            bool cond:187_1
                            bool cond:188_1
                            
                            if (temp44_1 != 0)
                            label_1402471c7:
                                zmm11[0] = 0
                                char temp65_1 = j.b & 2
                                cond:165_1 = temp65_1 == 0
                                cond:166_1 = temp65_1 != 0
                                cond:187_1 = temp65_1 == 0
                                cond:188_1 = temp65_1 != 0
                                
                                if (temp65_1 != 0)
                                    goto label_14024729d
                                
                                goto label_1402471d5
                            
                        label_140247287:
                            char temp64_1 = j.b & 2
                            cond:165_1 = temp64_1 == 0
                            cond:166_1 = temp64_1 != 0
                            cond:187_1 = temp64_1 == 0
                            cond:188_1 = temp64_1 != 0
                            
                            if (temp64_1 == 0)
                            label_1402471d5:
                                
                                if (not(cond:165_1))
                                label_1402471e8:
                                    arg8 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                                    
                                    if (cond:188_1)
                                        goto label_1402472ba
                                    
                                    goto label_1402471f2
                            else
                            label_14024729d:
                                zmm14 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm14, 0), zmm14, 0xe2)
                                
                                if (cond:166_1)
                                    goto label_1402471e8
                            
                            bool cond:230_1
                            bool cond:231_1
                            bool cond:253_1
                            bool cond:254_1
                            
                            if (not(cond:187_1))
                            label_1402472ba:
                                zmm11 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm11, 0), zmm11, 0xe2)
                                char temp89_1 = j.b & 4
                                cond:230_1 = temp89_1 == 0
                                cond:231_1 = temp89_1 != 0
                                cond:253_1 = temp89_1 == 0
                                cond:254_1 = temp89_1 != 0
                                
                                if (temp89_1 != 0)
                                    goto label_140247203
                                
                                goto label_1402472c7
                            
                        label_1402471f2:
                            char temp88_1 = j.b & 4
                            cond:230_1 = temp88_1 == 0
                            cond:231_1 = temp88_1 != 0
                            cond:253_1 = temp88_1 == 0
                            cond:254_1 = temp88_1 != 0
                            
                            if (temp88_1 == 0)
                            label_1402472c7:
                                
                                if (not(cond:230_1))
                                label_1402472d5:
                                    arg8 = _mm_shuffle_ps(arg8, 
                                        _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                                    
                                    if (cond:254_1)
                                        goto label_14024721c
                                    
                                    goto label_1402472e0
                            else
                            label_140247203:
                                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x30), 
                                    0x84)
                                
                                if (cond:231_1)
                                    goto label_1402472d5
                            
                            bool cond:294_1
                            bool cond:295_1
                            bool cond:308_1
                            bool cond:309_1
                            
                            if (not(cond:253_1))
                            label_14024721c:
                                zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zx.o(0), zmm11, 0x30), 
                                    0x84)
                                char temp109_1 = j.b & 8
                                cond:294_1 = temp109_1 == 0
                                cond:295_1 = temp109_1 != 0
                                cond:308_1 = temp109_1 == 0
                                cond:309_1 = temp109_1 == 0
                                
                                if (temp109_1 != 0)
                                    goto label_1402472f1
                                
                                goto label_14024722a
                            
                        label_1402472e0:
                            char temp108_1 = j.b & 8
                            cond:294_1 = temp108_1 == 0
                            cond:295_1 = temp108_1 != 0
                            cond:308_1 = temp108_1 == 0
                            cond:309_1 = temp108_1 == 0
                            
                            if (temp108_1 != 0)
                            label_1402472f1:
                                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x20), 
                                    0x24)
                                
                                if (cond:295_1)
                                    goto label_140247238
                                
                                goto label_1402472fc
                            
                        label_14024722a:
                            
                            if (cond:294_1)
                            label_1402472fc:
                                
                                if (not(cond:308_1))
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                            else
                            label_140247238:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                                
                                if (not(cond:309_1))
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                        
                        zmm2 = var_568_1
                        char j_9 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm1), 0x1f))
                        
                        if (j_9 != 0)
                            j = zx.d(j_9)
                            char temp57_1 = j.b & 1
                            
                            if (temp57_1 != 0)
                                zmm14[0] = 0
                                
                                if (temp57_1 != 0)
                                    goto label_140247bd8
                            else if (temp57_1 != 0)
                            label_140247bd8:
                                arg8[0] = 0
                                
                                if (temp57_1 != 0)
                                    goto label_140247b75
                                
                                goto label_140247bdf
                            
                            bool cond:185_1
                            bool cond:186_1
                            bool cond:209_1
                            bool cond:210_1
                            
                            if (temp57_1 != 0)
                            label_140247b75:
                                zmm11[0] = 0
                                char temp83_1 = j.b & 2
                                cond:185_1 = temp83_1 == 0
                                cond:186_1 = temp83_1 != 0
                                cond:209_1 = temp83_1 == 0
                                cond:210_1 = temp83_1 != 0
                                
                                if (temp83_1 != 0)
                                    goto label_140247bf1
                                
                                goto label_140247b7f
                            
                        label_140247bdf:
                            char temp82_1 = j.b & 2
                            cond:185_1 = temp82_1 == 0
                            cond:186_1 = temp82_1 != 0
                            cond:209_1 = temp82_1 == 0
                            cond:210_1 = temp82_1 != 0
                            
                            if (temp82_1 == 0)
                            label_140247b7f:
                                
                                if (not(cond:185_1))
                                label_140247b8e:
                                    arg8 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                                    
                                    if (cond:210_1)
                                        goto label_140247c06
                                    
                                    goto label_140247b94
                            else
                            label_140247bf1:
                                zmm14 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm14, 0), zmm14, 0xe2)
                                
                                if (cond:186_1)
                                    goto label_140247b8e
                            
                            bool cond:251_1
                            bool cond:252_1
                            bool cond:276_1
                            bool cond:277_1
                            
                            if (not(cond:209_1))
                            label_140247c06:
                                zmm11 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm11, 0), zmm11, 0xe2)
                                char temp107_1 = j.b & 4
                                cond:251_1 = temp107_1 == 0
                                cond:252_1 = temp107_1 != 0
                                cond:276_1 = temp107_1 == 0
                                cond:277_1 = temp107_1 != 0
                                
                                if (temp107_1 != 0)
                                    goto label_140247ba1
                                
                                goto label_140247c0f
                            
                        label_140247b94:
                            char temp106_1 = j.b & 4
                            cond:251_1 = temp106_1 == 0
                            cond:252_1 = temp106_1 != 0
                            cond:276_1 = temp106_1 == 0
                            cond:277_1 = temp106_1 != 0
                            
                            if (temp106_1 == 0)
                            label_140247c0f:
                                
                                if (not(cond:251_1))
                                label_140247c19:
                                    arg8 = _mm_shuffle_ps(arg8, 
                                        _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                                    
                                    if (cond:277_1)
                                        goto label_140247bb2
                                    
                                    goto label_140247c20
                            else
                            label_140247ba1:
                                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x30), 
                                    0x84)
                                
                                if (cond:252_1)
                                    goto label_140247c19
                            
                            bool cond:306_1
                            bool cond:307_1
                            bool cond:323_1
                            bool cond:324_1
                            
                            if (not(cond:276_1))
                            label_140247bb2:
                                zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zx.o(0), zmm11, 0x30), 
                                    0x84)
                                char temp127_1 = j.b & 8
                                cond:306_1 = temp127_1 == 0
                                cond:307_1 = temp127_1 != 0
                                cond:323_1 = temp127_1 == 0
                                cond:324_1 = temp127_1 == 0
                                
                                if (temp127_1 != 0)
                                    goto label_140247c2d
                                
                                goto label_140247bbc
                            
                        label_140247c20:
                            char temp126_1 = j.b & 8
                            cond:306_1 = temp126_1 == 0
                            cond:307_1 = temp126_1 != 0
                            cond:323_1 = temp126_1 == 0
                            cond:324_1 = temp126_1 == 0
                            
                            if (temp126_1 != 0)
                            label_140247c2d:
                                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x20), 
                                    0x24)
                                
                                if (cond:307_1)
                                    goto label_140247bc6
                                
                                goto label_140247c34
                            
                        label_140247bbc:
                            
                            if (cond:306_1)
                            label_140247c34:
                                
                                if (not(cond:323_1))
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
                            else
                            label_140247bc6:
                                arg8 =
                                    _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x20), 0x24)
                                
                                if (not(cond:324_1))
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
            
            zmm10 = _mm_cmpeq_epi32(zmm10, zmm4) & not.o(zmm15)
            char temp0_890 = _mm_movemask_ps(zmm10)
            
            if (temp0_890 == 0)
                zmm10 = zx.o(0)
            else
                int32_t var_4f8_3[0x4] = arg8
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
                int32_t var_508_1[0x4] =
                    __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(zmm1, var_448_3), var_588_1)
                arg8 = _mm_add_epi64(arg8, zmm9)
                zmm2 &= zmm10
                float var_518_3[0x4] = zmm10
                uint32_t var_5a8[0x4]
                uint128_t var_598
                int32_t var_578[0x4]
                float var_388[0x4]
                float var_2e8[0x4]
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) == 0)
                    arg6 = var_578
                else
                    zmm3 = arg7
                    zmm10 = zx.o(0)
                    zmm0 = _mm_cmpeq_epi32(var_348_1, zx.o(0))
                    arg7 = zmm0
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm2 & zmm0, 0x1f), 0x1f)
                    char temp0_911 = _mm_movemask_ps(zmm1)
                    var_458_2 = arg8
                    arg8 = zmm2
                    
                    if (temp0_911 == 0)
                        arg6 = var_578
                    else
                        int32_t var_5b8_5[0x4] = zmm11
                        float var_568_2[0x4] = zmm14
                        zmm2 = __paddq_xmmdq_memdq(var_4d8_1, var_418_2)
                        zmm4 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_428_1, var_448_3), 
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
                        zmm10 = *(zmm3.q + rbp_12)
                        zmm15 = *(_mm_shuffle_epi32(zmm3, 0x4e).q + rax_214)
                        bool cond:87_1
                        bool cond:88_1
                        
                        if ((temp0_911 & 1) == 0)
                            arg6 = var_578
                            char temp33_1 = temp0_911 & 1
                            cond:87_1 = temp33_1 != 0
                            cond:88_1 = temp33_1 == 0
                            
                            if (temp33_1 == 0)
                                goto label_140247a85
                            
                            goto label_140247574
                        
                        zmm9 = var_5a8
                        zmm9[0] = (*rbx_26).d
                        var_5a8 = zmm9
                        arg6 = var_578
                        char temp32_1 = temp0_911 & 1
                        cond:87_1 = temp32_1 != 0
                        cond:88_1 = temp32_1 == 0
                        
                        if (temp32_1 == 0)
                        label_140247a85:
                            
                            if (cond:88_1)
                                goto label_14024757e
                            
                            goto label_140247a8b
                        
                    label_140247574:
                        arg6[0] = zmm1[0]
                        bool cond:115_1
                        bool cond:116_1
                        bool cond:132_1
                        bool cond:133_1
                        
                        if (not(cond:87_1))
                        label_14024757e:
                            char temp43_1 = temp0_911 & 2
                            cond:115_1 = temp43_1 != 0
                            cond:116_1 = temp43_1 == 0
                            cond:132_1 = temp43_1 != 0
                            cond:133_1 = temp43_1 == 0
                            
                            if (temp43_1 == 0)
                                goto label_140247aa2
                            
                            goto label_140247587
                        
                    label_140247a8b:
                        zmm1 = var_598
                        zmm1[0] = zmm4[0]
                        var_598 = zmm1
                        char temp42_1 = temp0_911 & 2
                        cond:115_1 = temp42_1 != 0
                        cond:116_1 = temp42_1 == 0
                        cond:132_1 = temp42_1 != 0
                        cond:133_1 = temp42_1 == 0
                        
                        if (temp42_1 == 0)
                        label_140247aa2:
                            zmm3 = var_538_1
                            zmm7 = var_558_1
                            
                            if (cond:116_1)
                                goto label_1402475ae
                            
                            goto label_140247abf
                        
                    label_140247587:
                        zmm1 = var_5a8
                        var_5a8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 0), zmm1, 0xe2)
                        zmm3 = var_538_1
                        zmm7 = var_558_1
                        
                        if (not(cond:115_1))
                        label_1402475ae:
                            
                            if (cond:133_1)
                                goto label_140247ac8
                            
                            goto label_1402475b4
                        
                    label_140247abf:
                        arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg6, 0), arg6, 0xe2)
                        bool cond:163_1
                        bool cond:164_1
                        bool cond:183_1
                        bool cond:184_1
                        
                        if (not(cond:132_1))
                        label_140247ac8:
                            char temp63_1 = temp0_911 & 4
                            cond:163_1 = temp63_1 != 0
                            cond:164_1 = temp63_1 == 0
                            cond:183_1 = temp63_1 != 0
                            cond:184_1 = temp63_1 == 0
                            
                            if (temp63_1 == 0)
                                goto label_1402475cf
                            
                            goto label_140247ad1
                        
                    label_1402475b4:
                        zmm1 = var_598
                        var_598 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm1, 0), zmm1, 0xe2)
                        char temp62_1 = temp0_911 & 4
                        cond:163_1 = temp62_1 != 0
                        cond:164_1 = temp62_1 == 0
                        cond:183_1 = temp62_1 != 0
                        cond:184_1 = temp62_1 == 0
                        
                        if (temp62_1 == 0)
                        label_1402475cf:
                            zmm14 = var_568_2
                            
                            if (cond:164_1)
                                goto label_140247af1
                            
                            goto label_1402475df
                        
                    label_140247ad1:
                        zmm0 = var_5a8
                        var_5a8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm14, zmm0, 0x30), 0x84)
                        zmm14 = var_568_2
                        
                        if (not(cond:163_1))
                        label_140247af1:
                            arg5 = zmm3
                            
                            if (cond:184_1)
                                goto label_1402475ed
                            
                            goto label_140247b0a
                        
                    label_1402475df:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg5, arg6, 0x30), 0x84)
                        arg5 = zmm3
                        bool cond:228_1
                        bool cond:229_1
                        bool cond:249_1
                        bool cond:250_1
                        
                        if (not(cond:183_1))
                        label_1402475ed:
                            char temp87_1 = temp0_911 & 8
                            cond:228_1 = temp87_1 != 0
                            cond:229_1 = temp87_1 == 0
                            cond:249_1 = temp87_1 != 0
                            cond:250_1 = temp87_1 == 0
                            
                            if (temp87_1 == 0)
                                goto label_140247b18
                            
                            goto label_1402475f6
                        
                    label_140247b0a:
                        var_598 =
                            _mm_shuffle_ps(var_598, _mm_shuffle_ps(zmm10, var_598, 0x30), 0x84)
                        char temp86_1 = temp0_911 & 8
                        cond:228_1 = temp86_1 != 0
                        cond:229_1 = temp86_1 == 0
                        cond:249_1 = temp86_1 != 0
                        cond:250_1 = temp86_1 == 0
                        
                        if (temp86_1 == 0)
                        label_140247b18:
                            zmm11 = var_5b8_5
                            
                            if (cond:229_1)
                                goto label_140247616
                            
                            goto label_140247b29
                        
                    label_1402475f6:
                        zmm0 = var_5a8
                        var_5a8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x20), 0x24)
                        zmm11 = var_5b8_5
                        
                        if (cond:228_1)
                        label_140247b29:
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm12, arg6, 0x20), 0x24)
                            zmm10 = zx.o(0)
                            
                            if (cond:249_1)
                                var_598 = _mm_shuffle_ps(var_598, 
                                    _mm_shuffle_ps(zmm15, var_598, 0x20), 0x24)
                        else
                        label_140247616:
                            zmm10 = zx.o(0)
                            
                            if (not(cond:250_1))
                                var_598 = _mm_shuffle_ps(var_598, 
                                    _mm_shuffle_ps(zmm15, var_598, 0x20), 0x24)
                        
                        zmm3 = var_548_1
                        zmm15 = var_488_1
                    
                    arg7 &= not.o(arg8)
                    zmm2 = _mm_slli_epi32(arg7, 0x1f)
                    j = _mm_movemask_ps(zmm2)
                    
                    if (j.b == 0)
                        zmm10 = var_518_3
                        zmm9 = var_528_1
                        arg7 = zmm3
                        arg8 = var_458_2
                    else
                        zmm9 = arg7
                        zmm12 = arg6
                        zmm3 = _mm_srai_epi32(_mm_slli_epi32(arg5, 0x1f), 0x1f)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f) & zmm3
                        arg7 = var_508_1
                        arg8 = var_458_2
                        zmm1 = arg8
                        
                        if (_mm_movemask_ps(zmm2) != 0)
                            zmm0 = data_1434426c0
                            zmm4 = _mm_add_epi64(arg8, zmm0)
                            zmm1 = _mm_add_epi64(var_508_1, zmm0)
                            arg5 = zmm2 ^ data_142d3f800
                            arg7 = _mm_shuffle_epi32(arg5, 0x50)
                            arg7 = (arg7 & not.o(zmm1)) | (var_508_1 & arg7)
                            zmm1 = _mm_shuffle_epi32(arg5, 0xfa)
                            zmm1 = (zmm1 & not.o(zmm4)) | (arg8 & zmm1)
                            zmm4 = __paddq_xmmdq_memdq(var_4d8_1, var_418_2)
                            arg5 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_428_1, var_448_3), 
                                var_4e8_3)
                            zmm4 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm4, var_4a8_2), zmm0)
                            arg5 = _mm_add_epi64(arg5, zmm0)
                            zmm7 = var_558_1
                            arg6 = _mm_shuffle_epi32(zmm2, 0x50) & arg5
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa) & zmm4
                            float temp0_955[0x4] = _mm_unpacklo_ps(*(arg4 + arg6[0].q), 
                                (*(arg4 + _mm_shuffle_epi32(arg6, 0x4e)[0].q))[0].q)
                            float temp0_957[0x4] = _mm_unpacklo_ps(*(arg4 + zmm2.q), 
                                (*(arg4 + _mm_shuffle_epi32(zmm2, 0x4e).q)).q)
                            zmm4 = temp0_955[0].q | temp0_957[0].q << 0x40
                            arg5 = var_538_1
                        
                        zmm3 &= zmm4
                        char rbx_27 = j.b
                        
                        if ((rbx_27 & 1) != 0)
                            zmm2.d = zmm3.d
                            var_5a8 = zmm2
                            arg6 = zmm12
                            
                            if ((rbx_27 & 2) != 0)
                                goto label_140247811
                            
                            goto label_1402477e4
                        
                        arg6 = zmm12
                        
                        if ((rbx_27 & 2) != 0)
                        label_140247811:
                            zmm4 = var_5a8
                            var_5a8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm4, 1), zmm4, 0xe2)
                            
                            if ((rbx_27 & 4) != 0)
                                goto label_1402477ec
                            
                            goto label_140247828
                        
                    label_1402477e4:
                        
                        if ((rbx_27 & 4) == 0)
                        label_140247828:
                            
                            if ((rbx_27 & 8) != 0)
                                zmm2 = var_5a8
                                var_5a8 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm3, zmm2, 0x23), 0x24)
                        else
                        label_1402477ec:
                            zmm4 = var_5a8
                            var_5a8 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm3, zmm4, 0x32), 0x84)
                            
                            if ((rbx_27 & 8) != 0)
                                zmm2 = var_5a8
                                var_5a8 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm3, zmm2, 0x23), 0x24)
                        
                        zmm2 = data_1434422d0
                        zmm4 = arg5 & zmm2
                        zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm4, zmm2) & zmm9, 0x1f)
                        char j_7 = _mm_movemask_ps(zmm2)
                        
                        if (j_7 == 0)
                            zmm3 = zmm1
                            zmm4 = _mm_cmpeq_epi32(zmm4, zmm10) & not.o(var_388)
                            
                            if ((rbx_27 & 1) != 0)
                                arg6[0] = zmm4[0]
                        else
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f) ^ data_142d3f800
                            j = zx.d(j_7)
                            zmm10 = zmm7
                            zmm7 = arg5
                            
                            if ((j.b & 1) != 0)
                                var_388[0] = (*arg7[0].q).d
                            
                            zmm3 = data_1434426c0
                            int32_t temp0_967[0x4] = _mm_add_epi64(zmm1, zmm3)
                            zmm3 = _mm_add_epi64(arg7, zmm3)
                            arg5 = _mm_shuffle_epi32(zmm2, 0x50)
                            zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                            
                            if ((j.b & 2) != 0)
                                zmm0 = var_388
                                var_388 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e)[0].q, zmm0, 0), 
                                    zmm0, 0xe2)
                                zmm10 = var_558_1
                                zmm7 = var_538_1
                            
                            arg7 &= arg5
                            
                            if ((j.b & 4) != 0)
                                zmm0 = var_388
                                var_388 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(*zmm1[0].q, zmm0, 0x30), 0x84)
                            
                            arg6 = zmm12
                            arg7 |= arg5 & not.o(zmm3)
                            zmm3 = (zmm1 & zmm2) | (zmm2 & not.o(temp0_967))
                            
                            if ((j.b & 8) != 0)
                                zmm0 = var_388
                                var_388 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm0, 
                                        0x20), 
                                    0x24)
                            
                            arg5 = zmm7
                            zmm7 = zmm10
                            zmm4 = _mm_cmpeq_epi32(zmm4, zx.o(0)) & not.o(var_388)
                            
                            if ((rbx_27 & 1) != 0)
                                arg6[0] = zmm4[0]
                        
                        if ((rbx_27 & 2) != 0)
                            arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, arg6, 1), arg6, 0xe2)
                            
                            if ((rbx_27 & 4) != 0)
                                goto label_140247a30
                            
                            goto label_1402479be
                        
                        if ((rbx_27 & 4) == 0)
                        label_1402479be:
                            
                            if ((rbx_27 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm4, arg6, 0x23), 0x24)
                        else
                        label_140247a30:
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm4, arg6, 0x32), 0x84)
                            
                            if ((rbx_27 & 8) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm4, arg6, 0x23), 0x24)
                        
                        zmm2 = data_142fc95e0
                        zmm1 = arg5 & zmm2
                        char j_8 = _mm_movemask_ps(_mm_slli_epi32(
                            zmm9 & _mm_cmpeq_epi32(zmm1, zmm2), 0x1f))
                        
                        if (j_8 != 0)
                            j = zx.d(j_8)
                            
                            if ((j.b & 1) != 0)
                                var_2e8[0] = (*arg7[0].q).d
                                zmm2 = var_2e8
                                zmm4 = zx.o(0)
                                
                                if ((j.b & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, zmm2, 0), 
                                        zmm2, 0xe2)
                            else
                                zmm2 = var_2e8
                                zmm4 = zx.o(0)
                                
                                if ((j.b & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg7, 0x4e).q, zmm2, 0), 
                                        zmm2, 0xe2)
                            
                            arg7 = var_548_1
                            zmm10 = var_518_3
                            zmm9 = var_528_1
                            
                            if ((j.b & 4) != 0)
                                zmm2 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm3.q, zmm2, 0x30), 0x84)
                                
                                if ((j.b & 8) != 0)
                                label_140247f3d:
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm2, 
                                            0x20), 
                                        0x24)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm4) & not.o(zmm2)
                                    
                                    if ((rbx_27 & 1) == 0)
                                        goto label_140247ca7
                                    
                                    goto label_140247e2f
                            else if ((j.b & 8) != 0)
                                goto label_140247f3d
                            
                            zmm1 = _mm_cmpeq_epi32(zmm1, zmm4) & not.o(zmm2)
                            
                            if ((rbx_27 & 1) == 0)
                                goto label_140247ca7
                            
                            goto label_140247e2f
                        
                        zmm2 = var_2e8
                        arg7 = var_548_1
                        zmm10 = var_518_3
                        zmm9 = var_528_1
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                        
                        if ((rbx_27 & 1) == 0)
                        label_140247ca7:
                            var_2e8 = zmm2
                            
                            if ((rbx_27 & 2) == 0)
                                goto label_140247e49
                            
                            goto label_140247cc5
                        
                    label_140247e2f:
                        zmm0.d = zmm1[0]
                        var_598 = zmm0
                        var_2e8 = zmm2
                        
                        if ((rbx_27 & 2) == 0)
                        label_140247e49:
                            
                            if ((rbx_27 & 4) == 0)
                                goto label_140247cd3
                            
                            goto label_140247e62
                        
                    label_140247cc5:
                        var_598 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, var_598, 1), var_598, 0xe2)
                        
                        if ((rbx_27 & 4) != 0)
                        label_140247e62:
                            var_598 =
                                _mm_shuffle_ps(var_598, _mm_shuffle_ps(zmm1, var_598, 0x32), 0x84)
                            
                            if ((rbx_27 & 8) != 0)
                                var_598 = _mm_shuffle_ps(var_598, 
                                    _mm_shuffle_ps(zmm1, var_598, 0x23), 0x24)
                        else
                        label_140247cd3:
                            
                            if ((rbx_27 & 8) != 0)
                                var_598 = _mm_shuffle_ps(var_598, 
                                    _mm_shuffle_ps(zmm1, var_598, 0x23), 0x24)
                
                float var_408[0x4]
                float var_3f8[0x4]
                float var_3e8[0x4]
                float var_3d8[0x4]
                float var_308[0x4]
                int32_t var_2d8[0x4]
                float var_248[0x4]
                int32_t var_228[0x4]
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm10 & var_478_2, 0x1f)) == 0)
                    return sub_140248bf0(j, arg2, arg3, arg4, temp0_890, &data_143442cf0, 
                        &data_143442d10, i_5, arg1, r15, arg5, arg6, arg7, zmm11, zmm14, zmm15, 
                        var_538_1, var_528_1, var_518_3, var_508_1, var_4f8_3, var_4e8_3, 
                        var_4d8_1, var_4c8, var_4b8_1, var_4a8_2, var_498, var_488_1, var_478_2, 
                        var_468_1, var_458_2, var_448_3, var_438_1, var_428_1, var_418_2, var_408, 
                        var_3f8, var_3e8, var_3d8, var_3c8, var_3b8, var_3a8_1, var_398_1, var_388, 
                        var_378, var_368, var_358, var_348_1, var_338, var_328, var_318, var_308, 
                        var_2f8, var_2e8, var_2d8, var_2c8, var_2b8, var_2a8_1, var_298, var_288, 
                        var_278, var_268, var_258_1, var_248, var_238, var_228, var_218, var_208, 
                        var_1f8, var_1e8, var_1d8, temp0_6, var_1b8_1, var_1a8_1, var_198_1, 
                        var_188_1) __tailcall
                
                zmm3 = zmm10
                zmm10 = _mm_srai_epi32(_mm_slli_epi32(zmm10 & zmm7, 0x1f), 0x1f)
                char j_10 = _mm_movemask_ps(zmm10)
                
                if (j_10 == 0)
                    arg5 = var_538_1
                    zmm9 = zx.o(0)
                else
                    zmm0 = _mm_srai_epi32(_mm_slli_epi32(var_538_1, 0x1f), 0x1f) & zmm7
                    zmm3 = _mm_srai_epi32(_mm_slli_epi32(zmm3, 0x1f), 0x1f) & zmm0
                    uint32_t temp0_1029 = _mm_movemask_ps(zmm3)
                    zmm12 = zx.o(0)
                    int32_t var_578_2[0x4] = arg6
                    int32_t var_5b8_6[0x4] = zmm11
                    
                    if (temp0_1029 == 0)
                        zmm11 = zx.o(0)
                        arg7 = zx.o(0)
                        zmm3 = var_2d8
                    else
                        char rsi_9 = temp0_1029.b
                        
                        if ((rsi_9 & 1) != 0)
                            arg6 = var_588_1
                            zmm2.d = (*arg6[0].q)[0]
                            var_408 = zmm2
                            
                            if ((rsi_9 & 2) != 0)
                                zmm2 = var_408
                                var_408 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg6, 0x4e)[0].q, zmm2, 0), 
                                    zmm2, 0xe2)
                        else
                            arg6 = var_588_1
                            
                            if ((rsi_9 & 2) != 0)
                                zmm2 = var_408
                                var_408 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(arg6, 0x4e)[0].q, zmm2, 0), 
                                    zmm2, 0xe2)
                        
                        if ((rsi_9 & 4) == 0)
                            if ((rsi_9 & 8) != 0)
                                goto label_140247f91
                            
                            goto label_140247ed8
                        
                        zmm2 = var_408
                        var_408 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm9[0].q, zmm2, 0x30), 0x84)
                        char rcx_26
                        
                        if ((rsi_9 & 8) != 0)
                        label_140247f91:
                            zmm2 = var_408
                            var_408 = _mm_shuffle_ps(zmm2, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q, zmm2, 0x20), 
                                0x24)
                            rcx_26 = _mm_movemask_ps(zmm0)
                            zmm11 = zx.o(0)
                            
                            if ((rcx_26 & 1) != 0)
                                goto label_140247ee9
                            
                            goto label_140247fba
                        
                    label_140247ed8:
                        rcx_26 = _mm_movemask_ps(zmm0)
                        zmm11 = zx.o(0)
                        
                        if ((rcx_26 & 1) == 0)
                        label_140247fba:
                            zmm3 ^= data_142d3f800
                            
                            if ((rcx_26 & 2) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(var_408, zmm11, 1), zmm11, 0xe2)
                        else
                        label_140247ee9:
                            zmm11 = zx.o(0)
                            zmm11[0] = var_408.d
                            zmm3 ^= data_142d3f800
                            
                            if ((rcx_26 & 2) != 0)
                                zmm11 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(var_408, zmm11, 1), zmm11, 0xe2)
                        
                        zmm2 = __paddq_xmmdq_memdq(arg6, data_1434426c0)
                        zmm1 = _mm_shuffle_epi32(zmm3, 0x50)
                        
                        if ((rcx_26 & 4) != 0)
                            zmm11 =
                                _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_408, zmm11, 0x32), 0x84)
                        
                        zmm0 = zmm1 & not.o(zmm2)
                        
                        if ((rcx_26 & 8) != 0)
                            zmm11 =
                                _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_408, zmm11, 0x23), 0x24)
                        
                        zmm2 = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                        zmm4 = _mm_shuffle_epi32(zmm3, 0xfa)
                        arg6 = (arg6 & zmm1) | zmm0
                        
                        if ((rsi_9 & 1) != 0)
                            zmm3.d = (*arg6[0].q).d
                            var_3f8 = zmm3
                        
                        zmm3 = var_2d8
                        zmm0 = zmm4 & not.o(zmm2)
                        arg5 = zmm9 & zmm4
                        
                        if ((rsi_9 & 2) != 0)
                            zmm7 = var_3f8
                            zmm2 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(arg6, 0x4e).q, zmm7, 0), zmm7, 
                                0xe2)
                            zmm7 = var_558_1
                            var_3f8 = zmm2
                            arg5 |= zmm0
                            
                            if ((rsi_9 & 4) != 0)
                            label_14024810b:
                                zmm2 = var_3f8
                                var_3f8 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(*arg5[0].q, zmm2, 0x30), 0x84)
                                
                                if ((rsi_9 & 8) == 0)
                                    goto label_140248094
                                
                                goto label_14024813b
                        else
                            arg5 |= zmm0
                            
                            if ((rsi_9 & 4) != 0)
                                goto label_14024810b
                        
                        if ((rsi_9 & 8) == 0)
                        label_140248094:
                            arg7 = zx.o(0)
                            
                            if ((rcx_26 & 1) == 0)
                                goto label_140248161
                            
                            goto label_1402480a2
                        
                    label_14024813b:
                        zmm2 = var_3f8
                        var_3f8 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm2, 0x20), 0x24)
                        arg7 = zx.o(0)
                        
                        if ((rcx_26 & 1) != 0)
                        label_1402480a2:
                            arg7 = zx.o(0)
                            arg7[0] = var_3f8.d
                            zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            
                            if ((rcx_26 & 2) != 0)
                                arg7 = _mm_shuffle_ps(_mm_shuffle_ps(var_3f8, arg7, 1), arg7, 0xe2)
                        else
                        label_140248161:
                            zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                            zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                            
                            if ((rcx_26 & 2) != 0)
                                arg7 = _mm_shuffle_ps(_mm_shuffle_ps(var_3f8, arg7, 1), arg7, 0xe2)
                        
                        zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm0 = data_1434426c0
                        arg5 = _mm_add_epi64(arg5, zmm0)
                        int32_t temp0_1079[0x4] = _mm_add_epi64(arg6, zmm0)
                        
                        if ((rcx_26 & 4) != 0)
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(var_3f8, arg7, 0x32), 0x84)
                        
                        if ((rcx_26 & 8) != 0)
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(var_3f8, arg7, 0x23), 0x24)
                        
                        var_588_1 = (var_588_1 & zmm1) | (zmm1 & not.o(temp0_1079))
                        zmm9 = (zmm9 & zmm4) | (zmm4 & not.o(arg5))
                    
                    zmm1 = data_1434422d0
                    zmm0 = _mm_cmpeq_epi32(var_538_1 & zmm1, zmm1) & zmm7
                    zmm4 = _mm_srai_epi32(_mm_slli_epi32(var_518_3 & zmm0, 0x1f), 0x1f)
                    char temp0_1087 = _mm_movemask_ps(zmm4)
                    
                    if (temp0_1087 == 0)
                        arg6 = zx.o(0)
                    else
                        if ((temp0_1087 & 1) == 0)
                            if ((temp0_1087 & 2) != 0)
                                goto label_1402482c5
                            
                            goto label_14024824a
                        
                        zmm3.d = (*var_588_1[0].q)[0]
                        
                        if ((temp0_1087 & 2) != 0)
                        label_1402482c5:
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*__pshufd_xmmdq_memdq_immb(var_588_1, 0x4e)[0].q, 
                                    zmm3, 0), 
                                zmm3, 0xe2)
                            
                            if ((temp0_1087 & 4) == 0)
                                goto label_140248250
                            
                            goto label_1402482db
                        
                    label_14024824a:
                        
                        if ((temp0_1087 & 4) == 0)
                        label_140248250:
                            
                            if ((temp0_1087 & 8) != 0)
                                goto label_1402482fc
                            
                            goto label_14024825a
                        
                    label_1402482db:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm9[0].q, zmm3, 0x30), 0x84)
                        char rcx_27
                        
                        if ((temp0_1087 & 8) != 0)
                        label_1402482fc:
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e)[0].q, zmm3, 0x20), 
                                0x24)
                            rcx_27 = _mm_movemask_ps(zmm0)
                            zmm12 = zx.o(0)
                            
                            if ((rcx_27 & 1) != 0)
                                goto label_14024826b
                            
                            goto label_140248311
                        
                    label_14024825a:
                        rcx_27 = _mm_movemask_ps(zmm0)
                        zmm12 = zx.o(0)
                        
                        if ((rcx_27 & 1) == 0)
                        label_140248311:
                            zmm4 ^= data_142d3f800
                            
                            if ((rcx_27 & 2) != 0)
                                zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm12, 1), zmm12, 0xe2)
                        else
                        label_14024826b:
                            zmm12 = zx.o(0)
                            zmm12[0] = zmm3.d
                            zmm4 ^= data_142d3f800
                            
                            if ((rcx_27 & 2) != 0)
                                zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm12, 1), zmm12, 0xe2)
                        
                        zmm2 = __paddq_xmmdq_memdq(var_588_1, data_1434426c0)
                        zmm1 = _mm_shuffle_epi32(zmm4, 0x50)
                        
                        if ((rcx_27 & 4) != 0)
                            zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm3, zmm12, 0x32), 0x84)
                        
                        if ((rcx_27 & 8) != 0)
                            zmm12 = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(zmm3, zmm12, 0x23), 0x24)
                        
                        int32_t temp0_1106[0x4] = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                        zmm4 = _mm_shuffle_epi32(zmm4, 0xfa)
                        arg5 = (var_588_1 & zmm1) | (zmm1 & not.o(zmm2))
                        
                        if ((temp0_1087 & 1) != 0)
                            zmm2.d = (*arg5[0].q).d
                            var_3e8 = zmm2
                        
                        zmm2 = zmm4 & not.o(temp0_1106)
                        zmm0 = zmm9 & zmm4
                        zmm7 = zmm14
                        zmm14 = zmm3
                        
                        if ((temp0_1087 & 2) == 0)
                            zmm0 |= zmm2
                            
                            if ((temp0_1087 & 4) != 0)
                                goto label_1402485b8
                            
                            goto label_1402483e2
                        
                        zmm3 = var_3e8
                        var_3e8 = _mm_shuffle_ps(
                            _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e)[0].q, zmm3, 0), zmm3, 
                            0xe2)
                        zmm0 |= zmm2
                        
                        if ((temp0_1087 & 4) == 0)
                        label_1402483e2:
                            
                            if ((temp0_1087 & 8) != 0)
                                zmm3 = var_3e8
                                var_3e8 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm0, 0x4e).q, zmm3, 0x20), 
                                    0x24)
                        else
                        label_1402485b8:
                            zmm3 = var_3e8
                            var_3e8 =
                                _mm_shuffle_ps(zmm3, _mm_shuffle_ps(*zmm0.q, zmm3, 0x30), 0x84)
                            
                            if ((temp0_1087 & 8) != 0)
                                zmm3 = var_3e8
                                var_3e8 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm0, 0x4e).q, zmm3, 0x20), 
                                    0x24)
                        
                        zmm3 = zmm14
                        zmm14 = zmm7
                        zmm7 = var_558_1
                        arg6 = zx.o(0)
                        
                        if ((rcx_27 & 1) != 0)
                            arg6 = zx.o(0)
                            arg6[0] = var_3e8.d
                        
                        zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                        zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                        
                        if ((rcx_27 & 2) != 0)
                            arg6 = _mm_shuffle_ps(_mm_shuffle_ps(var_3e8, arg6, 1), arg6, 0xe2)
                        
                        zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm2 = data_1434426c0
                        zmm0 = _mm_add_epi64(zmm0, zmm2)
                        arg5 = _mm_add_epi64(arg5, zmm2)
                        
                        if ((rcx_27 & 4) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(var_3e8, arg6, 0x32), 0x84)
                        
                        if ((rcx_27 & 8) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(var_3e8, arg6, 0x23), 0x24)
                        
                        var_588_1 = (var_588_1 & zmm1) | (zmm1 & not.o(arg5))
                        zmm9 = (zmm9 & zmm4) | (zmm4 & not.o(zmm0))
                    
                    zmm1 = data_142fc95e0
                    zmm0 = _mm_cmpeq_epi32(var_538_1 & zmm1, zmm1) & zmm7
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_518_3 & zmm0, 0x1f), 0x1f)
                    char temp0_1126 = _mm_movemask_ps(zmm1)
                    var_2d8 = zmm3
                    
                    if (temp0_1126 == 0)
                        zmm4 = zx.o(0)
                        zmm1 = zx.o(0)
                    else
                        if ((temp0_1126 & 1) == 0)
                            if ((temp0_1126 & 2) != 0)
                                goto label_14024862b
                            
                            goto label_140248525
                        
                        var_3d8[0] = (*var_588_1.q).d
                        
                        if ((temp0_1126 & 2) != 0)
                        label_14024862b:
                            var_3d8 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*__pshufd_xmmdq_memdq_immb(var_588_1, 0x4e).q, 
                                    var_3d8, 0), 
                                var_3d8, 0xe2)
                            
                            if ((temp0_1126 & 4) == 0)
                                goto label_14024852e
                            
                            goto label_140248655
                        
                    label_140248525:
                        
                        if ((temp0_1126 & 4) == 0)
                        label_14024852e:
                            
                            if ((temp0_1126 & 8) != 0)
                                goto label_140248685
                            
                            goto label_140248537
                        
                    label_140248655:
                        var_3d8 =
                            _mm_shuffle_ps(var_3d8, _mm_shuffle_ps(*zmm9[0].q, var_3d8, 0x30), 0x84)
                        char rsi_11
                        
                        if ((temp0_1126 & 8) != 0)
                        label_140248685:
                            var_3d8 = _mm_shuffle_ps(var_3d8, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e).q, var_3d8, 0x20), 
                                0x24)
                            rsi_11 = _mm_movemask_ps(zmm0)
                            zmm4 = zx.o(0)
                            
                            if ((rsi_11 & 1) != 0)
                                goto label_140248548
                            
                            goto label_14024869d
                        
                    label_140248537:
                        rsi_11 = _mm_movemask_ps(zmm0)
                        zmm4 = zx.o(0)
                        
                        if ((rsi_11 & 1) == 0)
                        label_14024869d:
                            zmm1 ^= data_142d3f800
                            
                            if ((rsi_11 & 2) != 0)
                                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(var_3d8, zmm4, 1), zmm4, 0xe2)
                        else
                        label_140248548:
                            zmm4 = zx.o(0)
                            zmm4[0] = var_3d8.d
                            zmm1 ^= data_142d3f800
                            
                            if ((rsi_11 & 2) != 0)
                                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(var_3d8, zmm4, 1), zmm4, 0xe2)
                        
                        zmm0 = __paddq_xmmdq_memdq(var_588_1, data_1434426c0)
                        zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                        
                        if ((rsi_11 & 4) != 0)
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(var_3d8, zmm4, 0x32), 0x84)
                        
                        float var_588_4[0x4] = var_588_1 & zmm2
                        zmm2 &= not.o(zmm0)
                        
                        if ((rsi_11 & 8) != 0)
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(var_3d8, zmm4, 0x23), 0x24)
                        
                        arg5 = __paddq_xmmdq_memdq(zmm9, data_1434426c0)
                        zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm1 = var_588_4 | zmm2
                        
                        if ((temp0_1126 & 1) != 0)
                            zmm2.d = (*zmm1[0].q)[0]
                            zmm9 &= zmm0
                            zmm0 &= not.o(arg5)
                            
                            if ((temp0_1126 & 2) != 0)
                                zmm2 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm2, 0), 
                                    zmm2, 0xe2)
                        else
                            zmm2 = var_228
                            zmm9 &= zmm0
                            zmm0 &= not.o(arg5)
                            
                            if ((temp0_1126 & 2) != 0)
                                zmm2 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q, zmm2, 0), 
                                    zmm2, 0xe2)
                        
                        zmm9 |= zmm0
                        
                        if ((temp0_1126 & 4) == 0)
                            if ((temp0_1126 & 8) != 0)
                                goto label_140248800
                            
                            goto label_1402487a0
                        
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*zmm9[0].q, zmm2, 0x30), 0x84)
                        
                        if ((temp0_1126 & 8) != 0)
                        label_140248800:
                            zmm2 = _mm_shuffle_ps(zmm2, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm9, 0x4e).q, zmm2, 0x20), 0x24)
                            zmm1 = zx.o(0)
                            
                            if ((rsi_11 & 1) != 0)
                                goto label_1402487a9
                            
                            goto label_14024880d
                        
                    label_1402487a0:
                        zmm1 = zx.o(0)
                        
                        if ((rsi_11 & 1) == 0)
                        label_14024880d:
                            
                            if ((rsi_11 & 2) != 0)
                            label_14024881e:
                                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm1, 1), zmm1, 0xe2)
                                
                                if ((rsi_11 & 4) != 0)
                                    goto label_1402487c3
                                
                                goto label_14024882b
                        else
                        label_1402487a9:
                            zmm1 = zx.o(0)
                            zmm1[0] = zmm2.d
                            
                            if ((rsi_11 & 2) != 0)
                                goto label_14024881e
                        
                        if ((rsi_11 & 4) == 0)
                        label_14024882b:
                            var_228 = zmm2
                            
                            if ((rsi_11 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                        else
                        label_1402487c3:
                            zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x32), 0x84)
                            var_228 = zmm2
                            
                            if ((rsi_11 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm2, zmm1, 0x23), 0x24)
                    
                    zmm0 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_428_1, var_448_3), var_4e8_3)
                    zmm2 = data_1434426c0
                    arg5 = zmm2
                    zmm0 = _mm_add_epi64(zmm0, zmm2)
                    zmm2 = _mm_shuffle_epi32(zmm10, 0x50) & zmm0
                    zmm0 = _mm_add_epi64(
                        __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_4d8_1, var_418_2), var_4a8_2), 
                        arg5)
                    arg5 = _mm_shuffle_epi32(zmm10, 0xfa) & zmm0
                    int64_t rcx_29 = _mm_shuffle_epi32(zmm2, 0x4e).q
                    int64_t rbp_14 = arg5[0].q
                    int64_t rdi_8 = _mm_shuffle_epi32(arg5, 0x4e).q
                    zmm0 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm2.q)), zx.q(*(arg4 + rcx_29))), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_14)), zx.o(*(arg4 + rdi_8))[0].q).q)
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
                    j = zx.d(j_10)
                    char temp81_1 = j.b & 1
                    
                    if (temp81_1 != 0)
                        zmm2.d = zmm11[0]
                        var_5a8 = zmm2
                    
                    arg5 = var_538_1
                    arg7 = var_548_1
                    zmm3 = var_518_3
                    float temp0_1193[0x4] = _mm_mul_ps(zmm1, zmm0)
                    zmm12 = _mm_add_ps(zmm12, arg6)
                    
                    if (temp81_1 == 0)
                        arg6 = var_578_2
                        zmm4 = _mm_add_ps(zmm4, temp0_1193)
                        
                        if (temp81_1 != 0)
                            zmm0.d = zmm4[0]
                            var_598 = zmm0
                    else
                        arg6 = var_578_2
                        arg6[0] = zmm12[0]
                        zmm4 = _mm_add_ps(zmm4, temp0_1193)
                        
                        if (temp81_1 != 0)
                            zmm0.d = zmm4[0]
                            var_598 = zmm0
                    
                    char temp105_1 = j.b & 2
                    
                    if (temp105_1 != 0)
                        zmm1 = var_5a8
                        var_5a8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 1), zmm1, 0xe2)
                        
                        if (temp105_1 != 0)
                            goto label_1402435c6
                    else if (temp105_1 != 0)
                    label_1402435c6:
                        arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg6, 1), arg6, 0xe2)
                        
                        if (temp105_1 != 0)
                            goto label_1402489d6
                        
                        goto label_1402435cf
                    
                    bool cond:321_1
                    bool cond:322_1
                    bool cond:335_1
                    bool cond:336_1
                    
                    if (temp105_1 != 0)
                    label_1402489d6:
                        zmm1 = var_598
                        var_598 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 1), zmm1, 0xe2)
                        char temp125_1 = j.b & 4
                        cond:321_1 = temp125_1 == 0
                        cond:322_1 = temp125_1 != 0
                        cond:335_1 = temp125_1 == 0
                        cond:336_1 = temp125_1 != 0
                        
                        if (temp125_1 != 0)
                            goto label_1402435dc
                        
                        goto label_1402489f1
                    
                label_1402435cf:
                    char temp124_1 = j.b & 4
                    cond:321_1 = temp124_1 == 0
                    cond:322_1 = temp124_1 != 0
                    cond:335_1 = temp124_1 == 0
                    cond:336_1 = temp124_1 != 0
                    
                    if (temp124_1 == 0)
                    label_1402489f1:
                        
                        if (not(cond:321_1))
                        label_1402489ff:
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm12, arg6, 0x32), 0x84)
                            
                            if (cond:336_1)
                                goto label_1402435fd
                            
                            goto label_140248a09
                    else
                    label_1402435dc:
                        zmm1 = var_5a8
                        var_5a8 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x32), 0x84)
                        
                        if (cond:322_1)
                            goto label_1402489ff
                    
                    bool cond:354_1
                    bool cond:355_1
                    bool cond:364_1
                    bool cond:365_1
                    
                    if (not(cond:335_1))
                    label_1402435fd:
                        zmm1 = var_598
                        var_598 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm1, 0x32), 0x84)
                        char temp135_1 = j.b & 8
                        cond:354_1 = temp135_1 == 0
                        cond:355_1 = temp135_1 != 0
                        cond:364_1 = temp135_1 == 0
                        cond:365_1 = temp135_1 != 0
                        
                        if (temp135_1 != 0)
                            goto label_140248a12
                        
                        goto label_140243618
                    
                label_140248a09:
                    char temp134_1 = j.b & 8
                    cond:354_1 = temp134_1 == 0
                    cond:355_1 = temp134_1 != 0
                    cond:364_1 = temp134_1 == 0
                    cond:365_1 = temp134_1 != 0
                    
                    if (temp134_1 != 0)
                    label_140248a12:
                        zmm0 = var_5a8
                        var_5a8 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x23), 0x24)
                        zmm11 = var_5b8_6
                        zmm15 = var_488_1
                        
                        if (cond:355_1)
                            goto label_140243633
                        
                        goto label_140248a3c
                    
                label_140243618:
                    zmm11 = var_5b8_6
                    zmm15 = var_488_1
                    
                    if (cond:354_1)
                    label_140248a3c:
                        zmm9 = zx.o(0)
                        
                        if (not(cond:364_1))
                            var_598 =
                                _mm_shuffle_ps(var_598, _mm_shuffle_ps(zmm4, var_598, 0x23), 0x24)
                    else
                    label_140243633:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm12, arg6, 0x23), 0x24)
                        zmm9 = zx.o(0)
                        
                        if (cond:365_1)
                            var_598 =
                                _mm_shuffle_ps(var_598, _mm_shuffle_ps(zmm4, var_598, 0x23), 0x24)
                
                zmm7 ^= var_478_2
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm3 & zmm7, 0x1f)) == 0)
                    return sub_140248bf0(j, arg2, arg3, arg4, temp0_890, &data_143442cf0, 
                        &data_143442d10, i_5, arg1, r15, arg5, arg6, arg7, zmm11, zmm14, zmm15, 
                        var_538_1, var_528_1, var_518_3, var_508_1, var_4f8_3, var_4e8_3, 
                        var_4d8_1, var_4c8, var_4b8_1, var_4a8_2, var_498, var_488_1, var_478_2, 
                        var_468_1, var_458_2, var_448_3, var_438_1, var_428_1, var_418_2, var_408, 
                        var_3f8, var_3e8, var_3d8, var_3c8, var_3b8, var_3a8_1, var_398_1, var_388, 
                        var_378, var_368, var_358, var_348_1, var_338, var_328, var_318, var_308, 
                        var_2f8, var_2e8, var_2d8, var_2c8, var_2b8, var_2a8_1, var_298, var_288, 
                        var_278, var_268, var_258_1, var_248, var_238, var_228, var_218, var_208, 
                        var_1f8, var_1e8, var_1d8, temp0_6, var_1b8_1, var_1a8_1, var_198_1, 
                        var_188_1) __tailcall
                
                arg7 = __pcmpeqd_xmmdq_memdq(var_4c8, data_1434422d0)
                zmm10 = zmm3 & arg7
                zmm2 = _mm_slli_epi32(zmm10, 0x1f)
                char temp0_1211 = _mm_movemask_ps(zmm2)
                uint32_t var_558_2[0x4] = zmm7
                
                if (temp0_1211 == 0)
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
                        zmm0 = var_508_1
                        arg5 = data_1434426b0
                        zmm7 = arg5
                        zmm4 = _mm_add_epi64(zmm0, arg5)
                        arg5 = zmm2 ^ data_142d3f800
                        arg6 = _mm_shuffle_epi32(arg5, 0x50)
                        var_508_1 = (zmm0 & arg6) | (arg6 & not.o(zmm4))
                        zmm4 = _mm_add_epi64(arg8, zmm7)
                        arg5 = _mm_shuffle_epi32(arg5, 0xfa)
                        var_458_1 = (arg8 & arg5) | (arg5 & not.o(zmm4))
                        int32_t temp0_1220[0x4] = __paddq_xmmdq_memdq(var_4d8_1, var_418_2)
                        zmm0 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_428_1, var_448_3), 
                            var_4e8_3)
                        int32_t temp0_1223[0x4] = __paddq_xmmdq_memdq(temp0_1220, var_4a8_2)
                        zmm4 = data_1434426c0
                        arg5 = zmm4
                        zmm0 = _mm_add_epi64(zmm0, zmm4)
                        zmm4 = _mm_shuffle_epi32(zmm2, 0x50) & zmm0
                        int32_t temp0_1226[0x4] = _mm_add_epi64(temp0_1223, arg5)
                        zmm2 = _mm_shuffle_epi32(zmm2, 0xfa) & temp0_1226
                        int64_t rax_264 = zmm4[0].q
                        int64_t rbp_15 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        int64_t rdi_9 = _mm_shuffle_epi32(zmm2, 0x4e).q
                        zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + rax_264), 0), 
                                        *(arg4 + rbp_15), 2), 
                                    *(arg4 + zmm2.q), 4), 
                                *(arg4 + rdi_9), 6), 
                            data_143442b40))
                    
                    zmm7 = var_248
                    arg8 = var_4f8_3
                    zmm1 &= zmm2
                    
                    if ((temp0_1211 & 1) != 0)
                        zmm2.d = zmm1[0]
                        var_5a8 = zmm2
                        arg5 = var_538_1
                        arg6 = zmm3
                        
                        if ((temp0_1211 & 2) != 0)
                            goto label_1402436df
                        
                        goto label_1402436aa
                    
                    arg5 = var_538_1
                    arg6 = zmm3
                    
                    if ((temp0_1211 & 2) != 0)
                    label_1402436df:
                        zmm4 = var_5a8
                        var_5a8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm4, 1), zmm4, 0xe2)
                        
                        if ((temp0_1211 & 4) != 0)
                            goto label_1402436b2
                        
                        goto label_1402436f6
                    
                label_1402436aa:
                    
                    if ((temp0_1211 & 4) == 0)
                    label_1402436f6:
                        
                        if ((temp0_1211 & 8) != 0)
                            zmm2 = var_5a8
                            var_5a8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                    else
                    label_1402436b2:
                        zmm4 = var_5a8
                        var_5a8 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm4, 0x32), 0x84)
                        
                        if ((temp0_1211 & 8) != 0)
                            zmm2 = var_5a8
                            var_5a8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                    
                    zmm2 = data_1434422d0
                    zmm1 = arg5 & zmm2
                    zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm2) & zmm10, 0x1f)
                    char temp0_25 = _mm_movemask_ps(zmm2)
                    
                    if (temp0_25 == 0)
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm9) & not.o(zmm2)
                        
                        if ((temp0_1211 & 1) != 0)
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
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg5, 0x4e)[0].q), zmm7, 0), 
                                zmm7, 0xe2)
                        else
                            arg5 = var_508_1
                        
                        zmm3 = var_458_1
                        zmm4 = data_1434426b0
                        int32_t temp0_31[0x4] = _mm_add_epi64(zmm3, zmm4)
                        arg5 = _mm_add_epi64(arg5, zmm4)
                        zmm4 = _mm_shuffle_epi32(zmm2, 0x50)
                        zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                        
                        if ((temp0_25 & 4) != 0)
                            zmm0 = zmm7
                            zmm7 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zx.o(*zmm3.q), zmm0, 0x30), 
                                0x84)
                            zmm0 = var_538_1
                        
                        zmm9 = var_508_1 & zmm4
                        
                        if ((temp0_25 & 8) != 0)
                            zmm7 = _mm_shuffle_ps(zmm7, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e)[0].q), zmm7, 
                                    0x20), 
                                0x24)
                        
                        arg6 = arg6
                        var_508_1 = zmm9 | (zmm4 & not.o(arg5))
                        arg5 = (zmm3 & zmm2) | (zmm2 & not.o(temp0_31))
                        zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                            __andps_xmmxud_memxud(zmm7, data_143442cd0), data_143442b40))
                        var_458_1 = arg5
                        arg5 = zmm0
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                        
                        if ((temp0_1211 & 1) != 0)
                            arg6[0] = zmm1[0]
                    
                    zmm0 = var_508_1
                    
                    if ((temp0_1211 & 2) != 0)
                        arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg6, 1), arg6, 0xe2)
                        
                        if ((temp0_1211 & 4) != 0)
                            goto label_14024393d
                        
                        goto label_1402438cc
                    
                    if ((temp0_1211 & 4) == 0)
                    label_1402438cc:
                        
                        if ((temp0_1211 & 8) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                    else
                    label_14024393d:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x32), 0x84)
                        
                        if ((temp0_1211 & 8) != 0)
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm1, arg6, 0x23), 0x24)
                    
                    zmm2 = data_142fc95e0
                    zmm1 = arg5 & zmm2
                    zmm2 = _mm_cmpeq_epi32(zmm1, zmm2)
                    char temp0_50 = _mm_movemask_ps(_mm_slli_epi32(zmm10 & zmm2, 0x1f))
                    var_578 = arg6
                    var_248 = zmm7
                    
                    if (temp0_50 == 0)
                        zmm10 = zx.o(0)
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        zmm3 = var_308
                        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0)) & not.o(zmm2)
                        
                        if ((temp0_1211 & 1) != 0)
                            zmm2.d = zmm1[0]
                            var_598 = zmm2
                    else
                        if ((temp0_50 & 1) != 0)
                            zmm3.d = zx.d(*zmm0.q)
                            zmm10 = zx.o(0)
                            
                            if ((temp0_50 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                        else
                            zmm3 = var_308
                            zmm10 = zx.o(0)
                            
                            if ((temp0_50 & 2) != 0)
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                        
                        if ((temp0_50 & 4) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*var_458_1.q), zmm3, 0x30), 0x84)
                            
                            if ((temp0_50 & 8) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, 
                                    _mm_shuffle_ps(
                                        zx.o(*__pshufd_xmmdq_memdq_immb(var_458_1, 0x4e).q), zmm3, 
                                        0x20), 
                                    0x24)
                        else if ((temp0_50 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*__pshufd_xmmdq_memdq_immb(var_458_1, 0x4e).q), 
                                    zmm3, 0x20), 
                                0x24)
                        
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        zmm2 = _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                            __andps_xmmxud_memxud(zmm3, data_143442cd0), data_143442b40))
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm10) & not.o(zmm2)
                        
                        if ((temp0_1211 & 1) != 0)
                            zmm2.d = zmm1[0]
                            var_598 = zmm2
                    
                    var_308 = zmm3
                    
                    if ((temp0_1211 & 2) != 0)
                        var_598 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, var_598, 1), var_598, 0xe2)
                        
                        if ((temp0_1211 & 4) != 0)
                            goto label_140243b9c
                        
                        goto label_140243a3e
                    
                    if ((temp0_1211 & 4) == 0)
                    label_140243a3e:
                        
                        if ((temp0_1211 & 8) != 0)
                            var_598 =
                                _mm_shuffle_ps(var_598, _mm_shuffle_ps(zmm1, var_598, 0x23), 0x24)
                    else
                    label_140243b9c:
                        var_598 = _mm_shuffle_ps(var_598, _mm_shuffle_ps(zmm1, var_598, 0x32), 0x84)
                        
                        if ((temp0_1211 & 8) != 0)
                            var_598 =
                                _mm_shuffle_ps(var_598, _mm_shuffle_ps(zmm1, var_598, 0x23), 0x24)
                
                zmm0 = (var_558_2 ^ arg7) & var_518_3
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
                        char temp80_1 = temp0_74 & 1
                        
                        if (temp80_1 == 0)
                            arg7 = var_548_1
                            
                            if (temp80_1 != 0)
                            label_140243bbc:
                                zmm1 = var_578
                                zmm1[0] = 0
                                var_578 = zmm1
                                
                                if (temp80_1 != 0)
                                    goto label_140243ad6
                                
                                goto label_140243bd3
                        else
                            zmm1 = var_5a8
                            zmm1[0] = zx.o(0).d
                            var_5a8 = zmm1
                            arg7 = var_548_1
                            
                            if (temp80_1 != 0)
                                goto label_140243bbc
                        
                        bool cond:271_1
                        bool cond:272_1
                        bool cond:288_1
                        bool cond:289_1
                        
                        if (temp80_1 != 0)
                        label_140243ad6:
                            zmm1 = var_598
                            zmm1[0] = 0
                            var_598 = zmm1
                            char temp104_1 = temp0_74 & 2
                            cond:271_1 = temp104_1 == 0
                            cond:272_1 = temp104_1 != 0
                            cond:288_1 = temp104_1 == 0
                            cond:289_1 = temp104_1 != 0
                            
                            if (temp104_1 != 0)
                                goto label_140243bdf
                            
                            goto label_140243af0
                        
                    label_140243bd3:
                        char temp103_1 = temp0_74 & 2
                        cond:271_1 = temp103_1 == 0
                        cond:272_1 = temp103_1 != 0
                        cond:288_1 = temp103_1 == 0
                        cond:289_1 = temp103_1 != 0
                        
                        if (temp103_1 == 0)
                        label_140243af0:
                            
                            if (not(cond:271_1))
                            label_140243af9:
                                zmm2 = var_578
                                var_578 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm2, 0), zmm2, 0xe2)
                                
                                if (cond:289_1)
                                    goto label_140243c0d
                                
                                goto label_140243b11
                        else
                        label_140243bdf:
                            zmm2 = var_5a8
                            var_5a8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm2, 0), zmm2, 0xe2)
                            
                            if (cond:272_1)
                                goto label_140243af9
                        
                        bool cond:318_1
                        bool cond:319_1
                        bool cond:333_1
                        bool cond:334_1
                        
                        if (not(cond:288_1))
                        label_140243c0d:
                            var_598 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), var_598, 0), var_598, 0xe2)
                            char temp123_1 = temp0_74 & 4
                            cond:318_1 = temp123_1 == 0
                            cond:319_1 = temp123_1 != 0
                            cond:333_1 = temp123_1 == 0
                            cond:334_1 = temp123_1 != 0
                            
                            if (temp123_1 != 0)
                                goto label_140243b1d
                            
                            goto label_140243c1b
                        
                    label_140243b11:
                        char temp122_1 = temp0_74 & 4
                        cond:318_1 = temp122_1 == 0
                        cond:319_1 = temp122_1 != 0
                        cond:333_1 = temp122_1 == 0
                        cond:334_1 = temp122_1 != 0
                        
                        if (temp122_1 == 0)
                        label_140243c1b:
                            
                            if (not(cond:318_1))
                            label_140243c24:
                                zmm2 = var_578
                                var_578 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x30), 0x84)
                                
                                if (cond:334_1)
                                    goto label_140243b4b
                                
                                goto label_140243c3c
                        else
                        label_140243b1d:
                            zmm2 = var_5a8
                            var_5a8 =
                                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x30), 0x84)
                            
                            if (cond:319_1)
                                goto label_140243c24
                        
                        bool cond:351_1
                        bool cond:362_1
                        bool cond:363_1
                        bool cond:352_1
                        
                        if (cond:333_1)
                        label_140243c3c:
                            char temp132_1 = temp0_74 & 8
                            cond:351_1 = temp132_1 == 0
                            cond:352_1 = temp132_1 != 0
                            cond:362_1 = temp132_1 == 0
                            cond:363_1 = temp132_1 == 0
                            
                            if (temp132_1 != 0)
                            label_140243c48:
                                zmm2 = var_5a8
                                var_5a8 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                                
                                if (cond:352_1)
                                    goto label_140243b62
                                
                                goto label_140243c60
                        else
                        label_140243b4b:
                            var_598 = _mm_shuffle_ps(var_598, 
                                _mm_shuffle_ps(zx.o(0), var_598, 0x30), 0x84)
                            char temp133_1 = temp0_74 & 8
                            cond:351_1 = temp133_1 == 0
                            cond:352_1 = temp133_1 != 0
                            cond:362_1 = temp133_1 == 0
                            cond:363_1 = temp133_1 == 0
                            
                            if (temp133_1 != 0)
                                goto label_140243c48
                        
                        if (cond:351_1)
                        label_140243c60:
                            zmm7 = arg5
                            
                            if (not(cond:362_1))
                                var_598 = _mm_shuffle_ps(var_598, 
                                    _mm_shuffle_ps(zx.o(0), var_598, 0x20), 0x24)
                        else
                        label_140243b62:
                            zmm2 = var_578
                            var_578 =
                                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                            zmm7 = arg5
                            
                            if (not(cond:363_1))
                                var_598 = _mm_shuffle_ps(var_598, 
                                    _mm_shuffle_ps(zx.o(0), var_598, 0x20), 0x24)
                    
                    char temp0_96 = _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm3), 0x1f))
                    
                    if (temp0_96 != 0)
                        char temp94_1 = temp0_96 & 1
                        
                        if (temp94_1 != 0)
                            zmm0.d = 0
                            var_5a8 = zmm0
                            
                            if (temp94_1 != 0)
                                goto label_140243d8c
                        else if (temp94_1 != 0)
                        label_140243d8c:
                            zmm0.d = 0
                            var_578 = zmm0
                            
                            if (temp94_1 != 0)
                                goto label_140243cdd
                            
                            goto label_140243d9b
                        
                        bool cond:286_1
                        bool cond:287_1
                        bool cond:304_1
                        bool cond:305_1
                        
                        if (temp94_1 != 0)
                        label_140243cdd:
                            zmm0.d = 0
                            var_598 = zmm0
                            char temp113_1 = temp0_96 & 2
                            cond:286_1 = temp113_1 == 0
                            cond:287_1 = temp113_1 != 0
                            cond:304_1 = temp113_1 == 0
                            cond:305_1 = temp113_1 != 0
                            
                            if (temp113_1 != 0)
                                goto label_140243da7
                            
                            goto label_140243cef
                        
                    label_140243d9b:
                        char temp112_1 = temp0_96 & 2
                        cond:286_1 = temp112_1 == 0
                        cond:287_1 = temp112_1 != 0
                        cond:304_1 = temp112_1 == 0
                        cond:305_1 = temp112_1 != 0
                        
                        if (temp112_1 == 0)
                        label_140243cef:
                            
                            if (not(cond:286_1))
                            label_140243cf8:
                                zmm1 = var_578
                                var_578 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm1, 0), zmm1, 0xe2)
                                
                                if (cond:305_1)
                                    goto label_140243dc8
                                
                                goto label_140243d10
                        else
                        label_140243da7:
                            zmm1 = var_5a8
                            var_5a8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm1, 0), zmm1, 0xe2)
                            
                            if (cond:287_1)
                                goto label_140243cf8
                        
                        bool cond:331_1
                        bool cond:332_1
                        bool cond:343_1
                        bool cond:344_1
                        
                        if (not(cond:304_1))
                        label_140243dc8:
                            zmm1 = var_598
                            var_598 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm1, 0), zmm1, 0xe2)
                            char temp129_1 = temp0_96 & 4
                            cond:331_1 = temp129_1 == 0
                            cond:332_1 = temp129_1 != 0
                            cond:343_1 = temp129_1 == 0
                            cond:344_1 = temp129_1 != 0
                            
                            if (temp129_1 != 0)
                                goto label_140243d1c
                            
                            goto label_140243de3
                        
                    label_140243d10:
                        char temp128_1 = temp0_96 & 4
                        cond:331_1 = temp128_1 == 0
                        cond:332_1 = temp128_1 != 0
                        cond:343_1 = temp128_1 == 0
                        cond:344_1 = temp128_1 != 0
                        
                        if (temp128_1 == 0)
                        label_140243de3:
                            
                            if (not(cond:331_1))
                            label_140243dec:
                                zmm1 = var_578
                                var_578 =
                                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(0), zmm1, 0x30), 0x84)
                                
                                if (cond:344_1)
                                    goto label_140243d3d
                                
                                goto label_140243e04
                        else
                        label_140243d1c:
                            zmm1 = var_5a8
                            var_5a8 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(0), zmm1, 0x30), 0x84)
                            
                            if (cond:332_1)
                                goto label_140243dec
                        
                        bool cond:360_1
                        bool cond:361_1
                        bool cond:366_1
                        bool cond:367_1
                        
                        if (not(cond:343_1))
                        label_140243d3d:
                            zmm1 = var_598
                            var_598 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(0), zmm1, 0x30), 0x84)
                            char temp137_1 = temp0_96 & 8
                            cond:360_1 = temp137_1 == 0
                            cond:361_1 = temp137_1 != 0
                            cond:366_1 = temp137_1 == 0
                            cond:367_1 = temp137_1 == 0
                            
                            if (temp137_1 != 0)
                                goto label_140243e10
                            
                            goto label_140243d58
                        
                    label_140243e04:
                        char temp136_1 = temp0_96 & 8
                        cond:360_1 = temp136_1 == 0
                        cond:361_1 = temp136_1 != 0
                        cond:366_1 = temp136_1 == 0
                        cond:367_1 = temp136_1 == 0
                        
                        if (temp136_1 != 0)
                        label_140243e10:
                            zmm1 = var_5a8
                            var_5a8 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(0), zmm1, 0x20), 0x24)
                            
                            if (cond:361_1)
                                goto label_140243d61
                            
                            goto label_140243e28
                        
                    label_140243d58:
                        
                        if (cond:360_1)
                        label_140243e28:
                            
                            if (not(cond:366_1))
                                zmm1 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(0), zmm1, 0x20), 0x24)
                        else
                        label_140243d61:
                            zmm1 = var_578
                            var_578 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(0), zmm1, 0x20), 0x24)
                            
                            if (not(cond:367_1))
                                zmm1 = var_598
                                var_598 =
                                    _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(0), zmm1, 0x20), 0x24)
                
                zmm0 = var_468_1
                float temp0_1236[0x4] = _mm_sub_ps(var_5a8, zmm14)
                zmm3 = _mm_sub_ps(var_578, arg8)
                float temp0_1238[0x4] = _mm_mul_ps(temp0_1236, zmm0)
                zmm1 = zmm14
                char temp79_1 = temp0_890 & 1
                
                if (temp79_1 != 0)
                    zmm1 = zmm14
                    zmm1[0] = zmm1[0] + temp0_1238[0]
                
                float temp0_1239[0x4] = _mm_sub_ps(var_598, zmm11)
                zmm3 = _mm_mul_ps(zmm3, zmm0)
                zmm2 = arg8
                
                if (temp79_1 != 0)
                    zmm2.d = arg8.d f+ zmm3.d
                    zmm4 = _mm_mul_ps(temp0_1239, zmm0)
                    zmm0 = zmm11
                    
                    if (temp79_1 != 0)
                        goto label_140248ea1
                    
                    goto label_140248c68
                
                zmm4 = _mm_mul_ps(temp0_1239, zmm0)
                zmm0 = zmm11
                bool cond:269_1
                bool cond:270_1
                bool cond:284_1
                bool cond:285_1
                
                if (temp79_1 != 0)
                label_140248ea1:
                    zmm0.d = zmm11.d f+ zmm4[0]
                    zmm14 = _mm_add_ps(zmm14, temp0_1238)
                    char temp102_1 = temp0_890 & 2
                    cond:269_1 = temp102_1 == 0
                    cond:270_1 = temp102_1 != 0
                    cond:284_1 = temp102_1 == 0
                    cond:285_1 = temp102_1 != 0
                    
                    if (temp102_1 != 0)
                        goto label_140248c81
                    
                    goto label_140248eb2
                
            label_140248c68:
                zmm14 = _mm_add_ps(zmm14, temp0_1238)
                char temp101_1 = temp0_890 & 2
                cond:269_1 = temp101_1 == 0
                cond:270_1 = temp101_1 != 0
                cond:284_1 = temp101_1 == 0
                cond:285_1 = temp101_1 != 0
                
                if (temp101_1 != 0)
                label_140248c81:
                    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm1, 1), zmm1, 0xe2)
                    arg5 = zmm7
                    arg8 = _mm_add_ps(arg8, zmm3)
                    
                    if (cond:270_1)
                        goto label_140248ecc
                    
                    goto label_140248c92
                
            label_140248eb2:
                arg5 = zmm7
                arg8 = _mm_add_ps(arg8, zmm3)
                
                if (not(cond:269_1))
                label_140248ecc:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm2, 1), zmm2, 0xe2)
                    zmm11 = _mm_add_ps(zmm11, zmm4)
                    
                    if (cond:285_1)
                        goto label_140248ca8
                    
                    goto label_140248ed9
                
            label_140248c92:
                zmm11 = _mm_add_ps(zmm11, zmm4)
                bool cond:316_1
                bool cond:317_1
                bool cond:329_1
                bool cond:330_1
                
                if (not(cond:284_1))
                label_140248ca8:
                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm0, 1), zmm0, 0xe2)
                    char temp121_1 = temp0_890 & 4
                    cond:316_1 = temp121_1 == 0
                    cond:317_1 = temp121_1 != 0
                    cond:329_1 = temp121_1 == 0
                    cond:330_1 = temp121_1 != 0
                    
                    if (temp121_1 != 0)
                        goto label_140248eea
                    
                    goto label_140248cb4
                
            label_140248ed9:
                char temp120_1 = temp0_890 & 4
                cond:316_1 = temp120_1 == 0
                cond:317_1 = temp120_1 != 0
                cond:329_1 = temp120_1 == 0
                cond:330_1 = temp120_1 != 0
                
                if (temp120_1 == 0)
                label_140248cb4:
                    
                    if (not(cond:316_1))
                    label_140248cc2:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg8, zmm2, 0x32), 0x84)
                        
                        if (cond:330_1)
                            goto label_140248f02
                        
                        goto label_140248ccc
                else
                label_140248eea:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm14, zmm1, 0x32), 0x84)
                    
                    if (cond:317_1)
                        goto label_140248cc2
                
                bool cond:349_1
                bool cond:350_1
                bool cond:358_1
                bool cond:359_1
                
                if (not(cond:329_1))
                label_140248f02:
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x32), 0x84)
                    char temp131_1 = temp0_890 & 8
                    cond:349_1 = temp131_1 == 0
                    cond:350_1 = temp131_1 != 0
                    cond:358_1 = temp131_1 == 0
                    cond:359_1 = temp131_1 != 0
                    
                    if (temp131_1 != 0)
                        goto label_140248cdf
                    
                    goto label_140248f0f
                
            label_140248ccc:
                char temp130_1 = temp0_890 & 8
                cond:349_1 = temp130_1 == 0
                cond:350_1 = temp130_1 != 0
                cond:358_1 = temp130_1 == 0
                cond:359_1 = temp130_1 != 0
                
                if (temp130_1 != 0)
                label_140248cdf:
                    zmm14 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm14, zmm1, 0x23), 0x24)
                    
                    if (cond:350_1)
                        goto label_140248f23
                    
                    goto label_140248ce9
                
            label_140248f0f:
                zmm14 = zmm1
                
                if (cond:349_1)
                label_140248ce9:
                    arg8 = zmm2
                    
                    if (not(cond:358_1))
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x23), 0x24)
                else
                label_140248f23:
                    arg8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg8, zmm2, 0x23), 0x24)
                    
                    if (cond:359_1)
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm11, zmm0, 0x23), 0x24)
                
                zmm11 = zmm0
        
        uint32_t temp0_1255 = _mm_movemask_ps(zmm15 ^ arg6)
        var_548 = arg7
        
        if (temp0_1255 == 0)
            var_5b8 = zmm11
            var_568 = zmm14
            arg7 = arg5
        else
            char rcx_33 = temp0_1255.b
            char temp1_1 = rcx_33 & 1
            
            if (temp1_1 != 0)
                zmm14[0] = 0
                
                if (temp1_1 != 0)
                    goto label_140248dd9
            else if (temp1_1 != 0)
            label_140248dd9:
                arg8[0] = 0
                
                if (temp1_1 != 0)
                    goto label_140248d37
                
                goto label_140248de4
            
            bool cond:21_1
            bool cond:22_1
            bool cond:28_1
            bool cond:29_1
            
            if (temp1_1 != 0)
            label_140248d37:
                zmm11[0] = 0
                char temp7_1 = rcx_33 & 2
                cond:21_1 = temp7_1 == 0
                cond:22_1 = temp7_1 != 0
                cond:28_1 = temp7_1 == 0
                cond:29_1 = temp7_1 != 0
                
                if (temp7_1 != 0)
                    goto label_140248dfa
                
                goto label_140248d45
            
        label_140248de4:
            char temp6_1 = rcx_33 & 2
            cond:21_1 = temp6_1 == 0
            cond:22_1 = temp6_1 != 0
            cond:28_1 = temp6_1 == 0
            cond:29_1 = temp6_1 != 0
            
            if (temp6_1 == 0)
            label_140248d45:
                
                if (not(cond:21_1))
                label_140248d58:
                    arg8 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg8, 0), arg8, 0xe2)
                    
                    if (cond:29_1)
                        goto label_140248e17
                    
                    goto label_140248d62
            else
            label_140248dfa:
                zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm14, 0), zmm14, 0xe2)
                
                if (cond:22_1)
                    goto label_140248d58
            
            bool cond:39_1
            bool cond:40_1
            bool cond:51_1
            bool cond:52_1
            
            if (not(cond:28_1))
            label_140248e17:
                zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm11, 0), zmm11, 0xe2)
                char temp13_1 = rcx_33 & 4
                cond:39_1 = temp13_1 == 0
                cond:40_1 = temp13_1 != 0
                cond:51_1 = temp13_1 == 0
                cond:52_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                    goto label_140248d73
                
                goto label_140248e24
            
        label_140248d62:
            char temp12_1 = rcx_33 & 4
            cond:39_1 = temp12_1 == 0
            cond:40_1 = temp12_1 != 0
            cond:51_1 = temp12_1 == 0
            cond:52_1 = temp12_1 != 0
            
            if (temp12_1 == 0)
            label_140248e24:
                
                if (not(cond:39_1))
                label_140248e32:
                    arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(0), arg8, 0x30), 0x84)
                    
                    if (cond:52_1)
                        goto label_140248d8c
                    
                    goto label_140248e3d
            else
            label_140248d73:
                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x30), 0x84)
                
                if (cond:40_1)
                    goto label_140248e32
            
            bool cond:65_1
            bool cond:84_1
            bool cond:85_1
            bool cond:66_1
            
            if (cond:51_1)
            label_140248e3d:
                char temp24_1 = rcx_33 & 8
                cond:65_1 = temp24_1 == 0
                cond:66_1 = temp24_1 != 0
                cond:84_1 = temp24_1 == 0
                cond:85_1 = temp24_1 != 0
                
                if (temp24_1 != 0)
                label_140248e4e:
                    zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zx.o(0), zmm14, 0x20), 0x24)
                    
                    if (cond:66_1)
                        goto label_140248da8
                    
                    goto label_140248e59
            else
            label_140248d8c:
                zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zx.o(0), zmm11, 0x30), 0x84)
                char temp25_1 = rcx_33 & 8
                cond:65_1 = temp25_1 == 0
                cond:66_1 = temp25_1 != 0
                cond:84_1 = temp25_1 == 0
                cond:85_1 = temp25_1 != 0
                
                if (temp25_1 != 0)
                    goto label_140248e4e
            
            if (cond:65_1)
            label_140248e59:
                var_568 = zmm14
                
                if (cond:84_1)
                    var_5b8 = zmm11
                    arg7 = arg5
                else
                    arg7 = arg5
                    var_5b8 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zx.o(0), zmm11, 0x20), 0x24)
            else
            label_140248da8:
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
        int64_t rax_267 = sx.q(arg6[0])
        zmm4 = _mm_shuffle_epi32(arg5, 0x4e)
        int64_t rax_269 = rax_267 * 0x30
        *(arg1 + rax_269 + 0x10) = zmm7[0]
        *(arg1 + rax_269 + 0x14) = arg8[0]
        *(arg1 + rax_269 + 0x18) = zmm4[0]
        *(arg1 + rax_269 + 0x1c) = 0
        int64_t rax_271 = sx.q(_mm_shuffle_epi32(arg6, 0x4e)[0])
        float temp0_1293[0x4] = _mm_shuffle_ps(arg8, zmm3, 0xd5)
        zmm3 = _mm_shuffle_epi32(zmm2, 0x4e)
        int64_t rax_273 = rax_271 * 0x30
        *(arg1 + rax_273 + 0x10) = zmm2.d
        *(arg1 + rax_273 + 0x14) = temp0_1293[0]
        *(arg1 + rax_273 + 0x18) = zmm3.d
        *(arg1 + rax_273 + 0x1c) = 0
        zmm3 = var_398_1
        zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
        float temp0_1296[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
        int64_t rax_277 = sx.q(zmm3.d) * 0x30
        *(arg1 + rax_277 + 0x10) = zmm0.d
        *(arg1 + rax_277 + 0x14) = temp0_1296[0]
        *(arg1 + rax_277 + 0x18) = zmm2.d
        *(arg1 + rax_277 + 0x1c) = 0
        *(arg1 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d) * 0x30 + 0x10) = var_f8_1
        r15 = zx.q(r15.d + 4)
        arg6 = _mm_cmpeq_epi32(arg6, arg6)
    while (r15.d s< i_5)
    
    result = zx.q(arg12)
    
    if (r15.d s< result.d)
        goto label_1402490bd
return result
