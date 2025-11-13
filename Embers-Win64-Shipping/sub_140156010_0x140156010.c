// 函数: sub_140156010
// 地址: 0x140156010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg8
uint128_t var_68 = arg7
float var_78[0x4] = arg6
uint128_t zmm12
uint128_t var_88 = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
int32_t zmm10[0x4]
int32_t var_a8[0x4] = zmm10
uint128_t zmm9
uint128_t var_b8 = zmm9
uint128_t zmm8
uint128_t var_c8 = zmm8
float var_d8[0x4] = arg5
uint32_t zmm6[0x4]
uint32_t var_e8[0x4] = zmm6
int64_t r10 = sx.q(arg12)
uint128_t zmm1 = arg10
int32_t rax_1 = *(&data_143442810 + (r10 << 2)) * *(&data_1434427f0 + (r10 << 2))
int32_t rcx_4 = ((arg13 s>> 0x1f u>> 0x1e) + arg13) & 0xfffffffc
int64_t result
int32_t r12
uint128_t zmm0
uint32_t zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (rcx_4 s<= 0)
    r12 = 0
    result = zx.q(arg13)
    
    if (0 s< result.d)
    label_140157768:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r12), 0), data_142e11d00)
        arg6 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & arg6
        int64_t rax_76 = sx.q(zmm0.d)
        int64_t rbp_11 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        int64_t rbx_16 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        int64_t rsi_10 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        uint128_t var_2a8_2 = *(arg2 + rsi_10)
        zmm9 = zx.o(*(arg2 + rbx_16))
        zmm11 = *(arg2 + rax_76)
        uint128_t var_278_3 = *(arg2 + rbp_11)
        zmm0 = data_142fc95e0 & arg6
        uint128_t* r12_1 = zx.q(zmm0.d)
        uint128_t* r14_7 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        uint128_t* r9_11 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        float (* r10_1)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
        zmm0 = zx.o(*(r10_1 + arg2 + rsi_10))
        zmm2 = _mm_unpacklo_epi32(zx.o(*(r9_11 + arg2 + rbx_16)), zmm0.q)
        zmm4 = zx.o(*(r14_7 + arg2 + rbp_11))
        zmm3 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zx.o(*(r12_1 + arg2 + rax_76)), zmm4[0].q), 
            zmm2[0].q)
        uint32_t temp0_407[0x4] = _mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0)
        zmm3 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, temp0_407), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_ps(zmm4, zmm0, 0), temp0_407), 0xe8).q) & arg6
        int64_t rax_79 = sx.q(zmm3[0])
        int64_t rdi_14 = sx.q(_mm_shuffle_epi32(zmm3, 0xe5).d)
        int64_t rbx_18 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
        int64_t rdx_1 = sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
        zmm6 = _mm_unpacklo_epi32(zx.o(*(arg3 + rbx_18)), zx.q(*(arg3 + rdx_1)))
        int32_t r10_2 = r10.d
        arg7 = _mm_unpacklo_epi32(zx.o(*(arg3 + rax_79)), zx.q(*(arg3 + rdi_14)))
        zmm1 = _mm_unpacklo_epi64(arg7, zmm6[0].q)
        zmm2 = _mm_unpacklo_epi32(zx.o(*(r9_11 + arg3 + rbx_18)), zx.q(*(r10_1 + arg3 + rdx_1)))
        zmm0 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(r12_1 + arg3 + rax_79)), 
                zx.o(*(r14_7 + arg3 + rdi_14))[0].q), 
            zmm2[0].q)
        zmm2 = zx.o(0)
        arg8 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm6, arg7.q))
        uint128_t var_238_6 = zmm1
        zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm1)
        zmm4 = _mm_cmpgt_epi32(data_1434422d0, zmm0) & arg6
        char temp0_427 = _mm_movemask_ps(zmm4)
        zmm5 = zx.o(0)
        char temp0_428
        
        if (temp0_427 != 0)
            temp0_428 = _mm_movemask_ps(arg6)
            zmm12 = zx.o(0)
            zmm5 = zmm4
            zmm10 = zx.o(0)
            zmm1 = zx.o(0)
        
        void* var_298_1
        
        if (temp0_427 == 0 || temp0_428 != temp0_427)
            arg5 = _mm_cmpeq_epi32(arg5, arg5)
            zmm5 ^= arg5
            zmm1 = arg10
            
            if (0f f>= zmm1.d)
                zmm12 = zx.o(0)
                zmm10 = zx.o(0)
            else
                arg5 = _mm_add_epi32(arg5, zmm0)
                
                if (zmm1.d f>= 1f)
                    zmm12 = zmm5 & arg6 & arg5
                    zmm10 = zmm12
                else
                    uint32_t var_218_2[0x4] = zmm6
                    var_298_1.o = zmm9
                    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
                    zmm9 = _mm_mul_ps(_mm_cvtepi32_ps(arg5), zmm1)
                    zmm4 = _mm_and_ps(data_142d3f780, zmm9)
                    zmm6 = __addps_xmmps_memps(
                        __addps_xmmps_memps(_mm_and_ps(data_142d3f770, zmm9), data_142d3f740), 
                        data_1434427a0) ^ zmm4
                    zmm8 = zmm5 & arg6
                    float temp0_440[0x4] = _mm_add_ps(
                        __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm9, zmm6, 1), data_142d3f7e0), zmm6)
                    int32_t temp0_441[0x4] = _mm_cvttps_epi32(temp0_440)
                    zmm12 = _mm_cmpgt_epi32(temp0_441, arg5)
                    zmm12 = ((zmm12 & not.o(temp0_441)) | (arg5 & zmm12)) & zmm8
                    zmm6 = _mm_sub_epi32(zmm12, _mm_cmpeq_epi32(temp0_441, temp0_441))
                    int32_t temp0_445[0x4] = _mm_cmpgt_epi32(arg5, zmm6)
                    zmm2 = zx.o(0)
                    
                    if (arg11 != 1)
                        zmm2 = _mm_sub_ps(zmm9, temp0_440)
                    
                    zmm10 = ((temp0_445 & not.o(arg5)) | (zmm6 & temp0_445)) & zmm8
                    zmm9 = var_298_1.o
                    zmm6 = var_218_2
            
            zmm1 = zmm2 & zmm5
        
        zmm6 = _mm_unpacklo_epi32(zmm6, arg8[0].q)
        arg7 = _mm_unpacklo_epi32(arg7, zmm3[0].q)
        int32_t rax_81
        rax_81.b = r10_2 == 3
        zmm0 = __pcmpgtd_xmmdq_memdq(zmm0, data_142d3f5b0)
        arg8 = _mm_shuffle_epi32(0x18 & zx.o(neg.d(rax_81)), 0) & zmm0
        zmm0 = zx.o(0)
        arg5 = _mm_unpackhi_epi32(arg8, 0)
        arg8 = _mm_unpacklo_epi32(arg8, 0)
        uint32_t temp0_453[0x4] = _mm_shuffle_epi32(zx.o(rax_1), 0)
        uint64_t r8 = zx.q(r10_2)
        uint128_t var_288_1 = zmm1
        float var_228_1[0x4] = arg5
        uint32_t var_218_3[0x4] = zmm6
        char rcx_34
        
        if (r10_2 u> 6)
        label_140158153:
            rcx_34 = _mm_movemask_ps(arg6)
            zmm3 = zx.o(0)
            
            if ((rcx_34 & 4) == 0)
                goto label_140158188
            
        label_140158181:
            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zx.o(0), zmm0, 0x30), 0x84)
        label_140158188:
            
            if ((rcx_34 & 8) != 0)
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm3, zmm0, 0x20), 0x24)
            
            zmm1 = var_2a8_2
            zmm3 = var_278_3
            zmm8 = zmm0
            zmm6 = zmm0
        else
            zmm3 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm12, 0xf5), temp0_453), 0xe8)
            zmm5 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm12, temp0_453), 0xe8), 
                zmm3[0].q)
            zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm5)
            zmm8 = _mm_shuffle_epi32(zmm5, 0x4e)
            zmm5 = _mm_unpacklo_epi32(zmm5, zmm3[0].q)
            zmm8 = _mm_unpacklo_epi32(zmm8, _mm_cmpgt_epi32(zx.o(0), zmm8)[0].q)
            int32_t var_1f8
            
            switch (r8)
                case 0, 1
                    var_298_1.o = zmm9
                    zmm0 = _mm_add_epi64(arg8, arg7)
                    zmm4 = _mm_add_epi64(_mm_add_epi64(arg5, zmm6), zmm8)
                    zmm0 = _mm_add_epi64(zmm0, zmm5)
                    zmm5 = _mm_shuffle_epi32(arg6, 0x50)
                    zmm0 &= zmm5
                    uint32_t temp0_470[0x4] = _mm_shuffle_epi32(arg6, 0xfa)
                    zmm4 &= temp0_470
                    int64_t rax_83 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                    void* rcx_29 = arg9 + rax_83
                    zmm3 = *(arg9 + rax_83)
                    int64_t rax_84 = zmm4[0].q
                    void* rbp_13 = arg9 + rax_84
                    zmm1 = arg6
                    arg6 = *(arg9 + rax_84)
                    int64_t rax_85 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    void* rbx_20 = arg9 + rax_85
                    zmm2 = *(arg9 + rax_85)
                    zmm4 = data_1434426c0
                    arg5 = zmm5 & zmm4
                    zmm4 &= temp0_470
                    void* rdx_4 = zmm0.q + arg9
                    zmm8 = *(arg5[0].q + rdx_4)
                    int32_t var_1e8_2[0x4] = *(_mm_shuffle_epi32(arg5, 0x4e).q + rcx_29)
                    zmm9 = *(zmm4[0].q + rbp_13)
                    uint128_t var_248_4 = *(_mm_shuffle_epi32(zmm4, 0x4e).q + rbx_20)
                    zmm0 = data_1434426e0
                    zmm5 &= zmm0
                    zmm6 = temp0_470 & zmm0
                    zmm0 = *(zmm5[0].q + rdx_4)
                    arg5 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rcx_29)
                    zmm5 = *(zmm6[0].q + rbp_13)
                    var_1f8.o = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rbx_20)
                    zmm4 = zmm1
                    char temp0_477 = _mm_movemask_ps(zmm1)
                    bool cond:5_1
                    bool cond:6_1
                    bool cond:8_1
                    bool cond:9_1
                    
                    if ((temp0_477 & 1) == 0)
                        char temp1_1 = temp0_477 & 2
                        cond:5_1 = temp1_1 != 0
                        cond:6_1 = temp1_1 == 0
                        cond:8_1 = temp1_1 != 0
                        cond:9_1 = temp1_1 == 0
                        
                        if (temp1_1 == 0)
                            goto label_1401581b5
                        
                        goto label_140157ca6
                    
                    zmm6 = *rdx_4
                    char temp0_582 = temp0_477 & 2
                    cond:5_1 = temp0_582 != 0
                    cond:6_1 = temp0_582 == 0
                    cond:8_1 = temp0_582 != 0
                    cond:9_1 = temp0_582 == 0
                    
                    if (temp0_582 == 0)
                    label_1401581b5:
                        zmm1 = var_2a8_2
                        zmm3 = var_278_3
                        
                        if (cond:6_1)
                            goto label_140157cb9
                        
                        goto label_1401581c5
                    
                label_140157ca6:
                    zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm6, 0), zmm6, 0xe2)
                    zmm1 = var_2a8_2
                    zmm3 = var_278_3
                    
                    if (not(cond:5_1))
                    label_140157cb9:
                        
                        if (cond:9_1)
                            goto label_1401581d4
                        
                        goto label_140157cbf
                    
                label_1401581c5:
                    zmm8 = __unpcklps_xmmps_memdq(zmm8, var_1e8_2)
                    bool cond:13_1
                    bool cond:14_1
                    bool cond:19_1
                    bool cond:20_1
                    
                    if (not(cond:8_1))
                    label_1401581d4:
                        char temp3_1 = temp0_477 & 4
                        cond:13_1 = temp3_1 != 0
                        cond:14_1 = temp3_1 == 0
                        cond:19_1 = temp3_1 != 0
                        cond:20_1 = temp3_1 == 0
                        
                        if (temp3_1 == 0)
                            goto label_140157ccb
                        
                        goto label_1401581e2
                    
                label_140157cbf:
                    zmm0 = _mm_unpacklo_ps(zmm0, arg5[0].q)
                    char temp2_1 = temp0_477 & 4
                    cond:13_1 = temp2_1 != 0
                    cond:14_1 = temp2_1 == 0
                    cond:19_1 = temp2_1 != 0
                    cond:20_1 = temp2_1 == 0
                    
                    if (temp2_1 == 0)
                    label_140157ccb:
                        arg6 = zmm4
                        
                        if (cond:14_1)
                            goto label_1401581f1
                        
                        goto label_140157cda
                    
                label_1401581e2:
                    zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(arg6, zmm6, 0x30), 0x84)
                    arg6 = zmm4
                    
                    if (not(cond:13_1))
                    label_1401581f1:
                        zmm9 = var_298_1.o
                        
                        if (cond:20_1)
                            goto label_140157cec
                        
                        goto label_140158202
                    
                label_140157cda:
                    zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm9, zmm8, 0x30), 0x84)
                    zmm9 = var_298_1.o
                    bool cond:36_1
                    bool cond:37_1
                    bool cond:46_1
                    bool cond:47_1
                    
                    if (not(cond:19_1))
                    label_140157cec:
                        char temp10_1 = temp0_477 & 8
                        cond:36_1 = temp10_1 != 0
                        cond:37_1 = temp10_1 == 0
                        cond:46_1 = temp10_1 == 0
                        cond:47_1 = temp10_1 != 0
                        
                        if (temp10_1 == 0)
                            goto label_14015820f
                        
                        goto label_140157cf9
                    
                label_140158202:
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm5, zmm0, 0x30), 0x84)
                    char temp9_1 = temp0_477 & 8
                    cond:36_1 = temp9_1 != 0
                    cond:37_1 = temp9_1 == 0
                    cond:46_1 = temp9_1 == 0
                    cond:47_1 = temp9_1 != 0
                    
                    if (temp9_1 == 0)
                    label_14015820f:
                        
                        if (cond:37_1)
                            goto label_140157d03
                        
                        goto label_14015821f
                    
                label_140157cf9:
                    zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm2, zmm6, 0x20), 0x24)
                    
                    if (cond:36_1)
                    label_14015821f:
                        zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(var_248_4, zmm8, 0x20), 0x24)
                        
                        if (not(cond:46_1))
                            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(var_1f8.o, zmm0, 0x20), 0x24)
                    else
                    label_140157d03:
                        
                        if (cond:47_1)
                            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(var_1f8.o, zmm0, 0x20), 0x24)
                case 2
                    zmm4 = _mm_add_epi64(arg8, arg7)
                    zmm0 = _mm_add_epi64(_mm_add_epi64(arg5, zmm6), zmm8)
                    zmm4 = _mm_add_epi64(zmm4, zmm5)
                    uint32_t temp0_489[0x4] = _mm_shuffle_epi32(arg6, 0x50)
                    zmm4 &= temp0_489
                    zmm3 = _mm_shuffle_epi32(arg6, 0xfa)
                    zmm0 &= zmm3
                    int64_t rcx_31 = zmm4[0].q
                    void* rbx_21 = arg9 + rcx_31
                    int64_t rdx_5 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    void* rdi_15 = arg9 + rdx_5
                    int64_t rbp_14 = zmm0.q
                    zmm5 = data_1434426b0
                    zmm4 = temp0_489 & zmm5
                    void* rsi_12 = zmm4[0].q
                    zmm4 = _mm_shuffle_epi32(zmm4, 0x4e)
                    zmm8 = data_1434426c0
                    arg5 =
                        __pinsrw_xmmdq_memw_immb(zx.o(*(rsi_12 + rbx_21)), *(zmm4[0].q + rdi_15), 1)
                    zmm6 = temp0_489 & zmm8
                    void* rax_96 = zmm6[0].q
                    int16_t* rbx_22 = _mm_shuffle_epi32(zmm6, 0x4e)[0].q
                    zmm4 = zx.o(*(rax_96 + rbx_21))
                    void* rax_98 = arg9 + rbp_14
                    zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                    zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(rbx_22 + rdi_15), 1)
                    int64_t rbx_23 = zmm0.q
                    zmm5 &= zmm3
                    zmm3 &= zmm8
                    arg5 = __pinsrw_xmmdq_memw_immb(arg5, *(zmm5[0].q + rax_98), 2)
                    zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(zmm3[0].q + rax_98), 2)
                    void* rax_99 = arg9 + rbx_23
                    arg5 = __pinsrw_xmmdq_memw_immb(arg5, 
                        *(_mm_shuffle_epi32(zmm5, 0x4e).q + rax_99), 3)
                    zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, 
                        *(_mm_shuffle_epi32(zmm3, 0x4e).q + rax_99), 3)
                    zmm0 = _mm_unpacklo_epi16(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg9 + rcx_31)), *(arg9 + rdx_5), 
                                    1), 
                                *(arg9 + rbp_14), 2), 
                            *(arg9 + rbx_23), 3), 
                        0)
                    zmm5 = data_1434424d0
                    uint32_t temp0_508[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm5))
                    zmm1 = zmm9
                    zmm9 = data_1434426d0
                    zmm6 = _mm_div_ps(temp0_508, zmm9)
                    zmm8 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(arg5, 0), zmm5)), zmm9)
                    zmm0 = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm4, 0), zmm5)), zmm9)
                    zmm9 = zmm1
                    zmm3 = data_143442710
                    zmm6 = _mm_mul_ps(zmm6, zmm3)
                    zmm8 = _mm_mul_ps(zmm8, zmm3)
                    zmm0 = _mm_mul_ps(zmm0, zmm3)
                    zmm1 = var_2a8_2
                    zmm3 = var_278_3
                case 3
                    zmm0 = var_238_6 & arg6
                    int64_t rax_102 = sx.q(zmm0.d)
                    void* r9_12 = arg9 + rax_102
                    zmm2 = *(arg9 + rax_102)
                    int64_t rax_104 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                    void* r11_4 = arg9 + rax_104
                    zmm2 = _mm_unpacklo_ps(zmm2, (*(arg9 + rax_104))[0].q)
                    int64_t rax_106 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    void* rsi_13 = arg9 + rax_106
                    zmm3 = *(arg9 + rax_106)
                    int64_t rax_108 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7).d)
                    void* rcx_32 = arg9 + rax_108
                    float temp0_525[0x4] = _mm_unpacklo_ps(zmm3, (*(arg9 + rax_108)).q)
                    zmm2 = zmm2[0].q | temp0_525[0].q << 0x40
                    var_298_1.o = _mm_unpacklo_ps(*(r12_1 + r9_12), (*(r14_7 + r11_4)).q).q
                        | _mm_unpacklo_ps(*(r9_11 + rsi_13), (*(r10_1 + rcx_32))[0].q).q << 0x40
                    zmm0 = data_142fc95f0 & arg6
                    var_1f8.o = _mm_unpacklo_ps(*(zx.q(zmm0.d) + r9_12), 
                        (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + r11_4))[0].q).q | _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_13), 
                        (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rcx_32)).q)[0].q << 0x40
                    zmm3 = data_143442650 & arg6
                    zmm0 = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + r9_12), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + r11_4))[0].q).q | _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_13), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rcx_32))[0].q)[0].q << 0x40
                    zmm3 = data_143442660 & arg6
                    float var_248_5[0x4] = arg6
                    float temp0_539[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + r9_12), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + r11_4))[0].q)
                    float temp0_542[0x4] = _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_13), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rcx_32))[0].q)
                    arg6 = temp0_539[0].q | temp0_542[0].q << 0x40
                    zmm4 = data_143442670 & var_248_5
                    float temp0_544[0x4] = _mm_unpacklo_ps(*(zx.q(zmm4[0]) + r9_12), 
                        (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + r11_4))[0].q)
                    float temp0_547[0x4] = _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + rsi_13), 
                        (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + rcx_32))[0].q)
                    zmm3 = temp0_544[0].q | temp0_547[0].q << 0x40
                    zmm4 = _mm_add_epi64(arg8, arg7)
                    arg5 = _mm_add_epi64(_mm_add_epi64(arg5, zmm6), zmm8)
                    zmm4 = _mm_add_epi64(zmm4, zmm5)
                    zmm5 = __pshufd_xmmdq_memdq_immb(var_248_5, 0x50) & zmm4
                    zmm4 = __pshufd_xmmdq_memdq_immb(var_248_5, 0xfa) & arg5
                    int64_t rax_125 = zmm5[0].q
                    int64_t rcx_33 = _mm_shuffle_epi32(zmm5, 0x4e)[0].q
                    int64_t rdx_6 = zmm4[0].q
                    int64_t rbp_15 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    zmm4 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg9 + rax_125)), zx.o(*(arg9 + rcx_33))[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg9 + rdx_6)), zx.o(*(arg9 + rbp_15))[0].q)[0].q)
                    zmm5 = zmm4
                    arg5 = _mm_srli_epi32(zmm4, 0xa) & data_143442480
                    zmm4 &= data_143442680
                    zmm5 = _mm_srli_epi32(zmm5, 0x15)
                    zmm6 = _mm_add_ps(
                        _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm4, data_143442490)), 
                                data_1434426a0), 
                            zmm0), 
                        zmm2)
                    zmm0 = data_143442440
                    zmm8 = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                    zmm4 = data_143442690
                    zmm8 = _mm_mul_ps(_mm_div_ps(zmm8, zmm4), arg6)
                    arg6 = var_248_5
                    zmm8 = __addps_xmmps_memps(zmm8, var_298_1.o)
                    zmm0 = __addps_xmmps_memps(
                        _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm5, zmm0)), zmm4), 
                            zmm3), 
                        var_1f8.o)
                    zmm1 = var_2a8_2
                    zmm3 = var_278_3
                case 4, 5
                    goto label_140158153
                case 6
                    rcx_34 = _mm_movemask_ps(arg6)
                    zmm0 = zx.o(0)
                    zmm3 = zx.o(0)
                    
                    if ((rcx_34 & 4) == 0)
                        goto label_140158188
                    
                    goto label_140158181
        zmm9 = _mm_unpacklo_epi32(zmm9, zmm1.q)
        float temp0_593[0x4] = _mm_unpacklo_ps(zmm11, zmm3[0].q)
        zmm12 = _mm_cmpeq_epi32(zmm12, zmm10) & not.o(arg6)
        char temp0_595 = _mm_movemask_ps(zmm12)
        
        if (temp0_595 != 0)
            zmm3 = zx.o(0)
            var_298_1.o = zmm9
            char rcx_44
            
            if (r10_2 u> 6)
            label_1401588a8:
                rcx_44 = temp0_595
                zmm2 = zx.o(0)
                zmm1 = var_288_1
                
                if ((rcx_44 & 4) == 0)
                    goto label_1401588e6
                
            label_1401588df:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x30), 0x84)
            label_1401588e6:
                
                if ((rcx_44 & 8) != 0)
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm2, zmm3, 0x20), 0x24)
                
                zmm2 = zmm3
                zmm4 = zmm3
            else
                zmm4 = _mm_shuffle_epi32(zmm10, 0xf5)
                zmm1 = temp0_453
                arg5 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm10, zmm1), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm1, 0xf5), zmm4), 0xe8)[0]
                        .q)
                zmm4 = _mm_cmpgt_epi32(zx.o(0), arg5)
                zmm5 = _mm_shuffle_epi32(arg5, 0x4e)
                arg5 = _mm_unpacklo_epi32(arg5, zmm4[0].q)
                zmm5 = _mm_unpacklo_epi32(zmm5, _mm_cmpgt_epi32(zx.o(0), zmm5)[0].q)
                int64_t var_258_1
                
                switch (r8)
                    case 0, 1
                        zmm1 = arg6
                        arg8 = _mm_add_epi64(arg8, arg7)
                        zmm4 = _mm_add_epi64(__paddq_xmmdq_memdq(var_228_1, var_218_3), zmm5)
                        arg8 = _mm_add_epi64(arg8, arg5)
                        zmm5 = _mm_shuffle_epi32(zmm12, 0x50)
                        arg8 &= zmm5
                        arg5 = _mm_shuffle_epi32(zmm12, 0xfa)
                        zmm4 &= arg5
                        int64_t rax_126 = _mm_shuffle_epi32(arg8, 0x4e)[0].q
                        void* rcx_37 = arg9 + rax_126
                        zmm12 = *(arg9 + rax_126)
                        int64_t rax_127 = zmm4[0].q
                        void* rbx_24 = arg9 + rax_127
                        arg6 = *(arg9 + rax_127)
                        int64_t rax_128 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        void* rdi_20 = arg9 + rax_128
                        var_258_1.o = *(arg9 + rax_128)
                        zmm3 = data_1434426c0
                        zmm4 = zmm5 & zmm3
                        zmm3 &= arg5
                        void* rdx_8 = arg8[0].q + arg9
                        zmm2 = *(zmm4[0].q + rdx_8)
                        arg8 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rcx_37)
                        arg7 = *(zmm3[0].q + rbx_24)
                        float var_2a8_3[0x4] = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rdi_20)
                        zmm3 = data_1434426e0
                        zmm5 &= zmm3
                        arg5 &= zmm3
                        zmm3 = *(zmm5[0].q + rdx_8)
                        zmm9 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rcx_37)
                        zmm10 = *(arg5[0].q + rbx_24)
                        zmm4 = _mm_shuffle_epi32(arg5, 0x4e)
                        zmm5 = *(zmm4[0].q + rdi_20)
                        bool cond:21_1
                        bool cond:22_1
                        bool cond:30_1
                        bool cond:31_1
                        
                        if ((temp0_595 & 1) == 0)
                            char temp7_1 = temp0_595 & 2
                            cond:21_1 = temp7_1 != 0
                            cond:22_1 = temp7_1 == 0
                            cond:30_1 = temp7_1 != 0
                            cond:31_1 = temp7_1 == 0
                            
                            if (temp7_1 == 0)
                                goto label_140158905
                            
                            goto label_1401583ee
                        
                        zmm4 = *rdx_8
                        char temp6_1 = temp0_595 & 2
                        cond:21_1 = temp6_1 != 0
                        cond:22_1 = temp6_1 == 0
                        cond:30_1 = temp6_1 != 0
                        cond:31_1 = temp6_1 == 0
                        
                        if (temp6_1 == 0)
                        label_140158905:
                            
                            if (cond:22_1)
                                goto label_1401583f8
                            
                            goto label_14015890b
                        
                    label_1401583ee:
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm4, 0), zmm4, 0xe2)
                        
                        if (not(cond:21_1))
                        label_1401583f8:
                            
                            if (cond:31_1)
                                goto label_140158915
                            
                            goto label_1401583fe
                        
                    label_14015890b:
                        zmm2 = _mm_unpacklo_ps(zmm2, arg8[0].q)
                        bool cond:48_1
                        bool cond:49_1
                        bool cond:58_1
                        bool cond:59_1
                        
                        if (not(cond:30_1))
                        label_140158915:
                            char temp12_1 = temp0_595 & 4
                            cond:48_1 = temp12_1 != 0
                            cond:49_1 = temp12_1 == 0
                            cond:58_1 = temp12_1 != 0
                            cond:59_1 = temp12_1 == 0
                            
                            if (temp12_1 == 0)
                                goto label_14015840b
                            
                            goto label_140158923
                        
                    label_1401583fe:
                        zmm3 = _mm_unpacklo_ps(zmm3, zmm9.q)
                        char temp11_1 = temp0_595 & 4
                        cond:48_1 = temp11_1 != 0
                        cond:49_1 = temp11_1 == 0
                        cond:58_1 = temp11_1 != 0
                        cond:59_1 = temp11_1 == 0
                        
                        if (temp11_1 == 0)
                        label_14015840b:
                            arg6 = zmm1
                            zmm1 = var_288_1
                            
                            if (cond:49_1)
                                goto label_140158937
                            
                            goto label_14015841f
                        
                    label_140158923:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg6, zmm4, 0x30), 0x84)
                        arg6 = zmm1
                        zmm1 = var_288_1
                        
                        if (not(cond:48_1))
                        label_140158937:
                            
                            if (cond:59_1)
                                goto label_14015842a
                            
                            goto label_140158942
                        
                    label_14015841f:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg7, zmm2, 0x30), 0x84)
                        bool cond:72_1
                        bool cond:73_1
                        bool cond:82_1
                        bool cond:83_1
                        
                        if (not(cond:58_1))
                        label_14015842a:
                            char temp16_1 = temp0_595 & 8
                            cond:72_1 = temp16_1 != 0
                            cond:73_1 = temp16_1 == 0
                            cond:82_1 = temp16_1 == 0
                            cond:83_1 = temp16_1 != 0
                            
                            if (temp16_1 == 0)
                                goto label_140158950
                            
                            goto label_14015843c
                        
                    label_140158942:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x30), 0x84)
                        char temp15_1 = temp0_595 & 8
                        cond:72_1 = temp15_1 != 0
                        cond:73_1 = temp15_1 == 0
                        cond:82_1 = temp15_1 == 0
                        cond:83_1 = temp15_1 != 0
                        
                        if (temp15_1 == 0)
                        label_140158950:
                            
                            if (cond:73_1)
                                goto label_140158446
                            
                            goto label_14015895e
                        
                    label_14015843c:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(var_258_1.o, zmm4, 0x20), 0x24)
                        
                        if (cond:72_1)
                        label_14015895e:
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_2a8_3, zmm2, 0x20), 0x24)
                            
                            if (not(cond:82_1))
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm5, zmm3, 0x20), 0x24)
                        else
                        label_140158446:
                            
                            if (cond:83_1)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm5, zmm3, 0x20), 0x24)
                    case 2
                        arg8 = _mm_add_epi64(arg8, arg7)
                        zmm1 = _mm_add_epi64(__paddq_xmmdq_memdq(var_228_1, var_218_3), zmm5)
                        arg8 = _mm_add_epi64(arg8, arg5)
                        zmm5 = _mm_shuffle_epi32(zmm12, 0x50)
                        arg8 &= zmm5
                        zmm9 = _mm_shuffle_epi32(zmm12, 0xfa)
                        zmm1 &= zmm9
                        int64_t rcx_39 = arg8[0].q
                        void* rbx_25 = arg9 + rcx_39
                        int64_t rdx_9 = _mm_shuffle_epi32(arg8, 0x4e)[0].q
                        void* rdi_21 = arg9 + rdx_9
                        zmm2 = data_1434426b0
                        zmm4 = zmm5 & zmm2
                        void* rsi_14 = zmm4[0].q
                        int16_t* rax_138 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        zmm4 = data_1434426c0
                        zmm5 &= zmm4
                        arg5 = __pinsrw_xmmdq_memw_immb(zx.o(*(rsi_14 + rbx_25)), 
                            *(rax_138 + rdi_21), 1)
                        int64_t rbx_26 = zmm1.q
                        zmm3 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm5[0].q + rbx_25)), 
                            *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rdi_21), 1)
                        void* rax_142 = arg9 + rbx_26
                        zmm2 &= zmm9
                        arg5 = __pinsrw_xmmdq_memw_immb(arg5, *(zmm2[0].q + rax_142), 2)
                        zmm9 &= zmm4
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(zmm9.q + rax_142), 2)
                        zmm4 = __pinsrw_xmmdq_memw_immb(zx.o(*(arg9 + rcx_39)), *(arg9 + rdx_9), 1)
                        zmm5 = _mm_shuffle_epi32(zmm1, 0x4e)
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(arg9 + rbx_26), 2)
                        int64_t rax_144 = zmm5[0].q
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(arg9 + rax_144), 3)
                        void* rax_145 = arg9 + rax_144
                        arg5 = __pinsrw_xmmdq_memw_immb(arg5, 
                            *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rax_145), 3)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, 
                            *(_mm_shuffle_epi32(zmm9, 0x4e)[0].q + rax_145), 3)
                        zmm4 = _mm_unpacklo_epi16(zmm4, 0)
                        zmm9 = data_1434424d0
                        float temp0_650[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm9))
                        zmm10 = data_1434426d0
                        float temp0_651[0x4] = _mm_div_ps(temp0_650, zmm10)
                        zmm2 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(arg5, 0), zmm9)), 
                            zmm10)
                        float temp0_659[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm3, 0), zmm9)), 
                            zmm10)
                        zmm5 = data_143442710
                        zmm4 = _mm_mul_ps(temp0_651, zmm5)
                        zmm2 = _mm_mul_ps(zmm2, zmm5)
                        zmm3 = _mm_mul_ps(temp0_659, zmm5)
                        zmm1 = var_288_1
                    case 3
                        zmm1 = var_238_6 & zmm12
                        int64_t rax_147 = sx.q(zmm1.d)
                        void* rcx_42 = arg9 + rax_147
                        zmm2 = *(arg9 + rax_147)
                        int64_t rax_149 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
                        void* rdx_10 = arg9 + rax_149
                        zmm2 = _mm_unpacklo_ps(zmm2, (*(arg9 + rax_149))[0].q)
                        int64_t rax_151 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
                        void* rbx_27 = arg9 + rax_151
                        zmm3 = *(arg9 + rax_151)
                        int64_t rax_153 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
                        void* rdi_24 = arg9 + rax_153
                        float temp0_667[0x4] = _mm_unpacklo_ps(zmm3, (*(arg9 + rax_153))[0].q)
                        var_258_1.o = zmm2[0].q | temp0_667[0].q << 0x40
                        zmm3 = data_142fc95e0 & zmm12
                        uint128_t var_2a8_4 = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rcx_42), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_10))[0].q).q |
                            _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_27), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rdi_24))[0].q)[0].q << 0x40
                        zmm3 = data_142fc95f0 & zmm12
                        zmm1 = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rcx_42), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_10))[0].q).q |
                            _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_27), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rdi_24))[0].q)[0].q << 0x40
                        zmm3 = data_143442650 & zmm12
                        float var_248_6[0x4] = arg6
                        float temp0_679[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rcx_42), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_10))[0].q)
                        float temp0_682[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_27), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rdi_24))[0].q)
                        arg6 = temp0_679[0].q | temp0_682[0].q << 0x40
                        zmm4 = data_143442660 & zmm12
                        zmm10 = _mm_unpacklo_ps(*(zx.q(zmm4[0]) + rcx_42), 
                            (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + rdx_10))[0].q)
                        float temp0_687[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + rbx_27), 
                            (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + rdi_24))[0].q)
                        zmm10 = zmm10[0].q | temp0_687[0].q << 0x40
                        zmm3 = data_143442670 & zmm12
                        zmm9 = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rcx_42), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_10))[0].q).q |
                            _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_27), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rdi_24))[0].q)[0].q << 0x40
                        arg8 = _mm_add_epi64(arg8, arg7)
                        zmm4 = _mm_add_epi64(__paddq_xmmdq_memdq(var_228_1, var_218_3), zmm5)
                        arg8 = _mm_add_epi64(arg8, arg5)
                        zmm3 = _mm_shuffle_epi32(zmm12, 0x50) & arg8
                        zmm2 = _mm_shuffle_epi32(zmm12, 0xfa) & zmm4
                        int64_t rax_174 = zmm3[0].q
                        int64_t rcx_43 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                        int64_t rdx_11 = zmm2[0].q
                        int64_t rbx_28 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        zmm2 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg9 + rax_174)), 
                                zx.o(*(arg9 + rcx_43))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg9 + rdx_11)), zx.o(*(arg9 + rbx_28))[0].q)[
                            0].q)
                        zmm3 = zmm2
                        zmm5 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                        zmm2 &= data_143442680
                        zmm3 = _mm_srli_epi32(zmm3, 0x15)
                        float temp0_709[0x4] = _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2, data_143442490)), 
                                data_1434426a0), 
                            arg6)
                        arg6 = var_248_6
                        zmm4 = __addps_xmmps_memps(temp0_709, var_258_1.o)
                        arg5 = data_143442440
                        zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm5, arg5))
                        zmm5 = data_143442690
                        zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_div_ps(zmm2, zmm5), zmm10), 
                            var_2a8_4)
                        zmm3 = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm3, arg5)), zmm5), 
                                zmm9), 
                            zmm1)
                        zmm1 = var_288_1
                    case 4, 5
                        goto label_1401588a8
                    case 6
                        rcx_44 = temp0_595
                        zmm3 = zx.o(0)
                        zmm2 = zx.o(0)
                        zmm1 = var_288_1
                        
                        if ((rcx_44 & 4) == 0)
                            goto label_1401588e6
                        
                        goto label_1401588df
            float temp0_734[0x4] = _mm_sub_ps(zmm4, zmm6)
            zmm2 = _mm_sub_ps(zmm2, zmm8)
            float temp0_736[0x4] = _mm_mul_ps(temp0_734, zmm1)
            zmm5 = zmm6
            char temp8_1 = temp0_595 & 1
            
            if (temp8_1 != 0)
                zmm5 = zmm6
                zmm5[0] = zmm5[0] + temp0_736[0]
            
            float temp0_737[0x4] = _mm_sub_ps(zmm3, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm1)
            arg5 = zmm8
            zmm9 = var_298_1.o
            
            if (temp8_1 != 0)
                arg5 = zmm8
                arg5[0] = arg5[0] f+ zmm2[0]
                zmm1 = _mm_mul_ps(zmm1, temp0_737)
                zmm3 = zmm0
                
                if (temp8_1 != 0)
                    goto label_140158b5c
                
                goto label_1401589b4
            
            zmm1 = _mm_mul_ps(zmm1, temp0_737)
            zmm3 = zmm0
            bool cond:50_1
            bool cond:51_1
            bool cond:60_1
            bool cond:61_1
            
            if (temp8_1 != 0)
            label_140158b5c:
                zmm3 = zmm0
                zmm3[0] = zmm3[0] f+ zmm1.d
                zmm6 = _mm_add_ps(zmm6, temp0_736)
                char temp14_1 = temp0_595 & 2
                cond:50_1 = temp14_1 == 0
                cond:51_1 = temp14_1 != 0
                cond:60_1 = temp14_1 == 0
                cond:61_1 = temp14_1 != 0
                
                if (temp14_1 != 0)
                    goto label_1401589cb
                
                goto label_140158b6f
            
        label_1401589b4:
            zmm6 = _mm_add_ps(zmm6, temp0_736)
            char temp13_1 = temp0_595 & 2
            cond:50_1 = temp13_1 == 0
            cond:51_1 = temp13_1 != 0
            cond:60_1 = temp13_1 == 0
            cond:61_1 = temp13_1 != 0
            
            if (temp13_1 != 0)
            label_1401589cb:
                zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm5, 1), zmm5, 0xe2)
                zmm8 = _mm_add_ps(zmm8, zmm2)
                
                if (cond:51_1)
                    goto label_140158b85
                
                goto label_1401589d8
            
        label_140158b6f:
            zmm8 = _mm_add_ps(zmm8, zmm2)
            
            if (not(cond:50_1))
            label_140158b85:
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, arg5, 1), arg5, 0xe2)
                zmm0 = _mm_add_ps(zmm0, zmm1)
                
                if (cond:61_1)
                    goto label_1401589ec
                
                goto label_140158b91
            
        label_1401589d8:
            zmm0 = _mm_add_ps(zmm0, zmm1)
            bool cond:74_1
            bool cond:75_1
            bool cond:84_1
            bool cond:85_1
            
            if (not(cond:60_1))
            label_1401589ec:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm3, 1), zmm3, 0xe2)
                char temp18_1 = temp0_595 & 4
                cond:74_1 = temp18_1 == 0
                cond:75_1 = temp18_1 != 0
                cond:84_1 = temp18_1 == 0
                cond:85_1 = temp18_1 != 0
                
                if (temp18_1 != 0)
                    goto label_140158ba1
                
                goto label_1401589f8
            
        label_140158b91:
            char temp17_1 = temp0_595 & 4
            cond:74_1 = temp17_1 == 0
            cond:75_1 = temp17_1 != 0
            cond:84_1 = temp17_1 == 0
            cond:85_1 = temp17_1 != 0
            
            if (temp17_1 == 0)
            label_1401589f8:
                
                if (not(cond:74_1))
                label_140158a06:
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm8, arg5, 0x32), 0x84)
                    
                    if (cond:85_1)
                        goto label_140158bb8
                    
                    goto label_140158a10
            else
            label_140158ba1:
                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm6, zmm5, 0x32), 0x84)
                
                if (cond:75_1)
                    goto label_140158a06
            
            bool cond:96_1
            bool cond:97_1
            bool cond:104_1
            bool cond:105_1
            
            if (not(cond:84_1))
            label_140158bb8:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm0, zmm3, 0x32), 0x84)
                char temp20_1 = temp0_595 & 8
                cond:96_1 = temp20_1 == 0
                cond:97_1 = temp20_1 != 0
                cond:104_1 = temp20_1 == 0
                cond:105_1 = temp20_1 != 0
                
                if (temp20_1 != 0)
                    goto label_140158a21
                
                goto label_140158bc5
            
        label_140158a10:
            char temp19_1 = temp0_595 & 8
            cond:96_1 = temp19_1 == 0
            cond:97_1 = temp19_1 != 0
            cond:104_1 = temp19_1 == 0
            cond:105_1 = temp19_1 != 0
            
            if (temp19_1 != 0)
            label_140158a21:
                zmm6 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm6, zmm5, 0x23), 0x24)
                
                if (cond:97_1)
                    goto label_140158bd8
                
                goto label_140158a2a
            
        label_140158bc5:
            zmm6 = zmm5
            
            if (cond:96_1)
            label_140158a2a:
                zmm8 = arg5
                
                if (not(cond:104_1))
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm0, zmm3, 0x23), 0x24)
            else
            label_140158bd8:
                zmm8 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm8, arg5, 0x23), 0x24)
                
                if (cond:105_1)
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm0, zmm3, 0x23), 0x24)
            
            zmm0 = zmm3
        
        zmm11 = temp0_593[0].q | zmm9.q << 0x40
        zmm2 = zx.o(zmm0.q)
        zmm0 = _mm_unpackhi_ps(zmm0, zx.o(0))
        float temp0_754[0x4] = _mm_unpacklo_ps(zmm6, zmm8.q)
        zmm6 = _mm_unpackhi_ps(zmm6, zmm8)
        float var_168[0x4] = _mm_shuffle_ps(temp0_754, zmm2, 0x84)
        float var_158_1[0x4] = _mm_shuffle_ps(temp0_754, zmm2, 0xde)
        uint32_t var_148_1[0x4] = zmm6[0].q | zmm0.q << 0x40
        uint32_t var_138_1[0x4] = _mm_unpackhi_pd(zmm6, zmm0.q)
        uint64_t i = zx.q(_mm_movemask_ps(arg6))
        
        do
            uint64_t rcx_46
            uint64_t rflags_1
            
            if (i == 0)
                rcx_46 = 0x40
            else
                rcx_46, rflags_1 = _bit_scan_forward(i)
            float var_178[0x4] = zmm11
            result = sx.q(var_178[zx.q(rcx_46.d) & 3]) * 0x30
            *(arg1 + result + 0x20) = (&var_168)[rcx_46]
            i &= rol.q(-2, rcx_46.b)
        while (i != 0)
