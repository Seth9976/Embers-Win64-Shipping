// 函数: sub_14013d9c0
// 地址: 0x14013d9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t var_58[0x4] = arg7
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm12[0x4]
float var_88[0x4] = zmm12
uint32_t zmm11[0x4]
uint32_t var_98[0x4] = zmm11
uint128_t zmm10
uint128_t var_a8 = zmm10
uint128_t zmm9
uint128_t var_b8 = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float var_e8[0x4] = arg6
int64_t r11 = sx.q(arg11)
uint64_t r15
r15.b = arg10
uint128_t zmm13 = arg9
int32_t rax_1 = *(&data_143442780 + (r11 << 2)) * *(&data_143442760 + (r11 << 2))
int32_t rcx_4 = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
int64_t var_240 = r11
uint64_t result
int32_t rcx_7
uint128_t zmm0
uint128_t zmm1
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (rcx_4 s<= 0)
    rcx_7 = 0
    result = zx.q(arg12)
    
    if (0 s< result.d)
    label_14013ee68:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rcx_7), 0), data_142e11d00)
        zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm9
        int64_t r11_4 = sx.q(zmm0.d)
        int32_t* rax_57 = arg2
        int64_t rcx_26 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rbp_9 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rbx_13 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm4 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(rax_57 + r11_4)), *(rax_57 + rcx_26), 1), 
                *(rax_57 + rbp_9), 2), 
            *(rax_57 + rbx_13), 3)
        zmm0 = data_142fc95e0 & zmm9
        int32_t* r12_2 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* r13_4 = zx.q(_mm_extract_epi32(zmm0, 2))
        float (* r11_5)[0x4] = zx.q(zmm0.d)
        int32_t* r14_9 = zx.q(_mm_extract_epi32(zmm0, 3))
        zmm0 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(r11_5 + rax_57 + r11_4)), 
                    *(r12_2 + rax_57 + rcx_26), 1), 
                *(r13_4 + rax_57 + rbp_9), 2), 
            *(r14_9 + rax_57 + rbx_13), 3)
        zmm1 = _mm_mullo_epi32(_mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0), zmm0) & zmm9
        int64_t rax_59 = sx.q(zmm1.d)
        int64_t rbp_11 = sx.q(_mm_extract_epi32(zmm1, 1))
        int64_t rsi_18 = sx.q(_mm_extract_epi32(zmm1, 2))
        int64_t rcx_28 = sx.q(_mm_extract_epi32(zmm1, 3))
        zmm11 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_59)), *(arg3 + rbp_11), 1), 
                *(arg3 + rsi_18), 2), 
            *(arg3 + rcx_28), 3)
        zmm1 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(r11_5 + arg3 + rax_59)), *(r12_2 + arg3 + rbp_11), 
                    1), 
                *(r13_4 + arg3 + rsi_18), 2), 
            *(r14_9 + arg3 + rcx_28), 3)
        zmm7 = zx.o(0)
        arg6 = _mm_shuffle_epi32(zmm11, 0x4e)
        zmm0 = _mm_cmpgt_epi32(data_1434422d0, zmm1) & zmm9
        char temp0_378 = _mm_movemask_ps(zmm0)
        zmm2 = zx.o(0)
        char temp0_379
        
        if (temp0_378 != 0)
            temp0_379 = _mm_movemask_ps(zmm9)
            arg7 = zx.o(0)
            zmm2 = zmm0
            zmm14 = zx.o(0)
            zmm3 = zx.o(0)
        
        if (temp0_378 == 0 || temp0_379 != temp0_378)
            arg5 = _mm_cmpeq_epi32(arg5, arg5)
            zmm2 ^= arg5
            arg7 = zx.o(0)
            zmm14 = zx.o(0)
            
            if (not(0f f>= zmm13.d))
                arg5 = _mm_add_epi32(arg5, zmm1)
                
                if (zmm13.d f>= 1f)
                    zmm7 = zx.o(0)
                    arg7 = _mm_blendv_ps(zx.o(0), arg5, _mm_and_ps(zmm2, zmm9))
                    zmm14 = arg7
                else
                    zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0)
                    float temp0_384[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(arg5), zmm13)
                    zmm0 = _mm_and_ps(zmm2, zmm9)
                    zmm10 = _mm_round_ps(temp0_384, 9)
                    arg7 =
                        _mm_blendv_ps(zx.o(0), _mm_min_epi32(_mm_cvttps_epi32(zmm10), arg5), zmm0)
                    zmm7 = zx.o(0)
                    
                    if (arg10 != 1)
                        zmm7 = _mm_sub_ps(temp0_384, zmm10)
                    
                    zmm14 = _mm_blendv_ps(zx.o(0), 
                        _mm_min_epi32(_mm_sub_epi32(arg7, _mm_cmpeq_epi32(zmm10, zmm10)), arg5), 
                        zmm0)
            
            zmm3 = _mm_blendv_ps(zx.o(0), zmm7, zmm2)
        
        zmm7 = _mm_cvtepi32_epi64(zmm11[0].q)
        arg6 = _mm_cvtepi32_epi64(arg6[0].q)
        int32_t rcx_29 = var_240.d
        int32_t rax_62
        rax_62.b = rcx_29 == 3
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_62)), 0)
        zmm1 = __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0) & zmm0
        float temp0_402[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, zmm1)
        zmm13 = _mm_cvtepi32_epi64(temp0_402[0].q)
        arg5 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_402, 0x4e).q)
        zmm1 = _mm_shuffle_epi32(zx.o(rax_1), 0)
        uint64_t rdi_14 = zx.q(rcx_29)
        float var_288_1[0x4] = zmm3
        float var_258_2[0x4] = arg6
        float var_268_1[0x4] = zmm7
        uint128_t var_278_2 = arg5
        uint128_t var_1f8_1 = zmm1
        int32_t rax_73
        
        if (rcx_29 u> 6)
        label_14013f737:
            char temp0_525 = _mm_movemask_ps(zmm9)
            zmm12 = zx.o(0)
            rax_73 = var_240.d
            
            if ((temp0_525 & 4) != 0)
                zmm12 = _mm_blend_ps(zx.o(0), zx.o(0), 4)
            
            if ((temp0_525 & 8) != 0)
                zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
            
            zmm8 = zmm12
            arg6 = zmm12
        else
            zmm2 = _mm_mullo_epi32(arg7, zmm1)
            zmm8 = _mm_cvtepi32_epi64(zmm2[0].q)
            zmm0 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm2, 0x4e)[0].q)
            int32_t var_218
            
            switch (rdi_14)
                case 0, 1
                    var_218.o = zmm13
                    zmm2 = _mm_add_epi64(zmm13, zmm7)
                    zmm3 = _mm_add_epi64(_mm_add_epi64(arg5, arg6), zmm0)
                    zmm2 = _mm_add_epi64(zmm2, zmm8)
                    zmm1 = _mm_shuffle_epi32(zmm9, 0x50)
                    arg5 = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                    zmm2 = _mm_shuffle_epi32(zmm9, 0xfa)
                    float temp0_418[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                    int64_t rax_64 = _mm_extract_epi64(arg5, 1)
                    void* rdx_18 = arg8 + rax_64
                    int32_t var_238_1 = (*(arg8 + rax_64)).d
                    int64_t rax_65 = temp0_418[0].q
                    void* rcx_30 = arg8 + rax_65
                    int64_t rbx_15 = _mm_extract_epi64(temp0_418, 1)
                    zmm3 = data_1434426c0
                    float temp0_419[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                    int32_t var_298_1 = (*(arg8 + rax_65)).d
                    float temp0_420[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                    int32_t var_2a8_1 = (*(arg8 + rbx_15)).d
                    void* rbp_13 = arg5.q + arg8
                    zmm8 = *(temp0_419[0].q + rbp_13)
                    zmm10 = *(_mm_extract_epi64(temp0_419, 1) + rdx_18)
                    int32_t var_1d8_2 = (*(temp0_420[0].q + rcx_30)).d
                    void* rbx_16 = arg8 + rbx_15
                    zmm7 = *(_mm_extract_epi64(temp0_420, 1) + rbx_16)
                    zmm3 = data_1434426e0
                    arg5 = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                    arg6 = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                    zmm12 = *(arg5.q + rbp_13)
                    zmm2 = *(_mm_extract_epi64(arg5, 1) + rdx_18)
                    uint128_t* rax_72 = arg6[0].q
                    uint128_t* rdx_19 = _mm_extract_epi64(arg6, 1)
                    zmm1 = *(rax_72 + rcx_30)
                    zmm0 = *(rdx_19 + rbx_16)
                    char temp0_423 = _mm_movemask_ps(zmm9)
                    bool cond:12_1
                    bool cond:13_1
                    bool cond:16_1
                    bool cond:17_1
                    
                    if ((temp0_423 & 1) == 0)
                        char temp2_1 = temp0_423 & 2
                        cond:12_1 = temp2_1 != 0
                        cond:13_1 = temp2_1 == 0
                        cond:16_1 = temp2_1 != 0
                        cond:17_1 = temp2_1 == 0
                        rax_73 = var_240.d
                        
                        if (temp2_1 == 0)
                            goto label_14013f7cc
                        
                        goto label_14013f2ad
                    
                    arg6 = *rbp_13
                    char temp1_1 = temp0_423 & 2
                    cond:12_1 = temp1_1 != 0
                    cond:13_1 = temp1_1 == 0
                    cond:16_1 = temp1_1 != 0
                    cond:17_1 = temp1_1 == 0
                    rax_73 = var_240.d
                    
                    if (temp1_1 == 0)
                    label_14013f7cc:
                        zmm14 = zmm14
                        
                        if (cond:13_1)
                            goto label_14013f2ce
                        
                        goto label_14013f7db
                    
                label_14013f2ad:
                    arg6 = __insertps_xmmps_memd_immb(arg6, var_238_1, 0x10)
                    zmm14 = zmm14
                    
                    if (not(cond:12_1))
                    label_14013f2ce:
                        
                        if (cond:17_1)
                            goto label_14013f7e8
                        
                        goto label_14013f2d4
                    
                label_14013f7db:
                    zmm8 = _mm_insert_ps(zmm8, zmm10, 0x10)
                    bool cond:26_1
                    bool cond:27_1
                    bool cond:34_1
                    bool cond:35_1
                    
                    if (not(cond:16_1))
                    label_14013f7e8:
                        char temp4_1 = temp0_423 & 4
                        cond:26_1 = temp4_1 != 0
                        cond:27_1 = temp4_1 == 0
                        cond:34_1 = temp4_1 != 0
                        cond:35_1 = temp4_1 == 0
                        
                        if (temp4_1 == 0)
                            goto label_14013f2e4
                        
                        goto label_14013f7f1
                    
                label_14013f2d4:
                    zmm12 = _mm_insert_ps(zmm12, zmm2, 0x10)
                    char temp3_1 = temp0_423 & 4
                    cond:26_1 = temp3_1 != 0
                    cond:27_1 = temp3_1 == 0
                    cond:34_1 = temp3_1 != 0
                    cond:35_1 = temp3_1 == 0
                    
                    if (temp3_1 == 0)
                    label_14013f2e4:
                        
                        if (cond:27_1)
                            goto label_14013f7ff
                        
                        goto label_14013f2ea
                    
                label_14013f7f1:
                    arg6 = __insertps_xmmps_memd_immb(arg6, var_298_1, 0x20)
                    
                    if (not(cond:26_1))
                    label_14013f7ff:
                        
                        if (cond:35_1)
                            goto label_14013f2fc
                        
                        goto label_14013f805
                    
                label_14013f2ea:
                    zmm8 = __insertps_xmmps_memd_immb(zmm8, var_1d8_2, 0x20)
                    bool cond:47_1
                    bool cond:48_1
                    bool cond:57_1
                    bool cond:58_1
                    
                    if (not(cond:34_1))
                    label_14013f2fc:
                        char temp9_1 = temp0_423 & 8
                        cond:47_1 = temp9_1 != 0
                        cond:48_1 = temp9_1 == 0
                        cond:57_1 = temp9_1 == 0
                        cond:58_1 = temp9_1 != 0
                        
                        if (temp9_1 == 0)
                            goto label_14013f815
                        
                        goto label_14013f305
                    
                label_14013f805:
                    zmm12 = _mm_insert_ps(zmm12, zmm1, 0x20)
                    char temp8_1 = temp0_423 & 8
                    cond:47_1 = temp8_1 != 0
                    cond:48_1 = temp8_1 == 0
                    cond:57_1 = temp8_1 == 0
                    cond:58_1 = temp8_1 != 0
                    
                    if (temp8_1 == 0)
                    label_14013f815:
                        
                        if (cond:48_1)
                            goto label_14013f312
                        
                        goto label_14013f81b
                    
                label_14013f305:
                    arg6 = __insertps_xmmps_memd_immb(arg6, var_2a8_1, 0x30)
                    
                    if (cond:47_1)
                    label_14013f81b:
                        zmm8 = _mm_insert_ps(zmm8, zmm7, 0x30)
                        
                        if (not(cond:57_1))
                            zmm12 = _mm_insert_ps(zmm12, zmm0, 0x30)
                    else
                    label_14013f312:
                        
                        if (cond:58_1)
                            zmm12 = _mm_insert_ps(zmm12, zmm0, 0x30)
                case 2
                    zmm1 = _mm_add_epi64(zmm13, zmm7)
                    zmm3 = _mm_add_epi64(_mm_add_epi64(arg5, arg6), zmm0)
                    zmm1 = _mm_add_epi64(zmm1, zmm8)
                    zmm2 = _mm_shuffle_epi32(zmm9, 0x50)
                    arg5 = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                    uint128_t temp0_434 = _mm_shuffle_epi32(zmm9, 0xfa)
                    float temp0_435[0x4] = _mm_blendv_ps(zx.o(0), zmm3, temp0_434)
                    zmm1 = data_1434426b0
                    float temp0_436[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                    float temp0_437[0x4] = _mm_blendv_ps(zx.o(0), zmm1, temp0_434)
                    int64_t rcx_32 = arg5.q
                    void* rbx_17 = arg8 + rcx_32
                    int64_t r8 = _mm_extract_epi64(arg5, 1)
                    void* rbp_14 = arg8 + r8
                    void* rax_74 = temp0_436[0].q
                    int16_t* rdx_20 = _mm_extract_epi64(temp0_436, 1)
                    arg5 = data_1434426c0
                    float temp0_438[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm2)
                    zmm2 = __pinsrw_xmmdq_memw_immb(zx.o(*(rax_74 + rbx_17)), *(rdx_20 + rbp_14), 1)
                    void* rax_76 = temp0_438[0].q
                    int16_t* rdx_21 = _mm_extract_epi64(temp0_438, 1)
                    int64_t rbx_18 = temp0_435[0].q
                    zmm3 = __pinsrw_xmmdq_memw_immb(zx.o(*(rax_76 + rbx_17)), *(rdx_21 + rbp_14), 1)
                    void* rax_78 = arg8 + rbx_18
                    int64_t rdx_22 = _mm_extract_epi64(temp0_435, 1)
                    int16_t* rbp_15 = temp0_437[0].q
                    zmm1 = _mm_blendv_ps(zx.o(0), arg5, temp0_434)
                    zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rbp_15 + rax_78), 2)
                    zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(zmm1.q + rax_78), 2)
                    void* rax_79 = arg8 + rdx_22
                    zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                        *(_mm_extract_epi64(temp0_437, 1) + rax_79), 3)
                    zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(_mm_extract_epi64(zmm1, 1) + rax_79), 3)
                    zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg8 + rcx_32)), *(arg8 + r8), 1), 
                            *(arg8 + rbx_18), 2), 
                        *(arg8 + rdx_22), 3).q)
                    zmm1 = data_1434424d0
                    float temp0_451[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
                    zmm0 = data_1434426d0
                    float temp0_452[0x4] = _mm_div_ps(temp0_451, zmm0)
                    float temp0_456[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), zmm1)), zmm0)
                    float temp0_460[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm3[0].q), zmm1)), zmm0)
                    zmm0 = data_143442710
                    arg6 = _mm_mul_ps(temp0_452, zmm0)
                    zmm8 = _mm_mul_ps(temp0_456, zmm0)
                    zmm12 = _mm_mul_ps(temp0_460, zmm0)
                    rax_73 = var_240.d
                case 3
                    zmm1 = zmm9 & zmm11
                    int64_t rax_82 = sx.q(zmm1.d)
                    void* r9_11 = arg8 + rax_82
                    int32_t temp0_464 = _mm_extract_epi32(zmm1, 1)
                    zmm12 = *(arg8 + rax_82)
                    int64_t rdx_24 = sx.q(temp0_464)
                    void* r8_1 = arg8 + rdx_24
                    int64_t rbp_19 = sx.q(_mm_extract_epi32(zmm1, 2))
                    void* r15_4 = arg8 + rbp_19
                    int64_t rax_85 = sx.q(_mm_extract_epi32(zmm1, 3))
                    float temp0_469[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm12, *(arg8 + rdx_24), 0x10), 
                            *(arg8 + rbp_19), 0x20), 
                        *(arg8 + rax_85), 0x30)
                    void* rbp_20 = arg8 + rax_85
                    float temp0_471[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r11_5 + r9_11), *(r12_2 + r8_1), 0x10), 
                        *(r13_4 + r15_4), 0x20)
                    zmm10 = data_142fc95f0 & zmm9
                    int32_t* r12_3 = zx.q(_mm_extract_epi32(zmm10, 1))
                    int32_t* r13_5 = zx.q(_mm_extract_epi32(zmm10, 2))
                    var_218.q = zx.q(_mm_extract_epi32(zmm10, 3))
                    zmm2 = data_143442650 & zmm9
                    zmm1 = *(zx.q(zmm2[0]) + r9_11)
                    int32_t* rax_88 = zx.q(_mm_extract_epi32(zmm2, 1))
                    int32_t* rcx_33 = zx.q(_mm_extract_epi32(zmm2, 2))
                    int32_t* rdx_25 = zx.q(_mm_extract_epi32(zmm2, 3))
                    zmm1 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm1, *(rax_88 + r8_1), 0x10), 
                            *(rcx_33 + r15_4), 0x20), 
                        *(rdx_25 + rbp_20), 0x30)
                    zmm3 = data_143442660 & zmm9
                    zmm2 = *(zx.q(zmm3[0]) + r9_11)
                    int32_t* rax_90 = zx.q(_mm_extract_epi32(zmm3, 1))
                    int32_t* rcx_34 = zx.q(_mm_extract_epi32(zmm3, 2))
                    int32_t* rdx_26 = zx.q(_mm_extract_epi32(zmm3, 3))
                    float temp0_486[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm2, *(rax_90 + r8_1), 0x10), 
                            *(rcx_34 + r15_4), 0x20), 
                        *(rdx_26 + rbp_20), 0x30)
                    zmm3 = _mm_add_epi64(zmm13, zmm7)
                    arg5 = _mm_add_epi64(_mm_add_epi64(arg5, arg6), zmm0)
                    float temp0_492[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm3, zmm8), 
                        _mm_shuffle_epi32(zmm9, 0x50))
                    float temp0_494[0x4] =
                        _mm_blendv_ps(zx.o(0), arg5, _mm_shuffle_epi32(zmm9, 0xfa))
                    zmm0 = data_143442670 & zmm9
                    int32_t* rcx_35 = zx.q(_mm_extract_epi32(zmm0, 1))
                    int32_t* r11_6 = zx.q(_mm_extract_epi32(zmm0, 2))
                    int32_t* rbx_19 = zx.q(_mm_extract_epi32(zmm0, 3))
                    int64_t rax_91 = temp0_492[0].q
                    int64_t rdx_27 = _mm_extract_epi64(temp0_492, 1)
                    int64_t rax_92 = temp0_494[0].q
                    arg5 = __pinsrd_xmmdq_memd_immb(zx.o(*(arg8 + rax_91)), *(arg8 + rdx_27), 1)
                    int64_t rdx_28 = _mm_extract_epi64(temp0_494, 1)
                    arg5 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(arg5, *(arg8 + rax_92), 2), *(arg8 + rdx_28), 3)
                    zmm7 = _mm_srli_epi32(arg5, 0xa) & data_143442480
                    uint128_t* rdx_29 = zx.q(zmm0.d)
                    arg6 = _mm_add_ps(
                        _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(arg5 & data_143442680, 
                                    data_143442490)), 
                                data_1434426a0), 
                            zmm1), 
                        temp0_469)
                    zmm0 = data_143442440
                    float temp0_508[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm7, zmm0))
                    zmm1 = data_143442690
                    zmm8 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_508, zmm1), temp0_486), 
                        __insertps_xmmps_memd_immb(temp0_471, *(r14_9 + rbp_20), 0x30))
                    float temp0_513[0x4] =
                        __insertps_xmmps_memd_immb(*(zx.q(zmm10.d) + r9_11), *(r12_3 + r8_1), 0x10)
                    zmm3 = _mm_add_epi32(_mm_srli_epi32(arg5, 0x15), zmm0)
                    float temp0_516[0x4] =
                        __insertps_xmmps_memd_immb(temp0_513, *(r13_5 + r15_4), 0x20)
                    zmm12 = _mm_add_ps(
                        _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(zmm3), zmm1), 
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(*(rdx_29 + r9_11), *(rcx_35 + r8_1), 
                                        0x10), 
                                    *(r11_6 + r15_4), 0x20), 
                                *(rbx_19 + rbp_20), 0x30)), 
                        __insertps_xmmps_memd_immb(temp0_516, *(var_218.q + rbp_20), 0x30))
                    rax_73 = var_240.d
                case 4, 5
                    goto label_14013f737
                case 6
                    char temp0_528 = _mm_movemask_ps(zmm9)
                    zmm12 = zx.o(0)
                    rax_73 = var_240.d
                    
                    if ((temp0_528 & 4) != 0)
                        zmm12 = _mm_blend_ps(zx.o(0), zx.o(0), 4)
                    
                    if ((temp0_528 & 8) != 0)
                        zmm12 = _mm_blend_ps(zmm12, zx.o(0), 8)
                    
                    zmm8 = zmm12
                    arg6 = zmm12
        
        char temp0_537 = _mm_movemask_ps(_mm_cmpeq_epi32(arg7, zmm14) & not.o(zmm9))
        
        if (temp0_537 != 0)
            if (rax_73 u<= 6)
                zmm14 = __pmulld_xmmdq_memdq(zmm14, var_1f8_1)
                _mm_cvtepi32_epi64(zmm14[0].q)
                _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm14, 0x4e).q)
                jump(sx.q(jump_table_14014017c[rdi_14]) + &jump_table_14014017c)
            
            zmm0 = zx.o(0)
            
            if ((temp0_537 & 4) != 0)
                zmm0 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
            
            if ((temp0_537 & 8) != 0)
                zmm0 = _mm_blend_epi16(zmm0, zx.o(0), 0xc0)
            
            zmm1 = _mm_sub_ps(zmm0, arg6)
            float temp0_545[0x4] = _mm_sub_ps(zmm0, zmm8)
            zmm1 = _mm_mul_ps(zmm1, var_288_1)
            zmm2 = arg6
            char temp7_1 = temp0_537 & 1
            
            if (temp7_1 != 0)
                zmm2 = arg6
                zmm2[0] = zmm2[0] f+ zmm1.d
                zmm0 = _mm_sub_ps(zmm0, zmm12)
                zmm3 = _mm_mul_ps(temp0_545, var_288_1)
                arg5 = zmm8
                
                if (temp7_1 != 0)
                    goto label_1401400c5
                
                goto label_14013ff03
            
            zmm0 = _mm_sub_ps(zmm0, zmm12)
            zmm3 = _mm_mul_ps(temp0_545, var_288_1)
            arg5 = zmm8
            
            if (temp7_1 != 0)
            label_1401400c5:
                arg5.d = zmm8.d f+ zmm3[0]
                zmm7 = _mm_mul_ps(var_288_1, zmm0)
                zmm0 = zmm12
                
                if (temp7_1 != 0)
                    goto label_14013ff14
                
                goto label_1401400d6
            
        label_14013ff03:
            zmm7 = _mm_mul_ps(var_288_1, zmm0)
            zmm0 = zmm12
            bool cond:61_1
            bool cond:62_1
            bool cond:71_1
            bool cond:72_1
            
            if (temp7_1 != 0)
            label_14013ff14:
                zmm0.d = zmm12.d f+ zmm7[0]
                arg6 = _mm_add_ps(arg6, zmm1)
                char temp11_1 = temp0_537 & 2
                cond:61_1 = temp11_1 == 0
                cond:62_1 = temp11_1 != 0
                cond:71_1 = temp11_1 == 0
                cond:72_1 = temp11_1 != 0
                
                if (temp11_1 != 0)
                    goto label_1401400e2
                
                goto label_14013ff24
            
        label_1401400d6:
            arg6 = _mm_add_ps(arg6, zmm1)
            char temp10_1 = temp0_537 & 2
            cond:61_1 = temp10_1 == 0
            cond:62_1 = temp10_1 != 0
            cond:71_1 = temp10_1 == 0
            cond:72_1 = temp10_1 != 0
            
            if (temp10_1 != 0)
            label_1401400e2:
                zmm2 = _mm_blend_ps(zmm2, arg6, 2)
                zmm8 = _mm_add_ps(zmm8, zmm3)
                
                if (cond:62_1)
                    goto label_14013ff2e
                
                goto label_1401400f2
            
        label_14013ff24:
            zmm8 = _mm_add_ps(zmm8, zmm3)
            
            if (not(cond:61_1))
            label_14013ff2e:
                arg5 = _mm_blend_ps(arg5, zmm8, 2)
                zmm12 = _mm_add_ps(zmm12, zmm7)
                
                if (cond:72_1)
                    goto label_1401400fc
                
                goto label_14013ff3f
            
        label_1401400f2:
            zmm12 = _mm_add_ps(zmm12, zmm7)
            bool cond:81_1
            bool cond:82_1
            bool cond:91_1
            bool cond:92_1
            
            if (not(cond:71_1))
            label_1401400fc:
                zmm0 = _mm_blend_ps(zmm0, zmm12, 2)
                char temp13_1 = temp0_537 & 4
                cond:81_1 = temp13_1 == 0
                cond:82_1 = temp13_1 != 0
                cond:91_1 = temp13_1 == 0
                cond:92_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                    goto label_14013ff48
                
                goto label_14014010c
            
        label_14013ff3f:
            char temp12_1 = temp0_537 & 4
            cond:81_1 = temp12_1 == 0
            cond:82_1 = temp12_1 != 0
            cond:91_1 = temp12_1 == 0
            cond:92_1 = temp12_1 != 0
            
            if (temp12_1 == 0)
            label_14014010c:
                
                if (not(cond:81_1))
                label_140140112:
                    arg5 = _mm_blend_ps(arg5, zmm8, 4)
                    
                    if (cond:92_1)
                        goto label_14013ff5a
                    
                    goto label_14014011f
            else
            label_14013ff48:
                zmm2 = _mm_blend_ps(zmm2, arg6, 4)
                
                if (cond:82_1)
                    goto label_140140112
            
            bool cond:100_1
            bool cond:101_1
            bool cond:104_1
            bool cond:105_1
            
            if (not(cond:91_1))
            label_14013ff5a:
                zmm0 = _mm_blend_ps(zmm0, zmm12, 4)
                char temp15_1 = temp0_537 & 8
                cond:100_1 = temp15_1 == 0
                cond:101_1 = temp15_1 != 0
                cond:104_1 = temp15_1 != 0
                cond:105_1 = temp15_1 == 0
                
                if (temp15_1 != 0)
                    goto label_140140128
                
                goto label_14013ff6a
            
        label_14014011f:
            char temp14_1 = temp0_537 & 8
            cond:100_1 = temp14_1 == 0
            cond:101_1 = temp14_1 != 0
            cond:104_1 = temp14_1 != 0
            cond:105_1 = temp14_1 == 0
            
            if (temp14_1 != 0)
            label_140140128:
                arg6 = _mm_blend_ps(arg6, zmm2, 7)
                
                if (cond:101_1)
                    goto label_14013ff73
                
                goto label_140140134
            
        label_14013ff6a:
            arg6 = zmm2
            
            if (cond:100_1)
            label_140140134:
                zmm8 = arg5
                
                if (cond:104_1)
                    zmm0 = _mm_blend_ps(zmm0, zmm12, 8)
            else
            label_14013ff73:
                zmm8 = _mm_blend_ps(zmm8, arg5, 7)
                
                if (not(cond:105_1))
                    zmm0 = _mm_blend_ps(zmm0, zmm12, 8)
            
            zmm12 = zmm0
        
        zmm1 = _mm_unpacklo_ps(zmm12, 0)
        float temp0_559[0x4] = _mm_unpackhi_ps(zmm12, zx.o(0))
        zmm0 = _mm_unpacklo_ps(arg6, zmm8[0].q)
        float temp0_561[0x4] = _mm_unpackhi_ps(arg6, zmm8)
        float var_168[0x4] = _mm_insert_ps(zmm0, zmm12, 0x28)
        uint128_t var_158_1 = _mm_unpackhi_pd(zmm0, zmm1.q)
        uint128_t var_148_1 = _mm_insert_ps(temp0_561, zmm12, 0xa8)
        float var_138_1[0x4] = _mm_unpackhi_pd(temp0_561, temp0_559[0].q)
        uint64_t i = zx.q(_mm_movemask_ps(zmm9))
        
        do
            uint64_t rcx_42
            uint64_t rflags_1
            
            if (i == 0)
                rcx_42 = 0x40
            else
                rcx_42, rflags_1 = _bit_scan_forward(i)
            float var_178[0x4] = zmm4
            result = sx.q(var_178[zx.q(rcx_42.d) & 3]) * 0x30
            *(arg1 + result + 0x20) = (&var_168)[rcx_42]
            i &= rol.q(-2, rcx_42.b)
        while (i != 0)
