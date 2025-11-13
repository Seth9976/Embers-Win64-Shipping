// 函数: sub_1402373a0
// 地址: 0x1402373a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm15[0x4]
int32_t var_58[0x4] = zmm15
uint32_t zmm14[0x4]
uint32_t var_68[0x4] = zmm14
uint32_t zmm13[0x4]
uint32_t var_78[0x4] = zmm13
int32_t zmm12[0x4]
int32_t var_88[0x4] = zmm12
uint128_t zmm11
uint128_t var_98 = zmm11
int32_t var_a8[0x4] = arg6
uint128_t var_b8 = arg5
uint128_t zmm8
uint128_t var_c8 = zmm8
int32_t zmm7[0x4]
int32_t var_d8[0x4] = zmm7
uint128_t zmm6
uint128_t var_e8 = zmm6
uint128_t zmm2 = arg8
int32_t i_5 = ((arg10 s>> 0x1f u>> 0x1e) + arg10) & 0xfffffffc
uint64_t i_4
uint64_t r12
uint128_t zmm0
uint128_t zmm1
uint32_t zmm3[0x4]
int32_t zmm4[0x4]
float zmm5[0x4]

if (i_5 s<= 0)
    r12 = 0
    i_4 = zx.q(arg10)
    
    if (0 s< i_4.d)
    label_14023d608:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r12.d), 0), data_142e11d00)
        zmm13 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i_4.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm13
        int64_t rbp_65 = sx.q(zmm0.d)
        int64_t rbx_41 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        int64_t rdi_6 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        int64_t rax_192 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm3 = zx.o(*(arg2 + rax_192))
        zmm12 = zx.o(*(arg2 + rdi_6))
        arg5 = zx.o(*(arg2 + rbp_65))
        int32_t var_3a8_1[0x4] = *(arg2 + rbx_41)
        zmm4 = data_142fc95e0
        zmm0 = zmm13 & zmm4
        uint64_t rax_193 = zx.q(zmm0.d)
        uint64_t rdx = zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        uint64_t rdi_7 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + arg2 + rax_192))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(rdi_7 + arg2 + rdi_6)), zmm0.q)
        zmm0 = _mm_slli_epi32(
            _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(rax_193 + arg2 + rbp_65)), zx.q(*(rdx + arg2 + rbx_41))), 
                zmm1.q), 
            3) | zmm4
        zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
        zmm11 = zx.o(0)
        zmm1 = _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1).q)
        zmm0 = _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0).q)
        zmm2 = _mm_shuffle_epi32(zmm13, 0x50) & zmm0
        zmm0 = _mm_shuffle_epi32(zmm13, 0xfa) & zmm1
        int64_t rcx_38 = _mm_shuffle_epi32(zmm2, 0x4e).q
        int64_t rbp_66 = _mm_shuffle_epi32(zmm0, 0x4e).q
        int32_t temp0_1435[0x4] = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + zmm2.q)), zx.q(*(arg3 + rcx_38))), 
            _mm_unpacklo_epi32(zx.o(*(arg3 + zmm0.q)), zx.q(*(arg3 + rbp_66))).q)
        zmm2 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(zmm2, zmm2), temp0_1435)
        zmm1 = zmm2 & not.o(zmm13)
        char temp0_1438 = _mm_movemask_ps(zmm1)
        uint128_t var_638
        float var_628[0x4]
        int32_t var_618[0x4]
        uint128_t var_608
        
        if (temp0_1438 != 0)
            int32_t var_438_2[0x4] = zmm12
            uint128_t var_2b8_2 = zmm2
            uint32_t var_2a8_2[0x4] = zmm3
            zmm8 = _mm_cmpgt_epi32(zx.o(0), temp0_1435)
            zmm7 = _mm_shuffle_epi32(temp0_1435, 0x4e)
            int32_t temp0_1441[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm7)
            zmm3 = _mm_add_epi64(4, zx.o(arg4))
            zmm0 = temp0_1435 & zmm1
            int64_t rax_196 = sx.q(zmm0.d)
            int64_t rdx_3 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            int64_t rbp_68 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            zmm0 = zx.o(*(arg4 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)))
            int32_t temp0_1446[0x4] = _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_68)), zmm0.q)
            uint128_t var_5b8_1 = zmm1
            zmm6 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_196)), zx.q(*(arg4 + rdx_3))), temp0_1446[0].q)
            zmm12 = var_5b8_1 & zmm6
            zmm1 = _mm_srli_epi32(zmm6, 0x18) & var_5b8_1
            zmm6 = _mm_srli_epi32(zmm6, 0x1c) & var_5b8_1
            zmm0 = _mm_slli_epi32(zmm6, 2) & var_5b8_1
            uint64_t rax_197 = zx.q(zmm0.d)
            uint64_t rbp_69 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            uint64_t rbx_45 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + &data_143442cf0))
            zmm5 = _mm_unpacklo_epi32(zx.o(*(rbx_45 + &data_143442cf0)), zmm0.q)
            int32_t temp0_1457[0x4] = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(rax_197 + &data_143442cf0)), 
                    zx.q(*(rbp_69 + &data_143442cf0))), 
                zmm5[0].q)
            uint128_t var_598_3 = zmm1
            zmm5 = (_mm_slli_epi32(zmm6, 3) | (data_143442c00 & zmm1)) & var_5b8_1
            uint32_t rax_199 = zx.d(*(zx.q(zmm5[0]) + &data_143442d10))
            uint64_t rbp_70 = zx.q(_mm_shuffle_epi32(zmm5, 0xe5).d)
            uint32_t rbx_47 = zx.d(*(zx.q(_mm_shuffle_epi32(zmm5, 0x4e).d) + &data_143442d10))
            uint32_t rdi_12 =
                zx.d(*(zx.q(_mm_shuffle_epi32(zmm5, 0xe7).d) + &data_143442d10)) << 8 | rbx_47
            zmm14 = _mm_unpacklo_epi16(
                _mm_unpacklo_epi8(
                    _mm_insert_epi16(zx.o(zx.d(*(rbp_70 + &data_143442d10)) << 8) | zx.o(rax_199), 
                        rdi_12, 1), 
                    zmm11.q), 
                zmm11.q)
            uint128_t var_478_2 = zmm6
            zmm2 = _mm_cmpeq_epi32(data_142fc95c0, zmm6)
            zmm6 = var_5b8_1
            zmm5 = _mm_srai_epi32(_mm_slli_epi32(zmm2 & not.o(zmm6), 0x1f), 0x1f)
            zmm0 = zx.o(0)
            
            if (_mm_movemask_ps(zmm5) != 0)
                zmm0 = zmm5 & zmm14
            
            zmm15 = _mm_unpacklo_epi32(temp0_1435, zmm8.q)
            zmm7 = _mm_unpacklo_epi32(zmm7, temp0_1441[0].q)
            uint32_t temp0_1471[0x4] = _mm_shuffle_epi32(zmm3, 0x44)
            zmm12 &= data_143442be0
            zmm4 = temp0_1457 & zmm6
            zmm1 = data_142fc95e0 & zmm6
            zmm8 = _mm_srai_epi32(_mm_slli_epi32(zmm6 & zmm2, 0x1f), 0x1f)
            char temp0_1474 = _mm_movemask_ps(zmm8)
            uint128_t var_5a8_5 = zmm2
            
            if (temp0_1474 == 0)
                zmm14 = zx.o(0)
            else
                zmm14 &= zmm8
                zmm0 = _mm_srli_epi32(zmm8, 0x1f) | (zmm8 & not.o(zmm0))
            
            zmm14 = _mm_madd_epi16(zmm14, zmm1)
            int32_t var_4a8_2[0x4] = zmm7
            uint128_t var_458_2 = _mm_add_epi64(temp0_1471, zmm7)
            uint32_t var_648_3[0x4] = _mm_add_epi64(temp0_1471, zmm15)
            uint128_t var_598_4 = __andps_xmmxud_memxud(var_598_3, data_143442bf0)
            zmm1 = _mm_shuffle_epi32(zmm0, 0xf5)
            uint128_t var_578_3 = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm1), 0xe8).q) & zmm6
            zmm14 &= zmm6
            zmm2 = __pcmpgtd_xmmdq_memdq(zmm12, data_142d3f5b0) & zmm6
            arg6 = zx.o(0)
            uint128_t var_498_1 = zx.o(0)
            int32_t var_558_6[0x4] = zmm15
            uint32_t var_488_3[0x4] = zmm13
            uint128_t var_348_1 = zmm8
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) != 0)
                uint32_t var_4b8_2[0x4] = zmm14
                zmm11 = zx.o(0)
                zmm14 = _mm_cmpeq_epi32(data_142fc95f0 & var_598_4, zmm11)
                zmm3 = _mm_srai_epi32(_mm_slli_epi32(zmm14 & zmm2, 0x1f), 0x1f)
                arg6 = zx.o(0)
                var_498_1 = zx.o(0)
                zmm1 = arg8
                
                if (_mm_movemask_ps(zmm3) != 0)
                    int32_t var_498_2[0x4] = zx.o(0)
                    
                    if (0f f>= zmm1.d)
                        zmm11 = zx.o(0)
                        arg6 = zx.o(0)
                    else
                        zmm0 = _mm_add_epi32(_mm_cmpeq_epi32(zx.o(0), zx.o(0)), zmm12)
                        
                        if (zmm1.d f>= 1f)
                            zmm0 &= zmm3
                            zmm11 = zmm0
                            arg6 = zmm0
                        else
                            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
                            zmm4 = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), zmm1)
                            zmm1 = data_142d3f780
                            float temp0_1500[0x4] = __addps_xmmps_memps(
                                _mm_and_ps(data_142d3f770, zmm4), data_142d3f740)
                            zmm1 = _mm_and_ps(zmm1, zmm4)
                            zmm5 = __addps_xmmps_memps(temp0_1500, data_1434427a0) ^ zmm1
                            var_498_2 = zx.o(0)
                            zmm1 = _mm_add_ps(
                                __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm4, zmm5, 1), data_142d3f7e0), 
                                zmm5)
                            zmm5 = _mm_cvttps_epi32(zmm1)
                            zmm11 = _mm_cmpgt_epi32(zmm5, zmm0)
                            zmm11 = ((zmm11 & not.o(zmm5)) | (zmm0 & zmm11)) & zmm3
                            
                            if (arg9 != 1)
                                var_498_2 = _mm_sub_ps(zmm4, zmm1)
                            
                            int32_t temp0_1510[0x4] =
                                _mm_sub_epi32(zmm11, _mm_cmpeq_epi32(zmm1, zmm1))
                            int32_t temp0_1511[0x4] = _mm_cmpgt_epi32(zmm0, temp0_1510)
                            arg6 = ((temp0_1511 & not.o(zmm0)) | (temp0_1510 & temp0_1511)) & zmm3
                            zmm1 = arg8
                            zmm6 = var_5b8_1
                    
                    var_498_1 = var_498_2 & zmm3
                
                zmm14 = _mm_srai_epi32(_mm_slli_epi32(zmm14 & not.o(zmm2), 0x1f), 0x1f)
                
                if (_mm_movemask_ps(zmm14) != 0)
                    zmm2 = zmm1
                    zmm1 = _mm_cmpgt_epi32(data_143442ce0, data_142d3f780 ^ zmm12)
                    int32_t rax_204
                    rax_204.b = 0f f>= zmm2.d
                    zmm3 = _mm_shuffle_epi32(zx.o(neg.d(rax_204)), 0) | zmm1
                    zmm0 = zmm3 & zmm14
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm1 = zmm0 & not.o(zmm11)
                        zmm0 &= not.o(arg6)
                        zmm11 = zmm1
                        arg6 = zmm0
                    
                    zmm5 = arg8
                    zmm2 = zx.o(0)
                    zmm8 = zmm3 & not.o(zmm14)
                    uint32_t temp0_1518 = _mm_movemask_ps(zmm8)
                    
                    if (temp0_1518 != 0)
                        int32_t temp0_1520[0x4] = _mm_add_epi32(zmm12, _mm_cmpeq_epi32(zmm0, zmm0))
                        
                        if (zmm5[0] >= 1f)
                            zmm4 = temp0_1520 & zmm8
                            zmm11 = (zmm8 & not.o(zmm11)) | zmm4
                            arg6 = (zmm8 & not.o(arg6)) | zmm4
                        else
                            uint32_t var_418_1[0x4] = zmm3
                            zmm0 = _mm_shuffle_epi32(zmm12, 0xf5)
                            zmm7 = zmm5
                            zmm3 = var_578_3
                            zmm1 = _mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm0)
                            zmm0 = _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm12), 0xe8), 
                                _mm_shuffle_epi32(zmm1, 0xe8).q)
                            zmm1 = var_4b8_2
                            float temp0_1528[0x4] = _mm_unpacklo_ps(zmm1, 0)
                            zmm6 = _mm_unpackhi_ps(zmm1, zx.o(0))
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            zmm6 = __paddq_xmmdq_memdq(zmm6, var_458_2)
                            zmm5 = __paddq_xmmdq_memdq(temp0_1528, var_648_3)
                            zmm13 = data_143442a20
                            zmm1 = _mm_unpacklo_epi32(zmm1, zmm3[0].q)
                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                            zmm6 = _mm_add_epi64(_mm_add_epi64(zmm6, zmm13), zmm1)
                            zmm5 = _mm_add_epi64(_mm_add_epi64(zmm5, zmm13), zmm0)
                            zmm0 = data_143442c10
                            zmm5 &= zmm0
                            zmm6 &= zmm0
                            zmm0 = _mm_shuffle_ps(zmm7, zmm7, 0)
                            zmm2.d = float.s(arg7 - 1)
                            zmm1 = _mm_mul_ps(_mm_cvtepi32_ps(temp0_1520), zmm0)
                            zmm2.d = zmm2.d f* zmm7[0]
                            uint128_t var_388_2 = zmm2
                            int32_t rcx_40 = int.d(zmm2.d)
                            int32_t rbx_48 = 0
                            
                            if (rcx_40 s>= 0)
                                rbx_48 = rcx_40
                            
                            if (rbx_48 s> arg7 - 2)
                                rbx_48 = arg7 - 2
                            
                            zmm0 = _mm_cvttps_epi32(zmm1)
                            zmm2 = zx.o(0)
                            zmm1 = _mm_cmpgt_epi32(zmm0, zmm2) & zmm0
                            zmm13 = _mm_cmpgt_epi32(temp0_1520, zmm1)
                            zmm13 = (zmm13 & not.o(temp0_1520)) | (zmm1 & zmm13)
                            uint128_t var_448_2 = zmm6
                            uint128_t var_4c8_3 = zmm11
                            int32_t var_568_3[0x4] = arg6
                            float var_588_2[0x4] = zmm5
                            
                            if (arg7 s< 0x100)
                                zmm0 = _mm_shuffle_epi32(zmm13, 0x4e)
                                uint32_t temp0_1593[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm1 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm13, _mm_cmpgt_epi32(zmm2, zmm13).q), zmm5)
                                char rbp_73 = temp0_1518.b
                                
                                if ((rbp_73 & 1) == 0)
                                    zmm0 = _mm_unpacklo_epi32(zmm0, temp0_1593[0].q)
                                    
                                    if ((rbp_73 & 2) != 0)
                                        goto label_14023e39b
                                    
                                    goto label_14023e0e3
                                
                                zmm5 = zx.o(*zmm1.q)
                                zmm0 = _mm_unpacklo_epi32(zmm0, temp0_1593[0].q)
                                
                                if ((rbp_73 & 2) != 0)
                                label_14023e39b:
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            zmm5, 0), 
                                        zmm5, 0xe2)
                                    zmm5 = zmm1
                                    zmm0 = _mm_add_epi64(zmm0, zmm6)
                                    
                                    if ((rbp_73 & 4) == 0)
                                        goto label_14023e0f1
                                    
                                    goto label_14023e3bc
                                
                            label_14023e0e3:
                                zmm0 = _mm_add_epi64(zmm0, zmm6)
                                
                                if ((rbp_73 & 4) != 0)
                                label_14023e3bc:
                                    zmm1 = _mm_shuffle_ps(zx.o(*zmm0.q), zmm5, 0x30)
                                    zmm5 = _mm_shuffle_ps(zmm5, zmm1, 0x84)
                                    
                                    if ((rbp_73 & 8) != 0)
                                        zmm5 = _mm_shuffle_ps(zmm5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm5, 0x20), 
                                            0x24)
                                else
                                label_14023e0f1:
                                    
                                    if ((rbp_73 & 8) != 0)
                                        zmm5 = _mm_shuffle_ps(zmm5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm5, 0x20), 
                                            0x24)
                                
                                zmm5 = __andps_xmmxud_memxud(zmm5, data_142ed6810)
                                zmm0 = _mm_shuffle_epi32(zx.o(rbx_48), 0)
                                uint128_t var_468_3 = zmm0
                                zmm5 = _mm_cmpgt_epi32(zmm5, zmm0)
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                uint128_t var_3c8_1 = zmm5 ^ zmm0
                                zmm15 = zmm13
                                
                                if (_mm_movemask_ps(zmm5 & not.o(zmm8)) != 0)
                                    arg6 = (zmm5 & not.o(temp0_1520)) | (zmm5 & zmm13)
                                    zmm0 = _mm_sub_epi32(zmm13, zmm1)
                                    zmm1 = _mm_cmpgt_epi32(zmm12, zmm0)
                                    zmm5 &= not.o(zmm1)
                                    zmm7 = zmm8 & zmm5
                                    uint32_t i = _mm_movemask_ps(zmm7)
                                    
                                    if (i == 0)
                                        zmm15 = arg6
                                    else
                                        zmm3 = zmm13
                                        
                                        do
                                            zmm11 = zmm0
                                            zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                            int32_t temp0_1622[0x4] = __paddq_xmmdq_memdq(
                                                _mm_unpacklo_epi32(zmm11, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm11).q), 
                                                var_588_2)
                                            char temp0_1623 = _mm_movemask_ps(zmm7)
                                            
                                            if ((temp0_1623 & 1) == 0)
                                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                                
                                                if ((temp0_1623 & 2) != 0)
                                                    goto label_14023e1e3
                                                
                                                goto label_14023e256
                                            
                                            zmm6.d = zx.d(*temp0_1622[0].q)
                                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                            
                                            if ((temp0_1623 & 2) != 0)
                                            label_14023e1e3:
                                                zmm6 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*
                                                            _mm_shuffle_epi32(temp0_1622, 0x4e).q), 
                                                        zmm6, 0), 
                                                    zmm6, 0xe2)
                                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_448_2)
                                                
                                                if ((temp0_1623 & 4) == 0)
                                                    goto label_14023e264
                                                
                                                goto label_14023e204
                                            
                                        label_14023e256:
                                            zmm0 = __paddq_xmmdq_memdq(zmm0, var_448_2)
                                            
                                            if ((temp0_1623 & 4) != 0)
                                            label_14023e204:
                                                zmm6 = _mm_shuffle_ps(zmm6, 
                                                    _mm_shuffle_ps(zx.o(*zmm0.q), zmm6, 0x30), 0x84)
                                                
                                                if ((temp0_1623 & 8) != 0)
                                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                            zmm6, 0x20), 
                                                        0x24)
                                            else
                                            label_14023e264:
                                                
                                                if ((temp0_1623 & 8) != 0)
                                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                            zmm6, 0x20), 
                                                        0x24)
                                            
                                            zmm0 = __pcmpgtd_xmmdq_memdq(
                                                __andps_xmmxud_memxud(zmm6, data_142ed6810), 
                                                var_468_3) & zmm5
                                            zmm1 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm8) != i)
                                                zmm1 = zmm0 ^ zmm5
                                            
                                            zmm15 = (zmm0 & not.o(arg6)) | (zmm3 & zmm0)
                                            zmm0 = __psubd_xmmdq_memdq(zmm11, data_142d3f800)
                                            zmm5 = _mm_cmpgt_epi32(zmm12, zmm0) & zmm1
                                            zmm7 = zmm5 & zmm8
                                            i = _mm_movemask_ps(zmm7)
                                            zmm3 = zmm11
                                            arg6 = zmm15
                                        while (i != 0)
                                
                                uint32_t temp0_1725 =
                                    _mm_movemask_ps(_mm_andnot_ps(var_3c8_1, zmm8))
                                uint32_t i_1
                                
                                if (temp0_1725 != 0)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ var_3c8_1
                                    zmm15 &= var_3c8_1
                                    zmm11 = _mm_cmpeq_epi32(zmm11, zmm11)
                                    zmm13 = _mm_add_epi32(zmm13, zmm11)
                                    zmm7 = _mm_cmpgt_epi32(zmm13, zx.o(0)) & zmm1
                                    zmm2 = zmm7 & zmm8
                                    i_1 = _mm_movemask_ps(zmm2)
                                
                                if (temp0_1725 == 0 || i_1 == 0)
                                    zmm0 = zmm15
                                else
                                    arg6 = data_142ed6810
                                    zmm3 = var_448_2
                                    
                                    do
                                        zmm0 = _mm_shuffle_epi32(zmm13, 0x4e)
                                        zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                        zmm5 = __paddq_xmmdq_memdq(
                                            _mm_unpacklo_epi32(zmm13, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm13)[0].q), 
                                            var_588_2)
                                        char temp0_1743 = _mm_movemask_ps(zmm2)
                                        
                                        if ((temp0_1743 & 1) == 0)
                                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                            
                                            if ((temp0_1743 & 2) != 0)
                                                goto label_14023e8a7
                                            
                                            goto label_14023e912
                                        
                                        zmm6.d = zx.d(*zmm5[0].q)
                                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                        
                                        if ((temp0_1743 & 2) != 0)
                                        label_14023e8a7:
                                            zmm6 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), zmm6, 
                                                    0), 
                                                zmm6, 0xe2)
                                            zmm0 = _mm_add_epi64(zmm0, zmm3)
                                            
                                            if ((temp0_1743 & 4) == 0)
                                                goto label_14023e91b
                                            
                                            goto label_14023e8c3
                                        
                                    label_14023e912:
                                        zmm0 = _mm_add_epi64(zmm0, zmm3)
                                        
                                        if ((temp0_1743 & 4) != 0)
                                        label_14023e8c3:
                                            zmm6 = _mm_shuffle_ps(zmm6, 
                                                _mm_shuffle_ps(zx.o(*zmm0.q), zmm6, 0x30), 0x84)
                                            
                                            if ((temp0_1743 & 8) != 0)
                                                zmm6 = _mm_shuffle_ps(zmm6, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                        zmm6, 0x20), 
                                                    0x24)
                                        else
                                        label_14023e91b:
                                            
                                            if ((temp0_1743 & 8) != 0)
                                                zmm6 = _mm_shuffle_ps(zmm6, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                        zmm6, 0x20), 
                                                    0x24)
                                        
                                        zmm2 =
                                            __pcmpgtd_xmmdq_memdq(_mm_and_ps(zmm6, arg6), var_468_3)
                                            & not.o(zmm7)
                                        zmm4 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm2 & zmm8) != i_1)
                                            zmm4 = zmm2 ^ zmm7
                                        
                                        zmm0 = (zmm2 & not.o(zmm15)) | (zmm2 & zmm13)
                                        zmm13 = _mm_add_epi32(zmm13, zmm11)
                                        zmm7 = _mm_cmpgt_epi32(zmm13, zx.o(0)) & zmm4
                                        zmm2 = zmm7 & zmm8
                                        i_1 = _mm_movemask_ps(zmm2)
                                        zmm15 = zmm0
                                    while (i_1 != 0)
                                
                                zmm11 = (zmm0 & zmm8) | (zmm8 & not.o(var_4c8_3))
                                zmm0 = _mm_shuffle_epi32(zmm11, 0x4e)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm11)
                                zmm1 = __paddq_xmmdq_memdq(_mm_unpacklo_epi32(zmm11, zmm3[0].q), 
                                    var_588_2)
                                
                                if ((rbp_73 & 1) != 0)
                                    zmm3 = zx.o(*zmm1.q)
                                
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                                zmm13 = var_488_3
                                zmm15 = var_558_6
                                zmm6 = var_5b8_1
                                
                                if ((rbp_73 & 2) == 0)
                                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                    zmm0 = __paddq_xmmdq_memdq(zmm0, var_448_2)
                                    
                                    if ((rbp_73 & 4) != 0)
                                        goto label_140242e6b
                                    
                                    goto label_14023ea58
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_448_2)
                                
                                if ((rbp_73 & 4) == 0)
                                label_14023ea58:
                                    zmm2 ^= zmm8
                                    
                                    if ((rbp_73 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                else
                                label_140242e6b:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*zmm0.q), zmm3, 0x30), 0x84)
                                    zmm2 ^= zmm8
                                    
                                    if ((rbp_73 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                
                                arg6 = (_mm_sub_epi32(zmm11, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm8)
                                    | (var_568_3 & zmm2)
                                zmm12 = _mm_cmpgt_epi32(zmm12, arg6) & not.o(zmm8)
                                
                                if (_mm_movemask_ps(zmm12) != 0)
                                    arg6 = (temp0_1520 & zmm12) | (zmm12 & not.o(arg6))
                                
                                zmm0 = _mm_shuffle_epi32(arg6, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm4 = _mm_unpacklo_epi32(arg6, _mm_cmpgt_epi32(zx.o(0), arg6).q)
                                zmm5 = _mm_add_epi64(var_588_2, zmm4)
                                
                                if ((rbp_73 & 1) == 0)
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                    
                                    if ((rbp_73 & 2) != 0)
                                        goto label_140242eb6
                                    
                                    goto label_14023eb1a
                                
                                zmm4 = zx.o(*zmm5[0].q)
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                
                                if ((rbp_73 & 2) != 0)
                                label_140242eb6:
                                    zmm4 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), 
                                            zmm4, 0), 
                                        zmm4, 0xe2)
                                    zmm2 = _mm_add_epi64(var_448_2, zmm0)
                                    
                                    if ((rbp_73 & 4) == 0)
                                        goto label_14023eb28
                                    
                                    goto label_140242ed0
                                
                            label_14023eb1a:
                                zmm2 = _mm_add_epi64(var_448_2, zmm0)
                                
                                if ((rbp_73 & 4) != 0)
                                label_140242ed0:
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(zx.o(*zmm2.q), zmm4, 0x30), 0x84)
                                    
                                    if ((rbp_73 & 8) != 0)
                                        zmm4 = _mm_shuffle_ps(zmm4, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm4, 0x20), 
                                            0x24)
                                else
                                label_14023eb28:
                                    
                                    if ((rbp_73 & 8) != 0)
                                        zmm4 = _mm_shuffle_ps(zmm4, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm4, 0x20), 
                                            0x24)
                                
                                zmm3 = __andps_xmmxud_memxud(zmm3, data_142ed6810)
                                zmm4 = __andps_xmmxud_memxud(zmm4, data_142ed6810)
                            else
                                zmm3 = _mm_add_epi32(zmm13, zmm13)
                                zmm0 = _mm_shuffle_epi32(zmm3, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm3 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zmm2, zmm3).q), zmm5)
                                char rbp_72 = temp0_1518.b
                                
                                if ((rbp_72 & 1) == 0)
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                    
                                    if ((rbp_72 & 2) != 0)
                                        goto label_14023e334
                                    
                                    goto label_14023de60
                                
                                zmm7 = zx.o(*zmm3[0].q)
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                
                                if ((rbp_72 & 2) != 0)
                                label_14023e334:
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                            zmm7, 0), 
                                        zmm7, 0xe2)
                                    zmm7 = zmm1
                                    zmm0 = _mm_add_epi64(zmm0, zmm6)
                                    
                                    if ((rbp_72 & 4) == 0)
                                        goto label_14023de6e
                                    
                                    goto label_14023e355
                                
                            label_14023de60:
                                zmm0 = _mm_add_epi64(zmm0, zmm6)
                                
                                if ((rbp_72 & 4) != 0)
                                label_14023e355:
                                    zmm1 = _mm_shuffle_ps(zx.o(*zmm0.q), zmm7, 0x30)
                                    zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0x84)
                                    
                                    if ((rbp_72 & 8) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm7, 0x20), 
                                            0x24)
                                else
                                label_14023de6e:
                                    
                                    if ((rbp_72 & 8) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm7, 0x20), 
                                            0x24)
                                
                                zmm7 = __andps_xmmxud_memxud(zmm7, data_143442cd0)
                                zmm0 = zx.o(rbx_48)
                                int32_t temp0_1559[0x4] = _mm_shuffle_epi32(zmm0, 0)
                                zmm7 = _mm_cmpgt_epi32(zmm7, temp0_1559)
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                uint128_t var_468_2 = zmm7 ^ zmm0
                                zmm3 = zmm13
                                
                                if (_mm_movemask_ps(zmm7 & not.o(zmm8)) != 0)
                                    zmm2 = (zmm7 & not.o(temp0_1520)) | (zmm7 & zmm13)
                                    zmm5 = _mm_sub_epi32(zmm13, zmm1)
                                    zmm7 &= not.o(_mm_cmpgt_epi32(zmm12, zmm5))
                                    zmm0 = zmm8 & zmm7
                                    uint32_t i_2 = _mm_movemask_ps(zmm0)
                                    
                                    if (i_2 == 0)
                                        zmm3 = zmm2
                                    else
                                        zmm4 = zmm13
                                        
                                        do
                                            arg6 = zmm5
                                            zmm5 = _mm_add_epi32(zmm5, zmm5)
                                            uint32_t temp0_1575[0x4] = _mm_shuffle_epi32(zmm5, 0x4e)
                                            zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_1575)
                                            zmm5 = __paddq_xmmdq_memdq(
                                                _mm_unpacklo_epi32(zmm5, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm5).q), 
                                                var_588_2)
                                            char temp0_1580 = _mm_movemask_ps(zmm0)
                                            
                                            if ((temp0_1580 & 1) == 0)
                                                zmm3 = _mm_unpacklo_epi32(temp0_1575, zmm1.q)
                                                
                                                if ((temp0_1580 & 2) != 0)
                                                    goto label_14023df56
                                                
                                                goto label_14023dfd7
                                            
                                            zmm6.d = zx.d(*zmm5[0].q)
                                            zmm3 = _mm_unpacklo_epi32(temp0_1575, zmm1.q)
                                            
                                            if ((temp0_1580 & 2) != 0)
                                            label_14023df56:
                                                zmm6 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), 
                                                        zmm6, 0), 
                                                    zmm6, 0xe2)
                                                zmm3 = __paddq_xmmdq_memdq(zmm3, var_448_2)
                                                
                                                if ((temp0_1580 & 4) == 0)
                                                    goto label_14023dfe5
                                                
                                                goto label_14023df77
                                            
                                        label_14023dfd7:
                                            zmm3 = __paddq_xmmdq_memdq(zmm3, var_448_2)
                                            
                                            if ((temp0_1580 & 4) != 0)
                                            label_14023df77:
                                                zmm6 = _mm_shuffle_ps(zmm6, 
                                                    _mm_shuffle_ps(zx.o(*zmm3[0].q), zmm6, 0x30), 
                                                    0x84)
                                                
                                                if ((temp0_1580 & 8) != 0)
                                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                                            zmm6, 0x20), 
                                                        0x24)
                                            else
                                            label_14023dfe5:
                                                
                                                if ((temp0_1580 & 8) != 0)
                                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                                            zmm6, 0x20), 
                                                        0x24)
                                            
                                            zmm1 = _mm_cmpgt_epi32(
                                                __andps_xmmxud_memxud(zmm6, data_143442cd0), 
                                                temp0_1559) & zmm7
                                            zmm0 = zx.o(0)
                                            zmm3 = zmm1 & not.o(zmm2)
                                            zmm4 &= zmm1
                                            
                                            if (_mm_movemask_ps(zmm1 & zmm8) != i_2)
                                                zmm1 ^= zmm7
                                                zmm0 = zmm1
                                            
                                            zmm3 |= zmm4
                                            zmm5 = __psubd_xmmdq_memdq(arg6, data_142d3f800)
                                            zmm7 = _mm_cmpgt_epi32(zmm12, zmm5) & zmm0
                                            zmm0 = zmm7 & zmm8
                                            i_2 = _mm_movemask_ps(zmm0)
                                            zmm4 = arg6
                                            zmm2 = zmm3
                                        while (i_2 != 0)
                                
                                uint32_t temp0_1650 =
                                    _mm_movemask_ps(_mm_andnot_ps(var_468_2, zmm8))
                                uint32_t i_3
                                int32_t temp0_1652[0x4]
                                
                                if (temp0_1650 != 0)
                                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ var_468_2
                                    zmm3 &= var_468_2
                                    temp0_1652 = _mm_cmpeq_epi32(arg6, arg6)
                                    zmm13 = _mm_add_epi32(zmm13, temp0_1652)
                                    zmm7 = _mm_cmpgt_epi32(zmm13, zx.o(0)) & zmm1
                                    zmm4 = zmm7 & zmm8
                                    i_3 = _mm_movemask_ps(zmm4)
                                
                                if (temp0_1650 == 0 || i_3 == 0)
                                    zmm0 = zmm3
                                else
                                    zmm11 = data_143442cd0
                                    
                                    do
                                        zmm0 = _mm_add_epi32(zmm13, zmm13)
                                        zmm2 = _mm_shuffle_epi32(zmm0, 0x4e)
                                        zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                        zmm0 = __paddq_xmmdq_memdq(
                                            _mm_unpacklo_epi32(zmm0, 
                                                _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                            var_588_2)
                                        char temp0_1669 = _mm_movemask_ps(zmm4)
                                        
                                        if ((temp0_1669 & 1) == 0)
                                            zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                                            
                                            if ((temp0_1669 & 2) != 0)
                                                goto label_14023e46b
                                            
                                            goto label_14023e4e5
                                        
                                        zmm6.d = zx.o(*zmm0.q)[0]
                                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                                        
                                        if ((temp0_1669 & 2) != 0)
                                        label_14023e46b:
                                            zmm6 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm6, 
                                                    0), 
                                                zmm6, 0xe2)
                                            zmm2 = __paddq_xmmdq_memdq(zmm2, var_448_2)
                                            
                                            if ((temp0_1669 & 4) == 0)
                                                goto label_14023e4f3
                                            
                                            goto label_14023e48c
                                        
                                    label_14023e4e5:
                                        zmm2 = __paddq_xmmdq_memdq(zmm2, var_448_2)
                                        
                                        if ((temp0_1669 & 4) != 0)
                                        label_14023e48c:
                                            zmm6 = _mm_shuffle_ps(zmm6, 
                                                _mm_shuffle_ps(zx.o(*zmm2.q), zmm6, 0x30), 0x84)
                                            
                                            if ((temp0_1669 & 8) != 0)
                                                zmm6 = _mm_shuffle_ps(zmm6, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm6, 0x20), 
                                                    0x24)
                                        else
                                        label_14023e4f3:
                                            
                                            if ((temp0_1669 & 8) != 0)
                                                zmm6 = _mm_shuffle_ps(zmm6, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm6, 0x20), 
                                                    0x24)
                                        
                                        zmm2 = _mm_cmpgt_epi32(_mm_and_ps(zmm6, zmm11), temp0_1559)
                                            & not.o(zmm7)
                                        zmm4 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm2 & zmm8) != i_3)
                                            zmm4 = zmm2 ^ zmm7
                                        
                                        zmm0 = (zmm2 & not.o(zmm3)) | (zmm2 & zmm13)
                                        zmm13 = _mm_add_epi32(zmm13, temp0_1652)
                                        zmm7 = _mm_cmpgt_epi32(zmm13, zx.o(0)) & zmm4
                                        zmm4 = zmm7 & zmm8
                                        i_3 = _mm_movemask_ps(zmm4)
                                        zmm3 = zmm0
                                    while (i_3 != 0)
                                
                                zmm11 = (zmm0 & zmm8) | (zmm8 & not.o(var_4c8_3))
                                zmm2 = _mm_add_epi32(zmm11, zmm11)
                                zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm2 = __paddq_xmmdq_memdq(_mm_unpacklo_epi32(zmm2, zmm3[0].q), 
                                    var_588_2)
                                
                                if ((rbp_72 & 1) != 0)
                                    zmm3 = zx.o(*zmm2.q)
                                
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                zmm13 = var_488_3
                                zmm15 = var_558_6
                                zmm6 = var_5b8_1
                                
                                if ((rbp_72 & 2) == 0)
                                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                    zmm0 = __paddq_xmmdq_memdq(zmm0, var_448_2)
                                    
                                    if ((rbp_72 & 4) != 0)
                                        goto label_14023e778
                                    
                                    goto label_14023e62c
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_448_2)
                                
                                if ((rbp_72 & 4) == 0)
                                label_14023e62c:
                                    zmm2 ^= zmm8
                                    
                                    if ((rbp_72 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                else
                                label_14023e778:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*zmm0.q), zmm3, 0x30), 0x84)
                                    zmm2 ^= zmm8
                                    
                                    if ((rbp_72 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                
                                arg6 = (_mm_sub_epi32(zmm11, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm8)
                                    | (var_568_3 & zmm2)
                                zmm12 = _mm_cmpgt_epi32(zmm12, arg6) & not.o(zmm8)
                                
                                if (_mm_movemask_ps(zmm12) != 0)
                                    arg6 = (temp0_1520 & zmm12) | (zmm12 & not.o(arg6))
                                
                                zmm2 = _mm_add_epi32(arg6, arg6)
                                zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm4 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm5 = _mm_add_epi64(var_588_2, _mm_unpacklo_epi32(zmm2, zmm4[0].q))
                                
                                if ((rbp_72 & 1) == 0)
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                    
                                    if ((rbp_72 & 2) != 0)
                                        goto label_14023e7c3
                                    
                                    goto label_14023e6f1
                                
                                zmm4 = zx.o(*zmm5[0].q)
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                
                                if ((rbp_72 & 2) != 0)
                                label_14023e7c3:
                                    zmm4 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), 
                                            zmm4, 0), 
                                        zmm4, 0xe2)
                                    zmm2 = _mm_add_epi64(var_448_2, zmm0)
                                    
                                    if ((rbp_72 & 4) == 0)
                                        goto label_14023e6ff
                                    
                                    goto label_14023e7dd
                                
                            label_14023e6f1:
                                zmm2 = _mm_add_epi64(var_448_2, zmm0)
                                
                                if ((rbp_72 & 4) != 0)
                                label_14023e7dd:
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(zx.o(*zmm2.q), zmm4, 0x30), 0x84)
                                    
                                    if ((rbp_72 & 8) != 0)
                                        zmm4 = _mm_shuffle_ps(zmm4, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm4, 0x20), 
                                            0x24)
                                else
                                label_14023e6ff:
                                    
                                    if ((rbp_72 & 8) != 0)
                                        zmm4 = _mm_shuffle_ps(zmm4, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm4, 0x20), 
                                            0x24)
                                
                                zmm3 = __andps_xmmxud_memxud(zmm3, data_143442cd0)
                                zmm4 = __andps_xmmxud_memxud(zmm4, data_143442cd0)
                            
                            uint128_t var_418_2 = var_418_1 ^ data_142d3f800
                            zmm2 = zx.o(0)
                            
                            if (arg9 != 1)
                                int32_t temp0_1782[0x4] = _mm_sub_epi32(zmm4, zmm3)
                                zmm0 = __pcmpgtd_xmmdq_memdq(temp0_1782, data_142d3f5b0)
                                zmm2 = _mm_div_ps(
                                    _mm_sub_ps(_mm_shuffle_ps(var_388_2, var_388_2, 0), 
                                        _mm_cvtepi32_ps(zmm3)), 
                                    _mm_cvtepi32_ps((zmm0 & temp0_1782)
                                    | (zmm0 & not.o(data_142d3f5b0))))
                            
                            zmm2 &= var_418_2
                    
                    var_498_1 = (zmm14 & not.o(var_498_1)) | (zmm2 & zmm14)
                
                zmm14 = var_4b8_2
            
            zmm8 = _mm_unpacklo_epi32(zmm14, 0)
            zmm14 = _mm_unpackhi_epi32(zmm14, 0)
            uint32_t temp0_1792[0x4] = _mm_shuffle_epi32(_mm_mul_epu32(zmm11, var_578_3), 0xe8)
            zmm2 = _mm_shuffle_epi32(var_578_3, 0xf5)
            uint128_t var_388_3 = zmm2
            zmm3 = _mm_unpacklo_epi32(temp0_1792, 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm11, 0xf5), zmm2), 0xe8).q)
            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm3)
            zmm2 = _mm_shuffle_epi32(zmm3, 0x4e)
            int32_t var_468_4[0x4] = _mm_unpacklo_epi32(zmm3, zmm1.q)
            zmm2 = _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2).q)
            uint128_t var_418_3 = zmm2
            zmm3 = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_478_2)
            zmm5 = zmm3 & zmm6
            zmm0 = _mm_slli_epi32(zmm5, 0x1f)
            char temp0_1805 = _mm_movemask_ps(zmm0)
            uint128_t var_588_3 = zmm8
            int32_t var_568_4[0x4] = arg6
            
            if (temp0_1805 != 0)
                zmm13 = zmm3
                zmm15 = zmm11
                int32_t temp0_1806[0x4] = _mm_add_epi64(var_418_3, zmm14)
                zmm3 = __paddq_xmmdq_memdq(_mm_add_epi64(var_468_4, zmm8), var_648_3)
                zmm12 = __paddq_xmmdq_memdq(temp0_1806, var_458_2)
                int32_t temp0_1811[0x4] = _mm_srai_epi32(_mm_slli_epi32(var_598_4, 0x1f), 0x1f)
                zmm0 = _mm_srai_epi32(zmm0, 0x1f) & temp0_1811
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm2 = data_1434426b0
                    zmm6 = _mm_add_epi64(zmm12, zmm2)
                    zmm2 = _mm_add_epi64(zmm2, zmm3)
                    zmm7 = _mm_cmpeq_epi32(zmm7, zmm7) ^ zmm0
                    zmm1 = _mm_shuffle_epi32(zmm7, 0x50)
                    zmm3 = (zmm3 & zmm1) | (zmm1 & not.o(zmm2))
                    zmm1 = _mm_shuffle_epi32(zmm7, 0xfa)
                    zmm12 = (zmm12 & zmm1) | (zmm1 & not.o(zmm6))
                    zmm1 = _mm_add_epi64(var_4a8_2, zmm14)
                    zmm2 = _mm_add_epi64(var_558_6, zmm8)
                    zmm6 = data_1434426c0
                    zmm2 = _mm_add_epi64(zmm2, var_468_4)
                    zmm1 = _mm_add_epi64(_mm_add_epi64(zmm1, var_418_3), zmm6)
                    zmm2 = _mm_add_epi64(zmm2, zmm6)
                    zmm6 = _mm_shuffle_epi32(zmm0, 0x50) & zmm2
                    zmm0 = _mm_shuffle_epi32(zmm0, 0xfa) & zmm1
                    int64_t rbx_53 = _mm_shuffle_epi32(zmm6, 0x4e).q
                    int64_t rdi_14 = zmm0.q
                    zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                    zmm8 = _mm_cvtepi32_ps(__pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + zmm6.q), 0), 
                                *(arg4 + rbx_53), 2), 
                            *(arg4 + rdi_14), 4), 
                        *(arg4 + zmm0.q), 6))
                
                arg6 = temp0_1811 & not.o(data_1434426d0)
                zmm8 = _mm_and_ps(zmm8, temp0_1811)
                zmm0 = data_1434422d0
                zmm11 = _mm_cmpeq_epi32(var_598_4 & zmm0, zmm0)
                zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm11 & zmm5, 0x1f), 0x1f)
                char temp0_1838 = _mm_movemask_ps(zmm0)
                
                if (temp0_1838 != 0)
                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                    
                    if ((temp0_1838 & 1) != 0)
                        zmm6 = zx.o(*zmm3[0].q)
                    
                    zmm7 = data_1434426b0
                    zmm0 ^= zmm2
                    
                    if ((temp0_1838 & 2) != 0)
                        zmm6 = _mm_shuffle_ps(
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), zmm6, 0), zmm6, 
                            0xe2)
                    
                    zmm2 = _mm_add_epi64(zmm12, zmm7)
                    int32_t temp0_1844[0x4] = _mm_add_epi64(zmm7, zmm3)
                    zmm4 = _mm_shuffle_epi32(zmm0, 0x50)
                    zmm0 = _mm_shuffle_epi32(zmm0, 0xfa)
                    
                    if ((temp0_1838 & 4) != 0)
                        zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zx.o(*zmm12[0].q), zmm6, 0x30), 
                            0x84)
                    
                    if ((temp0_1838 & 8) != 0)
                        zmm6 = _mm_shuffle_ps(zmm6, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm6, 0x20), 
                            0x24)
                    
                    zmm3 = (zmm3 & zmm4) | (zmm4 & not.o(temp0_1844))
                    zmm6 = _mm_cvtepi32_ps(__andps_xmmxud_memxud(zmm6, data_143442cd0))
                    zmm12 = (zmm12 & zmm0) | (zmm0 & not.o(zmm2))
                
                zmm8 = _mm_or_ps(zmm8, arg6)
                zmm0 = data_142fc95e0
                int32_t temp0_1855[0x4] = _mm_cmpeq_epi32(var_598_4 & zmm0, zmm0)
                char temp0_1857 = _mm_movemask_ps(_mm_slli_epi32(zmm5 & temp0_1855, 0x1f))
                
                if (temp0_1857 != 0)
                    if ((temp0_1857 & 1) == 0)
                        if ((temp0_1857 & 2) != 0)
                            goto label_14023f6a1
                        
                        goto label_14023ef21
                    
                    zmm0 = zx.o(*zmm3[0].q)
                    
                    if ((temp0_1857 & 2) != 0)
                    label_14023f6a1:
                        zmm0 = _mm_shuffle_ps(
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), zmm0, 0), zmm0, 
                            0xe2)
                        
                        if ((temp0_1857 & 4) == 0)
                            goto label_14023ef29
                        
                        goto label_14023f6bc
                    
                label_14023ef21:
                    
                    if ((temp0_1857 & 4) != 0)
                    label_14023f6bc:
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zx.o(*zmm12[0].q), zmm0, 0x30), 
                            0x84)
                        
                        if ((temp0_1857 & 8) != 0)
                            zmm0 = _mm_shuffle_ps(zmm0, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm0, 
                                    0x20), 
                                0x24)
                    else
                    label_14023ef29:
                        
                        if ((temp0_1857 & 8) != 0)
                            zmm0 = _mm_shuffle_ps(zmm0, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm0, 
                                    0x20), 
                                0x24)
                    
                    zmm2 = _mm_cvtepi32_ps(__andps_xmmxud_memxud(zmm0, data_143442cd0))
                
                zmm5 = data_143442c20
                zmm8 = _mm_add_ps(zmm8, zmm5)
                zmm3 = data_142dd3fa0
                zmm8 = _mm_mul_ps(zmm8, zmm3)
                
                if ((temp0_1805 & 1) == 0)
                    zmm6 = _mm_and_ps(zmm6, zmm11)
                    zmm11 = __andnps_xmmxud_memxud(zmm11, data_1434426d0)
                    
                    if ((temp0_1805 & 2) != 0)
                        goto label_14023f598
                    
                    goto label_14023ef89
                
                var_638.d = zmm8.d
                zmm6 = _mm_and_ps(zmm6, zmm11)
                zmm11 = __andnps_xmmxud_memxud(zmm11, data_1434426d0)
                
                if ((temp0_1805 & 2) != 0)
                label_14023f598:
                    var_638:4.d = _mm_shuffle_epi32(zmm8, 0xe5).d
                    zmm6 = _mm_or_ps(zmm6, zmm11)
                    
                    if ((temp0_1805 & 4) == 0)
                        goto label_14023ef95
                    
                    goto label_14023f5b0
                
            label_14023ef89:
                zmm6 = _mm_or_ps(zmm6, zmm11)
                
                if ((temp0_1805 & 4) == 0)
                label_14023ef95:
                    zmm6 = _mm_add_ps(zmm6, zmm5)
                    
                    if ((temp0_1805 & 8) != 0)
                        goto label_14023f5c7
                    
                    goto label_14023efa0
                
            label_14023f5b0:
                var_638:8.d = _mm_shuffle_epi32(zmm8, 0x4e).d
                zmm6 = _mm_add_ps(zmm6, zmm5)
                
                if ((temp0_1805 & 8) != 0)
                label_14023f5c7:
                    var_638:0xc.d = _mm_shuffle_epi32(zmm8, 0xe7).d
                    zmm6 = _mm_mul_ps(zmm6, zmm3)
                    
                    if ((temp0_1805 & 1) == 0)
                        goto label_14023efab
                    
                    goto label_14023f5d8
                
            label_14023efa0:
                zmm6 = _mm_mul_ps(zmm6, zmm3)
                
                if ((temp0_1805 & 1) == 0)
                label_14023efab:
                    zmm2 = _mm_and_ps(zmm2, temp0_1855)
                    zmm7 = __andnps_xmmxud_memxud(temp0_1855, data_1434426d0)
                    
                    if ((temp0_1805 & 2) != 0)
                        goto label_14023f5f5
                    
                    goto label_14023efbd
                
            label_14023f5d8:
                var_628[0] = zmm6.d
                zmm2 = _mm_and_ps(zmm2, temp0_1855)
                zmm7 = __andnps_xmmxud_memxud(temp0_1855, data_1434426d0)
                
                if ((temp0_1805 & 2) == 0)
                label_14023efbd:
                    zmm2 = _mm_or_ps(zmm2, zmm7)
                    
                    if ((temp0_1805 & 4) != 0)
                        var_628[2] = _mm_shuffle_epi32(zmm6, 0x4e).d
                else
                label_14023f5f5:
                    var_628[1] = _mm_shuffle_epi32(zmm6, 0xe5).d
                    zmm2 = _mm_or_ps(zmm2, zmm7)
                    
                    if ((temp0_1805 & 4) != 0)
                        var_628[2] = _mm_shuffle_epi32(zmm6, 0x4e).d
                
                zmm8 = _mm_mul_ps(zmm8, zmm8)
                zmm2 = _mm_add_ps(zmm2, zmm5)
                zmm4 = data_142d3f670
                zmm11 = zmm15
                arg6 = var_568_4
                
                if ((temp0_1805 & 8) != 0)
                    var_628[3] = _mm_shuffle_epi32(zmm6, 0xe7).d
                
                zmm6 = _mm_mul_ps(zmm6, zmm6)
                zmm2 = _mm_mul_ps(zmm2, zmm3)
                zmm4 = _mm_sub_ps(zmm4, zmm8)
                zmm15 = var_558_6
                
                if ((temp0_1805 & 1) != 0)
                    var_618[0] = zmm2.d
                
                zmm0 = _mm_mul_ps(zmm2, zmm2)
                zmm4 = _mm_sub_ps(zmm4, zmm6)
                zmm8 = var_588_3
                zmm3 = zmm13
                
                if ((temp0_1805 & 2) != 0)
                    var_618[1] = _mm_shuffle_epi32(zmm2, 0xe5).d
                
                zmm4 = _mm_sub_ps(zmm4, zmm0)
                zmm6 = var_5b8_1
                zmm13 = var_488_3
                
                if ((temp0_1805 & 4) == 0)
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 2)
                    zmm1 = _mm_sqrt_ps(zmm4)
                    
                    if ((temp0_1805 & 8) != 0)
                        goto label_14023f62a
                    
                    goto label_14023f06f
                
                var_618[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 2)
                zmm1 = _mm_sqrt_ps(zmm4)
                
                if ((temp0_1805 & 8) != 0)
                label_14023f62a:
                    var_618[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_1805 & 1) == 0)
                        goto label_14023f07a
                    
                    goto label_14023f63b
                
            label_14023f06f:
                zmm0 = _mm_and_ps(zmm0, zmm1)
                
                if ((temp0_1805 & 1) == 0)
                label_14023f07a:
                    
                    if ((temp0_1805 & 2) != 0)
                        goto label_14023f64e
                    
                    goto label_14023f082
                
            label_14023f63b:
                var_608.d = zmm0.d
                
                if ((temp0_1805 & 2) != 0)
                label_14023f64e:
                    var_608:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                    
                    if ((temp0_1805 & 4) == 0)
                        goto label_14023f08a
                    
                    goto label_14023f661
                
            label_14023f082:
                
                if ((temp0_1805 & 4) != 0)
                label_14023f661:
                    var_608:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                    
                    if ((temp0_1805 & 8) != 0)
                        zmm0 = _mm_shuffle_epi32(zmm0, 0xe7)
                        var_608:0xc.d = zmm0.d
                else
                label_14023f08a:
                    
                    if ((temp0_1805 & 8) != 0)
                        zmm0 = _mm_shuffle_epi32(zmm0, 0xe7)
                        var_608:0xc.d = zmm0.d
            
            uint128_t var_448_3 = _mm_cmpeq_epi32(zmm0, zmm0) ^ zmm3
            uint32_t var_4b8_3[0x4] = zmm14
            zmm12 = var_438_2
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm3 & not.o(zmm6), 0x1f)) != 0)
                zmm4 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, var_478_2)
                zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm4 & zmm6, 0x1f), 0x1f)
                char temp0_1894 = _mm_movemask_ps(zmm1)
                uint32_t var_3c8_2[0x4] = zmm3
                
                if (temp0_1894 != 0)
                    int32_t var_428_3[0x4] = zmm4
                    zmm3 = _mm_add_epi64(var_4a8_2, zmm14)
                    int32_t temp0_1897[0x4] =
                        __paddq_xmmdq_memdq(_mm_add_epi64(zmm15, zmm8), var_468_4)
                    zmm3 = __paddq_xmmdq_memdq(zmm3, var_418_3)
                    zmm0 = data_1434426c0
                    zmm3 = _mm_add_epi64(zmm3, zmm0)
                    int32_t temp0_1900[0x4] = _mm_add_epi64(temp0_1897, zmm0)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0x50)
                    zmm15 = temp0_1900 & zmm4
                    zmm7 = _mm_shuffle_epi32(zmm1, 0xfa)
                    zmm3 &= zmm7
                    int64_t rbx_60 = zmm15[0].q
                    void* rbp_75 = arg4 + rbx_60
                    zmm1 = *(arg4 + rbx_60)
                    int64_t rdi_15 = _mm_shuffle_epi32(zmm15, 0x4e).q
                    void* rbx_61 = arg4 + rdi_15
                    zmm8 = *(arg4 + rdi_15)
                    int64_t rsi_42 = zmm3[0].q
                    void* rdi_16 = arg4 + rsi_42
                    zmm2 = *(arg4 + rsi_42)
                    int64_t rsi_43 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                    void* rcx_77 = arg4 + rsi_43
                    zmm6 = *(arg4 + rsi_43)
                    zmm5 = zmm4 & zmm0
                    zmm0 &= zmm7
                    zmm3 = *(zmm5[0].q + rbp_75)
                    zmm5 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rbx_61)
                    zmm13 = *(zmm0.q + rdi_16)
                    zmm12 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rcx_77)
                    zmm0 = data_1434426e0
                    zmm4 &= zmm0
                    zmm7 &= zmm0
                    zmm15 = *(zmm4[0].q + rbp_75)
                    zmm14 = *(_mm_shuffle_epi32(zmm4, 0x4e).q + rbx_61)
                    zmm4 = *(zmm7[0].q + rdi_16)
                    zmm7 = *(_mm_shuffle_epi32(zmm7, 0x4e).q + rcx_77)
                    
                    if ((temp0_1894 & 1) == 0)
                        if ((temp0_1894 & 2) != 0)
                            goto label_14023f6db
                        
                        goto label_14023f243
                    
                    var_638.d = zmm1.d
                    
                    if ((temp0_1894 & 2) != 0)
                    label_14023f6db:
                        var_638:4.d = zmm8.d
                        arg6 = var_568_4
                        
                        if ((temp0_1894 & 4) == 0)
                            goto label_14023f253
                        
                        goto label_14023f6f4
                    
                label_14023f243:
                    arg6 = var_568_4
                    
                    if ((temp0_1894 & 4) != 0)
                    label_14023f6f4:
                        var_638:8.d = zmm2.d
                        
                        if ((temp0_1894 & 8) != 0)
                        label_14023f702:
                            var_638:0xc.d = zmm6.d
                            
                            if ((temp0_1894 & 1) == 0)
                                goto label_14023f263
                            
                            goto label_14023f710
                    else
                    label_14023f253:
                        
                        if ((temp0_1894 & 8) != 0)
                            goto label_14023f702
                    
                    if ((temp0_1894 & 1) != 0)
                    label_14023f710:
                        var_628[0] = zmm3[0]
                        zmm1 = _mm_unpacklo_ps(zmm1, zmm8.q)
                        zmm2 = _mm_unpacklo_ps(zmm2, zmm6.q)
                        
                        if ((temp0_1894 & 2) != 0)
                            var_628[1] = zmm5[0]
                    else
                    label_14023f263:
                        zmm1 = _mm_unpacklo_ps(zmm1, zmm8.q)
                        zmm2 = _mm_unpacklo_ps(zmm2, zmm6.q)
                        
                        if ((temp0_1894 & 2) != 0)
                            var_628[1] = zmm5[0]
                    
                    zmm1 = zmm1.q | zmm2.q << 0x40
                    zmm3 = _mm_unpacklo_ps(zmm3, zmm5[0].q)
                    zmm0 = _mm_unpacklo_ps(zmm13, zmm12[0].q)
                    zmm8 = var_588_3
                    zmm6 = var_5b8_1
                    
                    if ((temp0_1894 & 4) != 0)
                        var_628[2] = zmm13[0]
                    
                    zmm3 = zmm3[0].q | zmm0.q << 0x40
                    zmm0 = _mm_unpacklo_ps(zmm15, zmm14[0].q)
                    zmm5 = zmm4
                    zmm4 = _mm_unpacklo_ps(zmm4, zmm7[0].q)
                    zmm1 = _mm_mul_ps(zmm1, zmm1)
                    zmm2 = data_142d3f670
                    
                    if ((temp0_1894 & 8) != 0)
                        var_628[3] = zmm12[0]
                    
                    zmm0 = zmm0.q | zmm4[0].q << 0x40
                    zmm2 = _mm_sub_ps(zmm2, zmm1)
                    zmm3 = _mm_mul_ps(zmm3, zmm3)
                    zmm13 = var_488_3
                    
                    if ((temp0_1894 & 1) != 0)
                        var_618[0] = zmm15[0]
                    
                    zmm2 = _mm_sub_ps(zmm2, zmm3)
                    zmm0 = _mm_mul_ps(zmm0, zmm0)
                    zmm4 = var_428_3
                    
                    if ((temp0_1894 & 2) != 0)
                        var_618[1] = zmm14[0]
                    
                    zmm2 = _mm_sub_ps(zmm2, zmm0)
                    zmm12 = var_438_2
                    zmm15 = var_558_6
                    zmm3 = var_3c8_2
                    
                    if ((temp0_1894 & 4) != 0)
                        var_618[2] = zmm5[0]
                    
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm2, 1)
                    zmm1 = _mm_sqrt_ps(zmm2)
                    zmm14 = var_4b8_3
                    
                    if ((temp0_1894 & 8) == 0)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_1894 & 1) != 0)
                            goto label_14023f73b
                        
                        goto label_14023f34f
                    
                    var_618[3] = zmm7[0]
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_1894 & 1) != 0)
                    label_14023f73b:
                        var_608.d = zmm0.d
                        
                        if ((temp0_1894 & 2) == 0)
                            goto label_14023f357
                        
                        goto label_14023f749
                    
                label_14023f34f:
                    
                    if ((temp0_1894 & 2) == 0)
                    label_14023f357:
                        
                        if ((temp0_1894 & 4) != 0)
                            goto label_14023f75c
                        
                        goto label_14023f35f
                    
                label_14023f749:
                    zmm1 = _mm_shuffle_epi32(zmm0, 0xe5)
                    var_608:4.d = zmm1.d
                    
                    if ((temp0_1894 & 4) == 0)
                    label_14023f35f:
                        
                        if ((temp0_1894 & 8) != 0)
                            var_608:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    else
                    label_14023f75c:
                        zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                        var_608:8.d = zmm1.d
                        
                        if ((temp0_1894 & 8) != 0)
                            var_608:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                zmm4 ^= var_448_3
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm4 & zmm6, 0x1f)) != 0)
                    uint128_t var_4c8_4 = zmm11
                    arg6 = var_5a8_5
                    
                    if (temp0_1474 != 0)
                        int32_t var_428_4[0x4] = zmm4
                        zmm5 = _mm_srai_epi32(_mm_slli_epi32(var_598_4, 0x1f), 0x1f) & arg6
                        zmm4 = zmm5 & zmm6
                        uint32_t temp0_1929 = _mm_movemask_ps(zmm4)
                        zmm0 = zx.o(0)
                        uint128_t var_3e8_1 = zx.o(0)
                        zmm11 = var_648_3
                        zmm14 = var_458_2
                        zmm8 = zx.o(0)
                        zmm7 = zx.o(0)
                        
                        if (temp0_1929 != 0)
                            char rbp_79 = temp0_1929.b
                            
                            if ((rbp_79 & 1) == 0)
                                zmm14 = var_458_2
                                
                                if ((rbp_79 & 2) != 0)
                                    goto label_14023f7a9
                                
                                goto label_14023f424
                            
                            zmm0 = var_648_3
                            zmm1 = *zmm0.q
                            zmm14 = var_458_2
                            
                            if ((rbp_79 & 2) != 0)
                            label_14023f7a9:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*__pshufd_xmmdq_memdq_immb(var_648_3, 0x4e).q, 
                                        zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm1 = zmm0
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                
                                if ((rbp_79 & 4) == 0)
                                    goto label_14023f432
                                
                                goto label_14023f7cb
                            
                        label_14023f424:
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((rbp_79 & 4) != 0)
                            label_14023f7cb:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*zmm14[0].q, zmm1, 0x30), 0x84)
                                zmm4 ^= zmm0
                                
                                if ((rbp_79 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 
                                            0x20), 
                                        0x24)
                            else
                            label_14023f432:
                                zmm4 ^= zmm0
                                
                                if ((rbp_79 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 
                                            0x20), 
                                        0x24)
                            
                            uint32_t temp0_1934[0x4] = _mm_shuffle_epi32(zmm4, 0x50)
                            char temp0_1935 = _mm_movemask_ps(zmm5)
                            zmm8 = zx.o(0)
                            
                            if ((temp0_1935 & 1) != 0)
                                zmm8.d = zmm1.d
                            
                            zmm2 = data_1434426c0
                            uint32_t temp0_1936[0x4] = _mm_slli_epi32(temp0_1934, 0x1f)
                            
                            if ((temp0_1935 & 2) != 0)
                                zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm8, 1), zmm8, 0xe2)
                            
                            zmm4 = _mm_shuffle_epi32(zmm4, 0xfa)
                            zmm0 = _mm_add_epi64(var_648_3, zmm2)
                            zmm3 = _mm_srai_epi32(temp0_1936, 0x1f)
                            
                            if ((temp0_1935 & 4) != 0)
                                zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm1, zmm8, 0x32), 0x84)
                            
                            zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                            zmm5 = zmm3 & not.o(zmm0)
                            zmm11 = var_648_3 & zmm3
                            
                            if ((temp0_1935 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, zmm8, 0x23)
                                zmm8 = _mm_shuffle_ps(zmm8, zmm1, 0x24)
                            
                            zmm0 = _mm_add_epi64(zmm14, zmm2)
                            int32_t temp0_1948[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                            zmm5 |= zmm11
                            
                            if ((rbp_79 & 1) != 0)
                                zmm1 = *zmm5[0].q
                            
                            zmm6 = temp0_1948 & not.o(zmm0)
                            zmm14 &= temp0_1948
                            
                            if ((rbp_79 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm5, 0x4e).q, zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm6 |= zmm14
                                
                                if ((rbp_79 & 4) != 0)
                                label_14023f817:
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*zmm6.q, zmm1, 0x30), 0x84)
                                    
                                    if ((rbp_79 & 8) == 0)
                                        goto label_14023f52b
                                    
                                    goto label_14023f837
                            else
                                zmm6 |= zmm14
                                
                                if ((rbp_79 & 4) != 0)
                                    goto label_14023f817
                            
                            if ((rbp_79 & 8) == 0)
                            label_14023f52b:
                                zmm7 = zx.o(0)
                                
                                if ((temp0_1935 & 1) == 0)
                                    goto label_14023f848
                                
                                goto label_14023f538
                            
                        label_14023f837:
                            zmm1 = _mm_shuffle_ps(zmm1, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm1, 0x20), 0x24)
                            zmm7 = zx.o(0)
                            
                            if ((temp0_1935 & 1) == 0)
                            label_14023f848:
                                
                                if ((temp0_1935 & 2) == 0)
                                    goto label_14023f545
                                
                                goto label_14023f85c
                            
                        label_14023f538:
                            zmm7[0] = zmm1.d
                            
                            if ((temp0_1935 & 2) == 0)
                            label_14023f545:
                                zmm6 = _mm_add_epi64(zmm6, zmm2)
                                zmm5 = _mm_add_epi64(zmm5, zmm2)
                                
                                if ((temp0_1935 & 4) == 0)
                                    goto label_14023f870
                                
                                goto label_14023f55d
                            
                        label_14023f85c:
                            zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm7, 1), zmm7, 0xe2)
                            zmm6 = _mm_add_epi64(zmm6, zmm2)
                            zmm5 = _mm_add_epi64(zmm5, zmm2)
                            
                            if ((temp0_1935 & 4) != 0)
                            label_14023f55d:
                                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, zmm7, 0x32), 0x84)
                                zmm3 &= not.o(zmm5)
                                zmm4 = temp0_1948 & not.o(zmm6)
                                
                                if ((temp0_1935 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, zmm7, 0x23)
                                    zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0x24)
                            else
                            label_14023f870:
                                zmm3 &= not.o(zmm5)
                                zmm4 = temp0_1948 & not.o(zmm6)
                                
                                if ((temp0_1935 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, zmm7, 0x23)
                                    zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0x24)
                            
                            zmm6 = var_5b8_1
                            zmm11 |= zmm3
                            zmm14 |= zmm4
                        
                        zmm0 = data_1434422d0
                        zmm4 = _mm_cmpeq_epi32(var_598_4 & zmm0, zmm0) & arg6
                        zmm3 = _mm_srai_epi32(_mm_slli_epi32(zmm4 & zmm6, 0x1f), 0x1f)
                        char temp0_2005 = _mm_movemask_ps(zmm3)
                        int32_t var_358_1[0x4] = zmm7
                        
                        if (temp0_2005 == 0)
                            zmm3 = zx.o(0)
                        else
                            if ((temp0_2005 & 1) == 0)
                                if ((temp0_2005 & 2) != 0)
                                    goto label_14023f970
                                
                                goto label_14023f8e5
                            
                            zmm1 = *zmm11.q
                            
                            if ((temp0_2005 & 2) != 0)
                            label_14023f970:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm1 = zmm0
                                
                                if ((temp0_2005 & 4) == 0)
                                    goto label_14023f8ee
                                
                                goto label_14023f989
                            
                        label_14023f8e5:
                            
                            if ((temp0_2005 & 4) != 0)
                            label_14023f989:
                                zmm0 = _mm_shuffle_ps(*zmm14[0].q, zmm1, 0x30)
                                zmm1 = _mm_shuffle_ps(zmm1, zmm0, 0x84)
                                
                                if ((temp0_2005 & 8) != 0)
                                    zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 
                                        0x20)
                                    zmm1 = _mm_shuffle_ps(zmm1, zmm0, 0x24)
                            else
                            label_14023f8ee:
                                
                                if ((temp0_2005 & 8) != 0)
                                    zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 
                                        0x20)
                                    zmm1 = _mm_shuffle_ps(zmm1, zmm0, 0x24)
                            
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            char temp0_2010 = _mm_movemask_ps(zmm4)
                            zmm2 = zx.o(0)
                            
                            if ((temp0_2010 & 1) != 0)
                                zmm2.d = zmm1.d
                            
                            arg6 = data_1434426c0
                            zmm3 ^= zmm0
                            
                            if ((temp0_2010 & 2) == 0)
                                var_3e8_1 = zmm2
                            else
                                var_3e8_1 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                            
                            zmm5 = _mm_add_epi64(zmm11, arg6)
                            zmm4 = _mm_shuffle_epi32(zmm3, 0x50)
                            
                            if ((temp0_2010 & 4) != 0)
                                var_3e8_1 = _mm_shuffle_ps(var_3e8_1, 
                                    _mm_shuffle_ps(zmm1, var_3e8_1, 0x32), 0x84)
                            
                            if ((temp0_2010 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, var_3e8_1, 0x23)
                                var_3e8_1 = _mm_shuffle_ps(var_3e8_1, zmm1, 0x24)
                            
                            zmm6 = _mm_add_epi64(zmm14, arg6)
                            zmm7 = _mm_shuffle_epi32(zmm3, 0xfa)
                            zmm5 = (zmm11 & zmm4) | (zmm4 & not.o(zmm5))
                            
                            if ((temp0_2005 & 1) != 0)
                                zmm1 = *zmm5[0].q
                            
                            zmm0 = zmm7 & not.o(zmm6)
                            zmm6 = zmm14 & zmm7
                            
                            if ((temp0_2005 & 2) != 0)
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm5, 0x4e)[0].q, zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm6 |= zmm0
                                
                                if ((temp0_2005 & 4) != 0)
                                label_14023fa9a:
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*zmm6.q, zmm1, 0x30), 0x84)
                                    
                                    if ((temp0_2005 & 8) == 0)
                                        goto label_14023fa4b
                                    
                                    goto label_14023fab5
                            else
                                zmm6 |= zmm0
                                
                                if ((temp0_2005 & 4) != 0)
                                    goto label_14023fa9a
                            
                            if ((temp0_2005 & 8) == 0)
                            label_14023fa4b:
                                zmm3 = zx.o(0)
                                
                                if ((temp0_2010 & 1) == 0)
                                    goto label_14023fac3
                                
                                goto label_14023fa55
                            
                        label_14023fab5:
                            zmm1 = _mm_shuffle_ps(zmm1, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm1, 0x20), 0x24)
                            zmm3 = zx.o(0)
                            
                            if ((temp0_2010 & 1) != 0)
                            label_14023fa55:
                                zmm3[0] = zmm1.d
                                zmm7 = _mm_slli_epi32(zmm7, 0x1f)
                                zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                                
                                if ((temp0_2010 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm3, 1), zmm3, 0xe2)
                            else
                            label_14023fac3:
                                zmm7 = _mm_slli_epi32(zmm7, 0x1f)
                                zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                                
                                if ((temp0_2010 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm3, 1), zmm3, 0xe2)
                            
                            int32_t temp0_2040[0x4] = _mm_srai_epi32(zmm7, 0x1f)
                            int32_t temp0_2041[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                            zmm6 = _mm_add_epi64(zmm6, arg6)
                            zmm5 = _mm_add_epi64(zmm5, arg6)
                            
                            if ((temp0_2010 & 4) != 0)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm1, zmm3, 0x32), 0x84)
                            
                            arg6 = var_5a8_5
                            zmm7 = temp0_2040 & not.o(zmm6)
                            
                            if ((temp0_2010 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, zmm3, 0x23)
                                zmm3 = _mm_shuffle_ps(zmm3, zmm1, 0x24)
                            
                            zmm6 = var_5b8_1
                            zmm11 = (zmm11 & temp0_2041) | (temp0_2041 & not.o(zmm5))
                            zmm14 = (zmm14 & temp0_2040) | zmm7
                        
                        zmm0 = data_142fc95e0
                        zmm5 = _mm_cmpeq_epi32(var_598_4 & zmm0, zmm0) & arg6
                        int32_t temp0_2050[0x4] =
                            _mm_srai_epi32(_mm_slli_epi32(zmm5 & zmm6, 0x1f), 0x1f)
                        char temp0_2051 = _mm_movemask_ps(temp0_2050)
                        zmm4 = zx.o(0)
                        zmm15 = zx.o(0)
                        
                        if (temp0_2051 != 0)
                            if ((temp0_2051 & 1) == 0)
                                if ((temp0_2051 & 2) != 0)
                                    goto label_14023fcd9
                                
                                goto label_14023fba2
                            
                            zmm1 = *zmm11.q
                            
                            if ((temp0_2051 & 2) != 0)
                            label_14023fcd9:
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm1, 0), 
                                    zmm1, 0xe2)
                                
                                if ((temp0_2051 & 4) == 0)
                                    goto label_14023fbac
                                
                                goto label_14023fcf3
                            
                        label_14023fba2:
                            
                            if ((temp0_2051 & 4) != 0)
                            label_14023fcf3:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*zmm14[0].q, zmm1, 0x30), 0x84)
                                
                                if ((temp0_2051 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 
                                            0x20), 
                                        0x24)
                            else
                            label_14023fbac:
                                
                                if ((temp0_2051 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 
                                            0x20), 
                                        0x24)
                            
                            zmm6 = _mm_cmpeq_epi32(zmm6, zmm6)
                            char temp0_2056 = _mm_movemask_ps(zmm5)
                            zmm4 = zx.o(0)
                            
                            if ((temp0_2056 & 1) != 0)
                                zmm4[0] = zmm1.d
                            
                            zmm0 = data_1434426c0
                            arg6 = temp0_2050 ^ zmm6
                            
                            if ((temp0_2056 & 2) != 0)
                                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm4, 1), zmm4, 0xe2)
                            
                            zmm5 = _mm_add_epi64(zmm11, zmm0)
                            zmm6 = _mm_shuffle_epi32(arg6, 0x50)
                            
                            if ((temp0_2056 & 4) != 0)
                                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm4, 0x32), 0x84)
                            
                            zmm11 &= zmm6
                            zmm6 &= not.o(zmm5)
                            
                            if ((temp0_2056 & 8) != 0)
                                zmm1 = _mm_shuffle_ps(zmm1, zmm4, 0x23)
                                zmm4 = _mm_shuffle_ps(zmm4, zmm1, 0x24)
                            
                            zmm0 = _mm_add_epi64(zmm0, zmm14)
                            zmm5 = _mm_shuffle_epi32(arg6, 0xfa)
                            zmm11 |= zmm6
                            
                            if ((temp0_2051 & 1) == 0)
                                zmm14 &= zmm5
                                zmm5 &= not.o(zmm0)
                                
                                if ((temp0_2051 & 2) != 0)
                                    goto label_14023fd39
                                
                                goto label_14023fc5a
                            
                            zmm1 = *zmm11.q
                            zmm14 &= zmm5
                            zmm5 &= not.o(zmm0)
                            
                            if ((temp0_2051 & 2) != 0)
                            label_14023fd39:
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm14 |= zmm5
                                
                                if ((temp0_2051 & 4) == 0)
                                    goto label_14023fc69
                                
                                goto label_14023fd58
                            
                        label_14023fc5a:
                            zmm14 |= zmm5
                            
                            if ((temp0_2051 & 4) == 0)
                            label_14023fc69:
                                
                                if ((temp0_2051 & 8) != 0)
                                    goto label_14023fd79
                                
                                goto label_14023fc73
                            
                        label_14023fd58:
                            zmm1 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*zmm14[0].q, zmm1, 0x30), 0x84)
                            
                            if ((temp0_2051 & 8) != 0)
                            label_14023fd79:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                zmm15 = zx.o(0)
                                
                                if ((temp0_2056 & 1) != 0)
                                    goto label_14023fc80
                                
                                goto label_14023fd8a
                            
                        label_14023fc73:
                            zmm15 = zx.o(0)
                            
                            if ((temp0_2056 & 1) != 0)
                            label_14023fc80:
                                zmm15[0] = zmm1.d
                                
                                if ((temp0_2056 & 2) != 0)
                                    goto label_14023fd9f
                                
                                goto label_14023fc8d
                            
                        label_14023fd8a:
                            
                            if ((temp0_2056 & 2) != 0)
                            label_14023fd9f:
                                zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm15, 1), zmm15, 0xe2)
                                
                                if ((temp0_2056 & 4) != 0)
                                    goto label_14023fc9d
                                
                                goto label_14023fdab
                            
                        label_14023fc8d:
                            
                            if ((temp0_2056 & 4) == 0)
                            label_14023fdab:
                                
                                if ((temp0_2056 & 8) != 0)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm1, zmm15, 0x23), 0x24)
                            else
                            label_14023fc9d:
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm1, zmm15, 0x32), 0x84)
                                
                                if ((temp0_2056 & 8) != 0)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm1, zmm15, 0x23), 0x24)
                        
                        zmm14 = var_4b8_3
                        zmm0 = _mm_add_epi64(var_4a8_2, zmm14)
                        zmm1 = __paddq_xmmdq_memdq(var_558_6, var_588_3)
                        zmm5 = data_1434426c0
                        zmm1 = __paddq_xmmdq_memdq(zmm1, var_468_4)
                        zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm0, var_418_3), zmm5)
                        zmm1 = _mm_add_epi64(zmm1, zmm5)
                        zmm5 = _mm_shuffle_epi32(var_348_1, 0x50) & zmm1
                        zmm1 = _mm_shuffle_epi32(var_348_1, 0xfa) & zmm0
                        int64_t rax_292 = zmm5[0].q
                        int64_t rcx_82 = _mm_shuffle_epi32(zmm5, 0x4e).q
                        int64_t rbx_70 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        zmm1 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_292)), zx.q(*(arg4 + rcx_82))), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm1.q)), zx.o(*(arg4 + rbx_70))[0].q)
                                .q)
                        zmm0 = _mm_srli_epi32(zmm1, 0x15)
                        zmm5 = _mm_srli_epi32(zmm1, 0xa) & data_143442480
                        zmm6 = data_143442440
                        zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm6))
                        zmm0 = data_143442690
                        zmm7 = _mm_mul_ps(var_358_1, _mm_div_ps(zmm2, zmm0))
                        zmm8 = _mm_add_ps(zmm8, zmm7)
                        zmm5 = _mm_add_epi32(zmm5, zmm6)
                        
                        if ((temp0_1474 & 1) == 0)
                            zmm5 = _mm_cvtepi32_ps(zmm5)
                            arg6 = var_5a8_5
                            
                            if ((temp0_1474 & 2) != 0)
                                goto label_1402410bd
                            
                            goto label_14023fec8
                        
                        var_638.d = zmm8.d
                        zmm5 = _mm_cvtepi32_ps(zmm5)
                        arg6 = var_5a8_5
                        
                        if ((temp0_1474 & 2) != 0)
                        label_1402410bd:
                            var_638:4.d = _mm_shuffle_epi32(zmm8, 0xe5).d
                            zmm5 = _mm_div_ps(zmm5, zmm0)
                            zmm6 = var_5b8_1
                            
                            if ((temp0_1474 & 4) == 0)
                                goto label_14023fedc
                            
                            goto label_1402410dd
                        
                    label_14023fec8:
                        zmm5 = _mm_div_ps(zmm5, zmm0)
                        zmm6 = var_5b8_1
                        
                        if ((temp0_1474 & 4) != 0)
                        label_1402410dd:
                            var_638:8.d = _mm_shuffle_epi32(zmm8, 0x4e).d
                            zmm1 &= data_143442680
                            zmm3 = _mm_mul_ps(zmm3, zmm5)
                            
                            if ((temp0_1474 & 8) != 0)
                                var_638:0xc.d = _mm_shuffle_epi32(zmm8, 0xe7).d
                        else
                        label_14023fedc:
                            zmm1 &= data_143442680
                            zmm3 = _mm_mul_ps(zmm3, zmm5)
                            
                            if ((temp0_1474 & 8) != 0)
                                var_638:0xc.d = _mm_shuffle_epi32(zmm8, 0xe7).d
                        
                        zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                        zmm2 = _mm_add_ps(var_3e8_1, zmm3)
                        zmm5 = zx.o(0)
                        
                        if ((temp0_1474 & 1) == 0)
                            zmm0 = _mm_cvtepi32_ps(zmm1)
                            zmm3 = var_3c8_2
                            
                            if ((temp0_1474 & 2) != 0)
                                goto label_14024111a
                            
                            goto label_14023ff29
                        
                        var_628[0] = zmm2.d
                        zmm0 = _mm_cvtepi32_ps(zmm1)
                        zmm3 = var_3c8_2
                        
                        if ((temp0_1474 & 2) == 0)
                        label_14023ff29:
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_1474 & 4) != 0)
                                var_628[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                        else
                        label_14024111a:
                            var_628[1] = _mm_shuffle_epi32(zmm2, 0xe5).d
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_1474 & 4) != 0)
                                var_628[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                        
                        zmm15 = _mm_mul_ps(zmm15, zmm0)
                        zmm8 = _mm_mul_ps(zmm8, zmm8)
                        zmm0 = data_142d3f670
                        
                        if ((temp0_1474 & 8) != 0)
                            var_628[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                        
                        zmm4 = _mm_add_ps(zmm4, zmm15)
                        zmm0 = _mm_sub_ps(zmm0, zmm8)
                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((temp0_1474 & 1) != 0)
                            var_618[0] = zmm4[0]
                        
                        zmm0 = _mm_sub_ps(zmm0, zmm2)
                        zmm1 = _mm_mul_ps(zmm4, zmm4)
                        zmm15 = var_558_6
                        zmm8 = var_588_3
                        
                        if ((temp0_1474 & 2) == 0)
                            zmm0 = _mm_sub_ps(zmm0, zmm1)
                            
                            if ((temp0_1474 & 4) != 0)
                                goto label_14024114f
                            
                            goto label_14023ffa2
                        
                        var_618[1] = _mm_shuffle_epi32(zmm4, 0xe5).d
                        zmm0 = _mm_sub_ps(zmm0, zmm1)
                        
                        if ((temp0_1474 & 4) != 0)
                        label_14024114f:
                            var_618[2] = _mm_shuffle_epi32(zmm4, 0x4e).d
                            zmm5 = _mm_cmpeq_ps(zmm5, zmm0, 1)
                            zmm0 = _mm_sqrt_ps(zmm0)
                            
                            if ((temp0_1474 & 8) == 0)
                                goto label_14023ffb1
                            
                            goto label_140241169
                        
                    label_14023ffa2:
                        zmm5 = _mm_cmpeq_ps(zmm5, zmm0, 1)
                        zmm0 = _mm_sqrt_ps(zmm0)
                        
                        if ((temp0_1474 & 8) == 0)
                        label_14023ffb1:
                            zmm5 = _mm_and_ps(zmm5, zmm0)
                            
                            if ((temp0_1474 & 1) != 0)
                                goto label_14024117a
                            
                            goto label_14023ffbe
                        
                    label_140241169:
                        var_618[3] = _mm_shuffle_epi32(zmm4, 0xe7).d
                        zmm5 = _mm_and_ps(zmm5, zmm0)
                        
                        if ((temp0_1474 & 1) != 0)
                        label_14024117a:
                            var_608.d = zmm5[0]
                            zmm4 = var_428_4
                            
                            if ((temp0_1474 & 2) == 0)
                                goto label_14023ffcd
                            
                            goto label_140241196
                        
                    label_14023ffbe:
                        zmm4 = var_428_4
                        
                        if ((temp0_1474 & 2) == 0)
                        label_14023ffcd:
                            
                            if ((temp0_1474 & 4) != 0)
                                goto label_1402411a9
                            
                            goto label_14023ffd5
                        
                    label_140241196:
                        var_608:4.d = _mm_shuffle_epi32(zmm5, 0xe5).d
                        
                        if ((temp0_1474 & 4) == 0)
                        label_14023ffd5:
                            
                            if ((temp0_1474 & 8) != 0)
                                var_608:0xc.d = _mm_shuffle_epi32(zmm5, 0xe7).d
                        else
                        label_1402411a9:
                            var_608:8.d = _mm_shuffle_epi32(zmm5, 0x4e).d
                            
                            if ((temp0_1474 & 8) != 0)
                                var_608:0xc.d = _mm_shuffle_epi32(zmm5, 0xe7).d
                    
                    zmm4 ^= arg6
                    zmm11 = var_4c8_4
                    arg6 = var_568_4
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm4 & zmm6, 0x1f)) != 0)
                        zmm1 = __pcmpeqd_xmmdq_memdq(data_143442ac0, var_478_2)
                        zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm1 & zmm6, 0x1f), 0x1f)
                        char temp0_2134 = _mm_movemask_ps(zmm0)
                        
                        if (temp0_2134 != 0)
                            int32_t var_428_5[0x4] = zmm4
                            zmm2 = _mm_add_epi64(var_4a8_2, zmm14)
                            zmm3 = _mm_add_epi64(zmm15, zmm8)
                            zmm4 = data_1434426c0
                            zmm3 = __paddq_xmmdq_memdq(zmm3, var_468_4)
                            zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, var_418_3), zmm4)
                            zmm3 = _mm_add_epi64(zmm3, zmm4)
                            zmm4 = _mm_shuffle_epi32(zmm0, 0x50) & zmm3
                            zmm0 = _mm_shuffle_epi32(zmm0, 0xfa) & zmm2
                            int64_t rcx_83 = zmm4[0].q
                            int64_t rdx_8 = _mm_shuffle_epi32(zmm4, 0x4e).q
                            int64_t rbx_71 = _mm_shuffle_epi32(zmm0, 0x4e).q
                            zmm6 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zx.o(*(arg4 + rcx_83)), zx.q(*(arg4 + rdx_8))), 
                                _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), zx.q(*(arg4 + rbx_71)))
                                    .q)
                            zmm2 = _mm_srli_epi32(zmm6, 0x15)
                            zmm0 = _mm_srli_epi32(zmm6, 5)
                            zmm13 = data_143442600
                            zmm5 = data_143442610
                            zmm3 = (zmm2 & zmm5) | (zmm0 & zmm13)
                            zmm0 = data_143442320
                            zmm8 = data_143442330
                            zmm2 = _mm_add_epi32(zmm2 & zmm0, zmm8) | zmm3
                            
                            if ((temp0_2134 & 1) != 0)
                                var_638.d = zmm2.d
                            
                            uint32_t temp0_2151[0x4] = _mm_srli_epi32(zmm6, 0xa)
                            zmm4 = _mm_slli_epi32(zmm6, 6)
                            
                            if ((temp0_2134 & 2) != 0)
                                zmm7 = _mm_shuffle_epi32(zmm2, 0xe5)
                                var_638:4.d = zmm7[0]
                                arg6 = var_568_4
                                zmm11 = var_4c8_4
                            
                            zmm4 &= zmm13
                            zmm5 &= temp0_2151
                            zmm0 &= temp0_2151
                            
                            if ((temp0_2134 & 4) == 0)
                                zmm0 = _mm_add_epi32(zmm0, zmm8)
                                zmm4 |= zmm5
                                
                                if ((temp0_2134 & 8) != 0)
                                    goto label_1402412f8
                                
                                goto label_140240192
                            
                            var_638:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                            zmm0 = _mm_add_epi32(zmm0, zmm8)
                            zmm4 |= zmm5
                            
                            if ((temp0_2134 & 8) != 0)
                            label_1402412f8:
                                var_638:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                                zmm4 |= zmm0
                                zmm8 = var_588_3
                                
                                if ((temp0_2134 & 1) == 0)
                                    goto label_1402401ac
                                
                                goto label_140241314
                            
                        label_140240192:
                            zmm4 |= zmm0
                            zmm8 = var_588_3
                            
                            if ((temp0_2134 & 1) != 0)
                            label_140241314:
                                var_628[0] = zmm4[0]
                                zmm5 = _mm_slli_epi32(zmm6, 0x11)
                                
                                if ((temp0_2134 & 2) != 0)
                                    var_628[1] = _mm_shuffle_epi32(zmm4, 0xe5).d
                            else
                            label_1402401ac:
                                zmm5 = _mm_slli_epi32(zmm6, 0x11)
                                
                                if ((temp0_2134 & 2) != 0)
                                    var_628[1] = _mm_shuffle_epi32(zmm4, 0xe5).d
                            
                            zmm5 &= data_143442630
                            zmm0 = data_143442620 & zmm6
                            zmm6 &= data_143442640
                            
                            if ((temp0_2134 & 4) != 0)
                                var_628[2] = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                            
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434423a0)
                            zmm2 = _mm_mul_ps(zmm2, zmm2)
                            zmm3 = data_142d3f670
                            
                            if ((temp0_2134 & 8) != 0)
                                var_628[3] = _mm_shuffle_epi32(zmm4, 0xe7).d
                            
                            zmm5 = zmm5 | zmm6 | zmm0
                            zmm3 = _mm_sub_ps(zmm3, zmm2)
                            zmm4 = _mm_mul_ps(zmm4, zmm4)
                            
                            if ((temp0_2134 & 1) != 0)
                                var_618[0] = zmm5[0]
                            
                            zmm3 = _mm_sub_ps(zmm3, zmm4)
                            zmm0 = _mm_mul_ps(zmm5, zmm5)
                            zmm6 = var_5b8_1
                            
                            if ((temp0_2134 & 2) != 0)
                                var_618[1] = _mm_shuffle_epi32(zmm5, 0xe5).d
                            
                            zmm3 = _mm_sub_ps(zmm3, zmm0)
                            zmm4 = var_428_5
                            
                            if ((temp0_2134 & 4) == 0)
                                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                                zmm2 = _mm_sqrt_ps(zmm3)
                                
                                if ((temp0_2134 & 8) != 0)
                                    goto label_14024134f
                                
                                goto label_14024026c
                            
                            var_618[2] = _mm_shuffle_epi32(zmm5, 0x4e).d
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            zmm2 = _mm_sqrt_ps(zmm3)
                            
                            if ((temp0_2134 & 8) != 0)
                            label_14024134f:
                                var_618[3] = _mm_shuffle_epi32(zmm5, 0xe7)[0]
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                
                                if ((temp0_2134 & 1) == 0)
                                    goto label_140240279
                                
                                goto label_140241360
                            
                        label_14024026c:
                            zmm0 = _mm_and_ps(zmm0, zmm2)
                            
                            if ((temp0_2134 & 1) == 0)
                            label_140240279:
                                zmm3 = var_3c8_2
                                
                                if ((temp0_2134 & 2) != 0)
                                    goto label_14024137c
                                
                                goto label_14024028a
                            
                        label_140241360:
                            var_608.d = zmm0.d
                            zmm3 = var_3c8_2
                            
                            if ((temp0_2134 & 2) != 0)
                            label_14024137c:
                                var_608:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                                zmm13 = var_488_3
                                
                                if ((temp0_2134 & 4) == 0)
                                    goto label_14024029a
                                
                                goto label_140241399
                            
                        label_14024028a:
                            zmm13 = var_488_3
                            
                            if ((temp0_2134 & 4) != 0)
                            label_140241399:
                                var_608:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                                
                                if ((temp0_2134 & 8) != 0)
                                    var_608:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_14024029a:
                                
                                if ((temp0_2134 & 8) != 0)
                                    var_608:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                        
                        zmm4 = (zmm4 ^ zmm1) & zmm6
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(zmm4, 0x1f)) != 0)
                            zmm1 = __pcmpeqd_xmmdq_memdq(data_142fc95e0, var_478_2)
                            zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm4 & zmm1, 0x1f), 0x1f)
                            char temp0_2176 = _mm_movemask_ps(zmm0)
                            
                            if (temp0_2176 != 0)
                                int32_t var_428_6[0x4] = zmm4
                                zmm13 = zmm3
                                zmm2 = _mm_add_epi64(var_4a8_2, zmm14)
                                zmm3 = _mm_add_epi64(zmm15, zmm8)
                                zmm4 = data_1434426c0
                                zmm3 = __paddq_xmmdq_memdq(zmm3, var_468_4)
                                zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm2, var_418_3), zmm4)
                                zmm3 = _mm_add_epi64(zmm3, zmm4)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0x50) & zmm3
                                zmm0 = _mm_shuffle_epi32(zmm0, 0xfa) & zmm2
                                int64_t rcx_84 = zmm4[0].q
                                int64_t rdx_9 = _mm_shuffle_epi32(zmm4, 0x4e).q
                                int64_t rbx_72 = _mm_shuffle_epi32(zmm0, 0x4e).q
                                zmm2 = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(zx.o(*(arg4 + rcx_84)), 
                                        zx.q(*(arg4 + rdx_9))), 
                                    _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), 
                                    zx.o(*(arg4 + rbx_72))[0].q).q)
                                uint32_t temp0_2190[0x4] = _mm_srli_epi32(zmm2, 0x15)
                                zmm0 = _mm_srli_epi32(zmm2, 0xa)
                                zmm5 = data_143442440
                                zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(temp0_2190, zmm5))
                                zmm4 = data_143442690
                                zmm3 = _mm_div_ps(zmm3, zmm4)
                                
                                if ((temp0_2176 & 1) == 0)
                                    zmm0 &= data_143442480
                                    
                                    if ((temp0_2176 & 2) != 0)
                                        goto label_1402413f0
                                    
                                    goto label_1402403d5
                                
                                var_638.d = zmm3[0]
                                zmm0 &= data_143442480
                                
                                if ((temp0_2176 & 2) != 0)
                                label_1402413f0:
                                    var_638:4.d = _mm_shuffle_epi32(zmm3, 0xe5).d
                                    zmm6 = var_5b8_1
                                    zmm0 = _mm_add_epi32(zmm0, zmm5)
                                    
                                    if ((temp0_2176 & 4) == 0)
                                        goto label_1402403e1
                                    
                                    goto label_140241410
                                
                            label_1402403d5:
                                zmm0 = _mm_add_epi32(zmm0, zmm5)
                                
                                if ((temp0_2176 & 4) == 0)
                                label_1402403e1:
                                    zmm0 = _mm_cvtepi32_ps(zmm0)
                                    
                                    if ((temp0_2176 & 8) != 0)
                                        goto label_140241426
                                    
                                    goto label_1402403ec
                                
                            label_140241410:
                                var_638:8.d = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                
                                if ((temp0_2176 & 8) != 0)
                                label_140241426:
                                    var_638:0xc.d = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                                    zmm0 = _mm_div_ps(zmm0, zmm4)
                                    
                                    if ((temp0_2176 & 1) == 0)
                                        goto label_1402403f7
                                    
                                    goto label_140241437
                                
                            label_1402403ec:
                                zmm0 = _mm_div_ps(zmm0, zmm4)
                                
                                if ((temp0_2176 & 1) == 0)
                                label_1402403f7:
                                    zmm2 &= data_143442680
                                    
                                    if ((temp0_2176 & 2) != 0)
                                        goto label_140241452
                                    
                                    goto label_140240407
                                
                            label_140241437:
                                var_628[0] = zmm0.d
                                zmm2 &= data_143442680
                                
                                if ((temp0_2176 & 2) == 0)
                                label_140240407:
                                    zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                                    
                                    if ((temp0_2176 & 4) != 0)
                                        var_628[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                else
                                label_140241452:
                                    var_628[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                                    zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                                    
                                    if ((temp0_2176 & 4) != 0)
                                        var_628[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                
                                zmm2 = _mm_cvtepi32_ps(zmm2)
                                zmm3 = _mm_mul_ps(zmm3, zmm3)
                                zmm4 = data_142d3f670
                                
                                if ((temp0_2176 & 8) != 0)
                                    var_628[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                                
                                zmm2 = __divps_xmmps_memps(zmm2, data_1434426a0)
                                zmm4 = _mm_sub_ps(zmm4, zmm3)
                                zmm0 = _mm_mul_ps(zmm0, zmm0)
                                
                                if ((temp0_2176 & 1) != 0)
                                    var_618[0] = zmm2.d
                                
                                zmm4 = _mm_sub_ps(zmm4, zmm0)
                                zmm0 = _mm_mul_ps(zmm2, zmm2)
                                
                                if ((temp0_2176 & 2) == 0)
                                    zmm4 = _mm_sub_ps(zmm4, zmm0)
                                    zmm0 = zx.o(0)
                                    
                                    if ((temp0_2176 & 4) != 0)
                                        goto label_14024148b
                                    
                                    goto label_140240470
                                
                                var_618[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                zmm4 = _mm_sub_ps(zmm4, zmm0)
                                zmm0 = zx.o(0)
                                
                                if ((temp0_2176 & 4) != 0)
                                label_14024148b:
                                    var_618[2] = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                    zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                    zmm3 = _mm_sqrt_ps(zmm4)
                                    
                                    if ((temp0_2176 & 8) == 0)
                                        goto label_14024047f
                                    
                                    goto label_1402414a5
                                
                            label_140240470:
                                zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                zmm3 = _mm_sqrt_ps(zmm4)
                                
                                if ((temp0_2176 & 8) == 0)
                                label_14024047f:
                                    zmm0 = _mm_and_ps(zmm0, zmm3)
                                    zmm4 = var_428_6
                                    
                                    if ((temp0_2176 & 1) != 0)
                                        goto label_1402414bf
                                    
                                    goto label_140240495
                                
                            label_1402414a5:
                                var_618[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                                zmm0 = _mm_and_ps(zmm0, zmm3)
                                zmm4 = var_428_6
                                
                                if ((temp0_2176 & 1) != 0)
                                label_1402414bf:
                                    var_608.d = zmm0.d
                                    zmm3 = zmm13
                                    
                                    if ((temp0_2176 & 2) == 0)
                                        goto label_1402404a2
                                    
                                    goto label_1402414d7
                                
                            label_140240495:
                                zmm3 = zmm13
                                
                                if ((temp0_2176 & 2) == 0)
                                label_1402404a2:
                                    zmm13 = var_488_3
                                    
                                    if ((temp0_2176 & 4) != 0)
                                        goto label_1402414f4
                                    
                                    goto label_1402404b2
                                
                            label_1402414d7:
                                var_608:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                                zmm13 = var_488_3
                                
                                if ((temp0_2176 & 4) == 0)
                                label_1402404b2:
                                    
                                    if ((temp0_2176 & 8) != 0)
                                        var_608:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                else
                                label_1402414f4:
                                    var_608:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                                    
                                    if ((temp0_2176 & 8) != 0)
                                        var_608:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                            
                            zmm1 &= not.o(zmm4)
                            
                            if (_mm_movemask_ps(_mm_slli_epi32(zmm1, 0x1f)) != 0)
                                zmm2 = __pcmpeqd_xmmdq_memdq(data_143442ad0, var_478_2)
                                char temp0_2217 = _mm_movemask_ps(_mm_slli_epi32(zmm4 & zmm2, 0x1f))
                                
                                if (temp0_2217 != 0)
                                    if ((temp0_2217 & 1) == 0)
                                        if ((temp0_2217 & 2) != 0)
                                            goto label_140242f07
                                        
                                        goto label_140240511
                                    
                                    var_638.d = 0
                                    
                                    if ((temp0_2217 & 2) != 0)
                                    label_140242f07:
                                        var_638:4.d = 0
                                        
                                        if ((temp0_2217 & 4) == 0)
                                            goto label_140240519
                                        
                                        goto label_140242f17
                                    
                                label_140240511:
                                    
                                    if ((temp0_2217 & 4) == 0)
                                    label_140240519:
                                        
                                        if ((temp0_2217 & 8) != 0)
                                            goto label_140242f27
                                        
                                        goto label_140240521
                                    
                                label_140242f17:
                                    var_638:8.d = 0
                                    
                                    if ((temp0_2217 & 8) != 0)
                                    label_140242f27:
                                        var_638:0xc.d = 0
                                        
                                        if ((temp0_2217 & 1) == 0)
                                            goto label_140240529
                                        
                                        goto label_140242f37
                                    
                                label_140240521:
                                    
                                    if ((temp0_2217 & 1) == 0)
                                    label_140240529:
                                        
                                        if ((temp0_2217 & 2) != 0)
                                            goto label_140242f47
                                        
                                        goto label_140240531
                                    
                                label_140242f37:
                                    var_628[0] = 0
                                    
                                    if ((temp0_2217 & 2) != 0)
                                    label_140242f47:
                                        var_628[1] = 0
                                        
                                        if ((temp0_2217 & 4) == 0)
                                            goto label_140240539
                                        
                                        goto label_140242f57
                                    
                                label_140240531:
                                    
                                    if ((temp0_2217 & 4) == 0)
                                    label_140240539:
                                        
                                        if ((temp0_2217 & 8) != 0)
                                            goto label_140242f67
                                        
                                        goto label_140240541
                                    
                                label_140242f57:
                                    var_628[2] = 0
                                    
                                    if ((temp0_2217 & 8) != 0)
                                    label_140242f67:
                                        var_628[3] = 0
                                        
                                        if ((temp0_2217 & 1) == 0)
                                            goto label_140240549
                                        
                                        goto label_140242f77
                                    
                                label_140240541:
                                    
                                    if ((temp0_2217 & 1) == 0)
                                    label_140240549:
                                        
                                        if ((temp0_2217 & 2) != 0)
                                            goto label_140242f87
                                        
                                        goto label_140240551
                                    
                                label_140242f77:
                                    var_618[0] = 0
                                    
                                    if ((temp0_2217 & 2) != 0)
                                    label_140242f87:
                                        var_618[1] = 0
                                        
                                        if ((temp0_2217 & 4) == 0)
                                            goto label_140240559
                                        
                                        goto label_140242f97
                                    
                                label_140240551:
                                    
                                    if ((temp0_2217 & 4) == 0)
                                    label_140240559:
                                        
                                        if ((temp0_2217 & 8) != 0)
                                            goto label_140242fa7
                                        
                                        goto label_140240561
                                    
                                label_140242f97:
                                    var_618[2] = 0
                                    
                                    if ((temp0_2217 & 8) != 0)
                                    label_140242fa7:
                                        var_618[3] = 0
                                        
                                        if ((temp0_2217 & 1) == 0)
                                            goto label_140240569
                                        
                                        goto label_140242fb7
                                    
                                label_140240561:
                                    
                                    if ((temp0_2217 & 1) == 0)
                                    label_140240569:
                                        
                                        if ((temp0_2217 & 2) != 0)
                                            goto label_140242fc7
                                        
                                        goto label_140240571
                                    
                                label_140242fb7:
                                    var_608.d = 0x3f800000
                                    
                                    if ((temp0_2217 & 2) != 0)
                                    label_140242fc7:
                                        var_608:4.d = 0x3f800000
                                        
                                        if ((temp0_2217 & 4) == 0)
                                            goto label_140240579
                                        
                                        goto label_140242fd7
                                    
                                label_140240571:
                                    
                                    if ((temp0_2217 & 4) != 0)
                                    label_140242fd7:
                                        var_608:8.d = 0x3f800000
                                        
                                        if ((temp0_2217 & 8) != 0)
                                            var_608:0xc.d = 0x3f800000
                                    else
                                    label_140240579:
                                        
                                        if ((temp0_2217 & 8) != 0)
                                            var_608:0xc.d = 0x3f800000
                                
                                char temp0_2219 =
                                    _mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm1), 0x1f))
                                
                                if (temp0_2219 != 0)
                                    if ((temp0_2219 & 1) == 0)
                                        if ((temp0_2219 & 2) != 0)
                                            goto label_140242ffc
                                        
                                        goto label_1402405ac
                                    
                                    var_638.d = 0
                                    
                                    if ((temp0_2219 & 2) != 0)
                                    label_140242ffc:
                                        var_638:4.d = 0
                                        
                                        if ((temp0_2219 & 4) == 0)
                                            goto label_1402405b4
                                        
                                        goto label_14024300c
                                    
                                label_1402405ac:
                                    
                                    if ((temp0_2219 & 4) == 0)
                                    label_1402405b4:
                                        
                                        if ((temp0_2219 & 8) != 0)
                                            goto label_14024301c
                                        
                                        goto label_1402405bc
                                    
                                label_14024300c:
                                    var_638:8.d = 0
                                    
                                    if ((temp0_2219 & 8) != 0)
                                    label_14024301c:
                                        var_638:0xc.d = 0
                                        
                                        if ((temp0_2219 & 1) == 0)
                                            goto label_1402405c4
                                        
                                        goto label_14024302c
                                    
                                label_1402405bc:
                                    
                                    if ((temp0_2219 & 1) == 0)
                                    label_1402405c4:
                                        
                                        if ((temp0_2219 & 2) != 0)
                                            goto label_14024303c
                                        
                                        goto label_1402405cc
                                    
                                label_14024302c:
                                    var_628[0] = 0
                                    
                                    if ((temp0_2219 & 2) != 0)
                                    label_14024303c:
                                        var_628[1] = 0
                                        
                                        if ((temp0_2219 & 4) == 0)
                                            goto label_1402405d4
                                        
                                        goto label_14024304c
                                    
                                label_1402405cc:
                                    
                                    if ((temp0_2219 & 4) == 0)
                                    label_1402405d4:
                                        
                                        if ((temp0_2219 & 8) != 0)
                                            goto label_14024305c
                                        
                                        goto label_1402405dc
                                    
                                label_14024304c:
                                    var_628[2] = 0
                                    
                                    if ((temp0_2219 & 8) != 0)
                                    label_14024305c:
                                        var_628[3] = 0
                                        
                                        if ((temp0_2219 & 1) == 0)
                                            goto label_1402405e4
                                        
                                        goto label_14024306c
                                    
                                label_1402405dc:
                                    
                                    if ((temp0_2219 & 1) == 0)
                                    label_1402405e4:
                                        
                                        if ((temp0_2219 & 2) != 0)
                                            goto label_14024307c
                                        
                                        goto label_1402405ec
                                    
                                label_14024306c:
                                    var_618[0] = 0
                                    
                                    if ((temp0_2219 & 2) != 0)
                                    label_14024307c:
                                        var_618[1] = 0
                                        
                                        if ((temp0_2219 & 4) == 0)
                                            goto label_1402405f4
                                        
                                        goto label_14024308c
                                    
                                label_1402405ec:
                                    
                                    if ((temp0_2219 & 4) == 0)
                                    label_1402405f4:
                                        
                                        if ((temp0_2219 & 8) != 0)
                                            goto label_14024309c
                                        
                                        goto label_1402405fc
                                    
                                label_14024308c:
                                    var_618[2] = 0
                                    
                                    if ((temp0_2219 & 8) != 0)
                                    label_14024309c:
                                        var_618[3] = 0
                                        
                                        if ((temp0_2219 & 1) == 0)
                                            goto label_140240604
                                        
                                        goto label_1402430ac
                                    
                                label_1402405fc:
                                    
                                    if ((temp0_2219 & 1) == 0)
                                    label_140240604:
                                        
                                        if ((temp0_2219 & 2) != 0)
                                            goto label_1402430bc
                                        
                                        goto label_14024060c
                                    
                                label_1402430ac:
                                    var_608.d = 0x3f800000
                                    
                                    if ((temp0_2219 & 2) != 0)
                                    label_1402430bc:
                                        var_608:4.d = 0x3f800000
                                        
                                        if ((temp0_2219 & 4) == 0)
                                            goto label_140240614
                                        
                                        goto label_1402430cc
                                    
                                label_14024060c:
                                    
                                    if ((temp0_2219 & 4) != 0)
                                    label_1402430cc:
                                        var_608:8.d = 0x3f800000
                                        
                                        if ((temp0_2219 & 8) != 0)
                                            var_608:0xc.d = 0x3f800000
                                    else
                                    label_140240614:
                                        
                                        if ((temp0_2219 & 8) != 0)
                                            var_608:0xc.d = 0x3f800000
            
            zmm11 = _mm_cmpeq_epi32(zmm11, arg6) & not.o(zmm6)
            zmm0 = _mm_slli_epi32(zmm11, 0x1f)
            char temp0_2222 = _mm_movemask_ps(zmm0)
            
            if (temp0_2222 != 0)
                uint128_t var_568_5 = zmm0
                int32_t temp0_2228[0x4] = _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(_mm_mul_epu32(var_578_3, arg6), 0xe8), 
                    _mm_shuffle_epi32(
                        __pmuludq_xmmdq_memdq(_mm_shuffle_epi32(arg6, 0xf5), var_388_3), 0xe8).q)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_2228)
                zmm2 = _mm_shuffle_epi32(temp0_2228, 0x4e)
                zmm4 = _mm_unpacklo_epi32(temp0_2228, zmm1.q)
                zmm2 = _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2).q)
                uint128_t var_578_4 = zmm2
                zmm3 &= zmm11
                zmm0 = _mm_slli_epi32(zmm3, 0x1f)
                char temp0_2235 = _mm_movemask_ps(zmm0)
                uint128_t var_4c8_5 = zmm11
                int32_t var_5b8_2[0x4] = zmm4
                zmm6 = var_5a8_5
                uint32_t var_548[0x4]
                uint128_t var_538
                uint128_t var_528
                uint128_t var_518
                
                if (temp0_2235 != 0)
                    zmm5 = var_578_4
                    zmm7 = var_4b8_3
                    int32_t temp0_2236[0x4] = _mm_add_epi64(zmm5, zmm7)
                    zmm11 = zmm4
                    zmm4 = __paddq_xmmdq_memdq(_mm_add_epi64(zmm4, zmm8), var_648_3)
                    zmm12 = __paddq_xmmdq_memdq(temp0_2236, var_458_2)
                    zmm6 = _mm_srai_epi32(_mm_slli_epi32(var_598_4, 0x1f), 0x1f)
                    zmm0 = _mm_srai_epi32(zmm0, 0x1f) & zmm6
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm1 = data_1434426b0
                        zmm2 = _mm_add_epi64(zmm12, zmm1)
                        zmm1 = _mm_add_epi64(zmm1, zmm4)
                        zmm14 = zmm13
                        zmm13 = zmm5
                        arg6 = zmm3
                        zmm3 = _mm_cmpeq_epi32(zmm3, zmm3) ^ zmm0
                        zmm5 = _mm_shuffle_epi32(zmm3, 0x50)
                        zmm4 = (zmm4 & zmm5) | (zmm5 & not.o(zmm1))
                        zmm1 = _mm_shuffle_epi32(zmm3, 0xfa)
                        zmm12 = (zmm12 & zmm1) | (zmm1 & not.o(zmm2))
                        zmm1 = _mm_add_epi64(var_4a8_2, zmm7)
                        int32_t temp0_2250[0x4] = _mm_add_epi64(zmm15, zmm8)
                        zmm3 = data_1434426c0
                        int32_t temp0_2251[0x4] = _mm_add_epi64(temp0_2250, zmm11)
                        zmm1 = _mm_add_epi64(zmm1, zmm13)
                        zmm13 = zmm14
                        zmm1 = _mm_add_epi64(zmm1, zmm3)
                        int32_t temp0_2254[0x4] = _mm_add_epi64(temp0_2251, zmm3)
                        zmm3 = _mm_shuffle_epi32(zmm0, 0x50) & temp0_2254
                        zmm0 = _mm_shuffle_epi32(zmm0, 0xfa) & zmm1
                        int64_t rax_306 = zmm3[0].q
                        zmm1 = _mm_shuffle_epi32(zmm3, 0x4e)
                        zmm3 = arg6
                        int64_t rbx_73 = zmm0.q
                        zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                        zmm1 = __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + rax_306), 0), 
                                    *(arg4 + zmm1.q), 2), 
                                *(arg4 + rbx_73), 4), 
                            *(arg4 + zmm0.q), 6)
                        arg6 = _mm_cvtepi32_ps(zmm1)
                    
                    zmm8 = zmm6 & not.o(data_1434426d0)
                    arg6 = _mm_and_ps(arg6, zmm6)
                    zmm0 = data_1434422d0
                    zmm6 = _mm_cmpeq_epi32(var_598_4 & zmm0, zmm0)
                    zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm3 & zmm6, 0x1f), 0x1f)
                    char temp0_2268 = _mm_movemask_ps(zmm0)
                    
                    if (temp0_2268 == 0)
                        zmm15 = var_558_6
                    else
                        zmm11 = zmm13
                        zmm13 = zmm3
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                        
                        if ((temp0_2268 & 1) != 0)
                            zmm3 = zx.o(*zmm4[0].q)
                        
                        zmm7 = data_1434426b0
                        zmm0 ^= zmm1
                        
                        if ((temp0_2268 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                        
                        zmm1 = _mm_add_epi64(zmm12, zmm7)
                        int32_t temp0_2274[0x4] = _mm_add_epi64(zmm7, zmm4)
                        zmm5 = _mm_shuffle_epi32(zmm0, 0x50)
                        zmm0 = _mm_shuffle_epi32(zmm0, 0xfa)
                        zmm15 = var_558_6
                        
                        if ((temp0_2268 & 4) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*zmm12[0].q), zmm3, 0x30), 0x84)
                        
                        if ((temp0_2268 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm3, 
                                    0x20), 
                                0x24)
                        
                        zmm4 = (zmm4 & zmm5) | (zmm5 & not.o(temp0_2274))
                        zmm2 = (zmm12 & zmm0) | (zmm0 & not.o(zmm1))
                        zmm7 = _mm_cvtepi32_ps(__andps_xmmxud_memxud(zmm3, data_143442cd0))
                        zmm12 = zmm2
                        zmm3 = zmm13
                        zmm13 = zmm11
                    
                    arg6 = _mm_or_ps(arg6, zmm8)
                    zmm0 = data_142fc95e0
                    zmm5 = _mm_cmpeq_epi32(var_598_4 & zmm0, zmm0)
                    char temp0_2287 = _mm_movemask_ps(_mm_slli_epi32(zmm3 & zmm5, 0x1f))
                    
                    if (temp0_2287 == 0)
                        zmm12 = var_438_2
                        zmm8 = var_588_3
                    else
                        if ((temp0_2287 & 1) == 0)
                            if ((temp0_2287 & 2) != 0)
                                goto label_1402411e9
                            
                            goto label_140240982
                        
                        zmm0 = zx.o(*zmm4[0].q)
                        
                        if ((temp0_2287 & 2) != 0)
                        label_1402411e9:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm0, 0), 
                                zmm0, 0xe2)
                            zmm8 = var_588_3
                            
                            if ((temp0_2287 & 4) == 0)
                                goto label_140240992
                            
                            goto label_14024120e
                        
                    label_140240982:
                        zmm8 = var_588_3
                        
                        if ((temp0_2287 & 4) != 0)
                        label_14024120e:
                            zmm0 = _mm_shuffle_ps(zmm0, 
                                _mm_shuffle_ps(zx.o(*zmm12[0].q), zmm0, 0x30), 0x84)
                            
                            if ((temp0_2287 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm0, 
                                        0x20), 
                                    0x24)
                        else
                        label_140240992:
                            
                            if ((temp0_2287 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm0, 
                                        0x20), 
                                    0x24)
                        
                        zmm12 = var_438_2
                        zmm2 = _mm_cvtepi32_ps(__andps_xmmxud_memxud(zmm0, data_143442cd0))
                    
                    zmm3 = data_143442c20
                    arg6 = _mm_add_ps(arg6, zmm3)
                    zmm4 = data_142dd3fa0
                    arg6 = _mm_mul_ps(arg6, zmm4)
                    
                    if ((temp0_2235 & 1) == 0)
                        zmm7 = _mm_and_ps(zmm7, zmm6)
                        zmm6 = __andnps_xmmxud_memxud(zmm6, data_1434426d0)
                        
                        if ((temp0_2235 & 2) != 0)
                            goto label_140240fa2
                        
                        goto label_140240a0e
                    
                    var_548[0] = arg6[0]
                    zmm7 = _mm_and_ps(zmm7, zmm6)
                    zmm6 = __andnps_xmmxud_memxud(zmm6, data_1434426d0)
                    
                    if ((temp0_2235 & 2) != 0)
                    label_140240fa2:
                        var_548[1] = _mm_shuffle_epi32(arg6, 0xe5).d
                        zmm7 = _mm_or_ps(zmm7, zmm6)
                        
                        if ((temp0_2235 & 4) == 0)
                            goto label_140240a19
                        
                        goto label_140240fbc
                    
                label_140240a0e:
                    zmm7 = _mm_or_ps(zmm7, zmm6)
                    
                    if ((temp0_2235 & 4) == 0)
                    label_140240a19:
                        zmm7 = _mm_add_ps(zmm7, zmm3)
                        
                        if ((temp0_2235 & 8) != 0)
                            goto label_140240fd6
                        
                        goto label_140240a24
                    
                label_140240fbc:
                    var_548[2] = _mm_shuffle_epi32(arg6, 0x4e).d
                    zmm7 = _mm_add_ps(zmm7, zmm3)
                    
                    if ((temp0_2235 & 8) != 0)
                    label_140240fd6:
                        var_548[3] = _mm_shuffle_epi32(arg6, 0xe7).d
                        zmm7 = _mm_mul_ps(zmm7, zmm4)
                        
                        if ((temp0_2235 & 1) == 0)
                            goto label_140240a2f
                        
                        goto label_140240fea
                    
                label_140240a24:
                    zmm7 = _mm_mul_ps(zmm7, zmm4)
                    
                    if ((temp0_2235 & 1) == 0)
                    label_140240a2f:
                        zmm2 = _mm_and_ps(zmm2, zmm5)
                        zmm5 = __andnps_xmmxud_memxud(zmm5, data_1434426d0)
                        
                        if ((temp0_2235 & 2) != 0)
                            goto label_14024100a
                        
                        goto label_140240a41
                    
                label_140240fea:
                    var_538.d = zmm7[0]
                    zmm2 = _mm_and_ps(zmm2, zmm5)
                    zmm5 = __andnps_xmmxud_memxud(zmm5, data_1434426d0)
                    
                    if ((temp0_2235 & 2) == 0)
                    label_140240a41:
                        zmm2 = _mm_or_ps(zmm2, zmm5)
                        
                        if ((temp0_2235 & 4) != 0)
                            var_538:8.d = _mm_shuffle_epi32(zmm7, 0x4e).d
                    else
                    label_14024100a:
                        var_538:4.d = _mm_shuffle_epi32(zmm7, 0xe5).d
                        zmm2 = _mm_or_ps(zmm2, zmm5)
                        
                        if ((temp0_2235 & 4) != 0)
                            var_538:8.d = _mm_shuffle_epi32(zmm7, 0x4e).d
                    
                    arg6 = _mm_mul_ps(arg6, arg6)
                    zmm2 = _mm_add_ps(zmm2, zmm3)
                    zmm3 = data_142d3f670
                    
                    if ((temp0_2235 & 8) != 0)
                        var_538:0xc.d = _mm_shuffle_epi32(zmm7, 0xe7).d
                    
                    zmm7 = _mm_mul_ps(zmm7, zmm7)
                    zmm2 = _mm_mul_ps(zmm2, zmm4)
                    zmm3 = _mm_sub_ps(zmm3, arg6)
                    
                    if ((temp0_2235 & 1) != 0)
                        var_528.d = zmm2.d
                    
                    zmm0 = _mm_mul_ps(zmm2, zmm2)
                    zmm3 = _mm_sub_ps(zmm3, zmm7)
                    zmm6 = var_5a8_5
                    zmm4 = var_5b8_2
                    
                    if ((temp0_2235 & 2) != 0)
                        var_528:4.d = _mm_shuffle_epi32(zmm2, 0xe5).d
                    
                    zmm3 = _mm_sub_ps(zmm3, zmm0)
                    zmm11 = var_4c8_5
                    
                    if ((temp0_2235 & 4) == 0)
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 2)
                        zmm1 = _mm_sqrt_ps(zmm3)
                        
                        if ((temp0_2235 & 8) != 0)
                            goto label_140241045
                        
                        goto label_140240ae1
                    
                    var_528:8.d = _mm_shuffle_epi32(zmm2, 0x4e).d
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 2)
                    zmm1 = _mm_sqrt_ps(zmm3)
                    
                    if ((temp0_2235 & 8) != 0)
                    label_140241045:
                        var_528:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_2235 & 1) == 0)
                            goto label_140240aec
                        
                        goto label_140241059
                    
                label_140240ae1:
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_2235 & 1) == 0)
                    label_140240aec:
                        
                        if ((temp0_2235 & 2) != 0)
                            goto label_14024106f
                        
                        goto label_140240af4
                    
                label_140241059:
                    var_518.d = zmm0.d
                    
                    if ((temp0_2235 & 2) != 0)
                    label_14024106f:
                        var_518:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_2235 & 4) == 0)
                            goto label_140240afc
                        
                        goto label_140241085
                    
                label_140240af4:
                    
                    if ((temp0_2235 & 4) != 0)
                    label_140241085:
                        var_518:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                        
                        if ((temp0_2235 & 8) != 0)
                            var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    else
                    label_140240afc:
                        
                        if ((temp0_2235 & 8) != 0)
                            var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm11 & var_448_3, 0x1f)) != 0)
                    zmm14 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, var_478_2)
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm11 & zmm14, 0x1f), 0x1f)
                    char temp0_2323 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_2323 != 0)
                        zmm5 = __paddq_xmmdq_memdq(var_4a8_2, var_4b8_3)
                        int32_t temp0_2326[0x4] = _mm_add_epi64(_mm_add_epi64(zmm15, zmm8), zmm4)
                        zmm5 = __paddq_xmmdq_memdq(zmm5, var_578_4)
                        zmm0 = data_1434426c0
                        zmm5 = _mm_add_epi64(zmm5, zmm0)
                        int32_t temp0_2329[0x4] = _mm_add_epi64(temp0_2326, zmm0)
                        uint32_t temp0_2330[0x4] = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm15 = temp0_2329 & temp0_2330
                        zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm5 &= zmm4
                        int64_t rcx_92 = zmm15[0].q
                        void* rbp_86 = arg4 + rcx_92
                        zmm2 = *(arg4 + rcx_92)
                        int64_t rcx_93 = _mm_shuffle_epi32(zmm15, 0x4e).q
                        void* rbx_74 = arg4 + rcx_93
                        zmm8 = *(arg4 + rcx_93)
                        int64_t rcx_94 = zmm5[0].q
                        void* rdi_17 = arg4 + rcx_94
                        zmm6 = *(arg4 + rcx_94)
                        int64_t rcx_95 = _mm_shuffle_epi32(zmm5, 0x4e).q
                        void* rsi_49 = arg4 + rcx_95
                        zmm1 = *(arg4 + rcx_95)
                        zmm7 = temp0_2330 & zmm0
                        zmm0 &= zmm4
                        zmm5 = *(zmm7[0].q + rbp_86)
                        zmm11 = *(_mm_shuffle_epi32(zmm7, 0x4e)[0].q + rbx_74)
                        zmm13 = *(zmm0.q + rdi_17)
                        zmm15 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rsi_49)
                        zmm0 = data_1434426e0
                        zmm3 = temp0_2330 & zmm0
                        zmm4 &= zmm0
                        arg6 = *(zmm3[0].q + rbp_86)
                        zmm12 = *(_mm_shuffle_epi32(zmm3, 0x4e).q + rbx_74)
                        zmm7 = *(zmm4[0].q + rdi_17)
                        zmm3 = *(_mm_shuffle_epi32(zmm4, 0x4e).q + rsi_49)
                        
                        if ((temp0_2323 & 1) == 0)
                            if ((temp0_2323 & 2) != 0)
                                goto label_140241230
                            
                            goto label_140240c86
                        
                        var_548[0] = zmm2.d
                        
                        if ((temp0_2323 & 2) != 0)
                        label_140241230:
                            var_548[1] = zmm8.d
                            
                            if ((temp0_2323 & 4) == 0)
                                goto label_140240c8e
                            
                            goto label_140241242
                        
                    label_140240c86:
                        
                        if ((temp0_2323 & 4) != 0)
                        label_140241242:
                            var_548[2] = zmm6.d
                            
                            if ((temp0_2323 & 8) != 0)
                            label_140241253:
                                var_548[3] = zmm1.d
                                
                                if ((temp0_2323 & 1) == 0)
                                    goto label_140240c9e
                                
                                goto label_140241264
                        else
                        label_140240c8e:
                            
                            if ((temp0_2323 & 8) != 0)
                                goto label_140241253
                        
                        if ((temp0_2323 & 1) != 0)
                        label_140241264:
                            var_538.d = zmm5[0]
                            zmm2 = _mm_unpacklo_ps(zmm2, zmm8.q)
                            zmm6 = _mm_unpacklo_ps(zmm6, zmm1.q)
                            
                            if ((temp0_2323 & 2) != 0)
                                var_538:4.d = zmm11.d
                        else
                        label_140240c9e:
                            zmm2 = _mm_unpacklo_ps(zmm2, zmm8.q)
                            zmm6 = _mm_unpacklo_ps(zmm6, zmm1.q)
                            
                            if ((temp0_2323 & 2) != 0)
                                var_538:4.d = zmm11.d
                        
                        zmm2 = zmm2.q | zmm6.q << 0x40
                        float temp0_2340[0x4] = _mm_unpacklo_ps(zmm5, zmm11.q)
                        zmm0 = _mm_unpacklo_ps(zmm13, zmm15[0].q)
                        
                        if ((temp0_2323 & 4) != 0)
                            var_538:8.d = zmm13[0]
                        
                        zmm5 = temp0_2340[0].q | zmm0.q << 0x40
                        zmm0 = _mm_unpacklo_ps(arg6, zmm12[0].q)
                        zmm8 = zmm7
                        zmm4 = zmm7
                        zmm7 = zmm3
                        zmm4 = _mm_unpacklo_ps(zmm4, zmm3[0].q)
                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                        zmm11 = var_4c8_5
                        
                        if ((temp0_2323 & 8) != 0)
                            var_538:0xc.d = zmm15[0]
                        
                        zmm0 = zmm0.q | zmm4[0].q << 0x40
                        zmm1 = _mm_sub_ps(data_142d3f670, zmm2)
                        float temp0_2346[0x4] = _mm_mul_ps(zmm5, zmm5)
                        zmm13 = var_488_3
                        
                        if ((temp0_2323 & 1) != 0)
                            var_528.d = arg6[0]
                        
                        zmm1 = _mm_sub_ps(zmm1, temp0_2346)
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        zmm15 = var_558_6
                        zmm4 = var_5b8_2
                        
                        if ((temp0_2323 & 2) != 0)
                            var_528:4.d = zmm12[0]
                        
                        zmm1 = _mm_sub_ps(zmm1, zmm0)
                        zmm6 = var_5a8_5
                        
                        if ((temp0_2323 & 4) != 0)
                            var_528:8.d = zmm8.d
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        zmm12 = var_438_2
                        
                        if ((temp0_2323 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((temp0_2323 & 1) != 0)
                                goto label_140241295
                            
                            goto label_140240d97
                        
                        var_528:0xc.d = zmm7[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_2323 & 1) != 0)
                        label_140241295:
                            var_518.d = zmm0.d
                            
                            if ((temp0_2323 & 2) == 0)
                                goto label_140240d9f
                            
                            goto label_1402412ab
                        
                    label_140240d97:
                        
                        if ((temp0_2323 & 2) == 0)
                        label_140240d9f:
                            
                            if ((temp0_2323 & 4) != 0)
                                goto label_1402412c1
                            
                            goto label_140240da7
                        
                    label_1402412ab:
                        var_518:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_2323 & 4) == 0)
                        label_140240da7:
                            
                            if ((temp0_2323 & 8) != 0)
                                var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_1402412c1:
                            var_518:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                            
                            if ((temp0_2323 & 8) != 0)
                                var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    
                    zmm14 ^= var_448_3
                    zmm0 = _mm_slli_epi32(zmm11 & zmm14, 0x1f)
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm8 = _mm_srai_epi32(_mm_slli_epi32(zmm11 & zmm6, 0x1f), 0x1f)
                        char temp0_2358 = _mm_movemask_ps(zmm8)
                        
                        if (temp0_2358 != 0)
                            zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_598_4, 0x1f), 0x1f) & zmm6
                            zmm4 = _mm_srai_epi32(var_568_5, 0x1f) & zmm1
                            uint32_t temp0_2362 = _mm_movemask_ps(zmm4)
                            uint32_t var_448_4[0x4] = zmm14
                            uint32_t var_568_6[0x4]
                            uint128_t var_468_5
                            
                            if (temp0_2362 == 0)
                                var_568_6 = zx.o(0)
                                var_468_5 = zx.o(0)
                                zmm14 = var_458_2
                            else
                                char rdi_18 = temp0_2362.b
                                
                                if ((rdi_18 & 1) == 0)
                                    if ((rdi_18 & 2) != 0)
                                        goto label_140241532
                                    
                                    goto label_140240e54
                                
                                zmm0 = var_648_3
                                zmm7 = *zmm0.q
                                
                                if ((rdi_18 & 2) != 0)
                                label_140241532:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_648_3, 0x4e).q, zmm7, 
                                            0), 
                                        zmm7, 0xe2)
                                    zmm7 = zmm0
                                    
                                    if ((rdi_18 & 4) == 0)
                                        goto label_140240e5e
                                    
                                    goto label_140241555
                                
                            label_140240e54:
                                
                                if ((rdi_18 & 4) != 0)
                                label_140241555:
                                    zmm0 = _mm_shuffle_ps(*var_458_2.q, zmm7, 0x30)
                                    zmm7 = _mm_shuffle_ps(zmm7, zmm0, 0x84)
                                    
                                    if ((rdi_18 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_458_2, 0x4e).q, zmm7, 
                                            0x20)
                                        zmm7 = _mm_shuffle_ps(zmm7, zmm0, 0x24)
                                else
                                label_140240e5e:
                                    
                                    if ((rdi_18 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_458_2, 0x4e).q, zmm7, 
                                            0x20)
                                        zmm7 = _mm_shuffle_ps(zmm7, zmm0, 0x24)
                                
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                char temp0_2367 = _mm_movemask_ps(zmm1)
                                zmm3 = zx.o(0)
                                
                                if ((temp0_2367 & 1) != 0)
                                    zmm3[0] = zmm7[0]
                                
                                arg6 = data_1434426c0
                                zmm4 ^= zmm0
                                
                                if ((temp0_2367 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm3, 1), zmm3, 0xe2)
                                
                                zmm1 = _mm_add_epi64(var_648_3, arg6)
                                zmm2 = _mm_shuffle_epi32(zmm4, 0x50)
                                
                                if ((temp0_2367 & 4) != 0)
                                    zmm3 =
                                        _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm7, zmm3, 0x32), 0x84)
                                
                                zmm0 = zmm2 & not.o(zmm1)
                                
                                if ((temp0_2367 & 8) != 0)
                                    zmm7 = _mm_shuffle_ps(zmm7, zmm3, 0x23)
                                    zmm3 = _mm_shuffle_ps(zmm3, zmm7, 0x24)
                                
                                var_568_6 = zmm3
                                zmm14 = var_458_2
                                zmm1 = _mm_add_epi64(zmm14, arg6)
                                uint32_t temp0_2377[0x4] = _mm_shuffle_epi32(zmm4, 0xfa)
                                zmm5 = (var_648_3 & zmm2) | zmm0
                                
                                if ((rdi_18 & 1) != 0)
                                    zmm7 = *zmm5[0].q
                                
                                zmm0 = temp0_2377 & not.o(zmm1)
                                zmm4 = zmm14 & temp0_2377
                                
                                if ((rdi_18 & 2) != 0)
                                    zmm7 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm5, 0x4e).q, zmm7, 0), 
                                        zmm7, 0xe2)
                                    zmm4 |= zmm0
                                    
                                    if ((rdi_18 & 4) != 0)
                                    label_1402415a0:
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(*zmm4[0].q, zmm7, 0x30), 0x84)
                                        
                                        if ((rdi_18 & 8) == 0)
                                            goto label_140240f57
                                        
                                        goto label_1402415c0
                                else
                                    zmm4 |= zmm0
                                    
                                    if ((rdi_18 & 4) != 0)
                                        goto label_1402415a0
                                
                                if ((rdi_18 & 8) == 0)
                                label_140240f57:
                                    zmm1 = zx.o(0)
                                    
                                    if ((temp0_2367 & 1) == 0)
                                        goto label_1402415d1
                                    
                                    goto label_140240f64
                                
                            label_1402415c0:
                                zmm7 = _mm_shuffle_ps(zmm7, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e).q, zmm7, 0x20), 
                                    0x24)
                                zmm1 = zx.o(0)
                                
                                if ((temp0_2367 & 1) != 0)
                                label_140240f64:
                                    zmm1.d = zmm7[0]
                                    zmm3 = _mm_slli_epi32(temp0_2377, 0x1f)
                                    zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_2367 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 1), zmm1, 
                                            0xe2)
                                else
                                label_1402415d1:
                                    zmm3 = _mm_slli_epi32(temp0_2377, 0x1f)
                                    zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_2367 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 1), zmm1, 
                                            0xe2)
                                
                                zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                zmm4 = _mm_add_epi64(zmm4, arg6)
                                zmm5 = _mm_add_epi64(zmm5, arg6)
                                
                                if ((temp0_2367 & 4) != 0)
                                    zmm1 =
                                        _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm7, zmm1, 0x32), 0x84)
                                
                                zmm6 = var_5a8_5
                                
                                if ((temp0_2367 & 8) != 0)
                                    zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0x23)
                                    zmm1 = _mm_shuffle_ps(zmm1, zmm7, 0x24)
                                
                                var_468_5 = zmm1
                                zmm11 = var_4c8_5
                                var_648_3 = (var_648_3 & zmm2) | (zmm2 & not.o(zmm5))
                                zmm14 = (zmm14 & zmm3) | (zmm3 & not.o(zmm4))
                            
                            zmm0 = data_1434422d0
                            zmm1 = _mm_cmpeq_epi32(var_598_4 & zmm0, zmm0) & zmm6
                            zmm3 = _mm_srai_epi32(_mm_slli_epi32(zmm11 & zmm1, 0x1f), 0x1f)
                            char temp0_2482 = _mm_movemask_ps(zmm3)
                            uint128_t var_458_3
                            
                            if (temp0_2482 == 0)
                                var_458_3 = zx.o(0)
                                zmm12 = zx.o(0)
                            else
                                if ((temp0_2482 & 1) == 0)
                                    if ((temp0_2482 & 2) != 0)
                                        goto label_14024181c
                                    
                                    goto label_1402416ba
                                
                                zmm0 = var_648_3
                                zmm4 = *zmm0.q
                                
                                if ((temp0_2482 & 2) != 0)
                                label_14024181c:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_648_3, 0x4e).q, zmm4, 
                                            0), 
                                        zmm4, 0xe2)
                                    zmm4 = zmm0
                                    
                                    if ((temp0_2482 & 4) == 0)
                                        goto label_1402416c4
                                    
                                    goto label_140241836
                                
                            label_1402416ba:
                                
                                if ((temp0_2482 & 4) != 0)
                                label_140241836:
                                    zmm0 = _mm_shuffle_ps(*zmm14[0].q, zmm4, 0x30)
                                    zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x84)
                                    
                                    if ((temp0_2482 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, 
                                            zmm4, 0x20)
                                        zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                                else
                                label_1402416c4:
                                    
                                    if ((temp0_2482 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, 
                                            zmm4, 0x20)
                                        zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                                
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                char temp0_2487 = _mm_movemask_ps(zmm1)
                                zmm6 = zx.o(0)
                                
                                if ((temp0_2487 & 1) != 0)
                                    zmm6.d = zmm4[0]
                                
                                arg6 = data_1434426c0
                                zmm3 ^= zmm0
                                
                                if ((temp0_2487 & 2) != 0)
                                    zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm6, 1), zmm6, 0xe2)
                                
                                zmm1 = _mm_add_epi64(var_648_3, arg6)
                                zmm2 = _mm_shuffle_epi32(zmm3, 0x50)
                                
                                if ((temp0_2487 & 4) != 0)
                                    zmm6 =
                                        _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm4, zmm6, 0x32), 0x84)
                                
                                zmm0 = zmm2 & not.o(zmm1)
                                
                                if ((temp0_2487 & 8) != 0)
                                    zmm4 = _mm_shuffle_ps(zmm4, zmm6, 0x23)
                                    zmm6 = _mm_shuffle_ps(zmm6, zmm4, 0x24)
                                
                                zmm1 = _mm_add_epi64(zmm14, arg6)
                                zmm5 = _mm_shuffle_epi32(zmm3, 0xfa)
                                zmm7 = (var_648_3 & zmm2) | zmm0
                                
                                if ((temp0_2482 & 1) != 0)
                                    zmm4 = *zmm7[0].q
                                
                                zmm0 = zmm5 & not.o(zmm1)
                                zmm3 = zmm14 & zmm5
                                
                                if ((temp0_2482 & 2) == 0)
                                    zmm3 |= zmm0
                                    
                                    if ((temp0_2482 & 4) != 0)
                                        goto label_140241881
                                    
                                    goto label_1402417a1
                                
                                zmm4 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm7, 0x4e).q, zmm4, 0), 
                                    zmm4, 0xe2)
                                zmm3 |= zmm0
                                
                                if ((temp0_2482 & 4) != 0)
                                label_140241881:
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(*zmm3[0].q, zmm4, 0x30), 0x84)
                                    var_458_3 = zmm6
                                    
                                    if ((temp0_2482 & 8) == 0)
                                        goto label_1402417af
                                    
                                    goto label_1402418a9
                                
                            label_1402417a1:
                                var_458_3 = zmm6
                                
                                if ((temp0_2482 & 8) == 0)
                                label_1402417af:
                                    zmm12 = zx.o(0)
                                    
                                    if ((temp0_2487 & 1) == 0)
                                        goto label_1402418bb
                                    
                                    goto label_1402417bd
                                
                            label_1402418a9:
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm4, 0x20), 
                                    0x24)
                                zmm12 = zx.o(0)
                                
                                if ((temp0_2487 & 1) != 0)
                                label_1402417bd:
                                    zmm12[0] = zmm4[0]
                                    zmm5 = _mm_slli_epi32(zmm5, 0x1f)
                                    zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_2487 & 2) != 0)
                                        zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm12, 1), 
                                            zmm12, 0xe2)
                                else
                                label_1402418bb:
                                    zmm5 = _mm_slli_epi32(zmm5, 0x1f)
                                    zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_2487 & 2) != 0)
                                        zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm12, 1), 
                                            zmm12, 0xe2)
                                
                                zmm5 = _mm_srai_epi32(zmm5, 0x1f)
                                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                zmm3 = _mm_add_epi64(zmm3, arg6)
                                zmm7 = _mm_add_epi64(zmm7, arg6)
                                
                                if ((temp0_2487 & 4) != 0)
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(zmm4, zmm12, 0x32), 0x84)
                                
                                zmm6 = var_5a8_5
                                
                                if ((temp0_2487 & 8) != 0)
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(zmm4, zmm12, 0x23), 0x24)
                                
                                zmm11 = var_4c8_5
                                var_648_3 = (var_648_3 & zmm2) | (zmm2 & not.o(zmm7))
                                zmm14 = (zmm14 & zmm5) | (zmm5 & not.o(zmm3))
                            
                            zmm0 = data_142fc95e0
                            zmm1 = _mm_cmpeq_epi32(var_598_4 & zmm0, zmm0) & zmm6
                            zmm5 = _mm_srai_epi32(_mm_slli_epi32(zmm11 & zmm1, 0x1f), 0x1f)
                            char temp0_2528 = _mm_movemask_ps(zmm5)
                            zmm4 = zx.o(0)
                            zmm2 = zx.o(0)
                            
                            if (temp0_2528 != 0)
                                zmm3 = zmm1
                                
                                if ((temp0_2528 & 1) == 0)
                                    if ((temp0_2528 & 2) != 0)
                                        goto label_140242c93
                                    
                                    goto label_1402419b1
                                
                                zmm7 = *var_648_3.q
                                
                                if ((temp0_2528 & 2) != 0)
                                label_140242c93:
                                    zmm7 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_648_3, 0x4e).q, zmm7, 
                                            0), 
                                        zmm7, 0xe2)
                                    
                                    if ((temp0_2528 & 4) == 0)
                                        goto label_1402419ba
                                    
                                    goto label_140242cac
                                
                            label_1402419b1:
                                
                                if ((temp0_2528 & 4) != 0)
                                label_140242cac:
                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                        _mm_shuffle_ps(*zmm14[0].q, zmm7, 0x30), 0x84)
                                    
                                    if ((temp0_2528 & 8) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm7, 
                                                0x20), 
                                            0x24)
                                else
                                label_1402419ba:
                                    
                                    if ((temp0_2528 & 8) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm7, 
                                                0x20), 
                                            0x24)
                                
                                zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                                char temp0_2533 = _mm_movemask_ps(zmm3)
                                zmm4 = zx.o(0)
                                
                                if ((temp0_2533 & 1) != 0)
                                    zmm4[0] = zmm7[0]
                                
                                zmm0 = data_1434426c0
                                zmm5 ^= zmm1
                                
                                if ((temp0_2533 & 2) != 0)
                                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm4, 1), zmm4, 0xe2)
                                
                                zmm1 = _mm_add_epi64(var_648_3, zmm0)
                                uint32_t temp0_2537[0x4] = _mm_shuffle_epi32(zmm5, 0x50)
                                
                                if ((temp0_2533 & 4) != 0)
                                    zmm4 =
                                        _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm7, zmm4, 0x32), 0x84)
                                
                                zmm3 = temp0_2537 & not.o(zmm1)
                                
                                if ((temp0_2533 & 8) != 0)
                                    zmm4 =
                                        _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm7, zmm4, 0x23), 0x24)
                                
                                zmm11 = var_4c8_5
                                zmm0 = _mm_add_epi64(zmm0, zmm14)
                                zmm1 = _mm_shuffle_epi32(zmm5, 0xfa)
                                uint128_t var_648_7 = (var_648_3 & temp0_2537) | zmm3
                                
                                if ((temp0_2528 & 1) == 0)
                                    zmm14 &= zmm1
                                    zmm1 &= not.o(zmm0)
                                    
                                    if ((temp0_2528 & 2) != 0)
                                        goto label_140242cf5
                                    
                                    goto label_140241a7e
                                
                                zmm3 = *var_648_7.q
                                zmm14 &= zmm1
                                zmm1 &= not.o(zmm0)
                                
                                if ((temp0_2528 & 2) != 0)
                                label_140242cf5:
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_648_7, 0x4e).q, zmm3, 
                                            0), 
                                        zmm3, 0xe2)
                                    zmm14 |= zmm1
                                    
                                    if ((temp0_2528 & 4) == 0)
                                        goto label_140241a8c
                                    
                                    goto label_140242d06
                                
                            label_140241a7e:
                                zmm14 |= zmm1
                                
                                if ((temp0_2528 & 4) != 0)
                                label_140242d06:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(*zmm14[0].q, zmm3, 0x30), 0x84)
                                    
                                    if ((temp0_2528 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm3, 
                                                0x20), 
                                            0x24)
                                else
                                label_140241a8c:
                                    
                                    if ((temp0_2528 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm3, 
                                                0x20), 
                                            0x24)
                                
                                zmm2 = zx.o(0)
                                
                                if ((temp0_2533 & 1) != 0)
                                    zmm2.d = zmm3[0]
                                    
                                    if ((temp0_2533 & 2) != 0)
                                        goto label_140241ae0
                                    
                                    goto label_140241abc
                                
                                if ((temp0_2533 & 2) != 0)
                                label_140241ae0:
                                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm2, 1), zmm2, 0xe2)
                                    
                                    if ((temp0_2533 & 4) != 0)
                                        goto label_140241ac7
                                    
                                    goto label_140241ae7
                                
                            label_140241abc:
                                
                                if ((temp0_2533 & 4) == 0)
                                label_140241ae7:
                                    
                                    if ((temp0_2533 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zmm3, zmm2, 0x23), 0x24)
                                else
                                label_140241ac7:
                                    zmm2 =
                                        _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm3, zmm2, 0x32), 0x84)
                                    
                                    if ((temp0_2533 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zmm3, zmm2, 0x23), 0x24)
                            
                            zmm0 = __paddq_xmmdq_memdq(var_4a8_2, var_4b8_3)
                            zmm1 = __paddq_xmmdq_memdq(zmm15, var_588_3)
                            zmm3 = data_1434426c0
                            zmm1 = __paddq_xmmdq_memdq(zmm1, var_5b8_2)
                            zmm0 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm0, var_578_4), zmm3)
                            zmm1 = _mm_add_epi64(zmm1, zmm3)
                            zmm3 = _mm_shuffle_epi32(zmm8, 0x50) & zmm1
                            zmm1 = _mm_shuffle_epi32(zmm8, 0xfa) & zmm0
                            int64_t rax_342 = zmm3[0].q
                            int64_t rcx_111 = _mm_shuffle_epi32(zmm3, 0x4e).q
                            int64_t rdi_20 = _mm_shuffle_epi32(zmm1, 0x4e).q
                            zmm1 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_342)), 
                                    zx.q(*(arg4 + rcx_111))), 
                                _mm_unpacklo_epi32(zx.o(*(arg4 + zmm1.q)), 
                                zx.o(*(arg4 + rdi_20))[0].q).q)
                            zmm0 = _mm_srli_epi32(zmm1, 0x15)
                            zmm3 = _mm_srli_epi32(zmm1, 0xa) & data_143442480
                            zmm5 = data_143442440
                            zmm6 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm5))
                            zmm0 = data_143442690
                            zmm6 =
                                _mm_add_ps(var_568_6, _mm_mul_ps(var_468_5, _mm_div_ps(zmm6, zmm0)))
                            zmm3 = _mm_add_epi32(zmm3, zmm5)
                            
                            if ((temp0_2358 & 1) == 0)
                                zmm3 = _mm_cvtepi32_ps(zmm3)
                                zmm14 = var_448_4
                                
                                if ((temp0_2358 & 2) != 0)
                                    goto label_140242b30
                                
                                goto label_140241bf9
                            
                            var_548[0] = zmm6.d
                            zmm3 = _mm_cvtepi32_ps(zmm3)
                            zmm14 = var_448_4
                            
                            if ((temp0_2358 & 2) != 0)
                            label_140242b30:
                                var_548[1] = _mm_shuffle_epi32(zmm6, 0xe5)[0]
                                zmm3 = _mm_div_ps(zmm3, zmm0)
                                
                                if ((temp0_2358 & 4) == 0)
                                    goto label_140241c04
                                
                                goto label_140242b49
                            
                        label_140241bf9:
                            zmm3 = _mm_div_ps(zmm3, zmm0)
                            
                            if ((temp0_2358 & 4) != 0)
                            label_140242b49:
                                var_548[2] = _mm_shuffle_epi32(zmm6, 0x4e).d
                                zmm1 &= data_143442680
                                zmm12 = _mm_mul_ps(zmm12, zmm3)
                                
                                if ((temp0_2358 & 8) != 0)
                                    var_548[3] = _mm_shuffle_epi32(zmm6, 0xe7).d
                            else
                            label_140241c04:
                                zmm1 &= data_143442680
                                zmm12 = _mm_mul_ps(zmm12, zmm3)
                                
                                if ((temp0_2358 & 8) != 0)
                                    var_548[3] = _mm_shuffle_epi32(zmm6, 0xe7).d
                            
                            zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                            float temp0_2579[0x4] = _mm_add_ps(var_458_3, zmm12)
                            
                            if ((temp0_2358 & 1) == 0)
                                zmm0 = _mm_cvtepi32_ps(zmm1)
                                zmm3 = var_498_1
                                
                                if ((temp0_2358 & 2) != 0)
                                    goto label_140242b8d
                                
                                goto label_140241c52
                            
                            var_538.d = temp0_2579[0]
                            zmm0 = _mm_cvtepi32_ps(zmm1)
                            zmm3 = var_498_1
                            
                            if ((temp0_2358 & 2) == 0)
                            label_140241c52:
                                zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                                
                                if ((temp0_2358 & 4) != 0)
                                    var_538:8.d = _mm_shuffle_epi32(temp0_2579, 0x4e).d
                            else
                            label_140242b8d:
                                var_538:4.d = _mm_shuffle_epi32(temp0_2579, 0xe5).d
                                zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                                
                                if ((temp0_2358 & 4) != 0)
                                    var_538:8.d = _mm_shuffle_epi32(temp0_2579, 0x4e).d
                            
                            zmm2 = _mm_mul_ps(zmm2, zmm0)
                            zmm6 = _mm_mul_ps(zmm6, zmm6)
                            zmm0 = data_142d3f670
                            
                            if ((temp0_2358 & 8) != 0)
                                var_538:0xc.d = _mm_shuffle_epi32(temp0_2579, 0xe7).d
                            
                            zmm4 = _mm_add_ps(zmm4, zmm2)
                            zmm0 = _mm_sub_ps(zmm0, zmm6)
                            float temp0_2588[0x4] = _mm_mul_ps(temp0_2579, temp0_2579)
                            
                            if ((temp0_2358 & 1) != 0)
                                var_528.d = zmm4[0]
                            
                            zmm0 = _mm_sub_ps(zmm0, temp0_2588)
                            zmm1 = _mm_mul_ps(zmm4, zmm4)
                            
                            if ((temp0_2358 & 2) == 0)
                                zmm0 = _mm_sub_ps(zmm0, zmm1)
                                zmm12 = var_438_2
                                
                                if ((temp0_2358 & 4) != 0)
                                    goto label_140242bd2
                                
                                goto label_140241cc6
                            
                            var_528:4.d = _mm_shuffle_epi32(zmm4, 0xe5).d
                            zmm0 = _mm_sub_ps(zmm0, zmm1)
                            zmm12 = var_438_2
                            
                            if ((temp0_2358 & 4) != 0)
                            label_140242bd2:
                                var_528:8.d = _mm_shuffle_epi32(zmm4, 0x4e).d
                                arg6 = _mm_cmpeq_ps(zx.o(0), zmm0, 1)
                                zmm0 = _mm_sqrt_ps(zmm0)
                                
                                if ((temp0_2358 & 8) == 0)
                                    goto label_140241cd6
                                
                                goto label_140242bf0
                            
                        label_140241cc6:
                            arg6 = _mm_cmpeq_ps(zx.o(0), zmm0, 1)
                            zmm0 = _mm_sqrt_ps(zmm0)
                            
                            if ((temp0_2358 & 8) == 0)
                            label_140241cd6:
                                arg6 = _mm_and_ps(arg6, zmm0)
                                
                                if ((temp0_2358 & 1) != 0)
                                    goto label_140242c05
                                
                                goto label_140241ce4
                            
                        label_140242bf0:
                            var_528:0xc.d = _mm_shuffle_epi32(zmm4, 0xe7).d
                            arg6 = _mm_and_ps(arg6, zmm0)
                            
                            if ((temp0_2358 & 1) != 0)
                            label_140242c05:
                                var_518.d = arg6[0]
                                zmm4 = var_5b8_2
                                
                                if ((temp0_2358 & 2) == 0)
                                    goto label_140241cf3
                                
                                goto label_140242c26
                            
                        label_140241ce4:
                            zmm4 = var_5b8_2
                            
                            if ((temp0_2358 & 2) == 0)
                            label_140241cf3:
                                var_498_1 = zmm3
                                
                                if ((temp0_2358 & 4) != 0)
                                    goto label_140242c46
                                
                                goto label_140241d06
                            
                        label_140242c26:
                            var_518:4.d = _mm_shuffle_epi32(arg6, 0xe5).d
                            var_498_1 = zmm3
                            
                            if ((temp0_2358 & 4) == 0)
                            label_140241d06:
                                zmm6 = var_5a8_5
                                
                                if ((temp0_2358 & 8) != 0)
                                    var_518:0xc.d = _mm_shuffle_epi32(arg6, 0xe7).d
                            else
                            label_140242c46:
                                var_518:8.d = _mm_shuffle_epi32(arg6, 0x4e).d
                                zmm6 = var_5a8_5
                                
                                if ((temp0_2358 & 8) != 0)
                                    var_518:0xc.d = _mm_shuffle_epi32(arg6, 0xe7).d
                        
                        zmm14 ^= zmm6
                        zmm7 = var_588_3
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(zmm11 & zmm14, 0x1f)) != 0)
                            zmm2 = __pcmpeqd_xmmdq_memdq(data_143442ac0, var_478_2)
                            zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm11 & zmm2, 0x1f), 0x1f)
                            char temp0_2601 = _mm_movemask_ps(zmm0)
                            
                            if (temp0_2601 != 0)
                                zmm1 = __paddq_xmmdq_memdq(var_4a8_2, var_4b8_3)
                                zmm3 = _mm_add_epi64(zmm15, zmm7)
                                zmm5 = zmm4
                                zmm4 = data_1434426c0
                                zmm3 = _mm_add_epi64(zmm3, zmm5)
                                zmm1 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm1, var_578_4), zmm4)
                                zmm3 = _mm_add_epi64(zmm3, zmm4)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0x50) & zmm3
                                zmm0 = _mm_shuffle_epi32(zmm0, 0xfa) & zmm1
                                int64_t rcx_112 = zmm4[0].q
                                int64_t rbp_88 = _mm_shuffle_epi32(zmm4, 0x4e).q
                                int64_t rdi_21 = _mm_shuffle_epi32(zmm0, 0x4e).q
                                zmm6 = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(zx.o(*(arg4 + rcx_112)), 
                                        zx.q(*(arg4 + rbp_88))), 
                                    _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), 
                                    zx.q(*(arg4 + rdi_21))).q)
                                uint32_t temp0_2615[0x4] = _mm_srli_epi32(zmm6, 0x15)
                                zmm0 = _mm_srli_epi32(zmm6, 5)
                                arg6 = data_143442600
                                zmm1 = data_143442610
                                zmm4 = (temp0_2615 & zmm1) | (zmm0 & arg6)
                                zmm0 = data_143442320
                                zmm8 = data_143442330
                                zmm3 = _mm_add_epi32(temp0_2615 & zmm0, zmm8) | zmm4
                                
                                if ((temp0_2601 & 1) != 0)
                                    var_548[0] = zmm3[0]
                                
                                zmm4 = _mm_srli_epi32(zmm6, 0xa)
                                zmm5 = _mm_slli_epi32(zmm6, 6)
                                
                                if ((temp0_2601 & 2) != 0)
                                    var_548[1] = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                                    zmm11 = var_4c8_5
                                
                                zmm5 &= arg6
                                zmm1 &= zmm4
                                zmm0 &= zmm4
                                
                                if ((temp0_2601 & 4) == 0)
                                    zmm0 = _mm_add_epi32(zmm0, zmm8)
                                    zmm5 |= zmm1
                                    
                                    if ((temp0_2601 & 8) != 0)
                                        goto label_140242d4e
                                    
                                    goto label_140241ebd
                                
                                var_548[2] = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                zmm0 = _mm_add_epi32(zmm0, zmm8)
                                zmm5 |= zmm1
                                
                                if ((temp0_2601 & 8) != 0)
                                label_140242d4e:
                                    var_548[3] = _mm_shuffle_epi32(zmm3, 0xe7).d
                                    zmm5 |= zmm0
                                    zmm7 = var_588_3
                                    
                                    if ((temp0_2601 & 1) == 0)
                                        goto label_140241ed6
                                    
                                    goto label_140242d6c
                                
                            label_140241ebd:
                                zmm5 |= zmm0
                                zmm7 = var_588_3
                                
                                if ((temp0_2601 & 1) != 0)
                                label_140242d6c:
                                    var_538.d = zmm5[0]
                                    zmm1 = _mm_slli_epi32(zmm6, 0x11)
                                    
                                    if ((temp0_2601 & 2) != 0)
                                        var_538:4.d = _mm_shuffle_epi32(zmm5, 0xe5).d
                                else
                                label_140241ed6:
                                    zmm1 = _mm_slli_epi32(zmm6, 0x11)
                                    
                                    if ((temp0_2601 & 2) != 0)
                                        var_538:4.d = _mm_shuffle_epi32(zmm5, 0xe5).d
                                
                                zmm1 &= data_143442630
                                zmm0 = data_143442620 & zmm6
                                zmm6 &= data_143442640
                                
                                if ((temp0_2601 & 4) != 0)
                                    var_538:8.d = _mm_shuffle_epi32(zmm5, 0x4e)[0]
                                
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434423a0)
                                zmm3 = _mm_mul_ps(zmm3, zmm3)
                                zmm4 = data_142d3f670
                                
                                if ((temp0_2601 & 8) != 0)
                                    var_538:0xc.d = _mm_shuffle_epi32(zmm5, 0xe7).d
                                
                                zmm1 = zmm1 | zmm6 | zmm0
                                zmm4 = _mm_sub_ps(zmm4, zmm3)
                                float temp0_2629[0x4] = _mm_mul_ps(zmm5, zmm5)
                                
                                if ((temp0_2601 & 1) != 0)
                                    var_528.d = zmm1.d
                                
                                zmm4 = _mm_sub_ps(zmm4, temp0_2629)
                                zmm0 = _mm_mul_ps(zmm1, zmm1)
                                
                                if ((temp0_2601 & 2) == 0)
                                    zmm4 = _mm_sub_ps(zmm4, zmm0)
                                    zmm0 = zx.o(0)
                                    
                                    if ((temp0_2601 & 4) != 0)
                                        goto label_140242dac
                                    
                                    goto label_140241f7a
                                
                                var_528:4.d = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                                zmm4 = _mm_sub_ps(zmm4, zmm0)
                                zmm0 = zx.o(0)
                                
                                if ((temp0_2601 & 4) != 0)
                                label_140242dac:
                                    var_528:8.d = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                                    zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                    zmm3 = _mm_sqrt_ps(zmm4)
                                    
                                    if ((temp0_2601 & 8) == 0)
                                        goto label_140241f89
                                    
                                    goto label_140242dc9
                                
                            label_140241f7a:
                                zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                zmm3 = _mm_sqrt_ps(zmm4)
                                
                                if ((temp0_2601 & 8) == 0)
                                label_140241f89:
                                    zmm0 = _mm_and_ps(zmm0, zmm3)
                                    zmm4 = var_5b8_2
                                    
                                    if ((temp0_2601 & 1) != 0)
                                        goto label_140242de6
                                    
                                    goto label_140241f9d
                                
                            label_140242dc9:
                                var_528:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
                                zmm0 = _mm_and_ps(zmm0, zmm3)
                                zmm4 = var_5b8_2
                                
                                if ((temp0_2601 & 1) != 0)
                                label_140242de6:
                                    var_518.d = zmm0.d
                                    
                                    if ((temp0_2601 & 2) == 0)
                                        goto label_140241fa5
                                    
                                    goto label_140242dfc
                                
                            label_140241f9d:
                                
                                if ((temp0_2601 & 2) == 0)
                                label_140241fa5:
                                    
                                    if ((temp0_2601 & 4) != 0)
                                        goto label_140242e12
                                    
                                    goto label_140241fad
                                
                            label_140242dfc:
                                var_518:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                                
                                if ((temp0_2601 & 4) == 0)
                                label_140241fad:
                                    
                                    if ((temp0_2601 & 8) != 0)
                                        var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                else
                                label_140242e12:
                                    var_518:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                                    
                                    if ((temp0_2601 & 8) != 0)
                                        var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                            
                            zmm11 &= zmm14 ^ zmm2
                            
                            if (_mm_movemask_ps(_mm_slli_epi32(zmm11, 0x1f)) != 0)
                                zmm1 = __pcmpeqd_xmmdq_memdq(data_142fc95e0, var_478_2)
                                zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm11 & zmm1, 0x1f), 0x1f)
                                char temp0_2642 = _mm_movemask_ps(zmm0)
                                
                                if (temp0_2642 != 0)
                                    zmm3 = __paddq_xmmdq_memdq(var_4a8_2, var_4b8_3)
                                    int32_t temp0_2644[0x4] = _mm_add_epi64(zmm15, zmm7)
                                    zmm2 = data_1434426c0
                                    int32_t temp0_2645[0x4] = _mm_add_epi64(temp0_2644, zmm4)
                                    zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm3, var_578_4), zmm2)
                                    int32_t temp0_2648[0x4] = _mm_add_epi64(temp0_2645, zmm2)
                                    zmm2 = _mm_shuffle_epi32(zmm0, 0x50) & temp0_2648
                                    zmm0 = _mm_shuffle_epi32(zmm0, 0xfa) & zmm3
                                    int64_t rbp_89 = _mm_shuffle_epi32(zmm2, 0x4e).q
                                    int64_t rdi_22 = _mm_shuffle_epi32(zmm0, 0x4e).q
                                    zmm2 = _mm_unpacklo_epi64(
                                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm2.q)), 
                                            zx.q(*(arg4 + rbp_89))), 
                                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), 
                                        zx.o(*(arg4 + rdi_22))[0].q).q)
                                    uint32_t temp0_2656[0x4] = _mm_srli_epi32(zmm2, 0x15)
                                    zmm0 = _mm_srli_epi32(zmm2, 0xa)
                                    zmm5 = data_143442440
                                    zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(temp0_2656, zmm5))
                                    zmm4 = data_143442690
                                    zmm3 = _mm_div_ps(zmm3, zmm4)
                                    
                                    if ((temp0_2642 & 1) == 0)
                                        zmm0 &= data_143442480
                                        
                                        if ((temp0_2642 & 2) != 0)
                                            goto label_1402430ff
                                        
                                        goto label_1402420de
                                    
                                    var_548[0] = zmm3[0]
                                    zmm0 &= data_143442480
                                    
                                    if ((temp0_2642 & 2) != 0)
                                    label_1402430ff:
                                        var_548[1] = _mm_shuffle_epi32(zmm3, 0xe5).d
                                        zmm0 = _mm_add_epi32(zmm0, zmm5)
                                        
                                        if ((temp0_2642 & 4) == 0)
                                            goto label_1402420ea
                                        
                                        goto label_140243119
                                    
                                label_1402420de:
                                    zmm0 = _mm_add_epi32(zmm0, zmm5)
                                    
                                    if ((temp0_2642 & 4) == 0)
                                    label_1402420ea:
                                        zmm0 = _mm_cvtepi32_ps(zmm0)
                                        
                                        if ((temp0_2642 & 8) != 0)
                                            goto label_140243132
                                        
                                        goto label_1402420f5
                                    
                                label_140243119:
                                    var_548[2] = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                    zmm0 = _mm_cvtepi32_ps(zmm0)
                                    
                                    if ((temp0_2642 & 8) != 0)
                                    label_140243132:
                                        var_548[3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                                        zmm0 = _mm_div_ps(zmm0, zmm4)
                                        
                                        if ((temp0_2642 & 1) == 0)
                                            goto label_140242100
                                        
                                        goto label_140243146
                                    
                                label_1402420f5:
                                    zmm0 = _mm_div_ps(zmm0, zmm4)
                                    
                                    if ((temp0_2642 & 1) == 0)
                                    label_140242100:
                                        zmm2 &= data_143442680
                                        
                                        if ((temp0_2642 & 2) != 0)
                                            goto label_140243164
                                        
                                        goto label_140242110
                                    
                                label_140243146:
                                    var_538.d = zmm0.d
                                    zmm2 &= data_143442680
                                    
                                    if ((temp0_2642 & 2) == 0)
                                    label_140242110:
                                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                                        
                                        if ((temp0_2642 & 4) != 0)
                                            var_538:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                    else
                                    label_140243164:
                                        var_538:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                                        
                                        if ((temp0_2642 & 4) != 0)
                                            var_538:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                    
                                    zmm2 = _mm_cvtepi32_ps(zmm2)
                                    zmm3 = _mm_mul_ps(zmm3, zmm3)
                                    zmm4 = data_142d3f670
                                    
                                    if ((temp0_2642 & 8) != 0)
                                        var_538:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                                    
                                    zmm2 = __divps_xmmps_memps(zmm2, data_1434426a0)
                                    zmm4 = _mm_sub_ps(zmm4, zmm3)
                                    zmm0 = _mm_mul_ps(zmm0, zmm0)
                                    
                                    if ((temp0_2642 & 1) != 0)
                                        var_528.d = zmm2.d
                                    
                                    zmm4 = _mm_sub_ps(zmm4, zmm0)
                                    zmm0 = _mm_mul_ps(zmm2, zmm2)
                                    
                                    if ((temp0_2642 & 2) == 0)
                                        zmm4 = _mm_sub_ps(zmm4, zmm0)
                                        zmm0 = zx.o(0)
                                        
                                        if ((temp0_2642 & 4) != 0)
                                            goto label_1402431a3
                                        
                                        goto label_140242182
                                    
                                    var_528:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                    zmm4 = _mm_sub_ps(zmm4, zmm0)
                                    zmm0 = zx.o(0)
                                    
                                    if ((temp0_2642 & 4) != 0)
                                    label_1402431a3:
                                        var_528:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                        zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                        zmm3 = _mm_sqrt_ps(zmm4)
                                        
                                        if ((temp0_2642 & 8) == 0)
                                            goto label_140242191
                                        
                                        goto label_1402431c0
                                    
                                label_140242182:
                                    zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                    zmm3 = _mm_sqrt_ps(zmm4)
                                    
                                    if ((temp0_2642 & 8) == 0)
                                    label_140242191:
                                        zmm0 = _mm_and_ps(zmm0, zmm3)
                                        
                                        if ((temp0_2642 & 1) != 0)
                                            goto label_1402431d4
                                        
                                        goto label_14024219c
                                    
                                label_1402431c0:
                                    var_528:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                                    zmm0 = _mm_and_ps(zmm0, zmm3)
                                    
                                    if ((temp0_2642 & 1) != 0)
                                    label_1402431d4:
                                        var_518.d = zmm0.d
                                        
                                        if ((temp0_2642 & 2) == 0)
                                            goto label_1402421a4
                                        
                                        goto label_1402431ea
                                    
                                label_14024219c:
                                    
                                    if ((temp0_2642 & 2) == 0)
                                    label_1402421a4:
                                        
                                        if ((temp0_2642 & 4) != 0)
                                            goto label_140243200
                                        
                                        goto label_1402421ac
                                    
                                label_1402431ea:
                                    var_518:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                                    
                                    if ((temp0_2642 & 4) == 0)
                                    label_1402421ac:
                                        
                                        if ((temp0_2642 & 8) != 0)
                                            var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                    else
                                    label_140243200:
                                        var_518:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                                        
                                        if ((temp0_2642 & 8) != 0)
                                            var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                
                                zmm1 &= not.o(zmm11)
                                
                                if (_mm_movemask_ps(_mm_slli_epi32(zmm1, 0x1f)) != 0)
                                    zmm2 = __pcmpeqd_xmmdq_memdq(var_478_2, data_143442ad0)
                                    char temp0_2683 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm11 & zmm2, 0x1f))
                                    
                                    if (temp0_2683 != 0)
                                        if ((temp0_2683 & 1) == 0)
                                            if ((temp0_2683 & 2) != 0)
                                                goto label_140243229
                                            
                                            goto label_140242216
                                        
                                        var_548[0] = 0
                                        
                                        if ((temp0_2683 & 2) != 0)
                                        label_140243229:
                                            var_548[1] = 0
                                            
                                            if ((temp0_2683 & 4) == 0)
                                                goto label_14024221e
                                            
                                            goto label_14024323c
                                        
                                    label_140242216:
                                        
                                        if ((temp0_2683 & 4) == 0)
                                        label_14024221e:
                                            
                                            if ((temp0_2683 & 8) != 0)
                                                goto label_14024324f
                                            
                                            goto label_140242226
                                        
                                    label_14024323c:
                                        var_548[2] = 0
                                        
                                        if ((temp0_2683 & 8) != 0)
                                        label_14024324f:
                                            var_548[3] = 0
                                            
                                            if ((temp0_2683 & 1) == 0)
                                                goto label_14024222e
                                            
                                            goto label_140243262
                                        
                                    label_140242226:
                                        
                                        if ((temp0_2683 & 1) == 0)
                                        label_14024222e:
                                            
                                            if ((temp0_2683 & 2) != 0)
                                                goto label_140243275
                                            
                                            goto label_140242236
                                        
                                    label_140243262:
                                        var_538.d = 0
                                        
                                        if ((temp0_2683 & 2) != 0)
                                        label_140243275:
                                            var_538:4.d = 0
                                            
                                            if ((temp0_2683 & 4) == 0)
                                                goto label_14024223e
                                            
                                            goto label_140243288
                                        
                                    label_140242236:
                                        
                                        if ((temp0_2683 & 4) == 0)
                                        label_14024223e:
                                            
                                            if ((temp0_2683 & 8) != 0)
                                                goto label_14024329b
                                            
                                            goto label_140242246
                                        
                                    label_140243288:
                                        var_538:8.d = 0
                                        
                                        if ((temp0_2683 & 8) != 0)
                                        label_14024329b:
                                            var_538:0xc.d = 0
                                            
                                            if ((temp0_2683 & 1) == 0)
                                                goto label_14024224e
                                            
                                            goto label_1402432ae
                                        
                                    label_140242246:
                                        
                                        if ((temp0_2683 & 1) == 0)
                                        label_14024224e:
                                            
                                            if ((temp0_2683 & 2) != 0)
                                                goto label_1402432c1
                                            
                                            goto label_140242256
                                        
                                    label_1402432ae:
                                        var_528.d = 0
                                        
                                        if ((temp0_2683 & 2) != 0)
                                        label_1402432c1:
                                            var_528:4.d = 0
                                            
                                            if ((temp0_2683 & 4) == 0)
                                                goto label_14024225e
                                            
                                            goto label_1402432d4
                                        
                                    label_140242256:
                                        
                                        if ((temp0_2683 & 4) == 0)
                                        label_14024225e:
                                            
                                            if ((temp0_2683 & 8) != 0)
                                                goto label_1402432e7
                                            
                                            goto label_140242266
                                        
                                    label_1402432d4:
                                        var_528:8.d = 0
                                        
                                        if ((temp0_2683 & 8) != 0)
                                        label_1402432e7:
                                            var_528:0xc.d = 0
                                            
                                            if ((temp0_2683 & 1) == 0)
                                                goto label_14024226e
                                            
                                            goto label_1402432fa
                                        
                                    label_140242266:
                                        
                                        if ((temp0_2683 & 1) == 0)
                                        label_14024226e:
                                            
                                            if ((temp0_2683 & 2) != 0)
                                                goto label_14024330d
                                            
                                            goto label_140242276
                                        
                                    label_1402432fa:
                                        var_518.d = 0x3f800000
                                        
                                        if ((temp0_2683 & 2) != 0)
                                        label_14024330d:
                                            var_518:4.d = 0x3f800000
                                            
                                            if ((temp0_2683 & 4) == 0)
                                                goto label_14024227e
                                            
                                            goto label_140243320
                                        
                                    label_140242276:
                                        
                                        if ((temp0_2683 & 4) != 0)
                                        label_140243320:
                                            var_518:8.d = 0x3f800000
                                            
                                            if ((temp0_2683 & 8) != 0)
                                                var_518:0xc.d = 0x3f800000
                                        else
                                        label_14024227e:
                                            
                                            if ((temp0_2683 & 8) != 0)
                                                var_518:0xc.d = 0x3f800000
                                    
                                    char temp0_2685 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm1), 0x1f))
                                    
                                    if (temp0_2685 != 0)
                                        if ((temp0_2685 & 1) == 0)
                                            if ((temp0_2685 & 2) != 0)
                                                goto label_14024334b
                                            
                                            goto label_1402422b4
                                        
                                        var_548[0] = 0
                                        
                                        if ((temp0_2685 & 2) != 0)
                                        label_14024334b:
                                            var_548[1] = 0
                                            
                                            if ((temp0_2685 & 4) == 0)
                                                goto label_1402422bc
                                            
                                            goto label_14024335e
                                        
                                    label_1402422b4:
                                        
                                        if ((temp0_2685 & 4) == 0)
                                        label_1402422bc:
                                            
                                            if ((temp0_2685 & 8) != 0)
                                                goto label_140243371
                                            
                                            goto label_1402422c4
                                        
                                    label_14024335e:
                                        var_548[2] = 0
                                        
                                        if ((temp0_2685 & 8) != 0)
                                        label_140243371:
                                            var_548[3] = 0
                                            
                                            if ((temp0_2685 & 1) == 0)
                                                goto label_1402422cc
                                            
                                            goto label_140243384
                                        
                                    label_1402422c4:
                                        
                                        if ((temp0_2685 & 1) == 0)
                                        label_1402422cc:
                                            
                                            if ((temp0_2685 & 2) != 0)
                                                goto label_140243397
                                            
                                            goto label_1402422d4
                                        
                                    label_140243384:
                                        var_538.d = 0
                                        
                                        if ((temp0_2685 & 2) != 0)
                                        label_140243397:
                                            var_538:4.d = 0
                                            
                                            if ((temp0_2685 & 4) == 0)
                                                goto label_1402422dc
                                            
                                            goto label_1402433aa
                                        
                                    label_1402422d4:
                                        
                                        if ((temp0_2685 & 4) == 0)
                                        label_1402422dc:
                                            
                                            if ((temp0_2685 & 8) != 0)
                                                goto label_1402433bd
                                            
                                            goto label_1402422e4
                                        
                                    label_1402433aa:
                                        var_538:8.d = 0
                                        
                                        if ((temp0_2685 & 8) != 0)
                                        label_1402433bd:
                                            var_538:0xc.d = 0
                                            
                                            if ((temp0_2685 & 1) == 0)
                                                goto label_1402422ec
                                            
                                            goto label_1402433d0
                                        
                                    label_1402422e4:
                                        
                                        if ((temp0_2685 & 1) == 0)
                                        label_1402422ec:
                                            
                                            if ((temp0_2685 & 2) != 0)
                                                goto label_1402433e3
                                            
                                            goto label_1402422f4
                                        
                                    label_1402433d0:
                                        var_528.d = 0
                                        
                                        if ((temp0_2685 & 2) != 0)
                                        label_1402433e3:
                                            var_528:4.d = 0
                                            
                                            if ((temp0_2685 & 4) == 0)
                                                goto label_1402422fc
                                            
                                            goto label_1402433f6
                                        
                                    label_1402422f4:
                                        
                                        if ((temp0_2685 & 4) == 0)
                                        label_1402422fc:
                                            
                                            if ((temp0_2685 & 8) != 0)
                                                goto label_140243409
                                            
                                            goto label_140242304
                                        
                                    label_1402433f6:
                                        var_528:8.d = 0
                                        
                                        if ((temp0_2685 & 8) != 0)
                                        label_140243409:
                                            var_528:0xc.d = 0
                                            
                                            if ((temp0_2685 & 1) == 0)
                                                goto label_14024230c
                                            
                                            goto label_14024341c
                                        
                                    label_140242304:
                                        
                                        if ((temp0_2685 & 1) == 0)
                                        label_14024230c:
                                            
                                            if ((temp0_2685 & 2) != 0)
                                                goto label_14024342f
                                            
                                            goto label_140242314
                                        
                                    label_14024341c:
                                        var_518.d = 0x3f800000
                                        
                                        if ((temp0_2685 & 2) != 0)
                                        label_14024342f:
                                            var_518:4.d = 0x3f800000
                                            
                                            if ((temp0_2685 & 4) == 0)
                                                goto label_14024231c
                                            
                                            goto label_140243442
                                        
                                    label_140242314:
                                        
                                        if ((temp0_2685 & 4) != 0)
                                        label_140243442:
                                            var_518:8.d = 0x3f800000
                                            
                                            if ((temp0_2685 & 8) != 0)
                                                var_518:0xc.d = 0x3f800000
                                        else
                                        label_14024231c:
                                            
                                            if ((temp0_2685 & 8) != 0)
                                                var_518:0xc.d = 0x3f800000
                
                zmm4 = _mm_mul_ps(var_638, var_548)
                zmm7 = _mm_add_ps(_mm_mul_ps(var_628, var_538), zmm4)
                zmm4 = _mm_add_ps(_mm_mul_ps(var_618, var_528), zmm7)
                zmm7 = _mm_add_ps(_mm_mul_ps(var_608, var_518), zmm4)
                zmm4 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm7, 6), data_142d3f7e0)
                zmm1 = _mm_or_ps(
                    __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm7, 2), data_142d3f670), zmm4)
                zmm7 = var_498_1
                zmm3 = _mm_mul_ps(var_548, zmm7)
                zmm4 = _mm_mul_ps(_mm_sub_ps(data_142d3f670, zmm7), zmm1)
                zmm0 = _mm_add_ps(_mm_mul_ps(var_638, zmm4), zmm3)
                
                if ((temp0_2222 & 1) != 0)
                    var_638.d = zmm0.d
                    
                    if ((temp0_2222 & 2) != 0)
                    label_1402429ea:
                        var_638:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_2222 & 4) == 0)
                            goto label_1402423df
                        
                        goto label_1402429fd
                else if ((temp0_2222 & 2) != 0)
                    goto label_1402429ea
                
                if ((temp0_2222 & 4) == 0)
                label_1402423df:
                    zmm6 = _mm_mul_ps(var_538, zmm7)
                    zmm5 = _mm_mul_ps(var_628, zmm4)
                    
                    if ((temp0_2222 & 8) != 0)
                        goto label_140242a16
                    
                    goto label_1402423ed
                
            label_1402429fd:
                var_638:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                zmm6 = _mm_mul_ps(var_538, zmm7)
                zmm5 = _mm_mul_ps(var_628, zmm4)
                
                if ((temp0_2222 & 8) != 0)
                label_140242a16:
                    var_638:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    zmm6 = _mm_add_ps(zmm6, zmm5)
                    
                    if ((temp0_2222 & 1) == 0)
                        goto label_1402423f8
                    
                    goto label_140242a27
                
            label_1402423ed:
                zmm6 = _mm_add_ps(zmm6, zmm5)
                
                if ((temp0_2222 & 1) != 0)
                label_140242a27:
                    var_628[0] = zmm6.d
                    
                    if ((temp0_2222 & 2) != 0)
                    label_140242a3a:
                        var_628[1] = _mm_shuffle_epi32(zmm6, 0xe5).d
                        
                        if ((temp0_2222 & 4) == 0)
                            goto label_140242408
                        
                        goto label_140242a4d
                else
                label_1402423f8:
                    
                    if ((temp0_2222 & 2) != 0)
                        goto label_140242a3a
                
                if ((temp0_2222 & 4) == 0)
                label_140242408:
                    zmm2 = _mm_mul_ps(var_528, zmm7)
                    arg6 = _mm_mul_ps(var_618, zmm4)
                    
                    if ((temp0_2222 & 8) != 0)
                        goto label_140242a67
                    
                    goto label_140242417
                
            label_140242a4d:
                var_628[2] = _mm_shuffle_epi32(zmm6, 0x4e).d
                zmm2 = _mm_mul_ps(var_528, zmm7)
                arg6 = _mm_mul_ps(var_618, zmm4)
                
                if ((temp0_2222 & 8) != 0)
                label_140242a67:
                    var_628[3] = _mm_shuffle_epi32(zmm6, 0xe7).d
                    zmm2 = _mm_add_ps(zmm2, arg6)
                    
                    if ((temp0_2222 & 1) == 0)
                        goto label_140242423
                    
                    goto label_140242a79
                
            label_140242417:
                zmm2 = _mm_add_ps(zmm2, arg6)
                
                if ((temp0_2222 & 1) != 0)
                label_140242a79:
                    var_618[0] = zmm2.d
                    
                    if ((temp0_2222 & 2) != 0)
                    label_140242a8c:
                        var_618[1] = _mm_shuffle_epi32(zmm2, 0xe5).d
                        
                        if ((temp0_2222 & 4) == 0)
                            goto label_140242433
                        
                        goto label_140242a9f
                else
                label_140242423:
                    
                    if ((temp0_2222 & 2) != 0)
                        goto label_140242a8c
                
                if ((temp0_2222 & 4) == 0)
                label_140242433:
                    zmm11 = _mm_mul_ps(var_518, zmm7)
                    zmm4 = _mm_mul_ps(zmm4, var_608)
                    
                    if ((temp0_2222 & 8) != 0)
                        goto label_140242aba
                    
                    goto label_140242443
                
            label_140242a9f:
                var_618[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                zmm11 = _mm_mul_ps(var_518, zmm7)
                zmm4 = _mm_mul_ps(zmm4, var_608)
                
                if ((temp0_2222 & 8) != 0)
                label_140242aba:
                    var_618[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                    zmm11 = _mm_add_ps(zmm11, zmm4)
                    
                    if ((temp0_2222 & 1) == 0)
                        goto label_14024244f
                    
                    goto label_140242acc
                
            label_140242443:
                zmm11 = _mm_add_ps(zmm11, zmm4)
                
                if ((temp0_2222 & 1) == 0)
                label_14024244f:
                    
                    if ((temp0_2222 & 2) != 0)
                        goto label_140242ae1
                    
                    goto label_140242457
                
            label_140242acc:
                var_608.d = zmm11.d
                
                if ((temp0_2222 & 2) != 0)
                label_140242ae1:
                    var_608:4.d = _mm_shuffle_epi32(zmm11, 0xe5).d
                    
                    if ((temp0_2222 & 4) == 0)
                        goto label_140242464
                    
                    goto label_140242af5
                
            label_140242457:
                
                if ((temp0_2222 & 4) != 0)
                label_140242af5:
                    var_608:8.d = _mm_shuffle_epi32(zmm11, 0x4e).d
                    
                    if ((temp0_2222 & 8) != 0)
                        var_608:0xc.d = _mm_shuffle_epi32(zmm11, 0xe7).d
                else
                label_140242464:
                    
                    if ((temp0_2222 & 8) != 0)
                        var_608:0xc.d = _mm_shuffle_epi32(zmm11, 0xe7).d
            
            zmm1 = var_628
            zmm2 = var_618
            zmm3 = var_608
            zmm0 = _mm_mul_ps(var_638, var_638)
            zmm1 = _mm_mul_ps(zmm1, zmm1)
            zmm2 = _mm_add_ps(_mm_mul_ps(zmm2, zmm2), zmm0)
            zmm3 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm3, zmm3), zmm1), zmm2)
            zmm1 = data_142d3f640
            zmm2 = _mm_cmpeq_ps(data_142d3f5c0, zmm3, 2)
            zmm0 = _mm_rsqrt_ps(zmm3)
            float temp0_2722[0x4] = _mm_mul_ps(zmm3, zmm1)
            float var_128_1[0x4] = temp0_2722
            float var_118_1[0x4] = temp0_2722
            float var_108_1[0x4] = temp0_2722
            zmm4 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm1, _mm_mul_ps(_mm_mul_ps(zmm0, zmm0), temp0_2722)), zmm0), 
                zmm0)
            zmm1 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm1, _mm_mul_ps(_mm_mul_ps(zmm4, zmm4), temp0_2722)), zmm4), 
                zmm4)
            zmm4 = _mm_mul_ps(var_638, zmm1)
            zmm0 = _mm_mul_ps(var_628, zmm1)
            zmm3 = _mm_mul_ps(var_618, zmm1)
            zmm1 = __mulps_xmmps_memps(zmm1, var_608)
            float var_f8_1[0x4] = temp0_2722
            zmm4 = _mm_and_ps(zmm4, zmm2)
            
            if ((temp0_1438 & 1) == 0)
                if ((temp0_1438 & 2) != 0)
                    goto label_1402427c5
                
                goto label_140242533
            
            var_638.d = zmm4[0]
            
            if ((temp0_1438 & 2) != 0)
            label_1402427c5:
                var_638:4.d = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                
                if ((temp0_1438 & 4) == 0)
                    goto label_14024253b
                
                goto label_1402427d7
            
        label_140242533:
            
            if ((temp0_1438 & 4) == 0)
            label_14024253b:
                
                if ((temp0_1438 & 8) != 0)
                    goto label_1402427e9
                
                goto label_140242543
            
        label_1402427d7:
            var_638:8.d = _mm_shuffle_epi32(zmm4, 0x4e)[0]
            
            if ((temp0_1438 & 8) != 0)
            label_1402427e9:
                var_638:0xc.d = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                zmm0 = _mm_and_ps(zmm0, zmm2)
                
                if ((temp0_1438 & 1) == 0)
                    goto label_14024254e
                
                goto label_1402427f9
            
        label_140242543:
            zmm0 = _mm_and_ps(zmm0, zmm2)
            
            if ((temp0_1438 & 1) == 0)
            label_14024254e:
                
                if ((temp0_1438 & 2) != 0)
                    goto label_14024280c
                
                goto label_140242556
            
        label_1402427f9:
            var_628[0] = zmm0.d
            
            if ((temp0_1438 & 2) != 0)
            label_14024280c:
                var_628[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                
                if ((temp0_1438 & 4) == 0)
                    goto label_14024255e
                
                goto label_14024281f
            
        label_140242556:
            
            if ((temp0_1438 & 4) == 0)
            label_14024255e:
                
                if ((temp0_1438 & 8) != 0)
                    goto label_140242832
                
                goto label_140242566
            
        label_14024281f:
            var_628[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
            
            if ((temp0_1438 & 8) != 0)
            label_140242832:
                var_628[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                zmm3 = _mm_and_ps(zmm3, zmm2)
                
                if ((temp0_1438 & 1) == 0)
                    goto label_140242571
                
                goto label_140242843
            
        label_140242566:
            zmm3 = _mm_and_ps(zmm3, zmm2)
            
            if ((temp0_1438 & 1) != 0)
            label_140242843:
                var_618[0] = zmm3[0]
                
                if ((temp0_1438 & 2) != 0)
                label_140242856:
                    var_618[1] = _mm_shuffle_epi32(zmm3, 0xe5).d
                    
                    if ((temp0_1438 & 4) == 0)
                        goto label_140242581
                    
                    goto label_140242869
            else
            label_140242571:
                
                if ((temp0_1438 & 2) != 0)
                    goto label_140242856
            
            if ((temp0_1438 & 4) == 0)
            label_140242581:
                zmm1 = _mm_and_ps(zmm1, zmm2)
                zmm2 = __andnps_xmmxud_memxud(zmm2, data_142d3f670)
                
                if ((temp0_1438 & 8) != 0)
                    goto label_140242886
                
                goto label_140242593
            
        label_140242869:
            var_618[2] = _mm_shuffle_epi32(zmm3, 0x4e).d
            zmm1 = _mm_and_ps(zmm1, zmm2)
            zmm2 = __andnps_xmmxud_memxud(zmm2, data_142d3f670)
            
            if ((temp0_1438 & 8) != 0)
            label_140242886:
                var_618[3] = _mm_shuffle_epi32(zmm3, 0xe7).d
                zmm1 = _mm_or_ps(zmm1, zmm2)
                
                if ((temp0_1438 & 1) == 0)
                    goto label_1402425a0
                
                goto label_140242897
            
        label_140242593:
            zmm1 = _mm_or_ps(zmm1, zmm2)
            
            if ((temp0_1438 & 1) == 0)
            label_1402425a0:
                zmm3 = var_2a8_2
                zmm2 = var_2b8_2
                
                if ((temp0_1438 & 2) != 0)
                    goto label_1402428bc
                
                goto label_1402425b8
            
        label_140242897:
            var_608.d = zmm1.d
            zmm3 = var_2a8_2
            zmm2 = var_2b8_2
            
            if ((temp0_1438 & 2) != 0)
            label_1402428bc:
                var_608:4.d = _mm_shuffle_epi32(zmm1, 0xe5).d
                
                if ((temp0_1438 & 4) == 0)
                    goto label_1402425c0
                
                goto label_1402428cf
            
        label_1402425b8:
            
            if ((temp0_1438 & 4) != 0)
            label_1402428cf:
                var_608:8.d = _mm_shuffle_epi32(zmm1, 0x4e).d
                
                if ((temp0_1438 & 8) != 0)
                    var_608:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
            else
            label_1402425c0:
                
                if ((temp0_1438 & 8) != 0)
                    var_608:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
        
        int32_t temp0_2744[0x4] = _mm_unpacklo_epi32(zmm12, zmm3[0].q)
        arg5 = __punpckldq_xmmdq_memdq(arg5, var_3a8_1)
        char temp0_2746 = _mm_movemask_ps(zmm2 & zmm13)
        
        if (temp0_2746 != 0)
            if ((temp0_2746 & 1) == 0)
                if ((temp0_2746 & 2) != 0)
                    goto label_1402428f2
                
                goto label_140242601
            
            var_638.d = 0
            
            if ((temp0_2746 & 2) != 0)
            label_1402428f2:
                var_638:4.d = 0
                
                if ((temp0_2746 & 4) == 0)
                    goto label_140242609
                
                goto label_140242902
            
        label_140242601:
            
            if ((temp0_2746 & 4) == 0)
            label_140242609:
                
                if ((temp0_2746 & 8) != 0)
                    goto label_140242912
                
                goto label_140242611
            
        label_140242902:
            var_638:8.d = 0
            
            if ((temp0_2746 & 8) != 0)
            label_140242912:
                var_638:0xc.d = 0
                
                if ((temp0_2746 & 1) == 0)
                    goto label_140242619
                
                goto label_140242922
            
        label_140242611:
            
            if ((temp0_2746 & 1) == 0)
            label_140242619:
                
                if ((temp0_2746 & 2) != 0)
                    goto label_140242932
                
                goto label_140242621
            
        label_140242922:
            var_628[0] = 0
            
            if ((temp0_2746 & 2) != 0)
            label_140242932:
                var_628[1] = 0
                
                if ((temp0_2746 & 4) == 0)
                    goto label_140242629
                
                goto label_140242942
            
        label_140242621:
            
            if ((temp0_2746 & 4) == 0)
            label_140242629:
                
                if ((temp0_2746 & 8) != 0)
                    goto label_140242952
                
                goto label_140242631
            
        label_140242942:
            var_628[2] = 0
            
            if ((temp0_2746 & 8) != 0)
            label_140242952:
                var_628[3] = 0
                
                if ((temp0_2746 & 1) == 0)
                    goto label_140242639
                
                goto label_140242962
            
        label_140242631:
            
            if ((temp0_2746 & 1) == 0)
            label_140242639:
                
                if ((temp0_2746 & 2) != 0)
                    goto label_140242972
                
                goto label_140242641
            
        label_140242962:
            var_618[0] = 0
            
            if ((temp0_2746 & 2) != 0)
            label_140242972:
                var_618[1] = 0
                
                if ((temp0_2746 & 4) == 0)
                    goto label_140242649
                
                goto label_140242982
            
        label_140242641:
            
            if ((temp0_2746 & 4) == 0)
            label_140242649:
                
                if ((temp0_2746 & 8) != 0)
                    goto label_140242992
                
                goto label_140242651
            
        label_140242982:
            var_618[2] = 0
            
            if ((temp0_2746 & 8) != 0)
            label_140242992:
                var_618[3] = 0
                
                if ((temp0_2746 & 1) == 0)
                    goto label_140242659
                
                goto label_1402429a2
            
        label_140242651:
            
            if ((temp0_2746 & 1) == 0)
            label_140242659:
                
                if ((temp0_2746 & 2) != 0)
                    goto label_1402429b2
                
                goto label_140242661
            
        label_1402429a2:
            var_608.d = 0x3f800000
            
            if ((temp0_2746 & 2) != 0)
            label_1402429b2:
                var_608:4.d = 0x3f800000
                
                if ((temp0_2746 & 4) == 0)
                    goto label_140242669
                
                goto label_1402429c2
            
        label_140242661:
            
            if ((temp0_2746 & 4) != 0)
            label_1402429c2:
                var_608:8.d = 0x3f800000
                
                if ((temp0_2746 & 8) != 0)
                    var_608:0xc.d = 0x3f800000
            else
            label_140242669:
                
                if ((temp0_2746 & 8) != 0)
                    var_608:0xc.d = 0x3f800000
        
        arg5 = _mm_unpacklo_epi64(arg5, temp0_2744[0].q)
        zmm1 = var_628
        zmm2 = var_618
        zmm3 = var_608
        int32_t temp0_2748[0x4] = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
        zmm2 = _mm_unpackhi_epi32(zmm2, zmm3[0].q)
        zmm3 = _mm_unpacklo_epi32(var_638, zmm1.q)
        zmm0 = _mm_unpackhi_epi32(var_638, zmm1.q)
        uint128_t var_1a8 = _mm_unpacklo_epi64(zmm3, temp0_2748[0].q)
        uint32_t var_198_1[0x4] = _mm_unpackhi_epi64(zmm3, temp0_2748[0].q)
        uint128_t var_188_1 = _mm_unpacklo_epi64(zmm0, zmm2.q)
        uint128_t var_178_1 = _mm_unpackhi_epi64(zmm0, zmm2.q)
        i_4 = zx.q(_mm_movemask_ps(zmm13))
        
        do
            uint64_t rcx_114
            uint64_t rflags_1
            
            if (i_4 == 0)
                rcx_114 = 0x40
            else
                rcx_114, rflags_1 = _bit_scan_forward(i_4)
            uint128_t var_1b8 = arg5
            arg1[sx.q(*(&var_1b8 + ((zx.q(rcx_114.d) & 3) << 2))) * 3] = (&var_1a8)[rcx_114]
            i_4 &= rol.q(-2, rcx_114.b)
        while (i_4 != 0)
else
    uint128_t var_1c8_1 = _mm_shuffle_epi32(_mm_add_epi64(4, zx.o(arg4)), 0x44)
    uint128_t var_238_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t rcx
    rcx.b = 0f f>= zmm2.d
    uint128_t var_1d8_1 = _mm_shuffle_epi32(zx.o(neg.d(rcx)), 0)
    zmm1.d = float.s(arg7 - 1)
    zmm1.d = zmm1.d f* zmm2.d
    int32_t rax_2 = int.d(zmm1.d)
    r12 = 0
    
    if (rax_2 s< 0)
        rax_2 = 0
    
    if (rax_2 s> arg7 - 2)
        rax_2 = arg7 - 2
    
    uint128_t var_458_1 = _mm_shuffle_epi32(zx.o(rax_2), 0)
    uint128_t var_1e8_1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm15 = data_142fc95e0
    arg6 = _mm_cmpeq_epi32(arg6, arg6)
    zmm12 = data_142d3f670
    
    do
        int64_t rax_6 = sx.q((r12 << 3).d)
        zmm6 = *(arg2 + rax_6)
        zmm5 = *(arg2 + rax_6 + 0x10)
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm6, zmm5, 0xdd), 3) | zmm15
        zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
        zmm1 = _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1).q)
        zmm0 = _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0).q)
        int64_t rcx_3 = _mm_shuffle_epi32(zmm0, 0x4e).q
        int64_t rbx_1 = _mm_shuffle_epi32(zmm1, 0x4e).q
        zmm8 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + zmm0.q)), zx.q(*(arg3 + rcx_3))), 
            _mm_unpacklo_epi32(zx.o(*(arg3 + zmm1.q)), zx.q(*(arg3 + rbx_1))).q)
        zmm11 = _mm_cmpeq_epi32(zmm8, arg6)
        zmm0 = zmm11 ^ arg6
        char temp0_83 = _mm_movemask_ps(zmm0)
        int32_t var_5f8[0x4]
        int32_t var_5e8[0x4]
        uint128_t var_5d8
        uint128_t var_5c8
        uint32_t rax_16
        
        if (temp0_83 == 0)
            rax_16 = _mm_movemask_ps(zmm0 ^ arg6)
            
            if (rax_16 != 0)
            label_1402380d6:
                char rax_17 = rax_16.b
                
                if ((rax_17 & 1) == 0)
                    if ((rax_17 & 2) != 0)
                        goto label_1402383b0
                    
                    goto label_1402380e8
                
                var_5f8[0] = 0
                
                if ((rax_17 & 2) != 0)
                label_1402383b0:
                    var_5f8[1] = 0
                    
                    if ((rax_17 & 4) == 0)
                        goto label_1402380f0
                    
                    goto label_1402383c0
                
            label_1402380e8:
                
                if ((rax_17 & 4) == 0)
                label_1402380f0:
                    
                    if ((rax_17 & 8) != 0)
                        goto label_1402383d0
                    
                    goto label_1402380f8
                
            label_1402383c0:
                var_5f8[2] = 0
                
                if ((rax_17 & 8) != 0)
                label_1402383d0:
                    var_5f8[3] = 0
                    
                    if ((rax_17 & 1) == 0)
                        goto label_140238100
                    
                    goto label_1402383e0
                
            label_1402380f8:
                
                if ((rax_17 & 1) == 0)
                label_140238100:
                    
                    if ((rax_17 & 2) != 0)
                        goto label_1402383f0
                    
                    goto label_140238108
                
            label_1402383e0:
                var_5e8[0] = 0
                
                if ((rax_17 & 2) != 0)
                label_1402383f0:
                    var_5e8[1] = 0
                    
                    if ((rax_17 & 4) == 0)
                        goto label_140238110
                    
                    goto label_140238400
                
            label_140238108:
                
                if ((rax_17 & 4) == 0)
                label_140238110:
                    
                    if ((rax_17 & 8) != 0)
                        goto label_140238410
                    
                    goto label_140238118
                
            label_140238400:
                var_5e8[2] = 0
                
                if ((rax_17 & 8) != 0)
                label_140238410:
                    var_5e8[3] = 0
                    
                    if ((rax_17 & 1) == 0)
                        goto label_140238120
                    
                    goto label_140238420
                
            label_140238118:
                
                if ((rax_17 & 1) == 0)
                label_140238120:
                    
                    if ((rax_17 & 2) != 0)
                        goto label_140238430
                    
                    goto label_140238128
                
            label_140238420:
                var_5d8.d = 0
                
                if ((rax_17 & 2) != 0)
                label_140238430:
                    var_5d8:4.d = 0
                    
                    if ((rax_17 & 4) == 0)
                        goto label_140238130
                    
                    goto label_140238440
                
            label_140238128:
                
                if ((rax_17 & 4) == 0)
                label_140238130:
                    
                    if ((rax_17 & 8) != 0)
                        goto label_140238450
                    
                    goto label_140238138
                
            label_140238440:
                var_5d8:8.d = 0
                
                if ((rax_17 & 8) != 0)
                label_140238450:
                    var_5d8:0xc.d = 0
                    
                    if ((rax_17 & 1) == 0)
                        goto label_140238140
                    
                    goto label_140238460
                
            label_140238138:
                
                if ((rax_17 & 1) == 0)
                label_140238140:
                    
                    if ((rax_17 & 2) != 0)
                        goto label_140238473
                    
                    goto label_140238148
                
            label_140238460:
                var_5c8.d = 0x3f800000
                
                if ((rax_17 & 2) != 0)
                label_140238473:
                    var_5c8:4.d = 0x3f800000
                    
                    if ((rax_17 & 4) == 0)
                        goto label_140238150
                    
                    goto label_140238486
                
            label_140238148:
                
                if ((rax_17 & 4) != 0)
                label_140238486:
                    var_5c8:8.d = 0x3f800000
                    
                    if ((rax_17 & 8) != 0)
                        var_5c8:0xc.d = 0x3f800000
                else
                label_140238150:
                    
                    if ((rax_17 & 8) != 0)
                        var_5c8:0xc.d = 0x3f800000
        else
            arg6 = zmm12
            uint128_t var_428_1 = zmm6
            float var_2b8_1[0x4] = zmm5
            uint32_t temp0_84[0x4] = _mm_shuffle_epi32(zmm8, 0x4e)
            zmm13 = zx.o(0)
            int32_t temp0_85[0x4] = _mm_cmpgt_epi32(zx.o(0), temp0_84)
            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm8)
            zmm2 = zmm8 & zmm0
            int64_t rax_9 = sx.q(zmm2.d)
            int64_t rcx_5 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            int64_t rbx_3 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            zmm2 = zx.o(*(arg4 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)))
            zmm3 = _mm_unpacklo_epi32(zx.o(*(arg4 + rbx_3)), zmm2.q)
            int32_t temp0_92[0x4] = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_9)), zx.q(*(arg4 + rcx_5))), zmm3[0].q)
            zmm2 = zmm11 & not.o(temp0_92 & data_143442be0)
            uint128_t var_5b8
            zmm6 =
                (var_5b8 & zmm11) | (zmm11 & not.o(_mm_srli_epi32(temp0_92, 0x18)) & data_143442bf0)
            int32_t var_498[0x4]
            zmm7 = (var_498 & zmm11) | (zmm11 & not.o(_mm_srli_epi32(temp0_92, 0x1c)))
            zmm3 = _mm_slli_epi32(zmm7, 2) & zmm0
            int64_t rax_11 = sx.q(zmm3[0])
            int64_t rcx_7 = sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
            int64_t rbx_5 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
            zmm3 = zx.o(*(sx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + &data_143442cf0))
            zmm5 = _mm_unpacklo_epi32(zx.o(*(rbx_5 + &data_143442cf0)), zmm3[0].q)
            zmm3 = _mm_unpacklo_epi32(zx.o(*(rax_11 + &data_143442cf0)), 
                zx.o(*(rcx_7 + &data_143442cf0))[0].q)
            var_5b8 = zmm6
            zmm6 = (_mm_slli_epi32(zmm7, 3) | (zmm6 & data_143442c00)) & zmm0
            uint32_t rax_14 = zx.d(*(sx.q(zmm6.d) + &data_143442d10))
            int64_t rcx_9 = sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0])
            uint32_t rbx_8 = zx.d(*(sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0]) + &data_143442d10))
            uint32_t rsi_9 =
                zx.d(*(sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0]) + &data_143442d10)) << 8 | rbx_8
            int32_t temp0_105[0x4] = _mm_insert_epi16(
                zx.o(zx.d(*(rcx_9 + &data_143442d10)) << 8) | zx.o(rax_14), rsi_9, 1)
            zmm3 = _mm_unpacklo_epi64(zmm3, zmm5[0].q)
            int32_t var_598_1[0x4] = zx.o(0)
            int32_t temp0_108[0x4] =
                _mm_unpacklo_epi16(_mm_unpacklo_epi8(temp0_105, zmm13[0].q), zmm13[0].q)
            var_498 = zmm7
            zmm6 = __pcmpeqd_xmmdq_memdq(zmm7, data_142fc95c0)
            uint128_t var_478_1 = zmm6
            zmm6 &= not.o(zmm0)
            zmm5 = zx.o(0)
            
            if (_mm_movemask_ps(zmm6) != 0)
                zmm5 = zmm6 & temp0_108
            
            uint32_t var_588_1[0x4] = _mm_unpacklo_epi32(temp0_84, temp0_85[0].q)
            zmm8 = _mm_unpacklo_epi32(zmm8, zmm1.q)
            arg5 = (arg5 & zmm11) | zmm2
            zmm3 &= zmm0
            zmm1 = zmm11 & not.o(var_478_1)
            char temp0_113 = _mm_movemask_ps(zmm1)
            zmm6 = zmm11
            
            if (temp0_113 == 0)
                zmm4 = zx.o(0)
            else
                zmm4 = temp0_108 & zmm1
                zmm5 = _mm_srli_epi32(zmm1, 0x1f) | (zmm1 & not.o(zmm5))
            
            zmm11 = zmm0
            zmm12 = arg6
            arg6 = _mm_cmpeq_epi32(arg6, arg6)
            uint128_t var_2d8_1 = zmm1
            int16_t temp0_117[0x8] = _mm_madd_epi16(zmm4, zmm0 & zmm15)
            uint128_t var_5a8_1 = _mm_add_epi64(var_1c8_1, zmm8)
            uint128_t var_438_1 = __paddq_xmmdq_memdq(var_1c8_1, var_588_1)
            zmm0 = _mm_shuffle_epi32(zmm5, 0xf5)
            uint128_t var_3a8 = (var_3a8 & zmm6) | (zmm6 & not.o(_mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm3), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm0), 0xe8).q)))
            uint32_t var_418[0x4]
            zmm3 = (var_418 & zmm6) | (zmm6 & not.o(temp0_117))
            zmm1 = zmm6 & not.o(__pcmpgtd_xmmdq_memdq(arg5, data_142d3f5b0))
            uint128_t var_2a8_1 = arg5
            uint128_t var_4a8_1 = zmm11
            uint128_t var_4b8_1 = zmm8
            uint128_t var_578_1 = zmm6
            var_418 = zmm3
            uint128_t var_648_1
            
            if (_mm_movemask_ps(zmm1) == 0)
                zmm5 = zx.o(0)
                var_648_1 = zx.o(0)
            else
                zmm14 = var_5b8 & data_142fc95f0
                var_598_1 = zx.o(0)
                zmm2 = _mm_srai_epi32(_mm_slli_epi32(_mm_cmpeq_epi32(zmm14, zx.o(0)) & zmm1, 0x1f), 
                    0x1f)
                zmm5 = zx.o(0)
                var_648_1 = zx.o(0)
                
                if (_mm_movemask_ps(zmm2) != 0)
                    zmm13 = zmm3
                    uint128_t var_648_2 = zx.o(0)
                    zmm0 = zx.o(arg8)
                    
                    if (0f f>= zmm0.d)
                        zmm5 = zx.o(0)
                        zmm3 = zmm13
                        var_598_1 = zx.o(0)
                    else
                        zmm3 = _mm_add_epi32(arg5, arg6)
                        
                        if (zmm0.d f>= 1f)
                            zmm3 &= zmm2
                            var_598_1 = zmm3
                            zmm5 = zmm3
                            zmm3 = zmm13
                        else
                            zmm0 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm3), var_238_1)
                            zmm4 = __andps_xmmxud_memxud(zmm0, data_142d3f780)
                            zmm5 = __addps_xmmps_memps(
                                __addps_xmmps_memps(__andps_xmmxud_memxud(zmm0, data_142d3f770), 
                                    data_142d3f740), 
                                data_1434427a0) ^ zmm4
                            var_648_2 = zx.o(0)
                            zmm4 = _mm_add_ps(
                                __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm0, zmm5, 1), data_142d3f7e0), 
                                zmm5)
                            zmm5 = _mm_cvttps_epi32(zmm4)
                            int32_t temp0_144[0x4] = _mm_cmpgt_epi32(zmm5, zmm3)
                            zmm7 = ((temp0_144 & not.o(zmm5)) | (zmm3 & temp0_144)) & zmm2
                            
                            if (arg9 != 1)
                                var_648_2 = _mm_sub_ps(zmm0, zmm4)
                            
                            var_598_1 = zmm7
                            zmm0 = _mm_sub_epi32(zmm7, arg6)
                            zmm5 = _mm_cmpgt_epi32(zmm3, zmm0)
                            zmm5 = ((zmm5 & not.o(zmm3)) | (zmm0 & zmm5)) & zmm2
                            zmm3 = zmm13
                            zmm6 = var_578_1
                    
                    var_648_1 = var_648_2 & zmm2
                
                zmm14 = _mm_srai_epi32(
                    _mm_slli_epi32(__pcmpeqd_xmmdq_memdq(zmm14, data_142d8f750) & not.o(zmm1), 
                        0x1f), 
                    0x1f)
                
                if (_mm_movemask_ps(zmm14) != 0)
                    zmm7 = _mm_cmpgt_epi32(data_1434422d0, arg5) | var_1d8_1
                    zmm0 = zmm7 & zmm14
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        var_598_1 = __andnps_xmmxud_memxud(zmm0, var_598_1)
                        zmm5 = zmm0 & not.o(zmm5)
                    
                    zmm15 = zmm7 & not.o(zmm14)
                    uint32_t temp0_155 = _mm_movemask_ps(zmm15)
                    zmm1 = zx.o(0)
                    
                    if (temp0_155 == 0)
                        zmm15 = data_142fc95e0
                    else
                        int32_t temp0_156[0x4] = _mm_add_epi32(arg5, arg6)
                        
                        if (arg8.d f>= 1f)
                            zmm4 = temp0_156 & zmm15
                            var_598_1 = (zmm15 & not.o(var_598_1)) | zmm4
                            zmm5 = (zmm15 & not.o(zmm5)) | zmm4
                            zmm15 = data_142fc95e0
                        else
                            zmm0 = _mm_shuffle_epi32(arg5, 0xf5)
                            zmm1 = _mm_mul_epu32(_mm_shuffle_epi32(var_3a8, 0xf5), zmm0)
                            zmm0 = _mm_mul_epu32(var_3a8, arg5)
                            zmm12 = _mm_shuffle_epi32(zmm3, 0x4e)
                            zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm0, 0xe8), 
                                _mm_shuffle_epi32(zmm1, 0xe8).q)
                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm12)
                            zmm13 = _mm_unpacklo_epi32(zmm3, zmm1.q)
                            int32_t temp0_168[0x4] = _mm_unpacklo_epi32(zmm12, zmm2.q)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                            zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            int32_t temp0_172[0x4] = __paddq_xmmdq_memdq(temp0_168, var_438_1)
                            zmm13 = __paddq_xmmdq_memdq(zmm13, var_5a8_1)
                            zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                            zmm2 = data_143442a20
                            int32_t temp0_177[0x4] =
                                _mm_add_epi64(_mm_add_epi64(temp0_172, zmm2), zmm1)
                            zmm13 = _mm_add_epi64(_mm_add_epi64(zmm13, zmm2), zmm0)
                            zmm0 = data_143442c10
                            zmm13 &= zmm0
                            zmm12 = temp0_177 & zmm0
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(temp0_156), 
                                var_238_1))
                            zmm2 = __pcmpgtd_xmmdq_memdq(zmm0, data_142d8f750) & zmm0
                            arg5 = _mm_cmpgt_epi32(temp0_156, zmm2)
                            arg5 = (arg5 & not.o(temp0_156)) | (zmm2 & arg5)
                            float var_3b8_1[0x4] = zmm5
                            int32_t var_568_1[0x4] = zmm7
                            
                            if (arg7 s< 0x100)
                                zmm2 = _mm_shuffle_epi32(arg5, 0x4e)
                                uint32_t temp0_193[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(arg5, _mm_cmpgt_epi32(zx.o(0), arg5)[0].q), 
                                    zmm13)
                                char rcx_15 = temp0_155.b
                                uint128_t var_288
                                
                                if ((rcx_15 & 1) != 0)
                                    zmm1.d = zx.o(*zmm0.q)[0]
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_193[0].q)
                                    
                                    if ((rcx_15 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                else
                                    zmm1 = var_288
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_193[0].q)
                                    
                                    if ((rcx_15 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                
                                zmm2 = _mm_add_epi64(zmm2, zmm12)
                                
                                if ((rcx_15 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm2.q), zmm1, 0x30), 0x84)
                                    
                                    if ((rcx_15 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                else if ((rcx_15 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_142ed6810), var_458_1)
                                zmm8 = zmm3 ^ arg6
                                var_288 = zmm1
                                
                                if (_mm_movemask_ps(zmm3 & not.o(zmm15)) == 0)
                                    zmm6 = arg5
                                else
                                    zmm6 = temp0_156
                                    zmm2 = (zmm3 & not.o(zmm6)) | (zmm3 & arg5)
                                    zmm0 = _mm_sub_epi32(arg5, arg6)
                                    zmm3 &= not.o(_mm_cmpgt_epi32(zmm0, zmm6) ^ arg6)
                                    zmm4 = zmm15 & zmm3
                                    uint32_t j = _mm_movemask_ps(zmm4)
                                    
                                    if (j == 0)
                                        zmm6 = zmm2
                                    else
                                        zmm7 = arg5
                                        
                                        do
                                            zmm5 = zmm0
                                            zmm6 = _mm_shuffle_epi32(zmm0, 0x4e)
                                            int32_t temp0_254[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm6)
                                            zmm0 = _mm_add_epi64(
                                                _mm_unpacklo_epi32(zmm0, 
                                                    _mm_cmpgt_epi32(zx.o(0), zmm0).q), 
                                                zmm13)
                                            char temp0_258 = _mm_movemask_ps(zmm4)
                                            uint128_t var_348
                                            
                                            if ((temp0_258 & 1) != 0)
                                                zmm4 = var_348
                                                zmm4[0] = zx.d(*zmm0.q)
                                                zmm1 = zmm4
                                                zmm6 = _mm_unpacklo_epi32(zmm6, temp0_254[0].q)
                                                
                                                if ((temp0_258 & 2) != 0)
                                                    zmm1 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                            zmm1, 0), 
                                                        zmm1, 0xe2)
                                            else
                                                zmm1 = var_348
                                                zmm6 = _mm_unpacklo_epi32(zmm6, temp0_254[0].q)
                                                
                                                if ((temp0_258 & 2) != 0)
                                                    zmm1 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                            zmm1, 0), 
                                                        zmm1, 0xe2)
                                            
                                            arg6 = _mm_cmpeq_epi32(temp0_254, temp0_254)
                                            zmm6 = _mm_add_epi64(zmm6, zmm12)
                                            
                                            if ((temp0_258 & 4) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(zx.o(*zmm6.q), zmm1, 0x30), 0x84)
                                                
                                                if ((temp0_258 & 8) != 0)
                                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm6, 0x4e).q), 
                                                            zmm1, 0x20), 
                                                        0x24)
                                            else if ((temp0_258 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm6, 0x4e).q), 
                                                        zmm1, 0x20), 
                                                    0x24)
                                            
                                            var_348 = zmm1
                                            zmm0 = __pcmpgtd_xmmdq_memdq(
                                                __andps_xmmxud_memxud(zmm1, data_142ed6810), 
                                                var_458_1) & zmm3
                                            zmm4 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm15) != j)
                                                zmm4 = zmm0 ^ zmm3
                                            
                                            zmm6 = (zmm0 & not.o(zmm2)) | (zmm7 & zmm0)
                                            zmm0 = _mm_sub_epi32(zmm5, arg6)
                                            zmm3 =
                                                __pcmpgtd_xmmdq_memdq(zmm0, temp0_156) & not.o(zmm4)
                                            zmm4 = zmm3 & zmm15
                                            j = _mm_movemask_ps(zmm4)
                                            zmm7 = zmm5
                                            zmm2 = zmm6
                                        while (j != 0)
                                
                                uint32_t temp0_347 = _mm_movemask_ps(zmm8 & not.o(zmm15))
                                uint32_t j_1
                                
                                if (temp0_347 != 0)
                                    zmm6 &= zmm8
                                    arg5 = _mm_add_epi32(arg5, arg6)
                                    zmm3 =
                                        __pcmpgtd_xmmdq_memdq(arg5, data_142d8f750) & (zmm8 ^ arg6)
                                    zmm0 = zmm3 & zmm15
                                    j_1 = _mm_movemask_ps(zmm0)
                                
                                if (temp0_347 != 0 && j_1 != 0)
                                    do
                                        zmm2 = _mm_shuffle_epi32(arg5, 0x4e)
                                        float temp0_354[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                        int32_t temp0_357[0x4] = _mm_add_epi64(
                                            _mm_unpacklo_epi32(arg5, 
                                                _mm_cmpgt_epi32(zx.o(0), arg5).q), 
                                            zmm13)
                                        char temp0_358 = _mm_movemask_ps(zmm0)
                                        uint128_t var_3c8
                                        
                                        if ((temp0_358 & 1) != 0)
                                            zmm1.d = zx.d(*temp0_357[0].q)
                                            zmm2 = _mm_unpacklo_epi32(zmm2, temp0_354[0].q)
                                            
                                            if ((temp0_358 & 2) != 0)
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(
                                                            *_mm_shuffle_epi32(temp0_357, 0x4e).q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                        else
                                            zmm1 = var_3c8
                                            zmm2 = _mm_unpacklo_epi32(zmm2, temp0_354[0].q)
                                            
                                            if ((temp0_358 & 2) != 0)
                                                zmm1 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(
                                                            *_mm_shuffle_epi32(temp0_357, 0x4e).q), 
                                                        zmm1, 0), 
                                                    zmm1, 0xe2)
                                        
                                        zmm2 = _mm_add_epi64(zmm2, zmm12)
                                        
                                        if ((temp0_358 & 4) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(zx.o(*zmm2.q), zmm1, 0x30), 0x84)
                                            
                                            if ((temp0_358 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm1, 0x20), 
                                                    0x24)
                                        else if ((temp0_358 & 8) != 0)
                                            zmm1 = _mm_shuffle_ps(zmm1, 
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), zmm1, 
                                                    0x20), 
                                                0x24)
                                        
                                        var_3c8 = zmm1
                                        zmm4 = __pcmpgtd_xmmdq_memdq(
                                            __andps_xmmxud_memxud(zmm1, data_142ed6810), var_458_1)
                                            & not.o(zmm3)
                                        zmm2 = zmm4 & not.o(zmm6)
                                        zmm6 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm4 & zmm15) != j_1)
                                            zmm6 = zmm4 ^ zmm3
                                        
                                        zmm2 |= zmm4 & arg5
                                        arg5 = _mm_add_epi32(arg5, arg6)
                                        zmm3 = _mm_cmpgt_epi32(arg5, zx.o(0)) & zmm6
                                        zmm0 = zmm3 & zmm15
                                        j_1 = _mm_movemask_ps(zmm0)
                                        zmm6 = zmm2
                                    while (j_1 != 0)
                                else
                                    zmm2 = zmm6
                                
                                zmm4 = (zmm2 & zmm15) | (zmm15 & not.o(var_598_1))
                                zmm1 = _mm_shuffle_epi32(zmm4, 0x4e)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                                var_598_1 = zmm4
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4)[0].q), 
                                    zmm13)
                                uint32_t var_328[0x4]
                                
                                if ((rcx_15 & 1) != 0)
                                    zmm4 = var_328
                                    zmm4[0] = zx.o(*zmm0.q)[0]
                                    zmm3 = zmm4
                                else
                                    zmm3 = var_328
                                
                                zmm6 = var_578_1
                                zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                                
                                if ((rcx_15 & 2) == 0)
                                    zmm1 = _mm_add_epi64(zmm1, zmm12)
                                    
                                    if ((rcx_15 & 4) != 0)
                                        goto label_1402394a3
                                    
                                    goto label_1402393a4
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm1 = _mm_add_epi64(zmm1, zmm12)
                                
                                if ((rcx_15 & 4) == 0)
                                label_1402393a4:
                                    zmm0 = zmm15 ^ arg6
                                    
                                    if ((rcx_15 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                else
                                label_1402394a3:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*zmm1.q), zmm3, 0x30), 0x84)
                                    zmm0 = zmm15 ^ arg6
                                    
                                    if ((rcx_15 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                
                                zmm5 = (_mm_sub_epi32(var_598_1, arg6) & zmm15) | (var_3b8_1 & zmm0)
                                zmm2 = temp0_156
                                zmm0 = _mm_cmpgt_epi32(zmm5, zmm2) & zmm15
                                var_328 = zmm3
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    zmm5 = (zmm2 & zmm0) | (zmm0 & not.o(zmm5))
                                
                                zmm15 = data_142fc95e0
                                zmm0 = _mm_shuffle_epi32(zmm5, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm13 = _mm_add_epi64(zmm13, 
                                    _mm_unpacklo_epi32(zmm5, _mm_cmpgt_epi32(zx.o(0), zmm5).q))
                                uint32_t var_268[0x4]
                                
                                if ((rcx_15 & 1) != 0)
                                    zmm3 = var_268
                                    zmm3[0] = zx.d(*zmm13[0].q)
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                    
                                    if ((rcx_15 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm13, 0x4e).q), 
                                                zmm3, 0), 
                                            zmm3, 0xe2)
                                else
                                    zmm3 = var_268
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                    
                                    if ((rcx_15 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm13, 0x4e).q), 
                                                zmm3, 0), 
                                            zmm3, 0xe2)
                                
                                int32_t temp0_403[0x4] = _mm_add_epi64(zmm12, zmm0)
                                
                                if ((rcx_15 & 4) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*temp0_403[0].q), zmm3, 0x30), 0x84)
                                    
                                    if ((rcx_15 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(temp0_403, 0x4e).q), zmm3, 
                                                0x20), 
                                            0x24)
                                else if ((rcx_15 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_403, 0x4e).q), 
                                            zmm3, 0x20), 
                                        0x24)
                                
                                zmm12 = data_142d3f670
                                zmm0 = data_142ed6810
                                zmm2 = _mm_and_ps(var_328, zmm0)
                                var_268 = zmm3
                                zmm3 = _mm_and_ps(zmm3, zmm0)
                                zmm7 = var_568_1 ^ arg6
                                zmm1 = zx.o(0)
                                
                                if (arg9 != 1)
                                label_140239562:
                                    zmm3 = _mm_sub_epi32(zmm3, zmm2)
                                    zmm1 = data_142d3f5b0
                                    zmm0 = _mm_cmpgt_epi32(zmm3, zmm1)
                                    zmm1 = _mm_div_ps(_mm_sub_ps(var_1e8_1, _mm_cvtepi32_ps(zmm2)), 
                                        _mm_cvtepi32_ps((zmm0 & not.o(zmm1)) | (zmm3 & zmm0)))
                            else
                                zmm0 = _mm_add_epi32(arg5, arg5)
                                zmm2 = _mm_shuffle_epi32(zmm0, 0x4e)
                                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                    zmm13)
                                char rcx_14 = temp0_155.b
                                zmm11 = data_143442cd0
                                uint128_t var_298
                                
                                if ((rcx_14 & 1) != 0)
                                    zmm1.d = zx.o(*zmm0.q)[0]
                                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
                                    
                                    if ((rcx_14 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                else
                                    zmm1 = var_298
                                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
                                    
                                    if ((rcx_14 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                
                                zmm2 = _mm_add_epi64(zmm2, zmm12)
                                
                                if ((rcx_14 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm2.q), zmm1, 0x30), 0x84)
                                    
                                    if ((rcx_14 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                else if ((rcx_14 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                zmm2 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(zmm1, zmm11), var_458_1)
                                var_298 = zmm1
                                uint32_t var_4c8_1[0x4] = zmm2 ^ arg6
                                
                                if (_mm_movemask_ps(zmm2 & not.o(zmm15)) == 0)
                                    zmm6 = arg5
                                else
                                    zmm0 = (zmm2 & not.o(temp0_156)) | (zmm2 & arg5)
                                    zmm7 = _mm_sub_epi32(arg5, arg6)
                                    zmm2 &= not.o(_mm_cmpgt_epi32(zmm7, temp0_156) ^ arg6)
                                    zmm3 = zmm15 & zmm2
                                    uint32_t j_2 = _mm_movemask_ps(zmm3)
                                    
                                    if (j_2 == 0)
                                        zmm6 = zmm0
                                    else
                                        zmm5 = arg5
                                        
                                        do
                                            zmm4 = zmm7
                                            int32_t temp0_214[0x4] = _mm_add_epi32(zmm7, zmm7)
                                            zmm6 = _mm_shuffle_epi32(temp0_214, 0x4e)
                                            int32_t temp0_216[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm6)
                                            int32_t temp0_219[0x4] = _mm_add_epi64(
                                                _mm_unpacklo_epi32(temp0_214, 
                                                    _mm_cmpgt_epi32(zx.o(0), temp0_214).q), 
                                                zmm13)
                                            char temp0_220 = _mm_movemask_ps(zmm3)
                                            uint128_t var_358
                                            
                                            if ((temp0_220 & 1) != 0)
                                                zmm1.d = zx.o(*temp0_219[0].q)[0]
                                                zmm6 = _mm_unpacklo_epi32(zmm6, temp0_216[0].q)
                                                
                                                if ((temp0_220 & 2) != 0)
                                                    zmm1 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(temp0_219, 
                                                                0x4e)[0].q), 
                                                            zmm1, 0), 
                                                        zmm1, 0xe2)
                                            else
                                                zmm1 = var_358
                                                zmm6 = _mm_unpacklo_epi32(zmm6, temp0_216[0].q)
                                                
                                                if ((temp0_220 & 2) != 0)
                                                    zmm1 = _mm_shuffle_ps(
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(temp0_219, 
                                                                0x4e)[0].q), 
                                                            zmm1, 0), 
                                                        zmm1, 0xe2)
                                            
                                            arg6 = _mm_cmpeq_epi32(temp0_216, temp0_216)
                                            zmm6 = _mm_add_epi64(zmm6, zmm12)
                                            
                                            if ((temp0_220 & 4) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(zx.o(*zmm6.q), zmm1, 0x30), 0x84)
                                                
                                                if ((temp0_220 & 8) != 0)
                                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                                        _mm_shuffle_ps(
                                                            zx.o(
                                                                *_mm_shuffle_epi32(zmm6, 0x4e)[0].q), 
                                                            zmm1, 0x20), 
                                                        0x24)
                                            else if ((temp0_220 & 8) != 0)
                                                zmm1 = _mm_shuffle_ps(zmm1, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm6, 0x4e)[0].q), 
                                                        zmm1, 0x20), 
                                                    0x24)
                                            
                                            zmm7 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(zmm1, zmm11), 
                                                var_458_1) & zmm2
                                            zmm3 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm7 & zmm15) != j_2)
                                                zmm3 = zmm7 ^ zmm2
                                            
                                            var_358 = zmm1
                                            zmm6 = (zmm7 & not.o(zmm0)) | (zmm5 & zmm7)
                                            zmm7 = _mm_sub_epi32(zmm4, arg6)
                                            zmm2 =
                                                __pcmpgtd_xmmdq_memdq(zmm7, temp0_156) & not.o(zmm3)
                                            zmm3 = zmm2 & zmm15
                                            j_2 = _mm_movemask_ps(zmm3)
                                            zmm5 = zmm4
                                            zmm0 = zmm6
                                        while (j_2 != 0)
                                
                                zmm1 = var_4c8_1
                                uint32_t temp0_280 = _mm_movemask_ps(_mm_andnot_ps(zmm1, zmm15))
                                uint32_t j_3
                                
                                if (temp0_280 != 0)
                                    zmm6 &= zmm1
                                    arg5 = _mm_add_epi32(arg5, arg6)
                                    zmm3 =
                                        __pcmpgtd_xmmdq_memdq(arg5, data_142d8f750) & (zmm1 ^ arg6)
                                    zmm0 = zmm3 & zmm15
                                    j_3 = _mm_movemask_ps(zmm0)
                                
                                if (temp0_280 != 0 && j_3 != 0)
                                    do
                                        int32_t temp0_286[0x4] = _mm_add_epi32(arg5, arg5)
                                        zmm2 = _mm_shuffle_epi32(temp0_286, 0x4e)
                                        float temp0_288[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                        int32_t temp0_291[0x4] = _mm_add_epi64(
                                            _mm_unpacklo_epi32(temp0_286, 
                                                _mm_cmpgt_epi32(zx.o(0), temp0_286)[0].q), 
                                            zmm13)
                                        char temp0_292 = _mm_movemask_ps(zmm0)
                                        int32_t var_3e8[0x4]
                                        
                                        if ((temp0_292 & 1) != 0)
                                            zmm7 = var_3e8
                                            zmm7[0] = zx.d(*temp0_291[0].q)
                                            zmm2 = _mm_unpacklo_epi32(zmm2, temp0_288[0].q)
                                            
                                            if ((temp0_292 & 2) != 0)
                                                zmm7 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(
                                                            *_mm_shuffle_epi32(temp0_291, 0x4e).q), 
                                                        zmm7, 0), 
                                                    zmm7, 0xe2)
                                        else
                                            zmm7 = var_3e8
                                            zmm2 = _mm_unpacklo_epi32(zmm2, temp0_288[0].q)
                                            
                                            if ((temp0_292 & 2) != 0)
                                                zmm7 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(
                                                            *_mm_shuffle_epi32(temp0_291, 0x4e).q), 
                                                        zmm7, 0), 
                                                    zmm7, 0xe2)
                                        
                                        zmm2 = _mm_add_epi64(zmm2, zmm12)
                                        
                                        if ((temp0_292 & 4) != 0)
                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                _mm_shuffle_ps(zx.o(*zmm2.q), zmm7, 0x30), 0x84)
                                            
                                            if ((temp0_292 & 8) != 0)
                                                zmm7 = _mm_shuffle_ps(zmm7, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm7, 0x20), 
                                                    0x24)
                                        else if ((temp0_292 & 8) != 0)
                                            zmm7 = _mm_shuffle_ps(zmm7, 
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), zmm7, 
                                                    0x20), 
                                                0x24)
                                        
                                        zmm4 = __pcmpgtd_xmmdq_memdq(_mm_and_ps(zmm7, zmm11), 
                                            var_458_1) & not.o(zmm3)
                                        zmm2 = zmm4 & not.o(zmm6)
                                        zmm6 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm4 & zmm15) != j_3)
                                            zmm6 = zmm4 ^ zmm3
                                        
                                        var_3e8 = zmm7
                                        zmm2 |= zmm4 & arg5
                                        arg5 = _mm_add_epi32(arg5, arg6)
                                        zmm3 = _mm_cmpgt_epi32(arg5, zx.o(0)) & zmm6
                                        zmm0 = zmm3 & zmm15
                                        j_3 = _mm_movemask_ps(zmm0)
                                        zmm6 = zmm2
                                    while (j_3 != 0)
                                else
                                    zmm2 = zmm6
                                
                                zmm2 = (zmm2 & zmm15) | (zmm15 & not.o(var_598_1))
                                var_598_1 = zmm2
                                zmm0 = _mm_add_epi32(zmm2, zmm2)
                                zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), 
                                    zmm13)
                                uint32_t var_338[0x4]
                                
                                if ((rcx_14 & 1) != 0)
                                    zmm4 = var_338
                                    zmm4[0] = zx.o(*zmm0.q)[0]
                                    zmm3 = zmm4
                                else
                                    zmm3 = var_338
                                
                                zmm11 = var_4a8_1
                                zmm6 = var_578_1
                                zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                                
                                if ((rcx_14 & 2) == 0)
                                    zmm1 = _mm_add_epi64(zmm1, zmm12)
                                    
                                    if ((rcx_14 & 4) != 0)
                                        goto label_14023905d
                                    
                                    goto label_140238f5b
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm1 = _mm_add_epi64(zmm1, zmm12)
                                
                                if ((rcx_14 & 4) == 0)
                                label_140238f5b:
                                    zmm0 = zmm15 ^ arg6
                                    
                                    if ((rcx_14 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                else
                                label_14023905d:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*zmm1.q), zmm3, 0x30), 0x84)
                                    zmm0 = zmm15 ^ arg6
                                    
                                    if ((rcx_14 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                
                                zmm5 = (_mm_sub_epi32(var_598_1, arg6) & zmm15) | (var_3b8_1 & zmm0)
                                zmm2 = temp0_156
                                zmm0 = _mm_cmpgt_epi32(zmm5, zmm2) & zmm15
                                var_338 = zmm3
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    zmm5 = (zmm2 & zmm0) | (zmm0 & not.o(zmm5))
                                
                                zmm15 = data_142fc95e0
                                zmm2 = _mm_add_epi32(zmm5, zmm5)
                                zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm13 = _mm_add_epi64(zmm13, 
                                    _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q))
                                uint32_t var_278[0x4]
                                
                                if ((rcx_14 & 1) != 0)
                                    zmm3 = var_278
                                    zmm3[0] = zx.d(*zmm13[0].q)
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                    
                                    if ((rcx_14 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm13, 0x4e).q), 
                                                zmm3, 0), 
                                            zmm3, 0xe2)
                                else
                                    zmm3 = var_278
                                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                    
                                    if ((rcx_14 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm13, 0x4e).q), 
                                                zmm3, 0), 
                                            zmm3, 0xe2)
                                
                                zmm1 = data_143442cd0
                                int32_t temp0_339[0x4] = _mm_add_epi64(zmm12, zmm0)
                                
                                if ((rcx_14 & 4) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*temp0_339[0].q), zmm3, 0x30), 0x84)
                                    
                                    if ((rcx_14 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(temp0_339, 0x4e).q), zmm3, 
                                                0x20), 
                                            0x24)
                                else if ((rcx_14 & 8) != 0)
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_339, 0x4e).q), 
                                            zmm3, 0x20), 
                                        0x24)
                                
                                zmm12 = data_142d3f670
                                zmm2 = _mm_and_ps(var_338, zmm1)
                                var_278 = zmm3
                                zmm3 = _mm_and_ps(zmm3, zmm1)
                                zmm7 = var_568_1 ^ arg6
                                zmm1 = zx.o(0)
                                
                                if (arg9 != 1)
                                    goto label_140239562
                            
                            zmm1 = _mm_and_ps(zmm1, zmm7)
                            zmm3 = var_418
                    
                    zmm1 = _mm_and_ps(zmm1, zmm14)
                    var_648_1 = _mm_or_ps(__andnps_xmmxud_memxud(zmm14, var_648_1), zmm1)
            
            zmm2 = _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3).q)
            zmm4 = _mm_shuffle_epi32(zmm3, 0x4e)
            int32_t temp0_423[0x4] = _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q)
            zmm3 = var_598_1
            zmm8 = _mm_shuffle_epi32(_mm_mul_epu32(zmm3, var_3a8), 0xe8)
            zmm1 = _mm_shuffle_epi32(var_3a8, 0xf5)
            uint128_t var_388_1 = zmm1
            zmm8 = _mm_unpacklo_epi32(zmm8, 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm1), 0xe8).q)
            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm8)
            arg5 = _mm_shuffle_epi32(zmm8, 0x4e)
            zmm8 = _mm_unpacklo_epi32(zmm8, zmm0.q)
            arg5 = _mm_unpacklo_epi32(arg5, _mm_cmpgt_epi32(zx.o(0), arg5).q)
            zmm0 = __pcmpeqd_xmmdq_memdq(var_498, data_1434422d0)
            uint128_t var_558_2 = zmm0
            arg6 = zmm6 & not.o(zmm0)
            char temp0_437 = _mm_movemask_ps(arg6)
            uint128_t var_488_1 = zmm8
            uint128_t var_568_2 = zmm2
            uint128_t var_468_1 = arg5
            
            if (temp0_437 == 0)
                arg6 = _mm_cmpeq_epi32(arg6, arg6)
            else
                zmm12 = zmm5
                zmm13 = _mm_add_epi64(arg5, temp0_423)
                zmm14 = __paddq_xmmdq_memdq(_mm_add_epi64(zmm8, zmm2), var_5a8_1)
                zmm13 = __paddq_xmmdq_memdq(zmm13, var_438_1)
                zmm0 = _mm_srai_epi32(_mm_slli_epi32(var_5b8, 0x1f), 0x1f)
                zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x1f), 0x1f) & zmm0
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm5 = zmm2
                    zmm4 = data_1434426b0
                    zmm2 = _mm_add_epi64(zmm13, zmm4)
                    int32_t temp0_448[0x4] = _mm_add_epi64(zmm14, zmm4)
                    zmm6 = zmm1 ^ data_142d3f800
                    zmm7 = _mm_shuffle_epi32(zmm6, 0x50)
                    zmm14 = (zmm14 & zmm7) | (zmm7 & not.o(temp0_448))
                    zmm4 = _mm_shuffle_epi32(zmm6, 0xfa)
                    zmm13 = (zmm13 & zmm4) | (zmm4 & not.o(zmm2))
                    zmm2 = _mm_add_epi64(var_588_1, temp0_423)
                    int32_t temp0_453[0x4] = _mm_add_epi64(_mm_add_epi64(var_4b8_1, zmm5), zmm8)
                    zmm2 = _mm_add_epi64(zmm2, arg5)
                    zmm6 = data_1434426c0
                    zmm2 = _mm_add_epi64(zmm2, zmm6)
                    int32_t temp0_456[0x4] = _mm_add_epi64(temp0_453, zmm6)
                    zmm6 = _mm_shuffle_epi32(zmm1, 0x50) & temp0_456
                    zmm1 = _mm_shuffle_epi32(zmm1, 0xfa) & zmm2
                    int64_t rsi_26 = _mm_shuffle_epi32(zmm6, 0x4e).q
                    int64_t rbp_2 = zmm1.q
                    zmm1 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm2 = __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + zmm6.q), 0), 
                                *(arg4 + rsi_26), 2), 
                            *(arg4 + rbp_2), 4), 
                        *(arg4 + zmm1.q), 6)
                    zmm11 = _mm_cvtepi32_ps(zmm2)
                
                int32_t var_1f8[0x4]
                zmm7 = var_1f8
                zmm5 = zmm12
                zmm12 = zmm0 & not.o(data_1434426d0)
                zmm11 = _mm_and_ps(zmm11, zmm0)
                zmm0 = data_1434422d0
                zmm8 = _mm_cmpeq_epi32(var_5b8 & zmm0, zmm0)
                zmm0 = _mm_slli_epi32(zmm8 & arg6, 0x1f)
                char temp0_470 = _mm_movemask_ps(zmm0)
                
                if (temp0_470 == 0)
                    zmm6 = var_578_1
                else
                    zmm0 = _mm_srai_epi32(zmm0, 0x1f)
                    
                    if ((temp0_470 & 1) != 0)
                        zmm7[0] = zx.d(*zmm14[0].q)
                    
                    zmm0 ^= data_142d3f800
                    
                    if ((temp0_470 & 2) != 0)
                        zmm7 = _mm_shuffle_ps(
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e).q), zmm7, 0), zmm7, 
                            0xe2)
                    
                    zmm2 = data_1434426b0
                    zmm6 = _mm_add_epi64(zmm13, zmm2)
                    zmm2 = _mm_add_epi64(zmm14, zmm2)
                    zmm4 = _mm_shuffle_epi32(zmm0, 0x50)
                    zmm0 = _mm_shuffle_epi32(zmm0, 0xfa)
                    
                    if ((temp0_470 & 4) != 0)
                        zmm1 = zmm7
                        zmm7 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(*zmm13[0].q), zmm1, 0x30), 
                            0x84)
                    
                    zmm14 &= zmm4
                    zmm4 &= not.o(zmm2)
                    zmm2 = zmm13 & zmm0
                    zmm0 &= not.o(zmm6)
                    
                    if ((temp0_470 & 8) != 0)
                        zmm7 = _mm_shuffle_ps(zmm7, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm13, 0x4e).q), zmm7, 0x20), 
                            0x24)
                    
                    zmm6 = var_578_1
                    zmm14 |= zmm4
                    zmm2 |= zmm0
                    var_1f8 = zmm7
                    zmm0 = _mm_cvtepi32_ps(__andps_xmmxud_memxud(zmm7, data_143442cd0))
                    zmm13 = zmm2
                
                zmm11 = _mm_or_ps(zmm11, zmm12)
                int32_t temp0_487[0x4] = _mm_cmpeq_epi32(var_5b8 & zmm15, zmm15)
                arg6 = _mm_slli_epi32(arg6 & temp0_487, 0x1f)
                char temp0_489 = _mm_movemask_ps(arg6)
                
                if (temp0_489 == 0)
                    zmm12 = data_142d3f670
                    arg5 = data_143442c20
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    zmm1 = data_1434426d0
                else
                    uint128_t var_208
                    
                    if ((temp0_489 & 1) != 0)
                        zmm3 = var_208
                        zmm3[0] = zx.d(*zmm14[0].q)
                        zmm2 = zmm3
                        
                        if ((temp0_489 & 2) != 0)
                            zmm3 = zmm2
                            zmm2 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm2 = var_208
                        
                        if ((temp0_489 & 2) != 0)
                            zmm3 = zmm2
                            zmm2 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    
                    zmm12 = data_142d3f670
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    zmm1 = data_1434426d0
                    
                    if ((temp0_489 & 4) != 0)
                        zmm3 = zmm2
                        zmm2 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm13[0].q), zmm3, 0x30), 
                            0x84)
                    
                    if ((temp0_489 & 8) != 0)
                        zmm3 = zmm2
                        zmm2 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm13, 0x4e).q), zmm3, 0x20), 
                            0x24)
                    
                    arg5 = data_143442c20
                    var_208 = zmm2
                    zmm2 = _mm_cvtepi32_ps(__andps_xmmxud_memxud(zmm2, data_143442cd0))
                
                zmm11 = __mulps_xmmps_memps(_mm_add_ps(zmm11, arg5), data_142dd3fa0)
                
                if ((temp0_437 & 1) == 0)
                    zmm0 = _mm_and_ps(zmm0, zmm8)
                    zmm8 = _mm_andnot_ps(zmm8, zmm1)
                    
                    if ((temp0_437 & 2) != 0)
                        goto label_140239eef
                    
                    goto label_140239a5e
                
                var_5f8[0] = zmm11.d
                zmm0 = _mm_and_ps(zmm0, zmm8)
                zmm8 = _mm_andnot_ps(zmm8, zmm1)
                
                if ((temp0_437 & 2) != 0)
                label_140239eef:
                    var_5f8[1] = _mm_shuffle_epi32(zmm11, 0xe5)[0]
                    zmm0 = _mm_or_ps(zmm0, zmm8)
                    
                    if ((temp0_437 & 4) == 0)
                        goto label_140239a6a
                    
                    goto label_140239f07
                
            label_140239a5e:
                zmm0 = _mm_or_ps(zmm0, zmm8)
                
                if ((temp0_437 & 4) == 0)
                label_140239a6a:
                    zmm4 = zmm5
                    zmm0 = _mm_add_ps(zmm0, arg5)
                    
                    if ((temp0_437 & 8) != 0)
                        goto label_140239f23
                    
                    goto label_140239a7a
                
            label_140239f07:
                var_5f8[2] = _mm_shuffle_epi32(zmm11, 0x4e)[0]
                zmm4 = zmm5
                zmm0 = _mm_add_ps(zmm0, arg5)
                
                if ((temp0_437 & 8) != 0)
                label_140239f23:
                    var_5f8[3] = _mm_shuffle_epi32(zmm11, 0xe7)[0]
                    zmm0 = __mulps_xmmps_memps(zmm0, data_142dd3fa0)
                    
                    if ((temp0_437 & 1) == 0)
                        goto label_140239a89
                    
                    goto label_140239f38
                
            label_140239a7a:
                zmm0 = __mulps_xmmps_memps(zmm0, data_142dd3fa0)
                
                if ((temp0_437 & 1) == 0)
                label_140239a89:
                    zmm2 = _mm_and_ps(zmm2, temp0_487)
                    zmm7 = _mm_andnot_ps(temp0_487, zmm1)
                    
                    if ((temp0_437 & 2) != 0)
                        goto label_140239f51
                    
                    goto label_140239a97
                
            label_140239f38:
                var_5e8[0] = zmm0.d
                zmm2 = _mm_and_ps(zmm2, temp0_487)
                zmm7 = _mm_andnot_ps(temp0_487, zmm1)
                
                if ((temp0_437 & 2) == 0)
                label_140239a97:
                    zmm2 = _mm_or_ps(zmm2, zmm7)
                    
                    if ((temp0_437 & 4) != 0)
                        var_5e8[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                else
                label_140239f51:
                    var_5e8[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    zmm2 = _mm_or_ps(zmm2, zmm7)
                    
                    if ((temp0_437 & 4) != 0)
                        var_5e8[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                
                zmm11 = _mm_mul_ps(zmm11, zmm11)
                zmm2 = _mm_add_ps(zmm2, arg5)
                zmm8 = var_488_1
                zmm5 = zmm4
                
                if ((temp0_437 & 8) != 0)
                    var_5e8[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                
                zmm0 = _mm_mul_ps(zmm0, zmm0)
                zmm2 = __mulps_xmmps_memps(zmm2, data_142dd3fa0)
                zmm3 = _mm_sub_ps(zmm12, zmm11)
                arg5 = var_468_1
                
                if ((temp0_437 & 1) != 0)
                    var_5d8.d = zmm2.d
                
                zmm1 = _mm_mul_ps(zmm2, zmm2)
                zmm3 = _mm_sub_ps(zmm3, zmm0)
                zmm11 = var_4a8_1
                zmm15 = data_142fc95e0
                
                if ((temp0_437 & 2) != 0)
                    var_5d8:4.d = _mm_shuffle_epi32(zmm2, 0xe5).d
                
                zmm3 = _mm_sub_ps(zmm3, zmm1)
                
                if ((temp0_437 & 4) != 0)
                    var_5d8:8.d = _mm_shuffle_epi32(zmm2, 0x4e).d
                
                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 2)
                zmm1 = _mm_sqrt_ps(zmm3)
                
                if ((temp0_437 & 8) == 0)
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_437 & 1) != 0)
                        goto label_140239f7d
                    
                    goto label_140239b4e
                
                var_5d8:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                zmm0 = _mm_and_ps(zmm0, zmm1)
                
                if ((temp0_437 & 1) != 0)
                label_140239f7d:
                    var_5c8.d = zmm0.d
                    
                    if ((temp0_437 & 2) == 0)
                        goto label_140239b56
                    
                    goto label_140239f93
                
            label_140239b4e:
                
                if ((temp0_437 & 2) == 0)
                label_140239b56:
                    
                    if ((temp0_437 & 4) != 0)
                        goto label_140239fa9
                    
                    goto label_140239b5e
                
            label_140239f93:
                var_5c8:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                
                if ((temp0_437 & 4) == 0)
                label_140239b5e:
                    
                    if ((temp0_437 & 8) != 0)
                        var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                else
                label_140239fa9:
                    var_5c8:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                    
                    if ((temp0_437 & 8) != 0)
                        var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
            
            zmm1 = var_558_2 ^ arg6
            uint128_t var_448_1 = zmm1
            
            if (_mm_movemask_ps(zmm6 & not.o(zmm1)) == 0)
                zmm8 = var_4b8_1
            else
                zmm7 = __pcmpeqd_xmmdq_memdq(var_498, data_142d3f5b0)
                zmm0 = zmm6 & not.o(zmm7)
                char temp0_530 = _mm_movemask_ps(zmm0)
                float var_3b8_2[0x4] = zmm5
                
                if (temp0_530 != 0)
                    int32_t var_2c8_1[0x4] = zmm7
                    zmm2 = __paddq_xmmdq_memdq(var_588_1, temp0_423)
                    zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(var_4b8_1, var_568_2), zmm8)
                    zmm2 = _mm_add_epi64(zmm2, arg5)
                    zmm1 = data_1434426c0
                    zmm4 = zmm1
                    zmm2 = _mm_add_epi64(zmm2, zmm1)
                    zmm3 = _mm_add_epi64(zmm3, zmm1)
                    zmm1 = _mm_shuffle_epi32(zmm0, 0x50)
                    zmm3 &= zmm1
                    zmm6 = _mm_shuffle_epi32(zmm0, 0xfa)
                    zmm2 &= zmm6
                    int64_t rbp_15 = zmm3[0].q
                    void* rcx_17 = arg4 + rbp_15
                    zmm0 = zx.o(*(arg4 + rbp_15))
                    int64_t rbp_16 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                    void* rsi_27 = arg4 + rbp_16
                    zmm3 = zx.o(*(arg4 + rbp_16))
                    int64_t rbp_17 = zmm2.q
                    void* rbx_33 = arg4 + rbp_17
                    zmm11 = zx.o(*(arg4 + rbp_17))
                    int64_t rbp_18 = _mm_shuffle_epi32(zmm2, 0x4e).q
                    void* r15_1 = arg4 + rbp_18
                    arg6 = zx.o(*(arg4 + rbp_18))
                    zmm5 = zmm1 & zmm4
                    zmm7 = zmm6 & zmm4
                    zmm2 = *(zmm5[0].q + rcx_17)
                    zmm5 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rsi_27)
                    zmm12 = *(zmm7[0].q + rbx_33)
                    arg5 = *(_mm_shuffle_epi32(zmm7, 0x4e)[0].q + r15_1)
                    zmm4 = data_1434426e0
                    zmm1 &= zmm4
                    zmm6 &= zmm4
                    zmm15 = *(zmm1.q + rcx_17)
                    zmm14 = *(_mm_shuffle_epi32(zmm1, 0x4e).q + rsi_27)
                    zmm13 = *(zmm6.q + rbx_33)
                    zmm4 = *(_mm_shuffle_epi32(zmm6, 0x4e).q + r15_1)
                    
                    if ((temp0_530 & 1) == 0)
                        if ((temp0_530 & 2) != 0)
                            goto label_140239fcd
                        
                        goto label_140239d0e
                    
                    var_5f8[0] = zmm0.d
                    
                    if ((temp0_530 & 2) != 0)
                    label_140239fcd:
                        var_5f8[1] = zmm3[0]
                        zmm6 = var_578_1
                        zmm8 = var_488_1
                        
                        if ((temp0_530 & 4) == 0)
                            goto label_140239d27
                        
                        goto label_140239fee
                    
                label_140239d0e:
                    zmm6 = var_578_1
                    zmm8 = var_488_1
                    
                    if ((temp0_530 & 4) != 0)
                    label_140239fee:
                        var_5f8[2] = zmm11.d
                        
                        if ((temp0_530 & 8) != 0)
                        label_140239ffd:
                            var_5f8[3] = arg6[0]
                            
                            if ((temp0_530 & 1) == 0)
                                goto label_140239d37
                            
                            goto label_14023a00c
                    else
                    label_140239d27:
                        
                        if ((temp0_530 & 8) != 0)
                            goto label_140239ffd
                    
                    if ((temp0_530 & 1) != 0)
                    label_14023a00c:
                        var_5e8[0] = zmm2.d
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                        zmm11 = _mm_unpacklo_epi32(zmm11, arg6[0].q)
                        
                        if ((temp0_530 & 2) != 0)
                            var_5e8[1] = zmm5[0]
                    else
                    label_140239d37:
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                        zmm11 = _mm_unpacklo_epi32(zmm11, arg6[0].q)
                        
                        if ((temp0_530 & 2) != 0)
                            var_5e8[1] = zmm5[0]
                    
                    zmm0 = _mm_unpacklo_epi64(zmm0, zmm11.q)
                    zmm2 = _mm_unpacklo_ps(zmm2, zmm5[0].q)
                    zmm1 = _mm_unpacklo_ps(zmm12, arg5.q)
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    
                    if ((temp0_530 & 4) != 0)
                        var_5e8[2] = zmm12[0]
                    
                    zmm2 = zmm2.q | zmm1.q << 0x40
                    zmm1 = _mm_unpacklo_ps(zmm15, zmm14[0].q)
                    zmm3 = _mm_unpacklo_ps(zmm13, zmm4[0].q)
                    zmm0 = _mm_mul_ps(zmm0, zmm0)
                    zmm5 = var_3b8_2
                    
                    if ((temp0_530 & 8) != 0)
                        var_5e8[3] = arg5.d
                    
                    zmm1 = zmm1.q | zmm3[0].q << 0x40
                    zmm3 = _mm_sub_ps(data_142d3f670, zmm0)
                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                    zmm11 = var_4a8_1
                    
                    if ((temp0_530 & 1) != 0)
                        var_5d8.d = zmm15[0]
                    
                    zmm3 = _mm_sub_ps(zmm3, zmm2)
                    zmm1 = _mm_mul_ps(zmm1, zmm1)
                    arg5 = var_468_1
                    
                    if ((temp0_530 & 2) != 0)
                        var_5d8:4.d = zmm14[0]
                    
                    zmm3 = _mm_sub_ps(zmm3, zmm1)
                    zmm15 = data_142fc95e0
                    
                    if ((temp0_530 & 4) != 0)
                        var_5d8:8.d = zmm13[0]
                    
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                    zmm1 = _mm_sqrt_ps(zmm3)
                    
                    if ((temp0_530 & 8) == 0)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        zmm7 = var_2c8_1
                        
                        if ((temp0_530 & 1) != 0)
                            goto label_14023a042
                        
                        goto label_140239e12
                    
                    var_5d8:0xc.d = zmm4[0]
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    zmm7 = var_2c8_1
                    
                    if ((temp0_530 & 1) != 0)
                    label_14023a042:
                        var_5c8.d = zmm0.d
                        zmm12 = data_142d3f670
                        
                        if ((temp0_530 & 2) == 0)
                            goto label_140239e20
                        
                        goto label_14023a060
                    
                label_140239e12:
                    zmm12 = data_142d3f670
                    
                    if ((temp0_530 & 2) == 0)
                    label_140239e20:
                        
                        if ((temp0_530 & 4) != 0)
                            goto label_14023a076
                        
                        goto label_140239e28
                    
                label_14023a060:
                    var_5c8:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                    
                    if ((temp0_530 & 4) == 0)
                    label_140239e28:
                        
                        if ((temp0_530 & 8) != 0)
                            var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    else
                    label_14023a076:
                        var_5c8:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                        
                        if ((temp0_530 & 8) != 0)
                            var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                zmm7 ^= var_448_1
                
                if (_mm_movemask_ps(zmm6 & not.o(zmm7)) == 0)
                    zmm8 = var_4b8_1
                else
                    if (temp0_113 != 0)
                        zmm0 = _mm_srai_epi32(_mm_slli_epi32(var_5b8, 0x1f), 0x1f) & var_478_1
                        zmm3 = zmm0 & zmm11
                        uint32_t temp0_566 = _mm_movemask_ps(zmm3)
                        arg5 = zx.o(0)
                        int32_t var_2c8_2[0x4] = zmm7
                        uint128_t var_308
                        
                        if (temp0_566 == 0)
                            zmm12 = var_5a8_1
                            zmm14 = var_438_1
                            zmm2 = zx.o(0)
                            arg6 = zx.o(0)
                            zmm11 = var_308
                        else
                            char rsi_28 = temp0_566.b
                            int32_t var_318[0x4]
                            uint128_t var_228
                            
                            if ((rsi_28 & 1) != 0)
                                zmm6 = var_5a8_1
                                zmm1.d = (*zmm6.q).d
                                zmm12 = var_318
                                
                                if ((rsi_28 & 2) != 0)
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm1, 0), 
                                        zmm1, 0xe2)
                            else
                                zmm12 = var_318
                                zmm1 = var_228
                                zmm6 = var_5a8_1
                                
                                if ((rsi_28 & 2) != 0)
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm1, 0), 
                                        zmm1, 0xe2)
                            
                            zmm11 = var_308
                            zmm14 = var_438_1
                            
                            if ((rsi_28 & 4) == 0)
                                if ((rsi_28 & 8) != 0)
                                    goto label_14023a163
                                
                                goto label_14023a11b
                            
                            zmm1 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*zmm14[0].q, zmm1, 0x30), 0x84)
                            char rcx_21
                            
                            if ((rsi_28 & 8) != 0)
                            label_14023a163:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                rcx_21 = _mm_movemask_ps(zmm0)
                                zmm2 = zx.o(0)
                                
                                if ((rcx_21 & 1) != 0)
                                    goto label_14023a129
                                
                                goto label_14023a172
                            
                        label_14023a11b:
                            rcx_21 = _mm_movemask_ps(zmm0)
                            zmm2 = zx.o(0)
                            
                            if ((rcx_21 & 1) == 0)
                            label_14023a172:
                                zmm3 ^= arg6
                                
                                if ((rcx_21 & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                            else
                            label_14023a129:
                                zmm2.d = zmm1.d
                                zmm3 ^= arg6
                                
                                if ((rcx_21 & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                            
                            zmm5 = __paddq_xmmdq_memdq(zmm6, data_1434426c0)
                            zmm0 = _mm_shuffle_epi32(zmm3, 0x50)
                            
                            if ((rcx_21 & 4) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x32), 0x84)
                            
                            zmm4 = zmm0 & not.o(zmm5)
                            zmm7 = zmm6 & zmm0
                            
                            if ((rcx_21 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm1, zmm2, 0x23), 0x24)
                            
                            zmm5 = __paddq_xmmdq_memdq(zmm14, data_1434426c0)
                            zmm6 = _mm_shuffle_epi32(zmm3, 0xfa)
                            zmm7 |= zmm4
                            
                            if ((rsi_28 & 1) != 0)
                                zmm12[0] = (*zmm7[0].q)[0]
                            
                            zmm3 = zmm6 & not.o(zmm5)
                            zmm5 = zmm14 & zmm6
                            
                            if ((rsi_28 & 2) != 0)
                                zmm12 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm7, 0x4e)[0].q, zmm12, 0), 
                                    zmm12, 0xe2)
                                zmm5 |= zmm3
                                
                                if ((rsi_28 & 4) != 0)
                                label_14023a278:
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(*zmm5[0].q, zmm12, 0x30), 0x84)
                                    
                                    if ((rsi_28 & 8) == 0)
                                        goto label_14023a21c
                                    
                                    goto label_14023a296
                            else
                                zmm5 |= zmm3
                                
                                if ((rsi_28 & 4) != 0)
                                    goto label_14023a278
                            
                            if ((rsi_28 & 8) == 0)
                            label_14023a21c:
                                arg6 = zx.o(0)
                                
                                if ((rcx_21 & 1) == 0)
                                    goto label_14023a2a5
                                
                                goto label_14023a226
                            
                        label_14023a296:
                            zmm12 = _mm_shuffle_ps(zmm12, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm5, 0x4e)[0].q, zmm12, 0x20), 
                                0x24)
                            arg6 = zx.o(0)
                            
                            if ((rcx_21 & 1) != 0)
                            label_14023a226:
                                arg6 = zx.o(0)
                                arg6[0] = zmm12[0]
                                zmm6 = _mm_slli_epi32(zmm6, 0x1f)
                                zmm0 = _mm_slli_epi32(zmm0, 0x1f)
                                
                                if ((rcx_21 & 2) != 0)
                                    arg6 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg6, 1), arg6, 0xe2)
                            else
                            label_14023a2a5:
                                zmm6 = _mm_slli_epi32(zmm6, 0x1f)
                                zmm0 = _mm_slli_epi32(zmm0, 0x1f)
                                
                                if ((rcx_21 & 2) != 0)
                                    arg6 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg6, 1), arg6, 0xe2)
                            
                            zmm6 = _mm_srai_epi32(zmm6, 0x1f)
                            zmm0 = _mm_srai_epi32(zmm0, 0x1f)
                            zmm4 = data_1434426c0
                            zmm5 = _mm_add_epi64(zmm5, zmm4)
                            int32_t temp0_625[0x4] = _mm_add_epi64(zmm7, zmm4)
                            var_318 = zmm12
                            var_228 = zmm1
                            
                            if ((rcx_21 & 4) != 0)
                                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm12, arg6, 0x32), 0x84)
                            
                            if ((rcx_21 & 8) != 0)
                                arg6 =
                                    _mm_shuffle_ps(arg6, _mm_shuffle_ps(var_318, arg6, 0x23), 0x24)
                            
                            zmm8 = var_488_1
                            zmm12 = (var_5a8_1 & zmm0) | (zmm0 & not.o(temp0_625))
                            zmm14 = (zmm14 & zmm6) | (zmm6 & not.o(zmm5))
                        
                        zmm0 = data_1434422d0
                        zmm6 = _mm_cmpeq_epi32(var_5b8 & zmm0, zmm0) & var_478_1
                        zmm5 = var_578_1 & not.o(zmm6)
                        char temp0_631 = _mm_movemask_ps(zmm5)
                        uint128_t var_2f8
                        
                        if (temp0_631 == 0)
                            zmm13 = zx.o(0)
                            zmm6 = var_2f8
                            zmm11 = var_4a8_1
                        else
                            if ((temp0_631 & 1) != 0)
                                zmm11.d = (*zmm12[0].q).d
                                
                                if ((temp0_631 & 2) != 0)
                                label_14023a549:
                                    zmm11 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm11, 
                                            0), 
                                        zmm11, 0xe2)
                                    
                                    if ((temp0_631 & 4) == 0)
                                        goto label_14023a3a3
                                    
                                    goto label_14023a564
                            else if ((temp0_631 & 2) != 0)
                                goto label_14023a549
                            
                            if ((temp0_631 & 4) != 0)
                            label_14023a564:
                                zmm11 = _mm_shuffle_ps(zmm11, 
                                    _mm_shuffle_ps(*zmm14[0].q, zmm11, 0x30), 0x84)
                                zmm5 ^= data_142d3f800
                                
                                if ((temp0_631 & 8) != 0)
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm11, 
                                            0x20), 
                                        0x24)
                            else
                            label_14023a3a3:
                                zmm5 ^= data_142d3f800
                                
                                if ((temp0_631 & 8) != 0)
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm11, 
                                            0x20), 
                                        0x24)
                            
                            zmm0 = _mm_shuffle_epi32(zmm5, 0x50)
                            char temp0_636 = _mm_movemask_ps(zmm6)
                            arg5 = zx.o(0)
                            
                            if ((temp0_636 & 1) != 0)
                                arg5.d = zmm11.d
                            
                            zmm0 = _mm_slli_epi32(zmm0, 0x1f)
                            
                            if ((temp0_636 & 2) != 0)
                                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, arg5, 1), arg5, 0xe2)
                            
                            zmm6 = _mm_shuffle_epi32(zmm5, 0xfa)
                            int32_t temp0_641[0x4] = __paddq_xmmdq_memdq(zmm12, data_1434426c0)
                            zmm0 = _mm_srai_epi32(zmm0, 0x1f)
                            
                            if ((temp0_636 & 4) != 0)
                                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm11, arg5, 0x32), 0x84)
                            
                            zmm6 = _mm_slli_epi32(zmm6, 0x1f)
                            zmm12 &= zmm0
                            
                            if ((temp0_636 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm11, arg5, 0x23), 0x24)
                            
                            int32_t temp0_648[0x4] = __paddq_xmmdq_memdq(zmm14, data_1434426c0)
                            zmm6 = _mm_srai_epi32(zmm6, 0x1f)
                            zmm7 = (zmm0 & not.o(temp0_641)) | zmm12
                            uint32_t var_3f8[0x4]
                            
                            if ((temp0_631 & 1) != 0)
                                var_3f8[0] = (*zmm7[0].q)[0]
                            
                            zmm5 = zmm6 & not.o(temp0_648)
                            zmm14 &= zmm6
                            
                            if ((temp0_631 & 2) == 0)
                                zmm5 |= zmm14
                                
                                if ((temp0_631 & 4) != 0)
                                    goto label_14023a5cc
                                
                                goto label_14023a4b4
                            
                            var_3f8 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm7, 0x4e)[0].q, var_3f8, 0), 
                                var_3f8, 0xe2)
                            zmm5 |= zmm14
                            
                            if ((temp0_631 & 4) != 0)
                            label_14023a5cc:
                                var_3f8 = _mm_shuffle_ps(var_3f8, 
                                    _mm_shuffle_ps(*zmm5[0].q, var_3f8, 0x30), 0x84)
                                var_308 = zmm11
                                
                                if ((temp0_631 & 8) == 0)
                                    goto label_14023a4c3
                                
                                goto label_14023a604
                            
                        label_14023a4b4:
                            var_308 = zmm11
                            
                            if ((temp0_631 & 8) == 0)
                            label_14023a4c3:
                                zmm11 = var_4a8_1
                                zmm13 = zx.o(0)
                                
                                if ((temp0_636 & 1) == 0)
                                    goto label_14023a625
                                
                                goto label_14023a4dc
                            
                        label_14023a604:
                            var_3f8 = _mm_shuffle_ps(var_3f8, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm5, 0x4e)[0].q, var_3f8, 0x20), 
                                0x24)
                            zmm11 = var_4a8_1
                            zmm13 = zx.o(0)
                            
                            if ((temp0_636 & 1) != 0)
                            label_14023a4dc:
                                zmm13 = zx.o(0)
                                zmm13[0] = var_3f8[0]
                                
                                if ((temp0_636 & 2) != 0)
                                    zmm13 = _mm_shuffle_ps(_mm_shuffle_ps(var_3f8, zmm13, 1), 
                                        zmm13, 0xe2)
                            else
                            label_14023a625:
                                
                                if ((temp0_636 & 2) != 0)
                                    zmm13 = _mm_shuffle_ps(_mm_shuffle_ps(var_3f8, zmm13, 1), 
                                        zmm13, 0xe2)
                            
                            zmm4 = data_1434426c0
                            zmm5 = _mm_add_epi64(zmm5, zmm4)
                            int32_t temp0_666[0x4] = _mm_add_epi64(zmm7, zmm4)
                            
                            if ((temp0_636 & 4) != 0)
                                zmm13 = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(var_3f8, zmm13, 0x32), 
                                    0x84)
                            
                            if ((temp0_636 & 8) != 0)
                                zmm13 = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(var_3f8, zmm13, 0x23), 
                                    0x24)
                            
                            zmm8 = var_488_1
                            zmm12 |= zmm0 & not.o(temp0_666)
                            zmm14 |= zmm6 & not.o(zmm5)
                            zmm6 = var_2f8
                        
                        zmm5 = _mm_cmpeq_epi32(var_5b8 & zmm15, zmm15) & var_478_1
                        zmm0 = var_578_1 & not.o(zmm5)
                        char temp0_672 = _mm_movemask_ps(zmm0)
                        
                        if (temp0_672 == 0)
                            zmm15 = zx.o(0)
                            zmm0 = zx.o(0)
                            zmm12 = data_142d3f670
                            zmm1 = var_2d8_1
                        else
                            if ((temp0_672 & 1) != 0)
                                zmm6.d = (*zmm12[0].q)[0]
                                
                                if ((temp0_672 & 2) != 0)
                                label_14023a892:
                                    zmm6 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q, zmm6, 
                                            0), 
                                        zmm6, 0xe2)
                                    
                                    if ((temp0_672 & 4) == 0)
                                        goto label_14023a6f7
                                    
                                    goto label_14023a8ab
                            else if ((temp0_672 & 2) != 0)
                                goto label_14023a892
                            
                            if ((temp0_672 & 4) != 0)
                            label_14023a8ab:
                                zmm6 = _mm_shuffle_ps(zmm6, 
                                    _mm_shuffle_ps(*zmm14[0].q, zmm6, 0x30), 0x84)
                                zmm0 ^= data_142d3f800
                                
                                if ((temp0_672 & 8) != 0)
                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q, zmm6, 
                                            0x20), 
                                        0x24)
                            else
                            label_14023a6f7:
                                zmm0 ^= data_142d3f800
                                
                                if ((temp0_672 & 8) != 0)
                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q, zmm6, 
                                            0x20), 
                                        0x24)
                            
                            zmm4 = _mm_shuffle_epi32(zmm0, 0x50)
                            char temp0_677 = _mm_movemask_ps(zmm5)
                            zmm15 = zx.o(0)
                            
                            if ((temp0_677 & 1) != 0)
                                zmm15 = zx.o(0)
                                zmm15[0] = zmm6.d
                            
                            zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                            
                            if ((temp0_677 & 2) != 0)
                                zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm15, 1), zmm15, 0xe2)
                            
                            zmm0 = _mm_shuffle_epi32(zmm0, 0xfa)
                            zmm5 = __paddq_xmmdq_memdq(zmm12, data_1434426c0)
                            int32_t temp0_683[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                            var_2f8 = zmm6
                            
                            if ((temp0_677 & 4) != 0)
                                zmm15 =
                                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(zmm6, zmm15, 0x32), 0x84)
                            
                            uint128_t var_218
                            zmm6 = var_218
                            zmm0 = _mm_slli_epi32(zmm0, 0x1f)
                            zmm4 = temp0_683 & not.o(zmm5)
                            
                            if ((temp0_677 & 8) != 0)
                                zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(var_2f8, zmm15, 0x23), 
                                    0x24)
                            
                            zmm5 = __paddq_xmmdq_memdq(zmm14, data_1434426c0)
                            zmm0 = _mm_srai_epi32(zmm0, 0x1f)
                            zmm12 = (zmm12 & temp0_683) | zmm4
                            
                            if ((temp0_672 & 1) == 0)
                                zmm14 &= zmm0
                                zmm0 &= not.o(zmm5)
                                
                                if ((temp0_672 & 2) != 0)
                                    goto label_14023a8fb
                                
                                goto label_14023a7db
                            
                            zmm6.d = (*zmm12[0].q)[0]
                            zmm14 &= zmm0
                            zmm0 &= not.o(zmm5)
                            
                            if ((temp0_672 & 2) != 0)
                            label_14023a8fb:
                                zmm6 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q, zmm6, 0), 
                                    zmm6, 0xe2)
                                zmm12 = data_142d3f670
                                zmm14 |= zmm0
                                
                                if ((temp0_672 & 4) == 0)
                                    goto label_14023a7f1
                                
                                goto label_14023a921
                            
                        label_14023a7db:
                            zmm12 = data_142d3f670
                            zmm14 |= zmm0
                            
                            if ((temp0_672 & 4) == 0)
                            label_14023a7f1:
                                
                                if ((temp0_672 & 8) != 0)
                                    goto label_14023a941
                                
                                goto label_14023a7fa
                            
                        label_14023a921:
                            zmm6 =
                                _mm_shuffle_ps(zmm6, _mm_shuffle_ps(*zmm14[0].q, zmm6, 0x30), 0x84)
                            
                            if ((temp0_672 & 8) != 0)
                            label_14023a941:
                                zmm6 = _mm_shuffle_ps(zmm6, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm6, 0x20), 
                                    0x24)
                                zmm1 = var_2d8_1
                                zmm0 = zx.o(0)
                                
                                if ((temp0_677 & 1) != 0)
                                    goto label_14023a813
                                
                                goto label_14023a959
                            
                        label_14023a7fa:
                            zmm1 = var_2d8_1
                            zmm0 = zx.o(0)
                            
                            if ((temp0_677 & 1) == 0)
                            label_14023a959:
                                
                                if ((temp0_677 & 2) != 0)
                                label_14023a96c:
                                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm0, 1), zmm0, 0xe2)
                                    
                                    if ((temp0_677 & 4) != 0)
                                        goto label_14023a82e
                                    
                                    goto label_14023a979
                            else
                            label_14023a813:
                                zmm0.d = zmm6.d
                                
                                if ((temp0_677 & 2) != 0)
                                    goto label_14023a96c
                            
                            if ((temp0_677 & 4) == 0)
                            label_14023a979:
                                var_218 = zmm6
                                
                                if ((temp0_677 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm6, zmm0, 0x23), 0x24)
                            else
                            label_14023a82e:
                                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm6, zmm0, 0x32), 0x84)
                                var_218 = zmm6
                                
                                if ((temp0_677 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm6, zmm0, 0x23), 0x24)
                        
                        int32_t temp0_710[0x4] = __paddq_xmmdq_memdq(var_588_1, temp0_423)
                        zmm5 = _mm_add_epi64(__paddq_xmmdq_memdq(var_4b8_1, var_568_2), zmm8)
                        int32_t temp0_713[0x4] = __paddq_xmmdq_memdq(temp0_710, var_468_1)
                        zmm6 = data_1434426c0
                        int32_t temp0_714[0x4] = _mm_add_epi64(temp0_713, zmm6)
                        zmm5 = _mm_add_epi64(zmm5, zmm6)
                        zmm6 = _mm_shuffle_epi32(zmm1, 0x50) & zmm5
                        zmm5 = _mm_shuffle_epi32(zmm1, 0xfa) & temp0_714
                        int64_t rcx_25 = _mm_shuffle_epi32(zmm6, 0x4e)[0].q
                        int64_t rsi_33 = zmm5[0].q
                        int64_t rbx_34 = _mm_shuffle_epi32(zmm5, 0x4e)[0].q
                        int32_t temp0_722[0x4] = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm6.q)), 
                                zx.o(*(arg4 + rcx_25))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rsi_33)), zx.q(*(arg4 + rbx_34)))[0].q)
                        zmm6 = _mm_srli_epi32(temp0_722, 0x15)
                        zmm5 = _mm_srli_epi32(temp0_722, 0xa) & data_143442480
                        zmm7 = data_143442440
                        arg6 = _mm_mul_ps(arg6, 
                            __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(zmm6, zmm7)), 
                                data_143442690))
                        zmm2 = _mm_add_ps(zmm2, arg6)
                        zmm5 = _mm_add_epi32(zmm5, zmm7)
                        
                        if ((temp0_113 & 1) != 0)
                            var_5f8[0] = zmm2.d
                        
                        zmm3 = _mm_cvtepi32_ps(zmm5)
                        zmm6 = var_578_1
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        
                        if ((temp0_113 & 2) == 0)
                            zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                            zmm8 = var_488_1
                            
                            if ((temp0_113 & 4) != 0)
                                goto label_14023b50a
                            
                            goto label_14023aaa0
                        
                        var_5f8[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                        zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                        zmm8 = var_488_1
                        
                        if ((temp0_113 & 4) != 0)
                        label_14023b50a:
                            var_5f8[2] = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                            zmm4 = temp0_722 & data_143442680
                            zmm13 = _mm_mul_ps(zmm13, zmm3)
                            
                            if ((temp0_113 & 8) == 0)
                                goto label_14023aab4
                            
                            goto label_14023b529
                        
                    label_14023aaa0:
                        zmm4 = temp0_722 & data_143442680
                        zmm13 = _mm_mul_ps(zmm13, zmm3)
                        
                        if ((temp0_113 & 8) == 0)
                        label_14023aab4:
                            zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442490)
                            arg5 = _mm_add_ps(arg5, zmm13)
                            
                            if ((temp0_113 & 1) != 0)
                                goto label_14023b543
                            
                            goto label_14023aac8
                        
                    label_14023b529:
                        var_5f8[3] = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442490)
                        arg5 = _mm_add_ps(arg5, zmm13)
                        
                        if ((temp0_113 & 1) != 0)
                        label_14023b543:
                            var_5e8[0] = arg5.d
                            zmm3 = _mm_cvtepi32_ps(zmm4)
                            zmm7 = var_2c8_2
                            
                            if ((temp0_113 & 2) == 0)
                                goto label_14023aadc
                            
                            goto label_14023b564
                        
                    label_14023aac8:
                        zmm3 = _mm_cvtepi32_ps(zmm4)
                        zmm7 = var_2c8_2
                        
                        if ((temp0_113 & 2) == 0)
                        label_14023aadc:
                            zmm3 = __divps_xmmps_memps(zmm3, data_1434426a0)
                            
                            if ((temp0_113 & 4) != 0)
                                goto label_14023b57f
                            
                            goto label_14023aaeb
                        
                    label_14023b564:
                        var_5e8[1] = _mm_shuffle_epi32(arg5, 0xe5)[0]
                        zmm3 = __divps_xmmps_memps(zmm3, data_1434426a0)
                        
                        if ((temp0_113 & 4) == 0)
                        label_14023aaeb:
                            zmm0 = _mm_mul_ps(zmm0, zmm3)
                            zmm2 = _mm_mul_ps(zmm2, zmm2)
                            
                            if ((temp0_113 & 8) != 0)
                                var_5e8[3] = _mm_shuffle_epi32(arg5, 0xe7)[0]
                        else
                        label_14023b57f:
                            var_5e8[2] = _mm_shuffle_epi32(arg5, 0x4e)[0]
                            zmm0 = _mm_mul_ps(zmm0, zmm3)
                            zmm2 = _mm_mul_ps(zmm2, zmm2)
                            
                            if ((temp0_113 & 8) != 0)
                                var_5e8[3] = _mm_shuffle_epi32(arg5, 0xe7)[0]
                        
                        zmm15 = _mm_add_ps(zmm15, zmm0)
                        zmm3 = _mm_sub_ps(zmm12, zmm2)
                        arg5 = _mm_mul_ps(arg5, arg5)
                        
                        if ((temp0_113 & 1) != 0)
                            var_5d8.d = zmm15[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, arg5)
                        zmm0 = _mm_mul_ps(zmm15, zmm15)
                        
                        if ((temp0_113 & 2) != 0)
                            var_5d8:4.d = _mm_shuffle_epi32(zmm15, 0xe5).d
                        
                        zmm3 = _mm_sub_ps(zmm3, zmm0)
                        arg5 = var_468_1
                        
                        if ((temp0_113 & 4) != 0)
                            var_5d8:8.d = _mm_shuffle_epi32(zmm15, 0x4e).d
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        zmm1 = _mm_sqrt_ps(zmm3)
                        zmm5 = var_3b8_2
                        
                        if ((temp0_113 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((temp0_113 & 1) != 0)
                                goto label_14023b5af
                            
                            goto label_14023ab7c
                        
                        var_5d8:0xc.d = _mm_shuffle_epi32(zmm15, 0xe7).d
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_113 & 1) != 0)
                        label_14023b5af:
                            var_5c8.d = zmm0.d
                            zmm15 = data_142fc95e0
                            
                            if ((temp0_113 & 2) == 0)
                                goto label_14023ab8b
                            
                            goto label_14023b5ce
                        
                    label_14023ab7c:
                        zmm15 = data_142fc95e0
                        
                        if ((temp0_113 & 2) == 0)
                        label_14023ab8b:
                            
                            if ((temp0_113 & 4) != 0)
                                goto label_14023b5e4
                            
                            goto label_14023ab93
                        
                    label_14023b5ce:
                        var_5c8:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_113 & 4) == 0)
                        label_14023ab93:
                            
                            if ((temp0_113 & 8) != 0)
                                var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_14023b5e4:
                            var_5c8:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                            
                            if ((temp0_113 & 8) != 0)
                                var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    
                    zmm7 ^= var_478_1
                    
                    if (_mm_movemask_ps(zmm6 & not.o(zmm7)) == 0)
                        zmm8 = var_4b8_1
                    else
                        zmm1 = __pcmpeqd_xmmdq_memdq(var_498, data_143442ac0)
                        zmm0 = zmm6 & not.o(zmm1)
                        char temp0_756 = _mm_movemask_ps(zmm0)
                        
                        if (temp0_756 != 0)
                            zmm14 = zmm5
                            zmm2 = __paddq_xmmdq_memdq(var_588_1, temp0_423)
                            zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(var_4b8_1, var_568_2), zmm8)
                            zmm2 = _mm_add_epi64(zmm2, arg5)
                            zmm4 = data_1434426c0
                            zmm2 = _mm_add_epi64(zmm2, zmm4)
                            zmm3 = _mm_add_epi64(zmm3, zmm4)
                            zmm4 = _mm_shuffle_epi32(zmm0, 0x50) & zmm3
                            zmm0 = _mm_shuffle_epi32(zmm0, 0xfa) & zmm2
                            int64_t rcx_26 = zmm4[0].q
                            int64_t rbp_24 = _mm_shuffle_epi32(zmm4, 0x4e).q
                            int64_t rsi_34 = _mm_shuffle_epi32(zmm0, 0x4e).q
                            zmm2 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zx.o(*(arg4 + rcx_26)), zx.q(*(arg4 + rbp_24))), 
                                _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), 
                                    zx.o(*(arg4 + rsi_34))[0].q).q)
                            zmm0 = _mm_srli_epi32(zmm2, 0x15)
                            zmm3 = _mm_srli_epi32(zmm2, 5) & data_143442600
                            zmm0 = __paddd_xmmdq_memdq(zmm0 & data_143442320, data_143442330)
                                | (zmm0 & data_143442610) | zmm3
                            
                            if ((temp0_756 & 1) != 0)
                                var_5f8[0] = zmm0.d
                            
                            zmm4 = _mm_srli_epi32(zmm2, 0xa)
                            uint32_t temp0_774[0x4] = _mm_slli_epi32(zmm2, 6)
                            
                            if ((temp0_756 & 2) != 0)
                                var_5f8[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                            
                            zmm3 = temp0_774 & data_143442600
                            zmm5 = zmm4 & data_143442610
                            zmm4 &= data_143442320
                            
                            if ((temp0_756 & 4) == 0)
                                zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442330)
                                zmm3 |= zmm5
                                
                                if ((temp0_756 & 8) != 0)
                                    goto label_14023be6c
                                
                                goto label_14023ad20
                            
                            var_5f8[2] = _mm_shuffle_epi32(zmm0, 0x4e).d
                            zmm6 = var_578_1
                            zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442330)
                            zmm3 |= zmm5
                            
                            if ((temp0_756 & 8) != 0)
                            label_14023be6c:
                                var_5f8[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                                zmm3 |= zmm4
                                
                                if ((temp0_756 & 1) == 0)
                                    goto label_14023ad30
                                
                                goto label_14023be7e
                            
                        label_14023ad20:
                            zmm3 |= zmm4
                            
                            if ((temp0_756 & 1) != 0)
                            label_14023be7e:
                                var_5e8[0] = zmm3[0]
                                zmm4 = _mm_slli_epi32(zmm2, 0x11)
                                
                                if ((temp0_756 & 2) != 0)
                                    var_5e8[1] = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                            else
                            label_14023ad30:
                                zmm4 = _mm_slli_epi32(zmm2, 0x11)
                                
                                if ((temp0_756 & 2) != 0)
                                    var_5e8[1] = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                            
                            zmm5 = zmm2 & data_143442620
                            zmm4 &= data_143442630
                            zmm2 &= data_143442640
                            
                            if ((temp0_756 & 4) != 0)
                                var_5e8[2] = _mm_shuffle_epi32(zmm3, 0x4e).d
                                zmm6 = var_578_1
                            
                            zmm5 = __paddd_xmmdq_memdq(zmm5, data_1434423a0)
                            zmm0 = _mm_mul_ps(zmm0, zmm0)
                            
                            if ((temp0_756 & 8) != 0)
                                var_5e8[3] = _mm_shuffle_epi32(zmm3, 0xe7).d
                            
                            zmm4 = zmm4 | zmm2 | zmm5
                            zmm2 = _mm_sub_ps(zmm12, zmm0)
                            zmm3 = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((temp0_756 & 1) != 0)
                                var_5d8.d = zmm4[0]
                            
                            zmm2 = _mm_sub_ps(zmm2, zmm3)
                            zmm0 = _mm_mul_ps(zmm4, zmm4)
                            zmm5 = zmm14
                            
                            if ((temp0_756 & 2) != 0)
                                var_5d8:4.d = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                            
                            zmm2 = _mm_sub_ps(zmm2, zmm0)
                            
                            if ((temp0_756 & 4) != 0)
                                var_5d8:8.d = _mm_shuffle_epi32(zmm4, 0x4e).d
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm2, 1)
                            zmm2 = _mm_sqrt_ps(zmm2)
                            
                            if ((temp0_756 & 8) == 0)
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                
                                if ((temp0_756 & 1) != 0)
                                    goto label_14023beb0
                                
                                goto label_14023adfb
                            
                            var_5d8:0xc.d = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                            zmm0 = _mm_and_ps(zmm0, zmm2)
                            
                            if ((temp0_756 & 1) != 0)
                            label_14023beb0:
                                var_5c8.d = zmm0.d
                                
                                if ((temp0_756 & 2) == 0)
                                    goto label_14023ae03
                                
                                goto label_14023bec6
                            
                        label_14023adfb:
                            
                            if ((temp0_756 & 2) == 0)
                            label_14023ae03:
                                
                                if ((temp0_756 & 4) != 0)
                                    goto label_14023bedc
                                
                                goto label_14023ae0b
                            
                        label_14023bec6:
                            var_5c8:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            if ((temp0_756 & 4) == 0)
                            label_14023ae0b:
                                
                                if ((temp0_756 & 8) != 0)
                                    var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_14023bedc:
                                var_5c8:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                                
                                if ((temp0_756 & 8) != 0)
                                    var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                        
                        zmm6 &= not.o(zmm7 ^ zmm1)
                        
                        if (_mm_movemask_ps(zmm6) == 0)
                            zmm8 = var_4b8_1
                        else
                            zmm1 = _mm_cmpeq_epi32(var_498, zmm15)
                            zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm6 & zmm1, 0x1f), 0x1f)
                            char temp0_798 = _mm_movemask_ps(zmm0)
                            
                            if (temp0_798 != 0)
                                zmm2 = __paddq_xmmdq_memdq(var_588_1, temp0_423)
                                zmm3 =
                                    _mm_add_epi64(__paddq_xmmdq_memdq(var_4b8_1, var_568_2), zmm8)
                                zmm2 = _mm_add_epi64(zmm2, arg5)
                                zmm4 = data_1434426c0
                                zmm2 = _mm_add_epi64(zmm2, zmm4)
                                zmm3 = _mm_add_epi64(zmm3, zmm4)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0x50) & zmm3
                                zmm0 = _mm_shuffle_epi32(zmm0, 0xfa) & zmm2
                                int64_t rcx_27 = zmm4[0].q
                                int64_t rbp_25 = _mm_shuffle_epi32(zmm4, 0x4e).q
                                int64_t rsi_35 = _mm_shuffle_epi32(zmm0, 0x4e).q
                                zmm0 = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(zx.o(*(arg4 + rcx_27)), 
                                        zx.q(*(arg4 + rbp_25))), 
                                    _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), 
                                    zx.o(*(arg4 + rsi_35))[0].q).q)
                                zmm2 = _mm_srli_epi32(zmm0, 0x15)
                                uint32_t temp0_813[0x4] = _mm_srli_epi32(zmm0, 0xa)
                                zmm2 = __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2, data_143442440)), 
                                    data_143442690)
                                
                                if ((temp0_798 & 1) == 0)
                                    zmm3 = temp0_813 & data_143442480
                                    
                                    if ((temp0_798 & 2) != 0)
                                        goto label_14023bf23
                                    
                                    goto label_14023af2c
                                
                                var_5f8[0] = zmm2.d
                                zmm3 = temp0_813 & data_143442480
                                
                                if ((temp0_798 & 2) != 0)
                                label_14023bf23:
                                    var_5f8[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                    zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442440)
                                    
                                    if ((temp0_798 & 4) == 0)
                                        goto label_14023af3c
                                    
                                    goto label_14023bf3e
                                
                            label_14023af2c:
                                zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442440)
                                
                                if ((temp0_798 & 4) == 0)
                                label_14023af3c:
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_798 & 8) != 0)
                                        goto label_14023bf54
                                    
                                    goto label_14023af47
                                
                            label_14023bf3e:
                                var_5f8[2] = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                zmm3 = _mm_cvtepi32_ps(zmm3)
                                
                                if ((temp0_798 & 8) != 0)
                                label_14023bf54:
                                    var_5f8[3] = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                                    zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                    
                                    if ((temp0_798 & 1) == 0)
                                        goto label_14023af56
                                    
                                    goto label_14023bf69
                                
                            label_14023af47:
                                zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                
                                if ((temp0_798 & 1) == 0)
                                label_14023af56:
                                    zmm0 &= data_143442680
                                    
                                    if ((temp0_798 & 2) != 0)
                                        goto label_14023bf84
                                    
                                    goto label_14023af66
                                
                            label_14023bf69:
                                var_5e8[0] = zmm3[0]
                                zmm0 &= data_143442680
                                
                                if ((temp0_798 & 2) != 0)
                                label_14023bf84:
                                    var_5e8[1] = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                                    zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                                    
                                    if ((temp0_798 & 4) == 0)
                                        goto label_14023af76
                                    
                                    goto label_14023bf9f
                                
                            label_14023af66:
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                                
                                if ((temp0_798 & 4) != 0)
                                label_14023bf9f:
                                    var_5e8[2] = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                    zmm0 = _mm_cvtepi32_ps(zmm0)
                                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                                    
                                    if ((temp0_798 & 8) != 0)
                                        var_5e8[3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                                else
                                label_14023af76:
                                    zmm0 = _mm_cvtepi32_ps(zmm0)
                                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                                    
                                    if ((temp0_798 & 8) != 0)
                                        var_5e8[3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                                
                                zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                                zmm4 = _mm_sub_ps(zmm12, zmm2)
                                zmm3 = _mm_mul_ps(zmm3, zmm3)
                                
                                if ((temp0_798 & 1) != 0)
                                    var_5d8.d = zmm0.d
                                
                                zmm4 = _mm_sub_ps(zmm4, zmm3)
                                zmm2 = _mm_mul_ps(zmm0, zmm0)
                                
                                if ((temp0_798 & 2) != 0)
                                    var_5d8:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                                
                                zmm4 = _mm_sub_ps(zmm4, zmm2)
                                
                                if ((temp0_798 & 4) != 0)
                                    var_5d8:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                                
                                zmm2 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                                zmm3 = _mm_sqrt_ps(zmm4)
                                
                                if ((temp0_798 & 8) == 0)
                                    zmm2 = _mm_and_ps(zmm2, zmm3)
                                    
                                    if ((temp0_798 & 1) != 0)
                                        goto label_14023bfce
                                    
                                    goto label_14023afed
                                
                                var_5d8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                zmm2 = _mm_and_ps(zmm2, zmm3)
                                
                                if ((temp0_798 & 1) != 0)
                                label_14023bfce:
                                    var_5c8.d = zmm2.d
                                    
                                    if ((temp0_798 & 2) == 0)
                                        goto label_14023aff5
                                    
                                    goto label_14023bfe4
                                
                            label_14023afed:
                                
                                if ((temp0_798 & 2) == 0)
                                label_14023aff5:
                                    
                                    if ((temp0_798 & 4) != 0)
                                        goto label_14023bffa
                                    
                                    goto label_14023affd
                                
                            label_14023bfe4:
                                var_5c8:4.d = _mm_shuffle_epi32(zmm2, 0xe5).d
                                
                                if ((temp0_798 & 4) == 0)
                                label_14023affd:
                                    
                                    if ((temp0_798 & 8) != 0)
                                        var_5c8:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                                else
                                label_14023bffa:
                                    var_5c8:8.d = _mm_shuffle_epi32(zmm2, 0x4e).d
                                    
                                    if ((temp0_798 & 8) != 0)
                                        var_5c8:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                            
                            zmm1 &= not.o(zmm6)
                            
                            if (_mm_movemask_ps(_mm_slli_epi32(zmm1, 0x1f)) == 0)
                                zmm8 = var_4b8_1
                            else
                                zmm0 = __pcmpeqd_xmmdq_memdq(var_498, data_143442ad0)
                                char temp0_840 = _mm_movemask_ps(_mm_slli_epi32(zmm6 & zmm0, 0x1f))
                                
                                if (temp0_840 != 0)
                                    if ((temp0_840 & 1) == 0)
                                        if ((temp0_840 & 2) != 0)
                                            goto label_14023783b
                                        
                                        goto label_14023b05f
                                    
                                    var_5f8[0] = 0
                                    
                                    if ((temp0_840 & 2) != 0)
                                    label_14023783b:
                                        var_5f8[1] = 0
                                        
                                        if ((temp0_840 & 4) == 0)
                                            goto label_14023b067
                                        
                                        goto label_14023784b
                                    
                                label_14023b05f:
                                    
                                    if ((temp0_840 & 4) == 0)
                                    label_14023b067:
                                        
                                        if ((temp0_840 & 8) != 0)
                                            goto label_14023785b
                                        
                                        goto label_14023b06f
                                    
                                label_14023784b:
                                    var_5f8[2] = 0
                                    
                                    if ((temp0_840 & 8) != 0)
                                    label_14023785b:
                                        var_5f8[3] = 0
                                        
                                        if ((temp0_840 & 1) == 0)
                                            goto label_14023b077
                                        
                                        goto label_14023786b
                                    
                                label_14023b06f:
                                    
                                    if ((temp0_840 & 1) == 0)
                                    label_14023b077:
                                        
                                        if ((temp0_840 & 2) != 0)
                                            goto label_14023787b
                                        
                                        goto label_14023b07f
                                    
                                label_14023786b:
                                    var_5e8[0] = 0
                                    
                                    if ((temp0_840 & 2) != 0)
                                    label_14023787b:
                                        var_5e8[1] = 0
                                        
                                        if ((temp0_840 & 4) == 0)
                                            goto label_14023b087
                                        
                                        goto label_14023788b
                                    
                                label_14023b07f:
                                    
                                    if ((temp0_840 & 4) == 0)
                                    label_14023b087:
                                        
                                        if ((temp0_840 & 8) != 0)
                                            goto label_14023789b
                                        
                                        goto label_14023b08f
                                    
                                label_14023788b:
                                    var_5e8[2] = 0
                                    
                                    if ((temp0_840 & 8) != 0)
                                    label_14023789b:
                                        var_5e8[3] = 0
                                        
                                        if ((temp0_840 & 1) == 0)
                                            goto label_14023b097
                                        
                                        goto label_1402378ab
                                    
                                label_14023b08f:
                                    
                                    if ((temp0_840 & 1) == 0)
                                    label_14023b097:
                                        
                                        if ((temp0_840 & 2) != 0)
                                            goto label_1402378bb
                                        
                                        goto label_14023b09f
                                    
                                label_1402378ab:
                                    var_5d8.d = 0
                                    
                                    if ((temp0_840 & 2) != 0)
                                    label_1402378bb:
                                        var_5d8:4.d = 0
                                        
                                        if ((temp0_840 & 4) == 0)
                                            goto label_14023b0a7
                                        
                                        goto label_1402378cb
                                    
                                label_14023b09f:
                                    
                                    if ((temp0_840 & 4) == 0)
                                    label_14023b0a7:
                                        
                                        if ((temp0_840 & 8) != 0)
                                            goto label_1402378db
                                        
                                        goto label_14023b0af
                                    
                                label_1402378cb:
                                    var_5d8:8.d = 0
                                    
                                    if ((temp0_840 & 8) != 0)
                                    label_1402378db:
                                        var_5d8:0xc.d = 0
                                        
                                        if ((temp0_840 & 1) == 0)
                                            goto label_14023b0b7
                                        
                                        goto label_1402378eb
                                    
                                label_14023b0af:
                                    
                                    if ((temp0_840 & 1) == 0)
                                    label_14023b0b7:
                                        
                                        if ((temp0_840 & 2) != 0)
                                            goto label_1402378fe
                                        
                                        goto label_14023b0bf
                                    
                                label_1402378eb:
                                    var_5c8.d = 0x3f800000
                                    
                                    if ((temp0_840 & 2) != 0)
                                    label_1402378fe:
                                        var_5c8:4.d = 0x3f800000
                                        
                                        if ((temp0_840 & 4) == 0)
                                            goto label_14023b0c7
                                        
                                        goto label_140237911
                                    
                                label_14023b0bf:
                                    
                                    if ((temp0_840 & 4) != 0)
                                    label_140237911:
                                        var_5c8:8.d = 0x3f800000
                                        
                                        if ((temp0_840 & 8) != 0)
                                            var_5c8:0xc.d = 0x3f800000
                                    else
                                    label_14023b0c7:
                                        
                                        if ((temp0_840 & 8) != 0)
                                            var_5c8:0xc.d = 0x3f800000
                                
                                char temp0_842 =
                                    _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm1), 0x1f))
                                zmm8 = var_4b8_1
                                
                                if (temp0_842 != 0)
                                    if ((temp0_842 & 1) == 0)
                                        if ((temp0_842 & 2) != 0)
                                            goto label_140237939
                                        
                                        goto label_14023b107
                                    
                                    var_5f8[0] = 0
                                    
                                    if ((temp0_842 & 2) != 0)
                                    label_140237939:
                                        var_5f8[1] = 0
                                        
                                        if ((temp0_842 & 4) == 0)
                                            goto label_14023b10f
                                        
                                        goto label_140237949
                                    
                                label_14023b107:
                                    
                                    if ((temp0_842 & 4) == 0)
                                    label_14023b10f:
                                        
                                        if ((temp0_842 & 8) != 0)
                                            goto label_140237959
                                        
                                        goto label_14023b117
                                    
                                label_140237949:
                                    var_5f8[2] = 0
                                    
                                    if ((temp0_842 & 8) != 0)
                                    label_140237959:
                                        var_5f8[3] = 0
                                        
                                        if ((temp0_842 & 1) == 0)
                                            goto label_14023b11f
                                        
                                        goto label_140237969
                                    
                                label_14023b117:
                                    
                                    if ((temp0_842 & 1) == 0)
                                    label_14023b11f:
                                        
                                        if ((temp0_842 & 2) != 0)
                                            goto label_140237979
                                        
                                        goto label_14023b127
                                    
                                label_140237969:
                                    var_5e8[0] = 0
                                    
                                    if ((temp0_842 & 2) != 0)
                                    label_140237979:
                                        var_5e8[1] = 0
                                        
                                        if ((temp0_842 & 4) == 0)
                                            goto label_14023b12f
                                        
                                        goto label_140237989
                                    
                                label_14023b127:
                                    
                                    if ((temp0_842 & 4) == 0)
                                    label_14023b12f:
                                        
                                        if ((temp0_842 & 8) != 0)
                                            goto label_140237999
                                        
                                        goto label_14023b137
                                    
                                label_140237989:
                                    var_5e8[2] = 0
                                    
                                    if ((temp0_842 & 8) != 0)
                                    label_140237999:
                                        var_5e8[3] = 0
                                        
                                        if ((temp0_842 & 1) == 0)
                                            goto label_14023b13f
                                        
                                        goto label_1402379a9
                                    
                                label_14023b137:
                                    
                                    if ((temp0_842 & 1) == 0)
                                    label_14023b13f:
                                        
                                        if ((temp0_842 & 2) != 0)
                                            goto label_1402379b9
                                        
                                        goto label_14023b147
                                    
                                label_1402379a9:
                                    var_5d8.d = 0
                                    
                                    if ((temp0_842 & 2) != 0)
                                    label_1402379b9:
                                        var_5d8:4.d = 0
                                        
                                        if ((temp0_842 & 4) == 0)
                                            goto label_14023b14f
                                        
                                        goto label_1402379c9
                                    
                                label_14023b147:
                                    
                                    if ((temp0_842 & 4) == 0)
                                    label_14023b14f:
                                        
                                        if ((temp0_842 & 8) != 0)
                                            goto label_1402379d9
                                        
                                        goto label_14023b157
                                    
                                label_1402379c9:
                                    var_5d8:8.d = 0
                                    
                                    if ((temp0_842 & 8) != 0)
                                    label_1402379d9:
                                        var_5d8:0xc.d = 0
                                        
                                        if ((temp0_842 & 1) == 0)
                                            goto label_14023b15f
                                        
                                        goto label_1402379e9
                                    
                                label_14023b157:
                                    
                                    if ((temp0_842 & 1) == 0)
                                    label_14023b15f:
                                        
                                        if ((temp0_842 & 2) != 0)
                                            goto label_1402379fc
                                        
                                        goto label_14023b167
                                    
                                label_1402379e9:
                                    var_5c8.d = 0x3f800000
                                    
                                    if ((temp0_842 & 2) != 0)
                                    label_1402379fc:
                                        var_5c8:4.d = 0x3f800000
                                        
                                        if ((temp0_842 & 4) == 0)
                                            goto label_14023b16f
                                        
                                        goto label_140237a0f
                                    
                                label_14023b167:
                                    
                                    if ((temp0_842 & 4) != 0)
                                    label_140237a0f:
                                        var_5c8:8.d = 0x3f800000
                                        
                                        if ((temp0_842 & 8) != 0)
                                            var_5c8:0xc.d = 0x3f800000
                                    else
                                    label_14023b16f:
                                        
                                        if ((temp0_842 & 8) != 0)
                                            var_5c8:0xc.d = 0x3f800000
            
            zmm0 = _mm_cmpeq_epi32(var_598_1, zmm5) & not.o(zmm11)
            char temp0_844 = _mm_movemask_ps(zmm0)
            
            if (temp0_844 != 0)
                zmm13 = zmm0
                zmm1 = zmm12
                zmm0 = _mm_shuffle_epi32(zmm5, 0xf5)
                zmm6 = _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(zmm5, var_3a8), 0xe8), 
                    _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(zmm0, var_388_1), 0xe8).q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm6)
                zmm12 = _mm_shuffle_epi32(zmm6, 0x4e)
                zmm6 = _mm_unpacklo_epi32(zmm6, zmm0.q)
                int32_t temp0_855[0x4] =
                    _mm_unpacklo_epi32(zmm12, _mm_cmpgt_epi32(zx.o(0), zmm12).q)
                zmm0 = var_558_2 & zmm13
                uint128_t var_558_3 = zmm0
                zmm0 = _mm_slli_epi32(zmm0, 0x1f)
                char temp0_857 = _mm_movemask_ps(zmm0)
                uint128_t var_488_2 = zmm6
                uint128_t var_508
                float var_4f8[0x4]
                uint128_t var_4e8
                int32_t var_4d8[0x4]
                
                if (temp0_857 == 0)
                    arg5 = var_438_1
                    zmm12 = zmm1
                else
                    zmm5 = temp0_423
                    zmm14 = _mm_add_epi64(temp0_855, zmm5)
                    zmm4 = __paddq_xmmdq_memdq(_mm_add_epi64(zmm6, var_568_2), var_5a8_1)
                    zmm14 = __paddq_xmmdq_memdq(zmm14, var_438_1)
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_5b8, 0x1f), 0x1f)
                    zmm0 = _mm_srai_epi32(zmm0, 0x1f) & zmm1
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        int32_t temp0_866[0x4] = _mm_cmpeq_epi32(zmm15, zmm15)
                        arg6 = var_568_2
                        zmm3 = zmm5
                        zmm11 = zmm6
                        zmm5 = data_1434426b0
                        zmm2 = _mm_add_epi64(zmm14, zmm5)
                        zmm5 = _mm_add_epi64(zmm4, zmm5)
                        zmm6 = zmm0 ^ temp0_866
                        zmm7 = _mm_shuffle_epi32(zmm6, 0x50)
                        zmm4 = (zmm4 & zmm7) | (zmm7 & not.o(zmm5))
                        zmm5 = _mm_shuffle_epi32(zmm6, 0xfa)
                        zmm14 = (zmm14 & zmm5) | (zmm5 & not.o(zmm2))
                        zmm2 = _mm_add_epi64(var_588_1, zmm3)
                        zmm5 = _mm_add_epi64(_mm_add_epi64(zmm8, arg6), zmm11)
                        zmm2 = _mm_add_epi64(zmm2, temp0_855)
                        zmm6 = data_1434426c0
                        zmm2 = _mm_add_epi64(zmm2, zmm6)
                        zmm5 = _mm_add_epi64(zmm5, zmm6)
                        zmm6 = _mm_shuffle_epi32(zmm0, 0x50) & zmm5
                        zmm0 = _mm_shuffle_epi32(zmm0, 0xfa) & zmm2
                        int64_t rbp_26 = _mm_shuffle_epi32(zmm6, 0x4e).q
                        int64_t rsi_36 = zmm0.q
                        zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                        zmm0 = _mm_cvtepi32_ps(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(zx.o(0), *(arg4 + zmm6.q), 0), 
                                    *(arg4 + rbp_26), 2), 
                                *(arg4 + rsi_36), 4), 
                            *(arg4 + zmm0.q), 6))
                    
                    uint128_t var_2e8
                    zmm2 = var_2e8
                    arg5 = zmm1 & not.o(data_1434426d0)
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    zmm1 = data_1434422d0
                    zmm8 = _mm_cmpeq_epi32(var_5b8 & zmm1, zmm1)
                    zmm1 = _mm_slli_epi32(var_558_3 & zmm8, 0x1f)
                    char temp0_889 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_889 == 0)
                        zmm11 = var_4a8_1
                    else
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        float var_3d8[0x4]
                        
                        if ((temp0_889 & 1) != 0)
                            zmm2 = zx.o(*zmm4[0].q)
                            var_3d8[0] = zmm2.d
                        
                        zmm11 = var_4a8_1
                        zmm1 ^= _mm_cmpeq_epi32(zmm2, zmm2)
                        
                        if ((temp0_889 & 2) != 0)
                            var_3d8 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), var_3d8, 0), 
                                var_3d8, 0xe2)
                        
                        zmm2 = data_1434426b0
                        zmm6 = _mm_add_epi64(zmm14, zmm2)
                        zmm2 = _mm_add_epi64(zmm4, zmm2)
                        zmm5 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm1 = _mm_shuffle_epi32(zmm1, 0xfa)
                        
                        if ((temp0_889 & 4) != 0)
                            zmm11 = var_3d8
                            var_3d8 = _mm_shuffle_ps(zmm11, 
                                _mm_shuffle_ps(zx.o(*zmm14[0].q), zmm11, 0x30), 0x84)
                            zmm11 = var_4a8_1
                        
                        zmm4 &= zmm5
                        zmm5 &= not.o(zmm2)
                        zmm2 = zmm14 & zmm1
                        zmm1 &= not.o(zmm6)
                        
                        if ((temp0_889 & 8) != 0)
                            zmm6 = var_3d8
                            zmm3 = _mm_shuffle_ps(zmm6, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q), zmm6, 
                                    0x20), 
                                0x24)
                        else
                            zmm3 = var_3d8
                        
                        zmm4 |= zmm5
                        var_3d8 = zmm3
                        zmm6 = _mm_cvtepi32_ps(__andps_xmmxud_memxud(zmm3, data_143442cd0))
                        zmm14 = zmm2 | zmm1
                        zmm2 = var_2e8
                    
                    zmm0 = _mm_or_ps(zmm0, arg5)
                    zmm15 = data_142fc95e0
                    int32_t temp0_924[0x4] = _mm_cmpeq_epi32(var_5b8 & zmm15, zmm15)
                    char temp0_926 = _mm_movemask_ps(_mm_slli_epi32(var_558_3 & temp0_924, 0x1f))
                    
                    if (temp0_926 == 0)
                        zmm12 = data_143442c20
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        zmm3 = data_1434426d0
                    else
                        if ((temp0_926 & 1) == 0)
                            arg6 = _mm_cmpeq_epi32(arg6, arg6)
                            
                            if ((temp0_926 & 2) != 0)
                                goto label_14023bd1a
                            
                            goto label_14023b6a3
                        
                        zmm2.d = zx.d(*zmm4[0].q)
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        
                        if ((temp0_926 & 2) != 0)
                        label_14023bd1a:
                            zmm2 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0), 
                                zmm2, 0xe2)
                            zmm12 = data_143442c20
                            
                            if ((temp0_926 & 4) == 0)
                                goto label_14023b6b3
                            
                            goto label_14023bd3e
                        
                    label_14023b6a3:
                        zmm12 = data_143442c20
                        
                        if ((temp0_926 & 4) != 0)
                        label_14023bd3e:
                            zmm2 = _mm_shuffle_ps(zmm2, 
                                _mm_shuffle_ps(zx.o(*zmm14[0].q), zmm2, 0x30), 0x84)
                            
                            if ((temp0_926 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e).q), zmm2, 
                                        0x20), 
                                    0x24)
                        else
                        label_14023b6b3:
                            
                            if ((temp0_926 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e).q), zmm2, 
                                        0x20), 
                                    0x24)
                        
                        zmm3 = data_1434426d0
                        var_2e8 = zmm2
                        zmm2 = _mm_cvtepi32_ps(__andps_xmmxud_memxud(zmm2, data_143442cd0))
                    
                    zmm0 = __mulps_xmmps_memps(_mm_add_ps(zmm0, zmm12), data_142dd3fa0)
                    
                    if ((temp0_857 & 1) == 0)
                        zmm6 = _mm_and_ps(zmm6, zmm8)
                        zmm8 = _mm_andnot_ps(zmm8, zmm3)
                        
                        if ((temp0_857 & 2) != 0)
                            goto label_14023bbd5
                        
                        goto label_14023b729
                    
                    var_508.d = zmm0.d
                    zmm6 = _mm_and_ps(zmm6, zmm8)
                    zmm8 = _mm_andnot_ps(zmm8, zmm3)
                    
                    if ((temp0_857 & 2) != 0)
                    label_14023bbd5:
                        var_508:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        zmm6 = _mm_or_ps(zmm6, zmm8)
                        
                        if ((temp0_857 & 4) == 0)
                            goto label_14023b735
                        
                        goto label_14023bbef
                    
                label_14023b729:
                    zmm6 = _mm_or_ps(zmm6, zmm8)
                    
                    if ((temp0_857 & 4) == 0)
                    label_14023b735:
                        zmm6 = _mm_add_ps(zmm6, zmm12)
                        
                        if ((temp0_857 & 8) != 0)
                            goto label_14023bc09
                        
                        goto label_14023b741
                    
                label_14023bbef:
                    var_508:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                    zmm6 = _mm_add_ps(zmm6, zmm12)
                    
                    if ((temp0_857 & 8) != 0)
                    label_14023bc09:
                        var_508:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                        zmm6 = __mulps_xmmps_memps(zmm6, data_142dd3fa0)
                        zmm8 = var_4b8_1
                        
                        if ((temp0_857 & 1) == 0)
                            goto label_14023b75a
                        
                        goto label_14023bc2b
                    
                label_14023b741:
                    zmm6 = __mulps_xmmps_memps(zmm6, data_142dd3fa0)
                    zmm8 = var_4b8_1
                    
                    if ((temp0_857 & 1) == 0)
                    label_14023b75a:
                        zmm2 = _mm_and_ps(zmm2, temp0_924)
                        zmm7 = _mm_andnot_ps(temp0_924, zmm3)
                        
                        if ((temp0_857 & 2) != 0)
                            goto label_14023bc47
                        
                        goto label_14023b768
                    
                label_14023bc2b:
                    var_4f8[0] = zmm6.d
                    zmm2 = _mm_and_ps(zmm2, temp0_924)
                    zmm7 = _mm_andnot_ps(temp0_924, zmm3)
                    
                    if ((temp0_857 & 2) != 0)
                    label_14023bc47:
                        var_4f8[1] = _mm_shuffle_epi32(zmm6, 0xe5).d
                        zmm2 = _mm_or_ps(zmm2, zmm7)
                        arg5 = var_438_1
                        
                        if ((temp0_857 & 4) == 0)
                            goto label_14023b77d
                        
                        goto label_14023bc6a
                    
                label_14023b768:
                    zmm2 = _mm_or_ps(zmm2, zmm7)
                    arg5 = var_438_1
                    
                    if ((temp0_857 & 4) != 0)
                    label_14023bc6a:
                        var_4f8[2] = _mm_shuffle_epi32(zmm6, 0x4e).d
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        zmm2 = _mm_add_ps(zmm2, zmm12)
                        
                        if ((temp0_857 & 8) != 0)
                            var_4f8[3] = _mm_shuffle_epi32(zmm6, 0xe7).d
                    else
                    label_14023b77d:
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        zmm2 = _mm_add_ps(zmm2, zmm12)
                        
                        if ((temp0_857 & 8) != 0)
                            var_4f8[3] = _mm_shuffle_epi32(zmm6, 0xe7).d
                    
                    zmm6 = _mm_mul_ps(zmm6, zmm6)
                    zmm2 = __mulps_xmmps_memps(zmm2, data_142dd3fa0)
                    zmm12 = data_142d3f670
                    zmm1 = _mm_sub_ps(zmm12, zmm0)
                    
                    if ((temp0_857 & 1) != 0)
                        var_4e8.d = zmm2.d
                    
                    zmm0 = _mm_mul_ps(zmm2, zmm2)
                    zmm1 = _mm_sub_ps(zmm1, zmm6)
                    
                    if ((temp0_857 & 2) != 0)
                        var_4e8:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                    
                    zmm1 = _mm_sub_ps(zmm1, zmm0)
                    
                    if ((temp0_857 & 4) != 0)
                        var_4e8:8.d = _mm_shuffle_epi32(zmm2, 0x4e).d
                    
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 2)
                    zmm1 = _mm_sqrt_ps(zmm1)
                    
                    if ((temp0_857 & 8) == 0)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_857 & 1) != 0)
                            goto label_14023bca0
                        
                        goto label_14023b80e
                    
                    var_4e8:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_857 & 1) != 0)
                    label_14023bca0:
                        var_4d8[0] = zmm0.d
                        
                        if ((temp0_857 & 2) == 0)
                            goto label_14023b816
                        
                        goto label_14023bcb6
                    
                label_14023b80e:
                    
                    if ((temp0_857 & 2) == 0)
                    label_14023b816:
                        
                        if ((temp0_857 & 4) != 0)
                            goto label_14023bccc
                        
                        goto label_14023b81e
                    
                label_14023bcb6:
                    var_4d8[1] = _mm_shuffle_epi32(zmm0, 0xe5).d
                    
                    if ((temp0_857 & 4) == 0)
                    label_14023b81e:
                        
                        if ((temp0_857 & 8) != 0)
                            var_4d8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                    else
                    label_14023bccc:
                        var_4d8[2] = _mm_shuffle_epi32(zmm0, 0x4e).d
                        
                        if ((temp0_857 & 8) != 0)
                            var_4d8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm13 & var_448_1, 0x1f)) != 0)
                    zmm2 = __pcmpeqd_xmmdq_memdq(var_498, data_142d3f5b0)
                    zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm13 & zmm2, 0x1f), 0x1f)
                    char temp0_964 = _mm_movemask_ps(zmm0)
                    uint32_t var_598_2[0x4] = zmm13
                    
                    if (temp0_964 != 0)
                        uint128_t var_558_4 = zmm2
                        int32_t temp0_965[0x4] = __paddq_xmmdq_memdq(var_588_1, temp0_423)
                        zmm1 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(zmm8, var_568_2), var_488_2)
                        int32_t temp0_968[0x4] = __paddq_xmmdq_memdq(temp0_965, temp0_855)
                        zmm2 = data_1434426c0
                        zmm7 = zmm2
                        int32_t temp0_969[0x4] = _mm_add_epi64(temp0_968, zmm2)
                        zmm1 = _mm_add_epi64(zmm1, zmm2)
                        uint32_t temp0_971[0x4] = _mm_shuffle_epi32(zmm0, 0x50)
                        zmm1 &= temp0_971
                        zmm6 = _mm_shuffle_epi32(zmm0, 0xfa)
                        zmm4 = temp0_969 & zmm6
                        int64_t rbp_33 = zmm1.q
                        void* rcx_29 = arg4 + rbp_33
                        zmm2 = *(arg4 + rbp_33)
                        int64_t rbp_34 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        void* rsi_37 = arg4 + rbp_34
                        zmm12 = *(arg4 + rbp_34)
                        int64_t rbp_35 = zmm4[0].q
                        void* rbx_37 = arg4 + rbp_35
                        zmm1 = *(arg4 + rbp_35)
                        int64_t rbp_36 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        void* rdi_1 = arg4 + rbp_36
                        zmm13 = *(arg4 + rbp_36)
                        zmm5 = temp0_971 & zmm7
                        zmm0 = zmm6 & zmm7
                        zmm4 = *(zmm5[0].q + rcx_29)
                        zmm5 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rsi_37)
                        arg6 = *(zmm0.q + rbx_37)
                        zmm15 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rdi_1)
                        zmm0 = data_1434426e0
                        zmm3 = temp0_971 & zmm0
                        zmm6 &= zmm0
                        zmm14 = *(zmm3[0].q + rcx_29)
                        zmm11 = *(_mm_shuffle_epi32(zmm3, 0x4e).q + rsi_37)
                        arg5 = *(zmm6.q + rbx_37)
                        zmm3 = *(_mm_shuffle_epi32(zmm6, 0x4e).q + rdi_1)
                        
                        if ((temp0_964 & 1) == 0)
                            if ((temp0_964 & 2) != 0)
                                goto label_14023bd60
                            
                            goto label_14023b9cf
                        
                        var_508.d = zmm2.d
                        
                        if ((temp0_964 & 2) != 0)
                        label_14023bd60:
                            var_508:4.d = zmm12[0]
                            
                            if ((temp0_964 & 4) == 0)
                                goto label_14023b9d7
                            
                            goto label_14023bd72
                        
                    label_14023b9cf:
                        
                        if ((temp0_964 & 4) != 0)
                        label_14023bd72:
                            var_508:8.d = zmm1.d
                            
                            if ((temp0_964 & 8) != 0)
                            label_14023bd83:
                                var_508:0xc.d = zmm13[0]
                                
                                if ((temp0_964 & 1) == 0)
                                    goto label_14023b9e7
                                
                                goto label_14023bd95
                        else
                        label_14023b9d7:
                            
                            if ((temp0_964 & 8) != 0)
                                goto label_14023bd83
                        
                        if ((temp0_964 & 1) != 0)
                        label_14023bd95:
                            var_4f8[0] = zmm4[0]
                            zmm2 = _mm_unpacklo_ps(zmm2, zmm12[0].q)
                            zmm1 = _mm_unpacklo_ps(zmm1, zmm13[0].q)
                            
                            if ((temp0_964 & 2) != 0)
                                var_4f8[1] = zmm5[0]
                        else
                        label_14023b9e7:
                            zmm2 = _mm_unpacklo_ps(zmm2, zmm12[0].q)
                            zmm1 = _mm_unpacklo_ps(zmm1, zmm13[0].q)
                            
                            if ((temp0_964 & 2) != 0)
                                var_4f8[1] = zmm5[0]
                        
                        zmm2 = zmm2.q | zmm1.q << 0x40
                        zmm4 = _mm_unpacklo_ps(zmm4, zmm5[0].q)
                        zmm0 = _mm_unpacklo_ps(arg6, zmm15[0].q)
                        zmm12 = data_142d3f670
                        
                        if ((temp0_964 & 4) != 0)
                            var_4f8[2] = arg6[0]
                        
                        zmm4 = zmm4[0].q | zmm0.q << 0x40
                        zmm0 = _mm_unpacklo_ps(zmm14, zmm11.q)
                        zmm1 = _mm_unpacklo_ps(arg5, zmm3[0].q)
                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                        zmm8 = var_4b8_1
                        
                        if ((temp0_964 & 8) != 0)
                            var_4f8[3] = zmm15[0]
                        
                        zmm0 = zmm0.q | zmm1.q << 0x40
                        zmm1 = _mm_sub_ps(zmm12, zmm2)
                        zmm4 = _mm_mul_ps(zmm4, zmm4)
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        
                        if ((temp0_964 & 1) != 0)
                            var_4e8.d = zmm14[0]
                        
                        zmm1 = _mm_sub_ps(zmm1, zmm4)
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        zmm15 = data_142fc95e0
                        
                        if ((temp0_964 & 2) != 0)
                            var_4e8:4.d = zmm11.d
                        
                        zmm1 = _mm_sub_ps(zmm1, zmm0)
                        zmm2 = var_558_4
                        
                        if ((temp0_964 & 4) != 0)
                            var_4e8:8.d = arg5.d
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        arg5 = var_438_1
                        
                        if ((temp0_964 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            zmm11 = var_4a8_1
                            
                            if ((temp0_964 & 1) != 0)
                                goto label_14023bdd1
                            
                            goto label_14023bad7
                        
                        var_4e8:0xc.d = zmm3[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        zmm11 = var_4a8_1
                        
                        if ((temp0_964 & 1) != 0)
                        label_14023bdd1:
                            var_4d8[0] = zmm0.d
                            zmm13 = var_598_2
                            
                            if ((temp0_964 & 2) == 0)
                                goto label_14023bae7
                            
                            goto label_14023bdf1
                        
                    label_14023bad7:
                        zmm13 = var_598_2
                        
                        if ((temp0_964 & 2) == 0)
                        label_14023bae7:
                            
                            if ((temp0_964 & 4) != 0)
                                goto label_14023be07
                            
                            goto label_14023baef
                        
                    label_14023bdf1:
                        var_4d8[1] = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_964 & 4) == 0)
                        label_14023baef:
                            
                            if ((temp0_964 & 8) != 0)
                                var_4d8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_14023be07:
                            var_4d8[2] = _mm_shuffle_epi32(zmm0, 0x4e).d
                            
                            if ((temp0_964 & 8) != 0)
                                var_4d8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                    
                    zmm2 ^= var_448_1
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm13 & zmm2, 0x1f)) != 0)
                        uint128_t var_558_5 = zmm2
                        zmm14 = _mm_srai_epi32(_mm_slli_epi32(zmm13 & var_478_1, 0x1f), 0x1f)
                        char temp0_1000 = _mm_movemask_ps(zmm14)
                        
                        if (temp0_1000 == 0)
                            arg6 = var_588_1
                            arg5 = var_488_2
                            zmm7 = var_558_5
                        else
                            zmm0 = _mm_srai_epi32(_mm_slli_epi32(var_5b8, 0x1f), 0x1f) & var_478_1
                            zmm4 = _mm_srai_epi32(_mm_slli_epi32(zmm13, 0x1f), 0x1f) & zmm0
                            uint32_t temp0_1005 = _mm_movemask_ps(zmm4)
                            zmm11 = zx.o(0)
                            uint128_t var_368
                            
                            if (temp0_1005 == 0)
                                zmm5 = zx.o(0)
                                zmm8 = zx.o(0)
                                zmm2 = var_368
                            else
                                char r10_2 = temp0_1005.b
                                uint128_t var_408
                                
                                if ((r10_2 & 1) != 0)
                                    zmm6 = var_5a8_1
                                    zmm2.d = (*zmm6.q).d
                                    var_408 = zmm2
                                    
                                    if ((r10_2 & 2) != 0)
                                        var_408 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, 
                                                var_408, 0), 
                                            var_408, 0xe2)
                                else
                                    zmm6 = var_5a8_1
                                    
                                    if ((r10_2 & 2) != 0)
                                        var_408 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, 
                                                var_408, 0), 
                                            var_408, 0xe2)
                                
                                if ((r10_2 & 4) == 0)
                                    if ((r10_2 & 8) != 0)
                                        goto label_14023c0de
                                    
                                    goto label_14023c06e
                                
                                var_408 = _mm_shuffle_ps(var_408, 
                                    _mm_shuffle_ps(*arg5.q, var_408, 0x30), 0x84)
                                char rsi_38
                                
                                if ((r10_2 & 8) != 0)
                                label_14023c0de:
                                    var_408 = _mm_shuffle_ps(var_408, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, var_408, 
                                            0x20), 
                                        0x24)
                                    rsi_38 = _mm_movemask_ps(zmm0)
                                    zmm5 = zx.o(0)
                                    
                                    if ((rsi_38 & 1) != 0)
                                        goto label_14023c07b
                                    
                                    goto label_14023c0f3
                                
                            label_14023c06e:
                                rsi_38 = _mm_movemask_ps(zmm0)
                                zmm5 = zx.o(0)
                                
                                if ((rsi_38 & 1) == 0)
                                label_14023c0f3:
                                    zmm4 ^= arg6
                                    
                                    if ((rsi_38 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(var_408, zmm5, 1), 
                                            zmm5, 0xe2)
                                else
                                label_14023c07b:
                                    zmm5 = zx.o(0)
                                    zmm5[0] = var_408.d
                                    zmm4 ^= arg6
                                    
                                    if ((rsi_38 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(var_408, zmm5, 1), 
                                            zmm5, 0xe2)
                                
                                zmm1 = __paddq_xmmdq_memdq(zmm6, data_1434426c0)
                                uint32_t temp0_1072[0x4] = _mm_shuffle_epi32(zmm4, 0x50)
                                
                                if ((rsi_38 & 4) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(var_408, zmm5, 0x32), 0x84)
                                
                                zmm0 = temp0_1072 & not.o(zmm1)
                                zmm7 = zmm6 & temp0_1072
                                
                                if ((rsi_38 & 8) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(var_408, zmm5, 0x23), 0x24)
                                
                                zmm1 = __paddq_xmmdq_memdq(arg5, data_1434426c0)
                                zmm6 = _mm_shuffle_epi32(zmm4, 0xfa)
                                zmm7 |= zmm0
                                uint128_t var_378
                                
                                if ((r10_2 & 1) != 0)
                                    zmm2.d = (*zmm7[0].q).d
                                    var_378 = zmm2
                                
                                zmm0 = zmm6 & not.o(zmm1)
                                zmm4 = arg5 & zmm6
                                
                                if ((r10_2 & 2) != 0)
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm7, 0x4e).q, var_378, 
                                            0), 
                                        var_378, 0xe2)
                                    zmm4 |= zmm0
                                    
                                    if ((r10_2 & 4) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(*zmm4[0].q, zmm1, 0x30), 0x84)
                                else
                                    zmm1 = var_378
                                    zmm4 |= zmm0
                                    
                                    if ((r10_2 & 4) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(*zmm4[0].q, zmm1, 0x30), 0x84)
                                
                                if ((r10_2 & 8) == 0)
                                    zmm8 = zx.o(0)
                                    
                                    if ((rsi_38 & 1) == 0)
                                        goto label_14023c249
                                    
                                    goto label_14023c211
                                
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                zmm8 = zx.o(0)
                                
                                if ((rsi_38 & 1) != 0)
                                label_14023c211:
                                    zmm8.d = zmm1.d
                                    zmm6 = _mm_slli_epi32(zmm6, 0x1f)
                                    zmm3 = _mm_slli_epi32(temp0_1072, 0x1f)
                                    
                                    if ((rsi_38 & 2) != 0)
                                        zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm8, 1), zmm8, 
                                            0xe2)
                                else
                                label_14023c249:
                                    zmm6 = _mm_slli_epi32(zmm6, 0x1f)
                                    zmm3 = _mm_slli_epi32(temp0_1072, 0x1f)
                                    
                                    if ((rsi_38 & 2) != 0)
                                        zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm8, 1), zmm8, 
                                            0xe2)
                                
                                zmm6 = _mm_srai_epi32(zmm6, 0x1f)
                                zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                                zmm0 = data_1434426c0
                                int32_t temp0_1095[0x4] = _mm_add_epi64(zmm4, zmm0)
                                int32_t temp0_1096[0x4] = _mm_add_epi64(zmm7, zmm0)
                                
                                if ((rsi_38 & 4) != 0)
                                    zmm8 =
                                        _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm1, zmm8, 0x32), 0x84)
                                
                                var_378 = zmm1
                                
                                if ((rsi_38 & 8) != 0)
                                    zmm8 =
                                        _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm1, zmm8, 0x23), 0x24)
                                
                                zmm2 = var_368
                                var_5a8_1 = (var_5a8_1 & zmm3) | (zmm3 & not.o(temp0_1096))
                                arg5 = (arg5 & zmm6) | (zmm6 & not.o(temp0_1095))
                            
                            zmm1 = data_1434422d0
                            zmm0 = _mm_cmpeq_epi32(var_5b8 & zmm1, zmm1) & var_478_1
                            zmm6 = _mm_srai_epi32(_mm_slli_epi32(var_598_2 & zmm0, 0x1f), 0x1f)
                            char temp0_1104 = _mm_movemask_ps(zmm6)
                            uint128_t var_398
                            uint128_t var_248
                            
                            if (temp0_1104 == 0)
                                zmm7 = zmm15
                                zmm15 = zx.o(0)
                                zmm6 = var_248
                                zmm1 = var_398
                            else
                                if ((temp0_1104 & 1) != 0)
                                    zmm4 = var_5a8_1
                                    zmm2.d = (*zmm4[0].q).d
                                    
                                    if ((temp0_1104 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e).q, zmm2, 
                                                0), 
                                            zmm2, 0xe2)
                                else
                                    zmm4 = var_5a8_1
                                    
                                    if ((temp0_1104 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e).q, zmm2, 
                                                0), 
                                            zmm2, 0xe2)
                                
                                if ((temp0_1104 & 4) == 0)
                                    if ((temp0_1104 & 8) != 0)
                                        goto label_14023c3f9
                                    
                                    goto label_14023c3aa
                                
                                zmm2 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*arg5.q, zmm2, 0x30), 0x84)
                                char rsi_39
                                
                                if ((temp0_1104 & 8) != 0)
                                label_14023c3f9:
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm2, 
                                            0x20), 
                                        0x24)
                                    rsi_39 = _mm_movemask_ps(zmm0)
                                    zmm11 = zx.o(0)
                                    
                                    if ((rsi_39 & 1) != 0)
                                        goto label_14023c3bd
                                    
                                    goto label_14023c40b
                                
                            label_14023c3aa:
                                rsi_39 = _mm_movemask_ps(zmm0)
                                zmm11 = zx.o(0)
                                
                                if ((rsi_39 & 1) == 0)
                                label_14023c40b:
                                    zmm6 ^= arg6
                                    
                                    if ((rsi_39 & 2) != 0)
                                        zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm11, 1), 
                                            zmm11, 0xe2)
                                else
                                label_14023c3bd:
                                    zmm11.d = zmm2.d
                                    zmm6 ^= arg6
                                    
                                    if ((rsi_39 & 2) != 0)
                                        zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm11, 1), 
                                            zmm11, 0xe2)
                                
                                zmm1 = __paddq_xmmdq_memdq(zmm4, data_1434426c0)
                                uint32_t temp0_1118[0x4] = _mm_shuffle_epi32(zmm6, 0x50)
                                var_368 = zmm2
                                
                                if ((rsi_39 & 4) != 0)
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(zmm2, zmm11, 0x32), 0x84)
                                
                                zmm0 = temp0_1118 & not.o(zmm1)
                                
                                if ((rsi_39 & 8) != 0)
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(var_368, zmm11, 0x23), 0x24)
                                
                                zmm1 = __paddq_xmmdq_memdq(arg5, data_1434426c0)
                                zmm6 = _mm_shuffle_epi32(zmm6, 0xfa)
                                zmm4 = (zmm4 & temp0_1118) | zmm0
                                
                                if ((temp0_1104 & 1) != 0)
                                    zmm2.d = (*zmm4[0].q).d
                                    var_398 = zmm2
                                
                                zmm0 = zmm6 & not.o(zmm1)
                                zmm2 = arg5 & zmm6
                                
                                if ((temp0_1104 & 2) != 0)
                                    zmm7 = var_398
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e).q, zmm7, 0), 
                                        zmm7, 0xe2)
                                    zmm2 |= zmm0
                                    
                                    if ((temp0_1104 & 4) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(*zmm2.q, zmm1, 0x30), 0x84)
                                else
                                    zmm1 = var_398
                                    zmm2 |= zmm0
                                    
                                    if ((temp0_1104 & 4) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(*zmm2.q, zmm1, 0x30), 0x84)
                                
                                zmm7 = zmm15
                                
                                if ((temp0_1104 & 8) == 0)
                                    zmm15 = zx.o(0)
                                    
                                    if ((rsi_39 & 1) == 0)
                                        goto label_14023c560
                                    
                                    goto label_14023c523
                                
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                zmm15 = zx.o(0)
                                
                                if ((rsi_39 & 1) != 0)
                                label_14023c523:
                                    zmm15 = zx.o(0)
                                    zmm15[0] = zmm1.d
                                    zmm6 = _mm_slli_epi32(zmm6, 0x1f)
                                    zmm3 = _mm_slli_epi32(temp0_1118, 0x1f)
                                    
                                    if ((rsi_39 & 2) != 0)
                                        zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm15, 1), 
                                            zmm15, 0xe2)
                                else
                                label_14023c560:
                                    zmm6 = _mm_slli_epi32(zmm6, 0x1f)
                                    zmm3 = _mm_slli_epi32(temp0_1118, 0x1f)
                                    
                                    if ((rsi_39 & 2) != 0)
                                        zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm15, 1), 
                                            zmm15, 0xe2)
                                
                                zmm6 = _mm_srai_epi32(zmm6, 0x1f)
                                zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                                zmm0 = data_1434426c0
                                zmm2 = _mm_add_epi64(zmm2, zmm0)
                                int32_t temp0_1142[0x4] = _mm_add_epi64(zmm4, zmm0)
                                
                                if ((rsi_39 & 4) != 0)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm1, zmm15, 0x32), 0x84)
                                
                                if ((rsi_39 & 8) != 0)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm1, zmm15, 0x23), 0x24)
                                
                                var_5a8_1 = (var_5a8_1 & zmm3) | (zmm3 & not.o(temp0_1142))
                                arg5 = (arg5 & zmm6) | (zmm6 & not.o(zmm2))
                                zmm6 = var_248
                            
                            zmm0 = _mm_cmpeq_epi32(var_5b8 & zmm7, zmm7) & var_478_1
                            int32_t temp0_1149[0x4] =
                                _mm_srai_epi32(_mm_slli_epi32(var_598_2 & zmm0, 0x1f), 0x1f)
                            char temp0_1150 = _mm_movemask_ps(temp0_1149)
                            var_398 = zmm1
                            
                            if (temp0_1150 == 0)
                                zmm3 = zx.o(0)
                                zmm6 = zx.o(0)
                                arg6 = var_588_1
                                arg5 = var_488_2
                            else
                                if ((temp0_1150 & 1) == 0)
                                    if ((temp0_1150 & 2) != 0)
                                        goto label_14023c6e6
                                    
                                    goto label_14023c652
                                
                                zmm6.d = (*var_5a8_1.q).d
                                
                                if ((temp0_1150 & 2) != 0)
                                label_14023c6e6:
                                    zmm6 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_5a8_1, 0x4e).q, zmm6, 
                                            0), 
                                        zmm6, 0xe2)
                                    
                                    if ((temp0_1150 & 4) == 0)
                                        goto label_14023c65a
                                    
                                    goto label_14023c6ff
                                
                            label_14023c652:
                                
                                if ((temp0_1150 & 4) == 0)
                                label_14023c65a:
                                    
                                    if ((temp0_1150 & 8) != 0)
                                        goto label_14023c71f
                                    
                                    goto label_14023c662
                                
                            label_14023c6ff:
                                zmm6 =
                                    _mm_shuffle_ps(zmm6, _mm_shuffle_ps(*arg5.q, zmm6, 0x30), 0x84)
                                char rsi_40
                                
                                if ((temp0_1150 & 8) != 0)
                                label_14023c71f:
                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm6, 
                                            0x20), 
                                        0x24)
                                    rsi_40 = _mm_movemask_ps(zmm0)
                                    zmm3 = zx.o(0)
                                    
                                    if ((rsi_40 & 1) != 0)
                                        goto label_14023c673
                                    
                                    goto label_14023c734
                                
                            label_14023c662:
                                rsi_40 = _mm_movemask_ps(zmm0)
                                zmm3 = zx.o(0)
                                
                                if ((rsi_40 & 1) == 0)
                                label_14023c734:
                                    zmm4 = temp0_1149 ^ arg6
                                    
                                    if ((rsi_40 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm3, 1), zmm3, 
                                            0xe2)
                                else
                                label_14023c673:
                                    zmm3 = zx.o(0)
                                    zmm3[0] = zmm6.d
                                    zmm4 = temp0_1149 ^ arg6
                                    
                                    if ((rsi_40 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm3, 1), zmm3, 
                                            0xe2)
                                
                                arg6 = var_588_1
                                zmm0 = __paddq_xmmdq_memdq(var_5a8_1, data_1434426c0)
                                zmm1 = _mm_shuffle_epi32(zmm4, 0x50)
                                
                                if ((rsi_40 & 4) != 0)
                                    zmm3 =
                                        _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm6, zmm3, 0x32), 0x84)
                                
                                uint128_t var_5a8_4 = var_5a8_1 & zmm1
                                zmm1 &= not.o(zmm0)
                                
                                if ((rsi_40 & 8) != 0)
                                    zmm3 =
                                        _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm6, zmm3, 0x23), 0x24)
                                
                                zmm2 = __paddq_xmmdq_memdq(arg5, data_1434426c0)
                                zmm0 = _mm_shuffle_epi32(zmm4, 0xfa)
                                zmm4 = var_5a8_4 | zmm1
                                int32_t var_258[0x4]
                                
                                if ((temp0_1150 & 1) != 0)
                                    zmm13 = zmm4
                                    zmm1 = *zmm4[0].q
                                    zmm4 = var_258
                                    zmm4[0] = zmm1.d
                                    arg5 &= zmm0
                                    zmm0 &= not.o(zmm2)
                                    
                                    if ((temp0_1150 & 2) != 0)
                                        zmm4 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm13, 0x4e).q, zmm4, 
                                                0), 
                                            zmm4, 0xe2)
                                else
                                    zmm13 = zmm4
                                    zmm4 = var_258
                                    arg5 &= zmm0
                                    zmm0 &= not.o(zmm2)
                                    
                                    if ((temp0_1150 & 2) != 0)
                                        zmm4 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm13, 0x4e).q, zmm4, 
                                                0), 
                                            zmm4, 0xe2)
                                
                                arg5 |= zmm0
                                
                                if ((temp0_1150 & 4) == 0)
                                    var_248 = zmm6
                                    
                                    if ((temp0_1150 & 8) != 0)
                                        goto label_14023c8b2
                                    
                                    goto label_14023c840
                                
                                zmm4 =
                                    _mm_shuffle_ps(zmm4, _mm_shuffle_ps(*arg5.q, zmm4, 0x30), 0x84)
                                var_248 = zmm6
                                
                                if ((temp0_1150 & 8) != 0)
                                label_14023c8b2:
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm4, 
                                            0x20), 
                                        0x24)
                                    arg5 = var_488_2
                                    zmm6 = zx.o(0)
                                    
                                    if ((rsi_40 & 1) != 0)
                                        goto label_14023c856
                                    
                                    goto label_14023c8c9
                                
                            label_14023c840:
                                arg5 = var_488_2
                                zmm6 = zx.o(0)
                                
                                if ((rsi_40 & 1) == 0)
                                label_14023c8c9:
                                    
                                    if ((rsi_40 & 2) != 0)
                                    label_14023c8da:
                                        zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm6, 1), zmm6, 
                                            0xe2)
                                        
                                        if ((rsi_40 & 4) != 0)
                                            goto label_14023c86d
                                        
                                        goto label_14023c8e7
                                else
                                label_14023c856:
                                    zmm6.d = zmm4[0]
                                    
                                    if ((rsi_40 & 2) != 0)
                                        goto label_14023c8da
                                
                                if ((rsi_40 & 4) == 0)
                                label_14023c8e7:
                                    var_258 = zmm4
                                    
                                    if ((rsi_40 & 8) != 0)
                                        zmm6 = _mm_shuffle_ps(zmm6, 
                                            _mm_shuffle_ps(zmm4, zmm6, 0x23), 0x24)
                                else
                                label_14023c86d:
                                    zmm6 =
                                        _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm4, zmm6, 0x32), 0x84)
                                    var_258 = zmm4
                                    
                                    if ((rsi_40 & 8) != 0)
                                        zmm6 = _mm_shuffle_ps(zmm6, 
                                            _mm_shuffle_ps(zmm4, zmm6, 0x23), 0x24)
                            
                            zmm0 = __paddq_xmmdq_memdq(arg6, temp0_423)
                            zmm1 = _mm_add_epi64(__paddq_xmmdq_memdq(var_4b8_1, var_568_2), arg5)
                            zmm0 = __paddq_xmmdq_memdq(zmm0, temp0_855)
                            zmm2 = data_1434426c0
                            zmm0 = _mm_add_epi64(zmm0, zmm2)
                            zmm1 = _mm_add_epi64(zmm1, zmm2)
                            zmm2 = _mm_shuffle_epi32(zmm14, 0x50) & zmm1
                            zmm1 = _mm_shuffle_epi32(zmm14, 0xfa) & zmm0
                            int64_t rbp_62 = _mm_shuffle_epi32(zmm2, 0x4e).q
                            int64_t rdi_2 = _mm_shuffle_epi32(zmm1, 0x4e).q
                            zmm0 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zx.o(*(arg4 + zmm2.q)), zx.q(*(arg4 + rbp_62))), 
                                _mm_unpacklo_epi32(zx.o(*(arg4 + zmm1.q)), zx.q(*(arg4 + rdi_2))).q)
                            zmm2 = _mm_srli_epi32(zmm0, 0x15)
                            zmm1 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                            zmm4 = data_143442440
                            float temp0_1204[0x4] = _mm_add_ps(zmm5, 
                                _mm_mul_ps(zmm8, 
                                    __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm4)), 
                                        data_143442690)))
                            zmm1 = _mm_add_epi32(zmm1, zmm4)
                            
                            if ((temp0_1000 & 1) != 0)
                                var_508.d = temp0_1204[0]
                            
                            zmm1 = _mm_cvtepi32_ps(zmm1)
                            zmm13 = var_598_2
                            zmm7 = var_558_5
                            
                            if ((temp0_1000 & 2) == 0)
                                zmm1 = __divps_xmmps_memps(zmm1, data_143442690)
                                zmm8 = var_4b8_1
                                
                                if ((temp0_1000 & 4) != 0)
                                    goto label_14023765b
                                
                                goto label_14023ca13
                            
                            var_508:4.d = _mm_shuffle_epi32(temp0_1204, 0xe5).d
                            zmm1 = __divps_xmmps_memps(zmm1, data_143442690)
                            zmm8 = var_4b8_1
                            
                            if ((temp0_1000 & 4) != 0)
                            label_14023765b:
                                var_508:8.d = _mm_shuffle_epi32(temp0_1204, 0x4e).d
                                zmm0 &= data_143442680
                                zmm15 = _mm_mul_ps(zmm15, zmm1)
                                
                                if ((temp0_1000 & 8) == 0)
                                    goto label_14023ca27
                                
                                goto label_14023767d
                            
                        label_14023ca13:
                            zmm0 &= data_143442680
                            zmm15 = _mm_mul_ps(zmm15, zmm1)
                            
                            if ((temp0_1000 & 8) == 0)
                            label_14023ca27:
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                                zmm11 = _mm_add_ps(zmm11, zmm15)
                                
                                if ((temp0_1000 & 1) != 0)
                                    goto label_14023769a
                                
                                goto label_14023ca3b
                            
                        label_14023767d:
                            var_508:0xc.d = _mm_shuffle_epi32(temp0_1204, 0xe7).d
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            zmm11 = _mm_add_ps(zmm11, zmm15)
                            
                            if ((temp0_1000 & 1) != 0)
                            label_14023769a:
                                var_4f8[0] = zmm11.d
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                zmm15 = data_142fc95e0
                                
                                if ((temp0_1000 & 2) == 0)
                                    goto label_14023ca4f
                                
                                goto label_1402376be
                            
                        label_14023ca3b:
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm15 = data_142fc95e0
                            
                            if ((temp0_1000 & 2) == 0)
                            label_14023ca4f:
                                zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                                
                                if ((temp0_1000 & 4) != 0)
                                    goto label_1402376dc
                                
                                goto label_14023ca5e
                            
                        label_1402376be:
                            var_4f8[1] = _mm_shuffle_epi32(zmm11, 0xe5).d
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_1000 & 4) == 0)
                            label_14023ca5e:
                                zmm6 = _mm_mul_ps(zmm6, zmm0)
                                zmm5 = _mm_mul_ps(temp0_1204, temp0_1204)
                                
                                if ((temp0_1000 & 8) != 0)
                                    var_4f8[3] = _mm_shuffle_epi32(zmm11, 0xe7).d
                            else
                            label_1402376dc:
                                var_4f8[2] = _mm_shuffle_epi32(zmm11, 0x4e).d
                                zmm6 = _mm_mul_ps(zmm6, zmm0)
                                zmm5 = _mm_mul_ps(temp0_1204, temp0_1204)
                                
                                if ((temp0_1000 & 8) != 0)
                                    var_4f8[3] = _mm_shuffle_epi32(zmm11, 0xe7).d
                            
                            zmm3 = _mm_add_ps(zmm3, zmm6)
                            zmm1 = _mm_sub_ps(zmm12, zmm5)
                            zmm11 = _mm_mul_ps(zmm11, zmm11)
                            
                            if ((temp0_1000 & 1) != 0)
                                var_4e8.d = zmm3[0]
                            
                            zmm1 = _mm_sub_ps(zmm1, zmm11)
                            zmm0 = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((temp0_1000 & 2) != 0)
                                var_4e8:4.d = _mm_shuffle_epi32(zmm3, 0xe5).d
                            
                            zmm1 = _mm_sub_ps(zmm1, zmm0)
                            
                            if ((temp0_1000 & 4) != 0)
                                var_4e8:8.d = _mm_shuffle_epi32(zmm3, 0x4e).d
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                            zmm1 = _mm_sqrt_ps(zmm1)
                            zmm11 = var_4a8_1
                            
                            if ((temp0_1000 & 8) == 0)
                                zmm0 = _mm_and_ps(zmm0, zmm1)
                                
                                if ((temp0_1000 & 1) != 0)
                                    goto label_140237711
                                
                                goto label_14023caea
                            
                            var_4e8:0xc.d = _mm_shuffle_epi32(zmm3, 0xe7).d
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((temp0_1000 & 1) != 0)
                            label_140237711:
                                var_4d8[0] = zmm0.d
                                
                                if ((temp0_1000 & 2) == 0)
                                    goto label_14023caf2
                                
                                goto label_140237727
                            
                        label_14023caea:
                            
                            if ((temp0_1000 & 2) == 0)
                            label_14023caf2:
                                
                                if ((temp0_1000 & 4) != 0)
                                    goto label_14023773d
                                
                                goto label_14023cafa
                            
                        label_140237727:
                            var_4d8[1] = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            if ((temp0_1000 & 4) == 0)
                            label_14023cafa:
                                
                                if ((temp0_1000 & 8) != 0)
                                    var_4d8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_14023773d:
                                var_4d8[2] = _mm_shuffle_epi32(zmm0, 0x4e).d
                                
                                if ((temp0_1000 & 8) != 0)
                                    var_4d8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                        
                        zmm7 ^= var_478_1
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(zmm13 & zmm7, 0x1f)) != 0)
                            zmm2 = __pcmpeqd_xmmdq_memdq(var_498, data_143442ac0)
                            zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm13 & zmm2, 0x1f), 0x1f)
                            char temp0_1233 = _mm_movemask_ps(zmm0)
                            
                            if (temp0_1233 != 0)
                                zmm1 = __paddq_xmmdq_memdq(arg6, temp0_423)
                                zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm8, var_568_2), arg5)
                                zmm1 = __paddq_xmmdq_memdq(zmm1, temp0_855)
                                zmm4 = data_1434426c0
                                zmm1 = _mm_add_epi64(zmm1, zmm4)
                                zmm3 = _mm_add_epi64(zmm3, zmm4)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0x50) & zmm3
                                zmm0 = _mm_shuffle_epi32(zmm0, 0xfa) & zmm1
                                int64_t rcx_34 = zmm4[0].q
                                int64_t rbp_63 = _mm_shuffle_epi32(zmm4, 0x4e).q
                                int64_t rdi_3 = _mm_shuffle_epi32(zmm0, 0x4e).q
                                int32_t temp0_1246[0x4] = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(zx.o(*(arg4 + rcx_34)), 
                                        zx.q(*(arg4 + rbp_63))), 
                                    _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), 
                                    zx.q(*(arg4 + rdi_3))).q)
                                uint32_t temp0_1247[0x4] = _mm_srli_epi32(temp0_1246, 0x15)
                                zmm0 = _mm_srli_epi32(temp0_1246, 5) & data_143442600
                                zmm3 =
                                    __paddd_xmmdq_memdq(temp0_1247 & data_143442320, data_143442330)
                                    | (temp0_1247 & data_143442610) | zmm0
                                
                                if ((temp0_1233 & 1) != 0)
                                    var_508.d = zmm3[0]
                                
                                zmm0 = _mm_srli_epi32(temp0_1246, 0xa)
                                zmm5 = _mm_slli_epi32(temp0_1246, 6)
                                
                                if ((temp0_1233 & 2) != 0)
                                    var_508:4.d = _mm_shuffle_epi32(zmm3, 0xe5).d
                                
                                zmm5 &= data_143442600
                                zmm1 = zmm0 & data_143442610
                                zmm0 &= data_143442320
                                
                                if ((temp0_1233 & 4) == 0)
                                    zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442330)
                                    zmm5 |= zmm1
                                    
                                    if ((temp0_1233 & 8) != 0)
                                        goto label_14023777a
                                    
                                    goto label_14023cc95
                                
                                var_508:8.d = _mm_shuffle_epi32(zmm3, 0x4e).d
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442330)
                                zmm5 |= zmm1
                                
                                if ((temp0_1233 & 8) != 0)
                                label_14023777a:
                                    var_508:0xc.d = _mm_shuffle_epi32(zmm3, 0xe7).d
                                    zmm5 |= zmm0
                                    
                                    if ((temp0_1233 & 1) == 0)
                                        goto label_14023cca5
                                    
                                    goto label_14023778f
                                
                            label_14023cc95:
                                zmm5 |= zmm0
                                
                                if ((temp0_1233 & 1) != 0)
                                label_14023778f:
                                    var_4f8[0] = zmm5[0]
                                    zmm0 = _mm_slli_epi32(temp0_1246, 0x11)
                                    
                                    if ((temp0_1233 & 2) != 0)
                                        var_4f8[1] = _mm_shuffle_epi32(zmm5, 0xe5).d
                                else
                                label_14023cca5:
                                    zmm0 = _mm_slli_epi32(temp0_1246, 0x11)
                                    
                                    if ((temp0_1233 & 2) != 0)
                                        var_4f8[1] = _mm_shuffle_epi32(zmm5, 0xe5).d
                                
                                zmm1 = temp0_1246 & data_143442620
                                zmm0 &= data_143442630
                                zmm4 = temp0_1246 & data_143442640
                                
                                if ((temp0_1233 & 4) != 0)
                                    var_4f8[2] = _mm_shuffle_epi32(zmm5, 0x4e).d
                                
                                zmm1 = __paddd_xmmdq_memdq(zmm1, data_1434423a0)
                                zmm3 = _mm_mul_ps(zmm3, zmm3)
                                
                                if ((temp0_1233 & 8) != 0)
                                    var_4f8[3] = _mm_shuffle_epi32(zmm5, 0xe7)[0]
                                
                                zmm0 = zmm0 | zmm4 | zmm1
                                zmm4 = _mm_sub_ps(zmm12, zmm3)
                                float temp0_1261[0x4] = _mm_mul_ps(zmm5, zmm5)
                                
                                if ((temp0_1233 & 1) != 0)
                                    var_4e8.d = zmm0.d
                                
                                zmm4 = _mm_sub_ps(zmm4, temp0_1261)
                                zmm1 = _mm_mul_ps(zmm0, zmm0)
                                
                                if ((temp0_1233 & 2) != 0)
                                    var_4e8:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                                
                                zmm4 = _mm_sub_ps(zmm4, zmm1)
                                
                                if ((temp0_1233 & 4) != 0)
                                    var_4e8:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                                
                                zmm1 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                                zmm3 = _mm_sqrt_ps(zmm4)
                                
                                if ((temp0_1233 & 8) == 0)
                                    zmm1 = _mm_and_ps(zmm1, zmm3)
                                    
                                    if ((temp0_1233 & 1) != 0)
                                        goto label_1402377c7
                                    
                                    goto label_14023cd74
                                
                                var_4e8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                zmm1 = _mm_and_ps(zmm1, zmm3)
                                
                                if ((temp0_1233 & 1) != 0)
                                label_1402377c7:
                                    var_4d8[0] = zmm1.d
                                    
                                    if ((temp0_1233 & 2) == 0)
                                        goto label_14023cd7c
                                    
                                    goto label_1402377dd
                                
                            label_14023cd74:
                                
                                if ((temp0_1233 & 2) == 0)
                                label_14023cd7c:
                                    
                                    if ((temp0_1233 & 4) != 0)
                                        goto label_1402377f3
                                    
                                    goto label_14023cd84
                                
                            label_1402377dd:
                                var_4d8[1] = _mm_shuffle_epi32(zmm1, 0xe5).d
                                
                                if ((temp0_1233 & 4) == 0)
                                label_14023cd84:
                                    
                                    if ((temp0_1233 & 8) != 0)
                                        var_4d8[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                                else
                                label_1402377f3:
                                    var_4d8[2] = _mm_shuffle_epi32(zmm1, 0x4e).d
                                    
                                    if ((temp0_1233 & 8) != 0)
                                        var_4d8[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                            
                            zmm13 &= zmm7 ^ zmm2
                            zmm5 = zmm13
                            
                            if (_mm_movemask_ps(_mm_slli_epi32(zmm13, 0x1f)) != 0)
                                zmm0 = _mm_cmpeq_epi32(var_498, zmm15)
                                zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm5 & zmm0, 0x1f), 0x1f)
                                char temp0_1276 = _mm_movemask_ps(zmm1)
                                
                                if (temp0_1276 != 0)
                                    int32_t temp0_1277[0x4] = __paddq_xmmdq_memdq(arg6, temp0_423)
                                    zmm8 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm8, var_568_2), arg5)
                                    int32_t temp0_1280[0x4] =
                                        __paddq_xmmdq_memdq(temp0_1277, temp0_855)
                                    zmm2 = data_1434426c0
                                    int32_t temp0_1281[0x4] = _mm_add_epi64(temp0_1280, zmm2)
                                    zmm8 = _mm_add_epi64(zmm8, zmm2)
                                    zmm2 = _mm_shuffle_epi32(zmm1, 0x50) & zmm8
                                    zmm1 = _mm_shuffle_epi32(zmm1, 0xfa) & temp0_1281
                                    int64_t rbp_64 = _mm_shuffle_epi32(zmm2, 0x4e).q
                                    int64_t rdi_4 = _mm_shuffle_epi32(zmm1, 0x4e).q
                                    zmm1 = _mm_unpacklo_epi64(
                                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm2.q)), 
                                            zx.q(*(arg4 + rbp_64))), 
                                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm1.q)), 
                                        zx.o(*(arg4 + rdi_4))[0].q).q)
                                    zmm2 = _mm_srli_epi32(zmm1, 0x15)
                                    uint32_t temp0_1291[0x4] = _mm_srli_epi32(zmm1, 0xa)
                                    zmm2 = __divps_xmmps_memps(
                                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2, data_143442440)), 
                                        data_143442690)
                                    
                                    if ((temp0_1276 & 1) == 0)
                                        zmm3 = temp0_1291 & data_143442480
                                        
                                        if ((temp0_1276 & 2) != 0)
                                            goto label_140237a50
                                        
                                        goto label_14023ceab
                                    
                                    var_508.d = zmm2.d
                                    zmm3 = temp0_1291 & data_143442480
                                    
                                    if ((temp0_1276 & 2) != 0)
                                    label_140237a50:
                                        var_508:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                        zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442440)
                                        
                                        if ((temp0_1276 & 4) == 0)
                                            goto label_14023cebb
                                        
                                        goto label_140237a6e
                                    
                                label_14023ceab:
                                    zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442440)
                                    
                                    if ((temp0_1276 & 4) == 0)
                                    label_14023cebb:
                                        zmm3 = _mm_cvtepi32_ps(zmm3)
                                        
                                        if ((temp0_1276 & 8) != 0)
                                            goto label_140237a87
                                        
                                        goto label_14023cec6
                                    
                                label_140237a6e:
                                    var_508:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_1276 & 8) != 0)
                                    label_140237a87:
                                        var_508:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                                        zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                        
                                        if ((temp0_1276 & 1) == 0)
                                            goto label_14023ced5
                                        
                                        goto label_140237a9f
                                    
                                label_14023cec6:
                                    zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                    
                                    if ((temp0_1276 & 1) == 0)
                                    label_14023ced5:
                                        zmm1 &= data_143442680
                                        
                                        if ((temp0_1276 & 2) != 0)
                                            goto label_140237abd
                                        
                                        goto label_14023cee5
                                    
                                label_140237a9f:
                                    var_4f8[0] = zmm3[0]
                                    zmm1 &= data_143442680
                                    
                                    if ((temp0_1276 & 2) != 0)
                                    label_140237abd:
                                        var_4f8[1] = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                                        zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                                        
                                        if ((temp0_1276 & 4) == 0)
                                            goto label_14023cef5
                                        
                                        goto label_140237adb
                                    
                                label_14023cee5:
                                    zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                                    
                                    if ((temp0_1276 & 4) != 0)
                                    label_140237adb:
                                        var_4f8[2] = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                        zmm1 = _mm_cvtepi32_ps(zmm1)
                                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                                        
                                        if ((temp0_1276 & 8) != 0)
                                            var_4f8[3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                                    else
                                    label_14023cef5:
                                        zmm1 = _mm_cvtepi32_ps(zmm1)
                                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                                        
                                        if ((temp0_1276 & 8) != 0)
                                            var_4f8[3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                                    
                                    zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                                    zmm4 = _mm_sub_ps(zmm12, zmm2)
                                    zmm3 = _mm_mul_ps(zmm3, zmm3)
                                    
                                    if ((temp0_1276 & 1) != 0)
                                        var_4e8.d = zmm1.d
                                    
                                    zmm4 = _mm_sub_ps(zmm4, zmm3)
                                    zmm2 = _mm_mul_ps(zmm1, zmm1)
                                    
                                    if ((temp0_1276 & 2) != 0)
                                        var_4e8:4.d = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                                    
                                    zmm4 = _mm_sub_ps(zmm4, zmm2)
                                    
                                    if ((temp0_1276 & 4) != 0)
                                        var_4e8:8.d = _mm_shuffle_epi32(zmm1, 0x4e).d
                                    
                                    zmm2 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                                    zmm3 = _mm_sqrt_ps(zmm4)
                                    
                                    if ((temp0_1276 & 8) == 0)
                                        zmm2 = _mm_and_ps(zmm2, zmm3)
                                        
                                        if ((temp0_1276 & 1) != 0)
                                            goto label_140237b10
                                        
                                        goto label_14023cf78
                                    
                                    var_4e8:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
                                    zmm2 = _mm_and_ps(zmm2, zmm3)
                                    
                                    if ((temp0_1276 & 1) != 0)
                                    label_140237b10:
                                        var_4d8[0] = zmm2.d
                                        
                                        if ((temp0_1276 & 2) == 0)
                                            goto label_14023cf80
                                        
                                        goto label_140237b26
                                    
                                label_14023cf78:
                                    
                                    if ((temp0_1276 & 2) == 0)
                                    label_14023cf80:
                                        
                                        if ((temp0_1276 & 4) != 0)
                                            goto label_140237b3c
                                        
                                        goto label_14023cf88
                                    
                                label_140237b26:
                                    var_4d8[1] = _mm_shuffle_epi32(zmm2, 0xe5).d
                                    
                                    if ((temp0_1276 & 4) == 0)
                                    label_14023cf88:
                                        
                                        if ((temp0_1276 & 8) != 0)
                                            var_4d8[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                                    else
                                    label_140237b3c:
                                        var_4d8[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                                        
                                        if ((temp0_1276 & 8) != 0)
                                            var_4d8[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                                
                                zmm0 &= not.o(zmm5)
                                
                                if (_mm_movemask_ps(_mm_slli_epi32(zmm0, 0x1f)) != 0)
                                    zmm1 = __pcmpeqd_xmmdq_memdq(var_498, data_143442ad0)
                                    char temp0_1318 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm5 & zmm1, 0x1f))
                                    
                                    if (temp0_1318 != 0)
                                        if ((temp0_1318 & 1) == 0)
                                            if ((temp0_1318 & 2) != 0)
                                                goto label_140237b65
                                            
                                            goto label_14023cfea
                                        
                                        var_508.d = 0
                                        
                                        if ((temp0_1318 & 2) != 0)
                                        label_140237b65:
                                            var_508:4.d = 0
                                            
                                            if ((temp0_1318 & 4) == 0)
                                                goto label_14023cff2
                                            
                                            goto label_140237b78
                                        
                                    label_14023cfea:
                                        
                                        if ((temp0_1318 & 4) == 0)
                                        label_14023cff2:
                                            
                                            if ((temp0_1318 & 8) != 0)
                                                goto label_140237b8b
                                            
                                            goto label_14023cffa
                                        
                                    label_140237b78:
                                        var_508:8.d = 0
                                        
                                        if ((temp0_1318 & 8) != 0)
                                        label_140237b8b:
                                            var_508:0xc.d = 0
                                            
                                            if ((temp0_1318 & 1) == 0)
                                                goto label_14023d002
                                            
                                            goto label_140237b9e
                                        
                                    label_14023cffa:
                                        
                                        if ((temp0_1318 & 1) == 0)
                                        label_14023d002:
                                            
                                            if ((temp0_1318 & 2) != 0)
                                                goto label_140237bb1
                                            
                                            goto label_14023d00a
                                        
                                    label_140237b9e:
                                        var_4f8[0] = 0
                                        
                                        if ((temp0_1318 & 2) != 0)
                                        label_140237bb1:
                                            var_4f8[1] = 0
                                            
                                            if ((temp0_1318 & 4) == 0)
                                                goto label_14023d012
                                            
                                            goto label_140237bc4
                                        
                                    label_14023d00a:
                                        
                                        if ((temp0_1318 & 4) == 0)
                                        label_14023d012:
                                            
                                            if ((temp0_1318 & 8) != 0)
                                                goto label_140237bd7
                                            
                                            goto label_14023d01a
                                        
                                    label_140237bc4:
                                        var_4f8[2] = 0
                                        
                                        if ((temp0_1318 & 8) != 0)
                                        label_140237bd7:
                                            var_4f8[3] = 0
                                            
                                            if ((temp0_1318 & 1) == 0)
                                                goto label_14023d022
                                            
                                            goto label_140237bea
                                        
                                    label_14023d01a:
                                        
                                        if ((temp0_1318 & 1) == 0)
                                        label_14023d022:
                                            
                                            if ((temp0_1318 & 2) != 0)
                                                goto label_140237bfd
                                            
                                            goto label_14023d02a
                                        
                                    label_140237bea:
                                        var_4e8.d = 0
                                        
                                        if ((temp0_1318 & 2) != 0)
                                        label_140237bfd:
                                            var_4e8:4.d = 0
                                            
                                            if ((temp0_1318 & 4) == 0)
                                                goto label_14023d032
                                            
                                            goto label_140237c10
                                        
                                    label_14023d02a:
                                        
                                        if ((temp0_1318 & 4) == 0)
                                        label_14023d032:
                                            
                                            if ((temp0_1318 & 8) != 0)
                                                goto label_140237c23
                                            
                                            goto label_14023d03a
                                        
                                    label_140237c10:
                                        var_4e8:8.d = 0
                                        
                                        if ((temp0_1318 & 8) != 0)
                                        label_140237c23:
                                            var_4e8:0xc.d = 0
                                            
                                            if ((temp0_1318 & 1) == 0)
                                                goto label_14023d042
                                            
                                            goto label_140237c36
                                        
                                    label_14023d03a:
                                        
                                        if ((temp0_1318 & 1) == 0)
                                        label_14023d042:
                                            
                                            if ((temp0_1318 & 2) != 0)
                                                goto label_140237c49
                                            
                                            goto label_14023d04a
                                        
                                    label_140237c36:
                                        var_4d8[0] = 0x3f800000
                                        
                                        if ((temp0_1318 & 2) != 0)
                                        label_140237c49:
                                            var_4d8[1] = 0x3f800000
                                            
                                            if ((temp0_1318 & 4) == 0)
                                                goto label_14023d052
                                            
                                            goto label_140237c5c
                                        
                                    label_14023d04a:
                                        
                                        if ((temp0_1318 & 4) != 0)
                                        label_140237c5c:
                                            var_4d8[2] = 0x3f800000
                                            
                                            if ((temp0_1318 & 8) != 0)
                                                var_4d8[3] = 0x3f800000
                                        else
                                        label_14023d052:
                                            
                                            if ((temp0_1318 & 8) != 0)
                                                var_4d8[3] = 0x3f800000
                                    
                                    char temp0_1320 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm1 & not.o(zmm0), 0x1f))
                                    
                                    if (temp0_1320 != 0)
                                        if ((temp0_1320 & 1) == 0)
                                            if ((temp0_1320 & 2) != 0)
                                                goto label_140237c87
                                            
                                            goto label_14023d088
                                        
                                        var_508.d = 0
                                        
                                        if ((temp0_1320 & 2) != 0)
                                        label_140237c87:
                                            var_508:4.d = 0
                                            
                                            if ((temp0_1320 & 4) == 0)
                                                goto label_14023d090
                                            
                                            goto label_140237c9a
                                        
                                    label_14023d088:
                                        
                                        if ((temp0_1320 & 4) == 0)
                                        label_14023d090:
                                            
                                            if ((temp0_1320 & 8) != 0)
                                                goto label_140237cad
                                            
                                            goto label_14023d098
                                        
                                    label_140237c9a:
                                        var_508:8.d = 0
                                        
                                        if ((temp0_1320 & 8) != 0)
                                        label_140237cad:
                                            var_508:0xc.d = 0
                                            
                                            if ((temp0_1320 & 1) == 0)
                                                goto label_14023d0a0
                                            
                                            goto label_140237cc0
                                        
                                    label_14023d098:
                                        
                                        if ((temp0_1320 & 1) == 0)
                                        label_14023d0a0:
                                            
                                            if ((temp0_1320 & 2) != 0)
                                                goto label_140237cd3
                                            
                                            goto label_14023d0a8
                                        
                                    label_140237cc0:
                                        var_4f8[0] = 0
                                        
                                        if ((temp0_1320 & 2) != 0)
                                        label_140237cd3:
                                            var_4f8[1] = 0
                                            
                                            if ((temp0_1320 & 4) == 0)
                                                goto label_14023d0b0
                                            
                                            goto label_140237ce6
                                        
                                    label_14023d0a8:
                                        
                                        if ((temp0_1320 & 4) == 0)
                                        label_14023d0b0:
                                            
                                            if ((temp0_1320 & 8) != 0)
                                                goto label_140237cf9
                                            
                                            goto label_14023d0b8
                                        
                                    label_140237ce6:
                                        var_4f8[2] = 0
                                        
                                        if ((temp0_1320 & 8) != 0)
                                        label_140237cf9:
                                            var_4f8[3] = 0
                                            
                                            if ((temp0_1320 & 1) == 0)
                                                goto label_14023d0c0
                                            
                                            goto label_140237d0c
                                        
                                    label_14023d0b8:
                                        
                                        if ((temp0_1320 & 1) == 0)
                                        label_14023d0c0:
                                            
                                            if ((temp0_1320 & 2) != 0)
                                                goto label_140237d1f
                                            
                                            goto label_14023d0c8
                                        
                                    label_140237d0c:
                                        var_4e8.d = 0
                                        
                                        if ((temp0_1320 & 2) != 0)
                                        label_140237d1f:
                                            var_4e8:4.d = 0
                                            
                                            if ((temp0_1320 & 4) == 0)
                                                goto label_14023d0d0
                                            
                                            goto label_140237d32
                                        
                                    label_14023d0c8:
                                        
                                        if ((temp0_1320 & 4) == 0)
                                        label_14023d0d0:
                                            
                                            if ((temp0_1320 & 8) != 0)
                                                goto label_140237d45
                                            
                                            goto label_14023d0d8
                                        
                                    label_140237d32:
                                        var_4e8:8.d = 0
                                        
                                        if ((temp0_1320 & 8) != 0)
                                        label_140237d45:
                                            var_4e8:0xc.d = 0
                                            
                                            if ((temp0_1320 & 1) == 0)
                                                goto label_14023d0e0
                                            
                                            goto label_140237d58
                                        
                                    label_14023d0d8:
                                        
                                        if ((temp0_1320 & 1) == 0)
                                        label_14023d0e0:
                                            
                                            if ((temp0_1320 & 2) != 0)
                                                goto label_140237d6b
                                            
                                            goto label_14023d0e8
                                        
                                    label_140237d58:
                                        var_4d8[0] = 0x3f800000
                                        
                                        if ((temp0_1320 & 2) != 0)
                                        label_140237d6b:
                                            var_4d8[1] = 0x3f800000
                                            
                                            if ((temp0_1320 & 4) == 0)
                                                goto label_14023d0f0
                                            
                                            goto label_140237d7e
                                        
                                    label_14023d0e8:
                                        
                                        if ((temp0_1320 & 4) != 0)
                                        label_140237d7e:
                                            var_4d8[2] = 0x3f800000
                                            
                                            if ((temp0_1320 & 8) != 0)
                                                var_4d8[3] = 0x3f800000
                                        else
                                        label_14023d0f0:
                                            
                                            if ((temp0_1320 & 8) != 0)
                                                var_4d8[3] = 0x3f800000
                
                zmm3 = _mm_mul_ps(var_5f8, var_508)
                zmm6 = _mm_add_ps(_mm_mul_ps(var_5e8, var_4f8), zmm3)
                zmm3 = _mm_add_ps(_mm_mul_ps(var_5d8, var_4e8), zmm6)
                zmm6 = _mm_add_ps(_mm_mul_ps(var_5c8, var_4d8), zmm3)
                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 2)
                uint32_t temp0_1330[0x4] =
                    __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm6, 6), data_142d3f7e0)
                zmm0 = _mm_or_ps(_mm_and_ps(zmm0, zmm12), temp0_1330)
                zmm2 = _mm_mul_ps(var_508, var_648_1)
                zmm3 = _mm_mul_ps(_mm_sub_ps(zmm12, var_648_1), zmm0)
                zmm7 = _mm_add_ps(_mm_mul_ps(var_5f8, zmm3), zmm2)
                
                if ((temp0_844 & 1) != 0)
                    var_5f8[0] = zmm7[0]
                    
                    if ((temp0_844 & 2) != 0)
                    label_140237505:
                        var_5f8[1] = _mm_shuffle_epi32(zmm7, 0xe5).d
                        
                        if ((temp0_844 & 4) == 0)
                            goto label_14023d1ae
                        
                        goto label_140237518
                else if ((temp0_844 & 2) != 0)
                    goto label_140237505
                
                if ((temp0_844 & 4) == 0)
                label_14023d1ae:
                    zmm5 = __mulps_xmmps_memps(var_4f8, var_648_1)
                    zmm4 = _mm_mul_ps(var_5e8, zmm3)
                    
                    if ((temp0_844 & 8) != 0)
                        goto label_140237532
                    
                    goto label_14023d1bd
                
            label_140237518:
                var_5f8[2] = _mm_shuffle_epi32(zmm7, 0x4e).d
                zmm5 = __mulps_xmmps_memps(var_4f8, var_648_1)
                zmm4 = _mm_mul_ps(var_5e8, zmm3)
                
                if ((temp0_844 & 8) != 0)
                label_140237532:
                    var_5f8[3] = _mm_shuffle_epi32(zmm7, 0xe7).d
                    zmm5 = _mm_add_ps(zmm5, zmm4)
                    
                    if ((temp0_844 & 1) == 0)
                        goto label_14023d1c8
                    
                    goto label_140237543
                
            label_14023d1bd:
                zmm5 = _mm_add_ps(zmm5, zmm4)
                
                if ((temp0_844 & 1) != 0)
                label_140237543:
                    var_5e8[0] = zmm5[0]
                    
                    if ((temp0_844 & 2) != 0)
                    label_140237556:
                        var_5e8[1] = _mm_shuffle_epi32(zmm5, 0xe5).d
                        
                        if ((temp0_844 & 4) == 0)
                            goto label_14023d1d8
                        
                        goto label_140237569
                else
                label_14023d1c8:
                    
                    if ((temp0_844 & 2) != 0)
                        goto label_140237556
                
                if ((temp0_844 & 4) == 0)
                label_14023d1d8:
                    zmm1 = __mulps_xmmps_memps(var_4e8, var_648_1)
                    arg5 = _mm_mul_ps(var_5d8, zmm3)
                    
                    if ((temp0_844 & 8) != 0)
                        goto label_140237584
                    
                    goto label_14023d1e8
                
            label_140237569:
                var_5e8[2] = _mm_shuffle_epi32(zmm5, 0x4e).d
                zmm1 = __mulps_xmmps_memps(var_4e8, var_648_1)
                arg5 = _mm_mul_ps(var_5d8, zmm3)
                
                if ((temp0_844 & 8) != 0)
                label_140237584:
                    var_5e8[3] = _mm_shuffle_epi32(zmm5, 0xe7).d
                    zmm1 = _mm_add_ps(zmm1, arg5)
                    
                    if ((temp0_844 & 1) == 0)
                        goto label_14023d1f4
                    
                    goto label_140237596
                
            label_14023d1e8:
                zmm1 = _mm_add_ps(zmm1, arg5)
                
                if ((temp0_844 & 1) != 0)
                label_140237596:
                    var_5d8.d = zmm1.d
                    
                    if ((temp0_844 & 2) != 0)
                    label_1402375a9:
                        var_5d8:4.d = _mm_shuffle_epi32(zmm1, 0xe5).d
                        
                        if ((temp0_844 & 4) == 0)
                            goto label_14023d204
                        
                        goto label_1402375bc
                else
                label_14023d1f4:
                    
                    if ((temp0_844 & 2) != 0)
                        goto label_1402375a9
                
                if ((temp0_844 & 4) == 0)
                label_14023d204:
                    arg6 = __mulps_xmmps_memps(var_4d8, var_648_1)
                    zmm3 = _mm_mul_ps(zmm3, var_5c8)
                    
                    if ((temp0_844 & 8) != 0)
                        goto label_1402375d8
                    
                    goto label_14023d215
                
            label_1402375bc:
                var_5d8:8.d = _mm_shuffle_epi32(zmm1, 0x4e).d
                arg6 = __mulps_xmmps_memps(var_4d8, var_648_1)
                zmm3 = _mm_mul_ps(zmm3, var_5c8)
                
                if ((temp0_844 & 8) != 0)
                label_1402375d8:
                    var_5d8:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
                    arg6 = _mm_add_ps(arg6, zmm3)
                    
                    if ((temp0_844 & 1) == 0)
                        goto label_14023d221
                    
                    goto label_1402375ea
                
            label_14023d215:
                arg6 = _mm_add_ps(arg6, zmm3)
                
                if ((temp0_844 & 1) == 0)
                label_14023d221:
                    
                    if ((temp0_844 & 2) != 0)
                        goto label_140237602
                    
                    goto label_14023d229
                
            label_1402375ea:
                var_5c8.d = arg6[0]
                
                if ((temp0_844 & 2) != 0)
                label_140237602:
                    var_5c8:4.d = _mm_shuffle_epi32(arg6, 0xe5).d
                    
                    if ((temp0_844 & 4) == 0)
                        goto label_14023d231
                    
                    goto label_140237619
                
            label_14023d229:
                
                if ((temp0_844 & 4) != 0)
                label_140237619:
                    var_5c8:8.d = _mm_shuffle_epi32(arg6, 0x4e).d
                    
                    if ((temp0_844 & 8) != 0)
                        var_5c8:0xc.d = _mm_shuffle_epi32(arg6, 0xe7).d
                else
                label_14023d231:
                    
                    if ((temp0_844 & 8) != 0)
                        var_5c8:0xc.d = _mm_shuffle_epi32(arg6, 0xe7).d
                
                arg6 = _mm_cmpeq_epi32(arg6, arg6)
            
            zmm5 = var_5f8
            zmm1 = _mm_mul_ps(zmm5, zmm5)
            zmm2 = _mm_mul_ps(var_5e8, var_5e8)
            zmm6 = _mm_add_ps(_mm_mul_ps(var_5d8, var_5d8), zmm1)
            zmm1 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(var_5c8, var_5c8), zmm2), zmm6)
            zmm2 = _mm_cmpeq_ps(data_142d3f5c0, zmm1, 2)
            zmm6 = _mm_rsqrt_ps(zmm1)
            zmm0 = data_142d3f640
            zmm1 = _mm_mul_ps(zmm1, zmm0)
            zmm3 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm0, _mm_mul_ps(_mm_mul_ps(zmm6, zmm6), zmm1)), zmm6), zmm6)
            zmm1 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm0, _mm_mul_ps(_mm_mul_ps(zmm3, zmm3), zmm1)), zmm3), zmm3)
            zmm5 = _mm_and_ps(_mm_mul_ps(zmm5, zmm1), zmm2)
            
            if ((temp0_83 & 1) != 0)
                var_5f8[0] = zmm5[0]
                zmm6 = var_428_1
                
                if ((temp0_83 & 2) != 0)
                label_14023d3bb:
                    var_5f8[1] = _mm_shuffle_epi32(zmm5, 0xe5)[0]
                    
                    if ((temp0_83 & 4) == 0)
                        goto label_14023d2f3
                    
                    goto label_14023d3ce
            else
                zmm6 = var_428_1
                
                if ((temp0_83 & 2) != 0)
                    goto label_14023d3bb
            
            if ((temp0_83 & 4) == 0)
            label_14023d2f3:
                zmm4 = _mm_mul_ps(var_5e8, zmm1)
                
                if ((temp0_83 & 8) != 0)
                    goto label_14023d3e4
                
                goto label_14023d2fe
            
        label_14023d3ce:
            var_5f8[2] = _mm_shuffle_epi32(zmm5, 0x4e)[0]
            zmm4 = _mm_mul_ps(var_5e8, zmm1)
            
            if ((temp0_83 & 8) != 0)
            label_14023d3e4:
                var_5f8[3] = _mm_shuffle_epi32(zmm5, 0xe7)[0]
                zmm4 = _mm_and_ps(zmm4, zmm2)
                
                if ((temp0_83 & 1) == 0)
                    goto label_14023d30b
                
                goto label_14023d3f5
            
        label_14023d2fe:
            zmm4 = _mm_and_ps(zmm4, zmm2)
            
            if ((temp0_83 & 1) != 0)
            label_14023d3f5:
                var_5e8[0] = zmm4[0]
                zmm5 = var_2b8_1
                
                if ((temp0_83 & 2) != 0)
                label_14023d410:
                    var_5e8[1] = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                    
                    if ((temp0_83 & 4) == 0)
                        goto label_14023d321
                    
                    goto label_14023d423
            else
            label_14023d30b:
                zmm5 = var_2b8_1
                
                if ((temp0_83 & 2) != 0)
                    goto label_14023d410
            
            if ((temp0_83 & 4) == 0)
            label_14023d321:
                arg5 = _mm_mul_ps(var_5d8, zmm1)
                
                if ((temp0_83 & 8) != 0)
                    goto label_14023d43a
                
                goto label_14023d32d
            
        label_14023d423:
            var_5e8[2] = _mm_shuffle_epi32(zmm4, 0x4e)[0]
            arg5 = _mm_mul_ps(var_5d8, zmm1)
            
            if ((temp0_83 & 8) != 0)
            label_14023d43a:
                var_5e8[3] = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                arg5 = _mm_and_ps(arg5, zmm2)
                
                if ((temp0_83 & 1) == 0)
                    goto label_14023d339
                
                goto label_14023d44c
            
        label_14023d32d:
            arg5 = _mm_and_ps(arg5, zmm2)
            
            if ((temp0_83 & 1) == 0)
            label_14023d339:
                
                if ((temp0_83 & 2) != 0)
                    goto label_14023d461
                
                goto label_14023d341
            
        label_14023d44c:
            var_5d8.d = arg5.d
            
            if ((temp0_83 & 2) != 0)
            label_14023d461:
                var_5d8:4.d = _mm_shuffle_epi32(arg5, 0xe5)[0]
                zmm1 = _mm_mul_ps(zmm1, var_5c8)
                
                if ((temp0_83 & 4) == 0)
                    goto label_14023d34d
                
                goto label_14023d479
            
        label_14023d341:
            zmm1 = _mm_mul_ps(zmm1, var_5c8)
            
            if ((temp0_83 & 4) == 0)
            label_14023d34d:
                zmm1 = _mm_and_ps(zmm1, zmm2)
                zmm2 = _mm_andnot_ps(zmm2, zmm12)
                
                if ((temp0_83 & 8) != 0)
                    goto label_14023d494
                
                goto label_14023d35c
            
        label_14023d479:
            var_5d8:8.d = _mm_shuffle_epi32(arg5, 0x4e)[0]
            zmm1 = _mm_and_ps(zmm1, zmm2)
            zmm2 = _mm_andnot_ps(zmm2, zmm12)
            
            if ((temp0_83 & 8) != 0)
            label_14023d494:
                var_5d8:0xc.d = _mm_shuffle_epi32(arg5, 0xe7).d
                zmm1 = _mm_or_ps(zmm1, zmm2)
                
                if ((temp0_83 & 1) == 0)
                    goto label_14023d369
                
                goto label_14023d4a5
            
        label_14023d35c:
            zmm1 = _mm_or_ps(zmm1, zmm2)
            
            if ((temp0_83 & 1) == 0)
            label_14023d369:
                arg5 = var_2a8_1
                
                if ((temp0_83 & 2) != 0)
                    goto label_14023d4c5
                
                goto label_14023d379
            
        label_14023d4a5:
            var_5c8.d = zmm1.d
            arg5 = var_2a8_1
            
            if ((temp0_83 & 2) != 0)
            label_14023d4c5:
                var_5c8:4.d = _mm_shuffle_epi32(zmm1, 0xe5).d
                
                if ((temp0_83 & 4) == 0)
                    goto label_14023d381
                
                goto label_14023d4db
            
        label_14023d379:
            
            if ((temp0_83 & 4) == 0)
            label_14023d381:
                
                if ((temp0_83 & 8) != 0)
                    goto label_14023d4f1
                
                goto label_14023d38e
            
        label_14023d4db:
            var_5c8:8.d = _mm_shuffle_epi32(zmm1, 0x4e).d
            
            if ((temp0_83 & 8) == 0)
            label_14023d38e:
                rax_16 = _mm_movemask_ps(zmm11 ^ arg6)
                
                if (rax_16 != 0)
                    goto label_1402380d6
            else
            label_14023d4f1:
                var_5c8:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
                rax_16 = _mm_movemask_ps(zmm11 ^ arg6)
                
                if (rax_16 != 0)
                    goto label_1402380d6
        zmm0 = var_5f8
        zmm1 = var_5e8
        zmm3 = var_5c8
        zmm4 = _mm_unpacklo_ps(var_5d8, zmm3[0].q)
        zmm2 = _mm_unpackhi_ps(var_5d8, zmm3)
        zmm3 = _mm_unpacklo_ps(zmm0, zmm1.q)
        zmm0 = _mm_unpackhi_ps(zmm0, zmm1)
        zmm1 = zmm3.q | zmm4[0].q << 0x40
        uint128_t var_168_1 = zmm1
        zmm3 = _mm_unpackhi_pd(zmm3, zmm4[0].q)
        uint32_t var_158_1[0x4] = zmm3
        zmm4 = zmm0[0].q | zmm2.q << 0x40
        int32_t var_148_1[0x4] = zmm4
        uint128_t var_138_1 = _mm_unpackhi_pd(zmm0, zmm2.q)
        arg1[sx.q(zmm6.d) * 3] = zmm1
        arg1[sx.q(_mm_shuffle_epi32(zmm6, 0x4e).d) * 3] = zmm3
        arg1[sx.q(zmm5[0]) * 3] = zmm4
        arg1[sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d) * 3] = var_138_1
        r12 = zx.q(r12.d + 4)
    while (r12.d s< i_5)
    
    i_4 = zx.q(arg10)
    
    if (r12.d s< i_4.d)
        goto label_14023d608
return i_4
