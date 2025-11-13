// 函数: sub_14031c310
// 地址: 0x14031c310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58[0x4] = arg9
uint128_t zmm14
uint128_t var_68 = zmm14
float var_78[0x4] = arg8
uint128_t zmm12
uint128_t var_88 = zmm12
int32_t zmm11[0x4]
int32_t var_98[0x4] = zmm11
int32_t var_a8[0x4] = arg7
float zmm9[0x4]
float var_b8[0x4] = zmm9
uint128_t zmm8
uint128_t var_c8 = zmm8
uint128_t var_d8 = arg6
int32_t var_e8[0x4] = arg5
int64_t r10 = sx.q(arg14)
int32_t zmm2[0x4] = arg12
int32_t rcx_1 = *(&data_143442fe0 + (r10 << 2)) * *(&data_143442fc0 + (r10 << 2))
int32_t i_5 = ((arg15 s>> 0x1f u>> 0x1e) + arg15) & 0xfffffffc
uint64_t i_4
uint64_t r13
uint128_t zmm0
uint128_t zmm1
uint128_t zmm3
float zmm4[0x4]
int32_t zmm5[0x4]

if (i_5 s<= 0)
    r13 = 0
    i_4 = zx.q(arg15)
    
    if (0 s< i_4.d)
    label_14031e8ac:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r13.d), 0), data_142e11d00)
        zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i_4.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm9
        int64_t rbp_22 = sx.q(zmm0.d)
        int64_t rbx_58 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        int64_t rdi_18 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        int64_t rax_124 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm5 = zx.o(*(arg2 + rax_124))
        uint128_t var_2e8_2 = *(arg2 + rdi_18)
        zmm14 = zx.o(*(arg2 + rbp_22))
        uint128_t var_2c8_2 = *(arg2 + rbx_58)
        zmm0 = data_142fc95e0 & zmm9
        float (* r13_1)[0x4] = zx.q(zmm0.d)
        uint128_t* r14_2 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        uint128_t* r11_1 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        int32_t (* r10_1)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm0 = zx.o(*(r10_1 + arg2 + rax_124))
        zmm1 = _mm_unpacklo_epi32(zx.o(*(r11_1 + arg2 + rdi_18)), zmm0.q)
        zmm3 = zx.o(*(r14_2 + arg2 + rbx_58))
        int32_t temp0_641[0x4] =
            _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(r13_1 + arg2 + rbp_22)), zmm3.q), zmm1.q)
        zmm1 = _mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0)
        zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_641, zmm1), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_ps(zmm3, zmm0, 0), zmm1), 0xe8).q) & zmm9
        int64_t rax_126 = sx.q(zmm2[0])
        int64_t rdx_6 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
        int64_t rbx_60 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
        int64_t rdi_20 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
        int32_t temp0_653[0x4] = _mm_unpacklo_epi32(zx.o(*(arg3 + rbx_60)), zx.q(*(arg3 + rdi_20)))
        int32_t temp0_654[0x4] = _mm_unpacklo_epi32(zx.o(*(arg3 + rax_126)), zx.q(*(arg3 + rdx_6)))
        zmm4 = _mm_unpacklo_epi64(temp0_654, temp0_653[0].q)
        zmm1 = zx.o(*(r10_1 + arg3 + rdi_20))
        zmm0 = _mm_unpacklo_epi32(zx.o(*(r11_1 + arg3 + rbx_60)), zmm1.q)
        zmm2 = zx.o(*(r14_2 + arg3 + rdx_6))
        arg7 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(r13_1 + arg3 + rax_126)), zmm2[0].q), 
            zmm0.q)
        arg5 = _mm_unpacklo_epi32(temp0_653, 
            _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(temp0_653, temp0_654[0].q)).q)
        float var_368_1[0x4] = zmm4
        arg9 = _mm_unpacklo_epi32(temp0_654, _mm_cmpgt_epi32(zx.o(0), zmm4).q)
        zmm12 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
        arg6 = _mm_cmpeq_epi32(arg6, arg6)
        zmm3 = data_1434422d0
        zmm4 = arg12
        int32_t rax_127
        rax_127.b = 0f >= zmm4[0]
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_127)) ^ arg6, 0)
        zmm3 = _mm_cmpgt_epi32(zmm3, arg7) & not.o(zmm0)
        zmm11 = zmm3 & zmm9
        uint32_t temp0_668 = _mm_movemask_ps(zmm11)
        int32_t var_308_3[0x4] = arg5
        int32_t var_318_4[0x4] = arg9
        int32_t var_2b8_4[0x4] = zmm5
        uint128_t var_2f8_2 = zmm12
        uint128_t var_378_3
        int32_t r9_4
        
        if (temp0_668 == 0)
            var_378_3 = zx.o(0)
            zmm5 = zx.o(0)
            zmm8 = zx.o(0)
        label_14031eea8:
            r9_4 = r10.d
            zmm4 = zx.o(0)
            arg6 = zmm12
        else
            arg6 = _mm_add_epi32(arg6, arg7)
            
            if (zmm4[0] >= 1f)
                zmm11 &= arg6
                var_378_3 = zx.o(0)
                zmm5 = zmm11
                zmm8 = zmm11
                goto label_14031eea8
            
            uint128_t var_298_4 = zmm3
            zmm3 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(arg7, zmm12), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_ps(zmm2, zmm1, 0), zmm12), 0xe8).q)
            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm3)
            zmm2 = _mm_shuffle_epi32(zmm3, 0x4e)
            zmm3 = _mm_unpacklo_epi32(zmm3, zmm1.q)
            int32_t temp0_680[0x4] = _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2).q)
            zmm1 = _mm_shuffle_epi32(_mm_add_epi64(3, zx.o(arg10)), 0x44)
            int32_t temp0_684[0x4] = _mm_add_epi64(_mm_add_epi64(zmm1, arg9), zmm3)
            zmm1 = _mm_add_epi64(_mm_add_epi64(zmm1, arg5), temp0_680)
            zmm0 = data_143442c10
            zmm5 = temp0_684 & zmm0
            uint128_t var_348_1 = zmm1 & zmm0
            zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm1 = _mm_cvtepi32_ps(arg6)
            zmm2 = zx.o(0)
            zmm2[0] = float.s(arg11 - 1)
            zmm1 = _mm_mul_ps(zmm1, zmm0)
            zmm2[0] = zmm2[0] f* zmm4[0]
            int32_t var_2a8_4[0x4] = zmm2
            int32_t rbx_61 = int.d(zmm2[0])
            int32_t rcx_24 = 0
            
            if (rbx_61 s>= 0)
                rcx_24 = rbx_61
            
            if (rcx_24 s> arg11 - 2)
                rcx_24 = arg11 - 2
            
            zmm0 = _mm_cvttps_epi32(zmm1)
            zmm1 = _mm_cmpgt_epi32(zmm0, zx.o(0)) & zmm0
            zmm8 = _mm_cmpgt_epi32(arg6, zmm1)
            zmm8 = (zmm8 & not.o(arg6)) | (zmm1 & zmm8)
            r9_4 = r10.d
            int32_t var_378_2[0x4] = zmm5
            uint128_t var_2d8_1 = arg6
            float var_358_1[0x4] = zmm9
            int32_t var_328_1[0x4] = arg7
            
            if (arg11 s< 0x100)
                zmm1 = _mm_shuffle_epi32(zmm8, 0x4e)
                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                int32_t temp0_740[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm8)
                zmm0 = _mm_add_epi64(_mm_unpacklo_epi32(zmm8, temp0_740[0].q), zmm5)
                char rsi_21 = temp0_668.b
                
                if ((rsi_21 & 1) == 0)
                    zmm1 = _mm_unpacklo_epi32(zmm1, zmm3.q)
                    arg6 = var_348_1
                    
                    if ((rsi_21 & 2) != 0)
                        goto label_14031f1c2
                    
                    goto label_14031eefa
                
                arg8 = zx.o(*zmm0.q)
                zmm1 = _mm_unpacklo_epi32(zmm1, zmm3.q)
                arg6 = var_348_1
                
                if ((rsi_21 & 2) != 0)
                label_14031f1c2:
                    arg8 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), arg8, 0), arg8, 0xe2)
                    zmm1 = _mm_add_epi64(zmm1, arg6)
                    
                    if ((rsi_21 & 4) == 0)
                        goto label_14031ef08
                    
                    goto label_14031f1e5
                
            label_14031eefa:
                zmm1 = _mm_add_epi64(zmm1, arg6)
                
                if ((rsi_21 & 4) != 0)
                label_14031f1e5:
                    arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(zx.o(*zmm1.q), arg8, 0x30), 0x84)
                    
                    if ((rsi_21 & 8) != 0)
                        arg8 = _mm_shuffle_ps(arg8, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg8, 0x20), 
                            0x24)
                else
                label_14031ef08:
                    
                    if ((rsi_21 & 8) != 0)
                        arg8 = _mm_shuffle_ps(arg8, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg8, 0x20), 
                            0x24)
                
                arg8 = __andps_xmmxud_memxud(arg8, data_142ed6810)
                zmm0 = zx.o(rcx_24)
                arg7 = _mm_shuffle_epi32(zmm0, 0)
                arg8 = _mm_cmpgt_epi32(arg8, arg7)
                zmm1 = arg8 ^ _mm_cmpeq_epi32(zmm0, zmm0)
                uint128_t var_268_3 = zmm1
                arg5 = zmm8
                
                if (_mm_movemask_ps(arg8 & not.o(zmm11)) != 0)
                    zmm1 = var_2d8_1
                    zmm9 = (arg8 & not.o(zmm1)) | (arg8 & zmm8)
                    int32_t temp0_753[0x4] = _mm_cmpeq_epi32(temp0_740, temp0_740)
                    zmm12 = _mm_sub_epi32(zmm8, temp0_753)
                    arg8 &= not.o(_mm_cmpgt_epi32(zmm12, zmm1) ^ temp0_753)
                    zmm5 = zmm11 & arg8
                    uint32_t i = _mm_movemask_ps(zmm5)
                    
                    if (i == 0)
                        arg5 = zmm9
                    else
                        zmm2 = zmm8
                        
                        do
                            arg9 = zmm12
                            int32_t temp0_764[0x4] = _mm_shuffle_epi32(zmm12, 0x4e)
                            zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_764)
                            zmm3 = __paddq_xmmdq_memdq(
                                _mm_unpacklo_epi32(zmm12, _mm_cmpgt_epi32(zx.o(0), zmm12).q), 
                                var_378_2)
                            char temp0_769 = _mm_movemask_ps(zmm5)
                            
                            if ((temp0_769 & 1) == 0)
                                arg5 = _mm_unpacklo_epi32(temp0_764, zmm1.q)
                                
                                if ((temp0_769 & 2) != 0)
                                    goto label_14031f005
                                
                                goto label_14031f071
                            
                            zmm4[0] = zx.d(*zmm3.q)
                            arg5 = _mm_unpacklo_epi32(temp0_764, zmm1.q)
                            
                            if ((temp0_769 & 2) != 0)
                            label_14031f005:
                                zmm4 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), zmm4, 
                                        0), 
                                    zmm4, 0xe2)
                                arg5 = _mm_add_epi64(arg5, arg6)
                                
                                if ((temp0_769 & 4) == 0)
                                    goto label_14031f079
                                
                                goto label_14031f020
                            
                        label_14031f071:
                            arg5 = _mm_add_epi64(arg5, arg6)
                            
                            if ((temp0_769 & 4) != 0)
                            label_14031f020:
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(zx.o(*arg5[0].q), zmm4, 0x30), 0x84)
                                
                                if ((temp0_769 & 8) != 0)
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg5, 0x4e).q), 
                                            zmm4, 0x20), 
                                        0x24)
                            else
                            label_14031f079:
                                
                                if ((temp0_769 & 8) != 0)
                                    zmm4 = _mm_shuffle_ps(zmm4, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg5, 0x4e).q), 
                                            zmm4, 0x20), 
                                        0x24)
                            
                            zmm1 =
                                _mm_cmpgt_epi32(__andps_xmmxud_memxud(zmm4, data_142ed6810), arg7)
                                & arg8
                            zmm0 = zx.o(0)
                            arg5 = zmm1 & not.o(zmm9)
                            zmm2 &= zmm1
                            
                            if (_mm_movemask_ps(zmm1 & zmm11) != i)
                                zmm1 ^= arg8
                                zmm0 = zmm1
                            
                            arg5 |= zmm2
                            zmm12 = __psubd_xmmdq_memdq(arg9, data_142d3f800)
                            arg8 = __pcmpgtd_xmmdq_memdq(zmm12, var_2d8_1) & not.o(zmm0)
                            zmm5 = arg8 & zmm11
                            i = _mm_movemask_ps(zmm5)
                            zmm2 = arg9
                            zmm9 = arg5
                        while (i != 0)
                
                zmm2 = var_268_3
                uint32_t temp0_869 = _mm_movemask_ps(_mm_andnot_ps(zmm2, zmm11))
                uint32_t i_1
                
                if (temp0_869 != 0)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ zmm2
                    arg5 &= zmm2
                    zmm12 = _mm_cmpeq_epi32(zmm12, zmm12)
                    zmm8 = _mm_add_epi32(zmm8, zmm12)
                    zmm2 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & zmm1
                    zmm3 = zmm2 & zmm11
                    i_1 = _mm_movemask_ps(zmm3)
                
                if (temp0_869 == 0 || i_1 == 0)
                    zmm5 = arg5
                    zmm9 = var_378_2
                else
                    arg8 = data_142ed6810
                    zmm9 = var_378_2
                    
                    do
                        zmm5 = _mm_shuffle_epi32(zmm8, 0x4e)
                        zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm5)
                        zmm1 = _mm_add_epi64(
                            _mm_unpacklo_epi32(zmm8, _mm_cmpgt_epi32(zx.o(0), zmm8).q), zmm9)
                        char temp0_887 = _mm_movemask_ps(zmm3)
                        
                        if ((temp0_887 & 1) == 0)
                            zmm3 = var_348_1
                            zmm5 = _mm_unpacklo_epi32(zmm5, zmm0.q)
                            
                            if ((temp0_887 & 2) != 0)
                                goto label_14031f6bb
                            
                            goto label_14031f71e
                        
                        zmm4[0] = zx.d(*zmm1.q)
                        zmm3 = var_348_1
                        zmm5 = _mm_unpacklo_epi32(zmm5, zmm0.q)
                        
                        if ((temp0_887 & 2) != 0)
                        label_14031f6bb:
                            zmm4 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm4, 0), 
                                zmm4, 0xe2)
                            zmm5 = _mm_add_epi64(zmm5, zmm3)
                            
                            if ((temp0_887 & 4) == 0)
                                goto label_14031f726
                            
                            goto label_14031f6d6
                        
                    label_14031f71e:
                        zmm5 = _mm_add_epi64(zmm5, zmm3)
                        
                        if ((temp0_887 & 4) != 0)
                        label_14031f6d6:
                            zmm4 = _mm_shuffle_ps(zmm4, 
                                _mm_shuffle_ps(zx.o(*zmm5[0].q), zmm4, 0x30), 0x84)
                            
                            if ((temp0_887 & 8) != 0)
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), zmm4, 
                                        0x20), 
                                    0x24)
                        else
                        label_14031f726:
                            
                            if ((temp0_887 & 8) != 0)
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), zmm4, 
                                        0x20), 
                                    0x24)
                        
                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm4, arg8), arg7) & not.o(zmm2)
                        zmm5 = zmm1 & not.o(arg5)
                        arg5 = zx.o(0)
                        
                        if (_mm_movemask_ps(zmm1 & zmm11) != i_1)
                            arg5 = zmm1 ^ zmm2
                        
                        zmm5 |= zmm1 & zmm8
                        zmm8 = _mm_add_epi32(zmm8, zmm12)
                        zmm2 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & arg5
                        zmm3 = zmm2 & zmm11
                        i_1 = _mm_movemask_ps(zmm3)
                        arg5 = zmm5
                    while (i_1 != 0)
                
                zmm5 &= zmm11
                zmm1 = _mm_shuffle_epi32(zmm5, 0x4e)
                int32_t temp0_900[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm1)
                zmm0 =
                    _mm_add_epi64(_mm_unpacklo_epi32(zmm5, _mm_cmpgt_epi32(zx.o(0), zmm5).q), zmm9)
                
                if ((rsi_21 & 1) != 0)
                    arg5 = zx.o(*zmm0.q)
                
                zmm1 = _mm_unpacklo_epi32(zmm1, temp0_900[0].q)
                zmm9 = var_358_1
                arg9 = var_318_4
                arg6 = var_2f8_2
                arg7 = var_328_1
                zmm2 = var_2d8_1
                
                if ((rsi_21 & 2) == 0)
                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_348_1)
                    
                    if ((rsi_21 & 4) != 0)
                        goto label_14031f948
                    
                    goto label_14031f83b
                
                zmm0 = _mm_shuffle_ps(
                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), arg5, 0), arg5, 0xe2)
                arg5 = zmm0
                zmm1 = __paddq_xmmdq_memdq(zmm1, var_348_1)
                
                if ((rsi_21 & 4) == 0)
                label_14031f83b:
                    
                    if ((rsi_21 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg5, 0x20)
                        arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                else
                label_14031f948:
                    zmm0 = _mm_shuffle_ps(zx.o(*zmm1.q), arg5, 0x30)
                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x84)
                    
                    if ((rsi_21 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg5, 0x20)
                        arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                
                zmm8 = _mm_sub_epi32(zmm5, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm11
                zmm0 = _mm_cmpgt_epi32(zmm8, zmm2) & zmm11
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm8 = (zmm2 & zmm0) | (zmm0 & not.o(zmm8))
                
                zmm4 = zx.o(0)
                zmm2 = _mm_shuffle_epi32(zmm8, 0x4e)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                zmm1 = _mm_add_epi64(var_378_2, 
                    _mm_unpacklo_epi32(zmm8, _mm_cmpgt_epi32(zx.o(0), zmm8).q))
                uint128_t var_378_5 = zmm1
                
                if ((rsi_21 & 1) == 0)
                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                    zmm3 = var_298_4
                    
                    if ((rsi_21 & 2) != 0)
                        goto label_14031f9a0
                    
                    goto label_14031f8ef
                
                zmm1 = zx.o(*var_378_5.q)
                zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                zmm3 = var_298_4
                
                if ((rsi_21 & 2) != 0)
                label_14031f9a0:
                    zmm1 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*__pshufd_xmmdq_memdq_immb(var_378_5, 0x4e).q), zmm1, 
                            0), 
                        zmm1, 0xe2)
                    zmm0 = _mm_add_epi64(var_348_1, zmm2)
                    
                    if ((rsi_21 & 4) == 0)
                        goto label_14031f8fd
                    
                    goto label_14031f9b7
                
            label_14031f8ef:
                zmm0 = _mm_add_epi64(var_348_1, zmm2)
                
                if ((rsi_21 & 4) != 0)
                label_14031f9b7:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(*zmm0.q), zmm1, 0x30), 0x84)
                    
                    if ((rsi_21 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                else
                label_14031f8fd:
                    
                    if ((rsi_21 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                
                arg5 = __andps_xmmxud_memxud(arg5, data_142ed6810)
                zmm1 = __andps_xmmxud_memxud(zmm1, data_142ed6810)
                zmm0 = zx.o(0)
                
                if (arg13 != 1)
                label_14031fa09:
                    zmm1 = _mm_sub_epi32(zmm1, arg5)
                    zmm0 = __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0)
                    zmm0 = _mm_div_ps(
                        _mm_sub_ps(_mm_shuffle_ps(var_2a8_4, var_2a8_4, 0), _mm_cvtepi32_ps(arg5)), 
                        _mm_cvtepi32_ps((zmm0 & zmm1) | (zmm0 & not.o(data_142d3f5b0))))
            else
                zmm3 = _mm_add_epi32(zmm8, zmm8)
                zmm1 = _mm_shuffle_epi32(zmm3, 0x4e)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                int32_t temp0_696[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm3)
                zmm3 = _mm_add_epi64(_mm_unpacklo_epi32(zmm3, temp0_696[0].q), zmm5)
                char rsi_20 = temp0_668.b
                
                if ((rsi_20 & 1) == 0)
                    zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
                    
                    if ((rsi_20 & 2) != 0)
                        goto label_14031f150
                    
                    goto label_14031ec5a
                
                zmm4 = zx.o(*zmm3.q)
                zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
                
                if ((rsi_20 & 2) != 0)
                label_14031f150:
                    zmm4 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), zmm4, 0), zmm4, 0xe2)
                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_348_1)
                    
                    if ((rsi_20 & 4) == 0)
                        goto label_14031ec6a
                    
                    goto label_14031f173
                
            label_14031ec5a:
                zmm1 = __paddq_xmmdq_memdq(zmm1, var_348_1)
                
                if ((rsi_20 & 4) != 0)
                label_14031f173:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(*zmm1.q), zmm4, 0x30), 0x84)
                    
                    if ((rsi_20 & 8) != 0)
                        zmm4 = _mm_shuffle_ps(zmm4, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm4, 0x20), 
                            0x24)
                else
                label_14031ec6a:
                    
                    if ((rsi_20 & 8) != 0)
                        zmm4 = _mm_shuffle_ps(zmm4, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm4, 0x20), 
                            0x24)
                
                zmm4 = __andps_xmmxud_memxud(zmm4, data_143442cd0)
                zmm0 = zx.o(rcx_24)
                arg7 = _mm_shuffle_epi32(zmm0, 0)
                zmm4 = _mm_cmpgt_epi32(zmm4, arg7)
                zmm1 = zmm4 ^ _mm_cmpeq_epi32(zmm0, zmm0)
                uint128_t var_268_2 = zmm1
                arg5 = zmm8
                
                if (_mm_movemask_ps(zmm4 & not.o(zmm11)) != 0)
                    zmm1 = var_2d8_1
                    arg8 = (zmm4 & not.o(zmm1)) | (zmm4 & zmm8)
                    zmm2 = _mm_cmpeq_epi32(temp0_696, temp0_696)
                    zmm9 = _mm_sub_epi32(zmm8, zmm2)
                    zmm4 &= not.o(_mm_cmpgt_epi32(zmm9, zmm1) ^ zmm2)
                    zmm5 = zmm11 & zmm4
                    uint32_t i_2 = _mm_movemask_ps(zmm5)
                    
                    if (i_2 == 0)
                        arg5 = arg8
                    else
                        zmm12 = zmm8
                        
                        do
                            arg9 = zmm9
                            zmm3 = _mm_add_epi32(zmm9, zmm9)
                            arg5 = _mm_shuffle_epi32(zmm3, 0x4e)
                            zmm0 = _mm_cmpgt_epi32(zx.o(0), arg5)
                            zmm3 = __paddq_xmmdq_memdq(
                                _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3).q), 
                                var_378_2)
                            char temp0_726 = _mm_movemask_ps(zmm5)
                            
                            if ((temp0_726 & 1) == 0)
                                arg5 = _mm_unpacklo_epi32(arg5, zmm0.q)
                                
                                if ((temp0_726 & 2) != 0)
                                    goto label_14031ed65
                                
                                goto label_14031edd4
                            
                            zmm2[0] = zx.d(*zmm3.q)
                            arg5 = _mm_unpacklo_epi32(arg5, zmm0.q)
                            
                            if ((temp0_726 & 2) != 0)
                            label_14031ed65:
                                zmm2 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), zmm2, 
                                        0), 
                                    zmm2, 0xe2)
                                arg5 = _mm_add_epi64(arg5, var_348_1)
                                
                                if ((temp0_726 & 4) == 0)
                                    goto label_14031eddc
                                
                                goto label_14031ed80
                            
                        label_14031edd4:
                            arg5 = _mm_add_epi64(arg5, var_348_1)
                            
                            if ((temp0_726 & 4) != 0)
                            label_14031ed80:
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(zx.o(*arg5[0].q), zmm2, 0x30), 0x84)
                                
                                if ((temp0_726 & 8) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg5, 0x4e).q), 
                                            zmm2, 0x20), 
                                        0x24)
                            else
                            label_14031eddc:
                                
                                if ((temp0_726 & 8) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg5, 0x4e).q), 
                                            zmm2, 0x20), 
                                        0x24)
                            
                            zmm1 =
                                _mm_cmpgt_epi32(__andps_xmmxud_memxud(zmm2, data_143442cd0), arg7)
                                & zmm4
                            zmm0 = zx.o(0)
                            arg5 = zmm1 & not.o(arg8)
                            zmm12 &= zmm1
                            
                            if (_mm_movemask_ps(zmm1 & zmm11) != i_2)
                                zmm1 ^= zmm4
                                zmm0 = zmm1
                            
                            arg5 |= zmm12
                            zmm9 = __psubd_xmmdq_memdq(arg9, data_142d3f800)
                            zmm4 = __pcmpgtd_xmmdq_memdq(zmm9, var_2d8_1) & not.o(zmm0)
                            zmm5 = zmm4 & zmm11
                            i_2 = _mm_movemask_ps(zmm5)
                            zmm12 = arg9
                            arg8 = arg5
                        while (i_2 != 0)
                
                zmm2 = var_268_2
                uint32_t temp0_796 = _mm_movemask_ps(_mm_andnot_ps(zmm2, zmm11))
                uint32_t i_3
                
                if (temp0_796 != 0)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ zmm2
                    arg5 &= zmm2
                    zmm12 = _mm_cmpeq_epi32(zmm12, zmm12)
                    zmm8 = _mm_add_epi32(zmm8, zmm12)
                    zmm3 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & zmm1
                    zmm2 = zmm3 & zmm11
                    i_3 = _mm_movemask_ps(zmm2)
                
                if (temp0_796 == 0 || i_3 == 0)
                    zmm5 = arg5
                    zmm9 = var_378_2
                else
                    arg8 = data_143442cd0
                    zmm9 = var_378_2
                    
                    do
                        zmm1 = _mm_add_epi32(zmm8, zmm8)
                        zmm5 = _mm_shuffle_epi32(zmm1, 0x4e)
                        zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm5)
                        zmm1 = _mm_add_epi64(
                            _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1).q), zmm9)
                        char temp0_815 = _mm_movemask_ps(zmm2)
                        
                        if ((temp0_815 & 1) == 0)
                            zmm2 = var_348_1
                            zmm5 = _mm_unpacklo_epi32(zmm5, zmm0.q)
                            
                            if ((temp0_815 & 2) != 0)
                                goto label_14031f2ab
                            
                            goto label_14031f315
                        
                        zmm4[0] = zx.o(*zmm1.q)[0]
                        zmm2 = var_348_1
                        zmm5 = _mm_unpacklo_epi32(zmm5, zmm0.q)
                        
                        if ((temp0_815 & 2) != 0)
                        label_14031f2ab:
                            zmm4 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm4, 0), 
                                zmm4, 0xe2)
                            zmm5 = _mm_add_epi64(zmm5, zmm2)
                            
                            if ((temp0_815 & 4) == 0)
                                goto label_14031f31d
                            
                            goto label_14031f2c6
                        
                    label_14031f315:
                        zmm5 = _mm_add_epi64(zmm5, zmm2)
                        
                        if ((temp0_815 & 4) != 0)
                        label_14031f2c6:
                            zmm4 = _mm_shuffle_ps(zmm4, 
                                _mm_shuffle_ps(zx.o(*zmm5[0].q), zmm4, 0x30), 0x84)
                            
                            if ((temp0_815 & 8) != 0)
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), zmm4, 
                                        0x20), 
                                    0x24)
                        else
                        label_14031f31d:
                            
                            if ((temp0_815 & 8) != 0)
                                zmm4 = _mm_shuffle_ps(zmm4, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm5, 0x4e).q), zmm4, 
                                        0x20), 
                                    0x24)
                        
                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm4, arg8), arg7) & not.o(zmm3)
                        zmm5 = zmm1 & not.o(arg5)
                        arg5 = zx.o(0)
                        
                        if (_mm_movemask_ps(zmm1 & zmm11) != i_3)
                            arg5 = zmm1 ^ zmm3
                        
                        zmm5 |= zmm1 & zmm8
                        zmm8 = _mm_add_epi32(zmm8, zmm12)
                        zmm3 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & arg5
                        zmm2 = zmm3 & zmm11
                        i_3 = _mm_movemask_ps(zmm2)
                        arg5 = zmm5
                    while (i_3 != 0)
                
                zmm5 &= zmm11
                int32_t temp0_827[0x4] = _mm_add_epi32(zmm5, zmm5)
                zmm1 = _mm_shuffle_epi32(temp0_827, 0x4e)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                int32_t temp0_832[0x4] = _mm_add_epi64(
                    _mm_unpacklo_epi32(temp0_827, _mm_cmpgt_epi32(zx.o(0), temp0_827).q), zmm9)
                
                if ((rsi_20 & 1) != 0)
                    arg5 = zx.o(*temp0_832[0].q)
                
                zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
                zmm9 = var_358_1
                arg9 = var_318_4
                arg6 = var_2f8_2
                arg7 = var_328_1
                
                if ((rsi_20 & 2) == 0)
                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_348_1)
                    
                    if ((rsi_20 & 4) != 0)
                        goto label_14031f546
                    
                    goto label_14031f436
                
                zmm0 = _mm_shuffle_ps(
                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_832, 0x4e).q), arg5, 0), arg5, 
                    0xe2)
                arg5 = zmm0
                zmm1 = __paddq_xmmdq_memdq(zmm1, var_348_1)
                
                if ((rsi_20 & 4) == 0)
                label_14031f436:
                    
                    if ((rsi_20 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg5, 0x20)
                        arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                else
                label_14031f546:
                    zmm0 = _mm_shuffle_ps(zx.o(*zmm1.q), arg5, 0x30)
                    arg5 = _mm_shuffle_ps(arg5, zmm0, 0x84)
                    
                    if ((rsi_20 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg5, 0x20)
                        arg5 = _mm_shuffle_ps(arg5, zmm0, 0x24)
                
                zmm8 = _mm_sub_epi32(zmm5, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm11
                zmm0 = _mm_cmpgt_epi32(zmm8, var_2d8_1) & zmm11
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm8 = (var_2d8_1 & zmm0) | (zmm0 & not.o(zmm8))
                
                zmm4 = zx.o(0)
                zmm1 = _mm_add_epi32(zmm8, zmm8)
                zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                zmm1 = _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1).q)
                uint128_t var_378_4 = _mm_add_epi64(var_378_2, zmm1)
                
                if ((rsi_20 & 1) == 0)
                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                    zmm3 = var_298_4
                    
                    if ((rsi_20 & 2) != 0)
                        goto label_14031f59e
                    
                    goto label_14031f4ed
                
                zmm1 = zx.o(*var_378_4.q)
                zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                zmm3 = var_298_4
                
                if ((rsi_20 & 2) != 0)
                label_14031f59e:
                    zmm1 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*__pshufd_xmmdq_memdq_immb(var_378_4, 0x4e).q), zmm1, 
                            0), 
                        zmm1, 0xe2)
                    zmm0 = _mm_add_epi64(var_348_1, zmm2)
                    
                    if ((rsi_20 & 4) == 0)
                        goto label_14031f4fb
                    
                    goto label_14031f5b5
                
            label_14031f4ed:
                zmm0 = _mm_add_epi64(var_348_1, zmm2)
                
                if ((rsi_20 & 4) != 0)
                label_14031f5b5:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(*zmm0.q), zmm1, 0x30), 0x84)
                    
                    if ((rsi_20 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                else
                label_14031f4fb:
                    
                    if ((rsi_20 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                
                arg5 = __andps_xmmxud_memxud(arg5, data_143442cd0)
                zmm1 = __andps_xmmxud_memxud(zmm1, data_143442cd0)
                zmm0 = zx.o(0)
                
                if (arg13 != 1)
                    goto label_14031fa09
            
            var_378_3 = _mm_and_ps(zmm0, zmm3)
            arg5 = var_308_3
        
        int32_t rax_200
        rax_200.b = r9_4 == 3
        int32_t temp0_946[0x4] = __pcmpgtd_xmmdq_memdq(arg7, data_142d3f5b0)
        zmm12 = _mm_shuffle_epi32(0x18 & zx.o(neg.d(rax_200)), 0) & temp0_946
        arg8 = _mm_unpackhi_epi32(zmm12, zmm4[0].q)
        zmm12 = _mm_unpacklo_epi32(zmm12, zmm4[0].q)
        zmm2 = _mm_shuffle_epi32(arg6, 0xf5)
        uint64_t rsi_22 = zx.q(r9_4)
        int32_t var_348_2[0x4] = zmm2
        
        if (r9_4 u> 6)
        label_14031fca4:
            char temp0_984 = _mm_movemask_ps(zmm9)
            arg7 = zx.o(0)
            
            if ((temp0_984 & 4) != 0)
                arg7 = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zx.o(0), zx.o(0), 0x30), 0x84)
            
            if ((temp0_984 & 8) != 0)
                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zx.o(0), arg7, 0x20), 0x24)
            
            zmm0 = var_2c8_2
            arg9 = arg7
            arg5 = arg7
            zmm11 = var_2e8_2
        else
            zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, arg6), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm5, 0xf5), zmm2), 0xe8).q)
            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
            zmm3 = _mm_shuffle_epi32(zmm1, 0x4e)
            zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
            zmm3 = _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zmm4, zmm3)[0].q)
            int64_t var_338_1
            
            switch (rsi_22)
                case 0, 1
                    uint128_t var_2d8_2 = zmm8
                    zmm0 = _mm_add_epi64(zmm12, arg9)
                    int32_t temp0_964[0x4] = _mm_add_epi64(_mm_add_epi64(arg8, arg5), zmm3)
                    zmm0 = _mm_add_epi64(zmm0, zmm1)
                    zmm4 = _mm_shuffle_epi32(zmm9, 0x50)
                    zmm0 &= zmm4
                    int32_t temp0_967[0x4] = _mm_shuffle_epi32(zmm9, 0xfa)
                    zmm2 = temp0_964 & temp0_967
                    int64_t rcx_27 = _mm_shuffle_epi32(zmm0, 0x4e).q
                    void* rax_202 = arg10 + rcx_27
                    zmm8 = *(arg10 + rcx_27)
                    int64_t rcx_28 = zmm2[0].q
                    void* rdx_32 = arg10 + rcx_28
                    zmm1 = *(arg10 + rcx_28)
                    int64_t rcx_29 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                    void* rbp_25 = arg10 + rcx_29
                    var_338_1.o = *(arg10 + rcx_29)
                    zmm2 = data_1434426c0
                    zmm3 = zmm4 & zmm2
                    zmm2 &= temp0_967
                    void* rcx_31 = zmm0.q + arg10
                    arg9 = *(zmm3.q + rcx_31)
                    arg6 = *(_mm_shuffle_epi32(zmm3, 0x4e).q + rax_202)
                    zmm3 = *(zmm2[0].q + rdx_32)
                    uint128_t var_328_2 = *(_mm_shuffle_epi32(zmm2, 0x4e).q + rbp_25)
                    zmm2 = data_1434426e0
                    zmm4 &= zmm2
                    arg5 = temp0_967 & zmm2
                    arg7 = *(zmm4[0].q + rcx_31)
                    zmm11 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rax_202)
                    zmm4 = *(arg5[0].q + rdx_32)
                    arg5 = _mm_shuffle_epi32(arg5, 0x4e)
                    zmm2 = *(arg5[0].q + rbp_25)
                    char temp0_974 = _mm_movemask_ps(zmm9)
                    bool cond:12_1
                    bool cond:13_1
                    bool cond:16_1
                    bool cond:17_1
                    
                    if ((temp0_974 & 1) == 0)
                        char temp1_1 = temp0_974 & 2
                        cond:12_1 = temp1_1 != 0
                        cond:13_1 = temp1_1 == 0
                        cond:16_1 = temp1_1 != 0
                        cond:17_1 = temp1_1 == 0
                        
                        if (temp1_1 == 0)
                            goto label_1403203b7
                        
                        goto label_14031fc24
                    
                    arg5 = *rcx_31
                    char temp0_1122 = temp0_974 & 2
                    cond:12_1 = temp0_1122 != 0
                    cond:13_1 = temp0_1122 == 0
                    cond:16_1 = temp0_1122 != 0
                    cond:17_1 = temp0_1122 == 0
                    
                    if (temp0_1122 == 0)
                    label_1403203b7:
                        
                        if (cond:13_1)
                            goto label_14031fc2e
                        
                        goto label_1403203bd
                    
                label_14031fc24:
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, arg5, 0), arg5, 0xe2)
                    
                    if (cond:12_1)
                    label_1403203bd:
                        arg9 = _mm_unpacklo_ps(arg9, arg6.q)
                        
                        if (cond:16_1)
                            arg7 = _mm_unpacklo_ps(arg7, zmm11[0].q)
                    else
                    label_14031fc2e:
                        
                        if (not(cond:17_1))
                            arg7 = _mm_unpacklo_ps(arg7, zmm11[0].q)
                    
                    char temp2_1 = temp0_974 & 4
                    zmm11 = var_2e8_2
                    zmm8 = var_2d8_2
                    
                    if (temp2_1 == 0)
                        zmm0 = var_2c8_2
                        
                        if (temp2_1 != 0)
                        label_14031fcfd:
                            arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(zmm3, arg9, 0x30), 0x84)
                            
                            if (temp2_1 != 0)
                                goto label_14031fc77
                            
                            goto label_14031fd08
                    else
                        arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm1, arg5, 0x30), 0x84)
                        zmm0 = var_2c8_2
                        
                        if (temp2_1 != 0)
                            goto label_14031fcfd
                    
                    bool cond:58_1
                    bool cond:59_1
                    bool cond:70_1
                    bool cond:71_1
                    
                    if (temp2_1 != 0)
                    label_14031fc77:
                        arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm4, arg7, 0x30), 0x84)
                        char temp7_1 = temp0_974 & 8
                        cond:58_1 = temp7_1 == 0
                        cond:59_1 = temp7_1 != 0
                        cond:70_1 = temp7_1 == 0
                        cond:71_1 = temp7_1 == 0
                        
                        if (temp7_1 != 0)
                            goto label_14031fd19
                        
                        goto label_14031fc84
                    
                label_14031fd08:
                    char temp6_1 = temp0_974 & 8
                    cond:58_1 = temp6_1 == 0
                    cond:59_1 = temp6_1 != 0
                    cond:70_1 = temp6_1 == 0
                    cond:71_1 = temp6_1 == 0
                    
                    if (temp6_1 != 0)
                    label_14031fd19:
                        arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(var_338_1.o, arg5, 0x20), 0x24)
                        
                        if (cond:59_1)
                            goto label_14031fc94
                        
                        goto label_14031fd23
                    
                label_14031fc84:
                    
                    if (cond:58_1)
                    label_14031fd23:
                        
                        if (not(cond:70_1))
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm2, arg7, 0x20), 0x24)
                    else
                    label_14031fc94:
                        arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(var_328_2, arg9, 0x20), 0x24)
                        
                        if (not(cond:71_1))
                            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm2, arg7, 0x20), 0x24)
                case 2
                    zmm0 = _mm_add_epi64(zmm12, arg9)
                    int32_t temp0_997[0x4] = _mm_add_epi64(_mm_add_epi64(arg8, arg5), zmm3)
                    zmm0 = _mm_add_epi64(zmm0, zmm1)
                    zmm4 = _mm_shuffle_epi32(zmm9, 0x50)
                    zmm0 &= zmm4
                    zmm1 = _mm_shuffle_epi32(zmm9, 0xfa)
                    zmm2 = temp0_997 & zmm1
                    int64_t rax_207 = zmm0.q
                    void* rbp_26 = arg10 + rax_207
                    int64_t rcx_32 = _mm_shuffle_epi32(zmm0, 0x4e).q
                    void* rbx_68 = arg10 + rcx_32
                    int64_t rdx_33 = zmm2[0].q
                    zmm3 = data_1434426b0
                    zmm0 = zmm4 & zmm3
                    int32_t temp0_1002[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
                    arg5 = data_1434426c0
                    zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm0.q + rbp_26)), 
                        *(temp0_1002[0].q + rbx_68), 1)
                    zmm4 &= arg5
                    void* rdi_24 = zmm4[0].q
                    int16_t* rdi_25 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    zmm4 = zx.o(*(rdi_24 + rbp_26))
                    void* rbp_28 = arg10 + rdx_33
                    zmm2 = _mm_shuffle_epi32(zmm2, 0x4e)
                    zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(rdi_25 + rbx_68), 1)
                    int64_t rbx_69 = zmm2[0].q
                    zmm3 &= zmm1
                    zmm1 &= arg5
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(zmm3.q + rbp_28), 2)
                    zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(zmm1.q + rbp_28), 2)
                    void* rbp_29 = arg10 + rbx_69
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, 
                        *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rbp_29), 3)
                    zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, 
                        *(_mm_shuffle_epi32(zmm1, 0x4e).q + rbp_29), 3)
                    zmm1 = _mm_unpacklo_epi16(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg10 + rax_207)), 
                                    *(arg10 + rcx_32), 1), 
                                *(arg10 + rdx_33), 2), 
                            *(arg10 + rbx_69), 3), 
                        0)
                    zmm3 = data_1434424d0
                    int32_t temp0_1018[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm3))
                    zmm1 = data_1434426d0
                    arg5 = _mm_div_ps(temp0_1018, zmm1)
                    arg9 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), zmm3)), zmm1)
                    arg7 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm4, 0), zmm3)), zmm1)
                    zmm0 = data_143442710
                    arg5 = _mm_mul_ps(arg5, zmm0)
                    arg9 = _mm_mul_ps(arg9, zmm0)
                    arg7 = _mm_mul_ps(arg7, zmm0)
                    zmm0 = var_2c8_2
                    zmm11 = var_2e8_2
                case 3
                    zmm0 = var_368_1 & zmm9
                    int64_t rcx_33 = sx.q(zmm0.d)
                    void* rax_210 = arg10 + rcx_33
                    zmm11 = arg9
                    arg7 = *(arg10 + rcx_33)
                    int64_t rdx_34 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                    void* rcx_35 = arg10 + rdx_34
                    arg7 = _mm_unpacklo_ps(arg7, (*(arg10 + rdx_34))[0].q)
                    int64_t rbx_70 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    void* rdx_36 = arg10 + rbx_70
                    zmm2 = *(arg10 + rbx_70)
                    int64_t rbp_30 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                    void* rbx_72 = arg10 + rbp_30
                    zmm2 = _mm_unpacklo_ps(zmm2, (*(arg10 + rbp_30)).q)
                    arg7 = arg7[0].q | zmm2[0].q << 0x40
                    float temp0_1036[0x4] =
                        _mm_unpacklo_ps(*(r13_1 + rax_210), (*(r14_2 + rcx_35)).q)
                    zmm0 = _mm_unpacklo_ps(*(r11_1 + rdx_36), (*(r10_1 + rbx_72))[0].q)
                    var_338_1.o = temp0_1036[0].q | zmm0.q << 0x40
                    zmm2 = data_142fc95f0 & zmm9
                    uint128_t var_2d8_3 = zmm8
                    arg6 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_210), 
                        (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rcx_35))[0].q).q | _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdx_36), 
                        (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_72))[0].q)[0].q << 0x40
                    zmm2 = data_143442650 & zmm9
                    arg9 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_210), 
                        (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rcx_35))[0].q)
                    float temp0_1047[0x4] = _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rdx_36), 
                        (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rbx_72))[0].q)
                    arg9 = arg9[0].q | temp0_1047[0].q << 0x40
                    zmm4 = data_143442660 & zmm9
                    zmm8 = arg5
                    zmm2 = _mm_unpacklo_ps(*(zx.q(zmm4[0]) + rax_210), 
                        (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + rcx_35))[0].q)
                    arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + rdx_36), 
                        (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + rbx_72))[0].q)
                    zmm2 = zmm2[0].q | arg5[0].q << 0x40
                    arg5 = data_143442670 & zmm9
                    float temp0_1054[0x4] = _mm_unpacklo_ps(*(zx.q(arg5[0]) + rax_210), 
                        (*(zx.q(_mm_shuffle_epi32(arg5, 0xe5).d) + rcx_35)).q)
                    zmm0 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(arg5, 0x4e).d) + rdx_36), 
                        (*(zx.q(_mm_shuffle_epi32(arg5, 0xe7)[0]) + rbx_72))[0].q)
                    zmm4 = temp0_1054[0].q | zmm0.q << 0x40
                    zmm0 = _mm_add_epi64(zmm12, zmm11)
                    int32_t temp0_1060[0x4] = _mm_add_epi64(_mm_add_epi64(arg8, zmm8), zmm3)
                    zmm0 = _mm_add_epi64(zmm0, zmm1)
                    zmm1 = _mm_shuffle_epi32(zmm9, 0x50) & zmm0
                    zmm0 = _mm_shuffle_epi32(zmm9, 0xfa) & temp0_1060
                    int64_t rcx_36 = _mm_shuffle_epi32(zmm1, 0x4e).q
                    int64_t rbp_44 = _mm_shuffle_epi32(zmm0, 0x4e).q
                    zmm0 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg10 + zmm1.q)), zx.q(*(arg10 + rcx_36))), 
                        _mm_unpacklo_epi32(zx.o(*(arg10 + zmm0.q)), zx.q(*(arg10 + rbp_44))).q)
                    zmm1 = zmm0
                    zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    zmm0 &= data_143442680
                    zmm1 = _mm_srli_epi32(zmm1, 0x15)
                    zmm11 = var_2e8_2
                    arg5 = _mm_add_ps(
                        _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442490)), 
                                data_1434426a0), 
                            arg9), 
                        arg7)
                    zmm0 = data_143442440
                    int32_t temp0_1077[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                    zmm3 = data_143442690
                    arg9 = __addps_xmmps_memps(_mm_mul_ps(_mm_div_ps(temp0_1077, zmm3), zmm2), 
                        var_338_1.o)
                    arg7 = _mm_add_ps(
                        _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm0)), zmm3), 
                            zmm4), 
                        arg6)
                    zmm8 = var_2d8_3
                    zmm0 = var_2c8_2
                case 4, 5, 6
                    goto label_14031fca4
        
        zmm11 = __punpckldq_xmmdq_memdq(zmm11, var_2b8_4)
        zmm14 = _mm_unpacklo_epi32(zmm14, zmm0.q)
        zmm5 = _mm_cmpeq_epi32(zmm5, zmm8) & not.o(zmm9)
        char temp0_1089 = _mm_movemask_ps(zmm5)
        
        if (temp0_1089 != 0)
            zmm1 = zx.o(0)
            char rax_252
            
            if (r9_4 u> 6)
            label_14032080f:
                rax_252 = temp0_1089
                zmm0 = zx.o(0)
                zmm2 = var_378_3
                
                if ((rax_252 & 4) == 0)
                    goto label_140320844
                
            label_14032083e:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(0), zmm1, 0x30), 0x84)
            label_140320844:
                
                if ((rax_252 & 8) != 0)
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm0, zmm1, 0x20), 0x24)
                
                zmm3 = zmm1
                zmm5 = zmm1
            else
                zmm3 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(var_2f8_2, zmm8), 0xe8), 
                    _mm_shuffle_epi32(
                        __pmuludq_xmmdq_memdq(_mm_shuffle_epi32(zmm8, 0xf5), var_348_2), 0xe8).q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm3)
                zmm4 = _mm_shuffle_epi32(zmm3, 0x4e)
                zmm3 = _mm_unpacklo_epi32(zmm3, zmm0.q)
                zmm4 = _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q)
                
                switch (rsi_22)
                    case 0, 1
                        int32_t var_2e8_3[0x4] = zmm11
                        float var_358_2[0x4] = zmm9
                        zmm12 = __paddq_xmmdq_memdq(zmm12, var_318_4)
                        arg8 = _mm_add_epi64(__paddq_xmmdq_memdq(arg8, var_308_3), zmm4)
                        zmm12 = _mm_add_epi64(zmm12, zmm3)
                        zmm4 = _mm_shuffle_epi32(zmm5, 0x50)
                        zmm12 &= zmm4
                        zmm5 = _mm_shuffle_epi32(zmm5, 0xfa)
                        arg8 &= zmm5
                        int64_t rcx_39 = _mm_shuffle_epi32(zmm12, 0x4e).q
                        void* rax_215 = arg10 + rcx_39
                        zmm9 = *(arg10 + rcx_39)
                        int64_t rcx_40 = arg8[0].q
                        void* rbp_45 = arg10 + rcx_40
                        zmm11 = *(arg10 + rcx_40)
                        int64_t rcx_41 = _mm_shuffle_epi32(arg8, 0x4e).q
                        void* rbx_73 = arg10 + rcx_41
                        arg8 = *(arg10 + rcx_41)
                        zmm1 = data_1434426c0
                        zmm0 = zmm4 & zmm1
                        zmm1 &= zmm5
                        void* rcx_43 = zmm12.q + arg10
                        zmm3 = *(zmm0.q + rcx_43)
                        zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rax_215)
                        zmm8 = *(zmm1.q + rbp_45)
                        uint128_t var_348_3 = *(_mm_shuffle_epi32(zmm1, 0x4e).q + rbx_73)
                        zmm1 = data_1434426e0
                        zmm4 &= zmm1
                        zmm5 &= zmm1
                        zmm1 = *(zmm4[0].q + rcx_43)
                        zmm2 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rax_215)
                        arg6 = *(zmm5[0].q + rbp_45)
                        zmm12 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rbx_73)
                        bool cond:32_1
                        bool cond:33_1
                        bool cond:47_1
                        bool cond:48_1
                        
                        if ((temp0_1089 & 1) == 0)
                            char temp4_1 = temp0_1089 & 2
                            cond:32_1 = temp4_1 != 0
                            cond:33_1 = temp4_1 == 0
                            cond:47_1 = temp4_1 != 0
                            cond:48_1 = temp4_1 == 0
                            
                            if (temp4_1 == 0)
                                goto label_140320afd
                            
                            goto label_14032033d
                        
                        zmm5 = *rcx_43
                        char temp3_1 = temp0_1089 & 2
                        cond:32_1 = temp3_1 != 0
                        cond:33_1 = temp3_1 == 0
                        cond:47_1 = temp3_1 != 0
                        cond:48_1 = temp3_1 == 0
                        
                        if (temp3_1 == 0)
                        label_140320afd:
                            zmm9 = var_358_2
                            
                            if (cond:33_1)
                                goto label_14032034d
                            
                            goto label_140320b09
                        
                    label_14032033d:
                        zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm5, 0), zmm5, 0xe2)
                        zmm9 = var_358_2
                        
                        if (not(cond:32_1))
                        label_14032034d:
                            
                            if (cond:48_1)
                                goto label_140320b12
                            
                            goto label_140320353
                        
                    label_140320b09:
                        zmm3 = _mm_unpacklo_ps(zmm3, zmm0.q)
                        bool cond:62_1
                        bool cond:63_1
                        bool cond:74_1
                        bool cond:75_1
                        
                        if (not(cond:47_1))
                        label_140320b12:
                            char temp11_1 = temp0_1089 & 4
                            cond:62_1 = temp11_1 != 0
                            cond:63_1 = temp11_1 == 0
                            cond:74_1 = temp11_1 != 0
                            cond:75_1 = temp11_1 == 0
                            
                            if (temp11_1 == 0)
                                goto label_14032035e
                            
                            goto label_140320b1f
                        
                    label_140320353:
                        zmm1 = _mm_unpacklo_ps(zmm1, zmm2[0].q)
                        char temp10_1 = temp0_1089 & 4
                        cond:62_1 = temp10_1 != 0
                        cond:63_1 = temp10_1 == 0
                        cond:74_1 = temp10_1 != 0
                        cond:75_1 = temp10_1 == 0
                        
                        if (temp10_1 == 0)
                        label_14032035e:
                            zmm11 = var_2e8_3
                            
                            if (cond:63_1)
                                goto label_140320b34
                            
                            goto label_140320373
                        
                    label_140320b1f:
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, zmm5, 0x30), 0x84)
                        zmm11 = var_2e8_3
                        
                        if (not(cond:62_1))
                        label_140320b34:
                            
                            if (cond:75_1)
                                goto label_14032037e
                            
                            goto label_140320b3e
                        
                    label_140320373:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x30), 0x84)
                        bool cond:93_1
                        bool cond:94_1
                        bool cond:103_1
                        bool cond:104_1
                        
                        if (not(cond:74_1))
                        label_14032037e:
                            char temp15_1 = temp0_1089 & 8
                            cond:93_1 = temp15_1 != 0
                            cond:94_1 = temp15_1 == 0
                            cond:103_1 = temp15_1 != 0
                            cond:104_1 = temp15_1 == 0
                            
                            if (temp15_1 == 0)
                                goto label_140320b4a
                            
                            goto label_14032038b
                        
                    label_140320b3e:
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg6, zmm1, 0x30), 0x84)
                        char temp14_1 = temp0_1089 & 8
                        cond:93_1 = temp14_1 != 0
                        cond:94_1 = temp14_1 == 0
                        cond:103_1 = temp14_1 != 0
                        cond:104_1 = temp14_1 == 0
                        
                        if (temp14_1 == 0)
                        label_140320b4a:
                            
                            if (cond:94_1)
                                goto label_140320396
                            
                            goto label_140320b59
                        
                    label_14032038b:
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(arg8, zmm5, 0x20), 0x24)
                        
                        if (cond:93_1)
                        label_140320b59:
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(var_348_3, zmm3, 0x20), 0x24)
                            
                            if (cond:103_1)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x20), 0x24)
                        else
                        label_140320396:
                            
                            if (not(cond:104_1))
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm12, zmm1, 0x20), 0x24)
                        
                        zmm2 = var_378_3
                    case 2
                        zmm12 = __paddq_xmmdq_memdq(zmm12, var_318_4)
                        arg8 = _mm_add_epi64(__paddq_xmmdq_memdq(arg8, var_308_3), zmm4)
                        zmm12 = _mm_add_epi64(zmm12, zmm3)
                        zmm3 = _mm_shuffle_epi32(zmm5, 0x50)
                        zmm12 &= zmm3
                        zmm1 = _mm_shuffle_epi32(zmm5, 0xfa)
                        arg8 &= zmm1
                        int64_t rax_219 = zmm12.q
                        void* rbp_46 = arg10 + rax_219
                        int64_t rcx_44 = _mm_shuffle_epi32(zmm12, 0x4e).q
                        void* rbx_74 = arg10 + rcx_44
                        zmm4 = data_1434426b0
                        zmm0 = zmm3 & zmm4
                        int16_t* rdi_38 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                        zmm5 = data_1434426c0
                        zmm3 &= zmm5
                        arg6 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm0.q + rbp_46)), 
                            *(rdi_38 + rbx_74), 1)
                        int64_t rdi_40 = arg8[0].q
                        zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm3.q + rbp_46)), 
                            *(_mm_shuffle_epi32(zmm3, 0x4e).q + rbx_74), 1)
                        void* rbp_49 = arg10 + rdi_40
                        zmm4 &= zmm1
                        arg6 = __pinsrw_xmmdq_memw_immb(arg6, *(zmm4[0].q + rbp_49), 2)
                        zmm1 &= zmm5
                        zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(zmm1.q + rbp_49), 2)
                        zmm3 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg10 + rax_219)), *(arg10 + rcx_44), 1)
                        zmm5 = _mm_shuffle_epi32(arg8, 0x4e)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(arg10 + rdi_40), 2)
                        int64_t rax_221 = zmm5[0].q
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(arg10 + rax_221), 3)
                        void* rax_222 = arg10 + rax_221
                        arg6 = __pinsrw_xmmdq_memw_immb(arg6, 
                            *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rax_222), 3)
                        zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, 
                            *(_mm_shuffle_epi32(zmm1, 0x4e).q + rax_222), 3)
                        zmm3 = _mm_unpacklo_epi16(zmm3, 0)
                        zmm4 = data_1434424d0
                        zmm5 = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm4))
                        zmm8 = data_1434426d0
                        zmm5 = _mm_div_ps(zmm5, zmm8)
                        zmm3 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(arg6, 0), zmm4)), zmm8)
                        zmm1 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), zmm4)), zmm8)
                        zmm0 = data_143442710
                        zmm5 = _mm_mul_ps(zmm5, zmm0)
                        zmm3 = _mm_mul_ps(zmm3, zmm0)
                        zmm1 = _mm_mul_ps(zmm1, zmm0)
                        zmm2 = var_378_3
                    case 3
                        zmm1 = var_368_1 & zmm5
                        int64_t rax_224 = sx.q(zmm1.d)
                        void* rcx_47 = arg10 + rax_224
                        zmm2 = *(arg10 + rax_224)
                        int64_t rax_226 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
                        void* rbp_50 = arg10 + rax_226
                        zmm2 = _mm_unpacklo_ps(zmm2, (*(arg10 + rax_226)).q)
                        int64_t rax_228 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
                        void* rbx_77 = arg10 + rax_228
                        zmm0 = *(arg10 + rax_228)
                        int64_t rax_230 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
                        void* rdi_41 = arg10 + rax_230
                        zmm0 = _mm_unpacklo_ps(zmm0, (*(arg10 + rax_230)).q)
                        int32_t var_348_4[0x4] = zmm2[0].q | zmm0.q << 0x40
                        zmm0 = data_142fc95e0 & zmm5
                        zmm2 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_47), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_50)).q)
                        zmm1 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbx_77), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rdi_41)).q)
                        zmm2 = zmm2[0].q | zmm1.q << 0x40
                        zmm0 = data_142fc95f0 & zmm5
                        arg6 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_47), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_50)).q).q | _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbx_77), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rdi_41)).q).q << 0x40
                        zmm1 = data_143442650 & zmm5
                        float var_358_3[0x4] = zmm9
                        float temp0_1176[0x4] = _mm_unpacklo_ps(*(zx.q(zmm1.d) + rcx_47), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + rbp_50)).q)
                        zmm0 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + rbx_77), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + rdi_41)).q)
                        zmm9 = temp0_1176[0].q | zmm0.q << 0x40
                        zmm0 = data_143442660 & zmm5
                        zmm8 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_47), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_50)).q).q | _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbx_77), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rdi_41)).q).q << 0x40
                        zmm0 = data_143442670 & zmm5
                        int32_t var_2e8_4[0x4] = zmm11
                        zmm11 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_47), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_50)).q)
                        zmm1 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbx_77), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rdi_41)).q)
                        zmm11 = zmm11[0].q | zmm1.q << 0x40
                        zmm12 = __paddq_xmmdq_memdq(zmm12, var_318_4)
                        arg8 = _mm_add_epi64(__paddq_xmmdq_memdq(arg8, var_308_3), zmm4)
                        zmm12 = _mm_add_epi64(zmm12, zmm3)
                        zmm0 = _mm_shuffle_epi32(zmm5, 0x50) & zmm12
                        zmm1 = _mm_shuffle_epi32(zmm5, 0xfa) & arg8
                        int64_t rcx_48 = _mm_shuffle_epi32(zmm0, 0x4e).q
                        int64_t rbx_78 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg10 + zmm0.q)), zx.q(*(arg10 + rcx_48))), 
                            _mm_unpacklo_epi32(zx.o(*(arg10 + zmm1.q)), zx.q(*(arg10 + rbx_78))).q)
                        zmm1 = zmm0
                        zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm0 &= data_143442680
                        zmm1 = _mm_srli_epi32(zmm1, 0x15)
                        zmm5 = _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442490)), 
                                data_1434426a0), 
                            zmm9)
                        zmm9 = var_358_3
                        zmm5 = __addps_xmmps_memps(zmm5, var_348_4)
                        zmm0 = data_143442440
                        zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                        zmm4 = data_143442690
                        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(zmm3, zmm4), zmm8), zmm2)
                        zmm1 = _mm_mul_ps(
                            _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm0)), zmm4), zmm11)
                        zmm11 = var_2e8_4
                        zmm1 = _mm_add_ps(zmm1, arg6)
                        zmm2 = var_378_3
                    case 4, 5
                        goto label_14032080f
                    case 6
                        rax_252 = temp0_1089
                        zmm1 = zx.o(0)
                        zmm0 = zx.o(0)
                        zmm2 = var_378_3
                        
                        if ((rax_252 & 4) == 0)
                            goto label_140320844
                        
                        goto label_14032083e
            zmm5 = _mm_sub_ps(zmm5, arg5)
            zmm3 = _mm_sub_ps(zmm3, arg9)
            zmm5 = _mm_mul_ps(zmm5, zmm2)
            zmm4 = arg5
            char temp5_1 = temp0_1089 & 1
            
            if (temp5_1 != 0)
                zmm4 = arg5
                zmm4[0] = zmm4[0] f+ zmm5[0]
                zmm1 = _mm_sub_ps(zmm1, arg7)
                zmm3 = _mm_mul_ps(zmm3, zmm2)
                arg6 = arg9
                
                if (temp5_1 != 0)
                    goto label_140320935
                
                goto label_140320885
            
            zmm1 = _mm_sub_ps(zmm1, arg7)
            zmm3 = _mm_mul_ps(zmm3, zmm2)
            arg6 = arg9
            
            if (temp5_1 != 0)
            label_140320935:
                arg6.d = arg9.d f+ zmm3.d
                zmm2 = _mm_mul_ps(zmm2, zmm1)
                zmm1 = arg7
                
                if (temp5_1 != 0)
                    goto label_140320896
                
                goto label_140320946
            
        label_140320885:
            zmm2 = _mm_mul_ps(zmm2, zmm1)
            zmm1 = arg7
            bool cond:60_1
            bool cond:61_1
            bool cond:72_1
            bool cond:73_1
            
            if (temp5_1 != 0)
            label_140320896:
                zmm1.d = arg7.d f+ zmm2[0]
                arg5 = _mm_add_ps(arg5, zmm5)
                char temp13_1 = temp0_1089 & 2
                cond:60_1 = temp13_1 == 0
                cond:61_1 = temp13_1 != 0
                cond:72_1 = temp13_1 == 0
                cond:73_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                    goto label_14032095d
                
                goto label_1403208a6
            
        label_140320946:
            arg5 = _mm_add_ps(arg5, zmm5)
            char temp12_1 = temp0_1089 & 2
            cond:60_1 = temp12_1 == 0
            cond:61_1 = temp12_1 != 0
            cond:72_1 = temp12_1 == 0
            cond:73_1 = temp12_1 != 0
            
            if (temp12_1 != 0)
            label_14032095d:
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm4, 1), zmm4, 0xe2)
                arg9 = _mm_add_ps(arg9, zmm3)
                
                if (cond:61_1)
                    goto label_1403208bc
                
                goto label_14032096a
            
        label_1403208a6:
            arg9 = _mm_add_ps(arg9, zmm3)
            
            if (not(cond:60_1))
            label_1403208bc:
                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg6, 1), arg6, 0xe2)
                arg7 = _mm_add_ps(arg7, zmm2)
                
                if (cond:73_1)
                    goto label_140320980
                
                goto label_1403208c9
            
        label_14032096a:
            arg7 = _mm_add_ps(arg7, zmm2)
            bool cond:91_1
            bool cond:92_1
            bool cond:101_1
            bool cond:102_1
            
            if (not(cond:72_1))
            label_140320980:
                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm1, 1), zmm1, 0xe2)
                char temp17_1 = temp0_1089 & 4
                cond:91_1 = temp17_1 == 0
                cond:92_1 = temp17_1 != 0
                cond:101_1 = temp17_1 == 0
                cond:102_1 = temp17_1 != 0
                
                if (temp17_1 != 0)
                    goto label_1403208d9
                
                goto label_14032098c
            
        label_1403208c9:
            char temp16_1 = temp0_1089 & 4
            cond:91_1 = temp16_1 == 0
            cond:92_1 = temp16_1 != 0
            cond:101_1 = temp16_1 == 0
            cond:102_1 = temp16_1 != 0
            
            if (temp16_1 == 0)
            label_14032098c:
                
                if (not(cond:91_1))
                label_14032099a:
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg9, arg6, 0x32), 0x84)
                    
                    if (cond:102_1)
                        goto label_1403208f1
                    
                    goto label_1403209a4
            else
            label_1403208d9:
                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg5, zmm4, 0x32), 0x84)
                
                if (cond:92_1)
                    goto label_14032099a
            
            bool cond:115_1
            bool cond:116_1
            bool cond:123_1
            bool cond:124_1
            
            if (not(cond:101_1))
            label_1403208f1:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg7, zmm1, 0x32), 0x84)
                char temp19_1 = temp0_1089 & 8
                cond:115_1 = temp19_1 == 0
                cond:116_1 = temp19_1 != 0
                cond:123_1 = temp19_1 == 0
                cond:124_1 = temp19_1 != 0
                
                if (temp19_1 != 0)
                    goto label_1403209b5
                
                goto label_1403208fe
            
        label_1403209a4:
            char temp18_1 = temp0_1089 & 8
            cond:115_1 = temp18_1 == 0
            cond:116_1 = temp18_1 != 0
            cond:123_1 = temp18_1 == 0
            cond:124_1 = temp18_1 != 0
            
            if (temp18_1 != 0)
            label_1403209b5:
                arg5 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg5, zmm4, 0x23), 0x24)
                
                if (cond:116_1)
                    goto label_140320911
                
                goto label_1403209be
            
        label_1403208fe:
            arg5 = zmm4
            
            if (cond:115_1)
            label_1403209be:
                arg9 = arg6
                
                if (not(cond:123_1))
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg7, zmm1, 0x23), 0x24)
            else
            label_140320911:
                arg9 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg9, arg6, 0x23), 0x24)
                
                if (cond:124_1)
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg7, zmm1, 0x23), 0x24)
            
            arg7 = zmm1
        
        zmm14 = _mm_unpacklo_epi64(zmm14, zmm11[0].q)
        zmm0 = zx.o(arg7[0].q)
        arg7 = _mm_unpackhi_ps(arg7, zx.o(0))
        zmm1 = _mm_unpacklo_ps(arg5, arg9[0].q)
        arg5 = _mm_unpackhi_ps(arg5, arg9)
        uint128_t var_168 = _mm_shuffle_ps(zmm1, zmm0, 0x84)
        uint128_t var_158_1 = _mm_shuffle_ps(zmm1, zmm0, 0xde)
        uint128_t var_148_1 = arg5.q | arg7[0].q << 0x40
        int32_t var_138_1[0x4] = _mm_unpackhi_pd(arg5, arg7[0].q)
        i_4 = zx.q(_mm_movemask_ps(zmm9))
        
        do
            uint64_t rcx_50
            uint64_t rflags_1
            
            if (i_4 == 0)
                rcx_50 = 0x40
            else
                rcx_50, rflags_1 = _bit_scan_forward(i_4)
            uint128_t var_178 = zmm14
            *(arg1 + sx.q(*(&var_178 + ((zx.q(rcx_50.d) & 3) << 2))) * 0x30 + 0x20) =
                (&var_168)[rcx_50]
            i_4 &= rol.q(-2, rcx_50.b)
        while (i_4 != 0)
