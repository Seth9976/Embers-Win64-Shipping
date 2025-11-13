// 函数: sub_1402fcec0
// 地址: 0x1402fcec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg7
float var_68[0x4] = arg6
uint128_t zmm13
uint128_t var_78 = zmm13
uint128_t zmm12
uint128_t var_88 = zmm12
int32_t var_98[0x4] = arg5
int32_t zmm10[0x4]
int32_t var_a8[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
int64_t r14 = sx.q(arg11)
int32_t rcx_1 = *(&data_143442fa0 + (r14 << 2)) * *(&data_143442f80 + (r14 << 2))
uint64_t r13 = 0
int32_t rax = 0x18

if (r14 != 3)
    rax = 0

int32_t i = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
uint32_t (* var_370)[0x4] = arg4
int64_t var_368 = r14
uint128_t zmm0
uint32_t zmm1[0x4]
float zmm2[0x4]
int32_t zmm3[0x4]
uint128_t zmm4
float zmm5[0x4]

if (i s> 0)
    uint128_t var_248_1 = _mm_shuffle_epi32(zx.o(arg4), 0x44)
    uint128_t var_2b8_1 = _mm_shuffle_epi32(zx.o(rax), 0) & data_1430219f0
    uint128_t var_338_1 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
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
    uint128_t var_458_1 = _mm_shuffle_epi32(zx.o(rax_3), 0)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    arg5 = _mm_cmpeq_epi32(arg5, arg5)
    zmm7 = data_142d3f670
    uint128_t* var_340_1 = arg2
    int32_t i_6 = i
    
    do
        int64_t rax_5 = sx.q((r13 << 3).d)
        zmm0 = *(arg2 + rax_5)
        zmm1 = *(arg2 + rax_5 + 0x10)
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
        int32_t temp0_31[0x4] = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + rax_7 + 0xc)), zx.o(*(arg3 + rcx_6 + 0xc))[0].q), 
            zmm1[0].q)
        zmm0 = __pcmpeqd_xmmdq_memdq(temp0_31, data_142d3f5b0)
        char temp0_33 = _mm_movemask_ps(zmm0)
        float var_448_1[0x4] = arg7
        uint128_t var_3e8_1 = zmm0
        uint128_t var_528
        uint128_t var_518
        int32_t var_508[0x4]
        float var_4f8[0x4]
        
        if (temp0_33 != 0)
            float var_428_1[0x4] = zmm8
            zmm13 = zmm12
            float var_468_1[0x4] = arg6
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
            
            if ((temp0_33 & 1) == 0)
                if ((temp0_33 & 2) != 0)
                    goto label_1402fd9af
                
                goto label_1402fd648
            
            var_528.d = zmm1[0]
            
            if ((temp0_33 & 2) != 0)
            label_1402fd9af:
                var_528:4.d = zmm12.d
                
                if ((temp0_33 & 4) == 0)
                    goto label_1402fd651
                
                goto label_1402fd9bf
            
        label_1402fd648:
            
            if ((temp0_33 & 4) != 0)
            label_1402fd9bf:
                var_528:8.d = zmm3[0]
                
                if ((temp0_33 & 8) != 0)
                label_1402fd9ce:
                    var_528:0xc.d = zmm7[0]
                    
                    if ((temp0_33 & 1) == 0)
                        goto label_1402fd663
                    
                    goto label_1402fd9dd
            else
            label_1402fd651:
                
                if ((temp0_33 & 8) != 0)
                    goto label_1402fd9ce
            
            if ((temp0_33 & 1) != 0)
            label_1402fd9dd:
                var_518.d = zmm2[0]
                zmm3 = _mm_unpacklo_ps(zmm3, zmm7[0].q)
                zmm1 = _mm_unpacklo_ps(zmm1, zmm12.q)
                
                if ((temp0_33 & 2) != 0)
                    var_518:4.d = zmm6[0]
            else
            label_1402fd663:
                zmm3 = _mm_unpacklo_ps(zmm3, zmm7[0].q)
                zmm1 = _mm_unpacklo_ps(zmm1, zmm12.q)
                
                if ((temp0_33 & 2) != 0)
                    var_518:4.d = zmm6[0]
            
            zmm1 = zmm1[0].q | zmm3[0].q << 0x40
            zmm3 = _mm_unpacklo_ps(arg7, arg6[0].q)
            float temp0_46[0x4] = _mm_unpacklo_ps(zmm2, zmm6[0].q)
            zmm12 = zmm13
            
            if ((temp0_33 & 4) != 0)
                var_518:8.d = arg7[0]
            
            zmm2 = temp0_46[0].q | zmm3[0].q << 0x40
            zmm4 = _mm_unpacklo_ps(zmm0, zmm8[0].q)
            zmm3 = _mm_unpacklo_ps(arg5, zmm10[0].q)
            zmm1 = _mm_mul_ps(zmm1, zmm1)
            
            if ((temp0_33 & 8) != 0)
                var_518:0xc.d = arg6[0]
            
            zmm3 = zmm3[0].q | zmm4.q << 0x40
            arg7 = data_142d3f670
            zmm7 = arg7
            zmm4 = _mm_sub_ps(arg7, zmm1)
            float temp0_51[0x4] = _mm_mul_ps(zmm2, zmm2)
            
            if ((temp0_33 & 1) != 0)
                var_508[0] = arg5[0]
            
            zmm4 = _mm_sub_ps(zmm4, temp0_51)
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            arg6 = var_468_1
            arg7 = var_448_1
            
            if ((temp0_33 & 2) != 0)
                var_508[1] = zmm10[0]
            
            zmm4 = _mm_sub_ps(zmm4, zmm3)
            arg5 = _mm_cmpeq_epi32(arg5, arg5)
            
            if ((temp0_33 & 4) != 0)
                var_508[2] = zmm0.d
            
            zmm1 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
            float temp0_57[0x4] = _mm_sqrt_ps(zmm4)
            
            if ((temp0_33 & 8) == 0)
                zmm1 = _mm_and_ps(zmm1, temp0_57)
                zmm0 = var_3e8_1
                
                if ((temp0_33 & 1) != 0)
                    goto label_1402fda1b
                
                goto label_1402fd73d
            
            var_508[3] = zmm8[0]
            zmm1 = _mm_and_ps(zmm1, temp0_57)
            zmm0 = var_3e8_1
            
            if ((temp0_33 & 1) != 0)
            label_1402fda1b:
                var_4f8[0] = zmm1[0]
                zmm8 = var_428_1
                
                if ((temp0_33 & 2) == 0)
                    goto label_1402fd74d
                
                goto label_1402fda39
            
        label_1402fd73d:
            zmm8 = var_428_1
            
            if ((temp0_33 & 2) == 0)
            label_1402fd74d:
                
                if ((temp0_33 & 4) != 0)
                    goto label_1402fda4d
                
                goto label_1402fd756
            
        label_1402fda39:
            var_4f8[1] = _mm_shuffle_epi32(zmm1, 0xe5)[0]
            
            if ((temp0_33 & 4) == 0)
            label_1402fd756:
                
                if ((temp0_33 & 8) != 0)
                    var_4f8[3] = _mm_shuffle_epi32(zmm1, 0xe7)[0]
            else
            label_1402fda4d:
                var_4f8[2] = _mm_shuffle_epi32(zmm1, 0x4e)[0]
                
                if ((temp0_33 & 8) != 0)
                    var_4f8[3] = _mm_shuffle_epi32(zmm1, 0xe7)[0]
        
        zmm6 = zmm0 ^ arg5
        uint32_t temp0_60 = _mm_movemask_ps(zmm6)
        
        if (temp0_60 != 0)
            zmm2 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm12, zmm8[0].q))
            zmm1 = _mm_cmpgt_epi32(zx.o(0), arg7)
            zmm12 = _mm_unpacklo_epi32(zmm12, zmm2[0].q)
            zmm8 = _mm_unpacklo_epi32(zmm8, zmm1[0].q)
            zmm3 = _mm_cmpgt_epi32(data_1434422d0, temp0_31) | var_2c8_1
            zmm1 = zmm3 & zmm6
            uint128_t var_438
            
            if (_mm_movemask_ps(zmm1) != 0)
                arg6 = zmm1 & not.o(arg6)
                var_438 = __andnps_xmmxud_memxud(zmm1, var_438)
            
            zmm4 = __pshufd_xmmdq_memdq_immb(var_338_1, 0xf5)
            zmm1 = var_2b8_1
            zmm8 = _mm_add_epi64(zmm8, zmm1)
            zmm12 = _mm_add_epi64(zmm12, zmm1)
            zmm10 = zmm3 & not.o(zmm6)
            uint32_t temp0_72 = _mm_movemask_ps(zmm10)
            
            if (temp0_72 == 0)
                goto label_1402fda94
            
            zmm13 = _mm_add_epi32(temp0_31, arg5)
            float var_3e8_2[0x4]
            uint64_t rdi_8
            
            if (zx.o(arg9)[0] f>= 1f)
                zmm3 |= var_3e8_1
                zmm10 &= zmm13
                arg6 = (arg6 & zmm3) | zmm10
                var_438 = (var_438 & zmm3) | zmm10
            label_1402fda94:
                rdi_8 = zx.q(r14.d)
                var_3e8_2 = zx.o(0)
                
                if (r14.d u<= 5)
                label_1402fdad0:
                    zmm7 = _mm_unpacklo_epi32(
                        _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(arg6, var_338_1), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg6, 0xf5), zmm4), 0xe8)
                            .q)
                    zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm7)
                    zmm0 = _mm_shuffle_epi32(zmm7, 0x4e)
                    _mm_unpacklo_epi32(zmm7, zmm1[0].q)
                    _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q)
                    jump(sx.q(jump_table_140305b10[rdi_8]) + &jump_table_140305b10)
            else
                int32_t var_398_1[0x4] = zmm3
                float var_468_2[0x4] = arg6
                uint32_t temp0_74[0x4] = _mm_shuffle_epi32(temp0_31, 0xf5)
                int32_t temp0_75[0x4] = __pmuludq_xmmdq_memdq(temp0_31, var_338_1)
                uint128_t var_358_1 = zmm4
                zmm1 = _mm_mul_epu32(temp0_74, zmm4)
                zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(temp0_75, 0xe8), 
                    _mm_shuffle_epi32(zmm1, 0xe8)[0].q)
                uint32_t temp0_80[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
                zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_80)
                int32_t temp0_82[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
                uint128_t var_3f8_1 = zmm12
                arg7 = _mm_add_epi64(zmm12, var_248_1)
                zmm12 = _mm_add_epi64(zmm8, var_248_1)
                zmm1 = _mm_unpacklo_epi32(temp0_80, zmm2[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, temp0_82[0].q)
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
                float var_428_2[0x4] = zmm8
                float var_3b8_1[0x4] = zmm6
                
                if (arg8 s< 0x100)
                    uint32_t temp0_119[0x4] = _mm_shuffle_epi32(arg6, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_119)
                    zmm0 = _mm_add_epi64(
                        _mm_unpacklo_epi32(arg6, _mm_cmpgt_epi32(zx.o(0), arg6)[0].q), zmm12)
                    char rdi_9 = temp0_72.b
                    int32_t var_298[0x4]
                    
                    if ((rdi_9 & 1) != 0)
                        zmm4.d = zx.o(*zmm0.q)[0]
                        zmm3 = zmm4
                        zmm1 = _mm_unpacklo_epi32(temp0_119, zmm2[0].q)
                        
                        if ((rdi_9 & 2) != 0)
                            zmm3 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                    else
                        zmm3 = var_298
                        zmm1 = _mm_unpacklo_epi32(temp0_119, zmm2[0].q)
                        
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
                    
                    zmm6 = __pcmpgtd_xmmdq_memdq(__andps_xmmxud_memxud(zmm3, data_142ed6810), 
                        var_458_1)
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
                                float temp0_183[0x4] = _mm_shuffle_epi32(zmm4, 0x4e)
                                int32_t temp0_184[0x4] = _mm_cmpgt_epi32(zx.o(0), temp0_183)
                                zmm4 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q), 
                                    zmm12)
                                char temp0_188 = _mm_movemask_ps(zmm1)
                                uint32_t var_418[0x4]
                                
                                if ((temp0_188 & 1) != 0)
                                    zmm1 = var_418
                                    zmm1[0] = zx.d(*zmm4.q)
                                    zmm7 = _mm_unpacklo_epi32(temp0_183, temp0_184[0].q)
                                    
                                    if ((temp0_188 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                else
                                    zmm1 = var_418
                                    zmm7 = _mm_unpacklo_epi32(temp0_183, temp0_184[0].q)
                                    
                                    if ((temp0_188 & 2) != 0)
                                        zmm1 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm1, 0), 
                                            zmm1, 0xe2)
                                
                                zmm7 = _mm_add_epi64(zmm7, arg7)
                                
                                if ((temp0_188 & 4) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*zmm7[0].q), zmm1, 0x30), 0x84)
                                    
                                    if ((temp0_188 & 8) != 0)
                                        zmm1 = _mm_shuffle_ps(zmm1, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                                zmm1, 0x20), 
                                            0x24)
                                else if ((temp0_188 & 8) != 0)
                                    zmm1 = _mm_shuffle_ps(zmm1, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e).q), 
                                            zmm1, 0x20), 
                                        0x24)
                                
                                var_418 = zmm1
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm1, data_142ed6810), var_458_1) & zmm6
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
                        zmm6 = var_3b8_1
                    else
                        zmm7 &= zmm9
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        arg6 = _mm_add_epi32(arg6, arg5)
                        zmm1 = __pcmpgtd_xmmdq_memdq(arg6, data_142d8f750) & (zmm9 ^ arg5)
                        zmm0 = zmm1 & zmm10
                        uint32_t j_1 = _mm_movemask_ps(zmm0)
                        
                        if (j_1 == 0)
                            zmm2 = zmm7
                            zmm6 = var_3b8_1
                        else
                            zmm6 = var_3b8_1
                            
                            do
                                zmm2 = _mm_shuffle_epi32(arg6, 0x4e)
                                int32_t temp0_284[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm4 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(arg6, _mm_cmpgt_epi32(zx.o(0), arg6)[0].q), 
                                    zmm12)
                                char temp0_288 = _mm_movemask_ps(zmm0)
                                float var_3c8[0x4]
                                
                                if ((temp0_288 & 1) != 0)
                                    zmm5 = var_3c8
                                    zmm5[0] = zx.d(*zmm4.q)
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_284[0].q)
                                    
                                    if ((temp0_288 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm5, 0), 
                                            zmm5, 0xe2)
                                else
                                    zmm5 = var_3c8
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_284[0].q)
                                    
                                    if ((temp0_288 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm5, 0), 
                                            zmm5, 0xe2)
                                
                                zmm2 = _mm_add_epi64(zmm2, arg7)
                                
                                if ((temp0_288 & 4) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*zmm2[0].q), zmm5, 0x30), 0x84)
                                    
                                    if ((temp0_288 & 8) != 0)
                                        zmm5 = _mm_shuffle_ps(zmm5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm5, 0x20), 
                                            0x24)
                                else if ((temp0_288 & 8) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                            zmm5, 0x20), 
                                        0x24)
                                
                                var_3c8 = zmm5
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm5, data_142ed6810), var_458_1)
                                    & not.o(zmm1)
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
                    
                    zmm1 = var_3e8_1 | var_398_1
                    zmm5 = zmm1
                    arg6 = (zmm2 & zmm10) | (var_468_2 & zmm1)
                    uint32_t temp0_305[0x4] = _mm_shuffle_epi32(arg6, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_305)
                    zmm0 = _mm_add_epi64(
                        _mm_unpacklo_epi32(arg6, _mm_cmpgt_epi32(zx.o(0), arg6)[0].q), zmm12)
                    int32_t var_2d8[0x4]
                    
                    if ((rdi_9 & 1) != 0)
                        zmm4.d = zx.o(*zmm0.q)[0]
                        zmm3 = zmm4
                    else
                        zmm3 = var_2d8
                    
                    zmm4 = var_358_1
                    zmm1 = _mm_unpacklo_epi32(temp0_305, zmm2[0].q)
                    
                    if ((rdi_9 & 2) == 0)
                        zmm1 = _mm_add_epi64(zmm1, arg7)
                        
                        if ((rdi_9 & 4) != 0)
                            goto label_1402ffc43
                        
                        goto label_1402ffb3e
                    
                    zmm3 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), zmm3, 0xe2)
                    zmm1 = _mm_add_epi64(zmm1, arg7)
                    
                    if ((rdi_9 & 4) == 0)
                    label_1402ffb3e:
                        
                        if ((rdi_9 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else
                    label_1402ffc43:
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
                    int32_t var_278[0x4]
                    
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
                    arg7 = var_448_1
                    zmm1 = data_142ed6810
                    zmm2 = zmm1
                    zmm0 = _mm_and_ps(var_2d8, zmm1)
                    var_278 = zmm3
                else
                    zmm0 = _mm_add_epi32(arg6, arg6)
                    uint32_t temp0_97[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_97)
                    zmm0 = _mm_add_epi64(
                        _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), zmm12)
                    char rdi_7 = temp0_72.b
                    int32_t var_2a8[0x4]
                    
                    if ((rdi_7 & 1) != 0)
                        zmm4.d = zx.o(*zmm0.q)[0]
                        zmm3 = zmm4
                        zmm1 = _mm_unpacklo_epi32(temp0_97, zmm2[0].q)
                        
                        if ((rdi_7 & 2) != 0)
                            zmm0 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), 
                                zmm3, 0xe2)
                            zmm3 = zmm0
                    else
                        zmm3 = var_2a8
                        zmm1 = _mm_unpacklo_epi32(temp0_97, zmm2[0].q)
                        
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
                    
                    arg5 = __pcmpgtd_xmmdq_memdq(__andps_xmmxud_memxud(zmm3, data_143442cd0), 
                        var_458_1)
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
                                int32_t temp0_145[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm6)
                                zmm5 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm5, _mm_cmpgt_epi32(zx.o(0), zmm5)[0].q), 
                                    zmm12)
                                char temp0_149 = _mm_movemask_ps(zmm1)
                                float var_388[0x4]
                                
                                if ((temp0_149 & 1) != 0)
                                    zmm7 = var_388
                                    zmm7[0] = zx.o(*zmm5[0].q)[0]
                                    zmm6 = _mm_unpacklo_epi32(zmm6, temp0_145[0].q)
                                    
                                    if ((temp0_149 & 2) != 0)
                                        zmm7 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm5, 0x4e)[0].q), zmm7, 
                                                0), 
                                            zmm7, 0xe2)
                                else
                                    zmm7 = var_388
                                    zmm6 = _mm_unpacklo_epi32(zmm6, temp0_145[0].q)
                                    
                                    if ((temp0_149 & 2) != 0)
                                        zmm7 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm5, 0x4e)[0].q), zmm7, 
                                                0), 
                                            zmm7, 0xe2)
                                
                                zmm6 = _mm_add_epi64(zmm6, arg7)
                                
                                if ((temp0_149 & 4) != 0)
                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                        _mm_shuffle_ps(zx.o(*zmm6[0].q), zmm7, 0x30), 0x84)
                                    
                                    if ((temp0_149 & 8) != 0)
                                        zmm7 = _mm_shuffle_ps(zmm7, 
                                            _mm_shuffle_ps(
                                                zx.o(*_mm_shuffle_epi32(zmm6, 0x4e)[0].q), zmm7, 
                                                0x20), 
                                            0x24)
                                else if ((temp0_149 & 8) != 0)
                                    zmm7 = _mm_shuffle_ps(zmm7, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm6, 0x4e)[0].q), 
                                            zmm7, 0x20), 
                                        0x24)
                                
                                var_388 = zmm7
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm7, data_143442cd0), var_458_1) & arg5
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
                                int32_t temp0_217[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm2)
                                zmm4 = _mm_add_epi64(
                                    _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4)[0].q), 
                                    zmm12)
                                char temp0_221 = _mm_movemask_ps(zmm0)
                                float var_3d8[0x4]
                                
                                if ((temp0_221 & 1) != 0)
                                    zmm5 = var_3d8
                                    zmm5[0] = zx.d(*zmm4.q)
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_217[0].q)
                                    
                                    if ((temp0_221 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm5, 0), 
                                            zmm5, 0xe2)
                                else
                                    zmm5 = var_3d8
                                    zmm2 = _mm_unpacklo_epi32(zmm2, temp0_217[0].q)
                                    
                                    if ((temp0_221 & 2) != 0)
                                        zmm5 = _mm_shuffle_ps(
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm4, 0x4e).q), 
                                                zmm5, 0), 
                                            zmm5, 0xe2)
                                
                                zmm2 = _mm_add_epi64(zmm2, arg7)
                                
                                if ((temp0_221 & 4) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*zmm2[0].q), zmm5, 0x30), 0x84)
                                    
                                    if ((temp0_221 & 8) != 0)
                                        zmm5 = _mm_shuffle_ps(zmm5, 
                                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                                zmm5, 0x20), 
                                            0x24)
                                else if ((temp0_221 & 8) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e).q), 
                                            zmm5, 0x20), 
                                        0x24)
                                
                                var_3d8 = zmm5
                                zmm3 = __pcmpgtd_xmmdq_memdq(
                                    __andps_xmmxud_memxud(zmm5, data_143442cd0), var_458_1)
                                    & not.o(zmm1)
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
                    
                    zmm1 = var_3e8_1 | var_398_1
                    zmm5 = zmm1
                    arg6 = (zmm2 & zmm10) | (var_468_2 & zmm1)
                    zmm0 = _mm_add_epi32(arg6, arg6)
                    uint32_t temp0_239[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
                    zmm2 = _mm_cmpgt_epi32(zx.o(0), temp0_239)
                    zmm0 = _mm_add_epi64(
                        _mm_unpacklo_epi32(zmm0, _mm_cmpgt_epi32(zx.o(0), zmm0)[0].q), zmm12)
                    int32_t var_2e8[0x4]
                    
                    if ((rdi_7 & 1) != 0)
                        zmm4.d = zx.o(*zmm0.q)[0]
                        zmm3 = zmm4
                    else
                        zmm3 = var_2e8
                    
                    zmm6 = var_3b8_1
                    zmm4 = var_358_1
                    zmm1 = _mm_unpacklo_epi32(temp0_239, zmm2[0].q)
                    
                    if ((rdi_7 & 2) == 0)
                        zmm1 = _mm_add_epi64(zmm1, arg7)
                        
                        if ((rdi_7 & 4) != 0)
                            goto label_1402ff7e3
                        
                        goto label_1402ff6db
                    
                    zmm3 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm3, 0), zmm3, 0xe2)
                    zmm1 = _mm_add_epi64(zmm1, arg7)
                    
                    if ((rdi_7 & 4) == 0)
                    label_1402ff6db:
                        
                        if ((rdi_7 & 8) != 0)
                            zmm3 = _mm_shuffle_ps(zmm3, 
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e).q), zmm3, 0x20), 
                                0x24)
                    else
                    label_1402ff7e3:
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
                    int32_t var_288[0x4]
                    
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
                    arg7 = var_448_1
                    zmm1 = data_143442cd0
                    zmm2 = zmm1
                    zmm0 = _mm_and_ps(var_2e8, zmm1)
                    var_288 = zmm3
                
                uint32_t temp0_339[0x4] = _mm_and_ps(zmm3, zmm2)
                zmm3 = var_398_1 ^ arg5
                zmm5 = zx.o(0)
                
                if (arg10 != 1)
                    zmm1 = _mm_sub_epi32(temp0_339, zmm0)
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
                    goto label_1402fdad0
            
            char rcx_14 = temp0_60.b
            
            if ((rcx_14 & 1) == 0)
                if ((rcx_14 & 2) != 0)
                    goto label_140300e81
                
                goto label_1402ffd8c
            
            var_528.d = 0
            
            if ((rcx_14 & 2) != 0)
            label_140300e81:
                var_528:4.d = 0
                
                if ((rcx_14 & 4) == 0)
                    goto label_1402ffd95
                
                goto label_140300e92
            
        label_1402ffd8c:
            
            if ((rcx_14 & 4) == 0)
            label_1402ffd95:
                
                if ((rcx_14 & 8) != 0)
                    goto label_140300ea3
                
                goto label_1402ffd9e
            
        label_140300e92:
            var_528:8.d = 0
            
            if ((rcx_14 & 8) != 0)
            label_140300ea3:
                var_528:0xc.d = 0
                
                if ((rcx_14 & 1) == 0)
                    goto label_1402ffda7
                
                goto label_140300eb4
            
        label_1402ffd9e:
            
            if ((rcx_14 & 1) == 0)
            label_1402ffda7:
                
                if ((rcx_14 & 2) != 0)
                    goto label_140300ec5
                
                goto label_1402ffdb0
            
        label_140300eb4:
            var_518.d = 0
            
            if ((rcx_14 & 2) != 0)
            label_140300ec5:
                var_518:4.d = 0
                
                if ((rcx_14 & 4) == 0)
                    goto label_1402ffdb9
                
                goto label_140300ed6
            
        label_1402ffdb0:
            
            if ((rcx_14 & 4) == 0)
            label_1402ffdb9:
                
                if ((rcx_14 & 8) != 0)
                    goto label_140300ee7
                
                goto label_1402ffdc2
            
        label_140300ed6:
            var_518:8.d = 0
            
            if ((rcx_14 & 8) != 0)
            label_140300ee7:
                var_518:0xc.d = 0
                
                if ((rcx_14 & 1) == 0)
                    goto label_1402ffdcb
                
                goto label_140300ef8
            
        label_1402ffdc2:
            
            if ((rcx_14 & 1) == 0)
            label_1402ffdcb:
                
                if ((rcx_14 & 2) != 0)
                    goto label_140300f09
                
                goto label_1402ffdd4
            
        label_140300ef8:
            var_508[0] = 0
            
            if ((rcx_14 & 2) != 0)
            label_140300f09:
                var_508[1] = 0
                
                if ((rcx_14 & 4) == 0)
                    goto label_1402ffddd
                
                goto label_140300f1a
            
        label_1402ffdd4:
            
            if ((rcx_14 & 4) == 0)
            label_1402ffddd:
                
                if ((rcx_14 & 8) != 0)
                    goto label_140300f2b
                
                goto label_1402ffde6
            
        label_140300f1a:
            var_508[2] = 0
            
            if ((rcx_14 & 8) != 0)
            label_140300f2b:
                var_508[3] = 0
                
                if ((rcx_14 & 1) == 0)
                    goto label_1402ffdef
                
                goto label_140300f3c
            
        label_1402ffde6:
            
            if ((rcx_14 & 1) == 0)
            label_1402ffdef:
                
                if ((rcx_14 & 2) != 0)
                    goto label_140300f4d
                
                goto label_1402ffdf8
            
        label_140300f3c:
            var_4f8[0] = 0x3f800000
            
            if ((rcx_14 & 2) != 0)
            label_140300f4d:
                var_4f8[1] = 0x3f800000
                
                if ((rcx_14 & 4) == 0)
                    goto label_1402ffe01
                
                goto label_140300f5e
            
        label_1402ffdf8:
            
            if ((rcx_14 & 4) != 0)
            label_140300f5e:
                var_4f8[2] = 0x3f800000
                
                if ((rcx_14 & 8) != 0)
                    var_4f8[3] = 0x3f800000
            else
            label_1402ffe01:
                
                if ((rcx_14 & 8) != 0)
                    var_4f8[3] = 0x3f800000
            
            uint32_t temp0_348 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(arg6, var_438) & not.o(zmm6))
            
            if (temp0_348 != 0)
                if (r14.d u<= 5)
                    zmm2 = var_438
                    zmm1 = _mm_unpacklo_epi32(
                        _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(zmm2, var_338_1), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm2, 0xf5), zmm4), 0xe8)
                            .q)
                    zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                    zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
                    _mm_unpacklo_epi32(zmm1, zmm0.q)
                    _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q)
                    jump(sx.q(jump_table_140305b28[rdi_8]) + &jump_table_140305b28)
                
                uint64_t rsi_2 = zx.q(temp0_348)
                int64_t rdi_11 = rsi_2 & 1
                
                if (rdi_11 == 0)
                    if ((rsi_2.b & 2) != 0)
                        goto label_1403010ca
                    
                    goto label_1403000d9
                
                int32_t var_4a8 = 0
                
                if ((rsi_2.b & 2) != 0)
                label_1403010ca:
                    int32_t var_4a4_1 = 0
                    
                    if ((rsi_2.b & 4) == 0)
                        goto label_1403000e3
                    
                    goto label_1403010df
                
            label_1403000d9:
                
                if ((rsi_2.b & 4) == 0)
                label_1403000e3:
                    
                    if ((rsi_2.b & 8) != 0)
                        goto label_1403010f4
                    
                    goto label_1403000ed
                
            label_1403010df:
                int32_t var_4a0_1 = 0
                
                if ((rsi_2.b & 8) != 0)
                label_1403010f4:
                    int32_t var_49c_1 = 0
                    
                    if (rdi_11 == 0)
                        goto label_1403000f6
                    
                    goto label_140301108
                
            label_1403000ed:
                
                if (rdi_11 == 0)
                label_1403000f6:
                    
                    if ((rsi_2.b & 2) != 0)
                        goto label_14030111d
                    
                    goto label_140300100
                
            label_140301108:
                int32_t var_498 = 0
                
                if ((rsi_2.b & 2) != 0)
                label_14030111d:
                    int32_t var_494_1 = 0
                    
                    if ((rsi_2.b & 4) == 0)
                        goto label_14030010a
                    
                    goto label_140301132
                
            label_140300100:
                
                if ((rsi_2.b & 4) == 0)
                label_14030010a:
                    
                    if ((rsi_2.b & 8) != 0)
                        goto label_140301147
                    
                    goto label_140300114
                
            label_140301132:
                int32_t var_490_1 = 0
                
                if ((rsi_2.b & 8) != 0)
                label_140301147:
                    int32_t var_48c_1 = 0
                    
                    if (rdi_11 == 0)
                        goto label_14030011d
                    
                    goto label_14030115b
                
            label_140300114:
                
                if (rdi_11 == 0)
                label_14030011d:
                    
                    if ((rsi_2.b & 2) != 0)
                        goto label_140301170
                    
                    goto label_140300127
                
            label_14030115b:
                int32_t var_488 = 0
                
                if ((rsi_2.b & 2) != 0)
                label_140301170:
                    int32_t var_484_1 = 0
                    
                    if ((rsi_2.b & 4) == 0)
                        goto label_140300131
                    
                    goto label_140301185
                
            label_140300127:
                
                if ((rsi_2.b & 4) == 0)
                label_140300131:
                    
                    if ((rsi_2.b & 8) != 0)
                        goto label_14030119a
                    
                    goto label_14030013b
                
            label_140301185:
                int32_t var_480_1 = 0
                
                if ((rsi_2.b & 8) != 0)
                label_14030119a:
                    int32_t var_47c_1 = 0
                    
                    if (rdi_11 == 0)
                        goto label_140300144
                    
                    goto label_1403011ae
                
            label_14030013b:
                int32_t var_478
                
                if (rdi_11 != 0)
                label_1403011ae:
                    var_478 = 0x3f800000
                    
                    if ((rsi_2.b & 2) != 0)
                    label_1403011c3:
                        int32_t var_474_1 = 0x3f800000
                        
                        if ((rsi_2.b & 4) == 0)
                            goto label_140300158
                        
                        goto label_1403011d8
                else
                label_140300144:
                    
                    if ((rsi_2.b & 2) != 0)
                        goto label_1403011c3
                
                int32_t var_46c_1
                
                if ((rsi_2.b & 4) != 0)
                label_1403011d8:
                    int32_t var_470_1 = 0x3f800000
                    arg7 = zmm7
                    
                    if ((rsi_2.b & 8) != 0)
                        var_46c_1 = 0x3f800000
                else
                label_140300158:
                    arg7 = zmm7
                    
                    if ((rsi_2.b & 8) != 0)
                        var_46c_1 = 0x3f800000
                zmm3 = var_4a8.o
                zmm7 = var_498.o
                zmm12 = var_488.o
                zmm10 = var_478.o
                float temp0_362[0x4] = _mm_mul_ps(var_528, zmm3)
                zmm1 = _mm_add_ps(_mm_mul_ps(var_518, zmm7), temp0_362)
                float temp0_366[0x4] = _mm_add_ps(_mm_mul_ps(var_508, zmm12), zmm1)
                zmm1 = _mm_add_ps(_mm_mul_ps(var_4f8, zmm10), temp0_366)
                float temp0_369[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 2)
                zmm2 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm1, 6), data_142d3f7e0)
                zmm5 = _mm_or_ps(_mm_and_ps(temp0_369, arg7), zmm2)
                zmm3 = _mm_mul_ps(zmm3, var_3e8_2)
                float temp0_375[0x4] = _mm_mul_ps(zmm7, var_3e8_2)
                zmm12 = _mm_mul_ps(zmm12, var_3e8_2)
                zmm10 = _mm_mul_ps(zmm10, var_3e8_2)
                float temp0_379[0x4] = _mm_mul_ps(_mm_sub_ps(arg7, var_3e8_2), zmm5)
                zmm4 = _mm_add_ps(_mm_mul_ps(var_528, temp0_379), zmm3)
                zmm0 = _mm_add_ps(_mm_mul_ps(var_518, temp0_379), temp0_375)
                zmm9 = _mm_add_ps(_mm_mul_ps(var_508, temp0_379), zmm12)
                float temp0_387[0x4] = _mm_add_ps(_mm_mul_ps(temp0_379, var_4f8), zmm10)
                uint128_t var_168_1 = zmm4
                uint128_t var_158_1 = zmm0
                int32_t var_148_1[0x4] = zmm9
                float var_138_1[0x4] = temp0_387
                zmm1 = _mm_mul_ps(zmm4, zmm4)
                zmm3 = _mm_mul_ps(zmm0, zmm0)
                float temp0_391[0x4] = _mm_add_ps(_mm_mul_ps(zmm9, zmm9), zmm1)
                float temp0_394[0x4] =
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_387, temp0_387), zmm3), temp0_391)
                zmm10 = data_142d3f640
                zmm1 = _mm_mul_ps(temp0_394, zmm10)
                float temp0_396[0x4] = _mm_cmpeq_ps(data_142d3f5c0, temp0_394, 2)
                zmm3 = _mm_rsqrt_ps(temp0_394)
                float temp0_402[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm10, _mm_mul_ps(_mm_mul_ps(zmm3, zmm3), zmm1)), zmm3), 
                    zmm3)
                zmm3 = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm10, _mm_mul_ps(_mm_mul_ps(temp0_402, temp0_402), zmm1)), 
                        temp0_402), 
                    temp0_402)
                zmm4 = _mm_and_ps(_mm_mul_ps(zmm4, zmm3), temp0_396)
                
                if (rdi_11 != 0)
                    var_528.d = zmm4.d
                
                if ((rsi_2.b & 2) == 0)
                    if ((rsi_2.b & 4) != 0)
                        goto label_1402fd0ac
                    
                    goto label_14030147d
                
                var_528:4.d = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                
                if ((rsi_2.b & 4) != 0)
                label_1402fd0ac:
                    var_528:8.d = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                    zmm0 = _mm_mul_ps(zmm0, zmm3)
                    
                    if ((rsi_2.b & 8) == 0)
                        goto label_14030148a
                    
                    goto label_1402fd0c4
                
            label_14030147d:
                zmm0 = _mm_mul_ps(zmm0, zmm3)
                
                if ((rsi_2.b & 8) != 0)
                label_1402fd0c4:
                    var_528:0xc.d = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                    zmm0 = _mm_and_ps(zmm0, temp0_396)
                    
                    if (rdi_11 != 0)
                        var_518.d = zmm0.d
                else
                label_14030148a:
                    zmm0 = _mm_and_ps(zmm0, temp0_396)
                    
                    if (rdi_11 != 0)
                        var_518.d = zmm0.d
                
                if ((rsi_2.b & 2) == 0)
                    if ((rsi_2.b & 4) != 0)
                        goto label_1402fd0f6
                    
                    goto label_1403014ad
                
                var_518:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                
                if ((rsi_2.b & 4) != 0)
                label_1402fd0f6:
                    var_518:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                    zmm9 = _mm_mul_ps(zmm9, zmm3)
                    
                    if ((rsi_2.b & 8) == 0)
                        goto label_1403014bb
                    
                    goto label_1402fd10f
                
            label_1403014ad:
                zmm9 = _mm_mul_ps(zmm9, zmm3)
                
                if ((rsi_2.b & 8) != 0)
                label_1402fd10f:
                    var_518:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                    zmm9 = _mm_and_ps(zmm9, temp0_396)
                    
                    if (rdi_11 != 0)
                        var_508[0] = zmm9[0]
                else
                label_1403014bb:
                    zmm9 = _mm_and_ps(zmm9, temp0_396)
                    
                    if (rdi_11 != 0)
                        var_508[0] = zmm9[0]
                
                if ((rsi_2.b & 2) != 0)
                    var_508[1] = _mm_shuffle_epi32(zmm9, 0xe5).d
                
                zmm1 = _mm_cmpeq_ps(data_142d3f5c0, temp0_394, 6)
                zmm3 = _mm_mul_ps(zmm3, temp0_387)
                
                if ((rsi_2.b & 4) != 0)
                    var_508[2] = _mm_shuffle_epi32(zmm9, 0x4e).d
                
                zmm3 = _mm_and_ps(zmm3, temp0_396)
                zmm7 = arg7
                uint32_t temp0_419[0x4] = _mm_and_ps(zmm1, arg7)
                
                if ((rsi_2.b & 8) != 0)
                    var_508[3] = _mm_shuffle_epi32(zmm9, 0xe7).d
                
                zmm3 = _mm_or_ps(zmm3, temp0_419)
                
                if (rdi_11 != 0)
                    var_4f8[0] = zmm3[0]
                
                if ((rsi_2.b & 2) == 0)
                    if ((rsi_2.b & 4) != 0)
                        goto label_1402fd141
                    
                    goto label_14030153d
                
                var_4f8[1] = _mm_shuffle_epi32(zmm3, 0xe5).d
                
                if ((rsi_2.b & 4) == 0)
                label_14030153d:
                    
                    if ((rsi_2.b & 8) != 0)
                        var_4f8[3] = _mm_shuffle_epi32(zmm3, 0xe7).d
                else
                label_1402fd141:
                    var_4f8[2] = _mm_shuffle_epi32(zmm3, 0x4e).d
                    
                    if ((rsi_2.b & 8) != 0)
                        var_4f8[3] = _mm_shuffle_epi32(zmm3, 0xe7).d
        
        zmm1 = var_518
        zmm2 = var_508
        zmm3 = var_4f8
        zmm4 = _mm_unpacklo_ps(zmm2, zmm3[0].q)
        float temp0_424[0x4] = _mm_unpackhi_ps(zmm2, zmm3)
        zmm3 = _mm_unpacklo_ps(var_528, zmm1[0].q)
        zmm0 = _mm_unpackhi_ps(var_528, zmm1)
        zmm1 = zmm3[0].q | zmm4.q << 0x40
        uint32_t var_1a8_1[0x4] = zmm1
        zmm3 = _mm_unpackhi_pd(zmm3, zmm4.q)
        int32_t var_198_1[0x4] = zmm3
        zmm4 = zmm0.q | temp0_424[0].q << 0x40
        uint128_t var_188_1 = zmm4
        uint128_t var_178_1 = _mm_unpackhi_pd(zmm0, temp0_424[0].q)
        arg1[sx.q(var_328_1.d) * 3] = zmm1
        arg1[sx.q(_mm_shuffle_epi32(var_328_1, 0x4e).d) * 3] = zmm3
        zmm0 = var_3a8_1
        arg1[sx.q(zmm0.d) * 3] = zmm4
        arg1[sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) * 3] = var_178_1
        r13 = zx.q(r13.d + 4)
    while (r13.d s< i)

