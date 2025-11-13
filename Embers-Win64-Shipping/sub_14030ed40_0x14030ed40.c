// 函数: sub_14030ed40
// 地址: 0x14030ed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg7
float var_68[0x4] = arg6
uint128_t zmm13
uint128_t var_78 = zmm13
uint128_t zmm12
uint128_t var_88 = zmm12
int32_t var_98[0x4] = arg5
float zmm10[0x4]
float var_a8[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_b8[0x4] = zmm9
uint32_t zmm8[0x4]
uint32_t var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
uint128_t* r15 = arg2
uint32_t (* r11)[0x4] = arg1
int64_t r14 = sx.q(arg11)
int32_t rcx_1 = *(&data_143442fa0 + (r14 << 2)) * *(&data_143442f80 + (r14 << 2))
uint64_t r13 = 0
int32_t rax = 0x18

if (r14 != 3)
    rax = 0

int32_t i = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
uint32_t (* var_378)[0x4] = r11
uint32_t (* var_370)[0x4] = arg4
int64_t var_368 = r14
float var_468[0x4]
uint128_t var_458
float var_448[0x4]
uint32_t var_428[0x4]
uint128_t var_418
int32_t var_3f8
float var_3d8[0x4]
uint128_t var_338
uint128_t zmm0
uint32_t zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
uint128_t zmm4
float zmm5[0x4]

if (i s> 0)
    uint128_t var_248_1 = _mm_shuffle_epi32(zx.o(arg4), 0x44)
    uint128_t var_2b8_1 = _mm_shuffle_epi32(zx.o(rax), 0) & data_1430219f0
    var_338 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
    zmm1 = arg9
    int32_t rcx_2
    rcx_2.b = 0f f>= zmm1[0]
    zmm2[0] = float.s(arg8 - 1)
    uint128_t var_2c8_1 = _mm_shuffle_epi32(zx.o(neg.d(rcx_2)), 0)
    zmm2[0] = zmm2[0] f* zmm1[0]
    int32_t rax_3 = int.d(zmm2[0])
    r13 = 0
    
    if (rax_3 s< 0)
        rax_3 = 0
    
    if (rax_3 s> arg8 - 2)
        rax_3 = arg8 - 2
    
    uint32_t var_258_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    var_458 = _mm_shuffle_epi32(zx.o(rax_3), 0)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    arg5 = _mm_cmpeq_epi32(arg5, arg5)
    zmm7 = data_142d3f670
    uint128_t* var_340_1 = r15
    int32_t i_6 = i
    
    do
        int64_t rax_5 = sx.q((r13 << 3).d)
        zmm0 = *(r15 + rax_5)
        zmm1 = *(r15 + rax_5 + 0x10)
        uint128_t var_328_1 = zmm0
        uint32_t var_3a8_1[0x4] = zmm1
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, zmm1, 0xdd), 4)
        int64_t rax_7 = sx.q(zmm0.d)
        int64_t rcx_6 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        int64_t rdx_3 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        int64_t rbp_2 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm12 = _mm_unpacklo_epi32(zx.o(*(arg3 + rdx_3 + 8)), zx.q(*(arg3 + rbp_2 + 8)))
        zmm8 = _mm_unpacklo_epi32(zx.o(*(arg3 + rax_7 + 8)), zx.q(*(arg3 + rcx_6 + 8)))
        arg7 = _mm_unpacklo_epi64(zmm8, zmm12.q)
        zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rdx_3 + 0xc)), zx.q(*(arg3 + rbp_2 + 0xc)))
        int32_t temp0_69[0x4] = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + rax_7 + 0xc)), zx.o(*(arg3 + rcx_6 + 0xc))[0].q), 
            zmm1[0].q)
        zmm0 = __pcmpeqd_xmmdq_memdq(temp0_69, data_142d3f5b0)
        char temp0_71 = _mm_movemask_ps(zmm0)
        var_448 = arg7
        uint128_t var_3e8_1 = zmm0
        uint128_t var_528
        uint128_t var_518
        int32_t var_508[0x4]
        uint32_t var_4f8[0x4]
        
        if (temp0_71 != 0)
            var_428 = zmm8
            zmm13 = zmm12
            var_468 = arg6
            zmm2 = arg7 & zmm0
            int64_t rdx_4 = sx.q(zmm2[0])
            void* rcx_8 = arg4 + rdx_4
            zmm1 = *(arg4 + rdx_4)
            int64_t rbp_3 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            void* rdx_6 = arg4 + rbp_3
            zmm12 = *(arg4 + rbp_3)
            int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            void* rbp_5 = arg4 + rbx_1
            zmm3 = *(arg4 + rbx_1)
            int64_t rdi_1 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            void* rbx_3 = arg4 + rdi_1
            zmm7 = *(arg4 + rdi_1)
            zmm4 = zmm0 & data_142fc95e0
            zmm2 = *(zx.q(zmm4.d) + rcx_8)
            zmm6 = *(zx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + rdx_6)
            arg7 = *(zx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + rbp_5)
            arg6 = *(zx.q(_mm_shuffle_epi32(zmm4, 0xe7).d) + rbx_3)
            zmm4 = zmm0 & data_142fc95f0
            arg5 = *(zx.q(zmm4.d) + rcx_8)
            zmm10 = *(zx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + rdx_6)
            zmm0 = *(zx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + rbp_5)
            zmm8 = *(zx.q(_mm_shuffle_epi32(zmm4, 0xe7).d) + rbx_3)
            
            if ((temp0_71 & 1) == 0)
                if ((temp0_71 & 2) != 0)
                    goto label_14030f82f
                
                goto label_14030f4c8
            
            var_528.d = zmm1[0]
            
            if ((temp0_71 & 2) != 0)
            label_14030f82f:
                var_528:4.d = zmm12.d
                
                if ((temp0_71 & 4) == 0)
                    goto label_14030f4d1
                
                goto label_14030f83f
            
        label_14030f4c8:
            
            if ((temp0_71 & 4) != 0)
            label_14030f83f:
                var_528:8.d = zmm3[0]
                
                if ((temp0_71 & 8) != 0)
                label_14030f84e:
                    var_528:0xc.d = zmm7[0]
                    
                    if ((temp0_71 & 1) == 0)
                        goto label_14030f4e3
                    
                    goto label_14030f85d
            else
            label_14030f4d1:
                
                if ((temp0_71 & 8) != 0)
                    goto label_14030f84e
            
            if ((temp0_71 & 1) != 0)
            label_14030f85d:
                var_518.d = zmm2[0]
                zmm3 = _mm_unpacklo_ps(zmm3, zmm7[0].q)
                zmm1 = _mm_unpacklo_ps(zmm1, zmm12.q)
                
                if ((temp0_71 & 2) != 0)
                    var_518:4.d = zmm6[0]
            else
            label_14030f4e3:
                zmm3 = _mm_unpacklo_ps(zmm3, zmm7[0].q)
                zmm1 = _mm_unpacklo_ps(zmm1, zmm12.q)
                
                if ((temp0_71 & 2) != 0)
                    var_518:4.d = zmm6[0]
            
            zmm1 = zmm1[0].q | zmm3[0].q << 0x40
            float temp0_83[0x4] = _mm_unpacklo_ps(arg7, arg6[0].q)
            float temp0_84[0x4] = _mm_unpacklo_ps(zmm2, zmm6[0].q)
            zmm12 = zmm13
            
            if ((temp0_71 & 4) != 0)
                var_518:8.d = arg7[0]
            
            zmm2 = temp0_84[0].q | temp0_83[0].q << 0x40
            zmm4 = _mm_unpacklo_ps(zmm0, zmm8[0].q)
            float temp0_86[0x4] = _mm_unpacklo_ps(arg5, zmm10[0].q)
            zmm1 = _mm_mul_ps(zmm1, zmm1)
            
            if ((temp0_71 & 8) != 0)
                var_518:0xc.d = arg6[0]
            
            zmm3 = temp0_86[0].q | zmm4.q << 0x40
            arg7 = data_142d3f670
            zmm7 = arg7
            zmm4 = _mm_sub_ps(arg7, zmm1)
            float temp0_89[0x4] = _mm_mul_ps(zmm2, zmm2)
            
            if ((temp0_71 & 1) != 0)
                var_508[0] = arg5[0]
            
            zmm4 = _mm_sub_ps(zmm4, temp0_89)
            float temp0_91[0x4] = _mm_mul_ps(zmm3, zmm3)
            arg6 = var_468
            arg7 = var_448
            
            if ((temp0_71 & 2) != 0)
                var_508[1] = zmm10[0]
            
            zmm4 = _mm_sub_ps(zmm4, temp0_91)
            arg5 = _mm_cmpeq_epi32(arg5, arg5)
            
            if ((temp0_71 & 4) != 0)
                var_508[2] = zmm0.d
            
            zmm1 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
            float temp0_95[0x4] = _mm_sqrt_ps(zmm4)
            
            if ((temp0_71 & 8) == 0)
                zmm1 = _mm_and_ps(zmm1, temp0_95)
                zmm0 = var_3e8_1
                
                if ((temp0_71 & 1) != 0)
                    goto label_14030f89b
                
                goto label_14030f5bd
            
            var_508[3] = zmm8[0]
            zmm1 = _mm_and_ps(zmm1, temp0_95)
            zmm0 = var_3e8_1
            
            if ((temp0_71 & 1) != 0)
            label_14030f89b:
                var_4f8[0] = zmm1[0]
                zmm8 = var_428
                
                if ((temp0_71 & 2) == 0)
                    goto label_14030f5cd
                
                goto label_14030f8b9
            
        label_14030f5bd:
            zmm8 = var_428
            
            if ((temp0_71 & 2) == 0)
            label_14030f5cd:
                
                if ((temp0_71 & 4) != 0)
                    goto label_14030f8cd
                
                goto label_14030f5d6
            
        label_14030f8b9:
            var_4f8[1] = _mm_shuffle_epi32(zmm1, 0xe5)[0]
            
            if ((temp0_71 & 4) == 0)
            label_14030f5d6:
                
                if ((temp0_71 & 8) != 0)
                    var_4f8[3] = _mm_shuffle_epi32(zmm1, 0xe7)[0]
            else
            label_14030f8cd:
                var_4f8[2] = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                
                if ((temp0_71 & 8) != 0)
                    var_4f8[3] = _mm_shuffle_epi32(zmm1, 0xe7)[0]
        
        zmm6 = zmm0 ^ arg5
        uint32_t temp0_98 = _mm_movemask_ps(zmm6)
        
        if (temp0_98 != 0)
            zmm2 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm12, zmm8[0].q))
            zmm1 = _mm_cmpgt_epi32(zx.o(0), arg7)
            zmm12 = _mm_unpacklo_epi32(zmm12, zmm2[0].q)
            zmm8 = _mm_unpacklo_epi32(zmm8, zmm1[0].q)
            zmm3 = _mm_cmpgt_epi32(data_1434422d0, temp0_69) | var_2c8_1
            zmm1 = zmm3 & zmm6
            uint32_t var_438[0x4]
            
            if (_mm_movemask_ps(zmm1) != 0)
                arg6 = zmm1 & not.o(arg6)
                var_438 = __andnps_xmmxud_memxud(zmm1, var_438)
            
            zmm4 = __pshufd_xmmdq_memdq_immb(var_338, 0xf5)
            zmm1 = var_2b8_1
            zmm8 = _mm_add_epi64(zmm8, zmm1)
            zmm12 = _mm_add_epi64(zmm12, zmm1)
            zmm10 = zmm3 & not.o(zmm6)
            uint32_t temp0_110 = _mm_movemask_ps(zmm10)
            
            if (temp0_110 == 0)
                goto label_14030f914
            
            zmm13 = _mm_add_epi32(temp0_69, arg5)
            float var_3e8_2[0x4]
            float var_3b8[0x4]
            float var_398[0x4]
            uint128_t var_358
            uint64_t rdi_8
            
            if (not(zx.o(arg9)[0] f>= 1f))
                var_398 = zmm3
                var_468 = arg6
                uint32_t temp0_112[0x4] = _mm_shuffle_epi32(temp0_69, 0xf5)
                int32_t temp0_113[0x4] = __pmuludq_xmmdq_memdq(temp0_69, var_338)
                var_358 = zmm4
                zmm1 = _mm_mul_epu32(temp0_112, zmm4)
                zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(temp0_113, 0xe8), 
                    _mm_shuffle_epi32(zmm1, 0xe8)[0].q)
                uint32_t temp0_118[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
                zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_118)
                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                var_3f8.o = zmm12
                arg7 = _mm_add_epi64(zmm12, var_248_1)
                zmm12 = _mm_add_epi64(zmm8, var_248_1)
                zmm1 = _mm_unpacklo_epi32(temp0_118, zmm2[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                zmm2 = data_143442a20
                arg7 = _mm_add_epi64(_mm_add_epi64(arg7, zmm2), zmm1)
                zmm12 = _mm_add_epi64(_mm_add_epi64(zmm12, zmm2), zmm0)
                zmm0 = data_143442c10
                zmm12 &= zmm0
                arg7 &= zmm0
                zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(zmm13), var_258_1))
                zmm1 = __pcmpgtd_xmmdq_memdq(zmm0, data_142d8f750) & zmm0
                arg6 = _mm_cmpgt_epi32(zmm13, zmm1)
                arg6 = (arg6 & not.o(zmm13)) | (zmm1 & arg6)
                var_428 = zmm8
                var_3b8 = zmm6
                
                if (arg8 s< 0x100)
                    uint32_t temp0_169[0x4] = _mm_shuffle_epi32(arg6, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_169)
                    zmm0 = _mm_add_epi64(
                        _mm_unpacklo_epi32(arg6, _mm_cmpgt_epi32(zx.o(0), arg6)[0].q), zmm12)
                    char rdi_9 = temp0_110.b
                    float var_298[0x4]
                    
                    if ((rdi_9 & 1) != 0)
                        zmm4.d = zx.o(*zmm0.q)[0]
                        zmm3 = zmm4
                        zmm1 = _mm_unpacklo_epi32(temp0_169, zmm2[0].q)
                        
                        if ((rdi_9 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_298
                        zmm1 = _mm_unpacklo_epi32(temp0_169, zmm2[0].q)
                        
                        if ((rdi_9 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    
                    zmm1 = _mm_add_epi64(zmm1, arg7)
                    
                    if ((rdi_9 & 4) != 0)
                        zmm3 =
                            _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm1[0].q), zmm3, 0x30), 0x84)
                        
                        if ((rdi_9 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else if ((rdi_9 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0x20), 
                            0x24)
                    
                    zmm6 =
                        __pcmpgtd_xmmdq_memdq(__andps_xmmxud_memxud(zmm3, data_142ed6810), var_458)
                    zmm9 = zmm6 ^ arg5
                    zmm0 = zmm6 & not.o(zmm10)
                    var_298 = zmm3
                    
                    if (_mm_movemask_ps(zmm0) == 0)
                        zmm7 = arg6
                    else
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                        arg5 = (zmm6 & not.o(zmm13)) | (zmm6 & arg6)
                        zmm4 = _mm_sub_epi32(arg6, zmm0)
                        zmm1 = _mm_cmpgt_epi32(zmm4, zmm13)
                        zmm8 = _mm_cmpeq_epi32(zmm8, zmm8)
                        zmm6 &= not.o(zmm1 ^ zmm0)
                        zmm1 = zmm10 & zmm6
                        uint32_t j = _mm_movemask_ps(zmm1)
                        
                        if (j == 0)
                            zmm7 = arg5
                        else
                            zmm2 = arg6
                            
                            do
                                zmm5 = zmm4
                                float temp0_445[0x4] = _mm_shuffle_epi32(zmm4, 0x4e)
                                float temp0_446[0x4] = _mm_cmpgt_epi32(zx.o(0), temp0_445)
                                zmm4 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q), 
                                    zmm12)
                                char temp0_450 = _mm_movemask_ps(zmm1)
                                
                                if ((temp0_450 & 1) != 0)
                                    zmm1 = var_418
                                    zmm1[0] = zx.d(*zmm4.q)
                                    zmm7 = _mm_unpacklo_epi32(temp0_445, temp0_446[0].q)
                                    
                                    if ((temp0_450 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                else
                                    zmm1 = var_418
                                    zmm7 = _mm_unpacklo_epi32(temp0_445, temp0_446[0].q)
                                    
                                    if ((temp0_450 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                
                                zmm7 = _mm_add_epi64(zmm7, arg7)
                                
                                if ((temp0_450 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm7[0].q), zmm1, 0x30), 0x84)
                                    
                                    if ((temp0_450 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                else if ((temp0_450 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                var_418 = zmm1
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_142ed6810), var_458) & zmm6
                                zmm1 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm3 & zmm10) != j)
                                    zmm1 = zmm3 ^ zmm6
                                
                                zmm7 = (zmm3 & not.o(arg5)) | (zmm2 & zmm3)
                                zmm4 = _mm_sub_epi32(zmm5, zmm8)
                                zmm6 = _mm_cmpgt_epi32(zmm4, zmm13) & not.o(zmm1)
                                zmm1 = zmm6 & zmm10
                                j = _mm_movemask_ps(zmm1)
                                zmm2 = zmm5
                                arg5 = zmm7
                            while (j != 0)
                    
                    if (_mm_movemask_ps(zmm9 & not.o(zmm10)) == 0)
                        zmm2 = zmm7
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        zmm6 = var_3b8
                    else
                        zmm7 &= zmm9
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        arg6 = _mm_add_epi32(arg6, arg5)
                        zmm1 = __pcmpgtd_xmmdq_memdq(arg6, data_142d8f750) & (zmm9 ^ arg5)
                        zmm0 = zmm1 & zmm10
                        uint32_t j_1 = _mm_movemask_ps(zmm0)
                        
                        if (j_1 == 0)
                            zmm2 = zmm7
                            zmm6 = var_3b8
                        else
                            zmm6 = var_3b8
                            
                            do
                                zmm2 = _mm_shuffle_epi32(arg6, 0x4e)
                                float temp0_591[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm4 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(arg6, _mm_cmpgt_epi32(zx.o(0), arg6)[0].q), 
                                    zmm12)
                                char temp0_595 = _mm_movemask_ps(zmm0)
                                float var_3c8[0x4]
                                
                                if ((temp0_595 & 1) != 0)
                                    zmm5 = var_3c8
                                    zmm5[0] = zx.d(*zmm4.q)
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_591[0].q)
                                    
                                    if ((temp0_595 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm5, 0), 
                                            zmm5, 0xe2)
                                else
                                    zmm5 = var_3c8
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_591[0].q)
                                    
                                    if ((temp0_595 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm5, 0), 
                                            zmm5, 0xe2)
                                
                                zmm2 = _mm_add_epi64(zmm2, arg7)
                                
                                if ((temp0_595 & 4) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*zmm2[0].q), zmm5, 0x30), 0x84)
                                    
                                    if ((temp0_595 & 8) != 0)
                                        zmm5 = _mm_shuffle_ps(zmm5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm5, 0x20), 
                                            0x24)
                                else if ((temp0_595 & 8) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                            zmm5, 0x20), 
                                        0x24)
                                
                                var_3c8 = zmm5
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm5, data_142ed6810), var_458) & not.o(zmm1)
                                zmm5 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm3 & zmm10) != j_1)
                                    zmm5 = zmm3 ^ zmm1
                                
                                zmm2 = (zmm3 & not.o(zmm7)) | (zmm3 & arg6)
                                arg6 = _mm_add_epi32(arg6, arg5)
                                zmm1 = _mm_cmpgt_epi32(arg6, zx.o(0)) & zmm5
                                zmm0 = zmm1 & zmm10
                                j_1 = _mm_movemask_ps(zmm0)
                                zmm7 = zmm2
                            while (j_1 != 0)
                    
                    zmm1 = var_3e8_1 | var_398
                    zmm5 = zmm1
                    arg6 = (zmm2 & zmm10) | (var_468 & zmm1)
                    uint32_t temp0_612[0x4] = _mm_shuffle_epi32(arg6, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_612)
                    zmm0 = _mm_add_epi64(
                        _mm_unpacklo_epi32(arg6, _mm_cmpgt_epi32(zx.o(0), arg6)[0].q), zmm12)
                    float var_2d8[0x4]
                    
                    if ((rdi_9 & 1) != 0)
                        zmm4.d = zx.o(*zmm0.q)[0]
                        zmm3 = zmm4
                    else
                        zmm3 = var_2d8
                    
                    zmm8 = var_428
                    zmm4 = var_358
                    zmm1 = _mm_unpacklo_epi32(temp0_612, zmm2[0].q)
                    
                    if ((rdi_9 & 2) == 0)
                        zmm1 = _mm_add_epi64(zmm1, arg7)
                        
                        if ((rdi_9 & 4) != 0)
                            goto label_140311ac3
                        
                        goto label_1403119be
                    
                    zmm3 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), zmm3, 0xe2)
                    zmm1 = _mm_add_epi64(zmm1, arg7)
                    
                    if ((rdi_9 & 4) == 0)
                    label_1403119be:
                        
                        if ((rdi_9 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else
                    label_140311ac3:
                        zmm3 =
                            _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm1[0].q), zmm3, 0x30), 0x84)
                        
                        if ((rdi_9 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    
                    zmm1 = (_mm_sub_epi32(arg6, arg5) & zmm10) | (var_438 & zmm5)
                    var_438 = zmm1
                    zmm0 = _mm_cmpgt_epi32(zmm1, zmm13) & zmm10
                    var_2d8 = zmm3
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        var_438 = (zmm13 & zmm0) | (zmm0 & not.o(var_438))
                    
                    zmm3 = var_438
                    zmm0 = _mm_shuffle_epi32(zmm3, 0x4e)
                    zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    zmm12 = _mm_add_epi64(zmm12, 
                        _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3)[0].q))
                    float var_278[0x4]
                    
                    if ((rdi_9 & 1) != 0)
                        zmm3 = var_278
                        zmm3[0] = zx.o(*zmm12.q)[0]
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                        
                        if ((rdi_9 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), zmm3, 
                                    0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_278
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                        
                        if ((rdi_9 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), zmm3, 
                                    0), 
                                zmm3, 0xe2)
                    
                    zmm12 = var_3f8.o
                    arg7 = _mm_add_epi64(arg7, zmm0)
                    
                    if ((rdi_9 & 4) != 0)
                        zmm3 =
                            _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*arg7[0].q), zmm3, 0x30), 0x84)
                        
                        if ((rdi_9 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg7, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else if ((rdi_9 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg7, 0x4e).q), zmm3, 0x20), 
                            0x24)
                    
                    zmm7 = data_142d3f670
                    arg7 = var_448
                    zmm1 = data_142ed6810
                    zmm2 = zmm1
                    zmm0 = _mm_and_ps(var_2d8, zmm1)
                    var_278 = zmm3
                else
                    zmm0 = _mm_add_epi32(arg6, arg6)
                    uint32_t temp0_135[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_135)
                    zmm0 = _mm_add_epi64(
                        _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), zmm12)
                    char rdi_7 = temp0_110.b
                    float var_2a8[0x4]
                    
                    if ((rdi_7 & 1) != 0)
                        zmm4.d = zx.o(*zmm0.q)[0]
                        zmm3 = zmm4
                        zmm1 = _mm_unpacklo_epi32(temp0_135, zmm2[0].q)
                        
                        if ((rdi_7 & 2) != 0)
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                            zmm3 = zmm0
                    else
                        zmm3 = var_2a8
                        zmm1 = _mm_unpacklo_epi32(temp0_135, zmm2[0].q)
                        
                        if ((rdi_7 & 2) != 0)
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                            zmm3 = zmm0
                    
                    zmm1 = _mm_add_epi64(zmm1, arg7)
                    
                    if ((rdi_7 & 4) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*zmm1[0].q), zmm3, 0x30)
                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x84)
                        
                        if ((rdi_7 & 8) != 0)
                            zmm0 =
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0x20)
                            zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                    else if ((rdi_7 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0x20)
                        zmm3 = _mm_shuffle_ps(zmm3, zmm0, 0x24)
                    
                    arg5 =
                        __pcmpgtd_xmmdq_memdq(__andps_xmmxud_memxud(zmm3, data_143442cd0), var_458)
                    zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
                    zmm9 = arg5 ^ zmm2
                    var_2a8 = zmm3
                    
                    if (_mm_movemask_ps(arg5 & not.o(zmm10)) == 0)
                        zmm7 = arg6
                    else
                        zmm4 = (arg5 & not.o(zmm13)) | (arg5 & arg6)
                        zmm6 = _mm_sub_epi32(arg6, zmm2)
                        zmm1 = _mm_cmpgt_epi32(zmm6, zmm13)
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
                        arg5 &= not.o(zmm1 ^ zmm2)
                        zmm1 = zmm10 & arg5
                        uint32_t j_2 = _mm_movemask_ps(zmm1)
                        
                        if (j_2 == 0)
                            zmm7 = zmm4
                        else
                            zmm2 = arg6
                            
                            do
                                zmm8 = zmm6
                                zmm5 = _mm_add_epi32(zmm6, zmm6)
                                zmm6 = _mm_shuffle_epi32(zmm5, 0x4e)
                                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm6)
                                zmm5 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm5, _mm_cmpgt_epi32(zx.o(0), zmm5)[0].q), 
                                    zmm12)
                                char temp0_411 = _mm_movemask_ps(zmm1)
                                float var_388[0x4]
                                
                                if ((temp0_411 & 1) != 0)
                                    zmm7 = var_388
                                    zmm7[0] = zx.o(*zmm5[0].q)[0]
                                    zmm6 = _mm_unpacklo_epi32(zmm6, zmm3[0].q)
                                    
                                    if ((temp0_411 & 2) != 0)
                                        zmm7 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm5, 0x4e)[0].q), zmm7, 
                                                0), 
                                            zmm7, 0xe2)
                                else
                                    zmm7 = var_388
                                    zmm6 = _mm_unpacklo_epi32(zmm6, zmm3[0].q)
                                    
                                    if ((temp0_411 & 2) != 0)
                                        zmm7 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm5, 0x4e)[0].q), zmm7, 
                                                0), 
                                            zmm7, 0xe2)
                                
                                zmm6 = _mm_add_epi64(zmm6, arg7)
                                
                                if ((temp0_411 & 4) != 0)
                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                        _mm_shuffle_ps(zx.o(*zmm6[0].q), zmm7, 0x30), 0x84)
                                    
                                    if ((temp0_411 & 8) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm6, 0x4e)[0].q), zmm7, 
                                                0x20), 
                                            0x24)
                                else if ((temp0_411 & 8) != 0)
                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm6, 0x4e)[0].q), 
                                            zmm7, 0x20), 
                                        0x24)
                                
                                var_388 = zmm7
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm7, data_143442cd0), var_458) & arg5
                                zmm1 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm3 & zmm10) != j_2)
                                    zmm1 = zmm3 ^ arg5
                                
                                zmm7 = (zmm3 & not.o(zmm4)) | (zmm2 & zmm3)
                                zmm6 = _mm_sub_epi32(zmm8, zmm0)
                                arg5 = _mm_cmpgt_epi32(zmm6, zmm13) & not.o(zmm1)
                                zmm1 = arg5 & zmm10
                                j_2 = _mm_movemask_ps(zmm1)
                                zmm2 = zmm8
                                zmm4 = zmm7
                            while (j_2 != 0)
                    
                    if (_mm_movemask_ps(zmm9 & not.o(zmm10)) == 0)
                        zmm2 = zmm7
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                    else
                        zmm7 &= zmm9
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        arg6 = _mm_add_epi32(arg6, arg5)
                        zmm1 = __pcmpgtd_xmmdq_memdq(arg6, data_142d8f750) & (zmm9 ^ arg5)
                        zmm0 = zmm1 & zmm10
                        uint32_t j_3 = _mm_movemask_ps(zmm0)
                        
                        if (j_3 != 0)
                            do
                                zmm4 = _mm_add_epi32(arg6, arg6)
                                zmm2 = _mm_shuffle_epi32(zmm4, 0x4e)
                                float temp0_524[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm4 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4)[0].q), 
                                    zmm12)
                                char temp0_528 = _mm_movemask_ps(zmm0)
                                
                                if ((temp0_528 & 1) != 0)
                                    zmm5 = var_3d8
                                    zmm5[0] = zx.d(*zmm4.q)
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_524[0].q)
                                    
                                    if ((temp0_528 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm5, 0), 
                                            zmm5, 0xe2)
                                else
                                    zmm5 = var_3d8
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_524[0].q)
                                    
                                    if ((temp0_528 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm5, 0), 
                                            zmm5, 0xe2)
                                
                                zmm2 = _mm_add_epi64(zmm2, arg7)
                                
                                if ((temp0_528 & 4) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*zmm2[0].q), zmm5, 0x30), 0x84)
                                    
                                    if ((temp0_528 & 8) != 0)
                                        zmm5 = _mm_shuffle_ps(zmm5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm5, 0x20), 
                                            0x24)
                                else if ((temp0_528 & 8) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                            zmm5, 0x20), 
                                        0x24)
                                
                                var_3d8 = zmm5
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm5, data_143442cd0), var_458) & not.o(zmm1)
                                zmm5 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm3 & zmm10) != j_3)
                                    zmm5 = zmm3 ^ zmm1
                                
                                zmm2 = (zmm3 & not.o(zmm7)) | (zmm3 & arg6)
                                arg6 = _mm_add_epi32(arg6, arg5)
                                zmm1 = _mm_cmpgt_epi32(arg6, zx.o(0)) & zmm5
                                zmm0 = zmm1 & zmm10
                                j_3 = _mm_movemask_ps(zmm0)
                                zmm7 = zmm2
                            while (j_3 != 0)
                        else
                            zmm2 = zmm7
                    
                    zmm1 = var_3e8_1 | var_398
                    zmm5 = zmm1
                    arg6 = (zmm2 & zmm10) | (var_468 & zmm1)
                    zmm0 = _mm_add_epi32(arg6, arg6)
                    uint32_t temp0_546[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_546)
                    zmm0 = _mm_add_epi64(
                        _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), zmm12)
                    float var_2e8[0x4]
                    
                    if ((rdi_7 & 1) != 0)
                        zmm4.d = zx.o(*zmm0.q)[0]
                        zmm3 = zmm4
                    else
                        zmm3 = var_2e8
                    
                    zmm8 = var_428
                    zmm6 = var_3b8
                    zmm4 = var_358
                    zmm1 = _mm_unpacklo_epi32(temp0_546, zmm2[0].q)
                    
                    if ((rdi_7 & 2) == 0)
                        zmm1 = _mm_add_epi64(zmm1, arg7)
                        
                        if ((rdi_7 & 4) != 0)
                            goto label_140311663
                        
                        goto label_14031155b
                    
                    zmm3 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), zmm3, 0xe2)
                    zmm1 = _mm_add_epi64(zmm1, arg7)
                    
                    if ((rdi_7 & 4) == 0)
                    label_14031155b:
                        
                        if ((rdi_7 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else
                    label_140311663:
                        zmm3 =
                            _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*zmm1[0].q), zmm3, 0x30), 0x84)
                        
                        if ((rdi_7 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    
                    zmm1 = (_mm_sub_epi32(arg6, arg5) & zmm10) | (var_438 & zmm5)
                    var_438 = zmm1
                    zmm0 = _mm_cmpgt_epi32(zmm1, zmm13) & zmm10
                    var_2e8 = zmm3
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        var_438 = (zmm13 & zmm0) | (zmm0 & not.o(var_438))
                    
                    zmm2 = var_438
                    zmm2 = _mm_add_epi32(zmm2, zmm2)
                    zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                    zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                    zmm12 = _mm_add_epi64(zmm12, 
                        _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q))
                    float var_288[0x4]
                    
                    if ((rdi_7 & 1) != 0)
                        zmm3 = var_288
                        zmm3[0] = zx.o(*zmm12.q)[0]
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                        
                        if ((rdi_7 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), zmm3, 
                                    0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_288
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                        
                        if ((rdi_7 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e)[0].q), zmm3, 
                                    0), 
                                zmm3, 0xe2)
                    
                    zmm12 = var_3f8.o
                    arg7 = _mm_add_epi64(arg7, zmm0)
                    
                    if ((rdi_7 & 4) != 0)
                        zmm3 =
                            _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(*arg7[0].q), zmm3, 0x30), 0x84)
                        
                        if ((rdi_7 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg7, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else if ((rdi_7 & 8) != 0)
                        zmm3 = _mm_shuffle_ps(zmm3, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg7, 0x4e).q), zmm3, 0x20), 
                            0x24)
                    
                    zmm7 = data_142d3f670
                    arg7 = var_448
                    zmm1 = data_143442cd0
                    zmm2 = zmm1
                    zmm0 = _mm_and_ps(var_2e8, zmm1)
                    var_288 = zmm3
                
                uint32_t temp0_646[0x4] = _mm_and_ps(zmm3, zmm2)
                zmm3 = var_398 ^ arg5
                zmm5 = zx.o(0)
                
                if (arg10 != 1)
                    zmm1 = _mm_sub_epi32(temp0_646, zmm0)
                    zmm5 = zmm3
                    zmm3 = data_142d3f5b0
                    zmm2 = _mm_cmpgt_epi32(zmm1, zmm3)
                    zmm1 &= zmm2
                    zmm2 &= not.o(zmm3)
                    zmm3 = zmm5
                    zmm5 = _mm_div_ps(_mm_sub_ps(temp0_7, _mm_cvtepi32_ps(zmm0)), 
                        _mm_cvtepi32_ps(zmm2 | zmm1))
                
                rdi_8 = zx.q(r14.d)
                var_3e8_2 = _mm_and_ps(zmm5, zmm3)
                
                if (r14.d u<= 5)
                    goto label_14030f92a
                
                goto label_140311bf7
            
            zmm3 |= var_3e8_1
            zmm10 &= zmm13
            arg6 = (arg6 & zmm3) | zmm10
            var_438 = (var_438 & zmm3) | zmm10
        label_14030f914:
            rdi_8 = zx.q(r14.d)
            var_3e8_2 = zx.o(0)
            
            if (r14.d u> 5)
            label_140311bf7:
                char rcx_42 = temp0_98.b
                
                if ((rcx_42 & 1) == 0)
                    if ((rcx_42 & 2) != 0)
                        goto label_140312d01
                    
                    goto label_140311c0c
                
                var_528.d = 0
                
                if ((rcx_42 & 2) != 0)
                label_140312d01:
                    var_528:4.d = 0
                    
                    if ((rcx_42 & 4) == 0)
                        goto label_140311c15
                    
                    goto label_140312d12
                
            label_140311c0c:
                
                if ((rcx_42 & 4) == 0)
                label_140311c15:
                    
                    if ((rcx_42 & 8) != 0)
                        goto label_140312d23
                    
                    goto label_140311c1e
                
            label_140312d12:
                var_528:8.d = 0
                
                if ((rcx_42 & 8) != 0)
                label_140312d23:
                    var_528:0xc.d = 0
                    
                    if ((rcx_42 & 1) == 0)
                        goto label_140311c27
                    
                    goto label_140312d34
                
            label_140311c1e:
                
                if ((rcx_42 & 1) == 0)
                label_140311c27:
                    
                    if ((rcx_42 & 2) != 0)
                        goto label_140312d45
                    
                    goto label_140311c30
                
            label_140312d34:
                var_518.d = 0
                
                if ((rcx_42 & 2) != 0)
                label_140312d45:
                    var_518:4.d = 0
                    
                    if ((rcx_42 & 4) == 0)
                        goto label_140311c39
                    
                    goto label_140312d56
                
            label_140311c30:
                
                if ((rcx_42 & 4) == 0)
                label_140311c39:
                    
                    if ((rcx_42 & 8) != 0)
                        goto label_140312d67
                    
                    goto label_140311c42
                
            label_140312d56:
                var_518:8.d = 0
                
                if ((rcx_42 & 8) != 0)
                label_140312d67:
                    var_518:0xc.d = 0
                    
                    if ((rcx_42 & 1) == 0)
                        goto label_140311c4b
                    
                    goto label_140312d78
                
            label_140311c42:
                
                if ((rcx_42 & 1) == 0)
                label_140311c4b:
                    
                    if ((rcx_42 & 2) != 0)
                        goto label_140312d89
                    
                    goto label_140311c54
                
            label_140312d78:
                var_508[0] = 0
                
                if ((rcx_42 & 2) != 0)
                label_140312d89:
                    var_508[1] = 0
                    
                    if ((rcx_42 & 4) == 0)
                        goto label_140311c5d
                    
                    goto label_140312d9a
                
            label_140311c54:
                
                if ((rcx_42 & 4) == 0)
                label_140311c5d:
                    
                    if ((rcx_42 & 8) != 0)
                        goto label_140312dab
                    
                    goto label_140311c66
                
            label_140312d9a:
                var_508[2] = 0
                
                if ((rcx_42 & 8) != 0)
                label_140312dab:
                    var_508[3] = 0
                    
                    if ((rcx_42 & 1) == 0)
                        goto label_140311c6f
                    
                    goto label_140312dbc
                
            label_140311c66:
                
                if ((rcx_42 & 1) == 0)
                label_140311c6f:
                    
                    if ((rcx_42 & 2) != 0)
                        goto label_140312dcd
                    
                    goto label_140311c78
                
            label_140312dbc:
                var_4f8[0] = 0x3f800000
                
                if ((rcx_42 & 2) != 0)
                label_140312dcd:
                    var_4f8[1] = 0x3f800000
                    
                    if ((rcx_42 & 4) == 0)
                        goto label_140311c81
                    
                    goto label_140312dde
                
            label_140311c78:
                
                if ((rcx_42 & 4) != 0)
                label_140312dde:
                    var_4f8[2] = 0x3f800000
                    
                    if ((rcx_42 & 8) != 0)
                        var_4f8[3] = 0x3f800000
                else
                label_140311c81:
                    
                    if ((rcx_42 & 8) != 0)
                        var_4f8[3] = 0x3f800000
            else
            label_14030f92a:
                zmm9 = zmm7
                zmm7 = _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(arg6, var_338), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg6, 0xf5), zmm4), 0xe8).q)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm7)
                zmm0 = _mm_shuffle_epi32(zmm7, 0x4e)
                zmm7 = _mm_unpacklo_epi32(zmm7, zmm1[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q)
                char rsi_8
                
                switch (rdi_8)
                    case 0
                        zmm10 = zmm4
                        zmm0 = _mm_add_epi64(zmm0, zmm12)
                        zmm7 = _mm_add_epi64(zmm7, zmm8)
                        uint32_t temp0_159[0x4] = _mm_shuffle_epi32(zmm6, 0x50)
                        zmm7 &= temp0_159
                        zmm2 = _mm_shuffle_epi32(zmm6, 0xfa)
                        zmm0 &= zmm2
                        int64_t rcx_14 = _mm_shuffle_epi32(zmm7, 0x4e)[0].q
                        void* rax_13 = arg4 + rcx_14
                        int32_t rbp_6 = *(arg4 + rcx_14)
                        int64_t rcx_15 = zmm0.q
                        void* rsi_1 = arg4 + rcx_15
                        int32_t r14_1 = *(arg4 + rcx_15)
                        int64_t rcx_16 = _mm_shuffle_epi32(zmm0, 0x4e).q
                        void* rdx_7 = arg4 + rcx_16
                        int32_t r15_1 = *(arg4 + rcx_16)
                        zmm3 = data_1434426c0
                        zmm0 = temp0_159 & zmm3
                        zmm3 &= zmm2
                        void* rbx_5 = zmm7[0].q + arg4
                        int32_t r10_4 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rax_13)
                        int32_t r9 = *(zmm3[0].q + rsi_1)
                        int32_t rcx_20 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rdx_7)
                        zmm4 = data_1434426e0
                        zmm3 = temp0_159 & zmm4
                        zmm4 &= zmm2
                        int32_t rcx_22 = *(_mm_shuffle_epi32(zmm3, 0x4e).q + rax_13)
                        int32_t rcx_24 = *(zmm4.q + rsi_1)
                        var_358.d = *(_mm_shuffle_epi32(zmm4, 0x4e).q + rdx_7)
                        zmm4 = data_1434426f0
                        zmm1 = temp0_159 & zmm4
                        zmm2 &= zmm4
                        var_398[0] = *(_mm_shuffle_epi32(zmm1, 0x4e).q + rax_13)
                        int32_t rax_16 = *(zmm2[0].q + rsi_1)
                        var_468[0] = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rdx_7)
                        int32_t rcx_29 = *(zmm1[0].q + rbx_5)
                        char rsi_2 = temp0_98.b
                        
                        if ((rsi_2 & 1) == 0)
                            zmm7 = zmm9
                            
                            if ((rsi_2 & 2) != 0)
                                goto label_140310e13
                            
                            goto label_14030faf6
                        
                        var_528.d = *rbx_5
                        zmm7 = zmm9
                        
                        if ((rsi_2 & 2) != 0)
                        label_140310e13:
                            var_528:4.d = rbp_6
                            zmm4 = zmm10
                            
                            if ((rsi_2 & 4) == 0)
                                goto label_14030fb01
                            
                            goto label_140310e26
                        
                    label_14030faf6:
                        zmm4 = zmm10
                        
                        if ((rsi_2 & 4) == 0)
                        label_14030fb01:
                            
                            if ((rsi_2 & 8) != 0)
                                goto label_140310e35
                            
                            goto label_14030fb0b
                        
                    label_140310e26:
                        var_528:8.d = r14_1
                        
                        if ((rsi_2 & 8) != 0)
                        label_140310e35:
                            var_528:0xc.d = r15_1
                            
                            if ((rsi_2 & 1) == 0)
                                goto label_14030fb15
                            
                            goto label_140310e44
                        
                    label_14030fb0b:
                        
                        if ((rsi_2 & 1) != 0)
                        label_140310e44:
                            var_518.d = *(zmm0.q + rbx_5)
                            
                            if ((rsi_2 & 2) != 0)
                            label_140310e52:
                                var_518:4.d = r10_4
                                
                                if ((rsi_2 & 4) == 0)
                                    goto label_14030fb2d
                                
                                goto label_140310e61
                        else
                        label_14030fb15:
                            
                            if ((rsi_2 & 2) != 0)
                                goto label_140310e52
                        
                        if ((rsi_2 & 4) == 0)
                        label_14030fb2d:
                            i = i_6
                            
                            if ((rsi_2 & 8) != 0)
                                goto label_140310e7f
                            
                            goto label_14030fb3f
                        
                    label_140310e61:
                        var_518:8.d = r9
                        i = i_6
                        
                        if ((rsi_2 & 8) != 0)
                        label_140310e7f:
                            var_518:0xc.d = rcx_20
                            arg4 = var_370
                            r15 = var_340_1
                            
                            if ((rsi_2 & 1) == 0)
                                goto label_14030fb59
                            
                            goto label_140310e9d
                        
                    label_14030fb3f:
                        arg4 = var_370
                        r15 = var_340_1
                        
                        if ((rsi_2 & 1) == 0)
                        label_14030fb59:
                            r14 = var_368
                            
                            if ((rsi_2 & 2) != 0)
                                goto label_140310eba
                            
                            goto label_14030fb67
                        
                    label_140310e9d:
                        var_508[0] = *(zmm3[0].q + rbx_5)
                        r14 = var_368
                        
                        if ((rsi_2 & 2) != 0)
                        label_140310eba:
                            var_508[1] = rcx_22
                            
                            if ((rsi_2 & 4) == 0)
                                goto label_14030fb71
                            
                            goto label_140310ecf
                        
                    label_14030fb67:
                        
                        if ((rsi_2 & 4) == 0)
                        label_14030fb71:
                            
                            if ((rsi_2 & 8) != 0)
                                goto label_140310ee4
                            
                            goto label_14030fb7b
                        
                    label_140310ecf:
                        var_508[2] = rcx_24
                        
                        if ((rsi_2 & 8) != 0)
                        label_140310ee4:
                            var_508[3] = var_358.d
                            
                            if ((rsi_2 & 1) == 0)
                                goto label_14030fb85
                            
                            goto label_140310ef2
                        
                    label_14030fb7b:
                        
                        if ((rsi_2 & 1) == 0)
                        label_14030fb85:
                            
                            if ((rsi_2 & 2) != 0)
                                goto label_140310f07
                            
                            goto label_14030fb8f
                        
                    label_140310ef2:
                        var_4f8[0] = rcx_29
                        
                        if ((rsi_2 & 2) != 0)
                        label_140310f07:
                            var_4f8[1] = var_398[0]
                            
                            if ((rsi_2 & 4) == 0)
                                goto label_14030fb99
                            
                            goto label_140310f1c
                        
                    label_14030fb8f:
                        
                        if ((rsi_2 & 4) != 0)
                        label_140310f1c:
                            var_4f8[2] = rax_16
                            
                            if ((rsi_2 & 8) != 0)
                                var_4f8[3] = var_468[0]
                        else
                        label_14030fb99:
                            
                            if ((rsi_2 & 8) != 0)
                                var_4f8[3] = var_468[0]
                    case 1
                        zmm10 = zmm4
                        var_468 = arg6
                        var_3f8.o = zmm12
                        zmm0 = _mm_add_epi64(zmm0, zmm12)
                        var_428 = zmm8
                        zmm7 = _mm_add_epi64(zmm7, zmm8)
                        zmm3 = _mm_shuffle_epi32(zmm6, 0x50)
                        zmm7 &= zmm3
                        var_3b8 = zmm6
                        zmm4 = _mm_shuffle_epi32(zmm6, 0xfa)
                        zmm0 &= zmm4
                        int64_t rcx_30 = zmm7[0].q
                        void* rax_22 = arg4 + rcx_30
                        zmm1 = *(arg4 + rcx_30)
                        int64_t rdx_9 = _mm_shuffle_epi32(zmm7, 0x4e)[0].q
                        void* rcx_31 = arg4 + rdx_9
                        zmm13 = *(arg4 + rdx_9)
                        int64_t rdx_10 = zmm0.q
                        void* rbp_7 = arg4 + rdx_10
                        zmm7 = *(arg4 + rdx_10)
                        int64_t rdx_11 = _mm_shuffle_epi32(zmm0, 0x4e).q
                        void* rbx_6 = arg4 + rdx_11
                        arg7 = *(arg4 + rdx_11)
                        zmm2 = data_1434426c0
                        zmm0 = zmm3 & zmm2
                        zmm6 = zmm4 & zmm2
                        zmm2 = *(zmm0.q + rax_22)
                        zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rcx_31)
                        arg6 = *(zmm6[0].q + rbp_7)
                        zmm12 = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rbx_6)
                        zmm6 = data_1434426e0
                        zmm3 &= zmm6
                        zmm4 &= zmm6
                        arg5 = *(zmm3[0].q + rax_22)
                        zmm8 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rcx_31)
                        zmm5 = *(zmm4.q + rbp_7)
                        zmm6 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rbx_6)
                        char rcx_32 = temp0_98.b
                        
                        if ((rcx_32 & 1) == 0)
                            if ((rcx_32 & 2) != 0)
                                goto label_140310f49
                            
                            goto label_14030fd29
                        
                        var_528.d = zmm1[0]
                        
                        if ((rcx_32 & 2) != 0)
                        label_140310f49:
                            var_528:4.d = zmm13.d
                            zmm4 = zmm10
                            
                            if ((rcx_32 & 4) == 0)
                                goto label_14030fd34
                            
                            goto label_140310f5e
                        
                    label_14030fd29:
                        zmm4 = zmm10
                        
                        if ((rcx_32 & 4) != 0)
                        label_140310f5e:
                            var_528:8.d = zmm7[0]
                            
                            if ((rcx_32 & 8) != 0)
                            label_140310f6d:
                                var_528:0xc.d = arg7[0]
                                
                                if ((rcx_32 & 1) == 0)
                                    goto label_14030fd46
                                
                                goto label_140310f7d
                        else
                        label_14030fd34:
                            
                            if ((rcx_32 & 8) != 0)
                                goto label_140310f6d
                        
                        if ((rcx_32 & 1) != 0)
                        label_140310f7d:
                            var_518.d = zmm2[0]
                            zmm1 = _mm_unpacklo_ps(zmm1, zmm13.q)
                            zmm7 = _mm_unpacklo_ps(zmm7, arg7[0].q)
                            
                            if ((rcx_32 & 2) != 0)
                                var_518:4.d = zmm0.d
                        else
                        label_14030fd46:
                            zmm1 = _mm_unpacklo_ps(zmm1, zmm13.q)
                            zmm7 = _mm_unpacklo_ps(zmm7, arg7[0].q)
                            
                            if ((rcx_32 & 2) != 0)
                                var_518:4.d = zmm0.d
                        
                        zmm1 = zmm1[0].q | zmm7[0].q << 0x40
                        float temp0_187[0x4] = _mm_unpacklo_ps(zmm2, zmm0.q)
                        float temp0_188[0x4] = _mm_unpacklo_ps(arg6, zmm12.q)
                        
                        if ((rcx_32 & 4) != 0)
                            var_518:8.d = arg6[0]
                        
                        zmm2 = temp0_187[0].q | temp0_188[0].q << 0x40
                        zmm0 = _mm_unpacklo_ps(arg5, zmm8[0].q)
                        float temp0_190[0x4] = _mm_unpacklo_ps(zmm5, zmm6[0].q)
                        zmm1 = _mm_mul_ps(zmm1, zmm1)
                        arg7 = var_448
                        zmm7 = zmm9
                        
                        if ((rcx_32 & 8) != 0)
                            var_518:0xc.d = zmm12.d
                        
                        zmm0 = zmm0.q | temp0_190[0].q << 0x40
                        float temp0_192[0x4] = _mm_sub_ps(zmm7, zmm1)
                        float temp0_193[0x4] = _mm_mul_ps(zmm2, zmm2)
                        arg6 = var_468
                        
                        if ((rcx_32 & 1) != 0)
                            var_508[0] = arg5[0]
                        
                        float temp0_194[0x4] = _mm_sub_ps(temp0_192, temp0_193)
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        zmm12 = var_3f8.o
                        
                        if ((rcx_32 & 2) != 0)
                            var_508[1] = zmm8[0]
                        
                        float temp0_196[0x4] = _mm_sub_ps(temp0_194, zmm0)
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        
                        if ((rcx_32 & 4) != 0)
                            var_508[2] = zmm5[0]
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), temp0_196, 1)
                        zmm1 = _mm_sqrt_ps(temp0_196)
                        
                        if ((rcx_32 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            zmm6 = var_3b8
                            
                            if ((rcx_32 & 1) != 0)
                                goto label_140310fb3
                            
                            goto label_14030fe24
                        
                        var_508[3] = zmm6[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        zmm6 = var_3b8
                        
                        if ((rcx_32 & 1) != 0)
                        label_140310fb3:
                            var_4f8[0] = zmm0.d
                            zmm8 = var_428
                            
                            if ((rcx_32 & 2) == 0)
                                goto label_14030fe34
                            
                            goto label_140310fd1
                        
                    label_14030fe24:
                        zmm8 = var_428
                        
                        if ((rcx_32 & 2) == 0)
                        label_14030fe34:
                            
                            if ((rcx_32 & 4) != 0)
                                goto label_140310fe5
                            
                            goto label_14030fe3d
                        
                    label_140310fd1:
                        var_4f8[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        
                        if ((rcx_32 & 4) == 0)
                        label_14030fe3d:
                            
                            if ((rcx_32 & 8) != 0)
                                var_4f8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_140310fe5:
                            var_4f8[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                            
                            if ((rcx_32 & 8) != 0)
                                var_4f8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                    case 2
                        arg5 = zmm4
                        zmm0 = _mm_add_epi64(zmm0, zmm12)
                        zmm7 = _mm_add_epi64(zmm7, zmm8)
                        zmm2 = _mm_shuffle_epi32(zmm6, 0x50)
                        zmm7 &= zmm2
                        zmm10 = zmm6
                        uint32_t temp0_204[0x4] = _mm_shuffle_epi32(zmm6, 0xfa)
                        zmm0 &= temp0_204
                        int64_t rax_26 = zmm7[0].q
                        void* rbx_7 = arg4 + rax_26
                        int64_t rcx_33 = _mm_shuffle_epi32(zmm7, 0x4e)[0].q
                        void* rbp_8 = arg4 + rcx_33
                        int64_t rdx_17 = zmm0.q
                        zmm6 = data_1434426b0
                        zmm3 = zmm2 & zmm6
                        void* rdi_10 = zmm3[0].q
                        int16_t* rdi_12 = _mm_shuffle_epi32(zmm3, 0x4e).q
                        zmm4 = data_1434426c0
                        zmm5 = zmm4
                        zmm2 &= zmm4
                        zmm3 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rdi_10 + rbx_7)), *(rdi_12 + rbp_8), 1)
                        uint32_t rbx_8 = zx.d(*(zmm2[0].q + rbx_7))
                        void* rdi_14 = arg4 + rdx_17
                        zmm4 = _mm_shuffle_epi32(zmm0, 0x4e)
                        zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(rbx_8), 
                            *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rbp_8), 1)
                        zmm2 = temp0_204 & zmm6
                        zmm1 = temp0_204 & zmm5
                        int16_t* rbx_10 = zmm1[0].q
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(zmm2[0].q + rdi_14), 2)
                        zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(rbx_10 + rdi_14), 2)
                        int64_t rbp_10 = zmm4.q
                        void* rbx_11 = arg4 + rbp_10
                        int16_t* rdi_15 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        uint32_t temp0_214[0x4] = _mm_shuffle_epi32(zmm1, 0x4e)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(rdi_15 + rbx_11), 3)
                        zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(temp0_214[0].q + rbx_11), 3)
                        float temp0_223[0x4] = __divps_xmmps_memps(
                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                __punpcklwd_xmmdq_memdq(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_26)), 
                                                *(arg4 + rcx_33), 1), 
                                            *(arg4 + rdx_17), 2), 
                                        *(arg4 + rbp_10), 3), 
                                    data_142d8f750), 
                                data_1434424d0)), 
                            data_1434426d0)
                        zmm1 = temp0_223
                        char rcx_34 = temp0_98.b
                        
                        if ((rcx_34 & 1) != 0)
                            var_528.d = zmm1[0]
                        
                        zmm3 = __punpcklwd_xmmdq_memdq(zmm3, data_142d8f750)
                        
                        if ((rcx_34 & 2) != 0)
                            var_528:4.d = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                        
                        zmm3 = __paddd_xmmdq_memdq(zmm3, data_1434424d0)
                        zmm7 = zmm9
                        zmm6 = zmm10
                        zmm4 = arg5
                        
                        if ((rcx_34 & 4) == 0)
                            zmm2 = _mm_cvtepi32_ps(zmm3)
                            arg5 = _mm_cmpeq_epi32(arg5, arg5)
                            
                            if ((rcx_34 & 8) != 0)
                                goto label_140311025
                            
                            goto label_14030ffce
                        
                        var_528:8.d = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                        zmm2 = _mm_cvtepi32_ps(zmm3)
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        
                        if ((rcx_34 & 8) != 0)
                        label_140311025:
                            var_528:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                            zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                            
                            if ((rcx_34 & 1) == 0)
                                goto label_14030ffde
                            
                            goto label_14031103b
                        
                    label_14030ffce:
                        zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                        
                        if ((rcx_34 & 1) == 0)
                        label_14030ffde:
                            zmm0 = __punpcklwd_xmmdq_memdq(zmm0, data_142d8f750)
                            
                            if ((rcx_34 & 2) != 0)
                                goto label_140311057
                            
                            goto label_14030ffef
                        
                    label_14031103b:
                        var_518.d = zmm2[0]
                        zmm0 = __punpcklwd_xmmdq_memdq(zmm0, data_142d8f750)
                        
                        if ((rcx_34 & 2) != 0)
                        label_140311057:
                            var_518:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434424d0)
                            
                            if ((rcx_34 & 4) == 0)
                                goto label_140310000
                            
                            goto label_140311073
                        
                    label_14030ffef:
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434424d0)
                        
                        if ((rcx_34 & 4) != 0)
                        label_140311073:
                            var_518:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            
                            if ((rcx_34 & 8) != 0)
                                var_518:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        else
                        label_140310000:
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            
                            if ((rcx_34 & 8) != 0)
                                var_518:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426d0)
                        float temp0_236[0x4] = _mm_sub_ps(zmm7, zmm1)
                        float temp0_237[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rcx_34 & 1) != 0)
                            var_508[0] = zmm0.d
                        
                        float temp0_238[0x4] = _mm_sub_ps(temp0_236, temp0_237)
                        zmm1 = _mm_mul_ps(zmm0, zmm0)
                        
                        if ((rcx_34 & 2) != 0)
                            var_508[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        
                        float temp0_241[0x4] = _mm_sub_ps(temp0_238, zmm1)
                        
                        if ((rcx_34 & 4) != 0)
                            var_508[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        
                        zmm1 = _mm_cmpeq_ps(zx.o(0), temp0_241, 1)
                        float temp0_244[0x4] = _mm_sqrt_ps(temp0_241)
                        
                        if ((rcx_34 & 8) == 0)
                            zmm1 = _mm_and_ps(zmm1, temp0_244)
                            
                            if ((rcx_34 & 1) != 0)
                                goto label_1403110a4
                            
                            goto label_14031007c
                        
                        var_508[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                        zmm1 = _mm_and_ps(zmm1, temp0_244)
                        
                        if ((rcx_34 & 1) != 0)
                        label_1403110a4:
                            var_4f8[0] = zmm1[0]
                            
                            if ((rcx_34 & 2) == 0)
                                goto label_140310085
                            
                            goto label_1403110b8
                        
                    label_14031007c:
                        
                        if ((rcx_34 & 2) == 0)
                        label_140310085:
                            
                            if ((rcx_34 & 4) != 0)
                                goto label_1403110cc
                            
                            goto label_14031008e
                        
                    label_1403110b8:
                        var_4f8[1] = _mm_shuffle_epi32(zmm1, 0xe5).d
                        
                        if ((rcx_34 & 4) == 0)
                        label_14031008e:
                            
                            if ((rcx_34 & 8) != 0)
                                var_4f8[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                        else
                        label_1403110cc:
                            var_4f8[2] = _mm_shuffle_epi32(zmm1, 0x4e).d
                            
                            if ((rcx_34 & 8) != 0)
                                var_4f8[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                    case 3
                        var_358 = zmm4
                        var_468 = arg6
                        zmm2 = arg7 & zmm6
                        int64_t rcx_35 = sx.q(zmm2[0])
                        void* rax_29 = arg4 + rcx_35
                        arg7 = *(arg4 + rcx_35)
                        int64_t rcx_37 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
                        void* rbp_11 = arg4 + rcx_37
                        float temp0_247[0x4] = _mm_unpacklo_ps(arg7, (*(arg4 + rcx_37))[0].q)
                        int64_t rdx_18 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
                        void* rcx_39 = arg4 + rdx_18
                        zmm3 = *(arg4 + rdx_18)
                        int64_t rdx_20 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
                        void* rdi_17 = arg4 + rdx_20
                        float temp0_250[0x4] = _mm_unpacklo_ps(zmm3, (*(arg4 + rdx_20))[0].q)
                        arg7 = temp0_247[0].q | temp0_250[0].q << 0x40
                        zmm2 = zmm6 & data_142fc95e0
                        zmm5 = *(zx.q(zmm2[0]) + rax_29)
                        int32_t var_2f8
                        var_2f8.o = *(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rbp_11)
                        arg5 = *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rcx_39)
                        int32_t var_308
                        var_308.o = *(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rdi_17)
                        zmm2 = zmm6 & data_142fc95f0
                        arg6 = zmm12
                        zmm12 = *(zx.q(zmm2[0]) + rax_29)
                        var_398 = *(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rbp_11)
                        zmm9 = *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rcx_39)
                        float (* r10_5)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
                        zmm2 = zmm6 & data_143442650
                        float temp0_258[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rax_29), 
                            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rbp_11))[0].q)
                        float temp0_261[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rcx_39), 
                            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rdi_17))[0].q)
                        zmm10 = temp0_258[0].q | temp0_261[0].q << 0x40
                        zmm3 = zmm6 & data_143442660
                        zmm2 = zx.o(*(zx.q(zmm3[0]) + rax_29))
                        zmm13 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d) + rbp_11))
                        uint64_t rbx_12 = zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
                        uint64_t r11_1 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0])
                        zmm3 = zmm6 & data_143442670
                        zmm4 = *(zx.q(zmm3[0]) + rax_29)
                        zmm1 = zmm6
                        uint32_t (* rsi_5)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
                        float (* rax_30)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
                        zmm6 = zmm8
                        zmm8 = *(rsi_5 + rbp_11)
                        float (* rbp_12)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0])
                        var_3f8.o = arg6
                        zmm0 = _mm_add_epi64(zmm0, arg6)
                        var_428 = zmm6
                        zmm7 = _mm_add_epi64(zmm7, zmm6)
                        zmm3 = _mm_shuffle_epi32(zmm1, 0x50) & zmm7
                        var_3b8 = zmm1
                        zmm7 = _mm_shuffle_epi32(zmm1, 0xfa) & zmm0
                        int64_t rsi_6 = zmm3[0].q
                        int64_t rdx_34 = _mm_shuffle_epi32(zmm3, 0x4e).q
                        zmm6 = zx.o(*(arg4 + rsi_6))
                        int64_t rsi_7 = zmm7[0].q
                        int64_t rdx_35 = _mm_shuffle_epi32(zmm7, 0x4e).q
                        zmm0 = zx.o(*(arg4 + rsi_7))
                        zmm6 = _mm_unpacklo_epi32(zmm6, zx.o(*(arg4 + rdx_34))[0].q)
                        zmm0 = _mm_unpacklo_epi32(zmm0, zx.o(*(arg4 + rdx_35))[0].q)
                        arg6 = *(r10_5 + rdi_17)
                        zmm6 = _mm_unpacklo_epi64(zmm6, zmm0.q)
                        zmm0 = _mm_srli_epi32(zmm6, 0x15)
                        zmm3 = data_143442440
                        zmm0 = _mm_mul_ps(
                            __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm3)), 
                                data_143442690), 
                            zmm10)
                        zmm7 = zx.o(*(rbx_12 + rcx_39))
                        zmm0 = _mm_add_ps(zmm0, arg7)
                        zmm3 = _mm_add_epi32(_mm_srli_epi32(zmm6, 0xa) & data_143442480, zmm3)
                        rsi_8 = temp0_98.b
                        arg7 = *(rax_30 + rcx_39)
                        zmm10 = *(rbp_12 + rdi_17)
                        
                        if ((rsi_8 & 1) != 0)
                            var_528.d = zmm0.d
                        
                        zmm7 = _mm_unpacklo_epi32(zmm7, zx.o(*(r11_1 + rdi_17))[0].q)
                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm13.q)
                        float temp0_287[0x4] = _mm_cvtepi32_ps(zmm3)
                        
                        if ((rsi_8 & 2) != 0)
                            var_528:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        
                        arg5 = __unpcklps_xmmps_memdq(arg5, var_308.o)
                        float temp0_290[0x4] = __unpcklps_xmmps_memdq(zmm5, var_2f8.o)
                        zmm2 = _mm_unpacklo_epi64(zmm2, zmm7[0].q)
                        float temp0_292[0x4] = __divps_xmmps_memps(temp0_287, data_143442690)
                        i = i_6
                        
                        if ((rsi_8 & 4) != 0)
                            var_528:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        
                        zmm6 &= data_143442680
                        zmm5 = temp0_290[0].q | arg5[0].q << 0x40
                        float temp0_294[0x4] = _mm_mul_ps(zmm2, temp0_292)
                        r14 = var_368
                        
                        if ((rsi_8 & 8) != 0)
                            var_528:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                        
                        zmm6 = __paddd_xmmdq_memdq(zmm6, data_143442490)
                        float temp0_297[0x4] = _mm_add_ps(zmm5, temp0_294)
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        r15 = var_340_1
                        
                        if ((rsi_8 & 1) != 0)
                            var_518.d = temp0_297[0]
                        
                        float temp0_299[0x4] = _mm_unpacklo_ps(arg7, zmm10[0].q)
                        zmm4 = _mm_unpacklo_ps(zmm4, zmm8[0].q)
                        float temp0_301[0x4] = _mm_cvtepi32_ps(zmm6)
                        
                        if ((rsi_8 & 2) != 0)
                            var_518:4.d = _mm_shuffle_epi32(temp0_297, 0xe5)[0]
                        
                        zmm9 = _mm_unpacklo_ps(zmm9, arg6[0].q)
                        zmm12 = __unpcklps_xmmps_memdq(zmm12, var_398)
                        zmm4 = zmm4.q | temp0_299[0].q << 0x40
                        float temp0_305[0x4] = __divps_xmmps_memps(temp0_301, data_1434426a0)
                        zmm8 = var_428
                        zmm6 = var_3b8
                        
                        if ((rsi_8 & 4) != 0)
                            var_518:8.d = _mm_shuffle_epi32(temp0_297, 0x4e)[0]
                        
                        zmm12 = zmm12.q | zmm9[0].q << 0x40
                        zmm4 = _mm_mul_ps(zmm4, temp0_305)
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        zmm7 = data_142d3f670
                        arg6 = var_468
                        
                        if ((rsi_8 & 8) != 0)
                            var_518:0xc.d = _mm_shuffle_epi32(temp0_297, 0xe7)[0]
                        
                        zmm12 = _mm_add_ps(zmm12, zmm4)
                        zmm1 = _mm_sub_ps(zmm7, zmm0)
                        float temp0_312[0x4] = _mm_mul_ps(temp0_297, temp0_297)
                        arg7 = var_448
                        
                        if ((rsi_8 & 1) != 0)
                            var_508[0] = zmm12.d
                        
                        zmm1 = _mm_sub_ps(zmm1, temp0_312)
                        zmm0 = _mm_mul_ps(zmm12, zmm12)
                        zmm4 = var_358
                        
                        if ((rsi_8 & 2) != 0)
                            var_508[1] = _mm_shuffle_epi32(zmm12, 0xe5)[0]
                        
                        zmm1 = _mm_sub_ps(zmm1, zmm0)
                        
                        if ((rsi_8 & 4) != 0)
                            var_508[2] = _mm_shuffle_epi32(zmm12, 0x4e).d
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        
                        if ((rsi_8 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((rsi_8 & 1) != 0)
                                goto label_1403110f9
                            
                            goto label_14031050d
                        
                        var_508[3] = _mm_shuffle_epi32(zmm12, 0xe7)[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((rsi_8 & 1) == 0)
                        label_14031050d:
                            zmm12 = var_3f8.o
                            
                            if ((rsi_8 & 2) == 0)
                                goto label_140310528
                            
                            goto label_14031051e
                        
                    label_1403110f9:
                        var_4f8[0] = zmm0.d
                        zmm12 = var_3f8.o
                        
                        if ((rsi_8 & 2) != 0)
                            goto label_14031051e
                        
                        goto label_140310528
                    case 4
                        zmm0 = _mm_add_epi64(zmm0, zmm12)
                        zmm7 = _mm_add_epi64(zmm7, zmm8)
                        zmm1 = _mm_shuffle_epi32(zmm6, 0x50) & zmm7
                        zmm2 = _mm_shuffle_epi32(zmm6, 0xfa) & zmm0
                        int64_t rax_31 = zmm1[0].q
                        int64_t rcx_40 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        int64_t rdx_36 = zmm2[0].q
                        int64_t rbp_13 = _mm_shuffle_epi32(zmm2, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_31)), 
                                zx.o(*(arg4 + rcx_40))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_36)), zx.o(*(arg4 + rbp_13))[0].q)[
                            0].q)
                        uint32_t temp0_332[0x4] = _mm_srli_epi32(zmm0, 0x15)
                        zmm2 = _mm_srli_epi32(zmm0, 0xa)
                        zmm1 = __divps_xmmps_memps(
                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(temp0_332, data_143442440)), 
                            data_143442690)
                        char rsi_9 = temp0_98.b
                        
                        if ((rsi_9 & 1) == 0)
                            zmm2 &= data_143442480
                            zmm7 = zmm9
                            
                            if ((rsi_9 & 2) != 0)
                                goto label_140311139
                            
                            goto label_1403105e9
                        
                        var_528.d = zmm1[0]
                        zmm2 &= data_143442480
                        zmm7 = zmm9
                        
                        if ((rsi_9 & 2) != 0)
                        label_140311139:
                            var_528:4.d = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                            
                            if ((rsi_9 & 4) == 0)
                                goto label_1403105fb
                            
                            goto label_140311156
                        
                    label_1403105e9:
                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                        
                        if ((rsi_9 & 4) == 0)
                        label_1403105fb:
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rsi_9 & 8) != 0)
                                goto label_14031116e
                            
                            goto label_140310608
                        
                    label_140311156:
                        var_528:8.d = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rsi_9 & 8) != 0)
                        label_14031116e:
                            var_528:0xc.d = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                            zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                            
                            if ((rsi_9 & 1) == 0)
                                goto label_140310619
                            
                            goto label_140311185
                        
                    label_140310608:
                        zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                        
                        if ((rsi_9 & 1) == 0)
                        label_140310619:
                            zmm0 &= data_143442680
                            
                            if ((rsi_9 & 2) != 0)
                                goto label_1403111a2
                            
                            goto label_14031062b
                        
                    label_140311185:
                        var_518.d = zmm2[0]
                        zmm0 &= data_143442680
                        
                        if ((rsi_9 & 2) != 0)
                        label_1403111a2:
                            var_518:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            
                            if ((rsi_9 & 4) == 0)
                                goto label_14031063d
                            
                            goto label_1403111bf
                        
                    label_14031062b:
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                        
                        if ((rsi_9 & 4) != 0)
                        label_1403111bf:
                            var_518:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            
                            if ((rsi_9 & 8) != 0)
                                var_518:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        else
                        label_14031063d:
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            
                            if ((rsi_9 & 8) != 0)
                                var_518:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                        float temp0_345[0x4] = _mm_sub_ps(zmm7, zmm1)
                        float temp0_346[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rsi_9 & 1) != 0)
                            var_508[0] = zmm0.d
                        
                        float temp0_347[0x4] = _mm_sub_ps(temp0_345, temp0_346)
                        zmm1 = _mm_mul_ps(zmm0, zmm0)
                        
                        if ((rsi_9 & 2) != 0)
                            var_508[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        
                        float temp0_350[0x4] = _mm_sub_ps(temp0_347, zmm1)
                        
                        if ((rsi_9 & 4) != 0)
                            var_508[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        
                        zmm1 = _mm_cmpeq_ps(zx.o(0), temp0_350, 1)
                        float temp0_353[0x4] = _mm_sqrt_ps(temp0_350)
                        
                        if ((rsi_9 & 8) == 0)
                            zmm1 = _mm_and_ps(zmm1, temp0_353)
                            
                            if ((rsi_9 & 1) != 0)
                                goto label_1403111f2
                            
                            goto label_1403106bf
                        
                        var_508[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                        zmm1 = _mm_and_ps(zmm1, temp0_353)
                        
                        if ((rsi_9 & 1) != 0)
                        label_1403111f2:
                            var_4f8[0] = zmm1[0]
                            
                            if ((rsi_9 & 2) == 0)
                                goto label_1403106c9
                            
                            goto label_140311207
                        
                    label_1403106bf:
                        
                        if ((rsi_9 & 2) == 0)
                        label_1403106c9:
                            
                            if ((rsi_9 & 4) != 0)
                                goto label_14031121c
                            
                            goto label_1403106d3
                        
                    label_140311207:
                        var_4f8[1] = _mm_shuffle_epi32(zmm1, 0xe5).d
                        
                        if ((rsi_9 & 4) == 0)
                        label_1403106d3:
                            
                            if ((rsi_9 & 8) != 0)
                                var_4f8[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                        else
                        label_14031121c:
                            var_4f8[2] = _mm_shuffle_epi32(zmm1, 0x4e).d
                            
                            if ((rsi_9 & 8) != 0)
                                var_4f8[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                    case 5
                        zmm10 = zmm4
                        zmm0 = _mm_add_epi64(zmm0, zmm12)
                        zmm7 = _mm_add_epi64(zmm7, zmm8)
                        zmm1 = _mm_shuffle_epi32(zmm6, 0x50) & zmm7
                        zmm2 = _mm_shuffle_epi32(zmm6, 0xfa) & zmm0
                        int64_t rax_32 = zmm1[0].q
                        int64_t rcx_41 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        int64_t rdx_37 = zmm2[0].q
                        int64_t rbp_14 = _mm_shuffle_epi32(zmm2, 0x4e).q
                        zmm1 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_32)), zx.q(*(arg4 + rcx_41))), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_37)), zx.o(*(arg4 + rbp_14))[0].q)
                                .q)
                        zmm0 = _mm_srli_epi32(zmm1, 0x15)
                        zmm2 = _mm_srli_epi32(zmm1, 5) & data_143442600
                        zmm0 = __paddd_xmmdq_memdq(zmm0 & data_143442320, data_143442330)
                            | (zmm0 & data_143442610) | zmm2
                        rsi_8 = temp0_98.b
                        
                        if ((rsi_8 & 1) != 0)
                            var_528.d = zmm0.d
                        
                        zmm3 = _mm_srli_epi32(zmm1, 0xa)
                        zmm2 = _mm_slli_epi32(zmm1, 6)
                        
                        if ((rsi_8 & 2) != 0)
                            var_528:4.d = _mm_shuffle_epi32(zmm0, 0xe5).d
                        
                        zmm2 &= data_143442600
                        zmm4 = zmm3 & data_143442610
                        zmm3 &= data_143442320
                        
                        if ((rsi_8 & 4) == 0)
                            zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                            zmm2 |= zmm4
                            
                            if ((rsi_8 & 8) != 0)
                                goto label_140311266
                            
                            goto label_1403107f1
                        
                        var_528:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                        zmm2 |= zmm4
                        
                        if ((rsi_8 & 8) != 0)
                        label_140311266:
                            var_528:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                            zmm2 |= zmm3
                            
                            if ((rsi_8 & 1) == 0)
                                goto label_140310803
                            
                            goto label_14031127a
                        
                    label_1403107f1:
                        zmm2 |= zmm3
                        
                        if ((rsi_8 & 1) != 0)
                        label_14031127a:
                            var_518.d = zmm2[0]
                            zmm3 = _mm_slli_epi32(zmm1, 0x11)
                            
                            if ((rsi_8 & 2) != 0)
                                var_518:4.d = _mm_shuffle_epi32(zmm2, 0xe5).d
                        else
                        label_140310803:
                            zmm3 = _mm_slli_epi32(zmm1, 0x11)
                            
                            if ((rsi_8 & 2) != 0)
                                var_518:4.d = _mm_shuffle_epi32(zmm2, 0xe5).d
                        
                        zmm4 = zmm1 & data_143442620
                        zmm3 &= data_143442630
                        zmm1 &= data_143442640
                        
                        if ((rsi_8 & 4) != 0)
                            var_518:8.d = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                        
                        zmm4 = __paddd_xmmdq_memdq(zmm4, data_1434423a0)
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        zmm7 = zmm9
                        
                        if ((rsi_8 & 8) != 0)
                            var_518:0xc.d = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                        
                        zmm3 = zmm3 | zmm1 | zmm4
                        zmm1 = _mm_sub_ps(zmm7, zmm0)
                        float temp0_378[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rsi_8 & 1) != 0)
                            var_508[0] = zmm3[0]
                        
                        zmm1 = _mm_sub_ps(zmm1, temp0_378)
                        zmm0 = _mm_mul_ps(zmm3, zmm3)
                        zmm4 = zmm10
                        
                        if ((rsi_8 & 2) != 0)
                            var_508[1] = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                        
                        zmm1 = _mm_sub_ps(zmm1, zmm0)
                        
                        if ((rsi_8 & 4) != 0)
                            var_508[2] = _mm_shuffle_epi32(zmm3, 0x4e).d
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        
                        if ((rsi_8 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((rsi_8 & 1) != 0)
                                goto label_1403112b0
                            
                            goto label_1403108dc
                        
                        var_508[3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((rsi_8 & 1) != 0)
                        label_1403112b0:
                            var_4f8[0] = zmm0.d
                            
                            if ((rsi_8 & 2) != 0)
                                goto label_14031051e
                            
                            goto label_140310528
                        
                    label_1403108dc:
                        
                        if ((rsi_8 & 2) == 0)
                            goto label_140310528
                        
                    label_14031051e:
                        var_4f8[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    label_140310528:
                        
                        if ((rsi_8 & 4) != 0)
                            var_4f8[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        
                        if ((rsi_8 & 8) != 0)
                            var_4f8[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
            
            zmm5 = __pcmpeqd_xmmdq_memdq(arg6, var_438) & not.o(zmm6)
            uint32_t temp0_655 = _mm_movemask_ps(zmm5)
            
            if (temp0_655 != 0)
                uint32_t var_4a8
                float var_498
                float var_488
                uint32_t var_478
                uint64_t rsi_11
                int64_t rdi_20
                
                if (r14.d u> 5)
                    rsi_11 = zx.q(temp0_655)
                    rdi_20 = rsi_11 & 1
                    
                    if (rdi_20 == 0)
                        if ((rsi_11.b & 2) != 0)
                            goto label_140312f4a
                        
                        goto label_140311f59
                    
                    var_4a8 = 0
                    
                    if ((rsi_11.b & 2) != 0)
                    label_140312f4a:
                        int32_t var_4a4_6 = 0
                        
                        if ((rsi_11.b & 4) == 0)
                            goto label_140311f63
                        
                        goto label_140312f5f
                    
                label_140311f59:
                    
                    if ((rsi_11.b & 4) == 0)
                    label_140311f63:
                        
                        if ((rsi_11.b & 8) != 0)
                            goto label_140312f74
                        
                        goto label_140311f6d
                    
                label_140312f5f:
                    int32_t var_4a0_6 = 0
                    
                    if ((rsi_11.b & 8) != 0)
                    label_140312f74:
                        int32_t var_49c_6 = 0
                        
                        if (rdi_20 == 0)
                            goto label_140311f76
                        
                        goto label_140312f88
                    
                label_140311f6d:
                    
                    if (rdi_20 == 0)
                    label_140311f76:
                        
                        if ((rsi_11.b & 2) != 0)
                            goto label_140312f9d
                        
                        goto label_140311f80
                    
                label_140312f88:
                    var_498 = 0f
                    
                    if ((rsi_11.b & 2) != 0)
                    label_140312f9d:
                        int32_t var_494_7 = 0
                        
                        if ((rsi_11.b & 4) == 0)
                            goto label_140311f8a
                        
                        goto label_140312fb2
                    
                label_140311f80:
                    
                    if ((rsi_11.b & 4) == 0)
                    label_140311f8a:
                        
                        if ((rsi_11.b & 8) != 0)
                            goto label_140312fc7
                        
                        goto label_140311f94
                    
                label_140312fb2:
                    int32_t var_490_7 = 0
                    
                    if ((rsi_11.b & 8) != 0)
                    label_140312fc7:
                        int32_t var_48c_7 = 0
                        
                        if (rdi_20 == 0)
                            goto label_140311f9d
                        
                        goto label_140312fdb
                    
                label_140311f94:
                    
                    if (rdi_20 == 0)
                    label_140311f9d:
                        
                        if ((rsi_11.b & 2) != 0)
                            goto label_140312ff0
                        
                        goto label_140311fa7
                    
                label_140312fdb:
                    var_488 = 0f
                    
                    if ((rsi_11.b & 2) != 0)
                    label_140312ff0:
                        int32_t var_484_6 = 0
                        
                        if ((rsi_11.b & 4) == 0)
                            goto label_140311fb1
                        
                        goto label_140313005
                    
                label_140311fa7:
                    
                    if ((rsi_11.b & 4) == 0)
                    label_140311fb1:
                        
                        if ((rsi_11.b & 8) != 0)
                            goto label_14031301a
                        
                        goto label_140311fbb
                    
                label_140313005:
                    int32_t var_480_7 = 0
                    
                    if ((rsi_11.b & 8) != 0)
                    label_14031301a:
                        int32_t var_47c_6 = 0
                        
                        if (rdi_20 == 0)
                            goto label_140311fc4
                        
                        goto label_14031302e
                    
                label_140311fbb:
                    
                    if (rdi_20 != 0)
                    label_14031302e:
                        var_478 = 0x3f800000
                        
                        if ((rsi_11.b & 2) != 0)
                        label_140313043:
                            int32_t var_474_5 = 0x3f800000
                            
                            if ((rsi_11.b & 4) == 0)
                                goto label_140311fd8
                            
                            goto label_140313058
                    else
                    label_140311fc4:
                        
                        if ((rsi_11.b & 2) != 0)
                            goto label_140313043
                    
                    int32_t var_46c_2
                    
                    if ((rsi_11.b & 4) != 0)
                    label_140313058:
                        int32_t var_470_5 = 0x3f800000
                        arg7 = zmm7
                        
                        if ((rsi_11.b & 8) != 0)
                            var_46c_2 = 0x3f800000
                    else
                    label_140311fd8:
                        arg7 = zmm7
                        
                        if ((rsi_11.b & 8) != 0)
                            var_46c_2 = 0x3f800000
                else
                    zmm2 = var_438
                    zmm1 = _mm_unpacklo_epi32(
                        _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(zmm2, var_338), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm2, 0xf5), zmm4), 0xe8)
                            .q)
                    zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
                    zmm4 = _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q)
                    int32_t var_46c_3
                    
                    switch (rdi_8)
                        case 0
                            zmm12 = _mm_add_epi64(zmm12, zmm4)
                            zmm8 = _mm_add_epi64(zmm8, zmm1)
                            zmm0 = _mm_shuffle_epi32(zmm5, 0x50)
                            zmm8 &= zmm0
                            uint32_t temp0_670[0x4] = _mm_shuffle_epi32(zmm5, 0xfa)
                            zmm12 &= temp0_670
                            int64_t rax_109 = _mm_shuffle_epi32(zmm8, 0x4e)[0].q
                            void* rcx_43 = arg4 + rax_109
                            int32_t r12_2 = *(arg4 + rax_109)
                            int64_t rax_110 = zmm12.q
                            void* rdi_18 = arg4 + rax_110
                            int32_t rbx_14 = *(arg4 + rax_110)
                            int64_t rax_111 = _mm_shuffle_epi32(zmm12, 0x4e)[0].q
                            void* rbp_15 = arg4 + rax_111
                            int32_t r10_6 = *(arg4 + rax_111)
                            zmm3 = data_1434426c0
                            zmm2 = zmm0 & zmm3
                            zmm3 &= temp0_670
                            void* r15_4 = zmm8[0].q + arg4
                            int32_t rax_113 = *(_mm_shuffle_epi32(zmm2, 0x4e).q + rcx_43)
                            int32_t r9_1 = *(zmm3[0].q + rdi_18)
                            var_358.d = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rbp_15)
                            zmm4 = data_1434426e0
                            zmm3 = zmm0 & zmm4
                            zmm4 &= temp0_670
                            var_398[0] = *(_mm_shuffle_epi32(zmm3, 0x4e).q + rcx_43)
                            var_3b8[0] = *(zmm4.q + rdi_18)
                            int32_t rdx_71 = *(_mm_shuffle_epi32(zmm4, 0x4e).q + rbp_15)
                            zmm4 = data_1434426f0
                            zmm0 &= zmm4
                            zmm1 = temp0_670 & zmm4
                            var_428[0] = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rcx_43)
                            var_448[0] = *(zmm1[0].q + rdi_18)
                            var_468[0] = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rbp_15)
                            rsi_11 = zx.q(temp0_655)
                            rdi_20 = rsi_11 & 1
                            
                            if (rdi_20 == 0)
                                if ((rsi_11.b & 2) != 0)
                                    goto label_140312e08
                                
                                goto label_140311e85
                            
                            var_4a8 = *r15_4
                            int64_t rdx_73
                            
                            if ((rsi_11.b & 2) != 0)
                            label_140312e08:
                                int32_t var_4a4_5 = r12_2
                                rdx_73 = var_368
                                
                                if ((rsi_11.b & 4) == 0)
                                    goto label_140311e93
                                
                                goto label_140312e22
                            
                        label_140311e85:
                            rdx_73 = var_368
                            
                            if ((rsi_11.b & 4) != 0)
                            label_140312e22:
                                int32_t var_4a0_5 = rbx_14
                                
                                if ((rsi_11.b & 8) != 0)
                                label_140312e33:
                                    int32_t var_49c_5 = r10_6
                                    
                                    if (rdi_20 == 0)
                                        goto label_140311eaa
                                    
                                    goto label_140312e44
                            else
                            label_140311e93:
                                
                                if ((rsi_11.b & 8) != 0)
                                    goto label_140312e33
                            
                            if (rdi_20 == 0)
                            label_140311eaa:
                                i = i_6
                                
                                if ((rsi_11.b & 2) != 0)
                                    goto label_140312e5d
                                
                                goto label_140311eb8
                            
                        label_140312e44:
                            var_498 = *(zmm2[0].q + r15_4)
                            i = i_6
                            
                            if ((rsi_11.b & 2) != 0)
                            label_140312e5d:
                                int32_t var_494_6 = rax_113
                                
                                if ((rsi_11.b & 4) == 0)
                                    goto label_140311ec2
                                
                                goto label_140312e6e
                            
                        label_140311eb8:
                            
                            if ((rsi_11.b & 4) == 0)
                            label_140311ec2:
                                
                                if ((rsi_11.b & 8) != 0)
                                    goto label_140312e87
                                
                                goto label_140311ecc
                            
                        label_140312e6e:
                            int32_t var_490_6 = r9_1
                            
                            if ((rsi_11.b & 8) != 0)
                            label_140312e87:
                                int32_t var_48c_6 = var_358.d
                                
                                if (rdi_20 == 0)
                                    goto label_140311ed5
                                
                                goto label_140312e97
                            
                        label_140311ecc:
                            float var_484_1
                            
                            if (rdi_20 != 0)
                            label_140312e97:
                                var_488 = *(zmm3[0].q + r15_4)
                                
                                if ((rsi_11.b & 2) != 0)
                                    var_484_1 = var_398[0]
                            else
                            label_140311ed5:
                                
                                if ((rsi_11.b & 2) != 0)
                                    var_484_1 = var_398[0]
                            arg4 = var_370
                            r15 = var_340_1
                            r14 = rdx_73
                            
                            if ((rsi_11.b & 4) == 0)
                                if ((rsi_11.b & 8) != 0)
                                    goto label_140312ecd
                                
                                goto label_140311f10
                            
                            float var_480_6 = var_3b8[0]
                            
                            if ((rsi_11.b & 8) != 0)
                            label_140312ecd:
                                int32_t var_47c_5 = rdx_71
                                
                                if (rdi_20 == 0)
                                    goto label_140311f19
                                
                                goto label_140312edd
                            
                        label_140311f10:
                            
                            if (rdi_20 != 0)
                            label_140312edd:
                                var_478 = *(zmm0.q + r15_4)
                                
                                if ((rsi_11.b & 2) != 0)
                                label_140312ef5:
                                    uint32_t var_474_4 = var_428[0]
                                    
                                    if ((rsi_11.b & 4) == 0)
                                        goto label_140311f2d
                                    
                                    goto label_140312f0d
                            else
                            label_140311f19:
                                
                                if ((rsi_11.b & 2) != 0)
                                    goto label_140312ef5
                            
                            float var_46c_1
                            
                            if ((rsi_11.b & 4) != 0)
                            label_140312f0d:
                                float var_470_4 = var_448[0]
                                arg7 = zmm7
                                
                                if ((rsi_11.b & 8) != 0)
                                    var_46c_1 = var_468[0]
                            else
                            label_140311f2d:
                                arg7 = zmm7
                                
                                if ((rsi_11.b & 8) != 0)
                                    var_46c_1 = var_468[0]
                        case 1
                            arg7 = zmm7
                            var_468 = arg6
                            zmm12 = _mm_add_epi64(zmm12, zmm4)
                            zmm8 = _mm_add_epi64(zmm8, zmm1)
                            uint32_t temp0_681[0x4] = _mm_shuffle_epi32(zmm5, 0x50)
                            zmm8 &= temp0_681
                            zmm3 = _mm_shuffle_epi32(zmm5, 0xfa)
                            zmm12 &= zmm3
                            int64_t rcx_53 = zmm8[0].q
                            void* rax_115 = arg4 + rcx_53
                            zmm0 = *(arg4 + rcx_53)
                            int64_t rdx_74 = _mm_shuffle_epi32(zmm8, 0x4e)[0].q
                            void* rcx_54 = arg4 + rdx_74
                            arg6 = *(arg4 + rdx_74)
                            int64_t rdx_75 = zmm12.q
                            void* rbp_17 = arg4 + rdx_75
                            zmm7 = *(arg4 + rdx_75)
                            int64_t rdx_76 = _mm_shuffle_epi32(zmm12, 0x4e)[0].q
                            void* rbx_15 = arg4 + rdx_76
                            zmm5 = *(arg4 + rdx_76)
                            zmm2 = data_1434426c0
                            zmm4 = temp0_681 & zmm2
                            zmm6 = zmm3 & zmm2
                            zmm2 = *(zmm4.q + rax_115)
                            zmm4 = *(_mm_shuffle_epi32(zmm4, 0x4e).q + rcx_54)
                            zmm13 = *(zmm6[0].q + rbp_17)
                            zmm12 = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rbx_15)
                            zmm6 = data_1434426e0
                            zmm1 = temp0_681 & zmm6
                            zmm3 &= zmm6
                            arg5 = *(zmm1[0].q + rax_115)
                            zmm10 = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rcx_54)
                            zmm9 = *(zmm3[0].q + rbp_17)
                            zmm8 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rbx_15)
                            rsi_11 = zx.q(temp0_655)
                            rdi_20 = rsi_11 & 1
                            
                            if (rdi_20 == 0)
                                if ((rsi_11.b & 2) != 0)
                                    goto label_140313094
                                
                                goto label_14031210e
                            
                            var_4a8 = zmm0.d
                            
                            if ((rsi_11.b & 2) != 0)
                            label_140313094:
                                float var_4a4_7 = arg6[0]
                                zmm6 = arg7
                                
                                if ((rsi_11.b & 4) == 0)
                                    goto label_140312118
                                
                                goto label_1403130ac
                            
                        label_14031210e:
                            zmm6 = arg7
                            
                            if ((rsi_11.b & 4) != 0)
                            label_1403130ac:
                                float var_4a0_7 = zmm7[0]
                                
                                if ((rsi_11.b & 8) != 0)
                                label_1403130bf:
                                    float var_49c_7 = zmm5[0]
                                    
                                    if (rdi_20 == 0)
                                        goto label_14031212b
                                    
                                    goto label_1403130d1
                            else
                            label_140312118:
                                
                                if ((rsi_11.b & 8) != 0)
                                    goto label_1403130bf
                            
                            int32_t var_494_3
                            
                            if (rdi_20 != 0)
                            label_1403130d1:
                                var_498 = zmm2[0]
                                zmm0 = _mm_unpacklo_ps(zmm0, arg6[0].q)
                                zmm7 = _mm_unpacklo_ps(zmm7, zmm5[0].q)
                                
                                if ((rsi_11.b & 2) != 0)
                                    var_494_3 = zmm4.d
                            else
                            label_14031212b:
                                zmm0 = _mm_unpacklo_ps(zmm0, arg6[0].q)
                                zmm7 = _mm_unpacklo_ps(zmm7, zmm5[0].q)
                                
                                if ((rsi_11.b & 2) != 0)
                                    var_494_3 = zmm4.d
                            zmm0 = zmm0.q | zmm7[0].q << 0x40
                            float temp0_691[0x4] = _mm_unpacklo_ps(zmm2, zmm4.q)
                            zmm1 = _mm_unpacklo_ps(zmm13, zmm12.q)
                            arg6 = var_468
                            
                            if ((rsi_11.b & 4) != 0)
                                int32_t var_490_3 = zmm13.d
                            
                            zmm2 = temp0_691[0].q | zmm1[0].q << 0x40
                            zmm1 = _mm_unpacklo_ps(arg5, zmm10[0].q)
                            float temp0_694[0x4] = _mm_unpacklo_ps(zmm9, zmm8[0].q)
                            zmm0 = _mm_mul_ps(zmm0, zmm0)
                            
                            if ((rsi_11.b & 8) != 0)
                                int32_t var_48c_1 = zmm12.d
                            
                            zmm1 = zmm1[0].q | temp0_694[0].q << 0x40
                            float temp0_696[0x4] = _mm_sub_ps(zmm6, zmm0)
                            float temp0_697[0x4] = _mm_mul_ps(zmm2, zmm2)
                            
                            if (rdi_20 == 0)
                                zmm3 = _mm_sub_ps(temp0_696, temp0_697)
                                zmm1 = _mm_mul_ps(zmm1, zmm1)
                                
                                if ((rsi_11.b & 2) != 0)
                                    goto label_14031310a
                                
                                goto label_1403121b4
                            
                            var_488 = arg5[0]
                            zmm3 = _mm_sub_ps(temp0_696, temp0_697)
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            int32_t var_480_1
                            
                            if ((rsi_11.b & 2) == 0)
                            label_1403121b4:
                                zmm3 = _mm_sub_ps(zmm3, zmm1)
                                arg5 = _mm_cmpeq_epi32(arg5, arg5)
                                
                                if ((rsi_11.b & 4) != 0)
                                    var_480_1 = zmm9[0]
                            else
                            label_14031310a:
                                float var_484_7 = zmm10[0]
                                zmm3 = _mm_sub_ps(zmm3, zmm1)
                                arg5 = _mm_cmpeq_epi32(arg5, arg5)
                                
                                if ((rsi_11.b & 4) != 0)
                                    var_480_1 = zmm9[0]
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            zmm1 = _mm_sqrt_ps(zmm3)
                            
                            if ((rsi_11.b & 8) == 0)
                                zmm0 = _mm_and_ps(zmm0, zmm1)
                                
                                if (rdi_20 != 0)
                                    goto label_140313141
                                
                                goto label_1403121ec
                            
                            uint32_t var_47c_7 = zmm8[0]
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (rdi_20 != 0)
                            label_140313141:
                                var_478 = zmm0.d
                                
                                if ((rsi_11.b & 2) == 0)
                                    goto label_1403121f6
                                
                                goto label_140313159
                            
                        label_1403121ec:
                            
                            if ((rsi_11.b & 2) == 0)
                            label_1403121f6:
                                
                                if ((rsi_11.b & 4) != 0)
                                    goto label_140313171
                                
                                goto label_140312200
                            
                        label_140313159:
                            uint32_t var_474_6 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                            
                            if ((rsi_11.b & 4) == 0)
                            label_140312200:
                                
                                if ((rsi_11.b & 8) != 0)
                                    var_46c_3 = _mm_shuffle_epi32(zmm0, 0xe7).d
                            else
                            label_140313171:
                                uint32_t var_470_6 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                                
                                if ((rsi_11.b & 8) != 0)
                                    var_46c_3 = _mm_shuffle_epi32(zmm0, 0xe7).d
                        case 2
                            arg7 = zmm7
                            zmm12 = _mm_add_epi64(zmm12, zmm4)
                            zmm8 = _mm_add_epi64(zmm8, zmm1)
                            zmm0 = _mm_shuffle_epi32(zmm5, 0x50)
                            zmm8 &= zmm0
                            uint32_t temp0_708[0x4] = _mm_shuffle_epi32(zmm5, 0xfa)
                            zmm12 &= temp0_708
                            int64_t rax_119 = zmm8[0].q
                            void* rbx_16 = arg4 + rax_119
                            int64_t rcx_55 = _mm_shuffle_epi32(zmm8, 0x4e)[0].q
                            void* rbp_18 = arg4 + rcx_55
                            int64_t rdx_82 = zmm12.q
                            zmm6 = data_1434426b0
                            zmm2 = zmm0 & zmm6
                            void* rdi_23 = zmm2[0].q
                            int16_t* rdi_25 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                            zmm3 = data_1434426c0
                            zmm5 = zmm3
                            zmm0 &= zmm3
                            zmm2 = __pinsrw_xmmdq_memw_immb(zx.o(*(rdi_23 + rbx_16)), 
                                *(rdi_25 + rbp_18), 1)
                            uint32_t rbx_17 = zx.d(*(zmm0.q + rbx_16))
                            void* rdi_27 = arg4 + rdx_82
                            zmm3 = _mm_shuffle_epi32(zmm12, 0x4e)
                            zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(rbx_17), 
                                *(_mm_shuffle_epi32(zmm0, 0x4e).q + rbp_18), 1)
                            zmm4 = temp0_708 & zmm6
                            zmm1 = temp0_708 & zmm5
                            int16_t* rbx_19 = zmm1[0].q
                            zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(zmm4.q + rdi_27), 2)
                            zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(rbx_19 + rdi_27), 2)
                            int64_t rbp_20 = zmm3[0].q
                            void* rbx_20 = arg4 + rbp_20
                            int16_t* rdi_28 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                            uint32_t temp0_718[0x4] = _mm_shuffle_epi32(zmm1, 0x4e)
                            zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rdi_28 + rbx_20), 3)
                            zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(temp0_718[0].q + rbx_20), 3)
                            float temp0_727[0x4] = __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    __punpcklwd_xmmdq_memdq(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(
                                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_119)), 
                                                    *(arg4 + rcx_55), 1), 
                                                *(arg4 + rdx_82), 2), 
                                            *(arg4 + rbp_20), 3), 
                                        data_142d8f750), 
                                    data_1434424d0)), 
                                data_1434426d0)
                            zmm1 = temp0_727
                            rsi_11 = zx.q(temp0_655)
                            rdi_20 = rsi_11 & 1
                            
                            if (rdi_20 == 0)
                                zmm2 = __punpcklwd_xmmdq_memdq(zmm2, data_142d8f750)
                                
                                if ((rsi_11.b & 2) != 0)
                                    goto label_14030eff6
                                
                                goto label_140312357
                            
                            var_4a8 = zmm1[0]
                            zmm2 = __punpcklwd_xmmdq_memdq(zmm2, data_142d8f750)
                            
                            if ((rsi_11.b & 2) != 0)
                            label_14030eff6:
                                float var_4a4_1 = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                                zmm2 = __paddd_xmmdq_memdq(zmm2, data_1434424d0)
                                zmm4 = arg7
                                
                                if ((rsi_11.b & 4) == 0)
                                    goto label_14031236d
                                
                                goto label_14030f01a
                            
                        label_140312357:
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_1434424d0)
                            zmm4 = arg7
                            
                            if ((rsi_11.b & 4) == 0)
                            label_14031236d:
                                zmm2 = _mm_cvtepi32_ps(zmm2)
                                
                                if ((rsi_11.b & 8) != 0)
                                    goto label_14030f035
                                
                                goto label_14031237a
                            
                        label_14030f01a:
                            float var_4a0_1 = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rsi_11.b & 8) != 0)
                            label_14030f035:
                                float var_49c_1 = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                                zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                                
                                if (rdi_20 == 0)
                                    goto label_14031238a
                                
                                goto label_14030f04e
                            
                        label_14031237a:
                            zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                            
                            if (rdi_20 == 0)
                            label_14031238a:
                                zmm0 = __punpcklwd_xmmdq_memdq(zmm0, data_142d8f750)
                                
                                if ((rsi_11.b & 2) != 0)
                                    goto label_14030f06e
                                
                                goto label_14031239c
                            
                        label_14030f04e:
                            var_498 = zmm2[0]
                            zmm0 = __punpcklwd_xmmdq_memdq(zmm0, data_142d8f750)
                            
                            if ((rsi_11.b & 2) != 0)
                            label_14030f06e:
                                float var_494_1 = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434424d0)
                                
                                if ((rsi_11.b & 4) == 0)
                                    goto label_1403123ae
                                
                                goto label_14030f08e
                            
                        label_14031239c:
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434424d0)
                            float var_48c_2
                            
                            if ((rsi_11.b & 4) != 0)
                            label_14030f08e:
                                float var_490_1 = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                zmm1 = _mm_mul_ps(zmm1, zmm1)
                                
                                if ((rsi_11.b & 8) != 0)
                                    var_48c_2 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            else
                            label_1403123ae:
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                zmm1 = _mm_mul_ps(zmm1, zmm1)
                                
                                if ((rsi_11.b & 8) != 0)
                                    var_48c_2 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426d0)
                            float temp0_738[0x4] = _mm_sub_ps(zmm4, zmm1)
                            float temp0_739[0x4] = _mm_mul_ps(zmm2, zmm2)
                            
                            if (rdi_20 != 0)
                                var_488 = zmm0.d
                            
                            float temp0_740[0x4] = _mm_sub_ps(temp0_738, temp0_739)
                            zmm1 = _mm_mul_ps(zmm0, zmm0)
                            
                            if ((rsi_11.b & 2) != 0)
                                float var_484_2 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                            
                            float temp0_743[0x4] = _mm_sub_ps(temp0_740, zmm1)
                            
                            if ((rsi_11.b & 4) != 0)
                                uint32_t var_480_2 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                            
                            zmm1 = _mm_cmpeq_ps(zx.o(0), temp0_743, 1)
                            float temp0_746[0x4] = _mm_sqrt_ps(temp0_743)
                            
                            if ((rsi_11.b & 8) == 0)
                                zmm1 = _mm_and_ps(zmm1, temp0_746)
                                
                                if (rdi_20 != 0)
                                    goto label_14030f0c6
                                
                                goto label_14031243a
                            
                            int32_t var_47c_1 = _mm_shuffle_epi32(zmm0, 0xe7).d
                            zmm1 = _mm_and_ps(zmm1, temp0_746)
                            
                            if (rdi_20 != 0)
                            label_14030f0c6:
                                var_478 = zmm1[0]
                                
                                if ((rsi_11.b & 2) != 0)
                                    goto label_140312445
                                
                                goto label_140312452
                            
                        label_14031243a:
                            
                            if ((rsi_11.b & 2) == 0)
                                goto label_140312452
                            
                        label_140312445:
                            int32_t var_474_3 = _mm_shuffle_epi32(zmm1, 0xe5).d
                        label_140312452:
                            
                            if ((rsi_11.b & 4) != 0)
                                int32_t var_470_1 = _mm_shuffle_epi32(zmm1, 0x4e).d
                            
                            if ((rsi_11.b & 8) != 0)
                                var_46c_3 = _mm_shuffle_epi32(zmm1, 0xe7).d
                        case 3
                            var_468 = arg6
                            arg7 &= zmm5
                            int64_t rcx_56 = sx.q(arg7[0])
                            void* rax_122 = arg4 + rcx_56
                            arg6 = zmm8
                            zmm8 = *(arg4 + rcx_56)
                            int64_t rcx_58 = sx.q(_mm_shuffle_epi32(arg7, 0xe5).d)
                            void* rdi_31 = arg4 + rcx_58
                            zmm8 = _mm_unpacklo_ps(zmm8, (*(arg4 + rcx_58)).q)
                            int64_t rdx_83 = sx.q(_mm_shuffle_epi32(arg7, 0x4e).d)
                            void* rcx_60 = arg4 + rdx_83
                            zmm0 = *(arg4 + rdx_83)
                            int64_t rdx_85 = sx.q(_mm_shuffle_epi32(arg7, 0xe7)[0])
                            void* rbp_21 = arg4 + rdx_85
                            zmm0 = _mm_unpacklo_ps(zmm0, (*(arg4 + rdx_85))[0].q)
                            zmm8 = zmm8[0].q | zmm0.q << 0x40
                            zmm0 = zmm5 & data_142fc95e0
                            zmm3 = *(zx.q(zmm0.d) + rax_122)
                            var_448 = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_31)
                            zmm10 = *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rcx_60)
                            var_3f8.o = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbp_21)
                            zmm0 = zmm5 & data_142fc95f0
                            arg7 = *(zx.q(zmm0.d) + rax_122)
                            float (* r15_5)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                            uint128_t* r12_3 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                            var_398[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                            zmm0 = zmm5 & data_143442650
                            zmm9 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rax_122), 
                                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_31))[0].q)
                            float temp0_765[0x4] = _mm_unpacklo_ps(
                                *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rcx_60), 
                                (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbp_21)).q)
                            zmm9 = zmm9[0].q | temp0_765[0].q << 0x40
                            zmm0 = zmm5 & data_143442660
                            zmm2 = zx.o(*(zx.q(zmm0.d) + rax_122))
                            uint64_t rbx_21 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                            uint64_t r14_4 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                            uint64_t r11_2 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                            zmm0 = zmm5 & data_143442670
                            zmm6 = *(zx.q(zmm0.d) + rax_122)
                            uint32_t (* rax_123)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                            float (* r10_7)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                            var_3b8 = *(r15_5 + rdi_31)
                            int32_t (* rdx_98)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                            zmm13 = *(r12_3 + rcx_60)
                            zmm12 = _mm_add_epi64(zmm12, zmm4)
                            arg5 = zx.o(*(rbx_21 + rdi_31))
                            arg6 = _mm_add_epi64(arg6, zmm1)
                            zmm0 = _mm_shuffle_epi32(zmm5, 0x50) & arg6
                            var_428 = *(rax_123 + rdi_31)
                            zmm1 = _mm_shuffle_epi32(zmm5, 0xfa) & zmm12
                            int64_t rdi_32 = _mm_shuffle_epi32(zmm0, 0x4e).q
                            zmm4 = zx.o(*(arg4 + zmm0.q))
                            int64_t rax_125 = zmm1[0].q
                            int64_t rdi_33 = _mm_shuffle_epi32(zmm1, 0x4e).q
                            zmm0 = zx.o(*(arg4 + rax_125))
                            zmm4 = _mm_unpacklo_epi32(zmm4, zx.o(*(arg4 + rdi_32))[0].q)
                            zmm0 = _mm_unpacklo_epi32(zmm0, zx.o(*(arg4 + rdi_33))[0].q)
                            zmm12 = *(var_398[0].q + rbp_21)
                            zmm4 = _mm_unpacklo_epi64(zmm4, zmm0.q)
                            zmm0 = _mm_srli_epi32(zmm4, 0x15)
                            zmm1 = data_143442440
                            zmm7 = zmm1
                            zmm1 = _mm_mul_ps(
                                __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1)), 
                                    data_143442690), 
                                zmm9)
                            zmm5 = zx.o(*(r14_4 + rcx_60))
                            zmm1 = _mm_add_ps(zmm1, zmm8)
                            zmm0 = _mm_add_epi32(_mm_srli_epi32(zmm4, 0xa) & data_143442480, zmm7)
                            rsi_11 = zx.q(temp0_655)
                            arg6 = *(r10_7 + rcx_60)
                            zmm9 = *(rdx_98 + rbp_21)
                            rdi_20 = rsi_11 & 1
                            
                            if (rdi_20 != 0)
                                var_4a8 = zmm1[0]
                            
                            zmm5 = _mm_unpacklo_epi32(zmm5, zx.o(*(r11_2 + rbp_21))[0].q)
                            zmm2 = _mm_unpacklo_epi32(zmm2, arg5[0].q)
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            
                            if ((rsi_11.b & 2) != 0)
                                float var_4a4_3 = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                            
                            float temp0_793[0x4] = __unpcklps_xmmps_memdq(zmm10, var_3f8.o)
                            float temp0_794[0x4] = __unpcklps_xmmps_memdq(zmm3, var_448)
                            zmm2 = _mm_unpacklo_epi64(zmm2, zmm5[0].q)
                            zmm0 = __divps_xmmps_memps(zmm0, data_143442690)
                            r11 = var_378
                            arg4 = var_370
                            r14 = var_368
                            r15 = var_340_1
                            i = i_6
                            arg5 = _mm_cmpeq_epi32(arg5, arg5)
                            
                            if ((rsi_11.b & 4) != 0)
                                float var_4a0_4 = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                            
                            zmm4 &= data_143442680
                            zmm3 = temp0_794[0].q | temp0_793[0].q << 0x40
                            float temp0_799[0x4] = _mm_mul_ps(zmm2, zmm0)
                            
                            if ((rsi_11.b & 8) != 0)
                                int32_t var_49c_4 = _mm_shuffle_epi32(zmm1, 0xe7).d
                            
                            zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442490)
                            float temp0_802[0x4] = _mm_add_ps(zmm3, temp0_799)
                            
                            if (rdi_20 != 0)
                                var_498 = temp0_802[0]
                            
                            float temp0_803[0x4] = _mm_unpacklo_ps(arg6, zmm9[0].q)
                            float temp0_804[0x4] = __unpcklps_xmmps_memdq(zmm6, var_428)
                            zmm0 = _mm_cvtepi32_ps(zmm4)
                            
                            if ((rsi_11.b & 2) != 0)
                                float var_494_4 = _mm_shuffle_epi32(temp0_802, 0xe5)[0]
                            
                            zmm13 = _mm_unpacklo_ps(zmm13, zmm12.q)
                            float temp0_808[0x4] = __unpcklps_xmmps_memdq(arg7, var_3b8)
                            zmm6 = temp0_804[0].q | temp0_803[0].q << 0x40
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            
                            if ((rsi_11.b & 4) != 0)
                                float var_490_4 = _mm_shuffle_epi32(temp0_802, 0x4e)[0]
                            
                            arg7 = temp0_808[0].q | zmm13.q << 0x40
                            float temp0_811[0x4] = _mm_mul_ps(zmm6, zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            arg6 = var_468
                            
                            if ((rsi_11.b & 8) != 0)
                                int32_t var_48c_3 = _mm_shuffle_epi32(temp0_802, 0xe7).d
                            
                            float temp0_814[0x4] = _mm_add_ps(arg7, temp0_811)
                            float temp0_815[0x4] = _mm_sub_ps(data_142d3f670, zmm1)
                            float temp0_816[0x4] = _mm_mul_ps(temp0_802, temp0_802)
                            
                            if (rdi_20 != 0)
                                var_488 = temp0_814[0]
                            
                            float temp0_817[0x4] = _mm_sub_ps(temp0_815, temp0_816)
                            zmm0 = _mm_mul_ps(temp0_814, temp0_814)
                            
                            if ((rsi_11.b & 2) != 0)
                                uint32_t var_484_3 = _mm_shuffle_epi32(temp0_814, 0xe5)[0]
                            
                            float temp0_820[0x4] = _mm_sub_ps(temp0_817, zmm0)
                            
                            if ((rsi_11.b & 4) != 0)
                                int32_t var_480_3 = _mm_shuffle_epi32(temp0_814, 0x4e).d
                            
                            zmm1 = _mm_cmpeq_ps(zx.o(0), temp0_820, 1)
                            zmm0 = _mm_sqrt_ps(temp0_820)
                            
                            if ((rsi_11.b & 8) == 0)
                                zmm1 = _mm_and_ps(zmm1, zmm0)
                                
                                if (rdi_20 != 0)
                                    goto label_14030f0f9
                                
                                goto label_1403128ce
                            
                            float var_47c_2 = _mm_shuffle_epi32(temp0_814, 0xe7)[0]
                            zmm1 = _mm_and_ps(zmm1, zmm0)
                            
                            if (rdi_20 == 0)
                            label_1403128ce:
                                arg7 = data_142d3f670
                                
                                if ((rsi_11.b & 2) != 0)
                                    goto label_140312445
                                
                                goto label_140312452
                            
                        label_14030f0f9:
                            var_478 = zmm1[0]
                            arg7 = data_142d3f670
                            
                            if ((rsi_11.b & 2) != 0)
                                goto label_140312445
                            
                            goto label_140312452
                        case 4
                            zmm12 = _mm_add_epi64(zmm12, zmm4)
                            zmm8 = _mm_add_epi64(zmm8, zmm1)
                            zmm0 = _mm_shuffle_epi32(zmm5, 0x50) & zmm8
                            zmm1 = _mm_shuffle_epi32(zmm5, 0xfa) & zmm12
                            int64_t rcx_61 = _mm_shuffle_epi32(zmm0, 0x4e).q
                            int64_t rdx_99 = zmm1[0].q
                            int64_t rbp_22 = _mm_shuffle_epi32(zmm1, 0x4e).q
                            zmm0 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), 
                                    zx.o(*(arg4 + rcx_61))[0].q), 
                                _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_99)), 
                                zx.o(*(arg4 + rbp_22))[0].q)[0].q)
                            uint32_t temp0_834[0x4] = _mm_srli_epi32(zmm0, 0x15)
                            zmm2 = _mm_srli_epi32(zmm0, 0xa)
                            zmm1 = __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(temp0_834, data_143442440)), 
                                data_143442690)
                            rsi_11 = zx.q(temp0_655)
                            rdi_20 = rsi_11 & 1
                            
                            if (rdi_20 == 0)
                                zmm2 &= data_143442480
                                
                                if ((rsi_11.b & 2) != 0)
                                    goto label_14030f139
                                
                                goto label_140312986
                            
                            var_4a8 = zmm1[0]
                            zmm2 &= data_143442480
                            
                            if ((rsi_11.b & 2) != 0)
                            label_14030f139:
                                float var_4a4_2 = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                                zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                                
                                if ((rsi_11.b & 4) == 0)
                                    goto label_140312998
                                
                                goto label_14030f159
                            
                        label_140312986:
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                            
                            if ((rsi_11.b & 4) == 0)
                            label_140312998:
                                zmm2 = _mm_cvtepi32_ps(zmm2)
                                
                                if ((rsi_11.b & 8) != 0)
                                    goto label_14030f174
                                
                                goto label_1403129a5
                            
                        label_14030f159:
                            float var_4a0_2 = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rsi_11.b & 8) != 0)
                            label_14030f174:
                                float var_49c_2 = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                                zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                                
                                if (rdi_20 == 0)
                                    goto label_1403129b5
                                
                                goto label_14030f18d
                            
                        label_1403129a5:
                            zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                            
                            if (rdi_20 == 0)
                            label_1403129b5:
                                zmm0 &= data_143442680
                                
                                if ((rsi_11.b & 2) != 0)
                                    goto label_14030f1ad
                                
                                goto label_1403129c7
                            
                        label_14030f18d:
                            var_498 = zmm2[0]
                            zmm0 &= data_143442680
                            
                            if ((rsi_11.b & 2) != 0)
                            label_14030f1ad:
                                float var_494_2 = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                                zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                                
                                if ((rsi_11.b & 4) == 0)
                                    goto label_1403129d9
                                
                                goto label_14030f1cd
                            
                        label_1403129c7:
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            float var_48c_4
                            
                            if ((rsi_11.b & 4) != 0)
                            label_14030f1cd:
                                float var_490_2 = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                zmm1 = _mm_mul_ps(zmm1, zmm1)
                                
                                if ((rsi_11.b & 8) != 0)
                                    var_48c_4 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            else
                            label_1403129d9:
                                zmm0 = _mm_cvtepi32_ps(zmm0)
                                zmm1 = _mm_mul_ps(zmm1, zmm1)
                                
                                if ((rsi_11.b & 8) != 0)
                                    var_48c_4 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                            float temp0_847[0x4] = _mm_sub_ps(zmm7, zmm1)
                            float temp0_848[0x4] = _mm_mul_ps(zmm2, zmm2)
                            
                            if (rdi_20 != 0)
                                var_488 = zmm0.d
                            
                            float temp0_849[0x4] = _mm_sub_ps(temp0_847, temp0_848)
                            zmm1 = _mm_mul_ps(zmm0, zmm0)
                            
                            if ((rsi_11.b & 2) != 0)
                                float var_484_4 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                            
                            float temp0_852[0x4] = _mm_sub_ps(temp0_849, zmm1)
                            
                            if ((rsi_11.b & 4) != 0)
                                uint32_t var_480_4 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                            
                            zmm1 = _mm_cmpeq_ps(zx.o(0), temp0_852, 1)
                            float temp0_855[0x4] = _mm_sqrt_ps(temp0_852)
                            
                            if ((rsi_11.b & 8) == 0)
                                zmm1 = _mm_and_ps(zmm1, temp0_855)
                                
                                if (rdi_20 != 0)
                                    goto label_14030f205
                                
                                goto label_140312a65
                            
                            int32_t var_47c_3 = _mm_shuffle_epi32(zmm0, 0xe7).d
                            zmm1 = _mm_and_ps(zmm1, temp0_855)
                            
                            if (rdi_20 != 0)
                            label_14030f205:
                                var_478 = zmm1[0]
                                
                                if ((rsi_11.b & 2) == 0)
                                    goto label_140312a6f
                                
                                goto label_14030f21d
                            
                        label_140312a65:
                            int32_t var_470_2
                            
                            if ((rsi_11.b & 2) != 0)
                            label_14030f21d:
                                int32_t var_474_1 = _mm_shuffle_epi32(zmm1, 0xe5).d
                                
                                if ((rsi_11.b & 4) != 0)
                                    var_470_2 = _mm_shuffle_epi32(zmm1, 0x4e).d
                            else
                            label_140312a6f:
                                
                                if ((rsi_11.b & 4) != 0)
                                    var_470_2 = _mm_shuffle_epi32(zmm1, 0x4e).d
                            arg7 = zmm7
                            
                            if ((rsi_11.b & 8) != 0)
                                var_46c_3 = _mm_shuffle_epi32(zmm1, 0xe7).d
                        case 5
                            zmm12 = _mm_add_epi64(zmm12, zmm4)
                            zmm8 = _mm_add_epi64(zmm8, zmm1)
                            zmm0 = _mm_shuffle_epi32(zmm5, 0x50) & zmm8
                            zmm1 = _mm_shuffle_epi32(zmm5, 0xfa) & zmm12
                            int64_t rcx_62 = _mm_shuffle_epi32(zmm0, 0x4e).q
                            int64_t rdx_100 = zmm1[0].q
                            int64_t rbp_23 = _mm_shuffle_epi32(zmm1, 0x4e).q
                            zmm1 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), zx.q(*(arg4 + rcx_62))), 
                                _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_100)), 
                                    zx.o(*(arg4 + rbp_23))[0].q).q)
                            zmm0 = _mm_srli_epi32(zmm1, 0x15)
                            zmm2 = _mm_srli_epi32(zmm1, 5) & data_143442600
                            zmm0 = __paddd_xmmdq_memdq(zmm0 & data_143442320, data_143442330)
                                | (zmm0 & data_143442610) | zmm2
                            rsi_11 = zx.q(temp0_655)
                            rdi_20 = rsi_11 & 1
                            
                            if (rdi_20 != 0)
                                var_4a8 = zmm0.d
                            
                            zmm3 = _mm_srli_epi32(zmm1, 0xa)
                            zmm2 = _mm_slli_epi32(zmm1, 6)
                            
                            if ((rsi_11.b & 2) != 0)
                                int32_t var_4a4_4 = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            zmm2 &= data_143442600
                            zmm4 = zmm3 & data_143442610
                            zmm3 &= data_143442320
                            
                            if ((rsi_11.b & 4) == 0)
                                zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                                zmm2 |= zmm4
                                
                                if ((rsi_11.b & 8) != 0)
                                    goto label_14030f25e
                                
                                goto label_140312baf
                            
                            float var_4a0_3 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                            zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                            zmm2 |= zmm4
                            
                            if ((rsi_11.b & 8) != 0)
                            label_14030f25e:
                                int32_t var_49c_3 = _mm_shuffle_epi32(zmm0, 0xe7).d
                                zmm2 |= zmm3
                                
                                if (rdi_20 == 0)
                                    goto label_140312bc0
                                
                                goto label_14030f274
                            
                        label_140312baf:
                            zmm2 |= zmm3
                            int32_t var_494_5
                            
                            if (rdi_20 != 0)
                            label_14030f274:
                                var_498 = zmm2[0]
                                zmm3 = _mm_slli_epi32(zmm1, 0x11)
                                
                                if ((rsi_11.b & 2) != 0)
                                    var_494_5 = _mm_shuffle_epi32(zmm2, 0xe5).d
                            else
                            label_140312bc0:
                                zmm3 = _mm_slli_epi32(zmm1, 0x11)
                                
                                if ((rsi_11.b & 2) != 0)
                                    var_494_5 = _mm_shuffle_epi32(zmm2, 0xe5).d
                            zmm4 = zmm1 & data_143442620
                            zmm3 &= data_143442630
                            zmm1 &= data_143442640
                            
                            if ((rsi_11.b & 4) != 0)
                                float var_490_5 = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                            
                            zmm4 = __paddd_xmmdq_memdq(zmm4, data_1434423a0)
                            zmm0 = _mm_mul_ps(zmm0, zmm0)
                            
                            if ((rsi_11.b & 8) != 0)
                                uint32_t var_48c_5 = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                            
                            zmm3 = zmm3 | zmm1 | zmm4
                            zmm1 = _mm_sub_ps(zmm7, zmm0)
                            float temp0_882[0x4] = _mm_mul_ps(zmm2, zmm2)
                            
                            if (rdi_20 != 0)
                                var_488 = zmm3[0]
                            
                            zmm1 = _mm_sub_ps(zmm1, temp0_882)
                            zmm0 = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((rsi_11.b & 2) != 0)
                                float var_484_5 = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                            
                            zmm1 = _mm_sub_ps(zmm1, zmm0)
                            
                            if ((rsi_11.b & 4) != 0)
                                int32_t var_480_5 = _mm_shuffle_epi32(zmm3, 0x4e).d
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                            zmm1 = _mm_sqrt_ps(zmm1)
                            
                            if ((rsi_11.b & 8) == 0)
                                zmm0 = _mm_and_ps(zmm0, zmm1)
                                
                                if (rdi_20 != 0)
                                    goto label_14030f2af
                                
                                goto label_140312c9c
                            
                            float var_47c_4 = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (rdi_20 != 0)
                            label_14030f2af:
                                var_478 = zmm0.d
                                
                                if ((rsi_11.b & 2) == 0)
                                    goto label_140312ca6
                                
                                goto label_14030f2c7
                            
                        label_140312c9c:
                            uint32_t var_470_3
                            
                            if ((rsi_11.b & 2) != 0)
                            label_14030f2c7:
                                uint32_t var_474_2 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                                
                                if ((rsi_11.b & 4) != 0)
                                    var_470_3 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                            else
                            label_140312ca6:
                                
                                if ((rsi_11.b & 4) != 0)
                                    var_470_3 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                            arg7 = zmm7
                            
                            if ((rsi_11.b & 8) != 0)
                                var_46c_3 = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                zmm3 = var_4a8.o
                zmm7 = var_498.o
                zmm12 = var_488.o
                zmm10 = var_478.o
                float temp0_904[0x4] = _mm_mul_ps(var_528, zmm3)
                zmm1 = _mm_add_ps(_mm_mul_ps(var_518, zmm7), temp0_904)
                float temp0_908[0x4] = _mm_add_ps(_mm_mul_ps(var_508, zmm12), zmm1)
                zmm1 = _mm_add_ps(_mm_mul_ps(var_4f8, zmm10), temp0_908)
                float temp0_911[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 2)
                zmm2 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm1, 6), data_142d3f7e0)
                zmm5 = _mm_or_ps(_mm_and_ps(temp0_911, arg7), zmm2)
                float temp0_916[0x4] = _mm_mul_ps(zmm3, var_3e8_2)
                float temp0_917[0x4] = _mm_mul_ps(zmm7, var_3e8_2)
                zmm12 = _mm_mul_ps(zmm12, var_3e8_2)
                float temp0_919[0x4] = _mm_mul_ps(zmm10, var_3e8_2)
                float temp0_921[0x4] = _mm_mul_ps(_mm_sub_ps(arg7, var_3e8_2), zmm5)
                zmm4 = _mm_add_ps(_mm_mul_ps(var_528, temp0_921), temp0_916)
                zmm0 = _mm_add_ps(_mm_mul_ps(var_518, temp0_921), temp0_917)
                zmm9 = _mm_add_ps(_mm_mul_ps(var_508, temp0_921), zmm12)
                float temp0_929[0x4] = _mm_add_ps(_mm_mul_ps(temp0_921, var_4f8), temp0_919)
                uint128_t var_168_1 = zmm4
                uint128_t var_158_1 = zmm0
                int32_t var_148_1[0x4] = zmm9
                float var_138_1[0x4] = temp0_929
                zmm1 = _mm_mul_ps(zmm4, zmm4)
                float temp0_931[0x4] = _mm_mul_ps(zmm0, zmm0)
                float temp0_933[0x4] = _mm_add_ps(_mm_mul_ps(zmm9, zmm9), zmm1)
                float temp0_936[0x4] =
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_929, temp0_929), temp0_931), temp0_933)
                zmm10 = data_142d3f640
                zmm1 = _mm_mul_ps(temp0_936, zmm10)
                zmm8 = _mm_cmpeq_ps(data_142d3f5c0, temp0_936, 2)
                float temp0_939[0x4] = _mm_rsqrt_ps(temp0_936)
                float temp0_944[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm10, _mm_mul_ps(_mm_mul_ps(temp0_939, temp0_939), zmm1)), 
                        temp0_939), 
                    temp0_939)
                float temp0_949[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm10, _mm_mul_ps(_mm_mul_ps(temp0_944, temp0_944), zmm1)), 
                        temp0_944), 
                    temp0_944)
                zmm4 = _mm_and_ps(_mm_mul_ps(zmm4, temp0_949), zmm8)
                
                if (rdi_20 != 0)
                    var_528.d = zmm4.d
                
                if ((rsi_11.b & 2) == 0)
                    if ((rsi_11.b & 4) != 0)
                        goto label_14030ef2c
                    
                    goto label_1403132fd
                
                var_528:4.d = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                
                if ((rsi_11.b & 4) != 0)
                label_14030ef2c:
                    var_528:8.d = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                    zmm0 = _mm_mul_ps(zmm0, temp0_949)
                    
                    if ((rsi_11.b & 8) == 0)
                        goto label_14031330a
                    
                    goto label_14030ef44
                
            label_1403132fd:
                zmm0 = _mm_mul_ps(zmm0, temp0_949)
                
                if ((rsi_11.b & 8) != 0)
                label_14030ef44:
                    var_528:0xc.d = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                    zmm0 = _mm_and_ps(zmm0, zmm8)
                    
                    if (rdi_20 != 0)
                        var_518.d = zmm0.d
                else
                label_14031330a:
                    zmm0 = _mm_and_ps(zmm0, zmm8)
                    
                    if (rdi_20 != 0)
                        var_518.d = zmm0.d
                
                if ((rsi_11.b & 2) == 0)
                    if ((rsi_11.b & 4) != 0)
                        goto label_14030ef76
                    
                    goto label_14031332d
                
                var_518:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                
                if ((rsi_11.b & 4) != 0)
                label_14030ef76:
                    var_518:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                    zmm9 = _mm_mul_ps(zmm9, temp0_949)
                    
                    if ((rsi_11.b & 8) == 0)
                        goto label_14031333b
                    
                    goto label_14030ef8f
                
            label_14031332d:
                zmm9 = _mm_mul_ps(zmm9, temp0_949)
                
                if ((rsi_11.b & 8) != 0)
                label_14030ef8f:
                    var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    zmm9 = _mm_and_ps(zmm9, zmm8)
                    
                    if (rdi_20 != 0)
                        var_508[0] = zmm9[0]
                else
                label_14031333b:
                    zmm9 = _mm_and_ps(zmm9, zmm8)
                    
                    if (rdi_20 != 0)
                        var_508[0] = zmm9[0]
                
                if ((rsi_11.b & 2) != 0)
                    var_508[1] = _mm_shuffle_epi32(zmm9, 0xe5).d
                
                zmm1 = _mm_cmpeq_ps(data_142d3f5c0, temp0_936, 6)
                float temp0_958[0x4] = _mm_mul_ps(temp0_949, temp0_929)
                
                if ((rsi_11.b & 4) != 0)
                    var_508[2] = _mm_shuffle_epi32(zmm9, 0x4e).d
                
                zmm3 = _mm_and_ps(temp0_958, zmm8)
                zmm7 = arg7
                uint32_t temp0_961[0x4] = _mm_and_ps(zmm1, arg7)
                
                if ((rsi_11.b & 8) != 0)
                    var_508[3] = _mm_shuffle_epi32(zmm9, 0xe7).d
                
                zmm3 = _mm_or_ps(zmm3, temp0_961)
                
                if (rdi_20 != 0)
                    var_4f8[0] = zmm3[0]
                
                if ((rsi_11.b & 2) == 0)
                    if ((rsi_11.b & 4) != 0)
                        goto label_14030efc1
                    
                    goto label_1403133bd
                
                var_4f8[1] = _mm_shuffle_epi32(zmm3, 0xe5).d
                
                if ((rsi_11.b & 4) == 0)
                label_1403133bd:
                    
                    if ((rsi_11.b & 8) != 0)
                        var_4f8[3] = _mm_shuffle_epi32(zmm3, 0xe7).d
                else
                label_14030efc1:
                    var_4f8[2] = _mm_shuffle_epi32(zmm3, 0x4e).d
                    
                    if ((rsi_11.b & 8) != 0)
                        var_4f8[3] = _mm_shuffle_epi32(zmm3, 0xe7).d
        
        zmm1 = var_518
        zmm2 = var_508
        zmm3 = var_4f8
        zmm4 = _mm_unpacklo_ps(zmm2, zmm3[0].q)
        float temp0_966[0x4] = _mm_unpackhi_ps(zmm2, zmm3)
        float temp0_967[0x4] = _mm_unpacklo_ps(var_528, zmm1[0].q)
        zmm0 = _mm_unpackhi_ps(var_528, zmm1)
        zmm1 = temp0_967[0].q | zmm4.q << 0x40
        uint32_t var_1a8_1[0x4] = zmm1
        zmm3 = _mm_unpackhi_pd(temp0_967, zmm4.q)
        float var_198_1[0x4] = zmm3
        zmm4 = zmm0.q | temp0_966[0].q << 0x40
        uint128_t var_188_1 = zmm4
        uint128_t var_178_1 = _mm_unpackhi_pd(zmm0, temp0_966[0].q)
        r11[sx.q(var_328_1.d) * 3] = zmm1
        r11[sx.q(_mm_shuffle_epi32(var_328_1, 0x4e).d) * 3] = zmm3
        zmm0 = var_3a8_1
        r11[sx.q(zmm0.d) * 3] = zmm4
        r11[sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) * 3] = var_178_1
        r13 = zx.q(r13.d + 4)
    while (r13.d s< i)