else
    uint128_t var_268_1 = _mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0)
    uint128_t var_2e8_1 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
    uint128_t var_1a8_1 = _mm_shuffle_epi32(_mm_add_epi64(3, zx.o(arg10)), 0x44)
    int32_t rcx_2
    rcx_2.b = 0f f>= zmm2[0]
    uint128_t var_188_1 = _mm_shuffle_epi32(zx.o(neg.d(rcx_2)), 0)
    uint128_t var_1b8_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm1.d = float.s(arg11 - 1)
    zmm1.d = zmm1.d f* zmm2[0]
    int32_t rax_1 = int.d(zmm1.d)
    r13 = 0
    
    if (rax_1 s< 0)
        rax_1 = 0
    
    if (rax_1 s> arg11 - 2)
        rax_1 = arg11 - 2
    
    uint128_t var_378_1 = _mm_shuffle_epi32(zx.o(rax_1), 0)
    uint128_t var_1c8_1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    int32_t rax_2
    rax_2.b = r10.d == 3
    uint128_t var_198_1 = _mm_shuffle_epi32(0x18 & zx.o(neg.d(rax_2)), 0)
    
    do
        int64_t rax_5 = sx.q((r13 << 3).d)
        zmm5 = *(arg2 + rax_5)
        zmm2 = *(arg2 + rax_5 + 0x10)
        zmm0 = _mm_shuffle_ps(zmm5, zmm2, 0xdd)
        int32_t var_2f8_1[0x4] = zmm2
        zmm1 = _mm_shuffle_ps(zmm5, zmm2, 0xff)
        int32_t temp0_26[0x4] = _mm_mul_epu32(_mm_shuffle_epi32(var_268_1, 0xf5), zmm1)
        zmm1 = _mm_shuffle_epi32(temp0_26, 0xe8)
        zmm0 = _mm_mul_epu32(zmm0, var_268_1)
        zmm3 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm0, 0xe8), zmm1.q)
        int64_t rax_7 = sx.q(zmm0.d)
        int64_t rsi_1 = sx.q(*(arg3 + rax_7))
        int64_t rcx_6 = sx.q(temp0_26[0])
        int64_t rdi_1 = sx.q(*(arg3 + rcx_6))
        int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
        int64_t r14_1 = sx.q(*(arg3 + rbx_1))
        int64_t rbp_3 = sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
        int64_t r9 = sx.q(*(arg3 + rbp_3))
        zmm8 = _mm_unpacklo_epi32(zx.o(r14_1.d), zx.q(r9.d))
        zmm12 = _mm_unpacklo_epi32(zx.o(rsi_1.d), zx.q(rdi_1.d))
        arg6 = _mm_unpacklo_epi64(zmm12, zmm8.q)
        zmm1 = zx.o(*(arg3 + rbp_3 + 4))
        int32_t temp0_36[0x4] = _mm_unpacklo_epi32(zx.o(*(arg3 + rbx_1 + 4)), zmm1.q)
        zmm0 = zx.o(*(arg3 + rcx_6 + 4))
        int32_t temp0_38[0x4] =
            _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(arg3 + rax_7 + 4)), zmm0.q), temp0_36[0].q)
        int32_t temp0_40[0x4] = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm8, zmm12.q))
        zmm3 = _mm_cmpgt_epi32(zx.o(0), arg6)
        zmm4 = _mm_cmpgt_epi32(data_1434422d0, temp0_38) | var_188_1
        uint32_t temp0_43 = _mm_movemask_ps(zmm4)
        zmm9 = zmm4 ^ data_142d3f800
        arg5 = _mm_cmpeq_epi32(arg5, arg5)
        
        if (temp0_43 != 0)
            arg5 = zmm9
        
        zmm14 = __pshufd_xmmdq_memdq_immb(var_2e8_1, 0xf5)
        zmm8 = _mm_unpacklo_epi32(zmm8, temp0_40[0].q)
        zmm12 = _mm_unpacklo_epi32(zmm12, zmm3.q)
        arg9 &= arg5
        arg7 &= arg5
        uint32_t temp0_48 = _mm_movemask_ps(zmm9)
        int32_t var_2c8_1[0x4] = zmm5
        uint128_t var_308_1 = zmm12
        uint128_t var_298_1 = arg6
        uint128_t var_318_1 = zmm14
        int64_t var_338
        
        if (temp0_48 == 0)
            zmm9 = zx.o(0)
        else
            uint128_t var_2b8_1 = arg9
            int32_t temp0_49[0x4] = __paddd_xmmdq_memdq(temp0_38, data_142d3f800)
            
            if (zx.o(arg12)[0] f>= 1f)
                arg9 = temp0_49 & zmm9
                arg7 = (arg7 & zmm4) | arg9
                arg9 |= var_2b8_1 & zmm4
                zmm9 = zx.o(0)
            else
                float var_278_1[0x4] = zmm4
                int32_t var_2a8_1[0x4] = arg7
                zmm0 = _mm_shuffle_ps(zmm0, zmm1, 0)
                zmm1 = __pmuludq_xmmdq_memdq(temp0_38, var_2e8_1)
                zmm0 = _mm_mul_epu32(zmm0, zmm14)
                zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm1, 0xe8), 
                    _mm_shuffle_epi32(zmm0, 0xe8).q)
                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                int32_t temp0_57[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm1)
                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm1 = _mm_unpacklo_epi32(zmm1, temp0_57[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm3.q)
                arg8 = var_1a8_1
                int32_t temp0_62[0x4] = _mm_add_epi64(_mm_add_epi64(arg8, zmm8), zmm0)
                arg8 = _mm_add_epi64(_mm_add_epi64(arg8, zmm12), zmm1)
                zmm0 = data_143442c10
                arg7 = temp0_62 & zmm0
                arg8 &= zmm0
                zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(temp0_49), var_1b8_1))
                zmm1 = __pcmpgtd_xmmdq_memdq(zmm0, data_142d8f750) & zmm0
                zmm14 = _mm_cmpgt_epi32(temp0_49, zmm1)
                zmm14 = (zmm14 & not.o(temp0_49)) | (zmm1 & zmm14)
                uint128_t var_258_1 = zmm8
                
                if (arg11 s< 0x100)
                    zmm2 = _mm_shuffle_epi32(zmm14, 0x4e)
                    zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                    zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm14)
                    zmm1 = _mm_add_epi64(_mm_unpacklo_epi32(zmm14, zmm0.q), arg8)
                    char rbp_5 = temp0_48.b
                    float var_208[0x4]
                    
                    if ((rbp_5 & 1) != 0)
                        zmm0 = zx.o(*zmm1.q)
                        zmm4 = var_208
                        zmm4[0] = zmm0.d
                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm3.q)
                        
                        if ((rbp_5 & 2) != 0)
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm4, 0), 
                                zmm4, 0xe2)
                            zmm4 = zmm0
                    else
                        zmm4 = var_208
                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm3.q)
                        
                        if ((rbp_5 & 2) != 0)
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm4, 0), 
                                zmm4, 0xe2)
                            zmm4 = zmm0
                    
                    int32_t temp0_126[0x4] = _mm_add_epi64(zmm2, arg7)
                    
                    if ((rbp_5 & 4) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*temp0_126[0].q), zmm4, 0x30)
                        zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x84)
                        
                        if ((rbp_5 & 8) != 0)
                            zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_126, 0x4e).q), 
                                zmm4, 0x20)
                            zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                    else if ((rbp_5 & 8) != 0)
                        zmm0 =
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_126, 0x4e).q), zmm4, 0x20)
                        zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x24)
                    
                    zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                    var_208 = zmm4
                    zmm4 = __pcmpgtd_xmmdq_memdq(__andps_xmmxud_memxud(zmm4, data_142ed6810), 
                        var_378_1)
                    uint128_t var_238_2 = zmm4 ^ zmm0
                    
                    if (_mm_movemask_ps(zmm4 & not.o(zmm9)) == 0)
                        arg5 = zmm14
                    else
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                        zmm12 = (zmm4 & not.o(temp0_49)) | (zmm4 & zmm14)
                        arg6 = _mm_sub_epi32(zmm14, zmm1)
                        zmm4 &= not.o(_mm_cmpgt_epi32(arg6, temp0_49) ^ zmm1)
                        zmm2 = zmm9 & zmm4
                        uint32_t j = _mm_movemask_ps(zmm2)
                        
                        if (j == 0)
                            arg5 = zmm12
                        else
                            zmm5 = zmm14
                            
                            do
                                zmm1 = arg6
                                int32_t temp0_140[0x4] = _mm_shuffle_epi32(arg6, 0x4e)
                                zmm0 = _mm_cmpgt_epi32(zx.o(0), temp0_140)
                                arg6 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(arg6, _mm_cmpgt_epi32(zx.o(0), arg6).q), 
                                    arg8)
                                char temp0_145 = _mm_movemask_ps(zmm2)
                                int32_t var_2d8[0x4]
                                
                                if ((temp0_145 & 1) != 0)
                                    zmm3.d = zx.o(*arg6.q)[0]
                                    zmm2 = zmm3
                                    arg5 = _mm_unpacklo_epi32(temp0_140, zmm0.q)
                                    
                                    if ((temp0_145 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg6, 0x4e).q), 
                                                zmm2, 0), 
                                            zmm2, 0xe2)
                                else
                                    zmm2 = var_2d8
                                    arg5 = _mm_unpacklo_epi32(temp0_140, zmm0.q)
                                    
                                    if ((temp0_145 & 2) != 0)
                                        zmm2 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg6, 0x4e).q), 
                                                zmm2, 0), 
                                            zmm2, 0xe2)
                                
                                int32_t temp0_151[0x4] = _mm_add_epi64(arg5, arg7)
                                
                                if ((temp0_145 & 4) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*temp0_151[0].q), zmm2, 0x30), 0x84)
                                    
                                    if ((temp0_145 & 8) != 0)
                                        zmm2 = _mm_shuffle_ps(zmm2, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(temp0_151, 0x4e).q), zmm2, 
                                                0x20), 
                                            0x24)
                                else if ((temp0_145 & 8) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_151, 0x4e).q), 
                                            zmm2, 0x20), 
                                        0x24)
                                
                                var_2d8 = zmm2
                                zmm2 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm2, data_142ed6810), var_378_1) & zmm4
                                zmm0 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm2 & zmm9) != j)
                                    zmm0 = zmm2 ^ zmm4
                                
                                arg5 = (zmm2 & not.o(zmm12)) | (zmm5 & zmm2)
                                arg6 = __psubd_xmmdq_memdq(zmm1, data_142d3f800)
                                zmm4 = _mm_cmpgt_epi32(arg6, temp0_49) & not.o(zmm0)
                                zmm2 = zmm4 & zmm9
                                j = _mm_movemask_ps(zmm2)
                                zmm5 = zmm1
                                zmm12 = arg5
                            while (j != 0)
                    
                    uint32_t temp0_236 = _mm_movemask_ps(_mm_andnot_ps(var_238_2, zmm9))
                    uint32_t j_1
                    
                    if (temp0_236 != 0)
                        arg5 &= var_238_2
                        zmm8 = _mm_cmpeq_epi32(zmm8, zmm8)
                        zmm14 = _mm_add_epi32(zmm14, zmm8)
                        zmm2 = __pcmpgtd_xmmdq_memdq(zmm14, data_142d8f750) & (var_238_2 ^ zmm8)
                        zmm1 = zmm2 & zmm9
                        j_1 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_236 == 0 || j_1 == 0)
                        zmm4 = arg5
                        arg6 = var_338.o
                    else
                        arg6 = var_338.o
                        
                        do
                            zmm4 = _mm_shuffle_epi32(zmm14, 0x4e)
                            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                            zmm3 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm14, _mm_cmpgt_epi32(zx.o(0), zmm14)[0].q), 
                                arg8)
                            char temp0_253 = _mm_movemask_ps(zmm1)
                            
                            if ((temp0_253 & 1) == 0)
                                zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                                
                                if ((temp0_253 & 2) != 0)
                                    goto label_14031d291
                                
                                goto label_14031d2f7
                            
                            arg6.d = zx.d(*zmm3.q)
                            zmm4 = _mm_unpacklo_epi32(zmm4, zmm0.q)
                            
                            if ((temp0_253 & 2) != 0)
                            label_14031d291:
                                arg6 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), arg6, 
                                        0), 
                                    arg6, 0xe2)
                                zmm4 = _mm_add_epi64(zmm4, arg7)
                                
                                if ((temp0_253 & 4) == 0)
                                    goto label_14031d300
                                
                                goto label_14031d2ad
                            
                        label_14031d2f7:
                            zmm4 = _mm_add_epi64(zmm4, arg7)
                            
                            if ((temp0_253 & 4) != 0)
                            label_14031d2ad:
                                arg6 = _mm_shuffle_ps(arg6, 
                                    _mm_shuffle_ps(zx.o(*zmm4[0].q), arg6, 0x30), 0x84)
                                
                                if ((temp0_253 & 8) != 0)
                                    arg6 = _mm_shuffle_ps(arg6, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                            arg6, 0x20), 
                                        0x24)
                            else
                            label_14031d300:
                                
                                if ((temp0_253 & 8) != 0)
                                    arg6 = _mm_shuffle_ps(arg6, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                            arg6, 0x20), 
                                        0x24)
                            
                            zmm1 = __pcmpgtd_xmmdq_memdq(
                                __andps_xmmxud_memxud(arg6, data_142ed6810), var_378_1) & not.o(zmm2)
                            zmm5 = zx.o(0)
                            
                            if (_mm_movemask_ps(zmm1 & zmm9) != j_1)
                                zmm5 = zmm1 ^ zmm2
                            
                            zmm4 = (zmm1 & not.o(arg5)) | (zmm1 & zmm14)
                            zmm14 = _mm_add_epi32(zmm14, zmm8)
                            zmm2 = _mm_cmpgt_epi32(zmm14, zx.o(0)) & zmm5
                            zmm1 = zmm2 & zmm9
                            j_1 = _mm_movemask_ps(zmm1)
                            arg5 = zmm4
                        while (j_1 != 0)
                    
                    zmm1 = (zmm4 & zmm9) | (var_2b8_1 & var_278_1)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    int32_t temp0_266[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    zmm5 = zmm1
                    zmm1 = _mm_add_epi64(
                        _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1).q), arg8)
                    var_338.o = arg6
                    int32_t temp0_270[0x4] = _mm_cmpeq_epi32(arg5, arg5)
                    float var_218[0x4]
                    
                    if ((rbp_5 & 1) != 0)
                        var_218[0] = zx.d(*zmm1.q)
                        zmm3 = var_218
                    else
                        zmm3 = var_218
                    
                    zmm8 = var_258_1
                    zmm12 = var_308_1
                    zmm14 = var_318_1
                    zmm0 = _mm_unpacklo_epi32(zmm0, temp0_266[0].q)
                    
                    if ((rbp_5 & 2) == 0)
                        zmm0 = _mm_add_epi64(zmm0, arg7)
                        
                        if ((rbp_5 & 4) != 0)
                            goto label_14031d540
                        
                        goto label_14031d443
                    
                    zmm3 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), zmm3, 0xe2)
                    zmm0 = _mm_add_epi64(zmm0, arg7)
                    
                    if ((rbp_5 & 4) == 0)
                    label_14031d443:
                        
                        if ((rbp_5 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else
                    label_14031d540:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm0.q), zmm3, 0x30), 0x84)
                        
                        if ((rbp_5 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    
                    zmm4 = (_mm_sub_epi32(zmm5, temp0_270) & zmm9) | (var_2a8_1 & var_278_1)
                    zmm0 = _mm_cmpgt_epi32(zmm4, temp0_49) & zmm9
                    var_218 = zmm3
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm4 = (temp0_49 & zmm0) | (zmm0 & not.o(zmm4))
                    
                    arg9 = zmm5
                    zmm0 = _mm_shuffle_epi32(zmm4, 0x4e)
                    zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    arg8 = _mm_add_epi64(arg8, 
                        _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4)[0].q))
                    uint128_t var_1e8
                    
                    if ((rbp_5 & 1) != 0)
                        zmm3.d = zx.o(*arg8[0].q)[0]
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                        
                        if ((rbp_5 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg8, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_1e8
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                        
                        if ((rbp_5 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg8, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    
                    int32_t temp0_295[0x4] = _mm_add_epi64(arg7, zmm0)
                    
                    if ((rbp_5 & 4) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*temp0_295[0].q), zmm3, 0x30), 0x84)
                        
                        if ((rbp_5 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_295, 0x4e).q), zmm3, 
                                    0x20), 
                                0x24)
                    else if ((rbp_5 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_295, 0x4e).q), zmm3, 
                                0x20), 
                            0x24)
                    
                    arg7 = zmm4
                    zmm1 = data_142ed6810
                    zmm2 = zmm1
                    zmm0 = _mm_and_ps(var_218, zmm1)
                    var_1e8 = zmm3
                else
                    zmm1 = _mm_add_epi32(zmm14, zmm14)
                    zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                    zmm1 = _mm_add_epi64(
                        _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1).q), arg8)
                    char rbp_4 = temp0_48.b
                    uint128_t var_1d8
                    
                    if ((rbp_4 & 1) != 0)
                        zmm4 = var_1d8
                        zmm4[0] = zx.d(*zmm1.q)
                        zmm3 = zmm4
                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                        
                        if ((rbp_4 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_1d8
                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                        
                        if ((rbp_4 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    
                    int32_t temp0_87[0x4] = _mm_add_epi64(zmm2, arg7)
                    
                    if ((rbp_4 & 4) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*temp0_87[0].q), zmm3, 0x30), 0x84)
                        
                        if ((rbp_4 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_87, 0x4e).q), zmm3, 
                                    0x20), 
                                0x24)
                    else if ((rbp_4 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_87, 0x4e).q), zmm3, 0x20), 
                            0x24)
                    
                    int32_t temp0_92[0x4] = __pcmpgtd_xmmdq_memdq(
                        __andps_xmmxud_memxud(zmm3, data_143442cd0), var_378_1)
                    var_1d8 = zmm3
                    int32_t var_238_1[0x4] = temp0_92 ^ data_142d3f800
                    
                    if (_mm_movemask_ps(temp0_92 & not.o(zmm9)) == 0)
                        arg5 = zmm14
                    else
                        zmm4 = (temp0_92 & not.o(temp0_49)) | (temp0_92 & zmm14)
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                        zmm12 = _mm_sub_epi32(zmm14, zmm1)
                        zmm5 = temp0_92 & not.o(_mm_cmpgt_epi32(zmm12, temp0_49) ^ zmm1)
                        arg6 = zmm9 & zmm5
                        uint32_t j_2 = _mm_movemask_ps(arg6)
                        
                        if (j_2 == 0)
                            arg5 = zmm4
                        else
                            zmm2 = zmm14
                            
                            do
                                zmm8 = zmm12
                                zmm3 = _mm_add_epi32(zmm12, zmm12)
                                arg5 = _mm_shuffle_epi32(zmm3, 0x4e)
                                zmm0 = _mm_cmpgt_epi32(zx.o(0), arg5)
                                zmm3 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3).q), 
                                    arg8)
                                char temp0_106 = _mm_movemask_ps(arg6)
                                uint128_t var_348
                                
                                if ((temp0_106 & 1) != 0)
                                    arg6.d = zx.d(*zmm3.q)
                                    zmm1 = arg6
                                    arg5 = _mm_unpacklo_epi32(arg5, zmm0.q)
                                    
                                    if ((temp0_106 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                else
                                    zmm1 = var_348
                                    arg5 = _mm_unpacklo_epi32(arg5, zmm0.q)
                                    
                                    if ((temp0_106 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                
                                int32_t temp0_112[0x4] = _mm_add_epi64(arg5, arg7)
                                
                                if ((temp0_106 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*temp0_112[0].q), zmm1, 0x30), 0x84)
                                    
                                    if ((temp0_106 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(temp0_112, 0x4e).q), zmm1, 
                                                0x20), 
                                            0x24)
                                else if ((temp0_106 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_112, 0x4e).q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                var_348 = zmm1
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_143442cd0), var_378_1) & zmm5
                                zmm0 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm3 & zmm9) != j_2)
                                    zmm0 = zmm3 ^ zmm5
                                
                                arg5 = (zmm3 & not.o(zmm4)) | (zmm2 & zmm3)
                                zmm12 = __psubd_xmmdq_memdq(zmm8, data_142d3f800)
                                zmm5 = _mm_cmpgt_epi32(zmm12, temp0_49) & not.o(zmm0)
                                arg6 = zmm5 & zmm9
                                j_2 = _mm_movemask_ps(arg6)
                                zmm2 = zmm8
                                zmm4 = arg5
                            while (j_2 != 0)
                    
                    zmm1 = var_238_1
                    uint32_t temp0_166 = _mm_movemask_ps(_mm_andnot_ps(zmm1, zmm9))
                    uint32_t j_3
                    
                    if (temp0_166 != 0)
                        arg5 &= zmm1
                        zmm8 = _mm_cmpeq_epi32(zmm8, zmm8)
                        zmm14 = _mm_add_epi32(zmm14, zmm8)
                        zmm5 = __pcmpgtd_xmmdq_memdq(zmm14, data_142d8f750) & (zmm1 ^ zmm8)
                        zmm1 = zmm5 & zmm9
                        j_3 = _mm_movemask_ps(zmm1)
                    
                    uint128_t var_248
                    
                    if (temp0_166 == 0 || j_3 == 0)
                        zmm2 = arg5
                        arg6 = var_248
                    else
                        arg6 = var_248
                        
                        do
                            zmm3 = _mm_add_epi32(zmm14, zmm14)
                            zmm2 = _mm_shuffle_epi32(zmm3, 0x4e)
                            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                            zmm3 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3)[0].q), arg8)
                            char temp0_184 = _mm_movemask_ps(zmm1)
                            
                            if ((temp0_184 & 1) == 0)
                                zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                                
                                if ((temp0_184 & 2) != 0)
                                    goto label_14031ce85
                                
                                goto label_14031ceee
                            
                            arg6.d = zx.d(*zmm3.q)
                            zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                            
                            if ((temp0_184 & 2) != 0)
                            label_14031ce85:
                                arg6 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm3, 0x4e).q), arg6, 
                                        0), 
                                    arg6, 0xe2)
                                zmm2 = _mm_add_epi64(zmm2, arg7)
                                
                                if ((temp0_184 & 4) == 0)
                                    goto label_14031cef7
                                
                                goto label_14031cea1
                            
                        label_14031ceee:
                            zmm2 = _mm_add_epi64(zmm2, arg7)
                            
                            if ((temp0_184 & 4) != 0)
                            label_14031cea1:
                                arg6 = _mm_shuffle_ps(arg6, 
                                    _mm_shuffle_ps(zx.o(*zmm2[0].q), arg6, 0x30), 0x84)
                                
                                if ((temp0_184 & 8) != 0)
                                    arg6 = _mm_shuffle_ps(arg6, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                            arg6, 0x20), 
                                        0x24)
                            else
                            label_14031cef7:
                                
                                if ((temp0_184 & 8) != 0)
                                    arg6 = _mm_shuffle_ps(arg6, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                            arg6, 0x20), 
                                        0x24)
                            
                            zmm1 = __pcmpgtd_xmmdq_memdq(
                                __andps_xmmxud_memxud(arg6, data_143442cd0), var_378_1) & not.o(zmm5)
                            zmm4 = zx.o(0)
                            
                            if (_mm_movemask_ps(zmm1 & zmm9) != j_3)
                                zmm4 = zmm1 ^ zmm5
                            
                            zmm2 = (zmm1 & not.o(arg5)) | (zmm1 & zmm14)
                            zmm14 = _mm_add_epi32(zmm14, zmm8)
                            zmm5 = _mm_cmpgt_epi32(zmm14, zx.o(0)) & zmm4
                            zmm1 = zmm5 & zmm9
                            j_3 = _mm_movemask_ps(zmm1)
                            arg5 = zmm2
                        while (j_3 != 0)
                    
                    zmm1 = (zmm2 & zmm9) | (var_2b8_1 & var_278_1)
                    zmm5 = zmm1
                    zmm1 = _mm_add_epi32(zmm1, zmm1)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    int32_t temp0_198[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    zmm1 = _mm_add_epi64(
                        _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1).q), arg8)
                    var_248 = arg6
                    int32_t temp0_202[0x4] = _mm_cmpeq_epi32(arg5, arg5)
                    uint128_t var_228
                    
                    if ((rbp_4 & 1) != 0)
                        zmm4 = var_228
                        zmm4[0] = zx.d(*zmm1.q)
                        zmm3 = zmm4
                    else
                        zmm3 = var_228
                    
                    zmm8 = var_258_1
                    zmm12 = var_308_1
                    zmm14 = var_318_1
                    zmm0 = _mm_unpacklo_epi32(zmm0, temp0_198[0].q)
                    
                    if ((rbp_4 & 2) == 0)
                        zmm0 = _mm_add_epi64(zmm0, arg7)
                        
                        if ((rbp_4 & 4) != 0)
                            goto label_14031d140
                        
                        goto label_14031d044
                    
                    zmm3 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), zmm3, 0xe2)
                    zmm0 = _mm_add_epi64(zmm0, arg7)
                    
                    if ((rbp_4 & 4) == 0)
                    label_14031d044:
                        
                        if ((rbp_4 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else
                    label_14031d140:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm0.q), zmm3, 0x30), 0x84)
                        
                        if ((rbp_4 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    
                    zmm2 = (_mm_sub_epi32(zmm5, temp0_202) & zmm9) | (var_2a8_1 & var_278_1)
                    zmm0 = _mm_cmpgt_epi32(zmm2, temp0_49) & zmm9
                    var_228 = zmm3
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm2 = (temp0_49 & zmm0) | (zmm0 & not.o(zmm2))
                    
                    arg9 = zmm5
                    int32_t temp0_211[0x4] = _mm_add_epi32(zmm2, zmm2)
                    zmm0 = _mm_shuffle_epi32(temp0_211, 0x4e)
                    zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    arg8 = _mm_add_epi64(arg8, 
                        _mm_unpacklo_epi32(temp0_211, _mm_cmpgt_epi32(zx.o(0), temp0_211).q))
                    uint128_t var_1f8
                    
                    if ((rbp_4 & 1) != 0)
                        zmm3.d = zx.o(*arg8[0].q)[0]
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                        
                        if ((rbp_4 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg8, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_1f8
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                        
                        if ((rbp_4 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg8, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    
                    int32_t temp0_228[0x4] = _mm_add_epi64(arg7, zmm0)
                    
                    if ((rbp_4 & 4) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*temp0_228[0].q), zmm3, 0x30), 0x84)
                        
                        if ((rbp_4 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_228, 0x4e).q), zmm3, 
                                    0x20), 
                                0x24)
                    else if ((rbp_4 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_228, 0x4e).q), zmm3, 
                                0x20), 
                            0x24)
                    
                    arg7 = zmm2
                    zmm1 = data_143442cd0
                    zmm2 = zmm1
                    zmm0 = _mm_and_ps(var_228, zmm1)
                    var_1f8 = zmm3
                
                zmm1 = _mm_and_ps(zmm3, zmm2)
                zmm2 = zx.o(0)
                
                if (arg13 != 1)
                    zmm1 = _mm_sub_epi32(zmm1, zmm0)
                    zmm2 = data_142d3f5b0
                    zmm3 = _mm_cmpgt_epi32(zmm1, zmm2)
                    zmm3 = (zmm3 & not.o(zmm2)) | (zmm1 & zmm3)
                    zmm2 = _mm_div_ps(_mm_sub_ps(var_1c8_1, _mm_cvtepi32_ps(zmm0)), 
                        _mm_cvtepi32_ps(zmm3))
                
                zmm9 = _mm_and_ps(zmm9, zmm2)
        
        zmm11 = __pcmpgtd_xmmdq_memdq(temp0_38, data_142d3f5b0) & var_198_1
        arg8 = zx.o(0)
        zmm0 = _mm_unpackhi_epi32(zmm11, arg8[0].q)
        int32_t temp0_310[0x4] = _mm_unpacklo_epi32(zmm11, arg8[0].q)
        int32_t temp0_316[0x4] = _mm_unpacklo_epi32(
            _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(arg9, var_2e8_1), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg9, 0xf5), zmm14), 0xe8).q)
        zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_316)
        zmm4 = _mm_shuffle_epi32(temp0_316, 0x4e)
        int32_t temp0_319[0x4] = _mm_unpacklo_epi32(temp0_316, zmm1.q)
        zmm4 = _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q)
        
        if (r10.d u< 2)
            zmm1 = _mm_add_epi64(temp0_310, zmm12)
            zmm3 = _mm_add_epi64(_mm_add_epi64(zmm0, zmm8), zmm4)
            zmm1 = _mm_add_epi64(zmm1, temp0_319)
            int64_t rax_79 = zmm1.q
            int64_t rcx_9 = _mm_shuffle_epi32(zmm1, 0x4e).q
            int64_t rbp_7 = zmm3.q
            int64_t rbx_27 = _mm_shuffle_epi32(zmm3, 0x4e).q
            zmm1 = *(arg10 + rax_79 + 4)
            zmm14 = _mm_unpacklo_epi32(zx.o(*(arg10 + rax_79)), zx.o(*(arg10 + rcx_9))[0].q)
            zmm1 = _mm_unpacklo_ps(zmm1, (*(arg10 + rcx_9 + 4))[0].q)
            zmm3 = *(arg10 + rbp_7 + 4)
            zmm14 = _mm_unpacklo_epi64(zmm14, 
                _mm_unpacklo_epi32(zx.o(*(arg10 + rbp_7)), zx.o(*(arg10 + rbx_27))[0].q)[0].q)
            zmm1 = zmm1.q | _mm_unpacklo_ps(zmm3, (*(arg10 + rbx_27 + 4))[0].q).q << 0x40
            float temp0_372[0x4] =
                _mm_unpacklo_ps(*(arg10 + rax_79 + 8), (*(arg10 + rcx_9 + 8))[0].q)
            zmm3 = *(arg10 + rbx_27 + 8)
            zmm2 = _mm_unpacklo_ps(*(arg10 + rbp_7 + 8), zmm3.q)
            arg8 = temp0_372[0].q | zmm2[0].q << 0x40
            arg6 = var_338.o
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
        else if (r10.d == 2)
            zmm1 = _mm_add_epi64(temp0_310, zmm12)
            zmm3 = _mm_add_epi64(_mm_add_epi64(zmm0, zmm8), zmm4)
            zmm1 = _mm_add_epi64(zmm1, temp0_319)
            int64_t rbx_28 = zmm1.q
            int64_t rbp_8 = _mm_shuffle_epi32(zmm1, 0x4e).q
            int64_t rax_80 = zmm3.q
            int64_t rcx_10 = _mm_shuffle_epi32(zmm3, 0x4e).q
            zmm3 = zx.o(0)
            zmm1 = _mm_unpacklo_epi16(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg10 + rbx_28)), *(arg10 + rbp_8), 1), 
                        *(arg10 + rax_80), 2), 
                    *(arg10 + rcx_10), 3), 
                0)
            zmm2 = data_1434424d0
            zmm4 = zmm2
            uint128_t temp0_385 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm2))
            zmm1 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg10 + rbx_28 + 2)), *(arg10 + rbp_8 + 2), 1), 
                    *(arg10 + rax_80 + 2), 2), 
                *(arg10 + rcx_10 + 2), 3)
            zmm2 = data_1434426d0
            zmm14 = _mm_div_ps(temp0_385, zmm2)
            zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm1, 0), zmm4))
            int32_t temp0_395[0x4] = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg10 + rbx_28 + 4)), *(arg10 + rbp_8 + 4), 1), 
                    *(arg10 + rax_80 + 4), 2), 
                *(arg10 + rcx_10 + 4), 3)
            zmm1 = _mm_div_ps(zmm1, zmm2)
            float temp0_400[0x4] = _mm_div_ps(
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(temp0_395, 0), zmm4)), zmm2)
            zmm2 = data_143442710
            zmm14 = _mm_mul_ps(zmm14, zmm2)
            zmm1 = _mm_mul_ps(zmm1, zmm2)
            arg8 = _mm_mul_ps(temp0_400, zmm2)
            arg6 = var_338.o
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
        else
            zmm1 = zx.o(0)
            zmm14 = zx.o(0)
            arg6 = var_338.o
            zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
            
            if (r10.d == 3)
                zmm3 = *(arg10 + r9 + 4)
                zmm5 = _mm_unpacklo_ps(*(arg10 + r14_1), (*(arg10 + r9)).q)
                arg6 = _mm_unpacklo_ps(*(arg10 + r14_1 + 4), zmm3.q)
                int32_t var_2b8_2[0x4] = arg9
                arg8 = zmm8
                arg5 = *(arg10 + rdi_1 + 4)
                arg9 = arg7
                arg7 =
                    _mm_unpacklo_ps(*(arg10 + rsi_1), (*(arg10 + rdi_1)).q)[0].q | zmm5[0].q << 0x40
                zmm8 = _mm_unpacklo_ps(*(arg10 + rsi_1 + 4), arg5[0].q).q | arg6.q << 0x40
                zmm12 = _mm_unpacklo_ps(*(arg10 + rsi_1 + 8), (*(arg10 + rdi_1 + 8)).q).q
                    | _mm_unpacklo_ps(*(arg10 + r14_1 + 8), (*(arg10 + r9 + 8))[0].q).q << 0x40
                arg6 = _mm_unpacklo_ps(*(arg10 + rsi_1 + 0xc), (*(arg10 + rdi_1 + 0xc)).q).q
                    | _mm_unpacklo_ps(*(arg10 + r14_1 + 0xc), (*(arg10 + r9 + 0xc))[0].q).q << 0x40
                zmm3 = _mm_unpacklo_ps(*(arg10 + rsi_1 + 0x10), (*(arg10 + rdi_1 + 0x10))[0].q).q
                    | _mm_unpacklo_ps(*(arg10 + r14_1 + 0x10), (*(arg10 + r9 + 0x10))[0].q)[0].q
                    << 0x40
                zmm5 = _mm_unpacklo_ps(*(arg10 + rsi_1 + 0x14), (*(arg10 + rdi_1 + 0x14))[0].q)
                arg5 = _mm_unpacklo_ps(*(arg10 + r14_1 + 0x14), (*(arg10 + r9 + 0x14)).q)
                zmm5 = zmm5[0].q | arg5[0].q << 0x40
                zmm1 = _mm_add_epi64(_mm_add_epi64(zmm0, arg8), zmm4)
                zmm4 = _mm_add_epi64(__paddq_xmmdq_memdq(temp0_310, var_308_1), temp0_319)
                int64_t rax_78 = zmm4[0].q
                int64_t rcx_8 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                int64_t rbx_26 = _mm_shuffle_epi32(zmm1, 0x4e).q
                zmm1 = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(zx.o(*(arg10 + rax_78)), zx.o(*(arg10 + rcx_8))[0].q), 
                    _mm_unpacklo_epi32(zx.o(*(arg10 + zmm1.q)), zx.o(*(arg10 + rbx_26))[0].q)[0].q)
                zmm2 = zmm1
                zmm14 = _mm_mul_ps(
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm1 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0), 
                    arg6)
                arg6 = var_338.o
                zmm14 = _mm_add_ps(zmm14, arg7)
                arg7 = arg9
                zmm4 = _mm_srli_epi32(zmm1, 0xa) & data_143442480
                zmm1 = data_143442440
                arg5 = zmm1
                zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm1))
                zmm4 = data_143442690
                zmm1 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(zmm1, zmm4), zmm3), zmm8)
                zmm8 = arg8
                arg9 = var_2b8_2
                arg8 = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm2, 0x15), arg5)), 
                            zmm4), 
                        zmm5), 
                    zmm12)
                zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
        
        zmm5 = _mm_cmpeq_epi32(arg9, arg7) ^ zmm3
        char temp0_406 = _mm_movemask_ps(zmm5)
        var_338.o = arg6
        
        if (temp0_406 == 0)
            zmm11 = var_2f8_1
        else
            int32_t var_2b8_3[0x4] = arg9
            float var_368[0x4]
            int32_t var_358[0x4]
            uint128_t var_328
            int64_t rcx_13
            int64_t rbp_21
            int64_t rsi_9
            int64_t rdi_9
            uint64_t rbp_20
            
            if (r10.d u> 6)
            label_14031e108:
                rbp_20 = zx.q(temp0_406)
                rsi_9 = rbp_20 & 1
                
                if (rsi_9 == 0)
                    zmm5 = var_358
                    zmm3 = var_328
                    zmm4 = var_368
                    zmm11 = var_2f8_1
                    
                    if (rsi_9 != 0)
                        zmm3.d = 0
                else
                    zmm5 = var_358
                    zmm5[0] = 0
                    zmm3 = var_328
                    zmm4 = var_368
                    zmm11 = var_2f8_1
                    
                    if (rsi_9 != 0)
                        zmm3.d = 0
                
                bool cond:49_1
                bool cond:50_1
                bool cond:51_1
                bool cond:52_1
                
                if (rsi_9 != 0)
                label_14031e535:
                    zmm4[0] = 0
                    rcx_13 = rbp_20 & 2
                    cond:49_1 = rcx_13 == 0
                    cond:50_1 = rcx_13 != 0
                    cond:51_1 = rcx_13 == 0
                    cond:52_1 = rcx_13 != 0
                    
                    if (rcx_13 != 0)
                        goto label_14031e5f6
                    
                    goto label_14031e546
                
            label_14031e5e1:
                rcx_13 = rbp_20 & 2
                cond:49_1 = rcx_13 == 0
                cond:50_1 = rcx_13 != 0
                cond:51_1 = rcx_13 == 0
                cond:52_1 = rcx_13 != 0
                
                if (rcx_13 == 0)
                label_14031e546:
                    
                    if (not(cond:49_1))
                    label_14031e557:
                        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm3, 0), zmm3, 0xe2)
                        
                        if (cond:52_1)
                            goto label_14031e610
                        
                        goto label_14031e563
                else
                label_14031e5f6:
                    zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm5, 0), zmm5, 0xe2)
                    
                    if (cond:50_1)
                        goto label_14031e557
                
                bool cond:76_1
                bool cond:77_1
                bool cond:82_1
                bool cond:83_1
                
                if (not(cond:51_1))
                label_14031e610:
                    zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm4, 0), zmm4, 0xe2)
                    rdi_9 = rbp_20 & 4
                    cond:76_1 = rdi_9 == 0
                    cond:77_1 = rdi_9 != 0
                    cond:82_1 = rdi_9 == 0
                    cond:83_1 = rdi_9 != 0
                    
                    if (rdi_9 != 0)
                        goto label_14031e574
                    
                    goto label_14031e620
                
            label_14031e563:
                rdi_9 = rbp_20 & 4
                cond:76_1 = rdi_9 == 0
                cond:77_1 = rdi_9 != 0
                cond:82_1 = rdi_9 == 0
                cond:83_1 = rdi_9 != 0
                
                if (rdi_9 == 0)
                label_14031e620:
                    
                    if (not(cond:76_1))
                    label_14031e62d:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x30), 0x84)
                        
                        if (cond:83_1)
                            goto label_14031e58b
                        
                        goto label_14031e637
                else
                label_14031e574:
                    zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zx.o(0), zmm5, 0x30), 0x84)
                    
                    if (cond:77_1)
                        goto label_14031e62d
                
                bool cond:105_1
                bool cond:106_1
                bool cond:107_1
                bool cond:108_1
                
                if (not(cond:82_1))
                label_14031e58b:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(0), zmm4, 0x30), 0x84)
                    rbp_21 = rbp_20 & 8
                    cond:105_1 = rbp_21 == 0
                    cond:106_1 = rbp_21 != 0
                    cond:107_1 = rbp_21 == 0
                    cond:108_1 = rbp_21 == 0
                    
                    if (rbp_21 != 0)
                        goto label_14031e648
                    
                    goto label_14031e599
                
            label_14031e637:
                rbp_21 = rbp_20 & 8
                cond:105_1 = rbp_21 == 0
                cond:106_1 = rbp_21 != 0
                cond:107_1 = rbp_21 == 0
                cond:108_1 = rbp_21 == 0
                
                if (rbp_21 != 0)
                label_14031e648:
                    zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zx.o(0), zmm5, 0x20), 0x24)
                    
                    if (cond:106_1)
                        goto label_14031e5a6
                    
                    goto label_14031e652
                
            label_14031e599:
                
                if (cond:105_1)
                label_14031e652:
                    
                    if (not(cond:107_1))
                    label_14031e654:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(0), zmm4, 0x20), 0x24)
                else
                label_14031e5a6:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x20), 0x24)
                    
                    if (not(cond:108_1))
                        goto label_14031e654
            else
                int32_t temp0_412[0x4] = _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(arg7, var_2e8_1), 0xe8), 
                    _mm_shuffle_epi32(
                        __pmuludq_xmmdq_memdq(_mm_shuffle_epi32(arg7, 0xf5), var_318_1), 0xe8)[0].q)
                int32_t temp0_413[0x4] = _mm_cmpgt_epi32(zx.o(0), temp0_412)
                arg6 = _mm_shuffle_epi32(temp0_412, 0x4e)
                int32_t temp0_415[0x4] = _mm_unpacklo_epi32(temp0_412, temp0_413[0].q)
                arg6 = _mm_unpacklo_epi32(arg6, _mm_cmpgt_epi32(zx.o(0), arg6)[0].q)
                
                switch (r10.d)
                    case 0, 1
                        zmm12 = arg7
                        int32_t temp0_418[0x4] = __paddq_xmmdq_memdq(temp0_310, var_308_1)
                        zmm0 = _mm_add_epi64(_mm_add_epi64(zmm0, zmm8), arg6)
                        int32_t temp0_421[0x4] = _mm_add_epi64(temp0_418, temp0_415)
                        float temp0_422[0x4] = _mm_shuffle_epi32(zmm5, 0x50)
                        zmm11 = temp0_421 & temp0_422
                        zmm5 = _mm_shuffle_epi32(zmm5, 0xfa)
                        zmm0 &= zmm5
                        int64_t rbp_9 = _mm_shuffle_epi32(zmm11, 0x4e)[0].q
                        void* rax_84 = arg10 + rbp_9
                        zmm2 = *(arg10 + rbp_9)
                        int64_t rbx_30 = zmm0.q
                        void* rbp_10 = arg10 + rbx_30
                        uint128_t var_298_2 = *(arg10 + rbx_30)
                        int64_t rbx_31 = _mm_shuffle_epi32(zmm0, 0x4e).q
                        void* rdi_4 = arg10 + rbx_31
                        uint128_t var_308_2 = *(arg10 + rbx_31)
                        zmm3 = data_1434426c0
                        zmm0 = temp0_422 & zmm3
                        arg5 = zmm5 & zmm3
                        void* rbx_33 = zmm11[0].q + arg10
                        arg7 = *(zmm0.q + rbx_33)
                        zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rax_84)
                        arg9 = *(arg5[0].q + rbp_10)
                        zmm8 = *(_mm_shuffle_epi32(arg5, 0x4e)[0].q + rdi_4)
                        arg5 = data_1434426e0
                        zmm4 = temp0_422 & arg5
                        zmm5 &= arg5
                        arg5 = *(zmm4[0].q + rbx_33)
                        zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rax_84)
                        zmm11 = *(zmm5[0].q + rbp_10)
                        uint128_t var_318_2 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rdi_4)
                        uint64_t rbp_11 = zx.q(temp0_406)
                        rsi_9 = rbp_11 & 1
                        bool cond:36_1
                        bool cond:37_1
                        
                        if (rsi_9 == 0)
                            zmm5 = var_358
                            cond:36_1 = rsi_9 != 0
                            cond:37_1 = rsi_9 == 0
                            
                            if (rsi_9 != 0)
                                goto label_14031e1a9
                            
                            goto label_14031dc22
                        
                        zmm3 = zmm8
                        zmm8.d = (*rbx_33)[0]
                        zmm5 = zmm8
                        zmm8 = zmm3
                        cond:36_1 = rsi_9 != 0
                        cond:37_1 = rsi_9 == 0
                        
                        if (rsi_9 == 0)
                        label_14031dc22:
                            zmm3 = var_328
                            arg7 = zmm12
                            
                            if (cond:36_1)
                                arg6.d = arg5[0]
                                var_368 = arg6
                        else
                        label_14031e1a9:
                            zmm3.d = arg7[0]
                            arg7 = zmm12
                            
                            if (not(cond:37_1))
                                arg6.d = arg5[0]
                                var_368 = arg6
                        
                        rcx_13 = rbp_11 & 2
                        
                        if (rcx_13 != 0)
                            zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm5, 0), zmm5, 0xe2)
                            
                            if (rcx_13 != 0)
                                goto label_14031e20a
                        else if (rcx_13 != 0)
                        label_14031e20a:
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm3, 0), zmm3, 0xe2)
                            
                            if (rcx_13 != 0)
                                goto label_14031e1db
                            
                            goto label_14031e20f
                        
                        bool cond:84_1
                        bool cond:95_1
                        bool cond:96_1
                        
                        if (rcx_13 == 0)
                        label_14031e20f:
                            zmm4 = var_368
                            rdi_9 = rbp_11 & 4
                            cond:84_1 = rdi_9 == 0
                            cond:95_1 = rdi_9 == 0
                            cond:96_1 = rdi_9 != 0
                            
                            if (rdi_9 != 0)
                                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(var_298_2, zmm5, 0x30), 
                                    0x84)
                        else
                        label_14031e1db:
                            zmm0 = var_368
                            zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm0, 0), zmm0, 0xe2)
                            rdi_9 = rbp_11 & 4
                            cond:84_1 = rdi_9 == 0
                            cond:95_1 = rdi_9 == 0
                            cond:96_1 = rdi_9 != 0
                            
                            if (rdi_9 != 0)
                                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(var_298_2, zmm5, 0x30), 
                                    0x84)
                        
                        if (not(cond:84_1))
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg9, zmm3, 0x30), 0x84)
                            
                            if (cond:96_1)
                                goto label_14031e277
                            
                            goto label_14031e23b
                        
                        bool cond:109_1
                        bool cond:110_1
                        bool cond:117_1
                        bool cond:118_1
                        
                        if (not(cond:95_1))
                        label_14031e277:
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm11, zmm4, 0x30), 0x84)
                            zmm11 = var_2f8_1
                            rbp_21 = rbp_11 & 8
                            cond:109_1 = rbp_21 == 0
                            cond:110_1 = rbp_21 != 0
                            cond:117_1 = rbp_21 != 0
                            cond:118_1 = rbp_21 == 0
                            
                            if (rbp_21 != 0)
                                goto label_14031e254
                            
                            goto label_14031e28c
                        
                    label_14031e23b:
                        zmm11 = var_2f8_1
                        rbp_21 = rbp_11 & 8
                        cond:109_1 = rbp_21 == 0
                        cond:110_1 = rbp_21 != 0
                        cond:117_1 = rbp_21 != 0
                        cond:118_1 = rbp_21 == 0
                        
                        if (rbp_21 != 0)
                        label_14031e254:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(var_308_2, zmm5, 0x20), 0x24)
                            
                            if (cond:110_1)
                                goto label_14031e293
                            
                            goto label_14031e25a
                        
                    label_14031e28c:
                        
                        if (cond:109_1)
                        label_14031e25a:
                            
                            if (cond:117_1)
                            label_14031e29e:
                                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(var_318_2, zmm4, 0x20), 
                                    0x24)
                        else
                        label_14031e293:
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x20), 0x24)
                            
                            if (not(cond:118_1))
                                goto label_14031e29e
                    case 2
                        int32_t var_2a8_2[0x4] = arg7
                        int32_t temp0_430[0x4] = __paddq_xmmdq_memdq(temp0_310, var_308_1)
                        zmm0 = _mm_add_epi64(_mm_add_epi64(zmm0, zmm8), arg6)
                        int32_t temp0_433[0x4] = _mm_add_epi64(temp0_430, temp0_415)
                        float temp0_434[0x4] = _mm_shuffle_epi32(zmm5, 0x50)
                        zmm11 = temp0_433 & temp0_434
                        zmm2 = _mm_shuffle_epi32(zmm5, 0xfa)
                        zmm0 &= zmm2
                        int64_t r9_1 = zmm11[0].q
                        void* rbx_34 = arg10 + r9_1
                        int64_t rbp_12 = _mm_shuffle_epi32(zmm11, 0x4e).q
                        void* rsi_10 = arg10 + rbp_12
                        int64_t rdi_5 = zmm0.q
                        arg7 = data_1434426b0
                        zmm3 = temp0_434 & arg7
                        void* rax_87 = zmm3.q
                        int16_t* rax_89 = _mm_shuffle_epi32(zmm3, 0x4e).q
                        zmm3 = data_1434426c0
                        arg6 = zmm3
                        zmm4 = temp0_434 & zmm3
                        int32_t temp0_438[0x4] = __pinsrw_xmmdq_memw_immb(zx.o(*(rax_87 + rbx_34)), 
                            *(rax_89 + rsi_10), 1)
                        uint32_t rax_91 = zx.d(*(zmm4[0].q + rbx_34))
                        void* rbx_35 = arg10 + rdi_5
                        zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                        int32_t temp0_441[0x4] = __pinsrw_xmmdq_memw_immb(zx.o(rax_91), 
                            *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rsi_10), 1)
                        zmm3 = zmm2 & arg7
                        zmm2 &= arg6
                        int16_t* rsi_11 = zmm2[0].q
                        int32_t temp0_442[0x4] =
                            __pinsrw_xmmdq_memw_immb(temp0_438, *(zmm3.q + rbx_35), 2)
                        int32_t temp0_443[0x4] =
                            __pinsrw_xmmdq_memw_immb(temp0_441, *(rsi_11 + rbx_35), 2)
                        int64_t rax_94 = zmm0.q
                        void* rsi_12 = arg10 + rax_94
                        int16_t* rbx_36 = _mm_shuffle_epi32(zmm3, 0x4e).q
                        zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                        int32_t temp0_446[0x4] =
                            __pinsrw_xmmdq_memw_immb(temp0_442, *(rbx_36 + rsi_12), 3)
                        int32_t temp0_447[0x4] =
                            __pinsrw_xmmdq_memw_immb(temp0_443, *(zmm0.q + rsi_12), 3)
                        zmm0 = _mm_unpacklo_epi16(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg10 + r9_1)), 
                                        *(arg10 + rbp_12), 1), 
                                    *(arg10 + rdi_5), 2), 
                                *(arg10 + rax_94), 3), 
                            0)
                        zmm2 = data_1434424d0
                        arg6 = zmm2
                        float temp0_453[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm2))
                        zmm0 = data_1434426d0
                        float temp0_454[0x4] = _mm_div_ps(temp0_453, zmm0)
                        zmm2 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(temp0_446, 0), zmm2)), 
                            zmm0)
                        zmm0 =
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(temp0_447, 0), arg6))
                        float temp0_462[0x4] = __mulps_xmmps_memps(temp0_454, data_143442710)
                        uint64_t rbp_13 = zx.q(temp0_406)
                        rsi_9 = rbp_13 & 1
                        
                        if (rsi_9 == 0)
                            zmm5 = var_358
                        else
                            zmm5 = var_358
                            zmm5[0] = temp0_462[0]
                        
                        zmm3 = var_328
                        zmm11 = var_2f8_1
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426d0)
                        zmm2 = __mulps_xmmps_memps(zmm2, data_143442710)
                        arg7 = var_2a8_2
                        
                        if (rsi_9 != 0)
                            zmm3.d = zmm2[0]
                            zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                            
                            if (rsi_9 != 0)
                                goto label_14031e3a9
                            
                            goto label_14031e311
                        
                        zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                        bool cond:55_1
                        bool cond:56_1
                        bool cond:66_1
                        bool cond:67_1
                        
                        if (rsi_9 != 0)
                        label_14031e3a9:
                            arg5 = var_368
                            arg5[0] = zmm0.d
                            var_368 = arg5
                            arg5 = zmm3
                            rcx_13 = rbp_13 & 2
                            cond:55_1 = rcx_13 == 0
                            cond:56_1 = rcx_13 != 0
                            cond:66_1 = rcx_13 == 0
                            cond:67_1 = rcx_13 != 0
                            
                            if (rcx_13 != 0)
                                goto label_14031e329
                            
                            goto label_14031e3c7
                        
                    label_14031e311:
                        arg5 = zmm3
                        rcx_13 = rbp_13 & 2
                        cond:55_1 = rcx_13 == 0
                        cond:56_1 = rcx_13 != 0
                        cond:66_1 = rcx_13 == 0
                        cond:67_1 = rcx_13 != 0
                        
                        if (rcx_13 == 0)
                        label_14031e3c7:
                            
                            if (not(cond:55_1))
                            label_14031e3d8:
                                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg5, 1), arg5, 0xe2)
                                
                                if (cond:67_1)
                                    goto label_14031e33b
                                
                                goto label_14031e3e4
                        else
                        label_14031e329:
                            zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_462, zmm5, 1), zmm5, 0xe2)
                            
                            if (cond:56_1)
                                goto label_14031e3d8
                        
                        bool cond:85_1
                        bool cond:97_1
                        bool cond:98_1
                        bool cond:86_1
                        
                        if (cond:66_1)
                        label_14031e3e4:
                            rdi_9 = rbp_13 & 4
                            cond:85_1 = rdi_9 == 0
                            cond:86_1 = rdi_9 != 0
                            cond:97_1 = rdi_9 == 0
                            cond:98_1 = rdi_9 != 0
                            
                            if (rdi_9 != 0)
                            label_14031e3f5:
                                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(temp0_462, zmm5, 0x32), 
                                    0x84)
                                
                                if (cond:86_1)
                                    goto label_14031e36b
                                
                                goto label_14031e3ff
                        else
                        label_14031e33b:
                            arg6 = var_368
                            var_368 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg6, 1), arg6, 0xe2)
                            rdi_9 = rbp_13 & 4
                            cond:85_1 = rdi_9 == 0
                            cond:86_1 = rdi_9 != 0
                            cond:97_1 = rdi_9 == 0
                            cond:98_1 = rdi_9 != 0
                            
                            if (rdi_9 != 0)
                                goto label_14031e3f5
                        
                        if (not(cond:85_1))
                        label_14031e36b:
                            zmm3 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm2, arg5, 0x32), 0x84)
                            
                            if (cond:98_1)
                                goto label_14031e40e
                            
                            goto label_14031e374
                        
                    label_14031e3ff:
                        zmm3 = arg5
                        bool cond:111_1
                        bool cond:112_1
                        bool cond:119_1
                        bool cond:120_1
                        
                        if (not(cond:97_1))
                        label_14031e40e:
                            arg6 = var_368
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm0, arg6, 0x32), 0x84)
                            var_368 = arg6
                            rbp_21 = rbp_13 & 8
                            cond:111_1 = rbp_21 == 0
                            cond:112_1 = rbp_21 != 0
                            cond:119_1 = rbp_21 == 0
                            cond:120_1 = rbp_21 == 0
                            
                            if (rbp_21 != 0)
                                goto label_14031e382
                            
                            goto label_14031e42d
                        
                    label_14031e374:
                        rbp_21 = rbp_13 & 8
                        cond:111_1 = rbp_21 == 0
                        cond:112_1 = rbp_21 != 0
                        cond:119_1 = rbp_21 == 0
                        cond:120_1 = rbp_21 == 0
                        
                        if (rbp_21 != 0)
                        label_14031e382:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(temp0_462, zmm5, 0x23), 0x24)
                            zmm4 = var_368
                            
                            if (cond:112_1)
                                goto label_14031e43c
                            
                            goto label_14031e391
                        
                    label_14031e42d:
                        zmm4 = var_368
                        
                        if (cond:111_1)
                        label_14031e391:
                            
                            if (not(cond:119_1))
                                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm0, zmm4, 0x23), 0x24)
                        else
                        label_14031e43c:
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm2, zmm3, 0x23), 0x24)
                            
                            if (not(cond:120_1))
                                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm0, zmm4, 0x23), 0x24)
                    case 3
                        int32_t var_2a8_3[0x4] = arg7
                        zmm3 = var_298_1 & zmm5
                        int64_t rax_96 = sx.q(zmm3.d)
                        void* rbp_14 = arg10 + rax_96
                        zmm4 = *(arg10 + rax_96)
                        int64_t rax_98 = sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
                        void* rdi_6 = arg10 + rax_98
                        float temp0_464[0x4] = _mm_unpacklo_ps(zmm4, (*(arg10 + rax_98))[0].q)
                        int64_t rax_100 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
                        void* rsi_14 = arg10 + rax_100
                        zmm2 = *(arg10 + rax_100)
                        int64_t rbx_39 = sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
                        void* rax_102 = arg10 + rbx_39
                        zmm2 = _mm_unpacklo_ps(zmm2, (*(arg10 + rbx_39)).q)
                        float var_298_3[0x4] = temp0_464[0].q | zmm2[0].q << 0x40
                        zmm2 = zmm5 & data_142fc95e0
                        int32_t var_318_3[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rbp_14), 
                            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rdi_6))[0].q).q |
                            _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rsi_14), 
                            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rax_102))[0].q)[0].q << 0x40
                        zmm2 = zmm5 & data_142fc95f0
                        arg7 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rbp_14), 
                            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rdi_6))[0].q)
                        uint128_t var_278_2 = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rsi_14), 
                            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rax_102))[0].q)
                        zmm4 = zmm5 & data_143442650
                        zmm2 = _mm_unpacklo_ps(*(zx.q(zmm4[0]) + rbp_14), 
                            (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe5).d) + rdi_6)).q)
                        zmm3 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm4, 0x4e).d) + rsi_14), 
                            (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + rax_102))[0].q)
                        zmm2 = zmm2[0].q | zmm3.q << 0x40
                        zmm3 = zmm5 & data_143442660
                        zmm12 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rbp_14), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdi_6))[0].q).q |
                            _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_14), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rax_102)).q)[0].q << 0x40
                        zmm3 = zmm5 & data_143442670
                        float temp0_489[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rbp_14), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdi_6))[0].q)
                        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_14), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rax_102)).q)
                        zmm4 = temp0_489[0].q | arg5[0].q << 0x40
                        int32_t temp0_493[0x4] = __paddq_xmmdq_memdq(temp0_310, var_308_1)
                        zmm0 = _mm_add_epi64(_mm_add_epi64(zmm0, zmm8), arg6)
                        int32_t temp0_496[0x4] = _mm_add_epi64(temp0_493, temp0_415)
                        zmm3 = _mm_shuffle_epi32(zmm5, 0x50) & temp0_496
                        zmm5 = _mm_shuffle_epi32(zmm5, 0xfa) & zmm0
                        int64_t rbp_18 = _mm_shuffle_epi32(zmm3, 0x4e).q
                        int64_t rbx_57 = zmm5[0].q
                        int64_t rdi_7 = _mm_shuffle_epi32(zmm5, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg10 + zmm3.q)), zx.q(*(arg10 + rbp_18))), 
                            _mm_unpacklo_epi32(zx.o(*(arg10 + rbx_57)), zx.o(*(arg10 + rdi_7))[0].q)
                                .q)
                        zmm3 = zmm0
                        zmm5 = zmm0
                        zmm0 = __addps_xmmps_memps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                zmm2), 
                            var_298_3)
                        zmm5 = _mm_srli_epi32(zmm5, 0xa) & data_143442480
                        zmm2 = data_143442440
                        arg5 = zmm2
                        zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm5, zmm2))
                        zmm5 = data_143442690
                        arg6 = zmm5
                        zmm2 = _mm_mul_ps(_mm_div_ps(zmm2, zmm5), zmm12)
                        zmm5 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm3, 0x15), arg5)), arg6)
                        uint64_t rbp_19 = zx.q(temp0_406)
                        rsi_9 = rbp_19 & 1
                        
                        if (rsi_9 != 0)
                            zmm3.d = zmm0.d
                            var_358 = zmm3
                        
                        zmm3 = var_328
                        zmm11 = var_2f8_1
                        arg7 = __unpcklpd_xmmpd_memdq(arg7, var_278_2)
                        float temp0_519[0x4] = _mm_mul_ps(zmm4, zmm5)
                        arg5 = _mm_add_ps(var_318_3, zmm2)
                        
                        if (rsi_9 != 0)
                            zmm3.d = arg5[0]
                        
                        zmm5 = var_358
                        arg7 = _mm_add_ps(arg7, temp0_519)
                        bool cond:57_1
                        bool cond:68_1
                        bool cond:69_1
                        
                        if (rsi_9 == 0)
                            zmm4 = var_368
                            rcx_13 = rbp_19 & 2
                            cond:57_1 = rcx_13 == 0
                            cond:68_1 = rcx_13 == 0
                            cond:69_1 = rcx_13 != 0
                            
                            if (rcx_13 != 0)
                                zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm5, 1), zmm5, 0xe2)
                        else
                            zmm4 = var_368
                            zmm4[0] = arg7[0]
                            rcx_13 = rbp_19 & 2
                            cond:57_1 = rcx_13 == 0
                            cond:68_1 = rcx_13 == 0
                            cond:69_1 = rcx_13 != 0
                            
                            if (rcx_13 != 0)
                                zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm5, 1), zmm5, 0xe2)
                        
                        if (not(cond:57_1))
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm3, 1), zmm3, 0xe2)
                            
                            if (cond:69_1)
                                goto label_14031e4c3
                            
                            goto label_14031e480
                        
                        bool cond:87_1
                        bool cond:88_1
                        bool cond:99_1
                        bool cond:100_1
                        
                        if (not(cond:68_1))
                        label_14031e4c3:
                            zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm4, 1), zmm4, 0xe2)
                            rdi_9 = rbp_19 & 4
                            cond:87_1 = rdi_9 == 0
                            cond:88_1 = rdi_9 != 0
                            cond:99_1 = rdi_9 == 0
                            cond:100_1 = rdi_9 != 0
                            
                            if (rdi_9 != 0)
                                goto label_14031e48d
                            
                            goto label_14031e4cf
                        
                    label_14031e480:
                        rdi_9 = rbp_19 & 4
                        cond:87_1 = rdi_9 == 0
                        cond:88_1 = rdi_9 != 0
                        cond:99_1 = rdi_9 == 0
                        cond:100_1 = rdi_9 != 0
                        
                        if (rdi_9 == 0)
                        label_14031e4cf:
                            
                            if (not(cond:87_1))
                            label_14031e4d8:
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg5, zmm3, 0x32), 0x84)
                                
                                if (cond:100_1)
                                    goto label_14031e49d
                                
                                goto label_14031e4de
                        else
                        label_14031e48d:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm0, zmm5, 0x32), 0x84)
                            
                            if (cond:88_1)
                                goto label_14031e4d8
                        
                        bool cond:113_1
                        bool cond:114_1
                        bool cond:121_1
                        bool cond:122_1
                        
                        if (not(cond:99_1))
                        label_14031e49d:
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x32), 0x84)
                            rbp_21 = rbp_19 & 8
                            cond:113_1 = rbp_21 == 0
                            cond:114_1 = rbp_21 != 0
                            cond:121_1 = rbp_21 == 0
                            cond:122_1 = rbp_21 != 0
                            
                            if (rbp_21 != 0)
                                goto label_14031e4e8
                            
                            goto label_14031e4a7
                        
                    label_14031e4de:
                        rbp_21 = rbp_19 & 8
                        cond:113_1 = rbp_21 == 0
                        cond:114_1 = rbp_21 != 0
                        cond:121_1 = rbp_21 == 0
                        cond:122_1 = rbp_21 != 0
                        
                        if (rbp_21 != 0)
                        label_14031e4e8:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm0, zmm5, 0x23), 0x24)
                            
                            if (cond:114_1)
                                goto label_14031e4ad
                            
                            goto label_14031e4ee
                        
                    label_14031e4a7:
                        
                        if (cond:113_1)
                        label_14031e4ee:
                            
                            if (not(cond:121_1))
                                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x23), 0x24)
                        else
                        label_14031e4ad:
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg5, zmm3, 0x23), 0x24)
                            
                            if (cond:122_1)
                                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x23), 0x24)
                        
                        arg7 = var_2a8_3
                    case 4, 5
                        goto label_14031e108
                    case 6
                        rbp_20 = zx.q(temp0_406)
                        rsi_9 = rbp_20 & 1
                        
                        if (rsi_9 == 0)
                            zmm5 = var_358
                            zmm3 = var_328
                            zmm4 = var_368
                            zmm11 = var_2f8_1
                            
                            if (rsi_9 != 0)
                                zmm3.d = 0
                        else
                            zmm5 = var_358
                            zmm5[0] = 0
                            zmm3 = var_328
                            zmm4 = var_368
                            zmm11 = var_2f8_1
                            
                            if (rsi_9 != 0)
                                zmm3.d = 0
                        
                        if (rsi_9 != 0)
                            goto label_14031e535
                        
                        goto label_14031e5e1
            var_358 = zmm5
            arg5 = _mm_sub_ps(zmm5, zmm14)
            var_328 = zmm3
            zmm3 = _mm_sub_ps(zmm3, zmm1)
            arg5 = _mm_mul_ps(arg5, zmm9)
            zmm2 = zmm14
            
            if (rsi_9 != 0)
                zmm2 = zmm14
                zmm2[0] = zmm2[0] f+ arg5[0]
            
            var_368 = zmm4
            zmm5 = _mm_sub_ps(zmm4, arg8)
            zmm3 = _mm_mul_ps(zmm3, zmm9)
            zmm4 = zmm1
            
            if (rsi_9 != 0)
                zmm4 = zmm1
                zmm4[0] = zmm4[0] f+ zmm3.d
                zmm5 = _mm_mul_ps(zmm5, zmm9)
                zmm0 = arg8
                
                if (rsi_9 != 0)
                    goto label_14031c4e2
                
                goto label_14031e6b6
            
            zmm5 = _mm_mul_ps(zmm5, zmm9)
            zmm0 = arg8
            bool cond:130_1
            bool cond:131_1
            bool cond:132_1
            bool cond:133_1
            
            if (rsi_9 != 0)
            label_14031c4e2:
                zmm0.d = arg8.d f+ zmm5[0]
                zmm14 = _mm_add_ps(zmm14, arg5)
                cond:130_1 = rcx_13 == 0
                cond:131_1 = rcx_13 != 0
                cond:132_1 = rcx_13 == 0
                cond:133_1 = rcx_13 != 0
                
                if (rcx_13 != 0)
                    goto label_14031e6cf
                
                goto label_14031c4f3
            
        label_14031e6b6:
            zmm14 = _mm_add_ps(zmm14, arg5)
            cond:130_1 = rcx_13 == 0
            cond:131_1 = rcx_13 != 0
            cond:132_1 = rcx_13 == 0
            cond:133_1 = rcx_13 != 0
            
            if (rcx_13 != 0)
            label_14031e6cf:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm2, 1), zmm2, 0xe2)
                arg9 = var_2b8_3
                zmm1 = _mm_add_ps(zmm1, zmm3)
                
                if (cond:131_1)
                    goto label_14031c511
                
                goto label_14031e6e5
            
        label_14031c4f3:
            arg9 = var_2b8_3
            zmm1 = _mm_add_ps(zmm1, zmm3)
            
            if (not(cond:130_1))
            label_14031c511:
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm4, 1), zmm4, 0xe2)
                arg8 = _mm_add_ps(arg8, zmm5)
                
                if (cond:133_1)
                    goto label_14031e6fb
                
                goto label_14031c51e
            
        label_14031e6e5:
            arg8 = _mm_add_ps(arg8, zmm5)
            bool cond:134_1
            bool cond:135_1
            bool cond:136_1
            bool cond:137_1
            
            if (not(cond:132_1))
            label_14031e6fb:
                zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm0, 1), zmm0, 0xe2)
                cond:134_1 = rdi_9 == 0
                cond:135_1 = rdi_9 != 0
                cond:136_1 = rdi_9 == 0
                cond:137_1 = rdi_9 != 0
                
                if (rdi_9 != 0)
                    goto label_14031c52f
                
                goto label_14031e707
            
        label_14031c51e:
            cond:134_1 = rdi_9 == 0
            cond:135_1 = rdi_9 != 0
            cond:136_1 = rdi_9 == 0
            cond:137_1 = rdi_9 != 0
            
            if (rdi_9 == 0)
            label_14031e707:
                
                if (not(cond:134_1))
                label_14031e714:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm4, 0x32), 0x84)
                    
                    if (cond:137_1)
                        goto label_14031c547
                    
                    goto label_14031e71e
            else
            label_14031c52f:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm14, zmm2, 0x32), 0x84)
                
                if (cond:135_1)
                    goto label_14031e714
            
            bool cond:138_1
            bool cond:139_1
            bool cond:140_1
            bool cond:141_1
            
            if (not(cond:136_1))
            label_14031c547:
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x32), 0x84)
                cond:138_1 = rbp_21 == 0
                cond:139_1 = rbp_21 != 0
                cond:140_1 = rbp_21 == 0
                cond:141_1 = rbp_21 != 0
                
                if (rbp_21 != 0)
                    goto label_14031e731
                
                goto label_14031c554
            
        label_14031e71e:
            cond:138_1 = rbp_21 == 0
            cond:139_1 = rbp_21 != 0
            cond:140_1 = rbp_21 == 0
            cond:141_1 = rbp_21 != 0
            
            if (rbp_21 != 0)
            label_14031e731:
                zmm14 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm14, zmm2, 0x23), 0x24)
                
                if (cond:139_1)
                    goto label_14031c566
                
                goto label_14031e73b
            
        label_14031c554:
            zmm14 = zmm2
            
            if (cond:138_1)
            label_14031e73b:
                zmm1 = zmm4
                
                if (not(cond:140_1))
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x23), 0x24)
            else
            label_14031c566:
                zmm1 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm4, 0x23), 0x24)
                
                if (cond:141_1)
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x23), 0x24)
            
            arg8 = zmm0
        
        zmm4 = zx.o(arg8[0].q)
        arg8 = __unpckhps_xmmps_memdq(arg8, data_142d8f750)
        zmm3 = _mm_unpacklo_ps(zmm14, zmm1.q)
        zmm0 = _mm_unpackhi_ps(zmm14, zmm1)
        zmm5 = _mm_shuffle_ps(zmm3, zmm4, 0x84)
        int32_t var_128_1[0x4] = zmm5
        zmm3 = _mm_shuffle_ps(zmm3, zmm4, 0xde)
        uint128_t var_118_1 = zmm3
        zmm2 = zmm0[0].q | arg8[0].q << 0x40
        int32_t var_108_1[0x4] = zmm2
        arg8[0].q = zmm0 u>> 0x40
        arg5 = var_2c8_1
        int64_t rax_107 = sx.q(arg5[0])
        zmm5 = _mm_shuffle_epi32(zmm5, 0x4e)
        int64_t rax_109 = rax_107 * 0x30
        *(arg1 + rax_109 + 0x20) = zmm14.d
        *(arg1 + rax_109 + 0x24) = zmm1.d
        *(arg1 + rax_109 + 0x28) = zmm5[0]
        *(arg1 + rax_109 + 0x2c) = 0
        int64_t rax_111 = sx.q(_mm_shuffle_epi32(arg5, 0x4e)[0])
        zmm1 = _mm_shuffle_ps(zmm1, zmm4, 0xd5)
        zmm4 = _mm_shuffle_epi32(zmm3, 0x4e)
        int64_t rax_113 = rax_111 * 0x30
        *(arg1 + rax_113 + 0x20) = zmm3.d
        *(arg1 + rax_113 + 0x24) = zmm1.d
        *(arg1 + rax_113 + 0x28) = zmm4[0]
        *(arg1 + rax_113 + 0x2c) = 0
        int64_t rax_115 = sx.q(zmm11[0])
        zmm1 = _mm_shuffle_epi32(zmm2, 0x4e)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe5)
        int64_t rax_117 = rax_115 * 0x30
        *(arg1 + rax_117 + 0x20) = zmm0.d
        *(arg1 + rax_117 + 0x24) = zmm2[0]
        *(arg1 + rax_117 + 0x28) = zmm1.d
        *(arg1 + rax_117 + 0x2c) = 0
        *(arg1 + sx.q(_mm_shuffle_epi32(zmm11, 0x4e).d) * 0x30 + 0x20) = arg8
        r13 = zx.q(r13.d + 4)
    while (r13.d s< i_5)
    
    i_4 = zx.q(arg15)
    
    if (r13.d s< i_4.d)
        goto label_14031e8ac
return i_4
