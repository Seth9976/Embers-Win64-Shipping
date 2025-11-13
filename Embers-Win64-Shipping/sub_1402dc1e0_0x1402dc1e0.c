// 函数: sub_1402dc1e0
// 地址: 0x1402dc1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm15[0x4]
uint32_t var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
float var_88[0x4] = arg9
int32_t var_98[0x4] = arg8
int32_t var_a8[0x4] = arg7
uint32_t var_b8[0x4] = arg6
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
int64_t r10 = sx.q(arg13)
int32_t rcx_1 = *(&data_143442f20 + (r10 << 2)) * *(&data_143442f00 + (r10 << 2))
uint64_t r13 = 0
int32_t rax = 0x18

if (r10 != 3)
    rax = 0

int32_t i = ((arg14 s>> 0x1f u>> 0x1e) + arg14) & 0xfffffffc
uint128_t* var_3d8 = arg1
uint128_t* var_470 = arg4
int64_t var_398 = r10
uint128_t zmm0
uint128_t zmm1
int32_t zmm2[0x4]
uint32_t zmm3[0x4]
float zmm4[0x4]

if (i s> 0)
    uint128_t var_278_1 = _mm_shuffle_epi32(zx.o(arg4), 0x44)
    uint128_t var_258_1 = _mm_cvtepu32_epi64(_mm_shuffle_epi32(zx.o(rax), 0).q)
    uint128_t var_318_1 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
    zmm1 = arg11
    int32_t rcx_2
    rcx_2.b = 0f f>= zmm1.d
    uint128_t var_268_1 = _mm_shuffle_epi32(zx.o(neg.d(rcx_2)), 0)
    uint128_t var_288_1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm2[0] = float.s(arg10 - 1)
    zmm2[0] = zmm2[0] f* zmm1.d
    zmm1 = _mm_min_epi32(zx.o(arg10 - 2), _mm_max_epi32(zx.o(int.d(zmm2[0])), zx.o(0)))
    uint128_t var_3c8_1 = _mm_shuffle_epi32(zmm1, 0)
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
    int32_t var_298_1[0x4] = zmm2
    r13 = 0
    arg8 = _mm_cmpeq_epi32(arg8, arg8)
    int64_t var_380_1 = arg3
    uint128_t* var_388_1 = arg2
    int32_t i_6 = i
    
    do
        int64_t rax_75 = sx.q((r13 << 3).d)
        zmm0 = *(arg2 + rax_75)
        arg9 = *(arg2 + rax_75 + 0x10)
        uint128_t var_418_1 = zmm0
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, arg9, 0xdd), 4)
        int64_t rax_77 = sx.q(zmm0.d)
        int64_t rcx_6 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rdx_27 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rbp_2 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm7 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_77 + 8)), *(arg3 + rcx_6 + 8), 1), 
                *(arg3 + rdx_27 + 8), 2), 
            *(arg3 + rbp_2 + 8), 3)
        arg7 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_77 + 0xc)), *(arg3 + rcx_6 + 0xc), 1), 
                *(arg3 + rdx_27 + 0xc), 2), 
            *(arg3 + rbp_2 + 0xc), 3)
        zmm6 = __pcmpeqd_xmmdq_memdq(arg7, data_142d3f5b0)
        char temp0_217 = _mm_movemask_ps(zmm6)
        int32_t var_468_1[0x4] = arg5
        float var_438_1[0x4] = arg9
        float var_3f8_1[0x4] = zmm7
        float var_548
        uint128_t var_538
        uint32_t var_528[0x4]
        float var_518[0x4]
        
        if (temp0_217 != 0)
            uint128_t var_508_1 = zmm1
            zmm1 = zmm6 & zmm7
            int64_t rdx_28 = sx.q(zmm1.d)
            void* rcx_8 = arg4 + rdx_28
            int32_t temp0_218 = _mm_extract_epi32(zmm1, 1)
            zmm0 = *(arg4 + rdx_28)
            int64_t rdx_29 = sx.q(temp0_218)
            void* rbp_4 = arg4 + rdx_29
            zmm8 = *(arg4 + rdx_29)
            int64_t rbx_1 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* rdx_31 = arg4 + rbx_1
            zmm3 = *(arg4 + rbx_1)
            int32_t temp0_220 = _mm_extract_epi32(zmm1, 3)
            arg5 = zmm6 & data_142fc95e0
            zmm2 = *(zx.q(arg5[0]) + rcx_8)
            int64_t rbx_3 = sx.q(temp0_220)
            zmm4 = *(zx.q(_mm_extract_epi32(arg5, 1)) + rbp_4)
            uint64_t rdi_4 = zx.q(_mm_extract_epi32(arg5, 2))
            zmm7 = *(arg4 + rbx_3)
            zmm1 = *(rdi_4 + rdx_31)
            void* rbx_4 = arg4 + rbx_3
            arg9 = *(zx.q(_mm_extract_epi32(arg5, 3)) + rbx_4)
            arg5 = zmm6 & data_142fc95f0
            zmm15 = *(zx.q(arg5[0]) + rcx_8)
            zmm14 = *(zx.q(_mm_extract_epi32(arg5, 1)) + rbp_4)
            uint64_t rcx_10 = zx.q(_mm_extract_epi32(arg5, 2))
            int32_t (* rbp_5)[0x4] = zx.q(_mm_extract_epi32(arg5, 3))
            zmm13 = *(rcx_10 + rdx_31)
            arg8 = *(rbp_5 + rbx_4)
            
            if ((temp0_217 & 1) == 0)
                if ((temp0_217 & 2) != 0)
                    goto label_1402ddf50
                
                goto label_1402ddd4a
            
            var_548 = zmm0.d
            
            if ((temp0_217 & 2) != 0)
            label_1402ddf50:
                float var_544_3 = zmm8[0]
                
                if ((temp0_217 & 4) == 0)
                    goto label_1402ddd54
                
                goto label_1402ddf61
            
        label_1402ddd4a:
            
            if ((temp0_217 & 4) == 0)
            label_1402ddd54:
                
                if ((temp0_217 & 8) != 0)
                    goto label_1402ddf71
                
                goto label_1402ddd5e
            
        label_1402ddf61:
            uint32_t var_540_3 = zmm3[0]
            
            if ((temp0_217 & 8) != 0)
            label_1402ddf71:
                float var_53c_3 = zmm7[0]
                zmm0 = _mm_insert_ps(zmm0, zmm8, 0x10)
                
                if ((temp0_217 & 1) == 0)
                    goto label_1402ddd6f
                
                goto label_1402ddf88
            
        label_1402ddd5e:
            zmm0 = _mm_insert_ps(zmm0, zmm8, 0x10)
            
            if ((temp0_217 & 1) != 0)
            label_1402ddf88:
                var_538.d = zmm2[0]
                zmm0 = _mm_insert_ps(zmm0, zmm3, 0x20)
                zmm2 = _mm_insert_ps(zmm2, zmm4, 0x10)
                
                if ((temp0_217 & 2) != 0)
                    var_538:4.d = zmm4[0]
            else
            label_1402ddd6f:
                zmm0 = _mm_insert_ps(zmm0, zmm3, 0x20)
                zmm2 = _mm_insert_ps(zmm2, zmm4, 0x10)
                
                if ((temp0_217 & 2) != 0)
                    var_538:4.d = zmm4[0]
            
            zmm0 = _mm_insert_ps(zmm0, zmm7, 0x30)
            zmm2 = _mm_insert_ps(zmm2, zmm1, 0x20)
            zmm3 = _mm_insert_ps(zmm15, zmm14, 0x10)
            
            if ((temp0_217 & 4) != 0)
                var_538:8.d = zmm1.d
            
            zmm2 = _mm_insert_ps(zmm2, arg9, 0x30)
            zmm3 = _mm_insert_ps(zmm3, zmm13, 0x20)
            zmm0 = _mm_mul_ps(zmm0, zmm0)
            zmm7 = var_3f8_1
            
            if ((temp0_217 & 8) != 0)
                var_538:0xc.d = arg9[0]
            
            zmm3 = _mm_insert_ps(zmm3, arg8, 0x30)
            zmm1 = _mm_sub_ps(data_142d3f670, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm2)
            
            if ((temp0_217 & 1) != 0)
                var_528[0] = zmm15[0]
            
            zmm1 = _mm_sub_ps(zmm1, zmm2)
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            arg9 = var_438_1
            
            if ((temp0_217 & 2) != 0)
                var_528[1] = zmm14[0]
            
            zmm1 = _mm_sub_ps(zmm1, zmm3)
            
            if ((temp0_217 & 4) != 0)
                var_528[2] = zmm13[0]
            
            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
            zmm1 = _mm_sqrt_ps(zmm1)
            
            if ((temp0_217 & 8) == 0)
                zmm0 = _mm_and_ps(zmm0, zmm1)
                
                if ((temp0_217 & 1) != 0)
                    goto label_1402ddfcc
                
                goto label_1402dde50
            
            var_528[3] = arg8[0]
            zmm0 = _mm_and_ps(zmm0, zmm1)
            
            if ((temp0_217 & 1) != 0)
            label_1402ddfcc:
                var_518[0] = zmm0.d
                arg8 = _mm_cmpeq_epi32(arg8, arg8)
                zmm1 = var_508_1
                
                if ((temp0_217 & 2) == 0)
                    goto label_1402dde63
                
                goto label_1402ddfe9
            
        label_1402dde50:
            arg8 = _mm_cmpeq_epi32(arg8, arg8)
            zmm1 = var_508_1
            
            if ((temp0_217 & 2) == 0)
            label_1402dde63:
                
                if ((temp0_217 & 4) != 0)
                    goto label_1402ddffb
                
                goto label_1402dde6d
            
        label_1402ddfe9:
            var_518[1] = __extractps_memd_xmmps_immb(zmm0, 1)
            
            if ((temp0_217 & 4) == 0)
            label_1402dde6d:
                
                if ((temp0_217 & 8) != 0)
                    var_518[3] = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_1402ddffb:
                var_518[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((temp0_217 & 8) != 0)
                    var_518[3] = __extractps_memd_xmmps_immb(zmm0, 3)
        
        arg5 = zmm6 ^ arg8
        char temp0_247 = _mm_movemask_ps(arg5)
        
        if (temp0_247 == 0)
            zmm7 = arg6
            zmm13 = zmm1
            arg5 = var_468_1
        else
            zmm0 = _mm_shuffle_epi32(zmm7, 0x4e)
            zmm3 = _mm_cvtepi32_epi64(zmm7[0].q)
            zmm8 = _mm_cvtepi32_epi64(zmm0.q)
            zmm14 = _mm_cmpgt_epi32(data_1434422d0, arg7) | var_268_1
            zmm0 = zmm14 & arg5
            uint32_t temp0_252 = _mm_movemask_ps(zmm0)
            int32_t temp0_253[0x4] = _mm_cmpeq_epi32(zmm2, zmm2)
            float var_408_1[0x4]
            uint32_t var_3e8[0x4]
            float var_358[0x4]
            uint128_t var_328
            uint128_t var_248
            
            if (temp0_252 == 0)
                zmm4 = var_328
                var_408_1 = var_248
                arg9 = var_358
            else
                zmm1 = zx.o(0)
                arg6 = _mm_blendv_ps(var_3e8, zmm1, zmm0)
                arg9 = _mm_blendv_ps(var_358, zmm1, zmm0)
                zmm4 = arg6
                var_3e8 = arg6
                var_408_1 = arg9
                zmm1 = arg9
            
            zmm3 = _mm_add_epi64(zmm3, var_258_1)
            zmm8 = _mm_add_epi64(zmm8, var_258_1)
            zmm13 = zmm14 & not.o(arg5)
            uint32_t temp0_265 = _mm_movemask_ps(zmm13)
            uint32_t var_3a8_1[0x4] = zmm3
            int32_t var_508_2[0x4] = arg5
            uint128_t var_308_1
            uint64_t rdi_1
            
            if (temp0_265 == 0)
                var_308_1 = zx.o(0)
                var_328 = zmm4
                zmm7 = arg6
                zmm13 = zmm1
                rdi_1 = zx.q(r10.d)
                var_248 = var_408_1
                
                if (r10.d u<= 5)
                label_1402de1cd:
                    zmm0 = __pmulld_xmmdq_memdq(zmm7, var_318_1)
                    _mm_cvtepi32_epi64(zmm0.q)
                    _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
                    jump(sx.q(jump_table_1402e4644[rdi_1]) + &jump_table_1402e4644)
            else
                var_308_1 = zx.o(0)
                arg6 = _mm_add_epi32(arg7, temp0_253)
                
                if (arg11.d f>= 1f)
                    zmm0 = zmm13
                    zmm1 = _mm_blendv_ps(var_3e8, arg6, zmm0)
                    arg9 = _mm_blendv_ps(arg9, arg6, zmm0)
                    var_328 = zmm1
                    var_3e8 = zmm1
                    zmm7 = zmm1
                    zmm13 = arg9
                    rdi_1 = zx.q(r10.d)
                    var_248 = arg9
                    
                    if (r10.d u<= 5)
                        goto label_1402de1cd
                else
                    int32_t temp0_267[0x4] = __pmulld_xmmdq_memdq(arg7, var_318_1)
                    zmm0 = _mm_shuffle_epi32(temp0_267, 0x4e)
                    float var_3b8_1[0x4] = zmm8
                    zmm8 = _mm_add_epi64(zmm8, var_278_1)
                    zmm15 = _mm_add_epi64(zmm3, var_278_1)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    zmm1 = _mm_cvtepi32_epi64(temp0_267[0].q)
                    zmm2 = data_143442a20
                    zmm8 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm2), zmm0)
                    zmm15 = _mm_add_epi64(_mm_add_epi64(zmm15, zmm2), zmm1)
                    zmm0 = data_143442c10
                    zmm15 &= zmm0
                    zmm8 &= zmm0
                    zmm6 = _mm_min_epi32(
                        __pmaxsd_xmmdq_memdq(
                            _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(arg6), 
                                var_288_1)), 
                            data_142d8f750), 
                        arg6)
                    
                    if (arg10 s< 0x100)
                        zmm0 = _mm_shuffle_epi32(zmm6, 0x4e)
                        zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm6[0].q), zmm15)
                        char rdi_9 = temp0_265.b
                        arg8 = _mm_cmpeq_epi32(arg8, arg8)
                        zmm3 = var_468_1
                        int32_t var_2b8[0x4]
                        
                        if ((rdi_9 & 1) != 0)
                            zmm2 = _mm_insert_epi32(var_2b8, zx.d(*zmm1.q), 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rdi_9 & 2) != 0)
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        else
                            zmm2 = var_2b8
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rdi_9 & 2) != 0)
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        
                        zmm0 = _mm_add_epi64(zmm0, zmm8)
                        float var_358_1[0x4]
                        
                        if ((rdi_9 & 4) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                            var_358_1 = arg9
                            arg9 = zmm3
                            
                            if ((rdi_9 & 8) != 0)
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                        else
                            var_358_1 = arg9
                            arg9 = zmm3
                            
                            if ((rdi_9 & 8) != 0)
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                        
                        int32_t temp0_92[0x4] =
                            __pcmpgtd_xmmdq_memdq(zmm2 & data_142ed6810, var_3c8_1)
                        arg7 = temp0_92 ^ arg8
                        var_2b8 = zmm2
                        zmm7 = zmm6
                        
                        if (_mm_movemask_ps(temp0_92 & not.o(zmm13)) != 0)
                            zmm7 = _mm_blendv_ps(zmm7, arg6, arg7)
                            zmm0 = _mm_sub_epi32(zmm6, arg8)
                            arg5 = temp0_92 & not.o(_mm_cmpgt_epi32(zmm0, arg6) ^ arg8)
                            zmm3 = zmm13 & arg5
                            uint32_t j = _mm_movemask_ps(zmm3)
                            
                            if (j != 0)
                                zmm4 = zmm6
                                
                                do
                                    zmm1 = zmm0
                                    zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                    int32_t temp0_101[0x4] =
                                        _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                                    char temp0_102 = _mm_movemask_ps(zmm3)
                                    uint32_t var_428[0x4]
                                    
                                    if ((temp0_102 & 1) != 0)
                                        zmm3 = _mm_insert_epi32(var_428, zx.d(*temp0_101[0].q), 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                        
                                        if ((temp0_102 & 2) != 0)
                                            zmm3 = _mm_insert_epi32(zmm3, 
                                                zx.d(*_mm_extract_epi64(temp0_101, 1)), 1)
                                    else
                                        zmm3 = var_428
                                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                        
                                        if ((temp0_102 & 2) != 0)
                                            zmm3 = _mm_insert_epi32(zmm3, 
                                                zx.d(*_mm_extract_epi64(temp0_101, 1)), 1)
                                    
                                    zmm0 = _mm_add_epi64(zmm0, zmm8)
                                    
                                    if ((temp0_102 & 4) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm0.q), 2)
                                        
                                        if ((temp0_102 & 8) != 0)
                                            zmm3 = _mm_insert_epi32(zmm3, 
                                                zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    else if ((temp0_102 & 8) != 0)
                                        zmm3 = _mm_insert_epi32(zmm3, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    
                                    var_428 = zmm3
                                    zmm0 = __pcmpgtd_xmmdq_memdq(zmm3 & data_142ed6810, var_3c8_1)
                                        & arg5
                                    zmm7 = _mm_blendv_ps(zmm7, zmm4, zmm0)
                                    zmm2 = zx.o(0)
                                    
                                    if (_mm_movemask_ps(zmm0 & zmm13) != j)
                                        zmm2 = zmm0 ^ arg5
                                    
                                    zmm0 = _mm_sub_epi32(zmm1, arg8)
                                    arg5 = _mm_cmpgt_epi32(zmm0, arg6) & not.o(zmm2)
                                    zmm3 = arg5 & zmm13
                                    j = _mm_movemask_ps(zmm3)
                                    zmm4 = zmm1
                                while (j != 0)
                        
                        int32_t var_2f8[0x4]
                        
                        if (_mm_movemask_ps(arg7 & not.o(zmm13)) == 0)
                            arg5 = arg9
                            zmm2 = var_2f8
                            arg9 = var_358_1
                        else
                            arg7 ^= arg8
                            zmm1 = zx.o(0)
                            zmm7 = _mm_blendv_ps(zmm7, zmm1, arg7)
                            zmm6 = _mm_add_epi32(zmm6, arg8)
                            zmm3 = _mm_cmpgt_epi32(zmm6, zmm1) & arg7
                            zmm0 = zmm3 & zmm13
                            uint32_t j_1 = _mm_movemask_ps(zmm0)
                            arg5 = arg9
                            
                            if (j_1 == 0)
                                arg9 = var_358_1
                            else
                                arg9 = var_358_1
                                
                                do
                                    zmm2 = _mm_shuffle_epi32(zmm6, 0x4e)
                                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm6[0].q), zmm15)
                                    char temp0_128 = _mm_movemask_ps(zmm0)
                                    
                                    if ((temp0_128 & 1) == 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                        
                                        if ((temp0_128 & 2) != 0)
                                            goto label_1402dcaa1
                                        
                                        goto label_1402dcaef
                                    
                                    arg5 = _mm_insert_epi32(arg5, zx.d(*zmm1.q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                    
                                    if ((temp0_128 & 2) != 0)
                                    label_1402dcaa1:
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                        zmm0 = _mm_add_epi64(zmm0, zmm8)
                                        
                                        if ((temp0_128 & 4) == 0)
                                            goto label_1402dcaf8
                                        
                                        goto label_1402dcab8
                                    
                                label_1402dcaef:
                                    zmm0 = _mm_add_epi64(zmm0, zmm8)
                                    
                                    if ((temp0_128 & 4) != 0)
                                    label_1402dcab8:
                                        arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                        
                                        if ((temp0_128 & 8) != 0)
                                            arg5 = _mm_insert_epi32(arg5, 
                                                zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    else
                                    label_1402dcaf8:
                                        
                                        if ((temp0_128 & 8) != 0)
                                            arg5 = _mm_insert_epi32(arg5, 
                                                zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    
                                    zmm0 = __pcmpgtd_xmmdq_memdq(arg5 & data_142ed6810, var_3c8_1)
                                        & not.o(zmm3)
                                    zmm7 = _mm_blendv_ps(zmm7, zmm6, zmm0)
                                    zmm2 = zx.o(0)
                                    
                                    if (_mm_movemask_ps(zmm0 & zmm13) != j_1)
                                        zmm2 = zmm0 ^ zmm3
                                    
                                    zmm6 = _mm_add_epi32(zmm6, arg8)
                                    zmm3 = _mm_cmpgt_epi32(zmm6, zx.o(0)) & zmm2
                                    zmm0 = zmm3 & zmm13
                                    j_1 = _mm_movemask_ps(zmm0)
                                while (j_1 != 0)
                            
                            zmm2 = var_2f8
                        
                        zmm1 = _mm_blendv_ps(var_3e8, zmm7, zmm13)
                        zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                        var_3e8 = zmm1
                        zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                        
                        if ((rdi_9 & 1) == 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rdi_9 & 2) != 0)
                                goto label_1402dda19
                            
                            goto label_1402dd962
                        
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rdi_9 & 2) != 0)
                        label_1402dda19:
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                            zmm0 = _mm_add_epi64(zmm0, zmm8)
                            
                            if ((rdi_9 & 4) == 0)
                                goto label_1402dd971
                            
                            goto label_1402dda36
                        
                    label_1402dd962:
                        zmm0 = _mm_add_epi64(zmm0, zmm8)
                        
                        if ((rdi_9 & 4) != 0)
                        label_1402dda36:
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                            
                            if ((rdi_9 & 8) != 0)
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                        else
                        label_1402dd971:
                            
                            if ((rdi_9 & 8) != 0)
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                        
                        arg9 = _mm_blendv_ps(arg9, _mm_sub_epi32(var_3e8, arg8), zmm13)
                        zmm0 = _mm_cmpgt_epi32(arg9, arg6) & zmm13
                        
                        if (_mm_movemask_ps(zmm0) != 0)
                            arg9 = _mm_blendv_ps(arg9, arg6, zmm0)
                        
                        zmm13 = arg9
                        zmm0 = _mm_shuffle_epi32(arg9, 0x4e)
                        zmm15 = _mm_add_epi64(zmm15, _mm_cvtepi32_epi64(arg9[0].q))
                        uint32_t var_2d8[0x4]
                        
                        if ((rdi_9 & 1) != 0)
                            zmm3 = _mm_insert_epi32(var_2d8, zx.d(*zmm15[0].q), 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rdi_9 & 2) != 0)
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                        else
                            zmm3 = var_2d8
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rdi_9 & 2) != 0)
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                        
                        zmm8 = _mm_add_epi64(zmm8, zmm0)
                        
                        if ((rdi_9 & 4) != 0)
                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm8[0].q), 2)
                            
                            if ((rdi_9 & 8) != 0)
                                zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                        else if ((rdi_9 & 8) != 0)
                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                        
                        var_2f8 = zmm2
                        zmm1 = data_142ed6810
                        zmm0 = zmm2 & zmm1
                        var_2d8 = zmm3
                        zmm1 &= zmm3
                        zmm7 = var_3e8
                    else
                        zmm1 = _mm_add_epi32(zmm6, zmm6)
                        zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                        zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                        char rdi_8 = temp0_265.b
                        arg8 = _mm_cmpeq_epi32(arg8, arg8)
                        int32_t var_2a8[0x4]
                        
                        if ((rdi_8 & 1) != 0)
                            arg5 = _mm_insert_epi32(var_2a8, zx.d(*zmm1.q), 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rdi_8 & 2) != 0)
                                arg5 = _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        else
                            arg5 = var_2a8
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rdi_8 & 2) != 0)
                                arg5 = _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        
                        zmm0 = _mm_add_epi64(zmm0, zmm8)
                        
                        if ((rdi_8 & 4) != 0)
                            arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                            
                            if ((rdi_8 & 8) != 0)
                                arg5 = _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                        else if ((rdi_8 & 8) != 0)
                            arg5 = _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                        
                        zmm3 = __pcmpgtd_xmmdq_memdq(
                            __pblendw_xmmdq_memdq_immb(arg5, data_142d8f750, 0xaa), var_3c8_1)
                        arg7 = zmm3 ^ arg8
                        var_2a8 = arg5
                        float var_348_1[0x4] = zmm4
                        zmm4 = zmm6
                        
                        if (_mm_movemask_ps(zmm3 & not.o(zmm13)) != 0)
                            zmm4 = _mm_blendv_ps(zmm4, arg6, arg7)
                            zmm0 = _mm_sub_epi32(zmm6, arg8)
                            zmm3 &= not.o(_mm_cmpgt_epi32(zmm0, arg6) ^ arg8)
                            zmm7 = zmm13 & zmm3
                            uint32_t j_2 = _mm_movemask_ps(zmm7)
                            
                            if (j_2 != 0)
                                arg9 = _mm_cmpeq_epi32(arg9, arg9)
                                zmm1 = zmm6
                                
                                do
                                    arg8 = zmm0
                                    int32_t temp0_43[0x4] = _mm_add_epi32(zmm0, zmm0)
                                    zmm0 = _mm_shuffle_epi32(temp0_43, 0x4e)
                                    int32_t temp0_46[0x4] =
                                        _mm_add_epi64(_mm_cvtepi32_epi64(temp0_43[0].q), zmm15)
                                    char temp0_47 = _mm_movemask_ps(zmm7)
                                    float var_458[0x4]
                                    
                                    if ((temp0_47 & 1) != 0)
                                        zmm7 = _mm_insert_epi32(var_458, zx.d(*temp0_46[0].q), 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                        
                                        if ((temp0_47 & 2) != 0)
                                            zmm7 = _mm_insert_epi32(zmm7, 
                                                zx.d(*_mm_extract_epi64(temp0_46, 1)), 1)
                                    else
                                        zmm7 = var_458
                                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                        
                                        if ((temp0_47 & 2) != 0)
                                            zmm7 = _mm_insert_epi32(zmm7, 
                                                zx.d(*_mm_extract_epi64(temp0_46, 1)), 1)
                                    
                                    zmm0 = _mm_add_epi64(zmm0, zmm8)
                                    
                                    if ((temp0_47 & 4) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                                        
                                        if ((temp0_47 & 8) != 0)
                                            zmm7 = _mm_insert_epi32(zmm7, 
                                                zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    else if ((temp0_47 & 8) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    
                                    zmm2 = zx.o(0)
                                    var_458 = zmm7
                                    zmm0 = __pcmpgtd_xmmdq_memdq(
                                        _mm_blend_epi16(zmm7, zx.o(0), 0xaa), var_3c8_1) & zmm3
                                    zmm4 = _mm_blendv_ps(zmm4, zmm1, zmm0)
                                    
                                    if (_mm_movemask_ps(zmm0 & zmm13) != j_2)
                                        zmm2 = zmm0 ^ zmm3
                                    
                                    zmm0 = _mm_sub_epi32(arg8, arg9)
                                    zmm3 = _mm_cmpgt_epi32(zmm0, arg6) & not.o(zmm2)
                                    zmm7 = zmm3 & zmm13
                                    j_2 = _mm_movemask_ps(zmm7)
                                    zmm1 = arg8
                                while (j_2 != 0)
                        
                        uint32_t temp0_61 = _mm_movemask_ps(arg7 & not.o(zmm13))
                        arg8 = _mm_cmpeq_epi32(arg8, arg8)
                        int32_t var_338[0x4]
                        int32_t var_2e8[0x4]
                        
                        if (temp0_61 == 0)
                            arg5 = var_338
                            zmm2 = var_2e8
                            arg7 = var_468_1
                            zmm7 = var_348_1
                        else
                            arg7 ^= arg8
                            zmm1 = zx.o(0)
                            zmm4 = _mm_blendv_ps(zmm4, zmm1, arg7)
                            zmm6 = _mm_add_epi32(zmm6, arg8)
                            zmm3 = _mm_cmpgt_epi32(zmm6, zmm1) & arg7
                            zmm0 = zmm3 & zmm13
                            uint32_t j_3 = _mm_movemask_ps(zmm0)
                            
                            if (j_3 == 0)
                                arg5 = var_338
                                arg7 = var_468_1
                                zmm7 = var_348_1
                            else
                                arg5 = var_338
                                arg7 = var_468_1
                                zmm7 = var_348_1
                                
                                do
                                    zmm1 = _mm_add_epi32(zmm6, zmm6)
                                    zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                                    char temp0_76 = _mm_movemask_ps(zmm0)
                                    
                                    if ((temp0_76 & 1) == 0)
                                        zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                        
                                        if ((temp0_76 & 2) != 0)
                                            goto label_1402dc751
                                        
                                        goto label_1402dc7a7
                                    
                                    arg5 = _mm_insert_epi32(arg5, zx.d(*zmm1.q), 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                    
                                    if ((temp0_76 & 2) != 0)
                                    label_1402dc751:
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                        zmm0 = _mm_add_epi64(zmm0, zmm8)
                                        
                                        if ((temp0_76 & 4) == 0)
                                            goto label_1402dc7b0
                                        
                                        goto label_1402dc768
                                    
                                label_1402dc7a7:
                                    zmm0 = _mm_add_epi64(zmm0, zmm8)
                                    
                                    if ((temp0_76 & 4) != 0)
                                    label_1402dc768:
                                        arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                        
                                        if ((temp0_76 & 8) != 0)
                                            arg5 = _mm_insert_epi32(arg5, 
                                                zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    else
                                    label_1402dc7b0:
                                        
                                        if ((temp0_76 & 8) != 0)
                                            arg5 = _mm_insert_epi32(arg5, 
                                                zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                    
                                    zmm0 = __pcmpgtd_xmmdq_memdq(
                                        _mm_blend_epi16(arg5, zx.o(0), 0xaa), var_3c8_1) & not.o(zmm3)
                                    zmm4 = _mm_blendv_ps(zmm4, zmm6, zmm0)
                                    zmm2 = zx.o(0)
                                    
                                    if (_mm_movemask_ps(zmm0 & zmm13) != j_3)
                                        zmm2 = zmm0 ^ zmm3
                                    
                                    zmm6 = _mm_add_epi32(zmm6, arg8)
                                    zmm3 = _mm_cmpgt_epi32(zmm6, zx.o(0)) & zmm2
                                    zmm0 = zmm3 & zmm13
                                    j_3 = _mm_movemask_ps(zmm0)
                                while (j_3 != 0)
                            
                            zmm2 = var_2e8
                        
                        zmm7 = _mm_blendv_ps(zmm7, zmm4, zmm13)
                        zmm1 = _mm_add_epi32(zmm7, zmm7)
                        zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                        zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                        var_338 = arg5
                        
                        if ((rdi_8 & 1) == 0)
                            arg5 = arg7
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rdi_8 & 2) != 0)
                                goto label_1402dd837
                            
                            goto label_1402dd766
                        
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                        arg5 = arg7
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rdi_8 & 2) != 0)
                        label_1402dd837:
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                            zmm0 = _mm_add_epi64(zmm0, zmm8)
                            
                            if ((rdi_8 & 4) == 0)
                                goto label_1402dd775
                            
                            goto label_1402dd854
                        
                    label_1402dd766:
                        zmm0 = _mm_add_epi64(zmm0, zmm8)
                        
                        if ((rdi_8 & 4) != 0)
                        label_1402dd854:
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                            
                            if ((rdi_8 & 8) != 0)
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                        else
                        label_1402dd775:
                            
                            if ((rdi_8 & 8) != 0)
                                zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                        
                        zmm3 = _mm_blendv_ps(var_408_1, _mm_sub_epi32(zmm7, arg8), zmm13)
                        zmm0 = _mm_cmpgt_epi32(zmm3, arg6) & zmm13
                        
                        if (_mm_movemask_ps(zmm0) != 0)
                            zmm3 = _mm_blendv_ps(zmm3, arg6, zmm0)
                        
                        arg9 = zmm3
                        zmm13 = zmm3
                        zmm1 = _mm_add_epi32(zmm13, zmm13)
                        zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                        zmm15 = _mm_add_epi64(zmm15, _mm_cvtepi32_epi64(zmm1.q))
                        uint128_t var_2c8
                        
                        if ((rdi_8 & 1) != 0)
                            zmm1 = _mm_insert_epi32(var_2c8, zx.d(*zmm15[0].q), 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rdi_8 & 2) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                        else
                            zmm1 = var_2c8
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((rdi_8 & 2) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                        
                        zmm8 = _mm_add_epi64(zmm8, zmm0)
                        
                        if ((rdi_8 & 4) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm8[0].q), 2)
                            
                            if ((rdi_8 & 8) != 0)
                                zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                        else if ((rdi_8 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                        
                        var_2e8 = zmm2
                        zmm0 = _mm_blend_epi16(zmm2, zx.o(0), 0xaa)
                        var_2c8 = zmm1
                        zmm1 = _mm_blend_epi16(zmm1, zx.o(0), 0xaa)
                        var_3e8 = zmm7
                    
                    var_468_1 = arg5
                    zmm2 = zx.o(0)
                    
                    if (arg12 != 1)
                        zmm1 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm1, zmm0), data_142d3f5b0)
                        zmm2 = _mm_div_ps(_mm_sub_ps(var_298_1, _mm_cvtepi32_ps(zmm0)), 
                            _mm_cvtepi32_ps(zmm1))
                    
                    var_308_1 = _mm_blendv_ps(zx.o(0), zmm2, zmm14 ^ arg8)
                    var_328 = var_3e8
                    arg5 = var_508_2
                    rdi_1 = zx.q(r10.d)
                    var_248 = arg9
                    
                    if (r10.d u<= 5)
                        goto label_1402de1cd
            
            if ((temp0_247 & 1) == 0)
                if ((temp0_247 & 2) != 0)
                    goto label_1402dd026
                
                goto label_1402de4c2
            
            var_548 = 0f
            
            if ((temp0_247 & 2) != 0)
            label_1402dd026:
                int32_t var_544_2 = 0
                
                if ((temp0_247 & 4) == 0)
                    goto label_1402de4cb
                
                goto label_1402dd037
            
        label_1402de4c2:
            
            if ((temp0_247 & 4) == 0)
            label_1402de4cb:
                
                if ((temp0_247 & 8) != 0)
                    goto label_1402dd048
                
                goto label_1402de4d4
            
        label_1402dd037:
            int32_t var_540_2 = 0
            
            if ((temp0_247 & 8) != 0)
            label_1402dd048:
                int32_t var_53c_2 = 0
                
                if ((temp0_247 & 1) == 0)
                    goto label_1402de4dd
                
                goto label_1402dd059
            
        label_1402de4d4:
            
            if ((temp0_247 & 1) == 0)
            label_1402de4dd:
                
                if ((temp0_247 & 2) != 0)
                    goto label_1402dd06a
                
                goto label_1402de4e6
            
        label_1402dd059:
            var_538.d = 0
            
            if ((temp0_247 & 2) != 0)
            label_1402dd06a:
                var_538:4.d = 0
                
                if ((temp0_247 & 4) == 0)
                    goto label_1402de4ef
                
                goto label_1402dd07b
            
        label_1402de4e6:
            
            if ((temp0_247 & 4) == 0)
            label_1402de4ef:
                
                if ((temp0_247 & 8) != 0)
                    goto label_1402dd08c
                
                goto label_1402de4f8
            
        label_1402dd07b:
            var_538:8.d = 0
            
            if ((temp0_247 & 8) != 0)
            label_1402dd08c:
                var_538:0xc.d = 0
                
                if ((temp0_247 & 1) == 0)
                    goto label_1402de501
                
                goto label_1402dd09d
            
        label_1402de4f8:
            
            if ((temp0_247 & 1) == 0)
            label_1402de501:
                
                if ((temp0_247 & 2) != 0)
                    goto label_1402dd0ae
                
                goto label_1402de50a
            
        label_1402dd09d:
            var_528[0] = 0
            
            if ((temp0_247 & 2) != 0)
            label_1402dd0ae:
                var_528[1] = 0
                
                if ((temp0_247 & 4) == 0)
                    goto label_1402de513
                
                goto label_1402dd0bf
            
        label_1402de50a:
            
            if ((temp0_247 & 4) == 0)
            label_1402de513:
                
                if ((temp0_247 & 8) != 0)
                    goto label_1402dd0d0
                
                goto label_1402de51c
            
        label_1402dd0bf:
            var_528[2] = 0
            
            if ((temp0_247 & 8) != 0)
            label_1402dd0d0:
                var_528[3] = 0
                
                if ((temp0_247 & 1) == 0)
                    goto label_1402de525
                
                goto label_1402dd0e1
            
        label_1402de51c:
            
            if ((temp0_247 & 1) == 0)
            label_1402de525:
                
                if ((temp0_247 & 2) != 0)
                    goto label_1402dd0f2
                
                goto label_1402de52e
            
        label_1402dd0e1:
            var_518[0] = 0x3f800000
            
            if ((temp0_247 & 2) != 0)
            label_1402dd0f2:
                var_518[1] = 0x3f800000
                
                if ((temp0_247 & 4) == 0)
                    goto label_1402de537
                
                goto label_1402dd103
            
        label_1402de52e:
            
            if ((temp0_247 & 4) != 0)
            label_1402dd103:
                var_518[2] = 0x3f800000
                
                if ((temp0_247 & 8) != 0)
                    var_518[3] = 0x3f800000
            else
            label_1402de537:
                
                if ((temp0_247 & 8) != 0)
                    var_518[3] = 0x3f800000
            
            char temp0_300 = _mm_movemask_ps(_mm_cmpeq_epi32(zmm7, zmm13) & not.o(arg5))
            var_358 = arg9
            
            if (temp0_300 == 0)
                arg8 = _mm_cmpeq_epi32(arg8, arg8)
                arg9 = var_438_1
                arg5 = var_468_1
            else
                float var_348_2[0x4] = zmm7
                
                if (r10.d u<= 5)
                    zmm1 = __pmulld_xmmdq_memdq(zmm13, var_318_1)
                    _mm_cvtepi32_epi64(zmm1.q)
                    _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
                    jump(sx.q(jump_table_1402e465c[rdi_1]) + &jump_table_1402e465c)
                
                uint64_t rsi_1 = zx.q(temp0_300)
                int64_t rdi_11 = rsi_1 & 1
                
                if (rdi_11 == 0)
                    arg7 = data_142d3f5c0
                    
                    if ((rsi_1.b & 2) != 0)
                        goto label_1402dd5d4
                    
                    goto label_1402e01f1
                
                int32_t var_4b8 = 0
                arg7 = data_142d3f5c0
                
                if ((rsi_1.b & 2) != 0)
                label_1402dd5d4:
                    int32_t var_4b4_1 = 0
                    
                    if ((rsi_1.b & 4) == 0)
                        goto label_1402e01fb
                    
                    goto label_1402dd5e9
                
            label_1402e01f1:
                
                if ((rsi_1.b & 4) == 0)
                label_1402e01fb:
                    
                    if ((rsi_1.b & 8) != 0)
                        goto label_1402dd5fe
                    
                    goto label_1402e0205
                
            label_1402dd5e9:
                int32_t var_4b0_1 = 0
                
                if ((rsi_1.b & 8) != 0)
                label_1402dd5fe:
                    int32_t var_4ac_1 = 0
                    
                    if (rdi_11 == 0)
                        goto label_1402e020e
                    
                    goto label_1402dd612
                
            label_1402e0205:
                
                if (rdi_11 == 0)
                label_1402e020e:
                    
                    if ((rsi_1.b & 2) != 0)
                        goto label_1402dd627
                    
                    goto label_1402e0218
                
            label_1402dd612:
                int32_t var_4a8 = 0
                
                if ((rsi_1.b & 2) != 0)
                label_1402dd627:
                    int32_t var_4a4_1 = 0
                    
                    if ((rsi_1.b & 4) == 0)
                        goto label_1402e0222
                    
                    goto label_1402dd63c
                
            label_1402e0218:
                
                if ((rsi_1.b & 4) == 0)
                label_1402e0222:
                    
                    if ((rsi_1.b & 8) != 0)
                        goto label_1402dd651
                    
                    goto label_1402e022c
                
            label_1402dd63c:
                int32_t var_4a0_1 = 0
                
                if ((rsi_1.b & 8) != 0)
                label_1402dd651:
                    int32_t var_49c_1 = 0
                    
                    if (rdi_11 == 0)
                        goto label_1402e0235
                    
                    goto label_1402dd665
                
            label_1402e022c:
                
                if (rdi_11 == 0)
                label_1402e0235:
                    
                    if ((rsi_1.b & 2) != 0)
                        goto label_1402dd67a
                    
                    goto label_1402e023f
                
            label_1402dd665:
                int32_t var_498 = 0
                
                if ((rsi_1.b & 2) != 0)
                label_1402dd67a:
                    int32_t var_494_1 = 0
                    
                    if ((rsi_1.b & 4) == 0)
                        goto label_1402e0249
                    
                    goto label_1402dd68f
                
            label_1402e023f:
                
                if ((rsi_1.b & 4) == 0)
                label_1402e0249:
                    
                    if ((rsi_1.b & 8) != 0)
                        goto label_1402dd6a4
                    
                    goto label_1402e0253
                
            label_1402dd68f:
                int32_t var_490_1 = 0
                
                if ((rsi_1.b & 8) != 0)
                label_1402dd6a4:
                    int32_t var_48c_1 = 0
                    
                    if (rdi_11 == 0)
                        goto label_1402e025c
                    
                    goto label_1402dd6b8
                
            label_1402e0253:
                
                if (rdi_11 == 0)
                label_1402e025c:
                    
                    if ((rsi_1.b & 2) != 0)
                        goto label_1402dd6cd
                    
                    goto label_1402e0266
                
            label_1402dd6b8:
                int32_t var_488 = 0x3f800000
                
                if ((rsi_1.b & 2) != 0)
                label_1402dd6cd:
                    int32_t var_484_1 = 0x3f800000
                    
                    if ((rsi_1.b & 4) == 0)
                        goto label_1402e0270
                    
                    goto label_1402dd6e2
                
            label_1402e0266:
                int32_t var_47c_1
                
                if ((rsi_1.b & 4) != 0)
                label_1402dd6e2:
                    int32_t var_480_1 = 0x3f800000
                    
                    if ((rsi_1.b & 8) != 0)
                        var_47c_1 = 0x3f800000
                else
                label_1402e0270:
                    
                    if ((rsi_1.b & 8) != 0)
                        var_47c_1 = 0x3f800000
                arg9 = var_438_1
                zmm4 = var_548.o
                zmm3 = var_4b8.o
                zmm7 = var_4a8.o
                zmm14 = var_498.o
                arg8 = var_488.o
                zmm0 = _mm_mul_ps(zmm4, zmm3)
                zmm2 = _mm_add_ps(_mm_mul_ps(var_538, zmm7), zmm0)
                zmm0 = _mm_add_ps(_mm_mul_ps(var_528, zmm14), zmm2)
                zmm0 = _mm_cmpeq_ps(zx.o(0), _mm_add_ps(_mm_mul_ps(var_518, arg8), zmm0), 2)
                zmm6 = var_308_1
                zmm3 = _mm_mul_ps(zmm3, zmm6)
                float temp0_315[0x4] = _mm_mul_ps(zmm7, zmm6)
                float temp0_316[0x4] = _mm_mul_ps(zmm14, zmm6)
                arg8 = _mm_mul_ps(arg8, zmm6)
                arg5 = data_142d3f670
                zmm2 = _mm_blendv_ps(data_142d3f7e0, arg5, zmm0)
                zmm0 = _mm_mul_ps(_mm_sub_ps(arg5, zmm6), zmm2)
                float temp0_322[0x4] = _mm_add_ps(_mm_mul_ps(zmm4, zmm0), zmm3)
                zmm1 = _mm_add_ps(_mm_mul_ps(var_538, zmm0), temp0_315)
                arg6 = _mm_add_ps(_mm_mul_ps(var_528, zmm0), temp0_316)
                zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, var_518), arg8)
                float var_168_1[0x4] = temp0_322
                uint128_t var_158_1 = zmm1
                uint32_t var_148_1[0x4] = arg6
                uint128_t var_138_1 = zmm0
                zmm2 = _mm_mul_ps(temp0_322, temp0_322)
                zmm3 = _mm_mul_ps(zmm1, zmm1)
                arg5 = _mm_add_ps(_mm_mul_ps(arg6, arg6), zmm2)
                float temp0_335[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm0, zmm0), zmm3), arg5)
                float temp0_336[0x4] = _mm_cmpeq_ps(arg7, temp0_335, 2)
                arg8 = data_142d3f640
                zmm2 = _mm_mul_ps(temp0_335, arg8)
                zmm3 = _mm_rsqrt_ps(temp0_335)
                arg5 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(arg8, _mm_mul_ps(_mm_mul_ps(zmm3, zmm3), zmm2)), zmm3), 
                    zmm3)
                zmm3 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(arg8, _mm_mul_ps(_mm_mul_ps(arg5, arg5), zmm2)), arg5), 
                    arg5)
                zmm4 = _mm_and_ps(_mm_mul_ps(temp0_322, zmm3), temp0_336)
                
                if (rdi_11 != 0)
                    var_548 = zmm4[0]
                
                arg8 = _mm_cmpeq_epi32(arg8, arg8)
                zmm7 = var_348_2
                arg5 = var_468_1
                
                if ((rsi_1.b & 2) == 0)
                    if ((rsi_1.b & 4) != 0)
                        goto label_1402dc3ca
                    
                    goto label_1402e0403
                
                int32_t var_544_1 = __extractps_memd_xmmps_immb(zmm4, 1)
                
                if ((rsi_1.b & 4) != 0)
                label_1402dc3ca:
                    int32_t var_540_1 = __extractps_memd_xmmps_immb(zmm4, 2)
                    zmm1 = _mm_mul_ps(zmm1, zmm3)
                    
                    if ((rsi_1.b & 8) == 0)
                        goto label_1402e0410
                    
                    goto label_1402dc3df
                
            label_1402e0403:
                zmm1 = _mm_mul_ps(zmm1, zmm3)
                
                if ((rsi_1.b & 8) != 0)
                label_1402dc3df:
                    int32_t var_53c_1 = __extractps_memd_xmmps_immb(zmm4, 3)
                    zmm1 = _mm_and_ps(zmm1, temp0_336)
                    
                    if (rdi_11 != 0)
                        var_538.d = zmm1.d
                else
                label_1402e0410:
                    zmm1 = _mm_and_ps(zmm1, temp0_336)
                    
                    if (rdi_11 != 0)
                        var_538.d = zmm1.d
                
                if ((rsi_1.b & 2) == 0)
                    if ((rsi_1.b & 4) != 0)
                        goto label_1402dc40b
                    
                    goto label_1402e0433
                
                var_538:4.d = __extractps_memd_xmmps_immb(zmm1, 1)
                
                if ((rsi_1.b & 4) != 0)
                label_1402dc40b:
                    var_538:8.d = __extractps_memd_xmmps_immb(zmm1, 2)
                    arg6 = _mm_mul_ps(arg6, zmm3)
                    
                    if ((rsi_1.b & 8) == 0)
                        goto label_1402e0441
                    
                    goto label_1402dc421
                
            label_1402e0433:
                arg6 = _mm_mul_ps(arg6, zmm3)
                
                if ((rsi_1.b & 8) != 0)
                label_1402dc421:
                    var_538:0xc.d = __extractps_memd_xmmps_immb(zmm1, 3)
                    arg6 = _mm_and_ps(arg6, temp0_336)
                    
                    if (rdi_11 != 0)
                        var_528[0] = arg6[0]
                else
                label_1402e0441:
                    arg6 = _mm_and_ps(arg6, temp0_336)
                    
                    if (rdi_11 != 0)
                        var_528[0] = arg6[0]
                
                if ((rsi_1.b & 2) != 0)
                    var_528[1] = __extractps_memd_xmmps_immb(arg6, 1)
                
                zmm2 = _mm_cmpeq_ps(arg7, temp0_335, 6)
                zmm3 = _mm_mul_ps(zmm3, zmm0)
                
                if ((rsi_1.b & 4) == 0)
                    zmm3 = _mm_and_ps(zmm3, temp0_336)
                    zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f670)
                    
                    if ((rsi_1.b & 8) != 0)
                        goto label_1402dc459
                    
                    goto label_1402e048a
                
                var_528[2] = __extractps_memd_xmmps_immb(arg6, 2)
                zmm3 = _mm_and_ps(zmm3, temp0_336)
                zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f670)
                
                if ((rsi_1.b & 8) == 0)
                label_1402e048a:
                    zmm3 = _mm_or_ps(zmm3, zmm2)
                    
                    if (rdi_11 != 0)
                        var_518[0] = zmm3[0]
                else
                label_1402dc459:
                    var_528[3] = __extractps_memd_xmmps_immb(arg6, 3)
                    zmm3 = _mm_or_ps(zmm3, zmm2)
                    
                    if (rdi_11 != 0)
                        var_518[0] = zmm3[0]
                
                if ((rsi_1.b & 2) == 0)
                    if ((rsi_1.b & 4) != 0)
                        goto label_1402dc485
                    
                    goto label_1402e04ac
                
                var_518[1] = __extractps_memd_xmmps_immb(zmm3, 1)
                
                if ((rsi_1.b & 4) == 0)
                label_1402e04ac:
                    
                    if ((rsi_1.b & 8) != 0)
                        var_518[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                else
                label_1402dc485:
                    var_518[2] = __extractps_memd_xmmps_immb(zmm3, 2)
                    
                    if ((rsi_1.b & 8) != 0)
                        var_518[3] = __extractps_memd_xmmps_immb(zmm3, 3)
        
        zmm0 = var_548.o
        zmm2 = var_528
        zmm3 = var_518
        float temp0_363[0x4] = _mm_unpacklo_ps(zmm2, zmm3[0].q)
        zmm2 = _mm_unpackhi_ps(zmm2, zmm3)
        zmm3 = _mm_unpacklo_ps(zmm0, var_538.q)
        zmm0 = _mm_unpackhi_ps(zmm0, var_538)
        zmm1 = zmm3.q | temp0_363[0].q << 0x40
        uint128_t var_1a8_1 = zmm1
        zmm3 = _mm_unpackhi_pd(zmm3, temp0_363[0].q)
        uint32_t var_198_1[0x4] = zmm3
        zmm4 = zmm0[0].q | zmm2[0].q << 0x40
        float var_188_1[0x4] = zmm4
        zmm6 = var_418_1
        arg1[sx.q(zmm6[0]) * 3] = zmm1
        int32_t temp0_368 = _mm_extract_epi32(zmm6, 2)
        zmm0 = _mm_unpackhi_pd(zmm0, zmm2[0].q)
        arg1[sx.q(temp0_368) * 3] = zmm3
        arg1[sx.q(arg9[0]) * 3] = zmm4
        arg1[sx.q(_mm_extract_epi32(arg9, 2)) * 3] = zmm0
        r13 = zx.q(r13.d + 4)
        zmm1 = zmm13
        arg6 = zmm7
    while (r13.d s< i)

uint64_t i_5 = zx.q(arg14)

if (r13.d s< i_5.d)
    zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r13.d), 0), data_142e11d00)
    zmm15 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i_5.d), 0), zmm0)
    zmm0 = _mm_slli_epi32(zmm0, 3) & zmm15
    int64_t rax_102 = sx.q(zmm0.d)
    int64_t rdx_33 = sx.q(_mm_extract_epi32(zmm0, 1))
    int64_t rbx_6 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rsi_3 = sx.q(_mm_extract_epi32(zmm0, 3))
    zmm13 = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(arg2 + rax_102)), *(arg2 + rdx_33), 1), 
            *(arg2 + rbx_6), 2), 
        *(arg2 + rsi_3), 3)
    zmm0 = data_142fc95e0 & zmm15
    int32_t* rax_103 = zx.q(_mm_extract_epi32(zmm0, 1))
    int32_t* rdx_34 = zx.q(_mm_extract_epi32(zmm0, 2))
    int32_t* rbx_7 = zx.q(_mm_extract_epi32(zmm0, 3))
    int32_t temp0_387[0x4] = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(zx.q(zmm0.d) + arg2 + rax_102)), 
                *(rax_103 + arg2 + rdx_33), 1), 
            *(rdx_34 + arg2 + rbx_6), 2), 
        *(rbx_7 + arg2 + rsi_3), 3)
    zmm0 = _mm_slli_epi32(temp0_387, 4) & zmm15
    zmm1 = data_142fc95f0 & zmm15
    int64_t rax_106 = sx.q(zmm0.d) + arg3
    int64_t rcx_15 = sx.q(_mm_extract_epi32(zmm0, 1))
    uint64_t rbx_8 = zx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rcx_16 = rcx_15 + arg3
    int64_t rdx_36 = sx.q(_mm_extract_epi32(zmm0, 2))
    uint64_t rdi_13 = zx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rdx_37 = rdx_36 + arg3
    int64_t rsi_7 = sx.q(_mm_extract_epi32(zmm0, 3)) + arg3
    uint64_t rbp_7 = zx.q(_mm_extract_epi32(zmm1, 3))
    uint128_t var_3c8_2 = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(zx.q(zmm1.d) + rax_106)), *(rbx_8 + rcx_16), 1), 
            *(rdi_13 + rdx_37), 2), 
        *(rbp_7 + rsi_7), 3)
    zmm0 = data_143442650 & zmm15
    uint64_t rbp_8 = zx.q(_mm_extract_epi32(zmm0, 1))
    uint64_t rbx_9 = zx.q(_mm_extract_epi32(zmm0, 2))
    uint64_t r8 = zx.q(_mm_extract_epi32(zmm0, 3))
    zmm0 = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(zx.q(zmm0.d) + rax_106)), *(rbp_8 + rcx_16), 1), 
            *(rbx_9 + rdx_37), 2), 
        *(r8 + rsi_7), 3)
    zmm8 = _mm_cmpeq_epi32(data_142d3f5b0, zmm0)
    zmm2 = zmm8 & zmm15
    char temp0_405 = _mm_movemask_ps(zmm2)
    float var_588[0x4]
    uint32_t var_578[0x4]
    int32_t var_568[0x4]
    float var_558[0x4]
    
    if (temp0_405 != 0)
        float var_458_1[0x4] = zmm8
        float var_468_2[0x4] = zmm13
        zmm13 = zmm15
        zmm3 = zmm2 & var_3c8_2
        int64_t rdx_38 = sx.q(zmm3[0])
        void* rcx_18 = arg4 + rdx_38
        zmm1 = *(arg4 + rdx_38)
        int64_t rdx_40 = sx.q(_mm_extract_epi32(zmm3, 1))
        void* rbp_9 = arg4 + rdx_40
        zmm7 = *(arg4 + rdx_40)
        int64_t rbx_10 = sx.q(_mm_extract_epi32(zmm3, 2))
        void* rdx_42 = arg4 + rbx_10
        int32_t temp0_408 = _mm_extract_epi32(zmm3, 3)
        zmm6 = *(arg4 + rbx_10)
        int64_t rbx_11 = sx.q(temp0_408)
        arg5 = data_142fc95e0 & zmm2
        zmm3 = *(zx.q(arg5[0]) + rcx_18)
        uint64_t rdi_17 = zx.q(_mm_extract_epi32(arg5, 1))
        zmm15 = *(arg4 + rbx_11)
        zmm4 = *(rdi_17 + rbp_9)
        void* rbx_12 = arg4 + rbx_11
        zmm14 = *(zx.q(_mm_extract_epi32(arg5, 2)) + rdx_42)
        arg9 = *(zx.q(_mm_extract_epi32(arg5, 3)) + rbx_12)
        zmm2 &= data_142fc95f0
        arg8 = *(zx.q(zmm2[0]) + rcx_18)
        arg7 = *(zx.q(_mm_extract_epi32(zmm2, 1)) + rbp_9)
        uint32_t (* rcx_20)[0x4] = zx.q(_mm_extract_epi32(zmm2, 2))
        uint64_t rbp_10 = zx.q(_mm_extract_epi32(zmm2, 3))
        arg6 = *(rcx_20 + rdx_42)
        zmm8 = *(rbp_10 + rbx_12)
        
        if ((temp0_405 & 1) == 0)
            if ((temp0_405 & 2) != 0)
                goto label_1402e0f83
            
            goto label_1402e0833
        
        var_588[0] = zmm1.d
        
        if ((temp0_405 & 2) != 0)
        label_1402e0f83:
            var_588[1] = zmm7[0]
            
            if ((temp0_405 & 4) == 0)
                goto label_1402e083c
            
            goto label_1402e0f92
        
    label_1402e0833:
        
        if ((temp0_405 & 4) == 0)
        label_1402e083c:
            
            if ((temp0_405 & 8) != 0)
                goto label_1402e0fa1
            
            goto label_1402e0845
        
    label_1402e0f92:
        var_588[2] = zmm6[0]
        
        if ((temp0_405 & 8) != 0)
        label_1402e0fa1:
            var_588[3] = zmm15[0]
            zmm1 = _mm_insert_ps(zmm1, zmm7, 0x10)
            
            if ((temp0_405 & 1) == 0)
                goto label_1402e0854
            
            goto label_1402e0fb7
        
    label_1402e0845:
        zmm1 = _mm_insert_ps(zmm1, zmm7, 0x10)
        
        if ((temp0_405 & 1) != 0)
        label_1402e0fb7:
            var_578[0] = zmm3[0]
            zmm1 = _mm_insert_ps(zmm1, zmm6, 0x20)
            zmm3 = _mm_insert_ps(zmm3, zmm4, 0x10)
            
            if ((temp0_405 & 2) != 0)
                var_578[1] = zmm4[0]
        else
        label_1402e0854:
            zmm1 = _mm_insert_ps(zmm1, zmm6, 0x20)
            zmm3 = _mm_insert_ps(zmm3, zmm4, 0x10)
            
            if ((temp0_405 & 2) != 0)
                var_578[1] = zmm4[0]
        
        zmm1 = _mm_insert_ps(zmm1, zmm15, 0x30)
        zmm3 = _mm_insert_ps(zmm3, zmm14, 0x20)
        zmm2 = _mm_insert_ps(arg8, arg7, 0x10)
        
        if ((temp0_405 & 4) != 0)
            var_578[2] = zmm14[0]
        
        zmm3 = _mm_insert_ps(zmm3, arg9, 0x30)
        zmm2 = _mm_insert_ps(zmm2, arg6, 0x20)
        zmm1 = _mm_mul_ps(zmm1, zmm1)
        zmm4 = data_142d3f670
        zmm15 = zmm13
        
        if ((temp0_405 & 8) != 0)
            var_578[3] = arg9[0]
        
        zmm2 = _mm_insert_ps(zmm2, zmm8, 0x30)
        float temp0_425[0x4] = _mm_sub_ps(zmm4, zmm1)
        zmm3 = _mm_mul_ps(zmm3, zmm3)
        zmm13 = var_468_2
        
        if ((temp0_405 & 1) == 0)
            zmm4 = _mm_sub_ps(temp0_425, zmm3)
            zmm2 = _mm_mul_ps(zmm2, zmm2)
            
            if ((temp0_405 & 2) != 0)
                goto label_1402e0fed
            
            goto label_1402e08e8
        
        var_568[0] = arg8[0]
        zmm4 = _mm_sub_ps(temp0_425, zmm3)
        zmm2 = _mm_mul_ps(zmm2, zmm2)
        
        if ((temp0_405 & 2) != 0)
        label_1402e0fed:
            var_568[1] = arg7[0]
            zmm4 = _mm_sub_ps(zmm4, zmm2)
            zmm1 = zx.o(0)
            
            if ((temp0_405 & 4) == 0)
                goto label_1402e08f7
            
            goto label_1402e1003
        
    label_1402e08e8:
        zmm4 = _mm_sub_ps(zmm4, zmm2)
        zmm1 = zx.o(0)
        
        if ((temp0_405 & 4) == 0)
        label_1402e08f7:
            zmm1 = _mm_cmpeq_ps(zmm1, zmm4, 1)
            zmm2 = _mm_sqrt_ps(zmm4)
            
            if ((temp0_405 & 8) != 0)
                goto label_1402e101a
            
            goto label_1402e0907
        
    label_1402e1003:
        var_568[2] = arg6[0]
        zmm1 = _mm_cmpeq_ps(zmm1, zmm4, 1)
        zmm2 = _mm_sqrt_ps(zmm4)
        
        if ((temp0_405 & 8) != 0)
        label_1402e101a:
            var_568[3] = zmm8[0]
            zmm1 = _mm_and_ps(zmm1, zmm2)
            
            if ((temp0_405 & 1) == 0)
                goto label_1402e0916
            
            goto label_1402e102d
        
    label_1402e0907:
        zmm1 = _mm_and_ps(zmm1, zmm2)
        
        if ((temp0_405 & 1) == 0)
        label_1402e0916:
            zmm8 = var_458_1
            
            if ((temp0_405 & 2) != 0)
                goto label_1402e1046
            
            goto label_1402e0926
        
    label_1402e102d:
        var_558[0] = zmm1.d
        zmm8 = var_458_1
        
        if ((temp0_405 & 2) != 0)
        label_1402e1046:
            var_558[1] = __extractps_memd_xmmps_immb(zmm1, 1)
            
            if ((temp0_405 & 4) == 0)
                goto label_1402e092f
            
            goto label_1402e1057
        
    label_1402e0926:
        
        if ((temp0_405 & 4) != 0)
        label_1402e1057:
            var_558[2] = __extractps_memd_xmmps_immb(zmm1, 2)
            
            if ((temp0_405 & 8) != 0)
                var_558[3] = __extractps_memd_xmmps_immb(zmm1, 3)
        else
        label_1402e092f:
            
            if ((temp0_405 & 8) != 0)
                var_558[3] = __extractps_memd_xmmps_immb(zmm1, 3)
    
    zmm8 &= not.o(zmm15)
    char temp0_434 = _mm_movemask_ps(zmm8)
    zmm3 = arg11
    
    if (temp0_434 != 0)
        zmm2 = var_3c8_2
        zmm1 = _mm_shuffle_epi32(zmm2, 0x4e)
        zmm4 = _mm_cvtepi32_epi64(zmm2[0].q)
        zmm7 = _mm_cvtepi32_epi64(zmm1.q)
        zmm1 = _mm_cvtepu32_epi64(_mm_shuffle_epi32(zx.o(rax), 0).q)
        zmm2 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
        zmm7 = _mm_add_epi64(zmm7, zmm1)
        float var_428_1[0x4] = _mm_add_epi64(zmm4, zmm1)
        int32_t temp0_443[0x4] = _mm_cmpeq_epi32(arg7, arg7)
        arg5 = data_1434422d0
        int32_t rax_108
        rax_108.b = 0f f>= zmm3[0]
        zmm1 = _mm_shuffle_epi32(zx.o(neg.d(rax_108)) ^ temp0_443, 0)
        arg5 = _mm_cmpgt_epi32(arg5, zmm0) & not.o(zmm1)
        zmm4 = arg5 & zmm8
        uint32_t temp0_446 = _mm_movemask_ps(zmm4)
        float var_438_3[0x4]
        uint64_t r8_1
        
        if (temp0_446 == 0)
            arg9 = zx.o(0)
            arg8 = zx.o(0)
            r8_1 = zx.q(r10.d)
            var_438_3 = zx.o(0)
            
            if (r10.d u<= 5)
            label_1402e1094:
                zmm0 = _mm_mullo_epi32(arg9, zmm2)
                _mm_cvtepi32_epi64(zmm0.q)
                _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
                jump(sx.q(jump_table_1402e4674[r8_1]) + &jump_table_1402e4674)
        else
            int32_t temp0_447[0x4] = _mm_add_epi32(temp0_443, zmm0)
            
            if (zmm3[0] f>= 1f)
                arg9 = _mm_blendv_ps(zx.o(0), temp0_447, zmm4)
                arg8 = arg9
                r8_1 = zx.q(r10.d)
                var_438_3 = zx.o(0)
                
                if (r10.d u<= 5)
                    goto label_1402e1094
            else
                float var_458_2[0x4] = zmm8
                uint32_t var_508_3[0x4] = zmm15
                uint32_t temp0_448[0x4] = _mm_shuffle_epi32(zx.o(arg4), 0x44)
                int32_t var_418_2[0x4] = zmm2
                zmm0 = _mm_mullo_epi32(zmm0, zmm2)
                zmm1 = _mm_cvtepi32_epi64(zmm0.q)
                zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
                zmm8 = _mm_add_epi64(var_428_1, temp0_448)
                zmm15 = _mm_add_epi64(temp0_448, zmm7)
                zmm2 = data_143442a20
                zmm8 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm2), zmm1)
                zmm15 = _mm_add_epi64(_mm_add_epi64(zmm15, zmm2), zmm0)
                zmm0 = data_143442c10
                zmm15 &= zmm0
                zmm8 &= zmm0
                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                zmm1 = _mm_mul_ps(_mm_cvtepi32_ps(temp0_447), zmm0)
                zmm0.d = float.s(arg10 - 1)
                zmm0.d = zmm0.d f* zmm3[0]
                uint128_t var_438_2 = zmm0
                zmm0 = _mm_min_epi32(zx.o(arg10 - 2), _mm_max_epi32(zx.o(int.d(zmm0.d)), zx.o(0)))
                zmm14 = _mm_min_epi32(_mm_max_epi32(_mm_cvttps_epi32(zmm1), zx.o(0)), temp0_447)
                float var_3e8_1[0x4] = zmm7
                int32_t var_468_3[0x4] = arg5
                
                if (arg10 s< 0x100)
                    zmm1 = _mm_shuffle_epi32(zmm14, 0x4e)
                    int32_t temp0_572[0x4] = _mm_add_epi64(_mm_cvtepi32_epi64(zmm14[0].q), zmm8)
                    char rbp_13 = temp0_446.b
                    
                    if ((rbp_13 & 1) == 0)
                        zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                        
                        if ((rbp_13 & 2) != 0)
                            goto label_1402e25ea
                        
                        goto label_1402e13e3
                    
                    arg6 = zx.o(*temp0_572[0].q)
                    zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                    
                    if ((rbp_13 & 2) != 0)
                    label_1402e25ea:
                        arg6 = _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(temp0_572, 1)), 1)
                        zmm1 = _mm_add_epi64(zmm1, zmm15)
                        
                        if ((rbp_13 & 4) == 0)
                            goto label_1402e13f2
                        
                        goto label_1402e2608
                    
                label_1402e13e3:
                    zmm1 = _mm_add_epi64(zmm1, zmm15)
                    
                    if ((rbp_13 & 4) != 0)
                    label_1402e2608:
                        arg6 = _mm_insert_epi32(arg6, zx.d(*zmm1.q), 2)
                        
                        if ((rbp_13 & 8) != 0)
                            arg6 = _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                    else
                    label_1402e13f2:
                        
                        if ((rbp_13 & 8) != 0)
                            arg6 = _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                    
                    arg6 &= data_142ed6810
                    uint32_t temp0_576[0x4] = _mm_shuffle_epi32(zmm0, 0)
                    arg6 = _mm_cmpgt_epi32(arg6, temp0_576)
                    uint128_t var_3f8_3 = arg6 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                    zmm7 = zmm14
                    
                    if (_mm_movemask_ps(arg6 & not.o(zmm4)) != 0)
                        zmm7 = _mm_blendv_ps(zmm14, temp0_447, var_3f8_3)
                        int32_t temp0_581[0x4] = _mm_cmpeq_epi32(temp0_572, temp0_572)
                        zmm0 = _mm_sub_epi32(zmm14, temp0_581)
                        zmm1 = _mm_cmpgt_epi32(zmm0, temp0_447) ^ temp0_581
                        arg6 &= not.o(zmm1)
                        arg9 = zmm4 & arg6
                        uint32_t i_1 = _mm_movemask_ps(arg9)
                        
                        if (i_1 != 0)
                            zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                            zmm6 = zmm14
                            
                            do
                                arg8 = zmm0
                                zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                                int32_t temp0_593[0x4] =
                                    _mm_add_epi64(_mm_cvtepi32_epi64(arg8[0].q), zmm8)
                                char temp0_594 = _mm_movemask_ps(arg9)
                                
                                if ((temp0_594 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_594 & 2) != 0)
                                        goto label_1402e14c1
                                    
                                    goto label_1402e1516
                                
                                arg5 = _mm_insert_epi32(arg5, zx.d(*temp0_593[0].q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((temp0_594 & 2) != 0)
                                label_1402e14c1:
                                    arg5 = _mm_insert_epi32(arg5, 
                                        zx.d(*_mm_extract_epi64(temp0_593, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                                    
                                    if ((temp0_594 & 4) == 0)
                                        goto label_1402e151f
                                    
                                    goto label_1402e14d8
                                
                            label_1402e1516:
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_594 & 4) != 0)
                                label_1402e14d8:
                                    arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_594 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402e151f:
                                    
                                    if ((temp0_594 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = _mm_cmpgt_epi32(arg5 & data_142ed6810, temp0_576) & arg6
                                zmm7 = _mm_blendv_ps(zmm7, zmm6, zmm0)
                                zmm2 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm4) != i_1)
                                    zmm2 = zmm0 ^ arg6
                                
                                zmm0 = _mm_sub_epi32(arg8, zmm1)
                                arg6 = _mm_cmpgt_epi32(zmm0, temp0_447) & not.o(zmm2)
                                arg9 = arg6 & zmm4
                                i_1 = _mm_movemask_ps(arg9)
                                zmm6 = arg8
                            while (i_1 != 0)
                    
                    if (_mm_movemask_ps(_mm_andnot_ps(var_3f8_3, zmm4)) != 0)
                        zmm0 = var_3f8_3 ^ data_142d3f800
                        zmm7 = _mm_blendv_ps(zmm7, zx.o(0), zmm0)
                        arg9 = _mm_cmpeq_epi32(arg9, arg9)
                        zmm14 = _mm_add_epi32(zmm14, arg9)
                        zmm1 = _mm_cmpgt_epi32(zmm14, zx.o(0)) & zmm0
                        zmm0 = zmm1 & zmm4
                        uint32_t i_2 = _mm_movemask_ps(zmm0)
                        
                        if (i_2 != 0)
                            arg6 = data_142ed6810
                            
                            do
                                zmm6 = _mm_shuffle_epi32(zmm14, 0x4e)
                                int32_t temp0_618[0x4] =
                                    _mm_add_epi64(_mm_cvtepi32_epi64(zmm14[0].q), zmm8)
                                char temp0_619 = _mm_movemask_ps(zmm0)
                                
                                if ((temp0_619 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm6[0].q)
                                    
                                    if ((temp0_619 & 2) != 0)
                                        goto label_1402e1621
                                    
                                    goto label_1402e1671
                                
                                arg5 = _mm_insert_epi32(arg5, zx.d(*temp0_618[0].q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm6[0].q)
                                
                                if ((temp0_619 & 2) != 0)
                                label_1402e1621:
                                    arg5 = _mm_insert_epi32(arg5, 
                                        zx.d(*_mm_extract_epi64(temp0_618, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                                    
                                    if ((temp0_619 & 4) == 0)
                                        goto label_1402e167a
                                    
                                    goto label_1402e1638
                                
                            label_1402e1671:
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_619 & 4) != 0)
                                label_1402e1638:
                                    arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_619 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402e167a:
                                    
                                    if ((temp0_619 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = _mm_cmpgt_epi32(arg5 & arg6, temp0_576) & not.o(zmm1)
                                zmm7 = _mm_blendv_ps(zmm7, zmm14, zmm0)
                                zmm6 = zx.o(0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm4) != i_2)
                                    zmm6 = zmm0 ^ zmm1
                                
                                zmm14 = _mm_add_epi32(zmm14, arg9)
                                zmm1 = _mm_cmpgt_epi32(zmm14, zx.o(0)) & zmm6
                                zmm0 = zmm1 & zmm4
                                i_2 = _mm_movemask_ps(zmm0)
                            while (i_2 != 0)
                    
                    zmm2 = var_418_2
                    arg9 = _mm_blendv_ps(zx.o(0), zmm7, zmm4)
                    zmm0 = _mm_shuffle_epi32(arg9, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), zmm8)
                    
                    if ((rbp_13 & 1) == 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        zmm3 = var_468_3
                        
                        if ((rbp_13 & 2) != 0)
                            goto label_1402e264b
                        
                        goto label_1402e1732
                    
                    zmm7 = zx.o(*zmm1.q)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    zmm3 = var_468_3
                    
                    if ((rbp_13 & 2) != 0)
                    label_1402e264b:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = _mm_add_epi64(zmm0, zmm15)
                        
                        if ((rbp_13 & 4) == 0)
                            goto label_1402e1741
                        
                        goto label_1402e2668
                    
                label_1402e1732:
                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                    
                    if ((rbp_13 & 4) != 0)
                    label_1402e2668:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                        
                        if ((rbp_13 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402e1741:
                        
                        if ((rbp_13 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    arg8 = _mm_blendv_ps(zx.o(0), _mm_sub_epi32(arg9, _mm_cmpeq_epi32(zmm0, zmm0)), 
                        zmm4)
                    zmm0 = _mm_cmpgt_epi32(arg8, temp0_447) & zmm4
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        arg8 = _mm_blendv_ps(arg8, temp0_447, zmm0)
                    
                    zmm1 = _mm_shuffle_epi32(arg8, 0x4e)
                    zmm0 = _mm_cvtepi32_epi64(arg8[0].q)
                    zmm8 = _mm_add_epi64(zmm8, zmm0)
                    
                    if ((rbp_13 & 1) == 0)
                        zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                        
                        if ((rbp_13 & 2) != 0)
                            goto label_1402e26a2
                        
                        goto label_1402e17b6
                    
                    zmm0 = zx.o(*zmm8[0].q)
                    zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                    
                    if ((rbp_13 & 2) != 0)
                    label_1402e26a2:
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm8, 1)), 1)
                        zmm8 = var_458_2
                        zmm15 = _mm_add_epi64(zmm15, zmm1)
                        
                        if ((rbp_13 & 4) == 0)
                            goto label_1402e17ce
                        
                        goto label_1402e26c8
                    
                label_1402e17b6:
                    zmm8 = var_458_2
                    zmm15 = _mm_add_epi64(zmm15, zmm1)
                    
                    if ((rbp_13 & 4) != 0)
                    label_1402e26c8:
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm15[0].q), 2)
                        
                        if ((rbp_13 & 8) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                    else
                    label_1402e17ce:
                        
                        if ((rbp_13 & 8) != 0)
                            zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                    
                    zmm15 = var_508_3
                    zmm7 &= data_142ed6810
                    zmm0 &= data_142ed6810
                    zmm14 = zx.o(0)
                    zmm1 = zx.o(0)
                    
                    if (arg12 != 1)
                    label_1402e1815:
                        zmm0 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm0, zmm7), data_142d3f5b0)
                        zmm4 = var_438_2
                        zmm1 = _mm_div_ps(
                            _mm_sub_ps(_mm_shuffle_ps(zmm4, zmm4, 0), _mm_cvtepi32_ps(zmm7)), 
                            _mm_cvtepi32_ps(zmm0))
                else
                    zmm1 = _mm_add_epi32(zmm14, zmm14)
                    zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm3 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm8)
                    char rbp_12 = temp0_446.b
                    
                    if ((rbp_12 & 1) == 0)
                        zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                        
                        if ((rbp_12 & 2) != 0)
                            goto label_1402e24d3
                        
                        goto label_1402e0b22
                    
                    zmm1 = zx.o(*zmm3[0].q)
                    zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                    
                    if ((rbp_12 & 2) != 0)
                    label_1402e24d3:
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                        zmm2 = _mm_add_epi64(zmm2, zmm15)
                        
                        if ((rbp_12 & 4) == 0)
                            goto label_1402e0b31
                        
                        goto label_1402e24f0
                    
                label_1402e0b22:
                    zmm2 = _mm_add_epi64(zmm2, zmm15)
                    
                    if ((rbp_12 & 4) != 0)
                    label_1402e24f0:
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2[0].q), 2)
                        
                        if ((rbp_12 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                    else
                    label_1402e0b31:
                        
                        if ((rbp_12 & 8) != 0)
                            zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                    
                    arg9 = _mm_blend_epi16(zx.o(0), zmm1, 0x55)
                    uint32_t temp0_475[0x4] = _mm_shuffle_epi32(zmm0, 0)
                    arg9 = _mm_cmpgt_epi32(arg9, temp0_475)
                    uint128_t var_3f8_2 = arg9 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                    zmm1 = zmm14
                    
                    if (_mm_movemask_ps(arg9 & not.o(zmm4)) != 0)
                        zmm1 = _mm_blendv_ps(zmm14, temp0_447, var_3f8_2)
                        arg5 = _mm_cmpeq_epi32(arg5, arg5)
                        zmm0 = _mm_sub_epi32(zmm14, arg5)
                        arg9 &= not.o(_mm_cmpgt_epi32(zmm0, temp0_447) ^ arg5)
                        zmm2 = zmm4 & arg9
                        uint32_t i_3 = _mm_movemask_ps(zmm2)
                        
                        if (i_3 != 0)
                            arg5 = zmm14
                            
                            do
                                arg8 = zmm0
                                zmm6 = _mm_add_epi32(zmm0, zmm0)
                                zmm0 = _mm_shuffle_epi32(zmm6, 0x4e)
                                arg6 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm6[0].q), zmm8)
                                char temp0_493 = _mm_movemask_ps(zmm2)
                                
                                if ((temp0_493 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                    
                                    if ((temp0_493 & 2) != 0)
                                        goto label_1402e0c01
                                    
                                    goto label_1402e0c5d
                                
                                zmm7 = _mm_insert_epi32(zmm7, zx.d(*arg6[0].q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((temp0_493 & 2) != 0)
                                label_1402e0c01:
                                    zmm7 =
                                        _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(arg6, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                                    
                                    if ((temp0_493 & 4) == 0)
                                        goto label_1402e0c66
                                    
                                    goto label_1402e0c18
                                
                            label_1402e0c5d:
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_493 & 4) != 0)
                                label_1402e0c18:
                                    zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_493 & 8) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402e0c66:
                                    
                                    if ((temp0_493 & 8) != 0)
                                        zmm7 = _mm_insert_epi32(zmm7, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm2 = zx.o(0)
                                zmm0 = _mm_cmpgt_epi32(_mm_blend_epi16(zmm7, zmm2, 0xaa), temp0_475)
                                    & arg9
                                zmm1 = _mm_blendv_ps(zmm1, arg5, zmm0)
                                
                                if (_mm_movemask_ps(zmm0 & zmm4) != i_3)
                                    zmm2 = zmm0 ^ arg9
                                
                                zmm0 = __psubd_xmmdq_memdq(arg8, data_142d3f800)
                                arg9 = _mm_cmpgt_epi32(zmm0, temp0_447) & not.o(zmm2)
                                zmm2 = arg9 & zmm4
                                i_3 = _mm_movemask_ps(zmm2)
                                arg5 = arg8
                            while (i_3 != 0)
                    
                    if (_mm_movemask_ps(_mm_andnot_ps(var_3f8_2, zmm4)) != 0)
                        zmm0 = var_3f8_2 ^ data_142d3f800
                        zmm1 = _mm_blendv_ps(zmm1, zx.o(0), zmm0)
                        arg9 = _mm_cmpeq_epi32(arg9, arg9)
                        zmm14 = _mm_add_epi32(zmm14, arg9)
                        zmm7 = _mm_cmpgt_epi32(zmm14, zx.o(0)) & zmm0
                        zmm0 = zmm7 & zmm4
                        
                        for (uint32_t i_4 = _mm_movemask_ps(zmm0); i_4 != 0; 
                                i_4 = _mm_movemask_ps(zmm0))
                            int32_t temp0_516[0x4] = _mm_add_epi32(zmm14, zmm14)
                            zmm6 = _mm_shuffle_epi32(temp0_516, 0x4e)
                            int32_t temp0_519[0x4] =
                                _mm_add_epi64(_mm_cvtepi32_epi64(temp0_516[0].q), zmm8)
                            char temp0_520 = _mm_movemask_ps(zmm0)
                            
                            if ((temp0_520 & 1) == 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm6[0].q)
                                
                                if ((temp0_520 & 2) != 0)
                                    goto label_1402e0d61
                                
                                goto label_1402e0db9
                            
                            arg5 = _mm_insert_epi32(arg5, zx.d(*temp0_519[0].q), 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm6[0].q)
                            
                            if ((temp0_520 & 2) != 0)
                            label_1402e0d61:
                                arg5 = _mm_insert_epi32(arg5, 
                                    zx.d(*_mm_extract_epi64(temp0_519, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_520 & 4) == 0)
                                    goto label_1402e0dc2
                                
                                goto label_1402e0d78
                            
                        label_1402e0db9:
                            zmm0 = _mm_add_epi64(zmm0, zmm15)
                            
                            if ((temp0_520 & 4) != 0)
                            label_1402e0d78:
                                arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                
                                if ((temp0_520 & 8) != 0)
                                    arg5 =
                                        _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            else
                            label_1402e0dc2:
                                
                                if ((temp0_520 & 8) != 0)
                                    arg5 =
                                        _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            
                            zmm0 = _mm_cmpgt_epi32(_mm_blend_epi16(arg5, zx.o(0), 0xaa), temp0_475)
                                & not.o(zmm7)
                            zmm1 = _mm_blendv_ps(zmm1, zmm14, zmm0)
                            zmm6 = zx.o(0)
                            
                            if (_mm_movemask_ps(zmm0 & zmm4) != i_4)
                                zmm6 = zmm0 ^ zmm7
                            
                            zmm14 = _mm_add_epi32(zmm14, arg9)
                            zmm7 = _mm_cmpgt_epi32(zmm14, zx.o(0)) & zmm6
                            zmm0 = zmm7 & zmm4
                    
                    arg9 = _mm_blendv_ps(zx.o(0), zmm1, zmm4)
                    zmm1 = _mm_add_epi32(arg9, arg9)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm8)
                    
                    if ((rbp_12 & 1) == 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        zmm3 = var_468_3
                        
                        if ((rbp_12 & 2) != 0)
                            goto label_1402e2532
                        
                        goto label_1402e0e79
                    
                    zmm7 = zx.o(*zmm1.q)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    zmm3 = var_468_3
                    
                    if ((rbp_12 & 2) != 0)
                    label_1402e2532:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = _mm_add_epi64(zmm0, zmm15)
                        
                        if ((rbp_12 & 4) == 0)
                            goto label_1402e0e88
                        
                        goto label_1402e254f
                    
                label_1402e0e79:
                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                    
                    if ((rbp_12 & 4) != 0)
                    label_1402e254f:
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                        
                        if ((rbp_12 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402e0e88:
                        
                        if ((rbp_12 & 8) != 0)
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    arg8 = _mm_blendv_ps(zx.o(0), _mm_sub_epi32(arg9, _mm_cmpeq_epi32(zmm0, zmm0)), 
                        zmm4)
                    zmm0 = _mm_cmpgt_epi32(arg8, temp0_447) & zmm4
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        arg8 = _mm_blendv_ps(arg8, temp0_447, zmm0)
                    
                    int32_t temp0_545[0x4] = _mm_add_epi32(arg8, arg8)
                    zmm0 = _mm_shuffle_epi32(temp0_545, 0x4e)
                    zmm2 = _mm_cvtepi32_epi64(temp0_545[0].q)
                    zmm8 = _mm_add_epi64(zmm8, zmm2)
                    
                    if ((rbp_12 & 1) == 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rbp_12 & 2) != 0)
                            goto label_1402e2589
                        
                        goto label_1402e0f08
                    
                    zmm2 = zx.o(*zmm8[0].q)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rbp_12 & 2) != 0)
                    label_1402e2589:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm8, 1)), 1)
                        zmm8 = var_458_2
                        zmm15 = _mm_add_epi64(zmm15, zmm0)
                        
                        if ((rbp_12 & 4) == 0)
                            goto label_1402e0f20
                        
                        goto label_1402e25af
                    
                label_1402e0f08:
                    zmm8 = var_458_2
                    zmm15 = _mm_add_epi64(zmm15, zmm0)
                    
                    if ((rbp_12 & 4) != 0)
                    label_1402e25af:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm15[0].q), 2)
                        
                        if ((rbp_12 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                    else
                    label_1402e0f20:
                        
                        if ((rbp_12 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                    
                    zmm15 = var_508_3
                    zmm7 = _mm_blend_epi16(zmm7, zx.o(0), 0xaa)
                    zmm0 = _mm_blend_epi16(zx.o(0), zmm2, 0x55)
                    zmm2 = var_418_2
                    zmm14 = zx.o(0)
                    zmm1 = zx.o(0)
                    
                    if (arg12 != 1)
                        goto label_1402e1815
                
                r8_1 = zx.q(r10.d)
                var_438_3 = _mm_blendv_ps(zmm14, zmm1, zmm3)
                
                if (r10.d u<= 5)
                    goto label_1402e1094
        
        if ((temp0_434 & 1) == 0)
            if ((temp0_434 & 2) != 0)
                goto label_1402e27e5
            
            goto label_1402e1334
        
        var_588[0] = 0
        
        if ((temp0_434 & 2) != 0)
        label_1402e27e5:
            var_588[1] = 0
            
            if ((temp0_434 & 4) == 0)
                goto label_1402e133d
            
            goto label_1402e27f6
        
    label_1402e1334:
        
        if ((temp0_434 & 4) == 0)
        label_1402e133d:
            
            if ((temp0_434 & 8) != 0)
                goto label_1402e2807
            
            goto label_1402e1346
        
    label_1402e27f6:
        var_588[2] = 0
        
        if ((temp0_434 & 8) != 0)
        label_1402e2807:
            var_588[3] = 0
            
            if ((temp0_434 & 1) == 0)
                goto label_1402e134f
            
            goto label_1402e2818
        
    label_1402e1346:
        
        if ((temp0_434 & 1) == 0)
        label_1402e134f:
            
            if ((temp0_434 & 2) != 0)
                goto label_1402e2829
            
            goto label_1402e1358
        
    label_1402e2818:
        var_578[0] = 0
        
        if ((temp0_434 & 2) != 0)
        label_1402e2829:
            var_578[1] = 0
            
            if ((temp0_434 & 4) == 0)
                goto label_1402e1361
            
            goto label_1402e283a
        
    label_1402e1358:
        
        if ((temp0_434 & 4) == 0)
        label_1402e1361:
            
            if ((temp0_434 & 8) != 0)
                goto label_1402e284b
            
            goto label_1402e136a
        
    label_1402e283a:
        var_578[2] = 0
        
        if ((temp0_434 & 8) != 0)
        label_1402e284b:
            var_578[3] = 0
            
            if ((temp0_434 & 1) == 0)
                goto label_1402e1373
            
            goto label_1402e285c
        
    label_1402e136a:
        
        if ((temp0_434 & 1) == 0)
        label_1402e1373:
            
            if ((temp0_434 & 2) != 0)
                goto label_1402e286d
            
            goto label_1402e137c
        
    label_1402e285c:
        var_568[0] = 0
        
        if ((temp0_434 & 2) != 0)
        label_1402e286d:
            var_568[1] = 0
            
            if ((temp0_434 & 4) == 0)
                goto label_1402e1385
            
            goto label_1402e287e
        
    label_1402e137c:
        
        if ((temp0_434 & 4) == 0)
        label_1402e1385:
            
            if ((temp0_434 & 8) != 0)
                goto label_1402e288f
            
            goto label_1402e138e
        
    label_1402e287e:
        var_568[2] = 0
        
        if ((temp0_434 & 8) != 0)
        label_1402e288f:
            var_568[3] = 0
            
            if ((temp0_434 & 1) == 0)
                goto label_1402e1397
            
            goto label_1402e28a0
        
    label_1402e138e:
        
        if ((temp0_434 & 1) == 0)
        label_1402e1397:
            
            if ((temp0_434 & 2) != 0)
                goto label_1402e28b1
            
            goto label_1402e13a0
        
    label_1402e28a0:
        var_558[0] = 0x3f800000
        
        if ((temp0_434 & 2) != 0)
        label_1402e28b1:
            var_558[1] = 0x3f800000
            
            if ((temp0_434 & 4) == 0)
                goto label_1402e13a9
            
            goto label_1402e28c2
        
    label_1402e13a0:
        
        if ((temp0_434 & 4) != 0)
        label_1402e28c2:
            var_558[2] = 0x3f800000
            
            if ((temp0_434 & 8) != 0)
                var_558[3] = 0x3f800000
        else
        label_1402e13a9:
            
            if ((temp0_434 & 8) != 0)
                var_558[3] = 0x3f800000
        
        char temp0_683 = _mm_movemask_ps(_mm_srai_epi32(
            _mm_slli_epi32(_mm_cmpeq_epi32(arg9, arg8) & not.o(zmm8), 0x1f), 0x1f))
        
        if (temp0_683 != 0)
            if (r10.d u<= 5)
                int32_t temp0_684[0x4] = _mm_mullo_epi32(arg8, zmm2)
                _mm_cvtepi32_epi64(temp0_684[0].q)
                _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_684, 0x4e).q)
                jump(sx.q(jump_table_1402e468c[r8_1]) + &jump_table_1402e468c)
            
            uint64_t rcx_29 = zx.q(temp0_683)
            int64_t rdx_47 = rcx_29 & 1
            
            if (rdx_47 == 0)
                if ((rcx_29.b & 2) != 0)
                    goto label_1402e40cd
                
                goto label_1402e389e
            
            int32_t var_4f8 = 0
            
            if ((rcx_29.b & 2) != 0)
            label_1402e40cd:
                int32_t var_4f4_1 = 0
                
                if ((rcx_29.b & 4) == 0)
                    goto label_1402e38a7
                
                goto label_1402e40e1
            
        label_1402e389e:
            
            if ((rcx_29.b & 4) == 0)
            label_1402e38a7:
                
                if ((rcx_29.b & 8) != 0)
                    goto label_1402e40f5
                
                goto label_1402e38b0
            
        label_1402e40e1:
            int32_t var_4f0_1 = 0
            
            if ((rcx_29.b & 8) != 0)
            label_1402e40f5:
                int32_t var_4ec_1 = 0
                
                if (rdx_47 == 0)
                    goto label_1402e38b9
                
                goto label_1402e4109
            
        label_1402e38b0:
            
            if (rdx_47 == 0)
            label_1402e38b9:
                
                if ((rcx_29.b & 2) != 0)
                    goto label_1402e411d
                
                goto label_1402e38c2
            
        label_1402e4109:
            int32_t var_4e8 = 0
            
            if ((rcx_29.b & 2) != 0)
            label_1402e411d:
                int32_t var_4e4_1 = 0
                
                if ((rcx_29.b & 4) == 0)
                    goto label_1402e38cb
                
                goto label_1402e4131
            
        label_1402e38c2:
            
            if ((rcx_29.b & 4) == 0)
            label_1402e38cb:
                
                if ((rcx_29.b & 8) != 0)
                    goto label_1402e4145
                
                goto label_1402e38d4
            
        label_1402e4131:
            int32_t var_4e0_1 = 0
            
            if ((rcx_29.b & 8) != 0)
            label_1402e4145:
                int32_t var_4dc_1 = 0
                
                if (rdx_47 == 0)
                    goto label_1402e38dd
                
                goto label_1402e4159
            
        label_1402e38d4:
            
            if (rdx_47 == 0)
            label_1402e38dd:
                
                if ((rcx_29.b & 2) != 0)
                    goto label_1402e416d
                
                goto label_1402e38e6
            
        label_1402e4159:
            int32_t var_4d8 = 0
            
            if ((rcx_29.b & 2) != 0)
            label_1402e416d:
                int32_t var_4d4_1 = 0
                
                if ((rcx_29.b & 4) == 0)
                    goto label_1402e38ef
                
                goto label_1402e4181
            
        label_1402e38e6:
            
            if ((rcx_29.b & 4) == 0)
            label_1402e38ef:
                
                if ((rcx_29.b & 8) != 0)
                    goto label_1402e4195
                
                goto label_1402e38f8
            
        label_1402e4181:
            int32_t var_4d0_1 = 0
            
            if ((rcx_29.b & 8) != 0)
            label_1402e4195:
                int32_t var_4cc_1 = 0
                
                if (rdx_47 == 0)
                    goto label_1402e3901
                
                goto label_1402e41a9
            
        label_1402e38f8:
            
            if (rdx_47 == 0)
            label_1402e3901:
                
                if ((rcx_29.b & 2) != 0)
                    goto label_1402e41bd
                
                goto label_1402e390a
            
        label_1402e41a9:
            int32_t var_4c8 = 0x3f800000
            
            if ((rcx_29.b & 2) != 0)
            label_1402e41bd:
                int32_t var_4c4_1 = 0x3f800000
                
                if ((rcx_29.b & 4) == 0)
                    goto label_1402e3913
                
                goto label_1402e41d1
            
        label_1402e390a:
            int32_t var_4bc_1
            
            if ((rcx_29.b & 4) != 0)
            label_1402e41d1:
                int32_t var_4c0_1 = 0x3f800000
                
                if ((rcx_29.b & 8) != 0)
                    var_4bc_1 = 0x3f800000
            else
            label_1402e3913:
                
                if ((rcx_29.b & 8) != 0)
                    var_4bc_1 = 0x3f800000
            zmm6 = var_4f8.o
            arg5 = var_4e8.o
            arg7 = var_4d8.o
            arg6 = var_4c8.o
            zmm0 = _mm_mul_ps(var_588, zmm6)
            zmm1 = _mm_add_ps(_mm_mul_ps(var_578, arg5), zmm0)
            zmm0 = _mm_add_ps(_mm_mul_ps(var_568, arg7), zmm1)
            zmm0 = _mm_cmpeq_ps(zx.o(0), _mm_add_ps(_mm_mul_ps(var_558, arg6), zmm0), 2)
            float temp0_696[0x4] = _mm_mul_ps(zmm6, var_438_3)
            arg5 = _mm_mul_ps(arg5, var_438_3)
            arg7 = _mm_mul_ps(arg7, var_438_3)
            arg6 = _mm_mul_ps(arg6, var_438_3)
            zmm1 = data_142d3f670
            float temp0_700[0x4] = _mm_blendv_ps(data_142d3f7e0, zmm1, zmm0)
            zmm1 = _mm_mul_ps(_mm_sub_ps(zmm1, var_438_3), temp0_700)
            float temp0_704[0x4] = _mm_add_ps(_mm_mul_ps(var_588, zmm1), temp0_696)
            zmm3 = _mm_add_ps(_mm_mul_ps(var_578, zmm1), arg5)
            zmm2 = _mm_add_ps(_mm_mul_ps(var_568, zmm1), arg7)
            zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, var_558), arg6)
            uint32_t var_218_1[0x4] = zmm3
            int32_t var_208_1[0x4] = zmm2
            uint128_t var_1f8_1 = zmm1
            float temp0_711[0x4] = _mm_mul_ps(temp0_704, temp0_704)
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            zmm2 = _mm_add_ps(_mm_mul_ps(zmm2, zmm2), temp0_711)
            zmm1 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm1, zmm1), zmm3), zmm2)
            zmm2 = data_142d3f5c0
            zmm3 = _mm_cmpeq_ps(zmm2, zmm1, 2)
            zmm0 = data_142d3f640
            float temp0_719[0x4] = _mm_mul_ps(zmm1, zmm0)
            float var_128_1[0x4] = temp0_719
            float var_118_1[0x4] = temp0_719
            float var_108_1[0x4] = temp0_719
            float var_f8_1[0x4] = temp0_719
            arg5 = _mm_rsqrt_ps(zmm1)
            float temp0_725[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm0, _mm_mul_ps(_mm_mul_ps(arg5, arg5), temp0_719)), arg5), 
                arg5)
            zmm0 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm0, _mm_mul_ps(_mm_mul_ps(temp0_725, temp0_725), temp0_719)), 
                    temp0_725), 
                temp0_725)
            float temp0_731[0x4] = _mm_mul_ps(temp0_704, zmm0)
            float temp0_732[0x4] = _mm_mul_ps(var_218_1, zmm0)
            arg5 = _mm_mul_ps(var_208_1, zmm0)
            zmm0 = __mulps_xmmps_memps(zmm0, var_1f8_1)
            zmm6 = _mm_and_ps(temp0_731, zmm3)
            
            if (rdx_47 != 0)
                var_588[0] = zmm6[0]
            
            if ((rcx_29.b & 2) != 0)
                var_588[1] = __extractps_memd_xmmps_immb(zmm6, 1)
                
                if ((rcx_29.b & 4) != 0)
                label_1402e4553:
                    var_588[2] = __extractps_memd_xmmps_immb(zmm6, 2)
                    
                    if ((rcx_29.b & 8) == 0)
                        goto label_1402e437d
                    
                    goto label_1402e4564
            else if ((rcx_29.b & 4) != 0)
                goto label_1402e4553
            
            if ((rcx_29.b & 8) != 0)
            label_1402e4564:
                var_588[3] = __extractps_memd_xmmps_immb(zmm6, 3)
                zmm4 = _mm_and_ps(temp0_732, zmm3)
                
                if (rdx_47 != 0)
                    var_578[0] = zmm4[0]
            else
            label_1402e437d:
                zmm4 = _mm_and_ps(temp0_732, zmm3)
                
                if (rdx_47 != 0)
                    var_578[0] = zmm4[0]
            
            if ((rcx_29.b & 2) != 0)
                var_578[1] = __extractps_memd_xmmps_immb(zmm4, 1)
                
                if ((rcx_29.b & 4) != 0)
                label_1402e458e:
                    var_578[2] = __extractps_memd_xmmps_immb(zmm4, 2)
                    
                    if ((rcx_29.b & 8) == 0)
                        goto label_1402e43a6
                    
                    goto label_1402e459f
            else if ((rcx_29.b & 4) != 0)
                goto label_1402e458e
            
            if ((rcx_29.b & 8) != 0)
            label_1402e459f:
                var_578[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                arg5 = _mm_and_ps(arg5, zmm3)
                
                if (rdx_47 != 0)
                    var_568[0] = arg5[0]
            else
            label_1402e43a6:
                arg5 = _mm_and_ps(arg5, zmm3)
                
                if (rdx_47 != 0)
                    var_568[0] = arg5[0]
            
            if ((rcx_29.b & 2) == 0)
                zmm2 = _mm_cmpeq_ps(zmm2, zmm1, 6)
                
                if ((rcx_29.b & 4) != 0)
                    goto label_1402e45cd
                
                goto label_1402e43ca
            
            var_568[1] = __extractps_memd_xmmps_immb(arg5, 1)
            zmm2 = _mm_cmpeq_ps(zmm2, zmm1, 6)
            
            if ((rcx_29.b & 4) != 0)
            label_1402e45cd:
                var_568[2] = __extractps_memd_xmmps_immb(arg5, 2)
                zmm0 = _mm_and_ps(zmm0, zmm3)
                zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f670)
                
                if ((rcx_29.b & 8) == 0)
                    goto label_1402e43dd
                
                goto label_1402e45e8
            
        label_1402e43ca:
            zmm0 = _mm_and_ps(zmm0, zmm3)
            zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f670)
            
            if ((rcx_29.b & 8) != 0)
            label_1402e45e8:
                var_568[3] = __extractps_memd_xmmps_immb(arg5, 3)
                zmm0 = _mm_or_ps(zmm0, zmm2)
                
                if (rdx_47 != 0)
                    var_558[0] = zmm0.d
            else
            label_1402e43dd:
                zmm0 = _mm_or_ps(zmm0, zmm2)
                
                if (rdx_47 != 0)
                    var_558[0] = zmm0.d
            
            if ((rcx_29.b & 2) == 0)
                if ((rcx_29.b & 4) != 0)
                    goto label_1402e4612
                
                goto label_1402e43fd
            
            var_558[1] = __extractps_memd_xmmps_immb(zmm0, 1)
            
            if ((rcx_29.b & 4) == 0)
            label_1402e43fd:
                
                if ((rcx_29.b & 8) != 0)
                    var_558[3] = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_1402e4612:
                var_558[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((rcx_29.b & 8) != 0)
                    var_558[3] = __extractps_memd_xmmps_immb(zmm0, 3)
    
    zmm0 = var_588
    zmm1 = var_578
    zmm3 = var_558
    zmm4 = _mm_unpacklo_epi32(var_568, zmm3[0].q)
    int32_t temp0_744[0x4] = _mm_unpackhi_epi32(var_568, zmm3[0].q)
    zmm3 = _mm_unpacklo_epi32(zmm0, zmm1.q)
    zmm0 = _mm_unpackhi_epi32(zmm0, zmm1.q)
    uint128_t var_1e8 = _mm_unpacklo_epi64(zmm3, zmm4[0].q)
    uint32_t var_1d8_1[0x4] = _mm_unpackhi_epi64(zmm3, zmm4[0].q)
    uint128_t var_1c8_1 = _mm_unpacklo_epi64(zmm0, temp0_744[0].q)
    uint128_t var_1b8_1 = _mm_unpackhi_epi64(zmm0, temp0_744[0].q)
    i_5 = zx.q(_mm_movemask_ps(zmm15))
    
    do
        uint64_t rcx_30
        uint64_t rflags_1
        
        if (i_5 == 0)
            rcx_30 = 0x40
        else
            rcx_30, rflags_1 = _bit_scan_forward(i_5)
        float var_238[0x4] = zmm13
        arg1[sx.q(var_238[zx.q(rcx_30.d) & 3]) * 3] = (&var_1e8)[rcx_30]
        i_5 &= rol.q(-2, rcx_30.b)
    while (i_5 != 0)

return i_5
