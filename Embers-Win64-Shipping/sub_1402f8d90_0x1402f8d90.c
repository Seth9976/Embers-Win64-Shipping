// 函数: sub_1402f8d90
// 地址: 0x1402f8d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
uint128_t zmm14
uint128_t var_68 = zmm14
uint128_t zmm13
uint128_t var_78 = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
int32_t zmm11[0x4]
int32_t var_98[0x4] = zmm11
int32_t var_a8[0x4] = arg8
uint128_t zmm9
uint128_t var_b8 = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
int32_t zmm7[0x4]
int32_t var_d8[0x4] = zmm7
uint128_t var_e8 = arg7
int64_t r12 = arg1
int64_t r15 = sx.q(arg13)
uint128_t zmm3 = arg11
int32_t r10 = arg10
int32_t* r13 = arg9
int32_t rcx_1 = *(&data_143442f60 + (r15 << 2)) * *(&data_143442f40 + (r15 << 2))
int32_t i_5 = ((arg14 s>> 0x1f u>> 0x1e) + arg14) & 0xfffffffc
int64_t var_268 = r15
uint64_t i_4
uint64_t rdx_1
int32_t* r11
uint128_t zmm0
uint128_t zmm1
int32_t zmm2[0x4]

if (i_5 s<= 0)
    rdx_1 = 0
    r11 = arg3
    i_4 = zx.q(arg14)
    
    if (0 s< i_4.d)
    label_1402faf98:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_1.d), 0), data_142e11d00)
        zmm15 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i_4.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm15
        int64_t r10_3 = sx.q(zmm0.d)
        int64_t rdx_15 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rbx_36 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rsi_21 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm12 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg2 + r10_3)), *(arg2 + rdx_15), 1), 
                *(arg2 + rbx_36), 2), 
            *(arg2 + rsi_21), 3)
        zmm0 = data_142fc95e0 & zmm15
        int32_t* rax_120 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* r10_4 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* r14_3 = zx.q(_mm_extract_epi32(zmm0, 3))
        uint128_t* rdx_16 = zx.q(zmm0.d)
        zmm0 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(rdx_16 + arg2 + r10_3)), 
                    *(rax_120 + arg2 + rdx_15), 1), 
                *(r10_4 + arg2 + rbx_36), 2), 
            *(r14_3 + arg2 + rsi_21), 3)
        zmm8 = zx.o(0)
        zmm1 = _mm_mullo_epi32(_mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0), zmm0) & zmm15
        int64_t rax_122 = sx.q(zmm1.d)
        int64_t rdx_18 = sx.q(_mm_extract_epi32(zmm1, 1))
        int64_t rbx_38 = sx.q(_mm_extract_epi32(zmm1, 2))
        int64_t rax_123 = sx.q(_mm_extract_epi32(zmm1, 3))
        zmm1 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(r11 + rax_122)), *(r11 + rdx_18), 1), 
                *(r11 + rbx_38), 2), 
            *(r11 + rax_123), 3)
        zmm13 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(rdx_16 + r11 + rax_122)), 
                    *(rax_120 + r11 + rdx_18), 1), 
                *(r10_4 + r11 + rbx_38), 2), 
            *(r14_3 + r11 + rax_123), 3)
        zmm11 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
        uint128_t var_348_3 = zmm1
        zmm7 = _mm_cvtepi32_epi64(zmm1.q)
        zmm9 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
        arg6 = _mm_cmpeq_epi32(arg6, arg6)
        zmm1 = data_1434422d0
        arg7 = arg11
        int32_t rax_125
        rax_125.b = 0f f>= arg7.d
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_125)) ^ arg6, 0)
        zmm1 = _mm_cmpgt_epi32(zmm1, zmm13) & not.o(zmm0)
        zmm3 = zmm1 & zmm15
        uint32_t temp0_575 = _mm_movemask_ps(zmm3)
        int32_t var_378_2[0x4] = zmm11
        int32_t var_2b8_1[0x4] = zmm7
        int32_t var_388_3[0x4]
        
        if (temp0_575 == 0)
            var_388_3 = zx.o(0)
            arg8 = zx.o(0)
            arg7 = zx.o(0)
        else
            arg6 = _mm_add_epi32(arg6, zmm13)
            
            if (arg7.d f>= 1f)
                var_388_3 = zx.o(0)
                arg8 = _mm_blendv_ps(zx.o(0), arg6, zmm3)
                arg7 = arg8
            else
                uint128_t var_2c8_2 = zmm1
                float var_338_1[0x4] = zmm15
                uint128_t var_398_3 = zmm9
                zmm1 = _mm_mullo_epi32(zmm13, zmm9)
                zmm2 = _mm_cvtepi32_epi64(zmm1.q)
                zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
                zmm14 = _mm_shuffle_epi32(_mm_add_epi64(3, zx.o(r13)), 0x44)
                zmm15 = _mm_add_epi64(_mm_add_epi64(zmm14, zmm7), zmm2)
                zmm14 = _mm_add_epi64(_mm_add_epi64(zmm14, zmm11), zmm1)
                zmm0 = data_143442c10
                zmm15 &= zmm0
                zmm14 &= zmm0
                zmm0 = _mm_shuffle_ps(arg7, arg7, 0)
                zmm1 = _mm_mul_ps(_mm_cvtepi32_ps(arg6), zmm0)
                zmm0.d = float.s(arg10 - 1)
                zmm0.d = zmm0.d f* arg7.d
                uint128_t var_308_1 = zmm0
                zmm0 = _mm_min_epi32(zx.o(arg10 - 2), _mm_max_epi32(zx.o(int.d(zmm0.d)), zx.o(0)))
                int32_t temp0_594[0x4] =
                    _mm_min_epi32(_mm_max_epi32(_mm_cvttps_epi32(zmm1), zx.o(0)), arg6)
                float var_388_2[0x4] = arg6
                uint128_t var_328_1 = zmm14
                
                if (arg10 s< 0x100)
                    zmm2 = _mm_shuffle_epi32(temp0_594, 0x4e)
                    int32_t temp0_683[0x4] =
                        _mm_add_epi64(_mm_cvtepi32_epi64(temp0_594[0].q), zmm15)
                    char rsi_24 = temp0_575.b
                    
                    if ((rsi_24 & 1) == 0)
                        zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                        
                        if ((rsi_24 & 2) != 0)
                            goto label_1402fbb78
                        
                        goto label_1402fb72c
                    
                    zmm1 = zx.o(*temp0_683[0].q)
                    zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                    
                    if ((rsi_24 & 2) != 0)
                    label_1402fbb78:
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(temp0_683, 1)), 1)
                        zmm2 = _mm_add_epi64(zmm2, zmm14)
                        
                        if ((rsi_24 & 4) == 0)
                            goto label_1402fb73b
                        
                        goto label_1402fbb95
                    
                label_1402fb72c:
                    zmm2 = _mm_add_epi64(zmm2, zmm14)
                    
                    if ((rsi_24 & 4) != 0)
                    label_1402fbb95:
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2[0].q), 2)
                        
                        if ((rsi_24 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                    else
                    label_1402fb73b:
                        
                        if ((rsi_24 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                    
                    zmm1 &= data_142ed6810
                    float temp0_687[0x4] = _mm_shuffle_epi32(zmm0, 0)
                    zmm1 = _mm_cmpgt_epi32(zmm1, temp0_687)
                    arg6 = zmm1 ^ _mm_cmpeq_epi32(zmm0, zmm0)
                    zmm7 = temp0_594
                    
                    if (_mm_movemask_ps(zmm1 & not.o(zmm3)) != 0)
                        arg5 = var_388_2
                        zmm7 = _mm_blendv_ps(temp0_594, arg5, arg6)
                        arg7 = _mm_cmpeq_epi32(arg7, arg7)
                        zmm0 = _mm_sub_epi32(temp0_594, arg7)
                        zmm1 &= not.o(_mm_cmpgt_epi32(zmm0, arg5) ^ arg7)
                        arg8 = zmm3 & zmm1
                        uint32_t i = _mm_movemask_ps(arg8)
                        
                        if (i != 0)
                            zmm14 = temp0_594
                            
                            do
                                zmm9 = zmm0
                                zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                int32_t temp0_703[0x4] =
                                    _mm_add_epi64(_mm_cvtepi32_epi64(zmm9.q), zmm15)
                                char temp0_704 = _mm_movemask_ps(arg8)
                                
                                if ((temp0_704 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_704 & 2) != 0)
                                        goto label_1402fb803
                                    
                                    goto label_1402fb856
                                
                                arg7 = _mm_insert_epi32(arg7, zx.d(*temp0_703[0].q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((temp0_704 & 2) != 0)
                                label_1402fb803:
                                    arg7 = _mm_insert_epi32(arg7, 
                                        zx.d(*_mm_extract_epi64(temp0_703, 1)), 1)
                                    zmm0 = __paddq_xmmdq_memdq(zmm0, var_328_1)
                                    
                                    if ((temp0_704 & 4) == 0)
                                        goto label_1402fb863
                                    
                                    goto label_1402fb81f
                                
                            label_1402fb856:
                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_328_1)
                                
                                if ((temp0_704 & 4) != 0)
                                label_1402fb81f:
                                    arg7 = _mm_insert_epi32(arg7, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_704 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402fb863:
                                    
                                    if ((temp0_704 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = _mm_cmpgt_epi32(arg7 & data_142ed6810, temp0_687) & zmm1
                                zmm7 = _mm_blendv_ps(zmm7, zmm14, zmm0)
                                zmm2 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm3) != i)
                                    zmm2 = zmm0 ^ zmm1
                                
                                zmm0 = __psubd_xmmdq_memdq(zmm9, data_142d3f800)
                                zmm1 = __pcmpgtd_xmmdq_memdq(zmm0, var_388_2) & not.o(zmm2)
                                arg8 = zmm1 & zmm3
                                i = _mm_movemask_ps(arg8)
                                zmm14 = zmm9
                            while (i != 0)
                    
                    if (_mm_movemask_ps(arg6 & not.o(zmm3)) == 0)
                        zmm11 = var_378_2
                        zmm8 = zx.o(0)
                        arg5 = var_2c8_2
                        zmm14 = var_388_2
                        arg6 = var_328_1
                    else
                        arg6 ^= data_142d3f800
                        zmm1 = zx.o(0)
                        zmm7 = _mm_blendv_ps(zmm7, zmm1, arg6)
                        int32_t temp0_716[0x4] = _mm_cmpeq_epi32(arg8, arg8)
                        zmm11 = _mm_add_epi32(temp0_594, temp0_716)
                        arg5 = _mm_cmpgt_epi32(zmm11, zmm1) & arg6
                        zmm0 = arg5 & zmm3
                        uint32_t i_1 = _mm_movemask_ps(zmm0)
                        
                        if (i_1 == 0)
                            zmm14 = var_388_2
                            arg6 = var_328_1
                        else
                            zmm9 = data_142ed6810
                            zmm14 = var_388_2
                            arg6 = var_328_1
                            
                            do
                                zmm2 = _mm_shuffle_epi32(zmm11, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm11[0].q), zmm15)
                                char temp0_728 = _mm_movemask_ps(zmm0)
                                
                                if ((temp0_728 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                    
                                    if ((temp0_728 & 2) != 0)
                                        goto label_1402fb973
                                    
                                    goto label_1402fb9c1
                                
                                arg7 = _mm_insert_epi32(arg7, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((temp0_728 & 2) != 0)
                                label_1402fb973:
                                    arg7 =
                                        _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg6)
                                    
                                    if ((temp0_728 & 4) == 0)
                                        goto label_1402fb9c9
                                    
                                    goto label_1402fb98a
                                
                            label_1402fb9c1:
                                zmm0 = _mm_add_epi64(zmm0, arg6)
                                
                                if ((temp0_728 & 4) != 0)
                                label_1402fb98a:
                                    arg7 = _mm_insert_epi32(arg7, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_728 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402fb9c9:
                                    
                                    if ((temp0_728 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = _mm_cmpgt_epi32(arg7 & zmm9, temp0_687) & not.o(arg5)
                                zmm7 = _mm_blendv_ps(zmm7, zmm11, zmm0)
                                zmm2 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm3) != i_1)
                                    zmm2 = zmm0 ^ arg5
                                
                                zmm11 = _mm_add_epi32(zmm11, temp0_716)
                                arg5 = _mm_cmpgt_epi32(zmm11, zx.o(0)) & zmm2
                                zmm0 = arg5 & zmm3
                                i_1 = _mm_movemask_ps(zmm0)
                            while (i_1 != 0)
                        
                        zmm11 = var_378_2
                        zmm8 = zx.o(0)
                        arg5 = var_2c8_2
                    
                    arg8 = _mm_blendv_ps(zx.o(0), zmm7, zmm3)
                    zmm0 = _mm_shuffle_epi32(arg8, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg8[0].q), zmm15)
                    
                    if ((rsi_24 & 1) == 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rsi_24 & 2) != 0)
                            goto label_1402fcdd4
                        
                        goto label_1402fbc2e
                    
                    zmm7 = zx.o(*zmm1.q)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rsi_24 & 2) != 0)
                    label_1402fcdd4:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = _mm_add_epi64(zmm0, arg6)
                        
                        if ((rsi_24 & 4) == 0)
                            goto label_1402fbc3c
                        
                        goto label_1402fcdf0
                    
                label_1402fbc2e:
                    zmm0 = _mm_add_epi64(zmm0, arg6)
                    
                    if ((rsi_24 & 4) != 0)
                    label_1402fcdf0:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                        
                        if ((rsi_24 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402fbc3c:
                        
                        if ((rsi_24 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    arg7 = _mm_blendv_ps(zx.o(0), _mm_sub_epi32(arg8, _mm_cmpeq_epi32(zmm0, zmm0)), 
                        zmm3)
                    zmm0 = _mm_cmpgt_epi32(arg7, zmm14) & zmm3
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        arg7 = _mm_blendv_ps(arg7, zmm14, zmm0)
                    
                    zmm1 = _mm_shuffle_epi32(arg7, 0x4e)
                    zmm0 = _mm_cvtepi32_epi64(arg7.q)
                    zmm15 = _mm_add_epi64(zmm15, zmm0)
                    
                    if ((rsi_24 & 1) == 0)
                        zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                        
                        if ((rsi_24 & 2) != 0)
                            goto label_1402fce2a
                        
                        goto label_1402fbcac
                    
                    zmm0 = zx.o(*zmm15[0].q)
                    zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                    
                    if ((rsi_24 & 2) != 0)
                    label_1402fce2a:
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                        zmm9 = var_398_3
                        arg6 = _mm_add_epi64(arg6, zmm1)
                        
                        if ((rsi_24 & 4) == 0)
                            goto label_1402fbcc1
                        
                        goto label_1402fce4d
                    
                label_1402fbcac:
                    zmm9 = var_398_3
                    arg6 = _mm_add_epi64(arg6, zmm1)
                    
                    if ((rsi_24 & 4) != 0)
                    label_1402fce4d:
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*arg6[0].q), 2)
                        
                        if ((rsi_24 & 8) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(arg6, 1)), 3)
                    else
                    label_1402fbcc1:
                        
                        if ((rsi_24 & 8) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(arg6, 1)), 3)
                    
                    zmm15 = var_338_1
                    zmm7 &= data_142ed6810
                    zmm0 &= data_142ed6810
                else
                    zmm1 = _mm_add_epi32(temp0_594, temp0_594)
                    zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                    int32_t temp0_598[0x4] = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                    char rsi_23 = temp0_575.b
                    
                    if ((rsi_23 & 1) == 0)
                        zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                        
                        if ((rsi_23 & 2) != 0)
                            goto label_1402fba63
                        
                        goto label_1402fb2a2
                    
                    zmm1 = zx.o(*temp0_598[0].q)
                    zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                    
                    if ((rsi_23 & 2) != 0)
                    label_1402fba63:
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(temp0_598, 1)), 1)
                        zmm2 = _mm_add_epi64(zmm2, zmm14)
                        
                        if ((rsi_23 & 4) == 0)
                            goto label_1402fb2b1
                        
                        goto label_1402fba80
                    
                label_1402fb2a2:
                    zmm2 = _mm_add_epi64(zmm2, zmm14)
                    
                    if ((rsi_23 & 4) != 0)
                    label_1402fba80:
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2[0].q), 2)
                        
                        if ((rsi_23 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                    else
                    label_1402fb2b1:
                        
                        if ((rsi_23 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                    
                    zmm9 = _mm_blend_epi16(zx.o(0), zmm1, 0x55)
                    zmm8 = _mm_shuffle_epi32(zmm0, 0)
                    zmm9 = _mm_cmpgt_epi32(zmm9, zmm8)
                    uint128_t var_288_2 = zmm9 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                    arg5 = temp0_594
                    
                    if (_mm_movemask_ps(zmm9 & not.o(zmm3)) != 0)
                        arg5 = _mm_blendv_ps(temp0_594, arg6, var_288_2)
                        int32_t temp0_608[0x4] = _mm_cmpeq_epi32(zmm2, zmm2)
                        zmm0 = _mm_sub_epi32(temp0_594, temp0_608)
                        zmm9 &= not.o(_mm_cmpgt_epi32(zmm0, arg6) ^ temp0_608)
                        arg8 = zmm3 & zmm9
                        uint32_t i_2 = _mm_movemask_ps(arg8)
                        
                        if (i_2 != 0)
                            arg7 = temp0_594
                            
                            do
                                zmm1 = zmm0
                                int32_t temp0_612[0x4] = _mm_add_epi32(zmm0, zmm0)
                                zmm0 = _mm_shuffle_epi32(temp0_612, 0x4e)
                                zmm14 = _mm_add_epi64(_mm_cvtepi32_epi64(temp0_612[0].q), zmm15)
                                char temp0_616 = _mm_movemask_ps(arg8)
                                
                                if ((temp0_616 & 1) != 0)
                                    zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm14.q), 0)
                                
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((temp0_616 & 2) != 0)
                                    zmm7 = _mm_insert_epi32(zmm7, 
                                        zx.d(*_mm_extract_epi64(zmm14, 1)), 1)
                                
                                arg6 = var_388_2
                                zmm14 = var_328_1
                                zmm0 = _mm_add_epi64(zmm0, zmm14)
                                
                                if ((temp0_616 & 4) != 0)
                                    zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                                
                                if ((temp0_616 & 8) != 0)
                                    zmm7 =
                                        _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm2 = zx.o(0)
                                zmm0 = _mm_cmpgt_epi32(_mm_blend_epi16(zmm7, zx.o(0), 0xaa), zmm8)
                                    & zmm9
                                arg5 = _mm_blendv_ps(arg5, arg7, zmm0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm3) != i_2)
                                    zmm2 = zmm0 ^ zmm9
                                
                                zmm0 = __psubd_xmmdq_memdq(zmm1, data_142d3f800)
                                zmm9 = _mm_cmpgt_epi32(zmm0, arg6) & not.o(zmm2)
                                arg8 = zmm9 & zmm3
                                i_2 = _mm_movemask_ps(arg8)
                                arg7 = zmm1
                            while (i_2 != 0)
                    
                    if (_mm_movemask_ps(_mm_andnot_ps(var_288_2, zmm3)) != 0)
                        zmm0 = var_288_2 ^ data_142d3f800
                        arg5 = _mm_blendv_ps(arg5, zx.o(0), zmm0)
                        int32_t temp0_633[0x4] = _mm_cmpeq_epi32(arg8, arg8)
                        zmm11 = _mm_add_epi32(temp0_594, temp0_633)
                        zmm7 = _mm_cmpgt_epi32(zmm11, zx.o(0)) & zmm0
                        zmm0 = zmm7 & zmm3
                        
                        for (uint32_t i_3 = _mm_movemask_ps(zmm0); i_3 != 0; 
                                i_3 = _mm_movemask_ps(zmm0))
                            zmm1 = _mm_add_epi32(zmm11, zmm11)
                            zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                            zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                            char temp0_646 = _mm_movemask_ps(zmm0)
                            
                            if ((temp0_646 & 1) == 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((temp0_646 & 2) != 0)
                                    goto label_1402fb4d3
                                
                                goto label_1402fb529
                            
                            arg7 = _mm_insert_epi32(arg7, zx.d(*zmm1.q), 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                            
                            if ((temp0_646 & 2) != 0)
                            label_1402fb4d3:
                                arg7 = _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, zmm14)
                                
                                if ((temp0_646 & 4) == 0)
                                    goto label_1402fb532
                                
                                goto label_1402fb4eb
                            
                        label_1402fb529:
                            zmm0 = _mm_add_epi64(zmm0, zmm14)
                            
                            if ((temp0_646 & 4) != 0)
                            label_1402fb4eb:
                                arg7 = _mm_insert_epi32(arg7, zx.d(*zmm0.q), 2)
                                
                                if ((temp0_646 & 8) != 0)
                                    arg7 =
                                        _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            else
                            label_1402fb532:
                                
                                if ((temp0_646 & 8) != 0)
                                    arg7 =
                                        _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            
                            zmm0 = _mm_cmpgt_epi32(_mm_blend_epi16(arg7, zx.o(0), 0xaa), zmm8)
                                & not.o(zmm7)
                            arg5 = _mm_blendv_ps(arg5, zmm11, zmm0)
                            zmm2 = zx.o(0)
                            
                            if (_mm_movemask_ps(zmm0 & zmm3) != i_3)
                                zmm2 = zmm0 ^ zmm7
                            
                            zmm11 = _mm_add_epi32(zmm11, temp0_633)
                            zmm7 = _mm_cmpgt_epi32(zmm11, zx.o(0)) & zmm2
                            zmm0 = zmm7 & zmm3
                    
                    zmm11 = var_378_2
                    zmm8 = zx.o(0)
                    arg8 = _mm_blendv_ps(zx.o(0), arg5, zmm3)
                    zmm1 = _mm_add_epi32(arg8, arg8)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                    
                    if ((rsi_23 & 1) == 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        arg5 = var_2c8_2
                        
                        if ((rsi_23 & 2) != 0)
                            goto label_1402fbac3
                        
                        goto label_1402fb5f7
                    
                    zmm7 = zx.o(*zmm1.q)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    arg5 = var_2c8_2
                    
                    if ((rsi_23 & 2) != 0)
                    label_1402fbac3:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = _mm_add_epi64(zmm0, zmm14)
                        
                        if ((rsi_23 & 4) == 0)
                            goto label_1402fb606
                        
                        goto label_1402fbae0
                    
                label_1402fb5f7:
                    zmm0 = _mm_add_epi64(zmm0, zmm14)
                    
                    if ((rsi_23 & 4) != 0)
                    label_1402fbae0:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                        
                        if ((rsi_23 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402fb606:
                        
                        if ((rsi_23 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    arg7 = _mm_blendv_ps(zx.o(0), _mm_sub_epi32(arg8, _mm_cmpeq_epi32(zmm0, zmm0)), 
                        zmm3)
                    zmm0 = _mm_cmpgt_epi32(arg7, arg6) & zmm3
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        arg7 = _mm_blendv_ps(arg7, arg6, zmm0)
                    
                    int32_t temp0_671[0x4] = _mm_add_epi32(arg7, arg7)
                    zmm0 = _mm_shuffle_epi32(temp0_671, 0x4e)
                    zmm2 = _mm_cvtepi32_epi64(temp0_671[0].q)
                    zmm15 = _mm_add_epi64(zmm15, zmm2)
                    
                    if ((rsi_23 & 1) == 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rsi_23 & 2) != 0)
                            goto label_1402fbb1a
                        
                        goto label_1402fb67f
                    
                    zmm2 = zx.o(*zmm15[0].q)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rsi_23 & 2) != 0)
                    label_1402fbb1a:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                        zmm9 = var_398_3
                        zmm14 = _mm_add_epi64(zmm14, zmm0)
                        
                        if ((rsi_23 & 4) == 0)
                            goto label_1402fb695
                        
                        goto label_1402fbb3e
                    
                label_1402fb67f:
                    zmm9 = var_398_3
                    zmm14 = _mm_add_epi64(zmm14, zmm0)
                    
                    if ((rsi_23 & 4) != 0)
                    label_1402fbb3e:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm14.q), 2)
                        
                        if ((rsi_23 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm14, 1)), 3)
                    else
                    label_1402fb695:
                        
                        if ((rsi_23 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm14, 1)), 3)
                    
                    zmm15 = var_338_1
                    zmm7 = _mm_blend_epi16(zmm7, zx.o(0), 0xaa)
                    zmm0 = _mm_blend_epi16(zx.o(0), zmm2, 0x55)
                
                int128_t var_388_4 = zx.o(0)
                zmm1 = zx.o(0)
                
                if (arg12 != 1)
                    zmm0 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm0, zmm7), data_142d3f5b0)
                    zmm2 = var_308_1
                    zmm1 = _mm_div_ps(
                        _mm_sub_ps(_mm_shuffle_ps(zmm2, zmm2, 0), _mm_cvtepi32_ps(zmm7)), 
                        _mm_cvtepi32_ps(zmm0))
                
                var_388_3 = _mm_blendv_ps(zx.o(0), zmm1, arg5)
                zmm7 = var_2b8_1
        
        int32_t rax_188
        rax_188.b = r15.d == 3
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_188)), 0)
        zmm13 = __pcmpgtd_xmmdq_memdq(zmm13, data_142d3f5b0) & zmm0
        float temp0_783[0x4] = __blendvps_xmmdq_memdq(zmm8, data_143442700, zmm13)
        arg6 = _mm_cvtepi32_epi64(temp0_783[0].q)
        zmm8 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_783, 0x4e).q)
        uint64_t r13_2 = zx.q(r15.d)
        float var_328_2[0x4] = arg6
        
        if (r15.d u> 6)
        label_1402fbf9d:
            char temp0_808 = _mm_movemask_ps(zmm15)
            zmm14 = zx.o(0)
            
            if ((temp0_808 & 4) != 0)
                zmm14 = _mm_blend_ps(zx.o(0), zx.o(0), 4)
            
            if ((temp0_808 & 8) != 0)
                zmm14 = _mm_blend_ps(zmm14, zx.o(0), 8)
            
            arg6 = zmm14
            zmm3 = zmm14
        else
            zmm1 = _mm_mullo_epi32(arg8, zmm9)
            zmm0 = _mm_cvtepi32_epi64(zmm1.q)
            zmm3 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
            
            switch (r13_2)
                case 0, 1
                    arg5 = zmm8
                    zmm8 = arg7
                    int32_t temp0_791[0x4] = _mm_add_epi64(arg6, zmm7)
                    int32_t temp0_793[0x4] = _mm_add_epi64(_mm_add_epi64(arg5, zmm11), zmm3)
                    int32_t temp0_794[0x4] = _mm_add_epi64(temp0_791, zmm0)
                    zmm1 = _mm_shuffle_epi32(zmm15, 0x50)
                    arg7 = _mm_blendv_ps(zx.o(0), temp0_794, zmm1)
                    zmm2 = _mm_shuffle_epi32(zmm15, 0xfa)
                    zmm7 = _mm_blendv_ps(zx.o(0), temp0_793, zmm2)
                    int64_t rax_190 = _mm_extract_epi64(arg7, 1)
                    void* rcx_38 = arg9 + rax_190
                    zmm11 = *(arg9 + rax_190)
                    int64_t rbp_44 = zmm7[0].q
                    void* rax_191 = arg9 + rbp_44
                    int64_t rbx_39 = _mm_extract_epi64(zmm7, 1)
                    arg5 = data_1434426c0
                    zmm7 = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                    int32_t var_338_2 = (*(arg9 + rbp_44)).d
                    zmm13 = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                    int32_t* var_2f8_1
                    var_2f8_1.o = *(arg9 + rbx_39)
                    void* rbp_46 = arg7.q + arg9
                    arg6 = *(zmm7[0].q + rbp_46)
                    arg5 = *(_mm_extract_epi64(zmm7, 1) + rcx_38)
                    int32_t var_2c8_3 = (*(zmm13.q + rax_191)).d
                    void* rbx_40 = arg9 + rbx_39
                    zmm13 = *(_mm_extract_epi64(zmm13, 1) + rbx_40)
                    arg7 = data_1434426e0
                    zmm7 = _mm_blendv_ps(zx.o(0), arg7, zmm1)
                    zmm3 = _mm_blendv_ps(zx.o(0), arg7, zmm2)
                    zmm14 = *(zmm7[0].q + rbp_46)
                    zmm2 = *(_mm_extract_epi64(zmm7, 1) + rcx_38)
                    uint128_t* rdi_26 = _mm_extract_epi64(zmm3, 1)
                    zmm1 = *(zmm3.q + rax_191)
                    zmm0 = *(rdi_26 + rbx_40)
                    zmm7 = zmm15
                    char temp0_803 = _mm_movemask_ps(zmm15)
                    bool cond:9_1
                    bool cond:10_1
                    bool cond:14_1
                    bool cond:15_1
                    
                    if ((temp0_803 & 1) == 0)
                        char temp2_1 = temp0_803 & 2
                        cond:9_1 = temp2_1 != 0
                        cond:10_1 = temp2_1 == 0
                        cond:14_1 = temp2_1 != 0
                        cond:15_1 = temp2_1 == 0
                        
                        if (temp2_1 == 0)
                            goto label_1402fc3f8
                        
                        goto label_1402fbf29
                    
                    zmm3 = *rbp_46
                    char temp1_1 = temp0_803 & 2
                    cond:9_1 = temp1_1 != 0
                    cond:10_1 = temp1_1 == 0
                    cond:14_1 = temp1_1 != 0
                    cond:15_1 = temp1_1 == 0
                    
                    if (temp1_1 == 0)
                    label_1402fc3f8:
                        arg7 = zmm8
                        
                        if (cond:10_1)
                            goto label_1402fbf3f
                        
                        goto label_1402fc407
                    
                label_1402fbf29:
                    zmm3 = _mm_insert_ps(zmm3, zmm11, 0x10)
                    arg7 = zmm8
                    
                    if (not(cond:9_1))
                    label_1402fbf3f:
                        
                        if (cond:15_1)
                            goto label_1402fc413
                        
                        goto label_1402fbf45
                    
                label_1402fc407:
                    arg6 = _mm_insert_ps(arg6, arg5, 0x10)
                    bool cond:25_1
                    bool cond:26_1
                    bool cond:32_1
                    bool cond:33_1
                    
                    if (not(cond:14_1))
                    label_1402fc413:
                        char temp4_1 = temp0_803 & 4
                        cond:25_1 = temp4_1 != 0
                        cond:26_1 = temp4_1 == 0
                        cond:32_1 = temp4_1 != 0
                        cond:33_1 = temp4_1 == 0
                        zmm15 = zmm7
                        
                        if (temp4_1 == 0)
                            goto label_1402fbf5a
                        
                        goto label_1402fc421
                    
                label_1402fbf45:
                    zmm14 = _mm_insert_ps(zmm14, zmm2, 0x10)
                    char temp3_1 = temp0_803 & 4
                    cond:25_1 = temp3_1 != 0
                    cond:26_1 = temp3_1 == 0
                    cond:32_1 = temp3_1 != 0
                    cond:33_1 = temp3_1 == 0
                    zmm15 = zmm7
                    
                    if (temp3_1 == 0)
                    label_1402fbf5a:
                        
                        if (cond:26_1)
                            goto label_1402fc42f
                        
                        goto label_1402fbf60
                    
                label_1402fc421:
                    zmm3 = __insertps_xmmps_memd_immb(zmm3, var_338_2, 0x20)
                    
                    if (not(cond:25_1))
                    label_1402fc42f:
                        
                        if (cond:33_1)
                            goto label_1402fbf71
                        
                        goto label_1402fc435
                    
                label_1402fbf60:
                    arg6 = __insertps_xmmps_memd_immb(arg6, var_2c8_3, 0x20)
                    bool cond:47_1
                    bool cond:48_1
                    bool cond:57_1
                    bool cond:58_1
                    
                    if (not(cond:32_1))
                    label_1402fbf71:
                        char temp9_1 = temp0_803 & 8
                        cond:47_1 = temp9_1 != 0
                        cond:48_1 = temp9_1 == 0
                        cond:57_1 = temp9_1 == 0
                        cond:58_1 = temp9_1 != 0
                        
                        if (temp9_1 == 0)
                            goto label_1402fc445
                        
                        goto label_1402fbf7a
                    
                label_1402fc435:
                    zmm14 = _mm_insert_ps(zmm14, zmm1, 0x20)
                    char temp8_1 = temp0_803 & 8
                    cond:47_1 = temp8_1 != 0
                    cond:48_1 = temp8_1 == 0
                    cond:57_1 = temp8_1 == 0
                    cond:58_1 = temp8_1 != 0
                    
                    if (temp8_1 == 0)
                    label_1402fc445:
                        
                        if (cond:48_1)
                            goto label_1402fbf8b
                        
                        goto label_1402fc44b
                    
                label_1402fbf7a:
                    zmm3 = __insertps_xmmps_memd_immb(zmm3, var_2f8_1.d, 0x30)
                    
                    if (cond:47_1)
                    label_1402fc44b:
                        arg6 = _mm_insert_ps(arg6, zmm13, 0x30)
                        zmm9 = zmm9
                        
                        if (not(cond:57_1))
                            zmm14 = _mm_insert_ps(zmm14, zmm0, 0x30)
                    else
                    label_1402fbf8b:
                        zmm9 = zmm9
                        
                        if (cond:58_1)
                            zmm14 = _mm_insert_ps(zmm14, zmm0, 0x30)
                case 2
                    zmm1 = _mm_add_epi64(arg6, zmm7)
                    int32_t temp0_813[0x4] = _mm_add_epi64(_mm_add_epi64(zmm8, zmm11), zmm3)
                    zmm1 = _mm_add_epi64(zmm1, zmm0)
                    zmm2 = _mm_shuffle_epi32(zmm15, 0x50)
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                    zmm11 = _mm_shuffle_epi32(zmm15, 0xfa)
                    zmm3 = _mm_blendv_ps(zx.o(0), temp0_813, zmm11)
                    arg6 = arg7
                    arg7 = data_1434426b0
                    zmm1 = _mm_blendv_ps(zx.o(0), arg7, zmm2)
                    arg5 = _mm_blendv_ps(zx.o(0), arg7, zmm11)
                    int64_t rax_193 = zmm7[0].q
                    void* rbp_47 = arg9 + rax_193
                    int64_t rcx_41 = _mm_extract_epi64(zmm7, 1)
                    void* rbx_41 = arg9 + rcx_41
                    void* rdi_27 = zmm1.q
                    int16_t* rsi_25 = _mm_extract_epi64(zmm1, 1)
                    zmm7 = data_1434426c0
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm7, zmm2)
                    int32_t temp0_822[0x4] =
                        __pinsrw_xmmdq_memw_immb(zx.o(*(rdi_27 + rbp_47)), *(rsi_25 + rbx_41), 1)
                    int16_t* rsi_26 = _mm_extract_epi64(zmm1, 1)
                    int64_t rdi_30 = zmm3.q
                    zmm1 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm1.q + rbp_47)), *(rsi_26 + rbx_41), 1)
                    void* rbp_49 = arg9 + rdi_30
                    int64_t rbx_42 = _mm_extract_epi64(zmm3, 1)
                    int16_t* rsi_27 = arg5[0].q
                    uint128_t temp0_824 = _mm_blendv_ps(zx.o(0), zmm7, zmm11)
                    int32_t temp0_825[0x4] =
                        __pinsrw_xmmdq_memw_immb(temp0_822, *(rsi_27 + rbp_49), 2)
                    zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(temp0_824.q + rbp_49), 2)
                    void* rbp_50 = arg9 + rbx_42
                    int32_t temp0_827[0x4] = __pinsrw_xmmdq_memw_immb(temp0_825, 
                        *(_mm_extract_epi64(arg5, 1) + rbp_50), 3)
                    arg7 = arg6
                    zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, 
                        *(_mm_extract_epi64(temp0_824, 1) + rbp_50), 3)
                    zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg9 + rax_193)), *(arg9 + rcx_41), 1), 
                            *(arg9 + rdi_30), 2), 
                        *(arg9 + rbx_42), 3).q)
                    arg5 = data_1434424d0
                    zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, arg5))
                    zmm0 = data_1434426d0
                    zmm3 = _mm_div_ps(zmm3, zmm0)
                    float temp0_839[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(temp0_827[0].q), arg5)), 
                        zmm0)
                    zmm14 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm1.q), arg5)), zmm0)
                    zmm0 = data_143442710
                    zmm3 = _mm_mul_ps(zmm3, zmm0)
                    arg6 = _mm_mul_ps(temp0_839, zmm0)
                    zmm14 = _mm_mul_ps(zmm14, zmm0)
                case 3
                    zmm2 = zmm15 & var_348_3
                    int64_t rax_196 = sx.q(zmm2[0])
                    void* r15_2 = arg9 + rax_196
                    int32_t temp0_847 = _mm_extract_epi32(zmm2, 1)
                    uint128_t var_338_3 = arg7
                    arg7 = zmm11
                    zmm11 = *(arg9 + rax_196)
                    int64_t rbp_52 = sx.q(temp0_847)
                    void* rax_197 = arg9 + rbp_52
                    int64_t rsi_31 = sx.q(_mm_extract_epi32(zmm2, 2))
                    void* rbx_44 = arg9 + rsi_31
                    int64_t rdi_32 = sx.q(_mm_extract_epi32(zmm2, 3))
                    zmm11 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm11, *(arg9 + rbp_52), 0x10), 
                            *(arg9 + rsi_31), 0x20), 
                        *(arg9 + rdi_32), 0x30)
                    void* rbp_53 = arg9 + rdi_32
                    zmm13 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rdx_16 + r15_2), *(rax_120 + rax_197), 0x10), 
                        *(r10_4 + rbx_44), 0x20)
                    zmm14 = data_142fc95f0 & zmm15
                    int32_t* r14_4 = zx.q(_mm_extract_epi32(zmm14, 1))
                    int32_t* r11_4 = zx.q(_mm_extract_epi32(zmm14, 2))
                    int32_t* r8_3 = zx.q(_mm_extract_epi32(zmm14, 3))
                    arg5 = data_143442650 & zmm15
                    zmm2 = zmm7
                    zmm7 = *(zx.q(arg5[0]) + r15_2)
                    int32_t* rdi_34 = zx.q(_mm_extract_epi32(arg5, 1))
                    int32_t* rsi_32 = zx.q(_mm_extract_epi32(arg5, 2))
                    int32_t* rcx_42 = zx.q(_mm_extract_epi32(arg5, 3))
                    zmm7 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm7, *(rdi_34 + rax_197), 0x10), 
                            *(rsi_32 + rbx_44), 0x20), 
                        *(rcx_42 + rbp_53), 0x30)
                    zmm1 = data_143442660 & zmm15
                    arg5 = *(zx.q(zmm1.d) + r15_2)
                    int32_t* rcx_44 = zx.q(_mm_extract_epi32(zmm1, 1))
                    int32_t* rdi_35 = zx.q(_mm_extract_epi32(zmm1, 2))
                    int32_t* rsi_33 = zx.q(_mm_extract_epi32(zmm1, 3))
                    arg5 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(arg5, *(rcx_44 + rax_197), 0x10), 
                            *(rdi_35 + rbx_44), 0x20), 
                        *(rsi_33 + rbp_53), 0x30)
                    zmm1 = _mm_add_epi64(arg6, zmm2)
                    int32_t temp0_872[0x4] = _mm_add_epi64(_mm_add_epi64(zmm8, arg7), zmm3)
                    zmm3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), 
                        _mm_shuffle_epi32(zmm15, 0x50))
                    zmm1 = _mm_blendv_ps(zx.o(0), temp0_872, _mm_shuffle_epi32(zmm15, 0xfa))
                    zmm0 = data_143442670 & zmm15
                    int32_t* r10_5 = zx.q(_mm_extract_epi32(zmm0, 1))
                    int32_t* rdi_36 = zx.q(_mm_extract_epi32(zmm0, 2))
                    int32_t* rsi_34 = zx.q(_mm_extract_epi32(zmm0, 3))
                    int64_t r9_6 = _mm_extract_epi64(zmm3, 1)
                    int32_t temp0_881[0x4] =
                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg9 + zmm3.q)), *(arg9 + r9_6), 1)
                    int64_t r9_7 = _mm_extract_epi64(zmm1, 1)
                    int32_t temp0_883[0x4] = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(temp0_881, *(arg9 + zmm1.q), 2), *(arg9 + r9_7), 3)
                    arg7 = _mm_srli_epi32(temp0_883, 0xa) & data_143442480
                    uint128_t* r9_8 = zx.q(zmm0.d)
                    zmm3 = _mm_add_ps(
                        _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(temp0_883 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0), 
                            zmm7), 
                        zmm11)
                    zmm0 = data_143442440
                    float temp0_891[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg7, zmm0))
                    arg7 = var_338_3
                    zmm2 = data_143442690
                    arg6 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_891, zmm2), arg5), 
                        __insertps_xmmps_memd_immb(zmm13, *(r14_3 + rbp_53), 0x30))
                    arg5 = __insertps_xmmps_memd_immb(*(zx.q(zmm14.d) + r15_2), *(r14_4 + rax_197), 
                        0x10)
                    zmm1 = _mm_add_epi32(_mm_srli_epi32(temp0_883, 0x15), zmm0)
                    arg5 = __insertps_xmmps_memd_immb(arg5, *(r11_4 + rbx_44), 0x20)
                    r15 = var_268
                    zmm14 = _mm_add_ps(
                        _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(zmm1), zmm2), 
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(*(r9_8 + r15_2), *(r10_5 + rax_197), 
                                        0x10), 
                                    *(rdi_36 + rbx_44), 0x20), 
                                *(rsi_34 + rbp_53), 0x30)), 
                        __insertps_xmmps_memd_immb(arg5, *(r8_3 + rbp_53), 0x30))
                case 4, 5, 6
                    goto label_1402fbf9d
        
        char temp0_914 = _mm_movemask_ps(_mm_cmpeq_epi32(arg8, arg7) & not.o(zmm15))
        
        if (temp0_914 != 0)
            if (r15.d u<= 6)
                arg7 = _mm_mullo_epi32(arg7, zmm9)
                _mm_cvtepi32_epi64(arg7.q)
                _mm_cvtepi32_epi64(_mm_shuffle_epi32(arg7, 0x4e).q)
                jump(sx.q(jump_table_1402fce9c[r13_2]) + &jump_table_1402fce9c)
            
            zmm0 = zx.o(0)
            arg7 = var_388_3
            
            if ((temp0_914 & 4) != 0)
                zmm0 = zx.o(0)
                zmm0 = _mm_blend_ps(zmm0, zmm0, 4)
            
            if ((temp0_914 & 8) != 0)
                zmm0 = _mm_blend_ps(zmm0, zx.o(0), 8)
            
            zmm1 = _mm_sub_ps(zmm0, zmm3)
            arg5 = _mm_sub_ps(zmm0, arg6)
            zmm1 = _mm_mul_ps(zmm1, arg7)
            zmm2 = zmm3
            char temp5_1 = temp0_914 & 1
            
            if (temp5_1 != 0)
                zmm2 = zmm3
                zmm2[0] = zmm2[0] f+ zmm1.d
                zmm0 = _mm_sub_ps(zmm0, zmm14)
                arg5 = _mm_mul_ps(arg5, arg7)
                zmm7 = arg6
                
                if (temp5_1 != 0)
                    goto label_1402fcd31
                
                goto label_1402fcb78
            
            zmm0 = _mm_sub_ps(zmm0, zmm14)
            arg5 = _mm_mul_ps(arg5, arg7)
            zmm7 = arg6
            
            if (temp5_1 != 0)
            label_1402fcd31:
                zmm7 = arg6
                zmm7[0] = zmm7[0] f+ arg5[0]
                arg7 = _mm_mul_ps(arg7, zmm0)
                zmm0 = zmm14
                
                if (temp5_1 != 0)
                    goto label_1402fcb89
                
                goto label_1402fcd45
            
        label_1402fcb78:
            arg7 = _mm_mul_ps(arg7, zmm0)
            zmm0 = zmm14
            bool cond:61_1
            bool cond:62_1
            bool cond:71_1
            bool cond:72_1
            
            if (temp5_1 != 0)
            label_1402fcb89:
                zmm0.d = zmm14.d f+ arg7.d
                zmm3 = _mm_add_ps(zmm3, zmm1)
                char temp11_1 = temp0_914 & 2
                cond:61_1 = temp11_1 == 0
                cond:62_1 = temp11_1 != 0
                cond:71_1 = temp11_1 == 0
                cond:72_1 = temp11_1 != 0
                
                if (temp11_1 != 0)
                    goto label_1402fcd51
                
                goto label_1402fcb99
            
        label_1402fcd45:
            zmm3 = _mm_add_ps(zmm3, zmm1)
            char temp10_1 = temp0_914 & 2
            cond:61_1 = temp10_1 == 0
            cond:62_1 = temp10_1 != 0
            cond:71_1 = temp10_1 == 0
            cond:72_1 = temp10_1 != 0
            
            if (temp10_1 != 0)
            label_1402fcd51:
                zmm2 = _mm_blend_ps(zmm2, zmm3, 2)
                arg6 = _mm_add_ps(arg6, arg5)
                
                if (cond:62_1)
                    goto label_1402fcba2
                
                goto label_1402fcd60
            
        label_1402fcb99:
            arg6 = _mm_add_ps(arg6, arg5)
            
            if (not(cond:61_1))
            label_1402fcba2:
                zmm7 = _mm_blend_ps(zmm7, arg6, 2)
                zmm14 = _mm_add_ps(zmm14, arg7)
                
                if (cond:72_1)
                    goto label_1402fcd6a
                
                goto label_1402fcbb2
            
        label_1402fcd60:
            zmm14 = _mm_add_ps(zmm14, arg7)
            bool cond:81_1
            bool cond:82_1
            bool cond:90_1
            bool cond:91_1
            
            if (not(cond:71_1))
            label_1402fcd6a:
                zmm0 = _mm_blend_ps(zmm0, zmm14, 2)
                char temp13_1 = temp0_914 & 4
                cond:81_1 = temp13_1 == 0
                cond:82_1 = temp13_1 != 0
                cond:90_1 = temp13_1 == 0
                cond:91_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                    goto label_1402fcbbb
                
                goto label_1402fcd7a
            
        label_1402fcbb2:
            char temp12_1 = temp0_914 & 4
            cond:81_1 = temp12_1 == 0
            cond:82_1 = temp12_1 != 0
            cond:90_1 = temp12_1 == 0
            cond:91_1 = temp12_1 != 0
            
            if (temp12_1 == 0)
            label_1402fcd7a:
                
                if (not(cond:81_1))
                label_1402fcd80:
                    zmm7 = _mm_blend_ps(zmm7, arg6, 4)
                    
                    if (cond:91_1)
                        goto label_1402fcbcd
                    
                    goto label_1402fcd8c
            else
            label_1402fcbbb:
                zmm2 = _mm_blend_ps(zmm2, zmm3, 4)
                
                if (cond:82_1)
                    goto label_1402fcd80
            
            bool cond:99_1
            bool cond:100_1
            bool cond:103_1
            bool cond:104_1
            
            if (not(cond:90_1))
            label_1402fcbcd:
                zmm0 = _mm_blend_ps(zmm0, zmm14, 4)
                char temp15_1 = temp0_914 & 8
                cond:99_1 = temp15_1 == 0
                cond:100_1 = temp15_1 != 0
                cond:103_1 = temp15_1 != 0
                cond:104_1 = temp15_1 == 0
                
                if (temp15_1 != 0)
                    goto label_1402fcd95
                
                goto label_1402fcbdd
            
        label_1402fcd8c:
            char temp14_1 = temp0_914 & 8
            cond:99_1 = temp14_1 == 0
            cond:100_1 = temp14_1 != 0
            cond:103_1 = temp14_1 != 0
            cond:104_1 = temp14_1 == 0
            
            if (temp14_1 != 0)
            label_1402fcd95:
                zmm3 = _mm_blend_ps(zmm3, zmm2, 7)
                
                if (cond:100_1)
                    goto label_1402fcbe6
                
                goto label_1402fcda1
            
        label_1402fcbdd:
            zmm3 = zmm2
            
            if (cond:99_1)
            label_1402fcda1:
                arg6 = zmm7
                
                if (cond:103_1)
                    zmm0 = _mm_blend_ps(zmm0, zmm14, 8)
            else
            label_1402fcbe6:
                arg6 = _mm_blend_ps(arg6, zmm7, 7)
                
                if (not(cond:104_1))
                    zmm0 = _mm_blend_ps(zmm0, zmm14, 8)
            
            zmm14 = zmm0
        
        zmm1 = _mm_unpacklo_ps(zmm14, 0)
        zmm2 = _mm_unpackhi_ps(zmm14, zx.o(0))
        zmm0 = _mm_unpacklo_ps(zmm3, arg6[0].q)
        zmm3 = _mm_unpackhi_ps(zmm3, arg6)
        int32_t var_168[0x4] = _mm_insert_ps(zmm0, zmm14, 0x28)
        uint128_t var_158_1 = _mm_unpackhi_pd(zmm0, zmm1.q)
        uint128_t var_148_1 = _mm_insert_ps(zmm3, zmm14, 0xa8)
        uint128_t var_138_1 = _mm_unpackhi_pd(zmm3, zmm2[0].q)
        i_4 = zx.q(_mm_movemask_ps(zmm15))
        
        do
            uint64_t rcx_51
            uint64_t rflags_1
            
            if (i_4 == 0)
                rcx_51 = 0x40
            else
                rcx_51, rflags_1 = _bit_scan_forward(i_4)
            float var_178[0x4] = zmm12
            *(r12 + sx.q(var_178[zx.q(rcx_51.d) & 3]) * 0x30 + 0x20) = (&var_168)[rcx_51]
            i_4 &= rol.q(-2, rcx_51.b)
        while (i_4 != 0)
