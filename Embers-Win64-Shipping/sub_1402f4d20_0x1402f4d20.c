// 函数: sub_1402f4d20
// 地址: 0x1402f4d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm15
uint128_t var_58 = zmm15
float var_68[0x4] = arg6
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
int32_t zmm11[0x4]
int32_t var_98[0x4] = zmm11
uint32_t var_a8[0x4] = arg5
float zmm9[0x4]
float var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
uint32_t zmm7[0x4]
uint32_t var_d8[0x4] = zmm7
uint128_t zmm6
uint128_t var_e8 = zmm6
int64_t r12 = arg1
int64_t r15 = sx.q(arg10)
uint64_t r13
r13.b = arg9
uint128_t zmm3 = arg8
int32_t r9 = arg7
int32_t rcx_1 = *(&data_143442f60 + (r15 << 2)) * *(&data_143442f40 + (r15 << 2))
int32_t i_6 = ((arg11 s>> 0x1f u>> 0x1e) + arg11) & 0xfffffffc
int64_t var_2e0 = r15
uint64_t i_5
float var_378[0x4]
uint32_t var_358[0x4]
uint128_t var_348
uint128_t var_328
uint64_t var_308
uint64_t rdx_1
uint128_t zmm0
uint128_t zmm1
int32_t zmm2[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (i_6 s<= 0)
    rdx_1 = 0
    i_5 = zx.q(arg11)
    
    if (0 s< i_5.d)
    label_1402f6ee3:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_1.d), 0), data_142e11d00)
        zmm13 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i_5.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm13
        zmm4 = zx.o(0)
        int64_t r9_2 = sx.q(zmm0.d)
        int32_t* rax_119 = arg2
        int64_t rdx_17 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rbx_22 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rsi_29 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm15 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(rax_119 + r9_2)), *(rax_119 + rdx_17), 1), 
                *(rax_119 + rbx_22), 2), 
            *(rax_119 + rsi_29), 3)
        zmm0 = data_142fc95e0 & zmm13
        int32_t* r14_3 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* rax_120 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* r9_3 = zx.q(_mm_extract_epi32(zmm0, 3))
        uint64_t* r15_3 = zx.q(zmm0.d)
        uint32_t temp0_560[0x4] = _mm_slli_epi32(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(r15_3 + rax_119 + r9_2)), 
                        *(r14_3 + rax_119 + rdx_17), 1), 
                    *(rax_120 + rax_119 + rbx_22), 2), 
                *(r9_3 + rax_119 + rsi_29), 3), 
            4)
        zmm0 = temp0_560 & zmm13
        int64_t rax_122 = sx.q(zmm0.d)
        int32_t* rbp_19 = sx.q(_mm_extract_epi32(zmm0, 1))
        int16_t* rbx_23 = arg3 + rbp_19
        void* rdi_23 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rax_123 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm1 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_122)), *(arg3 + rbp_19), 1), 
                *(arg3 + rdi_23), 2), 
            *(arg3 + rax_123), 3)
        zmm12 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(r15_3 + arg3 + rax_122)), *(r14_3 + rbx_23), 1), 
                *(rax_120 + arg3 + rdi_23), 2), 
            *(r9_3 + arg3 + rax_123), 3)
        zmm7 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
        uint128_t var_2a8_2 = zmm1
        zmm11 = _mm_cvtepi32_epi64(zmm1.q)
        zmm8 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
        arg6 = _mm_cmpeq_epi32(arg6, arg6)
        zmm1 = data_1434422d0
        zmm6 = arg8
        int32_t rax_125
        rax_125.b = 0f f>= zmm6.d
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_125)) ^ arg6, 0)
        zmm1 = _mm_cmpgt_epi32(zmm1, zmm12) & not.o(zmm0)
        zmm3 = zmm1 & zmm13
        uint32_t temp0_577 = _mm_movemask_ps(zmm3)
        uint32_t var_338_2[0x4] = zmm7
        int32_t var_318_2[0x4] = zmm11
        int32_t var_3a8_2[0x4]
        int32_t rdx_20
        
        if (temp0_577 == 0)
            var_3a8_2 = zx.o(0)
            arg5 = zx.o(0)
            zmm9 = zx.o(0)
            rdx_20 = var_2e0.d
        else
            arg6 = _mm_add_epi32(arg6, zmm12)
            
            if (zmm6.d f>= 1f)
                var_3a8_2 = zx.o(0)
                arg5 = _mm_blendv_ps(zx.o(0), arg6, zmm3)
                zmm9 = arg5
                rdx_20 = var_2e0.d
            else
                var_348 = zmm1
                var_378 = zmm13
                var_358 = zmm8
                zmm1 = _mm_mullo_epi32(zmm12, zmm8)
                zmm2 = _mm_cvtepi32_epi64(zmm1.q)
                zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
                zmm4 = _mm_shuffle_epi32(_mm_add_epi64(3, zx.o(arg4)), 0x44)
                zmm13 = _mm_add_epi64(_mm_add_epi64(zmm4, zmm11), zmm2)
                zmm4 = _mm_add_epi64(_mm_add_epi64(zmm4, zmm7), zmm1)
                zmm0 = data_143442c10
                zmm13 &= zmm0
                float var_3a8_1[0x4] = zmm4 & zmm0
                rbp_19 = zx.q(arg7 - 2)
                zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
                zmm1 = _mm_mul_ps(_mm_cvtepi32_ps(arg6), zmm0)
                zmm0.d = float.s(arg7 - 1)
                zmm0.d = zmm0.d f* zmm6.d
                var_308.o = zmm0
                zmm0 = _mm_min_epi32(zx.o(rbp_19.d), _mm_max_epi32(zx.o(int.d(zmm0.d)), zx.o(0)))
                int32_t temp0_596[0x4] =
                    _mm_min_epi32(_mm_max_epi32(_mm_cvttps_epi32(zmm1), zx.o(0)), arg6)
                rdx_20 = var_2e0.d
                float var_368_1[0x4] = arg6
                
                if (arg7 s< 0x100)
                    zmm2 = _mm_shuffle_epi32(temp0_596, 0x4e)
                    zmm4 = _mm_add_epi64(_mm_cvtepi32_epi64(temp0_596[0].q), zmm13)
                    char rcx_37 = temp0_577.b
                    
                    if ((rcx_37 & 1) == 0)
                        zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                        
                        if ((rcx_37 & 2) != 0)
                            goto label_1402f7ac9
                        
                        goto label_1402f7696
                    
                    zmm1 = zx.o(*zmm4[0].q)
                    zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                    
                    if ((rcx_37 & 2) != 0)
                    label_1402f7ac9:
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm4, 1)), 1)
                        zmm2 = __paddq_xmmdq_memdq(zmm2, var_3a8_1)
                        
                        if ((rcx_37 & 4) == 0)
                            goto label_1402f76a4
                        
                        goto label_1402f7ae5
                    
                label_1402f7696:
                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_3a8_1)
                    
                    if ((rcx_37 & 4) != 0)
                    label_1402f7ae5:
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2[0].q), 2)
                        
                        if ((rcx_37 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                    else
                    label_1402f76a4:
                        
                        if ((rcx_37 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                    
                    zmm1 &= data_142ed6810
                    float temp0_689[0x4] = _mm_shuffle_epi32(zmm0, 0)
                    zmm1 = _mm_cmpgt_epi32(zmm1, temp0_689)
                    zmm5 = zmm1 ^ _mm_cmpeq_epi32(zmm0, zmm0)
                    zmm7 = temp0_596
                    
                    if (_mm_movemask_ps(zmm1 & not.o(zmm3)) != 0)
                        zmm7 = _mm_blendv_ps(temp0_596, var_368_1, zmm5)
                        zmm6 = _mm_cmpeq_epi32(zmm6, zmm6)
                        zmm0 = _mm_sub_epi32(temp0_596, zmm6)
                        zmm1 &= not.o(_mm_cmpgt_epi32(zmm0, var_368_1) ^ zmm6)
                        arg5 = zmm3 & zmm1
                        uint32_t i = _mm_movemask_ps(arg5)
                        
                        if (i != 0)
                            arg6 = temp0_596
                            
                            do
                                zmm9 = zmm0
                                zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                zmm4 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm9[0].q), zmm13)
                                char temp0_706 = _mm_movemask_ps(arg5)
                                
                                if ((temp0_706 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_706 & 2) != 0)
                                        goto label_1402f7760
                                    
                                    goto label_1402f77ba
                                
                                rdi_23 = zx.q(*zmm4[0].q)
                                zmm6 = _mm_insert_epi32(zmm6, rdi_23.d, 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((temp0_706 & 2) != 0)
                                label_1402f7760:
                                    rdi_23 = zx.q(*_mm_extract_epi64(zmm4, 1))
                                    zmm6 = _mm_insert_epi32(zmm6, rdi_23.d, 1)
                                    zmm0 = __paddq_xmmdq_memdq(zmm0, var_3a8_1)
                                    
                                    if ((temp0_706 & 4) == 0)
                                        goto label_1402f77c5
                                    
                                    goto label_1402f7779
                                
                            label_1402f77ba:
                                zmm0 = __paddq_xmmdq_memdq(zmm0, var_3a8_1)
                                
                                if ((temp0_706 & 4) != 0)
                                label_1402f7779:
                                    rdi_23 = zx.q(*zmm0.q)
                                    zmm6 = _mm_insert_epi32(zmm6, rdi_23.d, 2)
                                    
                                    if ((temp0_706 & 8) != 0)
                                        zmm6 = _mm_insert_epi32(zmm6, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402f77c5:
                                    
                                    if ((temp0_706 & 8) != 0)
                                        zmm6 = _mm_insert_epi32(zmm6, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = _mm_cmpgt_epi32(zmm6 & data_142ed6810, temp0_689) & zmm1
                                zmm7 = _mm_blendv_ps(zmm7, arg6, zmm0)
                                zmm2 = zx.o(0)
                                rbp_19 = zx.q(_mm_movemask_ps(zmm0 & zmm3))
                                
                                if (rbp_19.d != i)
                                    zmm2 = zmm0 ^ zmm1
                                
                                zmm0 = __psubd_xmmdq_memdq(zmm9, data_142d3f800)
                                zmm1 = __pcmpgtd_xmmdq_memdq(zmm0, var_368_1) & not.o(zmm2)
                                arg5 = zmm1 & zmm3
                                i = _mm_movemask_ps(arg5)
                                arg6 = zmm9
                            while (i != 0)
                    
                    if (_mm_movemask_ps(zmm5 & not.o(zmm3)) == 0)
                        zmm5 = var_338_2
                        zmm11 = var_318_2
                        zmm4 = zx.o(0)
                        arg6 = var_368_1
                    else
                        zmm5 ^= data_142d3f800
                        zmm1 = zx.o(0)
                        zmm7 = _mm_blendv_ps(zmm7, zmm1, zmm5)
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        zmm11 = _mm_add_epi32(temp0_596, arg5)
                        zmm4 = _mm_cmpgt_epi32(zmm11, zmm1) & zmm5
                        zmm0 = zmm4 & zmm3
                        uint32_t i_1 = _mm_movemask_ps(zmm0)
                        
                        if (i_1 == 0)
                            arg6 = var_368_1
                        else
                            zmm9 = data_142ed6810
                            arg6 = var_368_1
                            
                            do
                                zmm2 = _mm_shuffle_epi32(zmm11, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm11[0].q), zmm13)
                                char temp0_730 = _mm_movemask_ps(zmm0)
                                
                                if ((temp0_730 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                    
                                    if ((temp0_730 & 2) != 0)
                                        goto label_1402f78e0
                                    
                                    goto label_1402f7935
                                
                                rdi_23 = zx.q(*zmm1.q)
                                zmm6 = _mm_insert_epi32(zmm6, rdi_23.d, 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((temp0_730 & 2) != 0)
                                label_1402f78e0:
                                    rdi_23 = zx.q(*_mm_extract_epi64(zmm1, 1))
                                    zmm6 = _mm_insert_epi32(zmm6, rdi_23.d, 1)
                                    zmm0 = _mm_add_epi64(zmm0, var_3a8_1)
                                    
                                    if ((temp0_730 & 4) == 0)
                                        goto label_1402f793f
                                    
                                    goto label_1402f78f8
                                
                            label_1402f7935:
                                zmm0 = _mm_add_epi64(zmm0, var_3a8_1)
                                
                                if ((temp0_730 & 4) != 0)
                                label_1402f78f8:
                                    rdi_23 = zx.q(*zmm0.q)
                                    zmm6 = _mm_insert_epi32(zmm6, rdi_23.d, 2)
                                    
                                    if ((temp0_730 & 8) != 0)
                                        zmm6 = _mm_insert_epi32(zmm6, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402f793f:
                                    
                                    if ((temp0_730 & 8) != 0)
                                        zmm6 = _mm_insert_epi32(zmm6, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = _mm_cmpgt_epi32(zmm6 & zmm9, temp0_689) & not.o(zmm4)
                                zmm7 = _mm_blendv_ps(zmm7, zmm11, zmm0)
                                rbp_19 = zx.q(_mm_movemask_ps(zmm0 & zmm3))
                                zmm2 = zx.o(0)
                                
                                if (rbp_19.d != i_1)
                                    zmm2 = zmm0 ^ zmm4
                                
                                zmm11 = _mm_add_epi32(zmm11, arg5)
                                zmm4 = _mm_cmpgt_epi32(zmm11, zx.o(0)) & zmm2
                                zmm0 = zmm4 & zmm3
                                i_1 = _mm_movemask_ps(zmm0)
                            while (i_1 != 0)
                        
                        zmm5 = var_338_2
                        zmm11 = var_318_2
                        zmm4 = zx.o(0)
                    
                    arg5 = _mm_blendv_ps(zx.o(0), zmm7, zmm3)
                    zmm0 = _mm_shuffle_epi32(arg5, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg5[0].q), zmm13)
                    
                    if ((rcx_37 & 1) == 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rcx_37 & 2) != 0)
                            goto label_1402f7c3d
                        
                        goto label_1402f7b65
                    
                    zmm7 = zx.o(*zmm1.q)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rcx_37 & 2) != 0)
                    label_1402f7c3d:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = __paddq_xmmdq_memdq(zmm0, var_3a8_1)
                        
                        if ((rcx_37 & 4) == 0)
                            goto label_1402f7b73
                        
                        goto label_1402f7c59
                    
                label_1402f7b65:
                    zmm0 = __paddq_xmmdq_memdq(zmm0, var_3a8_1)
                    
                    if ((rcx_37 & 4) != 0)
                    label_1402f7c59:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                        
                        if ((rcx_37 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402f7b73:
                        
                        if ((rcx_37 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    zmm9 = _mm_blendv_ps(zx.o(0), _mm_sub_epi32(arg5, _mm_cmpeq_epi32(zmm0, zmm0)), 
                        zmm3)
                    zmm0 = _mm_cmpgt_epi32(zmm9, arg6) & zmm3
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm9 = _mm_blendv_ps(zmm9, arg6, zmm0)
                    
                    zmm1 = _mm_shuffle_epi32(zmm9, 0x4e)
                    zmm0 = _mm_cvtepi32_epi64(zmm9[0].q)
                    zmm13 = _mm_add_epi64(zmm13, zmm0)
                    
                    if ((rcx_37 & 1) != 0)
                        zmm0 = zx.o(*zmm13[0].q)
                    
                    zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                    
                    if ((rcx_37 & 2) != 0)
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm13, 1)), 1)
                    
                    zmm13 = var_378
                    int32_t temp0_774[0x4] = _mm_add_epi64(var_3a8_1, zmm1)
                    
                    if ((rcx_37 & 4) != 0)
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*temp0_774[0].q), 2)
                        
                        if ((rcx_37 & 8) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(temp0_774, 1)), 3)
                    else if ((rcx_37 & 8) != 0)
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(temp0_774, 1)), 3)
                    
                    zmm8 = var_358
                    zmm7 &= data_142ed6810
                    zmm0 &= data_142ed6810
                else
                    zmm1 = _mm_add_epi32(temp0_596, temp0_596)
                    zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm4 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm13)
                    char rcx_36 = temp0_577.b
                    
                    if ((rcx_36 & 1) == 0)
                        zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                        
                        if ((rcx_36 & 2) != 0)
                            goto label_1402f79db
                        
                        goto label_1402f71d8
                    
                    zmm1 = zx.o(*zmm4[0].q)
                    zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                    
                    if ((rcx_36 & 2) != 0)
                    label_1402f79db:
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm4, 1)), 1)
                        zmm2 = __paddq_xmmdq_memdq(zmm2, var_3a8_1)
                        
                        if ((rcx_36 & 4) == 0)
                            goto label_1402f71e6
                        
                        goto label_1402f79f7
                    
                label_1402f71d8:
                    zmm2 = __paddq_xmmdq_memdq(zmm2, var_3a8_1)
                    
                    if ((rcx_36 & 4) != 0)
                    label_1402f79f7:
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2[0].q), 2)
                        
                        if ((rcx_36 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                    else
                    label_1402f71e6:
                        
                        if ((rcx_36 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                    
                    zmm9 = _mm_blend_epi16(zx.o(0), zmm1, 0x55)
                    zmm8 = _mm_shuffle_epi32(zmm0, 0)
                    zmm9 = _mm_cmpgt_epi32(zmm9, zmm8)
                    uint128_t var_398_1 = zmm9 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                    zmm4 = temp0_596
                    zmm5 = var_3a8_1
                    
                    if (_mm_movemask_ps(zmm9 & not.o(zmm3)) != 0)
                        zmm4 = _mm_blendv_ps(temp0_596, arg6, var_398_1)
                        int32_t temp0_610[0x4] = _mm_cmpeq_epi32(zmm2, zmm2)
                        zmm0 = _mm_sub_epi32(temp0_596, temp0_610)
                        zmm9 &= not.o(_mm_cmpgt_epi32(zmm0, arg6) ^ temp0_610)
                        arg5 = zmm3 & zmm9
                        uint32_t i_2 = _mm_movemask_ps(arg5)
                        
                        if (i_2 != 0)
                            zmm6 = temp0_596
                            zmm5 = var_3a8_1
                            
                            do
                                zmm1 = zmm0
                                int32_t temp0_619[0x4] = _mm_add_epi32(zmm0, zmm0)
                                zmm0 = _mm_shuffle_epi32(temp0_619, 0x4e)
                                arg6 = _mm_add_epi64(_mm_cvtepi32_epi64(temp0_619[0].q), zmm13)
                                char temp0_623 = _mm_movemask_ps(arg5)
                                
                                if ((temp0_623 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_623 & 2) != 0)
                                        goto label_1402f72c0
                                    
                                    goto label_1402f7321
                                
                                rdi_23 = zx.q(*arg6[0].q)
                                zmm7 = _mm_insert_epi32(zmm7, rdi_23.d, 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((temp0_623 & 2) != 0)
                                label_1402f72c0:
                                    rdi_23 = zx.q(*_mm_extract_epi64(arg6, 1))
                                    zmm7 = _mm_insert_epi32(zmm7, rdi_23.d, 1)
                                    arg6 = var_368_1
                                    zmm0 = _mm_add_epi64(zmm0, zmm5)
                                    
                                    if ((temp0_623 & 4) == 0)
                                        goto label_1402f7332
                                    
                                    goto label_1402f72df
                                
                            label_1402f7321:
                                arg6 = var_368_1
                                zmm0 = _mm_add_epi64(zmm0, zmm5)
                                
                                if ((temp0_623 & 4) != 0)
                                label_1402f72df:
                                    rdi_23 = zx.q(*zmm0.q)
                                    zmm7 = _mm_insert_epi32(zmm7, rdi_23.d, 2)
                                    
                                    if ((temp0_623 & 8) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402f7332:
                                    
                                    if ((temp0_623 & 8) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm2 = zx.o(0)
                                zmm0 = _mm_cmpgt_epi32(_mm_blend_epi16(zmm7, zx.o(0), 0xaa), zmm8)
                                    & zmm9
                                zmm4 = _mm_blendv_ps(zmm4, zmm6, zmm0)
                                rbp_19 = zx.q(_mm_movemask_ps(zmm0 & zmm3))
                                
                                if (rbp_19.d != i_2)
                                    zmm2 = zmm0 ^ zmm9
                                
                                zmm0 = __psubd_xmmdq_memdq(zmm1, data_142d3f800)
                                zmm9 = _mm_cmpgt_epi32(zmm0, arg6) & not.o(zmm2)
                                arg5 = zmm9 & zmm3
                                i_2 = _mm_movemask_ps(arg5)
                                zmm6 = zmm1
                            while (i_2 != 0)
                    
                    if (_mm_movemask_ps(_mm_andnot_ps(var_398_1, zmm3)) != 0)
                        zmm0 = var_398_1 ^ data_142d3f800
                        zmm4 = _mm_blendv_ps(zmm4, zx.o(0), zmm0)
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        zmm11 = _mm_add_epi32(temp0_596, arg5)
                        zmm7 = _mm_cmpgt_epi32(zmm11, zx.o(0)) & zmm0
                        zmm0 = zmm7 & zmm3
                        
                        for (uint32_t i_3 = _mm_movemask_ps(zmm0); i_3 != 0; 
                                i_3 = _mm_movemask_ps(zmm0))
                            zmm1 = _mm_add_epi32(zmm11, zmm11)
                            zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                            zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm13)
                            char temp0_650 = _mm_movemask_ps(zmm0)
                            
                            if ((temp0_650 & 1) == 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((temp0_650 & 2) != 0)
                                    goto label_1402f7430
                                
                                goto label_1402f748d
                            
                            rdi_23 = zx.q(*zmm1.q)
                            zmm6 = _mm_insert_epi32(zmm6, rdi_23.d, 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                            
                            if ((temp0_650 & 2) != 0)
                            label_1402f7430:
                                rdi_23 = zx.q(*_mm_extract_epi64(zmm1, 1))
                                zmm6 = _mm_insert_epi32(zmm6, rdi_23.d, 1)
                                zmm0 = _mm_add_epi64(zmm0, zmm5)
                                
                                if ((temp0_650 & 4) == 0)
                                    goto label_1402f7497
                                
                                goto label_1402f7448
                            
                        label_1402f748d:
                            zmm0 = _mm_add_epi64(zmm0, zmm5)
                            
                            if ((temp0_650 & 4) != 0)
                            label_1402f7448:
                                rdi_23 = zx.q(*zmm0.q)
                                zmm6 = _mm_insert_epi32(zmm6, rdi_23.d, 2)
                                
                                if ((temp0_650 & 8) != 0)
                                    zmm6 =
                                        _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            else
                            label_1402f7497:
                                
                                if ((temp0_650 & 8) != 0)
                                    zmm6 =
                                        _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            
                            zmm0 = _mm_cmpgt_epi32(_mm_blend_epi16(zmm6, zx.o(0), 0xaa), zmm8)
                                & not.o(zmm7)
                            zmm4 = _mm_blendv_ps(zmm4, zmm11, zmm0)
                            rbp_19 = zx.q(_mm_movemask_ps(zmm0 & zmm3))
                            zmm2 = zx.o(0)
                            
                            if (rbp_19.d != i_3)
                                zmm2 = zmm0 ^ zmm7
                            
                            zmm11 = _mm_add_epi32(zmm11, arg5)
                            zmm7 = _mm_cmpgt_epi32(zmm11, zx.o(0)) & zmm2
                            zmm0 = zmm7 & zmm3
                    
                    zmm5 = var_338_2
                    zmm11 = var_318_2
                    arg5 = _mm_blendv_ps(zx.o(0), zmm4, zmm3)
                    zmm1 = _mm_add_epi32(arg5, arg5)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm13)
                    
                    if ((rcx_36 & 1) == 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        zmm4 = zx.o(0)
                        
                        if ((rcx_36 & 2) != 0)
                            goto label_1402f7a32
                        
                        goto label_1402f755a
                    
                    zmm7 = zx.o(*zmm1.q)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    zmm4 = zx.o(0)
                    
                    if ((rcx_36 & 2) != 0)
                    label_1402f7a32:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = __paddq_xmmdq_memdq(zmm0, var_3a8_1)
                        
                        if ((rcx_36 & 4) == 0)
                            goto label_1402f7568
                        
                        goto label_1402f7a4e
                    
                label_1402f755a:
                    zmm0 = __paddq_xmmdq_memdq(zmm0, var_3a8_1)
                    
                    if ((rcx_36 & 4) != 0)
                    label_1402f7a4e:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                        
                        if ((rcx_36 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402f7568:
                        
                        if ((rcx_36 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    zmm9 = _mm_blendv_ps(zx.o(0), _mm_sub_epi32(arg5, _mm_cmpeq_epi32(zmm0, zmm0)), 
                        zmm3)
                    zmm0 = _mm_cmpgt_epi32(zmm9, arg6) & zmm3
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm9 = _mm_blendv_ps(zmm9, arg6, zmm0)
                    
                    int32_t temp0_675[0x4] = _mm_add_epi32(zmm9, zmm9)
                    zmm0 = _mm_shuffle_epi32(temp0_675, 0x4e)
                    zmm2 = _mm_cvtepi32_epi64(temp0_675[0].q)
                    zmm13 = _mm_add_epi64(zmm13, zmm2)
                    
                    if ((rcx_36 & 1) != 0)
                        zmm2 = zx.o(*zmm13[0].q)
                    
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rcx_36 & 2) != 0)
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm13, 1)), 1)
                    
                    zmm13 = var_378
                    zmm3 = _mm_add_epi64(var_3a8_1, zmm0)
                    
                    if ((rcx_36 & 4) != 0)
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm3.q), 2)
                        
                        if ((rcx_36 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm3, 1)), 3)
                    else if ((rcx_36 & 8) != 0)
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm3, 1)), 3)
                    
                    zmm8 = var_358
                    zmm7 = _mm_blend_epi16(zmm7, zx.o(0), 0xaa)
                    zmm0 = _mm_blend_epi16(zx.o(0), zmm2, 0x55)
                
                int128_t var_3a8_3 = zx.o(0)
                zmm1 = zx.o(0)
                
                if (r13.b != 1)
                    zmm0 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm0, zmm7), data_142d3f5b0)
                    zmm2 = var_308.o
                    zmm1 = _mm_div_ps(
                        _mm_sub_ps(_mm_shuffle_ps(zmm2, zmm2, 0), _mm_cvtepi32_ps(zmm7)), 
                        _mm_cvtepi32_ps(zmm0))
                
                var_3a8_2 = _mm_blendv_ps(zx.o(0), zmm1, var_348)
                zmm7 = zmm5
        
        int32_t rax_184
        rax_184.b = rdx_20 == 3
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_184)), 0)
        zmm0 &= __pcmpgtd_xmmdq_memdq(zmm12, data_142d3f5b0)
        float temp0_791[0x4] = __blendvps_xmmdq_memdq(zmm4, data_143442700, zmm0)
        zmm2 = _mm_cvtepi32_epi64(temp0_791[0].q)
        zmm5 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_791, 0x4e).q)
        uint64_t r13_1 = zx.q(rdx_20)
        int32_t var_368_2[0x4] = zmm2
        
        if (rdx_20 u> 6)
        label_1402f7f38:
            char temp0_816 = _mm_movemask_ps(zmm13)
            arg6 = zx.o(0)
            
            if ((temp0_816 & 4) != 0)
                arg6 = zx.o(0)
                arg6 = _mm_blend_epi16(arg6, arg6, 0x30)
            
            if ((temp0_816 & 8) != 0)
                arg6 = _mm_blend_epi16(arg6, zx.o(0), 0xc0)
            
            zmm12 = arg6
            zmm3 = arg6
        else
            zmm1 = _mm_mullo_epi32(arg5, zmm8)
            zmm0 = _mm_cvtepi32_epi64(zmm1.q)
            zmm3 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
            
            switch (r13_1)
                case 0, 1
                    var_358 = zmm8
                    int32_t temp0_799[0x4] = _mm_add_epi64(zmm2, zmm11)
                    int32_t* var_2d8_1
                    var_2d8_1.o = zmm5
                    zmm4 = _mm_add_epi64(_mm_add_epi64(zmm5, zmm7), zmm3)
                    int32_t temp0_802[0x4] = _mm_add_epi64(temp0_799, zmm0)
                    zmm1 = _mm_shuffle_epi32(zmm13, 0x50)
                    zmm6 = _mm_blendv_ps(zx.o(0), temp0_802, zmm1)
                    zmm2 = _mm_shuffle_epi32(zmm13, 0xfa)
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                    int64_t rax_186 = _mm_extract_epi64(zmm6, 1)
                    void* rcx_40 = arg4 + rax_186
                    var_308.o = *(arg4 + rax_186)
                    int64_t rbp_32 = zmm7[0].q
                    void* rax_187 = arg4 + rbp_32
                    int64_t rbx_24 = _mm_extract_epi64(zmm7, 1)
                    zmm4 = data_1434426c0
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm4, zmm1)
                    var_348 = *(arg4 + rbp_32)
                    zmm8 = zmm13
                    float temp0_808[0x4] = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                    var_378 = *(arg4 + rbx_24)
                    rbp_19 = zmm6.q + arg4
                    zmm12 = *(zmm7[0].q + rbp_19)
                    zmm5 = *(_mm_extract_epi64(zmm7, 1) + rcx_40)
                    zmm4 = *(temp0_808[0].q + rax_187)
                    rbx_23 = arg4 + rbx_24
                    zmm13 = *(_mm_extract_epi64(temp0_808, 1) + rbx_23)
                    zmm6 = data_1434426e0
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm6, zmm1)
                    zmm3 = _mm_blendv_ps(zx.o(0), zmm6, zmm2)
                    arg6 = *(zmm7[0].q + rbp_19)
                    zmm2 = *(_mm_extract_epi64(zmm7, 1) + rcx_40)
                    rdi_23 = _mm_extract_epi64(zmm3, 1)
                    zmm1 = *(zmm3.q + rax_187)
                    zmm0 = *(rdi_23 + rbx_23)
                    zmm7 = zmm8
                    char temp0_811 = _mm_movemask_ps(zmm8)
                    bool cond:10_1
                    bool cond:11_1
                    bool cond:13_1
                    bool cond:14_1
                    
                    if ((temp0_811 & 1) == 0)
                        char temp2_1 = temp0_811 & 2
                        cond:10_1 = temp2_1 != 0
                        cond:11_1 = temp2_1 == 0
                        cond:13_1 = temp2_1 != 0
                        cond:14_1 = temp2_1 == 0
                        
                        if (temp2_1 == 0)
                            goto label_1402f83aa
                        
                        goto label_1402f7ec7
                    
                    zmm3 = *rbp_19
                    char temp1_1 = temp0_811 & 2
                    cond:10_1 = temp1_1 != 0
                    cond:11_1 = temp1_1 == 0
                    cond:13_1 = temp1_1 != 0
                    cond:14_1 = temp1_1 == 0
                    
                    if (temp1_1 == 0)
                    label_1402f83aa:
                        
                        if (cond:11_1)
                            goto label_1402f7ed8
                        
                        goto label_1402f83b0
                    
                label_1402f7ec7:
                    zmm3 = __insertps_xmmps_memd_immb(zmm3, var_308.d, 0x10)
                    
                    if (not(cond:10_1))
                    label_1402f7ed8:
                        
                        if (cond:14_1)
                            goto label_1402f83bd
                        
                        goto label_1402f7ede
                    
                label_1402f83b0:
                    zmm12 = _mm_insert_ps(zmm12, zmm5, 0x10)
                    bool cond:25_1
                    bool cond:26_1
                    bool cond:32_1
                    bool cond:33_1
                    
                    if (not(cond:13_1))
                    label_1402f83bd:
                        char temp4_1 = temp0_811 & 4
                        cond:25_1 = temp4_1 != 0
                        cond:26_1 = temp4_1 == 0
                        cond:32_1 = temp4_1 != 0
                        cond:33_1 = temp4_1 == 0
                        zmm8 = var_358
                        zmm5 = var_2d8_1.o
                        
                        if (temp4_1 == 0)
                            goto label_1402f7efe
                        
                        goto label_1402f83d6
                    
                label_1402f7ede:
                    arg6 = _mm_insert_ps(arg6, zmm2, 0x10)
                    char temp3_1 = temp0_811 & 4
                    cond:25_1 = temp3_1 != 0
                    cond:26_1 = temp3_1 == 0
                    cond:32_1 = temp3_1 != 0
                    cond:33_1 = temp3_1 == 0
                    zmm8 = var_358
                    zmm5 = var_2d8_1.o
                    
                    if (temp3_1 == 0)
                    label_1402f7efe:
                        
                        if (cond:26_1)
                            goto label_1402f83e4
                        
                        goto label_1402f7f04
                    
                label_1402f83d6:
                    zmm3 = __insertps_xmmps_memd_immb(zmm3, var_348.d, 0x20)
                    
                    if (not(cond:25_1))
                    label_1402f83e4:
                        
                        if (cond:33_1)
                            goto label_1402f7f11
                        
                        goto label_1402f83ea
                    
                label_1402f7f04:
                    zmm12 = _mm_insert_ps(zmm12, zmm4, 0x20)
                    bool cond:53_1
                    bool cond:54_1
                    bool cond:61_1
                    bool cond:62_1
                    
                    if (not(cond:32_1))
                    label_1402f7f11:
                        char temp11_1 = temp0_811 & 8
                        cond:53_1 = temp11_1 != 0
                        cond:54_1 = temp11_1 == 0
                        cond:61_1 = temp11_1 == 0
                        cond:62_1 = temp11_1 != 0
                        
                        if (temp11_1 == 0)
                            goto label_1402f83fa
                        
                        goto label_1402f7f1a
                    
                label_1402f83ea:
                    arg6 = _mm_insert_ps(arg6, zmm1, 0x20)
                    char temp10_1 = temp0_811 & 8
                    cond:53_1 = temp10_1 != 0
                    cond:54_1 = temp10_1 == 0
                    cond:61_1 = temp10_1 == 0
                    cond:62_1 = temp10_1 != 0
                    
                    if (temp10_1 == 0)
                    label_1402f83fa:
                        
                        if (cond:54_1)
                            goto label_1402f7f28
                        
                        goto label_1402f8400
                    
                label_1402f7f1a:
                    zmm3 = __insertps_xmmps_memd_immb(zmm3, var_378[0], 0x30)
                    
                    if (cond:53_1)
                    label_1402f8400:
                        zmm12 = _mm_insert_ps(zmm12, zmm13, 0x30)
                        zmm13 = zmm7
                        
                        if (not(cond:61_1))
                            arg6 = _mm_insert_ps(arg6, zmm0, 0x30)
                    else
                    label_1402f7f28:
                        zmm13 = zmm7
                        
                        if (cond:62_1)
                            arg6 = _mm_insert_ps(arg6, zmm0, 0x30)
                case 2
                    zmm1 = _mm_add_epi64(zmm2, zmm11)
                    zmm4 = _mm_add_epi64(_mm_add_epi64(zmm5, zmm7), zmm3)
                    zmm1 = _mm_add_epi64(zmm1, zmm0)
                    zmm2 = _mm_shuffle_epi32(zmm13, 0x50)
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                    zmm11 = _mm_shuffle_epi32(zmm13, 0xfa)
                    zmm3 = _mm_blendv_ps(zx.o(0), zmm4, zmm11)
                    zmm6 = data_1434426b0
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm6, zmm2)
                    float temp0_828[0x4] = _mm_blendv_ps(zx.o(0), zmm6, zmm11)
                    int64_t rax_189 = zmm7[0].q
                    void* rbx_25 = arg4 + rax_189
                    int64_t rcx_43 = _mm_extract_epi64(zmm7, 1)
                    void* rbp_34 = arg4 + rcx_43
                    void* rdi_42 = zmm1.q
                    int16_t* rsi_31 = _mm_extract_epi64(zmm1, 1)
                    zmm7 = data_1434426c0
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm7, zmm2)
                    int32_t temp0_830[0x4] =
                        __pinsrw_xmmdq_memw_immb(zx.o(*(rdi_42 + rbx_25)), *(rsi_31 + rbp_34), 1)
                    int16_t* rsi_32 = _mm_extract_epi64(zmm1, 1)
                    rdi_23 = zmm3.q
                    zmm1 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm1.q + rbx_25)), *(rsi_32 + rbp_34), 1)
                    int64_t rbp_35 = arg4 + rdi_23
                    rbx_23 = _mm_extract_epi64(zmm3, 1)
                    int16_t* rsi_33 = temp0_828[0].q
                    zmm6 = _mm_blendv_ps(zx.o(0), zmm7, zmm11)
                    int32_t temp0_833[0x4] =
                        __pinsrw_xmmdq_memw_immb(temp0_830, *(rsi_33 + rbp_35), 2)
                    zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(zmm6.q + rbp_35), 2)
                    rbp_19 = arg4 + rbx_23
                    int32_t temp0_835[0x4] = __pinsrw_xmmdq_memw_immb(temp0_833, 
                        *(_mm_extract_epi64(temp0_828, 1) + rbp_19), 3)
                    zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(_mm_extract_epi64(zmm6, 1) + rbp_19), 3)
                    zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_189)), *(arg4 + rcx_43), 1), 
                            *(arg4 + rdi_23), 2), 
                        *(arg4 + rbx_23), 3).q)
                    zmm4 = data_1434424d0
                    zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm4))
                    zmm0 = data_1434426d0
                    zmm3 = _mm_div_ps(zmm3, zmm0)
                    float temp0_847[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(temp0_835[0].q), zmm4)), 
                        zmm0)
                    float temp0_851[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm1.q), zmm4)), zmm0)
                    zmm0 = data_143442710
                    zmm3 = _mm_mul_ps(zmm3, zmm0)
                    zmm12 = _mm_mul_ps(temp0_847, zmm0)
                    arg6 = _mm_mul_ps(temp0_851, zmm0)
                case 3
                    zmm2 = zmm13 & var_2a8_2
                    int64_t rax_192 = sx.q(zmm2[0])
                    void* r12_4 = arg4 + rax_192
                    int32_t temp0_855 = _mm_extract_epi32(zmm2, 1)
                    zmm12 = zmm11
                    zmm11 = *(arg4 + rax_192)
                    int64_t rbp_37 = sx.q(temp0_855)
                    void* rax_193 = arg4 + rbp_37
                    int64_t rdi_46 = sx.q(_mm_extract_epi32(zmm2, 2))
                    void* rsi_37 = arg4 + rdi_46
                    int64_t rbx_28 = sx.q(_mm_extract_epi32(zmm2, 3))
                    zmm11 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm11, *(arg4 + rbp_37), 0x10), 
                            *(arg4 + rdi_46), 0x20), 
                        *(arg4 + rbx_28), 0x30)
                    rdi_23 = arg4 + rbx_28
                    var_358 = zmm8
                    float temp0_862[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r15_3 + r12_4), *(r14_3 + rax_193), 0x10), 
                        *(rax_120 + rsi_37), 0x20)
                    zmm6 = zmm7
                    arg6 = data_142fc95f0 & zmm13
                    r14_3 = zx.q(_mm_extract_epi32(arg6, 1))
                    int32_t* r9_4 = zx.q(_mm_extract_epi32(arg6, 2))
                    int32_t* r8_3 = zx.q(_mm_extract_epi32(arg6, 3))
                    zmm4 = data_143442650 & zmm13
                    zmm7 = *(zx.q(zmm4[0]) + r12_4)
                    uint64_t rbx_30 = zx.q(_mm_extract_epi32(zmm4, 1))
                    int32_t* rbp_38 = zx.q(_mm_extract_epi32(zmm4, 2))
                    uint64_t rcx_44 = zx.q(_mm_extract_epi32(zmm4, 3))
                    zmm7 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm7, *(rbx_30 + rax_193), 0x10), 
                            *(rbp_38 + rsi_37), 0x20), 
                        *(rcx_44 + rdi_23), 0x30)
                    zmm1 = data_143442660 & zmm13
                    zmm4 = *(zx.q(zmm1.d) + r12_4)
                    uint64_t rcx_46 = zx.q(_mm_extract_epi32(zmm1, 1))
                    int32_t* rbx_31 = zx.q(_mm_extract_epi32(zmm1, 2))
                    uint64_t rbp_39 = zx.q(_mm_extract_epi32(zmm1, 3))
                    float temp0_877[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm4, *(rcx_46 + rax_193), 0x10), 
                            *(rbx_31 + rsi_37), 0x20), 
                        *(rbp_39 + rdi_23), 0x30)
                    zmm1 = _mm_add_epi64(var_368_2, zmm12)
                    int32_t temp0_880[0x4] = _mm_add_epi64(_mm_add_epi64(zmm5, zmm6), zmm3)
                    zmm3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), 
                        _mm_shuffle_epi32(zmm13, 0x50))
                    zmm1 = _mm_blendv_ps(zx.o(0), temp0_880, _mm_shuffle_epi32(zmm13, 0xfa))
                    zmm0 = data_143442670 & zmm13
                    r15_3 = zx.q(_mm_extract_epi32(zmm0, 1))
                    rbx_23 = zx.q(_mm_extract_epi32(zmm0, 2))
                    rbp_19 = zx.q(_mm_extract_epi32(zmm0, 3))
                    int64_t r10_5 = _mm_extract_epi64(zmm3, 1)
                    int32_t temp0_889[0x4] =
                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm3.q)), *(arg4 + r10_5), 1)
                    int64_t r10_6 = _mm_extract_epi64(zmm1, 1)
                    int32_t temp0_891[0x4] = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(temp0_889, *(arg4 + zmm1.q), 2), *(arg4 + r10_6), 
                        3)
                    zmm6 = _mm_srli_epi32(temp0_891, 0xa) & data_143442480
                    int32_t temp0_893[0x4] =
                        __paddd_xmmdq_memdq(temp0_891 & data_143442680, data_143442490)
                    uint64_t rcx_49 = zx.q(arg6[0])
                    uint128_t* r10_7 = zx.q(zmm0.d)
                    zmm3 = _mm_add_ps(
                        _mm_mul_ps(__divps_xmmps_memps(_mm_cvtepi32_ps(temp0_893), data_1434426a0), 
                            zmm7), 
                        zmm11)
                    zmm0 = data_143442440
                    zmm6 = _mm_add_epi32(zmm6, zmm0)
                    float temp0_899[0x4] = _mm_cvtepi32_ps(zmm6)
                    zmm2 = data_143442690
                    zmm12 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_899, zmm2), temp0_877), 
                        __insertps_xmmps_memd_immb(temp0_862, *(r9_3 + rdi_23), 0x30))
                    zmm8 = var_358
                    float temp0_904[0x4] =
                        __insertps_xmmps_memd_immb(*(rcx_49 + r12_4), *(r14_3 + rax_193), 0x10)
                    zmm1 = _mm_add_epi32(_mm_srli_epi32(temp0_891, 0x15), zmm0)
                    float temp0_907[0x4] =
                        __insertps_xmmps_memd_immb(temp0_904, *(r9_4 + rsi_37), 0x20)
                    rdx_20 = var_2e0.d
                    arg6 = _mm_add_ps(
                        _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(zmm1), zmm2), 
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(*(r10_7 + r12_4), 
                                        *(r15_3 + rax_193), 0x10), 
                                    *(rbx_23 + rsi_37), 0x20), 
                                *(rbp_19 + rdi_23), 0x30)), 
                        __insertps_xmmps_memd_immb(temp0_907, *(r8_3 + rdi_23), 0x30))
                case 4, 5, 6
                    goto label_1402f7f38
        
        arg5 = _mm_cmpeq_epi32(arg5, zmm9) & not.o(zmm13)
        char temp0_922 = _mm_movemask_ps(arg5)
        
        if (temp0_922 != 0)
            if (rdx_20 u> 6)
            label_1402f85fe:
                zmm0 = zx.o(0)
                zmm6 = var_3a8_2
                
                if ((temp0_922 & 4) != 0)
                    zmm0 = zx.o(0)
                    zmm0 = _mm_blend_ps(zmm0, zmm0, 4)
                
                if ((temp0_922 & 8) != 0)
                    zmm0 = _mm_blend_ps(zmm0, zx.o(0), 8)
                
                zmm4 = zmm0
                zmm1 = zmm0
                goto label_1402f8ac3
            
            zmm9 = _mm_mullo_epi32(zmm9, zmm8)
            zmm11 = _mm_cvtepi32_epi64(zmm9[0].q)
            zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm9, 0x4e).q)
            int64_t* rcx_51 = sx.q(jump_table_1402f8d6c[r13_1]) + &jump_table_1402f8d6c
            
            switch (rcx_51)
                case 0x1402f845c
                    int32_t temp0_927[0x4] = __paddq_xmmdq_memdq(var_368_2, var_318_2)
                    zmm5 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm5, var_338_2), zmm1)
                    int32_t temp0_930[0x4] = _mm_add_epi64(temp0_927, zmm11)
                    zmm11 = _mm_shuffle_epi32(arg5, 0x50)
                    float temp0_932[0x4] = _mm_blendv_ps(zx.o(0), temp0_930, zmm11)
                    zmm2 = _mm_shuffle_epi32(arg5, 0xfa)
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm5, zmm2)
                    int64_t rax_194 = _mm_extract_epi64(temp0_932, 1)
                    void* rcx_52 = arg4 + rax_194
                    zmm9 = *(arg4 + rax_194)
                    int64_t rdx_22 = zmm7[0].q
                    void* rax_195 = arg4 + rdx_22
                    int32_t var_338_3 = (*(arg4 + rdx_22)).d
                    int64_t rdx_23 = _mm_extract_epi64(zmm7, 1)
                    zmm8 = data_1434426c0
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm8, zmm11)
                    void* rbx_32 = arg4 + rdx_23
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                    zmm6 = *(arg4 + rdx_23)
                    void* rbp_41 = temp0_932[0].q + arg4
                    zmm4 = *(zmm7[0].q + rbp_41)
                    zmm8 = *(_mm_extract_epi64(zmm7, 1) + rcx_52)
                    arg5 = *(zmm1.q + rax_195)
                    int32_t var_368_3 = (*(_mm_extract_epi64(zmm1, 1) + rbx_32)).d
                    zmm5 = data_1434426e0
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm5, zmm11)
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm5, zmm2)
                    zmm0 = *(zmm7[0].q + rbp_41)
                    zmm2 = *(_mm_extract_epi64(zmm7, 1) + rcx_52)
                    int32_t (* rdx_30)[0x4] = _mm_extract_epi64(zmm1, 1)
                    zmm5 = *(zmm1.q + rax_195)
                    zmm11 = *(rdx_30 + rbx_32)
                    bool cond:34_1
                    bool cond:35_1
                    bool cond:42_1
                    bool cond:43_1
                    
                    if ((temp0_922 & 1) == 0)
                        zmm7 = zmm6
                        char temp6_1 = temp0_922 & 2
                        cond:34_1 = temp6_1 != 0
                        cond:35_1 = temp6_1 == 0
                        cond:42_1 = temp6_1 != 0
                        cond:43_1 = temp6_1 == 0
                        
                        if (temp6_1 == 0)
                            goto label_1402f8a69
                        
                        goto label_1402f859b
                    
                    zmm1 = *rbp_41
                    zmm7 = zmm6
                    char temp5_1 = temp0_922 & 2
                    cond:34_1 = temp5_1 != 0
                    cond:35_1 = temp5_1 == 0
                    cond:42_1 = temp5_1 != 0
                    cond:43_1 = temp5_1 == 0
                    
                    if (temp5_1 == 0)
                    label_1402f8a69:
                        zmm6 = var_3a8_2
                        
                        if (cond:35_1)
                            goto label_1402f85ac
                        
                        goto label_1402f8a73
                    
                label_1402f859b:
                    zmm1 = _mm_insert_ps(zmm1, zmm9, 0x10)
                    zmm6 = var_3a8_2
                    
                    if (not(cond:34_1))
                    label_1402f85ac:
                        
                        if (cond:43_1)
                            goto label_1402f8a80
                        
                        goto label_1402f85b2
                    
                label_1402f8a73:
                    zmm4 = _mm_insert_ps(zmm4, zmm8, 0x10)
                    bool cond:63_1
                    bool cond:64_1
                    bool cond:69_1
                    bool cond:70_1
                    
                    if (not(cond:42_1))
                    label_1402f8a80:
                        char temp13_1 = temp0_922 & 4
                        cond:63_1 = temp13_1 != 0
                        cond:64_1 = temp13_1 == 0
                        cond:69_1 = temp13_1 != 0
                        cond:70_1 = temp13_1 == 0
                        
                        if (temp13_1 == 0)
                            goto label_1402f85c1
                        
                        goto label_1402f8a89
                    
                label_1402f85b2:
                    zmm0 = _mm_insert_ps(zmm0, zmm2, 0x10)
                    char temp12_1 = temp0_922 & 4
                    cond:63_1 = temp12_1 != 0
                    cond:64_1 = temp12_1 == 0
                    cond:69_1 = temp12_1 != 0
                    cond:70_1 = temp12_1 == 0
                    
                    if (temp12_1 == 0)
                    label_1402f85c1:
                        
                        if (cond:64_1)
                            goto label_1402f8a97
                        
                        goto label_1402f85c7
                    
                label_1402f8a89:
                    zmm1 = __insertps_xmmps_memd_immb(zmm1, var_338_3, 0x20)
                    
                    if (not(cond:63_1))
                    label_1402f8a97:
                        
                        if (cond:70_1)
                            goto label_1402f85d4
                        
                        goto label_1402f8a9d
                    
                label_1402f85c7:
                    zmm4 = _mm_insert_ps(zmm4, arg5, 0x20)
                    bool cond:87_1
                    bool cond:88_1
                    bool cond:93_1
                    bool cond:94_1
                    
                    if (not(cond:69_1))
                    label_1402f85d4:
                        char temp17_1 = temp0_922 & 8
                        cond:87_1 = temp17_1 != 0
                        cond:88_1 = temp17_1 == 0
                        cond:93_1 = temp17_1 == 0
                        cond:94_1 = temp17_1 != 0
                        
                        if (temp17_1 == 0)
                            goto label_1402f8aac
                        
                        goto label_1402f85dd
                    
                label_1402f8a9d:
                    zmm0 = _mm_insert_ps(zmm0, zmm5, 0x20)
                    char temp16_1 = temp0_922 & 8
                    cond:87_1 = temp16_1 != 0
                    cond:88_1 = temp16_1 == 0
                    cond:93_1 = temp16_1 == 0
                    cond:94_1 = temp16_1 != 0
                    
                    if (temp16_1 == 0)
                    label_1402f8aac:
                        
                        if (cond:88_1)
                            goto label_1402f85e9
                        
                        goto label_1402f8ab2
                    
                label_1402f85dd:
                    zmm1 = _mm_insert_ps(zmm1, zmm7, 0x30)
                    
                    if (cond:87_1)
                    label_1402f8ab2:
                        zmm4 = __insertps_xmmps_memd_immb(zmm4, var_368_3, 0x30)
                        
                        if (not(cond:93_1))
                            zmm0 = _mm_insert_ps(zmm0, zmm11, 0x30)
                    else
                    label_1402f85e9:
                        
                        if (cond:94_1)
                            zmm0 = _mm_insert_ps(zmm0, zmm11, 0x30)
                    
                    goto label_1402f8ac3
                case 0x1402f85f4
                    goto label_1402f85fe
                case 0x1402f8627
                    int32_t temp0_945[0x4] = __paddq_xmmdq_memdq(var_368_2, var_318_2)
                    zmm5 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm5, var_338_2), zmm1)
                    int32_t temp0_948[0x4] = _mm_add_epi64(temp0_945, zmm11)
                    zmm11 = _mm_shuffle_epi32(arg5, 0x50)
                    zmm1 = _mm_blendv_ps(zx.o(0), temp0_948, zmm11)
                    zmm9 = _mm_shuffle_epi32(arg5, 0xfa)
                    arg5 = _mm_blendv_ps(zx.o(0), zmm5, zmm9)
                    int64_t rcx_55 = zmm1.q
                    int64_t rbp_42 = _mm_extract_epi64(zmm1, 1)
                    zmm8 = data_1434426b0
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm8, zmm11)
                    void* rax_197 = arg4 + rcx_55
                    float temp0_954[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm9)
                    void* rbx_33 = arg4 + rbp_42
                    zmm2 = zx.o(*(zmm1.q + rax_197))
                    int16_t* rdx_33 = _mm_extract_epi64(zmm1, 1)
                    zmm8 = data_1434426c0
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm8, zmm11)
                    int32_t temp0_956[0x4] = __pinsrw_xmmdq_memw_immb(zmm2, *(rdx_33 + rbx_33), 1)
                    zmm7 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm1.q + rax_197)), 
                        *(_mm_extract_epi64(zmm1, 1) + rbx_33), 1)
                    int64_t rax_199 = arg5[0].q
                    void* rdx_36 = arg4 + rax_199
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm8, zmm9)
                    int32_t temp0_959[0x4] =
                        __pinsrw_xmmdq_memw_immb(temp0_956, *(temp0_954[0].q + rdx_36), 2)
                    zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, *(zmm1.q + rdx_36), 2)
                    zmm0 = __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rcx_55)), *(arg4 + rbp_42), 1), 
                        *(arg4 + rax_199), 2)
                    int64_t rax_200 = _mm_extract_epi64(arg5, 1)
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(arg4 + rax_200), 3)
                    void* rax_201 = arg4 + rax_200
                    int32_t temp0_964[0x4] = __pinsrw_xmmdq_memw_immb(temp0_959, 
                        *(_mm_extract_epi64(temp0_954, 1) + rax_201), 3)
                    zmm7 =
                        __pinsrw_xmmdq_memw_immb(zmm7, *(_mm_extract_epi64(zmm1, 1) + rax_201), 3)
                    zmm0 = _mm_cvtepu16_epi32(zmm0.q)
                    zmm8 = data_1434424d0
                    zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm8))
                    zmm9 = data_1434426d0
                    zmm1 = _mm_div_ps(zmm1, zmm9)
                    float temp0_973[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(temp0_964[0].q), zmm8)), 
                        zmm9)
                    zmm0 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm7[0].q), zmm8)), zmm9)
                    zmm2 = data_143442710
                    zmm1 = _mm_mul_ps(zmm1, zmm2)
                    zmm4 = _mm_mul_ps(temp0_973, zmm2)
                    zmm0 = _mm_mul_ps(zmm0, zmm2)
                    zmm6 = var_3a8_2
                label_1402f8ac3:
                    zmm1 = _mm_sub_ps(zmm1, zmm3)
                    float temp0_1053[0x4] = _mm_sub_ps(zmm4, zmm12)
                    zmm1 = _mm_mul_ps(zmm1, zmm6)
                    zmm2 = zmm3
                    char temp7_1 = temp0_922 & 1
                    
                    if (temp7_1 != 0)
                        zmm2 = zmm3
                        zmm2[0] = zmm2[0] f+ zmm1.d
                        zmm0 = _mm_sub_ps(zmm0, arg6)
                        zmm4 = _mm_mul_ps(temp0_1053, zmm6)
                        zmm7 = zmm12
                        
                        if (temp7_1 != 0)
                            goto label_1402f8cb2
                        
                        goto label_1402f8af5
                    
                    zmm0 = _mm_sub_ps(zmm0, arg6)
                    zmm4 = _mm_mul_ps(temp0_1053, zmm6)
                    zmm7 = zmm12
                    
                    if (temp7_1 != 0)
                    label_1402f8cb2:
                        zmm7 = zmm12
                        zmm7[0] = zmm7[0] f+ zmm4[0]
                        zmm6 = _mm_mul_ps(zmm6, zmm0)
                        zmm0 = arg6
                        
                        if (temp7_1 != 0)
                            goto label_1402f8b06
                        
                        goto label_1402f8cc7
                    
                label_1402f8af5:
                    zmm6 = _mm_mul_ps(zmm6, zmm0)
                    zmm0 = arg6
                    bool cond:65_1
                    bool cond:66_1
                    bool cond:71_1
                    bool cond:72_1
                    
                    if (temp7_1 != 0)
                    label_1402f8b06:
                        zmm0.d = arg6.d f+ zmm6.d
                        zmm3 = _mm_add_ps(zmm3, zmm1)
                        char temp15_1 = temp0_922 & 2
                        cond:65_1 = temp15_1 == 0
                        cond:66_1 = temp15_1 != 0
                        cond:71_1 = temp15_1 == 0
                        cond:72_1 = temp15_1 != 0
                        
                        if (temp15_1 != 0)
                            goto label_1402f8cd3
                        
                        goto label_1402f8b16
                    
                label_1402f8cc7:
                    zmm3 = _mm_add_ps(zmm3, zmm1)
                    char temp14_1 = temp0_922 & 2
                    cond:65_1 = temp14_1 == 0
                    cond:66_1 = temp14_1 != 0
                    cond:71_1 = temp14_1 == 0
                    cond:72_1 = temp14_1 != 0
                    
                    if (temp14_1 != 0)
                    label_1402f8cd3:
                        zmm2 = _mm_blend_ps(zmm2, zmm3, 2)
                        zmm12 = _mm_add_ps(zmm12, zmm4)
                        
                        if (cond:66_1)
                            goto label_1402f8b20
                        
                        goto label_1402f8ce3
                    
                label_1402f8b16:
                    zmm12 = _mm_add_ps(zmm12, zmm4)
                    
                    if (not(cond:65_1))
                    label_1402f8b20:
                        zmm7 = _mm_blend_ps(zmm7, zmm12, 2)
                        arg6 = _mm_add_ps(arg6, zmm6)
                        
                        if (cond:72_1)
                            goto label_1402f8ced
                        
                        goto label_1402f8b31
                    
                label_1402f8ce3:
                    arg6 = _mm_add_ps(arg6, zmm6)
                    bool cond:89_1
                    bool cond:90_1
                    bool cond:95_1
                    bool cond:96_1
                    
                    if (not(cond:71_1))
                    label_1402f8ced:
                        zmm0 = _mm_blend_ps(zmm0, arg6, 2)
                        char temp19_1 = temp0_922 & 4
                        cond:89_1 = temp19_1 == 0
                        cond:90_1 = temp19_1 != 0
                        cond:95_1 = temp19_1 == 0
                        cond:96_1 = temp19_1 != 0
                        
                        if (temp19_1 != 0)
                            goto label_1402f8b3a
                        
                        goto label_1402f8cfd
                    
                label_1402f8b31:
                    char temp18_1 = temp0_922 & 4
                    cond:89_1 = temp18_1 == 0
                    cond:90_1 = temp18_1 != 0
                    cond:95_1 = temp18_1 == 0
                    cond:96_1 = temp18_1 != 0
                    
                    if (temp18_1 == 0)
                    label_1402f8cfd:
                        
                        if (not(cond:89_1))
                        label_1402f8d03:
                            zmm7 = _mm_blend_ps(zmm7, zmm12, 4)
                            
                            if (cond:96_1)
                                goto label_1402f8b4c
                            
                            goto label_1402f8d10
                    else
                    label_1402f8b3a:
                        zmm2 = _mm_blend_ps(zmm2, zmm3, 4)
                        
                        if (cond:90_1)
                            goto label_1402f8d03
                    
                    bool cond:110_1
                    bool cond:111_1
                    bool cond:113_1
                    bool cond:114_1
                    
                    if (not(cond:95_1))
                    label_1402f8b4c:
                        zmm0 = _mm_blend_ps(zmm0, arg6, 4)
                        char temp21_1 = temp0_922 & 8
                        cond:110_1 = temp21_1 == 0
                        cond:111_1 = temp21_1 != 0
                        cond:113_1 = temp21_1 != 0
                        cond:114_1 = temp21_1 == 0
                        
                        if (temp21_1 != 0)
                            goto label_1402f8d19
                        
                        goto label_1402f8b5c
                    
                label_1402f8d10:
                    char temp20_1 = temp0_922 & 8
                    cond:110_1 = temp20_1 == 0
                    cond:111_1 = temp20_1 != 0
                    cond:113_1 = temp20_1 != 0
                    cond:114_1 = temp20_1 == 0
                    
                    if (temp20_1 != 0)
                    label_1402f8d19:
                        zmm3 = _mm_blend_ps(zmm3, zmm2, 7)
                        
                        if (cond:111_1)
                            goto label_1402f8b65
                        
                        goto label_1402f8d25
                    
                label_1402f8b5c:
                    zmm3 = zmm2
                    
                    if (cond:110_1)
                    label_1402f8d25:
                        zmm12 = zmm7
                        
                        if (cond:113_1)
                            zmm0 = _mm_blend_ps(zmm0, arg6, 8)
                    else
                    label_1402f8b65:
                        zmm12 = _mm_blend_ps(zmm12, zmm7, 7)
                        
                        if (not(cond:114_1))
                            zmm0 = _mm_blend_ps(zmm0, arg6, 8)
                    
                    arg6 = zmm0
                case 0x1402f87be
                    zmm4 = _mm_srai_epi32(_mm_slli_epi32(arg5, 0x1f), 0x1f)
                    zmm0 = var_2a8_2 & zmm4
                    int64_t rax_203 = sx.q(zmm0.d)
                    void* rdi_47 = arg4 + rax_203
                    zmm2 = *(arg4 + rax_203)
                    int64_t rax_205 = sx.q(_mm_extract_epi32(zmm0, 1))
                    void* r8_4 = arg4 + rax_205
                    int64_t rdx_38 = sx.q(_mm_extract_epi32(zmm0, 2))
                    void* rbp_43 = arg4 + rdx_38
                    int64_t rcx_59 = sx.q(_mm_extract_epi32(zmm0, 3))
                    void* rbx_37 = arg4 + rcx_59
                    int32_t var_358_1[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm2, *(arg4 + rax_205), 0x10), 
                            *(arg4 + rdx_38), 0x20), 
                        *(arg4 + rcx_59), 0x30)
                    zmm2 = data_142fc95e0 & zmm4
                    zmm9 = *(zx.q(zmm2[0]) + rdi_47)
                    int32_t* rax_207 = zx.q(_mm_extract_epi32(zmm2, 1))
                    int32_t* rcx_60 = zx.q(_mm_extract_epi32(zmm2, 2))
                    int32_t* rdx_39 = zx.q(_mm_extract_epi32(zmm2, 3))
                    float temp0_994[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm9, *(rax_207 + r8_4), 0x10), 
                            *(rcx_60 + rbp_43), 0x20), 
                        *(rdx_39 + rbx_37), 0x30)
                    zmm2 = data_142fc95f0 & zmm4
                    zmm6 = zmm5
                    zmm5 = *(zx.q(zmm2[0]) + rdi_47)
                    int32_t* rax_209 = zx.q(_mm_extract_epi32(zmm2, 1))
                    int32_t* rcx_61 = zx.q(_mm_extract_epi32(zmm2, 2))
                    int32_t* rdx_40 = zx.q(_mm_extract_epi32(zmm2, 3))
                    float temp0_1000[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm5, *(rax_209 + r8_4), 0x10), 
                            *(rcx_61 + rbp_43), 0x20), 
                        *(rdx_40 + rbx_37), 0x30)
                    zmm2 = data_143442650 & zmm4
                    zmm7 = *(zx.q(zmm2[0]) + rdi_47)
                    int32_t* rax_211 = zx.q(_mm_extract_epi32(zmm2, 1))
                    int32_t* rcx_62 = zx.q(_mm_extract_epi32(zmm2, 2))
                    int32_t* rdx_41 = zx.q(_mm_extract_epi32(zmm2, 3))
                    zmm7 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm7, *(rax_211 + r8_4), 0x10), 
                            *(rcx_62 + rbp_43), 0x20), 
                        *(rdx_41 + rbx_37), 0x30)
                    zmm0 = data_143442660 & zmm4
                    zmm2 = *(zx.q(zmm0.d) + rdi_47)
                    int32_t* rax_213 = zx.q(_mm_extract_epi32(zmm0, 1))
                    int32_t* rcx_63 = zx.q(_mm_extract_epi32(zmm0, 2))
                    int32_t* rdx_42 = zx.q(_mm_extract_epi32(zmm0, 3))
                    zmm2 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm2, *(rax_213 + r8_4), 0x10), 
                            *(rcx_63 + rbp_43), 0x20), 
                        *(rdx_42 + rbx_37), 0x30)
                    zmm4 &= data_143442670
                    float var_378_1[0x4] = zmm13
                    zmm13 = *(zx.q(zmm4[0]) + rdi_47)
                    int32_t* rax_215 = zx.q(_mm_extract_epi32(zmm4, 1))
                    int32_t* rcx_64 = zx.q(_mm_extract_epi32(zmm4, 2))
                    int32_t* rdx_43 = zx.q(_mm_extract_epi32(zmm4, 3))
                    float temp0_1018[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm13, *(rax_215 + r8_4), 0x10), 
                            *(rcx_64 + rbp_43), 0x20), 
                        *(rdx_43 + rbx_37), 0x30)
                    zmm4 = __paddq_xmmdq_memdq(var_368_2, var_318_2)
                    zmm6 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm6, var_338_2), zmm1)
                    zmm1 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm4, zmm11), 
                        _mm_shuffle_epi32(arg5, 0x50))
                    float temp0_1026[0x4] =
                        _mm_blendv_ps(zx.o(0), zmm6, _mm_shuffle_epi32(arg5, 0xfa))
                    int64_t rcx_65 = _mm_extract_epi64(zmm1, 1)
                    int64_t rdx_44 = temp0_1026[0].q
                    int64_t rbp_44 = _mm_extract_epi64(temp0_1026, 1)
                    zmm0 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), *(arg4 + rcx_65), 1), 
                            *(arg4 + rdx_44), 2), 
                        *(arg4 + rbp_44), 3)
                    zmm8 = zmm0
                    zmm4 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    zmm0 &= data_143442680
                    zmm8 = _mm_srli_epi32(zmm8, 0x15)
                    zmm1 = __addps_xmmps_memps(
                        _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442490)), 
                                data_1434426a0), 
                            zmm7), 
                        var_358_1)
                    zmm0 = data_143442440
                    float temp0_1038[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm0))
                    zmm7 = data_143442690
                    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_1038, zmm7), zmm2), temp0_994)
                    zmm13 = var_378_1
                    zmm0 = _mm_add_ps(
                        _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm8, zmm0)), zmm7), 
                            temp0_1018), 
                        temp0_1000)
                    zmm6 = var_3a8_2
                    goto label_1402f8ac3
                case 0x140b3ac7b
                    var_318_2[2].q = r14_3
                    
                    if (sub_140b40300(rcx_51, rbx_23) == 0)
                        var_348 = zmm6
                        char i_4
                        
                        do
                            QueryPerformanceCounter(&rbp_19[0xc])
                            double zmm1_1 = float.d(*(rbp_19 + 0x30))
                            float temp0_1085[0x2] = _mm_cvtps_pd(*(rdi_23 + 0x50))
                            
                            if (zmm1_1 f* data_143d796f8 f+ 0x4170000000000000 f- r15_3[3]
                                    f> temp0_1085)
                                r15_3[5].b = 1
                                break
                            
                            i_4 = sub_140b40300(&data_1439a9160, rbx_23)
                        while (i_4 == 0)
                    
                    int64_t* r14_4 = nullptr
                    *(rbp_19 - 0x20) = 0
                    int32_t rdx_52 = 0
                    rbp_19[-6] = 0
                    int32_t rcx_70 = 0
                    rbp_19[-5] = 0
                    int64_t rsi_39 = -1
                    
                    if (rbx_23 != 0 && *rbx_23 != 0)
                        int64_t rdi_48 = -1
                        
                        do
                            rdi_48 += 1
                        while (rbx_23[rdi_48] != 0)
                        
                        if (rdi_48.d + 1 s> 0)
                            sub_1405947f0(&rbp_19[-8], rdi_48.d + 1)
                            rcx_70 = rbp_19[-5]
                            rdx_52 = rbp_19[-6]
                        
                        int32_t rax_219 = rdi_48.d + 1 + rdx_52
                        rbp_19[-6] = rax_219
                        
                        if (rax_219 s> rcx_70)
                            sub_140594770(&rbp_19[-8])
                        
                        UnDecorator::getReferenceType(*(rbp_19 - 0x20), rbx_23, (rdi_48.d + 1) * 2)
                    
                    EnterCriticalSection(&data_1439a91c0)
                    
                    if (sub_140b40300(&data_1439a9160, rbx_23) != 0)
                        *(rbp_19 - 0x30) = 0
                        int32_t rdx_56 = 0
                        rbp_19[-0xa] = 0
                        int32_t rcx_74 = 0
                        rbp_19[-9] = 0
                        int64_t rdi_50 = 0
                        
                        if (rbx_23 != 0 && *rbx_23 != 0)
                            do
                                rsi_39 += 1
                            while (rbx_23[rsi_39] != 0)
                            
                            if (rsi_39.d + 1 s> 0)
                                sub_1405947f0(&rbp_19[-0xc], rsi_39.d + 1)
                                rcx_74 = rbp_19[-9]
                                rdx_56 = rbp_19[-0xa]
                                rdi_50 = *(rbp_19 - 0x30)
                            
                            int32_t rax_221 = rdx_56 + rsi_39.d + 1
                            rbp_19[-0xa] = rax_221
                            
                            if (rax_221 s> rcx_74)
                                sub_140594770(&rbp_19[-0xc])
                                rdi_50 = *(rbp_19 - 0x30)
                            
                            UnDecorator::getReferenceType(rdi_50, rbx_23, (rsi_39.d + 1) * 2)
                        
                        sub_1408f1b50(&data_1439a9160, &rbp_19[0xc], &rbp_19[-0xc])
                        int64_t rdx_60 = sx.q(rbp_19[0xc])
                        
                        if (rdx_60.d != 0xffffffff)
                            r14_4 = *((rdx_60 << 5) + data_1439a9160 + 0x10)
                            sub_140b45450(&data_1439a9160, rdx_60.d)
                        
                        if (rdi_50 != 0)
                            sub_140a74f90(rdi_50)
                        
                        sub_140b30f50(r15_3, &r14_4[0x101])
                        
                        if (r14_4 != 0)
                            (*(*r14_4 + 0x10))(r14_4, 1)
                    
                    LeaveCriticalSection(&data_1439a91c0)
                    *(r15_3 + 0x29) = 1
                    int64_t* rax_224 = sub_140b17c60(&rbp_19[-0xc])
                    var_318_2[2]
                    var_318_2[0]
                    int16_t* const rax_225
                    
                    if (rax_224[1].d == 0)
                        rax_225 = &data_142d40450
                    else
                        rax_225 = *rax_224
                    
                    var_378[0].q = rax_225
                    uint64_t rax_226 = sub_140af8e00(&rbp_19[-8], r15_3 + 0x2a, nullptr, 0, 0, 
                        var_378, var_368_2, var_358, var_348, var_338_2, var_328, var_318_2, 
                        var_308)
                    int64_t rcx_83 = *(rbp_19 - 0x30)
                    
                    if (rcx_83 != 0)
                        rax_226 = sub_140a74f90(rcx_83)
                    
                    int64_t rcx_84 = *(rbp_19 - 0x20)
                    
                    if (rcx_84 != 0)
                        rax_226 = sub_140a74f90(rcx_84)
                    
                    var_338_2[0]
                    var_338_2[2]
                    return rax_226
        
        zmm1 = _mm_unpacklo_ps(arg6, 0)
        zmm2 = _mm_unpackhi_ps(arg6, zx.o(0))
        zmm0 = _mm_unpacklo_ps(zmm3, zmm12[0].q)
        zmm3 = _mm_unpackhi_ps(zmm3, zmm12)
        float var_168[0x4] = _mm_insert_ps(zmm0, arg6, 0x28)
        uint128_t var_158_1 = _mm_unpackhi_pd(zmm0, zmm1.q)
        uint128_t var_148_1 = _mm_insert_ps(zmm3, arg6, 0xa8)
        uint128_t var_138_1 = _mm_unpackhi_pd(zmm3, zmm2[0].q)
        i_5 = zx.q(_mm_movemask_ps(zmm13))
        
        do
            uint64_t rcx_67
            uint64_t rflags_1
            
            if (i_5 == 0)
                rcx_67 = 0x40
            else
                rcx_67, rflags_1 = _bit_scan_forward(i_5)
            uint128_t var_178 = zmm15
            *(r12 + sx.q(*(&var_178 + ((zx.q(rcx_67.d) & 3) << 2))) * 0x30 + 0x10) =
                (&var_168)[rcx_67]
            i_5 &= rol.q(-2, rcx_67.b)
        while (i_5 != 0)
