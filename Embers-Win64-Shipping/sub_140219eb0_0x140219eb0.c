// 函数: sub_140219eb0
// 地址: 0x140219eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float var_68[0x4] = arg6
uint128_t zmm13
uint128_t var_78 = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
uint128_t zmm11
uint128_t var_98 = zmm11
int32_t var_a8[0x4] = arg5
int32_t zmm9[0x4]
int32_t var_b8[0x4] = zmm9
int64_t zmm8[0x2]
int64_t var_c8[0x2] = zmm8
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
float zmm3[0x4]
int32_t zmm4[0x4]
float zmm5[0x4]

if (i_5 s<= 0)
    r12 = 0
    i_4 = zx.q(arg10)
    
    if (0 s< i_4.d)
    label_14021f719:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r12.d), 0), data_142e11d00)
        zmm13 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i_4.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm13
        int64_t rax_188 = sx.q(zmm0.d)
        int64_t rbp_43 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rdi_42 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rcx_40 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm8 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg2 + rax_188)), *(arg2 + rbp_43), 1), 
                *(arg2 + rdi_42), 2), 
            *(arg2 + rcx_40), 3)
        zmm0 = data_142fc95e0
        zmm1 = zmm13 & zmm0
        int32_t* rax_189 = zx.q(_mm_extract_epi32(zmm1, 1))
        uint64_t rdi_43 = zx.q(_mm_extract_epi32(zmm1, 2))
        int32_t* rbx_22 = zx.q(_mm_extract_epi32(zmm1, 3))
        int32_t temp0_1250[0x4] = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(zx.q(zmm1.d) + arg2 + rax_188)), 
                    *(rax_189 + arg2 + rbp_43), 1), 
                *(rdi_43 + arg2 + rdi_42), 2), 
            *(rbx_22 + arg2 + rcx_40), 3)
        zmm1 = _mm_slli_epi32(temp0_1250, 3) | zmm0
        zmm2 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
        float temp0_1256[0x4] =
            _mm_blendv_ps(zx.o(0), _mm_cvtepi32_epi64(zmm1.q), _mm_shuffle_epi32(zmm13, 0x50))
        zmm1 = _mm_blendv_ps(zx.o(0), zmm2, _mm_shuffle_epi32(zmm13, 0xfa))
        int64_t rax_191 = temp0_1256[0].q
        int64_t rcx_41 = _mm_extract_epi64(temp0_1256, 1)
        int64_t rbp_45 = _mm_extract_epi64(zmm1, 1)
        zmm0 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_191)), *(arg3 + rcx_41), 1), 
                *(arg3 + zmm1.q), 2), 
            *(arg3 + rbp_45), 3)
        zmm1 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(zmm1, zmm1), zmm0)
        zmm11 = zmm1 & not.o(zmm13)
        char temp0_1264 = _mm_movemask_ps(zmm11)
        uint128_t var_638
        int32_t var_628[0x4]
        int32_t var_618[0x4]
        int64_t var_608[0x2]
        
        if (temp0_1264 != 0)
            int64_t var_3f8_1[0x2] = zmm8
            arg6 = zmm13
            uint128_t var_3c8_2 = zmm1
            zmm8 = _mm_shuffle_epi32(zmm0, 0x4e)
            int32_t temp0_1267[0x4] = _mm_srai_epi32(_mm_slli_epi32(zmm11, 0x1f), 0x1f)
            zmm3 = temp0_1267 & zmm0
            int64_t rax_193 = sx.q(zmm3[0])
            int64_t rdx_2 = sx.q(_mm_extract_epi32(zmm3, 1))
            int64_t rbp_47 = sx.q(_mm_extract_epi32(zmm3, 2))
            int64_t rbx_24 = sx.q(_mm_extract_epi32(zmm3, 3))
            zmm12 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_193)), *(arg4 + rdx_2), 1), 
                    *(arg4 + rbp_47), 2), 
                *(arg4 + rbx_24), 3)
            zmm2 = _mm_srli_epi32(zmm12, 0x1c)
            zmm3 = _mm_slli_epi32(zmm2, 2) & temp0_1267
            uint64_t rax_194 = zx.q(zmm3[0])
            uint64_t rdx_3 = zx.q(_mm_extract_epi32(zmm3, 1))
            uint64_t rbp_48 = zx.q(_mm_extract_epi32(zmm3, 2))
            uint64_t rbx_25 = zx.q(_mm_extract_epi32(zmm3, 3))
            zmm3 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(rax_194 + &data_143442c70)), 
                        *(rdx_3 + &data_143442c70), 1), 
                    *(rbp_48 + &data_143442c70), 2), 
                *(rbx_25 + &data_143442c70), 3)
            zmm6 = _mm_srli_epi32(zmm12, 0x18)
            uint128_t var_468_4 = zmm6
            zmm6 = (_mm_slli_epi32(zmm2, 3) | (data_143442c00 & zmm6)) & temp0_1267
            uint64_t rbp_49 = zx.q(_mm_extract_epi32(zmm6, 1))
            uint64_t rbx_26 = zx.q(_mm_extract_epi32(zmm6, 2))
            uint64_t rdi_44 = zx.q(_mm_extract_epi32(zmm6, 3))
            zmm5 = __pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(zx.o(*(zx.q(zmm6.d) + &data_143442c90)), 
                    *(rbp_49 + &data_143442c90), 1), 
                *(rbx_26 + &data_143442c90), 2)
            zmm1 = _mm_add_epi64(4, zx.o(arg4))
            zmm13 =
                _mm_cvtepu8_epi32(__pinsrb_xmmdq_memb_immb(zmm5, *(rdi_44 + &data_143442c90), 3)[0])
            uint128_t var_4d8_2 = zmm2
            int32_t temp0_1292[0x4] = _mm_cmpeq_epi32(data_142fc95c0, zmm2)
            zmm5 = _mm_srai_epi32(_mm_slli_epi32(temp0_1292 & not.o(zmm11), 0x1f), 0x1f)
            zmm4 = zx.o(0)
            
            if (_mm_movemask_ps(zmm5) != 0)
                zmm4 = zmm5 & zmm13
            
            arg5 = _mm_cvtepi32_epi64(zmm0.q)
            zmm15 = _mm_cvtepi32_epi64(zmm8[0])
            zmm6 = _mm_shuffle_epi32(zmm1, 0x44)
            zmm2 = data_143442be0 & zmm12
            zmm1 = data_142fc95e0 & temp0_1267
            zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm11 & temp0_1292, 0x1f), 0x1f)
            char temp0_1301 = _mm_movemask_ps(zmm0)
            zmm8 = data_142d3f5b0
            uint128_t var_418_3 = zmm0
            float temp0_1302[0x4] = _mm_blendv_ps(zmm4, zmm8, zmm0)
            zmm0 = zx.o(0)
            
            if (temp0_1301 != 0)
                zmm0 = zmm13 & var_418_3
                zmm4 = temp0_1302
            
            uint128_t var_598_4 = _mm_madd_epi16(zmm0, zmm1)
            int32_t temp0_1304[0x4] = _mm_mullo_epi32(zmm4, zmm3 & temp0_1267)
            int32_t var_5a8_2[0x4] = _mm_add_epi64(zmm6, zmm15)
            int32_t var_488_1[0x4] = _mm_add_epi64(zmm6, arg5)
            zmm0 = _mm_cmpgt_epi32(zmm2, zmm8) & zmm11
            int32_t var_588_5[0x4] = zmm15
            int32_t var_4a8_1[0x4] = arg5
            uint128_t var_5b8_2 = zmm11
            zmm9 = zmm15
            float var_3e8_1[0x4] = arg6
            float var_478_1[0x4] = zmm12
            uint128_t var_498_2
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm0, 0x1f)) == 0)
                zmm13 = zx.o(0)
                var_498_2 = zx.o(0)
                zmm1 = temp0_1304
                arg6 = zx.o(0)
            else
                zmm7 = zmm2
                arg5 = data_143442c30 & zmm12
                zmm12 = zx.o(0)
                int32_t temp0_1310[0x4] = _mm_cmpeq_epi32(arg5, zx.o(0))
                zmm1 = _mm_slli_epi32(zmm0 & temp0_1310, 0x1f)
                
                if (_mm_movemask_ps(zmm1) == 0)
                    zmm4 = zx.o(0)
                    zmm6 = zx.o(0)
                    var_498_2 = zx.o(0)
                    arg6 = zx.o(0)
                else
                    zmm5 = zmm1
                    zmm1 = zx.o(0)
                    zmm3 = arg8
                    
                    if (0f >= zmm3[0])
                        zmm12 = zx.o(0)
                        zmm4 = zx.o(0)
                        zmm6 = zx.o(0)
                        zmm2 = zx.o(0)
                        var_498_2 = zx.o(0)
                        arg6 = zmm5
                    else
                        zmm2 = _mm_add_epi32(_mm_cmpeq_epi32(zx.o(0), zx.o(0)), zmm7)
                        arg6 = zmm5
                        
                        if (zmm3[0] >= 1f)
                            zmm12 = _mm_srai_epi32(arg6, 0x1f) & zmm2
                            zmm4 = zmm12
                            zmm6 = zmm12
                            var_498_2 = zmm12
                        else
                            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0)
                            zmm3 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), zmm1)
                            zmm4 = _mm_round_ps(zmm3, 9)
                            zmm12 = _mm_min_epi32(_mm_cvttps_epi32(zmm4), zmm2)
                            zmm6 = _mm_srai_epi32(arg6, 0x1f)
                            zmm12 &= zmm6
                            zmm1 = zx.o(0)
                            
                            if (arg9 != 1)
                                zmm3 = _mm_sub_ps(zmm3, zmm4)
                                zmm1 = zmm3
                            
                            zmm6 &= _mm_min_epi32(
                                _mm_sub_epi32(zmm12, _mm_cmpeq_epi32(zmm3, zmm3)), zmm2)
                            zmm4 = zmm12
                            var_498_2 = zmm6
                    
                    arg6 = _mm_srai_epi32(arg6, 0x1f) & zmm1
                
                arg5 = _mm_slli_epi32(temp0_1310 & not.o(zmm0), 0x1f)
                zmm1 = _mm_srai_epi32(arg5, 0x1f)
                
                if (_mm_movemask_ps(zmm1) == 0)
                    zmm13 = zmm4
                else
                    zmm0 = _mm_cmpeq_epi32(_mm_min_epu32(data_142d3f5b0, zmm7), zmm7)
                    int32_t rax_201
                    rax_201.b = zx.o(0).d f>= arg8[0]
                    zmm2 = zx.o(neg.d(rax_201))
                    zmm5 = _mm_shuffle_epi32(zmm2, 0) | zmm0
                    zmm0 = zmm5 & zmm1
                    float var_4b8_2[0x4] = arg6
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        zmm3 = arg8
                        zmm0 = var_498_2
                    else
                        zmm2 = zx.o(0)
                        zmm12 = _mm_blendv_ps(zmm12, zx.o(0), zmm0)
                        zmm6 = _mm_blendv_ps(zmm6, zx.o(0), zmm0)
                        zmm4 = zmm12
                        zmm0 = zmm6
                        zmm3 = arg8
                    
                    arg6 = zmm5 & not.o(zmm1)
                    uint32_t temp0_1337 = _mm_movemask_ps(arg6)
                    zmm1 = zx.o(0)
                    
                    if (temp0_1337 == 0)
                        zmm12 = zmm4
                        zmm6 = zmm0
                    label_140220181:
                        arg6 = var_4b8_2
                        zmm9 = var_588_5
                        zmm11 = var_5b8_2
                    else
                        zmm4 = _mm_add_epi32(zmm7, _mm_cmpeq_epi32(zmm0, zmm0))
                        
                        if (zmm3[0] >= 1f)
                            zmm0 = arg6
                            zmm12 = _mm_blendv_ps(zmm12, zmm4, zmm0)
                            zmm6 = _mm_blendv_ps(zmm6, zmm4, zmm0)
                            goto label_140220181
                        
                        zmm0 = _mm_shuffle_epi32(var_598_4, 0x4e)
                        zmm8 = _mm_cvtepu32_epi64(var_598_4.q)
                        int32_t temp0_1342[0x4] = _mm_cvtepu32_epi64(zmm0.q)
                        zmm0 = _mm_mullo_epi32(temp0_1304, zmm7)
                        zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                        int32_t temp0_1345[0x4] = __paddq_xmmdq_memdq(temp0_1342, var_5a8_2)
                        zmm8 = __paddq_xmmdq_memdq(zmm8, var_488_1)
                        zmm2 = data_143442a20
                        zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        int32_t temp0_1350[0x4] =
                            _mm_add_epi64(_mm_add_epi64(temp0_1345, zmm2), zmm1)
                        zmm8 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm2), zmm0)
                        zmm0 = data_143442c10
                        zmm8 &= zmm0
                        zmm9 = temp0_1350 & zmm0
                        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                        zmm1 = _mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm0)
                        zmm0.d = float.s(arg7 - 1)
                        zmm0.d = zmm0.d f* zmm3[0]
                        uint128_t var_498_3 = zmm0
                        zmm0 = _mm_min_epi32(zx.o(arg7 - 2), 
                            _mm_max_epi32(zx.o(int.d(zmm0.d)), zx.o(0)))
                        zmm1 = _mm_min_epi32(_mm_max_epi32(_mm_cvttps_epi32(zmm1), zx.o(0)), zmm4)
                        float var_428_2[0x4] = zmm5
                        uint128_t var_438_1 = zmm6
                        int32_t var_578_2[0x4] = zmm4
                        
                        if (arg7 s< 0x100)
                            zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                            zmm3 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm8)
                            char rbp_52 = temp0_1337.b
                            
                            if ((rbp_52 & 1) == 0)
                                zmm2 = _mm_cvtepi32_epi64(zmm2.q)
                                
                                if ((rbp_52 & 2) != 0)
                                    goto label_140220667
                                
                                goto label_1402201cc
                            
                            zmm6 = zx.o(*zmm3[0].q)
                            zmm2 = _mm_cvtepi32_epi64(zmm2.q)
                            
                            if ((rbp_52 & 2) != 0)
                            label_140220667:
                                zmm6 = _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                zmm2 = _mm_add_epi64(zmm2, zmm9)
                                
                                if ((rbp_52 & 4) == 0)
                                    goto label_1402201db
                                
                                goto label_140220684
                            
                        label_1402201cc:
                            zmm2 = _mm_add_epi64(zmm2, zmm9)
                            
                            if ((rbp_52 & 4) != 0)
                            label_140220684:
                                zmm6 = _mm_insert_epi32(zmm6, zx.d(*zmm2.q), 2)
                                zmm11 = zmm7
                                
                                if ((rbp_52 & 8) != 0)
                                    zmm6 =
                                        _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                            else
                            label_1402201db:
                                zmm11 = zmm7
                                
                                if ((rbp_52 & 8) != 0)
                                    zmm6 =
                                        _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                            
                            zmm6 &= data_142ed6810
                            float temp0_1432[0x4] = _mm_shuffle_epi32(zmm0, 0)
                            zmm6 = _mm_cmpgt_epi32(zmm6, temp0_1432)
                            uint128_t var_4c8_4 = zmm6 ^ _mm_cmpeq_epi32(zmm2, zmm2)
                            zmm13 = zmm1
                            
                            if (_mm_movemask_ps(zmm6 & not.o(arg6)) != 0)
                                zmm13 = __blendvps_xmmdq_memdq(zmm1, var_578_2, var_4c8_4)
                                zmm0 = __psubd_xmmdq_memdq(zmm1, data_142d3f800)
                                zmm6 &= not.o(_mm_cmpgt_epi32(zmm11, zmm0))
                                zmm5 = arg6 & zmm6
                                uint32_t i = _mm_movemask_ps(zmm5)
                                
                                if (i != 0)
                                    zmm4 = zmm1
                                    
                                    do
                                        zmm2 = zmm0
                                        zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                        zmm3 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm2.q), zmm8)
                                        char temp0_1448 = _mm_movemask_ps(zmm5)
                                        
                                        if ((temp0_1448 & 1) == 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                            
                                            if ((temp0_1448 & 2) != 0)
                                                goto label_1402202a4
                                            
                                            goto label_1402202f5
                                        
                                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm3[0].q), 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                        
                                        if ((temp0_1448 & 2) != 0)
                                        label_1402202a4:
                                            zmm7 = _mm_insert_epi32(zmm7, 
                                                zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                            zmm0 = _mm_add_epi64(zmm0, zmm9)
                                            
                                            if ((temp0_1448 & 4) == 0)
                                                goto label_1402202ff
                                            
                                            goto label_1402202bc
                                        
                                    label_1402202f5:
                                        zmm0 = _mm_add_epi64(zmm0, zmm9)
                                        
                                        if ((temp0_1448 & 4) != 0)
                                        label_1402202bc:
                                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                                            
                                            if ((temp0_1448 & 8) != 0)
                                                zmm7 = _mm_insert_epi32(zmm7, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        else
                                        label_1402202ff:
                                            
                                            if ((temp0_1448 & 8) != 0)
                                                zmm7 = _mm_insert_epi32(zmm7, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        
                                        zmm0 = _mm_cmpgt_epi32(zmm7 & data_142ed6810, temp0_1432)
                                            & zmm6
                                        zmm13 = _mm_blendv_ps(zmm13, zmm4, zmm0)
                                        zmm3 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm0 & arg6) != i)
                                            zmm3 = zmm0 ^ zmm6
                                        
                                        zmm0 = __psubd_xmmdq_memdq(zmm2, data_142d3f800)
                                        zmm6 = _mm_cmpgt_epi32(zmm11, zmm0) & zmm3
                                        zmm5 = zmm6 & arg6
                                        i = _mm_movemask_ps(zmm5)
                                        zmm4 = zmm2
                                    while (i != 0)
                            
                            uint32_t temp0_1459 = _mm_movemask_ps(_mm_andnot_ps(var_4c8_4, arg6))
                            uint32_t i_1
                            
                            if (temp0_1459 != 0)
                                zmm0 = var_4c8_4 ^ data_142d3f800
                                zmm13 = _mm_blendv_ps(zmm13, zx.o(0), zmm0)
                                zmm4 = _mm_cmpeq_epi32(zmm4, zmm4)
                                zmm1 = _mm_add_epi32(zmm1, zmm4)
                                zmm7 = _mm_cmpgt_epi32(zmm1, zx.o(0)) & zmm0
                                zmm0 = zmm7 & arg6
                                i_1 = _mm_movemask_ps(zmm0)
                            
                            if (temp0_1459 == 0 || i_1 == 0)
                                zmm6 = var_438_1
                            else
                                zmm6 = var_438_1
                                
                                do
                                    zmm3 = _mm_shuffle_epi32(zmm1, 0x4e)
                                    zmm2 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm8)
                                    char temp0_1473 = _mm_movemask_ps(zmm0)
                                    
                                    if ((temp0_1473 & 1) == 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm3[0].q)
                                        
                                        if ((temp0_1473 & 2) != 0)
                                            goto label_1402203fa
                                        
                                        goto label_140220441
                                    
                                    zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm2.q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm3[0].q)
                                    
                                    if ((temp0_1473 & 2) != 0)
                                    label_1402203fa:
                                        zmm5 = _mm_insert_epi32(zmm5, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                        zmm0 = _mm_add_epi64(zmm0, zmm9)
                                        
                                        if ((temp0_1473 & 4) == 0)
                                            goto label_14022044b
                                        
                                        goto label_140220412
                                    
                                label_140220441:
                                    zmm0 = _mm_add_epi64(zmm0, zmm9)
                                    
                                    if ((temp0_1473 & 4) != 0)
                                    label_140220412:
                                        zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm0.q), 2)
                                        
                                        if ((temp0_1473 & 8) != 0)
                                            zmm5 = _mm_insert_epi32(zmm5, 
                                                zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    else
                                    label_14022044b:
                                        
                                        if ((temp0_1473 & 8) != 0)
                                            zmm5 = _mm_insert_epi32(zmm5, 
                                                zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    
                                    zmm0 = _mm_cmpgt_epi32(zmm5 & data_142ed6810, temp0_1432)
                                        & not.o(zmm7)
                                    zmm13 = _mm_blendv_ps(zmm13, zmm1, zmm0)
                                    zmm3 = zx.o(0)
                                    
                                    if (_mm_movemask_ps(zmm0 & arg6) != i_1)
                                        zmm3 = zmm0 ^ zmm7
                                    
                                    zmm1 = _mm_add_epi32(zmm1, zmm4)
                                    zmm7 = _mm_cmpgt_epi32(zmm1, zx.o(0)) & zmm3
                                    zmm0 = zmm7 & arg6
                                    i_1 = _mm_movemask_ps(zmm0)
                                while (i_1 != 0)
                            
                            zmm3 = var_428_2
                            zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
                            zmm7 = zmm9
                            zmm12 = _mm_blendv_ps(zmm12, zmm13, arg6)
                            zmm0 = _mm_shuffle_epi32(zmm12, 0x4e)
                            zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm12[0].q), zmm8)
                            
                            if ((rbp_52 & 1) == 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbp_52 & 2) != 0)
                                    goto label_1402206c3
                                
                                goto label_14022050f
                            
                            zmm4 = zx.o(*zmm1.q)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rbp_52 & 2) != 0)
                            label_1402206c3:
                                zmm4 = _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, zmm7)
                                
                                if ((rbp_52 & 4) == 0)
                                    goto label_14022051d
                                
                                goto label_1402206df
                            
                        label_14022050f:
                            zmm0 = _mm_add_epi64(zmm0, zmm7)
                            
                            if ((rbp_52 & 4) != 0)
                            label_1402206df:
                                zmm4 = _mm_insert_epi32(zmm4, zx.d(*zmm0.q), 2)
                                
                                if ((rbp_52 & 8) != 0)
                                    zmm4 =
                                        _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            else
                            label_14022051d:
                                
                                if ((rbp_52 & 8) != 0)
                                    zmm4 =
                                        _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            
                            zmm6 = _mm_blendv_ps(zmm6, 
                                _mm_sub_epi32(zmm12, _mm_cmpeq_epi32(zmm0, zmm0)), arg6)
                            zmm11 = _mm_cmpgt_epi32(zmm11, zmm6) & not.o(arg6)
                            
                            if (_mm_movemask_ps(zmm11) != 0)
                                zmm6 = __blendvps_xmmdq_memdq(zmm6, var_578_2, zmm11)
                            
                            arg6 = var_4b8_2
                            zmm9 = var_588_5
                            zmm11 = var_5b8_2
                            zmm1 = _mm_shuffle_epi32(zmm6, 0x4e)
                            zmm0 = _mm_cvtepi32_epi64(zmm6.q)
                            zmm8 = _mm_add_epi64(zmm8, zmm0)
                            
                            if ((rbp_52 & 1) == 0)
                                zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                                
                                if ((rbp_52 & 2) != 0)
                                    goto label_140220719
                                
                                goto label_1402205ad
                            
                            zmm0 = zx.o(*zmm8[0])
                            zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                            
                            if ((rbp_52 & 2) != 0)
                            label_140220719:
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm8, 1)), 1)
                                zmm7 = _mm_add_epi64(zmm7, zmm1)
                                
                                if ((rbp_52 & 4) == 0)
                                    goto label_1402205bb
                                
                                goto label_140220735
                            
                        label_1402205ad:
                            zmm7 = _mm_add_epi64(zmm7, zmm1)
                            
                            if ((rbp_52 & 4) != 0)
                            label_140220735:
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm7[0].q), 2)
                                
                                if ((rbp_52 & 8) != 0)
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm7, 1)), 3)
                            else
                            label_1402205bb:
                                
                                if ((rbp_52 & 8) != 0)
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm7, 1)), 3)
                            
                            zmm4 &= data_142ed6810
                            zmm0 &= data_142ed6810
                        else
                            zmm2 = _mm_add_epi32(zmm1, zmm1)
                            zmm3 = _mm_shuffle_epi32(zmm2, 0x4e)
                            int32_t temp0_1364[0x4] =
                                _mm_add_epi64(_mm_cvtepi32_epi64(zmm2.q), zmm8)
                            char rbp_51 = temp0_1337.b
                            
                            if ((rbp_51 & 1) == 0)
                                zmm3 = _mm_cvtepi32_epi64(zmm3[0].q)
                                
                                if ((rbp_51 & 2) != 0)
                                    goto label_14022060b
                                
                                goto label_14021fe5d
                            
                            zmm2 = zx.o(*temp0_1364[0].q)
                            zmm3 = _mm_cvtepi32_epi64(zmm3[0].q)
                            
                            if ((rbp_51 & 2) != 0)
                            label_14022060b:
                                zmm2 = _mm_insert_epi32(zmm2, 
                                    zx.d(*_mm_extract_epi64(temp0_1364, 1)), 1)
                                zmm3 = _mm_add_epi64(zmm3, zmm9)
                                
                                if ((rbp_51 & 4) == 0)
                                    goto label_14021fe6c
                                
                                goto label_140220628
                            
                        label_14021fe5d:
                            zmm3 = _mm_add_epi64(zmm3, zmm9)
                            
                            if ((rbp_51 & 4) != 0)
                            label_140220628:
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm3[0].q), 2)
                                zmm11 = zmm7
                                
                                if ((rbp_51 & 8) != 0)
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm3, 1)), 3)
                            else
                            label_14021fe6c:
                                zmm11 = zmm7
                                
                                if ((rbp_51 & 8) != 0)
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm3, 1)), 3)
                            
                            int32_t temp0_1368[0x4] = _mm_blend_epi16(zx.o(0), zmm2, 0x55)
                            zmm2 = _mm_shuffle_epi32(zmm0, 0)
                            int32_t temp0_1370[0x4] = _mm_cmpgt_epi32(temp0_1368, zmm2)
                            uint128_t var_4c8_3 = temp0_1370 ^ _mm_cmpeq_epi32(zmm3, zmm3)
                            zmm4 = zmm1
                            
                            if (_mm_movemask_ps(temp0_1370 & not.o(arg6)) != 0)
                                zmm4 = __blendvps_xmmdq_memdq(zmm1, var_578_2, var_4c8_3)
                                zmm0 = __psubd_xmmdq_memdq(zmm1, data_142d3f800)
                                zmm7 = temp0_1370 & not.o(_mm_cmpgt_epi32(zmm11, zmm0))
                                zmm3 = arg6 & zmm7
                                uint32_t i_2 = _mm_movemask_ps(zmm3)
                                
                                if (i_2 != 0)
                                    zmm15 = zmm1
                                    
                                    do
                                        zmm13 = zmm0
                                        zmm6 = _mm_add_epi32(zmm0, zmm0)
                                        zmm0 = _mm_shuffle_epi32(zmm6, 0x4e)
                                        zmm6 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm6.q), zmm8)
                                        char temp0_1386 = _mm_movemask_ps(zmm3)
                                        
                                        if ((temp0_1386 & 1) == 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                            
                                            if ((temp0_1386 & 2) != 0)
                                                goto label_14021ff33
                                            
                                            goto label_14021ff8e
                                        
                                        zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm6.q), 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                        
                                        if ((temp0_1386 & 2) != 0)
                                        label_14021ff33:
                                            zmm5 = _mm_insert_epi32(zmm5, 
                                                zx.d(*_mm_extract_epi64(zmm6, 1)), 1)
                                            zmm0 = _mm_add_epi64(zmm0, zmm9)
                                            
                                            if ((temp0_1386 & 4) == 0)
                                                goto label_14021ff98
                                            
                                            goto label_14021ff4b
                                        
                                    label_14021ff8e:
                                        zmm0 = _mm_add_epi64(zmm0, zmm9)
                                        
                                        if ((temp0_1386 & 4) != 0)
                                        label_14021ff4b:
                                            zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm0.q), 2)
                                            
                                            if ((temp0_1386 & 8) != 0)
                                                zmm5 = _mm_insert_epi32(zmm5, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        else
                                        label_14021ff98:
                                            
                                            if ((temp0_1386 & 8) != 0)
                                                zmm5 = _mm_insert_epi32(zmm5, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        
                                        zmm3 = zx.o(0)
                                        zmm0 =
                                            _mm_cmpgt_epi32(_mm_blend_epi16(zmm5, zmm3, 0xaa), zmm2)
                                            & zmm7
                                        zmm4 = _mm_blendv_ps(zmm4, zmm15, zmm0)
                                        
                                        if (_mm_movemask_ps(zmm0 & arg6) != i_2)
                                            zmm3 = zmm0 ^ zmm7
                                        
                                        zmm0 = __psubd_xmmdq_memdq(zmm13, data_142d3f800)
                                        zmm7 = _mm_cmpgt_epi32(zmm11, zmm0) & zmm3
                                        zmm3 = zmm7 & arg6
                                        i_2 = _mm_movemask_ps(zmm3)
                                        zmm15 = zmm13
                                    while (i_2 != 0)
                            
                            if (_mm_movemask_ps(_mm_andnot_ps(var_4c8_3, arg6)) == 0)
                                zmm6 = var_438_1
                                zmm13 = zmm9
                            else
                                zmm0 = var_4c8_3 ^ data_142d3f800
                                zmm4 = _mm_blendv_ps(zmm4, zx.o(0), zmm0)
                                zmm15 = _mm_cmpeq_epi32(zmm15, zmm15)
                                zmm1 = _mm_add_epi32(zmm1, zmm15)
                                zmm7 = _mm_cmpgt_epi32(zmm1, zx.o(0)) & zmm0
                                zmm0 = zmm7 & arg6
                                uint32_t i_3 = _mm_movemask_ps(zmm0)
                                
                                if (i_3 == 0)
                                    zmm13 = zmm9
                                else
                                    zmm13 = zmm9
                                    
                                    do
                                        zmm3 = _mm_add_epi32(zmm1, zmm1)
                                        zmm6 = _mm_shuffle_epi32(zmm3, 0x4e)
                                        zmm3 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm3[0].q), zmm8)
                                        char temp0_1413 = _mm_movemask_ps(zmm0)
                                        
                                        if ((temp0_1413 & 1) == 0)
                                            zmm0 = _mm_cvtepi32_epi64(zmm6.q)
                                            
                                            if ((temp0_1413 & 2) != 0)
                                                goto label_140220090
                                            
                                            goto label_1402200e9
                                        
                                        zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm3[0].q), 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm6.q)
                                        
                                        if ((temp0_1413 & 2) != 0)
                                        label_140220090:
                                            zmm5 = _mm_insert_epi32(zmm5, 
                                                zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                            zmm0 = _mm_add_epi64(zmm0, zmm13)
                                            
                                            if ((temp0_1413 & 4) == 0)
                                                goto label_1402200f3
                                            
                                            goto label_1402200a8
                                        
                                    label_1402200e9:
                                        zmm0 = _mm_add_epi64(zmm0, zmm13)
                                        
                                        if ((temp0_1413 & 4) != 0)
                                        label_1402200a8:
                                            zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm0.q), 2)
                                            
                                            if ((temp0_1413 & 8) != 0)
                                                zmm5 = _mm_insert_epi32(zmm5, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        else
                                        label_1402200f3:
                                            
                                            if ((temp0_1413 & 8) != 0)
                                                zmm5 = _mm_insert_epi32(zmm5, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        
                                        zmm0 = _mm_cmpgt_epi32(
                                            _mm_blend_epi16(zmm5, zx.o(0), 0xaa), zmm2) & not.o(zmm7)
                                        zmm4 = _mm_blendv_ps(zmm4, zmm1, zmm0)
                                        zmm6 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm0 & arg6) != i_3)
                                            zmm6 = zmm0 ^ zmm7
                                        
                                        zmm1 = _mm_add_epi32(zmm1, zmm15)
                                        zmm7 = _mm_cmpgt_epi32(zmm1, zx.o(0)) & zmm6
                                        zmm0 = zmm7 & arg6
                                        i_3 = _mm_movemask_ps(zmm0)
                                    while (i_3 != 0)
                                
                                zmm6 = var_438_1
                            
                            zmm12 = _mm_blendv_ps(zmm12, zmm4, arg6)
                            zmm1 = _mm_add_epi32(zmm12, zmm12)
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                            zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm8)
                            
                            if ((rbp_51 & 1) != 0)
                                zmm4 = zx.o(*zmm1.q)
                            
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            zmm3 = var_428_2
                            zmm5 = _mm_cmpeq_epi32(zmm5, zmm5)
                            
                            if ((rbp_51 & 2) == 0)
                                zmm0 = _mm_add_epi64(zmm0, zmm13)
                                
                                if ((rbp_51 & 4) != 0)
                                    goto label_1402247d2
                                
                                goto label_1402207c5
                            
                            zmm4 = _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                            zmm0 = _mm_add_epi64(zmm0, zmm13)
                            
                            if ((rbp_51 & 4) == 0)
                            label_1402207c5:
                                
                                if ((rbp_51 & 8) != 0)
                                    zmm4 =
                                        _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            else
                            label_1402247d2:
                                zmm4 = _mm_insert_epi32(zmm4, zx.d(*zmm0.q), 2)
                                
                                if ((rbp_51 & 8) != 0)
                                    zmm4 =
                                        _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            
                            zmm6 = _mm_blendv_ps(zmm6, 
                                _mm_sub_epi32(zmm12, _mm_cmpeq_epi32(zmm0, zmm0)), arg6)
                            zmm11 = _mm_cmpgt_epi32(zmm11, zmm6) & not.o(arg6)
                            
                            if (_mm_movemask_ps(zmm11) != 0)
                                zmm6 = __blendvps_xmmdq_memdq(zmm6, var_578_2, zmm11)
                            
                            arg6 = var_4b8_2
                            zmm9 = var_588_5
                            zmm11 = var_5b8_2
                            zmm1 = _mm_add_epi32(zmm6, zmm6)
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                            zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                            zmm8 = _mm_add_epi64(zmm8, zmm1)
                            
                            if ((rbp_51 & 1) == 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rbp_51 & 2) != 0)
                                    goto label_14022480c
                                
                                goto label_14022085d
                            
                            zmm1 = zx.o(*zmm8[0])
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rbp_51 & 2) != 0)
                            label_14022480c:
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm8, 1)), 1)
                                zmm13 = _mm_add_epi64(zmm13, zmm0)
                                
                                if ((rbp_51 & 4) == 0)
                                    goto label_14022086c
                                
                                goto label_140224829
                            
                        label_14022085d:
                            zmm13 = _mm_add_epi64(zmm13, zmm0)
                            
                            if ((rbp_51 & 4) != 0)
                            label_140224829:
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm13.q), 2)
                                zmm0 = zx.o(0)
                                
                                if ((rbp_51 & 8) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, 
                                        zx.d(*_mm_extract_epi64(zmm13, 1)), 3)
                            else
                            label_14022086c:
                                zmm0 = zx.o(0)
                                
                                if ((rbp_51 & 8) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, 
                                        zx.d(*_mm_extract_epi64(zmm13, 1)), 3)
                            
                            zmm4 = _mm_blend_epi16(zmm4, zmm0, 0xaa)
                            zmm0 = _mm_blend_epi16(zx.o(0), zmm1, 0x55)
                        
                        zmm3 ^= zmm5
                        zmm2 = zx.o(0)
                        
                        if (arg9 != 1)
                            zmm0 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm0, zmm4), data_142d3f5b0)
                            zmm5 = var_498_3
                            zmm2 = _mm_div_ps(
                                _mm_sub_ps(_mm_shuffle_ps(zmm5, zmm5, 0), _mm_cvtepi32_ps(zmm4)), 
                                _mm_cvtepi32_ps(zmm0))
                        
                        zmm1 = _mm_blendv_ps(zx.o(0), zmm2, zmm3)
                    
                    arg6 = _mm_blendv_ps(arg6, zmm1, arg5)
                    zmm13 = zmm12
                    var_498_2 = zmm6
                
                zmm1 = temp0_1304
            
            zmm5 = _mm_cvtepu32_epi64(var_598_4.q)
            zmm6 = _mm_cvtepu32_epi64(_mm_shuffle_epi32(var_598_4, 0x4e).q)
            zmm0 = _mm_mullo_epi32(zmm13, zmm1)
            zmm12 = _mm_cvtepi32_epi64(zmm0.q)
            zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
            zmm8 = _mm_cvtepi32_epi64(zmm0.q)
            int32_t temp0_1559[0x4] = __pcmpeqd_xmmdq_memdq(data_1434422d0, var_4d8_2)
            arg5 = temp0_1559 & zmm11
            zmm4 = _mm_slli_epi32(arg5, 0x1f)
            char temp0_1561 = _mm_movemask_ps(zmm4)
            float var_598_5[0x4] = zmm5
            uint128_t var_578_3 = zmm6
            int64_t var_4c8_5[0x2] = zmm8
            
            if (temp0_1561 != 0)
                zmm15 = arg6
                arg6 = zmm8
                zmm8 = _mm_add_epi64(zmm8, zmm6)
                zmm11 = __paddq_xmmdq_memdq(_mm_add_epi64(zmm12, zmm5), var_488_1)
                zmm8 = __paddq_xmmdq_memdq(zmm8, var_5a8_2)
                zmm3 = _mm_srai_epi32(_mm_slli_epi32(var_468_4, 0x1f), 0x1f)
                zmm4 = _mm_srai_epi32(zmm4, 0x1f) & zmm3
                
                if (_mm_movemask_ps(zmm4) != 0)
                    zmm2 = zmm5
                    zmm1 = data_1434426b0
                    int32_t temp0_1570[0x4] = _mm_add_epi64(zmm8, zmm1)
                    zmm1 = _mm_add_epi64(zmm1, zmm11)
                    zmm5 = _mm_unpacklo_epi32(zmm4, zmm4[0].q)
                    zmm11 = _mm_blendv_ps(zmm11, zmm1, zmm5)
                    zmm4 = _mm_unpackhi_ps(zmm4, zmm4)
                    zmm8 = _mm_blendv_ps(zmm8, temp0_1570, zmm4)
                    zmm1 = _mm_add_epi64(zmm9, zmm6)
                    int32_t temp0_1577[0x4] = _mm_add_epi64(var_4a8_1, zmm2)
                    zmm0 = data_1434426c0
                    int32_t temp0_1578[0x4] = _mm_add_epi64(temp0_1577, zmm12)
                    zmm1 = _mm_add_epi64(_mm_add_epi64(zmm1, arg6), zmm0)
                    zmm2 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_1578, zmm0), zmm5)
                    zmm6 = _mm_blendv_ps(zx.o(0), zmm1, zmm4)
                    int64_t rbx_32 = _mm_extract_epi64(zmm2, 1)
                    int64_t rsi_44 = _mm_extract_epi64(zmm6, 1)
                    zmm1 = _mm_cvtepi32_ps(_mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + zmm2.q)), *(arg4 + rbx_32), 1), 
                            *(arg4 + zmm6.q), 2), 
                        *(arg4 + rsi_44), 3).q))
                
                zmm4 = _mm_blendv_ps(data_1434426d0, zmm1, zmm3)
                zmm3 = data_143442c40
                zmm1 = var_478_1 & zmm3
                zmm3 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm3, zmm1) & arg5, 0x1f)
                char temp0_1592 = _mm_movemask_ps(zmm3)
                arg6 = zmm15
                
                if (temp0_1592 == 0)
                    zmm5 = zmm11
                    zmm3 = zmm8
                    zmm11 = var_5b8_2
                    zmm8 = var_4c8_5
                else
                    zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                    zmm2 = data_1434426b0
                    zmm6 = _mm_add_epi64(zmm8, zmm2)
                    zmm5 = _mm_blendv_ps(zmm11, _mm_add_epi64(zmm2, zmm11), 
                        _mm_shuffle_epi32(zmm3, 0x50))
                    zmm0 = _mm_shuffle_epi32(zmm3, 0xfa)
                    zmm3 = _mm_blendv_ps(zmm8, zmm6, zmm0)
                    
                    if ((temp0_1592 & 1) == 0)
                        if ((temp0_1592 & 2) != 0)
                            goto label_1402212a8
                        
                        goto label_140220b27
                    
                    zmm0 = zx.o(*zmm11.q)
                    
                    if ((temp0_1592 & 2) != 0)
                    label_1402212a8:
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm11, 1)), 1)
                        zmm11 = var_5b8_2
                        
                        if ((temp0_1592 & 4) == 0)
                            goto label_140220b36
                        
                        goto label_1402212c7
                    
                label_140220b27:
                    zmm11 = var_5b8_2
                    
                    if ((temp0_1592 & 4) != 0)
                    label_1402212c7:
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm8[0]), 2)
                        
                        if ((temp0_1592 & 8) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                    else
                    label_140220b36:
                        
                        if ((temp0_1592 & 8) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                    
                    zmm8 = var_4c8_5
                    zmm2 = _mm_cvtepi32_ps(_mm_blend_epi16(zx.o(0), zmm0, 0x55))
                
                zmm6 = data_143442c50
                zmm0 = var_478_1 & zmm6
                zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)
                char temp0_1605 = _mm_movemask_ps(_mm_slli_epi32(arg5 & zmm6, 0x1f))
                
                if (temp0_1605 != 0)
                    if ((temp0_1605 & 1) == 0)
                        if ((temp0_1605 & 2) != 0)
                            goto label_1402212f8
                        
                        goto label_140220bbd
                    
                    zmm6 = zx.o(*zmm5[0].q)
                    
                    if ((temp0_1605 & 2) != 0)
                    label_1402212f8:
                        zmm6 = _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm5, 1)), 1)
                        
                        if ((temp0_1605 & 4) == 0)
                            goto label_140220bc5
                        
                        goto label_14022130e
                    
                label_140220bbd:
                    
                    if ((temp0_1605 & 4) != 0)
                    label_14022130e:
                        zmm6 = _mm_insert_epi32(zmm6, zx.d(*zmm3[0].q), 2)
                        
                        if ((temp0_1605 & 8) != 0)
                            zmm6 = _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm3, 1)), 3)
                    else
                    label_140220bc5:
                        
                        if ((temp0_1605 & 8) != 0)
                            zmm6 = _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm3, 1)), 3)
                    
                    zmm5 = _mm_cvtepi32_ps(_mm_blend_epi16(zx.o(0), zmm6, 0x55))
                
                zmm7 = data_143442c20
                zmm4 = _mm_add_ps(zmm4, zmm7)
                zmm6 = data_142dd3fa0
                zmm4 = _mm_mul_ps(zmm4, zmm6)
                
                if ((temp0_1561 & 1) == 0)
                    zmm3 = zx.o(0)
                    zmm2 = _mm_add_ps(zmm2, zmm7)
                    
                    if ((temp0_1561 & 2) != 0)
                        goto label_14022119c
                    
                    goto label_140220c1b
                
                var_638.d = zmm4[0]
                zmm3 = zx.o(0)
                zmm2 = _mm_add_ps(zmm2, zmm7)
                
                if ((temp0_1561 & 2) != 0)
                label_14022119c:
                    var_638:4.d = __extractps_memd_xmmps_immb(zmm4, 1)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm3)
                    zmm2 = _mm_mul_ps(zmm2, zmm6)
                    
                    if ((temp0_1561 & 4) == 0)
                        goto label_140220c2c
                    
                    goto label_1402211b5
                
            label_140220c1b:
                zmm1 = _mm_cmpeq_epi32(zmm1, zmm3)
                zmm2 = _mm_mul_ps(zmm2, zmm6)
                
                if ((temp0_1561 & 4) != 0)
                label_1402211b5:
                    var_638:8.d = __extractps_memd_xmmps_immb(zmm4, 2)
                    zmm1 &= not.o(zmm2)
                    
                    if ((temp0_1561 & 8) != 0)
                    label_1402211cb:
                        var_638:0xc.d = __extractps_memd_xmmps_immb(zmm4, 3)
                        
                        if ((temp0_1561 & 1) == 0)
                            goto label_140220c44
                        
                        goto label_1402211dd
                else
                label_140220c2c:
                    zmm1 &= not.o(zmm2)
                    
                    if ((temp0_1561 & 8) != 0)
                        goto label_1402211cb
                
                if ((temp0_1561 & 1) == 0)
                label_140220c44:
                    zmm5 = _mm_add_ps(zmm5, zmm7)
                    
                    if ((temp0_1561 & 2) != 0)
                        goto label_1402211f0
                    
                    goto label_140220c51
                
            label_1402211dd:
                var_628[0] = zmm1.d
                zmm5 = _mm_add_ps(zmm5, zmm7)
                
                if ((temp0_1561 & 2) == 0)
                label_140220c51:
                    zmm0 = _mm_cmpeq_epi32(zmm0, zmm3)
                    zmm5 = _mm_mul_ps(zmm5, zmm6)
                    
                    if ((temp0_1561 & 4) != 0)
                        var_628[2] = __pextrd_memd_xmmdq_immb(zmm1, 2)
                else
                label_1402211f0:
                    var_628[1] = __pextrd_memd_xmmdq_immb(zmm1, 1)
                    zmm0 = _mm_cmpeq_epi32(zmm0, zmm3)
                    zmm5 = _mm_mul_ps(zmm5, zmm6)
                    
                    if ((temp0_1561 & 4) != 0)
                        var_628[2] = __pextrd_memd_xmmdq_immb(zmm1, 2)
                
                zmm4 = _mm_mul_ps(zmm4, zmm4)
                zmm2 = data_142d3f670
                zmm0 &= not.o(zmm5)
                zmm6 = var_578_3
                
                if ((temp0_1561 & 8) != 0)
                    var_628[3] = __pextrd_memd_xmmdq_immb(zmm1, 3)
                
                zmm1 = _mm_mul_ps(zmm1, zmm1)
                zmm2 = _mm_sub_ps(zmm2, zmm4)
                zmm5 = var_598_5
                
                if ((temp0_1561 & 1) != 0)
                    var_618[0] = zmm0.d
                
                zmm4 = _mm_mul_ps(zmm0, zmm0)
                zmm2 = _mm_sub_ps(zmm2, zmm1)
                
                if ((temp0_1561 & 2) == 0)
                    zmm2 = _mm_sub_ps(zmm2, zmm4)
                    
                    if ((temp0_1561 & 4) != 0)
                        goto label_140221223
                    
                    goto label_140220cc7
                
                var_618[1] = __pextrd_memd_xmmdq_immb(zmm0, 1)
                zmm2 = _mm_sub_ps(zmm2, zmm4)
                
                if ((temp0_1561 & 4) != 0)
                label_140221223:
                    var_618[2] = __pextrd_memd_xmmdq_immb(zmm0, 2)
                    zmm3 = _mm_cmpeq_ps(zmm3, zmm2, 2)
                    zmm1 = _mm_sqrt_ps(zmm2)
                    
                    if ((temp0_1561 & 8) == 0)
                        goto label_140220cd8
                    
                    goto label_14022123c
                
            label_140220cc7:
                zmm3 = _mm_cmpeq_ps(zmm3, zmm2, 2)
                zmm1 = _mm_sqrt_ps(zmm2)
                
                if ((temp0_1561 & 8) == 0)
                label_140220cd8:
                    zmm3 = _mm_and_ps(zmm3, zmm1)
                    
                    if ((temp0_1561 & 1) != 0)
                        goto label_140221251
                    
                    goto label_140220ce5
                
            label_14022123c:
                var_618[3] = __pextrd_memd_xmmdq_immb(zmm0, 3)
                zmm3 = _mm_and_ps(zmm3, zmm1)
                
                if ((temp0_1561 & 1) != 0)
                label_140221251:
                    var_608[0].d = zmm3[0]
                    
                    if ((temp0_1561 & 2) == 0)
                        goto label_140220cef
                    
                    goto label_140221261
                
            label_140220ce5:
                
                if ((temp0_1561 & 2) == 0)
                label_140220cef:
                    
                    if ((temp0_1561 & 4) != 0)
                        goto label_140221273
                    
                    goto label_140220cf9
                
            label_140221261:
                var_608[0]:4.d = __extractps_memd_xmmps_immb(zmm3, 1)
                
                if ((temp0_1561 & 4) == 0)
                label_140220cf9:
                    
                    if ((temp0_1561 & 8) != 0)
                        var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm3, 3)
                else
                label_140221273:
                    var_608[1].d = __extractps_memd_xmmps_immb(zmm3, 2)
                    
                    if ((temp0_1561 & 8) != 0)
                        var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm3, 3)
            
            zmm1 = temp0_1559
            uint128_t var_428_3 = _mm_cmpeq_epi32(zmm0, zmm0) ^ zmm1
            arg5 = var_4a8_1
            
            if (_mm_movemask_ps(_mm_slli_epi32(zmm1 & not.o(zmm11), 0x1f)) != 0)
                zmm15 = zmm12
                float var_4b8_3[0x4] = arg6
                zmm12 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, var_4d8_2)
                zmm2 = _mm_slli_epi32(zmm12 & zmm11, 0x1f)
                char temp0_1634 = _mm_movemask_ps(zmm2)
                uint128_t var_458_3 = zmm13
                float var_3d8_2[0x4] = zmm15
                
                if (temp0_1634 != 0)
                    float var_3b8_2[0x4] = zmm12
                    zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                    int32_t temp0_1636[0x4] = _mm_add_epi64(zmm9, zmm6)
                    int32_t temp0_1637[0x4] = _mm_add_epi64(arg5, zmm5)
                    zmm5 = data_1434426c0
                    int32_t temp0_1638[0x4] = _mm_add_epi64(temp0_1637, zmm15)
                    int32_t temp0_1640[0x4] = _mm_add_epi64(_mm_add_epi64(temp0_1636, zmm8), zmm5)
                    int32_t temp0_1641[0x4] = _mm_add_epi64(temp0_1638, zmm5)
                    zmm3 = _mm_shuffle_epi32(zmm2, 0x50)
                    zmm7 = _mm_blendv_ps(zx.o(0), temp0_1641, zmm3)
                    zmm4 = _mm_shuffle_epi32(zmm2, 0xfa)
                    zmm1 = _mm_blendv_ps(zx.o(0), temp0_1640, zmm4)
                    int64_t rbx_33 = zmm7[0].q
                    void* rbp_55 = arg4 + rbx_33
                    zmm2 = *(arg4 + rbx_33)
                    int64_t rbx_34 = _mm_extract_epi64(zmm7, 1)
                    void* rdi_46 = arg4 + rbx_34
                    zmm8 = *(arg4 + rbx_34)
                    int64_t rsi_45 = zmm1.q
                    void* rbx_35 = arg4 + rsi_45
                    zmm9 = *(arg4 + rsi_45)
                    int64_t rsi_46 = _mm_extract_epi64(zmm1, 1)
                    void* rcx_80 = arg4 + rsi_46
                    zmm13 = *(arg4 + rsi_46)
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm5, zmm3)
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm5, zmm4)
                    zmm5 = *(zmm1.q + rbp_55)
                    zmm6 = *(_mm_extract_epi64(zmm1, 1) + rdi_46)
                    zmm15 = *(zmm7[0].q + rbx_35)
                    int64_t rsi_50 = _mm_extract_epi64(zmm7, 1)
                    zmm1 = data_1434426e0
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm1, zmm3)
                    arg5 = *(rsi_50 + rcx_80)
                    float temp0_1649[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm4)
                    zmm0 = *(zmm7[0].q + rbp_55)
                    zmm4 = *(_mm_extract_epi64(zmm7, 1) + rdi_46)
                    float (* rbp_57)[0x4] = temp0_1649[0].q
                    float (* rdi_47)[0x4] = _mm_extract_epi64(temp0_1649, 1)
                    zmm3 = *(rbp_57 + rbx_35)
                    zmm12 = *(rdi_47 + rcx_80)
                    
                    if ((temp0_1634 & 1) == 0)
                        if ((temp0_1634 & 2) != 0)
                            goto label_140221330
                        
                        goto label_140220ee6
                    
                    var_638.d = zmm2.d
                    
                    if ((temp0_1634 & 2) != 0)
                    label_140221330:
                        var_638:4.d = zmm8[0].d
                        
                        if ((temp0_1634 & 4) == 0)
                            goto label_140220ef0
                        
                        goto label_140221341
                    
                label_140220ee6:
                    
                    if ((temp0_1634 & 4) == 0)
                    label_140220ef0:
                        
                        if ((temp0_1634 & 8) != 0)
                            goto label_140221352
                        
                        goto label_140220efa
                    
                label_140221341:
                    var_638:8.d = zmm9[0]
                    
                    if ((temp0_1634 & 8) == 0)
                    label_140220efa:
                        zmm2 = _mm_insert_ps(zmm2, zmm8, 0x10)
                        
                        if ((temp0_1634 & 1) != 0)
                            var_628[0] = zmm5[0]
                    else
                    label_140221352:
                        var_638:0xc.d = zmm13.d
                        zmm2 = _mm_insert_ps(zmm2, zmm8, 0x10)
                        
                        if ((temp0_1634 & 1) != 0)
                            var_628[0] = zmm5[0]
                    
                    zmm2 = _mm_insert_ps(zmm2, zmm9, 0x20)
                    float temp0_1652[0x4] = _mm_insert_ps(zmm5, zmm6, 0x10)
                    zmm8 = var_4c8_5
                    
                    if ((temp0_1634 & 2) != 0)
                        var_628[1] = zmm6.d
                    
                    zmm2 = _mm_insert_ps(zmm2, zmm13, 0x30)
                    float temp0_1654[0x4] = _mm_insert_ps(temp0_1652, zmm15, 0x20)
                    zmm6 = _mm_insert_ps(zmm0, zmm4, 0x10)
                    zmm9 = var_588_5
                    zmm11 = var_5b8_2
                    
                    if ((temp0_1634 & 4) != 0)
                        var_628[2] = zmm15[0]
                    
                    float temp0_1656[0x4] = _mm_insert_ps(temp0_1654, arg5, 0x30)
                    zmm6 = _mm_insert_ps(zmm6, zmm3, 0x20)
                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                    zmm7 = data_142d3f670
                    
                    if ((temp0_1634 & 8) != 0)
                        var_628[3] = arg5[0]
                    
                    zmm6 = _mm_insert_ps(zmm6, zmm12, 0x30)
                    zmm7 = _mm_sub_ps(zmm7, zmm2)
                    float temp0_1661[0x4] = _mm_mul_ps(temp0_1656, temp0_1656)
                    zmm15 = var_3d8_2
                    
                    if ((temp0_1634 & 1) != 0)
                        var_618[0] = zmm0.d
                    
                    zmm7 = _mm_sub_ps(zmm7, temp0_1661)
                    zmm6 = _mm_mul_ps(zmm6, zmm6)
                    arg5 = var_4a8_1
                    
                    if ((temp0_1634 & 2) != 0)
                        var_618[1] = zmm4[0]
                    
                    zmm7 = _mm_sub_ps(zmm7, zmm6)
                    zmm5 = var_598_5
                    
                    if ((temp0_1634 & 4) != 0)
                        var_618[2] = zmm3[0]
                    
                    float temp0_1665[0x4] = _mm_cmpeq_ps(zx.o(0), zmm7, 1)
                    zmm0 = _mm_sqrt_ps(zmm7)
                    zmm6 = var_578_3
                    
                    if ((temp0_1634 & 8) == 0)
                        arg6 = _mm_and_ps(temp0_1665, zmm0)
                        zmm13 = var_458_3
                        
                        if ((temp0_1634 & 1) != 0)
                            goto label_14022138e
                        
                        goto label_140221019
                    
                    var_618[3] = zmm12[0]
                    arg6 = _mm_and_ps(temp0_1665, zmm0)
                    zmm13 = var_458_3
                    
                    if ((temp0_1634 & 1) != 0)
                    label_14022138e:
                        var_608[0].d = arg6[0]
                        zmm12 = var_3b8_2
                        
                        if ((temp0_1634 & 2) == 0)
                            goto label_140221029
                        
                        goto label_1402213a9
                    
                label_140221019:
                    zmm12 = var_3b8_2
                    
                    if ((temp0_1634 & 2) == 0)
                    label_140221029:
                        
                        if ((temp0_1634 & 4) != 0)
                            goto label_1402213bc
                        
                        goto label_140221033
                    
                label_1402213a9:
                    var_608[0]:4.d = __extractps_memd_xmmps_immb(arg6, 1)
                    
                    if ((temp0_1634 & 4) == 0)
                    label_140221033:
                        
                        if ((temp0_1634 & 8) != 0)
                            var_608[1]:4.d = __extractps_memd_xmmps_immb(arg6, 3)
                    else
                    label_1402213bc:
                        var_608[1].d = __extractps_memd_xmmps_immb(arg6, 2)
                        
                        if ((temp0_1634 & 8) != 0)
                            var_608[1]:4.d = __extractps_memd_xmmps_immb(arg6, 3)
                
                zmm12 ^= var_428_3
                arg6 = var_4b8_3
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm12 & zmm11, 0x1f)) != 0)
                    if (temp0_1301 != 0)
                        zmm5 = _mm_srai_epi32(_mm_slli_epi32(var_468_4, 0x1f), 0x1f) & temp0_1292
                        zmm7 = temp0_1267 & zmm5
                        zmm15 = zx.o(0)
                        uint32_t temp0_1673 = _mm_movemask_ps(zmm7)
                        arg6 = var_488_1
                        zmm8 = var_5a8_2
                        arg5 = zx.o(0)
                        zmm13 = zx.o(0)
                        
                        if (temp0_1673 != 0)
                            zmm4 = data_1434426c0
                            zmm3 = var_5a8_2
                            zmm6 = _mm_add_epi64(zmm3, zmm4)
                            zmm2 = var_488_1
                            zmm1 = _mm_add_epi64(zmm2, zmm4)
                            zmm8 = _mm_unpacklo_ps(zmm7, zmm7[0].q)
                            zmm9 = _mm_blendv_ps(zmm2, zmm1, zmm8)
                            zmm7 = _mm_unpackhi_ps(zmm7, zmm7)
                            zmm0 = zmm7
                            zmm1 = _mm_blendv_ps(zmm3, zmm6, zmm0)
                            char rbp_59 = temp0_1673.b
                            
                            if ((rbp_59 & 1) == 0)
                                if ((rbp_59 & 2) != 0)
                                    goto label_1402213ee
                                
                                goto label_140221133
                            
                            zmm0 = *zmm2.q
                            
                            if ((rbp_59 & 2) != 0)
                            label_1402213ee:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm2, 1), 0x10)
                                
                                if ((rbp_59 & 4) == 0)
                                    goto label_14022113d
                                
                                goto label_14022140c
                            
                        label_140221133:
                            
                            if ((rbp_59 & 4) == 0)
                            label_14022113d:
                                
                                if ((rbp_59 & 8) != 0)
                                    goto label_14022142c
                                
                                goto label_140221147
                            
                        label_14022140c:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_2.q, 0x20)
                            char rbx_36
                            
                            if ((rbp_59 & 8) != 0)
                            label_14022142c:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_2, 1), 0x30)
                                rbx_36 = _mm_movemask_ps(zmm5)
                                arg5 = zx.o(0)
                                
                                if ((rbx_36 & 1) != 0)
                                    goto label_140221158
                                
                                goto label_140221443
                            
                        label_140221147:
                            rbx_36 = _mm_movemask_ps(zmm5)
                            arg5 = zx.o(0)
                            
                            if ((rbx_36 & 1) != 0)
                            label_140221158:
                                arg5 = _mm_blend_epi16(arg5, zmm0, 3)
                                
                                if ((rbx_36 & 2) != 0)
                                    goto label_14022144c
                                
                                goto label_140221168
                            
                        label_140221443:
                            
                            if ((rbx_36 & 2) != 0)
                            label_14022144c:
                                arg5 = _mm_blend_epi16(arg5, zmm0, 0xc)
                                
                                if ((rbx_36 & 4) != 0)
                                    goto label_140221171
                                
                                goto label_14022145c
                            
                        label_140221168:
                            
                            if ((rbx_36 & 4) == 0)
                            label_14022145c:
                                
                                if ((rbx_36 & 8) != 0)
                                    arg5 = _mm_blend_epi16(arg5, zmm0, 0xc0)
                            else
                            label_140221171:
                                arg5 = _mm_blend_epi16(arg5, zmm0, 0x30)
                                
                                if ((rbx_36 & 8) != 0)
                                    arg5 = _mm_blend_epi16(arg5, zmm0, 0xc0)
                            
                            zmm5 = _mm_add_epi64(zmm1, zmm4)
                            arg6 = _mm_blendv_ps(zmm9, _mm_add_epi64(zmm4, zmm9), zmm8)
                            zmm0 = zmm7
                            zmm8 = _mm_blendv_ps(zmm1, zmm5, zmm0)
                            
                            if ((rbp_59 & 1) == 0)
                                if ((rbp_59 & 2) != 0)
                                    goto label_1402214e6
                                
                                goto label_14022149b
                            
                            zmm0 = *zmm9[0].q
                            
                            if ((rbp_59 & 2) != 0)
                            label_1402214e6:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm9, 1), 0x10)
                                
                                if ((rbp_59 & 4) == 0)
                                    goto label_1402214a1
                                
                                goto label_1402214f7
                            
                        label_14022149b:
                            
                            if ((rbp_59 & 4) == 0)
                            label_1402214a1:
                                
                                if ((rbp_59 & 8) != 0)
                                    goto label_14022150a
                                
                                goto label_1402214a7
                            
                        label_1402214f7:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm1.q, 0x20)
                            
                            if ((rbp_59 & 8) != 0)
                            label_14022150a:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm1, 1), 0x30)
                                zmm13 = zx.o(0)
                                
                                if ((rbx_36 & 1) != 0)
                                    goto label_1402214b1
                                
                                goto label_14022151a
                            
                        label_1402214a7:
                            zmm13 = zx.o(0)
                            
                            if ((rbx_36 & 1) != 0)
                            label_1402214b1:
                                zmm13 = _mm_blend_epi16(zmm13, zmm0, 3)
                                
                                if ((rbx_36 & 2) != 0)
                                    goto label_14022151f
                                
                                goto label_1402214bd
                            
                        label_14022151a:
                            
                            if ((rbx_36 & 2) != 0)
                            label_14022151f:
                                zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc)
                                
                                if ((rbx_36 & 4) != 0)
                                    goto label_1402214c2
                                
                                goto label_14022152b
                            
                        label_1402214bd:
                            
                            if ((rbx_36 & 4) == 0)
                            label_14022152b:
                                
                                if ((rbx_36 & 8) != 0)
                                    zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc0)
                            else
                            label_1402214c2:
                                zmm13 = _mm_blend_epi16(zmm13, zmm0, 0x30)
                                
                                if ((rbx_36 & 8) != 0)
                                    zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc0)
                        
                        zmm0 = data_143442c40
                        zmm5 = _mm_cmpeq_epi32(var_478_1 & zmm0, zmm0) & temp0_1292
                        zmm1 = _mm_slli_epi32(zmm5 & zmm11, 0x1f)
                        char temp0_1729 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_1729 == 0)
                            zmm3 = zx.o(0)
                        else
                            zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                            zmm2 = data_1434426c0
                            zmm6 = _mm_add_epi64(zmm8, zmm2)
                            zmm3 = _mm_add_epi64(arg6, zmm2)
                            int32_t temp0_1733[0x4] = _mm_shuffle_epi32(zmm1, 0x50)
                            zmm7 = _mm_blendv_ps(arg6, zmm3, temp0_1733)
                            zmm3 = _mm_shuffle_epi32(zmm1, 0xfa)
                            zmm0 = zmm3
                            zmm1 = _mm_blendv_ps(zmm8, zmm6, zmm0)
                            
                            if ((temp0_1729 & 1) == 0)
                                if ((temp0_1729 & 2) != 0)
                                    goto label_14022161b
                                
                                goto label_1402215c4
                            
                            zmm0 = *arg6[0].q
                            
                            if ((temp0_1729 & 2) != 0)
                            label_14022161b:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg6, 1), 0x10)
                                
                                if ((temp0_1729 & 4) == 0)
                                    goto label_1402215ca
                                
                                goto label_14022162c
                            
                        label_1402215c4:
                            
                            if ((temp0_1729 & 4) == 0)
                            label_1402215ca:
                                
                                if ((temp0_1729 & 8) != 0)
                                    goto label_14022163f
                                
                                goto label_1402215d0
                            
                        label_14022162c:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm8[0], 0x20)
                            char rbx_49
                            
                            if ((temp0_1729 & 8) != 0)
                            label_14022163f:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm8, 1), 0x30)
                                rbx_49 = _mm_movemask_ps(zmm5)
                                zmm15 = zx.o(0)
                                
                                if ((rbx_49 & 1) != 0)
                                    goto label_1402215dd
                                
                                goto label_140221652
                            
                        label_1402215d0:
                            rbx_49 = _mm_movemask_ps(zmm5)
                            zmm15 = zx.o(0)
                            
                            if ((rbx_49 & 1) != 0)
                            label_1402215dd:
                                zmm15 = _mm_blend_epi16(zmm15, zmm0, 3)
                                
                                if ((rbx_49 & 2) != 0)
                                    goto label_140221657
                                
                                goto label_1402215e9
                            
                        label_140221652:
                            
                            if ((rbx_49 & 2) != 0)
                            label_140221657:
                                zmm15 = _mm_blend_epi16(zmm15, zmm0, 0xc)
                                
                                if ((rbx_49 & 4) != 0)
                                    goto label_1402215ee
                                
                                goto label_140221663
                            
                        label_1402215e9:
                            
                            if ((rbx_49 & 4) == 0)
                            label_140221663:
                                
                                if ((rbx_49 & 8) != 0)
                                    zmm15 = _mm_blend_epi16(zmm15, zmm0, 0xc0)
                            else
                            label_1402215ee:
                                zmm15 = _mm_blend_epi16(zmm15, zmm0, 0x30)
                                
                                if ((rbx_49 & 8) != 0)
                                    zmm15 = _mm_blend_epi16(zmm15, zmm0, 0xc0)
                            
                            zmm5 = _mm_add_epi64(zmm1, zmm2)
                            arg6 = _mm_blendv_ps(zmm7, _mm_add_epi64(zmm2, zmm7), temp0_1733)
                            zmm0 = zmm3
                            zmm8 = _mm_blendv_ps(zmm1, zmm5, zmm0)
                            
                            if ((temp0_1729 & 1) == 0)
                                zmm11 = var_5b8_2
                                
                                if ((temp0_1729 & 2) != 0)
                                    goto label_1402216fd
                                
                                goto label_1402216ac
                            
                            zmm0 = *zmm7[0].q
                            zmm11 = var_5b8_2
                            
                            if ((temp0_1729 & 2) != 0)
                            label_1402216fd:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm7, 1), 0x10)
                                
                                if ((temp0_1729 & 4) == 0)
                                    goto label_1402216b2
                                
                                goto label_14022170e
                            
                        label_1402216ac:
                            
                            if ((temp0_1729 & 4) == 0)
                            label_1402216b2:
                                
                                if ((temp0_1729 & 8) != 0)
                                    goto label_140221721
                                
                                goto label_1402216b8
                            
                        label_14022170e:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm1.q, 0x20)
                            
                            if ((temp0_1729 & 8) != 0)
                            label_140221721:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm1, 1), 0x30)
                                zmm3 = zx.o(0)
                                
                                if ((rbx_49 & 1) != 0)
                                    goto label_1402216c1
                                
                                goto label_140221730
                            
                        label_1402216b8:
                            zmm3 = zx.o(0)
                            
                            if ((rbx_49 & 1) != 0)
                            label_1402216c1:
                                zmm3 = _mm_blend_epi16(zmm3, zmm0, 3)
                                
                                if ((rbx_49 & 2) != 0)
                                    goto label_140221735
                                
                                goto label_1402216cc
                            
                        label_140221730:
                            
                            if ((rbx_49 & 2) != 0)
                            label_140221735:
                                zmm3 = _mm_blend_epi16(zmm3, zmm0, 0xc)
                                
                                if ((rbx_49 & 4) != 0)
                                    goto label_1402216d1
                                
                                goto label_140221740
                            
                        label_1402216cc:
                            
                            if ((rbx_49 & 4) == 0)
                            label_140221740:
                                
                                if ((rbx_49 & 8) != 0)
                                    zmm3 = _mm_blend_epi16(zmm3, zmm0, 0xc0)
                            else
                            label_1402216d1:
                                zmm3 = _mm_blend_epi16(zmm3, zmm0, 0x30)
                                
                                if ((rbx_49 & 8) != 0)
                                    zmm3 = _mm_blend_epi16(zmm3, zmm0, 0xc0)
                        
                        zmm0 = data_143442c50
                        zmm5 = _mm_cmpeq_epi32(var_478_1 & zmm0, zmm0) & temp0_1292
                        zmm6 = _mm_slli_epi32(zmm5 & zmm11, 0x1f)
                        char temp0_1759 = _mm_movemask_ps(zmm6)
                        zmm2 = zx.o(0)
                        zmm9 = zx.o(0)
                        zmm1 = zx.o(0)
                        
                        if (temp0_1759 != 0)
                            zmm6 = _mm_srai_epi32(zmm6, 0x1f)
                            zmm1 = data_1434426c0
                            int32_t temp0_1761[0x4] = _mm_add_epi64(zmm8, zmm1)
                            zmm7 = _mm_blendv_ps(arg6, _mm_add_epi64(zmm1, arg6), 
                                _mm_shuffle_epi32(zmm6, 0x50))
                            zmm0 = _mm_shuffle_epi32(zmm6, 0xfa)
                            zmm1 = _mm_blendv_ps(zmm8, temp0_1761, zmm0)
                            
                            if ((temp0_1759 & 1) == 0)
                                if ((temp0_1759 & 2) != 0)
                                    goto label_14022189d
                                
                                goto label_1402217db
                            
                            zmm0 = *arg6[0].q
                            
                            if ((temp0_1759 & 2) != 0)
                            label_14022189d:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg6, 1), 0x10)
                                
                                if ((temp0_1759 & 4) == 0)
                                    goto label_1402217e3
                                
                                goto label_1402218b0
                            
                        label_1402217db:
                            
                            if ((temp0_1759 & 4) == 0)
                            label_1402217e3:
                                
                                if ((temp0_1759 & 8) != 0)
                                    goto label_1402218c5
                                
                                goto label_1402217eb
                            
                        label_1402218b0:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm8[0], 0x20)
                            char rbp_61
                            
                            if ((temp0_1759 & 8) != 0)
                            label_1402218c5:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm8, 1), 0x30)
                                rbp_61 = _mm_movemask_ps(zmm5)
                                zmm9 = zx.o(0)
                                
                                if ((rbp_61 & 1) != 0)
                                    goto label_1402217fd
                                
                                goto label_1402218dd
                            
                        label_1402217eb:
                            rbp_61 = _mm_movemask_ps(zmm5)
                            zmm9 = zx.o(0)
                            
                            if ((rbp_61 & 1) != 0)
                            label_1402217fd:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 3)
                                
                                if ((rbp_61 & 2) != 0)
                                    goto label_1402218e7
                                
                                goto label_14022180e
                            
                        label_1402218dd:
                            
                            if ((rbp_61 & 2) != 0)
                            label_1402218e7:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc)
                                
                                if ((rbp_61 & 4) != 0)
                                    goto label_140221818
                                
                                goto label_1402218f8
                            
                        label_14022180e:
                            
                            if ((rbp_61 & 4) != 0)
                            label_140221818:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0x30)
                                
                                if ((rbp_61 & 8) != 0)
                                    goto label_140221902
                                
                                goto label_140221829
                            
                        label_1402218f8:
                            
                            if ((rbp_61 & 8) != 0)
                            label_140221902:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                                
                                if ((temp0_1759 & 1) == 0)
                                    goto label_140221831
                                
                                goto label_140221916
                            
                        label_140221829:
                            
                            if ((temp0_1759 & 1) == 0)
                            label_140221831:
                                
                                if ((temp0_1759 & 2) != 0)
                                    goto label_140221929
                                
                                goto label_140221839
                            
                        label_140221916:
                            zmm0 = *zmm7[0].q
                            
                            if ((temp0_1759 & 2) != 0)
                            label_140221929:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm7, 1), 0x10)
                                
                                if ((temp0_1759 & 4) == 0)
                                    goto label_140221841
                                
                                goto label_14022193c
                            
                        label_140221839:
                            
                            if ((temp0_1759 & 4) == 0)
                            label_140221841:
                                
                                if ((temp0_1759 & 8) != 0)
                                    goto label_140221951
                                
                                goto label_140221849
                            
                        label_14022193c:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm1.q, 0x20)
                            
                            if ((temp0_1759 & 8) != 0)
                            label_140221951:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm1, 1), 0x30)
                                zmm1 = zx.o(0)
                                
                                if ((rbp_61 & 1) != 0)
                                    goto label_140221856
                                
                                goto label_140221964
                            
                        label_140221849:
                            zmm1 = zx.o(0)
                            
                            if ((rbp_61 & 1) != 0)
                            label_140221856:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 1)
                                
                                if ((rbp_61 & 2) != 0)
                                    goto label_14022196e
                                
                                goto label_140221866
                            
                        label_140221964:
                            
                            if ((rbp_61 & 2) != 0)
                            label_14022196e:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                                
                                if ((rbp_61 & 4) != 0)
                                    goto label_140221870
                                
                                goto label_14022197e
                            
                        label_140221866:
                            
                            if ((rbp_61 & 4) == 0)
                            label_14022197e:
                                
                                if ((rbp_61 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                            label_140221870:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 4)
                                
                                if ((rbp_61 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                        
                        int32_t temp0_1783[0x4] = __paddq_xmmdq_memdq(var_588_5, var_578_3)
                        zmm5 = __paddq_xmmdq_memdq(var_4a8_1, var_598_5)
                        zmm0 = data_1434426c0
                        zmm5 = __paddq_xmmdq_memdq(zmm5, var_3d8_2)
                        zmm8 = var_4c8_5
                        int32_t temp0_1787[0x4] =
                            _mm_add_epi64(_mm_add_epi64(temp0_1783, zmm8), zmm0)
                        zmm7 = var_418_3
                        zmm6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm5, zmm0), 
                            _mm_shuffle_epi32(zmm7, 0x50))
                        float temp0_1792[0x4] =
                            _mm_blendv_ps(zx.o(0), temp0_1787, _mm_shuffle_epi32(zmm7, 0xfa))
                        int64_t rcx_88 = _mm_extract_epi64(zmm6, 1)
                        int64_t rbp_62 = _mm_extract_epi64(temp0_1792, 1)
                        zmm0 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm6.q)), *(arg4 + rcx_88), 
                                    1), 
                                *(arg4 + temp0_1792[0].q), 2), 
                            *(arg4 + rbp_62), 3)
                        zmm6 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm4 = _mm_srli_epi32(zmm0, 0x15)
                        zmm7 = data_143442440
                        zmm4 = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm7))
                        zmm5 = data_143442690
                        arg5 = _mm_add_ps(arg5, _mm_mul_ps(zmm13, _mm_div_ps(zmm4, zmm5)))
                        zmm4 = _mm_cvtepi32_ps(_mm_add_epi32(zmm6, zmm7))
                        
                        if ((temp0_1301 & 1) != 0)
                            var_638.d = arg5[0]
                        
                        zmm4 = _mm_div_ps(zmm4, zmm5)
                        zmm13 = var_458_3
                        
                        if ((temp0_1301 & 2) != 0)
                            var_638:4.d = __extractps_memd_xmmps_immb(arg5, 1)
                        
                        zmm0 &= data_143442680
                        float temp0_1807[0x4] = _mm_mul_ps(zmm3, zmm4)
                        arg6 = var_4b8_3
                        zmm5 = var_598_5
                        zmm6 = var_578_3
                        
                        if ((temp0_1301 & 4) == 0)
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            zmm15 = _mm_add_ps(zmm15, temp0_1807)
                            
                            if ((temp0_1301 & 8) != 0)
                                goto label_140222b36
                            
                            goto label_140221adf
                        
                        var_638:8.d = __extractps_memd_xmmps_immb(arg5, 2)
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                        zmm15 = _mm_add_ps(zmm15, temp0_1807)
                        
                        if ((temp0_1301 & 8) != 0)
                        label_140222b36:
                            var_638:0xc.d = __extractps_memd_xmmps_immb(arg5, 3)
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            
                            if ((temp0_1301 & 1) == 0)
                                goto label_140221aeb
                            
                            goto label_140222b4b
                        
                    label_140221adf:
                        zmm0 = _mm_cvtepi32_ps(zmm0)
                        
                        if ((temp0_1301 & 1) == 0)
                        label_140221aeb:
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_1301 & 2) != 0)
                                goto label_140222b62
                            
                            goto label_140221afb
                        
                    label_140222b4b:
                        var_628[0] = zmm15[0]
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                        
                        if ((temp0_1301 & 2) == 0)
                        label_140221afb:
                            zmm1 = _mm_mul_ps(zmm1, zmm0)
                            
                            if ((temp0_1301 & 4) != 0)
                                var_628[2] = __extractps_memd_xmmps_immb(zmm15, 2)
                        else
                        label_140222b62:
                            var_628[1] = __extractps_memd_xmmps_immb(zmm15, 1)
                            zmm1 = _mm_mul_ps(zmm1, zmm0)
                            
                            if ((temp0_1301 & 4) != 0)
                                var_628[2] = __extractps_memd_xmmps_immb(zmm15, 2)
                        
                        arg5 = _mm_mul_ps(arg5, arg5)
                        zmm0 = data_142d3f670
                        zmm9 = _mm_add_ps(zmm9, zmm1)
                        
                        if ((temp0_1301 & 8) != 0)
                            var_628[3] = __extractps_memd_xmmps_immb(zmm15, 3)
                        
                        zmm0 = _mm_sub_ps(zmm0, arg5)
                        float temp0_1818[0x4] = _mm_mul_ps(zmm15, zmm15)
                        
                        if ((temp0_1301 & 1) != 0)
                            var_618[0] = zmm9[0]
                        
                        zmm0 = _mm_sub_ps(zmm0, temp0_1818)
                        zmm1 = _mm_mul_ps(zmm9, zmm9)
                        arg5 = var_4a8_1
                        
                        if ((temp0_1301 & 2) == 0)
                            zmm0 = _mm_sub_ps(zmm0, zmm1)
                            zmm15 = var_3d8_2
                            
                            if ((temp0_1301 & 4) != 0)
                                goto label_140222b9b
                            
                            goto label_140221b72
                        
                        var_618[1] = __extractps_memd_xmmps_immb(zmm9, 1)
                        zmm0 = _mm_sub_ps(zmm0, zmm1)
                        zmm15 = var_3d8_2
                        
                        if ((temp0_1301 & 4) != 0)
                        label_140222b9b:
                            var_618[2] = __extractps_memd_xmmps_immb(zmm9, 2)
                            zmm2 = _mm_cmpeq_ps(zmm2, zmm0, 1)
                            zmm0 = _mm_sqrt_ps(zmm0)
                            
                            if ((temp0_1301 & 8) == 0)
                                goto label_140221b82
                            
                            goto label_140222bb4
                        
                    label_140221b72:
                        zmm2 = _mm_cmpeq_ps(zmm2, zmm0, 1)
                        zmm0 = _mm_sqrt_ps(zmm0)
                        
                        if ((temp0_1301 & 8) == 0)
                        label_140221b82:
                            zmm2 = _mm_and_ps(zmm2, zmm0)
                            
                            if ((temp0_1301 & 1) != 0)
                                goto label_140222bc9
                            
                            goto label_140221b91
                        
                    label_140222bb4:
                        var_618[3] = __extractps_memd_xmmps_immb(zmm9, 3)
                        zmm2 = _mm_and_ps(zmm2, zmm0)
                        
                        if ((temp0_1301 & 1) != 0)
                        label_140222bc9:
                            var_608[0].d = zmm2.d
                            zmm9 = var_588_5
                            zmm11 = var_5b8_2
                            
                            if ((temp0_1301 & 2) == 0)
                                goto label_140221baa
                            
                            goto label_140222beb
                        
                    label_140221b91:
                        zmm9 = var_588_5
                        zmm11 = var_5b8_2
                        
                        if ((temp0_1301 & 2) == 0)
                        label_140221baa:
                            
                            if ((temp0_1301 & 4) != 0)
                                goto label_140222bfc
                            
                            goto label_140221bb3
                        
                    label_140222beb:
                        var_608[0]:4.d = __extractps_memd_xmmps_immb(zmm2, 1)
                        
                        if ((temp0_1301 & 4) == 0)
                        label_140221bb3:
                            
                            if ((temp0_1301 & 8) != 0)
                                var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm2, 3)
                        else
                        label_140222bfc:
                            var_608[1].d = __extractps_memd_xmmps_immb(zmm2, 2)
                            
                            if ((temp0_1301 & 8) != 0)
                                var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm2, 3)
                    
                    zmm12 ^= temp0_1292
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm12 & zmm11, 0x1f)) != 0)
                        zmm1 = __pcmpeqd_xmmdq_memdq(data_143442ac0, var_4d8_2)
                        zmm2 = _mm_slli_epi32(zmm1 & zmm11, 0x1f)
                        char temp0_1830 = _mm_movemask_ps(zmm2)
                        
                        if (temp0_1830 != 0)
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            int32_t temp0_1832[0x4] = _mm_add_epi64(zmm9, zmm6)
                            int32_t temp0_1833[0x4] = _mm_add_epi64(arg5, zmm5)
                            zmm0 = data_1434426c0
                            int32_t temp0_1834[0x4] = _mm_add_epi64(temp0_1833, zmm15)
                            int32_t temp0_1836[0x4] =
                                _mm_add_epi64(_mm_add_epi64(temp0_1832, zmm8), zmm0)
                            float temp0_1839[0x4] = _mm_blendv_ps(zx.o(0), 
                                _mm_add_epi64(temp0_1834, zmm0), _mm_shuffle_epi32(zmm2, 0x50))
                            zmm2 = _mm_blendv_ps(zx.o(0), temp0_1836, _mm_shuffle_epi32(zmm2, 0xfa))
                            int64_t rcx_89 = temp0_1839[0].q
                            int64_t rdx_6 = _mm_extract_epi64(temp0_1839, 1)
                            int64_t rbx_51 = _mm_extract_epi64(zmm2, 1)
                            zmm2 = __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_89)), 
                                        *(arg4 + rdx_6), 1), 
                                    *(arg4 + zmm2.q), 2), 
                                *(arg4 + rbx_51), 3)
                            zmm3 = _mm_srli_epi32(zmm2, 0x15)
                            zmm4 = _mm_srli_epi32(zmm2, 5)
                            zmm9 = data_143442600
                            zmm6 = data_143442610
                            zmm5 = data_143442320
                            zmm8 = data_143442330
                            zmm3 = _mm_add_epi32(zmm3 & zmm5, zmm8) | (zmm3 & zmm6) | (zmm4 & zmm9)
                            
                            if ((temp0_1830 & 1) != 0)
                                var_638.d = zmm3[0]
                            
                            zmm7 = _mm_srli_epi32(zmm2, 0xa)
                            zmm4 = _mm_slli_epi32(zmm2, 6)
                            
                            if ((temp0_1830 & 2) != 0)
                                var_638:4.d = __pextrd_memd_xmmdq_immb(zmm3, 1)
                            
                            if ((temp0_1830 & 4) != 0)
                                var_638:8.d = __pextrd_memd_xmmdq_immb(zmm3, 2)
                            
                            zmm5 = _mm_add_epi32(zmm5 & zmm7, zmm8)
                            zmm4 = (zmm4 & zmm9) | (zmm6 & zmm7)
                            zmm9 = var_588_5
                            zmm11 = var_5b8_2
                            
                            if ((temp0_1830 & 8) == 0)
                                zmm4 |= zmm5
                                zmm8 = var_4c8_5
                                
                                if ((temp0_1830 & 1) != 0)
                                    goto label_140222ddc
                                
                                goto label_140221d6f
                            
                            var_638:0xc.d = __pextrd_memd_xmmdq_immb(zmm3, 3)
                            zmm4 |= zmm5
                            zmm8 = var_4c8_5
                            
                            if ((temp0_1830 & 1) == 0)
                            label_140221d6f:
                                zmm6 = data_143442620 & zmm2
                                
                                if ((temp0_1830 & 2) != 0)
                                    var_628[1] = __pextrd_memd_xmmdq_immb(zmm4, 1)
                            else
                            label_140222ddc:
                                var_628[0] = zmm4[0]
                                zmm6 = data_143442620 & zmm2
                                
                                if ((temp0_1830 & 2) != 0)
                                    var_628[1] = __pextrd_memd_xmmdq_immb(zmm4, 1)
                            
                            zmm5 = zmm2
                            zmm2 &= data_143442640
                            zmm5 = _mm_slli_epi32(zmm5, 0x11)
                            zmm6 = __paddd_xmmdq_memdq(zmm6, data_1434423a0)
                            
                            if ((temp0_1830 & 4) != 0)
                                var_628[2] = __pextrd_memd_xmmdq_immb(zmm4, 2)
                            
                            zmm5 &= data_143442630
                            zmm2 |= zmm6
                            float temp0_1857[0x4] = _mm_mul_ps(zmm3, zmm3)
                            zmm6 = data_142d3f670
                            
                            if ((temp0_1830 & 8) != 0)
                                var_628[3] = __pextrd_memd_xmmdq_immb(zmm4, 3)
                            
                            zmm5 |= zmm2
                            zmm6 = _mm_sub_ps(zmm6, temp0_1857)
                            zmm4 = _mm_mul_ps(zmm4, zmm4)
                            
                            if ((temp0_1830 & 1) != 0)
                                var_618[0] = zmm5[0]
                            
                            zmm6 = _mm_sub_ps(zmm6, zmm4)
                            zmm2 = _mm_mul_ps(zmm5, zmm5)
                            
                            if ((temp0_1830 & 2) == 0)
                                zmm6 = _mm_sub_ps(zmm6, zmm2)
                                
                                if ((temp0_1830 & 4) != 0)
                                    goto label_140222e10
                                
                                goto label_140221dfd
                            
                            var_618[1] = __pextrd_memd_xmmdq_immb(zmm5, 1)
                            zmm6 = _mm_sub_ps(zmm6, zmm2)
                            
                            if ((temp0_1830 & 4) != 0)
                            label_140222e10:
                                var_618[2] = __pextrd_memd_xmmdq_immb(zmm5, 2)
                                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                                zmm2 = _mm_sqrt_ps(zmm6)
                                
                                if ((temp0_1830 & 8) == 0)
                                    goto label_140221e0d
                                
                                goto label_140222e28
                            
                        label_140221dfd:
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                            zmm2 = _mm_sqrt_ps(zmm6)
                            
                            if ((temp0_1830 & 8) == 0)
                            label_140221e0d:
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                zmm6 = var_578_3
                                
                                if ((temp0_1830 & 1) != 0)
                                    goto label_140222e45
                                
                                goto label_140221e25
                            
                        label_140222e28:
                            var_618[3] = __pextrd_memd_xmmdq_immb(zmm5, 3)
                            zmm0 = _mm_and_ps(zmm0, zmm2)
                            zmm6 = var_578_3
                            
                            if ((temp0_1830 & 1) != 0)
                            label_140222e45:
                                var_608[0].d = zmm0.d
                                zmm5 = var_598_5
                                
                                if ((temp0_1830 & 2) == 0)
                                    goto label_140221e34
                                
                                goto label_140222e5d
                            
                        label_140221e25:
                            zmm5 = var_598_5
                            
                            if ((temp0_1830 & 2) == 0)
                            label_140221e34:
                                
                                if ((temp0_1830 & 4) != 0)
                                    goto label_140222e6e
                                
                                goto label_140221e3d
                            
                        label_140222e5d:
                            var_608[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_1830 & 4) == 0)
                            label_140221e3d:
                                
                                if ((temp0_1830 & 8) != 0)
                                    var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_140222e6e:
                                var_608[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
                                
                                if ((temp0_1830 & 8) != 0)
                                    var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                        
                        zmm12 = (zmm12 ^ zmm1) & zmm11
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(zmm12, 0x1f)) != 0)
                            zmm1 = __pcmpeqd_xmmdq_memdq(data_142fc95e0, var_4d8_2)
                            zmm2 = _mm_slli_epi32(zmm12 & zmm1, 0x1f)
                            char temp0_1872 = _mm_movemask_ps(zmm2)
                            
                            if (temp0_1872 != 0)
                                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                zmm3 = _mm_add_epi64(zmm9, zmm6)
                                int32_t temp0_1875[0x4] = _mm_add_epi64(arg5, zmm5)
                                zmm0 = data_1434426c0
                                int32_t temp0_1876[0x4] = _mm_add_epi64(temp0_1875, zmm15)
                                zmm3 = _mm_add_epi64(_mm_add_epi64(zmm3, zmm8), zmm0)
                                float temp0_1881[0x4] = _mm_blendv_ps(zx.o(0), 
                                    _mm_add_epi64(temp0_1876, zmm0), _mm_shuffle_epi32(zmm2, 0x50))
                                zmm2 = _mm_blendv_ps(zx.o(0), zmm3, _mm_shuffle_epi32(zmm2, 0xfa))
                                int64_t rcx_90 = temp0_1881[0].q
                                int64_t rdx_8 = _mm_extract_epi64(temp0_1881, 1)
                                int64_t rbp_64 = _mm_extract_epi64(zmm2, 1)
                                zmm3 = __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(
                                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_90)), 
                                            *(arg4 + rdx_8), 1), 
                                        *(arg4 + zmm2.q), 2), 
                                    *(arg4 + rbp_64), 3)
                                zmm4 = _mm_srli_epi32(zmm3, 0xa) & data_143442480
                                zmm2 = _mm_srli_epi32(zmm3, 0x15)
                                zmm6 = data_143442440
                                zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm6))
                                zmm5 = data_143442690
                                zmm2 = _mm_div_ps(zmm2, zmm5)
                                
                                if ((temp0_1872 & 1) == 0)
                                    zmm4 = _mm_add_epi32(zmm4, zmm6)
                                    
                                    if ((temp0_1872 & 2) != 0)
                                        goto label_140222ea4
                                    
                                    goto label_140221f64
                                
                                var_638.d = zmm2.d
                                zmm4 = _mm_add_epi32(zmm4, zmm6)
                                
                                if ((temp0_1872 & 2) != 0)
                                label_140222ea4:
                                    var_638:4.d = __extractps_memd_xmmps_immb(zmm2, 1)
                                    zmm4 = _mm_cvtepi32_ps(zmm4)
                                    zmm6 = var_578_3
                                    
                                    if ((temp0_1872 & 4) == 0)
                                        goto label_140221f78
                                    
                                    goto label_140222ec0
                                
                            label_140221f64:
                                zmm4 = _mm_cvtepi32_ps(zmm4)
                                zmm6 = var_578_3
                                
                                if ((temp0_1872 & 4) == 0)
                                label_140221f78:
                                    zmm4 = _mm_div_ps(zmm4, zmm5)
                                    
                                    if ((temp0_1872 & 8) != 0)
                                        goto label_140222ed3
                                    
                                    goto label_140221f83
                                
                            label_140222ec0:
                                var_638:8.d = __extractps_memd_xmmps_immb(zmm2, 2)
                                zmm4 = _mm_div_ps(zmm4, zmm5)
                                
                                if ((temp0_1872 & 8) != 0)
                                label_140222ed3:
                                    var_638:0xc.d = __extractps_memd_xmmps_immb(zmm2, 3)
                                    zmm3 &= data_143442680
                                    
                                    if ((temp0_1872 & 1) == 0)
                                        goto label_140221f93
                                    
                                    goto label_140222eeb
                                
                            label_140221f83:
                                zmm3 &= data_143442680
                                
                                if ((temp0_1872 & 1) == 0)
                                label_140221f93:
                                    zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442490)
                                    
                                    if ((temp0_1872 & 2) != 0)
                                        goto label_140222f01
                                    
                                    goto label_140221fa3
                                
                            label_140222eeb:
                                var_628[0] = zmm4[0]
                                zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442490)
                                
                                if ((temp0_1872 & 2) == 0)
                                label_140221fa3:
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_1872 & 4) != 0)
                                        var_628[2] = __extractps_memd_xmmps_immb(zmm4, 2)
                                else
                                label_140222f01:
                                    var_628[1] = __extractps_memd_xmmps_immb(zmm4, 1)
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_1872 & 4) != 0)
                                        var_628[2] = __extractps_memd_xmmps_immb(zmm4, 2)
                                
                                zmm2 = _mm_mul_ps(zmm2, zmm2)
                                zmm5 = data_142d3f670
                                float temp0_1899[0x4] = __divps_xmmps_memps(zmm3, data_1434426a0)
                                
                                if ((temp0_1872 & 8) != 0)
                                    var_628[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                                
                                float temp0_1901[0x4] = _mm_sub_ps(zmm5, zmm2)
                                zmm4 = _mm_mul_ps(zmm4, zmm4)
                                
                                if ((temp0_1872 & 1) != 0)
                                    var_618[0] = temp0_1899[0]
                                
                                float temp0_1903[0x4] = _mm_sub_ps(temp0_1901, zmm4)
                                zmm2 = _mm_mul_ps(temp0_1899, temp0_1899)
                                
                                if ((temp0_1872 & 2) == 0)
                                    zmm5 = _mm_sub_ps(temp0_1903, zmm2)
                                    
                                    if ((temp0_1872 & 4) != 0)
                                        goto label_140222f2c
                                    
                                    goto label_140221ffb
                                
                                var_618[1] = __extractps_memd_xmmps_immb(temp0_1899, 1)
                                zmm5 = _mm_sub_ps(temp0_1903, zmm2)
                                
                                if ((temp0_1872 & 4) != 0)
                                label_140222f2c:
                                    var_618[2] = __extractps_memd_xmmps_immb(temp0_1899, 2)
                                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                                    zmm2 = _mm_sqrt_ps(zmm5)
                                    
                                    if ((temp0_1872 & 8) == 0)
                                        goto label_14022200a
                                    
                                    goto label_140222f43
                                
                            label_140221ffb:
                                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                                zmm2 = _mm_sqrt_ps(zmm5)
                                
                                if ((temp0_1872 & 8) == 0)
                                label_14022200a:
                                    zmm0 = _mm_and_ps(zmm0, zmm2)
                                    zmm5 = var_598_5
                                    
                                    if ((temp0_1872 & 1) != 0)
                                        goto label_140222f5f
                                    
                                    goto label_14022201e
                                
                            label_140222f43:
                                var_618[3] = __extractps_memd_xmmps_immb(temp0_1899, 3)
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                zmm5 = var_598_5
                                
                                if ((temp0_1872 & 1) != 0)
                                label_140222f5f:
                                    var_608[0].d = zmm0.d
                                    
                                    if ((temp0_1872 & 2) == 0)
                                        goto label_140222026
                                    
                                    goto label_140222f6d
                                
                            label_14022201e:
                                
                                if ((temp0_1872 & 2) == 0)
                                label_140222026:
                                    
                                    if ((temp0_1872 & 4) != 0)
                                        goto label_140222f7d
                                    
                                    goto label_14022202e
                                
                            label_140222f6d:
                                var_608[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_1872 & 4) == 0)
                                label_14022202e:
                                    
                                    if ((temp0_1872 & 8) != 0)
                                        var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                                else
                                label_140222f7d:
                                    var_608[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
                                    
                                    if ((temp0_1872 & 8) != 0)
                                        var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                            
                            zmm1 &= not.o(zmm12)
                            
                            if (_mm_movemask_ps(_mm_slli_epi32(zmm1, 0x1f)) != 0)
                                zmm0 = __pcmpeqd_xmmdq_memdq(data_143442ad0, var_4d8_2)
                                char temp0_1914 =
                                    _mm_movemask_ps(_mm_slli_epi32(zmm12 & zmm0, 0x1f))
                                
                                if (temp0_1914 != 0)
                                    if ((temp0_1914 & 1) == 0)
                                        if ((temp0_1914 & 2) != 0)
                                            goto label_140224851
                                        
                                        goto label_14022208e
                                    
                                    var_638.d = 0
                                    
                                    if ((temp0_1914 & 2) != 0)
                                    label_140224851:
                                        var_638:4.d = 0
                                        
                                        if ((temp0_1914 & 4) == 0)
                                            goto label_140222096
                                        
                                        goto label_140224861
                                    
                                label_14022208e:
                                    
                                    if ((temp0_1914 & 4) == 0)
                                    label_140222096:
                                        
                                        if ((temp0_1914 & 8) != 0)
                                            goto label_140224871
                                        
                                        goto label_14022209e
                                    
                                label_140224861:
                                    var_638:8.d = 0
                                    
                                    if ((temp0_1914 & 8) != 0)
                                    label_140224871:
                                        var_638:0xc.d = 0
                                        
                                        if ((temp0_1914 & 1) == 0)
                                            goto label_1402220a6
                                        
                                        goto label_140224881
                                    
                                label_14022209e:
                                    
                                    if ((temp0_1914 & 1) == 0)
                                    label_1402220a6:
                                        
                                        if ((temp0_1914 & 2) != 0)
                                            goto label_140224891
                                        
                                        goto label_1402220ae
                                    
                                label_140224881:
                                    var_628[0] = 0
                                    
                                    if ((temp0_1914 & 2) != 0)
                                    label_140224891:
                                        var_628[1] = 0
                                        
                                        if ((temp0_1914 & 4) == 0)
                                            goto label_1402220b6
                                        
                                        goto label_1402248a1
                                    
                                label_1402220ae:
                                    
                                    if ((temp0_1914 & 4) == 0)
                                    label_1402220b6:
                                        
                                        if ((temp0_1914 & 8) != 0)
                                            goto label_1402248b1
                                        
                                        goto label_1402220be
                                    
                                label_1402248a1:
                                    var_628[2] = 0
                                    
                                    if ((temp0_1914 & 8) != 0)
                                    label_1402248b1:
                                        var_628[3] = 0
                                        
                                        if ((temp0_1914 & 1) == 0)
                                            goto label_1402220c6
                                        
                                        goto label_1402248c1
                                    
                                label_1402220be:
                                    
                                    if ((temp0_1914 & 1) == 0)
                                    label_1402220c6:
                                        
                                        if ((temp0_1914 & 2) != 0)
                                            goto label_1402248d1
                                        
                                        goto label_1402220ce
                                    
                                label_1402248c1:
                                    var_618[0] = 0
                                    
                                    if ((temp0_1914 & 2) != 0)
                                    label_1402248d1:
                                        var_618[1] = 0
                                        
                                        if ((temp0_1914 & 4) == 0)
                                            goto label_1402220d6
                                        
                                        goto label_1402248e1
                                    
                                label_1402220ce:
                                    
                                    if ((temp0_1914 & 4) == 0)
                                    label_1402220d6:
                                        
                                        if ((temp0_1914 & 8) != 0)
                                            goto label_1402248f1
                                        
                                        goto label_1402220de
                                    
                                label_1402248e1:
                                    var_618[2] = 0
                                    
                                    if ((temp0_1914 & 8) != 0)
                                    label_1402248f1:
                                        var_618[3] = 0
                                        
                                        if ((temp0_1914 & 1) == 0)
                                            goto label_1402220e6
                                        
                                        goto label_140224901
                                    
                                label_1402220de:
                                    
                                    if ((temp0_1914 & 1) == 0)
                                    label_1402220e6:
                                        
                                        if ((temp0_1914 & 2) != 0)
                                            goto label_140224911
                                        
                                        goto label_1402220ee
                                    
                                label_140224901:
                                    var_608[0].d = 0x3f800000
                                    
                                    if ((temp0_1914 & 2) != 0)
                                    label_140224911:
                                        var_608[0]:4.d = 0x3f800000
                                        
                                        if ((temp0_1914 & 4) == 0)
                                            goto label_1402220f6
                                        
                                        goto label_140224921
                                    
                                label_1402220ee:
                                    
                                    if ((temp0_1914 & 4) != 0)
                                    label_140224921:
                                        var_608[1].d = 0x3f800000
                                        
                                        if ((temp0_1914 & 8) != 0)
                                            var_608[1]:4.d = 0x3f800000
                                    else
                                    label_1402220f6:
                                        
                                        if ((temp0_1914 & 8) != 0)
                                            var_608[1]:4.d = 0x3f800000
                                
                                char temp0_1916 =
                                    _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm1), 0x1f))
                                
                                if (temp0_1916 != 0)
                                    if ((temp0_1916 & 1) == 0)
                                        if ((temp0_1916 & 2) != 0)
                                            goto label_140224945
                                        
                                        goto label_140222129
                                    
                                    var_638.d = 0
                                    
                                    if ((temp0_1916 & 2) != 0)
                                    label_140224945:
                                        var_638:4.d = 0
                                        
                                        if ((temp0_1916 & 4) == 0)
                                            goto label_140222131
                                        
                                        goto label_140224955
                                    
                                label_140222129:
                                    
                                    if ((temp0_1916 & 4) == 0)
                                    label_140222131:
                                        
                                        if ((temp0_1916 & 8) != 0)
                                            goto label_140224965
                                        
                                        goto label_140222139
                                    
                                label_140224955:
                                    var_638:8.d = 0
                                    
                                    if ((temp0_1916 & 8) != 0)
                                    label_140224965:
                                        var_638:0xc.d = 0
                                        
                                        if ((temp0_1916 & 1) == 0)
                                            goto label_140222141
                                        
                                        goto label_140224975
                                    
                                label_140222139:
                                    
                                    if ((temp0_1916 & 1) == 0)
                                    label_140222141:
                                        
                                        if ((temp0_1916 & 2) != 0)
                                            goto label_140224985
                                        
                                        goto label_140222149
                                    
                                label_140224975:
                                    var_628[0] = 0
                                    
                                    if ((temp0_1916 & 2) != 0)
                                    label_140224985:
                                        var_628[1] = 0
                                        
                                        if ((temp0_1916 & 4) == 0)
                                            goto label_140222151
                                        
                                        goto label_140224995
                                    
                                label_140222149:
                                    
                                    if ((temp0_1916 & 4) == 0)
                                    label_140222151:
                                        
                                        if ((temp0_1916 & 8) != 0)
                                            goto label_1402249a5
                                        
                                        goto label_140222159
                                    
                                label_140224995:
                                    var_628[2] = 0
                                    
                                    if ((temp0_1916 & 8) != 0)
                                    label_1402249a5:
                                        var_628[3] = 0
                                        
                                        if ((temp0_1916 & 1) == 0)
                                            goto label_140222161
                                        
                                        goto label_1402249b5
                                    
                                label_140222159:
                                    
                                    if ((temp0_1916 & 1) == 0)
                                    label_140222161:
                                        
                                        if ((temp0_1916 & 2) != 0)
                                            goto label_1402249c5
                                        
                                        goto label_140222169
                                    
                                label_1402249b5:
                                    var_618[0] = 0
                                    
                                    if ((temp0_1916 & 2) != 0)
                                    label_1402249c5:
                                        var_618[1] = 0
                                        
                                        if ((temp0_1916 & 4) == 0)
                                            goto label_140222171
                                        
                                        goto label_1402249d5
                                    
                                label_140222169:
                                    
                                    if ((temp0_1916 & 4) == 0)
                                    label_140222171:
                                        
                                        if ((temp0_1916 & 8) != 0)
                                            goto label_1402249e5
                                        
                                        goto label_140222179
                                    
                                label_1402249d5:
                                    var_618[2] = 0
                                    
                                    if ((temp0_1916 & 8) != 0)
                                    label_1402249e5:
                                        var_618[3] = 0
                                        
                                        if ((temp0_1916 & 1) == 0)
                                            goto label_140222181
                                        
                                        goto label_1402249f5
                                    
                                label_140222179:
                                    
                                    if ((temp0_1916 & 1) == 0)
                                    label_140222181:
                                        
                                        if ((temp0_1916 & 2) != 0)
                                            goto label_140224a05
                                        
                                        goto label_140222189
                                    
                                label_1402249f5:
                                    var_608[0].d = 0x3f800000
                                    
                                    if ((temp0_1916 & 2) != 0)
                                    label_140224a05:
                                        var_608[0]:4.d = 0x3f800000
                                        
                                        if ((temp0_1916 & 4) == 0)
                                            goto label_140222191
                                        
                                        goto label_140224a15
                                    
                                label_140222189:
                                    
                                    if ((temp0_1916 & 4) != 0)
                                    label_140224a15:
                                        var_608[1].d = 0x3f800000
                                        
                                        if ((temp0_1916 & 8) != 0)
                                            var_608[1]:4.d = 0x3f800000
                                    else
                                    label_140222191:
                                        
                                        if ((temp0_1916 & 8) != 0)
                                            var_608[1]:4.d = 0x3f800000
            
            zmm13 = _mm_cmpeq_epi32(zmm13, var_498_2) & not.o(zmm11)
            zmm15 = _mm_slli_epi32(zmm13, 0x1f)
            char temp0_1919 = _mm_movemask_ps(zmm15)
            
            if (temp0_1919 == 0)
                zmm13 = var_3e8_1
            else
                zmm0 = __pmulld_xmmdq_memdq(var_498_2, temp0_1304)
                zmm12 = _mm_cvtepi32_epi64(zmm0.q)
                int32_t var_5b8_3[0x4] = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
                zmm3 = temp0_1559 & zmm13
                arg5 = zmm3
                zmm3 = _mm_slli_epi32(zmm3, 0x1f)
                char temp0_1925 = _mm_movemask_ps(zmm3)
                float var_558[0x4]
                uint128_t var_548
                uint128_t var_538
                int32_t var_528[0x4]
                
                if (temp0_1925 != 0)
                    zmm11 = var_5b8_3
                    zmm8 = _mm_add_epi64(zmm11, zmm6)
                    zmm9 = __paddq_xmmdq_memdq(_mm_add_epi64(zmm12, zmm5), var_488_1)
                    zmm8 = __paddq_xmmdq_memdq(zmm8, var_5a8_2)
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_468_4, 0x1f), 0x1f)
                    zmm3 = _mm_srai_epi32(zmm3, 0x1f) & zmm2
                    
                    if (_mm_movemask_ps(zmm3) != 0)
                        zmm1 = data_1434426b0
                        int32_t temp0_1934[0x4] = _mm_add_epi64(zmm8, zmm1)
                        zmm1 = _mm_add_epi64(zmm1, zmm9)
                        zmm4 = _mm_unpacklo_ps(zmm3, zmm3[0].q)
                        zmm9 = _mm_blendv_ps(zmm9, zmm1, zmm4)
                        float temp0_1938[0x4] = _mm_unpackhi_ps(zmm3, zmm3)
                        zmm8 = _mm_blendv_ps(zmm8, temp0_1934, temp0_1938)
                        zmm1 = _mm_add_epi64(var_588_5, zmm6)
                        int32_t temp0_1941[0x4] = _mm_add_epi64(var_4a8_1, zmm5)
                        zmm0 = data_1434426c0
                        int32_t temp0_1942[0x4] = _mm_add_epi64(temp0_1941, zmm12)
                        zmm1 = _mm_add_epi64(_mm_add_epi64(zmm1, zmm11), zmm0)
                        zmm6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_1942, zmm0), zmm4)
                        zmm5 = _mm_blendv_ps(zx.o(0), zmm1, temp0_1938)
                        int64_t rcx_91 = _mm_extract_epi64(zmm6, 1)
                        int64_t rbx_53 = zmm5[0].q
                        int64_t rdi_48 = _mm_extract_epi64(zmm5, 1)
                        zmm1 = _mm_cvtepi32_ps(_mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + zmm6.q)), *(arg4 + rcx_91), 
                                    1), 
                                *(arg4 + rbx_53), 2), 
                            *(arg4 + rdi_48), 3).q))
                    
                    float temp0_1953[0x4] = _mm_blendv_ps(data_1434426d0, zmm1, zmm2)
                    zmm1 = data_143442c40
                    zmm2 = var_478_1 & zmm1
                    zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm2) & arg5, 0x1f)
                    char temp0_1956 = _mm_movemask_ps(zmm1)
                    
                    if (temp0_1956 == 0)
                        zmm7 = zmm9
                        zmm4 = zmm8
                        zmm9 = var_588_5
                    else
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        zmm4 = data_1434426b0
                        zmm5 = _mm_add_epi64(zmm8, zmm4)
                        zmm7 = _mm_blendv_ps(zmm9, _mm_add_epi64(zmm4, zmm9), 
                            _mm_shuffle_epi32(zmm1, 0x50))
                        zmm0 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm4 = _mm_blendv_ps(zmm8, zmm5, zmm0)
                        
                        if ((temp0_1956 & 1) == 0)
                            if ((temp0_1956 & 2) != 0)
                                goto label_140222c30
                            
                            goto label_1402223b9
                        
                        zmm0 = zx.o(*zmm9[0].q)
                        
                        if ((temp0_1956 & 2) != 0)
                        label_140222c30:
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm9, 1)), 1)
                            zmm9 = var_588_5
                            
                            if ((temp0_1956 & 4) == 0)
                                goto label_1402223cb
                            
                            goto label_140222c50
                        
                    label_1402223b9:
                        zmm9 = var_588_5
                        
                        if ((temp0_1956 & 4) != 0)
                        label_140222c50:
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm8[0]), 2)
                            
                            if ((temp0_1956 & 8) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                        else
                        label_1402223cb:
                            
                            if ((temp0_1956 & 8) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                        
                        zmm5 = _mm_cvtepi32_ps(_mm_blend_epi16(zx.o(0), zmm0, 0x55))
                    
                    zmm1 = data_143442c50
                    zmm0 = var_478_1 & zmm1
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm0)
                    char temp0_1969 = _mm_movemask_ps(_mm_slli_epi32(arg5 & zmm1, 0x1f))
                    
                    if (temp0_1969 != 0)
                        if ((temp0_1969 & 1) == 0)
                            if ((temp0_1969 & 2) != 0)
                                goto label_140222c81
                            
                            goto label_14022243f
                        
                        zmm1 = zx.o(*zmm7[0].q)
                        
                        if ((temp0_1969 & 2) != 0)
                        label_140222c81:
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm7, 1)), 1)
                            
                            if ((temp0_1969 & 4) == 0)
                                goto label_140222447
                            
                            goto label_140222c97
                        
                    label_14022243f:
                        
                        if ((temp0_1969 & 4) != 0)
                        label_140222c97:
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm4[0].q), 2)
                            
                            if ((temp0_1969 & 8) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm4, 1)), 3)
                        else
                        label_140222447:
                            
                            if ((temp0_1969 & 8) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm4, 1)), 3)
                        
                        zmm6 = _mm_cvtepi32_ps(_mm_blend_epi16(zx.o(0), zmm1, 0x55))
                    
                    zmm1 = data_143442c20
                    float temp0_1973[0x4] = _mm_add_ps(temp0_1953, zmm1)
                    zmm7 = data_142dd3fa0
                    float temp0_1974[0x4] = _mm_mul_ps(temp0_1973, zmm7)
                    
                    if ((temp0_1925 & 1) == 0)
                        zmm4 = zx.o(0)
                        zmm5 = _mm_add_ps(zmm5, zmm1)
                        
                        if ((temp0_1925 & 2) != 0)
                            goto label_140222a00
                        
                        goto label_14022249d
                    
                    var_558[0] = temp0_1974[0]
                    zmm4 = zx.o(0)
                    zmm5 = _mm_add_ps(zmm5, zmm1)
                    
                    if ((temp0_1925 & 2) != 0)
                    label_140222a00:
                        var_558[1] = __extractps_memd_xmmps_immb(temp0_1974, 1)
                        zmm2 = _mm_cmpeq_epi32(zmm2, zmm4)
                        zmm5 = _mm_mul_ps(zmm5, zmm7)
                        
                        if ((temp0_1925 & 4) == 0)
                            goto label_1402224ae
                        
                        goto label_140222a1c
                    
                label_14022249d:
                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm4)
                    zmm5 = _mm_mul_ps(zmm5, zmm7)
                    
                    if ((temp0_1925 & 4) == 0)
                    label_1402224ae:
                        zmm2 &= not.o(zmm5)
                        
                        if ((temp0_1925 & 8) != 0)
                            goto label_140222a35
                        
                        goto label_1402224c0
                    
                label_140222a1c:
                    var_558[2] = __extractps_memd_xmmps_immb(temp0_1974, 2)
                    zmm2 &= not.o(zmm5)
                    
                    if ((temp0_1925 & 8) != 0)
                    label_140222a35:
                        var_558[3] = __extractps_memd_xmmps_immb(temp0_1974, 3)
                        zmm5 = var_598_5
                        
                        if ((temp0_1925 & 1) == 0)
                            goto label_1402224cf
                        
                        goto label_140222a53
                    
                label_1402224c0:
                    zmm5 = var_598_5
                    
                    if ((temp0_1925 & 1) == 0)
                    label_1402224cf:
                        zmm6 = _mm_add_ps(zmm6, zmm1)
                        
                        if ((temp0_1925 & 2) != 0)
                            goto label_140222a69
                        
                        goto label_1402224dc
                    
                label_140222a53:
                    var_548.d = zmm2.d
                    zmm6 = _mm_add_ps(zmm6, zmm1)
                    
                    if ((temp0_1925 & 2) == 0)
                    label_1402224dc:
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm4)
                        zmm6 = _mm_mul_ps(zmm6, zmm7)
                        
                        if ((temp0_1925 & 4) != 0)
                            var_548:8.d = __pextrd_memd_xmmdq_immb(zmm2, 2)
                    else
                    label_140222a69:
                        var_548:4.d = __pextrd_memd_xmmdq_immb(zmm2, 1)
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm4)
                        zmm6 = _mm_mul_ps(zmm6, zmm7)
                        
                        if ((temp0_1925 & 4) != 0)
                            var_548:8.d = __pextrd_memd_xmmdq_immb(zmm2, 2)
                    
                    float temp0_1982[0x4] = _mm_mul_ps(temp0_1974, temp0_1974)
                    zmm1 = data_142d3f670
                    zmm0 &= not.o(zmm6)
                    
                    if ((temp0_1925 & 8) != 0)
                        var_548:0xc.d = __pextrd_memd_xmmdq_immb(zmm2, 3)
                    
                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                    zmm1 = _mm_sub_ps(zmm1, temp0_1982)
                    zmm6 = var_578_3
                    
                    if ((temp0_1925 & 1) != 0)
                        var_538.d = zmm0.d
                    
                    float temp0_1986[0x4] = _mm_mul_ps(zmm0, zmm0)
                    zmm1 = _mm_sub_ps(zmm1, zmm2)
                    
                    if ((temp0_1925 & 2) == 0)
                        zmm1 = _mm_sub_ps(zmm1, temp0_1986)
                        
                        if ((temp0_1925 & 4) != 0)
                            goto label_140222aa2
                        
                        goto label_140222552
                    
                    var_538:4.d = __pextrd_memd_xmmdq_immb(zmm0, 1)
                    zmm1 = _mm_sub_ps(zmm1, temp0_1986)
                    
                    if ((temp0_1925 & 4) != 0)
                    label_140222aa2:
                        var_538:8.d = __pextrd_memd_xmmdq_immb(zmm0, 2)
                        zmm4 = _mm_cmpeq_ps(zmm4, zmm1, 2)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        
                        if ((temp0_1925 & 8) == 0)
                            goto label_140222563
                        
                        goto label_140222abe
                    
                label_140222552:
                    zmm4 = _mm_cmpeq_ps(zmm4, zmm1, 2)
                    zmm1 = _mm_sqrt_ps(zmm1)
                    
                    if ((temp0_1925 & 8) == 0)
                    label_140222563:
                        zmm4 = _mm_and_ps(zmm4, zmm1)
                        
                        if ((temp0_1925 & 1) != 0)
                            goto label_140222ad6
                        
                        goto label_140222570
                    
                label_140222abe:
                    var_538:0xc.d = __pextrd_memd_xmmdq_immb(zmm0, 3)
                    zmm4 = _mm_and_ps(zmm4, zmm1)
                    
                    if ((temp0_1925 & 1) != 0)
                    label_140222ad6:
                        var_528[0] = zmm4[0]
                        
                        if ((temp0_1925 & 2) == 0)
                            goto label_14022257a
                        
                        goto label_140222ae9
                    
                label_140222570:
                    
                    if ((temp0_1925 & 2) == 0)
                    label_14022257a:
                        
                        if ((temp0_1925 & 4) != 0)
                            goto label_140222afe
                        
                        goto label_140222584
                    
                label_140222ae9:
                    var_528[1] = __extractps_memd_xmmps_immb(zmm4, 1)
                    
                    if ((temp0_1925 & 4) == 0)
                    label_140222584:
                        
                        if ((temp0_1925 & 8) != 0)
                            var_528[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                    else
                    label_140222afe:
                        var_528[2] = __extractps_memd_xmmps_immb(zmm4, 2)
                        
                        if ((temp0_1925 & 8) != 0)
                            var_528[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                
                if (_mm_movemask_ps(_mm_slli_epi32(zmm13 & var_428_3, 0x1f)) != 0)
                    zmm11 = zmm12
                    zmm0 = __pcmpeqd_xmmdq_memdq(data_142d3f5b0, var_4d8_2)
                    float var_438_3[0x4] = zmm0
                    zmm3 = _mm_slli_epi32(zmm13 & zmm0, 0x1f)
                    char temp0_1997 = _mm_movemask_ps(zmm3)
                    uint128_t var_458_4 = zmm13
                    float var_568_3[0x4] = zmm12
                    
                    if (temp0_1997 != 0)
                        float var_4b8_4[0x4] = arg6
                        zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                        int32_t temp0_1999[0x4] = _mm_add_epi64(zmm9, zmm6)
                        zmm6 = _mm_add_epi64(var_4a8_1, zmm5)
                        zmm1 = data_1434426c0
                        zmm6 = _mm_add_epi64(zmm6, zmm11)
                        int32_t temp0_2003[0x4] =
                            _mm_add_epi64(__paddq_xmmdq_memdq(temp0_1999, var_5b8_3), zmm1)
                        zmm6 = _mm_add_epi64(zmm6, zmm1)
                        zmm2 = _mm_shuffle_epi32(zmm3, 0x50)
                        zmm8 = zx.o(0)
                        zmm7 = _mm_blendv_ps(zx.o(0), zmm6, zmm2)
                        zmm3 = _mm_shuffle_epi32(zmm3, 0xfa)
                        float temp0_2008[0x4] = _mm_blendv_ps(zx.o(0), temp0_2003, zmm3)
                        int64_t rcx_92 = zmm7[0].q
                        void* rbp_67 = arg4 + rcx_92
                        zmm6 = *(arg4 + rcx_92)
                        int64_t rcx_93 = _mm_extract_epi64(zmm7, 1)
                        void* rdi_49 = arg4 + rcx_93
                        zmm13 = *(arg4 + rcx_93)
                        int64_t rcx_94 = temp0_2008[0].q
                        void* rbx_54 = arg4 + rcx_94
                        zmm9 = *(arg4 + rcx_94)
                        int64_t rcx_95 = _mm_extract_epi64(temp0_2008, 1)
                        void* rsi_52 = arg4 + rcx_95
                        zmm11 = *(arg4 + rcx_95)
                        float temp0_2009[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        zmm4 = _mm_blendv_ps(zx.o(0), zmm1, zmm3)
                        zmm7 = *(temp0_2009[0].q + rbp_67)
                        arg5 = *(_mm_extract_epi64(temp0_2009, 1) + rdi_49)
                        arg6 = *(zmm4[0].q + rbx_54)
                        uint128_t* rcx_99 = _mm_extract_epi64(zmm4, 1)
                        zmm1 = data_1434426e0
                        zmm4 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        zmm2 = *(rcx_99 + rsi_52)
                        float temp0_2012[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm3)
                        zmm0 = *(zmm4[0].q + rbp_67)
                        zmm3 = *(_mm_extract_epi64(zmm4, 1) + rdi_49)
                        float (* rcx_102)[0x4] = temp0_2012[0].q
                        float (* rbp_68)[0x4] = _mm_extract_epi64(temp0_2012, 1)
                        zmm12 = *(rcx_102 + rbx_54)
                        zmm5 = *(rbp_68 + rsi_52)
                        
                        if ((temp0_1997 & 1) == 0)
                            if ((temp0_1997 & 2) != 0)
                                goto label_140222cbd
                            
                            goto label_140222754
                        
                        var_558[0] = zmm6.d
                        
                        if ((temp0_1997 & 2) != 0)
                        label_140222cbd:
                            var_558[1] = zmm13.d
                            
                            if ((temp0_1997 & 4) == 0)
                                goto label_14022275e
                            
                            goto label_140222cd1
                        
                    label_140222754:
                        
                        if ((temp0_1997 & 4) == 0)
                        label_14022275e:
                            
                            if ((temp0_1997 & 8) != 0)
                                goto label_140222ce5
                            
                            goto label_140222768
                        
                    label_140222cd1:
                        var_558[2] = zmm9[0]
                        
                        if ((temp0_1997 & 8) != 0)
                        label_140222ce5:
                            var_558[3] = zmm11.d
                            zmm6 = _mm_insert_ps(zmm6, zmm13, 0x10)
                            
                            if ((temp0_1997 & 1) == 0)
                                goto label_140222779
                            
                            goto label_140222d00
                        
                    label_140222768:
                        zmm6 = _mm_insert_ps(zmm6, zmm13, 0x10)
                        
                        if ((temp0_1997 & 1) != 0)
                        label_140222d00:
                            var_548.d = zmm7[0]
                            zmm6 = _mm_insert_ps(zmm6, zmm9, 0x20)
                            zmm7 = _mm_insert_ps(zmm7, arg5, 0x10)
                            
                            if ((temp0_1997 & 2) != 0)
                                var_548:4.d = arg5[0]
                        else
                        label_140222779:
                            zmm6 = _mm_insert_ps(zmm6, zmm9, 0x20)
                            zmm7 = _mm_insert_ps(zmm7, arg5, 0x10)
                            
                            if ((temp0_1997 & 2) != 0)
                                var_548:4.d = arg5[0]
                        
                        zmm6 = _mm_insert_ps(zmm6, zmm11, 0x30)
                        zmm7 = _mm_insert_ps(zmm7, arg6, 0x20)
                        zmm1 = _mm_insert_ps(zmm0, zmm3, 0x10)
                        zmm9 = var_588_5
                        
                        if ((temp0_1997 & 4) != 0)
                            var_548:8.d = arg6[0]
                        
                        zmm7 = _mm_insert_ps(zmm7, zmm2, 0x30)
                        zmm1 = _mm_insert_ps(zmm1, zmm12, 0x20)
                        zmm6 = _mm_mul_ps(zmm6, zmm6)
                        zmm4 = data_142d3f670
                        zmm13 = var_458_4
                        zmm11 = var_568_3
                        
                        if ((temp0_1997 & 8) != 0)
                            var_548:0xc.d = zmm2.d
                        
                        zmm1 = _mm_insert_ps(zmm1, zmm5, 0x30)
                        zmm4 = _mm_sub_ps(zmm4, zmm6)
                        zmm7 = _mm_mul_ps(zmm7, zmm7)
                        arg6 = var_4b8_4
                        
                        if ((temp0_1997 & 1) != 0)
                            var_538.d = zmm0.d
                        
                        zmm4 = _mm_sub_ps(zmm4, zmm7)
                        zmm1 = _mm_mul_ps(zmm1, zmm1)
                        zmm6 = var_578_3
                        
                        if ((temp0_1997 & 2) == 0)
                            zmm4 = _mm_sub_ps(zmm4, zmm1)
                            
                            if ((temp0_1997 & 4) != 0)
                                goto label_140222d3c
                            
                            goto label_14022284d
                        
                        var_538:4.d = zmm3[0]
                        zmm4 = _mm_sub_ps(zmm4, zmm1)
                        
                        if ((temp0_1997 & 4) != 0)
                        label_140222d3c:
                            var_538:8.d = zmm12[0]
                            zmm8 = _mm_cmpeq_ps(zmm8, zmm4, 1)
                            zmm0 = _mm_sqrt_ps(zmm4)
                            
                            if ((temp0_1997 & 8) == 0)
                                goto label_14022285f
                            
                            goto label_140222d58
                        
                    label_14022284d:
                        zmm8 = _mm_cmpeq_ps(zmm8, zmm4, 1)
                        zmm0 = _mm_sqrt_ps(zmm4)
                        
                        if ((temp0_1997 & 8) == 0)
                        label_14022285f:
                            zmm8 = _mm_and_ps(zmm8, zmm0)
                            zmm5 = var_598_5
                            
                            if ((temp0_1997 & 1) != 0)
                                goto label_140222d78
                            
                            goto label_140222876
                        
                    label_140222d58:
                        var_538:0xc.d = zmm5[0]
                        zmm8 = _mm_and_ps(zmm8, zmm0)
                        zmm5 = var_598_5
                        
                        if ((temp0_1997 & 1) != 0)
                        label_140222d78:
                            var_528[0] = zmm8[0].d
                            
                            if ((temp0_1997 & 2) == 0)
                                goto label_140222880
                            
                            goto label_140222d8c
                        
                    label_140222876:
                        
                        if ((temp0_1997 & 2) == 0)
                        label_140222880:
                            
                            if ((temp0_1997 & 4) != 0)
                                goto label_140222da2
                            
                            goto label_14022288a
                        
                    label_140222d8c:
                        var_528[1] = __extractps_memd_xmmps_immb(zmm8, 1)
                        
                        if ((temp0_1997 & 4) == 0)
                        label_14022288a:
                            
                            if ((temp0_1997 & 8) != 0)
                                var_528[3] = __extractps_memd_xmmps_immb(zmm8, 3)
                        else
                        label_140222da2:
                            var_528[2] = __extractps_memd_xmmps_immb(zmm8, 2)
                            
                            if ((temp0_1997 & 8) != 0)
                                var_528[3] = __extractps_memd_xmmps_immb(zmm8, 3)
                    
                    zmm12 = var_438_3 ^ var_428_3
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(zmm13 & zmm12, 0x1f)) != 0)
                        zmm0 = temp0_1292
                        zmm8 = _mm_srai_epi32(_mm_slli_epi32(zmm13 & zmm0, 0x1f), 0x1f)
                        char temp0_2036 = _mm_movemask_ps(zmm8)
                        
                        if (temp0_2036 != 0)
                            zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_468_4, 0x1f), 0x1f) & zmm0
                            zmm15 = _mm_srai_epi32(zmm15, 0x1f) & zmm1
                            zmm11 = zx.o(0)
                            uint32_t temp0_2040 = _mm_movemask_ps(zmm15)
                            arg5 = zmm0
                            
                            if (temp0_2040 == 0)
                                zmm9 = zx.o(0)
                                zmm13 = zx.o(0)
                            else
                                zmm6 = zmm1
                                zmm7 = data_1434426c0
                                zmm1 = _mm_add_epi64(var_5a8_2, zmm7)
                                zmm5 = var_488_1
                                zmm3 = _mm_add_epi64(zmm5, zmm7)
                                zmm2 = _mm_unpacklo_ps(zmm15, zmm15[0].q)
                                float temp0_2044[0x4] = _mm_blendv_ps(zmm5, zmm3, zmm2)
                                float temp0_2045[0x4] = _mm_unpackhi_ps(zmm15, zmm15)
                                zmm0 = temp0_2045
                                float temp0_2046[0x4] = _mm_blendv_ps(var_5a8_2, zmm1, zmm0)
                                char rbx_55 = temp0_2040.b
                                
                                if ((rbx_55 & 1) == 0)
                                    if ((rbx_55 & 2) != 0)
                                        goto label_140222fbd
                                    
                                    goto label_140222991
                                
                                zmm0 = *var_488_1.q
                                
                                if ((rbx_55 & 2) != 0)
                                label_140222fbd:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_488_1, 1), 0x10)
                                    
                                    if ((rbx_55 & 4) == 0)
                                        goto label_14022299a
                                    
                                    goto label_140222fda
                                
                            label_140222991:
                                
                                if ((rbx_55 & 4) == 0)
                                label_14022299a:
                                    
                                    if ((rbx_55 & 8) != 0)
                                        goto label_140222ff9
                                    
                                    goto label_1402229a3
                                
                            label_140222fda:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_2.q, 0x20)
                                char rdi_50
                                
                                if ((rbx_55 & 8) != 0)
                                label_140222ff9:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_5a8_2, 1), 0x30)
                                    rdi_50 = _mm_movemask_ps(zmm6)
                                    zmm9 = zx.o(0)
                                    
                                    if ((rdi_50 & 1) != 0)
                                        goto label_1402229b5
                                    
                                    goto label_140223011
                                
                            label_1402229a3:
                                rdi_50 = _mm_movemask_ps(zmm6)
                                zmm9 = zx.o(0)
                                
                                if ((rdi_50 & 1) != 0)
                                label_1402229b5:
                                    zmm9 = _mm_blend_epi16(zmm9, zmm0, 3)
                                    
                                    if ((rdi_50 & 2) != 0)
                                        goto label_14022301b
                                    
                                    goto label_1402229c6
                                
                            label_140223011:
                                
                                if ((rdi_50 & 2) != 0)
                                label_14022301b:
                                    zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc)
                                    
                                    if ((rdi_50 & 4) != 0)
                                        goto label_1402229d0
                                    
                                    goto label_14022302c
                                
                            label_1402229c6:
                                
                                if ((rdi_50 & 4) == 0)
                                label_14022302c:
                                    
                                    if ((rdi_50 & 8) != 0)
                                        zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                                else
                                label_1402229d0:
                                    zmm9 = _mm_blend_epi16(zmm9, zmm0, 0x30)
                                    
                                    if ((rdi_50 & 8) != 0)
                                        zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                                
                                zmm1 = _mm_add_epi64(temp0_2046, zmm7)
                                var_488_1 =
                                    _mm_blendv_ps(temp0_2044, _mm_add_epi64(zmm7, temp0_2044), zmm2)
                                zmm0 = temp0_2045
                                var_5a8_2 = _mm_blendv_ps(temp0_2046, zmm1, zmm0)
                                
                                if ((rbx_55 & 1) == 0)
                                    if ((rbx_55 & 2) != 0)
                                        goto label_1402230c1
                                    
                                    goto label_140223075
                                
                                zmm0 = *temp0_2044[0].q
                                
                                if ((rbx_55 & 2) != 0)
                                label_1402230c1:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_2044, 1), 0x10)
                                    
                                    if ((rbx_55 & 4) == 0)
                                        goto label_14022307a
                                    
                                    goto label_1402230d1
                                
                            label_140223075:
                                
                                if ((rbx_55 & 4) == 0)
                                label_14022307a:
                                    
                                    if ((rbx_55 & 8) != 0)
                                        goto label_1402230e3
                                    
                                    goto label_14022307f
                                
                            label_1402230d1:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_2046[0].q, 0x20)
                                
                                if ((rbx_55 & 8) != 0)
                                label_1402230e3:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_2046, 1), 0x30)
                                    zmm13 = zx.o(0)
                                    
                                    if ((rdi_50 & 1) != 0)
                                        goto label_14022308a
                                    
                                    goto label_1402230f4
                                
                            label_14022307f:
                                zmm13 = zx.o(0)
                                
                                if ((rdi_50 & 1) != 0)
                                label_14022308a:
                                    zmm13 = _mm_blend_epi16(zmm13, zmm0, 3)
                                    
                                    if ((rdi_50 & 2) != 0)
                                        goto label_1402230fa
                                    
                                    goto label_140223097
                                
                            label_1402230f4:
                                
                                if ((rdi_50 & 2) != 0)
                                label_1402230fa:
                                    zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc)
                                    
                                    if ((rdi_50 & 4) != 0)
                                        goto label_14022309d
                                    
                                    goto label_140223107
                                
                            label_140223097:
                                
                                if ((rdi_50 & 4) == 0)
                                label_140223107:
                                    
                                    if ((rdi_50 & 8) != 0)
                                        zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc0)
                                else
                                label_14022309d:
                                    zmm13 = _mm_blend_epi16(zmm13, zmm0, 0x30)
                                    
                                    if ((rdi_50 & 8) != 0)
                                        zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc0)
                            
                            zmm0 = data_143442c40
                            zmm4 = _mm_cmpeq_epi32(var_478_1 & zmm0, zmm0) & arg5
                            zmm2 = _mm_slli_epi32(var_458_4 & zmm4, 0x1f)
                            char temp0_2146 = _mm_movemask_ps(zmm2)
                            
                            if (temp0_2146 == 0)
                                zmm2 = zx.o(0)
                                zmm6 = var_578_3
                            else
                                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                zmm7 = data_1434426c0
                                zmm6 = var_5a8_2
                                zmm1 = _mm_add_epi64(zmm6, zmm7)
                                zmm5 = var_488_1
                                zmm3 = _mm_add_epi64(zmm5, zmm7)
                                arg5 = _mm_shuffle_epi32(zmm2, 0x50)
                                float temp0_2151[0x4] = _mm_blendv_ps(zmm5, zmm3, arg5)
                                zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                                zmm0 = zmm2
                                float temp0_2153[0x4] = _mm_blendv_ps(zmm6, zmm1, zmm0)
                                
                                if ((temp0_2146 & 1) == 0)
                                    if ((temp0_2146 & 2) != 0)
                                        goto label_14022324c
                                    
                                    goto label_1402231b1
                                
                                zmm0 = *var_488_1.q
                                
                                if ((temp0_2146 & 2) != 0)
                                label_14022324c:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_488_1, 1), 0x10)
                                    zmm6 = var_578_3
                                    
                                    if ((temp0_2146 & 4) == 0)
                                        goto label_1402231c3
                                    
                                    goto label_140223272
                                
                            label_1402231b1:
                                zmm6 = var_578_3
                                
                                if ((temp0_2146 & 4) == 0)
                                label_1402231c3:
                                    
                                    if ((temp0_2146 & 8) != 0)
                                        goto label_140223291
                                    
                                    goto label_1402231cc
                                
                            label_140223272:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_2.q, 0x20)
                                char rdi_51
                                
                                if ((temp0_2146 & 8) != 0)
                                label_140223291:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_5a8_2, 1), 0x30)
                                    rdi_51 = _mm_movemask_ps(zmm4)
                                    zmm11 = zx.o(0)
                                    
                                    if ((rdi_51 & 1) != 0)
                                        goto label_1402231de
                                    
                                    goto label_1402232a9
                                
                            label_1402231cc:
                                rdi_51 = _mm_movemask_ps(zmm4)
                                zmm11 = zx.o(0)
                                
                                if ((rdi_51 & 1) != 0)
                                label_1402231de:
                                    zmm11 = _mm_blend_epi16(zmm11, zmm0, 3)
                                    
                                    if ((rdi_51 & 2) != 0)
                                        goto label_1402232b3
                                    
                                    goto label_1402231ef
                                
                            label_1402232a9:
                                
                                if ((rdi_51 & 2) != 0)
                                label_1402232b3:
                                    zmm11 = _mm_blend_epi16(zmm11, zmm0, 0xc)
                                    
                                    if ((rdi_51 & 4) != 0)
                                        goto label_1402231f9
                                    
                                    goto label_1402232c4
                                
                            label_1402231ef:
                                
                                if ((rdi_51 & 4) == 0)
                                label_1402232c4:
                                    
                                    if ((rdi_51 & 8) != 0)
                                        zmm11 = _mm_blend_epi16(zmm11, zmm0, 0xc0)
                                else
                                label_1402231f9:
                                    zmm11 = _mm_blend_epi16(zmm11, zmm0, 0x30)
                                    
                                    if ((rdi_51 & 8) != 0)
                                        zmm11 = _mm_blend_epi16(zmm11, zmm0, 0xc0)
                                
                                zmm1 = _mm_add_epi64(temp0_2153, zmm7)
                                var_488_1 =
                                    _mm_blendv_ps(temp0_2151, _mm_add_epi64(zmm7, temp0_2151), arg5)
                                zmm0 = zmm2
                                var_5a8_2 = _mm_blendv_ps(temp0_2153, zmm1, zmm0)
                                
                                if ((temp0_2146 & 1) == 0)
                                    arg5 = temp0_1292
                                    
                                    if ((temp0_2146 & 2) != 0)
                                        goto label_14022336c
                                    
                                    goto label_140223319
                                
                                zmm0 = *temp0_2151[0].q
                                arg5 = temp0_1292
                                
                                if ((temp0_2146 & 2) != 0)
                                label_14022336c:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_2151, 1), 0x10)
                                    
                                    if ((temp0_2146 & 4) == 0)
                                        goto label_14022331e
                                    
                                    goto label_14022337c
                                
                            label_140223319:
                                
                                if ((temp0_2146 & 4) == 0)
                                label_14022331e:
                                    
                                    if ((temp0_2146 & 8) != 0)
                                        goto label_14022338e
                                    
                                    goto label_140223323
                                
                            label_14022337c:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_2153[0].q, 0x20)
                                
                                if ((temp0_2146 & 8) != 0)
                                label_14022338e:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_2153, 1), 0x30)
                                    zmm2 = zx.o(0)
                                    
                                    if ((rdi_51 & 1) != 0)
                                        goto label_14022332d
                                    
                                    goto label_14022339e
                                
                            label_140223323:
                                zmm2 = zx.o(0)
                                
                                if ((rdi_51 & 1) != 0)
                                label_14022332d:
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 3)
                                    
                                    if ((rdi_51 & 2) != 0)
                                        goto label_1402233a4
                                    
                                    goto label_140223339
                                
                            label_14022339e:
                                
                                if ((rdi_51 & 2) != 0)
                                label_1402233a4:
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc)
                                    
                                    if ((rdi_51 & 4) != 0)
                                        goto label_14022333f
                                    
                                    goto label_1402233b0
                                
                            label_140223339:
                                
                                if ((rdi_51 & 4) == 0)
                                label_1402233b0:
                                    
                                    if ((rdi_51 & 8) != 0)
                                        zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc0)
                                else
                                label_14022333f:
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 0x30)
                                    
                                    if ((rdi_51 & 8) != 0)
                                        zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc0)
                            
                            zmm0 = data_143442c50
                            zmm1 = _mm_cmpeq_epi32(var_478_1 & zmm0, zmm0) & arg5
                            zmm4 = _mm_slli_epi32(var_458_4 & zmm1, 0x1f)
                            char temp0_2176 = _mm_movemask_ps(zmm4)
                            arg5 = zx.o(0)
                            zmm5 = zx.o(0)
                            zmm3 = zx.o(0)
                            
                            if (temp0_2176 != 0)
                                zmm15 = zmm1
                                int32_t temp0_2177[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                                zmm1 = data_1434426c0
                                zmm3 = var_5a8_2
                                zmm5 = _mm_add_epi64(zmm3, zmm1)
                                zmm7 = _mm_blendv_ps(var_488_1, _mm_add_epi64(zmm1, var_488_1), 
                                    _mm_shuffle_epi32(temp0_2177, 0x50))
                                zmm0 = _mm_shuffle_epi32(temp0_2177, 0xfa)
                                float temp0_2183[0x4] = _mm_blendv_ps(zmm3, zmm5, zmm0)
                                
                                if ((temp0_2176 & 1) == 0)
                                    if ((temp0_2176 & 2) != 0)
                                        goto label_140223523
                                    
                                    goto label_14022345a
                                
                                zmm0 = *var_488_1.q
                                
                                if ((temp0_2176 & 2) != 0)
                                label_140223523:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_488_1, 1), 0x10)
                                    
                                    if ((temp0_2176 & 4) == 0)
                                        goto label_140223462
                                    
                                    goto label_14022353f
                                
                            label_14022345a:
                                
                                if ((temp0_2176 & 4) == 0)
                                label_140223462:
                                    
                                    if ((temp0_2176 & 8) != 0)
                                        goto label_14022355d
                                    
                                    goto label_14022346a
                                
                            label_14022353f:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_2.q, 0x20)
                                char rbx_57
                                
                                if ((temp0_2176 & 8) != 0)
                                label_14022355d:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_5a8_2, 1), 0x30)
                                    rbx_57 = _mm_movemask_ps(zmm15)
                                    zmm5 = zx.o(0)
                                    
                                    if ((rbx_57 & 1) != 0)
                                        goto label_14022347a
                                    
                                    goto label_140223573
                                
                            label_14022346a:
                                rbx_57 = _mm_movemask_ps(zmm15)
                                zmm5 = zx.o(0)
                                
                                if ((rbx_57 & 1) != 0)
                                label_14022347a:
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 1)
                                    
                                    if ((rbx_57 & 2) != 0)
                                        goto label_14022357c
                                    
                                    goto label_140223489
                                
                            label_140223573:
                                
                                if ((rbx_57 & 2) != 0)
                                label_14022357c:
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 2)
                                    
                                    if ((rbx_57 & 4) != 0)
                                        goto label_140223492
                                    
                                    goto label_14022358b
                                
                            label_140223489:
                                
                                if ((rbx_57 & 4) != 0)
                                label_140223492:
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 4)
                                    
                                    if ((rbx_57 & 8) != 0)
                                        goto label_140223594
                                    
                                    goto label_1402234a1
                                
                            label_14022358b:
                                
                                if ((rbx_57 & 8) != 0)
                                label_140223594:
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 8)
                                    
                                    if ((temp0_2176 & 1) == 0)
                                        goto label_1402234a9
                                    
                                    goto label_1402235a7
                                
                            label_1402234a1:
                                
                                if ((temp0_2176 & 1) == 0)
                                label_1402234a9:
                                    
                                    if ((temp0_2176 & 2) != 0)
                                        goto label_1402235ba
                                    
                                    goto label_1402234b1
                                
                            label_1402235a7:
                                zmm0 = *zmm7[0].q
                                
                                if ((temp0_2176 & 2) != 0)
                                label_1402235ba:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm7, 1), 0x10)
                                    
                                    if ((temp0_2176 & 4) == 0)
                                        goto label_1402234b9
                                    
                                    goto label_1402235cd
                                
                            label_1402234b1:
                                
                                if ((temp0_2176 & 4) == 0)
                                label_1402234b9:
                                    
                                    if ((temp0_2176 & 8) != 0)
                                        goto label_1402235e2
                                    
                                    goto label_1402234c1
                                
                            label_1402235cd:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_2183[0].q, 0x20)
                                
                                if ((temp0_2176 & 8) != 0)
                                label_1402235e2:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_2183, 1), 0x30)
                                    zmm3 = zx.o(0)
                                    
                                    if ((rbx_57 & 1) != 0)
                                        goto label_1402234cd
                                    
                                    goto label_1402235f4
                                
                            label_1402234c1:
                                zmm3 = zx.o(0)
                                
                                if ((rbx_57 & 1) != 0)
                                label_1402234cd:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 1)
                                    
                                    if ((rbx_57 & 2) != 0)
                                        goto label_1402235fd
                                    
                                    goto label_1402234dc
                                
                            label_1402235f4:
                                
                                if ((rbx_57 & 2) != 0)
                                label_1402235fd:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                                    
                                    if ((rbx_57 & 4) != 0)
                                        goto label_1402234e5
                                    
                                    goto label_14022360c
                                
                            label_1402234dc:
                                
                                if ((rbx_57 & 4) == 0)
                                label_14022360c:
                                    
                                    if ((rbx_57 & 8) != 0)
                                        zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                                else
                                label_1402234e5:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                                    
                                    if ((rbx_57 & 8) != 0)
                                        zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                            
                            int32_t temp0_2200[0x4] = _mm_add_epi64(var_588_5, zmm6)
                            int32_t temp0_2201[0x4] = __paddq_xmmdq_memdq(var_4a8_1, var_598_5)
                            zmm0 = data_1434426c0
                            int32_t temp0_2202[0x4] = __paddq_xmmdq_memdq(temp0_2201, var_568_3)
                            int32_t temp0_2204[0x4] =
                                _mm_add_epi64(__paddq_xmmdq_memdq(temp0_2200, var_5b8_3), zmm0)
                            zmm1 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_2202, zmm0), 
                                _mm_shuffle_epi32(zmm8, 0x50))
                            zmm6 = _mm_blendv_ps(zx.o(0), temp0_2204, _mm_shuffle_epi32(zmm8, 0xfa))
                            int64_t rcx_122 = _mm_extract_epi64(zmm1, 1)
                            int64_t rbx_58 = _mm_extract_epi64(zmm6, 1)
                            zmm0 = __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), 
                                        *(arg4 + rcx_122), 1), 
                                    *(arg4 + zmm6.q), 2), 
                                *(arg4 + rbx_58), 3)
                            zmm4 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                            zmm1 = _mm_srli_epi32(zmm0, 0x15)
                            zmm7 = data_143442440
                            zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm7))
                            zmm6 = data_143442690
                            zmm9 = _mm_add_ps(zmm9, _mm_mul_ps(zmm13, _mm_div_ps(zmm1, zmm6)))
                            zmm4 = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm7))
                            
                            if ((temp0_2036 & 1) != 0)
                                var_558[0] = zmm9[0]
                            
                            zmm4 = _mm_div_ps(zmm4, zmm6)
                            
                            if ((temp0_2036 & 2) != 0)
                                var_558[1] = __extractps_memd_xmmps_immb(zmm9, 1)
                            
                            zmm0 &= data_143442680
                            zmm2 = _mm_mul_ps(zmm2, zmm4)
                            zmm6 = var_578_3
                            
                            if ((temp0_2036 & 4) == 0)
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                                zmm11 = _mm_add_ps(zmm11, zmm2)
                                
                                if ((temp0_2036 & 8) != 0)
                                    goto label_1402245ef
                                
                                goto label_14022374b
                            
                            var_558[2] = __extractps_memd_xmmps_immb(zmm9, 2)
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            zmm11 = _mm_add_ps(zmm11, zmm2)
                            
                            if ((temp0_2036 & 8) != 0)
                            label_1402245ef:
                                var_558[3] = __extractps_memd_xmmps_immb(zmm9, 3)
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                
                                if ((temp0_2036 & 1) == 0)
                                    goto label_140223758
                                
                                goto label_140224608
                            
                        label_14022374b:
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            
                            if ((temp0_2036 & 1) == 0)
                            label_140223758:
                                zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                                
                                if ((temp0_2036 & 2) != 0)
                                    goto label_140224623
                                
                                goto label_140223769
                            
                        label_140224608:
                            var_548.d = zmm11.d
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_2036 & 2) == 0)
                            label_140223769:
                                zmm3 = _mm_mul_ps(zmm3, zmm0)
                                
                                if ((temp0_2036 & 4) != 0)
                                    var_548:8.d = __extractps_memd_xmmps_immb(zmm11, 2)
                            else
                            label_140224623:
                                var_548:4.d = __extractps_memd_xmmps_immb(zmm11, 1)
                                zmm3 = _mm_mul_ps(zmm3, zmm0)
                                
                                if ((temp0_2036 & 4) != 0)
                                    var_548:8.d = __extractps_memd_xmmps_immb(zmm11, 2)
                            
                            zmm9 = _mm_mul_ps(zmm9, zmm9)
                            zmm0 = data_142d3f670
                            float temp0_2232[0x4] = _mm_add_ps(zmm5, zmm3)
                            
                            if ((temp0_2036 & 8) != 0)
                                var_548:0xc.d = __extractps_memd_xmmps_immb(zmm11, 3)
                            
                            zmm0 = _mm_sub_ps(zmm0, zmm9)
                            zmm11 = _mm_mul_ps(zmm11, zmm11)
                            
                            if ((temp0_2036 & 1) != 0)
                                var_538.d = temp0_2232[0]
                            
                            zmm0 = _mm_sub_ps(zmm0, zmm11)
                            zmm2 = _mm_mul_ps(temp0_2232, temp0_2232)
                            zmm9 = var_588_5
                            
                            if ((temp0_2036 & 2) != 0)
                                var_538:4.d = __extractps_memd_xmmps_immb(temp0_2232, 1)
                            
                            zmm0 = _mm_sub_ps(zmm0, zmm2)
                            zmm13 = var_458_4
                            zmm11 = var_568_3
                            
                            if ((temp0_2036 & 4) == 0)
                                arg5 = _mm_cmpeq_ps(arg5, zmm0, 1)
                                zmm0 = _mm_sqrt_ps(zmm0)
                                
                                if ((temp0_2036 & 8) != 0)
                                    goto label_14022465e
                                
                                goto label_14022380d
                            
                            var_538:8.d = __extractps_memd_xmmps_immb(temp0_2232, 2)
                            arg5 = _mm_cmpeq_ps(arg5, zmm0, 1)
                            zmm0 = _mm_sqrt_ps(zmm0)
                            
                            if ((temp0_2036 & 8) != 0)
                            label_14022465e:
                                var_538:0xc.d = __extractps_memd_xmmps_immb(temp0_2232, 3)
                                arg5 = _mm_and_ps(arg5, zmm0)
                                
                                if ((temp0_2036 & 1) == 0)
                                    goto label_14022381f
                                
                                goto label_140224677
                            
                        label_14022380d:
                            arg5 = _mm_and_ps(arg5, zmm0)
                            
                            if ((temp0_2036 & 1) != 0)
                            label_140224677:
                                var_528[0] = arg5[0]
                                zmm5 = var_598_5
                                
                                if ((temp0_2036 & 2) != 0)
                                label_140224694:
                                    var_528[1] = __extractps_memd_xmmps_immb(arg5, 1)
                                    
                                    if ((temp0_2036 & 4) == 0)
                                        goto label_14022383c
                                    
                                    goto label_1402246aa
                            else
                            label_14022381f:
                                zmm5 = var_598_5
                                
                                if ((temp0_2036 & 2) != 0)
                                    goto label_140224694
                            
                            if ((temp0_2036 & 4) != 0)
                            label_1402246aa:
                                var_528[2] = __extractps_memd_xmmps_immb(arg5, 2)
                                zmm0 = temp0_1292
                                
                                if ((temp0_2036 & 8) != 0)
                                    var_528[3] = __extractps_memd_xmmps_immb(arg5, 3)
                            else
                            label_14022383c:
                                zmm0 = temp0_1292
                                
                                if ((temp0_2036 & 8) != 0)
                                    var_528[3] = __extractps_memd_xmmps_immb(arg5, 3)
                        
                        zmm12 ^= zmm0
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(zmm13 & zmm12, 0x1f)) != 0)
                            zmm1 = __pcmpeqd_xmmdq_memdq(data_143442ac0, var_4d8_2)
                            zmm2 = _mm_slli_epi32(zmm13 & zmm1, 0x1f)
                            char temp0_2248 = _mm_movemask_ps(zmm2)
                            
                            if (temp0_2248 != 0)
                                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                int32_t temp0_2250[0x4] = _mm_add_epi64(zmm9, zmm6)
                                int32_t temp0_2251[0x4] = _mm_add_epi64(var_4a8_1, zmm5)
                                zmm0 = data_1434426c0
                                int32_t temp0_2252[0x4] = _mm_add_epi64(temp0_2251, zmm11)
                                int32_t temp0_2254[0x4] =
                                    _mm_add_epi64(__paddq_xmmdq_memdq(temp0_2250, var_5b8_3), zmm0)
                                float temp0_2257[0x4] = _mm_blendv_ps(zx.o(0), 
                                    _mm_add_epi64(temp0_2252, zmm0), _mm_shuffle_epi32(zmm2, 0x50))
                                zmm2 = _mm_blendv_ps(zx.o(0), temp0_2254, 
                                    _mm_shuffle_epi32(zmm2, 0xfa))
                                int64_t rcx_123 = temp0_2257[0].q
                                int64_t rbp_72 = _mm_extract_epi64(temp0_2257, 1)
                                int64_t rdi_53 = _mm_extract_epi64(zmm2, 1)
                                zmm2 = __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(
                                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_123)), 
                                            *(arg4 + rbp_72), 1), 
                                        *(arg4 + zmm2.q), 2), 
                                    *(arg4 + rdi_53), 3)
                                zmm3 = _mm_srli_epi32(zmm2, 0x15)
                                zmm4 = _mm_srli_epi32(zmm2, 5)
                                zmm9 = data_143442600
                                zmm6 = data_143442610
                                zmm5 = data_143442320
                                zmm8 = data_143442330
                                zmm3 =
                                    _mm_add_epi32(zmm3 & zmm5, zmm8) | (zmm3 & zmm6) | (zmm4 & zmm9)
                                
                                if ((temp0_2248 & 1) != 0)
                                    var_558[0] = zmm3[0]
                                
                                zmm7 = _mm_srli_epi32(zmm2, 0xa)
                                zmm4 = _mm_slli_epi32(zmm2, 6)
                                
                                if ((temp0_2248 & 2) != 0)
                                    var_558[1] = __pextrd_memd_xmmdq_immb(zmm3, 1)
                                
                                if ((temp0_2248 & 4) != 0)
                                    var_558[2] = __pextrd_memd_xmmdq_immb(zmm3, 2)
                                
                                zmm5 = _mm_add_epi32(zmm5 & zmm7, zmm8)
                                zmm4 = (zmm4 & zmm9) | (zmm6 & zmm7)
                                zmm9 = var_588_5
                                
                                if ((temp0_2248 & 8) == 0)
                                    zmm4 |= zmm5
                                    
                                    if ((temp0_2248 & 1) != 0)
                                        goto label_1402246e7
                                    
                                    goto label_140223a08
                                
                                var_558[3] = __pextrd_memd_xmmdq_immb(zmm3, 3)
                                zmm4 |= zmm5
                                
                                if ((temp0_2248 & 1) == 0)
                                label_140223a08:
                                    zmm6 = data_143442620 & zmm2
                                    
                                    if ((temp0_2248 & 2) != 0)
                                        var_548:4.d = __pextrd_memd_xmmdq_immb(zmm4, 1)
                                else
                                label_1402246e7:
                                    var_548.d = zmm4[0]
                                    zmm6 = data_143442620 & zmm2
                                    
                                    if ((temp0_2248 & 2) != 0)
                                        var_548:4.d = __pextrd_memd_xmmdq_immb(zmm4, 1)
                                
                                zmm5 = zmm2
                                zmm2 &= data_143442640
                                zmm5 = _mm_slli_epi32(zmm5, 0x11)
                                zmm6 = __paddd_xmmdq_memdq(zmm6, data_1434423a0)
                                
                                if ((temp0_2248 & 4) != 0)
                                    var_548:8.d = __pextrd_memd_xmmdq_immb(zmm4, 2)
                                
                                zmm5 &= data_143442630
                                zmm2 |= zmm6
                                float temp0_2275[0x4] = _mm_mul_ps(zmm3, zmm3)
                                zmm6 = data_142d3f670
                                
                                if ((temp0_2248 & 8) != 0)
                                    var_548:0xc.d = __pextrd_memd_xmmdq_immb(zmm4, 3)
                                
                                zmm5 |= zmm2
                                zmm6 = _mm_sub_ps(zmm6, temp0_2275)
                                zmm4 = _mm_mul_ps(zmm4, zmm4)
                                
                                if ((temp0_2248 & 1) != 0)
                                    var_538.d = zmm5[0]
                                
                                zmm6 = _mm_sub_ps(zmm6, zmm4)
                                zmm2 = _mm_mul_ps(zmm5, zmm5)
                                
                                if ((temp0_2248 & 2) == 0)
                                    zmm6 = _mm_sub_ps(zmm6, zmm2)
                                    
                                    if ((temp0_2248 & 4) != 0)
                                        goto label_140224723
                                    
                                    goto label_140223aa8
                                
                                var_538:4.d = __pextrd_memd_xmmdq_immb(zmm5, 1)
                                zmm6 = _mm_sub_ps(zmm6, zmm2)
                                
                                if ((temp0_2248 & 4) != 0)
                                label_140224723:
                                    var_538:8.d = __pextrd_memd_xmmdq_immb(zmm5, 2)
                                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                                    zmm2 = _mm_sqrt_ps(zmm6)
                                    
                                    if ((temp0_2248 & 8) == 0)
                                        goto label_140223ab9
                                    
                                    goto label_14022473f
                                
                            label_140223aa8:
                                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                                zmm2 = _mm_sqrt_ps(zmm6)
                                
                                if ((temp0_2248 & 8) == 0)
                                label_140223ab9:
                                    zmm0 = _mm_and_ps(zmm0, zmm2)
                                    zmm6 = var_578_3
                                    
                                    if ((temp0_2248 & 1) != 0)
                                        goto label_140224760
                                    
                                    goto label_140223ad3
                                
                            label_14022473f:
                                var_538:0xc.d = __pextrd_memd_xmmdq_immb(zmm5, 3)
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                zmm6 = var_578_3
                                
                                if ((temp0_2248 & 1) != 0)
                                label_140224760:
                                    var_528[0] = zmm0.d
                                    zmm5 = var_598_5
                                    
                                    if ((temp0_2248 & 2) == 0)
                                        goto label_140223ae2
                                    
                                    goto label_14022477c
                                
                            label_140223ad3:
                                zmm5 = var_598_5
                                
                                if ((temp0_2248 & 2) == 0)
                                label_140223ae2:
                                    
                                    if ((temp0_2248 & 4) != 0)
                                        goto label_140224791
                                    
                                    goto label_140223aec
                                
                            label_14022477c:
                                var_528[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_2248 & 4) == 0)
                                label_140223aec:
                                    
                                    if ((temp0_2248 & 8) != 0)
                                        var_528[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                else
                                label_140224791:
                                    var_528[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                                    
                                    if ((temp0_2248 & 8) != 0)
                                        var_528[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                            
                            zmm13 &= zmm12 ^ zmm1
                            
                            if (_mm_movemask_ps(_mm_slli_epi32(zmm13, 0x1f)) != 0)
                                zmm1 = __pcmpeqd_xmmdq_memdq(data_142fc95e0, var_4d8_2)
                                zmm2 = _mm_slli_epi32(zmm13 & zmm1, 0x1f)
                                char temp0_2290 = _mm_movemask_ps(zmm2)
                                
                                if (temp0_2290 != 0)
                                    zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                    int32_t temp0_2292[0x4] = _mm_add_epi64(zmm9, zmm6)
                                    int32_t temp0_2293[0x4] = _mm_add_epi64(var_4a8_1, zmm5)
                                    zmm0 = data_1434426c0
                                    int32_t temp0_2294[0x4] = _mm_add_epi64(temp0_2293, zmm11)
                                    int32_t temp0_2296[0x4] = _mm_add_epi64(
                                        __paddq_xmmdq_memdq(temp0_2292, var_5b8_3), zmm0)
                                    float temp0_2299[0x4] = _mm_blendv_ps(zx.o(0), 
                                        _mm_add_epi64(temp0_2294, zmm0), 
                                        _mm_shuffle_epi32(zmm2, 0x50))
                                    zmm2 = _mm_blendv_ps(zx.o(0), temp0_2296, 
                                        _mm_shuffle_epi32(zmm2, 0xfa))
                                    int64_t rcx_124 = temp0_2299[0].q
                                    int64_t rbp_74 = _mm_extract_epi64(temp0_2299, 1)
                                    int64_t rbx_60 = _mm_extract_epi64(zmm2, 1)
                                    zmm3 = __pinsrd_xmmdq_memd_immb(
                                        __pinsrd_xmmdq_memd_immb(
                                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_124)), 
                                                *(arg4 + rbp_74), 1), 
                                            *(arg4 + zmm2.q), 2), 
                                        *(arg4 + rbx_60), 3)
                                    zmm4 = _mm_srli_epi32(zmm3, 0xa) & data_143442480
                                    zmm2 = _mm_srli_epi32(zmm3, 0x15)
                                    zmm6 = data_143442440
                                    zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm6))
                                    zmm5 = data_143442690
                                    zmm2 = _mm_div_ps(zmm2, zmm5)
                                    
                                    if ((temp0_2290 & 1) == 0)
                                        zmm4 = _mm_add_epi32(zmm4, zmm6)
                                        
                                        if ((temp0_2290 & 2) != 0)
                                            goto label_140224a3f
                                        
                                        goto label_140223c17
                                    
                                    var_558[0] = zmm2.d
                                    zmm4 = _mm_add_epi32(zmm4, zmm6)
                                    
                                    if ((temp0_2290 & 2) != 0)
                                    label_140224a3f:
                                        var_558[1] = __extractps_memd_xmmps_immb(zmm2, 1)
                                        zmm4 = _mm_cvtepi32_ps(zmm4)
                                        
                                        if ((temp0_2290 & 4) == 0)
                                            goto label_140223c22
                                        
                                        goto label_140224a55
                                    
                                label_140223c17:
                                    zmm4 = _mm_cvtepi32_ps(zmm4)
                                    
                                    if ((temp0_2290 & 4) == 0)
                                    label_140223c22:
                                        zmm4 = _mm_div_ps(zmm4, zmm5)
                                        
                                        if ((temp0_2290 & 8) != 0)
                                            goto label_140224a6b
                                        
                                        goto label_140223c2d
                                    
                                label_140224a55:
                                    var_558[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                                    zmm4 = _mm_div_ps(zmm4, zmm5)
                                    
                                    if ((temp0_2290 & 8) != 0)
                                    label_140224a6b:
                                        var_558[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                                        zmm3 &= data_143442680
                                        
                                        if ((temp0_2290 & 1) == 0)
                                            goto label_140223c3d
                                        
                                        goto label_140224a86
                                    
                                label_140223c2d:
                                    zmm3 &= data_143442680
                                    
                                    if ((temp0_2290 & 1) == 0)
                                    label_140223c3d:
                                        zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442490)
                                        
                                        if ((temp0_2290 & 2) != 0)
                                            goto label_140224a9f
                                        
                                        goto label_140223c4d
                                    
                                label_140224a86:
                                    var_548.d = zmm4[0]
                                    zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442490)
                                    
                                    if ((temp0_2290 & 2) == 0)
                                    label_140223c4d:
                                        zmm3 = _mm_cvtepi32_ps(zmm3)
                                        
                                        if ((temp0_2290 & 4) != 0)
                                            var_548:8.d = __extractps_memd_xmmps_immb(zmm4, 2)
                                    else
                                    label_140224a9f:
                                        var_548:4.d = __extractps_memd_xmmps_immb(zmm4, 1)
                                        zmm3 = _mm_cvtepi32_ps(zmm3)
                                        
                                        if ((temp0_2290 & 4) != 0)
                                            var_548:8.d = __extractps_memd_xmmps_immb(zmm4, 2)
                                    
                                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                                    zmm5 = data_142d3f670
                                    float temp0_2317[0x4] =
                                        __divps_xmmps_memps(zmm3, data_1434426a0)
                                    
                                    if ((temp0_2290 & 8) != 0)
                                        var_548:0xc.d = __extractps_memd_xmmps_immb(zmm4, 3)
                                    
                                    float temp0_2319[0x4] = _mm_sub_ps(zmm5, zmm2)
                                    zmm4 = _mm_mul_ps(zmm4, zmm4)
                                    
                                    if ((temp0_2290 & 1) != 0)
                                        var_538.d = temp0_2317[0]
                                    
                                    float temp0_2321[0x4] = _mm_sub_ps(temp0_2319, zmm4)
                                    zmm2 = _mm_mul_ps(temp0_2317, temp0_2317)
                                    
                                    if ((temp0_2290 & 2) == 0)
                                        zmm5 = _mm_sub_ps(temp0_2321, zmm2)
                                        
                                        if ((temp0_2290 & 4) != 0)
                                            goto label_140224ad0
                                        
                                        goto label_140223cae
                                    
                                    var_538:4.d = __extractps_memd_xmmps_immb(temp0_2317, 1)
                                    zmm5 = _mm_sub_ps(temp0_2321, zmm2)
                                    
                                    if ((temp0_2290 & 4) != 0)
                                    label_140224ad0:
                                        var_538:8.d = __extractps_memd_xmmps_immb(temp0_2317, 2)
                                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                                        zmm2 = _mm_sqrt_ps(zmm5)
                                        
                                        if ((temp0_2290 & 8) == 0)
                                            goto label_140223cbd
                                        
                                        goto label_140224aea
                                    
                                label_140223cae:
                                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                                    zmm2 = _mm_sqrt_ps(zmm5)
                                    
                                    if ((temp0_2290 & 8) == 0)
                                    label_140223cbd:
                                        zmm0 = _mm_and_ps(zmm0, zmm2)
                                        
                                        if ((temp0_2290 & 1) != 0)
                                            goto label_140224b00
                                        
                                        goto label_140223cc8
                                    
                                label_140224aea:
                                    var_538:0xc.d = __extractps_memd_xmmps_immb(temp0_2317, 3)
                                    zmm0 = _mm_and_ps(zmm0, zmm2)
                                    
                                    if ((temp0_2290 & 1) != 0)
                                    label_140224b00:
                                        var_528[0] = zmm0.d
                                        
                                        if ((temp0_2290 & 2) == 0)
                                            goto label_140223cd0
                                        
                                        goto label_140224b11
                                    
                                label_140223cc8:
                                    
                                    if ((temp0_2290 & 2) == 0)
                                    label_140223cd0:
                                        
                                        if ((temp0_2290 & 4) != 0)
                                            goto label_140224b24
                                        
                                        goto label_140223cd8
                                    
                                label_140224b11:
                                    var_528[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                                    
                                    if ((temp0_2290 & 4) == 0)
                                    label_140223cd8:
                                        
                                        if ((temp0_2290 & 8) != 0)
                                            var_528[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                    else
                                    label_140224b24:
                                        var_528[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                                        
                                        if ((temp0_2290 & 8) != 0)
                                            var_528[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                
                                zmm1 &= not.o(zmm13)
                                
                                if (_mm_movemask_ps(_mm_slli_epi32(zmm1, 0x1f)) != 0)
                                    zmm0 = __pcmpeqd_xmmdq_memdq(var_4d8_2, data_143442ad0)
                                    char temp0_2332 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm13 & zmm0, 0x1f))
                                    
                                    if (temp0_2332 != 0)
                                        if ((temp0_2332 & 1) == 0)
                                            if ((temp0_2332 & 2) != 0)
                                                goto label_140224b4f
                                            
                                            goto label_140223d3b
                                        
                                        var_558[0] = 0
                                        
                                        if ((temp0_2332 & 2) != 0)
                                        label_140224b4f:
                                            var_558[1] = 0
                                            
                                            if ((temp0_2332 & 4) == 0)
                                                goto label_140223d43
                                            
                                            goto label_140224b62
                                        
                                    label_140223d3b:
                                        
                                        if ((temp0_2332 & 4) == 0)
                                        label_140223d43:
                                            
                                            if ((temp0_2332 & 8) != 0)
                                                goto label_140224b75
                                            
                                            goto label_140223d4b
                                        
                                    label_140224b62:
                                        var_558[2] = 0
                                        
                                        if ((temp0_2332 & 8) != 0)
                                        label_140224b75:
                                            var_558[3] = 0
                                            
                                            if ((temp0_2332 & 1) == 0)
                                                goto label_140223d53
                                            
                                            goto label_140224b88
                                        
                                    label_140223d4b:
                                        
                                        if ((temp0_2332 & 1) == 0)
                                        label_140223d53:
                                            
                                            if ((temp0_2332 & 2) != 0)
                                                goto label_140224b9b
                                            
                                            goto label_140223d5b
                                        
                                    label_140224b88:
                                        var_548.d = 0
                                        
                                        if ((temp0_2332 & 2) != 0)
                                        label_140224b9b:
                                            var_548:4.d = 0
                                            
                                            if ((temp0_2332 & 4) == 0)
                                                goto label_140223d63
                                            
                                            goto label_140224bae
                                        
                                    label_140223d5b:
                                        
                                        if ((temp0_2332 & 4) == 0)
                                        label_140223d63:
                                            
                                            if ((temp0_2332 & 8) != 0)
                                                goto label_140224bc1
                                            
                                            goto label_140223d6b
                                        
                                    label_140224bae:
                                        var_548:8.d = 0
                                        
                                        if ((temp0_2332 & 8) != 0)
                                        label_140224bc1:
                                            var_548:0xc.d = 0
                                            
                                            if ((temp0_2332 & 1) == 0)
                                                goto label_140223d73
                                            
                                            goto label_140224bd4
                                        
                                    label_140223d6b:
                                        
                                        if ((temp0_2332 & 1) == 0)
                                        label_140223d73:
                                            
                                            if ((temp0_2332 & 2) != 0)
                                                goto label_140224be7
                                            
                                            goto label_140223d7b
                                        
                                    label_140224bd4:
                                        var_538.d = 0
                                        
                                        if ((temp0_2332 & 2) != 0)
                                        label_140224be7:
                                            var_538:4.d = 0
                                            
                                            if ((temp0_2332 & 4) == 0)
                                                goto label_140223d83
                                            
                                            goto label_140224bfa
                                        
                                    label_140223d7b:
                                        
                                        if ((temp0_2332 & 4) == 0)
                                        label_140223d83:
                                            
                                            if ((temp0_2332 & 8) != 0)
                                                goto label_140224c0d
                                            
                                            goto label_140223d8b
                                        
                                    label_140224bfa:
                                        var_538:8.d = 0
                                        
                                        if ((temp0_2332 & 8) != 0)
                                        label_140224c0d:
                                            var_538:0xc.d = 0
                                            
                                            if ((temp0_2332 & 1) == 0)
                                                goto label_140223d93
                                            
                                            goto label_140224c20
                                        
                                    label_140223d8b:
                                        
                                        if ((temp0_2332 & 1) == 0)
                                        label_140223d93:
                                            
                                            if ((temp0_2332 & 2) != 0)
                                                goto label_140224c33
                                            
                                            goto label_140223d9b
                                        
                                    label_140224c20:
                                        var_528[0] = 0x3f800000
                                        
                                        if ((temp0_2332 & 2) != 0)
                                        label_140224c33:
                                            var_528[1] = 0x3f800000
                                            
                                            if ((temp0_2332 & 4) == 0)
                                                goto label_140223da3
                                            
                                            goto label_140224c46
                                        
                                    label_140223d9b:
                                        
                                        if ((temp0_2332 & 4) != 0)
                                        label_140224c46:
                                            var_528[2] = 0x3f800000
                                            
                                            if ((temp0_2332 & 8) != 0)
                                                var_528[3] = 0x3f800000
                                        else
                                        label_140223da3:
                                            
                                            if ((temp0_2332 & 8) != 0)
                                                var_528[3] = 0x3f800000
                                    
                                    char temp0_2334 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm1), 0x1f))
                                    
                                    if (temp0_2334 != 0)
                                        if ((temp0_2334 & 1) == 0)
                                            if ((temp0_2334 & 2) != 0)
                                                goto label_140224c71
                                            
                                            goto label_140223dd9
                                        
                                        var_558[0] = 0
                                        
                                        if ((temp0_2334 & 2) != 0)
                                        label_140224c71:
                                            var_558[1] = 0
                                            
                                            if ((temp0_2334 & 4) == 0)
                                                goto label_140223de1
                                            
                                            goto label_140224c84
                                        
                                    label_140223dd9:
                                        
                                        if ((temp0_2334 & 4) == 0)
                                        label_140223de1:
                                            
                                            if ((temp0_2334 & 8) != 0)
                                                goto label_140224c97
                                            
                                            goto label_140223de9
                                        
                                    label_140224c84:
                                        var_558[2] = 0
                                        
                                        if ((temp0_2334 & 8) != 0)
                                        label_140224c97:
                                            var_558[3] = 0
                                            
                                            if ((temp0_2334 & 1) == 0)
                                                goto label_140223df1
                                            
                                            goto label_140224caa
                                        
                                    label_140223de9:
                                        
                                        if ((temp0_2334 & 1) == 0)
                                        label_140223df1:
                                            
                                            if ((temp0_2334 & 2) != 0)
                                                goto label_140224cbd
                                            
                                            goto label_140223df9
                                        
                                    label_140224caa:
                                        var_548.d = 0
                                        
                                        if ((temp0_2334 & 2) != 0)
                                        label_140224cbd:
                                            var_548:4.d = 0
                                            
                                            if ((temp0_2334 & 4) == 0)
                                                goto label_140223e01
                                            
                                            goto label_140224cd0
                                        
                                    label_140223df9:
                                        
                                        if ((temp0_2334 & 4) == 0)
                                        label_140223e01:
                                            
                                            if ((temp0_2334 & 8) != 0)
                                                goto label_140224ce3
                                            
                                            goto label_140223e09
                                        
                                    label_140224cd0:
                                        var_548:8.d = 0
                                        
                                        if ((temp0_2334 & 8) != 0)
                                        label_140224ce3:
                                            var_548:0xc.d = 0
                                            
                                            if ((temp0_2334 & 1) == 0)
                                                goto label_140223e11
                                            
                                            goto label_140224cf6
                                        
                                    label_140223e09:
                                        
                                        if ((temp0_2334 & 1) == 0)
                                        label_140223e11:
                                            
                                            if ((temp0_2334 & 2) != 0)
                                                goto label_140224d09
                                            
                                            goto label_140223e19
                                        
                                    label_140224cf6:
                                        var_538.d = 0
                                        
                                        if ((temp0_2334 & 2) != 0)
                                        label_140224d09:
                                            var_538:4.d = 0
                                            
                                            if ((temp0_2334 & 4) == 0)
                                                goto label_140223e21
                                            
                                            goto label_140224d1c
                                        
                                    label_140223e19:
                                        
                                        if ((temp0_2334 & 4) == 0)
                                        label_140223e21:
                                            
                                            if ((temp0_2334 & 8) != 0)
                                                goto label_140224d2f
                                            
                                            goto label_140223e29
                                        
                                    label_140224d1c:
                                        var_538:8.d = 0
                                        
                                        if ((temp0_2334 & 8) != 0)
                                        label_140224d2f:
                                            var_538:0xc.d = 0
                                            
                                            if ((temp0_2334 & 1) == 0)
                                                goto label_140223e31
                                            
                                            goto label_140224d42
                                        
                                    label_140223e29:
                                        
                                        if ((temp0_2334 & 1) == 0)
                                        label_140223e31:
                                            
                                            if ((temp0_2334 & 2) != 0)
                                                goto label_140224d55
                                            
                                            goto label_140223e39
                                        
                                    label_140224d42:
                                        var_528[0] = 0x3f800000
                                        
                                        if ((temp0_2334 & 2) != 0)
                                        label_140224d55:
                                            var_528[1] = 0x3f800000
                                            
                                            if ((temp0_2334 & 4) == 0)
                                                goto label_140223e41
                                            
                                            goto label_140224d68
                                        
                                    label_140223e39:
                                        
                                        if ((temp0_2334 & 4) != 0)
                                        label_140224d68:
                                            var_528[2] = 0x3f800000
                                            
                                            if ((temp0_2334 & 8) != 0)
                                                var_528[3] = 0x3f800000
                                        else
                                        label_140223e41:
                                            
                                            if ((temp0_2334 & 8) != 0)
                                                var_528[3] = 0x3f800000
                
                zmm0 = _mm_mul_ps(var_638, var_558)
                zmm4 = _mm_add_ps(_mm_mul_ps(var_628, var_548), zmm0)
                zmm0 = _mm_add_ps(_mm_mul_ps(var_618, var_538), zmm4)
                zmm0 = _mm_cmpeq_ps(zx.o(0), _mm_add_ps(_mm_mul_ps(var_608, var_528), zmm0), 2)
                float temp0_2343[0x4] = _mm_mul_ps(var_558, arg6)
                zmm4 = data_142d3f670
                float temp0_2344[0x4] = _mm_blendv_ps(data_142d3f7e0, zmm4, zmm0)
                zmm4 = _mm_mul_ps(_mm_sub_ps(zmm4, arg6), temp0_2344)
                zmm2 = _mm_add_ps(_mm_mul_ps(var_638, zmm4), temp0_2343)
                
                if ((temp0_1919 & 1) != 0)
                    var_638.d = zmm2.d
                    zmm13 = var_3e8_1
                    
                    if ((temp0_1919 & 2) != 0)
                    label_1402244c6:
                        var_638:4.d = __extractps_memd_xmmps_immb(zmm2, 1)
                        
                        if ((temp0_1919 & 4) == 0)
                            goto label_140223efa
                        
                        goto label_1402244d6
                else
                    zmm13 = var_3e8_1
                    
                    if ((temp0_1919 & 2) != 0)
                        goto label_1402244c6
                
                if ((temp0_1919 & 4) == 0)
                label_140223efa:
                    zmm6 = _mm_mul_ps(var_548, arg6)
                    zmm7 = _mm_mul_ps(var_628, zmm4)
                    
                    if ((temp0_1919 & 8) != 0)
                        goto label_1402244ed
                    
                    goto label_140223f09
                
            label_1402244d6:
                var_638:8.d = __extractps_memd_xmmps_immb(zmm2, 2)
                zmm6 = _mm_mul_ps(var_548, arg6)
                zmm7 = _mm_mul_ps(var_628, zmm4)
                
                if ((temp0_1919 & 8) != 0)
                label_1402244ed:
                    var_638:0xc.d = __extractps_memd_xmmps_immb(zmm2, 3)
                    zmm6 = _mm_add_ps(zmm6, zmm7)
                    
                    if ((temp0_1919 & 1) == 0)
                        goto label_140223f14
                    
                    goto label_140224500
                
            label_140223f09:
                zmm6 = _mm_add_ps(zmm6, zmm7)
                
                if ((temp0_1919 & 1) != 0)
                label_140224500:
                    var_628[0] = zmm6.d
                    
                    if ((temp0_1919 & 2) != 0)
                    label_14022450e:
                        var_628[1] = __extractps_memd_xmmps_immb(zmm6, 1)
                        
                        if ((temp0_1919 & 4) == 0)
                            goto label_140223f24
                        
                        goto label_14022451e
                else
                label_140223f14:
                    
                    if ((temp0_1919 & 2) != 0)
                        goto label_14022450e
                
                if ((temp0_1919 & 4) == 0)
                label_140223f24:
                    zmm1 = _mm_mul_ps(var_538, arg6)
                    arg5 = _mm_mul_ps(var_618, zmm4)
                    
                    if ((temp0_1919 & 8) != 0)
                        goto label_140224536
                    
                    goto label_140223f34
                
            label_14022451e:
                var_628[2] = __extractps_memd_xmmps_immb(zmm6, 2)
                zmm1 = _mm_mul_ps(var_538, arg6)
                arg5 = _mm_mul_ps(var_618, zmm4)
                
                if ((temp0_1919 & 8) != 0)
                label_140224536:
                    var_628[3] = __extractps_memd_xmmps_immb(zmm6, 3)
                    zmm1 = _mm_add_ps(zmm1, arg5)
                    
                    if ((temp0_1919 & 1) == 0)
                        goto label_140223f40
                    
                    goto label_14022454a
                
            label_140223f34:
                zmm1 = _mm_add_ps(zmm1, arg5)
                
                if ((temp0_1919 & 1) != 0)
                label_14022454a:
                    var_618[0] = zmm1.d
                    
                    if ((temp0_1919 & 2) != 0)
                    label_140224558:
                        var_618[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                        
                        if ((temp0_1919 & 4) == 0)
                            goto label_140223f50
                        
                        goto label_140224568
                else
                label_140223f40:
                    
                    if ((temp0_1919 & 2) != 0)
                        goto label_140224558
                
                if ((temp0_1919 & 4) == 0)
                label_140223f50:
                    arg6 = _mm_mul_ps(arg6, var_528)
                    zmm4 = _mm_mul_ps(zmm4, var_608)
                    
                    if ((temp0_1919 & 8) != 0)
                        goto label_140224580
                    
                    goto label_140223f60
                
            label_140224568:
                var_618[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                arg6 = _mm_mul_ps(arg6, var_528)
                zmm4 = _mm_mul_ps(zmm4, var_608)
                
                if ((temp0_1919 & 8) != 0)
                label_140224580:
                    var_618[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                    arg6 = _mm_add_ps(arg6, zmm4)
                    
                    if ((temp0_1919 & 1) == 0)
                        goto label_140223f6c
                    
                    goto label_140224594
                
            label_140223f60:
                arg6 = _mm_add_ps(arg6, zmm4)
                
                if ((temp0_1919 & 1) == 0)
                label_140223f6c:
                    
                    if ((temp0_1919 & 2) != 0)
                        goto label_1402245a3
                    
                    goto label_140223f74
                
            label_140224594:
                var_608[0].d = arg6[0]
                
                if ((temp0_1919 & 2) != 0)
                label_1402245a3:
                    var_608[0]:4.d = __extractps_memd_xmmps_immb(arg6, 1)
                    
                    if ((temp0_1919 & 4) == 0)
                        goto label_140223f7f
                    
                    goto label_1402245b4
                
            label_140223f74:
                
                if ((temp0_1919 & 4) != 0)
                label_1402245b4:
                    var_608[1].d = __extractps_memd_xmmps_immb(arg6, 2)
                    
                    if ((temp0_1919 & 8) != 0)
                        var_608[1]:4.d = __extractps_memd_xmmps_immb(arg6, 3)
                else
                label_140223f7f:
                    
                    if ((temp0_1919 & 8) != 0)
                        var_608[1]:4.d = __extractps_memd_xmmps_immb(arg6, 3)
            
            zmm8 = var_3f8_1
            zmm1 = var_628
            zmm3 = var_618
            zmm2 = var_608
            zmm0 = _mm_mul_ps(var_638, var_638)
            zmm1 = _mm_mul_ps(zmm1, zmm1)
            float temp0_2362[0x4] = _mm_add_ps(_mm_mul_ps(zmm3, zmm3), zmm0)
            zmm2 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm2, zmm2), zmm1), temp0_2362)
            zmm1 = data_142d3f5c0
            float temp0_2366[0x4] = _mm_cmpeq_ps(zmm1, zmm2, 2)
            zmm0 = data_142d3f640
            zmm7 = _mm_mul_ps(zmm2, zmm0)
            int32_t var_128_1[0x4] = zmm7
            int32_t var_118_1[0x4] = zmm7
            int32_t var_108_1[0x4] = zmm7
            zmm4 = _mm_rsqrt_ps(zmm2)
            zmm6 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm0, _mm_mul_ps(_mm_mul_ps(zmm4, zmm4), zmm7)), zmm4), zmm4)
            zmm0 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm0, _mm_mul_ps(_mm_mul_ps(zmm6, zmm6), zmm7)), zmm6), zmm6)
            zmm6 = _mm_mul_ps(var_638, zmm0)
            float temp0_2380[0x4] = _mm_mul_ps(var_628, zmm0)
            zmm4 = _mm_mul_ps(var_618, zmm0)
            zmm0 = __mulps_xmmps_memps(zmm0, var_608)
            int32_t var_f8_1[0x4] = zmm7
            zmm6 = _mm_and_ps(zmm6, temp0_2366)
            
            if ((temp0_1264 & 1) == 0)
                if ((temp0_1264 & 2) != 0)
                    goto label_1402242bf
                
                goto label_140224056
            
            var_638.d = zmm6.d
            
            if ((temp0_1264 & 2) != 0)
            label_1402242bf:
                var_638:4.d = __extractps_memd_xmmps_immb(zmm6, 1)
                
                if ((temp0_1264 & 4) == 0)
                    goto label_14022405e
                
                goto label_1402242ce
            
        label_140224056:
            
            if ((temp0_1264 & 4) == 0)
            label_14022405e:
                
                if ((temp0_1264 & 8) != 0)
                    goto label_1402242dd
                
                goto label_140224066
            
        label_1402242ce:
            var_638:8.d = __extractps_memd_xmmps_immb(zmm6, 2)
            
            if ((temp0_1264 & 8) != 0)
            label_1402242dd:
                var_638:0xc.d = __extractps_memd_xmmps_immb(zmm6, 3)
                zmm5 = _mm_and_ps(temp0_2380, temp0_2366)
                
                if ((temp0_1264 & 1) == 0)
                    goto label_140224071
                
                goto label_1402242ef
            
        label_140224066:
            zmm5 = _mm_and_ps(temp0_2380, temp0_2366)
            
            if ((temp0_1264 & 1) == 0)
            label_140224071:
                
                if ((temp0_1264 & 2) != 0)
                    goto label_1402242fd
                
                goto label_140224079
            
        label_1402242ef:
            var_628[0] = zmm5[0]
            
            if ((temp0_1264 & 2) != 0)
            label_1402242fd:
                var_628[1] = __extractps_memd_xmmps_immb(zmm5, 1)
                
                if ((temp0_1264 & 4) == 0)
                    goto label_140224081
                
                goto label_14022430d
            
        label_140224079:
            
            if ((temp0_1264 & 4) == 0)
            label_140224081:
                
                if ((temp0_1264 & 8) != 0)
                    goto label_14022431d
                
                goto label_140224089
            
        label_14022430d:
            var_628[2] = __extractps_memd_xmmps_immb(zmm5, 2)
            
            if ((temp0_1264 & 8) != 0)
            label_14022431d:
                var_628[3] = __extractps_memd_xmmps_immb(zmm5, 3)
                zmm4 = _mm_and_ps(zmm4, temp0_2366)
                
                if ((temp0_1264 & 1) == 0)
                    goto label_140224094
                
                goto label_140224330
            
        label_140224089:
            zmm4 = _mm_and_ps(zmm4, temp0_2366)
            
            if ((temp0_1264 & 1) == 0)
            label_140224094:
                
                if ((temp0_1264 & 2) != 0)
                    goto label_14022433e
                
                goto label_14022409c
            
        label_140224330:
            var_618[0] = zmm4[0]
            
            if ((temp0_1264 & 2) != 0)
            label_14022433e:
                var_618[1] = __extractps_memd_xmmps_immb(zmm4, 1)
                zmm1 = _mm_cmpeq_ps(zmm1, zmm2, 6)
                
                if ((temp0_1264 & 4) == 0)
                    goto label_1402240a8
                
                goto label_140224352
            
        label_14022409c:
            zmm1 = _mm_cmpeq_ps(zmm1, zmm2, 6)
            
            if ((temp0_1264 & 4) == 0)
            label_1402240a8:
                zmm0 = _mm_and_ps(zmm0, temp0_2366)
                zmm1 = __andps_xmmxud_memxud(zmm1, data_142d3f670)
                
                if ((temp0_1264 & 8) != 0)
                    goto label_14022436c
                
                goto label_1402240ba
            
        label_140224352:
            var_618[2] = __extractps_memd_xmmps_immb(zmm4, 2)
            zmm0 = _mm_and_ps(zmm0, temp0_2366)
            zmm1 = __andps_xmmxud_memxud(zmm1, data_142d3f670)
            
            if ((temp0_1264 & 8) != 0)
            label_14022436c:
                var_618[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                zmm0 = _mm_or_ps(zmm0, zmm1)
                
                if ((temp0_1264 & 1) == 0)
                    goto label_1402240c7
                
                goto label_14022437f
            
        label_1402240ba:
            zmm0 = _mm_or_ps(zmm0, zmm1)
            
            if ((temp0_1264 & 1) == 0)
            label_1402240c7:
                zmm1 = var_3c8_2
                
                if ((temp0_1264 & 2) != 0)
                    goto label_140224396
                
                goto label_1402240d6
            
        label_14022437f:
            var_608[0].d = zmm0.d
            zmm1 = var_3c8_2
            
            if ((temp0_1264 & 2) != 0)
            label_140224396:
                var_608[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                
                if ((temp0_1264 & 4) == 0)
                    goto label_1402240de
                
                goto label_1402243a6
            
        label_1402240d6:
            
            if ((temp0_1264 & 4) != 0)
            label_1402243a6:
                var_608[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((temp0_1264 & 8) != 0)
                    var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_1402240de:
                
                if ((temp0_1264 & 8) != 0)
                    var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
        
        char temp0_2391 = _mm_movemask_ps(zmm1 & zmm13)
        
        if (temp0_2391 != 0)
            if ((temp0_2391 & 1) == 0)
                if ((temp0_2391 & 2) != 0)
                    goto label_1402243ca
                
                goto label_14022410d
            
            var_638.d = 0
            
            if ((temp0_2391 & 2) != 0)
            label_1402243ca:
                var_638:4.d = 0
                
                if ((temp0_2391 & 4) == 0)
                    goto label_140224115
                
                goto label_1402243da
            
        label_14022410d:
            
            if ((temp0_2391 & 4) == 0)
            label_140224115:
                
                if ((temp0_2391 & 8) != 0)
                    goto label_1402243ea
                
                goto label_14022411d
            
        label_1402243da:
            var_638:8.d = 0
            
            if ((temp0_2391 & 8) != 0)
            label_1402243ea:
                var_638:0xc.d = 0
                
                if ((temp0_2391 & 1) == 0)
                    goto label_140224125
                
                goto label_1402243fa
            
        label_14022411d:
            
            if ((temp0_2391 & 1) == 0)
            label_140224125:
                
                if ((temp0_2391 & 2) != 0)
                    goto label_14022440a
                
                goto label_14022412d
            
        label_1402243fa:
            var_628[0] = 0
            
            if ((temp0_2391 & 2) != 0)
            label_14022440a:
                var_628[1] = 0
                
                if ((temp0_2391 & 4) == 0)
                    goto label_140224135
                
                goto label_14022441a
            
        label_14022412d:
            
            if ((temp0_2391 & 4) == 0)
            label_140224135:
                
                if ((temp0_2391 & 8) != 0)
                    goto label_14022442a
                
                goto label_14022413d
            
        label_14022441a:
            var_628[2] = 0
            
            if ((temp0_2391 & 8) != 0)
            label_14022442a:
                var_628[3] = 0
                
                if ((temp0_2391 & 1) == 0)
                    goto label_140224145
                
                goto label_14022443a
            
        label_14022413d:
            
            if ((temp0_2391 & 1) == 0)
            label_140224145:
                
                if ((temp0_2391 & 2) != 0)
                    goto label_14022444a
                
                goto label_14022414d
            
        label_14022443a:
            var_618[0] = 0
            
            if ((temp0_2391 & 2) != 0)
            label_14022444a:
                var_618[1] = 0
                
                if ((temp0_2391 & 4) == 0)
                    goto label_140224155
                
                goto label_14022445a
            
        label_14022414d:
            
            if ((temp0_2391 & 4) == 0)
            label_140224155:
                
                if ((temp0_2391 & 8) != 0)
                    goto label_14022446a
                
                goto label_14022415d
            
        label_14022445a:
            var_618[2] = 0
            
            if ((temp0_2391 & 8) != 0)
            label_14022446a:
                var_618[3] = 0
                
                if ((temp0_2391 & 1) == 0)
                    goto label_140224165
                
                goto label_14022447a
            
        label_14022415d:
            
            if ((temp0_2391 & 1) == 0)
            label_140224165:
                
                if ((temp0_2391 & 2) != 0)
                    goto label_14022448a
                
                goto label_14022416d
            
        label_14022447a:
            var_608[0].d = 0x3f800000
            
            if ((temp0_2391 & 2) != 0)
            label_14022448a:
                var_608[0]:4.d = 0x3f800000
                
                if ((temp0_2391 & 4) == 0)
                    goto label_140224175
                
                goto label_14022449a
            
        label_14022416d:
            
            if ((temp0_2391 & 4) != 0)
            label_14022449a:
                var_608[1].d = 0x3f800000
                
                if ((temp0_2391 & 8) != 0)
                    var_608[1]:4.d = 0x3f800000
            else
            label_140224175:
                
                if ((temp0_2391 & 8) != 0)
                    var_608[1]:4.d = 0x3f800000
        
        zmm1 = var_628
        zmm2 = var_618
        zmm3 = var_608
        int32_t temp0_2392[0x4] = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
        zmm2 = _mm_unpackhi_epi32(zmm2, zmm3[0].q)
        zmm3 = _mm_unpacklo_epi32(var_638, zmm1.q)
        zmm0 = _mm_unpackhi_epi32(var_638, zmm1.q)
        uint128_t var_1a8 = _mm_unpacklo_epi64(zmm3, temp0_2392[0].q)
        float var_198_1[0x4] = _mm_unpackhi_epi64(zmm3, temp0_2392[0].q)
        uint128_t var_188_1 = _mm_unpacklo_epi64(zmm0, zmm2.q)
        uint128_t var_178_1 = _mm_unpackhi_epi64(zmm0, zmm2.q)
        i_4 = zx.q(_mm_movemask_ps(zmm13))
        
        do
            uint64_t rcx_125
            uint64_t rflags_1
            
            if (i_4 == 0)
                rcx_125 = 0x40
            else
                rcx_125, rflags_1 = _bit_scan_forward(i_4)
            int64_t var_1b8[0x2] = zmm8
            arg1[sx.q(*(&var_1b8 + ((zx.q(rcx_125.d) & 3) << 2))) * 3] = (&var_1a8)[rcx_125]
            i_4 &= rol.q(-2, rcx_125.b)
        while (i_4 != 0)
else
    uint128_t var_1c8_1 = _mm_shuffle_epi32(_mm_add_epi64(4, zx.o(arg4)), 0x44)
    uint128_t var_2c8_1 = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t rcx
    rcx.b = 0f f>= zmm2.d
    uint128_t var_1f8_1 = _mm_shuffle_epi32(zx.o(neg.d(rcx)), 0)
    zmm3[0] = float.s(arg7 - 1)
    zmm3[0] = zmm3[0] f* zmm2.d
    uint128_t var_428_1 = _mm_shuffle_epi32(
        _mm_min_epi32(zx.o(arg7 - 2), _mm_max_epi32(zx.o(int.d(zmm3[0])), zx.o(0))), 0)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    r12 = 0
    arg5 = _mm_cmpeq_epi32(arg5, arg5)
    zmm12 = data_142d3f5b0
    
    do
        int64_t rax_6 = sx.q((r12 << 3).d)
        zmm6 = *(arg2 + rax_6)
        zmm5 = *(arg2 + rax_6 + 0x10)
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm6, zmm5, 0xdd), 3) | data_142fc95e0
        zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
        int64_t rcx_3 = _mm_extract_epi64(zmm0, 1)
        int64_t rbp_1 = _mm_extract_epi64(zmm1, 1)
        zmm1 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + zmm0.q)), *(arg3 + rcx_3), 1), 
                *(arg3 + zmm1.q), 2), 
            *(arg3 + rbp_1), 3)
        zmm13 = _mm_cmpeq_epi32(zmm1, arg5)
        zmm11 = zmm13 ^ arg5
        char temp0_95 = _mm_movemask_ps(zmm11)
        int32_t var_5f8[0x4]
        float var_5e8[0x4]
        int32_t var_5d8[0x4]
        int64_t var_5c8[0x2]
        
        if (temp0_95 != 0)
            uint128_t var_398_1 = zmm6
            float var_3d8_1[0x4] = zmm5
            zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
            zmm0 = zmm13 & not.o(zmm1)
            int32_t temp0_97 = _mm_extract_epi32(zmm0, 1)
            int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm0, 2))
            int64_t rbx_3 = sx.q(_mm_extract_epi32(zmm0, 3))
            zmm3 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + sx.q(zmm0.d))), 
                        *(arg4 + sx.q(temp0_97)), 1), 
                    *(arg4 + rbp_3), 2), 
                *(arg4 + rbx_3), 3)
            float var_4d8_1[0x4] = zx.o(0)
            float temp0_103[0x4] = _mm_blendv_ps(arg6, zmm3 & data_143442be0, zmm11)
            float var_4a8[0x4]
            float temp0_105[0x4] =
                _mm_blendv_ps(var_4a8, _mm_srli_epi32(zmm3, 0x18) & data_143442bf0, zmm11)
            uint128_t var_478
            zmm6 = _mm_blendv_ps(var_478, _mm_srli_epi32(zmm3, 0x1c), zmm11)
            zmm3 = zmm13 & not.o(_mm_slli_epi32(zmm6, 2))
            float rax_10 = zmm3[0]
            int64_t rcx_7 = sx.q(_mm_extract_epi32(zmm3, 1))
            int64_t rbp_5 = sx.q(_mm_extract_epi32(zmm3, 2))
            int32_t temp0_111 = _mm_extract_epi32(zmm3, 3)
            zmm0 = __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(sx.q(rax_10) + &data_143442c70)), 
                        *(rcx_7 + &data_143442c70), 1), 
                    *(rbp_5 + &data_143442c70), 2), 
                *(sx.q(temp0_111) + &data_143442c70), 3)
            var_4a8 = temp0_105
            zmm3 = __andps_xmmxud_memxud(temp0_105, data_143442c00)
            zmm3 = zmm13 & not.o(_mm_slli_epi32(zmm6, 3) | zmm3)
            int64_t rax_14 = sx.q(zmm3[0])
            int64_t rcx_9 = sx.q(_mm_extract_epi32(zmm3, 1))
            int32_t temp0_118 = _mm_extract_epi32(zmm3, 2)
            int64_t rbx_6 = sx.q(_mm_extract_epi32(zmm3, 3))
            zmm3 = _mm_cvtepu8_epi32(__pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(
                    __pinsrb_xmmdq_memb_immb(zx.o(*(rax_14 + &data_143442c90)), 
                        *(rcx_9 + &data_143442c90), 1), 
                    *(sx.q(temp0_118) + &data_143442c90), 2), 
                *(rbx_6 + &data_143442c90), 3)[0])
            var_478 = zmm6
            zmm7 = __pcmpeqd_xmmdq_memdq(zmm6, data_142fc95c0)
            zmm5 = zmm7 & not.o(zmm11)
            zmm4 = zx.o(0)
            
            if (_mm_movemask_ps(zmm5) != 0)
                zmm4 = zmm5 & zmm3
            
            uint128_t var_578_1 = _mm_cvtepi32_epi64(zmm2.q)
            zmm8 = _mm_cvtepi32_epi64(zmm1.q)
            zmm1 = zmm13 & not.o(zmm0)
            zmm2 = zmm13 & not.o(data_142fc95e0)
            zmm0 = zmm13 & not.o(zmm7)
            char temp0_128 = _mm_movemask_ps(zmm0)
            uint128_t var_3b8_1 = zmm0
            zmm6 = _mm_blendv_ps(zmm4, zmm12, zmm0)
            zmm5 = zx.o(0)
            
            if (temp0_128 != 0)
                zmm5 = zmm3 & var_3b8_1
                zmm4 = zmm6
            
            zmm5 = _mm_madd_epi16(zmm5, zmm2)
            int32_t temp0_131[0x4] = _mm_mullo_epi32(zmm4, zmm1)
            uint128_t var_498_1 = _mm_add_epi64(var_1c8_1, zmm8)
            uint128_t var_568_1 = __paddq_xmmdq_memdq(var_1c8_1, var_578_1)
            uint128_t var_488 = _mm_blendv_ps(var_488, temp0_131, zmm11)
            uint128_t var_438 = _mm_blendv_ps(var_438, zmm5, zmm11)
            zmm0 = zmm13 & not.o(_mm_cmpgt_epi32(temp0_103, zmm12))
            uint128_t var_4b8_1 = zmm11
            int64_t var_5b8_1[0x2] = zmm8
            int32_t var_5a8_1[0x4] = zmm7
            
            if (_mm_movemask_ps(zmm0) == 0)
                zmm4 = zx.o(0)
                zmm3 = zx.o(0)
            else
                zmm15 = var_4a8 & data_142fc95f0
                zmm9 = zx.o(0)
                zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm15, zmm9) & zmm0, 0x1f)
                
                if (_mm_movemask_ps(zmm1) == 0)
                    zmm4 = zx.o(0)
                    zmm7 = zx.o(0)
                    zmm3 = zx.o(0)
                    var_4d8_1 = zx.o(0)
                else
                    zmm5 = zmm1
                    zmm1 = zx.o(0)
                    zmm2 = arg8
                    
                    if (zx.o(0)[0] f>= zmm2.d)
                        zmm9 = zx.o(0)
                        zmm4 = zx.o(0)
                        zmm7 = zx.o(0)
                        zmm3 = zx.o(0)
                    else
                        bool cond:8_1 = zmm2.d f>= 1f
                        zmm2 = _mm_add_epi32(temp0_103, arg5)
                        
                        if (cond:8_1)
                            zmm9 = _mm_srai_epi32(zmm5, 0x1f) & zmm2
                            zmm4 = zmm9
                            zmm7 = zmm9
                            zmm3 = zmm9
                        else
                            float temp0_143[0x4] =
                                __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm2), var_2c8_1)
                            zmm4 = _mm_round_ps(temp0_143, 9)
                            int32_t temp0_146[0x4] = _mm_min_epi32(_mm_cvttps_epi32(zmm4), zmm2)
                            int32_t temp0_147[0x4] = _mm_srai_epi32(zmm5, 0x1f)
                            zmm9 = temp0_146 & temp0_147
                            zmm1 = zx.o(0)
                            
                            if (arg9 != 1)
                                zmm1 = _mm_sub_ps(temp0_143, zmm4)
                            
                            zmm7 = temp0_147 & _mm_min_epi32(_mm_sub_epi32(zmm9, arg5), zmm2)
                            zmm4 = zmm9
                            zmm3 = zmm7
                    
                    var_4d8_1 = _mm_srai_epi32(zmm5, 0x1f) & zmm1
                
                zmm15 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm15, zx.o(0)) & not.o(zmm0), 0x1f)
                zmm1 = _mm_srai_epi32(zmm15, 0x1f)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm5 = __pcmpgtd_xmmdq_memdq(data_1434422d0, temp0_103) | var_1f8_1
                    zmm0 = zmm5 & zmm1
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm9 = _mm_blendv_ps(zmm9, zx.o(0), zmm0)
                        zmm7 = _mm_blendv_ps(zmm7, zx.o(0), zmm0)
                        zmm4 = zmm9
                        zmm3 = zmm7
                    
                    zmm12 = zmm5 & not.o(zmm1)
                    uint32_t temp0_161 = _mm_movemask_ps(zmm12)
                    zmm1 = zx.o(0)
                    
                    if (temp0_161 == 0)
                        zmm9 = zmm4
                        zmm7 = zmm3
                    else
                        zmm2 = temp0_103
                        int32_t temp0_162[0x4] = _mm_add_epi32(zmm2, arg5)
                        
                        if (arg8.d f>= 1f)
                            zmm0 = zmm12
                            zmm9 = _mm_blendv_ps(zmm9, temp0_162, zmm0)
                            zmm7 = _mm_blendv_ps(zmm7, temp0_162, zmm0)
                        else
                            float var_588_1[0x4] = zmm5
                            int32_t var_598_1[0x4] = zmm7
                            zmm0 = _mm_shuffle_epi32(var_438, 0x4e)
                            zmm11 = _mm_cvtepi32_epi64(var_438.q)
                            arg6 = _mm_cvtepi32_epi64(zmm0.q)
                            zmm0 = _mm_mullo_epi32(var_488, zmm2)
                            zmm1 = _mm_shuffle_epi32(zmm0, 0x4e)
                            arg6 = __paddq_xmmdq_memdq(arg6, var_568_1)
                            zmm11 = __paddq_xmmdq_memdq(zmm11, var_498_1)
                            zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            zmm2 = data_143442a20
                            arg6 = _mm_add_epi64(_mm_add_epi64(arg6, zmm2), zmm1)
                            zmm11 = _mm_add_epi64(_mm_add_epi64(zmm11, zmm2), zmm0)
                            zmm0 = data_143442c10
                            zmm11 &= zmm0
                            arg6 &= zmm0
                            zmm6 = _mm_min_epi32(
                                _mm_max_epi32(
                                    _mm_cvttps_epi32(__mulps_xmmps_memps(
                                        _mm_cvtepi32_ps(temp0_162), var_2c8_1)), 
                                    zx.o(0)), 
                                temp0_162)
                            
                            if (arg7 s< 0x100)
                                zmm0 = _mm_shuffle_epi32(zmm6, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm6.q), zmm11)
                                char rcx_12 = temp0_161.b
                                uint128_t var_358
                                
                                if ((rcx_12 & 1) != 0)
                                    zmm2 = _mm_insert_epi32(var_358, zx.d(*zmm1.q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rcx_12 & 2) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                else
                                    zmm2 = var_358
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rcx_12 & 2) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                
                                zmm0 = _mm_add_epi64(zmm0, arg6)
                                
                                if ((rcx_12 & 4) != 0)
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rcx_12 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else if ((rcx_12 & 8) != 0)
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                int32_t temp0_229[0x4] =
                                    __pcmpgtd_xmmdq_memdq(zmm2 & data_142ed6810, var_428_1)
                                zmm0 = temp0_229 ^ arg5
                                var_358 = zmm2
                                uint128_t var_468_2 = zmm0
                                
                                if (_mm_movemask_ps(temp0_229 & not.o(zmm12)) == 0)
                                    zmm5 = temp0_162
                                    zmm8 = zmm6
                                else
                                    zmm8 = _mm_blendv_ps(zmm6, temp0_162, zmm0)
                                    zmm3 = _mm_sub_epi32(zmm6, arg5)
                                    zmm7 =
                                        temp0_229 & not.o(_mm_cmpgt_epi32(zmm3, temp0_162) ^ arg5)
                                    zmm2 = zmm12 & zmm7
                                    uint32_t j = _mm_movemask_ps(zmm2)
                                    zmm5 = temp0_162
                                    
                                    if (j != 0)
                                        zmm4 = zmm6
                                        
                                        do
                                            zmm1 = zmm3
                                            zmm0 = _mm_shuffle_epi32(zmm3, 0x4e)
                                            zmm3 =
                                                _mm_add_epi64(_mm_cvtepi32_epi64(zmm3[0].q), zmm11)
                                            char temp0_239 = _mm_movemask_ps(zmm2)
                                            uint128_t var_228
                                            
                                            if ((temp0_239 & 1) != 0)
                                                zmm2 =
                                                    _mm_insert_epi32(var_228, zx.d(*zmm3[0].q), 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_239 & 2) != 0)
                                                    zmm2 = _mm_insert_epi32(zmm2, 
                                                        zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                            else
                                                zmm2 = var_228
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_239 & 2) != 0)
                                                    zmm2 = _mm_insert_epi32(zmm2, 
                                                        zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                            
                                            zmm0 = _mm_add_epi64(zmm0, arg6)
                                            
                                            if ((temp0_239 & 4) != 0)
                                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_239 & 8) != 0)
                                                    zmm2 = _mm_insert_epi32(zmm2, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else if ((temp0_239 & 8) != 0)
                                                zmm2 = _mm_insert_epi32(zmm2, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            var_228 = zmm2
                                            zmm0 = __pcmpgtd_xmmdq_memdq(zmm2 & data_142ed6810, 
                                                var_428_1) & zmm7
                                            zmm8 = _mm_blendv_ps(zmm8, zmm4, zmm0)
                                            zmm2 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != j)
                                                zmm2 = zmm0 ^ zmm7
                                            
                                            zmm3 = _mm_sub_epi32(zmm1, arg5)
                                            zmm7 = _mm_cmpgt_epi32(zmm3, zmm5) & not.o(zmm2)
                                            zmm2 = zmm7 & zmm12
                                            j = _mm_movemask_ps(zmm2)
                                            zmm4 = zmm1
                                        while (j != 0)
                                
                                if (_mm_movemask_ps(_mm_andnot_ps(var_468_2, zmm12)) != 0)
                                    zmm0 = var_468_2 ^ arg5
                                    zmm8 = _mm_blendv_ps(zmm8, zx.o(0), zmm0)
                                    zmm6 = _mm_add_epi32(zmm6, arg5)
                                    zmm1 = _mm_cmpgt_epi32(zmm6, zx.o(0)) & zmm0
                                    
                                    while (true)
                                        zmm0 = zmm1 & zmm12
                                        uint32_t temp0_287 = _mm_movemask_ps(zmm0)
                                        
                                        if (temp0_287 == 0)
                                            break
                                        
                                        zmm3 = _mm_shuffle_epi32(zmm6, 0x4e)
                                        zmm2 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm6.q), zmm11)
                                        char temp0_291 = _mm_movemask_ps(zmm0)
                                        uint128_t var_3f8
                                        
                                        if ((temp0_291 & 1) != 0)
                                            var_3f8 = _mm_insert_epi32(var_3f8, zx.d(*zmm2.q), 0)
                                        
                                        zmm0 = _mm_cvtepi32_epi64(zmm3[0].q)
                                        
                                        if ((temp0_291 & 2) != 0)
                                            zmm2 = _mm_insert_epi32(var_3f8, 
                                                zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                            zmm0 = _mm_add_epi64(zmm0, arg6)
                                            
                                            if ((temp0_291 & 4) != 0)
                                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                        else
                                            zmm2 = var_3f8
                                            zmm0 = _mm_add_epi64(zmm0, arg6)
                                            
                                            if ((temp0_291 & 4) != 0)
                                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                        
                                        if ((temp0_291 & 8) != 0)
                                            zmm2 = _mm_insert_epi32(zmm2, 
                                                zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        
                                        var_3f8 = zmm2
                                        zmm0 =
                                            __pcmpgtd_xmmdq_memdq(zmm2 & data_142ed6810, var_428_1)
                                            & not.o(zmm1)
                                        zmm8 = _mm_blendv_ps(zmm8, zmm6, zmm0)
                                        zmm3 = zx.o(0)
                                        
                                        if (_mm_movemask_ps(zmm0 & zmm12) != temp0_287)
                                            zmm3 = zmm0 ^ zmm1
                                        
                                        zmm6 = _mm_add_epi32(zmm6, arg5)
                                        zmm1 = _mm_cmpgt_epi32(zmm6, zx.o(0)) & zmm3
                                
                                uint128_t var_368
                                zmm2 = var_368
                                zmm9 = _mm_blendv_ps(zmm9, zmm8, zmm12)
                                zmm0 = _mm_shuffle_epi32(zmm9, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm9[0].q), zmm11)
                                
                                if ((rcx_12 & 1) == 0)
                                    zmm8 = var_5b8_1
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rcx_12 & 2) != 0)
                                        goto label_14021b920
                                    
                                    goto label_14021b85e
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                                zmm8 = var_5b8_1
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rcx_12 & 2) != 0)
                                label_14021b920:
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg6)
                                    
                                    if ((rcx_12 & 4) == 0)
                                        goto label_14021b86c
                                    
                                    goto label_14021b93c
                                
                            label_14021b85e:
                                zmm0 = _mm_add_epi64(zmm0, arg6)
                                
                                if ((rcx_12 & 4) != 0)
                                label_14021b93c:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rcx_12 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_14021b86c:
                                    
                                    if ((rcx_12 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm3 = _mm_blendv_ps(var_598_1, _mm_sub_epi32(zmm9, arg5), zmm12)
                                zmm0 = _mm_cmpgt_epi32(zmm3, zmm5) & zmm12
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    zmm3 = _mm_blendv_ps(zmm3, zmm5, zmm0)
                                
                                zmm12 = data_142d3f5b0
                                zmm0 = _mm_shuffle_epi32(zmm3, 0x4e)
                                zmm7 = zmm3
                                zmm11 = _mm_add_epi64(zmm11, _mm_cvtepi32_epi64(zmm3[0].q))
                                float var_388[0x4]
                                
                                if ((rcx_12 & 1) != 0)
                                    zmm3 = _mm_insert_epi32(var_388, zx.d(*zmm11.q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rcx_12 & 2) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm11, 1)), 1)
                                else
                                    zmm3 = var_388
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rcx_12 & 2) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm11, 1)), 1)
                                
                                zmm11 = var_4b8_1
                                arg6 = _mm_add_epi64(arg6, zmm0)
                                
                                if ((rcx_12 & 4) != 0)
                                    zmm3 = _mm_insert_epi32(zmm3, zx.d(*arg6[0].q), 2)
                                    
                                    if ((rcx_12 & 8) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(arg6, 1)), 3)
                                else if ((rcx_12 & 8) != 0)
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(arg6, 1)), 3)
                                
                                var_368 = zmm2
                                zmm1 = data_142ed6810
                                zmm4 = zmm2 & zmm1
                                var_388 = zmm3
                                zmm0 = var_588_1 ^ arg5
                                zmm2 = zx.o(0)
                                
                                if (arg9 != 1)
                                    zmm1 = _mm_max_epi32(_mm_sub_epi32(zmm3 & zmm1, zmm4), zmm12)
                                    zmm2 = _mm_div_ps(_mm_sub_ps(temp0_8, _mm_cvtepi32_ps(zmm4)), 
                                        _mm_cvtepi32_ps(zmm1))
                            else
                                zmm1 = _mm_add_epi32(zmm6, zmm6)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm11)
                                char rcx_11 = temp0_161.b
                                int32_t var_338[0x4]
                                
                                if ((rcx_11 & 1) != 0)
                                    arg5 = _mm_insert_epi32(var_338, zx.d(*zmm1.q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rcx_11 & 2) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                else
                                    arg5 = var_338
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rcx_11 & 2) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                
                                zmm0 = _mm_add_epi64(zmm0, arg6)
                                int32_t var_4c8_1[0x4]
                                
                                if ((rcx_11 & 4) != 0)
                                    arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                    var_4c8_1 = zmm9
                                    
                                    if ((rcx_11 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                    var_4c8_1 = zmm9
                                    
                                    if ((rcx_11 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                var_338 = arg5
                                arg5 = __pcmpgtd_xmmdq_memdq(_mm_blend_epi16(arg5, zx.o(0), 0xaa), 
                                    var_428_1)
                                zmm2 = _mm_cmpeq_epi32(zx.o(0), zx.o(0))
                                zmm0 = arg5 ^ zmm2
                                uint128_t var_468_1 = zmm0
                                
                                if (_mm_movemask_ps(arg5 & not.o(zmm12)) == 0)
                                    zmm5 = temp0_162
                                    zmm4 = zmm6
                                else
                                    zmm3 = temp0_162
                                    zmm4 = _mm_blendv_ps(zmm6, zmm3, zmm0)
                                    zmm8 = _mm_sub_epi32(zmm6, zmm2)
                                    zmm5 = zmm3
                                    arg5 &= not.o(_mm_cmpgt_epi32(zmm8, zmm3) ^ zmm2)
                                    zmm2 = zmm12 & arg5
                                    uint32_t j_1 = _mm_movemask_ps(zmm2)
                                    
                                    if (j_1 != 0)
                                        zmm1 = zmm6
                                        
                                        do
                                            zmm9 = zmm8
                                            zmm3 = _mm_add_epi32(zmm8, zmm8)
                                            zmm0 = _mm_shuffle_epi32(zmm3, 0x4e)
                                            int32_t temp0_209[0x4] =
                                                _mm_add_epi64(_mm_cvtepi32_epi64(zmm3[0].q), zmm11)
                                            char temp0_210 = _mm_movemask_ps(zmm2)
                                            float var_218[0x4]
                                            
                                            if ((temp0_210 & 1) != 0)
                                                zmm3 = _mm_insert_epi32(var_218, 
                                                    zx.d(*temp0_209[0].q), 0)
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_210 & 2) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(temp0_209, 1)), 1)
                                            else
                                                zmm3 = var_218
                                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                                
                                                if ((temp0_210 & 2) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(temp0_209, 1)), 1)
                                            
                                            zmm0 = _mm_add_epi64(zmm0, arg6)
                                            
                                            if ((temp0_210 & 4) != 0)
                                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                                
                                                if ((temp0_210 & 8) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, 
                                                        zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            else if ((temp0_210 & 8) != 0)
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            zmm2 = zx.o(0)
                                            zmm0 = __pcmpgtd_xmmdq_memdq(
                                                _mm_blend_epi16(zmm3, zmm2, 0xaa), var_428_1) & arg5
                                            zmm4 = _mm_blendv_ps(zmm4, zmm1, zmm0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != j_1)
                                                zmm2 = zmm0 ^ arg5
                                            
                                            var_218 = zmm3
                                            zmm8 = __psubd_xmmdq_memdq(zmm9, data_142d3f800)
                                            arg5 = _mm_cmpgt_epi32(zmm8, zmm5) & not.o(zmm2)
                                            zmm2 = arg5 & zmm12
                                            j_1 = _mm_movemask_ps(zmm2)
                                            zmm1 = zmm9
                                        while (j_1 != 0)
                                
                                uint32_t temp0_255 =
                                    _mm_movemask_ps(_mm_andnot_ps(var_468_1, zmm12))
                                int32_t temp0_256[0x4] = _mm_cmpeq_epi32(arg5, arg5)
                                uint128_t var_348
                                
                                if (temp0_255 == 0)
                                    zmm2 = var_348
                                    zmm9 = var_4c8_1
                                else
                                    zmm0 = var_468_1 ^ temp0_256
                                    zmm2 = zx.o(0)
                                    zmm4 = _mm_blendv_ps(zmm4, zmm2, zmm0)
                                    zmm6 = _mm_add_epi32(zmm6, temp0_256)
                                    zmm1 = _mm_cmpgt_epi32(zmm6, zmm2) & zmm0
                                    zmm0 = zmm1 & zmm12
                                    uint32_t j_2 = _mm_movemask_ps(zmm0)
                                    
                                    if (j_2 == 0)
                                        zmm9 = var_4c8_1
                                    else
                                        zmm9 = var_4c8_1
                                        
                                        do
                                            zmm2 = _mm_add_epi32(zmm6, zmm6)
                                            zmm3 = _mm_shuffle_epi32(zmm2, 0x4e)
                                            zmm2 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm2.q), zmm11)
                                            char temp0_265 = _mm_movemask_ps(zmm0)
                                            uint128_t var_3e8
                                            
                                            if ((temp0_265 & 1) != 0)
                                                var_3e8 =
                                                    _mm_insert_epi32(var_3e8, zx.d(*zmm2.q), 0)
                                            
                                            zmm0 = _mm_cvtepi32_epi64(zmm3[0].q)
                                            
                                            if ((temp0_265 & 2) != 0)
                                                zmm3 = _mm_insert_epi32(var_3e8, 
                                                    zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                                zmm0 = _mm_add_epi64(zmm0, arg6)
                                                
                                                if ((temp0_265 & 4) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                            else
                                                zmm3 = var_3e8
                                                zmm0 = _mm_add_epi64(zmm0, arg6)
                                                
                                                if ((temp0_265 & 4) != 0)
                                                    zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                            
                                            if ((temp0_265 & 8) != 0)
                                                zmm3 = _mm_insert_epi32(zmm3, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                            
                                            var_3e8 = zmm3
                                            zmm0 = __pcmpgtd_xmmdq_memdq(
                                                _mm_blend_epi16(zmm3, zx.o(0), 0xaa), var_428_1)
                                                & not.o(zmm1)
                                            zmm4 = _mm_blendv_ps(zmm4, zmm6, zmm0)
                                            zmm3 = zx.o(0)
                                            
                                            if (_mm_movemask_ps(zmm0 & zmm12) != j_2)
                                                zmm3 = zmm0 ^ zmm1
                                            
                                            zmm6 = _mm_add_epi32(zmm6, temp0_256)
                                            zmm1 = _mm_cmpgt_epi32(zmm6, zx.o(0)) & zmm3
                                            zmm0 = zmm1 & zmm12
                                            j_2 = _mm_movemask_ps(zmm0)
                                        while (j_2 != 0)
                                    
                                    zmm2 = var_348
                                
                                zmm9 = _mm_blendv_ps(zmm9, zmm4, zmm12)
                                zmm1 = _mm_add_epi32(zmm9, zmm9)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm11)
                                
                                if ((rcx_11 & 1) == 0)
                                    zmm8 = var_5b8_1
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rcx_11 & 2) != 0)
                                        goto label_14021bb41
                                    
                                    goto label_14021ba78
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                                zmm8 = var_5b8_1
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rcx_11 & 2) != 0)
                                label_14021bb41:
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg6)
                                    
                                    if ((rcx_11 & 4) == 0)
                                        goto label_14021ba86
                                    
                                    goto label_14021bb5d
                                
                            label_14021ba78:
                                zmm0 = _mm_add_epi64(zmm0, arg6)
                                
                                if ((rcx_11 & 4) != 0)
                                label_14021bb5d:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rcx_11 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_14021ba86:
                                    
                                    if ((rcx_11 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm3 =
                                    _mm_blendv_ps(var_598_1, _mm_sub_epi32(zmm9, temp0_256), zmm12)
                                zmm0 = _mm_cmpgt_epi32(zmm3, zmm5) & zmm12
                                
                                if (_mm_movemask_ps(zmm0) != 0)
                                    zmm3 = _mm_blendv_ps(zmm3, zmm5, zmm0)
                                
                                zmm12 = data_142d3f5b0
                                zmm7 = zmm3
                                zmm1 = _mm_add_epi32(zmm3, zmm3)
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm11 = _mm_add_epi64(zmm11, _mm_cvtepi32_epi64(zmm1.q))
                                uint128_t var_378
                                
                                if ((rcx_11 & 1) != 0)
                                    zmm1 = _mm_insert_epi32(var_378, zx.d(*zmm11.q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rcx_11 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm11, 1)), 1)
                                else
                                    zmm1 = var_378
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((rcx_11 & 2) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(zmm11, 1)), 1)
                                
                                zmm11 = var_4b8_1
                                arg6 = _mm_add_epi64(arg6, zmm0)
                                
                                if ((rcx_11 & 4) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*arg6[0].q), 2)
                                    
                                    if ((rcx_11 & 8) != 0)
                                        zmm1 = _mm_insert_epi32(zmm1, 
                                            zx.d(*_mm_extract_epi64(arg6, 1)), 3)
                                else if ((rcx_11 & 8) != 0)
                                    zmm1 =
                                        _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(arg6, 1)), 3)
                                
                                zmm3 = zx.o(0)
                                var_348 = zmm2
                                zmm4 = _mm_blend_epi16(zmm2, zmm3, 0xaa)
                                var_378 = zmm1
                                zmm1 = _mm_blend_epi16(zmm1, zmm3, 0xaa)
                                zmm0 = var_588_1 ^ temp0_256
                                zmm2 = zx.o(0)
                                
                                if (arg9 != 1)
                                    zmm1 = _mm_max_epi32(_mm_sub_epi32(zmm1, zmm4), zmm12)
                                    zmm2 = _mm_div_ps(_mm_sub_ps(temp0_8, _mm_cvtepi32_ps(zmm4)), 
                                        _mm_cvtepi32_ps(zmm1))
                            
                            zmm1 = _mm_blendv_ps(zx.o(0), zmm2, zmm0)
                    
                    var_4d8_1 = _mm_blendv_ps(var_4d8_1, zmm1, zmm15)
                    zmm4 = zmm9
                    zmm3 = zmm7
                
                zmm7 = var_5a8_1
            
            zmm1 = _mm_cvtepi32_epi64(var_438.q)
            zmm12 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(var_438, 0x4e).q)
            zmm0 = __pmulld_xmmdq_memdq(zmm4, var_488)
            zmm5 = _mm_cvtepi32_epi64(zmm0.q)
            arg6 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
            zmm0 = __pcmpeqd_xmmdq_memdq(var_478, data_1434422d0)
            uint128_t var_588_2 = zmm0
            arg5 = zmm13 & not.o(zmm0)
            char temp0_375 = _mm_movemask_ps(arg5)
            int32_t var_598_2[0x4] = zmm4
            float var_4c8_2[0x4] = zmm12
            float var_458_1[0x4] = zmm5
            uint128_t var_468_3 = zmm1
            float var_418_1[0x4] = zmm3
            
            if (temp0_375 == 0)
                arg5 = _mm_cmpeq_epi32(arg5, arg5)
                zmm9 = data_143442c20
            else
                zmm11 = arg6
                int32_t temp0_376[0x4] = _mm_add_epi64(arg6, zmm12)
                zmm6 = __paddq_xmmdq_memdq(_mm_add_epi64(zmm5, zmm1), var_498_1)
                zmm9 = __paddq_xmmdq_memdq(temp0_376, var_568_1)
                zmm3 = _mm_srai_epi32(_mm_slli_epi32(var_4a8, 0x1f), 0x1f)
                zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg5, 0x1f), 0x1f) & zmm3
                
                if (_mm_movemask_ps(zmm2) == 0)
                    zmm15 = zmm11
                else
                    zmm15 = zmm5
                    zmm12 = data_1434426b0
                    zmm5 = _mm_add_epi64(zmm6, zmm12)
                    zmm4 = zmm8
                    zmm8 = _mm_shuffle_epi32(zmm2, 0x50)
                    zmm6 = _mm_blendv_ps(zmm6, zmm5, zmm8)
                    int32_t temp0_388[0x4] = _mm_add_epi64(zmm9, zmm12)
                    zmm12 = var_4c8_2
                    arg6 = _mm_shuffle_epi32(zmm2, 0xfa)
                    zmm9 = _mm_blendv_ps(zmm9, temp0_388, arg6)
                    zmm2 = _mm_add_epi64(var_578_1, zmm12)
                    int32_t temp0_393[0x4] = _mm_add_epi64(_mm_add_epi64(zmm4, zmm1), zmm15)
                    zmm15 = zmm11
                    zmm2 = _mm_add_epi64(zmm2, zmm11)
                    zmm0 = data_1434426c0
                    float temp0_396[0x4] =
                        _mm_blendv_ps(zx.o(0), _mm_add_epi64(temp0_393, zmm0), zmm8)
                    zmm7 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm2, zmm0), arg6)
                    int64_t rax_76 = temp0_396[0].q
                    int64_t rbp_8 = _mm_extract_epi64(temp0_396, 1)
                    int64_t rsi_17 = zmm7[0].q
                    int64_t rbx_7 = _mm_extract_epi64(zmm7, 1)
                    zmm2 = _mm_cvtepi32_ps(_mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_76)), *(arg4 + rbp_8), 1), 
                            *(arg4 + rsi_17), 2), 
                        *(arg4 + rbx_7), 3).q))
                
                zmm7 = _mm_blendv_ps(data_1434426d0, zmm2, zmm3)
                zmm0 = data_1434422d0
                zmm2 = var_4a8 & zmm0
                zmm5 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm2, zmm0) & arg5, 0x1f)
                char temp0_408 = _mm_movemask_ps(zmm5)
                
                if (temp0_408 == 0)
                    zmm3 = zmm6
                    zmm8 = zmm9
                    zmm11 = var_4b8_1
                    arg6 = var_5b8_1
                    zmm6 = zx.o(0)
                    zmm9 = data_143442c20
                else
                    zmm0 = data_1434426b0
                    int32_t temp0_409[0x4] = _mm_add_epi64(zmm9, zmm0)
                    zmm1 = _mm_add_epi64(zmm6, zmm0)
                    zmm5 = _mm_srai_epi32(zmm5, 0x1f)
                    zmm3 = _mm_blendv_ps(zmm6, zmm1, _mm_shuffle_epi32(zmm5, 0x50))
                    zmm8 = _mm_blendv_ps(zmm9, temp0_409, _mm_shuffle_epi32(zmm5, 0xfa))
                    uint128_t var_238
                    
                    if ((temp0_408 & 1) != 0)
                        zmm0 = _mm_insert_epi32(var_238, zx.d(*zmm6.q), 0)
                        
                        if ((temp0_408 & 2) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm6, 1)), 1)
                    else
                        zmm0 = var_238
                        
                        if ((temp0_408 & 2) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm6, 1)), 1)
                    
                    arg6 = var_5b8_1
                    zmm6 = zx.o(0)
                    
                    if ((temp0_408 & 4) != 0)
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm9[0].q), 2)
                        
                        if ((temp0_408 & 8) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm9, 1)), 3)
                    else if ((temp0_408 & 8) != 0)
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm9, 1)), 3)
                    
                    zmm11 = var_4b8_1
                    zmm9 = data_143442c20
                    var_238 = zmm0
                    zmm5 = _mm_cvtepi32_ps(_mm_blend_epi16(zmm0, zmm6, 0xaa))
                
                zmm1 = data_142fc95e0
                zmm0 = var_4a8 & zmm1
                zmm1 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm0, zmm1) & arg5, 0x1f)
                char temp0_423 = _mm_movemask_ps(zmm1)
                
                if (temp0_423 == 0)
                    arg5 = _mm_cmpeq_epi32(arg5, arg5)
                    zmm4 = var_598_2
                    zmm8 = arg6
                else
                    uint128_t var_248
                    
                    if ((temp0_423 & 1) != 0)
                        zmm1 = _mm_insert_epi32(var_248, zx.d(*zmm3[0].q), 0)
                        
                        if ((temp0_423 & 2) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                    else
                        zmm1 = var_248
                        
                        if ((temp0_423 & 2) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                    
                    arg5 = _mm_cmpeq_epi32(arg5, arg5)
                    zmm4 = var_598_2
                    
                    if ((temp0_423 & 4) != 0)
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm8[0]), 2)
                        
                        if ((temp0_423 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                    else if ((temp0_423 & 8) != 0)
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                    
                    zmm8 = arg6
                    var_248 = zmm1
                    zmm1 = _mm_cvtepi32_ps(_mm_blend_epi16(zmm1, zmm6, 0xaa))
                
                zmm7 = __mulps_xmmps_memps(_mm_add_ps(zmm7, zmm9), data_142dd3fa0)
                
                if ((temp0_375 & 1) == 0)
                    zmm5 = _mm_add_ps(zmm5, zmm9)
                    
                    if ((temp0_375 & 2) != 0)
                        goto label_14021c581
                    
                    goto label_14021c080
                
                var_5f8[0] = zmm7[0]
                zmm5 = _mm_add_ps(zmm5, zmm9)
                
                if ((temp0_375 & 2) != 0)
                label_14021c581:
                    var_5f8[1] = __extractps_memd_xmmps_immb(zmm7, 1)
                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm6)
                    zmm5 = __mulps_xmmps_memps(zmm5, data_142dd3fa0)
                    
                    if ((temp0_375 & 4) == 0)
                        goto label_14021c094
                    
                    goto label_14021c59d
                
            label_14021c080:
                zmm2 = _mm_cmpeq_epi32(zmm2, zmm6)
                zmm5 = __mulps_xmmps_memps(zmm5, data_142dd3fa0)
                
                if ((temp0_375 & 4) == 0)
                label_14021c094:
                    zmm2 &= not.o(zmm5)
                    
                    if ((temp0_375 & 8) != 0)
                        goto label_14021c5b2
                    
                    goto label_14021c0a4
                
            label_14021c59d:
                var_5f8[2] = __extractps_memd_xmmps_immb(zmm7, 2)
                zmm2 &= not.o(zmm5)
                
                if ((temp0_375 & 8) != 0)
                label_14021c5b2:
                    var_5f8[3] = __extractps_memd_xmmps_immb(zmm7, 3)
                    zmm5 = var_458_1
                    
                    if ((temp0_375 & 1) == 0)
                        goto label_14021c0b3
                    
                    goto label_14021c5cc
                
            label_14021c0a4:
                zmm5 = var_458_1
                
                if ((temp0_375 & 1) == 0)
                label_14021c0b3:
                    zmm1 = _mm_add_ps(zmm1, zmm9)
                    
                    if ((temp0_375 & 2) != 0)
                        goto label_14021c5df
                    
                    goto label_14021c0c0
                
            label_14021c5cc:
                var_5e8[0] = zmm2.d
                zmm1 = _mm_add_ps(zmm1, zmm9)
                
                if ((temp0_375 & 2) != 0)
                label_14021c5df:
                    var_5e8[1] = __pextrd_memd_xmmdq_immb(zmm2, 1)
                    zmm0 = _mm_cmpeq_epi32(zmm0, zmm6)
                    zmm1 = __mulps_xmmps_memps(zmm1, data_142dd3fa0)
                    
                    if ((temp0_375 & 4) == 0)
                        goto label_14021c0d4
                    
                    goto label_14021c5fb
                
            label_14021c0c0:
                zmm0 = _mm_cmpeq_epi32(zmm0, zmm6)
                zmm1 = __mulps_xmmps_memps(zmm1, data_142dd3fa0)
                
                if ((temp0_375 & 4) != 0)
                label_14021c5fb:
                    var_5e8[2] = __pextrd_memd_xmmdq_immb(zmm2, 2)
                    zmm7 = _mm_mul_ps(zmm7, zmm7)
                    zmm0 &= not.o(zmm1)
                    
                    if ((temp0_375 & 8) != 0)
                        var_5e8[3] = __pextrd_memd_xmmdq_immb(zmm2, 3)
                else
                label_14021c0d4:
                    zmm7 = _mm_mul_ps(zmm7, zmm7)
                    zmm0 &= not.o(zmm1)
                    
                    if ((temp0_375 & 8) != 0)
                        var_5e8[3] = __pextrd_memd_xmmdq_immb(zmm2, 3)
                
                zmm2 = _mm_mul_ps(zmm2, zmm2)
                float temp0_443[0x4] = _mm_sub_ps(data_142d3f670, zmm7)
                
                if ((temp0_375 & 1) != 0)
                    var_5d8[0] = zmm0.d
                
                zmm1 = _mm_mul_ps(zmm0, zmm0)
                float temp0_445[0x4] = _mm_sub_ps(temp0_443, zmm2)
                zmm7 = var_5a8_1
                
                if ((temp0_375 & 2) != 0)
                    var_5d8[1] = __pextrd_memd_xmmdq_immb(zmm0, 1)
                
                float temp0_447[0x4] = _mm_sub_ps(temp0_445, zmm1)
                
                if ((temp0_375 & 4) != 0)
                    var_5d8[2] = __pextrd_memd_xmmdq_immb(zmm0, 2)
                
                zmm1 = _mm_cmpeq_ps(zx.o(0), temp0_447, 2)
                zmm2 = _mm_sqrt_ps(temp0_447)
                
                if ((temp0_375 & 8) == 0)
                    zmm1 = _mm_and_ps(zmm1, zmm2)
                    zmm3 = var_418_1
                    
                    if ((temp0_375 & 1) != 0)
                        goto label_14021c635
                    
                    goto label_14021c15b
                
                var_5d8[3] = __pextrd_memd_xmmdq_immb(zmm0, 3)
                zmm1 = _mm_and_ps(zmm1, zmm2)
                zmm3 = var_418_1
                
                if ((temp0_375 & 1) != 0)
                label_14021c635:
                    var_5c8[0].d = zmm1.d
                    arg6 = zmm15
                    
                    if ((temp0_375 & 2) == 0)
                        goto label_14021c166
                    
                    goto label_14021c649
                
            label_14021c15b:
                arg6 = zmm15
                
                if ((temp0_375 & 2) == 0)
                label_14021c166:
                    
                    if ((temp0_375 & 4) != 0)
                        goto label_14021c65a
                    
                    goto label_14021c16f
                
            label_14021c649:
                var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm1, 1)
                
                if ((temp0_375 & 4) == 0)
                label_14021c16f:
                    
                    if ((temp0_375 & 8) != 0)
                        var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm1, 3)
                else
                label_14021c65a:
                    var_5c8[1].d = __extractps_memd_xmmps_immb(zmm1, 2)
                    
                    if ((temp0_375 & 8) != 0)
                        var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm1, 3)
            
            zmm1 = var_588_2 ^ arg5
            uint128_t var_3c8_1 = zmm1
            
            if (_mm_movemask_ps(zmm13 & not.o(zmm1)) == 0)
                zmm15 = var_4d8_1
            else
                arg5 = __pcmpeqd_xmmdq_memdq(var_478, data_142d3f5b0)
                zmm1 = zmm13 & not.o(arg5)
                char temp0_455 = _mm_movemask_ps(zmm1)
                
                if (temp0_455 != 0)
                    int32_t var_1e8_1[0x4] = arg5
                    uint128_t var_1d8_1 = zmm13
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
                    zmm2 = _mm_add_epi64(var_578_1, zmm12)
                    int32_t temp0_460[0x4] =
                        _mm_add_epi64(__paddq_xmmdq_memdq(zmm8, var_468_3), zmm5)
                    zmm13 = arg6
                    zmm2 = _mm_add_epi64(zmm2, arg6)
                    zmm0 = data_1434426c0
                    zmm9 = zmm0
                    zmm2 = _mm_add_epi64(zmm2, zmm0)
                    int32_t temp0_463[0x4] = _mm_add_epi64(temp0_460, zmm0)
                    zmm3 = _mm_shuffle_epi32(zmm1, 0x50)
                    float temp0_465[0x4] = _mm_blendv_ps(zx.o(0), temp0_463, zmm3)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                    zmm7 = _mm_blendv_ps(zx.o(0), zmm2, zmm4)
                    int64_t rsi_28 = temp0_465[0].q
                    void* rcx_15 = arg4 + rsi_28
                    int64_t rbx_8 = _mm_extract_epi64(temp0_465, 1)
                    zmm1 = *(arg4 + rsi_28)
                    void* rbp_9 = arg4 + rbx_8
                    zmm8 = *(arg4 + rbx_8)
                    int64_t rbx_9 = zmm7[0].q
                    void* rsi_29 = arg4 + rbx_9
                    zmm15 = *(arg4 + rbx_9)
                    int64_t rbx_10 = _mm_extract_epi64(zmm7, 1)
                    arg6 = *(arg4 + rbx_10)
                    float temp0_468[0x4] = _mm_blendv_ps(zx.o(0), zmm9, zmm3)
                    zmm6 = _mm_blendv_ps(zx.o(0), zmm9, zmm4)
                    zmm2 = *(temp0_468[0].q + rcx_15)
                    zmm7 = *(_mm_extract_epi64(temp0_468, 1) + rbp_9)
                    arg5 = *(zmm6.q + rsi_29)
                    int64_t rdi_27 = _mm_extract_epi64(zmm6, 1)
                    void* rbx_11 = arg4 + rbx_10
                    zmm0 = zmm3
                    zmm3 = data_1434426e0
                    zmm6 = _mm_blendv_ps(zx.o(0), zmm3, zmm0)
                    zmm12 = *(rdi_27 + rbx_11)
                    float temp0_471[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm4)
                    zmm0 = *(zmm6.q + rcx_15)
                    zmm4 = *(_mm_extract_epi64(zmm6, 1) + rbp_9)
                    uint128_t* rcx_17 = temp0_471[0].q
                    int32_t (* rdi_29)[0x4] = _mm_extract_epi64(temp0_471, 1)
                    zmm11 = *(rcx_17 + rsi_29)
                    zmm9 = *(rdi_29 + rbx_11)
                    
                    if ((temp0_455 & 1) == 0)
                        if ((temp0_455 & 2) != 0)
                            goto label_14021c69a
                        
                        goto label_14021c342
                    
                    var_5f8[0] = zmm1.d
                    
                    if ((temp0_455 & 2) != 0)
                    label_14021c69a:
                        var_5f8[1] = zmm8[0].d
                        zmm5 = var_458_1
                        
                        if ((temp0_455 & 4) == 0)
                            goto label_14021c351
                        
                        goto label_14021c6b3
                    
                label_14021c342:
                    zmm5 = var_458_1
                    
                    if ((temp0_455 & 4) == 0)
                    label_14021c351:
                        
                        if ((temp0_455 & 8) != 0)
                            goto label_14021c6c3
                        
                        goto label_14021c35a
                    
                label_14021c6b3:
                    var_5f8[2] = zmm15[0]
                    
                    if ((temp0_455 & 8) == 0)
                    label_14021c35a:
                        zmm1 = _mm_insert_ps(zmm1, zmm8, 0x10)
                        
                        if ((temp0_455 & 1) != 0)
                            var_5e8[0] = zmm2.d
                    else
                    label_14021c6c3:
                        var_5f8[3] = arg6[0]
                        zmm1 = _mm_insert_ps(zmm1, zmm8, 0x10)
                        
                        if ((temp0_455 & 1) != 0)
                            var_5e8[0] = zmm2.d
                    
                    zmm1 = _mm_insert_ps(zmm1, zmm15, 0x20)
                    zmm2 = _mm_insert_ps(zmm2, zmm7, 0x10)
                    zmm8 = var_5b8_1
                    
                    if ((temp0_455 & 2) != 0)
                        var_5e8[1] = zmm7[0]
                    
                    zmm1 = _mm_insert_ps(zmm1, arg6, 0x30)
                    zmm2 = _mm_insert_ps(zmm2, arg5, 0x20)
                    zmm6 = _mm_insert_ps(zmm0, zmm4, 0x10)
                    
                    if ((temp0_455 & 4) != 0)
                        var_5e8[2] = arg5[0]
                    
                    zmm2 = _mm_insert_ps(zmm2, zmm12, 0x30)
                    zmm6 = _mm_insert_ps(zmm6, zmm11, 0x20)
                    zmm1 = _mm_mul_ps(zmm1, zmm1)
                    zmm15 = data_143442c20
                    zmm7 = var_5a8_1
                    arg6 = zmm13
                    
                    if ((temp0_455 & 8) != 0)
                        var_5e8[3] = zmm12[0]
                    
                    zmm6 = _mm_insert_ps(zmm6, zmm9, 0x30)
                    float temp0_482[0x4] = _mm_sub_ps(data_142d3f670, zmm1)
                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                    zmm13 = var_1d8_1
                    arg5 = var_1e8_1
                    
                    if ((temp0_455 & 1) == 0)
                        zmm3 = _mm_sub_ps(temp0_482, zmm2)
                        zmm6 = _mm_mul_ps(zmm6, zmm6)
                        
                        if ((temp0_455 & 2) != 0)
                            goto label_14021c6f4
                        
                        goto label_14021c424
                    
                    var_5d8[0] = zmm0.d
                    zmm3 = _mm_sub_ps(temp0_482, zmm2)
                    zmm6 = _mm_mul_ps(zmm6, zmm6)
                    
                    if ((temp0_455 & 2) == 0)
                    label_14021c424:
                        zmm3 = _mm_sub_ps(zmm3, zmm6)
                        zmm12 = var_4c8_2
                        
                        if ((temp0_455 & 4) != 0)
                            var_5d8[2] = zmm11.d
                    else
                    label_14021c6f4:
                        var_5d8[1] = zmm4[0]
                        zmm3 = _mm_sub_ps(zmm3, zmm6)
                        zmm12 = var_4c8_2
                        
                        if ((temp0_455 & 4) != 0)
                            var_5d8[2] = zmm11.d
                    
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                    zmm1 = _mm_sqrt_ps(zmm3)
                    zmm4 = var_598_2
                    
                    if ((temp0_455 & 8) != 0)
                        var_5d8[3] = zmm9[0]
                    
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    zmm11 = var_4b8_1
                    zmm3 = var_418_1
                    
                    if ((temp0_455 & 1) == 0)
                        zmm9 = zmm15
                        
                        if ((temp0_455 & 2) != 0)
                            goto label_14021c728
                        
                        goto label_14021c486
                    
                    var_5c8[0].d = zmm0.d
                    zmm9 = zmm15
                    
                    if ((temp0_455 & 2) != 0)
                    label_14021c728:
                        var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((temp0_455 & 4) == 0)
                            goto label_14021c48f
                        
                        goto label_14021c739
                    
                label_14021c486:
                    
                    if ((temp0_455 & 4) != 0)
                    label_14021c739:
                        var_5c8[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
                        
                        if ((temp0_455 & 8) != 0)
                            var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                    else
                    label_14021c48f:
                        
                        if ((temp0_455 & 8) != 0)
                            var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                
                arg5 ^= var_3c8_1
                
                if (_mm_movemask_ps(zmm13 & not.o(arg5)) == 0)
                    arg5 = _mm_cmpeq_epi32(arg5, arg5)
                    zmm15 = var_4d8_1
                else
                    if (temp0_128 != 0)
                        zmm1 = _mm_srai_epi32(_mm_slli_epi32(var_4a8, 0x1f), 0x1f) & zmm7
                        zmm3 = zmm1 & zmm11
                        uint32_t temp0_494 = _mm_movemask_ps(zmm3)
                        zmm8 = zx.o(0)
                        float var_3a8_1[0x4] = arg6
                        
                        if (temp0_494 == 0)
                            arg6 = var_498_1
                            zmm11 = var_568_1
                            zmm15 = zx.o(0)
                            zmm12 = zx.o(0)
                        else
                            zmm5 = var_568_1
                            zmm0 = data_1434426c0
                            int32_t temp0_495[0x4] = _mm_add_epi64(zmm5, zmm0)
                            zmm2 = _mm_add_epi64(var_498_1, zmm0)
                            zmm9 = _mm_unpacklo_ps(zmm3, zmm3[0].q)
                            zmm4 = _mm_blendv_ps(var_498_1, zmm2, zmm9)
                            float temp0_499[0x4] = _mm_unpackhi_ps(zmm3, zmm3)
                            zmm2 = _mm_blendv_ps(zmm5, temp0_495, temp0_499)
                            char rcx_19 = temp0_494.b
                            uint128_t var_268
                            
                            if ((rcx_19 & 1) != 0)
                                zmm0 = _mm_blend_epi16(var_268, zx.o(*var_498_1.q), 3)
                                
                                if ((rcx_19 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_498_1, 1), 0x10)
                            else
                                zmm0 = var_268
                                
                                if ((rcx_19 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_498_1, 1), 0x10)
                            
                            if ((rcx_19 & 4) == 0)
                                if ((rcx_19 & 8) != 0)
                                    goto label_14021c80e
                                
                                goto label_14021c7a8
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_568_1[0].q, 0x20)
                            char rsi_32
                            
                            if ((rcx_19 & 8) != 0)
                            label_14021c80e:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_568_1, 1), 0x30)
                                rsi_32 = _mm_movemask_ps(zmm1)
                                zmm15 = zx.o(0)
                                
                                if ((rsi_32 & 1) != 0)
                                    goto label_14021c7bb
                                
                                goto label_14021c822
                            
                        label_14021c7a8:
                            rsi_32 = _mm_movemask_ps(zmm1)
                            zmm15 = zx.o(0)
                            
                            if ((rsi_32 & 1) == 0)
                            label_14021c822:
                                
                                if ((rsi_32 & 2) != 0)
                                label_14021c828:
                                    zmm15 = _mm_blend_epi16(zmm15, zmm0, 0xc)
                                    
                                    if ((rsi_32 & 4) != 0)
                                        goto label_14021c7ce
                                    
                                    goto label_14021c839
                            else
                            label_14021c7bb:
                                zmm15 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rsi_32 & 2) != 0)
                                    goto label_14021c828
                            
                            if ((rsi_32 & 4) == 0)
                            label_14021c839:
                                var_268 = zmm0
                                
                                if ((rsi_32 & 8) != 0)
                                    zmm15 = _mm_blend_epi16(zmm15, zmm0, 0xc0)
                            else
                            label_14021c7ce:
                                zmm15 = _mm_blend_epi16(zmm15, zmm0, 0x30)
                                var_268 = zmm0
                                
                                if ((rsi_32 & 8) != 0)
                                    zmm15 = _mm_blend_epi16(zmm15, zmm0, 0xc0)
                            
                            zmm0 = data_1434426c0
                            arg6 = _mm_blendv_ps(zmm4, _mm_add_epi64(zmm4, zmm0), zmm9)
                            zmm11 = _mm_blendv_ps(zmm2, _mm_add_epi64(zmm2, zmm0), temp0_499)
                            uint128_t var_278
                            
                            if ((rcx_19 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_278, *zmm4[0].q, 1)
                                zmm7 = var_5a8_1
                                
                                if ((rcx_19 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm4, 1), 0x10)
                            else
                                zmm0 = var_278
                                zmm7 = var_5a8_1
                                
                                if ((rcx_19 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm4, 1), 0x10)
                            
                            if ((rcx_19 & 4) == 0)
                                if ((rcx_19 & 8) != 0)
                                    goto label_14021c92c
                                
                                goto label_14021c8db
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm2.q, 0x20)
                            
                            if ((rcx_19 & 8) != 0)
                            label_14021c92c:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm2, 1), 0x30)
                                zmm12 = zx.o(0)
                                
                                if ((rsi_32 & 1) != 0)
                                    goto label_14021c8eb
                                
                                goto label_14021c93d
                            
                        label_14021c8db:
                            zmm12 = zx.o(0)
                            
                            if ((rsi_32 & 1) == 0)
                            label_14021c93d:
                                
                                if ((rsi_32 & 2) != 0)
                                label_14021c943:
                                    zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc)
                                    
                                    if ((rsi_32 & 4) != 0)
                                        goto label_14021c8fe
                                    
                                    goto label_14021c954
                            else
                            label_14021c8eb:
                                zmm12 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rsi_32 & 2) != 0)
                                    goto label_14021c943
                            
                            if ((rsi_32 & 4) == 0)
                            label_14021c954:
                                var_278 = zmm0
                                
                                if ((rsi_32 & 8) != 0)
                                    zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                            else
                            label_14021c8fe:
                                zmm12 = _mm_blend_epi16(zmm12, zmm0, 0x30)
                                var_278 = zmm0
                                
                                if ((rsi_32 & 8) != 0)
                                    zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                        
                        zmm0 = data_1434422d0
                        zmm1 = _mm_cmpeq_epi32(var_4a8 & zmm0, zmm0) & zmm7
                        zmm4 = zmm13 & not.o(zmm1)
                        char temp0_547 = _mm_movemask_ps(zmm4)
                        
                        if (temp0_547 == 0)
                            zmm3 = zx.o(0)
                        else
                            int32_t temp0_549[0x4] =
                                _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                            zmm0 = data_1434426c0
                            zmm6 = _mm_add_epi64(zmm11, zmm0)
                            zmm5 = _mm_add_epi64(arg6, zmm0)
                            zmm3 = _mm_shuffle_epi32(temp0_549, 0x50)
                            zmm9 = _mm_blendv_ps(arg6, zmm5, zmm3)
                            zmm4 = _mm_shuffle_epi32(temp0_549, 0xfa)
                            float temp0_555[0x4] = _mm_blendv_ps(zmm11, zmm6, zmm4)
                            uint128_t var_288
                            
                            if ((temp0_547 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_288, *arg6[0].q, 1)
                                
                                if ((temp0_547 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg6, 1), 0x10)
                            else
                                zmm0 = var_288
                                
                                if ((temp0_547 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg6, 1), 0x10)
                            
                            if ((temp0_547 & 4) == 0)
                                if ((temp0_547 & 8) != 0)
                                    goto label_14021ca83
                                
                                goto label_14021ca2f
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm11.q, 0x20)
                            char rsi_33
                            
                            if ((temp0_547 & 8) != 0)
                            label_14021ca83:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm11, 1), 0x30)
                                rsi_33 = _mm_movemask_ps(zmm1)
                                zmm8 = zx.o(0)
                                
                                if ((rsi_33 & 1) != 0)
                                    goto label_14021ca42
                                
                                goto label_14021ca97
                            
                        label_14021ca2f:
                            rsi_33 = _mm_movemask_ps(zmm1)
                            zmm8 = zx.o(0)
                            
                            if ((rsi_33 & 1) == 0)
                            label_14021ca97:
                                
                                if ((rsi_33 & 2) != 0)
                                label_14021ca9d:
                                    zmm8 = _mm_blend_epi16(zmm8, zmm0, 0xc)
                                    
                                    if ((rsi_33 & 4) != 0)
                                        goto label_14021ca55
                                    
                                    goto label_14021caae
                            else
                            label_14021ca42:
                                zmm8 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rsi_33 & 2) != 0)
                                    goto label_14021ca9d
                            
                            if ((rsi_33 & 4) == 0)
                            label_14021caae:
                                var_288 = zmm0
                                
                                if ((rsi_33 & 8) != 0)
                                    zmm8 = _mm_blend_epi16(zmm8, zmm0, 0xc0)
                            else
                            label_14021ca55:
                                zmm8 = _mm_blend_epi16(zmm8, zmm0, 0x30)
                                var_288 = zmm0
                                
                                if ((rsi_33 & 8) != 0)
                                    zmm8 = _mm_blend_epi16(zmm8, zmm0, 0xc0)
                            
                            zmm0 = data_1434426c0
                            arg6 = _mm_blendv_ps(zmm9, _mm_add_epi64(zmm9, zmm0), zmm3)
                            zmm11 = _mm_blendv_ps(temp0_555, _mm_add_epi64(temp0_555, zmm0), zmm4)
                            uint128_t var_298
                            
                            if ((temp0_547 & 1) != 0)
                                zmm1 = _mm_blend_epi16(var_298, zx.o(*zmm9[0].q), 3)
                                
                                if ((temp0_547 & 2) != 0)
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm9, 1), 0x10)
                            else
                                zmm1 = var_298
                                
                                if ((temp0_547 & 2) != 0)
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm9, 1), 0x10)
                            
                            if ((temp0_547 & 4) == 0)
                                if ((temp0_547 & 8) != 0)
                                    goto label_14021cb8c
                                
                                goto label_14021cb3f
                            
                            zmm1 = __insertps_xmmps_memd_immb(zmm1, *temp0_555[0].q, 0x20)
                            
                            if ((temp0_547 & 8) != 0)
                            label_14021cb8c:
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(temp0_555, 1), 0x30)
                                zmm3 = zx.o(0)
                                
                                if ((rsi_33 & 1) != 0)
                                    goto label_14021cb4d
                                
                                goto label_14021cb9c
                            
                        label_14021cb3f:
                            zmm3 = zx.o(0)
                            
                            if ((rsi_33 & 1) == 0)
                            label_14021cb9c:
                                
                                if ((rsi_33 & 2) != 0)
                                label_14021cba2:
                                    zmm3 = _mm_blend_epi16(zmm3, zmm1, 0xc)
                                    
                                    if ((rsi_33 & 4) != 0)
                                        goto label_14021cb5f
                                    
                                    goto label_14021cbb2
                            else
                            label_14021cb4d:
                                zmm3 = _mm_blend_epi16(zx.o(0), zmm1, 3)
                                
                                if ((rsi_33 & 2) != 0)
                                    goto label_14021cba2
                            
                            if ((rsi_33 & 4) == 0)
                            label_14021cbb2:
                                var_298 = zmm1
                                
                                if ((rsi_33 & 8) != 0)
                                    zmm3 = _mm_blend_epi16(zmm3, zmm1, 0xc0)
                            else
                            label_14021cb5f:
                                zmm3 = _mm_blend_epi16(zmm3, zmm1, 0x30)
                                var_298 = zmm1
                                
                                if ((rsi_33 & 8) != 0)
                                    zmm3 = _mm_blend_epi16(zmm3, zmm1, 0xc0)
                        
                        zmm0 = data_142fc95e0
                        zmm4 = _mm_cmpeq_epi32(var_4a8 & zmm0, zmm0) & zmm7
                        zmm5 = zmm13 & not.o(zmm4)
                        char temp0_579 = _mm_movemask_ps(zmm5)
                        
                        if (temp0_579 == 0)
                            zmm9 = arg5
                            arg5 = zmm7
                            zmm4 = zx.o(0)
                            zmm5 = zx.o(0)
                            zmm11 = var_4b8_1
                            arg6 = var_3a8_1
                        else
                            zmm5 = _mm_srai_epi32(_mm_slli_epi32(zmm5, 0x1f), 0x1f)
                            zmm0 = data_1434426c0
                            zmm2 = _mm_add_epi64(zmm11, zmm0)
                            zmm1 = _mm_blendv_ps(arg6, _mm_add_epi64(arg6, zmm0), 
                                _mm_shuffle_epi32(zmm5, 0x50))
                            float temp0_587[0x4] =
                                _mm_blendv_ps(zmm11, zmm2, _mm_shuffle_epi32(zmm5, 0xfa))
                            uint128_t var_2a8
                            
                            if ((temp0_579 & 1) != 0)
                                zmm0 = _mm_blend_ps(var_2a8, *arg6[0].q, 1)
                                
                                if ((temp0_579 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg6, 1), 0x10)
                            else
                                zmm0 = var_2a8
                                
                                if ((temp0_579 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(arg6, 1), 0x10)
                            
                            arg6 = var_3a8_1
                            
                            if ((temp0_579 & 4) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm11.q, 0x20)
                                
                                if ((temp0_579 & 8) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm11, 1), 0x30)
                            else if ((temp0_579 & 8) != 0)
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm11, 1), 0x30)
                            
                            zmm11 = var_4b8_1
                            char temp0_591 = _mm_movemask_ps(zmm4)
                            zmm4 = zx.o(0)
                            
                            if ((temp0_591 & 1) != 0)
                                zmm4 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((temp0_591 & 2) != 0)
                                    goto label_14021cd0d
                                
                                goto label_14021ccdf
                            
                            if ((temp0_591 & 2) == 0)
                            label_14021ccdf:
                                
                                if ((temp0_591 & 4) != 0)
                                label_14021cce3:
                                    zmm4 = _mm_blend_ps(zmm4, zmm0, 4)
                                    
                                    if ((temp0_591 & 8) != 0)
                                        goto label_14021cd1b
                                    
                                    goto label_14021ccf0
                            else
                            label_14021cd0d:
                                zmm4 = _mm_blend_ps(zmm4, zmm0, 2)
                                
                                if ((temp0_591 & 4) != 0)
                                    goto label_14021cce3
                            
                            if ((temp0_591 & 8) != 0)
                            label_14021cd1b:
                                zmm4 = _mm_blend_ps(zmm4, zmm0, 8)
                                var_2a8 = zmm0
                                
                                if ((temp0_579 & 1) == 0)
                                    goto label_14021ccfa
                                
                                goto label_14021cd45
                            
                        label_14021ccf0:
                            var_2a8 = zmm0
                            uint128_t var_2b8
                            
                            if ((temp0_579 & 1) != 0)
                            label_14021cd45:
                                zmm0 = _mm_blend_ps(var_2b8, *zmm1.q, 1)
                                
                                if ((temp0_579 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm1, 1), 0x10)
                            else
                            label_14021ccfa:
                                zmm0 = var_2b8
                                
                                if ((temp0_579 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm1, 1), 0x10)
                            
                            if ((temp0_579 & 4) == 0)
                                if ((temp0_579 & 8) != 0)
                                    goto label_14021e1cd
                                
                                goto label_14021cd6c
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_587[0].q, 0x20)
                            
                            if ((temp0_579 & 8) != 0)
                            label_14021e1cd:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_587, 1), 0x30)
                                zmm5 = zx.o(0)
                                
                                if ((temp0_591 & 1) != 0)
                                    goto label_14021cd7a
                                
                                goto label_14021e1de
                            
                        label_14021cd6c:
                            zmm5 = zx.o(0)
                            
                            if ((temp0_591 & 1) != 0)
                            label_14021cd7a:
                                zmm5 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((temp0_591 & 2) != 0)
                                    goto label_14021e1e6
                                
                                goto label_14021cd88
                            
                        label_14021e1de:
                            
                            if ((temp0_591 & 2) == 0)
                            label_14021cd88:
                                
                                if ((temp0_591 & 4) != 0)
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 4)
                            else
                            label_14021e1e6:
                                zmm5 = _mm_blend_ps(zmm5, zmm0, 2)
                                
                                if ((temp0_591 & 4) != 0)
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 4)
                            
                            var_2b8 = zmm0
                            zmm9 = arg5
                            arg5 = zmm7
                            
                            if ((temp0_591 & 8) != 0)
                                zmm5 = _mm_blend_ps(zmm5, zmm0, 8)
                        
                        zmm1 = __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_5b8_1, var_468_3), 
                            var_458_1)
                        zmm0 = data_1434426c0
                        zmm7 = var_3b8_1
                        zmm6 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), 
                            _mm_shuffle_epi32(zmm7, 0x50))
                        zmm2 = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(
                                _mm_add_epi64(__paddq_xmmdq_memdq(var_578_1, var_4c8_2), arg6), 
                                zmm0), 
                            _mm_shuffle_epi32(zmm7, 0xfa))
                        int64_t rcx_22 = _mm_extract_epi64(zmm6, 1)
                        int64_t rsi_36 = _mm_extract_epi64(zmm2, 1)
                        zmm0 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm6.q)), *(arg4 + rcx_22), 
                                    1), 
                                *(arg4 + zmm2.q), 2), 
                            *(arg4 + rsi_36), 3)
                        zmm1 = _mm_srli_epi32(zmm0, 0x15)
                        zmm2 = data_143442440
                        zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm2))
                        zmm6 = data_143442690
                        float temp0_619[0x4] =
                            _mm_add_ps(zmm15, _mm_mul_ps(zmm12, _mm_div_ps(zmm1, zmm6)))
                        zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(
                            _mm_srli_epi32(zmm0, 0xa) & data_143442480, zmm2))
                        
                        if ((temp0_128 & 1) != 0)
                            var_5f8[0] = temp0_619[0]
                        
                        zmm1 = _mm_div_ps(zmm1, zmm6)
                        
                        if ((temp0_128 & 2) != 0)
                            var_5f8[1] = __extractps_memd_xmmps_immb(temp0_619, 1)
                        
                        zmm0 &= data_143442680
                        float temp0_625[0x4] = _mm_mul_ps(zmm3, zmm1)
                        zmm12 = var_4c8_2
                        zmm7 = arg5
                        
                        if ((temp0_128 & 4) != 0)
                            var_5f8[2] = __extractps_memd_xmmps_immb(temp0_619, 2)
                        
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                        zmm8 = _mm_add_ps(zmm8, temp0_625)
                        arg5 = zmm9
                        
                        if ((temp0_128 & 8) == 0)
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm3 = var_418_1
                            
                            if ((temp0_128 & 1) != 0)
                                goto label_14021d86e
                            
                            goto label_14021cf09
                        
                        var_5f8[3] = __extractps_memd_xmmps_immb(temp0_619, 3)
                        zmm0 = _mm_cvtepi32_ps(zmm0)
                        zmm3 = var_418_1
                        
                        if ((temp0_128 & 1) != 0)
                        label_14021d86e:
                            var_5e8[0] = zmm8[0].d
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_128 & 2) == 0)
                                goto label_14021cf19
                            
                            goto label_14021d885
                        
                    label_14021cf09:
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                        
                        if ((temp0_128 & 2) == 0)
                        label_14021cf19:
                            zmm5 = _mm_mul_ps(zmm5, zmm0)
                            
                            if ((temp0_128 & 4) != 0)
                                goto label_14021d89a
                            
                            goto label_14021cf25
                        
                    label_14021d885:
                        var_5e8[1] = __extractps_memd_xmmps_immb(zmm8, 1)
                        zmm5 = _mm_mul_ps(zmm5, zmm0)
                        
                        if ((temp0_128 & 4) == 0)
                        label_14021cf25:
                            zmm15 = _mm_mul_ps(temp0_619, temp0_619)
                            zmm4 = _mm_add_ps(zmm4, zmm5)
                            
                            if ((temp0_128 & 8) != 0)
                                var_5e8[3] = __extractps_memd_xmmps_immb(zmm8, 3)
                        else
                        label_14021d89a:
                            var_5e8[2] = __extractps_memd_xmmps_immb(zmm8, 2)
                            zmm15 = _mm_mul_ps(temp0_619, temp0_619)
                            zmm4 = _mm_add_ps(zmm4, zmm5)
                            
                            if ((temp0_128 & 8) != 0)
                                var_5e8[3] = __extractps_memd_xmmps_immb(zmm8, 3)
                        
                        zmm1 = _mm_sub_ps(data_142d3f670, zmm15)
                        zmm8 = _mm_mul_ps(zmm8, zmm8)
                        zmm5 = var_458_1
                        
                        if ((temp0_128 & 1) != 0)
                            var_5d8[0] = zmm4[0]
                        
                        zmm1 = _mm_sub_ps(zmm1, zmm8)
                        zmm0 = _mm_mul_ps(zmm4, zmm4)
                        zmm9 = data_143442c20
                        
                        if ((temp0_128 & 2) != 0)
                            var_5d8[1] = __extractps_memd_xmmps_immb(zmm4, 1)
                        
                        zmm1 = _mm_sub_ps(zmm1, zmm0)
                        zmm8 = var_5b8_1
                        
                        if ((temp0_128 & 4) != 0)
                            var_5d8[2] = __extractps_memd_xmmps_immb(zmm4, 2)
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        
                        if ((temp0_128 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((temp0_128 & 1) != 0)
                                goto label_14021d8cc
                            
                            goto label_14021cfbc
                        
                        var_5d8[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_128 & 1) != 0)
                        label_14021d8cc:
                            var_5c8[0].d = zmm0.d
                            zmm4 = var_598_2
                            
                            if ((temp0_128 & 2) == 0)
                                goto label_14021cfca
                            
                            goto label_14021d8e3
                        
                    label_14021cfbc:
                        zmm4 = var_598_2
                        
                        if ((temp0_128 & 2) == 0)
                        label_14021cfca:
                            
                            if ((temp0_128 & 4) != 0)
                                goto label_14021d8f4
                            
                            goto label_14021cfd3
                        
                    label_14021d8e3:
                        var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((temp0_128 & 4) == 0)
                        label_14021cfd3:
                            
                            if ((temp0_128 & 8) != 0)
                                var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_14021d8f4:
                            var_5c8[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((temp0_128 & 8) != 0)
                                var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                    
                    arg5 ^= zmm7
                    
                    if (_mm_movemask_ps(zmm13 & not.o(arg5)) == 0)
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        zmm15 = var_4d8_1
                    else
                        zmm2 = __pcmpeqd_xmmdq_memdq(var_478, data_143442ac0)
                        zmm1 = zmm13 & not.o(zmm2)
                        char temp0_648 = _mm_movemask_ps(zmm1)
                        
                        if (temp0_648 != 0)
                            zmm6 = zmm3
                            zmm1 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x1f), 0x1f)
                            zmm3 = _mm_add_epi64(var_578_1, zmm12)
                            int32_t temp0_653[0x4] =
                                _mm_add_epi64(__paddq_xmmdq_memdq(zmm8, var_468_3), zmm5)
                            zmm3 = _mm_add_epi64(zmm3, arg6)
                            zmm0 = data_1434426c0
                            zmm3 = _mm_add_epi64(zmm3, zmm0)
                            float temp0_658[0x4] = _mm_blendv_ps(zx.o(0), 
                                _mm_add_epi64(temp0_653, zmm0), _mm_shuffle_epi32(zmm1, 0x50))
                            zmm1 = _mm_blendv_ps(zx.o(0), zmm3, _mm_shuffle_epi32(zmm1, 0xfa))
                            int64_t rcx_24 = temp0_658[0].q
                            int64_t rbp_10 = _mm_extract_epi64(temp0_658, 1)
                            int64_t rdi_31 = _mm_extract_epi64(zmm1, 1)
                            zmm0 = __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_24)), 
                                        *(arg4 + rbp_10), 1), 
                                    *(arg4 + zmm1.q), 2), 
                                *(arg4 + rdi_31), 3)
                            zmm1 = _mm_srli_epi32(zmm0, 0x15)
                            zmm3 = _mm_srli_epi32(zmm0, 5) & data_143442600
                            zmm1 = __paddd_xmmdq_memdq(zmm1 & data_143442320, data_143442330)
                                | (zmm1 & data_143442610) | zmm3
                            
                            if ((temp0_648 & 1) != 0)
                                var_5f8[0] = zmm1.d
                            
                            zmm4 = _mm_srli_epi32(zmm0, 0xa)
                            zmm3 = _mm_slli_epi32(zmm0, 6)
                            
                            if ((temp0_648 & 2) != 0)
                                var_5f8[1] = __pextrd_memd_xmmdq_immb(zmm1, 1)
                            
                            zmm3 &= data_143442600
                            zmm5 = zmm4 & data_143442610
                            zmm4 &= data_143442320
                            
                            if ((temp0_648 & 4) == 0)
                                zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442330)
                                zmm3 |= zmm5
                                
                                if ((temp0_648 & 8) != 0)
                                    goto label_14021e216
                                
                                goto label_14021d159
                            
                            var_5f8[2] = __pextrd_memd_xmmdq_immb(zmm1, 2)
                            zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442330)
                            zmm3 |= zmm5
                            
                            if ((temp0_648 & 8) != 0)
                            label_14021e216:
                                var_5f8[3] = __pextrd_memd_xmmdq_immb(zmm1, 3)
                                zmm3 |= zmm4
                                
                                if ((temp0_648 & 1) == 0)
                                    goto label_14021d16a
                                
                                goto label_14021e22b
                            
                        label_14021d159:
                            zmm3 |= zmm4
                            
                            if ((temp0_648 & 1) != 0)
                            label_14021e22b:
                                var_5e8[0] = zmm3[0]
                                zmm5 = zmm0 & data_143442620
                                
                                if ((temp0_648 & 2) != 0)
                                    var_5e8[1] = __pextrd_memd_xmmdq_immb(zmm3, 1)
                            else
                            label_14021d16a:
                                zmm5 = zmm0 & data_143442620
                                
                                if ((temp0_648 & 2) != 0)
                                    var_5e8[1] = __pextrd_memd_xmmdq_immb(zmm3, 1)
                            
                            zmm4 = _mm_slli_epi32(zmm0, 0x11)
                            zmm0 &= data_143442640
                            zmm5 = __paddd_xmmdq_memdq(zmm5, data_1434423a0)
                            
                            if ((temp0_648 & 4) != 0)
                                var_5e8[2] = __pextrd_memd_xmmdq_immb(zmm3, 2)
                            
                            zmm4 &= data_143442630
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            
                            if ((temp0_648 & 8) != 0)
                                var_5e8[3] = __pextrd_memd_xmmdq_immb(zmm3, 3)
                            
                            zmm4 |= zmm0 | zmm5
                            float temp0_677[0x4] = _mm_sub_ps(data_142d3f670, zmm1)
                            float temp0_678[0x4] = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((temp0_648 & 1) != 0)
                                var_5d8[0] = zmm4[0]
                            
                            float temp0_679[0x4] = _mm_sub_ps(temp0_677, temp0_678)
                            zmm0 = _mm_mul_ps(zmm4, zmm4)
                            
                            if ((temp0_648 & 2) != 0)
                                var_5d8[1] = __pextrd_memd_xmmdq_immb(zmm4, 1)
                            
                            float temp0_682[0x4] = _mm_sub_ps(temp0_679, zmm0)
                            zmm3 = zmm6
                            
                            if ((temp0_648 & 4) != 0)
                                var_5d8[2] = __pextrd_memd_xmmdq_immb(zmm4, 2)
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), temp0_682, 1)
                            zmm1 = _mm_sqrt_ps(temp0_682)
                            
                            if ((temp0_648 & 8) == 0)
                                zmm0 = _mm_and_ps(zmm0, zmm1)
                                zmm5 = var_458_1
                                
                                if ((temp0_648 & 1) != 0)
                                    goto label_14021e268
                                
                                goto label_14021d233
                            
                            var_5d8[3] = __pextrd_memd_xmmdq_immb(zmm4, 3)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            zmm5 = var_458_1
                            
                            if ((temp0_648 & 1) != 0)
                            label_14021e268:
                                var_5c8[0].d = zmm0.d
                                zmm4 = var_598_2
                                
                                if ((temp0_648 & 2) == 0)
                                    goto label_14021d241
                                
                                goto label_14021e27f
                            
                        label_14021d233:
                            zmm4 = var_598_2
                            
                            if ((temp0_648 & 2) == 0)
                            label_14021d241:
                                
                                if ((temp0_648 & 4) != 0)
                                    goto label_14021e290
                                
                                goto label_14021d24a
                            
                        label_14021e27f:
                            var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_648 & 4) == 0)
                            label_14021d24a:
                                
                                if ((temp0_648 & 8) != 0)
                                    var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_14021e290:
                                var_5c8[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
                                
                                if ((temp0_648 & 8) != 0)
                                    var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                        
                        arg5 ^= zmm2
                        zmm13 &= not.o(arg5)
                        
                        if (_mm_movemask_ps(zmm13) == 0)
                            arg5 = _mm_cmpeq_epi32(arg5, arg5)
                            zmm15 = var_4d8_1
                        else
                            zmm2 = __pcmpeqd_xmmdq_memdq(var_478, data_142fc95e0)
                            zmm1 = _mm_slli_epi32(zmm13 & zmm2, 0x1f)
                            char temp0_691 = _mm_movemask_ps(zmm1)
                            
                            if (temp0_691 != 0)
                                zmm6 = zmm3
                                zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                                zmm3 = _mm_add_epi64(var_578_1, zmm12)
                                int32_t temp0_695[0x4] =
                                    _mm_add_epi64(__paddq_xmmdq_memdq(zmm8, var_468_3), zmm5)
                                zmm3 = _mm_add_epi64(zmm3, arg6)
                                zmm0 = data_1434426c0
                                zmm3 = _mm_add_epi64(zmm3, zmm0)
                                float temp0_700[0x4] = _mm_blendv_ps(zx.o(0), 
                                    _mm_add_epi64(temp0_695, zmm0), _mm_shuffle_epi32(zmm1, 0x50))
                                zmm1 = _mm_blendv_ps(zx.o(0), zmm3, _mm_shuffle_epi32(zmm1, 0xfa))
                                int64_t rcx_26 = temp0_700[0].q
                                int64_t rbp_11 = _mm_extract_epi64(temp0_700, 1)
                                int64_t rbx_13 = _mm_extract_epi64(zmm1, 1)
                                zmm1 = __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(
                                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_26)), 
                                            *(arg4 + rbp_11), 1), 
                                        *(arg4 + zmm1.q), 2), 
                                    *(arg4 + rbx_13), 3)
                                zmm0 = _mm_srli_epi32(zmm1, 0x15)
                                zmm3 = _mm_srli_epi32(zmm1, 0xa) & data_143442480
                                zmm4 = data_143442440
                                zmm0 = __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm4)), data_143442690)
                                
                                if ((temp0_691 & 1) == 0)
                                    zmm3 = _mm_add_epi32(zmm3, zmm4)
                                    
                                    if ((temp0_691 & 2) != 0)
                                        goto label_14021e2c7
                                    
                                    goto label_14021d36e
                                
                                var_5f8[0] = zmm0.d
                                zmm3 = _mm_add_epi32(zmm3, zmm4)
                                
                                if ((temp0_691 & 2) != 0)
                                label_14021e2c7:
                                    var_5f8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_691 & 4) == 0)
                                        goto label_14021d379
                                    
                                    goto label_14021e2da
                                
                            label_14021d36e:
                                zmm3 = _mm_cvtepi32_ps(zmm3)
                                
                                if ((temp0_691 & 4) == 0)
                                label_14021d379:
                                    zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                    
                                    if ((temp0_691 & 8) != 0)
                                        goto label_14021e2f1
                                    
                                    goto label_14021d388
                                
                            label_14021e2da:
                                var_5f8[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                                zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                
                                if ((temp0_691 & 8) != 0)
                                label_14021e2f1:
                                    var_5f8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                    zmm1 &= data_143442680
                                    
                                    if ((temp0_691 & 1) == 0)
                                        goto label_14021d398
                                    
                                    goto label_14021e309
                                
                            label_14021d388:
                                zmm1 &= data_143442680
                                
                                if ((temp0_691 & 1) == 0)
                                label_14021d398:
                                    zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                                    
                                    if ((temp0_691 & 2) != 0)
                                        goto label_14021e31f
                                    
                                    goto label_14021d3a8
                                
                            label_14021e309:
                                var_5e8[0] = zmm3[0]
                                zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                                
                                if ((temp0_691 & 2) != 0)
                                label_14021e31f:
                                    var_5e8[1] = __extractps_memd_xmmps_immb(zmm3, 1)
                                    zmm1 = _mm_cvtepi32_ps(zmm1)
                                    
                                    if ((temp0_691 & 4) == 0)
                                        goto label_14021d3b3
                                    
                                    goto label_14021e332
                                
                            label_14021d3a8:
                                zmm1 = _mm_cvtepi32_ps(zmm1)
                                
                                if ((temp0_691 & 4) != 0)
                                label_14021e332:
                                    var_5e8[2] = __extractps_memd_xmmps_immb(zmm3, 2)
                                    zmm0 = _mm_mul_ps(zmm0, zmm0)
                                    zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                                    
                                    if ((temp0_691 & 8) != 0)
                                        var_5e8[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                                else
                                label_14021d3b3:
                                    zmm0 = _mm_mul_ps(zmm0, zmm0)
                                    zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                                    
                                    if ((temp0_691 & 8) != 0)
                                        var_5e8[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                                
                                zmm4 = _mm_sub_ps(data_142d3f670, zmm0)
                                float temp0_720[0x4] = _mm_mul_ps(zmm3, zmm3)
                                
                                if ((temp0_691 & 1) != 0)
                                    var_5d8[0] = zmm1.d
                                
                                zmm4 = _mm_sub_ps(zmm4, temp0_720)
                                zmm0 = _mm_mul_ps(zmm1, zmm1)
                                
                                if ((temp0_691 & 2) != 0)
                                    var_5d8[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                                
                                zmm4 = _mm_sub_ps(zmm4, zmm0)
                                
                                if ((temp0_691 & 4) != 0)
                                    var_5d8[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                                
                                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                                float temp0_727[0x4] = _mm_sqrt_ps(zmm4)
                                
                                if ((temp0_691 & 8) == 0)
                                    zmm0 = _mm_and_ps(zmm0, temp0_727)
                                    zmm4 = var_598_2
                                    
                                    if ((temp0_691 & 1) != 0)
                                        goto label_14021e36c
                                    
                                    goto label_14021d42b
                                
                                var_5d8[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                                zmm0 = _mm_and_ps(zmm0, temp0_727)
                                zmm4 = var_598_2
                                
                                if ((temp0_691 & 1) != 0)
                                label_14021e36c:
                                    var_5c8[0].d = zmm0.d
                                    zmm3 = zmm6
                                    
                                    if ((temp0_691 & 2) == 0)
                                        goto label_14021d435
                                    
                                    goto label_14021e37e
                                
                            label_14021d42b:
                                zmm3 = zmm6
                                
                                if ((temp0_691 & 2) == 0)
                                label_14021d435:
                                    
                                    if ((temp0_691 & 4) != 0)
                                        goto label_14021e38e
                                    
                                    goto label_14021d43d
                                
                            label_14021e37e:
                                var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_691 & 4) == 0)
                                label_14021d43d:
                                    
                                    if ((temp0_691 & 8) != 0)
                                        var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                                else
                                label_14021e38e:
                                    var_5c8[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
                                    
                                    if ((temp0_691 & 8) != 0)
                                        var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                            
                            zmm2 &= not.o(zmm13)
                            bool cond:38_1 = _mm_movemask_ps(_mm_slli_epi32(zmm2, 0x1f)) == 0
                            arg5 = _mm_cmpeq_epi32(arg5, arg5)
                            
                            if (cond:38_1)
                                zmm15 = var_4d8_1
                            else
                                zmm0 = __pcmpeqd_xmmdq_memdq(var_478, data_143442ad0)
                                char temp0_735 = _mm_movemask_ps(_mm_slli_epi32(zmm13 & zmm0, 0x1f))
                                
                                if (temp0_735 != 0)
                                    if ((temp0_735 & 1) == 0)
                                        if ((temp0_735 & 2) != 0)
                                            goto label_14021a508
                                        
                                        goto label_14021d4a2
                                    
                                    var_5f8[0] = 0
                                    
                                    if ((temp0_735 & 2) != 0)
                                    label_14021a508:
                                        var_5f8[1] = 0
                                        
                                        if ((temp0_735 & 4) == 0)
                                            goto label_14021d4aa
                                        
                                        goto label_14021a518
                                    
                                label_14021d4a2:
                                    
                                    if ((temp0_735 & 4) == 0)
                                    label_14021d4aa:
                                        
                                        if ((temp0_735 & 8) != 0)
                                            goto label_14021a528
                                        
                                        goto label_14021d4b2
                                    
                                label_14021a518:
                                    var_5f8[2] = 0
                                    
                                    if ((temp0_735 & 8) != 0)
                                    label_14021a528:
                                        var_5f8[3] = 0
                                        
                                        if ((temp0_735 & 1) == 0)
                                            goto label_14021d4ba
                                        
                                        goto label_14021a538
                                    
                                label_14021d4b2:
                                    
                                    if ((temp0_735 & 1) == 0)
                                    label_14021d4ba:
                                        
                                        if ((temp0_735 & 2) != 0)
                                            goto label_14021a548
                                        
                                        goto label_14021d4c2
                                    
                                label_14021a538:
                                    var_5e8[0] = 0
                                    
                                    if ((temp0_735 & 2) != 0)
                                    label_14021a548:
                                        var_5e8[1] = 0
                                        
                                        if ((temp0_735 & 4) == 0)
                                            goto label_14021d4ca
                                        
                                        goto label_14021a558
                                    
                                label_14021d4c2:
                                    
                                    if ((temp0_735 & 4) == 0)
                                    label_14021d4ca:
                                        
                                        if ((temp0_735 & 8) != 0)
                                            goto label_14021a568
                                        
                                        goto label_14021d4d2
                                    
                                label_14021a558:
                                    var_5e8[2] = 0
                                    
                                    if ((temp0_735 & 8) != 0)
                                    label_14021a568:
                                        var_5e8[3] = 0
                                        
                                        if ((temp0_735 & 1) == 0)
                                            goto label_14021d4da
                                        
                                        goto label_14021a578
                                    
                                label_14021d4d2:
                                    
                                    if ((temp0_735 & 1) == 0)
                                    label_14021d4da:
                                        
                                        if ((temp0_735 & 2) != 0)
                                            goto label_14021a588
                                        
                                        goto label_14021d4e2
                                    
                                label_14021a578:
                                    var_5d8[0] = 0
                                    
                                    if ((temp0_735 & 2) != 0)
                                    label_14021a588:
                                        var_5d8[1] = 0
                                        
                                        if ((temp0_735 & 4) == 0)
                                            goto label_14021d4ea
                                        
                                        goto label_14021a598
                                    
                                label_14021d4e2:
                                    
                                    if ((temp0_735 & 4) == 0)
                                    label_14021d4ea:
                                        
                                        if ((temp0_735 & 8) != 0)
                                            goto label_14021a5a8
                                        
                                        goto label_14021d4f2
                                    
                                label_14021a598:
                                    var_5d8[2] = 0
                                    
                                    if ((temp0_735 & 8) != 0)
                                    label_14021a5a8:
                                        var_5d8[3] = 0
                                        
                                        if ((temp0_735 & 1) == 0)
                                            goto label_14021d4fa
                                        
                                        goto label_14021a5b8
                                    
                                label_14021d4f2:
                                    
                                    if ((temp0_735 & 1) == 0)
                                    label_14021d4fa:
                                        
                                        if ((temp0_735 & 2) != 0)
                                            goto label_14021a5c8
                                        
                                        goto label_14021d502
                                    
                                label_14021a5b8:
                                    var_5c8[0].d = 0x3f800000
                                    
                                    if ((temp0_735 & 2) != 0)
                                    label_14021a5c8:
                                        var_5c8[0]:4.d = 0x3f800000
                                        
                                        if ((temp0_735 & 4) == 0)
                                            goto label_14021d50a
                                        
                                        goto label_14021a5d8
                                    
                                label_14021d502:
                                    
                                    if ((temp0_735 & 4) != 0)
                                    label_14021a5d8:
                                        var_5c8[1].d = 0x3f800000
                                        
                                        if ((temp0_735 & 8) != 0)
                                            var_5c8[1]:4.d = 0x3f800000
                                    else
                                    label_14021d50a:
                                        
                                        if ((temp0_735 & 8) != 0)
                                            var_5c8[1]:4.d = 0x3f800000
                                
                                char temp0_737 =
                                    _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm2), 0x1f))
                                zmm15 = var_4d8_1
                                
                                if (temp0_737 != 0)
                                    if ((temp0_737 & 1) == 0)
                                        if ((temp0_737 & 2) != 0)
                                            goto label_14021a5fd
                                        
                                        goto label_14021d547
                                    
                                    var_5f8[0] = 0
                                    
                                    if ((temp0_737 & 2) != 0)
                                    label_14021a5fd:
                                        var_5f8[1] = 0
                                        
                                        if ((temp0_737 & 4) == 0)
                                            goto label_14021d54f
                                        
                                        goto label_14021a60d
                                    
                                label_14021d547:
                                    
                                    if ((temp0_737 & 4) == 0)
                                    label_14021d54f:
                                        
                                        if ((temp0_737 & 8) != 0)
                                            goto label_14021a61d
                                        
                                        goto label_14021d557
                                    
                                label_14021a60d:
                                    var_5f8[2] = 0
                                    
                                    if ((temp0_737 & 8) != 0)
                                    label_14021a61d:
                                        var_5f8[3] = 0
                                        
                                        if ((temp0_737 & 1) == 0)
                                            goto label_14021d55f
                                        
                                        goto label_14021a62d
                                    
                                label_14021d557:
                                    
                                    if ((temp0_737 & 1) == 0)
                                    label_14021d55f:
                                        
                                        if ((temp0_737 & 2) != 0)
                                            goto label_14021a63d
                                        
                                        goto label_14021d567
                                    
                                label_14021a62d:
                                    var_5e8[0] = 0
                                    
                                    if ((temp0_737 & 2) != 0)
                                    label_14021a63d:
                                        var_5e8[1] = 0
                                        
                                        if ((temp0_737 & 4) == 0)
                                            goto label_14021d56f
                                        
                                        goto label_14021a64d
                                    
                                label_14021d567:
                                    
                                    if ((temp0_737 & 4) == 0)
                                    label_14021d56f:
                                        
                                        if ((temp0_737 & 8) != 0)
                                            goto label_14021a65d
                                        
                                        goto label_14021d577
                                    
                                label_14021a64d:
                                    var_5e8[2] = 0
                                    
                                    if ((temp0_737 & 8) != 0)
                                    label_14021a65d:
                                        var_5e8[3] = 0
                                        
                                        if ((temp0_737 & 1) == 0)
                                            goto label_14021d57f
                                        
                                        goto label_14021a66d
                                    
                                label_14021d577:
                                    
                                    if ((temp0_737 & 1) == 0)
                                    label_14021d57f:
                                        
                                        if ((temp0_737 & 2) != 0)
                                            goto label_14021a67d
                                        
                                        goto label_14021d587
                                    
                                label_14021a66d:
                                    var_5d8[0] = 0
                                    
                                    if ((temp0_737 & 2) != 0)
                                    label_14021a67d:
                                        var_5d8[1] = 0
                                        
                                        if ((temp0_737 & 4) == 0)
                                            goto label_14021d58f
                                        
                                        goto label_14021a68d
                                    
                                label_14021d587:
                                    
                                    if ((temp0_737 & 4) == 0)
                                    label_14021d58f:
                                        
                                        if ((temp0_737 & 8) != 0)
                                            goto label_14021a69d
                                        
                                        goto label_14021d597
                                    
                                label_14021a68d:
                                    var_5d8[2] = 0
                                    
                                    if ((temp0_737 & 8) != 0)
                                    label_14021a69d:
                                        var_5d8[3] = 0
                                        
                                        if ((temp0_737 & 1) == 0)
                                            goto label_14021d59f
                                        
                                        goto label_14021a6ad
                                    
                                label_14021d597:
                                    
                                    if ((temp0_737 & 1) == 0)
                                    label_14021d59f:
                                        
                                        if ((temp0_737 & 2) != 0)
                                            goto label_14021a6bd
                                        
                                        goto label_14021d5a7
                                    
                                label_14021a6ad:
                                    var_5c8[0].d = 0x3f800000
                                    
                                    if ((temp0_737 & 2) != 0)
                                    label_14021a6bd:
                                        var_5c8[0]:4.d = 0x3f800000
                                        
                                        if ((temp0_737 & 4) == 0)
                                            goto label_14021d5af
                                        
                                        goto label_14021a6cd
                                    
                                label_14021d5a7:
                                    
                                    if ((temp0_737 & 4) != 0)
                                    label_14021a6cd:
                                        var_5c8[1].d = 0x3f800000
                                        
                                        if ((temp0_737 & 8) != 0)
                                            var_5c8[1]:4.d = 0x3f800000
                                    else
                                    label_14021d5af:
                                        
                                        if ((temp0_737 & 8) != 0)
                                            var_5c8[1]:4.d = 0x3f800000
            
            zmm4 = _mm_cmpeq_epi32(zmm4, zmm3) & not.o(zmm11)
            char temp0_740 = _mm_movemask_ps(zmm4)
            
            if (temp0_740 == 0)
                arg6 = temp0_103
                zmm12 = data_142d3f5b0
            else
                zmm3 = __pmulld_xmmdq_memdq(zmm3, var_488)
                arg5 = _mm_cvtepi32_epi64(zmm3[0].q)
                zmm13 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm3, 0x4e).q)
                zmm1 = var_588_2 & zmm4
                uint128_t var_588_3 = zmm1
                zmm1 = _mm_slli_epi32(zmm1, 0x1f)
                char temp0_746 = _mm_movemask_ps(zmm1)
                int32_t var_598_3[0x4] = zmm4
                uint128_t var_518
                float var_508[0x4]
                uint128_t var_4f8
                int32_t var_4e8[0x4]
                
                if (temp0_746 == 0)
                    arg6 = temp0_103
                else
                    zmm11 = _mm_add_epi64(zmm13, zmm12)
                    zmm3 = var_468_3
                    zmm5 = __paddq_xmmdq_memdq(_mm_add_epi64(arg5, zmm3), var_498_1)
                    zmm11 = __paddq_xmmdq_memdq(zmm11, var_568_1)
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(var_4a8, 0x1f), 0x1f)
                    zmm1 = _mm_srai_epi32(zmm1, 0x1f) & zmm2
                    var_4d8_1 = zmm15
                    
                    if (_mm_movemask_ps(zmm1) != 0)
                        zmm15 = data_1434426b0
                        int32_t temp0_755[0x4] = _mm_add_epi64(zmm5, zmm15)
                        arg6 = zmm8
                        zmm8 = _mm_shuffle_epi32(zmm1, 0x50)
                        zmm5 = _mm_blendv_ps(zmm5, temp0_755, zmm8)
                        int32_t temp0_758[0x4] = _mm_add_epi64(zmm11, zmm15)
                        zmm4 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm11 = _mm_blendv_ps(zmm11, temp0_758, zmm4)
                        zmm1 = _mm_add_epi64(var_578_1, zmm12)
                        arg6 = _mm_add_epi64(_mm_add_epi64(arg6, zmm3), arg5)
                        zmm1 = _mm_add_epi64(zmm1, zmm13)
                        zmm0 = data_1434426c0
                        float temp0_766[0x4] =
                            _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg6, zmm0), zmm8)
                        zmm7 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), zmm4)
                        int64_t rax_124 = temp0_766[0].q
                        int64_t rbp_12 = _mm_extract_epi64(temp0_766, 1)
                        int64_t rdi_33 = zmm7[0].q
                        int64_t rsi_37 = _mm_extract_epi64(zmm7, 1)
                        zmm1 = _mm_cvtepi32_ps(_mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_124)), *(arg4 + rbp_12), 
                                    1), 
                                *(arg4 + rdi_33), 2), 
                            *(arg4 + rsi_37), 3).q))
                    
                    float temp0_774[0x4] = _mm_blendv_ps(data_1434426d0, zmm1, zmm2)
                    zmm0 = data_1434422d0
                    zmm1 = var_4a8 & zmm0
                    zmm2 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm1, zmm0) & var_588_3, 0x1f)
                    char temp0_777 = _mm_movemask_ps(zmm2)
                    
                    if (temp0_777 == 0)
                        zmm7 = zmm5
                        zmm2 = zmm11
                        zmm8 = var_5b8_1
                        zmm15 = var_4d8_1
                    else
                        zmm0 = data_1434426b0
                        int32_t temp0_778[0x4] = _mm_add_epi64(zmm11, zmm0)
                        zmm6 = _mm_add_epi64(zmm5, zmm0)
                        zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                        zmm7 = _mm_blendv_ps(zmm5, zmm6, _mm_shuffle_epi32(zmm2, 0x50))
                        zmm2 = _mm_blendv_ps(zmm11, temp0_778, _mm_shuffle_epi32(zmm2, 0xfa))
                        uint128_t var_258
                        
                        if ((temp0_777 & 1) != 0)
                            zmm0 = _mm_insert_epi32(var_258, zx.d(*zmm5[0].q), 0)
                            
                            if ((temp0_777 & 2) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm5, 1)), 1)
                        else
                            zmm0 = var_258
                            
                            if ((temp0_777 & 2) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm5, 1)), 1)
                        
                        zmm8 = var_5b8_1
                        zmm15 = var_4d8_1
                        
                        if ((temp0_777 & 4) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm11.q), 2)
                            
                            if ((temp0_777 & 8) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm11, 1)), 3)
                        else if ((temp0_777 & 8) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm11, 1)), 3)
                        
                        var_258 = zmm0
                        zmm4 =
                            _mm_cvtepi32_ps(__pblendw_xmmdq_memdq_immb(zmm0, data_142d8f750, 0xaa))
                    
                    zmm5 = data_142fc95e0
                    zmm0 = var_4a8 & zmm5
                    char temp0_804 = _mm_movemask_ps(_mm_slli_epi32(
                        var_588_3 & _mm_cmpeq_epi32(zmm0, zmm5), 0x1f))
                    
                    if (temp0_804 == 0)
                        zmm7 = var_5a8_1
                        zmm6 = zx.o(0)
                    else
                        if ((temp0_804 & 1) == 0)
                            if ((temp0_804 & 2) != 0)
                                goto label_14021da5e
                            
                            goto label_14021d9c6
                        
                        uint128_t var_408 = _mm_insert_epi32(var_408, zx.d(*zmm7[0].q), 0)
                        
                        if ((temp0_804 & 2) != 0)
                        label_14021da5e:
                            var_408 =
                                _mm_insert_epi32(var_408, zx.d(*_mm_extract_epi64(zmm7, 1)), 1)
                            zmm7 = var_5a8_1
                            zmm6 = zx.o(0)
                            
                            if ((temp0_804 & 4) == 0)
                                goto label_14021d9db
                            
                            goto label_14021da94
                        
                    label_14021d9c6:
                        zmm7 = var_5a8_1
                        zmm6 = zx.o(0)
                        
                        if ((temp0_804 & 4) != 0)
                        label_14021da94:
                            var_408 = _mm_insert_epi32(var_408, zx.d(*zmm2.q), 2)
                            
                            if ((temp0_804 & 8) == 0)
                                zmm2 = var_408
                            else
                                zmm2 =
                                    _mm_insert_epi32(var_408, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                        else
                        label_14021d9db:
                            
                            if ((temp0_804 & 8) != 0)
                                zmm2 =
                                    _mm_insert_epi32(var_408, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                            else
                                zmm2 = var_408
                        
                        var_408 = zmm2
                        zmm2 = _mm_cvtepi32_ps(_mm_blend_epi16(zmm2, zmm6, 0xaa))
                    
                    float temp0_813[0x4] =
                        __mulps_xmmps_memps(_mm_add_ps(temp0_774, zmm9), data_142dd3fa0)
                    
                    if ((temp0_746 & 1) == 0)
                        zmm4 = _mm_add_ps(zmm4, zmm9)
                        
                        if ((temp0_746 & 2) != 0)
                            goto label_14021e008
                        
                        goto label_14021daf4
                    
                    var_518.d = temp0_813[0]
                    zmm4 = _mm_add_ps(zmm4, zmm9)
                    
                    if ((temp0_746 & 2) != 0)
                    label_14021e008:
                        var_518:4.d = __extractps_memd_xmmps_immb(temp0_813, 1)
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm6)
                        zmm4 = __mulps_xmmps_memps(zmm4, data_142dd3fa0)
                        
                        if ((temp0_746 & 4) == 0)
                            goto label_14021db08
                        
                        goto label_14021e027
                    
                label_14021daf4:
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm6)
                    zmm4 = __mulps_xmmps_memps(zmm4, data_142dd3fa0)
                    
                    if ((temp0_746 & 4) == 0)
                    label_14021db08:
                        zmm1 &= not.o(zmm4)
                        
                        if ((temp0_746 & 8) != 0)
                            goto label_14021e03f
                        
                        goto label_14021db18
                    
                label_14021e027:
                    var_518:8.d = __extractps_memd_xmmps_immb(temp0_813, 2)
                    zmm1 &= not.o(zmm4)
                    
                    if ((temp0_746 & 8) != 0)
                    label_14021e03f:
                        var_518:0xc.d = __extractps_memd_xmmps_immb(temp0_813, 3)
                        zmm4 = var_598_3
                        
                        if ((temp0_746 & 1) == 0)
                            goto label_14021db26
                        
                        goto label_14021e05b
                    
                label_14021db18:
                    zmm4 = var_598_3
                    
                    if ((temp0_746 & 1) != 0)
                    label_14021e05b:
                        var_508[0] = zmm1.d
                        zmm2 = _mm_add_ps(zmm2, zmm9)
                        
                        if ((temp0_746 & 2) != 0)
                            var_508[1] = __pextrd_memd_xmmdq_immb(zmm1, 1)
                    else
                    label_14021db26:
                        zmm2 = _mm_add_ps(zmm2, zmm9)
                        
                        if ((temp0_746 & 2) != 0)
                            var_508[1] = __pextrd_memd_xmmdq_immb(zmm1, 1)
                    
                    zmm0 = _mm_cmpeq_epi32(zmm0, zmm6)
                    zmm2 = __mulps_xmmps_memps(zmm2, data_142dd3fa0)
                    arg6 = temp0_103
                    
                    if ((temp0_746 & 4) != 0)
                        var_508[2] = __pextrd_memd_xmmdq_immb(zmm1, 2)
                    
                    float temp0_822[0x4] = _mm_mul_ps(temp0_813, temp0_813)
                    zmm0 &= not.o(zmm2)
                    
                    if ((temp0_746 & 8) != 0)
                        var_508[3] = __pextrd_memd_xmmdq_immb(zmm1, 3)
                    
                    zmm1 = _mm_mul_ps(zmm1, zmm1)
                    zmm2 = _mm_sub_ps(data_142d3f670, temp0_822)
                    
                    if ((temp0_746 & 1) != 0)
                        var_4f8.d = zmm0.d
                    
                    float temp0_826[0x4] = _mm_mul_ps(zmm0, zmm0)
                    zmm2 = _mm_sub_ps(zmm2, zmm1)
                    
                    if ((temp0_746 & 2) != 0)
                        var_4f8:4.d = __pextrd_memd_xmmdq_immb(zmm0, 1)
                    
                    zmm2 = _mm_sub_ps(zmm2, temp0_826)
                    
                    if ((temp0_746 & 4) != 0)
                        var_4f8:8.d = __pextrd_memd_xmmdq_immb(zmm0, 2)
                    
                    zmm1 = _mm_cmpeq_ps(zx.o(0), zmm2, 2)
                    zmm2 = _mm_sqrt_ps(zmm2)
                    
                    if ((temp0_746 & 8) == 0)
                        zmm1 = _mm_and_ps(zmm1, zmm2)
                        
                        if ((temp0_746 & 1) != 0)
                            goto label_14021e08d
                        
                        goto label_14021dbdd
                    
                    var_4f8:0xc.d = __pextrd_memd_xmmdq_immb(zmm0, 3)
                    zmm1 = _mm_and_ps(zmm1, zmm2)
                    
                    if ((temp0_746 & 1) != 0)
                    label_14021e08d:
                        var_4e8[0] = zmm1.d
                        
                        if ((temp0_746 & 2) == 0)
                            goto label_14021dbe6
                        
                        goto label_14021e09f
                    
                label_14021dbdd:
                    
                    if ((temp0_746 & 2) == 0)
                    label_14021dbe6:
                        
                        if ((temp0_746 & 4) != 0)
                            goto label_14021e0b3
                        
                        goto label_14021dbef
                    
                label_14021e09f:
                    var_4e8[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                    
                    if ((temp0_746 & 4) == 0)
                    label_14021dbef:
                        
                        if ((temp0_746 & 8) != 0)
                            var_4e8[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                    else
                    label_14021e0b3:
                        var_4e8[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                        
                        if ((temp0_746 & 8) != 0)
                            var_4e8[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                
                if (_mm_movemask_ps(_mm_slli_epi32(__andps_xmmxud_memxud(zmm4, var_3c8_1), 0x1f))
                        == 0)
                    arg5 = _mm_cmpeq_epi32(arg5, arg5)
                    zmm12 = data_142d3f5b0
                else
                    zmm9 = __pcmpeqd_xmmdq_memdq(var_478, data_142d3f5b0)
                    zmm1 = _mm_slli_epi32(_mm_and_ps(zmm4, zmm9), 0x1f)
                    char temp0_841 = _mm_movemask_ps(zmm1)
                    uint128_t var_458_2 = zmm13
                    
                    if (temp0_841 != 0)
                        int32_t var_588_4[0x4] = zmm9
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        int32_t temp0_843[0x4] = _mm_add_epi64(var_578_1, zmm12)
                        arg6 = arg5
                        zmm3 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm8, var_468_3), arg5)
                        int32_t temp0_846[0x4] = _mm_add_epi64(temp0_843, zmm13)
                        zmm0 = data_1434426c0
                        int32_t temp0_847[0x4] = _mm_add_epi64(temp0_846, zmm0)
                        zmm3 = _mm_add_epi64(zmm3, zmm0)
                        zmm2 = _mm_shuffle_epi32(zmm1, 0x50)
                        float temp0_850[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                        zmm3 = _mm_shuffle_epi32(zmm1, 0xfa)
                        zmm7 = _mm_blendv_ps(zx.o(0), temp0_847, zmm3)
                        int64_t rbp_25 = temp0_850[0].q
                        void* rcx_29 = arg4 + rbp_25
                        int64_t rdi_34 = _mm_extract_epi64(temp0_850, 1)
                        zmm1 = *(arg4 + rbp_25)
                        void* rbp_26 = arg4 + rdi_34
                        arg5 = *(arg4 + rdi_34)
                        int64_t rdi_35 = zmm7[0].q
                        void* rsi_38 = arg4 + rdi_35
                        zmm15 = *(arg4 + rdi_35)
                        int64_t rdi_36 = _mm_extract_epi64(zmm7, 1)
                        zmm13 = *(arg4 + rdi_36)
                        zmm4 = _mm_blendv_ps(zx.o(0), zmm0, zmm2)
                        zmm7 = _mm_blendv_ps(zx.o(0), zmm0, zmm3)
                        zmm5 = *(zmm4[0].q + rcx_29)
                        zmm4 = *(_mm_extract_epi64(zmm4, 1) + rbp_26)
                        zmm8 = *(zmm7[0].q + rsi_38)
                        int32_t (* rbx_17)[0x4] = _mm_extract_epi64(zmm7, 1)
                        void* rdi_37 = arg4 + rdi_36
                        zmm0 = zmm2
                        zmm2 = data_1434426e0
                        zmm7 = _mm_blendv_ps(zx.o(0), zmm2, zmm0)
                        zmm9 = *(rbx_17 + rdi_37)
                        zmm2 = _mm_blendv_ps(zx.o(0), zmm2, zmm3)
                        zmm0 = *(zmm7[0].q + rcx_29)
                        zmm3 = *(_mm_extract_epi64(zmm7, 1) + rbp_26)
                        uint128_t* rbp_27 = _mm_extract_epi64(zmm2, 1)
                        zmm12 = *(zmm2.q + rsi_38)
                        zmm11 = *(rbp_27 + rdi_37)
                        
                        if ((temp0_841 & 1) == 0)
                            if ((temp0_841 & 2) != 0)
                                goto label_14021e0de
                            
                            goto label_14021ddae
                        
                        var_518.d = zmm1.d
                        
                        if ((temp0_841 & 2) != 0)
                        label_14021e0de:
                            var_518:4.d = arg5[0]
                            zmm7 = var_5a8_1
                            
                            if ((temp0_841 & 4) == 0)
                                goto label_14021ddbd
                            
                            goto label_14021e0fa
                        
                    label_14021ddae:
                        zmm7 = var_5a8_1
                        
                        if ((temp0_841 & 4) == 0)
                        label_14021ddbd:
                            
                            if ((temp0_841 & 8) != 0)
                                goto label_14021e10d
                            
                            goto label_14021ddc6
                        
                    label_14021e0fa:
                        var_518:8.d = zmm15[0]
                        
                        if ((temp0_841 & 8) == 0)
                        label_14021ddc6:
                            zmm1 = _mm_insert_ps(zmm1, arg5, 0x10)
                            
                            if ((temp0_841 & 1) != 0)
                                var_508[0] = zmm5[0]
                        else
                        label_14021e10d:
                            var_518:0xc.d = zmm13.d
                            zmm1 = _mm_insert_ps(zmm1, arg5, 0x10)
                            
                            if ((temp0_841 & 1) != 0)
                                var_508[0] = zmm5[0]
                        
                        zmm1 = _mm_insert_ps(zmm1, zmm15, 0x20)
                        float temp0_859[0x4] = _mm_insert_ps(zmm5, zmm4, 0x10)
                        arg5 = arg6
                        
                        if ((temp0_841 & 2) != 0)
                            var_508[1] = zmm4[0]
                        
                        zmm1 = _mm_insert_ps(zmm1, zmm13, 0x30)
                        float temp0_861[0x4] = _mm_insert_ps(temp0_859, zmm8, 0x20)
                        zmm4 = _mm_insert_ps(zmm0, zmm3, 0x10)
                        
                        if ((temp0_841 & 4) != 0)
                            var_508[2] = zmm8[0].d
                        
                        float temp0_863[0x4] = _mm_insert_ps(temp0_861, zmm9, 0x30)
                        zmm4 = _mm_insert_ps(zmm4, zmm12, 0x20)
                        zmm1 = _mm_mul_ps(zmm1, zmm1)
                        arg6 = temp0_103
                        zmm15 = var_4d8_1
                        zmm13 = var_458_2
                        
                        if ((temp0_841 & 8) != 0)
                            var_508[3] = zmm9[0]
                        
                        zmm4 = _mm_insert_ps(zmm4, zmm11, 0x30)
                        zmm2 = _mm_sub_ps(data_142d3f670, zmm1)
                        float temp0_868[0x4] = _mm_mul_ps(temp0_863, temp0_863)
                        
                        if ((temp0_841 & 1) != 0)
                            var_4f8.d = zmm0.d
                        
                        zmm2 = _mm_sub_ps(zmm2, temp0_868)
                        zmm4 = _mm_mul_ps(zmm4, zmm4)
                        zmm9 = var_588_4
                        
                        if ((temp0_841 & 2) != 0)
                            var_4f8:4.d = zmm3[0]
                        
                        zmm2 = _mm_sub_ps(zmm2, zmm4)
                        
                        if ((temp0_841 & 4) != 0)
                            var_4f8:8.d = zmm12[0]
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm2, 1)
                        zmm1 = _mm_sqrt_ps(zmm2)
                        zmm4 = var_598_3
                        
                        if ((temp0_841 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((temp0_841 & 1) != 0)
                                goto label_14021e142
                            
                            goto label_14021deda
                        
                        var_4f8:0xc.d = zmm11.d
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_841 & 1) != 0)
                        label_14021e142:
                            var_4e8[0] = zmm0.d
                            zmm12 = var_4c8_2
                            
                            if ((temp0_841 & 2) == 0)
                                goto label_14021deea
                            
                            goto label_14021e15e
                        
                    label_14021deda:
                        zmm12 = var_4c8_2
                        
                        if ((temp0_841 & 2) == 0)
                        label_14021deea:
                            
                            if ((temp0_841 & 4) != 0)
                                goto label_14021e172
                            
                            goto label_14021def3
                        
                    label_14021e15e:
                        var_4e8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((temp0_841 & 4) == 0)
                        label_14021def3:
                            
                            if ((temp0_841 & 8) != 0)
                                var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_14021e172:
                            var_4e8[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((temp0_841 & 8) != 0)
                                var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                    
                    zmm9 ^= var_3c8_1
                    
                    if (_mm_movemask_ps(_mm_slli_epi32(_mm_and_ps(zmm4, zmm9), 0x1f)) == 0)
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        zmm12 = data_142d3f5b0
                    else
                        zmm8 = _mm_srai_epi32(_mm_slli_epi32(_mm_and_ps(zmm4, zmm7), 0x1f), 0x1f)
                        char temp0_882 = _mm_movemask_ps(zmm8)
                        
                        if (temp0_882 == 0)
                            zmm6 = var_5b8_1
                        else
                            zmm5 = _mm_srai_epi32(_mm_slli_epi32(var_4a8, 0x1f), 0x1f) & zmm7
                            zmm2 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f) & zmm5
                            zmm13 = zx.o(0)
                            uint32_t temp0_887 = _mm_movemask_ps(zmm2)
                            
                            if (temp0_887 == 0)
                                zmm12 = zx.o(0)
                                zmm11 = zx.o(0)
                            else
                                zmm11 = arg5
                                zmm0 = data_1434426c0
                                int32_t temp0_888[0x4] = _mm_add_epi64(var_568_1, zmm0)
                                int32_t temp0_889[0x4] = _mm_add_epi64(var_498_1, zmm0)
                                arg5 = _mm_unpacklo_ps(zmm2, zmm2.q)
                                float temp0_891[0x4] = _mm_blendv_ps(var_498_1, temp0_889, arg5)
                                zmm2 = _mm_unpackhi_ps(zmm2, zmm2)
                                zmm7 = _mm_blendv_ps(var_568_1, temp0_888, zmm2)
                                char rsi_39 = temp0_887.b
                                uint128_t var_2d8
                                
                                if ((rsi_39 & 1) != 0)
                                    zmm0 = _mm_blend_epi16(var_2d8, zx.o(*var_498_1.q), 3)
                                    
                                    if ((rsi_39 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(var_498_1, 1), 0x10)
                                else
                                    zmm0 = var_2d8
                                    
                                    if ((rsi_39 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(var_498_1, 1), 0x10)
                                
                                if ((rsi_39 & 4) == 0)
                                    if ((rsi_39 & 8) != 0)
                                        goto label_14021e446
                                    
                                    goto label_14021e3de
                                
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_568_1.q, 0x20)
                                char r10_2
                                
                                if ((rsi_39 & 8) != 0)
                                label_14021e446:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_568_1, 1), 0x30)
                                    r10_2 = _mm_movemask_ps(zmm5)
                                    zmm12 = zx.o(0)
                                    
                                    if ((r10_2 & 1) != 0)
                                        goto label_14021e3f2
                                    
                                    goto label_14021e45b
                                
                            label_14021e3de:
                                r10_2 = _mm_movemask_ps(zmm5)
                                zmm12 = zx.o(0)
                                
                                if ((r10_2 & 1) == 0)
                                label_14021e45b:
                                    
                                    if ((r10_2 & 2) != 0)
                                    label_14021e461:
                                        zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc)
                                        
                                        if ((r10_2 & 4) != 0)
                                            goto label_14021e405
                                        
                                        goto label_14021e472
                                else
                                label_14021e3f2:
                                    zmm12 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                    
                                    if ((r10_2 & 2) != 0)
                                        goto label_14021e461
                                
                                if ((r10_2 & 4) == 0)
                                label_14021e472:
                                    var_2d8 = zmm0
                                    
                                    if ((r10_2 & 8) != 0)
                                        zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                                else
                                label_14021e405:
                                    zmm12 = _mm_blend_epi16(zmm12, zmm0, 0x30)
                                    var_2d8 = zmm0
                                    
                                    if ((r10_2 & 8) != 0)
                                        zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                                
                                zmm0 = data_1434426c0
                                var_498_1 =
                                    _mm_blendv_ps(temp0_891, _mm_add_epi64(temp0_891, zmm0), arg5)
                                var_568_1 = _mm_blendv_ps(zmm7, _mm_add_epi64(zmm7, zmm0), zmm2)
                                uint128_t var_2e8
                                
                                if ((rsi_39 & 1) != 0)
                                    zmm0 = _mm_blend_ps(var_2e8, *temp0_891[0].q, 1)
                                    zmm4 = var_598_3
                                    arg5 = zmm11
                                    
                                    if ((rsi_39 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(temp0_891, 1), 0x10)
                                else
                                    zmm0 = var_2e8
                                    zmm4 = var_598_3
                                    arg5 = zmm11
                                    
                                    if ((rsi_39 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(temp0_891, 1), 0x10)
                                
                                if ((rsi_39 & 4) == 0)
                                    if ((rsi_39 & 8) != 0)
                                        goto label_14021e587
                                    
                                    goto label_14021e52d
                                
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm7[0].q, 0x20)
                                
                                if ((rsi_39 & 8) != 0)
                                label_14021e587:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm7, 1), 0x30)
                                    zmm7 = var_5a8_1
                                    zmm11 = zx.o(0)
                                    
                                    if ((r10_2 & 1) != 0)
                                        goto label_14021e545
                                    
                                    goto label_14021e5a0
                                
                            label_14021e52d:
                                zmm7 = var_5a8_1
                                zmm11 = zx.o(0)
                                
                                if ((r10_2 & 1) == 0)
                                label_14021e5a0:
                                    
                                    if ((r10_2 & 2) != 0)
                                    label_14021e5a6:
                                        zmm11 = _mm_blend_epi16(zmm11, zmm0, 0xc)
                                        
                                        if ((r10_2 & 4) != 0)
                                            goto label_14021e558
                                        
                                        goto label_14021e5b7
                                else
                                label_14021e545:
                                    zmm11 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                    
                                    if ((r10_2 & 2) != 0)
                                        goto label_14021e5a6
                                
                                if ((r10_2 & 4) == 0)
                                label_14021e5b7:
                                    var_2e8 = zmm0
                                    
                                    if ((r10_2 & 8) != 0)
                                        zmm11 = _mm_blend_epi16(zmm11, zmm0, 0xc0)
                                else
                                label_14021e558:
                                    zmm11 = _mm_blend_epi16(zmm11, zmm0, 0x30)
                                    var_2e8 = zmm0
                                    
                                    if ((r10_2 & 8) != 0)
                                        zmm11 = _mm_blend_epi16(zmm11, zmm0, 0xc0)
                            
                            zmm0 = data_1434422d0
                            zmm5 = _mm_cmpeq_epi32(var_4a8 & zmm0, zmm0) & zmm7
                            zmm3 = _mm_slli_epi32(_mm_and_ps(zmm4, zmm5), 0x1f)
                            char temp0_961 = _mm_movemask_ps(zmm3)
                            int32_t var_418_2[0x4] = arg5
                            
                            if (temp0_961 == 0)
                                arg5 = zx.o(0)
                            else
                                zmm3 = _mm_srai_epi32(zmm3, 0x1f)
                                zmm0 = data_1434426c0
                                int32_t temp0_963[0x4] = _mm_add_epi64(var_568_1, zmm0)
                                int32_t temp0_964[0x4] = _mm_add_epi64(var_498_1, zmm0)
                                arg5 = _mm_shuffle_epi32(zmm3, 0x50)
                                zmm2 = _mm_blendv_ps(var_498_1, temp0_964, arg5)
                                zmm3 = _mm_shuffle_epi32(zmm3, 0xfa)
                                zmm7 = _mm_blendv_ps(var_568_1, temp0_963, zmm3)
                                uint128_t var_2f8
                                
                                if ((temp0_961 & 1) != 0)
                                    zmm0 = _mm_blend_epi16(var_2f8, zx.o(*var_498_1.q), 3)
                                    
                                    if ((temp0_961 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(var_498_1, 1), 0x10)
                                else
                                    zmm0 = var_2f8
                                    
                                    if ((temp0_961 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(var_498_1, 1), 0x10)
                                
                                if ((temp0_961 & 4) == 0)
                                    if ((temp0_961 & 8) != 0)
                                        goto label_14021e71d
                                    
                                    goto label_14021e6be
                                
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_568_1.q, 0x20)
                                char rax_150
                                
                                if ((temp0_961 & 8) != 0)
                                label_14021e71d:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_568_1, 1), 0x30)
                                    rax_150 = _mm_movemask_ps(zmm5)
                                    zmm13 = zx.o(0)
                                    
                                    if ((rax_150 & 1) != 0)
                                        goto label_14021e6cf
                                    
                                    goto label_14021e72f
                                
                            label_14021e6be:
                                rax_150 = _mm_movemask_ps(zmm5)
                                zmm13 = zx.o(0)
                                
                                if ((rax_150 & 1) == 0)
                                label_14021e72f:
                                    
                                    if ((rax_150 & 2) != 0)
                                    label_14021e733:
                                        zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc)
                                        
                                        if ((rax_150 & 4) != 0)
                                            goto label_14021e6de
                                        
                                        goto label_14021e740
                                else
                                label_14021e6cf:
                                    zmm13 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                    
                                    if ((rax_150 & 2) != 0)
                                        goto label_14021e733
                                
                                if ((rax_150 & 4) == 0)
                                label_14021e740:
                                    var_2f8 = zmm0
                                    
                                    if ((rax_150 & 8) != 0)
                                        zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc0)
                                else
                                label_14021e6de:
                                    zmm13 = _mm_blend_epi16(zmm13, zmm0, 0x30)
                                    var_2f8 = zmm0
                                    
                                    if ((rax_150 & 8) != 0)
                                        zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc0)
                                
                                zmm0 = data_1434426c0
                                var_498_1 = _mm_blendv_ps(zmm2, _mm_add_epi64(zmm2, zmm0), arg5)
                                var_568_1 = _mm_blendv_ps(zmm7, _mm_add_epi64(zmm7, zmm0), zmm3)
                                uint128_t var_308
                                
                                if ((temp0_961 & 1) != 0)
                                    zmm1 = _mm_blend_epi16(var_308, zx.o(*zmm2.q), 3)
                                    zmm4 = var_598_3
                                    
                                    if ((temp0_961 & 2) != 0)
                                        zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                            *_mm_extract_epi64(zmm2, 1), 0x10)
                                else
                                    zmm1 = var_308
                                    zmm4 = var_598_3
                                    
                                    if ((temp0_961 & 2) != 0)
                                        zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                            *_mm_extract_epi64(zmm2, 1), 0x10)
                                
                                if ((temp0_961 & 4) == 0)
                                    if ((temp0_961 & 8) != 0)
                                        goto label_14021e847
                                    
                                    goto label_14021e7f4
                                
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, *zmm7[0].q, 0x20)
                                
                                if ((temp0_961 & 8) != 0)
                                label_14021e847:
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm7, 1), 0x30)
                                    zmm7 = var_5a8_1
                                    arg5 = zx.o(0)
                                    
                                    if ((rax_150 & 1) != 0)
                                        goto label_14021e80a
                                    
                                    goto label_14021e85f
                                
                            label_14021e7f4:
                                zmm7 = var_5a8_1
                                arg5 = zx.o(0)
                                
                                if ((rax_150 & 1) == 0)
                                label_14021e85f:
                                    
                                    if ((rax_150 & 2) != 0)
                                    label_14021e863:
                                        arg5 = _mm_blend_epi16(arg5, zmm1, 0xc)
                                        
                                        if ((rax_150 & 4) != 0)
                                            goto label_14021e819
                                        
                                        goto label_14021e870
                                else
                                label_14021e80a:
                                    arg5 = _mm_blend_epi16(zx.o(0), zmm1, 3)
                                    
                                    if ((rax_150 & 2) != 0)
                                        goto label_14021e863
                                
                                if ((rax_150 & 4) == 0)
                                label_14021e870:
                                    var_308 = zmm1
                                    
                                    if ((rax_150 & 8) != 0)
                                        arg5 = _mm_blend_epi16(arg5, zmm1, 0xc0)
                                else
                                label_14021e819:
                                    arg5 = _mm_blend_epi16(arg5, zmm1, 0x30)
                                    var_308 = zmm1
                                    
                                    if ((rax_150 & 8) != 0)
                                        arg5 = _mm_blend_epi16(arg5, zmm1, 0xc0)
                            
                            zmm0 = data_142fc95e0
                            zmm3 = _mm_cmpeq_epi32(var_4a8 & zmm0, zmm0) & zmm7
                            zmm4 = _mm_slli_epi32(_mm_and_ps(zmm4, zmm3), 0x1f)
                            char temp0_994 = _mm_movemask_ps(zmm4)
                            
                            if (temp0_994 == 0)
                                zmm3 = zx.o(0)
                                zmm7 = zx.o(0)
                            else
                                int32_t temp0_995[0x4] = _mm_srai_epi32(zmm4, 0x1f)
                                zmm0 = data_1434426c0
                                zmm5 = _mm_add_epi64(var_568_1, zmm0)
                                zmm2 = _mm_blendv_ps(var_498_1, _mm_add_epi64(var_498_1, zmm0), 
                                    _mm_shuffle_epi32(temp0_995, 0x50))
                                zmm7 = _mm_blendv_ps(var_568_1, zmm5, 
                                    _mm_shuffle_epi32(temp0_995, 0xfa))
                                uint128_t var_318
                                
                                if ((temp0_994 & 1) != 0)
                                    zmm0 = _mm_blend_epi16(var_318, zx.o(*var_498_1.q), 3)
                                    
                                    if ((temp0_994 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(var_498_1, 1), 0x10)
                                else
                                    zmm0 = var_318
                                    
                                    if ((temp0_994 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(var_498_1, 1), 0x10)
                                
                                if ((temp0_994 & 4) == 0)
                                    if ((temp0_994 & 8) != 0)
                                        goto label_14021e9d1
                                    
                                    goto label_14021e959
                                
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_568_1.q, 0x20)
                                char rsi_42
                                
                                if ((temp0_994 & 8) != 0)
                                label_14021e9d1:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_568_1, 1), 0x30)
                                    rsi_42 = _mm_movemask_ps(zmm3)
                                    zmm3 = zx.o(0)
                                    
                                    if ((rsi_42 & 1) != 0)
                                        goto label_14021e968
                                    
                                    goto label_14021e9e4
                                
                            label_14021e959:
                                rsi_42 = _mm_movemask_ps(zmm3)
                                zmm3 = zx.o(0)
                                
                                if ((rsi_42 & 1) != 0)
                                label_14021e968:
                                    zmm3 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                    
                                    if ((rsi_42 & 2) != 0)
                                        goto label_14021e9ea
                                    
                                    goto label_14021e974
                                
                            label_14021e9e4:
                                
                                if ((rsi_42 & 2) == 0)
                                label_14021e974:
                                    
                                    if ((rsi_42 & 4) != 0)
                                    label_14021e97a:
                                        zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                                        
                                        if ((rsi_42 & 8) != 0)
                                            goto label_14021e9fc
                                        
                                        goto label_14021e988
                                else
                                label_14021e9ea:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                                    
                                    if ((rsi_42 & 4) != 0)
                                        goto label_14021e97a
                                
                                if ((rsi_42 & 8) != 0)
                                label_14021e9fc:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                                    var_318 = zmm0
                                    
                                    if ((temp0_994 & 1) == 0)
                                        goto label_14021e992
                                    
                                    goto label_14021ea27
                                
                            label_14021e988:
                                var_318 = zmm0
                                uint128_t var_328
                                
                                if ((temp0_994 & 1) != 0)
                                label_14021ea27:
                                    zmm0 = _mm_blend_epi16(var_328, zx.o(*zmm2.q), 3)
                                    
                                    if ((temp0_994 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(zmm2, 1), 0x10)
                                else
                                label_14021e992:
                                    zmm0 = var_328
                                    
                                    if ((temp0_994 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(zmm2, 1), 0x10)
                                
                                if ((temp0_994 & 4) == 0)
                                    if ((temp0_994 & 8) != 0)
                                        goto label_14021ea90
                                    
                                    goto label_14021ea45
                                
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm7[0].q, 0x20)
                                
                                if ((temp0_994 & 8) != 0)
                                label_14021ea90:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm7, 1), 0x30)
                                    zmm7 = zx.o(0)
                                    
                                    if ((rsi_42 & 1) != 0)
                                        goto label_14021ea51
                                    
                                    goto label_14021ea9f
                                
                            label_14021ea45:
                                zmm7 = zx.o(0)
                                
                                if ((rsi_42 & 1) == 0)
                                label_14021ea9f:
                                    
                                    if ((rsi_42 & 2) != 0)
                                    label_14021eaa5:
                                        zmm7 = _mm_blend_ps(zmm7, zmm0, 2)
                                        
                                        if ((rsi_42 & 4) != 0)
                                            goto label_14021ea63
                                        
                                        goto label_14021eab5
                                else
                                label_14021ea51:
                                    zmm7 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                    
                                    if ((rsi_42 & 2) != 0)
                                        goto label_14021eaa5
                                
                                if ((rsi_42 & 4) == 0)
                                label_14021eab5:
                                    var_328 = zmm0
                                    
                                    if ((rsi_42 & 8) != 0)
                                        zmm7 = _mm_blend_ps(zmm7, zmm0, 8)
                                else
                                label_14021ea63:
                                    zmm7 = _mm_blend_ps(zmm7, zmm0, 4)
                                    var_328 = zmm0
                                    
                                    if ((rsi_42 & 8) != 0)
                                        zmm7 = _mm_blend_ps(zmm7, zmm0, 8)
                            
                            int32_t temp0_1021[0x4] = __paddq_xmmdq_memdq(
                                __paddq_xmmdq_memdq(var_5b8_1, var_468_3), var_418_2)
                            zmm0 = data_1434426c0
                            float temp0_1024[0x4] = _mm_blendv_ps(zx.o(0), 
                                _mm_add_epi64(temp0_1021, zmm0), _mm_shuffle_epi32(zmm8, 0x50))
                            zmm1 = _mm_blendv_ps(zx.o(0), 
                                _mm_add_epi64(
                                    __paddq_xmmdq_memdq(__paddq_xmmdq_memdq(var_578_1, var_4c8_2), 
                                        var_458_2), 
                                    zmm0), 
                                _mm_shuffle_epi32(zmm8, 0xfa))
                            int64_t rax_156 = temp0_1024[0].q
                            int64_t rbp_39 = _mm_extract_epi64(temp0_1024, 1)
                            int64_t rbx_19 = _mm_extract_epi64(zmm1, 1)
                            zmm0 = __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_156)), 
                                        *(arg4 + rbp_39), 1), 
                                    *(arg4 + zmm1.q), 2), 
                                *(arg4 + rbx_19), 3)
                            zmm1 = _mm_srli_epi32(zmm0, 0x15)
                            zmm4 = data_143442440
                            zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm4))
                            zmm5 = data_143442690
                            float temp0_1038[0x4] =
                                _mm_add_ps(zmm12, _mm_mul_ps(zmm11, _mm_div_ps(zmm1, zmm5)))
                            zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(
                                _mm_srli_epi32(zmm0, 0xa) & data_143442480, zmm4))
                            
                            if ((temp0_882 & 1) != 0)
                                var_518.d = temp0_1038[0]
                            
                            zmm1 = _mm_div_ps(zmm1, zmm5)
                            zmm4 = var_598_3
                            
                            if ((temp0_882 & 2) != 0)
                                var_518:4.d = __extractps_memd_xmmps_immb(temp0_1038, 1)
                            
                            zmm0 &= data_143442680
                            arg5 = _mm_mul_ps(arg5, zmm1)
                            zmm6 = var_5b8_1
                            
                            if ((temp0_882 & 4) == 0)
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                                zmm13 = _mm_add_ps(zmm13, arg5)
                                
                                if ((temp0_882 & 8) != 0)
                                    goto label_14021a358
                                
                                goto label_14021ec05
                            
                            var_518:8.d = __extractps_memd_xmmps_immb(temp0_1038, 2)
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            zmm13 = _mm_add_ps(zmm13, arg5)
                            
                            if ((temp0_882 & 8) != 0)
                            label_14021a358:
                                var_518:0xc.d = __extractps_memd_xmmps_immb(temp0_1038, 3)
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                arg5 = var_418_2
                                
                                if ((temp0_882 & 1) == 0)
                                    goto label_14021ec1b
                                
                                goto label_14021a37a
                            
                        label_14021ec05:
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            arg5 = var_418_2
                            
                            if ((temp0_882 & 1) == 0)
                            label_14021ec1b:
                                zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                                
                                if ((temp0_882 & 2) != 0)
                                    goto label_14021a394
                                
                                goto label_14021ec2b
                            
                        label_14021a37a:
                            var_508[0] = zmm13.d
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_882 & 2) != 0)
                            label_14021a394:
                                var_508[1] = __extractps_memd_xmmps_immb(zmm13, 1)
                                zmm7 = _mm_mul_ps(zmm7, zmm0)
                                
                                if ((temp0_882 & 4) == 0)
                                    goto label_14021ec37
                                
                                goto label_14021a3ac
                            
                        label_14021ec2b:
                            zmm7 = _mm_mul_ps(zmm7, zmm0)
                            
                            if ((temp0_882 & 4) != 0)
                            label_14021a3ac:
                                var_508[2] = __extractps_memd_xmmps_immb(zmm13, 2)
                                zmm12 = _mm_mul_ps(temp0_1038, temp0_1038)
                                zmm3 = _mm_add_ps(zmm3, zmm7)
                                
                                if ((temp0_882 & 8) != 0)
                                    var_508[3] = __extractps_memd_xmmps_immb(zmm13, 3)
                            else
                            label_14021ec37:
                                zmm12 = _mm_mul_ps(temp0_1038, temp0_1038)
                                zmm3 = _mm_add_ps(zmm3, zmm7)
                                
                                if ((temp0_882 & 8) != 0)
                                    var_508[3] = __extractps_memd_xmmps_immb(zmm13, 3)
                            
                            zmm1 = _mm_sub_ps(data_142d3f670, zmm12)
                            zmm13 = _mm_mul_ps(zmm13, zmm13)
                            zmm7 = var_5a8_1
                            
                            if ((temp0_882 & 1) != 0)
                                var_4f8.d = zmm3[0]
                            
                            zmm1 = _mm_sub_ps(zmm1, zmm13)
                            zmm0 = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((temp0_882 & 2) != 0)
                                var_4f8:4.d = __extractps_memd_xmmps_immb(zmm3, 1)
                            
                            zmm1 = _mm_sub_ps(zmm1, zmm0)
                            zmm15 = var_4d8_1
                            zmm12 = var_4c8_2
                            zmm13 = var_458_2
                            
                            if ((temp0_882 & 4) != 0)
                                var_4f8:8.d = __extractps_memd_xmmps_immb(zmm3, 2)
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                            zmm1 = _mm_sqrt_ps(zmm1)
                            
                            if ((temp0_882 & 8) == 0)
                                zmm0 = _mm_and_ps(zmm0, zmm1)
                                
                                if ((temp0_882 & 1) != 0)
                                    goto label_14021a3e4
                                
                                goto label_14021ecde
                            
                            var_4f8:0xc.d = __extractps_memd_xmmps_immb(zmm3, 3)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((temp0_882 & 1) != 0)
                            label_14021a3e4:
                                var_4e8[0] = zmm0.d
                                
                                if ((temp0_882 & 2) == 0)
                                    goto label_14021ece7
                                
                                goto label_14021a3f6
                            
                        label_14021ecde:
                            
                            if ((temp0_882 & 2) == 0)
                            label_14021ece7:
                                
                                if ((temp0_882 & 4) != 0)
                                    goto label_14021a40a
                                
                                goto label_14021ecf0
                            
                        label_14021a3f6:
                            var_4e8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_882 & 4) == 0)
                            label_14021ecf0:
                                
                                if ((temp0_882 & 8) != 0)
                                    var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_14021a40a:
                                var_4e8[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                                
                                if ((temp0_882 & 8) != 0)
                                    var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                        
                        zmm9 ^= zmm7
                        
                        if (_mm_movemask_ps(_mm_slli_epi32(_mm_and_ps(zmm4, zmm9), 0x1f)) == 0)
                            arg5 = _mm_cmpeq_epi32(arg5, arg5)
                            zmm12 = data_142d3f5b0
                        else
                            zmm1 = __pcmpeqd_xmmdq_memdq(var_478, data_143442ac0)
                            zmm2 = _mm_slli_epi32(_mm_and_ps(zmm4, zmm1), 0x1f)
                            char temp0_1070 = _mm_movemask_ps(zmm2)
                            
                            if (temp0_1070 != 0)
                                zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                zmm3 = _mm_add_epi64(var_578_1, zmm12)
                                int32_t temp0_1074[0x4] =
                                    _mm_add_epi64(__paddq_xmmdq_memdq(zmm6, var_468_3), arg5)
                                zmm3 = _mm_add_epi64(zmm3, zmm13)
                                zmm0 = data_1434426c0
                                zmm3 = _mm_add_epi64(zmm3, zmm0)
                                float temp0_1079[0x4] = _mm_blendv_ps(zx.o(0), 
                                    _mm_add_epi64(temp0_1074, zmm0), _mm_shuffle_epi32(zmm2, 0x50))
                                zmm2 = _mm_blendv_ps(zx.o(0), zmm3, _mm_shuffle_epi32(zmm2, 0xfa))
                                int64_t rcx_36 = temp0_1079[0].q
                                int64_t rbp_40 = _mm_extract_epi64(temp0_1079, 1)
                                int64_t rdi_39 = _mm_extract_epi64(zmm2, 1)
                                zmm0 = __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(
                                        __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_36)), 
                                            *(arg4 + rbp_40), 1), 
                                        *(arg4 + zmm2.q), 2), 
                                    *(arg4 + rdi_39), 3)
                                zmm2 = _mm_srli_epi32(zmm0, 0x15)
                                zmm3 = _mm_srli_epi32(zmm0, 5) & data_143442600
                                zmm2 = __paddd_xmmdq_memdq(zmm2 & data_143442320, data_143442330)
                                    | (zmm2 & data_143442610) | zmm3
                                
                                if ((temp0_1070 & 1) != 0)
                                    var_518.d = zmm2.d
                                
                                zmm4 = _mm_srli_epi32(zmm0, 0xa)
                                zmm3 = _mm_slli_epi32(zmm0, 6)
                                
                                if ((temp0_1070 & 2) != 0)
                                    var_518:4.d = __pextrd_memd_xmmdq_immb(zmm2, 1)
                                
                                zmm3 &= data_143442600
                                zmm5 = zmm4 & data_143442610
                                zmm4 &= data_143442320
                                
                                if ((temp0_1070 & 4) == 0)
                                    zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442330)
                                    zmm3 |= zmm5
                                    
                                    if ((temp0_1070 & 8) != 0)
                                        goto label_14021a443
                                    
                                    goto label_14021ee78
                                
                                var_518:8.d = __pextrd_memd_xmmdq_immb(zmm2, 2)
                                zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442330)
                                zmm3 |= zmm5
                                
                                if ((temp0_1070 & 8) != 0)
                                label_14021a443:
                                    var_518:0xc.d = __pextrd_memd_xmmdq_immb(zmm2, 3)
                                    zmm3 |= zmm4
                                    
                                    if ((temp0_1070 & 1) == 0)
                                        goto label_14021ee89
                                    
                                    goto label_14021a45b
                                
                            label_14021ee78:
                                zmm3 |= zmm4
                                
                                if ((temp0_1070 & 1) != 0)
                                label_14021a45b:
                                    var_508[0] = zmm3[0]
                                    zmm5 = zmm0 & data_143442620
                                    
                                    if ((temp0_1070 & 2) != 0)
                                        var_508[1] = __pextrd_memd_xmmdq_immb(zmm3, 1)
                                else
                                label_14021ee89:
                                    zmm5 = zmm0 & data_143442620
                                    
                                    if ((temp0_1070 & 2) != 0)
                                        var_508[1] = __pextrd_memd_xmmdq_immb(zmm3, 1)
                                
                                zmm4 = _mm_slli_epi32(zmm0, 0x11)
                                zmm0 &= data_143442640
                                zmm5 = __paddd_xmmdq_memdq(zmm5, data_1434423a0)
                                
                                if ((temp0_1070 & 4) != 0)
                                    var_508[2] = __pextrd_memd_xmmdq_immb(zmm3, 2)
                                
                                zmm4 &= data_143442630
                                zmm2 = _mm_mul_ps(zmm2, zmm2)
                                
                                if ((temp0_1070 & 8) != 0)
                                    var_508[3] = __pextrd_memd_xmmdq_immb(zmm3, 3)
                                
                                zmm4 |= zmm0 | zmm5
                                float temp0_1098[0x4] = _mm_sub_ps(data_142d3f670, zmm2)
                                float temp0_1099[0x4] = _mm_mul_ps(zmm3, zmm3)
                                
                                if ((temp0_1070 & 1) != 0)
                                    var_4f8.d = zmm4[0]
                                
                                float temp0_1100[0x4] = _mm_sub_ps(temp0_1098, temp0_1099)
                                zmm0 = _mm_mul_ps(zmm4, zmm4)
                                
                                if ((temp0_1070 & 2) != 0)
                                    var_4f8:4.d = __pextrd_memd_xmmdq_immb(zmm4, 1)
                                
                                float temp0_1103[0x4] = _mm_sub_ps(temp0_1100, zmm0)
                                
                                if ((temp0_1070 & 4) != 0)
                                    var_4f8:8.d = __pextrd_memd_xmmdq_immb(zmm4, 2)
                                
                                zmm0 = _mm_cmpeq_ps(zx.o(0), temp0_1103, 1)
                                zmm2 = _mm_sqrt_ps(temp0_1103)
                                
                                if ((temp0_1070 & 8) == 0)
                                    zmm0 = _mm_and_ps(zmm0, zmm2)
                                    
                                    if ((temp0_1070 & 1) != 0)
                                        goto label_14021a495
                                    
                                    goto label_14021ef57
                                
                                var_4f8:0xc.d = __pextrd_memd_xmmdq_immb(zmm4, 3)
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                
                                if ((temp0_1070 & 1) != 0)
                                label_14021a495:
                                    var_4e8[0] = zmm0.d
                                    zmm4 = var_598_3
                                    
                                    if ((temp0_1070 & 2) == 0)
                                        goto label_14021ef65
                                    
                                    goto label_14021a4af
                                
                            label_14021ef57:
                                zmm4 = var_598_3
                                
                                if ((temp0_1070 & 2) == 0)
                                label_14021ef65:
                                    
                                    if ((temp0_1070 & 4) != 0)
                                        goto label_14021a4c3
                                    
                                    goto label_14021ef6e
                                
                            label_14021a4af:
                                var_4e8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_1070 & 4) == 0)
                                label_14021ef6e:
                                    
                                    if ((temp0_1070 & 8) != 0)
                                        var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                else
                                label_14021a4c3:
                                    var_4e8[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                                    
                                    if ((temp0_1070 & 8) != 0)
                                        var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                            
                            zmm4 = _mm_and_ps(zmm4, zmm9 ^ zmm1)
                            
                            if (_mm_movemask_ps(_mm_slli_epi32(zmm4, 0x1f)) == 0)
                                arg5 = _mm_cmpeq_epi32(arg5, arg5)
                                zmm12 = data_142d3f5b0
                            else
                                zmm1 = __pcmpeqd_xmmdq_memdq(var_478, data_142fc95e0)
                                zmm2 = _mm_slli_epi32(_mm_and_ps(zmm4, zmm1), 0x1f)
                                char temp0_1115 = _mm_movemask_ps(zmm2)
                                
                                if (temp0_1115 != 0)
                                    zmm7 = zmm4
                                    zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                                    int32_t temp0_1117[0x4] = _mm_add_epi64(var_578_1, zmm12)
                                    zmm6 = _mm_add_epi64(__paddq_xmmdq_memdq(zmm6, var_468_3), arg5)
                                    int32_t temp0_1120[0x4] = _mm_add_epi64(temp0_1117, zmm13)
                                    zmm0 = data_1434426c0
                                    int32_t temp0_1121[0x4] = _mm_add_epi64(temp0_1120, zmm0)
                                    float temp0_1124[0x4] = _mm_blendv_ps(zx.o(0), 
                                        _mm_add_epi64(zmm6, zmm0), _mm_shuffle_epi32(zmm2, 0x50))
                                    zmm2 = _mm_blendv_ps(zx.o(0), temp0_1121, 
                                        _mm_shuffle_epi32(zmm2, 0xfa))
                                    int64_t rcx_38 = temp0_1124[0].q
                                    int64_t rbp_41 = _mm_extract_epi64(temp0_1124, 1)
                                    int64_t rbx_21 = _mm_extract_epi64(zmm2, 1)
                                    zmm2 = __pinsrd_xmmdq_memd_immb(
                                        __pinsrd_xmmdq_memd_immb(
                                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_38)), 
                                                *(arg4 + rbp_41), 1), 
                                            *(arg4 + zmm2.q), 2), 
                                        *(arg4 + rbx_21), 3)
                                    zmm0 = _mm_srli_epi32(zmm2, 0x15)
                                    zmm3 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                                    zmm4 = data_143442440
                                    zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm4))
                                    zmm5 = data_143442690
                                    zmm0 = _mm_div_ps(zmm0, zmm5)
                                    
                                    if ((temp0_1115 & 1) == 0)
                                        zmm3 = _mm_add_epi32(zmm3, zmm4)
                                        
                                        if ((temp0_1115 & 2) != 0)
                                            goto label_14021a6ff
                                        
                                        goto label_14021f094
                                    
                                    var_518.d = zmm0.d
                                    zmm3 = _mm_add_epi32(zmm3, zmm4)
                                    
                                    if ((temp0_1115 & 2) != 0)
                                    label_14021a6ff:
                                        var_518:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                                        zmm3 = _mm_cvtepi32_ps(zmm3)
                                        
                                        if ((temp0_1115 & 4) == 0)
                                            goto label_14021f09f
                                        
                                        goto label_14021a715
                                    
                                label_14021f094:
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_1115 & 4) == 0)
                                    label_14021f09f:
                                        zmm3 = _mm_div_ps(zmm3, zmm5)
                                        
                                        if ((temp0_1115 & 8) != 0)
                                            goto label_14021a72b
                                        
                                        goto label_14021f0aa
                                    
                                label_14021a715:
                                    var_518:8.d = __extractps_memd_xmmps_immb(zmm0, 2)
                                    zmm3 = _mm_div_ps(zmm3, zmm5)
                                    
                                    if ((temp0_1115 & 8) != 0)
                                    label_14021a72b:
                                        var_518:0xc.d = __extractps_memd_xmmps_immb(zmm0, 3)
                                        zmm2 &= data_143442680
                                        
                                        if ((temp0_1115 & 1) == 0)
                                            goto label_14021f0ba
                                        
                                        goto label_14021a746
                                    
                                label_14021f0aa:
                                    zmm2 &= data_143442680
                                    
                                    if ((temp0_1115 & 1) == 0)
                                    label_14021f0ba:
                                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                                        
                                        if ((temp0_1115 & 2) != 0)
                                            goto label_14021a75f
                                        
                                        goto label_14021f0ca
                                    
                                label_14021a746:
                                    var_508[0] = zmm3[0]
                                    zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                                    
                                    if ((temp0_1115 & 2) != 0)
                                    label_14021a75f:
                                        var_508[1] = __extractps_memd_xmmps_immb(zmm3, 1)
                                        zmm2 = _mm_cvtepi32_ps(zmm2)
                                        
                                        if ((temp0_1115 & 4) == 0)
                                            goto label_14021f0d5
                                        
                                        goto label_14021a775
                                    
                                label_14021f0ca:
                                    zmm2 = _mm_cvtepi32_ps(zmm2)
                                    
                                    if ((temp0_1115 & 4) != 0)
                                    label_14021a775:
                                        var_508[2] = __extractps_memd_xmmps_immb(zmm3, 2)
                                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                                        zmm2 = __divps_xmmps_memps(zmm2, data_1434426a0)
                                        
                                        if ((temp0_1115 & 8) != 0)
                                            var_508[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                                    else
                                    label_14021f0d5:
                                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                                        zmm2 = __divps_xmmps_memps(zmm2, data_1434426a0)
                                        
                                        if ((temp0_1115 & 8) != 0)
                                            var_508[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                                    
                                    zmm4 = _mm_sub_ps(data_142d3f670, zmm0)
                                    float temp0_1144[0x4] = _mm_mul_ps(zmm3, zmm3)
                                    
                                    if ((temp0_1115 & 1) != 0)
                                        var_4f8.d = zmm2.d
                                    
                                    zmm4 = _mm_sub_ps(zmm4, temp0_1144)
                                    zmm0 = _mm_mul_ps(zmm2, zmm2)
                                    
                                    if ((temp0_1115 & 2) != 0)
                                        var_4f8:4.d = __extractps_memd_xmmps_immb(zmm2, 1)
                                    
                                    zmm4 = _mm_sub_ps(zmm4, zmm0)
                                    
                                    if ((temp0_1115 & 4) != 0)
                                        var_4f8:8.d = __extractps_memd_xmmps_immb(zmm2, 2)
                                    
                                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                                    float temp0_1151[0x4] = _mm_sqrt_ps(zmm4)
                                    
                                    if ((temp0_1115 & 8) == 0)
                                        zmm0 = _mm_and_ps(zmm0, temp0_1151)
                                        zmm4 = zmm7
                                        
                                        if ((temp0_1115 & 1) != 0)
                                            goto label_14021a7b0
                                        
                                        goto label_14021f152
                                    
                                    var_4f8:0xc.d = __extractps_memd_xmmps_immb(zmm2, 3)
                                    zmm0 = _mm_and_ps(zmm0, temp0_1151)
                                    zmm4 = zmm7
                                    
                                    if ((temp0_1115 & 1) != 0)
                                    label_14021a7b0:
                                        var_4e8[0] = zmm0.d
                                        
                                        if ((temp0_1115 & 2) == 0)
                                            goto label_14021f15a
                                        
                                        goto label_14021a7c1
                                    
                                label_14021f152:
                                    
                                    if ((temp0_1115 & 2) == 0)
                                    label_14021f15a:
                                        
                                        if ((temp0_1115 & 4) != 0)
                                            goto label_14021a7d4
                                        
                                        goto label_14021f162
                                    
                                label_14021a7c1:
                                    var_4e8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                                    
                                    if ((temp0_1115 & 4) == 0)
                                    label_14021f162:
                                        
                                        if ((temp0_1115 & 8) != 0)
                                            var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                    else
                                    label_14021a7d4:
                                        var_4e8[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                                        
                                        if ((temp0_1115 & 8) != 0)
                                            var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                
                                zmm1 = _mm_andnot_ps(zmm1, zmm4)
                                bool cond:78_1 = _mm_movemask_ps(_mm_slli_epi32(zmm1, 0x1f)) == 0
                                arg5 = _mm_cmpeq_epi32(arg5, arg5)
                                zmm12 = data_142d3f5b0
                                
                                if (not(cond:78_1))
                                    zmm0 = __pcmpeqd_xmmdq_memdq(var_478, data_143442ad0)
                                    char temp0_1161 = _mm_movemask_ps(_mm_slli_epi32(
                                        _mm_and_ps(zmm4, zmm0), 0x1f))
                                    
                                    if (temp0_1161 != 0)
                                        if ((temp0_1161 & 1) == 0)
                                            if ((temp0_1161 & 2) != 0)
                                                goto label_14021a7ff
                                            
                                            goto label_14021f1cb
                                        
                                        var_518.d = 0
                                        
                                        if ((temp0_1161 & 2) != 0)
                                        label_14021a7ff:
                                            var_518:4.d = 0
                                            
                                            if ((temp0_1161 & 4) == 0)
                                                goto label_14021f1d3
                                            
                                            goto label_14021a812
                                        
                                    label_14021f1cb:
                                        
                                        if ((temp0_1161 & 4) == 0)
                                        label_14021f1d3:
                                            
                                            if ((temp0_1161 & 8) != 0)
                                                goto label_14021a825
                                            
                                            goto label_14021f1db
                                        
                                    label_14021a812:
                                        var_518:8.d = 0
                                        
                                        if ((temp0_1161 & 8) != 0)
                                        label_14021a825:
                                            var_518:0xc.d = 0
                                            
                                            if ((temp0_1161 & 1) == 0)
                                                goto label_14021f1e3
                                            
                                            goto label_14021a838
                                        
                                    label_14021f1db:
                                        
                                        if ((temp0_1161 & 1) == 0)
                                        label_14021f1e3:
                                            
                                            if ((temp0_1161 & 2) != 0)
                                                goto label_14021a84b
                                            
                                            goto label_14021f1eb
                                        
                                    label_14021a838:
                                        var_508[0] = 0
                                        
                                        if ((temp0_1161 & 2) != 0)
                                        label_14021a84b:
                                            var_508[1] = 0
                                            
                                            if ((temp0_1161 & 4) == 0)
                                                goto label_14021f1f3
                                            
                                            goto label_14021a85e
                                        
                                    label_14021f1eb:
                                        
                                        if ((temp0_1161 & 4) == 0)
                                        label_14021f1f3:
                                            
                                            if ((temp0_1161 & 8) != 0)
                                                goto label_14021a871
                                            
                                            goto label_14021f1fb
                                        
                                    label_14021a85e:
                                        var_508[2] = 0
                                        
                                        if ((temp0_1161 & 8) != 0)
                                        label_14021a871:
                                            var_508[3] = 0
                                            
                                            if ((temp0_1161 & 1) == 0)
                                                goto label_14021f203
                                            
                                            goto label_14021a884
                                        
                                    label_14021f1fb:
                                        
                                        if ((temp0_1161 & 1) == 0)
                                        label_14021f203:
                                            
                                            if ((temp0_1161 & 2) != 0)
                                                goto label_14021a897
                                            
                                            goto label_14021f20b
                                        
                                    label_14021a884:
                                        var_4f8.d = 0
                                        
                                        if ((temp0_1161 & 2) != 0)
                                        label_14021a897:
                                            var_4f8:4.d = 0
                                            
                                            if ((temp0_1161 & 4) == 0)
                                                goto label_14021f213
                                            
                                            goto label_14021a8aa
                                        
                                    label_14021f20b:
                                        
                                        if ((temp0_1161 & 4) == 0)
                                        label_14021f213:
                                            
                                            if ((temp0_1161 & 8) != 0)
                                                goto label_14021a8bd
                                            
                                            goto label_14021f21b
                                        
                                    label_14021a8aa:
                                        var_4f8:8.d = 0
                                        
                                        if ((temp0_1161 & 8) != 0)
                                        label_14021a8bd:
                                            var_4f8:0xc.d = 0
                                            
                                            if ((temp0_1161 & 1) == 0)
                                                goto label_14021f223
                                            
                                            goto label_14021a8d0
                                        
                                    label_14021f21b:
                                        
                                        if ((temp0_1161 & 1) == 0)
                                        label_14021f223:
                                            
                                            if ((temp0_1161 & 2) != 0)
                                                goto label_14021a8e3
                                            
                                            goto label_14021f22b
                                        
                                    label_14021a8d0:
                                        var_4e8[0] = 0x3f800000
                                        
                                        if ((temp0_1161 & 2) != 0)
                                        label_14021a8e3:
                                            var_4e8[1] = 0x3f800000
                                            
                                            if ((temp0_1161 & 4) == 0)
                                                goto label_14021f233
                                            
                                            goto label_14021a8f6
                                        
                                    label_14021f22b:
                                        
                                        if ((temp0_1161 & 4) != 0)
                                        label_14021a8f6:
                                            var_4e8[2] = 0x3f800000
                                            
                                            if ((temp0_1161 & 8) != 0)
                                                var_4e8[3] = 0x3f800000
                                        else
                                        label_14021f233:
                                            
                                            if ((temp0_1161 & 8) != 0)
                                                var_4e8[3] = 0x3f800000
                                    
                                    char temp0_1164 = _mm_movemask_ps(_mm_slli_epi32(
                                        _mm_andnot_ps(zmm0, zmm1), 0x1f))
                                    
                                    if (temp0_1164 != 0)
                                        if ((temp0_1164 & 1) == 0)
                                            if ((temp0_1164 & 2) != 0)
                                                goto label_14021a921
                                            
                                            goto label_14021f268
                                        
                                        var_518.d = 0
                                        
                                        if ((temp0_1164 & 2) != 0)
                                        label_14021a921:
                                            var_518:4.d = 0
                                            
                                            if ((temp0_1164 & 4) == 0)
                                                goto label_14021f270
                                            
                                            goto label_14021a934
                                        
                                    label_14021f268:
                                        
                                        if ((temp0_1164 & 4) == 0)
                                        label_14021f270:
                                            
                                            if ((temp0_1164 & 8) != 0)
                                                goto label_14021a947
                                            
                                            goto label_14021f278
                                        
                                    label_14021a934:
                                        var_518:8.d = 0
                                        
                                        if ((temp0_1164 & 8) != 0)
                                        label_14021a947:
                                            var_518:0xc.d = 0
                                            
                                            if ((temp0_1164 & 1) == 0)
                                                goto label_14021f280
                                            
                                            goto label_14021a95a
                                        
                                    label_14021f278:
                                        
                                        if ((temp0_1164 & 1) == 0)
                                        label_14021f280:
                                            
                                            if ((temp0_1164 & 2) != 0)
                                                goto label_14021a96d
                                            
                                            goto label_14021f288
                                        
                                    label_14021a95a:
                                        var_508[0] = 0
                                        
                                        if ((temp0_1164 & 2) != 0)
                                        label_14021a96d:
                                            var_508[1] = 0
                                            
                                            if ((temp0_1164 & 4) == 0)
                                                goto label_14021f290
                                            
                                            goto label_14021a980
                                        
                                    label_14021f288:
                                        
                                        if ((temp0_1164 & 4) == 0)
                                        label_14021f290:
                                            
                                            if ((temp0_1164 & 8) != 0)
                                                goto label_14021a993
                                            
                                            goto label_14021f298
                                        
                                    label_14021a980:
                                        var_508[2] = 0
                                        
                                        if ((temp0_1164 & 8) != 0)
                                        label_14021a993:
                                            var_508[3] = 0
                                            
                                            if ((temp0_1164 & 1) == 0)
                                                goto label_14021f2a0
                                            
                                            goto label_14021a9a6
                                        
                                    label_14021f298:
                                        
                                        if ((temp0_1164 & 1) == 0)
                                        label_14021f2a0:
                                            
                                            if ((temp0_1164 & 2) != 0)
                                                goto label_14021a9b9
                                            
                                            goto label_14021f2a8
                                        
                                    label_14021a9a6:
                                        var_4f8.d = 0
                                        
                                        if ((temp0_1164 & 2) != 0)
                                        label_14021a9b9:
                                            var_4f8:4.d = 0
                                            
                                            if ((temp0_1164 & 4) == 0)
                                                goto label_14021f2b0
                                            
                                            goto label_14021a9cc
                                        
                                    label_14021f2a8:
                                        
                                        if ((temp0_1164 & 4) == 0)
                                        label_14021f2b0:
                                            
                                            if ((temp0_1164 & 8) != 0)
                                                goto label_14021a9df
                                            
                                            goto label_14021f2b8
                                        
                                    label_14021a9cc:
                                        var_4f8:8.d = 0
                                        
                                        if ((temp0_1164 & 8) != 0)
                                        label_14021a9df:
                                            var_4f8:0xc.d = 0
                                            
                                            if ((temp0_1164 & 1) == 0)
                                                goto label_14021f2c0
                                            
                                            goto label_14021a9f2
                                        
                                    label_14021f2b8:
                                        
                                        if ((temp0_1164 & 1) == 0)
                                        label_14021f2c0:
                                            
                                            if ((temp0_1164 & 2) != 0)
                                                goto label_14021aa05
                                            
                                            goto label_14021f2c8
                                        
                                    label_14021a9f2:
                                        var_4e8[0] = 0x3f800000
                                        
                                        if ((temp0_1164 & 2) != 0)
                                        label_14021aa05:
                                            var_4e8[1] = 0x3f800000
                                            
                                            if ((temp0_1164 & 4) == 0)
                                                goto label_14021f2d0
                                            
                                            goto label_14021aa18
                                        
                                    label_14021f2c8:
                                        
                                        if ((temp0_1164 & 4) != 0)
                                        label_14021aa18:
                                            var_4e8[2] = 0x3f800000
                                            
                                            if ((temp0_1164 & 8) != 0)
                                                var_4e8[3] = 0x3f800000
                                        else
                                        label_14021f2d0:
                                            
                                            if ((temp0_1164 & 8) != 0)
                                                var_4e8[3] = 0x3f800000
                
                zmm11 = var_5d8
                zmm0 = _mm_mul_ps(var_5f8, var_518)
                zmm6 = _mm_add_ps(_mm_mul_ps(var_5e8, var_508), zmm0)
                zmm0 = _mm_add_ps(_mm_mul_ps(zmm11, var_4f8), zmm6)
                zmm0 = _mm_cmpeq_ps(zx.o(0), _mm_add_ps(_mm_mul_ps(var_5c8, var_4e8), zmm0), 2)
                zmm2 = _mm_mul_ps(var_518, zmm15)
                zmm4 = data_142d3f670
                zmm6 = _mm_blendv_ps(data_142d3f7e0, zmm4, zmm0)
                zmm0 = _mm_mul_ps(_mm_sub_ps(zmm4, zmm15), zmm6)
                zmm7 = _mm_add_ps(_mm_mul_ps(var_5f8, zmm0), zmm2)
                
                if ((temp0_740 & 1) != 0)
                    var_5f8[0] = zmm7[0]
                    
                    if ((temp0_740 & 2) != 0)
                    label_14021a233:
                        var_5f8[1] = __extractps_memd_xmmps_immb(zmm7, 1)
                        
                        if ((temp0_740 & 4) == 0)
                            goto label_14021f392
                        
                        goto label_14021a243
                else if ((temp0_740 & 2) != 0)
                    goto label_14021a233
                
                if ((temp0_740 & 4) == 0)
                label_14021f392:
                    zmm5 = _mm_mul_ps(var_508, zmm15)
                    zmm3 = _mm_mul_ps(var_5e8, zmm0)
                    
                    if ((temp0_740 & 8) != 0)
                        goto label_14021a25a
                    
                    goto label_14021f3a1
                
            label_14021a243:
                var_5f8[2] = __extractps_memd_xmmps_immb(zmm7, 2)
                zmm5 = _mm_mul_ps(var_508, zmm15)
                zmm3 = _mm_mul_ps(var_5e8, zmm0)
                
                if ((temp0_740 & 8) != 0)
                label_14021a25a:
                    var_5f8[3] = __extractps_memd_xmmps_immb(zmm7, 3)
                    zmm5 = _mm_add_ps(zmm5, zmm3)
                    
                    if ((temp0_740 & 1) == 0)
                        goto label_14021f3ac
                    
                    goto label_14021a26d
                
            label_14021f3a1:
                zmm5 = _mm_add_ps(zmm5, zmm3)
                
                if ((temp0_740 & 1) != 0)
                label_14021a26d:
                    var_5e8[0] = zmm5[0]
                    
                    if ((temp0_740 & 2) != 0)
                    label_14021a27b:
                        var_5e8[1] = __extractps_memd_xmmps_immb(zmm5, 1)
                        
                        if ((temp0_740 & 4) == 0)
                            goto label_14021f3bc
                        
                        goto label_14021a28b
                else
                label_14021f3ac:
                    
                    if ((temp0_740 & 2) != 0)
                        goto label_14021a27b
                
                if ((temp0_740 & 4) == 0)
                label_14021f3bc:
                    zmm1 = _mm_mul_ps(var_4f8, zmm15)
                    zmm11 = _mm_mul_ps(zmm11, zmm0)
                    
                    if ((temp0_740 & 8) != 0)
                        goto label_14021a2a3
                    
                    goto label_14021f3cc
                
            label_14021a28b:
                var_5e8[2] = __extractps_memd_xmmps_immb(zmm5, 2)
                zmm1 = _mm_mul_ps(var_4f8, zmm15)
                zmm11 = _mm_mul_ps(zmm11, zmm0)
                
                if ((temp0_740 & 8) != 0)
                label_14021a2a3:
                    var_5e8[3] = __extractps_memd_xmmps_immb(zmm5, 3)
                    zmm1 = _mm_add_ps(zmm1, zmm11)
                    
                    if ((temp0_740 & 1) == 0)
                        goto label_14021f3d8
                    
                    goto label_14021a2b7
                
            label_14021f3cc:
                zmm1 = _mm_add_ps(zmm1, zmm11)
                
                if ((temp0_740 & 1) != 0)
                label_14021a2b7:
                    var_5d8[0] = zmm1.d
                    
                    if ((temp0_740 & 2) != 0)
                    label_14021a2c5:
                        var_5d8[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                        
                        if ((temp0_740 & 4) == 0)
                            goto label_14021f3e8
                        
                        goto label_14021a2d5
                else
                label_14021f3d8:
                    
                    if ((temp0_740 & 2) != 0)
                        goto label_14021a2c5
                
                if ((temp0_740 & 4) == 0)
                label_14021f3e8:
                    zmm15 = _mm_mul_ps(zmm15, var_4e8)
                    zmm0 = _mm_mul_ps(zmm0, var_5c8)
                    
                    if ((temp0_740 & 8) != 0)
                        goto label_14021a2ed
                    
                    goto label_14021f3f8
                
            label_14021a2d5:
                var_5d8[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                zmm15 = _mm_mul_ps(zmm15, var_4e8)
                zmm0 = _mm_mul_ps(zmm0, var_5c8)
                
                if ((temp0_740 & 8) != 0)
                label_14021a2ed:
                    var_5d8[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                    zmm15 = _mm_add_ps(zmm15, zmm0)
                    
                    if ((temp0_740 & 1) == 0)
                        goto label_14021f404
                    
                    goto label_14021a301
                
            label_14021f3f8:
                zmm15 = _mm_add_ps(zmm15, zmm0)
                
                if ((temp0_740 & 1) == 0)
                label_14021f404:
                    
                    if ((temp0_740 & 2) != 0)
                        goto label_14021a310
                    
                    goto label_14021f40c
                
            label_14021a301:
                var_5c8[0].d = zmm15[0]
                
                if ((temp0_740 & 2) != 0)
                label_14021a310:
                    var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm15, 1)
                    
                    if ((temp0_740 & 4) == 0)
                        goto label_14021f414
                    
                    goto label_14021a321
                
            label_14021f40c:
                
                if ((temp0_740 & 4) != 0)
                label_14021a321:
                    var_5c8[1].d = __extractps_memd_xmmps_immb(zmm15, 2)
                    
                    if ((temp0_740 & 8) != 0)
                        var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm15, 3)
                else
                label_14021f414:
                    
                    if ((temp0_740 & 8) != 0)
                        var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm15, 3)
            
            zmm6 = var_5f8
            zmm1 = _mm_mul_ps(zmm6, zmm6)
            float temp0_1191[0x4] = _mm_mul_ps(var_5e8, var_5e8)
            zmm7 = _mm_add_ps(_mm_mul_ps(var_5d8, var_5d8), zmm1)
            zmm4 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(var_5c8, var_5c8), temp0_1191), zmm7)
            zmm11 = _mm_cmpeq_ps(data_142d3f5c0, zmm4, 2)
            zmm3 = data_142d3f640
            zmm1 = _mm_mul_ps(zmm4, zmm3)
            zmm2 = _mm_rsqrt_ps(zmm4)
            zmm0 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm3, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm1)), zmm2), zmm2)
            zmm1 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm3, _mm_mul_ps(_mm_mul_ps(zmm0, zmm0), zmm1)), zmm0), zmm0)
            zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm1), zmm11)
            
            if ((temp0_95 & 1) != 0)
                var_5f8[0] = zmm6.d
                
                if ((temp0_95 & 2) != 0)
                label_14021a00e:
                    var_5f8[1] = __extractps_memd_xmmps_immb(zmm6, 1)
                    
                    if ((temp0_95 & 4) == 0)
                        goto label_14021f4c9
                    
                    goto label_14021a01e
            else if ((temp0_95 & 2) != 0)
                goto label_14021a00e
            
            if ((temp0_95 & 4) == 0)
            label_14021f4c9:
                zmm5 = _mm_mul_ps(var_5e8, zmm1)
                
                if ((temp0_95 & 8) != 0)
                    goto label_14021a031
                
                goto label_14021f4d4
            
        label_14021a01e:
            var_5f8[2] = __extractps_memd_xmmps_immb(zmm6, 2)
            zmm5 = _mm_mul_ps(var_5e8, zmm1)
            
            if ((temp0_95 & 8) != 0)
            label_14021a031:
                var_5f8[3] = __extractps_memd_xmmps_immb(zmm6, 3)
                zmm5 = _mm_and_ps(zmm5, zmm11)
                
                if ((temp0_95 & 1) == 0)
                    goto label_14021f4e2
                
                goto label_14021a045
            
        label_14021f4d4:
            zmm5 = _mm_and_ps(zmm5, zmm11)
            
            if ((temp0_95 & 1) != 0)
            label_14021a045:
                var_5e8[0] = zmm5[0]
                zmm6 = var_398_1
                
                if ((temp0_95 & 2) != 0)
                label_14021a05b:
                    var_5e8[1] = __extractps_memd_xmmps_immb(zmm5, 1)
                    
                    if ((temp0_95 & 4) == 0)
                        goto label_14021f4f8
                    
                    goto label_14021a06b
            else
            label_14021f4e2:
                zmm6 = var_398_1
                
                if ((temp0_95 & 2) != 0)
                    goto label_14021a05b
            
            if ((temp0_95 & 4) == 0)
            label_14021f4f8:
                zmm9 = _mm_mul_ps(var_5d8, zmm1)
                
                if ((temp0_95 & 8) != 0)
                    goto label_14021a07f
                
                goto label_14021f504
            
        label_14021a06b:
            var_5e8[2] = __extractps_memd_xmmps_immb(zmm5, 2)
            zmm9 = _mm_mul_ps(var_5d8, zmm1)
            
            if ((temp0_95 & 8) != 0)
            label_14021a07f:
                var_5e8[3] = __extractps_memd_xmmps_immb(zmm5, 3)
                zmm9 = _mm_and_ps(zmm9, zmm11)
                
                if ((temp0_95 & 1) == 0)
                    goto label_14021f510
                
                goto label_14021a093
            
        label_14021f504:
            zmm9 = _mm_and_ps(zmm9, zmm11)
            
            if ((temp0_95 & 1) != 0)
            label_14021a093:
                var_5d8[0] = zmm9[0]
                
                if ((temp0_95 & 2) != 0)
                    var_5d8[1] = __extractps_memd_xmmps_immb(zmm9, 1)
            else
            label_14021f510:
                
                if ((temp0_95 & 2) != 0)
                    var_5d8[1] = __extractps_memd_xmmps_immb(zmm9, 1)
            
            float temp0_1217[0x4] = _mm_cmpeq_ps(data_142d3f5c0, zmm4, 6)
            zmm1 = _mm_mul_ps(zmm1, var_5c8)
            
            if ((temp0_95 & 4) == 0)
                zmm1 = _mm_and_ps(zmm1, zmm11)
                zmm5 = __andps_xmmxud_memxud(temp0_1217, data_142d3f670)
                
                if ((temp0_95 & 8) != 0)
                    goto label_14021a0cc
                
                goto label_14021f547
            
            var_5d8[2] = __extractps_memd_xmmps_immb(zmm9, 2)
            zmm1 = _mm_and_ps(zmm1, zmm11)
            zmm5 = __andps_xmmxud_memxud(temp0_1217, data_142d3f670)
            
            if ((temp0_95 & 8) != 0)
            label_14021a0cc:
                var_5d8[3] = __extractps_memd_xmmps_immb(zmm9, 3)
                zmm1 = _mm_or_ps(zmm1, zmm5)
                zmm11 = var_4b8_1
                
                if ((temp0_95 & 1) == 0)
                    goto label_14021f55d
                
                goto label_14021a0e9
            
        label_14021f547:
            zmm1 = _mm_or_ps(zmm1, zmm5)
            zmm11 = var_4b8_1
            
            if ((temp0_95 & 1) == 0)
            label_14021f55d:
                zmm5 = var_3d8_1
                
                if ((temp0_95 & 2) != 0)
                    goto label_14021a0ff
                
                goto label_14021f56b
            
        label_14021a0e9:
            var_5c8[0].d = zmm1.d
            zmm5 = var_3d8_1
            
            if ((temp0_95 & 2) != 0)
            label_14021a0ff:
                var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm1, 1)
                
                if ((temp0_95 & 4) == 0)
                    goto label_14021f573
                
                goto label_14021a10f
            
        label_14021f56b:
            
            if ((temp0_95 & 4) != 0)
            label_14021a10f:
                var_5c8[1].d = __extractps_memd_xmmps_immb(zmm1, 2)
                
                if ((temp0_95 & 8) != 0)
                    var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm1, 3)
            else
            label_14021f573:
                
                if ((temp0_95 & 8) != 0)
                    var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm1, 3)
        
        uint32_t temp0_1223 = _mm_movemask_ps(zmm11 ^ arg5)
        
        if (temp0_1223 != 0)
            char rax_170 = temp0_1223.b
            
            if ((rax_170 & 1) == 0)
                if ((rax_170 & 2) != 0)
                    goto label_14021a140
                
                goto label_14021f5a1
            
            var_5f8[0] = 0
            
            if ((rax_170 & 2) != 0)
            label_14021a140:
                var_5f8[1] = 0
                
                if ((rax_170 & 4) == 0)
                    goto label_14021f5a9
                
                goto label_14021a150
            
        label_14021f5a1:
            
            if ((rax_170 & 4) == 0)
            label_14021f5a9:
                
                if ((rax_170 & 8) != 0)
                    goto label_14021a160
                
                goto label_14021f5b1
            
        label_14021a150:
            var_5f8[2] = 0
            
            if ((rax_170 & 8) != 0)
            label_14021a160:
                var_5f8[3] = 0
                
                if ((rax_170 & 1) == 0)
                    goto label_14021f5b9
                
                goto label_14021a170
            
        label_14021f5b1:
            
            if ((rax_170 & 1) == 0)
            label_14021f5b9:
                
                if ((rax_170 & 2) != 0)
                    goto label_14021a180
                
                goto label_14021f5c1
            
        label_14021a170:
            var_5e8[0] = 0
            
            if ((rax_170 & 2) != 0)
            label_14021a180:
                var_5e8[1] = 0
                
                if ((rax_170 & 4) == 0)
                    goto label_14021f5c9
                
                goto label_14021a190
            
        label_14021f5c1:
            
            if ((rax_170 & 4) == 0)
            label_14021f5c9:
                
                if ((rax_170 & 8) != 0)
                    goto label_14021a1a0
                
                goto label_14021f5d1
            
        label_14021a190:
            var_5e8[2] = 0
            
            if ((rax_170 & 8) != 0)
            label_14021a1a0:
                var_5e8[3] = 0
                
                if ((rax_170 & 1) == 0)
                    goto label_14021f5d9
                
                goto label_14021a1b0
            
        label_14021f5d1:
            
            if ((rax_170 & 1) == 0)
            label_14021f5d9:
                
                if ((rax_170 & 2) != 0)
                    goto label_14021a1c0
                
                goto label_14021f5e1
            
        label_14021a1b0:
            var_5d8[0] = 0
            
            if ((rax_170 & 2) != 0)
            label_14021a1c0:
                var_5d8[1] = 0
                
                if ((rax_170 & 4) == 0)
                    goto label_14021f5e9
                
                goto label_14021a1d0
            
        label_14021f5e1:
            
            if ((rax_170 & 4) == 0)
            label_14021f5e9:
                
                if ((rax_170 & 8) != 0)
                    goto label_14021a1e0
                
                goto label_14021f5f1
            
        label_14021a1d0:
            var_5d8[2] = 0
            
            if ((rax_170 & 8) != 0)
            label_14021a1e0:
                var_5d8[3] = 0
                
                if ((rax_170 & 1) == 0)
                    goto label_14021f5f9
                
                goto label_14021a1f0
            
        label_14021f5f1:
            
            if ((rax_170 & 1) == 0)
            label_14021f5f9:
                
                if ((rax_170 & 2) != 0)
                    goto label_14021a200
                
                goto label_14021f601
            
        label_14021a1f0:
            var_5c8[0].d = 0x3f800000
            
            if ((rax_170 & 2) != 0)
            label_14021a200:
                var_5c8[0]:4.d = 0x3f800000
                
                if ((rax_170 & 4) == 0)
                    goto label_14021f609
                
                goto label_14021a210
            
        label_14021f601:
            
            if ((rax_170 & 4) != 0)
            label_14021a210:
                var_5c8[1].d = 0x3f800000
                
                if ((rax_170 & 8) != 0)
                    var_5c8[1]:4.d = 0x3f800000
            else
            label_14021f609:
                
                if ((rax_170 & 8) != 0)
                    var_5c8[1]:4.d = 0x3f800000
        
        zmm0 = var_5f8
        zmm1 = var_5e8
        zmm2 = var_5d8
        zmm3 = var_5c8
        int32_t temp0_1224[0x4] = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
        zmm2 = _mm_unpackhi_epi32(zmm2, zmm3[0].q)
        zmm3 = _mm_unpacklo_epi32(zmm0, zmm1.q)
        zmm0 = _mm_unpackhi_epi32(zmm0, zmm1.q)
        zmm1 = _mm_unpacklo_epi64(zmm3, temp0_1224[0].q)
        uint128_t var_168_1 = zmm1
        zmm3 = _mm_unpackhi_epi64(zmm3, temp0_1224[0].q)
        float var_158_1[0x4] = zmm3
        int32_t temp0_1230[0x4] = _mm_unpacklo_epi64(zmm0, zmm2.q)
        int32_t var_148_1[0x4] = temp0_1230
        arg1[sx.q(zmm6.d) * 3] = zmm1
        int32_t temp0_1231 = _mm_extract_epi32(zmm6, 2)
        zmm0 = _mm_unpackhi_epi64(zmm0, zmm2.q)
        arg1[sx.q(temp0_1231) * 3] = zmm3
        arg1[sx.q(zmm5[0]) * 3] = temp0_1230
        arg1[sx.q(_mm_extract_epi32(zmm5, 2)) * 3] = zmm0
        r12 = zx.q(r12.d + 4)
    while (r12.d s< i_5)
    
    i_4 = zx.q(arg10)
    
    if (r12.d s< i_4.d)
        goto label_14021f719
return i_4
