// 函数: sub_14012f9a4
// 地址: 0x14012f9a4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg8
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
float zmm10[0x4]
float var_a8[0x4] = zmm10
uint32_t zmm9[0x4]
uint32_t var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
float var_d8[0x4] = arg7
float var_e8[0x4] = arg6
float (* r12)[0x4] = arg2
int64_t r11 = sx.q(arg11)
uint64_t r15
r15.b = arg10
float zmm11[0x4] = arg9
int32_t rax_1 = *(&data_143442780 + (r11 << 2)) * *(&data_143442760 + (r11 << 2))
int32_t rcx_4 = ((arg12 s>> 0x1f u>> 0x1e) + arg12) & 0xfffffffc
int64_t var_240 = r11
uint64_t rax_50
float var_278[0x4]
float var_228[0x4]
float var_218[0x4]
int32_t rbp_1
float zmm0[0x4]
float zmm1[0x4]
uint32_t zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (rcx_4 s<= 0)
    rbp_1 = 0
    rax_50 = zx.q(arg12)
    
    if (0 s< rax_50.d)
    label_140130d8e:
        zmm3 = zmm11
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbp_1), 0), data_142e11d00)
        zmm9 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(rax_50.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm9
        int64_t rax_52 = sx.q(zmm0[0])
        void* r10_4 = r12 + rax_52
        int64_t rdx_16 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rbp_20 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rdi_11 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm4 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(r12 + rax_52)), *(r12 + rdx_16), 1), 
                *(r12 + rbp_20), 2), 
            *(r12 + rdi_11), 3)
        zmm0 = data_142fc95e0 & zmm9
        int32_t* r12_2 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* r15_4 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* r14_10 = zx.q(_mm_extract_epi32(zmm0, 3))
        float (* r11_3)[0x4] = zx.q(zmm0[0])
        zmm0 = _mm_slli_epi32(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(zx.o(*(r11_3 + r10_4)), *(r12_2 + r12 + rdx_16), 1), 
                    *(r15_4 + r12 + rbp_20), 2), 
                *(r14_10 + r12 + rdi_11), 3), 
            4) & zmm9
        int64_t rax_54 = sx.q(zmm0[0])
        int64_t rdx_18 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rsi_17 = sx.q(_mm_extract_epi32(zmm0, 2))
        void* rbp_21 = arg3 + rsi_17
        int16_t* rdi_13 = sx.q(_mm_extract_epi32(zmm0, 3))
        zmm11 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rax_54)), *(arg3 + rdx_18), 1), 
                *(arg3 + rsi_17), 2), 
            *(arg3 + rdi_13), 3)
        zmm1 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(r11_3 + arg3 + rax_54)), *(r12_2 + arg3 + rdx_18), 
                    1), 
                *(r15_4 + rbp_21), 2), 
            *(r14_10 + arg3 + rdi_13), 3)
        arg7 = zx.o(0)
        zmm12 = _mm_shuffle_epi32(zmm11, 0x4e)
        zmm0 = _mm_cmpgt_epi32(data_1434422d0, zmm1) & zmm9
        char temp0_373 = _mm_movemask_ps(zmm0)
        zmm2 = zx.o(0)
        char temp0_374
        
        if (temp0_373 != 0)
            temp0_374 = _mm_movemask_ps(zmm9)
            arg8 = zx.o(0)
            zmm2 = zmm0
            zmm8 = zx.o(0)
            zmm13 = zx.o(0)
        
        if (temp0_373 == 0 || temp0_374 != temp0_373)
            arg5 = _mm_cmpeq_epi32(arg5, arg5)
            zmm2 ^= arg5
            arg8 = zx.o(0)
            zmm8 = zx.o(0)
            
            if (not(0f >= zmm3[0]))
                arg5 = _mm_add_epi32(arg5, zmm1)
                
                if (zmm3[0] >= 1f)
                    arg7 = zx.o(0)
                    arg8 = _mm_blendv_ps(zx.o(0), arg5, _mm_and_ps(zmm2, zmm9))
                    zmm8 = arg8
                else
                    float temp0_377[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                    float temp0_379[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(arg5), temp0_377)
                    zmm0 = _mm_and_ps(zmm2, zmm9)
                    float temp0_381[0x4] = _mm_round_ps(temp0_379, 9)
                    arg8 = _mm_blendv_ps(zx.o(0), _mm_min_epi32(_mm_cvttps_epi32(temp0_381), arg5), 
                        zmm0)
                    arg7 = zx.o(0)
                    
                    if (arg10 != 1)
                        arg7 = _mm_sub_ps(temp0_379, temp0_381)
                    
                    zmm8 = _mm_blendv_ps(zx.o(0), 
                        _mm_min_epi32(_mm_sub_epi32(arg8, _mm_cmpeq_epi32(temp0_381, temp0_381)), 
                            arg5), 
                        zmm0)
            
            zmm13 = _mm_blendv_ps(zx.o(0), arg7, zmm2)
        
        zmm3 = _mm_cvtepi32_epi64(zmm11[0].q)
        arg6 = _mm_cvtepi32_epi64(zmm12[0].q)
        int32_t rcx_35 = var_240.d
        int32_t rax_57
        rax_57.b = rcx_35 == 3
        zmm0 = _mm_shuffle_epi32(zx.o(neg.d(rax_57)), 0)
        zmm1 = __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0) & zmm0
        zmm2 = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, zmm1)
        arg7 = _mm_cvtepi32_epi64(zmm2[0].q)
        arg5 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm2, 0x4e)[0].q)
        zmm14 = _mm_shuffle_epi32(zx.o(rax_1), 0)
        uint64_t rsi_18 = zx.q(rcx_35)
        float var_258_2[0x4] = arg5
        float var_298_2[0x4] = arg7
        float var_208_1[0x4] = arg6
        int32_t var_238
        var_238.o = zmm3
        int32_t var_268
        int32_t rax_68
        
        if (rcx_35 u> 6)
        label_140131628:
            char temp0_520 = _mm_movemask_ps(zmm9)
            arg7 = zx.o(0)
            rax_68 = var_240.d
            
            if ((temp0_520 & 4) != 0)
                arg7 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
            
            if ((temp0_520 & 8) != 0)
                arg7 = _mm_blend_epi16(arg7, zx.o(0), 0xc0)
            
            zmm12 = arg7
            arg6 = arg7
        else
            zmm2 = _mm_mullo_epi32(arg8, zmm14)
            zmm0 = _mm_cvtepi32_epi64(zmm2[0].q)
            zmm12 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm2, 0x4e)[0].q)
            
            switch (rsi_18)
                case 0, 1
                    var_268.o = zmm14
                    zmm2 = _mm_add_epi64(arg7, zmm3)
                    zmm3 = _mm_add_epi64(_mm_add_epi64(arg5, arg6), zmm12)
                    zmm2 = _mm_add_epi64(zmm2, zmm0)
                    zmm1 = _mm_shuffle_epi32(zmm9, 0x50)
                    float temp0_411[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm1)
                    uint32_t temp0_412[0x4] = _mm_shuffle_epi32(zmm9, 0xfa)
                    float temp0_413[0x4] = _mm_blendv_ps(zx.o(0), zmm3, temp0_412)
                    int64_t rax_59 = _mm_extract_epi64(temp0_411, 1)
                    void* rdx_22 = arg4 + rax_59
                    float var_1d8_2 = (*(arg4 + rax_59))[0]
                    int64_t rax_60 = temp0_413[0].q
                    void* rcx_36 = arg4 + rax_60
                    int64_t rbx_10 = _mm_extract_epi64(temp0_413, 1)
                    zmm3 = data_1434426c0
                    float temp0_414[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                    float var_1e8_2 = (*(arg4 + rax_60))[0]
                    float temp0_415[0x4] = _mm_blendv_ps(zx.o(0), zmm3, temp0_412)
                    float var_278_1 = (*(arg4 + rbx_10))[0]
                    rbp_21 = temp0_411[0].q + arg4
                    zmm12 = *(temp0_414[0].q + rbp_21)
                    zmm10 = *(_mm_extract_epi64(temp0_414, 1) + rdx_22)
                    float var_288_1 = (*(temp0_415[0].q + rcx_36))[0]
                    void* rbx_11 = arg4 + rbx_10
                    zmm14 = *(_mm_extract_epi64(temp0_415, 1) + rbx_11)
                    zmm3 = data_1434426e0
                    float temp0_416[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm1)
                    arg6 = _mm_blendv_ps(zx.o(0), zmm3, temp0_412)
                    arg7 = *(temp0_416[0].q + rbp_21)
                    zmm2 = *(_mm_extract_epi64(temp0_416, 1) + rdx_22)
                    float (* rax_67)[0x4] = arg6[0].q
                    float (* rdx_23)[0x4] = _mm_extract_epi64(arg6, 1)
                    zmm1 = *(rax_67 + rcx_36)
                    zmm0 = *(rdx_23 + rbx_11)
                    char temp0_418 = _mm_movemask_ps(zmm9)
                    bool cond:13_1
                    bool cond:14_1
                    bool cond:16_1
                    bool cond:17_1
                    
                    if ((temp0_418 & 1) == 0)
                        char temp2_1 = temp0_418 & 2
                        cond:13_1 = temp2_1 != 0
                        cond:14_1 = temp2_1 == 0
                        cond:16_1 = temp2_1 != 0
                        cond:17_1 = temp2_1 == 0
                        rax_68 = var_240.d
                        zmm3 = zmm14
                        
                        if (temp2_1 == 0)
                            goto label_1401316a4
                        
                        goto label_1401311b8
                    
                    arg6 = *rbp_21
                    char temp1_1 = temp0_418 & 2
                    cond:13_1 = temp1_1 != 0
                    cond:14_1 = temp1_1 == 0
                    cond:16_1 = temp1_1 != 0
                    cond:17_1 = temp1_1 == 0
                    rax_68 = var_240.d
                    zmm3 = zmm14
                    
                    if (temp1_1 == 0)
                    label_1401316a4:
                        zmm14 = var_268.o
                        
                        if (cond:14_1)
                            goto label_1401311d0
                        
                        goto label_1401316b1
                    
                label_1401311b8:
                    arg6 = __insertps_xmmps_memd_immb(arg6, var_1d8_2, 0x10)
                    zmm14 = var_268.o
                    
                    if (not(cond:13_1))
                    label_1401311d0:
                        
                        if (cond:17_1)
                            goto label_1401316be
                        
                        goto label_1401311d6
                    
                label_1401316b1:
                    zmm12 = _mm_insert_ps(zmm12, zmm10, 0x10)
                    bool cond:22_1
                    bool cond:23_1
                    bool cond:25_1
                    bool cond:26_1
                    
                    if (not(cond:16_1))
                    label_1401316be:
                        char temp4_1 = temp0_418 & 4
                        cond:22_1 = temp4_1 != 0
                        cond:23_1 = temp4_1 == 0
                        cond:25_1 = temp4_1 != 0
                        cond:26_1 = temp4_1 == 0
                        
                        if (temp4_1 == 0)
                            goto label_1401311e5
                        
                        goto label_1401316c7
                    
                label_1401311d6:
                    arg7 = _mm_insert_ps(arg7, zmm2, 0x10)
                    char temp3_1 = temp0_418 & 4
                    cond:22_1 = temp3_1 != 0
                    cond:23_1 = temp3_1 == 0
                    cond:25_1 = temp3_1 != 0
                    cond:26_1 = temp3_1 == 0
                    
                    if (temp3_1 == 0)
                    label_1401311e5:
                        
                        if (cond:23_1)
                            goto label_1401316d8
                        
                        goto label_1401311eb
                    
                label_1401316c7:
                    arg6 = __insertps_xmmps_memd_immb(arg6, var_1e8_2, 0x20)
                    
                    if (not(cond:22_1))
                    label_1401316d8:
                        
                        if (cond:26_1)
                            goto label_1401311fa
                        
                        goto label_1401316de
                    
                label_1401311eb:
                    zmm12 = __insertps_xmmps_memd_immb(zmm12, var_288_1, 0x20)
                    bool cond:45_1
                    bool cond:46_1
                    bool cond:54_1
                    bool cond:55_1
                    
                    if (not(cond:25_1))
                    label_1401311fa:
                        char temp10_1 = temp0_418 & 8
                        cond:45_1 = temp10_1 != 0
                        cond:46_1 = temp10_1 == 0
                        cond:54_1 = temp10_1 == 0
                        cond:55_1 = temp10_1 != 0
                        
                        if (temp10_1 == 0)
                            goto label_1401316ed
                        
                        goto label_140131203
                    
                label_1401316de:
                    arg7 = _mm_insert_ps(arg7, zmm1, 0x20)
                    char temp9_1 = temp0_418 & 8
                    cond:45_1 = temp9_1 != 0
                    cond:46_1 = temp9_1 == 0
                    cond:54_1 = temp9_1 == 0
                    cond:55_1 = temp9_1 != 0
                    
                    if (temp9_1 == 0)
                    label_1401316ed:
                        
                        if (cond:46_1)
                            goto label_140131211
                        
                        goto label_1401316f3
                    
                label_140131203:
                    arg6 = __insertps_xmmps_memd_immb(arg6, var_278_1, 0x30)
                    
                    if (cond:45_1)
                    label_1401316f3:
                        zmm12 = _mm_insert_ps(zmm12, zmm3, 0x30)
                        
                        if (not(cond:54_1))
                            arg7 = _mm_insert_ps(arg7, zmm0, 0x30)
                    else
                    label_140131211:
                        
                        if (cond:55_1)
                            arg7 = _mm_insert_ps(arg7, zmm0, 0x30)
                case 2
                    zmm1 = _mm_add_epi64(arg7, zmm3)
                    zmm3 = _mm_add_epi64(_mm_add_epi64(arg5, arg6), zmm12)
                    zmm1 = _mm_add_epi64(zmm1, zmm0)
                    uint32_t temp0_427[0x4] = _mm_shuffle_epi32(zmm9, 0x50)
                    float temp0_428[0x4] = _mm_blendv_ps(zx.o(0), zmm1, temp0_427)
                    zmm10 = _mm_shuffle_epi32(zmm9, 0xfa)
                    float temp0_430[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm10)
                    zmm1 = data_1434426b0
                    float temp0_431[0x4] = _mm_blendv_ps(zx.o(0), zmm1, temp0_427)
                    float temp0_432[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm10)
                    int64_t rcx_38 = temp0_428[0].q
                    void* rbx_12 = arg4 + rcx_38
                    int64_t rdx_24 = _mm_extract_epi64(temp0_428, 1)
                    void* rbp_23 = arg4 + rdx_24
                    void* rax_69 = temp0_431[0].q
                    int16_t* rdi_14 = _mm_extract_epi64(temp0_431, 1)
                    arg5 = data_1434426c0
                    float temp0_433[0x4] = _mm_blendv_ps(zx.o(0), arg5, temp0_427)
                    zmm2 = __pinsrw_xmmdq_memw_immb(zx.o(*(rax_69 + rbx_12)), *(rdi_14 + rbp_23), 1)
                    void* rax_71 = temp0_433[0].q
                    int16_t* rdi_15 = _mm_extract_epi64(temp0_433, 1)
                    int64_t rbx_13 = temp0_430[0].q
                    zmm3 = __pinsrw_xmmdq_memw_immb(zx.o(*(rax_71 + rbx_12)), *(rdi_15 + rbp_23), 1)
                    void* rax_73 = arg4 + rbx_13
                    rbp_21 = _mm_extract_epi64(temp0_430, 1)
                    int16_t* rdi_16 = temp0_432[0].q
                    float temp0_436[0x4] = _mm_blendv_ps(zx.o(0), arg5, zmm10)
                    zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rdi_16 + rax_73), 2)
                    zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(temp0_436[0].q + rax_73), 2)
                    int64_t rax_74 = arg4 + rbp_21
                    zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                        *(_mm_extract_epi64(temp0_432, 1) + rax_74), 3)
                    rdi_13 = _mm_extract_epi64(temp0_436, 1)
                    zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(rdi_13 + rax_74), 3)
                    zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rcx_38)), *(arg4 + rdx_24), 1), 
                            *(arg4 + rbx_13), 2), 
                        *(arg4 + rbp_21), 3)[0].q)
                    zmm1 = data_1434424d0
                    float temp0_446[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
                    zmm0 = data_1434426d0
                    float temp0_447[0x4] = _mm_div_ps(temp0_446, zmm0)
                    float temp0_451[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), zmm1)), zmm0)
                    float temp0_455[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm3[0].q), zmm1)), zmm0)
                    zmm0 = data_143442710
                    arg6 = _mm_mul_ps(temp0_447, zmm0)
                    zmm12 = _mm_mul_ps(temp0_451, zmm0)
                    arg7 = _mm_mul_ps(temp0_455, zmm0)
                    rax_68 = var_240.d
                case 3
                    zmm1 = zmm9 & zmm11
                    int64_t rax_77 = sx.q(zmm1[0])
                    r10_4 = arg4 + rax_77
                    int32_t temp0_459 = _mm_extract_epi32(zmm1, 1)
                    zmm2 = *(arg4 + rax_77)
                    int64_t rax_78 = sx.q(temp0_459)
                    void* r8 = arg4 + rax_78
                    int64_t rdx_27 = sx.q(_mm_extract_epi32(zmm1, 2))
                    rbp_21 = arg4 + rdx_27
                    int64_t rcx_40 = sx.q(_mm_extract_epi32(zmm1, 3))
                    uint32_t var_1e8_3[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm2, *(arg4 + rax_78), 0x10), 
                            *(arg4 + rdx_27), 0x20), 
                        *(arg4 + rcx_40), 0x30)
                    void* rdx_28 = arg4 + rcx_40
                    var_268.o = zmm14
                    float temp0_466[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r11_3 + r10_4), *(r12_2 + r8), 0x10), 
                        *(r15_4 + rbp_21), 0x20)
                    zmm10 = data_142fc95f0 & zmm9
                    r15_4 = zx.q(_mm_extract_epi32(zmm10, 1))
                    int32_t* r12_3 = zx.q(_mm_extract_epi32(zmm10, 2))
                    var_278[0].q = zx.q(_mm_extract_epi32(zmm10, 3))
                    zmm2 = data_143442650 & zmm9
                    zmm1 = *(zx.q(zmm2[0]) + r10_4)
                    int32_t* rcx_42 = zx.q(_mm_extract_epi32(zmm2, 1))
                    int32_t* rdi_19 = zx.q(_mm_extract_epi32(zmm2, 2))
                    int32_t* rbx_14 = zx.q(_mm_extract_epi32(zmm2, 3))
                    float temp0_475[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm1, *(rcx_42 + r8), 0x10), 
                            *(rdi_19 + rbp_21), 0x20), 
                        *(rbx_14 + rdx_28), 0x30)
                    arg6 = zmm3
                    zmm3 = data_143442660 & zmm9
                    zmm2 = *(zx.q(zmm3[0]) + r10_4)
                    int32_t* rcx_44 = zx.q(_mm_extract_epi32(zmm3, 1))
                    int32_t* rdi_20 = zx.q(_mm_extract_epi32(zmm3, 2))
                    int32_t* rbx_15 = zx.q(_mm_extract_epi32(zmm3, 3))
                    zmm2 = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm2, *(rcx_44 + r8), 0x10), 
                            *(rdi_20 + rbp_21), 0x20), 
                        *(rbx_15 + rdx_28), 0x30)
                    zmm3 = _mm_add_epi64(arg7, arg6)
                    arg5 = _mm_add_epi64(__paddq_xmmdq_memdq(arg5, var_208_1), zmm12)
                    float temp0_487[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm3, zmm0), 
                        _mm_shuffle_epi32(zmm9, 0x50))
                    float temp0_489[0x4] =
                        _mm_blendv_ps(zx.o(0), arg5, _mm_shuffle_epi32(zmm9, 0xfa))
                    zmm0 = data_143442670 & zmm9
                    rdi_13 = zx.q(_mm_extract_epi32(zmm0, 1))
                    int32_t* rbx_16 = zx.q(_mm_extract_epi32(zmm0, 2))
                    int32_t* r11_4 = zx.q(_mm_extract_epi32(zmm0, 3))
                    int64_t rcx_45 = temp0_487[0].q
                    int64_t rax_80 = _mm_extract_epi64(temp0_487, 1)
                    int64_t rcx_46 = temp0_489[0].q
                    arg5 = __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rcx_45)), *(arg4 + rax_80), 1)
                    int64_t rax_81 = _mm_extract_epi64(temp0_489, 1)
                    arg5 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(arg5, *(arg4 + rcx_46), 2), *(arg4 + rax_81), 3)
                    zmm3 = arg5
                    arg7 = _mm_srli_epi32(arg5, 0xa) & data_143442480
                    arg5 = __paddd_xmmdq_memdq(arg5 & data_143442680, data_143442490)
                    uint32_t (* rax_82)[0x4] = zx.q(zmm10[0])
                    float temp0_499[0x4] =
                        __divps_xmmps_memps(_mm_cvtepi32_ps(arg5), data_1434426a0)
                    float (* rcx_47)[0x4] = zx.q(zmm0[0])
                    arg6 = __addps_xmmps_memps(_mm_mul_ps(temp0_499, temp0_475), var_1e8_3)
                    zmm0 = data_143442440
                    float temp0_503[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg7, zmm0))
                    zmm1 = data_143442690
                    zmm12 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_503, zmm1), zmm2), 
                        __insertps_xmmps_memd_immb(temp0_466, *(r14_10 + rdx_28), 0x30))
                    zmm14 = var_268.o
                    zmm2 = __insertps_xmmps_memd_immb(*(rax_82 + r10_4), *(r15_4 + r8), 0x10)
                    zmm3 = _mm_add_epi32(_mm_srli_epi32(zmm3, 0x15), zmm0)
                    zmm2 = __insertps_xmmps_memd_immb(zmm2, *(r12_3 + rbp_21), 0x20)
                    arg7 = _mm_add_ps(
                        _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(zmm3), zmm1), 
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(
                                    __insertps_xmmps_memd_immb(*(rcx_47 + r10_4), *(rdi_13 + r8), 
                                        0x10), 
                                    *(rbx_16 + rbp_21), 0x20), 
                                *(r11_4 + rdx_28), 0x30)), 
                        __insertps_xmmps_memd_immb(zmm2, *(var_278[0].q + rdx_28), 0x30))
                    rax_68 = var_240.d
                case 4, 5
                    goto label_140131628
                case 6
                    char temp0_523 = _mm_movemask_ps(zmm9)
                    arg7 = zx.o(0)
                    rax_68 = var_240.d
                    
                    if ((temp0_523 & 4) != 0)
                        arg7 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                    
                    if ((temp0_523 & 8) != 0)
                        arg7 = _mm_blend_epi16(arg7, zx.o(0), 0xc0)
                    
                    zmm12 = arg7
                    arg6 = arg7
        
        arg8 = _mm_cmpeq_epi32(arg8, zmm8) & not.o(zmm9)
        char temp0_532 = _mm_movemask_ps(arg8)
        
        if (temp0_532 != 0)
            if (rax_68 u> 6)
            label_1401318f9:
                zmm0 = zx.o(0)
                
                if ((temp0_532 & 4) != 0)
                    zmm0 = _mm_blend_epi16(zx.o(0), zx.o(0), 0x30)
                
                if ((temp0_532 & 8) != 0)
                    zmm0 = _mm_blend_epi16(zmm0, zx.o(0), 0xc0)
                
                zmm3 = zmm0
                zmm1 = zmm0
                goto label_140131dbb
            
            zmm8 = _mm_mullo_epi32(zmm8, zmm14)
            zmm0 = _mm_cvtepi32_epi64(zmm8[0].q)
            zmm1 = _mm_shuffle_epi32(zmm8, 0x4e)
            zmm14 = _mm_cvtepi32_epi64(zmm1[0].q)
            
            switch (rsi_18)
                case 0, 1
                    zmm2 = __paddq_xmmdq_memdq(var_298_2, var_238.o)
                    zmm1 = _mm_add_epi64(__paddq_xmmdq_memdq(var_258_2, var_208_1), zmm14)
                    zmm2 = _mm_add_epi64(zmm2, zmm0)
                    zmm14 = _mm_shuffle_epi32(arg8, 0x50)
                    float temp0_542[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm14)
                    uint32_t temp0_543[0x4] = _mm_shuffle_epi32(arg8, 0xfa)
                    float temp0_544[0x4] = _mm_blendv_ps(zx.o(0), zmm1, temp0_543)
                    int64_t rax_84 = _mm_extract_epi64(temp0_542, 1)
                    void* rbp_24 = arg4 + rax_84
                    zmm8 = *(arg4 + rax_84)
                    int64_t rax_85 = temp0_544[0].q
                    void* rdx_31 = arg4 + rax_85
                    float var_298_3 = (*(arg4 + rax_85))[0]
                    int64_t rax_86 = _mm_extract_epi64(temp0_544, 1)
                    zmm10 = data_1434426c0
                    float temp0_545[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm14)
                    void* rdi_21 = arg4 + rax_86
                    float temp0_546[0x4] = _mm_blendv_ps(zx.o(0), zmm10, temp0_543)
                    float var_208_2 = (*(arg4 + rax_86))[0]
                    void* rbx_18 = temp0_542[0].q + arg4
                    zmm3 = *(temp0_545[0].q + rbx_18)
                    zmm11 = *(_mm_extract_epi64(temp0_545, 1) + rbp_24)
                    arg8 = *(temp0_546[0].q + rdx_31)
                    int32_t var_258_3 = (*(_mm_extract_epi64(temp0_546, 1) + rdi_21))[0]
                    zmm10 = data_1434426e0
                    float temp0_547[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm14)
                    zmm1 = _mm_blendv_ps(zx.o(0), zmm10, temp0_543)
                    zmm0 = *(temp0_547[0].q + rbx_18)
                    zmm10 = *(_mm_extract_epi64(temp0_547, 1) + rbp_24)
                    uint32_t (* rax_93)[0x4] = zmm1[0].q
                    float (* rbp_25)[0x4] = _mm_extract_epi64(zmm1, 1)
                    zmm2 = *(rax_93 + rdx_31)
                    zmm14 = *(rbp_25 + rdi_21)
                    bool cond:27_1
                    bool cond:28_1
                    bool cond:39_1
                    bool cond:40_1
                    
                    if ((temp0_532 & 1) == 0)
                        char temp6_1 = temp0_532 & 2
                        cond:27_1 = temp6_1 != 0
                        cond:28_1 = temp6_1 == 0
                        cond:39_1 = temp6_1 != 0
                        cond:40_1 = temp6_1 == 0
                        
                        if (temp6_1 == 0)
                            goto label_140131d66
                        
                        goto label_140131894
                    
                    zmm1 = *rbx_18
                    char temp5_1 = temp0_532 & 2
                    cond:27_1 = temp5_1 != 0
                    cond:28_1 = temp5_1 == 0
                    cond:39_1 = temp5_1 != 0
                    cond:40_1 = temp5_1 == 0
                    
                    if (temp5_1 == 0)
                    label_140131d66:
                        
                        if (cond:28_1)
                            goto label_1401318a1
                        
                        goto label_140131d6c
                    
                label_140131894:
                    zmm1 = _mm_insert_ps(zmm1, zmm8, 0x10)
                    
                    if (not(cond:27_1))
                    label_1401318a1:
                        
                        if (cond:40_1)
                            goto label_140131d79
                        
                        goto label_1401318a7
                    
                label_140131d6c:
                    zmm3 = _mm_insert_ps(zmm3, zmm11, 0x10)
                    bool cond:56_1
                    bool cond:57_1
                    bool cond:66_1
                    bool cond:67_1
                    
                    if (not(cond:39_1))
                    label_140131d79:
                        char temp12_1 = temp0_532 & 4
                        cond:56_1 = temp12_1 != 0
                        cond:57_1 = temp12_1 == 0
                        cond:66_1 = temp12_1 != 0
                        cond:67_1 = temp12_1 == 0
                        
                        if (temp12_1 == 0)
                            goto label_1401318b7
                        
                        goto label_140131d82
                    
                label_1401318a7:
                    zmm0 = _mm_insert_ps(zmm0, zmm10, 0x10)
                    char temp11_1 = temp0_532 & 4
                    cond:56_1 = temp11_1 != 0
                    cond:57_1 = temp11_1 == 0
                    cond:66_1 = temp11_1 != 0
                    cond:67_1 = temp11_1 == 0
                    
                    if (temp11_1 == 0)
                    label_1401318b7:
                        
                        if (cond:57_1)
                            goto label_140131d8f
                        
                        goto label_1401318bd
                    
                label_140131d82:
                    zmm1 = __insertps_xmmps_memd_immb(zmm1, var_298_3, 0x20)
                    
                    if (not(cond:56_1))
                    label_140131d8f:
                        
                        if (cond:67_1)
                            goto label_1401318ca
                        
                        goto label_140131d95
                    
                label_1401318bd:
                    zmm3 = _mm_insert_ps(zmm3, arg8, 0x20)
                    bool cond:80_1
                    bool cond:81_1
                    bool cond:90_1
                    bool cond:91_1
                    
                    if (not(cond:66_1))
                    label_1401318ca:
                        char temp16_1 = temp0_532 & 8
                        cond:80_1 = temp16_1 != 0
                        cond:81_1 = temp16_1 == 0
                        cond:90_1 = temp16_1 == 0
                        cond:91_1 = temp16_1 != 0
                        
                        if (temp16_1 == 0)
                            goto label_140131da4
                        
                        goto label_1401318d3
                    
                label_140131d95:
                    zmm0 = _mm_insert_ps(zmm0, zmm2, 0x20)
                    char temp15_1 = temp0_532 & 8
                    cond:80_1 = temp15_1 != 0
                    cond:81_1 = temp15_1 == 0
                    cond:90_1 = temp15_1 == 0
                    cond:91_1 = temp15_1 != 0
                    
                    if (temp15_1 == 0)
                    label_140131da4:
                        
                        if (cond:81_1)
                            goto label_1401318e4
                        
                        goto label_140131daa
                    
                label_1401318d3:
                    zmm1 = __insertps_xmmps_memd_immb(zmm1, var_208_2, 0x30)
                    
                    if (cond:80_1)
                    label_140131daa:
                        zmm3 = __insertps_xmmps_memd_immb(zmm3, var_258_3, 0x30)
                        
                        if (not(cond:90_1))
                            zmm0 = _mm_insert_ps(zmm0, zmm14, 0x30)
                    else
                    label_1401318e4:
                        
                        if (cond:91_1)
                            zmm0 = _mm_insert_ps(zmm0, zmm14, 0x30)
                    
                    goto label_140131dbb
                case 2
                    zmm3 = __paddq_xmmdq_memdq(var_298_2, var_238.o)
                    zmm2 = _mm_add_epi64(__paddq_xmmdq_memdq(var_258_2, var_208_1), zmm14)
                    zmm3 = _mm_add_epi64(zmm3, zmm0)
                    zmm11 = _mm_shuffle_epi32(arg8, 0x50)
                    float temp0_560[0x4] = _mm_blendv_ps(zx.o(0), zmm3, zmm11)
                    zmm8 = _mm_shuffle_epi32(arg8, 0xfa)
                    float temp0_562[0x4] = _mm_blendv_ps(zx.o(0), zmm2, zmm8)
                    int64_t rdx_34 = temp0_560[0].q
                    int64_t rbp_26 = _mm_extract_epi64(temp0_560, 1)
                    zmm10 = data_1434426b0
                    float temp0_563[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm11)
                    void* rbx_19 = arg4 + rdx_34
                    float temp0_564[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm8)
                    void* rdi_22 = arg4 + rbp_26
                    zmm2 = zx.o(*(temp0_563[0].q + rbx_19))
                    int16_t* rax_96 = _mm_extract_epi64(temp0_563, 1)
                    zmm10 = data_1434426c0
                    float temp0_565[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm11)
                    zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(rax_96 + rdi_22), 1)
                    arg5 = __pinsrw_xmmdq_memw_immb(zx.o(*(temp0_565[0].q + rbx_19)), 
                        *(_mm_extract_epi64(temp0_565, 1) + rdi_22), 1)
                    int64_t rax_99 = temp0_562[0].q
                    void* rbx_21 = arg4 + rax_99
                    float temp0_568[0x4] = _mm_blendv_ps(zx.o(0), zmm10, zmm8)
                    zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(temp0_564[0].q + rbx_21), 2)
                    arg5 = __pinsrw_xmmdq_memw_immb(arg5, *(temp0_568[0].q + rbx_21), 2)
                    zmm0 = __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdx_34)), *(arg4 + rbp_26), 1), 
                        *(arg4 + rax_99), 2)
                    int64_t rax_100 = _mm_extract_epi64(temp0_562, 1)
                    zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(arg4 + rax_100), 3)
                    void* rax_101 = arg4 + rax_100
                    zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                        *(_mm_extract_epi64(temp0_564, 1) + rax_101), 3)
                    arg5 = __pinsrw_xmmdq_memw_immb(arg5, 
                        *(_mm_extract_epi64(temp0_568, 1) + rax_101), 3)
                    zmm0 = _mm_cvtepu16_epi32(zmm0[0].q)
                    zmm8 = data_1434424d0
                    float temp0_578[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm8))
                    zmm10 = data_1434426d0
                    float temp0_579[0x4] = _mm_div_ps(temp0_578, zmm10)
                    float temp0_583[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), zmm8)), zmm10)
                    float temp0_587[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(arg5[0].q), zmm8)), zmm10)
                    zmm2 = data_143442710
                    zmm1 = _mm_mul_ps(temp0_579, zmm2)
                    zmm3 = _mm_mul_ps(temp0_583, zmm2)
                    zmm0 = _mm_mul_ps(temp0_587, zmm2)
                label_140131dbb:
                    float temp0_662[0x4] = _mm_sub_ps(zmm1, arg6)
                    float temp0_663[0x4] = _mm_sub_ps(zmm3, zmm12)
                    float temp0_664[0x4] = _mm_mul_ps(temp0_662, zmm13)
                    zmm2 = arg6
                    char temp7_1 = temp0_532 & 1
                    
                    if (temp7_1 != 0)
                        zmm2 = arg6
                        zmm2[0] = zmm2[0] f+ temp0_664[0]
                        zmm0 = _mm_sub_ps(zmm0, arg7)
                        zmm3 = _mm_mul_ps(temp0_663, zmm13)
                        arg5 = zmm12
                        
                        if (temp7_1 != 0)
                            goto label_140131fa1
                        
                        goto label_140131ded
                    
                    zmm0 = _mm_sub_ps(zmm0, arg7)
                    zmm3 = _mm_mul_ps(temp0_663, zmm13)
                    arg5 = zmm12
                    
                    if (temp7_1 != 0)
                    label_140131fa1:
                        arg5 = zmm12
                        arg5[0] = arg5[0] + zmm3[0]
                        zmm13 = _mm_mul_ps(zmm13, zmm0)
                        zmm0 = arg7
                        
                        if (temp7_1 != 0)
                            goto label_140131dfa
                        
                        goto label_140131fb6
                    
                label_140131ded:
                    zmm13 = _mm_mul_ps(zmm13, zmm0)
                    zmm0 = arg7
                    bool cond:58_1
                    bool cond:59_1
                    bool cond:68_1
                    bool cond:69_1
                    
                    if (temp7_1 != 0)
                    label_140131dfa:
                        zmm0 = arg7
                        zmm0[0] = zmm0[0] + zmm13[0]
                        arg6 = _mm_add_ps(arg6, temp0_664)
                        char temp14_1 = temp0_532 & 2
                        cond:58_1 = temp14_1 == 0
                        cond:59_1 = temp14_1 != 0
                        cond:68_1 = temp14_1 == 0
                        cond:69_1 = temp14_1 != 0
                        
                        if (temp14_1 != 0)
                            goto label_140131fc2
                        
                        goto label_140131e0e
                    
                label_140131fb6:
                    arg6 = _mm_add_ps(arg6, temp0_664)
                    char temp13_1 = temp0_532 & 2
                    cond:58_1 = temp13_1 == 0
                    cond:59_1 = temp13_1 != 0
                    cond:68_1 = temp13_1 == 0
                    cond:69_1 = temp13_1 != 0
                    
                    if (temp13_1 != 0)
                    label_140131fc2:
                        zmm2 = _mm_blend_ps(zmm2, arg6, 2)
                        zmm12 = _mm_add_ps(zmm12, zmm3)
                        
                        if (cond:59_1)
                            goto label_140131e18
                        
                        goto label_140131fd2
                    
                label_140131e0e:
                    zmm12 = _mm_add_ps(zmm12, zmm3)
                    
                    if (not(cond:58_1))
                    label_140131e18:
                        arg5 = _mm_blend_ps(arg5, zmm12, 2)
                        arg7 = _mm_add_ps(arg7, zmm13)
                        
                        if (cond:69_1)
                            goto label_140131fdc
                        
                        goto label_140131e29
                    
                label_140131fd2:
                    arg7 = _mm_add_ps(arg7, zmm13)
                    bool cond:82_1
                    bool cond:83_1
                    bool cond:92_1
                    bool cond:93_1
                    
                    if (not(cond:68_1))
                    label_140131fdc:
                        zmm0 = _mm_blend_ps(zmm0, arg7, 2)
                        char temp18_1 = temp0_532 & 4
                        cond:82_1 = temp18_1 == 0
                        cond:83_1 = temp18_1 != 0
                        cond:92_1 = temp18_1 == 0
                        cond:93_1 = temp18_1 != 0
                        
                        if (temp18_1 != 0)
                            goto label_140131e32
                        
                        goto label_140131feb
                    
                label_140131e29:
                    char temp17_1 = temp0_532 & 4
                    cond:82_1 = temp17_1 == 0
                    cond:83_1 = temp17_1 != 0
                    cond:92_1 = temp17_1 == 0
                    cond:93_1 = temp17_1 != 0
                    
                    if (temp17_1 == 0)
                    label_140131feb:
                        
                        if (not(cond:82_1))
                        label_140131ff1:
                            arg5 = _mm_blend_ps(arg5, zmm12, 4)
                            
                            if (cond:93_1)
                                goto label_140131e44
                            
                            goto label_140131ffe
                    else
                    label_140131e32:
                        zmm2 = _mm_blend_ps(zmm2, arg6, 4)
                        
                        if (cond:83_1)
                            goto label_140131ff1
                    
                    bool cond:104_1
                    bool cond:105_1
                    bool cond:112_1
                    bool cond:113_1
                    
                    if (not(cond:92_1))
                    label_140131e44:
                        zmm0 = _mm_blend_ps(zmm0, arg7, 4)
                        char temp20_1 = temp0_532 & 8
                        cond:104_1 = temp20_1 == 0
                        cond:105_1 = temp20_1 != 0
                        cond:112_1 = temp20_1 != 0
                        cond:113_1 = temp20_1 == 0
                        
                        if (temp20_1 != 0)
                            goto label_140132007
                        
                        goto label_140131e53
                    
                label_140131ffe:
                    char temp19_1 = temp0_532 & 8
                    cond:104_1 = temp19_1 == 0
                    cond:105_1 = temp19_1 != 0
                    cond:112_1 = temp19_1 != 0
                    cond:113_1 = temp19_1 == 0
                    
                    if (temp19_1 != 0)
                    label_140132007:
                        arg6 = _mm_blend_ps(arg6, zmm2, 7)
                        
                        if (cond:105_1)
                            goto label_140131e5c
                        
                        goto label_140132013
                    
                label_140131e53:
                    arg6 = zmm2
                    
                    if (cond:104_1)
                    label_140132013:
                        zmm12 = arg5
                        
                        if (cond:112_1)
                            zmm0 = _mm_blend_ps(zmm0, arg7, 8)
                    else
                    label_140131e5c:
                        zmm12 = _mm_blend_ps(zmm12, arg5, 7)
                        
                        if (not(cond:113_1))
                            zmm0 = _mm_blend_ps(zmm0, arg7, 8)
                    
                    arg7 = zmm0
                case 3
                    arg5 = _mm_srai_epi32(_mm_slli_epi32(arg8, 0x1f), 0x1f)
                    zmm11 &= arg5
                    int64_t rax_103 = sx.q(zmm11[0])
                    void* rdi_25 = arg4 + rax_103
                    zmm1 = *(arg4 + rax_103)
                    int64_t rax_105 = sx.q(_mm_extract_epi32(zmm11, 1))
                    void* r8_1 = arg4 + rax_105
                    int64_t rsi_19 = sx.q(_mm_extract_epi32(zmm11, 2))
                    void* rbp_28 = arg4 + rsi_19
                    int64_t rdx_38 = sx.q(_mm_extract_epi32(zmm11, 3))
                    void* rbx_23 = arg4 + rdx_38
                    float temp0_598[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm1, *(arg4 + rax_105), 0x10), 
                            *(arg4 + rsi_19), 0x20), 
                        *(arg4 + rdx_38), 0x30)
                    zmm2 = data_142fc95e0 & arg5
                    zmm11 = *(zx.q(zmm2[0]) + rdi_25)
                    int32_t* rax_107 = zx.q(_mm_extract_epi32(zmm2, 1))
                    int32_t* rdx_39 = zx.q(_mm_extract_epi32(zmm2, 2))
                    int32_t* rsi_20 = zx.q(_mm_extract_epi32(zmm2, 3))
                    float temp0_604[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm11, *(rax_107 + r8_1), 0x10), 
                            *(rdx_39 + rbp_28), 0x20), 
                        *(rsi_20 + rbx_23), 0x30)
                    zmm3 = data_142fc95f0 & arg5
                    zmm8 = *(zx.q(zmm3[0]) + rdi_25)
                    int32_t* rax_109 = zx.q(_mm_extract_epi32(zmm3, 1))
                    int32_t* rdx_40 = zx.q(_mm_extract_epi32(zmm3, 2))
                    int32_t* rsi_21 = zx.q(_mm_extract_epi32(zmm3, 3))
                    float temp0_610[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm8, *(rax_109 + r8_1), 0x10), 
                            *(rdx_40 + rbp_28), 0x20), 
                        *(rsi_21 + rbx_23), 0x30)
                    zmm2 = data_143442650 & arg5
                    zmm3 = *(zx.q(zmm2[0]) + rdi_25)
                    int32_t* rax_111 = zx.q(_mm_extract_epi32(zmm2, 1))
                    int32_t* rdx_41 = zx.q(_mm_extract_epi32(zmm2, 2))
                    int32_t* rsi_22 = zx.q(_mm_extract_epi32(zmm2, 3))
                    float temp0_616[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm3, *(rax_111 + r8_1), 0x10), 
                            *(rdx_41 + rbp_28), 0x20), 
                        *(rsi_22 + rbx_23), 0x30)
                    zmm2 = data_143442660 & arg5
                    zmm10 = *(zx.q(zmm2[0]) + rdi_25)
                    int32_t* rax_113 = zx.q(_mm_extract_epi32(zmm2, 1))
                    int32_t* rdx_42 = zx.q(_mm_extract_epi32(zmm2, 2))
                    int32_t* rsi_23 = zx.q(_mm_extract_epi32(zmm2, 3))
                    float temp0_622[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm10, *(rax_113 + r8_1), 0x10), 
                            *(rdx_42 + rbp_28), 0x20), 
                        *(rsi_23 + rbx_23), 0x30)
                    arg5 &= data_143442670
                    var_268.o = zmm13
                    zmm13 = *(zx.q(arg5[0]) + rdi_25)
                    int32_t* rax_115 = zx.q(_mm_extract_epi32(arg5, 1))
                    int32_t* rdx_43 = zx.q(_mm_extract_epi32(arg5, 2))
                    int32_t* rdi_26 = zx.q(_mm_extract_epi32(arg5, 3))
                    float temp0_628[0x4] = __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(zmm13, *(rax_115 + r8_1), 0x10), 
                            *(rdx_43 + rbp_28), 0x20), 
                        *(rdi_26 + rbx_23), 0x30)
                    zmm2 = __paddq_xmmdq_memdq(var_298_2, var_238.o)
                    arg5 = _mm_add_epi64(__paddq_xmmdq_memdq(var_258_2, var_208_1), zmm14)
                    float temp0_634[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm2, zmm0), 
                        _mm_shuffle_epi32(arg8, 0x50))
                    zmm2 = _mm_blendv_ps(zx.o(0), arg5, _mm_shuffle_epi32(arg8, 0xfa))
                    int64_t rax_116 = temp0_634[0].q
                    int64_t rdx_44 = _mm_extract_epi64(temp0_634, 1)
                    int64_t rbp_29 = zmm2[0].q
                    int64_t rbx_24 = _mm_extract_epi64(zmm2, 1)
                    zmm0 = __pinsrd_xmmdq_memd_immb(
                        __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rax_116)), *(arg4 + rdx_44), 1), 
                            *(arg4 + rbp_29), 2), 
                        *(arg4 + rbx_24), 3)
                    zmm2 = zmm0
                    arg5 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                    zmm0 &= data_143442680
                    uint32_t temp0_641[0x4] = _mm_srli_epi32(zmm2, 0x15)
                    zmm1 = __addps_xmmps_memps(
                        _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0, data_143442490)), 
                                data_1434426a0), 
                            temp0_616), 
                        temp0_598)
                    zmm0 = data_143442440
                    float temp0_648[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm0))
                    arg5 = data_143442690
                    zmm3 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_648, arg5), temp0_622), temp0_604)
                    zmm13 = var_268.o
                    zmm0 = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(temp0_641, zmm0)), arg5), 
                            temp0_628), 
                        temp0_610)
                    goto label_140131dbb
                case 4, 5, 6
                    goto label_1401318f9
                case 7
                    uint64_t rax_122 = zmm1[0].q u>> 0x20
                    *(rbp_21 - 0x28) = *(rbp_21 - 0x50)
                    *(rbp_21 - 0x18) = zmm1
                    
                    if (rax_122.d s< r10_4.d)
                        var_208_1[0].q = r15_4
                        int32_t r15_5 = *(rbp_21 - 0x14)
                        
                        while (true)
                            int64_t* rbx_27 = (sx.q(r15_5) << 5) + *rdi_13
                            int64_t* rcx_54 = *rbx_27
                            int32_t rax_124 = (*(*rcx_54 + 0x88))(rcx_54)
                            int32_t rcx_57 = (*r14_10 - 1) & rax_124
                            uint64_t rax_125 = rsi_18
                            *(rbx_27 + 0x1c) = rcx_57
                            uint64_t rdx_45 = *(rsi_18 + 8)
                            int64_t r8_2 = sx.q(rcx_57)
                            
                            if (rdx_45 != 0)
                                rax_125 = rdx_45
                            
                            rbx_27[3].d = *(rax_125 + (((sx.q(*r14_10) - 1) & r8_2) << 2))
                            uint64_t rax_127 = rsi_18
                            uint64_t rcx_61 = *(rsi_18 + 8)
                            
                            if (rcx_61 != 0)
                                rax_127 = rcx_61
                            
                            *(rax_127 + (((sx.q(*r14_10) - 1) & r8_2) << 2)) = r15_5
                            *(rbp_21 - 0x18) &= not.d(*(rbp_21 - 0x24))
                            sub_14059bdd0(rbp_21 - 0x28)
                            rax_122 = *(rbp_21 - 0x20)
                            r15_5 = *(rbp_21 - 0x14)
                            
                            if (r15_5 s>= *(rax_122 + 0x18))
                                break
                            
                            rdi_13 = *(rbp_21 - 0x30)
                        
                        var_208_1[0]
                    
                    var_208_1[2]
                    var_228[0]
                    var_228[2]
                    var_218[0]
                    return rax_122
        
        float temp0_676[0x4] = _mm_unpacklo_ps(arg7, 0)
        zmm2 = _mm_unpackhi_ps(arg7, zx.o(0))
        float temp0_678[0x4] = _mm_unpacklo_ps(arg6, zmm12[0].q)
        float temp0_679[0x4] = _mm_unpackhi_ps(arg6, zmm12)
        float var_168[0x4] = _mm_insert_ps(temp0_678, arg7, 0x28)
        float var_158_1[0x4] = _mm_unpackhi_pd(temp0_678, temp0_676[0].q)
        float var_148_1[0x4] = _mm_insert_ps(temp0_679, arg7, 0xa8)
        float var_138_1[0x4] = _mm_unpackhi_pd(temp0_679, zmm2[0].q)
        uint64_t i = zx.q(_mm_movemask_ps(zmm9))
        
        do
            uint64_t rcx_52
            uint64_t rflags_1
            
            if (i == 0)
                rcx_52 = 0x40
            else
                rcx_52, rflags_1 = _bit_scan_forward(i)
            float var_178[0x4] = zmm4
            rax_50 = sx.q(var_178[zx.q(rcx_52.d) & 3]) * 0x30
            *(arg1 + rax_50 + 0x10) = (&var_168)[rcx_52]
            i &= rol.q(-2, rcx_52.b)
        while (i != 0)
