// 函数: sub_1402ec850
// 地址: 0x1402ec850
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
uint128_t* r15 = arg2
uint128_t* r12 = arg1
int64_t r10 = sx.q(arg13)
int32_t rcx_1 = *(&data_143442f20 + (r10 << 2)) * *(&data_143442f00 + (r10 << 2))
uint64_t r13 = 0
int32_t rax = 0x18

if (r10 != 3)
    rax = 0

int32_t i = ((arg14 s>> 0x1f u>> 0x1e) + arg14) & 0xfffffffc
uint128_t* var_3d8 = r12
uint128_t* var_470 = arg4
int64_t var_398 = r10
uint128_t var_508
int32_t var_468[0x4]
float var_458[0x4]
uint128_t var_418
float var_3f8[0x4]
float var_378[0x4]
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
    uint128_t* var_388_1 = r15
    int32_t i_6 = i
    
    do
        int64_t rax_88 = sx.q((r13 << 3).d)
        zmm0 = *(r15 + rax_88)
        arg9 = *(r15 + rax_88 + 0x10)
        var_418 = zmm0
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, arg9, 0xdd), 4)
        int64_t rax_90 = sx.q(zmm0.d)
        int64_t rcx_8 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rdx_29 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rbp_4 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm7 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_90 + 8)), *(arg3 + rcx_8 + 8), 1), 
                *(arg3 + rdx_29 + 8), 2), 
            *(arg3 + rbp_4 + 8), 3)
        arg7 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_90 + 0xc)), *(arg3 + rcx_8 + 0xc), 1), 
                *(arg3 + rdx_29 + 0xc), 2), 
            *(arg3 + rbp_4 + 0xc), 3)
        zmm6 = __pcmpeqd_xmmdq_memdq(arg7, data_142d3f5b0)
        char temp0_307 = _mm_movemask_ps(zmm6)
        var_468 = arg5
        float var_438_1[0x4] = arg9
        var_3f8 = zmm7
        var_378 = zmm6
        float var_548
        uint128_t var_538
        uint32_t var_528[0x4]
        float var_518[0x4]
        
        if (temp0_307 != 0)
            var_508 = zmm1
            zmm1 = zmm6 & zmm7
            int64_t rdx_30 = sx.q(zmm1.d)
            void* rcx_10 = arg4 + rdx_30
            int32_t temp0_308 = _mm_extract_epi32(zmm1, 1)
            zmm0 = *(arg4 + rdx_30)
            int64_t rdx_31 = sx.q(temp0_308)
            void* rbp_6 = arg4 + rdx_31
            zmm8 = *(arg4 + rdx_31)
            int64_t rbx_1 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* rdx_33 = arg4 + rbx_1
            zmm3 = *(arg4 + rbx_1)
            int32_t temp0_310 = _mm_extract_epi32(zmm1, 3)
            arg5 = zmm6 & data_142fc95e0
            zmm2 = *(zx.q(arg5[0]) + rcx_10)
            int64_t rbx_3 = sx.q(temp0_310)
            zmm4 = *(zx.q(_mm_extract_epi32(arg5, 1)) + rbp_6)
            uint64_t rdi_4 = zx.q(_mm_extract_epi32(arg5, 2))
            zmm7 = *(arg4 + rbx_3)
            zmm1 = *(rdi_4 + rdx_33)
            void* rbx_4 = arg4 + rbx_3
            arg9 = *(zx.q(_mm_extract_epi32(arg5, 3)) + rbx_4)
            arg5 = zmm6 & data_142fc95f0
            zmm15 = *(zx.q(arg5[0]) + rcx_10)
            zmm14 = *(zx.q(_mm_extract_epi32(arg5, 1)) + rbp_6)
            uint64_t rcx_12 = zx.q(_mm_extract_epi32(arg5, 2))
            uint64_t rbp_7 = zx.q(_mm_extract_epi32(arg5, 3))
            zmm13 = *(rcx_12 + rdx_33)
            arg8 = *(rbp_7 + rbx_4)
            
            if ((temp0_307 & 1) == 0)
                if ((temp0_307 & 2) != 0)
                    goto label_1402ee5c0
                
                goto label_1402ee3ba
            
            var_548 = zmm0.d
            
            if ((temp0_307 & 2) != 0)
            label_1402ee5c0:
                float var_544_5 = zmm8[0]
                
                if ((temp0_307 & 4) == 0)
                    goto label_1402ee3c4
                
                goto label_1402ee5d1
            
        label_1402ee3ba:
            
            if ((temp0_307 & 4) == 0)
            label_1402ee3c4:
                
                if ((temp0_307 & 8) != 0)
                    goto label_1402ee5e1
                
                goto label_1402ee3ce
            
        label_1402ee5d1:
            uint32_t var_540_8 = zmm3[0]
            
            if ((temp0_307 & 8) != 0)
            label_1402ee5e1:
                float var_53c_9 = zmm7[0]
                zmm0 = _mm_insert_ps(zmm0, zmm8, 0x10)
                
                if ((temp0_307 & 1) == 0)
                    goto label_1402ee3df
                
                goto label_1402ee5f8
            
        label_1402ee3ce:
            zmm0 = _mm_insert_ps(zmm0, zmm8, 0x10)
            
            if ((temp0_307 & 1) != 0)
            label_1402ee5f8:
                var_538.d = zmm2[0]
                zmm0 = _mm_insert_ps(zmm0, zmm3, 0x20)
                zmm2 = _mm_insert_ps(zmm2, zmm4, 0x10)
                
                if ((temp0_307 & 2) != 0)
                    var_538:4.d = zmm4[0]
            else
            label_1402ee3df:
                zmm0 = _mm_insert_ps(zmm0, zmm3, 0x20)
                zmm2 = _mm_insert_ps(zmm2, zmm4, 0x10)
                
                if ((temp0_307 & 2) != 0)
                    var_538:4.d = zmm4[0]
            
            zmm0 = _mm_insert_ps(zmm0, zmm7, 0x30)
            zmm2 = _mm_insert_ps(zmm2, zmm1, 0x20)
            zmm3 = _mm_insert_ps(zmm15, zmm14, 0x10)
            
            if ((temp0_307 & 4) != 0)
                var_538:8.d = zmm1.d
            
            zmm2 = _mm_insert_ps(zmm2, arg9, 0x30)
            zmm3 = _mm_insert_ps(zmm3, zmm13, 0x20)
            zmm0 = _mm_mul_ps(zmm0, zmm0)
            zmm7 = var_3f8
            
            if ((temp0_307 & 8) != 0)
                var_538:0xc.d = arg9[0]
            
            zmm3 = _mm_insert_ps(zmm3, arg8, 0x30)
            zmm1 = _mm_sub_ps(data_142d3f670, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm2)
            
            if ((temp0_307 & 1) != 0)
                var_528[0] = zmm15[0]
            
            zmm1 = _mm_sub_ps(zmm1, zmm2)
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            arg9 = var_438_1
            
            if ((temp0_307 & 2) != 0)
                var_528[1] = zmm14[0]
            
            zmm1 = _mm_sub_ps(zmm1, zmm3)
            
            if ((temp0_307 & 4) != 0)
                var_528[2] = zmm13[0]
            
            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
            zmm1 = _mm_sqrt_ps(zmm1)
            
            if ((temp0_307 & 8) == 0)
                zmm0 = _mm_and_ps(zmm0, zmm1)
                zmm6 = var_378
                
                if ((temp0_307 & 1) != 0)
                    goto label_1402ee63c
                
                goto label_1402ee4c0
            
            var_528[3] = arg8[0]
            zmm0 = _mm_and_ps(zmm0, zmm1)
            zmm6 = var_378
            
            if ((temp0_307 & 1) != 0)
            label_1402ee63c:
                var_518[0] = zmm0.d
                arg8 = _mm_cmpeq_epi32(arg8, arg8)
                zmm1 = var_508
                
                if ((temp0_307 & 2) == 0)
                    goto label_1402ee4d3
                
                goto label_1402ee659
            
        label_1402ee4c0:
            arg8 = _mm_cmpeq_epi32(arg8, arg8)
            zmm1 = var_508
            
            if ((temp0_307 & 2) == 0)
            label_1402ee4d3:
                
                if ((temp0_307 & 4) != 0)
                    goto label_1402ee66b
                
                goto label_1402ee4dd
            
        label_1402ee659:
            var_518[1] = __extractps_memd_xmmps_immb(zmm0, 1)
            
            if ((temp0_307 & 4) == 0)
            label_1402ee4dd:
                
                if ((temp0_307 & 8) != 0)
                    var_518[3] = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_1402ee66b:
                var_518[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((temp0_307 & 8) != 0)
                    var_518[3] = __extractps_memd_xmmps_immb(zmm0, 3)
        
        arg5 = zmm6 ^ arg8
        char temp0_337 = _mm_movemask_ps(arg5)
        
        if (temp0_337 == 0)
            zmm7 = arg6
            zmm13 = zmm1
            arg5 = var_468
        else
            zmm0 = _mm_shuffle_epi32(zmm7, 0x4e)
            zmm3 = _mm_cvtepi32_epi64(zmm7[0].q)
            zmm8 = _mm_cvtepi32_epi64(zmm0.q)
            zmm14 = _mm_cmpgt_epi32(data_1434422d0, arg7) | var_268_1
            zmm0 = zmm14 & arg5
            uint32_t temp0_342 = _mm_movemask_ps(zmm0)
            int32_t temp0_343[0x4] = _mm_cmpeq_epi32(zmm2, zmm2)
            float var_408_1[0x4]
            uint32_t var_3e8[0x4]
            float var_358[0x4]
            uint128_t var_328
            uint128_t var_248
            
            if (temp0_342 == 0)
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
            uint32_t temp0_355 = _mm_movemask_ps(zmm13)
            uint32_t var_3a8_1[0x4] = zmm3
            var_508 = arg5
            float var_3b8[0x4]
            uint128_t var_308_1
            uint64_t rdi_1
            
            if (temp0_355 != 0)
                var_308_1 = zx.o(0)
                arg6 = _mm_add_epi32(arg7, temp0_343)
                
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
                        goto label_1402ee836
                    
                    goto label_1402eeb20
                
                int32_t temp0_357[0x4] = __pmulld_xmmdq_memdq(arg7, var_318_1)
                zmm0 = _mm_shuffle_epi32(temp0_357, 0x4e)
                var_3b8 = zmm8
                zmm8 = _mm_add_epi64(zmm8, var_278_1)
                zmm15 = _mm_add_epi64(zmm3, var_278_1)
                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                zmm1 = _mm_cvtepi32_epi64(temp0_357[0].q)
                zmm2 = data_143442a20
                zmm8 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm2), zmm0)
                zmm15 = _mm_add_epi64(_mm_add_epi64(zmm15, zmm2), zmm1)
                zmm0 = data_143442c10
                zmm15 &= zmm0
                zmm8 &= zmm0
                zmm6 = _mm_min_epi32(
                    __pmaxsd_xmmdq_memdq(
                        _mm_cvttps_epi32(__mulps_xmmps_memps(_mm_cvtepi32_ps(arg6), var_288_1)), 
                        data_142d8f750), 
                    arg6)
                
                if (arg10 s< 0x100)
                    zmm0 = _mm_shuffle_epi32(zmm6, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm6[0].q), zmm15)
                    char rdi_19 = temp0_355.b
                    arg8 = _mm_cmpeq_epi32(arg8, arg8)
                    zmm3 = var_468
                    int32_t var_2b8[0x4]
                    
                    if ((rdi_19 & 1) != 0)
                        zmm2 = _mm_insert_epi32(var_2b8, zx.d(*zmm1.q), 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rdi_19 & 2) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    else
                        zmm2 = var_2b8
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rdi_19 & 2) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    
                    zmm0 = _mm_add_epi64(zmm0, zmm8)
                    float var_358_1[0x4]
                    
                    if ((rdi_19 & 4) != 0)
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                        var_358_1 = arg9
                        arg9 = zmm3
                        
                        if ((rdi_19 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                        var_358_1 = arg9
                        arg9 = zmm3
                        
                        if ((rdi_19 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    int32_t temp0_92[0x4] = __pcmpgtd_xmmdq_memdq(zmm2 & data_142ed6810, var_3c8_1)
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
                                    zmm3 =
                                        _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                var_428 = zmm3
                                zmm0 =
                                    __pcmpgtd_xmmdq_memdq(zmm3 & data_142ed6810, var_3c8_1) & arg5
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
                                        goto label_1402ed111
                                    
                                    goto label_1402ed15f
                                
                                arg5 = _mm_insert_epi32(arg5, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((temp0_128 & 2) != 0)
                                label_1402ed111:
                                    arg5 =
                                        _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm8)
                                    
                                    if ((temp0_128 & 4) == 0)
                                        goto label_1402ed168
                                    
                                    goto label_1402ed128
                                
                            label_1402ed15f:
                                zmm0 = _mm_add_epi64(zmm0, zmm8)
                                
                                if ((temp0_128 & 4) != 0)
                                label_1402ed128:
                                    arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_128 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402ed168:
                                    
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
                    
                    if ((rdi_19 & 1) == 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rdi_19 & 2) != 0)
                            goto label_1402ee089
                        
                        goto label_1402edfd2
                    
                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rdi_19 & 2) != 0)
                    label_1402ee089:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = _mm_add_epi64(zmm0, zmm8)
                        
                        if ((rdi_19 & 4) == 0)
                            goto label_1402edfe1
                        
                        goto label_1402ee0a6
                    
                label_1402edfd2:
                    zmm0 = _mm_add_epi64(zmm0, zmm8)
                    
                    if ((rdi_19 & 4) != 0)
                    label_1402ee0a6:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                        
                        if ((rdi_19 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402edfe1:
                        
                        if ((rdi_19 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    arg9 = _mm_blendv_ps(arg9, _mm_sub_epi32(var_3e8, arg8), zmm13)
                    zmm0 = _mm_cmpgt_epi32(arg9, arg6) & zmm13
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        arg9 = _mm_blendv_ps(arg9, arg6, zmm0)
                    
                    zmm13 = arg9
                    zmm0 = _mm_shuffle_epi32(arg9, 0x4e)
                    zmm15 = _mm_add_epi64(zmm15, _mm_cvtepi32_epi64(arg9[0].q))
                    uint32_t var_2d8[0x4]
                    
                    if ((rdi_19 & 1) != 0)
                        zmm3 = _mm_insert_epi32(var_2d8, zx.d(*zmm15[0].q), 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rdi_19 & 2) != 0)
                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                    else
                        zmm3 = var_2d8
                        zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                        
                        if ((rdi_19 & 2) != 0)
                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm15, 1)), 1)
                    
                    zmm8 = _mm_add_epi64(zmm8, zmm0)
                    
                    if ((rdi_19 & 4) != 0)
                        zmm3 = _mm_insert_epi32(zmm3, zx.d(*zmm8[0].q), 2)
                        
                        if ((rdi_19 & 8) != 0)
                            zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                    else if ((rdi_19 & 8) != 0)
                        zmm3 = _mm_insert_epi32(zmm3, zx.d(*_mm_extract_epi64(zmm8, 1)), 3)
                    
                    zmm8 = var_3b8
                    var_2f8 = zmm2
                    zmm1 = data_142ed6810
                    zmm0 = zmm2 & zmm1
                    var_2d8 = zmm3
                    zmm1 &= zmm3
                    zmm7 = var_3e8
                    zmm3 = var_3a8_1
                else
                    zmm1 = _mm_add_epi32(zmm6, zmm6)
                    zmm0 = _mm_shuffle_epi32(zmm1, 0x4e)
                    zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                    char rdi_8 = temp0_355.b
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
                                    zmm7 =
                                        _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm2 = zx.o(0)
                                var_458 = zmm7
                                zmm0 = __pcmpgtd_xmmdq_memdq(_mm_blend_epi16(zmm7, zx.o(0), 0xaa), 
                                    var_3c8_1) & zmm3
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
                        arg7 = var_468
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
                            arg7 = var_468
                            zmm7 = var_348_1
                        else
                            arg5 = var_338
                            arg7 = var_468
                            zmm7 = var_348_1
                            
                            do
                                zmm1 = _mm_add_epi32(zmm6, zmm6)
                                zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm15)
                                char temp0_76 = _mm_movemask_ps(zmm0)
                                
                                if ((temp0_76 & 1) == 0)
                                    zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                    
                                    if ((temp0_76 & 2) != 0)
                                        goto label_1402ecdc1
                                    
                                    goto label_1402ece17
                                
                                arg5 = _mm_insert_epi32(arg5, zx.d(*zmm1.q), 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
                                
                                if ((temp0_76 & 2) != 0)
                                label_1402ecdc1:
                                    arg5 =
                                        _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                                    zmm0 = _mm_add_epi64(zmm0, zmm8)
                                    
                                    if ((temp0_76 & 4) == 0)
                                        goto label_1402ece20
                                    
                                    goto label_1402ecdd8
                                
                            label_1402ece17:
                                zmm0 = _mm_add_epi64(zmm0, zmm8)
                                
                                if ((temp0_76 & 4) != 0)
                                label_1402ecdd8:
                                    arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                    
                                    if ((temp0_76 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                else
                                label_1402ece20:
                                    
                                    if ((temp0_76 & 8) != 0)
                                        arg5 = _mm_insert_epi32(arg5, 
                                            zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                                
                                zmm0 = __pcmpgtd_xmmdq_memdq(_mm_blend_epi16(arg5, zx.o(0), 0xaa), 
                                    var_3c8_1) & not.o(zmm3)
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
                            goto label_1402edea7
                        
                        goto label_1402eddd6
                    
                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm1.q), 0)
                    arg5 = arg7
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rdi_8 & 2) != 0)
                    label_1402edea7:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                        zmm0 = _mm_add_epi64(zmm0, zmm8)
                        
                        if ((rdi_8 & 4) == 0)
                            goto label_1402edde5
                        
                        goto label_1402edec4
                    
                label_1402eddd6:
                    zmm0 = _mm_add_epi64(zmm0, zmm8)
                    
                    if ((rdi_8 & 4) != 0)
                    label_1402edec4:
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm0.q), 2)
                        
                        if ((rdi_8 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    else
                    label_1402edde5:
                        
                        if ((rdi_8 & 8) != 0)
                            zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                    
                    zmm3 = _mm_blendv_ps(var_408_1, _mm_sub_epi32(zmm7, arg8), zmm13)
                    zmm0 = _mm_cmpgt_epi32(zmm3, arg6) & zmm13
                    
                    if (_mm_movemask_ps(zmm0) != 0)
                        zmm3 = _mm_blendv_ps(zmm3, arg6, zmm0)
                    
                    arg9 = zmm3
                    zmm13 = zmm3
                    zmm3 = var_3a8_1
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
                    
                    zmm8 = var_3b8
                    var_2e8 = zmm2
                    zmm0 = _mm_blend_epi16(zmm2, zx.o(0), 0xaa)
                    var_2c8 = zmm1
                    zmm1 = _mm_blend_epi16(zmm1, zx.o(0), 0xaa)
                    var_3e8 = zmm7
                
                var_468 = arg5
                zmm2 = zx.o(0)
                
                if (arg12 != 1)
                    zmm1 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm1, zmm0), data_142d3f5b0)
                    zmm2 = _mm_div_ps(_mm_sub_ps(var_298_1, _mm_cvtepi32_ps(zmm0)), 
                        _mm_cvtepi32_ps(zmm1))
                
                var_308_1 = _mm_blendv_ps(zx.o(0), zmm2, zmm14 ^ arg8)
                var_328 = var_3e8
                arg5 = var_508
                rdi_1 = zx.q(r10.d)
                var_248 = arg9
                
                if (r10.d u<= 5)
                    goto label_1402ee836
                
                goto label_1402eeb20
            
            var_308_1 = zx.o(0)
            var_328 = zmm4
            zmm7 = arg6
            zmm13 = zmm1
            rdi_1 = zx.q(r10.d)
            var_248 = var_408_1
            
            if (r10.d u> 5)
            label_1402eeb20:
                
                if ((temp0_337 & 1) == 0)
                    if ((temp0_337 & 2) != 0)
                        goto label_1402ed696
                    
                    goto label_1402eeb32
                
                var_548 = 0f
                
                if ((temp0_337 & 2) != 0)
                label_1402ed696:
                    int32_t var_544_4 = 0
                    
                    if ((temp0_337 & 4) == 0)
                        goto label_1402eeb3b
                    
                    goto label_1402ed6a7
                
            label_1402eeb32:
                
                if ((temp0_337 & 4) == 0)
                label_1402eeb3b:
                    
                    if ((temp0_337 & 8) != 0)
                        goto label_1402ed6b8
                    
                    goto label_1402eeb44
                
            label_1402ed6a7:
                int32_t var_540_7 = 0
                
                if ((temp0_337 & 8) != 0)
                label_1402ed6b8:
                    int32_t var_53c_8 = 0
                    
                    if ((temp0_337 & 1) == 0)
                        goto label_1402eeb4d
                    
                    goto label_1402ed6c9
                
            label_1402eeb44:
                
                if ((temp0_337 & 1) == 0)
                label_1402eeb4d:
                    
                    if ((temp0_337 & 2) != 0)
                        goto label_1402ed6da
                    
                    goto label_1402eeb56
                
            label_1402ed6c9:
                var_538.d = 0
                
                if ((temp0_337 & 2) != 0)
                label_1402ed6da:
                    var_538:4.d = 0
                    
                    if ((temp0_337 & 4) == 0)
                        goto label_1402eeb5f
                    
                    goto label_1402ed6eb
                
            label_1402eeb56:
                
                if ((temp0_337 & 4) == 0)
                label_1402eeb5f:
                    
                    if ((temp0_337 & 8) != 0)
                        goto label_1402ed6fc
                    
                    goto label_1402eeb68
                
            label_1402ed6eb:
                var_538:8.d = 0
                
                if ((temp0_337 & 8) != 0)
                label_1402ed6fc:
                    var_538:0xc.d = 0
                    
                    if ((temp0_337 & 1) == 0)
                        goto label_1402eeb71
                    
                    goto label_1402ed70d
                
            label_1402eeb68:
                
                if ((temp0_337 & 1) == 0)
                label_1402eeb71:
                    
                    if ((temp0_337 & 2) != 0)
                        goto label_1402ed71e
                    
                    goto label_1402eeb7a
                
            label_1402ed70d:
                var_528[0] = 0
                
                if ((temp0_337 & 2) != 0)
                label_1402ed71e:
                    var_528[1] = 0
                    
                    if ((temp0_337 & 4) == 0)
                        goto label_1402eeb83
                    
                    goto label_1402ed72f
                
            label_1402eeb7a:
                
                if ((temp0_337 & 4) == 0)
                label_1402eeb83:
                    
                    if ((temp0_337 & 8) != 0)
                        goto label_1402ed740
                    
                    goto label_1402eeb8c
                
            label_1402ed72f:
                var_528[2] = 0
                
                if ((temp0_337 & 8) != 0)
                label_1402ed740:
                    var_528[3] = 0
                    
                    if ((temp0_337 & 1) == 0)
                        goto label_1402eeb95
                    
                    goto label_1402ed751
                
            label_1402eeb8c:
                
                if ((temp0_337 & 1) == 0)
                label_1402eeb95:
                    
                    if ((temp0_337 & 2) != 0)
                        goto label_1402ed762
                    
                    goto label_1402eeb9e
                
            label_1402ed751:
                var_518[0] = 0x3f800000
                
                if ((temp0_337 & 2) != 0)
                label_1402ed762:
                    var_518[1] = 0x3f800000
                    
                    if ((temp0_337 & 4) == 0)
                        goto label_1402eeba7
                    
                    goto label_1402ed773
                
            label_1402eeb9e:
                
                if ((temp0_337 & 4) != 0)
                label_1402ed773:
                    var_518[2] = 0x3f800000
                    
                    if ((temp0_337 & 8) != 0)
                        var_518[3] = 0x3f800000
                else
                label_1402eeba7:
                    
                    if ((temp0_337 & 8) != 0)
                        var_518[3] = 0x3f800000
            else
            label_1402ee836:
                arg8 = arg9
                zmm0 = __pmulld_xmmdq_memdq(zmm7, var_318_1)
                arg5 = _mm_cvtepi32_epi64(zmm0.q)
                zmm4 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
                char rsi_5
                
                switch (rdi_1)
                    case 0
                        zmm4 = _mm_add_epi64(zmm4, zmm8)
                        int32_t temp0_383[0x4] = _mm_add_epi64(arg5, zmm3)
                        zmm2 = var_508
                        zmm1 = _mm_shuffle_epi32(zmm2, 0x50)
                        float temp0_385[0x4] = _mm_blendv_ps(zx.o(0), temp0_383, zmm1)
                        zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                        int64_t rcx_14 = _mm_extract_epi64(temp0_385, 1)
                        void* rax_96 = arg4 + rcx_14
                        int32_t rbp_8 = *(arg4 + rcx_14)
                        int64_t rcx_15 = zmm3[0].q
                        void* rsi_1 = arg4 + rcx_15
                        int32_t r8 = *(arg4 + rcx_15)
                        int64_t rcx_16 = _mm_extract_epi64(zmm3, 1)
                        void* rbx_5 = arg4 + rcx_16
                        int32_t r11_2 = *(arg4 + rcx_16)
                        zmm4 = data_1434426c0
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm4, zmm1)
                        float temp0_389[0x4] = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                        float* rcx_18 = temp0_385[0].q + arg4
                        int32_t r12_1 = *(_mm_extract_epi64(zmm3, 1) + rax_96)
                        int32_t r13_1 = *(temp0_389[0].q + rsi_1)
                        int32_t rdi_12 = *(_mm_extract_epi64(temp0_389, 1) + rbx_5)
                        arg5 = data_1434426e0
                        float temp0_390[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        arg5 = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                        int32_t rdi_14 = *(_mm_extract_epi64(temp0_390, 1) + rax_96)
                        int32_t* rdi_15 = arg5[0].q
                        int32_t* r15_1 = _mm_extract_epi64(arg5, 1)
                        int32_t rdi_16 = *(rdi_15 + rsi_1)
                        zmm0 = zmm1
                        zmm1 = data_1434426f0
                        arg5 = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                        int32_t rdi_17 = *(r15_1 + rbx_5)
                        zmm1 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        var_3b8[0] = *(_mm_extract_epi64(arg5, 1) + rax_96)
                        var_408_1[0] = *(zmm1.q + rsi_1)
                        var_378[0] = *(_mm_extract_epi64(zmm1, 1) + rbx_5)
                        int32_t rbx_6 = *(zmm3[0].q + rcx_18)
                        int32_t rsi_3 = *(arg5[0].q + rcx_18)
                        
                        if ((temp0_337 & 1) != 0)
                            var_548 = *rcx_18
                        
                        arg9 = arg8
                        
                        if ((temp0_337 & 2) != 0)
                            int32_t var_544_6 = rbp_8
                        
                        r15 = var_388_1
                        zmm3 = var_3a8_1
                        arg5 = var_508
                        
                        if ((temp0_337 & 4) != 0)
                            int32_t var_540_2 = r8
                            
                            if ((temp0_337 & 8) != 0)
                            label_1402ed23a:
                                int32_t var_53c_2 = r11_2
                                
                                if ((temp0_337 & 1) == 0)
                                    goto label_1402eea42
                                
                                goto label_1402ed249
                        else if ((temp0_337 & 8) != 0)
                            goto label_1402ed23a
                        
                        if ((temp0_337 & 1) != 0)
                        label_1402ed249:
                            var_538.d = rbx_6
                            arg3 = var_380_1
                            
                            if ((temp0_337 & 2) != 0)
                            label_1402ed25f:
                                var_538:4.d = r12_1
                                
                                if ((temp0_337 & 4) == 0)
                                    goto label_1402eea5e
                                
                                goto label_1402ed26e
                        else
                        label_1402eea42:
                            arg3 = var_380_1
                            
                            if ((temp0_337 & 2) != 0)
                                goto label_1402ed25f
                        
                        if ((temp0_337 & 4) != 0)
                        label_1402ed26e:
                            var_538:8.d = r13_1
                            i = i_6
                            
                            if ((temp0_337 & 8) != 0)
                            label_1402ed28c:
                                var_538:0xc.d = rdi_12
                                
                                if ((temp0_337 & 1) == 0)
                                    goto label_1402eea7d
                                
                                goto label_1402ed29d
                        else
                        label_1402eea5e:
                            i = i_6
                            
                            if ((temp0_337 & 8) != 0)
                                goto label_1402ed28c
                        
                        if ((temp0_337 & 1) == 0)
                        label_1402eea7d:
                            r10 = var_398
                            
                            if ((temp0_337 & 2) != 0)
                                goto label_1402ed2ba
                            
                            goto label_1402eea8f
                        
                    label_1402ed29d:
                        var_528[0] = *(temp0_390[0].q + rcx_18)
                        r10 = var_398
                        
                        if ((temp0_337 & 2) != 0)
                        label_1402ed2ba:
                            var_528[1] = rdi_14
                            r12 = var_3d8
                            
                            if ((temp0_337 & 4) == 0)
                                goto label_1402eea9d
                            
                            goto label_1402ed2d7
                        
                    label_1402eea8f:
                        r12 = var_3d8
                        
                        if ((temp0_337 & 4) == 0)
                        label_1402eea9d:
                            
                            if ((temp0_337 & 8) != 0)
                                goto label_1402ed2ec
                            
                            goto label_1402eeaa7
                        
                    label_1402ed2d7:
                        var_528[2] = rdi_16
                        
                        if ((temp0_337 & 8) != 0)
                        label_1402ed2ec:
                            var_528[3] = rdi_17
                            
                            if ((temp0_337 & 1) == 0)
                                goto label_1402eeab1
                            
                            goto label_1402ed301
                        
                    label_1402eeaa7:
                        
                        if ((temp0_337 & 1) == 0)
                        label_1402eeab1:
                            
                            if ((temp0_337 & 2) != 0)
                                goto label_1402ed316
                            
                            goto label_1402eeabb
                        
                    label_1402ed301:
                        var_518[0] = rsi_3
                        
                        if ((temp0_337 & 2) != 0)
                        label_1402ed316:
                            var_518[1] = var_3b8[0]
                            
                            if ((temp0_337 & 4) == 0)
                                goto label_1402eeac5
                            
                            goto label_1402ed32b
                        
                    label_1402eeabb:
                        
                        if ((temp0_337 & 4) != 0)
                        label_1402ed32b:
                            var_518[2] = var_408_1[0]
                            
                            if ((temp0_337 & 8) != 0)
                                var_518[3] = var_378[0]
                        else
                        label_1402eeac5:
                            
                            if ((temp0_337 & 8) != 0)
                                var_518[3] = var_378[0]
                    case 1
                        arg6 = zmm7
                        var_408_1 = zmm13
                        var_3b8 = zmm8
                        zmm4 = _mm_add_epi64(zmm4, zmm8)
                        int32_t temp0_402[0x4] = _mm_add_epi64(arg5, zmm3)
                        zmm2 = var_508
                        zmm1 = _mm_shuffle_epi32(zmm2, 0x50)
                        zmm3 = _mm_blendv_ps(zx.o(0), temp0_402, zmm1)
                        zmm2 = _mm_shuffle_epi32(zmm2, 0xfa)
                        arg5 = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                        int64_t rcx_21 = zmm3[0].q
                        void* rax_105 = arg4 + rcx_21
                        int64_t rbp_9 = _mm_extract_epi64(zmm3, 1)
                        zmm4 = *(arg4 + rcx_21)
                        void* rdx_35 = arg4 + rbp_9
                        zmm6 = *(arg4 + rbp_9)
                        int64_t rbp_10 = arg5[0].q
                        void* rcx_22 = arg4 + rbp_10
                        zmm13 = *(arg4 + rbp_10)
                        int64_t rbp_11 = _mm_extract_epi64(arg5, 1)
                        zmm8 = *(arg4 + rbp_11)
                        arg5 = data_1434426c0
                        zmm3 = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        float temp0_408[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                        arg5 = *(zmm3[0].q + rax_105)
                        zmm15 = *(_mm_extract_epi64(zmm3, 1) + rdx_35)
                        arg9 = *(temp0_408[0].q + rcx_22)
                        float (* rbx_10)[0x4] = _mm_extract_epi64(temp0_408, 1)
                        void* rbp_12 = arg4 + rbp_11
                        zmm0 = zmm1
                        zmm1 = data_1434426e0
                        float temp0_409[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                        zmm14 = *(rbx_10 + rbp_12)
                        zmm1 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        zmm0 = *(temp0_409[0].q + rax_105)
                        zmm2 = *(_mm_extract_epi64(temp0_409, 1) + rdx_35)
                        uint128_t* rdx_36 = _mm_extract_epi64(zmm1, 1)
                        arg7 = *(zmm1.q + rcx_22)
                        zmm1 = *(rdx_36 + rbp_12)
                        rsi_5 = temp0_337
                        
                        if ((rsi_5 & 1) == 0)
                            if ((rsi_5 & 2) != 0)
                                goto label_1402ed359
                            
                            goto label_1402eed3f
                        
                        var_548 = zmm4[0]
                        
                        if ((rsi_5 & 2) != 0)
                        label_1402ed359:
                            float var_544_2 = zmm6[0]
                            zmm7 = arg6
                            
                            if ((rsi_5 & 4) == 0)
                                goto label_1402eed49
                            
                            goto label_1402ed36d
                        
                    label_1402eed3f:
                        zmm7 = arg6
                        
                        if ((rsi_5 & 4) == 0)
                        label_1402eed49:
                            
                            if ((rsi_5 & 8) != 0)
                                goto label_1402ed37e
                            
                            goto label_1402eed53
                        
                    label_1402ed36d:
                        float var_540_3 = zmm13[0]
                        
                        if ((rsi_5 & 8) != 0)
                        label_1402ed37e:
                            float var_53c_3 = zmm8[0]
                            zmm4 = _mm_insert_ps(zmm4, zmm6, 0x10)
                            
                            if ((rsi_5 & 1) == 0)
                                goto label_1402eed63
                            
                            goto label_1402ed395
                        
                    label_1402eed53:
                        zmm4 = _mm_insert_ps(zmm4, zmm6, 0x10)
                        
                        if ((rsi_5 & 1) != 0)
                        label_1402ed395:
                            var_538.d = arg5[0]
                            zmm4 = _mm_insert_ps(zmm4, zmm13, 0x20)
                            arg5 = _mm_insert_ps(arg5, zmm15, 0x10)
                            
                            if ((rsi_5 & 2) != 0)
                                var_538:4.d = zmm15[0]
                        else
                        label_1402eed63:
                            zmm4 = _mm_insert_ps(zmm4, zmm13, 0x20)
                            arg5 = _mm_insert_ps(arg5, zmm15, 0x10)
                            
                            if ((rsi_5 & 2) != 0)
                                var_538:4.d = zmm15[0]
                        
                        float temp0_414[0x4] = _mm_insert_ps(zmm4, zmm8, 0x30)
                        arg5 = _mm_insert_ps(arg5, arg9, 0x20)
                        zmm3 = _mm_insert_ps(zmm0, zmm2, 0x10)
                        zmm13 = var_408_1
                        
                        if ((rsi_5 & 4) != 0)
                            var_538:8.d = arg9[0]
                        
                        arg5 = _mm_insert_ps(arg5, zmm14, 0x30)
                        zmm3 = _mm_insert_ps(zmm3, arg7, 0x20)
                        float temp0_419[0x4] = _mm_mul_ps(temp0_414, temp0_414)
                        zmm8 = var_3b8
                        
                        if ((rsi_5 & 8) != 0)
                            var_538:0xc.d = zmm14[0]
                        
                        zmm6 = zmm1
                        zmm3 = _mm_insert_ps(zmm3, zmm1, 0x30)
                        zmm1 = _mm_sub_ps(data_142d3f670, temp0_419)
                        arg5 = _mm_mul_ps(arg5, arg5)
                        
                        if ((rsi_5 & 1) == 0)
                            zmm1 = _mm_sub_ps(zmm1, arg5)
                            zmm3 = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((rsi_5 & 2) != 0)
                                goto label_1402ed3ce
                            
                            goto label_1402eee08
                        
                        var_528[0] = zmm0.d
                        zmm1 = _mm_sub_ps(zmm1, arg5)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        
                        if ((rsi_5 & 2) == 0)
                        label_1402eee08:
                            zmm1 = _mm_sub_ps(zmm1, zmm3)
                            arg9 = arg8
                            
                            if ((rsi_5 & 4) != 0)
                                var_528[2] = arg7[0]
                        else
                        label_1402ed3ce:
                            var_528[1] = zmm2[0]
                            zmm1 = _mm_sub_ps(zmm1, zmm3)
                            arg9 = arg8
                            
                            if ((rsi_5 & 4) != 0)
                                var_528[2] = arg7[0]
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        zmm3 = var_3a8_1
                        arg5 = var_508
                        
                        if ((rsi_5 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((rsi_5 & 1) == 0)
                                goto label_1402ef66a
                            
                            goto label_1402eee4e
                        
                        var_528[3] = zmm6[0]
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((rsi_5 & 1) != 0)
                        label_1402eee4e:
                            var_518[0] = zmm0.d
                            
                            if ((rsi_5 & 2) == 0)
                                goto label_1402ef674
                            
                            goto label_1402eee5e
                        
                    label_1402ef66a:
                        
                        if ((rsi_5 & 2) == 0)
                        label_1402ef674:
                            
                            if ((rsi_5 & 4) != 0)
                                goto label_1402eee70
                            
                            goto label_1402ef67e
                        
                    label_1402eee5e:
                        var_518[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((rsi_5 & 4) == 0)
                        label_1402ef67e:
                            
                            if ((rsi_5 & 8) != 0)
                                var_518[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_1402eee70:
                            var_518[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((rsi_5 & 8) != 0)
                                var_518[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                    case 2
                        zmm0 = zmm8
                        arg6 = zmm0
                        zmm4 = _mm_add_epi64(zmm4, zmm0)
                        int32_t temp0_432[0x4] = _mm_add_epi64(arg5, zmm3)
                        zmm2 = _mm_shuffle_epi32(var_508, 0x50)
                        float temp0_434[0x4] = _mm_blendv_ps(zx.o(0), temp0_432, zmm2)
                        zmm1 = _mm_shuffle_epi32(var_508, 0xfa)
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm4, zmm1)
                        int64_t rax_108 = temp0_434[0].q
                        void* rbx_12 = arg4 + rax_108
                        int64_t rcx_23 = _mm_extract_epi64(temp0_434, 1)
                        void* rbp_13 = arg4 + rcx_23
                        int64_t rdx_37 = zmm3[0].q
                        zmm4 = data_1434426b0
                        arg5 = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                        float temp0_438[0x4] = _mm_blendv_ps(zx.o(0), zmm4, zmm1)
                        zmm6 = zx.o(*(arg5[0].q + rbx_12))
                        int16_t* rdi_22 = _mm_extract_epi64(arg5, 1)
                        zmm0 = zmm2
                        zmm2 = data_1434426c0
                        arg5 = _mm_blendv_ps(zx.o(0), zmm2, zmm0)
                        zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(rdi_22 + rbp_13), 1)
                        void* rdi_24 = arg4 + rdx_37
                        int32_t temp0_441[0x4] = __pinsrw_xmmdq_memw_immb(
                            zx.o(*(arg5[0].q + rbx_12)), *(_mm_extract_epi64(arg5, 1) + rbp_13), 1)
                        int64_t rbp_14 = _mm_extract_epi64(zmm3, 1)
                        int16_t* rbx_15 = temp0_438[0].q
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(rbx_15 + rdi_24), 2)
                        int32_t temp0_444[0x4] =
                            __pinsrw_xmmdq_memw_immb(temp0_441, *(zmm3[0].q + rdi_24), 2)
                        void* rbx_17 = arg4 + rbp_14
                        zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, 
                            *(_mm_extract_epi64(temp0_438, 1) + rbx_17), 3)
                        int32_t temp0_446[0x4] = __pinsrw_xmmdq_memw_immb(temp0_444, 
                            *(_mm_extract_epi64(zmm3, 1) + rbx_17), 3)
                        zmm1 = __divps_xmmps_memps(
                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_108)), 
                                            *(arg4 + rcx_23), 1), 
                                        *(arg4 + rdx_37), 2), 
                                    *(arg4 + rbp_14), 3).q), 
                                data_1434424d0)), 
                            data_1434426d0)
                        zmm0 = _mm_cvtepu16_epi32(zmm6[0].q)
                        rsi_5 = temp0_337
                        
                        if ((rsi_5 & 1) != 0)
                            var_548 = zmm1.d
                        
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_1434424d0)
                        arg9 = arg8
                        
                        if ((rsi_5 & 2) != 0)
                            int32_t var_544_7 = __extractps_memd_xmmps_immb(zmm1, 1)
                        
                        zmm0 = _mm_cvtepi32_ps(zmm0)
                        zmm7 = zmm7
                        arg5 = var_508
                        
                        if ((rsi_5 & 4) != 0)
                            int32_t var_540_9 = __extractps_memd_xmmps_immb(zmm1, 2)
                        
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426d0)
                        zmm8 = arg6
                        
                        if ((rsi_5 & 8) == 0)
                            zmm2 = _mm_cvtepu16_epi32(temp0_446[0].q)
                            
                            if ((rsi_5 & 1) != 0)
                                goto label_1402ed41c
                            
                            goto label_1402ef054
                        
                        int32_t var_53c_4 = __extractps_memd_xmmps_immb(zmm1, 3)
                        zmm2 = _mm_cvtepu16_epi32(temp0_446[0].q)
                        
                        if ((rsi_5 & 1) != 0)
                        label_1402ed41c:
                            var_538.d = zmm0.d
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_1434424d0)
                            
                            if ((rsi_5 & 2) == 0)
                                goto label_1402ef069
                            
                            goto label_1402ed437
                        
                    label_1402ef054:
                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_1434424d0)
                        
                        if ((rsi_5 & 2) == 0)
                        label_1402ef069:
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            r12 = var_3d8
                            
                            if ((rsi_5 & 4) != 0)
                                goto label_1402ed454
                            
                            goto label_1402ef07e
                        
                    label_1402ed437:
                        var_538:4.d = __extractps_memd_xmmps_immb(zmm0, 1)
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        r12 = var_3d8
                        
                        if ((rsi_5 & 4) == 0)
                        label_1402ef07e:
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                            
                            if ((rsi_5 & 8) != 0)
                                var_538:0xc.d = __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_1402ed454:
                            var_538:8.d = __extractps_memd_xmmps_immb(zmm0, 2)
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                            
                            if ((rsi_5 & 8) != 0)
                                var_538:0xc.d = __extractps_memd_xmmps_immb(zmm0, 3)
                        
                        zmm3 = _mm_sub_ps(data_142d3f670, zmm1)
                        zmm0 = _mm_mul_ps(zmm0, zmm0)
                        
                        if ((rsi_5 & 1) != 0)
                            var_528[0] = zmm2[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, zmm0)
                        zmm0 = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rsi_5 & 2) != 0)
                            var_528[1] = __extractps_memd_xmmps_immb(zmm2, 1)
                        
                        zmm3 = _mm_sub_ps(zmm3, zmm0)
                        
                        if ((rsi_5 & 4) != 0)
                            var_528[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        zmm1 = _mm_sqrt_ps(zmm3)
                        
                        if ((rsi_5 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            zmm3 = var_3a8_1
                            
                            if ((rsi_5 & 1) == 0)
                                goto label_1402ef66a
                            
                            goto label_1402eee4e
                        
                        var_528[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        zmm3 = var_3a8_1
                        
                        if ((rsi_5 & 1) == 0)
                            goto label_1402ef66a
                        
                        goto label_1402eee4e
                    case 3
                        var_3b8[0].q = rdi_1
                        arg9 = zmm7
                        var_408_1[0].q = r13
                        zmm1 = var_378
                        zmm0 = zmm1 & not.o(var_3f8)
                        int64_t rax_111 = sx.q(zmm0.d)
                        void* rdi_27 = arg4 + rax_111
                        int32_t temp0_476 = _mm_extract_epi32(zmm0, 1)
                        zmm6 = zmm3
                        zmm3 = zmm8
                        zmm8 = *(arg4 + rax_111)
                        int64_t rax_112 = sx.q(temp0_476)
                        void* rcx_25 = arg4 + rax_112
                        int64_t rdx_39 = sx.q(_mm_extract_epi32(zmm0, 2))
                        void* rbp_15 = arg4 + rdx_39
                        int64_t rbx_19 = sx.q(_mm_extract_epi32(zmm0, 3))
                        float temp0_481[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm8, *(arg4 + rax_112), 0x10), 
                                *(arg4 + rdx_39), 0x20), 
                            *(arg4 + rbx_19), 0x30)
                        void* r12_3 = arg4 + rbx_19
                        zmm0 = zmm1 & not.o(data_142fc95e0)
                        zmm2 = *(zx.q(zmm0.d) + rdi_27)
                        int32_t* rax_114 = zx.q(_mm_extract_epi32(zmm0, 1))
                        int32_t* rdx_40 = zx.q(_mm_extract_epi32(zmm0, 2))
                        int32_t* rbx_20 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm2 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(rax_114 + rcx_25), 0x10), 
                                *(rdx_40 + rbp_15), 0x20), 
                            *(rbx_20 + r12_3), 0x30)
                        zmm0 = zmm1 & not.o(data_142fc95f0)
                        int32_t* rdx_41 = zx.q(_mm_extract_epi32(zmm0, 1))
                        int32_t* r11_3 = zx.q(_mm_extract_epi32(zmm0, 2))
                        int32_t* r15_3 = zx.q(_mm_extract_epi32(zmm0, 3))
                        arg7 = __insertps_xmmps_memd_immb(*(zx.q(zmm0.d) + rdi_27), 
                            *(rdx_41 + rcx_25), 0x10)
                        zmm0 = zmm1 & not.o(data_143442650)
                        zmm7 = *(zx.q(zmm0.d) + rdi_27)
                        int32_t* r13_2 = zx.q(_mm_extract_epi32(zmm0, 1))
                        int32_t* r8_1 = zx.q(_mm_extract_epi32(zmm0, 2))
                        int32_t* rax_117 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm14 = zmm3
                        zmm4 = _mm_add_epi64(zmm4, zmm3)
                        zmm3 = var_508
                        float temp0_498[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, zmm6), 
                            _mm_shuffle_epi32(zmm3, 0x50))
                        arg5 = _mm_blendv_ps(zx.o(0), zmm4, _mm_shuffle_epi32(zmm3, 0xfa))
                        zmm0 = zmm1 & not.o(data_143442660)
                        int32_t* rdx_42 = zx.q(_mm_extract_epi32(zmm0, 1))
                        int32_t* r10_3 = zx.q(_mm_extract_epi32(zmm0, 2))
                        zmm3 = *(zx.q(zmm0.d) + rdi_27)
                        int32_t* rsi_7 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm1 &= not.o(data_143442670)
                        zmm0 = *(zx.q(zmm1.d) + rdi_27)
                        int32_t* rdi_28 = zx.q(_mm_extract_epi32(zmm1, 1))
                        int32_t* rbx_21 = zx.q(_mm_extract_epi32(zmm1, 2))
                        int32_t* r14_6 = zx.q(_mm_extract_epi32(zmm1, 3))
                        arg7 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(arg7, *(r11_3 + rbp_15), 0x20), 
                            *(r15_3 + r12_3), 0x30)
                        float temp0_511[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm7, *(r13_2 + rcx_25), 0x10), 
                                *(r8_1 + rbp_15), 0x20), 
                            *(rax_117 + r12_3), 0x30)
                        arg4 = var_470
                        zmm3 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm3, *(rdx_42 + rcx_25), 0x10), 
                                *(r10_3 + rbp_15), 0x20), 
                            *(rsi_7 + r12_3), 0x30)
                        zmm0 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm0, *(rdi_28 + rcx_25), 0x10), 
                                *(rbx_21 + rbp_15), 0x20), 
                            *(r14_6 + r12_3), 0x30)
                        int64_t rax_118 = temp0_498[0].q
                        int64_t rcx_26 = _mm_extract_epi64(temp0_498, 1)
                        int64_t rdx_43 = _mm_extract_epi64(arg5, 1)
                        int32_t temp0_520[0x4] = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_118)), *(arg4 + rcx_26), 
                                    1), 
                                *(arg4 + arg5[0].q), 2), 
                            *(arg4 + rdx_43), 3)
                        zmm4 = _mm_srli_epi32(temp0_520, 0x15)
                        zmm6 = data_143442440
                        float temp0_526[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm6)), 
                                    data_143442690), 
                                temp0_511), 
                            temp0_481)
                        float temp0_529[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(
                            _mm_srli_epi32(temp0_520, 0xa) & data_143442480, zmm6))
                        rsi_5 = temp0_337
                        
                        if ((rsi_5 & 1) != 0)
                            var_548 = temp0_526[0]
                        
                        float temp0_530[0x4] = __divps_xmmps_memps(temp0_529, data_143442690)
                        
                        if ((rsi_5 & 2) != 0)
                            int32_t var_544_8 = __extractps_memd_xmmps_immb(temp0_526, 1)
                        
                        arg5 = temp0_520 & data_143442680
                        zmm3 = _mm_mul_ps(zmm3, temp0_530)
                        r12 = var_3d8
                        r10 = var_398
                        arg3 = var_380_1
                        r15 = var_388_1
                        i = i_6
                        r13 = var_408_1[0].q
                        zmm7 = arg9
                        zmm8 = zmm14
                        rdi_1 = var_3b8[0].q
                        
                        if ((rsi_5 & 4) == 0)
                            arg5 = __paddd_xmmdq_memdq(arg5, data_143442490)
                            zmm2 = _mm_add_ps(zmm2, zmm3)
                            
                            if ((rsi_5 & 8) != 0)
                                goto label_1402ed4b5
                            
                            goto label_1402ef413
                        
                        int32_t var_540_4 = __extractps_memd_xmmps_immb(temp0_526, 2)
                        arg5 = __paddd_xmmdq_memdq(arg5, data_143442490)
                        zmm2 = _mm_add_ps(zmm2, zmm3)
                        
                        if ((rsi_5 & 8) != 0)
                        label_1402ed4b5:
                            int32_t var_53c_5 = __extractps_memd_xmmps_immb(temp0_526, 3)
                            zmm3 = _mm_cvtepi32_ps(arg5)
                            
                            if ((rsi_5 & 1) == 0)
                                goto label_1402ef420
                            
                            goto label_1402ed4ca
                        
                    label_1402ef413:
                        zmm3 = _mm_cvtepi32_ps(arg5)
                        
                        if ((rsi_5 & 1) == 0)
                        label_1402ef420:
                            zmm3 = __divps_xmmps_memps(zmm3, data_1434426a0)
                            arg9 = arg8
                            
                            if ((rsi_5 & 2) != 0)
                                goto label_1402ed4e5
                            
                            goto label_1402ef435
                        
                    label_1402ed4ca:
                        var_538.d = zmm2[0]
                        zmm3 = __divps_xmmps_memps(zmm3, data_1434426a0)
                        arg9 = arg8
                        
                        if ((rsi_5 & 2) != 0)
                        label_1402ed4e5:
                            var_538:4.d = __extractps_memd_xmmps_immb(zmm2, 1)
                            zmm0 = _mm_mul_ps(zmm0, zmm3)
                            arg5 = var_508
                            
                            if ((rsi_5 & 4) == 0)
                                goto label_1402ef44a
                            
                            goto label_1402ed502
                        
                    label_1402ef435:
                        zmm0 = _mm_mul_ps(zmm0, zmm3)
                        arg5 = var_508
                        
                        if ((rsi_5 & 4) != 0)
                        label_1402ed502:
                            var_538:8.d = __extractps_memd_xmmps_immb(zmm2, 2)
                            zmm4 = _mm_mul_ps(temp0_526, temp0_526)
                            arg7 = _mm_add_ps(arg7, zmm0)
                            
                            if ((rsi_5 & 8) != 0)
                                var_538:0xc.d = __extractps_memd_xmmps_immb(zmm2, 3)
                        else
                        label_1402ef44a:
                            zmm4 = _mm_mul_ps(temp0_526, temp0_526)
                            arg7 = _mm_add_ps(arg7, zmm0)
                            
                            if ((rsi_5 & 8) != 0)
                                var_538:0xc.d = __extractps_memd_xmmps_immb(zmm2, 3)
                        
                        zmm3 = _mm_sub_ps(data_142d3f670, zmm4)
                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rsi_5 & 1) != 0)
                            var_528[0] = arg7[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, zmm2)
                        zmm0 = _mm_mul_ps(arg7, arg7)
                        
                        if ((rsi_5 & 2) != 0)
                            var_528[1] = __extractps_memd_xmmps_immb(arg7, 1)
                        
                        zmm3 = _mm_sub_ps(zmm3, zmm0)
                        
                        if ((rsi_5 & 4) != 0)
                            var_528[2] = __extractps_memd_xmmps_immb(arg7, 2)
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        zmm2 = _mm_sqrt_ps(zmm3)
                        
                        if ((rsi_5 & 8) == 0)
                        label_1402ef654:
                            zmm0 = _mm_and_ps(zmm0, zmm2)
                            zmm3 = var_3a8_1
                            
                            if ((rsi_5 & 1) != 0)
                                goto label_1402eee4e
                            
                            goto label_1402ef66a
                        
                        var_528[3] = __extractps_memd_xmmps_immb(arg7, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm2)
                        zmm3 = var_3a8_1
                        
                        if ((rsi_5 & 1) == 0)
                            goto label_1402ef66a
                        
                        goto label_1402eee4e
                    case 4
                        zmm4 = _mm_add_epi64(zmm4, zmm8)
                        zmm2 = var_508
                        zmm1 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, zmm3), 
                            _mm_shuffle_epi32(zmm2, 0x50))
                        zmm2 = _mm_blendv_ps(zx.o(0), zmm4, _mm_shuffle_epi32(zmm2, 0xfa))
                        int64_t rcx_27 = _mm_extract_epi64(zmm1, 1)
                        int64_t rdx_44 = _mm_extract_epi64(zmm2, 1)
                        zmm1 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), *(arg4 + rcx_27), 
                                    1), 
                                *(arg4 + zmm2[0].q), 2), 
                            *(arg4 + rdx_44), 3)
                        zmm0 = _mm_srli_epi32(zmm1, 0x15)
                        zmm2 = _mm_srli_epi32(zmm1, 0xa) & data_143442480
                        zmm0 = __divps_xmmps_memps(
                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442440)), 
                            data_143442690)
                        rsi_5 = temp0_337
                        
                        if ((rsi_5 & 1) == 0)
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                            arg9 = arg8
                            
                            if ((rsi_5 & 2) != 0)
                                goto label_1402ed53c
                            
                            goto label_1402ef590
                        
                        var_548 = zmm0.d
                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                        arg9 = arg8
                        
                        if ((rsi_5 & 2) != 0)
                        label_1402ed53c:
                            int32_t var_544_3 = __extractps_memd_xmmps_immb(zmm0, 1)
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            arg5 = var_508
                            
                            if ((rsi_5 & 4) == 0)
                                goto label_1402ef5a5
                            
                            goto label_1402ed559
                        
                    label_1402ef590:
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        arg5 = var_508
                        
                        if ((rsi_5 & 4) == 0)
                        label_1402ef5a5:
                            zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                            
                            if ((rsi_5 & 8) != 0)
                                goto label_1402ed572
                            
                            goto label_1402ef5b6
                        
                    label_1402ed559:
                        int32_t var_540_5 = __extractps_memd_xmmps_immb(zmm0, 2)
                        zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                        
                        if ((rsi_5 & 8) != 0)
                        label_1402ed572:
                            int32_t var_53c_6 = __extractps_memd_xmmps_immb(zmm0, 3)
                            zmm1 &= data_143442680
                            
                            if ((rsi_5 & 1) == 0)
                                goto label_1402ef5c8
                            
                            goto label_1402ed58c
                        
                    label_1402ef5b6:
                        zmm1 &= data_143442680
                        
                        if ((rsi_5 & 1) == 0)
                        label_1402ef5c8:
                            zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                            
                            if ((rsi_5 & 2) != 0)
                                goto label_1402ed5a4
                            
                            goto label_1402ef5da
                        
                    label_1402ed58c:
                        var_538.d = zmm2[0]
                        zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                        
                        if ((rsi_5 & 2) != 0)
                        label_1402ed5a4:
                            var_538:4.d = __extractps_memd_xmmps_immb(zmm2, 1)
                            zmm1 = _mm_cvtepi32_ps(zmm1)
                            
                            if ((rsi_5 & 4) == 0)
                                goto label_1402ef5e7
                            
                            goto label_1402ed5b9
                        
                    label_1402ef5da:
                        zmm1 = _mm_cvtepi32_ps(zmm1)
                        
                        if ((rsi_5 & 4) != 0)
                        label_1402ed5b9:
                            var_538:8.d = __extractps_memd_xmmps_immb(zmm2, 2)
                            zmm0 = _mm_mul_ps(zmm0, zmm0)
                            zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                            
                            if ((rsi_5 & 8) != 0)
                                var_538:0xc.d = __extractps_memd_xmmps_immb(zmm2, 3)
                        else
                        label_1402ef5e7:
                            zmm0 = _mm_mul_ps(zmm0, zmm0)
                            zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                            
                            if ((rsi_5 & 8) != 0)
                                var_538:0xc.d = __extractps_memd_xmmps_immb(zmm2, 3)
                        
                        zmm3 = _mm_sub_ps(data_142d3f670, zmm0)
                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rsi_5 & 1) != 0)
                            var_528[0] = zmm1.d
                        
                        zmm3 = _mm_sub_ps(zmm3, zmm2)
                        zmm0 = _mm_mul_ps(zmm1, zmm1)
                        
                        if ((rsi_5 & 2) != 0)
                            var_528[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                        
                        zmm3 = _mm_sub_ps(zmm3, zmm0)
                        
                        if ((rsi_5 & 4) != 0)
                            var_528[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        zmm2 = _mm_sqrt_ps(zmm3)
                        
                        if ((rsi_5 & 8) == 0)
                            goto label_1402ef654
                        
                        var_528[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm2)
                        zmm3 = var_3a8_1
                        
                        if ((rsi_5 & 1) == 0)
                            goto label_1402ef66a
                        
                        goto label_1402eee4e
                    case 5
                        zmm4 = _mm_add_epi64(zmm4, zmm8)
                        zmm2 = var_508
                        zmm1 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, zmm3), 
                            _mm_shuffle_epi32(zmm2, 0x50))
                        zmm2 = _mm_blendv_ps(zx.o(0), zmm4, _mm_shuffle_epi32(zmm2, 0xfa))
                        int64_t rcx_36 = _mm_extract_epi64(zmm1, 1)
                        int64_t rdx_52 = zmm2[0].q
                        int64_t rbp_21 = _mm_extract_epi64(zmm2, 1)
                        zmm0 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), *(arg4 + rcx_36), 
                                    1), 
                                *(arg4 + rdx_52), 2), 
                            *(arg4 + rbp_21), 3)
                        zmm1 = _mm_srli_epi32(zmm0, 0x15)
                        zmm2 = _mm_srli_epi32(zmm0, 5) & data_143442600
                        zmm1 = __paddd_xmmdq_memdq(zmm1 & data_143442320, data_143442330)
                            | (zmm1 & data_143442610) | zmm2
                        rsi_5 = temp0_337
                        
                        if ((rsi_5 & 1) != 0)
                            var_548 = zmm1.d
                        
                        uint32_t temp0_616[0x4] = _mm_srli_epi32(zmm0, 0xa)
                        zmm2 = _mm_slli_epi32(zmm0, 6)
                        arg9 = arg8
                        
                        if ((rsi_5 & 2) != 0)
                            int32_t var_544_9 = __pextrd_memd_xmmdq_immb(zmm1, 1)
                        
                        zmm2 &= data_143442600
                        zmm4 = temp0_616 & data_143442610
                        zmm3 = temp0_616 & data_143442320
                        arg5 = var_508
                        
                        if ((rsi_5 & 4) == 0)
                            zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                            zmm2 |= zmm4
                            
                            if ((rsi_5 & 8) != 0)
                                goto label_1402ed61b
                            
                            goto label_1402efa85
                        
                        int32_t var_540_6 = __pextrd_memd_xmmdq_immb(zmm1, 2)
                        zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                        zmm2 |= zmm4
                        
                        if ((rsi_5 & 8) != 0)
                        label_1402ed61b:
                            int32_t var_53c_7 = __pextrd_memd_xmmdq_immb(zmm1, 3)
                            zmm2 |= zmm3
                            
                            if ((rsi_5 & 1) == 0)
                                goto label_1402efa97
                            
                            goto label_1402ed631
                        
                    label_1402efa85:
                        zmm2 |= zmm3
                        
                        if ((rsi_5 & 1) != 0)
                        label_1402ed631:
                            var_538.d = zmm2[0]
                            zmm4 = zmm0 & data_143442620
                            
                            if ((rsi_5 & 2) != 0)
                                var_538:4.d = __pextrd_memd_xmmdq_immb(zmm2, 1)
                        else
                        label_1402efa97:
                            zmm4 = zmm0 & data_143442620
                            
                            if ((rsi_5 & 2) != 0)
                                var_538:4.d = __pextrd_memd_xmmdq_immb(zmm2, 1)
                        
                        uint32_t temp0_621[0x4] = _mm_slli_epi32(zmm0, 0x11)
                        zmm0 &= data_143442640
                        zmm4 = __paddd_xmmdq_memdq(zmm4, data_1434423a0)
                        
                        if ((rsi_5 & 4) != 0)
                            var_538:8.d = __pextrd_memd_xmmdq_immb(zmm2, 2)
                        
                        zmm3 = temp0_621 & data_143442630
                        zmm1 = _mm_mul_ps(zmm1, zmm1)
                        
                        if ((rsi_5 & 8) != 0)
                            var_538:0xc.d = __pextrd_memd_xmmdq_immb(zmm2, 3)
                        
                        zmm3 |= zmm0 | zmm4
                        float temp0_626[0x4] = _mm_sub_ps(data_142d3f670, zmm1)
                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rsi_5 & 1) != 0)
                            var_528[0] = zmm3[0]
                        
                        float temp0_628[0x4] = _mm_sub_ps(temp0_626, zmm2)
                        zmm0 = _mm_mul_ps(zmm3, zmm3)
                        
                        if ((rsi_5 & 2) != 0)
                            var_528[1] = __pextrd_memd_xmmdq_immb(zmm3, 1)
                        
                        float temp0_631[0x4] = _mm_sub_ps(temp0_628, zmm0)
                        
                        if ((rsi_5 & 4) != 0)
                            var_528[2] = __pextrd_memd_xmmdq_immb(zmm3, 2)
                        
                        zmm0 = _mm_cmpeq_ps(zx.o(0), temp0_631, 1)
                        zmm1 = _mm_sqrt_ps(temp0_631)
                        
                        if ((rsi_5 & 8) == 0)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if ((rsi_5 & 1) != 0)
                                goto label_1402ed667
                            
                            goto label_1402efb5c
                        
                        var_528[3] = __pextrd_memd_xmmdq_immb(zmm3, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((rsi_5 & 1) == 0)
                        label_1402efb5c:
                            zmm3 = var_3a8_1
                            
                            if ((rsi_5 & 2) == 0)
                                goto label_1402ef674
                            
                            goto label_1402eee5e
                        
                    label_1402ed667:
                        var_518[0] = zmm0.d
                        zmm3 = var_3a8_1
                        
                        if ((rsi_5 & 2) == 0)
                            goto label_1402ef674
                        
                        goto label_1402eee5e
            
            zmm4 = _mm_cmpeq_epi32(zmm7, zmm13) & not.o(arg5)
            char temp0_586 = _mm_movemask_ps(zmm4)
            var_358 = arg9
            
            if (temp0_586 == 0)
                arg8 = _mm_cmpeq_epi32(arg8, arg8)
                arg9 = var_438_1
                arg5 = var_468
            else
                float var_348_2[0x4] = zmm7
                uint32_t var_4b8
                int32_t var_4a8
                uint32_t var_498
                float var_488
                uint64_t rsi_9
                int64_t rdi_31
                
                if (r10.d u> 5)
                    rsi_9 = zx.q(temp0_586)
                    rdi_31 = rsi_9 & 1
                    
                    if (rdi_31 == 0)
                        arg7 = data_142d3f5c0
                        
                        if ((rsi_9.b & 2) != 0)
                            goto label_1402edc44
                        
                        goto label_1402f0861
                    
                    var_4b8 = 0
                    arg7 = data_142d3f5c0
                    
                    if ((rsi_9.b & 2) != 0)
                    label_1402edc44:
                        int32_t var_4b4_5 = 0
                        
                        if ((rsi_9.b & 4) == 0)
                            goto label_1402f086b
                        
                        goto label_1402edc59
                    
                label_1402f0861:
                    
                    if ((rsi_9.b & 4) == 0)
                    label_1402f086b:
                        
                        if ((rsi_9.b & 8) != 0)
                            goto label_1402edc6e
                        
                        goto label_1402f0875
                    
                label_1402edc59:
                    int32_t var_4b0_7 = 0
                    
                    if ((rsi_9.b & 8) != 0)
                    label_1402edc6e:
                        int32_t var_4ac_7 = 0
                        
                        if (rdi_31 == 0)
                            goto label_1402f087e
                        
                        goto label_1402edc82
                    
                label_1402f0875:
                    
                    if (rdi_31 == 0)
                    label_1402f087e:
                        
                        if ((rsi_9.b & 2) != 0)
                            goto label_1402edc97
                        
                        goto label_1402f0888
                    
                label_1402edc82:
                    var_4a8 = 0
                    
                    if ((rsi_9.b & 2) != 0)
                    label_1402edc97:
                        int32_t var_4a4_5 = 0
                        
                        if ((rsi_9.b & 4) == 0)
                            goto label_1402f0892
                        
                        goto label_1402edcac
                    
                label_1402f0888:
                    
                    if ((rsi_9.b & 4) == 0)
                    label_1402f0892:
                        
                        if ((rsi_9.b & 8) != 0)
                            goto label_1402edcc1
                        
                        goto label_1402f089c
                    
                label_1402edcac:
                    int32_t var_4a0_4 = 0
                    
                    if ((rsi_9.b & 8) != 0)
                    label_1402edcc1:
                        int32_t var_49c_2 = 0
                        
                        if (rdi_31 == 0)
                            goto label_1402f08a5
                        
                        goto label_1402edcd5
                    
                label_1402f089c:
                    
                    if (rdi_31 == 0)
                    label_1402f08a5:
                        
                        if ((rsi_9.b & 2) != 0)
                            goto label_1402edcea
                        
                        goto label_1402f08af
                    
                label_1402edcd5:
                    var_498 = 0
                    
                    if ((rsi_9.b & 2) != 0)
                    label_1402edcea:
                        int32_t var_494_2 = 0
                        
                        if ((rsi_9.b & 4) == 0)
                            goto label_1402f08b9
                        
                        goto label_1402edcff
                    
                label_1402f08af:
                    
                    if ((rsi_9.b & 4) == 0)
                    label_1402f08b9:
                        
                        if ((rsi_9.b & 8) != 0)
                            goto label_1402edd14
                        
                        goto label_1402f08c3
                    
                label_1402edcff:
                    int32_t var_490_2 = 0
                    
                    if ((rsi_9.b & 8) != 0)
                    label_1402edd14:
                        int32_t var_48c_3 = 0
                        
                        if (rdi_31 == 0)
                            goto label_1402f08cc
                        
                        goto label_1402edd28
                    
                label_1402f08c3:
                    
                    if (rdi_31 == 0)
                    label_1402f08cc:
                        
                        if ((rsi_9.b & 2) != 0)
                            goto label_1402edd3d
                        
                        goto label_1402f08d6
                    
                label_1402edd28:
                    var_488 = 1f
                    
                    if ((rsi_9.b & 2) != 0)
                    label_1402edd3d:
                        int32_t var_484_2 = 0x3f800000
                        
                        if ((rsi_9.b & 4) == 0)
                            goto label_1402f08e0
                        
                        goto label_1402edd52
                    
                label_1402f08d6:
                    int32_t var_47c_4
                    
                    if ((rsi_9.b & 4) != 0)
                    label_1402edd52:
                        int32_t var_480_2 = 0x3f800000
                        
                        if ((rsi_9.b & 8) != 0)
                            var_47c_4 = 0x3f800000
                    else
                    label_1402f08e0:
                        
                        if ((rsi_9.b & 8) != 0)
                            var_47c_4 = 0x3f800000
                    arg9 = var_438_1
                else
                    zmm1 = __pmulld_xmmdq_memdq(zmm13, var_318_1)
                    zmm0 = _mm_cvtepi32_epi64(zmm1.q)
                    zmm6 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
                    
                    switch (rdi_1)
                        case 0
                            zmm8 = _mm_add_epi64(zmm8, zmm6)
                            zmm3 = _mm_add_epi64(zmm3, zmm0)
                            zmm1 = _mm_shuffle_epi32(zmm4, 0x50)
                            arg5 = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                            zmm2 = _mm_shuffle_epi32(zmm4, 0xfa)
                            zmm3 = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                            int64_t rax_122 = _mm_extract_epi64(arg5, 1)
                            void* rcx_28 = arg4 + rax_122
                            int32_t r8_2 = *(arg4 + rax_122)
                            int64_t rax_123 = zmm3[0].q
                            void* rdi_29 = arg4 + rax_123
                            int32_t r12_4 = *(arg4 + rax_123)
                            int64_t rax_124 = _mm_extract_epi64(zmm3, 1)
                            void* rbx_22 = arg4 + rax_124
                            int32_t rax_125 = *(arg4 + rax_124)
                            zmm4 = data_1434426c0
                            zmm3 = _mm_blendv_ps(zx.o(0), zmm4, zmm1)
                            float temp0_598[0x4] = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                            uint32_t* r15_5 = arg5[0].q + arg4
                            int32_t r10_4 = *(_mm_extract_epi64(zmm3, 1) + rcx_28)
                            int32_t r9_1 = *(temp0_598[0].q + rdi_29)
                            var_3b8[0] = *(_mm_extract_epi64(temp0_598, 1) + rbx_22)
                            arg5 = data_1434426e0
                            float temp0_599[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                            arg5 = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                            var_3a8_1[0] = *(_mm_extract_epi64(temp0_599, 1) + rcx_28)
                            int32_t* rbp_20 = arg5[0].q
                            int32_t* rdx_49 = _mm_extract_epi64(arg5, 1)
                            var_378[0] = *(rbp_20 + rdi_29)
                            zmm0 = zmm1
                            zmm1 = data_1434426f0
                            arg5 = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                            var_3f8[0] = *(rdx_49 + rbx_22)
                            zmm1 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                            int32_t rbp_2 = *(_mm_extract_epi64(arg5, 1) + rcx_28)
                            int32_t rdx_27 = *(zmm1.q + rdi_29)
                            var_508.d = *(_mm_extract_epi64(zmm1, 1) + rbx_22)
                            int32_t r13_3 = *(zmm3[0].q + r15_5)
                            uint32_t rbx_23 = *(temp0_599[0].q + r15_5)
                            var_408_1[0] = *(arg5[0].q + r15_5)
                            rsi_9 = zx.q(temp0_586)
                            rdi_31 = rsi_9 & 1
                            
                            if (rdi_31 == 0)
                                arg7 = data_142d3f5c0
                                arg9 = var_438_1
                                
                                if ((rsi_9.b & 2) != 0)
                                    goto label_1402ed802
                                
                                goto label_1402ef887
                            
                            var_4b8 = *r15_5
                            arg7 = data_142d3f5c0
                            arg9 = var_438_1
                            
                            if ((rsi_9.b & 2) != 0)
                            label_1402ed802:
                                int32_t var_4b4_1 = r8_2
                                r15 = var_388_1
                                
                                if ((rsi_9.b & 4) == 0)
                                    goto label_1402ef899
                                
                                goto label_1402ed81c
                            
                        label_1402ef887:
                            r15 = var_388_1
                            
                            if ((rsi_9.b & 4) == 0)
                            label_1402ef899:
                                arg3 = var_380_1
                                
                                if ((rsi_9.b & 8) != 0)
                                    goto label_1402ed836
                                
                                goto label_1402ef8aa
                            
                        label_1402ed81c:
                            int32_t var_4b0_1 = r12_4
                            arg3 = var_380_1
                            int32_t i_7
                            
                            if ((rsi_9.b & 8) != 0)
                            label_1402ed836:
                                int32_t var_4ac_1 = rax_125
                                i_7 = i_6
                                
                                if (rdi_31 == 0)
                                    goto label_1402ef8b7
                                
                                goto label_1402ed84d
                            
                        label_1402ef8aa:
                            i_7 = i_6
                            
                            if (rdi_31 == 0)
                            label_1402ef8b7:
                                
                                if ((rsi_9.b & 2) != 0)
                                    goto label_1402ed85f
                                
                                goto label_1402ef8c1
                            
                        label_1402ed84d:
                            var_4a8 = r13_3
                            int32_t var_4a0_5
                            
                            if ((rsi_9.b & 2) == 0)
                            label_1402ef8c1:
                                
                                if ((rsi_9.b & 4) != 0)
                                    var_4a0_5 = r9_1
                            else
                            label_1402ed85f:
                                int32_t var_4a4_1 = r10_4
                                
                                if ((rsi_9.b & 4) != 0)
                                    var_4a0_5 = r9_1
                            arg4 = var_470
                            r10 = var_398
                            i = i_7
                            
                            if ((rsi_9.b & 8) == 0)
                                if (rdi_31 != 0)
                                    goto label_1402ed890
                                
                                goto label_1402ef8fc
                            
                            float var_49c_1 = var_3b8[0]
                            
                            if (rdi_31 != 0)
                            label_1402ed890:
                                var_498 = rbx_23
                                r12 = var_3d8
                                
                                if ((rsi_9.b & 2) == 0)
                                    goto label_1402ef90a
                                
                                goto label_1402ed8b0
                            
                        label_1402ef8fc:
                            r12 = var_3d8
                            
                            if ((rsi_9.b & 2) == 0)
                            label_1402ef90a:
                                
                                if ((rsi_9.b & 4) != 0)
                                    goto label_1402ed8c8
                                
                                goto label_1402ef914
                            
                        label_1402ed8b0:
                            uint32_t var_494_1 = var_3a8_1[0]
                            
                            if ((rsi_9.b & 4) != 0)
                            label_1402ed8c8:
                                float var_490_1 = var_378[0]
                                
                                if ((rsi_9.b & 8) == 0)
                                    goto label_1402ef91e
                                
                                goto label_1402ed8e0
                            
                        label_1402ef914:
                            
                            if ((rsi_9.b & 8) == 0)
                            label_1402ef91e:
                                
                                if (rdi_31 != 0)
                                    goto label_1402ed8f7
                                
                                goto label_1402ef927
                            
                        label_1402ed8e0:
                            float var_48c_1 = var_3f8[0]
                            
                            if (rdi_31 != 0)
                            label_1402ed8f7:
                                var_488 = var_408_1[0]
                                
                                if ((rsi_9.b & 2) == 0)
                                    goto label_1402ef931
                                
                                goto label_1402ed908
                            
                        label_1402ef927:
                            
                            if ((rsi_9.b & 2) == 0)
                            label_1402ef931:
                                
                                if ((rsi_9.b & 4) != 0)
                                    goto label_1402ed919
                                
                                goto label_1402ef93b
                            
                        label_1402ed908:
                            int32_t var_484_1 = rbp_2
                            int32_t var_47c_1
                            
                            if ((rsi_9.b & 4) == 0)
                            label_1402ef93b:
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_47c_1 = var_508.d
                            else
                            label_1402ed919:
                                int32_t var_480_1 = rdx_27
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_47c_1 = var_508.d
                        case 1
                            float var_408_2[0x4] = zmm13
                            zmm8 = _mm_add_epi64(zmm8, zmm6)
                            zmm3 = _mm_add_epi64(zmm3, zmm0)
                            zmm1 = _mm_shuffle_epi32(zmm4, 0x50)
                            zmm3 = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                            zmm2 = _mm_shuffle_epi32(zmm4, 0xfa)
                            arg5 = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                            int64_t rcx_37 = zmm3[0].q
                            void* rax_127 = arg4 + rcx_37
                            int64_t rbp_22 = _mm_extract_epi64(zmm3, 1)
                            zmm4 = *(arg4 + rcx_37)
                            void* rdx_53 = arg4 + rbp_22
                            zmm15 = *(arg4 + rbp_22)
                            int64_t rbp_23 = arg5[0].q
                            void* rcx_38 = arg4 + rbp_23
                            zmm13 = *(arg4 + rbp_23)
                            int64_t rbp_24 = _mm_extract_epi64(arg5, 1)
                            arg7 = *(arg4 + rbp_24)
                            arg5 = data_1434426c0
                            float temp0_642[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                            float temp0_643[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                            arg5 = *(temp0_642[0].q + rax_127)
                            zmm6 = *(_mm_extract_epi64(temp0_642, 1) + rdx_53)
                            arg9 = *(temp0_643[0].q + rcx_38)
                            int64_t rbx_27 = _mm_extract_epi64(temp0_643, 1)
                            void* rbp_25 = arg4 + rbp_24
                            zmm0 = zmm1
                            zmm1 = data_1434426e0
                            float temp0_644[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                            zmm14 = *(rbx_27 + rbp_25)
                            zmm1 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                            zmm0 = *(temp0_644[0].q + rax_127)
                            zmm2 = *(_mm_extract_epi64(temp0_644, 1) + rdx_53)
                            float (* rdx_54)[0x4] = _mm_extract_epi64(zmm1, 1)
                            arg6 = *(zmm1.q + rcx_38)
                            zmm8 = *(rdx_54 + rbp_25)
                            rsi_9 = zx.q(temp0_586)
                            rdi_31 = rsi_9 & 1
                            
                            if (rdi_31 == 0)
                                if ((rsi_9.b & 2) != 0)
                                    goto label_1402ed950
                                
                                goto label_1402efca3
                            
                            var_4b8 = zmm4[0]
                            
                            if ((rsi_9.b & 2) != 0)
                            label_1402ed950:
                                uint32_t var_4b4_2 = zmm15[0]
                                
                                if ((rsi_9.b & 4) == 0)
                                    goto label_1402efcad
                                
                                goto label_1402ed964
                            
                        label_1402efca3:
                            
                            if ((rsi_9.b & 4) == 0)
                            label_1402efcad:
                                
                                if ((rsi_9.b & 8) != 0)
                                    goto label_1402ed978
                                
                                goto label_1402efcb7
                            
                        label_1402ed964:
                            float var_4b0_2 = zmm13[0]
                            
                            if ((rsi_9.b & 8) != 0)
                            label_1402ed978:
                                int32_t var_4ac_2 = arg7[0]
                                zmm4 = _mm_insert_ps(zmm4, zmm15, 0x10)
                                
                                if (rdi_31 == 0)
                                    goto label_1402efcc7
                                
                                goto label_1402ed992
                            
                        label_1402efcb7:
                            zmm4 = _mm_insert_ps(zmm4, zmm15, 0x10)
                            float var_4a4_6
                            
                            if (rdi_31 != 0)
                            label_1402ed992:
                                var_4a8 = arg5[0]
                                zmm4 = _mm_insert_ps(zmm4, zmm13, 0x20)
                                arg5 = _mm_insert_ps(arg5, zmm6, 0x10)
                                
                                if ((rsi_9.b & 2) != 0)
                                    var_4a4_6 = zmm6[0]
                            else
                            label_1402efcc7:
                                zmm4 = _mm_insert_ps(zmm4, zmm13, 0x20)
                                arg5 = _mm_insert_ps(arg5, zmm6, 0x10)
                                
                                if ((rsi_9.b & 2) != 0)
                                    var_4a4_6 = zmm6[0]
                            float temp0_649[0x4] = _mm_insert_ps(zmm4, arg7, 0x30)
                            arg5 = _mm_insert_ps(arg5, arg9, 0x20)
                            zmm3 = _mm_insert_ps(zmm0, zmm2, 0x10)
                            zmm13 = var_408_2
                            
                            if ((rsi_9.b & 4) != 0)
                                float var_4a0_6 = arg9[0]
                            
                            arg5 = _mm_insert_ps(arg5, zmm14, 0x30)
                            zmm3 = _mm_insert_ps(zmm3, arg6, 0x20)
                            float temp0_654[0x4] = _mm_mul_ps(temp0_649, temp0_649)
                            arg7 = data_142d3f5c0
                            
                            if ((rsi_9.b & 8) != 0)
                                float var_49c_3 = zmm14[0]
                            
                            zmm3 = _mm_insert_ps(zmm3, zmm8, 0x30)
                            zmm1 = _mm_sub_ps(data_142d3f670, temp0_654)
                            arg5 = _mm_mul_ps(arg5, arg5)
                            
                            if (rdi_31 != 0)
                                var_498 = zmm0.d
                            
                            zmm1 = _mm_sub_ps(zmm1, arg5)
                            zmm3 = _mm_mul_ps(zmm3, zmm3)
                            arg9 = var_438_1
                            
                            if ((rsi_9.b & 2) != 0)
                                int32_t var_494_3 = zmm2[0]
                            
                            zmm1 = _mm_sub_ps(zmm1, zmm3)
                            
                            if ((rsi_9.b & 4) != 0)
                                uint32_t var_490_3 = arg6[0]
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                            zmm1 = _mm_sqrt_ps(zmm1)
                            
                            if ((rsi_9.b & 8) == 0)
                            label_1402f0423:
                                zmm0 = _mm_and_ps(zmm0, zmm1)
                                
                                if (rdi_31 != 0)
                                    goto label_1402efdbe
                                
                                goto label_1402f042f
                            
                            float var_48c_4 = zmm8[0]
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (rdi_31 != 0)
                            label_1402efdbe:
                                var_488 = zmm0.d
                                
                                if ((rsi_9.b & 2) == 0)
                                    goto label_1402f0439
                                
                                goto label_1402efdd1
                            
                        label_1402f042f:
                            
                            if ((rsi_9.b & 2) == 0)
                            label_1402f0439:
                                
                                if ((rsi_9.b & 4) != 0)
                                    goto label_1402efde6
                                
                                goto label_1402f0443
                            
                        label_1402efdd1:
                            int32_t var_484_3 = __extractps_memd_xmmps_immb(zmm0, 1)
                            int32_t var_47c_2
                            
                            if ((rsi_9.b & 4) == 0)
                            label_1402f0443:
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_47c_2 = __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_1402efde6:
                                int32_t var_480_3 = __extractps_memd_xmmps_immb(zmm0, 2)
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_47c_2 = __extractps_memd_xmmps_immb(zmm0, 3)
                        case 2
                            zmm8 = _mm_add_epi64(zmm8, zmm6)
                            zmm3 = _mm_add_epi64(zmm3, zmm0)
                            zmm2 = _mm_shuffle_epi32(zmm4, 0x50)
                            arg5 = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                            zmm1 = _mm_shuffle_epi32(zmm4, 0xfa)
                            zmm3 = _mm_blendv_ps(zx.o(0), zmm8, zmm1)
                            int64_t rax_130 = arg5[0].q
                            void* rbx_29 = arg4 + rax_130
                            int64_t rcx_39 = _mm_extract_epi64(arg5, 1)
                            void* rbp_26 = arg4 + rcx_39
                            int64_t rdx_55 = zmm3[0].q
                            zmm4 = data_1434426b0
                            arg5 = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                            float temp0_673[0x4] = _mm_blendv_ps(zx.o(0), zmm4, zmm1)
                            zmm6 = zx.o(*(arg5[0].q + rbx_29))
                            int16_t* rdi_35 = _mm_extract_epi64(arg5, 1)
                            zmm0 = zmm2
                            zmm2 = data_1434426c0
                            arg5 = _mm_blendv_ps(zx.o(0), zmm2, zmm0)
                            zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(rdi_35 + rbp_26), 1)
                            void* rdi_37 = arg4 + rdx_55
                            int32_t temp0_676[0x4] = __pinsrw_xmmdq_memw_immb(
                                zx.o(*(arg5[0].q + rbx_29)), 
                                *(_mm_extract_epi64(arg5, 1) + rbp_26), 1)
                            int64_t rbp_27 = _mm_extract_epi64(zmm3, 1)
                            int16_t* rbx_32 = temp0_673[0].q
                            zmm3 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                            zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(rbx_32 + rdi_37), 2)
                            int32_t temp0_679[0x4] =
                                __pinsrw_xmmdq_memw_immb(temp0_676, *(zmm3[0].q + rdi_37), 2)
                            void* rbx_34 = arg4 + rbp_27
                            zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, 
                                *(_mm_extract_epi64(temp0_673, 1) + rbx_34), 3)
                            int32_t temp0_681[0x4] = __pinsrw_xmmdq_memw_immb(temp0_679, 
                                *(_mm_extract_epi64(zmm3, 1) + rbx_34), 3)
                            zmm0 = __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(
                                    _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                        __pinsrw_xmmdq_memw_immb(
                                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_130)), 
                                                *(arg4 + rcx_39), 1), 
                                            *(arg4 + rdx_55), 2), 
                                        *(arg4 + rbp_27), 3).q), 
                                    data_1434424d0)), 
                                data_1434426d0)
                            zmm1 = _mm_cvtepu16_epi32(zmm6[0].q)
                            rsi_9 = zx.q(temp0_586)
                            rdi_31 = rsi_9 & 1
                            
                            if (rdi_31 != 0)
                                var_4b8 = zmm0.d
                            
                            zmm1 = __paddd_xmmdq_memdq(zmm1, data_1434424d0)
                            arg7 = data_142d3f5c0
                            arg9 = var_438_1
                            
                            if ((rsi_9.b & 2) == 0)
                                zmm1 = _mm_cvtepi32_ps(zmm1)
                                
                                if ((rsi_9.b & 4) != 0)
                                    goto label_1402ed9cf
                                
                                goto label_1402eff7c
                            
                            int32_t var_4b4_3 = __extractps_memd_xmmps_immb(zmm0, 1)
                            zmm1 = _mm_cvtepi32_ps(zmm1)
                            
                            if ((rsi_9.b & 4) != 0)
                            label_1402ed9cf:
                                int32_t var_4b0_3 = __extractps_memd_xmmps_immb(zmm0, 2)
                                zmm1 = __divps_xmmps_memps(zmm1, data_1434426d0)
                                
                                if ((rsi_9.b & 8) == 0)
                                    goto label_1402eff8d
                                
                                goto label_1402ed9eb
                            
                        label_1402eff7c:
                            zmm1 = __divps_xmmps_memps(zmm1, data_1434426d0)
                            
                            if ((rsi_9.b & 8) == 0)
                            label_1402eff8d:
                                zmm2 = _mm_cvtepu16_epi32(temp0_681[0].q)
                                
                                if (rdi_31 != 0)
                                    goto label_1402eda04
                                
                                goto label_1402eff9b
                            
                        label_1402ed9eb:
                            int32_t var_4ac_3 = __extractps_memd_xmmps_immb(zmm0, 3)
                            zmm2 = _mm_cvtepu16_epi32(temp0_681[0].q)
                            
                            if (rdi_31 != 0)
                            label_1402eda04:
                                var_4a8 = zmm1.d
                                zmm2 = __paddd_xmmdq_memdq(zmm2, data_1434424d0)
                                
                                if ((rsi_9.b & 2) == 0)
                                    goto label_1402effad
                                
                                goto label_1402eda1f
                            
                        label_1402eff9b:
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_1434424d0)
                            
                            if ((rsi_9.b & 2) == 0)
                            label_1402effad:
                                zmm2 = _mm_cvtepi32_ps(zmm2)
                                
                                if ((rsi_9.b & 4) != 0)
                                    goto label_1402eda37
                                
                                goto label_1402effba
                            
                        label_1402eda1f:
                            int32_t var_4a4_2 = __extractps_memd_xmmps_immb(zmm1, 1)
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            int32_t var_49c_4
                            
                            if ((rsi_9.b & 4) == 0)
                            label_1402effba:
                                zmm0 = _mm_mul_ps(zmm0, zmm0)
                                zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_49c_4 = __extractps_memd_xmmps_immb(zmm1, 3)
                            else
                            label_1402eda37:
                                int32_t var_4a0_1 = __extractps_memd_xmmps_immb(zmm1, 2)
                                zmm0 = _mm_mul_ps(zmm0, zmm0)
                                zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_49c_4 = __extractps_memd_xmmps_immb(zmm1, 3)
                            zmm3 = _mm_sub_ps(data_142d3f670, zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            
                            if (rdi_31 != 0)
                                var_498 = zmm2[0]
                            
                            zmm3 = _mm_sub_ps(zmm3, zmm1)
                            zmm0 = _mm_mul_ps(zmm2, zmm2)
                            
                            if ((rsi_9.b & 2) != 0)
                                int32_t var_494_4 = __extractps_memd_xmmps_immb(zmm2, 1)
                            
                            zmm3 = _mm_sub_ps(zmm3, zmm0)
                            
                            if ((rsi_9.b & 4) != 0)
                                int32_t var_490_4 = __extractps_memd_xmmps_immb(zmm2, 2)
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            zmm1 = _mm_sqrt_ps(zmm3)
                            
                            if ((rsi_9.b & 8) == 0)
                                goto label_1402f0423
                            
                            int32_t var_48c_5 = __extractps_memd_xmmps_immb(zmm2, 3)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (rdi_31 != 0)
                                goto label_1402efdbe
                            
                            goto label_1402f042f
                        case 3
                            var_408_1[0].q = r13
                            zmm7 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                            zmm1 = var_3f8 & zmm7
                            int64_t rax_133 = sx.q(zmm1.d)
                            void* r10_5 = var_470 + rax_133
                            arg6 = zmm8
                            zmm8 = *(var_470 + rax_133)
                            int64_t rax_135 = sx.q(_mm_extract_epi32(zmm1, 1))
                            void* r9_2 = var_470 + rax_135
                            int64_t rdx_57 = sx.q(_mm_extract_epi32(zmm1, 2))
                            void* r8_3 = var_470 + rdx_57
                            int64_t rax_137 = sx.q(_mm_extract_epi32(zmm1, 3))
                            float temp0_717[0x4] = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm8, *(var_470 + rax_135), 0x10), 
                                    *(var_470 + rdx_57), 0x20), 
                                *(var_470 + rax_137), 0x30)
                            zmm2 = zmm3
                            zmm3 = zmm7 & data_142fc95e0
                            zmm1 = *(zx.q(zmm3[0]) + r10_5)
                            int32_t* rdx_59 = zx.q(_mm_extract_epi32(zmm3, 1))
                            int32_t* rbx_36 = zx.q(_mm_extract_epi32(zmm3, 2))
                            int32_t* rdi_41 = zx.q(_mm_extract_epi32(zmm3, 3))
                            void* r14_8 = var_470 + rax_137
                            zmm1 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm1, *(rdx_59 + r9_2), 0x10), 
                                    *(rbx_36 + r8_3), 0x20), 
                                *(rdi_41 + r14_8), 0x30)
                            zmm3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm2, zmm0), 
                                _mm_shuffle_epi32(zmm4, 0x50))
                            zmm0 = zmm7 & data_142fc95f0
                            arg5 = *(zx.q(zmm0.d) + r10_5)
                            int32_t* rdx_61 = zx.q(_mm_extract_epi32(zmm0, 1))
                            int32_t* r12_5 = zx.q(_mm_extract_epi32(zmm0, 2))
                            int32_t* r15_6 = zx.q(_mm_extract_epi32(zmm0, 3))
                            arg5 = __insertps_xmmps_memd_immb(arg5, *(rdx_61 + r9_2), 0x10)
                            zmm0 = zmm7 & data_143442650
                            int32_t* rcx_47 = zx.q(_mm_extract_epi32(zmm0, 1))
                            int32_t* rbp_28 = zx.q(_mm_extract_epi32(zmm0, 2))
                            int32_t* r13_4 = zx.q(_mm_extract_epi32(zmm0, 3))
                            zmm2 = *(zx.q(zmm0.d) + r10_5)
                            float temp0_736[0x4] = _mm_blendv_ps(zx.o(0), 
                                _mm_add_epi64(arg6, zmm6), _mm_shuffle_epi32(zmm4, 0xfa))
                            zmm0 = zmm7 & data_143442660
                            int32_t* rdi_42 = zx.q(_mm_extract_epi32(zmm0, 1))
                            int32_t* rbx_37 = zx.q(_mm_extract_epi32(zmm0, 2))
                            zmm4 = *(zx.q(zmm0.d) + r10_5)
                            int32_t* rdx_64 = zx.q(_mm_extract_epi32(zmm0, 3))
                            zmm7 &= data_143442670
                            zmm0 = *(zx.q(zmm7[0]) + r10_5)
                            int32_t* rax_139 = zx.q(_mm_extract_epi32(zmm7, 1))
                            int32_t* rsi_10 = zx.q(_mm_extract_epi32(zmm7, 2))
                            int32_t* r10_6 = zx.q(_mm_extract_epi32(zmm7, 3))
                            arg5 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg5, *(r12_5 + r8_3), 0x20), 
                                *(r15_6 + r14_8), 0x30)
                            zmm2 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm2, *(rcx_47 + r9_2), 0x10), 
                                    *(rbp_28 + r8_3), 0x20), 
                                *(r13_4 + r14_8), 0x30)
                            float temp0_750[0x4] = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm4, *(rdi_42 + r9_2), 0x10), 
                                    *(rbx_37 + r8_3), 0x20), 
                                *(rdx_64 + r14_8), 0x30)
                            zmm0 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm0, *(rax_139 + r9_2), 0x10), 
                                    *(rsi_10 + r8_3), 0x20), 
                                *(r10_6 + r14_8), 0x30)
                            arg4 = var_470
                            int64_t rax_140 = zmm3[0].q
                            int64_t rcx_48 = _mm_extract_epi64(zmm3, 1)
                            int64_t rdx_65 = _mm_extract_epi64(temp0_736, 1)
                            zmm6 = __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_140)), 
                                        *(arg4 + rcx_48), 1), 
                                    *(arg4 + temp0_736[0].q), 2), 
                                *(arg4 + rdx_65), 3)
                            uint32_t temp0_757[0x4] = _mm_srli_epi32(zmm6, 0x15)
                            zmm7 = data_143442440
                            zmm3 = _mm_add_ps(
                                _mm_mul_ps(
                                    __divps_xmmps_memps(
                                        _mm_cvtepi32_ps(_mm_add_epi32(temp0_757, zmm7)), 
                                        data_143442690), 
                                    zmm2), 
                                temp0_717)
                            zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(
                                _mm_srli_epi32(zmm6, 0xa) & data_143442480, zmm7))
                            rsi_9 = zx.q(temp0_586)
                            rdi_31 = rsi_9 & 1
                            
                            if (rdi_31 != 0)
                                var_4b8 = zmm3[0]
                            
                            zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                            arg7 = data_142d3f5c0
                            arg9 = var_438_1
                            
                            if ((rsi_9.b & 2) != 0)
                                int32_t var_4b4_6 = __extractps_memd_xmmps_immb(zmm3, 1)
                            
                            zmm6 &= data_143442680
                            float temp0_768[0x4] = _mm_mul_ps(temp0_750, zmm2)
                            r12 = var_3d8
                            r10 = var_398
                            arg3 = var_380_1
                            r15 = var_388_1
                            i = i_6
                            r13 = var_408_1[0].q
                            
                            if ((rsi_9.b & 4) == 0)
                                zmm6 = __paddd_xmmdq_memdq(zmm6, data_143442490)
                                zmm1 = _mm_add_ps(zmm1, temp0_768)
                                
                                if ((rsi_9.b & 8) != 0)
                                    goto label_1402eda7b
                                
                                goto label_1402f0385
                            
                            int32_t var_4b0_4 = __extractps_memd_xmmps_immb(zmm3, 2)
                            zmm6 = __paddd_xmmdq_memdq(zmm6, data_143442490)
                            zmm1 = _mm_add_ps(zmm1, temp0_768)
                            
                            if ((rsi_9.b & 8) != 0)
                            label_1402eda7b:
                                int32_t var_4ac_4 = __extractps_memd_xmmps_immb(zmm3, 3)
                                zmm2 = _mm_cvtepi32_ps(zmm6)
                                
                                if (rdi_31 == 0)
                                    goto label_1402f0391
                                
                                goto label_1402eda92
                            
                        label_1402f0385:
                            zmm2 = _mm_cvtepi32_ps(zmm6)
                            
                            if (rdi_31 == 0)
                            label_1402f0391:
                                zmm2 = __divps_xmmps_memps(zmm2, data_1434426a0)
                                
                                if ((rsi_9.b & 2) != 0)
                                    goto label_1402edaac
                                
                                goto label_1402f03a2
                            
                        label_1402eda92:
                            var_4a8 = zmm1.d
                            zmm2 = __divps_xmmps_memps(zmm2, data_1434426a0)
                            
                            if ((rsi_9.b & 2) != 0)
                            label_1402edaac:
                                int32_t var_4a4_3 = __extractps_memd_xmmps_immb(zmm1, 1)
                                zmm0 = _mm_mul_ps(zmm0, zmm2)
                                
                                if ((rsi_9.b & 4) == 0)
                                    goto label_1402f03af
                                
                                goto label_1402edac4
                            
                        label_1402f03a2:
                            zmm0 = _mm_mul_ps(zmm0, zmm2)
                            int32_t var_49c_5
                            
                            if ((rsi_9.b & 4) != 0)
                            label_1402edac4:
                                int32_t var_4a0_2 = __extractps_memd_xmmps_immb(zmm1, 2)
                                zmm3 = _mm_mul_ps(zmm3, zmm3)
                                arg5 = _mm_add_ps(arg5, zmm0)
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_49c_5 = __extractps_memd_xmmps_immb(zmm1, 3)
                            else
                            label_1402f03af:
                                zmm3 = _mm_mul_ps(zmm3, zmm3)
                                arg5 = _mm_add_ps(arg5, zmm0)
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_49c_5 = __extractps_memd_xmmps_immb(zmm1, 3)
                            zmm2 = _mm_sub_ps(data_142d3f670, zmm3)
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            
                            if (rdi_31 != 0)
                                var_498 = arg5[0]
                            
                            zmm2 = _mm_sub_ps(zmm2, zmm1)
                            zmm0 = _mm_mul_ps(arg5, arg5)
                            
                            if ((rsi_9.b & 2) != 0)
                                int32_t var_494_5 = __extractps_memd_xmmps_immb(arg5, 1)
                            
                            zmm2 = _mm_sub_ps(zmm2, zmm0)
                            
                            if ((rsi_9.b & 4) != 0)
                                int32_t var_490_5 = __extractps_memd_xmmps_immb(arg5, 2)
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm2, 1)
                            zmm1 = _mm_sqrt_ps(zmm2)
                            
                            if ((rsi_9.b & 8) == 0)
                                goto label_1402f0423
                            
                            int32_t var_48c_2 = __extractps_memd_xmmps_immb(arg5, 3)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (rdi_31 != 0)
                                goto label_1402efdbe
                            
                            goto label_1402f042f
                        case 4
                            zmm8 = _mm_add_epi64(zmm8, zmm6)
                            zmm1 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm3, zmm0), 
                                _mm_shuffle_epi32(zmm4, 0x50))
                            zmm2 = _mm_blendv_ps(zx.o(0), zmm8, _mm_shuffle_epi32(zmm4, 0xfa))
                            int64_t rcx_49 = _mm_extract_epi64(zmm1, 1)
                            int64_t rdx_66 = _mm_extract_epi64(zmm2, 1)
                            zmm1 = __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), 
                                        *(arg4 + rcx_49), 1), 
                                    *(arg4 + zmm2[0].q), 2), 
                                *(arg4 + rdx_66), 3)
                            zmm0 = _mm_srli_epi32(zmm1, 0x15)
                            zmm2 = _mm_srli_epi32(zmm1, 0xa) & data_143442480
                            zmm0 = __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442440)), 
                                data_143442690)
                            rsi_9 = zx.q(temp0_586)
                            rdi_31 = rsi_9 & 1
                            
                            if (rdi_31 == 0)
                                zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                                arg7 = data_142d3f5c0
                                
                                if ((rsi_9.b & 2) != 0)
                                    goto label_1402edb23
                                
                                goto label_1402f050f
                            
                            var_4b8 = zmm0.d
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                            arg7 = data_142d3f5c0
                            
                            if ((rsi_9.b & 2) != 0)
                            label_1402edb23:
                                int32_t var_4b4_4 = __extractps_memd_xmmps_immb(zmm0, 1)
                                zmm2 = _mm_cvtepi32_ps(zmm2)
                                
                                if ((rsi_9.b & 4) == 0)
                                    goto label_1402f051c
                                
                                goto label_1402edb3b
                            
                        label_1402f050f:
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rsi_9.b & 4) == 0)
                            label_1402f051c:
                                zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                                
                                if ((rsi_9.b & 8) != 0)
                                    goto label_1402edb57
                                
                                goto label_1402f052d
                            
                        label_1402edb3b:
                            int32_t var_4b0_5 = __extractps_memd_xmmps_immb(zmm0, 2)
                            zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                            
                            if ((rsi_9.b & 8) != 0)
                            label_1402edb57:
                                int32_t var_4ac_5 = __extractps_memd_xmmps_immb(zmm0, 3)
                                zmm1 &= data_143442680
                                
                                if (rdi_31 == 0)
                                    goto label_1402f053e
                                
                                goto label_1402edb73
                            
                        label_1402f052d:
                            zmm1 &= data_143442680
                            
                            if (rdi_31 == 0)
                            label_1402f053e:
                                zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                                
                                if ((rsi_9.b & 2) != 0)
                                    goto label_1402edb8e
                                
                                goto label_1402f0550
                            
                        label_1402edb73:
                            var_4a8 = zmm2[0]
                            zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                            
                            if ((rsi_9.b & 2) != 0)
                            label_1402edb8e:
                                int32_t var_4a4_4 = __extractps_memd_xmmps_immb(zmm2, 1)
                                zmm1 = _mm_cvtepi32_ps(zmm1)
                                
                                if ((rsi_9.b & 4) == 0)
                                    goto label_1402f055d
                                
                                goto label_1402edba6
                            
                        label_1402f0550:
                            zmm1 = _mm_cvtepi32_ps(zmm1)
                            int32_t var_49c_6
                            
                            if ((rsi_9.b & 4) != 0)
                            label_1402edba6:
                                int32_t var_4a0_3 = __extractps_memd_xmmps_immb(zmm2, 2)
                                zmm0 = _mm_mul_ps(zmm0, zmm0)
                                zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_49c_6 = __extractps_memd_xmmps_immb(zmm2, 3)
                            else
                            label_1402f055d:
                                zmm0 = _mm_mul_ps(zmm0, zmm0)
                                zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_49c_6 = __extractps_memd_xmmps_immb(zmm2, 3)
                            zmm3 = _mm_sub_ps(data_142d3f670, zmm0)
                            zmm2 = _mm_mul_ps(zmm2, zmm2)
                            
                            if (rdi_31 != 0)
                                var_498 = zmm1.d
                            
                            zmm3 = _mm_sub_ps(zmm3, zmm2)
                            zmm0 = _mm_mul_ps(zmm1, zmm1)
                            
                            if ((rsi_9.b & 2) != 0)
                                int32_t var_494_6 = __extractps_memd_xmmps_immb(zmm1, 1)
                            
                            zmm3 = _mm_sub_ps(zmm3, zmm0)
                            
                            if ((rsi_9.b & 4) != 0)
                                int32_t var_490_6 = __extractps_memd_xmmps_immb(zmm1, 2)
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            zmm2 = _mm_sqrt_ps(zmm3)
                            
                            if ((rsi_9.b & 8) != 0)
                                int32_t var_48c_6 = __extractps_memd_xmmps_immb(zmm1, 3)
                            
                            zmm0 = _mm_and_ps(zmm0, zmm2)
                            
                            if (rdi_31 == 0)
                                goto label_1402f07f1
                            
                        label_1402f07e8:
                            var_488 = zmm0.d
                        label_1402f07f1:
                            
                            if ((rsi_9.b & 2) == 0)
                                if ((rsi_9.b & 4) != 0)
                                    goto label_1402f0819
                                
                                goto label_1402f07fd
                            
                            int32_t var_484_4 = __extractps_memd_xmmps_immb(zmm0, 1)
                            int32_t var_47c_3
                            
                            if ((rsi_9.b & 4) == 0)
                            label_1402f07fd:
                                
                                if ((rsi_9.b & 8) != 0)
                                    var_47c_3 = __extractps_memd_xmmps_immb(zmm0, 3)
                                    arg9 = var_438_1
                                else
                                    arg9 = var_438_1
                            else
                            label_1402f0819:
                                int32_t var_480_4 = __extractps_memd_xmmps_immb(zmm0, 2)
                                
                                if ((rsi_9.b & 8) == 0)
                                    arg9 = var_438_1
                                else
                                    var_47c_3 = __extractps_memd_xmmps_immb(zmm0, 3)
                                    arg9 = var_438_1
                        case 5
                            zmm8 = _mm_add_epi64(zmm8, zmm6)
                            zmm1 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm3, zmm0), 
                                _mm_shuffle_epi32(zmm4, 0x50))
                            zmm2 = _mm_blendv_ps(zx.o(0), zmm8, _mm_shuffle_epi32(zmm4, 0xfa))
                            int64_t rcx_50 = _mm_extract_epi64(zmm1, 1)
                            int64_t rdx_67 = zmm2[0].q
                            int64_t rbp_31 = _mm_extract_epi64(zmm2, 1)
                            zmm0 = __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), 
                                        *(arg4 + rcx_50), 1), 
                                    *(arg4 + rdx_67), 2), 
                                *(arg4 + rbp_31), 3)
                            zmm1 = _mm_srli_epi32(zmm0, 0x15)
                            zmm2 = _mm_srli_epi32(zmm0, 5) & data_143442600
                            zmm1 = __paddd_xmmdq_memdq(zmm1 & data_143442320, data_143442330)
                                | (zmm1 & data_143442610) | zmm2
                            rsi_9 = zx.q(temp0_586)
                            rdi_31 = rsi_9 & 1
                            
                            if (rdi_31 != 0)
                                var_4b8 = zmm1.d
                            
                            uint32_t temp0_833[0x4] = _mm_srli_epi32(zmm0, 0xa)
                            zmm2 = _mm_slli_epi32(zmm0, 6)
                            arg7 = data_142d3f5c0
                            
                            if ((rsi_9.b & 2) != 0)
                                int32_t var_4b4_7 = __pextrd_memd_xmmdq_immb(zmm1, 1)
                            
                            zmm2 &= data_143442600
                            zmm4 = temp0_833 & data_143442610
                            zmm3 = temp0_833 & data_143442320
                            
                            if ((rsi_9.b & 4) == 0)
                                zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                                zmm2 |= zmm4
                                
                                if ((rsi_9.b & 8) != 0)
                                    goto label_1402edbeb
                                
                                goto label_1402f0703
                            
                            int32_t var_4b0_6 = __pextrd_memd_xmmdq_immb(zmm1, 2)
                            zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                            zmm2 |= zmm4
                            
                            if ((rsi_9.b & 8) != 0)
                            label_1402edbeb:
                                int32_t var_4ac_6 = __pextrd_memd_xmmdq_immb(zmm1, 3)
                                zmm2 |= zmm3
                                
                                if (rdi_31 == 0)
                                    goto label_1402f0714
                                
                                goto label_1402edc03
                            
                        label_1402f0703:
                            zmm2 |= zmm3
                            int32_t var_4a4_7
                            
                            if (rdi_31 != 0)
                            label_1402edc03:
                                var_4a8 = zmm2[0]
                                zmm4 = zmm0 & data_143442620
                                
                                if ((rsi_9.b & 2) != 0)
                                    var_4a4_7 = __pextrd_memd_xmmdq_immb(zmm2, 1)
                            else
                            label_1402f0714:
                                zmm4 = zmm0 & data_143442620
                                
                                if ((rsi_9.b & 2) != 0)
                                    var_4a4_7 = __pextrd_memd_xmmdq_immb(zmm2, 1)
                            uint32_t temp0_838[0x4] = _mm_slli_epi32(zmm0, 0x11)
                            zmm0 &= data_143442640
                            zmm4 = __paddd_xmmdq_memdq(zmm4, data_1434423a0)
                            
                            if ((rsi_9.b & 4) != 0)
                                int32_t var_4a0_7 = __pextrd_memd_xmmdq_immb(zmm2, 2)
                            
                            zmm3 = temp0_838 & data_143442630
                            zmm1 = _mm_mul_ps(zmm1, zmm1)
                            
                            if ((rsi_9.b & 8) != 0)
                                int32_t var_49c_7 = __pextrd_memd_xmmdq_immb(zmm2, 3)
                            
                            zmm3 |= zmm0 | zmm4
                            float temp0_843[0x4] = _mm_sub_ps(data_142d3f670, zmm1)
                            zmm2 = _mm_mul_ps(zmm2, zmm2)
                            
                            if (rdi_31 != 0)
                                var_498 = zmm3[0]
                            
                            float temp0_845[0x4] = _mm_sub_ps(temp0_843, zmm2)
                            zmm0 = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((rsi_9.b & 2) != 0)
                                int32_t var_494_7 = __pextrd_memd_xmmdq_immb(zmm3, 1)
                            
                            float temp0_848[0x4] = _mm_sub_ps(temp0_845, zmm0)
                            
                            if ((rsi_9.b & 4) != 0)
                                int32_t var_490_7 = __pextrd_memd_xmmdq_immb(zmm3, 2)
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), temp0_848, 1)
                            zmm1 = _mm_sqrt_ps(temp0_848)
                            
                            if ((rsi_9.b & 8) != 0)
                                int32_t var_48c_7 = __pextrd_memd_xmmdq_immb(zmm3, 3)
                            
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (rdi_31 == 0)
                                goto label_1402f07f1
                            
                            goto label_1402f07e8
                
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
                float temp0_866[0x4] = _mm_mul_ps(zmm7, zmm6)
                float temp0_867[0x4] = _mm_mul_ps(zmm14, zmm6)
                arg8 = _mm_mul_ps(arg8, zmm6)
                arg5 = data_142d3f670
                zmm2 = _mm_blendv_ps(data_142d3f7e0, arg5, zmm0)
                zmm0 = _mm_mul_ps(_mm_sub_ps(arg5, zmm6), zmm2)
                float temp0_873[0x4] = _mm_add_ps(_mm_mul_ps(zmm4, zmm0), zmm3)
                zmm1 = _mm_add_ps(_mm_mul_ps(var_538, zmm0), temp0_866)
                arg6 = _mm_add_ps(_mm_mul_ps(var_528, zmm0), temp0_867)
                zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, var_518), arg8)
                float var_168_1[0x4] = temp0_873
                uint128_t var_158_1 = zmm1
                uint32_t var_148_1[0x4] = arg6
                uint128_t var_138_1 = zmm0
                zmm2 = _mm_mul_ps(temp0_873, temp0_873)
                zmm3 = _mm_mul_ps(zmm1, zmm1)
                arg5 = _mm_add_ps(_mm_mul_ps(arg6, arg6), zmm2)
                float temp0_886[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm0, zmm0), zmm3), arg5)
                float temp0_887[0x4] = _mm_cmpeq_ps(arg7, temp0_886, 2)
                arg8 = data_142d3f640
                zmm2 = _mm_mul_ps(temp0_886, arg8)
                zmm3 = _mm_rsqrt_ps(temp0_886)
                arg5 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(arg8, _mm_mul_ps(_mm_mul_ps(zmm3, zmm3), zmm2)), zmm3), 
                    zmm3)
                zmm3 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(arg8, _mm_mul_ps(_mm_mul_ps(arg5, arg5), zmm2)), arg5), 
                    arg5)
                zmm4 = _mm_and_ps(_mm_mul_ps(temp0_873, zmm3), temp0_887)
                
                if (rdi_31 != 0)
                    var_548 = zmm4[0]
                
                arg8 = _mm_cmpeq_epi32(arg8, arg8)
                zmm7 = var_348_2
                arg5 = var_468
                
                if ((rsi_9.b & 2) == 0)
                    if ((rsi_9.b & 4) != 0)
                        goto label_1402eca3a
                    
                    goto label_1402f0a73
                
                int32_t var_544_1 = __extractps_memd_xmmps_immb(zmm4, 1)
                
                if ((rsi_9.b & 4) != 0)
                label_1402eca3a:
                    int32_t var_540_1 = __extractps_memd_xmmps_immb(zmm4, 2)
                    zmm1 = _mm_mul_ps(zmm1, zmm3)
                    
                    if ((rsi_9.b & 8) == 0)
                        goto label_1402f0a80
                    
                    goto label_1402eca4f
                
            label_1402f0a73:
                zmm1 = _mm_mul_ps(zmm1, zmm3)
                
                if ((rsi_9.b & 8) != 0)
                label_1402eca4f:
                    int32_t var_53c_1 = __extractps_memd_xmmps_immb(zmm4, 3)
                    zmm1 = _mm_and_ps(zmm1, temp0_887)
                    
                    if (rdi_31 != 0)
                        var_538.d = zmm1.d
                else
                label_1402f0a80:
                    zmm1 = _mm_and_ps(zmm1, temp0_887)
                    
                    if (rdi_31 != 0)
                        var_538.d = zmm1.d
                
                if ((rsi_9.b & 2) == 0)
                    if ((rsi_9.b & 4) != 0)
                        goto label_1402eca7b
                    
                    goto label_1402f0aa3
                
                var_538:4.d = __extractps_memd_xmmps_immb(zmm1, 1)
                
                if ((rsi_9.b & 4) != 0)
                label_1402eca7b:
                    var_538:8.d = __extractps_memd_xmmps_immb(zmm1, 2)
                    arg6 = _mm_mul_ps(arg6, zmm3)
                    
                    if ((rsi_9.b & 8) == 0)
                        goto label_1402f0ab1
                    
                    goto label_1402eca91
                
            label_1402f0aa3:
                arg6 = _mm_mul_ps(arg6, zmm3)
                
                if ((rsi_9.b & 8) != 0)
                label_1402eca91:
                    var_538:0xc.d = __extractps_memd_xmmps_immb(zmm1, 3)
                    arg6 = _mm_and_ps(arg6, temp0_887)
                    
                    if (rdi_31 != 0)
                        var_528[0] = arg6[0]
                else
                label_1402f0ab1:
                    arg6 = _mm_and_ps(arg6, temp0_887)
                    
                    if (rdi_31 != 0)
                        var_528[0] = arg6[0]
                
                if ((rsi_9.b & 2) != 0)
                    var_528[1] = __extractps_memd_xmmps_immb(arg6, 1)
                
                zmm2 = _mm_cmpeq_ps(arg7, temp0_886, 6)
                zmm3 = _mm_mul_ps(zmm3, zmm0)
                
                if ((rsi_9.b & 4) == 0)
                    zmm3 = _mm_and_ps(zmm3, temp0_887)
                    zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f670)
                    
                    if ((rsi_9.b & 8) != 0)
                        goto label_1402ecac9
                    
                    goto label_1402f0afa
                
                var_528[2] = __extractps_memd_xmmps_immb(arg6, 2)
                zmm3 = _mm_and_ps(zmm3, temp0_887)
                zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f670)
                
                if ((rsi_9.b & 8) == 0)
                label_1402f0afa:
                    zmm3 = _mm_or_ps(zmm3, zmm2)
                    
                    if (rdi_31 != 0)
                        var_518[0] = zmm3[0]
                else
                label_1402ecac9:
                    var_528[3] = __extractps_memd_xmmps_immb(arg6, 3)
                    zmm3 = _mm_or_ps(zmm3, zmm2)
                    
                    if (rdi_31 != 0)
                        var_518[0] = zmm3[0]
                
                if ((rsi_9.b & 2) == 0)
                    if ((rsi_9.b & 4) != 0)
                        goto label_1402ecaf5
                    
                    goto label_1402f0b1c
                
                var_518[1] = __extractps_memd_xmmps_immb(zmm3, 1)
                
                if ((rsi_9.b & 4) == 0)
                label_1402f0b1c:
                    
                    if ((rsi_9.b & 8) != 0)
                        var_518[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                else
                label_1402ecaf5:
                    var_518[2] = __extractps_memd_xmmps_immb(zmm3, 2)
                    
                    if ((rsi_9.b & 8) != 0)
                        var_518[3] = __extractps_memd_xmmps_immb(zmm3, 3)
        
        zmm0 = var_548.o
        zmm2 = var_528
        zmm3 = var_518
        float temp0_914[0x4] = _mm_unpacklo_ps(zmm2, zmm3[0].q)
        zmm2 = _mm_unpackhi_ps(zmm2, zmm3)
        zmm3 = _mm_unpacklo_ps(zmm0, var_538.q)
        zmm0 = _mm_unpackhi_ps(zmm0, var_538)
        zmm1 = zmm3.q | temp0_914[0].q << 0x40
        uint128_t var_1a8_1 = zmm1
        zmm3 = _mm_unpackhi_pd(zmm3, temp0_914[0].q)
        uint32_t var_198_1[0x4] = zmm3
        zmm4 = zmm0[0].q | zmm2[0].q << 0x40
        float var_188_1[0x4] = zmm4
        zmm6 = var_418
        r12[sx.q(zmm6[0]) * 3] = zmm1
        int32_t temp0_919 = _mm_extract_epi32(zmm6, 2)
        zmm0 = _mm_unpackhi_pd(zmm0, zmm2[0].q)
        r12[sx.q(temp0_919) * 3] = zmm3
        r12[sx.q(arg9[0]) * 3] = zmm4
        r12[sx.q(_mm_extract_epi32(arg9, 2)) * 3] = zmm0
        r13 = zx.q(r13.d + 4)
        zmm1 = zmm13
        arg6 = zmm7
    while (r13.d s< i)

uint64_t i_5 = zx.q(arg14)

if (r13.d s< i_5.d)
    zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r13.d), 0), data_142e11d00)
    zmm15 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i_5.d), 0), zmm0)
    zmm0 = _mm_slli_epi32(zmm0, 3) & zmm15
    int64_t rax_160 = sx.q(zmm0.d)
    int64_t rdx_69 = sx.q(_mm_extract_epi32(zmm0, 1))
    int64_t rbx_39 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rsi_12 = sx.q(_mm_extract_epi32(zmm0, 3))
    zmm13 = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(r15 + rax_160)), *(r15 + rdx_69), 1), *(r15 + rbx_39), 
            2), 
        *(r15 + rsi_12), 3)
    zmm0 = data_142fc95e0 & zmm15
    int32_t* rax_161 = zx.q(_mm_extract_epi32(zmm0, 1))
    int32_t* rdx_70 = zx.q(_mm_extract_epi32(zmm0, 2))
    int32_t* rbx_40 = zx.q(_mm_extract_epi32(zmm0, 3))
    int32_t temp0_938[0x4] = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(zx.q(zmm0.d) + r15 + rax_160)), 
                *(rax_161 + r15 + rdx_69), 1), 
            *(rdx_70 + r15 + rbx_39), 2), 
        *(rbx_40 + r15 + rsi_12), 3)
    zmm0 = _mm_slli_epi32(temp0_938, 4) & zmm15
    zmm1 = data_142fc95f0 & zmm15
    int64_t rax_164 = sx.q(zmm0.d) + arg3
    int64_t rcx_53 = sx.q(_mm_extract_epi32(zmm0, 1))
    uint64_t rbx_41 = zx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rcx_54 = rcx_53 + arg3
    int64_t rdx_72 = sx.q(_mm_extract_epi32(zmm0, 2))
    uint64_t rdi_48 = zx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rdx_73 = rdx_72 + arg3
    int64_t rsi_16 = sx.q(_mm_extract_epi32(zmm0, 3)) + arg3
    uint64_t rbp_33 = zx.q(_mm_extract_epi32(zmm1, 3))
    uint128_t var_3c8_2 = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(zx.q(zmm1.d) + rax_164)), *(rbx_41 + rcx_54), 1), 
            *(rdi_48 + rdx_73), 2), 
        *(rbp_33 + rsi_16), 3)
    zmm0 = data_143442650 & zmm15
    uint64_t rbp_34 = zx.q(_mm_extract_epi32(zmm0, 1))
    uint64_t rbx_42 = zx.q(_mm_extract_epi32(zmm0, 2))
    uint64_t r8_4 = zx.q(_mm_extract_epi32(zmm0, 3))
    zmm0 = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(zx.q(zmm0.d) + rax_164)), *(rbp_34 + rcx_54), 1), 
            *(rbx_42 + rdx_73), 2), 
        *(r8_4 + rsi_16), 3)
    zmm8 = _mm_cmpeq_epi32(data_142d3f5b0, zmm0)
    zmm2 = zmm8 & zmm15
    char temp0_956 = _mm_movemask_ps(zmm2)
    float var_588[0x4]
    uint32_t var_578[0x4]
    int32_t var_568[0x4]
    float var_558[0x4]
    
    if (temp0_956 != 0)
        var_458 = zmm8
        var_468 = zmm13
        zmm13 = zmm15
        zmm3 = zmm2 & var_3c8_2
        int64_t rdx_74 = sx.q(zmm3[0])
        void* rcx_56 = arg4 + rdx_74
        zmm1 = *(arg4 + rdx_74)
        int64_t rdx_76 = sx.q(_mm_extract_epi32(zmm3, 1))
        void* rbp_35 = arg4 + rdx_76
        zmm7 = *(arg4 + rdx_76)
        int64_t rbx_43 = sx.q(_mm_extract_epi32(zmm3, 2))
        void* rdx_78 = arg4 + rbx_43
        int32_t temp0_959 = _mm_extract_epi32(zmm3, 3)
        zmm6 = *(arg4 + rbx_43)
        int64_t rbx_44 = sx.q(temp0_959)
        arg5 = data_142fc95e0 & zmm2
        zmm3 = *(zx.q(arg5[0]) + rcx_56)
        uint64_t rdi_52 = zx.q(_mm_extract_epi32(arg5, 1))
        zmm15 = *(arg4 + rbx_44)
        zmm4 = *(rdi_52 + rbp_35)
        void* rbx_45 = arg4 + rbx_44
        zmm14 = *(zx.q(_mm_extract_epi32(arg5, 2)) + rdx_78)
        arg9 = *(zx.q(_mm_extract_epi32(arg5, 3)) + rbx_45)
        zmm2 &= data_142fc95f0
        arg8 = *(zx.q(zmm2[0]) + rcx_56)
        arg7 = *(zx.q(_mm_extract_epi32(zmm2, 1)) + rbp_35)
        uint32_t (* rcx_58)[0x4] = zx.q(_mm_extract_epi32(zmm2, 2))
        uint64_t rbp_36 = zx.q(_mm_extract_epi32(zmm2, 3))
        arg6 = *(rcx_58 + rdx_78)
        zmm8 = *(rbp_36 + rbx_45)
        
        if ((temp0_956 & 1) == 0)
            if ((temp0_956 & 2) != 0)
                goto label_1402f15f3
            
            goto label_1402f0ea3
        
        var_588[0] = zmm1.d
        
        if ((temp0_956 & 2) != 0)
        label_1402f15f3:
            var_588[1] = zmm7[0]
            
            if ((temp0_956 & 4) == 0)
                goto label_1402f0eac
            
            goto label_1402f1602
        
    label_1402f0ea3:
        
        if ((temp0_956 & 4) == 0)
        label_1402f0eac:
            
            if ((temp0_956 & 8) != 0)
                goto label_1402f1611
            
            goto label_1402f0eb5
        
    label_1402f1602:
        var_588[2] = zmm6[0]
        
        if ((temp0_956 & 8) != 0)
        label_1402f1611:
            var_588[3] = zmm15[0]
            zmm1 = _mm_insert_ps(zmm1, zmm7, 0x10)
            
            if ((temp0_956 & 1) == 0)
                goto label_1402f0ec4
            
            goto label_1402f1627
        
    label_1402f0eb5:
        zmm1 = _mm_insert_ps(zmm1, zmm7, 0x10)
        
        if ((temp0_956 & 1) != 0)
        label_1402f1627:
            var_578[0] = zmm3[0]
            zmm1 = _mm_insert_ps(zmm1, zmm6, 0x20)
            zmm3 = _mm_insert_ps(zmm3, zmm4, 0x10)
            
            if ((temp0_956 & 2) != 0)
                var_578[1] = zmm4[0]
        else
        label_1402f0ec4:
            zmm1 = _mm_insert_ps(zmm1, zmm6, 0x20)
            zmm3 = _mm_insert_ps(zmm3, zmm4, 0x10)
            
            if ((temp0_956 & 2) != 0)
                var_578[1] = zmm4[0]
        
        zmm1 = _mm_insert_ps(zmm1, zmm15, 0x30)
        zmm3 = _mm_insert_ps(zmm3, zmm14, 0x20)
        zmm2 = _mm_insert_ps(arg8, arg7, 0x10)
        
        if ((temp0_956 & 4) != 0)
            var_578[2] = zmm14[0]
        
        zmm3 = _mm_insert_ps(zmm3, arg9, 0x30)
        zmm2 = _mm_insert_ps(zmm2, arg6, 0x20)
        zmm1 = _mm_mul_ps(zmm1, zmm1)
        zmm4 = data_142d3f670
        zmm15 = zmm13
        
        if ((temp0_956 & 8) != 0)
            var_578[3] = arg9[0]
        
        zmm2 = _mm_insert_ps(zmm2, zmm8, 0x30)
        float temp0_976[0x4] = _mm_sub_ps(zmm4, zmm1)
        zmm3 = _mm_mul_ps(zmm3, zmm3)
        zmm13 = var_468
        
        if ((temp0_956 & 1) == 0)
            zmm4 = _mm_sub_ps(temp0_976, zmm3)
            zmm2 = _mm_mul_ps(zmm2, zmm2)
            
            if ((temp0_956 & 2) != 0)
                goto label_1402f165d
            
            goto label_1402f0f58
        
        var_568[0] = arg8[0]
        zmm4 = _mm_sub_ps(temp0_976, zmm3)
        zmm2 = _mm_mul_ps(zmm2, zmm2)
        
        if ((temp0_956 & 2) != 0)
        label_1402f165d:
            var_568[1] = arg7[0]
            zmm4 = _mm_sub_ps(zmm4, zmm2)
            zmm1 = zx.o(0)
            
            if ((temp0_956 & 4) == 0)
                goto label_1402f0f67
            
            goto label_1402f1673
        
    label_1402f0f58:
        zmm4 = _mm_sub_ps(zmm4, zmm2)
        zmm1 = zx.o(0)
        
        if ((temp0_956 & 4) == 0)
        label_1402f0f67:
            zmm1 = _mm_cmpeq_ps(zmm1, zmm4, 1)
            zmm2 = _mm_sqrt_ps(zmm4)
            
            if ((temp0_956 & 8) != 0)
                goto label_1402f168a
            
            goto label_1402f0f77
        
    label_1402f1673:
        var_568[2] = arg6[0]
        zmm1 = _mm_cmpeq_ps(zmm1, zmm4, 1)
        zmm2 = _mm_sqrt_ps(zmm4)
        
        if ((temp0_956 & 8) != 0)
        label_1402f168a:
            var_568[3] = zmm8[0]
            zmm1 = _mm_and_ps(zmm1, zmm2)
            
            if ((temp0_956 & 1) == 0)
                goto label_1402f0f86
            
            goto label_1402f169d
        
    label_1402f0f77:
        zmm1 = _mm_and_ps(zmm1, zmm2)
        
        if ((temp0_956 & 1) == 0)
        label_1402f0f86:
            zmm8 = var_458
            
            if ((temp0_956 & 2) != 0)
                goto label_1402f16b6
            
            goto label_1402f0f96
        
    label_1402f169d:
        var_558[0] = zmm1.d
        zmm8 = var_458
        
        if ((temp0_956 & 2) != 0)
        label_1402f16b6:
            var_558[1] = __extractps_memd_xmmps_immb(zmm1, 1)
            
            if ((temp0_956 & 4) == 0)
                goto label_1402f0f9f
            
            goto label_1402f16c7
        
    label_1402f0f96:
        
        if ((temp0_956 & 4) != 0)
        label_1402f16c7:
            var_558[2] = __extractps_memd_xmmps_immb(zmm1, 2)
            
            if ((temp0_956 & 8) != 0)
                var_558[3] = __extractps_memd_xmmps_immb(zmm1, 3)
        else
        label_1402f0f9f:
            
            if ((temp0_956 & 8) != 0)
                var_558[3] = __extractps_memd_xmmps_immb(zmm1, 3)
    
    zmm8 &= not.o(zmm15)
    char temp0_985 = _mm_movemask_ps(zmm8)
    zmm3 = arg11
    
    if (temp0_985 != 0)
        zmm2 = var_3c8_2
        zmm1 = _mm_shuffle_epi32(zmm2, 0x4e)
        zmm4 = _mm_cvtepi32_epi64(zmm2[0].q)
        zmm7 = _mm_cvtepi32_epi64(zmm1.q)
        zmm1 = _mm_cvtepu32_epi64(_mm_shuffle_epi32(zx.o(rax), 0).q)
        zmm2 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
        zmm7 = _mm_add_epi64(zmm7, zmm1)
        float var_428_1[0x4] = _mm_add_epi64(zmm4, zmm1)
        int32_t temp0_994[0x4] = _mm_cmpeq_epi32(arg7, arg7)
        arg5 = data_1434422d0
        int32_t rax_166
        rax_166.b = 0f f>= zmm3[0]
        zmm1 = _mm_shuffle_epi32(zx.o(neg.d(rax_166)) ^ temp0_994, 0)
        arg5 = _mm_cmpgt_epi32(arg5, zmm0) & not.o(zmm1)
        zmm4 = arg5 & zmm8
        uint32_t temp0_997 = _mm_movemask_ps(zmm4)
        float var_438_3[0x4]
        uint64_t r8_5
        
        if (temp0_997 != 0)
            int32_t temp0_998[0x4] = _mm_add_epi32(temp0_994, zmm0)
            
            if (zmm3[0] f>= 1f)
                arg9 = _mm_blendv_ps(zx.o(0), temp0_998, zmm4)
                arg8 = arg9
                r8_5 = zx.q(r10.d)
                var_438_3 = zx.o(0)
                
                if (r10.d u<= 5)
                    goto label_1402f1704
                
                goto label_1402f1992
            
            var_458 = zmm8
            var_508 = zmm15
            uint32_t temp0_999[0x4] = _mm_shuffle_epi32(zx.o(arg4), 0x44)
            var_418 = zmm2
            zmm0 = _mm_mullo_epi32(zmm0, zmm2)
            zmm1 = _mm_cvtepi32_epi64(zmm0.q)
            zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
            zmm8 = _mm_add_epi64(var_428_1, temp0_999)
            zmm15 = _mm_add_epi64(temp0_999, zmm7)
            zmm2 = data_143442a20
            zmm8 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm2), zmm1)
            zmm15 = _mm_add_epi64(_mm_add_epi64(zmm15, zmm2), zmm0)
            zmm0 = data_143442c10
            zmm15 &= zmm0
            zmm8 &= zmm0
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
            zmm1 = _mm_mul_ps(_mm_cvtepi32_ps(temp0_998), zmm0)
            zmm0.d = float.s(arg10 - 1)
            zmm0.d = zmm0.d f* zmm3[0]
            uint128_t var_438_2 = zmm0
            zmm0 = _mm_min_epi32(zx.o(arg10 - 2), _mm_max_epi32(zx.o(int.d(zmm0.d)), zx.o(0)))
            zmm14 = _mm_min_epi32(_mm_max_epi32(_mm_cvttps_epi32(zmm1), zx.o(0)), temp0_998)
            float var_3e8_1[0x4] = zmm7
            var_468 = arg5
            
            if (arg10 s< 0x100)
                zmm1 = _mm_shuffle_epi32(zmm14, 0x4e)
                int32_t temp0_1135[0x4] = _mm_add_epi64(_mm_cvtepi32_epi64(zmm14[0].q), zmm8)
                char rbp_43 = temp0_997.b
                
                if ((rbp_43 & 1) == 0)
                    zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                    
                    if ((rbp_43 & 2) != 0)
                        goto label_1402f2c5a
                    
                    goto label_1402f1a53
                
                arg6 = zx.o(*temp0_1135[0].q)
                zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                
                if ((rbp_43 & 2) != 0)
                label_1402f2c5a:
                    arg6 = _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(temp0_1135, 1)), 1)
                    zmm1 = _mm_add_epi64(zmm1, zmm15)
                    
                    if ((rbp_43 & 4) == 0)
                        goto label_1402f1a62
                    
                    goto label_1402f2c78
                
            label_1402f1a53:
                zmm1 = _mm_add_epi64(zmm1, zmm15)
                
                if ((rbp_43 & 4) != 0)
                label_1402f2c78:
                    arg6 = _mm_insert_epi32(arg6, zx.d(*zmm1.q), 2)
                    
                    if ((rbp_43 & 8) != 0)
                        arg6 = _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                else
                label_1402f1a62:
                    
                    if ((rbp_43 & 8) != 0)
                        arg6 = _mm_insert_epi32(arg6, zx.d(*_mm_extract_epi64(zmm1, 1)), 3)
                
                arg6 &= data_142ed6810
                uint32_t temp0_1139[0x4] = _mm_shuffle_epi32(zmm0, 0)
                arg6 = _mm_cmpgt_epi32(arg6, temp0_1139)
                var_3f8 = arg6 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                zmm7 = zmm14
                
                if (_mm_movemask_ps(arg6 & not.o(zmm4)) != 0)
                    zmm7 = _mm_blendv_ps(zmm14, temp0_998, var_3f8)
                    int32_t temp0_1144[0x4] = _mm_cmpeq_epi32(temp0_1135, temp0_1135)
                    zmm0 = _mm_sub_epi32(zmm14, temp0_1144)
                    zmm1 = _mm_cmpgt_epi32(zmm0, temp0_998) ^ temp0_1144
                    arg6 &= not.o(zmm1)
                    arg9 = zmm4 & arg6
                    uint32_t i_1 = _mm_movemask_ps(arg9)
                    
                    if (i_1 != 0)
                        zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
                        zmm6 = zmm14
                        
                        do
                            arg8 = zmm0
                            zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                            int32_t temp0_1156[0x4] =
                                _mm_add_epi64(_mm_cvtepi32_epi64(arg8[0].q), zmm8)
                            char temp0_1157 = _mm_movemask_ps(arg9)
                            
                            if ((temp0_1157 & 1) == 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((temp0_1157 & 2) != 0)
                                    goto label_1402f1b31
                                
                                goto label_1402f1b86
                            
                            arg5 = _mm_insert_epi32(arg5, zx.d(*temp0_1156[0].q), 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((temp0_1157 & 2) != 0)
                            label_1402f1b31:
                                arg5 = _mm_insert_epi32(arg5, 
                                    zx.d(*_mm_extract_epi64(temp0_1156, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_1157 & 4) == 0)
                                    goto label_1402f1b8f
                                
                                goto label_1402f1b48
                            
                        label_1402f1b86:
                            zmm0 = _mm_add_epi64(zmm0, zmm15)
                            
                            if ((temp0_1157 & 4) != 0)
                            label_1402f1b48:
                                arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                
                                if ((temp0_1157 & 8) != 0)
                                    arg5 =
                                        _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            else
                            label_1402f1b8f:
                                
                                if ((temp0_1157 & 8) != 0)
                                    arg5 =
                                        _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            
                            zmm0 = _mm_cmpgt_epi32(arg5 & data_142ed6810, temp0_1139) & arg6
                            zmm7 = _mm_blendv_ps(zmm7, zmm6, zmm0)
                            zmm2 = zx.o(0)
                            
                            if (_mm_movemask_ps(zmm0 & zmm4) != i_1)
                                zmm2 = zmm0 ^ arg6
                            
                            zmm0 = _mm_sub_epi32(arg8, zmm1)
                            arg6 = _mm_cmpgt_epi32(zmm0, temp0_998) & not.o(zmm2)
                            arg9 = arg6 & zmm4
                            i_1 = _mm_movemask_ps(arg9)
                            zmm6 = arg8
                        while (i_1 != 0)
                
                zmm0 = var_3f8
                
                if (_mm_movemask_ps(_mm_andnot_ps(zmm0, zmm4)) != 0)
                    zmm0 ^= data_142d3f800
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
                            int32_t temp0_1181[0x4] =
                                _mm_add_epi64(_mm_cvtepi32_epi64(zmm14[0].q), zmm8)
                            char temp0_1182 = _mm_movemask_ps(zmm0)
                            
                            if ((temp0_1182 & 1) == 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm6[0].q)
                                
                                if ((temp0_1182 & 2) != 0)
                                    goto label_1402f1c91
                                
                                goto label_1402f1ce1
                            
                            arg5 = _mm_insert_epi32(arg5, zx.d(*temp0_1181[0].q), 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm6[0].q)
                            
                            if ((temp0_1182 & 2) != 0)
                            label_1402f1c91:
                                arg5 = _mm_insert_epi32(arg5, 
                                    zx.d(*_mm_extract_epi64(temp0_1181, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_1182 & 4) == 0)
                                    goto label_1402f1cea
                                
                                goto label_1402f1ca8
                            
                        label_1402f1ce1:
                            zmm0 = _mm_add_epi64(zmm0, zmm15)
                            
                            if ((temp0_1182 & 4) != 0)
                            label_1402f1ca8:
                                arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                                
                                if ((temp0_1182 & 8) != 0)
                                    arg5 =
                                        _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            else
                            label_1402f1cea:
                                
                                if ((temp0_1182 & 8) != 0)
                                    arg5 =
                                        _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            
                            zmm0 = _mm_cmpgt_epi32(arg5 & arg6, temp0_1139) & not.o(zmm1)
                            zmm7 = _mm_blendv_ps(zmm7, zmm14, zmm0)
                            zmm6 = zx.o(0)
                            
                            if (_mm_movemask_ps(zmm0 & zmm4) != i_2)
                                zmm6 = zmm0 ^ zmm1
                            
                            zmm14 = _mm_add_epi32(zmm14, arg9)
                            zmm1 = _mm_cmpgt_epi32(zmm14, zx.o(0)) & zmm6
                            zmm0 = zmm1 & zmm4
                            i_2 = _mm_movemask_ps(zmm0)
                        while (i_2 != 0)
                
                zmm2 = var_418
                arg9 = _mm_blendv_ps(zx.o(0), zmm7, zmm4)
                zmm0 = _mm_shuffle_epi32(arg9, 0x4e)
                zmm1 = _mm_add_epi64(_mm_cvtepi32_epi64(arg9[0].q), zmm8)
                
                if ((rbp_43 & 1) == 0)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    zmm3 = var_468
                    
                    if ((rbp_43 & 2) != 0)
                        goto label_1402f2cbb
                    
                    goto label_1402f1da2
                
                zmm7 = zx.o(*zmm1.q)
                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                zmm3 = var_468
                
                if ((rbp_43 & 2) != 0)
                label_1402f2cbb:
                    zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                    
                    if ((rbp_43 & 4) == 0)
                        goto label_1402f1db1
                    
                    goto label_1402f2cd8
                
            label_1402f1da2:
                zmm0 = _mm_add_epi64(zmm0, zmm15)
                
                if ((rbp_43 & 4) != 0)
                label_1402f2cd8:
                    zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                    
                    if ((rbp_43 & 8) != 0)
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                else
                label_1402f1db1:
                    
                    if ((rbp_43 & 8) != 0)
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                
                arg8 =
                    _mm_blendv_ps(zx.o(0), _mm_sub_epi32(arg9, _mm_cmpeq_epi32(zmm0, zmm0)), zmm4)
                zmm0 = _mm_cmpgt_epi32(arg8, temp0_998) & zmm4
                
                if (_mm_movemask_ps(zmm0) != 0)
                    arg8 = _mm_blendv_ps(arg8, temp0_998, zmm0)
                
                zmm1 = _mm_shuffle_epi32(arg8, 0x4e)
                zmm0 = _mm_cvtepi32_epi64(arg8[0].q)
                zmm8 = _mm_add_epi64(zmm8, zmm0)
                
                if ((rbp_43 & 1) == 0)
                    zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                    
                    if ((rbp_43 & 2) != 0)
                        goto label_1402f2d12
                    
                    goto label_1402f1e26
                
                zmm0 = zx.o(*zmm8[0].q)
                zmm1 = _mm_cvtepi32_epi64(zmm1.q)
                
                if ((rbp_43 & 2) != 0)
                label_1402f2d12:
                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm8, 1)), 1)
                    zmm8 = var_458
                    zmm15 = _mm_add_epi64(zmm15, zmm1)
                    
                    if ((rbp_43 & 4) == 0)
                        goto label_1402f1e3e
                    
                    goto label_1402f2d38
                
            label_1402f1e26:
                zmm8 = var_458
                zmm15 = _mm_add_epi64(zmm15, zmm1)
                
                if ((rbp_43 & 4) != 0)
                label_1402f2d38:
                    zmm0 = _mm_insert_epi32(zmm0, zx.d(*zmm15[0].q), 2)
                    
                    if ((rbp_43 & 8) != 0)
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                else
                label_1402f1e3e:
                    
                    if ((rbp_43 & 8) != 0)
                        zmm0 = _mm_insert_epi32(zmm0, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                
                zmm15 = var_508
                zmm7 &= data_142ed6810
                zmm0 &= data_142ed6810
                zmm14 = zx.o(0)
                zmm1 = zx.o(0)
                
                if (arg12 != 1)
                label_1402f1e85:
                    zmm0 = __pmaxsd_xmmdq_memdq(_mm_sub_epi32(zmm0, zmm7), data_142d3f5b0)
                    zmm4 = var_438_2
                    zmm1 = _mm_div_ps(
                        _mm_sub_ps(_mm_shuffle_ps(zmm4, zmm4, 0), _mm_cvtepi32_ps(zmm7)), 
                        _mm_cvtepi32_ps(zmm0))
            else
                zmm1 = _mm_add_epi32(zmm14, zmm14)
                zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
                zmm3 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm1.q), zmm8)
                char rbp_38 = temp0_997.b
                
                if ((rbp_38 & 1) == 0)
                    zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                    
                    if ((rbp_38 & 2) != 0)
                        goto label_1402f2b43
                    
                    goto label_1402f1192
                
                zmm1 = zx.o(*zmm3[0].q)
                zmm2 = _mm_cvtepi32_epi64(zmm2[0].q)
                
                if ((rbp_38 & 2) != 0)
                label_1402f2b43:
                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm3, 1)), 1)
                    zmm2 = _mm_add_epi64(zmm2, zmm15)
                    
                    if ((rbp_38 & 4) == 0)
                        goto label_1402f11a1
                    
                    goto label_1402f2b60
                
            label_1402f1192:
                zmm2 = _mm_add_epi64(zmm2, zmm15)
                
                if ((rbp_38 & 4) != 0)
                label_1402f2b60:
                    zmm1 = _mm_insert_epi32(zmm1, zx.d(*zmm2[0].q), 2)
                    
                    if ((rbp_38 & 8) != 0)
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                else
                label_1402f11a1:
                    
                    if ((rbp_38 & 8) != 0)
                        zmm1 = _mm_insert_epi32(zmm1, zx.d(*_mm_extract_epi64(zmm2, 1)), 3)
                
                arg9 = _mm_blend_epi16(zx.o(0), zmm1, 0x55)
                uint32_t temp0_1026[0x4] = _mm_shuffle_epi32(zmm0, 0)
                arg9 = _mm_cmpgt_epi32(arg9, temp0_1026)
                var_3f8 = arg9 ^ _mm_cmpeq_epi32(zmm1, zmm1)
                zmm1 = zmm14
                
                if (_mm_movemask_ps(arg9 & not.o(zmm4)) != 0)
                    zmm1 = _mm_blendv_ps(zmm14, temp0_998, var_3f8)
                    arg5 = _mm_cmpeq_epi32(arg5, arg5)
                    zmm0 = _mm_sub_epi32(zmm14, arg5)
                    arg9 &= not.o(_mm_cmpgt_epi32(zmm0, temp0_998) ^ arg5)
                    zmm2 = zmm4 & arg9
                    uint32_t i_3 = _mm_movemask_ps(zmm2)
                    
                    if (i_3 != 0)
                        arg5 = zmm14
                        
                        do
                            arg8 = zmm0
                            zmm6 = _mm_add_epi32(zmm0, zmm0)
                            zmm0 = _mm_shuffle_epi32(zmm6, 0x4e)
                            arg6 = _mm_add_epi64(_mm_cvtepi32_epi64(zmm6[0].q), zmm8)
                            char temp0_1044 = _mm_movemask_ps(zmm2)
                            
                            if ((temp0_1044 & 1) == 0)
                                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                                
                                if ((temp0_1044 & 2) != 0)
                                    goto label_1402f1271
                                
                                goto label_1402f12cd
                            
                            zmm7 = _mm_insert_epi32(zmm7, zx.d(*arg6[0].q), 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                            
                            if ((temp0_1044 & 2) != 0)
                            label_1402f1271:
                                zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(arg6, 1)), 1)
                                zmm0 = _mm_add_epi64(zmm0, zmm15)
                                
                                if ((temp0_1044 & 4) == 0)
                                    goto label_1402f12d6
                                
                                goto label_1402f1288
                            
                        label_1402f12cd:
                            zmm0 = _mm_add_epi64(zmm0, zmm15)
                            
                            if ((temp0_1044 & 4) != 0)
                            label_1402f1288:
                                zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                                
                                if ((temp0_1044 & 8) != 0)
                                    zmm7 =
                                        _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            else
                            label_1402f12d6:
                                
                                if ((temp0_1044 & 8) != 0)
                                    zmm7 =
                                        _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                            
                            zmm2 = zx.o(0)
                            zmm0 = _mm_cmpgt_epi32(_mm_blend_epi16(zmm7, zmm2, 0xaa), temp0_1026)
                                & arg9
                            zmm1 = _mm_blendv_ps(zmm1, arg5, zmm0)
                            
                            if (_mm_movemask_ps(zmm0 & zmm4) != i_3)
                                zmm2 = zmm0 ^ arg9
                            
                            zmm0 = __psubd_xmmdq_memdq(arg8, data_142d3f800)
                            arg9 = _mm_cmpgt_epi32(zmm0, temp0_998) & not.o(zmm2)
                            zmm2 = arg9 & zmm4
                            i_3 = _mm_movemask_ps(zmm2)
                            arg5 = arg8
                        while (i_3 != 0)
                
                zmm0 = var_3f8
                
                if (_mm_movemask_ps(_mm_andnot_ps(zmm0, zmm4)) != 0)
                    zmm0 ^= data_142d3f800
                    zmm1 = _mm_blendv_ps(zmm1, zx.o(0), zmm0)
                    arg9 = _mm_cmpeq_epi32(arg9, arg9)
                    zmm14 = _mm_add_epi32(zmm14, arg9)
                    zmm7 = _mm_cmpgt_epi32(zmm14, zx.o(0)) & zmm0
                    zmm0 = zmm7 & zmm4
                    
                    for (uint32_t i_4 = _mm_movemask_ps(zmm0); i_4 != 0; 
                            i_4 = _mm_movemask_ps(zmm0))
                        int32_t temp0_1067[0x4] = _mm_add_epi32(zmm14, zmm14)
                        zmm6 = _mm_shuffle_epi32(temp0_1067, 0x4e)
                        int32_t temp0_1070[0x4] =
                            _mm_add_epi64(_mm_cvtepi32_epi64(temp0_1067[0].q), zmm8)
                        char temp0_1071 = _mm_movemask_ps(zmm0)
                        
                        if ((temp0_1071 & 1) == 0)
                            zmm0 = _mm_cvtepi32_epi64(zmm6[0].q)
                            
                            if ((temp0_1071 & 2) != 0)
                                goto label_1402f13d1
                            
                            goto label_1402f1429
                        
                        arg5 = _mm_insert_epi32(arg5, zx.d(*temp0_1070[0].q), 0)
                        zmm0 = _mm_cvtepi32_epi64(zmm6[0].q)
                        
                        if ((temp0_1071 & 2) != 0)
                        label_1402f13d1:
                            arg5 =
                                _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(temp0_1070, 1)), 1)
                            zmm0 = _mm_add_epi64(zmm0, zmm15)
                            
                            if ((temp0_1071 & 4) == 0)
                                goto label_1402f1432
                            
                            goto label_1402f13e8
                        
                    label_1402f1429:
                        zmm0 = _mm_add_epi64(zmm0, zmm15)
                        
                        if ((temp0_1071 & 4) != 0)
                        label_1402f13e8:
                            arg5 = _mm_insert_epi32(arg5, zx.d(*zmm0.q), 2)
                            
                            if ((temp0_1071 & 8) != 0)
                                arg5 = _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                        else
                        label_1402f1432:
                            
                            if ((temp0_1071 & 8) != 0)
                                arg5 = _mm_insert_epi32(arg5, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                        
                        zmm0 = _mm_cmpgt_epi32(_mm_blend_epi16(arg5, zx.o(0), 0xaa), temp0_1026)
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
                
                if ((rbp_38 & 1) == 0)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    zmm3 = var_468
                    
                    if ((rbp_38 & 2) != 0)
                        goto label_1402f2ba2
                    
                    goto label_1402f14e9
                
                zmm7 = zx.o(*zmm1.q)
                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                zmm3 = var_468
                
                if ((rbp_38 & 2) != 0)
                label_1402f2ba2:
                    zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm1, 1)), 1)
                    zmm0 = _mm_add_epi64(zmm0, zmm15)
                    
                    if ((rbp_38 & 4) == 0)
                        goto label_1402f14f8
                    
                    goto label_1402f2bbf
                
            label_1402f14e9:
                zmm0 = _mm_add_epi64(zmm0, zmm15)
                
                if ((rbp_38 & 4) != 0)
                label_1402f2bbf:
                    zmm7 = _mm_insert_epi32(zmm7, zx.d(*zmm0.q), 2)
                    
                    if ((rbp_38 & 8) != 0)
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                else
                label_1402f14f8:
                    
                    if ((rbp_38 & 8) != 0)
                        zmm7 = _mm_insert_epi32(zmm7, zx.d(*_mm_extract_epi64(zmm0, 1)), 3)
                
                arg8 =
                    _mm_blendv_ps(zx.o(0), _mm_sub_epi32(arg9, _mm_cmpeq_epi32(zmm0, zmm0)), zmm4)
                zmm0 = _mm_cmpgt_epi32(arg8, temp0_998) & zmm4
                
                if (_mm_movemask_ps(zmm0) != 0)
                    arg8 = _mm_blendv_ps(arg8, temp0_998, zmm0)
                
                int32_t temp0_1096[0x4] = _mm_add_epi32(arg8, arg8)
                zmm0 = _mm_shuffle_epi32(temp0_1096, 0x4e)
                zmm2 = _mm_cvtepi32_epi64(temp0_1096[0].q)
                zmm8 = _mm_add_epi64(zmm8, zmm2)
                
                if ((rbp_38 & 1) == 0)
                    zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                    
                    if ((rbp_38 & 2) != 0)
                        goto label_1402f2bf9
                    
                    goto label_1402f1578
                
                zmm2 = zx.o(*zmm8[0].q)
                zmm0 = _mm_cvtepi32_epi64(zmm0.q)
                
                if ((rbp_38 & 2) != 0)
                label_1402f2bf9:
                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm8, 1)), 1)
                    zmm8 = var_458
                    zmm15 = _mm_add_epi64(zmm15, zmm0)
                    
                    if ((rbp_38 & 4) == 0)
                        goto label_1402f1590
                    
                    goto label_1402f2c1f
                
            label_1402f1578:
                zmm8 = var_458
                zmm15 = _mm_add_epi64(zmm15, zmm0)
                
                if ((rbp_38 & 4) != 0)
                label_1402f2c1f:
                    zmm2 = _mm_insert_epi32(zmm2, zx.d(*zmm15[0].q), 2)
                    
                    if ((rbp_38 & 8) != 0)
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                else
                label_1402f1590:
                    
                    if ((rbp_38 & 8) != 0)
                        zmm2 = _mm_insert_epi32(zmm2, zx.d(*_mm_extract_epi64(zmm15, 1)), 3)
                
                zmm15 = var_508
                zmm7 = _mm_blend_epi16(zmm7, zx.o(0), 0xaa)
                zmm0 = _mm_blend_epi16(zx.o(0), zmm2, 0x55)
                zmm2 = var_418
                zmm14 = zx.o(0)
                zmm1 = zx.o(0)
                
                if (arg12 != 1)
                    goto label_1402f1e85
            
            zmm7 = var_3e8_1
            r8_5 = zx.q(r10.d)
            var_438_3 = _mm_blendv_ps(zmm14, zmm1, zmm3)
            
            if (r10.d u<= 5)
                goto label_1402f1704
            
            goto label_1402f1992
        
        arg9 = zx.o(0)
        arg8 = zx.o(0)
        r8_5 = zx.q(r10.d)
        var_438_3 = zx.o(0)
        
        if (r10.d u> 5)
        label_1402f1992:
            
            if ((temp0_985 & 1) == 0)
                if ((temp0_985 & 2) != 0)
                    goto label_1402f2e55
                
                goto label_1402f19a4
            
            var_588[0] = 0
            
            if ((temp0_985 & 2) != 0)
            label_1402f2e55:
                var_588[1] = 0
                
                if ((temp0_985 & 4) == 0)
                    goto label_1402f19ad
                
                goto label_1402f2e66
            
        label_1402f19a4:
            
            if ((temp0_985 & 4) == 0)
            label_1402f19ad:
                
                if ((temp0_985 & 8) != 0)
                    goto label_1402f2e77
                
                goto label_1402f19b6
            
        label_1402f2e66:
            var_588[2] = 0
            
            if ((temp0_985 & 8) != 0)
            label_1402f2e77:
                var_588[3] = 0
                
                if ((temp0_985 & 1) == 0)
                    goto label_1402f19bf
                
                goto label_1402f2e88
            
        label_1402f19b6:
            
            if ((temp0_985 & 1) == 0)
            label_1402f19bf:
                
                if ((temp0_985 & 2) != 0)
                    goto label_1402f2e99
                
                goto label_1402f19c8
            
        label_1402f2e88:
            var_578[0] = 0
            
            if ((temp0_985 & 2) != 0)
            label_1402f2e99:
                var_578[1] = 0
                
                if ((temp0_985 & 4) == 0)
                    goto label_1402f19d1
                
                goto label_1402f2eaa
            
        label_1402f19c8:
            
            if ((temp0_985 & 4) == 0)
            label_1402f19d1:
                
                if ((temp0_985 & 8) != 0)
                    goto label_1402f2ebb
                
                goto label_1402f19da
            
        label_1402f2eaa:
            var_578[2] = 0
            
            if ((temp0_985 & 8) != 0)
            label_1402f2ebb:
                var_578[3] = 0
                
                if ((temp0_985 & 1) == 0)
                    goto label_1402f19e3
                
                goto label_1402f2ecc
            
        label_1402f19da:
            
            if ((temp0_985 & 1) == 0)
            label_1402f19e3:
                
                if ((temp0_985 & 2) != 0)
                    goto label_1402f2edd
                
                goto label_1402f19ec
            
        label_1402f2ecc:
            var_568[0] = 0
            
            if ((temp0_985 & 2) != 0)
            label_1402f2edd:
                var_568[1] = 0
                
                if ((temp0_985 & 4) == 0)
                    goto label_1402f19f5
                
                goto label_1402f2eee
            
        label_1402f19ec:
            
            if ((temp0_985 & 4) == 0)
            label_1402f19f5:
                
                if ((temp0_985 & 8) != 0)
                    goto label_1402f2eff
                
                goto label_1402f19fe
            
        label_1402f2eee:
            var_568[2] = 0
            
            if ((temp0_985 & 8) != 0)
            label_1402f2eff:
                var_568[3] = 0
                
                if ((temp0_985 & 1) == 0)
                    goto label_1402f1a07
                
                goto label_1402f2f10
            
        label_1402f19fe:
            
            if ((temp0_985 & 1) == 0)
            label_1402f1a07:
                
                if ((temp0_985 & 2) != 0)
                    goto label_1402f2f21
                
                goto label_1402f1a10
            
        label_1402f2f10:
            var_558[0] = 0x3f800000
            
            if ((temp0_985 & 2) != 0)
            label_1402f2f21:
                var_558[1] = 0x3f800000
                
                if ((temp0_985 & 4) == 0)
                    goto label_1402f1a19
                
                goto label_1402f2f32
            
        label_1402f1a10:
            
            if ((temp0_985 & 4) != 0)
            label_1402f2f32:
                var_558[2] = 0x3f800000
                
                if ((temp0_985 & 8) != 0)
                    var_558[3] = 0x3f800000
            else
            label_1402f1a19:
                
                if ((temp0_985 & 8) != 0)
                    var_558[3] = 0x3f800000
        else
        label_1402f1704:
            zmm0 = _mm_mullo_epi32(arg9, zmm2)
            arg5 = _mm_cvtepi32_epi64(zmm0.q)
            zmm6 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm0, 0x4e).q)
            char rdx_100
            
            switch (r8_5)
                case 0
                    arg7 = zmm2
                    zmm6 = _mm_add_epi64(zmm6, zmm7)
                    int32_t temp0_1121[0x4] = __paddq_xmmdq_memdq(arg5, var_428_1)
                    zmm1 = _mm_shuffle_epi32(zmm8, 0x50)
                    float temp0_1123[0x4] = _mm_blendv_ps(zx.o(0), temp0_1121, zmm1)
                    zmm3 = zmm8
                    zmm2 = _mm_shuffle_epi32(zmm8, 0xfa)
                    arg5 = _mm_blendv_ps(zx.o(0), zmm6, zmm2)
                    int64_t rax_186 = _mm_extract_epi64(temp0_1123, 1)
                    void* rbx_58 = arg4 + rax_186
                    int32_t r11_7 = *(arg4 + rax_186)
                    int64_t rax_187 = arg5[0].q
                    void* rbp_39 = arg4 + rax_187
                    int32_t r12_6 = *(arg4 + rax_187)
                    int64_t rax_188 = _mm_extract_epi64(arg5, 1)
                    zmm8 = data_1434426c0
                    arg5 = _mm_blendv_ps(zx.o(0), zmm8, zmm1)
                    void* rdi_56 = arg4 + rax_188
                    float temp0_1127[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                    int32_t rcx_64 = *(arg4 + rax_188)
                    void* r14_10 = temp0_1123[0].q + arg4
                    int32_t r9_3 = *(_mm_extract_epi64(arg5, 1) + rbx_58)
                    int32_t r15_7 = *(temp0_1127[0].q + rbp_39)
                    var_378[0] = *(_mm_extract_epi64(temp0_1127, 1) + rdi_56)
                    zmm8 = data_1434426e0
                    float temp0_1128[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm1)
                    float temp0_1129[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                    var_3f8[0] = *(_mm_extract_epi64(temp0_1128, 1) + rbx_58)
                    int32_t* rax_195 = temp0_1129[0].q
                    int32_t* rsi_17 = _mm_extract_epi64(temp0_1129, 1)
                    int32_t rax_196 = *(rax_195 + rbp_39)
                    var_508.d = *(rsi_17 + rdi_56)
                    zmm8 = data_1434426f0
                    float temp0_1130[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm1)
                    float temp0_1131[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                    var_418.d = *(_mm_extract_epi64(temp0_1130, 1) + rbx_58)
                    var_468[0] = *(temp0_1131[0].q + rbp_39)
                    var_458[0] = *(_mm_extract_epi64(temp0_1131, 1) + rdi_56)
                    int32_t rdi_57 = *(arg5[0].q + r14_10)
                    int32_t r10_7 = *(temp0_1128[0].q + r14_10)
                    int32_t rbx_60 = *(temp0_1130[0].q + r14_10)
                    
                    if ((temp0_985 & 1) != 0)
                        var_588[0] = *r14_10
                    
                    if ((temp0_985 & 2) != 0)
                        var_588[1] = r11_7
                    
                    zmm7 = zmm7
                    zmm8 = zmm3
                    zmm2 = arg7
                    
                    if ((temp0_985 & 4) == 0)
                        if ((temp0_985 & 8) != 0)
                            goto label_1402f2d5b
                        
                        goto label_1402f18da
                    
                    var_588[2] = r12_6
                    
                    if ((temp0_985 & 8) != 0)
                    label_1402f2d5b:
                        var_588[3] = rcx_64
                        
                        if ((temp0_985 & 1) == 0)
                            goto label_1402f18e3
                        
                        goto label_1402f2d68
                    
                label_1402f18da:
                    
                    if ((temp0_985 & 1) != 0)
                    label_1402f2d68:
                        var_578[0] = rdi_57
                        
                        if ((temp0_985 & 2) != 0)
                        label_1402f2d75:
                            var_578[1] = r9_3
                            
                            if ((temp0_985 & 4) == 0)
                                goto label_1402f18f8
                            
                            goto label_1402f2d83
                    else
                    label_1402f18e3:
                        
                        if ((temp0_985 & 2) != 0)
                            goto label_1402f2d75
                    
                    if ((temp0_985 & 4) == 0)
                    label_1402f18f8:
                        r12 = var_3d8
                        
                        if ((temp0_985 & 8) != 0)
                            goto label_1402f2da0
                        
                        goto label_1402f1906
                    
                label_1402f2d83:
                    var_578[2] = r15_7
                    r12 = var_3d8
                    
                    if ((temp0_985 & 8) != 0)
                    label_1402f2da0:
                        var_578[3] = var_378[0]
                        
                        if ((temp0_985 & 1) == 0)
                            goto label_1402f190f
                        
                        goto label_1402f2dad
                    
                label_1402f1906:
                    
                    if ((temp0_985 & 1) == 0)
                    label_1402f190f:
                        
                        if ((temp0_985 & 2) != 0)
                            goto label_1402f2dc2
                        
                        goto label_1402f191b
                    
                label_1402f2dad:
                    var_568[0] = r10_7
                    
                    if ((temp0_985 & 2) != 0)
                    label_1402f2dc2:
                        var_568[1] = var_3f8[0]
                        arg4 = var_470
                        r10 = var_398
                        
                        if ((temp0_985 & 4) == 0)
                            goto label_1402f1931
                        
                        goto label_1402f2ddf
                    
                label_1402f191b:
                    arg4 = var_470
                    r10 = var_398
                    
                    if ((temp0_985 & 4) == 0)
                    label_1402f1931:
                        
                        if ((temp0_985 & 8) != 0)
                            goto label_1402f2df3
                        
                        goto label_1402f193a
                    
                label_1402f2ddf:
                    var_568[2] = rax_196
                    
                    if ((temp0_985 & 8) != 0)
                    label_1402f2df3:
                        var_568[3] = var_508.d
                        
                        if ((temp0_985 & 1) == 0)
                            goto label_1402f1943
                        
                        goto label_1402f2e00
                    
                label_1402f193a:
                    
                    if ((temp0_985 & 1) == 0)
                    label_1402f1943:
                        
                        if ((temp0_985 & 2) != 0)
                            goto label_1402f2e14
                        
                        goto label_1402f194c
                    
                label_1402f2e00:
                    var_558[0] = rbx_60
                    
                    if ((temp0_985 & 2) != 0)
                    label_1402f2e14:
                        var_558[1] = var_418.d
                        
                        if ((temp0_985 & 4) == 0)
                            goto label_1402f1955
                        
                        goto label_1402f2e28
                    
                label_1402f194c:
                    
                    if ((temp0_985 & 4) != 0)
                    label_1402f2e28:
                        var_558[2] = var_468[0]
                        
                        if ((temp0_985 & 8) != 0)
                            var_558[3] = var_458[0]
                    else
                    label_1402f1955:
                        
                        if ((temp0_985 & 8) != 0)
                            var_558[3] = var_458[0]
                case 1
                    var_418 = zmm2
                    var_468 = zmm13
                    uint32_t var_508_1[0x4] = zmm15
                    float var_3e8_2[0x4] = zmm7
                    zmm6 = _mm_add_epi64(zmm6, zmm7)
                    int32_t temp0_1220[0x4] = __paddq_xmmdq_memdq(arg5, var_428_1)
                    zmm1 = _mm_shuffle_epi32(zmm8, 0x50)
                    float temp0_1222[0x4] = _mm_blendv_ps(zx.o(0), temp0_1220, zmm1)
                    var_458 = zmm8
                    zmm2 = _mm_shuffle_epi32(zmm8, 0xfa)
                    float temp0_1224[0x4] = _mm_blendv_ps(zx.o(0), zmm6, zmm2)
                    int64_t rcx_66 = temp0_1222[0].q
                    void* rax_214 = arg4 + rcx_66
                    arg5 = *(arg4 + rcx_66)
                    int64_t rcx_67 = _mm_extract_epi64(temp0_1222, 1)
                    void* rbp_44 = arg4 + rcx_67
                    zmm8 = *(arg4 + rcx_67)
                    int64_t rbx_73 = temp0_1224[0].q
                    void* rcx_68 = arg4 + rbx_73
                    zmm15 = *(arg4 + rbx_73)
                    int64_t rdi_58 = _mm_extract_epi64(temp0_1224, 1)
                    void* rbx_74 = arg4 + rdi_58
                    zmm3 = *(arg4 + rdi_58)
                    zmm6 = data_1434426c0
                    float temp0_1225[0x4] = _mm_blendv_ps(zx.o(0), zmm6, zmm1)
                    float temp0_1226[0x4] = _mm_blendv_ps(zx.o(0), zmm6, zmm2)
                    zmm6 = *(temp0_1225[0].q + rax_214)
                    arg6 = *(_mm_extract_epi64(temp0_1225, 1) + rbp_44)
                    zmm14 = *(temp0_1226[0].q + rcx_68)
                    uint128_t* rdi_62 = _mm_extract_epi64(temp0_1226, 1)
                    zmm4 = data_1434426e0
                    float temp0_1227[0x4] = _mm_blendv_ps(zx.o(0), zmm4, zmm1)
                    uint128_t var_3f8_1 = *(rdi_62 + rbx_74)
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                    zmm4 = *(temp0_1227[0].q + rax_214)
                    zmm13 = *(_mm_extract_epi64(temp0_1227, 1) + rbp_44)
                    uint128_t* rbp_45 = _mm_extract_epi64(zmm1, 1)
                    zmm2 = *(zmm1.q + rcx_68)
                    zmm1 = *(rbp_45 + rbx_74)
                    
                    if ((temp0_985 & 1) == 0)
                        if ((temp0_985 & 2) != 0)
                            goto label_1402f2f5e
                        
                        goto label_1402f2034
                    
                    var_588[0] = arg5[0]
                    
                    if ((temp0_985 & 2) != 0)
                    label_1402f2f5e:
                        var_588[1] = zmm8[0]
                        
                        if ((temp0_985 & 4) == 0)
                            goto label_1402f203d
                        
                        goto label_1402f2f6e
                    
                label_1402f2034:
                    
                    if ((temp0_985 & 4) == 0)
                    label_1402f203d:
                        
                        if ((temp0_985 & 8) != 0)
                            goto label_1402f2f7e
                        
                        goto label_1402f2046
                    
                label_1402f2f6e:
                    var_588[2] = zmm15[0]
                    
                    if ((temp0_985 & 8) == 0)
                    label_1402f2046:
                        arg5 = _mm_insert_ps(arg5, zmm8, 0x10)
                        
                        if ((temp0_985 & 1) != 0)
                            var_578[0] = zmm6[0]
                    else
                    label_1402f2f7e:
                        var_588[3] = zmm3[0]
                        arg5 = _mm_insert_ps(arg5, zmm8, 0x10)
                        
                        if ((temp0_985 & 1) != 0)
                            var_578[0] = zmm6[0]
                    
                    arg5 = _mm_insert_ps(arg5, zmm15, 0x20)
                    float temp0_1231[0x4] = _mm_insert_ps(zmm6, arg6, 0x10)
                    zmm8 = var_458
                    
                    if ((temp0_985 & 2) != 0)
                        var_578[1] = arg6[0]
                    
                    zmm7 = zmm1
                    arg5 = _mm_insert_ps(arg5, zmm3, 0x30)
                    float temp0_1233[0x4] = _mm_insert_ps(temp0_1231, zmm14, 0x20)
                    zmm0 = zmm13
                    float temp0_1234[0x4] = _mm_insert_ps(zmm4, zmm13, 0x10)
                    zmm15 = var_508_1
                    
                    if ((temp0_985 & 4) != 0)
                        var_578[2] = zmm14[0]
                    
                    float temp0_1235[0x4] = _mm_insert_ps(temp0_1233, var_3f8_1, 0x30)
                    arg6 = zmm2
                    float temp0_1236[0x4] = _mm_insert_ps(temp0_1234, zmm2, 0x20)
                    arg5 = _mm_mul_ps(arg5, arg5)
                    zmm2 = data_142d3f670
                    zmm13 = var_468
                    
                    if ((temp0_985 & 8) != 0)
                        var_578[3] = var_3f8_1.d
                    
                    zmm1 = zmm7
                    float temp0_1238[0x4] = _mm_insert_ps(temp0_1236, zmm7, 0x30)
                    zmm2 = _mm_sub_ps(zmm2, arg5)
                    float temp0_1240[0x4] = _mm_mul_ps(temp0_1235, temp0_1235)
                    
                    if ((temp0_985 & 1) == 0)
                        zmm2 = _mm_sub_ps(zmm2, temp0_1240)
                        zmm4 = _mm_mul_ps(temp0_1238, temp0_1238)
                        
                        if ((temp0_985 & 2) != 0)
                            goto label_1402f2fae
                        
                        goto label_1402f210d
                    
                    var_568[0] = zmm4[0]
                    zmm2 = _mm_sub_ps(zmm2, temp0_1240)
                    zmm4 = _mm_mul_ps(temp0_1238, temp0_1238)
                    
                    if ((temp0_985 & 2) == 0)
                    label_1402f210d:
                        zmm2 = _mm_sub_ps(zmm2, zmm4)
                        
                        if ((temp0_985 & 4) != 0)
                            var_568[2] = arg6[0]
                    else
                    label_1402f2fae:
                        var_568[1] = zmm0.d
                        zmm2 = _mm_sub_ps(zmm2, zmm4)
                        
                        if ((temp0_985 & 4) != 0)
                            var_568[2] = arg6[0]
                    
                    arg7 = _mm_cmpeq_ps(zx.o(0), zmm2, 1)
                    zmm0 = _mm_sqrt_ps(zmm2)
                    zmm7 = var_3e8_2
                    
                    if ((temp0_985 & 8) == 0)
                        arg7 = _mm_and_ps(arg7, zmm0)
                        zmm2 = var_418
                        
                        if ((temp0_985 & 1) != 0)
                            goto label_1402f2fe1
                        
                        goto label_1402f214c
                    
                    var_568[3] = zmm1.d
                    arg7 = _mm_and_ps(arg7, zmm0)
                    zmm2 = var_418
                    
                    if ((temp0_985 & 1) != 0)
                    label_1402f2fe1:
                        var_558[0] = arg7[0]
                        
                        if ((temp0_985 & 2) == 0)
                            goto label_1402f2155
                        
                        goto label_1402f2ff1
                    
                label_1402f214c:
                    
                    if ((temp0_985 & 2) == 0)
                    label_1402f2155:
                        
                        if ((temp0_985 & 4) != 0)
                            goto label_1402f3003
                        
                        goto label_1402f215e
                    
                label_1402f2ff1:
                    var_558[1] = __extractps_memd_xmmps_immb(arg7, 1)
                    
                    if ((temp0_985 & 4) == 0)
                    label_1402f215e:
                        
                        if ((temp0_985 & 8) != 0)
                            var_558[3] = __extractps_memd_xmmps_immb(arg7, 3)
                    else
                    label_1402f3003:
                        var_558[2] = __extractps_memd_xmmps_immb(arg7, 2)
                        
                        if ((temp0_985 & 8) != 0)
                            var_558[3] = __extractps_memd_xmmps_immb(arg7, 3)
                case 2
                    var_418 = zmm2
                    arg7 = zmm7
                    zmm6 = _mm_add_epi64(zmm6, zmm7)
                    int32_t temp0_1248[0x4] = __paddq_xmmdq_memdq(arg5, var_428_1)
                    zmm2 = _mm_shuffle_epi32(zmm8, 0x50)
                    float temp0_1250[0x4] = _mm_blendv_ps(zx.o(0), temp0_1248, zmm2)
                    zmm3 = zmm8
                    uint32_t temp0_1251[0x4] = _mm_shuffle_epi32(zmm8, 0xfa)
                    float temp0_1252[0x4] = _mm_blendv_ps(zx.o(0), zmm6, temp0_1251)
                    int64_t rax_217 = temp0_1250[0].q
                    void* rbp_46 = arg4 + rax_217
                    int64_t rcx_69 = _mm_extract_epi64(temp0_1250, 1)
                    zmm7 = data_1434426b0
                    float temp0_1253[0x4] = _mm_blendv_ps(zx.o(0), zmm7, zmm2)
                    void* rdi_64 = arg4 + rcx_69
                    arg5 = _mm_blendv_ps(zx.o(0), zmm7, temp0_1251)
                    int64_t rbx_75 = temp0_1252[0].q
                    zmm7 = zx.o(*(temp0_1253[0].q + rbp_46))
                    int64_t rsi_23 = _mm_extract_epi64(temp0_1253, 1)
                    zmm8 = data_1434426c0
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                    zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, *(rsi_23 + rdi_64), 1)
                    void* rsi_25 = arg4 + rbx_75
                    zmm6 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm1.q + rbp_46)), 
                        *(_mm_extract_epi64(zmm1, 1) + rdi_64), 1)
                    int64_t rbp_49 = _mm_extract_epi64(temp0_1252, 1)
                    int16_t* rdi_65 = arg5[0].q
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm8, temp0_1251)
                    zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, *(rdi_65 + rsi_25), 2)
                    zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(zmm1.q + rsi_25), 2)
                    void* rdi_67 = arg4 + rbp_49
                    zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, *(_mm_extract_epi64(arg5, 1) + rdi_67), 3)
                    zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(_mm_extract_epi64(zmm1, 1) + rdi_67), 3)
                    zmm1 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_217)), *(arg4 + rcx_69), 1), 
                            *(arg4 + rbx_75), 2), 
                        *(arg4 + rbp_49), 3).q)
                    zmm4 = data_1434424d0
                    zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm4))
                    arg5 = data_1434426d0
                    zmm2 = _mm_div_ps(zmm2, arg5)
                    zmm1 = _mm_cvtepu16_epi32(zmm7[0].q)
                    
                    if ((temp0_985 & 1) != 0)
                        var_588[0] = zmm2[0]
                    
                    zmm1 = _mm_add_epi32(zmm1, zmm4)
                    
                    if ((temp0_985 & 2) != 0)
                        var_588[1] = __extractps_memd_xmmps_immb(zmm2, 1)
                    
                    zmm1 = _mm_cvtepi32_ps(zmm1)
                    zmm7 = arg7
                    zmm8 = zmm3
                    
                    if ((temp0_985 & 4) == 0)
                        zmm1 = _mm_div_ps(zmm1, arg5)
                        
                        if ((temp0_985 & 8) != 0)
                            goto label_1402f3037
                        
                        goto label_1402f2309
                    
                    var_588[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                    zmm1 = _mm_div_ps(zmm1, arg5)
                    
                    if ((temp0_985 & 8) != 0)
                    label_1402f3037:
                        var_588[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                        zmm6 = _mm_cvtepu16_epi32(zmm6[0].q)
                        
                        if ((temp0_985 & 1) == 0)
                            goto label_1402f2317
                        
                        goto label_1402f304d
                    
                label_1402f2309:
                    zmm6 = _mm_cvtepu16_epi32(zmm6[0].q)
                    
                    if ((temp0_985 & 1) == 0)
                    label_1402f2317:
                        zmm6 = _mm_add_epi32(zmm6, zmm4)
                        
                        if ((temp0_985 & 2) != 0)
                            goto label_1402f3060
                        
                        goto label_1402f2324
                    
                label_1402f304d:
                    var_578[0] = zmm1.d
                    zmm6 = _mm_add_epi32(zmm6, zmm4)
                    
                    if ((temp0_985 & 2) == 0)
                    label_1402f2324:
                        zmm4 = _mm_cvtepi32_ps(zmm6)
                        
                        if ((temp0_985 & 4) != 0)
                            var_578[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                    else
                    label_1402f3060:
                        var_578[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                        zmm4 = _mm_cvtepi32_ps(zmm6)
                        
                        if ((temp0_985 & 4) != 0)
                            var_578[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                    
                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                    zmm6 = data_142d3f670
                    float temp0_1280[0x4] = _mm_div_ps(zmm4, arg5)
                    
                    if ((temp0_985 & 8) != 0)
                        var_578[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                    
                    float temp0_1282[0x4] = _mm_sub_ps(zmm6, zmm2)
                    zmm1 = _mm_mul_ps(zmm1, zmm1)
                    
                    if ((temp0_985 & 1) != 0)
                        var_568[0] = temp0_1280[0]
                    
                    float temp0_1284[0x4] = _mm_sub_ps(temp0_1282, zmm1)
                    zmm1 = _mm_mul_ps(temp0_1280, temp0_1280)
                    zmm2 = var_418
                    
                    if ((temp0_985 & 2) == 0)
                        zmm6 = _mm_sub_ps(temp0_1284, zmm1)
                        
                        if ((temp0_985 & 4) != 0)
                            goto label_1402f308d
                        
                        goto label_1402f2386
                    
                    var_568[1] = __extractps_memd_xmmps_immb(temp0_1280, 1)
                    zmm6 = _mm_sub_ps(temp0_1284, zmm1)
                    
                    if ((temp0_985 & 4) != 0)
                    label_1402f308d:
                        var_568[2] = __extractps_memd_xmmps_immb(temp0_1280, 2)
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                        zmm1 = _mm_sqrt_ps(zmm6)
                        
                        if ((temp0_985 & 8) == 0)
                            goto label_1402f2396
                        
                        goto label_1402f30a5
                    
                label_1402f2386:
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                    zmm1 = _mm_sqrt_ps(zmm6)
                    
                    if ((temp0_985 & 8) == 0)
                    label_1402f2396:
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_985 & 1) != 0)
                            goto label_1402f30b9
                        
                        goto label_1402f23a2
                    
                label_1402f30a5:
                    var_568[3] = __extractps_memd_xmmps_immb(temp0_1280, 3)
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_985 & 1) != 0)
                    label_1402f30b9:
                        var_558[0] = zmm0.d
                        
                        if ((temp0_985 & 2) == 0)
                            goto label_1402f23ab
                        
                        goto label_1402f30c8
                    
                label_1402f23a2:
                    
                    if ((temp0_985 & 2) == 0)
                    label_1402f23ab:
                        
                        if ((temp0_985 & 4) != 0)
                            goto label_1402f30d9
                        
                        goto label_1402f23b4
                    
                label_1402f30c8:
                    var_558[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                    
                    if ((temp0_985 & 4) == 0)
                    label_1402f23b4:
                        
                        if ((temp0_985 & 8) != 0)
                            var_558[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                    else
                    label_1402f30d9:
                        var_558[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                        
                        if ((temp0_985 & 8) != 0)
                            var_558[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                case 3
                    var_418 = zmm2
                    uint32_t var_508_2[0x4] = zmm15
                    zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm8, 0x1f), 0x1f)
                    zmm1 = zmm0 & var_3c8_2
                    int64_t rax_220 = sx.q(zmm1.d)
                    void* rdi_68 = arg4 + rax_220
                    arg6 = zmm8
                    zmm8 = *(arg4 + rax_220)
                    int64_t rbp_50 = sx.q(_mm_extract_epi32(zmm1, 1))
                    void* rax_222 = arg4 + rbp_50
                    int64_t rsi_28 = sx.q(_mm_extract_epi32(zmm1, 2))
                    void* rcx_72 = arg4 + rsi_28
                    int64_t rdx_87 = sx.q(_mm_extract_epi32(zmm1, 3))
                    void* rbx_77 = arg4 + rdx_87
                    float temp0_1297[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm8, *(arg4 + rbp_50), 0x10), 
                            *(arg4 + rsi_28), 0x20), 
                        *(arg4 + rdx_87), 0x30)
                    zmm1 = data_142fc95e0 & zmm0
                    zmm2 = *(zx.q(zmm1.d) + rdi_68)
                    uint64_t rdx_89 = zx.q(_mm_extract_epi32(zmm1, 1))
                    uint64_t rbp_51 = zx.q(_mm_extract_epi32(zmm1, 2))
                    uint64_t rsi_29 = zx.q(_mm_extract_epi32(zmm1, 3))
                    zmm2 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm2, *(rdx_89 + rax_222), 0x10), 
                            *(rbp_51 + rcx_72), 0x20), 
                        *(rsi_29 + rbx_77), 0x30)
                    zmm1 = data_142fc95f0 & zmm0
                    arg7 = *(zx.q(zmm1.d) + rdi_68)
                    uint64_t rdx_91 = zx.q(_mm_extract_epi32(zmm1, 1))
                    uint64_t rbp_52 = zx.q(_mm_extract_epi32(zmm1, 2))
                    uint64_t rsi_30 = zx.q(_mm_extract_epi32(zmm1, 3))
                    arg7 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(arg7, *(rdx_91 + rax_222), 0x10), 
                            *(rbp_52 + rcx_72), 0x20), 
                        *(rsi_30 + rbx_77), 0x30)
                    zmm1 = data_143442650 & zmm0
                    zmm4 = *(zx.q(zmm1.d) + rdi_68)
                    uint64_t rdx_93 = zx.q(_mm_extract_epi32(zmm1, 1))
                    uint64_t rbp_53 = zx.q(_mm_extract_epi32(zmm1, 2))
                    uint64_t rsi_31 = zx.q(_mm_extract_epi32(zmm1, 3))
                    float temp0_1315[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm4, *(rdx_93 + rax_222), 0x10), 
                            *(rbp_53 + rcx_72), 0x20), 
                        *(rsi_31 + rbx_77), 0x30)
                    zmm3 = zmm7
                    zmm7 = data_143442660 & zmm0
                    zmm1 = *(zx.q(zmm7[0]) + rdi_68)
                    uint64_t rdx_95 = zx.q(_mm_extract_epi32(zmm7, 1))
                    uint64_t rbp_54 = zx.q(_mm_extract_epi32(zmm7, 2))
                    uint64_t rsi_32 = zx.q(_mm_extract_epi32(zmm7, 3))
                    zmm1 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm1, *(rdx_95 + rax_222), 0x10), 
                            *(rbp_54 + rcx_72), 0x20), 
                        *(rsi_32 + rbx_77), 0x30)
                    zmm0 &= data_143442670
                    zmm7 = *(zx.q(zmm0.d) + rdi_68)
                    int32_t* rdx_97 = zx.q(_mm_extract_epi32(zmm0, 1))
                    int32_t* rbp_55 = zx.q(_mm_extract_epi32(zmm0, 2))
                    int32_t* rdi_69 = zx.q(_mm_extract_epi32(zmm0, 3))
                    float temp0_1327[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm7, *(rdx_97 + rax_222), 0x10), 
                            *(rbp_55 + rcx_72), 0x20), 
                        *(rdi_69 + rbx_77), 0x30)
                    uint32_t var_3e8_3[0x4] = zmm3
                    zmm6 = _mm_add_epi64(zmm6, zmm3)
                    zmm3 = _mm_blendv_ps(zx.o(0), __paddq_xmmdq_memdq(arg5, var_428_1), 
                        _mm_shuffle_epi32(arg6, 0x50))
                    var_458 = arg6
                    arg5 = _mm_blendv_ps(zx.o(0), zmm6, _mm_shuffle_epi32(arg6, 0xfa))
                    int64_t rax_223 = zmm3[0].q
                    int64_t rcx_73 = _mm_extract_epi64(zmm3, 1)
                    int64_t rdx_98 = _mm_extract_epi64(arg5, 1)
                    zmm0 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_223)), *(arg4 + rcx_73), 1), 
                            *(arg4 + arg5[0].q), 2), 
                        *(arg4 + rdx_98), 3)
                    zmm6 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    uint32_t temp0_1338[0x4] = _mm_srli_epi32(zmm0, 0x15)
                    zmm15 = data_143442440
                    arg5 = _mm_cvtepi32_ps(_mm_add_epi32(temp0_1338, zmm15))
                    arg6 = data_143442690
                    arg5 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(arg5, arg6), temp0_1315), temp0_1297)
                    float temp0_1345[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm6, zmm15))
                    
                    if ((temp0_985 & 1) != 0)
                        var_588[0] = arg5[0]
                    
                    float temp0_1346[0x4] = _mm_div_ps(temp0_1345, arg6)
                    
                    if ((temp0_985 & 2) != 0)
                        var_588[1] = __extractps_memd_xmmps_immb(arg5, 1)
                    
                    zmm0 &= data_143442680
                    zmm1 = _mm_mul_ps(zmm1, temp0_1346)
                    zmm15 = var_508_2
                    zmm8 = var_458
                    
                    if ((temp0_985 & 4) == 0)
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        
                        if ((temp0_985 & 8) != 0)
                            goto label_1402f3113
                        
                        goto label_1402f2691
                    
                    var_588[2] = __extractps_memd_xmmps_immb(arg5, 2)
                    zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                    zmm2 = _mm_add_ps(zmm2, zmm1)
                    
                    if ((temp0_985 & 8) != 0)
                    label_1402f3113:
                        var_588[3] = __extractps_memd_xmmps_immb(arg5, 3)
                        zmm1 = _mm_cvtepi32_ps(zmm0)
                        
                        if ((temp0_985 & 1) == 0)
                            goto label_1402f269d
                        
                        goto label_1402f3127
                    
                label_1402f2691:
                    zmm1 = _mm_cvtepi32_ps(zmm0)
                    
                    if ((temp0_985 & 1) == 0)
                    label_1402f269d:
                        zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                        
                        if ((temp0_985 & 2) != 0)
                            goto label_1402f313d
                        
                        goto label_1402f26ad
                    
                label_1402f3127:
                    var_578[0] = zmm2[0]
                    zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                    
                    if ((temp0_985 & 2) == 0)
                    label_1402f26ad:
                        zmm7 = _mm_mul_ps(temp0_1327, zmm1)
                        
                        if ((temp0_985 & 4) != 0)
                            var_578[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                    else
                    label_1402f313d:
                        var_578[1] = __extractps_memd_xmmps_immb(zmm2, 1)
                        zmm7 = _mm_mul_ps(temp0_1327, zmm1)
                        
                        if ((temp0_985 & 4) != 0)
                            var_578[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                    
                    arg5 = _mm_mul_ps(arg5, arg5)
                    zmm1 = data_142d3f670
                    arg7 = _mm_add_ps(arg7, zmm7)
                    
                    if ((temp0_985 & 8) != 0)
                        var_578[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                    
                    zmm1 = _mm_sub_ps(zmm1, arg5)
                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                    zmm7 = var_3e8_3
                    
                    if ((temp0_985 & 1) != 0)
                        var_568[0] = arg7[0]
                    
                    zmm1 = _mm_sub_ps(zmm1, zmm2)
                    zmm2 = _mm_mul_ps(arg7, arg7)
                    
                    if ((temp0_985 & 2) != 0)
                        var_568[1] = __extractps_memd_xmmps_immb(arg7, 1)
                    
                    zmm1 = _mm_sub_ps(zmm1, zmm2)
                    
                    if ((temp0_985 & 4) != 0)
                        var_568[2] = __extractps_memd_xmmps_immb(arg7, 2)
                    
                    float temp0_1365[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                    zmm1 = _mm_sqrt_ps(zmm1)
                    zmm2 = var_418
                    
                    if ((temp0_985 & 8) == 0)
                        zmm14 = _mm_and_ps(temp0_1365, zmm1)
                        
                        if ((temp0_985 & 1) != 0)
                            goto label_1402f316c
                        
                        goto label_1402f2744
                    
                    var_568[3] = __extractps_memd_xmmps_immb(arg7, 3)
                    zmm14 = _mm_and_ps(temp0_1365, zmm1)
                    
                    if ((temp0_985 & 1) != 0)
                    label_1402f316c:
                        var_558[0] = zmm14[0]
                        
                        if ((temp0_985 & 2) == 0)
                            goto label_1402f274d
                        
                        goto label_1402f317c
                    
                label_1402f2744:
                    
                    if ((temp0_985 & 2) == 0)
                    label_1402f274d:
                        
                        if ((temp0_985 & 4) != 0)
                            goto label_1402f318e
                        
                        goto label_1402f2756
                    
                label_1402f317c:
                    var_558[1] = __extractps_memd_xmmps_immb(zmm14, 1)
                    
                    if ((temp0_985 & 4) == 0)
                    label_1402f2756:
                        
                        if ((temp0_985 & 8) != 0)
                            var_558[3] = __extractps_memd_xmmps_immb(zmm14, 3)
                    else
                    label_1402f318e:
                        var_558[2] = __extractps_memd_xmmps_immb(zmm14, 2)
                        
                        if ((temp0_985 & 8) != 0)
                            var_558[3] = __extractps_memd_xmmps_immb(zmm14, 3)
                case 4
                    zmm3 = zmm2
                    zmm6 = _mm_add_epi64(zmm6, zmm7)
                    zmm1 = _mm_blendv_ps(zx.o(0), __paddq_xmmdq_memdq(arg5, var_428_1), 
                        _mm_shuffle_epi32(zmm8, 0x50))
                    zmm2 = _mm_blendv_ps(zx.o(0), zmm6, _mm_shuffle_epi32(zmm8, 0xfa))
                    int64_t rcx_74 = _mm_extract_epi64(zmm1, 1)
                    int64_t rbp_57 = _mm_extract_epi64(zmm2, 1)
                    int32_t temp0_1376[0x4] = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), *(arg4 + rcx_74), 1), 
                            *(arg4 + zmm2[0].q), 2), 
                        *(arg4 + rbp_57), 3)
                    zmm4 = _mm_srli_epi32(temp0_1376, 0xa) & data_143442480
                    zmm1 = _mm_srli_epi32(temp0_1376, 0x15)
                    zmm6 = data_143442440
                    zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm6))
                    arg5 = data_143442690
                    zmm1 = _mm_div_ps(zmm1, arg5)
                    rdx_100 = temp0_985
                    
                    if ((rdx_100 & 1) == 0)
                        zmm4 = _mm_add_epi32(zmm4, zmm6)
                        
                        if ((rdx_100 & 2) != 0)
                            goto label_1402f3fa3
                        
                        goto label_1402f281a
                    
                    var_588[0] = zmm1.d
                    zmm4 = _mm_add_epi32(zmm4, zmm6)
                    
                    if ((rdx_100 & 2) != 0)
                    label_1402f3fa3:
                        var_588[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                        zmm4 = _mm_cvtepi32_ps(zmm4)
                        
                        if ((rdx_100 & 4) == 0)
                            goto label_1402f2826
                        
                        goto label_1402f3fb7
                    
                label_1402f281a:
                    zmm4 = _mm_cvtepi32_ps(zmm4)
                    
                    if ((rdx_100 & 4) == 0)
                    label_1402f2826:
                        zmm4 = _mm_div_ps(zmm4, arg5)
                        
                        if ((rdx_100 & 8) != 0)
                            goto label_1402f3fcb
                        
                        goto label_1402f2832
                    
                label_1402f3fb7:
                    var_588[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                    zmm4 = _mm_div_ps(zmm4, arg5)
                    
                    if ((rdx_100 & 8) != 0)
                    label_1402f3fcb:
                        var_588[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                        zmm2 = temp0_1376 & data_143442680
                        
                        if ((rdx_100 & 1) == 0)
                            goto label_1402f2843
                        
                        goto label_1402f3fe4
                    
                label_1402f2832:
                    zmm2 = temp0_1376 & data_143442680
                    
                    if ((rdx_100 & 1) == 0)
                    label_1402f2843:
                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                        
                        if ((rdx_100 & 2) != 0)
                            goto label_1402f3ffb
                        
                        goto label_1402f2854
                    
                label_1402f3fe4:
                    var_578[0] = zmm4[0]
                    zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                    
                    if ((rdx_100 & 2) == 0)
                    label_1402f2854:
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rdx_100 & 4) != 0)
                            var_578[2] = __extractps_memd_xmmps_immb(zmm4, 2)
                    else
                    label_1402f3ffb:
                        var_578[1] = __extractps_memd_xmmps_immb(zmm4, 1)
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rdx_100 & 4) != 0)
                            var_578[2] = __extractps_memd_xmmps_immb(zmm4, 2)
                    
                    zmm1 = _mm_mul_ps(zmm1, zmm1)
                    arg5 = data_142d3f670
                    zmm2 = __divps_xmmps_memps(zmm2, data_1434426a0)
                    
                    if ((rdx_100 & 8) != 0)
                        var_578[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                    
                    arg5 = _mm_sub_ps(arg5, zmm1)
                    float temp0_1392[0x4] = _mm_mul_ps(zmm4, zmm4)
                    
                    if ((rdx_100 & 1) != 0)
                        var_568[0] = zmm2[0]
                    
                    arg5 = _mm_sub_ps(arg5, temp0_1392)
                    zmm1 = _mm_mul_ps(zmm2, zmm2)
                    
                    if ((rdx_100 & 2) == 0)
                        arg5 = _mm_sub_ps(arg5, zmm1)
                        
                        if ((rdx_100 & 4) != 0)
                            goto label_1402f4028
                        
                        goto label_1402f28b1
                    
                    var_568[1] = __extractps_memd_xmmps_immb(zmm2, 1)
                    arg5 = _mm_sub_ps(arg5, zmm1)
                    
                    if ((rdx_100 & 4) != 0)
                    label_1402f4028:
                        var_568[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                        zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                        zmm1 = _mm_sqrt_ps(arg5)
                        
                        if ((rdx_100 & 8) == 0)
                            goto label_1402f28c1
                        
                        goto label_1402f4040
                    
                label_1402f28b1:
                    zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                    zmm1 = _mm_sqrt_ps(arg5)
                    
                    if ((rdx_100 & 8) == 0)
                    label_1402f28c1:
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((rdx_100 & 1) != 0)
                            goto label_1402f4054
                        
                        goto label_1402f28d0
                    
                label_1402f4040:
                    var_568[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((rdx_100 & 1) != 0)
                    label_1402f4054:
                        var_558[0] = zmm0.d
                        zmm2 = zmm3
                        
                        if ((rdx_100 & 2) == 0)
                            goto label_1402f28da
                        
                        goto label_1402f2af7
                    
                label_1402f28d0:
                    zmm2 = zmm3
                    
                    if ((rdx_100 & 2) == 0)
                    label_1402f28da:
                        
                        if ((rdx_100 & 4) != 0)
                            goto label_1402f2b08
                        
                        goto label_1402f28e3
                    
                label_1402f2af7:
                    var_558[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                    
                    if ((rdx_100 & 4) == 0)
                    label_1402f28e3:
                        
                        if ((rdx_100 & 8) != 0)
                            var_558[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                    else
                    label_1402f2b08:
                        var_558[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                        
                        if ((rdx_100 & 8) != 0)
                            var_558[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                case 5
                    var_418 = zmm2
                    arg7 = zmm7
                    zmm6 = _mm_add_epi64(zmm6, zmm7)
                    zmm1 = _mm_blendv_ps(zx.o(0), __paddq_xmmdq_memdq(arg5, var_428_1), 
                        _mm_shuffle_epi32(zmm8, 0x50))
                    var_458 = zmm8
                    zmm2 = _mm_blendv_ps(zx.o(0), zmm6, _mm_shuffle_epi32(zmm8, 0xfa))
                    int64_t rcx_75 = _mm_extract_epi64(zmm1, 1)
                    int64_t rdx_101 = zmm2[0].q
                    int64_t rbp_58 = _mm_extract_epi64(zmm2, 1)
                    zmm1 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), *(arg4 + rcx_75), 1), 
                            *(arg4 + rdx_101), 2), 
                        *(arg4 + rbp_58), 3)
                    zmm2 = _mm_srli_epi32(zmm1, 0x15)
                    uint32_t temp0_1409[0x4] = _mm_srli_epi32(zmm1, 5)
                    arg6 = data_143442600
                    zmm6 = data_143442610
                    zmm4 = data_143442320
                    zmm8 = data_143442330
                    zmm2 = _mm_add_epi32(zmm2 & zmm4, zmm8) | (zmm2 & zmm6) | (temp0_1409 & arg6)
                    rdx_100 = temp0_985
                    
                    if ((rdx_100 & 1) != 0)
                        var_588[0] = zmm2[0]
                    
                    zmm7 = _mm_srli_epi32(zmm1, 0xa)
                    arg5 = _mm_slli_epi32(zmm1, 6)
                    
                    if ((rdx_100 & 2) != 0)
                        var_588[1] = __pextrd_memd_xmmdq_immb(zmm2, 1)
                    
                    if ((rdx_100 & 4) != 0)
                        var_588[2] = __pextrd_memd_xmmdq_immb(zmm2, 2)
                    
                    zmm4 = _mm_add_epi32(zmm4 & zmm7, zmm8)
                    arg5 = (arg5 & arg6) | (zmm6 & zmm7)
                    zmm7 = arg7
                    
                    if ((rdx_100 & 8) == 0)
                        arg5 |= zmm4
                        zmm8 = var_458
                        
                        if ((rdx_100 & 1) != 0)
                            goto label_1402f408a
                        
                        goto label_1402f2a3b
                    
                    var_588[3] = __pextrd_memd_xmmdq_immb(zmm2, 3)
                    arg5 |= zmm4
                    zmm8 = var_458
                    
                    if ((rdx_100 & 1) == 0)
                    label_1402f2a3b:
                        zmm6 = data_143442620 & zmm1
                        
                        if ((rdx_100 & 2) != 0)
                            var_578[1] = __pextrd_memd_xmmdq_immb(arg5, 1)
                    else
                    label_1402f408a:
                        var_578[0] = arg5[0]
                        zmm6 = data_143442620 & zmm1
                        
                        if ((rdx_100 & 2) != 0)
                            var_578[1] = __pextrd_memd_xmmdq_immb(arg5, 1)
                    
                    zmm4 = zmm1
                    zmm1 &= data_143442640
                    zmm4 = _mm_slli_epi32(zmm4, 0x11)
                    zmm6 = __paddd_xmmdq_memdq(zmm6, data_1434423a0)
                    
                    if ((rdx_100 & 4) != 0)
                        var_578[2] = __pextrd_memd_xmmdq_immb(arg5, 2)
                    
                    zmm4 &= data_143442630
                    zmm1 |= zmm6
                    zmm2 = _mm_mul_ps(zmm2, zmm2)
                    zmm6 = data_142d3f670
                    
                    if ((rdx_100 & 8) != 0)
                        var_578[3] = __pextrd_memd_xmmdq_immb(arg5, 3)
                    
                    zmm4 |= zmm1
                    float temp0_1422[0x4] = _mm_sub_ps(zmm6, zmm2)
                    arg5 = _mm_mul_ps(arg5, arg5)
                    
                    if ((rdx_100 & 1) != 0)
                        var_568[0] = zmm4[0]
                    
                    float temp0_1424[0x4] = _mm_sub_ps(temp0_1422, arg5)
                    zmm1 = _mm_mul_ps(zmm4, zmm4)
                    zmm2 = var_418
                    
                    if ((rdx_100 & 2) == 0)
                        zmm6 = _mm_sub_ps(temp0_1424, zmm1)
                        
                        if ((rdx_100 & 4) != 0)
                            goto label_1402f40be
                        
                        goto label_1402f2ad2
                    
                    var_568[1] = __pextrd_memd_xmmdq_immb(zmm4, 1)
                    zmm6 = _mm_sub_ps(temp0_1424, zmm1)
                    
                    if ((rdx_100 & 4) != 0)
                    label_1402f40be:
                        var_568[2] = __pextrd_memd_xmmdq_immb(zmm4, 2)
                        zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                        zmm1 = _mm_sqrt_ps(zmm6)
                        
                        if ((rdx_100 & 8) == 0)
                            goto label_1402f2ae2
                        
                        goto label_1402f40d6
                    
                label_1402f2ad2:
                    zmm0 = _mm_cmpeq_ps(zx.o(0), zmm6, 1)
                    zmm1 = _mm_sqrt_ps(zmm6)
                    
                    if ((rdx_100 & 8) == 0)
                    label_1402f2ae2:
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((rdx_100 & 1) != 0)
                            goto label_1402f40ea
                        
                        goto label_1402f2aee
                    
                label_1402f40d6:
                    var_568[3] = __pextrd_memd_xmmdq_immb(zmm4, 3)
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((rdx_100 & 1) == 0)
                    label_1402f2aee:
                        
                        if ((rdx_100 & 2) == 0)
                            goto label_1402f28da
                        
                        goto label_1402f2af7
                    
                label_1402f40ea:
                    var_558[0] = zmm0.d
                    
                    if ((rdx_100 & 2) == 0)
                        goto label_1402f28da
                    
                    goto label_1402f2af7
        
        arg9 = _mm_srai_epi32(_mm_slli_epi32(_mm_cmpeq_epi32(arg9, arg8) & not.o(zmm8), 0x1f), 0x1f)
        char temp0_1497 = _mm_movemask_ps(arg9)
        
        if (temp0_1497 != 0)
            zmm14 = var_438_3
            int32_t var_4f8
            uint32_t var_4e8
            float var_4d8
            int32_t var_4c8
            uint64_t rcx_88
            int64_t rdx_104
            
            if (r10.d u> 5)
                rcx_88 = zx.q(temp0_1497)
                rdx_104 = rcx_88 & 1
                
                if (rdx_104 == 0)
                    if ((rcx_88.b & 2) != 0)
                        goto label_1402f473d
                    
                    goto label_1402f3f0e
                
                var_4f8 = 0
                
                if ((rcx_88.b & 2) != 0)
                label_1402f473d:
                    int32_t var_4f4_7 = 0
                    
                    if ((rcx_88.b & 4) == 0)
                        goto label_1402f3f17
                    
                    goto label_1402f4751
                
            label_1402f3f0e:
                
                if ((rcx_88.b & 4) == 0)
                label_1402f3f17:
                    
                    if ((rcx_88.b & 8) != 0)
                        goto label_1402f4765
                    
                    goto label_1402f3f20
                
            label_1402f4751:
                int32_t var_4f0_7 = 0
                
                if ((rcx_88.b & 8) != 0)
                label_1402f4765:
                    int32_t var_4ec_7 = 0
                    
                    if (rdx_104 == 0)
                        goto label_1402f3f29
                    
                    goto label_1402f4779
                
            label_1402f3f20:
                
                if (rdx_104 == 0)
                label_1402f3f29:
                    
                    if ((rcx_88.b & 2) != 0)
                        goto label_1402f478d
                    
                    goto label_1402f3f32
                
            label_1402f4779:
                var_4e8 = 0
                
                if ((rcx_88.b & 2) != 0)
                label_1402f478d:
                    int32_t var_4e4_7 = 0
                    
                    if ((rcx_88.b & 4) == 0)
                        goto label_1402f3f3b
                    
                    goto label_1402f47a1
                
            label_1402f3f32:
                
                if ((rcx_88.b & 4) == 0)
                label_1402f3f3b:
                    
                    if ((rcx_88.b & 8) != 0)
                        goto label_1402f47b5
                    
                    goto label_1402f3f44
                
            label_1402f47a1:
                int32_t var_4e0_7 = 0
                
                if ((rcx_88.b & 8) != 0)
                label_1402f47b5:
                    int32_t var_4dc_7 = 0
                    
                    if (rdx_104 == 0)
                        goto label_1402f3f4d
                    
                    goto label_1402f47c9
                
            label_1402f3f44:
                
                if (rdx_104 == 0)
                label_1402f3f4d:
                    
                    if ((rcx_88.b & 2) != 0)
                        goto label_1402f47dd
                    
                    goto label_1402f3f56
                
            label_1402f47c9:
                var_4d8 = 0f
                
                if ((rcx_88.b & 2) != 0)
                label_1402f47dd:
                    int32_t var_4d4_7 = 0
                    
                    if ((rcx_88.b & 4) == 0)
                        goto label_1402f3f5f
                    
                    goto label_1402f47f1
                
            label_1402f3f56:
                
                if ((rcx_88.b & 4) == 0)
                label_1402f3f5f:
                    
                    if ((rcx_88.b & 8) != 0)
                        goto label_1402f4805
                    
                    goto label_1402f3f68
                
            label_1402f47f1:
                int32_t var_4d0_7 = 0
                
                if ((rcx_88.b & 8) != 0)
                label_1402f4805:
                    int32_t var_4cc_6 = 0
                    
                    if (rdx_104 == 0)
                        goto label_1402f3f71
                    
                    goto label_1402f4819
                
            label_1402f3f68:
                
                if (rdx_104 == 0)
                label_1402f3f71:
                    
                    if ((rcx_88.b & 2) != 0)
                        goto label_1402f482d
                    
                    goto label_1402f3f7a
                
            label_1402f4819:
                var_4c8 = 0x3f800000
                
                if ((rcx_88.b & 2) != 0)
                label_1402f482d:
                    int32_t var_4c4_5 = 0x3f800000
                    
                    if ((rcx_88.b & 4) == 0)
                        goto label_1402f3f83
                    
                    goto label_1402f4841
                
            label_1402f3f7a:
                int32_t var_4bc_5
                
                if ((rcx_88.b & 4) != 0)
                label_1402f4841:
                    int32_t var_4c0_5 = 0x3f800000
                    
                    if ((rcx_88.b & 8) != 0)
                        var_4bc_5 = 0x3f800000
                else
                label_1402f3f83:
                    
                    if ((rcx_88.b & 8) != 0)
                        var_4bc_5 = 0x3f800000
            else
                int32_t temp0_1498[0x4] = _mm_mullo_epi32(arg8, zmm2)
                zmm0 = _mm_cvtepi32_epi64(temp0_1498[0].q)
                zmm6 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_1498, 0x4e).q)
                
                switch (jump_table_1402f4cfc[r8_5])
                    case 0xffffe505
                        zmm7 = _mm_add_epi64(zmm7, zmm6)
                        int32_t temp0_1503[0x4] = _mm_add_epi64(var_428_1, zmm0)
                        zmm1 = _mm_shuffle_epi32(arg9, 0x50)
                        arg5 = _mm_blendv_ps(zx.o(0), temp0_1503, zmm1)
                        zmm2 = _mm_shuffle_epi32(arg9, 0xfa)
                        float temp0_1507[0x4] = _mm_blendv_ps(zx.o(0), zmm7, zmm2)
                        int64_t rax_266 = _mm_extract_epi64(arg5, 1)
                        void* rcx_80 = arg4 + rax_266
                        int32_t rax_267 = *(arg4 + rax_266)
                        int64_t rbp_59 = temp0_1507[0].q
                        void* rdi_70 = arg4 + rbp_59
                        int32_t r14_11 = *(arg4 + rbp_59)
                        int64_t rbx_79 = _mm_extract_epi64(temp0_1507, 1)
                        zmm6 = data_1434426c0
                        float temp0_1508[0x4] = _mm_blendv_ps(zx.o(0), zmm6, zmm1)
                        void* rsi_33 = arg4 + rbx_79
                        float temp0_1509[0x4] = _mm_blendv_ps(zx.o(0), zmm6, zmm2)
                        int32_t r15_8 = *(arg4 + rbx_79)
                        void* r10_9 = arg5[0].q + arg4
                        int32_t r11_8 = *(_mm_extract_epi64(temp0_1508, 1) + rcx_80)
                        int32_t r9_4 = *(temp0_1509[0].q + rdi_70)
                        int32_t r13_6 = *(_mm_extract_epi64(temp0_1509, 1) + rsi_33)
                        arg5 = data_1434426e0
                        float temp0_1510[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        float temp0_1511[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                        var_468[0] = *(_mm_extract_epi64(temp0_1510, 1) + rcx_80)
                        int32_t* rbp_65 = temp0_1511[0].q
                        int32_t* rbx_80 = _mm_extract_epi64(temp0_1511, 1)
                        var_428_1[0] = *(rbp_65 + rdi_70)
                        var_458[0] = *(rbx_80 + rsi_33)
                        arg5 = data_1434426f0
                        float temp0_1512[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        zmm3 = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                        int32_t rbp_68 = *(_mm_extract_epi64(temp0_1512, 1) + rcx_80)
                        var_3c8_2.d = *(zmm3[0].q + rdi_70)
                        int32_t rbx_82 = *(_mm_extract_epi64(zmm3, 1) + rsi_33)
                        var_418.d = *(temp0_1512[0].q + r10_9)
                        rcx_88 = zx.q(temp0_1497)
                        rdx_104 = rcx_88 & 1
                        
                        if (rdx_104 == 0)
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f4119
                            
                            goto label_1402f337a
                        
                        var_4f8 = *r10_9
                        
                        if ((rcx_88.b & 2) != 0)
                        label_1402f4119:
                            int32_t var_4f4_2 = rax_267
                            
                            if ((rcx_88.b & 4) == 0)
                                goto label_1402f3383
                            
                            goto label_1402f4129
                        
                    label_1402f337a:
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f3383:
                            
                            if ((rcx_88.b & 8) != 0)
                                goto label_1402f413a
                            
                            goto label_1402f338c
                        
                    label_1402f4129:
                        int32_t var_4f0_1 = r14_11
                        
                        if ((rcx_88.b & 8) != 0)
                        label_1402f413a:
                            int32_t var_4ec_1 = r15_8
                            
                            if (rdx_104 == 0)
                                goto label_1402f3395
                            
                            goto label_1402f414b
                        
                    label_1402f338c:
                        
                        if (rdx_104 == 0)
                        label_1402f3395:
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f415b
                            
                            goto label_1402f339e
                        
                    label_1402f414b:
                        var_4e8 = *(temp0_1508[0].q + r10_9)
                        
                        if ((rcx_88.b & 2) != 0)
                        label_1402f415b:
                            int32_t var_4e4_3 = r11_8
                            
                            if ((rcx_88.b & 4) == 0)
                                goto label_1402f33a7
                            
                            goto label_1402f416c
                        
                    label_1402f339e:
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f33a7:
                            
                            if ((rcx_88.b & 8) != 0)
                                goto label_1402f417d
                            
                            goto label_1402f33b3
                        
                    label_1402f416c:
                        int32_t var_4e0_6 = r9_4
                        
                        if ((rcx_88.b & 8) != 0)
                        label_1402f417d:
                            int32_t var_4dc_6 = r13_6
                            r12 = var_3d8
                            
                            if (rdx_104 == 0)
                                goto label_1402f33c1
                            
                            goto label_1402f4196
                        
                    label_1402f33b3:
                        r12 = var_3d8
                        
                        if (rdx_104 == 0)
                        label_1402f33c1:
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f41ae
                            
                            goto label_1402f33ca
                        
                    label_1402f4196:
                        var_4d8 = *(temp0_1510[0].q + r10_9)
                        
                        if ((rcx_88.b & 2) != 0)
                        label_1402f41ae:
                            int32_t var_4d4_1 = var_468[0]
                            
                            if ((rcx_88.b & 4) == 0)
                                goto label_1402f33d3
                            
                            goto label_1402f41c5
                        
                    label_1402f33ca:
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f33d3:
                            
                            if ((rcx_88.b & 8) != 0)
                                goto label_1402f41dc
                            
                            goto label_1402f33dc
                        
                    label_1402f41c5:
                        float var_4d0_1 = var_428_1[0]
                        
                        if ((rcx_88.b & 8) != 0)
                        label_1402f41dc:
                            float var_4cc_1 = var_458[0]
                            
                            if (rdx_104 == 0)
                                goto label_1402f33e5
                            
                            goto label_1402f41f3
                        
                    label_1402f33dc:
                        
                        if (rdx_104 == 0)
                        label_1402f33e5:
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f4203
                            
                            goto label_1402f33ee
                        
                    label_1402f41f3:
                        var_4c8 = var_418.d
                        
                        if ((rcx_88.b & 2) != 0)
                        label_1402f4203:
                            int32_t var_4c4_1 = rbp_68
                            
                            if ((rcx_88.b & 4) == 0)
                                goto label_1402f33f7
                            
                            goto label_1402f421a
                        
                    label_1402f33ee:
                        int32_t var_4bc_1
                        
                        if ((rcx_88.b & 4) != 0)
                        label_1402f421a:
                            int32_t var_4c0_1 = var_3c8_2.d
                            
                            if ((rcx_88.b & 8) != 0)
                                var_4bc_1 = rbx_82
                        else
                        label_1402f33f7:
                            
                            if ((rcx_88.b & 8) != 0)
                                var_4bc_1 = rbx_82
                    case 0xffffe709
                        uint32_t var_508_3[0x4] = zmm15
                        zmm7 = _mm_add_epi64(zmm7, zmm6)
                        int32_t temp0_1515[0x4] = _mm_add_epi64(var_428_1, zmm0)
                        zmm1 = _mm_shuffle_epi32(arg9, 0x50)
                        float temp0_1517[0x4] = _mm_blendv_ps(zx.o(0), temp0_1515, zmm1)
                        zmm2 = _mm_shuffle_epi32(arg9, 0xfa)
                        arg5 = _mm_blendv_ps(zx.o(0), zmm7, zmm2)
                        int64_t rcx_89 = temp0_1517[0].q
                        void* rax_268 = arg4 + rcx_89
                        zmm3 = *(arg4 + rcx_89)
                        int64_t rcx_90 = _mm_extract_epi64(temp0_1517, 1)
                        void* rbp_69 = arg4 + rcx_90
                        zmm14 = *(arg4 + rcx_90)
                        int64_t rbx_83 = arg5[0].q
                        void* rcx_91 = arg4 + rbx_83
                        arg9 = *(arg4 + rbx_83)
                        int64_t rdi_71 = _mm_extract_epi64(arg5, 1)
                        void* rbx_84 = arg4 + rdi_71
                        arg8 = *(arg4 + rdi_71)
                        arg5 = data_1434426c0
                        float temp0_1520[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        float temp0_1521[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                        arg5 = *(temp0_1520[0].q + rax_268)
                        zmm15 = *(_mm_extract_epi64(temp0_1520, 1) + rbp_69)
                        arg6 = *(temp0_1521[0].q + rcx_91)
                        float (* rdi_75)[0x4] = _mm_extract_epi64(temp0_1521, 1)
                        zmm4 = data_1434426e0
                        float temp0_1522[0x4] = _mm_blendv_ps(zx.o(0), zmm4, zmm1)
                        zmm8 = *(rdi_75 + rbx_84)
                        zmm1 = _mm_blendv_ps(zx.o(0), zmm4, zmm2)
                        zmm0 = *(temp0_1522[0].q + rax_268)
                        zmm2 = *(_mm_extract_epi64(temp0_1522, 1) + rbp_69)
                        uint128_t* rbp_70 = _mm_extract_epi64(zmm1, 1)
                        arg7 = *(zmm1.q + rcx_91)
                        zmm1 = *(rbp_70 + rbx_84)
                        rcx_88 = zx.q(temp0_1497)
                        rdx_104 = rcx_88 & 1
                        
                        if (rdx_104 == 0)
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f4248
                            
                            goto label_1402f353d
                        
                        var_4f8 = zmm3[0]
                        
                        if ((rcx_88.b & 2) != 0)
                        label_1402f4248:
                            float var_4f4_3 = zmm14[0]
                            
                            if ((rcx_88.b & 4) == 0)
                                goto label_1402f3546
                            
                            goto label_1402f425b
                        
                    label_1402f353d:
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f3546:
                            
                            if ((rcx_88.b & 8) != 0)
                                goto label_1402f426e
                            
                            goto label_1402f354f
                        
                    label_1402f425b:
                        float var_4f0_2 = arg9[0]
                        
                        if ((rcx_88.b & 8) == 0)
                        label_1402f354f:
                            zmm3 = _mm_insert_ps(zmm3, zmm14, 0x10)
                            
                            if (rdx_104 != 0)
                                var_4e8 = arg5[0]
                        else
                        label_1402f426e:
                            int32_t var_4ec_2 = arg8[0]
                            zmm3 = _mm_insert_ps(zmm3, zmm14, 0x10)
                            
                            if (rdx_104 != 0)
                                var_4e8 = arg5[0]
                        
                        zmm3 = _mm_insert_ps(zmm3, arg9, 0x20)
                        arg5 = _mm_insert_ps(arg5, zmm15, 0x10)
                        zmm14 = var_438_3
                        
                        if ((rcx_88.b & 2) != 0)
                            uint32_t var_4e4_1 = zmm15[0]
                        
                        zmm3 = _mm_insert_ps(zmm3, arg8, 0x30)
                        arg5 = _mm_insert_ps(arg5, arg6, 0x20)
                        float temp0_1529[0x4] = _mm_insert_ps(zmm0, zmm2, 0x10)
                        
                        if ((rcx_88.b & 4) != 0)
                            uint32_t var_4e0_1 = arg6[0]
                        
                        arg5 = _mm_insert_ps(arg5, zmm8, 0x30)
                        float temp0_1531[0x4] = _mm_insert_ps(temp0_1529, arg7, 0x20)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        zmm7 = data_142d3f670
                        zmm15 = var_508_3
                        
                        if ((rcx_88.b & 8) != 0)
                            float var_4dc_1 = zmm8[0]
                        
                        float temp0_1533[0x4] = _mm_insert_ps(temp0_1531, zmm1, 0x30)
                        float temp0_1534[0x4] = _mm_sub_ps(zmm7, zmm3)
                        arg5 = _mm_mul_ps(arg5, arg5)
                        
                        if (rdx_104 == 0)
                            zmm7 = _mm_sub_ps(temp0_1534, arg5)
                            zmm4 = _mm_mul_ps(temp0_1533, temp0_1533)
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f42a5
                            
                            goto label_1402f3605
                        
                        var_4d8 = zmm0.d
                        zmm7 = _mm_sub_ps(temp0_1534, arg5)
                        zmm4 = _mm_mul_ps(temp0_1533, temp0_1533)
                        
                        if ((rcx_88.b & 2) != 0)
                        label_1402f42a5:
                            int32_t var_4d4_2 = zmm2[0]
                            zmm7 = _mm_sub_ps(zmm7, zmm4)
                            
                            if ((rcx_88.b & 4) == 0)
                                goto label_1402f3611
                            
                            goto label_1402f42ba
                        
                    label_1402f3605:
                        zmm7 = _mm_sub_ps(zmm7, zmm4)
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f3611:
                            zmm6 = _mm_cmpeq_ps(zx.o(0), zmm7, 1)
                            zmm0 = _mm_sqrt_ps(zmm7)
                            
                            if ((rcx_88.b & 8) != 0)
                                goto label_1402f42d4
                            
                            goto label_1402f3621
                        
                    label_1402f42ba:
                        int32_t var_4d0_2 = arg7[0]
                        zmm6 = _mm_cmpeq_ps(zx.o(0), zmm7, 1)
                        zmm0 = _mm_sqrt_ps(zmm7)
                        
                        if ((rcx_88.b & 8) != 0)
                        label_1402f42d4:
                            int32_t var_4cc_2 = zmm1.d
                            zmm6 = _mm_and_ps(zmm6, zmm0)
                            
                            if (rdx_104 == 0)
                                goto label_1402f362d
                            
                            goto label_1402f42e9
                        
                    label_1402f3621:
                        zmm6 = _mm_and_ps(zmm6, zmm0)
                        
                        if (rdx_104 == 0)
                        label_1402f362d:
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f42fb
                            
                            goto label_1402f3636
                        
                    label_1402f42e9:
                        var_4c8 = zmm6[0]
                        
                        if ((rcx_88.b & 2) != 0)
                        label_1402f42fb:
                            int32_t var_4c4_2 = __extractps_memd_xmmps_immb(zmm6, 1)
                            
                            if ((rcx_88.b & 4) == 0)
                                goto label_1402f363f
                            
                            goto label_1402f430f
                        
                    label_1402f3636:
                        int32_t var_4bc_2
                        
                        if ((rcx_88.b & 4) != 0)
                        label_1402f430f:
                            int32_t var_4c0_2 = __extractps_memd_xmmps_immb(zmm6, 2)
                            
                            if ((rcx_88.b & 8) != 0)
                                var_4bc_2 = __extractps_memd_xmmps_immb(zmm6, 3)
                        else
                        label_1402f363f:
                            
                            if ((rcx_88.b & 8) != 0)
                                var_4bc_2 = __extractps_memd_xmmps_immb(zmm6, 3)
                    case 0xffffe951
                        zmm7 = _mm_add_epi64(zmm7, zmm6)
                        zmm1 = _mm_add_epi64(var_428_1, zmm0)
                        zmm2 = _mm_shuffle_epi32(arg9, 0x50)
                        float temp0_1545[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        zmm1 = _mm_shuffle_epi32(arg9, 0xfa)
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm7, zmm1)
                        int64_t rax_271 = temp0_1545[0].q
                        int64_t rcx_92 = _mm_extract_epi64(temp0_1545, 1)
                        zmm6 = data_1434426b0
                        arg5 = _mm_blendv_ps(zx.o(0), zmm6, zmm2)
                        void* rbp_71 = arg4 + rax_271
                        float temp0_1549[0x4] = _mm_blendv_ps(zx.o(0), zmm6, zmm1)
                        void* rbx_85 = arg4 + rcx_92
                        zmm6 = zx.o(*(arg5[0].q + rbp_71))
                        int64_t rdi_79 = _mm_extract_epi64(arg5, 1)
                        zmm8 = data_1434426c0
                        float temp0_1550[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                        zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(rdi_79 + rbx_85), 1)
                        int64_t rdi_81 = zmm3[0].q
                        int32_t temp0_1552[0x4] = __pinsrw_xmmdq_memw_immb(
                            zx.o(*(temp0_1550[0].q + rbp_71)), 
                            *(_mm_extract_epi64(temp0_1550, 1) + rbx_85), 1)
                        void* rbp_74 = arg4 + rdi_81
                        zmm2 = _mm_blendv_ps(zx.o(0), zmm8, zmm1)
                        zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(temp0_1549[0].q + rbp_74), 2)
                        int32_t temp0_1555[0x4] =
                            __pinsrw_xmmdq_memw_immb(temp0_1552, *(zmm2[0].q + rbp_74), 2)
                        zmm1 = __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_271)), *(arg4 + rcx_92), 1), 
                            *(arg4 + rdi_81), 2)
                        int64_t rax_273 = _mm_extract_epi64(zmm3, 1)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(arg4 + rax_273), 3)
                        void* rax_274 = arg4 + rax_273
                        zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, 
                            *(_mm_extract_epi64(temp0_1549, 1) + rax_274), 3)
                        int32_t temp0_1560[0x4] = __pinsrw_xmmdq_memw_immb(temp0_1555, 
                            *(_mm_extract_epi64(zmm2, 1) + rax_274), 3)
                        zmm1 = _mm_cvtepu16_epi32(zmm1.q)
                        zmm3 = data_1434424d0
                        zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm3))
                        zmm4 = data_1434426d0
                        zmm1 = _mm_div_ps(zmm1, zmm4)
                        zmm2 = _mm_cvtepu16_epi32(zmm6[0].q)
                        rcx_88 = zx.q(temp0_1497)
                        rdx_104 = rcx_88 & 1
                        
                        if (rdx_104 == 0)
                            zmm2 = _mm_add_epi32(zmm2, zmm3)
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f4349
                            
                            goto label_1402f37b4
                        
                        var_4f8 = zmm1.d
                        zmm2 = _mm_add_epi32(zmm2, zmm3)
                        
                        if ((rcx_88.b & 2) != 0)
                        label_1402f4349:
                            int32_t var_4f4_4 = __extractps_memd_xmmps_immb(zmm1, 1)
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rcx_88.b & 4) == 0)
                                goto label_1402f37c0
                            
                            goto label_1402f4360
                        
                    label_1402f37b4:
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f37c0:
                            zmm2 = _mm_div_ps(zmm2, zmm4)
                            
                            if ((rcx_88.b & 8) != 0)
                                goto label_1402f4377
                            
                            goto label_1402f37cc
                        
                    label_1402f4360:
                        int32_t var_4f0_3 = __extractps_memd_xmmps_immb(zmm1, 2)
                        zmm2 = _mm_div_ps(zmm2, zmm4)
                        
                        if ((rcx_88.b & 8) != 0)
                        label_1402f4377:
                            int32_t var_4ec_3 = __extractps_memd_xmmps_immb(zmm1, 3)
                            arg5 = _mm_cvtepu16_epi32(temp0_1560[0].q)
                            
                            if (rdx_104 == 0)
                                goto label_1402f37da
                            
                            goto label_1402f4390
                        
                    label_1402f37cc:
                        arg5 = _mm_cvtepu16_epi32(temp0_1560[0].q)
                        
                        if (rdx_104 == 0)
                        label_1402f37da:
                            arg5 = _mm_add_epi32(arg5, zmm3)
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f43a6
                            
                            goto label_1402f37e7
                        
                    label_1402f4390:
                        var_4e8 = zmm2[0]
                        arg5 = _mm_add_epi32(arg5, zmm3)
                        int32_t var_4e0_2
                        
                        if ((rcx_88.b & 2) == 0)
                        label_1402f37e7:
                            zmm3 = _mm_cvtepi32_ps(arg5)
                            
                            if ((rcx_88.b & 4) != 0)
                                var_4e0_2 = __extractps_memd_xmmps_immb(zmm2, 2)
                        else
                        label_1402f43a6:
                            int32_t var_4e4_4 = __extractps_memd_xmmps_immb(zmm2, 1)
                            zmm3 = _mm_cvtepi32_ps(arg5)
                            
                            if ((rcx_88.b & 4) != 0)
                                var_4e0_2 = __extractps_memd_xmmps_immb(zmm2, 2)
                        zmm1 = _mm_mul_ps(zmm1, zmm1)
                        arg5 = data_142d3f670
                        zmm3 = _mm_div_ps(zmm3, zmm4)
                        
                        if ((rcx_88.b & 8) != 0)
                            int32_t var_4dc_2 = __extractps_memd_xmmps_immb(zmm2, 3)
                        
                        arg5 = _mm_sub_ps(arg5, zmm1)
                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                        
                        if (rdx_104 != 0)
                            var_4d8 = zmm3[0]
                        
                        arg5 = _mm_sub_ps(arg5, zmm2)
                        zmm1 = _mm_mul_ps(zmm3, zmm3)
                        
                        if ((rcx_88.b & 2) == 0)
                            arg5 = _mm_sub_ps(arg5, zmm1)
                            
                            if ((rcx_88.b & 4) != 0)
                                goto label_1402f43d9
                            
                            goto label_1402f3849
                        
                        int32_t var_4d4_3 = __extractps_memd_xmmps_immb(zmm3, 1)
                        arg5 = _mm_sub_ps(arg5, zmm1)
                        
                        if ((rcx_88.b & 4) != 0)
                        label_1402f43d9:
                            int32_t var_4d0_3 = __extractps_memd_xmmps_immb(zmm3, 2)
                            zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                            zmm1 = _mm_sqrt_ps(arg5)
                            
                            if ((rcx_88.b & 8) == 0)
                                goto label_1402f46f2
                            
                            goto label_1402f43f4
                        
                    label_1402f3849:
                        zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                        zmm1 = _mm_sqrt_ps(arg5)
                        
                        if ((rcx_88.b & 8) == 0)
                        label_1402f46f2:
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (rdx_104 != 0)
                                goto label_1402f440b
                            
                            goto label_1402f46fe
                        
                    label_1402f43f4:
                        int32_t var_4cc_3 = __extractps_memd_xmmps_immb(zmm3, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if (rdx_104 != 0)
                        label_1402f440b:
                            var_4c8 = zmm0.d
                            
                            if ((rcx_88.b & 2) == 0)
                                goto label_1402f4707
                            
                            goto label_1402f441d
                        
                    label_1402f46fe:
                        
                        if ((rcx_88.b & 2) == 0)
                        label_1402f4707:
                            
                            if ((rcx_88.b & 4) != 0)
                                goto label_1402f4431
                            
                            goto label_1402f4710
                        
                    label_1402f441d:
                        int32_t var_4c4_3 = __extractps_memd_xmmps_immb(zmm0, 1)
                        int32_t var_4bc_4
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f4710:
                            
                            if ((rcx_88.b & 8) != 0)
                                var_4bc_4 = __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_1402f4431:
                            int32_t var_4c0_3 = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((rcx_88.b & 8) != 0)
                                var_4bc_4 = __extractps_memd_xmmps_immb(zmm0, 3)
                    case 0xffffeb62
                        zmm1 = var_3c8_2 & arg9
                        int64_t rax_276 = sx.q(zmm1.d)
                        void* rbx_88 = arg4 + rax_276
                        zmm8 = *(arg4 + rax_276)
                        int64_t rdi_82 = sx.q(_mm_extract_epi32(zmm1, 1))
                        void* r8_7 = arg4 + rdi_82
                        int64_t rsi_35 = sx.q(_mm_extract_epi32(zmm1, 2))
                        void* rax_279 = arg4 + rsi_35
                        int64_t rcx_95 = sx.q(_mm_extract_epi32(zmm1, 3))
                        void* rbp_76 = arg4 + rcx_95
                        float temp0_1588[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm8, *(arg4 + rdi_82), 0x10), 
                                *(arg4 + rsi_35), 0x20), 
                            *(arg4 + rcx_95), 0x30)
                        zmm1 = data_142fc95e0 & arg9
                        zmm2 = *(zx.q(zmm1.d) + rbx_88)
                        uint64_t rcx_97 = zx.q(_mm_extract_epi32(zmm1, 1))
                        uint64_t rdi_83 = zx.q(_mm_extract_epi32(zmm1, 2))
                        uint64_t rsi_36 = zx.q(_mm_extract_epi32(zmm1, 3))
                        zmm2 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(rcx_97 + r8_7), 0x10), 
                                *(rdi_83 + rax_279), 0x20), 
                            *(rsi_36 + rbp_76), 0x30)
                        zmm3 = data_142fc95f0 & arg9
                        zmm1 = *(zx.q(zmm3[0]) + rbx_88)
                        uint64_t rcx_99 = zx.q(_mm_extract_epi32(zmm3, 1))
                        uint64_t rdi_84 = zx.q(_mm_extract_epi32(zmm3, 2))
                        uint64_t rsi_37 = zx.q(_mm_extract_epi32(zmm3, 3))
                        zmm1 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rcx_99 + r8_7), 0x10), 
                                *(rdi_84 + rax_279), 0x20), 
                            *(rsi_37 + rbp_76), 0x30)
                        zmm3 = data_143442650 & arg9
                        zmm4 = *(zx.q(zmm3[0]) + rbx_88)
                        uint64_t rcx_101 = zx.q(_mm_extract_epi32(zmm3, 1))
                        uint64_t rdi_85 = zx.q(_mm_extract_epi32(zmm3, 2))
                        uint64_t rsi_38 = zx.q(_mm_extract_epi32(zmm3, 3))
                        float temp0_1606[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm4, *(rcx_101 + r8_7), 0x10), 
                                *(rdi_85 + rax_279), 0x20), 
                            *(rsi_38 + rbp_76), 0x30)
                        zmm3 = data_143442660 & arg9
                        arg5 = *(zx.q(zmm3[0]) + rbx_88)
                        uint64_t rcx_103 = zx.q(_mm_extract_epi32(zmm3, 1))
                        uint64_t rdi_86 = zx.q(_mm_extract_epi32(zmm3, 2))
                        int32_t* rsi_39 = zx.q(_mm_extract_epi32(zmm3, 3))
                        arg5 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg5, *(rcx_103 + r8_7), 0x10), 
                                *(rdi_86 + rax_279), 0x20), 
                            *(rsi_39 + rbp_76), 0x30)
                        zmm3 = data_143442670 & arg9
                        zmm14 = *(zx.q(zmm3[0]) + rbx_88)
                        uint64_t rcx_105 = zx.q(_mm_extract_epi32(zmm3, 1))
                        int32_t* rbx_89 = zx.q(_mm_extract_epi32(zmm3, 2))
                        int32_t* rdi_87 = zx.q(_mm_extract_epi32(zmm3, 3))
                        float temp0_1618[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm14, *(rcx_105 + r8_7), 0x10), 
                                *(rbx_89 + rax_279), 0x20), 
                            *(rdi_87 + rbp_76), 0x30)
                        zmm7 = _mm_add_epi64(zmm7, zmm6)
                        zmm3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(var_428_1, zmm0), 
                            _mm_shuffle_epi32(arg9, 0x50))
                        float temp0_1624[0x4] =
                            _mm_blendv_ps(zx.o(0), zmm7, _mm_shuffle_epi32(arg9, 0xfa))
                        int64_t rax_280 = zmm3[0].q
                        int64_t rcx_106 = _mm_extract_epi64(zmm3, 1)
                        int64_t rbp_77 = _mm_extract_epi64(temp0_1624, 1)
                        zmm0 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_280)), 
                                    *(arg4 + rcx_106), 1), 
                                *(arg4 + temp0_1624[0].q), 2), 
                            *(arg4 + rbp_77), 3)
                        arg7 = zx.o(0)
                        zmm6 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        uint32_t temp0_1629[0x4] = _mm_srli_epi32(zmm0, 0x15)
                        arg8 = data_143442440
                        zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(temp0_1629, arg8))
                        arg6 = data_143442690
                        zmm3 =
                            _mm_add_ps(_mm_mul_ps(_mm_div_ps(zmm3, arg6), temp0_1606), temp0_1588)
                        float temp0_1636[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm6, arg8))
                        rcx_88 = zx.q(temp0_1497)
                        rdx_104 = rcx_88 & 1
                        
                        if (rdx_104 == 0)
                            zmm4 = _mm_div_ps(temp0_1636, arg6)
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f4460
                            
                            goto label_1402f3abf
                        
                        var_4f8 = zmm3[0]
                        zmm4 = _mm_div_ps(temp0_1636, arg6)
                        
                        if ((rcx_88.b & 2) != 0)
                        label_1402f4460:
                            int32_t var_4f4_5 = __extractps_memd_xmmps_immb(zmm3, 1)
                            zmm0 &= data_143442680
                            arg5 = _mm_mul_ps(arg5, zmm4)
                            
                            if ((rcx_88.b & 4) == 0)
                                goto label_1402f3ad3
                            
                            goto label_1402f447f
                        
                    label_1402f3abf:
                        zmm0 &= data_143442680
                        arg5 = _mm_mul_ps(arg5, zmm4)
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f3ad3:
                            zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                            zmm2 = _mm_add_ps(zmm2, arg5)
                            
                            if ((rcx_88.b & 8) != 0)
                                goto label_1402f449e
                            
                            goto label_1402f3ae7
                        
                    label_1402f447f:
                        int32_t var_4f0_4 = __extractps_memd_xmmps_immb(zmm3, 2)
                        zmm0 = __paddd_xmmdq_memdq(zmm0, data_143442490)
                        zmm2 = _mm_add_ps(zmm2, arg5)
                        
                        if ((rcx_88.b & 8) != 0)
                        label_1402f449e:
                            int32_t var_4ec_4 = __extractps_memd_xmmps_immb(zmm3, 3)
                            zmm4 = _mm_cvtepi32_ps(zmm0)
                            
                            if (rdx_104 == 0)
                                goto label_1402f3af3
                            
                            goto label_1402f44b5
                        
                    label_1402f3ae7:
                        zmm4 = _mm_cvtepi32_ps(zmm0)
                        
                        if (rdx_104 == 0)
                        label_1402f3af3:
                            zmm4 = __divps_xmmps_memps(zmm4, data_1434426a0)
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f44ce
                            
                            goto label_1402f3b03
                        
                    label_1402f44b5:
                        var_4e8 = zmm2[0]
                        zmm4 = __divps_xmmps_memps(zmm4, data_1434426a0)
                        int32_t var_4e0_3
                        
                        if ((rcx_88.b & 2) == 0)
                        label_1402f3b03:
                            zmm14 = _mm_mul_ps(temp0_1618, zmm4)
                            
                            if ((rcx_88.b & 4) != 0)
                                var_4e0_3 = __extractps_memd_xmmps_immb(zmm2, 2)
                        else
                        label_1402f44ce:
                            int32_t var_4e4_5 = __extractps_memd_xmmps_immb(zmm2, 1)
                            zmm14 = _mm_mul_ps(temp0_1618, zmm4)
                            
                            if ((rcx_88.b & 4) != 0)
                                var_4e0_3 = __extractps_memd_xmmps_immb(zmm2, 2)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        zmm4 = data_142d3f670
                        zmm1 = _mm_add_ps(zmm1, zmm14)
                        
                        if ((rcx_88.b & 8) != 0)
                            int32_t var_4dc_3 = __extractps_memd_xmmps_immb(zmm2, 3)
                        
                        float temp0_1648[0x4] = _mm_sub_ps(zmm4, zmm3)
                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                        zmm14 = var_438_3
                        
                        if (rdx_104 != 0)
                            var_4d8 = zmm1.d
                        
                        float temp0_1650[0x4] = _mm_sub_ps(temp0_1648, zmm2)
                        zmm2 = _mm_mul_ps(zmm1, zmm1)
                        
                        if ((rcx_88.b & 2) == 0)
                            zmm4 = _mm_sub_ps(temp0_1650, zmm2)
                            
                            if ((rcx_88.b & 4) != 0)
                                goto label_1402f4502
                            
                            goto label_1402f3b70
                        
                        int32_t var_4d4_4 = __extractps_memd_xmmps_immb(zmm1, 1)
                        zmm4 = _mm_sub_ps(temp0_1650, zmm2)
                        
                        if ((rcx_88.b & 4) != 0)
                        label_1402f4502:
                            int32_t var_4d0_4 = __extractps_memd_xmmps_immb(zmm1, 2)
                            arg7 = _mm_cmpeq_ps(arg7, zmm4, 1)
                            zmm2 = _mm_sqrt_ps(zmm4)
                            
                            if ((rcx_88.b & 8) == 0)
                                goto label_1402f3b81
                            
                            goto label_1402f451e
                        
                    label_1402f3b70:
                        arg7 = _mm_cmpeq_ps(arg7, zmm4, 1)
                        zmm2 = _mm_sqrt_ps(zmm4)
                        
                        if ((rcx_88.b & 8) == 0)
                        label_1402f3b81:
                            arg7 = _mm_and_ps(arg7, zmm2)
                            
                            if (rdx_104 != 0)
                                goto label_1402f4536
                            
                            goto label_1402f3b8e
                        
                    label_1402f451e:
                        int32_t var_4cc_4 = __extractps_memd_xmmps_immb(zmm1, 3)
                        arg7 = _mm_and_ps(arg7, zmm2)
                        
                        if (rdx_104 != 0)
                        label_1402f4536:
                            var_4c8 = arg7[0]
                            
                            if ((rcx_88.b & 2) == 0)
                                goto label_1402f3b97
                            
                            goto label_1402f4549
                        
                    label_1402f3b8e:
                        
                        if ((rcx_88.b & 2) == 0)
                        label_1402f3b97:
                            
                            if ((rcx_88.b & 4) != 0)
                                goto label_1402f455e
                            
                            goto label_1402f3ba0
                        
                    label_1402f4549:
                        int32_t var_4c4_4 = __extractps_memd_xmmps_immb(arg7, 1)
                        int32_t var_4bc_3
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f3ba0:
                            
                            if ((rcx_88.b & 8) != 0)
                                var_4bc_3 = __extractps_memd_xmmps_immb(arg7, 3)
                        else
                        label_1402f455e:
                            int32_t var_4c0_4 = __extractps_memd_xmmps_immb(arg7, 2)
                            
                            if ((rcx_88.b & 8) != 0)
                                var_4bc_3 = __extractps_memd_xmmps_immb(arg7, 3)
                    case 0xffffeeb2
                        zmm7 = _mm_add_epi64(zmm7, zmm6)
                        zmm1 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(var_428_1, zmm0), 
                            _mm_shuffle_epi32(arg9, 0x50))
                        zmm2 = _mm_blendv_ps(zx.o(0), zmm7, _mm_shuffle_epi32(arg9, 0xfa))
                        int64_t rcx_107 = _mm_extract_epi64(zmm1, 1)
                        int64_t rbp_78 = _mm_extract_epi64(zmm2, 1)
                        int32_t temp0_1664[0x4] = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), *(arg4 + rcx_107), 
                                    1), 
                                *(arg4 + zmm2[0].q), 2), 
                            *(arg4 + rbp_78), 3)
                        zmm3 = _mm_srli_epi32(temp0_1664, 0xa) & data_143442480
                        zmm1 = _mm_srli_epi32(temp0_1664, 0x15)
                        arg5 = data_143442440
                        zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, arg5))
                        zmm4 = data_143442690
                        zmm1 = _mm_div_ps(zmm1, zmm4)
                        rcx_88 = zx.q(temp0_1497)
                        rdx_104 = rcx_88 & 1
                        
                        if (rdx_104 == 0)
                            zmm3 = _mm_add_epi32(zmm3, arg5)
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f459a
                            
                            goto label_1402f3c66
                        
                        var_4f8 = zmm1.d
                        zmm3 = _mm_add_epi32(zmm3, arg5)
                        
                        if ((rcx_88.b & 2) != 0)
                        label_1402f459a:
                            int32_t var_4f4_6 = __extractps_memd_xmmps_immb(zmm1, 1)
                            zmm3 = _mm_cvtepi32_ps(zmm3)
                            
                            if ((rcx_88.b & 4) == 0)
                                goto label_1402f3c72
                            
                            goto label_1402f45b1
                        
                    label_1402f3c66:
                        zmm3 = _mm_cvtepi32_ps(zmm3)
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f3c72:
                            zmm3 = _mm_div_ps(zmm3, zmm4)
                            
                            if ((rcx_88.b & 8) != 0)
                                goto label_1402f45c8
                            
                            goto label_1402f3c7e
                        
                    label_1402f45b1:
                        int32_t var_4f0_5 = __extractps_memd_xmmps_immb(zmm1, 2)
                        zmm3 = _mm_div_ps(zmm3, zmm4)
                        
                        if ((rcx_88.b & 8) != 0)
                        label_1402f45c8:
                            int32_t var_4ec_5 = __extractps_memd_xmmps_immb(zmm1, 3)
                            zmm2 = temp0_1664 & data_143442680
                            
                            if (rdx_104 == 0)
                                goto label_1402f3c8f
                            
                            goto label_1402f45e4
                        
                    label_1402f3c7e:
                        zmm2 = temp0_1664 & data_143442680
                        
                        if (rdx_104 == 0)
                        label_1402f3c8f:
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                            
                            if ((rcx_88.b & 2) != 0)
                                goto label_1402f45fe
                            
                            goto label_1402f3ca0
                        
                    label_1402f45e4:
                        var_4e8 = zmm3[0]
                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                        int32_t var_4e0_4
                        
                        if ((rcx_88.b & 2) == 0)
                        label_1402f3ca0:
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rcx_88.b & 4) != 0)
                                var_4e0_4 = __extractps_memd_xmmps_immb(zmm3, 2)
                        else
                        label_1402f45fe:
                            int32_t var_4e4_6 = __extractps_memd_xmmps_immb(zmm3, 1)
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rcx_88.b & 4) != 0)
                                var_4e0_4 = __extractps_memd_xmmps_immb(zmm3, 2)
                        zmm1 = _mm_mul_ps(zmm1, zmm1)
                        zmm4 = data_142d3f670
                        zmm2 = __divps_xmmps_memps(zmm2, data_1434426a0)
                        
                        if ((rcx_88.b & 8) != 0)
                            int32_t var_4dc_4 = __extractps_memd_xmmps_immb(zmm3, 3)
                        
                        float temp0_1679[0x4] = _mm_sub_ps(zmm4, zmm1)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        
                        if (rdx_104 != 0)
                            var_4d8 = zmm2[0]
                        
                        float temp0_1681[0x4] = _mm_sub_ps(temp0_1679, zmm3)
                        zmm1 = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rcx_88.b & 2) == 0)
                            zmm4 = _mm_sub_ps(temp0_1681, zmm1)
                            
                            if ((rcx_88.b & 4) != 0)
                                goto label_1402f4631
                            
                            goto label_1402f3d06
                        
                        int32_t var_4d4_5 = __extractps_memd_xmmps_immb(zmm2, 1)
                        zmm4 = _mm_sub_ps(temp0_1681, zmm1)
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f3d06:
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                            zmm1 = _mm_sqrt_ps(zmm4)
                            
                            if ((rcx_88.b & 8) == 0)
                                goto label_1402f46f2
                        else
                        label_1402f4631:
                            int32_t var_4d0_5 = __extractps_memd_xmmps_immb(zmm2, 2)
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm4, 1)
                            zmm1 = _mm_sqrt_ps(zmm4)
                            
                            if ((rcx_88.b & 8) == 0)
                                goto label_1402f46f2
                        
                        int32_t var_4cc_5 = __extractps_memd_xmmps_immb(zmm2, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if (rdx_104 == 0)
                            goto label_1402f46fe
                        
                        goto label_1402f440b
                    case 0xfffff01f
                        zmm7 = _mm_add_epi64(zmm7, zmm6)
                        zmm1 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(var_428_1, zmm0), 
                            _mm_shuffle_epi32(arg9, 0x50))
                        zmm2 = _mm_blendv_ps(zx.o(0), zmm7, _mm_shuffle_epi32(arg9, 0xfa))
                        int64_t rcx_108 = _mm_extract_epi64(zmm1, 1)
                        int64_t rbp_79 = zmm2[0].q
                        int64_t rbx_92 = _mm_extract_epi64(zmm2, 1)
                        zmm1 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + zmm1.q)), *(arg4 + rcx_108), 
                                    1), 
                                *(arg4 + rbp_79), 2), 
                            *(arg4 + rbx_92), 3)
                        zmm2 = _mm_srli_epi32(zmm1, 0x15)
                        uint32_t temp0_1696[0x4] = _mm_srli_epi32(zmm1, 5)
                        zmm7 = data_143442600
                        arg5 = data_143442610
                        zmm4 = data_143442320
                        zmm8 = data_143442330
                        zmm2 =
                            _mm_add_epi32(zmm2 & zmm4, zmm8) | (zmm2 & arg5) | (temp0_1696 & zmm7)
                        rcx_88 = zx.q(temp0_1497)
                        rdx_104 = rcx_88 & 1
                        
                        if (rdx_104 != 0)
                            var_4f8 = zmm2[0]
                        
                        zmm6 = _mm_srli_epi32(zmm1, 0xa)
                        uint32_t temp0_1699[0x4] = _mm_slli_epi32(zmm1, 6)
                        
                        if ((rcx_88.b & 2) != 0)
                            int32_t var_4f4_1 = __pextrd_memd_xmmdq_immb(zmm2, 1)
                        
                        zmm3 = temp0_1699 & zmm7
                        arg5 &= zmm6
                        zmm4 &= zmm6
                        
                        if ((rcx_88.b & 4) == 0)
                            zmm4 = _mm_add_epi32(zmm4, zmm8)
                            zmm3 |= arg5
                            
                            if ((rcx_88.b & 8) != 0)
                                goto label_1402f4685
                            
                            goto label_1402f3e31
                        
                        int32_t var_4f0_6 = __pextrd_memd_xmmdq_immb(zmm2, 2)
                        zmm4 = _mm_add_epi32(zmm4, zmm8)
                        zmm3 |= arg5
                        
                        if ((rcx_88.b & 8) != 0)
                        label_1402f4685:
                            int32_t var_4ec_6 = __pextrd_memd_xmmdq_immb(zmm2, 3)
                            zmm3 |= zmm4
                            
                            if (rdx_104 == 0)
                                goto label_1402f3e46
                            
                            goto label_1402f469d
                        
                    label_1402f3e31:
                        zmm3 |= zmm4
                        int32_t var_4e4_2
                        
                        if (rdx_104 != 0)
                        label_1402f469d:
                            var_4e8 = zmm3[0]
                            arg5 = data_143442620 & zmm1
                            
                            if ((rcx_88.b & 2) != 0)
                                var_4e4_2 = __pextrd_memd_xmmdq_immb(zmm3, 1)
                        else
                        label_1402f3e46:
                            arg5 = data_143442620 & zmm1
                            
                            if ((rcx_88.b & 2) != 0)
                                var_4e4_2 = __pextrd_memd_xmmdq_immb(zmm3, 1)
                        zmm4 = zmm1
                        zmm1 &= data_143442640
                        zmm4 = _mm_slli_epi32(zmm4, 0x11)
                        int32_t temp0_1704[0x4] = __paddd_xmmdq_memdq(arg5, data_1434423a0)
                        
                        if ((rcx_88.b & 4) != 0)
                            int32_t var_4e0_5 = __pextrd_memd_xmmdq_immb(zmm3, 2)
                        
                        zmm4 &= data_143442630
                        zmm2 = _mm_mul_ps(zmm2, zmm2)
                        arg5 = data_142d3f670
                        
                        if ((rcx_88.b & 8) != 0)
                            int32_t var_4dc_5 = __pextrd_memd_xmmdq_immb(zmm3, 3)
                        
                        zmm4 |= zmm1 | temp0_1704
                        arg5 = _mm_sub_ps(arg5, zmm2)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        
                        if (rdx_104 != 0)
                            var_4d8 = zmm4[0]
                        
                        arg5 = _mm_sub_ps(arg5, zmm3)
                        zmm1 = _mm_mul_ps(zmm4, zmm4)
                        
                        if ((rcx_88.b & 2) == 0)
                            arg5 = _mm_sub_ps(arg5, zmm1)
                            
                            if ((rcx_88.b & 4) != 0)
                                goto label_1402f46d7
                            
                            goto label_1402f3ee0
                        
                        int32_t var_4d4_6 = __pextrd_memd_xmmdq_immb(zmm4, 1)
                        arg5 = _mm_sub_ps(arg5, zmm1)
                        
                        if ((rcx_88.b & 4) == 0)
                        label_1402f3ee0:
                            zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                            zmm1 = _mm_sqrt_ps(arg5)
                            
                            if ((rcx_88.b & 8) == 0)
                                goto label_1402f46f2
                        else
                        label_1402f46d7:
                            int32_t var_4d0_6 = __pextrd_memd_xmmdq_immb(zmm4, 2)
                            zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                            zmm1 = _mm_sqrt_ps(arg5)
                            
                            if ((rcx_88.b & 8) == 0)
                                goto label_1402f46f2
                        
                        int32_t var_4cc_7 = __pextrd_memd_xmmdq_immb(zmm4, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if (rdx_104 == 0)
                            goto label_1402f46fe
                        
                        goto label_1402f440b
            
            zmm6 = var_4f8.o
            arg5 = var_4e8.o
            arg7 = var_4d8.o
            arg6 = var_4c8.o
            zmm0 = _mm_mul_ps(var_588, zmm6)
            zmm1 = _mm_add_ps(_mm_mul_ps(var_578, arg5), zmm0)
            zmm0 = _mm_add_ps(_mm_mul_ps(var_568, arg7), zmm1)
            zmm0 = _mm_cmpeq_ps(zx.o(0), _mm_add_ps(_mm_mul_ps(var_558, arg6), zmm0), 2)
            float temp0_1823[0x4] = _mm_mul_ps(zmm6, zmm14)
            arg5 = _mm_mul_ps(arg5, zmm14)
            arg7 = _mm_mul_ps(arg7, zmm14)
            arg6 = _mm_mul_ps(arg6, zmm14)
            zmm1 = data_142d3f670
            float temp0_1827[0x4] = _mm_blendv_ps(data_142d3f7e0, zmm1, zmm0)
            zmm1 = _mm_mul_ps(_mm_sub_ps(zmm1, zmm14), temp0_1827)
            float temp0_1831[0x4] = _mm_add_ps(_mm_mul_ps(var_588, zmm1), temp0_1823)
            zmm3 = _mm_add_ps(_mm_mul_ps(var_578, zmm1), arg5)
            zmm2 = _mm_add_ps(_mm_mul_ps(var_568, zmm1), arg7)
            zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, var_558), arg6)
            uint32_t var_218_1[0x4] = zmm3
            int32_t var_208_1[0x4] = zmm2
            uint128_t var_1f8_1 = zmm1
            float temp0_1838[0x4] = _mm_mul_ps(temp0_1831, temp0_1831)
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            zmm2 = _mm_add_ps(_mm_mul_ps(zmm2, zmm2), temp0_1838)
            zmm1 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm1, zmm1), zmm3), zmm2)
            zmm2 = data_142d3f5c0
            zmm3 = _mm_cmpeq_ps(zmm2, zmm1, 2)
            zmm0 = data_142d3f640
            float temp0_1846[0x4] = _mm_mul_ps(zmm1, zmm0)
            float var_128_1[0x4] = temp0_1846
            float var_118_1[0x4] = temp0_1846
            float var_108_1[0x4] = temp0_1846
            float var_f8_1[0x4] = temp0_1846
            arg5 = _mm_rsqrt_ps(zmm1)
            float temp0_1852[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm0, _mm_mul_ps(_mm_mul_ps(arg5, arg5), temp0_1846)), arg5), 
                arg5)
            zmm0 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm0, _mm_mul_ps(_mm_mul_ps(temp0_1852, temp0_1852), temp0_1846)), 
                    temp0_1852), 
                temp0_1852)
            float temp0_1858[0x4] = _mm_mul_ps(temp0_1831, zmm0)
            float temp0_1859[0x4] = _mm_mul_ps(var_218_1, zmm0)
            arg5 = _mm_mul_ps(var_208_1, zmm0)
            zmm0 = __mulps_xmmps_memps(zmm0, var_1f8_1)
            zmm6 = _mm_and_ps(temp0_1858, zmm3)
            
            if (rdx_104 != 0)
                var_588[0] = zmm6[0]
            
            if ((rcx_88.b & 2) != 0)
                var_588[1] = __extractps_memd_xmmps_immb(zmm6, 1)
                
                if ((rcx_88.b & 4) != 0)
                label_1402f4bc3:
                    var_588[2] = __extractps_memd_xmmps_immb(zmm6, 2)
                    
                    if ((rcx_88.b & 8) == 0)
                        goto label_1402f49ed
                    
                    goto label_1402f4bd4
            else if ((rcx_88.b & 4) != 0)
                goto label_1402f4bc3
            
            if ((rcx_88.b & 8) != 0)
            label_1402f4bd4:
                var_588[3] = __extractps_memd_xmmps_immb(zmm6, 3)
                zmm4 = _mm_and_ps(temp0_1859, zmm3)
                
                if (rdx_104 != 0)
                    var_578[0] = zmm4[0]
            else
            label_1402f49ed:
                zmm4 = _mm_and_ps(temp0_1859, zmm3)
                
                if (rdx_104 != 0)
                    var_578[0] = zmm4[0]
            
            if ((rcx_88.b & 2) != 0)
                var_578[1] = __extractps_memd_xmmps_immb(zmm4, 1)
                
                if ((rcx_88.b & 4) != 0)
                label_1402f4bfe:
                    var_578[2] = __extractps_memd_xmmps_immb(zmm4, 2)
                    
                    if ((rcx_88.b & 8) == 0)
                        goto label_1402f4a16
                    
                    goto label_1402f4c0f
            else if ((rcx_88.b & 4) != 0)
                goto label_1402f4bfe
            
            if ((rcx_88.b & 8) != 0)
            label_1402f4c0f:
                var_578[3] = __extractps_memd_xmmps_immb(zmm4, 3)
                arg5 = _mm_and_ps(arg5, zmm3)
                
                if (rdx_104 != 0)
                    var_568[0] = arg5[0]
            else
            label_1402f4a16:
                arg5 = _mm_and_ps(arg5, zmm3)
                
                if (rdx_104 != 0)
                    var_568[0] = arg5[0]
            
            if ((rcx_88.b & 2) == 0)
                zmm2 = _mm_cmpeq_ps(zmm2, zmm1, 6)
                
                if ((rcx_88.b & 4) != 0)
                    goto label_1402f4c3d
                
                goto label_1402f4a3a
            
            var_568[1] = __extractps_memd_xmmps_immb(arg5, 1)
            zmm2 = _mm_cmpeq_ps(zmm2, zmm1, 6)
            
            if ((rcx_88.b & 4) != 0)
            label_1402f4c3d:
                var_568[2] = __extractps_memd_xmmps_immb(arg5, 2)
                zmm0 = _mm_and_ps(zmm0, zmm3)
                zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f670)
                
                if ((rcx_88.b & 8) == 0)
                    goto label_1402f4a4d
                
                goto label_1402f4c58
            
        label_1402f4a3a:
            zmm0 = _mm_and_ps(zmm0, zmm3)
            zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f670)
            
            if ((rcx_88.b & 8) != 0)
            label_1402f4c58:
                var_568[3] = __extractps_memd_xmmps_immb(arg5, 3)
                zmm0 = _mm_or_ps(zmm0, zmm2)
                
                if (rdx_104 != 0)
                    var_558[0] = zmm0.d
            else
            label_1402f4a4d:
                zmm0 = _mm_or_ps(zmm0, zmm2)
                
                if (rdx_104 != 0)
                    var_558[0] = zmm0.d
            
            if ((rcx_88.b & 2) == 0)
                if ((rcx_88.b & 4) != 0)
                    goto label_1402f4c82
                
                goto label_1402f4a6d
            
            var_558[1] = __extractps_memd_xmmps_immb(zmm0, 1)
            
            if ((rcx_88.b & 4) == 0)
            label_1402f4a6d:
                
                if ((rcx_88.b & 8) != 0)
                    var_558[3] = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_1402f4c82:
                var_558[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((rcx_88.b & 8) != 0)
                    var_558[3] = __extractps_memd_xmmps_immb(zmm0, 3)
    
    zmm0 = var_588
    zmm1 = var_578
    zmm3 = var_558
    zmm4 = _mm_unpacklo_epi32(var_568, zmm3[0].q)
    int32_t temp0_1871[0x4] = _mm_unpackhi_epi32(var_568, zmm3[0].q)
    zmm3 = _mm_unpacklo_epi32(zmm0, zmm1.q)
    zmm0 = _mm_unpackhi_epi32(zmm0, zmm1.q)
    uint128_t var_1e8 = _mm_unpacklo_epi64(zmm3, zmm4[0].q)
    uint32_t var_1d8_1[0x4] = _mm_unpackhi_epi64(zmm3, zmm4[0].q)
    uint128_t var_1c8_1 = _mm_unpacklo_epi64(zmm0, temp0_1871[0].q)
    uint128_t var_1b8_1 = _mm_unpackhi_epi64(zmm0, temp0_1871[0].q)
    i_5 = zx.q(_mm_movemask_ps(zmm15))
    
    do
        uint64_t rcx_109
        uint64_t rflags_1
        
        if (i_5 == 0)
            rcx_109 = 0x40
        else
            rcx_109, rflags_1 = _bit_scan_forward(i_5)
        float var_238[0x4] = zmm13
        r12[sx.q(var_238[zx.q(rcx_109.d) & 3]) * 3] = (&var_1e8)[rcx_109]
        i_5 &= rol.q(-2, rcx_109.b)
    while (i_5 != 0)

return i_5