uint64_t i_5 = zx.q(arg12)

if (r13.d s< i_5.d)
    zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r13.d), 0), data_142e11d00)
    arg6 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i_5.d), 0), zmm0)
    zmm0 = _mm_slli_epi32(zmm0, 3) & arg6
    int64_t rdx_102 = sx.q(zmm0.d)
    int64_t rbp_24 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
    int64_t rbx_23 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
    int64_t rsi_13 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
    zmm6 = zx.o(*(r15 + rsi_13))
    arg5 = zx.o(*(r15 + rbx_23))
    zmm12 = *(r15 + rdx_102)
    zmm7 = *(r15 + rbp_24)
    zmm0 = data_142fc95e0 & arg6
    uint64_t rdx_103 = zx.q(zmm0.d)
    uint64_t rbp_25 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
    uint64_t rbx_24 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
    zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + r15 + rsi_13))
    zmm1 = _mm_unpacklo_epi32(zx.o(*(rbx_24 + r15 + rbx_23)), zmm0.q)
    zmm0 = _mm_slli_epi32(
        _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(rdx_103 + r15 + rdx_102)), 
                zx.o(*(rbp_25 + r15 + rbp_24))[0].q), 
            zmm1[0].q), 
        4) & arg6
    zmm1 = data_142fc95f0 & arg6
    int64_t rax_157 = sx.q(zmm0.d) + arg3
    uint64_t r10_9 = zx.q(zmm1[0])
    int64_t rcx_67 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + arg3
    uint64_t rbx_25 = zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
    int64_t rdx_106 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + arg3
    uint64_t rdi_38 = zx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
    int64_t rsi_17 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + arg3
    zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + rsi_17))
    zmm3 = _mm_unpacklo_epi32(zx.o(*(rdi_38 + rdx_106)), zmm0.q)
    zmm10 = _mm_unpacklo_epi32(zx.o(*(r10_9 + rax_157)), zx.q(*(rbx_25 + rcx_67)))
    zmm4 = _mm_unpacklo_epi64(zmm10, zmm3[0].q)
    zmm0 = data_143442650 & arg6
    uint64_t r8 = zx.q(zmm0.d)
    uint64_t rbx_26 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
    uint64_t rdi_39 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
    zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_17))
    zmm1 = _mm_unpacklo_epi32(zx.o(*(rdi_39 + rdx_106)), zmm0.q)
    zmm5 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(r8 + rax_157)), zx.q(*(rbx_26 + rcx_67))), 
        zmm1[0].q)
    zmm2 = zx.o(0)
    zmm8 = _mm_cmpeq_epi32(data_142d3f5b0, zmm5)
    zmm1 = zmm8 & arg6
    char temp0_1004 = _mm_movemask_ps(zmm1)
    float var_388_1[0x4] = arg6
    uint128_t var_3c8_1 = zmm4
    float var_568[0x4]
    float var_558[0x4]
    uint128_t var_548
    int32_t var_538[0x4]
    
    if (temp0_1004 != 0)
        float var_3e8_3[0x4] = zmm7
        var_458 = zmm6
        var_468 = zmm8
        var_3d8 = zmm10
        int32_t var_438_1[0x4] = arg5
        var_418 = zmm12
        zmm4 &= zmm1
        int64_t rdx_107 = sx.q(zmm4.d)
        void* rcx_69 = arg4 + rdx_107
        zmm6 = *(arg4 + rdx_107)
        int64_t rbp_28 = sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d)
        void* rdx_109 = arg4 + rbp_28
        zmm10 = *(arg4 + rbp_28)
        int64_t rbx_27 = sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])
        void* rbp_30 = arg4 + rbx_27
        zmm2 = *(arg4 + rbx_27)
        int64_t rdi_40 = sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d)
        void* rbx_29 = arg4 + rdi_40
        zmm9 = *(arg4 + rdi_40)
        zmm0 = data_142fc95e0 & zmm1
        zmm7 = *(zx.q(zmm0.d) + rcx_69)
        zmm8 = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rdx_109)
        arg5 = *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_30)
        arg6 = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbx_29)
        zmm1 &= data_142fc95f0
        arg7 = *(zx.q(zmm1[0]) + rcx_69)
        zmm13 = *(zx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + rdx_109)
        zmm12 = *(zx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + rbp_30)
        zmm1 = *(zx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + rbx_29)
        
        if ((temp0_1004 & 1) == 0)
            if ((temp0_1004 & 2) != 0)
                goto label_140313d9a
            
            goto label_1403137c5
        
        var_568[0] = zmm6[0]
        
        if ((temp0_1004 & 2) != 0)
        label_140313d9a:
            var_568[1] = zmm10[0]
            
            if ((temp0_1004 & 4) == 0)
                goto label_1403137ce
            
            goto label_140313daa
        
    label_1403137c5:
        
        if ((temp0_1004 & 4) != 0)
        label_140313daa:
            var_568[2] = zmm2[0]
            
            if ((temp0_1004 & 8) != 0)
            label_140313db9:
                var_568[3] = zmm9[0]
                
                if ((temp0_1004 & 1) == 0)
                    goto label_1403137e0
                
                goto label_140313dc9
        else
        label_1403137ce:
            
            if ((temp0_1004 & 8) != 0)
                goto label_140313db9
        
        if ((temp0_1004 & 1) != 0)
        label_140313dc9:
            var_558[0] = zmm7[0]
            zmm2 = _mm_unpacklo_ps(zmm2, zmm9[0].q)
            zmm6 = _mm_unpacklo_ps(zmm6, zmm10[0].q)
            
            if ((temp0_1004 & 2) != 0)
                var_558[1] = zmm8[0]
        else
        label_1403137e0:
            zmm2 = _mm_unpacklo_ps(zmm2, zmm9[0].q)
            zmm6 = _mm_unpacklo_ps(zmm6, zmm10[0].q)
            
            if ((temp0_1004 & 2) != 0)
                var_558[1] = zmm8[0]
        
        zmm6 = zmm6[0].q | zmm2[0].q << 0x40
        zmm0 = _mm_unpacklo_ps(arg5, arg6[0].q)
        float temp0_1017[0x4] = _mm_unpacklo_ps(zmm7, zmm8[0].q)
        zmm10 = var_3d8
        zmm4 = var_3c8_1
        
        if ((temp0_1004 & 4) != 0)
            var_558[2] = arg5[0]
        
        zmm7 = temp0_1017[0].q | zmm0.q << 0x40
        zmm9 = zmm1
        float temp0_1018[0x4] = _mm_unpacklo_ps(zmm12, zmm1[0].q)
        zmm1 = _mm_unpacklo_ps(arg7, zmm13.q)
        float temp0_1020[0x4] = _mm_mul_ps(zmm6, zmm6)
        zmm0 = data_142d3f670
        zmm8 = var_468
        
        if ((temp0_1004 & 8) != 0)
            var_558[3] = arg6[0]
        
        zmm1 = zmm1[0].q | temp0_1018[0].q << 0x40
        zmm0 = _mm_sub_ps(zmm0, temp0_1020)
        float temp0_1022[0x4] = _mm_mul_ps(zmm7, zmm7)
        
        if ((temp0_1004 & 1) != 0)
            var_548.d = arg7[0]
        
        zmm0 = _mm_sub_ps(zmm0, temp0_1022)
        zmm1 = _mm_mul_ps(zmm1, zmm1)
        arg6 = var_388_1
        zmm6 = var_458
        zmm2 = zx.o(0)
        
        if ((temp0_1004 & 2) != 0)
            var_548:4.d = zmm13.d
        
        zmm0 = _mm_sub_ps(zmm0, zmm1)
        zmm7 = var_3e8_3
        
        if ((temp0_1004 & 4) != 0)
            var_548:8.d = zmm12.d
        
        zmm1 = _mm_cmpeq_ps(zx.o(0), zmm0, 1)
        zmm0 = _mm_sqrt_ps(zmm0)
        
        if ((temp0_1004 & 8) == 0)
            zmm1 = _mm_and_ps(zmm1, zmm0)
            zmm12 = var_418
            
            if ((temp0_1004 & 1) != 0)
                goto label_140313e01
            
            goto label_1403138d7
        
        var_548:0xc.d = zmm9[0]
        zmm1 = _mm_and_ps(zmm1, zmm0)
        zmm12 = var_418
        
        if ((temp0_1004 & 1) != 0)
        label_140313e01:
            var_538[0] = zmm1[0]
            arg5 = var_438_1
            
            if ((temp0_1004 & 2) == 0)
                goto label_1403138e7
            
            goto label_140313e1f
        
    label_1403138d7:
        arg5 = var_438_1
        
        if ((temp0_1004 & 2) == 0)
        label_1403138e7:
            
            if ((temp0_1004 & 4) != 0)
                goto label_140313e33
            
            goto label_1403138f0
        
    label_140313e1f:
        var_538[1] = _mm_shuffle_epi32(zmm1, 0xe5).d
        
        if ((temp0_1004 & 4) == 0)
        label_1403138f0:
            
            if ((temp0_1004 & 8) != 0)
                var_538[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
        else
        label_140313e33:
            var_538[2] = _mm_shuffle_epi32(zmm1, 0x4e).d
            
            if ((temp0_1004 & 8) != 0)
                var_538[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
    
    arg5 = _mm_unpacklo_epi32(arg5, zmm6[0].q)
    zmm12 = _mm_unpacklo_ps(zmm12, zmm7[0].q)
    zmm8 &= not.o(arg6)
    char temp0_1032 = _mm_movemask_ps(zmm8)
    uint32_t (* r8_1)[0x4] = var_378
    
    if (temp0_1032 != 0)
        zmm1 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm3, zmm10[0].q))
        zmm2 = _mm_cmpgt_epi32(zmm2, zmm4)
        zmm3 = _mm_unpacklo_epi32(zmm3, zmm1[0].q)
        zmm10 = _mm_unpacklo_epi32(zmm10, zmm2[0].q)
        zmm9 = _mm_shuffle_epi32(zx.o(rax), 0) & data_1430219f0
        zmm2 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
        zmm10 = _mm_add_epi64(zmm10, zmm9)
        zmm9 = _mm_add_epi64(zmm9, zmm3)
        arg7 = _mm_cmpeq_epi32(arg7, arg7)
        zmm3 = data_1434422d0
        zmm1 = arg9
        int32_t rax_159
        rax_159.b = 0f f>= zmm1[0]
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_159)) ^ arg7, 0)
        zmm3 = _mm_cmpgt_epi32(zmm3, zmm5) & not.o(zmm0)
        zmm13 = zmm3 & zmm8
        uint32_t temp0_1045 = _mm_movemask_ps(zmm13)
        zmm6 = zx.o(0)
        zmm7 = zx.o(0)
        zmm4 = zx.o(0)
        int32_t var_438_2[0x4] = arg5
        float var_3e8_4[0x4] = zmm2
        
        if (temp0_1045 == 0)
            goto label_140313e5a
        
        arg7 = _mm_add_epi32(arg7, zmm5)
        uint64_t r13_1
        
        if (not(zmm1[0] f>= 1f))
            float var_3a8_2[0x4] = zmm3
            var_468 = zmm8
            var_418 = zmm12
            zmm3 = zmm1
            arg6 = _mm_shuffle_epi32(zx.o(arg4), 0x44)
            zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm5, 0xf5), zmm2), 0xe8)
            zmm5 = _mm_mul_epu32(zmm5, zmm2)
            zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm5, 0xe8), zmm0.q)
            zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
            zmm0 = _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q)
            zmm1 = _mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1)[0].q)
            zmm12 = _mm_add_epi64(zmm9, arg6)
            arg6 = _mm_add_epi64(arg6, zmm10)
            zmm2 = data_143442a20
            zmm12 = _mm_add_epi64(_mm_add_epi64(zmm12, zmm2), zmm0)
            arg6 = _mm_add_epi64(_mm_add_epi64(arg6, zmm2), zmm1)
            zmm0 = data_143442c10
            arg6 &= zmm0
            zmm12 &= zmm0
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1 = _mm_cvtepi32_ps(arg7)
            zmm2 = zx.o(0)
            zmm2[0] = float.s(arg8 - 1)
            zmm1 = _mm_mul_ps(zmm1, zmm0)
            zmm2[0] = zmm2[0] * zmm3[0]
            var_448 = zmm2
            int32_t rax_162 = int.d(zmm2[0])
            int32_t rbx_30 = 0
            
            if (rax_162 s>= 0)
                rbx_30 = rax_162
            
            if (rbx_30 s> arg8 - 2)
                rbx_30 = arg8 - 2
            
            zmm0 = _mm_cvttps_epi32(zmm1)
            zmm2 = _mm_cmpgt_epi32(zmm0, zx.o(0)) & zmm0
            zmm8 = _mm_cmpgt_epi32(arg7, zmm2)
            zmm8 = (zmm8 & not.o(arg7)) | (zmm2 & zmm8)
            var_458 = arg7
            var_3d8 = zmm10
            int32_t var_328_2[0x4] = zmm9
            
            if (arg8 s< 0x100)
                zmm0 = _mm_shuffle_epi32(zmm8, 0x4e)
                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm8)
                zmm2 = _mm_add_epi64(_mm_unpacklo_epi32(zmm8, zmm1[0].q), arg6)
                char rbp_36 = temp0_1045.b
                
                if ((rbp_36 & 1) == 0)
                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                    
                    if ((rbp_36 & 2) != 0)
                        goto label_140315168
                    
                    goto label_14031412b
                
                zmm1 = zx.o(*zmm2[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                
                if ((rbp_36 & 2) != 0)
                label_140315168:
                    zmm1 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), zmm1, 0), zmm1, 
                        0xe2)
                    zmm0 = _mm_add_epi64(zmm0, zmm12)
                    
                    if ((rbp_36 & 4) == 0)
                        goto label_14031413a
                    
                    goto label_14031518a
                
            label_14031412b:
                zmm0 = _mm_add_epi64(zmm0, zmm12)
                
                if ((rbp_36 & 4) != 0)
                label_14031518a:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(*zmm0.q), zmm1, 0x30), 0x84)
                    
                    if ((rbp_36 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                else
                label_14031413a:
                    
                    if ((rbp_36 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                
                uint32_t temp0_1154[0x4] = __andps_xmmxud_memxud(zmm1, data_142ed6810)
                zmm0 = zx.o(rbx_30)
                zmm9 = _mm_shuffle_epi32(zmm0, 0)
                zmm1 = _mm_cmpgt_epi32(temp0_1154, zmm9)
                var_428 = zmm1 ^ _mm_cmpeq_epi32(zmm0, zmm0)
                zmm2 = zmm8
                
                if (_mm_movemask_ps(zmm1 & not.o(zmm13)) != 0)
                    zmm10 = (zmm1 & not.o(arg7)) | (zmm1 & zmm8)
                    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                    zmm0 = _mm_sub_epi32(zmm8, zmm3)
                    zmm1 &= not.o(_mm_cmpgt_epi32(zmm0, arg7) ^ zmm3)
                    zmm7 = zmm13 & zmm1
                    uint32_t i_1 = _mm_movemask_ps(zmm7)
                    
                    if (i_1 == 0)
                        zmm2 = zmm10
                    else
                        zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
                        zmm6 = zmm8
                        
                        do
                            arg5 = zmm0
                            zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                            arg7 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            zmm2 = _mm_add_epi64(
                                _mm_unpacklo_epi32(arg5, _mm_cmpgt_epi32(zx.o(0), arg5).q), arg6)
                            char temp0_1176 = _mm_movemask_ps(zmm7)
                            
                            if ((temp0_1176 & 1) == 0)
                                zmm0 = _mm_unpacklo_epi32(zmm0, arg7[0].q)
                                
                                if ((temp0_1176 & 2) != 0)
                                    goto label_140314236
                                
                                goto label_1403142b3
                            
                            zmm5[0] = zx.d(*zmm2[0].q)
                            zmm0 = _mm_unpacklo_epi32(zmm0, arg7[0].q)
                            
                            if ((temp0_1176 & 2) != 0)
                            label_140314236:
                                zmm5 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), zmm5, 
                                        0), 
                                    zmm5, 0xe2)
                                arg7 = var_458
                                zmm0 = _mm_add_epi64(zmm0, zmm12)
                                
                                if ((temp0_1176 & 4) == 0)
                                    goto label_1403142c6
                                
                                goto label_14031425c
                            
                        label_1403142b3:
                            arg7 = var_458
                            zmm0 = _mm_add_epi64(zmm0, zmm12)
                            
                            if ((temp0_1176 & 4) != 0)
                            label_14031425c:
                                zmm5 = _mm_shuffle_ps(zmm5, 
                                    _mm_shuffle_ps(zx.o(*zmm0.q), zmm5, 0x30), 0x84)
                                
                                if ((temp0_1176 & 8) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm5, 0x20), 
                                        0x24)
                            else
                            label_1403142c6:
                                
                                if ((temp0_1176 & 8) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm5, 0x20), 
                                        0x24)
                            
                            zmm0 =
                                _mm_cmpgt_epi32(__andps_xmmxud_memxud(zmm5, data_142ed6810), zmm9)
                                & zmm1
                            zmm7 = zx.o(0)
                            
                            if (_mm_movemask_ps(zmm0 & zmm13) != i_1)
                                zmm7 = zmm0 ^ zmm1
                            
                            zmm2 = (zmm0 & not.o(zmm10)) | (zmm6 & zmm0)
                            zmm0 = _mm_sub_epi32(arg5, zmm3)
                            zmm1 = _mm_cmpgt_epi32(zmm0, arg7) & not.o(zmm7)
                            zmm7 = zmm1 & zmm13
                            i_1 = _mm_movemask_ps(zmm7)
                            zmm6 = arg5
                            zmm10 = zmm2
                        while (i_1 != 0)
                
                zmm3 = var_428
                uint32_t temp0_1534 = _mm_movemask_ps(_mm_andnot_ps(zmm3, zmm13))
                uint32_t i_2
                int32_t temp0_1536[0x4]
                
                if (temp0_1534 != 0)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ zmm3
                    zmm2 &= zmm3
                    temp0_1536 = _mm_cmpeq_epi32(arg5, arg5)
                    zmm8 = _mm_add_epi32(zmm8, temp0_1536)
                    zmm6 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & zmm1
                    zmm1 = zmm6 & zmm13
                    i_2 = _mm_movemask_ps(zmm1)
                
                if (temp0_1534 == 0 || i_2 == 0)
                    zmm7 = zmm2
                else
                    zmm10 = data_142ed6810
                    
                    do
                        zmm0 = _mm_shuffle_epi32(zmm8, 0x4e)
                        zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                        zmm7 = _mm_add_epi64(
                            _mm_unpacklo_epi32(zmm8, _mm_cmpgt_epi32(zx.o(0), zmm8).q), arg6)
                        char temp0_1552 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_1552 & 1) == 0)
                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                            
                            if ((temp0_1552 & 2) != 0)
                                goto label_140315b35
                            
                            goto label_140315b98
                        
                        zmm5[0] = zx.o(*zmm7[0].q)[0]
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                        
                        if ((temp0_1552 & 2) != 0)
                        label_140315b35:
                            zmm5 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e)[0].q), zmm5, 0), 
                                zmm5, 0xe2)
                            zmm0 = _mm_add_epi64(zmm0, zmm12)
                            
                            if ((temp0_1552 & 4) == 0)
                                goto label_140315ba1
                            
                            goto label_140315b51
                        
                    label_140315b98:
                        zmm0 = _mm_add_epi64(zmm0, zmm12)
                        
                        if ((temp0_1552 & 4) != 0)
                        label_140315b51:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zx.o(*zmm0.q), zmm5, 0x30), 
                                0x84)
                            
                            if ((temp0_1552 & 8) != 0)
                                zmm5 = _mm_shuffle_ps(zmm5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 
                                        0x20), 
                                    0x24)
                        else
                        label_140315ba1:
                            
                            if ((temp0_1552 & 8) != 0)
                                zmm5 = _mm_shuffle_ps(zmm5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 
                                        0x20), 
                                    0x24)
                        
                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm5, zmm10), zmm9) & not.o(zmm6)
                        zmm3 = zx.o(0)
                        
                        if (_mm_movemask_ps(zmm1 & zmm13) != i_2)
                            zmm3 = zmm1 ^ zmm6
                        
                        zmm7 = (zmm1 & not.o(zmm2)) | (zmm1 & zmm8)
                        zmm8 = _mm_add_epi32(zmm8, temp0_1536)
                        zmm6 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & zmm3
                        zmm1 = zmm6 & zmm13
                        i_2 = _mm_movemask_ps(zmm1)
                        zmm2 = zmm7
                    while (i_2 != 0)
                
                zmm7 = _mm_and_ps(zmm7, zmm13)
                zmm0 = _mm_shuffle_epi32(zmm7, 0x4e)
                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm1 = _mm_add_epi64(_mm_unpacklo_epi32(zmm7, _mm_cmpgt_epi32(zx.o(0), zmm7)[0].q), 
                    arg6)
                
                if ((rbp_36 & 1) != 0)
                    zmm10 = zx.o(*zmm1[0].q)
                
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm2[0].q)
                arg5 = var_438_2
                zmm9 = var_328_2
                zmm8 = var_468
                
                if ((rbp_36 & 2) == 0)
                    zmm0 = _mm_add_epi64(zmm0, zmm12)
                    
                    if ((rbp_36 & 4) != 0)
                        goto label_140316e1e
                    
                    goto label_140315ca5
                
                zmm10 = _mm_shuffle_ps(
                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), zmm10, 0), zmm10, 
                    0xe2)
                zmm0 = _mm_add_epi64(zmm0, zmm12)
                
                if ((rbp_36 & 4) == 0)
                label_140315ca5:
                    
                    if ((rbp_36 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm10, 0x20)
                        zmm10 = _mm_shuffle_ps(zmm10, zmm0, 0x24)
                else
                label_140316e1e:
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zx.o(*zmm0.q), zmm10, 0x30), 0x84)
                    
                    if ((rbp_36 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm10, 0x20)
                        zmm10 = _mm_shuffle_ps(zmm10, zmm0, 0x24)
                
                zmm4 = _mm_sub_epi32(zmm7, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm13
                zmm0 = _mm_cmpgt_epi32(zmm4, arg7) & zmm13
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm4 = (arg7 & zmm0) | (zmm0 & not.o(zmm4))
                
                zmm0 = _mm_shuffle_epi32(zmm4, 0x4e)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                arg6 = _mm_add_epi64(arg6, _mm_unpacklo_epi32(zmm4, zmm2[0].q))
                
                if ((rbp_36 & 1) == 0)
                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                    arg7 = var_3a8_2
                    
                    if ((rbp_36 & 2) != 0)
                        goto label_140316e6f
                    
                    goto label_140315d46
                
                zmm2 = zx.o(*arg6[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                arg7 = var_3a8_2
                
                if ((rbp_36 & 2) != 0)
                label_140316e6f:
                    zmm2 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg6, 0x4e)[0].q), zmm2, 0), zmm2, 
                        0xe2)
                    arg6 = var_388_1
                    zmm12 = _mm_add_epi64(zmm12, zmm0)
                    
                    if ((rbp_36 & 4) == 0)
                        goto label_140315d5f
                    
                    goto label_140316e9b
                
            label_140315d46:
                arg6 = var_388_1
                zmm12 = _mm_add_epi64(zmm12, zmm0)
                
                if ((rbp_36 & 4) != 0)
                label_140316e9b:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(*zmm12.q), zmm2, 0x30), 0x84)
                    
                    if ((rbp_36 & 8) != 0)
                        zmm2 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm2, 0x20), 
                            0x24)
                else
                label_140315d5f:
                    
                    if ((rbp_36 & 8) != 0)
                        zmm2 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm2, 0x20), 
                            0x24)
                
                zmm12 = var_418
                zmm10 = __andps_xmmxud_memxud(zmm10, data_142ed6810)
                zmm2 = __andps_xmmxud_memxud(zmm2, data_142ed6810)
                zmm0 = zx.o(0)
                
                if (arg10 != 1)
                label_140315da4:
                    zmm2 = _mm_sub_epi32(zmm2, zmm10)
                    zmm0 = __pcmpgtd_xmmdq_memdq(zmm2, data_142d3f5b0)
                    zmm0 = _mm_div_ps(
                        _mm_sub_ps(_mm_shuffle_ps(var_448, var_448, 0), _mm_cvtepi32_ps(zmm10)), 
                        _mm_cvtepi32_ps((zmm0 & zmm2) | (zmm0 & not.o(data_142d3f5b0))))
            else
                zmm2 = _mm_add_epi32(zmm8, zmm8)
                zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm2 = _mm_add_epi64(_mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q), 
                    arg6)
                char rbp_32 = temp0_1045.b
                
                if ((rbp_32 & 1) == 0)
                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                    
                    if ((rbp_32 & 2) != 0)
                        goto label_140315100
                    
                    goto label_140313b5f
                
                zmm5 = zx.o(*zmm2[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                
                if ((rbp_32 & 2) != 0)
                label_140315100:
                    zmm5 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), zmm5, 0), zmm5, 
                        0xe2)
                    zmm0 = _mm_add_epi64(zmm0, zmm12)
                    
                    if ((rbp_32 & 4) == 0)
                        goto label_140313b6e
                    
                    goto label_140315122
                
            label_140313b5f:
                zmm0 = _mm_add_epi64(zmm0, zmm12)
                
                if ((rbp_32 & 4) != 0)
                label_140315122:
                    zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zx.o(*zmm0.q), zmm5, 0x30), 0x84)
                    
                    if ((rbp_32 & 8) != 0)
                        zmm5 = _mm_shuffle_ps(zmm5, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 0x20), 
                            0x24)
                else
                label_140313b6e:
                    
                    if ((rbp_32 & 8) != 0)
                        zmm5 = _mm_shuffle_ps(zmm5, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 0x20), 
                            0x24)
                
                zmm5 = __andps_xmmxud_memxud(zmm5, data_143442cd0)
                arg7 = _mm_shuffle_epi32(zx.o(rbx_30), 0)
                zmm5 = _mm_cmpgt_epi32(zmm5, arg7)
                zmm4 = _mm_cmpeq_epi32(zmm4, zmm4)
                var_428 = zmm5 ^ zmm4
                zmm2 = zmm8
                
                if (_mm_movemask_ps(zmm5 & not.o(zmm13)) != 0)
                    zmm2 = var_458
                    zmm6 = (zmm5 & not.o(zmm2)) | (zmm5 & zmm8)
                    zmm0 = _mm_sub_epi32(zmm8, zmm4)
                    zmm5 &= not.o(_mm_cmpgt_epi32(zmm0, zmm2) ^ zmm4)
                    zmm7 = zmm13 & zmm5
                    uint32_t i_3 = _mm_movemask_ps(zmm7)
                    
                    if (i_3 == 0)
                        zmm2 = zmm6
                    else
                        arg5 = zmm8
                        
                        do
                            zmm9 = zmm0
                            zmm2 = _mm_add_epi32(zmm0, zmm0)
                            zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                            zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            zmm2 = _mm_add_epi64(
                                _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q), arg6)
                            char temp0_1103 = _mm_movemask_ps(zmm7)
                            
                            if ((temp0_1103 & 1) == 0)
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                
                                if ((temp0_1103 & 2) != 0)
                                    goto label_140313c68
                                
                                goto label_140313ce2
                            
                            zmm10[0] = zx.o(*zmm2[0].q)[0]
                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                            
                            if ((temp0_1103 & 2) != 0)
                            label_140313c68:
                                zmm10 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                        zmm10, 0), 
                                    zmm10, 0xe2)
                                zmm0 = _mm_add_epi64(zmm0, zmm12)
                                
                                if ((temp0_1103 & 4) == 0)
                                    goto label_140313ceb
                                
                                goto label_140313c86
                            
                        label_140313ce2:
                            zmm0 = _mm_add_epi64(zmm0, zmm12)
                            
                            if ((temp0_1103 & 4) != 0)
                            label_140313c86:
                                zmm10 = _mm_shuffle_ps(zmm10, 
                                    _mm_shuffle_ps(zx.o(*zmm0.q), zmm10, 0x30), 0x84)
                                
                                if ((temp0_1103 & 8) != 0)
                                    zmm10 = _mm_shuffle_ps(zmm10, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm10, 0x20), 
                                        0x24)
                            else
                            label_140313ceb:
                                
                                if ((temp0_1103 & 8) != 0)
                                    zmm10 = _mm_shuffle_ps(zmm10, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm10, 0x20), 
                                        0x24)
                            
                            zmm0 =
                                _mm_cmpgt_epi32(__andps_xmmxud_memxud(zmm10, data_143442cd0), arg7)
                                & zmm5
                            zmm1 = zx.o(0)
                            
                            if (_mm_movemask_ps(zmm0 & zmm13) != i_3)
                                zmm1 = zmm0 ^ zmm5
                            
                            zmm2 = (zmm0 & not.o(zmm6)) | (arg5 & zmm0)
                            zmm0 = __psubd_xmmdq_memdq(zmm9, data_142d3f800)
                            zmm5 = __pcmpgtd_xmmdq_memdq(zmm0, var_458) & not.o(zmm1)
                            zmm7 = zmm5 & zmm13
                            i_3 = _mm_movemask_ps(zmm7)
                            arg5 = zmm9
                            zmm6 = zmm2
                        while (i_3 != 0)
                
                uint32_t temp0_1461 = _mm_movemask_ps(_mm_andnot_ps(var_428, zmm13))
                uint32_t i_4
                int32_t temp0_1462[0x4]
                
                if (temp0_1461 != 0)
                    zmm2 &= var_428
                    temp0_1462 = _mm_cmpeq_epi32(arg5, arg5)
                    zmm8 = _mm_add_epi32(zmm8, temp0_1462)
                    zmm6 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & (zmm4 ^ var_428)
                    zmm1 = zmm6 & zmm13
                    i_4 = _mm_movemask_ps(zmm1)
                
                if (temp0_1461 == 0 || i_4 == 0)
                    zmm7 = zmm2
                else
                    zmm10 = data_143442cd0
                    
                    do
                        zmm7 = _mm_add_epi32(zmm8, zmm8)
                        zmm0 = _mm_shuffle_epi32(zmm7, 0x4e)
                        zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                        zmm7 = _mm_add_epi64(
                            _mm_unpacklo_epi32(zmm7, _mm_cmpgt_epi32(zx.o(0), zmm7).q), arg6)
                        char temp0_1479 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_1479 & 1) == 0)
                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                            
                            if ((temp0_1479 & 2) != 0)
                                goto label_140315735
                            
                            goto label_14031579f
                        
                        zmm5[0] = zx.o(*zmm7[0].q)[0]
                        zmm0 = _mm_unpacklo_epi32(zmm0, zmm3[0].q)
                        
                        if ((temp0_1479 & 2) != 0)
                        label_140315735:
                            zmm5 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e)[0].q), zmm5, 0), 
                                zmm5, 0xe2)
                            zmm0 = _mm_add_epi64(zmm0, zmm12)
                            
                            if ((temp0_1479 & 4) == 0)
                                goto label_1403157a8
                            
                            goto label_140315751
                        
                    label_14031579f:
                        zmm0 = _mm_add_epi64(zmm0, zmm12)
                        
                        if ((temp0_1479 & 4) != 0)
                        label_140315751:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zx.o(*zmm0.q), zmm5, 0x30), 
                                0x84)
                            
                            if ((temp0_1479 & 8) != 0)
                                zmm5 = _mm_shuffle_ps(zmm5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 
                                        0x20), 
                                    0x24)
                        else
                        label_1403157a8:
                            
                            if ((temp0_1479 & 8) != 0)
                                zmm5 = _mm_shuffle_ps(zmm5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 
                                        0x20), 
                                    0x24)
                        
                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm5, zmm10), arg7) & not.o(zmm6)
                        zmm3 = zx.o(0)
                        
                        if (_mm_movemask_ps(zmm1 & zmm13) != i_4)
                            zmm3 = zmm1 ^ zmm6
                        
                        zmm7 = (zmm1 & not.o(zmm2)) | (zmm1 & zmm8)
                        zmm8 = _mm_add_epi32(zmm8, temp0_1462)
                        zmm6 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & zmm3
                        zmm1 = zmm6 & zmm13
                        i_4 = _mm_movemask_ps(zmm1)
                        zmm2 = zmm7
                    while (i_4 != 0)
                
                zmm7 = _mm_and_ps(zmm7, zmm13)
                zmm1 = _mm_add_epi32(zmm7, zmm7)
                zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                zmm2 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm1 = _mm_add_epi64(_mm_unpacklo_epi32(zmm1, _mm_cmpgt_epi32(zx.o(0), zmm1)[0].q), 
                    arg6)
                
                if ((rbp_32 & 1) != 0)
                    zmm10 = zx.o(*zmm1[0].q)
                
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm2[0].q)
                arg5 = var_438_2
                zmm9 = var_328_2
                zmm8 = var_468
                zmm2 = var_458
                
                if ((rbp_32 & 2) == 0)
                    zmm0 = _mm_add_epi64(zmm0, zmm12)
                    
                    if ((rbp_32 & 4) != 0)
                        goto label_1403159ff
                    
                    goto label_1403158b8
                
                zmm10 = _mm_shuffle_ps(
                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), zmm10, 0), zmm10, 
                    0xe2)
                zmm0 = _mm_add_epi64(zmm0, zmm12)
                
                if ((rbp_32 & 4) == 0)
                label_1403158b8:
                    
                    if ((rbp_32 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm10, 0x20)
                        zmm10 = _mm_shuffle_ps(zmm10, zmm0, 0x24)
                else
                label_1403159ff:
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zx.o(*zmm0.q), zmm10, 0x30), 0x84)
                    
                    if ((rbp_32 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm10, 0x20)
                        zmm10 = _mm_shuffle_ps(zmm10, zmm0, 0x24)
                
                zmm4 = _mm_sub_epi32(zmm7, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm13
                zmm0 = _mm_cmpgt_epi32(zmm4, zmm2) & zmm13
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm4 = (zmm2 & zmm0) | (zmm0 & not.o(zmm4))
                
                zmm2 = _mm_add_epi32(zmm4, zmm4)
                zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm2 = _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q)
                arg6 = _mm_add_epi64(arg6, zmm2)
                
                if ((rbp_32 & 1) == 0)
                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                    arg7 = var_3a8_2
                    
                    if ((rbp_32 & 2) != 0)
                        goto label_140315a50
                    
                    goto label_140315959
                
                zmm2 = zx.o(*arg6[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                arg7 = var_3a8_2
                
                if ((rbp_32 & 2) != 0)
                label_140315a50:
                    zmm2 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg6, 0x4e)[0].q), zmm2, 0), zmm2, 
                        0xe2)
                    arg6 = var_388_1
                    zmm12 = _mm_add_epi64(zmm12, zmm0)
                    
                    if ((rbp_32 & 4) == 0)
                        goto label_140315972
                    
                    goto label_140315a7c
                
            label_140315959:
                arg6 = var_388_1
                zmm12 = _mm_add_epi64(zmm12, zmm0)
                
                if ((rbp_32 & 4) != 0)
                label_140315a7c:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(*zmm12.q), zmm2, 0x30), 0x84)
                    
                    if ((rbp_32 & 8) != 0)
                        zmm2 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm2, 0x20), 
                            0x24)
                else
                label_140315972:
                    
                    if ((rbp_32 & 8) != 0)
                        zmm2 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm2, 0x20), 
                            0x24)
                
                zmm12 = var_418
                zmm10 = __andps_xmmxud_memxud(zmm10, data_143442cd0)
                zmm2 = __andps_xmmxud_memxud(zmm2, data_143442cd0)
                zmm0 = zx.o(0)
                
                if (arg10 != 1)
                    goto label_140315da4
            
            zmm6 = _mm_and_ps(arg7, zmm0)
            zmm10 = var_3d8
            zmm2 = var_3e8_4
            zmm5 = _mm_shuffle_epi32(zmm2, 0xf5)
            r13_1 = zx.q(r14.d)
            
            if (r14.d u<= 5)
                goto label_140313e6c
            
            goto label_140315e19
        
        zmm13 &= arg7
        zmm6 = zx.o(0)
        zmm7 = zmm13
        zmm4 = zmm13
    label_140313e5a:
        zmm5 = _mm_shuffle_epi32(zmm2, 0xf5)
        r13_1 = zx.q(r14.d)
        
        if (r14.d u> 5)
        label_140315e19:
            arg7 = zmm6
            
            if ((temp0_1032 & 1) == 0)
                zmm6 = zmm9
                
                if ((temp0_1032 & 2) != 0)
                    goto label_140316ec3
                
                goto label_140315e35
            
            var_568[0] = 0
            zmm6 = zmm9
            
            if ((temp0_1032 & 2) != 0)
            label_140316ec3:
                var_568[1] = 0
                zmm9 = var_3c8_1
                
                if ((temp0_1032 & 4) == 0)
                    goto label_140315e45
                
                goto label_140316ede
            
        label_140315e35:
            zmm9 = var_3c8_1
            
            if ((temp0_1032 & 4) == 0)
            label_140315e45:
                
                if ((temp0_1032 & 8) != 0)
                    goto label_140316eef
                
                goto label_140315e4e
            
        label_140316ede:
            var_568[2] = 0
            
            if ((temp0_1032 & 8) != 0)
            label_140316eef:
                var_568[3] = 0
                
                if ((temp0_1032 & 1) == 0)
                    goto label_140315e57
                
                goto label_140316f00
            
        label_140315e4e:
            
            if ((temp0_1032 & 1) == 0)
            label_140315e57:
                
                if ((temp0_1032 & 2) != 0)
                    goto label_140316f11
                
                goto label_140315e60
            
        label_140316f00:
            var_558[0] = 0
            
            if ((temp0_1032 & 2) != 0)
            label_140316f11:
                var_558[1] = 0
                
                if ((temp0_1032 & 4) == 0)
                    goto label_140315e69
                
                goto label_140316f22
            
        label_140315e60:
            
            if ((temp0_1032 & 4) == 0)
            label_140315e69:
                
                if ((temp0_1032 & 8) != 0)
                    goto label_140316f33
                
                goto label_140315e72
            
        label_140316f22:
            var_558[2] = 0
            
            if ((temp0_1032 & 8) != 0)
            label_140316f33:
                var_558[3] = 0
                
                if ((temp0_1032 & 1) == 0)
                    goto label_140315e7b
                
                goto label_140316f44
            
        label_140315e72:
            
            if ((temp0_1032 & 1) == 0)
            label_140315e7b:
                
                if ((temp0_1032 & 2) != 0)
                    goto label_140316f55
                
                goto label_140315e84
            
        label_140316f44:
            var_548.d = 0
            
            if ((temp0_1032 & 2) != 0)
            label_140316f55:
                var_548:4.d = 0
                
                if ((temp0_1032 & 4) == 0)
                    goto label_140315e8d
                
                goto label_140316f66
            
        label_140315e84:
            
            if ((temp0_1032 & 4) == 0)
            label_140315e8d:
                
                if ((temp0_1032 & 8) != 0)
                    goto label_140316f77
                
                goto label_140315e96
            
        label_140316f66:
            var_548:8.d = 0
            
            if ((temp0_1032 & 8) != 0)
            label_140316f77:
                var_548:0xc.d = 0
                
                if ((temp0_1032 & 1) == 0)
                    goto label_140315e9f
                
                goto label_140316f88
            
        label_140315e96:
            
            if ((temp0_1032 & 1) == 0)
            label_140315e9f:
                
                if ((temp0_1032 & 2) != 0)
                    goto label_140316f99
                
                goto label_140315ea8
            
        label_140316f88:
            var_538[0] = 0x3f800000
            
            if ((temp0_1032 & 2) != 0)
            label_140316f99:
                var_538[1] = 0x3f800000
                
                if ((temp0_1032 & 4) == 0)
                    goto label_140315eb1
                
                goto label_140316faa
            
        label_140315ea8:
            
            if ((temp0_1032 & 4) != 0)
            label_140316faa:
                var_538[2] = 0x3f800000
                
                if ((temp0_1032 & 8) != 0)
                    var_538[3] = 0x3f800000
            else
            label_140315eb1:
                
                if ((temp0_1032 & 8) != 0)
                    var_538[3] = 0x3f800000
        else
        label_140313e6c:
            var_458 = zmm4
            zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm2), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm5), 0xe8).q)
            zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
            zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
            zmm1 = _mm_unpacklo_epi32(zmm1, zmm0.q)
            zmm4 = _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q)
            arg7 = zmm6
            char rax_189
            
            switch (r13_1)
                case 0
                    zmm13 = zmm2
                    zmm6 = zmm9
                    zmm4 = _mm_add_epi64(zmm4, zmm9)
                    zmm1 = _mm_add_epi64(zmm1, zmm10)
                    zmm0 = _mm_shuffle_epi32(zmm8, 0x50)
                    zmm1 &= zmm0
                    zmm2 = _mm_shuffle_epi32(zmm8, 0xfa)
                    zmm4 &= zmm2
                    int64_t rax_170 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                    int64_t rcx_77 = zmm4.q
                    int64_t rdx_117 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    zmm4 = data_1434426c0
                    zmm3 = zmm0 & zmm4
                    zmm4 &= zmm2
                    void* r8_2 = zmm1[0].q
                    int32_t* r15_6 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                    int32_t* rbx_31 = zmm4.q
                    int32_t* rdi_46 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    zmm1 = data_1434426e0
                    zmm4 = zmm0 & zmm1
                    int32_t* rsi_18 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    void* rbp_33 = arg4 + rax_170
                    int32_t r12_4 = *(arg4 + rax_170)
                    void* rax_171 = arg4 + rcx_77
                    int32_t r14_5 = *(arg4 + rcx_77)
                    void* rcx_78 = arg4 + rdx_117
                    int32_t r11_3 = *(arg4 + rdx_117)
                    void* r8_3 = r8_2 + arg4
                    int32_t rdx_118 = *(r15_6 + rbp_33)
                    int32_t rbx_32 = *(rbx_31 + rax_171)
                    int32_t rdi_47 = *(rdi_46 + rcx_78)
                    zmm1 &= zmm2
                    int32_t rsi_19 = *(rsi_18 + rbp_33)
                    var_338.d = *(zmm1[0].q + rax_171)
                    var_428[0] = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rcx_78)
                    zmm1 = data_1434426f0
                    zmm0 &= zmm1
                    zmm2 &= zmm1
                    var_448[0] = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rbp_33)
                    var_468[0] = *(zmm2[0].q + rax_171)
                    var_418.d = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rcx_78)
                    int32_t r15_7 = *(zmm3[0].q + r8_3)
                    int32_t rax_177 = *(zmm4.q + r8_3)
                    int32_t rbp_35 = *(zmm0.q + r8_3)
                    
                    if ((temp0_1032 & 1) == 0)
                        zmm4 = var_458
                        zmm9 = var_3c8_1
                        
                        if ((temp0_1032 & 2) != 0)
                            goto label_1403151bf
                        
                        goto label_140314045
                    
                    var_568[0] = *r8_3
                    zmm4 = var_458
                    zmm9 = var_3c8_1
                    
                    if ((temp0_1032 & 2) != 0)
                    label_1403151bf:
                        var_568[1] = r12_4
                        zmm2 = zmm13
                        zmm5 = zmm5
                        
                        if ((temp0_1032 & 4) == 0)
                            goto label_140314058
                        
                        goto label_1403151d7
                    
                label_140314045:
                    zmm2 = zmm13
                    zmm5 = zmm5
                    
                    if ((temp0_1032 & 4) == 0)
                    label_140314058:
                        arg7 = arg7
                        
                        if ((temp0_1032 & 8) != 0)
                            goto label_1403151ef
                        
                        goto label_14031406b
                    
                label_1403151d7:
                    var_568[2] = r14_5
                    arg7 = arg7
                    
                    if ((temp0_1032 & 8) != 0)
                    label_1403151ef:
                        var_568[3] = r11_3
                        arg4 = var_370
                        
                        if ((temp0_1032 & 1) == 0)
                            goto label_140314079
                        
                        goto label_140315205
                    
                label_14031406b:
                    arg4 = var_370
                    
                    if ((temp0_1032 & 1) == 0)
                    label_140314079:
                        
                        if ((temp0_1032 & 2) != 0)
                            goto label_140315213
                        
                        goto label_140314085
                    
                label_140315205:
                    var_558[0] = r15_7
                    
                    if ((temp0_1032 & 2) != 0)
                    label_140315213:
                        var_558[1] = rdx_118
                        r14 = var_368
                        
                        if ((temp0_1032 & 4) == 0)
                            goto label_140314093
                        
                        goto label_14031522f
                    
                label_140314085:
                    r14 = var_368
                    
                    if ((temp0_1032 & 4) == 0)
                    label_140314093:
                        
                        if ((temp0_1032 & 8) != 0)
                            goto label_14031523c
                        
                        goto label_14031409f
                    
                label_14031522f:
                    var_558[2] = rbx_32
                    
                    if ((temp0_1032 & 8) != 0)
                    label_14031523c:
                        var_558[3] = rdi_47
                        r8_1 = var_378
                        
                        if ((temp0_1032 & 1) == 0)
                            goto label_1403140ad
                        
                        goto label_140315251
                    
                label_14031409f:
                    r8_1 = var_378
                    
                    if ((temp0_1032 & 1) == 0)
                    label_1403140ad:
                        
                        if ((temp0_1032 & 2) != 0)
                            goto label_14031525e
                        
                        goto label_1403140b6
                    
                label_140315251:
                    var_548.d = rax_177
                    
                    if ((temp0_1032 & 2) != 0)
                    label_14031525e:
                        var_548:4.d = rsi_19
                        
                        if ((temp0_1032 & 4) == 0)
                            goto label_1403140bf
                        
                        goto label_140315272
                    
                label_1403140b6:
                    
                    if ((temp0_1032 & 4) == 0)
                    label_1403140bf:
                        
                        if ((temp0_1032 & 8) != 0)
                            goto label_140315286
                        
                        goto label_1403140c8
                    
                label_140315272:
                    var_548:8.d = var_338.d
                    
                    if ((temp0_1032 & 8) != 0)
                    label_140315286:
                        var_548:0xc.d = var_428[0]
                        
                        if ((temp0_1032 & 1) == 0)
                            goto label_1403140d1
                        
                        goto label_140315293
                    
                label_1403140c8:
                    
                    if ((temp0_1032 & 1) == 0)
                    label_1403140d1:
                        
                        if ((temp0_1032 & 2) != 0)
                            goto label_1403152a7
                        
                        goto label_1403140da
                    
                label_140315293:
                    var_538[0] = rbp_35
                    
                    if ((temp0_1032 & 2) != 0)
                    label_1403152a7:
                        var_538[1] = var_448[0]
                        
                        if ((temp0_1032 & 4) == 0)
                            goto label_1403140e3
                        
                        goto label_1403152bb
                    
                label_1403140da:
                    
                    if ((temp0_1032 & 4) != 0)
                    label_1403152bb:
                        var_538[2] = var_468[0]
                        
                        if ((temp0_1032 & 8) != 0)
                            var_538[3] = var_418.d
                    else
                    label_1403140e3:
                        
                        if ((temp0_1032 & 8) != 0)
                            var_538[3] = var_418.d
                case 1
                    float var_448_1[0x4] = zmm5
                    float var_3a8_4[0x4] = arg7
                    var_418 = zmm12
                    int32_t var_328_3[0x4] = zmm9
                    zmm4 = _mm_add_epi64(zmm4, zmm9)
                    var_3d8 = zmm10
                    zmm1 = _mm_add_epi64(zmm1, zmm10)
                    zmm6 = _mm_shuffle_epi32(zmm8, 0x50)
                    zmm1 &= zmm6
                    zmm0 = _mm_shuffle_epi32(zmm8, 0xfa)
                    zmm4 &= zmm0
                    int64_t rcx_80 = zmm1[0].q
                    void* rax_185 = arg4 + rcx_80
                    zmm2 = *(arg4 + rcx_80)
                    int64_t rdx_125 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                    void* rcx_81 = arg4 + rdx_125
                    arg6 = *(arg4 + rdx_125)
                    int64_t rbp_37 = zmm4.q
                    void* rdx_126 = arg4 + rbp_37
                    zmm1 = *(arg4 + rbp_37)
                    int64_t rbx_40 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    void* rbp_38 = arg4 + rbx_40
                    zmm10 = *(arg4 + rbx_40)
                    zmm4 = data_1434426c0
                    zmm5 = zmm6 & zmm4
                    zmm4 &= zmm0
                    zmm3 = *(zmm5[0].q + rax_185)
                    zmm9 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rcx_81)
                    arg7 = *(zmm4.q + rdx_126)
                    zmm13 = *(_mm_shuffle_epi32(zmm4, 0x4e).q + rbp_38)
                    zmm4 = data_1434426e0
                    zmm6 &= zmm4
                    zmm0 &= zmm4
                    zmm12 = *(zmm6[0].q + rax_185)
                    arg5 = *(_mm_shuffle_epi32(zmm6, 0x4e).q + rcx_81)
                    zmm6 = *(zmm0.q + rdx_126)
                    zmm5 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rbp_38)
                    rax_189 = temp0_1032
                    
                    if ((rax_189 & 1) == 0)
                        if ((rax_189 & 2) != 0)
                            goto label_1403152e5
                        
                        goto label_140314491
                    
                    var_568[0] = zmm2[0]
                    
                    if ((rax_189 & 2) != 0)
                    label_1403152e5:
                        var_568[1] = arg6[0]
                        
                        if ((rax_189 & 4) == 0)
                            goto label_140314499
                        
                        goto label_1403152f4
                    
                label_140314491:
                    
                    if ((rax_189 & 4) != 0)
                    label_1403152f4:
                        var_568[2] = zmm1[0]
                        
                        if ((rax_189 & 8) != 0)
                        label_140315302:
                            var_568[3] = zmm10[0]
                            
                            if ((rax_189 & 1) == 0)
                                goto label_1403144a9
                            
                            goto label_140315311
                    else
                    label_140314499:
                        
                        if ((rax_189 & 8) != 0)
                            goto label_140315302
                    
                    if ((rax_189 & 1) != 0)
                    label_140315311:
                        var_558[0] = zmm3[0]
                        zmm2 = _mm_unpacklo_ps(zmm2, arg6[0].q)
                        zmm1 = _mm_unpacklo_ps(zmm1, zmm10[0].q)
                        
                        if ((rax_189 & 2) != 0)
                            var_558[1] = zmm9[0]
                    else
                    label_1403144a9:
                        zmm2 = _mm_unpacklo_ps(zmm2, arg6[0].q)
                        zmm1 = _mm_unpacklo_ps(zmm1, zmm10[0].q)
                        
                        if ((rax_189 & 2) != 0)
                            var_558[1] = zmm9[0]
                    
                    zmm2 = zmm2[0].q | zmm1[0].q << 0x40
                    float temp0_1200[0x4] = _mm_unpacklo_ps(zmm3, zmm9[0].q)
                    zmm0 = _mm_unpacklo_ps(arg7, zmm13.q)
                    arg6 = var_388_1
                    zmm10 = var_3d8
                    
                    if ((rax_189 & 4) != 0)
                        var_558[2] = arg7[0]
                    
                    zmm3 = temp0_1200[0].q | zmm0.q << 0x40
                    zmm0 = _mm_unpacklo_ps(zmm12, arg5[0].q)
                    zmm4 = _mm_unpacklo_ps(zmm6, zmm5[0].q)
                    float temp0_1204[0x4] = _mm_mul_ps(zmm2, zmm2)
                    zmm1 = data_142d3f670
                    zmm9 = var_3c8_1
                    
                    if ((rax_189 & 8) != 0)
                        var_558[3] = zmm13.d
                    
                    zmm0 = zmm0.q | zmm4.q << 0x40
                    zmm1 = _mm_sub_ps(zmm1, temp0_1204)
                    float temp0_1206[0x4] = _mm_mul_ps(zmm3, zmm3)
                    arg7 = var_3a8_4
                    
                    if ((rax_189 & 1) != 0)
                        var_548.d = zmm12.d
                    
                    zmm1 = _mm_sub_ps(zmm1, temp0_1206)
                    zmm0 = _mm_mul_ps(zmm0, zmm0)
                    zmm2 = var_3e8_4
                    zmm4 = var_458
                    
                    if ((rax_189 & 2) != 0)
                        var_548:4.d = arg5[0]
                    
                    zmm1 = _mm_sub_ps(zmm1, zmm0)
                    zmm12 = var_418
                    
                    if ((rax_189 & 4) != 0)
                        var_548:8.d = zmm6[0]
                    
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                    zmm1 = _mm_sqrt_ps(zmm1)
                    arg5 = var_438_2
                    
                    if ((rax_189 & 8) == 0)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        zmm6 = var_328_3
                        
                        if ((rax_189 & 1) != 0)
                            goto label_140315346
                        
                        goto label_1403145a3
                    
                    var_548:0xc.d = zmm5[0]
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    zmm6 = var_328_3
                    
                    if ((rax_189 & 1) != 0)
                    label_140315346:
                        var_538[0] = zmm0.d
                        zmm5 = var_448_1
                        
                        if ((rax_189 & 2) != 0)
                            goto label_1403145b3
                        
                        goto label_1403145bb
                    
                label_1403145a3:
                    zmm5 = var_448_1
                    
                    if ((rax_189 & 2) == 0)
                        goto label_1403145bb
                    
                label_1403145b3:
                    var_538[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                label_1403145bb:
                    
                    if ((rax_189 & 4) != 0)
                        var_538[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                    
                    if ((rax_189 & 8) != 0)
                        var_538[3] = _mm_shuffle_epi32(zmm0, 0xe7).d
                case 2
                    float var_448_2[0x4] = zmm5
                    zmm13 = zmm9
                    zmm4 = _mm_add_epi64(zmm4, zmm9)
                    zmm1 = _mm_add_epi64(zmm1, zmm10)
                    zmm0 = _mm_shuffle_epi32(zmm8, 0x50)
                    zmm1 &= zmm0
                    zmm2 = _mm_shuffle_epi32(zmm8, 0xfa)
                    zmm4 &= zmm2
                    int64_t rax_190 = zmm1[0].q
                    void* rbp_39 = arg4 + rax_190
                    int64_t rcx_82 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                    void* rbx_46 = arg4 + rcx_82
                    int64_t rdx_127 = zmm4.q
                    zmm1 = data_1434426b0
                    zmm3 = zmm0 & zmm1
                    void* rdi_48 = zmm3[0].q
                    int16_t* rdi_50 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                    zmm3 = data_1434426c0
                    zmm0 &= zmm3
                    zmm6 = __pinsrw_xmmdq_memw_immb(zx.o(*(rdi_48 + rbp_39)), *(rdi_50 + rbx_46), 1)
                    int16_t* rdi_52 = _mm_shuffle_epi32(zmm0, 0x4e).q
                    zmm0 = zx.o(*(zmm0.q + rbp_39))
                    void* rbp_41 = arg4 + rdx_127
                    zmm4 = _mm_shuffle_epi32(zmm4, 0x4e)
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(rdi_52 + rbx_46), 1)
                    zmm1 &= zmm2
                    zmm2 &= zmm3
                    int16_t* rdi_53 = zmm2[0].q
                    zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(zmm1[0].q + rbp_41), 2)
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(rdi_53 + rbp_41), 2)
                    int64_t rbp_42 = zmm4.q
                    void* rbx_48 = arg4 + rbp_42
                    int16_t* rdi_54 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                    uint32_t temp0_1229[0x4] = _mm_shuffle_epi32(zmm2, 0x4e)
                    zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(rdi_54 + rbx_48), 3)
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(temp0_1229[0].q + rbx_48), 3)
                    zmm2 = _mm_unpacklo_epi16(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_190)), *(arg4 + rcx_82), 
                                    1), 
                                *(arg4 + rdx_127), 2), 
                            *(arg4 + rbp_42), 3), 
                        0)
                    zmm5 = data_1434424d0
                    float temp0_1237[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm5))
                    zmm3 = data_1434426d0
                    float temp0_1238[0x4] = _mm_div_ps(temp0_1237, zmm3)
                    
                    if ((temp0_1032 & 1) == 0)
                        zmm6 = _mm_unpacklo_epi16(zmm6, 0)
                        zmm9 = var_3c8_1
                        
                        if ((temp0_1032 & 2) != 0)
                            goto label_140315383
                        
                        goto label_140314731
                    
                    var_568[0] = temp0_1238[0]
                    zmm6 = _mm_unpacklo_epi16(zmm6, 0)
                    zmm9 = var_3c8_1
                    
                    if ((temp0_1032 & 2) != 0)
                    label_140315383:
                        var_568[1] = _mm_shuffle_epi32(temp0_1238, 0xe5).d
                        zmm6 = _mm_add_epi32(zmm6, zmm5)
                        
                        if ((temp0_1032 & 4) == 0)
                            goto label_14031473e
                        
                        goto label_14031539b
                    
                label_140314731:
                    zmm6 = _mm_add_epi32(zmm6, zmm5)
                    
                    if ((temp0_1032 & 4) == 0)
                    label_14031473e:
                        zmm4 = _mm_cvtepi32_ps(zmm6)
                        
                        if ((temp0_1032 & 8) != 0)
                            goto label_1403153b2
                        
                        goto label_14031474a
                    
                label_14031539b:
                    var_568[2] = _mm_shuffle_epi32(temp0_1238, 0x4e).d
                    zmm4 = _mm_cvtepi32_ps(zmm6)
                    
                    if ((temp0_1032 & 8) != 0)
                    label_1403153b2:
                        var_568[3] = _mm_shuffle_epi32(temp0_1238, 0xe7)[0]
                        zmm4 = _mm_div_ps(zmm4, zmm3)
                        
                        if ((temp0_1032 & 1) == 0)
                            goto label_140314756
                        
                        goto label_1403153c4
                    
                label_14031474a:
                    zmm4 = _mm_div_ps(zmm4, zmm3)
                    
                    if ((temp0_1032 & 1) == 0)
                    label_140314756:
                        zmm0 = _mm_unpacklo_epi16(zmm0, 0)
                        zmm6 = zmm13
                        
                        if ((temp0_1032 & 2) != 0)
                            goto label_1403153e1
                        
                        goto label_140314768
                    
                label_1403153c4:
                    var_558[0] = zmm4.d
                    zmm0 = _mm_unpacklo_epi16(zmm0, 0)
                    zmm6 = zmm13
                    
                    if ((temp0_1032 & 2) == 0)
                    label_140314768:
                        zmm0 = _mm_add_epi32(zmm0, zmm5)
                        
                        if ((temp0_1032 & 4) != 0)
                            var_558[2] = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                    else
                    label_1403153e1:
                        var_558[1] = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                        zmm6 = zmm13
                        zmm0 = _mm_add_epi32(zmm0, zmm5)
                        
                        if ((temp0_1032 & 4) != 0)
                            var_558[2] = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                    
                    zmm0 = _mm_cvtepi32_ps(zmm0)
                    float temp0_1247[0x4] = _mm_mul_ps(temp0_1238, temp0_1238)
                    zmm5 = data_142d3f670
                    
                    if ((temp0_1032 & 8) != 0)
                        var_558[3] = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                        zmm6 = zmm13
                    
                    zmm0 = _mm_div_ps(zmm0, zmm3)
                    float temp0_1250[0x4] = _mm_sub_ps(zmm5, temp0_1247)
                    zmm4 = _mm_mul_ps(zmm4, zmm4)
                    
                    if ((temp0_1032 & 1) != 0)
                        var_548.d = zmm0.d
                    
                    float temp0_1252[0x4] = _mm_sub_ps(temp0_1250, zmm4)
                    float temp0_1253[0x4] = _mm_mul_ps(zmm0, zmm0)
                    
                    if ((temp0_1032 & 2) == 0)
                        zmm5 = _mm_sub_ps(temp0_1252, temp0_1253)
                        zmm4 = var_458
                        
                        if ((temp0_1032 & 4) != 0)
                            goto label_140315423
                        
                        goto label_1403147d9
                    
                    var_548:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    zmm5 = _mm_sub_ps(temp0_1252, temp0_1253)
                    zmm4 = var_458
                    
                    if ((temp0_1032 & 4) != 0)
                    label_140315423:
                        var_548:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        zmm1 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                        zmm2 = _mm_sqrt_ps(zmm5)
                        
                        if ((temp0_1032 & 8) == 0)
                            goto label_1403147e9
                        
                        goto label_14031543e
                    
                label_1403147d9:
                    zmm1 = _mm_cmpeq_ps(zx.o(0), zmm5, 1)
                    zmm2 = _mm_sqrt_ps(zmm5)
                    
                    if ((temp0_1032 & 8) == 0)
                    label_1403147e9:
                        zmm1 = _mm_and_ps(zmm1, zmm2)
                        zmm5 = var_448_2
                        
                        if ((temp0_1032 & 1) != 0)
                            goto label_140315459
                        
                        goto label_140314801
                    
                label_14031543e:
                    var_548:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    zmm1 = _mm_and_ps(zmm1, zmm2)
                    zmm5 = var_448_2
                    
                    if ((temp0_1032 & 1) != 0)
                    label_140315459:
                        var_538[0] = zmm1[0]
                        zmm2 = var_3e8_4
                        
                        if ((temp0_1032 & 2) == 0)
                            goto label_140314810
                        
                        goto label_140315476
                    
                label_140314801:
                    zmm2 = var_3e8_4
                    
                    if ((temp0_1032 & 2) == 0)
                    label_140314810:
                        
                        if ((temp0_1032 & 4) != 0)
                            goto label_14031548a
                        
                        goto label_140314819
                    
                label_140315476:
                    var_538[1] = _mm_shuffle_epi32(zmm1, 0xe5).d
                    
                    if ((temp0_1032 & 4) == 0)
                    label_140314819:
                        
                        if ((temp0_1032 & 8) != 0)
                            var_538[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                    else
                    label_14031548a:
                        var_538[2] = _mm_shuffle_epi32(zmm1, 0x4e).d
                        
                        if ((temp0_1032 & 8) != 0)
                            var_538[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                case 3
                    float var_448_3[0x4] = zmm5
                    float var_3a8_5[0x4] = arg7
                    var_418 = zmm12
                    zmm0 = var_3c8_1 & zmm8
                    int64_t rax_193 = sx.q(zmm0.d)
                    void* rbp_43 = arg4 + rax_193
                    zmm13 = *(arg4 + rax_193)
                    int64_t rcx_84 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                    void* rax_195 = arg4 + rcx_84
                    zmm13 = _mm_unpacklo_ps(zmm13, (*(arg4 + rcx_84))[0].q)
                    int64_t rcx_86 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    void* rbx_49 = arg4 + rcx_86
                    zmm2 = *(arg4 + rcx_86)
                    int64_t rcx_88 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                    void* rdi_56 = arg4 + rcx_88
                    zmm13 = zmm13.q | _mm_unpacklo_ps(zmm2, (*(arg4 + rcx_88)).q)[0].q << 0x40
                    zmm0 = data_142fc95e0 & zmm8
                    arg7 = *(zx.q(zmm0.d) + rbp_43)
                    float var_3b8_1[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rax_195)
                    var_3f8.o = *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbx_49)
                    uint128_t var_2b8_2 = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rdi_56)
                    zmm0 = data_142fc95f0 & zmm8
                    float var_428_1[0x4] = *(zx.q(zmm0.d) + rbp_43)
                    float var_338_1[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rax_195)
                    uint64_t r14_6 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    uint64_t r11_4 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                    zmm2 = data_143442650 & zmm8
                    zmm0 = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rbp_43), 
                        (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rax_195))[0].q).q | _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rbx_49), 
                        (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rdi_56))[0].q)[0].q << 0x40
                    zmm2 = data_143442660 & zmm8
                    zmm3 = zmm8
                    zmm8 = *(zx.q(zmm2[0]) + rbp_43)
                    float var_398_1[0x4] = *(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rax_195)
                    uint64_t rdx_128 = zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
                    uint64_t rcx_101 = zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
                    zmm5 = data_143442670 & zmm3
                    zmm12 = zx.o(*(zx.q(zmm5[0]) + rbp_43))
                    float var_2c8_2[0x4] = *(zx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0]) + rax_195)
                    uint64_t rbp_45 = zx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])
                    uint64_t rsi_21 = zx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])
                    int32_t var_328_4[0x4] = zmm9
                    zmm4 = _mm_add_epi64(zmm4, zmm9)
                    var_3d8 = zmm10
                    zmm1 = _mm_add_epi64(zmm1, zmm10)
                    zmm2 = _mm_shuffle_epi32(zmm3, 0x50) & zmm1
                    zmm1 = _mm_shuffle_epi32(zmm3, 0xfa) & zmm4
                    int64_t rax_196 = zmm2[0].q
                    zmm2 = _mm_shuffle_epi32(zmm2, 0x4e)
                    arg5 = zx.o(*(arg4 + rax_196))
                    zmm2 = zx.o(*(arg4 + zmm2[0].q))
                    int64_t rax_198 = zmm1[0].q
                    uint32_t temp0_1285[0x4] = _mm_shuffle_epi32(zmm1, 0x4e)
                    int32_t temp0_1288[0x4] = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(arg5, zmm2[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rax_198)), 
                            zx.o(*(arg4 + temp0_1285[0].q))[0].q).q)
                    uint32_t temp0_1289[0x4] = _mm_srli_epi32(temp0_1288, 0x15)
                    zmm2 = data_143442440
                    zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(temp0_1289, zmm2))
                    arg6 = data_143442690
                    zmm1 = _mm_mul_ps(_mm_div_ps(zmm1, arg6), zmm0)
                    zmm10 = *(r14_6 + rbx_49)
                    zmm1 = _mm_add_ps(zmm1, zmm13)
                    zmm4 = _mm_add_epi32(_mm_srli_epi32(temp0_1288, 0xa) & data_143442480, zmm2)
                    zmm9 = *(r11_4 + rdi_56)
                    rax_189 = temp0_1032
                    zmm13 = *(rdx_128 + rbx_49)
                    zmm5 = *(rcx_101 + rdi_56)
                    zmm0 = zx.o(*(rbp_45 + rbx_49))
                    zmm2 = zx.o(*(rsi_21 + rdi_56))
                    
                    if ((rax_189 & 1) != 0)
                        var_568[0] = zmm1[0]
                    
                    zmm13 = _mm_unpacklo_ps(zmm13, zmm5[0].q)
                    zmm8 = __unpcklps_xmmps_memdq(zmm8, var_398_1)
                    float temp0_1299[0x4] = _mm_cvtepi32_ps(zmm4)
                    
                    if ((rax_189 & 2) != 0)
                        var_568[1] = _mm_shuffle_epi32(zmm1, 0xe5).d
                    
                    float temp0_1301[0x4] = __unpcklps_xmmps_memdq(var_3f8.o, var_2b8_2)
                    float temp0_1302[0x4] = __unpcklps_xmmps_memdq(arg7, var_3b8_1)
                    zmm8 = zmm8[0].q | zmm13.q << 0x40
                    float temp0_1303[0x4] = _mm_div_ps(temp0_1299, arg6)
                    arg4 = var_370
                    
                    if ((rax_189 & 4) != 0)
                        var_568[2] = _mm_shuffle_epi32(zmm1, 0x4e).d
                    
                    arg5 = temp0_1288 & data_143442680
                    arg7 = temp0_1302[0].q | temp0_1301[0].q << 0x40
                    zmm8 = _mm_mul_ps(zmm8, temp0_1303)
                    arg6 = var_388_1
                    
                    if ((rax_189 & 8) != 0)
                        var_568[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                    
                    int32_t temp0_1307[0x4] = __paddd_xmmdq_memdq(arg5, data_143442490)
                    float temp0_1308[0x4] = _mm_add_ps(arg7, zmm8)
                    zmm5 = var_448_3
                    
                    if ((rax_189 & 1) != 0)
                        var_558[0] = temp0_1308[0]
                    
                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm2[0].q)
                    zmm12 = __punpckldq_xmmdq_memdq(zmm12, var_2c8_2)
                    zmm4 = _mm_cvtepi32_ps(temp0_1307)
                    zmm6 = var_328_4
                    zmm8 = zmm3
                    
                    if ((rax_189 & 2) != 0)
                        var_558[1] = _mm_shuffle_epi32(temp0_1308, 0xe5)[0]
                    
                    float temp0_1313[0x4] = _mm_unpacklo_ps(zmm10, zmm9[0].q)
                    float temp0_1314[0x4] = __unpcklps_xmmps_memdq(var_428_1, var_338_1)
                    zmm12 = _mm_unpacklo_epi64(zmm12, zmm0.q)
                    zmm4 = __divps_xmmps_memps(zmm4, data_1434426a0)
                    arg5 = var_438_2
                    
                    if ((rax_189 & 4) != 0)
                        var_558[2] = _mm_shuffle_epi32(temp0_1308, 0x4e).d
                    
                    zmm3 = temp0_1314[0].q | temp0_1313[0].q << 0x40
                    zmm12 = _mm_mul_ps(zmm12, zmm4)
                    zmm1 = _mm_mul_ps(zmm1, zmm1)
                    zmm4 = data_142d3f670
                    zmm9 = var_3c8_1
                    zmm2 = var_3e8_4
                    
                    if ((rax_189 & 8) != 0)
                        var_558[3] = _mm_shuffle_epi32(temp0_1308, 0xe7).d
                    
                    float temp0_1321[0x4] = _mm_add_ps(zmm3, zmm12)
                    zmm4 = _mm_sub_ps(zmm4, zmm1)
                    float temp0_1323[0x4] = _mm_mul_ps(temp0_1308, temp0_1308)
                    zmm10 = var_3d8
                    
                    if ((rax_189 & 1) != 0)
                        var_548.d = temp0_1321[0]
                    
                    zmm4 = _mm_sub_ps(zmm4, temp0_1323)
                    zmm0 = _mm_mul_ps(temp0_1321, temp0_1321)
                    zmm12 = var_418
                    
                    if ((rax_189 & 2) != 0)
                        var_548:4.d = _mm_shuffle_epi32(temp0_1321, 0xe5)[0]
                    
                    zmm4 = _mm_sub_ps(zmm4, zmm0)
                    arg7 = var_3a8_5
                    
                    if ((rax_189 & 4) == 0)
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                        zmm1 = _mm_sqrt_ps(zmm4)
                        
                        if ((rax_189 & 8) != 0)
                            goto label_1403154bd
                        
                        goto label_140314cbc
                    
                    var_548:8.d = _mm_shuffle_epi32(temp0_1321, 0x4e)[0]
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                    zmm1 = _mm_sqrt_ps(zmm4)
                    
                    if ((rax_189 & 8) != 0)
                    label_1403154bd:
                        var_548:0xc.d = _mm_shuffle_epi32(temp0_1321, 0xe7)[0]
                        zmm2 = var_3e8_4
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        zmm4 = var_458
                        
                        if ((rax_189 & 1) == 0)
                            goto label_140314cd0
                        
                        goto label_1403154e0
                    
                label_140314cbc:
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    zmm4 = var_458
                    
                    if ((rax_189 & 1) == 0)
                    label_140314cd0:
                        
                        if ((rax_189 & 2) != 0)
                            goto label_1403145b3
                        
                        goto label_1403145bb
                    
                label_1403154e0:
                    var_538[0] = zmm0.d
                    
                    if ((rax_189 & 2) != 0)
                        goto label_1403145b3
                    
                    goto label_1403145bb
                case 4
                    zmm13 = arg7
                    zmm6 = zmm9
                    zmm4 = _mm_add_epi64(zmm4, zmm9)
                    zmm1 = _mm_add_epi64(zmm1, zmm10)
                    zmm0 = _mm_shuffle_epi32(zmm8, 0x50) & zmm1
                    zmm1 = _mm_shuffle_epi32(zmm8, 0xfa) & zmm4
                    int64_t rcx_102 = _mm_shuffle_epi32(zmm0, 0x4e).q
                    int64_t rdx_129 = zmm1[0].q
                    int64_t rbp_46 = _mm_shuffle_epi32(zmm1, 0x4e).q
                    zmm0 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), zx.o(*(arg4 + rcx_102))[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_129)), zx.o(*(arg4 + rbp_46))[0].q)[0]
                            .q)
                    uint32_t temp0_1340[0x4] = _mm_srli_epi32(zmm0, 0x15)
                    zmm2 = _mm_srli_epi32(zmm0, 0xa)
                    zmm4 = data_143442440
                    zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(temp0_1340, zmm4))
                    arg7 = data_143442690
                    zmm1 = _mm_div_ps(zmm1, arg7)
                    
                    if ((temp0_1032 & 1) == 0)
                        zmm2 &= data_143442480
                        zmm9 = var_3c8_1
                        
                        if ((temp0_1032 & 2) != 0)
                            goto label_14031551b
                        
                        goto label_140314d9a
                    
                    var_568[0] = zmm1[0]
                    zmm2 &= data_143442480
                    zmm9 = var_3c8_1
                    
                    if ((temp0_1032 & 2) != 0)
                    label_14031551b:
                        var_568[1] = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                        zmm2 = _mm_add_epi32(zmm2, zmm4)
                        
                        if ((temp0_1032 & 4) == 0)
                            goto label_140314da6
                        
                        goto label_140315536
                    
                label_140314d9a:
                    zmm2 = _mm_add_epi32(zmm2, zmm4)
                    
                    if ((temp0_1032 & 4) == 0)
                    label_140314da6:
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((temp0_1032 & 8) != 0)
                            goto label_14031554c
                        
                        goto label_140314db1
                    
                label_140315536:
                    var_568[2] = _mm_shuffle_epi32(zmm1, 0x4e).d
                    zmm2 = _mm_cvtepi32_ps(zmm2)
                    
                    if ((temp0_1032 & 8) == 0)
                    label_140314db1:
                        zmm2 = _mm_div_ps(zmm2, arg7)
                        
                        if ((temp0_1032 & 1) != 0)
                            var_558[0] = zmm2[0]
                    else
                    label_14031554c:
                        var_568[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                        zmm2 = _mm_div_ps(zmm2, arg7)
                        
                        if ((temp0_1032 & 1) != 0)
                            var_558[0] = zmm2[0]
                    
                    zmm0 &= data_143442680
                    zmm4 = var_458
                    arg7 = zmm13
                    
                    if ((temp0_1032 & 2) != 0)
                        var_558[1] = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                    
                    zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                    
                    if ((temp0_1032 & 4) != 0)
                        var_558[2] = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                    
                    zmm0 = _mm_cvtepi32_ps(zmm0)
                    zmm1 = _mm_mul_ps(zmm1, zmm1)
                    zmm3 = data_142d3f670
                    
                    if ((temp0_1032 & 8) != 0)
                        var_558[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
                        zmm4 = var_458
                    
                    zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                    float temp0_1355[0x4] = _mm_sub_ps(zmm3, zmm1)
                    float temp0_1356[0x4] = _mm_mul_ps(zmm2, zmm2)
                    
                    if ((temp0_1032 & 1) != 0)
                        var_548.d = zmm0.d
                    
                    float temp0_1357[0x4] = _mm_sub_ps(temp0_1355, temp0_1356)
                    zmm1 = _mm_mul_ps(zmm0, zmm0)
                    
                    if ((temp0_1032 & 2) == 0)
                        zmm3 = _mm_sub_ps(temp0_1357, zmm1)
                        zmm1 = zx.o(0)
                        
                        if ((temp0_1032 & 4) != 0)
                            goto label_140315581
                        
                        goto label_140314e56
                    
                    var_548:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    zmm3 = _mm_sub_ps(temp0_1357, zmm1)
                    zmm1 = zx.o(0)
                    
                    if ((temp0_1032 & 4) != 0)
                    label_140315581:
                        var_548:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        zmm1 = _mm_cmpeq_ps(zmm1, zmm3, 1)
                        zmm2 = _mm_sqrt_ps(zmm3)
                        
                        if ((temp0_1032 & 8) == 0)
                            goto label_140314e65
                        
                        goto label_14031559b
                    
                label_140314e56:
                    zmm1 = _mm_cmpeq_ps(zmm1, zmm3, 1)
                    zmm2 = _mm_sqrt_ps(zmm3)
                    
                    if ((temp0_1032 & 8) == 0)
                    label_140314e65:
                        zmm1 = _mm_and_ps(zmm1, zmm2)
                        
                        if ((temp0_1032 & 1) != 0)
                            goto label_1403155ac
                        
                        goto label_140314e72
                    
                label_14031559b:
                    var_548:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    zmm1 = _mm_and_ps(zmm1, zmm2)
                    
                    if ((temp0_1032 & 1) != 0)
                    label_1403155ac:
                        var_538[0] = zmm1[0]
                        zmm2 = var_3e8_4
                        
                        if ((temp0_1032 & 2) == 0)
                            goto label_140314e81
                        
                        goto label_1403155c8
                    
                label_140314e72:
                    zmm2 = var_3e8_4
                    
                    if ((temp0_1032 & 2) == 0)
                    label_140314e81:
                        
                        if ((temp0_1032 & 4) != 0)
                            goto label_1403155db
                        
                        goto label_140314e89
                    
                label_1403155c8:
                    var_538[1] = _mm_shuffle_epi32(zmm1, 0xe5).d
                    
                    if ((temp0_1032 & 4) == 0)
                    label_140314e89:
                        
                        if ((temp0_1032 & 8) != 0)
                            var_538[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                    else
                    label_1403155db:
                        var_538[2] = _mm_shuffle_epi32(zmm1, 0x4e).d
                        
                        if ((temp0_1032 & 8) != 0)
                            var_538[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
                case 5
                    float var_448_4[0x4] = zmm5
                    zmm6 = zmm9
                    zmm4 = _mm_add_epi64(zmm4, zmm9)
                    var_3d8 = zmm10
                    zmm1 = _mm_add_epi64(zmm1, zmm10)
                    zmm0 = _mm_shuffle_epi32(zmm8, 0x50) & zmm1
                    zmm1 = _mm_shuffle_epi32(zmm8, 0xfa) & zmm4
                    int64_t rcx_103 = _mm_shuffle_epi32(zmm0, 0x4e).q
                    int64_t rdx_130 = zmm1[0].q
                    int64_t rbp_47 = _mm_shuffle_epi32(zmm1, 0x4e).q
                    zmm5 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), zx.q(*(arg4 + rcx_103))), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_130)), zx.o(*(arg4 + rbp_47))[0].q).q)
                    uint32_t temp0_1372[0x4] = _mm_srli_epi32(zmm5, 0x15)
                    zmm0 = _mm_srli_epi32(zmm5, 5)
                    zmm10 = data_143442600
                    zmm4 = data_143442610
                    zmm3 = data_143442320
                    zmm9 = data_143442330
                    zmm1 = _mm_add_epi32(temp0_1372 & zmm3, zmm9) | (temp0_1372 & zmm4)
                        | (zmm0 & zmm10)
                    rax_189 = temp0_1032
                    
                    if ((rax_189 & 1) != 0)
                        var_568[0] = zmm1[0]
                    
                    zmm2 = _mm_srli_epi32(zmm5, 0xa)
                    zmm0 = _mm_slli_epi32(zmm5, 6)
                    
                    if ((rax_189 & 2) != 0)
                        var_568[1] = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                    
                    if ((rax_189 & 4) != 0)
                        var_568[2] = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                    
                    zmm3 = _mm_add_epi32(zmm3 & zmm2, zmm9)
                    zmm0 = (zmm0 & zmm10) | (zmm4 & zmm2)
                    zmm10 = var_3d8
                    
                    if ((rax_189 & 8) == 0)
                        zmm0 |= zmm3
                        zmm9 = var_3c8_1
                        
                        if ((rax_189 & 1) != 0)
                            goto label_14031561a
                        
                        goto label_140314ff3
                    
                    var_568[3] = _mm_shuffle_epi32(zmm1, 0xe7)[0]
                    zmm0 |= zmm3
                    zmm9 = var_3c8_1
                    
                    if ((rax_189 & 1) == 0)
                    label_140314ff3:
                        zmm3 = _mm_slli_epi32(zmm5, 0x11)
                        
                        if ((rax_189 & 2) != 0)
                            var_558[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    else
                    label_14031561a:
                        var_558[0] = zmm0.d
                        zmm3 = _mm_slli_epi32(zmm5, 0x11)
                        
                        if ((rax_189 & 2) != 0)
                            var_558[1] = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    
                    zmm3 &= data_143442630
                    zmm4 = data_143442620 & zmm5
                    zmm5 &= data_143442640
                    
                    if ((rax_189 & 4) != 0)
                        var_558[2] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                    
                    zmm4 = __paddd_xmmdq_memdq(zmm4, data_1434423a0)
                    zmm1 = _mm_mul_ps(zmm1, zmm1)
                    zmm2 = data_142d3f670
                    
                    if ((rax_189 & 8) != 0)
                        var_558[3] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                    
                    zmm3 = zmm3 | zmm5 | zmm4
                    float temp0_1386[0x4] = _mm_sub_ps(zmm2, zmm1)
                    zmm0 = _mm_mul_ps(zmm0, zmm0)
                    
                    if ((rax_189 & 1) != 0)
                        var_548.d = zmm3[0]
                    
                    float temp0_1388[0x4] = _mm_sub_ps(temp0_1386, zmm0)
                    zmm0 = _mm_mul_ps(zmm3, zmm3)
                    zmm4 = var_458
                    zmm5 = var_448_4
                    
                    if ((rax_189 & 2) == 0)
                        zmm2 = _mm_sub_ps(temp0_1388, zmm0)
                        zmm0 = zx.o(0)
                        
                        if ((rax_189 & 4) != 0)
                            goto label_140315654
                        
                        goto label_14031509d
                    
                    var_548:4.d = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                    zmm2 = _mm_sub_ps(temp0_1388, zmm0)
                    zmm0 = zx.o(0)
                    
                    if ((rax_189 & 4) != 0)
                    label_140315654:
                        var_548:8.d = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                        zmm0 = _mm_cmpeq_ps(zmm0, zmm2, 1)
                        zmm1 = _mm_sqrt_ps(zmm2)
                        
                        if ((rax_189 & 8) == 0)
                            goto label_1403150ac
                        
                        goto label_14031566e
                    
                label_14031509d:
                    zmm0 = _mm_cmpeq_ps(zmm0, zmm2, 1)
                    zmm1 = _mm_sqrt_ps(zmm2)
                    
                    if ((rax_189 & 8) == 0)
                    label_1403150ac:
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((rax_189 & 1) != 0)
                            goto label_14031567f
                        
                        goto label_1403150b9
                    
                label_14031566e:
                    var_548:0xc.d = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((rax_189 & 1) == 0)
                    label_1403150b9:
                        zmm2 = var_3e8_4
                        
                        if ((rax_189 & 2) != 0)
                            goto label_1403145b3
                        
                        goto label_1403145bb
                    
                label_14031567f:
                    var_538[0] = zmm0.d
                    zmm2 = var_3e8_4
                    
                    if ((rax_189 & 2) != 0)
                        goto label_1403145b3
                    
                    goto label_1403145bb
        
        zmm7 = _mm_srai_epi32(_mm_slli_epi32(_mm_cmpeq_epi32(zmm7, zmm4) & not.o(zmm8), 0x1f), 0x1f)
        char temp0_1603 = _mm_movemask_ps(zmm7)
        
        if (temp0_1603 != 0)
            uint32_t var_4e8
            float var_4d8
            float var_4c8
            uint32_t var_4b8
            int64_t rax_256
            uint64_t rcx_115
            
            if (r14.d u> 5)
                rcx_115 = zx.q(temp0_1603)
                rax_256 = rcx_115 & 1
                
                if (rax_256 == 0)
                    if ((rcx_115.b & 2) != 0)
                        goto label_140317110
                    
                    goto label_14031611d
                
                var_4e8 = 0
                
                if ((rcx_115.b & 2) != 0)
                label_140317110:
                    int32_t var_4e4_4 = 0
                    
                    if ((rcx_115.b & 4) == 0)
                        goto label_140316126
                    
                    goto label_140317124
                
            label_14031611d:
                
                if ((rcx_115.b & 4) == 0)
                label_140316126:
                    
                    if ((rcx_115.b & 8) != 0)
                        goto label_140317138
                    
                    goto label_14031612f
                
            label_140317124:
                int32_t var_4e0_3 = 0
                
                if ((rcx_115.b & 8) != 0)
                label_140317138:
                    int32_t var_4dc_3 = 0
                    
                    if (rax_256 == 0)
                        goto label_140316138
                    
                    goto label_14031714c
                
            label_14031612f:
                
                if (rax_256 == 0)
                label_140316138:
                    
                    if ((rcx_115.b & 2) != 0)
                        goto label_140317160
                    
                    goto label_140316141
                
            label_14031714c:
                var_4d8 = 0f
                
                if ((rcx_115.b & 2) != 0)
                label_140317160:
                    int32_t var_4d4_5 = 0
                    
                    if ((rcx_115.b & 4) == 0)
                        goto label_14031614a
                    
                    goto label_140317174
                
            label_140316141:
                
                if ((rcx_115.b & 4) == 0)
                label_14031614a:
                    
                    if ((rcx_115.b & 8) != 0)
                        goto label_140317188
                    
                    goto label_140316153
                
            label_140317174:
                int32_t var_4d0_7 = 0
                
                if ((rcx_115.b & 8) != 0)
                label_140317188:
                    int32_t var_4cc_7 = 0
                    
                    if (rax_256 == 0)
                        goto label_14031615c
                    
                    goto label_14031719c
                
            label_140316153:
                
                if (rax_256 == 0)
                label_14031615c:
                    
                    if ((rcx_115.b & 2) != 0)
                        goto label_1403171b0
                    
                    goto label_140316165
                
            label_14031719c:
                var_4c8 = 0f
                
                if ((rcx_115.b & 2) != 0)
                label_1403171b0:
                    int32_t var_4c4_5 = 0
                    
                    if ((rcx_115.b & 4) == 0)
                        goto label_14031616e
                    
                    goto label_1403171c4
                
            label_140316165:
                
                if ((rcx_115.b & 4) == 0)
                label_14031616e:
                    
                    if ((rcx_115.b & 8) != 0)
                        goto label_1403171d8
                    
                    goto label_140316177
                
            label_1403171c4:
                int32_t var_4c0_5 = 0
                
                if ((rcx_115.b & 8) != 0)
                label_1403171d8:
                    int32_t var_4bc_4 = 0
                    
                    if (rax_256 == 0)
                        goto label_140316180
                    
                    goto label_1403171ec
                
            label_140316177:
                
                if (rax_256 == 0)
                label_140316180:
                    
                    if ((rcx_115.b & 2) != 0)
                        goto label_140317200
                    
                    goto label_140316189
                
            label_1403171ec:
                var_4b8 = 0x3f800000
                
                if ((rcx_115.b & 2) != 0)
                label_140317200:
                    int32_t var_4b4_3 = 0x3f800000
                    
                    if ((rcx_115.b & 4) == 0)
                        goto label_140316192
                    
                    goto label_140317214
                
            label_140316189:
                int32_t var_4ac_2
                
                if ((rcx_115.b & 4) != 0)
                label_140317214:
                    int32_t var_4b0_3 = 0x3f800000
                    
                    if ((rcx_115.b & 8) != 0)
                        var_4ac_2 = 0x3f800000
                else
                label_140316192:
                    
                    if ((rcx_115.b & 8) != 0)
                        var_4ac_2 = 0x3f800000
            else
                zmm4 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm4), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm5), 0xe8).q)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                zmm3 = _mm_shuffle_epi32(zmm4, 0x4e)
                zmm4 = _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                zmm3 = _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3).q)
                int32_t var_4ac_3
                
                switch (r13_1)
                    case 0
                        zmm6 = _mm_add_epi64(zmm6, zmm3)
                        zmm10 = _mm_add_epi64(zmm10, zmm4)
                        zmm0 = _mm_shuffle_epi32(zmm7, 0x50)
                        zmm10 &= zmm0
                        uint32_t temp0_1618[0x4] = _mm_shuffle_epi32(zmm7, 0xfa)
                        zmm6 &= temp0_1618
                        int64_t r8_4 = _mm_shuffle_epi32(zmm10, 0x4e)[0].q
                        int64_t rdx_145 = zmm6[0].q
                        int64_t rbp_48 = _mm_shuffle_epi32(zmm6, 0x4e)[0].q
                        zmm3 = data_1434426c0
                        zmm2 = zmm0 & zmm3
                        zmm3 &= temp0_1618
                        void* rbx_50 = zmm10[0].q
                        int32_t* r12_5 = _mm_shuffle_epi32(zmm2, 0x4e).q
                        int32_t* r11_5 = zmm3[0].q
                        int32_t* r14_7 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                        zmm3 = data_1434426e0
                        zmm4 = zmm0 & zmm3
                        int32_t* rsi_22 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        void* rcx_107 = arg4 + r8_4
                        int32_t r10_11 = *(arg4 + r8_4)
                        void* rdi_57 = arg4 + rdx_145
                        int32_t r8_5 = *(arg4 + rdx_145)
                        void* rdx_146 = arg4 + rbp_48
                        int32_t r15_9 = *(arg4 + rbp_48)
                        uint32_t* rbx_51 = rbx_50 + arg4
                        int32_t r12_6 = *(r12_5 + rcx_107)
                        var_418.d = *(r11_5 + rdi_57)
                        int32_t r11_6 = *(r14_7 + rdx_146)
                        zmm3 &= temp0_1618
                        var_3c8_1.d = *(rsi_22 + rcx_107)
                        int32_t r13_2 = *(zmm3[0].q + rdi_57)
                        int32_t r14_8 = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rdx_146)
                        zmm3 = data_1434426f0
                        zmm0 &= zmm3
                        zmm1 = temp0_1618 & zmm3
                        int32_t rbp_51 = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rcx_107)
                        int32_t rsi_26 = *(zmm1[0].q + rdi_57)
                        int32_t rdi_58 = *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rdx_146)
                        float r9_2 = *(zmm2[0].q + rbx_51)
                        var_3d8[0] = *(zmm4.q + rbx_51)
                        var_458.d = *(zmm0.q + rbx_51)
                        rcx_115 = zx.q(temp0_1603)
                        rax_256 = rcx_115 & 1
                        
                        if (rax_256 == 0)
                            if ((rcx_115.b & 2) != 0)
                                goto label_140316fe4
                            
                            goto label_140316079
                        
                        var_4e8 = *rbx_51
                        
                        if ((rcx_115.b & 2) != 0)
                        label_140316fe4:
                            int32_t var_4e4_3 = r10_11
                            
                            if ((rcx_115.b & 4) == 0)
                                goto label_140316082
                            
                            goto label_140316ff5
                        
                    label_140316079:
                        
                        if ((rcx_115.b & 4) == 0)
                        label_140316082:
                            
                            if ((rcx_115.b & 8) != 0)
                                goto label_140317006
                            
                            goto label_14031608b
                        
                    label_140316ff5:
                        int32_t var_4e0_2 = r8_5
                        
                        if ((rcx_115.b & 8) != 0)
                        label_140317006:
                            int32_t var_4dc_2 = r15_9
                            
                            if (rax_256 == 0)
                                goto label_140316094
                            
                            goto label_140317017
                        
                    label_14031608b:
                        
                        if (rax_256 == 0)
                        label_140316094:
                            
                            if ((rcx_115.b & 2) != 0)
                                goto label_140317028
                            
                            goto label_1403160a0
                        
                    label_140317017:
                        var_4d8 = r9_2
                        
                        if ((rcx_115.b & 2) != 0)
                        label_140317028:
                            int32_t var_4d4_4 = r12_6
                            r8_1 = var_378
                            
                            if ((rcx_115.b & 4) == 0)
                                goto label_1403160ae
                            
                            goto label_140317048
                        
                    label_1403160a0:
                        r8_1 = var_378
                        
                        if ((rcx_115.b & 4) == 0)
                        label_1403160ae:
                            
                            if ((rcx_115.b & 8) != 0)
                                goto label_140317058
                            
                            goto label_1403160b7
                        
                    label_140317048:
                        int32_t var_4d0_6 = var_418.d
                        
                        if ((rcx_115.b & 8) != 0)
                        label_140317058:
                            int32_t var_4cc_6 = r11_6
                            
                            if (rax_256 == 0)
                                goto label_1403160c0
                            
                            goto label_140317070
                        
                    label_1403160b7:
                        
                        if (rax_256 == 0)
                        label_1403160c0:
                            
                            if ((rcx_115.b & 2) != 0)
                                goto label_140317087
                            
                            goto label_1403160c9
                        
                    label_140317070:
                        var_4c8 = var_3d8[0]
                        
                        if ((rcx_115.b & 2) != 0)
                        label_140317087:
                            int32_t var_4c4_4 = var_3c8_1.d
                            
                            if ((rcx_115.b & 4) == 0)
                                goto label_1403160d2
                            
                            goto label_140317097
                        
                    label_1403160c9:
                        
                        if ((rcx_115.b & 4) == 0)
                        label_1403160d2:
                            
                            if ((rcx_115.b & 8) != 0)
                                goto label_1403170a8
                            
                            goto label_1403160db
                        
                    label_140317097:
                        int32_t var_4c0_4 = r13_2
                        
                        if ((rcx_115.b & 8) != 0)
                        label_1403170a8:
                            int32_t var_4bc_3 = r14_8
                            
                            if (rax_256 == 0)
                                goto label_1403160e4
                            
                            goto label_1403170c0
                        
                    label_1403160db:
                        
                        if (rax_256 == 0)
                        label_1403160e4:
                            
                            if ((rcx_115.b & 2) != 0)
                                goto label_1403170d0
                            
                            goto label_1403160ed
                        
                    label_1403170c0:
                        var_4b8 = var_458.d
                        
                        if ((rcx_115.b & 2) != 0)
                        label_1403170d0:
                            int32_t var_4b4_2 = rbp_51
                            
                            if ((rcx_115.b & 4) == 0)
                                goto label_1403160f6
                            
                            goto label_1403170e0
                        
                    label_1403160ed:
                        int32_t var_4ac_1
                        
                        if ((rcx_115.b & 4) != 0)
                        label_1403170e0:
                            int32_t var_4b0_2 = rsi_26
                            
                            if ((rcx_115.b & 8) != 0)
                                var_4ac_1 = rdi_58
                        else
                        label_1403160f6:
                            
                            if ((rcx_115.b & 8) != 0)
                                var_4ac_1 = rdi_58
                    case 1
                        float var_3a8_6[0x4] = arg7
                        arg7 = arg6
                        uint128_t var_418_1 = zmm12
                        zmm6 = _mm_add_epi64(zmm6, zmm3)
                        zmm10 = _mm_add_epi64(zmm10, zmm4)
                        zmm2 = _mm_shuffle_epi32(zmm7, 0x50)
                        zmm10 &= zmm2
                        zmm3 = zmm6
                        zmm6 = _mm_shuffle_epi32(zmm7, 0xfa)
                        zmm3 &= zmm6
                        int64_t rdx_147 = zmm10[0].q
                        void* rcx_116 = arg4 + rdx_147
                        zmm1 = *(arg4 + rdx_147)
                        int64_t rbp_52 = _mm_shuffle_epi32(zmm10, 0x4e).q
                        void* rdx_148 = arg4 + rbp_52
                        arg6 = *(arg4 + rbp_52)
                        int64_t rbx_52 = zmm3[0].q
                        void* rbp_53 = arg4 + rbx_52
                        zmm7 = *(arg4 + rbx_52)
                        int64_t rdi_59 = _mm_shuffle_epi32(zmm3, 0x4e).q
                        void* rbx_53 = arg4 + rdi_59
                        zmm5 = *(arg4 + rdi_59)
                        zmm4 = data_1434426c0
                        zmm0 = zmm2 & zmm4
                        zmm4 &= zmm6
                        zmm3 = *(zmm0.q + rcx_116)
                        zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rdx_148)
                        zmm13 = *(zmm4.q + rbp_53)
                        zmm12 = *(_mm_shuffle_epi32(zmm4, 0x4e).q + rbx_53)
                        zmm4 = data_1434426e0
                        zmm2 &= zmm4
                        zmm6 &= zmm4
                        arg5 = *(zmm2[0].q + rcx_116)
                        zmm10 = *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rdx_148)
                        zmm9 = *(zmm6[0].q + rbp_53)
                        zmm8 = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rbx_53)
                        rcx_115 = zx.q(temp0_1603)
                        rax_256 = rcx_115 & 1
                        
                        if (rax_256 == 0)
                            if ((rcx_115.b & 2) != 0)
                                goto label_14031724a
                            
                            goto label_1403162c6
                        
                        var_4e8 = zmm1[0]
                        
                        if ((rcx_115.b & 2) != 0)
                        label_14031724a:
                            float var_4e4_5 = arg6[0]
                            
                            if ((rcx_115.b & 4) == 0)
                                goto label_1403162cf
                            
                            goto label_14031725d
                        
                    label_1403162c6:
                        
                        if ((rcx_115.b & 4) != 0)
                        label_14031725d:
                            float var_4e0_4 = zmm7[0]
                            
                            if ((rcx_115.b & 8) != 0)
                            label_14031726f:
                                float var_4dc_4 = zmm5[0]
                                
                                if (rax_256 == 0)
                                    goto label_1403162e1
                                
                                goto label_140317281
                        else
                        label_1403162cf:
                            
                            if ((rcx_115.b & 8) != 0)
                                goto label_14031726f
                        
                        int32_t var_4d4_1
                        
                        if (rax_256 != 0)
                        label_140317281:
                            var_4d8 = zmm3[0]
                            zmm1 = _mm_unpacklo_ps(zmm1, arg6[0].q)
                            zmm7 = _mm_unpacklo_ps(zmm7, zmm5[0].q)
                            
                            if ((rcx_115.b & 2) != 0)
                                var_4d4_1 = zmm0.d
                        else
                        label_1403162e1:
                            zmm1 = _mm_unpacklo_ps(zmm1, arg6[0].q)
                            zmm7 = _mm_unpacklo_ps(zmm7, zmm5[0].q)
                            
                            if ((rcx_115.b & 2) != 0)
                                var_4d4_1 = zmm0.d
                        zmm1 = zmm1[0].q | zmm7[0].q << 0x40
                        float temp0_1639[0x4] = _mm_unpacklo_ps(zmm3, zmm0.q)
                        zmm0 = _mm_unpacklo_ps(zmm13, zmm12.q)
                        arg6 = arg7
                        
                        if ((rcx_115.b & 4) != 0)
                            int32_t var_4d0_1 = zmm13.d
                        
                        zmm3 = temp0_1639[0].q | zmm0.q << 0x40
                        zmm0 = _mm_unpacklo_ps(arg5, zmm10[0].q)
                        zmm4 = _mm_unpacklo_ps(zmm9, zmm8[0].q)
                        zmm1 = _mm_mul_ps(zmm1, zmm1)
                        arg7 = var_3a8_6
                        
                        if ((rcx_115.b & 8) != 0)
                            int32_t var_4cc_1 = zmm12.d
                        
                        zmm0 = zmm0.q | zmm4.q << 0x40
                        float temp0_1644[0x4] = _mm_sub_ps(data_142d3f670, zmm1)
                        float temp0_1645[0x4] = _mm_mul_ps(zmm3, zmm3)
                        
                        if (rax_256 != 0)
                            var_4c8 = arg5[0]
                        
                        float temp0_1646[0x4] = _mm_sub_ps(temp0_1644, temp0_1645)
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        zmm12 = var_418_1
                        
                        if ((rcx_115.b & 2) == 0)
                            zmm2 = _mm_sub_ps(temp0_1646, zmm0)
                            zmm0 = zx.o(0)
                            
                            if ((rcx_115.b & 4) != 0)
                                goto label_1403172b8
                            
                            goto label_14031638d
                        
                        float var_4c4_6 = zmm10[0]
                        zmm2 = _mm_sub_ps(temp0_1646, zmm0)
                        zmm0 = zx.o(0)
                        
                        if ((rcx_115.b & 4) != 0)
                        label_1403172b8:
                            int32_t var_4c0_6 = zmm9[0]
                            zmm0 = _mm_cmpeq_ps(zmm0, zmm2, 1)
                            zmm1 = _mm_sqrt_ps(zmm2)
                            
                            if ((rcx_115.b & 8) == 0)
                                goto label_14031750f
                            
                            goto label_1403172d2
                        
                    label_14031638d:
                        zmm0 = _mm_cmpeq_ps(zmm0, zmm2, 1)
                        zmm1 = _mm_sqrt_ps(zmm2)
                        
                        if ((rcx_115.b & 8) == 0)
                        label_14031750f:
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (rax_256 != 0)
                                goto label_1403172e8
                            
                            goto label_14031751b
                        
                    label_1403172d2:
                        uint32_t var_4bc_5 = zmm8[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if (rax_256 != 0)
                        label_1403172e8:
                            var_4b8 = zmm0.d
                            
                            if ((rcx_115.b & 2) == 0)
                                goto label_140317524
                            
                            goto label_1403172ff
                        
                    label_14031751b:
                        
                        if ((rcx_115.b & 2) == 0)
                        label_140317524:
                            
                            if ((rcx_115.b & 4) != 0)
                                goto label_140317316
                            
                            goto label_14031752d
                        
                    label_1403172ff:
                        uint32_t var_4b4_4 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        
                        if ((rcx_115.b & 4) == 0)
                        label_14031752d:
                            
                            if ((rcx_115.b & 8) != 0)
                                var_4ac_3 = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_140317316:
                            uint32_t var_4b0_4 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                            
                            if ((rcx_115.b & 8) != 0)
                                var_4ac_3 = _mm_shuffle_epi32(zmm0, 0xe7).d
                    case 2
                        zmm6 = _mm_add_epi64(zmm6, zmm3)
                        zmm10 = _mm_add_epi64(zmm10, zmm4)
                        zmm0 = _mm_shuffle_epi32(zmm7, 0x50)
                        zmm10 &= zmm0
                        uint32_t temp0_1654[0x4] = _mm_shuffle_epi32(zmm7, 0xfa)
                        zmm6 &= temp0_1654
                        int64_t rcx_120 = zmm10[0].q
                        void* rbp_54 = arg4 + rcx_120
                        int64_t rdx_149 = _mm_shuffle_epi32(zmm10, 0x4e)[0].q
                        void* rbx_54 = arg4 + rdx_149
                        zmm2 = data_1434426b0
                        zmm3 = zmm0 & zmm2
                        void* rdi_65 = zmm3[0].q
                        int16_t* rdi_67 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                        zmm3 = data_1434426c0
                        zmm0 &= zmm3
                        zmm4 = __pinsrw_xmmdq_memw_immb(zx.o(*(rdi_65 + rbp_54)), 
                            *(rdi_67 + rbx_54), 1)
                        int16_t* rdi_69 = _mm_shuffle_epi32(zmm0, 0x4e).q
                        int64_t rbp_56 = zmm6[0].q
                        zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm0.q + rbp_54)), 
                            *(rdi_69 + rbx_54), 1)
                        void* rbx_55 = arg4 + rbp_56
                        zmm2 &= temp0_1654
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(zmm2[0].q + rbx_55), 2)
                        zmm1 = temp0_1654 & zmm3
                        zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(zmm1[0].q + rbx_55), 2)
                        zmm3 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rcx_120)), *(arg4 + rdx_149), 1)
                        zmm5 = _mm_shuffle_epi32(zmm6, 0x4e)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(arg4 + rbp_56), 2)
                        int64_t rcx_122 = zmm5[0].q
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(arg4 + rcx_122), 3)
                        void* rcx_123 = arg4 + rcx_122
                        int16_t* rdx_150 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        uint32_t temp0_1667[0x4] = _mm_shuffle_epi32(zmm1, 0x4e)
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(rdx_150 + rcx_123), 3)
                        zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(temp0_1667[0].q + rcx_123), 3)
                        zmm3 = _mm_unpacklo_epi16(zmm3, 0)
                        zmm5 = data_1434424d0
                        float temp0_1672[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm5))
                        zmm3 = data_1434426d0
                        float temp0_1673[0x4] = _mm_div_ps(temp0_1672, zmm3)
                        rcx_115 = zx.q(temp0_1603)
                        rax_256 = rcx_115 & 1
                        
                        if (rax_256 == 0)
                            zmm4 = _mm_unpacklo_epi16(zmm4, 0)
                            
                            if ((rcx_115.b & 2) != 0)
                                goto label_140317348
                            
                            goto label_1403164dd
                        
                        var_4e8 = temp0_1673[0]
                        zmm4 = _mm_unpacklo_epi16(zmm4, 0)
                        
                        if ((rcx_115.b & 2) != 0)
                        label_140317348:
                            float var_4e4_6 = _mm_shuffle_epi32(temp0_1673, 0xe5)[0]
                            zmm4 = _mm_add_epi32(zmm4, zmm5)
                            
                            if ((rcx_115.b & 4) == 0)
                                goto label_1403164ea
                            
                            goto label_140317363
                        
                    label_1403164dd:
                        zmm4 = _mm_add_epi32(zmm4, zmm5)
                        
                        if ((rcx_115.b & 4) == 0)
                        label_1403164ea:
                            zmm4 = _mm_cvtepi32_ps(zmm4)
                            
                            if ((rcx_115.b & 8) != 0)
                                goto label_14031737d
                            
                            goto label_1403164f6
                        
                    label_140317363:
                        float var_4e0_5 = _mm_shuffle_epi32(temp0_1673, 0x4e)[0]
                        zmm4 = _mm_cvtepi32_ps(zmm4)
                        
                        if ((rcx_115.b & 8) != 0)
                        label_14031737d:
                            float var_4dc_5 = _mm_shuffle_epi32(temp0_1673, 0xe7)[0]
                            zmm4 = _mm_div_ps(zmm4, zmm3)
                            
                            if (rax_256 == 0)
                                goto label_140316502
                            
                            goto label_140317392
                        
                    label_1403164f6:
                        zmm4 = _mm_div_ps(zmm4, zmm3)
                        
                        if (rax_256 == 0)
                        label_140316502:
                            zmm0 = _mm_unpacklo_epi16(zmm0, 0)
                            
                            if ((rcx_115.b & 2) != 0)
                                goto label_1403173ad
                            
                            goto label_14031650f
                        
                    label_140317392:
                        var_4d8 = zmm4.d
                        zmm0 = _mm_unpacklo_epi16(zmm0, 0)
                        float var_4d0_2
                        
                        if ((rcx_115.b & 2) == 0)
                        label_14031650f:
                            zmm0 = _mm_add_epi32(zmm0, zmm5)
                            
                            if ((rcx_115.b & 4) != 0)
                                var_4d0_2 = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                        else
                        label_1403173ad:
                            float var_4d4_6 = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                            zmm0 = _mm_add_epi32(zmm0, zmm5)
                            
                            if ((rcx_115.b & 4) != 0)
                                var_4d0_2 = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                        zmm0 = _mm_cvtepi32_ps(zmm0)
                        float temp0_1682[0x4] = _mm_mul_ps(temp0_1673, temp0_1673)
                        zmm5 = data_142d3f670
                        
                        if ((rcx_115.b & 8) != 0)
                            float var_4cc_2 = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                        
                        zmm0 = _mm_div_ps(zmm0, zmm3)
                        float temp0_1685[0x4] = _mm_sub_ps(zmm5, temp0_1682)
                        zmm4 = _mm_mul_ps(zmm4, zmm4)
                        
                        if (rax_256 != 0)
                            var_4c8 = zmm0.d
                        
                        float temp0_1687[0x4] = _mm_sub_ps(temp0_1685, zmm4)
                        float temp0_1688[0x4] = _mm_mul_ps(zmm0, zmm0)
                        
                        if ((rcx_115.b & 2) != 0)
                            float var_4c4_1 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        
                        float temp0_1690[0x4] = _mm_sub_ps(temp0_1687, temp0_1688)
                        
                        if ((rcx_115.b & 4) != 0)
                            float var_4c0_1 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        
                        zmm1 = _mm_cmpeq_ps(zx.o(0), temp0_1690, 1)
                        zmm2 = _mm_sqrt_ps(temp0_1690)
                        
                        if ((rcx_115.b & 8) == 0)
                            goto label_1403165a9
                        
                    label_1403165a0:
                        int32_t var_4bc_1 = _mm_shuffle_epi32(zmm0, 0xe7).d
                    label_1403165a9:
                        uint32_t temp0_1695[0x4] = _mm_and_ps(zmm1, zmm2)
                        
                        if (rax_256 == 0)
                            if ((rcx_115.b & 2) != 0)
                                goto label_140316dac
                            
                            goto label_1403165be
                        
                        var_4b8 = temp0_1695[0]
                        
                        if ((rcx_115.b & 2) != 0)
                        label_140316dac:
                            int32_t var_4b4_1 = _mm_shuffle_epi32(temp0_1695, 0xe5).d
                            
                            if ((rcx_115.b & 4) == 0)
                                goto label_1403165c7
                            
                            goto label_140316dc3
                        
                    label_1403165be:
                        
                        if ((rcx_115.b & 4) != 0)
                        label_140316dc3:
                            int32_t var_4b0_1 = _mm_shuffle_epi32(temp0_1695, 0x4e).d
                            
                            if ((rcx_115.b & 8) != 0)
                                var_4ac_3 = _mm_shuffle_epi32(temp0_1695, 0xe7).d
                        else
                        label_1403165c7:
                            
                            if ((rcx_115.b & 8) != 0)
                                var_4ac_3 = _mm_shuffle_epi32(temp0_1695, 0xe7).d
                    case 3
                        float var_3a8_7[0x4] = arg7
                        uint128_t var_418_2 = zmm12
                        zmm9 &= zmm7
                        int64_t rcx_125 = sx.q(zmm9[0])
                        void* rsi_27 = arg4 + rcx_125
                        zmm1 = zmm9
                        zmm9 = zmm10
                        zmm10 = *(arg4 + rcx_125)
                        int64_t rdx_152 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
                        void* rcx_127 = arg4 + rdx_152
                        float temp0_1697[0x4] = _mm_unpacklo_ps(zmm10, (*(arg4 + rdx_152)).q)
                        int64_t rdx_154 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
                        void* rbp_57 = arg4 + rdx_154
                        zmm0 = *(arg4 + rdx_154)
                        int64_t rdx_156 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
                        void* rbx_56 = arg4 + rdx_156
                        zmm0 = _mm_unpacklo_ps(zmm0, (*(arg4 + rdx_156))[0].q)
                        zmm10 = temp0_1697[0].q | zmm0.q << 0x40
                        zmm0 = data_142fc95e0 & zmm7
                        zmm12 = zx.o(*(zx.q(zmm0.d) + rsi_27))
                        uint32_t var_3c8_2[0x4] =
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rcx_127)
                        uint64_t r10_12 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                        uint64_t r15_10 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                        zmm0 = data_142fc95f0 & zmm7
                        zmm13 = zx.o(*(zx.q(zmm0.d) + rsi_27))
                        uint32_t var_458_1[0x4] =
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rcx_127)
                        uint64_t r11_7 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                        uint64_t r8_6 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                        zmm1 = data_143442650 & zmm7
                        zmm0 = _mm_unpacklo_ps(*(zx.q(zmm1[0]) + rsi_27), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0]) + rcx_127))[0].q).q |
                            _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0]) + rbp_57), 
                            (*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0]) + rbx_56))[0].q)[0].q << 0x40
                        zmm1 = data_143442660 & zmm7
                        arg7 = *(zx.q(zmm1[0]) + rsi_27)
                        uint64_t rdi_72 = zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
                        zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                        zmm5 = data_143442670 & zmm7
                        zmm8 = *(zx.q(zmm5[0]) + rsi_27)
                        uint64_t r14_9 = zx.q(zmm2[0])
                        float (* rsi_28)[0x4] = zx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])
                        float var_3e8_5[0x4] = *(rdi_72 + rcx_127)
                        zmm6 = _mm_add_epi64(zmm6, zmm3)
                        float var_468_2[0x4] = *(rsi_28 + rcx_127)
                        uint32_t temp0_1716[0x4] = _mm_shuffle_epi32(zmm1, 0xe7)
                        int32_t temp0_1717[0x4] = _mm_add_epi64(zmm9, zmm4)
                        zmm3 = _mm_shuffle_epi32(zmm7, 0x50) & temp0_1717
                        zmm7 = _mm_shuffle_epi32(zmm7, 0xfa) & zmm6
                        int64_t rcx_128 = zmm3[0].q
                        zmm3 = _mm_shuffle_epi32(zmm3, 0x4e)
                        zmm4 = zx.o(*(arg4 + rcx_128))
                        zmm3 = zx.o(*(arg4 + zmm3[0].q))
                        int64_t rcx_130 = zmm7[0].q
                        zmm7 = _mm_shuffle_epi32(zmm7, 0x4e)
                        zmm2 = zx.o(*(arg4 + rcx_130))
                        zmm7 = zx.o(*(arg4 + zmm7[0].q))
                        uint64_t rsi_29 = zx.q(temp0_1716[0])
                        uint64_t rdi_73 = zx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])
                        zmm1 = zx.o(*(r10_12 + rbp_57))
                        float (* rdx_167)[0x4] = zx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])
                        arg6 = zx.o(*(r15_10 + rbx_56))
                        zmm4 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm4, zmm3[0].q), 
                            _mm_unpacklo_epi32(zmm2, zmm7[0].q)[0].q)
                        zmm2 = _mm_srli_epi32(zmm4, 0x15)
                        zmm7 = data_143442440
                        float temp0_1729[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm7))
                        zmm9 = data_143442690
                        float temp0_1731[0x4] = _mm_mul_ps(_mm_div_ps(temp0_1729, zmm9), zmm0)
                        zmm0 = zx.o(*(r11_7 + rbp_57))
                        float temp0_1732[0x4] = _mm_add_ps(temp0_1731, zmm10)
                        zmm5 = _mm_add_epi32(_mm_srli_epi32(zmm4, 0xa) & data_143442480, zmm7)
                        float var_3d8_1[0x4] = zx.o(*(r8_6 + rbx_56))
                        rcx_115 = zx.q(temp0_1603)
                        zmm7 = *(rdi_73 + rbp_57)
                        zmm6 = *(rdx_167 + rbx_56)
                        rax_256 = rcx_115 & 1
                        
                        if (rax_256 != 0)
                            var_4e8 = temp0_1732[0]
                        
                        arg5 = _mm_unpacklo_ps(*(r14_9 + rbp_57), (*(rsi_29 + rbx_56))[0].q)
                        float temp0_1736[0x4] = __unpcklps_xmmps_memdq(arg7, var_3e8_5)
                        float temp0_1737[0x4] = _mm_cvtepi32_ps(zmm5)
                        
                        if ((rcx_115.b & 2) != 0)
                            float var_4e4_1 = _mm_shuffle_epi32(temp0_1732, 0xe5)[0]
                        
                        zmm1 = _mm_unpacklo_epi32(zmm1, arg6[0].q)
                        zmm12 = __punpckldq_xmmdq_memdq(zmm12, var_3c8_2)
                        arg7 = temp0_1736[0].q | arg5[0].q << 0x40
                        float temp0_1741[0x4] = _mm_div_ps(temp0_1737, zmm9)
                        r8_1 = var_378
                        
                        if ((rcx_115.b & 4) != 0)
                            float var_4e0_1 = _mm_shuffle_epi32(temp0_1732, 0x4e)[0]
                        
                        zmm4 &= data_143442680
                        zmm12 = _mm_unpacklo_epi64(zmm12, zmm1[0].q)
                        float temp0_1744[0x4] = _mm_mul_ps(arg7, temp0_1741)
                        arg6 = var_388_1
                        
                        if ((rcx_115.b & 8) != 0)
                            uint32_t var_4dc_1 = _mm_shuffle_epi32(temp0_1732, 0xe7)[0]
                        
                        zmm4 = __paddd_xmmdq_memdq(zmm4, data_143442490)
                        zmm12 = _mm_add_ps(zmm12, temp0_1744)
                        
                        if (rax_256 != 0)
                            var_4d8 = zmm12.d
                        
                        float temp0_1748[0x4] = _mm_unpacklo_ps(zmm7, zmm6[0].q)
                        zmm8 = __unpcklps_xmmps_memdq(zmm8, var_468_2)
                        zmm1 = _mm_cvtepi32_ps(zmm4)
                        arg7 = var_3a8_7
                        
                        if ((rcx_115.b & 2) != 0)
                            float var_4d4_2 = _mm_shuffle_epi32(zmm12, 0xe5)[0]
                        
                        zmm0 = __punpckldq_xmmdq_memdq(zmm0, var_3d8_1)
                        zmm13 = __punpckldq_xmmdq_memdq(zmm13, var_458_1)
                        zmm8 = zmm8[0].q | temp0_1748[0].q << 0x40
                        zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                        
                        if ((rcx_115.b & 4) != 0)
                            float var_4d0_3 = _mm_shuffle_epi32(zmm12, 0x4e)[0]
                        
                        zmm13 = _mm_unpacklo_epi64(zmm13, zmm0.q)
                        zmm8 = _mm_mul_ps(zmm8, zmm1)
                        float temp0_1758[0x4] = _mm_mul_ps(temp0_1732, temp0_1732)
                        zmm1 = data_142d3f670
                        
                        if ((rcx_115.b & 8) != 0)
                            int32_t var_4cc_3 = _mm_shuffle_epi32(zmm12, 0xe7).d
                        
                        zmm13 = _mm_add_ps(zmm13, zmm8)
                        zmm1 = _mm_sub_ps(zmm1, temp0_1758)
                        zmm12 = _mm_mul_ps(zmm12, zmm12)
                        
                        if (rax_256 != 0)
                            var_4c8 = zmm13.d
                        
                        zmm1 = _mm_sub_ps(zmm1, zmm12)
                        zmm0 = _mm_mul_ps(zmm13, zmm13)
                        
                        if ((rcx_115.b & 2) != 0)
                            float var_4c4_2 = _mm_shuffle_epi32(zmm13, 0xe5)[0]
                        
                        zmm1 = _mm_sub_ps(zmm1, zmm0)
                        zmm12 = var_418_2
                        
                        if ((rcx_115.b & 4) != 0)
                            float var_4c0_2 = _mm_shuffle_epi32(zmm13, 0x4e)[0]
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        
                        if ((rcx_115.b & 8) == 0)
                            goto label_14031750f
                        
                        float var_4bc_2 = _mm_shuffle_epi32(zmm13, 0xe7)[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if (rax_256 != 0)
                            goto label_1403172e8
                        
                        goto label_14031751b
                    case 4
                        zmm6 = _mm_add_epi64(zmm6, zmm3)
                        zmm10 = _mm_add_epi64(zmm10, zmm4)
                        zmm0 = _mm_shuffle_epi32(zmm7, 0x50) & zmm10
                        zmm1 = _mm_shuffle_epi32(zmm7, 0xfa) & zmm6
                        int64_t rdx_168 = _mm_shuffle_epi32(zmm0, 0x4e).q
                        int64_t rbp_58 = zmm1[0].q
                        int64_t rbx_57 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), 
                                zx.o(*(arg4 + rdx_168))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_58)), zx.o(*(arg4 + rbx_57))[0].q)[
                            0].q)
                        uint32_t temp0_1781[0x4] = _mm_srli_epi32(zmm0, 0x15)
                        zmm2 = _mm_srli_epi32(zmm0, 0xa)
                        zmm4 = data_143442440
                        zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(temp0_1781, zmm4))
                        zmm3 = data_143442690
                        zmm1 = _mm_div_ps(zmm1, zmm3)
                        rcx_115 = zx.q(temp0_1603)
                        rax_256 = rcx_115 & 1
                        
                        if (rax_256 == 0)
                            zmm2 &= data_143442480
                            
                            if ((rcx_115.b & 2) != 0)
                                goto label_1403173e7
                            
                            goto label_140316ae0
                        
                        var_4e8 = zmm1[0]
                        zmm2 &= data_143442480
                        
                        if ((rcx_115.b & 2) != 0)
                        label_1403173e7:
                            float var_4e4_7 = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                            zmm2 = _mm_add_epi32(zmm2, zmm4)
                            
                            if ((rcx_115.b & 4) == 0)
                                goto label_140316aed
                            
                            goto label_140317402
                        
                    label_140316ae0:
                        zmm2 = _mm_add_epi32(zmm2, zmm4)
                        
                        if ((rcx_115.b & 4) == 0)
                        label_140316aed:
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rcx_115.b & 8) != 0)
                                goto label_14031741c
                            
                            goto label_140316af9
                        
                    label_140317402:
                        int32_t var_4e0_6 = _mm_shuffle_epi32(zmm1, 0x4e).d
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rcx_115.b & 8) != 0)
                        label_14031741c:
                            int32_t var_4dc_6 = _mm_shuffle_epi32(zmm1, 0xe7).d
                            zmm2 = _mm_div_ps(zmm2, zmm3)
                            
                            if (rax_256 == 0)
                                goto label_140316b05
                            
                            goto label_140317431
                        
                    label_140316af9:
                        zmm2 = _mm_div_ps(zmm2, zmm3)
                        
                        if (rax_256 == 0)
                        label_140316b05:
                            zmm0 &= data_143442680
                            
                            if ((rcx_115.b & 2) != 0)
                                goto label_140317450
                            
                            goto label_140316b16
                        
                    label_140317431:
                        var_4d8 = zmm2[0]
                        zmm0 &= data_143442680
                        float var_4d0_4
                        
                        if ((rcx_115.b & 2) == 0)
                        label_140316b16:
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            
                            if ((rcx_115.b & 4) != 0)
                                var_4d0_4 = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                        else
                        label_140317450:
                            float var_4d4_7 = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            
                            if ((rcx_115.b & 4) != 0)
                                var_4d0_4 = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                        zmm0 = _mm_cvtepi32_ps(zmm0)
                        zmm1 = _mm_mul_ps(zmm1, zmm1)
                        zmm3 = data_142d3f670
                        
                        if ((rcx_115.b & 8) != 0)
                            int32_t var_4cc_4 = _mm_shuffle_epi32(zmm2, 0xe7).d
                        
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426a0)
                        float temp0_1795[0x4] = _mm_sub_ps(zmm3, zmm1)
                        float temp0_1796[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if (rax_256 != 0)
                            var_4c8 = zmm0.d
                        
                        float temp0_1797[0x4] = _mm_sub_ps(temp0_1795, temp0_1796)
                        zmm1 = _mm_mul_ps(zmm0, zmm0)
                        
                        if ((rcx_115.b & 2) != 0)
                            float var_4c4_3 = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                        
                        float temp0_1800[0x4] = _mm_sub_ps(temp0_1797, zmm1)
                        
                        if ((rcx_115.b & 4) != 0)
                            float var_4c0_3 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        
                        zmm1 = _mm_cmpeq_ps(zx.o(0), temp0_1800, 1)
                        zmm2 = _mm_sqrt_ps(temp0_1800)
                        
                        if ((rcx_115.b & 8) == 0)
                            goto label_1403165a9
                        
                        goto label_1403165a0
                    case 5
                        zmm6 = _mm_add_epi64(zmm6, zmm3)
                        zmm10 = _mm_add_epi64(zmm10, zmm4)
                        zmm0 = _mm_shuffle_epi32(zmm7, 0x50) & zmm10
                        zmm1 = _mm_shuffle_epi32(zmm7, 0xfa) & zmm6
                        int64_t rdx_169 = _mm_shuffle_epi32(zmm0, 0x4e).q
                        int64_t rbp_59 = zmm1[0].q
                        int64_t rbx_58 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        zmm2 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm0.q)), zx.q(*(arg4 + rdx_169))), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_59)), zx.o(*(arg4 + rbx_58))[0].q)
                                .q)
                        uint32_t temp0_1813[0x4] = _mm_srli_epi32(zmm2, 0x15)
                        zmm0 = _mm_srli_epi32(zmm2, 5)
                        zmm6 = data_143442600
                        zmm4 = data_143442610
                        zmm3 = data_143442320
                        zmm8 = data_143442330
                        zmm1 = _mm_add_epi32(temp0_1813 & zmm3, zmm8) | (temp0_1813 & zmm4)
                            | (zmm0 & zmm6)
                        rcx_115 = zx.q(temp0_1603)
                        rax_256 = rcx_115 & 1
                        
                        if (rax_256 != 0)
                            var_4e8 = zmm1[0]
                        
                        zmm7 = _mm_srli_epi32(zmm2, 0xa)
                        zmm0 = _mm_slli_epi32(zmm2, 6)
                        
                        if ((rcx_115.b & 2) != 0)
                            float var_4e4_2 = _mm_shuffle_epi32(zmm1, 0xe5)[0]
                        
                        zmm0 &= zmm6
                        zmm4 &= zmm7
                        zmm3 &= zmm7
                        
                        if ((rcx_115.b & 4) == 0)
                            zmm3 = _mm_add_epi32(zmm3, zmm8)
                            zmm0 |= zmm4
                            
                            if ((rcx_115.b & 8) != 0)
                                goto label_140317494
                            
                            goto label_140316cc5
                        
                        float var_4e0_7 = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                        zmm3 = _mm_add_epi32(zmm3, zmm8)
                        zmm0 |= zmm4
                        
                        if ((rcx_115.b & 8) != 0)
                        label_140317494:
                            int32_t var_4dc_7 = _mm_shuffle_epi32(zmm1, 0xe7).d
                            zmm0 |= zmm3
                            
                            if (rax_256 == 0)
                                goto label_140316cd6
                            
                            goto label_1403174aa
                        
                    label_140316cc5:
                        zmm0 |= zmm3
                        int32_t var_4d4_3
                        
                        if (rax_256 != 0)
                        label_1403174aa:
                            var_4d8 = zmm0.d
                            zmm3 = _mm_slli_epi32(zmm2, 0x11)
                            
                            if ((rcx_115.b & 2) != 0)
                                var_4d4_3 = _mm_shuffle_epi32(zmm0, 0xe5).d
                        else
                        label_140316cd6:
                            zmm3 = _mm_slli_epi32(zmm2, 0x11)
                            
                            if ((rcx_115.b & 2) != 0)
                                var_4d4_3 = _mm_shuffle_epi32(zmm0, 0xe5).d
                        zmm3 &= data_143442630
                        zmm4 = data_143442620 & zmm2
                        zmm2 &= data_143442640
                        
                        if ((rcx_115.b & 4) != 0)
                            float var_4d0_5 = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                        
                        zmm4 = __paddd_xmmdq_memdq(zmm4, data_1434423a0)
                        zmm3 |= zmm2
                        zmm1 = _mm_mul_ps(zmm1, zmm1)
                        zmm2 = data_142d3f670
                        
                        if ((rcx_115.b & 8) != 0)
                            float var_4cc_5 = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                        
                        zmm3 |= zmm4
                        float temp0_1826[0x4] = _mm_sub_ps(zmm2, zmm1)
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        
                        if (rax_256 != 0)
                            var_4c8 = zmm3[0]
                        
                        float temp0_1828[0x4] = _mm_sub_ps(temp0_1826, zmm0)
                        zmm0 = _mm_mul_ps(zmm3, zmm3)
                        
                        if ((rcx_115.b & 2) == 0)
                            zmm2 = _mm_sub_ps(temp0_1828, zmm0)
                            zmm0 = zx.o(0)
                            
                            if ((rcx_115.b & 4) != 0)
                                goto label_1403174ec
                            
                            goto label_140316d80
                        
                        uint32_t var_4c4_7 = _mm_shuffle_epi32(zmm3, 0xe5)[0]
                        zmm2 = _mm_sub_ps(temp0_1828, zmm0)
                        zmm0 = zx.o(0)
                        float var_4bc_6
                        
                        if ((rcx_115.b & 4) == 0)
                        label_140316d80:
                            zmm0 = _mm_cmpeq_ps(zmm0, zmm2, 1)
                            zmm1 = _mm_sqrt_ps(zmm2)
                            
                            if ((rcx_115.b & 8) != 0)
                                var_4bc_6 = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                        else
                        label_1403174ec:
                            uint32_t var_4c0_7 = _mm_shuffle_epi32(zmm3, 0x4e)[0]
                            zmm0 = _mm_cmpeq_ps(zmm0, zmm2, 1)
                            zmm1 = _mm_sqrt_ps(zmm2)
                            
                            if ((rcx_115.b & 8) != 0)
                                var_4bc_6 = _mm_shuffle_epi32(zmm3, 0xe7)[0]
                        goto label_14031750f
            
            zmm4 = var_4e8.o
            zmm1 = var_4d8.o
            arg5 = var_4c8.o
            zmm10 = var_4b8.o
            float temp0_1887[0x4] = _mm_mul_ps(var_568, zmm4)
            float temp0_1889[0x4] = _mm_add_ps(_mm_mul_ps(var_558, zmm1), temp0_1887)
            float temp0_1891[0x4] = _mm_add_ps(_mm_mul_ps(var_548, arg5), temp0_1889)
            float temp0_1893[0x4] = _mm_add_ps(_mm_mul_ps(var_538, zmm10), temp0_1891)
            float temp0_1894[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_1893, 2)
            zmm7 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), temp0_1893, 6), data_142d3f7e0)
            zmm8 = data_142d3f670
            zmm6 = _mm_or_ps(_mm_and_ps(temp0_1894, zmm8), zmm7)
            zmm4 = _mm_mul_ps(zmm4, arg7)
            zmm1 = _mm_mul_ps(zmm1, arg7)
            arg5 = _mm_mul_ps(arg5, arg7)
            float temp0_1902[0x4] = _mm_mul_ps(zmm10, arg7)
            float temp0_1904[0x4] = _mm_mul_ps(_mm_sub_ps(zmm8, arg7), zmm6)
            float temp0_1906[0x4] = _mm_add_ps(_mm_mul_ps(var_568, temp0_1904), zmm4)
            float temp0_1908[0x4] = _mm_add_ps(_mm_mul_ps(var_558, temp0_1904), zmm1)
            zmm0 = _mm_add_ps(_mm_mul_ps(var_548, temp0_1904), arg5)
            float temp0_1912[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1904, var_538), temp0_1902)
            uint128_t var_208_1 = zmm0
            float temp0_1913[0x4] = _mm_mul_ps(temp0_1906, temp0_1906)
            float temp0_1914[0x4] = _mm_mul_ps(temp0_1908, temp0_1908)
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm0), temp0_1913)
            float temp0_1919[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_1912, temp0_1912), temp0_1914), zmm0)
            zmm2 = data_142d3f640
            float temp0_1920[0x4] = _mm_cmpeq_ps(data_142d3f5c0, temp0_1919, 2)
            zmm0 = _mm_rsqrt_ps(temp0_1919)
            float temp0_1922[0x4] = _mm_mul_ps(temp0_1919, zmm2)
            float var_128_1[0x4] = temp0_1922
            float var_118_1[0x4] = temp0_1922
            float var_108_1[0x4] = temp0_1922
            float var_f8_1[0x4] = temp0_1922
            zmm4 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm2, _mm_mul_ps(_mm_mul_ps(zmm0, zmm0), temp0_1922)), zmm0), 
                zmm0)
            float temp0_1932[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm2, _mm_mul_ps(_mm_mul_ps(zmm4, zmm4), temp0_1922)), zmm4), 
                zmm4)
            zmm1 = _mm_mul_ps(temp0_1906, temp0_1932)
            zmm4 = _mm_mul_ps(temp0_1908, temp0_1932)
            zmm0 = _mm_mul_ps(var_208_1, temp0_1932)
            float temp0_1936[0x4] = __mulps_xmmps_memps(temp0_1932, temp0_1912)
            uint32_t temp0_1937[0x4] = _mm_and_ps(zmm1, temp0_1920)
            
            if (rax_256 != 0)
                var_568[0] = temp0_1937[0]
            
            arg5 = var_438_2
            
            if ((rcx_115.b & 2) != 0)
                var_568[1] = _mm_shuffle_epi32(temp0_1937, 0xe5)[0]
                
                if ((rcx_115.b & 4) != 0)
                label_1403178a9:
                    var_568[2] = _mm_shuffle_epi32(temp0_1937, 0x4e)[0]
                    
                    if ((rcx_115.b & 8) == 0)
                        goto label_1403176e4
                    
                    goto label_1403178bd
            else if ((rcx_115.b & 4) != 0)
                goto label_1403178a9
            
            if ((rcx_115.b & 8) != 0)
            label_1403178bd:
                var_568[3] = _mm_shuffle_epi32(temp0_1937, 0xe7)[0]
                zmm4 = _mm_and_ps(zmm4, temp0_1920)
                
                if (rax_256 != 0)
                    var_558[0] = zmm4.d
            else
            label_1403176e4:
                zmm4 = _mm_and_ps(zmm4, temp0_1920)
                
                if (rax_256 != 0)
                    var_558[0] = zmm4.d
            
            if ((rcx_115.b & 2) != 0)
                var_558[1] = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                
                if ((rcx_115.b & 4) != 0)
                label_1403178ed:
                    var_558[2] = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                    
                    if ((rcx_115.b & 8) == 0)
                        goto label_14031770d
                    
                    goto label_140317901
            else if ((rcx_115.b & 4) != 0)
                goto label_1403178ed
            
            if ((rcx_115.b & 8) != 0)
            label_140317901:
                var_558[3] = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                zmm0 = _mm_and_ps(zmm0, temp0_1920)
                
                if (rax_256 != 0)
                    var_548.d = zmm0.d
            else
            label_14031770d:
                zmm0 = _mm_and_ps(zmm0, temp0_1920)
                
                if (rax_256 != 0)
                    var_548.d = zmm0.d
            
            if ((rcx_115.b & 2) == 0)
                if ((rcx_115.b & 4) != 0)
                    goto label_140317931
                
                goto label_14031772d
            
            var_548:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
            
            if ((rcx_115.b & 4) != 0)
            label_140317931:
                var_548:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                zmm2 = _mm_and_ps(temp0_1936, temp0_1920)
                zmm3 = _mm_andnot_ps(temp0_1920, zmm8)
                
                if ((rcx_115.b & 8) == 0)
                    goto label_14031773d
                
                goto label_14031794c
            
        label_14031772d:
            zmm2 = _mm_and_ps(temp0_1936, temp0_1920)
            zmm3 = _mm_andnot_ps(temp0_1920, zmm8)
            
            if ((rcx_115.b & 8) != 0)
            label_14031794c:
                var_548:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                zmm2 = _mm_or_ps(zmm2, zmm3)
                
                if (rax_256 != 0)
                    var_538[0] = zmm2[0]
            else
            label_14031773d:
                zmm2 = _mm_or_ps(zmm2, zmm3)
                
                if (rax_256 != 0)
                    var_538[0] = zmm2[0]
            
            if ((rcx_115.b & 2) == 0)
                if ((rcx_115.b & 4) != 0)
                    goto label_14031797c
                
                goto label_14031775d
            
            var_538[1] = _mm_shuffle_epi32(zmm2, 0xe5).d
            
            if ((rcx_115.b & 4) == 0)
            label_14031775d:
                
                if ((rcx_115.b & 8) != 0)
                    var_538[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
            else
            label_14031797c:
                var_538[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                
                if ((rcx_115.b & 8) != 0)
                    var_538[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
    
    zmm12 = _mm_unpacklo_epi64(zmm12, arg5[0].q)
    zmm0 = var_568
    zmm1 = var_558
    zmm2 = var_548
    zmm3 = var_538
    zmm4 = _mm_unpacklo_ps(zmm2, zmm3[0].q)
    float temp0_1946[0x4] = _mm_unpackhi_ps(zmm2, zmm3)
    float temp0_1947[0x4] = _mm_unpacklo_ps(zmm0, zmm1[0].q)
    zmm0 = _mm_unpackhi_ps(zmm0, zmm1)
    uint32_t var_1e8[0x4] = temp0_1947[0].q | zmm4.q << 0x40
    float var_1d8_1[0x4] = _mm_unpackhi_pd(temp0_1947, zmm4.q)
    uint32_t var_1c8_1[0x4] = zmm0[0].q | temp0_1946[0].q << 0x40
    uint128_t var_1b8_1 = _mm_unpackhi_pd(zmm0, temp0_1946[0].q)
    i_5 = zx.q(_mm_movemask_ps(arg6))
    
    do
        uint64_t rcx_134
        uint64_t rflags_1
        
        if (i_5 == 0)
            rcx_134 = 0x40
        else
            rcx_134, rflags_1 = _bit_scan_forward(i_5)
        uint128_t var_238 = zmm12
        r8_1[sx.q(*(&var_238 + ((zx.q(rcx_134.d) & 3) << 2))) * 3] = (&var_1e8)[rcx_134]
        i_5 &= rol.q(-2, rcx_134.b)
    while (i_5 != 0)

return i_5