else
    float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
    int32_t rcx_5
    rcx_5.b = r11.d == 3
    float var_188_1[0x4] = _mm_shuffle_epi32(zx.o(neg.d(rcx_5)), 0)
    float var_1e8_1[0x4] = _mm_shuffle_epi32(zx.o(rax_1), 0)
    int32_t rdx = 0
    arg6 = _mm_cmpeq_epi32(arg6, arg6)
    rbp_1 = 0
    float (* var_1b8_1)[0x4] = r12
    
    do
        int64_t rcx_8 = sx.q(rdx)
        zmm3 = *(r12 + rcx_8)
        zmm1 = *(r12 + rcx_8 + 0x10)
        var_278 = zmm1
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm3, zmm1, 0xdd), 4)
        int64_t rdx_1 = sx.q(zmm0[0])
        int64_t r10_1 = sx.q(*(arg3 + rdx_1))
        int64_t rbp_2 = sx.q(_mm_extract_epi32(zmm0, 1))
        int64_t rsi_3 = sx.q(*(arg3 + rbp_2))
        int64_t rax_2 = sx.q(_mm_extract_epi32(zmm0, 2))
        int64_t rbx_3 = sx.q(*(arg3 + rax_2))
        int64_t rcx_10 = sx.q(_mm_extract_epi32(zmm0, 3))
        int64_t rdi_2 = sx.q(*(arg3 + rcx_10))
        zmm12 = _mm_insert_epi32(
            _mm_insert_epi32(_mm_insert_epi32(zx.o(r10_1.d), rsi_3.d, 1), rbx_3.d, 2), rdi_2.d, 3)
        zmm1 = __pinsrd_xmmdq_memd_immb(
            __pinsrd_xmmdq_memd_immb(
                __pinsrd_xmmdq_memd_immb(zx.o(*(arg3 + rdx_1 + 4)), *(arg3 + rbp_2 + 4), 1), 
                *(arg3 + rax_2 + 4), 2), 
            *(arg3 + rcx_10 + 4), 3)
        uint32_t temp0_20[0x4] = _mm_shuffle_epi32(zmm12, 0x4e)
        zmm0 = _mm_cmpgt_epi32(data_1434422d0, zmm1)
        char temp0_22 = _mm_movemask_ps(zmm0)
        uint32_t var_208[0x4]
        zmm2 = var_208
        float var_298_1[0x4] = zmm3
        
        if (temp0_22 == 0)
            zmm0 = zx.o(0) ^ arg6
            
            if (0f < zmm11[0])
            label_14012fc34:
                bool cond:5_1 = zmm11[0] >= 1f
                arg5 = _mm_add_epi32(zmm1, arg6)
                
                if (cond:5_1)
                    zmm2 = _mm_blendv_ps(zmm2, arg5, zmm0)
                    arg7 = _mm_blendv_ps(arg7, arg5, zmm0)
                    zmm4 = zx.o(0)
                else
                    float temp0_28[0x4] = __mulps_xmmps_memps(_mm_cvtepi32_ps(arg5), temp0_1)
                    float temp0_29[0x4] = _mm_round_ps(temp0_28, 9)
                    zmm2 =
                        _mm_blendv_ps(zmm2, _mm_min_epi32(_mm_cvttps_epi32(temp0_29), arg5), zmm0)
                    zmm4 = zx.o(0)
                    
                    if (r15.b != 1)
                        zmm4 = _mm_sub_ps(temp0_28, temp0_29)
                    
                    arg6 = _mm_min_epi32(_mm_sub_epi32(zmm2, _mm_cmpeq_epi32(temp0_29, temp0_29)), 
                        arg5)
                    arg7 = _mm_blendv_ps(arg7, arg6, zmm0)
                    arg6 = _mm_cmpeq_epi32(arg6, arg6)
                
                zmm8 = zmm2
                arg8 = _mm_blendv_ps(arg8, zmm4, zmm0)
            else
            label_14012fcb1:
                zmm2 = _mm_blendv_ps(zmm2, zx.o(0), zmm0)
                arg7 = _mm_blendv_ps(arg7, zx.o(0), zmm0)
                zmm8 = zmm2
                arg8 = _mm_blendv_ps(arg8, zx.o(0), zmm0)
        else
            zmm8 = _mm_andnot_ps(zmm0, zmm2)
            zmm4 = _mm_andnot_ps(zmm0, arg7)
            arg5 = _mm_andnot_ps(zmm0, arg8)
            
            if (temp0_22 != 0xf)
                zmm2 = zmm8
                arg7 = zmm4
                arg8 = arg5
                zmm0 ^= arg6
                
                if (0f >= zmm11[0])
                    goto label_14012fcb1
                
                goto label_14012fc34
            
            zmm2 = zmm8
            arg7 = zmm4
            arg8 = arg5
        
        zmm10 = _mm_cvtepi32_epi64(zmm12[0].q)
        arg5 = _mm_cvtepi32_epi64(temp0_20[0].q)
        zmm1 = __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0) & var_188_1
        zmm4 = zx.o(0)
        float temp0_47[0x4] = __blendvps_xmmdq_memdq(zx.o(0), data_143442700, zmm1)
        zmm9 = _mm_cvtepi32_epi64(temp0_47[0].q)
        zmm11 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(temp0_47, 0x4e)[0].q)
        zmm1 = __pmulld_xmmdq_memdq(zmm8, var_1e8_1)
        zmm0 = _mm_cvtepi32_epi64(zmm1[0].q)
        zmm1 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
        var_208 = zmm2
        float var_258_1[0x4] = arg8
        
        if (r11.d u< 2)
            zmm3 = _mm_add_epi64(zmm9, zmm10)
            zmm4 = _mm_add_epi64(_mm_add_epi64(zmm11, arg5), zmm1)
            zmm3 = _mm_add_epi64(zmm3, zmm0)
            int64_t rax_7 = zmm3[0].q
            int64_t rcx_11 = _mm_extract_epi64(zmm3, 1)
            int64_t rdx_3 = zmm4[0].q
            int64_t rbp_3 = _mm_extract_epi64(zmm4, 1)
            zmm14 = *(arg4 + rax_7 + 4)
            zmm13 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_7), *(arg4 + rcx_11), 0x10), 
                    *(arg4 + rdx_3), 0x20), 
                *(arg4 + rbp_3), 0x30)
            zmm14 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm14, *(arg4 + rcx_11 + 4), 0x10), 
                    *(arg4 + rdx_3 + 4), 0x20), 
                *(arg4 + rbp_3 + 4), 0x30)
            zmm4 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + rax_7 + 8), *(arg4 + rcx_11 + 8), 0x10), 
                    *(arg4 + rdx_3 + 8), 0x20), 
                *(arg4 + rbp_3 + 8), 0x30)
        else if (r11.d == 2)
            zmm3 = _mm_add_epi64(zmm9, zmm10)
            zmm4 = _mm_add_epi64(_mm_add_epi64(zmm11, arg5), zmm1)
            zmm3 = _mm_add_epi64(zmm3, zmm0)
            int64_t rbx_4 = _mm_extract_epi64(zmm3, 1)
            int64_t rax_8 = zmm3[0].q
            int64_t rdx_4 = zmm4[0].q
            int64_t rcx_12 = _mm_extract_epi64(zmm4, 1)
            zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_8)), *(arg4 + rbx_4), 1), 
                    *(arg4 + rdx_4), 2), 
                *(arg4 + rcx_12), 3)[0].q)
            zmm1 = data_1434424d0
            float temp0_119[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_8 + 2)), *(arg4 + rbx_4 + 2), 1), 
                    *(arg4 + rdx_4 + 2), 2), 
                *(arg4 + rcx_12 + 2), 3)
            zmm3 = data_1434426d0
            float temp0_123[0x4] = _mm_div_ps(temp0_119, zmm3)
            float temp0_126[0x4] =
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm0[0].q), zmm1))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_8 + 4)), *(arg4 + rbx_4 + 4), 1), 
                    *(arg4 + rdx_4 + 4), 2), 
                *(arg4 + rcx_12 + 4), 3)
            float temp0_130[0x4] = _mm_div_ps(temp0_126, zmm3)
            float temp0_134[0x4] = _mm_div_ps(
                _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm0[0].q), zmm1)), zmm3)
            zmm0 = data_143442710
            zmm13 = _mm_mul_ps(temp0_123, zmm0)
            zmm14 = _mm_mul_ps(temp0_130, zmm0)
            zmm4 = _mm_mul_ps(temp0_134, zmm0)
        else
            zmm14 = zx.o(0)
            zmm13 = zx.o(0)
            
            if (r11.d == 3)
                zmm3 = _mm_add_epi64(zmm9, zmm10)
                zmm4 = _mm_add_epi64(zmm11, arg5)
                zmm3 = _mm_add_epi64(zmm3, zmm0)
                zmm0 = zx.o(*(arg4 + zmm3[0].q))
                int64_t rax_4 = _mm_extract_epi64(zmm3, 1)
                zmm4 = _mm_add_epi64(zmm4, zmm1)
                zmm0 = __pinsrd_xmmdq_memd_immb(
                    __pinsrd_xmmdq_memd_immb(__pinsrd_xmmdq_memd_immb(zmm0, *(arg4 + rax_4), 1), 
                        *(arg4 + zmm4[0].q), 2), 
                    *(arg4 + _mm_extract_epi64(zmm4, 1)), 3)
                zmm4 = *(arg4 + r10_1 + 4)
                float temp0_64[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_1), *(arg4 + rsi_3), 0x10), 
                        *(arg4 + rbx_3), 0x20), 
                    *(arg4 + rdi_2), 0x30)
                float temp0_67[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm4, *(arg4 + rsi_3 + 4), 0x10), 
                        *(arg4 + rbx_3 + 4), 0x20), 
                    *(arg4 + rdi_2 + 4), 0x30)
                float temp0_70[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_1 + 0xc), *(arg4 + rsi_3 + 0xc), 
                            0x10), 
                        *(arg4 + rbx_3 + 0xc), 0x20), 
                    *(arg4 + rdi_2 + 0xc), 0x30)
                arg8 = arg7
                float temp0_74[0x4] = _mm_mul_ps(
                    __divps_xmmps_memps(
                        _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                            data_143442490)), 
                        data_1434426a0), 
                    temp0_70)
                float temp0_77[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_1 + 0x10), *(arg4 + rsi_3 + 0x10), 
                            0x10), 
                        *(arg4 + rbx_3 + 0x10), 0x20), 
                    *(arg4 + rdi_2 + 0x10), 0x30)
                zmm13 = _mm_add_ps(temp0_74, temp0_64)
                arg7 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                zmm1 = data_143442440
                zmm3 = zmm1
                float temp0_81[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg7, zmm1))
                zmm1 = data_143442690
                float temp0_83[0x4] = _mm_mul_ps(_mm_div_ps(temp0_81, zmm1), temp0_77)
                float temp0_85[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(arg4 + r10_1 + 8), *(arg4 + rsi_3 + 8), 0x10), 
                    *(arg4 + rbx_3 + 8), 0x20)
                zmm14 = _mm_add_ps(temp0_83, temp0_67)
                float temp0_89[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(arg4 + r10_1 + 0x14), *(arg4 + rsi_3 + 0x14), 
                            0x10), 
                        *(arg4 + rbx_3 + 0x14), 0x20), 
                    *(arg4 + rdi_2 + 0x14), 0x30)
                arg7 = arg8
                zmm4 = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm0, 0x15), zmm3)), 
                            zmm1), 
                        temp0_89), 
                    __insertps_xmmps_memd_immb(temp0_85, *(arg4 + rdi_2 + 8), 0x30))
        
        zmm8 = _mm_cmpeq_epi32(zmm8, arg7)
        arg8 = zmm8 ^ arg6
        char temp0_139 = _mm_movemask_ps(arg8)
        int32_t rdx_7
        int32_t rbp_8
        
        if (temp0_139 == 0)
            rdx_7 = rdx
            zmm8 = zx.o(0)
            rbp_8 = rbp_1
            arg8 = var_258_1
            zmm10 = var_278
            zmm3 = var_298_1
            zmm11 = zx.o(arg9)
        else
            float var_1d8_1[0x4] = arg7
            float var_288[0x4]
            int64_t rcx_7
            int64_t rsi_2
            int64_t rdi_4
            int64_t r14_3
            
            if (r11.d u> 6)
            label_140130280:
                uint64_t rcx_14 = zx.q(temp0_139)
                rdi_4 = rcx_14 & 1
                zmm0 = var_288
                arg8 = var_258_1
                zmm8 = zx.o(0)
                
                if (rdi_4 == 0)
                    arg7 = var_218
                    arg6 = var_228
                    zmm3 = var_298_1
                    
                    if (rdi_4 != 0)
                        arg6 = _mm_blend_epi16(arg6, zx.o(0), 3)
                else
                    arg7 = _mm_blend_epi16(var_218, zx.o(0), 3)
                    arg6 = var_228
                    zmm3 = var_298_1
                    
                    if (rdi_4 != 0)
                        arg6 = _mm_blend_epi16(arg6, zx.o(0), 3)
                
                zmm11 = zx.o(arg9)
                rdx_7 = rdx
                rbp_8 = rbp_1
                zmm10 = var_278
                bool cond:43_1
                bool cond:44_1
                bool cond:47_1
                bool cond:48_1
                
                if (rdi_4 != 0)
                    zmm0 = _mm_blend_epi16(zmm0, zx.o(0), 3)
                    r14_3 = rcx_14 & 2
                    cond:43_1 = r14_3 == 0
                    cond:44_1 = r14_3 != 0
                    cond:47_1 = r14_3 == 0
                    cond:48_1 = r14_3 != 0
                    
                    if (r14_3 != 0)
                        goto label_1401308d9
                    
                    goto label_14013088f
                
                r14_3 = rcx_14 & 2
                cond:43_1 = r14_3 == 0
                cond:44_1 = r14_3 != 0
                cond:47_1 = r14_3 == 0
                cond:48_1 = r14_3 != 0
                
                if (r14_3 == 0)
                label_14013088f:
                    
                    if (not(cond:43_1))
                    label_140130891:
                        arg6 = _mm_blend_epi16(arg6, zx.o(0), 0xc)
                        
                        if (cond:48_1)
                            goto label_1401308e4
                        
                        goto label_14013089d
                else
                label_1401308d9:
                    arg7 = _mm_blend_epi16(arg7, zx.o(0), 0xc)
                    
                    if (cond:44_1)
                        goto label_140130891
                
                bool cond:70_1
                bool cond:71_1
                bool cond:72_1
                bool cond:73_1
                
                if (not(cond:47_1))
                label_1401308e4:
                    zmm0 = _mm_blend_epi16(zmm0, zx.o(0), 0xc)
                    rsi_2 = rcx_14 & 4
                    cond:70_1 = rsi_2 == 0
                    cond:71_1 = rsi_2 != 0
                    cond:72_1 = rsi_2 == 0
                    cond:73_1 = rsi_2 != 0
                    
                    if (rsi_2 != 0)
                        goto label_1401308a3
                    
                    goto label_1401308f4
                
            label_14013089d:
                rsi_2 = rcx_14 & 4
                cond:70_1 = rsi_2 == 0
                cond:71_1 = rsi_2 != 0
                cond:72_1 = rsi_2 == 0
                cond:73_1 = rsi_2 != 0
                
                if (rsi_2 == 0)
                label_1401308f4:
                    
                    if (not(cond:70_1))
                    label_1401308f6:
                        arg6 = _mm_blend_epi16(arg6, zx.o(0), 0x30)
                        
                        if (cond:73_1)
                            goto label_1401308ae
                        
                        goto label_1401308ff
                else
                label_1401308a3:
                    arg7 = _mm_blend_epi16(arg7, zx.o(0), 0x30)
                    
                    if (cond:71_1)
                        goto label_1401308f6
                
                bool cond:94_1
                bool cond:95_1
                bool cond:96_1
                bool cond:97_1
                
                if (not(cond:72_1))
                label_1401308ae:
                    zmm0 = _mm_blend_epi16(zmm0, zx.o(0), 0x30)
                    rcx_7 = rcx_14 & 8
                    cond:94_1 = rcx_7 == 0
                    cond:95_1 = rcx_7 != 0
                    cond:96_1 = rcx_7 == 0
                    cond:97_1 = rcx_7 == 0
                    
                    if (rcx_7 != 0)
                        goto label_140130905
                    
                    goto label_1401308bb
                
            label_1401308ff:
                rcx_7 = rcx_14 & 8
                cond:94_1 = rcx_7 == 0
                cond:95_1 = rcx_7 != 0
                cond:96_1 = rcx_7 == 0
                cond:97_1 = rcx_7 == 0
                
                if (rcx_7 != 0)
                label_140130905:
                    arg7 = _mm_blend_epi16(arg7, zx.o(0), 0xc0)
                    
                    if (cond:95_1)
                        goto label_1401308bd
                    
                    goto label_14013090e
                
            label_1401308bb:
                
                if (cond:94_1)
                label_14013090e:
                    
                    if (not(cond:96_1))
                        zmm0 = _mm_blend_epi16(zmm0, zx.o(0), 0xc0)
                else
                label_1401308bd:
                    arg6 = _mm_blend_epi16(arg6, zx.o(0), 0xc0)
                    
                    if (not(cond:97_1))
                        zmm0 = _mm_blend_epi16(zmm0, zx.o(0), 0xc0)
            else
                zmm1 = _mm_mullo_epi32(var_1e8_1, arg7)
                zmm0 = _mm_cvtepi32_epi64(zmm1[0].q)
                zmm3 = _mm_cvtepi32_epi64(_mm_shuffle_epi32(zmm1, 0x4e)[0].q)
                
                switch (r11.d)
                    case 0, 1
                        zmm9 = _mm_add_epi64(zmm9, zmm10)
                        zmm11 = _mm_add_epi64(_mm_add_epi64(zmm11, arg5), zmm3)
                        zmm9 = _mm_add_epi64(zmm9, zmm0)
                        zmm1 = _mm_shuffle_epi32(arg8, 0x50)
                        float temp0_149[0x4] = _mm_blendv_ps(zx.o(0), zmm9, zmm1)
                        uint32_t temp0_150[0x4] = _mm_shuffle_epi32(arg8, 0xfa)
                        float temp0_151[0x4] = _mm_blendv_ps(zx.o(0), zmm11, temp0_150)
                        int64_t rax_13 = _mm_extract_epi64(temp0_149, 1)
                        void* rdx_5 = arg4 + rax_13
                        zmm11 = *(arg4 + rax_13)
                        int64_t rax_14 = temp0_151[0].q
                        int64_t rbp_6 = _mm_extract_epi64(temp0_151, 1)
                        void* rbx_5 = arg4 + rax_14
                        arg7 = data_1434426c0
                        float temp0_152[0x4] = _mm_blendv_ps(zx.o(0), arg7, zmm1)
                        zmm10 = *(arg4 + rax_14)
                        float temp0_153[0x4] = _mm_blendv_ps(zx.o(0), arg7, temp0_150)
                        uint64_t var_1c8 = (*(arg4 + rbp_6))[0].q
                        void* rsi_5 = temp0_149[0].q + arg4
                        arg5 = *(temp0_152[0].q + rsi_5)
                        zmm9 = *(_mm_extract_epi64(temp0_152, 1) + rdx_5)
                        zmm8 = *(temp0_153[0].q + rbx_5)
                        float (* rax_18)[0x4] = _mm_extract_epi64(temp0_153, 1)
                        void* rbp_7 = arg4 + rbp_6
                        zmm0 = zmm1
                        zmm1 = data_1434426e0
                        float temp0_154[0x4] = _mm_blendv_ps(zx.o(0), zmm1, zmm0)
                        arg8 = *(rax_18 + rbp_7)
                        float temp0_155[0x4] = _mm_blendv_ps(zx.o(0), zmm1, temp0_150)
                        zmm0 = *(temp0_154[0].q + rsi_5)
                        zmm1 = *(_mm_extract_epi64(temp0_154, 1) + rdx_5)
                        uint32_t (* rax_21)[0x4] = temp0_155[0].q
                        float (* rdx_6)[0x4] = _mm_extract_epi64(temp0_155, 1)
                        zmm2 = *(rax_21 + rbx_5)
                        zmm12 = *(rdx_6 + rbp_7)
                        uint64_t rcx_13 = zx.q(temp0_139)
                        rdi_4 = rcx_13 & 1
                        
                        if (rdi_4 != 0)
                            arg7 = _mm_blend_ps(var_218, *rsi_5, 1)
                        else
                            arg7 = var_218
                        
                        arg6 = var_228
                        rdx_7 = rdx
                        rbp_8 = rbp_1
                        
                        if (rdi_4 != 0)
                            arg6 = _mm_blend_ps(arg6, arg5, 1)
                        
                        bool cond:49_1
                        bool cond:60_1
                        bool cond:61_1
                        
                        if (rdi_4 == 0)
                            zmm0 = var_288
                            r14_3 = rcx_13 & 2
                            cond:49_1 = r14_3 == 0
                            cond:60_1 = r14_3 == 0
                            cond:61_1 = r14_3 != 0
                            
                            if (r14_3 != 0)
                                arg7 = _mm_insert_ps(arg7, zmm11, 0x10)
                        else
                            zmm0 = _mm_blend_ps(var_288, zmm0, 1)
                            r14_3 = rcx_13 & 2
                            cond:49_1 = r14_3 == 0
                            cond:60_1 = r14_3 == 0
                            cond:61_1 = r14_3 != 0
                            
                            if (r14_3 != 0)
                                arg7 = _mm_insert_ps(arg7, zmm11, 0x10)
                        
                        if (not(cond:49_1))
                            arg6 = _mm_insert_ps(arg6, zmm9, 0x10)
                            zmm3 = var_298_1
                            
                            if (cond:61_1)
                                goto label_1401307e7
                            
                            goto label_1401307a0
                        
                        zmm3 = var_298_1
                        bool cond:74_1
                        bool cond:84_1
                        bool cond:85_1
                        bool cond:75_1
                        
                        if (cond:60_1)
                        label_1401307a0:
                            rsi_2 = rcx_13 & 4
                            cond:74_1 = rsi_2 == 0
                            cond:75_1 = rsi_2 != 0
                            cond:84_1 = rsi_2 == 0
                            cond:85_1 = rsi_2 != 0
                            
                            if (rsi_2 != 0)
                            label_1401307a6:
                                arg7 = _mm_insert_ps(arg7, zmm10, 0x20)
                                
                                if (cond:75_1)
                                    goto label_1401307f8
                                
                                goto label_1401307af
                        else
                        label_1401307e7:
                            zmm0 = _mm_insert_ps(zmm0, zmm1, 0x10)
                            rsi_2 = rcx_13 & 4
                            cond:74_1 = rsi_2 == 0
                            cond:75_1 = rsi_2 != 0
                            cond:84_1 = rsi_2 == 0
                            cond:85_1 = rsi_2 != 0
                            
                            if (rsi_2 != 0)
                                goto label_1401307a6
                        
                        if (not(cond:74_1))
                        label_1401307f8:
                            arg6 = _mm_insert_ps(arg6, zmm8, 0x20)
                            zmm10 = var_278
                            
                            if (cond:85_1)
                                goto label_1401307b8
                            
                            goto label_140130808
                        
                    label_1401307af:
                        zmm10 = var_278
                        bool cond:98_1
                        bool cond:106_1
                        bool cond:107_1
                        bool cond:99_1
                        
                        if (cond:84_1)
                        label_140130808:
                            rcx_7 = rcx_13 & 8
                            cond:98_1 = rcx_7 == 0
                            cond:99_1 = rcx_7 != 0
                            cond:106_1 = rcx_7 == 0
                            cond:107_1 = rcx_7 != 0
                            
                            if (rcx_7 != 0)
                            label_14013080e:
                                arg7 = __insertps_xmmps_memd_immb(arg7, var_1c8.d, 0x30)
                                
                                if (cond:99_1)
                                    goto label_1401307c6
                                
                                goto label_14013081b
                        else
                        label_1401307b8:
                            zmm0 = _mm_insert_ps(zmm0, zmm2, 0x20)
                            rcx_7 = rcx_13 & 8
                            cond:98_1 = rcx_7 == 0
                            cond:99_1 = rcx_7 != 0
                            cond:106_1 = rcx_7 == 0
                            cond:107_1 = rcx_7 != 0
                            
                            if (rcx_7 != 0)
                                goto label_14013080e
                        
                        if (cond:98_1)
                        label_14013081b:
                            zmm8 = zx.o(0)
                            arg8 = var_258_1
                            
                            if (not(cond:106_1))
                                zmm0 = _mm_insert_ps(zmm0, zmm12, 0x30)
                        else
                        label_1401307c6:
                            arg6 = _mm_insert_ps(arg6, arg8, 0x30)
                            zmm8 = zx.o(0)
                            arg8 = var_258_1
                            
                            if (cond:107_1)
                                zmm0 = _mm_insert_ps(zmm0, zmm12, 0x30)
                        
                        zmm11 = zx.o(arg9)
                    case 2
                        zmm9 = _mm_add_epi64(zmm9, zmm10)
                        zmm11 = _mm_add_epi64(_mm_add_epi64(zmm11, arg5), zmm3)
                        zmm9 = _mm_add_epi64(zmm9, zmm0)
                        uint32_t temp0_161[0x4] = _mm_shuffle_epi32(arg8, 0x50)
                        float temp0_162[0x4] = _mm_blendv_ps(zx.o(0), zmm9, temp0_161)
                        float temp0_163[0x4] = _mm_shuffle_epi32(arg8, 0xfa)
                        float temp0_164[0x4] = _mm_blendv_ps(zx.o(0), zmm11, temp0_163)
                        int64_t rax_22 = temp0_162[0].q
                        void* r10_2 = arg4 + rax_22
                        int64_t rdi_6 = _mm_extract_epi64(temp0_162, 1)
                        void* rsi_6 = arg4 + rdi_6
                        int64_t rbx_6 = temp0_164[0].q
                        zmm1 = data_1434426b0
                        float temp0_165[0x4] = _mm_blendv_ps(zx.o(0), zmm1, temp0_161)
                        float temp0_166[0x4] = _mm_blendv_ps(zx.o(0), zmm1, temp0_163)
                        zmm1 = zx.o(*(temp0_165[0].q + r10_2))
                        int16_t* rcx_17 = _mm_extract_epi64(temp0_165, 1)
                        zmm2 = data_1434426c0
                        zmm3 = zmm2
                        float temp0_167[0x4] = _mm_blendv_ps(zx.o(0), zmm2, temp0_161)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(rcx_17 + rsi_6), 1)
                        void* rdx_8 = arg4 + rbx_6
                        zmm2 = __pinsrw_xmmdq_memw_immb(zx.o(*(temp0_167[0].q + r10_2)), 
                            *(_mm_extract_epi64(temp0_167, 1) + rsi_6), 1)
                        int64_t rcx_21 = _mm_extract_epi64(temp0_164, 1)
                        int16_t* rbp_9 = temp0_166[0].q
                        float temp0_170[0x4] = _mm_blendv_ps(zx.o(0), zmm3, temp0_163)
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, *(rbp_9 + rdx_8), 2)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, *(temp0_170[0].q + rdx_8), 2)
                        void* rdx_9 = arg4 + rcx_21
                        zmm1 = __pinsrw_xmmdq_memw_immb(zmm1, 
                            *(_mm_extract_epi64(temp0_166, 1) + rdx_9), 3)
                        zmm2 = __pinsrw_xmmdq_memw_immb(zmm2, 
                            *(_mm_extract_epi64(temp0_170, 1) + rdx_9), 3)
                        zmm0 = _mm_cvtepu16_epi32(__pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax_22)), *(arg4 + rdi_6), 
                                    1), 
                                *(arg4 + rbx_6), 2), 
                            *(arg4 + rcx_21), 3)[0].q)
                        zmm3 = data_1434424d0
                        float temp0_180[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm3))
                        zmm0 = data_1434426d0
                        float temp0_181[0x4] = _mm_div_ps(temp0_180, zmm0)
                        float temp0_185[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm1[0].q), zmm3)), 
                            zmm0)
                        float temp0_188[0x4] =
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_cvtepu16_epi32(zmm2[0].q), zmm3))
                        float temp0_189[0x4] = __mulps_xmmps_memps(temp0_181, data_143442710)
                        uint64_t rcx_22 = zx.q(temp0_139)
                        rdi_4 = rcx_22 & 1
                        
                        if (rdi_4 == 0)
                            arg7 = var_218
                        else
                            arg7 = _mm_blend_ps(var_218, temp0_189, 1)
                        
                        arg6 = var_228
                        arg8 = var_258_1
                        zmm3 = var_298_1
                        float temp0_276[0x4] = __divps_xmmps_memps(temp0_188, data_1434426d0)
                        float temp0_277[0x4] = __mulps_xmmps_memps(temp0_185, data_143442710)
                        zmm11 = zx.o(arg9)
                        rdx_7 = rdx
                        zmm8 = zx.o(0)
                        rbp_8 = rbp_1
                        zmm10 = var_278
                        
                        if (rdi_4 != 0)
                            arg6 = _mm_blend_ps(arg6, temp0_277, 1)
                            zmm0 = __mulps_xmmps_memps(temp0_276, data_143442710)
                            
                            if (rdi_4 != 0)
                                goto label_1401309e7
                            
                            goto label_14013097d
                        
                        zmm0 = __mulps_xmmps_memps(temp0_276, data_143442710)
                        bool cond:50_1
                        bool cond:51_1
                        bool cond:62_1
                        bool cond:63_1
                        
                        if (rdi_4 != 0)
                        label_1401309e7:
                            var_288 = _mm_blend_ps(var_288, zmm0, 1)
                            r14_3 = rcx_22 & 2
                            cond:50_1 = r14_3 == 0
                            cond:51_1 = r14_3 != 0
                            cond:62_1 = r14_3 == 0
                            cond:63_1 = r14_3 != 0
                            
                            if (r14_3 != 0)
                                goto label_140130983
                            
                            goto label_1401309f5
                        
                    label_14013097d:
                        r14_3 = rcx_22 & 2
                        cond:50_1 = r14_3 == 0
                        cond:51_1 = r14_3 != 0
                        cond:62_1 = r14_3 == 0
                        cond:63_1 = r14_3 != 0
                        
                        if (r14_3 == 0)
                        label_1401309f5:
                            
                            if (not(cond:50_1))
                            label_1401309f7:
                                arg6 = _mm_blend_ps(arg6, temp0_277, 2)
                                
                                if (cond:63_1)
                                    goto label_140130998
                                
                                goto label_140130a02
                        else
                        label_140130983:
                            arg7 = _mm_blend_ps(arg7, temp0_189, 2)
                            
                            if (cond:51_1)
                                goto label_1401309f7
                        
                        bool cond:76_1
                        bool cond:77_1
                        bool cond:86_1
                        bool cond:87_1
                        
                        if (not(cond:62_1))
                        label_140130998:
                            var_288 = _mm_blend_ps(var_288, zmm0, 2)
                            rsi_2 = rcx_22 & 4
                            cond:76_1 = rsi_2 == 0
                            cond:77_1 = rsi_2 != 0
                            cond:86_1 = rsi_2 == 0
                            cond:87_1 = rsi_2 != 0
                            
                            if (rsi_2 != 0)
                                goto label_140130a08
                            
                            goto label_1401309a6
                        
                    label_140130a02:
                        rsi_2 = rcx_22 & 4
                        cond:76_1 = rsi_2 == 0
                        cond:77_1 = rsi_2 != 0
                        cond:86_1 = rsi_2 == 0
                        cond:87_1 = rsi_2 != 0
                        
                        if (rsi_2 == 0)
                        label_1401309a6:
                            
                            if (not(cond:76_1))
                            label_1401309a8:
                                arg6 = _mm_blend_ps(arg6, temp0_277, 4)
                                
                                if (cond:87_1)
                                    goto label_140130a1d
                                
                                goto label_1401309b0
                        else
                        label_140130a08:
                            arg7 = _mm_blend_ps(arg7, temp0_189, 4)
                            
                            if (cond:77_1)
                                goto label_1401309a8
                        
                        bool cond:100_1
                        bool cond:101_1
                        bool cond:108_1
                        bool cond:109_1
                        
                        if (not(cond:86_1))
                        label_140130a1d:
                            var_288 = _mm_blend_ps(var_288, zmm0, 4)
                            rcx_7 = rcx_22 & 8
                            cond:100_1 = rcx_7 == 0
                            cond:101_1 = rcx_7 != 0
                            cond:108_1 = rcx_7 == 0
                            cond:109_1 = rcx_7 != 0
                            
                            if (rcx_7 != 0)
                                goto label_1401309b6
                            
                            goto label_140130a28
                        
                    label_1401309b0:
                        rcx_7 = rcx_22 & 8
                        cond:100_1 = rcx_7 == 0
                        cond:101_1 = rcx_7 != 0
                        cond:108_1 = rcx_7 == 0
                        cond:109_1 = rcx_7 != 0
                        
                        if (rcx_7 != 0)
                        label_1401309b6:
                            arg7 = _mm_blend_ps(arg7, temp0_189, 8)
                            
                            if (cond:101_1)
                                goto label_140130a2a
                            
                            goto label_1401309be
                        
                    label_140130a28:
                        
                        if (cond:100_1)
                        label_1401309be:
                            
                            if (cond:108_1)
                                zmm0 = var_288
                            else
                                zmm0 = _mm_blend_ps(var_288, zmm0, 8)
                        else
                        label_140130a2a:
                            arg6 = _mm_blend_ps(arg6, temp0_277, 8)
                            
                            if (cond:109_1)
                                zmm0 = _mm_blend_ps(var_288, zmm0, 8)
                            else
                                zmm0 = var_288
                    case 3
                        float temp0_194[0x4] = _mm_blendv_ps(zx.o(0), 
                            _mm_add_epi64(_mm_add_epi64(zmm9, zmm10), zmm0), 
                            _mm_shuffle_epi32(arg8, 0x50))
                        zmm0 = zmm8 & not.o(zmm12)
                        int64_t rax_25 = sx.q(zmm0[0])
                        void* rsi_7 = arg4 + rax_25
                        zmm1 = *(arg4 + rax_25)
                        int64_t rax_27 = sx.q(_mm_extract_epi32(zmm0, 1))
                        void* rbx_7 = arg4 + rax_27
                        int64_t rdx_11 = sx.q(_mm_extract_epi32(zmm0, 2))
                        void* rdi_8 = arg4 + rdx_11
                        int64_t rcx_23 = sx.q(_mm_extract_epi32(zmm0, 3))
                        float temp0_200[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(arg4 + rax_27), 0x10), 
                                *(arg4 + rdx_11), 0x20), 
                            *(arg4 + rcx_23), 0x30)
                        zmm0 = zmm8 & not.o(data_142fc95e0)
                        uint64_t rax_28 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t rax_29 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rax_30 = zx.q(zmm0[0])
                        int32_t* rdx_12 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm0 = zmm8 & not.o(data_143442650)
                        uint64_t r11_1 = zx.q(_mm_extract_epi32(zmm0, 1))
                        uint64_t r15_1 = zx.q(_mm_extract_epi32(zmm0, 2))
                        uint64_t rdx_13 = zx.q(zmm0[0])
                        uint64_t r12_1 = zx.q(_mm_extract_epi32(zmm0, 3))
                        zmm2 = zmm8 & not.o(data_142fc95f0)
                        uint64_t rbp_14 = zx.q(_mm_extract_epi32(zmm2, 1))
                        uint64_t r10_3 = zx.q(_mm_extract_epi32(zmm2, 2))
                        zmm11 = _mm_add_epi64(zmm11, arg5)
                        arg7 = *(rdx_13 + rsi_7)
                        int32_t* rdx_14 = zx.q(_mm_extract_epi32(zmm2, 3))
                        void* r11_2 = arg4 + rcx_23
                        float temp0_213[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(arg7, *(r11_1 + rbx_7), 0x10), 
                                *(r15_1 + rdi_8), 0x20), 
                            *(r12_1 + r11_2), 0x30)
                        float temp0_216[0x4] = _mm_blendv_ps(zx.o(0), _mm_add_epi64(zmm11, zmm3), 
                            _mm_shuffle_epi32(arg8, 0xfa))
                        zmm11 = *(rax_30 + rsi_7)
                        arg6 = zmm8 & not.o(data_143442660)
                        uint64_t rax_31 = zx.q(_mm_extract_epi32(arg6, 1))
                        uint64_t rcx_24 = zx.q(_mm_extract_epi32(arg6, 2))
                        uint64_t r15_2 = zx.q(_mm_extract_epi32(arg6, 3))
                        float temp0_222[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(*(zx.q(arg6[0]) + rsi_7), 
                                    *(rax_31 + rbx_7), 0x10), 
                                *(rcx_24 + rdi_8), 0x20), 
                            *(r15_2 + r11_2), 0x30)
                        uint64_t rax_32 = zx.q(zmm2[0])
                        zmm8 &= not.o(data_143442670)
                        uint64_t r15_3 = zx.q(_mm_extract_epi32(zmm8, 1))
                        zmm9 = *(rax_32 + rsi_7)
                        int32_t* rax_33 = zx.q(_mm_extract_epi32(zmm8, 2))
                        int64_t rbp_16 = temp0_194[0].q
                        int64_t rcx_25 = _mm_extract_epi64(temp0_194, 1)
                        int64_t rbp_17 = temp0_216[0].q
                        zmm2 = __pinsrd_xmmdq_memd_immb(zx.o(*(arg4 + rbp_16)), *(arg4 + rcx_25), 1)
                        int64_t rcx_26 = _mm_extract_epi64(temp0_216, 1)
                        zmm2 = __pinsrd_xmmdq_memd_immb(
                            __pinsrd_xmmdq_memd_immb(zmm2, *(arg4 + rbp_17), 2), *(arg4 + rcx_26), 
                            3)
                        float (* rcx_27)[0x4] = zx.q(zmm8[0])
                        int32_t* rbp_18 = zx.q(_mm_extract_epi32(zmm8, 3))
                        zmm0 = zmm2
                        arg5 = zmm2
                        zmm2 = _mm_add_ps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                temp0_213), 
                            temp0_200)
                        arg5 = _mm_srli_epi32(arg5, 0xa) & data_143442480
                        zmm1 = data_143442440
                        zmm3 = zmm1
                        float temp0_236[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg5, zmm1))
                        zmm1 = data_143442690
                        arg7 = zmm1
                        float temp0_238[0x4] = _mm_mul_ps(_mm_div_ps(temp0_236, zmm1), temp0_222)
                        zmm1 = *(rcx_27 + rsi_7)
                        float temp0_241[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm11, *(rax_28 + rbx_7), 0x10), 
                                *(rax_29 + rdi_8), 0x20), 
                            *(rdx_12 + r11_2), 0x30)
                        zmm9 = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm9, *(rbp_14 + rbx_7), 0x10), 
                                *(r10_3 + rdi_8), 0x20), 
                            *(rdx_14 + r11_2), 0x30)
                        float temp0_247[0x4] = __insertps_xmmps_memd_immb(
                            __insertps_xmmps_memd_immb(
                                __insertps_xmmps_memd_immb(zmm1, *(r15_3 + rbx_7), 0x10), 
                                *(rax_33 + rdi_8), 0x20), 
                            *(rbp_18 + r11_2), 0x30)
                        float temp0_251[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm0, 0x15), zmm3)), arg7)
                        uint64_t rcx_32 = zx.q(temp0_139)
                        rdi_4 = rcx_32 & 1
                        
                        if (rdi_4 == 0)
                            arg7 = var_218
                        else
                            arg7 = _mm_blend_ps(var_218, zmm2, 1)
                        
                        zmm0 = var_288
                        arg8 = var_258_1
                        float temp0_291[0x4] = _mm_mul_ps(temp0_247, temp0_251)
                        float temp0_292[0x4] = _mm_add_ps(temp0_241, temp0_238)
                        r11 = var_240
                        r15 = zx.q(arg10)
                        zmm12 = zx.o(arg9)
                        r12 = var_1b8_1
                        rdx_7 = rdx
                        zmm8 = zx.o(0)
                        rbp_8 = rbp_1
                        zmm10 = var_278
                        
                        if (rdi_4 == 0)
                            arg6 = var_228
                            zmm9 = _mm_add_ps(zmm9, temp0_291)
                            
                            if (rdi_4 != 0)
                                zmm0 = _mm_blend_ps(zmm0, zmm9, 1)
                        else
                            arg6 = _mm_blend_ps(var_228, temp0_292, 1)
                            zmm9 = _mm_add_ps(zmm9, temp0_291)
                            
                            if (rdi_4 != 0)
                                zmm0 = _mm_blend_ps(zmm0, zmm9, 1)
                        
                        r14_3 = rcx_32 & 2
                        
                        if (r14_3 != 0)
                            arg7 = _mm_blend_ps(arg7, zmm2, 2)
                            
                            if (r14_3 != 0)
                                goto label_14012fadf
                        else if (r14_3 != 0)
                        label_14012fadf:
                            arg6 = _mm_blend_ps(arg6, temp0_292, 2)
                            
                            if (r14_3 != 0)
                                goto label_140130ad1
                            
                            goto label_14012faef
                        
                        bool cond:78_1
                        bool cond:79_1
                        bool cond:88_1
                        bool cond:89_1
                        
                        if (r14_3 != 0)
                        label_140130ad1:
                            zmm0 = _mm_blend_ps(zmm0, zmm9, 2)
                            rsi_2 = rcx_32 & 4
                            cond:78_1 = rsi_2 == 0
                            cond:79_1 = rsi_2 != 0
                            cond:88_1 = rsi_2 == 0
                            cond:89_1 = rsi_2 != 0
                            
                            if (rsi_2 != 0)
                                goto label_14012faf9
                            
                            goto label_140130ae5
                        
                    label_14012faef:
                        rsi_2 = rcx_32 & 4
                        cond:78_1 = rsi_2 == 0
                        cond:79_1 = rsi_2 != 0
                        cond:88_1 = rsi_2 == 0
                        cond:89_1 = rsi_2 != 0
                        
                        if (rsi_2 == 0)
                        label_140130ae5:
                            
                            if (not(cond:78_1))
                            label_140130aeb:
                                arg6 = _mm_blend_ps(arg6, temp0_292, 4)
                                
                                if (cond:89_1)
                                    goto label_14012fb0b
                                
                                goto label_140130af8
                        else
                        label_14012faf9:
                            arg7 = _mm_blend_ps(arg7, zmm2, 4)
                            
                            if (cond:79_1)
                                goto label_140130aeb
                        
                        bool cond:102_1
                        bool cond:110_1
                        bool cond:111_1
                        bool cond:103_1
                        
                        if (cond:88_1)
                        label_140130af8:
                            rcx_7 = rcx_32 & 8
                            cond:102_1 = rcx_7 == 0
                            cond:103_1 = rcx_7 != 0
                            cond:110_1 = rcx_7 == 0
                            cond:111_1 = rcx_7 != 0
                            
                            if (rcx_7 != 0)
                            label_140130b02:
                                arg7 = _mm_blend_ps(arg7, zmm2, 8)
                                
                                if (cond:103_1)
                                    goto label_14012fb22
                                
                                goto label_140130b0e
                        else
                        label_14012fb0b:
                            zmm0 = _mm_blend_ps(zmm0, zmm9, 4)
                            rcx_7 = rcx_32 & 8
                            cond:102_1 = rcx_7 == 0
                            cond:103_1 = rcx_7 != 0
                            cond:110_1 = rcx_7 == 0
                            cond:111_1 = rcx_7 != 0
                            
                            if (rcx_7 != 0)
                                goto label_140130b02
                        
                        if (cond:102_1)
                        label_140130b0e:
                            zmm11 = zmm12
                            
                            if (not(cond:110_1))
                                zmm0 = _mm_blend_ps(zmm0, zmm9, 8)
                        else
                        label_14012fb22:
                            arg6 = _mm_blend_ps(arg6, temp0_292, 8)
                            zmm11 = zmm12
                            
                            if (cond:111_1)
                                zmm0 = _mm_blend_ps(zmm0, zmm9, 8)
                        
                        zmm3 = var_298_1
                    case 4, 5, 6
                        goto label_140130280
            
            var_218 = arg7
            float temp0_302[0x4] = _mm_sub_ps(arg7, zmm13)
            var_228 = arg6
            float temp0_303[0x4] = _mm_sub_ps(arg6, zmm14)
            float temp0_304[0x4] = _mm_mul_ps(temp0_302, arg8)
            zmm1 = zmm13
            
            if (rdi_4 != 0)
                zmm1 = zmm13
                zmm1[0] = zmm1[0] + temp0_304[0]
            
            var_288 = zmm0
            float temp0_305[0x4] = _mm_sub_ps(zmm0, zmm4)
            float temp0_306[0x4] = _mm_mul_ps(temp0_303, arg8)
            zmm2 = zmm14
            
            if (rdi_4 != 0)
                zmm2 = zmm14
                zmm2[0] = zmm2[0] f+ temp0_306[0]
                arg7 = _mm_mul_ps(temp0_305, arg8)
                zmm0 = zmm4
                
                if (rdi_4 != 0)
                    goto label_140130be9
                
                goto label_140130b83
            
            arg7 = _mm_mul_ps(temp0_305, arg8)
            zmm0 = zmm4
            bool cond:117_1
            bool cond:118_1
            bool cond:119_1
            bool cond:120_1
            
            if (rdi_4 != 0)
            label_140130be9:
                zmm0 = zmm4
                zmm0[0] = zmm0[0] + arg7[0]
                zmm13 = _mm_add_ps(zmm13, temp0_304)
                cond:117_1 = r14_3 == 0
                cond:118_1 = r14_3 != 0
                cond:119_1 = r14_3 == 0
                cond:120_1 = r14_3 != 0
                
                if (r14_3 != 0)
                    goto label_140130b8c
                
                goto label_140130bf9
            
        label_140130b83:
            zmm13 = _mm_add_ps(zmm13, temp0_304)
            cond:117_1 = r14_3 == 0
            cond:118_1 = r14_3 != 0
            cond:119_1 = r14_3 == 0
            cond:120_1 = r14_3 != 0
            
            if (r14_3 != 0)
            label_140130b8c:
                zmm1 = _mm_blend_ps(zmm1, zmm13, 2)
                zmm14 = _mm_add_ps(zmm14, temp0_306)
                
                if (cond:118_1)
                    goto label_140130bff
                
                goto label_140130b99
            
        label_140130bf9:
            zmm14 = _mm_add_ps(zmm14, temp0_306)
            
            if (not(cond:117_1))
            label_140130bff:
                zmm2 = _mm_blend_ps(zmm2, zmm14, 2)
                zmm4 = _mm_add_ps(zmm4, arg7)
                
                if (cond:120_1)
                    goto label_140130b9e
                
                goto label_140130c0b
            
        label_140130b99:
            zmm4 = _mm_add_ps(zmm4, arg7)
            bool cond:121_1
            bool cond:122_1
            bool cond:123_1
            bool cond:124_1
            
            if (not(cond:119_1))
            label_140130b9e:
                zmm0 = _mm_blend_ps(zmm0, zmm4, 2)
                arg7 = var_1d8_1
                cond:121_1 = rsi_2 == 0
                cond:122_1 = rsi_2 != 0
                cond:123_1 = rsi_2 == 0
                cond:124_1 = rsi_2 != 0
                
                if (rsi_2 != 0)
                    goto label_140130c18
                
                goto label_140130bb1
            
        label_140130c0b:
            arg7 = var_1d8_1
            cond:121_1 = rsi_2 == 0
            cond:122_1 = rsi_2 != 0
            cond:123_1 = rsi_2 == 0
            cond:124_1 = rsi_2 != 0
            
            if (rsi_2 == 0)
            label_140130bb1:
                
                if (not(cond:121_1))
                label_140130bb3:
                    zmm2 = _mm_blend_ps(zmm2, zmm14, 4)
                    
                    if (cond:124_1)
                        goto label_140130c23
                    
                    goto label_140130bbc
            else
            label_140130c18:
                zmm1 = _mm_blend_ps(zmm1, zmm13, 4)
                
                if (cond:122_1)
                    goto label_140130bb3
            
            bool cond:125_1
            bool cond:126_1
            bool cond:127_1
            bool cond:128_1
            
            if (not(cond:123_1))
            label_140130c23:
                zmm0 = _mm_blend_ps(zmm0, zmm4, 4)
                cond:125_1 = rcx_7 == 0
                cond:126_1 = rcx_7 != 0
                cond:127_1 = rcx_7 != 0
                cond:128_1 = rcx_7 == 0
                
                if (rcx_7 != 0)
                    goto label_140130bc1
                
                goto label_140130c2e
            
        label_140130bbc:
            cond:125_1 = rcx_7 == 0
            cond:126_1 = rcx_7 != 0
            cond:127_1 = rcx_7 != 0
            cond:128_1 = rcx_7 == 0
            
            if (rcx_7 != 0)
            label_140130bc1:
                zmm13 = _mm_blend_ps(zmm13, zmm1, 7)
                
                if (cond:126_1)
                    goto label_140130c34
                
                goto label_140130bca
            
        label_140130c2e:
            zmm13 = zmm1
            
            if (cond:125_1)
            label_140130bca:
                zmm14 = zmm2
                
                if (cond:127_1)
                    zmm0 = _mm_blend_ps(zmm0, zmm4, 8)
            else
            label_140130c34:
                zmm14 = _mm_blend_ps(zmm14, zmm2, 7)
                
                if (not(cond:128_1))
                    zmm0 = _mm_blend_ps(zmm0, zmm4, 8)
            
            zmm4 = zmm0
        
        zmm2 = _mm_unpacklo_ps(zmm4, zmm8[0].q)
        float temp0_325[0x4] = _mm_unpackhi_ps(zmm4, zmm8)
        float temp0_326[0x4] = _mm_unpacklo_ps(zmm13, zmm14[0].q)
        float temp0_327[0x4] = _mm_unpackhi_ps(zmm13, zmm14)
        float temp0_328[0x4] = _mm_insert_ps(temp0_326, zmm4, 0x28)
        float var_128_1[0x4] = temp0_328
        int64_t rax_37 = sx.q(zmm3[0]) * 0x30
        *(arg1 + rax_37 + 0x10) = __extractps_memd_xmmps_immb(zmm13, 0)
        arg5 = _mm_unpackhi_pd(temp0_326, zmm2[0].q)
        *(arg1 + rax_37 + 0x14) = __extractps_memd_xmmps_immb(zmm14, 0)
        *(arg1 + rax_37 + 0x18) = __extractps_memd_xmmps_immb(zmm4, 0)
        *(arg1 + rax_37 + 0x1c) = 0
        int64_t rax_41 = sx.q(_mm_extract_epi32(zmm3, 2)) * 0x30
        *(arg1 + rax_41 + 0x10) = __extractps_memd_xmmps_immb(zmm13, 1)
        float var_118_1[0x4] = arg5
        *(arg1 + rax_41 + 0x14) = __extractps_memd_xmmps_immb(zmm14, 1)
        zmm2 = _mm_insert_ps(temp0_327, zmm4, 0xa8)
        *(arg1 + rax_41 + 0x18) = __extractps_memd_xmmps_immb(zmm4, 1)
        *(arg1 + rax_41 + 0x1c) = 0
        int64_t rax_45 = sx.q(zmm10[0]) * 0x30
        *(arg1 + rax_45 + 0x10) = __extractps_memd_xmmps_immb(zmm13, 2)
        uint32_t var_108_1[0x4] = zmm2
        *(arg1 + rax_45 + 0x14) = __extractps_memd_xmmps_immb(zmm14, 2)
        zmm1 = _mm_unpackhi_pd(temp0_327, temp0_325[0].q)
        *(arg1 + rax_45 + 0x18) = __extractps_memd_xmmps_immb(zmm4, 2)
        *(arg1 + rax_45 + 0x1c) = 0
        *(arg1 + sx.q(_mm_extract_epi32(zmm10, 2)) * 0x30 + 0x10) = zmm1
        rbp_1 = rbp_8 + 4
        rdx = rdx_7 + 0x20
        arg6 = _mm_cmpeq_epi32(temp0_328, temp0_328)
    while (rbp_1 s< rcx_4)
    
    rax_50 = zx.q(arg12)
    
    if (rbp_1 s< rax_50.d)
        goto label_140130d8e
return rax_50
