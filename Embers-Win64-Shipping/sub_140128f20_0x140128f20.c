// 函数: sub_140128f20
// 地址: 0x140128f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
uint128_t zmm12
uint128_t var_88 = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
uint32_t var_b8[0x4] = arg8
uint32_t zmm8[0x4]
uint32_t var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float var_e8[0x4] = arg7
float (* r12)[0x4] = arg2
float (* r13)[0x4] = arg1
int64_t r11 = sx.q(arg11)
int32_t rcx_1 = *(&data_143442740 + (r11 << 2)) * *(&data_143442720 + (r11 << 2))
int32_t r15 = 0
int32_t rax = 0x18

if (r11 != 3)
    rax = 0

int32_t r10_4 = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
float (* var_2e8)[0x4] = r13
float (* var_348)[0x4] = arg4
int64_t var_278 = r11
uint128_t var_358
int32_t var_2b8
float var_2a8[0x4]
float var_298[0x4]
float var_268[0x4]
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]

if (r10_4 s> 0)
    zmm0 = arg9
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    float var_328_1[0x4] = _mm_cvtepu32_epi64(_mm_shuffle_epi32(zx.o(rax), 0)[0].q)
    var_268 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
    float rsi_1 = 0f
    arg6 = _mm_cmpeq_epi32(arg6, arg6)
    r15 = 0
    float (* var_2e0_1)[0x4] = r12
    int32_t var_33c_1 = r10_4
    int64_t var_250_1 = arg3
    
    do
        int64_t rax_7 = sx.q(rsi_1)
        zmm0 = *(r12 + rax_7)
        zmm1 = *(r12 + rax_7 + 0x10)
        var_2a8 = zmm0
        var_298 = zmm1
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, zmm1, 0xdd), 4)
        int64_t rax_9 = sx.q(zmm0[0])
        int64_t rcx_6 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rdx_5 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rbp_3 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm12 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_9 + 8)), *(arg3 + rcx_6 + 8), 1), 
                *(arg3 + rdx_5 + 8), 2), 
            *(arg3 + rbp_3 + 8), 3)
        zmm2 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_9 + 0xc)), *(arg3 + rcx_6 + 0xc), 1), 
                *(arg3 + rdx_5 + 0xc), 2), 
            *(arg3 + rbp_3 + 0xc), 3)
        zmm14 = __pcmpeqd_xmmdq_memdq(zmm2, data_142d3f5b0)
        char temp0_133 = _mm_movemask_ps(zmm14)
        float var_428
        float var_418[0x4]
        uint32_t var_408[0x4]
        uint32_t var_3f8[0x4]
        
        if (temp0_133 != 0)
            float var_318_1[0x4] = arg5
            var_358 = zmm12
            zmm1 = zmm14 & zmm12
            int64_t rdx_6 = sx.q(zmm1[0])
            void* rcx_8 = arg4 + rdx_6
            int32_t temp0_134 = _mm_extract_epi32(zmm1, 1)
            zmm0 = *(arg4 + rdx_6)
            int64_t rdx_7 = sx.q(temp0_134)
            void* rbp_5 = arg4 + rdx_7
            zmm8 = *(arg4 + rdx_7)
            int64_t rbx_2 = sx.q(_mm_extract_epi32(zmm1, 2))
            void* rdx_9 = arg4 + rbx_2
            zmm13 = *(arg4 + rbx_2)
            int32_t temp0_136 = _mm_extract_epi32(zmm1, 3)
            zmm1 = zmm14 & data_142fc95e0
            zmm7 = *(zx.q(zmm1[0]) + rcx_8)
            int64_t rbx_4 = sx.q(temp0_136)
            zmm12 = *(zx.q(_mm_extract_epi32(zmm1, 1)) + rbp_5)
            uint64_t rdi_4 = zx.q(_mm_extract_epi32(zmm1, 2))
            zmm11 = *(arg4 + rbx_4)
            zmm10 = *(rdi_4 + rdx_9)
            void* rbx_5 = arg4 + rbx_4
            zmm15 = *(zx.q(_mm_extract_epi32(zmm1, 3)) + rbx_5)
            zmm1 = zmm14 & data_142fc95f0
            arg5 = *(zx.q(zmm1[0]) + rcx_8)
            arg6 = *(zx.q(_mm_extract_epi32(zmm1, 1)) + rbp_5)
            uint64_t rcx_10 = zx.q(_mm_extract_epi32(zmm1, 2))
            float (* rbp_6)[0x4] = zx.q(_mm_extract_epi32(zmm1, 3))
            zmm3 = *(rcx_10 + rdx_9)
            zmm1 = *(rbp_6 + rbx_5)
            
            if ((temp0_133 & 1) == 0)
                if ((temp0_133 & 2) != 0)
                    goto label_140129f6f
                
                goto label_140129dc3
            
            var_428 = zmm0[0]
            
            if ((temp0_133 & 2) != 0)
            label_140129f6f:
                uint32_t var_424_4 = zmm8[0]
                
                if ((temp0_133 & 4) == 0)
                    goto label_140129dcc
                
                goto label_140129f7f
            
        label_140129dc3:
            
            if ((temp0_133 & 4) == 0)
            label_140129dcc:
                
                if ((temp0_133 & 8) != 0)
                    goto label_140129f8f
                
                goto label_140129dd5
            
        label_140129f7f:
            float var_420_6 = zmm13[0]
            
            if ((temp0_133 & 8) == 0)
            label_140129dd5:
                zmm0 = _mm_insert_ps(zmm0, zmm8, 0x10)
                
                if ((temp0_133 & 1) != 0)
                    var_418[0] = zmm7[0]
            else
            label_140129f8f:
                float var_41c_6 = zmm11[0]
                zmm0 = _mm_insert_ps(zmm0, zmm8, 0x10)
                
                if ((temp0_133 & 1) != 0)
                    var_418[0] = zmm7[0]
            
            float temp0_144[0x4] = _mm_insert_ps(zmm0, zmm13, 0x20)
            float temp0_145[0x4] = _mm_insert_ps(zmm7, zmm12, 0x10)
            
            if ((temp0_133 & 2) != 0)
                var_418[1] = zmm12.d
            
            float temp0_146[0x4] = _mm_insert_ps(temp0_144, zmm11, 0x30)
            float temp0_147[0x4] = _mm_insert_ps(temp0_145, zmm10, 0x20)
            zmm12 = arg6
            float temp0_148[0x4] = _mm_insert_ps(arg5, arg6, 0x10)
            
            if ((temp0_133 & 4) != 0)
                var_418[2] = zmm10[0]
            
            float temp0_149[0x4] = _mm_insert_ps(temp0_147, zmm15, 0x30)
            float temp0_150[0x4] = _mm_insert_ps(temp0_148, zmm3, 0x20)
            float temp0_151[0x4] = _mm_mul_ps(temp0_146, temp0_146)
            arg6 = _mm_cmpeq_epi32(arg6, arg6)
            zmm11 = data_142d3f670
            
            if ((temp0_133 & 8) != 0)
                var_418[3] = zmm15[0]
            
            float temp0_153[0x4] = _mm_insert_ps(temp0_150, zmm1, 0x30)
            float temp0_154[0x4] = _mm_sub_ps(zmm11, temp0_151)
            float temp0_155[0x4] = _mm_mul_ps(temp0_149, temp0_149)
            
            if ((temp0_133 & 1) != 0)
                var_408[0] = arg5[0]
            
            float temp0_156[0x4] = _mm_sub_ps(temp0_154, temp0_155)
            float temp0_157[0x4] = _mm_mul_ps(temp0_153, temp0_153)
            
            if ((temp0_133 & 2) != 0)
                var_408[1] = zmm12.d
            
            float temp0_158[0x4] = _mm_sub_ps(temp0_156, temp0_157)
            zmm12 = var_358
            arg5 = var_318_1
            
            if ((temp0_133 & 4) != 0)
                var_408[2] = zmm3[0]
            
            float temp0_159[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_158, 1)
            float temp0_160[0x4] = _mm_sqrt_ps(temp0_158)
            arg7 = arg7
            
            if ((temp0_133 & 8) == 0)
                zmm0 = _mm_and_ps(temp0_159, temp0_160)
                
                if ((temp0_133 & 1) != 0)
                    goto label_140129fc2
                
                goto label_140129ecd
            
            var_408[3] = zmm1[0]
            zmm0 = _mm_and_ps(temp0_159, temp0_160)
            
            if ((temp0_133 & 1) != 0)
            label_140129fc2:
                var_3f8[0] = zmm0[0]
                
                if ((temp0_133 & 2) == 0)
                    goto label_140129ed6
                
                goto label_140129fd1
            
        label_140129ecd:
            
            if ((temp0_133 & 2) == 0)
            label_140129ed6:
                
                if ((temp0_133 & 4) != 0)
                    goto label_140129fe2
                
                goto label_140129edf
            
        label_140129fd1:
            var_3f8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
            
            if ((temp0_133 & 4) == 0)
            label_140129edf:
                
                if ((temp0_133 & 8) != 0)
                    var_3f8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_140129fe2:
                var_3f8[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((temp0_133 & 8) != 0)
                    var_3f8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
        
        zmm8 = zmm14 ^ arg6
        char temp0_163 = _mm_movemask_ps(zmm8)
        
        if (temp0_163 == 0)
            zmm15 = arg5
            zmm13 = arg8
            zmm7 = arg7
        else
            zmm11 = _mm_shuffle_epi32(zmm12, 0x4e)
            zmm15 = _mm_cmpgt_epi32(data_1434422d0, zmm2)
            zmm0 = zmm14 ^ zmm15
            char temp0_166 = _mm_movemask_ps(zmm0)
            float var_368[0x4]
            float var_338[0x4]
            float var_2f8[0x4]
            float var_2c8[0x4]
            
            if (temp0_166 == 0)
                zmm0 = zx.o(0)
                zmm3 = arg9
                zmm10 = var_368
                zmm15 = var_338
                arg7 = var_2f8
                zmm7 = var_2c8
            label_14012a056:
                zmm1 = zmm0 ^ arg6
                
                if (zx.o(0)[0] f>= zmm3[0])
                    zmm0 ^= zmm8
                    zmm3 = zx.o(0)
                    zmm10 = _mm_blendv_ps(zmm10, zx.o(0), zmm0)
                    zmm7 = _mm_blendv_ps(zmm7, zx.o(0), zmm0)
                    zmm13 = zmm10
                else
                    bool cond:6_1 = zmm3[0] f>= 1f
                    zmm2 = _mm_add_epi32(zmm2, arg6)
                    
                    if (cond:6_1)
                        zmm0 ^= zmm8
                        zmm10 = _mm_blendv_ps(zmm10, zmm2, zmm0)
                        zmm3 = zx.o(0)
                        zmm13 = zmm10
                        zmm7 = _mm_blendv_ps(arg7, zmm2, zmm0)
                    else
                        float temp0_176[0x4] = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm2), temp0_1)
                        zmm0 ^= zmm8
                        float temp0_177[0x4] = _mm_round_ps(temp0_176, 9)
                        zmm10 = _mm_blendv_ps(zmm10, 
                            _mm_min_epi32(_mm_cvttps_epi32(temp0_177), zmm2), zmm0)
                        zmm3 = zx.o(0)
                        
                        if (arg10 != 1)
                            zmm3 = _mm_sub_ps(temp0_176, temp0_177)
                        
                        zmm13 = zmm10
                        zmm7 = _mm_blendv_ps(zmm15, 
                            _mm_min_epi32(
                                _mm_sub_epi32(zmm10, _mm_cmpeq_epi32(temp0_177, temp0_177)), zmm2), 
                            zmm0)
                
                zmm15 = _mm_blendv_ps(arg5, zmm3, zmm1)
            else
                zmm13 = _mm_andnot_ps(zmm0, arg8)
                zmm7 = _mm_andnot_ps(zmm0, arg7)
                zmm15 &= not.o(arg5)
                
                if (temp0_163 != temp0_166)
                    arg5 = zmm15
                    zmm10 = zmm13
                    zmm15 = zmm7
                    arg7 = zmm7
                    zmm3 = arg9
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    goto label_14012a056
                
                zmm10 = zmm13
            
            zmm3 = _mm_cvtepi32_epi64(zmm12.q)
            arg7 = _mm_cvtepi32_epi64(zmm11[0].q)
            uint64_t rdi_7 = zx.q(r11.d)
            float var_318_2[0x4] = zmm7
            
            if (r11.d u> 5)
                if ((temp0_163 & 1) != 0)
                    var_428 = 0f
                    
                    if ((temp0_163 & 2) != 0)
                    label_1401295b6:
                        int32_t var_424_3 = 0
                        
                        if ((temp0_163 & 4) == 0)
                            goto label_14012b0f7
                        
                        goto label_1401295c6
                else if ((temp0_163 & 2) != 0)
                    goto label_1401295b6
                
                if ((temp0_163 & 4) == 0)
                label_14012b0f7:
                    zmm11 = data_142d3f670
                    
                    if ((temp0_163 & 8) != 0)
                        goto label_1401295de
                    
                    goto label_14012b105
                
            label_1401295c6:
                int32_t var_420_5 = 0
                zmm11 = data_142d3f670
                
                if ((temp0_163 & 8) != 0)
                label_1401295de:
                    int32_t var_41c_5 = 0
                    
                    if ((temp0_163 & 1) == 0)
                        goto label_14012b10d
                    
                    goto label_1401295ee
                
            label_14012b105:
                
                if ((temp0_163 & 1) == 0)
                label_14012b10d:
                    
                    if ((temp0_163 & 2) != 0)
                        goto label_1401295fe
                    
                    goto label_14012b115
                
            label_1401295ee:
                var_418[0] = 0
                
                if ((temp0_163 & 2) != 0)
                label_1401295fe:
                    var_418[1] = 0
                    
                    if ((temp0_163 & 4) == 0)
                        goto label_14012b11d
                    
                    goto label_14012960e
                
            label_14012b115:
                
                if ((temp0_163 & 4) == 0)
                label_14012b11d:
                    
                    if ((temp0_163 & 8) != 0)
                        goto label_14012961e
                    
                    goto label_14012b125
                
            label_14012960e:
                var_418[2] = 0
                
                if ((temp0_163 & 8) != 0)
                label_14012961e:
                    var_418[3] = 0
                    
                    if ((temp0_163 & 1) == 0)
                        goto label_14012b12d
                    
                    goto label_14012962e
                
            label_14012b125:
                
                if ((temp0_163 & 1) == 0)
                label_14012b12d:
                    
                    if ((temp0_163 & 2) != 0)
                        goto label_14012963e
                    
                    goto label_14012b135
                
            label_14012962e:
                var_408[0] = 0
                
                if ((temp0_163 & 2) != 0)
                label_14012963e:
                    var_408[1] = 0
                    
                    if ((temp0_163 & 4) == 0)
                        goto label_14012b13d
                    
                    goto label_14012964e
                
            label_14012b135:
                
                if ((temp0_163 & 4) == 0)
                label_14012b13d:
                    
                    if ((temp0_163 & 8) != 0)
                        goto label_14012965e
                    
                    goto label_14012b145
                
            label_14012964e:
                var_408[2] = 0
                
                if ((temp0_163 & 8) != 0)
                label_14012965e:
                    var_408[3] = 0
                    
                    if ((temp0_163 & 1) == 0)
                        goto label_14012b14d
                    
                    goto label_14012966e
                
            label_14012b145:
                
                if ((temp0_163 & 1) == 0)
                label_14012b14d:
                    
                    if ((temp0_163 & 2) != 0)
                        goto label_14012967e
                    
                    goto label_14012b155
                
            label_14012966e:
                var_3f8[0] = 0x3f800000
                
                if ((temp0_163 & 2) != 0)
                label_14012967e:
                    var_3f8[1] = 0x3f800000
                    
                    if ((temp0_163 & 4) == 0)
                        goto label_14012b15d
                    
                    goto label_14012968e
                
            label_14012b155:
                
                if ((temp0_163 & 4) != 0)
                label_14012968e:
                    var_3f8[2] = 0x3f800000
                    
                    if ((temp0_163 & 8) != 0)
                        var_3f8[3] = 0x3f800000
                else
                label_14012b15d:
                    
                    if ((temp0_163 & 8) != 0)
                        var_3f8[3] = 0x3f800000
            else
                zmm1 = __pmulld_xmmdq_memdq(zmm10, var_268)
                zmm0 = _mm_cvtepi32_epi64(zmm1[0].q)
                arg6 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
                char rcx_22
                
                switch (rdi_7)
                    case 0
                        zmm7 = zmm3
                        zmm2 = _mm_add_epi64(zmm3, var_328_1)
                        zmm3 = _mm_add_epi64(_mm_add_epi64(arg7, var_328_1), arg6)
                        zmm2 = _mm_add_epi64(zmm2, zmm0)
                        zmm1 = _mm_shuffle_epi32(zmm8, 0x50)
                        float temp0_202[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        zmm2 = _mm_shuffle_epi32(zmm8, 0xfa)
                        arg6 = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                        int64_t rax_14 = _mm_extract_epi64(temp0_202, 1)
                        void* rdi_8 = arg4 + rax_14
                        int32_t rbx_6 = *(arg4 + rax_14)
                        int64_t rax_15 = arg6[0].q
                        void* rbp_7 = arg4 + rax_15
                        int32_t r15_1 = *(arg4 + rax_15)
                        int64_t rax_16 = _mm_extract_epi64(arg6, 1)
                        void* r10_5 = arg4 + rax_16
                        int32_t r12_1 = *(arg4 + rax_16)
                        arg6 = data_1434426c0
                        zmm3 = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                        arg6 = _mm_blendv_ps(zx.o(0), arg6, zmm2)
                        float* rax_18 = temp0_202[0].q + arg4
                        int32_t rcx_12 = *(_mm_extract_epi64(zmm3, 1) + rdi_8)
                        int32_t rcx_13 = *(arg6[0].q + rbp_7)
                        int32_t rcx_14 = *(_mm_extract_epi64(arg6, 1) + r10_5)
                        arg6 = data_1434426e0
                        float temp0_207[0x4] = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                        arg6 = _mm_blendv_ps(zx.o(0), arg6, zmm2)
                        int32_t rcx_15 = *(_mm_extract_epi64(temp0_207, 1) + rdi_8)
                        int32_t* rdx_14 = arg6[0].q
                        int32_t* r11_1 = _mm_extract_epi64(arg6, 1)
                        var_2c8[0] = *(rdx_14 + rbp_7)
                        zmm0 = zmm1
                        zmm1 = data_1434426f0
                        arg6 = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                        var_2f8[0] = *(r11_1 + r10_5)
                        float temp0_210[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        var_338[0] = *(_mm_extract_epi64(arg6, 1) + rdi_8)
                        var_368[0] = *(temp0_210[0].q + rbp_7)
                        var_358.d = *(_mm_extract_epi64(temp0_210, 1) + r10_5)
                        int32_t rdi_9 = *(zmm3[0].q + rax_18)
                        int32_t rbp_8 = *(temp0_207[0].q + rax_18)
                        int32_t r10_6 = *(arg6[0].q + rax_18)
                        
                        if ((temp0_163 & 1) != 0)
                            var_428 = *rax_18
                        
                        zmm11 = data_142d3f670
                        
                        if ((temp0_163 & 2) != 0)
                            int32_t var_424_5 = rbx_6
                        
                        r11 = var_278
                        arg7 = arg7
                        zmm3 = zmm7
                        
                        if ((temp0_163 & 4) != 0)
                            int32_t var_420_8 = r15_1
                            zmm7 = var_318_2
                            
                            if ((temp0_163 & 8) != 0)
                            label_14012b180:
                                int32_t var_41c_7 = r12_1
                                
                                if ((temp0_163 & 1) == 0)
                                    goto label_14012a348
                                
                                goto label_14012b18e
                        else
                            zmm7 = var_318_2
                            
                            if ((temp0_163 & 8) != 0)
                                goto label_14012b180
                        
                        if ((temp0_163 & 1) != 0)
                        label_14012b18e:
                            var_418[0] = rdi_9
                            r12 = var_2e0_1
                            
                            if ((temp0_163 & 2) != 0)
                            label_14012b1aa:
                                var_418[1] = rcx_12
                                
                                if ((temp0_163 & 4) == 0)
                                    goto label_14012a365
                                
                                goto label_14012b1c1
                        else
                        label_14012a348:
                            r12 = var_2e0_1
                            
                            if ((temp0_163 & 2) != 0)
                                goto label_14012b1aa
                        
                        if ((temp0_163 & 4) == 0)
                        label_14012a365:
                            r13 = var_2e8
                            
                            if ((temp0_163 & 8) != 0)
                                goto label_14012b1dd
                            
                            goto label_14012a373
                        
                    label_14012b1c1:
                        var_418[2] = rcx_13
                        r13 = var_2e8
                        
                        if ((temp0_163 & 8) != 0)
                        label_14012b1dd:
                            var_418[3] = rcx_14
                            
                            if ((temp0_163 & 1) == 0)
                                goto label_14012a37c
                            
                            goto label_14012b1ea
                        
                    label_14012a373:
                        
                        if ((temp0_163 & 1) == 0)
                        label_14012a37c:
                            
                            if ((temp0_163 & 2) != 0)
                                goto label_14012b1fe
                            
                            goto label_14012a385
                        
                    label_14012b1ea:
                        var_408[0] = rbp_8
                        
                        if ((temp0_163 & 2) != 0)
                        label_14012b1fe:
                            var_408[1] = rcx_15
                            
                            if ((temp0_163 & 4) == 0)
                                goto label_14012a38e
                            
                            goto label_14012b212
                        
                    label_14012a385:
                        
                        if ((temp0_163 & 4) == 0)
                        label_14012a38e:
                            
                            if ((temp0_163 & 8) != 0)
                                goto label_14012b226
                            
                            goto label_14012a397
                        
                    label_14012b212:
                        var_408[2] = var_2c8[0]
                        
                        if ((temp0_163 & 8) != 0)
                        label_14012b226:
                            var_408[3] = var_2f8[0]
                            
                            if ((temp0_163 & 1) == 0)
                                goto label_14012a3a0
                            
                            goto label_14012b233
                        
                    label_14012a397:
                        
                        if ((temp0_163 & 1) == 0)
                        label_14012a3a0:
                            
                            if ((temp0_163 & 2) != 0)
                                goto label_14012b248
                            
                            goto label_14012a3ac
                        
                    label_14012b233:
                        var_3f8[0] = r10_6
                        
                        if ((temp0_163 & 2) != 0)
                        label_14012b248:
                            var_3f8[1] = var_338[0]
                            r10_4 = var_33c_1
                            
                            if ((temp0_163 & 4) == 0)
                                goto label_14012a3ba
                            
                            goto label_14012b264
                        
                    label_14012a3ac:
                        r10_4 = var_33c_1
                        
                        if ((temp0_163 & 4) != 0)
                        label_14012b264:
                            var_3f8[2] = var_368[0]
                            
                            if ((temp0_163 & 8) != 0)
                                var_3f8[3] = var_358.d
                        else
                        label_14012a3ba:
                            
                            if ((temp0_163 & 8) != 0)
                                var_3f8[3] = var_358.d
                    case 1
                        var_358 = zmm12
                        var_368 = zmm10
                        var_2b8.o = zmm13
                        var_338 = zmm3
                        zmm2 = _mm_add_epi64(zmm3, var_328_1)
                        var_2f8 = arg7
                        zmm3 = _mm_add_epi64(_mm_add_epi64(arg7, var_328_1), arg6)
                        zmm2 = _mm_add_epi64(zmm2, zmm0)
                        zmm1 = _mm_shuffle_epi32(zmm8, 0x50)
                        float temp0_216[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        zmm2 = _mm_shuffle_epi32(zmm8, 0xfa)
                        arg6 = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                        int64_t rdx_21 = temp0_216[0].q
                        void* rax_20 = arg4 + rdx_21
                        int64_t rbx_7 = _mm_extract_epi64(temp0_216, 1)
                        arg5 = *(arg4 + rdx_21)
                        void* rbp_9 = arg4 + rbx_7
                        arg8 = *(arg4 + rbx_7)
                        int64_t rbx_8 = arg6[0].q
                        void* rdx_22 = arg4 + rbx_8
                        zmm3 = *(arg4 + rbx_8)
                        int64_t rbx_9 = _mm_extract_epi64(arg6, 1)
                        zmm12 = *(arg4 + rbx_9)
                        arg6 = data_1434426c0
                        float temp0_219[0x4] = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                        float temp0_220[0x4] = _mm_blendv_ps(zx.o(0), arg6, zmm2)
                        arg6 = *(temp0_219[0].q + rax_20)
                        arg7 = *(_mm_extract_epi64(temp0_219, 1) + rbp_9)
                        zmm14 = *(temp0_220[0].q + rdx_22)
                        int64_t rdi_13 = _mm_extract_epi64(temp0_220, 1)
                        void* rbx_10 = arg4 + rbx_9
                        zmm10 = data_1434426e0
                        float temp0_221[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm1)
                        var_2c8 = *(rdi_13 + rbx_10)
                        float temp0_222[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm2)
                        zmm1 = *(temp0_221[0].q + rax_20)
                        zmm0 = *(_mm_extract_epi64(temp0_221, 1) + rbp_9)
                        float (* rax_22)[0x4] = temp0_222[0].q
                        int64_t rbp_10 = _mm_extract_epi64(temp0_222, 1)
                        zmm2 = *(rax_22 + rdx_22)
                        zmm7 = *(rbp_10 + rbx_10)
                        rcx_22 = temp0_163
                        
                        if ((rcx_22 & 1) == 0)
                            zmm11 = data_142d3f670
                            
                            if ((rcx_22 & 2) != 0)
                                goto label_14012b298
                            
                            goto label_14012a550
                        
                        var_428 = arg5[0]
                        zmm11 = data_142d3f670
                        
                        if ((rcx_22 & 2) != 0)
                        label_14012b298:
                            uint32_t var_424_9 = arg8[0]
                            zmm13 = var_2b8.o
                            
                            if ((rcx_22 & 4) == 0)
                                goto label_14012a562
                            
                            goto label_14012b2b4
                        
                    label_14012a550:
                        zmm13 = var_2b8.o
                        
                        if ((rcx_22 & 4) == 0)
                        label_14012a562:
                            
                            if ((rcx_22 & 8) != 0)
                                goto label_14012b2c6
                            
                            goto label_14012a56e
                        
                    label_14012b2b4:
                        uint32_t var_420_9 = zmm3[0]
                        
                        if ((rcx_22 & 8) == 0)
                        label_14012a56e:
                            arg5 = _mm_insert_ps(arg5, arg8, 0x10)
                            
                            if ((rcx_22 & 1) != 0)
                                var_418[0] = arg6[0]
                        else
                        label_14012b2c6:
                            int32_t var_41c_8 = zmm12.d
                            arg5 = _mm_insert_ps(arg5, arg8, 0x10)
                            
                            if ((rcx_22 & 1) != 0)
                                var_418[0] = arg6[0]
                        
                        float temp0_224[0x4] = _mm_insert_ps(arg5, zmm3, 0x20)
                        arg6 = _mm_insert_ps(arg6, arg7, 0x10)
                        
                        if ((rcx_22 & 2) != 0)
                            var_418[1] = arg7[0]
                        
                        float temp0_226[0x4] = _mm_insert_ps(temp0_224, zmm12, 0x30)
                        arg6 = _mm_insert_ps(arg6, zmm14, 0x20)
                        zmm3 = _mm_insert_ps(zmm1, zmm0, 0x10)
                        r12 = var_2e0_1
                        
                        if ((rcx_22 & 4) != 0)
                            var_418[2] = zmm14[0]
                        
                        arg6 = _mm_insert_ps(arg6, var_2c8, 0x30)
                        zmm12 = zmm2
                        zmm3 = _mm_insert_ps(zmm3, zmm2, 0x20)
                        float temp0_231[0x4] = _mm_mul_ps(temp0_226, temp0_226)
                        arg7 = var_2f8
                        
                        if ((rcx_22 & 8) != 0)
                            var_418[3] = var_2c8[0]
                        
                        zmm3 = _mm_insert_ps(zmm3, zmm7, 0x30)
                        float temp0_233[0x4] = _mm_sub_ps(zmm11, temp0_231)
                        arg6 = _mm_mul_ps(arg6, arg6)
                        zmm10 = var_368
                        
                        if ((rcx_22 & 1) == 0)
                            zmm1 = _mm_sub_ps(temp0_233, arg6)
                            zmm3 = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((rcx_22 & 2) != 0)
                                goto label_14012b2fa
                            
                            goto label_14012a632
                        
                        var_408[0] = zmm1[0]
                        zmm1 = _mm_sub_ps(temp0_233, arg6)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        
                        if ((rcx_22 & 2) == 0)
                        label_14012a632:
                            zmm1 = _mm_sub_ps(zmm1, zmm3)
                            
                            if ((rcx_22 & 4) != 0)
                                var_408[2] = zmm12.d
                        else
                        label_14012b2fa:
                            var_408[1] = zmm0[0]
                            zmm1 = _mm_sub_ps(zmm1, zmm3)
                            
                            if ((rcx_22 & 4) != 0)
                                var_408[2] = zmm12.d
                        
                        float temp0_238[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        float temp0_239[0x4] = _mm_sqrt_ps(zmm1)
                        zmm3 = var_338
                        
                        if ((rcx_22 & 8) != 0)
                            var_408[3] = zmm7[0]
                        
                        zmm0 = _mm_and_ps(temp0_238, temp0_239)
                        zmm12 = var_358
                        zmm7 = var_318_2
                        
                        if ((rcx_22 & 1) == 0)
                        label_14012a67d:
                            
                            if ((rcx_22 & 2) != 0)
                                goto label_14012ad14
                            
                            goto label_14012a686
                        
                    label_14012aec4:
                        var_3f8[0] = zmm0[0]
                        
                        if ((rcx_22 & 2) == 0)
                            goto label_14012a686
                        
                        goto label_14012ad14
                    case 2
                        var_338 = zmm3
                        zmm1 = _mm_add_epi64(zmm3, var_328_1)
                        zmm11 = arg7
                        arg5 = _mm_add_epi64(_mm_add_epi64(arg7, var_328_1), arg6)
                        zmm1 = _mm_add_epi64(zmm1, zmm0)
                        zmm2 = _mm_shuffle_epi32(zmm8, 0x50)
                        arg6 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        zmm1 = _mm_shuffle_epi32(zmm8, 0xfa)
                        zmm3 = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        int64_t rax_23 = arg6[0].q
                        void* rdi_15 = arg4 + rax_23
                        int64_t rdx_23 = _mm_extract_epi64(arg6, 1)
                        void* rbx_11 = arg4 + rdx_23
                        int64_t rbp_11 = zmm3[0].q
                        arg5 = data_1434426b0
                        arg6 = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                        float temp0_250[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        arg7 = zx.o(*(arg6[0].q + rdi_15))
                        int16_t* rsi_5 = _mm_extract_epi64(arg6, 1)
                        zmm0 = zmm2
                        zmm2 = data_1434426c0
                        zmm7 = zmm2
                        arg6 = _mm_blendv_ps(zx.o(0), zmm2, zmm0)
                        arg7 = __pinsrw_xmmdq_memw_immb(arg7, *(rsi_5 + rbx_11), 1)
                        void* rsi_7 = arg4 + rbp_11
                        zmm2 = __pinsrw_xmmdq_memw_immb(zx.o(*(arg6[0].q + rdi_15)), 
                            *(_mm_extract_epi64(arg6, 1) + rbx_11), 1)
                        int64_t rbx_12 = _mm_extract_epi64(zmm3, 1)
                        int16_t* rdi_18 = temp0_250[0].q
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm7, zmm1)
                        arg7 = __pinsrw_xmmdq_memw_immb(arg7, *(rdi_18 + rsi_7), 2)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(zmm3[0].q + rsi_7), 2)
                        void* rdi_20 = arg4 + rbx_12
                        arg7 = __pinsrw_xmmdq_memw_immb(arg7, 
                            *(_mm_extract_epi64(temp0_250, 1) + rdi_20), 3)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                            *(_mm_extract_epi64(zmm3, 1) + rdi_20), 3)
                        zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_23)), *(arg4 + rdx_23), 
                                    1), 
                                *(arg4 + rbp_11), 2), 
                            *(arg4 + rbx_12), 3)[0].q)
                        zmm3 = data_1434424d0
                        float temp0_265[0x4] = __divps_xmmps_memps(
                            _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm3)), data_1434426d0)
                        zmm0 = _mm_cvtepu16_epi32(arg7[0].q)
                        
                        if ((temp0_163 & 1) != 0)
                            var_428 = temp0_265[0]
                        
                        zmm0 = _mm_add_epi32(zmm0, zmm3)
                        
                        if ((temp0_163 & 2) != 0)
                            int32_t var_424_6 = __extractps_memd_xmmps_immb(temp0_265, 1)
                        
                        float temp0_269[0x4] = _mm_cvtepi32_ps(zmm0)
                        arg7 = zmm11
                        zmm7 = var_318_2
                        
                        if ((temp0_163 & 4) != 0)
                            int32_t var_420_7 = __extractps_memd_xmmps_immb(temp0_265, 2)
                        
                        float temp0_271[0x4] = __divps_xmmps_memps(temp0_269, data_1434426d0)
                        zmm11 = data_142d3f670
                        
                        if ((temp0_163 & 8) == 0)
                            zmm2 = _mm_cvtepu16_epi32(zmm2[0].q)
                            
                            if ((temp0_163 & 1) != 0)
                                goto label_14012b32a
                            
                            goto label_14012a877
                        
                        int32_t var_41c_9 = __extractps_memd_xmmps_immb(temp0_265, 3)
                        zmm2 = _mm_cvtepu16_epi32(zmm2[0].q)
                        
                        if ((temp0_163 & 1) != 0)
                        label_14012b32a:
                            var_418[0] = temp0_271[0]
                            zmm2 = _mm_add_epi32(zmm2, zmm3)
                            
                            if ((temp0_163 & 2) == 0)
                                goto label_14012a886
                            
                            goto label_14012b33f
                        
                    label_14012a877:
                        zmm2 = _mm_add_epi32(zmm2, zmm3)
                        
                        if ((temp0_163 & 2) == 0)
                        label_14012a886:
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            r12 = var_2e0_1
                            
                            if ((temp0_163 & 4) != 0)
                                goto label_14012b35a
                            
                            goto label_14012a899
                        
                    label_14012b33f:
                        var_418[1] = __extractps_memd_xmmps_immb(temp0_271, 1)
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        r12 = var_2e0_1
                        
                        if ((temp0_163 & 4) == 0)
                        label_14012a899:
                            zmm1 = _mm_mul_ps(temp0_265, temp0_265)
                            zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                            
                            if ((temp0_163 & 8) != 0)
                                var_418[3] = __extractps_memd_xmmps_immb(temp0_271, 3)
                        else
                        label_14012b35a:
                            var_418[2] = __extractps_memd_xmmps_immb(temp0_271, 2)
                            zmm1 = _mm_mul_ps(temp0_265, temp0_265)
                            zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                            
                            if ((temp0_163 & 8) != 0)
                                var_418[3] = __extractps_memd_xmmps_immb(temp0_271, 3)
                        
                        zmm3 = _mm_sub_ps(zmm11, zmm1)
                        float temp0_279[0x4] = _mm_mul_ps(temp0_271, temp0_271)
                        
                        if ((temp0_163 & 1) != 0)
                            var_408[0] = zmm2[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_279)
                        float temp0_281[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((temp0_163 & 2) != 0)
                            var_408[1] = __extractps_memd_xmmps_immb(zmm2, 1)
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_281)
                        
                        if ((temp0_163 & 4) != 0)
                            var_408[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                        
                        float temp0_285[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        float temp0_286[0x4] = _mm_sqrt_ps(zmm3)
                        
                        if ((temp0_163 & 8) == 0)
                            zmm0 = _mm_and_ps(temp0_285, temp0_286)
                            zmm3 = var_338
                            
                            if ((temp0_163 & 1) != 0)
                                goto label_14012b395
                            
                            goto label_14012a90d
                        
                        var_408[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                        zmm0 = _mm_and_ps(temp0_285, temp0_286)
                        zmm3 = var_338
                        
                        if ((temp0_163 & 1) != 0)
                        label_14012b395:
                            var_3f8[0] = zmm0[0]
                            
                            if ((temp0_163 & 2) == 0)
                                goto label_14012a915
                            
                            goto label_14012b3a3
                        
                    label_14012a90d:
                        
                        if ((temp0_163 & 2) == 0)
                        label_14012a915:
                            
                            if ((temp0_163 & 4) != 0)
                                goto label_14012b3b3
                            
                            goto label_14012a91d
                        
                    label_14012b3a3:
                        var_3f8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((temp0_163 & 4) == 0)
                        label_14012a91d:
                            
                            if ((temp0_163 & 8) != 0)
                                var_3f8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_14012b3b3:
                            var_3f8[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((temp0_163 & 8) != 0)
                                var_3f8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                    case 3
                        var_2f8[0].q = rdi_7
                        var_368[0] = rsi_1
                        var_358 = zmm12
                        zmm1 = zmm14 & not.o(zmm12)
                        int64_t rax_27 = sx.q(zmm1[0])
                        void* rdi_21 = arg4 + rax_27
                        int32_t temp0_288 = _mm_extract_epi32(zmm1, 1)
                        arg8 = *(arg4 + rax_27)
                        int64_t rdx_25 = sx.q(temp0_288)
                        void* rax_28 = arg4 + rdx_25
                        int64_t rbp_13 = sx.q(_mm_extract_epi32(zmm1, 2))
                        void* rbx_13 = arg4 + rbp_13
                        int64_t rsi_11 = sx.q(_mm_extract_epi32(zmm1, 3))
                        arg8 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg8, *(arg4 + rdx_25), 0x10), 
                                *(arg4 + rbp_13), 0x20), 
                            *(arg4 + rsi_11), 0x30)
                        void* rbp_14 = arg4 + rsi_11
                        zmm1 = zmm14 & not.o(data_142fc95e0)
                        zmm2 = *(zx.q(zmm1[0]) + rdi_21)
                        uint64_t rdx_27 = zx.q(_mm_extract_epi32(zmm1, 1))
                        uint64_t rsi_12 = zx.q(_mm_extract_epi32(zmm1, 2))
                        uint64_t rcx_24 = zx.q(_mm_extract_epi32(zmm1, 3))
                        float temp0_299[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(rdx_27 + rax_28), 0x10), 
                                *(rsi_12 + rbx_13), 0x20), 
                            *(rcx_24 + rbp_14), 0x30)
                        zmm1 = zmm3
                        zmm3 = zmm14 & not.o(data_142fc95f0)
                        zmm11 = *(zx.q(zmm3[0]) + rdi_21)
                        int32_t* rcx_26 = zx.q(_mm_extract_epi32(zmm3, 1))
                        int32_t var_280
                        var_280.q = zx.q(_mm_extract_epi32(zmm3, 2))
                        var_2c8[0].q = zx.q(_mm_extract_epi32(zmm3, 3))
                        float temp0_303[0x4] =
                            __insertps_xmmps_memd_immb(zmm11, *(rcx_26 + rax_28), 0x10)
                        zmm7 = zmm14 & not.o(data_143442650)
                        zmm3 = *(zx.q(zmm7[0]) + rdi_21)
                        uint64_t r10_9 = zx.q(_mm_extract_epi32(zmm7, 1))
                        uint64_t r9 = zx.q(_mm_extract_epi32(zmm7, 2))
                        uint64_t rdx_30 = zx.q(_mm_extract_epi32(zmm7, 3))
                        var_338 = zmm1
                        zmm7 = _mm_add_epi64(zmm1, var_328_1)
                        zmm12 = arg7
                        arg7 = _mm_add_epi64(_mm_add_epi64(arg7, var_328_1), arg6)
                        float temp0_312[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm7, zmm0), 
                            _mm_shuffle_epi32(zmm8, 0x50))
                        float temp0_314[0x4] =
                            _mm_blendv_ps(zx.o(0), arg7, _mm_shuffle_epi32(zmm8, 0xfa))
                        zmm0 = zmm14 & not.o(data_143442660)
                        uint64_t rsi_13 = zx.q(zmm0[0])
                        uint64_t r12_4 = zx.q(_mm_extract_epi32(zmm0, 1))
                        int32_t* r15_2 = zx.q(_mm_extract_epi32(zmm0, 2))
                        arg6 = *(rsi_13 + rdi_21)
                        int32_t* rsi_14 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm14 &= not.o(data_143442670)
                        zmm0 = *(zx.q(zmm14[0]) + rdi_21)
                        int32_t* rdi_22 = zx.q(_mm_extract_epi32(zmm14, 1))
                        int32_t* r11_5 = zx.q(_mm_extract_epi32(zmm14, 2))
                        int32_t* r13_4 = zx.q(_mm_extract_epi32(zmm14, 3))
                        float temp0_322[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(temp0_303, *(var_280.q + rbx_13), 0x20), 
                            *(var_2c8[0].q + rbp_14), 0x30)
                        zmm3 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm3, *(r10_9 + rax_28), 0x10), 
                                *(r9 + rbx_13), 0x20), 
                            *(rdx_30 + rbp_14), 0x30)
                        arg6 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg6, *(r12_4 + rax_28), 0x10), 
                                *(r15_2 + rbx_13), 0x20), 
                            *(rsi_14 + rbp_14), 0x30)
                        float temp0_331[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm0, *(rdi_22 + rax_28), 0x10), 
                                *(r11_5 + rbx_13), 0x20), 
                            *(r13_4 + rbp_14), 0x30)
                        arg4 = var_348
                        int64_t rax_29 = temp0_312[0].q
                        int64_t rcx_30 = _mm_extract_epi64(temp0_312, 1)
                        int64_t rdx_31 = _mm_extract_epi64(temp0_314, 1)
                        zmm7 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_29)), *(arg4 + rcx_30), 
                                    1), 
                                *(arg4 + temp0_314[0].q), 2), 
                            *(arg4 + rdx_31), 3)
                        zmm1 = _mm_srli_epi32(zmm7, 0x15)
                        arg5 = data_143442440
                        float temp0_340[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(zmm1, arg5)), 
                                    data_143442690), 
                                zmm3), 
                            arg8)
                        zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(
                            _mm_srli_epi32(zmm7, 0xa) & data_143442480, arg5))
                        rcx_22 = temp0_163
                        
                        if ((rcx_22 & 1) != 0)
                            var_428 = temp0_340[0]
                        
                        zmm3 = __divps_xmmps_memps(zmm3, data_143442690)
                        
                        if ((rcx_22 & 2) != 0)
                            int32_t var_424_7 = __extractps_memd_xmmps_immb(temp0_340, 1)
                        
                        zmm7 &= data_143442680
                        arg6 = _mm_mul_ps(arg6, zmm3)
                        r13 = var_2e8
                        r11 = var_278
                        r12 = var_2e0_1
                        r10_4 = var_33c_1
                        rsi_1 = var_368[0]
                        arg7 = zmm12
                        rdi_7 = var_2f8[0].q
                        
                        if ((rcx_22 & 4) == 0)
                            zmm7 = __paddd_xmmdq_memdq(zmm7, data_143442490)
                            zmm2 = _mm_add_ps(temp0_299, arg6)
                            
                            if ((rcx_22 & 8) != 0)
                                goto label_1401293d7
                            
                            goto label_14012ac48
                        
                        int32_t var_420_2 = __extractps_memd_xmmps_immb(temp0_340, 2)
                        zmm7 = __paddd_xmmdq_memdq(zmm7, data_143442490)
                        zmm2 = _mm_add_ps(temp0_299, arg6)
                        
                        if ((rcx_22 & 8) == 0)
                        label_14012ac48:
                            zmm3 = _mm_cvtepi32_ps(zmm7)
                            
                            if ((rcx_22 & 1) != 0)
                                var_418[0] = zmm2[0]
                        else
                        label_1401293d7:
                            int32_t var_41c_2 = __extractps_memd_xmmps_immb(temp0_340, 3)
                            zmm3 = _mm_cvtepi32_ps(zmm7)
                            
                            if ((rcx_22 & 1) != 0)
                                var_418[0] = zmm2[0]
                        
                        zmm3 = __divps_xmmps_memps(zmm3, data_1434426a0)
                        zmm12 = var_358
                        zmm7 = var_318_2
                        
                        if ((rcx_22 & 2) == 0)
                            zmm0 = _mm_mul_ps(temp0_331, zmm3)
                            
                            if ((rcx_22 & 4) != 0)
                                goto label_140129404
                            
                            goto label_14012ac84
                        
                        var_418[1] = __extractps_memd_xmmps_immb(zmm2, 1)
                        zmm0 = _mm_mul_ps(temp0_331, zmm3)
                        
                        if ((rcx_22 & 4) == 0)
                        label_14012ac84:
                            arg5 = _mm_mul_ps(temp0_340, temp0_340)
                            zmm11 = _mm_add_ps(temp0_322, zmm0)
                            
                            if ((rcx_22 & 8) != 0)
                                var_418[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                        else
                        label_140129404:
                            var_418[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                            arg5 = _mm_mul_ps(temp0_340, temp0_340)
                            zmm11 = _mm_add_ps(temp0_322, zmm0)
                            
                            if ((rcx_22 & 8) != 0)
                                var_418[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                        
                        zmm3 = _mm_sub_ps(data_142d3f670, arg5)
                        float temp0_356[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rcx_22 & 1) != 0)
                            var_408[0] = zmm11[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_356)
                        float temp0_358[0x4] = _mm_mul_ps(zmm11, zmm11)
                        
                        if ((rcx_22 & 2) != 0)
                            var_408[1] = __extractps_memd_xmmps_immb(zmm11, 1)
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_358)
                        
                        if ((rcx_22 & 4) != 0)
                            var_408[2] = __extractps_memd_xmmps_immb(zmm11, 2)
                        
                        float temp0_362[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        float temp0_363[0x4] = _mm_sqrt_ps(zmm3)
                        
                        if ((rcx_22 & 8) == 0)
                            zmm0 = _mm_and_ps(temp0_362, temp0_363)
                            zmm3 = var_338
                            
                            if ((rcx_22 & 1) != 0)
                                goto label_14012943f
                            
                            goto label_14012ad06
                        
                        var_408[3] = __extractps_memd_xmmps_immb(zmm11, 3)
                        zmm0 = _mm_and_ps(temp0_362, temp0_363)
                        zmm3 = var_338
                        
                        if ((rcx_22 & 1) != 0)
                        label_14012943f:
                            var_3f8[0] = zmm0[0]
                            zmm11 = data_142d3f670
                            
                            if ((rcx_22 & 2) == 0)
                                goto label_14012a686
                            
                            goto label_14012ad14
                        
                    label_14012ad06:
                        zmm11 = data_142d3f670
                        
                        if ((rcx_22 & 2) != 0)
                        label_14012ad14:
                            var_3f8[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                            
                            if ((rcx_22 & 4) == 0)
                                goto label_14012a68f
                            
                            goto label_14012ad25
                        
                    label_14012a686:
                        
                        if ((rcx_22 & 4) != 0)
                        label_14012ad25:
                            var_3f8[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((rcx_22 & 8) != 0)
                                var_3f8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_14012a68f:
                            
                            if ((rcx_22 & 8) != 0)
                                var_3f8[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                    case 4
                        arg5 = zmm3
                        zmm1 = zmm3
                        zmm3 = var_328_1
                        zmm1 = _mm_add_epi64(zmm1, zmm3)
                        zmm2 = _mm_add_epi64(_mm_add_epi64(arg7, zmm3), arg6)
                        zmm3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), 
                            _mm_shuffle_epi32(zmm8, 0x50))
                        float temp0_374[0x4] =
                            _mm_blendv_ps(zx.o(0), zmm2, _mm_shuffle_epi32(zmm8, 0xfa))
                        int64_t rax_30 = zmm3[0].q
                        int64_t rdx_32 = _mm_extract_epi64(zmm3, 1)
                        int64_t rbp_16 = _mm_extract_epi64(temp0_374, 1)
                        zmm1 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_30)), *(arg4 + rdx_32), 
                                    1), 
                                *(arg4 + temp0_374[0].q), 2), 
                            *(arg4 + rbp_16), 3)
                        zmm0 = _mm_srli_epi32(zmm1, 0x15)
                        zmm2 = _mm_srli_epi32(zmm1, 0xa) & data_143442480
                        float temp0_382[0x4] = __divps_xmmps_memps(
                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442440)), 
                            data_143442690)
                        rcx_22 = temp0_163
                        
                        if ((rcx_22 & 1) == 0)
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                            zmm11 = data_142d3f670
                            
                            if ((rcx_22 & 2) != 0)
                                goto label_14012947a
                            
                            goto label_14012ae05
                        
                        var_428 = temp0_382[0]
                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                        zmm11 = data_142d3f670
                        
                        if ((rcx_22 & 2) != 0)
                        label_14012947a:
                            int32_t var_424_2 = __extractps_memd_xmmps_immb(temp0_382, 1)
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rcx_22 & 4) == 0)
                                goto label_14012ae11
                            
                            goto label_14012948e
                        
                    label_14012ae05:
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rcx_22 & 4) == 0)
                        label_14012ae11:
                            zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                            
                            if ((rcx_22 & 8) != 0)
                                goto label_1401294a6
                            
                            goto label_14012ae21
                        
                    label_14012948e:
                        int32_t var_420_3 = __extractps_memd_xmmps_immb(temp0_382, 2)
                        zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                        
                        if ((rcx_22 & 8) != 0)
                        label_1401294a6:
                            int32_t var_41c_3 = __extractps_memd_xmmps_immb(temp0_382, 3)
                            zmm1 &= data_143442680
                            
                            if ((rcx_22 & 1) == 0)
                                goto label_14012ae32
                            
                            goto label_1401294bf
                        
                    label_14012ae21:
                        zmm1 &= data_143442680
                        
                        if ((rcx_22 & 1) == 0)
                        label_14012ae32:
                            zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                            
                            if ((rcx_22 & 2) != 0)
                                goto label_1401294d6
                            
                            goto label_14012ae43
                        
                    label_1401294bf:
                        var_418[0] = zmm2[0]
                        zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                        
                        if ((rcx_22 & 2) != 0)
                        label_1401294d6:
                            var_418[1] = __extractps_memd_xmmps_immb(zmm2, 1)
                            zmm1 = _mm_cvtepi32_ps(zmm1)
                            
                            if ((rcx_22 & 4) == 0)
                                goto label_14012ae4f
                            
                            goto label_1401294ea
                        
                    label_14012ae43:
                        zmm1 = _mm_cvtepi32_ps(zmm1)
                        
                        if ((rcx_22 & 4) != 0)
                        label_1401294ea:
                            var_418[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                            zmm0 = _mm_mul_ps(temp0_382, temp0_382)
                            zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                            
                            if ((rcx_22 & 8) != 0)
                                var_418[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                        else
                        label_14012ae4f:
                            zmm0 = _mm_mul_ps(temp0_382, temp0_382)
                            zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                            
                            if ((rcx_22 & 8) != 0)
                                var_418[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                        
                        zmm3 = _mm_sub_ps(zmm11, zmm0)
                        float temp0_392[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rcx_22 & 1) != 0)
                            var_408[0] = zmm1[0]
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_392)
                        float temp0_394[0x4] = _mm_mul_ps(zmm1, zmm1)
                        
                        if ((rcx_22 & 2) != 0)
                            var_408[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                        
                        zmm3 = _mm_sub_ps(zmm3, temp0_394)
                        
                        if ((rcx_22 & 4) != 0)
                            var_408[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                        
                        float temp0_398[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                        float temp0_399[0x4] = _mm_sqrt_ps(zmm3)
                        
                        if ((rcx_22 & 8) == 0)
                            zmm0 = _mm_and_ps(temp0_398, temp0_399)
                            zmm3 = arg5
                            
                            if ((rcx_22 & 1) == 0)
                                goto label_14012a67d
                            
                            goto label_14012aec4
                        
                        var_408[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                        zmm0 = _mm_and_ps(temp0_398, temp0_399)
                        zmm3 = arg5
                        
                        if ((rcx_22 & 1) == 0)
                            goto label_14012a67d
                        
                        goto label_14012aec4
                    case 5
                        arg8 = zmm3
                        zmm1 = zmm3
                        zmm3 = var_328_1
                        zmm1 = _mm_add_epi64(zmm1, zmm3)
                        zmm2 = _mm_add_epi64(_mm_add_epi64(arg7, zmm3), arg6)
                        zmm3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), 
                            _mm_shuffle_epi32(zmm8, 0x50))
                        float temp0_408[0x4] =
                            _mm_blendv_ps(zx.o(0), zmm2, _mm_shuffle_epi32(zmm8, 0xfa))
                        int64_t rax_31 = zmm3[0].q
                        int64_t rcx_31 = _mm_extract_epi64(zmm3, 1)
                        int64_t rdx_33 = temp0_408[0].q
                        int64_t rbp_17 = _mm_extract_epi64(temp0_408, 1)
                        zmm0 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_31)), *(arg4 + rcx_31), 
                                    1), 
                                *(arg4 + rdx_33), 2), 
                            *(arg4 + rbp_17), 3)
                        zmm1 = _mm_srli_epi32(zmm0, 0x15)
                        zmm2 = _mm_srli_epi32(zmm0, 5) & data_143442600
                        zmm1 = __paddd_xmmdq_memdq(zmm1 & data_143442320, data_143442330)
                            | (zmm1 & data_143442610) | zmm2
                        rcx_22 = temp0_163
                        
                        if ((rcx_22 & 1) != 0)
                            var_428 = zmm1[0]
                        
                        uint32_t temp0_415[0x4] = _mm_srli_epi32(zmm0, 0xa)
                        zmm2 = _mm_slli_epi32(zmm0, 6)
                        zmm11 = data_142d3f670
                        
                        if ((rcx_22 & 2) != 0)
                            int32_t var_424_8 = __pextrd_memd_xmmdq_immb(zmm1, 1)
                        
                        zmm2 &= data_143442600
                        arg5 = temp0_415 & data_143442610
                        zmm3 = temp0_415 & data_143442320
                        
                        if ((rcx_22 & 4) == 0)
                            zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                            zmm2 |= arg5
                            
                            if ((rcx_22 & 8) != 0)
                                goto label_140129544
                            
                            goto label_14012afff
                        
                        int32_t var_420_4 = __pextrd_memd_xmmdq_immb(zmm1, 2)
                        zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                        zmm2 |= arg5
                        
                        if ((rcx_22 & 8) != 0)
                        label_140129544:
                            int32_t var_41c_4 = __pextrd_memd_xmmdq_immb(zmm1, 3)
                            zmm2 |= zmm3
                            
                            if ((rcx_22 & 1) == 0)
                                goto label_14012b010
                            
                            goto label_140129559
                        
                    label_14012afff:
                        zmm2 |= zmm3
                        
                        if ((rcx_22 & 1) != 0)
                        label_140129559:
                            var_418[0] = zmm2[0]
                            arg5 = zmm0 & data_143442620
                            
                            if ((rcx_22 & 2) != 0)
                                var_418[1] = __pextrd_memd_xmmdq_immb(zmm2, 1)
                        else
                        label_14012b010:
                            arg5 = zmm0 & data_143442620
                            
                            if ((rcx_22 & 2) != 0)
                                var_418[1] = __pextrd_memd_xmmdq_immb(zmm2, 1)
                        
                        uint32_t temp0_420[0x4] = _mm_slli_epi32(zmm0, 0x11)
                        zmm0 &= data_143442640
                        arg5 = __paddd_xmmdq_memdq(arg5, data_1434423a0)
                        
                        if ((rcx_22 & 4) != 0)
                            var_418[2] = __pextrd_memd_xmmdq_immb(zmm2, 2)
                        
                        zmm3 = temp0_420 & data_143442630
                        float temp0_423[0x4] = _mm_mul_ps(zmm1, zmm1)
                        
                        if ((rcx_22 & 8) != 0)
                            var_418[3] = __pextrd_memd_xmmdq_immb(zmm2, 3)
                        
                        zmm3 |= zmm0 | arg5
                        float temp0_425[0x4] = _mm_sub_ps(zmm11, temp0_423)
                        float temp0_426[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if ((rcx_22 & 1) != 0)
                            var_408[0] = zmm3[0]
                        
                        float temp0_427[0x4] = _mm_sub_ps(temp0_425, temp0_426)
                        float temp0_428[0x4] = _mm_mul_ps(zmm3, zmm3)
                        
                        if ((rcx_22 & 2) != 0)
                            var_408[1] = __pextrd_memd_xmmdq_immb(zmm3, 1)
                        
                        float temp0_430[0x4] = _mm_sub_ps(temp0_427, temp0_428)
                        
                        if ((rcx_22 & 4) != 0)
                            var_408[2] = __pextrd_memd_xmmdq_immb(zmm3, 2)
                        
                        float temp0_432[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_430, 1)
                        float temp0_433[0x4] = _mm_sqrt_ps(temp0_430)
                        
                        if ((rcx_22 & 8) == 0)
                            zmm0 = _mm_and_ps(temp0_432, temp0_433)
                            
                            if ((rcx_22 & 1) != 0)
                                goto label_14012958d
                            
                            goto label_14012b0c9
                        
                        var_408[3] = __pextrd_memd_xmmdq_immb(zmm3, 3)
                        zmm0 = _mm_and_ps(temp0_432, temp0_433)
                        
                        if ((rcx_22 & 1) == 0)
                        label_14012b0c9:
                            zmm3 = arg8
                            
                            if ((rcx_22 & 2) == 0)
                                goto label_14012a686
                            
                            goto label_14012ad14
                        
                    label_14012958d:
                        var_3f8[0] = zmm0[0]
                        zmm3 = arg8
                        
                        if ((rcx_22 & 2) == 0)
                            goto label_14012a686
                        
                        goto label_14012ad14
            
            zmm10 = _mm_cmpeq_epi32(zmm10, zmm7) & not.o(zmm8)
            char temp0_453 = _mm_movemask_ps(zmm10)
            
            if (temp0_453 == 0)
                var_368 = zmm13
                var_2c8 = zmm7
                var_2f8 = zmm7
                var_338 = zmm7
            else
                var_2b8.o = zmm13
                float var_3a8
                float var_398
                float var_388
                float var_378
                uint64_t rbx_1
                int64_t r14_2
                
                if (r11.d u> 5)
                    rbx_1 = zx.q(temp0_453)
                    r14_2 = rbx_1 & 1
                    
                    if (r14_2 == 0)
                        zmm10 = data_142d3f5c0
                        
                        if ((rbx_1.b & 2) != 0)
                            goto label_140129b04
                        
                        goto label_140129338
                    
                    var_3a8 = 0f
                    zmm10 = data_142d3f5c0
                    
                    if ((rbx_1.b & 2) != 0)
                    label_140129b04:
                        int32_t var_3a4_6 = 0
                        
                        if ((rbx_1.b & 4) == 0)
                            goto label_140129341
                        
                        goto label_140129b18
                    
                label_140129338:
                    
                    if ((rbx_1.b & 4) == 0)
                    label_140129341:
                        
                        if ((rbx_1.b & 8) != 0)
                            goto label_140129b2c
                        
                        goto label_14012934a
                    
                label_140129b18:
                    int32_t var_3a0_7 = 0
                    
                    if ((rbx_1.b & 8) != 0)
                    label_140129b2c:
                        int32_t var_39c_7 = 0
                        
                        if (r14_2 == 0)
                            goto label_140129353
                        
                        goto label_140129b40
                    
                label_14012934a:
                    
                    if (r14_2 == 0)
                    label_140129353:
                        
                        if ((rbx_1.b & 2) != 0)
                            goto label_140129b54
                        
                        goto label_14012935c
                    
                label_140129b40:
                    var_398 = 0f
                    
                    if ((rbx_1.b & 2) != 0)
                    label_140129b54:
                        int32_t var_394_6 = 0
                        
                        if ((rbx_1.b & 4) == 0)
                            goto label_140129365
                        
                        goto label_140129b68
                    
                label_14012935c:
                    
                    if ((rbx_1.b & 4) == 0)
                    label_140129365:
                        
                        if ((rbx_1.b & 8) != 0)
                            goto label_140129b7c
                        
                        goto label_14012936e
                    
                label_140129b68:
                    int32_t var_390_6 = 0
                    
                    if ((rbx_1.b & 8) != 0)
                    label_140129b7c:
                        int32_t var_38c_3 = 0
                        
                        if (r14_2 == 0)
                            goto label_140129377
                        
                        goto label_140129b90
                    
                label_14012936e:
                    
                    if (r14_2 == 0)
                    label_140129377:
                        
                        if ((rbx_1.b & 2) != 0)
                            goto label_140129ba4
                        
                        goto label_140129380
                    
                label_140129b90:
                    var_388 = 0f
                    
                    if ((rbx_1.b & 2) != 0)
                    label_140129ba4:
                        int32_t var_384_2 = 0
                        
                        if ((rbx_1.b & 4) == 0)
                            goto label_140129389
                        
                        goto label_140129bb8
                    
                label_140129380:
                    
                    if ((rbx_1.b & 4) == 0)
                    label_140129389:
                        
                        if ((rbx_1.b & 8) != 0)
                            goto label_140129bcc
                        
                        goto label_140129392
                    
                label_140129bb8:
                    int32_t var_380_2 = 0
                    
                    if ((rbx_1.b & 8) != 0)
                    label_140129bcc:
                        int32_t var_37c_4 = 0
                        
                        if (r14_2 == 0)
                            goto label_14012939b
                        
                        goto label_140129be0
                    
                label_140129392:
                    
                    if (r14_2 == 0)
                    label_14012939b:
                        
                        if ((rbx_1.b & 2) != 0)
                            goto label_140129bf4
                        
                        goto label_1401293a4
                    
                label_140129be0:
                    var_378 = 1f
                    
                    if ((rbx_1.b & 2) != 0)
                    label_140129bf4:
                        int32_t var_374_2 = 0x3f800000
                        
                        if ((rbx_1.b & 4) == 0)
                            goto label_1401293ad
                        
                        goto label_140129c08
                    
                label_1401293a4:
                    int32_t var_36c_2
                    
                    if ((rbx_1.b & 4) != 0)
                    label_140129c08:
                        int32_t var_370_2 = 0x3f800000
                        
                        if ((rbx_1.b & 8) != 0)
                            var_36c_2 = 0x3f800000
                    else
                    label_1401293ad:
                        
                        if ((rbx_1.b & 8) != 0)
                            var_36c_2 = 0x3f800000
                else
                    zmm1 = _mm_mullo_epi32(var_268, zmm7)
                    zmm0 = _mm_cvtepi32_epi64(zmm1[0].q)
                    zmm2 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
                    
                    switch (rdi_7)
                        case 0
                            zmm3 = _mm_add_epi64(zmm3, var_328_1)
                            arg7 = _mm_add_epi64(_mm_add_epi64(arg7, var_328_1), zmm2)
                            zmm3 = _mm_add_epi64(zmm3, zmm0)
                            zmm1 = _mm_shuffle_epi32(zmm10, 0x50)
                            float temp0_463[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                            zmm2 = _mm_shuffle_epi32(zmm10, 0xfa)
                            zmm3 = _mm_blendv_ps(zx.o(0), arg7, zmm2)
                            int64_t rdx_34 = _mm_extract_epi64(temp0_463, 1)
                            void* rax_44 = arg4 + rdx_34
                            int32_t rdi_23 = *(arg4 + rdx_34)
                            int64_t rdx_35 = zmm3[0].q
                            void* rbx_15 = arg4 + rdx_35
                            int32_t r13_5 = *(arg4 + rdx_35)
                            int64_t rbp_18 = _mm_extract_epi64(zmm3, 1)
                            void* rdx_36 = arg4 + rbp_18
                            int32_t rcx_32 = *(arg4 + rbp_18)
                            arg6 = data_1434426c0
                            zmm3 = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                            arg6 = _mm_blendv_ps(zx.o(0), arg6, zmm2)
                            float* r10_11 = temp0_463[0].q + arg4
                            int32_t r12_5 = *(_mm_extract_epi64(zmm3, 1) + rax_44)
                            int32_t rcx_33 = *(arg6[0].q + rbx_15)
                            int32_t rcx_34 = *(_mm_extract_epi64(arg6, 1) + rdx_36)
                            arg6 = data_1434426e0
                            float temp0_468[0x4] = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                            arg6 = _mm_blendv_ps(zx.o(0), arg6, zmm2)
                            var_2f8[0] = *(_mm_extract_epi64(temp0_468, 1) + rax_44)
                            int32_t* rbp_23 = arg6[0].q
                            int32_t* rsi_15 = _mm_extract_epi64(arg6, 1)
                            var_338[0] = *(rbp_23 + rbx_15)
                            zmm0 = zmm1
                            zmm1 = data_1434426f0
                            arg6 = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                            var_368[0] = *(rsi_15 + rdx_36)
                            float temp0_471[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                            var_358.d = *(_mm_extract_epi64(arg6, 1) + rax_44)
                            int32_t rcx_4 = *(temp0_471[0].q + rbx_15)
                            int32_t rbp_24 = *(_mm_extract_epi64(temp0_471, 1) + rdx_36)
                            float rdx_37 = *(zmm3[0].q + r10_11)
                            float rax_50 = *(temp0_468[0].q + r10_11)
                            var_2c8[0] = *(arg6[0].q + r10_11)
                            rbx_1 = zx.q(temp0_453)
                            r14_2 = rbx_1 & 1
                            
                            if (r14_2 == 0)
                                zmm10 = data_142d3f5c0
                                
                                if ((rbx_1.b & 2) != 0)
                                    goto label_1401296d2
                                
                                goto label_14012b5d5
                            
                            var_3a8 = *r10_11
                            zmm10 = data_142d3f5c0
                            
                            if ((rbx_1.b & 2) != 0)
                            label_1401296d2:
                                int32_t var_3a4_2 = rdi_23
                                r10_4 = var_33c_1
                                
                                if ((rbx_1.b & 4) == 0)
                                    goto label_14012b5e6
                                
                                goto label_1401296ed
                            
                        label_14012b5d5:
                            r10_4 = var_33c_1
                            
                            if ((rbx_1.b & 4) == 0)
                            label_14012b5e6:
                                
                                if ((rbx_1.b & 8) != 0)
                                    goto label_140129705
                                
                                goto label_14012b5f2
                            
                        label_1401296ed:
                            int32_t var_3a0_1 = r13_5
                            
                            if ((rbx_1.b & 8) != 0)
                            label_140129705:
                                int32_t var_39c_1 = rcx_32
                                arg4 = var_348
                                
                                if (r14_2 == 0)
                                    goto label_14012b603
                                
                                goto label_14012971d
                            
                        label_14012b5f2:
                            arg4 = var_348
                            
                            if (r14_2 != 0)
                            label_14012971d:
                                var_398 = rdx_37
                                r11 = var_278
                                
                                if ((rbx_1.b & 2) != 0)
                                label_140129735:
                                    int32_t var_394_2 = r12_5
                                    
                                    if ((rbx_1.b & 4) == 0)
                                        goto label_14012b61d
                                    
                                    goto label_14012974d
                            else
                            label_14012b603:
                                r11 = var_278
                                
                                if ((rbx_1.b & 2) != 0)
                                    goto label_140129735
                            
                            if ((rbx_1.b & 4) == 0)
                            label_14012b61d:
                                r13 = var_2e8
                                r12 = var_2e0_1
                                
                                if ((rbx_1.b & 8) != 0)
                                    goto label_140129774
                                
                                goto label_14012b633
                            
                        label_14012974d:
                            int32_t var_390_2 = rcx_33
                            r13 = var_2e8
                            r12 = var_2e0_1
                            
                            if ((rbx_1.b & 8) != 0)
                            label_140129774:
                                int32_t var_38c_2 = rcx_34
                                
                                if (r14_2 == 0)
                                    goto label_14012b63c
                                
                                goto label_140129784
                            
                        label_14012b633:
                            
                            if (r14_2 == 0)
                            label_14012b63c:
                                
                                if ((rbx_1.b & 2) != 0)
                                    goto label_14012979b
                                
                                goto label_14012b645
                            
                        label_140129784:
                            var_388 = rax_50
                            
                            if ((rbx_1.b & 2) != 0)
                            label_14012979b:
                                float var_384_1 = var_2f8[0]
                                
                                if ((rbx_1.b & 4) == 0)
                                    goto label_14012b64e
                                
                                goto label_1401297b2
                            
                        label_14012b645:
                            
                            if ((rbx_1.b & 4) == 0)
                            label_14012b64e:
                                
                                if ((rbx_1.b & 8) != 0)
                                    goto label_1401297c9
                                
                                goto label_14012b657
                            
                        label_1401297b2:
                            float var_380_1 = var_338[0]
                            
                            if ((rbx_1.b & 8) != 0)
                            label_1401297c9:
                                float var_37c_2 = var_368[0]
                                
                                if (r14_2 == 0)
                                    goto label_14012b660
                                
                                goto label_1401297e0
                            
                        label_14012b657:
                            
                            if (r14_2 == 0)
                            label_14012b660:
                                
                                if ((rbx_1.b & 2) != 0)
                                    goto label_1401297f7
                                
                                goto label_14012b669
                            
                        label_1401297e0:
                            var_378 = var_2c8[0]
                            
                            if ((rbx_1.b & 2) != 0)
                            label_1401297f7:
                                int32_t var_374_1 = var_358.d
                                
                                if ((rbx_1.b & 4) == 0)
                                    goto label_14012b672
                                
                                goto label_140129807
                            
                        label_14012b669:
                            int32_t var_36c_1
                            
                            if ((rbx_1.b & 4) != 0)
                            label_140129807:
                                int32_t var_370_1 = rcx_4
                                
                                if ((rbx_1.b & 8) != 0)
                                    var_36c_1 = rbp_24
                            else
                            label_14012b672:
                                
                                if ((rbx_1.b & 8) != 0)
                                    var_36c_1 = rbp_24
                        case 1
                            zmm3 = _mm_add_epi64(zmm3, var_328_1)
                            arg7 = _mm_add_epi64(_mm_add_epi64(arg7, var_328_1), zmm2)
                            zmm3 = _mm_add_epi64(zmm3, zmm0)
                            zmm1 = _mm_shuffle_epi32(zmm10, 0x50)
                            zmm3 = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                            zmm2 = _mm_shuffle_epi32(zmm10, 0xfa)
                            float temp0_479[0x4] = _mm_blendv_ps(zx.o(0), arg7, zmm2)
                            int64_t rdx_38 = zmm3[0].q
                            void* rax_51 = arg4 + rdx_38
                            int64_t rbx_17 = _mm_extract_epi64(zmm3, 1)
                            zmm3 = *(arg4 + rdx_38)
                            void* rbp_25 = arg4 + rbx_17
                            zmm8 = *(arg4 + rbx_17)
                            int64_t rbx_18 = temp0_479[0].q
                            void* rdx_39 = arg4 + rbx_18
                            zmm12 = *(arg4 + rbx_18)
                            int64_t rbx_19 = _mm_extract_epi64(temp0_479, 1)
                            zmm10 = *(arg4 + rbx_19)
                            arg5 = data_1434426c0
                            float temp0_480[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                            float temp0_481[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                            arg5 = *(temp0_480[0].q + rax_51)
                            zmm7 = *(_mm_extract_epi64(temp0_480, 1) + rbp_25)
                            zmm11 = *(temp0_481[0].q + rdx_39)
                            float (* rdi_27)[0x4] = _mm_extract_epi64(temp0_481, 1)
                            void* rbx_20 = arg4 + rbx_19
                            zmm0 = zmm1
                            zmm1 = data_1434426e0
                            float temp0_482[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                            zmm14 = *(rdi_27 + rbx_20)
                            float temp0_483[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                            zmm0 = *(temp0_482[0].q + rax_51)
                            zmm2 = *(_mm_extract_epi64(temp0_482, 1) + rbp_25)
                            uint32_t (* rax_53)[0x4] = temp0_483[0].q
                            float (* rbp_26)[0x4] = _mm_extract_epi64(temp0_483, 1)
                            arg8 = *(rax_53 + rdx_39)
                            arg7 = *(rbp_26 + rbx_20)
                            rbx_1 = zx.q(temp0_453)
                            r14_2 = rbx_1 & 1
                            
                            if (r14_2 == 0)
                                if ((rbx_1.b & 2) != 0)
                                    goto label_14012983d
                                
                                goto label_14012b7ef
                            
                            var_3a8 = zmm3[0]
                            
                            if ((rbx_1.b & 2) != 0)
                            label_14012983d:
                                uint32_t var_3a4_3 = zmm8[0]
                                
                                if ((rbx_1.b & 4) == 0)
                                    goto label_14012b7f8
                                
                                goto label_140129850
                            
                        label_14012b7ef:
                            
                            if ((rbx_1.b & 4) == 0)
                            label_14012b7f8:
                                
                                if ((rbx_1.b & 8) != 0)
                                    goto label_140129863
                                
                                goto label_14012b801
                            
                        label_140129850:
                            int32_t var_3a0_2 = zmm12.d
                            
                            if ((rbx_1.b & 8) != 0)
                            label_140129863:
                                float var_39c_2 = zmm10[0]
                                zmm3 = _mm_insert_ps(zmm3, zmm8, 0x10)
                                
                                if (r14_2 == 0)
                                    goto label_14012b811
                                
                                goto label_14012987d
                            
                        label_14012b801:
                            zmm3 = _mm_insert_ps(zmm3, zmm8, 0x10)
                            float var_394_7
                            
                            if (r14_2 != 0)
                            label_14012987d:
                                var_398 = arg5[0]
                                zmm3 = _mm_insert_ps(zmm3, zmm12, 0x20)
                                arg5 = _mm_insert_ps(arg5, zmm7, 0x10)
                                
                                if ((rbx_1.b & 2) != 0)
                                    var_394_7 = zmm7[0]
                            else
                            label_14012b811:
                                zmm3 = _mm_insert_ps(zmm3, zmm12, 0x20)
                                arg5 = _mm_insert_ps(arg5, zmm7, 0x10)
                                
                                if ((rbx_1.b & 2) != 0)
                                    var_394_7 = zmm7[0]
                            zmm3 = _mm_insert_ps(zmm3, zmm10, 0x30)
                            float temp0_488[0x4] = _mm_insert_ps(arg5, zmm11, 0x20)
                            arg6 = _mm_insert_ps(zmm0, zmm2, 0x10)
                            
                            if ((rbx_1.b & 4) != 0)
                                float var_390_7 = zmm11[0]
                            
                            float temp0_490[0x4] = _mm_insert_ps(temp0_488, zmm14, 0x30)
                            arg6 = _mm_insert_ps(arg6, arg8, 0x20)
                            zmm3 = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((rbx_1.b & 8) != 0)
                                float var_38c_4 = zmm14[0]
                            
                            arg6 = _mm_insert_ps(arg6, arg7, 0x30)
                            zmm11 = data_142d3f670
                            float temp0_494[0x4] = _mm_sub_ps(zmm11, zmm3)
                            float temp0_495[0x4] = _mm_mul_ps(temp0_490, temp0_490)
                            
                            if (r14_2 != 0)
                                var_388 = zmm0[0]
                            
                            float temp0_496[0x4] = _mm_sub_ps(temp0_494, temp0_495)
                            arg6 = _mm_mul_ps(arg6, arg6)
                            zmm10 = data_142d3f5c0
                            
                            if ((rbx_1.b & 2) != 0)
                                float var_384_3 = zmm2[0]
                            
                            float temp0_498[0x4] = _mm_sub_ps(temp0_496, arg6)
                            
                            if ((rbx_1.b & 4) != 0)
                                uint32_t var_380_3 = arg8[0]
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), temp0_498, 1)
                            zmm1 = _mm_sqrt_ps(temp0_498)
                            
                            if ((rbx_1.b & 8) == 0)
                                goto label_14012bf20
                            
                            float var_37c_5 = arg7[0]
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (r14_2 == 0)
                                goto label_14012bf2c
                            
                            goto label_14012c0e3
                        case 2
                            zmm3 = _mm_add_epi64(zmm3, var_328_1)
                            arg7 = _mm_add_epi64(_mm_add_epi64(arg7, var_328_1), zmm2)
                            zmm3 = _mm_add_epi64(zmm3, zmm0)
                            zmm2 = _mm_shuffle_epi32(zmm10, 0x50)
                            float temp0_507[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                            zmm1 = _mm_shuffle_epi32(zmm10, 0xfa)
                            zmm3 = _mm_blendv_ps(zx.o(0), arg7, zmm1)
                            int64_t rax_54 = temp0_507[0].q
                            void* rdi_29 = arg4 + rax_54
                            int64_t rdx_40 = _mm_extract_epi64(temp0_507, 1)
                            void* rbx_21 = arg4 + rdx_40
                            int64_t rbp_27 = zmm3[0].q
                            arg5 = data_1434426b0
                            arg6 = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                            float temp0_511[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                            arg7 = zx.o(*(arg6[0].q + rdi_29))
                            int16_t* rsi_20 = _mm_extract_epi64(arg6, 1)
                            zmm0 = zmm2
                            zmm2 = data_1434426c0
                            zmm7 = zmm2
                            arg6 = _mm_blendv_ps(zx.o(0), zmm2, zmm0)
                            arg7 = __pinsrw_xmmdq_memw_immb(arg7, *(rsi_20 + rbx_21), 1)
                            void* rsi_22 = arg4 + rbp_27
                            zmm2 = __pinsrw_xmmdq_memw_immb(zx.o(*(arg6[0].q + rdi_29)), 
                                *(_mm_extract_epi64(arg6, 1) + rbx_21), 1)
                            int64_t rbx_22 = _mm_extract_epi64(zmm3, 1)
                            int16_t* rdi_32 = temp0_511[0].q
                            zmm3 = _mm_blendv_ps(zx.o(0), zmm7, zmm1)
                            arg7 = __pinsrw_xmmdq_memw_immb(arg7, *(rdi_32 + rsi_22), 2)
                            zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(zmm3[0].q + rsi_22), 2)
                            void* rdi_34 = arg4 + rbx_22
                            arg7 = __pinsrw_xmmdq_memw_immb(arg7, 
                                *(_mm_extract_epi64(temp0_511, 1) + rdi_34), 3)
                            zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                                *(_mm_extract_epi64(zmm3, 1) + rdi_34), 3)
                            zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_54)), 
                                        *(arg4 + rdx_40), 1), 
                                    *(arg4 + rbp_27), 2), 
                                *(arg4 + rbx_22), 3)[0].q)
                            zmm3 = data_1434424d0
                            float temp0_526[0x4] = __divps_xmmps_memps(
                                _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm3)), data_1434426d0)
                            zmm1 = _mm_cvtepu16_epi32(arg7[0].q)
                            rbx_1 = zx.q(temp0_453)
                            r14_2 = rbx_1 & 1
                            
                            if (r14_2 != 0)
                                var_3a8 = temp0_526[0]
                            
                            zmm1 = _mm_add_epi32(zmm1, zmm3)
                            zmm10 = data_142d3f5c0
                            
                            if ((rbx_1.b & 2) == 0)
                                zmm1 = _mm_cvtepi32_ps(zmm1)
                                
                                if ((rbx_1.b & 4) != 0)
                                    goto label_1401298ba
                                
                                goto label_14012ba81
                            
                            int32_t var_3a4_4 = __extractps_memd_xmmps_immb(temp0_526, 1)
                            zmm1 = _mm_cvtepi32_ps(zmm1)
                            
                            if ((rbx_1.b & 4) != 0)
                            label_1401298ba:
                                int32_t var_3a0_3 = __extractps_memd_xmmps_immb(temp0_526, 2)
                                zmm1 = __divps_xmmps_memps(zmm1, data_1434426d0)
                                
                                if ((rbx_1.b & 8) == 0)
                                    goto label_14012ba91
                                
                                goto label_1401298d5
                            
                        label_14012ba81:
                            zmm1 = __divps_xmmps_memps(zmm1, data_1434426d0)
                            
                            if ((rbx_1.b & 8) == 0)
                            label_14012ba91:
                                zmm2 = _mm_cvtepu16_epi32(zmm2[0].q)
                                
                                if (r14_2 != 0)
                                    goto label_1401298ee
                                
                                goto label_14012ba9f
                            
                        label_1401298d5:
                            int32_t var_39c_3 = __extractps_memd_xmmps_immb(temp0_526, 3)
                            zmm2 = _mm_cvtepu16_epi32(zmm2[0].q)
                            
                            if (r14_2 != 0)
                            label_1401298ee:
                                var_398 = zmm1[0]
                                zmm2 = _mm_add_epi32(zmm2, zmm3)
                                
                                if ((rbx_1.b & 2) == 0)
                                    goto label_14012baac
                                
                                goto label_140129904
                            
                        label_14012ba9f:
                            zmm2 = _mm_add_epi32(zmm2, zmm3)
                            
                            if ((rbx_1.b & 2) == 0)
                            label_14012baac:
                                zmm2 = _mm_cvtepi32_ps(zmm2)
                                
                                if ((rbx_1.b & 4) != 0)
                                    goto label_14012991b
                                
                                goto label_14012bab8
                            
                        label_140129904:
                            int32_t var_394_3 = __extractps_memd_xmmps_immb(zmm1, 1)
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            int32_t var_38c_5
                            
                            if ((rbx_1.b & 4) == 0)
                            label_14012bab8:
                                zmm0 = _mm_mul_ps(temp0_526, temp0_526)
                                zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                                
                                if ((rbx_1.b & 8) != 0)
                                    var_38c_5 = __extractps_memd_xmmps_immb(zmm1, 3)
                            else
                            label_14012991b:
                                int32_t var_390_3 = __extractps_memd_xmmps_immb(zmm1, 2)
                                zmm0 = _mm_mul_ps(temp0_526, temp0_526)
                                zmm2 = __divps_xmmps_memps(zmm2, data_1434426d0)
                                
                                if ((rbx_1.b & 8) != 0)
                                    var_38c_5 = __extractps_memd_xmmps_immb(zmm1, 3)
                            zmm3 = _mm_sub_ps(zmm11, zmm0)
                            float temp0_538[0x4] = _mm_mul_ps(zmm1, zmm1)
                            
                            if (r14_2 != 0)
                                var_388 = zmm2[0]
                            
                            zmm3 = _mm_sub_ps(zmm3, temp0_538)
                            float temp0_540[0x4] = _mm_mul_ps(zmm2, zmm2)
                            
                            if ((rbx_1.b & 2) != 0)
                                int32_t var_384_4 = __extractps_memd_xmmps_immb(zmm2, 1)
                            
                            zmm3 = _mm_sub_ps(zmm3, temp0_540)
                            
                            if ((rbx_1.b & 4) != 0)
                                int32_t var_380_4 = __extractps_memd_xmmps_immb(zmm2, 2)
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            zmm1 = _mm_sqrt_ps(zmm3)
                            
                            if ((rbx_1.b & 8) == 0)
                                goto label_14012bf20
                            
                            int32_t var_37c_6 = __extractps_memd_xmmps_immb(zmm2, 3)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (r14_2 == 0)
                                goto label_14012bf2c
                            
                            goto label_14012c0e3
                        case 3
                            var_368[0] = rsi_1
                            int32_t temp0_549[0x4] =
                                _mm_srai_epi32(_mm_slli_epi32(zmm10, 0x1f), 0x1f)
                            zmm12 &= temp0_549
                            int64_t rax_57 = sx.q(zmm12.d)
                            void* r12_6 = arg4 + rax_57
                            zmm8 = *(arg4 + rax_57)
                            int64_t rdx_41 = sx.q(_mm_extract_epi32(zmm12, 1))
                            void* r9_1 = arg4 + rdx_41
                            int64_t rbp_28 = sx.q(_mm_extract_epi32(zmm12, 2))
                            void* r13_6 = var_348 + rbp_28
                            int64_t rsi_26 = sx.q(_mm_extract_epi32(zmm12, 3))
                            void* r8 = var_348 + rsi_26
                            zmm8 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm8, *(var_348 + rdx_41), 0x10), 
                                    *(var_348 + rbp_28), 0x20), 
                                *(var_348 + rsi_26), 0x30)
                            arg5 = zmm3
                            zmm3 = temp0_549 & data_142fc95e0
                            arg8 = *(zx.q(zmm3[0]) + r12_6)
                            uint64_t rdx_43 = zx.q(_mm_extract_epi32(zmm3, 1))
                            int32_t* rsi_27 = zx.q(_mm_extract_epi32(zmm3, 2))
                            int32_t* rbx_23 = zx.q(_mm_extract_epi32(zmm3, 3))
                            arg8 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(arg8, *(rdx_43 + r9_1), 0x10), 
                                    *(rsi_27 + r13_6), 0x20), 
                                *(rbx_23 + r8), 0x30)
                            zmm3 = temp0_549 & data_142fc95f0
                            uint64_t r11_7 = zx.q(zmm3[0])
                            uint64_t rdx_44 = zx.q(_mm_extract_epi32(zmm3, 1))
                            var_358.q = zx.q(_mm_extract_epi32(zmm3, 2))
                            var_338[0].q = zx.q(_mm_extract_epi32(zmm3, 3))
                            float temp0_568[0x4] = _mm_blendv_ps(zx.o(0), 
                                _mm_add_epi64(_mm_add_epi64(arg5, var_328_1), zmm0), 
                                _mm_shuffle_epi32(zmm10, 0x50))
                            zmm3 =
                                __insertps_xmmps_memd_immb(*(r11_7 + r12_6), *(rdx_44 + r9_1), 0x10)
                            zmm0 = temp0_549 & data_143442650
                            int32_t* r11_8 = zx.q(_mm_extract_epi32(zmm0, 1))
                            int32_t* rbx_24 = zx.q(_mm_extract_epi32(zmm0, 2))
                            uint64_t rsi_28 = zx.q(zmm0[0])
                            int32_t* rdi_35 = zx.q(_mm_extract_epi32(zmm0, 3))
                            arg5 = *(rsi_28 + r12_6)
                            float temp0_576[0x4] = _mm_blendv_ps(zx.o(0), 
                                _mm_add_epi64(_mm_add_epi64(arg7, var_328_1), zmm2), 
                                _mm_shuffle_epi32(zmm10, 0xfa))
                            zmm0 = temp0_549 & data_143442660
                            uint64_t rsi_29 = zx.q(zmm0[0])
                            int32_t* rax_67 = zx.q(_mm_extract_epi32(zmm0, 1))
                            int32_t* rdx_45 = zx.q(_mm_extract_epi32(zmm0, 2))
                            arg7 = *(rsi_29 + r12_6)
                            int32_t* rsi_30 = zx.q(_mm_extract_epi32(zmm0, 3))
                            arg6 = temp0_549 & data_143442670
                            zmm0 = *(zx.q(arg6[0]) + r12_6)
                            int32_t* rcx_39 = zx.q(_mm_extract_epi32(arg6, 1))
                            int32_t* r14_9 = zx.q(_mm_extract_epi32(arg6, 2))
                            int32_t* r12_7 = zx.q(_mm_extract_epi32(arg6, 3))
                            zmm3 = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm3, *(var_358.q + r13_6), 0x20), 
                                *(var_338[0].q + r8), 0x30)
                            float temp0_587[0x4] = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(arg5, *(r11_8 + r9_1), 0x10), 
                                    *(rbx_24 + r13_6), 0x20), 
                                *(rdi_35 + r8), 0x30)
                            float temp0_590[0x4] = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(arg7, *(rax_67 + r9_1), 0x10), 
                                    *(rdx_45 + r13_6), 0x20), 
                                *(rsi_30 + r8), 0x30)
                            arg4 = var_348
                            float temp0_593[0x4] = __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(zmm0, *(rcx_39 + r9_1), 0x10), 
                                    *(r14_9 + r13_6), 0x20), 
                                *(r12_7 + r8), 0x30)
                            int64_t rax_68 = temp0_568[0].q
                            int64_t rcx_40 = _mm_extract_epi64(temp0_568, 1)
                            int64_t rdx_46 = _mm_extract_epi64(temp0_576, 1)
                            int32_t temp0_596[0x4] = __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_68)), 
                                        *(arg4 + rcx_40), 1), 
                                    *(arg4 + temp0_576[0].q), 2), 
                                *(arg4 + rdx_46), 3)
                            zmm2 = _mm_srli_epi32(temp0_596, 0x15)
                            zmm7 = data_143442440
                            float temp0_602[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_add_epi32(zmm2, zmm7)), 
                                        data_143442690), 
                                    temp0_587), 
                                zmm8)
                            float temp0_605[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(
                                _mm_srli_epi32(temp0_596, 0xa) & data_143442480, zmm7))
                            rbx_1 = zx.q(temp0_453)
                            r14_2 = rbx_1 & 1
                            
                            if (r14_2 != 0)
                                var_3a8 = temp0_602[0]
                            
                            float temp0_606[0x4] = __divps_xmmps_memps(temp0_605, data_143442690)
                            zmm10 = data_142d3f5c0
                            
                            if ((rbx_1.b & 2) != 0)
                                int32_t var_3a4_7 = __extractps_memd_xmmps_immb(temp0_602, 1)
                            
                            arg6 = temp0_596 & data_143442680
                            float temp0_608[0x4] = _mm_mul_ps(temp0_590, temp0_606)
                            r13 = var_2e8
                            r11 = var_278
                            r12 = var_2e0_1
                            r10_4 = var_33c_1
                            rsi_1 = var_368[0]
                            arg3 = var_250_1
                            
                            if ((rbx_1.b & 4) == 0)
                                arg6 = __paddd_xmmdq_memdq(arg6, data_143442490)
                                arg8 = _mm_add_ps(arg8, temp0_608)
                                
                                if ((rbx_1.b & 8) != 0)
                                    goto label_14012995e
                                
                                goto label_14012be88
                            
                            int32_t var_3a0_4 = __extractps_memd_xmmps_immb(temp0_602, 2)
                            arg6 = __paddd_xmmdq_memdq(arg6, data_143442490)
                            arg8 = _mm_add_ps(arg8, temp0_608)
                            
                            if ((rbx_1.b & 8) != 0)
                            label_14012995e:
                                int32_t var_39c_4 = __extractps_memd_xmmps_immb(temp0_602, 3)
                                arg5 = _mm_cvtepi32_ps(arg6)
                                
                                if (r14_2 == 0)
                                    goto label_14012be94
                                
                                goto label_140129975
                            
                        label_14012be88:
                            arg5 = _mm_cvtepi32_ps(arg6)
                            
                            if (r14_2 == 0)
                            label_14012be94:
                                arg5 = __divps_xmmps_memps(arg5, data_1434426a0)
                                
                                if ((rbx_1.b & 2) != 0)
                                    goto label_14012998f
                                
                                goto label_14012bea4
                            
                        label_140129975:
                            var_398 = arg8[0]
                            arg5 = __divps_xmmps_memps(arg5, data_1434426a0)
                            
                            if ((rbx_1.b & 2) != 0)
                            label_14012998f:
                                int32_t var_394_4 = __extractps_memd_xmmps_immb(arg8, 1)
                                zmm0 = _mm_mul_ps(temp0_593, arg5)
                                
                                if ((rbx_1.b & 4) == 0)
                                    goto label_14012beb0
                                
                                goto label_1401299a7
                            
                        label_14012bea4:
                            zmm0 = _mm_mul_ps(temp0_593, arg5)
                            int32_t var_38c_6
                            
                            if ((rbx_1.b & 4) != 0)
                            label_1401299a7:
                                int32_t var_390_4 = __extractps_memd_xmmps_immb(arg8, 2)
                                zmm2 = _mm_mul_ps(temp0_602, temp0_602)
                                zmm3 = _mm_add_ps(zmm3, zmm0)
                                
                                if ((rbx_1.b & 8) != 0)
                                    var_38c_6 = __extractps_memd_xmmps_immb(arg8, 3)
                            else
                            label_14012beb0:
                                zmm2 = _mm_mul_ps(temp0_602, temp0_602)
                                zmm3 = _mm_add_ps(zmm3, zmm0)
                                
                                if ((rbx_1.b & 8) != 0)
                                    var_38c_6 = __extractps_memd_xmmps_immb(arg8, 3)
                            float temp0_617[0x4] = _mm_sub_ps(zmm11, zmm2)
                            arg8 = _mm_mul_ps(arg8, arg8)
                            
                            if (r14_2 != 0)
                                var_388 = zmm3[0]
                            
                            arg5 = _mm_sub_ps(temp0_617, arg8)
                            zmm0 = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((rbx_1.b & 2) == 0)
                                goto label_14012befa
                            
                            goto label_14012beef
                        case 4
                            zmm3 = _mm_add_epi64(zmm3, var_328_1)
                            arg7 = _mm_add_epi64(_mm_add_epi64(arg7, var_328_1), zmm2)
                            float temp0_632[0x4] = _mm_blendv_ps(zx.o(0), 
                                _mm_add_epi64(zmm3, zmm0), _mm_shuffle_epi32(zmm10, 0x50))
                            float temp0_634[0x4] =
                                _mm_blendv_ps(zx.o(0), arg7, _mm_shuffle_epi32(zmm10, 0xfa))
                            int64_t rax_69 = temp0_632[0].q
                            int64_t rdx_47 = _mm_extract_epi64(temp0_632, 1)
                            int64_t rbp_31 = _mm_extract_epi64(temp0_634, 1)
                            zmm1 = __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_69)), 
                                        *(arg4 + rdx_47), 1), 
                                    *(arg4 + temp0_634[0].q), 2), 
                                *(arg4 + rbp_31), 3)
                            zmm0 = _mm_srli_epi32(zmm1, 0x15)
                            zmm2 = _mm_srli_epi32(zmm1, 0xa) & data_143442480
                            float temp0_642[0x4] = __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442440)), 
                                data_143442690)
                            rbx_1 = zx.q(temp0_453)
                            r14_2 = rbx_1 & 1
                            
                            if (r14_2 != 0)
                                var_3a8 = temp0_642[0]
                            
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442440)
                            zmm10 = data_142d3f5c0
                            
                            if ((rbx_1.b & 2) == 0)
                                zmm2 = _mm_cvtepi32_ps(zmm2)
                                
                                if ((rbx_1.b & 4) != 0)
                                    goto label_1401299de
                                
                                goto label_14012c028
                            
                            int32_t var_3a4_5 = __extractps_memd_xmmps_immb(temp0_642, 1)
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rbx_1.b & 4) != 0)
                            label_1401299de:
                                int32_t var_3a0_5 = __extractps_memd_xmmps_immb(temp0_642, 2)
                                zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                                
                                if ((rbx_1.b & 8) == 0)
                                    goto label_14012c038
                                
                                goto label_1401299f9
                            
                        label_14012c028:
                            zmm2 = __divps_xmmps_memps(zmm2, data_143442690)
                            
                            if ((rbx_1.b & 8) == 0)
                            label_14012c038:
                                zmm1 &= data_143442680
                                
                                if (r14_2 != 0)
                                    goto label_140129a15
                                
                                goto label_14012c049
                            
                        label_1401299f9:
                            int32_t var_39c_5 = __extractps_memd_xmmps_immb(temp0_642, 3)
                            zmm1 &= data_143442680
                            
                            if (r14_2 != 0)
                            label_140129a15:
                                var_398 = zmm2[0]
                                zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                                
                                if ((rbx_1.b & 2) == 0)
                                    goto label_14012c05a
                                
                                goto label_140129a2f
                            
                        label_14012c049:
                            zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                            
                            if ((rbx_1.b & 2) == 0)
                            label_14012c05a:
                                zmm1 = _mm_cvtepi32_ps(zmm1)
                                
                                if ((rbx_1.b & 4) != 0)
                                    goto label_140129a46
                                
                                goto label_14012c066
                            
                        label_140129a2f:
                            int32_t var_394_5 = __extractps_memd_xmmps_immb(zmm2, 1)
                            zmm1 = _mm_cvtepi32_ps(zmm1)
                            int32_t var_38c_7
                            
                            if ((rbx_1.b & 4) == 0)
                            label_14012c066:
                                zmm0 = _mm_mul_ps(temp0_642, temp0_642)
                                zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                                
                                if ((rbx_1.b & 8) != 0)
                                    var_38c_7 = __extractps_memd_xmmps_immb(zmm2, 3)
                            else
                            label_140129a46:
                                int32_t var_390_5 = __extractps_memd_xmmps_immb(zmm2, 2)
                                zmm0 = _mm_mul_ps(temp0_642, temp0_642)
                                zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                                
                                if ((rbx_1.b & 8) != 0)
                                    var_38c_7 = __extractps_memd_xmmps_immb(zmm2, 3)
                            zmm3 = _mm_sub_ps(zmm11, zmm0)
                            float temp0_652[0x4] = _mm_mul_ps(zmm2, zmm2)
                            
                            if (r14_2 != 0)
                                var_388 = zmm1[0]
                            
                            zmm3 = _mm_sub_ps(zmm3, temp0_652)
                            float temp0_654[0x4] = _mm_mul_ps(zmm1, zmm1)
                            
                            if ((rbx_1.b & 2) != 0)
                                int32_t var_384_6 = __extractps_memd_xmmps_immb(zmm1, 1)
                            
                            zmm3 = _mm_sub_ps(zmm3, temp0_654)
                            
                            if ((rbx_1.b & 4) != 0)
                                int32_t var_380_6 = __extractps_memd_xmmps_immb(zmm1, 2)
                            
                            float temp0_658[0x4] = _mm_cmpeq_ps(zx.o(0), zmm3, 1)
                            float temp0_659[0x4] = _mm_sqrt_ps(zmm3)
                            
                            if ((rbx_1.b & 8) == 0)
                                zmm0 = _mm_and_ps(temp0_658, temp0_659)
                                
                                if (r14_2 == 0)
                                    goto label_14012bf2c
                                
                                goto label_14012c0e3
                            
                            int32_t var_37c_3 = __extractps_memd_xmmps_immb(zmm1, 3)
                            zmm0 = _mm_and_ps(temp0_658, temp0_659)
                            
                            if (r14_2 == 0)
                                goto label_14012bf2c
                            
                            goto label_14012c0e3
                        case 5
                            zmm3 = _mm_add_epi64(zmm3, var_328_1)
                            arg7 = _mm_add_epi64(_mm_add_epi64(arg7, var_328_1), zmm2)
                            float temp0_23[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm3, zmm0), 
                                _mm_shuffle_epi32(zmm10, 0x50))
                            float temp0_25[0x4] =
                                _mm_blendv_ps(zx.o(0), arg7, _mm_shuffle_epi32(zmm10, 0xfa))
                            int64_t rax_1 = temp0_23[0].q
                            int64_t rcx_2 = _mm_extract_epi64(temp0_23, 1)
                            int64_t rdx_1 = temp0_25[0].q
                            int64_t rbp_1 = _mm_extract_epi64(temp0_25, 1)
                            zmm0 = __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(
                                    __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_1)), 
                                        *(arg4 + rcx_2), 1), 
                                    *(arg4 + rdx_1), 2), 
                                *(arg4 + rbp_1), 3)
                            zmm1 = _mm_srli_epi32(zmm0, 0x15)
                            zmm2 = _mm_srli_epi32(zmm0, 5) & data_143442600
                            zmm1 = __paddd_xmmdq_memdq(zmm1 & data_143442320, data_143442330)
                                | (zmm1 & data_143442610) | zmm2
                            rbx_1 = zx.q(temp0_453)
                            r14_2 = rbx_1 & 1
                            
                            if (r14_2 != 0)
                                var_3a8 = zmm1[0]
                            
                            uint32_t temp0_32[0x4] = _mm_srli_epi32(zmm0, 0xa)
                            zmm2 = _mm_slli_epi32(zmm0, 6)
                            zmm10 = data_142d3f5c0
                            
                            if ((rbx_1.b & 2) != 0)
                                int32_t var_3a4_1 = __pextrd_memd_xmmdq_immb(zmm1, 1)
                            
                            zmm2 &= data_143442600
                            arg5 = temp0_32 & data_143442610
                            zmm3 = temp0_32 & data_143442320
                            
                            if ((rbx_1.b & 4) == 0)
                                zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                                zmm2 |= arg5
                                
                                if ((rbx_1.b & 8) != 0)
                                    goto label_140129aa5
                                
                                goto label_14012924d
                            
                            int32_t var_3a0_6 = __pextrd_memd_xmmdq_immb(zmm1, 2)
                            zmm3 = __paddd_xmmdq_memdq(zmm3, data_143442330)
                            zmm2 |= arg5
                            
                            if ((rbx_1.b & 8) != 0)
                            label_140129aa5:
                                int32_t var_39c_6 = __pextrd_memd_xmmdq_immb(zmm1, 3)
                                zmm2 |= zmm3
                                
                                if (r14_2 == 0)
                                    goto label_14012925e
                                
                                goto label_140129abd
                            
                        label_14012924d:
                            zmm2 |= zmm3
                            int32_t var_394_1
                            
                            if (r14_2 != 0)
                            label_140129abd:
                                var_398 = zmm2[0]
                                arg5 = zmm0 & data_143442620
                                
                                if ((rbx_1.b & 2) != 0)
                                    var_394_1 = __pextrd_memd_xmmdq_immb(zmm2, 1)
                            else
                            label_14012925e:
                                arg5 = zmm0 & data_143442620
                                
                                if ((rbx_1.b & 2) != 0)
                                    var_394_1 = __pextrd_memd_xmmdq_immb(zmm2, 1)
                            uint32_t temp0_37[0x4] = _mm_slli_epi32(zmm0, 0x11)
                            zmm0 &= data_143442640
                            arg5 = __paddd_xmmdq_memdq(arg5, data_1434423a0)
                            
                            if ((rbx_1.b & 4) != 0)
                                int32_t var_390_1 = __pextrd_memd_xmmdq_immb(zmm2, 2)
                            
                            zmm3 = temp0_37 & data_143442630
                            float temp0_40[0x4] = _mm_mul_ps(zmm1, zmm1)
                            
                            if ((rbx_1.b & 8) != 0)
                                int32_t var_38c_1 = __pextrd_memd_xmmdq_immb(zmm2, 3)
                            
                            zmm3 |= zmm0 | arg5
                            float temp0_42[0x4] = _mm_sub_ps(zmm11, temp0_40)
                            float temp0_43[0x4] = _mm_mul_ps(zmm2, zmm2)
                            
                            if (r14_2 != 0)
                                var_388 = zmm3[0]
                            
                            arg5 = _mm_sub_ps(temp0_42, temp0_43)
                            zmm0 = _mm_mul_ps(zmm3, zmm3)
                            
                            if ((rbx_1.b & 2) == 0)
                                goto label_14012befa
                            
                        label_14012beef:
                            int32_t var_384_5 = __extractps_memd_xmmps_immb(zmm3, 1)
                        label_14012befa:
                            float temp0_622[0x4] = _mm_sub_ps(arg5, zmm0)
                            
                            if ((rbx_1.b & 4) != 0)
                                int32_t var_380_5 = __extractps_memd_xmmps_immb(zmm3, 2)
                            
                            zmm0 = _mm_cmpeq_ps(zx.o(0), temp0_622, 1)
                            zmm1 = _mm_sqrt_ps(temp0_622)
                            
                            if ((rbx_1.b & 8) == 0)
                            label_14012bf20:
                                zmm0 = _mm_and_ps(zmm0, zmm1)
                                
                                if (r14_2 != 0)
                                    goto label_14012c0e3
                                
                                goto label_14012bf2c
                            
                            int32_t var_37c_1 = __extractps_memd_xmmps_immb(zmm3, 3)
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (r14_2 != 0)
                            label_14012c0e3:
                                var_378 = zmm0[0]
                                
                                if ((rbx_1.b & 2) == 0)
                                    goto label_14012bf35
                                
                                goto label_14012c0f5
                            
                        label_14012bf2c:
                            
                            if ((rbx_1.b & 2) == 0)
                            label_14012bf35:
                                
                                if ((rbx_1.b & 4) != 0)
                                    goto label_14012c109
                                
                                goto label_14012bf3e
                            
                        label_14012c0f5:
                            int32_t var_374_3 = __extractps_memd_xmmps_immb(zmm0, 1)
                            int32_t var_36c_3
                            
                            if ((rbx_1.b & 4) == 0)
                            label_14012bf3e:
                                
                                if ((rbx_1.b & 8) != 0)
                                    var_36c_3 = __extractps_memd_xmmps_immb(zmm0, 3)
                            else
                            label_14012c109:
                                int32_t var_370_3 = __extractps_memd_xmmps_immb(zmm0, 2)
                                
                                if ((rbx_1.b & 8) != 0)
                                    var_36c_3 = __extractps_memd_xmmps_immb(zmm0, 3)
                
                arg5 = var_428.o
                zmm3 = var_3a8.o
                zmm7 = var_398.o
                arg7 = var_388.o
                arg6 = var_378.o
                float temp0_664[0x4] = _mm_mul_ps(arg5, zmm3)
                float temp0_666[0x4] = _mm_add_ps(_mm_mul_ps(var_418, zmm7), temp0_664)
                float temp0_668[0x4] = _mm_add_ps(_mm_mul_ps(var_408, arg7), temp0_666)
                float temp0_671[0x4] =
                    _mm_cmpeq_ps(zx.o(0), _mm_add_ps(_mm_mul_ps(var_3f8, arg6), temp0_668), 2)
                zmm3 = _mm_mul_ps(zmm3, zmm15)
                float temp0_673[0x4] = _mm_mul_ps(zmm7, zmm15)
                float temp0_674[0x4] = _mm_mul_ps(arg7, zmm15)
                arg6 = _mm_mul_ps(arg6, zmm15)
                float temp0_676[0x4] = _mm_blendv_ps(data_142d3f7e0, zmm11, temp0_671)
                float temp0_678[0x4] = _mm_mul_ps(_mm_sub_ps(zmm11, zmm15), temp0_676)
                float temp0_680[0x4] = _mm_add_ps(_mm_mul_ps(arg5, temp0_678), zmm3)
                float temp0_682[0x4] = _mm_add_ps(_mm_mul_ps(var_418, temp0_678), temp0_673)
                arg8 = _mm_add_ps(_mm_mul_ps(var_408, temp0_678), temp0_674)
                float temp0_686[0x4] = _mm_add_ps(_mm_mul_ps(temp0_678, var_3f8), arg6)
                float var_168_1[0x4] = temp0_680
                float var_158_1[0x4] = temp0_682
                uint32_t var_148_1[0x4] = arg8
                float var_138_1[0x4] = temp0_686
                float temp0_687[0x4] = _mm_mul_ps(temp0_680, temp0_680)
                zmm3 = _mm_mul_ps(temp0_682, temp0_682)
                arg6 = _mm_add_ps(_mm_mul_ps(arg8, arg8), temp0_687)
                float temp0_693[0x4] =
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_686, temp0_686), zmm3), arg6)
                zmm8 = _mm_cmpeq_ps(zmm10, temp0_693, 2)
                zmm14 = data_142d3f640
                float temp0_695[0x4] = _mm_mul_ps(temp0_693, zmm14)
                zmm3 = _mm_rsqrt_ps(temp0_693)
                arg6 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm14, _mm_mul_ps(_mm_mul_ps(zmm3, zmm3), temp0_695)), 
                        zmm3), 
                    zmm3)
                zmm3 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm14, _mm_mul_ps(_mm_mul_ps(arg6, arg6), temp0_695)), 
                        arg6), 
                    arg6)
                arg5 = _mm_and_ps(_mm_mul_ps(temp0_680, zmm3), zmm8)
                
                if (r14_2 != 0)
                    var_428 = arg5[0]
                
                zmm7 = var_318_2
                
                if ((rbx_1.b & 2) == 0)
                    if ((rbx_1.b & 4) != 0)
                        goto label_14012908b
                    
                    goto label_14012c27e
                
                int32_t var_424_1 = __extractps_memd_xmmps_immb(arg5, 1)
                
                if ((rbx_1.b & 4) != 0)
                label_14012908b:
                    int32_t var_420_1 = __extractps_memd_xmmps_immb(arg5, 2)
                    zmm1 = _mm_mul_ps(temp0_682, zmm3)
                    
                    if ((rbx_1.b & 8) == 0)
                        goto label_14012c28a
                    
                    goto label_14012909f
                
            label_14012c27e:
                zmm1 = _mm_mul_ps(temp0_682, zmm3)
                
                if ((rbx_1.b & 8) != 0)
                label_14012909f:
                    int32_t var_41c_1 = __extractps_memd_xmmps_immb(arg5, 3)
                    zmm1 = _mm_and_ps(zmm1, zmm8)
                    
                    if (r14_2 != 0)
                        var_418[0] = zmm1[0]
                else
                label_14012c28a:
                    zmm1 = _mm_and_ps(zmm1, zmm8)
                    
                    if (r14_2 != 0)
                        var_418[0] = zmm1[0]
                
                if ((rbx_1.b & 2) == 0)
                    if ((rbx_1.b & 4) != 0)
                        goto label_1401290ca
                    
                    goto label_14012c2ab
                
                var_418[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                
                if ((rbx_1.b & 4) != 0)
                label_1401290ca:
                    var_418[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                    arg8 = _mm_mul_ps(arg8, zmm3)
                    
                    if ((rbx_1.b & 8) == 0)
                        goto label_14012c2b8
                    
                    goto label_1401290df
                
            label_14012c2ab:
                arg8 = _mm_mul_ps(arg8, zmm3)
                
                if ((rbx_1.b & 8) != 0)
                label_1401290df:
                    var_418[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                    arg8 = _mm_and_ps(arg8, zmm8)
                    
                    if (r14_2 != 0)
                        var_408[0] = arg8[0]
                else
                label_14012c2b8:
                    arg8 = _mm_and_ps(arg8, zmm8)
                    
                    if (r14_2 != 0)
                        var_408[0] = arg8[0]
                
                if ((rbx_1.b & 2) != 0)
                    var_408[1] = __extractps_memd_xmmps_immb(arg8, 1)
                
                float temp0_714[0x4] = _mm_cmpeq_ps(zmm10, temp0_693, 6)
                zmm3 = _mm_mul_ps(zmm3, temp0_686)
                
                if ((rbx_1.b & 4) != 0)
                    var_408[2] = __extractps_memd_xmmps_immb(arg8, 2)
                
                uint32_t temp0_717[0x4] = _mm_and_ps(zmm3, zmm8)
                zmm2 = _mm_and_ps(temp0_714, zmm11)
                zmm13 = var_2b8.o
                
                if ((rbx_1.b & 8) != 0)
                    var_408[3] = __extractps_memd_xmmps_immb(arg8, 3)
                
                uint32_t temp0_720[0x4] = _mm_or_ps(temp0_717, zmm2)
                
                if (r14_2 != 0)
                    var_3f8[0] = temp0_720[0]
                
                if ((rbx_1.b & 2) == 0)
                    if ((rbx_1.b & 4) != 0)
                        goto label_14012910a
                    
                    goto label_14012c32e
                
                var_3f8[1] = __extractps_memd_xmmps_immb(temp0_720, 1)
                
                if ((rbx_1.b & 4) == 0)
                label_14012c32e:
                    
                    if ((rbx_1.b & 8) != 0)
                        var_3f8[3] = __extractps_memd_xmmps_immb(temp0_720, 3)
                else
                label_14012910a:
                    var_3f8[2] = __extractps_memd_xmmps_immb(temp0_720, 2)
                    
                    if ((rbx_1.b & 8) != 0)
                        var_3f8[3] = __extractps_memd_xmmps_immb(temp0_720, 3)
                
                var_368 = zmm13
                var_2c8 = zmm7
                var_2f8 = zmm7
                var_338 = zmm7
        
        zmm0 = var_428.o
        zmm2 = var_408
        float temp0_722[0x4] = _mm_unpacklo_ps(zmm2, var_3f8[0].q)
        float temp0_723[0x4] = _mm_unpackhi_ps(zmm2, var_3f8)
        zmm3 = _mm_unpacklo_ps(zmm0, var_418[0].q)
        float temp0_725[0x4] = _mm_unpackhi_ps(zmm0, var_418)
        zmm1 = zmm3[0].q | temp0_722[0].q << 0x40
        float var_1a8_1[0x4] = zmm1
        zmm3 = _mm_unpackhi_pd(zmm3, temp0_722[0].q)
        uint32_t var_198_1[0x4] = zmm3
        arg5 = temp0_725[0].q | temp0_723[0].q << 0x40
        float var_188_1[0x4] = arg5
        zmm0 = _mm_unpackhi_pd(temp0_725, temp0_723[0].q)
        r13[sx.q(var_2a8[0]) * 3] = zmm1
        r13[sx.q(_mm_extract_epi32(var_2a8, 2)) * 3] = zmm3
        r13[sx.q(var_298[0]) * 3] = arg5
        r13[sx.q(_mm_extract_epi32(var_298, 2)) * 3] = zmm0
        r15 += 4
        rsi_1 += 0x20
        arg7 = zmm7
        arg8 = zmm13
        arg5 = zmm15
        arg6 = _mm_cmpeq_epi32(arg6, arg6)
    while (r15 s< r10_4)

uint64_t i = zx.q(arg12)

if (r15 s< i.d)
    zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r15), 0), data_142e11d00)
    zmm11 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(i.d), 0), zmm0)
    zmm0 = _mm_slli_epi32(zmm0, 3) & zmm11
    int64_t rax_87 = sx.q(zmm0[0])
    int64_t rdx_49 = sx.q(_mm_extract_epi32(zmm0, 1))
    int64_t rbx_27 = sx.q(_mm_extract_epi32(zmm0, 2))
    int64_t rsi_32 = sx.q(_mm_extract_epi32(zmm0, 3))
    zmm12 = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(r12 + rax_87)), *(r12 + rdx_49), 1), *(r12 + rbx_27), 
            2), 
        *(r12 + rsi_32), 3)
    zmm0 = data_142fc95e0 & zmm11
    int32_t* rax_88 = zx.q(_mm_extract_epi32(zmm0, 1))
    int32_t* rdx_50 = zx.q(_mm_extract_epi32(zmm0, 2))
    int32_t* rbx_28 = zx.q(_mm_extract_epi32(zmm0, 3))
    int32_t temp0_747[0x4] = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(zx.q(zmm0[0]) + r12 + rax_87)), 
                *(rax_88 + r12 + rdx_49), 1), 
            *(rdx_50 + r12 + rbx_27), 2), 
        *(rbx_28 + r12 + rsi_32), 3)
    zmm0 = _mm_slli_epi32(temp0_747, 4) & zmm11
    zmm1 = data_142fc95f0 & zmm11
    int64_t rax_91 = sx.q(zmm0[0]) + arg3
    uint64_t r10_14 = zx.q(zmm1[0])
    int64_t rcx_43 = sx.q(_mm_extract_epi32(zmm0, 1))
    uint64_t rbx_29 = zx.q(_mm_extract_epi32(zmm1, 1))
    int64_t rcx_44 = rcx_43 + arg3
    int64_t rdx_52 = sx.q(_mm_extract_epi32(zmm0, 2))
    uint64_t rdi_37 = zx.q(_mm_extract_epi32(zmm1, 2))
    int64_t rdx_53 = rdx_52 + arg3
    int64_t rsi_36 = sx.q(_mm_extract_epi32(zmm0, 3)) + arg3
    uint64_t rbp_33 = zx.q(_mm_extract_epi32(zmm1, 3))
    zmm10 = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(r10_14 + rax_91)), *(rbx_29 + rcx_44), 1), 
            *(rdi_37 + rdx_53), 2), 
        *(rbp_33 + rsi_36), 3)
    zmm0 = data_143442650 & zmm11
    uint64_t rbp_34 = zx.q(_mm_extract_epi32(zmm0, 1))
    uint64_t rbx_30 = zx.q(_mm_extract_epi32(zmm0, 2))
    uint64_t rdi_38 = zx.q(zmm0[0])
    uint64_t r8_1 = zx.q(_mm_extract_epi32(zmm0, 3))
    zmm2 = __pinsrd_xmmdq_memd_immb(
        __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(zx.o(*(rdi_38 + rax_91)), *(rbp_34 + rcx_44), 1), 
            *(rbx_30 + rdx_53), 2), 
        *(r8_1 + rsi_36), 3)
    arg8 = _mm_cmpeq_epi32(data_142d3f5b0, zmm2)
    arg5 = arg8 & zmm11
    char temp0_765 = _mm_movemask_ps(arg5)
    float var_468[0x4]
    uint32_t var_458[0x4]
    float var_448[0x4]
    uint32_t var_438[0x4]
    
    if (temp0_765 != 0)
        var_2a8 = arg8
        var_358 = zmm11
        var_298 = zmm10
        zmm1 = arg5 & zmm10
        int64_t rdx_54 = sx.q(zmm1[0])
        void* rcx_46 = arg4 + rdx_54
        zmm0 = *(arg4 + rdx_54)
        int64_t rdx_56 = sx.q(_mm_extract_epi32(zmm1, 1))
        void* rbp_35 = arg4 + rdx_56
        zmm7 = *(arg4 + rdx_56)
        int64_t rbx_31 = sx.q(_mm_extract_epi32(zmm1, 2))
        void* rdx_58 = arg4 + rbx_31
        int32_t temp0_768 = _mm_extract_epi32(zmm1, 3)
        arg7 = *(arg4 + rbx_31)
        int64_t rbx_32 = sx.q(temp0_768)
        zmm1 = data_142fc95e0 & arg5
        zmm3 = *(zx.q(zmm1[0]) + rcx_46)
        uint64_t rdi_41 = zx.q(_mm_extract_epi32(zmm1, 1))
        arg6 = *(arg4 + rbx_32)
        arg8 = *(rdi_41 + rbp_35)
        void* rbx_33 = arg4 + rbx_32
        zmm11 = *(zx.q(_mm_extract_epi32(zmm1, 2)) + rdx_58)
        zmm8 = *(zx.q(_mm_extract_epi32(zmm1, 3)) + rbx_33)
        arg5 &= data_142fc95f0
        zmm15 = *(zx.q(arg5[0]) + rcx_46)
        zmm14 = *(zx.q(_mm_extract_epi32(arg5, 1)) + rbp_35)
        uint64_t rcx_48 = zx.q(_mm_extract_epi32(arg5, 2))
        float (* rbp_36)[0x4] = zx.q(_mm_extract_epi32(arg5, 3))
        zmm13 = *(rcx_48 + rdx_58)
        zmm10 = *(rbp_36 + rbx_33)
        
        if ((temp0_765 & 1) == 0)
            if ((temp0_765 & 2) != 0)
                goto label_14012c8e3
            
            goto label_14012c6de
        
        var_468[0] = zmm0[0]
        
        if ((temp0_765 & 2) != 0)
        label_14012c8e3:
            var_468[1] = zmm7[0]
            
            if ((temp0_765 & 4) == 0)
                goto label_14012c6e7
            
            goto label_14012c8f2
        
    label_14012c6de:
        
        if ((temp0_765 & 4) == 0)
        label_14012c6e7:
            
            if ((temp0_765 & 8) != 0)
                goto label_14012c901
            
            goto label_14012c6f0
        
    label_14012c8f2:
        var_468[2] = arg7[0]
        
        if ((temp0_765 & 8) != 0)
        label_14012c901:
            var_468[3] = arg6[0]
            zmm0 = _mm_insert_ps(zmm0, zmm7, 0x10)
            
            if ((temp0_765 & 1) == 0)
                goto label_14012c6ff
            
            goto label_14012c916
        
    label_14012c6f0:
        zmm0 = _mm_insert_ps(zmm0, zmm7, 0x10)
        
        if ((temp0_765 & 1) != 0)
        label_14012c916:
            var_458[0] = zmm3[0]
            zmm0 = _mm_insert_ps(zmm0, arg7, 0x20)
            zmm3 = _mm_insert_ps(zmm3, arg8, 0x10)
            
            if ((temp0_765 & 2) != 0)
                var_458[1] = arg8[0]
        else
        label_14012c6ff:
            zmm0 = _mm_insert_ps(zmm0, arg7, 0x20)
            zmm3 = _mm_insert_ps(zmm3, arg8, 0x10)
            
            if ((temp0_765 & 2) != 0)
                var_458[1] = arg8[0]
        
        float temp0_778[0x4] = _mm_insert_ps(zmm0, arg6, 0x30)
        zmm3 = _mm_insert_ps(zmm3, zmm11, 0x20)
        float temp0_780[0x4] = _mm_insert_ps(zmm15, zmm14, 0x10)
        
        if ((temp0_765 & 4) != 0)
            var_458[2] = zmm11[0]
        
        zmm3 = _mm_insert_ps(zmm3, zmm8, 0x30)
        float temp0_782[0x4] = _mm_insert_ps(temp0_780, zmm13, 0x20)
        float temp0_783[0x4] = _mm_mul_ps(temp0_778, temp0_778)
        zmm1 = data_142d3f670
        arg8 = var_2a8
        
        if ((temp0_765 & 8) != 0)
            var_458[3] = zmm8[0]
        
        float temp0_784[0x4] = _mm_insert_ps(temp0_782, zmm10, 0x30)
        float temp0_785[0x4] = _mm_sub_ps(zmm1, temp0_783)
        zmm3 = _mm_mul_ps(zmm3, zmm3)
        zmm11 = var_358
        
        if ((temp0_765 & 1) == 0)
            zmm1 = _mm_sub_ps(temp0_785, zmm3)
            arg5 = _mm_mul_ps(temp0_784, temp0_784)
            
            if ((temp0_765 & 2) != 0)
                goto label_14012c94d
            
            goto label_14012c799
        
        var_448[0] = zmm15[0]
        zmm1 = _mm_sub_ps(temp0_785, zmm3)
        arg5 = _mm_mul_ps(temp0_784, temp0_784)
        
        if ((temp0_765 & 2) != 0)
        label_14012c94d:
            var_448[1] = zmm14[0]
            zmm1 = _mm_sub_ps(zmm1, arg5)
            zmm0 = zx.o(0)
            
            if ((temp0_765 & 4) == 0)
                goto label_14012c7a8
            
            goto label_14012c963
        
    label_14012c799:
        zmm1 = _mm_sub_ps(zmm1, arg5)
        zmm0 = zx.o(0)
        
        if ((temp0_765 & 4) == 0)
        label_14012c7a8:
            zmm0 = _mm_cmpeq_ps(zmm0, zmm1, 1)
            zmm1 = _mm_sqrt_ps(zmm1)
            
            if ((temp0_765 & 8) != 0)
                goto label_14012c97a
            
            goto label_14012c7b8
        
    label_14012c963:
        var_448[2] = zmm13[0]
        zmm0 = _mm_cmpeq_ps(zmm0, zmm1, 1)
        zmm1 = _mm_sqrt_ps(zmm1)
        
        if ((temp0_765 & 8) != 0)
        label_14012c97a:
            var_448[3] = zmm10[0]
            zmm0 = _mm_and_ps(zmm0, zmm1)
            
            if ((temp0_765 & 1) == 0)
                goto label_14012c7c7
            
            goto label_14012c98d
        
    label_14012c7b8:
        zmm0 = _mm_and_ps(zmm0, zmm1)
        
        if ((temp0_765 & 1) == 0)
        label_14012c7c7:
            zmm10 = var_298
            
            if ((temp0_765 & 2) != 0)
                goto label_14012c9a6
            
            goto label_14012c7d7
        
    label_14012c98d:
        var_438[0] = zmm0[0]
        zmm10 = var_298
        
        if ((temp0_765 & 2) != 0)
        label_14012c9a6:
            var_438[1] = __extractps_memd_xmmps_immb(zmm0, 1)
            
            if ((temp0_765 & 4) == 0)
                goto label_14012c7e0
            
            goto label_14012c9b7
        
    label_14012c7d7:
        
        if ((temp0_765 & 4) != 0)
        label_14012c9b7:
            var_438[2] = __extractps_memd_xmmps_immb(zmm0, 2)
            
            if ((temp0_765 & 8) != 0)
                var_438[3] = __extractps_memd_xmmps_immb(zmm0, 3)
        else
        label_14012c7e0:
            
            if ((temp0_765 & 8) != 0)
                var_438[3] = __extractps_memd_xmmps_immb(zmm0, 3)
    
    arg8 &= not.o(zmm11)
    char temp0_794 = _mm_movemask_ps(arg8)
    
    if (temp0_794 != 0)
        uint32_t temp0_795[0x4] = _mm_shuffle_epi32(zmm10, 0x4e)
        zmm0 = _mm_slli_epi32(_mm_cmpgt_epi32(data_1434422d0, zmm2) & arg8, 0x1f)
        char temp0_798 = _mm_movemask_ps(zmm0)
        arg5 = zx.o(0)
        zmm1 = zx.o(0)
        
        if (temp0_798 == 0)
            goto label_14012c844
        
        arg6 = zx.o(0)
        zmm15 = zx.o(0)
        zmm14 = zx.o(0)
        
        if (temp0_794 != temp0_798)
            zmm0 = _mm_srai_epi32(zmm0, 0x1f)
            zmm1 = zmm0
        label_14012c844:
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            zmm1 ^= zmm0
            zmm7 = arg9
            arg6 = zx.o(0)
            zmm15 = zx.o(0)
            
            if (not(0f >= zmm7[0]))
                zmm2 = _mm_add_epi32(zmm2, zmm0)
                
                if (zmm7[0] >= 1f)
                    arg5 = zx.o(0)
                    arg6 = _mm_blendv_ps(zx.o(0), zmm2, zmm1 & arg8)
                    zmm15 = arg6
                else
                    float temp0_802[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
                    arg7 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_802)
                    zmm0 = zmm1 & arg8
                    float temp0_805[0x4] = _mm_round_ps(arg7, 9)
                    arg6 = _mm_blendv_ps(zx.o(0), _mm_min_epi32(_mm_cvttps_epi32(temp0_805), zmm2), 
                        zmm0)
                    arg5 = zx.o(0)
                    
                    if (arg10 != 1)
                        arg7 = _mm_sub_ps(arg7, temp0_805)
                        arg5 = arg7
                    
                    zmm15 = _mm_blendv_ps(zx.o(0), 
                        _mm_min_epi32(_mm_sub_epi32(arg6, _mm_cmpeq_epi32(arg7, arg7)), zmm2), zmm0)
            
            zmm14 = _mm_blendv_ps(zx.o(0), arg5, zmm1)
        
        zmm13 = _mm_cvtepi32_epi64(zmm10[0].q)
        zmm8 = _mm_cvtepi32_epi64(temp0_795[0].q)
        zmm7 = _mm_cvtepu32_epi64(_mm_shuffle_epi32(zx.o(rax), 0)[0].q)
        zmm0 = _mm_shuffle_epi32(zx.o(rcx_1), 0)
        uint64_t r10_15 = zx.q(r11.d)
        float var_318_3[0x4] = zmm13
        int32_t var_2d8_1[0x4] = zmm0
        
        if (r11.d u> 5)
            if ((temp0_794 & 1) == 0)
                if ((temp0_794 & 2) != 0)
                    goto label_14012dacb
                
                goto label_14012ccc4
            
            var_468[0] = 0
            
            if ((temp0_794 & 2) != 0)
            label_14012dacb:
                var_468[1] = 0
                
                if ((temp0_794 & 4) == 0)
                    goto label_14012cccc
                
                goto label_14012dadb
            
        label_14012ccc4:
            
            if ((temp0_794 & 4) == 0)
            label_14012cccc:
                
                if ((temp0_794 & 8) != 0)
                    goto label_14012daeb
                
                goto label_14012ccd4
            
        label_14012dadb:
            var_468[2] = 0
            
            if ((temp0_794 & 8) != 0)
            label_14012daeb:
                var_468[3] = 0
                
                if ((temp0_794 & 1) == 0)
                    goto label_14012ccdc
                
                goto label_14012dafb
            
        label_14012ccd4:
            
            if ((temp0_794 & 1) == 0)
            label_14012ccdc:
                
                if ((temp0_794 & 2) != 0)
                    goto label_14012db0b
                
                goto label_14012cce4
            
        label_14012dafb:
            var_458[0] = 0
            
            if ((temp0_794 & 2) != 0)
            label_14012db0b:
                var_458[1] = 0
                
                if ((temp0_794 & 4) == 0)
                    goto label_14012ccec
                
                goto label_14012db1b
            
        label_14012cce4:
            
            if ((temp0_794 & 4) == 0)
            label_14012ccec:
                
                if ((temp0_794 & 8) != 0)
                    goto label_14012db2b
                
                goto label_14012ccf4
            
        label_14012db1b:
            var_458[2] = 0
            
            if ((temp0_794 & 8) != 0)
            label_14012db2b:
                var_458[3] = 0
                
                if ((temp0_794 & 1) == 0)
                    goto label_14012ccfc
                
                goto label_14012db3b
            
        label_14012ccf4:
            
            if ((temp0_794 & 1) == 0)
            label_14012ccfc:
                
                if ((temp0_794 & 2) != 0)
                    goto label_14012db4b
                
                goto label_14012cd04
            
        label_14012db3b:
            var_448[0] = 0
            
            if ((temp0_794 & 2) != 0)
            label_14012db4b:
                var_448[1] = 0
                
                if ((temp0_794 & 4) == 0)
                    goto label_14012cd0c
                
                goto label_14012db5b
            
        label_14012cd04:
            
            if ((temp0_794 & 4) == 0)
            label_14012cd0c:
                
                if ((temp0_794 & 8) != 0)
                    goto label_14012db6b
                
                goto label_14012cd14
            
        label_14012db5b:
            var_448[2] = 0
            
            if ((temp0_794 & 8) != 0)
            label_14012db6b:
                var_448[3] = 0
                
                if ((temp0_794 & 1) == 0)
                    goto label_14012cd1c
                
                goto label_14012db7b
            
        label_14012cd14:
            
            if ((temp0_794 & 1) == 0)
            label_14012cd1c:
                
                if ((temp0_794 & 2) != 0)
                    goto label_14012db8b
                
                goto label_14012cd24
            
        label_14012db7b:
            var_438[0] = 0x3f800000
            
            if ((temp0_794 & 2) != 0)
            label_14012db8b:
                var_438[1] = 0x3f800000
                
                if ((temp0_794 & 4) == 0)
                    goto label_14012cd2c
                
                goto label_14012db9b
            
        label_14012cd24:
            
            if ((temp0_794 & 4) != 0)
            label_14012db9b:
                var_438[2] = 0x3f800000
                
                if ((temp0_794 & 8) != 0)
                    var_438[3] = 0x3f800000
            else
            label_14012cd2c:
                
                if ((temp0_794 & 8) != 0)
                    var_438[3] = 0x3f800000
        else
            zmm1 = _mm_mullo_epi32(arg6, zmm0)
            zmm0 = _mm_cvtepi32_epi64(zmm1[0].q)
            zmm3 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
            char rcx_53
            
            switch (r10_15)
                case 0
                    var_298[0].q = r10_15
                    zmm2 = _mm_add_epi64(zmm13, zmm7)
                    uint32_t var_368_1[0x4] = zmm8
                    arg5 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm7), zmm3)
                    zmm2 = _mm_add_epi64(zmm2, zmm0)
                    zmm1 = _mm_shuffle_epi32(arg8, 0x50)
                    float temp0_841[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                    zmm2 = _mm_shuffle_epi32(arg8, 0xfa)
                    float temp0_843[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                    int64_t rax_94 = _mm_extract_epi64(temp0_841, 1)
                    void* rbp_37 = arg4 + rax_94
                    int32_t r8_2 = *(arg4 + rax_94)
                    int64_t rax_95 = temp0_843[0].q
                    void* rdx_61 = arg4 + rax_95
                    int32_t r12_8 = *(arg4 + rax_95)
                    int64_t rax_96 = _mm_extract_epi64(temp0_843, 1)
                    zmm8 = data_1434426c0
                    float temp0_844[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm1)
                    void* rbx_34 = arg4 + rax_96
                    float temp0_845[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                    int32_t rax_97 = *(arg4 + rax_96)
                    void* r15_5 = temp0_841[0].q + arg4
                    int32_t r9_2 = *(_mm_extract_epi64(temp0_844, 1) + rbp_37)
                    int32_t r11_9 = *(temp0_845[0].q + rdx_61)
                    int32_t r14_12 = *(_mm_extract_epi64(temp0_845, 1) + rbx_34)
                    zmm8 = data_1434426e0
                    float temp0_846[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm1)
                    float temp0_847[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                    var_268[0] = *(_mm_extract_epi64(temp0_846, 1) + rbp_37)
                    int32_t* rdi_50 = temp0_847[0].q
                    int32_t* rsi_37 = _mm_extract_epi64(temp0_847, 1)
                    int32_t rdi_51 = *(rdi_50 + rdx_61)
                    int32_t rsi_38 = *(rsi_37 + rbx_34)
                    zmm8 = data_1434426f0
                    float temp0_848[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm1)
                    zmm3 = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                    var_358.d = *(_mm_extract_epi64(temp0_848, 1) + rbp_37)
                    var_2a8[0] = *(zmm3[0].q + rdx_61)
                    int32_t rbx_35 = *(_mm_extract_epi64(zmm3, 1) + rbx_34)
                    int32_t rdx_65 = *(temp0_844[0].q + r15_5)
                    int32_t r10_16 = *(temp0_846[0].q + r15_5)
                    int32_t rbp_41 = *(temp0_848[0].q + r15_5)
                    
                    if ((temp0_794 & 1) != 0)
                        var_468[0] = *r15_5
                    
                    if ((temp0_794 & 2) != 0)
                        var_468[1] = r8_2
                    
                    r13 = var_2e8
                    zmm8 = var_368_1
                    zmm7 = zmm7
                    
                    if ((temp0_794 & 4) == 0)
                        if ((temp0_794 & 8) != 0)
                            goto label_14012d9df
                        
                        goto label_14012cc28
                    
                    var_468[2] = r12_8
                    
                    if ((temp0_794 & 8) != 0)
                    label_14012d9df:
                        var_468[3] = rax_97
                        
                        if ((temp0_794 & 1) == 0)
                            goto label_14012cc31
                        
                        goto label_14012d9ec
                    
                label_14012cc28:
                    
                    if ((temp0_794 & 1) == 0)
                    label_14012cc31:
                        
                        if ((temp0_794 & 2) != 0)
                            goto label_14012d9f9
                        
                        goto label_14012cc3a
                    
                label_14012d9ec:
                    var_458[0] = rdx_65
                    
                    if ((temp0_794 & 2) != 0)
                    label_14012d9f9:
                        var_458[1] = r9_2
                        
                        if ((temp0_794 & 4) == 0)
                            goto label_14012cc43
                        
                        goto label_14012da07
                    
                label_14012cc3a:
                    
                    if ((temp0_794 & 4) == 0)
                    label_14012cc43:
                        
                        if ((temp0_794 & 8) != 0)
                            goto label_14012da15
                        
                        goto label_14012cc4f
                    
                label_14012da07:
                    var_458[2] = r11_9
                    
                    if ((temp0_794 & 8) != 0)
                    label_14012da15:
                        var_458[3] = r14_12
                        r11 = var_278
                        
                        if ((temp0_794 & 1) == 0)
                            goto label_14012cc5d
                        
                        goto label_14012da2b
                    
                label_14012cc4f:
                    r11 = var_278
                    
                    if ((temp0_794 & 1) == 0)
                    label_14012cc5d:
                        
                        if ((temp0_794 & 2) != 0)
                            goto label_14012da40
                        
                        goto label_14012cc69
                    
                label_14012da2b:
                    var_448[0] = r10_16
                    
                    if ((temp0_794 & 2) != 0)
                    label_14012da40:
                        var_448[1] = var_268[0]
                        r10_15 = var_298[0].q
                        
                        if ((temp0_794 & 4) == 0)
                            goto label_14012cc7a
                        
                        goto label_14012da55
                    
                label_14012cc69:
                    r10_15 = var_298[0].q
                    
                    if ((temp0_794 & 4) == 0)
                    label_14012cc7a:
                        arg4 = var_348
                        
                        if ((temp0_794 & 8) != 0)
                            goto label_14012da71
                        
                        goto label_14012cc88
                    
                label_14012da55:
                    var_448[2] = rdi_51
                    arg4 = var_348
                    
                    if ((temp0_794 & 8) != 0)
                    label_14012da71:
                        var_448[3] = rsi_38
                        
                        if ((temp0_794 & 1) == 0)
                            goto label_14012cc91
                        
                        goto label_14012da7e
                    
                label_14012cc88:
                    
                    if ((temp0_794 & 1) == 0)
                    label_14012cc91:
                        
                        if ((temp0_794 & 2) != 0)
                            goto label_14012da92
                        
                        goto label_14012cc9a
                    
                label_14012da7e:
                    var_438[0] = rbp_41
                    
                    if ((temp0_794 & 2) != 0)
                    label_14012da92:
                        var_438[1] = var_358.d
                        
                        if ((temp0_794 & 4) == 0)
                            goto label_14012cca3
                        
                        goto label_14012daa6
                    
                label_14012cc9a:
                    
                    if ((temp0_794 & 4) != 0)
                    label_14012daa6:
                        var_438[2] = var_2a8[0]
                        
                        if ((temp0_794 & 8) != 0)
                            var_438[3] = rbx_35
                    else
                    label_14012cca3:
                        
                        if ((temp0_794 & 8) != 0)
                            var_438[3] = rbx_35
                case 1
                    float var_268_1[0x4] = zmm15
                    var_298 = zmm10
                    float var_328_2[0x4] = zmm14
                    var_358 = zmm11
                    zmm2 = _mm_add_epi64(zmm13, zmm7)
                    uint32_t var_368_2[0x4] = zmm8
                    var_2b8.o = zmm7
                    arg5 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm7), zmm3)
                    zmm2 = _mm_add_epi64(zmm2, zmm0)
                    zmm1 = _mm_shuffle_epi32(arg8, 0x50)
                    float temp0_855[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                    var_2a8 = arg8
                    zmm2 = _mm_shuffle_epi32(arg8, 0xfa)
                    float temp0_857[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                    int64_t rdx_66 = temp0_855[0].q
                    void* rax_99 = arg4 + rdx_66
                    zmm3 = *(arg4 + rdx_66)
                    int64_t rdx_67 = _mm_extract_epi64(temp0_855, 1)
                    void* rbp_42 = arg4 + rdx_67
                    zmm8 = *(arg4 + rdx_67)
                    int64_t rbx_36 = temp0_857[0].q
                    void* rdx_68 = arg4 + rbx_36
                    zmm10 = *(arg4 + rbx_36)
                    int64_t rdi_52 = _mm_extract_epi64(temp0_857, 1)
                    void* rbx_37 = arg4 + rdi_52
                    arg8 = *(arg4 + rdi_52)
                    zmm7 = data_1434426c0
                    float temp0_858[0x4] = _mm_blendv_ps(zx.o(0), zmm7, zmm1)
                    float temp0_859[0x4] = _mm_blendv_ps(zx.o(0), zmm7, zmm2)
                    zmm7 = *(temp0_858[0].q + rax_99)
                    zmm15 = *(_mm_extract_epi64(temp0_858, 1) + rbp_42)
                    zmm11 = *(temp0_859[0].q + rdx_68)
                    float (* rdi_56)[0x4] = _mm_extract_epi64(temp0_859, 1)
                    arg5 = data_1434426e0
                    float temp0_860[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                    zmm14 = *(rdi_56 + rbx_37)
                    float temp0_861[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                    arg5 = *(temp0_860[0].q + rax_99)
                    zmm2 = *(_mm_extract_epi64(temp0_860, 1) + rbp_42)
                    float (* rax_101)[0x4] = temp0_861[0].q
                    float (* rbp_43)[0x4] = _mm_extract_epi64(temp0_861, 1)
                    arg7 = *(rax_101 + rdx_68)
                    float var_338_1[0x4] = *(rbp_43 + rbx_37)
                    
                    if ((temp0_794 & 1) == 0)
                        if ((temp0_794 & 2) != 0)
                            goto label_14012dbc6
                        
                        goto label_14012ceb7
                    
                    var_468[0] = zmm3[0]
                    
                    if ((temp0_794 & 2) != 0)
                    label_14012dbc6:
                        var_468[1] = zmm8[0]
                        
                        if ((temp0_794 & 4) == 0)
                            goto label_14012cec0
                        
                        goto label_14012dbd6
                    
                label_14012ceb7:
                    
                    if ((temp0_794 & 4) == 0)
                    label_14012cec0:
                        
                        if ((temp0_794 & 8) != 0)
                            goto label_14012dbe6
                        
                        goto label_14012cec9
                    
                label_14012dbd6:
                    var_468[2] = zmm10[0]
                    
                    if ((temp0_794 & 8) == 0)
                    label_14012cec9:
                        zmm3 = _mm_insert_ps(zmm3, zmm8, 0x10)
                        
                        if ((temp0_794 & 1) != 0)
                            var_458[0] = zmm7[0]
                    else
                    label_14012dbe6:
                        var_468[3] = arg8[0]
                        zmm3 = _mm_insert_ps(zmm3, zmm8, 0x10)
                        
                        if ((temp0_794 & 1) != 0)
                            var_458[0] = zmm7[0]
                    
                    zmm3 = _mm_insert_ps(zmm3, zmm10, 0x20)
                    float temp0_864[0x4] = _mm_insert_ps(zmm7, zmm15, 0x10)
                    zmm8 = var_368_2
                    
                    if ((temp0_794 & 2) != 0)
                        var_458[1] = zmm15[0]
                    
                    zmm3 = _mm_insert_ps(zmm3, arg8, 0x30)
                    float temp0_866[0x4] = _mm_insert_ps(temp0_864, zmm11, 0x20)
                    zmm0 = zmm2
                    float temp0_867[0x4] = _mm_insert_ps(arg5, zmm2, 0x10)
                    zmm10 = var_298
                    
                    if ((temp0_794 & 4) != 0)
                        var_458[2] = zmm11[0]
                    
                    float temp0_868[0x4] = _mm_insert_ps(temp0_866, zmm14, 0x30)
                    float var_2f8_1[0x4] = arg7
                    float temp0_869[0x4] = _mm_insert_ps(temp0_867, arg7, 0x20)
                    zmm3 = _mm_mul_ps(zmm3, zmm3)
                    arg7 = data_142d3f670
                    zmm2 = zmm14
                    zmm14 = var_328_2
                    arg8 = var_2a8
                    zmm15 = var_268_1
                    
                    if ((temp0_794 & 8) != 0)
                        var_458[3] = zmm2[0]
                    
                    float temp0_871[0x4] = __insertps_xmmps_memd_immb(temp0_869, var_338_1[0], 0x30)
                    float temp0_872[0x4] = _mm_sub_ps(arg7, zmm3)
                    float temp0_873[0x4] = _mm_mul_ps(temp0_868, temp0_868)
                    zmm11 = var_358
                    
                    if ((temp0_794 & 1) == 0)
                        arg7 = _mm_sub_ps(temp0_872, temp0_873)
                        arg5 = _mm_mul_ps(temp0_871, temp0_871)
                        
                        if ((temp0_794 & 2) != 0)
                            goto label_14012dc17
                        
                        goto label_14012cfab
                    
                    var_448[0] = arg5[0]
                    arg7 = _mm_sub_ps(temp0_872, temp0_873)
                    arg5 = _mm_mul_ps(temp0_871, temp0_871)
                    
                    if ((temp0_794 & 2) != 0)
                    label_14012dc17:
                        var_448[1] = zmm0[0]
                        arg7 = _mm_sub_ps(arg7, arg5)
                        zmm7 = var_2b8.o
                        
                        if ((temp0_794 & 4) == 0)
                            goto label_14012cfc0
                        
                        goto label_14012dc3a
                    
                label_14012cfab:
                    arg7 = _mm_sub_ps(arg7, arg5)
                    zmm7 = var_2b8.o
                    
                    if ((temp0_794 & 4) == 0)
                    label_14012cfc0:
                        zmm13 = _mm_cmpeq_ps(zx.o(0), arg7, 1)
                        zmm0 = _mm_sqrt_ps(arg7)
                        
                        if ((temp0_794 & 8) != 0)
                            goto label_14012dc59
                        
                        goto label_14012cfd1
                    
                label_14012dc3a:
                    var_448[2] = var_2f8_1[0]
                    zmm13 = _mm_cmpeq_ps(zx.o(0), arg7, 1)
                    zmm0 = _mm_sqrt_ps(arg7)
                    
                    if ((temp0_794 & 8) != 0)
                    label_14012dc59:
                        var_448[3] = var_338_1[0]
                        zmm13 = _mm_and_ps(zmm13, zmm0)
                        
                        if ((temp0_794 & 1) == 0)
                            goto label_14012cfde
                        
                        goto label_14012dc6c
                    
                label_14012cfd1:
                    zmm13 = _mm_and_ps(zmm13, zmm0)
                    
                    if ((temp0_794 & 1) == 0)
                    label_14012cfde:
                        
                        if ((temp0_794 & 2) != 0)
                            goto label_14012dc7c
                        
                        goto label_14012cfe7
                    
                label_14012dc6c:
                    var_438[0] = zmm13[0]
                    
                    if ((temp0_794 & 2) != 0)
                    label_14012dc7c:
                        var_438[1] = __extractps_memd_xmmps_immb(zmm13, 1)
                        
                        if ((temp0_794 & 4) == 0)
                            goto label_14012cff0
                        
                        goto label_14012dc8e
                    
                label_14012cfe7:
                    
                    if ((temp0_794 & 4) != 0)
                    label_14012dc8e:
                        var_438[2] = __extractps_memd_xmmps_immb(zmm13, 2)
                        
                        if ((temp0_794 & 8) != 0)
                            var_438[3] = __extractps_memd_xmmps_immb(zmm13, 3)
                    else
                    label_14012cff0:
                        
                        if ((temp0_794 & 8) != 0)
                            var_438[3] = __extractps_memd_xmmps_immb(zmm13, 3)
                case 2
                    zmm1 = _mm_add_epi64(zmm13, zmm7)
                    uint32_t var_368_3[0x4] = zmm8
                    var_2b8.o = zmm7
                    arg5 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm7), zmm3)
                    zmm1 = _mm_add_epi64(zmm1, zmm0)
                    zmm2 = _mm_shuffle_epi32(arg8, 0x50)
                    float temp0_885[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                    uint32_t temp0_886[0x4] = _mm_shuffle_epi32(arg8, 0xfa)
                    zmm3 = _mm_blendv_ps(zx.o(0), arg5, temp0_886)
                    int64_t rax_102 = temp0_885[0].q
                    void* rbp_44 = arg4 + rax_102
                    int64_t rdx_69 = _mm_extract_epi64(temp0_885, 1)
                    zmm7 = data_1434426b0
                    float temp0_888[0x4] = _mm_blendv_ps(zx.o(0), zmm7, zmm2)
                    void* rdi_58 = arg4 + rdx_69
                    float temp0_889[0x4] = _mm_blendv_ps(zx.o(0), zmm7, temp0_886)
                    int64_t rbx_38 = zmm3[0].q
                    zmm7 = zx.o(*(temp0_888[0].q + rbp_44))
                    int64_t rsi_44 = _mm_extract_epi64(temp0_888, 1)
                    zmm8 = data_1434426c0
                    float temp0_890[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                    zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, *(rsi_44 + rdi_58), 1)
                    void* rsi_46 = arg4 + rbx_38
                    arg7 = __pinsrw_xmmdq_memw_immb(zx.o(*(temp0_890[0].q + rbp_44)), 
                        *(_mm_extract_epi64(temp0_890, 1) + rdi_58), 1)
                    int64_t rbp_47 = _mm_extract_epi64(zmm3, 1)
                    int16_t* rdi_59 = temp0_889[0].q
                    float temp0_893[0x4] = _mm_blendv_ps(zx.o(0), zmm8, temp0_886)
                    zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, *(rdi_59 + rsi_46), 2)
                    arg7 = __pinsrw_xmmdq_memw_immb(arg7, *(temp0_893[0].q + rsi_46), 2)
                    void* rdi_61 = arg4 + rbp_47
                    zmm7 = __pinsrw_xmmdq_memw_immb(zmm7, 
                        *(_mm_extract_epi64(temp0_889, 1) + rdi_61), 3)
                    arg7 = __pinsrw_xmmdq_memw_immb(arg7, 
                        *(_mm_extract_epi64(temp0_893, 1) + rdi_61), 3)
                    zmm1 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_102)), *(arg4 + rdx_69), 1), 
                            *(arg4 + rbx_38), 2), 
                        *(arg4 + rbp_47), 3)[0].q)
                    zmm3 = data_1434424d0
                    float temp0_903[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm3))
                    arg5 = data_1434426d0
                    float temp0_904[0x4] = _mm_div_ps(temp0_903, arg5)
                    zmm1 = _mm_cvtepu16_epi32(zmm7[0].q)
                    
                    if ((temp0_794 & 1) != 0)
                        var_468[0] = temp0_904[0]
                    
                    zmm1 = _mm_add_epi32(zmm1, zmm3)
                    
                    if ((temp0_794 & 2) != 0)
                        var_468[1] = __extractps_memd_xmmps_immb(temp0_904, 1)
                    
                    float temp0_908[0x4] = _mm_cvtepi32_ps(zmm1)
                    arg8 = arg8
                    zmm8 = var_368_3
                    zmm7 = var_2b8.o
                    
                    if ((temp0_794 & 4) == 0)
                        zmm1 = _mm_div_ps(temp0_908, arg5)
                        
                        if ((temp0_794 & 8) != 0)
                            goto label_14012dcc1
                        
                        goto label_14012d1b3
                    
                    var_468[2] = __extractps_memd_xmmps_immb(temp0_904, 2)
                    zmm1 = _mm_div_ps(temp0_908, arg5)
                    
                    if ((temp0_794 & 8) != 0)
                    label_14012dcc1:
                        var_468[3] = __extractps_memd_xmmps_immb(temp0_904, 3)
                        arg7 = _mm_cvtepu16_epi32(arg7[0].q)
                        
                        if ((temp0_794 & 1) == 0)
                            goto label_14012d1c0
                        
                        goto label_14012dcd6
                    
                label_14012d1b3:
                    arg7 = _mm_cvtepu16_epi32(arg7[0].q)
                    
                    if ((temp0_794 & 1) == 0)
                    label_14012d1c0:
                        arg7 = _mm_add_epi32(arg7, zmm3)
                        
                        if ((temp0_794 & 2) != 0)
                            goto label_14012dce8
                        
                        goto label_14012d1cc
                    
                label_14012dcd6:
                    var_458[0] = zmm1[0]
                    arg7 = _mm_add_epi32(arg7, zmm3)
                    
                    if ((temp0_794 & 2) == 0)
                    label_14012d1cc:
                        zmm3 = _mm_cvtepi32_ps(arg7)
                        
                        if ((temp0_794 & 4) != 0)
                            var_458[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                    else
                    label_14012dce8:
                        var_458[1] = __extractps_memd_xmmps_immb(zmm1, 1)
                        zmm3 = _mm_cvtepi32_ps(arg7)
                        
                        if ((temp0_794 & 4) != 0)
                            var_458[2] = __extractps_memd_xmmps_immb(zmm1, 2)
                    
                    float temp0_914[0x4] = _mm_mul_ps(temp0_904, temp0_904)
                    arg7 = data_142d3f670
                    zmm3 = _mm_div_ps(zmm3, arg5)
                    
                    if ((temp0_794 & 8) != 0)
                        var_458[3] = __extractps_memd_xmmps_immb(zmm1, 3)
                    
                    float temp0_917[0x4] = _mm_sub_ps(arg7, temp0_914)
                    float temp0_918[0x4] = _mm_mul_ps(zmm1, zmm1)
                    
                    if ((temp0_794 & 1) != 0)
                        var_448[0] = zmm3[0]
                    
                    float temp0_919[0x4] = _mm_sub_ps(temp0_917, temp0_918)
                    float temp0_920[0x4] = _mm_mul_ps(zmm3, zmm3)
                    
                    if ((temp0_794 & 2) == 0)
                        arg7 = _mm_sub_ps(temp0_919, temp0_920)
                        
                        if ((temp0_794 & 4) != 0)
                            goto label_14012dd13
                        
                        goto label_14012d220
                    
                    var_448[1] = __extractps_memd_xmmps_immb(zmm3, 1)
                    arg7 = _mm_sub_ps(temp0_919, temp0_920)
                    
                    if ((temp0_794 & 4) != 0)
                    label_14012dd13:
                        var_448[2] = __extractps_memd_xmmps_immb(zmm3, 2)
                        zmm0 = _mm_cmpeq_ps(zx.o(0), arg7, 1)
                        zmm1 = _mm_sqrt_ps(arg7)
                        
                        if ((temp0_794 & 8) == 0)
                            goto label_14012d22f
                        
                        goto label_14012dd2a
                    
                label_14012d220:
                    zmm0 = _mm_cmpeq_ps(zx.o(0), arg7, 1)
                    zmm1 = _mm_sqrt_ps(arg7)
                    
                    if ((temp0_794 & 8) == 0)
                    label_14012d22f:
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((temp0_794 & 1) != 0)
                            goto label_14012dd3d
                        
                        goto label_14012d23a
                    
                label_14012dd2a:
                    var_448[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((temp0_794 & 1) != 0)
                    label_14012dd3d:
                        var_438[0] = zmm0[0]
                        
                        if ((temp0_794 & 2) == 0)
                            goto label_14012d242
                        
                        goto label_14012dd4b
                    
                label_14012d23a:
                    
                    if ((temp0_794 & 2) == 0)
                    label_14012d242:
                        
                        if ((temp0_794 & 4) != 0)
                            goto label_14012dd5b
                        
                        goto label_14012d24a
                    
                label_14012dd4b:
                    var_438[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                    
                    if ((temp0_794 & 4) == 0)
                    label_14012d24a:
                        
                        if ((temp0_794 & 8) != 0)
                            var_438[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                    else
                    label_14012dd5b:
                        var_438[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                        
                        if ((temp0_794 & 8) != 0)
                            var_438[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                case 3
                    float var_268_2[0x4] = zmm15
                    float var_328_3[0x4] = zmm14
                    arg7 = _mm_srai_epi32(_mm_slli_epi32(arg8, 0x1f), 0x1f)
                    var_298 = zmm10
                    zmm1 = arg7 & zmm10
                    int64_t rax_106 = sx.q(zmm1[0])
                    void* rdi_62 = arg4 + rax_106
                    zmm15 = *(arg4 + rax_106)
                    int64_t rdx_70 = sx.q(_mm_extract_epi32(zmm1, 1))
                    void* rax_108 = arg4 + rdx_70
                    int64_t rsi_49 = sx.q(_mm_extract_epi32(zmm1, 2))
                    void* rbx_39 = arg4 + rsi_49
                    int64_t rbp_50 = sx.q(_mm_extract_epi32(zmm1, 3))
                    void* r8_3 = arg4 + rbp_50
                    float temp0_932[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm15, *(arg4 + rdx_70), 0x10), 
                            *(arg4 + rsi_49), 0x20), 
                        *(arg4 + rbp_50), 0x30)
                    zmm1 = data_142fc95e0 & arg7
                    zmm2 = *(zx.q(zmm1[0]) + rdi_62)
                    uint64_t rdx_72 = zx.q(_mm_extract_epi32(zmm1, 1))
                    uint64_t rbp_51 = zx.q(_mm_extract_epi32(zmm1, 2))
                    uint64_t rsi_50 = zx.q(_mm_extract_epi32(zmm1, 3))
                    float temp0_938[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm2, *(rdx_72 + rax_108), 0x10), 
                            *(rbp_51 + rbx_39), 0x20), 
                        *(rsi_50 + r8_3), 0x30)
                    arg5 = data_142fc95f0 & arg7
                    zmm1 = arg8
                    arg8 = *(zx.q(arg5[0]) + rdi_62)
                    uint64_t rdx_74 = zx.q(_mm_extract_epi32(arg5, 1))
                    uint64_t rbp_52 = zx.q(_mm_extract_epi32(arg5, 2))
                    uint64_t rsi_51 = zx.q(_mm_extract_epi32(arg5, 3))
                    arg8 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(arg8, *(rdx_74 + rax_108), 0x10), 
                            *(rbp_52 + rbx_39), 0x20), 
                        *(rsi_51 + r8_3), 0x30)
                    arg5 = data_143442650 & arg7
                    zmm10 = *(zx.q(arg5[0]) + rdi_62)
                    uint64_t rdx_76 = zx.q(_mm_extract_epi32(arg5, 1))
                    uint64_t rbp_53 = zx.q(_mm_extract_epi32(arg5, 2))
                    uint64_t rsi_52 = zx.q(_mm_extract_epi32(arg5, 3))
                    float temp0_950[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm10, *(rdx_76 + rax_108), 0x10), 
                            *(rbp_53 + rbx_39), 0x20), 
                        *(rsi_52 + r8_3), 0x30)
                    arg5 = data_143442660 & arg7
                    zmm14 = zmm7
                    zmm7 = *(zx.q(arg5[0]) + rdi_62)
                    uint64_t rdx_78 = zx.q(_mm_extract_epi32(arg5, 1))
                    uint64_t rbp_54 = zx.q(_mm_extract_epi32(arg5, 2))
                    uint64_t rsi_53 = zx.q(_mm_extract_epi32(arg5, 3))
                    float temp0_956[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm7, *(rdx_78 + rax_108), 0x10), 
                            *(rbp_54 + rbx_39), 0x20), 
                        *(rsi_53 + r8_3), 0x30)
                    arg7 &= data_143442670
                    arg5 = zmm13
                    zmm13 = *(zx.q(arg7[0]) + rdi_62)
                    int32_t* rbp_55 = zx.q(_mm_extract_epi32(arg7, 1))
                    int32_t* rdi_63 = zx.q(_mm_extract_epi32(arg7, 2))
                    int32_t* rdx_80 = zx.q(_mm_extract_epi32(arg7, 3))
                    float temp0_961[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm13, *(rbp_55 + rax_108), 0x10), 
                        *(rdi_63 + rbx_39), 0x20)
                    arg5 = _mm_add_epi64(arg5, zmm14)
                    uint32_t var_368_4[0x4] = zmm8
                    var_2b8.o = zmm14
                    arg7 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm14), zmm3)
                    zmm3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, zmm0), 
                        _mm_shuffle_epi32(zmm1, 0x50))
                    var_2a8 = zmm1
                    float temp0_969[0x4] =
                        _mm_blendv_ps(zx.o(0), arg7, _mm_shuffle_epi32(zmm1, 0xfa))
                    int64_t rax_109 = zmm3[0].q
                    int64_t rbp_56 = _mm_extract_epi64(zmm3, 1)
                    int64_t rbx_40 = temp0_969[0].q
                    int64_t rdi_64 = _mm_extract_epi64(temp0_969, 1)
                    zmm1 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_109)), *(arg4 + rbp_56), 1), 
                            *(arg4 + rbx_40), 2), 
                        *(arg4 + rdi_64), 3)
                    zmm0 = _mm_srli_epi32(zmm1, 0x15)
                    arg7 = data_143442440
                    zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, arg7))
                    zmm8 = data_143442690
                    zmm3 = _mm_mul_ps(_mm_div_ps(zmm3, zmm8), temp0_950)
                    float temp0_978[0x4] =
                        __insertps_xmmps_memd_immb(temp0_961, *(rdx_80 + r8_3), 0x30)
                    zmm3 = _mm_add_ps(zmm3, temp0_932)
                    float temp0_982[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(
                        _mm_srli_epi32(zmm1, 0xa) & data_143442480, arg7))
                    rcx_53 = temp0_794
                    
                    if ((rcx_53 & 1) != 0)
                        var_468[0] = zmm3[0]
                    
                    float temp0_983[0x4] = _mm_div_ps(temp0_982, zmm8)
                    
                    if ((rcx_53 & 2) != 0)
                        var_468[1] = __extractps_memd_xmmps_immb(zmm3, 1)
                    
                    zmm1 &= data_143442680
                    float temp0_985[0x4] = _mm_mul_ps(temp0_956, temp0_983)
                    zmm14 = var_328_3
                    zmm10 = var_298
                    zmm8 = var_368_4
                    zmm15 = var_268_2
                    
                    if ((rcx_53 & 4) == 0)
                        zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                        zmm2 = _mm_add_ps(temp0_938, temp0_985)
                        
                        if ((rcx_53 & 8) != 0)
                            goto label_14012dd8c
                        
                        goto label_14012d55c
                    
                    var_468[2] = __extractps_memd_xmmps_immb(zmm3, 2)
                    zmm1 = __paddd_xmmdq_memdq(zmm1, data_143442490)
                    zmm2 = _mm_add_ps(temp0_938, temp0_985)
                    
                    if ((rcx_53 & 8) != 0)
                    label_14012dd8c:
                        var_468[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                        arg5 = _mm_cvtepi32_ps(zmm1)
                        zmm7 = var_2b8.o
                        
                        if ((rcx_53 & 1) == 0)
                            goto label_14012d571
                        
                        goto label_14012dda9
                    
                label_14012d55c:
                    arg5 = _mm_cvtepi32_ps(zmm1)
                    zmm7 = var_2b8.o
                    
                    if ((rcx_53 & 1) == 0)
                    label_14012d571:
                        arg5 = __divps_xmmps_memps(arg5, data_1434426a0)
                        
                        if ((rcx_53 & 2) != 0)
                            goto label_14012ddbf
                        
                        goto label_14012d581
                    
                label_14012dda9:
                    var_458[0] = zmm2[0]
                    arg5 = __divps_xmmps_memps(arg5, data_1434426a0)
                    
                    if ((rcx_53 & 2) == 0)
                    label_14012d581:
                        zmm13 = _mm_mul_ps(temp0_978, arg5)
                        
                        if ((rcx_53 & 4) != 0)
                            var_458[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                    else
                    label_14012ddbf:
                        var_458[1] = __extractps_memd_xmmps_immb(zmm2, 1)
                        zmm13 = _mm_mul_ps(temp0_978, arg5)
                        
                        if ((rcx_53 & 4) != 0)
                            var_458[2] = __extractps_memd_xmmps_immb(zmm2, 2)
                    
                    zmm3 = _mm_mul_ps(zmm3, zmm3)
                    arg5 = data_142d3f670
                    arg8 = _mm_add_ps(arg8, zmm13)
                    
                    if ((rcx_53 & 8) != 0)
                        var_458[3] = __extractps_memd_xmmps_immb(zmm2, 3)
                    
                    float temp0_995[0x4] = _mm_sub_ps(arg5, zmm3)
                    float temp0_996[0x4] = _mm_mul_ps(zmm2, zmm2)
                    
                    if ((rcx_53 & 1) != 0)
                        var_448[0] = arg8[0]
                    
                    float temp0_997[0x4] = _mm_sub_ps(temp0_995, temp0_996)
                    float temp0_998[0x4] = _mm_mul_ps(arg8, arg8)
                    
                    if ((rcx_53 & 2) == 0)
                        arg5 = _mm_sub_ps(temp0_997, temp0_998)
                        
                        if ((rcx_53 & 4) != 0)
                            goto label_14012ddee
                        
                        goto label_14012d5df
                    
                    var_448[1] = __extractps_memd_xmmps_immb(arg8, 1)
                    arg5 = _mm_sub_ps(temp0_997, temp0_998)
                    
                    if ((rcx_53 & 4) != 0)
                    label_14012ddee:
                        var_448[2] = __extractps_memd_xmmps_immb(arg8, 2)
                        zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                        zmm2 = _mm_sqrt_ps(arg5)
                        
                        if ((rcx_53 & 8) == 0)
                            goto label_14012d5ef
                        
                        goto label_14012de07
                    
                label_14012d5df:
                    zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                    zmm2 = _mm_sqrt_ps(arg5)
                    
                    if ((rcx_53 & 8) == 0)
                    label_14012d5ef:
                        zmm0 = _mm_and_ps(zmm0, zmm2)
                        
                        if ((rcx_53 & 1) != 0)
                            goto label_14012de1c
                        
                        goto label_14012d5fe
                    
                label_14012de07:
                    var_448[3] = __extractps_memd_xmmps_immb(arg8, 3)
                    zmm0 = _mm_and_ps(zmm0, zmm2)
                    
                    if ((rcx_53 & 1) != 0)
                    label_14012de1c:
                        var_438[0] = zmm0[0]
                        arg8 = var_2a8
                        
                        if ((rcx_53 & 2) == 0)
                            goto label_14012df2a
                        
                        goto label_14012d60d
                    
                label_14012d5fe:
                    arg8 = var_2a8
                    
                    if ((rcx_53 & 2) != 0)
                    label_14012d60d:
                        var_438[1] = __extractps_memd_xmmps_immb(zmm0, 1)
                        
                        if ((rcx_53 & 4) == 0)
                            goto label_14012df33
                        
                        goto label_14012d61e
                    
                label_14012df2a:
                    
                    if ((rcx_53 & 4) != 0)
                    label_14012d61e:
                        var_438[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                        
                        if ((rcx_53 & 8) != 0)
                            var_438[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                    else
                    label_14012df33:
                        
                        if ((rcx_53 & 8) != 0)
                            var_438[3] = __extractps_memd_xmmps_immb(zmm0, 3)
                case 4
                    zmm1 = _mm_add_epi64(zmm13, zmm7)
                    zmm2 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm7), zmm3)
                    zmm3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), 
                        _mm_shuffle_epi32(arg8, 0x50))
                    float temp0_1012[0x4] =
                        _mm_blendv_ps(zx.o(0), zmm2, _mm_shuffle_epi32(arg8, 0xfa))
                    int64_t rax_110 = zmm3[0].q
                    int64_t rdx_81 = _mm_extract_epi64(zmm3, 1)
                    int64_t rbp_57 = _mm_extract_epi64(temp0_1012, 1)
                    zmm2 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_110)), *(arg4 + rdx_81), 1), 
                            *(arg4 + temp0_1012[0].q), 2), 
                        *(arg4 + rbp_57), 3)
                    zmm3 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                    zmm1 = _mm_srli_epi32(zmm2, 0x15)
                    arg7 = data_143442440
                    float temp0_1019[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, arg7))
                    arg5 = data_143442690
                    float temp0_1020[0x4] = _mm_div_ps(temp0_1019, arg5)
                    rcx_53 = temp0_794
                    
                    if ((rcx_53 & 1) == 0)
                        zmm3 = _mm_add_epi32(zmm3, arg7)
                        
                        if ((rcx_53 & 2) != 0)
                            goto label_14012de4b
                        
                        goto label_14012d6f1
                    
                    var_468[0] = temp0_1020[0]
                    zmm3 = _mm_add_epi32(zmm3, arg7)
                    
                    if ((rcx_53 & 2) != 0)
                    label_14012de4b:
                        var_468[1] = __extractps_memd_xmmps_immb(temp0_1020, 1)
                        zmm3 = _mm_cvtepi32_ps(zmm3)
                        
                        if ((rcx_53 & 4) == 0)
                            goto label_14012d6fd
                        
                        goto label_14012de5f
                    
                label_14012d6f1:
                    zmm3 = _mm_cvtepi32_ps(zmm3)
                    
                    if ((rcx_53 & 4) == 0)
                    label_14012d6fd:
                        zmm3 = _mm_div_ps(zmm3, arg5)
                        
                        if ((rcx_53 & 8) != 0)
                            goto label_14012de73
                        
                        goto label_14012d709
                    
                label_14012de5f:
                    var_468[2] = __extractps_memd_xmmps_immb(temp0_1020, 2)
                    zmm3 = _mm_div_ps(zmm3, arg5)
                    
                    if ((rcx_53 & 8) != 0)
                    label_14012de73:
                        var_468[3] = __extractps_memd_xmmps_immb(temp0_1020, 3)
                        zmm2 &= data_143442680
                        
                        if ((rcx_53 & 1) == 0)
                            goto label_14012d71a
                        
                        goto label_14012de8c
                    
                label_14012d709:
                    zmm2 &= data_143442680
                    
                    if ((rcx_53 & 1) == 0)
                    label_14012d71a:
                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                        
                        if ((rcx_53 & 2) != 0)
                            goto label_14012dea3
                        
                        goto label_14012d72b
                    
                label_14012de8c:
                    var_458[0] = zmm3[0]
                    zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                    
                    if ((rcx_53 & 2) == 0)
                    label_14012d72b:
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rcx_53 & 4) != 0)
                            var_458[2] = __extractps_memd_xmmps_immb(zmm3, 2)
                    else
                    label_14012dea3:
                        var_458[1] = __extractps_memd_xmmps_immb(zmm3, 1)
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rcx_53 & 4) != 0)
                            var_458[2] = __extractps_memd_xmmps_immb(zmm3, 2)
                    
                    float temp0_1027[0x4] = _mm_mul_ps(temp0_1020, temp0_1020)
                    arg5 = data_142d3f670
                    float temp0_1028[0x4] = __divps_xmmps_memps(zmm2, data_1434426a0)
                    
                    if ((rcx_53 & 8) != 0)
                        var_458[3] = __extractps_memd_xmmps_immb(zmm3, 3)
                    
                    float temp0_1030[0x4] = _mm_sub_ps(arg5, temp0_1027)
                    zmm3 = _mm_mul_ps(zmm3, zmm3)
                    
                    if ((rcx_53 & 1) != 0)
                        var_448[0] = temp0_1028[0]
                    
                    float temp0_1032[0x4] = _mm_sub_ps(temp0_1030, zmm3)
                    float temp0_1033[0x4] = _mm_mul_ps(temp0_1028, temp0_1028)
                    
                    if ((rcx_53 & 2) == 0)
                        arg5 = _mm_sub_ps(temp0_1032, temp0_1033)
                        
                        if ((rcx_53 & 4) != 0)
                            goto label_14012ded0
                        
                        goto label_14012d788
                    
                    var_448[1] = __extractps_memd_xmmps_immb(temp0_1028, 1)
                    arg5 = _mm_sub_ps(temp0_1032, temp0_1033)
                    
                    if ((rcx_53 & 4) != 0)
                    label_14012ded0:
                        var_448[2] = __extractps_memd_xmmps_immb(temp0_1028, 2)
                        zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                        zmm1 = _mm_sqrt_ps(arg5)
                        
                        if ((rcx_53 & 8) == 0)
                            goto label_14012df15
                        
                        goto label_14012d798
                    
                label_14012d788:
                    zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                    zmm1 = _mm_sqrt_ps(arg5)
                    
                    if ((rcx_53 & 8) != 0)
                    label_14012d798:
                        var_448[3] = __extractps_memd_xmmps_immb(temp0_1028, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if ((rcx_53 & 1) == 0)
                            goto label_14012df21
                        
                        goto label_14012d7ac
                    
                label_14012df15:
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((rcx_53 & 1) == 0)
                    label_14012df21:
                        
                        if ((rcx_53 & 2) != 0)
                            goto label_14012d60d
                        
                        goto label_14012df2a
                    
                label_14012d7ac:
                    var_438[0] = zmm0[0]
                    
                    if ((rcx_53 & 2) == 0)
                        goto label_14012df2a
                    
                    goto label_14012d60d
                case 5
                    float var_268_3[0x4] = zmm15
                    zmm1 = _mm_add_epi64(zmm13, zmm7)
                    uint32_t var_368_5[0x4] = zmm8
                    zmm15 = zmm7
                    zmm2 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm7), zmm3)
                    zmm3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm1, zmm0), 
                        _mm_shuffle_epi32(arg8, 0x50))
                    zmm13 = arg8
                    float temp0_1046[0x4] =
                        _mm_blendv_ps(zx.o(0), zmm2, _mm_shuffle_epi32(arg8, 0xfa))
                    int64_t rax_111 = zmm3[0].q
                    int64_t rdx_82 = _mm_extract_epi64(zmm3, 1)
                    int64_t rbp_58 = temp0_1046[0].q
                    int64_t rbx_42 = _mm_extract_epi64(temp0_1046, 1)
                    zmm1 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_111)), *(arg4 + rdx_82), 1), 
                            *(arg4 + rbp_58), 2), 
                        *(arg4 + rbx_42), 3)
                    zmm2 = _mm_srli_epi32(zmm1, 0x15)
                    uint32_t temp0_1051[0x4] = _mm_srli_epi32(zmm1, 5)
                    arg8 = data_143442600
                    arg7 = data_143442610
                    arg5 = data_143442320
                    zmm8 = data_143442330
                    zmm2 = _mm_add_epi32(zmm2 & arg5, zmm8) | (zmm2 & arg7) | (temp0_1051 & arg8)
                    rcx_53 = temp0_794
                    
                    if ((rcx_53 & 1) != 0)
                        var_468[0] = zmm2[0]
                    
                    zmm7 = _mm_srli_epi32(zmm1, 0xa)
                    uint32_t temp0_1054[0x4] = _mm_slli_epi32(zmm1, 6)
                    
                    if ((rcx_53 & 2) != 0)
                        var_468[1] = __pextrd_memd_xmmdq_immb(zmm2, 1)
                    
                    if ((rcx_53 & 4) != 0)
                        var_468[2] = __pextrd_memd_xmmdq_immb(zmm2, 2)
                    
                    int32_t temp0_1057[0x4] = _mm_add_epi32(arg5 & zmm7, zmm8)
                    zmm3 = (temp0_1054 & arg8) | (arg7 & zmm7)
                    arg8 = zmm13
                    zmm7 = zmm15
                    
                    if ((rcx_53 & 8) != 0)
                        var_468[3] = __pextrd_memd_xmmdq_immb(zmm2, 3)
                    
                    zmm3 |= temp0_1057
                    zmm8 = var_368_5
                    zmm15 = var_268_3
                    
                    if ((rcx_53 & 1) != 0)
                        var_458[0] = zmm3[0]
                    
                    arg7 = data_143442620 & zmm1
                    
                    if ((rcx_53 & 2) != 0)
                        var_458[1] = __pextrd_memd_xmmdq_immb(zmm3, 1)
                    
                    arg5 = zmm1
                    zmm1 &= data_143442640
                    arg5 = _mm_slli_epi32(arg5, 0x11)
                    arg7 = __paddd_xmmdq_memdq(arg7, data_1434423a0)
                    
                    if ((rcx_53 & 4) != 0)
                        var_458[2] = __pextrd_memd_xmmdq_immb(zmm3, 2)
                    
                    arg5 &= data_143442630
                    zmm1 |= arg7
                    float temp0_1063[0x4] = _mm_mul_ps(zmm2, zmm2)
                    arg7 = data_142d3f670
                    
                    if ((rcx_53 & 8) != 0)
                        var_458[3] = __pextrd_memd_xmmdq_immb(zmm3, 3)
                    
                    arg5 |= zmm1
                    float temp0_1065[0x4] = _mm_sub_ps(arg7, temp0_1063)
                    zmm3 = _mm_mul_ps(zmm3, zmm3)
                    
                    if ((rcx_53 & 1) != 0)
                        var_448[0] = arg5[0]
                    
                    float temp0_1067[0x4] = _mm_sub_ps(temp0_1065, zmm3)
                    float temp0_1068[0x4] = _mm_mul_ps(arg5, arg5)
                    
                    if ((rcx_53 & 2) == 0)
                        arg7 = _mm_sub_ps(temp0_1067, temp0_1068)
                        
                        if ((rcx_53 & 4) != 0)
                            goto label_14012defd
                        
                        goto label_14012d9bc
                    
                    var_448[1] = __pextrd_memd_xmmdq_immb(arg5, 1)
                    arg7 = _mm_sub_ps(temp0_1067, temp0_1068)
                    
                    if ((rcx_53 & 4) == 0)
                    label_14012d9bc:
                        zmm0 = _mm_cmpeq_ps(zx.o(0), arg7, 1)
                        zmm1 = _mm_sqrt_ps(arg7)
                        
                        if ((rcx_53 & 8) == 0)
                            goto label_14012df15
                    else
                    label_14012defd:
                        var_448[2] = __pextrd_memd_xmmdq_immb(arg5, 2)
                        zmm0 = _mm_cmpeq_ps(zx.o(0), arg7, 1)
                        zmm1 = _mm_sqrt_ps(arg7)
                        
                        if ((rcx_53 & 8) == 0)
                            goto label_14012df15
                    
                    var_448[3] = __pextrd_memd_xmmdq_immb(arg5, 3)
                    zmm0 = _mm_and_ps(zmm0, zmm1)
                    
                    if ((rcx_53 & 1) == 0)
                        goto label_14012df21
                    
                    goto label_14012d7ac
        
        int32_t temp0_1136[0x4] =
            _mm_srai_epi32(_mm_slli_epi32(_mm_cmpeq_epi32(arg6, zmm15) & not.o(arg8), 0x1f), 0x1f)
        char temp0_1137 = _mm_movemask_ps(temp0_1136)
        
        if (temp0_1137 != 0)
            float var_3e8
            uint32_t var_3d8
            float var_3c8
            float var_3b8
            uint64_t rcx_55
            int64_t rdx_92
            
            if (r11.d u> 5)
                rcx_55 = zx.q(temp0_1137)
                rdx_92 = rcx_55 & 1
                
                if (rdx_92 == 0)
                    if ((rcx_55.b & 2) != 0)
                        goto label_14012f3de
                    
                    goto label_14012ecde
                
                var_3e8 = 0f
                
                if ((rcx_55.b & 2) != 0)
                label_14012f3de:
                    int32_t var_3e4_7 = 0
                    
                    if ((rcx_55.b & 4) == 0)
                        goto label_14012ece7
                    
                    goto label_14012f3f2
                
            label_14012ecde:
                
                if ((rcx_55.b & 4) == 0)
                label_14012ece7:
                    
                    if ((rcx_55.b & 8) != 0)
                        goto label_14012f406
                    
                    goto label_14012ecf0
                
            label_14012f3f2:
                int32_t var_3e0_7 = 0
                
                if ((rcx_55.b & 8) != 0)
                label_14012f406:
                    int32_t var_3dc_7 = 0
                    
                    if (rdx_92 == 0)
                        goto label_14012ecf9
                    
                    goto label_14012f41a
                
            label_14012ecf0:
                
                if (rdx_92 == 0)
                label_14012ecf9:
                    
                    if ((rcx_55.b & 2) != 0)
                        goto label_14012f42e
                    
                    goto label_14012ed02
                
            label_14012f41a:
                var_3d8 = 0
                
                if ((rcx_55.b & 2) != 0)
                label_14012f42e:
                    int32_t var_3d4_7 = 0
                    
                    if ((rcx_55.b & 4) == 0)
                        goto label_14012ed0b
                    
                    goto label_14012f442
                
            label_14012ed02:
                
                if ((rcx_55.b & 4) == 0)
                label_14012ed0b:
                    
                    if ((rcx_55.b & 8) != 0)
                        goto label_14012f456
                    
                    goto label_14012ed14
                
            label_14012f442:
                int32_t var_3d0_7 = 0
                
                if ((rcx_55.b & 8) != 0)
                label_14012f456:
                    int32_t var_3cc_7 = 0
                    
                    if (rdx_92 == 0)
                        goto label_14012ed1d
                    
                    goto label_14012f46a
                
            label_14012ed14:
                
                if (rdx_92 == 0)
                label_14012ed1d:
                    
                    if ((rcx_55.b & 2) != 0)
                        goto label_14012f47e
                    
                    goto label_14012ed26
                
            label_14012f46a:
                var_3c8 = 0f
                
                if ((rcx_55.b & 2) != 0)
                label_14012f47e:
                    int32_t var_3c4_7 = 0
                    
                    if ((rcx_55.b & 4) == 0)
                        goto label_14012ed2f
                    
                    goto label_14012f492
                
            label_14012ed26:
                
                if ((rcx_55.b & 4) == 0)
                label_14012ed2f:
                    
                    if ((rcx_55.b & 8) != 0)
                        goto label_14012f4a6
                    
                    goto label_14012ed38
                
            label_14012f492:
                int32_t var_3c0_7 = 0
                
                if ((rcx_55.b & 8) != 0)
                label_14012f4a6:
                    int32_t var_3bc_6 = 0
                    
                    if (rdx_92 == 0)
                        goto label_14012ed41
                    
                    goto label_14012f4ba
                
            label_14012ed38:
                
                if (rdx_92 == 0)
                label_14012ed41:
                    
                    if ((rcx_55.b & 2) != 0)
                        goto label_14012f4ce
                    
                    goto label_14012ed4a
                
            label_14012f4ba:
                var_3b8 = 1f
                
                if ((rcx_55.b & 2) != 0)
                label_14012f4ce:
                    int32_t var_3b4_5 = 0x3f800000
                    
                    if ((rcx_55.b & 4) == 0)
                        goto label_14012ed53
                    
                    goto label_14012f4e2
                
            label_14012ed4a:
                int32_t var_3ac_5
                
                if ((rcx_55.b & 4) != 0)
                label_14012f4e2:
                    int32_t var_3b0_5 = 0x3f800000
                    
                    if ((rcx_55.b & 8) != 0)
                        var_3ac_5 = 0x3f800000
                else
                label_14012ed53:
                    
                    if ((rcx_55.b & 8) != 0)
                        var_3ac_5 = 0x3f800000
            else
                zmm15 = __pmulld_xmmdq_memdq(zmm15, var_2d8_1)
                zmm0 = _mm_cvtepi32_epi64(zmm15[0].q)
                zmm3 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm15, 0x4e)[0].q)
                
                switch (r10_15)
                    case 0
                        zmm2 = _mm_add_epi64(var_318_3, zmm7)
                        zmm8 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm7), zmm3)
                        zmm2 = _mm_add_epi64(zmm2, zmm0)
                        zmm1 = _mm_shuffle_epi32(temp0_1136, 0x50)
                        float temp0_1147[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        zmm2 = _mm_shuffle_epi32(temp0_1136, 0xfa)
                        float temp0_1149[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                        int64_t rax_116 = _mm_extract_epi64(temp0_1147, 1)
                        void* rdx_85 = arg4 + rax_116
                        int32_t rbx_43 = *(arg4 + rax_116)
                        int64_t rax_117 = temp0_1149[0].q
                        void* rdi_65 = arg4 + rax_117
                        int32_t r11_10 = *(arg4 + rax_117)
                        int64_t rbp_59 = _mm_extract_epi64(temp0_1149, 1)
                        arg6 = data_1434426c0
                        float temp0_1150[0x4] = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                        void* rsi_54 = arg4 + rbp_59
                        float temp0_1151[0x4] = _mm_blendv_ps(zx.o(0), arg6, zmm2)
                        int32_t r15_6 = *(arg4 + rbp_59)
                        void* r10_18 = temp0_1147[0].q + arg4
                        int32_t r14_13 = *(_mm_extract_epi64(temp0_1150, 1) + rdx_85)
                        int32_t r9_3 = *(temp0_1151[0].q + rdi_65)
                        int32_t r12_9 = *(_mm_extract_epi64(temp0_1151, 1) + rsi_54)
                        arg6 = data_1434426e0
                        float temp0_1152[0x4] = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                        float temp0_1153[0x4] = _mm_blendv_ps(zx.o(0), arg6, zmm2)
                        var_2d8_1[0] = *(_mm_extract_epi64(temp0_1152, 1) + rdx_85)
                        int32_t* rax_123 = temp0_1153[0].q
                        int32_t* rbp_60 = _mm_extract_epi64(temp0_1153, 1)
                        var_318_3[0] = *(rax_123 + rdi_65)
                        var_358.d = *(rbp_60 + rsi_54)
                        arg6 = data_1434426f0
                        float temp0_1154[0x4] = _mm_blendv_ps(zx.o(0), arg6, zmm1)
                        zmm3 = _mm_blendv_ps(zx.o(0), arg6, zmm2)
                        var_2a8[0] = *(_mm_extract_epi64(temp0_1154, 1) + rdx_85)
                        var_298[0] = *(zmm3[0].q + rdi_65)
                        int32_t rbp_62 = *(_mm_extract_epi64(zmm3, 1) + rsi_54)
                        rcx_55 = zx.q(temp0_1137)
                        rdx_92 = rcx_55 & 1
                        
                        if (rdx_92 == 0)
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012ed91
                            
                            goto label_14012e115
                        
                        var_3e8 = *r10_18
                        
                        if ((rcx_55.b & 2) != 0)
                        label_14012ed91:
                            int32_t var_3e4_2 = rbx_43
                            
                            if ((rcx_55.b & 4) == 0)
                                goto label_14012e11e
                            
                            goto label_14012eda1
                        
                    label_14012e115:
                        
                        if ((rcx_55.b & 4) != 0)
                        label_14012eda1:
                            int32_t var_3e0_1 = r11_10
                            
                            if ((rcx_55.b & 8) != 0)
                            label_14012edb2:
                                int32_t var_3dc_1 = r15_6
                                
                                if (rdx_92 == 0)
                                    goto label_14012e133
                                
                                goto label_14012edc3
                        else
                        label_14012e11e:
                            
                            if ((rcx_55.b & 8) != 0)
                                goto label_14012edb2
                        
                        if (rdx_92 == 0)
                        label_14012e133:
                            r13 = var_2e8
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012eddb
                            
                            goto label_14012e141
                        
                    label_14012edc3:
                        var_3d8 = *(temp0_1150[0].q + r10_18)
                        r13 = var_2e8
                        
                        if ((rcx_55.b & 2) != 0)
                        label_14012eddb:
                            int32_t var_3d4_3 = r14_13
                            
                            if ((rcx_55.b & 4) == 0)
                                goto label_14012e14a
                            
                            goto label_14012edec
                        
                    label_14012e141:
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012e14a:
                            
                            if ((rcx_55.b & 8) != 0)
                                goto label_14012edfd
                            
                            goto label_14012e153
                        
                    label_14012edec:
                        int32_t var_3d0_6 = r9_3
                        
                        if ((rcx_55.b & 8) != 0)
                        label_14012edfd:
                            int32_t var_3cc_6 = r12_9
                            
                            if (rdx_92 == 0)
                                goto label_14012e15c
                            
                            goto label_14012ee0e
                        
                    label_14012e153:
                        
                        if (rdx_92 == 0)
                        label_14012e15c:
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012ee26
                            
                            goto label_14012e165
                        
                    label_14012ee0e:
                        var_3c8 = *(temp0_1152[0].q + r10_18)
                        
                        if ((rcx_55.b & 2) != 0)
                        label_14012ee26:
                            int32_t var_3c4_1 = var_2d8_1[0]
                            
                            if ((rcx_55.b & 4) == 0)
                                goto label_14012e16e
                            
                            goto label_14012ee3d
                        
                    label_14012e165:
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012e16e:
                            
                            if ((rcx_55.b & 8) != 0)
                                goto label_14012ee54
                            
                            goto label_14012e177
                        
                    label_14012ee3d:
                        float var_3c0_1 = var_318_3[0]
                        
                        if ((rcx_55.b & 8) != 0)
                        label_14012ee54:
                            int32_t var_3bc_1 = var_358.d
                            
                            if (rdx_92 == 0)
                                goto label_14012e180
                            
                            goto label_14012ee64
                        
                    label_14012e177:
                        
                        if (rdx_92 == 0)
                        label_14012e180:
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012ee7b
                            
                            goto label_14012e189
                        
                    label_14012ee64:
                        var_3b8 = *(temp0_1154[0].q + r10_18)
                        
                        if ((rcx_55.b & 2) != 0)
                        label_14012ee7b:
                            float var_3b4_1 = var_2a8[0]
                            
                            if ((rcx_55.b & 4) == 0)
                                goto label_14012e192
                            
                            goto label_14012ee92
                        
                    label_14012e189:
                        int32_t var_3ac_1
                        
                        if ((rcx_55.b & 4) != 0)
                        label_14012ee92:
                            float var_3b0_1 = var_298[0]
                            
                            if ((rcx_55.b & 8) != 0)
                                var_3ac_1 = rbp_62
                        else
                        label_14012e192:
                            
                            if ((rcx_55.b & 8) != 0)
                                var_3ac_1 = rbp_62
                    case 1
                        float var_328_4[0x4] = zmm14
                        float var_358_1[0x4] = zmm11
                        zmm2 = _mm_add_epi64(var_318_3, zmm7)
                        zmm8 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm7), zmm3)
                        zmm2 = _mm_add_epi64(zmm2, zmm0)
                        zmm1 = _mm_shuffle_epi32(temp0_1136, 0x50)
                        float temp0_1161[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                        zmm2 = _mm_shuffle_epi32(temp0_1136, 0xfa)
                        float temp0_1163[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                        int64_t rdx_93 = temp0_1161[0].q
                        void* rax_128 = arg4 + rdx_93
                        arg6 = *(arg4 + rdx_93)
                        int64_t rdx_94 = _mm_extract_epi64(temp0_1161, 1)
                        void* rbp_63 = arg4 + rdx_94
                        zmm14 = *(arg4 + rdx_94)
                        int64_t rbx_44 = temp0_1163[0].q
                        void* rdx_95 = arg4 + rbx_44
                        zmm13 = *(arg4 + rbx_44)
                        int64_t rdi_67 = _mm_extract_epi64(temp0_1163, 1)
                        void* rbx_45 = arg4 + rdi_67
                        zmm11 = *(arg4 + rdi_67)
                        arg7 = data_1434426c0
                        float temp0_1164[0x4] = _mm_blendv_ps(zx.o(0), arg7, zmm1)
                        float temp0_1165[0x4] = _mm_blendv_ps(zx.o(0), arg7, zmm2)
                        arg7 = *(temp0_1164[0].q + rax_128)
                        zmm15 = *(_mm_extract_epi64(temp0_1164, 1) + rbp_63)
                        arg8 = *(temp0_1165[0].q + rdx_95)
                        uint32_t (* rdi_71)[0x4] = _mm_extract_epi64(temp0_1165, 1)
                        arg5 = data_1434426e0
                        float temp0_1166[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm1)
                        zmm8 = *(rdi_71 + rbx_45)
                        float temp0_1167[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                        zmm0 = *(temp0_1166[0].q + rax_128)
                        zmm2 = *(_mm_extract_epi64(temp0_1166, 1) + rbp_63)
                        float (* rax_130)[0x4] = temp0_1167[0].q
                        float (* rbp_64)[0x4] = _mm_extract_epi64(temp0_1167, 1)
                        zmm10 = *(rax_130 + rdx_95)
                        zmm1 = *(rbp_64 + rbx_45)
                        rcx_55 = zx.q(temp0_1137)
                        rdx_92 = rcx_55 & 1
                        
                        if (rdx_92 == 0)
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012eec0
                            
                            goto label_14012e2eb
                        
                        var_3e8 = arg6[0]
                        
                        if ((rcx_55.b & 2) != 0)
                        label_14012eec0:
                            float var_3e4_3 = zmm14[0]
                            
                            if ((rcx_55.b & 4) == 0)
                                goto label_14012e2f4
                            
                            goto label_14012eed3
                        
                    label_14012e2eb:
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012e2f4:
                            
                            if ((rcx_55.b & 8) != 0)
                                goto label_14012eee6
                            
                            goto label_14012e2fd
                        
                    label_14012eed3:
                        float var_3e0_2 = zmm13[0]
                        
                        if ((rcx_55.b & 8) != 0)
                        label_14012eee6:
                            float var_3dc_2 = zmm11[0]
                            arg6 = _mm_insert_ps(arg6, zmm14, 0x10)
                            
                            if (rdx_92 == 0)
                                goto label_14012e30d
                            
                            goto label_14012ef00
                        
                    label_14012e2fd:
                        arg6 = _mm_insert_ps(arg6, zmm14, 0x10)
                        float var_3d4_1
                        
                        if (rdx_92 != 0)
                        label_14012ef00:
                            var_3d8 = arg7[0]
                            arg6 = _mm_insert_ps(arg6, zmm13, 0x20)
                            arg7 = _mm_insert_ps(arg7, zmm15, 0x10)
                            
                            if ((rcx_55.b & 2) != 0)
                                var_3d4_1 = zmm15[0]
                        else
                        label_14012e30d:
                            arg6 = _mm_insert_ps(arg6, zmm13, 0x20)
                            arg7 = _mm_insert_ps(arg7, zmm15, 0x10)
                            
                            if ((rcx_55.b & 2) != 0)
                                var_3d4_1 = zmm15[0]
                        arg6 = _mm_insert_ps(arg6, zmm11, 0x30)
                        float temp0_1172[0x4] = _mm_insert_ps(arg7, arg8, 0x20)
                        float temp0_1173[0x4] = _mm_insert_ps(zmm0, zmm2, 0x10)
                        
                        if ((rcx_55.b & 4) != 0)
                            uint32_t var_3d0_1 = arg8[0]
                        
                        float temp0_1174[0x4] = _mm_insert_ps(temp0_1172, zmm8, 0x30)
                        float temp0_1175[0x4] = _mm_insert_ps(temp0_1173, zmm10, 0x20)
                        arg6 = _mm_mul_ps(arg6, arg6)
                        zmm7 = data_142d3f670
                        zmm11 = var_358_1
                        zmm14 = var_328_4
                        
                        if ((rcx_55.b & 8) != 0)
                            uint32_t var_3cc_1 = zmm8[0]
                        
                        float temp0_1177[0x4] = _mm_insert_ps(temp0_1175, zmm1, 0x30)
                        float temp0_1178[0x4] = _mm_sub_ps(zmm7, arg6)
                        float temp0_1179[0x4] = _mm_mul_ps(temp0_1174, temp0_1174)
                        
                        if (rdx_92 == 0)
                            zmm7 = _mm_sub_ps(temp0_1178, temp0_1179)
                            arg5 = _mm_mul_ps(temp0_1177, temp0_1177)
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012ef3d
                            
                            goto label_14012e3ae
                        
                        var_3c8 = zmm0[0]
                        zmm7 = _mm_sub_ps(temp0_1178, temp0_1179)
                        arg5 = _mm_mul_ps(temp0_1177, temp0_1177)
                        
                        if ((rcx_55.b & 2) != 0)
                        label_14012ef3d:
                            float var_3c4_2 = zmm2[0]
                            zmm7 = _mm_sub_ps(zmm7, arg5)
                            
                            if ((rcx_55.b & 4) == 0)
                                goto label_14012e3ba
                            
                            goto label_14012ef52
                        
                    label_14012e3ae:
                        zmm7 = _mm_sub_ps(zmm7, arg5)
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012e3ba:
                            zmm3 = _mm_cmpeq_ps(zx.o(0), zmm7, 1)
                            zmm0 = _mm_sqrt_ps(zmm7)
                            
                            if ((rcx_55.b & 8) != 0)
                                goto label_14012ef6c
                            
                            goto label_14012e3ca
                        
                    label_14012ef52:
                        float var_3c0_2 = zmm10[0]
                        zmm3 = _mm_cmpeq_ps(zx.o(0), zmm7, 1)
                        zmm0 = _mm_sqrt_ps(zmm7)
                        
                        if ((rcx_55.b & 8) != 0)
                        label_14012ef6c:
                            float var_3bc_2 = zmm1[0]
                            zmm3 = _mm_and_ps(zmm3, zmm0)
                            
                            if (rdx_92 == 0)
                                goto label_14012e3d6
                            
                            goto label_14012ef81
                        
                    label_14012e3ca:
                        zmm3 = _mm_and_ps(zmm3, zmm0)
                        
                        if (rdx_92 == 0)
                        label_14012e3d6:
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012ef93
                            
                            goto label_14012e3df
                        
                    label_14012ef81:
                        var_3b8 = zmm3[0]
                        
                        if ((rcx_55.b & 2) != 0)
                        label_14012ef93:
                            int32_t var_3b4_2 = __extractps_memd_xmmps_immb(zmm3, 1)
                            
                            if ((rcx_55.b & 4) == 0)
                                goto label_14012e3e8
                            
                            goto label_14012efa7
                        
                    label_14012e3df:
                        int32_t var_3ac_2
                        
                        if ((rcx_55.b & 4) != 0)
                        label_14012efa7:
                            int32_t var_3b0_2 = __extractps_memd_xmmps_immb(zmm3, 2)
                            
                            if ((rcx_55.b & 8) != 0)
                                var_3ac_2 = __extractps_memd_xmmps_immb(zmm3, 3)
                        else
                        label_14012e3e8:
                            
                            if ((rcx_55.b & 8) != 0)
                                var_3ac_2 = __extractps_memd_xmmps_immb(zmm3, 3)
                    case 2
                        zmm1 = _mm_add_epi64(var_318_3, zmm7)
                        zmm8 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm7), zmm3)
                        zmm1 = _mm_add_epi64(zmm1, zmm0)
                        zmm2 = _mm_shuffle_epi32(temp0_1136, 0x50)
                        float temp0_1191[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        zmm1 = _mm_shuffle_epi32(temp0_1136, 0xfa)
                        zmm3 = _mm_blendv_ps(zx.o(0), zmm8, zmm1)
                        int64_t rax_131 = temp0_1191[0].q
                        int64_t rdx_97 = _mm_extract_epi64(temp0_1191, 1)
                        arg7 = data_1434426b0
                        arg6 = _mm_blendv_ps(zx.o(0), arg7, zmm2)
                        void* rbp_65 = arg4 + rax_131
                        float temp0_1195[0x4] = _mm_blendv_ps(zx.o(0), arg7, zmm1)
                        void* rbx_46 = arg4 + rdx_97
                        arg7 = zx.o(*(arg6[0].q + rbp_65))
                        int64_t rdi_75 = _mm_extract_epi64(arg6, 1)
                        zmm8 = data_1434426c0
                        float temp0_1196[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm2)
                        arg7 = __pinsrw_xmmdq_memw_immb(arg7, *(rdi_75 + rbx_46), 1)
                        int64_t rdi_77 = zmm3[0].q
                        int32_t temp0_1198[0x4] = __pinsrw_xmmdq_memw_immb(
                            zx.o(*(temp0_1196[0].q + rbp_65)), 
                            *(_mm_extract_epi64(temp0_1196, 1) + rbx_46), 1)
                        void* rbp_68 = arg4 + rdi_77
                        float temp0_1199[0x4] = _mm_blendv_ps(zx.o(0), zmm8, zmm1)
                        arg7 = __pinsrw_xmmdq_memw_immb(arg7, *(temp0_1195[0].q + rbp_68), 2)
                        int32_t temp0_1201[0x4] =
                            __pinsrw_xmmdq_memw_immb(temp0_1198, *(temp0_1199[0].q + rbp_68), 2)
                        zmm1 = __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_131)), *(arg4 + rdx_97), 1), 
                            *(arg4 + rdi_77), 2)
                        int64_t rax_133 = _mm_extract_epi64(zmm3, 1)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(arg4 + rax_133), 3)
                        void* rax_134 = arg4 + rax_133
                        arg7 = __pinsrw_xmmdq_memw_immb(arg7, 
                            *(_mm_extract_epi64(temp0_1195, 1) + rax_134), 3)
                        int32_t temp0_1206[0x4] = __pinsrw_xmmdq_memw_immb(temp0_1201, 
                            *(_mm_extract_epi64(temp0_1199, 1) + rax_134), 3)
                        zmm1 = _mm_cvtepu16_epi32(zmm1[0].q)
                        zmm3 = data_1434424d0
                        float temp0_1209[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm3))
                        arg5 = data_1434426d0
                        float temp0_1210[0x4] = _mm_div_ps(temp0_1209, arg5)
                        zmm2 = _mm_cvtepu16_epi32(arg7[0].q)
                        rcx_55 = zx.q(temp0_1137)
                        rdx_92 = rcx_55 & 1
                        
                        if (rdx_92 == 0)
                            zmm2 = _mm_add_epi32(zmm2, zmm3)
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012efe1
                            
                            goto label_14012e567
                        
                        var_3e8 = temp0_1210[0]
                        zmm2 = _mm_add_epi32(zmm2, zmm3)
                        
                        if ((rcx_55.b & 2) != 0)
                        label_14012efe1:
                            int32_t var_3e4_4 = __extractps_memd_xmmps_immb(temp0_1210, 1)
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rcx_55.b & 4) == 0)
                                goto label_14012e573
                            
                            goto label_14012eff8
                        
                    label_14012e567:
                        zmm2 = _mm_cvtepi32_ps(zmm2)
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012e573:
                            zmm2 = _mm_div_ps(zmm2, arg5)
                            
                            if ((rcx_55.b & 8) != 0)
                                goto label_14012f00f
                            
                            goto label_14012e57f
                        
                    label_14012eff8:
                        int32_t var_3e0_3 = __extractps_memd_xmmps_immb(temp0_1210, 2)
                        zmm2 = _mm_div_ps(zmm2, arg5)
                        
                        if ((rcx_55.b & 8) != 0)
                        label_14012f00f:
                            int32_t var_3dc_3 = __extractps_memd_xmmps_immb(temp0_1210, 3)
                            arg6 = _mm_cvtepu16_epi32(temp0_1206[0].q)
                            
                            if (rdx_92 == 0)
                                goto label_14012e58d
                            
                            goto label_14012f028
                        
                    label_14012e57f:
                        arg6 = _mm_cvtepu16_epi32(temp0_1206[0].q)
                        
                        if (rdx_92 == 0)
                        label_14012e58d:
                            arg6 = _mm_add_epi32(arg6, zmm3)
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012f03e
                            
                            goto label_14012e59a
                        
                    label_14012f028:
                        var_3d8 = zmm2[0]
                        arg6 = _mm_add_epi32(arg6, zmm3)
                        int32_t var_3d0_2
                        
                        if ((rcx_55.b & 2) == 0)
                        label_14012e59a:
                            zmm3 = _mm_cvtepi32_ps(arg6)
                            
                            if ((rcx_55.b & 4) != 0)
                                var_3d0_2 = __extractps_memd_xmmps_immb(zmm2, 2)
                        else
                        label_14012f03e:
                            int32_t var_3d4_4 = __extractps_memd_xmmps_immb(zmm2, 1)
                            zmm3 = _mm_cvtepi32_ps(arg6)
                            
                            if ((rcx_55.b & 4) != 0)
                                var_3d0_2 = __extractps_memd_xmmps_immb(zmm2, 2)
                        float temp0_1219[0x4] = _mm_mul_ps(temp0_1210, temp0_1210)
                        arg6 = data_142d3f670
                        zmm3 = _mm_div_ps(zmm3, arg5)
                        
                        if ((rcx_55.b & 8) != 0)
                            int32_t var_3cc_2 = __extractps_memd_xmmps_immb(zmm2, 3)
                        
                        arg6 = _mm_sub_ps(arg6, temp0_1219)
                        float temp0_1223[0x4] = _mm_mul_ps(zmm2, zmm2)
                        
                        if (rdx_92 != 0)
                            var_3c8 = zmm3[0]
                        
                        arg6 = _mm_sub_ps(arg6, temp0_1223)
                        float temp0_1225[0x4] = _mm_mul_ps(zmm3, zmm3)
                        
                        if ((rcx_55.b & 2) == 0)
                            arg6 = _mm_sub_ps(arg6, temp0_1225)
                            
                            if ((rcx_55.b & 4) != 0)
                                goto label_14012f071
                            
                            goto label_14012e5fc
                        
                        int32_t var_3c4_3 = __extractps_memd_xmmps_immb(zmm3, 1)
                        arg6 = _mm_sub_ps(arg6, temp0_1225)
                        
                        if ((rcx_55.b & 4) != 0)
                        label_14012f071:
                            int32_t var_3c0_3 = __extractps_memd_xmmps_immb(zmm3, 2)
                            zmm0 = _mm_cmpeq_ps(zx.o(0), arg6, 1)
                            zmm1 = _mm_sqrt_ps(arg6)
                            
                            if ((rcx_55.b & 8) == 0)
                                goto label_14012f393
                            
                            goto label_14012f08c
                        
                    label_14012e5fc:
                        zmm0 = _mm_cmpeq_ps(zx.o(0), arg6, 1)
                        zmm1 = _mm_sqrt_ps(arg6)
                        
                        if ((rcx_55.b & 8) == 0)
                        label_14012f393:
                            zmm0 = _mm_and_ps(zmm0, zmm1)
                            
                            if (rdx_92 != 0)
                                goto label_14012f0a3
                            
                            goto label_14012f39f
                        
                    label_14012f08c:
                        int32_t var_3bc_3 = __extractps_memd_xmmps_immb(zmm3, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if (rdx_92 != 0)
                        label_14012f0a3:
                            var_3b8 = zmm0[0]
                            
                            if ((rcx_55.b & 2) == 0)
                                goto label_14012f3a8
                            
                            goto label_14012f0b5
                        
                    label_14012f39f:
                        
                        if ((rcx_55.b & 2) == 0)
                        label_14012f3a8:
                            
                            if ((rcx_55.b & 4) != 0)
                                goto label_14012f0c9
                            
                            goto label_14012f3b1
                        
                    label_14012f0b5:
                        int32_t var_3b4_3 = __extractps_memd_xmmps_immb(zmm0, 1)
                        int32_t var_3ac_4
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012f3b1:
                            
                            if ((rcx_55.b & 8) != 0)
                                var_3ac_4 = __extractps_memd_xmmps_immb(zmm0, 3)
                        else
                        label_14012f0c9:
                            int32_t var_3b0_3 = __extractps_memd_xmmps_immb(zmm0, 2)
                            
                            if ((rcx_55.b & 8) != 0)
                                var_3ac_4 = __extractps_memd_xmmps_immb(zmm0, 3)
                    case 3
                        zmm15 = zmm14
                        zmm10 &= temp0_1136
                        int64_t rax_136 = sx.q(zmm10[0])
                        void* rbx_49 = arg4 + rax_136
                        zmm13 = *(arg4 + rax_136)
                        int64_t rdi_78 = sx.q(_mm_extract_epi32(zmm10, 1))
                        void* r8_5 = arg4 + rdi_78
                        int64_t rsi_56 = sx.q(_mm_extract_epi32(zmm10, 2))
                        void* rdx_102 = arg4 + rsi_56
                        int64_t rax_138 = sx.q(_mm_extract_epi32(zmm10, 3))
                        void* rbp_70 = arg4 + rax_138
                        float temp0_1234[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm13, *(arg4 + rdi_78), 0x10), 
                                *(arg4 + rsi_56), 0x20), 
                            *(arg4 + rax_138), 0x30)
                        zmm1 = data_142fc95e0 & temp0_1136
                        zmm14 = *(zx.q(zmm1[0]) + rbx_49)
                        uint64_t rax_140 = zx.q(_mm_extract_epi32(zmm1, 1))
                        uint64_t rdi_79 = zx.q(_mm_extract_epi32(zmm1, 2))
                        uint64_t rsi_57 = zx.q(_mm_extract_epi32(zmm1, 3))
                        float temp0_1240[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm14, *(rax_140 + r8_5), 0x10), 
                                *(rdi_79 + rdx_102), 0x20), 
                            *(rsi_57 + rbp_70), 0x30)
                        zmm1 = data_142fc95f0 & temp0_1136
                        arg8 = zmm8
                        zmm8 = *(zx.q(zmm1[0]) + rbx_49)
                        uint64_t rax_142 = zx.q(_mm_extract_epi32(zmm1, 1))
                        uint64_t rdi_80 = zx.q(_mm_extract_epi32(zmm1, 2))
                        uint64_t rsi_58 = zx.q(_mm_extract_epi32(zmm1, 3))
                        zmm8 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm8, *(rax_142 + r8_5), 0x10), 
                                *(rdi_80 + rdx_102), 0x20), 
                            *(rsi_58 + rbp_70), 0x30)
                        arg5 = data_143442650 & temp0_1136
                        zmm1 = *(zx.q(arg5[0]) + rbx_49)
                        uint64_t rax_144 = zx.q(_mm_extract_epi32(arg5, 1))
                        uint64_t rdi_81 = zx.q(_mm_extract_epi32(arg5, 2))
                        uint64_t rsi_59 = zx.q(_mm_extract_epi32(arg5, 3))
                        float temp0_1252[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(rax_144 + r8_5), 0x10), 
                                *(rdi_81 + rdx_102), 0x20), 
                            *(rsi_59 + rbp_70), 0x30)
                        arg5 = data_143442660 & temp0_1136
                        arg7 = *(zx.q(arg5[0]) + rbx_49)
                        uint64_t rax_146 = zx.q(_mm_extract_epi32(arg5, 1))
                        uint64_t rdi_82 = zx.q(_mm_extract_epi32(arg5, 2))
                        int32_t* rsi_60 = zx.q(_mm_extract_epi32(arg5, 3))
                        float temp0_1258[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg7, *(rax_146 + r8_5), 0x10), 
                                *(rdi_82 + rdx_102), 0x20), 
                            *(rsi_60 + rbp_70), 0x30)
                        arg5 = data_143442670 & temp0_1136
                        zmm2 = *(zx.q(arg5[0]) + rbx_49)
                        uint64_t rax_148 = zx.q(_mm_extract_epi32(arg5, 1))
                        int32_t* rbx_50 = zx.q(_mm_extract_epi32(arg5, 2))
                        int32_t* rdi_83 = zx.q(_mm_extract_epi32(arg5, 3))
                        float temp0_1264[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm2, *(rax_148 + r8_5), 0x10), 
                                *(rbx_50 + rdx_102), 0x20), 
                            *(rdi_83 + rbp_70), 0x30)
                        arg5 = _mm_add_epi64(var_318_3, zmm7)
                        arg8 = _mm_add_epi64(_mm_add_epi64(arg8, zmm7), zmm3)
                        zmm3 = _mm_blendv_ps(zx.o(0), _mm_add_epi64(arg5, zmm0), 
                            _mm_shuffle_epi32(temp0_1136, 0x50))
                        float temp0_1272[0x4] =
                            _mm_blendv_ps(zx.o(0), arg8, _mm_shuffle_epi32(temp0_1136, 0xfa))
                        int64_t rax_149 = zmm3[0].q
                        int64_t rdx_103 = _mm_extract_epi64(zmm3, 1)
                        int64_t rbp_71 = _mm_extract_epi64(temp0_1272, 1)
                        int32_t temp0_1275[0x4] = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_149)), 
                                    *(arg4 + rdx_103), 1), 
                                *(arg4 + temp0_1272[0].q), 2), 
                            *(arg4 + rbp_71), 3)
                        arg5 = _mm_srli_epi32(temp0_1275, 0xa) & data_143442480
                        uint32_t temp0_1277[0x4] = _mm_srli_epi32(temp0_1275, 0x15)
                        zmm0 = data_143442440
                        zmm3 = _mm_cvtepi32_ps(_mm_add_epi32(temp0_1277, zmm0))
                        arg8 = data_143442690
                        zmm3 =
                            _mm_add_ps(_mm_mul_ps(_mm_div_ps(zmm3, arg8), temp0_1252), temp0_1234)
                        float temp0_1284[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                        rcx_55 = zx.q(temp0_1137)
                        rdx_92 = rcx_55 & 1
                        
                        if (rdx_92 == 0)
                            zmm1 = _mm_div_ps(temp0_1284, arg8)
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012f0f8
                            
                            goto label_14012e87b
                        
                        var_3e8 = zmm3[0]
                        zmm1 = _mm_div_ps(temp0_1284, arg8)
                        
                        if ((rcx_55.b & 2) != 0)
                        label_14012f0f8:
                            int32_t var_3e4_5 = __extractps_memd_xmmps_immb(zmm3, 1)
                            arg6 = temp0_1275 & data_143442680
                            arg7 = _mm_mul_ps(temp0_1258, zmm1)
                            
                            if ((rcx_55.b & 4) == 0)
                                goto label_14012e88f
                            
                            goto label_14012f117
                        
                    label_14012e87b:
                        arg6 = temp0_1275 & data_143442680
                        arg7 = _mm_mul_ps(temp0_1258, zmm1)
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012e88f:
                            arg6 = __paddd_xmmdq_memdq(arg6, data_143442490)
                            zmm14 = _mm_add_ps(temp0_1240, arg7)
                            
                            if ((rcx_55.b & 8) != 0)
                                goto label_14012f137
                            
                            goto label_14012e8a4
                        
                    label_14012f117:
                        int32_t var_3e0_4 = __extractps_memd_xmmps_immb(zmm3, 2)
                        arg6 = __paddd_xmmdq_memdq(arg6, data_143442490)
                        zmm14 = _mm_add_ps(temp0_1240, arg7)
                        
                        if ((rcx_55.b & 8) != 0)
                        label_14012f137:
                            int32_t var_3dc_4 = __extractps_memd_xmmps_immb(zmm3, 3)
                            zmm1 = _mm_cvtepi32_ps(arg6)
                            
                            if (rdx_92 == 0)
                                goto label_14012e8b0
                            
                            goto label_14012f14e
                        
                    label_14012e8a4:
                        zmm1 = _mm_cvtepi32_ps(arg6)
                        
                        if (rdx_92 == 0)
                        label_14012e8b0:
                            zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012f168
                            
                            goto label_14012e8c0
                        
                    label_14012f14e:
                        var_3d8 = zmm14[0]
                        zmm1 = __divps_xmmps_memps(zmm1, data_1434426a0)
                        int32_t var_3d0_3
                        
                        if ((rcx_55.b & 2) == 0)
                        label_14012e8c0:
                            zmm2 = _mm_mul_ps(temp0_1264, zmm1)
                            
                            if ((rcx_55.b & 4) != 0)
                                var_3d0_3 = __extractps_memd_xmmps_immb(zmm14, 2)
                        else
                        label_14012f168:
                            int32_t var_3d4_5 = __extractps_memd_xmmps_immb(zmm14, 1)
                            zmm2 = _mm_mul_ps(temp0_1264, zmm1)
                            
                            if ((rcx_55.b & 4) != 0)
                                var_3d0_3 = __extractps_memd_xmmps_immb(zmm14, 2)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        zmm1 = data_142d3f670
                        zmm8 = _mm_add_ps(zmm8, zmm2)
                        
                        if ((rcx_55.b & 8) != 0)
                            int32_t var_3cc_3 = __extractps_memd_xmmps_immb(zmm14, 3)
                        
                        float temp0_1296[0x4] = _mm_sub_ps(zmm1, zmm3)
                        float temp0_1297[0x4] = _mm_mul_ps(zmm14, zmm14)
                        
                        if (rdx_92 != 0)
                            var_3c8 = zmm8[0]
                        
                        float temp0_1298[0x4] = _mm_sub_ps(temp0_1296, temp0_1297)
                        float temp0_1299[0x4] = _mm_mul_ps(zmm8, zmm8)
                        
                        if ((rcx_55.b & 2) == 0)
                            zmm1 = _mm_sub_ps(temp0_1298, temp0_1299)
                            zmm14 = zmm15
                            
                            if ((rcx_55.b & 4) != 0)
                                goto label_14012f1a1
                            
                            goto label_14012e92e
                        
                        int32_t var_3c4_4 = __extractps_memd_xmmps_immb(zmm8, 1)
                        zmm1 = _mm_sub_ps(temp0_1298, temp0_1299)
                        zmm14 = zmm15
                        
                        if ((rcx_55.b & 4) != 0)
                        label_14012f1a1:
                            int32_t var_3c0_4 = __extractps_memd_xmmps_immb(zmm8, 2)
                            zmm10 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                            zmm1 = _mm_sqrt_ps(zmm1)
                            
                            if ((rcx_55.b & 8) == 0)
                                goto label_14012e93f
                            
                            goto label_14012f1be
                        
                    label_14012e92e:
                        zmm10 = _mm_cmpeq_ps(zx.o(0), zmm1, 1)
                        zmm1 = _mm_sqrt_ps(zmm1)
                        
                        if ((rcx_55.b & 8) == 0)
                        label_14012e93f:
                            zmm10 = _mm_and_ps(zmm10, zmm1)
                            
                            if (rdx_92 != 0)
                                goto label_14012f1d7
                            
                            goto label_14012e94c
                        
                    label_14012f1be:
                        int32_t var_3bc_4 = __extractps_memd_xmmps_immb(zmm8, 3)
                        zmm10 = _mm_and_ps(zmm10, zmm1)
                        
                        if (rdx_92 != 0)
                        label_14012f1d7:
                            var_3b8 = zmm10[0]
                            
                            if ((rcx_55.b & 2) == 0)
                                goto label_14012e955
                            
                            goto label_14012f1ea
                        
                    label_14012e94c:
                        
                        if ((rcx_55.b & 2) == 0)
                        label_14012e955:
                            
                            if ((rcx_55.b & 4) != 0)
                                goto label_14012f1ff
                            
                            goto label_14012e95e
                        
                    label_14012f1ea:
                        int32_t var_3b4_4 = __extractps_memd_xmmps_immb(zmm10, 1)
                        int32_t var_3ac_3
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012e95e:
                            
                            if ((rcx_55.b & 8) != 0)
                                var_3ac_3 = __extractps_memd_xmmps_immb(zmm10, 3)
                        else
                        label_14012f1ff:
                            int32_t var_3b0_4 = __extractps_memd_xmmps_immb(zmm10, 2)
                            
                            if ((rcx_55.b & 8) != 0)
                                var_3ac_3 = __extractps_memd_xmmps_immb(zmm10, 3)
                    case 4
                        zmm2 = _mm_add_epi64(var_318_3, zmm7)
                        zmm8 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm7), zmm3)
                        float temp0_1309[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm2, zmm0), 
                            _mm_shuffle_epi32(temp0_1136, 0x50))
                        float temp0_1311[0x4] =
                            _mm_blendv_ps(zx.o(0), zmm8, _mm_shuffle_epi32(temp0_1136, 0xfa))
                        int64_t rax_150 = temp0_1309[0].q
                        int64_t rdx_105 = _mm_extract_epi64(temp0_1309, 1)
                        int64_t rbp_72 = _mm_extract_epi64(temp0_1311, 1)
                        zmm2 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_150)), 
                                    *(arg4 + rdx_105), 1), 
                                *(arg4 + temp0_1311[0].q), 2), 
                            *(arg4 + rbp_72), 3)
                        zmm3 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                        zmm1 = _mm_srli_epi32(zmm2, 0x15)
                        arg6 = data_143442440
                        float temp0_1318[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, arg6))
                        arg5 = data_143442690
                        float temp0_1319[0x4] = _mm_div_ps(temp0_1318, arg5)
                        rcx_55 = zx.q(temp0_1137)
                        rdx_92 = rcx_55 & 1
                        
                        if (rdx_92 == 0)
                            zmm3 = _mm_add_epi32(zmm3, arg6)
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012f23b
                            
                            goto label_14012ea2d
                        
                        var_3e8 = temp0_1319[0]
                        zmm3 = _mm_add_epi32(zmm3, arg6)
                        
                        if ((rcx_55.b & 2) != 0)
                        label_14012f23b:
                            int32_t var_3e4_6 = __extractps_memd_xmmps_immb(temp0_1319, 1)
                            zmm3 = _mm_cvtepi32_ps(zmm3)
                            
                            if ((rcx_55.b & 4) == 0)
                                goto label_14012ea39
                            
                            goto label_14012f252
                        
                    label_14012ea2d:
                        zmm3 = _mm_cvtepi32_ps(zmm3)
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012ea39:
                            zmm3 = _mm_div_ps(zmm3, arg5)
                            
                            if ((rcx_55.b & 8) != 0)
                                goto label_14012f269
                            
                            goto label_14012ea45
                        
                    label_14012f252:
                        int32_t var_3e0_5 = __extractps_memd_xmmps_immb(temp0_1319, 2)
                        zmm3 = _mm_div_ps(zmm3, arg5)
                        
                        if ((rcx_55.b & 8) != 0)
                        label_14012f269:
                            int32_t var_3dc_5 = __extractps_memd_xmmps_immb(temp0_1319, 3)
                            zmm2 &= data_143442680
                            
                            if (rdx_92 == 0)
                                goto label_14012ea56
                            
                            goto label_14012f285
                        
                    label_14012ea45:
                        zmm2 &= data_143442680
                        
                        if (rdx_92 == 0)
                        label_14012ea56:
                            zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                            
                            if ((rcx_55.b & 2) != 0)
                                goto label_14012f29f
                            
                            goto label_14012ea67
                        
                    label_14012f285:
                        var_3d8 = zmm3[0]
                        zmm2 = __paddd_xmmdq_memdq(zmm2, data_143442490)
                        int32_t var_3d0_4
                        
                        if ((rcx_55.b & 2) == 0)
                        label_14012ea67:
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rcx_55.b & 4) != 0)
                                var_3d0_4 = __extractps_memd_xmmps_immb(zmm3, 2)
                        else
                        label_14012f29f:
                            int32_t var_3d4_6 = __extractps_memd_xmmps_immb(zmm3, 1)
                            zmm2 = _mm_cvtepi32_ps(zmm2)
                            
                            if ((rcx_55.b & 4) != 0)
                                var_3d0_4 = __extractps_memd_xmmps_immb(zmm3, 2)
                        float temp0_1326[0x4] = _mm_mul_ps(temp0_1319, temp0_1319)
                        arg5 = data_142d3f670
                        float temp0_1327[0x4] = __divps_xmmps_memps(zmm2, data_1434426a0)
                        
                        if ((rcx_55.b & 8) != 0)
                            int32_t var_3cc_4 = __extractps_memd_xmmps_immb(zmm3, 3)
                        
                        float temp0_1329[0x4] = _mm_sub_ps(arg5, temp0_1326)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        
                        if (rdx_92 != 0)
                            var_3c8 = temp0_1327[0]
                        
                        float temp0_1331[0x4] = _mm_sub_ps(temp0_1329, zmm3)
                        float temp0_1332[0x4] = _mm_mul_ps(temp0_1327, temp0_1327)
                        
                        if ((rcx_55.b & 2) == 0)
                            arg5 = _mm_sub_ps(temp0_1331, temp0_1332)
                            
                            if ((rcx_55.b & 4) != 0)
                                goto label_14012f2d2
                            
                            goto label_14012eacd
                        
                        int32_t var_3c4_5 = __extractps_memd_xmmps_immb(temp0_1327, 1)
                        arg5 = _mm_sub_ps(temp0_1331, temp0_1332)
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012eacd:
                            zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                            zmm1 = _mm_sqrt_ps(arg5)
                            
                            if ((rcx_55.b & 8) == 0)
                                goto label_14012f393
                        else
                        label_14012f2d2:
                            int32_t var_3c0_5 = __extractps_memd_xmmps_immb(temp0_1327, 2)
                            zmm0 = _mm_cmpeq_ps(zx.o(0), arg5, 1)
                            zmm1 = _mm_sqrt_ps(arg5)
                            
                            if ((rcx_55.b & 8) == 0)
                                goto label_14012f393
                        
                        int32_t var_3bc_5 = __extractps_memd_xmmps_immb(temp0_1327, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if (rdx_92 == 0)
                            goto label_14012f39f
                        
                        goto label_14012f0a3
                    case 5
                        zmm2 = _mm_add_epi64(var_318_3, zmm7)
                        zmm8 = _mm_add_epi64(_mm_add_epi64(zmm8, zmm7), zmm3)
                        float temp0_1341[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm2, zmm0), 
                            _mm_shuffle_epi32(temp0_1136, 0x50))
                        float temp0_1343[0x4] =
                            _mm_blendv_ps(zx.o(0), zmm8, _mm_shuffle_epi32(temp0_1136, 0xfa))
                        int64_t rax_151 = temp0_1341[0].q
                        int64_t rdx_107 = _mm_extract_epi64(temp0_1341, 1)
                        int64_t rbp_73 = temp0_1343[0].q
                        int64_t rbx_53 = _mm_extract_epi64(temp0_1343, 1)
                        zmm1 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(
                                __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_151)), 
                                    *(arg4 + rdx_107), 1), 
                                *(arg4 + rbp_73), 2), 
                            *(arg4 + rbx_53), 3)
                        zmm2 = _mm_srli_epi32(zmm1, 0x15)
                        uint32_t temp0_1348[0x4] = _mm_srli_epi32(zmm1, 5)
                        zmm7 = data_143442600
                        arg6 = data_143442610
                        arg5 = data_143442320
                        zmm8 = data_143442330
                        zmm2 =
                            _mm_add_epi32(zmm2 & arg5, zmm8) | (zmm2 & arg6) | (temp0_1348 & zmm7)
                        rcx_55 = zx.q(temp0_1137)
                        rdx_92 = rcx_55 & 1
                        
                        if (rdx_92 != 0)
                            var_3e8 = zmm2[0]
                        
                        arg7 = _mm_srli_epi32(zmm1, 0xa)
                        uint32_t temp0_1351[0x4] = _mm_slli_epi32(zmm1, 6)
                        
                        if ((rcx_55.b & 2) != 0)
                            int32_t var_3e4_1 = __pextrd_memd_xmmdq_immb(zmm2, 1)
                        
                        zmm3 = temp0_1351 & zmm7
                        arg6 &= arg7
                        arg5 &= arg7
                        
                        if ((rcx_55.b & 4) == 0)
                            arg5 = _mm_add_epi32(arg5, zmm8)
                            zmm3 |= arg6
                            
                            if ((rcx_55.b & 8) != 0)
                                goto label_14012f326
                            
                            goto label_14012ec01
                        
                        int32_t var_3e0_6 = __pextrd_memd_xmmdq_immb(zmm2, 2)
                        arg5 = _mm_add_epi32(arg5, zmm8)
                        zmm3 |= arg6
                        
                        if ((rcx_55.b & 8) != 0)
                        label_14012f326:
                            int32_t var_3dc_6 = __pextrd_memd_xmmdq_immb(zmm2, 3)
                            zmm3 |= arg5
                            
                            if (rdx_92 == 0)
                                goto label_14012ec16
                            
                            goto label_14012f33e
                        
                    label_14012ec01:
                        zmm3 |= arg5
                        int32_t var_3d4_2
                        
                        if (rdx_92 != 0)
                        label_14012f33e:
                            var_3d8 = zmm3[0]
                            arg6 = data_143442620 & zmm1
                            
                            if ((rcx_55.b & 2) != 0)
                                var_3d4_2 = __pextrd_memd_xmmdq_immb(zmm3, 1)
                        else
                        label_14012ec16:
                            arg6 = data_143442620 & zmm1
                            
                            if ((rcx_55.b & 2) != 0)
                                var_3d4_2 = __pextrd_memd_xmmdq_immb(zmm3, 1)
                        arg5 = zmm1
                        zmm1 &= data_143442640
                        arg5 = _mm_slli_epi32(arg5, 0x11)
                        int32_t temp0_1356[0x4] = __paddd_xmmdq_memdq(arg6, data_1434423a0)
                        
                        if ((rcx_55.b & 4) != 0)
                            int32_t var_3d0_5 = __pextrd_memd_xmmdq_immb(zmm3, 2)
                        
                        arg5 &= data_143442630
                        float temp0_1358[0x4] = _mm_mul_ps(zmm2, zmm2)
                        arg6 = data_142d3f670
                        
                        if ((rcx_55.b & 8) != 0)
                            int32_t var_3cc_5 = __pextrd_memd_xmmdq_immb(zmm3, 3)
                        
                        arg5 |= zmm1 | temp0_1356
                        arg6 = _mm_sub_ps(arg6, temp0_1358)
                        zmm3 = _mm_mul_ps(zmm3, zmm3)
                        
                        if (rdx_92 != 0)
                            var_3c8 = arg5[0]
                        
                        arg6 = _mm_sub_ps(arg6, zmm3)
                        float temp0_1363[0x4] = _mm_mul_ps(arg5, arg5)
                        
                        if ((rcx_55.b & 2) == 0)
                            arg6 = _mm_sub_ps(arg6, temp0_1363)
                            
                            if ((rcx_55.b & 4) != 0)
                                goto label_14012f378
                            
                            goto label_14012ecb0
                        
                        int32_t var_3c4_6 = __pextrd_memd_xmmdq_immb(arg5, 1)
                        arg6 = _mm_sub_ps(arg6, temp0_1363)
                        
                        if ((rcx_55.b & 4) == 0)
                        label_14012ecb0:
                            zmm0 = _mm_cmpeq_ps(zx.o(0), arg6, 1)
                            zmm1 = _mm_sqrt_ps(arg6)
                            
                            if ((rcx_55.b & 8) == 0)
                                goto label_14012f393
                        else
                        label_14012f378:
                            int32_t var_3c0_6 = __pextrd_memd_xmmdq_immb(arg5, 2)
                            zmm0 = _mm_cmpeq_ps(zx.o(0), arg6, 1)
                            zmm1 = _mm_sqrt_ps(arg6)
                            
                            if ((rcx_55.b & 8) == 0)
                                goto label_14012f393
                        
                        int32_t var_3bc_7 = __pextrd_memd_xmmdq_immb(arg5, 3)
                        zmm0 = _mm_and_ps(zmm0, zmm1)
                        
                        if (rdx_92 == 0)
                            goto label_14012f39f
                        
                        goto label_14012f0a3
            
            arg7 = var_3e8.o
            arg6 = var_3d8.o
            zmm10 = var_3c8.o
            arg8 = var_3b8.o
            float temp0_1447[0x4] = _mm_mul_ps(var_468, arg7)
            float temp0_1449[0x4] = _mm_add_ps(_mm_mul_ps(var_458, arg6), temp0_1447)
            float temp0_1451[0x4] = _mm_add_ps(_mm_mul_ps(var_448, zmm10), temp0_1449)
            float temp0_1454[0x4] =
                _mm_cmpeq_ps(zx.o(0), _mm_add_ps(_mm_mul_ps(var_438, arg8), temp0_1451), 2)
            float temp0_1455[0x4] = _mm_mul_ps(arg7, zmm14)
            arg6 = _mm_mul_ps(arg6, zmm14)
            float temp0_1457[0x4] = _mm_mul_ps(zmm10, zmm14)
            arg8 = _mm_mul_ps(arg8, zmm14)
            zmm1 = data_142d3f670
            float temp0_1459[0x4] = _mm_blendv_ps(data_142d3f7e0, zmm1, temp0_1454)
            float temp0_1461[0x4] = _mm_mul_ps(_mm_sub_ps(zmm1, zmm14), temp0_1459)
            float temp0_1463[0x4] = _mm_add_ps(_mm_mul_ps(var_468, temp0_1461), temp0_1455)
            zmm3 = _mm_add_ps(_mm_mul_ps(var_458, temp0_1461), arg6)
            float temp0_1467[0x4] = _mm_add_ps(_mm_mul_ps(var_448, temp0_1461), temp0_1457)
            float temp0_1469[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1461, var_438), arg8)
            uint32_t var_218_1[0x4] = zmm3
            float temp0_1470[0x4] = _mm_mul_ps(temp0_1463, temp0_1463)
            zmm3 = _mm_mul_ps(zmm3, zmm3)
            float temp0_1473[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1467, temp0_1467), temp0_1470)
            float temp0_1476[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_1469, temp0_1469), zmm3), temp0_1473)
            zmm2 = data_142d3f5c0
            zmm3 = _mm_cmpeq_ps(zmm2, temp0_1476, 2)
            zmm0 = data_142d3f640
            float temp0_1478[0x4] = _mm_mul_ps(temp0_1476, zmm0)
            float var_128_1[0x4] = temp0_1478
            float var_118_1[0x4] = temp0_1478
            float var_108_1[0x4] = temp0_1478
            float var_f8_1[0x4] = temp0_1478
            arg6 = _mm_rsqrt_ps(temp0_1476)
            float temp0_1484[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm0, _mm_mul_ps(_mm_mul_ps(arg6, arg6), temp0_1478)), arg6), 
                arg6)
            float temp0_1489[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm0, _mm_mul_ps(_mm_mul_ps(temp0_1484, temp0_1484), temp0_1478)), 
                    temp0_1484), 
                temp0_1484)
            float temp0_1490[0x4] = _mm_mul_ps(temp0_1463, temp0_1489)
            float temp0_1491[0x4] = _mm_mul_ps(var_218_1, temp0_1489)
            arg6 = _mm_mul_ps(temp0_1467, temp0_1489)
            float temp0_1493[0x4] = __mulps_xmmps_memps(temp0_1489, temp0_1469)
            arg7 = _mm_and_ps(temp0_1490, zmm3)
            
            if (rdx_92 != 0)
                var_468[0] = arg7[0]
            
            if ((rcx_55.b & 2) != 0)
                var_468[1] = __extractps_memd_xmmps_immb(arg7, 1)
                
                if ((rcx_55.b & 4) != 0)
                label_14012f852:
                    var_468[2] = __extractps_memd_xmmps_immb(arg7, 2)
                    
                    if ((rcx_55.b & 8) == 0)
                        goto label_14012f68e
                    
                    goto label_14012f863
            else if ((rcx_55.b & 4) != 0)
                goto label_14012f852
            
            if ((rcx_55.b & 8) != 0)
            label_14012f863:
                var_468[3] = __extractps_memd_xmmps_immb(arg7, 3)
                arg5 = _mm_and_ps(temp0_1491, zmm3)
                
                if (rdx_92 != 0)
                    var_458[0] = arg5[0]
            else
            label_14012f68e:
                arg5 = _mm_and_ps(temp0_1491, zmm3)
                
                if (rdx_92 != 0)
                    var_458[0] = arg5[0]
            
            if ((rcx_55.b & 2) != 0)
                var_458[1] = __extractps_memd_xmmps_immb(arg5, 1)
                
                if ((rcx_55.b & 4) != 0)
                label_14012f88d:
                    var_458[2] = __extractps_memd_xmmps_immb(arg5, 2)
                    
                    if ((rcx_55.b & 8) == 0)
                        goto label_14012f6b7
                    
                    goto label_14012f89e
            else if ((rcx_55.b & 4) != 0)
                goto label_14012f88d
            
            if ((rcx_55.b & 8) != 0)
            label_14012f89e:
                var_458[3] = __extractps_memd_xmmps_immb(arg5, 3)
                arg6 = _mm_and_ps(arg6, zmm3)
                
                if (rdx_92 != 0)
                    var_448[0] = arg6[0]
            else
            label_14012f6b7:
                arg6 = _mm_and_ps(arg6, zmm3)
                
                if (rdx_92 != 0)
                    var_448[0] = arg6[0]
            
            if ((rcx_55.b & 2) == 0)
                zmm2 = _mm_cmpeq_ps(zmm2, temp0_1476, 6)
                
                if ((rcx_55.b & 4) != 0)
                    goto label_14012f8cc
                
                goto label_14012f6db
            
            var_448[1] = __extractps_memd_xmmps_immb(arg6, 1)
            zmm2 = _mm_cmpeq_ps(zmm2, temp0_1476, 6)
            
            if ((rcx_55.b & 4) != 0)
            label_14012f8cc:
                var_448[2] = __extractps_memd_xmmps_immb(arg6, 2)
                zmm0 = _mm_and_ps(temp0_1493, zmm3)
                zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f670)
                
                if ((rcx_55.b & 8) == 0)
                    goto label_14012f6ee
                
                goto label_14012f8e7
            
        label_14012f6db:
            zmm0 = _mm_and_ps(temp0_1493, zmm3)
            zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f670)
            
            if ((rcx_55.b & 8) != 0)
            label_14012f8e7:
                var_448[3] = __extractps_memd_xmmps_immb(arg6, 3)
                zmm0 = _mm_or_ps(zmm0, zmm2)
                
                if (rdx_92 != 0)
                    var_438[0] = zmm0[0]
            else
            label_14012f6ee:
                zmm0 = _mm_or_ps(zmm0, zmm2)
                
                if (rdx_92 != 0)
                    var_438[0] = zmm0[0]
            
            if ((rcx_55.b & 2) == 0)
                if ((rcx_55.b & 4) != 0)
                    goto label_14012f911
                
                goto label_14012f70e
            
            var_438[1] = __extractps_memd_xmmps_immb(zmm0, 1)
            
            if ((rcx_55.b & 4) == 0)
            label_14012f70e:
                
                if ((rcx_55.b & 8) != 0)
                    var_438[3] = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_14012f911:
                var_438[2] = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((rcx_55.b & 8) != 0)
                    var_438[3] = __extractps_memd_xmmps_immb(zmm0, 3)
    
    zmm1 = var_458
    float temp0_1502[0x4] = _mm_unpacklo_ps(var_448, var_438[0].q)
    float temp0_1503[0x4] = _mm_unpackhi_ps(var_448, var_438)
    zmm3 = _mm_unpacklo_ps(var_468, zmm1[0].q)
    float temp0_1505[0x4] = _mm_unpackhi_ps(var_468, zmm1)
    float var_1e8[0x4] = zmm3[0].q | temp0_1502[0].q << 0x40
    uint32_t var_1d8_1[0x4] = _mm_unpackhi_pd(zmm3, temp0_1502[0].q)
    float var_1c8_1[0x4] = temp0_1505[0].q | temp0_1503[0].q << 0x40
    float var_1b8_1[0x4] = _mm_unpackhi_pd(temp0_1505, temp0_1503[0].q)
    i = zx.q(_mm_movemask_ps(zmm11))
    
    do
        uint64_t rcx_56
        uint64_t rflags_1
        
        if (i == 0)
            rcx_56 = 0x40
        else
            rcx_56, rflags_1 = _bit_scan_forward(i)
        uint128_t var_238 = zmm12
        r13[sx.q(*(&var_238 + ((zx.q(rcx_56.d) & 3) << 2))) * 3] = (&var_1e8)[rcx_56]
        i &= rol.q(-2, rcx_56.b)
    while (i != 0)

return i
