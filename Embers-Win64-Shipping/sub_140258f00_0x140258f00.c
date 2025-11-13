// 函数: sub_140258f00
// 地址: 0x140258f00
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
    label_14025f168:
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
                                        goto label_14025fefb
                                    
                                    goto label_14025fc43
                                
                                zmm5 = zx.o(*zmm1.q)
                                zmm0 = _mm_unpacklo_epi32(zmm0, temp0_1593[0].q)
                                
                                if ((rbp_73 & 2) != 0)
                                label_14025fefb:
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                            zmm5, 0), 
                                        zmm5, 0xe2)
                                    zmm5 = zmm1
                                    zmm0 = _mm_add_epi64(zmm0, zmm6)
                                    
                                    if ((rbp_73 & 4) == 0)
                                        goto label_14025fc51
                                    
                                    goto label_14025ff1c
                                
                            label_14025fc43:
                                zmm0 = _mm_add_epi64(zmm0, zmm6)
                                
                                if ((rbp_73 & 4) != 0)
                                label_14025ff1c:
                                    zmm1 = _mm_shuffle_ps(zx.o(*zmm0.q), zmm5, 0x30)
                                    zmm5 = _mm_shuffle_ps(zmm5, zmm1, 0x84)
                                    
                                    if ((rbp_73 & 8) != 0)
                                        zmm5 = _mm_shuffle_ps(zmm5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm5, 0x20), 
                                            0x24)
                                else
                                label_14025fc51:
                                    
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
                                                    goto label_14025fd43
                                                
                                                goto label_14025fdb6
                                            
                                            zmm6.d = zx.d(*temp0_1622[0].q)
                                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                            
                                            if ((temp0_1623 & 2) != 0)
                                            label_14025fd43:
                                                zmm6 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*
                                                            _mm_shuffle_epi32(temp0_1622, 0x4e).q), 
                                                        zmm6, 0), 
                                                    zmm6, 0xe2)
                                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_448_2)
                                                
                                                if ((temp0_1623 & 4) == 0)
                                                    goto label_14025fdc4
                                                
                                                goto label_14025fd64
                                            
                                        label_14025fdb6:
                                            zmm0 = __paddq_xmmdq_memdq(zmm0, var_448_2)
                                            
                                            if ((temp0_1623 & 4) != 0)
                                            label_14025fd64:
                                                zmm6 = _mm_shuffle_ps(zmm6, 
                                                    _mm_shuffle_ps(zx.o(*zmm0.q), zmm6, 0x30), 0x84)
                                                
                                                if ((temp0_1623 & 8) != 0)
                                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                                        _mm_shuffle_ps(
                                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                            zmm6, 0x20), 
                                                        0x24)
                                            else
                                            label_14025fdc4:
                                                
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
                                                goto label_140260407
                                            
                                            goto label_140260472
                                        
                                        zmm6.d = zx.d(*zmm5[0].q)
                                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                        
                                        if ((temp0_1743 & 2) != 0)
                                        label_140260407:
                                            zmm6 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), zmm6, 
                                                    0), 
                                                zmm6, 0xe2)
                                            zmm0 = _mm_add_epi64(zmm0, zmm3)
                                            
                                            if ((temp0_1743 & 4) == 0)
                                                goto label_14026047b
                                            
                                            goto label_140260423
                                        
                                    label_140260472:
                                        zmm0 = _mm_add_epi64(zmm0, zmm3)
                                        
                                        if ((temp0_1743 & 4) != 0)
                                        label_140260423:
                                            zmm6 = _mm_shuffle_ps(zmm6, 
                                                _mm_shuffle_ps(zx.o(*zmm0.q), zmm6, 0x30), 0x84)
                                            
                                            if ((temp0_1743 & 8) != 0)
                                                zmm6 = _mm_shuffle_ps(zmm6, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                        zmm6, 0x20), 
                                                    0x24)
                                        else
                                        label_14026047b:
                                            
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
                                        goto label_1402649cb
                                    
                                    goto label_1402605b8
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_448_2)
                                
                                if ((rbp_73 & 4) == 0)
                                label_1402605b8:
                                    zmm2 ^= zmm8
                                    
                                    if ((rbp_73 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                else
                                label_1402649cb:
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
                                        goto label_140264a16
                                    
                                    goto label_14026067a
                                
                                zmm4 = zx.o(*zmm5[0].q)
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                
                                if ((rbp_73 & 2) != 0)
                                label_140264a16:
                                    zmm4 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), 
                                            zmm4, 0), 
                                        zmm4, 0xe2)
                                    zmm2 = _mm_add_epi64(var_448_2, zmm0)
                                    
                                    if ((rbp_73 & 4) == 0)
                                        goto label_140260688
                                    
                                    goto label_140264a30
                                
                            label_14026067a:
                                zmm2 = _mm_add_epi64(var_448_2, zmm0)
                                
                                if ((rbp_73 & 4) != 0)
                                label_140264a30:
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(zx.o(*zmm2.q), zmm4, 0x30), 0x84)
                                    
                                    if ((rbp_73 & 8) != 0)
                                        zmm4 = _mm_shuffle_ps(zmm4, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm4, 0x20), 
                                            0x24)
                                else
                                label_140260688:
                                    
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
                                        goto label_14025fe94
                                    
                                    goto label_14025f9c0
                                
                                zmm7 = zx.o(*zmm3[0].q)
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                
                                if ((rbp_72 & 2) != 0)
                                label_14025fe94:
                                    zmm1 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                            zmm7, 0), 
                                        zmm7, 0xe2)
                                    zmm7 = zmm1
                                    zmm0 = _mm_add_epi64(zmm0, zmm6)
                                    
                                    if ((rbp_72 & 4) == 0)
                                        goto label_14025f9ce
                                    
                                    goto label_14025feb5
                                
                            label_14025f9c0:
                                zmm0 = _mm_add_epi64(zmm0, zmm6)
                                
                                if ((rbp_72 & 4) != 0)
                                label_14025feb5:
                                    zmm1 = _mm_shuffle_ps(zx.o(*zmm0.q), zmm7, 0x30)
                                    zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0x84)
                                    
                                    if ((rbp_72 & 8) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm7, 0x20), 
                                            0x24)
                                else
                                label_14025f9ce:
                                    
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
                                                    goto label_14025fab6
                                                
                                                goto label_14025fb37
                                            
                                            zmm6.d = zx.d(*zmm5[0].q)
                                            zmm3 = _mm_unpacklo_epi32(temp0_1575, zmm1.q)
                                            
                                            if ((temp0_1580 & 2) != 0)
                                            label_14025fab6:
                                                zmm6 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), 
                                                        zmm6, 0), 
                                                    zmm6, 0xe2)
                                                zmm3 = __paddq_xmmdq_memdq(zmm3, var_448_2)
                                                
                                                if ((temp0_1580 & 4) == 0)
                                                    goto label_14025fb45
                                                
                                                goto label_14025fad7
                                            
                                        label_14025fb37:
                                            zmm3 = __paddq_xmmdq_memdq(zmm3, var_448_2)
                                            
                                            if ((temp0_1580 & 4) != 0)
                                            label_14025fad7:
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
                                            label_14025fb45:
                                                
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
                                                goto label_14025ffcb
                                            
                                            goto label_140260045
                                        
                                        zmm6.d = zx.o(*zmm0.q)[0]
                                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                                        
                                        if ((temp0_1669 & 2) != 0)
                                        label_14025ffcb:
                                            zmm6 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(
                                                    zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm6, 
                                                    0), 
                                                zmm6, 0xe2)
                                            zmm2 = __paddq_xmmdq_memdq(zmm2, var_448_2)
                                            
                                            if ((temp0_1669 & 4) == 0)
                                                goto label_140260053
                                            
                                            goto label_14025ffec
                                        
                                    label_140260045:
                                        zmm2 = __paddq_xmmdq_memdq(zmm2, var_448_2)
                                        
                                        if ((temp0_1669 & 4) != 0)
                                        label_14025ffec:
                                            zmm6 = _mm_shuffle_ps(zmm6, 
                                                _mm_shuffle_ps(zx.o(*zmm2.q), zmm6, 0x30), 0x84)
                                            
                                            if ((temp0_1669 & 8) != 0)
                                                zmm6 = _mm_shuffle_ps(zmm6, 
                                                    _mm_shuffle_ps(
                                                        zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                        zmm6, 0x20), 
                                                    0x24)
                                        else
                                        label_140260053:
                                            
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
                                        goto label_1402602d8
                                    
                                    goto label_14026018c
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_448_2)
                                
                                if ((rbp_72 & 4) == 0)
                                label_14026018c:
                                    zmm2 ^= zmm8
                                    
                                    if ((rbp_72 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20)
                                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                                else
                                label_1402602d8:
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
                                        goto label_140260323
                                    
                                    goto label_140260251
                                
                                zmm4 = zx.o(*zmm5[0].q)
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                                
                                if ((rbp_72 & 2) != 0)
                                label_140260323:
                                    zmm4 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), 
                                            zmm4, 0), 
                                        zmm4, 0xe2)
                                    zmm2 = _mm_add_epi64(var_448_2, zmm0)
                                    
                                    if ((rbp_72 & 4) == 0)
                                        goto label_14026025f
                                    
                                    goto label_14026033d
                                
                            label_140260251:
                                zmm2 = _mm_add_epi64(var_448_2, zmm0)
                                
                                if ((rbp_72 & 4) != 0)
                                label_14026033d:
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(zx.o(*zmm2.q), zmm4, 0x30), 0x84)
                                    
                                    if ((rbp_72 & 8) != 0)
                                        zmm4 = _mm_shuffle_ps(zmm4, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm4, 0x20), 
                                            0x24)
                                else
                                label_14026025f:
                                    
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
                            goto label_140261201
                        
                        goto label_140260a81
                    
                    zmm0 = zx.o(*zmm3[0].q)
                    
                    if ((temp0_1857 & 2) != 0)
                    label_140261201:
                        zmm0 = _mm_shuffle_ps(
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), zmm0, 0), zmm0, 
                            0xe2)
                        
                        if ((temp0_1857 & 4) == 0)
                            goto label_140260a89
                        
                        goto label_14026121c
                    
                label_140260a81:
                    
                    if ((temp0_1857 & 4) != 0)
                    label_14026121c:
                        zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zx.o(*zmm12[0].q), zmm0, 0x30), 
                            0x84)
                        
                        if ((temp0_1857 & 8) != 0)
                            zmm0 = _mm_shuffle_ps(zmm0, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm0, 
                                    0x20), 
                                0x24)
                    else
                    label_140260a89:
                        
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
                        goto label_1402610f8
                    
                    goto label_140260ae9
                
                var_638.d = zmm8.d
                zmm6 = _mm_and_ps(zmm6, zmm11)
                zmm11 = __andnps_xmmxud_memxud(zmm11, data_1434426d0)
                
                if ((temp0_1805 & 2) != 0)
                label_1402610f8:
                    var_638:4.d = _mm_shuffle_epi32(zmm8, 0xe5).d
                    zmm6 = _mm_or_ps(zmm6, zmm11)
                    
                    if ((temp0_1805 & 4) == 0)
                        goto label_140260af5
                    
                    goto label_140261110
                
            label_140260ae9:
                zmm6 = _mm_or_ps(zmm6, zmm11)
                
                if ((temp0_1805 & 4) == 0)
                label_140260af5:
                    zmm6 = _mm_add_ps(zmm6, zmm5)
                    
                    if ((temp0_1805 & 8) != 0)
                        goto label_140261127
                    
                    goto label_140260b00
                
            label_140261110:
                var_638:8.d = _mm_shuffle_epi32(zmm8, 0x4e).d
                zmm6 = _mm_add_ps(zmm6, zmm5)
                
                if ((temp0_1805 & 8) != 0)
                label_140261127:
                    var_638:0xc.d = _mm_shuffle_epi32(zmm8, 0xe7).d
                    zmm6 = _mm_mul_ps(zmm6, zmm3)
                    
                    if ((temp0_1805 & 1) == 0)
                        goto label_140260b0b
                    
                    goto label_140261138
                
            label_140260b00:
                zmm6 = _mm_mul_ps(zmm6, zmm3)
                
                if ((temp0_1805 & 1) == 0)
                label_140260b0b:
                    zmm2 = _mm_and_ps(zmm2, temp0_1855)
                    zmm7 = __andnps_xmmxud_memxud(temp0_1855, data_1434426d0)
                    
                    if ((temp0_1805 & 2) != 0)
                        goto label_140261155
                    
                    goto label_140260b1d
                
            label_140261138:
                var_628[0] = zmm6.d
                zmm2 = _mm_and_ps(zmm2, temp0_1855)
                zmm7 = __andnps_xmmxud_memxud(temp0_1855, data_1434426d0)
                
                if ((temp0_1805 & 2) == 0)
                label_140260b1d:
                    zmm2 = _mm_or_ps(zmm2, zmm7)
                    
                    if ((temp0_1805 & 4) != 0)
                        var_628[2] = _mm_shuffle_epi32(zmm6, 0x4e).d
                else
                label_140261155:
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
                        goto label_14026118a
                    
                    goto label_140260bcf
                
                var_618[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 2)
                zmm1 = _mm_sqrt_ps(zmm4)
                
                if ((temp0_1805 & 8) != 0)
                label_14026118a:
                    var_618[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_1805 & 1) == 0)
                        goto label_140260bda
                    
                    goto label_14026119b
                
            label_140260bcf:
                zmm0 = _mm_and_ps(zmm0, zmm1)
                
                if ((temp0_1805 & 1) == 0)
                label_140260bda:
                    
                    if ((temp0_1805 & 2) != 0)
                        goto label_1402611ae
                    
                    goto label_140260be2
                
            label_14026119b:
                var_608.d = zmm0.d
                
                if ((temp0_1805 & 2) != 0)
                label_1402611ae:
                    var_608:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                    
                    if ((temp0_1805 & 4) == 0)
                        goto label_140260bea
                    
                    goto label_1402611c1
                
            label_140260be2:
                
                if ((temp0_1805 & 4) != 0)
                label_1402611c1:
                    var_608:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                    
                    if ((temp0_1805 & 8) != 0)
                        zmm0 = _mm_shuffle_epi32(zmm0, 0xe7)
                        var_608:0xc.d = zmm0.d
                else
                label_140260bea:
                    
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
                            goto label_14026123b
                        
                        goto label_140260da3
                    
                    var_638.d = zmm1.d
                    
                    if ((temp0_1894 & 2) != 0)
                    label_14026123b:
                        var_638:4.d = zmm8.d
                        arg6 = var_568_4
                        
                        if ((temp0_1894 & 4) == 0)
                            goto label_140260db3
                        
                        goto label_140261254
                    
                label_140260da3:
                    arg6 = var_568_4
                    
                    if ((temp0_1894 & 4) != 0)
                    label_140261254:
                        var_638:8.d = zmm2.d
                        
                        if ((temp0_1894 & 8) != 0)
                        label_140261262:
                            var_638:0xc.d = zmm6.d
                            
                            if ((temp0_1894 & 1) == 0)
                                goto label_140260dc3
                            
                            goto label_140261270
                    else
                    label_140260db3:
                        
                        if ((temp0_1894 & 8) != 0)
                            goto label_140261262
                    
                    if ((temp0_1894 & 1) != 0)
                    label_140261270:
                        var_628[0] = zmm3[0]
                        zmm1 = _mm_unpacklo_ps(zmm1, zmm8.q)
                        zmm2 = _mm_unpacklo_ps(zmm2, zmm6.q)
                        
                        if ((temp0_1894 & 2) != 0)
                            var_628[1] = zmm5[0]
                    else
                    label_140260dc3:
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
                            goto label_14026129b
                        
                        goto label_140260eaf
                    
                    var_618[3] = zmm7[0]
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_1894 & 1) != 0)
                    label_14026129b:
                        var_608.d = zmm0.d
                        
                        if ((temp0_1894 & 2) == 0)
                            goto label_140260eb7
                        
                        goto label_1402612a9
                    
                label_140260eaf:
                    
                    if ((temp0_1894 & 2) == 0)
                    label_140260eb7:
                        
                        if ((temp0_1894 & 4) != 0)
                            goto label_1402612bc
                        
                        goto label_140260ebf
                    
                label_1402612a9:
                    zmm1 = _mm_shuffle_epi32(zmm0, 0xe5)
                    var_608:4.d = zmm1.d
                    
                    if ((temp0_1894 & 4) == 0)
                    label_140260ebf:
                        
                        if ((temp0_1894 & 8) != 0)
                            var_608:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    else
                    label_1402612bc:
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
                                    goto label_140261309
                                
                                goto label_140260f84
                            
                            zmm0 = var_648_3
                            zmm1 = *zmm0.q
                            zmm14 = var_458_2
                            
                            if ((rbp_79 & 2) != 0)
                            label_140261309:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*__pshufd_xmmdq_memdq_immb(var_648_3, 0x4e).q, 
                                        zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm1 = zmm0
                                zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                                
                                if ((rbp_79 & 4) == 0)
                                    goto label_140260f92
                                
                                goto label_14026132b
                            
                        label_140260f84:
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                            
                            if ((rbp_79 & 4) != 0)
                            label_14026132b:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*zmm14[0].q, zmm1, 0x30), 0x84)
                                zmm4 ^= zmm0
                                
                                if ((rbp_79 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 
                                            0x20), 
                                        0x24)
                            else
                            label_140260f92:
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
                                label_140261377:
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*zmm6.q, zmm1, 0x30), 0x84)
                                    
                                    if ((rbp_79 & 8) == 0)
                                        goto label_14026108b
                                    
                                    goto label_140261397
                            else
                                zmm6 |= zmm14
                                
                                if ((rbp_79 & 4) != 0)
                                    goto label_140261377
                            
                            if ((rbp_79 & 8) == 0)
                            label_14026108b:
                                zmm7 = zx.o(0)
                                
                                if ((temp0_1935 & 1) == 0)
                                    goto label_1402613a8
                                
                                goto label_140261098
                            
                        label_140261397:
                            zmm1 = _mm_shuffle_ps(zmm1, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm1, 0x20), 0x24)
                            zmm7 = zx.o(0)
                            
                            if ((temp0_1935 & 1) == 0)
                            label_1402613a8:
                                
                                if ((temp0_1935 & 2) == 0)
                                    goto label_1402610a5
                                
                                goto label_1402613bc
                            
                        label_140261098:
                            zmm7[0] = zmm1.d
                            
                            if ((temp0_1935 & 2) == 0)
                            label_1402610a5:
                                zmm6 = _mm_add_epi64(zmm6, zmm2)
                                zmm5 = _mm_add_epi64(zmm5, zmm2)
                                
                                if ((temp0_1935 & 4) == 0)
                                    goto label_1402613d0
                                
                                goto label_1402610bd
                            
                        label_1402613bc:
                            zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm7, 1), zmm7, 0xe2)
                            zmm6 = _mm_add_epi64(zmm6, zmm2)
                            zmm5 = _mm_add_epi64(zmm5, zmm2)
                            
                            if ((temp0_1935 & 4) != 0)
                            label_1402610bd:
                                zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm1, zmm7, 0x32), 0x84)
                                zmm3 &= not.o(zmm5)
                                zmm4 = temp0_1948 & not.o(zmm6)
                                
                                if ((temp0_1935 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, zmm7, 0x23)
                                    zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0x24)
                            else
                            label_1402613d0:
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
                                    goto label_1402614d0
                                
                                goto label_140261445
                            
                            zmm1 = *zmm11.q
                            
                            if ((temp0_2005 & 2) != 0)
                            label_1402614d0:
                                zmm0 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm1 = zmm0
                                
                                if ((temp0_2005 & 4) == 0)
                                    goto label_14026144e
                                
                                goto label_1402614e9
                            
                        label_140261445:
                            
                            if ((temp0_2005 & 4) != 0)
                            label_1402614e9:
                                zmm0 = _mm_shuffle_ps(*zmm14[0].q, zmm1, 0x30)
                                zmm1 = _mm_shuffle_ps(zmm1, zmm0, 0x84)
                                
                                if ((temp0_2005 & 8) != 0)
                                    zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 
                                        0x20)
                                    zmm1 = _mm_shuffle_ps(zmm1, zmm0, 0x24)
                            else
                            label_14026144e:
                                
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
                                label_1402615fa:
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*zmm6.q, zmm1, 0x30), 0x84)
                                    
                                    if ((temp0_2005 & 8) == 0)
                                        goto label_1402615ab
                                    
                                    goto label_140261615
                            else
                                zmm6 |= zmm0
                                
                                if ((temp0_2005 & 4) != 0)
                                    goto label_1402615fa
                            
                            if ((temp0_2005 & 8) == 0)
                            label_1402615ab:
                                zmm3 = zx.o(0)
                                
                                if ((temp0_2010 & 1) == 0)
                                    goto label_140261623
                                
                                goto label_1402615b5
                            
                        label_140261615:
                            zmm1 = _mm_shuffle_ps(zmm1, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm6, 0x4e).q, zmm1, 0x20), 0x24)
                            zmm3 = zx.o(0)
                            
                            if ((temp0_2010 & 1) != 0)
                            label_1402615b5:
                                zmm3[0] = zmm1.d
                                zmm7 = _mm_slli_epi32(zmm7, 0x1f)
                                zmm4 = _mm_slli_epi32(zmm4, 0x1f)
                                
                                if ((temp0_2010 & 2) != 0)
                                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm3, 1), zmm3, 0xe2)
                            else
                            label_140261623:
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
                                    goto label_140261839
                                
                                goto label_140261702
                            
                            zmm1 = *zmm11.q
                            
                            if ((temp0_2051 & 2) != 0)
                            label_140261839:
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm1, 0), 
                                    zmm1, 0xe2)
                                
                                if ((temp0_2051 & 4) == 0)
                                    goto label_14026170c
                                
                                goto label_140261853
                            
                        label_140261702:
                            
                            if ((temp0_2051 & 4) != 0)
                            label_140261853:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*zmm14[0].q, zmm1, 0x30), 0x84)
                                
                                if ((temp0_2051 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 
                                            0x20), 
                                        0x24)
                            else
                            label_14026170c:
                                
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
                                    goto label_140261899
                                
                                goto label_1402617ba
                            
                            zmm1 = *zmm11.q
                            zmm14 &= zmm5
                            zmm5 &= not.o(zmm0)
                            
                            if ((temp0_2051 & 2) != 0)
                            label_140261899:
                                zmm1 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm11, 0x4e).q, zmm1, 0), 
                                    zmm1, 0xe2)
                                zmm14 |= zmm5
                                
                                if ((temp0_2051 & 4) == 0)
                                    goto label_1402617c9
                                
                                goto label_1402618b8
                            
                        label_1402617ba:
                            zmm14 |= zmm5
                            
                            if ((temp0_2051 & 4) == 0)
                            label_1402617c9:
                                
                                if ((temp0_2051 & 8) != 0)
                                    goto label_1402618d9
                                
                                goto label_1402617d3
                            
                        label_1402618b8:
                            zmm1 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*zmm14[0].q, zmm1, 0x30), 0x84)
                            
                            if ((temp0_2051 & 8) != 0)
                            label_1402618d9:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                zmm15 = zx.o(0)
                                
                                if ((temp0_2056 & 1) != 0)
                                    goto label_1402617e0
                                
                                goto label_1402618ea
                            
                        label_1402617d3:
                            zmm15 = zx.o(0)
                            
                            if ((temp0_2056 & 1) != 0)
                            label_1402617e0:
                                zmm15[0] = zmm1.d
                                
                                if ((temp0_2056 & 2) != 0)
                                    goto label_1402618ff
                                
                                goto label_1402617ed
                            
                        label_1402618ea:
                            
                            if ((temp0_2056 & 2) != 0)
                            label_1402618ff:
                                zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm15, 1), zmm15, 0xe2)
                                
                                if ((temp0_2056 & 4) != 0)
                                    goto label_1402617fd
                                
                                goto label_14026190b
                            
                        label_1402617ed:
                            
                            if ((temp0_2056 & 4) == 0)
                            label_14026190b:
                                
                                if ((temp0_2056 & 8) != 0)
                                    zmm15 = _mm_shuffle_ps(zmm15, 
                                        _mm_shuffle_ps(zmm1, zmm15, 0x23), 0x24)
                            else
                            label_1402617fd:
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
                                goto label_140262c1d
                            
                            goto label_140261a28
                        
                        var_638.d = zmm8.d
                        zmm5 = _mm_cvtepi32_ps(zmm5)
                        arg6 = var_5a8_5
                        
                        if ((temp0_1474 & 2) != 0)
                        label_140262c1d:
                            var_638:4.d = _mm_shuffle_epi32(zmm8, 0xe5).d
                            zmm5 = _mm_div_ps(zmm5, zmm0)
                            zmm6 = var_5b8_1
                            
                            if ((temp0_1474 & 4) == 0)
                                goto label_140261a3c
                            
                            goto label_140262c3d
                        
                    label_140261a28:
                        zmm5 = _mm_div_ps(zmm5, zmm0)
                        zmm6 = var_5b8_1
                        
                        if ((temp0_1474 & 4) != 0)
                        label_140262c3d:
                            var_638:8.d = _mm_shuffle_epi32(zmm8, 0x4e).d
                            zmm1 &= data_143442680
                            zmm3 = _mm_mul_ps(zmm3, zmm5)
                            
                            if ((temp0_1474 & 8) != 0)
                                var_638:0xc.d = _mm_shuffle_epi32(zmm8, 0xe7).d
                        else
                        label_140261a3c:
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
                                goto label_140262c7a
                            
                            goto label_140261a89
                        
                        var_628[0] = zmm2.d
                        zmm0 = _mm_cvtepi32_ps(zmm1)
                        zmm3 = var_3c8_2
                        
                        if ((temp0_1474 & 2) == 0)
                        label_140261a89:
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_1474 & 4) != 0)
                                var_628[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                        else
                        label_140262c7a:
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
                                goto label_140262caf
                            
                            goto label_140261b02
                        
                        var_618[1] = _mm_shuffle_epi32(zmm4, 0xe5).d
                        zmm0 = _mm_sub_ps(zmm0, zmm1)
                        
                        if ((temp0_1474 & 4) != 0)
                        label_140262caf:
                            var_618[2] = _mm_shuffle_epi32(zmm4, 0x4e).d
                            zmm5 = _mm_cmpeq_ps(zmm5, zmm0, 1)
                            zmm0 = _mm_sqrt_ps(zmm0)
                            
                            if ((temp0_1474 & 8) == 0)
                                goto label_140261b11
                            
                            goto label_140262cc9
                        
                    label_140261b02:
                        zmm5 = _mm_cmpeq_ps(zmm5, zmm0, 1)
                        zmm0 = _mm_sqrt_ps(zmm0)
                        
                        if ((temp0_1474 & 8) == 0)
                        label_140261b11:
                            zmm5 = _mm_and_ps(zmm5, zmm0)
                            
                            if ((temp0_1474 & 1) != 0)
                                goto label_140262cda
                            
                            goto label_140261b1e
                        
                    label_140262cc9:
                        var_618[3] = _mm_shuffle_epi32(zmm4, 0xe7).d
                        zmm5 = _mm_and_ps(zmm5, zmm0)
                        
                        if ((temp0_1474 & 1) != 0)
                        label_140262cda:
                            var_608.d = zmm5[0]
                            zmm4 = var_428_4
                            
                            if ((temp0_1474 & 2) == 0)
                                goto label_140261b2d
                            
                            goto label_140262cf6
                        
                    label_140261b1e:
                        zmm4 = var_428_4
                        
                        if ((temp0_1474 & 2) == 0)
                        label_140261b2d:
                            
                            if ((temp0_1474 & 4) != 0)
                                goto label_140262d09
                            
                            goto label_140261b35
                        
                    label_140262cf6:
                        var_608:4.d = _mm_shuffle_epi32(zmm5, 0xe5).d
                        
                        if ((temp0_1474 & 4) == 0)
                        label_140261b35:
                            
                            if ((temp0_1474 & 8) != 0)
                                var_608:0xc.d = _mm_shuffle_epi32(zmm5, 0xe7).d
                        else
                        label_140262d09:
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
                                    goto label_140262e58
                                
                                goto label_140261cf2
                            
                            var_638:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                            zmm0 = _mm_add_epi32(zmm0, zmm8)
                            zmm4 |= zmm5
                            
                            if ((temp0_2134 & 8) != 0)
                            label_140262e58:
                                var_638:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                                zmm4 |= zmm0
                                zmm8 = var_588_3
                                
                                if ((temp0_2134 & 1) == 0)
                                    goto label_140261d0c
                                
                                goto label_140262e74
                            
                        label_140261cf2:
                            zmm4 |= zmm0
                            zmm8 = var_588_3
                            
                            if ((temp0_2134 & 1) != 0)
                            label_140262e74:
                                var_628[0] = zmm4[0]
                                zmm5 = _mm_slli_epi32(zmm6, 0x11)
                                
                                if ((temp0_2134 & 2) != 0)
                                    var_628[1] = _mm_shuffle_epi32(zmm4, 0xe5).d
                            else
                            label_140261d0c:
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
                                    goto label_140262eaf
                                
                                goto label_140261dcc
                            
                            var_618[2] = _mm_shuffle_epi32(zmm5, 0x4e).d
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            zmm2 = _mm_sqrt_ps(zmm3)
                            
                            if ((temp0_2134 & 8) != 0)
                            label_140262eaf:
                                var_618[3] = _mm_shuffle_epi32(zmm5, 0xe7)[0]
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                
                                if ((temp0_2134 & 1) == 0)
                                    goto label_140261dd9
                                
                                goto label_140262ec0
                            
                        label_140261dcc:
                            zmm0 = _mm_and_ps(zmm0, zmm2)
                            
                            if ((temp0_2134 & 1) == 0)
                            label_140261dd9:
                                zmm3 = var_3c8_2
                                
                                if ((temp0_2134 & 2) != 0)
                                    goto label_140262edc
                                
                                goto label_140261dea
                            
                        label_140262ec0:
                            var_608.d = zmm0.d
                            zmm3 = var_3c8_2
                            
                            if ((temp0_2134 & 2) != 0)
                            label_140262edc:
                                var_608:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                                zmm13 = var_488_3
                                
                                if ((temp0_2134 & 4) == 0)
                                    goto label_140261dfa
                                
                                goto label_140262ef9
                            
                        label_140261dea:
                            zmm13 = var_488_3
                            
                            if ((temp0_2134 & 4) != 0)
                            label_140262ef9:
                                var_608:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                                
                                if ((temp0_2134 & 8) != 0)
                                    var_608:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_140261dfa:
                                
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
                                        goto label_140262f50
                                    
                                    goto label_140261f35
                                
                                var_638.d = zmm3[0]
                                zmm0 &= data_143442480
                                
                                if ((temp0_2176 & 2) != 0)
                                label_140262f50:
                                    var_638:4.d = _mm_shuffle_epi32(zmm3, 0xe5).d
                                    zmm6 = var_5b8_1
                                    zmm0 = _mm_add_epi32(zmm0, zmm5)
                                    
                                    if ((temp0_2176 & 4) == 0)
                                        goto label_140261f41
                                    
                                    goto label_140262f70
                                
                            label_140261f35:
                                zmm0 = _mm_add_epi32(zmm0, zmm5)
                                
                                if ((temp0_2176 & 4) == 0)
                                label_140261f41:
                                    zmm0 = _mm_cvtepi32_ps(zmm0)
                                    
                                    if ((temp0_2176 & 8) != 0)
                                        goto label_140262f86
                                    
                                    goto label_140261f4c
                                
                            label_140262f70:
                                var_638:8.d = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                
                                if ((temp0_2176 & 8) != 0)
                                label_140262f86:
                                    var_638:0xc.d = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                                    zmm0 = _mm_div_ps(zmm0, zmm4)
                                    
                                    if ((temp0_2176 & 1) == 0)
                                        goto label_140261f57
                                    
                                    goto label_140262f97
                                
                            label_140261f4c:
                                zmm0 = _mm_div_ps(zmm0, zmm4)
                                
                                if ((temp0_2176 & 1) == 0)
                                label_140261f57:
                                    zmm2 &= data_143442680
                                    
                                    if ((temp0_2176 & 2) != 0)
                                        goto label_140262fb2
                                    
                                    goto label_140261f67
                                
                            label_140262f97:
                                var_628[0] = zmm0.d
                                zmm2 &= data_143442680
                                
                                if ((temp0_2176 & 2) == 0)
                                label_140261f67:
                                    zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                                    
                                    if ((temp0_2176 & 4) != 0)
                                        var_628[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                else
                                label_140262fb2:
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
                                        goto label_140262feb
                                    
                                    goto label_140261fd0
                                
                                var_618[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                zmm4 = _mm_sub_ps(zmm4, zmm0)
                                zmm0 = zx.o(0)
                                
                                if ((temp0_2176 & 4) != 0)
                                label_140262feb:
                                    var_618[2] = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                    zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                    zmm3 = _mm_sqrt_ps(zmm4)
                                    
                                    if ((temp0_2176 & 8) == 0)
                                        goto label_140261fdf
                                    
                                    goto label_140263005
                                
                            label_140261fd0:
                                zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                zmm3 = _mm_sqrt_ps(zmm4)
                                
                                if ((temp0_2176 & 8) == 0)
                                label_140261fdf:
                                    zmm0 = _mm_and_ps(zmm0, zmm3)
                                    zmm4 = var_428_6
                                    
                                    if ((temp0_2176 & 1) != 0)
                                        goto label_14026301f
                                    
                                    goto label_140261ff5
                                
                            label_140263005:
                                var_618[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                                zmm0 = _mm_and_ps(zmm0, zmm3)
                                zmm4 = var_428_6
                                
                                if ((temp0_2176 & 1) != 0)
                                label_14026301f:
                                    var_608.d = zmm0.d
                                    zmm3 = zmm13
                                    
                                    if ((temp0_2176 & 2) == 0)
                                        goto label_140262002
                                    
                                    goto label_140263037
                                
                            label_140261ff5:
                                zmm3 = zmm13
                                
                                if ((temp0_2176 & 2) == 0)
                                label_140262002:
                                    zmm13 = var_488_3
                                    
                                    if ((temp0_2176 & 4) != 0)
                                        goto label_140263054
                                    
                                    goto label_140262012
                                
                            label_140263037:
                                var_608:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                                zmm13 = var_488_3
                                
                                if ((temp0_2176 & 4) == 0)
                                label_140262012:
                                    
                                    if ((temp0_2176 & 8) != 0)
                                        var_608:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                else
                                label_140263054:
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
                                            goto label_140264a67
                                        
                                        goto label_140262071
                                    
                                    var_638.d = 0
                                    
                                    if ((temp0_2217 & 2) != 0)
                                    label_140264a67:
                                        var_638:4.d = 0
                                        
                                        if ((temp0_2217 & 4) == 0)
                                            goto label_140262079
                                        
                                        goto label_140264a77
                                    
                                label_140262071:
                                    
                                    if ((temp0_2217 & 4) == 0)
                                    label_140262079:
                                        
                                        if ((temp0_2217 & 8) != 0)
                                            goto label_140264a87
                                        
                                        goto label_140262081
                                    
                                label_140264a77:
                                    var_638:8.d = 0
                                    
                                    if ((temp0_2217 & 8) != 0)
                                    label_140264a87:
                                        var_638:0xc.d = 0
                                        
                                        if ((temp0_2217 & 1) == 0)
                                            goto label_140262089
                                        
                                        goto label_140264a97
                                    
                                label_140262081:
                                    
                                    if ((temp0_2217 & 1) == 0)
                                    label_140262089:
                                        
                                        if ((temp0_2217 & 2) != 0)
                                            goto label_140264aa7
                                        
                                        goto label_140262091
                                    
                                label_140264a97:
                                    var_628[0] = 0
                                    
                                    if ((temp0_2217 & 2) != 0)
                                    label_140264aa7:
                                        var_628[1] = 0
                                        
                                        if ((temp0_2217 & 4) == 0)
                                            goto label_140262099
                                        
                                        goto label_140264ab7
                                    
                                label_140262091:
                                    
                                    if ((temp0_2217 & 4) == 0)
                                    label_140262099:
                                        
                                        if ((temp0_2217 & 8) != 0)
                                            goto label_140264ac7
                                        
                                        goto label_1402620a1
                                    
                                label_140264ab7:
                                    var_628[2] = 0
                                    
                                    if ((temp0_2217 & 8) != 0)
                                    label_140264ac7:
                                        var_628[3] = 0
                                        
                                        if ((temp0_2217 & 1) == 0)
                                            goto label_1402620a9
                                        
                                        goto label_140264ad7
                                    
                                label_1402620a1:
                                    
                                    if ((temp0_2217 & 1) == 0)
                                    label_1402620a9:
                                        
                                        if ((temp0_2217 & 2) != 0)
                                            goto label_140264ae7
                                        
                                        goto label_1402620b1
                                    
                                label_140264ad7:
                                    var_618[0] = 0
                                    
                                    if ((temp0_2217 & 2) != 0)
                                    label_140264ae7:
                                        var_618[1] = 0
                                        
                                        if ((temp0_2217 & 4) == 0)
                                            goto label_1402620b9
                                        
                                        goto label_140264af7
                                    
                                label_1402620b1:
                                    
                                    if ((temp0_2217 & 4) == 0)
                                    label_1402620b9:
                                        
                                        if ((temp0_2217 & 8) != 0)
                                            goto label_140264b07
                                        
                                        goto label_1402620c1
                                    
                                label_140264af7:
                                    var_618[2] = 0
                                    
                                    if ((temp0_2217 & 8) != 0)
                                    label_140264b07:
                                        var_618[3] = 0
                                        
                                        if ((temp0_2217 & 1) == 0)
                                            goto label_1402620c9
                                        
                                        goto label_140264b17
                                    
                                label_1402620c1:
                                    
                                    if ((temp0_2217 & 1) == 0)
                                    label_1402620c9:
                                        
                                        if ((temp0_2217 & 2) != 0)
                                            goto label_140264b27
                                        
                                        goto label_1402620d1
                                    
                                label_140264b17:
                                    var_608.d = 0x3f800000
                                    
                                    if ((temp0_2217 & 2) != 0)
                                    label_140264b27:
                                        var_608:4.d = 0x3f800000
                                        
                                        if ((temp0_2217 & 4) == 0)
                                            goto label_1402620d9
                                        
                                        goto label_140264b37
                                    
                                label_1402620d1:
                                    
                                    if ((temp0_2217 & 4) != 0)
                                    label_140264b37:
                                        var_608:8.d = 0x3f800000
                                        
                                        if ((temp0_2217 & 8) != 0)
                                            var_608:0xc.d = 0x3f800000
                                    else
                                    label_1402620d9:
                                        
                                        if ((temp0_2217 & 8) != 0)
                                            var_608:0xc.d = 0x3f800000
                                
                                char temp0_2219 =
                                    _mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm1), 0x1f))
                                
                                if (temp0_2219 != 0)
                                    if ((temp0_2219 & 1) == 0)
                                        if ((temp0_2219 & 2) != 0)
                                            goto label_140264b5c
                                        
                                        goto label_14026210c
                                    
                                    var_638.d = 0
                                    
                                    if ((temp0_2219 & 2) != 0)
                                    label_140264b5c:
                                        var_638:4.d = 0
                                        
                                        if ((temp0_2219 & 4) == 0)
                                            goto label_140262114
                                        
                                        goto label_140264b6c
                                    
                                label_14026210c:
                                    
                                    if ((temp0_2219 & 4) == 0)
                                    label_140262114:
                                        
                                        if ((temp0_2219 & 8) != 0)
                                            goto label_140264b7c
                                        
                                        goto label_14026211c
                                    
                                label_140264b6c:
                                    var_638:8.d = 0
                                    
                                    if ((temp0_2219 & 8) != 0)
                                    label_140264b7c:
                                        var_638:0xc.d = 0
                                        
                                        if ((temp0_2219 & 1) == 0)
                                            goto label_140262124
                                        
                                        goto label_140264b8c
                                    
                                label_14026211c:
                                    
                                    if ((temp0_2219 & 1) == 0)
                                    label_140262124:
                                        
                                        if ((temp0_2219 & 2) != 0)
                                            goto label_140264b9c
                                        
                                        goto label_14026212c
                                    
                                label_140264b8c:
                                    var_628[0] = 0
                                    
                                    if ((temp0_2219 & 2) != 0)
                                    label_140264b9c:
                                        var_628[1] = 0
                                        
                                        if ((temp0_2219 & 4) == 0)
                                            goto label_140262134
                                        
                                        goto label_140264bac
                                    
                                label_14026212c:
                                    
                                    if ((temp0_2219 & 4) == 0)
                                    label_140262134:
                                        
                                        if ((temp0_2219 & 8) != 0)
                                            goto label_140264bbc
                                        
                                        goto label_14026213c
                                    
                                label_140264bac:
                                    var_628[2] = 0
                                    
                                    if ((temp0_2219 & 8) != 0)
                                    label_140264bbc:
                                        var_628[3] = 0
                                        
                                        if ((temp0_2219 & 1) == 0)
                                            goto label_140262144
                                        
                                        goto label_140264bcc
                                    
                                label_14026213c:
                                    
                                    if ((temp0_2219 & 1) == 0)
                                    label_140262144:
                                        
                                        if ((temp0_2219 & 2) != 0)
                                            goto label_140264bdc
                                        
                                        goto label_14026214c
                                    
                                label_140264bcc:
                                    var_618[0] = 0
                                    
                                    if ((temp0_2219 & 2) != 0)
                                    label_140264bdc:
                                        var_618[1] = 0
                                        
                                        if ((temp0_2219 & 4) == 0)
                                            goto label_140262154
                                        
                                        goto label_140264bec
                                    
                                label_14026214c:
                                    
                                    if ((temp0_2219 & 4) == 0)
                                    label_140262154:
                                        
                                        if ((temp0_2219 & 8) != 0)
                                            goto label_140264bfc
                                        
                                        goto label_14026215c
                                    
                                label_140264bec:
                                    var_618[2] = 0
                                    
                                    if ((temp0_2219 & 8) != 0)
                                    label_140264bfc:
                                        var_618[3] = 0
                                        
                                        if ((temp0_2219 & 1) == 0)
                                            goto label_140262164
                                        
                                        goto label_140264c0c
                                    
                                label_14026215c:
                                    
                                    if ((temp0_2219 & 1) == 0)
                                    label_140262164:
                                        
                                        if ((temp0_2219 & 2) != 0)
                                            goto label_140264c1c
                                        
                                        goto label_14026216c
                                    
                                label_140264c0c:
                                    var_608.d = 0x3f800000
                                    
                                    if ((temp0_2219 & 2) != 0)
                                    label_140264c1c:
                                        var_608:4.d = 0x3f800000
                                        
                                        if ((temp0_2219 & 4) == 0)
                                            goto label_140262174
                                        
                                        goto label_140264c2c
                                    
                                label_14026216c:
                                    
                                    if ((temp0_2219 & 4) != 0)
                                    label_140264c2c:
                                        var_608:8.d = 0x3f800000
                                        
                                        if ((temp0_2219 & 8) != 0)
                                            var_608:0xc.d = 0x3f800000
                                    else
                                    label_140262174:
                                        
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
                                goto label_140262d49
                            
                            goto label_1402624e2
                        
                        zmm0 = zx.o(*zmm4[0].q)
                        
                        if ((temp0_2287 & 2) != 0)
                        label_140262d49:
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm0, 0), 
                                zmm0, 0xe2)
                            zmm8 = var_588_3
                            
                            if ((temp0_2287 & 4) == 0)
                                goto label_1402624f2
                            
                            goto label_140262d6e
                        
                    label_1402624e2:
                        zmm8 = var_588_3
                        
                        if ((temp0_2287 & 4) != 0)
                        label_140262d6e:
                            zmm0 = _mm_shuffle_ps(zmm0, 
                                _mm_shuffle_ps(zx.o(*zmm12[0].q), zmm0, 0x30), 0x84)
                            
                            if ((temp0_2287 & 8) != 0)
                                zmm0 = _mm_shuffle_ps(zmm0, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm0, 
                                        0x20), 
                                    0x24)
                        else
                        label_1402624f2:
                            
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
                            goto label_140262b02
                        
                        goto label_14026256e
                    
                    var_548[0] = arg6[0]
                    zmm7 = _mm_and_ps(zmm7, zmm6)
                    zmm6 = __andnps_xmmxud_memxud(zmm6, data_1434426d0)
                    
                    if ((temp0_2235 & 2) != 0)
                    label_140262b02:
                        var_548[1] = _mm_shuffle_epi32(arg6, 0xe5).d
                        zmm7 = _mm_or_ps(zmm7, zmm6)
                        
                        if ((temp0_2235 & 4) == 0)
                            goto label_140262579
                        
                        goto label_140262b1c
                    
                label_14026256e:
                    zmm7 = _mm_or_ps(zmm7, zmm6)
                    
                    if ((temp0_2235 & 4) == 0)
                    label_140262579:
                        zmm7 = _mm_add_ps(zmm7, zmm3)
                        
                        if ((temp0_2235 & 8) != 0)
                            goto label_140262b36
                        
                        goto label_140262584
                    
                label_140262b1c:
                    var_548[2] = _mm_shuffle_epi32(arg6, 0x4e).d
                    zmm7 = _mm_add_ps(zmm7, zmm3)
                    
                    if ((temp0_2235 & 8) != 0)
                    label_140262b36:
                        var_548[3] = _mm_shuffle_epi32(arg6, 0xe7).d
                        zmm7 = _mm_mul_ps(zmm7, zmm4)
                        
                        if ((temp0_2235 & 1) == 0)
                            goto label_14026258f
                        
                        goto label_140262b4a
                    
                label_140262584:
                    zmm7 = _mm_mul_ps(zmm7, zmm4)
                    
                    if ((temp0_2235 & 1) == 0)
                    label_14026258f:
                        zmm2 = _mm_and_ps(zmm2, zmm5)
                        zmm5 = __andnps_xmmxud_memxud(zmm5, data_1434426d0)
                        
                        if ((temp0_2235 & 2) != 0)
                            goto label_140262b6a
                        
                        goto label_1402625a1
                    
                label_140262b4a:
                    var_538.d = zmm7[0]
                    zmm2 = _mm_and_ps(zmm2, zmm5)
                    zmm5 = __andnps_xmmxud_memxud(zmm5, data_1434426d0)
                    
                    if ((temp0_2235 & 2) == 0)
                    label_1402625a1:
                        zmm2 = _mm_or_ps(zmm2, zmm5)
                        
                        if ((temp0_2235 & 4) != 0)
                            var_538:8.d = _mm_shuffle_epi32(zmm7, 0x4e).d
                    else
                    label_140262b6a:
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
                            goto label_140262ba5
                        
                        goto label_140262641
                    
                    var_528:8.d = _mm_shuffle_epi32(zmm2, 0x4e).d
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 2)
                    zmm1 = _mm_sqrt_ps(zmm3)
                    
                    if ((temp0_2235 & 8) != 0)
                    label_140262ba5:
                        var_528:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_2235 & 1) == 0)
                            goto label_14026264c
                        
                        goto label_140262bb9
                    
                label_140262641:
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_2235 & 1) == 0)
                    label_14026264c:
                        
                        if ((temp0_2235 & 2) != 0)
                            goto label_140262bcf
                        
                        goto label_140262654
                    
                label_140262bb9:
                    var_518.d = zmm0.d
                    
                    if ((temp0_2235 & 2) != 0)
                    label_140262bcf:
                        var_518:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_2235 & 4) == 0)
                            goto label_14026265c
                        
                        goto label_140262be5
                    
                label_140262654:
                    
                    if ((temp0_2235 & 4) != 0)
                    label_140262be5:
                        var_518:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                        
                        if ((temp0_2235 & 8) != 0)
                            var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    else
                    label_14026265c:
                        
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
                                goto label_140262d90
                            
                            goto label_1402627e6
                        
                        var_548[0] = zmm2.d
                        
                        if ((temp0_2323 & 2) != 0)
                        label_140262d90:
                            var_548[1] = zmm8.d
                            
                            if ((temp0_2323 & 4) == 0)
                                goto label_1402627ee
                            
                            goto label_140262da2
                        
                    label_1402627e6:
                        
                        if ((temp0_2323 & 4) != 0)
                        label_140262da2:
                            var_548[2] = zmm6.d
                            
                            if ((temp0_2323 & 8) != 0)
                            label_140262db3:
                                var_548[3] = zmm1.d
                                
                                if ((temp0_2323 & 1) == 0)
                                    goto label_1402627fe
                                
                                goto label_140262dc4
                        else
                        label_1402627ee:
                            
                            if ((temp0_2323 & 8) != 0)
                                goto label_140262db3
                        
                        if ((temp0_2323 & 1) != 0)
                        label_140262dc4:
                            var_538.d = zmm5[0]
                            zmm2 = _mm_unpacklo_ps(zmm2, zmm8.q)
                            zmm6 = _mm_unpacklo_ps(zmm6, zmm1.q)
                            
                            if ((temp0_2323 & 2) != 0)
                                var_538:4.d = zmm11.d
                        else
                        label_1402627fe:
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
                                goto label_140262df5
                            
                            goto label_1402628f7
                        
                        var_528:0xc.d = zmm7[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_2323 & 1) != 0)
                        label_140262df5:
                            var_518.d = zmm0.d
                            
                            if ((temp0_2323 & 2) == 0)
                                goto label_1402628ff
                            
                            goto label_140262e0b
                        
                    label_1402628f7:
                        
                        if ((temp0_2323 & 2) == 0)
                        label_1402628ff:
                            
                            if ((temp0_2323 & 4) != 0)
                                goto label_140262e21
                            
                            goto label_140262907
                        
                    label_140262e0b:
                        var_518:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_2323 & 4) == 0)
                        label_140262907:
                            
                            if ((temp0_2323 & 8) != 0)
                                var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_140262e21:
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
                                        goto label_140263092
                                    
                                    goto label_1402629b4
                                
                                zmm0 = var_648_3
                                zmm7 = *zmm0.q
                                
                                if ((rdi_18 & 2) != 0)
                                label_140263092:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_648_3, 0x4e).q, zmm7, 
                                            0), 
                                        zmm7, 0xe2)
                                    zmm7 = zmm0
                                    
                                    if ((rdi_18 & 4) == 0)
                                        goto label_1402629be
                                    
                                    goto label_1402630b5
                                
                            label_1402629b4:
                                
                                if ((rdi_18 & 4) != 0)
                                label_1402630b5:
                                    zmm0 = _mm_shuffle_ps(*var_458_2.q, zmm7, 0x30)
                                    zmm7 = _mm_shuffle_ps(zmm7, zmm0, 0x84)
                                    
                                    if ((rdi_18 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_458_2, 0x4e).q, zmm7, 
                                            0x20)
                                        zmm7 = _mm_shuffle_ps(zmm7, zmm0, 0x24)
                                else
                                label_1402629be:
                                    
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
                                    label_140263100:
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(*zmm4[0].q, zmm7, 0x30), 0x84)
                                        
                                        if ((rdi_18 & 8) == 0)
                                            goto label_140262ab7
                                        
                                        goto label_140263120
                                else
                                    zmm4 |= zmm0
                                    
                                    if ((rdi_18 & 4) != 0)
                                        goto label_140263100
                                
                                if ((rdi_18 & 8) == 0)
                                label_140262ab7:
                                    zmm1 = zx.o(0)
                                    
                                    if ((temp0_2367 & 1) == 0)
                                        goto label_140263131
                                    
                                    goto label_140262ac4
                                
                            label_140263120:
                                zmm7 = _mm_shuffle_ps(zmm7, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e).q, zmm7, 0x20), 
                                    0x24)
                                zmm1 = zx.o(0)
                                
                                if ((temp0_2367 & 1) != 0)
                                label_140262ac4:
                                    zmm1.d = zmm7[0]
                                    zmm3 = _mm_slli_epi32(temp0_2377, 0x1f)
                                    zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_2367 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 1), zmm1, 
                                            0xe2)
                                else
                                label_140263131:
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
                                        goto label_14026337c
                                    
                                    goto label_14026321a
                                
                                zmm0 = var_648_3
                                zmm4 = *zmm0.q
                                
                                if ((temp0_2482 & 2) != 0)
                                label_14026337c:
                                    zmm0 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_648_3, 0x4e).q, zmm4, 
                                            0), 
                                        zmm4, 0xe2)
                                    zmm4 = zmm0
                                    
                                    if ((temp0_2482 & 4) == 0)
                                        goto label_140263224
                                    
                                    goto label_140263396
                                
                            label_14026321a:
                                
                                if ((temp0_2482 & 4) != 0)
                                label_140263396:
                                    zmm0 = _mm_shuffle_ps(*zmm14[0].q, zmm4, 0x30)
                                    zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x84)
                                    
                                    if ((temp0_2482 & 8) != 0)
                                        zmm0 = _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, 
                                            zmm4, 0x20)
                                        zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                                else
                                label_140263224:
                                    
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
                                        goto label_1402633e1
                                    
                                    goto label_140263301
                                
                                zmm4 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm7, 0x4e).q, zmm4, 0), 
                                    zmm4, 0xe2)
                                zmm3 |= zmm0
                                
                                if ((temp0_2482 & 4) != 0)
                                label_1402633e1:
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(*zmm3[0].q, zmm4, 0x30), 0x84)
                                    var_458_3 = zmm6
                                    
                                    if ((temp0_2482 & 8) == 0)
                                        goto label_14026330f
                                    
                                    goto label_140263409
                                
                            label_140263301:
                                var_458_3 = zmm6
                                
                                if ((temp0_2482 & 8) == 0)
                                label_14026330f:
                                    zmm12 = zx.o(0)
                                    
                                    if ((temp0_2487 & 1) == 0)
                                        goto label_14026341b
                                    
                                    goto label_14026331d
                                
                            label_140263409:
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm3, 0x4e).q, zmm4, 0x20), 
                                    0x24)
                                zmm12 = zx.o(0)
                                
                                if ((temp0_2487 & 1) != 0)
                                label_14026331d:
                                    zmm12[0] = zmm4[0]
                                    zmm5 = _mm_slli_epi32(zmm5, 0x1f)
                                    zmm2 = _mm_slli_epi32(zmm2, 0x1f)
                                    
                                    if ((temp0_2487 & 2) != 0)
                                        zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm12, 1), 
                                            zmm12, 0xe2)
                                else
                                label_14026341b:
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
                                        goto label_1402647f3
                                    
                                    goto label_140263511
                                
                                zmm7 = *var_648_3.q
                                
                                if ((temp0_2528 & 2) != 0)
                                label_1402647f3:
                                    zmm7 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_648_3, 0x4e).q, zmm7, 
                                            0), 
                                        zmm7, 0xe2)
                                    
                                    if ((temp0_2528 & 4) == 0)
                                        goto label_14026351a
                                    
                                    goto label_14026480c
                                
                            label_140263511:
                                
                                if ((temp0_2528 & 4) != 0)
                                label_14026480c:
                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                        _mm_shuffle_ps(*zmm14[0].q, zmm7, 0x30), 0x84)
                                    
                                    if ((temp0_2528 & 8) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm7, 
                                                0x20), 
                                            0x24)
                                else
                                label_14026351a:
                                    
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
                                        goto label_140264855
                                    
                                    goto label_1402635de
                                
                                zmm3 = *var_648_7.q
                                zmm14 &= zmm1
                                zmm1 &= not.o(zmm0)
                                
                                if ((temp0_2528 & 2) != 0)
                                label_140264855:
                                    zmm3 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_648_7, 0x4e).q, zmm3, 
                                            0), 
                                        zmm3, 0xe2)
                                    zmm14 |= zmm1
                                    
                                    if ((temp0_2528 & 4) == 0)
                                        goto label_1402635ec
                                    
                                    goto label_140264866
                                
                            label_1402635de:
                                zmm14 |= zmm1
                                
                                if ((temp0_2528 & 4) != 0)
                                label_140264866:
                                    zmm3 = _mm_shuffle_ps(zmm3, 
                                        _mm_shuffle_ps(*zmm14[0].q, zmm3, 0x30), 0x84)
                                    
                                    if ((temp0_2528 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm3, 
                                                0x20), 
                                            0x24)
                                else
                                label_1402635ec:
                                    
                                    if ((temp0_2528 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm3, 
                                                0x20), 
                                            0x24)
                                
                                zmm2 = zx.o(0)
                                
                                if ((temp0_2533 & 1) != 0)
                                    zmm2.d = zmm3[0]
                                    
                                    if ((temp0_2533 & 2) != 0)
                                        goto label_140263640
                                    
                                    goto label_14026361c
                                
                                if ((temp0_2533 & 2) != 0)
                                label_140263640:
                                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm2, 1), zmm2, 0xe2)
                                    
                                    if ((temp0_2533 & 4) != 0)
                                        goto label_140263627
                                    
                                    goto label_140263647
                                
                            label_14026361c:
                                
                                if ((temp0_2533 & 4) == 0)
                                label_140263647:
                                    
                                    if ((temp0_2533 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(zmm3, zmm2, 0x23), 0x24)
                                else
                                label_140263627:
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
                                    goto label_140264690
                                
                                goto label_140263759
                            
                            var_548[0] = zmm6.d
                            zmm3 = _mm_cvtepi32_ps(zmm3)
                            zmm14 = var_448_4
                            
                            if ((temp0_2358 & 2) != 0)
                            label_140264690:
                                var_548[1] = _mm_shuffle_epi32(zmm6, 0xe5)[0]
                                zmm3 = _mm_div_ps(zmm3, zmm0)
                                
                                if ((temp0_2358 & 4) == 0)
                                    goto label_140263764
                                
                                goto label_1402646a9
                            
                        label_140263759:
                            zmm3 = _mm_div_ps(zmm3, zmm0)
                            
                            if ((temp0_2358 & 4) != 0)
                            label_1402646a9:
                                var_548[2] = _mm_shuffle_epi32(zmm6, 0x4e).d
                                zmm1 &= data_143442680
                                zmm12 = _mm_mul_ps(zmm12, zmm3)
                                
                                if ((temp0_2358 & 8) != 0)
                                    var_548[3] = _mm_shuffle_epi32(zmm6, 0xe7).d
                            else
                            label_140263764:
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
                                    goto label_1402646ed
                                
                                goto label_1402637b2
                            
                            var_538.d = temp0_2579[0]
                            zmm0 = _mm_cvtepi32_ps(zmm1)
                            zmm3 = var_498_1
                            
                            if ((temp0_2358 & 2) == 0)
                            label_1402637b2:
                                zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                                
                                if ((temp0_2358 & 4) != 0)
                                    var_538:8.d = _mm_shuffle_epi32(temp0_2579, 0x4e).d
                            else
                            label_1402646ed:
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
                                    goto label_140264732
                                
                                goto label_140263826
                            
                            var_528:4.d = _mm_shuffle_epi32(zmm4, 0xe5).d
                            zmm0 = _mm_sub_ps(zmm0, zmm1)
                            zmm12 = var_438_2
                            
                            if ((temp0_2358 & 4) != 0)
                            label_140264732:
                                var_528:8.d = _mm_shuffle_epi32(zmm4, 0x4e).d
                                arg6 = _mm_cmpeq_ps(zx.o(0), zmm0, 1)
                                zmm0 = _mm_sqrt_ps(zmm0)
                                
                                if ((temp0_2358 & 8) == 0)
                                    goto label_140263836
                                
                                goto label_140264750
                            
                        label_140263826:
                            arg6 = _mm_cmpeq_ps(zx.o(0), zmm0, 1)
                            zmm0 = _mm_sqrt_ps(zmm0)
                            
                            if ((temp0_2358 & 8) == 0)
                            label_140263836:
                                arg6 = _mm_and_ps(arg6, zmm0)
                                
                                if ((temp0_2358 & 1) != 0)
                                    goto label_140264765
                                
                                goto label_140263844
                            
                        label_140264750:
                            var_528:0xc.d = _mm_shuffle_epi32(zmm4, 0xe7).d
                            arg6 = _mm_and_ps(arg6, zmm0)
                            
                            if ((temp0_2358 & 1) != 0)
                            label_140264765:
                                var_518.d = arg6[0]
                                zmm4 = var_5b8_2
                                
                                if ((temp0_2358 & 2) == 0)
                                    goto label_140263853
                                
                                goto label_140264786
                            
                        label_140263844:
                            zmm4 = var_5b8_2
                            
                            if ((temp0_2358 & 2) == 0)
                            label_140263853:
                                var_498_1 = zmm3
                                
                                if ((temp0_2358 & 4) != 0)
                                    goto label_1402647a6
                                
                                goto label_140263866
                            
                        label_140264786:
                            var_518:4.d = _mm_shuffle_epi32(arg6, 0xe5).d
                            var_498_1 = zmm3
                            
                            if ((temp0_2358 & 4) == 0)
                            label_140263866:
                                zmm6 = var_5a8_5
                                
                                if ((temp0_2358 & 8) != 0)
                                    var_518:0xc.d = _mm_shuffle_epi32(arg6, 0xe7).d
                            else
                            label_1402647a6:
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
                                        goto label_1402648ae
                                    
                                    goto label_140263a1d
                                
                                var_548[2] = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                zmm0 = _mm_add_epi32(zmm0, zmm8)
                                zmm5 |= zmm1
                                
                                if ((temp0_2601 & 8) != 0)
                                label_1402648ae:
                                    var_548[3] = _mm_shuffle_epi32(zmm3, 0xe7).d
                                    zmm5 |= zmm0
                                    zmm7 = var_588_3
                                    
                                    if ((temp0_2601 & 1) == 0)
                                        goto label_140263a36
                                    
                                    goto label_1402648cc
                                
                            label_140263a1d:
                                zmm5 |= zmm0
                                zmm7 = var_588_3
                                
                                if ((temp0_2601 & 1) != 0)
                                label_1402648cc:
                                    var_538.d = zmm5[0]
                                    zmm1 = _mm_slli_epi32(zmm6, 0x11)
                                    
                                    if ((temp0_2601 & 2) != 0)
                                        var_538:4.d = _mm_shuffle_epi32(zmm5, 0xe5).d
                                else
                                label_140263a36:
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
                                        goto label_14026490c
                                    
                                    goto label_140263ada
                                
                                var_528:4.d = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                                zmm4 = _mm_sub_ps(zmm4, zmm0)
                                zmm0 = zx.o(0)
                                
                                if ((temp0_2601 & 4) != 0)
                                label_14026490c:
                                    var_528:8.d = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                                    zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                    zmm3 = _mm_sqrt_ps(zmm4)
                                    
                                    if ((temp0_2601 & 8) == 0)
                                        goto label_140263ae9
                                    
                                    goto label_140264929
                                
                            label_140263ada:
                                zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                zmm3 = _mm_sqrt_ps(zmm4)
                                
                                if ((temp0_2601 & 8) == 0)
                                label_140263ae9:
                                    zmm0 = _mm_and_ps(zmm0, zmm3)
                                    zmm4 = var_5b8_2
                                    
                                    if ((temp0_2601 & 1) != 0)
                                        goto label_140264946
                                    
                                    goto label_140263afd
                                
                            label_140264929:
                                var_528:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
                                zmm0 = _mm_and_ps(zmm0, zmm3)
                                zmm4 = var_5b8_2
                                
                                if ((temp0_2601 & 1) != 0)
                                label_140264946:
                                    var_518.d = zmm0.d
                                    
                                    if ((temp0_2601 & 2) == 0)
                                        goto label_140263b05
                                    
                                    goto label_14026495c
                                
                            label_140263afd:
                                
                                if ((temp0_2601 & 2) == 0)
                                label_140263b05:
                                    
                                    if ((temp0_2601 & 4) != 0)
                                        goto label_140264972
                                    
                                    goto label_140263b0d
                                
                            label_14026495c:
                                var_518:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                                
                                if ((temp0_2601 & 4) == 0)
                                label_140263b0d:
                                    
                                    if ((temp0_2601 & 8) != 0)
                                        var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                else
                                label_140264972:
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
                                            goto label_140264c5f
                                        
                                        goto label_140263c3e
                                    
                                    var_548[0] = zmm3[0]
                                    zmm0 &= data_143442480
                                    
                                    if ((temp0_2642 & 2) != 0)
                                    label_140264c5f:
                                        var_548[1] = _mm_shuffle_epi32(zmm3, 0xe5).d
                                        zmm0 = _mm_add_epi32(zmm0, zmm5)
                                        
                                        if ((temp0_2642 & 4) == 0)
                                            goto label_140263c4a
                                        
                                        goto label_140264c79
                                    
                                label_140263c3e:
                                    zmm0 = _mm_add_epi32(zmm0, zmm5)
                                    
                                    if ((temp0_2642 & 4) == 0)
                                    label_140263c4a:
                                        zmm0 = _mm_cvtepi32_ps(zmm0)
                                        
                                        if ((temp0_2642 & 8) != 0)
                                            goto label_140264c92
                                        
                                        goto label_140263c55
                                    
                                label_140264c79:
                                    var_548[2] = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                    zmm0 = _mm_cvtepi32_ps(zmm0)
                                    
                                    if ((temp0_2642 & 8) != 0)
                                    label_140264c92:
                                        var_548[3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                                        zmm0 = _mm_div_ps(zmm0, zmm4)
                                        
                                        if ((temp0_2642 & 1) == 0)
                                            goto label_140263c60
                                        
                                        goto label_140264ca6
                                    
                                label_140263c55:
                                    zmm0 = _mm_div_ps(zmm0, zmm4)
                                    
                                    if ((temp0_2642 & 1) == 0)
                                    label_140263c60:
                                        zmm2 &= data_143442680
                                        
                                        if ((temp0_2642 & 2) != 0)
                                            goto label_140264cc4
                                        
                                        goto label_140263c70
                                    
                                label_140264ca6:
                                    var_538.d = zmm0.d
                                    zmm2 &= data_143442680
                                    
                                    if ((temp0_2642 & 2) == 0)
                                    label_140263c70:
                                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                                        
                                        if ((temp0_2642 & 4) != 0)
                                            var_538:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                    else
                                    label_140264cc4:
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
                                            goto label_140264d03
                                        
                                        goto label_140263ce2
                                    
                                    var_528:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                    zmm4 = _mm_sub_ps(zmm4, zmm0)
                                    zmm0 = zx.o(0)
                                    
                                    if ((temp0_2642 & 4) != 0)
                                    label_140264d03:
                                        var_528:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                        zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                        zmm3 = _mm_sqrt_ps(zmm4)
                                        
                                        if ((temp0_2642 & 8) == 0)
                                            goto label_140263cf1
                                        
                                        goto label_140264d20
                                    
                                label_140263ce2:
                                    zmm0 = _mm_cmpeq_ps(zmm0, zmm4, 1)
                                    zmm3 = _mm_sqrt_ps(zmm4)
                                    
                                    if ((temp0_2642 & 8) == 0)
                                    label_140263cf1:
                                        zmm0 = _mm_and_ps(zmm0, zmm3)
                                        
                                        if ((temp0_2642 & 1) != 0)
                                            goto label_140264d34
                                        
                                        goto label_140263cfc
                                    
                                label_140264d20:
                                    var_528:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                                    zmm0 = _mm_and_ps(zmm0, zmm3)
                                    
                                    if ((temp0_2642 & 1) != 0)
                                    label_140264d34:
                                        var_518.d = zmm0.d
                                        
                                        if ((temp0_2642 & 2) == 0)
                                            goto label_140263d04
                                        
                                        goto label_140264d4a
                                    
                                label_140263cfc:
                                    
                                    if ((temp0_2642 & 2) == 0)
                                    label_140263d04:
                                        
                                        if ((temp0_2642 & 4) != 0)
                                            goto label_140264d60
                                        
                                        goto label_140263d0c
                                    
                                label_140264d4a:
                                    var_518:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                                    
                                    if ((temp0_2642 & 4) == 0)
                                    label_140263d0c:
                                        
                                        if ((temp0_2642 & 8) != 0)
                                            var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                    else
                                    label_140264d60:
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
                                                goto label_140264d89
                                            
                                            goto label_140263d76
                                        
                                        var_548[0] = 0
                                        
                                        if ((temp0_2683 & 2) != 0)
                                        label_140264d89:
                                            var_548[1] = 0
                                            
                                            if ((temp0_2683 & 4) == 0)
                                                goto label_140263d7e
                                            
                                            goto label_140264d9c
                                        
                                    label_140263d76:
                                        
                                        if ((temp0_2683 & 4) == 0)
                                        label_140263d7e:
                                            
                                            if ((temp0_2683 & 8) != 0)
                                                goto label_140264daf
                                            
                                            goto label_140263d86
                                        
                                    label_140264d9c:
                                        var_548[2] = 0
                                        
                                        if ((temp0_2683 & 8) != 0)
                                        label_140264daf:
                                            var_548[3] = 0
                                            
                                            if ((temp0_2683 & 1) == 0)
                                                goto label_140263d8e
                                            
                                            goto label_140264dc2
                                        
                                    label_140263d86:
                                        
                                        if ((temp0_2683 & 1) == 0)
                                        label_140263d8e:
                                            
                                            if ((temp0_2683 & 2) != 0)
                                                goto label_140264dd5
                                            
                                            goto label_140263d96
                                        
                                    label_140264dc2:
                                        var_538.d = 0
                                        
                                        if ((temp0_2683 & 2) != 0)
                                        label_140264dd5:
                                            var_538:4.d = 0
                                            
                                            if ((temp0_2683 & 4) == 0)
                                                goto label_140263d9e
                                            
                                            goto label_140264de8
                                        
                                    label_140263d96:
                                        
                                        if ((temp0_2683 & 4) == 0)
                                        label_140263d9e:
                                            
                                            if ((temp0_2683 & 8) != 0)
                                                goto label_140264dfb
                                            
                                            goto label_140263da6
                                        
                                    label_140264de8:
                                        var_538:8.d = 0
                                        
                                        if ((temp0_2683 & 8) != 0)
                                        label_140264dfb:
                                            var_538:0xc.d = 0
                                            
                                            if ((temp0_2683 & 1) == 0)
                                                goto label_140263dae
                                            
                                            goto label_140264e0e
                                        
                                    label_140263da6:
                                        
                                        if ((temp0_2683 & 1) == 0)
                                        label_140263dae:
                                            
                                            if ((temp0_2683 & 2) != 0)
                                                goto label_140264e21
                                            
                                            goto label_140263db6
                                        
                                    label_140264e0e:
                                        var_528.d = 0
                                        
                                        if ((temp0_2683 & 2) != 0)
                                        label_140264e21:
                                            var_528:4.d = 0
                                            
                                            if ((temp0_2683 & 4) == 0)
                                                goto label_140263dbe
                                            
                                            goto label_140264e34
                                        
                                    label_140263db6:
                                        
                                        if ((temp0_2683 & 4) == 0)
                                        label_140263dbe:
                                            
                                            if ((temp0_2683 & 8) != 0)
                                                goto label_140264e47
                                            
                                            goto label_140263dc6
                                        
                                    label_140264e34:
                                        var_528:8.d = 0
                                        
                                        if ((temp0_2683 & 8) != 0)
                                        label_140264e47:
                                            var_528:0xc.d = 0
                                            
                                            if ((temp0_2683 & 1) == 0)
                                                goto label_140263dce
                                            
                                            goto label_140264e5a
                                        
                                    label_140263dc6:
                                        
                                        if ((temp0_2683 & 1) == 0)
                                        label_140263dce:
                                            
                                            if ((temp0_2683 & 2) != 0)
                                                goto label_140264e6d
                                            
                                            goto label_140263dd6
                                        
                                    label_140264e5a:
                                        var_518.d = 0x3f800000
                                        
                                        if ((temp0_2683 & 2) != 0)
                                        label_140264e6d:
                                            var_518:4.d = 0x3f800000
                                            
                                            if ((temp0_2683 & 4) == 0)
                                                goto label_140263dde
                                            
                                            goto label_140264e80
                                        
                                    label_140263dd6:
                                        
                                        if ((temp0_2683 & 4) != 0)
                                        label_140264e80:
                                            var_518:8.d = 0x3f800000
                                            
                                            if ((temp0_2683 & 8) != 0)
                                                var_518:0xc.d = 0x3f800000
                                        else
                                        label_140263dde:
                                            
                                            if ((temp0_2683 & 8) != 0)
                                                var_518:0xc.d = 0x3f800000
                                    
                                    char temp0_2685 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm2 & not.o(zmm1), 0x1f))
                                    
                                    if (temp0_2685 != 0)
                                        if ((temp0_2685 & 1) == 0)
                                            if ((temp0_2685 & 2) != 0)
                                                goto label_140264eab
                                            
                                            goto label_140263e14
                                        
                                        var_548[0] = 0
                                        
                                        if ((temp0_2685 & 2) != 0)
                                        label_140264eab:
                                            var_548[1] = 0
                                            
                                            if ((temp0_2685 & 4) == 0)
                                                goto label_140263e1c
                                            
                                            goto label_140264ebe
                                        
                                    label_140263e14:
                                        
                                        if ((temp0_2685 & 4) == 0)
                                        label_140263e1c:
                                            
                                            if ((temp0_2685 & 8) != 0)
                                                goto label_140264ed1
                                            
                                            goto label_140263e24
                                        
                                    label_140264ebe:
                                        var_548[2] = 0
                                        
                                        if ((temp0_2685 & 8) != 0)
                                        label_140264ed1:
                                            var_548[3] = 0
                                            
                                            if ((temp0_2685 & 1) == 0)
                                                goto label_140263e2c
                                            
                                            goto label_140264ee4
                                        
                                    label_140263e24:
                                        
                                        if ((temp0_2685 & 1) == 0)
                                        label_140263e2c:
                                            
                                            if ((temp0_2685 & 2) != 0)
                                                goto label_140264ef7
                                            
                                            goto label_140263e34
                                        
                                    label_140264ee4:
                                        var_538.d = 0
                                        
                                        if ((temp0_2685 & 2) != 0)
                                        label_140264ef7:
                                            var_538:4.d = 0
                                            
                                            if ((temp0_2685 & 4) == 0)
                                                goto label_140263e3c
                                            
                                            goto label_140264f0a
                                        
                                    label_140263e34:
                                        
                                        if ((temp0_2685 & 4) == 0)
                                        label_140263e3c:
                                            
                                            if ((temp0_2685 & 8) != 0)
                                                goto label_140264f1d
                                            
                                            goto label_140263e44
                                        
                                    label_140264f0a:
                                        var_538:8.d = 0
                                        
                                        if ((temp0_2685 & 8) != 0)
                                        label_140264f1d:
                                            var_538:0xc.d = 0
                                            
                                            if ((temp0_2685 & 1) == 0)
                                                goto label_140263e4c
                                            
                                            goto label_140264f30
                                        
                                    label_140263e44:
                                        
                                        if ((temp0_2685 & 1) == 0)
                                        label_140263e4c:
                                            
                                            if ((temp0_2685 & 2) != 0)
                                                goto label_140264f43
                                            
                                            goto label_140263e54
                                        
                                    label_140264f30:
                                        var_528.d = 0
                                        
                                        if ((temp0_2685 & 2) != 0)
                                        label_140264f43:
                                            var_528:4.d = 0
                                            
                                            if ((temp0_2685 & 4) == 0)
                                                goto label_140263e5c
                                            
                                            goto label_140264f56
                                        
                                    label_140263e54:
                                        
                                        if ((temp0_2685 & 4) == 0)
                                        label_140263e5c:
                                            
                                            if ((temp0_2685 & 8) != 0)
                                                goto label_140264f69
                                            
                                            goto label_140263e64
                                        
                                    label_140264f56:
                                        var_528:8.d = 0
                                        
                                        if ((temp0_2685 & 8) != 0)
                                        label_140264f69:
                                            var_528:0xc.d = 0
                                            
                                            if ((temp0_2685 & 1) == 0)
                                                goto label_140263e6c
                                            
                                            goto label_140264f7c
                                        
                                    label_140263e64:
                                        
                                        if ((temp0_2685 & 1) == 0)
                                        label_140263e6c:
                                            
                                            if ((temp0_2685 & 2) != 0)
                                                goto label_140264f8f
                                            
                                            goto label_140263e74
                                        
                                    label_140264f7c:
                                        var_518.d = 0x3f800000
                                        
                                        if ((temp0_2685 & 2) != 0)
                                        label_140264f8f:
                                            var_518:4.d = 0x3f800000
                                            
                                            if ((temp0_2685 & 4) == 0)
                                                goto label_140263e7c
                                            
                                            goto label_140264fa2
                                        
                                    label_140263e74:
                                        
                                        if ((temp0_2685 & 4) != 0)
                                        label_140264fa2:
                                            var_518:8.d = 0x3f800000
                                            
                                            if ((temp0_2685 & 8) != 0)
                                                var_518:0xc.d = 0x3f800000
                                        else
                                        label_140263e7c:
                                            
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
                    label_14026454a:
                        var_638:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_2222 & 4) == 0)
                            goto label_140263f3f
                        
                        goto label_14026455d
                else if ((temp0_2222 & 2) != 0)
                    goto label_14026454a
                
                if ((temp0_2222 & 4) == 0)
                label_140263f3f:
                    zmm6 = _mm_mul_ps(var_538, zmm7)
                    zmm5 = _mm_mul_ps(var_628, zmm4)
                    
                    if ((temp0_2222 & 8) != 0)
                        goto label_140264576
                    
                    goto label_140263f4d
                
            label_14026455d:
                var_638:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                zmm6 = _mm_mul_ps(var_538, zmm7)
                zmm5 = _mm_mul_ps(var_628, zmm4)
                
                if ((temp0_2222 & 8) != 0)
                label_140264576:
                    var_638:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    zmm6 = _mm_add_ps(zmm6, zmm5)
                    
                    if ((temp0_2222 & 1) == 0)
                        goto label_140263f58
                    
                    goto label_140264587
                
            label_140263f4d:
                zmm6 = _mm_add_ps(zmm6, zmm5)
                
                if ((temp0_2222 & 1) != 0)
                label_140264587:
                    var_628[0] = zmm6.d
                    
                    if ((temp0_2222 & 2) != 0)
                    label_14026459a:
                        var_628[1] = _mm_shuffle_epi32(zmm6, 0xe5).d
                        
                        if ((temp0_2222 & 4) == 0)
                            goto label_140263f68
                        
                        goto label_1402645ad
                else
                label_140263f58:
                    
                    if ((temp0_2222 & 2) != 0)
                        goto label_14026459a
                
                if ((temp0_2222 & 4) == 0)
                label_140263f68:
                    zmm2 = _mm_mul_ps(var_528, zmm7)
                    arg6 = _mm_mul_ps(var_618, zmm4)
                    
                    if ((temp0_2222 & 8) != 0)
                        goto label_1402645c7
                    
                    goto label_140263f77
                
            label_1402645ad:
                var_628[2] = _mm_shuffle_epi32(zmm6, 0x4e).d
                zmm2 = _mm_mul_ps(var_528, zmm7)
                arg6 = _mm_mul_ps(var_618, zmm4)
                
                if ((temp0_2222 & 8) != 0)
                label_1402645c7:
                    var_628[3] = _mm_shuffle_epi32(zmm6, 0xe7).d
                    zmm2 = _mm_add_ps(zmm2, arg6)
                    
                    if ((temp0_2222 & 1) == 0)
                        goto label_140263f83
                    
                    goto label_1402645d9
                
            label_140263f77:
                zmm2 = _mm_add_ps(zmm2, arg6)
                
                if ((temp0_2222 & 1) != 0)
                label_1402645d9:
                    var_618[0] = zmm2.d
                    
                    if ((temp0_2222 & 2) != 0)
                    label_1402645ec:
                        var_618[1] = _mm_shuffle_epi32(zmm2, 0xe5).d
                        
                        if ((temp0_2222 & 4) == 0)
                            goto label_140263f93
                        
                        goto label_1402645ff
                else
                label_140263f83:
                    
                    if ((temp0_2222 & 2) != 0)
                        goto label_1402645ec
                
                if ((temp0_2222 & 4) == 0)
                label_140263f93:
                    zmm11 = _mm_mul_ps(var_518, zmm7)
                    zmm4 = _mm_mul_ps(zmm4, var_608)
                    
                    if ((temp0_2222 & 8) != 0)
                        goto label_14026461a
                    
                    goto label_140263fa3
                
            label_1402645ff:
                var_618[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                zmm11 = _mm_mul_ps(var_518, zmm7)
                zmm4 = _mm_mul_ps(zmm4, var_608)
                
                if ((temp0_2222 & 8) != 0)
                label_14026461a:
                    var_618[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                    zmm11 = _mm_add_ps(zmm11, zmm4)
                    
                    if ((temp0_2222 & 1) == 0)
                        goto label_140263faf
                    
                    goto label_14026462c
                
            label_140263fa3:
                zmm11 = _mm_add_ps(zmm11, zmm4)
                
                if ((temp0_2222 & 1) == 0)
                label_140263faf:
                    
                    if ((temp0_2222 & 2) != 0)
                        goto label_140264641
                    
                    goto label_140263fb7
                
            label_14026462c:
                var_608.d = zmm11.d
                
                if ((temp0_2222 & 2) != 0)
                label_140264641:
                    var_608:4.d = _mm_shuffle_epi32(zmm11, 0xe5).d
                    
                    if ((temp0_2222 & 4) == 0)
                        goto label_140263fc4
                    
                    goto label_140264655
                
            label_140263fb7:
                
                if ((temp0_2222 & 4) != 0)
                label_140264655:
                    var_608:8.d = _mm_shuffle_epi32(zmm11, 0x4e).d
                    
                    if ((temp0_2222 & 8) != 0)
                        var_608:0xc.d = _mm_shuffle_epi32(zmm11, 0xe7).d
                else
                label_140263fc4:
                    
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
                    goto label_140264325
                
                goto label_140264093
            
            var_638.d = zmm4[0]
            
            if ((temp0_1438 & 2) != 0)
            label_140264325:
                var_638:4.d = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                
                if ((temp0_1438 & 4) == 0)
                    goto label_14026409b
                
                goto label_140264337
            
        label_140264093:
            
            if ((temp0_1438 & 4) == 0)
            label_14026409b:
                
                if ((temp0_1438 & 8) != 0)
                    goto label_140264349
                
                goto label_1402640a3
            
        label_140264337:
            var_638:8.d = _mm_shuffle_epi32(zmm4, 0x4e)[0]
            
            if ((temp0_1438 & 8) != 0)
            label_140264349:
                var_638:0xc.d = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                zmm0 = _mm_and_ps(zmm0, zmm2)
                
                if ((temp0_1438 & 1) == 0)
                    goto label_1402640ae
                
                goto label_140264359
            
        label_1402640a3:
            zmm0 = _mm_and_ps(zmm0, zmm2)
            
            if ((temp0_1438 & 1) == 0)
            label_1402640ae:
                
                if ((temp0_1438 & 2) != 0)
                    goto label_14026436c
                
                goto label_1402640b6
            
        label_140264359:
            var_628[0] = zmm0.d
            
            if ((temp0_1438 & 2) != 0)
            label_14026436c:
                var_628[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                
                if ((temp0_1438 & 4) == 0)
                    goto label_1402640be
                
                goto label_14026437f
            
        label_1402640b6:
            
            if ((temp0_1438 & 4) == 0)
            label_1402640be:
                
                if ((temp0_1438 & 8) != 0)
                    goto label_140264392
                
                goto label_1402640c6
            
        label_14026437f:
            var_628[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
            
            if ((temp0_1438 & 8) != 0)
            label_140264392:
                var_628[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                zmm3 = _mm_and_ps(zmm3, zmm2)
                
                if ((temp0_1438 & 1) == 0)
                    goto label_1402640d1
                
                goto label_1402643a3
            
        label_1402640c6:
            zmm3 = _mm_and_ps(zmm3, zmm2)
            
            if ((temp0_1438 & 1) != 0)
            label_1402643a3:
                var_618[0] = zmm3[0]
                
                if ((temp0_1438 & 2) != 0)
                label_1402643b6:
                    var_618[1] = _mm_shuffle_epi32(zmm3, 0xe5).d
                    
                    if ((temp0_1438 & 4) == 0)
                        goto label_1402640e1
                    
                    goto label_1402643c9
            else
            label_1402640d1:
                
                if ((temp0_1438 & 2) != 0)
                    goto label_1402643b6
            
            if ((temp0_1438 & 4) == 0)
            label_1402640e1:
                zmm1 = _mm_and_ps(zmm1, zmm2)
                zmm2 = __andnps_xmmxud_memxud(zmm2, data_142d3f670)
                
                if ((temp0_1438 & 8) != 0)
                    goto label_1402643e6
                
                goto label_1402640f3
            
        label_1402643c9:
            var_618[2] = _mm_shuffle_epi32(zmm3, 0x4e).d
            zmm1 = _mm_and_ps(zmm1, zmm2)
            zmm2 = __andnps_xmmxud_memxud(zmm2, data_142d3f670)
            
            if ((temp0_1438 & 8) != 0)
            label_1402643e6:
                var_618[3] = _mm_shuffle_epi32(zmm3, 0xe7).d
                zmm1 = _mm_or_ps(zmm1, zmm2)
                
                if ((temp0_1438 & 1) == 0)
                    goto label_140264100
                
                goto label_1402643f7
            
        label_1402640f3:
            zmm1 = _mm_or_ps(zmm1, zmm2)
            
            if ((temp0_1438 & 1) == 0)
            label_140264100:
                zmm3 = var_2a8_2
                zmm2 = var_2b8_2
                
                if ((temp0_1438 & 2) != 0)
                    goto label_14026441c
                
                goto label_140264118
            
        label_1402643f7:
            var_608.d = zmm1.d
            zmm3 = var_2a8_2
            zmm2 = var_2b8_2
            
            if ((temp0_1438 & 2) != 0)
            label_14026441c:
                var_608:4.d = _mm_shuffle_epi32(zmm1, 0xe5).d
                
                if ((temp0_1438 & 4) == 0)
                    goto label_140264120
                
                goto label_14026442f
            
        label_140264118:
            
            if ((temp0_1438 & 4) != 0)
            label_14026442f:
                var_608:8.d = _mm_shuffle_epi32(zmm1, 0x4e).d
                
                if ((temp0_1438 & 8) != 0)
                    var_608:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
            else
            label_140264120:
                
                if ((temp0_1438 & 8) != 0)
                    var_608:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
        
        int32_t temp0_2744[0x4] = _mm_unpacklo_epi32(zmm12, zmm3[0].q)
        arg5 = __punpckldq_xmmdq_memdq(arg5, var_3a8_1)
        char temp0_2746 = _mm_movemask_ps(zmm2 & zmm13)
        
        if (temp0_2746 != 0)
            if ((temp0_2746 & 1) == 0)
                if ((temp0_2746 & 2) != 0)
                    goto label_140264452
                
                goto label_140264161
            
            var_638.d = 0
            
            if ((temp0_2746 & 2) != 0)
            label_140264452:
                var_638:4.d = 0
                
                if ((temp0_2746 & 4) == 0)
                    goto label_140264169
                
                goto label_140264462
            
        label_140264161:
            
            if ((temp0_2746 & 4) == 0)
            label_140264169:
                
                if ((temp0_2746 & 8) != 0)
                    goto label_140264472
                
                goto label_140264171
            
        label_140264462:
            var_638:8.d = 0
            
            if ((temp0_2746 & 8) != 0)
            label_140264472:
                var_638:0xc.d = 0
                
                if ((temp0_2746 & 1) == 0)
                    goto label_140264179
                
                goto label_140264482
            
        label_140264171:
            
            if ((temp0_2746 & 1) == 0)
            label_140264179:
                
                if ((temp0_2746 & 2) != 0)
                    goto label_140264492
                
                goto label_140264181
            
        label_140264482:
            var_628[0] = 0
            
            if ((temp0_2746 & 2) != 0)
            label_140264492:
                var_628[1] = 0
                
                if ((temp0_2746 & 4) == 0)
                    goto label_140264189
                
                goto label_1402644a2
            
        label_140264181:
            
            if ((temp0_2746 & 4) == 0)
            label_140264189:
                
                if ((temp0_2746 & 8) != 0)
                    goto label_1402644b2
                
                goto label_140264191
            
        label_1402644a2:
            var_628[2] = 0
            
            if ((temp0_2746 & 8) != 0)
            label_1402644b2:
                var_628[3] = 0
                
                if ((temp0_2746 & 1) == 0)
                    goto label_140264199
                
                goto label_1402644c2
            
        label_140264191:
            
            if ((temp0_2746 & 1) == 0)
            label_140264199:
                
                if ((temp0_2746 & 2) != 0)
                    goto label_1402644d2
                
                goto label_1402641a1
            
        label_1402644c2:
            var_618[0] = 0
            
            if ((temp0_2746 & 2) != 0)
            label_1402644d2:
                var_618[1] = 0
                
                if ((temp0_2746 & 4) == 0)
                    goto label_1402641a9
                
                goto label_1402644e2
            
        label_1402641a1:
            
            if ((temp0_2746 & 4) == 0)
            label_1402641a9:
                
                if ((temp0_2746 & 8) != 0)
                    goto label_1402644f2
                
                goto label_1402641b1
            
        label_1402644e2:
            var_618[2] = 0
            
            if ((temp0_2746 & 8) != 0)
            label_1402644f2:
                var_618[3] = 0
                
                if ((temp0_2746 & 1) == 0)
                    goto label_1402641b9
                
                goto label_140264502
            
        label_1402641b1:
            
            if ((temp0_2746 & 1) == 0)
            label_1402641b9:
                
                if ((temp0_2746 & 2) != 0)
                    goto label_140264512
                
                goto label_1402641c1
            
        label_140264502:
            var_608.d = 0x3f800000
            
            if ((temp0_2746 & 2) != 0)
            label_140264512:
                var_608:4.d = 0x3f800000
                
                if ((temp0_2746 & 4) == 0)
                    goto label_1402641c9
                
                goto label_140264522
            
        label_1402641c1:
            
            if ((temp0_2746 & 4) != 0)
            label_140264522:
                var_608:8.d = 0x3f800000
                
                if ((temp0_2746 & 8) != 0)
                    var_608:0xc.d = 0x3f800000
            else
            label_1402641c9:
                
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
            label_140259c36:
                char rax_17 = rax_16.b
                
                if ((rax_17 & 1) == 0)
                    if ((rax_17 & 2) != 0)
                        goto label_140259f10
                    
                    goto label_140259c48
                
                var_5f8[0] = 0
                
                if ((rax_17 & 2) != 0)
                label_140259f10:
                    var_5f8[1] = 0
                    
                    if ((rax_17 & 4) == 0)
                        goto label_140259c50
                    
                    goto label_140259f20
                
            label_140259c48:
                
                if ((rax_17 & 4) == 0)
                label_140259c50:
                    
                    if ((rax_17 & 8) != 0)
                        goto label_140259f30
                    
                    goto label_140259c58
                
            label_140259f20:
                var_5f8[2] = 0
                
                if ((rax_17 & 8) != 0)
                label_140259f30:
                    var_5f8[3] = 0
                    
                    if ((rax_17 & 1) == 0)
                        goto label_140259c60
                    
                    goto label_140259f40
                
            label_140259c58:
                
                if ((rax_17 & 1) == 0)
                label_140259c60:
                    
                    if ((rax_17 & 2) != 0)
                        goto label_140259f50
                    
                    goto label_140259c68
                
            label_140259f40:
                var_5e8[0] = 0
                
                if ((rax_17 & 2) != 0)
                label_140259f50:
                    var_5e8[1] = 0
                    
                    if ((rax_17 & 4) == 0)
                        goto label_140259c70
                    
                    goto label_140259f60
                
            label_140259c68:
                
                if ((rax_17 & 4) == 0)
                label_140259c70:
                    
                    if ((rax_17 & 8) != 0)
                        goto label_140259f70
                    
                    goto label_140259c78
                
            label_140259f60:
                var_5e8[2] = 0
                
                if ((rax_17 & 8) != 0)
                label_140259f70:
                    var_5e8[3] = 0
                    
                    if ((rax_17 & 1) == 0)
                        goto label_140259c80
                    
                    goto label_140259f80
                
            label_140259c78:
                
                if ((rax_17 & 1) == 0)
                label_140259c80:
                    
                    if ((rax_17 & 2) != 0)
                        goto label_140259f90
                    
                    goto label_140259c88
                
            label_140259f80:
                var_5d8.d = 0
                
                if ((rax_17 & 2) != 0)
                label_140259f90:
                    var_5d8:4.d = 0
                    
                    if ((rax_17 & 4) == 0)
                        goto label_140259c90
                    
                    goto label_140259fa0
                
            label_140259c88:
                
                if ((rax_17 & 4) == 0)
                label_140259c90:
                    
                    if ((rax_17 & 8) != 0)
                        goto label_140259fb0
                    
                    goto label_140259c98
                
            label_140259fa0:
                var_5d8:8.d = 0
                
                if ((rax_17 & 8) != 0)
                label_140259fb0:
                    var_5d8:0xc.d = 0
                    
                    if ((rax_17 & 1) == 0)
                        goto label_140259ca0
                    
                    goto label_140259fc0
                
            label_140259c98:
                
                if ((rax_17 & 1) == 0)
                label_140259ca0:
                    
                    if ((rax_17 & 2) != 0)
                        goto label_140259fd3
                    
                    goto label_140259ca8
                
            label_140259fc0:
                var_5c8.d = 0x3f800000
                
                if ((rax_17 & 2) != 0)
                label_140259fd3:
                    var_5c8:4.d = 0x3f800000
                    
                    if ((rax_17 & 4) == 0)
                        goto label_140259cb0
                    
                    goto label_140259fe6
                
            label_140259ca8:
                
                if ((rax_17 & 4) != 0)
                label_140259fe6:
                    var_5c8:8.d = 0x3f800000
                    
                    if ((rax_17 & 8) != 0)
                        var_5c8:0xc.d = 0x3f800000
                else
                label_140259cb0:
                    
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
                                        goto label_14025b003
                                    
                                    goto label_14025af04
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm1 = _mm_add_epi64(zmm1, zmm12)
                                
                                if ((rcx_15 & 4) == 0)
                                label_14025af04:
                                    zmm0 = zmm15 ^ arg6
                                    
                                    if ((rcx_15 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                else
                                label_14025b003:
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
                                label_14025b0c2:
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
                                        goto label_14025abbd
                                    
                                    goto label_14025aabb
                                
                                zmm3 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 
                                        0), 
                                    zmm3, 0xe2)
                                zmm1 = _mm_add_epi64(zmm1, zmm12)
                                
                                if ((rcx_14 & 4) == 0)
                                label_14025aabb:
                                    zmm0 = zmm15 ^ arg6
                                    
                                    if ((rcx_14 & 8) != 0)
                                        zmm3 = _mm_shuffle_ps(zmm3, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), 
                                                zmm3, 0x20), 
                                            0x24)
                                else
                                label_14025abbd:
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
                                    goto label_14025b0c2
                            
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
                        goto label_14025ba4f
                    
                    goto label_14025b5be
                
                var_5f8[0] = zmm11.d
                zmm0 = _mm_and_ps(zmm0, zmm8)
                zmm8 = _mm_andnot_ps(zmm8, zmm1)
                
                if ((temp0_437 & 2) != 0)
                label_14025ba4f:
                    var_5f8[1] = _mm_shuffle_epi32(zmm11, 0xe5)[0]
                    zmm0 = _mm_or_ps(zmm0, zmm8)
                    
                    if ((temp0_437 & 4) == 0)
                        goto label_14025b5ca
                    
                    goto label_14025ba67
                
            label_14025b5be:
                zmm0 = _mm_or_ps(zmm0, zmm8)
                
                if ((temp0_437 & 4) == 0)
                label_14025b5ca:
                    zmm4 = zmm5
                    zmm0 = _mm_add_ps(zmm0, arg5)
                    
                    if ((temp0_437 & 8) != 0)
                        goto label_14025ba83
                    
                    goto label_14025b5da
                
            label_14025ba67:
                var_5f8[2] = _mm_shuffle_epi32(zmm11, 0x4e)[0]
                zmm4 = zmm5
                zmm0 = _mm_add_ps(zmm0, arg5)
                
                if ((temp0_437 & 8) != 0)
                label_14025ba83:
                    var_5f8[3] = _mm_shuffle_epi32(zmm11, 0xe7)[0]
                    zmm0 = __mulps_xmmps_memps(zmm0, data_142dd3fa0)
                    
                    if ((temp0_437 & 1) == 0)
                        goto label_14025b5e9
                    
                    goto label_14025ba98
                
            label_14025b5da:
                zmm0 = __mulps_xmmps_memps(zmm0, data_142dd3fa0)
                
                if ((temp0_437 & 1) == 0)
                label_14025b5e9:
                    zmm2 = _mm_and_ps(zmm2, temp0_487)
                    zmm7 = _mm_andnot_ps(temp0_487, zmm1)
                    
                    if ((temp0_437 & 2) != 0)
                        goto label_14025bab1
                    
                    goto label_14025b5f7
                
            label_14025ba98:
                var_5e8[0] = zmm0.d
                zmm2 = _mm_and_ps(zmm2, temp0_487)
                zmm7 = _mm_andnot_ps(temp0_487, zmm1)
                
                if ((temp0_437 & 2) == 0)
                label_14025b5f7:
                    zmm2 = _mm_or_ps(zmm2, zmm7)
                    
                    if ((temp0_437 & 4) != 0)
                        var_5e8[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                else
                label_14025bab1:
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
                        goto label_14025badd
                    
                    goto label_14025b6ae
                
                var_5d8:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                zmm0 = _mm_and_ps(zmm0, zmm1)
                
                if ((temp0_437 & 1) != 0)
                label_14025badd:
                    var_5c8.d = zmm0.d
                    
                    if ((temp0_437 & 2) == 0)
                        goto label_14025b6b6
                    
                    goto label_14025baf3
                
            label_14025b6ae:
                
                if ((temp0_437 & 2) == 0)
                label_14025b6b6:
                    
                    if ((temp0_437 & 4) != 0)
                        goto label_14025bb09
                    
                    goto label_14025b6be
                
            label_14025baf3:
                var_5c8:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                
                if ((temp0_437 & 4) == 0)
                label_14025b6be:
                    
                    if ((temp0_437 & 8) != 0)
                        var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                else
                label_14025bb09:
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
                            goto label_14025bb2d
                        
                        goto label_14025b86e
                    
                    var_5f8[0] = zmm0.d
                    
                    if ((temp0_530 & 2) != 0)
                    label_14025bb2d:
                        var_5f8[1] = zmm3[0]
                        zmm6 = var_578_1
                        zmm8 = var_488_1
                        
                        if ((temp0_530 & 4) == 0)
                            goto label_14025b887
                        
                        goto label_14025bb4e
                    
                label_14025b86e:
                    zmm6 = var_578_1
                    zmm8 = var_488_1
                    
                    if ((temp0_530 & 4) != 0)
                    label_14025bb4e:
                        var_5f8[2] = zmm11.d
                        
                        if ((temp0_530 & 8) != 0)
                        label_14025bb5d:
                            var_5f8[3] = arg6[0]
                            
                            if ((temp0_530 & 1) == 0)
                                goto label_14025b897
                            
                            goto label_14025bb6c
                    else
                    label_14025b887:
                        
                        if ((temp0_530 & 8) != 0)
                            goto label_14025bb5d
                    
                    if ((temp0_530 & 1) != 0)
                    label_14025bb6c:
                        var_5e8[0] = zmm2.d
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                        zmm11 = _mm_unpacklo_epi32(zmm11, arg6[0].q)
                        
                        if ((temp0_530 & 2) != 0)
                            var_5e8[1] = zmm5[0]
                    else
                    label_14025b897:
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
                            goto label_14025bba2
                        
                        goto label_14025b972
                    
                    var_5d8:0xc.d = zmm4[0]
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    zmm7 = var_2c8_1
                    
                    if ((temp0_530 & 1) != 0)
                    label_14025bba2:
                        var_5c8.d = zmm0.d
                        zmm12 = data_142d3f670
                        
                        if ((temp0_530 & 2) == 0)
                            goto label_14025b980
                        
                        goto label_14025bbc0
                    
                label_14025b972:
                    zmm12 = data_142d3f670
                    
                    if ((temp0_530 & 2) == 0)
                    label_14025b980:
                        
                        if ((temp0_530 & 4) != 0)
                            goto label_14025bbd6
                        
                        goto label_14025b988
                    
                label_14025bbc0:
                    var_5c8:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                    
                    if ((temp0_530 & 4) == 0)
                    label_14025b988:
                        
                        if ((temp0_530 & 8) != 0)
                            var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    else
                    label_14025bbd6:
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
                                    goto label_14025bcc3
                                
                                goto label_14025bc7b
                            
                            zmm1 =
                                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(*zmm14[0].q, zmm1, 0x30), 0x84)
                            char rcx_21
                            
                            if ((rsi_28 & 8) != 0)
                            label_14025bcc3:
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                rcx_21 = _mm_movemask_ps(zmm0)
                                zmm2 = zx.o(0)
                                
                                if ((rcx_21 & 1) != 0)
                                    goto label_14025bc89
                                
                                goto label_14025bcd2
                            
                        label_14025bc7b:
                            rcx_21 = _mm_movemask_ps(zmm0)
                            zmm2 = zx.o(0)
                            
                            if ((rcx_21 & 1) == 0)
                            label_14025bcd2:
                                zmm3 ^= arg6
                                
                                if ((rcx_21 & 2) != 0)
                                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 1), zmm2, 0xe2)
                            else
                            label_14025bc89:
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
                                label_14025bdd8:
                                    zmm12 = _mm_shuffle_ps(zmm12, 
                                        _mm_shuffle_ps(*zmm5[0].q, zmm12, 0x30), 0x84)
                                    
                                    if ((rsi_28 & 8) == 0)
                                        goto label_14025bd7c
                                    
                                    goto label_14025bdf6
                            else
                                zmm5 |= zmm3
                                
                                if ((rsi_28 & 4) != 0)
                                    goto label_14025bdd8
                            
                            if ((rsi_28 & 8) == 0)
                            label_14025bd7c:
                                arg6 = zx.o(0)
                                
                                if ((rcx_21 & 1) == 0)
                                    goto label_14025be05
                                
                                goto label_14025bd86
                            
                        label_14025bdf6:
                            zmm12 = _mm_shuffle_ps(zmm12, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm5, 0x4e)[0].q, zmm12, 0x20), 
                                0x24)
                            arg6 = zx.o(0)
                            
                            if ((rcx_21 & 1) != 0)
                            label_14025bd86:
                                arg6 = zx.o(0)
                                arg6[0] = zmm12[0]
                                zmm6 = _mm_slli_epi32(zmm6, 0x1f)
                                zmm0 = _mm_slli_epi32(zmm0, 0x1f)
                                
                                if ((rcx_21 & 2) != 0)
                                    arg6 =
                                        _mm_shuffle_ps(_mm_shuffle_ps(zmm12, arg6, 1), arg6, 0xe2)
                            else
                            label_14025be05:
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
                                label_14025c0a9:
                                    zmm11 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e).q, zmm11, 
                                            0), 
                                        zmm11, 0xe2)
                                    
                                    if ((temp0_631 & 4) == 0)
                                        goto label_14025bf03
                                    
                                    goto label_14025c0c4
                            else if ((temp0_631 & 2) != 0)
                                goto label_14025c0a9
                            
                            if ((temp0_631 & 4) != 0)
                            label_14025c0c4:
                                zmm11 = _mm_shuffle_ps(zmm11, 
                                    _mm_shuffle_ps(*zmm14[0].q, zmm11, 0x30), 0x84)
                                zmm5 ^= data_142d3f800
                                
                                if ((temp0_631 & 8) != 0)
                                    zmm11 = _mm_shuffle_ps(zmm11, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm11, 
                                            0x20), 
                                        0x24)
                            else
                            label_14025bf03:
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
                                    goto label_14025c12c
                                
                                goto label_14025c014
                            
                            var_3f8 = _mm_shuffle_ps(
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm7, 0x4e)[0].q, var_3f8, 0), 
                                var_3f8, 0xe2)
                            zmm5 |= zmm14
                            
                            if ((temp0_631 & 4) != 0)
                            label_14025c12c:
                                var_3f8 = _mm_shuffle_ps(var_3f8, 
                                    _mm_shuffle_ps(*zmm5[0].q, var_3f8, 0x30), 0x84)
                                var_308 = zmm11
                                
                                if ((temp0_631 & 8) == 0)
                                    goto label_14025c023
                                
                                goto label_14025c164
                            
                        label_14025c014:
                            var_308 = zmm11
                            
                            if ((temp0_631 & 8) == 0)
                            label_14025c023:
                                zmm11 = var_4a8_1
                                zmm13 = zx.o(0)
                                
                                if ((temp0_636 & 1) == 0)
                                    goto label_14025c185
                                
                                goto label_14025c03c
                            
                        label_14025c164:
                            var_3f8 = _mm_shuffle_ps(var_3f8, 
                                _mm_shuffle_ps(*_mm_shuffle_epi32(zmm5, 0x4e)[0].q, var_3f8, 0x20), 
                                0x24)
                            zmm11 = var_4a8_1
                            zmm13 = zx.o(0)
                            
                            if ((temp0_636 & 1) != 0)
                            label_14025c03c:
                                zmm13 = zx.o(0)
                                zmm13[0] = var_3f8[0]
                                
                                if ((temp0_636 & 2) != 0)
                                    zmm13 = _mm_shuffle_ps(_mm_shuffle_ps(var_3f8, zmm13, 1), 
                                        zmm13, 0xe2)
                            else
                            label_14025c185:
                                
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
                                label_14025c3f2:
                                    zmm6 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q, zmm6, 
                                            0), 
                                        zmm6, 0xe2)
                                    
                                    if ((temp0_672 & 4) == 0)
                                        goto label_14025c257
                                    
                                    goto label_14025c40b
                            else if ((temp0_672 & 2) != 0)
                                goto label_14025c3f2
                            
                            if ((temp0_672 & 4) != 0)
                            label_14025c40b:
                                zmm6 = _mm_shuffle_ps(zmm6, 
                                    _mm_shuffle_ps(*zmm14[0].q, zmm6, 0x30), 0x84)
                                zmm0 ^= data_142d3f800
                                
                                if ((temp0_672 & 8) != 0)
                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e)[0].q, zmm6, 
                                            0x20), 
                                        0x24)
                            else
                            label_14025c257:
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
                                    goto label_14025c45b
                                
                                goto label_14025c33b
                            
                            zmm6.d = (*zmm12[0].q)[0]
                            zmm14 &= zmm0
                            zmm0 &= not.o(zmm5)
                            
                            if ((temp0_672 & 2) != 0)
                            label_14025c45b:
                                zmm6 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q, zmm6, 0), 
                                    zmm6, 0xe2)
                                zmm12 = data_142d3f670
                                zmm14 |= zmm0
                                
                                if ((temp0_672 & 4) == 0)
                                    goto label_14025c351
                                
                                goto label_14025c481
                            
                        label_14025c33b:
                            zmm12 = data_142d3f670
                            zmm14 |= zmm0
                            
                            if ((temp0_672 & 4) == 0)
                            label_14025c351:
                                
                                if ((temp0_672 & 8) != 0)
                                    goto label_14025c4a1
                                
                                goto label_14025c35a
                            
                        label_14025c481:
                            zmm6 =
                                _mm_shuffle_ps(zmm6, _mm_shuffle_ps(*zmm14[0].q, zmm6, 0x30), 0x84)
                            
                            if ((temp0_672 & 8) != 0)
                            label_14025c4a1:
                                zmm6 = _mm_shuffle_ps(zmm6, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm14, 0x4e).q, zmm6, 0x20), 
                                    0x24)
                                zmm1 = var_2d8_1
                                zmm0 = zx.o(0)
                                
                                if ((temp0_677 & 1) != 0)
                                    goto label_14025c373
                                
                                goto label_14025c4b9
                            
                        label_14025c35a:
                            zmm1 = var_2d8_1
                            zmm0 = zx.o(0)
                            
                            if ((temp0_677 & 1) == 0)
                            label_14025c4b9:
                                
                                if ((temp0_677 & 2) != 0)
                                label_14025c4cc:
                                    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm0, 1), zmm0, 0xe2)
                                    
                                    if ((temp0_677 & 4) != 0)
                                        goto label_14025c38e
                                    
                                    goto label_14025c4d9
                            else
                            label_14025c373:
                                zmm0.d = zmm6.d
                                
                                if ((temp0_677 & 2) != 0)
                                    goto label_14025c4cc
                            
                            if ((temp0_677 & 4) == 0)
                            label_14025c4d9:
                                var_218 = zmm6
                                
                                if ((temp0_677 & 8) != 0)
                                    zmm0 =
                                        _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm6, zmm0, 0x23), 0x24)
                            else
                            label_14025c38e:
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
                                goto label_14025d06a
                            
                            goto label_14025c600
                        
                        var_5f8[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                        zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                        zmm8 = var_488_1
                        
                        if ((temp0_113 & 4) != 0)
                        label_14025d06a:
                            var_5f8[2] = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                            zmm4 = temp0_722 & data_143442680
                            zmm13 = _mm_mul_ps(zmm13, zmm3)
                            
                            if ((temp0_113 & 8) == 0)
                                goto label_14025c614
                            
                            goto label_14025d089
                        
                    label_14025c600:
                        zmm4 = temp0_722 & data_143442680
                        zmm13 = _mm_mul_ps(zmm13, zmm3)
                        
                        if ((temp0_113 & 8) == 0)
                        label_14025c614:
                            zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442490)
                            arg5 = _mm_add_ps(arg5, zmm13)
                            
                            if ((temp0_113 & 1) != 0)
                                goto label_14025d0a3
                            
                            goto label_14025c628
                        
                    label_14025d089:
                        var_5f8[3] = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442490)
                        arg5 = _mm_add_ps(arg5, zmm13)
                        
                        if ((temp0_113 & 1) != 0)
                        label_14025d0a3:
                            var_5e8[0] = arg5.d
                            zmm3 = _mm_cvtepi32_ps(zmm4)
                            zmm7 = var_2c8_2
                            
                            if ((temp0_113 & 2) == 0)
                                goto label_14025c63c
                            
                            goto label_14025d0c4
                        
                    label_14025c628:
                        zmm3 = _mm_cvtepi32_ps(zmm4)
                        zmm7 = var_2c8_2
                        
                        if ((temp0_113 & 2) == 0)
                        label_14025c63c:
                            zmm3 = __divps_xmmps_memps(zmm3, data_1434426a0)
                            
                            if ((temp0_113 & 4) != 0)
                                goto label_14025d0df
                            
                            goto label_14025c64b
                        
                    label_14025d0c4:
                        var_5e8[1] = _mm_shuffle_epi32(arg5, 0xe5)[0]
                        zmm3 = __divps_xmmps_memps(zmm3, data_1434426a0)
                        
                        if ((temp0_113 & 4) == 0)
                        label_14025c64b:
                            zmm0 = _mm_mul_ps(zmm0, zmm3)
                            zmm2 = _mm_mul_ps(zmm2, zmm2)
                            
                            if ((temp0_113 & 8) != 0)
                                var_5e8[3] = _mm_shuffle_epi32(arg5, 0xe7)[0]
                        else
                        label_14025d0df:
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
                                goto label_14025d10f
                            
                            goto label_14025c6dc
                        
                        var_5d8:0xc.d = _mm_shuffle_epi32(zmm15, 0xe7).d
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_113 & 1) != 0)
                        label_14025d10f:
                            var_5c8.d = zmm0.d
                            zmm15 = data_142fc95e0
                            
                            if ((temp0_113 & 2) == 0)
                                goto label_14025c6eb
                            
                            goto label_14025d12e
                        
                    label_14025c6dc:
                        zmm15 = data_142fc95e0
                        
                        if ((temp0_113 & 2) == 0)
                        label_14025c6eb:
                            
                            if ((temp0_113 & 4) != 0)
                                goto label_14025d144
                            
                            goto label_14025c6f3
                        
                    label_14025d12e:
                        var_5c8:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_113 & 4) == 0)
                        label_14025c6f3:
                            
                            if ((temp0_113 & 8) != 0)
                                var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_14025d144:
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
                                    goto label_14025d9cc
                                
                                goto label_14025c880
                            
                            var_5f8[2] = _mm_shuffle_epi32(zmm0, 0x4e).d
                            zmm6 = var_578_1
                            zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442330)
                            zmm3 |= zmm5
                            
                            if ((temp0_756 & 8) != 0)
                            label_14025d9cc:
                                var_5f8[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                                zmm3 |= zmm4
                                
                                if ((temp0_756 & 1) == 0)
                                    goto label_14025c890
                                
                                goto label_14025d9de
                            
                        label_14025c880:
                            zmm3 |= zmm4
                            
                            if ((temp0_756 & 1) != 0)
                            label_14025d9de:
                                var_5e8[0] = zmm3[0]
                                zmm4 = _mm_slli_epi32(zmm2, 0x11)
                                
                                if ((temp0_756 & 2) != 0)
                                    var_5e8[1] = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                            else
                            label_14025c890:
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
                                    goto label_14025da10
                                
                                goto label_14025c95b
                            
                            var_5d8:0xc.d = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                            zmm0 = _mm_and_ps(zmm0, zmm2)
                            
                            if ((temp0_756 & 1) != 0)
                            label_14025da10:
                                var_5c8.d = zmm0.d
                                
                                if ((temp0_756 & 2) == 0)
                                    goto label_14025c963
                                
                                goto label_14025da26
                            
                        label_14025c95b:
                            
                            if ((temp0_756 & 2) == 0)
                            label_14025c963:
                                
                                if ((temp0_756 & 4) != 0)
                                    goto label_14025da3c
                                
                                goto label_14025c96b
                            
                        label_14025da26:
                            var_5c8:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            if ((temp0_756 & 4) == 0)
                            label_14025c96b:
                                
                                if ((temp0_756 & 8) != 0)
                                    var_5c8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_14025da3c:
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
                                        goto label_14025da83
                                    
                                    goto label_14025ca8c
                                
                                var_5f8[0] = zmm2.d
                                zmm3 = temp0_813 & data_143442480
                                
                                if ((temp0_798 & 2) != 0)
                                label_14025da83:
                                    var_5f8[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                    zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442440)
                                    
                                    if ((temp0_798 & 4) == 0)
                                        goto label_14025ca9c
                                    
                                    goto label_14025da9e
                                
                            label_14025ca8c:
                                zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442440)
                                
                                if ((temp0_798 & 4) == 0)
                                label_14025ca9c:
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_798 & 8) != 0)
                                        goto label_14025dab4
                                    
                                    goto label_14025caa7
                                
                            label_14025da9e:
                                var_5f8[2] = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                zmm3 = _mm_cvtepi32_ps(zmm3)
                                
                                if ((temp0_798 & 8) != 0)
                                label_14025dab4:
                                    var_5f8[3] = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                                    zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                    
                                    if ((temp0_798 & 1) == 0)
                                        goto label_14025cab6
                                    
                                    goto label_14025dac9
                                
                            label_14025caa7:
                                zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                
                                if ((temp0_798 & 1) == 0)
                                label_14025cab6:
                                    zmm0 &= data_143442680
                                    
                                    if ((temp0_798 & 2) != 0)
                                        goto label_14025dae4
                                    
                                    goto label_14025cac6
                                
                            label_14025dac9:
                                var_5e8[0] = zmm3[0]
                                zmm0 &= data_143442680
                                
                                if ((temp0_798 & 2) != 0)
                                label_14025dae4:
                                    var_5e8[1] = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                                    zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                                    
                                    if ((temp0_798 & 4) == 0)
                                        goto label_14025cad6
                                    
                                    goto label_14025daff
                                
                            label_14025cac6:
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                                
                                if ((temp0_798 & 4) != 0)
                                label_14025daff:
                                    var_5e8[2] = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                    zmm0 = _mm_cvtepi32_ps(zmm0)
                                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                                    
                                    if ((temp0_798 & 8) != 0)
                                        var_5e8[3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                                else
                                label_14025cad6:
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
                                        goto label_14025db2e
                                    
                                    goto label_14025cb4d
                                
                                var_5d8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                zmm2 = _mm_and_ps(zmm2, zmm3)
                                
                                if ((temp0_798 & 1) != 0)
                                label_14025db2e:
                                    var_5c8.d = zmm2.d
                                    
                                    if ((temp0_798 & 2) == 0)
                                        goto label_14025cb55
                                    
                                    goto label_14025db44
                                
                            label_14025cb4d:
                                
                                if ((temp0_798 & 2) == 0)
                                label_14025cb55:
                                    
                                    if ((temp0_798 & 4) != 0)
                                        goto label_14025db5a
                                    
                                    goto label_14025cb5d
                                
                            label_14025db44:
                                var_5c8:4.d = _mm_shuffle_epi32(zmm2, 0xe5).d
                                
                                if ((temp0_798 & 4) == 0)
                                label_14025cb5d:
                                    
                                    if ((temp0_798 & 8) != 0)
                                        var_5c8:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                                else
                                label_14025db5a:
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
                                            goto label_14025939b
                                        
                                        goto label_14025cbbf
                                    
                                    var_5f8[0] = 0
                                    
                                    if ((temp0_840 & 2) != 0)
                                    label_14025939b:
                                        var_5f8[1] = 0
                                        
                                        if ((temp0_840 & 4) == 0)
                                            goto label_14025cbc7
                                        
                                        goto label_1402593ab
                                    
                                label_14025cbbf:
                                    
                                    if ((temp0_840 & 4) == 0)
                                    label_14025cbc7:
                                        
                                        if ((temp0_840 & 8) != 0)
                                            goto label_1402593bb
                                        
                                        goto label_14025cbcf
                                    
                                label_1402593ab:
                                    var_5f8[2] = 0
                                    
                                    if ((temp0_840 & 8) != 0)
                                    label_1402593bb:
                                        var_5f8[3] = 0
                                        
                                        if ((temp0_840 & 1) == 0)
                                            goto label_14025cbd7
                                        
                                        goto label_1402593cb
                                    
                                label_14025cbcf:
                                    
                                    if ((temp0_840 & 1) == 0)
                                    label_14025cbd7:
                                        
                                        if ((temp0_840 & 2) != 0)
                                            goto label_1402593db
                                        
                                        goto label_14025cbdf
                                    
                                label_1402593cb:
                                    var_5e8[0] = 0
                                    
                                    if ((temp0_840 & 2) != 0)
                                    label_1402593db:
                                        var_5e8[1] = 0
                                        
                                        if ((temp0_840 & 4) == 0)
                                            goto label_14025cbe7
                                        
                                        goto label_1402593eb
                                    
                                label_14025cbdf:
                                    
                                    if ((temp0_840 & 4) == 0)
                                    label_14025cbe7:
                                        
                                        if ((temp0_840 & 8) != 0)
                                            goto label_1402593fb
                                        
                                        goto label_14025cbef
                                    
                                label_1402593eb:
                                    var_5e8[2] = 0
                                    
                                    if ((temp0_840 & 8) != 0)
                                    label_1402593fb:
                                        var_5e8[3] = 0
                                        
                                        if ((temp0_840 & 1) == 0)
                                            goto label_14025cbf7
                                        
                                        goto label_14025940b
                                    
                                label_14025cbef:
                                    
                                    if ((temp0_840 & 1) == 0)
                                    label_14025cbf7:
                                        
                                        if ((temp0_840 & 2) != 0)
                                            goto label_14025941b
                                        
                                        goto label_14025cbff
                                    
                                label_14025940b:
                                    var_5d8.d = 0
                                    
                                    if ((temp0_840 & 2) != 0)
                                    label_14025941b:
                                        var_5d8:4.d = 0
                                        
                                        if ((temp0_840 & 4) == 0)
                                            goto label_14025cc07
                                        
                                        goto label_14025942b
                                    
                                label_14025cbff:
                                    
                                    if ((temp0_840 & 4) == 0)
                                    label_14025cc07:
                                        
                                        if ((temp0_840 & 8) != 0)
                                            goto label_14025943b
                                        
                                        goto label_14025cc0f
                                    
                                label_14025942b:
                                    var_5d8:8.d = 0
                                    
                                    if ((temp0_840 & 8) != 0)
                                    label_14025943b:
                                        var_5d8:0xc.d = 0
                                        
                                        if ((temp0_840 & 1) == 0)
                                            goto label_14025cc17
                                        
                                        goto label_14025944b
                                    
                                label_14025cc0f:
                                    
                                    if ((temp0_840 & 1) == 0)
                                    label_14025cc17:
                                        
                                        if ((temp0_840 & 2) != 0)
                                            goto label_14025945e
                                        
                                        goto label_14025cc1f
                                    
                                label_14025944b:
                                    var_5c8.d = 0x3f800000
                                    
                                    if ((temp0_840 & 2) != 0)
                                    label_14025945e:
                                        var_5c8:4.d = 0x3f800000
                                        
                                        if ((temp0_840 & 4) == 0)
                                            goto label_14025cc27
                                        
                                        goto label_140259471
                                    
                                label_14025cc1f:
                                    
                                    if ((temp0_840 & 4) != 0)
                                    label_140259471:
                                        var_5c8:8.d = 0x3f800000
                                        
                                        if ((temp0_840 & 8) != 0)
                                            var_5c8:0xc.d = 0x3f800000
                                    else
                                    label_14025cc27:
                                        
                                        if ((temp0_840 & 8) != 0)
                                            var_5c8:0xc.d = 0x3f800000
                                
                                char temp0_842 =
                                    _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm1), 0x1f))
                                zmm8 = var_4b8_1
                                
                                if (temp0_842 != 0)
                                    if ((temp0_842 & 1) == 0)
                                        if ((temp0_842 & 2) != 0)
                                            goto label_140259499
                                        
                                        goto label_14025cc67
                                    
                                    var_5f8[0] = 0
                                    
                                    if ((temp0_842 & 2) != 0)
                                    label_140259499:
                                        var_5f8[1] = 0
                                        
                                        if ((temp0_842 & 4) == 0)
                                            goto label_14025cc6f
                                        
                                        goto label_1402594a9
                                    
                                label_14025cc67:
                                    
                                    if ((temp0_842 & 4) == 0)
                                    label_14025cc6f:
                                        
                                        if ((temp0_842 & 8) != 0)
                                            goto label_1402594b9
                                        
                                        goto label_14025cc77
                                    
                                label_1402594a9:
                                    var_5f8[2] = 0
                                    
                                    if ((temp0_842 & 8) != 0)
                                    label_1402594b9:
                                        var_5f8[3] = 0
                                        
                                        if ((temp0_842 & 1) == 0)
                                            goto label_14025cc7f
                                        
                                        goto label_1402594c9
                                    
                                label_14025cc77:
                                    
                                    if ((temp0_842 & 1) == 0)
                                    label_14025cc7f:
                                        
                                        if ((temp0_842 & 2) != 0)
                                            goto label_1402594d9
                                        
                                        goto label_14025cc87
                                    
                                label_1402594c9:
                                    var_5e8[0] = 0
                                    
                                    if ((temp0_842 & 2) != 0)
                                    label_1402594d9:
                                        var_5e8[1] = 0
                                        
                                        if ((temp0_842 & 4) == 0)
                                            goto label_14025cc8f
                                        
                                        goto label_1402594e9
                                    
                                label_14025cc87:
                                    
                                    if ((temp0_842 & 4) == 0)
                                    label_14025cc8f:
                                        
                                        if ((temp0_842 & 8) != 0)
                                            goto label_1402594f9
                                        
                                        goto label_14025cc97
                                    
                                label_1402594e9:
                                    var_5e8[2] = 0
                                    
                                    if ((temp0_842 & 8) != 0)
                                    label_1402594f9:
                                        var_5e8[3] = 0
                                        
                                        if ((temp0_842 & 1) == 0)
                                            goto label_14025cc9f
                                        
                                        goto label_140259509
                                    
                                label_14025cc97:
                                    
                                    if ((temp0_842 & 1) == 0)
                                    label_14025cc9f:
                                        
                                        if ((temp0_842 & 2) != 0)
                                            goto label_140259519
                                        
                                        goto label_14025cca7
                                    
                                label_140259509:
                                    var_5d8.d = 0
                                    
                                    if ((temp0_842 & 2) != 0)
                                    label_140259519:
                                        var_5d8:4.d = 0
                                        
                                        if ((temp0_842 & 4) == 0)
                                            goto label_14025ccaf
                                        
                                        goto label_140259529
                                    
                                label_14025cca7:
                                    
                                    if ((temp0_842 & 4) == 0)
                                    label_14025ccaf:
                                        
                                        if ((temp0_842 & 8) != 0)
                                            goto label_140259539
                                        
                                        goto label_14025ccb7
                                    
                                label_140259529:
                                    var_5d8:8.d = 0
                                    
                                    if ((temp0_842 & 8) != 0)
                                    label_140259539:
                                        var_5d8:0xc.d = 0
                                        
                                        if ((temp0_842 & 1) == 0)
                                            goto label_14025ccbf
                                        
                                        goto label_140259549
                                    
                                label_14025ccb7:
                                    
                                    if ((temp0_842 & 1) == 0)
                                    label_14025ccbf:
                                        
                                        if ((temp0_842 & 2) != 0)
                                            goto label_14025955c
                                        
                                        goto label_14025ccc7
                                    
                                label_140259549:
                                    var_5c8.d = 0x3f800000
                                    
                                    if ((temp0_842 & 2) != 0)
                                    label_14025955c:
                                        var_5c8:4.d = 0x3f800000
                                        
                                        if ((temp0_842 & 4) == 0)
                                            goto label_14025cccf
                                        
                                        goto label_14025956f
                                    
                                label_14025ccc7:
                                    
                                    if ((temp0_842 & 4) != 0)
                                    label_14025956f:
                                        var_5c8:8.d = 0x3f800000
                                        
                                        if ((temp0_842 & 8) != 0)
                                            var_5c8:0xc.d = 0x3f800000
                                    else
                                    label_14025cccf:
                                        
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
                                goto label_14025d87a
                            
                            goto label_14025d203
                        
                        zmm2.d = zx.d(*zmm4[0].q)
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        
                        if ((temp0_926 & 2) != 0)
                        label_14025d87a:
                            zmm2 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), zmm2, 0), 
                                zmm2, 0xe2)
                            zmm12 = data_143442c20
                            
                            if ((temp0_926 & 4) == 0)
                                goto label_14025d213
                            
                            goto label_14025d89e
                        
                    label_14025d203:
                        zmm12 = data_143442c20
                        
                        if ((temp0_926 & 4) != 0)
                        label_14025d89e:
                            zmm2 = _mm_shuffle_ps(zmm2, 
                                _mm_shuffle_ps(zx.o(*zmm14[0].q), zmm2, 0x30), 0x84)
                            
                            if ((temp0_926 & 8) != 0)
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm14, 0x4e).q), zmm2, 
                                        0x20), 
                                    0x24)
                        else
                        label_14025d213:
                            
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
                            goto label_14025d735
                        
                        goto label_14025d289
                    
                    var_508.d = zmm0.d
                    zmm6 = _mm_and_ps(zmm6, zmm8)
                    zmm8 = _mm_andnot_ps(zmm8, zmm3)
                    
                    if ((temp0_857 & 2) != 0)
                    label_14025d735:
                        var_508:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        zmm6 = _mm_or_ps(zmm6, zmm8)
                        
                        if ((temp0_857 & 4) == 0)
                            goto label_14025d295
                        
                        goto label_14025d74f
                    
                label_14025d289:
                    zmm6 = _mm_or_ps(zmm6, zmm8)
                    
                    if ((temp0_857 & 4) == 0)
                    label_14025d295:
                        zmm6 = _mm_add_ps(zmm6, zmm12)
                        
                        if ((temp0_857 & 8) != 0)
                            goto label_14025d769
                        
                        goto label_14025d2a1
                    
                label_14025d74f:
                    var_508:8.d = _mm_shuffle_epi32(zmm0, 0x4e).d
                    zmm6 = _mm_add_ps(zmm6, zmm12)
                    
                    if ((temp0_857 & 8) != 0)
                    label_14025d769:
                        var_508:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                        zmm6 = __mulps_xmmps_memps(zmm6, data_142dd3fa0)
                        zmm8 = var_4b8_1
                        
                        if ((temp0_857 & 1) == 0)
                            goto label_14025d2ba
                        
                        goto label_14025d78b
                    
                label_14025d2a1:
                    zmm6 = __mulps_xmmps_memps(zmm6, data_142dd3fa0)
                    zmm8 = var_4b8_1
                    
                    if ((temp0_857 & 1) == 0)
                    label_14025d2ba:
                        zmm2 = _mm_and_ps(zmm2, temp0_924)
                        zmm7 = _mm_andnot_ps(temp0_924, zmm3)
                        
                        if ((temp0_857 & 2) != 0)
                            goto label_14025d7a7
                        
                        goto label_14025d2c8
                    
                label_14025d78b:
                    var_4f8[0] = zmm6.d
                    zmm2 = _mm_and_ps(zmm2, temp0_924)
                    zmm7 = _mm_andnot_ps(temp0_924, zmm3)
                    
                    if ((temp0_857 & 2) != 0)
                    label_14025d7a7:
                        var_4f8[1] = _mm_shuffle_epi32(zmm6, 0xe5).d
                        zmm2 = _mm_or_ps(zmm2, zmm7)
                        arg5 = var_438_1
                        
                        if ((temp0_857 & 4) == 0)
                            goto label_14025d2dd
                        
                        goto label_14025d7ca
                    
                label_14025d2c8:
                    zmm2 = _mm_or_ps(zmm2, zmm7)
                    arg5 = var_438_1
                    
                    if ((temp0_857 & 4) != 0)
                    label_14025d7ca:
                        var_4f8[2] = _mm_shuffle_epi32(zmm6, 0x4e).d
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        zmm2 = _mm_add_ps(zmm2, zmm12)
                        
                        if ((temp0_857 & 8) != 0)
                            var_4f8[3] = _mm_shuffle_epi32(zmm6, 0xe7).d
                    else
                    label_14025d2dd:
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
                            goto label_14025d800
                        
                        goto label_14025d36e
                    
                    var_4e8:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7).d
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_857 & 1) != 0)
                    label_14025d800:
                        var_4d8[0] = zmm0.d
                        
                        if ((temp0_857 & 2) == 0)
                            goto label_14025d376
                        
                        goto label_14025d816
                    
                label_14025d36e:
                    
                    if ((temp0_857 & 2) == 0)
                    label_14025d376:
                        
                        if ((temp0_857 & 4) != 0)
                            goto label_14025d82c
                        
                        goto label_14025d37e
                    
                label_14025d816:
                    var_4d8[1] = _mm_shuffle_epi32(zmm0, 0xe5).d
                    
                    if ((temp0_857 & 4) == 0)
                    label_14025d37e:
                        
                        if ((temp0_857 & 8) != 0)
                            var_4d8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                    else
                    label_14025d82c:
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
                                goto label_14025d8c0
                            
                            goto label_14025d52f
                        
                        var_508.d = zmm2.d
                        
                        if ((temp0_964 & 2) != 0)
                        label_14025d8c0:
                            var_508:4.d = zmm12[0]
                            
                            if ((temp0_964 & 4) == 0)
                                goto label_14025d537
                            
                            goto label_14025d8d2
                        
                    label_14025d52f:
                        
                        if ((temp0_964 & 4) != 0)
                        label_14025d8d2:
                            var_508:8.d = zmm1.d
                            
                            if ((temp0_964 & 8) != 0)
                            label_14025d8e3:
                                var_508:0xc.d = zmm13[0]
                                
                                if ((temp0_964 & 1) == 0)
                                    goto label_14025d547
                                
                                goto label_14025d8f5
                        else
                        label_14025d537:
                            
                            if ((temp0_964 & 8) != 0)
                                goto label_14025d8e3
                        
                        if ((temp0_964 & 1) != 0)
                        label_14025d8f5:
                            var_4f8[0] = zmm4[0]
                            zmm2 = _mm_unpacklo_ps(zmm2, zmm12[0].q)
                            zmm1 = _mm_unpacklo_ps(zmm1, zmm13[0].q)
                            
                            if ((temp0_964 & 2) != 0)
                                var_4f8[1] = zmm5[0]
                        else
                        label_14025d547:
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
                                goto label_14025d931
                            
                            goto label_14025d637
                        
                        var_4e8:0xc.d = zmm3[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        zmm11 = var_4a8_1
                        
                        if ((temp0_964 & 1) != 0)
                        label_14025d931:
                            var_4d8[0] = zmm0.d
                            zmm13 = var_598_2
                            
                            if ((temp0_964 & 2) == 0)
                                goto label_14025d647
                            
                            goto label_14025d951
                        
                    label_14025d637:
                        zmm13 = var_598_2
                        
                        if ((temp0_964 & 2) == 0)
                        label_14025d647:
                            
                            if ((temp0_964 & 4) != 0)
                                goto label_14025d967
                            
                            goto label_14025d64f
                        
                    label_14025d951:
                        var_4d8[1] = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        if ((temp0_964 & 4) == 0)
                        label_14025d64f:
                            
                            if ((temp0_964 & 8) != 0)
                                var_4d8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_14025d967:
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
                                        goto label_14025dc3e
                                    
                                    goto label_14025dbce
                                
                                var_408 = _mm_shuffle_ps(var_408, 
                                    _mm_shuffle_ps(*arg5.q, var_408, 0x30), 0x84)
                                char rsi_38
                                
                                if ((r10_2 & 8) != 0)
                                label_14025dc3e:
                                    var_408 = _mm_shuffle_ps(var_408, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, var_408, 
                                            0x20), 
                                        0x24)
                                    rsi_38 = _mm_movemask_ps(zmm0)
                                    zmm5 = zx.o(0)
                                    
                                    if ((rsi_38 & 1) != 0)
                                        goto label_14025dbdb
                                    
                                    goto label_14025dc53
                                
                            label_14025dbce:
                                rsi_38 = _mm_movemask_ps(zmm0)
                                zmm5 = zx.o(0)
                                
                                if ((rsi_38 & 1) == 0)
                                label_14025dc53:
                                    zmm4 ^= arg6
                                    
                                    if ((rsi_38 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(var_408, zmm5, 1), 
                                            zmm5, 0xe2)
                                else
                                label_14025dbdb:
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
                                        goto label_14025dda9
                                    
                                    goto label_14025dd71
                                
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm4, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                zmm8 = zx.o(0)
                                
                                if ((rsi_38 & 1) != 0)
                                label_14025dd71:
                                    zmm8.d = zmm1.d
                                    zmm6 = _mm_slli_epi32(zmm6, 0x1f)
                                    zmm3 = _mm_slli_epi32(temp0_1072, 0x1f)
                                    
                                    if ((rsi_38 & 2) != 0)
                                        zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm8, 1), zmm8, 
                                            0xe2)
                                else
                                label_14025dda9:
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
                                        goto label_14025df59
                                    
                                    goto label_14025df0a
                                
                                zmm2 =
                                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(*arg5.q, zmm2, 0x30), 0x84)
                                char rsi_39
                                
                                if ((temp0_1104 & 8) != 0)
                                label_14025df59:
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm2, 
                                            0x20), 
                                        0x24)
                                    rsi_39 = _mm_movemask_ps(zmm0)
                                    zmm11 = zx.o(0)
                                    
                                    if ((rsi_39 & 1) != 0)
                                        goto label_14025df1d
                                    
                                    goto label_14025df6b
                                
                            label_14025df0a:
                                rsi_39 = _mm_movemask_ps(zmm0)
                                zmm11 = zx.o(0)
                                
                                if ((rsi_39 & 1) == 0)
                                label_14025df6b:
                                    zmm6 ^= arg6
                                    
                                    if ((rsi_39 & 2) != 0)
                                        zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm11, 1), 
                                            zmm11, 0xe2)
                                else
                                label_14025df1d:
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
                                        goto label_14025e0c0
                                    
                                    goto label_14025e083
                                
                                zmm1 = _mm_shuffle_ps(zmm1, 
                                    _mm_shuffle_ps(*_mm_shuffle_epi32(zmm2, 0x4e).q, zmm1, 0x20), 
                                    0x24)
                                zmm15 = zx.o(0)
                                
                                if ((rsi_39 & 1) != 0)
                                label_14025e083:
                                    zmm15 = zx.o(0)
                                    zmm15[0] = zmm1.d
                                    zmm6 = _mm_slli_epi32(zmm6, 0x1f)
                                    zmm3 = _mm_slli_epi32(temp0_1118, 0x1f)
                                    
                                    if ((rsi_39 & 2) != 0)
                                        zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm15, 1), 
                                            zmm15, 0xe2)
                                else
                                label_14025e0c0:
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
                                        goto label_14025e246
                                    
                                    goto label_14025e1b2
                                
                                zmm6.d = (*var_5a8_1.q).d
                                
                                if ((temp0_1150 & 2) != 0)
                                label_14025e246:
                                    zmm6 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(
                                            *__pshufd_xmmdq_memdq_immb(var_5a8_1, 0x4e).q, zmm6, 
                                            0), 
                                        zmm6, 0xe2)
                                    
                                    if ((temp0_1150 & 4) == 0)
                                        goto label_14025e1ba
                                    
                                    goto label_14025e25f
                                
                            label_14025e1b2:
                                
                                if ((temp0_1150 & 4) == 0)
                                label_14025e1ba:
                                    
                                    if ((temp0_1150 & 8) != 0)
                                        goto label_14025e27f
                                    
                                    goto label_14025e1c2
                                
                            label_14025e25f:
                                zmm6 =
                                    _mm_shuffle_ps(zmm6, _mm_shuffle_ps(*arg5.q, zmm6, 0x30), 0x84)
                                char rsi_40
                                
                                if ((temp0_1150 & 8) != 0)
                                label_14025e27f:
                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm6, 
                                            0x20), 
                                        0x24)
                                    rsi_40 = _mm_movemask_ps(zmm0)
                                    zmm3 = zx.o(0)
                                    
                                    if ((rsi_40 & 1) != 0)
                                        goto label_14025e1d3
                                    
                                    goto label_14025e294
                                
                            label_14025e1c2:
                                rsi_40 = _mm_movemask_ps(zmm0)
                                zmm3 = zx.o(0)
                                
                                if ((rsi_40 & 1) == 0)
                                label_14025e294:
                                    zmm4 = temp0_1149 ^ arg6
                                    
                                    if ((rsi_40 & 2) != 0)
                                        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm3, 1), zmm3, 
                                            0xe2)
                                else
                                label_14025e1d3:
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
                                        goto label_14025e412
                                    
                                    goto label_14025e3a0
                                
                                zmm4 =
                                    _mm_shuffle_ps(zmm4, _mm_shuffle_ps(*arg5.q, zmm4, 0x30), 0x84)
                                var_248 = zmm6
                                
                                if ((temp0_1150 & 8) != 0)
                                label_14025e412:
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(*_mm_shuffle_epi32(arg5, 0x4e).q, zmm4, 
                                            0x20), 
                                        0x24)
                                    arg5 = var_488_2
                                    zmm6 = zx.o(0)
                                    
                                    if ((rsi_40 & 1) != 0)
                                        goto label_14025e3b6
                                    
                                    goto label_14025e429
                                
                            label_14025e3a0:
                                arg5 = var_488_2
                                zmm6 = zx.o(0)
                                
                                if ((rsi_40 & 1) == 0)
                                label_14025e429:
                                    
                                    if ((rsi_40 & 2) != 0)
                                    label_14025e43a:
                                        zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm6, 1), zmm6, 
                                            0xe2)
                                        
                                        if ((rsi_40 & 4) != 0)
                                            goto label_14025e3cd
                                        
                                        goto label_14025e447
                                else
                                label_14025e3b6:
                                    zmm6.d = zmm4[0]
                                    
                                    if ((rsi_40 & 2) != 0)
                                        goto label_14025e43a
                                
                                if ((rsi_40 & 4) == 0)
                                label_14025e447:
                                    var_258 = zmm4
                                    
                                    if ((rsi_40 & 8) != 0)
                                        zmm6 = _mm_shuffle_ps(zmm6, 
                                            _mm_shuffle_ps(zmm4, zmm6, 0x23), 0x24)
                                else
                                label_14025e3cd:
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
                                    goto label_1402591bb
                                
                                goto label_14025e573
                            
                            var_508:4.d = _mm_shuffle_epi32(temp0_1204, 0xe5).d
                            zmm1 = __divps_xmmps_memps(zmm1, data_143442690)
                            zmm8 = var_4b8_1
                            
                            if ((temp0_1000 & 4) != 0)
                            label_1402591bb:
                                var_508:8.d = _mm_shuffle_epi32(temp0_1204, 0x4e).d
                                zmm0 &= data_143442680
                                zmm15 = _mm_mul_ps(zmm15, zmm1)
                                
                                if ((temp0_1000 & 8) == 0)
                                    goto label_14025e587
                                
                                goto label_1402591dd
                            
                        label_14025e573:
                            zmm0 &= data_143442680
                            zmm15 = _mm_mul_ps(zmm15, zmm1)
                            
                            if ((temp0_1000 & 8) == 0)
                            label_14025e587:
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                                zmm11 = _mm_add_ps(zmm11, zmm15)
                                
                                if ((temp0_1000 & 1) != 0)
                                    goto label_1402591fa
                                
                                goto label_14025e59b
                            
                        label_1402591dd:
                            var_508:0xc.d = _mm_shuffle_epi32(temp0_1204, 0xe7).d
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            zmm11 = _mm_add_ps(zmm11, zmm15)
                            
                            if ((temp0_1000 & 1) != 0)
                            label_1402591fa:
                                var_4f8[0] = zmm11.d
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                zmm15 = data_142fc95e0
                                
                                if ((temp0_1000 & 2) == 0)
                                    goto label_14025e5af
                                
                                goto label_14025921e
                            
                        label_14025e59b:
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm15 = data_142fc95e0
                            
                            if ((temp0_1000 & 2) == 0)
                            label_14025e5af:
                                zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                                
                                if ((temp0_1000 & 4) != 0)
                                    goto label_14025923c
                                
                                goto label_14025e5be
                            
                        label_14025921e:
                            var_4f8[1] = _mm_shuffle_epi32(zmm11, 0xe5).d
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_1000 & 4) == 0)
                            label_14025e5be:
                                zmm6 = _mm_mul_ps(zmm6, zmm0)
                                zmm5 = _mm_mul_ps(temp0_1204, temp0_1204)
                                
                                if ((temp0_1000 & 8) != 0)
                                    var_4f8[3] = _mm_shuffle_epi32(zmm11, 0xe7).d
                            else
                            label_14025923c:
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
                                    goto label_140259271
                                
                                goto label_14025e64a
                            
                            var_4e8:0xc.d = _mm_shuffle_epi32(zmm3, 0xe7).d
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((temp0_1000 & 1) != 0)
                            label_140259271:
                                var_4d8[0] = zmm0.d
                                
                                if ((temp0_1000 & 2) == 0)
                                    goto label_14025e652
                                
                                goto label_140259287
                            
                        label_14025e64a:
                            
                            if ((temp0_1000 & 2) == 0)
                            label_14025e652:
                                
                                if ((temp0_1000 & 4) != 0)
                                    goto label_14025929d
                                
                                goto label_14025e65a
                            
                        label_140259287:
                            var_4d8[1] = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            if ((temp0_1000 & 4) == 0)
                            label_14025e65a:
                                
                                if ((temp0_1000 & 8) != 0)
                                    var_4d8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_14025929d:
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
                                        goto label_1402592da
                                    
                                    goto label_14025e7f5
                                
                                var_508:8.d = _mm_shuffle_epi32(zmm3, 0x4e).d
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442330)
                                zmm5 |= zmm1
                                
                                if ((temp0_1233 & 8) != 0)
                                label_1402592da:
                                    var_508:0xc.d = _mm_shuffle_epi32(zmm3, 0xe7).d
                                    zmm5 |= zmm0
                                    
                                    if ((temp0_1233 & 1) == 0)
                                        goto label_14025e805
                                    
                                    goto label_1402592ef
                                
                            label_14025e7f5:
                                zmm5 |= zmm0
                                
                                if ((temp0_1233 & 1) != 0)
                                label_1402592ef:
                                    var_4f8[0] = zmm5[0]
                                    zmm0 = _mm_slli_epi32(temp0_1246, 0x11)
                                    
                                    if ((temp0_1233 & 2) != 0)
                                        var_4f8[1] = _mm_shuffle_epi32(zmm5, 0xe5).d
                                else
                                label_14025e805:
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
                                        goto label_140259327
                                    
                                    goto label_14025e8d4
                                
                                var_4e8:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                                zmm1 = _mm_and_ps(zmm1, zmm3)
                                
                                if ((temp0_1233 & 1) != 0)
                                label_140259327:
                                    var_4d8[0] = zmm1.d
                                    
                                    if ((temp0_1233 & 2) == 0)
                                        goto label_14025e8dc
                                    
                                    goto label_14025933d
                                
                            label_14025e8d4:
                                
                                if ((temp0_1233 & 2) == 0)
                                label_14025e8dc:
                                    
                                    if ((temp0_1233 & 4) != 0)
                                        goto label_140259353
                                    
                                    goto label_14025e8e4
                                
                            label_14025933d:
                                var_4d8[1] = _mm_shuffle_epi32(zmm1, 0xe5).d
                                
                                if ((temp0_1233 & 4) == 0)
                                label_14025e8e4:
                                    
                                    if ((temp0_1233 & 8) != 0)
                                        var_4d8[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                                else
                                label_140259353:
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
                                            goto label_1402595b0
                                        
                                        goto label_14025ea0b
                                    
                                    var_508.d = zmm2.d
                                    zmm3 = temp0_1291 & data_143442480
                                    
                                    if ((temp0_1276 & 2) != 0)
                                    label_1402595b0:
                                        var_508:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                        zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442440)
                                        
                                        if ((temp0_1276 & 4) == 0)
                                            goto label_14025ea1b
                                        
                                        goto label_1402595ce
                                    
                                label_14025ea0b:
                                    zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442440)
                                    
                                    if ((temp0_1276 & 4) == 0)
                                    label_14025ea1b:
                                        zmm3 = _mm_cvtepi32_ps(zmm3)
                                        
                                        if ((temp0_1276 & 8) != 0)
                                            goto label_1402595e7
                                        
                                        goto label_14025ea26
                                    
                                label_1402595ce:
                                    var_508:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_1276 & 8) != 0)
                                    label_1402595e7:
                                        var_508:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                                        zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                        
                                        if ((temp0_1276 & 1) == 0)
                                            goto label_14025ea35
                                        
                                        goto label_1402595ff
                                    
                                label_14025ea26:
                                    zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                    
                                    if ((temp0_1276 & 1) == 0)
                                    label_14025ea35:
                                        zmm1 &= data_143442680
                                        
                                        if ((temp0_1276 & 2) != 0)
                                            goto label_14025961d
                                        
                                        goto label_14025ea45
                                    
                                label_1402595ff:
                                    var_4f8[0] = zmm3[0]
                                    zmm1 &= data_143442680
                                    
                                    if ((temp0_1276 & 2) != 0)
                                    label_14025961d:
                                        var_4f8[1] = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                                        zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                                        
                                        if ((temp0_1276 & 4) == 0)
                                            goto label_14025ea55
                                        
                                        goto label_14025963b
                                    
                                label_14025ea45:
                                    zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                                    
                                    if ((temp0_1276 & 4) != 0)
                                    label_14025963b:
                                        var_4f8[2] = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                                        zmm1 = _mm_cvtepi32_ps(zmm1)
                                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                                        
                                        if ((temp0_1276 & 8) != 0)
                                            var_4f8[3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                                    else
                                    label_14025ea55:
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
                                            goto label_140259670
                                        
                                        goto label_14025ead8
                                    
                                    var_4e8:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
                                    zmm2 = _mm_and_ps(zmm2, zmm3)
                                    
                                    if ((temp0_1276 & 1) != 0)
                                    label_140259670:
                                        var_4d8[0] = zmm2.d
                                        
                                        if ((temp0_1276 & 2) == 0)
                                            goto label_14025eae0
                                        
                                        goto label_140259686
                                    
                                label_14025ead8:
                                    
                                    if ((temp0_1276 & 2) == 0)
                                    label_14025eae0:
                                        
                                        if ((temp0_1276 & 4) != 0)
                                            goto label_14025969c
                                        
                                        goto label_14025eae8
                                    
                                label_140259686:
                                    var_4d8[1] = _mm_shuffle_epi32(zmm2, 0xe5).d
                                    
                                    if ((temp0_1276 & 4) == 0)
                                    label_14025eae8:
                                        
                                        if ((temp0_1276 & 8) != 0)
                                            var_4d8[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                                    else
                                    label_14025969c:
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
                                                goto label_1402596c5
                                            
                                            goto label_14025eb4a
                                        
                                        var_508.d = 0
                                        
                                        if ((temp0_1318 & 2) != 0)
                                        label_1402596c5:
                                            var_508:4.d = 0
                                            
                                            if ((temp0_1318 & 4) == 0)
                                                goto label_14025eb52
                                            
                                            goto label_1402596d8
                                        
                                    label_14025eb4a:
                                        
                                        if ((temp0_1318 & 4) == 0)
                                        label_14025eb52:
                                            
                                            if ((temp0_1318 & 8) != 0)
                                                goto label_1402596eb
                                            
                                            goto label_14025eb5a
                                        
                                    label_1402596d8:
                                        var_508:8.d = 0
                                        
                                        if ((temp0_1318 & 8) != 0)
                                        label_1402596eb:
                                            var_508:0xc.d = 0
                                            
                                            if ((temp0_1318 & 1) == 0)
                                                goto label_14025eb62
                                            
                                            goto label_1402596fe
                                        
                                    label_14025eb5a:
                                        
                                        if ((temp0_1318 & 1) == 0)
                                        label_14025eb62:
                                            
                                            if ((temp0_1318 & 2) != 0)
                                                goto label_140259711
                                            
                                            goto label_14025eb6a
                                        
                                    label_1402596fe:
                                        var_4f8[0] = 0
                                        
                                        if ((temp0_1318 & 2) != 0)
                                        label_140259711:
                                            var_4f8[1] = 0
                                            
                                            if ((temp0_1318 & 4) == 0)
                                                goto label_14025eb72
                                            
                                            goto label_140259724
                                        
                                    label_14025eb6a:
                                        
                                        if ((temp0_1318 & 4) == 0)
                                        label_14025eb72:
                                            
                                            if ((temp0_1318 & 8) != 0)
                                                goto label_140259737
                                            
                                            goto label_14025eb7a
                                        
                                    label_140259724:
                                        var_4f8[2] = 0
                                        
                                        if ((temp0_1318 & 8) != 0)
                                        label_140259737:
                                            var_4f8[3] = 0
                                            
                                            if ((temp0_1318 & 1) == 0)
                                                goto label_14025eb82
                                            
                                            goto label_14025974a
                                        
                                    label_14025eb7a:
                                        
                                        if ((temp0_1318 & 1) == 0)
                                        label_14025eb82:
                                            
                                            if ((temp0_1318 & 2) != 0)
                                                goto label_14025975d
                                            
                                            goto label_14025eb8a
                                        
                                    label_14025974a:
                                        var_4e8.d = 0
                                        
                                        if ((temp0_1318 & 2) != 0)
                                        label_14025975d:
                                            var_4e8:4.d = 0
                                            
                                            if ((temp0_1318 & 4) == 0)
                                                goto label_14025eb92
                                            
                                            goto label_140259770
                                        
                                    label_14025eb8a:
                                        
                                        if ((temp0_1318 & 4) == 0)
                                        label_14025eb92:
                                            
                                            if ((temp0_1318 & 8) != 0)
                                                goto label_140259783
                                            
                                            goto label_14025eb9a
                                        
                                    label_140259770:
                                        var_4e8:8.d = 0
                                        
                                        if ((temp0_1318 & 8) != 0)
                                        label_140259783:
                                            var_4e8:0xc.d = 0
                                            
                                            if ((temp0_1318 & 1) == 0)
                                                goto label_14025eba2
                                            
                                            goto label_140259796
                                        
                                    label_14025eb9a:
                                        
                                        if ((temp0_1318 & 1) == 0)
                                        label_14025eba2:
                                            
                                            if ((temp0_1318 & 2) != 0)
                                                goto label_1402597a9
                                            
                                            goto label_14025ebaa
                                        
                                    label_140259796:
                                        var_4d8[0] = 0x3f800000
                                        
                                        if ((temp0_1318 & 2) != 0)
                                        label_1402597a9:
                                            var_4d8[1] = 0x3f800000
                                            
                                            if ((temp0_1318 & 4) == 0)
                                                goto label_14025ebb2
                                            
                                            goto label_1402597bc
                                        
                                    label_14025ebaa:
                                        
                                        if ((temp0_1318 & 4) != 0)
                                        label_1402597bc:
                                            var_4d8[2] = 0x3f800000
                                            
                                            if ((temp0_1318 & 8) != 0)
                                                var_4d8[3] = 0x3f800000
                                        else
                                        label_14025ebb2:
                                            
                                            if ((temp0_1318 & 8) != 0)
                                                var_4d8[3] = 0x3f800000
                                    
                                    char temp0_1320 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm1 & not.o(zmm0), 0x1f))
                                    
                                    if (temp0_1320 != 0)
                                        if ((temp0_1320 & 1) == 0)
                                            if ((temp0_1320 & 2) != 0)
                                                goto label_1402597e7
                                            
                                            goto label_14025ebe8
                                        
                                        var_508.d = 0
                                        
                                        if ((temp0_1320 & 2) != 0)
                                        label_1402597e7:
                                            var_508:4.d = 0
                                            
                                            if ((temp0_1320 & 4) == 0)
                                                goto label_14025ebf0
                                            
                                            goto label_1402597fa
                                        
                                    label_14025ebe8:
                                        
                                        if ((temp0_1320 & 4) == 0)
                                        label_14025ebf0:
                                            
                                            if ((temp0_1320 & 8) != 0)
                                                goto label_14025980d
                                            
                                            goto label_14025ebf8
                                        
                                    label_1402597fa:
                                        var_508:8.d = 0
                                        
                                        if ((temp0_1320 & 8) != 0)
                                        label_14025980d:
                                            var_508:0xc.d = 0
                                            
                                            if ((temp0_1320 & 1) == 0)
                                                goto label_14025ec00
                                            
                                            goto label_140259820
                                        
                                    label_14025ebf8:
                                        
                                        if ((temp0_1320 & 1) == 0)
                                        label_14025ec00:
                                            
                                            if ((temp0_1320 & 2) != 0)
                                                goto label_140259833
                                            
                                            goto label_14025ec08
                                        
                                    label_140259820:
                                        var_4f8[0] = 0
                                        
                                        if ((temp0_1320 & 2) != 0)
                                        label_140259833:
                                            var_4f8[1] = 0
                                            
                                            if ((temp0_1320 & 4) == 0)
                                                goto label_14025ec10
                                            
                                            goto label_140259846
                                        
                                    label_14025ec08:
                                        
                                        if ((temp0_1320 & 4) == 0)
                                        label_14025ec10:
                                            
                                            if ((temp0_1320 & 8) != 0)
                                                goto label_140259859
                                            
                                            goto label_14025ec18
                                        
                                    label_140259846:
                                        var_4f8[2] = 0
                                        
                                        if ((temp0_1320 & 8) != 0)
                                        label_140259859:
                                            var_4f8[3] = 0
                                            
                                            if ((temp0_1320 & 1) == 0)
                                                goto label_14025ec20
                                            
                                            goto label_14025986c
                                        
                                    label_14025ec18:
                                        
                                        if ((temp0_1320 & 1) == 0)
                                        label_14025ec20:
                                            
                                            if ((temp0_1320 & 2) != 0)
                                                goto label_14025987f
                                            
                                            goto label_14025ec28
                                        
                                    label_14025986c:
                                        var_4e8.d = 0
                                        
                                        if ((temp0_1320 & 2) != 0)
                                        label_14025987f:
                                            var_4e8:4.d = 0
                                            
                                            if ((temp0_1320 & 4) == 0)
                                                goto label_14025ec30
                                            
                                            goto label_140259892
                                        
                                    label_14025ec28:
                                        
                                        if ((temp0_1320 & 4) == 0)
                                        label_14025ec30:
                                            
                                            if ((temp0_1320 & 8) != 0)
                                                goto label_1402598a5
                                            
                                            goto label_14025ec38
                                        
                                    label_140259892:
                                        var_4e8:8.d = 0
                                        
                                        if ((temp0_1320 & 8) != 0)
                                        label_1402598a5:
                                            var_4e8:0xc.d = 0
                                            
                                            if ((temp0_1320 & 1) == 0)
                                                goto label_14025ec40
                                            
                                            goto label_1402598b8
                                        
                                    label_14025ec38:
                                        
                                        if ((temp0_1320 & 1) == 0)
                                        label_14025ec40:
                                            
                                            if ((temp0_1320 & 2) != 0)
                                                goto label_1402598cb
                                            
                                            goto label_14025ec48
                                        
                                    label_1402598b8:
                                        var_4d8[0] = 0x3f800000
                                        
                                        if ((temp0_1320 & 2) != 0)
                                        label_1402598cb:
                                            var_4d8[1] = 0x3f800000
                                            
                                            if ((temp0_1320 & 4) == 0)
                                                goto label_14025ec50
                                            
                                            goto label_1402598de
                                        
                                    label_14025ec48:
                                        
                                        if ((temp0_1320 & 4) != 0)
                                        label_1402598de:
                                            var_4d8[2] = 0x3f800000
                                            
                                            if ((temp0_1320 & 8) != 0)
                                                var_4d8[3] = 0x3f800000
                                        else
                                        label_14025ec50:
                                            
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
                    label_140259065:
                        var_5f8[1] = _mm_shuffle_epi32(zmm7, 0xe5).d
                        
                        if ((temp0_844 & 4) == 0)
                            goto label_14025ed0e
                        
                        goto label_140259078
                else if ((temp0_844 & 2) != 0)
                    goto label_140259065
                
                if ((temp0_844 & 4) == 0)
                label_14025ed0e:
                    zmm5 = __mulps_xmmps_memps(var_4f8, var_648_1)
                    zmm4 = _mm_mul_ps(var_5e8, zmm3)
                    
                    if ((temp0_844 & 8) != 0)
                        goto label_140259092
                    
                    goto label_14025ed1d
                
            label_140259078:
                var_5f8[2] = _mm_shuffle_epi32(zmm7, 0x4e).d
                zmm5 = __mulps_xmmps_memps(var_4f8, var_648_1)
                zmm4 = _mm_mul_ps(var_5e8, zmm3)
                
                if ((temp0_844 & 8) != 0)
                label_140259092:
                    var_5f8[3] = _mm_shuffle_epi32(zmm7, 0xe7).d
                    zmm5 = _mm_add_ps(zmm5, zmm4)
                    
                    if ((temp0_844 & 1) == 0)
                        goto label_14025ed28
                    
                    goto label_1402590a3
                
            label_14025ed1d:
                zmm5 = _mm_add_ps(zmm5, zmm4)
                
                if ((temp0_844 & 1) != 0)
                label_1402590a3:
                    var_5e8[0] = zmm5[0]
                    
                    if ((temp0_844 & 2) != 0)
                    label_1402590b6:
                        var_5e8[1] = _mm_shuffle_epi32(zmm5, 0xe5).d
                        
                        if ((temp0_844 & 4) == 0)
                            goto label_14025ed38
                        
                        goto label_1402590c9
                else
                label_14025ed28:
                    
                    if ((temp0_844 & 2) != 0)
                        goto label_1402590b6
                
                if ((temp0_844 & 4) == 0)
                label_14025ed38:
                    zmm1 = __mulps_xmmps_memps(var_4e8, var_648_1)
                    arg5 = _mm_mul_ps(var_5d8, zmm3)
                    
                    if ((temp0_844 & 8) != 0)
                        goto label_1402590e4
                    
                    goto label_14025ed48
                
            label_1402590c9:
                var_5e8[2] = _mm_shuffle_epi32(zmm5, 0x4e).d
                zmm1 = __mulps_xmmps_memps(var_4e8, var_648_1)
                arg5 = _mm_mul_ps(var_5d8, zmm3)
                
                if ((temp0_844 & 8) != 0)
                label_1402590e4:
                    var_5e8[3] = _mm_shuffle_epi32(zmm5, 0xe7).d
                    zmm1 = _mm_add_ps(zmm1, arg5)
                    
                    if ((temp0_844 & 1) == 0)
                        goto label_14025ed54
                    
                    goto label_1402590f6
                
            label_14025ed48:
                zmm1 = _mm_add_ps(zmm1, arg5)
                
                if ((temp0_844 & 1) != 0)
                label_1402590f6:
                    var_5d8.d = zmm1.d
                    
                    if ((temp0_844 & 2) != 0)
                    label_140259109:
                        var_5d8:4.d = _mm_shuffle_epi32(zmm1, 0xe5).d
                        
                        if ((temp0_844 & 4) == 0)
                            goto label_14025ed64
                        
                        goto label_14025911c
                else
                label_14025ed54:
                    
                    if ((temp0_844 & 2) != 0)
                        goto label_140259109
                
                if ((temp0_844 & 4) == 0)
                label_14025ed64:
                    arg6 = __mulps_xmmps_memps(var_4d8, var_648_1)
                    zmm3 = _mm_mul_ps(zmm3, var_5c8)
                    
                    if ((temp0_844 & 8) != 0)
                        goto label_140259138
                    
                    goto label_14025ed75
                
            label_14025911c:
                var_5d8:8.d = _mm_shuffle_epi32(zmm1, 0x4e).d
                arg6 = __mulps_xmmps_memps(var_4d8, var_648_1)
                zmm3 = _mm_mul_ps(zmm3, var_5c8)
                
                if ((temp0_844 & 8) != 0)
                label_140259138:
                    var_5d8:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
                    arg6 = _mm_add_ps(arg6, zmm3)
                    
                    if ((temp0_844 & 1) == 0)
                        goto label_14025ed81
                    
                    goto label_14025914a
                
            label_14025ed75:
                arg6 = _mm_add_ps(arg6, zmm3)
                
                if ((temp0_844 & 1) == 0)
                label_14025ed81:
                    
                    if ((temp0_844 & 2) != 0)
                        goto label_140259162
                    
                    goto label_14025ed89
                
            label_14025914a:
                var_5c8.d = arg6[0]
                
                if ((temp0_844 & 2) != 0)
                label_140259162:
                    var_5c8:4.d = _mm_shuffle_epi32(arg6, 0xe5).d
                    
                    if ((temp0_844 & 4) == 0)
                        goto label_14025ed91
                    
                    goto label_140259179
                
            label_14025ed89:
                
                if ((temp0_844 & 4) != 0)
                label_140259179:
                    var_5c8:8.d = _mm_shuffle_epi32(arg6, 0x4e).d
                    
                    if ((temp0_844 & 8) != 0)
                        var_5c8:0xc.d = _mm_shuffle_epi32(arg6, 0xe7).d
                else
                label_14025ed91:
                    
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
                label_14025ef1b:
                    var_5f8[1] = _mm_shuffle_epi32(zmm5, 0xe5)[0]
                    
                    if ((temp0_83 & 4) == 0)
                        goto label_14025ee53
                    
                    goto label_14025ef2e
            else
                zmm6 = var_428_1
                
                if ((temp0_83 & 2) != 0)
                    goto label_14025ef1b
            
            if ((temp0_83 & 4) == 0)
            label_14025ee53:
                zmm4 = _mm_mul_ps(var_5e8, zmm1)
                
                if ((temp0_83 & 8) != 0)
                    goto label_14025ef44
                
                goto label_14025ee5e
            
        label_14025ef2e:
            var_5f8[2] = _mm_shuffle_epi32(zmm5, 0x4e)[0]
            zmm4 = _mm_mul_ps(var_5e8, zmm1)
            
            if ((temp0_83 & 8) != 0)
            label_14025ef44:
                var_5f8[3] = _mm_shuffle_epi32(zmm5, 0xe7)[0]
                zmm4 = _mm_and_ps(zmm4, zmm2)
                
                if ((temp0_83 & 1) == 0)
                    goto label_14025ee6b
                
                goto label_14025ef55
            
        label_14025ee5e:
            zmm4 = _mm_and_ps(zmm4, zmm2)
            
            if ((temp0_83 & 1) != 0)
            label_14025ef55:
                var_5e8[0] = zmm4[0]
                zmm5 = var_2b8_1
                
                if ((temp0_83 & 2) != 0)
                label_14025ef70:
                    var_5e8[1] = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                    
                    if ((temp0_83 & 4) == 0)
                        goto label_14025ee81
                    
                    goto label_14025ef83
            else
            label_14025ee6b:
                zmm5 = var_2b8_1
                
                if ((temp0_83 & 2) != 0)
                    goto label_14025ef70
            
            if ((temp0_83 & 4) == 0)
            label_14025ee81:
                arg5 = _mm_mul_ps(var_5d8, zmm1)
                
                if ((temp0_83 & 8) != 0)
                    goto label_14025ef9a
                
                goto label_14025ee8d
            
        label_14025ef83:
            var_5e8[2] = _mm_shuffle_epi32(zmm4, 0x4e)[0]
            arg5 = _mm_mul_ps(var_5d8, zmm1)
            
            if ((temp0_83 & 8) != 0)
            label_14025ef9a:
                var_5e8[3] = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                arg5 = _mm_and_ps(arg5, zmm2)
                
                if ((temp0_83 & 1) == 0)
                    goto label_14025ee99
                
                goto label_14025efac
            
        label_14025ee8d:
            arg5 = _mm_and_ps(arg5, zmm2)
            
            if ((temp0_83 & 1) == 0)
            label_14025ee99:
                
                if ((temp0_83 & 2) != 0)
                    goto label_14025efc1
                
                goto label_14025eea1
            
        label_14025efac:
            var_5d8.d = arg5.d
            
            if ((temp0_83 & 2) != 0)
            label_14025efc1:
                var_5d8:4.d = _mm_shuffle_epi32(arg5, 0xe5)[0]
                zmm1 = _mm_mul_ps(zmm1, var_5c8)
                
                if ((temp0_83 & 4) == 0)
                    goto label_14025eead
                
                goto label_14025efd9
            
        label_14025eea1:
            zmm1 = _mm_mul_ps(zmm1, var_5c8)
            
            if ((temp0_83 & 4) == 0)
            label_14025eead:
                zmm1 = _mm_and_ps(zmm1, zmm2)
                zmm2 = _mm_andnot_ps(zmm2, zmm12)
                
                if ((temp0_83 & 8) != 0)
                    goto label_14025eff4
                
                goto label_14025eebc
            
        label_14025efd9:
            var_5d8:8.d = _mm_shuffle_epi32(arg5, 0x4e)[0]
            zmm1 = _mm_and_ps(zmm1, zmm2)
            zmm2 = _mm_andnot_ps(zmm2, zmm12)
            
            if ((temp0_83 & 8) != 0)
            label_14025eff4:
                var_5d8:0xc.d = _mm_shuffle_epi32(arg5, 0xe7).d
                zmm1 = _mm_or_ps(zmm1, zmm2)
                
                if ((temp0_83 & 1) == 0)
                    goto label_14025eec9
                
                goto label_14025f005
            
        label_14025eebc:
            zmm1 = _mm_or_ps(zmm1, zmm2)
            
            if ((temp0_83 & 1) == 0)
            label_14025eec9:
                arg5 = var_2a8_1
                
                if ((temp0_83 & 2) != 0)
                    goto label_14025f025
                
                goto label_14025eed9
            
        label_14025f005:
            var_5c8.d = zmm1.d
            arg5 = var_2a8_1
            
            if ((temp0_83 & 2) != 0)
            label_14025f025:
                var_5c8:4.d = _mm_shuffle_epi32(zmm1, 0xe5).d
                
                if ((temp0_83 & 4) == 0)
                    goto label_14025eee1
                
                goto label_14025f03b
            
        label_14025eed9:
            
            if ((temp0_83 & 4) == 0)
            label_14025eee1:
                
                if ((temp0_83 & 8) != 0)
                    goto label_14025f051
                
                goto label_14025eeee
            
        label_14025f03b:
            var_5c8:8.d = _mm_shuffle_epi32(zmm1, 0x4e).d
            
            if ((temp0_83 & 8) == 0)
            label_14025eeee:
                rax_16 = _mm_movemask_ps(zmm11 ^ arg6)
                
                if (rax_16 != 0)
                    goto label_140259c36
            else
            label_14025f051:
                var_5c8:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7).d
                rax_16 = _mm_movemask_ps(zmm11 ^ arg6)
                
                if (rax_16 != 0)
                    goto label_140259c36
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
        goto label_14025f168
return i_4