else
    uint128_t var_238_1 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
    uint128_t var_1b8_1 = _mm_shuffle_epi32(_mm_add_epi64(3, zx.o(arg4)), 0x44)
    int32_t rax_4
    rax_4.b = 0f f>= zmm3.d
    uint128_t var_198_1 = _mm_shuffle_epi32(zx.o(neg.d(rax_4)), 0)
    zmm2[0] = float.s(r9 - 1)
    zmm2[0] = zmm2[0] f* zmm3.d
    int32_t rcx_3 = int.d(zmm2[0])
    uint128_t var_1c8_1 = _mm_shuffle_ps(zmm3, zmm3, 0)
    zmm4 = zx.o(0)
    arg5 = _mm_shuffle_epi32(_mm_min_epi32(zx.o(r9 - 2), _mm_max_epi32(zx.o(rcx_3), zx.o(0))), 0)
    int32_t var_1d8_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t rax_7
    rax_7.b = r15.d == 3
    uint128_t var_1a8_1 = _mm_shuffle_epi32(zx.o(neg.d(rax_7)), 0)
    rdx_1 = 0
    uint32_t var_318_1[0x4] = arg5
    int64_t var_298_1 = r12
    int32_t* var_228_1 = arg3
    
    do
        var_308 = rdx_1
        int64_t rax_10 = sx.q((rdx_1 << 3).d)
        zmm0 = *(arg2 + rax_10)
        zmm8 = *(arg2 + rax_10 + 0x10)
        var_348 = zmm0
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, zmm8, 0xdd), 4)
        int64_t rax_12 = sx.q(zmm0.d)
        int64_t rdx_2 = sx.q(*(arg3 + rax_12))
        int64_t rcx_6 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rbp_1 = sx.q(*(arg3 + rcx_6))
        int64_t rdi_1 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rbx_2 = sx.q(*(arg3 + rdi_1))
        int64_t rsi_2 = sx.q(_mm_extract_epi32(zmm0, 3))
        int32_t temp0_17[0x4] =
            _mm_insert_epi32(_mm_insert_epi32(zx.o(rdx_2.d), rbp_1.d, 1), rbx_2.d, 2)
        int64_t r14_1 = sx.q(*(arg3 + rsi_2))
        int32_t temp0_18[0x4] = _mm_insert_epi32(temp0_17, r14_1.d, 3)
        zmm12 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_12 + 4)), *(arg3 + rcx_6 + 4), 1), 
                *(arg3 + rdi_1 + 4), 2), 
            *(arg3 + rsi_2 + 4), 3)
        zmm1 = _mm_shuffle_epi32(temp0_18, 0x4e)
        zmm11 = _mm_cmpgt_epi32(data_1434422d0, zmm12) | var_198_1
        zmm7 = var_358
        float var_2a8[0x4]
        zmm9 = var_2a8
        float var_338[0x4]
        arg6 = var_338
        int64_t var_2d8
        int32_t var_188[0x4]
        
        if (_mm_movemask_ps(zmm11) == 0)
            zmm5 = var_188
        else
            zmm0 = zmm11
            zmm9 = _mm_blendv_ps(zmm9, zmm4, zmm0)
            arg6 = _mm_blendv_ps(arg6, zmm4, zmm0)
            zmm5 = zmm9
            var_2d8.o = zmm9
        
        zmm6 = _mm_cvtepi32_epi64(zmm1.q)
        zmm3 = _mm_cvtepi32_epi64(temp0_18[0].q)
        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
        zmm11 ^= zmm0
        uint32_t temp0_30 = _mm_movemask_ps(zmm11)
        var_378 = zmm8
        uint128_t var_2b8_1 = zmm6
        
        if (temp0_30 == 0)
            var_328 = zx.o(0)
            zmm2 = zmm5
            zmm4 = var_2d8.o
            zmm8 = _mm_cmpeq_epi32(zmm8, zmm8)
        else
            float var_338_1[0x4] = arg6
            arg6 = _mm_add_epi32(zmm12, zmm0)
            
            if (arg8.d f>= 1f)
                zmm0 = zmm11
                zmm9 = _mm_blendv_ps(zmm9, arg6, zmm0)
                arg6 = _mm_blendv_ps(var_338_1, arg6, zmm0)
                var_328 = zx.o(0)
                zmm2 = zmm9
                zmm4 = zmm9
                zmm8 = _mm_cmpeq_epi32(zmm8, zmm8)
            else
                float var_328_1[0x4] = zmm5
                zmm0 = __pmulld_xmmdq_memdq(zmm12, var_238_1)
                zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                var_2d8.o = zmm3
                zmm13 = _mm_add_epi64(_mm_add_epi64(var_1b8_1, zmm3), zmm0)
                zmm15 = _mm_add_epi64(_mm_add_epi64(var_1b8_1, zmm6), zmm1)
                zmm0 = data_143442c10
                zmm13 &= zmm0
                zmm15 &= zmm0
                zmm3 = _mm_min_epi32(
                    _mm_max_epi32(
                        _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(arg6), var_1c8_1)), 
                        zmm4), 
                    arg6)
                uint32_t var_268[0x4]
                
                if (r9 s< 0x100)
                    zmm0 = _mm_shuffle_epi32(zmm3, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm3.q), zmm13)
                    char rcx_7 = temp0_30.b
                    int32_t var_218[0x4]
                    
                    if ((rcx_7 & 1) != 0)
                        zmm2 = _mm_insert_epi32(var_218, zx.d(*zmm1.q), 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rcx_7 & 2) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    else
                        zmm2 = var_218
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rcx_7 & 2) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    
                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                    
                    if ((rcx_7 & 4) != 0)
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                        
                        if ((rcx_7 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else if ((rcx_7 & 8) != 0)
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    zmm7 = _mm_cmpgt_epi32(zmm2 & data_142ed6810, arg5)
                    zmm6 = _mm_cmpeq_epi32(zmm6, zmm6)
                    zmm0 = zmm7 ^ zmm6
                    var_218 = zmm2
                    float var_2a8_1[0x4] = zmm9
                    uint128_t var_328_2 = zmm0
                    zmm4 = zmm3
                    
                    if (_mm_movemask_ps(zmm7 & not.o(zmm11)) != 0)
                        zmm4 = _mm_blendv_ps(zmm4, arg6, zmm0)
                        zmm0 = _mm_sub_epi32(zmm3, zmm6)
                        zmm7 &= not.o(_mm_cmpgt_epi32(zmm0, arg6) ^ zmm6)
                        zmm6 = zmm7 & zmm11
                        uint32_t j = _mm_movemask_ps(zmm6)
                        
                        if (j != 0)
                            zmm9 = _mm_cmpeq_epi32(zmm9, zmm9)
                            zmm5 = zmm3
                            
                            do
                                zmm1 = zmm0
                                zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                int32_t temp0_107[0x4] =
                                    _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm13)
                                char temp0_108 = _mm_movemask_ps(zmm6)
                                uint128_t var_368
                                
                                if ((temp0_108 & 1) != 0)
                                    zmm6 = _mm_insert_epi32(var_368, zx.d(*temp0_107[0].q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_108 & 2) != 0)
                                        zmm6 = _mm_insert_epi32(zmm6, 
                                            zx.d(*_mm_extract_epi64(temp0_107, 1)), 1)
                                else
                                    zmm6 = var_368
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_108 & 2) != 0)
                                        zmm6 = _mm_insert_epi32(zmm6, 
                                            zx.d(*_mm_extract_epi64(temp0_107, 1)), 1)
                                
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_108 & 4) != 0)
                                    zmm6 = _mm_insert_epi32(zmm6, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_108 & 8) != 0)
                                        zmm6 = _mm_insert_epi32(zmm6, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else if ((temp0_108 & 8) != 0)
                                    zmm6 =
                                        _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                var_368 = zmm6
                                zmm0 = _mm_cmpgt_epi32(zmm6 & data_142ed6810, arg5) & zmm7
                                zmm4 = _mm_blendv_ps(zmm4, zmm5, zmm0)
                                zmm2 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm11) != j)
                                    zmm2 = zmm0 ^ zmm7
                                
                                zmm0 = _mm_sub_epi32(zmm1, zmm9)
                                zmm7 = _mm_cmpgt_epi32(zmm0, arg6) & not.o(zmm2)
                                zmm6 = zmm7 & zmm11
                                j = _mm_movemask_ps(zmm6)
                                zmm5 = zmm1
                            while (j != 0)
                    
                    uint32_t temp0_122 = _mm_movemask_ps(_mm_andnot_ps(var_328_2, zmm11))
                    zmm8 = _mm_cmpeq_epi32(zmm8, zmm8)
                    int32_t var_278[0x4]
                    
                    if (temp0_122 == 0)
                        zmm2 = var_278
                        zmm7 = var_358
                        arg5 = var_268
                        zmm9 = var_2a8_1
                    else
                        zmm0 = var_328_2 ^ zmm8
                        zmm4 = _mm_blendv_ps(zmm4, zx.o(0), zmm0)
                        zmm3 = _mm_add_epi32(zmm3, zmm8)
                        zmm6 = _mm_cmpgt_epi32(zmm3, zx.o(0)) & zmm0
                        zmm0 = zmm6 & zmm11
                        uint32_t j_1 = _mm_movemask_ps(zmm0)
                        
                        if (j_1 == 0)
                            zmm7 = var_358
                            zmm9 = var_2a8_1
                        else
                            zmm7 = var_358
                            zmm9 = var_2a8_1
                            
                            do
                                zmm2 = _mm_shuffle_epi32(zmm3, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm3.q), zmm13)
                                char temp0_136 = _mm_movemask_ps(zmm0)
                                
                                if ((temp0_136 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                    
                                    if ((temp0_136 & 2) != 0)
                                        goto label_1402f5651
                                    
                                    goto label_1402f569f
                                
                                zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((temp0_136 & 2) != 0)
                                label_1402f5651:
                                    zmm7 =
                                        _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                                    
                                    if ((temp0_136 & 4) == 0)
                                        goto label_1402f56a8
                                    
                                    goto label_1402f5668
                                
                            label_1402f569f:
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_136 & 4) != 0)
                                label_1402f5668:
                                    zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_136 & 8) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402f56a8:
                                    
                                    if ((temp0_136 & 8) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = _mm_cmpgt_epi32(zmm7 & data_142ed6810, arg5) & not.o(zmm6)
                                zmm4 = _mm_blendv_ps(zmm4, zmm3, zmm0)
                                zmm2 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm11) != j_1)
                                    zmm2 = zmm0 ^ zmm6
                                
                                zmm3 = _mm_add_epi32(zmm3, zmm8)
                                zmm6 = _mm_cmpgt_epi32(zmm3, zx.o(0)) & zmm2
                                zmm0 = zmm6 & zmm11
                                j_1 = _mm_movemask_ps(zmm0)
                            while (j_1 != 0)
                        
                        zmm2 = var_278
                        arg5 = var_268
                    
                    zmm9 = _mm_blendv_ps(zmm9, zmm4, zmm11)
                    zmm0 = _mm_shuffle_epi32(zmm9, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm9[0].q), zmm13)
                    
                    if ((rcx_7 & 1) == 0)
                        zmm6 = var_2b8_1
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rcx_7 & 2) != 0)
                            goto label_1402f5a30
                        
                        goto label_1402f5964
                    
                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                    zmm6 = var_2b8_1
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rcx_7 & 2) != 0)
                    label_1402f5a30:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = _mm_add_epi64(zmm0, zmm15)
                        
                        if ((rcx_7 & 4) == 0)
                            goto label_1402f5972
                        
                        goto label_1402f5a4c
                    
                label_1402f5964:
                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                    
                    if ((rcx_7 & 4) != 0)
                    label_1402f5a4c:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                        
                        if ((rcx_7 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402f5972:
                        
                        if ((rcx_7 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    var_278 = zmm2
                    zmm2 = _mm_blendv_ps(var_338_1, _mm_sub_epi32(zmm9, zmm8), zmm11)
                    zmm0 = _mm_cmpgt_epi32(zmm2, arg6) & zmm11
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm2 = _mm_blendv_ps(zmm2, arg6, zmm0)
                    
                    arg6 = zmm2
                    zmm0 = _mm_shuffle_epi32(arg6, 0x4e)
                    zmm13 = _mm_add_epi64(zmm13, _mm_cvtepi32_epi64(arg6[0].q))
                    uint128_t var_1f8
                    
                    if ((rcx_7 & 1) != 0)
                        zmm3 = _mm_insert_epi32(var_1f8, zx.d(*zmm13[0].q), 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rcx_7 & 2) != 0)
                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm13, 1)), 1)
                    else
                        zmm3 = var_1f8
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rcx_7 & 2) != 0)
                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm13, 1)), 1)
                    
                    zmm15 = _mm_add_epi64(zmm15, zmm0)
                    
                    if ((rcx_7 & 4) != 0)
                        zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm15.q), 2)
                        
                        if ((rcx_7 & 8) != 0)
                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                    else if ((rcx_7 & 8) != 0)
                        zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                    
                    zmm1 = data_142ed6810
                    zmm0 = var_278 & zmm1
                    var_1f8 = zmm3
                    zmm1 &= zmm3
                    zmm4 = zmm9
                    zmm3 = var_2d8.o
                    var_268 = arg5
                    zmm2 = zx.o(0)
                    
                    if (r13.b != 1)
                        zmm1 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm1, zmm0), data_142d3f5b0)
                        zmm2 = _mm_div_ps(_mm_sub_ps(var_1d8_1, _mm_cvtepi32_ps(zmm0)), 
                            _mm_cvtepi32_ps(zmm1))
                else
                    zmm1 = _mm_add_epi32(zmm3, zmm3)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm13)
                    char r10_1 = temp0_30.b
                    uint32_t var_1e8[0x4]
                    
                    if ((r10_1 & 1) != 0)
                        arg5 = _mm_insert_epi32(var_1e8, zx.d(*zmm1.q), 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((r10_1 & 2) != 0)
                            arg5 = _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    else
                        arg5 = var_1e8
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((r10_1 & 2) != 0)
                            arg5 = _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    
                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                    
                    if ((r10_1 & 4) != 0)
                        arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                        
                        if ((r10_1 & 8) != 0)
                            arg5 = _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else if ((r10_1 & 8) != 0)
                        arg5 = _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    var_1e8 = arg5
                    arg5 = __pcmpgtd_xmmdq_memdq(_mm_blend_epi16(arg5, zmm4, 0xaa), var_318_1)
                    zmm2 = arg5 ^ data_142d3f800
                    
                    if (_mm_movemask_ps(arg5 & not.o(zmm11)) == 0)
                        zmm5 = zmm3
                    else
                        zmm4 = _mm_cmpeq_epi32(zmm4, zmm4)
                        zmm5 = _mm_blendv_ps(zmm3, arg6, zmm2)
                        zmm0 = _mm_sub_epi32(zmm3, zmm4)
                        zmm1 = _mm_cmpgt_epi32(zmm0, arg6)
                        zmm9 = _mm_cmpeq_epi32(zmm9, zmm9)
                        zmm1 ^= zmm4
                        arg5 &= not.o(zmm1)
                        zmm4 = arg5 & zmm11
                        uint32_t j_2 = _mm_movemask_ps(zmm4)
                        
                        if (j_2 != 0)
                            zmm1 = zmm3
                            
                            do
                                zmm6 = zmm0
                                zmm7 = _mm_add_epi32(zmm0, zmm0)
                                zmm0 = _mm_shuffle_epi32(zmm7, 0x4e)
                                zmm7 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm7[0].q), zmm13)
                                char temp0_77 = _mm_movemask_ps(zmm4)
                                float var_3a8[0x4]
                                
                                if ((temp0_77 & 1) != 0)
                                    zmm4 = _mm_insert_epi32(var_3a8, zx.d(*zmm7[0].q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_77 & 2) != 0)
                                        zmm4 = _mm_insert_epi32(zmm4, 
                                            zx.d(*_mm_extract_epi64(zmm7, 1)), 1)
                                else
                                    zmm4 = var_3a8
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_77 & 2) != 0)
                                        zmm4 = _mm_insert_epi32(zmm4, 
                                            zx.d(*_mm_extract_epi64(zmm7, 1)), 1)
                                
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_77 & 4) != 0)
                                    zmm4 = _mm_insert_epi32(zmm4, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_77 & 8) != 0)
                                        zmm4 = _mm_insert_epi32(zmm4, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else if ((temp0_77 & 8) != 0)
                                    zmm4 =
                                        _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = zmm4
                                zmm4 = zx.o(0)
                                var_3a8 = zmm0
                                zmm0 = __pcmpgtd_xmmdq_memdq(_mm_blend_epi16(zmm0, zx.o(0), 0xaa), 
                                    var_318_1) & arg5
                                zmm5 = _mm_blendv_ps(zmm5, zmm1, zmm0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm11) != j_2)
                                    zmm4 = zmm0 ^ arg5
                                
                                zmm0 = _mm_sub_epi32(zmm6, zmm9)
                                arg5 = _mm_cmpgt_epi32(zmm0, arg6) & not.o(zmm4)
                                zmm4 = arg5 & zmm11
                                j_2 = _mm_movemask_ps(zmm4)
                                zmm1 = zmm6
                            while (j_2 != 0)
                    
                    int32_t var_288[0x4]
                    
                    if (_mm_movemask_ps(zmm2 & not.o(zmm11)) == 0)
                        zmm9 = zx.o(0)
                        zmm2 = var_288
                        arg5 = var_268
                    else
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                        zmm2 ^= zmm1
                        zmm9 = zx.o(0)
                        zmm5 = _mm_blendv_ps(zmm5, zx.o(0), zmm2)
                        zmm4 = _mm_cmpeq_epi32(zmm4, zmm4)
                        zmm3 = _mm_add_epi32(zmm3, zmm1)
                        zmm6 = _mm_cmpgt_epi32(zmm3, zx.o(0)) & zmm2
                        zmm0 = zmm6 & zmm11
                        uint32_t j_3 = _mm_movemask_ps(zmm0)
                        
                        if (j_3 == 0)
                            arg5 = var_268
                        else
                            arg5 = var_268
                            
                            do
                                zmm1 = _mm_add_epi32(zmm3, zmm3)
                                zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm13)
                                char temp0_164 = _mm_movemask_ps(zmm0)
                                
                                if ((temp0_164 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                    
                                    if ((temp0_164 & 2) != 0)
                                        goto label_1402f57f2
                                    
                                    goto label_1402f5847
                                
                                arg5 = _mm_insert_epi32(arg5, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((temp0_164 & 2) != 0)
                                label_1402f57f2:
                                    arg5 =
                                        _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                                    
                                    if ((temp0_164 & 4) == 0)
                                        goto label_1402f5850
                                    
                                    goto label_1402f580a
                                
                            label_1402f5847:
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_164 & 4) != 0)
                                label_1402f580a:
                                    arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_164 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402f5850:
                                    
                                    if ((temp0_164 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 =
                                    _mm_cmpgt_epi32(_mm_blend_epi16(arg5, zx.o(0), 0xaa), var_318_1)
                                    & not.o(zmm6)
                                zmm5 = _mm_blendv_ps(zmm5, zmm3, zmm0)
                                zmm2 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm11) != j_3)
                                    zmm2 = zmm0 ^ zmm6
                                
                                zmm3 = _mm_add_epi32(zmm3, zmm4)
                                zmm6 = _mm_cmpgt_epi32(zmm3, zx.o(0)) & zmm2
                                zmm0 = zmm6 & zmm11
                                j_3 = _mm_movemask_ps(zmm0)
                            while (j_3 != 0)
                        
                        zmm2 = var_288
                    
                    zmm3 = var_2d8.o
                    zmm1 = _mm_blendv_ps(var_328_1, zmm5, zmm11)
                    zmm4 = zmm1
                    zmm1 = _mm_add_epi32(zmm1, zmm1)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm13)
                    
                    if ((r10_1 & 1) == 0)
                        zmm8 = _mm_cmpeq_epi32(zmm8, zmm8)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((r10_1 & 2) != 0)
                            goto label_1402f5c47
                        
                        goto label_1402f5b75
                    
                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                    zmm8 = _mm_cmpeq_epi32(zmm8, zmm8)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((r10_1 & 2) != 0)
                    label_1402f5c47:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = _mm_add_epi64(zmm0, zmm15)
                        
                        if ((r10_1 & 4) == 0)
                            goto label_1402f5b84
                        
                        goto label_1402f5c64
                    
                label_1402f5b75:
                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                    
                    if ((r10_1 & 4) != 0)
                    label_1402f5c64:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                        
                        if ((r10_1 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402f5b84:
                        
                        if ((r10_1 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    var_288 = zmm2
                    zmm2 = _mm_blendv_ps(var_338_1, _mm_sub_epi32(zmm4, zmm8), zmm11)
                    zmm0 = _mm_cmpgt_epi32(zmm2, arg6) & zmm11
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm2 = _mm_blendv_ps(zmm2, arg6, zmm0)
                    
                    arg6 = zmm2
                    zmm1 = _mm_add_epi32(arg6, arg6)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm13 = _mm_add_epi64(zmm13, _mm_cvtepi32_epi64(zmm1.q))
                    uint128_t var_208
                    
                    if ((r10_1 & 1) != 0)
                        zmm1 = _mm_insert_epi32(var_208, zx.d(*zmm13[0].q), 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((r10_1 & 2) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm13, 1)), 1)
                    else
                        zmm1 = var_208
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((r10_1 & 2) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm13, 1)), 1)
                    
                    zmm15 = _mm_add_epi64(zmm15, zmm0)
                    
                    if ((r10_1 & 4) != 0)
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm15.q), 2)
                        
                        if ((r10_1 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                    else if ((r10_1 & 8) != 0)
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                    
                    zmm0 = _mm_blend_epi16(var_288, zmm9, 0xaa)
                    var_208 = zmm1
                    zmm1 = _mm_blend_epi16(zmm1, zmm9, 0xaa)
                    zmm9 = zmm4
                    zmm7 = var_358
                    zmm6 = var_2b8_1
                    var_268 = arg5
                    zmm2 = zx.o(0)
                    
                    if (r13.b != 1)
                        zmm1 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm1, zmm0), data_142d3f5b0)
                        zmm2 = _mm_div_ps(_mm_sub_ps(var_1d8_1, _mm_cvtepi32_ps(zmm0)), 
                            _mm_cvtepi32_ps(zmm1))
                var_328 = _mm_blendv_ps(zx.o(0), zmm2, zmm11)
                zmm2 = zmm9
        
        zmm0 = __pcmpgtd_xmmdq_memdq(zmm12, data_142d3f5b0) & var_1a8_1
        zmm1 = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, zmm0)
        zmm15 = _mm_cvtepi32_epi64(zmm1.q)
        zmm11 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
        zmm1 = __pmulld_xmmdq_memdq(zmm4, var_238_1)
        zmm0 = _mm_cvtepi32_epi64(zmm1.q)
        zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
        var_358 = zmm7
        var_2a8 = zmm9
        var_188 = zmm2
        
        if (r15.d u< 2)
            arg5 = zmm3
            int32_t temp0_293[0x4] = _mm_add_epi64(zmm15, zmm3)
            zmm3 = _mm_add_epi64(_mm_add_epi64(zmm11, zmm6), zmm1)
            int32_t temp0_296[0x4] = _mm_add_epi64(temp0_293, zmm0)
            int64_t rax_87 = temp0_296[0].q
            int64_t rcx_8 = _mm_extract_epi64(temp0_296, 1)
            int64_t rbp_2 = zmm3.q
            int64_t rbx_3 = _mm_extract_epi64(zmm3, 1)
            zmm9 = *(arg4 + rax_87 + 4)
            zmm13 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_87), *(arg4 + rcx_8), 0x10), 
                    *(arg4 + rbp_2), 0x20), 
                *(arg4 + rbx_3), 0x30)
            zmm9 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm9, *(arg4 + rcx_8 + 4), 0x10), 
                    *(arg4 + rbp_2 + 4), 0x20), 
                *(arg4 + rbx_3 + 4), 0x30)
            zmm6 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_87 + 8), *(arg4 + rcx_8 + 8), 0x10), 
                    *(arg4 + rbp_2 + 8), 0x20), 
                *(arg4 + rbx_3 + 8), 0x30)
        else if (r15.d == 2)
            arg5 = zmm3
            int32_t temp0_306[0x4] = _mm_add_epi64(zmm15, zmm3)
            zmm3 = _mm_add_epi64(_mm_add_epi64(zmm11, zmm6), zmm1)
            int32_t temp0_309[0x4] = _mm_add_epi64(temp0_306, zmm0)
            int64_t rbp_3 = _mm_extract_epi64(temp0_309, 1)
            int64_t rbx_4 = temp0_309[0].q
            int64_t rcx_9 = zmm3.q
            int64_t rax_88 = _mm_extract_epi64(zmm3, 1)
            zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbx_4)), *(arg4 + rbp_3), 1), 
                    *(arg4 + rcx_9), 2), 
                *(arg4 + rax_88), 3).q)
            zmm1 = data_1434424d0
            float temp0_315[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbx_4 + 2)), *(arg4 + rbp_3 + 2), 1), 
                    *(arg4 + rcx_9 + 2), 2), 
                *(arg4 + rax_88 + 2), 3)
            zmm2 = data_1434426d0
            float temp0_319[0x4] = _mm_div_ps(temp0_315, zmm2)
            float temp0_322[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm0.q), zmm1))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbx_4 + 4)), *(arg4 + rbp_3 + 4), 1), 
                    *(arg4 + rcx_9 + 4), 2), 
                *(arg4 + rax_88 + 4), 3)
            float temp0_326[0x4] = _mm_div_ps(temp0_322, zmm2)
            zmm6 =
                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm0.q), zmm1)), zmm2)
            zmm0 = data_143442710
            zmm13 = _mm_mul_ps(temp0_319, zmm0)
            zmm9 = _mm_mul_ps(temp0_326, zmm0)
            zmm6 = _mm_mul_ps(zmm6, zmm0)
        else
            arg5 = zmm3
            zmm9 = zx.o(0)
            zmm13 = zx.o(0)
            zmm6 = zx.o(0)
            
            if (r15.d == 3)
                int32_t temp0_250[0x4] = _mm_add_epi64(zmm15, arg5)
                zmm3 = __paddq_xmmdq_memdq(zmm11, var_2b8_1)
                int32_t temp0_252[0x4] = _mm_add_epi64(temp0_250, zmm0)
                zmm0 = zx.o(*(arg4 + temp0_252[0].q))
                int64_t rax_84 = _mm_extract_epi64(temp0_252, 1)
                zmm3 = _mm_add_epi64(zmm3, zmm1)
                zmm0 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(__pinsrd_xmmdq_memd_immb(zmm0, *(arg4 + rax_84), 1), 
                        *(arg4 + zmm3.q), 2), 
                    *(arg4 + _mm_extract_epi64(zmm3, 1)), 3)
                zmm2 = *(arg4 + rdx_2 + 4)
                zmm1 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + rdx_2), *(arg4 + rbp_1), 0x10), 
                        *(arg4 + rbx_2), 0x20), 
                    *(arg4 + r14_1), 0x30)
                zmm2 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm2, *(arg4 + rbp_1 + 4), 0x10), 
                        *(arg4 + rbx_2 + 4), 0x20), 
                    *(arg4 + r14_1 + 4), 0x30)
                zmm3 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + rdx_2 + 0xc), *(arg4 + rbp_1 + 0xc), 
                            0x10), 
                        *(arg4 + rbx_2 + 0xc), 0x20), 
                    *(arg4 + r14_1 + 0xc), 0x30)
                zmm7 = zmm0
                zmm5 = zmm0
                float temp0_269[0x4] = _mm_mul_ps(
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0), 
                    zmm3)
                zmm0 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + rdx_2 + 0x10), *(arg4 + rbp_1 + 0x10), 
                            0x10), 
                        *(arg4 + rbx_2 + 0x10), 0x20), 
                    *(arg4 + r14_1 + 0x10), 0x30)
                zmm13 = _mm_add_ps(temp0_269, zmm1)
                zmm5 = _mm_srli_epi32(zmm5, 0xa) & data_143442480
                zmm1 = data_143442440
                zmm3 = zmm1
                float temp0_276[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm5, zmm1))
                zmm8 = _mm_cmpeq_epi32(zmm8, zmm8)
                zmm1 = data_143442690
                zmm5 = zmm4
                zmm4 = zmm1
                float temp0_279[0x4] = _mm_mul_ps(_mm_div_ps(temp0_276, zmm1), zmm0)
                zmm0 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rdx_2 + 8), *(arg4 + rbp_1 + 8), 0x10), 
                    *(arg4 + rbx_2 + 8), 0x20)
                zmm9 = _mm_add_ps(temp0_279, zmm2)
                zmm1 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + rdx_2 + 0x14), *(arg4 + rbp_1 + 0x14), 
                            0x10), 
                        *(arg4 + rbx_2 + 0x14), 0x20), 
                    *(arg4 + r14_1 + 0x14), 0x30)
                zmm6 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm7, 0x15), zmm3)), 
                    zmm4)
                zmm4 = zmm5
                zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm1), 
                    __insertps_xmmps_memd_immb(zmm0, *(arg4 + r14_1 + 8), 0x30))
        
        var_2d8.o = zmm4
        zmm7 = _mm_cmpeq_epi32(zmm4, arg6)
        zmm4 = zmm7 ^ zmm8
        char temp0_335 = _mm_movemask_ps(zmm4)
        var_338 = arg6
        int32_t rdx_3
        
        if (temp0_335 == 0)
            zmm4 = zx.o(0)
            arg5 = var_318_1
            rdx_3 = var_308.d
            zmm8 = var_378
            arg6 = var_348
        else
            uint128_t var_2c8_1 = zmm6
            int32_t var_398[0x4]
            uint128_t var_388
            uint128_t var_2f8
            int64_t rcx_25
            int64_t rbx_15
            int64_t rbp_10
            int64_t rsi_27
            
            if (r15.d u> 6)
            label_1402f6310:
                uint64_t rsi_18 = zx.q(temp0_335)
                rbx_15 = rsi_18 & 1
                zmm6 = var_328
                zmm4 = zx.o(0)
                
                if (rbx_15 == 0)
                    zmm3 = var_2f8
                else
                    zmm3 = _mm_blend_ps(var_2f8, zx.o(0), 1)
                
                zmm0 = var_388
                zmm2 = var_398
                zmm8 = var_378
                arg6 = var_348
                
                if (rbx_15 != 0)
                    zmm0 = _mm_blend_ps(zmm0, zx.o(0), 1)
                    rdx_3 = var_308.d
                    zmm7 = var_2c8_1
                    
                    if (rbx_15 != 0)
                        goto label_1402f69e2
                    
                    goto label_1402f6986
                
                rdx_3 = var_308.d
                zmm7 = var_2c8_1
                bool cond:40_1
                bool cond:41_1
                bool cond:46_1
                bool cond:47_1
                
                if (rbx_15 != 0)
                label_1402f69e2:
                    zmm2 = _mm_blend_ps(zmm2, zx.o(0), 1)
                    rbp_10 = rsi_18 & 2
                    cond:40_1 = rbp_10 == 0
                    cond:41_1 = rbp_10 != 0
                    cond:46_1 = rbp_10 == 0
                    cond:47_1 = rbp_10 != 0
                    
                    if (rbp_10 != 0)
                        goto label_1402f698c
                    
                    goto label_1402f69f1
                
            label_1402f6986:
                rbp_10 = rsi_18 & 2
                cond:40_1 = rbp_10 == 0
                cond:41_1 = rbp_10 != 0
                cond:46_1 = rbp_10 == 0
                cond:47_1 = rbp_10 != 0
                
                if (rbp_10 == 0)
                label_1402f69f1:
                    
                    if (not(cond:40_1))
                    label_1402f69f3:
                        zmm0 = _mm_blend_ps(zmm0, zx.o(0), 2)
                        
                        if (cond:47_1)
                            goto label_1402f6996
                        
                        goto label_1402f69fe
                else
                label_1402f698c:
                    zmm3 = _mm_blend_ps(zmm3, zx.o(0), 2)
                    
                    if (cond:41_1)
                        goto label_1402f69f3
                
                bool cond:67_1
                bool cond:68_1
                bool cond:73_1
                bool cond:74_1
                
                if (not(cond:46_1))
                label_1402f6996:
                    zmm2 = _mm_blend_ps(zmm2, zx.o(0), 2)
                    rcx_25 = rsi_18 & 4
                    cond:67_1 = rcx_25 == 0
                    cond:68_1 = rcx_25 != 0
                    cond:73_1 = rcx_25 == 0
                    cond:74_1 = rcx_25 != 0
                    
                    if (rcx_25 != 0)
                        goto label_1402f6a04
                    
                    goto label_1402f69a5
                
            label_1402f69fe:
                rcx_25 = rsi_18 & 4
                cond:67_1 = rcx_25 == 0
                cond:68_1 = rcx_25 != 0
                cond:73_1 = rcx_25 == 0
                cond:74_1 = rcx_25 != 0
                
                if (rcx_25 == 0)
                label_1402f69a5:
                    
                    if (not(cond:67_1))
                    label_1402f69a7:
                        zmm0 = _mm_blend_ps(zmm0, zx.o(0), 4)
                        
                        if (cond:74_1)
                            goto label_1402f6a0e
                        
                        goto label_1402f69af
                else
                label_1402f6a04:
                    zmm3 = _mm_blend_ps(zmm3, zx.o(0), 4)
                    
                    if (cond:68_1)
                        goto label_1402f69a7
                
                bool cond:91_1
                bool cond:92_1
                bool cond:97_1
                bool cond:98_1
                
                if (not(cond:73_1))
                label_1402f6a0e:
                    zmm2 = _mm_blend_ps(zmm2, zx.o(0), 4)
                    rsi_27 = rsi_18 & 8
                    cond:91_1 = rsi_27 == 0
                    cond:92_1 = rsi_27 != 0
                    cond:97_1 = rsi_27 == 0
                    cond:98_1 = rsi_27 == 0
                    
                    if (rsi_27 != 0)
                        goto label_1402f69b5
                    
                    goto label_1402f6a1a
                
            label_1402f69af:
                rsi_27 = rsi_18 & 8
                cond:91_1 = rsi_27 == 0
                cond:92_1 = rsi_27 != 0
                cond:97_1 = rsi_27 == 0
                cond:98_1 = rsi_27 == 0
                
                if (rsi_27 != 0)
                label_1402f69b5:
                    zmm3 = _mm_blend_ps(zmm3, zx.o(0), 8)
                    
                    if (cond:92_1)
                        goto label_1402f6a1c
                    
                    goto label_1402f69bd
                
            label_1402f6a1a:
                
                if (cond:91_1)
                label_1402f69bd:
                    
                    if (not(cond:97_1))
                        zmm2 = _mm_blend_ps(zmm2, zx.o(0), 8)
                else
                label_1402f6a1c:
                    zmm0 = _mm_blend_ps(zmm0, zx.o(0), 8)
                    
                    if (not(cond:98_1))
                        zmm2 = _mm_blend_ps(zmm2, zx.o(0), 8)
            else
                int32_t temp0_336[0x4] = __pmulld_xmmdq_memdq(arg6, var_238_1)
                zmm0 = _mm_cvtepi32_epi64(temp0_336[0].q)
                zmm12 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_336, 0x4e)[0].q)
                
                switch (r15.d)
                    case 0, 1
                        zmm15 = _mm_add_epi64(zmm15, arg5)
                        int32_t temp0_342[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(zmm11, var_2b8_1), zmm12)
                        zmm15 = _mm_add_epi64(zmm15, zmm0)
                        zmm1 = _mm_shuffle_epi32(zmm4, 0x50)
                        float temp0_345[0x4] = _mm_blendv_ps(zx.o(0), zmm15, zmm1)
                        zmm2 = _mm_shuffle_epi32(zmm4, 0xfa)
                        zmm6 = _mm_blendv_ps(zx.o(0), temp0_342, zmm2)
                        int64_t rbp_4 = _mm_extract_epi64(temp0_345, 1)
                        void* rax_92 = arg4 + rbp_4
                        zmm11 = *(arg4 + rbp_4)
                        int64_t rbx_6 = zmm6.q
                        int64_t rsi_15 = _mm_extract_epi64(zmm6, 1)
                        void* rbp_5 = arg4 + rbx_6
                        zmm3 = data_1434426c0
                        uint32_t temp0_348[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                        zmm15 = *(arg4 + rbx_6)
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                        arg5 = *(arg4 + rsi_15)
                        void* rdi_17 = temp0_345[0].q + arg4
                        zmm6 = *(temp0_348[0].q + rdi_17)
                        zmm5 = *(_mm_extract_epi64(temp0_348, 1) + rax_92)
                        zmm12 = *(zmm3.q + rbp_5)
                        float (* rbx_10)[0x4] = _mm_extract_epi64(zmm3, 1)
                        void* rsi_16 = arg4 + rsi_15
                        zmm0 = zmm1
                        zmm1 = data_1434426e0
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                        zmm4 = *(rbx_10 + rsi_16)
                        uint32_t temp0_351[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        zmm0 = *(zmm3.q + rdi_17)
                        zmm1 = *(_mm_extract_epi64(zmm3, 1) + rax_92)
                        int32_t (* rax_93)[0x4] = temp0_351[0].q
                        uint128_t* rbx_13 = _mm_extract_epi64(temp0_351, 1)
                        zmm2 = *(rax_93 + rbp_5)
                        int32_t var_2b8_2 = (*(rbx_13 + rsi_16)).d
                        uint64_t rsi_17 = zx.q(temp0_335)
                        rbx_15 = rsi_17 & 1
                        bool cond:27_1
                        
                        if (rbx_15 != 0)
                            zmm3 = _mm_blend_ps(var_2f8, *rdi_17, 1)
                            cond:27_1 = rbx_15 == 0
                            
                            if (rbx_15 != 0)
                                var_388 = _mm_blend_ps(var_388, zmm6, 1)
                        else
                            zmm3 = var_2f8
                            cond:27_1 = rbx_15 == 0
                            
                            if (rbx_15 != 0)
                                var_388 = _mm_blend_ps(var_388, zmm6, 1)
                        
                        rdx_3 = var_308.d
                        arg6 = var_348
                        
                        if (not(cond:27_1))
                            var_398 = _mm_blend_ps(var_398, zmm0, 1)
                        
                        zmm0 = var_388
                        zmm8 = var_378
                        rbp_10 = rsi_17 & 2
                        
                        if (rbp_10 != 0)
                            zmm3 = _mm_insert_ps(zmm3, zmm11, 0x10)
                            
                            if (rbp_10 != 0)
                                goto label_1402f68e2
                        else if (rbp_10 != 0)
                        label_1402f68e2:
                            zmm0 = _mm_insert_ps(zmm0, zmm5, 0x10)
                            
                            if (rbp_10 != 0)
                                goto label_1402f6887
                            
                            goto label_1402f68ed
                        
                        bool cond:75_1
                        bool cond:81_1
                        bool cond:82_1
                        bool cond:76_1
                        
                        if (rbp_10 == 0)
                        label_1402f68ed:
                            rcx_25 = rsi_17 & 4
                            cond:75_1 = rcx_25 == 0
                            cond:76_1 = rcx_25 != 0
                            cond:81_1 = rcx_25 == 0
                            cond:82_1 = rcx_25 != 0
                            
                            if (rcx_25 != 0)
                            label_1402f68f3:
                                zmm3 = _mm_insert_ps(zmm3, zmm15, 0x20)
                                
                                if (cond:76_1)
                                    goto label_1402f6897
                                
                                goto label_1402f68fc
                        else
                        label_1402f6887:
                            var_398 = _mm_insert_ps(var_398, zmm1, 0x10)
                            rcx_25 = rsi_17 & 4
                            cond:75_1 = rcx_25 == 0
                            cond:76_1 = rcx_25 != 0
                            cond:81_1 = rcx_25 == 0
                            cond:82_1 = rcx_25 != 0
                            
                            if (rcx_25 != 0)
                                goto label_1402f68f3
                        
                        if (not(cond:75_1))
                        label_1402f6897:
                            zmm0 = _mm_insert_ps(zmm0, zmm12, 0x20)
                            zmm7 = var_2c8_1
                            zmm6 = var_328
                            
                            if (cond:82_1)
                                goto label_1402f6919
                            
                            goto label_1402f68b0
                        
                    label_1402f68fc:
                        zmm7 = var_2c8_1
                        zmm6 = var_328
                        bool cond:99_1
                        bool cond:104_1
                        bool cond:105_1
                        
                        if (cond:81_1)
                        label_1402f68b0:
                            zmm2 = var_398
                            rsi_27 = rsi_17 & 8
                            cond:99_1 = rsi_27 == 0
                            cond:104_1 = rsi_27 == 0
                            cond:105_1 = rsi_27 == 0
                            
                            if (rsi_27 != 0)
                                zmm3 = _mm_insert_ps(zmm3, arg5, 0x30)
                        else
                        label_1402f6919:
                            zmm2 = _mm_insert_ps(var_398, zmm2, 0x20)
                            rsi_27 = rsi_17 & 8
                            cond:99_1 = rsi_27 == 0
                            cond:104_1 = rsi_27 == 0
                            cond:105_1 = rsi_27 == 0
                            
                            if (rsi_27 != 0)
                                zmm3 = _mm_insert_ps(zmm3, arg5, 0x30)
                        
                        if (cond:99_1)
                            zmm4 = zx.o(0)
                            
                            if (not(cond:104_1))
                                zmm2 = __insertps_xmmps_memd_immb(zmm2, var_2b8_2, 0x30)
                        else
                            zmm0 = _mm_insert_ps(zmm0, zmm4, 0x30)
                            zmm4 = zx.o(0)
                            
                            if (not(cond:105_1))
                                zmm2 = __insertps_xmmps_memd_immb(zmm2, var_2b8_2, 0x30)
                    case 2
                        zmm15 = _mm_add_epi64(zmm15, arg5)
                        int32_t temp0_355[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(zmm11, var_2b8_1), zmm12)
                        zmm15 = _mm_add_epi64(zmm15, zmm0)
                        zmm2 = _mm_shuffle_epi32(zmm4, 0x50)
                        float temp0_358[0x4] = _mm_blendv_ps(zx.o(0), zmm15, zmm2)
                        zmm1 = _mm_shuffle_epi32(zmm4, 0xfa)
                        zmm3 = _mm_blendv_ps(zx.o(0), temp0_355, zmm1)
                        int64_t rbp_6 = temp0_358[0].q
                        void* rdi_18 = arg4 + rbp_6
                        int64_t rbx_17 = _mm_extract_epi64(temp0_358, 1)
                        void* rax_94 = arg4 + rbx_17
                        int64_t rsi_19 = zmm3.q
                        zmm4 = data_1434426b0
                        zmm6 = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                        float temp0_362[0x4] = _mm_blendv_ps(zx.o(0), zmm4, zmm1)
                        zmm4 = zx.o(*(zmm6.q + rdi_18))
                        int16_t* rcx_12 = _mm_extract_epi64(zmm6, 1)
                        zmm0 = zmm2
                        zmm2 = data_1434426c0
                        zmm6 = _mm_blendv_ps(zx.o(0), zmm2, zmm0)
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(rcx_12 + rax_94), 1)
                        void* rdx_4 = arg4 + rsi_19
                        zmm7 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm6.q + rdi_18)), 
                            *(_mm_extract_epi64(zmm6, 1) + rax_94), 1)
                        int64_t rax_95 = _mm_extract_epi64(zmm3, 1)
                        int16_t* rcx_16 = temp0_362[0].q
                        zmm2 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(rcx_16 + rdx_4), 2)
                        zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, *(zmm2[0].q + rdx_4), 2)
                        void* rcx_18 = arg4 + rax_95
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, 
                            *(_mm_extract_epi64(temp0_362, 1) + rcx_18), 3)
                        zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, 
                            *(_mm_extract_epi64(zmm2, 1) + rcx_18), 3)
                        zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rbp_6)), *(arg4 + rbx_17), 
                                    1), 
                                *(arg4 + rsi_19), 2), 
                            *(arg4 + rax_95), 3).q)
                        zmm1 = data_1434424d0
                        zmm3 = zmm1
                        zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
                        zmm0 = data_1434426d0
                        zmm2 = _mm_div_ps(zmm2, zmm0)
                        zmm1 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm4[0].q), zmm1)), 
                            zmm0)
                        zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm7[0].q), zmm3))
                        zmm2 = __mulps_xmmps_memps(zmm2, data_143442710)
                        uint64_t rsi_20 = zx.q(temp0_335)
                        rbx_15 = rsi_20 & 1
                        
                        if (rbx_15 == 0)
                            zmm3 = var_2f8
                        else
                            zmm3 = _mm_blend_ps(var_2f8, zmm2, 1)
                        
                        zmm8 = var_378
                        arg6 = var_348
                        zmm6 = var_328
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426d0)
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143442710)
                        zmm4 = zx.o(0)
                        rdx_3 = var_308.d
                        zmm7 = var_2c8_1
                        
                        if (rbx_15 != 0)
                            var_388 = _mm_blend_ps(var_388, zmm1, 1)
                            zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                            
                            if (rbx_15 != 0)
                                goto label_1402f6b50
                            
                            goto label_1402f6ab6
                        
                        zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                        bool cond:50_1
                        bool cond:51_1
                        bool cond:57_1
                        bool cond:58_1
                        
                        if (rbx_15 != 0)
                        label_1402f6b50:
                            var_398 = _mm_blend_ps(var_398, zmm0, 1)
                            rbp_10 = rsi_20 & 2
                            cond:50_1 = rbp_10 == 0
                            cond:51_1 = rbp_10 != 0
                            cond:57_1 = rbp_10 == 0
                            cond:58_1 = rbp_10 != 0
                            
                            if (rbp_10 != 0)
                                goto label_1402f6ac0
                            
                            goto label_1402f6b62
                        
                    label_1402f6ab6:
                        rbp_10 = rsi_20 & 2
                        cond:50_1 = rbp_10 == 0
                        cond:51_1 = rbp_10 != 0
                        cond:57_1 = rbp_10 == 0
                        cond:58_1 = rbp_10 != 0
                        
                        if (rbp_10 == 0)
                        label_1402f6b62:
                            
                            if (not(cond:50_1))
                            label_1402f6b73:
                                var_388 = _mm_blend_ps(var_388, zmm1, 2)
                                
                                if (cond:58_1)
                                    goto label_1402f6add
                                
                                goto label_1402f6b81
                        else
                        label_1402f6ac0:
                            zmm3 = _mm_blend_ps(zmm3, zmm2, 2)
                            
                            if (cond:51_1)
                                goto label_1402f6b73
                        
                        bool cond:77_1
                        bool cond:78_1
                        bool cond:83_1
                        bool cond:84_1
                        
                        if (not(cond:57_1))
                        label_1402f6add:
                            var_398 = _mm_blend_ps(var_398, zmm0, 2)
                            rcx_25 = rsi_20 & 4
                            cond:77_1 = rcx_25 == 0
                            cond:78_1 = rcx_25 != 0
                            cond:83_1 = rcx_25 == 0
                            cond:84_1 = rcx_25 != 0
                            
                            if (rcx_25 != 0)
                                goto label_1402f6b8b
                            
                            goto label_1402f6aef
                        
                    label_1402f6b81:
                        rcx_25 = rsi_20 & 4
                        cond:77_1 = rcx_25 == 0
                        cond:78_1 = rcx_25 != 0
                        cond:83_1 = rcx_25 == 0
                        cond:84_1 = rcx_25 != 0
                        
                        if (rcx_25 == 0)
                        label_1402f6aef:
                            
                            if (not(cond:77_1))
                            label_1402f6b00:
                                var_388 = _mm_blend_ps(var_388, zmm1, 4)
                                
                                if (cond:84_1)
                                    goto label_1402f6ba8
                                
                                goto label_1402f6b0b
                        else
                        label_1402f6b8b:
                            zmm3 = _mm_blend_ps(zmm3, zmm2, 4)
                            
                            if (cond:78_1)
                                goto label_1402f6b00
                        
                        bool cond:100_1
                        bool cond:106_1
                        bool cond:107_1
                        bool cond:101_1
                        
                        if (cond:83_1)
                        label_1402f6b0b:
                            rsi_27 = rsi_20 & 8
                            cond:100_1 = rsi_27 == 0
                            cond:101_1 = rsi_27 != 0
                            cond:106_1 = rsi_27 == 0
                            cond:107_1 = rsi_27 != 0
                            
                            if (rsi_27 != 0)
                            label_1402f6b15:
                                zmm3 = _mm_blend_ps(zmm3, zmm2, 8)
                                
                                if (cond:101_1)
                                    goto label_1402f6bc8
                                
                                goto label_1402f6b21
                        else
                        label_1402f6ba8:
                            var_398 = _mm_blend_ps(var_398, zmm0, 4)
                            rsi_27 = rsi_20 & 8
                            cond:100_1 = rsi_27 == 0
                            cond:101_1 = rsi_27 != 0
                            cond:106_1 = rsi_27 == 0
                            cond:107_1 = rsi_27 != 0
                            
                            if (rsi_27 != 0)
                                goto label_1402f6b15
                        
                        if (cond:100_1)
                        label_1402f6b21:
                            zmm2 = var_398
                            
                            if (not(cond:106_1))
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                        else
                        label_1402f6bc8:
                            var_388 = _mm_blend_ps(var_388, zmm1, 8)
                            zmm2 = var_398
                            
                            if (cond:107_1)
                                zmm2 = _mm_blend_ps(zmm2, zmm0, 8)
                        
                        zmm0 = var_388
                    case 3
                        zmm2 = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(_mm_add_epi64(zmm15, arg5), zmm0), 
                            _mm_shuffle_epi32(zmm4, 0x50))
                        zmm0 = zmm7 & not.o(temp0_18)
                        int64_t rax_97 = sx.q(zmm0.d)
                        void* rbx_19 = arg4 + rax_97
                        zmm3 = *(arg4 + rax_97)
                        int64_t rdi_19 = sx.q(_mm_extract_epi32(zmm0, 1))
                        void* rax_99 = arg4 + rdi_19
                        int64_t rsi_21 = sx.q(_mm_extract_epi32(zmm0, 2))
                        void* rbp_8 = arg4 + rsi_21
                        int64_t rdx_8 = sx.q(_mm_extract_epi32(zmm0, 3))
                        zmm3 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm3, *(arg4 + rdi_19), 0x10), 
                                *(arg4 + rsi_21), 0x20), 
                            *(arg4 + rdx_8), 0x30)
                        zmm0 = zmm7 & not.o(data_142fc95e0)
                        temp0_18[0].q = zx.q(_mm_extract_epi32(zmm0, 1))
                        int32_t* var_220_1 = zx.q(_mm_extract_epi32(zmm0, 2))
                        r13 = zx.q(zmm0.d)
                        int32_t* r14_2 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm0 = zmm7 & not.o(data_143442650)
                        uint64_t r15_1 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t r8 = zx.q(_mm_extract_epi32(zmm0, 2))
                        int32_t* r12_1 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm6 = zmm7 & not.o(data_142fc95f0)
                        uint64_t rdi_20 = zx.q(_mm_extract_epi32(zmm6, 1))
                        int32_t* r9_1 = zx.q(_mm_extract_epi32(zmm6, 2))
                        int32_t temp0_405[0x4] = __paddq_xmmdq_memdq(zmm11, var_2b8_1)
                        zmm5 = *(zx.q(zmm0.d) + rbx_19)
                        int32_t* rcx_23 = zx.q(_mm_extract_epi32(zmm6, 3))
                        void* r15_2 = arg4 + rdx_8
                        float temp0_409[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm5, *(r15_1 + rax_99), 0x10), 
                                *(r8 + rbp_8), 0x20), 
                            *(r12_1 + r15_2), 0x30)
                        float temp0_412[0x4] = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(temp0_405, zmm12), _mm_shuffle_epi32(zmm4, 0xfa))
                        zmm12 = *(r13 + rbx_19)
                        zmm1 = zmm7 & not.o(data_143442660)
                        uint64_t rdx_9 = zx.q(_mm_extract_epi32(zmm1, 1))
                        uint64_t r8_1 = zx.q(_mm_extract_epi32(zmm1, 2))
                        int32_t* r12_2 = zx.q(_mm_extract_epi32(zmm1, 3))
                        zmm0 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(zx.q(zmm1.d) + rbx_19), 
                                    *(rdx_9 + rax_99), 0x10), 
                                *(r8_1 + rbp_8), 0x20), 
                            *(r12_2 + r15_2), 0x30)
                        zmm7 &= not.o(data_143442670)
                        int32_t* r8_2 = zx.q(_mm_extract_epi32(zmm7, 1))
                        zmm11 = *(zx.q(zmm6.d) + rbx_19)
                        int32_t* r12_3 = zx.q(_mm_extract_epi32(zmm7, 2))
                        int64_t rsi_23 = zmm2[0].q
                        int64_t rdx_11 = _mm_extract_epi64(zmm2, 1)
                        int64_t rsi_24 = temp0_412[0].q
                        zmm1 = __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rsi_23)), *(arg4 + rdx_11), 1)
                        int64_t rdx_12 = _mm_extract_epi64(temp0_412, 1)
                        zmm1 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zmm1, *(arg4 + rsi_24), 2), *(arg4 + rdx_12), 
                            3)
                        int32_t (* rdx_13)[0x4] = zx.q(zmm7[0])
                        int32_t* rsi_25 = zx.q(_mm_extract_epi32(zmm7, 3))
                        zmm4 = zmm1
                        zmm2 = zmm1
                        zmm1 = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm1 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                temp0_409), 
                            zmm3)
                        zmm2 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                        zmm3 = data_143442440
                        zmm5 = zmm3
                        zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm3))
                        zmm2 = data_143442690
                        zmm7 = zmm2
                        zmm3 = _mm_mul_ps(_mm_div_ps(zmm3, zmm2), zmm0)
                        zmm2 = *(rdx_13 + rbx_19)
                        float temp0_437[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm12, *(temp0_18[0].q + rax_99), 0x10), 
                                *(var_220_1 + rbp_8), 0x20), 
                            *(r14_2 + r15_2), 0x30)
                        zmm11 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm11, *(rdi_20 + rax_99), 0x10), 
                                *(r9_1 + rbp_8), 0x20), 
                            *(rcx_23 + r15_2), 0x30)
                        zmm2 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(r8_2 + rax_99), 0x10), 
                                *(r12_3 + rbp_8), 0x20), 
                            *(rsi_25 + r15_2), 0x30)
                        zmm6 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm4, 0x15), zmm5)), zmm7)
                        uint64_t rsi_26 = zx.q(temp0_335)
                        rbx_15 = rsi_26 & 1
                        
                        if (rbx_15 != 0)
                            var_2f8 = _mm_blend_ps(var_2f8, zmm1, 1)
                        
                        zmm0 = var_388
                        arg6 = var_348
                        zmm2 = _mm_mul_ps(zmm2, zmm6)
                        float temp0_450[0x4] = _mm_add_ps(temp0_437, zmm3)
                        r12 = var_298_1
                        r15 = var_2e0
                        r13.b = arg9
                        r9 = arg7
                        arg3 = var_228_1
                        zmm4 = zx.o(0)
                        rdx_3 = var_308.d
                        
                        if (rbx_15 != 0)
                            zmm0 = _mm_blend_ps(zmm0, temp0_450, 1)
                        
                        zmm3 = var_2f8
                        zmm8 = var_378
                        zmm11 = _mm_add_ps(zmm11, zmm2)
                        bool cond:52_1
                        bool cond:59_1
                        bool cond:60_1
                        
                        if (rbx_15 == 0)
                            zmm2 = var_398
                            rbp_10 = rsi_26 & 2
                            cond:52_1 = rbp_10 == 0
                            cond:59_1 = rbp_10 == 0
                            cond:60_1 = rbp_10 != 0
                            
                            if (rbp_10 != 0)
                                zmm3 = _mm_blend_ps(zmm3, zmm1, 2)
                        else
                            zmm2 = _mm_blend_ps(var_398, zmm11, 1)
                            rbp_10 = rsi_26 & 2
                            cond:52_1 = rbp_10 == 0
                            cond:59_1 = rbp_10 == 0
                            cond:60_1 = rbp_10 != 0
                            
                            if (rbp_10 != 0)
                                zmm3 = _mm_blend_ps(zmm3, zmm1, 2)
                        
                        if (not(cond:52_1))
                            zmm0 = _mm_blend_ps(zmm0, temp0_450, 2)
                            
                            if (cond:60_1)
                                goto label_1402f6c3b
                            
                            goto label_1402f6bff
                        
                        bool cond:79_1
                        bool cond:80_1
                        bool cond:85_1
                        bool cond:86_1
                        
                        if (not(cond:59_1))
                        label_1402f6c3b:
                            zmm2 = _mm_blend_ps(zmm2, zmm11, 2)
                            rcx_25 = rsi_26 & 4
                            cond:79_1 = rcx_25 == 0
                            cond:80_1 = rcx_25 != 0
                            cond:85_1 = rcx_25 == 0
                            cond:86_1 = rcx_25 != 0
                            
                            if (rcx_25 != 0)
                                goto label_1402f6c05
                            
                            goto label_1402f6c4b
                        
                    label_1402f6bff:
                        rcx_25 = rsi_26 & 4
                        cond:79_1 = rcx_25 == 0
                        cond:80_1 = rcx_25 != 0
                        cond:85_1 = rcx_25 == 0
                        cond:86_1 = rcx_25 != 0
                        
                        if (rcx_25 == 0)
                        label_1402f6c4b:
                            
                            if (not(cond:79_1))
                            label_1402f6c4d:
                                zmm0 = _mm_blend_ps(zmm0, temp0_450, 4)
                                
                                if (cond:86_1)
                                    goto label_1402f6c0f
                                
                                goto label_1402f6c56
                        else
                        label_1402f6c05:
                            zmm3 = _mm_blend_ps(zmm3, zmm1, 4)
                            
                            if (cond:80_1)
                                goto label_1402f6c4d
                        
                        bool cond:102_1
                        bool cond:108_1
                        bool cond:109_1
                        bool cond:103_1
                        
                        if (cond:85_1)
                        label_1402f6c56:
                            rsi_27 = rsi_26 & 8
                            cond:102_1 = rsi_27 == 0
                            cond:103_1 = rsi_27 != 0
                            cond:108_1 = rsi_27 == 0
                            cond:109_1 = rsi_27 == 0
                            
                            if (rsi_27 != 0)
                            label_1402f6c5c:
                                zmm3 = _mm_blend_ps(zmm3, zmm1, 8)
                                
                                if (cond:103_1)
                                    goto label_1402f6c1e
                                
                                goto label_1402f6c64
                        else
                        label_1402f6c0f:
                            zmm2 = _mm_blend_ps(zmm2, zmm11, 4)
                            rsi_27 = rsi_26 & 8
                            cond:102_1 = rsi_27 == 0
                            cond:103_1 = rsi_27 != 0
                            cond:108_1 = rsi_27 == 0
                            cond:109_1 = rsi_27 == 0
                            
                            if (rsi_27 != 0)
                                goto label_1402f6c5c
                        
                        if (cond:102_1)
                        label_1402f6c64:
                            zmm7 = var_2c8_1
                            zmm6 = var_328
                            
                            if (not(cond:108_1))
                                zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
                        else
                        label_1402f6c1e:
                            zmm0 = _mm_blend_ps(zmm0, temp0_450, 8)
                            zmm7 = var_2c8_1
                            zmm6 = var_328
                            
                            if (not(cond:109_1))
                                zmm2 = _mm_blend_ps(zmm2, zmm11, 8)
                    case 4, 5, 6
                        goto label_1402f6310
            
            var_2f8 = zmm3
            float temp0_502[0x4] = _mm_sub_ps(zmm3, zmm13)
            var_388 = zmm0
            zmm3 = _mm_sub_ps(zmm0, zmm9)
            float temp0_504[0x4] = _mm_mul_ps(temp0_502, zmm6)
            zmm1 = zmm13
            
            if (rbx_15 != 0)
                zmm1.d = zmm13.d f+ temp0_504[0]
            
            var_398 = zmm2
            zmm0 = _mm_sub_ps(zmm2, zmm7)
            zmm3 = _mm_mul_ps(zmm3, zmm6)
            zmm2 = zmm9
            
            if (rbx_15 != 0)
                zmm2 = zmm9
                zmm2[0] = zmm2[0] f+ zmm3.d
                zmm6 = _mm_mul_ps(zmm6, zmm0)
                zmm0 = zmm7
                
                if (rbx_15 != 0)
                    goto label_1402f6d3b
                
                goto label_1402f6cd3
            
            zmm6 = _mm_mul_ps(zmm6, zmm0)
            zmm0 = zmm7
            bool cond:117_1
            bool cond:118_1
            bool cond:119_1
            bool cond:120_1
            
            if (rbx_15 != 0)
            label_1402f6d3b:
                zmm0.d = zmm7.d f+ zmm6.d
                zmm13 = _mm_add_ps(zmm13, temp0_504)
                cond:117_1 = rbp_10 == 0
                cond:118_1 = rbp_10 != 0
                cond:119_1 = rbp_10 == 0
                cond:120_1 = rbp_10 != 0
                
                if (rbp_10 != 0)
                    goto label_1402f6cdc
                
                goto label_1402f6d48
            
        label_1402f6cd3:
            zmm13 = _mm_add_ps(zmm13, temp0_504)
            cond:117_1 = rbp_10 == 0
            cond:118_1 = rbp_10 != 0
            cond:119_1 = rbp_10 == 0
            cond:120_1 = rbp_10 != 0
            
            if (rbp_10 != 0)
            label_1402f6cdc:
                zmm1 = _mm_blend_ps(zmm1, zmm13, 2)
                zmm9 = _mm_add_ps(zmm9, zmm3)
                
                if (cond:118_1)
                    goto label_1402f6d4e
                
                goto label_1402f6ce9
            
        label_1402f6d48:
            zmm9 = _mm_add_ps(zmm9, zmm3)
            
            if (not(cond:117_1))
            label_1402f6d4e:
                zmm2 = _mm_blend_ps(zmm2, zmm9, 2)
                zmm7 = _mm_add_ps(zmm7, zmm6)
                
                if (cond:120_1)
                    goto label_1402f6cee
                
                goto label_1402f6d5a
            
        label_1402f6ce9:
            zmm7 = _mm_add_ps(zmm7, zmm6)
            bool cond:121_1
            bool cond:122_1
            bool cond:123_1
            bool cond:124_1
            
            if (not(cond:119_1))
            label_1402f6cee:
                zmm0 = _mm_blend_ps(zmm0, zmm7, 2)
                arg5 = var_318_1
                cond:121_1 = rcx_25 == 0
                cond:122_1 = rcx_25 != 0
                cond:123_1 = rcx_25 == 0
                cond:124_1 = rcx_25 != 0
                
                if (rcx_25 != 0)
                    goto label_1402f6d69
                
                goto label_1402f6d03
            
        label_1402f6d5a:
            arg5 = var_318_1
            cond:121_1 = rcx_25 == 0
            cond:122_1 = rcx_25 != 0
            cond:123_1 = rcx_25 == 0
            cond:124_1 = rcx_25 != 0
            
            if (rcx_25 == 0)
            label_1402f6d03:
                
                if (not(cond:121_1))
                label_1402f6d05:
                    zmm2 = _mm_blend_ps(zmm2, zmm9, 4)
                    
                    if (cond:124_1)
                        goto label_1402f6d74
                    
                    goto label_1402f6d0e
            else
            label_1402f6d69:
                zmm1 = _mm_blend_ps(zmm1, zmm13, 4)
                
                if (cond:122_1)
                    goto label_1402f6d05
            
            bool cond:125_1
            bool cond:126_1
            bool cond:127_1
            bool cond:128_1
            
            if (not(cond:123_1))
            label_1402f6d74:
                zmm0 = _mm_blend_ps(zmm0, zmm7, 4)
                cond:125_1 = rsi_27 == 0
                cond:126_1 = rsi_27 != 0
                cond:127_1 = rsi_27 != 0
                cond:128_1 = rsi_27 == 0
                
                if (rsi_27 != 0)
                    goto label_1402f6d13
                
                goto label_1402f6d7f
            
        label_1402f6d0e:
            cond:125_1 = rsi_27 == 0
            cond:126_1 = rsi_27 != 0
            cond:127_1 = rsi_27 != 0
            cond:128_1 = rsi_27 == 0
            
            if (rsi_27 != 0)
            label_1402f6d13:
                zmm13 = _mm_blend_ps(zmm13, zmm1, 7)
                
                if (cond:126_1)
                    goto label_1402f6d85
                
                goto label_1402f6d1c
            
        label_1402f6d7f:
            zmm13 = zmm1
            
            if (cond:125_1)
            label_1402f6d1c:
                zmm9 = zmm2
                
                if (cond:127_1)
                    zmm0 = _mm_blend_ps(zmm0, zmm7, 8)
            else
            label_1402f6d85:
                zmm9 = _mm_blend_ps(zmm9, zmm2, 7)
                
                if (not(cond:128_1))
                    zmm0 = _mm_blend_ps(zmm0, zmm7, 8)
            
            zmm6 = zmm0
        
        zmm2 = _mm_unpacklo_ps(zmm6, zmm4[0].q)
        zmm0 = _mm_unpackhi_ps(zmm6, zmm4)
        zmm3 = _mm_unpacklo_ps(zmm13, zmm9[0].q)
        zmm1 = _mm_unpackhi_ps(zmm13, zmm9)
        float temp0_528[0x4] = _mm_insert_ps(zmm3, zmm6, 0x28)
        int64_t rax_105 = sx.q(arg6[0]) * 0x30
        *(r12 + rax_105 + 0x10) = __extractps_memd_xmmps_immb(zmm13, 0)
        float var_128_1[0x4] = temp0_528
        *(r12 + rax_105 + 0x14) = __extractps_memd_xmmps_immb(zmm9, 0)
        *(r12 + rax_105 + 0x18) = __extractps_memd_xmmps_immb(zmm6, 0)
        *(r12 + rax_105 + 0x1c) = 0
        int64_t rax_109 = sx.q(_mm_extract_epi32(arg6, 2)) * 0x30
        *(r12 + rax_109 + 0x10) = __extractps_memd_xmmps_immb(zmm13, 1)
        zmm3 = _mm_unpackhi_pd(zmm3, zmm2[0].q)
        *(r12 + rax_109 + 0x14) = __extractps_memd_xmmps_immb(zmm9, 1)
        uint128_t var_118_1 = zmm3
        *(r12 + rax_109 + 0x18) = __extractps_memd_xmmps_immb(zmm6, 1)
        *(r12 + rax_109 + 0x1c) = 0
        int64_t rax_113 = sx.q(zmm8[0]) * 0x30
        *(r12 + rax_113 + 0x10) = __extractps_memd_xmmps_immb(zmm13, 2)
        zmm2 = _mm_insert_ps(zmm1, zmm6, 0xa8)
        *(r12 + rax_113 + 0x14) = __extractps_memd_xmmps_immb(zmm9, 2)
        int32_t var_108_1[0x4] = zmm2
        *(r12 + rax_113 + 0x18) = __extractps_memd_xmmps_immb(zmm6, 2)
        zmm1 = _mm_unpackhi_pd(zmm1, zmm0.q)
        *(r12 + rax_113 + 0x1c) = 0
        *(r12 + sx.q(_mm_extract_epi32(zmm8, 2)) * 0x30 + 0x10) = zmm1
        rdx_1 = zx.q(rdx_3 + 4)
    while (rdx_1.d s< i_6)
    
    i_5 = zx.q(arg11)
    
    if (rdx_1.d s< i_5.d)
        goto label_1402f6ee3
return i_5
