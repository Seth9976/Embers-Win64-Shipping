// 函数: sub_1401fc9c0
// 地址: 0x1401fc9c0
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
    label_140202229:
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
                    label_140202c91:
                        arg6 = var_4b8_2
                        zmm9 = var_588_5
                        zmm11 = var_5b8_2
                    else
                        zmm4 = _mm_add_epi32(zmm7, _mm_cmpeq_epi32(zmm0, zmm0))
                        
                        if (zmm3[0] >= 1f)
                            zmm0 = arg6
                            zmm12 = _mm_blendv_ps(zmm12, zmm4, zmm0)
                            zmm6 = _mm_blendv_ps(zmm6, zmm4, zmm0)
                            goto label_140202c91
                        
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
                                    goto label_140203177
                                
                                goto label_140202cdc
                            
                            zmm6 = zx.o(*zmm3[0].q)
                            zmm2 = _mm_cvtepi32_epi64(zmm2.q)
                            
                            if ((rbp_52 & 2) != 0)
                            label_140203177:
                                zmm6 = _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                zmm2 = _mm_add_epi64(zmm2, zmm9)
                                
                                if ((rbp_52 & 4) == 0)
                                    goto label_140202ceb
                                
                                goto label_140203194
                            
                        label_140202cdc:
                            zmm2 = _mm_add_epi64(zmm2, zmm9)
                            
                            if ((rbp_52 & 4) != 0)
                            label_140203194:
                                zmm6 = _mm_insert_epi32(zmm6, zx.d(*zmm2.q), 2)
                                zmm11 = zmm7
                                
                                if ((rbp_52 & 8) != 0)
                                    zmm6 =
                                        _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                            else
                            label_140202ceb:
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
                                                goto label_140202db4
                                            
                                            goto label_140202e05
                                        
                                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm3[0].q), 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                        
                                        if ((temp0_1448 & 2) != 0)
                                        label_140202db4:
                                            zmm7 = _mm_insert_epi32(zmm7, 
                                                zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                            zmm0 = _mm_add_epi64(zmm0, zmm9)
                                            
                                            if ((temp0_1448 & 4) == 0)
                                                goto label_140202e0f
                                            
                                            goto label_140202dcc
                                        
                                    label_140202e05:
                                        zmm0 = _mm_add_epi64(zmm0, zmm9)
                                        
                                        if ((temp0_1448 & 4) != 0)
                                        label_140202dcc:
                                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                                            
                                            if ((temp0_1448 & 8) != 0)
                                                zmm7 = _mm_insert_epi32(zmm7, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        else
                                        label_140202e0f:
                                            
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
                                            goto label_140202f0a
                                        
                                        goto label_140202f51
                                    
                                    zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm2.q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm3[0].q)
                                    
                                    if ((temp0_1473 & 2) != 0)
                                    label_140202f0a:
                                        zmm5 = _mm_insert_epi32(zmm5, 
                                            zx.d(*_mm_extract_epi64(zmm2, 1)), 1)
                                        zmm0 = _mm_add_epi64(zmm0, zmm9)
                                        
                                        if ((temp0_1473 & 4) == 0)
                                            goto label_140202f5b
                                        
                                        goto label_140202f22
                                    
                                label_140202f51:
                                    zmm0 = _mm_add_epi64(zmm0, zmm9)
                                    
                                    if ((temp0_1473 & 4) != 0)
                                    label_140202f22:
                                        zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm0.q), 2)
                                        
                                        if ((temp0_1473 & 8) != 0)
                                            zmm5 = _mm_insert_epi32(zmm5, 
                                                zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    else
                                    label_140202f5b:
                                        
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
                                    goto label_1402031d3
                                
                                goto label_14020301f
                            
                            zmm4 = zx.o(*zmm1.q)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rbp_52 & 2) != 0)
                            label_1402031d3:
                                zmm4 = _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, zmm7)
                                
                                if ((rbp_52 & 4) == 0)
                                    goto label_14020302d
                                
                                goto label_1402031ef
                            
                        label_14020301f:
                            zmm0 = _mm_add_epi64(zmm0, zmm7)
                            
                            if ((rbp_52 & 4) != 0)
                            label_1402031ef:
                                zmm4 = _mm_insert_epi32(zmm4, zx.d(*zmm0.q), 2)
                                
                                if ((rbp_52 & 8) != 0)
                                    zmm4 =
                                        _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            else
                            label_14020302d:
                                
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
                                    goto label_140203229
                                
                                goto label_1402030bd
                            
                            zmm0 = zx.o(*zmm8[0])
                            zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                            
                            if ((rbp_52 & 2) != 0)
                            label_140203229:
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm8, 1)), 1)
                                zmm7 = _mm_add_epi64(zmm7, zmm1)
                                
                                if ((rbp_52 & 4) == 0)
                                    goto label_1402030cb
                                
                                goto label_140203245
                            
                        label_1402030bd:
                            zmm7 = _mm_add_epi64(zmm7, zmm1)
                            
                            if ((rbp_52 & 4) != 0)
                            label_140203245:
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm7[0].q), 2)
                                
                                if ((rbp_52 & 8) != 0)
                                    zmm0 =
                                        _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm7, 1)), 3)
                            else
                            label_1402030cb:
                                
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
                                    goto label_14020311b
                                
                                goto label_14020296d
                            
                            zmm2 = zx.o(*temp0_1364[0].q)
                            zmm3 = _mm_cvtepi32_epi64(zmm3[0].q)
                            
                            if ((rbp_51 & 2) != 0)
                            label_14020311b:
                                zmm2 = _mm_insert_epi32(zmm2, 
                                    zx.d(*_mm_extract_epi64(temp0_1364, 1)), 1)
                                zmm3 = _mm_add_epi64(zmm3, zmm9)
                                
                                if ((rbp_51 & 4) == 0)
                                    goto label_14020297c
                                
                                goto label_140203138
                            
                        label_14020296d:
                            zmm3 = _mm_add_epi64(zmm3, zmm9)
                            
                            if ((rbp_51 & 4) != 0)
                            label_140203138:
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm3[0].q), 2)
                                zmm11 = zmm7
                                
                                if ((rbp_51 & 8) != 0)
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm3, 1)), 3)
                            else
                            label_14020297c:
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
                                                goto label_140202a43
                                            
                                            goto label_140202a9e
                                        
                                        zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm6.q), 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                        
                                        if ((temp0_1386 & 2) != 0)
                                        label_140202a43:
                                            zmm5 = _mm_insert_epi32(zmm5, 
                                                zx.d(*_mm_extract_epi64(zmm6, 1)), 1)
                                            zmm0 = _mm_add_epi64(zmm0, zmm9)
                                            
                                            if ((temp0_1386 & 4) == 0)
                                                goto label_140202aa8
                                            
                                            goto label_140202a5b
                                        
                                    label_140202a9e:
                                        zmm0 = _mm_add_epi64(zmm0, zmm9)
                                        
                                        if ((temp0_1386 & 4) != 0)
                                        label_140202a5b:
                                            zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm0.q), 2)
                                            
                                            if ((temp0_1386 & 8) != 0)
                                                zmm5 = _mm_insert_epi32(zmm5, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        else
                                        label_140202aa8:
                                            
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
                                                goto label_140202ba0
                                            
                                            goto label_140202bf9
                                        
                                        zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm3[0].q), 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm6.q)
                                        
                                        if ((temp0_1413 & 2) != 0)
                                        label_140202ba0:
                                            zmm5 = _mm_insert_epi32(zmm5, 
                                                zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                                            zmm0 = _mm_add_epi64(zmm0, zmm13)
                                            
                                            if ((temp0_1413 & 4) == 0)
                                                goto label_140202c03
                                            
                                            goto label_140202bb8
                                        
                                    label_140202bf9:
                                        zmm0 = _mm_add_epi64(zmm0, zmm13)
                                        
                                        if ((temp0_1413 & 4) != 0)
                                        label_140202bb8:
                                            zmm5 = _mm_insert_epi32(zmm5, zx.d(*zmm0.q), 2)
                                            
                                            if ((temp0_1413 & 8) != 0)
                                                zmm5 = _mm_insert_epi32(zmm5, 
                                                    zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                        else
                                        label_140202c03:
                                            
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
                                    goto label_1402072e2
                                
                                goto label_1402032d5
                            
                            zmm4 = _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                            zmm0 = _mm_add_epi64(zmm0, zmm13)
                            
                            if ((rbp_51 & 4) == 0)
                            label_1402032d5:
                                
                                if ((rbp_51 & 8) != 0)
                                    zmm4 =
                                        _mm_insert_epi32(zmm4, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            else
                            label_1402072e2:
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
                                    goto label_14020731c
                                
                                goto label_14020336d
                            
                            zmm1 = zx.o(*zmm8[0])
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rbp_51 & 2) != 0)
                            label_14020731c:
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm8, 1)), 1)
                                zmm13 = _mm_add_epi64(zmm13, zmm0)
                                
                                if ((rbp_51 & 4) == 0)
                                    goto label_14020337c
                                
                                goto label_140207339
                            
                        label_14020336d:
                            zmm13 = _mm_add_epi64(zmm13, zmm0)
                            
                            if ((rbp_51 & 4) != 0)
                            label_140207339:
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm13.q), 2)
                                zmm0 = zx.o(0)
                                
                                if ((rbp_51 & 8) != 0)
                                    zmm1 = _mm_insert_epi32(zmm1, 
                                        zx.d(*_mm_extract_epi64(zmm13, 1)), 3)
                            else
                            label_14020337c:
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
                            goto label_140203db8
                        
                        goto label_140203637
                    
                    zmm0 = zx.o(*zmm11.q)
                    
                    if ((temp0_1592 & 2) != 0)
                    label_140203db8:
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm11, 1)), 1)
                        zmm11 = var_5b8_2
                        
                        if ((temp0_1592 & 4) == 0)
                            goto label_140203646
                        
                        goto label_140203dd7
                    
                label_140203637:
                    zmm11 = var_5b8_2
                    
                    if ((temp0_1592 & 4) != 0)
                    label_140203dd7:
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm8[0]), 2)
                        
                        if ((temp0_1592 & 8) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                    else
                    label_140203646:
                        
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
                            goto label_140203e08
                        
                        goto label_1402036cd
                    
                    zmm6 = zx.o(*zmm5[0].q)
                    
                    if ((temp0_1605 & 2) != 0)
                    label_140203e08:
                        zmm6 = _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm5, 1)), 1)
                        
                        if ((temp0_1605 & 4) == 0)
                            goto label_1402036d5
                        
                        goto label_140203e1e
                    
                label_1402036cd:
                    
                    if ((temp0_1605 & 4) != 0)
                    label_140203e1e:
                        zmm6 = _mm_insert_epi32(zmm6, zx.d(*zmm3[0].q), 2)
                        
                        if ((temp0_1605 & 8) != 0)
                            zmm6 = _mm_insert_epi32(zmm6, zx.d(*_mm_extract_epi64(zmm3, 1)), 3)
                    else
                    label_1402036d5:
                        
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
                        goto label_140203cac
                    
                    goto label_14020372b
                
                var_638.d = zmm4[0]
                zmm3 = zx.o(0)
                zmm2 = _mm_add_ps(zmm2, zmm7)
                
                if ((temp0_1561 & 2) != 0)
                label_140203cac:
                    var_638:4.d = __extractps_memd_xmmps_immb(zmm4, 1)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm3)
                    zmm2 = _mm_mul_ps(zmm2, zmm6)
                    
                    if ((temp0_1561 & 4) == 0)
                        goto label_14020373c
                    
                    goto label_140203cc5
                
            label_14020372b:
                zmm1 = _mm_cmpeq_epi32(zmm1, zmm3)
                zmm2 = _mm_mul_ps(zmm2, zmm6)
                
                if ((temp0_1561 & 4) != 0)
                label_140203cc5:
                    var_638:8.d = __extractps_memd_xmmps_immb(zmm4, 2)
                    zmm1 &= not.o(zmm2)
                    
                    if ((temp0_1561 & 8) != 0)
                    label_140203cdb:
                        var_638:0xc.d = __extractps_memd_xmmps_immb(zmm4, 3)
                        
                        if ((temp0_1561 & 1) == 0)
                            goto label_140203754
                        
                        goto label_140203ced
                else
                label_14020373c:
                    zmm1 &= not.o(zmm2)
                    
                    if ((temp0_1561 & 8) != 0)
                        goto label_140203cdb
                
                if ((temp0_1561 & 1) == 0)
                label_140203754:
                    zmm5 = _mm_add_ps(zmm5, zmm7)
                    
                    if ((temp0_1561 & 2) != 0)
                        goto label_140203d00
                    
                    goto label_140203761
                
            label_140203ced:
                var_628[0] = zmm1.d
                zmm5 = _mm_add_ps(zmm5, zmm7)
                
                if ((temp0_1561 & 2) == 0)
                label_140203761:
                    zmm0 = _mm_cmpeq_epi32(zmm0, zmm3)
                    zmm5 = _mm_mul_ps(zmm5, zmm6)
                    
                    if ((temp0_1561 & 4) != 0)
                        var_628[2] = __pextrd_memd_xmmdq_immb(zmm1, 2)
                else
                label_140203d00:
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
                        goto label_140203d33
                    
                    goto label_1402037d7
                
                var_618[1] = __pextrd_memd_xmmdq_immb(zmm0, 1)
                zmm2 = _mm_sub_ps(zmm2, zmm4)
                
                if ((temp0_1561 & 4) != 0)
                label_140203d33:
                    var_618[2] = __pextrd_memd_xmmdq_immb(zmm0, 2)
                    zmm3 = _mm_cmpeq_ps(zmm3, zmm2, 2)
                    zmm1 = _mm_sqrt_ps(zmm2)
                    
                    if ((temp0_1561 & 8) == 0)
                        goto label_1402037e8
                    
                    goto label_140203d4c
                
            label_1402037d7:
                zmm3 = _mm_cmpeq_ps(zmm3, zmm2, 2)
                zmm1 = _mm_sqrt_ps(zmm2)
                
                if ((temp0_1561 & 8) == 0)
                label_1402037e8:
                    zmm3 = _mm_and_ps(zmm3, zmm1)
                    
                    if ((temp0_1561 & 1) != 0)
                        goto label_140203d61
                    
                    goto label_1402037f5
                
            label_140203d4c:
                var_618[3] = __pextrd_memd_xmmdq_immb(zmm0, 3)
                zmm3 = _mm_and_ps(zmm3, zmm1)
                
                if ((temp0_1561 & 1) != 0)
                label_140203d61:
                    var_608[0].d = zmm3[0]
                    
                    if ((temp0_1561 & 2) == 0)
                        goto label_1402037ff
                    
                    goto label_140203d71
                
            label_1402037f5:
                
                if ((temp0_1561 & 2) == 0)
                label_1402037ff:
                    
                    if ((temp0_1561 & 4) != 0)
                        goto label_140203d83
                    
                    goto label_140203809
                
            label_140203d71:
                var_608[0]:4.d = __extractps_memd_xmmps_immb(zmm3, 1)
                
                if ((temp0_1561 & 4) == 0)
                label_140203809:
                    
                    if ((temp0_1561 & 8) != 0)
                        var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm3, 3)
                else
                label_140203d83:
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
                            goto label_140203e40
                        
                        goto label_1402039f6
                    
                    var_638.d = zmm2.d
                    
                    if ((temp0_1634 & 2) != 0)
                    label_140203e40:
                        var_638:4.d = zmm8[0].d
                        
                        if ((temp0_1634 & 4) == 0)
                            goto label_140203a00
                        
                        goto label_140203e51
                    
                label_1402039f6:
                    
                    if ((temp0_1634 & 4) == 0)
                    label_140203a00:
                        
                        if ((temp0_1634 & 8) != 0)
                            goto label_140203e62
                        
                        goto label_140203a0a
                    
                label_140203e51:
                    var_638:8.d = zmm9[0]
                    
                    if ((temp0_1634 & 8) == 0)
                    label_140203a0a:
                        zmm2 = _mm_insert_ps(zmm2, zmm8, 0x10)
                        
                        if ((temp0_1634 & 1) != 0)
                            var_628[0] = zmm5[0]
                    else
                    label_140203e62:
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
                            goto label_140203e9e
                        
                        goto label_140203b29
                    
                    var_618[3] = zmm12[0]
                    arg6 = _mm_and_ps(temp0_1665, zmm0)
                    zmm13 = var_458_3
                    
                    if ((temp0_1634 & 1) != 0)
                    label_140203e9e:
                        var_608[0].d = arg6[0]
                        zmm12 = var_3b8_2
                        
                        if ((temp0_1634 & 2) == 0)
                            goto label_140203b39
                        
                        goto label_140203eb9
                    
                label_140203b29:
                    zmm12 = var_3b8_2
                    
                    if ((temp0_1634 & 2) == 0)
                    label_140203b39:
                        
                        if ((temp0_1634 & 4) != 0)
                            goto label_140203ecc
                        
                        goto label_140203b43
                    
                label_140203eb9:
                    var_608[0]:4.d = __extractps_memd_xmmps_immb(arg6, 1)
                    
                    if ((temp0_1634 & 4) == 0)
                    label_140203b43:
                        
                        if ((temp0_1634 & 8) != 0)
                            var_608[1]:4.d = __extractps_memd_xmmps_immb(arg6, 3)
                    else
                    label_140203ecc:
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
                                    goto label_140203efe
                                
                                goto label_140203c43
                            
                            zmm0 = *zmm2.q
                            
                            if ((rbp_59 & 2) != 0)
                            label_140203efe:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm2, 1), 0x10)
                                
                                if ((rbp_59 & 4) == 0)
                                    goto label_140203c4d
                                
                                goto label_140203f1c
                            
                        label_140203c43:
                            
                            if ((rbp_59 & 4) == 0)
                            label_140203c4d:
                                
                                if ((rbp_59 & 8) != 0)
                                    goto label_140203f3c
                                
                                goto label_140203c57
                            
                        label_140203f1c:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_2.q, 0x20)
                            char rbx_36
                            
                            if ((rbp_59 & 8) != 0)
                            label_140203f3c:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_5a8_2, 1), 0x30)
                                rbx_36 = _mm_movemask_ps(zmm5)
                                arg5 = zx.o(0)
                                
                                if ((rbx_36 & 1) != 0)
                                    goto label_140203c68
                                
                                goto label_140203f53
                            
                        label_140203c57:
                            rbx_36 = _mm_movemask_ps(zmm5)
                            arg5 = zx.o(0)
                            
                            if ((rbx_36 & 1) != 0)
                            label_140203c68:
                                arg5 = _mm_blend_epi16(arg5, zmm0, 3)
                                
                                if ((rbx_36 & 2) != 0)
                                    goto label_140203f5c
                                
                                goto label_140203c78
                            
                        label_140203f53:
                            
                            if ((rbx_36 & 2) != 0)
                            label_140203f5c:
                                arg5 = _mm_blend_epi16(arg5, zmm0, 0xc)
                                
                                if ((rbx_36 & 4) != 0)
                                    goto label_140203c81
                                
                                goto label_140203f6c
                            
                        label_140203c78:
                            
                            if ((rbx_36 & 4) == 0)
                            label_140203f6c:
                                
                                if ((rbx_36 & 8) != 0)
                                    arg5 = _mm_blend_epi16(arg5, zmm0, 0xc0)
                            else
                            label_140203c81:
                                arg5 = _mm_blend_epi16(arg5, zmm0, 0x30)
                                
                                if ((rbx_36 & 8) != 0)
                                    arg5 = _mm_blend_epi16(arg5, zmm0, 0xc0)
                            
                            zmm5 = _mm_add_epi64(zmm1, zmm4)
                            arg6 = _mm_blendv_ps(zmm9, _mm_add_epi64(zmm4, zmm9), zmm8)
                            zmm0 = zmm7
                            zmm8 = _mm_blendv_ps(zmm1, zmm5, zmm0)
                            
                            if ((rbp_59 & 1) == 0)
                                if ((rbp_59 & 2) != 0)
                                    goto label_140203ff6
                                
                                goto label_140203fab
                            
                            zmm0 = *zmm9[0].q
                            
                            if ((rbp_59 & 2) != 0)
                            label_140203ff6:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm9, 1), 0x10)
                                
                                if ((rbp_59 & 4) == 0)
                                    goto label_140203fb1
                                
                                goto label_140204007
                            
                        label_140203fab:
                            
                            if ((rbp_59 & 4) == 0)
                            label_140203fb1:
                                
                                if ((rbp_59 & 8) != 0)
                                    goto label_14020401a
                                
                                goto label_140203fb7
                            
                        label_140204007:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm1.q, 0x20)
                            
                            if ((rbp_59 & 8) != 0)
                            label_14020401a:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm1, 1), 0x30)
                                zmm13 = zx.o(0)
                                
                                if ((rbx_36 & 1) != 0)
                                    goto label_140203fc1
                                
                                goto label_14020402a
                            
                        label_140203fb7:
                            zmm13 = zx.o(0)
                            
                            if ((rbx_36 & 1) != 0)
                            label_140203fc1:
                                zmm13 = _mm_blend_epi16(zmm13, zmm0, 3)
                                
                                if ((rbx_36 & 2) != 0)
                                    goto label_14020402f
                                
                                goto label_140203fcd
                            
                        label_14020402a:
                            
                            if ((rbx_36 & 2) != 0)
                            label_14020402f:
                                zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc)
                                
                                if ((rbx_36 & 4) != 0)
                                    goto label_140203fd2
                                
                                goto label_14020403b
                            
                        label_140203fcd:
                            
                            if ((rbx_36 & 4) == 0)
                            label_14020403b:
                                
                                if ((rbx_36 & 8) != 0)
                                    zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc0)
                            else
                            label_140203fd2:
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
                                    goto label_14020412b
                                
                                goto label_1402040d4
                            
                            zmm0 = *arg6[0].q
                            
                            if ((temp0_1729 & 2) != 0)
                            label_14020412b:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg6, 1), 0x10)
                                
                                if ((temp0_1729 & 4) == 0)
                                    goto label_1402040da
                                
                                goto label_14020413c
                            
                        label_1402040d4:
                            
                            if ((temp0_1729 & 4) == 0)
                            label_1402040da:
                                
                                if ((temp0_1729 & 8) != 0)
                                    goto label_14020414f
                                
                                goto label_1402040e0
                            
                        label_14020413c:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm8[0], 0x20)
                            char rbx_49
                            
                            if ((temp0_1729 & 8) != 0)
                            label_14020414f:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm8, 1), 0x30)
                                rbx_49 = _mm_movemask_ps(zmm5)
                                zmm15 = zx.o(0)
                                
                                if ((rbx_49 & 1) != 0)
                                    goto label_1402040ed
                                
                                goto label_140204162
                            
                        label_1402040e0:
                            rbx_49 = _mm_movemask_ps(zmm5)
                            zmm15 = zx.o(0)
                            
                            if ((rbx_49 & 1) != 0)
                            label_1402040ed:
                                zmm15 = _mm_blend_epi16(zmm15, zmm0, 3)
                                
                                if ((rbx_49 & 2) != 0)
                                    goto label_140204167
                                
                                goto label_1402040f9
                            
                        label_140204162:
                            
                            if ((rbx_49 & 2) != 0)
                            label_140204167:
                                zmm15 = _mm_blend_epi16(zmm15, zmm0, 0xc)
                                
                                if ((rbx_49 & 4) != 0)
                                    goto label_1402040fe
                                
                                goto label_140204173
                            
                        label_1402040f9:
                            
                            if ((rbx_49 & 4) == 0)
                            label_140204173:
                                
                                if ((rbx_49 & 8) != 0)
                                    zmm15 = _mm_blend_epi16(zmm15, zmm0, 0xc0)
                            else
                            label_1402040fe:
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
                                    goto label_14020420d
                                
                                goto label_1402041bc
                            
                            zmm0 = *zmm7[0].q
                            zmm11 = var_5b8_2
                            
                            if ((temp0_1729 & 2) != 0)
                            label_14020420d:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm7, 1), 0x10)
                                
                                if ((temp0_1729 & 4) == 0)
                                    goto label_1402041c2
                                
                                goto label_14020421e
                            
                        label_1402041bc:
                            
                            if ((temp0_1729 & 4) == 0)
                            label_1402041c2:
                                
                                if ((temp0_1729 & 8) != 0)
                                    goto label_140204231
                                
                                goto label_1402041c8
                            
                        label_14020421e:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm1.q, 0x20)
                            
                            if ((temp0_1729 & 8) != 0)
                            label_140204231:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm1, 1), 0x30)
                                zmm3 = zx.o(0)
                                
                                if ((rbx_49 & 1) != 0)
                                    goto label_1402041d1
                                
                                goto label_140204240
                            
                        label_1402041c8:
                            zmm3 = zx.o(0)
                            
                            if ((rbx_49 & 1) != 0)
                            label_1402041d1:
                                zmm3 = _mm_blend_epi16(zmm3, zmm0, 3)
                                
                                if ((rbx_49 & 2) != 0)
                                    goto label_140204245
                                
                                goto label_1402041dc
                            
                        label_140204240:
                            
                            if ((rbx_49 & 2) != 0)
                            label_140204245:
                                zmm3 = _mm_blend_epi16(zmm3, zmm0, 0xc)
                                
                                if ((rbx_49 & 4) != 0)
                                    goto label_1402041e1
                                
                                goto label_140204250
                            
                        label_1402041dc:
                            
                            if ((rbx_49 & 4) == 0)
                            label_140204250:
                                
                                if ((rbx_49 & 8) != 0)
                                    zmm3 = _mm_blend_epi16(zmm3, zmm0, 0xc0)
                            else
                            label_1402041e1:
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
                                    goto label_1402043ad
                                
                                goto label_1402042eb
                            
                            zmm0 = *arg6[0].q
                            
                            if ((temp0_1759 & 2) != 0)
                            label_1402043ad:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(arg6, 1), 0x10)
                                
                                if ((temp0_1759 & 4) == 0)
                                    goto label_1402042f3
                                
                                goto label_1402043c0
                            
                        label_1402042eb:
                            
                            if ((temp0_1759 & 4) == 0)
                            label_1402042f3:
                                
                                if ((temp0_1759 & 8) != 0)
                                    goto label_1402043d5
                                
                                goto label_1402042fb
                            
                        label_1402043c0:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm8[0], 0x20)
                            char rbp_61
                            
                            if ((temp0_1759 & 8) != 0)
                            label_1402043d5:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm8, 1), 0x30)
                                rbp_61 = _mm_movemask_ps(zmm5)
                                zmm9 = zx.o(0)
                                
                                if ((rbp_61 & 1) != 0)
                                    goto label_14020430d
                                
                                goto label_1402043ed
                            
                        label_1402042fb:
                            rbp_61 = _mm_movemask_ps(zmm5)
                            zmm9 = zx.o(0)
                            
                            if ((rbp_61 & 1) != 0)
                            label_14020430d:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 3)
                                
                                if ((rbp_61 & 2) != 0)
                                    goto label_1402043f7
                                
                                goto label_14020431e
                            
                        label_1402043ed:
                            
                            if ((rbp_61 & 2) != 0)
                            label_1402043f7:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc)
                                
                                if ((rbp_61 & 4) != 0)
                                    goto label_140204328
                                
                                goto label_140204408
                            
                        label_14020431e:
                            
                            if ((rbp_61 & 4) != 0)
                            label_140204328:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0x30)
                                
                                if ((rbp_61 & 8) != 0)
                                    goto label_140204412
                                
                                goto label_140204339
                            
                        label_140204408:
                            
                            if ((rbp_61 & 8) != 0)
                            label_140204412:
                                zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                                
                                if ((temp0_1759 & 1) == 0)
                                    goto label_140204341
                                
                                goto label_140204426
                            
                        label_140204339:
                            
                            if ((temp0_1759 & 1) == 0)
                            label_140204341:
                                
                                if ((temp0_1759 & 2) != 0)
                                    goto label_140204439
                                
                                goto label_140204349
                            
                        label_140204426:
                            zmm0 = *zmm7[0].q
                            
                            if ((temp0_1759 & 2) != 0)
                            label_140204439:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm7, 1), 0x10)
                                
                                if ((temp0_1759 & 4) == 0)
                                    goto label_140204351
                                
                                goto label_14020444c
                            
                        label_140204349:
                            
                            if ((temp0_1759 & 4) == 0)
                            label_140204351:
                                
                                if ((temp0_1759 & 8) != 0)
                                    goto label_140204461
                                
                                goto label_140204359
                            
                        label_14020444c:
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm1.q, 0x20)
                            
                            if ((temp0_1759 & 8) != 0)
                            label_140204461:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm1, 1), 0x30)
                                zmm1 = zx.o(0)
                                
                                if ((rbp_61 & 1) != 0)
                                    goto label_140204366
                                
                                goto label_140204474
                            
                        label_140204359:
                            zmm1 = zx.o(0)
                            
                            if ((rbp_61 & 1) != 0)
                            label_140204366:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 1)
                                
                                if ((rbp_61 & 2) != 0)
                                    goto label_14020447e
                                
                                goto label_140204376
                            
                        label_140204474:
                            
                            if ((rbp_61 & 2) != 0)
                            label_14020447e:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                                
                                if ((rbp_61 & 4) != 0)
                                    goto label_140204380
                                
                                goto label_14020448e
                            
                        label_140204376:
                            
                            if ((rbp_61 & 4) == 0)
                            label_14020448e:
                                
                                if ((rbp_61 & 8) != 0)
                                    zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            else
                            label_140204380:
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
                                goto label_140205646
                            
                            goto label_1402045ef
                        
                        var_638:8.d = __extractps_memd_xmmps_immb(arg5, 2)
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                        zmm15 = _mm_add_ps(zmm15, temp0_1807)
                        
                        if ((temp0_1301 & 8) != 0)
                        label_140205646:
                            var_638:0xc.d = __extractps_memd_xmmps_immb(arg5, 3)
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            
                            if ((temp0_1301 & 1) == 0)
                                goto label_1402045fb
                            
                            goto label_14020565b
                        
                    label_1402045ef:
                        zmm0 = _mm_cvtepi32_ps(zmm0)
                        
                        if ((temp0_1301 & 1) == 0)
                        label_1402045fb:
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_1301 & 2) != 0)
                                goto label_140205672
                            
                            goto label_14020460b
                        
                    label_14020565b:
                        var_628[0] = zmm15[0]
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                        
                        if ((temp0_1301 & 2) == 0)
                        label_14020460b:
                            zmm1 = _mm_mul_ps(zmm1, zmm0)
                            
                            if ((temp0_1301 & 4) != 0)
                                var_628[2] = __extractps_memd_xmmps_immb(zmm15, 2)
                        else
                        label_140205672:
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
                                goto label_1402056ab
                            
                            goto label_140204682
                        
                        var_618[1] = __extractps_memd_xmmps_immb(zmm9, 1)
                        zmm0 = _mm_sub_ps(zmm0, zmm1)
                        zmm15 = var_3d8_2
                        
                        if ((temp0_1301 & 4) != 0)
                        label_1402056ab:
                            var_618[2] = __extractps_memd_xmmps_immb(zmm9, 2)
                            zmm2 = _mm_cmpeq_ps(zmm2, zmm0, 1)
                            zmm0 = _mm_sqrt_ps(zmm0)
                            
                            if ((temp0_1301 & 8) == 0)
                                goto label_140204692
                            
                            goto label_1402056c4
                        
                    label_140204682:
                        zmm2 = _mm_cmpeq_ps(zmm2, zmm0, 1)
                        zmm0 = _mm_sqrt_ps(zmm0)
                        
                        if ((temp0_1301 & 8) == 0)
                        label_140204692:
                            zmm2 = _mm_and_ps(zmm2, zmm0)
                            
                            if ((temp0_1301 & 1) != 0)
                                goto label_1402056d9
                            
                            goto label_1402046a1
                        
                    label_1402056c4:
                        var_618[3] = __extractps_memd_xmmps_immb(zmm9, 3)
                        zmm2 = _mm_and_ps(zmm2, zmm0)
                        
                        if ((temp0_1301 & 1) != 0)
                        label_1402056d9:
                            var_608[0].d = zmm2.d
                            zmm9 = var_588_5
                            zmm11 = var_5b8_2
                            
                            if ((temp0_1301 & 2) == 0)
                                goto label_1402046ba
                            
                            goto label_1402056fb
                        
                    label_1402046a1:
                        zmm9 = var_588_5
                        zmm11 = var_5b8_2
                        
                        if ((temp0_1301 & 2) == 0)
                        label_1402046ba:
                            
                            if ((temp0_1301 & 4) != 0)
                                goto label_14020570c
                            
                            goto label_1402046c3
                        
                    label_1402056fb:
                        var_608[0]:4.d = __extractps_memd_xmmps_immb(zmm2, 1)
                        
                        if ((temp0_1301 & 4) == 0)
                        label_1402046c3:
                            
                            if ((temp0_1301 & 8) != 0)
                                var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm2, 3)
                        else
                        label_14020570c:
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
                                    goto label_1402058ec
                                
                                goto label_14020487f
                            
                            var_638:0xc.d = __pextrd_memd_xmmdq_immb(zmm3, 3)
                            zmm4 |= zmm5
                            zmm8 = var_4c8_5
                            
                            if ((temp0_1830 & 1) == 0)
                            label_14020487f:
                                zmm6 = data_143442620 & zmm2
                                
                                if ((temp0_1830 & 2) != 0)
                                    var_628[1] = __pextrd_memd_xmmdq_immb(zmm4, 1)
                            else
                            label_1402058ec:
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
                                    goto label_140205920
                                
                                goto label_14020490d
                            
                            var_618[1] = __pextrd_memd_xmmdq_immb(zmm5, 1)
                            zmm6 = _mm_sub_ps(zmm6, zmm2)
                            
                            if ((temp0_1830 & 4) != 0)
                            label_140205920:
                                var_618[2] = __pextrd_memd_xmmdq_immb(zmm5, 2)
                                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                                zmm2 = _mm_sqrt_ps(zmm6)
                                
                                if ((temp0_1830 & 8) == 0)
                                    goto label_14020491d
                                
                                goto label_140205938
                            
                        label_14020490d:
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                            zmm2 = _mm_sqrt_ps(zmm6)
                            
                            if ((temp0_1830 & 8) == 0)
                            label_14020491d:
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                zmm6 = var_578_3
                                
                                if ((temp0_1830 & 1) != 0)
                                    goto label_140205955
                                
                                goto label_140204935
                            
                        label_140205938:
                            var_618[3] = __pextrd_memd_xmmdq_immb(zmm5, 3)
                            zmm0 = _mm_and_ps(zmm0, zmm2)
                            zmm6 = var_578_3
                            
                            if ((temp0_1830 & 1) != 0)
                            label_140205955:
                                var_608[0].d = zmm0.d
                                zmm5 = var_598_5
                                
                                if ((temp0_1830 & 2) == 0)
                                    goto label_140204944
                                
                                goto label_14020596d
                            
                        label_140204935:
                            zmm5 = var_598_5
                            
                            if ((temp0_1830 & 2) == 0)
                            label_140204944:
                                
                                if ((temp0_1830 & 4) != 0)
                                    goto label_14020597e
                                
                                goto label_14020494d
                            
                        label_14020596d:
                            var_608[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_1830 & 4) == 0)
                            label_14020494d:
                                
                                if ((temp0_1830 & 8) != 0)
                                    var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_14020597e:
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
                                        goto label_1402059b4
                                    
                                    goto label_140204a74
                                
                                var_638.d = zmm2.d
                                zmm4 = _mm_add_epi32(zmm4, zmm6)
                                
                                if ((temp0_1872 & 2) != 0)
                                label_1402059b4:
                                    var_638:4.d = __extractps_memd_xmmps_immb(zmm2, 1)
                                    zmm4 = _mm_cvtepi32_ps(zmm4)
                                    zmm6 = var_578_3
                                    
                                    if ((temp0_1872 & 4) == 0)
                                        goto label_140204a88
                                    
                                    goto label_1402059d0
                                
                            label_140204a74:
                                zmm4 = _mm_cvtepi32_ps(zmm4)
                                zmm6 = var_578_3
                                
                                if ((temp0_1872 & 4) == 0)
                                label_140204a88:
                                    zmm4 = _mm_div_ps(zmm4, zmm5)
                                    
                                    if ((temp0_1872 & 8) != 0)
                                        goto label_1402059e3
                                    
                                    goto label_140204a93
                                
                            label_1402059d0:
                                var_638:8.d = __extractps_memd_xmmps_immb(zmm2, 2)
                                zmm4 = _mm_div_ps(zmm4, zmm5)
                                
                                if ((temp0_1872 & 8) != 0)
                                label_1402059e3:
                                    var_638:0xc.d = __extractps_memd_xmmps_immb(zmm2, 3)
                                    zmm3 &= data_143442680
                                    
                                    if ((temp0_1872 & 1) == 0)
                                        goto label_140204aa3
                                    
                                    goto label_1402059fb
                                
                            label_140204a93:
                                zmm3 &= data_143442680
                                
                                if ((temp0_1872 & 1) == 0)
                                label_140204aa3:
                                    zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442490)
                                    
                                    if ((temp0_1872 & 2) != 0)
                                        goto label_140205a11
                                    
                                    goto label_140204ab3
                                
                            label_1402059fb:
                                var_628[0] = zmm4[0]
                                zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442490)
                                
                                if ((temp0_1872 & 2) == 0)
                                label_140204ab3:
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_1872 & 4) != 0)
                                        var_628[2] = __extractps_memd_xmmps_immb(zmm4, 2)
                                else
                                label_140205a11:
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
                                        goto label_140205a3c
                                    
                                    goto label_140204b0b
                                
                                var_618[1] = __extractps_memd_xmmps_immb(temp0_1899, 1)
                                zmm5 = _mm_sub_ps(temp0_1903, zmm2)
                                
                                if ((temp0_1872 & 4) != 0)
                                label_140205a3c:
                                    var_618[2] = __extractps_memd_xmmps_immb(temp0_1899, 2)
                                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                                    zmm2 = _mm_sqrt_ps(zmm5)
                                    
                                    if ((temp0_1872 & 8) == 0)
                                        goto label_140204b1a
                                    
                                    goto label_140205a53
                                
                            label_140204b0b:
                                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                                zmm2 = _mm_sqrt_ps(zmm5)
                                
                                if ((temp0_1872 & 8) == 0)
                                label_140204b1a:
                                    zmm0 = _mm_and_ps(zmm0, zmm2)
                                    zmm5 = var_598_5
                                    
                                    if ((temp0_1872 & 1) != 0)
                                        goto label_140205a6f
                                    
                                    goto label_140204b2e
                                
                            label_140205a53:
                                var_618[3] = __extractps_memd_xmmps_immb(temp0_1899, 3)
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                zmm5 = var_598_5
                                
                                if ((temp0_1872 & 1) != 0)
                                label_140205a6f:
                                    var_608[0].d = zmm0.d
                                    
                                    if ((temp0_1872 & 2) == 0)
                                        goto label_140204b36
                                    
                                    goto label_140205a7d
                                
                            label_140204b2e:
                                
                                if ((temp0_1872 & 2) == 0)
                                label_140204b36:
                                    
                                    if ((temp0_1872 & 4) != 0)
                                        goto label_140205a8d
                                    
                                    goto label_140204b3e
                                
                            label_140205a7d:
                                var_608[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_1872 & 4) == 0)
                                label_140204b3e:
                                    
                                    if ((temp0_1872 & 8) != 0)
                                        var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                                else
                                label_140205a8d:
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
                                            goto label_140207361
                                        
                                        goto label_140204b9e
                                    
                                    var_638.d = 0
                                    
                                    if ((temp0_1914 & 2) != 0)
                                    label_140207361:
                                        var_638:4.d = 0
                                        
                                        if ((temp0_1914 & 4) == 0)
                                            goto label_140204ba6
                                        
                                        goto label_140207371
                                    
                                label_140204b9e:
                                    
                                    if ((temp0_1914 & 4) == 0)
                                    label_140204ba6:
                                        
                                        if ((temp0_1914 & 8) != 0)
                                            goto label_140207381
                                        
                                        goto label_140204bae
                                    
                                label_140207371:
                                    var_638:8.d = 0
                                    
                                    if ((temp0_1914 & 8) != 0)
                                    label_140207381:
                                        var_638:0xc.d = 0
                                        
                                        if ((temp0_1914 & 1) == 0)
                                            goto label_140204bb6
                                        
                                        goto label_140207391
                                    
                                label_140204bae:
                                    
                                    if ((temp0_1914 & 1) == 0)
                                    label_140204bb6:
                                        
                                        if ((temp0_1914 & 2) != 0)
                                            goto label_1402073a1
                                        
                                        goto label_140204bbe
                                    
                                label_140207391:
                                    var_628[0] = 0
                                    
                                    if ((temp0_1914 & 2) != 0)
                                    label_1402073a1:
                                        var_628[1] = 0
                                        
                                        if ((temp0_1914 & 4) == 0)
                                            goto label_140204bc6
                                        
                                        goto label_1402073b1
                                    
                                label_140204bbe:
                                    
                                    if ((temp0_1914 & 4) == 0)
                                    label_140204bc6:
                                        
                                        if ((temp0_1914 & 8) != 0)
                                            goto label_1402073c1
                                        
                                        goto label_140204bce
                                    
                                label_1402073b1:
                                    var_628[2] = 0
                                    
                                    if ((temp0_1914 & 8) != 0)
                                    label_1402073c1:
                                        var_628[3] = 0
                                        
                                        if ((temp0_1914 & 1) == 0)
                                            goto label_140204bd6
                                        
                                        goto label_1402073d1
                                    
                                label_140204bce:
                                    
                                    if ((temp0_1914 & 1) == 0)
                                    label_140204bd6:
                                        
                                        if ((temp0_1914 & 2) != 0)
                                            goto label_1402073e1
                                        
                                        goto label_140204bde
                                    
                                label_1402073d1:
                                    var_618[0] = 0
                                    
                                    if ((temp0_1914 & 2) != 0)
                                    label_1402073e1:
                                        var_618[1] = 0
                                        
                                        if ((temp0_1914 & 4) == 0)
                                            goto label_140204be6
                                        
                                        goto label_1402073f1
                                    
                                label_140204bde:
                                    
                                    if ((temp0_1914 & 4) == 0)
                                    label_140204be6:
                                        
                                        if ((temp0_1914 & 8) != 0)
                                            goto label_140207401
                                        
                                        goto label_140204bee
                                    
                                label_1402073f1:
                                    var_618[2] = 0
                                    
                                    if ((temp0_1914 & 8) != 0)
                                    label_140207401:
                                        var_618[3] = 0
                                        
                                        if ((temp0_1914 & 1) == 0)
                                            goto label_140204bf6
                                        
                                        goto label_140207411
                                    
                                label_140204bee:
                                    
                                    if ((temp0_1914 & 1) == 0)
                                    label_140204bf6:
                                        
                                        if ((temp0_1914 & 2) != 0)
                                            goto label_140207421
                                        
                                        goto label_140204bfe
                                    
                                label_140207411:
                                    var_608[0].d = 0x3f800000
                                    
                                    if ((temp0_1914 & 2) != 0)
                                    label_140207421:
                                        var_608[0]:4.d = 0x3f800000
                                        
                                        if ((temp0_1914 & 4) == 0)
                                            goto label_140204c06
                                        
                                        goto label_140207431
                                    
                                label_140204bfe:
                                    
                                    if ((temp0_1914 & 4) != 0)
                                    label_140207431:
                                        var_608[1].d = 0x3f800000
                                        
                                        if ((temp0_1914 & 8) != 0)
                                            var_608[1]:4.d = 0x3f800000
                                    else
                                    label_140204c06:
                                        
                                        if ((temp0_1914 & 8) != 0)
                                            var_608[1]:4.d = 0x3f800000
                                
                                char temp0_1916 =
                                    _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm1), 0x1f))
                                
                                if (temp0_1916 != 0)
                                    if ((temp0_1916 & 1) == 0)
                                        if ((temp0_1916 & 2) != 0)
                                            goto label_140207455
                                        
                                        goto label_140204c39
                                    
                                    var_638.d = 0
                                    
                                    if ((temp0_1916 & 2) != 0)
                                    label_140207455:
                                        var_638:4.d = 0
                                        
                                        if ((temp0_1916 & 4) == 0)
                                            goto label_140204c41
                                        
                                        goto label_140207465
                                    
                                label_140204c39:
                                    
                                    if ((temp0_1916 & 4) == 0)
                                    label_140204c41:
                                        
                                        if ((temp0_1916 & 8) != 0)
                                            goto label_140207475
                                        
                                        goto label_140204c49
                                    
                                label_140207465:
                                    var_638:8.d = 0
                                    
                                    if ((temp0_1916 & 8) != 0)
                                    label_140207475:
                                        var_638:0xc.d = 0
                                        
                                        if ((temp0_1916 & 1) == 0)
                                            goto label_140204c51
                                        
                                        goto label_140207485
                                    
                                label_140204c49:
                                    
                                    if ((temp0_1916 & 1) == 0)
                                    label_140204c51:
                                        
                                        if ((temp0_1916 & 2) != 0)
                                            goto label_140207495
                                        
                                        goto label_140204c59
                                    
                                label_140207485:
                                    var_628[0] = 0
                                    
                                    if ((temp0_1916 & 2) != 0)
                                    label_140207495:
                                        var_628[1] = 0
                                        
                                        if ((temp0_1916 & 4) == 0)
                                            goto label_140204c61
                                        
                                        goto label_1402074a5
                                    
                                label_140204c59:
                                    
                                    if ((temp0_1916 & 4) == 0)
                                    label_140204c61:
                                        
                                        if ((temp0_1916 & 8) != 0)
                                            goto label_1402074b5
                                        
                                        goto label_140204c69
                                    
                                label_1402074a5:
                                    var_628[2] = 0
                                    
                                    if ((temp0_1916 & 8) != 0)
                                    label_1402074b5:
                                        var_628[3] = 0
                                        
                                        if ((temp0_1916 & 1) == 0)
                                            goto label_140204c71
                                        
                                        goto label_1402074c5
                                    
                                label_140204c69:
                                    
                                    if ((temp0_1916 & 1) == 0)
                                    label_140204c71:
                                        
                                        if ((temp0_1916 & 2) != 0)
                                            goto label_1402074d5
                                        
                                        goto label_140204c79
                                    
                                label_1402074c5:
                                    var_618[0] = 0
                                    
                                    if ((temp0_1916 & 2) != 0)
                                    label_1402074d5:
                                        var_618[1] = 0
                                        
                                        if ((temp0_1916 & 4) == 0)
                                            goto label_140204c81
                                        
                                        goto label_1402074e5
                                    
                                label_140204c79:
                                    
                                    if ((temp0_1916 & 4) == 0)
                                    label_140204c81:
                                        
                                        if ((temp0_1916 & 8) != 0)
                                            goto label_1402074f5
                                        
                                        goto label_140204c89
                                    
                                label_1402074e5:
                                    var_618[2] = 0
                                    
                                    if ((temp0_1916 & 8) != 0)
                                    label_1402074f5:
                                        var_618[3] = 0
                                        
                                        if ((temp0_1916 & 1) == 0)
                                            goto label_140204c91
                                        
                                        goto label_140207505
                                    
                                label_140204c89:
                                    
                                    if ((temp0_1916 & 1) == 0)
                                    label_140204c91:
                                        
                                        if ((temp0_1916 & 2) != 0)
                                            goto label_140207515
                                        
                                        goto label_140204c99
                                    
                                label_140207505:
                                    var_608[0].d = 0x3f800000
                                    
                                    if ((temp0_1916 & 2) != 0)
                                    label_140207515:
                                        var_608[0]:4.d = 0x3f800000
                                        
                                        if ((temp0_1916 & 4) == 0)
                                            goto label_140204ca1
                                        
                                        goto label_140207525
                                    
                                label_140204c99:
                                    
                                    if ((temp0_1916 & 4) != 0)
                                    label_140207525:
                                        var_608[1].d = 0x3f800000
                                        
                                        if ((temp0_1916 & 8) != 0)
                                            var_608[1]:4.d = 0x3f800000
                                    else
                                    label_140204ca1:
                                        
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
                                goto label_140205740
                            
                            goto label_140204ec9
                        
                        zmm0 = zx.o(*zmm9[0].q)
                        
                        if ((temp0_1956 & 2) != 0)
                        label_140205740:
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm9, 1)), 1)
                            zmm9 = var_588_5
                            
                            if ((temp0_1956 & 4) == 0)
                                goto label_140204edb
                            
                            goto label_140205760
                        
                    label_140204ec9:
                        zmm9 = var_588_5
                        
                        if ((temp0_1956 & 4) != 0)
                        label_140205760:
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm8[0]), 2)
                            
                            if ((temp0_1956 & 8) != 0)
                                zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                        else
                        label_140204edb:
                            
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
                                goto label_140205791
                            
                            goto label_140204f4f
                        
                        zmm1 = zx.o(*zmm7[0].q)
                        
                        if ((temp0_1969 & 2) != 0)
                        label_140205791:
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm7, 1)), 1)
                            
                            if ((temp0_1969 & 4) == 0)
                                goto label_140204f57
                            
                            goto label_1402057a7
                        
                    label_140204f4f:
                        
                        if ((temp0_1969 & 4) != 0)
                        label_1402057a7:
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm4[0].q), 2)
                            
                            if ((temp0_1969 & 8) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm4, 1)), 3)
                        else
                        label_140204f57:
                            
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
                            goto label_140205510
                        
                        goto label_140204fad
                    
                    var_558[0] = temp0_1974[0]
                    zmm4 = zx.o(0)
                    zmm5 = _mm_add_ps(zmm5, zmm1)
                    
                    if ((temp0_1925 & 2) != 0)
                    label_140205510:
                        var_558[1] = __extractps_memd_xmmps_immb(temp0_1974, 1)
                        zmm2 = _mm_cmpeq_epi32(zmm2, zmm4)
                        zmm5 = _mm_mul_ps(zmm5, zmm7)
                        
                        if ((temp0_1925 & 4) == 0)
                            goto label_140204fbe
                        
                        goto label_14020552c
                    
                label_140204fad:
                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm4)
                    zmm5 = _mm_mul_ps(zmm5, zmm7)
                    
                    if ((temp0_1925 & 4) == 0)
                    label_140204fbe:
                        zmm2 &= not.o(zmm5)
                        
                        if ((temp0_1925 & 8) != 0)
                            goto label_140205545
                        
                        goto label_140204fd0
                    
                label_14020552c:
                    var_558[2] = __extractps_memd_xmmps_immb(temp0_1974, 2)
                    zmm2 &= not.o(zmm5)
                    
                    if ((temp0_1925 & 8) != 0)
                    label_140205545:
                        var_558[3] = __extractps_memd_xmmps_immb(temp0_1974, 3)
                        zmm5 = var_598_5
                        
                        if ((temp0_1925 & 1) == 0)
                            goto label_140204fdf
                        
                        goto label_140205563
                    
                label_140204fd0:
                    zmm5 = var_598_5
                    
                    if ((temp0_1925 & 1) == 0)
                    label_140204fdf:
                        zmm6 = _mm_add_ps(zmm6, zmm1)
                        
                        if ((temp0_1925 & 2) != 0)
                            goto label_140205579
                        
                        goto label_140204fec
                    
                label_140205563:
                    var_548.d = zmm2.d
                    zmm6 = _mm_add_ps(zmm6, zmm1)
                    
                    if ((temp0_1925 & 2) == 0)
                    label_140204fec:
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm4)
                        zmm6 = _mm_mul_ps(zmm6, zmm7)
                        
                        if ((temp0_1925 & 4) != 0)
                            var_548:8.d = __pextrd_memd_xmmdq_immb(zmm2, 2)
                    else
                    label_140205579:
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
                            goto label_1402055b2
                        
                        goto label_140205062
                    
                    var_538:4.d = __pextrd_memd_xmmdq_immb(zmm0, 1)
                    zmm1 = _mm_sub_ps(zmm1, temp0_1986)
                    
                    if ((temp0_1925 & 4) != 0)
                    label_1402055b2:
                        var_538:8.d = __pextrd_memd_xmmdq_immb(zmm0, 2)
                        zmm4 = _mm_cmpeq_ps(zmm4, zmm1, 2)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        
                        if ((temp0_1925 & 8) == 0)
                            goto label_140205073
                        
                        goto label_1402055ce
                    
                label_140205062:
                    zmm4 = _mm_cmpeq_ps(zmm4, zmm1, 2)
                    zmm1 = _mm_sqrt_ps(zmm1)
                    
                    if ((temp0_1925 & 8) == 0)
                    label_140205073:
                        zmm4 = _mm_and_ps(zmm4, zmm1)
                        
                        if ((temp0_1925 & 1) != 0)
                            goto label_1402055e6
                        
                        goto label_140205080
                    
                label_1402055ce:
                    var_538:0xc.d = __pextrd_memd_xmmdq_immb(zmm0, 3)
                    zmm4 = _mm_and_ps(zmm4, zmm1)
                    
                    if ((temp0_1925 & 1) != 0)
                    label_1402055e6:
                        var_528[0] = zmm4[0]
                        
                        if ((temp0_1925 & 2) == 0)
                            goto label_14020508a
                        
                        goto label_1402055f9
                    
                label_140205080:
                    
                    if ((temp0_1925 & 2) == 0)
                    label_14020508a:
                        
                        if ((temp0_1925 & 4) != 0)
                            goto label_14020560e
                        
                        goto label_140205094
                    
                label_1402055f9:
                    var_528[1] = __extractps_memd_xmmps_immb(zmm4, 1)
                    
                    if ((temp0_1925 & 4) == 0)
                    label_140205094:
                        
                        if ((temp0_1925 & 8) != 0)
                            var_528[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                    else
                    label_14020560e:
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
                                goto label_1402057cd
                            
                            goto label_140205264
                        
                        var_558[0] = zmm6.d
                        
                        if ((temp0_1997 & 2) != 0)
                        label_1402057cd:
                            var_558[1] = zmm13.d
                            
                            if ((temp0_1997 & 4) == 0)
                                goto label_14020526e
                            
                            goto label_1402057e1
                        
                    label_140205264:
                        
                        if ((temp0_1997 & 4) == 0)
                        label_14020526e:
                            
                            if ((temp0_1997 & 8) != 0)
                                goto label_1402057f5
                            
                            goto label_140205278
                        
                    label_1402057e1:
                        var_558[2] = zmm9[0]
                        
                        if ((temp0_1997 & 8) != 0)
                        label_1402057f5:
                            var_558[3] = zmm11.d
                            zmm6 = _mm_insert_ps(zmm6, zmm13, 0x10)
                            
                            if ((temp0_1997 & 1) == 0)
                                goto label_140205289
                            
                            goto label_140205810
                        
                    label_140205278:
                        zmm6 = _mm_insert_ps(zmm6, zmm13, 0x10)
                        
                        if ((temp0_1997 & 1) != 0)
                        label_140205810:
                            var_548.d = zmm7[0]
                            zmm6 = _mm_insert_ps(zmm6, zmm9, 0x20)
                            zmm7 = _mm_insert_ps(zmm7, arg5, 0x10)
                            
                            if ((temp0_1997 & 2) != 0)
                                var_548:4.d = arg5[0]
                        else
                        label_140205289:
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
                                goto label_14020584c
                            
                            goto label_14020535d
                        
                        var_538:4.d = zmm3[0]
                        zmm4 = _mm_sub_ps(zmm4, zmm1)
                        
                        if ((temp0_1997 & 4) != 0)
                        label_14020584c:
                            var_538:8.d = zmm12[0]
                            zmm8 = _mm_cmpeq_ps(zmm8, zmm4, 1)
                            zmm0 = _mm_sqrt_ps(zmm4)
                            
                            if ((temp0_1997 & 8) == 0)
                                goto label_14020536f
                            
                            goto label_140205868
                        
                    label_14020535d:
                        zmm8 = _mm_cmpeq_ps(zmm8, zmm4, 1)
                        zmm0 = _mm_sqrt_ps(zmm4)
                        
                        if ((temp0_1997 & 8) == 0)
                        label_14020536f:
                            zmm8 = _mm_and_ps(zmm8, zmm0)
                            zmm5 = var_598_5
                            
                            if ((temp0_1997 & 1) != 0)
                                goto label_140205888
                            
                            goto label_140205386
                        
                    label_140205868:
                        var_538:0xc.d = zmm5[0]
                        zmm8 = _mm_and_ps(zmm8, zmm0)
                        zmm5 = var_598_5
                        
                        if ((temp0_1997 & 1) != 0)
                        label_140205888:
                            var_528[0] = zmm8[0].d
                            
                            if ((temp0_1997 & 2) == 0)
                                goto label_140205390
                            
                            goto label_14020589c
                        
                    label_140205386:
                        
                        if ((temp0_1997 & 2) == 0)
                        label_140205390:
                            
                            if ((temp0_1997 & 4) != 0)
                                goto label_1402058b2
                            
                            goto label_14020539a
                        
                    label_14020589c:
                        var_528[1] = __extractps_memd_xmmps_immb(zmm8, 1)
                        
                        if ((temp0_1997 & 4) == 0)
                        label_14020539a:
                            
                            if ((temp0_1997 & 8) != 0)
                                var_528[3] = __extractps_memd_xmmps_immb(zmm8, 3)
                        else
                        label_1402058b2:
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
                                        goto label_140205acd
                                    
                                    goto label_1402054a1
                                
                                zmm0 = *var_488_1.q
                                
                                if ((rbx_55 & 2) != 0)
                                label_140205acd:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_488_1, 1), 0x10)
                                    
                                    if ((rbx_55 & 4) == 0)
                                        goto label_1402054aa
                                    
                                    goto label_140205aea
                                
                            label_1402054a1:
                                
                                if ((rbx_55 & 4) == 0)
                                label_1402054aa:
                                    
                                    if ((rbx_55 & 8) != 0)
                                        goto label_140205b09
                                    
                                    goto label_1402054b3
                                
                            label_140205aea:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_2.q, 0x20)
                                char rdi_50
                                
                                if ((rbx_55 & 8) != 0)
                                label_140205b09:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_5a8_2, 1), 0x30)
                                    rdi_50 = _mm_movemask_ps(zmm6)
                                    zmm9 = zx.o(0)
                                    
                                    if ((rdi_50 & 1) != 0)
                                        goto label_1402054c5
                                    
                                    goto label_140205b21
                                
                            label_1402054b3:
                                rdi_50 = _mm_movemask_ps(zmm6)
                                zmm9 = zx.o(0)
                                
                                if ((rdi_50 & 1) != 0)
                                label_1402054c5:
                                    zmm9 = _mm_blend_epi16(zmm9, zmm0, 3)
                                    
                                    if ((rdi_50 & 2) != 0)
                                        goto label_140205b2b
                                    
                                    goto label_1402054d6
                                
                            label_140205b21:
                                
                                if ((rdi_50 & 2) != 0)
                                label_140205b2b:
                                    zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc)
                                    
                                    if ((rdi_50 & 4) != 0)
                                        goto label_1402054e0
                                    
                                    goto label_140205b3c
                                
                            label_1402054d6:
                                
                                if ((rdi_50 & 4) == 0)
                                label_140205b3c:
                                    
                                    if ((rdi_50 & 8) != 0)
                                        zmm9 = _mm_blend_epi16(zmm9, zmm0, 0xc0)
                                else
                                label_1402054e0:
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
                                        goto label_140205bd1
                                    
                                    goto label_140205b85
                                
                                zmm0 = *temp0_2044[0].q
                                
                                if ((rbx_55 & 2) != 0)
                                label_140205bd1:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_2044, 1), 0x10)
                                    
                                    if ((rbx_55 & 4) == 0)
                                        goto label_140205b8a
                                    
                                    goto label_140205be1
                                
                            label_140205b85:
                                
                                if ((rbx_55 & 4) == 0)
                                label_140205b8a:
                                    
                                    if ((rbx_55 & 8) != 0)
                                        goto label_140205bf3
                                    
                                    goto label_140205b8f
                                
                            label_140205be1:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_2046[0].q, 0x20)
                                
                                if ((rbx_55 & 8) != 0)
                                label_140205bf3:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_2046, 1), 0x30)
                                    zmm13 = zx.o(0)
                                    
                                    if ((rdi_50 & 1) != 0)
                                        goto label_140205b9a
                                    
                                    goto label_140205c04
                                
                            label_140205b8f:
                                zmm13 = zx.o(0)
                                
                                if ((rdi_50 & 1) != 0)
                                label_140205b9a:
                                    zmm13 = _mm_blend_epi16(zmm13, zmm0, 3)
                                    
                                    if ((rdi_50 & 2) != 0)
                                        goto label_140205c0a
                                    
                                    goto label_140205ba7
                                
                            label_140205c04:
                                
                                if ((rdi_50 & 2) != 0)
                                label_140205c0a:
                                    zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc)
                                    
                                    if ((rdi_50 & 4) != 0)
                                        goto label_140205bad
                                    
                                    goto label_140205c17
                                
                            label_140205ba7:
                                
                                if ((rdi_50 & 4) == 0)
                                label_140205c17:
                                    
                                    if ((rdi_50 & 8) != 0)
                                        zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc0)
                                else
                                label_140205bad:
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
                                        goto label_140205d5c
                                    
                                    goto label_140205cc1
                                
                                zmm0 = *var_488_1.q
                                
                                if ((temp0_2146 & 2) != 0)
                                label_140205d5c:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_488_1, 1), 0x10)
                                    zmm6 = var_578_3
                                    
                                    if ((temp0_2146 & 4) == 0)
                                        goto label_140205cd3
                                    
                                    goto label_140205d82
                                
                            label_140205cc1:
                                zmm6 = var_578_3
                                
                                if ((temp0_2146 & 4) == 0)
                                label_140205cd3:
                                    
                                    if ((temp0_2146 & 8) != 0)
                                        goto label_140205da1
                                    
                                    goto label_140205cdc
                                
                            label_140205d82:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_2.q, 0x20)
                                char rdi_51
                                
                                if ((temp0_2146 & 8) != 0)
                                label_140205da1:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_5a8_2, 1), 0x30)
                                    rdi_51 = _mm_movemask_ps(zmm4)
                                    zmm11 = zx.o(0)
                                    
                                    if ((rdi_51 & 1) != 0)
                                        goto label_140205cee
                                    
                                    goto label_140205db9
                                
                            label_140205cdc:
                                rdi_51 = _mm_movemask_ps(zmm4)
                                zmm11 = zx.o(0)
                                
                                if ((rdi_51 & 1) != 0)
                                label_140205cee:
                                    zmm11 = _mm_blend_epi16(zmm11, zmm0, 3)
                                    
                                    if ((rdi_51 & 2) != 0)
                                        goto label_140205dc3
                                    
                                    goto label_140205cff
                                
                            label_140205db9:
                                
                                if ((rdi_51 & 2) != 0)
                                label_140205dc3:
                                    zmm11 = _mm_blend_epi16(zmm11, zmm0, 0xc)
                                    
                                    if ((rdi_51 & 4) != 0)
                                        goto label_140205d09
                                    
                                    goto label_140205dd4
                                
                            label_140205cff:
                                
                                if ((rdi_51 & 4) == 0)
                                label_140205dd4:
                                    
                                    if ((rdi_51 & 8) != 0)
                                        zmm11 = _mm_blend_epi16(zmm11, zmm0, 0xc0)
                                else
                                label_140205d09:
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
                                        goto label_140205e7c
                                    
                                    goto label_140205e29
                                
                                zmm0 = *temp0_2151[0].q
                                arg5 = temp0_1292
                                
                                if ((temp0_2146 & 2) != 0)
                                label_140205e7c:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_2151, 1), 0x10)
                                    
                                    if ((temp0_2146 & 4) == 0)
                                        goto label_140205e2e
                                    
                                    goto label_140205e8c
                                
                            label_140205e29:
                                
                                if ((temp0_2146 & 4) == 0)
                                label_140205e2e:
                                    
                                    if ((temp0_2146 & 8) != 0)
                                        goto label_140205e9e
                                    
                                    goto label_140205e33
                                
                            label_140205e8c:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_2153[0].q, 0x20)
                                
                                if ((temp0_2146 & 8) != 0)
                                label_140205e9e:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_2153, 1), 0x30)
                                    zmm2 = zx.o(0)
                                    
                                    if ((rdi_51 & 1) != 0)
                                        goto label_140205e3d
                                    
                                    goto label_140205eae
                                
                            label_140205e33:
                                zmm2 = zx.o(0)
                                
                                if ((rdi_51 & 1) != 0)
                                label_140205e3d:
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 3)
                                    
                                    if ((rdi_51 & 2) != 0)
                                        goto label_140205eb4
                                    
                                    goto label_140205e49
                                
                            label_140205eae:
                                
                                if ((rdi_51 & 2) != 0)
                                label_140205eb4:
                                    zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc)
                                    
                                    if ((rdi_51 & 4) != 0)
                                        goto label_140205e4f
                                    
                                    goto label_140205ec0
                                
                            label_140205e49:
                                
                                if ((rdi_51 & 4) == 0)
                                label_140205ec0:
                                    
                                    if ((rdi_51 & 8) != 0)
                                        zmm2 = _mm_blend_epi16(zmm2, zmm0, 0xc0)
                                else
                                label_140205e4f:
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
                                        goto label_140206033
                                    
                                    goto label_140205f6a
                                
                                zmm0 = *var_488_1.q
                                
                                if ((temp0_2176 & 2) != 0)
                                label_140206033:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_488_1, 1), 0x10)
                                    
                                    if ((temp0_2176 & 4) == 0)
                                        goto label_140205f72
                                    
                                    goto label_14020604f
                                
                            label_140205f6a:
                                
                                if ((temp0_2176 & 4) == 0)
                                label_140205f72:
                                    
                                    if ((temp0_2176 & 8) != 0)
                                        goto label_14020606d
                                    
                                    goto label_140205f7a
                                
                            label_14020604f:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_5a8_2.q, 0x20)
                                char rbx_57
                                
                                if ((temp0_2176 & 8) != 0)
                                label_14020606d:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_5a8_2, 1), 0x30)
                                    rbx_57 = _mm_movemask_ps(zmm15)
                                    zmm5 = zx.o(0)
                                    
                                    if ((rbx_57 & 1) != 0)
                                        goto label_140205f8a
                                    
                                    goto label_140206083
                                
                            label_140205f7a:
                                rbx_57 = _mm_movemask_ps(zmm15)
                                zmm5 = zx.o(0)
                                
                                if ((rbx_57 & 1) != 0)
                                label_140205f8a:
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 1)
                                    
                                    if ((rbx_57 & 2) != 0)
                                        goto label_14020608c
                                    
                                    goto label_140205f99
                                
                            label_140206083:
                                
                                if ((rbx_57 & 2) != 0)
                                label_14020608c:
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 2)
                                    
                                    if ((rbx_57 & 4) != 0)
                                        goto label_140205fa2
                                    
                                    goto label_14020609b
                                
                            label_140205f99:
                                
                                if ((rbx_57 & 4) != 0)
                                label_140205fa2:
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 4)
                                    
                                    if ((rbx_57 & 8) != 0)
                                        goto label_1402060a4
                                    
                                    goto label_140205fb1
                                
                            label_14020609b:
                                
                                if ((rbx_57 & 8) != 0)
                                label_1402060a4:
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 8)
                                    
                                    if ((temp0_2176 & 1) == 0)
                                        goto label_140205fb9
                                    
                                    goto label_1402060b7
                                
                            label_140205fb1:
                                
                                if ((temp0_2176 & 1) == 0)
                                label_140205fb9:
                                    
                                    if ((temp0_2176 & 2) != 0)
                                        goto label_1402060ca
                                    
                                    goto label_140205fc1
                                
                            label_1402060b7:
                                zmm0 = *zmm7[0].q
                                
                                if ((temp0_2176 & 2) != 0)
                                label_1402060ca:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm7, 1), 0x10)
                                    
                                    if ((temp0_2176 & 4) == 0)
                                        goto label_140205fc9
                                    
                                    goto label_1402060dd
                                
                            label_140205fc1:
                                
                                if ((temp0_2176 & 4) == 0)
                                label_140205fc9:
                                    
                                    if ((temp0_2176 & 8) != 0)
                                        goto label_1402060f2
                                    
                                    goto label_140205fd1
                                
                            label_1402060dd:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_2183[0].q, 0x20)
                                
                                if ((temp0_2176 & 8) != 0)
                                label_1402060f2:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(temp0_2183, 1), 0x30)
                                    zmm3 = zx.o(0)
                                    
                                    if ((rbx_57 & 1) != 0)
                                        goto label_140205fdd
                                    
                                    goto label_140206104
                                
                            label_140205fd1:
                                zmm3 = zx.o(0)
                                
                                if ((rbx_57 & 1) != 0)
                                label_140205fdd:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 1)
                                    
                                    if ((rbx_57 & 2) != 0)
                                        goto label_14020610d
                                    
                                    goto label_140205fec
                                
                            label_140206104:
                                
                                if ((rbx_57 & 2) != 0)
                                label_14020610d:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                                    
                                    if ((rbx_57 & 4) != 0)
                                        goto label_140205ff5
                                    
                                    goto label_14020611c
                                
                            label_140205fec:
                                
                                if ((rbx_57 & 4) == 0)
                                label_14020611c:
                                    
                                    if ((rbx_57 & 8) != 0)
                                        zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                                else
                                label_140205ff5:
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
                                    goto label_1402070ff
                                
                                goto label_14020625b
                            
                            var_558[2] = __extractps_memd_xmmps_immb(zmm9, 2)
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            zmm11 = _mm_add_ps(zmm11, zmm2)
                            
                            if ((temp0_2036 & 8) != 0)
                            label_1402070ff:
                                var_558[3] = __extractps_memd_xmmps_immb(zmm9, 3)
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                
                                if ((temp0_2036 & 1) == 0)
                                    goto label_140206268
                                
                                goto label_140207118
                            
                        label_14020625b:
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            
                            if ((temp0_2036 & 1) == 0)
                            label_140206268:
                                zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                                
                                if ((temp0_2036 & 2) != 0)
                                    goto label_140207133
                                
                                goto label_140206279
                            
                        label_140207118:
                            var_548.d = zmm11.d
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_2036 & 2) == 0)
                            label_140206279:
                                zmm3 = _mm_mul_ps(zmm3, zmm0)
                                
                                if ((temp0_2036 & 4) != 0)
                                    var_548:8.d = __extractps_memd_xmmps_immb(zmm11, 2)
                            else
                            label_140207133:
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
                                    goto label_14020716e
                                
                                goto label_14020631d
                            
                            var_538:8.d = __extractps_memd_xmmps_immb(temp0_2232, 2)
                            arg5 = _mm_cmpeq_ps(arg5, zmm0, 1)
                            zmm0 = _mm_sqrt_ps(zmm0)
                            
                            if ((temp0_2036 & 8) != 0)
                            label_14020716e:
                                var_538:0xc.d = __extractps_memd_xmmps_immb(temp0_2232, 3)
                                arg5 = _mm_and_ps(arg5, zmm0)
                                
                                if ((temp0_2036 & 1) == 0)
                                    goto label_14020632f
                                
                                goto label_140207187
                            
                        label_14020631d:
                            arg5 = _mm_and_ps(arg5, zmm0)
                            
                            if ((temp0_2036 & 1) != 0)
                            label_140207187:
                                var_528[0] = arg5[0]
                                zmm5 = var_598_5
                                
                                if ((temp0_2036 & 2) != 0)
                                label_1402071a4:
                                    var_528[1] = __extractps_memd_xmmps_immb(arg5, 1)
                                    
                                    if ((temp0_2036 & 4) == 0)
                                        goto label_14020634c
                                    
                                    goto label_1402071ba
                            else
                            label_14020632f:
                                zmm5 = var_598_5
                                
                                if ((temp0_2036 & 2) != 0)
                                    goto label_1402071a4
                            
                            if ((temp0_2036 & 4) != 0)
                            label_1402071ba:
                                var_528[2] = __extractps_memd_xmmps_immb(arg5, 2)
                                zmm0 = temp0_1292
                                
                                if ((temp0_2036 & 8) != 0)
                                    var_528[3] = __extractps_memd_xmmps_immb(arg5, 3)
                            else
                            label_14020634c:
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
                                        goto label_1402071f7
                                    
                                    goto label_140206518
                                
                                var_558[3] = __pextrd_memd_xmmdq_immb(zmm3, 3)
                                zmm4 |= zmm5
                                
                                if ((temp0_2248 & 1) == 0)
                                label_140206518:
                                    zmm6 = data_143442620 & zmm2
                                    
                                    if ((temp0_2248 & 2) != 0)
                                        var_548:4.d = __pextrd_memd_xmmdq_immb(zmm4, 1)
                                else
                                label_1402071f7:
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
                                        goto label_140207233
                                    
                                    goto label_1402065b8
                                
                                var_538:4.d = __pextrd_memd_xmmdq_immb(zmm5, 1)
                                zmm6 = _mm_sub_ps(zmm6, zmm2)
                                
                                if ((temp0_2248 & 4) != 0)
                                label_140207233:
                                    var_538:8.d = __pextrd_memd_xmmdq_immb(zmm5, 2)
                                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                                    zmm2 = _mm_sqrt_ps(zmm6)
                                    
                                    if ((temp0_2248 & 8) == 0)
                                        goto label_1402065c9
                                    
                                    goto label_14020724f
                                
                            label_1402065b8:
                                zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                                zmm2 = _mm_sqrt_ps(zmm6)
                                
                                if ((temp0_2248 & 8) == 0)
                                label_1402065c9:
                                    zmm0 = _mm_and_ps(zmm0, zmm2)
                                    zmm6 = var_578_3
                                    
                                    if ((temp0_2248 & 1) != 0)
                                        goto label_140207270
                                    
                                    goto label_1402065e3
                                
                            label_14020724f:
                                var_538:0xc.d = __pextrd_memd_xmmdq_immb(zmm5, 3)
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                zmm6 = var_578_3
                                
                                if ((temp0_2248 & 1) != 0)
                                label_140207270:
                                    var_528[0] = zmm0.d
                                    zmm5 = var_598_5
                                    
                                    if ((temp0_2248 & 2) == 0)
                                        goto label_1402065f2
                                    
                                    goto label_14020728c
                                
                            label_1402065e3:
                                zmm5 = var_598_5
                                
                                if ((temp0_2248 & 2) == 0)
                                label_1402065f2:
                                    
                                    if ((temp0_2248 & 4) != 0)
                                        goto label_1402072a1
                                    
                                    goto label_1402065fc
                                
                            label_14020728c:
                                var_528[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_2248 & 4) == 0)
                                label_1402065fc:
                                    
                                    if ((temp0_2248 & 8) != 0)
                                        var_528[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                else
                                label_1402072a1:
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
                                            goto label_14020754f
                                        
                                        goto label_140206727
                                    
                                    var_558[0] = zmm2.d
                                    zmm4 = _mm_add_epi32(zmm4, zmm6)
                                    
                                    if ((temp0_2290 & 2) != 0)
                                    label_14020754f:
                                        var_558[1] = __extractps_memd_xmmps_immb(zmm2, 1)
                                        zmm4 = _mm_cvtepi32_ps(zmm4)
                                        
                                        if ((temp0_2290 & 4) == 0)
                                            goto label_140206732
                                        
                                        goto label_140207565
                                    
                                label_140206727:
                                    zmm4 = _mm_cvtepi32_ps(zmm4)
                                    
                                    if ((temp0_2290 & 4) == 0)
                                    label_140206732:
                                        zmm4 = _mm_div_ps(zmm4, zmm5)
                                        
                                        if ((temp0_2290 & 8) != 0)
                                            goto label_14020757b
                                        
                                        goto label_14020673d
                                    
                                label_140207565:
                                    var_558[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                                    zmm4 = _mm_div_ps(zmm4, zmm5)
                                    
                                    if ((temp0_2290 & 8) != 0)
                                    label_14020757b:
                                        var_558[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                                        zmm3 &= data_143442680
                                        
                                        if ((temp0_2290 & 1) == 0)
                                            goto label_14020674d
                                        
                                        goto label_140207596
                                    
                                label_14020673d:
                                    zmm3 &= data_143442680
                                    
                                    if ((temp0_2290 & 1) == 0)
                                    label_14020674d:
                                        zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442490)
                                        
                                        if ((temp0_2290 & 2) != 0)
                                            goto label_1402075af
                                        
                                        goto label_14020675d
                                    
                                label_140207596:
                                    var_548.d = zmm4[0]
                                    zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442490)
                                    
                                    if ((temp0_2290 & 2) == 0)
                                    label_14020675d:
                                        zmm3 = _mm_cvtepi32_ps(zmm3)
                                        
                                        if ((temp0_2290 & 4) != 0)
                                            var_548:8.d = __extractps_memd_xmmps_immb(zmm4, 2)
                                    else
                                    label_1402075af:
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
                                            goto label_1402075e0
                                        
                                        goto label_1402067be
                                    
                                    var_538:4.d = __extractps_memd_xmmps_immb(temp0_2317, 1)
                                    zmm5 = _mm_sub_ps(temp0_2321, zmm2)
                                    
                                    if ((temp0_2290 & 4) != 0)
                                    label_1402075e0:
                                        var_538:8.d = __extractps_memd_xmmps_immb(temp0_2317, 2)
                                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                                        zmm2 = _mm_sqrt_ps(zmm5)
                                        
                                        if ((temp0_2290 & 8) == 0)
                                            goto label_1402067cd
                                        
                                        goto label_1402075fa
                                    
                                label_1402067be:
                                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                                    zmm2 = _mm_sqrt_ps(zmm5)
                                    
                                    if ((temp0_2290 & 8) == 0)
                                    label_1402067cd:
                                        zmm0 = _mm_and_ps(zmm0, zmm2)
                                        
                                        if ((temp0_2290 & 1) != 0)
                                            goto label_140207610
                                        
                                        goto label_1402067d8
                                    
                                label_1402075fa:
                                    var_538:0xc.d = __extractps_memd_xmmps_immb(temp0_2317, 3)
                                    zmm0 = _mm_and_ps(zmm0, zmm2)
                                    
                                    if ((temp0_2290 & 1) != 0)
                                    label_140207610:
                                        var_528[0] = zmm0.d
                                        
                                        if ((temp0_2290 & 2) == 0)
                                            goto label_1402067e0
                                        
                                        goto label_140207621
                                    
                                label_1402067d8:
                                    
                                    if ((temp0_2290 & 2) == 0)
                                    label_1402067e0:
                                        
                                        if ((temp0_2290 & 4) != 0)
                                            goto label_140207634
                                        
                                        goto label_1402067e8
                                    
                                label_140207621:
                                    var_528[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                                    
                                    if ((temp0_2290 & 4) == 0)
                                    label_1402067e8:
                                        
                                        if ((temp0_2290 & 8) != 0)
                                            var_528[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                    else
                                    label_140207634:
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
                                                goto label_14020765f
                                            
                                            goto label_14020684b
                                        
                                        var_558[0] = 0
                                        
                                        if ((temp0_2332 & 2) != 0)
                                        label_14020765f:
                                            var_558[1] = 0
                                            
                                            if ((temp0_2332 & 4) == 0)
                                                goto label_140206853
                                            
                                            goto label_140207672
                                        
                                    label_14020684b:
                                        
                                        if ((temp0_2332 & 4) == 0)
                                        label_140206853:
                                            
                                            if ((temp0_2332 & 8) != 0)
                                                goto label_140207685
                                            
                                            goto label_14020685b
                                        
                                    label_140207672:
                                        var_558[2] = 0
                                        
                                        if ((temp0_2332 & 8) != 0)
                                        label_140207685:
                                            var_558[3] = 0
                                            
                                            if ((temp0_2332 & 1) == 0)
                                                goto label_140206863
                                            
                                            goto label_140207698
                                        
                                    label_14020685b:
                                        
                                        if ((temp0_2332 & 1) == 0)
                                        label_140206863:
                                            
                                            if ((temp0_2332 & 2) != 0)
                                                goto label_1402076ab
                                            
                                            goto label_14020686b
                                        
                                    label_140207698:
                                        var_548.d = 0
                                        
                                        if ((temp0_2332 & 2) != 0)
                                        label_1402076ab:
                                            var_548:4.d = 0
                                            
                                            if ((temp0_2332 & 4) == 0)
                                                goto label_140206873
                                            
                                            goto label_1402076be
                                        
                                    label_14020686b:
                                        
                                        if ((temp0_2332 & 4) == 0)
                                        label_140206873:
                                            
                                            if ((temp0_2332 & 8) != 0)
                                                goto label_1402076d1
                                            
                                            goto label_14020687b
                                        
                                    label_1402076be:
                                        var_548:8.d = 0
                                        
                                        if ((temp0_2332 & 8) != 0)
                                        label_1402076d1:
                                            var_548:0xc.d = 0
                                            
                                            if ((temp0_2332 & 1) == 0)
                                                goto label_140206883
                                            
                                            goto label_1402076e4
                                        
                                    label_14020687b:
                                        
                                        if ((temp0_2332 & 1) == 0)
                                        label_140206883:
                                            
                                            if ((temp0_2332 & 2) != 0)
                                                goto label_1402076f7
                                            
                                            goto label_14020688b
                                        
                                    label_1402076e4:
                                        var_538.d = 0
                                        
                                        if ((temp0_2332 & 2) != 0)
                                        label_1402076f7:
                                            var_538:4.d = 0
                                            
                                            if ((temp0_2332 & 4) == 0)
                                                goto label_140206893
                                            
                                            goto label_14020770a
                                        
                                    label_14020688b:
                                        
                                        if ((temp0_2332 & 4) == 0)
                                        label_140206893:
                                            
                                            if ((temp0_2332 & 8) != 0)
                                                goto label_14020771d
                                            
                                            goto label_14020689b
                                        
                                    label_14020770a:
                                        var_538:8.d = 0
                                        
                                        if ((temp0_2332 & 8) != 0)
                                        label_14020771d:
                                            var_538:0xc.d = 0
                                            
                                            if ((temp0_2332 & 1) == 0)
                                                goto label_1402068a3
                                            
                                            goto label_140207730
                                        
                                    label_14020689b:
                                        
                                        if ((temp0_2332 & 1) == 0)
                                        label_1402068a3:
                                            
                                            if ((temp0_2332 & 2) != 0)
                                                goto label_140207743
                                            
                                            goto label_1402068ab
                                        
                                    label_140207730:
                                        var_528[0] = 0x3f800000
                                        
                                        if ((temp0_2332 & 2) != 0)
                                        label_140207743:
                                            var_528[1] = 0x3f800000
                                            
                                            if ((temp0_2332 & 4) == 0)
                                                goto label_1402068b3
                                            
                                            goto label_140207756
                                        
                                    label_1402068ab:
                                        
                                        if ((temp0_2332 & 4) != 0)
                                        label_140207756:
                                            var_528[2] = 0x3f800000
                                            
                                            if ((temp0_2332 & 8) != 0)
                                                var_528[3] = 0x3f800000
                                        else
                                        label_1402068b3:
                                            
                                            if ((temp0_2332 & 8) != 0)
                                                var_528[3] = 0x3f800000
                                    
                                    char temp0_2334 =
                                        _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm1), 0x1f))
                                    
                                    if (temp0_2334 != 0)
                                        if ((temp0_2334 & 1) == 0)
                                            if ((temp0_2334 & 2) != 0)
                                                goto label_140207781
                                            
                                            goto label_1402068e9
                                        
                                        var_558[0] = 0
                                        
                                        if ((temp0_2334 & 2) != 0)
                                        label_140207781:
                                            var_558[1] = 0
                                            
                                            if ((temp0_2334 & 4) == 0)
                                                goto label_1402068f1
                                            
                                            goto label_140207794
                                        
                                    label_1402068e9:
                                        
                                        if ((temp0_2334 & 4) == 0)
                                        label_1402068f1:
                                            
                                            if ((temp0_2334 & 8) != 0)
                                                goto label_1402077a7
                                            
                                            goto label_1402068f9
                                        
                                    label_140207794:
                                        var_558[2] = 0
                                        
                                        if ((temp0_2334 & 8) != 0)
                                        label_1402077a7:
                                            var_558[3] = 0
                                            
                                            if ((temp0_2334 & 1) == 0)
                                                goto label_140206901
                                            
                                            goto label_1402077ba
                                        
                                    label_1402068f9:
                                        
                                        if ((temp0_2334 & 1) == 0)
                                        label_140206901:
                                            
                                            if ((temp0_2334 & 2) != 0)
                                                goto label_1402077cd
                                            
                                            goto label_140206909
                                        
                                    label_1402077ba:
                                        var_548.d = 0
                                        
                                        if ((temp0_2334 & 2) != 0)
                                        label_1402077cd:
                                            var_548:4.d = 0
                                            
                                            if ((temp0_2334 & 4) == 0)
                                                goto label_140206911
                                            
                                            goto label_1402077e0
                                        
                                    label_140206909:
                                        
                                        if ((temp0_2334 & 4) == 0)
                                        label_140206911:
                                            
                                            if ((temp0_2334 & 8) != 0)
                                                goto label_1402077f3
                                            
                                            goto label_140206919
                                        
                                    label_1402077e0:
                                        var_548:8.d = 0
                                        
                                        if ((temp0_2334 & 8) != 0)
                                        label_1402077f3:
                                            var_548:0xc.d = 0
                                            
                                            if ((temp0_2334 & 1) == 0)
                                                goto label_140206921
                                            
                                            goto label_140207806
                                        
                                    label_140206919:
                                        
                                        if ((temp0_2334 & 1) == 0)
                                        label_140206921:
                                            
                                            if ((temp0_2334 & 2) != 0)
                                                goto label_140207819
                                            
                                            goto label_140206929
                                        
                                    label_140207806:
                                        var_538.d = 0
                                        
                                        if ((temp0_2334 & 2) != 0)
                                        label_140207819:
                                            var_538:4.d = 0
                                            
                                            if ((temp0_2334 & 4) == 0)
                                                goto label_140206931
                                            
                                            goto label_14020782c
                                        
                                    label_140206929:
                                        
                                        if ((temp0_2334 & 4) == 0)
                                        label_140206931:
                                            
                                            if ((temp0_2334 & 8) != 0)
                                                goto label_14020783f
                                            
                                            goto label_140206939
                                        
                                    label_14020782c:
                                        var_538:8.d = 0
                                        
                                        if ((temp0_2334 & 8) != 0)
                                        label_14020783f:
                                            var_538:0xc.d = 0
                                            
                                            if ((temp0_2334 & 1) == 0)
                                                goto label_140206941
                                            
                                            goto label_140207852
                                        
                                    label_140206939:
                                        
                                        if ((temp0_2334 & 1) == 0)
                                        label_140206941:
                                            
                                            if ((temp0_2334 & 2) != 0)
                                                goto label_140207865
                                            
                                            goto label_140206949
                                        
                                    label_140207852:
                                        var_528[0] = 0x3f800000
                                        
                                        if ((temp0_2334 & 2) != 0)
                                        label_140207865:
                                            var_528[1] = 0x3f800000
                                            
                                            if ((temp0_2334 & 4) == 0)
                                                goto label_140206951
                                            
                                            goto label_140207878
                                        
                                    label_140206949:
                                        
                                        if ((temp0_2334 & 4) != 0)
                                        label_140207878:
                                            var_528[2] = 0x3f800000
                                            
                                            if ((temp0_2334 & 8) != 0)
                                                var_528[3] = 0x3f800000
                                        else
                                        label_140206951:
                                            
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
                    label_140206fd6:
                        var_638:4.d = __extractps_memd_xmmps_immb(zmm2, 1)
                        
                        if ((temp0_1919 & 4) == 0)
                            goto label_140206a0a
                        
                        goto label_140206fe6
                else
                    zmm13 = var_3e8_1
                    
                    if ((temp0_1919 & 2) != 0)
                        goto label_140206fd6
                
                if ((temp0_1919 & 4) == 0)
                label_140206a0a:
                    zmm6 = _mm_mul_ps(var_548, arg6)
                    zmm7 = _mm_mul_ps(var_628, zmm4)
                    
                    if ((temp0_1919 & 8) != 0)
                        goto label_140206ffd
                    
                    goto label_140206a19
                
            label_140206fe6:
                var_638:8.d = __extractps_memd_xmmps_immb(zmm2, 2)
                zmm6 = _mm_mul_ps(var_548, arg6)
                zmm7 = _mm_mul_ps(var_628, zmm4)
                
                if ((temp0_1919 & 8) != 0)
                label_140206ffd:
                    var_638:0xc.d = __extractps_memd_xmmps_immb(zmm2, 3)
                    zmm6 = _mm_add_ps(zmm6, zmm7)
                    
                    if ((temp0_1919 & 1) == 0)
                        goto label_140206a24
                    
                    goto label_140207010
                
            label_140206a19:
                zmm6 = _mm_add_ps(zmm6, zmm7)
                
                if ((temp0_1919 & 1) != 0)
                label_140207010:
                    var_628[0] = zmm6.d
                    
                    if ((temp0_1919 & 2) != 0)
                    label_14020701e:
                        var_628[1] = __extractps_memd_xmmps_immb(zmm6, 1)
                        
                        if ((temp0_1919 & 4) == 0)
                            goto label_140206a34
                        
                        goto label_14020702e
                else
                label_140206a24:
                    
                    if ((temp0_1919 & 2) != 0)
                        goto label_14020701e
                
                if ((temp0_1919 & 4) == 0)
                label_140206a34:
                    zmm1 = _mm_mul_ps(var_538, arg6)
                    arg5 = _mm_mul_ps(var_618, zmm4)
                    
                    if ((temp0_1919 & 8) != 0)
                        goto label_140207046
                    
                    goto label_140206a44
                
            label_14020702e:
                var_628[2] = __extractps_memd_xmmps_immb(zmm6, 2)
                zmm1 = _mm_mul_ps(var_538, arg6)
                arg5 = _mm_mul_ps(var_618, zmm4)
                
                if ((temp0_1919 & 8) != 0)
                label_140207046:
                    var_628[3] = __extractps_memd_xmmps_immb(zmm6, 3)
                    zmm1 = _mm_add_ps(zmm1, arg5)
                    
                    if ((temp0_1919 & 1) == 0)
                        goto label_140206a50
                    
                    goto label_14020705a
                
            label_140206a44:
                zmm1 = _mm_add_ps(zmm1, arg5)
                
                if ((temp0_1919 & 1) != 0)
                label_14020705a:
                    var_618[0] = zmm1.d
                    
                    if ((temp0_1919 & 2) != 0)
                    label_140207068:
                        var_618[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                        
                        if ((temp0_1919 & 4) == 0)
                            goto label_140206a60
                        
                        goto label_140207078
                else
                label_140206a50:
                    
                    if ((temp0_1919 & 2) != 0)
                        goto label_140207068
                
                if ((temp0_1919 & 4) == 0)
                label_140206a60:
                    arg6 = _mm_mul_ps(arg6, var_528)
                    zmm4 = _mm_mul_ps(zmm4, var_608)
                    
                    if ((temp0_1919 & 8) != 0)
                        goto label_140207090
                    
                    goto label_140206a70
                
            label_140207078:
                var_618[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                arg6 = _mm_mul_ps(arg6, var_528)
                zmm4 = _mm_mul_ps(zmm4, var_608)
                
                if ((temp0_1919 & 8) != 0)
                label_140207090:
                    var_618[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                    arg6 = _mm_add_ps(arg6, zmm4)
                    
                    if ((temp0_1919 & 1) == 0)
                        goto label_140206a7c
                    
                    goto label_1402070a4
                
            label_140206a70:
                arg6 = _mm_add_ps(arg6, zmm4)
                
                if ((temp0_1919 & 1) == 0)
                label_140206a7c:
                    
                    if ((temp0_1919 & 2) != 0)
                        goto label_1402070b3
                    
                    goto label_140206a84
                
            label_1402070a4:
                var_608[0].d = arg6[0]
                
                if ((temp0_1919 & 2) != 0)
                label_1402070b3:
                    var_608[0]:4.d = __extractps_memd_xmmps_immb(arg6, 1)
                    
                    if ((temp0_1919 & 4) == 0)
                        goto label_140206a8f
                    
                    goto label_1402070c4
                
            label_140206a84:
                
                if ((temp0_1919 & 4) != 0)
                label_1402070c4:
                    var_608[1].d = __extractps_memd_xmmps_immb(arg6, 2)
                    
                    if ((temp0_1919 & 8) != 0)
                        var_608[1]:4.d = __extractps_memd_xmmps_immb(arg6, 3)
                else
                label_140206a8f:
                    
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
                    goto label_140206dcf
                
                goto label_140206b66
            
            var_638.d = zmm6.d
            
            if ((temp0_1264 & 2) != 0)
            label_140206dcf:
                var_638:4.d = __extractps_memd_xmmps_immb(zmm6, 1)
                
                if ((temp0_1264 & 4) == 0)
                    goto label_140206b6e
                
                goto label_140206dde
            
        label_140206b66:
            
            if ((temp0_1264 & 4) == 0)
            label_140206b6e:
                
                if ((temp0_1264 & 8) != 0)
                    goto label_140206ded
                
                goto label_140206b76
            
        label_140206dde:
            var_638:8.d = __extractps_memd_xmmps_immb(zmm6, 2)
            
            if ((temp0_1264 & 8) != 0)
            label_140206ded:
                var_638:0xc.d = __extractps_memd_xmmps_immb(zmm6, 3)
                zmm5 = _mm_and_ps(temp0_2380, temp0_2366)
                
                if ((temp0_1264 & 1) == 0)
                    goto label_140206b81
                
                goto label_140206dff
            
        label_140206b76:
            zmm5 = _mm_and_ps(temp0_2380, temp0_2366)
            
            if ((temp0_1264 & 1) == 0)
            label_140206b81:
                
                if ((temp0_1264 & 2) != 0)
                    goto label_140206e0d
                
                goto label_140206b89
            
        label_140206dff:
            var_628[0] = zmm5[0]
            
            if ((temp0_1264 & 2) != 0)
            label_140206e0d:
                var_628[1] = __extractps_memd_xmmps_immb(zmm5, 1)
                
                if ((temp0_1264 & 4) == 0)
                    goto label_140206b91
                
                goto label_140206e1d
            
        label_140206b89:
            
            if ((temp0_1264 & 4) == 0)
            label_140206b91:
                
                if ((temp0_1264 & 8) != 0)
                    goto label_140206e2d
                
                goto label_140206b99
            
        label_140206e1d:
            var_628[2] = __extractps_memd_xmmps_immb(zmm5, 2)
            
            if ((temp0_1264 & 8) != 0)
            label_140206e2d:
                var_628[3] = __extractps_memd_xmmps_immb(zmm5, 3)
                zmm4 = _mm_and_ps(zmm4, temp0_2366)
                
                if ((temp0_1264 & 1) == 0)
                    goto label_140206ba4
                
                goto label_140206e40
            
        label_140206b99:
            zmm4 = _mm_and_ps(zmm4, temp0_2366)
            
            if ((temp0_1264 & 1) == 0)
            label_140206ba4:
                
                if ((temp0_1264 & 2) != 0)
                    goto label_140206e4e
                
                goto label_140206bac
            
        label_140206e40:
            var_618[0] = zmm4[0]
            
            if ((temp0_1264 & 2) != 0)
            label_140206e4e:
                var_618[1] = __extractps_memd_xmmps_immb(zmm4, 1)
                zmm1 = _mm_cmpeq_ps(zmm1, zmm2, 6)
                
                if ((temp0_1264 & 4) == 0)
                    goto label_140206bb8
                
                goto label_140206e62
            
        label_140206bac:
            zmm1 = _mm_cmpeq_ps(zmm1, zmm2, 6)
            
            if ((temp0_1264 & 4) == 0)
            label_140206bb8:
                zmm0 = _mm_and_ps(zmm0, temp0_2366)
                zmm1 = __andps_xmmxud_memxud(zmm1, data_142d3f670)
                
                if ((temp0_1264 & 8) != 0)
                    goto label_140206e7c
                
                goto label_140206bca
            
        label_140206e62:
            var_618[2] = __extractps_memd_xmmps_immb(zmm4, 2)
            zmm0 = _mm_and_ps(zmm0, temp0_2366)
            zmm1 = __andps_xmmxud_memxud(zmm1, data_142d3f670)
            
            if ((temp0_1264 & 8) != 0)
            label_140206e7c:
                var_618[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                zmm0 = _mm_or_ps(zmm0, zmm1)
                
                if ((temp0_1264 & 1) == 0)
                    goto label_140206bd7
                
                goto label_140206e8f
            
        label_140206bca:
            zmm0 = _mm_or_ps(zmm0, zmm1)
            
            if ((temp0_1264 & 1) == 0)
            label_140206bd7:
                zmm1 = var_3c8_2
                
                if ((temp0_1264 & 2) != 0)
                    goto label_140206ea6
                
                goto label_140206be6
            
        label_140206e8f:
            var_608[0].d = zmm0.d
            zmm1 = var_3c8_2
            
            if ((temp0_1264 & 2) != 0)
            label_140206ea6:
                var_608[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                
                if ((temp0_1264 & 4) == 0)
                    goto label_140206bee
                
                goto label_140206eb6
            
        label_140206be6:
            
            if ((temp0_1264 & 4) != 0)
            label_140206eb6:
                var_608[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((temp0_1264 & 8) != 0)
                    var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_140206bee:
                
                if ((temp0_1264 & 8) != 0)
                    var_608[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
        
        char temp0_2391 = _mm_movemask_ps(zmm1 & zmm13)
        
        if (temp0_2391 != 0)
            if ((temp0_2391 & 1) == 0)
                if ((temp0_2391 & 2) != 0)
                    goto label_140206eda
                
                goto label_140206c1d
            
            var_638.d = 0
            
            if ((temp0_2391 & 2) != 0)
            label_140206eda:
                var_638:4.d = 0
                
                if ((temp0_2391 & 4) == 0)
                    goto label_140206c25
                
                goto label_140206eea
            
        label_140206c1d:
            
            if ((temp0_2391 & 4) == 0)
            label_140206c25:
                
                if ((temp0_2391 & 8) != 0)
                    goto label_140206efa
                
                goto label_140206c2d
            
        label_140206eea:
            var_638:8.d = 0
            
            if ((temp0_2391 & 8) != 0)
            label_140206efa:
                var_638:0xc.d = 0
                
                if ((temp0_2391 & 1) == 0)
                    goto label_140206c35
                
                goto label_140206f0a
            
        label_140206c2d:
            
            if ((temp0_2391 & 1) == 0)
            label_140206c35:
                
                if ((temp0_2391 & 2) != 0)
                    goto label_140206f1a
                
                goto label_140206c3d
            
        label_140206f0a:
            var_628[0] = 0
            
            if ((temp0_2391 & 2) != 0)
            label_140206f1a:
                var_628[1] = 0
                
                if ((temp0_2391 & 4) == 0)
                    goto label_140206c45
                
                goto label_140206f2a
            
        label_140206c3d:
            
            if ((temp0_2391 & 4) == 0)
            label_140206c45:
                
                if ((temp0_2391 & 8) != 0)
                    goto label_140206f3a
                
                goto label_140206c4d
            
        label_140206f2a:
            var_628[2] = 0
            
            if ((temp0_2391 & 8) != 0)
            label_140206f3a:
                var_628[3] = 0
                
                if ((temp0_2391 & 1) == 0)
                    goto label_140206c55
                
                goto label_140206f4a
            
        label_140206c4d:
            
            if ((temp0_2391 & 1) == 0)
            label_140206c55:
                
                if ((temp0_2391 & 2) != 0)
                    goto label_140206f5a
                
                goto label_140206c5d
            
        label_140206f4a:
            var_618[0] = 0
            
            if ((temp0_2391 & 2) != 0)
            label_140206f5a:
                var_618[1] = 0
                
                if ((temp0_2391 & 4) == 0)
                    goto label_140206c65
                
                goto label_140206f6a
            
        label_140206c5d:
            
            if ((temp0_2391 & 4) == 0)
            label_140206c65:
                
                if ((temp0_2391 & 8) != 0)
                    goto label_140206f7a
                
                goto label_140206c6d
            
        label_140206f6a:
            var_618[2] = 0
            
            if ((temp0_2391 & 8) != 0)
            label_140206f7a:
                var_618[3] = 0
                
                if ((temp0_2391 & 1) == 0)
                    goto label_140206c75
                
                goto label_140206f8a
            
        label_140206c6d:
            
            if ((temp0_2391 & 1) == 0)
            label_140206c75:
                
                if ((temp0_2391 & 2) != 0)
                    goto label_140206f9a
                
                goto label_140206c7d
            
        label_140206f8a:
            var_608[0].d = 0x3f800000
            
            if ((temp0_2391 & 2) != 0)
            label_140206f9a:
                var_608[0]:4.d = 0x3f800000
                
                if ((temp0_2391 & 4) == 0)
                    goto label_140206c85
                
                goto label_140206faa
            
        label_140206c7d:
            
            if ((temp0_2391 & 4) != 0)
            label_140206faa:
                var_608[1].d = 0x3f800000
                
                if ((temp0_2391 & 8) != 0)
                    var_608[1]:4.d = 0x3f800000
            else
            label_140206c85:
                
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
                                        goto label_1401fe430
                                    
                                    goto label_1401fe36e
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                                zmm8 = var_5b8_1
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rcx_12 & 2) != 0)
                                label_1401fe430:
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg6)
                                    
                                    if ((rcx_12 & 4) == 0)
                                        goto label_1401fe37c
                                    
                                    goto label_1401fe44c
                                
                            label_1401fe36e:
                                zmm0 = _mm_add_epi64(zmm0, arg6)
                                
                                if ((rcx_12 & 4) != 0)
                                label_1401fe44c:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rcx_12 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1401fe37c:
                                    
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
                                        goto label_1401fe651
                                    
                                    goto label_1401fe588
                                
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                                zmm8 = var_5b8_1
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((rcx_11 & 2) != 0)
                                label_1401fe651:
                                    zmm2 =
                                        _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, arg6)
                                    
                                    if ((rcx_11 & 4) == 0)
                                        goto label_1401fe596
                                    
                                    goto label_1401fe66d
                                
                            label_1401fe588:
                                zmm0 = _mm_add_epi64(zmm0, arg6)
                                
                                if ((rcx_11 & 4) != 0)
                                label_1401fe66d:
                                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                                    
                                    if ((rcx_11 & 8) != 0)
                                        zmm2 = _mm_insert_epi32(zmm2, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1401fe596:
                                    
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
                        goto label_1401ff091
                    
                    goto label_1401feb90
                
                var_5f8[0] = zmm7[0]
                zmm5 = _mm_add_ps(zmm5, zmm9)
                
                if ((temp0_375 & 2) != 0)
                label_1401ff091:
                    var_5f8[1] = __extractps_memd_xmmps_immb(zmm7, 1)
                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm6)
                    zmm5 = __mulps_xmmps_memps(zmm5, data_142dd3fa0)
                    
                    if ((temp0_375 & 4) == 0)
                        goto label_1401feba4
                    
                    goto label_1401ff0ad
                
            label_1401feb90:
                zmm2 = _mm_cmpeq_epi32(zmm2, zmm6)
                zmm5 = __mulps_xmmps_memps(zmm5, data_142dd3fa0)
                
                if ((temp0_375 & 4) == 0)
                label_1401feba4:
                    zmm2 &= not.o(zmm5)
                    
                    if ((temp0_375 & 8) != 0)
                        goto label_1401ff0c2
                    
                    goto label_1401febb4
                
            label_1401ff0ad:
                var_5f8[2] = __extractps_memd_xmmps_immb(zmm7, 2)
                zmm2 &= not.o(zmm5)
                
                if ((temp0_375 & 8) != 0)
                label_1401ff0c2:
                    var_5f8[3] = __extractps_memd_xmmps_immb(zmm7, 3)
                    zmm5 = var_458_1
                    
                    if ((temp0_375 & 1) == 0)
                        goto label_1401febc3
                    
                    goto label_1401ff0dc
                
            label_1401febb4:
                zmm5 = var_458_1
                
                if ((temp0_375 & 1) == 0)
                label_1401febc3:
                    zmm1 = _mm_add_ps(zmm1, zmm9)
                    
                    if ((temp0_375 & 2) != 0)
                        goto label_1401ff0ef
                    
                    goto label_1401febd0
                
            label_1401ff0dc:
                var_5e8[0] = zmm2.d
                zmm1 = _mm_add_ps(zmm1, zmm9)
                
                if ((temp0_375 & 2) != 0)
                label_1401ff0ef:
                    var_5e8[1] = __pextrd_memd_xmmdq_immb(zmm2, 1)
                    zmm0 = _mm_cmpeq_epi32(zmm0, zmm6)
                    zmm1 = __mulps_xmmps_memps(zmm1, data_142dd3fa0)
                    
                    if ((temp0_375 & 4) == 0)
                        goto label_1401febe4
                    
                    goto label_1401ff10b
                
            label_1401febd0:
                zmm0 = _mm_cmpeq_epi32(zmm0, zmm6)
                zmm1 = __mulps_xmmps_memps(zmm1, data_142dd3fa0)
                
                if ((temp0_375 & 4) != 0)
                label_1401ff10b:
                    var_5e8[2] = __pextrd_memd_xmmdq_immb(zmm2, 2)
                    zmm7 = _mm_mul_ps(zmm7, zmm7)
                    zmm0 &= not.o(zmm1)
                    
                    if ((temp0_375 & 8) != 0)
                        var_5e8[3] = __pextrd_memd_xmmdq_immb(zmm2, 3)
                else
                label_1401febe4:
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
                        goto label_1401ff145
                    
                    goto label_1401fec6b
                
                var_5d8[3] = __pextrd_memd_xmmdq_immb(zmm0, 3)
                zmm1 = _mm_and_ps(zmm1, zmm2)
                zmm3 = var_418_1
                
                if ((temp0_375 & 1) != 0)
                label_1401ff145:
                    var_5c8[0].d = zmm1.d
                    arg6 = zmm15
                    
                    if ((temp0_375 & 2) == 0)
                        goto label_1401fec76
                    
                    goto label_1401ff159
                
            label_1401fec6b:
                arg6 = zmm15
                
                if ((temp0_375 & 2) == 0)
                label_1401fec76:
                    
                    if ((temp0_375 & 4) != 0)
                        goto label_1401ff16a
                    
                    goto label_1401fec7f
                
            label_1401ff159:
                var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm1, 1)
                
                if ((temp0_375 & 4) == 0)
                label_1401fec7f:
                    
                    if ((temp0_375 & 8) != 0)
                        var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm1, 3)
                else
                label_1401ff16a:
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
                            goto label_1401ff1aa
                        
                        goto label_1401fee52
                    
                    var_5f8[0] = zmm1.d
                    
                    if ((temp0_455 & 2) != 0)
                    label_1401ff1aa:
                        var_5f8[1] = zmm8[0].d
                        zmm5 = var_458_1
                        
                        if ((temp0_455 & 4) == 0)
                            goto label_1401fee61
                        
                        goto label_1401ff1c3
                    
                label_1401fee52:
                    zmm5 = var_458_1
                    
                    if ((temp0_455 & 4) == 0)
                    label_1401fee61:
                        
                        if ((temp0_455 & 8) != 0)
                            goto label_1401ff1d3
                        
                        goto label_1401fee6a
                    
                label_1401ff1c3:
                    var_5f8[2] = zmm15[0]
                    
                    if ((temp0_455 & 8) == 0)
                    label_1401fee6a:
                        zmm1 = _mm_insert_ps(zmm1, zmm8, 0x10)
                        
                        if ((temp0_455 & 1) != 0)
                            var_5e8[0] = zmm2.d
                    else
                    label_1401ff1d3:
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
                            goto label_1401ff204
                        
                        goto label_1401fef34
                    
                    var_5d8[0] = zmm0.d
                    zmm3 = _mm_sub_ps(temp0_482, zmm2)
                    zmm6 = _mm_mul_ps(zmm6, zmm6)
                    
                    if ((temp0_455 & 2) == 0)
                    label_1401fef34:
                        zmm3 = _mm_sub_ps(zmm3, zmm6)
                        zmm12 = var_4c8_2
                        
                        if ((temp0_455 & 4) != 0)
                            var_5d8[2] = zmm11.d
                    else
                    label_1401ff204:
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
                            goto label_1401ff238
                        
                        goto label_1401fef96
                    
                    var_5c8[0].d = zmm0.d
                    zmm9 = zmm15
                    
                    if ((temp0_455 & 2) != 0)
                    label_1401ff238:
                        var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((temp0_455 & 4) == 0)
                            goto label_1401fef9f
                        
                        goto label_1401ff249
                    
                label_1401fef96:
                    
                    if ((temp0_455 & 4) != 0)
                    label_1401ff249:
                        var_5c8[1].d = __extractps_memd_xmmps_immb(zmm0, 2)
                        
                        if ((temp0_455 & 8) != 0)
                            var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                    else
                    label_1401fef9f:
                        
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
                                    goto label_1401ff31e
                                
                                goto label_1401ff2b8
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_568_1[0].q, 0x20)
                            char rsi_32
                            
                            if ((rcx_19 & 8) != 0)
                            label_1401ff31e:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(var_568_1, 1), 0x30)
                                rsi_32 = _mm_movemask_ps(zmm1)
                                zmm15 = zx.o(0)
                                
                                if ((rsi_32 & 1) != 0)
                                    goto label_1401ff2cb
                                
                                goto label_1401ff332
                            
                        label_1401ff2b8:
                            rsi_32 = _mm_movemask_ps(zmm1)
                            zmm15 = zx.o(0)
                            
                            if ((rsi_32 & 1) == 0)
                            label_1401ff332:
                                
                                if ((rsi_32 & 2) != 0)
                                label_1401ff338:
                                    zmm15 = _mm_blend_epi16(zmm15, zmm0, 0xc)
                                    
                                    if ((rsi_32 & 4) != 0)
                                        goto label_1401ff2de
                                    
                                    goto label_1401ff349
                            else
                            label_1401ff2cb:
                                zmm15 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rsi_32 & 2) != 0)
                                    goto label_1401ff338
                            
                            if ((rsi_32 & 4) == 0)
                            label_1401ff349:
                                var_268 = zmm0
                                
                                if ((rsi_32 & 8) != 0)
                                    zmm15 = _mm_blend_epi16(zmm15, zmm0, 0xc0)
                            else
                            label_1401ff2de:
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
                                    goto label_1401ff43c
                                
                                goto label_1401ff3eb
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm2.q, 0x20)
                            
                            if ((rcx_19 & 8) != 0)
                            label_1401ff43c:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm2, 1), 0x30)
                                zmm12 = zx.o(0)
                                
                                if ((rsi_32 & 1) != 0)
                                    goto label_1401ff3fb
                                
                                goto label_1401ff44d
                            
                        label_1401ff3eb:
                            zmm12 = zx.o(0)
                            
                            if ((rsi_32 & 1) == 0)
                            label_1401ff44d:
                                
                                if ((rsi_32 & 2) != 0)
                                label_1401ff453:
                                    zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc)
                                    
                                    if ((rsi_32 & 4) != 0)
                                        goto label_1401ff40e
                                    
                                    goto label_1401ff464
                            else
                            label_1401ff3fb:
                                zmm12 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rsi_32 & 2) != 0)
                                    goto label_1401ff453
                            
                            if ((rsi_32 & 4) == 0)
                            label_1401ff464:
                                var_278 = zmm0
                                
                                if ((rsi_32 & 8) != 0)
                                    zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                            else
                            label_1401ff40e:
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
                                    goto label_1401ff593
                                
                                goto label_1401ff53f
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm11.q, 0x20)
                            char rsi_33
                            
                            if ((temp0_547 & 8) != 0)
                            label_1401ff593:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(zmm11, 1), 0x30)
                                rsi_33 = _mm_movemask_ps(zmm1)
                                zmm8 = zx.o(0)
                                
                                if ((rsi_33 & 1) != 0)
                                    goto label_1401ff552
                                
                                goto label_1401ff5a7
                            
                        label_1401ff53f:
                            rsi_33 = _mm_movemask_ps(zmm1)
                            zmm8 = zx.o(0)
                            
                            if ((rsi_33 & 1) == 0)
                            label_1401ff5a7:
                                
                                if ((rsi_33 & 2) != 0)
                                label_1401ff5ad:
                                    zmm8 = _mm_blend_epi16(zmm8, zmm0, 0xc)
                                    
                                    if ((rsi_33 & 4) != 0)
                                        goto label_1401ff565
                                    
                                    goto label_1401ff5be
                            else
                            label_1401ff552:
                                zmm8 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                
                                if ((rsi_33 & 2) != 0)
                                    goto label_1401ff5ad
                            
                            if ((rsi_33 & 4) == 0)
                            label_1401ff5be:
                                var_288 = zmm0
                                
                                if ((rsi_33 & 8) != 0)
                                    zmm8 = _mm_blend_epi16(zmm8, zmm0, 0xc0)
                            else
                            label_1401ff565:
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
                                    goto label_1401ff69c
                                
                                goto label_1401ff64f
                            
                            zmm1 = __insertps_xmmps_memd_immb(zmm1, *temp0_555[0].q, 0x20)
                            
                            if ((temp0_547 & 8) != 0)
                            label_1401ff69c:
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                    *_mm_extract_epi64(temp0_555, 1), 0x30)
                                zmm3 = zx.o(0)
                                
                                if ((rsi_33 & 1) != 0)
                                    goto label_1401ff65d
                                
                                goto label_1401ff6ac
                            
                        label_1401ff64f:
                            zmm3 = zx.o(0)
                            
                            if ((rsi_33 & 1) == 0)
                            label_1401ff6ac:
                                
                                if ((rsi_33 & 2) != 0)
                                label_1401ff6b2:
                                    zmm3 = _mm_blend_epi16(zmm3, zmm1, 0xc)
                                    
                                    if ((rsi_33 & 4) != 0)
                                        goto label_1401ff66f
                                    
                                    goto label_1401ff6c2
                            else
                            label_1401ff65d:
                                zmm3 = _mm_blend_epi16(zx.o(0), zmm1, 3)
                                
                                if ((rsi_33 & 2) != 0)
                                    goto label_1401ff6b2
                            
                            if ((rsi_33 & 4) == 0)
                            label_1401ff6c2:
                                var_298 = zmm1
                                
                                if ((rsi_33 & 8) != 0)
                                    zmm3 = _mm_blend_epi16(zmm3, zmm1, 0xc0)
                            else
                            label_1401ff66f:
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
                                    goto label_1401ff81d
                                
                                goto label_1401ff7ef
                            
                            if ((temp0_591 & 2) == 0)
                            label_1401ff7ef:
                                
                                if ((temp0_591 & 4) != 0)
                                label_1401ff7f3:
                                    zmm4 = _mm_blend_ps(zmm4, zmm0, 4)
                                    
                                    if ((temp0_591 & 8) != 0)
                                        goto label_1401ff82b
                                    
                                    goto label_1401ff800
                            else
                            label_1401ff81d:
                                zmm4 = _mm_blend_ps(zmm4, zmm0, 2)
                                
                                if ((temp0_591 & 4) != 0)
                                    goto label_1401ff7f3
                            
                            if ((temp0_591 & 8) != 0)
                            label_1401ff82b:
                                zmm4 = _mm_blend_ps(zmm4, zmm0, 8)
                                var_2a8 = zmm0
                                
                                if ((temp0_579 & 1) == 0)
                                    goto label_1401ff80a
                                
                                goto label_1401ff855
                            
                        label_1401ff800:
                            var_2a8 = zmm0
                            uint128_t var_2b8
                            
                            if ((temp0_579 & 1) != 0)
                            label_1401ff855:
                                zmm0 = _mm_blend_ps(var_2b8, *zmm1.q, 1)
                                
                                if ((temp0_579 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm1, 1), 0x10)
                            else
                            label_1401ff80a:
                                zmm0 = var_2b8
                                
                                if ((temp0_579 & 2) != 0)
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm1, 1), 0x10)
                            
                            if ((temp0_579 & 4) == 0)
                                if ((temp0_579 & 8) != 0)
                                    goto label_140200cdd
                                
                                goto label_1401ff87c
                            
                            zmm0 = __insertps_xmmps_memd_immb(zmm0, *temp0_587[0].q, 0x20)
                            
                            if ((temp0_579 & 8) != 0)
                            label_140200cdd:
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                    *_mm_extract_epi64(temp0_587, 1), 0x30)
                                zmm5 = zx.o(0)
                                
                                if ((temp0_591 & 1) != 0)
                                    goto label_1401ff88a
                                
                                goto label_140200cee
                            
                        label_1401ff87c:
                            zmm5 = zx.o(0)
                            
                            if ((temp0_591 & 1) != 0)
                            label_1401ff88a:
                                zmm5 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                
                                if ((temp0_591 & 2) != 0)
                                    goto label_140200cf6
                                
                                goto label_1401ff898
                            
                        label_140200cee:
                            
                            if ((temp0_591 & 2) == 0)
                            label_1401ff898:
                                
                                if ((temp0_591 & 4) != 0)
                                    zmm5 = _mm_blend_ps(zmm5, zmm0, 4)
                            else
                            label_140200cf6:
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
                                goto label_14020037e
                            
                            goto label_1401ffa19
                        
                        var_5f8[3] = __extractps_memd_xmmps_immb(temp0_619, 3)
                        zmm0 = _mm_cvtepi32_ps(zmm0)
                        zmm3 = var_418_1
                        
                        if ((temp0_128 & 1) != 0)
                        label_14020037e:
                            var_5e8[0] = zmm8[0].d
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_128 & 2) == 0)
                                goto label_1401ffa29
                            
                            goto label_140200395
                        
                    label_1401ffa19:
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                        
                        if ((temp0_128 & 2) == 0)
                        label_1401ffa29:
                            zmm5 = _mm_mul_ps(zmm5, zmm0)
                            
                            if ((temp0_128 & 4) != 0)
                                goto label_1402003aa
                            
                            goto label_1401ffa35
                        
                    label_140200395:
                        var_5e8[1] = __extractps_memd_xmmps_immb(zmm8, 1)
                        zmm5 = _mm_mul_ps(zmm5, zmm0)
                        
                        if ((temp0_128 & 4) == 0)
                        label_1401ffa35:
                            zmm15 = _mm_mul_ps(temp0_619, temp0_619)
                            zmm4 = _mm_add_ps(zmm4, zmm5)
                            
                            if ((temp0_128 & 8) != 0)
                                var_5e8[3] = __extractps_memd_xmmps_immb(zmm8, 3)
                        else
                        label_1402003aa:
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
                                goto label_1402003dc
                            
                            goto label_1401ffacc
                        
                        var_5d8[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_128 & 1) != 0)
                        label_1402003dc:
                            var_5c8[0].d = zmm0.d
                            zmm4 = var_598_2
                            
                            if ((temp0_128 & 2) == 0)
                                goto label_1401ffada
                            
                            goto label_1402003f3
                        
                    label_1401ffacc:
                        zmm4 = var_598_2
                        
                        if ((temp0_128 & 2) == 0)
                        label_1401ffada:
                            
                            if ((temp0_128 & 4) != 0)
                                goto label_140200404
                            
                            goto label_1401ffae3
                        
                    label_1402003f3:
                        var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((temp0_128 & 4) == 0)
                        label_1401ffae3:
                            
                            if ((temp0_128 & 8) != 0)
                                var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_140200404:
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
                                    goto label_140200d26
                                
                                goto label_1401ffc69
                            
                            var_5f8[2] = __pextrd_memd_xmmdq_immb(zmm1, 2)
                            zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442330)
                            zmm3 |= zmm5
                            
                            if ((temp0_648 & 8) != 0)
                            label_140200d26:
                                var_5f8[3] = __pextrd_memd_xmmdq_immb(zmm1, 3)
                                zmm3 |= zmm4
                                
                                if ((temp0_648 & 1) == 0)
                                    goto label_1401ffc7a
                                
                                goto label_140200d3b
                            
                        label_1401ffc69:
                            zmm3 |= zmm4
                            
                            if ((temp0_648 & 1) != 0)
                            label_140200d3b:
                                var_5e8[0] = zmm3[0]
                                zmm5 = zmm0 & data_143442620
                                
                                if ((temp0_648 & 2) != 0)
                                    var_5e8[1] = __pextrd_memd_xmmdq_immb(zmm3, 1)
                            else
                            label_1401ffc7a:
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
                                    goto label_140200d78
                                
                                goto label_1401ffd43
                            
                            var_5d8[3] = __pextrd_memd_xmmdq_immb(zmm4, 3)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            zmm5 = var_458_1
                            
                            if ((temp0_648 & 1) != 0)
                            label_140200d78:
                                var_5c8[0].d = zmm0.d
                                zmm4 = var_598_2
                                
                                if ((temp0_648 & 2) == 0)
                                    goto label_1401ffd51
                                
                                goto label_140200d8f
                            
                        label_1401ffd43:
                            zmm4 = var_598_2
                            
                            if ((temp0_648 & 2) == 0)
                            label_1401ffd51:
                                
                                if ((temp0_648 & 4) != 0)
                                    goto label_140200da0
                                
                                goto label_1401ffd5a
                            
                        label_140200d8f:
                            var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_648 & 4) == 0)
                            label_1401ffd5a:
                                
                                if ((temp0_648 & 8) != 0)
                                    var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_140200da0:
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
                                        goto label_140200dd7
                                    
                                    goto label_1401ffe7e
                                
                                var_5f8[0] = zmm0.d
                                zmm3 = _mm_add_epi32(zmm3, zmm4)
                                
                                if ((temp0_691 & 2) != 0)
                                label_140200dd7:
                                    var_5f8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_691 & 4) == 0)
                                        goto label_1401ffe89
                                    
                                    goto label_140200dea
                                
                            label_1401ffe7e:
                                zmm3 = _mm_cvtepi32_ps(zmm3)
                                
                                if ((temp0_691 & 4) == 0)
                                label_1401ffe89:
                                    zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                    
                                    if ((temp0_691 & 8) != 0)
                                        goto label_140200e01
                                    
                                    goto label_1401ffe98
                                
                            label_140200dea:
                                var_5f8[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                                zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                                
                                if ((temp0_691 & 8) != 0)
                                label_140200e01:
                                    var_5f8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                    zmm1 &= data_143442680
                                    
                                    if ((temp0_691 & 1) == 0)
                                        goto label_1401ffea8
                                    
                                    goto label_140200e19
                                
                            label_1401ffe98:
                                zmm1 &= data_143442680
                                
                                if ((temp0_691 & 1) == 0)
                                label_1401ffea8:
                                    zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                                    
                                    if ((temp0_691 & 2) != 0)
                                        goto label_140200e2f
                                    
                                    goto label_1401ffeb8
                                
                            label_140200e19:
                                var_5e8[0] = zmm3[0]
                                zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                                
                                if ((temp0_691 & 2) != 0)
                                label_140200e2f:
                                    var_5e8[1] = __extractps_memd_xmmps_immb(zmm3, 1)
                                    zmm1 = _mm_cvtepi32_ps(zmm1)
                                    
                                    if ((temp0_691 & 4) == 0)
                                        goto label_1401ffec3
                                    
                                    goto label_140200e42
                                
                            label_1401ffeb8:
                                zmm1 = _mm_cvtepi32_ps(zmm1)
                                
                                if ((temp0_691 & 4) != 0)
                                label_140200e42:
                                    var_5e8[2] = __extractps_memd_xmmps_immb(zmm3, 2)
                                    zmm0 = _mm_mul_ps(zmm0, zmm0)
                                    zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                                    
                                    if ((temp0_691 & 8) != 0)
                                        var_5e8[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                                else
                                label_1401ffec3:
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
                                        goto label_140200e7c
                                    
                                    goto label_1401fff3b
                                
                                var_5d8[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                                zmm0 = _mm_and_ps(zmm0, temp0_727)
                                zmm4 = var_598_2
                                
                                if ((temp0_691 & 1) != 0)
                                label_140200e7c:
                                    var_5c8[0].d = zmm0.d
                                    zmm3 = zmm6
                                    
                                    if ((temp0_691 & 2) == 0)
                                        goto label_1401fff45
                                    
                                    goto label_140200e8e
                                
                            label_1401fff3b:
                                zmm3 = zmm6
                                
                                if ((temp0_691 & 2) == 0)
                                label_1401fff45:
                                    
                                    if ((temp0_691 & 4) != 0)
                                        goto label_140200e9e
                                    
                                    goto label_1401fff4d
                                
                            label_140200e8e:
                                var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_691 & 4) == 0)
                                label_1401fff4d:
                                    
                                    if ((temp0_691 & 8) != 0)
                                        var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm0, 3)
                                else
                                label_140200e9e:
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
                                            goto label_1401fd018
                                        
                                        goto label_1401fffb2
                                    
                                    var_5f8[0] = 0
                                    
                                    if ((temp0_735 & 2) != 0)
                                    label_1401fd018:
                                        var_5f8[1] = 0
                                        
                                        if ((temp0_735 & 4) == 0)
                                            goto label_1401fffba
                                        
                                        goto label_1401fd028
                                    
                                label_1401fffb2:
                                    
                                    if ((temp0_735 & 4) == 0)
                                    label_1401fffba:
                                        
                                        if ((temp0_735 & 8) != 0)
                                            goto label_1401fd038
                                        
                                        goto label_1401fffc2
                                    
                                label_1401fd028:
                                    var_5f8[2] = 0
                                    
                                    if ((temp0_735 & 8) != 0)
                                    label_1401fd038:
                                        var_5f8[3] = 0
                                        
                                        if ((temp0_735 & 1) == 0)
                                            goto label_1401fffca
                                        
                                        goto label_1401fd048
                                    
                                label_1401fffc2:
                                    
                                    if ((temp0_735 & 1) == 0)
                                    label_1401fffca:
                                        
                                        if ((temp0_735 & 2) != 0)
                                            goto label_1401fd058
                                        
                                        goto label_1401fffd2
                                    
                                label_1401fd048:
                                    var_5e8[0] = 0
                                    
                                    if ((temp0_735 & 2) != 0)
                                    label_1401fd058:
                                        var_5e8[1] = 0
                                        
                                        if ((temp0_735 & 4) == 0)
                                            goto label_1401fffda
                                        
                                        goto label_1401fd068
                                    
                                label_1401fffd2:
                                    
                                    if ((temp0_735 & 4) == 0)
                                    label_1401fffda:
                                        
                                        if ((temp0_735 & 8) != 0)
                                            goto label_1401fd078
                                        
                                        goto label_1401fffe2
                                    
                                label_1401fd068:
                                    var_5e8[2] = 0
                                    
                                    if ((temp0_735 & 8) != 0)
                                    label_1401fd078:
                                        var_5e8[3] = 0
                                        
                                        if ((temp0_735 & 1) == 0)
                                            goto label_1401fffea
                                        
                                        goto label_1401fd088
                                    
                                label_1401fffe2:
                                    
                                    if ((temp0_735 & 1) == 0)
                                    label_1401fffea:
                                        
                                        if ((temp0_735 & 2) != 0)
                                            goto label_1401fd098
                                        
                                        goto label_1401ffff2
                                    
                                label_1401fd088:
                                    var_5d8[0] = 0
                                    
                                    if ((temp0_735 & 2) != 0)
                                    label_1401fd098:
                                        var_5d8[1] = 0
                                        
                                        if ((temp0_735 & 4) == 0)
                                            goto label_1401ffffa
                                        
                                        goto label_1401fd0a8
                                    
                                label_1401ffff2:
                                    
                                    if ((temp0_735 & 4) == 0)
                                    label_1401ffffa:
                                        
                                        if ((temp0_735 & 8) != 0)
                                            goto label_1401fd0b8
                                        
                                        goto label_140200002
                                    
                                label_1401fd0a8:
                                    var_5d8[2] = 0
                                    
                                    if ((temp0_735 & 8) != 0)
                                    label_1401fd0b8:
                                        var_5d8[3] = 0
                                        
                                        if ((temp0_735 & 1) == 0)
                                            goto label_14020000a
                                        
                                        goto label_1401fd0c8
                                    
                                label_140200002:
                                    
                                    if ((temp0_735 & 1) == 0)
                                    label_14020000a:
                                        
                                        if ((temp0_735 & 2) != 0)
                                            goto label_1401fd0d8
                                        
                                        goto label_140200012
                                    
                                label_1401fd0c8:
                                    var_5c8[0].d = 0x3f800000
                                    
                                    if ((temp0_735 & 2) != 0)
                                    label_1401fd0d8:
                                        var_5c8[0]:4.d = 0x3f800000
                                        
                                        if ((temp0_735 & 4) == 0)
                                            goto label_14020001a
                                        
                                        goto label_1401fd0e8
                                    
                                label_140200012:
                                    
                                    if ((temp0_735 & 4) != 0)
                                    label_1401fd0e8:
                                        var_5c8[1].d = 0x3f800000
                                        
                                        if ((temp0_735 & 8) != 0)
                                            var_5c8[1]:4.d = 0x3f800000
                                    else
                                    label_14020001a:
                                        
                                        if ((temp0_735 & 8) != 0)
                                            var_5c8[1]:4.d = 0x3f800000
                                
                                char temp0_737 =
                                    _mm_movemask_ps(_mm_slli_epi32(zmm0 & not.o(zmm2), 0x1f))
                                zmm15 = var_4d8_1
                                
                                if (temp0_737 != 0)
                                    if ((temp0_737 & 1) == 0)
                                        if ((temp0_737 & 2) != 0)
                                            goto label_1401fd10d
                                        
                                        goto label_140200057
                                    
                                    var_5f8[0] = 0
                                    
                                    if ((temp0_737 & 2) != 0)
                                    label_1401fd10d:
                                        var_5f8[1] = 0
                                        
                                        if ((temp0_737 & 4) == 0)
                                            goto label_14020005f
                                        
                                        goto label_1401fd11d
                                    
                                label_140200057:
                                    
                                    if ((temp0_737 & 4) == 0)
                                    label_14020005f:
                                        
                                        if ((temp0_737 & 8) != 0)
                                            goto label_1401fd12d
                                        
                                        goto label_140200067
                                    
                                label_1401fd11d:
                                    var_5f8[2] = 0
                                    
                                    if ((temp0_737 & 8) != 0)
                                    label_1401fd12d:
                                        var_5f8[3] = 0
                                        
                                        if ((temp0_737 & 1) == 0)
                                            goto label_14020006f
                                        
                                        goto label_1401fd13d
                                    
                                label_140200067:
                                    
                                    if ((temp0_737 & 1) == 0)
                                    label_14020006f:
                                        
                                        if ((temp0_737 & 2) != 0)
                                            goto label_1401fd14d
                                        
                                        goto label_140200077
                                    
                                label_1401fd13d:
                                    var_5e8[0] = 0
                                    
                                    if ((temp0_737 & 2) != 0)
                                    label_1401fd14d:
                                        var_5e8[1] = 0
                                        
                                        if ((temp0_737 & 4) == 0)
                                            goto label_14020007f
                                        
                                        goto label_1401fd15d
                                    
                                label_140200077:
                                    
                                    if ((temp0_737 & 4) == 0)
                                    label_14020007f:
                                        
                                        if ((temp0_737 & 8) != 0)
                                            goto label_1401fd16d
                                        
                                        goto label_140200087
                                    
                                label_1401fd15d:
                                    var_5e8[2] = 0
                                    
                                    if ((temp0_737 & 8) != 0)
                                    label_1401fd16d:
                                        var_5e8[3] = 0
                                        
                                        if ((temp0_737 & 1) == 0)
                                            goto label_14020008f
                                        
                                        goto label_1401fd17d
                                    
                                label_140200087:
                                    
                                    if ((temp0_737 & 1) == 0)
                                    label_14020008f:
                                        
                                        if ((temp0_737 & 2) != 0)
                                            goto label_1401fd18d
                                        
                                        goto label_140200097
                                    
                                label_1401fd17d:
                                    var_5d8[0] = 0
                                    
                                    if ((temp0_737 & 2) != 0)
                                    label_1401fd18d:
                                        var_5d8[1] = 0
                                        
                                        if ((temp0_737 & 4) == 0)
                                            goto label_14020009f
                                        
                                        goto label_1401fd19d
                                    
                                label_140200097:
                                    
                                    if ((temp0_737 & 4) == 0)
                                    label_14020009f:
                                        
                                        if ((temp0_737 & 8) != 0)
                                            goto label_1401fd1ad
                                        
                                        goto label_1402000a7
                                    
                                label_1401fd19d:
                                    var_5d8[2] = 0
                                    
                                    if ((temp0_737 & 8) != 0)
                                    label_1401fd1ad:
                                        var_5d8[3] = 0
                                        
                                        if ((temp0_737 & 1) == 0)
                                            goto label_1402000af
                                        
                                        goto label_1401fd1bd
                                    
                                label_1402000a7:
                                    
                                    if ((temp0_737 & 1) == 0)
                                    label_1402000af:
                                        
                                        if ((temp0_737 & 2) != 0)
                                            goto label_1401fd1cd
                                        
                                        goto label_1402000b7
                                    
                                label_1401fd1bd:
                                    var_5c8[0].d = 0x3f800000
                                    
                                    if ((temp0_737 & 2) != 0)
                                    label_1401fd1cd:
                                        var_5c8[0]:4.d = 0x3f800000
                                        
                                        if ((temp0_737 & 4) == 0)
                                            goto label_1402000bf
                                        
                                        goto label_1401fd1dd
                                    
                                label_1402000b7:
                                    
                                    if ((temp0_737 & 4) != 0)
                                    label_1401fd1dd:
                                        var_5c8[1].d = 0x3f800000
                                        
                                        if ((temp0_737 & 8) != 0)
                                            var_5c8[1]:4.d = 0x3f800000
                                    else
                                    label_1402000bf:
                                        
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
                                goto label_14020056e
                            
                            goto label_1402004d6
                        
                        uint128_t var_408 = _mm_insert_epi32(var_408, zx.d(*zmm7[0].q), 0)
                        
                        if ((temp0_804 & 2) != 0)
                        label_14020056e:
                            var_408 =
                                _mm_insert_epi32(var_408, zx.d(*_mm_extract_epi64(zmm7, 1)), 1)
                            zmm7 = var_5a8_1
                            zmm6 = zx.o(0)
                            
                            if ((temp0_804 & 4) == 0)
                                goto label_1402004eb
                            
                            goto label_1402005a4
                        
                    label_1402004d6:
                        zmm7 = var_5a8_1
                        zmm6 = zx.o(0)
                        
                        if ((temp0_804 & 4) != 0)
                        label_1402005a4:
                            var_408 = _mm_insert_epi32(var_408, zx.d(*zmm2.q), 2)
                            
                            if ((temp0_804 & 8) == 0)
                                zmm2 = var_408
                            else
                                zmm2 =
                                    _mm_insert_epi32(var_408, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                        else
                        label_1402004eb:
                            
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
                            goto label_140200b18
                        
                        goto label_140200604
                    
                    var_518.d = temp0_813[0]
                    zmm4 = _mm_add_ps(zmm4, zmm9)
                    
                    if ((temp0_746 & 2) != 0)
                    label_140200b18:
                        var_518:4.d = __extractps_memd_xmmps_immb(temp0_813, 1)
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm6)
                        zmm4 = __mulps_xmmps_memps(zmm4, data_142dd3fa0)
                        
                        if ((temp0_746 & 4) == 0)
                            goto label_140200618
                        
                        goto label_140200b37
                    
                label_140200604:
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm6)
                    zmm4 = __mulps_xmmps_memps(zmm4, data_142dd3fa0)
                    
                    if ((temp0_746 & 4) == 0)
                    label_140200618:
                        zmm1 &= not.o(zmm4)
                        
                        if ((temp0_746 & 8) != 0)
                            goto label_140200b4f
                        
                        goto label_140200628
                    
                label_140200b37:
                    var_518:8.d = __extractps_memd_xmmps_immb(temp0_813, 2)
                    zmm1 &= not.o(zmm4)
                    
                    if ((temp0_746 & 8) != 0)
                    label_140200b4f:
                        var_518:0xc.d = __extractps_memd_xmmps_immb(temp0_813, 3)
                        zmm4 = var_598_3
                        
                        if ((temp0_746 & 1) == 0)
                            goto label_140200636
                        
                        goto label_140200b6b
                    
                label_140200628:
                    zmm4 = var_598_3
                    
                    if ((temp0_746 & 1) != 0)
                    label_140200b6b:
                        var_508[0] = zmm1.d
                        zmm2 = _mm_add_ps(zmm2, zmm9)
                        
                        if ((temp0_746 & 2) != 0)
                            var_508[1] = __pextrd_memd_xmmdq_immb(zmm1, 1)
                    else
                    label_140200636:
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
                            goto label_140200b9d
                        
                        goto label_1402006ed
                    
                    var_4f8:0xc.d = __pextrd_memd_xmmdq_immb(zmm0, 3)
                    zmm1 = _mm_and_ps(zmm1, zmm2)
                    
                    if ((temp0_746 & 1) != 0)
                    label_140200b9d:
                        var_4e8[0] = zmm1.d
                        
                        if ((temp0_746 & 2) == 0)
                            goto label_1402006f6
                        
                        goto label_140200baf
                    
                label_1402006ed:
                    
                    if ((temp0_746 & 2) == 0)
                    label_1402006f6:
                        
                        if ((temp0_746 & 4) != 0)
                            goto label_140200bc3
                        
                        goto label_1402006ff
                    
                label_140200baf:
                    var_4e8[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                    
                    if ((temp0_746 & 4) == 0)
                    label_1402006ff:
                        
                        if ((temp0_746 & 8) != 0)
                            var_4e8[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                    else
                    label_140200bc3:
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
                                goto label_140200bee
                            
                            goto label_1402008be
                        
                        var_518.d = zmm1.d
                        
                        if ((temp0_841 & 2) != 0)
                        label_140200bee:
                            var_518:4.d = arg5[0]
                            zmm7 = var_5a8_1
                            
                            if ((temp0_841 & 4) == 0)
                                goto label_1402008cd
                            
                            goto label_140200c0a
                        
                    label_1402008be:
                        zmm7 = var_5a8_1
                        
                        if ((temp0_841 & 4) == 0)
                        label_1402008cd:
                            
                            if ((temp0_841 & 8) != 0)
                                goto label_140200c1d
                            
                            goto label_1402008d6
                        
                    label_140200c0a:
                        var_518:8.d = zmm15[0]
                        
                        if ((temp0_841 & 8) == 0)
                        label_1402008d6:
                            zmm1 = _mm_insert_ps(zmm1, arg5, 0x10)
                            
                            if ((temp0_841 & 1) != 0)
                                var_508[0] = zmm5[0]
                        else
                        label_140200c1d:
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
                                goto label_140200c52
                            
                            goto label_1402009ea
                        
                        var_4f8:0xc.d = zmm11.d
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_841 & 1) != 0)
                        label_140200c52:
                            var_4e8[0] = zmm0.d
                            zmm12 = var_4c8_2
                            
                            if ((temp0_841 & 2) == 0)
                                goto label_1402009fa
                            
                            goto label_140200c6e
                        
                    label_1402009ea:
                        zmm12 = var_4c8_2
                        
                        if ((temp0_841 & 2) == 0)
                        label_1402009fa:
                            
                            if ((temp0_841 & 4) != 0)
                                goto label_140200c82
                            
                            goto label_140200a03
                        
                    label_140200c6e:
                        var_4e8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((temp0_841 & 4) == 0)
                        label_140200a03:
                            
                            if ((temp0_841 & 8) != 0)
                                var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_140200c82:
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
                                        goto label_140200f56
                                    
                                    goto label_140200eee
                                
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_568_1.q, 0x20)
                                char r10_2
                                
                                if ((rsi_39 & 8) != 0)
                                label_140200f56:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_568_1, 1), 0x30)
                                    r10_2 = _mm_movemask_ps(zmm5)
                                    zmm12 = zx.o(0)
                                    
                                    if ((r10_2 & 1) != 0)
                                        goto label_140200f02
                                    
                                    goto label_140200f6b
                                
                            label_140200eee:
                                r10_2 = _mm_movemask_ps(zmm5)
                                zmm12 = zx.o(0)
                                
                                if ((r10_2 & 1) == 0)
                                label_140200f6b:
                                    
                                    if ((r10_2 & 2) != 0)
                                    label_140200f71:
                                        zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc)
                                        
                                        if ((r10_2 & 4) != 0)
                                            goto label_140200f15
                                        
                                        goto label_140200f82
                                else
                                label_140200f02:
                                    zmm12 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                    
                                    if ((r10_2 & 2) != 0)
                                        goto label_140200f71
                                
                                if ((r10_2 & 4) == 0)
                                label_140200f82:
                                    var_2d8 = zmm0
                                    
                                    if ((r10_2 & 8) != 0)
                                        zmm12 = _mm_blend_epi16(zmm12, zmm0, 0xc0)
                                else
                                label_140200f15:
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
                                        goto label_140201097
                                    
                                    goto label_14020103d
                                
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm7[0].q, 0x20)
                                
                                if ((rsi_39 & 8) != 0)
                                label_140201097:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm7, 1), 0x30)
                                    zmm7 = var_5a8_1
                                    zmm11 = zx.o(0)
                                    
                                    if ((r10_2 & 1) != 0)
                                        goto label_140201055
                                    
                                    goto label_1402010b0
                                
                            label_14020103d:
                                zmm7 = var_5a8_1
                                zmm11 = zx.o(0)
                                
                                if ((r10_2 & 1) == 0)
                                label_1402010b0:
                                    
                                    if ((r10_2 & 2) != 0)
                                    label_1402010b6:
                                        zmm11 = _mm_blend_epi16(zmm11, zmm0, 0xc)
                                        
                                        if ((r10_2 & 4) != 0)
                                            goto label_140201068
                                        
                                        goto label_1402010c7
                                else
                                label_140201055:
                                    zmm11 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                    
                                    if ((r10_2 & 2) != 0)
                                        goto label_1402010b6
                                
                                if ((r10_2 & 4) == 0)
                                label_1402010c7:
                                    var_2e8 = zmm0
                                    
                                    if ((r10_2 & 8) != 0)
                                        zmm11 = _mm_blend_epi16(zmm11, zmm0, 0xc0)
                                else
                                label_140201068:
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
                                        goto label_14020122d
                                    
                                    goto label_1402011ce
                                
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_568_1.q, 0x20)
                                char rax_150
                                
                                if ((temp0_961 & 8) != 0)
                                label_14020122d:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_568_1, 1), 0x30)
                                    rax_150 = _mm_movemask_ps(zmm5)
                                    zmm13 = zx.o(0)
                                    
                                    if ((rax_150 & 1) != 0)
                                        goto label_1402011df
                                    
                                    goto label_14020123f
                                
                            label_1402011ce:
                                rax_150 = _mm_movemask_ps(zmm5)
                                zmm13 = zx.o(0)
                                
                                if ((rax_150 & 1) == 0)
                                label_14020123f:
                                    
                                    if ((rax_150 & 2) != 0)
                                    label_140201243:
                                        zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc)
                                        
                                        if ((rax_150 & 4) != 0)
                                            goto label_1402011ee
                                        
                                        goto label_140201250
                                else
                                label_1402011df:
                                    zmm13 = _mm_blend_epi16(zx.o(0), zmm0, 3)
                                    
                                    if ((rax_150 & 2) != 0)
                                        goto label_140201243
                                
                                if ((rax_150 & 4) == 0)
                                label_140201250:
                                    var_2f8 = zmm0
                                    
                                    if ((rax_150 & 8) != 0)
                                        zmm13 = _mm_blend_epi16(zmm13, zmm0, 0xc0)
                                else
                                label_1402011ee:
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
                                        goto label_140201357
                                    
                                    goto label_140201304
                                
                                zmm1 = __insertps_xmmps_memd_immb(zmm1, *zmm7[0].q, 0x20)
                                
                                if ((temp0_961 & 8) != 0)
                                label_140201357:
                                    zmm1 = __insertps_xmmps_memd_immb(zmm1, 
                                        *_mm_extract_epi64(zmm7, 1), 0x30)
                                    zmm7 = var_5a8_1
                                    arg5 = zx.o(0)
                                    
                                    if ((rax_150 & 1) != 0)
                                        goto label_14020131a
                                    
                                    goto label_14020136f
                                
                            label_140201304:
                                zmm7 = var_5a8_1
                                arg5 = zx.o(0)
                                
                                if ((rax_150 & 1) == 0)
                                label_14020136f:
                                    
                                    if ((rax_150 & 2) != 0)
                                    label_140201373:
                                        arg5 = _mm_blend_epi16(arg5, zmm1, 0xc)
                                        
                                        if ((rax_150 & 4) != 0)
                                            goto label_140201329
                                        
                                        goto label_140201380
                                else
                                label_14020131a:
                                    arg5 = _mm_blend_epi16(zx.o(0), zmm1, 3)
                                    
                                    if ((rax_150 & 2) != 0)
                                        goto label_140201373
                                
                                if ((rax_150 & 4) == 0)
                                label_140201380:
                                    var_308 = zmm1
                                    
                                    if ((rax_150 & 8) != 0)
                                        arg5 = _mm_blend_epi16(arg5, zmm1, 0xc0)
                                else
                                label_140201329:
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
                                        goto label_1402014e1
                                    
                                    goto label_140201469
                                
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *var_568_1.q, 0x20)
                                char rsi_42
                                
                                if ((temp0_994 & 8) != 0)
                                label_1402014e1:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(var_568_1, 1), 0x30)
                                    rsi_42 = _mm_movemask_ps(zmm3)
                                    zmm3 = zx.o(0)
                                    
                                    if ((rsi_42 & 1) != 0)
                                        goto label_140201478
                                    
                                    goto label_1402014f4
                                
                            label_140201469:
                                rsi_42 = _mm_movemask_ps(zmm3)
                                zmm3 = zx.o(0)
                                
                                if ((rsi_42 & 1) != 0)
                                label_140201478:
                                    zmm3 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                    
                                    if ((rsi_42 & 2) != 0)
                                        goto label_1402014fa
                                    
                                    goto label_140201484
                                
                            label_1402014f4:
                                
                                if ((rsi_42 & 2) == 0)
                                label_140201484:
                                    
                                    if ((rsi_42 & 4) != 0)
                                    label_14020148a:
                                        zmm3 = _mm_blend_ps(zmm3, zmm0, 4)
                                        
                                        if ((rsi_42 & 8) != 0)
                                            goto label_14020150c
                                        
                                        goto label_140201498
                                else
                                label_1402014fa:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 2)
                                    
                                    if ((rsi_42 & 4) != 0)
                                        goto label_14020148a
                                
                                if ((rsi_42 & 8) != 0)
                                label_14020150c:
                                    zmm3 = _mm_blend_ps(zmm3, zmm0, 8)
                                    var_318 = zmm0
                                    
                                    if ((temp0_994 & 1) == 0)
                                        goto label_1402014a2
                                    
                                    goto label_140201537
                                
                            label_140201498:
                                var_318 = zmm0
                                uint128_t var_328
                                
                                if ((temp0_994 & 1) != 0)
                                label_140201537:
                                    zmm0 = _mm_blend_epi16(var_328, zx.o(*zmm2.q), 3)
                                    
                                    if ((temp0_994 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(zmm2, 1), 0x10)
                                else
                                label_1402014a2:
                                    zmm0 = var_328
                                    
                                    if ((temp0_994 & 2) != 0)
                                        zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                            *_mm_extract_epi64(zmm2, 1), 0x10)
                                
                                if ((temp0_994 & 4) == 0)
                                    if ((temp0_994 & 8) != 0)
                                        goto label_1402015a0
                                    
                                    goto label_140201555
                                
                                zmm0 = __insertps_xmmps_memd_immb(zmm0, *zmm7[0].q, 0x20)
                                
                                if ((temp0_994 & 8) != 0)
                                label_1402015a0:
                                    zmm0 = __insertps_xmmps_memd_immb(zmm0, 
                                        *_mm_extract_epi64(zmm7, 1), 0x30)
                                    zmm7 = zx.o(0)
                                    
                                    if ((rsi_42 & 1) != 0)
                                        goto label_140201561
                                    
                                    goto label_1402015af
                                
                            label_140201555:
                                zmm7 = zx.o(0)
                                
                                if ((rsi_42 & 1) == 0)
                                label_1402015af:
                                    
                                    if ((rsi_42 & 2) != 0)
                                    label_1402015b5:
                                        zmm7 = _mm_blend_ps(zmm7, zmm0, 2)
                                        
                                        if ((rsi_42 & 4) != 0)
                                            goto label_140201573
                                        
                                        goto label_1402015c5
                                else
                                label_140201561:
                                    zmm7 = _mm_blend_ps(zx.o(0), zmm0, 1)
                                    
                                    if ((rsi_42 & 2) != 0)
                                        goto label_1402015b5
                                
                                if ((rsi_42 & 4) == 0)
                                label_1402015c5:
                                    var_328 = zmm0
                                    
                                    if ((rsi_42 & 8) != 0)
                                        zmm7 = _mm_blend_ps(zmm7, zmm0, 8)
                                else
                                label_140201573:
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
                                    goto label_1401fce68
                                
                                goto label_140201715
                            
                            var_518:8.d = __extractps_memd_xmmps_immb(temp0_1038, 2)
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            zmm13 = _mm_add_ps(zmm13, arg5)
                            
                            if ((temp0_882 & 8) != 0)
                            label_1401fce68:
                                var_518:0xc.d = __extractps_memd_xmmps_immb(temp0_1038, 3)
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                arg5 = var_418_2
                                
                                if ((temp0_882 & 1) == 0)
                                    goto label_14020172b
                                
                                goto label_1401fce8a
                            
                        label_140201715:
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            arg5 = var_418_2
                            
                            if ((temp0_882 & 1) == 0)
                            label_14020172b:
                                zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                                
                                if ((temp0_882 & 2) != 0)
                                    goto label_1401fcea4
                                
                                goto label_14020173b
                            
                        label_1401fce8a:
                            var_508[0] = zmm13.d
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((temp0_882 & 2) != 0)
                            label_1401fcea4:
                                var_508[1] = __extractps_memd_xmmps_immb(zmm13, 1)
                                zmm7 = _mm_mul_ps(zmm7, zmm0)
                                
                                if ((temp0_882 & 4) == 0)
                                    goto label_140201747
                                
                                goto label_1401fcebc
                            
                        label_14020173b:
                            zmm7 = _mm_mul_ps(zmm7, zmm0)
                            
                            if ((temp0_882 & 4) != 0)
                            label_1401fcebc:
                                var_508[2] = __extractps_memd_xmmps_immb(zmm13, 2)
                                zmm12 = _mm_mul_ps(temp0_1038, temp0_1038)
                                zmm3 = _mm_add_ps(zmm3, zmm7)
                                
                                if ((temp0_882 & 8) != 0)
                                    var_508[3] = __extractps_memd_xmmps_immb(zmm13, 3)
                            else
                            label_140201747:
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
                                    goto label_1401fcef4
                                
                                goto label_1402017ee
                            
                            var_4f8:0xc.d = __extractps_memd_xmmps_immb(zmm3, 3)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((temp0_882 & 1) != 0)
                            label_1401fcef4:
                                var_4e8[0] = zmm0.d
                                
                                if ((temp0_882 & 2) == 0)
                                    goto label_1402017f7
                                
                                goto label_1401fcf06
                            
                        label_1402017ee:
                            
                            if ((temp0_882 & 2) == 0)
                            label_1402017f7:
                                
                                if ((temp0_882 & 4) != 0)
                                    goto label_1401fcf1a
                                
                                goto label_140201800
                            
                        label_1401fcf06:
                            var_4e8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((temp0_882 & 4) == 0)
                            label_140201800:
                                
                                if ((temp0_882 & 8) != 0)
                                    var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_1401fcf1a:
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
                                        goto label_1401fcf53
                                    
                                    goto label_140201988
                                
                                var_518:8.d = __pextrd_memd_xmmdq_immb(zmm2, 2)
                                zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442330)
                                zmm3 |= zmm5
                                
                                if ((temp0_1070 & 8) != 0)
                                label_1401fcf53:
                                    var_518:0xc.d = __pextrd_memd_xmmdq_immb(zmm2, 3)
                                    zmm3 |= zmm4
                                    
                                    if ((temp0_1070 & 1) == 0)
                                        goto label_140201999
                                    
                                    goto label_1401fcf6b
                                
                            label_140201988:
                                zmm3 |= zmm4
                                
                                if ((temp0_1070 & 1) != 0)
                                label_1401fcf6b:
                                    var_508[0] = zmm3[0]
                                    zmm5 = zmm0 & data_143442620
                                    
                                    if ((temp0_1070 & 2) != 0)
                                        var_508[1] = __pextrd_memd_xmmdq_immb(zmm3, 1)
                                else
                                label_140201999:
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
                                        goto label_1401fcfa5
                                    
                                    goto label_140201a67
                                
                                var_4f8:0xc.d = __pextrd_memd_xmmdq_immb(zmm4, 3)
                                zmm0 = _mm_and_ps(zmm0, zmm2)
                                
                                if ((temp0_1070 & 1) != 0)
                                label_1401fcfa5:
                                    var_4e8[0] = zmm0.d
                                    zmm4 = var_598_3
                                    
                                    if ((temp0_1070 & 2) == 0)
                                        goto label_140201a75
                                    
                                    goto label_1401fcfbf
                                
                            label_140201a67:
                                zmm4 = var_598_3
                                
                                if ((temp0_1070 & 2) == 0)
                                label_140201a75:
                                    
                                    if ((temp0_1070 & 4) != 0)
                                        goto label_1401fcfd3
                                    
                                    goto label_140201a7e
                                
                            label_1401fcfbf:
                                var_4e8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                                
                                if ((temp0_1070 & 4) == 0)
                                label_140201a7e:
                                    
                                    if ((temp0_1070 & 8) != 0)
                                        var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                else
                                label_1401fcfd3:
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
                                            goto label_1401fd20f
                                        
                                        goto label_140201ba4
                                    
                                    var_518.d = zmm0.d
                                    zmm3 = _mm_add_epi32(zmm3, zmm4)
                                    
                                    if ((temp0_1115 & 2) != 0)
                                    label_1401fd20f:
                                        var_518:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                                        zmm3 = _mm_cvtepi32_ps(zmm3)
                                        
                                        if ((temp0_1115 & 4) == 0)
                                            goto label_140201baf
                                        
                                        goto label_1401fd225
                                    
                                label_140201ba4:
                                    zmm3 = _mm_cvtepi32_ps(zmm3)
                                    
                                    if ((temp0_1115 & 4) == 0)
                                    label_140201baf:
                                        zmm3 = _mm_div_ps(zmm3, zmm5)
                                        
                                        if ((temp0_1115 & 8) != 0)
                                            goto label_1401fd23b
                                        
                                        goto label_140201bba
                                    
                                label_1401fd225:
                                    var_518:8.d = __extractps_memd_xmmps_immb(zmm0, 2)
                                    zmm3 = _mm_div_ps(zmm3, zmm5)
                                    
                                    if ((temp0_1115 & 8) != 0)
                                    label_1401fd23b:
                                        var_518:0xc.d = __extractps_memd_xmmps_immb(zmm0, 3)
                                        zmm2 &= data_143442680
                                        
                                        if ((temp0_1115 & 1) == 0)
                                            goto label_140201bca
                                        
                                        goto label_1401fd256
                                    
                                label_140201bba:
                                    zmm2 &= data_143442680
                                    
                                    if ((temp0_1115 & 1) == 0)
                                    label_140201bca:
                                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                                        
                                        if ((temp0_1115 & 2) != 0)
                                            goto label_1401fd26f
                                        
                                        goto label_140201bda
                                    
                                label_1401fd256:
                                    var_508[0] = zmm3[0]
                                    zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                                    
                                    if ((temp0_1115 & 2) != 0)
                                    label_1401fd26f:
                                        var_508[1] = __extractps_memd_xmmps_immb(zmm3, 1)
                                        zmm2 = _mm_cvtepi32_ps(zmm2)
                                        
                                        if ((temp0_1115 & 4) == 0)
                                            goto label_140201be5
                                        
                                        goto label_1401fd285
                                    
                                label_140201bda:
                                    zmm2 = _mm_cvtepi32_ps(zmm2)
                                    
                                    if ((temp0_1115 & 4) != 0)
                                    label_1401fd285:
                                        var_508[2] = __extractps_memd_xmmps_immb(zmm3, 2)
                                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                                        zmm2 = __divps_xmmps_memps(zmm2, data_1434426a0)
                                        
                                        if ((temp0_1115 & 8) != 0)
                                            var_508[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                                    else
                                    label_140201be5:
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
                                            goto label_1401fd2c0
                                        
                                        goto label_140201c62
                                    
                                    var_4f8:0xc.d = __extractps_memd_xmmps_immb(zmm2, 3)
                                    zmm0 = _mm_and_ps(zmm0, temp0_1151)
                                    zmm4 = zmm7
                                    
                                    if ((temp0_1115 & 1) != 0)
                                    label_1401fd2c0:
                                        var_4e8[0] = zmm0.d
                                        
                                        if ((temp0_1115 & 2) == 0)
                                            goto label_140201c6a
                                        
                                        goto label_1401fd2d1
                                    
                                label_140201c62:
                                    
                                    if ((temp0_1115 & 2) == 0)
                                    label_140201c6a:
                                        
                                        if ((temp0_1115 & 4) != 0)
                                            goto label_1401fd2e4
                                        
                                        goto label_140201c72
                                    
                                label_1401fd2d1:
                                    var_4e8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                                    
                                    if ((temp0_1115 & 4) == 0)
                                    label_140201c72:
                                        
                                        if ((temp0_1115 & 8) != 0)
                                            var_4e8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                                    else
                                    label_1401fd2e4:
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
                                                goto label_1401fd30f
                                            
                                            goto label_140201cdb
                                        
                                        var_518.d = 0
                                        
                                        if ((temp0_1161 & 2) != 0)
                                        label_1401fd30f:
                                            var_518:4.d = 0
                                            
                                            if ((temp0_1161 & 4) == 0)
                                                goto label_140201ce3
                                            
                                            goto label_1401fd322
                                        
                                    label_140201cdb:
                                        
                                        if ((temp0_1161 & 4) == 0)
                                        label_140201ce3:
                                            
                                            if ((temp0_1161 & 8) != 0)
                                                goto label_1401fd335
                                            
                                            goto label_140201ceb
                                        
                                    label_1401fd322:
                                        var_518:8.d = 0
                                        
                                        if ((temp0_1161 & 8) != 0)
                                        label_1401fd335:
                                            var_518:0xc.d = 0
                                            
                                            if ((temp0_1161 & 1) == 0)
                                                goto label_140201cf3
                                            
                                            goto label_1401fd348
                                        
                                    label_140201ceb:
                                        
                                        if ((temp0_1161 & 1) == 0)
                                        label_140201cf3:
                                            
                                            if ((temp0_1161 & 2) != 0)
                                                goto label_1401fd35b
                                            
                                            goto label_140201cfb
                                        
                                    label_1401fd348:
                                        var_508[0] = 0
                                        
                                        if ((temp0_1161 & 2) != 0)
                                        label_1401fd35b:
                                            var_508[1] = 0
                                            
                                            if ((temp0_1161 & 4) == 0)
                                                goto label_140201d03
                                            
                                            goto label_1401fd36e
                                        
                                    label_140201cfb:
                                        
                                        if ((temp0_1161 & 4) == 0)
                                        label_140201d03:
                                            
                                            if ((temp0_1161 & 8) != 0)
                                                goto label_1401fd381
                                            
                                            goto label_140201d0b
                                        
                                    label_1401fd36e:
                                        var_508[2] = 0
                                        
                                        if ((temp0_1161 & 8) != 0)
                                        label_1401fd381:
                                            var_508[3] = 0
                                            
                                            if ((temp0_1161 & 1) == 0)
                                                goto label_140201d13
                                            
                                            goto label_1401fd394
                                        
                                    label_140201d0b:
                                        
                                        if ((temp0_1161 & 1) == 0)
                                        label_140201d13:
                                            
                                            if ((temp0_1161 & 2) != 0)
                                                goto label_1401fd3a7
                                            
                                            goto label_140201d1b
                                        
                                    label_1401fd394:
                                        var_4f8.d = 0
                                        
                                        if ((temp0_1161 & 2) != 0)
                                        label_1401fd3a7:
                                            var_4f8:4.d = 0
                                            
                                            if ((temp0_1161 & 4) == 0)
                                                goto label_140201d23
                                            
                                            goto label_1401fd3ba
                                        
                                    label_140201d1b:
                                        
                                        if ((temp0_1161 & 4) == 0)
                                        label_140201d23:
                                            
                                            if ((temp0_1161 & 8) != 0)
                                                goto label_1401fd3cd
                                            
                                            goto label_140201d2b
                                        
                                    label_1401fd3ba:
                                        var_4f8:8.d = 0
                                        
                                        if ((temp0_1161 & 8) != 0)
                                        label_1401fd3cd:
                                            var_4f8:0xc.d = 0
                                            
                                            if ((temp0_1161 & 1) == 0)
                                                goto label_140201d33
                                            
                                            goto label_1401fd3e0
                                        
                                    label_140201d2b:
                                        
                                        if ((temp0_1161 & 1) == 0)
                                        label_140201d33:
                                            
                                            if ((temp0_1161 & 2) != 0)
                                                goto label_1401fd3f3
                                            
                                            goto label_140201d3b
                                        
                                    label_1401fd3e0:
                                        var_4e8[0] = 0x3f800000
                                        
                                        if ((temp0_1161 & 2) != 0)
                                        label_1401fd3f3:
                                            var_4e8[1] = 0x3f800000
                                            
                                            if ((temp0_1161 & 4) == 0)
                                                goto label_140201d43
                                            
                                            goto label_1401fd406
                                        
                                    label_140201d3b:
                                        
                                        if ((temp0_1161 & 4) != 0)
                                        label_1401fd406:
                                            var_4e8[2] = 0x3f800000
                                            
                                            if ((temp0_1161 & 8) != 0)
                                                var_4e8[3] = 0x3f800000
                                        else
                                        label_140201d43:
                                            
                                            if ((temp0_1161 & 8) != 0)
                                                var_4e8[3] = 0x3f800000
                                    
                                    char temp0_1164 = _mm_movemask_ps(_mm_slli_epi32(
                                        _mm_andnot_ps(zmm0, zmm1), 0x1f))
                                    
                                    if (temp0_1164 != 0)
                                        if ((temp0_1164 & 1) == 0)
                                            if ((temp0_1164 & 2) != 0)
                                                goto label_1401fd431
                                            
                                            goto label_140201d78
                                        
                                        var_518.d = 0
                                        
                                        if ((temp0_1164 & 2) != 0)
                                        label_1401fd431:
                                            var_518:4.d = 0
                                            
                                            if ((temp0_1164 & 4) == 0)
                                                goto label_140201d80
                                            
                                            goto label_1401fd444
                                        
                                    label_140201d78:
                                        
                                        if ((temp0_1164 & 4) == 0)
                                        label_140201d80:
                                            
                                            if ((temp0_1164 & 8) != 0)
                                                goto label_1401fd457
                                            
                                            goto label_140201d88
                                        
                                    label_1401fd444:
                                        var_518:8.d = 0
                                        
                                        if ((temp0_1164 & 8) != 0)
                                        label_1401fd457:
                                            var_518:0xc.d = 0
                                            
                                            if ((temp0_1164 & 1) == 0)
                                                goto label_140201d90
                                            
                                            goto label_1401fd46a
                                        
                                    label_140201d88:
                                        
                                        if ((temp0_1164 & 1) == 0)
                                        label_140201d90:
                                            
                                            if ((temp0_1164 & 2) != 0)
                                                goto label_1401fd47d
                                            
                                            goto label_140201d98
                                        
                                    label_1401fd46a:
                                        var_508[0] = 0
                                        
                                        if ((temp0_1164 & 2) != 0)
                                        label_1401fd47d:
                                            var_508[1] = 0
                                            
                                            if ((temp0_1164 & 4) == 0)
                                                goto label_140201da0
                                            
                                            goto label_1401fd490
                                        
                                    label_140201d98:
                                        
                                        if ((temp0_1164 & 4) == 0)
                                        label_140201da0:
                                            
                                            if ((temp0_1164 & 8) != 0)
                                                goto label_1401fd4a3
                                            
                                            goto label_140201da8
                                        
                                    label_1401fd490:
                                        var_508[2] = 0
                                        
                                        if ((temp0_1164 & 8) != 0)
                                        label_1401fd4a3:
                                            var_508[3] = 0
                                            
                                            if ((temp0_1164 & 1) == 0)
                                                goto label_140201db0
                                            
                                            goto label_1401fd4b6
                                        
                                    label_140201da8:
                                        
                                        if ((temp0_1164 & 1) == 0)
                                        label_140201db0:
                                            
                                            if ((temp0_1164 & 2) != 0)
                                                goto label_1401fd4c9
                                            
                                            goto label_140201db8
                                        
                                    label_1401fd4b6:
                                        var_4f8.d = 0
                                        
                                        if ((temp0_1164 & 2) != 0)
                                        label_1401fd4c9:
                                            var_4f8:4.d = 0
                                            
                                            if ((temp0_1164 & 4) == 0)
                                                goto label_140201dc0
                                            
                                            goto label_1401fd4dc
                                        
                                    label_140201db8:
                                        
                                        if ((temp0_1164 & 4) == 0)
                                        label_140201dc0:
                                            
                                            if ((temp0_1164 & 8) != 0)
                                                goto label_1401fd4ef
                                            
                                            goto label_140201dc8
                                        
                                    label_1401fd4dc:
                                        var_4f8:8.d = 0
                                        
                                        if ((temp0_1164 & 8) != 0)
                                        label_1401fd4ef:
                                            var_4f8:0xc.d = 0
                                            
                                            if ((temp0_1164 & 1) == 0)
                                                goto label_140201dd0
                                            
                                            goto label_1401fd502
                                        
                                    label_140201dc8:
                                        
                                        if ((temp0_1164 & 1) == 0)
                                        label_140201dd0:
                                            
                                            if ((temp0_1164 & 2) != 0)
                                                goto label_1401fd515
                                            
                                            goto label_140201dd8
                                        
                                    label_1401fd502:
                                        var_4e8[0] = 0x3f800000
                                        
                                        if ((temp0_1164 & 2) != 0)
                                        label_1401fd515:
                                            var_4e8[1] = 0x3f800000
                                            
                                            if ((temp0_1164 & 4) == 0)
                                                goto label_140201de0
                                            
                                            goto label_1401fd528
                                        
                                    label_140201dd8:
                                        
                                        if ((temp0_1164 & 4) != 0)
                                        label_1401fd528:
                                            var_4e8[2] = 0x3f800000
                                            
                                            if ((temp0_1164 & 8) != 0)
                                                var_4e8[3] = 0x3f800000
                                        else
                                        label_140201de0:
                                            
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
                    label_1401fcd43:
                        var_5f8[1] = __extractps_memd_xmmps_immb(zmm7, 1)
                        
                        if ((temp0_740 & 4) == 0)
                            goto label_140201ea2
                        
                        goto label_1401fcd53
                else if ((temp0_740 & 2) != 0)
                    goto label_1401fcd43
                
                if ((temp0_740 & 4) == 0)
                label_140201ea2:
                    zmm5 = _mm_mul_ps(var_508, zmm15)
                    zmm3 = _mm_mul_ps(var_5e8, zmm0)
                    
                    if ((temp0_740 & 8) != 0)
                        goto label_1401fcd6a
                    
                    goto label_140201eb1
                
            label_1401fcd53:
                var_5f8[2] = __extractps_memd_xmmps_immb(zmm7, 2)
                zmm5 = _mm_mul_ps(var_508, zmm15)
                zmm3 = _mm_mul_ps(var_5e8, zmm0)
                
                if ((temp0_740 & 8) != 0)
                label_1401fcd6a:
                    var_5f8[3] = __extractps_memd_xmmps_immb(zmm7, 3)
                    zmm5 = _mm_add_ps(zmm5, zmm3)
                    
                    if ((temp0_740 & 1) == 0)
                        goto label_140201ebc
                    
                    goto label_1401fcd7d
                
            label_140201eb1:
                zmm5 = _mm_add_ps(zmm5, zmm3)
                
                if ((temp0_740 & 1) != 0)
                label_1401fcd7d:
                    var_5e8[0] = zmm5[0]
                    
                    if ((temp0_740 & 2) != 0)
                    label_1401fcd8b:
                        var_5e8[1] = __extractps_memd_xmmps_immb(zmm5, 1)
                        
                        if ((temp0_740 & 4) == 0)
                            goto label_140201ecc
                        
                        goto label_1401fcd9b
                else
                label_140201ebc:
                    
                    if ((temp0_740 & 2) != 0)
                        goto label_1401fcd8b
                
                if ((temp0_740 & 4) == 0)
                label_140201ecc:
                    zmm1 = _mm_mul_ps(var_4f8, zmm15)
                    zmm11 = _mm_mul_ps(zmm11, zmm0)
                    
                    if ((temp0_740 & 8) != 0)
                        goto label_1401fcdb3
                    
                    goto label_140201edc
                
            label_1401fcd9b:
                var_5e8[2] = __extractps_memd_xmmps_immb(zmm5, 2)
                zmm1 = _mm_mul_ps(var_4f8, zmm15)
                zmm11 = _mm_mul_ps(zmm11, zmm0)
                
                if ((temp0_740 & 8) != 0)
                label_1401fcdb3:
                    var_5e8[3] = __extractps_memd_xmmps_immb(zmm5, 3)
                    zmm1 = _mm_add_ps(zmm1, zmm11)
                    
                    if ((temp0_740 & 1) == 0)
                        goto label_140201ee8
                    
                    goto label_1401fcdc7
                
            label_140201edc:
                zmm1 = _mm_add_ps(zmm1, zmm11)
                
                if ((temp0_740 & 1) != 0)
                label_1401fcdc7:
                    var_5d8[0] = zmm1.d
                    
                    if ((temp0_740 & 2) != 0)
                    label_1401fcdd5:
                        var_5d8[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                        
                        if ((temp0_740 & 4) == 0)
                            goto label_140201ef8
                        
                        goto label_1401fcde5
                else
                label_140201ee8:
                    
                    if ((temp0_740 & 2) != 0)
                        goto label_1401fcdd5
                
                if ((temp0_740 & 4) == 0)
                label_140201ef8:
                    zmm15 = _mm_mul_ps(zmm15, var_4e8)
                    zmm0 = _mm_mul_ps(zmm0, var_5c8)
                    
                    if ((temp0_740 & 8) != 0)
                        goto label_1401fcdfd
                    
                    goto label_140201f08
                
            label_1401fcde5:
                var_5d8[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                zmm15 = _mm_mul_ps(zmm15, var_4e8)
                zmm0 = _mm_mul_ps(zmm0, var_5c8)
                
                if ((temp0_740 & 8) != 0)
                label_1401fcdfd:
                    var_5d8[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                    zmm15 = _mm_add_ps(zmm15, zmm0)
                    
                    if ((temp0_740 & 1) == 0)
                        goto label_140201f14
                    
                    goto label_1401fce11
                
            label_140201f08:
                zmm15 = _mm_add_ps(zmm15, zmm0)
                
                if ((temp0_740 & 1) == 0)
                label_140201f14:
                    
                    if ((temp0_740 & 2) != 0)
                        goto label_1401fce20
                    
                    goto label_140201f1c
                
            label_1401fce11:
                var_5c8[0].d = zmm15[0]
                
                if ((temp0_740 & 2) != 0)
                label_1401fce20:
                    var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm15, 1)
                    
                    if ((temp0_740 & 4) == 0)
                        goto label_140201f24
                    
                    goto label_1401fce31
                
            label_140201f1c:
                
                if ((temp0_740 & 4) != 0)
                label_1401fce31:
                    var_5c8[1].d = __extractps_memd_xmmps_immb(zmm15, 2)
                    
                    if ((temp0_740 & 8) != 0)
                        var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm15, 3)
                else
                label_140201f24:
                    
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
                label_1401fcb1e:
                    var_5f8[1] = __extractps_memd_xmmps_immb(zmm6, 1)
                    
                    if ((temp0_95 & 4) == 0)
                        goto label_140201fd9
                    
                    goto label_1401fcb2e
            else if ((temp0_95 & 2) != 0)
                goto label_1401fcb1e
            
            if ((temp0_95 & 4) == 0)
            label_140201fd9:
                zmm5 = _mm_mul_ps(var_5e8, zmm1)
                
                if ((temp0_95 & 8) != 0)
                    goto label_1401fcb41
                
                goto label_140201fe4
            
        label_1401fcb2e:
            var_5f8[2] = __extractps_memd_xmmps_immb(zmm6, 2)
            zmm5 = _mm_mul_ps(var_5e8, zmm1)
            
            if ((temp0_95 & 8) != 0)
            label_1401fcb41:
                var_5f8[3] = __extractps_memd_xmmps_immb(zmm6, 3)
                zmm5 = _mm_and_ps(zmm5, zmm11)
                
                if ((temp0_95 & 1) == 0)
                    goto label_140201ff2
                
                goto label_1401fcb55
            
        label_140201fe4:
            zmm5 = _mm_and_ps(zmm5, zmm11)
            
            if ((temp0_95 & 1) != 0)
            label_1401fcb55:
                var_5e8[0] = zmm5[0]
                zmm6 = var_398_1
                
                if ((temp0_95 & 2) != 0)
                label_1401fcb6b:
                    var_5e8[1] = __extractps_memd_xmmps_immb(zmm5, 1)
                    
                    if ((temp0_95 & 4) == 0)
                        goto label_140202008
                    
                    goto label_1401fcb7b
            else
            label_140201ff2:
                zmm6 = var_398_1
                
                if ((temp0_95 & 2) != 0)
                    goto label_1401fcb6b
            
            if ((temp0_95 & 4) == 0)
            label_140202008:
                zmm9 = _mm_mul_ps(var_5d8, zmm1)
                
                if ((temp0_95 & 8) != 0)
                    goto label_1401fcb8f
                
                goto label_140202014
            
        label_1401fcb7b:
            var_5e8[2] = __extractps_memd_xmmps_immb(zmm5, 2)
            zmm9 = _mm_mul_ps(var_5d8, zmm1)
            
            if ((temp0_95 & 8) != 0)
            label_1401fcb8f:
                var_5e8[3] = __extractps_memd_xmmps_immb(zmm5, 3)
                zmm9 = _mm_and_ps(zmm9, zmm11)
                
                if ((temp0_95 & 1) == 0)
                    goto label_140202020
                
                goto label_1401fcba3
            
        label_140202014:
            zmm9 = _mm_and_ps(zmm9, zmm11)
            
            if ((temp0_95 & 1) != 0)
            label_1401fcba3:
                var_5d8[0] = zmm9[0]
                
                if ((temp0_95 & 2) != 0)
                    var_5d8[1] = __extractps_memd_xmmps_immb(zmm9, 1)
            else
            label_140202020:
                
                if ((temp0_95 & 2) != 0)
                    var_5d8[1] = __extractps_memd_xmmps_immb(zmm9, 1)
            
            float temp0_1217[0x4] = _mm_cmpeq_ps(data_142d3f5c0, zmm4, 6)
            zmm1 = _mm_mul_ps(zmm1, var_5c8)
            
            if ((temp0_95 & 4) == 0)
                zmm1 = _mm_and_ps(zmm1, zmm11)
                zmm5 = __andps_xmmxud_memxud(temp0_1217, data_142d3f670)
                
                if ((temp0_95 & 8) != 0)
                    goto label_1401fcbdc
                
                goto label_140202057
            
            var_5d8[2] = __extractps_memd_xmmps_immb(zmm9, 2)
            zmm1 = _mm_and_ps(zmm1, zmm11)
            zmm5 = __andps_xmmxud_memxud(temp0_1217, data_142d3f670)
            
            if ((temp0_95 & 8) != 0)
            label_1401fcbdc:
                var_5d8[3] = __extractps_memd_xmmps_immb(zmm9, 3)
                zmm1 = _mm_or_ps(zmm1, zmm5)
                zmm11 = var_4b8_1
                
                if ((temp0_95 & 1) == 0)
                    goto label_14020206d
                
                goto label_1401fcbf9
            
        label_140202057:
            zmm1 = _mm_or_ps(zmm1, zmm5)
            zmm11 = var_4b8_1
            
            if ((temp0_95 & 1) == 0)
            label_14020206d:
                zmm5 = var_3d8_1
                
                if ((temp0_95 & 2) != 0)
                    goto label_1401fcc0f
                
                goto label_14020207b
            
        label_1401fcbf9:
            var_5c8[0].d = zmm1.d
            zmm5 = var_3d8_1
            
            if ((temp0_95 & 2) != 0)
            label_1401fcc0f:
                var_5c8[0]:4.d = __extractps_memd_xmmps_immb(zmm1, 1)
                
                if ((temp0_95 & 4) == 0)
                    goto label_140202083
                
                goto label_1401fcc1f
            
        label_14020207b:
            
            if ((temp0_95 & 4) != 0)
            label_1401fcc1f:
                var_5c8[1].d = __extractps_memd_xmmps_immb(zmm1, 2)
                
                if ((temp0_95 & 8) != 0)
                    var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm1, 3)
            else
            label_140202083:
                
                if ((temp0_95 & 8) != 0)
                    var_5c8[1]:4.d = __extractps_memd_xmmps_immb(zmm1, 3)
        
        uint32_t temp0_1223 = _mm_movemask_ps(zmm11 ^ arg5)
        
        if (temp0_1223 != 0)
            char rax_170 = temp0_1223.b
            
            if ((rax_170 & 1) == 0)
                if ((rax_170 & 2) != 0)
                    goto label_1401fcc50
                
                goto label_1402020b1
            
            var_5f8[0] = 0
            
            if ((rax_170 & 2) != 0)
            label_1401fcc50:
                var_5f8[1] = 0
                
                if ((rax_170 & 4) == 0)
                    goto label_1402020b9
                
                goto label_1401fcc60
            
        label_1402020b1:
            
            if ((rax_170 & 4) == 0)
            label_1402020b9:
                
                if ((rax_170 & 8) != 0)
                    goto label_1401fcc70
                
                goto label_1402020c1
            
        label_1401fcc60:
            var_5f8[2] = 0
            
            if ((rax_170 & 8) != 0)
            label_1401fcc70:
                var_5f8[3] = 0
                
                if ((rax_170 & 1) == 0)
                    goto label_1402020c9
                
                goto label_1401fcc80
            
        label_1402020c1:
            
            if ((rax_170 & 1) == 0)
            label_1402020c9:
                
                if ((rax_170 & 2) != 0)
                    goto label_1401fcc90
                
                goto label_1402020d1
            
        label_1401fcc80:
            var_5e8[0] = 0
            
            if ((rax_170 & 2) != 0)
            label_1401fcc90:
                var_5e8[1] = 0
                
                if ((rax_170 & 4) == 0)
                    goto label_1402020d9
                
                goto label_1401fcca0
            
        label_1402020d1:
            
            if ((rax_170 & 4) == 0)
            label_1402020d9:
                
                if ((rax_170 & 8) != 0)
                    goto label_1401fccb0
                
                goto label_1402020e1
            
        label_1401fcca0:
            var_5e8[2] = 0
            
            if ((rax_170 & 8) != 0)
            label_1401fccb0:
                var_5e8[3] = 0
                
                if ((rax_170 & 1) == 0)
                    goto label_1402020e9
                
                goto label_1401fccc0
            
        label_1402020e1:
            
            if ((rax_170 & 1) == 0)
            label_1402020e9:
                
                if ((rax_170 & 2) != 0)
                    goto label_1401fccd0
                
                goto label_1402020f1
            
        label_1401fccc0:
            var_5d8[0] = 0
            
            if ((rax_170 & 2) != 0)
            label_1401fccd0:
                var_5d8[1] = 0
                
                if ((rax_170 & 4) == 0)
                    goto label_1402020f9
                
                goto label_1401fcce0
            
        label_1402020f1:
            
            if ((rax_170 & 4) == 0)
            label_1402020f9:
                
                if ((rax_170 & 8) != 0)
                    goto label_1401fccf0
                
                goto label_140202101
            
        label_1401fcce0:
            var_5d8[2] = 0
            
            if ((rax_170 & 8) != 0)
            label_1401fccf0:
                var_5d8[3] = 0
                
                if ((rax_170 & 1) == 0)
                    goto label_140202109
                
                goto label_1401fcd00
            
        label_140202101:
            
            if ((rax_170 & 1) == 0)
            label_140202109:
                
                if ((rax_170 & 2) != 0)
                    goto label_1401fcd10
                
                goto label_140202111
            
        label_1401fcd00:
            var_5c8[0].d = 0x3f800000
            
            if ((rax_170 & 2) != 0)
            label_1401fcd10:
                var_5c8[0]:4.d = 0x3f800000
                
                if ((rax_170 & 4) == 0)
                    goto label_140202119
                
                goto label_1401fcd20
            
        label_140202111:
            
            if ((rax_170 & 4) != 0)
            label_1401fcd20:
                var_5c8[1].d = 0x3f800000
                
                if ((rax_170 & 8) != 0)
                    var_5c8[1]:4.d = 0x3f800000
            else
            label_140202119:
                
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
        goto label_140202229
return i_4