else
    uint32_t temp0_2[0x4] = _mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0)
    uint128_t var_1a8_1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    int32_t rcx_5
    rcx_5.b = r10.d == 3
    uint128_t var_188_1 = _mm_shuffle_epi32(0x18 & zx.o(neg.d(rcx_5)), 0)
    uint128_t var_218_1 = _mm_shuffle_epi32(zx.o(rax_1), 0)
    int32_t r11_1 = 0
    uint128_t var_198_1 = _mm_shuffle_epi32(temp0_2, 0xf5)
    arg6 = _mm_cmpeq_epi32(arg6, arg6)
    r12 = 0
    
    do
        int64_t rcx_7 = sx.q(r11_1)
        zmm1 = *(arg2 + rcx_7)
        zmm2 = *(arg2 + rcx_7 + 0x10)
        zmm0 = _mm_shuffle_ps(zmm1, zmm2, 0xdd)
        uint128_t var_2a8_1 = zmm1
        int64_t var_258
        var_258.o = zmm2
        zmm1 = __pmuludq_xmmdq_memdq(_mm_shuffle_ps(zmm1, zmm2, 0xff), var_198_1)
        uint32_t temp0_23[0x4] = _mm_shuffle_epi32(zmm1, 0xe8)
        zmm0 = __pmuludq_xmmdq_memdq(zmm0, temp0_2)
        zmm3 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm0, 0xe8), temp0_23[0].q)
        int64_t rsi_1 = sx.q(zmm0.d)
        int64_t r9 = sx.q(*(arg3 + rsi_1))
        int64_t rax_2 = sx.q(zmm1.d)
        int64_t r14_1 = sx.q(*(arg3 + rax_2))
        int64_t rbx_1 = sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
        int64_t rcx_11 = sx.q(*(arg3 + rbx_1))
        int64_t rdi_1 = sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
        int64_t rbp_2 = sx.q(*(arg3 + rdi_1))
        zmm12 = _mm_unpacklo_epi32(zx.o(rcx_11.d), zx.q(rbp_2.d))
        zmm8 = _mm_unpacklo_epi32(zx.o(r9.d), zx.q(r14_1.d))
        zmm2 = _mm_unpacklo_epi64(zmm8, zmm12.q)
        zmm1 = _mm_unpacklo_epi32(zx.o(*(arg3 + rbx_1 + 4)), zx.q(*(arg3 + rdi_1 + 4)))
        zmm5 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + rsi_1 + 4)), zx.q(*(arg3 + rax_2 + 4))), zmm1.q)
        zmm9 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm12, zmm8.q))
        uint32_t var_248_1[0x4] = zmm2
        int32_t temp0_37[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm2)
        zmm1 = _mm_cmpgt_epi32(data_1434422d0, zmm5)
        char temp0_39 = _mm_movemask_ps(zmm1)
        
        if (temp0_39 == 0)
            zmm1 = zx.o(0)
        label_140156347:
            zmm2 = zx.o(arg10)
            zmm6 = zmm1 ^ arg6
            
            if (zx.o(0).d f>= zmm2[0])
                arg7 &= zmm1
                zmm0 = arg5 & zmm1
                arg5 = zx.o(0)
            else
                bool cond:2_1 = zmm2[0] f>= 1f
                zmm4 = _mm_add_epi32(zmm5, arg6)
                
                if (cond:2_1)
                    zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm6, 0x1f), 0x1f)
                    zmm4 &= zmm0
                    zmm1 = (zmm0 & not.o(arg7)) | zmm4
                    zmm0 = (zmm0 & not.o(arg5)) | zmm4
                    arg5 = zx.o(0)
                    arg7 = zmm1
                else
                    float var_238_1[0x4] = arg5
                    arg6 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm4), var_1a8_1)
                    zmm0 = __andps_xmmxud_memxud(arg6, data_142d3f780)
                    zmm2 = __addps_xmmps_memps(
                        __addps_xmmps_memps(__andps_xmmxud_memxud(arg6, data_142d3f770), 
                            data_142d3f740), 
                        data_1434427a0) ^ zmm0
                    arg5 = zx.o(0)
                    zmm1 = _mm_add_ps(
                        __andps_xmmxud_memxud(_mm_cmpeq_ps(arg6, zmm2, 1), data_142d3f7e0), zmm2)
                    float temp0_50[0x4] = _mm_cvttps_epi32(zmm1)
                    zmm2 = _mm_cmpgt_epi32(temp0_50, zmm4)
                    zmm3 = _mm_srai_epi32(_mm_slli_epi32(zmm6, 0x1f), 0x1f)
                    arg7 =
                        (zmm3 & not.o(arg7)) | (((zmm2 & not.o(temp0_50)) | (zmm4 & zmm2)) & zmm3)
                    
                    if (arg11 != 1)
                        arg6 = _mm_sub_ps(arg6, zmm1)
                        arg5 = arg6
                    
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    zmm0 = _mm_sub_epi32(arg7, arg6)
                    zmm1 = _mm_cmpgt_epi32(zmm4, zmm0)
                    zmm0 =
                        (zmm3 & not.o(var_238_1)) | (((zmm1 & not.o(zmm4)) | (zmm0 & zmm1)) & zmm3)
            
            zmm6 = _mm_srai_epi32(_mm_slli_epi32(zmm6, 0x1f), 0x1f)
            arg8 = (zmm6 & not.o(arg8)) | (arg5 & zmm6)
            arg5 = zmm0
        else
            arg7 = zmm1 & not.o(arg7)
            arg5 = zmm1 & not.o(arg5)
            arg8 = zmm1 & not.o(arg8)
            
            if (temp0_39 != 0xf)
                goto label_140156347
        
        int64_t var_298
        var_298.o = arg8
        zmm12 = _mm_unpacklo_epi32(zmm12, zmm9.q)
        zmm8 = _mm_unpacklo_epi32(zmm8, temp0_37[0].q)
        zmm5 = __pcmpgtd_xmmdq_memdq(zmm5, data_142d3f5b0) & var_188_1
        zmm3 = zx.o(0)
        arg8 = _mm_unpackhi_epi32(zmm5, zmm3[0].q)
        zmm5 = _mm_unpacklo_epi32(zmm5, zmm3[0].q)
        uint32_t temp0_68[0x4] = _mm_shuffle_epi32(_mm_mul_epu32(arg7, var_218_1), 0xe8)
        zmm1 = _mm_shuffle_epi32(var_218_1, 0xf5)
        zmm6 = _mm_unpacklo_epi32(temp0_68, 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg7, 0xf5), zmm1), 0xe8).q)
        zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm6)
        zmm4 = _mm_shuffle_epi32(zmm6, 0x4e)
        zmm6 = _mm_unpacklo_epi32(zmm6, zmm0.q)
        zmm4 = _mm_unpacklo_epi32(zmm4, _mm_cmpgt_epi32(zx.o(0), zmm4).q)
        
        if (r10.d u< 2)
            zmm0 = _mm_add_epi64(zmm5, zmm8)
            zmm2 = _mm_add_epi64(_mm_add_epi64(arg8, zmm12), zmm4)
            zmm0 = _mm_add_epi64(zmm0, zmm6)
            int64_t rax_4 = zmm0.q
            int64_t rcx_13 = _mm_shuffle_epi32(zmm0, 0x4e).q
            int64_t rbp_4 = zmm2[0].q
            int64_t rbx_3 = _mm_shuffle_epi32(zmm2, 0x4e).q
            zmm10 = zx.o(*(arg9 + rax_4 + 4))
            zmm11 = _mm_unpacklo_epi32(zx.o(*(arg9 + rax_4)), zx.q(*(arg9 + rcx_13)))
            int32_t temp0_125[0x4] = _mm_unpacklo_epi32(zmm10, zx.q(*(arg9 + rcx_13 + 4)))
            zmm2 = zx.o(*(arg9 + rbp_4 + 4))
            zmm11 = _mm_unpacklo_epi64(zmm11, 
                _mm_unpacklo_epi32(zx.o(*(arg9 + rbp_4)), zx.o(*(arg9 + rbx_3))[0].q).q)
            zmm10 = _mm_unpacklo_epi64(temp0_125, 
                _mm_unpacklo_epi32(zmm2, zx.q(*(arg9 + rbx_3 + 4)))[0].q)
            zmm3 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg9 + rax_4 + 8)), zx.q(*(arg9 + rcx_13 + 8))), 
                _mm_unpacklo_epi32(zx.o(*(arg9 + rbp_4 + 8)), zx.o(*(arg9 + rbx_3 + 8))[0].q).q)
        else if (r10.d == 2)
            zmm0 = _mm_add_epi64(zmm5, zmm8)
            zmm9 = zmm1
            zmm1 = _mm_add_epi64(_mm_add_epi64(arg8, zmm12), zmm4)
            zmm0 = _mm_add_epi64(zmm0, zmm6)
            int64_t rdi_2 = zmm0.q
            int64_t rbx_4 = _mm_shuffle_epi32(zmm0, 0x4e).q
            int64_t rcx_14 = zmm1.q
            int64_t rbp_5 = _mm_shuffle_epi32(zmm1, 0x4e).q
            zmm0 = _mm_unpacklo_epi16(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg9 + rdi_2)), *(arg9 + rbx_4), 1), 
                        *(arg9 + rcx_14), 2), 
                    *(arg9 + rbp_5), 3), 
                0)
            zmm2 = data_1434424d0
            float temp0_144[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm2))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg9 + rdi_2 + 2)), *(arg9 + rbx_4 + 2), 1), 
                    *(arg9 + rcx_14 + 2), 2), 
                *(arg9 + rbp_5 + 2), 3)
            zmm3 = data_1434426d0
            float temp0_148[0x4] = _mm_div_ps(temp0_144, zmm3)
            int32_t temp0_151[0x4] =
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), zmm2))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg9 + rdi_2 + 4)), *(arg9 + rbx_4 + 4), 1), 
                    *(arg9 + rcx_14 + 4), 2), 
                *(arg9 + rbp_5 + 4), 3)
            zmm10 = _mm_div_ps(temp0_151, zmm3)
            zmm1 = zmm9
            float temp0_159[0x4] =
                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), zmm2)), zmm3)
            zmm0 = data_143442710
            zmm11 = _mm_mul_ps(temp0_148, zmm0)
            zmm10 = _mm_mul_ps(zmm10, zmm0)
            zmm3 = _mm_mul_ps(temp0_159, zmm0)
        else
            zmm10 = zx.o(0)
            zmm11 = zx.o(0)
            
            if (r10.d == 3)
                zmm2 = *(arg9 + rbp_2 + 4)
                float temp0_79[0x4] = _mm_unpacklo_ps(*(arg9 + rcx_11), (*(arg9 + rbp_2)).q)
                zmm0 = _mm_unpacklo_ps(*(arg9 + rcx_11 + 4), zmm2[0].q)
                uint128_t var_278_1 = arg7
                arg7 = arg5
                arg5 = *(arg9 + r14_1 + 4)
                zmm10 = _mm_unpacklo_ps(*(arg9 + r9), (*(arg9 + r14_1))[0].q)[0].q
                    | temp0_79[0].q << 0x40
                arg6 = _mm_unpacklo_ps(*(arg9 + r9 + 4), arg5[0].q)[0].q | zmm0.q << 0x40
                zmm9 = _mm_unpacklo_ps(*(arg9 + r9 + 8), (*(arg9 + r14_1 + 8)).q).q
                    | _mm_unpacklo_ps(*(arg9 + rcx_11 + 8), (*(arg9 + rbp_2 + 8))[0].q).q << 0x40
                float temp0_85[0x4] = _mm_unpacklo_ps(*(arg9 + r9 + 0xc), (*(arg9 + r14_1 + 0xc)).q)
                zmm0 = _mm_unpacklo_ps(*(arg9 + rcx_11 + 0xc), (*(arg9 + rbp_2 + 0xc))[0].q)
                zmm3 = temp0_85[0].q | zmm0.q << 0x40
                float temp0_87[0x4] =
                    _mm_unpacklo_ps(*(arg9 + r9 + 0x10), (*(arg9 + r14_1 + 0x10)).q)
                zmm0 = _mm_unpacklo_ps(*(arg9 + rcx_11 + 0x10), (*(arg9 + rbp_2 + 0x10))[0].q)
                arg5 = temp0_87[0].q | zmm0.q << 0x40
                zmm2 = _mm_unpacklo_ps(*(arg9 + r9 + 0x14), (*(arg9 + r14_1 + 0x14)).q)
                uint128_t var_238_2 = zmm1
                zmm0 = _mm_unpacklo_ps(*(arg9 + rcx_11 + 0x14), (*(arg9 + rbp_2 + 0x14)).q)
                zmm2 = zmm2[0].q | zmm0.q << 0x40
                zmm0 = _mm_add_epi64(_mm_add_epi64(arg8, zmm12), zmm4)
                zmm1 = _mm_add_epi64(_mm_add_epi64(zmm5, zmm8), zmm6)
                int64_t rcx_12 = _mm_shuffle_epi32(zmm1, 0x4e).q
                int64_t rbx_2 = _mm_shuffle_epi32(zmm0, 0x4e).q
                zmm0 = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(zx.o(*(arg9 + zmm1.q)), zx.q(*(arg9 + rcx_12))), 
                    _mm_unpacklo_epi32(zx.o(*(arg9 + zmm0.q)), zx.o(*(arg9 + rbx_2))[0].q).q)
                zmm1 = zmm0
                zmm11 = _mm_add_ps(
                    _mm_mul_ps(
                        __divps_xmmps_memps(
                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                data_143442490)), 
                            data_1434426a0), 
                        zmm3), 
                    zmm10)
                zmm4 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                zmm0 = data_143442440
                zmm10 = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm0))
                zmm3 = data_143442690
                zmm10 = _mm_mul_ps(_mm_div_ps(zmm10, zmm3), arg5)
                arg5 = arg7
                arg7 = var_278_1
                zmm10 = _mm_add_ps(zmm10, arg6)
                arg6 = _mm_cmpeq_epi32(arg6, arg6)
                float temp0_114[0x4] =
                    _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm1, 0x15), zmm0))
                zmm1 = var_238_2
                zmm3 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_114, zmm3), zmm2), zmm9)
        
        zmm9 = _mm_cmpeq_epi32(arg7, arg5) ^ arg6
        char temp0_164 = _mm_movemask_ps(zmm9)
        
        if (temp0_164 == 0)
            arg8 = var_298.o
            zmm8 = var_258.o
            zmm9 = var_2a8_1
        else
            uint128_t var_278_2 = arg7
            uint128_t var_288
            uint128_t var_268
            float var_228[0x4]
            int64_t rbx_7
            int64_t rdi_5
            int64_t r9_2
            int64_t r14_3
            
            if (r10.d u> 6)
            label_140156b90:
                uint64_t r14_4 = zx.q(temp0_164)
                rdi_5 = r14_4 & 1
                zmm4 = var_228
                
                if (rdi_5 == 0)
                    zmm5 = var_288
                else
                    zmm5 = var_288
                    zmm5[0] = zx.o(0).d
                
                zmm2 = var_268
                arg8 = var_298.o
                zmm8 = var_258.o
                zmm9 = var_2a8_1
                
                if (rdi_5 != 0)
                    zmm4[0] = zx.o(0).d
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                    arg7 = var_278_2
                    
                    if (rdi_5 != 0)
                        goto label_140157321
                    
                    goto label_1401572af
                
                arg6 = _mm_cmpeq_epi32(arg6, arg6)
                arg7 = var_278_2
                bool cond:34_1
                bool cond:35_1
                bool cond:38_1
                bool cond:39_1
                
                if (rdi_5 != 0)
                label_140157321:
                    zmm2[0] = 0
                    r9_2 = r14_4 & 2
                    cond:34_1 = r9_2 == 0
                    cond:35_1 = r9_2 != 0
                    cond:38_1 = r9_2 == 0
                    cond:39_1 = r9_2 != 0
                    
                    if (r9_2 != 0)
                        goto label_1401572c0
                    
                    goto label_14015732e
                
            label_1401572af:
                r9_2 = r14_4 & 2
                cond:34_1 = r9_2 == 0
                cond:35_1 = r9_2 != 0
                cond:38_1 = r9_2 == 0
                cond:39_1 = r9_2 != 0
                
                if (r9_2 == 0)
                label_14015732e:
                    
                    if (not(cond:34_1))
                    label_14015733b:
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm4, 0), zmm4, 0xe2)
                        
                        if (cond:39_1)
                            goto label_1401572d2
                        
                        goto label_140157343
                else
                label_1401572c0:
                    zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm5, 0), zmm5, 0xe2)
                    
                    if (cond:35_1)
                        goto label_14015733b
                
                bool cond:62_1
                bool cond:63_1
                bool cond:64_1
                bool cond:65_1
                
                if (not(cond:38_1))
                label_1401572d2:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm2, 0), zmm2, 0xe2)
                    rbx_7 = r14_4 & 4
                    cond:62_1 = rbx_7 == 0
                    cond:63_1 = rbx_7 != 0
                    cond:64_1 = rbx_7 == 0
                    cond:65_1 = rbx_7 != 0
                    
                    if (rbx_7 != 0)
                        goto label_140157350
                    
                    goto label_1401572de
                
            label_140157343:
                rbx_7 = r14_4 & 4
                cond:62_1 = rbx_7 == 0
                cond:63_1 = rbx_7 != 0
                cond:64_1 = rbx_7 == 0
                cond:65_1 = rbx_7 != 0
                
                if (rbx_7 == 0)
                label_1401572de:
                    
                    if (not(cond:62_1))
                    label_1401572e7:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(0), zmm4, 0x30), 0x84)
                        
                        if (cond:65_1)
                            goto label_14015735f
                        
                        goto label_1401572ed
                else
                label_140157350:
                    zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zx.o(0), zmm5, 0x30), 0x84)
                    
                    if (cond:63_1)
                        goto label_1401572e7
                
                bool cond:86_1
                bool cond:87_1
                bool cond:88_1
                bool cond:89_1
                
                if (not(cond:64_1))
                label_14015735f:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x30), 0x84)
                    r14_3 = r14_4 & 8
                    cond:86_1 = r14_3 == 0
                    cond:87_1 = r14_3 != 0
                    cond:88_1 = r14_3 == 0
                    cond:89_1 = r14_3 == 0
                    
                    if (r14_3 != 0)
                        goto label_1401572fa
                    
                    goto label_140157369
                
            label_1401572ed:
                r14_3 = r14_4 & 8
                cond:86_1 = r14_3 == 0
                cond:87_1 = r14_3 != 0
                cond:88_1 = r14_3 == 0
                cond:89_1 = r14_3 == 0
                
                if (r14_3 != 0)
                label_1401572fa:
                    zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zx.o(0), zmm5, 0x20), 0x24)
                    
                    if (cond:87_1)
                        goto label_140157372
                    
                    goto label_140157300
                
            label_140157369:
                
                if (cond:86_1)
                label_140157300:
                    
                    if (not(cond:88_1))
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                else
                label_140157372:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(0), zmm4, 0x20), 0x24)
                    
                    if (not(cond:89_1))
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
            else
                arg7 = _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(arg5, var_218_1), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg5, 0xf5), zmm1), 0xe8).q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), arg7)
                arg6 = _mm_shuffle_epi32(arg7, 0x4e)
                arg7 = _mm_unpacklo_epi32(arg7, zmm0.q)
                arg6 = _mm_unpacklo_epi32(arg6, _mm_cmpgt_epi32(zx.o(0), arg6).q)
                
                switch (r10.d)
                    case 0, 1
                        float var_238_3[0x4] = arg5
                        zmm5 = _mm_add_epi64(zmm5, zmm8)
                        arg8 = _mm_add_epi64(_mm_add_epi64(arg8, zmm12), arg6)
                        zmm5 = _mm_add_epi64(zmm5, arg7)
                        zmm1 = _mm_shuffle_epi32(zmm9, 0x50)
                        zmm5 &= zmm1
                        zmm4 = _mm_shuffle_epi32(zmm9, 0xfa)
                        arg8 &= zmm4
                        int64_t rax_11 = _mm_shuffle_epi32(zmm5, 0x4e).q
                        void* rcx_15 = arg9 + rax_11
                        arg5 = *(arg9 + rax_11)
                        int64_t rax_12 = arg8[0].q
                        void* rdi_3 = arg9 + rax_12
                        arg6 = zx.o(*(arg9 + rax_12))
                        int64_t rax_13 = _mm_shuffle_epi32(arg8, 0x4e).q
                        void* rsi_3 = arg9 + rax_13
                        zmm8 = *(arg9 + rax_13)
                        zmm2 = data_1434426c0
                        zmm0 = zmm1 & zmm2
                        zmm6 = zmm4 & zmm2
                        void* rbp_7 = zmm5[0].q + arg9
                        zmm2 = *(zmm0.q + rbp_7)
                        zmm0 = *(_mm_shuffle_epi32(zmm0, 0x4e).q + rcx_15)
                        arg7 = *(zmm6[0].q + rdi_3)
                        zmm9 = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rsi_3)
                        zmm5 = data_1434426e0
                        zmm1 &= zmm5
                        zmm4 &= zmm5
                        zmm5 = *(zmm1.q + rbp_7)
                        zmm1 = *(_mm_shuffle_epi32(zmm1, 0x4e).q + rcx_15)
                        arg8 = *(zmm4[0].q + rdi_3)
                        zmm12 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rsi_3)
                        uint64_t r14_2 = zx.q(temp0_164)
                        rdi_5 = r14_2 & 1
                        bool cond:24_1
                        bool cond:25_1
                        
                        if (rdi_5 == 0)
                            zmm4 = var_228
                            cond:24_1 = rdi_5 != 0
                            cond:25_1 = rdi_5 == 0
                            
                            if (rdi_5 == 0)
                                goto label_140157137
                            
                            goto label_140156ab8
                        
                        zmm6 = var_288
                        zmm6[0] = (*rbp_7)[0]
                        var_288 = zmm6
                        zmm4 = var_228
                        cond:24_1 = rdi_5 != 0
                        cond:25_1 = rdi_5 == 0
                        
                        if (rdi_5 == 0)
                        label_140157137:
                            zmm2 = var_268
                            
                            if (cond:25_1)
                                goto label_140156ac7
                            
                            goto label_140157142
                        
                    label_140156ab8:
                        zmm4[0] = zmm2[0]
                        zmm2 = var_268
                        bool cond:40_1
                        bool cond:41_1
                        bool cond:52_1
                        bool cond:53_1
                        
                        if (not(cond:24_1))
                        label_140156ac7:
                            zmm5 = var_288
                            r9_2 = r14_2 & 2
                            cond:40_1 = r9_2 != 0
                            cond:41_1 = r9_2 == 0
                            cond:52_1 = r9_2 != 0
                            cond:53_1 = r9_2 == 0
                            
                            if (r9_2 == 0)
                                goto label_140157158
                            
                            goto label_140156ae1
                        
                    label_140157142:
                        zmm2[0] = zmm5[0]
                        zmm5 = var_288
                        r9_2 = r14_2 & 2
                        cond:40_1 = r9_2 != 0
                        cond:41_1 = r9_2 == 0
                        cond:52_1 = r9_2 != 0
                        cond:53_1 = r9_2 == 0
                        
                        if (r9_2 == 0)
                        label_140157158:
                            arg5 = var_238_3
                            
                            if (cond:41_1)
                                goto label_140156af0
                            
                            goto label_14015716c
                        
                    label_140156ae1:
                        zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm5, 0), zmm5, 0xe2)
                        arg5 = var_238_3
                        
                        if (not(cond:40_1))
                        label_140156af0:
                            
                            if (cond:53_1)
                                goto label_140157178
                            
                            goto label_140156afe
                        
                    label_14015716c:
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm4, 0), zmm4, 0xe2)
                        bool cond:66_1
                        bool cond:67_1
                        bool cond:76_1
                        bool cond:77_1
                        
                        if (not(cond:52_1))
                        label_140157178:
                            rbx_7 = r14_2 & 4
                            cond:66_1 = rbx_7 != 0
                            cond:67_1 = rbx_7 == 0
                            cond:76_1 = rbx_7 != 0
                            cond:77_1 = rbx_7 == 0
                            
                            if (rbx_7 == 0)
                                goto label_140156b0e
                            
                            goto label_140157182
                        
                    label_140156afe:
                        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm2, 0), zmm2, 0xe2)
                        rbx_7 = r14_2 & 4
                        cond:66_1 = rbx_7 != 0
                        cond:67_1 = rbx_7 == 0
                        cond:76_1 = rbx_7 != 0
                        cond:77_1 = rbx_7 == 0
                        
                        if (rbx_7 == 0)
                        label_140156b0e:
                            arg6 = _mm_cmpeq_epi32(arg6, arg6)
                            
                            if (cond:67_1)
                                goto label_140157197
                            
                            goto label_140156b1e
                        
                    label_140157182:
                        float temp0_300[0x4] = _mm_shuffle_ps(arg6, zmm5, 0x30)
                        zmm5 = _mm_shuffle_ps(zmm5, temp0_300, 0x84)
                        arg6 = _mm_cmpeq_epi32(temp0_300, temp0_300)
                        
                        if (not(cond:66_1))
                        label_140157197:
                            arg7 = var_278_2
                            
                            if (cond:77_1)
                                goto label_140156b30
                            
                            goto label_1401571a9
                        
                    label_140156b1e:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(arg7, zmm4, 0x30), 0x84)
                        arg7 = var_278_2
                        bool cond:90_1
                        bool cond:91_1
                        bool cond:98_1
                        bool cond:99_1
                        
                        if (not(cond:76_1))
                        label_140156b30:
                            arg8 = var_298.o
                            r14_3 = r14_2 & 8
                            cond:90_1 = r14_3 != 0
                            cond:91_1 = r14_3 == 0
                            cond:98_1 = r14_3 == 0
                            cond:99_1 = r14_3 != 0
                            
                            if (r14_3 == 0)
                                goto label_1401571be
                            
                            goto label_140156b45
                        
                    label_1401571a9:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg8, zmm2, 0x30), 0x84)
                        arg8 = var_298.o
                        r14_3 = r14_2 & 8
                        cond:90_1 = r14_3 != 0
                        cond:91_1 = r14_3 == 0
                        cond:98_1 = r14_3 == 0
                        cond:99_1 = r14_3 != 0
                        
                        if (r14_3 == 0)
                        label_1401571be:
                            zmm8 = var_258.o
                            
                            if (cond:91_1)
                                goto label_140156b57
                            
                            goto label_1401571d0
                        
                    label_140156b45:
                        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm8, zmm5, 0x20), 0x24)
                        zmm8 = var_258.o
                        
                        if (cond:90_1)
                        label_1401571d0:
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x20), 0x24)
                            zmm9 = var_2a8_1
                            
                            if (not(cond:98_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x20), 0x24)
                        else
                        label_140156b57:
                            zmm9 = var_2a8_1
                            
                            if (cond:99_1)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm12, zmm2, 0x20), 0x24)
                    case 2
                        float var_238_4[0x4] = arg5
                        zmm5 = _mm_add_epi64(zmm5, zmm8)
                        arg8 = _mm_add_epi64(_mm_add_epi64(arg8, zmm12), arg6)
                        zmm5 = _mm_add_epi64(zmm5, arg7)
                        zmm1 = _mm_shuffle_epi32(zmm9, 0x50)
                        zmm5 &= zmm1
                        zmm0 = _mm_shuffle_epi32(zmm9, 0xfa)
                        arg8 &= zmm0
                        int64_t r9_3 = zmm5[0].q
                        void* rcx_16 = arg9 + r9_3
                        int64_t rbp_8 = _mm_shuffle_epi32(zmm5, 0x4e)[0].q
                        void* rsi_4 = arg9 + rbp_8
                        int64_t rdi_7 = arg8[0].q
                        zmm8 = data_1434426b0
                        zmm2 = zmm1 & zmm8
                        void* rax_22 = zmm2[0].q
                        uint32_t temp0_204[0x4] = _mm_shuffle_epi32(zmm2, 0x4e)
                        zmm2 = data_1434426c0
                        zmm1 &= zmm2
                        zmm4 = __pinsrw_xmmdq_memw_immb(zx.o(*(rax_22 + rcx_16)), 
                            *(temp0_204[0].q + rsi_4), 1)
                        uint32_t rax_26 = zx.d(*(zmm1.q + rcx_16))
                        void* rcx_17 = arg9 + rdi_7
                        uint32_t temp0_206[0x4] = _mm_shuffle_epi32(arg8, 0x4e)
                        zmm6 = __pinsrw_xmmdq_memw_immb(zx.o(rax_26), 
                            *(_mm_shuffle_epi32(zmm1, 0x4e).q + rsi_4), 1)
                        zmm5 = zmm0 & zmm8
                        zmm0 &= zmm2
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(zmm5[0].q + rcx_17), 2)
                        zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(zmm0.q + rcx_17), 2)
                        int64_t rax_29 = temp0_206[0].q
                        void* rcx_18 = arg9 + rax_29
                        int16_t* rsi_6 = _mm_shuffle_epi32(zmm5, 0x4e).q
                        zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(rsi_6 + rcx_18), 3)
                        zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(zmm0.q + rcx_18), 3)
                        zmm0 = _mm_unpacklo_epi16(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg9 + r9_3)), *(arg9 + rbp_8), 
                                        1), 
                                    *(arg9 + rdi_7), 2), 
                                *(arg9 + rax_29), 3), 
                            0)
                        zmm1 = data_1434424d0
                        arg5 = zmm1
                        zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
                        zmm0 = data_1434426d0
                        zmm2 = _mm_div_ps(zmm2, zmm0)
                        zmm1 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm4, 0), zmm1)), zmm0)
                        zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm6, 0), arg5))
                        zmm2 = __mulps_xmmps_memps(zmm2, data_143442710)
                        uint64_t r14_5 = zx.q(temp0_164)
                        rdi_5 = r14_5 & 1
                        
                        if (rdi_5 == 0)
                            zmm5 = var_288
                        else
                            zmm5 = var_288
                            zmm5[0] = zmm2[0]
                        
                        arg8 = var_298.o
                        zmm8 = var_258.o
                        zmm9 = var_2a8_1
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426d0)
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143442710)
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        
                        if (rdi_5 != 0)
                            var_228[0] = zmm1.d
                            arg7 = var_278_2
                            zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                            
                            if (rdi_5 != 0)
                                goto label_140157481
                            
                            goto label_1401573dc
                        
                        arg7 = var_278_2
                        zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                        bool cond:42_1
                        bool cond:43_1
                        bool cond:54_1
                        bool cond:55_1
                        
                        if (rdi_5 != 0)
                        label_140157481:
                            zmm6 = var_268
                            zmm6[0] = zmm0.d
                            var_268 = zmm6
                            zmm6 = var_228
                            r9_2 = r14_5 & 2
                            cond:42_1 = r9_2 == 0
                            cond:43_1 = r9_2 != 0
                            cond:54_1 = r9_2 == 0
                            cond:55_1 = r9_2 != 0
                            
                            if (r9_2 != 0)
                                goto label_1401573f4
                            
                            goto label_14015749f
                        
                    label_1401573dc:
                        zmm6 = var_228
                        r9_2 = r14_5 & 2
                        cond:42_1 = r9_2 == 0
                        cond:43_1 = r9_2 != 0
                        cond:54_1 = r9_2 == 0
                        cond:55_1 = r9_2 != 0
                        
                        if (r9_2 == 0)
                        label_14015749f:
                            
                            if (not(cond:42_1))
                            label_1401574b0:
                                zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm6, 1), zmm6, 0xe2)
                                
                                if (cond:55_1)
                                    goto label_140157406
                                
                                goto label_1401574bc
                        else
                        label_1401573f4:
                            zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, zmm5, 1), zmm5, 0xe2)
                            
                            if (cond:43_1)
                                goto label_1401574b0
                        
                        bool cond:68_1
                        bool cond:78_1
                        bool cond:79_1
                        bool cond:69_1
                        
                        if (cond:54_1)
                        label_1401574bc:
                            rbx_7 = r14_5 & 4
                            cond:68_1 = rbx_7 == 0
                            cond:69_1 = rbx_7 != 0
                            cond:78_1 = rbx_7 == 0
                            cond:79_1 = rbx_7 != 0
                            
                            if (rbx_7 != 0)
                            label_1401574cd:
                                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm2, zmm5, 0x32), 0x84)
                                
                                if (cond:69_1)
                                    goto label_140157436
                                
                                goto label_1401574d7
                        else
                        label_140157406:
                            arg5 = var_268
                            var_268 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg5, 1), arg5, 0xe2)
                            rbx_7 = r14_5 & 4
                            cond:68_1 = rbx_7 == 0
                            cond:69_1 = rbx_7 != 0
                            cond:78_1 = rbx_7 == 0
                            cond:79_1 = rbx_7 != 0
                            
                            if (rbx_7 != 0)
                                goto label_1401574cd
                        
                        if (not(cond:68_1))
                        label_140157436:
                            zmm4 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm1, zmm6, 0x32), 0x84)
                            
                            if (cond:79_1)
                                goto label_1401574e6
                            
                            goto label_14015743f
                        
                    label_1401574d7:
                        zmm4 = zmm6
                        bool cond:92_1
                        bool cond:93_1
                        bool cond:100_1
                        bool cond:101_1
                        
                        if (not(cond:78_1))
                        label_1401574e6:
                            arg5 = var_268
                            var_268 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm0, arg5, 0x32), 0x84)
                            arg5 = var_238_4
                            r14_3 = r14_5 & 8
                            cond:92_1 = r14_3 == 0
                            cond:93_1 = r14_3 != 0
                            cond:100_1 = r14_3 == 0
                            cond:101_1 = r14_3 == 0
                            
                            if (r14_3 != 0)
                                goto label_140157453
                            
                            goto label_14015750b
                        
                    label_14015743f:
                        arg5 = var_238_4
                        r14_3 = r14_5 & 8
                        cond:92_1 = r14_3 == 0
                        cond:93_1 = r14_3 != 0
                        cond:100_1 = r14_3 == 0
                        cond:101_1 = r14_3 == 0
                        
                        if (r14_3 != 0)
                        label_140157453:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm2, zmm5, 0x23), 0x24)
                            zmm2 = var_268
                            
                            if (cond:93_1)
                                goto label_14015751a
                            
                            goto label_140157462
                        
                    label_14015750b:
                        zmm2 = var_268
                        
                        if (cond:92_1)
                        label_140157462:
                            
                            if (not(cond:100_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x23), 0x24)
                        else
                        label_14015751a:
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm4, 0x23), 0x24)
                            
                            if (not(cond:101_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x23), 0x24)
                    case 3
                        float var_238_5[0x4] = arg5
                        zmm1 = var_248_1 & zmm9
                        int64_t rax_31 = sx.q(zmm1.d)
                        void* rcx_20 = arg9 + rax_31
                        zmm2 = *(arg9 + rax_31)
                        int64_t rax_33 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5).d)
                        void* rbp_9 = arg9 + rax_33
                        zmm2 = _mm_unpacklo_ps(zmm2, (*(arg9 + rax_33)).q)
                        int64_t rax_35 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e).d)
                        void* rdi_9 = arg9 + rax_35
                        zmm0 = *(arg9 + rax_35)
                        int64_t rax_37 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7).d)
                        void* rsi_8 = arg9 + rax_37
                        zmm0 = _mm_unpacklo_ps(zmm0, (*(arg9 + rax_37)).q)
                        uint32_t var_1c8_1[0x4] = zmm2[0].q | zmm0.q << 0x40
                        zmm0 = zmm9 & data_142fc95e0
                        zmm2 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_20), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_9)).q)
                        zmm1 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rdi_9), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
                        uint32_t var_1b8_1[0x4] = zmm2[0].q | zmm1.q << 0x40
                        zmm0 = zmm9 & data_142fc95f0
                        uint128_t var_248_2 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_20), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_9))[0].q)
                        uint128_t var_1d8_1 = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rdi_9), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
                        zmm0 = zmm9 & data_143442650
                        zmm2 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_20), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_9))[0].q)
                        zmm6 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rdi_9), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
                        zmm2 = zmm2[0].q | zmm6[0].q << 0x40
                        zmm0 = zmm9 & data_143442660
                        float temp0_251[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_20), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_9))[0].q)
                        zmm6 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rdi_9), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
                        arg5 = temp0_251[0].q | zmm6[0].q << 0x40
                        zmm0 = zmm9 & data_143442670
                        zmm6 = _mm_unpacklo_ps(*(zx.q(zmm0.d) + rcx_20), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_9))[0].q)
                        float temp0_259[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rdi_9), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7).d) + rsi_8)).q)
                        zmm6 = zmm6[0].q | temp0_259[0].q << 0x40
                        zmm5 = _mm_add_epi64(zmm5, zmm8)
                        arg8 = _mm_add_epi64(_mm_add_epi64(arg8, zmm12), arg6)
                        zmm5 = _mm_add_epi64(zmm5, arg7)
                        zmm0 = _mm_shuffle_epi32(zmm9, 0x50) & zmm5
                        zmm4 = _mm_shuffle_epi32(zmm9, 0xfa) & arg8
                        int64_t rcx_21 = _mm_shuffle_epi32(zmm0, 0x4e).q
                        int64_t rbp_10 = zmm4[0].q
                        int64_t rdi_10 = _mm_shuffle_epi32(zmm4, 0x4e).q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg9 + zmm0.q)), 
                                zx.o(*(arg9 + rcx_21))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg9 + rbp_10)), zx.o(*(arg9 + rdi_10))[0].q)[
                            0].q)
                        zmm4 = zmm0
                        zmm5 = zmm0
                        zmm0 = __addps_xmmps_memps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                zmm2), 
                            var_1c8_1)
                        zmm5 = _mm_srli_epi32(zmm5, 0xa) & data_143442480
                        zmm2 = data_143442440
                        zmm1 = zmm2
                        zmm2 = _mm_cvtepi32_ps(_mm_add_epi32(zmm5, zmm2))
                        zmm5 = data_143442690
                        zmm2 = _mm_mul_ps(_mm_div_ps(zmm2, zmm5), arg5)
                        float temp0_284[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm4, 0x15), zmm1)), zmm5)
                        uint64_t r14_6 = zx.q(temp0_164)
                        rdi_5 = r14_6 & 1
                        
                        if (rdi_5 != 0)
                            zmm1.d = zmm0.d
                            var_288 = zmm1
                        
                        zmm4 = var_228
                        arg8 = var_298.o
                        zmm8 = var_258.o
                        zmm9 = var_2a8_1
                        uint128_t var_248_3 = __unpcklpd_xmmpd_memdq(var_248_2, var_1d8_1)
                        zmm6 = _mm_mul_ps(zmm6, temp0_284)
                        zmm12 = _mm_add_ps(var_1b8_1, zmm2)
                        arg6 = _mm_cmpeq_epi32(arg6, arg6)
                        arg5 = var_238_5
                        
                        if (rdi_5 != 0)
                            zmm4[0] = zmm12.d
                        
                        zmm5 = var_288
                        zmm1 = var_268
                        arg7 = var_278_2
                        zmm6 = _mm_add_ps(var_248_3, zmm6)
                        bool cond:44_1
                        bool cond:45_1
                        bool cond:56_1
                        bool cond:57_1
                        
                        if (rdi_5 != 0)
                            zmm1.d = zmm6[0]
                            r9_2 = r14_6 & 2
                            cond:44_1 = r9_2 == 0
                            cond:45_1 = r9_2 != 0
                            cond:56_1 = r9_2 == 0
                            cond:57_1 = r9_2 != 0
                            
                            if (r9_2 != 0)
                                goto label_140157208
                            
                            goto label_1401570a1
                        
                        r9_2 = r14_6 & 2
                        cond:44_1 = r9_2 == 0
                        cond:45_1 = r9_2 != 0
                        cond:56_1 = r9_2 == 0
                        cond:57_1 = r9_2 != 0
                        
                        if (r9_2 == 0)
                        label_1401570a1:
                            
                            if (not(cond:44_1))
                            label_1401570b3:
                                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm4, 1), zmm4, 0xe2)
                                
                                if (cond:57_1)
                                    goto label_140157222
                                
                                goto label_1401570bf
                        else
                        label_140157208:
                            zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm5, 1), zmm5, 0xe2)
                            
                            if (cond:45_1)
                                goto label_1401570b3
                        
                        bool cond:70_1
                        bool cond:71_1
                        bool cond:80_1
                        bool cond:81_1
                        
                        if (not(cond:56_1))
                        label_140157222:
                            zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 1), zmm1, 0xe2)
                            rbx_7 = r14_6 & 4
                            cond:70_1 = rbx_7 == 0
                            cond:71_1 = rbx_7 != 0
                            cond:80_1 = rbx_7 == 0
                            cond:81_1 = rbx_7 != 0
                            
                            if (rbx_7 != 0)
                                goto label_1401570d0
                            
                            goto label_140157232
                        
                    label_1401570bf:
                        rbx_7 = r14_6 & 4
                        cond:70_1 = rbx_7 == 0
                        cond:71_1 = rbx_7 != 0
                        cond:80_1 = rbx_7 == 0
                        cond:81_1 = rbx_7 != 0
                        
                        if (rbx_7 == 0)
                        label_140157232:
                            
                            if (not(cond:70_1))
                            label_140157240:
                                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm12, zmm4, 0x32), 0x84)
                                
                                if (cond:81_1)
                                    goto label_1401570eb
                                
                                goto label_14015724a
                        else
                        label_1401570d0:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm0, zmm5, 0x32), 0x84)
                            
                            if (cond:71_1)
                                goto label_140157240
                        
                        bool cond:94_1
                        bool cond:95_1
                        bool cond:102_1
                        bool cond:103_1
                        
                        if (not(cond:80_1))
                        label_1401570eb:
                            zmm2 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm6, zmm1, 0x32), 0x84)
                            r14_3 = r14_6 & 8
                            cond:94_1 = r14_3 == 0
                            cond:95_1 = r14_3 != 0
                            cond:102_1 = r14_3 == 0
                            cond:103_1 = r14_3 == 0
                            
                            if (r14_3 != 0)
                                goto label_14015725b
                            
                            goto label_1401570f8
                        
                    label_14015724a:
                        zmm2 = zmm1
                        r14_3 = r14_6 & 8
                        cond:94_1 = r14_3 == 0
                        cond:95_1 = r14_3 != 0
                        cond:102_1 = r14_3 == 0
                        cond:103_1 = r14_3 == 0
                        
                        if (r14_3 != 0)
                        label_14015725b:
                            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm0, zmm5, 0x23), 0x24)
                            
                            if (cond:95_1)
                                goto label_140157103
                            
                            goto label_140157265
                        
                    label_1401570f8:
                        
                        if (cond:94_1)
                        label_140157265:
                            
                            if (not(cond:102_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm6, zmm2, 0x23), 0x24)
                        else
                        label_140157103:
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm12, zmm4, 0x23), 0x24)
                            
                            if (not(cond:103_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm6, zmm2, 0x23), 0x24)
                    case 4, 5, 6
                        goto label_140156b90
            
            var_288 = zmm5
            zmm6 = _mm_sub_ps(zmm5, zmm11)
            var_228 = zmm4
            float temp0_362[0x4] = _mm_sub_ps(zmm4, zmm10)
            zmm6 = _mm_mul_ps(zmm6, arg8)
            zmm1 = zmm11
            
            if (rdi_5 != 0)
                zmm1.d = zmm11.d f+ zmm6[0]
            
            var_268 = zmm2
            float temp0_364[0x4] = _mm_sub_ps(zmm2, zmm3)
            float temp0_365[0x4] = _mm_mul_ps(temp0_362, arg8)
            zmm2 = zmm10
            
            if (rdi_5 != 0)
                zmm2 = zmm10
                zmm2[0] = zmm2[0] f+ temp0_365[0]
                zmm5 = _mm_mul_ps(temp0_364, arg8)
                zmm0 = zmm3
                
                if (rdi_5 != 0)
                    goto label_140156180
                
                goto label_140157583
            
            zmm5 = _mm_mul_ps(temp0_364, arg8)
            zmm0 = zmm3
            bool cond:109_1
            bool cond:110_1
            bool cond:111_1
            bool cond:112_1
            
            if (rdi_5 != 0)
            label_140156180:
                zmm0.d = zmm3.d f+ zmm5[0]
                zmm11 = _mm_add_ps(zmm11, zmm6)
                cond:109_1 = r9_2 == 0
                cond:110_1 = r9_2 != 0
                cond:111_1 = r9_2 == 0
                cond:112_1 = r9_2 != 0
                
                if (r9_2 != 0)
                    goto label_14015759c
                
                goto label_140156191
            
        label_140157583:
            zmm11 = _mm_add_ps(zmm11, zmm6)
            cond:109_1 = r9_2 == 0
            cond:110_1 = r9_2 != 0
            cond:111_1 = r9_2 == 0
            cond:112_1 = r9_2 != 0
            
            if (r9_2 != 0)
            label_14015759c:
                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 1), zmm1, 0xe2)
                zmm10 = _mm_add_ps(zmm10, temp0_365)
                
                if (cond:110_1)
                    goto label_1401561a7
                
                goto label_1401575a9
            
        label_140156191:
            zmm10 = _mm_add_ps(zmm10, temp0_365)
            
            if (not(cond:109_1))
            label_1401561a7:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm2, 1), zmm2, 0xe2)
                zmm3 = _mm_add_ps(zmm3, zmm5)
                
                if (cond:112_1)
                    goto label_1401575bd
                
                goto label_1401561b3
            
        label_1401575a9:
            zmm3 = _mm_add_ps(zmm3, zmm5)
            bool cond:113_1
            bool cond:114_1
            bool cond:115_1
            bool cond:116_1
            
            if (not(cond:111_1))
            label_1401575bd:
                zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm0, 1), zmm0, 0xe2)
                cond:113_1 = rbx_7 == 0
                cond:114_1 = rbx_7 != 0
                cond:115_1 = rbx_7 == 0
                cond:116_1 = rbx_7 != 0
                
                if (rbx_7 != 0)
                    goto label_1401561c4
                
                goto label_1401575c9
            
        label_1401561b3:
            cond:113_1 = rbx_7 == 0
            cond:114_1 = rbx_7 != 0
            cond:115_1 = rbx_7 == 0
            cond:116_1 = rbx_7 != 0
            
            if (rbx_7 == 0)
            label_1401575c9:
                
                if (not(cond:113_1))
                label_1401575d7:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x32), 0x84)
                    
                    if (cond:116_1)
                        goto label_1401561db
                    
                    goto label_1401575e1
            else
            label_1401561c4:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x32), 0x84)
                
                if (cond:114_1)
                    goto label_1401575d7
            
            bool cond:117_1
            bool cond:118_1
            bool cond:119_1
            bool cond:120_1
            
            if (not(cond:115_1))
            label_1401561db:
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm3, zmm0, 0x32), 0x84)
                cond:117_1 = r14_3 == 0
                cond:118_1 = r14_3 != 0
                cond:119_1 = r14_3 == 0
                cond:120_1 = r14_3 != 0
                
                if (r14_3 != 0)
                    goto label_1401575f4
                
                goto label_1401561e8
            
        label_1401575e1:
            cond:117_1 = r14_3 == 0
            cond:118_1 = r14_3 != 0
            cond:119_1 = r14_3 == 0
            cond:120_1 = r14_3 != 0
            
            if (r14_3 != 0)
            label_1401575f4:
                zmm11 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x23), 0x24)
                
                if (cond:118_1)
                    goto label_1401561fc
                
                goto label_1401575fe
            
        label_1401561e8:
            zmm11 = zmm1
            
            if (cond:117_1)
            label_1401575fe:
                zmm10 = zmm2
                
                if (not(cond:119_1))
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm3, zmm0, 0x23), 0x24)
            else
            label_1401561fc:
                zmm10 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm10, zmm2, 0x23), 0x24)
                
                if (cond:120_1)
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm3, zmm0, 0x23), 0x24)
            
            zmm3 = zmm0
        
        zmm4 = zx.o(zmm3[0].q)
        float temp0_380[0x4] = __unpckhps_xmmps_memdq(zmm3, data_142d8f750)
        zmm2 = _mm_unpacklo_ps(zmm11, zmm10[0].q)
        zmm0 = _mm_unpackhi_ps(zmm11, zmm10)
        float temp0_383[0x4] = _mm_shuffle_ps(zmm2, zmm4, 0x84)
        float var_128_1[0x4] = temp0_383
        zmm2 = _mm_shuffle_ps(zmm2, zmm4, 0xde)
        uint32_t var_118_1[0x4] = zmm2
        zmm1 = zmm0.q | temp0_380[0].q << 0x40
        uint128_t var_108_1 = zmm1
        temp0_380[0].q = zmm0 u>> 0x40
        zmm3 = _mm_shuffle_epi32(temp0_383, 0x4e)
        int64_t rax_62 = sx.q(zmm9.d) * 0x30
        *(arg1 + rax_62 + 0x20) = zmm11[0]
        *(arg1 + rax_62 + 0x24) = zmm10[0]
        *(arg1 + rax_62 + 0x28) = zmm3[0]
        *(arg1 + rax_62 + 0x2c) = 0
        int64_t rax_64 = sx.q(_mm_shuffle_epi32(zmm9, 0x4e)[0])
        zmm10 = _mm_shuffle_ps(zmm10, zmm4, 0xd5)
        zmm3 = _mm_shuffle_epi32(zmm2, 0x4e)
        int64_t rax_66 = rax_64 * 0x30
        *(arg1 + rax_66 + 0x20) = zmm2[0]
        *(arg1 + rax_66 + 0x24) = zmm10[0]
        *(arg1 + rax_66 + 0x28) = zmm3[0]
        *(arg1 + rax_66 + 0x2c) = 0
        uint32_t temp0_389[0x4] = _mm_shuffle_epi32(zmm1, 0x4e)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
        int64_t rax_70 = sx.q(zmm8.d) * 0x30
        *(arg1 + rax_70 + 0x20) = zmm0.d
        *(arg1 + rax_70 + 0x24) = zmm1.d
        *(arg1 + rax_70 + 0x28) = temp0_389[0]
        *(arg1 + rax_70 + 0x2c) = 0
        *(arg1 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e).d) * 0x30 + 0x20) = temp0_380
        r12 += 4
        r11_1 += 0x20
    while (r12 s< rcx_4)
    
    result = zx.q(arg13)
    
    if (r12 s< result.d)
        goto label_140157768
return result