else
    uint128_t var_188_1 = _mm_shuffle_epi32(_mm_slli_epi32(zx.o(arg4), 2), 0)
    uint128_t var_1a8_1 = _mm_shuffle_ps(zmm13, zmm13, 0)
    int32_t rcx_5
    rcx_5.b = r11.d == 3
    uint128_t var_198_1 = _mm_shuffle_epi32(zx.o(neg.d(rcx_5)), 0)
    uint128_t var_1d8_1 = _mm_shuffle_epi32(zx.o(rax_1), 0)
    int32_t r13_1 = 0
    arg6 = _mm_cmpeq_epi32(arg6, arg6)
    rcx_7 = 0
    int32_t var_1fc_1 = arg4
    
    do
        int64_t rcx_8 = sx.q(r13_1)
        zmm0 = *(arg2 + rcx_8)
        zmm3 = *(arg2 + rcx_8 + 0x10)
        uint128_t var_228_1 = zmm0
        zmm0 = __pmulld_xmmdq_memdq(_mm_shuffle_ps(zmm0, zmm3, 0xdd), var_188_1)
        int64_t rdx = sx.q(zmm0.d)
        int64_t r14_1 = sx.q(*(arg3 + rdx))
        int64_t rbx_1 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rsi_1 = sx.q(*(arg3 + rbx_1))
        int64_t rax_3 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rbp_1 = sx.q(*(arg3 + rax_3))
        int64_t rdi_1 = sx.q(_mm_extract_epi32(zmm0, 3))
        int64_t rcx_13 = sx.q(*(arg3 + rdi_1))
        zmm10 = _mm_insert_epi32(
            _mm_insert_epi32(_mm_insert_epi32(zx.o(r14_1.d), rsi_1.d, 1), rbp_1.d, 2), rcx_13.d, 3)
        zmm1 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rdx + 4)), *(arg3 + rbx_1 + 4), 1), 
                *(arg3 + rax_3 + 4), 2), 
            *(arg3 + rdi_1 + 4), 3)
        uint32_t temp0_18[0x4] = _mm_shuffle_epi32(zmm10, 0x4e)
        zmm0 = _mm_cmpgt_epi32(data_1434422d0, zmm1)
        char temp0_20 = _mm_movemask_ps(zmm0)
        float var_1f8[0x4]
        zmm2 = var_1f8
        float var_278_1[0x4] = zmm3
        uint32_t var_288[0x4]
        
        if (temp0_20 == 0)
            zmm0 = zx.o(0) ^ arg6
            
            if (zx.o(0)[0] f< zmm13.d)
            label_14013dc1f:
                arg5 = _mm_add_epi32(zmm1, arg6)
                
                if (zmm13.d f>= 1f)
                    zmm2 = _mm_blendv_ps(zmm2, arg5, zmm0)
                    var_288 = _mm_blendv_ps(var_288, arg5, zmm0)
                    zmm4 = zx.o(0)
                else
                    float temp0_26[0x4] = __mulps_xmmps_memps(_mm_cvtepi32_ps(arg5), var_1a8_1)
                    float temp0_27[0x4] = _mm_round_ps(temp0_26, 9)
                    zmm2 =
                        _mm_blendv_ps(zmm2, _mm_min_epi32(_mm_cvttps_epi32(temp0_27), arg5), zmm0)
                    zmm4 = zx.o(0)
                    
                    if (r15.b != 1)
                        zmm4 = _mm_sub_ps(temp0_26, temp0_27)
                    
                    arg6 = _mm_min_epi32(_mm_sub_epi32(zmm2, _mm_cmpeq_epi32(temp0_27, temp0_27)), 
                        arg5)
                    var_288 = _mm_blendv_ps(var_288, arg6, zmm0)
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                
                zmm9 = zmm2
                arg7 = _mm_blendv_ps(arg7, zmm4, zmm0)
            else
            label_14013dc91:
                zmm2 = _mm_blendv_ps(zmm2, zx.o(0), zmm0)
                var_288 = _mm_blendv_ps(var_288, zx.o(0), zmm0)
                zmm9 = zmm2
                arg7 = _mm_blendv_ps(arg7, zx.o(0), zmm0)
        else
            zmm9 = _mm_andnot_ps(zmm0, zmm2)
            zmm4 = __andnps_xmmxud_memxud(zmm0, var_288)
            arg5 = _mm_andnot_ps(zmm0, arg7)
            
            if (temp0_20 != 0xf)
                zmm2 = zmm9
                var_288 = zmm4
                arg7 = arg5
                zmm0 ^= arg6
                
                if (0f f>= zmm13.d)
                    goto label_14013dc91
                
                goto label_14013dc1f
            
            zmm2 = zmm9
            var_288 = zmm4
            arg7 = arg5
        
        zmm8 = _mm_cvtepi32_epi64(zmm10.q)
        zmm7 = _mm_cvtepi32_epi64(temp0_18[0].q)
        zmm1 = __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0) & var_198_1
        arg5 = zx.o(0)
        float temp0_45[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, zmm1)
        zmm11 = _mm_cvtepi32_epi64(temp0_45[0].q)
        zmm13 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_45, 0x4e).q)
        zmm1 = __pmulld_xmmdq_memdq(zmm9, var_1d8_1)
        zmm0 = _mm_cvtepi32_epi64(zmm1.q)
        zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
        var_1f8 = zmm2
        uint32_t var_258_1[0x4] = arg7
        
        if (r11.d u< 2)
            zmm3 = _mm_add_epi64(zmm11, zmm8)
            arg5 = _mm_add_epi64(_mm_add_epi64(zmm13, zmm7), zmm1)
            zmm3 = _mm_add_epi64(zmm3, zmm0)
            int64_t rax_8 = zmm3[0].q
            int64_t rcx_14 = _mm_extract_epi64(zmm3, 1)
            int64_t rdx_2 = arg5.q
            int64_t rbp_2 = _mm_extract_epi64(arg5, 1)
            zmm12 = *(arg8 + rax_8 + 4)
            zmm14 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg8 + rax_8), *(arg8 + rcx_14), 0x10), 
                    *(arg8 + rdx_2), 0x20), 
                *(arg8 + rbp_2), 0x30)
            zmm12 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm12, *(arg8 + rcx_14 + 4), 0x10), 
                    *(arg8 + rdx_2 + 4), 0x20), 
                *(arg8 + rbp_2 + 4), 0x30)
            arg5 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg8 + rax_8 + 8), *(arg8 + rcx_14 + 8), 0x10), 
                    *(arg8 + rdx_2 + 8), 0x20), 
                *(arg8 + rbp_2 + 8), 0x30)
        else if (r11.d == 2)
            zmm3 = _mm_add_epi64(zmm11, zmm8)
            zmm4 = _mm_add_epi64(_mm_add_epi64(zmm13, zmm7), zmm1)
            zmm3 = _mm_add_epi64(zmm3, zmm0)
            int64_t rbp_3 = _mm_extract_epi64(zmm3, 1)
            int64_t rax_9 = zmm3[0].q
            int64_t rdx_3 = zmm4[0].q
            int64_t rcx_15 = _mm_extract_epi64(zmm4, 1)
            zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg8 + rax_9)), *(arg8 + rbp_3), 1), 
                    *(arg8 + rdx_3), 2), 
                *(arg8 + rcx_15), 3).q)
            zmm1 = data_1434424d0
            float temp0_118[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg8 + rax_9 + 2)), *(arg8 + rbp_3 + 2), 1), 
                    *(arg8 + rdx_3 + 2), 2), 
                *(arg8 + rcx_15 + 2), 3)
            zmm3 = data_1434426d0
            float temp0_122[0x4] = _mm_div_ps(temp0_118, zmm3)
            float temp0_125[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm0.q), zmm1))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg8 + rax_9 + 4)), *(arg8 + rbp_3 + 4), 1), 
                    *(arg8 + rdx_3 + 4), 2), 
                *(arg8 + rcx_15 + 4), 3)
            float temp0_129[0x4] = _mm_div_ps(temp0_125, zmm3)
            arg5 =
                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm0.q), zmm1)), zmm3)
            zmm0 = data_143442710
            zmm14 = _mm_mul_ps(temp0_122, zmm0)
            zmm12 = _mm_mul_ps(temp0_129, zmm0)
            arg5 = _mm_mul_ps(arg5, zmm0)
        else
            zmm12 = zx.o(0)
            zmm14 = zx.o(0)
            
            if (r11.d == 3)
                zmm3 = _mm_add_epi64(zmm11, zmm8)
                arg5 = _mm_add_epi64(zmm13, zmm7)
                zmm3 = _mm_add_epi64(zmm3, zmm0)
                zmm0 = zx.o(*(arg8 + zmm3[0].q))
                int64_t rax_5 = _mm_extract_epi64(zmm3, 1)
                arg5 = _mm_add_epi64(arg5, zmm1)
                zmm0 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(__pinsrd_xmmdq_memd_immb(zmm0, *(arg8 + rax_5), 1), 
                        *(arg8 + arg5.q), 2), 
                    *(arg8 + _mm_extract_epi64(arg5, 1)), 3)
                arg5 = *(arg8 + r14_1 + 4)
                zmm1 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg8 + r14_1), *(arg8 + rsi_1), 0x10), 
                        *(arg8 + rbp_1), 0x20), 
                    *(arg8 + rcx_13), 0x30)
                arg5 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(arg5, *(arg8 + rsi_1 + 4), 0x10), 
                        *(arg8 + rbp_1 + 4), 0x20), 
                    *(arg8 + rcx_13 + 4), 0x30)
                float temp0_68[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg8 + r14_1 + 0xc), *(arg8 + rsi_1 + 0xc), 
                            0x10), 
                        *(arg8 + rbp_1 + 0xc), 0x20), 
                    *(arg8 + rcx_13 + 0xc), 0x30)
                arg6 = zmm0
                zmm4 = zmm0
                float temp0_72[0x4] = _mm_mul_ps(
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0), 
                    temp0_68)
                zmm0 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg8 + r14_1 + 0x10), *(arg8 + rsi_1 + 0x10), 
                            0x10), 
                        *(arg8 + rbp_1 + 0x10), 0x20), 
                    *(arg8 + rcx_13 + 0x10), 0x30)
                zmm14 = _mm_add_ps(temp0_72, zmm1)
                zmm4 = _mm_srli_epi32(zmm4, 0xa) & data_143442480
                zmm1 = data_143442440
                zmm3 = zmm1
                float temp0_79[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm1))
                zmm1 = data_143442690
                zmm4 = zmm1
                float temp0_81[0x4] = _mm_mul_ps(_mm_div_ps(temp0_79, zmm1), zmm0)
                zmm0 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg8 + r14_1 + 8), *(arg8 + rsi_1 + 8), 0x10), 
                    *(arg8 + rbp_1 + 8), 0x20)
                zmm12 = _mm_add_ps(temp0_81, arg5)
                zmm1 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg8 + r14_1 + 0x14), *(arg8 + rsi_1 + 0x14), 
                            0x10), 
                        *(arg8 + rbp_1 + 0x14), 0x20), 
                    *(arg8 + rcx_13 + 0x14), 0x30)
                arg6 = _mm_add_epi32(_mm_srli_epi32(arg6, 0x15), zmm3)
                arg5 = _mm_cvtepi32_ps(arg6)
                arg6 = _mm_cmpeq_epi32(arg6, arg6)
                arg5 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(arg5, zmm4), zmm1), 
                    __insertps_xmmps_memd_immb(zmm0, *(arg8 + rcx_13 + 8), 0x30))
        
        zmm9 = __pcmpeqd_xmmdq_memdq(zmm9, var_288)
        arg7 = zmm9 ^ arg6
        char temp0_138 = _mm_movemask_ps(arg7)
        int32_t rcx_18
        int32_t r13_3
        
        if (temp0_138 == 0)
            r13_3 = r13_1
            zmm3 = zx.o(0)
            rcx_18 = rcx_7
            arg7 = var_258_1
            zmm8 = var_278_1
            zmm9 = var_228_1
            zmm13 = zx.o(arg9)
        else
            float var_2a8[0x4]
            float var_298[0x4]
            float var_238[0x4]
            int64_t rsi_8
            int64_t rdi_3
            int64_t r9_3
            int64_t r14_8
            
            if (r11.d u> 6)
            label_14013e290:
                uint64_t r14_3 = zx.q(temp0_138)
                rdi_3 = r14_3 & 1
                arg7 = var_258_1
                
                if (rdi_3 == 0)
                    r13_3 = r13_1
                    zmm3 = zx.o(0)
                    zmm7 = var_238
                    zmm1 = var_298
                    zmm0 = var_2a8
                    zmm8 = var_278_1
                    
                    if (rdi_3 != 0)
                        zmm1 = _mm_blend_epi16(zmm1, zmm3, 3)
                else
                    zmm3 = zx.o(0)
                    zmm7 = _mm_blend_epi16(var_238, zmm3, 3)
                    r13_3 = r13_1
                    zmm1 = var_298
                    zmm0 = var_2a8
                    zmm8 = var_278_1
                    
                    if (rdi_3 != 0)
                        zmm1 = _mm_blend_epi16(zmm1, zmm3, 3)
                
                zmm13 = zx.o(arg9)
                rcx_18 = rcx_7
                zmm9 = var_228_1
                bool cond:36_1
                bool cond:37_1
                bool cond:40_1
                bool cond:41_1
                
                if (rdi_3 != 0)
                    zmm0 = _mm_blend_epi16(zmm0, zmm3, 3)
                    r9_3 = r14_3 & 2
                    cond:36_1 = r9_3 == 0
                    cond:37_1 = r9_3 != 0
                    cond:40_1 = r9_3 == 0
                    cond:41_1 = r9_3 != 0
                    
                    if (r9_3 != 0)
                        goto label_14013ea99
                    
                    goto label_14013ea4e
                
                r9_3 = r14_3 & 2
                cond:36_1 = r9_3 == 0
                cond:37_1 = r9_3 != 0
                cond:40_1 = r9_3 == 0
                cond:41_1 = r9_3 != 0
                
                if (r9_3 == 0)
                label_14013ea4e:
                    
                    if (not(cond:36_1))
                    label_14013ea50:
                        zmm1 = _mm_blend_epi16(zmm1, zmm3, 0xc)
                        
                        if (cond:41_1)
                            goto label_14013eaa3
                        
                        goto label_14013ea5b
                else
                label_14013ea99:
                    zmm7 = _mm_blend_epi16(zmm7, zmm3, 0xc)
                    
                    if (cond:37_1)
                        goto label_14013ea50
                
                bool cond:59_1
                bool cond:60_1
                bool cond:63_1
                bool cond:64_1
                
                if (not(cond:40_1))
                label_14013eaa3:
                    zmm0 = _mm_blend_epi16(zmm0, zmm3, 0xc)
                    rsi_8 = r14_3 & 4
                    cond:59_1 = rsi_8 == 0
                    cond:60_1 = rsi_8 != 0
                    cond:63_1 = rsi_8 == 0
                    cond:64_1 = rsi_8 != 0
                    
                    if (rsi_8 != 0)
                        goto label_14013ea61
                    
                    goto label_14013eab2
                
            label_14013ea5b:
                rsi_8 = r14_3 & 4
                cond:59_1 = rsi_8 == 0
                cond:60_1 = rsi_8 != 0
                cond:63_1 = rsi_8 == 0
                cond:64_1 = rsi_8 != 0
                
                if (rsi_8 == 0)
                label_14013eab2:
                    
                    if (not(cond:59_1))
                    label_14013eab4:
                        zmm1 = _mm_blend_epi16(zmm1, zmm3, 0x30)
                        
                        if (cond:64_1)
                            goto label_14013ea6b
                        
                        goto label_14013eabc
                else
                label_14013ea61:
                    zmm7 = _mm_blend_epi16(zmm7, zmm3, 0x30)
                    
                    if (cond:60_1)
                        goto label_14013eab4
                
                bool cond:79_1
                bool cond:80_1
                bool cond:83_1
                bool cond:84_1
                
                if (not(cond:63_1))
                label_14013ea6b:
                    zmm0 = _mm_blend_epi16(zmm0, zmm3, 0x30)
                    r14_8 = r14_3 & 8
                    cond:79_1 = r14_8 == 0
                    cond:80_1 = r14_8 != 0
                    cond:83_1 = r14_8 == 0
                    cond:84_1 = r14_8 == 0
                    
                    if (r14_8 != 0)
                        goto label_14013eac2
                    
                    goto label_14013ea77
                
            label_14013eabc:
                r14_8 = r14_3 & 8
                cond:79_1 = r14_8 == 0
                cond:80_1 = r14_8 != 0
                cond:83_1 = r14_8 == 0
                cond:84_1 = r14_8 == 0
                
                if (r14_8 != 0)
                label_14013eac2:
                    zmm7 = _mm_blend_epi16(zmm7, zmm3, 0xc0)
                    
                    if (cond:80_1)
                        goto label_14013ea79
                    
                    goto label_14013eaca
                
            label_14013ea77:
                
                if (cond:79_1)
                label_14013eaca:
                    
                    if (not(cond:83_1))
                        zmm0 = _mm_blend_epi16(zmm0, zmm3, 0xc0)
                else
                label_14013ea79:
                    zmm1 = _mm_blend_epi16(zmm1, zmm3, 0xc0)
                    
                    if (not(cond:84_1))
                        zmm0 = _mm_blend_epi16(zmm0, zmm3, 0xc0)
            else
                zmm1 = __pmulld_xmmdq_memdq(var_1d8_1, var_288)
                zmm0 = _mm_cvtepi32_epi64(zmm1.q)
                zmm3 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e).q)
                
                switch (r11.d)
                    case 0, 1
                        zmm11 = _mm_add_epi64(zmm11, zmm8)
                        zmm13 = _mm_add_epi64(_mm_add_epi64(zmm13, zmm7), zmm3)
                        zmm11 = _mm_add_epi64(zmm11, zmm0)
                        zmm1 = _mm_shuffle_epi32(arg7, 0x50)
                        float temp0_148[0x4] = _mm_blendv_ps(zx.o(0), zmm11, zmm1)
                        zmm2 = _mm_shuffle_epi32(arg7, 0xfa)
                        float temp0_150[0x4] = _mm_blendv_ps(zx.o(0), zmm13, zmm2)
                        int64_t rax_14 = _mm_extract_epi64(temp0_148, 1)
                        void* rcx_16 = arg8 + rax_14
                        zmm13 = *(arg8 + rax_14)
                        int64_t rax_15 = temp0_150[0].q
                        int64_t rbx_4 = _mm_extract_epi64(temp0_150, 1)
                        void* rdx_4 = arg8 + rax_15
                        zmm3 = data_1434426c0
                        float temp0_151[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                        zmm9 = *(arg8 + rax_15)
                        float temp0_152[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm2)
                        uint64_t var_1c8 = (*(arg8 + rbx_4)).q
                        void* rbp_5 = temp0_148[0].q + arg8
                        zmm8 = *(temp0_151[0].q + rbp_5)
                        zmm4 = *(_mm_extract_epi64(temp0_151, 1) + rcx_16)
                        zmm11 = *(temp0_152[0].q + rdx_4)
                        uint32_t (* rax_19)[0x4] = _mm_extract_epi64(temp0_152, 1)
                        void* rbx_5 = arg8 + rbx_4
                        zmm0 = zmm1
                        zmm1 = data_1434426e0
                        float temp0_153[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                        arg7 = *(rax_19 + rbx_5)
                        float temp0_154[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        zmm0 = *(temp0_153[0].q + rbp_5)
                        zmm1 = *(_mm_extract_epi64(temp0_153, 1) + rcx_16)
                        float (* rax_22)[0x4] = temp0_154[0].q
                        uint128_t* rcx_17 = _mm_extract_epi64(temp0_154, 1)
                        zmm2 = *(rax_22 + rdx_4)
                        zmm10 = *(rcx_17 + rbx_5)
                        uint64_t r14_2 = zx.q(temp0_138)
                        rdi_3 = r14_2 & 1
                        bool cond:28_1
                        
                        if (rdi_3 != 0)
                            zmm7 = _mm_blend_ps(var_238, *rbp_5, 1)
                            r13_3 = r13_1
                            cond:28_1 = rdi_3 == 0
                            rcx_18 = rcx_7
                            
                            if (rdi_3 != 0)
                                var_298 = _mm_blend_ps(var_298, zmm8, 1)
                        else
                            r13_3 = r13_1
                            zmm7 = var_238
                            cond:28_1 = rdi_3 == 0
                            rcx_18 = rcx_7
                            
                            if (rdi_3 != 0)
                                var_298 = _mm_blend_ps(var_298, zmm8, 1)
                        
                        zmm8 = var_278_1
                        bool cond:42_1
                        bool cond:51_1
                        bool cond:52_1
                        
                        if (cond:28_1)
                            zmm0 = var_2a8
                            r9_3 = r14_2 & 2
                            cond:42_1 = r9_3 == 0
                            cond:51_1 = r9_3 == 0
                            cond:52_1 = r9_3 != 0
                            
                            if (r9_3 != 0)
                                zmm7 = _mm_insert_ps(zmm7, zmm13, 0x10)
                        else
                            zmm0 = _mm_blend_ps(var_2a8, zmm0, 1)
                            r9_3 = r14_2 & 2
                            cond:42_1 = r9_3 == 0
                            cond:51_1 = r9_3 == 0
                            cond:52_1 = r9_3 != 0
                            
                            if (r9_3 != 0)
                                zmm7 = _mm_insert_ps(zmm7, zmm13, 0x10)
                        
                        if (not(cond:42_1))
                            var_298 = _mm_insert_ps(var_298, zmm4, 0x10)
                            
                            if (cond:52_1)
                                goto label_14013e992
                            
                            goto label_14013e947
                        
                        bool cond:65_1
                        bool cond:66_1
                        bool cond:73_1
                        bool cond:74_1
                        
                        if (not(cond:51_1))
                        label_14013e992:
                            zmm0 = _mm_insert_ps(zmm0, zmm1, 0x10)
                            zmm1 = var_298
                            rsi_8 = r14_2 & 4
                            cond:65_1 = rsi_8 == 0
                            cond:66_1 = rsi_8 != 0
                            cond:73_1 = rsi_8 == 0
                            cond:74_1 = rsi_8 != 0
                            
                            if (rsi_8 != 0)
                                goto label_14013e955
                            
                            goto label_14013e9a6
                        
                    label_14013e947:
                        zmm1 = var_298
                        rsi_8 = r14_2 & 4
                        cond:65_1 = rsi_8 == 0
                        cond:66_1 = rsi_8 != 0
                        cond:73_1 = rsi_8 == 0
                        cond:74_1 = rsi_8 != 0
                        
                        if (rsi_8 == 0)
                        label_14013e9a6:
                            
                            if (not(cond:65_1))
                            label_14013e9a8:
                                zmm1 = _mm_insert_ps(zmm1, zmm11, 0x20)
                                
                                if (cond:74_1)
                                    goto label_14013e960
                                
                                goto label_14013e9b1
                        else
                        label_14013e955:
                            zmm7 = _mm_insert_ps(zmm7, zmm9, 0x20)
                            
                            if (cond:66_1)
                                goto label_14013e9a8
                        
                        bool cond:85_1
                        bool cond:93_1
                        bool cond:94_1
                        bool cond:86_1
                        
                        if (cond:73_1)
                        label_14013e9b1:
                            r14_8 = r14_2 & 8
                            cond:85_1 = r14_8 == 0
                            cond:86_1 = r14_8 != 0
                            cond:93_1 = r14_8 == 0
                            cond:94_1 = r14_8 != 0
                            
                            if (r14_8 != 0)
                            label_14013e9b7:
                                zmm7 = __insertps_xmmps_memd_immb(zmm7, var_1c8.d, 0x30)
                                
                                if (cond:86_1)
                                    goto label_14013e96e
                                
                                goto label_14013e9c4
                        else
                        label_14013e960:
                            zmm0 = _mm_insert_ps(zmm0, zmm2, 0x20)
                            r14_8 = r14_2 & 8
                            cond:85_1 = r14_8 == 0
                            cond:86_1 = r14_8 != 0
                            cond:93_1 = r14_8 == 0
                            cond:94_1 = r14_8 != 0
                            
                            if (r14_8 != 0)
                                goto label_14013e9b7
                        
                        if (cond:85_1)
                        label_14013e9c4:
                            zmm3 = zx.o(0)
                            arg7 = var_258_1
                            
                            if (not(cond:93_1))
                                zmm0 = _mm_insert_ps(zmm0, zmm10, 0x30)
                        else
                        label_14013e96e:
                            zmm1 = _mm_insert_ps(zmm1, arg7, 0x30)
                            zmm3 = zx.o(0)
                            arg7 = var_258_1
                            
                            if (cond:94_1)
                                zmm0 = _mm_insert_ps(zmm0, zmm10, 0x30)
                        
                        zmm13 = zx.o(arg9)
                        zmm9 = var_228_1
                    case 2
                        zmm11 = _mm_add_epi64(zmm11, zmm8)
                        zmm13 = _mm_add_epi64(_mm_add_epi64(zmm13, zmm7), zmm3)
                        zmm11 = _mm_add_epi64(zmm11, zmm0)
                        zmm2 = _mm_shuffle_epi32(arg7, 0x50)
                        float temp0_161[0x4] = _mm_blendv_ps(zx.o(0), zmm11, zmm2)
                        zmm8 = _mm_shuffle_epi32(arg7, 0xfa)
                        float temp0_163[0x4] = _mm_blendv_ps(zx.o(0), zmm13, zmm8)
                        int64_t r9 = temp0_161[0].q
                        void* rbp_6 = arg8 + r9
                        int64_t r14_4 = _mm_extract_epi64(temp0_161, 1)
                        void* rcx_19 = arg8 + r14_4
                        int64_t rsi_2 = temp0_163[0].q
                        zmm1 = data_1434426b0
                        float temp0_164[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        float temp0_165[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm8)
                        zmm3 = zx.o(*(temp0_164[0].q + rbp_6))
                        int16_t* rax_25 = _mm_extract_epi64(temp0_164, 1)
                        zmm1 = data_1434426c0
                        zmm9 = zmm1
                        float temp0_166[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm2)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(rax_25 + rcx_19), 1)
                        void* rdx_5 = arg8 + rsi_2
                        zmm1 = __pinsrw_xmmdq_memw_immb(zx.o(*(temp0_166[0].q + rbp_6)), 
                            *(_mm_extract_epi64(temp0_166, 1) + rcx_19), 1)
                        int64_t rax_29 = _mm_extract_epi64(temp0_163, 1)
                        int16_t* rcx_20 = temp0_165[0].q
                        float temp0_169[0x4] = _mm_blendv_ps(zx.o(0), zmm9, zmm8)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(rcx_20 + rdx_5), 2)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(temp0_169[0].q + rdx_5), 2)
                        void* rcx_22 = arg8 + rax_29
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, 
                            *(_mm_extract_epi64(temp0_165, 1) + rcx_22), 3)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, 
                            *(_mm_extract_epi64(temp0_169, 1) + rcx_22), 3)
                        zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg8 + r9)), *(arg8 + r14_4), 1), 
                                *(arg8 + rsi_2), 2), 
                            *(arg8 + rax_29), 3).q)
                        zmm2 = data_1434424d0
                        float temp0_179[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm2))
                        zmm0 = data_1434426d0
                        float temp0_180[0x4] = _mm_div_ps(temp0_179, zmm0)
                        float temp0_184[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm3[0].q), zmm2)), 
                            zmm0)
                        zmm0 = _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm1.q), zmm2))
                        float temp0_188[0x4] = __mulps_xmmps_memps(temp0_180, data_143442710)
                        uint64_t r14_5 = zx.q(temp0_138)
                        rdi_3 = r14_5 & 1
                        
                        if (rdi_3 == 0)
                            r13_3 = r13_1
                            zmm7 = var_238
                        else
                            zmm7 = _mm_blend_ps(var_238, temp0_188, 1)
                            r13_3 = r13_1
                        
                        zmm1 = var_298
                        arg7 = var_258_1
                        zmm8 = var_278_1
                        zmm0 = __divps_xmmps_memps(zmm0, data_1434426d0)
                        float temp0_291[0x4] = __mulps_xmmps_memps(temp0_184, data_143442710)
                        zmm13 = zx.o(arg9)
                        zmm3 = zx.o(0)
                        rcx_18 = rcx_7
                        
                        if (rdi_3 != 0)
                            zmm1 = _mm_blend_ps(zmm1, temp0_291, 1)
                            zmm9 = var_228_1
                            zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                            
                            if (rdi_3 != 0)
                                goto label_14013ebaa
                            
                            goto label_14013eb3d
                        
                        zmm9 = var_228_1
                        zmm0 = __mulps_xmmps_memps(zmm0, data_143442710)
                        bool cond:43_1
                        bool cond:44_1
                        bool cond:53_1
                        bool cond:54_1
                        
                        if (rdi_3 != 0)
                        label_14013ebaa:
                            var_2a8 = _mm_blend_ps(var_2a8, zmm0, 1)
                            r9_3 = r14_5 & 2
                            cond:43_1 = r9_3 == 0
                            cond:44_1 = r9_3 != 0
                            cond:53_1 = r9_3 == 0
                            cond:54_1 = r9_3 != 0
                            
                            if (r9_3 != 0)
                                goto label_14013eb43
                            
                            goto label_14013ebb7
                        
                    label_14013eb3d:
                        r9_3 = r14_5 & 2
                        cond:43_1 = r9_3 == 0
                        cond:44_1 = r9_3 != 0
                        cond:53_1 = r9_3 == 0
                        cond:54_1 = r9_3 != 0
                        
                        if (r9_3 == 0)
                        label_14013ebb7:
                            
                            if (not(cond:43_1))
                            label_14013ebb9:
                                zmm1 = _mm_blend_ps(zmm1, temp0_291, 2)
                                
                                if (cond:54_1)
                                    goto label_14013eb57
                                
                                goto label_14013ebc4
                        else
                        label_14013eb43:
                            zmm7 = _mm_blend_ps(zmm7, temp0_188, 2)
                            
                            if (cond:44_1)
                                goto label_14013ebb9
                        
                        bool cond:67_1
                        bool cond:68_1
                        bool cond:75_1
                        bool cond:76_1
                        
                        if (not(cond:53_1))
                        label_14013eb57:
                            var_2a8 = _mm_blend_ps(var_2a8, zmm0, 2)
                            rsi_8 = r14_5 & 4
                            cond:67_1 = rsi_8 == 0
                            cond:68_1 = rsi_8 != 0
                            cond:75_1 = rsi_8 == 0
                            cond:76_1 = rsi_8 != 0
                            
                            if (rsi_8 != 0)
                                goto label_14013ebca
                            
                            goto label_14013eb64
                        
                    label_14013ebc4:
                        rsi_8 = r14_5 & 4
                        cond:67_1 = rsi_8 == 0
                        cond:68_1 = rsi_8 != 0
                        cond:75_1 = rsi_8 == 0
                        cond:76_1 = rsi_8 != 0
                        
                        if (rsi_8 == 0)
                        label_14013eb64:
                            
                            if (not(cond:67_1))
                            label_14013eb66:
                                zmm1 = _mm_blend_ps(zmm1, temp0_291, 4)
                                
                                if (cond:76_1)
                                    goto label_14013ebde
                                
                                goto label_14013eb6e
                        else
                        label_14013ebca:
                            zmm7 = _mm_blend_ps(zmm7, temp0_188, 4)
                            
                            if (cond:68_1)
                                goto label_14013eb66
                        
                        bool cond:87_1
                        bool cond:88_1
                        bool cond:95_1
                        bool cond:96_1
                        
                        if (not(cond:75_1))
                        label_14013ebde:
                            var_2a8 = _mm_blend_ps(var_2a8, zmm0, 4)
                            r14_8 = r14_5 & 8
                            cond:87_1 = r14_8 == 0
                            cond:88_1 = r14_8 != 0
                            cond:95_1 = r14_8 == 0
                            cond:96_1 = r14_8 != 0
                            
                            if (r14_8 != 0)
                                goto label_14013eb74
                            
                            goto label_14013ebe8
                        
                    label_14013eb6e:
                        r14_8 = r14_5 & 8
                        cond:87_1 = r14_8 == 0
                        cond:88_1 = r14_8 != 0
                        cond:95_1 = r14_8 == 0
                        cond:96_1 = r14_8 != 0
                        
                        if (r14_8 != 0)
                        label_14013eb74:
                            zmm7 = _mm_blend_ps(zmm7, temp0_188, 8)
                            
                            if (cond:88_1)
                                goto label_14013ebea
                            
                            goto label_14013eb7c
                        
                    label_14013ebe8:
                        
                        if (cond:87_1)
                        label_14013eb7c:
                            
                            if (cond:95_1)
                                zmm0 = var_2a8
                            else
                                zmm0 = _mm_blend_ps(var_2a8, zmm0, 8)
                        else
                        label_14013ebea:
                            zmm1 = _mm_blend_ps(zmm1, temp0_291, 8)
                            
                            if (cond:96_1)
                                zmm0 = _mm_blend_ps(var_2a8, zmm0, 8)
                            else
                                zmm0 = var_2a8
                    case 3
                        float temp0_193[0x4] = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(_mm_add_epi64(zmm11, zmm8), zmm0), 
                            _mm_shuffle_epi32(arg7, 0x50))
                        zmm0 = zmm9 & not.o(zmm10)
                        int64_t rax_31 = sx.q(zmm0.d)
                        void* rsi_3 = arg8 + rax_31
                        zmm1 = *(arg8 + rax_31)
                        int64_t rax_33 = sx.q(_mm_extract_epi32(zmm0, 1))
                        void* rcx_24 = arg8 + rax_33
                        int64_t rdx_9 = sx.q(_mm_extract_epi32(zmm0, 2))
                        void* rbp_7 = arg8 + rdx_9
                        int64_t rdi_6 = sx.q(_mm_extract_epi32(zmm0, 3))
                        zmm1 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(arg8 + rax_33), 0x10), 
                                *(arg8 + rdx_9), 0x20), 
                            *(arg8 + rdi_6), 0x30)
                        zmm0 = zmm9 & not.o(data_142fc95e0)
                        uint64_t rax_34 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rax_35 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rax_36 = zx.q(zmm0.d)
                        int32_t* rdx_10 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm0 = zmm9 & not.o(data_143442650)
                        uint64_t r15_1 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t r11_1 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t r12_1 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm2 = zmm9 & not.o(data_142fc95f0)
                        uint64_t r9_1 = zx.q(_mm_extract_epi32(zmm2, 1))
                        uint64_t r14_6 = zx.q(_mm_extract_epi32(zmm2, 2))
                        zmm13 = _mm_add_epi64(zmm13, zmm7)
                        zmm4 = *(zx.q(zmm0.d) + rsi_3)
                        int32_t* rdx_12 = zx.q(_mm_extract_epi32(zmm2, 3))
                        void* r15_2 = arg8 + rdi_6
                        float temp0_212[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm4, *(r15_1 + rcx_24), 0x10), 
                                *(r11_1 + rbp_7), 0x20), 
                            *(r12_1 + r15_2), 0x30)
                        float temp0_215[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm13, zmm3), 
                            _mm_shuffle_epi32(arg7, 0xfa))
                        zmm0 = *(rax_36 + rsi_3)
                        zmm7 = zmm9 & not.o(data_143442660)
                        uint64_t rax_37 = zx.q(_mm_extract_epi32(zmm7, 1))
                        uint64_t rdi_7 = zx.q(_mm_extract_epi32(zmm7, 2))
                        uint64_t r11_2 = zx.q(_mm_extract_epi32(zmm7, 3))
                        float temp0_221[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(zx.q(zmm7[0]) + rsi_3), 
                                    *(rax_37 + rcx_24), 0x10), 
                                *(rdi_7 + rbp_7), 0x20), 
                            *(r11_2 + r15_2), 0x30)
                        uint64_t rax_38 = zx.q(zmm2[0])
                        zmm9 &= not.o(data_143442670)
                        int32_t* r11_3 = zx.q(_mm_extract_epi32(zmm9, 1))
                        zmm8 = *(rax_38 + rsi_3)
                        int32_t* rax_39 = zx.q(_mm_extract_epi32(zmm9, 2))
                        int64_t rdi_8 = temp0_193[0].q
                        int64_t rbx_9 = _mm_extract_epi64(temp0_193, 1)
                        int64_t rdi_9 = temp0_215[0].q
                        zmm2 = __pinsrd_xmmdq_memd_immb(zx.o(*(arg8 + rdi_8)), *(arg8 + rbx_9), 1)
                        int64_t rbx_10 = _mm_extract_epi64(temp0_215, 1)
                        zmm2 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zmm2, *(arg8 + rdi_9), 2), *(arg8 + rbx_10), 3)
                        uint128_t* rdi_10 = zx.q(zmm9.d)
                        int32_t* rbx_11 = zx.q(_mm_extract_epi32(zmm9, 3))
                        float temp0_232[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                temp0_212), 
                            zmm1)
                        arg6 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                        zmm1 = data_143442440
                        zmm4 = zmm1
                        float temp0_235[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg6, zmm1))
                        zmm1 = data_143442690
                        zmm9 = zmm1
                        float temp0_237[0x4] = _mm_mul_ps(_mm_div_ps(temp0_235, zmm1), temp0_221)
                        zmm1 = *(rdi_10 + rsi_3)
                        zmm0 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm0, *(rax_34 + rcx_24), 0x10), 
                                *(rax_35 + rbp_7), 0x20), 
                            *(rdx_10 + r15_2), 0x30)
                        float temp0_243[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm8, *(r9_1 + rcx_24), 0x10), 
                                *(r14_6 + rbp_7), 0x20), 
                            *(rdx_12 + r15_2), 0x30)
                        zmm1 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(r11_3 + rcx_24), 0x10), 
                                *(rax_39 + rbp_7), 0x20), 
                            *(rbx_11 + r15_2), 0x30)
                        float temp0_250[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm2, 0x15), zmm4)), zmm9)
                        uint64_t r14_7 = zx.q(temp0_138)
                        rdi_3 = r14_7 & 1
                        
                        if (rdi_3 != 0)
                            var_238 = _mm_blend_ps(var_238, temp0_232, 1)
                        
                        r13_3 = r13_1
                        arg7 = var_258_1
                        zmm1 = _mm_mul_ps(zmm1, temp0_250)
                        zmm0 = _mm_add_ps(zmm0, temp0_237)
                        r11 = var_240
                        r15 = zx.q(arg10)
                        zmm13 = zx.o(arg9)
                        zmm3 = zx.o(0)
                        rcx_18 = rcx_7
                        
                        if (rdi_3 != 0)
                            var_298 = _mm_blend_ps(var_298, zmm0, 1)
                            zmm7 = var_238
                            zmm9 = var_228_1
                            zmm8 = _mm_add_ps(temp0_243, zmm1)
                            
                            if (rdi_3 != 0)
                                goto label_14013e89e
                            
                            goto label_14013e79b
                        
                        zmm7 = var_238
                        zmm9 = var_228_1
                        zmm8 = _mm_add_ps(temp0_243, zmm1)
                        bool cond:45_1
                        bool cond:46_1
                        bool cond:55_1
                        bool cond:56_1
                        
                        if (rdi_3 != 0)
                        label_14013e89e:
                            var_2a8 = _mm_blend_ps(var_2a8, zmm8, 1)
                            zmm1 = var_298
                            r9_3 = r14_7 & 2
                            cond:45_1 = r9_3 == 0
                            cond:46_1 = r9_3 != 0
                            cond:55_1 = r9_3 == 0
                            cond:56_1 = r9_3 != 0
                            
                            if (r9_3 != 0)
                                goto label_14013e7ad
                            
                            goto label_14013e8b4
                        
                    label_14013e79b:
                        zmm1 = var_298
                        r9_3 = r14_7 & 2
                        cond:45_1 = r9_3 == 0
                        cond:46_1 = r9_3 != 0
                        cond:55_1 = r9_3 == 0
                        cond:56_1 = r9_3 != 0
                        
                        if (r9_3 == 0)
                        label_14013e8b4:
                            
                            if (not(cond:45_1))
                            label_14013e8ba:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 2)
                                
                                if (cond:56_1)
                                    goto label_14013e7ca
                                
                                goto label_14013e8c9
                        else
                        label_14013e7ad:
                            zmm7 = _mm_blend_ps(zmm7, temp0_232, 2)
                            
                            if (cond:46_1)
                                goto label_14013e8ba
                        
                        bool cond:69_1
                        bool cond:70_1
                        bool cond:77_1
                        bool cond:78_1
                        
                        if (not(cond:55_1))
                        label_14013e7ca:
                            var_2a8 = _mm_blend_ps(var_2a8, zmm8, 2)
                            rsi_8 = r14_7 & 4
                            cond:69_1 = rsi_8 == 0
                            cond:70_1 = rsi_8 != 0
                            cond:77_1 = rsi_8 == 0
                            cond:78_1 = rsi_8 != 0
                            
                            if (rsi_8 != 0)
                                goto label_14013e8d3
                            
                            goto label_14013e7db
                        
                    label_14013e8c9:
                        rsi_8 = r14_7 & 4
                        cond:69_1 = rsi_8 == 0
                        cond:70_1 = rsi_8 != 0
                        cond:77_1 = rsi_8 == 0
                        cond:78_1 = rsi_8 != 0
                        
                        if (rsi_8 == 0)
                        label_14013e7db:
                            
                            if (not(cond:69_1))
                            label_14013e7e1:
                                zmm1 = _mm_blend_ps(zmm1, zmm0, 4)
                                
                                if (cond:78_1)
                                    goto label_14013e8f0
                                
                                goto label_14013e7ed
                        else
                        label_14013e8d3:
                            zmm7 = _mm_blend_ps(zmm7, temp0_232, 4)
                            
                            if (cond:70_1)
                                goto label_14013e7e1
                        
                        bool cond:89_1
                        bool cond:97_1
                        bool cond:98_1
                        bool cond:90_1
                        
                        if (cond:77_1)
                        label_14013e7ed:
                            r14_8 = r14_7 & 8
                            cond:89_1 = r14_8 == 0
                            cond:90_1 = r14_8 != 0
                            cond:97_1 = r14_8 == 0
                            cond:98_1 = r14_8 != 0
                            
                            if (r14_8 != 0)
                            label_14013e7f7:
                                zmm7 = _mm_blend_ps(zmm7, temp0_232, 8)
                                
                                if (cond:90_1)
                                    goto label_14013e904
                                
                                goto label_14013e803
                        else
                        label_14013e8f0:
                            var_2a8 = _mm_blend_ps(var_2a8, zmm8, 4)
                            r14_8 = r14_7 & 8
                            cond:89_1 = r14_8 == 0
                            cond:90_1 = r14_8 != 0
                            cond:97_1 = r14_8 == 0
                            cond:98_1 = r14_8 != 0
                            
                            if (r14_8 != 0)
                                goto label_14013e7f7
                        
                        if (cond:89_1)
                        label_14013e803:
                            zmm0 = var_2a8
                            
                            if (not(cond:97_1))
                                zmm0 = _mm_blend_ps(zmm0, zmm8, 8)
                        else
                        label_14013e904:
                            zmm1 = _mm_blend_ps(zmm1, zmm0, 8)
                            zmm0 = var_2a8
                            
                            if (cond:98_1)
                                zmm0 = _mm_blend_ps(zmm0, zmm8, 8)
                        
                        zmm8 = var_278_1
                    case 4, 5, 6
                        goto label_14013e290
            
            var_238 = zmm7
            float temp0_305[0x4] = _mm_sub_ps(zmm7, zmm14)
            var_298 = zmm1
            float temp0_306[0x4] = _mm_sub_ps(zmm1, zmm12)
            float temp0_307[0x4] = _mm_mul_ps(temp0_305, arg7)
            zmm1 = zmm14
            
            if (rdi_3 != 0)
                zmm1.d = zmm14.d f+ temp0_307[0]
            
            var_2a8 = zmm0
            float temp0_308[0x4] = _mm_sub_ps(zmm0, arg5)
            float temp0_309[0x4] = _mm_mul_ps(temp0_306, arg7)
            zmm2 = zmm12
            
            if (rdi_3 != 0)
                zmm2 = zmm12
                zmm2[0] = zmm2[0] + temp0_309[0]
                zmm7 = _mm_mul_ps(temp0_308, arg7)
                zmm0 = arg5
                
                if (rdi_3 != 0)
                    goto label_14013ecbc
                
                goto label_14013ec52
            
            zmm7 = _mm_mul_ps(temp0_308, arg7)
            zmm0 = arg5
            bool cond:106_1
            bool cond:107_1
            bool cond:108_1
            bool cond:109_1
            
            if (rdi_3 != 0)
            label_14013ecbc:
                zmm0.d = arg5.d f+ zmm7[0]
                zmm14 = _mm_add_ps(zmm14, temp0_307)
                cond:106_1 = r9_3 == 0
                cond:107_1 = r9_3 != 0
                cond:108_1 = r9_3 == 0
                cond:109_1 = r9_3 != 0
                
                if (r9_3 != 0)
                    goto label_14013ec5b
                
                goto label_14013ecc9
            
        label_14013ec52:
            zmm14 = _mm_add_ps(zmm14, temp0_307)
            cond:106_1 = r9_3 == 0
            cond:107_1 = r9_3 != 0
            cond:108_1 = r9_3 == 0
            cond:109_1 = r9_3 != 0
            
            if (r9_3 != 0)
            label_14013ec5b:
                zmm1 = _mm_blend_ps(zmm1, zmm14, 2)
                zmm12 = _mm_add_ps(zmm12, temp0_309)
                
                if (cond:107_1)
                    goto label_14013eccf
                
                goto label_14013ec68
            
        label_14013ecc9:
            zmm12 = _mm_add_ps(zmm12, temp0_309)
            
            if (not(cond:106_1))
            label_14013eccf:
                zmm2 = _mm_blend_ps(zmm2, zmm12, 2)
                arg5 = _mm_add_ps(arg5, zmm7)
                
                if (cond:109_1)
                    goto label_14013ec6d
                
                goto label_14013ecdb
            
        label_14013ec68:
            arg5 = _mm_add_ps(arg5, zmm7)
            bool cond:110_1
            bool cond:111_1
            bool cond:112_1
            bool cond:113_1
            
            if (not(cond:108_1))
            label_14013ec6d:
                zmm0 = _mm_blend_ps(zmm0, arg5, 2)
                cond:110_1 = rsi_8 == 0
                cond:111_1 = rsi_8 != 0
                cond:112_1 = rsi_8 == 0
                cond:113_1 = rsi_8 != 0
                
                if (rsi_8 != 0)
                    goto label_14013ece0
                
                goto label_14013ec78
            
        label_14013ecdb:
            cond:110_1 = rsi_8 == 0
            cond:111_1 = rsi_8 != 0
            cond:112_1 = rsi_8 == 0
            cond:113_1 = rsi_8 != 0
            
            if (rsi_8 == 0)
            label_14013ec78:
                
                if (not(cond:110_1))
                label_14013ec7a:
                    zmm2 = _mm_blend_ps(zmm2, zmm12, 4)
                    
                    if (cond:113_1)
                        goto label_14013eceb
                    
                    goto label_14013ec83
            else
            label_14013ece0:
                zmm1 = _mm_blend_ps(zmm1, zmm14, 4)
                
                if (cond:111_1)
                    goto label_14013ec7a
            
            bool cond:114_1
            bool cond:115_1
            bool cond:116_1
            bool cond:117_1
            
            if (not(cond:112_1))
            label_14013eceb:
                zmm0 = _mm_blend_ps(zmm0, arg5, 4)
                cond:114_1 = r14_8 == 0
                cond:115_1 = r14_8 != 0
                cond:116_1 = r14_8 != 0
                cond:117_1 = r14_8 == 0
                
                if (r14_8 != 0)
                    goto label_14013ec88
                
                goto label_14013ecf6
            
        label_14013ec83:
            cond:114_1 = r14_8 == 0
            cond:115_1 = r14_8 != 0
            cond:116_1 = r14_8 != 0
            cond:117_1 = r14_8 == 0
            
            if (r14_8 != 0)
            label_14013ec88:
                zmm14 = _mm_blend_ps(zmm14, zmm1, 7)
                arg4 = var_1fc_1
                
                if (cond:115_1)
                    goto label_14013ed04
                
                goto label_14013ec99
            
        label_14013ecf6:
            zmm14 = zmm1
            arg4 = var_1fc_1
            
            if (cond:114_1)
            label_14013ec99:
                zmm12 = zmm2
                
                if (cond:116_1)
                    zmm0 = _mm_blend_ps(zmm0, arg5, 8)
            else
            label_14013ed04:
                zmm12 = _mm_blend_ps(zmm12, zmm2, 7)
                
                if (not(cond:117_1))
                    zmm0 = _mm_blend_ps(zmm0, arg5, 8)
            
            arg5 = zmm0
        
        float temp0_327[0x4] = _mm_unpacklo_ps(arg5, zmm3[0].q)
        zmm0 = _mm_unpackhi_ps(arg5, zmm3)
        float temp0_329[0x4] = _mm_unpacklo_ps(zmm14, zmm12[0].q)
        zmm1 = _mm_unpackhi_ps(zmm14, zmm12)
        float temp0_331[0x4] = _mm_insert_ps(temp0_329, arg5, 0x28)
        float var_128_1[0x4] = temp0_331
        int64_t rax_43 = sx.q(zmm9.d) * 0x30
        *(arg1 + rax_43 + 0x20) = __extractps_memd_xmmps_immb(zmm14, 0)
        zmm4 = _mm_unpackhi_pd(temp0_329, temp0_327[0].q)
        *(arg1 + rax_43 + 0x24) = __extractps_memd_xmmps_immb(zmm12, 0)
        *(arg1 + rax_43 + 0x28) = __extractps_memd_xmmps_immb(arg5, 0)
        *(arg1 + rax_43 + 0x2c) = 0
        int64_t rax_47 = sx.q(_mm_extract_epi32(zmm9, 2)) * 0x30
        *(arg1 + rax_47 + 0x20) = __extractps_memd_xmmps_immb(zmm14, 1)
        float var_118_1[0x4] = zmm4
        *(arg1 + rax_47 + 0x24) = __extractps_memd_xmmps_immb(zmm12, 1)
        float temp0_339[0x4] = _mm_insert_ps(zmm1, arg5, 0xa8)
        *(arg1 + rax_47 + 0x28) = __extractps_memd_xmmps_immb(arg5, 1)
        *(arg1 + rax_47 + 0x2c) = 0
        int64_t rax_51 = sx.q(zmm8[0]) * 0x30
        *(arg1 + rax_51 + 0x20) = __extractps_memd_xmmps_immb(zmm14, 2)
        float var_108_1[0x4] = temp0_339
        *(arg1 + rax_51 + 0x24) = __extractps_memd_xmmps_immb(zmm12, 2)
        zmm1 = _mm_unpackhi_pd(zmm1, zmm0.q)
        *(arg1 + rax_51 + 0x28) = __extractps_memd_xmmps_immb(arg5, 2)
        *(arg1 + rax_51 + 0x2c) = 0
        *(arg1 + sx.q(_mm_extract_epi32(zmm8, 2)) * 0x30 + 0x20) = zmm1
        rcx_7 = rcx_18 + 4
        r13_1 = r13_3 + 0x20
        arg6 = _mm_cmpeq_epi32(temp0_331, temp0_331)
    while (rcx_7 s< rcx_4)
    
    result = zx.q(arg12)
    
    if (rcx_7 s< result.d)
        goto label_14013ee68
return result
