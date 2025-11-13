// 函数: sub_1403179f0
// 地址: 0x1403179f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg8
uint128_t zmm14
uint128_t var_68 = zmm14
uint128_t zmm13
uint128_t var_78 = zmm13
uint128_t var_88 = arg7
uint128_t var_98 = arg6
uint128_t zmm10
uint128_t var_a8 = zmm10
uint128_t zmm9
uint128_t var_b8 = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
uint128_t zmm7
uint128_t var_d8 = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
int64_t r15 = sx.q(arg12)
uint128_t zmm2 = arg10
int32_t r10 = arg9
int32_t rcx_1 = *(&data_143442fe0 + (r15 << 2)) * *(&data_143442fc0 + (r15 << 2))
int32_t i_5 = ((arg13 s>> 0x1f u>> 0x1e) + arg13) & 0xfffffffc
uint64_t i_4
uint128_t var_2e8
uint64_t r13
uint128_t zmm0
uint128_t zmm1
int32_t zmm3[0x4]
uint128_t zmm5

if (i_5 s<= 0)
    r13 = 0
    i_4 = zx.q(arg13)
    
    if (0 s< i_4.d)
    label_140319fe1:
        var_2e8.q = r15
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r13.d), 0), data_142e11d00)
        zmm5 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i_4.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm5
        int64_t r11_2 = sx.q(zmm0.d)
        uint128_t* rbp_23 = arg2
        int64_t rbx_17 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        int64_t rdi_41 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        int64_t rax_128 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm8 = *(rbp_23 + rax_128)
        uint128_t var_308_1 = *(rbp_23 + rdi_41)
        arg6 = *(rbp_23 + r11_2)
        zmm13 = zx.o(*(rbp_23 + rbx_17))
        zmm0 = data_142fc95e0 & zmm5
        uint128_t* r11_3 = zx.q(zmm0.d)
        uint128_t* r13_1 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        uint128_t* r14_2 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        uint128_t* r15_1 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm1 =
            _mm_unpacklo_epi32(zx.o(*(r14_2 + rbp_23 + rdi_41)), zx.q(*(r15_1 + rbp_23 + rax_128)))
        zmm0 = _mm_slli_epi32(
            _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(r11_3 + arg2 + r11_2)), 
                    zx.q(*(r13_1 + rbp_23 + rbx_17))), 
                zmm1.q), 
            4) & zmm5
        int64_t rax_130 = sx.q(zmm0.d)
        int64_t rdx_2 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        int64_t rdi_43 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        int64_t rbx_19 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm14 = _mm_unpacklo_epi32(zx.o(*(arg3 + rdi_43)), zx.q(*(arg3 + rbx_19)))
        arg8 = _mm_unpacklo_epi32(zx.o(*(arg3 + rax_130)), zx.q(*(arg3 + rdx_2)))
        zmm6 = _mm_unpacklo_epi64(arg8, zmm14.q)
        zmm1 = zx.o(*(r15_1 + arg3 + rbx_19))
        zmm0 = _mm_unpacklo_epi32(zx.o(*(r14_2 + arg3 + rdi_43)), zmm1.q)
        zmm2 = zx.o(*(r13_1 + arg3 + rdx_2))
        zmm7 =
            _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(r11_3 + arg3 + rax_130)), zmm2.q), zmm0.q)
        zmm14 = _mm_unpacklo_epi32(zmm14, 
            _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm14, arg8[0].q))[0].q)
        float var_2a8_2[0x4] = zmm6
        arg8 = _mm_unpacklo_epi32(arg8, _mm_cmpgt_epi32(zx.o(0), zmm6).q)
        zmm9 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
        arg5 = _mm_cmpeq_epi32(arg5, arg5)
        zmm3 = data_1434422d0
        zmm6 = arg10
        int32_t rax_131
        rax_131.b = 0f >= zmm6[0]
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_131)) ^ arg5, 0)
        zmm3 = _mm_cmpgt_epi32(zmm3, zmm7) & not.o(zmm0)
        arg7 = zmm5
        zmm10 = zmm3 & zmm5
        uint32_t temp0_656 = _mm_movemask_ps(zmm10)
        uint128_t var_318_2 = zmm14
        int32_t var_338_2[0x4] = arg8
        uint128_t var_278_1 = zmm13
        uint128_t var_398_4
        uint128_t var_388_5
        int32_t r11_4
        
        if (temp0_656 == 0)
            __builtin_memset(&var_398_4, 0, 0x20)
            zmm6 = zx.o(0)
        label_14031a5d0:
            r11_4 = var_2e8.d
            zmm5 = zx.o(0)
            zmm2 = zmm9
            zmm9 = arg7
        else
            arg5 = _mm_add_epi32(arg5, zmm7)
            
            if (zmm6[0] >= 1f)
                zmm10 &= arg5
                var_398_4 = zx.o(0)
                zmm6 = zmm10
                var_388_5 = zmm10
                goto label_14031a5d0
            
            int32_t var_348_1[0x4] = zmm3
            float var_2c8_2[0x4] = zmm8
            int32_t temp0_663[0x4] = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm9), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_ps(zmm2, zmm1, 0), zmm9), 0xe8).q)
            zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_663)
            zmm2 = _mm_shuffle_epi32(temp0_663, 0x4e)
            int32_t temp0_666[0x4] = _mm_unpacklo_epi32(temp0_663, zmm1.q)
            zmm2 = _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2).q)
            zmm1 = _mm_shuffle_epi32(_mm_add_epi64(3, zx.o(arg4)), 0x44)
            zmm5 = _mm_add_epi64(_mm_add_epi64(zmm1, arg8), temp0_666)
            zmm1 = _mm_add_epi64(_mm_add_epi64(zmm1, zmm14), zmm2)
            zmm0 = data_143442c10
            zmm5 &= zmm0
            uint128_t var_378_2 = zmm1 & zmm0
            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
            zmm2.d = float.s(arg9 - 1)
            zmm1 = _mm_mul_ps(_mm_cvtepi32_ps(arg5), zmm0)
            zmm2.d = zmm2.d f* zmm6[0]
            uint128_t var_2b8_3 = zmm2
            int32_t rcx_25 = int.d(zmm2.d)
            int32_t rbp_25 = 0
            
            if (rcx_25 s>= 0)
                rbp_25 = rcx_25
            
            if (rbp_25 s> arg9 - 2)
                rbp_25 = arg9 - 2
            
            zmm0 = _mm_cvttps_epi32(zmm1)
            zmm1 = _mm_cmpgt_epi32(zmm0, zx.o(0)) & zmm0
            zmm8 = _mm_cmpgt_epi32(arg5, zmm1)
            uint128_t var_388_4 = arg5
            zmm8 = (zmm8 & not.o(arg5)) | (zmm1 & zmm8)
            r11_4 = var_2e8.d
            uint128_t var_398_3 = zmm5
            uint128_t var_368_1 = arg7
            uint128_t var_328_3 = zmm9
            uint128_t var_358_1 = zmm7
            
            if (arg9 s< 0x100)
                zmm1 = _mm_shuffle_epi32(zmm8, 0x4e)
                int32_t temp0_727[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm1)
                zmm0 =
                    _mm_add_epi64(_mm_unpacklo_epi32(zmm8, _mm_cmpgt_epi32(zx.o(0), zmm8).q), zmm5)
                char rcx_27 = temp0_656.b
                
                if ((rcx_27 & 1) == 0)
                    zmm1 = _mm_unpacklo_epi32(zmm1, temp0_727[0].q)
                    zmm5 = var_388_4
                    
                    if ((rcx_27 & 2) != 0)
                        goto label_14031a8f1
                    
                    goto label_14031a629
                
                zmm13 = zx.o(*zmm0.q)
                zmm1 = _mm_unpacklo_epi32(zmm1, temp0_727[0].q)
                zmm5 = var_388_4
                
                if ((rcx_27 & 2) != 0)
                label_14031a8f1:
                    zmm13 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm13, 0), zmm13, 
                        0xe2)
                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_378_2)
                    
                    if ((rcx_27 & 4) == 0)
                        goto label_14031a638
                    
                    goto label_14031a915
                
            label_14031a629:
                zmm1 = __paddq_xmmdq_memdq(zmm1, var_378_2)
                
                if ((rcx_27 & 4) != 0)
                label_14031a915:
                    zmm13 = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zx.o(*zmm1.q), zmm13, 0x30), 0x84)
                    
                    if ((rcx_27 & 8) != 0)
                        zmm13 = _mm_shuffle_ps(zmm13, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm13, 0x20), 
                            0x24)
                else
                label_14031a638:
                    
                    if ((rcx_27 & 8) != 0)
                        zmm13 = _mm_shuffle_ps(zmm13, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm13, 0x20), 
                            0x24)
                
                zmm13 = __andps_xmmxud_memxud(zmm13, data_142ed6810)
                zmm0 = zx.o(rbp_25)
                uint128_t temp0_737 = _mm_shuffle_epi32(zmm0, 0)
                zmm13 = _mm_cmpgt_epi32(zmm13, temp0_737)
                zmm1 = zmm13 ^ _mm_cmpeq_epi32(zmm0, zmm0)
                uint128_t var_2f8_5 = zmm1
                zmm7 = zmm8
                
                if (_mm_movemask_ps(zmm13 & not.o(zmm10)) != 0)
                    zmm9 = (zmm13 & not.o(zmm5)) | (zmm13 & zmm8)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                    arg7 = _mm_sub_epi32(zmm8, zmm1)
                    zmm13 &= not.o(_mm_cmpgt_epi32(arg7, zmm5) ^ zmm1)
                    zmm6 = zmm10 & zmm13
                    uint32_t i = _mm_movemask_ps(zmm6)
                    
                    if (i == 0)
                        zmm7 = zmm9
                    else
                        zmm2 = zmm8
                        
                        do
                            arg8 = arg7
                            zmm7 = _mm_shuffle_epi32(arg7, 0x4e)
                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm7)
                            int32_t temp0_756[0x4] = __paddq_xmmdq_memdq(
                                _mm_unpacklo_epi32(arg7, _mm_cmpgt_epi32(zx.o(0), arg7).q), 
                                var_398_3)
                            char temp0_757 = _mm_movemask_ps(zmm6)
                            
                            if ((temp0_757 & 1) == 0)
                                zmm7 = _mm_unpacklo_epi32(zmm7, zmm1.q)
                                
                                if ((temp0_757 & 2) != 0)
                                    goto label_14031a735
                                
                                goto label_14031a7a1
                            
                            arg5.d = zx.d(*temp0_756[0].q)
                            zmm7 = _mm_unpacklo_epi32(zmm7, zmm1.q)
                            
                            if ((temp0_757 & 2) != 0)
                            label_14031a735:
                                arg5 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_756, 0x4e).q), 
                                        arg5, 0), 
                                    arg5, 0xe2)
                                zmm7 = __paddq_xmmdq_memdq(zmm7, var_378_2)
                                
                                if ((temp0_757 & 4) == 0)
                                    goto label_14031a7ab
                                
                                goto label_14031a752
                            
                        label_14031a7a1:
                            zmm7 = __paddq_xmmdq_memdq(zmm7, var_378_2)
                            
                            if ((temp0_757 & 4) != 0)
                            label_14031a752:
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*zmm7.q), arg5, 0x30), 0x84)
                                
                                if ((temp0_757 & 8) != 0)
                                    arg5 = _mm_shuffle_ps(arg5, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                            arg5, 0x20), 
                                        0x24)
                            else
                            label_14031a7ab:
                                
                                if ((temp0_757 & 8) != 0)
                                    arg5 = _mm_shuffle_ps(arg5, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                            arg5, 0x20), 
                                        0x24)
                            
                            zmm1 = _mm_cmpgt_epi32(__andps_xmmxud_memxud(arg5, data_142ed6810), 
                                temp0_737) & zmm13
                            zmm0 = zx.o(0)
                            zmm7 = zmm1 & not.o(zmm9)
                            zmm2 &= zmm1
                            
                            if (_mm_movemask_ps(zmm1 & zmm10) != i)
                                zmm1 ^= zmm13
                                zmm0 = zmm1
                            
                            zmm7 |= zmm2
                            arg7 = __psubd_xmmdq_memdq(arg8, data_142d3f800)
                            zmm13 = _mm_cmpgt_epi32(arg7, zmm5) & not.o(zmm0)
                            zmm6 = zmm13 & zmm10
                            i = _mm_movemask_ps(zmm6)
                            zmm2 = arg8
                            zmm9 = zmm7
                        while (i != 0)
                
                uint32_t temp0_858 = _mm_movemask_ps(_mm_andnot_ps(var_2f8_5, zmm10))
                uint32_t i_1
                
                if (temp0_858 != 0)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ var_2f8_5
                    zmm7 &= var_2f8_5
                    arg7 = _mm_cmpeq_epi32(arg7, arg7)
                    zmm8 = _mm_add_epi32(zmm8, arg7)
                    zmm2 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & zmm1
                    zmm3 = zmm2 & zmm10
                    i_1 = _mm_movemask_ps(zmm3)
                
                if (temp0_858 == 0 || i_1 == 0)
                    zmm6 = zmm7
                    arg8 = var_398_3
                else
                    zmm13 = data_142ed6810
                    arg8 = var_398_3
                    
                    do
                        zmm6 = _mm_shuffle_epi32(zmm8, 0x4e)
                        zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm6)
                        zmm1 = _mm_add_epi64(
                            _mm_unpacklo_epi32(zmm8, _mm_cmpgt_epi32(zx.o(0), zmm8).q), arg8)
                        char temp0_876 = _mm_movemask_ps(zmm3)
                        
                        if ((temp0_876 & 1) == 0)
                            zmm6 = _mm_unpacklo_epi32(zmm6, zmm0.q)
                            
                            if ((temp0_876 & 2) != 0)
                                goto label_14031adc5
                            
                            goto label_14031ae28
                        
                        arg5.d = zx.o(*zmm1.q)[0]
                        zmm6 = _mm_unpacklo_epi32(zmm6, zmm0.q)
                        
                        if ((temp0_876 & 2) != 0)
                        label_14031adc5:
                            arg5 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg5, 0), 
                                arg5, 0xe2)
                            zmm6 = _mm_add_epi64(zmm6, var_378_2)
                            
                            if ((temp0_876 & 4) == 0)
                                goto label_14031ae31
                            
                            goto label_14031ade1
                        
                    label_14031ae28:
                        zmm6 = _mm_add_epi64(zmm6, var_378_2)
                        
                        if ((temp0_876 & 4) != 0)
                        label_14031ade1:
                            arg5 = _mm_shuffle_ps(arg5, 
                                _mm_shuffle_ps(zx.o(*zmm6[0].q), arg5, 0x30), 0x84)
                            
                            if ((temp0_876 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm6, 0x4e).q), arg5, 
                                        0x20), 
                                    0x24)
                        else
                        label_14031ae31:
                            
                            if ((temp0_876 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm6, 0x4e).q), arg5, 
                                        0x20), 
                                    0x24)
                        
                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(arg5, zmm13), temp0_737) & not.o(zmm2)
                        zmm6 = zmm1 & not.o(zmm7)
                        zmm7 = zx.o(0)
                        
                        if (_mm_movemask_ps(zmm1 & zmm10) != i_1)
                            zmm7 = zmm1 ^ zmm2
                        
                        zmm6 |= zmm1 & zmm8
                        zmm8 = _mm_add_epi32(zmm8, arg7)
                        zmm2 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & zmm7
                        zmm3 = zmm2 & zmm10
                        i_1 = _mm_movemask_ps(zmm3)
                        zmm7 = zmm6
                    while (i_1 != 0)
                
                zmm6 = _mm_and_ps(zmm6, zmm10)
                zmm1 = _mm_shuffle_epi32(zmm6, 0x4e)
                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                zmm0 = _mm_add_epi64(_mm_unpacklo_epi32(zmm6, _mm_cmpgt_epi32(zx.o(0), zmm6)[0].q), 
                    arg8)
                
                if ((rcx_27 & 1) != 0)
                    arg7 = zx.o(*zmm0.q)
                
                zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                zmm9 = var_368_1
                zmm14 = var_318_2
                arg8 = var_338_2
                zmm8 = var_2c8_2
                arg5 = var_328_3
                zmm7 = var_358_1
                
                if ((rcx_27 & 2) == 0)
                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_378_2)
                    
                    if ((rcx_27 & 4) != 0)
                        goto label_14031b04e
                    
                    goto label_14031af4f
                
                zmm0 = _mm_shuffle_ps(
                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), arg7, 0), arg7, 0xe2)
                arg7 = zmm0
                zmm1 = __paddq_xmmdq_memdq(zmm1, var_378_2)
                
                if ((rcx_27 & 4) == 0)
                label_14031af4f:
                    
                    if ((rcx_27 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg7, 0x20)
                        arg7 = _mm_shuffle_ps(arg7, zmm0, 0x24)
                else
                label_14031b04e:
                    zmm0 = _mm_shuffle_ps(zx.o(*zmm1.q), arg7, 0x30)
                    arg7 = _mm_shuffle_ps(arg7, zmm0, 0x84)
                    
                    if ((rcx_27 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg7, 0x20)
                        arg7 = _mm_shuffle_ps(arg7, zmm0, 0x24)
                
                zmm3 = _mm_sub_epi32(zmm6, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm10
                zmm0 = _mm_cmpgt_epi32(zmm3, var_388_4) & zmm10
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm3 = (var_388_4 & zmm0) | (zmm0 & not.o(zmm3))
                
                zmm5 = zx.o(0)
                zmm2 = _mm_shuffle_epi32(zmm3, 0x4e)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                var_388_5 = zmm3
                zmm1 = _mm_add_epi64(var_398_3, 
                    _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3).q))
                uint128_t var_398_6 = zmm1
                
                if ((rcx_27 & 1) == 0)
                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                    
                    if ((rcx_27 & 2) != 0)
                        goto label_14031b09e
                    
                    goto label_14031aff5
                
                zmm1 = zx.o(*var_398_6.q)
                zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                
                if ((rcx_27 & 2) != 0)
                label_14031b09e:
                    zmm1 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*__pshufd_xmmdq_memdq_immb(var_398_6, 0x4e).q), zmm1, 
                            0), 
                        zmm1, 0xe2)
                    zmm0 = _mm_add_epi64(var_378_2, zmm2)
                    
                    if ((rcx_27 & 4) == 0)
                        goto label_14031b002
                    
                    goto label_14031b0b4
                
            label_14031aff5:
                zmm0 = _mm_add_epi64(var_378_2, zmm2)
                
                if ((rcx_27 & 4) != 0)
                label_14031b0b4:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(*zmm0.q), zmm1, 0x30), 0x84)
                    
                    if ((rcx_27 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                else
                label_14031b002:
                    
                    if ((rcx_27 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                
                arg7 = __andps_xmmxud_memxud(arg7, data_142ed6810)
                zmm1 = __andps_xmmxud_memxud(zmm1, data_142ed6810)
                zmm0 = zx.o(0)
                
                if (arg11 != 1)
                label_14031b106:
                    zmm1 = _mm_sub_epi32(zmm1, arg7)
                    zmm0 = __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0)
                    zmm0 = _mm_div_ps(
                        _mm_sub_ps(_mm_shuffle_ps(var_2b8_3, var_2b8_3, 0), _mm_cvtepi32_ps(arg7)), 
                        _mm_cvtepi32_ps((zmm0 & zmm1) | (zmm0 & not.o(data_142d3f5b0))))
            else
                int32_t temp0_681[0x4] = _mm_add_epi32(zmm8, zmm8)
                zmm1 = _mm_shuffle_epi32(temp0_681, 0x4e)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_681)
                int32_t temp0_686[0x4] = _mm_add_epi64(_mm_unpacklo_epi32(temp0_681, zmm2.q), zmm5)
                char rcx_26 = temp0_656.b
                
                if ((rcx_26 & 1) == 0)
                    zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
                    zmm5 = var_388_4
                    
                    if ((rcx_26 & 2) != 0)
                        goto label_14031a882
                    
                    goto label_14031a38b
                
                arg5 = zx.o(*temp0_686[0].q)
                zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
                zmm5 = var_388_4
                
                if ((rcx_26 & 2) != 0)
                label_14031a882:
                    arg5 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_686, 0x4e).q), arg5, 0), arg5, 
                        0xe2)
                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_378_2)
                    
                    if ((rcx_26 & 4) == 0)
                        goto label_14031a39a
                    
                    goto label_14031a8a4
                
            label_14031a38b:
                zmm1 = __paddq_xmmdq_memdq(zmm1, var_378_2)
                
                if ((rcx_26 & 4) != 0)
                label_14031a8a4:
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(*zmm1.q), arg5, 0x30), 0x84)
                    
                    if ((rcx_26 & 8) != 0)
                        arg5 = _mm_shuffle_ps(arg5, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg5, 0x20), 
                            0x24)
                else
                label_14031a39a:
                    
                    if ((rcx_26 & 8) != 0)
                        arg5 = _mm_shuffle_ps(arg5, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg5, 0x20), 
                            0x24)
                
                arg5 = __andps_xmmxud_memxud(arg5, data_143442cd0)
                zmm0 = zx.o(rbp_25)
                zmm14 = _mm_shuffle_epi32(zmm0, 0)
                arg5 = _mm_cmpgt_epi32(arg5, zmm14)
                zmm1 = arg5 ^ _mm_cmpeq_epi32(zmm0, zmm0)
                uint128_t var_2f8_4 = zmm1
                zmm7 = zmm8
                
                if (_mm_movemask_ps(arg5 & not.o(zmm10)) != 0)
                    zmm13 = (arg5 & not.o(zmm5)) | (arg5 & zmm8)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                    zmm9 = _mm_sub_epi32(zmm8, zmm1)
                    arg5 &= not.o(_mm_cmpgt_epi32(zmm9, zmm5) ^ zmm1)
                    zmm6 = zmm10 & arg5
                    uint32_t i_2 = _mm_movemask_ps(zmm6)
                    
                    if (i_2 == 0)
                        zmm7 = zmm13
                    else
                        arg7 = zmm8
                        
                        do
                            arg8 = zmm9
                            int32_t temp0_708[0x4] = _mm_add_epi32(zmm9, zmm9)
                            zmm7 = _mm_shuffle_epi32(temp0_708, 0x4e)
                            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm7)
                            int32_t temp0_713[0x4] = __paddq_xmmdq_memdq(
                                _mm_unpacklo_epi32(temp0_708, 
                                    _mm_cmpgt_epi32(zx.o(0), temp0_708).q), 
                                var_398_3)
                            char temp0_714 = _mm_movemask_ps(zmm6)
                            
                            if ((temp0_714 & 1) == 0)
                                zmm1 = var_378_2
                                zmm7 = _mm_unpacklo_epi32(zmm7, zmm0.q)
                                
                                if ((temp0_714 & 2) != 0)
                                    goto label_14031a48b
                                
                                goto label_14031a4fa
                            
                            zmm2.d = zx.d(*temp0_713[0].q)
                            zmm1 = var_378_2
                            zmm7 = _mm_unpacklo_epi32(zmm7, zmm0.q)
                            
                            if ((temp0_714 & 2) != 0)
                            label_14031a48b:
                                zmm2 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_713, 0x4e).q), 
                                        zmm2, 0), 
                                    zmm2, 0xe2)
                                zmm7 = _mm_add_epi64(zmm7, zmm1)
                                
                                if ((temp0_714 & 4) == 0)
                                    goto label_14031a502
                                
                                goto label_14031a4a6
                            
                        label_14031a4fa:
                            zmm7 = _mm_add_epi64(zmm7, zmm1)
                            
                            if ((temp0_714 & 4) != 0)
                            label_14031a4a6:
                                zmm2 = _mm_shuffle_ps(zmm2, 
                                    _mm_shuffle_ps(zx.o(*zmm7.q), zmm2, 0x30), 0x84)
                                
                                if ((temp0_714 & 8) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                            zmm2, 0x20), 
                                        0x24)
                            else
                            label_14031a502:
                                
                                if ((temp0_714 & 8) != 0)
                                    zmm2 = _mm_shuffle_ps(zmm2, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                            zmm2, 0x20), 
                                        0x24)
                            
                            zmm1 =
                                _mm_cmpgt_epi32(__andps_xmmxud_memxud(zmm2, data_143442cd0), zmm14)
                                & arg5
                            zmm0 = zx.o(0)
                            zmm7 = zmm1 & not.o(zmm13)
                            arg7 &= zmm1
                            
                            if (_mm_movemask_ps(zmm1 & zmm10) != i_2)
                                zmm1 ^= arg5
                                zmm0 = zmm1
                            
                            zmm7 |= arg7
                            zmm9 = __psubd_xmmdq_memdq(arg8, data_142d3f800)
                            arg5 = _mm_cmpgt_epi32(zmm9, zmm5) & not.o(zmm0)
                            zmm6 = arg5 & zmm10
                            i_2 = _mm_movemask_ps(zmm6)
                            arg7 = arg8
                            zmm13 = zmm7
                        while (i_2 != 0)
                
                uint32_t temp0_784 = _mm_movemask_ps(_mm_andnot_ps(var_2f8_4, zmm10))
                uint32_t i_3
                
                if (temp0_784 != 0)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ var_2f8_4
                    zmm7 &= var_2f8_4
                    arg7 = _mm_cmpeq_epi32(arg7, arg7)
                    zmm8 = _mm_add_epi32(zmm8, arg7)
                    zmm3 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & zmm1
                    zmm2 = zmm3 & zmm10
                    i_3 = _mm_movemask_ps(zmm2)
                
                if (temp0_784 == 0 || i_3 == 0)
                    zmm6 = zmm7
                    arg8 = var_398_3
                else
                    zmm13 = data_143442cd0
                    arg8 = var_398_3
                    
                    do
                        zmm1 = _mm_add_epi32(zmm8, zmm8)
                        zmm6 = _mm_shuffle_epi32(zmm1, 0x4e)
                        zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm6)
                        zmm1 = _mm_add_epi64(
                            _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1).q), arg8)
                        char temp0_803 = _mm_movemask_ps(zmm2)
                        
                        if ((temp0_803 & 1) == 0)
                            zmm6 = _mm_unpacklo_epi32(zmm6, zmm0.q)
                            
                            if ((temp0_803 & 2) != 0)
                                goto label_14031a9d5
                            
                            goto label_14031aa3f
                        
                        arg5.d = zx.d(*zmm1.q)
                        zmm6 = _mm_unpacklo_epi32(zmm6, zmm0.q)
                        
                        if ((temp0_803 & 2) != 0)
                        label_14031a9d5:
                            arg5 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg5, 0), 
                                arg5, 0xe2)
                            zmm6 = _mm_add_epi64(zmm6, var_378_2)
                            
                            if ((temp0_803 & 4) == 0)
                                goto label_14031aa48
                            
                            goto label_14031a9f1
                        
                    label_14031aa3f:
                        zmm6 = _mm_add_epi64(zmm6, var_378_2)
                        
                        if ((temp0_803 & 4) != 0)
                        label_14031a9f1:
                            arg5 = _mm_shuffle_ps(arg5, 
                                _mm_shuffle_ps(zx.o(*zmm6[0].q), arg5, 0x30), 0x84)
                            
                            if ((temp0_803 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm6, 0x4e).q), arg5, 
                                        0x20), 
                                    0x24)
                        else
                        label_14031aa48:
                            
                            if ((temp0_803 & 8) != 0)
                                arg5 = _mm_shuffle_ps(arg5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm6, 0x4e).q), arg5, 
                                        0x20), 
                                    0x24)
                        
                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(arg5, zmm13), zmm14) & not.o(zmm3)
                        zmm6 = zmm1 & not.o(zmm7)
                        zmm7 = zx.o(0)
                        
                        if (_mm_movemask_ps(zmm1 & zmm10) != i_3)
                            zmm7 = zmm1 ^ zmm3
                        
                        zmm6 |= zmm1 & zmm8
                        zmm8 = _mm_add_epi32(zmm8, arg7)
                        zmm3 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & zmm7
                        zmm2 = zmm3 & zmm10
                        i_3 = _mm_movemask_ps(zmm2)
                        zmm7 = zmm6
                    while (i_3 != 0)
                
                zmm6 = _mm_and_ps(zmm6, zmm10)
                zmm2 = _mm_add_epi32(zmm6, zmm6)
                zmm1 = _mm_shuffle_epi32(zmm2, 0x4e)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                zmm2 = _mm_add_epi64(_mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q), 
                    arg8)
                
                if ((rcx_26 & 1) != 0)
                    arg7 = zx.o(*zmm2.q)
                
                zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
                zmm9 = var_368_1
                zmm14 = var_318_2
                arg8 = var_338_2
                zmm8 = var_2c8_2
                arg5 = var_328_3
                zmm7 = var_358_1
                zmm3 = var_388_4
                
                if ((rcx_26 & 2) == 0)
                    zmm1 = __paddq_xmmdq_memdq(zmm1, var_378_2)
                    
                    if ((rcx_26 & 4) != 0)
                        goto label_14031abfe
                    
                    goto label_14031ab65
                
                zmm0 = _mm_shuffle_ps(
                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), arg7, 0), arg7, 0xe2)
                arg7 = zmm0
                zmm1 = __paddq_xmmdq_memdq(zmm1, var_378_2)
                
                if ((rcx_26 & 4) == 0)
                label_14031ab65:
                    
                    if ((rcx_26 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg7, 0x20)
                        arg7 = _mm_shuffle_ps(arg7, zmm0, 0x24)
                else
                label_14031abfe:
                    zmm0 = _mm_shuffle_ps(zx.o(*zmm1.q), arg7, 0x30)
                    arg7 = _mm_shuffle_ps(arg7, zmm0, 0x84)
                    
                    if ((rcx_26 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), arg7, 0x20)
                        arg7 = _mm_shuffle_ps(arg7, zmm0, 0x24)
                
                zmm2 = _mm_sub_epi32(zmm6, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm10
                zmm0 = _mm_cmpgt_epi32(zmm2, zmm3) & zmm10
                
                if (_mm_movemask_ps(zmm0) == 0)
                    zmm5 = zx.o(0)
                    zmm1 = zmm2
                else
                    zmm1 = (zmm3 & zmm0) | (zmm0 & not.o(zmm2))
                    zmm5 = zx.o(0)
                
                var_388_5 = zmm1
                zmm1 = _mm_add_epi32(zmm1, zmm1)
                zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm2)
                zmm1 = _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1)[0].q)
                int32_t temp0_842[0x4] = _mm_add_epi64(var_398_3, zmm1)
                
                if ((rcx_26 & 1) == 0)
                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                    
                    if ((rcx_26 & 2) != 0)
                        goto label_14031acab
                    
                    goto label_14031ac63
                
                zmm1 = zx.o(*temp0_842.q)
                zmm2 = _mm_unpacklo_epi32(zmm2, zmm0.q)
                
                if ((rcx_26 & 2) != 0)
                label_14031acab:
                    zmm1 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*__pshufd_xmmdq_memdq_immb(temp0_842, 0x4e).q), zmm1, 
                            0), 
                        zmm1, 0xe2)
                    zmm0 = _mm_add_epi64(var_378_2, zmm2)
                    
                    if ((rcx_26 & 4) == 0)
                        goto label_14031ac6c
                    
                    goto label_14031acbd
                
            label_14031ac63:
                zmm0 = _mm_add_epi64(var_378_2, zmm2)
                
                if ((rcx_26 & 4) != 0)
                label_14031acbd:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(*zmm0.q), zmm1, 0x30), 0x84)
                    
                    if ((rcx_26 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                else
                label_14031ac6c:
                    
                    if ((rcx_26 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                
                arg7 = __andps_xmmxud_memxud(arg7, data_143442cd0)
                zmm1 = __andps_xmmxud_memxud(zmm1, data_143442cd0)
                zmm0 = zx.o(0)
                
                if (arg11 != 1)
                    goto label_14031b106
            
            var_398_4 = __andps_xmmxud_memxud(zmm0, var_348_1)
            zmm2 = arg5
        
        int32_t rax_204
        rax_204.b = r11_4 == 3
        zmm7 = __pcmpgtd_xmmdq_memdq(zmm7, data_142d3f5b0)
        arg7 = _mm_shuffle_epi32(0x18 & zx.o(neg.d(rax_204)), 0) & zmm7
        zmm13 = _mm_unpackhi_epi32(arg7, zmm5.q)
        arg7 = _mm_unpacklo_epi32(arg7, zmm5.q)
        arg5 = _mm_shuffle_epi32(zmm2, 0xf5)
        uint64_t rbp_26 = zx.q(r11_4)
        uint128_t var_378_3 = arg5
        
        if (r11_4 u> 6)
        label_14031b3ac:
            char temp0_972 = _mm_movemask_ps(zmm9)
            zmm10 = zx.o(0)
            
            if ((temp0_972 & 4) != 0)
                zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zx.o(0), zmm10, 0x30), 0x84)
            
            zmm7 = var_308_1
            
            if ((temp0_972 & 8) != 0)
                zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zx.o(0), zmm10, 0x20), 0x24)
            
            zmm0 = var_388_5
            zmm14 = zmm10
            zmm5 = zmm10
        else
            zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, zmm2), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), arg5), 0xe8).q)
            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
            zmm3 = _mm_shuffle_epi32(zmm1, 0x4e)
            zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
            int32_t temp0_951[0x4] = _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zmm5, zmm3).q)
            
            switch (rbp_26)
                case 0, 1
                    uint128_t var_328_4 = zmm2
                    float var_2c8_3[0x4] = zmm8
                    zmm0 = _mm_add_epi64(arg7, arg8)
                    zmm2 = _mm_add_epi64(_mm_add_epi64(zmm13, zmm14), temp0_951)
                    zmm0 = _mm_add_epi64(zmm0, zmm1)
                    arg5 = _mm_shuffle_epi32(zmm9, 0x50)
                    zmm0 &= arg5
                    zmm5 = _mm_shuffle_epi32(zmm9, 0xfa)
                    zmm2 &= zmm5
                    int64_t rcx_30 = _mm_shuffle_epi32(zmm0, 0x4e).q
                    void* rax_206 = arg4 + rcx_30
                    zmm8 = *(arg4 + rcx_30)
                    int64_t rcx_31 = zmm2.q
                    void* rdx_28 = arg4 + rcx_31
                    zmm1 = *(arg4 + rcx_31)
                    int64_t rcx_32 = _mm_shuffle_epi32(zmm2, 0x4e).q
                    void* rbx_21 = arg4 + rcx_32
                    uint128_t var_2e8_1 = *(arg4 + rcx_32)
                    zmm2 = data_1434426c0
                    zmm3 = arg5 & zmm2
                    zmm2 &= zmm5
                    void* rcx_34 = zmm0.q + arg4
                    zmm14 = *(zmm3[0].q + rcx_34)
                    zmm7 = *(_mm_shuffle_epi32(zmm3, 0x4e).q + rax_206)
                    zmm3 = *(zmm2.q + rdx_28)
                    uint128_t var_358_2 = *(_mm_shuffle_epi32(zmm2, 0x4e).q + rbx_21)
                    zmm0 = data_1434426e0
                    arg5 &= zmm0
                    zmm5 &= zmm0
                    zmm10 = *(arg5.q + rcx_34)
                    zmm0 = *(_mm_shuffle_epi32(arg5, 0x4e).q + rax_206)
                    arg5 = *(zmm5.q + rdx_28)
                    zmm5 = _mm_shuffle_epi32(zmm5, 0x4e)
                    uint128_t var_348_2 = *(zmm5.q + rbx_21)
                    arg8 = zmm9
                    char temp0_964 = _mm_movemask_ps(zmm9)
                    bool cond:15_1
                    bool cond:16_1
                    bool cond:20_1
                    bool cond:21_1
                    
                    if ((temp0_964 & 1) == 0)
                        char temp1_1 = temp0_964 & 2
                        cond:15_1 = temp1_1 != 0
                        cond:16_1 = temp1_1 == 0
                        cond:20_1 = temp1_1 != 0
                        cond:21_1 = temp1_1 == 0
                        
                        if (temp1_1 == 0)
                            goto label_14031b862
                        
                        goto label_14031b32f
                    
                    zmm5 = *rcx_34
                    char temp0_1068 = temp0_964 & 2
                    cond:15_1 = temp0_1068 != 0
                    cond:16_1 = temp0_1068 == 0
                    cond:20_1 = temp0_1068 != 0
                    cond:21_1 = temp0_1068 == 0
                    
                    if (temp0_1068 == 0)
                    label_14031b862:
                        zmm8 = var_2c8_3
                        
                        if (cond:16_1)
                            goto label_14031b342
                        
                        goto label_14031b871
                    
                label_14031b32f:
                    zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm5, 0), zmm5, 0xe2)
                    zmm8 = var_2c8_3
                    
                    if (not(cond:15_1))
                    label_14031b342:
                        
                        if (cond:21_1)
                            goto label_14031b87b
                        
                        goto label_14031b348
                    
                label_14031b871:
                    zmm14 = _mm_unpacklo_ps(zmm14, zmm7.q)
                    bool cond:34_1
                    bool cond:35_1
                    bool cond:46_1
                    bool cond:47_1
                    
                    if (not(cond:20_1))
                    label_14031b87b:
                        char temp3_1 = temp0_964 & 4
                        cond:34_1 = temp3_1 != 0
                        cond:35_1 = temp3_1 == 0
                        cond:46_1 = temp3_1 != 0
                        cond:47_1 = temp3_1 == 0
                        zmm9 = arg8
                        zmm2 = var_328_4
                        
                        if (temp3_1 == 0)
                            goto label_14031b35f
                        
                        goto label_14031b892
                    
                label_14031b348:
                    zmm10 = _mm_unpacklo_ps(zmm10, zmm0.q)
                    char temp2_1 = temp0_964 & 4
                    cond:34_1 = temp2_1 != 0
                    cond:35_1 = temp2_1 == 0
                    cond:46_1 = temp2_1 != 0
                    cond:47_1 = temp2_1 == 0
                    zmm9 = arg8
                    zmm2 = var_328_4
                    
                    if (temp2_1 == 0)
                    label_14031b35f:
                        zmm7 = var_308_1
                        zmm0 = var_388_5
                        
                        if (cond:35_1)
                            goto label_14031b8aa
                        
                        goto label_14031b378
                    
                label_14031b892:
                    zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm1, zmm5, 0x30), 0x84)
                    zmm7 = var_308_1
                    zmm0 = var_388_5
                    
                    if (not(cond:34_1))
                    label_14031b8aa:
                        
                        if (cond:47_1)
                            goto label_14031b383
                        
                        goto label_14031b8b5
                    
                label_14031b378:
                    zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(zmm3, zmm14, 0x30), 0x84)
                    bool cond:66_1
                    bool cond:67_1
                    bool cond:76_1
                    bool cond:77_1
                    
                    if (not(cond:46_1))
                    label_14031b383:
                        char temp9_1 = temp0_964 & 8
                        cond:66_1 = temp9_1 != 0
                        cond:67_1 = temp9_1 == 0
                        cond:76_1 = temp9_1 == 0
                        cond:77_1 = temp9_1 != 0
                        
                        if (temp9_1 == 0)
                            goto label_14031b8c2
                        
                        goto label_14031b397
                    
                label_14031b8b5:
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg5, zmm10, 0x30), 0x84)
                    char temp8_1 = temp0_964 & 8
                    cond:66_1 = temp8_1 != 0
                    cond:67_1 = temp8_1 == 0
                    cond:76_1 = temp8_1 == 0
                    cond:77_1 = temp8_1 != 0
                    
                    if (temp8_1 == 0)
                    label_14031b8c2:
                        
                        if (cond:67_1)
                            goto label_14031b3a1
                        
                        goto label_14031b8d2
                    
                label_14031b397:
                    zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(var_2e8_1, zmm5, 0x20), 0x24)
                    
                    if (cond:66_1)
                    label_14031b8d2:
                        zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(var_358_2, zmm14, 0x20), 0x24)
                        
                        if (not(cond:76_1))
                            zmm10 =
                                _mm_shuffle_ps(zmm10, _mm_shuffle_ps(var_348_2, zmm10, 0x20), 0x24)
                    else
                    label_14031b3a1:
                        
                        if (cond:77_1)
                            zmm10 =
                                _mm_shuffle_ps(zmm10, _mm_shuffle_ps(var_348_2, zmm10, 0x20), 0x24)
                case 2
                    zmm0 = _mm_add_epi64(arg7, arg8)
                    zmm7 = zmm2
                    zmm2 = _mm_add_epi64(_mm_add_epi64(zmm13, zmm14), temp0_951)
                    zmm0 = _mm_add_epi64(zmm0, zmm1)
                    arg5 = _mm_shuffle_epi32(zmm9, 0x50)
                    zmm0 &= arg5
                    zmm1 = _mm_shuffle_epi32(zmm9, 0xfa)
                    zmm2 &= zmm1
                    int64_t rax_211 = zmm0.q
                    void* rbx_22 = arg4 + rax_211
                    int64_t rcx_35 = _mm_shuffle_epi32(zmm0, 0x4e).q
                    void* rdi_50 = arg4 + rcx_35
                    int64_t rdx_29 = zmm2.q
                    zmm3 = data_1434426b0
                    zmm0 = arg5 & zmm3
                    int16_t* rsi_35 = _mm_shuffle_epi32(zmm0, 0x4e).q
                    zmm5 = data_1434426c0
                    zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm0.q + rbx_22)), *(rsi_35 + rdi_50), 1)
                    arg5 &= zmm5
                    int16_t* rsi_37 = _mm_shuffle_epi32(arg5, 0x4e).q
                    arg5 = zx.o(*(arg5.q + rbx_22))
                    void* rbx_24 = arg4 + rdx_29
                    zmm2 = _mm_shuffle_epi32(zmm2, 0x4e)
                    arg5 = __pinsrw_xmmdq_memw_immb(arg5, *(rsi_37 + rdi_50), 1)
                    int64_t rdi_51 = zmm2.q
                    zmm3 &= zmm1
                    zmm1 &= zmm5
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(zmm3[0].q + rbx_24), 2)
                    arg5 = __pinsrw_xmmdq_memw_immb(arg5, *(zmm1.q + rbx_24), 2)
                    void* rbx_25 = arg4 + rdi_51
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, 
                        *(_mm_shuffle_epi32(zmm3, 0x4e).q + rbx_25), 3)
                    arg5 = __pinsrw_xmmdq_memw_immb(arg5, 
                        *(_mm_shuffle_epi32(zmm1, 0x4e).q + rbx_25), 3)
                    zmm1 = _mm_unpacklo_epi16(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_211)), *(arg4 + rcx_35), 
                                    1), 
                                *(arg4 + rdx_29), 2), 
                            *(arg4 + rdi_51), 3), 
                        0)
                    zmm3 = data_1434424d0
                    zmm5 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm3))
                    zmm1 = data_1434426d0
                    zmm5 = _mm_div_ps(zmm5, zmm1)
                    zmm14 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), zmm3)), zmm1)
                    zmm2 = zmm7
                    zmm10 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(arg5, 0), zmm3)), zmm1)
                    zmm0 = data_143442710
                    zmm5 = _mm_mul_ps(zmm5, zmm0)
                    zmm14 = _mm_mul_ps(zmm14, zmm0)
                    zmm10 = _mm_mul_ps(zmm10, zmm0)
                    zmm7 = var_308_1
                    zmm0 = var_388_5
                case 3
                    zmm0 = var_2a8_2 & zmm9
                    int64_t rcx_36 = sx.q(zmm0.d)
                    void* rax_214 = arg4 + rcx_36
                    zmm10 = *(arg4 + rcx_36)
                    zmm5 = zmm2
                    int64_t rdx_30 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
                    void* rcx_38 = arg4 + rdx_30
                    zmm10 = _mm_unpacklo_ps(zmm10, (*(arg4 + rdx_30)).q)
                    int64_t rsi_42 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
                    void* rdx_32 = arg4 + rsi_42
                    zmm2 = *(arg4 + rsi_42)
                    int64_t rdi_52 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                    void* rsi_44 = arg4 + rdi_52
                    zmm10 = zmm10.q | _mm_unpacklo_ps(zmm2, (*(arg4 + rdi_52)).q).q << 0x40
                    uint128_t var_2e8_2 =
                        _mm_unpacklo_ps(*(r11_3 + rax_214), (*(r13_1 + rcx_38)).q).q
                        | _mm_unpacklo_ps(*(r14_2 + rdx_32), (*(r15_1 + rsi_44)).q).q << 0x40
                    zmm2 = data_142fc95f0 & zmm9
                    uint128_t var_328_5 = zmm5
                    zmm7 = _mm_unpacklo_ps(*(zx.q(zmm2.d) + rax_214), 
                        (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5).d) + rcx_38)).q).q | _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e).d) + rdx_32), 
                        (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7).d) + rsi_44)).q).q << 0x40
                    zmm2 = data_143442650 & zmm9
                    float temp0_1026[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2.d) + rax_214), 
                        (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5).d) + rcx_38)).q)
                    arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e).d) + rdx_32), 
                        (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7).d) + rsi_44)).q)
                    arg8 = temp0_1026[0].q | arg5.q << 0x40
                    arg5 = data_143442660 & zmm9
                    zmm0 = zmm14
                    zmm14 = zmm8
                    zmm8 = zmm0
                    zmm2 = _mm_unpacklo_ps(*(zx.q(arg5.d) + rax_214), 
                        (*(zx.q(_mm_shuffle_epi32(arg5, 0xe5).d) + rcx_38)).q).q | _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(arg5, 0x4e).d) + rdx_32), 
                        (*(zx.q(_mm_shuffle_epi32(arg5, 0xe7).d) + rsi_44)).q).q << 0x40
                    zmm5 = data_143442670 & zmm9
                    arg5 = _mm_unpacklo_ps(*(zx.q(zmm5.d) + rax_214), 
                        (*(zx.q(_mm_shuffle_epi32(zmm5, 0xe5).d) + rcx_38)).q).q | _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm5, 0x4e).d) + rdx_32), 
                        (*(zx.q(_mm_shuffle_epi32(zmm5, 0xe7).d) + rsi_44)).q).q << 0x40
                    zmm0 = __paddq_xmmdq_memdq(arg7, var_338_2)
                    zmm5 = _mm_add_epi64(zmm13, zmm8)
                    zmm8 = zmm14
                    zmm5 = _mm_add_epi64(zmm5, temp0_951)
                    zmm0 = _mm_add_epi64(zmm0, zmm1)
                    zmm1 = _mm_shuffle_epi32(zmm9, 0x50) & zmm0
                    zmm0 = _mm_shuffle_epi32(zmm9, 0xfa) & zmm5
                    int64_t rcx_39 = _mm_shuffle_epi32(zmm1, 0x4e).q
                    int64_t rbx_39 = _mm_shuffle_epi32(zmm0, 0x4e).q
                    zmm0 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm1.q)), zx.q(*(arg4 + rcx_39))), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), zx.o(*(arg4 + rbx_39))[0].q).q)
                    zmm1 = zmm0
                    zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    zmm0 &= data_143442680
                    zmm1 = _mm_srli_epi32(zmm1, 0x15)
                    zmm5 = _mm_add_ps(
                        _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442490)), 
                                data_1434426a0), 
                            arg8), 
                        zmm10)
                    zmm10 = data_143442440
                    zmm14 = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm10))
                    zmm3 = data_143442690
                    zmm14 =
                        __addps_xmmps_memps(_mm_mul_ps(_mm_div_ps(zmm14, zmm3), zmm2), var_2e8_2)
                    zmm10 = _mm_add_ps(
                        _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm10)), zmm3), 
                            arg5), 
                        zmm7)
                    zmm7 = var_308_1
                    zmm2 = var_328_5
                    zmm0 = var_388_5
                case 4, 5, 6
                    goto label_14031b3ac
        
        zmm7 = _mm_unpacklo_ps(zmm7, zmm8[0].q)
        arg6 = __unpcklps_xmmps_memdq(arg6, var_278_1)
        zmm6 = _mm_cmpeq_epi32(zmm6, zmm0) & not.o(zmm9)
        char temp0_1081 = _mm_movemask_ps(zmm6)
        
        if (temp0_1081 != 0)
            zmm1 = zx.o(0)
            char rax_256
            
            if (r11_4 u> 6)
            label_14031bf4a:
                rax_256 = temp0_1081
                zmm0 = zx.o(0)
                zmm2 = var_398_4
                
                if ((rax_256 & 4) == 0)
                    goto label_14031bf7d
                
            label_14031bf79:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(0), zmm1, 0x30), 0x84)
            label_14031bf7d:
                arg8 = zmm7
                
                if ((rax_256 & 8) != 0)
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm0, zmm1, 0x20), 0x24)
                
                zmm3 = zmm1
                zmm6 = zmm1
            else
                int32_t temp0_1087[0x4] = _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm0), 0xe8), 
                    _mm_shuffle_epi32(
                        __pmuludq_xmmdq_memdq(_mm_shuffle_epi32(zmm0, 0xf5), var_378_3), 0xe8).q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), temp0_1087)
                arg5 = _mm_shuffle_epi32(temp0_1087, 0x4e)
                int32_t temp0_1090[0x4] = _mm_unpacklo_epi32(temp0_1087, zmm0.q)
                arg5 = _mm_unpacklo_epi32(arg5, _mm_cmpgt_epi32(zx.o(0), arg5).q)
                
                switch (rbp_26)
                    case 0, 1
                        uint128_t var_308_2 = zmm7
                        uint128_t var_368_2 = zmm9
                        arg7 = __paddq_xmmdq_memdq(arg7, var_338_2)
                        zmm13 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm13, var_318_2), arg5)
                        arg7 = _mm_add_epi64(arg7, temp0_1090)
                        arg5 = _mm_shuffle_epi32(zmm6, 0x50)
                        arg7 &= arg5
                        zmm6 = _mm_shuffle_epi32(zmm6, 0xfa)
                        zmm13 &= zmm6
                        int64_t rcx_42 = _mm_shuffle_epi32(arg7, 0x4e).q
                        void* rax_219 = arg4 + rcx_42
                        zmm9 = *(arg4 + rcx_42)
                        int64_t rcx_43 = zmm13.q
                        void* rbp_27 = arg4 + rcx_43
                        arg8 = *(arg4 + rcx_43)
                        int64_t rcx_44 = _mm_shuffle_epi32(zmm13, 0x4e).q
                        void* rbx_40 = arg4 + rcx_44
                        uint128_t var_378_4 = *(arg4 + rcx_44)
                        zmm0 = data_1434426c0
                        zmm1 = arg5 & zmm0
                        zmm0 &= zmm6
                        void* rcx_46 = arg7.q + arg4
                        zmm3 = *(zmm1.q + rcx_46)
                        zmm13 = *(_mm_shuffle_epi32(zmm1, 0x4e).q + rax_219)
                        zmm8 = *(zmm0.q + rbp_27)
                        zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rbx_40)
                        zmm1 = data_1434426e0
                        arg5 &= zmm1
                        zmm6 &= zmm1
                        zmm1 = *(arg5.q + rcx_46)
                        zmm2 = *(_mm_shuffle_epi32(arg5, 0x4e).q + rax_219)
                        zmm7 = *(zmm6[0].q + rbp_27)
                        arg7 = *(_mm_shuffle_epi32(zmm6, 0x4e).q + rbx_40)
                        bool cond:48_1
                        bool cond:49_1
                        bool cond:54_1
                        bool cond:55_1
                        
                        if ((temp0_1081 & 1) == 0)
                            char temp5_1 = temp0_1081 & 2
                            cond:48_1 = temp5_1 != 0
                            cond:49_1 = temp5_1 == 0
                            cond:54_1 = temp5_1 != 0
                            cond:55_1 = temp5_1 == 0
                            
                            if (temp5_1 == 0)
                                goto label_14031bfa1
                            
                            goto label_14031ba8b
                        
                        zmm6 = *rcx_46
                        char temp4_1 = temp0_1081 & 2
                        cond:48_1 = temp4_1 != 0
                        cond:49_1 = temp4_1 == 0
                        cond:54_1 = temp4_1 != 0
                        cond:55_1 = temp4_1 == 0
                        
                        if (temp4_1 == 0)
                        label_14031bfa1:
                            zmm9 = var_368_2
                            
                            if (cond:49_1)
                                goto label_14031ba9b
                            
                            goto label_14031bfad
                        
                    label_14031ba8b:
                        zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm6, 0), zmm6, 0xe2)
                        zmm9 = var_368_2
                        
                        if (not(cond:48_1))
                        label_14031ba9b:
                            
                            if (cond:55_1)
                                goto label_14031bfb7
                            
                            goto label_14031baa1
                        
                    label_14031bfad:
                        zmm3 = _mm_unpacklo_ps(zmm3, zmm13.q)
                        bool cond:78_1
                        bool cond:79_1
                        bool cond:84_1
                        bool cond:85_1
                        
                        if (not(cond:54_1))
                        label_14031bfb7:
                            char temp11_1 = temp0_1081 & 4
                            cond:78_1 = temp11_1 != 0
                            cond:79_1 = temp11_1 == 0
                            cond:84_1 = temp11_1 != 0
                            cond:85_1 = temp11_1 == 0
                            zmm2 = var_398_4
                            
                            if (temp11_1 == 0)
                                goto label_14031bab0
                            
                            goto label_14031bfc8
                        
                    label_14031baa1:
                        zmm1 = _mm_unpacklo_ps(zmm1, zmm2.q)
                        char temp10_1 = temp0_1081 & 4
                        cond:78_1 = temp10_1 != 0
                        cond:79_1 = temp10_1 == 0
                        cond:84_1 = temp10_1 != 0
                        cond:85_1 = temp10_1 == 0
                        zmm2 = var_398_4
                        
                        if (temp10_1 == 0)
                        label_14031bab0:
                            arg8 = var_308_2
                            
                            if (cond:79_1)
                                goto label_14031bfdc
                            
                            goto label_14031bac4
                        
                    label_14031bfc8:
                        zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(arg8, zmm6, 0x30), 0x84)
                        arg8 = var_308_2
                        
                        if (not(cond:78_1))
                        label_14031bfdc:
                            
                            if (cond:85_1)
                                goto label_14031bacf
                            
                            goto label_14031bfe6
                        
                    label_14031bac4:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x30), 0x84)
                        bool cond:104_1
                        bool cond:105_1
                        bool cond:110_1
                        bool cond:111_1
                        
                        if (not(cond:84_1))
                        label_14031bacf:
                            char temp15_1 = temp0_1081 & 8
                            cond:104_1 = temp15_1 != 0
                            cond:105_1 = temp15_1 == 0
                            cond:110_1 = temp15_1 == 0
                            cond:111_1 = temp15_1 != 0
                            
                            if (temp15_1 == 0)
                                goto label_14031bff2
                            
                            goto label_14031bae0
                        
                    label_14031bfe6:
                        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm7, zmm1, 0x30), 0x84)
                        char temp14_1 = temp0_1081 & 8
                        cond:104_1 = temp14_1 != 0
                        cond:105_1 = temp14_1 == 0
                        cond:110_1 = temp14_1 == 0
                        cond:111_1 = temp14_1 != 0
                        
                        if (temp14_1 == 0)
                        label_14031bff2:
                            
                            if (cond:105_1)
                                goto label_14031baea
                            
                            goto label_14031bffc
                        
                    label_14031bae0:
                        zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(var_378_4, zmm6, 0x20), 0x24)
                        
                        if (cond:104_1)
                        label_14031bffc:
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm0, zmm3, 0x20), 0x24)
                            
                            if (not(cond:110_1))
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg7, zmm1, 0x20), 0x24)
                        else
                        label_14031baea:
                            
                            if (cond:111_1)
                                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg7, zmm1, 0x20), 0x24)
                    case 2
                        arg8 = zmm7
                        arg7 = __paddq_xmmdq_memdq(arg7, var_338_2)
                        zmm13 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm13, var_318_2), arg5)
                        arg7 = _mm_add_epi64(arg7, temp0_1090)
                        zmm3 = _mm_shuffle_epi32(zmm6, 0x50)
                        arg7 &= zmm3
                        zmm1 = _mm_shuffle_epi32(zmm6, 0xfa)
                        zmm13 &= zmm1
                        int64_t rax_223 = arg7.q
                        void* rbp_28 = arg4 + rax_223
                        int64_t rcx_47 = _mm_shuffle_epi32(arg7, 0x4e).q
                        void* rbx_41 = arg4 + rcx_47
                        arg5 = data_1434426b0
                        zmm0 = zmm3 & arg5
                        int16_t* rdi_61 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                        zmm6 = data_1434426c0
                        zmm3 &= zmm6
                        zmm7 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm0.q + rbp_28)), 
                            *(rdi_61 + rbx_41), 1)
                        int64_t rdi_63 = zmm13.q
                        zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm3[0].q + rbp_28)), 
                            *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rbx_41), 1)
                        void* rbp_31 = arg4 + rdi_63
                        arg5 &= zmm1
                        zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, *(arg5.q + rbp_31), 2)
                        zmm1 &= zmm6
                        zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(zmm1.q + rbp_31), 2)
                        int32_t temp0_1125[0x4] =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_223)), *(arg4 + rcx_47), 1)
                        zmm6 = _mm_shuffle_epi32(zmm13, 0x4e)
                        int32_t temp0_1127[0x4] =
                            __pinsrw_xmmdq_memw_immb(temp0_1125, *(arg4 + rdi_63), 2)
                        int64_t rax_225 = zmm6[0].q
                        int32_t temp0_1128[0x4] =
                            __pinsrw_xmmdq_memw_immb(temp0_1127, *(arg4 + rax_225), 3)
                        void* rax_226 = arg4 + rax_225
                        zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, 
                            *(_mm_shuffle_epi32(arg5, 0x4e).q + rax_226), 3)
                        zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, 
                            *(_mm_shuffle_epi32(zmm1, 0x4e).q + rax_226), 3)
                        int32_t temp0_1133[0x4] = _mm_unpacklo_epi16(temp0_1128, 0)
                        arg5 = data_1434424d0
                        float temp0_1135[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(temp0_1133, arg5))
                        zmm8 = data_1434426d0
                        float temp0_1136[0x4] = _mm_div_ps(temp0_1135, zmm8)
                        zmm3 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm7, 0), arg5)), zmm8)
                        zmm1 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), arg5)), zmm8)
                        zmm0 = data_143442710
                        zmm6 = _mm_mul_ps(temp0_1136, zmm0)
                        zmm3 = _mm_mul_ps(zmm3, zmm0)
                        zmm1 = _mm_mul_ps(zmm1, zmm0)
                        zmm2 = var_398_4
                    case 3
                        zmm1 = var_2a8_2 & zmm6
                        int64_t rax_228 = sx.q(zmm1.d)
                        void* rcx_50 = arg4 + rax_228
                        zmm2 = *(arg4 + rax_228)
                        int64_t rax_230 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
                        void* rbp_32 = arg4 + rax_230
                        zmm2 = _mm_unpacklo_ps(zmm2, (*(arg4 + rax_230)).q)
                        int64_t rax_232 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
                        void* rbx_44 = arg4 + rax_232
                        zmm0 = *(arg4 + rax_232)
                        int64_t rax_234 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
                        void* rdi_64 = arg4 + rax_234
                        uint128_t var_378_5 =
                            zmm2.q | _mm_unpacklo_ps(zmm0, (*(arg4 + rax_234)).q).q << 0x40
                        zmm1 = data_142fc95e0 & zmm6
                        uint128_t var_368_3 = zmm9
                        zmm9 = _mm_unpacklo_ps(*(zx.q(zmm1.d) + rcx_50), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + rbp_32)).q).q | _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + rbx_44), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + rdi_64)).q).q << 0x40
                        zmm0 = data_142fc95f0 & zmm6
                        arg8 = zmm7
                        zmm7 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_50), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_32)).q).q | _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbx_44), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rdi_64)).q).q << 0x40
                        zmm0 = data_143442650 & zmm6
                        zmm2 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_50), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_32)).q).q | _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbx_44), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rdi_64)).q).q << 0x40
                        zmm0 = data_143442660 & zmm6
                        float temp0_1169[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_50), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_32)).q)
                        zmm1 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbx_44), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rdi_64)).q)
                        zmm8 = temp0_1169[0].q | zmm1.q << 0x40
                        zmm0 = data_143442670 & zmm6
                        float var_308_3[0x4] = arg8
                        float temp0_1174[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_50), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_32)).q)
                        zmm1 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbx_44), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rdi_64)).q)
                        arg8 = temp0_1174[0].q | zmm1.q << 0x40
                        arg7 = __paddq_xmmdq_memdq(arg7, var_338_2)
                        zmm13 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm13, var_318_2), arg5)
                        arg7 = _mm_add_epi64(arg7, temp0_1090)
                        zmm0 = _mm_shuffle_epi32(zmm6, 0x50) & arg7
                        zmm1 = _mm_shuffle_epi32(zmm6, 0xfa) & zmm13
                        int64_t rcx_51 = _mm_shuffle_epi32(zmm0, 0x4e).q
                        int64_t rbx_45 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), zx.q(*(arg4 + rcx_51))), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm1.q)), zx.o(*(arg4 + rbx_45))[0].q)
                                .q)
                        zmm1 = zmm0
                        zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm0 &= data_143442680
                        zmm1 = _mm_srli_epi32(zmm1, 0x15)
                        zmm6 = __addps_xmmps_memps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442490)), 
                                    data_1434426a0), 
                                zmm2), 
                            var_378_5)
                        zmm0 = data_143442440
                        zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                        arg5 = data_143442690
                        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(zmm3, arg5), zmm8), zmm9)
                        zmm9 = var_368_3
                        zmm1 = _mm_mul_ps(
                            _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm0)), arg5), arg8)
                        arg8 = var_308_3
                        zmm1 = _mm_add_ps(zmm1, zmm7)
                        zmm2 = var_398_4
                    case 4, 5
                        goto label_14031bf4a
                    case 6
                        rax_256 = temp0_1081
                        zmm1 = zx.o(0)
                        zmm0 = zx.o(0)
                        zmm2 = var_398_4
                        
                        if ((rax_256 & 4) == 0)
                            goto label_14031bf7d
                        
                        goto label_14031bf79
            float temp0_1219[0x4] = _mm_sub_ps(zmm6, zmm5)
            zmm3 = _mm_sub_ps(zmm3, zmm14)
            float temp0_1221[0x4] = _mm_mul_ps(temp0_1219, zmm2)
            arg5 = zmm5
            char temp6_1 = temp0_1081 & 1
            
            if (temp6_1 != 0)
                arg5.d = zmm5.d f+ temp0_1221[0]
                zmm1 = _mm_sub_ps(zmm1, zmm10)
                zmm3 = _mm_mul_ps(zmm3, zmm2)
                zmm7 = zmm14
                
                if (temp6_1 != 0)
                    goto label_14031c0f1
                
                goto label_14031c03d
            
            zmm1 = _mm_sub_ps(zmm1, zmm10)
            zmm3 = _mm_mul_ps(zmm3, zmm2)
            zmm7 = zmm14
            
            if (temp6_1 != 0)
            label_14031c0f1:
                zmm7.d = zmm14.d f+ zmm3[0]
                zmm2 = _mm_mul_ps(zmm2, zmm1)
                zmm1 = zmm10
                
                if (temp6_1 != 0)
                    goto label_14031c04e
                
                goto label_14031c102
            
        label_14031c03d:
            zmm2 = _mm_mul_ps(zmm2, zmm1)
            zmm1 = zmm10
            bool cond:80_1
            bool cond:81_1
            bool cond:86_1
            bool cond:87_1
            
            if (temp6_1 != 0)
            label_14031c04e:
                zmm1.d = zmm10.d f+ zmm2.d
                zmm5 = _mm_add_ps(zmm5, temp0_1221)
                char temp13_1 = temp0_1081 & 2
                cond:80_1 = temp13_1 == 0
                cond:81_1 = temp13_1 != 0
                cond:86_1 = temp13_1 == 0
                cond:87_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                    goto label_14031c119
                
                goto label_14031c05e
            
        label_14031c102:
            zmm5 = _mm_add_ps(zmm5, temp0_1221)
            char temp12_1 = temp0_1081 & 2
            cond:80_1 = temp12_1 == 0
            cond:81_1 = temp12_1 != 0
            cond:86_1 = temp12_1 == 0
            cond:87_1 = temp12_1 != 0
            
            if (temp12_1 != 0)
            label_14031c119:
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, arg5, 1), arg5, 0xe2)
                zmm14 = _mm_add_ps(zmm14, zmm3)
                
                if (cond:81_1)
                    goto label_14031c074
                
                goto label_14031c126
            
        label_14031c05e:
            zmm14 = _mm_add_ps(zmm14, zmm3)
            
            if (not(cond:80_1))
            label_14031c074:
                zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, zmm7, 1), zmm7, 0xe2)
                zmm10 = _mm_add_ps(zmm10, zmm2)
                
                if (cond:87_1)
                    goto label_14031c13c
                
                goto label_14031c081
            
        label_14031c126:
            zmm10 = _mm_add_ps(zmm10, zmm2)
            bool cond:106_1
            bool cond:107_1
            bool cond:112_1
            bool cond:113_1
            
            if (not(cond:86_1))
            label_14031c13c:
                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 1), zmm1, 0xe2)
                char temp17_1 = temp0_1081 & 4
                cond:106_1 = temp17_1 == 0
                cond:107_1 = temp17_1 != 0
                cond:112_1 = temp17_1 == 0
                cond:113_1 = temp17_1 != 0
                
                if (temp17_1 != 0)
                    goto label_14031c091
                
                goto label_14031c148
            
        label_14031c081:
            char temp16_1 = temp0_1081 & 4
            cond:106_1 = temp16_1 == 0
            cond:107_1 = temp16_1 != 0
            cond:112_1 = temp16_1 == 0
            cond:113_1 = temp16_1 != 0
            
            if (temp16_1 == 0)
            label_14031c148:
                
                if (not(cond:106_1))
                label_14031c156:
                    zmm7 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm14, zmm7, 0x32), 0x84)
                    
                    if (cond:113_1)
                        goto label_14031c0a9
                    
                    goto label_14031c160
            else
            label_14031c091:
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm5, arg5, 0x32), 0x84)
                
                if (cond:107_1)
                    goto label_14031c156
            
            bool cond:128_1
            bool cond:129_1
            bool cond:133_1
            bool cond:134_1
            
            if (not(cond:112_1))
            label_14031c0a9:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x32), 0x84)
                char temp19_1 = temp0_1081 & 8
                cond:128_1 = temp19_1 == 0
                cond:129_1 = temp19_1 != 0
                cond:133_1 = temp19_1 == 0
                cond:134_1 = temp19_1 != 0
                
                if (temp19_1 != 0)
                    goto label_14031c171
                
                goto label_14031c0b6
            
        label_14031c160:
            char temp18_1 = temp0_1081 & 8
            cond:128_1 = temp18_1 == 0
            cond:129_1 = temp18_1 != 0
            cond:133_1 = temp18_1 == 0
            cond:134_1 = temp18_1 != 0
            
            if (temp18_1 != 0)
            label_14031c171:
                zmm5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm5, arg5, 0x23), 0x24)
                
                if (cond:129_1)
                    goto label_14031c0c9
                
                goto label_14031c17a
            
        label_14031c0b6:
            zmm5 = arg5
            
            if (cond:128_1)
            label_14031c17a:
                zmm14 = zmm7
                zmm7 = arg8
                
                if (not(cond:133_1))
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
            else
            label_14031c0c9:
                zmm14 = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm14, zmm7, 0x23), 0x24)
                zmm7 = arg8
                
                if (cond:134_1)
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm10, zmm1, 0x23), 0x24)
            
            zmm10 = zmm1
        
        zmm0 = zx.o(zmm10.q)
        zmm10 = _mm_unpackhi_ps(zmm10, zx.o(0))
        zmm1 = _mm_unpacklo_ps(zmm5, zmm14.q)
        zmm5 = _mm_unpackhi_ps(zmm5, zmm14)
        int32_t var_168[0x4] = _mm_shuffle_ps(zmm1, zmm0, 0x84)
        uint128_t var_158_1 = _mm_shuffle_ps(zmm1, zmm0, 0xde)
        uint128_t var_148_1 = zmm5.q | zmm10.q << 0x40
        uint128_t var_138_1 = _mm_unpackhi_pd(zmm5, zmm10.q)
        i_4 = zx.q(_mm_movemask_ps(zmm9))
        
        do
            uint64_t rcx_53
            uint64_t rflags_1
            
            if (i_4 == 0)
                rcx_53 = 0x40
            else
                rcx_53, rflags_1 = _bit_scan_forward(i_4)
            uint128_t var_178 = arg6.q | zmm7.q << 0x40
            *(arg1 + sx.q(*(&var_178 + ((zx.q(rcx_53.d) & 3) << 2))) * 0x30 + 0x10) =
                (&var_168)[rcx_53]
            i_4 &= rol.q(-2, rcx_53.b)
        while (i_4 != 0)