uint64_t i_5 = zx.q(arg12)

if (r13.d s< i_5.d)
    zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r13.d), 0), data_142e11d00)
    arg6 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i_5.d), 0), zmm0)
    zmm0 = _mm_slli_epi32(zmm0, 3) & arg6
    int64_t rdx_31 = sx.q(zmm0.d)
    int64_t rbp_6 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
    int64_t rbx_5 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
    int64_t rsi_4 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
    zmm6 = zx.o(*(arg2 + rsi_4))
    arg5 = zx.o(*(arg2 + rbx_5))
    zmm12 = *(arg2 + rdx_31)
    zmm7 = *(arg2 + rbp_6)
    zmm0 = data_142fc95e0 & arg6
    uint64_t rdx_32 = zx.q(zmm0.d)
    uint64_t rbp_7 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
    uint64_t rbx_6 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
    zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + arg2 + rsi_4))
    zmm1 = _mm_unpacklo_epi32(zx.o(*(rbx_6 + arg2 + rbx_5)), zmm0.q)
    zmm0 = _mm_slli_epi32(
        _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(rdx_32 + arg2 + rdx_31)), 
                zx.o(*(rbp_7 + arg2 + rbp_6))[0].q), 
            zmm1[0].q), 
        4) & arg6
    zmm1 = data_142fc95f0 & arg6
    int64_t rax_105 = sx.q(zmm0.d) + arg3
    uint64_t r10_5 = zx.q(zmm1[0])
    int64_t rcx_19 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + arg3
    uint64_t rbx_7 = zx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
    int64_t rdx_35 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + arg3
    uint64_t rdi_13 = zx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
    int64_t rsi_8 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + arg3
    zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + rsi_8))
    int32_t temp0_452[0x4] = _mm_unpacklo_epi32(zx.o(*(rdi_13 + rdx_35)), zmm0.q)
    zmm10 = _mm_unpacklo_epi32(zx.o(*(r10_5 + rax_105)), zx.q(*(rbx_7 + rcx_19)))
    zmm4 = _mm_unpacklo_epi64(zmm10, temp0_452[0].q)
    zmm0 = data_143442650 & arg6
    uint64_t r8 = zx.q(zmm0.d)
    uint64_t rbx_8 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
    uint64_t rdi_14 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
    zmm0 = zx.o(*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8))
    zmm1 = _mm_unpacklo_epi32(zx.o(*(rdi_14 + rdx_35)), zmm0.q)
    zmm5 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(r8 + rax_105)), zx.q(*(rbx_8 + rcx_19))), 
        zmm1[0].q)
    zmm2 = zx.o(0)
    zmm8 = _mm_cmpeq_epi32(data_142d3f5b0, zmm5)
    zmm1 = zmm8 & arg6
    char temp0_462 = _mm_movemask_ps(zmm1)
    float var_388_1[0x4] = arg6
    uint128_t var_3c8_1 = zmm4
    int32_t var_568[0x4]
    float var_558[0x4]
    uint128_t var_548
    int32_t var_538[0x4]
    
    if (temp0_462 != 0)
        float var_3e8_3[0x4] = zmm7
        float var_458_2[0x4] = zmm6
        float var_468_3[0x4] = zmm8
        int32_t var_3d8_1[0x4] = zmm10
        int32_t var_438_1[0x4] = arg5
        uint128_t var_418_1 = zmm12
        zmm4 &= zmm1
        int64_t rdx_36 = sx.q(zmm4.d)
        void* rcx_21 = arg4 + rdx_36
        zmm6 = *(arg4 + rdx_36)
        int64_t rbp_10 = sx.q(_mm_shuffle_epi32(zmm4, 0xe5).d)
        void* rdx_38 = arg4 + rbp_10
        zmm10 = *(arg4 + rbp_10)
        int64_t rbx_9 = sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])
        void* rbp_12 = arg4 + rbx_9
        zmm2 = *(arg4 + rbx_9)
        int64_t rdi_15 = sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d)
        void* rbx_11 = arg4 + rdi_15
        zmm9 = *(arg4 + rdi_15)
        zmm0 = data_142fc95e0 & zmm1
        zmm7 = *(zx.q(zmm0.d) + rcx_21)
        zmm8 = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rdx_38)
        arg5 = *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_12)
        arg6 = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rbx_11)
        zmm1 &= data_142fc95f0
        arg7 = *(zx.q(zmm1[0]) + rcx_21)
        zmm13 = *(zx.q(_mm_shuffle_epi32(zmm1, 0xe5).d) + rdx_38)
        zmm12 = *(zx.q(_mm_shuffle_epi32(zmm1, 0x4e).d) + rbp_12)
        zmm1 = *(zx.q(_mm_shuffle_epi32(zmm1, 0xe7).d) + rbx_11)
        
        if ((temp0_462 & 1) == 0)
            if ((temp0_462 & 2) != 0)
                goto label_140301f1a
            
            goto label_140301945
        
        var_568[0] = zmm6[0]
        
        if ((temp0_462 & 2) != 0)
        label_140301f1a:
            var_568[1] = zmm10[0]
            
            if ((temp0_462 & 4) == 0)
                goto label_14030194e
            
            goto label_140301f2a
        
    label_140301945:
        
        if ((temp0_462 & 4) != 0)
        label_140301f2a:
            var_568[2] = zmm2[0]
            
            if ((temp0_462 & 8) != 0)
            label_140301f39:
                var_568[3] = zmm9[0]
                
                if ((temp0_462 & 1) == 0)
                    goto label_140301960
                
                goto label_140301f49
        else
        label_14030194e:
            
            if ((temp0_462 & 8) != 0)
                goto label_140301f39
        
        if ((temp0_462 & 1) != 0)
        label_140301f49:
            var_558[0] = zmm7[0]
            zmm2 = _mm_unpacklo_ps(zmm2, zmm9[0].q)
            zmm6 = _mm_unpacklo_ps(zmm6, zmm10[0].q)
            
            if ((temp0_462 & 2) != 0)
                var_558[1] = zmm8[0]
        else
        label_140301960:
            zmm2 = _mm_unpacklo_ps(zmm2, zmm9[0].q)
            zmm6 = _mm_unpacklo_ps(zmm6, zmm10[0].q)
            
            if ((temp0_462 & 2) != 0)
                var_558[1] = zmm8[0]
        
        zmm6 = zmm6[0].q | zmm2[0].q << 0x40
        zmm0 = _mm_unpacklo_ps(arg5, arg6[0].q)
        float temp0_475[0x4] = _mm_unpacklo_ps(zmm7, zmm8[0].q)
        zmm10 = var_3d8_1
        zmm4 = var_3c8_1
        
        if ((temp0_462 & 4) != 0)
            var_558[2] = arg5[0]
        
        zmm7 = temp0_475[0].q | zmm0.q << 0x40
        zmm9 = zmm1
        float temp0_476[0x4] = _mm_unpacklo_ps(zmm12, zmm1[0].q)
        zmm1 = _mm_unpacklo_ps(arg7, zmm13.q)
        float temp0_478[0x4] = _mm_mul_ps(zmm6, zmm6)
        zmm0 = data_142d3f670
        zmm8 = var_468_3
        
        if ((temp0_462 & 8) != 0)
            var_558[3] = arg6[0]
        
        zmm1 = zmm1[0].q | temp0_476[0].q << 0x40
        zmm0 = _mm_sub_ps(zmm0, temp0_478)
        float temp0_480[0x4] = _mm_mul_ps(zmm7, zmm7)
        
        if ((temp0_462 & 1) != 0)
            var_548.d = arg7[0]
        
        zmm0 = _mm_sub_ps(zmm0, temp0_480)
        zmm1 = _mm_mul_ps(zmm1, zmm1)
        arg6 = var_388_1
        zmm6 = var_458_2
        zmm2 = zx.o(0)
        
        if ((temp0_462 & 2) != 0)
            var_548:4.d = zmm13.d
        
        zmm0 = _mm_sub_ps(zmm0, zmm1)
        zmm7 = var_3e8_3
        
        if ((temp0_462 & 4) != 0)
            var_548:8.d = zmm12.d
        
        zmm1 = _mm_cmpeq_ps(zx.o(0), zmm0, 1)
        zmm0 = _mm_sqrt_ps(zmm0)
        
        if ((temp0_462 & 8) == 0)
            zmm1 = _mm_and_ps(zmm1, zmm0)
            zmm12 = var_418_1
            
            if ((temp0_462 & 1) != 0)
                goto label_140301f81
            
            goto label_140301a57
        
        var_548:0xc.d = zmm9[0]
        zmm1 = _mm_and_ps(zmm1, zmm0)
        zmm12 = var_418_1
        
        if ((temp0_462 & 1) != 0)
        label_140301f81:
            var_538[0] = zmm1[0]
            arg5 = var_438_1
            
            if ((temp0_462 & 2) == 0)
                goto label_140301a67
            
            goto label_140301f9f
        
    label_140301a57:
        arg5 = var_438_1
        
        if ((temp0_462 & 2) == 0)
        label_140301a67:
            
            if ((temp0_462 & 4) != 0)
                goto label_140301fb3
            
            goto label_140301a70
        
    label_140301f9f:
        var_538[1] = _mm_shuffle_epi32(zmm1, 0xe5).d
        
        if ((temp0_462 & 4) == 0)
        label_140301a70:
            
            if ((temp0_462 & 8) != 0)
                var_538[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
        else
        label_140301fb3:
            var_538[2] = _mm_shuffle_epi32(zmm1, 0x4e).d
            
            if ((temp0_462 & 8) != 0)
                var_538[3] = _mm_shuffle_epi32(zmm1, 0xe7).d
    
    arg5 = _mm_unpacklo_epi32(arg5, zmm6[0].q)
    zmm12 = _mm_unpacklo_ps(zmm12, zmm7[0].q)
    zmm8 &= not.o(arg6)
    char temp0_490 = _mm_movemask_ps(zmm8)
    
    if (temp0_490 != 0)
        zmm1 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(temp0_452, zmm10[0].q))
        zmm2 = _mm_cmpgt_epi32(zmm2, zmm4)
        int32_t temp0_494[0x4] = _mm_unpacklo_epi32(temp0_452, zmm1[0].q)
        int32_t temp0_495[0x4] = _mm_unpacklo_epi32(zmm10, zmm2[0].q)
        zmm9 = _mm_shuffle_epi32(zx.o(rax), 0) & data_1430219f0
        zmm2 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
        zmm10 = _mm_add_epi64(temp0_495, zmm9)
        zmm9 = _mm_add_epi64(zmm9, temp0_494)
        arg7 = _mm_cmpeq_epi32(arg7, arg7)
        zmm3 = data_1434422d0
        zmm1 = arg9
        int32_t rax_107
        rax_107.b = 0f f>= zmm1[0]
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_107)) ^ arg7, 0)
        zmm3 = _mm_cmpgt_epi32(zmm3, zmm5) & not.o(zmm0)
        zmm13 = zmm3 & zmm8
        uint32_t temp0_503 = _mm_movemask_ps(zmm13)
        zmm6 = zx.o(0)
        zmm7 = zx.o(0)
        zmm4 = zx.o(0)
        int32_t var_438_2[0x4] = arg5
        float var_3e8_4[0x4] = zmm2
        
        if (temp0_503 == 0)
            goto label_140301fda
        
        arg7 = _mm_add_epi32(arg7, zmm5)
        uint64_t r13_1
        
        if (zmm1[0] f>= 1f)
            zmm13 &= arg7
            zmm6 = zx.o(0)
            zmm7 = zmm13
            zmm4 = zmm13
        label_140301fda:
            zmm5 = _mm_shuffle_epi32(zmm2, 0xf5)
            r13_1 = zx.q(r14.d)
            
            if (r14.d u<= 5)
            label_140301fec:
                uint128_t var_458_4 = zmm4
                zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm2), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm5), 0xe8).q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm1)
                zmm4 = _mm_shuffle_epi32(zmm1, 0x4e)
                _mm_unpacklo_epi32(zmm1, zmm0.q)
                _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q)
                jump(sx.q(jump_table_140305b40[r13_1]) + &jump_table_140305b40)
        else
            int32_t var_3a8_2[0x4] = zmm3
            float var_468_4[0x4] = zmm8
            uint128_t var_418_2 = zmm12
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
            zmm2[0] = zmm2[0] f* zmm3[0]
            float var_448_2[0x4] = zmm2
            int32_t rax_110 = int.d(zmm2[0])
            int32_t rbx_12 = 0
            
            if (rax_110 s>= 0)
                rbx_12 = rax_110
            
            if (rbx_12 s> arg8 - 2)
                rbx_12 = arg8 - 2
            
            zmm0 = _mm_cvttps_epi32(zmm1)
            zmm2 = _mm_cmpgt_epi32(zmm0, zx.o(0)) & zmm0
            zmm8 = _mm_cmpgt_epi32(arg7, zmm2)
            zmm8 = (zmm8 & not.o(arg7)) | (zmm2 & zmm8)
            float var_458_3[0x4] = arg7
            int32_t var_3d8_2[0x4] = zmm10
            int32_t var_328_2[0x4] = zmm9
            
            if (arg8 s< 0x100)
                zmm0 = _mm_shuffle_epi32(zmm8, 0x4e)
                int32_t temp0_591[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm8)
                zmm2 = _mm_add_epi64(_mm_unpacklo_epi32(zmm8, zmm1[0].q), arg6)
                char rbp_15 = temp0_503.b
                
                if ((rbp_15 & 1) == 0)
                    zmm0 = _mm_unpacklo_epi32(zmm0, temp0_591[0].q)
                    
                    if ((rbp_15 & 2) != 0)
                        goto label_1403032e8
                    
                    goto label_1403022ab
                
                zmm1 = zx.o(*zmm2[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, temp0_591[0].q)
                
                if ((rbp_15 & 2) != 0)
                label_1403032e8:
                    zmm1 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), zmm1, 0), zmm1, 
                        0xe2)
                    zmm0 = _mm_add_epi64(zmm0, zmm12)
                    
                    if ((rbp_15 & 4) == 0)
                        goto label_1403022ba
                    
                    goto label_14030330a
                
            label_1403022ab:
                zmm0 = _mm_add_epi64(zmm0, zmm12)
                
                if ((rbp_15 & 4) != 0)
                label_14030330a:
                    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zx.o(*zmm0.q), zmm1, 0x30), 0x84)
                    
                    if ((rbp_15 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                else
                label_1403022ba:
                    
                    if ((rbp_15 & 8) != 0)
                        zmm1 = _mm_shuffle_ps(zmm1, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm1, 0x20), 
                            0x24)
                
                uint32_t temp0_600[0x4] = __andps_xmmxud_memxud(zmm1, data_142ed6810)
                zmm0 = zx.o(rbx_12)
                zmm9 = _mm_shuffle_epi32(zmm0, 0)
                zmm1 = _mm_cmpgt_epi32(temp0_600, zmm9)
                float var_428_4[0x4] = zmm1 ^ _mm_cmpeq_epi32(zmm0, zmm0)
                zmm2 = zmm8
                
                if (_mm_movemask_ps(zmm1 & not.o(zmm13)) != 0)
                    zmm10 = (zmm1 & not.o(arg7)) | (zmm1 & zmm8)
                    int32_t temp0_605[0x4] = _mm_cmpeq_epi32(temp0_591, temp0_591)
                    zmm0 = _mm_sub_epi32(zmm8, temp0_605)
                    zmm1 &= not.o(_mm_cmpgt_epi32(zmm0, arg7) ^ temp0_605)
                    zmm7 = zmm13 & zmm1
                    uint32_t i_1 = _mm_movemask_ps(zmm7)
                    
                    if (i_1 == 0)
                        zmm2 = zmm10
                    else
                        int32_t temp0_609[0x4] = _mm_cmpeq_epi32(temp0_605, temp0_605)
                        zmm6 = zmm8
                        
                        do
                            arg5 = zmm0
                            zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                            arg7 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                            zmm2 = _mm_add_epi64(
                                _mm_unpacklo_epi32(arg5, _mm_cmpgt_epi32(zx.o(0), arg5).q), arg6)
                            char temp0_622 = _mm_movemask_ps(zmm7)
                            
                            if ((temp0_622 & 1) == 0)
                                zmm0 = _mm_unpacklo_epi32(zmm0, arg7[0].q)
                                
                                if ((temp0_622 & 2) != 0)
                                    goto label_1403023b6
                                
                                goto label_140302433
                            
                            zmm5[0] = zx.d(*zmm2[0].q)
                            zmm0 = _mm_unpacklo_epi32(zmm0, arg7[0].q)
                            
                            if ((temp0_622 & 2) != 0)
                            label_1403023b6:
                                zmm5 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), zmm5, 
                                        0), 
                                    zmm5, 0xe2)
                                arg7 = var_458_3
                                zmm0 = _mm_add_epi64(zmm0, zmm12)
                                
                                if ((temp0_622 & 4) == 0)
                                    goto label_140302446
                                
                                goto label_1403023dc
                            
                        label_140302433:
                            arg7 = var_458_3
                            zmm0 = _mm_add_epi64(zmm0, zmm12)
                            
                            if ((temp0_622 & 4) != 0)
                            label_1403023dc:
                                zmm5 = _mm_shuffle_ps(zmm5, 
                                    _mm_shuffle_ps(zx.o(*zmm0.q), zmm5, 0x30), 0x84)
                                
                                if ((temp0_622 & 8) != 0)
                                    zmm5 = _mm_shuffle_ps(zmm5, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm5, 0x20), 
                                        0x24)
                            else
                            label_140302446:
                                
                                if ((temp0_622 & 8) != 0)
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
                            zmm0 = _mm_sub_epi32(arg5, temp0_609)
                            zmm1 = _mm_cmpgt_epi32(zmm0, arg7) & not.o(zmm7)
                            zmm7 = zmm1 & zmm13
                            i_1 = _mm_movemask_ps(zmm7)
                            zmm6 = arg5
                            zmm10 = zmm2
                        while (i_1 != 0)
                
                zmm3 = var_428_4
                uint32_t temp0_722 = _mm_movemask_ps(_mm_andnot_ps(zmm3, zmm13))
                uint32_t i_2
                int32_t temp0_724[0x4]
                
                if (temp0_722 != 0)
                    zmm1 = _mm_cmpeq_epi32(zmm1, zmm1) ^ zmm3
                    zmm2 &= zmm3
                    temp0_724 = _mm_cmpeq_epi32(arg5, arg5)
                    zmm8 = _mm_add_epi32(zmm8, temp0_724)
                    zmm6 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & zmm1
                    zmm1 = zmm6 & zmm13
                    i_2 = _mm_movemask_ps(zmm1)
                
                if (temp0_722 == 0 || i_2 == 0)
                    zmm7 = zmm2
                else
                    zmm10 = data_142ed6810
                    
                    do
                        zmm0 = _mm_shuffle_epi32(zmm8, 0x4e)
                        int32_t temp0_736[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
                        zmm7 = _mm_add_epi64(
                            _mm_unpacklo_epi32(zmm8, _mm_cmpgt_epi32(zx.o(0), zmm8).q), arg6)
                        char temp0_740 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_740 & 1) == 0)
                            zmm0 = _mm_unpacklo_epi32(zmm0, temp0_736[0].q)
                            
                            if ((temp0_740 & 2) != 0)
                                goto label_140303cb5
                            
                            goto label_140303d18
                        
                        zmm5[0] = zx.o(*zmm7[0].q)[0]
                        zmm0 = _mm_unpacklo_epi32(zmm0, temp0_736[0].q)
                        
                        if ((temp0_740 & 2) != 0)
                        label_140303cb5:
                            zmm5 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e)[0].q), zmm5, 0), 
                                zmm5, 0xe2)
                            zmm0 = _mm_add_epi64(zmm0, zmm12)
                            
                            if ((temp0_740 & 4) == 0)
                                goto label_140303d21
                            
                            goto label_140303cd1
                        
                    label_140303d18:
                        zmm0 = _mm_add_epi64(zmm0, zmm12)
                        
                        if ((temp0_740 & 4) != 0)
                        label_140303cd1:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zx.o(*zmm0.q), zmm5, 0x30), 
                                0x84)
                            
                            if ((temp0_740 & 8) != 0)
                                zmm5 = _mm_shuffle_ps(zmm5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 
                                        0x20), 
                                    0x24)
                        else
                        label_140303d21:
                            
                            if ((temp0_740 & 8) != 0)
                                zmm5 = _mm_shuffle_ps(zmm5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 
                                        0x20), 
                                    0x24)
                        
                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm5, zmm10), zmm9) & not.o(zmm6)
                        zmm3 = zx.o(0)
                        
                        if (_mm_movemask_ps(zmm1 & zmm13) != i_2)
                            zmm3 = zmm1 ^ zmm6
                        
                        zmm7 = (zmm1 & not.o(zmm2)) | (zmm1 & zmm8)
                        zmm8 = _mm_add_epi32(zmm8, temp0_724)
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
                
                if ((rbp_15 & 1) != 0)
                    zmm10 = zx.o(*zmm1[0].q)
                
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm2[0].q)
                arg5 = var_438_2
                zmm8 = var_468_4
                
                if ((rbp_15 & 2) == 0)
                    zmm0 = _mm_add_epi64(zmm0, zmm12)
                    
                    if ((rbp_15 & 4) != 0)
                        goto label_140304f9e
                    
                    goto label_140303e25
                
                zmm10 = _mm_shuffle_ps(
                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), zmm10, 0), zmm10, 
                    0xe2)
                zmm0 = _mm_add_epi64(zmm0, zmm12)
                
                if ((rbp_15 & 4) == 0)
                label_140303e25:
                    
                    if ((rbp_15 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm10, 0x20)
                        zmm10 = _mm_shuffle_ps(zmm10, zmm0, 0x24)
                else
                label_140304f9e:
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zx.o(*zmm0.q), zmm10, 0x30), 0x84)
                    
                    if ((rbp_15 & 8) != 0)
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
                
                if ((rbp_15 & 1) == 0)
                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                    arg7 = var_3a8_2
                    
                    if ((rbp_15 & 2) != 0)
                        goto label_140304fef
                    
                    goto label_140303ec6
                
                zmm2 = zx.o(*arg6[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                arg7 = var_3a8_2
                
                if ((rbp_15 & 2) != 0)
                label_140304fef:
                    zmm2 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg6, 0x4e)[0].q), zmm2, 0), zmm2, 
                        0xe2)
                    arg6 = var_388_1
                    zmm12 = _mm_add_epi64(zmm12, zmm0)
                    
                    if ((rbp_15 & 4) == 0)
                        goto label_140303edf
                    
                    goto label_14030501b
                
            label_140303ec6:
                arg6 = var_388_1
                zmm12 = _mm_add_epi64(zmm12, zmm0)
                
                if ((rbp_15 & 4) != 0)
                label_14030501b:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(*zmm12.q), zmm2, 0x30), 0x84)
                    
                    if ((rbp_15 & 8) != 0)
                        zmm2 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm2, 0x20), 
                            0x24)
                else
                label_140303edf:
                    
                    if ((rbp_15 & 8) != 0)
                        zmm2 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm2, 0x20), 
                            0x24)
                
                zmm12 = var_418_2
                zmm10 = __andps_xmmxud_memxud(zmm10, data_142ed6810)
                zmm2 = __andps_xmmxud_memxud(zmm2, data_142ed6810)
                zmm0 = zx.o(0)
                
                if (arg10 != 1)
                label_140303f24:
                    zmm2 = _mm_sub_epi32(zmm2, zmm10)
                    zmm0 = __pcmpgtd_xmmdq_memdq(zmm2, data_142d3f5b0)
                    zmm0 = _mm_div_ps(
                        _mm_sub_ps(_mm_shuffle_ps(var_448_2, var_448_2, 0), 
                            _mm_cvtepi32_ps(zmm10)), 
                        _mm_cvtepi32_ps((zmm0 & zmm2) | (zmm0 & not.o(data_142d3f5b0))))
            else
                zmm2 = _mm_add_epi32(zmm8, zmm8)
                zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                int32_t temp0_531[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm2 = _mm_add_epi64(_mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q), 
                    arg6)
                char rbp_14 = temp0_503.b
                
                if ((rbp_14 & 1) == 0)
                    zmm0 = _mm_unpacklo_epi32(zmm0, temp0_531[0].q)
                    
                    if ((rbp_14 & 2) != 0)
                        goto label_140303280
                    
                    goto label_140301cdf
                
                zmm5 = zx.o(*zmm2[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, temp0_531[0].q)
                
                if ((rbp_14 & 2) != 0)
                label_140303280:
                    zmm5 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), zmm5, 0), zmm5, 
                        0xe2)
                    zmm0 = _mm_add_epi64(zmm0, zmm12)
                    
                    if ((rbp_14 & 4) == 0)
                        goto label_140301cee
                    
                    goto label_1403032a2
                
            label_140301cdf:
                zmm0 = _mm_add_epi64(zmm0, zmm12)
                
                if ((rbp_14 & 4) != 0)
                label_1403032a2:
                    zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zx.o(*zmm0.q), zmm5, 0x30), 0x84)
                    
                    if ((rbp_14 & 8) != 0)
                        zmm5 = _mm_shuffle_ps(zmm5, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 0x20), 
                            0x24)
                else
                label_140301cee:
                    
                    if ((rbp_14 & 8) != 0)
                        zmm5 = _mm_shuffle_ps(zmm5, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 0x20), 
                            0x24)
                
                zmm5 = __andps_xmmxud_memxud(zmm5, data_143442cd0)
                arg7 = _mm_shuffle_epi32(zx.o(rbx_12), 0)
                zmm5 = _mm_cmpgt_epi32(zmm5, arg7)
                zmm4 = _mm_cmpeq_epi32(zmm4, zmm4)
                uint128_t var_428_3 = zmm5 ^ zmm4
                zmm2 = zmm8
                
                if (_mm_movemask_ps(zmm5 & not.o(zmm13)) != 0)
                    zmm6 = (zmm5 & not.o(var_458_3)) | (zmm5 & zmm8)
                    zmm0 = _mm_sub_epi32(zmm8, zmm4)
                    zmm5 &= not.o(_mm_cmpgt_epi32(zmm0, var_458_3) ^ zmm4)
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
                            char temp0_561 = _mm_movemask_ps(zmm7)
                            
                            if ((temp0_561 & 1) == 0)
                                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                                
                                if ((temp0_561 & 2) != 0)
                                    goto label_140301de8
                                
                                goto label_140301e62
                            
                            zmm10[0] = zx.o(*zmm2[0].q)[0]
                            zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                            
                            if ((temp0_561 & 2) != 0)
                            label_140301de8:
                                zmm10 = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm2, 0x4e)[0].q), 
                                        zmm10, 0), 
                                    zmm10, 0xe2)
                                zmm0 = _mm_add_epi64(zmm0, zmm12)
                                
                                if ((temp0_561 & 4) == 0)
                                    goto label_140301e6b
                                
                                goto label_140301e06
                            
                        label_140301e62:
                            zmm0 = _mm_add_epi64(zmm0, zmm12)
                            
                            if ((temp0_561 & 4) != 0)
                            label_140301e06:
                                zmm10 = _mm_shuffle_ps(zmm10, 
                                    _mm_shuffle_ps(zx.o(*zmm0.q), zmm10, 0x30), 0x84)
                                
                                if ((temp0_561 & 8) != 0)
                                    zmm10 = _mm_shuffle_ps(zmm10, 
                                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), 
                                            zmm10, 0x20), 
                                        0x24)
                            else
                            label_140301e6b:
                                
                                if ((temp0_561 & 8) != 0)
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
                            zmm5 = __pcmpgtd_xmmdq_memdq(zmm0, var_458_3) & not.o(zmm1)
                            zmm7 = zmm5 & zmm13
                            i_3 = _mm_movemask_ps(zmm7)
                            arg5 = zmm9
                            zmm6 = zmm2
                        while (i_3 != 0)
                
                zmm1 = var_428_3
                uint32_t temp0_649 = _mm_movemask_ps(_mm_andnot_ps(zmm1, zmm13))
                uint32_t i_4
                int32_t temp0_650[0x4]
                
                if (temp0_649 != 0)
                    zmm2 &= zmm1
                    temp0_650 = _mm_cmpeq_epi32(arg5, arg5)
                    zmm8 = _mm_add_epi32(zmm8, temp0_650)
                    zmm6 = _mm_cmpgt_epi32(zmm8, zx.o(0)) & (zmm4 ^ zmm1)
                    zmm1 = zmm6 & zmm13
                    i_4 = _mm_movemask_ps(zmm1)
                
                if (temp0_649 == 0 || i_4 == 0)
                    zmm7 = zmm2
                else
                    zmm10 = data_143442cd0
                    
                    do
                        zmm7 = _mm_add_epi32(zmm8, zmm8)
                        zmm0 = _mm_shuffle_epi32(zmm7, 0x4e)
                        int32_t temp0_663[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm0)
                        zmm7 = _mm_add_epi64(
                            _mm_unpacklo_epi32(zmm7, _mm_cmpgt_epi32(zx.o(0), zmm7).q), arg6)
                        char temp0_667 = _mm_movemask_ps(zmm1)
                        
                        if ((temp0_667 & 1) == 0)
                            zmm0 = _mm_unpacklo_epi32(zmm0, temp0_663[0].q)
                            
                            if ((temp0_667 & 2) != 0)
                                goto label_1403038b5
                            
                            goto label_14030391f
                        
                        zmm5[0] = zx.o(*zmm7[0].q)[0]
                        zmm0 = _mm_unpacklo_epi32(zmm0, temp0_663[0].q)
                        
                        if ((temp0_667 & 2) != 0)
                        label_1403038b5:
                            zmm5 = _mm_shuffle_ps(
                                _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm7, 0x4e)[0].q), zmm5, 0), 
                                zmm5, 0xe2)
                            zmm0 = _mm_add_epi64(zmm0, zmm12)
                            
                            if ((temp0_667 & 4) == 0)
                                goto label_140303928
                            
                            goto label_1403038d1
                        
                    label_14030391f:
                        zmm0 = _mm_add_epi64(zmm0, zmm12)
                        
                        if ((temp0_667 & 4) != 0)
                        label_1403038d1:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zx.o(*zmm0.q), zmm5, 0x30), 
                                0x84)
                            
                            if ((temp0_667 & 8) != 0)
                                zmm5 = _mm_shuffle_ps(zmm5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 
                                        0x20), 
                                    0x24)
                        else
                        label_140303928:
                            
                            if ((temp0_667 & 8) != 0)
                                zmm5 = _mm_shuffle_ps(zmm5, 
                                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm5, 
                                        0x20), 
                                    0x24)
                        
                        zmm1 = _mm_cmpgt_epi32(_mm_and_ps(zmm5, zmm10), arg7) & not.o(zmm6)
                        zmm3 = zx.o(0)
                        
                        if (_mm_movemask_ps(zmm1 & zmm13) != i_4)
                            zmm3 = zmm1 ^ zmm6
                        
                        zmm7 = (zmm1 & not.o(zmm2)) | (zmm1 & zmm8)
                        zmm8 = _mm_add_epi32(zmm8, temp0_650)
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
                
                if ((rbp_14 & 1) != 0)
                    zmm10 = zx.o(*zmm1[0].q)
                
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm2[0].q)
                arg5 = var_438_2
                zmm8 = var_468_4
                
                if ((rbp_14 & 2) == 0)
                    zmm0 = _mm_add_epi64(zmm0, zmm12)
                    
                    if ((rbp_14 & 4) != 0)
                        goto label_140303b7f
                    
                    goto label_140303a38
                
                zmm10 = _mm_shuffle_ps(
                    _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm1, 0x4e)[0].q), zmm10, 0), zmm10, 
                    0xe2)
                zmm0 = _mm_add_epi64(zmm0, zmm12)
                
                if ((rbp_14 & 4) == 0)
                label_140303a38:
                    
                    if ((rbp_14 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm10, 0x20)
                        zmm10 = _mm_shuffle_ps(zmm10, zmm0, 0x24)
                else
                label_140303b7f:
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zx.o(*zmm0.q), zmm10, 0x30), 0x84)
                    
                    if ((rbp_14 & 8) != 0)
                        zmm0 = _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm0, 0x4e).q), zmm10, 0x20)
                        zmm10 = _mm_shuffle_ps(zmm10, zmm0, 0x24)
                
                zmm4 = _mm_sub_epi32(zmm7, _mm_cmpeq_epi32(zmm0, zmm0)) & zmm13
                zmm0 = _mm_cmpgt_epi32(zmm4, var_458_3) & zmm13
                
                if (_mm_movemask_ps(zmm0) != 0)
                    zmm4 = (var_458_3 & zmm0) | (zmm0 & not.o(zmm4))
                
                zmm2 = _mm_add_epi32(zmm4, zmm4)
                zmm0 = _mm_shuffle_epi32(zmm2, 0x4e)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm0)
                zmm2 = _mm_unpacklo_epi32(zmm2, _mm_cmpgt_epi32(zx.o(0), zmm2)[0].q)
                arg6 = _mm_add_epi64(arg6, zmm2)
                
                if ((rbp_14 & 1) == 0)
                    zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                    arg7 = var_3a8_2
                    
                    if ((rbp_14 & 2) != 0)
                        goto label_140303bd0
                    
                    goto label_140303ad9
                
                zmm2 = zx.o(*arg6[0].q)
                zmm0 = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
                arg7 = var_3a8_2
                
                if ((rbp_14 & 2) != 0)
                label_140303bd0:
                    zmm2 = _mm_shuffle_ps(
                        _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(arg6, 0x4e)[0].q), zmm2, 0), zmm2, 
                        0xe2)
                    arg6 = var_388_1
                    zmm12 = _mm_add_epi64(zmm12, zmm0)
                    
                    if ((rbp_14 & 4) == 0)
                        goto label_140303af2
                    
                    goto label_140303bfc
                
            label_140303ad9:
                arg6 = var_388_1
                zmm12 = _mm_add_epi64(zmm12, zmm0)
                
                if ((rbp_14 & 4) != 0)
                label_140303bfc:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(*zmm12.q), zmm2, 0x30), 0x84)
                    
                    if ((rbp_14 & 8) != 0)
                        zmm2 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm2, 0x20), 
                            0x24)
                else
                label_140303af2:
                    
                    if ((rbp_14 & 8) != 0)
                        zmm2 = _mm_shuffle_ps(zmm2, 
                            _mm_shuffle_ps(zx.o(*_mm_shuffle_epi32(zmm12, 0x4e).q), zmm2, 0x20), 
                            0x24)
                
                zmm12 = var_418_2
                zmm10 = __andps_xmmxud_memxud(zmm10, data_143442cd0)
                zmm2 = __andps_xmmxud_memxud(zmm2, data_143442cd0)
                zmm0 = zx.o(0)
                
                if (arg10 != 1)
                    goto label_140303f24
            
            zmm6 = _mm_and_ps(arg7, zmm0)
            zmm2 = var_3e8_4
            zmm5 = _mm_shuffle_epi32(zmm2, 0xf5)
            r13_1 = zx.q(r14.d)
            
            if (r14.d u<= 5)
                goto label_140301fec
        
        arg7 = zmm6
        
        if ((temp0_490 & 1) == 0)
            if ((temp0_490 & 2) != 0)
                goto label_140305043
            
            goto label_140303fb2
        
        var_568[0] = 0
        
        if ((temp0_490 & 2) != 0)
        label_140305043:
            var_568[1] = 0
            
            if ((temp0_490 & 4) == 0)
                goto label_140303fc5
            
            goto label_14030505e
        
    label_140303fb2:
        
        if ((temp0_490 & 4) == 0)
        label_140303fc5:
            
            if ((temp0_490 & 8) != 0)
                goto label_14030506f
            
            goto label_140303fce
        
    label_14030505e:
        var_568[2] = 0
        
        if ((temp0_490 & 8) != 0)
        label_14030506f:
            var_568[3] = 0
            
            if ((temp0_490 & 1) == 0)
                goto label_140303fd7
            
            goto label_140305080
        
    label_140303fce:
        
        if ((temp0_490 & 1) == 0)
        label_140303fd7:
            
            if ((temp0_490 & 2) != 0)
                goto label_140305091
            
            goto label_140303fe0
        
    label_140305080:
        var_558[0] = 0
        
        if ((temp0_490 & 2) != 0)
        label_140305091:
            var_558[1] = 0
            
            if ((temp0_490 & 4) == 0)
                goto label_140303fe9
            
            goto label_1403050a2
        
    label_140303fe0:
        
        if ((temp0_490 & 4) == 0)
        label_140303fe9:
            
            if ((temp0_490 & 8) != 0)
                goto label_1403050b3
            
            goto label_140303ff2
        
    label_1403050a2:
        var_558[2] = 0
        
        if ((temp0_490 & 8) != 0)
        label_1403050b3:
            var_558[3] = 0
            
            if ((temp0_490 & 1) == 0)
                goto label_140303ffb
            
            goto label_1403050c4
        
    label_140303ff2:
        
        if ((temp0_490 & 1) == 0)
        label_140303ffb:
            
            if ((temp0_490 & 2) != 0)
                goto label_1403050d5
            
            goto label_140304004
        
    label_1403050c4:
        var_548.d = 0
        
        if ((temp0_490 & 2) != 0)
        label_1403050d5:
            var_548:4.d = 0
            
            if ((temp0_490 & 4) == 0)
                goto label_14030400d
            
            goto label_1403050e6
        
    label_140304004:
        
        if ((temp0_490 & 4) == 0)
        label_14030400d:
            
            if ((temp0_490 & 8) != 0)
                goto label_1403050f7
            
            goto label_140304016
        
    label_1403050e6:
        var_548:8.d = 0
        
        if ((temp0_490 & 8) != 0)
        label_1403050f7:
            var_548:0xc.d = 0
            
            if ((temp0_490 & 1) == 0)
                goto label_14030401f
            
            goto label_140305108
        
    label_140304016:
        
        if ((temp0_490 & 1) == 0)
        label_14030401f:
            
            if ((temp0_490 & 2) != 0)
                goto label_140305119
            
            goto label_140304028
        
    label_140305108:
        var_538[0] = 0x3f800000
        
        if ((temp0_490 & 2) != 0)
        label_140305119:
            var_538[1] = 0x3f800000
            
            if ((temp0_490 & 4) == 0)
                goto label_140304031
            
            goto label_14030512a
        
    label_140304028:
        
        if ((temp0_490 & 4) != 0)
        label_14030512a:
            var_538[2] = 0x3f800000
            
            if ((temp0_490 & 8) != 0)
                var_538[3] = 0x3f800000
        else
        label_140304031:
            
            if ((temp0_490 & 8) != 0)
                var_538[3] = 0x3f800000
        
        char temp0_791 = _mm_movemask_ps(_mm_srai_epi32(
            _mm_slli_epi32(_mm_cmpeq_epi32(zmm7, zmm4) & not.o(zmm8), 0x1f), 0x1f))
        
        if (temp0_791 != 0)
            if (r14.d u<= 5)
                zmm4 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm4), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm5), 0xe8).q)
                zmm1 = _mm_cmpgt_epi32(zx.o(0), zmm4)
                zmm3 = _mm_shuffle_epi32(zmm4, 0x4e)
                _mm_unpacklo_epi32(zmm4, zmm1[0].q)
                _mm_unpacklo_epi32(zmm3, _mm_cmpgt_epi32(zx.o(0), zmm3).q)
                jump(sx.q(*(&data_140305b58 + (r13_1 << 2))) + &data_140305b58)
            
            uint64_t rcx_30 = zx.q(temp0_791)
            int64_t rax_173 = rcx_30 & 1
            
            if (rax_173 == 0)
                if ((rcx_30.b & 2) != 0)
                    goto label_140305290
                
                goto label_14030429d
            
            int32_t var_4e8 = 0
            
            if ((rcx_30.b & 2) != 0)
            label_140305290:
                int32_t var_4e4_1 = 0
                
                if ((rcx_30.b & 4) == 0)
                    goto label_1403042a6
                
                goto label_1403052a4
            
        label_14030429d:
            
            if ((rcx_30.b & 4) == 0)
            label_1403042a6:
                
                if ((rcx_30.b & 8) != 0)
                    goto label_1403052b8
                
                goto label_1403042af
            
        label_1403052a4:
            int32_t var_4e0_1 = 0
            
            if ((rcx_30.b & 8) != 0)
            label_1403052b8:
                int32_t var_4dc_1 = 0
                
                if (rax_173 == 0)
                    goto label_1403042b8
                
                goto label_1403052cc
            
        label_1403042af:
            
            if (rax_173 == 0)
            label_1403042b8:
                
                if ((rcx_30.b & 2) != 0)
                    goto label_1403052e0
                
                goto label_1403042c1
            
        label_1403052cc:
            int32_t var_4d8 = 0
            
            if ((rcx_30.b & 2) != 0)
            label_1403052e0:
                int32_t var_4d4_1 = 0
                
                if ((rcx_30.b & 4) == 0)
                    goto label_1403042ca
                
                goto label_1403052f4
            
        label_1403042c1:
            
            if ((rcx_30.b & 4) == 0)
            label_1403042ca:
                
                if ((rcx_30.b & 8) != 0)
                    goto label_140305308
                
                goto label_1403042d3
            
        label_1403052f4:
            int32_t var_4d0_1 = 0
            
            if ((rcx_30.b & 8) != 0)
            label_140305308:
                int32_t var_4cc_1 = 0
                
                if (rax_173 == 0)
                    goto label_1403042dc
                
                goto label_14030531c
            
        label_1403042d3:
            
            if (rax_173 == 0)
            label_1403042dc:
                
                if ((rcx_30.b & 2) != 0)
                    goto label_140305330
                
                goto label_1403042e5
            
        label_14030531c:
            int32_t var_4c8 = 0
            
            if ((rcx_30.b & 2) != 0)
            label_140305330:
                int32_t var_4c4_1 = 0
                
                if ((rcx_30.b & 4) == 0)
                    goto label_1403042ee
                
                goto label_140305344
            
        label_1403042e5:
            
            if ((rcx_30.b & 4) == 0)
            label_1403042ee:
                
                if ((rcx_30.b & 8) != 0)
                    goto label_140305358
                
                goto label_1403042f7
            
        label_140305344:
            int32_t var_4c0_1 = 0
            
            if ((rcx_30.b & 8) != 0)
            label_140305358:
                int32_t var_4bc_1 = 0
                
                if (rax_173 == 0)
                    goto label_140304300
                
                goto label_14030536c
            
        label_1403042f7:
            
            if (rax_173 == 0)
            label_140304300:
                
                if ((rcx_30.b & 2) != 0)
                    goto label_140305380
                
                goto label_140304309
            
        label_14030536c:
            int32_t var_4b8 = 0x3f800000
            
            if ((rcx_30.b & 2) != 0)
            label_140305380:
                int32_t var_4b4_1 = 0x3f800000
                
                if ((rcx_30.b & 4) == 0)
                    goto label_140304312
                
                goto label_140305394
            
        label_140304309:
            int32_t var_4ac_1
            
            if ((rcx_30.b & 4) != 0)
            label_140305394:
                int32_t var_4b0_1 = 0x3f800000
                
                if ((rcx_30.b & 8) != 0)
                    var_4ac_1 = 0x3f800000
            else
            label_140304312:
                
                if ((rcx_30.b & 8) != 0)
                    var_4ac_1 = 0x3f800000
            zmm4 = var_4e8.o
            zmm1 = var_4d8.o
            arg5 = var_4c8.o
            zmm10 = var_4b8.o
            float temp0_816[0x4] = _mm_mul_ps(var_568, zmm4)
            float temp0_818[0x4] = _mm_add_ps(_mm_mul_ps(var_558, zmm1), temp0_816)
            float temp0_820[0x4] = _mm_add_ps(_mm_mul_ps(var_548, arg5), temp0_818)
            float temp0_822[0x4] = _mm_add_ps(_mm_mul_ps(var_538, zmm10), temp0_820)
            float temp0_823[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_822, 2)
            zmm7 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), temp0_822, 6), data_142d3f7e0)
            zmm8 = data_142d3f670
            zmm6 = _mm_or_ps(_mm_and_ps(temp0_823, zmm8), zmm7)
            zmm4 = _mm_mul_ps(zmm4, arg7)
            zmm1 = _mm_mul_ps(zmm1, arg7)
            arg5 = _mm_mul_ps(arg5, arg7)
            zmm10 = _mm_mul_ps(zmm10, arg7)
            float temp0_833[0x4] = _mm_mul_ps(_mm_sub_ps(zmm8, arg7), zmm6)
            zmm3 = _mm_add_ps(_mm_mul_ps(var_568, temp0_833), zmm4)
            float temp0_837[0x4] = _mm_add_ps(_mm_mul_ps(var_558, temp0_833), zmm1)
            zmm0 = _mm_add_ps(_mm_mul_ps(var_548, temp0_833), arg5)
            float temp0_841[0x4] = _mm_add_ps(_mm_mul_ps(temp0_833, var_538), zmm10)
            int32_t var_228_1[0x4] = zmm3
            uint128_t var_208_1 = zmm0
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            float temp0_843[0x4] = _mm_mul_ps(temp0_837, temp0_837)
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm0), zmm3)
            float temp0_848[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_841, temp0_841), temp0_843), zmm0)
            zmm2 = data_142d3f640
            zmm3 = _mm_cmpeq_ps(data_142d3f5c0, temp0_848, 2)
            zmm0 = _mm_rsqrt_ps(temp0_848)
            float temp0_851[0x4] = _mm_mul_ps(temp0_848, zmm2)
            float var_128_1[0x4] = temp0_851
            float var_118_1[0x4] = temp0_851
            float var_108_1[0x4] = temp0_851
            float var_f8_1[0x4] = temp0_851
            zmm4 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm2, _mm_mul_ps(_mm_mul_ps(zmm0, zmm0), temp0_851)), zmm0), 
                zmm0)
            float temp0_861[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm2, _mm_mul_ps(_mm_mul_ps(zmm4, zmm4), temp0_851)), zmm4), 
                zmm4)
            zmm1 = _mm_mul_ps(var_228_1, temp0_861)
            zmm4 = _mm_mul_ps(temp0_837, temp0_861)
            zmm0 = _mm_mul_ps(var_208_1, temp0_861)
            float temp0_865[0x4] = __mulps_xmmps_memps(temp0_861, temp0_841)
            uint32_t temp0_866[0x4] = _mm_and_ps(zmm1, zmm3)
            
            if (rax_173 != 0)
                var_568[0] = temp0_866[0]
            
            arg5 = var_438_2
            
            if ((rcx_30.b & 2) != 0)
                var_568[1] = _mm_shuffle_epi32(temp0_866, 0xe5)[0]
                
                if ((rcx_30.b & 4) != 0)
                label_140305a29:
                    var_568[2] = _mm_shuffle_epi32(temp0_866, 0x4e)[0]
                    
                    if ((rcx_30.b & 8) == 0)
                        goto label_140305864
                    
                    goto label_140305a3d
            else if ((rcx_30.b & 4) != 0)
                goto label_140305a29
            
            if ((rcx_30.b & 8) != 0)
            label_140305a3d:
                var_568[3] = _mm_shuffle_epi32(temp0_866, 0xe7)[0]
                zmm4 = _mm_and_ps(zmm4, zmm3)
                
                if (rax_173 != 0)
                    var_558[0] = zmm4.d
            else
            label_140305864:
                zmm4 = _mm_and_ps(zmm4, zmm3)
                
                if (rax_173 != 0)
                    var_558[0] = zmm4.d
            
            if ((rcx_30.b & 2) != 0)
                var_558[1] = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                
                if ((rcx_30.b & 4) != 0)
                label_140305a6d:
                    var_558[2] = _mm_shuffle_epi32(zmm4, 0x4e)[0]
                    
                    if ((rcx_30.b & 8) == 0)
                        goto label_14030588d
                    
                    goto label_140305a81
            else if ((rcx_30.b & 4) != 0)
                goto label_140305a6d
            
            if ((rcx_30.b & 8) != 0)
            label_140305a81:
                var_558[3] = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                zmm0 = _mm_and_ps(zmm0, zmm3)
                
                if (rax_173 != 0)
                    var_548.d = zmm0.d
            else
            label_14030588d:
                zmm0 = _mm_and_ps(zmm0, zmm3)
                
                if (rax_173 != 0)
                    var_548.d = zmm0.d
            
            if ((rcx_30.b & 2) == 0)
                if ((rcx_30.b & 4) != 0)
                    goto label_140305ab1
                
                goto label_1403058ad
            
            var_548:4.d = _mm_shuffle_epi32(zmm0, 0xe5)[0]
            
            if ((rcx_30.b & 4) != 0)
            label_140305ab1:
                var_548:8.d = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                zmm2 = _mm_and_ps(temp0_865, zmm3)
                zmm3 = _mm_andnot_ps(zmm3, zmm8)
                
                if ((rcx_30.b & 8) == 0)
                    goto label_1403058bd
                
                goto label_140305acc
            
        label_1403058ad:
            zmm2 = _mm_and_ps(temp0_865, zmm3)
            zmm3 = _mm_andnot_ps(zmm3, zmm8)
            
            if ((rcx_30.b & 8) != 0)
            label_140305acc:
                var_548:0xc.d = _mm_shuffle_epi32(zmm0, 0xe7).d
                zmm2 = _mm_or_ps(zmm2, zmm3)
                
                if (rax_173 != 0)
                    var_538[0] = zmm2[0]
            else
            label_1403058bd:
                zmm2 = _mm_or_ps(zmm2, zmm3)
                
                if (rax_173 != 0)
                    var_538[0] = zmm2[0]
            
            if ((rcx_30.b & 2) == 0)
                if ((rcx_30.b & 4) != 0)
                    goto label_140305afc
                
                goto label_1403058dd
            
            var_538[1] = _mm_shuffle_epi32(zmm2, 0xe5).d
            
            if ((rcx_30.b & 4) == 0)
            label_1403058dd:
                
                if ((rcx_30.b & 8) != 0)
                    var_538[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
            else
            label_140305afc:
                var_538[2] = _mm_shuffle_epi32(zmm2, 0x4e).d
                
                if ((rcx_30.b & 8) != 0)
                    var_538[3] = _mm_shuffle_epi32(zmm2, 0xe7).d
    
    zmm12 = _mm_unpacklo_epi64(zmm12, arg5[0].q)
    zmm0 = var_568
    zmm1 = var_558
    zmm2 = var_548
    zmm4 = _mm_unpacklo_ps(zmm2, var_538[0].q)
    float temp0_875[0x4] = _mm_unpackhi_ps(zmm2, var_538)
    zmm3 = _mm_unpacklo_ps(zmm0, zmm1[0].q)
    zmm0 = _mm_unpackhi_ps(zmm0, zmm1)
    uint32_t var_1e8[0x4] = zmm3[0].q | zmm4.q << 0x40
    int32_t var_1d8_1[0x4] = _mm_unpackhi_pd(zmm3, zmm4.q)
    uint32_t var_1c8_1[0x4] = zmm0[0].q | temp0_875[0].q << 0x40
    uint128_t var_1b8_1 = _mm_unpackhi_pd(zmm0, temp0_875[0].q)
    i_5 = zx.q(_mm_movemask_ps(arg6))
    
    do
        uint64_t rcx_31
        uint64_t rflags_1
        
        if (i_5 == 0)
            rcx_31 = 0x40
        else
            rcx_31, rflags_1 = _bit_scan_forward(i_5)
        uint128_t var_238 = zmm12
        arg1[sx.q(*(&var_238 + ((zx.q(rcx_31.d) & 3) << 2))) * 3] = (&var_1e8)[rcx_31]
        i_5 &= rol.q(-2, rcx_31.b)
    while (i_5 != 0)

return i_5