else
    uint128_t var_188_1 = _mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0)
    uint128_t var_228_1 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
    uint128_t var_1b8_1 = _mm_shuffle_epi32(_mm_add_epi64(3, zx.o(r13)), 0x44)
    int32_t rax_4
    rax_4.b = 0f f>= zmm3.d
    uint128_t var_198_1 = _mm_shuffle_epi32(zx.o(neg.d(rax_4)), 0)
    zmm2[0] = float.s(r10 - 1)
    zmm2[0] = zmm2[0] f* zmm3.d
    int32_t rcx_3 = int.d(zmm2[0])
    uint128_t var_1c8_1 = _mm_shuffle_ps(zmm3, zmm3, 0)
    zmm8 = zx.o(0)
    uint128_t var_388_1 =
        _mm_shuffle_epi32(_mm_min_epi32(zx.o(r10 - 2), _mm_max_epi32(zx.o(rcx_3), zx.o(0))), 0)
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t var_1d8_1[0x4] = zmm2
    int32_t rax_7
    rax_7.b = r15.d == 3
    uint128_t var_1a8_1 = _mm_shuffle_epi32(zx.o(neg.d(rax_7)), 0)
    rdx_1 = 0
    arg5 = _mm_cmpeq_epi32(arg5, arg5)
    r11 = arg3
    int64_t var_218_1 = r12
    int32_t var_39c_1 = arg4
    
    do
        int64_t rax_10 = sx.q((rdx_1 << 3).d)
        zmm7 = *(arg2 + rax_10)
        zmm9 = *(arg2 + rax_10 + 0x10)
        zmm0 = __pmulld_xmmdq_memdq(_mm_shuffle_ps(zmm7, zmm9, 0xdd), var_188_1)
        int64_t rax_12 = sx.q(zmm0.d)
        int64_t rsi_1 = sx.q(*(r11 + rax_12))
        int64_t rcx_6 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rdi_1 = sx.q(*(r11 + rcx_6))
        int64_t rbp_2 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t r14_1 = sx.q(*(r11 + rbp_2))
        int64_t rbx_2 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm3 = _mm_insert_epi32(_mm_insert_epi32(zx.o(rsi_1.d), rdi_1.d, 1), r14_1.d, 2)
        int64_t r9 = sx.q(*(r11 + rbx_2))
        zmm3 = _mm_insert_epi32(zmm3, r9.d, 3)
        zmm13 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(r11 + rax_12 + 4)), *(r11 + rcx_6 + 4), 1), 
                *(r11 + rbp_2 + 4), 2), 
            *(r11 + rbx_2 + 4), 3)
        zmm1 = _mm_shuffle_epi32(zmm3, 0x4e)
        zmm11 = _mm_cmpgt_epi32(data_1434422d0, zmm13) | var_198_1
        float var_378[0x4]
        float var_338[0x4]
        int32_t var_2c8[0x4]
        float var_298[0x4]
        
        if (_mm_movemask_ps(zmm11) == 0)
            arg6 = var_298
        else
            zmm0 = zmm11
            zmm2 = _mm_blendv_ps(var_338, zmm8, zmm0)
            var_378 = _mm_blendv_ps(var_378, zmm8, zmm0)
            arg6 = zmm2
            var_338 = zmm2
            var_2c8 = zmm2
        
        int64_t var_2f8
        var_2f8.o = _mm_cvtepi32_epi64(zmm1.q)
        uint128_t var_238_1 = zmm3
        zmm3 = _mm_cvtepi32_epi64(zmm3.q)
        zmm11 ^= arg5
        uint32_t temp0_32 = _mm_movemask_ps(zmm11)
        zmm14 = zx.o(0)
        uint128_t var_318_1 = zmm9
        int32_t var_288_1[0x4] = zmm7
        uint128_t var_2d8_1
        
        if (temp0_32 == 0)
            var_2d8_1 = zx.o(0)
            var_298 = arg6
            zmm7 = var_2c8
        else
            zmm15 = _mm_add_epi32(zmm13, arg5)
            
            if (arg11.d f>= 1f)
                zmm0 = zmm11
                zmm1 = _mm_blendv_ps(var_338, zmm15, zmm0)
                var_378 = _mm_blendv_ps(var_378, zmm15, zmm0)
                var_2d8_1 = zx.o(0)
                var_298 = zmm1
                var_338 = zmm1
                zmm7 = zmm1
            else
                zmm0 = __pmulld_xmmdq_memdq(zmm13, var_228_1)
                zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                uint128_t var_2c8_1 = zmm3
                zmm12 = _mm_add_epi64(_mm_add_epi64(var_1b8_1, zmm3), zmm0)
                zmm9 = _mm_add_epi64(__paddq_xmmdq_memdq(var_1b8_1, var_2f8.o), zmm1)
                zmm0 = data_143442c10
                zmm12 &= zmm0
                zmm9 &= zmm0
                zmm3 = _mm_min_epi32(
                    _mm_max_epi32(
                        _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(zmm15), var_1c8_1)), 
                        zmm8), 
                    zmm15)
                uint128_t var_348_1 = arg7
                int32_t var_398_1[0x4] = arg8
                float var_278[0x4]
                uint128_t var_248
                
                if (r10 s< 0x100)
                    zmm0 = _mm_shuffle_epi32(zmm3, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm3.q), zmm12)
                    char rbp_4 = temp0_32.b
                    float var_208[0x4]
                    
                    if ((rbp_4 & 1) != 0)
                        arg6 = _mm_insert_epi32(var_208, zx.d(*zmm1.q), 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rbp_4 & 2) != 0)
                            arg6 = _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    else
                        arg6 = var_208
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rbp_4 & 2) != 0)
                            arg6 = _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    
                    zmm0 = _mm_add_epi64(zmm0, zmm9)
                    
                    if ((rbp_4 & 4) != 0)
                        arg6 = _mm_insert_epi32(arg6, zx.d(*zmm0.q), 2)
                        
                        if ((rbp_4 & 8) != 0)
                            arg6 = _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else if ((rbp_4 & 8) != 0)
                        arg6 = _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    zmm8 = __pcmpgtd_xmmdq_memdq(arg6 & data_142ed6810, var_388_1)
                    int32_t temp0_122[0x4] = _mm_cmpeq_epi32(zmm2, zmm2)
                    zmm0 = zmm8 ^ temp0_122
                    arg5 = zmm8 & not.o(zmm11)
                    var_208 = arg6
                    uint128_t var_2d8_2 = zmm0
                    zmm7 = zmm3
                    
                    if (_mm_movemask_ps(arg5) != 0)
                        zmm7 = _mm_blendv_ps(zmm7, zmm15, zmm0)
                        arg5 = _mm_sub_epi32(zmm3, temp0_122)
                        zmm1 = _mm_cmpgt_epi32(arg5, zmm15)
                        int32_t temp0_127[0x4] = _mm_cmpeq_epi32(arg8, arg8)
                        zmm8 &= not.o(zmm1 ^ temp0_122)
                        arg6 = zmm8 & zmm11
                        uint32_t j = _mm_movemask_ps(arg6)
                        
                        if (j != 0)
                            arg7 = zmm3
                            
                            do
                                zmm1 = arg5
                                zmm0 = _mm_shuffle_epi32(arg5, 0x4e)
                                int32_t temp0_132[0x4] =
                                    _mm_add_epi64(_mm_cvtepi32_epi64(arg5[0].q), zmm12)
                                char temp0_133 = _mm_movemask_ps(arg6)
                                float var_2b8[0x4]
                                
                                if ((temp0_133 & 1) != 0)
                                    arg6 = _mm_insert_epi32(var_2b8, zx.d(*temp0_132[0].q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_133 & 2) != 0)
                                        arg6 = _mm_insert_epi32(arg6, 
                                            zx.d(*_mm_extract_epi64(temp0_132, 1)), 1)
                                else
                                    arg6 = var_2b8
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_133 & 2) != 0)
                                        arg6 = _mm_insert_epi32(arg6, 
                                            zx.d(*_mm_extract_epi64(temp0_132, 1)), 1)
                                
                                zmm0 = _mm_add_epi64(zmm0, zmm9)
                                
                                if ((temp0_133 & 4) != 0)
                                    arg6 = _mm_insert_epi32(arg6, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_133 & 8) != 0)
                                        arg6 = _mm_insert_epi32(arg6, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else if ((temp0_133 & 8) != 0)
                                    arg6 =
                                        _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                var_2b8 = arg6
                                zmm0 =
                                    __pcmpgtd_xmmdq_memdq(arg6 & data_142ed6810, var_388_1) & zmm8
                                zmm7 = _mm_blendv_ps(zmm7, arg7, zmm0)
                                zmm2 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm11) != j)
                                    zmm2 = zmm0 ^ zmm8
                                
                                arg5 = _mm_sub_epi32(zmm1, temp0_127)
                                zmm8 = _mm_cmpgt_epi32(arg5, zmm15) & not.o(zmm2)
                                arg6 = zmm8 & zmm11
                                j = _mm_movemask_ps(arg6)
                                arg7 = zmm1
                            while (j != 0)
                    
                    uint32_t temp0_147 = _mm_movemask_ps(_mm_andnot_ps(var_2d8_2, zmm11))
                    arg5 = _mm_cmpeq_epi32(arg5, arg5)
                    int32_t var_1e8[0x4]
                    
                    if (temp0_147 == 0)
                        zmm8 = var_378
                        zmm2 = var_1e8
                        arg7 = var_348_1
                    else
                        zmm0 = var_2d8_2 ^ arg5
                        zmm7 = _mm_blendv_ps(zmm7, zx.o(0), zmm0)
                        zmm3 = _mm_add_epi32(zmm3, arg5)
                        arg6 = _mm_cmpgt_epi32(zmm3, zx.o(0)) & zmm0
                        zmm0 = arg6 & zmm11
                        uint32_t j_1 = _mm_movemask_ps(zmm0)
                        
                        if (j_1 == 0)
                            zmm8 = var_378
                            arg7 = var_348_1
                        else
                            zmm8 = var_378
                            arg7 = var_348_1
                            
                            do
                                zmm2 = _mm_shuffle_epi32(zmm3, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm3.q), zmm12)
                                char temp0_161 = _mm_movemask_ps(zmm0)
                                
                                if ((temp0_161 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                    
                                    if ((temp0_161 & 2) != 0)
                                        goto label_1402f9871
                                    
                                    goto label_1402f98bf
                                
                                arg7 = _mm_insert_epi32(arg7, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((temp0_161 & 2) != 0)
                                label_1402f9871:
                                    arg7 =
                                        _mm_insert_epi32(arg7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm9)
                                    
                                    if ((temp0_161 & 4) == 0)
                                        goto label_1402f98c8
                                    
                                    goto label_1402f9888
                                
                            label_1402f98bf:
                                zmm0 = _mm_add_epi64(zmm0, zmm9)
                                
                                if ((temp0_161 & 4) != 0)
                                label_1402f9888:
                                    arg7 = _mm_insert_epi32(arg7, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_161 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402f98c8:
                                    
                                    if ((temp0_161 & 8) != 0)
                                        arg7 = _mm_insert_epi32(arg7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = __pcmpgtd_xmmdq_memdq(arg7 & data_142ed6810, var_388_1)
                                    & not.o(arg6)
                                zmm7 = _mm_blendv_ps(zmm7, zmm3, zmm0)
                                zmm2 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm11) != j_1)
                                    zmm2 = zmm0 ^ arg6
                                
                                zmm3 = _mm_add_epi32(zmm3, arg5)
                                arg6 = _mm_cmpgt_epi32(zmm3, zx.o(0)) & zmm2
                                zmm0 = arg6 & zmm11
                                j_1 = _mm_movemask_ps(zmm0)
                            while (j_1 != 0)
                        
                        zmm2 = var_1e8
                    
                    zmm3 = var_248
                    arg6 = _mm_blendv_ps(var_338, zmm7, zmm11)
                    zmm0 = _mm_shuffle_epi32(arg6, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg6[0].q), zmm12)
                    
                    if ((rbp_4 & 1) == 0)
                        arg8 = var_398_1
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rbp_4 & 2) != 0)
                            goto label_1402faa4e
                        
                        goto label_1402f9bb9
                    
                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                    arg8 = var_398_1
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rbp_4 & 2) != 0)
                    label_1402faa4e:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = _mm_add_epi64(zmm0, zmm9)
                        
                        if ((rbp_4 & 4) == 0)
                            goto label_1402f9bc8
                        
                        goto label_1402faa6b
                    
                label_1402f9bb9:
                    zmm0 = _mm_add_epi64(zmm0, zmm9)
                    
                    if ((rbp_4 & 4) != 0)
                    label_1402faa6b:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                        
                        if ((rbp_4 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402f9bc8:
                        
                        if ((rbp_4 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    float temp0_210[0x4] = _mm_blendv_ps(zmm8, _mm_sub_epi32(arg6, arg5), zmm11)
                    zmm1 = temp0_210
                    zmm0 = _mm_cmpgt_epi32(temp0_210, zmm15) & zmm11
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm1 = _mm_blendv_ps(zmm1, zmm15, zmm0)
                    
                    zmm8 = var_278
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    var_378 = zmm1
                    zmm12 = _mm_add_epi64(zmm12, _mm_cvtepi32_epi64(zmm1.q))
                    
                    if ((rbp_4 & 1) == 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rbp_4 & 2) != 0)
                            goto label_1402faaa8
                        
                        goto label_1402f9c46
                    
                    zmm8 = _mm_insert_epi32(zmm8, zx.d(*zmm12[0].q), 0)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rbp_4 & 2) != 0)
                    label_1402faaa8:
                        zmm8 = _mm_insert_epi32(zmm8, zx.d(*_mm_extract_epi64(zmm12, 1)), 1)
                        zmm9 = _mm_add_epi64(zmm9, zmm0)
                        
                        if ((rbp_4 & 4) == 0)
                            goto label_1402f9c55
                        
                        goto label_1402faac6
                    
                label_1402f9c46:
                    zmm9 = _mm_add_epi64(zmm9, zmm0)
                    
                    if ((rbp_4 & 4) != 0)
                    label_1402faac6:
                        zmm8 = _mm_insert_epi32(zmm8, zx.d(*zmm9.q), 2)
                        
                        if ((rbp_4 & 8) != 0)
                            zmm8 = _mm_insert_epi32(zmm8, zx.d(*_mm_extract_epi64(zmm9, 1)), 3)
                    else
                    label_1402f9c55:
                        
                        if ((rbp_4 & 8) != 0)
                            zmm8 = _mm_insert_epi32(zmm8, zx.d(*_mm_extract_epi64(zmm9, 1)), 3)
                    
                    zmm9 = var_318_1
                    var_1e8 = zmm2
                    zmm1 = data_142ed6810
                    zmm0 = zmm2 & zmm1
                    zmm1 &= zmm8
                else
                    zmm1 = _mm_add_epi32(zmm3, zmm3)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm12)
                    char rbp_3 = temp0_32.b
                    int32_t var_258[0x4]
                    
                    if ((rbp_3 & 1) != 0)
                        var_258 = _mm_insert_epi32(var_258, zx.d(*zmm1.q), 0)
                    
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rbp_3 & 2) != 0)
                        zmm1 = _mm_insert_epi32(var_258, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = _mm_add_epi64(zmm0, zmm9)
                        
                        if ((rbp_3 & 4) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm0.q), 2)
                    else
                        zmm1 = var_258
                        zmm0 = _mm_add_epi64(zmm0, zmm9)
                        
                        if ((rbp_3 & 4) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm0.q), 2)
                    
                    float var_298_1[0x4] = arg6
                    
                    if ((rbp_3 & 8) != 0)
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    int32_t temp0_65[0x4] =
                        __pcmpgtd_xmmdq_memdq(_mm_blend_epi16(zmm1, zmm8, 0xaa), var_388_1)
                    zmm8 = temp0_65 ^ arg5
                    var_258 = zmm1
                    arg7 = zmm3
                    
                    if (_mm_movemask_ps(temp0_65 & not.o(zmm11)) != 0)
                        arg7 = _mm_blendv_ps(arg7, zmm15, zmm8)
                        zmm0 = _mm_sub_epi32(zmm3, arg5)
                        arg8 = temp0_65 & not.o(_mm_cmpgt_epi32(zmm0, zmm15) ^ arg5)
                        zmm7 = arg8 & zmm11
                        uint32_t j_2 = _mm_movemask_ps(zmm7)
                        
                        if (j_2 != 0)
                            zmm1 = zmm3
                            
                            do
                                arg6 = zmm0
                                int32_t temp0_72[0x4] = _mm_add_epi32(zmm0, zmm0)
                                zmm0 = _mm_shuffle_epi32(temp0_72, 0x4e)
                                int32_t temp0_75[0x4] =
                                    _mm_add_epi64(_mm_cvtepi32_epi64(temp0_72[0].q), zmm12)
                                char temp0_76 = _mm_movemask_ps(zmm7)
                                int32_t var_328[0x4]
                                
                                if ((temp0_76 & 1) != 0)
                                    zmm7 = _mm_insert_epi32(var_328, zx.d(*temp0_75[0].q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_76 & 2) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, 
                                            zx.d(*_mm_extract_epi64(temp0_75, 1)), 1)
                                else
                                    zmm7 = var_328
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_76 & 2) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, 
                                            zx.d(*_mm_extract_epi64(temp0_75, 1)), 1)
                                
                                arg5 = _mm_cmpeq_epi32(temp0_75, temp0_75)
                                zmm0 = _mm_add_epi64(zmm0, zmm9)
                                
                                if ((temp0_76 & 4) != 0)
                                    zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_76 & 8) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else if ((temp0_76 & 8) != 0)
                                    zmm7 =
                                        _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm2 = zx.o(0)
                                var_328 = zmm7
                                zmm0 = __pcmpgtd_xmmdq_memdq(_mm_blend_epi16(zmm7, zx.o(0), 0xaa), 
                                    var_388_1) & arg8
                                arg7 = _mm_blendv_ps(arg7, zmm1, zmm0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm11) != j_2)
                                    zmm2 = zmm0 ^ arg8
                                
                                zmm0 = _mm_sub_epi32(arg6, arg5)
                                arg8 = _mm_cmpgt_epi32(zmm0, zmm15) & not.o(zmm2)
                                zmm7 = arg8 & zmm11
                                j_2 = _mm_movemask_ps(zmm7)
                                zmm1 = arg6
                            while (j_2 != 0)
                    
                    if (_mm_movemask_ps(zmm8 & not.o(zmm11)) == 0)
                        zmm7 = var_378
                        zmm8 = var_278
                        zmm3 = var_248
                        arg8 = var_398_1
                    else
                        zmm8 ^= arg5
                        arg7 = _mm_blendv_ps(arg7, zx.o(0), zmm8)
                        zmm3 = _mm_add_epi32(zmm3, arg5)
                        arg6 = _mm_cmpgt_epi32(zmm3, zx.o(0)) & zmm8
                        zmm0 = arg6 & zmm11
                        uint32_t j_3 = _mm_movemask_ps(zmm0)
                        
                        if (j_3 == 0)
                            zmm7 = var_378
                            zmm8 = var_278
                            arg8 = var_398_1
                        else
                            zmm7 = var_378
                            zmm8 = var_278
                            arg8 = var_398_1
                            
                            do
                                zmm1 = _mm_add_epi32(zmm3, zmm3)
                                zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm12)
                                char temp0_105 = _mm_movemask_ps(zmm0)
                                
                                if ((temp0_105 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                    
                                    if ((temp0_105 & 2) != 0)
                                        goto label_1402f9512
                                    
                                    goto label_1402f9567
                                
                                arg8 = _mm_insert_epi32(arg8, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((temp0_105 & 2) != 0)
                                label_1402f9512:
                                    arg8 =
                                        _mm_insert_epi32(arg8, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm9)
                                    
                                    if ((temp0_105 & 4) == 0)
                                        goto label_1402f9570
                                    
                                    goto label_1402f952a
                                
                            label_1402f9567:
                                zmm0 = _mm_add_epi64(zmm0, zmm9)
                                
                                if ((temp0_105 & 4) != 0)
                                label_1402f952a:
                                    arg8 = _mm_insert_epi32(arg8, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_105 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402f9570:
                                    
                                    if ((temp0_105 & 8) != 0)
                                        arg8 = _mm_insert_epi32(arg8, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = __pcmpgtd_xmmdq_memdq(_mm_blend_epi16(arg8, zx.o(0), 0xaa), 
                                    var_388_1) & not.o(arg6)
                                arg7 = _mm_blendv_ps(arg7, zmm3, zmm0)
                                zmm2 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm11) != j_3)
                                    zmm2 = zmm0 ^ arg6
                                
                                zmm3 = _mm_add_epi32(zmm3, arg5)
                                arg6 = _mm_cmpgt_epi32(zmm3, zx.o(0)) & zmm2
                                zmm0 = arg6 & zmm11
                                j_3 = _mm_movemask_ps(zmm0)
                            while (j_3 != 0)
                        
                        zmm3 = var_248
                    
                    arg6 = _mm_blendv_ps(var_298_1, arg7, zmm11)
                    zmm1 = _mm_add_epi32(arg6, arg6)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm12)
                    
                    if ((rbp_3 & 1) != 0)
                        zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm1.q), 0)
                    
                    arg7 = var_348_1
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rbp_3 & 2) == 0)
                        zmm0 = _mm_add_epi64(zmm0, zmm9)
                        
                        if ((rbp_3 & 4) != 0)
                            goto label_1402f9ab9
                        
                        goto label_1402f9a1a
                    
                    zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    zmm0 = _mm_add_epi64(zmm0, zmm9)
                    
                    if ((rbp_3 & 4) == 0)
                    label_1402f9a1a:
                        
                        if ((rbp_3 & 8) != 0)
                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402f9ab9:
                        zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                        
                        if ((rbp_3 & 8) != 0)
                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    zmm7 = _mm_blendv_ps(zmm7, _mm_sub_epi32(arg6, arg5), zmm11)
                    zmm1 = zmm7
                    zmm0 = _mm_cmpgt_epi32(zmm7, zmm15) & zmm11
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm1 = _mm_blendv_ps(zmm1, zmm15, zmm0)
                    
                    var_378 = zmm1
                    zmm1 = _mm_add_epi32(zmm1, zmm1)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm12 = _mm_add_epi64(zmm12, _mm_cvtepi32_epi64(zmm1.q))
                    uint128_t var_1f8
                    
                    if ((rbp_3 & 1) != 0)
                        zmm1 = _mm_insert_epi32(var_1f8, zx.d(*zmm12[0].q), 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rbp_3 & 2) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm12, 1)), 1)
                    else
                        zmm1 = var_1f8
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rbp_3 & 2) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm12, 1)), 1)
                    
                    zmm9 = _mm_add_epi64(zmm9, zmm0)
                    
                    if ((rbp_3 & 4) != 0)
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm9.q), 2)
                        
                        if ((rbp_3 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm9, 1)), 3)
                    else if ((rbp_3 & 8) != 0)
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm9, 1)), 3)
                    
                    zmm9 = var_318_1
                    zmm0 = _mm_blend_epi16(zmm3, zx.o(0), 0xaa)
                    var_1f8 = zmm1
                    zmm1 = _mm_blend_epi16(zmm1, zx.o(0), 0xaa)
                
                zmm7 = arg6
                var_248 = zmm3
                var_278 = zmm8
                zmm2 = zx.o(0)
                
                if (arg12 != 1)
                    zmm1 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm1, zmm0), data_142d3f5b0)
                    zmm2 = _mm_div_ps(_mm_sub_ps(var_1d8_1, _mm_cvtepi32_ps(zmm0)), 
                        _mm_cvtepi32_ps(zmm1))
                
                var_2d8_1 = _mm_blendv_ps(zx.o(0), zmm2, zmm11)
                var_338 = arg6
                var_298 = arg6
                zmm3 = var_2c8_1
        
        zmm13 = __pcmpgtd_xmmdq_memdq(zmm13, data_142d3f5b0) & var_1a8_1
        zmm1 = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, zmm13)
        arg6 = _mm_cvtepi32_epi64(zmm1.q)
        zmm11 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
        zmm1 = __pmulld_xmmdq_memdq(zmm7, var_228_1)
        zmm0 = _mm_cvtepi32_epi64(zmm1.q)
        zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
        int32_t var_308 = rdx_1.d
        uint128_t var_348_2 = arg7
        int32_t var_398_2[0x4] = arg8
        
        if (r15.d u< 2)
            zmm8 = zmm3
            int32_t temp0_279[0x4] = _mm_add_epi64(arg6, zmm3)
            zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm11, var_2f8.o), zmm1)
            int32_t temp0_282[0x4] = _mm_add_epi64(temp0_279, zmm0)
            int64_t rax_77 = temp0_282[0].q
            int64_t rcx_7 = _mm_extract_epi64(temp0_282, 1)
            int64_t rbp_5 = zmm3.q
            int64_t rbx_27 = _mm_extract_epi64(zmm3, 1)
            zmm12 = *(r13 + rax_77 + 4)
            zmm15 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r13 + rax_77), *(r13 + rcx_7), 0x10), 
                    *(r13 + rbp_5), 0x20), 
                *(r13 + rbx_27), 0x30)
            zmm12 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm12, *(r13 + rcx_7 + 4), 0x10), 
                    *(r13 + rbp_5 + 4), 0x20), 
                *(r13 + rbx_27 + 4), 0x30)
            zmm14 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r13 + rax_77 + 8), *(r13 + rcx_7 + 8), 0x10), 
                    *(r13 + rbp_5 + 8), 0x20), 
                *(r13 + rbx_27 + 8), 0x30)
        else if (r15.d == 2)
            zmm8 = zmm3
            int32_t temp0_292[0x4] = _mm_add_epi64(arg6, zmm3)
            zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm11, var_2f8.o), zmm1)
            int32_t temp0_295[0x4] = _mm_add_epi64(temp0_292, zmm0)
            int64_t rbp_6 = _mm_extract_epi64(temp0_295, 1)
            int64_t rbx_28 = temp0_295[0].q
            int64_t rcx_8 = zmm3.q
            int64_t rax_78 = _mm_extract_epi64(zmm3, 1)
            zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(r13 + rbx_28)), *(r13 + rbp_6), 1), 
                    *(r13 + rcx_8), 2), 
                *(r13 + rax_78), 3).q)
            zmm1 = data_1434424d0
            float temp0_301[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(r13 + rbx_28 + 2)), *(r13 + rbp_6 + 2), 1), 
                    *(r13 + rcx_8 + 2), 2), 
                *(r13 + rax_78 + 2), 3)
            zmm2 = data_1434426d0
            float temp0_305[0x4] = _mm_div_ps(temp0_301, zmm2)
            float temp0_308[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm0.q), zmm1))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(r13 + rbx_28 + 4)), *(r13 + rbp_6 + 4), 1), 
                    *(r13 + rcx_8 + 4), 2), 
                *(r13 + rax_78 + 4), 3)
            float temp0_312[0x4] = _mm_div_ps(temp0_308, zmm2)
            zmm14 =
                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm0.q), zmm1)), zmm2)
            zmm0 = data_143442710
            zmm15 = _mm_mul_ps(temp0_305, zmm0)
            zmm12 = _mm_mul_ps(temp0_312, zmm0)
            zmm14 = _mm_mul_ps(zmm14, zmm0)
        else
            zmm8 = zmm3
            zmm12 = zx.o(0)
            zmm15 = zx.o(0)
            
            if (r15.d == 3)
                int32_t temp0_236[0x4] = _mm_add_epi64(arg6, zmm8)
                zmm3 = __paddq_xmmdq_memdq(zmm11, var_2f8.o)
                int32_t temp0_238[0x4] = _mm_add_epi64(temp0_236, zmm0)
                zmm0 = zx.o(*(r13 + temp0_238[0].q))
                int64_t rax_74 = _mm_extract_epi64(temp0_238, 1)
                zmm3 = _mm_add_epi64(zmm3, zmm1)
                zmm0 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(__pinsrd_xmmdq_memd_immb(zmm0, *(r13 + rax_74), 1), 
                        *(r13 + zmm3.q), 2), 
                    *(r13 + _mm_extract_epi64(zmm3, 1)), 3)
                zmm2 = *(r13 + rsi_1 + 4)
                zmm1 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r13 + rsi_1), *(r13 + rdi_1), 0x10), 
                        *(r13 + r14_1), 0x20), 
                    *(r13 + r9), 0x30)
                zmm2 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm2, *(r13 + rdi_1 + 4), 0x10), 
                        *(r13 + r14_1 + 4), 0x20), 
                    *(r13 + r9 + 4), 0x30)
                zmm3 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r13 + rsi_1 + 0xc), *(r13 + rdi_1 + 0xc), 
                            0x10), 
                        *(r13 + r14_1 + 0xc), 0x20), 
                    *(r13 + r9 + 0xc), 0x30)
                arg7 = zmm0
                arg5 = zmm0
                float temp0_255[0x4] = _mm_mul_ps(
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0), 
                    zmm3)
                zmm0 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r13 + rsi_1 + 0x10), *(r13 + rdi_1 + 0x10), 
                            0x10), 
                        *(r13 + r14_1 + 0x10), 0x20), 
                    *(r13 + r9 + 0x10), 0x30)
                zmm15 = _mm_add_ps(temp0_255, zmm1)
                arg5 = _mm_srli_epi32(arg5, 0xa) & data_143442480
                zmm1 = data_143442440
                arg8 = zmm1
                int32_t temp0_261[0x4] = _mm_add_epi32(arg5, zmm1)
                float temp0_262[0x4] = _mm_cvtepi32_ps(temp0_261)
                arg5 = _mm_cmpeq_epi32(temp0_261, temp0_261)
                zmm1 = data_143442690
                zmm3 = zmm1
                float temp0_265[0x4] = _mm_mul_ps(_mm_div_ps(temp0_262, zmm1), zmm0)
                zmm0 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r13 + rsi_1 + 8), *(r13 + rdi_1 + 8), 0x10), 
                    *(r13 + r14_1 + 8), 0x20)
                zmm12 = _mm_add_ps(temp0_265, zmm2)
                zmm1 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r13 + rsi_1 + 0x14), *(r13 + rdi_1 + 0x14), 
                            0x10), 
                        *(r13 + r14_1 + 0x14), 0x20), 
                    *(r13 + r9 + 0x14), 0x30)
                zmm14 = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(arg7, 0x15), arg8)), 
                            zmm3), 
                        zmm1), 
                    __insertps_xmmps_memd_immb(zmm0, *(r13 + r9 + 8), 0x30))
        
        var_2c8 = zmm7
        zmm2 = var_378
        arg7 = _mm_cmpeq_epi32(zmm7, zmm2)
        zmm7 = arg7 ^ arg5
        char temp0_321 = _mm_movemask_ps(zmm7)
        int32_t rdx_2
        
        if (temp0_321 == 0)
            arg4 = var_39c_1
            zmm8 = zx.o(0)
            rdx_2 = var_308
            arg7 = var_348_2
            arg8 = var_398_2
            zmm7 = var_288_1
        else
            uint128_t var_368
            int32_t var_358[0x4]
            uint128_t var_2e8
            int64_t rcx_26
            int64_t rbp_16
            int64_t rsi_10
            int64_t rdi_10
            
            if (r15.d u> 6)
            label_1402fa2e0:
                uint64_t rbp_10 = zx.q(temp0_321)
                rsi_10 = rbp_10 & 1
                arg7 = var_348_2
                arg8 = var_398_2
                arg6 = var_2d8_1
                zmm8 = zx.o(0)
                
                if (rsi_10 == 0)
                    rdx_2 = var_308
                    zmm3 = var_2e8
                    zmm0 = var_368
                    zmm2 = var_358
                    
                    if (rsi_10 != 0)
                        zmm0 = _mm_blend_epi16(zmm0, zmm8, 3)
                else
                    zmm3 = _mm_blend_epi16(var_2e8, zmm8, 3)
                    rdx_2 = var_308
                    zmm0 = var_368
                    zmm2 = var_358
                    
                    if (rsi_10 != 0)
                        zmm0 = _mm_blend_epi16(zmm0, zmm8, 3)
                
                arg4 = var_39c_1
                zmm9 = var_318_1
                bool cond:36_1
                bool cond:37_1
                bool cond:40_1
                bool cond:41_1
                
                if (rsi_10 != 0)
                    zmm2 = _mm_blend_epi16(zmm2, zmm8, 3)
                    rcx_26 = rbp_10 & 2
                    cond:36_1 = rcx_26 == 0
                    cond:37_1 = rcx_26 != 0
                    cond:40_1 = rcx_26 == 0
                    cond:41_1 = rcx_26 != 0
                    
                    if (rcx_26 != 0)
                        goto label_1402fa9d9
                    
                    goto label_1402fa98d
                
                rcx_26 = rbp_10 & 2
                cond:36_1 = rcx_26 == 0
                cond:37_1 = rcx_26 != 0
                cond:40_1 = rcx_26 == 0
                cond:41_1 = rcx_26 != 0
                
                if (rcx_26 == 0)
                label_1402fa98d:
                    
                    if (not(cond:36_1))
                    label_1402fa98f:
                        zmm0 = _mm_blend_epi16(zmm0, zmm8, 0xc)
                        
                        if (cond:41_1)
                            goto label_1402fa9e4
                        
                        goto label_1402fa99b
                else
                label_1402fa9d9:
                    zmm3 = _mm_blend_epi16(zmm3, zmm8, 0xc)
                    
                    if (cond:37_1)
                        goto label_1402fa98f
                
                bool cond:59_1
                bool cond:60_1
                bool cond:63_1
                bool cond:64_1
                
                if (not(cond:40_1))
                label_1402fa9e4:
                    zmm2 = _mm_blend_epi16(zmm2, zmm8, 0xc)
                    rdi_10 = rbp_10 & 4
                    cond:59_1 = rdi_10 == 0
                    cond:60_1 = rdi_10 != 0
                    cond:63_1 = rdi_10 == 0
                    cond:64_1 = rdi_10 != 0
                    
                    if (rdi_10 != 0)
                        goto label_1402fa9a1
                    
                    goto label_1402fa9f4
                
            label_1402fa99b:
                rdi_10 = rbp_10 & 4
                cond:59_1 = rdi_10 == 0
                cond:60_1 = rdi_10 != 0
                cond:63_1 = rdi_10 == 0
                cond:64_1 = rdi_10 != 0
                
                if (rdi_10 == 0)
                label_1402fa9f4:
                    
                    if (not(cond:59_1))
                    label_1402fa9f6:
                        zmm0 = _mm_blend_epi16(zmm0, zmm8, 0x30)
                        
                        if (cond:64_1)
                            goto label_1402fa9ac
                        
                        goto label_1402fa9ff
                else
                label_1402fa9a1:
                    zmm3 = _mm_blend_epi16(zmm3, zmm8, 0x30)
                    
                    if (cond:60_1)
                        goto label_1402fa9f6
                
                bool cond:79_1
                bool cond:80_1
                bool cond:83_1
                bool cond:84_1
                
                if (not(cond:63_1))
                label_1402fa9ac:
                    zmm2 = _mm_blend_epi16(zmm2, zmm8, 0x30)
                    rbp_16 = rbp_10 & 8
                    cond:79_1 = rbp_16 == 0
                    cond:80_1 = rbp_16 != 0
                    cond:83_1 = rbp_16 == 0
                    cond:84_1 = rbp_16 != 0
                    
                    if (rbp_16 != 0)
                        goto label_1402faa05
                    
                    goto label_1402fa9b9
                
            label_1402fa9ff:
                rbp_16 = rbp_10 & 8
                cond:79_1 = rbp_16 == 0
                cond:80_1 = rbp_16 != 0
                cond:83_1 = rbp_16 == 0
                cond:84_1 = rbp_16 != 0
                
                if (rbp_16 != 0)
                label_1402faa05:
                    zmm3 = _mm_blend_epi16(zmm3, zmm8, 0xc0)
                    
                    if (cond:80_1)
                        goto label_1402fa9bb
                    
                    goto label_1402faa0e
                
            label_1402fa9b9:
                
                if (cond:79_1)
                label_1402faa0e:
                    
                    if (not(cond:83_1))
                        zmm2 = _mm_blend_epi16(zmm2, zmm8, 0xc0)
                else
                label_1402fa9bb:
                    zmm0 = _mm_blend_epi16(zmm0, zmm8, 0xc0)
                    
                    if (cond:84_1)
                        zmm2 = _mm_blend_epi16(zmm2, zmm8, 0xc0)
            else
                int32_t temp0_322[0x4] = __pmulld_xmmdq_memdq(zmm2, var_228_1)
                zmm0 = _mm_cvtepi32_epi64(temp0_322[0].q)
                zmm9 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_322, 0x4e)[0].q)
                
                switch (r15.d)
                    case 0, 1
                        arg6 = _mm_add_epi64(arg6, zmm8)
                        int32_t temp0_328[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(zmm11, var_2f8.o), zmm9)
                        arg6 = _mm_add_epi64(arg6, zmm0)
                        zmm1 = _mm_shuffle_epi32(zmm7, 0x50)
                        arg5 = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                        zmm2 = _mm_shuffle_epi32(zmm7, 0xfa)
                        float temp0_333[0x4] = _mm_blendv_ps(zx.o(0), temp0_328, zmm2)
                        int64_t rbp_7 = _mm_extract_epi64(arg5, 1)
                        void* rax_82 = r13 + rbp_7
                        zmm8 = *(r13 + rbp_7)
                        int64_t rbx_30 = temp0_333[0].q
                        int64_t rdi_4 = _mm_extract_epi64(temp0_333, 1)
                        void* rbp_8 = r13 + rbx_30
                        zmm3 = data_1434426c0
                        uint128_t temp0_334 = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                        zmm11 = *(r13 + rbx_30)
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                        zmm13 = *(r13 + rdi_4)
                        void* rbx_32 = arg5[0].q + r13
                        arg6 = *(temp0_334.q + rbx_32)
                        arg5 = *(_mm_extract_epi64(temp0_334, 1) + rax_82)
                        zmm9 = *(zmm3.q + rbp_8)
                        uint128_t* rsi_5 = _mm_extract_epi64(zmm3, 1)
                        void* rdi_5 = r13 + rdi_4
                        zmm0 = zmm1
                        zmm1 = data_1434426e0
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                        var_2f8.o = *(rsi_5 + rdi_5)
                        uint128_t temp0_337 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        zmm0 = *(zmm3.q + rbx_32)
                        zmm1 = *(_mm_extract_epi64(zmm3, 1) + rax_82)
                        uint128_t* rsi_8 = _mm_extract_epi64(temp0_337, 1)
                        zmm2 = *(temp0_337.q + rbp_8)
                        arg7 = *(rsi_8 + rdi_5)
                        uint64_t rbp_9 = zx.q(temp0_321)
                        rsi_10 = rbp_9 & 1
                        bool cond:27_1
                        
                        if (rsi_10 != 0)
                            zmm3 = _mm_blend_ps(var_2e8, *rbx_32, 1)
                            rdx_2 = var_308
                            cond:27_1 = rsi_10 == 0
                            
                            if (rsi_10 != 0)
                                var_368 = _mm_blend_ps(var_368, arg6, 1)
                        else
                            rdx_2 = var_308
                            zmm3 = var_2e8
                            cond:27_1 = rsi_10 == 0
                            
                            if (rsi_10 != 0)
                                var_368 = _mm_blend_ps(var_368, arg6, 1)
                        
                        arg4 = var_39c_1
                        arg8 = var_398_2
                        
                        if (not(cond:27_1))
                            var_358 = _mm_blend_ps(var_358, zmm0, 1)
                        
                        zmm0 = var_368
                        arg6 = var_2d8_1
                        rcx_26 = rbp_9 & 2
                        
                        if (rcx_26 != 0)
                            zmm3 = _mm_insert_ps(zmm3, zmm8, 0x10)
                            
                            if (rcx_26 != 0)
                                goto label_1402fa8f2
                        else if (rcx_26 != 0)
                        label_1402fa8f2:
                            zmm0 = _mm_insert_ps(zmm0, arg5, 0x10)
                            
                            if (rcx_26 != 0)
                                goto label_1402fa8a9
                            
                            goto label_1402fa8fd
                        
                        bool cond:65_1
                        bool cond:73_1
                        bool cond:74_1
                        bool cond:66_1
                        
                        if (rcx_26 == 0)
                        label_1402fa8fd:
                            rdi_10 = rbp_9 & 4
                            cond:65_1 = rdi_10 == 0
                            cond:66_1 = rdi_10 != 0
                            cond:73_1 = rdi_10 == 0
                            cond:74_1 = rdi_10 != 0
                            
                            if (rdi_10 != 0)
                            label_1402fa903:
                                zmm3 = _mm_insert_ps(zmm3, zmm11, 0x20)
                                
                                if (cond:66_1)
                                    goto label_1402fa8b9
                                
                                goto label_1402fa90c
                        else
                        label_1402fa8a9:
                            var_358 = _mm_insert_ps(var_358, zmm1, 0x10)
                            rdi_10 = rbp_9 & 4
                            cond:65_1 = rdi_10 == 0
                            cond:66_1 = rdi_10 != 0
                            cond:73_1 = rdi_10 == 0
                            cond:74_1 = rdi_10 != 0
                            
                            if (rdi_10 != 0)
                                goto label_1402fa903
                        
                        if (not(cond:65_1))
                        label_1402fa8b9:
                            zmm0 = _mm_insert_ps(zmm0, zmm9, 0x20)
                            zmm9 = var_318_1
                            
                            if (cond:74_1)
                                goto label_1402fa922
                            
                            goto label_1402fa8cb
                        
                    label_1402fa90c:
                        zmm9 = var_318_1
                        bool cond:85_1
                        bool cond:92_1
                        bool cond:93_1
                        
                        if (cond:73_1)
                        label_1402fa8cb:
                            zmm2 = var_358
                            rbp_16 = rbp_9 & 8
                            cond:85_1 = rbp_16 == 0
                            cond:92_1 = rbp_16 == 0
                            cond:93_1 = rbp_16 != 0
                            
                            if (rbp_16 != 0)
                                zmm3 = _mm_insert_ps(zmm3, zmm13, 0x30)
                        else
                        label_1402fa922:
                            zmm2 = _mm_insert_ps(var_358, zmm2, 0x20)
                            rbp_16 = rbp_9 & 8
                            cond:85_1 = rbp_16 == 0
                            cond:92_1 = rbp_16 == 0
                            cond:93_1 = rbp_16 != 0
                            
                            if (rbp_16 != 0)
                                zmm3 = _mm_insert_ps(zmm3, zmm13, 0x30)
                        
                        if (not(cond:85_1))
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, var_2f8.d, 0x30)
                            
                            if (cond:93_1)
                                zmm2 = _mm_insert_ps(zmm2, arg7, 0x30)
                        else if (not(cond:92_1))
                            zmm2 = _mm_insert_ps(zmm2, arg7, 0x30)
                        
                        zmm8 = zx.o(0)
                        arg7 = var_348_2
                    case 2
                        arg6 = _mm_add_epi64(arg6, zmm8)
                        int32_t temp0_341[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(zmm11, var_2f8.o), zmm9)
                        arg6 = _mm_add_epi64(arg6, zmm0)
                        zmm2 = _mm_shuffle_epi32(zmm7, 0x50)
                        arg5 = _mm_blendv_ps(zx.o(0), arg6, zmm2)
                        zmm1 = _mm_shuffle_epi32(zmm7, 0xfa)
                        zmm3 = _mm_blendv_ps(zx.o(0), temp0_341, zmm1)
                        int64_t rbp_11 = arg5[0].q
                        void* rbx_33 = r13 + rbp_11
                        int64_t rdi_6 = _mm_extract_epi64(arg5, 1)
                        void* rax_84 = r13 + rdi_6
                        int64_t rsi_12 = zmm3.q
                        arg5 = data_1434426b0
                        float temp0_347[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                        arg5 = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        arg7 = zx.o(*(temp0_347[0].q + rbx_33))
                        int16_t* rcx_11 = _mm_extract_epi64(temp0_347, 1)
                        zmm0 = zmm2
                        zmm2 = data_1434426c0
                        float temp0_349[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm0)
                        arg7 = __pinsrw_xmmdq_memw_immb(arg7, *(rcx_11 + rax_84), 1)
                        void* rdx_3 = r13 + rsi_12
                        int32_t temp0_351[0x4] = __pinsrw_xmmdq_memw_immb(
                            zx.o(*(temp0_349[0].q + rbx_33)), 
                            *(_mm_extract_epi64(temp0_349, 1) + rax_84), 1)
                        int64_t rax_85 = _mm_extract_epi64(zmm3, 1)
                        int16_t* rcx_15 = arg5[0].q
                        zmm2 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        arg7 = __pinsrw_xmmdq_memw_immb(arg7, *(rcx_15 + rdx_3), 2)
                        int32_t temp0_354[0x4] =
                            __pinsrw_xmmdq_memw_immb(temp0_351, *(zmm2[0].q + rdx_3), 2)
                        void* rcx_17 = r13 + rax_85
                        arg7 = __pinsrw_xmmdq_memw_immb(arg7, 
                            *(_mm_extract_epi64(arg5, 1) + rcx_17), 3)
                        int32_t temp0_356[0x4] = __pinsrw_xmmdq_memw_immb(temp0_354, 
                            *(_mm_extract_epi64(zmm2, 1) + rcx_17), 3)
                        zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(r13 + rbp_11)), *(r13 + rdi_6), 1), 
                                *(r13 + rsi_12), 2), 
                            *(r13 + rax_85), 3).q)
                        zmm1 = data_1434424d0
                        zmm3 = zmm1
                        zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
                        zmm0 = data_1434426d0
                        zmm2 = _mm_div_ps(zmm2, zmm0)
                        zmm1 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg7.q), zmm1)), zmm0)
                        zmm0 =
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(temp0_356[0].q), zmm3))
                        zmm2 = __mulps_xmmps_memps(zmm2, data_143442710)
                        uint64_t rbp_12 = zx.q(temp0_321)
                        rsi_10 = rbp_12 & 1
                        
                        if (rsi_10 == 0)
                            rdx_2 = var_308
                            zmm3 = var_2e8
                        else
                            zmm3 = _mm_blend_ps(var_2e8, zmm2, 1)
                            rdx_2 = var_308
                        
                        arg7 = var_348_2
                        arg8 = var_398_2
                        arg6 = var_2d8_1
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426d0)
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143442710)
                        r11 = arg3
                        zmm8 = zx.o(0)
                        zmm9 = var_318_1
                        
                        if (rsi_10 != 0)
                            var_368 = _mm_blend_ps(var_368, zmm1, 1)
                            arg4 = var_39c_1
                            zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                            
                            if (rsi_10 != 0)
                                goto label_1402fabee
                            
                            goto label_1402fab4f
                        
                        arg4 = var_39c_1
                        zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                        bool cond:44_1
                        bool cond:45_1
                        bool cond:53_1
                        bool cond:54_1
                        
                        if (rsi_10 != 0)
                        label_1402fabee:
                            var_358 = _mm_blend_ps(var_358, zmm0, 1)
                            rcx_26 = rbp_12 & 2
                            cond:44_1 = rcx_26 == 0
                            cond:45_1 = rcx_26 != 0
                            cond:53_1 = rcx_26 == 0
                            cond:54_1 = rcx_26 != 0
                            
                            if (rcx_26 != 0)
                                goto label_1402fab59
                            
                            goto label_1402fac00
                        
                    label_1402fab4f:
                        rcx_26 = rbp_12 & 2
                        cond:44_1 = rcx_26 == 0
                        cond:45_1 = rcx_26 != 0
                        cond:53_1 = rcx_26 == 0
                        cond:54_1 = rcx_26 != 0
                        
                        if (rcx_26 == 0)
                        label_1402fac00:
                            
                            if (not(cond:44_1))
                            label_1402fac11:
                                var_368 = _mm_blend_ps(var_368, zmm1, 2)
                                
                                if (cond:54_1)
                                    goto label_1402fab76
                                
                                goto label_1402fac1f
                        else
                        label_1402fab59:
                            zmm3 = _mm_blend_ps(zmm3, zmm2, 2)
                            
                            if (cond:45_1)
                                goto label_1402fac11
                        
                        bool cond:67_1
                        bool cond:68_1
                        bool cond:75_1
                        bool cond:76_1
                        
                        if (not(cond:53_1))
                        label_1402fab76:
                            var_358 = _mm_blend_ps(var_358, zmm0, 2)
                            rdi_10 = rbp_12 & 4
                            cond:67_1 = rdi_10 == 0
                            cond:68_1 = rdi_10 != 0
                            cond:75_1 = rdi_10 == 0
                            cond:76_1 = rdi_10 != 0
                            
                            if (rdi_10 != 0)
                                goto label_1402fac29
                            
                            goto label_1402fab88
                        
                    label_1402fac1f:
                        rdi_10 = rbp_12 & 4
                        cond:67_1 = rdi_10 == 0
                        cond:68_1 = rdi_10 != 0
                        cond:75_1 = rdi_10 == 0
                        cond:76_1 = rdi_10 != 0
                        
                        if (rdi_10 == 0)
                        label_1402fab88:
                            
                            if (not(cond:67_1))
                            label_1402fab99:
                                var_368 = _mm_blend_ps(var_368, zmm1, 4)
                                
                                if (cond:76_1)
                                    goto label_1402fac46
                                
                                goto label_1402faba4
                        else
                        label_1402fac29:
                            zmm3 = _mm_blend_ps(zmm3, zmm2, 4)
                            
                            if (cond:68_1)
                                goto label_1402fab99
                        
                        bool cond:86_1
                        bool cond:94_1
                        bool cond:95_1
                        bool cond:87_1
                        
                        if (cond:75_1)
                        label_1402faba4:
                            rbp_16 = rbp_12 & 8
                            cond:86_1 = rbp_16 == 0
                            cond:87_1 = rbp_16 != 0
                            cond:94_1 = rbp_16 == 0
                            cond:95_1 = rbp_16 != 0
                            
                            if (rbp_16 != 0)
                            label_1402fabae:
                                zmm3 = _mm_blend_ps(zmm3, zmm2, 8)
                                
                                if (cond:87_1)
                                    goto label_1402fac66
                                
                                goto label_1402fabba
                        else
                        label_1402fac46:
                            var_358 = _mm_blend_ps(var_358, zmm0, 4)
                            rbp_16 = rbp_12 & 8
                            cond:86_1 = rbp_16 == 0
                            cond:87_1 = rbp_16 != 0
                            cond:94_1 = rbp_16 == 0
                            cond:95_1 = rbp_16 != 0
                            
                            if (rbp_16 != 0)
                                goto label_1402fabae
                        
                        if (cond:86_1)
                        label_1402fabba:
                            zmm2 = var_358
                            
                            if (not(cond:94_1))
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                        else
                        label_1402fac66:
                            var_368 = _mm_blend_ps(var_368, zmm1, 8)
                            zmm2 = var_358
                            
                            if (cond:95_1)
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                        
                        zmm0 = var_368
                    case 3
                        zmm2 = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(_mm_add_epi64(arg6, zmm8), zmm0), 
                            _mm_shuffle_epi32(zmm7, 0x50))
                        zmm0 = arg7 & not.o(var_238_1)
                        int64_t rax_87 = sx.q(zmm0.d)
                        void* rbx_34 = r13 + rax_87
                        zmm3 = *(r13 + rax_87)
                        int64_t rdi_7 = sx.q(_mm_extract_epi32(zmm0, 1))
                        void* rax_89 = r13 + rdi_7
                        int64_t rsi_14 = sx.q(_mm_extract_epi32(zmm0, 2))
                        void* rbp_14 = r13 + rsi_14
                        int64_t rdx_7 = sx.q(_mm_extract_epi32(zmm0, 3))
                        zmm3 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm3, *(r13 + rdi_7), 0x10), 
                                *(r13 + rsi_14), 0x20), 
                            *(r13 + rdx_7), 0x30)
                        zmm0 = arg7 & not.o(data_142fc95e0)
                        var_238_1.q = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rcx_20 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t r12_1 = zx.q(zmm0.d)
                        int32_t* r14_2 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm0 = arg7 & not.o(data_143442650)
                        uint64_t r10_1 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t r13_1 = zx.q(_mm_extract_epi32(zmm0, 2))
                        int32_t* r9_1 = zx.q(_mm_extract_epi32(zmm0, 3))
                        arg6 = arg7 & not.o(data_142fc95f0)
                        uint64_t rdi_8 = zx.q(_mm_extract_epi32(arg6, 1))
                        uint64_t r11_1 = zx.q(_mm_extract_epi32(arg6, 2))
                        int32_t temp0_391[0x4] = __paddq_xmmdq_memdq(zmm11, var_2f8.o)
                        arg5 = *(zx.q(zmm0.d) + rbx_34)
                        int32_t* r15_1 = zx.q(_mm_extract_epi32(arg6, 3))
                        r13 = arg9
                        void* r10_2 = r13 + rdx_7
                        arg5 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg5, *(r10_1 + rax_89), 0x10), 
                                *(r13_1 + rbp_14), 0x20), 
                            *(r9_1 + r10_2), 0x30)
                        zmm7 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_391, zmm9), 
                            _mm_shuffle_epi32(zmm7, 0xfa))
                        zmm9 = *(r12_1 + rbx_34)
                        zmm1 = arg7 & not.o(data_143442660)
                        uint64_t rcx_22 = zx.q(_mm_extract_epi32(zmm1, 1))
                        uint64_t rdx_8 = zx.q(_mm_extract_epi32(zmm1, 2))
                        int32_t* r9_2 = zx.q(_mm_extract_epi32(zmm1, 3))
                        zmm0 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(zx.q(zmm1.d) + rbx_34), 
                                    *(rcx_22 + rax_89), 0x10), 
                                *(rdx_8 + rbp_14), 0x20), 
                            *(r9_2 + r10_2), 0x30)
                        uint64_t rcx_23 = zx.q(arg6[0])
                        arg7 &= not.o(data_143442670)
                        uint64_t r9_3 = zx.q(_mm_extract_epi32(arg7, 1))
                        zmm8 = *(rcx_23 + rbx_34)
                        int32_t* rcx_24 = zx.q(_mm_extract_epi32(arg7, 2))
                        int64_t rsi_16 = zmm2[0].q
                        int64_t rdx_9 = _mm_extract_epi64(zmm2, 1)
                        int64_t rsi_17 = zmm7[0].q
                        zmm1 = __pinsrd_xmmdq_memd_immb(zx.o(*(r13 + rsi_16)), *(r13 + rdx_9), 1)
                        int64_t rdx_10 = _mm_extract_epi64(zmm7, 1)
                        zmm1 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zmm1, *(r13 + rsi_17), 2), *(r13 + rdx_10), 3)
                        int32_t (* rdx_11)[0x4] = zx.q(arg7.d)
                        int32_t* rsi_18 = zx.q(_mm_extract_epi32(arg7, 3))
                        arg6 = zmm1
                        zmm2 = zmm1
                        zmm1 = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm1 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                arg5), 
                            zmm3)
                        zmm2 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                        zmm3 = data_143442440
                        arg5 = zmm3
                        zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm3))
                        zmm2 = data_143442690
                        arg7 = zmm2
                        zmm3 = _mm_mul_ps(_mm_div_ps(zmm3, zmm2), zmm0)
                        zmm2 = *(rdx_11 + rbx_34)
                        zmm9 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm9, *(var_238_1.q + rax_89), 0x10), 
                                *(rcx_20 + rbp_14), 0x20), 
                            *(r14_2 + r10_2), 0x30)
                        float temp0_426[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm8, *(rdi_8 + rax_89), 0x10), 
                                *(r11_1 + rbp_14), 0x20), 
                            *(r15_1 + r10_2), 0x30)
                        zmm2 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(r9_3 + rax_89), 0x10), 
                                *(rcx_24 + rbp_14), 0x20), 
                            *(rsi_18 + r10_2), 0x30)
                        float temp0_433[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(arg6, 0x15), arg5)), arg7)
                        uint64_t rbp_15 = zx.q(temp0_321)
                        rsi_10 = rbp_15 & 1
                        
                        if (rsi_10 != 0)
                            var_2e8 = _mm_blend_ps(var_2e8, zmm1, 1)
                        
                        rdx_2 = var_308
                        zmm0 = var_368
                        arg7 = var_348_2
                        arg8 = var_398_2
                        zmm2 = _mm_mul_ps(zmm2, temp0_433)
                        zmm9 = _mm_add_ps(zmm9, zmm3)
                        r12 = var_218_1
                        r15 = var_268
                        r10 = arg10
                        r11 = arg3
                        arg4 = var_39c_1
                        
                        if (rsi_10 != 0)
                            zmm0 = _mm_blend_ps(zmm0, zmm9, 1)
                        
                        zmm3 = var_2e8
                        arg6 = var_2d8_1
                        float temp0_438[0x4] = _mm_add_ps(temp0_426, zmm2)
                        bool cond:46_1
                        bool cond:55_1
                        bool cond:56_1
                        
                        if (rsi_10 == 0)
                            zmm2 = var_358
                            rcx_26 = rbp_15 & 2
                            cond:46_1 = rcx_26 == 0
                            cond:55_1 = rcx_26 == 0
                            cond:56_1 = rcx_26 != 0
                            
                            if (rcx_26 != 0)
                                zmm3 = _mm_blend_ps(zmm3, zmm1, 2)
                        else
                            zmm2 = _mm_blend_ps(var_358, temp0_438, 1)
                            rcx_26 = rbp_15 & 2
                            cond:46_1 = rcx_26 == 0
                            cond:55_1 = rcx_26 == 0
                            cond:56_1 = rcx_26 != 0
                            
                            if (rcx_26 != 0)
                                zmm3 = _mm_blend_ps(zmm3, zmm1, 2)
                        
                        if (not(cond:46_1))
                            zmm0 = _mm_blend_ps(zmm0, zmm9, 2)
                            
                            if (cond:56_1)
                                goto label_1402facd2
                            
                            goto label_1402fac9d
                        
                        bool cond:69_1
                        bool cond:70_1
                        bool cond:77_1
                        bool cond:78_1
                        
                        if (not(cond:55_1))
                        label_1402facd2:
                            zmm2 = _mm_blend_ps(zmm2, temp0_438, 2)
                            rdi_10 = rbp_15 & 4
                            cond:69_1 = rdi_10 == 0
                            cond:70_1 = rdi_10 != 0
                            cond:77_1 = rdi_10 == 0
                            cond:78_1 = rdi_10 != 0
                            
                            if (rdi_10 != 0)
                                goto label_1402faca3
                            
                            goto label_1402face2
                        
                    label_1402fac9d:
                        rdi_10 = rbp_15 & 4
                        cond:69_1 = rdi_10 == 0
                        cond:70_1 = rdi_10 != 0
                        cond:77_1 = rdi_10 == 0
                        cond:78_1 = rdi_10 != 0
                        
                        if (rdi_10 == 0)
                        label_1402face2:
                            
                            if (not(cond:69_1))
                            label_1402face4:
                                zmm0 = _mm_blend_ps(zmm0, zmm9, 4)
                                
                                if (cond:78_1)
                                    goto label_1402facad
                                
                                goto label_1402faced
                        else
                        label_1402faca3:
                            zmm3 = _mm_blend_ps(zmm3, zmm1, 4)
                            
                            if (cond:70_1)
                                goto label_1402face4
                        
                        bool cond:88_1
                        bool cond:96_1
                        bool cond:97_1
                        bool cond:89_1
                        
                        if (cond:77_1)
                        label_1402faced:
                            rbp_16 = rbp_15 & 8
                            cond:88_1 = rbp_16 == 0
                            cond:89_1 = rbp_16 != 0
                            cond:96_1 = rbp_16 == 0
                            cond:97_1 = rbp_16 != 0
                            
                            if (rbp_16 != 0)
                            label_1402facf3:
                                zmm3 = _mm_blend_ps(zmm3, zmm1, 8)
                                
                                if (cond:89_1)
                                    goto label_1402facbc
                                
                                goto label_1402facfb
                        else
                        label_1402facad:
                            zmm2 = _mm_blend_ps(zmm2, temp0_438, 4)
                            rbp_16 = rbp_15 & 8
                            cond:88_1 = rbp_16 == 0
                            cond:89_1 = rbp_16 != 0
                            cond:96_1 = rbp_16 == 0
                            cond:97_1 = rbp_16 != 0
                            
                            if (rbp_16 != 0)
                                goto label_1402facf3
                        
                        if (cond:88_1)
                        label_1402facfb:
                            zmm9 = var_318_1
                            
                            if (not(cond:96_1))
                                zmm2 = _mm_blend_ps(zmm2, temp0_438, 8)
                        else
                        label_1402facbc:
                            zmm0 = _mm_blend_ps(zmm0, zmm9, 8)
                            zmm9 = var_318_1
                            
                            if (cond:97_1)
                                zmm2 = _mm_blend_ps(zmm2, temp0_438, 8)
                        
                        zmm8 = zx.o(0)
                    case 4, 5, 6
                        goto label_1402fa2e0
            
            var_2e8 = zmm3
            arg5 = _mm_sub_ps(zmm3, zmm15)
            var_368 = zmm0
            zmm3 = _mm_sub_ps(zmm0, zmm12)
            arg5 = _mm_mul_ps(arg5, arg6)
            zmm1 = zmm15
            
            if (rsi_10 != 0)
                zmm1.d = zmm15.d f+ arg5[0]
            
            var_358 = zmm2
            zmm0 = _mm_sub_ps(zmm2, zmm14)
            zmm3 = _mm_mul_ps(zmm3, arg6)
            zmm2 = zmm12
            
            if (rsi_10 != 0)
                zmm2 = zmm12
                zmm2[0] = zmm2[0] f+ zmm3.d
                arg6 = _mm_mul_ps(arg6, zmm0)
                zmm0 = zmm14
                
                if (rsi_10 != 0)
                    goto label_1402faddd
                
                goto label_1402fad75
            
            arg6 = _mm_mul_ps(arg6, zmm0)
            zmm0 = zmm14
            bool cond:105_1
            bool cond:106_1
            bool cond:107_1
            bool cond:108_1
            
            if (rsi_10 != 0)
            label_1402faddd:
                zmm0.d = zmm14.d f+ arg6[0]
                zmm15 = _mm_add_ps(zmm15, arg5)
                cond:105_1 = rcx_26 == 0
                cond:106_1 = rcx_26 != 0
                cond:107_1 = rcx_26 == 0
                cond:108_1 = rcx_26 != 0
                
                if (rcx_26 != 0)
                    goto label_1402fad7e
                
                goto label_1402fadea
            
        label_1402fad75:
            zmm15 = _mm_add_ps(zmm15, arg5)
            cond:105_1 = rcx_26 == 0
            cond:106_1 = rcx_26 != 0
            cond:107_1 = rcx_26 == 0
            cond:108_1 = rcx_26 != 0
            
            if (rcx_26 != 0)
            label_1402fad7e:
                zmm1 = _mm_blend_ps(zmm1, zmm15, 2)
                zmm12 = _mm_add_ps(zmm12, zmm3)
                
                if (cond:106_1)
                    goto label_1402fadf0
                
                goto label_1402fad8b
            
        label_1402fadea:
            zmm12 = _mm_add_ps(zmm12, zmm3)
            
            if (not(cond:105_1))
            label_1402fadf0:
                zmm2 = _mm_blend_ps(zmm2, zmm12, 2)
                zmm14 = _mm_add_ps(zmm14, arg6)
                
                if (cond:108_1)
                    goto label_1402fad91
                
                goto label_1402fadfd
            
        label_1402fad8b:
            zmm14 = _mm_add_ps(zmm14, arg6)
            bool cond:109_1
            bool cond:110_1
            bool cond:111_1
            bool cond:112_1
            
            if (not(cond:107_1))
            label_1402fad91:
                zmm0 = _mm_blend_ps(zmm0, zmm14, 2)
                zmm7 = var_288_1
                cond:109_1 = rdi_10 == 0
                cond:110_1 = rdi_10 != 0
                cond:111_1 = rdi_10 == 0
                cond:112_1 = rdi_10 != 0
                
                if (rdi_10 != 0)
                    goto label_1402fae0b
                
                goto label_1402fada6
            
        label_1402fadfd:
            zmm7 = var_288_1
            cond:109_1 = rdi_10 == 0
            cond:110_1 = rdi_10 != 0
            cond:111_1 = rdi_10 == 0
            cond:112_1 = rdi_10 != 0
            
            if (rdi_10 == 0)
            label_1402fada6:
                
                if (not(cond:109_1))
                label_1402fada8:
                    zmm2 = _mm_blend_ps(zmm2, zmm12, 4)
                    
                    if (cond:112_1)
                        goto label_1402fae16
                    
                    goto label_1402fadb1
            else
            label_1402fae0b:
                zmm1 = _mm_blend_ps(zmm1, zmm15, 4)
                
                if (cond:110_1)
                    goto label_1402fada8
            
            bool cond:113_1
            bool cond:114_1
            bool cond:115_1
            bool cond:116_1
            
            if (not(cond:111_1))
            label_1402fae16:
                zmm0 = _mm_blend_ps(zmm0, zmm14, 4)
                cond:113_1 = rbp_16 == 0
                cond:114_1 = rbp_16 != 0
                cond:115_1 = rbp_16 != 0
                cond:116_1 = rbp_16 == 0
                
                if (rbp_16 != 0)
                    goto label_1402fadb6
                
                goto label_1402fae22
            
        label_1402fadb1:
            cond:113_1 = rbp_16 == 0
            cond:114_1 = rbp_16 != 0
            cond:115_1 = rbp_16 != 0
            cond:116_1 = rbp_16 == 0
            
            if (rbp_16 != 0)
            label_1402fadb6:
                zmm15 = _mm_blend_ps(zmm15, zmm1, 7)
                
                if (cond:114_1)
                    goto label_1402fae28
                
                goto label_1402fadbf
            
        label_1402fae22:
            zmm15 = zmm1
            
            if (cond:113_1)
            label_1402fadbf:
                zmm12 = zmm2
                
                if (cond:115_1)
                    zmm0 = _mm_blend_ps(zmm0, zmm14, 8)
            else
            label_1402fae28:
                zmm12 = _mm_blend_ps(zmm12, zmm2, 7)
                
                if (not(cond:116_1))
                    zmm0 = _mm_blend_ps(zmm0, zmm14, 8)
            
            zmm14 = zmm0
        
        zmm2 = _mm_unpacklo_ps(zmm14, zmm8[0].q)
        zmm0 = _mm_unpackhi_ps(zmm14, zmm8)
        zmm3 = _mm_unpacklo_ps(zmm15, zmm12[0].q)
        zmm1 = _mm_unpackhi_ps(zmm15, zmm12)
        arg5 = _mm_insert_ps(zmm3, zmm14, 0x28)
        int64_t rax_105 = sx.q(zmm7[0]) * 0x30
        *(r12 + rax_105 + 0x20) = __extractps_memd_xmmps_immb(zmm15, 0)
        int32_t var_128_1[0x4] = arg5
        *(r12 + rax_105 + 0x24) = __extractps_memd_xmmps_immb(zmm12, 0)
        *(r12 + rax_105 + 0x28) = __extractps_memd_xmmps_immb(zmm14, 0)
        *(r12 + rax_105 + 0x2c) = 0
        int64_t rax_109 = sx.q(_mm_extract_epi32(zmm7, 2)) * 0x30
        *(r12 + rax_109 + 0x20) = __extractps_memd_xmmps_immb(zmm15, 1)
        zmm3 = _mm_unpackhi_pd(zmm3, zmm2[0].q)
        *(r12 + rax_109 + 0x24) = __extractps_memd_xmmps_immb(zmm12, 1)
        uint128_t var_118_1 = zmm3
        *(r12 + rax_109 + 0x28) = __extractps_memd_xmmps_immb(zmm14, 1)
        *(r12 + rax_109 + 0x2c) = 0
        int64_t rax_113 = sx.q(zmm9.d) * 0x30
        *(r12 + rax_113 + 0x20) = __extractps_memd_xmmps_immb(zmm15, 2)
        zmm2 = _mm_insert_ps(zmm1, zmm14, 0xa8)
        *(r12 + rax_113 + 0x24) = __extractps_memd_xmmps_immb(zmm12, 2)
        int32_t var_108_1[0x4] = zmm2
        *(r12 + rax_113 + 0x28) = __extractps_memd_xmmps_immb(zmm14, 2)
        zmm1 = _mm_unpackhi_pd(zmm1, zmm0.q)
        *(r12 + rax_113 + 0x2c) = 0
        *(r12 + sx.q(_mm_extract_epi32(zmm9, 2)) * 0x30 + 0x20) = zmm1
        rdx_1 = zx.q(rdx_2 + 4)
        arg5 = _mm_cmpeq_epi32(arg5, arg5)
    while (rdx_1.d s< i_5)
    
    i_4 = zx.q(arg14)
    
    if (rdx_1.d s< i_4.d)
        goto label_1402faf98
return i_4