else
    var_2e8 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
    uint128_t var_1b8_1 = _mm_shuffle_epi32(_mm_add_epi64(3, zx.o(arg4)), 0x44)
    int32_t rcx_2
    rcx_2.b = 0f f>= zmm2.d
    uint128_t var_198_1 = _mm_shuffle_epi32(zx.o(neg.d(rcx_2)), 0)
    uint128_t var_1c8_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
    zmm1.d = float.s(r10 - 1)
    zmm1.d = zmm1.d f* zmm2.d
    int32_t rax_5 = int.d(zmm1.d)
    r13 = 0
    
    if (rax_5 s< 0)
        rax_5 = 0
    
    if (rax_5 s> r10 - 2)
        rax_5 = r10 - 2
    
    uint128_t var_378_1 = _mm_shuffle_epi32(zx.o(rax_5), 0)
    uint128_t var_1e8_1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    int32_t rax_6
    rax_6.b = r15.d == 3
    uint128_t var_1a8_1 = _mm_shuffle_epi32(0x18 & zx.o(neg.d(rax_6)), 0)
    arg8 = _mm_cmpeq_epi32(arg8, arg8)
    
    do
        int64_t rax_9 = sx.q((r13 << 3).d)
        zmm6 = *(arg2 + rax_9)
        zmm8 = *(arg2 + rax_9 + 0x10)
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm6, zmm8, 0xdd), 4)
        int64_t rax_11 = sx.q(zmm0.d)
        int64_t r11_1 = sx.q(*(arg3 + rax_11))
        int64_t rcx_6 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        int64_t rbp_1 = sx.q(*(arg3 + rcx_6))
        int64_t rdi_1 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        int64_t rbx_2 = sx.q(*(arg3 + rdi_1))
        int64_t rsi_2 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        int64_t r14_1 = sx.q(*(arg3 + rsi_2))
        zmm9 = _mm_unpacklo_epi32(zx.o(rbx_2.d), zx.q(r14_1.d))
        zmm10 = _mm_unpacklo_epi32(zx.o(r11_1.d), zx.q(rbp_1.d))
        zmm14 = _mm_unpacklo_epi64(zmm10, zmm9.q)
        zmm1 = zx.o(*(arg3 + rsi_2 + 4))
        zmm2 = _mm_unpacklo_epi32(zx.o(*(arg3 + rdi_1 + 4)), zmm1.q)
        zmm0 = zx.o(*(arg3 + rcx_6 + 4))
        zmm5 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(arg3 + rax_11 + 4)), zmm0.q), zmm2.q)
        zmm2 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm9, zmm10.q))
        int32_t temp0_35[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm14)
        arg5 = _mm_cmpgt_epi32(data_1434422d0, zmm5) | var_198_1
        uint32_t temp0_37 = _mm_movemask_ps(arg5)
        uint128_t var_2c8_1 = arg5
        zmm7 = arg5 ^ arg8
        arg5 = _mm_cmpeq_epi32(arg5, arg5)
        
        if (temp0_37 != 0)
            arg5 = zmm7
        
        zmm13 = __pshufd_xmmdq_memdq_immb(var_2e8, 0xf5)
        zmm9 = _mm_unpacklo_epi32(zmm9, zmm2.q)
        zmm10 = _mm_unpacklo_epi32(zmm10, temp0_35[0].q)
        arg7 &= arg5
        arg5 &= arg6
        uint128_t var_398_1 = zmm7
        uint32_t temp0_42 = _mm_movemask_ps(zmm7)
        float var_338_1[0x4] = zmm6
        uint128_t var_318_1 = zmm9
        uint128_t var_188_1 = zmm14
        uint128_t var_328_1 = zmm13
        
        if (temp0_42 == 0)
            zmm0 = zx.o(0)
        else
            zmm7 = _mm_add_epi32(zmm5, arg8)
            
            if (arg10 f>= 1f)
                zmm7 &= var_398_1
                arg7 = (arg7 & var_2c8_1) | zmm7
                arg5 = (arg5 & var_2c8_1) | zmm7
                zmm0 = zx.o(0)
            else
                float var_2d8_1[0x4] = zmm8
                uint128_t var_2f8_1 = arg7
                zmm0 = _mm_shuffle_ps(zmm0, zmm1, 0)
                uint128_t var_388_1 = zmm5
                zmm1 = __pmuludq_xmmdq_memdq(zmm5, var_2e8)
                zmm0 = _mm_mul_epu32(zmm0, zmm13)
                zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm1, 0xe8), 
                    _mm_shuffle_epi32(zmm0, 0xe8).q)
                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                int32_t temp0_52[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm1 = _mm_unpacklo_epi32(zmm1, zmm2.q)
                zmm0 = _mm_unpacklo_epi32(zmm0, temp0_52[0].q)
                zmm8 = _mm_add_epi64(_mm_add_epi64(var_1b8_1, zmm10), zmm1)
                zmm13 = _mm_add_epi64(_mm_add_epi64(var_1b8_1, zmm9), zmm0)
                zmm0 = data_143442c10
                zmm8 &= zmm0
                zmm13 &= zmm0
                zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(zmm7), var_1c8_1))
                zmm1 = __pcmpgtd_xmmdq_memdq(zmm0, data_142d8f750) & zmm0
                arg7 = _mm_cmpgt_epi32(zmm7, zmm1)
                uint128_t var_288_1 = zmm7
                arg7 = (arg7 & not.o(zmm7)) | (zmm1 & arg7)
                
                if (r10 s< 0x100)
                    zmm0 = _mm_shuffle_epi32(arg7, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    zmm1 = _mm_add_epi64(
                        _mm_unpacklo_epi32(arg7, _mm_cmpgt_epi32(zx.o(0), arg7)[0].q), zmm8)
                    char rcx_7 = temp0_42.b
                    zmm6 = var_398_1
                    uint128_t var_228
                    
                    if ((rcx_7 & 1) != 0)
                        zmm5 = arg5
                        arg5.d = zx.o(*zmm1.q)[0]
                        zmm3 = arg5
                        arg5 = zmm5
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                        
                        if ((rcx_7 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_228
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                        
                        if ((rcx_7 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    
                    zmm0 = _mm_add_epi64(zmm0, zmm13)
                    
                    if ((rcx_7 & 4) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm0.q), zmm3, 0x30), 0x84)
                        
                        if ((rcx_7 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else if ((rcx_7 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                            0x24)
                    
                    zmm2 = __pcmpgtd_xmmdq_memdq(__andps_xmmxud_memxud(zmm3, data_142ed6810), 
                        var_378_1)
                    var_228 = zmm3
                    uint128_t var_1d8_1 = zmm2 ^ arg8
                    
                    if (_mm_movemask_ps(zmm2 & not.o(zmm6)) == 0)
                        arg8 = arg5
                        zmm7 = arg7
                        zmm14 = var_288_1
                    else
                        zmm5 = arg5
                        arg5 = zmm6
                        zmm6 = var_288_1
                        arg6 = (zmm2 & not.o(zmm6)) | (zmm2 & arg7)
                        zmm0 = _mm_sub_epi32(arg7, arg8)
                        zmm2 &= not.o(_mm_cmpgt_epi32(zmm0, zmm6) ^ arg8)
                        zmm1 = arg5 & zmm2
                        uint32_t j = _mm_movemask_ps(zmm1)
                        arg8 = zmm5
                        
                        if (j == 0)
                            zmm7 = arg6
                            zmm14 = var_288_1
                        else
                            zmm9 = _mm_cmpeq_epi32(zmm9, zmm9)
                            zmm3 = arg7
                            zmm14 = var_288_1
                            
                            do
                                zmm6 = zmm0
                                uint128_t temp0_133 = _mm_shuffle_epi32(zmm0, 0x4e)
                                arg5 = _mm_cmpgt_epi32(zx.o(0), temp0_133)
                                zmm0 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0).q), 
                                    zmm8)
                                char temp0_138 = _mm_movemask_ps(zmm1)
                                uint128_t var_278
                                
                                if ((temp0_138 & 1) != 0)
                                    zmm5.d = zx.d(*zmm0.q)
                                    zmm1 = zmm5
                                    zmm7 = _mm_unpacklo_epi32(temp0_133, arg5.q)
                                    
                                    if ((temp0_138 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                else
                                    zmm1 = var_278
                                    zmm7 = _mm_unpacklo_epi32(temp0_133, arg5.q)
                                    
                                    if ((temp0_138 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                
                                zmm7 = _mm_add_epi64(zmm7, zmm13)
                                
                                if ((temp0_138 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm7.q), zmm1, 0x30), 0x84)
                                    
                                    if ((temp0_138 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                else if ((temp0_138 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                var_278 = zmm1
                                zmm0 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_142ed6810), var_378_1) & zmm2
                                zmm1 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & var_398_1) != j)
                                    zmm1 = zmm0 ^ zmm2
                                
                                zmm7 = (zmm0 & not.o(arg6)) | (zmm3 & zmm0)
                                zmm0 = _mm_sub_epi32(zmm6, zmm9)
                                zmm2 = _mm_cmpgt_epi32(zmm0, zmm14) & not.o(zmm1)
                                zmm1 = zmm2 & var_398_1
                                j = _mm_movemask_ps(zmm1)
                                zmm3 = zmm6
                                arg6 = zmm7
                            while (j != 0)
                    
                    float var_258[0x4]
                    
                    if (_mm_movemask_ps(_mm_andnot_ps(var_1d8_1, var_398_1)) == 0)
                        zmm0 = zmm7
                        zmm9 = _mm_cmpeq_epi32(zmm9, zmm9)
                        zmm6 = var_258
                    else
                        zmm7 &= var_1d8_1
                        zmm9 = _mm_cmpeq_epi32(zmm9, zmm9)
                        arg7 = _mm_add_epi32(arg7, zmm9)
                        zmm1 = __pcmpgtd_xmmdq_memdq(arg7, data_142d8f750) & (var_1d8_1 ^ zmm9)
                        zmm2 = zmm1 & var_398_1
                        uint32_t j_1 = _mm_movemask_ps(zmm2)
                        
                        if (j_1 == 0)
                            zmm0 = zmm7
                            zmm6 = var_258
                        else
                            zmm6 = var_258
                            
                            do
                                zmm0 = _mm_shuffle_epi32(arg7, 0x4e)
                                arg5 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                int32_t temp0_242[0x4] = _mm_add_epi64(
                                    _mm_unpacklo_epi32(arg7, _mm_cmpgt_epi32(zx.o(0), arg7).q), 
                                    zmm8)
                                char temp0_243 = _mm_movemask_ps(zmm2)
                                
                                if ((temp0_243 & 1) == 0)
                                    zmm0 = _mm_unpacklo_epi32(zmm0, arg5.q)
                                    
                                    if ((temp0_243 & 2) != 0)
                                        goto label_1403189c5
                                    
                                    goto label_140318a28
                                
                                zmm6[0] = zx.d(*temp0_242[0].q)
                                zmm0 = _mm_unpacklo_epi32(zmm0, arg5.q)
                                
                                if ((temp0_243 & 2) != 0)
                                label_1403189c5:
                                    zmm6 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(temp0_242, 0x4e).q), 
                                            zmm6, 0), 
                                        zmm6, 0xe2)
                                    zmm0 = _mm_add_epi64(zmm0, zmm13)
                                    
                                    if ((temp0_243 & 4) == 0)
                                        goto label_140318a31
                                    
                                    goto label_1403189e1
                                
                            label_140318a28:
                                zmm0 = _mm_add_epi64(zmm0, zmm13)
                                
                                if ((temp0_243 & 4) != 0)
                                label_1403189e1:
                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                        _mm_shuffle_ps(zx.o(*zmm0.q), zmm6, 0x30), 0x84)
                                    
                                    if ((temp0_243 & 8) != 0)
                                        zmm6 = _mm_shuffle_ps(zmm6, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm6, 0x20), 
                                            0x24)
                                else
                                label_140318a31:
                                    
                                    if ((temp0_243 & 8) != 0)
                                        zmm6 = _mm_shuffle_ps(zmm6, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm6, 0x20), 
                                            0x24)
                                
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm6, data_142ed6810), var_378_1)
                                    & not.o(zmm1)
                                zmm5 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm3 & var_398_1) != j_1)
                                    zmm5 = zmm3 ^ zmm1
                                
                                zmm0 = (zmm3 & not.o(zmm7)) | (zmm3 & arg7)
                                arg7 = _mm_add_epi32(arg7, zmm9)
                                zmm1 = _mm_cmpgt_epi32(arg7, zx.o(0)) & zmm5
                                zmm2 = zmm1 & var_398_1
                                j_1 = _mm_movemask_ps(zmm2)
                                zmm7 = zmm0
                            while (j_1 != 0)
                    
                    arg7 = (zmm0 & var_398_1) | (var_2f8_1 & var_2c8_1)
                    zmm0 = _mm_shuffle_epi32(arg7, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    zmm1 = _mm_add_epi64(
                        _mm_unpacklo_epi32(arg7, _mm_cmpgt_epi32(zx.o(0), arg7)[0].q), zmm8)
                    var_258 = zmm6
                    uint128_t var_238
                    
                    if ((rcx_7 & 1) != 0)
                        arg5.d = zx.o(*zmm1.q)[0]
                        zmm3 = arg5
                        arg5 = arg8
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                        
                        if ((rcx_7 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_238
                        arg5 = arg8
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                        
                        if ((rcx_7 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    
                    zmm0 = _mm_add_epi64(zmm0, zmm13)
                    
                    if ((rcx_7 & 4) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm0.q), zmm3, 0x30), 0x84)
                        
                        if ((rcx_7 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else if ((rcx_7 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                            0x24)
                    
                    arg5 = (_mm_sub_epi32(arg7, zmm9) & var_398_1) | (arg5 & var_2c8_1)
                    zmm0 = _mm_cmpgt_epi32(arg5, zmm14) & var_398_1
                    var_238 = zmm3
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        arg5 = (zmm14 & zmm0) | (zmm0 & not.o(arg5))
                    
                    zmm9 = var_318_1
                    zmm0 = _mm_shuffle_epi32(arg5, 0x4e)
                    zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    zmm8 = _mm_add_epi64(zmm8, 
                        _mm_unpacklo_epi32(arg5, _mm_cmpgt_epi32(zx.o(0), arg5).q))
                    int32_t var_208[0x4]
                    
                    if ((rcx_7 & 1) != 0)
                        zmm3 = var_208
                        zmm3[0] = zx.d(*zmm8[0].q)
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                        
                        if ((rcx_7 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm8, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_208
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                        
                        if ((rcx_7 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm8, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    
                    zmm8 = var_2d8_1
                    zmm13 = _mm_add_epi64(zmm13, zmm0)
                    
                    if ((rcx_7 & 4) != 0)
                        zmm3 =
                            _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm13.q), zmm3, 0x30), 0x84)
                        
                        if ((rcx_7 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm13, 0x4e).q), zmm3, 
                                    0x20), 
                                0x24)
                    else if ((rcx_7 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm13, 0x4e).q), zmm3, 0x20), 
                            0x24)
                    
                    zmm5 = var_388_1
                    zmm13 = var_328_1
                    zmm1 = data_142ed6810
                    zmm2 = zmm1
                    zmm0 = _mm_and_ps(var_238, zmm1)
                    var_208 = zmm3
                else
                    zmm1 = _mm_add_epi32(arg7, arg7)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    zmm1 = _mm_add_epi64(
                        _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1)[0].q), zmm8)
                    char r10_1 = temp0_42.b
                    zmm6 = var_398_1
                    int32_t var_1f8[0x4]
                    
                    if ((r10_1 & 1) != 0)
                        zmm5 = arg5
                        arg5.d = zx.o(*zmm1.q)[0]
                        zmm3 = arg5
                        arg5 = zmm5
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                        
                        if ((r10_1 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_1f8
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                        
                        if ((r10_1 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    
                    zmm0 = _mm_add_epi64(zmm0, zmm13)
                    uint128_t var_2b8_1
                    
                    if ((r10_1 & 4) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm0.q), zmm3, 0x30), 0x84)
                        var_2b8_1 = arg5
                        
                        if ((r10_1 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else
                        var_2b8_1 = arg5
                        
                        if ((r10_1 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    
                    zmm9 = __pcmpgtd_xmmdq_memdq(__andps_xmmxud_memxud(zmm3, data_143442cd0), 
                        var_378_1)
                    zmm5 = zmm9 ^ arg8
                    var_1f8 = zmm3
                    
                    if (_mm_movemask_ps(zmm9 & not.o(zmm6)) == 0)
                        zmm7 = arg7
                    else
                        zmm2 = (zmm9 & not.o(var_288_1)) | (zmm9 & arg7)
                        zmm0 = _mm_sub_epi32(arg7, arg8)
                        zmm9 &= not.o(_mm_cmpgt_epi32(zmm0, var_288_1) ^ arg8)
                        zmm3 = zmm6 & zmm9
                        uint32_t j_2 = _mm_movemask_ps(zmm3)
                        
                        if (j_2 == 0)
                            zmm7 = zmm2
                        else
                            zmm1 = arg7
                            
                            do
                                arg6 = zmm0
                                zmm6 = _mm_add_epi32(zmm0, zmm0)
                                zmm0 = _mm_shuffle_epi32(zmm6, 0x4e)
                                arg5 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                                zmm6 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm6, _mm_cmpgt_epi32(zx.o(0), zmm6).q), 
                                    zmm8)
                                char temp0_99 = _mm_movemask_ps(zmm3)
                                uint128_t var_308
                                
                                if ((temp0_99 & 1) != 0)
                                    zmm7.d = zx.o(*zmm6[0].q)[0]
                                    zmm0 = _mm_unpacklo_epi32(zmm0, arg5.q)
                                    
                                    if ((temp0_99 & 2) != 0)
                                        zmm7 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm6, 0x4e)[0].q), zmm7, 
                                                0), 
                                            zmm7, 0xe2)
                                else
                                    zmm7 = var_308
                                    zmm0 = _mm_unpacklo_epi32(zmm0, arg5.q)
                                    
                                    if ((temp0_99 & 2) != 0)
                                        zmm7 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm6, 0x4e)[0].q), zmm7, 
                                                0), 
                                            zmm7, 0xe2)
                                
                                arg8 = _mm_cmpeq_epi32(arg8, arg8)
                                zmm0 = _mm_add_epi64(zmm0, zmm13)
                                
                                if ((temp0_99 & 4) != 0)
                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                        _mm_shuffle_ps(zx.o(*zmm0.q), zmm7, 0x30), 0x84)
                                    
                                    if ((temp0_99 & 8) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                                zmm7, 0x20), 
                                            0x24)
                                else if ((temp0_99 & 8) != 0)
                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm7, 0x20), 
                                        0x24)
                                
                                var_308 = zmm7
                                zmm0 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm7, data_143442cd0), var_378_1) & zmm9
                                zmm3 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & var_398_1) != j_2)
                                    zmm3 = zmm0 ^ zmm9
                                
                                zmm7 = (zmm0 & not.o(zmm2)) | (zmm1 & zmm0)
                                zmm0 = _mm_sub_epi32(arg6, arg8)
                                zmm9 = _mm_cmpgt_epi32(zmm0, var_288_1) & not.o(zmm3)
                                zmm3 = zmm9 & var_398_1
                                j_2 = _mm_movemask_ps(zmm3)
                                zmm1 = arg6
                                zmm2 = zmm7
                            while (j_2 != 0)
                    
                    uint32_t temp0_158 = _mm_movemask_ps(zmm5 & not.o(var_398_1))
                    uint32_t j_3
                    
                    if (temp0_158 != 0)
                        zmm7 &= zmm5
                        arg7 = _mm_add_epi32(arg7, arg8)
                        zmm3 = __pcmpgtd_xmmdq_memdq(arg7, data_142d8f750) & (zmm5 ^ arg8)
                        zmm1 = zmm3 & var_398_1
                        j_3 = _mm_movemask_ps(zmm1)
                    
                    float var_268[0x4]
                    
                    if (temp0_158 == 0 || j_3 == 0)
                        zmm0 = zmm7
                        zmm6 = var_268
                    else
                        zmm6 = var_268
                        
                        do
                            zmm2 = _mm_add_epi32(arg7, arg7)
                            zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                            arg5 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            zmm2 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2).q), zmm8)
                            char temp0_175 = _mm_movemask_ps(zmm1)
                            
                            if ((temp0_175 & 1) == 0)
                                zmm0 = _mm_unpacklo_epi32(zmm0, arg5.q)
                                
                                if ((temp0_175 & 2) != 0)
                                    goto label_140318585
                                
                                goto label_1403185ef
                            
                            zmm6[0] = zx.d(*zmm2.q)
                            zmm0 = _mm_unpacklo_epi32(zmm0, arg5.q)
                            
                            if ((temp0_175 & 2) != 0)
                            label_140318585:
                                zmm6 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), zmm6, 
                                        0), 
                                    zmm6, 0xe2)
                                zmm0 = _mm_add_epi64(zmm0, zmm13)
                                
                                if ((temp0_175 & 4) == 0)
                                    goto label_1403185f8
                                
                                goto label_1403185a1
                            
                        label_1403185ef:
                            zmm0 = _mm_add_epi64(zmm0, zmm13)
                            
                            if ((temp0_175 & 4) != 0)
                            label_1403185a1:
                                zmm6 = _mm_shuffle_ps(zmm6, 
                                    _mm_shuffle_ps(zx.o(*zmm0.q), zmm6, 0x30), 0x84)
                                
                                if ((temp0_175 & 8) != 0)
                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm6, 0x20), 
                                        0x24)
                            else
                            label_1403185f8:
                                
                                if ((temp0_175 & 8) != 0)
                                    zmm6 = _mm_shuffle_ps(zmm6, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm6, 0x20), 
                                        0x24)
                            
                            zmm2 = __pcmpgtd_xmmdq_memdq(
                                __andps_xmmxud_memxud(zmm6, data_143442cd0), var_378_1) & not.o(zmm3)
                            zmm5 = zx.o(0)
                            
                            if (_mm_movemask_ps(zmm2 & var_398_1) != j_3)
                                zmm5 = zmm2 ^ zmm3
                            
                            zmm0 = (zmm2 & not.o(zmm7)) | (zmm2 & arg7)
                            arg7 = _mm_add_epi32(arg7, arg8)
                            zmm3 = _mm_cmpgt_epi32(arg7, zx.o(0)) & zmm5
                            zmm1 = zmm3 & var_398_1
                            j_3 = _mm_movemask_ps(zmm1)
                            zmm7 = zmm0
                        while (j_3 != 0)
                    
                    arg7 = (zmm0 & var_398_1) | (var_2f8_1 & var_2c8_1)
                    zmm1 = _mm_add_epi32(arg7, arg7)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    zmm1 = _mm_add_epi64(
                        _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1)[0].q), zmm8)
                    var_268 = zmm6
                    int32_t var_248[0x4]
                    
                    if ((r10_1 & 1) != 0)
                        arg5.d = zx.o(*zmm1.q)[0]
                        zmm3 = arg5
                    else
                        zmm3 = var_248
                    
                    zmm9 = var_318_1
                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm2.q)
                    
                    if ((r10_1 & 2) == 0)
                        zmm0 = _mm_add_epi64(zmm0, zmm13)
                        
                        if ((r10_1 & 4) != 0)
                            goto label_140318838
                        
                        goto label_140318746
                    
                    zmm3 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0), zmm3, 0xe2)
                    zmm0 = _mm_add_epi64(zmm0, zmm13)
                    
                    if ((r10_1 & 4) == 0)
                    label_140318746:
                        
                        if ((r10_1 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else
                    label_140318838:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm0.q), zmm3, 0x30), 0x84)
                        
                        if ((r10_1 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    
                    arg5 = (_mm_sub_epi32(arg7, arg8) & var_398_1) | (var_2b8_1 & var_2c8_1)
                    zmm0 = _mm_cmpgt_epi32(arg5, var_288_1) & var_398_1
                    var_248 = zmm3
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        arg5 = (var_288_1 & zmm0) | (zmm0 & not.o(arg5))
                    
                    zmm2 = _mm_add_epi32(arg5, arg5)
                    zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                    zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    zmm8 = _mm_add_epi64(zmm8, 
                        _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q))
                    int32_t var_218[0x4]
                    
                    if ((r10_1 & 1) != 0)
                        zmm3 = var_218
                        zmm3[0] = zx.d(*zmm8[0].q)
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                        
                        if ((r10_1 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm8, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_218
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1.q)
                        
                        if ((r10_1 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm8, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    
                    zmm8 = var_2d8_1
                    zmm13 = _mm_add_epi64(zmm13, zmm0)
                    
                    if ((r10_1 & 4) != 0)
                        zmm3 =
                            _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm13.q), zmm3, 0x30), 0x84)
                        
                        if ((r10_1 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm13, 0x4e).q), zmm3, 
                                    0x20), 
                                0x24)
                    else if ((r10_1 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm13, 0x4e).q), zmm3, 0x20), 
                            0x24)
                    
                    r10 = arg9
                    zmm5 = var_388_1
                    zmm13 = var_328_1
                    zmm1 = data_143442cd0
                    zmm2 = zmm1
                    zmm0 = _mm_and_ps(var_248, zmm1)
                    var_218 = zmm3
                
                zmm1 = _mm_and_ps(zmm3, zmm2)
                zmm2 = zx.o(0)
                
                if (arg11 != 1)
                    zmm1 = _mm_sub_epi32(zmm1, zmm0)
                    zmm2 = data_142d3f5b0
                    int32_t temp0_292[0x4] = _mm_cmpgt_epi32(zmm1, zmm2)
                    zmm2 = _mm_div_ps(_mm_sub_ps(var_1e8_1, _mm_cvtepi32_ps(zmm0)), 
                        _mm_cvtepi32_ps((temp0_292 & not.o(zmm2)) | (zmm1 & temp0_292)))
                
                zmm0 = _mm_and_ps(var_398_1, zmm2)
        
        uint128_t var_398_2 = zmm0
        zmm5 = __pcmpgtd_xmmdq_memdq(zmm5, data_142d3f5b0) & var_1a8_1
        arg8 = zx.o(0)
        zmm14 = _mm_unpackhi_epi32(zmm5, arg8[0].q)
        zmm5 = _mm_unpacklo_epi32(zmm5, arg8[0].q)
        zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(__pmuludq_xmmdq_memdq(arg7, var_2e8), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg7, 0xf5), zmm13), 0xe8).q)
        int32_t temp0_307[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
        zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
        zmm0 = _mm_unpacklo_epi32(zmm0, temp0_307[0].q)
        zmm1 = _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1)[0].q)
        uint128_t var_2a8_1 = zmm10
        uint128_t var_388_2 = zmm5
        
        if (r15.d u< 2)
            zmm13 = _mm_cmpeq_epi32(zmm13, zmm13)
            int32_t temp0_352[0x4] = _mm_add_epi64(zmm5, zmm10)
            zmm2 = arg5
            arg5 = _mm_add_epi64(_mm_add_epi64(zmm14, zmm9), zmm1)
            int32_t temp0_355[0x4] = _mm_add_epi64(temp0_352, zmm0)
            int64_t rax_83 = temp0_355[0].q
            int64_t rcx_9 = _mm_shuffle_epi32(temp0_355, 0x4e).q
            int64_t rbp_3 = arg5.q
            zmm0 = _mm_shuffle_epi32(arg5, 0x4e)
            arg5 = zmm2
            int64_t rbx_4 = zmm0.q
            zmm6 = *(arg4 + rax_83 + 4)
            zmm9 = _mm_unpacklo_epi32(zx.o(*(arg4 + rax_83)), zx.q(*(arg4 + rcx_9)))
            float temp0_359[0x4] = _mm_unpacklo_ps(zmm6, (*(arg4 + rcx_9 + 4)).q)
            zmm1 = *(arg4 + rbp_3 + 4)
            zmm9 = _mm_unpacklo_epi64(zmm9, 
                _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_3)), zx.o(*(arg4 + rbx_4))[0].q).q)
            zmm1 = _mm_unpacklo_ps(zmm1, (*(arg4 + rbx_4 + 4)).q)
            zmm6 = temp0_359[0].q | zmm1.q << 0x40
            arg8 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_83 + 8)), zx.q(*(arg4 + rcx_9 + 8))), 
                _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_3 + 8)), zx.q(*(arg4 + rbx_4 + 8))).q)
        else
            zmm13 = _mm_cmpeq_epi32(zmm13, zmm13)
            
            if (r15.d == 2)
                int32_t temp0_366[0x4] = _mm_add_epi64(var_388_2, zmm10)
                zmm2 = arg5
                arg5 = _mm_add_epi64(_mm_add_epi64(zmm14, zmm9), zmm1)
                int32_t temp0_369[0x4] = _mm_add_epi64(temp0_366, zmm0)
                int64_t rbx_5 = temp0_369[0].q
                int64_t rbp_4 = _mm_shuffle_epi32(temp0_369, 0x4e).q
                int64_t rax_84 = arg5.q
                int64_t rcx_10 = _mm_shuffle_epi32(arg5, 0x4e).q
                zmm0 = _mm_unpacklo_epi16(
                    __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbx_5)), *(arg4 + rbp_4), 1), 
                            *(arg4 + rax_84), 2), 
                        *(arg4 + rcx_10), 3), 
                    0)
                zmm3 = data_1434424d0
                uint128_t temp0_377 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm3))
                zmm0 = __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbx_5 + 2)), *(arg4 + rbp_4 + 2), 
                            1), 
                        *(arg4 + rax_84 + 2), 2), 
                    *(arg4 + rcx_10 + 2), 3)
                arg5 = data_1434426d0
                zmm9 = _mm_div_ps(temp0_377, arg5)
                float temp0_384[0x4] =
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), zmm3))
                zmm0 = __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbx_5 + 4)), *(arg4 + rbp_4 + 4), 
                            1), 
                        *(arg4 + rax_84 + 4), 2), 
                    *(arg4 + rcx_10 + 4), 3)
                float temp0_388[0x4] = _mm_div_ps(temp0_384, arg5)
                float temp0_392[0x4] = _mm_div_ps(
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), zmm3)), arg5)
                arg5 = zmm2
                zmm0 = data_143442710
                zmm9 = _mm_mul_ps(zmm9, zmm0)
                zmm6 = _mm_mul_ps(temp0_388, zmm0)
                arg8 = _mm_mul_ps(temp0_392, zmm0)
            else
                zmm6 = zx.o(0)
                zmm9 = zx.o(0)
                
                if (r15.d == 3)
                    zmm2 = arg5
                    arg5 = *(arg4 + r14_1 + 4)
                    float temp0_313[0x4] = _mm_unpacklo_ps(*(arg4 + rbx_2), (*(arg4 + r14_1))[0].q)
                    zmm3 = _mm_unpacklo_ps(*(arg4 + rbx_2 + 4), arg5.q)
                    zmm7 = *(arg4 + rbp_1 + 4)
                    arg8 = arg7
                    arg7 = _mm_unpacklo_ps(*(arg4 + r11_1), (*(arg4 + rbp_1)).q).q
                        | temp0_313[0].q << 0x40
                    float var_2d8_2[0x4] = zmm8
                    zmm8 = _mm_unpacklo_ps(*(arg4 + r11_1 + 4), zmm7.q)[0].q | zmm3[0].q << 0x40
                    arg6 = _mm_unpacklo_ps(*(arg4 + r11_1 + 8), (*(arg4 + rbp_1 + 8))[0].q).q
                        | _mm_unpacklo_ps(*(arg4 + rbx_2 + 8), (*(arg4 + r14_1 + 8))[0].q)[0].q
                        << 0x40
                    float temp0_319[0x4] =
                        _mm_unpacklo_ps(*(arg4 + r11_1 + 0xc), (*(arg4 + rbp_1 + 0xc))[0].q)
                    zmm3 = _mm_unpacklo_ps(*(arg4 + rbx_2 + 0xc), (*(arg4 + r14_1 + 0xc)).q)
                    zmm6 = temp0_319[0].q | zmm3[0].q << 0x40
                    zmm7 = _mm_unpacklo_ps(*(arg4 + r11_1 + 0x10), (*(arg4 + rbp_1 + 0x10))[0].q).q
                        | _mm_unpacklo_ps(*(arg4 + rbx_2 + 0x10), (*(arg4 + r14_1 + 0x10)).q)[0].q
                        << 0x40
                    zmm3 = _mm_unpacklo_ps(*(arg4 + r11_1 + 0x14), (*(arg4 + rbp_1 + 0x14)).q)
                    arg5 = _mm_unpacklo_ps(*(arg4 + rbx_2 + 0x14), (*(arg4 + r14_1 + 0x14)).q)
                    zmm3 = zmm3[0].q | arg5.q << 0x40
                    arg5 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm14, var_318_1), zmm1)
                    zmm1 = _mm_add_epi64(__paddq_xmmdq_memdq(var_388_2, var_2a8_1), zmm0)
                    int64_t rcx_8 = _mm_shuffle_epi32(zmm1, 0x4e).q
                    int64_t rbx_3 = _mm_shuffle_epi32(arg5, 0x4e).q
                    zmm0 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm1.q)), zx.q(*(arg4 + rcx_8))), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + arg5.q)), zx.q(*(arg4 + rbx_3))).q)
                    zmm1 = zmm0
                    zmm9 = _mm_add_ps(
                        _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0), 
                            zmm6), 
                        arg7)
                    arg7 = arg8
                    arg5 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    zmm0 = data_143442440
                    float temp0_341[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                    arg5 = data_143442690
                    zmm6 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_341, arg5), zmm7), zmm8)
                    zmm8 = var_2d8_2
                    float temp0_348[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm1, 0x15), zmm0)), arg5)
                    arg5 = zmm2
                    arg8 = _mm_add_ps(_mm_mul_ps(temp0_348, zmm3), arg6)
        
        zmm7 = _mm_cmpeq_epi32(arg7, arg5) ^ zmm13
        char temp0_397 = _mm_movemask_ps(zmm7)
        
        if (temp0_397 == 0)
            arg6 = arg5
            zmm7 = var_338_1
        else
            uint128_t var_2b8_2 = arg5
            uint128_t var_368
            int32_t var_358[0x4]
            uint128_t var_348
            int64_t rcx_13
            int64_t rbx_9
            int64_t rbp_17
            int64_t rsi_30
            uint64_t rsi_29
            
            if (r15.d u> 6)
            label_140319857:
                rsi_29 = zx.q(temp0_397)
                rbx_9 = rsi_29 & 1
                
                if (rbx_9 == 0)
                    arg5 = var_368
                    zmm3 = var_358
                    zmm2 = var_348
                    zmm7 = var_338_1
                    
                    if (rbx_9 != 0)
                        zmm3[0] = 0
                else
                    arg5.d = zx.o(0).d
                    zmm3 = var_358
                    zmm2 = var_348
                    zmm7 = var_338_1
                    
                    if (rbx_9 != 0)
                        zmm3[0] = 0
                
                bool cond:52_1
                bool cond:53_1
                bool cond:58_1
                bool cond:59_1
                
                if (rbx_9 != 0)
                label_140319c79:
                    zmm2.d = 0
                    rbp_17 = rsi_29 & 2
                    cond:52_1 = rbp_17 == 0
                    cond:53_1 = rbp_17 != 0
                    cond:58_1 = rbp_17 == 0
                    cond:59_1 = rbp_17 != 0
                    
                    if (rbp_17 != 0)
                        goto label_140319d36
                    
                    goto label_140319c8a
                
            label_140319d21:
                rbp_17 = rsi_29 & 2
                cond:52_1 = rbp_17 == 0
                cond:53_1 = rbp_17 != 0
                cond:58_1 = rbp_17 == 0
                cond:59_1 = rbp_17 != 0
                
                if (rbp_17 == 0)
                label_140319c8a:
                    
                    if (not(cond:52_1))
                    label_140319c9b:
                        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm3, 0), zmm3, 0xe2)
                        
                        if (cond:59_1)
                            goto label_140319d50
                        
                        goto label_140319ca7
                else
                label_140319d36:
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), arg5, 0), arg5, 0xe2)
                    
                    if (cond:53_1)
                        goto label_140319c9b
                
                bool cond:82_1
                bool cond:83_1
                bool cond:88_1
                bool cond:89_1
                
                if (not(cond:58_1))
                label_140319d50:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm2, 0), zmm2, 0xe2)
                    rcx_13 = rsi_29 & 4
                    cond:82_1 = rcx_13 == 0
                    cond:83_1 = rcx_13 != 0
                    cond:88_1 = rcx_13 == 0
                    cond:89_1 = rcx_13 != 0
                    
                    if (rcx_13 != 0)
                        goto label_140319cb8
                    
                    goto label_140319d60
                
            label_140319ca7:
                rcx_13 = rsi_29 & 4
                cond:82_1 = rcx_13 == 0
                cond:83_1 = rcx_13 != 0
                cond:88_1 = rcx_13 == 0
                cond:89_1 = rcx_13 != 0
                
                if (rcx_13 == 0)
                label_140319d60:
                    
                    if (not(cond:82_1))
                    label_140319d6d:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x30), 0x84)
                        
                        if (cond:89_1)
                            goto label_140319ccf
                        
                        goto label_140319d77
                else
                label_140319cb8:
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(0), arg5, 0x30), 0x84)
                    
                    if (cond:83_1)
                        goto label_140319d6d
                
                bool cond:108_1
                bool cond:109_1
                bool cond:114_1
                bool cond:115_1
                
                if (not(cond:88_1))
                label_140319ccf:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x30), 0x84)
                    rsi_30 = rsi_29 & 8
                    cond:108_1 = rsi_30 == 0
                    cond:109_1 = rsi_30 != 0
                    cond:114_1 = rsi_30 == 0
                    cond:115_1 = rsi_30 == 0
                    
                    if (rsi_30 != 0)
                        goto label_140319d88
                    
                    goto label_140319cdd
                
            label_140319d77:
                rsi_30 = rsi_29 & 8
                cond:108_1 = rsi_30 == 0
                cond:109_1 = rsi_30 != 0
                cond:114_1 = rsi_30 == 0
                cond:115_1 = rsi_30 == 0
                
                if (rsi_30 != 0)
                label_140319d88:
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(0), arg5, 0x20), 0x24)
                    
                    if (cond:109_1)
                        goto label_140319cea
                    
                    goto label_140319d92
                
            label_140319cdd:
                
                if (cond:108_1)
                label_140319d92:
                    
                    if (not(cond:114_1))
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                else
                label_140319cea:
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x20), 0x24)
                    
                    if (not(cond:115_1))
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
            else
                int32_t temp0_403[0x4] = _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(arg5, var_2e8), 0xe8), 
                    _mm_shuffle_epi32(
                        __pmuludq_xmmdq_memdq(_mm_shuffle_epi32(arg5, 0xf5), var_328_1), 0xe8).q)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), temp0_403)
                zmm0 = _mm_shuffle_epi32(temp0_403, 0x4e)
                int32_t temp0_406[0x4] = _mm_unpacklo_epi32(temp0_403, zmm1.q)
                zmm0 = _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0).q)
                
                switch (r15.d)
                    case 0, 1
                        uint128_t var_2f8_2 = arg7
                        zmm5 = __paddq_xmmdq_memdq(var_388_2, var_2a8_1)
                        zmm14 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm14, var_318_1), zmm0)
                        zmm5 = _mm_add_epi64(zmm5, temp0_406)
                        zmm1 = _mm_shuffle_epi32(zmm7, 0x50)
                        zmm5 &= zmm1
                        zmm3 = _mm_shuffle_epi32(zmm7, 0xfa)
                        zmm14 &= zmm3
                        int64_t rbp_5 = _mm_shuffle_epi32(zmm5, 0x4e).q
                        void* rax_88 = arg4 + rbp_5
                        zmm7 = *(arg4 + rbp_5)
                        int64_t rbp_6 = zmm14.q
                        void* rbx_7 = arg4 + rbp_6
                        arg7 = *(arg4 + rbp_6)
                        int64_t rbp_7 = _mm_shuffle_epi32(zmm14, 0x4e).q
                        void* rdi_16 = arg4 + rbp_7
                        uint128_t var_388_3 = *(arg4 + rbp_7)
                        zmm2 = data_1434426c0
                        zmm0 = zmm1 & zmm2
                        arg5 = zmm3 & zmm2
                        void* rbp_9 = zmm5.q + arg4
                        zmm2 = *(zmm0.q + rbp_9)
                        zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rax_88)
                        zmm13 = *(arg5.q + rbx_7)
                        zmm10 = *(_mm_shuffle_epi32(arg5, 0x4e).q + rdi_16)
                        arg5 = data_1434426e0
                        zmm1 &= arg5
                        zmm3 &= arg5
                        arg5 = *(zmm1.q + rbp_9)
                        zmm1 = *(_mm_shuffle_epi32(zmm1, 0x4e).q + rax_88)
                        zmm14 = *(zmm3[0].q + rbx_7)
                        arg6 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rdi_16)
                        uint64_t rsi_21 = zx.q(temp0_397)
                        rbx_9 = rsi_21 & 1
                        
                        if (rbx_9 != 0)
                            zmm5 = zmm8
                            zmm8 = var_368
                            zmm8[0] = (*rbp_9)[0]
                            var_368 = zmm8
                            zmm8 = zmm5
                        
                        if (rbx_9 == 0)
                            zmm3 = var_358
                            zmm2 = var_348
                            
                            if (rbx_9 != 0)
                                zmm2.d = arg5.d
                        else
                            zmm3 = var_358
                            zmm3[0] = zmm2.d
                            zmm2 = var_348
                            
                            if (rbx_9 != 0)
                                zmm2.d = arg5.d
                        
                        arg5 = var_368
                        rbp_17 = rsi_21 & 2
                        
                        if (rbp_17 != 0)
                            arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, arg5, 0), arg5, 0xe2)
                            
                            if (rbp_17 != 0)
                                goto label_14031995a
                        else if (rbp_17 != 0)
                        label_14031995a:
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm3, 0), zmm3, 0xe2)
                            
                            if (rbp_17 != 0)
                                goto label_1403198fc
                            
                            goto label_140319962
                        
                        bool cond:90_1
                        bool cond:91_1
                        bool cond:97_1
                        bool cond:98_1
                        
                        if (rbp_17 != 0)
                        label_1403198fc:
                            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 0), zmm2, 0xe2)
                            rcx_13 = rsi_21 & 4
                            cond:90_1 = rcx_13 == 0
                            cond:91_1 = rcx_13 != 0
                            cond:97_1 = rcx_13 == 0
                            cond:98_1 = rcx_13 != 0
                            
                            if (rcx_13 != 0)
                                goto label_14031996d
                            
                            goto label_140319908
                        
                    label_140319962:
                        rcx_13 = rsi_21 & 4
                        cond:90_1 = rcx_13 == 0
                        cond:91_1 = rcx_13 != 0
                        cond:97_1 = rcx_13 == 0
                        cond:98_1 = rcx_13 != 0
                        
                        if (rcx_13 == 0)
                        label_140319908:
                            arg7 = var_2f8_2
                            
                            if (not(cond:90_1))
                            label_140319919:
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm13, zmm3, 0x30), 0x84)
                                
                                if (cond:98_1)
                                    goto label_140319985
                                
                                goto label_140319920
                        else
                        label_14031996d:
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(arg7, arg5, 0x30), 0x84)
                            arg7 = var_2f8_2
                            
                            if (cond:91_1)
                                goto label_140319919
                        
                        bool cond:116_1
                        bool cond:122_1
                        bool cond:123_1
                        bool cond:117_1
                        
                        if (cond:97_1)
                        label_140319920:
                            rsi_30 = rsi_21 & 8
                            cond:116_1 = rsi_30 == 0
                            cond:117_1 = rsi_30 != 0
                            cond:122_1 = rsi_30 != 0
                            cond:123_1 = rsi_30 == 0
                            
                            if (rsi_30 != 0)
                            label_14031992f:
                                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(var_388_3, arg5, 0x20), 
                                    0x24)
                                
                                if (cond:117_1)
                                    goto label_140319997
                                
                                goto label_140319935
                        else
                        label_140319985:
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm14, zmm2, 0x30), 0x84)
                            rsi_30 = rsi_21 & 8
                            cond:116_1 = rsi_30 == 0
                            cond:117_1 = rsi_30 != 0
                            cond:122_1 = rsi_30 != 0
                            cond:123_1 = rsi_30 == 0
                            
                            if (rsi_30 != 0)
                                goto label_14031992f
                        
                        if (cond:116_1)
                        label_140319935:
                            zmm7 = var_338_1
                            
                            if (cond:122_1)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg6, zmm2, 0x20), 0x24)
                        else
                        label_140319997:
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x20), 0x24)
                            zmm7 = var_338_1
                            
                            if (not(cond:123_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg6, zmm2, 0x20), 0x24)
                    case 2
                        zmm13 = zmm8
                        zmm2 = __paddq_xmmdq_memdq(var_388_2, var_2a8_1)
                        zmm14 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm14, var_318_1), zmm0)
                        zmm2 = _mm_add_epi64(zmm2, temp0_406)
                        zmm1 = _mm_shuffle_epi32(zmm7, 0x50)
                        zmm2 &= zmm1
                        zmm0 = _mm_shuffle_epi32(zmm7, 0xfa)
                        zmm14 &= zmm0
                        int64_t r10_2 = zmm2.q
                        void* rdi_17 = arg4 + r10_2
                        int64_t rbp_10 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        void* rsi_22 = arg4 + rbp_10
                        int64_t rbx_10 = zmm14.q
                        zmm8 = data_1434426b0
                        zmm3 = zmm1 & zmm8
                        void* rax_91 = zmm3[0].q
                        int16_t* rax_93 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                        zmm3 = data_1434426c0
                        zmm7 = zmm3
                        zmm1 &= zmm3
                        arg5 = __pinsrw_xmmdq_memw_immb(zx.o(*(rax_91 + rdi_17)), 
                            *(rax_93 + rsi_22), 1)
                        uint32_t rax_95 = zx.d(*(zmm1.q + rdi_17))
                        void* rdi_18 = arg4 + rbx_10
                        zmm2 = _mm_shuffle_epi32(zmm14, 0x4e)
                        zmm5 = __pinsrw_xmmdq_memw_immb(zx.o(rax_95), 
                            *(_mm_shuffle_epi32(zmm1, 0x4e).q + rsi_22), 1)
                        zmm3 = zmm0 & zmm8
                        zmm0 &= zmm7
                        arg5 = __pinsrw_xmmdq_memw_immb(arg5, *(zmm3[0].q + rdi_18), 2)
                        zmm5 = __pinsrw_xmmdq_memw_immb(zmm5, *(zmm0.q + rdi_18), 2)
                        int64_t rax_98 = zmm2.q
                        void* rdi_19 = arg4 + rax_98
                        int16_t* rsi_24 = _mm_shuffle_epi32(zmm3, 0x4e).q
                        zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                        arg5 = __pinsrw_xmmdq_memw_immb(arg5, *(rsi_24 + rdi_19), 3)
                        zmm5 = __pinsrw_xmmdq_memw_immb(zmm5, *(zmm0.q + rdi_19), 3)
                        zmm0 = _mm_unpacklo_epi16(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + r10_2)), 
                                        *(arg4 + rbp_10), 1), 
                                    *(arg4 + rbx_10), 2), 
                                *(arg4 + rax_98), 3), 
                            0)
                        zmm1 = data_1434424d0
                        zmm7 = zmm1
                        zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
                        zmm0 = data_1434426d0
                        zmm2 = _mm_div_ps(zmm2, zmm0)
                        zmm1 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(arg5, 0), zmm1)), zmm0)
                        zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm5, 0), zmm7))
                        zmm2 = __mulps_xmmps_memps(zmm2, data_143442710)
                        uint64_t rsi_26 = zx.q(temp0_397)
                        rbx_9 = rsi_26 & 1
                        
                        if (rbx_9 == 0)
                            arg5 = var_368
                        else
                            arg5.d = zmm2.d
                        
                        zmm7 = var_338_1
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426d0)
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143442710)
                        r10 = arg9
                        zmm8 = zmm13
                        
                        if (rbx_9 != 0)
                            var_358[0] = zmm1.d
                            zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                            
                            if (rbx_9 != 0)
                                goto label_140319ac3
                            
                            goto label_140319a22
                        
                        zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                        bool cond:62_1
                        bool cond:63_1
                        bool cond:72_1
                        bool cond:73_1
                        
                        if (rbx_9 != 0)
                        label_140319ac3:
                            zmm3 = var_348
                            zmm3[0] = zmm0.d
                            var_348 = zmm3
                            rbp_17 = rsi_26 & 2
                            cond:62_1 = rbp_17 == 0
                            cond:63_1 = rbp_17 != 0
                            cond:72_1 = rbp_17 == 0
                            cond:73_1 = rbp_17 != 0
                            
                            if (rbp_17 != 0)
                                goto label_140319a37
                            
                            goto label_140319ade
                        
                    label_140319a22:
                        rbp_17 = rsi_26 & 2
                        cond:62_1 = rbp_17 == 0
                        cond:63_1 = rbp_17 != 0
                        cond:72_1 = rbp_17 == 0
                        cond:73_1 = rbp_17 != 0
                        
                        if (rbp_17 == 0)
                        label_140319ade:
                            
                            if (not(cond:62_1))
                            label_140319ae7:
                                zmm5 = var_358
                                var_358 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm5, 1), zmm5, 0xe2)
                                
                                if (cond:73_1)
                                    goto label_140319a56
                                
                                goto label_140319b02
                        else
                        label_140319a37:
                            arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg5, 1), arg5, 0xe2)
                            
                            if (cond:63_1)
                                goto label_140319ae7
                        
                        bool cond:92_1
                        bool cond:93_1
                        bool cond:99_1
                        bool cond:100_1
                        
                        if (not(cond:72_1))
                        label_140319a56:
                            var_348 =
                                _mm_shuffle_ps(_mm_shuffle_ps(zmm0, var_348, 1), var_348, 0xe2)
                            rcx_13 = rsi_26 & 4
                            cond:92_1 = rcx_13 == 0
                            cond:93_1 = rcx_13 != 0
                            cond:99_1 = rcx_13 == 0
                            cond:100_1 = rcx_13 != 0
                            
                            if (rcx_13 != 0)
                                goto label_140319b13
                            
                            goto label_140319a68
                        
                    label_140319b02:
                        rcx_13 = rsi_26 & 4
                        cond:92_1 = rcx_13 == 0
                        cond:93_1 = rcx_13 != 0
                        cond:99_1 = rcx_13 == 0
                        cond:100_1 = rcx_13 != 0
                        
                        if (rcx_13 == 0)
                        label_140319a68:
                            
                            if (not(cond:92_1))
                            label_140319a71:
                                zmm5 = var_358
                                var_358 =
                                    _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm1, zmm5, 0x32), 0x84)
                                
                                if (cond:100_1)
                                    goto label_140319b33
                                
                                goto label_140319a89
                        else
                        label_140319b13:
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm2, arg5, 0x32), 0x84)
                            
                            if (cond:93_1)
                                goto label_140319a71
                        
                        bool cond:118_1
                        bool cond:119_1
                        bool cond:124_1
                        bool cond:125_1
                        
                        if (not(cond:99_1))
                        label_140319b33:
                            var_348 =
                                _mm_shuffle_ps(var_348, _mm_shuffle_ps(zmm0, var_348, 0x32), 0x84)
                            rsi_30 = rsi_26 & 8
                            cond:118_1 = rsi_30 == 0
                            cond:119_1 = rsi_30 != 0
                            cond:124_1 = rsi_30 == 0
                            cond:125_1 = rsi_30 == 0
                            
                            if (rsi_30 != 0)
                                goto label_140319a97
                            
                            goto label_140319b42
                        
                    label_140319a89:
                        rsi_30 = rsi_26 & 8
                        cond:118_1 = rsi_30 == 0
                        cond:119_1 = rsi_30 != 0
                        cond:124_1 = rsi_30 == 0
                        cond:125_1 = rsi_30 == 0
                        
                        if (rsi_30 != 0)
                        label_140319a97:
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm2, arg5, 0x23), 0x24)
                            zmm3 = var_358
                            zmm2 = var_348
                            
                            if (cond:119_1)
                                goto label_140319b56
                            
                            goto label_140319aab
                        
                    label_140319b42:
                        zmm3 = var_358
                        zmm2 = var_348
                        
                        if (cond:118_1)
                        label_140319aab:
                            
                            if (not(cond:124_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x23), 0x24)
                        else
                        label_140319b56:
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm1, zmm3, 0x23), 0x24)
                            
                            if (not(cond:125_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x23), 0x24)
                    case 3
                        float var_2d8_3[0x4] = zmm8
                        uint128_t var_2f8_3 = arg7
                        zmm2 = var_188_1 & zmm7
                        int64_t rax_100 = sx.q(zmm2.d)
                        void* rbp_11 = arg4 + rax_100
                        zmm10 = *(arg4 + rax_100)
                        int64_t rax_102 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
                        void* rbx_12 = arg4 + rax_102
                        zmm10 = _mm_unpacklo_ps(zmm10, (*(arg4 + rax_102)).q)
                        int64_t rax_104 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
                        void* rsi_27 = arg4 + rax_104
                        zmm1 = *(arg4 + rax_104)
                        int64_t rdi_21 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
                        void* rax_106 = arg4 + rdi_21
                        zmm10 = zmm10.q | _mm_unpacklo_ps(zmm1, (*(arg4 + rdi_21)).q).q << 0x40
                        zmm1 = zmm7 & data_142fc95e0
                        arg7 = _mm_unpacklo_ps(*(zx.q(zmm1.d) + rbp_11), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + rbx_12)).q).q | _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + rsi_27), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + rax_106)).q).q << 0x40
                        zmm1 = zmm7 & data_142fc95f0
                        float temp0_465[0x4] = _mm_unpacklo_ps(*(zx.q(zmm1.d) + rbp_11), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + rbx_12)).q)
                        uint128_t var_328_2 = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + rsi_27), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + rax_106)).q)
                        arg5 = zmm7 & data_143442650
                        zmm13 = _mm_unpacklo_ps(*(zx.q(arg5.d) + rbp_11), 
                            (*(zx.q(_mm_shuffle_epi32(arg5, 0xe5).d) + rbx_12)).q).q | _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(arg5, 0x4e).d) + rsi_27), 
                            (*(zx.q(_mm_shuffle_epi32(arg5, 0xe7).d) + rax_106)).q).q << 0x40
                        arg5 = zmm7 & data_143442660
                        arg6 = _mm_unpacklo_ps(*(zx.q(arg5.d) + rbp_11), 
                            (*(zx.q(_mm_shuffle_epi32(arg5, 0xe5).d) + rbx_12)).q).q | _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(arg5, 0x4e).d) + rsi_27), 
                            (*(zx.q(_mm_shuffle_epi32(arg5, 0xe7).d) + rax_106)).q).q << 0x40
                        zmm5 = zmm7 & data_143442670
                        arg5 = _mm_unpacklo_ps(*(zx.q(zmm5.d) + rbp_11), 
                            (*(zx.q(_mm_shuffle_epi32(zmm5, 0xe5).d) + rbx_12)).q).q | _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm5, 0x4e).d) + rsi_27), 
                            (*(zx.q(_mm_shuffle_epi32(zmm5, 0xe7).d) + rax_106)).q).q << 0x40
                        zmm1 = __paddq_xmmdq_memdq(var_388_2, var_2a8_1)
                        zmm14 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm14, var_318_1), zmm0)
                        zmm1 = _mm_add_epi64(zmm1, temp0_406)
                        zmm0 = _mm_shuffle_epi32(zmm7, 0x50) & zmm1
                        zmm1 = _mm_shuffle_epi32(zmm7, 0xfa) & zmm14
                        int64_t rbp_15 = _mm_shuffle_epi32(zmm0, 0x4e).q
                        int64_t rdi_39 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), zx.q(*(arg4 + rbp_15))), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm1.q)), zx.q(*(arg4 + rdi_39))).q)
                        zmm2 = zmm0
                        zmm1 = zmm0
                        zmm0 = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                zmm13), 
                            zmm10)
                        zmm1 = _mm_srli_epi32(zmm1, 0xa) & data_143442480
                        zmm3 = data_143442440
                        zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm3))
                        zmm5 = data_143442690
                        zmm1 = _mm_mul_ps(_mm_div_ps(zmm1, zmm5), arg6)
                        zmm2 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm2, 0x15), zmm3)), zmm5)
                        uint64_t rsi_28 = zx.q(temp0_397)
                        rbx_9 = rsi_28 & 1
                        
                        if (rbx_9 != 0)
                            zmm3 = var_368
                            zmm3[0] = zmm0.d
                            var_368 = zmm3
                        
                        zmm7 = var_338_1
                        zmm8 = __unpcklpd_xmmpd_memdq(temp0_465, var_328_2)
                        arg5 = _mm_mul_ps(arg5, zmm2)
                        arg7 = _mm_add_ps(arg7, zmm1)
                        
                        if (rbx_9 == 0)
                            zmm3 = var_358
                            zmm2 = var_348
                            zmm8 = _mm_add_ps(zmm8, arg5)
                            
                            if (rbx_9 != 0)
                                zmm2.d = zmm8[0]
                        else
                            zmm3 = var_358
                            zmm3[0] = arg7.d
                            zmm2 = var_348
                            zmm8 = _mm_add_ps(zmm8, arg5)
                            
                            if (rbx_9 != 0)
                                zmm2.d = zmm8[0]
                        
                        arg5 = var_368
                        rbp_17 = rsi_28 & 2
                        
                        if (rbp_17 != 0)
                            arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg5, 1), arg5, 0xe2)
                            
                            if (rbp_17 != 0)
                                goto label_140319c08
                        else if (rbp_17 != 0)
                        label_140319c08:
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm3, 1), zmm3, 0xe2)
                            
                            if (rbp_17 != 0)
                                goto label_140319baa
                            
                            goto label_140319c10
                        
                        bool cond:94_1
                        bool cond:95_1
                        bool cond:101_1
                        bool cond:102_1
                        
                        if (rbp_17 != 0)
                        label_140319baa:
                            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm2, 1), zmm2, 0xe2)
                            rcx_13 = rsi_28 & 4
                            cond:94_1 = rcx_13 == 0
                            cond:95_1 = rcx_13 != 0
                            cond:101_1 = rcx_13 == 0
                            cond:102_1 = rcx_13 != 0
                            
                            if (rcx_13 != 0)
                                goto label_140319c1d
                            
                            goto label_140319bb6
                        
                    label_140319c10:
                        rcx_13 = rsi_28 & 4
                        cond:94_1 = rcx_13 == 0
                        cond:95_1 = rcx_13 != 0
                        cond:101_1 = rcx_13 == 0
                        cond:102_1 = rcx_13 != 0
                        
                        if (rcx_13 == 0)
                        label_140319bb6:
                            
                            if (not(cond:94_1))
                            label_140319bc0:
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg7, zmm3, 0x32), 0x84)
                                
                                if (cond:102_1)
                                    goto label_140319c2d
                                
                                goto label_140319bc6
                        else
                        label_140319c1d:
                            arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm0, arg5, 0x32), 0x84)
                            
                            if (cond:95_1)
                                goto label_140319bc0
                        
                        bool cond:120_1
                        bool cond:126_1
                        bool cond:127_1
                        bool cond:121_1
                        
                        if (cond:101_1)
                        label_140319bc6:
                            rsi_30 = rsi_28 & 8
                            cond:120_1 = rsi_30 == 0
                            cond:121_1 = rsi_30 != 0
                            cond:126_1 = rsi_30 == 0
                            cond:127_1 = rsi_30 != 0
                            
                            if (rsi_30 != 0)
                            label_140319bd0:
                                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm0, arg5, 0x23), 0x24)
                                
                                if (cond:121_1)
                                    goto label_140319c3e
                                
                                goto label_140319bd6
                        else
                        label_140319c2d:
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x32), 0x84)
                            rsi_30 = rsi_28 & 8
                            cond:120_1 = rsi_30 == 0
                            cond:121_1 = rsi_30 != 0
                            cond:126_1 = rsi_30 == 0
                            cond:127_1 = rsi_30 != 0
                            
                            if (rsi_30 != 0)
                                goto label_140319bd0
                        
                        if (cond:120_1)
                        label_140319bd6:
                            arg7 = var_2f8_3
                            
                            if (not(cond:126_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x23), 0x24)
                        else
                        label_140319c3e:
                            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg7, zmm3, 0x23), 0x24)
                            arg7 = var_2f8_3
                            
                            if (cond:127_1)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x23), 0x24)
                        
                        zmm8 = var_2d8_3
                    case 4, 5
                        goto label_140319857
                    case 6
                        rsi_29 = zx.q(temp0_397)
                        rbx_9 = rsi_29 & 1
                        
                        if (rbx_9 == 0)
                            arg5 = var_368
                            zmm3 = var_358
                            zmm2 = var_348
                            zmm7 = var_338_1
                            
                            if (rbx_9 != 0)
                                zmm3[0] = 0
                        else
                            arg5.d = 0
                            zmm3 = var_358
                            zmm2 = var_348
                            zmm7 = var_338_1
                            
                            if (rbx_9 != 0)
                                zmm3[0] = 0
                        
                        if (rbx_9 != 0)
                            goto label_140319c79
                        
                        goto label_140319d21
            var_368 = arg5
            zmm5 = _mm_sub_ps(arg5, zmm9)
            var_358 = zmm3
            zmm3 = _mm_sub_ps(zmm3, zmm6)
            zmm5 = _mm_mul_ps(zmm5, var_398_2)
            zmm1 = zmm9
            
            if (rbx_9 != 0)
                zmm1.d = zmm9.d f+ zmm5.d
            
            var_348 = zmm2
            arg5 = _mm_sub_ps(zmm2, arg8)
            zmm3 = _mm_mul_ps(zmm3, var_398_2)
            zmm2 = zmm6
            
            if (rbx_9 != 0)
                zmm2.d = zmm6.d f+ zmm3[0]
                arg5 = _mm_mul_ps(arg5, var_398_2)
                zmm0 = arg8
                
                if (rbx_9 != 0)
                    goto label_140317bb1
                
                goto label_140319df7
            
            arg5 = _mm_mul_ps(arg5, var_398_2)
            zmm0 = arg8
            bool cond:137_1
            bool cond:138_1
            bool cond:139_1
            bool cond:140_1
            
            if (rbx_9 != 0)
            label_140317bb1:
                zmm0.d = arg8.d f+ arg5.d
                zmm9 = _mm_add_ps(zmm9, zmm5)
                cond:137_1 = rbp_17 == 0
                cond:138_1 = rbp_17 != 0
                cond:139_1 = rbp_17 == 0
                cond:140_1 = rbp_17 != 0
                
                if (rbp_17 != 0)
                    goto label_140319e10
                
                goto label_140317bc2
            
        label_140319df7:
            zmm9 = _mm_add_ps(zmm9, zmm5)
            cond:137_1 = rbp_17 == 0
            cond:138_1 = rbp_17 != 0
            cond:139_1 = rbp_17 == 0
            cond:140_1 = rbp_17 != 0
            
            if (rbp_17 != 0)
            label_140319e10:
                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm1, 1), zmm1, 0xe2)
                arg6 = var_2b8_2
                zmm6 = _mm_add_ps(zmm6, zmm3)
                
                if (cond:138_1)
                    goto label_140317be0
                
                goto label_140319e26
            
        label_140317bc2:
            arg6 = var_2b8_2
            zmm6 = _mm_add_ps(zmm6, zmm3)
            
            if (not(cond:137_1))
            label_140317be0:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm2, 1), zmm2, 0xe2)
                arg8 = _mm_add_ps(arg8, arg5)
                
                if (cond:140_1)
                    goto label_140319e3c
                
                goto label_140317bed
            
        label_140319e26:
            arg8 = _mm_add_ps(arg8, arg5)
            bool cond:141_1
            bool cond:142_1
            bool cond:143_1
            bool cond:144_1
            
            if (not(cond:139_1))
            label_140319e3c:
                zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm0, 1), zmm0, 0xe2)
                cond:141_1 = rcx_13 == 0
                cond:142_1 = rcx_13 != 0
                cond:143_1 = rcx_13 == 0
                cond:144_1 = rcx_13 != 0
                
                if (rcx_13 != 0)
                    goto label_140317bfe
                
                goto label_140319e48
            
        label_140317bed:
            cond:141_1 = rcx_13 == 0
            cond:142_1 = rcx_13 != 0
            cond:143_1 = rcx_13 == 0
            cond:144_1 = rcx_13 != 0
            
            if (rcx_13 == 0)
            label_140319e48:
                
                if (not(cond:141_1))
                label_140319e55:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm6, zmm2, 0x32), 0x84)
                    
                    if (cond:144_1)
                        goto label_140317c16
                    
                    goto label_140319e5f
            else
            label_140317bfe:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm9, zmm1, 0x32), 0x84)
                
                if (cond:142_1)
                    goto label_140319e55
            
            bool cond:145_1
            bool cond:146_1
            bool cond:147_1
            bool cond:148_1
            
            if (not(cond:143_1))
            label_140317c16:
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x32), 0x84)
                cond:145_1 = rsi_30 == 0
                cond:146_1 = rsi_30 != 0
                cond:147_1 = rsi_30 == 0
                cond:148_1 = rsi_30 != 0
                
                if (rsi_30 != 0)
                    goto label_140319e72
                
                goto label_140317c23
            
        label_140319e5f:
            cond:145_1 = rsi_30 == 0
            cond:146_1 = rsi_30 != 0
            cond:147_1 = rsi_30 == 0
            cond:148_1 = rsi_30 != 0
            
            if (rsi_30 != 0)
            label_140319e72:
                zmm9 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm9, zmm1, 0x23), 0x24)
                
                if (cond:146_1)
                    goto label_140317c35
                
                goto label_140319e7c
            
        label_140317c23:
            zmm9 = zmm1
            
            if (cond:145_1)
            label_140319e7c:
                zmm6 = zmm2
                
                if (not(cond:147_1))
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x23), 0x24)
            else
            label_140317c35:
                zmm6 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm6, zmm2, 0x23), 0x24)
                
                if (cond:148_1)
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg8, zmm0, 0x23), 0x24)
            
            arg8 = zmm0
        
        zmm3 = zx.o(arg8[0].q)
        float temp0_610[0x4] = __unpckhps_xmmps_memdq(arg8, data_142d8f750)
        zmm2 = _mm_unpacklo_ps(zmm9, zmm6[0].q)
        zmm0 = _mm_unpackhi_ps(zmm9, zmm6)
        arg5 = _mm_shuffle_ps(zmm2, zmm3, 0x84)
        uint128_t var_128_1 = arg5
        zmm2 = _mm_shuffle_ps(zmm2, zmm3, 0xde)
        uint128_t var_118_1 = zmm2
        zmm1 = zmm0.q | temp0_610[0].q << 0x40
        uint128_t var_108_1 = zmm1
        temp0_610[0].q = zmm0 u>> 0x40
        arg5 = _mm_shuffle_epi32(arg5, 0x4e)
        int64_t rax_113 = sx.q(zmm7.d) * 0x30
        *(arg1 + rax_113 + 0x10) = zmm9.d
        *(arg1 + rax_113 + 0x14) = zmm6[0]
        *(arg1 + rax_113 + 0x18) = arg5.d
        *(arg1 + rax_113 + 0x1c) = 0
        arg5 = _mm_shuffle_epi32(zmm7, 0x4e)
        float temp0_617[0x4] = _mm_shuffle_ps(zmm6, zmm3, 0xd5)
        zmm3 = _mm_shuffle_epi32(zmm2, 0x4e)
        int64_t rax_117 = sx.q(arg5.d) * 0x30
        *(arg1 + rax_117 + 0x10) = zmm2.d
        *(arg1 + rax_117 + 0x14) = temp0_617[0]
        *(arg1 + rax_117 + 0x18) = zmm3[0]
        *(arg1 + rax_117 + 0x1c) = 0
        int64_t rax_119 = sx.q(zmm8[0])
        zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
        int64_t rax_121 = rax_119 * 0x30
        *(arg1 + rax_121 + 0x10) = zmm0.d
        *(arg1 + rax_121 + 0x14) = zmm1.d
        *(arg1 + rax_121 + 0x18) = zmm2.d
        *(arg1 + rax_121 + 0x1c) = 0
        *(arg1 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e).d) * 0x30 + 0x10) = temp0_610
        r13 = zx.q(r13.d + 4)
        arg8 = _mm_cmpeq_epi32(temp0_610, temp0_610)
    while (r13.d s< i_5)
    
    i_4 = zx.q(arg13)
    
    if (r13.d s< i_4.d)
        goto label_140319fe1
return i_4
