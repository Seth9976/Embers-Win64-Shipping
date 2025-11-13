// 函数: sub_140146f7e
// 地址: 0x140146f7e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x57) += arg5
float var_50[0x4] = arg9
uint128_t zmm13
uint128_t var_70 = zmm13
float var_80[0x4] = arg8
float zmm11[0x4]
float var_90[0x4] = zmm11
int32_t var_a0[0x4] = arg7
int32_t zmm9[0x4]
int32_t var_b0[0x4] = zmm9
float zmm8[0x4]
float var_c0[0x4] = zmm8
uint32_t var_d0[0x4] = arg6
float zmm6[0x4]
float var_e0[0x4] = zmm6
int64_t r13 = sx.q(arg12)
float zmm14[0x4] = arg10
int32_t rax_1 = *(&data_143442810 + (r13 << 2)) * *(&data_1434427f0 + (r13 << 2))
int32_t rcx_4 = ((arg13 s>> 0x1f u>> 0x1e) + arg13) & 0xfffffffc
uint64_t result
int32_t r10
float zmm0[0x4]
uint128_t zmm1
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (rcx_4 s<= 0)
    r10 = 0
    result = zx.q(arg13)
    
    if (0 s< result.d)
    label_140148636:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r10), 0), data_142e11d00)
        zmm11 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(result.d), 0), zmm0)
        zmm0 = _mm_slli_epi32(zmm0, 3) & zmm11
        int64_t rax_76 = sx.q(zmm0[0])
        int64_t rbp_15 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        int64_t rbx_14 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        int64_t rcx_22 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        float var_280_2[0x4] = *(arg2 + rcx_22)
        float var_250_1[0x4] = *(arg2 + rbx_14)
        zmm1 = zx.o(*(arg2 + rax_76))
        float var_260_2[0x4] = *(arg2 + rbp_15)
        zmm0 = data_142fc95e0 & zmm11
        float (* r12_2)[0x4] = zx.q(zmm0[0])
        float (* r14_2)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        float (* r10_1)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        float (* r11_11)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        zmm2 =
            _mm_unpacklo_epi32(zx.o(*(r10_1 + arg2 + rbx_14)), zx.o(*(r11_11 + arg2 + rcx_22))[0].q)
        zmm0 = _mm_slli_epi32(
            _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(r12_2 + arg2 + rax_76)), 
                    zx.o(*(r14_2 + arg2 + rbp_15))[0].q), 
                zmm2[0].q), 
            4) & zmm11
        int64_t rax_80 = sx.q(zmm0[0])
        int64_t rdi_14 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
        int64_t rbx_16 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
        int64_t rdx_1 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        arg9 = _mm_unpacklo_epi32(zx.o(*(arg3 + rbx_16)), zx.o(*(arg3 + rdx_1))[0].q)
        arg8 = _mm_unpacklo_epi32(zx.o(*(arg3 + rax_80)), zx.o(*(arg3 + rdi_14))[0].q)
        zmm4 = _mm_unpacklo_epi64(arg8, arg9[0].q)
        zmm2 =
            _mm_unpacklo_epi32(zx.o(*(r10_1 + arg3 + rbx_16)), zx.o(*(r11_11 + arg3 + rdx_1))[0].q)
        zmm0 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(r12_2 + arg3 + rax_80)), 
                zx.o(*(r14_2 + arg3 + rdi_14))[0].q), 
            zmm2[0].q)
        zmm6 = zx.o(0)
        zmm2 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(arg9, arg8[0].q))
        float var_210_1[0x4] = zmm4
        zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm4)
        zmm4 = _mm_cmpgt_epi32(data_1434422d0, zmm0) & zmm11
        char temp0_411 = _mm_movemask_ps(zmm4)
        zmm5 = zx.o(0)
        char temp0_412
        
        if (temp0_411 != 0)
            temp0_412 = _mm_movemask_ps(zmm11)
            zmm13 = zx.o(0)
            zmm5 = zmm4
            arg7 = zx.o(0)
            arg6 = zx.o(0)
        
        if (temp0_411 == 0 || temp0_412 != temp0_411)
            arg6 = _mm_cmpeq_epi32(arg6, arg6)
            zmm5 ^= arg6
            
            if (0f >= zmm14[0])
                zmm13 = zx.o(0)
                arg7 = zx.o(0)
            else
                arg6 = _mm_add_epi32(arg6, zmm0)
                
                if (zmm14[0] >= 1f)
                    zmm13 = _mm_and_ps(_mm_and_ps(zmm5, zmm11), arg6)
                    arg7 = zmm13
                else
                    float temp0_415[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
                    zmm9 = _mm_mul_ps(_mm_cvtepi32_ps(arg6), temp0_415)
                    zmm4 = _mm_and_ps(data_142d3f780, zmm9)
                    zmm6 = __addps_xmmps_memps(
                        __addps_xmmps_memps(_mm_and_ps(data_142d3f770, zmm9), data_142d3f740), 
                        data_1434427a0) ^ zmm4
                    zmm4 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zmm9, zmm6, 1), data_142d3f7e0)
                    zmm8 = _mm_and_ps(zmm5, zmm11)
                    float temp0_425[0x4] = _mm_add_ps(zmm4, zmm6)
                    int32_t temp0_426[0x4] = _mm_cvttps_epi32(temp0_425)
                    zmm13 = _mm_cmpgt_epi32(temp0_426, arg6)
                    zmm13 = ((zmm13 & not.o(temp0_426)) | (arg6 & zmm13)) & zmm8
                    zmm6 = _mm_sub_epi32(zmm13, _mm_cmpeq_epi32(temp0_426, temp0_426))
                    int32_t temp0_430[0x4] = _mm_cmpgt_epi32(arg6, zmm6)
                    arg7 = (temp0_430 & not.o(arg6)) | (zmm6 & temp0_430)
                    zmm6 = zx.o(0)
                    
                    if (arg11 != 1)
                        zmm6 = _mm_sub_ps(zmm9, temp0_425)
                    
                    arg7 &= zmm8
            
            arg6 = zmm6 & zmm5
        
        arg9 = _mm_unpacklo_epi32(arg9, zmm2[0].q)
        arg8 = _mm_unpacklo_epi32(arg8, zmm3[0].q)
        int32_t rax_83
        rax_83.b = r13.d == 3
        zmm0 = __pcmpgtd_xmmdq_memdq(zmm0, data_142d3f5b0)
        zmm14 = _mm_shuffle_epi32(0x18 & zx.o(neg.d(rax_83)), 0) & zmm0
        zmm0 = zx.o(0)
        int32_t temp0_438[0x4] = _mm_unpackhi_epi32(zmm14, 0)
        zmm14 = _mm_unpacklo_epi32(zmm14, 0)
        zmm2 = _mm_shuffle_epi32(zx.o(rax_1), 0)
        uint64_t r8 = zx.q(r13.d)
        void* var_230_2
        var_230_2.o = zmm11
        void* var_240_1
        var_240_1.o = arg6
        float var_1f0_2[0x4] = zmm2
        char rcx_33
        
        if (r13.d u> 6)
        label_140148fc3:
            rcx_33 = _mm_movemask_ps(zmm11)
            zmm3 = zx.o(0)
            
            if ((rcx_33 & 4) == 0)
                goto label_140148ff8
            
        label_140148ff1:
            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zx.o(0), zmm0, 0x30), 0x84)
        label_140148ff8:
            
            if ((rcx_33 & 8) != 0)
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm3, zmm0, 0x20), 0x24)
            
            zmm3 = var_280_2
            zmm4 = var_260_2
            zmm2 = var_250_1
            zmm8 = zmm0
            zmm11 = zmm0
            zmm6 = var_230_2.o
        else
            zmm3 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm13, 0xf5), zmm2), 0xe8)
            zmm5 =
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm13, zmm2), 0xe8), zmm3[0].q)
            zmm3 = _mm_cmpgt_epi32(zx.o(0), zmm5)
            zmm6 = _mm_shuffle_epi32(zmm5, 0x4e)
            zmm5 = _mm_unpacklo_epi32(zmm5, zmm3[0].q)
            zmm6 = _mm_unpacklo_epi32(zmm6, _mm_cmpgt_epi32(zx.o(0), zmm6)[0].q)
            
            switch (r8)
                case 0, 1
                    zmm0 = _mm_add_epi64(zmm14, arg8)
                    zmm4 = _mm_add_epi64(_mm_add_epi64(temp0_438, arg9), zmm6)
                    zmm0 = _mm_add_epi64(zmm0, zmm5)
                    zmm5 = _mm_shuffle_epi32(zmm11, 0x50)
                    zmm0 &= zmm5
                    float temp0_457[0x4] = _mm_shuffle_epi32(zmm11, 0xfa)
                    zmm4 &= temp0_457
                    int64_t rax_85 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                    void* rcx_28 = arg4 + rax_85
                    zmm3 = *(arg4 + rax_85)
                    int64_t rax_86 = zmm4[0].q
                    void* rbp_17 = arg4 + rax_86
                    zmm2 = *(arg4 + rax_86)
                    int64_t rax_87 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    void* rbx_18 = arg4 + rax_87
                    float var_220_1[0x4] = *(arg4 + rax_87)
                    zmm4 = data_1434426c0
                    arg6 = zmm5 & zmm4
                    zmm4 &= temp0_457
                    void* rdx_4 = zmm0[0].q + arg4
                    zmm8 = *(arg6[0].q + rdx_4)
                    int32_t var_1d0
                    var_1d0.o = *(_mm_shuffle_epi32(arg6, 0x4e)[0].q + rcx_28)
                    zmm9 = *(zmm4[0].q + rbp_17)
                    float var_1e0_3[0x4] = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rbx_18)
                    zmm0 = data_1434426e0
                    zmm5 &= zmm0
                    zmm6 = temp0_457 & zmm0
                    zmm0 = *(zmm5[0].q + rdx_4)
                    arg6 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rcx_28)
                    zmm5 = *(zmm6[0].q + rbp_17)
                    zmm6 = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rbx_18)
                    char temp0_464 = _mm_movemask_ps(zmm11)
                    bool cond:6_1
                    bool cond:7_1
                    bool cond:8_1
                    bool cond:9_1
                    
                    if ((temp0_464 & 1) == 0)
                        char temp1_1 = temp0_464 & 2
                        cond:6_1 = temp1_1 != 0
                        cond:7_1 = temp1_1 == 0
                        cond:8_1 = temp1_1 != 0
                        cond:9_1 = temp1_1 == 0
                        
                        if (temp1_1 == 0)
                            goto label_14014902e
                        
                        goto label_140148b1a
                    
                    zmm11 = *rdx_4
                    char temp0_569 = temp0_464 & 2
                    cond:6_1 = temp0_569 != 0
                    cond:7_1 = temp0_569 == 0
                    cond:8_1 = temp0_569 != 0
                    cond:9_1 = temp0_569 == 0
                    
                    if (temp0_569 == 0)
                    label_14014902e:
                        zmm3 = var_280_2
                        
                        if (cond:7_1)
                            goto label_140148b29
                        
                        goto label_140149039
                    
                label_140148b1a:
                    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm11, 0), zmm11, 0xe2)
                    zmm3 = var_280_2
                    
                    if (not(cond:6_1))
                    label_140148b29:
                        
                        if (cond:9_1)
                            goto label_140149048
                        
                        goto label_140148b2f
                    
                label_140149039:
                    zmm8 = __unpcklps_xmmps_memdq(zmm8, var_1d0.o)
                    bool cond:14_1
                    bool cond:15_1
                    bool cond:19_1
                    bool cond:20_1
                    
                    if (not(cond:8_1))
                    label_140149048:
                        char temp3_1 = temp0_464 & 4
                        cond:14_1 = temp3_1 != 0
                        cond:15_1 = temp3_1 == 0
                        cond:19_1 = temp3_1 != 0
                        cond:20_1 = temp3_1 == 0
                        
                        if (temp3_1 == 0)
                            goto label_140148b3b
                        
                        goto label_140149056
                    
                label_140148b2f:
                    zmm0 = _mm_unpacklo_ps(zmm0, arg6[0].q)
                    char temp2_1 = temp0_464 & 4
                    cond:14_1 = temp2_1 != 0
                    cond:15_1 = temp2_1 == 0
                    cond:19_1 = temp2_1 != 0
                    cond:20_1 = temp2_1 == 0
                    
                    if (temp2_1 == 0)
                    label_140148b3b:
                        zmm2 = var_250_1
                        zmm4 = var_260_2
                        
                        if (cond:15_1)
                            goto label_14014906d
                        
                        goto label_140148b52
                    
                label_140149056:
                    zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(zmm2, zmm11, 0x30), 0x84)
                    zmm2 = var_250_1
                    zmm4 = var_260_2
                    
                    if (not(cond:14_1))
                    label_14014906d:
                        
                        if (cond:20_1)
                            goto label_140148b5d
                        
                        goto label_140149077
                    
                label_140148b52:
                    zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm9, zmm8, 0x30), 0x84)
                    bool cond:39_1
                    bool cond:40_1
                    bool cond:49_1
                    bool cond:50_1
                    
                    if (not(cond:19_1))
                    label_140148b5d:
                        char temp9_1 = temp0_464 & 8
                        cond:39_1 = temp9_1 != 0
                        cond:40_1 = temp9_1 == 0
                        cond:49_1 = temp9_1 == 0
                        cond:50_1 = temp9_1 != 0
                        
                        if (temp9_1 == 0)
                            goto label_140149084
                        
                        goto label_140148b70
                    
                label_140149077:
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm5, zmm0, 0x30), 0x84)
                    char temp8_1 = temp0_464 & 8
                    cond:39_1 = temp8_1 != 0
                    cond:40_1 = temp8_1 == 0
                    cond:49_1 = temp8_1 == 0
                    cond:50_1 = temp8_1 != 0
                    
                    if (temp8_1 == 0)
                    label_140149084:
                        
                        if (cond:40_1)
                            goto label_140148b7b
                        
                        goto label_140149097
                    
                label_140148b70:
                    zmm11 = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_220_1, zmm11, 0x20), 0x24)
                    
                    if (cond:39_1)
                    label_140149097:
                        zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(var_1e0_3, zmm8, 0x20), 0x24)
                        
                        if (not(cond:49_1))
                            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm6, zmm0, 0x20), 0x24)
                    else
                    label_140148b7b:
                        
                        if (cond:50_1)
                            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm6, zmm0, 0x20), 0x24)
                    
                    zmm6 = var_230_2.o
                case 2
                    zmm4 = _mm_add_epi64(zmm14, arg8)
                    zmm0 = _mm_add_epi64(_mm_add_epi64(temp0_438, arg9), zmm6)
                    zmm4 = _mm_add_epi64(zmm4, zmm5)
                    float temp0_476[0x4] = _mm_shuffle_epi32(zmm11, 0x50)
                    zmm4 &= temp0_476
                    zmm3 = _mm_shuffle_epi32(zmm11, 0xfa)
                    zmm0 &= zmm3
                    int64_t rcx_30 = zmm4[0].q
                    void* rbx_19 = arg4 + rcx_30
                    int64_t rdx_5 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    void* rdi_15 = arg4 + rdx_5
                    int64_t rbp_18 = zmm0[0].q
                    zmm5 = data_1434426b0
                    zmm4 = temp0_476 & zmm5
                    void* rsi_18 = zmm4[0].q
                    zmm4 = _mm_shuffle_epi32(zmm4, 0x4e)
                    zmm8 = data_1434426c0
                    arg6 =
                        __pinsrw_xmmdq_memw_immb(zx.o(*(rsi_18 + rbx_19)), *(zmm4[0].q + rdi_15), 1)
                    zmm6 = temp0_476 & zmm8
                    void* rax_98 = zmm6[0].q
                    int16_t* rbx_20 = _mm_shuffle_epi32(zmm6, 0x4e)[0].q
                    zmm4 = zx.o(*(rax_98 + rbx_19))
                    void* rax_100 = arg4 + rbp_18
                    zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                    zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(rbx_20 + rdi_15), 1)
                    int64_t rbx_21 = zmm0[0].q
                    zmm5 &= zmm3
                    zmm3 &= zmm8
                    arg6 = __pinsrw_xmmdq_memw_immb(arg6, *(zmm5[0].q + rax_100), 2)
                    zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(zmm3[0].q + rax_100), 2)
                    void* rax_101 = arg4 + rbx_21
                    arg6 = __pinsrw_xmmdq_memw_immb(arg6, 
                        *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rax_101), 3)
                    zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, 
                        *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rax_101), 3)
                    zmm0 = _mm_unpacklo_epi16(
                        __pinsrw_xmmdq_memw_immb(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rcx_30)), *(arg4 + rdx_5), 
                                    1), 
                                *(arg4 + rbp_18), 2), 
                            *(arg4 + rbx_21), 3), 
                        0)
                    zmm5 = data_1434424d0
                    zmm6 = zmm11
                    float temp0_495[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm5))
                    zmm9 = data_1434426d0
                    float temp0_496[0x4] = _mm_div_ps(temp0_495, zmm9)
                    float temp0_500[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(arg6, 0), zmm5)), zmm9)
                    float temp0_504[0x4] = _mm_div_ps(
                        _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm4, 0), zmm5)), zmm9)
                    zmm3 = data_143442710
                    zmm11 = _mm_mul_ps(temp0_496, zmm3)
                    zmm8 = _mm_mul_ps(temp0_500, zmm3)
                    zmm0 = _mm_mul_ps(temp0_504, zmm3)
                    zmm3 = var_280_2
                    zmm4 = var_260_2
                    zmm2 = var_250_1
                case 3
                    zmm0 = var_210_1 & zmm11
                    int64_t rax_104 = sx.q(zmm0[0])
                    void* r10_2 = arg4 + rax_104
                    zmm8 = *(arg4 + rax_104)
                    int64_t rax_106 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                    void* r11_12 = arg4 + rax_106
                    float temp0_509[0x4] = _mm_unpacklo_ps(zmm8, (*(arg4 + rax_106))[0].q)
                    int64_t rax_108 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                    void* rsi_19 = arg4 + rax_108
                    zmm3 = *(arg4 + rax_108)
                    int64_t rax_110 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                    void* rcx_31 = arg4 + rax_110
                    float temp0_512[0x4] = _mm_unpacklo_ps(zmm3, (*(arg4 + rax_110))[0].q)
                    zmm8 = temp0_509[0].q | temp0_512[0].q << 0x40
                    float temp0_513[0x4] =
                        _mm_unpacklo_ps(*(r12_2 + r10_2), (*(r14_2 + r11_12))[0].q)
                    float temp0_514[0x4] =
                        _mm_unpacklo_ps(*(r10_1 + rsi_19), (*(r11_11 + rcx_31))[0].q)
                    float var_220_2[0x4] = temp0_513[0].q | temp0_514[0].q << 0x40
                    zmm0 = data_142fc95f0 & zmm11
                    zmm9 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + r10_2), 
                        (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + r11_12))[0].q)
                    float temp0_519[0x4] = _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_19), 
                        (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rcx_31))[0].q)
                    zmm9 = zmm9[0].q | temp0_519[0].q << 0x40
                    zmm3 = data_143442650 & zmm11
                    float temp0_521[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + r10_2), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + r11_12))[0].q)
                    float temp0_524[0x4] = _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_19), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rcx_31))[0].q)
                    zmm0 = temp0_521[0].q | temp0_524[0].q << 0x40
                    zmm3 = data_143442660 & zmm11
                    float temp0_526[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + r10_2), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + r11_12))[0].q)
                    float temp0_529[0x4] = _mm_unpacklo_ps(
                        *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_19), 
                        (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rcx_31))[0].q)
                    zmm2 = temp0_526[0].q | temp0_529[0].q << 0x40
                    zmm4 = data_143442670 & zmm11
                    float temp0_531[0x4] = _mm_unpacklo_ps(*(zx.q(zmm4[0]) + r10_2), 
                        (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + r11_12))[0].q)
                    arg6 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + rsi_19), 
                        (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + rcx_31))[0].q)
                    zmm3 = temp0_531[0].q | arg6[0].q << 0x40
                    zmm4 = _mm_add_epi64(zmm14, arg8)
                    arg6 = _mm_add_epi64(_mm_add_epi64(temp0_438, arg9), zmm6)
                    zmm4 = _mm_add_epi64(zmm4, zmm5)
                    zmm5 = _mm_shuffle_epi32(zmm11, 0x50) & zmm4
                    zmm4 = _mm_shuffle_epi32(zmm11, 0xfa) & arg6
                    int64_t rax_127 = zmm5[0].q
                    int64_t rcx_32 = _mm_shuffle_epi32(zmm5, 0x4e)[0].q
                    int64_t rdx_6 = zmm4[0].q
                    int64_t rbp_19 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                    zmm4 = _mm_unpacklo_epi64(
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rax_127)), zx.o(*(arg4 + rcx_32))[0].q), 
                        _mm_unpacklo_epi32(zx.o(*(arg4 + rdx_6)), zx.o(*(arg4 + rbp_19))[0].q)[0].q)
                    zmm5 = zmm4
                    arg6 = _mm_srli_epi32(zmm4, 0xa) & data_143442480
                    zmm4 &= data_143442680
                    zmm5 = _mm_srli_epi32(zmm5, 0x15)
                    zmm6 = zmm11
                    zmm11 = _mm_add_ps(
                        _mm_mul_ps(
                            __divps_xmmps_memps(
                                _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm4, data_143442490)), 
                                data_1434426a0), 
                            zmm0), 
                        zmm8)
                    zmm0 = data_143442440
                    float temp0_554[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(arg6, zmm0))
                    zmm4 = data_143442690
                    float temp0_556[0x4] = _mm_mul_ps(_mm_div_ps(temp0_554, zmm4), zmm2)
                    zmm2 = var_250_1
                    zmm8 = __addps_xmmps_memps(temp0_556, var_220_2)
                    zmm0 = _mm_add_ps(
                        _mm_mul_ps(_mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm5, zmm0)), zmm4), 
                            zmm3), 
                        zmm9)
                    zmm3 = var_280_2
                    zmm4 = var_260_2
                case 4, 5
                    goto label_140148fc3
                case 6
                    rcx_33 = _mm_movemask_ps(zmm11)
                    zmm0 = zx.o(0)
                    zmm3 = zx.o(0)
                    
                    if ((rcx_33 & 4) == 0)
                        goto label_140148ff8
                    
                    goto label_140148ff1
        zmm2 = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
        zmm1 = _mm_unpacklo_epi32(zmm1, zmm4[0].q)
        zmm13 = _mm_cmpeq_epi32(zmm13, arg7) & not.o(zmm6)
        char temp0_582 = _mm_movemask_ps(zmm13)
        
        if (temp0_582 != 0)
            float var_250_2[0x4] = zmm2
            zmm3 = zx.o(0)
            char rcx_43
            
            if (r13.d u> 6)
            label_1401496fd:
                rcx_43 = temp0_582
                zmm2 = zx.o(0)
                zmm6 = var_240_1.o
                
                if ((rcx_43 & 4) == 0)
                    goto label_14014973a
                
            label_140149733:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zx.o(0), zmm3, 0x30), 0x84)
            label_14014973a:
                
                if ((rcx_43 & 8) != 0)
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm2, zmm3, 0x20), 0x24)
                
                zmm2 = zmm3
                zmm4 = zmm3
            else
                zmm4 = _mm_shuffle_epi32(arg7, 0xf5)
                arg6 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(arg7, var_1f0_2), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(var_1f0_2, 0xf5), zmm4), 
                        0xe8)[0].q)
                zmm4 = _mm_cmpgt_epi32(zx.o(0), arg6)
                zmm5 = _mm_shuffle_epi32(arg6, 0x4e)
                arg6 = _mm_unpacklo_epi32(arg6, zmm4[0].q)
                zmm5 = _mm_unpacklo_epi32(zmm5, _mm_cmpgt_epi32(zx.o(0), zmm5)[0].q)
                
                switch (r8)
                    case 0, 1
                        zmm14 = _mm_add_epi64(zmm14, arg8)
                        zmm4 = _mm_add_epi64(_mm_add_epi64(temp0_438, arg9), zmm5)
                        zmm14 = _mm_add_epi64(zmm14, arg6)
                        zmm5 = _mm_shuffle_epi32(zmm13, 0x50)
                        zmm14 &= zmm5
                        uint32_t temp0_600[0x4] = _mm_shuffle_epi32(zmm13, 0xfa)
                        zmm4 &= temp0_600
                        int64_t rax_128 = _mm_shuffle_epi32(zmm14, 0x4e)[0].q
                        void* rcx_36 = arg4 + rax_128
                        arg8 = *(arg4 + rax_128)
                        int64_t rax_129 = zmm4[0].q
                        void* rbx_22 = arg4 + rax_129
                        zmm13 = *(arg4 + rax_129)
                        int64_t rax_130 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        void* rdi_20 = arg4 + rax_130
                        uint32_t var_280_3[0x4] = *(arg4 + rax_130)
                        zmm3 = data_1434426c0
                        zmm4 = zmm5 & zmm3
                        zmm3 &= temp0_600
                        void* rbp_21 = zmm14[0].q + arg4
                        zmm2 = *(zmm4[0].q + rbp_21)
                        arg9 = *(_mm_shuffle_epi32(zmm4, 0x4e)[0].q + rcx_36)
                        zmm14 = *(zmm3[0].q + rbx_22)
                        uint32_t var_260_3[0x4] = *(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rdi_20)
                        zmm3 = data_1434426e0
                        zmm5 &= zmm3
                        arg6 = temp0_600 & zmm3
                        zmm3 = *(zmm5[0].q + rbp_21)
                        zmm9 = *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rcx_36)
                        arg7 = *(arg6[0].q + rbx_22)
                        zmm4 = _mm_shuffle_epi32(arg6, 0x4e)
                        zmm5 = *(zmm4[0].q + rdi_20)
                        bool cond:21_1
                        bool cond:22_1
                        bool cond:33_1
                        bool cond:34_1
                        
                        if ((temp0_582 & 1) == 0)
                            char temp5_1 = temp0_582 & 2
                            cond:21_1 = temp5_1 != 0
                            cond:22_1 = temp5_1 == 0
                            cond:33_1 = temp5_1 != 0
                            cond:34_1 = temp5_1 == 0
                            
                            if (temp5_1 == 0)
                                goto label_14014975a
                            
                            goto label_140149259
                        
                        zmm4 = *rbp_21
                        char temp4_1 = temp0_582 & 2
                        cond:21_1 = temp4_1 != 0
                        cond:22_1 = temp4_1 == 0
                        cond:33_1 = temp4_1 != 0
                        cond:34_1 = temp4_1 == 0
                        
                        if (temp4_1 == 0)
                        label_14014975a:
                            
                            if (cond:22_1)
                                goto label_140149263
                            
                            goto label_140149760
                        
                    label_140149259:
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm4, 0), zmm4, 0xe2)
                        
                        if (not(cond:21_1))
                        label_140149263:
                            
                            if (cond:34_1)
                                goto label_14014976a
                            
                            goto label_140149269
                        
                    label_140149760:
                        zmm2 = _mm_unpacklo_ps(zmm2, arg9[0].q)
                        bool cond:51_1
                        bool cond:52_1
                        bool cond:61_1
                        bool cond:62_1
                        
                        if (not(cond:33_1))
                        label_14014976a:
                            char temp11_1 = temp0_582 & 4
                            cond:51_1 = temp11_1 != 0
                            cond:52_1 = temp11_1 == 0
                            cond:61_1 = temp11_1 != 0
                            cond:62_1 = temp11_1 == 0
                            
                            if (temp11_1 == 0)
                                goto label_140149276
                            
                            goto label_140149778
                        
                    label_140149269:
                        zmm3 = _mm_unpacklo_ps(zmm3, zmm9[0].q)
                        char temp10_1 = temp0_582 & 4
                        cond:51_1 = temp10_1 != 0
                        cond:52_1 = temp10_1 == 0
                        cond:61_1 = temp10_1 != 0
                        cond:62_1 = temp10_1 == 0
                        
                        if (temp10_1 == 0)
                        label_140149276:
                            zmm6 = var_240_1.o
                            
                            if (cond:52_1)
                                goto label_140149788
                            
                            goto label_140149286
                        
                    label_140149778:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm13, zmm4, 0x30), 0x84)
                        zmm6 = var_240_1.o
                        
                        if (not(cond:51_1))
                        label_140149788:
                            
                            if (cond:62_1)
                                goto label_140149291
                            
                            goto label_140149793
                        
                    label_140149286:
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm14, zmm2, 0x30), 0x84)
                        bool cond:74_1
                        bool cond:75_1
                        bool cond:84_1
                        bool cond:85_1
                        
                        if (not(cond:61_1))
                        label_140149291:
                            char temp15_1 = temp0_582 & 8
                            cond:74_1 = temp15_1 != 0
                            cond:75_1 = temp15_1 == 0
                            cond:84_1 = temp15_1 == 0
                            cond:85_1 = temp15_1 != 0
                            
                            if (temp15_1 == 0)
                                goto label_1401497a1
                            
                            goto label_1401492a2
                        
                    label_140149793:
                        zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(arg7, zmm3, 0x30), 0x84)
                        char temp14_1 = temp0_582 & 8
                        cond:74_1 = temp14_1 != 0
                        cond:75_1 = temp14_1 == 0
                        cond:84_1 = temp14_1 == 0
                        cond:85_1 = temp14_1 != 0
                        
                        if (temp14_1 == 0)
                        label_1401497a1:
                            
                            if (cond:75_1)
                                goto label_1401492ac
                            
                            goto label_1401497b0
                        
                    label_1401492a2:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(var_280_3, zmm4, 0x20), 0x24)
                        
                        if (cond:74_1)
                        label_1401497b0:
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_260_3, zmm2, 0x20), 0x24)
                            
                            if (not(cond:84_1))
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm5, zmm3, 0x20), 0x24)
                        else
                        label_1401492ac:
                            
                            if (cond:85_1)
                                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm5, zmm3, 0x20), 0x24)
                    case 2
                        zmm14 = _mm_add_epi64(zmm14, arg8)
                        zmm6 = _mm_add_epi64(_mm_add_epi64(temp0_438, arg9), zmm5)
                        zmm14 = _mm_add_epi64(zmm14, arg6)
                        zmm5 = _mm_shuffle_epi32(zmm13, 0x50)
                        zmm14 &= zmm5
                        int32_t temp0_619[0x4] = _mm_shuffle_epi32(zmm13, 0xfa)
                        zmm6 &= temp0_619
                        int64_t rcx_38 = zmm14[0].q
                        void* rbx_23 = arg4 + rcx_38
                        int64_t rbp_22 = _mm_shuffle_epi32(zmm14, 0x4e)[0].q
                        void* rdi_21 = arg4 + rbp_22
                        zmm2 = data_1434426b0
                        zmm4 = zmm5 & zmm2
                        void* rsi_20 = zmm4[0].q
                        int16_t* rax_140 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
                        zmm4 = data_1434426c0
                        zmm5 &= zmm4
                        arg6 = __pinsrw_xmmdq_memw_immb(zx.o(*(rsi_20 + rbx_23)), 
                            *(rax_140 + rdi_21), 1)
                        int64_t rbx_24 = zmm6[0].q
                        zmm3 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm5[0].q + rbx_23)), 
                            *(_mm_shuffle_epi32(zmm5, 0x4e)[0].q + rdi_21), 1)
                        void* rax_144 = arg4 + rbx_24
                        zmm2 &= temp0_619
                        arg6 = __pinsrw_xmmdq_memw_immb(arg6, *(zmm2[0].q + rax_144), 2)
                        zmm9 = temp0_619 & zmm4
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(zmm9[0].q + rax_144), 2)
                        zmm4 = __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rcx_38)), *(arg4 + rbp_22), 1)
                        zmm5 = _mm_shuffle_epi32(zmm6, 0x4e)
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(arg4 + rbx_24), 2)
                        int64_t rax_146 = zmm5[0].q
                        zmm4 = __pinsrw_xmmdq_memw_immb(zmm4, *(arg4 + rax_146), 3)
                        void* rax_147 = arg4 + rax_146
                        arg6 = __pinsrw_xmmdq_memw_immb(arg6, 
                            *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rax_147), 3)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, 
                            *(_mm_shuffle_epi32(zmm9, 0x4e)[0].q + rax_147), 3)
                        zmm4 = _mm_unpacklo_epi16(zmm4, 0)
                        zmm9 = data_1434424d0
                        float temp0_637[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm4, zmm9))
                        arg7 = data_1434426d0
                        float temp0_638[0x4] = _mm_div_ps(temp0_637, arg7)
                        float temp0_642[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(arg6, 0), zmm9)), arg7)
                        float temp0_646[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm3, 0), zmm9)), arg7)
                        zmm5 = data_143442710
                        zmm4 = _mm_mul_ps(temp0_638, zmm5)
                        zmm2 = _mm_mul_ps(temp0_642, zmm5)
                        zmm3 = _mm_mul_ps(temp0_646, zmm5)
                        zmm6 = var_240_1.o
                    case 3
                        zmm4 = var_210_1 & zmm13
                        int64_t rax_149 = sx.q(zmm4[0])
                        void* rcx_41 = arg4 + rax_149
                        zmm2 = *(arg4 + rax_149)
                        int64_t rax_151 = sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])
                        void* rbp_23 = arg4 + rax_151
                        float temp0_651[0x4] = _mm_unpacklo_ps(zmm2, (*(arg4 + rax_151))[0].q)
                        int64_t rax_153 = sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])
                        void* rbx_25 = arg4 + rax_153
                        zmm3 = *(arg4 + rax_153)
                        int64_t rax_155 = sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])
                        void* rdi_24 = arg4 + rax_155
                        float temp0_654[0x4] = _mm_unpacklo_ps(zmm3, (*(arg4 + rax_155))[0].q)
                        float var_280_4[0x4] = temp0_651[0].q | temp0_654[0].q << 0x40
                        zmm3 = data_142fc95e0 & zmm13
                        float temp0_656[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rcx_41), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rbp_23))[0].q)
                        float temp0_659[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_25), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rdi_24))[0].q)
                        float var_260_4[0x4] = temp0_656[0].q | temp0_659[0].q << 0x40
                        zmm3 = data_142fc95f0 & zmm13
                        float temp0_661[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rcx_41), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rbp_23))[0].q)
                        float temp0_664[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_25), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rdi_24))[0].q)
                        float var_1f0_3[0x4] = temp0_661[0].q | temp0_664[0].q << 0x40
                        zmm3 = data_143442650 & zmm13
                        float temp0_666[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rcx_41), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rbp_23))[0].q)
                        float temp0_669[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_25), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rdi_24))[0].q)
                        zmm6 = temp0_666[0].q | temp0_669[0].q << 0x40
                        zmm4 = data_143442660 & zmm13
                        arg7 = _mm_unpacklo_ps(*(zx.q(zmm4[0]) + rcx_41), 
                            (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + rbp_23))[0].q)
                        float temp0_674[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + rbx_25), 
                            (*(zx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + rdi_24))[0].q)
                        arg7 = arg7[0].q | temp0_674[0].q << 0x40
                        zmm3 = data_143442670 & zmm13
                        zmm9 = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rcx_41), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rbp_23))[0].q)
                        float temp0_679[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_25), 
                            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rdi_24))[0].q)
                        zmm9 = zmm9[0].q | temp0_679[0].q << 0x40
                        zmm14 = _mm_add_epi64(zmm14, arg8)
                        zmm4 = _mm_add_epi64(_mm_add_epi64(temp0_438, arg9), zmm5)
                        zmm14 = _mm_add_epi64(zmm14, arg6)
                        zmm3 = _mm_shuffle_epi32(zmm13, 0x50) & zmm14
                        zmm2 = _mm_shuffle_epi32(zmm13, 0xfa) & zmm4
                        int64_t rax_176 = zmm3[0].q
                        int64_t rcx_42 = _mm_shuffle_epi32(zmm3, 0x4e)[0].q
                        int64_t rbp_24 = zmm2[0].q
                        int64_t rbx_26 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                        zmm2 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_176)), 
                                zx.o(*(arg4 + rcx_42))[0].q), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_24)), zx.o(*(arg4 + rbx_26))[0].q)[
                            0].q)
                        zmm3 = zmm2
                        zmm5 = _mm_srli_epi32(zmm2, 0xa) & data_143442480
                        zmm2 &= data_143442680
                        zmm3 = _mm_srli_epi32(zmm3, 0x15)
                        zmm4 = __addps_xmmps_memps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm2, data_143442490)), 
                                    data_1434426a0), 
                                zmm6), 
                            var_280_4)
                        arg6 = data_143442440
                        float temp0_699[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm5, arg6))
                        zmm5 = data_143442690
                        zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_div_ps(temp0_699, zmm5), arg7), 
                            var_260_4)
                        zmm3 = __addps_xmmps_memps(
                            _mm_mul_ps(
                                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(zmm3, arg6)), zmm5), 
                                zmm9), 
                            var_1f0_3)
                        zmm6 = var_240_1.o
                    case 4, 5
                        goto label_1401496fd
                    case 6
                        rcx_43 = temp0_582
                        zmm3 = zx.o(0)
                        zmm2 = zx.o(0)
                        zmm6 = var_240_1.o
                        
                        if ((rcx_43 & 4) == 0)
                            goto label_14014973a
                        
                        goto label_140149733
            float temp0_721[0x4] = _mm_sub_ps(zmm4, zmm11)
            float temp0_722[0x4] = _mm_sub_ps(zmm2, zmm8)
            float temp0_723[0x4] = _mm_mul_ps(temp0_721, zmm6)
            zmm5 = zmm11
            char temp6_1 = temp0_582 & 1
            
            if (temp6_1 != 0)
                zmm5 = zmm11
                zmm5[0] = zmm5[0] + temp0_723[0]
                zmm3 = _mm_sub_ps(zmm3, zmm0)
                zmm2 = _mm_mul_ps(temp0_722, zmm6)
                arg6 = zmm8
                
                if (temp6_1 != 0)
                    goto label_1401498a0
                
                goto label_1401497f1
            
            zmm3 = _mm_sub_ps(zmm3, zmm0)
            zmm2 = _mm_mul_ps(temp0_722, zmm6)
            arg6 = zmm8
            
            if (temp6_1 != 0)
            label_1401498a0:
                arg6 = zmm8
                arg6[0] = arg6[0] f+ zmm2[0]
                zmm6 = _mm_mul_ps(zmm6, zmm3)
                zmm3 = zmm0
                
                if (temp6_1 != 0)
                    goto label_1401497fd
                
                goto label_1401498b4
            
        label_1401497f1:
            zmm6 = _mm_mul_ps(zmm6, zmm3)
            zmm3 = zmm0
            bool cond:53_1
            bool cond:54_1
            bool cond:63_1
            bool cond:64_1
            
            if (temp6_1 != 0)
            label_1401497fd:
                zmm3 = zmm0
                zmm3[0] = zmm3[0] + zmm6[0]
                zmm11 = _mm_add_ps(zmm11, temp0_723)
                char temp13_1 = temp0_582 & 2
                cond:53_1 = temp13_1 == 0
                cond:54_1 = temp13_1 != 0
                cond:63_1 = temp13_1 == 0
                cond:64_1 = temp13_1 != 0
                
                if (temp13_1 != 0)
                    goto label_1401498cd
                
                goto label_140149811
            
        label_1401498b4:
            zmm11 = _mm_add_ps(zmm11, temp0_723)
            char temp12_1 = temp0_582 & 2
            cond:53_1 = temp12_1 == 0
            cond:54_1 = temp12_1 != 0
            cond:63_1 = temp12_1 == 0
            cond:64_1 = temp12_1 != 0
            
            if (temp12_1 != 0)
            label_1401498cd:
                zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm5, 1), zmm5, 0xe2)
                zmm8 = _mm_add_ps(zmm8, zmm2)
                
                if (cond:54_1)
                    goto label_140149827
                
                goto label_1401498da
            
        label_140149811:
            zmm8 = _mm_add_ps(zmm8, zmm2)
            
            if (not(cond:53_1))
            label_140149827:
                arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, arg6, 1), arg6, 0xe2)
                zmm0 = _mm_add_ps(zmm0, zmm6)
                
                if (cond:64_1)
                    goto label_1401498ee
                
                goto label_140149833
            
        label_1401498da:
            zmm0 = _mm_add_ps(zmm0, zmm6)
            bool cond:76_1
            bool cond:77_1
            bool cond:86_1
            bool cond:87_1
            
            if (not(cond:63_1))
            label_1401498ee:
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm3, 1), zmm3, 0xe2)
                char temp17_1 = temp0_582 & 4
                cond:76_1 = temp17_1 == 0
                cond:77_1 = temp17_1 != 0
                cond:86_1 = temp17_1 == 0
                cond:87_1 = temp17_1 != 0
                
                if (temp17_1 != 0)
                    goto label_140149844
                
                goto label_1401498fa
            
        label_140149833:
            char temp16_1 = temp0_582 & 4
            cond:76_1 = temp16_1 == 0
            cond:77_1 = temp16_1 != 0
            cond:86_1 = temp16_1 == 0
            cond:87_1 = temp16_1 != 0
            
            if (temp16_1 == 0)
            label_1401498fa:
                
                if (not(cond:76_1))
                label_140149908:
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm8, arg6, 0x32), 0x84)
                    
                    if (cond:87_1)
                        goto label_14014985b
                    
                    goto label_140149912
            else
            label_140149844:
                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, zmm5, 0x32), 0x84)
                
                if (cond:77_1)
                    goto label_140149908
            
            bool cond:98_1
            bool cond:99_1
            bool cond:106_1
            bool cond:107_1
            
            if (not(cond:86_1))
            label_14014985b:
                zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm0, zmm3, 0x32), 0x84)
                zmm2 = var_250_2
                char temp19_1 = temp0_582 & 8
                cond:98_1 = temp19_1 == 0
                cond:99_1 = temp19_1 != 0
                cond:106_1 = temp19_1 == 0
                cond:107_1 = temp19_1 != 0
                
                if (temp19_1 != 0)
                    goto label_14014992a
                
                goto label_14014986d
            
        label_140149912:
            zmm2 = var_250_2
            char temp18_1 = temp0_582 & 8
            cond:98_1 = temp18_1 == 0
            cond:99_1 = temp18_1 != 0
            cond:106_1 = temp18_1 == 0
            cond:107_1 = temp18_1 != 0
            
            if (temp18_1 != 0)
            label_14014992a:
                zmm11 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, zmm5, 0x23), 0x24)
                
                if (cond:99_1)
                    goto label_140149881
                
                goto label_140149934
            
        label_14014986d:
            zmm11 = zmm5
            
            if (cond:98_1)
            label_140149934:
                zmm8 = arg6
                
                if (not(cond:106_1))
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm0, zmm3, 0x23), 0x24)
            else
            label_140149881:
                zmm8 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm8, arg6, 0x23), 0x24)
                
                if (cond:107_1)
                    zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm0, zmm3, 0x23), 0x24)
            
            zmm0 = zmm3
        
        zmm1 = _mm_unpacklo_epi64(zmm1, zmm2[0].q)
        zmm2 = zx.o(zmm0[0].q)
        float temp0_755[0x4] = _mm_unpackhi_ps(zmm0, zx.o(0))
        float temp0_756[0x4] = _mm_unpacklo_ps(zmm11, zmm8[0].q)
        float temp0_757[0x4] = _mm_unpackhi_ps(zmm11, zmm8)
        float var_160[0x4] = _mm_shuffle_ps(temp0_756, zmm2, 0x84)
        float var_150_1[0x4] = _mm_shuffle_ps(temp0_756, zmm2, 0xde)
        float var_140_1[0x4] = temp0_757[0].q | temp0_755[0].q << 0x40
        float var_130_1[0x4] = _mm_unpackhi_pd(temp0_757, temp0_755[0].q)
        uint64_t i = zx.q(_mm_movemask_ps(var_230_2.o))
        
        do
            uint64_t rcx_45
            uint64_t rflags_1
            
            if (i == 0)
                rcx_45 = 0x40
            else
                rcx_45, rflags_1 = _bit_scan_forward(i)
            uint128_t var_170 = zmm1
            result = sx.q(*(&var_170 + ((zx.q(rcx_45.d) & 3) << 2))) * 0x30
            *(arg1 + result + 0x10) = (&var_160)[rcx_45]
            i &= rol.q(-2, rcx_45.b)
        while (i != 0)
else
    float temp0_1[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
    int32_t rcx_5
    rcx_5.b = r13.d == 3
    float var_180_1[0x4] = _mm_shuffle_epi32(0x18 & zx.o(neg.d(rcx_5)), 0)
    float var_1f0_1[0x4] = _mm_shuffle_epi32(zx.o(rax_1), 0)
    int32_t r14_1 = 0
    arg8 = _mm_cmpeq_epi32(arg8, arg8)
    r10 = 0
    
    do
        int64_t rcx_8 = sx.q(r14_1)
        zmm0 = *(arg2 + rcx_8)
        zmm3 = *(arg2 + rcx_8 + 0x10)
        float var_280_1[0x4] = zmm0
        zmm0 = _mm_slli_epi32(_mm_shuffle_ps(zmm0, zmm3, 0xdd), 4)
        int64_t rbp_1 = sx.q(zmm0[0])
        int64_t r11_3 = sx.q(*(arg3 + rbp_1))
        int64_t rax_2 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        int64_t rdi_1 = sx.q(*(arg3 + rax_2))
        int64_t rcx_10 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        int64_t rsi_3 = sx.q(*(arg3 + rcx_10))
        int64_t r12_1 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        int64_t rbx_4 = sx.q(*(arg3 + r12_1))
        zmm11 = _mm_unpacklo_epi32(zx.o(rsi_3.d), zx.o(rbx_4.d)[0].q)
        zmm13 = _mm_unpacklo_epi32(zx.o(r11_3.d), zx.o(rdi_1.d)[0].q)
        zmm4 = _mm_unpacklo_epi64(zmm13, zmm11[0].q)
        zmm2 = _mm_unpacklo_epi32(zx.o(*(arg3 + rcx_10 + 4)), zx.o(*(arg3 + r12_1 + 4))[0].q)
        zmm1 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(zx.o(*(arg3 + rbp_1 + 4)), zx.o(*(arg3 + rax_2 + 4))[0].q), 
            zmm2[0].q)
        zmm8 = _mm_cmpgt_epi32(zx.o(0), _mm_unpacklo_epi64(zmm11, zmm13.q))
        float var_1e0_1[0x4] = zmm4
        int32_t temp0_39[0x4] = _mm_cmpgt_epi32(zx.o(0), zmm4)
        zmm2 = _mm_cmpgt_epi32(data_1434422d0, zmm1)
        char temp0_41 = _mm_movemask_ps(zmm2)
        float var_260_1[0x4] = zmm3
        uint32_t var_250[0x4]
        
        if (temp0_41 == 0)
            zmm2 = zx.o(0)
        label_14014730f:
            zmm6 = zmm2 ^ arg8
            
            if (zx.o(0)[0] >= zmm14[0])
                arg7 &= zmm2
                var_250 &= zmm2
                arg6 = zx.o(0)
            else
                bool cond:3_1 = zmm14[0] >= 1f
                zmm3 = _mm_add_epi32(zmm1, arg8)
                
                if (cond:3_1)
                    zmm0 = _mm_srai_epi32(_mm_slli_epi32(zmm6, 0x1f), 0x1f)
                    zmm3 &= zmm0
                    arg6 = zx.o(0)
                    arg7 = (zmm0 & not.o(arg7)) | zmm3
                    var_250 = (zmm0 & not.o(var_250)) | zmm3
                else
                    arg8 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm3), temp0_1)
                    zmm0 = __andps_xmmxud_memxud(arg8, data_142d3f780)
                    zmm4 = __addps_xmmps_memps(
                        __addps_xmmps_memps(__andps_xmmxud_memxud(arg8, data_142d3f770), 
                            data_142d3f740), 
                        data_1434427a0) ^ zmm0
                    arg6 = zx.o(0)
                    float temp0_52[0x4] = _mm_add_ps(
                        __andps_xmmxud_memxud(_mm_cmpeq_ps(arg8, zmm4, 1), data_142d3f7e0), zmm4)
                    int32_t temp0_53[0x4] = _mm_cvttps_epi32(temp0_52)
                    zmm4 = _mm_cmpgt_epi32(temp0_53, zmm3)
                    zmm5 = _mm_srai_epi32(_mm_slli_epi32(zmm6, 0x1f), 0x1f)
                    arg7 =
                        (zmm5 & not.o(arg7)) | (((zmm4 & not.o(temp0_53)) | (zmm3 & zmm4)) & zmm5)
                    
                    if (arg11 != 1)
                        arg8 = _mm_sub_ps(arg8, temp0_52)
                        arg6 = arg8
                    
                    arg8 = _mm_cmpeq_epi32(arg8, arg8)
                    zmm0 = _mm_sub_epi32(arg7, arg8)
                    zmm2 = _mm_cmpgt_epi32(zmm3, zmm0)
                    var_250 =
                        (zmm5 & not.o(var_250)) | (((zmm2 & not.o(zmm3)) | (zmm0 & zmm2)) & zmm5)
                    zmm14 = arg10
            
            zmm6 = _mm_srai_epi32(_mm_slli_epi32(zmm6, 0x1f), 0x1f)
            arg9 = (zmm6 & not.o(arg9)) | _mm_and_ps(arg6, zmm6)
        else
            arg7 = zmm2 & not.o(arg7)
            var_250 = __andnps_xmmxud_memxud(zmm2, var_250)
            arg9 = zmm2 & not.o(arg9)
            
            if (temp0_41 != 0xf)
                goto label_14014730f
        
        int64_t var_240
        var_240.o = arg9
        zmm11 = _mm_unpacklo_epi32(zmm11, zmm8[0].q)
        zmm13 = _mm_unpacklo_epi32(zmm13, temp0_39[0].q)
        zmm1 = __pcmpgtd_xmmdq_memdq(zmm1, data_142d3f5b0) & var_180_1
        zmm5 = zx.o(0)
        arg9 = _mm_unpackhi_epi32(zmm1, zmm5[0].q)
        zmm1 = _mm_unpacklo_epi32(zmm1, zmm5[0].q)
        zmm3 = _mm_shuffle_epi32(_mm_mul_epu32(arg7, var_1f0_1), 0xe8)
        zmm6 = _mm_shuffle_epi32(var_1f0_1, 0xf5)
        zmm3 = _mm_unpacklo_epi32(zmm3, 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(arg7, 0xf5), zmm6), 0xe8)[0].q)
        zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm3)
        uint32_t temp0_79[0x4] = _mm_shuffle_epi32(zmm3, 0x4e)
        zmm3 = _mm_unpacklo_epi32(zmm3, zmm0[0].q)
        arg6 = _mm_unpacklo_epi32(temp0_79, _mm_cmpgt_epi32(zx.o(0), temp0_79)[0].q)
        int64_t var_230
        
        if (r13.d u< 2)
            zmm0 = _mm_add_epi64(zmm1, zmm13)
            zmm4 = _mm_add_epi64(_mm_add_epi64(arg9, zmm11), arg6)
            zmm0 = _mm_add_epi64(zmm0, zmm3)
            int64_t rax_4 = zmm0[0].q
            int64_t rcx_12 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
            int64_t rbp_4 = zmm4[0].q
            int64_t rbx_6 = _mm_shuffle_epi32(zmm4, 0x4e)[0].q
            zmm8 = zx.o(*(arg4 + rax_4 + 4))
            int32_t temp0_128[0x4] =
                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_4)), zx.o(*(arg4 + rcx_12))[0].q)
            zmm8 = _mm_unpacklo_epi32(zmm8, zx.o(*(arg4 + rcx_12 + 4))[0].q)
            zmm3 = zx.o(*(arg4 + rbp_4 + 4))
            zmm9 = _mm_unpacklo_epi64(temp0_128, 
                _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_4)), zx.o(*(arg4 + rbx_6))[0].q)[0].q)
            zmm8 = _mm_unpacklo_epi64(zmm8, 
                _mm_unpacklo_epi32(zmm3, zx.o(*(arg4 + rbx_6 + 4))[0].q)[0].q)
            zmm5 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(zx.o(*(arg4 + rax_4 + 8)), zx.o(*(arg4 + rcx_12 + 8))[0].q), 
                _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_4 + 8)), zx.o(*(arg4 + rbx_6 + 8))[0].q)[0].q)
        else if (r13.d == 2)
            zmm0 = _mm_add_epi64(zmm1, zmm13)
            zmm2 = _mm_add_epi64(_mm_add_epi64(arg9, zmm11), arg6)
            zmm0 = _mm_add_epi64(zmm0, zmm3)
            int64_t rdi_2 = zmm0[0].q
            int64_t rbx_7 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
            int64_t rcx_13 = zmm2[0].q
            int64_t rbp_5 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
            zmm0 = _mm_unpacklo_epi16(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(
                        __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdi_2)), *(arg4 + rbx_7), 1), 
                        *(arg4 + rcx_13), 2), 
                    *(arg4 + rbp_5), 3), 
                0)
            zmm3 = data_1434424d0
            int32_t temp0_148[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm3))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdi_2 + 2)), *(arg4 + rbx_7 + 2), 1), 
                    *(arg4 + rcx_13 + 2), 2), 
                *(arg4 + rbp_5 + 2), 3)
            zmm4 = data_1434426d0
            zmm9 = _mm_div_ps(temp0_148, zmm4)
            float temp0_155[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), zmm3))
            zmm0 = __pinsrw_xmmdq_memw_immb(
                __pinsrw_xmmdq_memw_immb(
                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rdi_2 + 4)), *(arg4 + rbx_7 + 4), 1), 
                    *(arg4 + rcx_13 + 4), 2), 
                *(arg4 + rbp_5 + 4), 3)
            float temp0_159[0x4] = _mm_div_ps(temp0_155, zmm4)
            float temp0_163[0x4] =
                _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), zmm3)), zmm4)
            zmm0 = data_143442710
            zmm9 = _mm_mul_ps(zmm9, zmm0)
            zmm8 = _mm_mul_ps(temp0_159, zmm0)
            zmm5 = _mm_mul_ps(temp0_163, zmm0)
        else
            zmm8 = zx.o(0)
            zmm9 = zx.o(0)
            
            if (r13.d == 3)
                zmm4 = *(arg4 + rbx_4 + 4)
                float temp0_83[0x4] = _mm_unpacklo_ps(*(arg4 + rsi_3), (*(arg4 + rbx_4))[0].q)
                float temp0_84[0x4] = _mm_unpacklo_ps(*(arg4 + rsi_3 + 4), zmm4[0].q)
                var_230.o = zmm6
                zmm6 = *(arg4 + rdi_1 + 4)
                zmm8 = _mm_unpacklo_ps(*(arg4 + r11_3), (*(arg4 + rdi_1))[0].q)[0].q
                    | temp0_83[0].q << 0x40
                arg8 = _mm_unpacklo_ps(*(arg4 + r11_3 + 4), zmm6[0].q)[0].q | temp0_84[0].q << 0x40
                zmm14 = arg7
                arg7 = _mm_unpacklo_ps(*(arg4 + r11_3 + 8), (*(arg4 + rdi_1 + 8))[0].q)
                float temp0_88[0x4] =
                    _mm_unpacklo_ps(*(arg4 + rsi_3 + 8), (*(arg4 + rbx_4 + 8))[0].q)
                arg7 = arg7[0].q | temp0_88[0].q << 0x40
                float temp0_89[0x4] =
                    _mm_unpacklo_ps(*(arg4 + r11_3 + 0xc), (*(arg4 + rdi_1 + 0xc))[0].q)
                float temp0_90[0x4] =
                    _mm_unpacklo_ps(*(arg4 + rsi_3 + 0xc), (*(arg4 + rbx_4 + 0xc))[0].q)
                zmm5 = temp0_89[0].q | temp0_90[0].q << 0x40
                float temp0_91[0x4] =
                    _mm_unpacklo_ps(*(arg4 + r11_3 + 0x10), (*(arg4 + rdi_1 + 0x10))[0].q)
                float temp0_92[0x4] =
                    _mm_unpacklo_ps(*(arg4 + rsi_3 + 0x10), (*(arg4 + rbx_4 + 0x10))[0].q)
                zmm4 = temp0_91[0].q | temp0_92[0].q << 0x40
                float temp0_93[0x4] =
                    _mm_unpacklo_ps(*(arg4 + r11_3 + 0x14), (*(arg4 + rdi_1 + 0x14))[0].q)
                float temp0_94[0x4] =
                    _mm_unpacklo_ps(*(arg4 + rsi_3 + 0x14), (*(arg4 + rbx_4 + 0x14))[0].q)
                zmm6 = temp0_93[0].q | temp0_94[0].q << 0x40
                zmm0 = _mm_add_epi64(_mm_add_epi64(arg9, zmm11), arg6)
                zmm2 = _mm_add_epi64(_mm_add_epi64(zmm1, zmm13), zmm3)
                int64_t rax_3 = zmm2[0].q
                int64_t rcx_11 = _mm_shuffle_epi32(zmm2, 0x4e)[0].q
                int64_t rbp_3 = zmm0[0].q
                int64_t rbx_5 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                zmm0 = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(zx.o(*(arg4 + rax_3)), zx.o(*(arg4 + rcx_11))[0].q), 
                    _mm_unpacklo_epi32(zx.o(*(arg4 + rbp_3)), zx.o(*(arg4 + rbx_5))[0].q)[0].q)
                zmm2 = zmm0
                zmm9 = _mm_add_ps(
                    _mm_mul_ps(
                        __divps_xmmps_memps(
                            _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                data_143442490)), 
                            data_1434426a0), 
                        zmm5), 
                    zmm8)
                zmm3 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                zmm0 = data_143442440
                float temp0_111[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm3, zmm0))
                zmm3 = data_143442690
                zmm8 = _mm_add_ps(_mm_mul_ps(_mm_div_ps(temp0_111, zmm3), zmm4), arg8)
                arg8 = _mm_cmpeq_epi32(arg8, arg8)
                float temp0_120[0x4] = _mm_mul_ps(
                    _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm2, 0x15), zmm0)), 
                        zmm3), 
                    zmm6)
                zmm6 = var_230.o
                zmm5 = _mm_add_ps(temp0_120, arg7)
                arg7 = zmm14
                zmm14 = arg10
        
        var_230.o = arg7
        arg7 = __pcmpeqd_xmmdq_memdq(arg7, var_250) ^ arg8
        char temp0_168 = _mm_movemask_ps(arg7)
        
        if (temp0_168 == 0)
            arg9 = var_240.o
            arg7 = var_230.o
            arg8 = var_260_1
            zmm11 = var_280_1
        else
            float var_270[0x4]
            uint128_t var_220
            float var_210[0x4]
            int64_t rcx_7
            int64_t rsi_2
            int64_t rdi_5
            int64_t r11_2
            
            if (r13.d u> 6)
            label_140147ab0:
                uint64_t rcx_16 = zx.q(temp0_168)
                rdi_5 = rcx_16 & 1
                arg7 = var_230.o
                
                if (rdi_5 == 0)
                    zmm6 = var_210
                else
                    zmm6 = var_210
                    zmm6[0] = zx.o(0)[0]
                
                zmm4 = var_220
                zmm2 = var_270
                arg9 = var_240.o
                zmm11 = var_280_1
                
                if (rdi_5 != 0)
                    zmm4[0] = zx.o(0)[0]
                    zmm14 = arg10
                    arg8 = var_260_1
                    
                    if (rdi_5 != 0)
                        goto label_140148106
                    
                    goto label_140148097
                
                zmm14 = arg10
                arg8 = var_260_1
                bool cond:37_1
                bool cond:38_1
                bool cond:41_1
                bool cond:42_1
                
                if (rdi_5 != 0)
                label_140148106:
                    zmm2[0] = 0
                    r11_2 = rcx_16 & 2
                    cond:37_1 = r11_2 == 0
                    cond:38_1 = r11_2 != 0
                    cond:41_1 = r11_2 == 0
                    cond:42_1 = r11_2 != 0
                    
                    if (r11_2 != 0)
                        goto label_1401480a8
                    
                    goto label_140148113
                
            label_140148097:
                r11_2 = rcx_16 & 2
                cond:37_1 = r11_2 == 0
                cond:38_1 = r11_2 != 0
                cond:41_1 = r11_2 == 0
                cond:42_1 = r11_2 != 0
                
                if (r11_2 == 0)
                label_140148113:
                    
                    if (not(cond:37_1))
                    label_140148120:
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm4, 0), zmm4, 0xe2)
                        
                        if (cond:42_1)
                            goto label_1401480ba
                        
                        goto label_140148128
                else
                label_1401480a8:
                    zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm6, 0), zmm6, 0xe2)
                    
                    if (cond:38_1)
                        goto label_140148120
                
                bool cond:65_1
                bool cond:66_1
                bool cond:67_1
                bool cond:68_1
                
                if (not(cond:41_1))
                label_1401480ba:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(0), zmm2, 0), zmm2, 0xe2)
                    rsi_2 = rcx_16 & 4
                    cond:65_1 = rsi_2 == 0
                    cond:66_1 = rsi_2 != 0
                    cond:67_1 = rsi_2 == 0
                    cond:68_1 = rsi_2 != 0
                    
                    if (rsi_2 != 0)
                        goto label_140148135
                    
                    goto label_1401480c6
                
            label_140148128:
                rsi_2 = rcx_16 & 4
                cond:65_1 = rsi_2 == 0
                cond:66_1 = rsi_2 != 0
                cond:67_1 = rsi_2 == 0
                cond:68_1 = rsi_2 != 0
                
                if (rsi_2 == 0)
                label_1401480c6:
                    
                    if (not(cond:65_1))
                    label_1401480cf:
                        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(0), zmm4, 0x30), 0x84)
                        
                        if (cond:68_1)
                            goto label_140148144
                        
                        goto label_1401480d5
                else
                label_140148135:
                    zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zx.o(0), zmm6, 0x30), 0x84)
                    
                    if (cond:66_1)
                        goto label_1401480cf
                
                bool cond:88_1
                bool cond:89_1
                bool cond:90_1
                bool cond:91_1
                
                if (not(cond:67_1))
                label_140148144:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x30), 0x84)
                    rcx_7 = rcx_16 & 8
                    cond:88_1 = rcx_7 == 0
                    cond:89_1 = rcx_7 != 0
                    cond:90_1 = rcx_7 == 0
                    cond:91_1 = rcx_7 == 0
                    
                    if (rcx_7 != 0)
                        goto label_1401480e2
                    
                    goto label_14014814e
                
            label_1401480d5:
                rcx_7 = rcx_16 & 8
                cond:88_1 = rcx_7 == 0
                cond:89_1 = rcx_7 != 0
                cond:90_1 = rcx_7 == 0
                cond:91_1 = rcx_7 == 0
                
                if (rcx_7 != 0)
                label_1401480e2:
                    zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zx.o(0), zmm6, 0x20), 0x24)
                    
                    if (cond:89_1)
                        goto label_140148157
                    
                    goto label_1401480e8
                
            label_14014814e:
                
                if (cond:88_1)
                label_1401480e8:
                    
                    if (not(cond:90_1))
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
                else
                label_140148157:
                    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zx.o(0), zmm4, 0x20), 0x24)
                    
                    if (not(cond:91_1))
                        zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zx.o(0), zmm2, 0x20), 0x24)
            else
                zmm2 = var_250
                zmm14 = _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(__pmuludq_xmmdq_memdq(zmm2, var_1f0_1), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm2, 0xf5), zmm6), 0xe8)[0]
                        .q)
                zmm0 = _mm_cmpgt_epi32(zx.o(0), zmm14)
                arg8 = _mm_shuffle_epi32(zmm14, 0x4e)
                zmm14 = _mm_unpacklo_epi32(zmm14, zmm0[0].q)
                arg8 = _mm_unpacklo_epi32(arg8, _mm_cmpgt_epi32(zx.o(0), arg8)[0].q)
                
                switch (r13.d)
                    case 0, 1
                        zmm1 = _mm_add_epi64(zmm1, zmm13)
                        arg9 = _mm_add_epi64(_mm_add_epi64(arg9, zmm11), arg8)
                        zmm1 = _mm_add_epi64(zmm1, zmm14)
                        zmm0 = _mm_shuffle_epi32(arg7, 0x50)
                        zmm1 &= zmm0
                        zmm3 = _mm_shuffle_epi32(arg7, 0xfa)
                        arg9 &= zmm3
                        int64_t rax_11 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                        void* rbp_6 = arg4 + rax_11
                        arg6 = *(arg4 + rax_11)
                        int64_t rax_12 = arg9[0].q
                        void* rdi_3 = arg4 + rax_12
                        zmm13 = *(arg4 + rax_12)
                        int64_t rax_13 = _mm_shuffle_epi32(arg9, 0x4e)[0].q
                        void* rsi_4 = arg4 + rax_13
                        arg7 = *(arg4 + rax_13)
                        zmm4 = data_1434426c0
                        zmm2 = zmm0 & zmm4
                        zmm6 = zmm3 & zmm4
                        void* rbx_9 = zmm1.q + arg4
                        arg8 = *(zmm2[0].q + rbx_9)
                        zmm1 = *(_mm_shuffle_epi32(zmm2, 0x4e).q + rbp_6)
                        zmm14 = *(zmm6[0].q + rdi_3)
                        zmm11 = *(_mm_shuffle_epi32(zmm6, 0x4e)[0].q + rsi_4)
                        zmm2 = data_1434426e0
                        zmm0 &= zmm2
                        zmm3 &= zmm2
                        zmm6 = *(zmm0[0].q + rbx_9)
                        zmm2 = *(_mm_shuffle_epi32(zmm0, 0x4e)[0].q + rbp_6)
                        arg9 = *(zmm3[0].q + rdi_3)
                        zmm3 = zx.o(*(_mm_shuffle_epi32(zmm3, 0x4e)[0].q + rsi_4))
                        uint64_t rcx_15 = zx.q(temp0_168)
                        rdi_5 = rcx_15 & 1
                        
                        if (rdi_5 != 0)
                            var_210[0] = (*rbx_9)[0]
                        
                        if (rdi_5 == 0)
                            zmm4 = var_220
                            
                            if (rdi_5 != 0)
                                var_270[0] = zmm6[0]
                        else
                            zmm0 = var_220
                            zmm0[0] = arg8[0]
                            zmm4 = zmm0
                            
                            if (rdi_5 != 0)
                                var_270[0] = zmm6[0]
                        
                        zmm6 = var_210
                        r11_2 = rcx_15 & 2
                        
                        if (r11_2 == 0)
                            arg8 = var_260_1
                            
                            if (r11_2 != 0)
                            label_140147fa1:
                                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm4, 0), zmm4, 0xe2)
                                
                                if (r11_2 != 0)
                                    goto label_140147f72
                                
                                goto label_140147fa6
                        else
                            arg6 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, zmm6, 0), zmm6, 0xe2)
                            zmm6 = arg6
                            arg8 = var_260_1
                            
                            if (r11_2 != 0)
                                goto label_140147fa1
                        
                        bool cond:69_1
                        bool cond:78_1
                        bool cond:79_1
                        
                        if (r11_2 == 0)
                        label_140147fa6:
                            zmm2 = var_270
                            rsi_2 = rcx_15 & 4
                            cond:69_1 = rsi_2 == 0
                            cond:78_1 = rsi_2 == 0
                            cond:79_1 = rsi_2 != 0
                            
                            if (rsi_2 != 0)
                                zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm13, zmm6, 0x30), 0x84)
                        else
                        label_140147f72:
                            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, var_270, 0), var_270, 0xe2)
                            rsi_2 = rcx_15 & 4
                            cond:69_1 = rsi_2 == 0
                            cond:78_1 = rsi_2 == 0
                            cond:79_1 = rsi_2 != 0
                            
                            if (rsi_2 != 0)
                                zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm13, zmm6, 0x30), 0x84)
                        
                        if (not(cond:69_1))
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm14, zmm4, 0x30), 0x84)
                            zmm14 = arg10
                            
                            if (cond:79_1)
                                goto label_140148021
                            
                            goto label_140147fd6
                        
                        zmm14 = arg10
                        bool cond:92_1
                        bool cond:93_1
                        bool cond:100_1
                        bool cond:101_1
                        
                        if (not(cond:78_1))
                        label_140148021:
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg9, zmm2, 0x30), 0x84)
                            arg9 = var_240.o
                            rcx_7 = rcx_15 & 8
                            cond:92_1 = rcx_7 == 0
                            cond:93_1 = rcx_7 != 0
                            cond:100_1 = rcx_7 != 0
                            cond:101_1 = rcx_7 == 0
                            
                            if (rcx_7 != 0)
                                goto label_140147fe7
                            
                            goto label_140148032
                        
                    label_140147fd6:
                        arg9 = var_240.o
                        rcx_7 = rcx_15 & 8
                        cond:92_1 = rcx_7 == 0
                        cond:93_1 = rcx_7 != 0
                        cond:100_1 = rcx_7 != 0
                        cond:101_1 = rcx_7 == 0
                        
                        if (rcx_7 != 0)
                        label_140147fe7:
                            zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(arg7, zmm6, 0x20), 0x24)
                            arg7 = var_230.o
                            
                            if (cond:93_1)
                                goto label_14014803f
                            
                            goto label_140147ff4
                        
                    label_140148032:
                        arg7 = var_230.o
                        
                        if (cond:92_1)
                        label_140147ff4:
                            zmm11 = var_280_1
                            
                            if (cond:100_1)
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm3, zmm2, 0x20), 0x24)
                        else
                        label_14014803f:
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm11, zmm4, 0x20), 0x24)
                            zmm11 = var_280_1
                            
                            if (not(cond:101_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm3, zmm2, 0x20), 0x24)
                    case 2
                        zmm1 = _mm_add_epi64(zmm1, zmm13)
                        arg9 = _mm_add_epi64(_mm_add_epi64(arg9, zmm11), arg8)
                        zmm1 = _mm_add_epi64(zmm1, zmm14)
                        zmm2 = _mm_shuffle_epi32(arg7, 0x50)
                        zmm1 &= zmm2
                        zmm0 = _mm_shuffle_epi32(arg7, 0xfa)
                        arg9 &= zmm0
                        int64_t r11_4 = zmm1.q
                        void* rbp_7 = arg4 + r11_4
                        int64_t rbx_10 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        void* rsi_5 = arg4 + rbx_10
                        int64_t rdi_7 = arg9[0].q
                        arg7 = data_1434426b0
                        zmm1 = zmm2 & arg7
                        void* rax_22 = zmm1.q
                        int16_t* rax_24 = _mm_shuffle_epi32(zmm1, 0x4e).q
                        zmm1 = data_1434426c0
                        arg6 = zmm1
                        zmm2 &= zmm1
                        zmm3 =
                            __pinsrw_xmmdq_memw_immb(zx.o(*(rax_22 + rbp_7)), *(rax_24 + rsi_5), 1)
                        uint32_t rax_26 = zx.d(*(zmm2[0].q + rbp_7))
                        void* rbp_8 = arg4 + rdi_7
                        zmm1 = _mm_shuffle_epi32(arg9, 0x4e)
                        zmm6 = __pinsrw_xmmdq_memw_immb(zx.o(rax_26), 
                            *(_mm_shuffle_epi32(zmm2, 0x4e)[0].q + rsi_5), 1)
                        zmm4 = zmm0 & arg7
                        zmm0 &= arg6
                        int16_t* rsi_6 = zmm0[0].q
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(zmm4[0].q + rbp_8), 2)
                        zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(rsi_6 + rbp_8), 2)
                        int64_t rax_29 = zmm1.q
                        void* rsi_7 = arg4 + rax_29
                        int16_t* rbp_9 = _mm_shuffle_epi32(zmm4, 0x4e).q
                        zmm0 = _mm_shuffle_epi32(zmm0, 0x4e)
                        zmm3 = __pinsrw_xmmdq_memw_immb(zmm3, *(rbp_9 + rsi_7), 3)
                        zmm6 = __pinsrw_xmmdq_memw_immb(zmm6, *(zmm0[0].q + rsi_7), 3)
                        zmm0 = _mm_unpacklo_epi16(
                            __pinsrw_xmmdq_memw_immb(
                                __pinsrw_xmmdq_memw_immb(
                                    __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + r11_4)), 
                                        *(arg4 + rbx_10), 1), 
                                    *(arg4 + rdi_7), 2), 
                                *(arg4 + rax_29), 3), 
                            0)
                        zmm1 = data_1434424d0
                        arg6 = zmm1
                        float temp0_215[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(zmm0, zmm1))
                        zmm0 = data_1434426d0
                        float temp0_216[0x4] = _mm_div_ps(temp0_215, zmm0)
                        zmm1 = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm3, 0), zmm1)), zmm0)
                        float temp0_223[0x4] =
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm6, 0), arg6))
                        float temp0_224[0x4] = __mulps_xmmps_memps(temp0_216, data_143442710)
                        uint64_t rcx_17 = zx.q(temp0_168)
                        rdi_5 = rcx_17 & 1
                        
                        if (rdi_5 == 0)
                            zmm6 = var_210
                        else
                            zmm6 = var_210
                            zmm6[0] = temp0_224[0]
                        
                        zmm4 = var_220
                        arg9 = var_240.o
                        arg7 = var_230.o
                        zmm11 = var_280_1
                        float temp0_315[0x4] = __divps_xmmps_memps(temp0_223, data_1434426d0)
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143442710)
                        zmm14 = arg10
                        
                        if (rdi_5 != 0)
                            zmm4[0] = zmm1.d
                            zmm0 = __mulps_xmmps_memps(temp0_315, data_143442710)
                            
                            if (rdi_5 != 0)
                                goto label_140148259
                            
                            goto label_1401481bb
                        
                        zmm0 = __mulps_xmmps_memps(temp0_315, data_143442710)
                        bool cond:45_1
                        bool cond:46_1
                        bool cond:57_1
                        bool cond:58_1
                        
                        if (rdi_5 != 0)
                        label_140148259:
                            var_270[0] = zmm0[0]
                            r11_2 = rcx_17 & 2
                            cond:45_1 = r11_2 == 0
                            cond:46_1 = r11_2 != 0
                            cond:57_1 = r11_2 == 0
                            cond:58_1 = r11_2 != 0
                            
                            if (r11_2 != 0)
                                goto label_1401481d0
                            
                            goto label_14014826f
                        
                    label_1401481bb:
                        r11_2 = rcx_17 & 2
                        cond:45_1 = r11_2 == 0
                        cond:46_1 = r11_2 != 0
                        cond:57_1 = r11_2 == 0
                        cond:58_1 = r11_2 != 0
                        
                        if (r11_2 == 0)
                        label_14014826f:
                            
                            if (not(cond:45_1))
                            label_140148280:
                                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm4, 1), zmm4, 0xe2)
                                
                                if (cond:58_1)
                                    goto label_1401481e2
                                
                                goto label_14014828c
                        else
                        label_1401481d0:
                            zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_224, zmm6, 1), zmm6, 0xe2)
                            
                            if (cond:46_1)
                                goto label_140148280
                        
                        bool cond:70_1
                        bool cond:71_1
                        bool cond:80_1
                        bool cond:81_1
                        
                        if (not(cond:57_1))
                        label_1401481e2:
                            arg6 = var_270
                            var_270 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, arg6, 1), arg6, 0xe2)
                            rsi_2 = rcx_17 & 4
                            cond:70_1 = rsi_2 == 0
                            cond:71_1 = rsi_2 != 0
                            cond:80_1 = rsi_2 == 0
                            cond:81_1 = rsi_2 != 0
                            
                            if (rsi_2 != 0)
                                goto label_14014829d
                            
                            goto label_140148201
                        
                    label_14014828c:
                        rsi_2 = rcx_17 & 4
                        cond:70_1 = rsi_2 == 0
                        cond:71_1 = rsi_2 != 0
                        cond:80_1 = rsi_2 == 0
                        cond:81_1 = rsi_2 != 0
                        
                        if (rsi_2 == 0)
                        label_140148201:
                            
                            if (not(cond:70_1))
                            label_14014820e:
                                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm4, 0x32), 0x84)
                                
                                if (cond:81_1)
                                    goto label_1401482b0
                                
                                goto label_140148218
                        else
                        label_14014829d:
                            zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(temp0_224, zmm6, 0x32), 0x84)
                            
                            if (cond:71_1)
                                goto label_14014820e
                        
                        bool cond:94_1
                        bool cond:95_1
                        bool cond:102_1
                        bool cond:103_1
                        
                        if (not(cond:80_1))
                        label_1401482b0:
                            arg6 = var_270
                            arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm0, arg6, 0x32), 0x84)
                            var_270 = arg6
                            arg8 = var_260_1
                            rcx_7 = rcx_17 & 8
                            cond:94_1 = rcx_7 == 0
                            cond:95_1 = rcx_7 != 0
                            cond:102_1 = rcx_7 == 0
                            cond:103_1 = rcx_7 == 0
                            
                            if (rcx_7 != 0)
                                goto label_14014822d
                            
                            goto label_1401482d3
                        
                    label_140148218:
                        arg8 = var_260_1
                        rcx_7 = rcx_17 & 8
                        cond:94_1 = rcx_7 == 0
                        cond:95_1 = rcx_7 != 0
                        cond:102_1 = rcx_7 == 0
                        cond:103_1 = rcx_7 == 0
                        
                        if (rcx_7 != 0)
                        label_14014822d:
                            zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(temp0_224, zmm6, 0x23), 0x24)
                            zmm2 = var_270
                            
                            if (cond:95_1)
                                goto label_1401482e2
                            
                            goto label_14014823c
                        
                    label_1401482d3:
                        zmm2 = var_270
                        
                        if (cond:94_1)
                        label_14014823c:
                            
                            if (not(cond:102_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x23), 0x24)
                        else
                        label_1401482e2:
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm4, 0x23), 0x24)
                            
                            if (not(cond:103_1))
                                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x23), 0x24)
                    case 3
                        zmm2 = var_1e0_1 & arg7
                        int64_t rax_31 = sx.q(zmm2[0])
                        void* rbx_11 = arg4 + rax_31
                        zmm3 = *(arg4 + rax_31)
                        int64_t rax_33 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
                        void* rdi_9 = arg4 + rax_33
                        float temp0_226[0x4] = _mm_unpacklo_ps(zmm3, (*(arg4 + rax_33))[0].q)
                        int64_t rax_35 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
                        void* rsi_8 = arg4 + rax_35
                        zmm0 = *(arg4 + rax_35)
                        int64_t rax_37 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
                        void* rbp_12 = arg4 + rax_37
                        float temp0_229[0x4] = _mm_unpacklo_ps(zmm0, (*(arg4 + rax_37))[0].q)
                        float var_1b0_1[0x4] = temp0_226[0].q | temp0_229[0].q << 0x40
                        zmm0 = arg7 & data_142fc95e0
                        float temp0_231[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_11), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
                        float temp0_234[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_8), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rbp_12))[0].q)
                        float var_1e0_2[0x4] = temp0_231[0].q | temp0_234[0].q << 0x40
                        zmm0 = arg7 & data_142fc95f0
                        float temp0_236[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_11), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
                        float temp0_239[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_8), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rbp_12))[0].q)
                        zmm0 = arg7 & data_143442650
                        float temp0_241[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_11), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
                        float temp0_244[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_8), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rbp_12))[0].q)
                        zmm6 = temp0_241[0].q | temp0_244[0].q << 0x40
                        zmm0 = arg7 & data_143442660
                        float temp0_246[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_11), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
                        float temp0_249[0x4] = _mm_unpacklo_ps(
                            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_8), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rbp_12))[0].q)
                        zmm3 = temp0_246[0].q | temp0_249[0].q << 0x40
                        zmm0 = arg7 & data_143442670
                        float temp0_251[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_11), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_9))[0].q)
                        arg6 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_8), 
                            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rbp_12))[0].q)
                        zmm4 = temp0_251[0].q | arg6[0].q << 0x40
                        zmm1 = _mm_add_epi64(zmm1, zmm13)
                        arg9 = _mm_add_epi64(_mm_add_epi64(arg9, zmm11), arg8)
                        zmm1 = _mm_add_epi64(zmm1, zmm14)
                        zmm0 = _mm_shuffle_epi32(arg7, 0x50) & zmm1
                        zmm1 = _mm_shuffle_epi32(arg7, 0xfa) & arg9
                        int64_t rax_58 = zmm0[0].q
                        int64_t rbp_13 = _mm_shuffle_epi32(zmm0, 0x4e)[0].q
                        int64_t rdi_10 = _mm_shuffle_epi32(zmm1, 0x4e)[0].q
                        zmm0 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zx.o(*(arg4 + rax_58)), zx.q(*(arg4 + rbp_13))), 
                            _mm_unpacklo_epi32(zx.o(*(arg4 + zmm1.q)), zx.o(*(arg4 + rdi_10))[0].q)
                                .q)
                        float temp0_270[0x4] = __addps_xmmps_memps(
                            _mm_mul_ps(
                                __divps_xmmps_memps(
                                    _mm_cvtepi32_ps(__paddd_xmmdq_memdq(zmm0 & data_143442680, 
                                        data_143442490)), 
                                    data_1434426a0), 
                                zmm6), 
                            var_1b0_1)
                        zmm1 = _mm_srli_epi32(zmm0, 0xa) & data_143442480
                        zmm6 = data_143442440
                        zmm1 = _mm_cvtepi32_ps(_mm_add_epi32(zmm1, zmm6))
                        zmm2 = data_143442690
                        zmm1 = _mm_mul_ps(_mm_div_ps(zmm1, zmm2), zmm3)
                        float temp0_279[0x4] = _mm_div_ps(
                            _mm_cvtepi32_ps(_mm_add_epi32(_mm_srli_epi32(zmm0, 0x15), zmm6)), zmm2)
                        uint64_t rcx_18 = zx.q(temp0_168)
                        rdi_5 = rcx_18 & 1
                        
                        if (rdi_5 == 0)
                            zmm6 = var_210
                        else
                            zmm6 = var_210
                            zmm6[0] = temp0_270[0]
                        
                        zmm2 = var_270
                        arg9 = var_240.o
                        arg7 = var_230.o
                        zmm11 = var_280_1
                        arg6 = __unpcklpd_xmmpd_memdq(temp0_236, temp0_239)
                        float temp0_338[0x4] = _mm_mul_ps(zmm4, temp0_279)
                        float temp0_339[0x4] = _mm_add_ps(var_1e0_2, zmm1)
                        zmm14 = arg10
                        arg8 = var_260_1
                        
                        if (rdi_5 != 0)
                            zmm1.d = temp0_339[0]
                            var_220 = zmm1
                            arg6 = _mm_add_ps(arg6, temp0_338)
                            
                            if (rdi_5 != 0)
                                goto label_140147154
                            
                            goto label_140148362
                        
                        arg6 = _mm_add_ps(arg6, temp0_338)
                        bool cond:47_1
                        bool cond:48_1
                        bool cond:59_1
                        bool cond:60_1
                        
                        if (rdi_5 != 0)
                        label_140147154:
                            zmm2[0] = arg6[0]
                            zmm4 = var_220
                            r11_2 = rcx_18 & 2
                            cond:47_1 = r11_2 == 0
                            cond:48_1 = r11_2 != 0
                            cond:59_1 = r11_2 == 0
                            cond:60_1 = r11_2 != 0
                            
                            if (r11_2 != 0)
                                goto label_14014837f
                            
                            goto label_14014716a
                        
                    label_140148362:
                        zmm4 = var_220
                        r11_2 = rcx_18 & 2
                        cond:47_1 = r11_2 == 0
                        cond:48_1 = r11_2 != 0
                        cond:59_1 = r11_2 == 0
                        cond:60_1 = r11_2 != 0
                        
                        if (r11_2 == 0)
                        label_14014716a:
                            
                            if (not(cond:47_1))
                            label_14014717b:
                                zmm4 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_339, zmm4, 1), zmm4, 0xe2)
                                
                                if (cond:60_1)
                                    goto label_140148399
                                
                                goto label_140147187
                        else
                        label_14014837f:
                            zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_270, zmm6, 1), zmm6, 0xe2)
                            
                            if (cond:48_1)
                                goto label_14014717b
                        
                        bool cond:72_1
                        bool cond:73_1
                        bool cond:82_1
                        bool cond:83_1
                        
                        if (not(cond:59_1))
                        label_140148399:
                            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, zmm2, 1), zmm2, 0xe2)
                            rsi_2 = rcx_18 & 4
                            cond:72_1 = rsi_2 == 0
                            cond:73_1 = rsi_2 != 0
                            cond:82_1 = rsi_2 == 0
                            cond:83_1 = rsi_2 != 0
                            
                            if (rsi_2 != 0)
                                goto label_140147198
                            
                            goto label_1401483a9
                        
                    label_140147187:
                        rsi_2 = rcx_18 & 4
                        cond:72_1 = rsi_2 == 0
                        cond:73_1 = rsi_2 != 0
                        cond:82_1 = rsi_2 == 0
                        cond:83_1 = rsi_2 != 0
                        
                        if (rsi_2 == 0)
                        label_1401483a9:
                            
                            if (not(cond:72_1))
                            label_1401483b6:
                                zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(temp0_339, zmm4, 0x32), 
                                    0x84)
                                
                                if (cond:83_1)
                                    goto label_1401471af
                                
                                goto label_1401483c0
                        else
                        label_140147198:
                            zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(temp0_270, zmm6, 0x32), 0x84)
                            
                            if (cond:73_1)
                                goto label_1401483b6
                        
                        bool cond:96_1
                        bool cond:97_1
                        bool cond:104_1
                        bool cond:105_1
                        
                        if (not(cond:82_1))
                        label_1401471af:
                            zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg6, zmm2, 0x32), 0x84)
                            rcx_7 = rcx_18 & 8
                            cond:96_1 = rcx_7 == 0
                            cond:97_1 = rcx_7 != 0
                            cond:104_1 = rcx_7 == 0
                            cond:105_1 = rcx_7 == 0
                            
                            if (rcx_7 != 0)
                                goto label_1401483ce
                            
                            goto label_1401471bd
                        
                    label_1401483c0:
                        rcx_7 = rcx_18 & 8
                        cond:96_1 = rcx_7 == 0
                        cond:97_1 = rcx_7 != 0
                        cond:104_1 = rcx_7 == 0
                        cond:105_1 = rcx_7 == 0
                        
                        if (rcx_7 != 0)
                        label_1401483ce:
                            zmm6 = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(temp0_270, zmm6, 0x23), 0x24)
                            
                            if (cond:97_1)
                                goto label_1401471c7
                            
                            goto label_1401483d8
                        
                    label_1401471bd:
                        
                        if (cond:96_1)
                        label_1401483d8:
                            
                            if (not(cond:104_1))
                                arg6 = _mm_shuffle_ps(arg6, zmm2, 0x23)
                                zmm2 = _mm_shuffle_ps(zmm2, arg6, 0x24)
                        else
                        label_1401471c7:
                            zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(temp0_339, zmm4, 0x23), 0x24)
                            
                            if (not(cond:105_1))
                                arg6 = _mm_shuffle_ps(arg6, zmm2, 0x23)
                                zmm2 = _mm_shuffle_ps(zmm2, arg6, 0x24)
                    case 4, 5, 6
                        goto label_140147ab0
            
            var_210 = zmm6
            float temp0_351[0x4] = _mm_sub_ps(zmm6, zmm9)
            var_220 = zmm4
            float temp0_352[0x4] = _mm_sub_ps(zmm4, zmm8)
            float temp0_353[0x4] = _mm_mul_ps(temp0_351, arg9)
            zmm1 = zmm9
            
            if (rdi_5 != 0)
                zmm1.d = zmm9.d f+ temp0_353[0]
            
            var_270 = zmm2
            float temp0_354[0x4] = _mm_sub_ps(zmm2, zmm5)
            float temp0_355[0x4] = _mm_mul_ps(temp0_352, arg9)
            zmm2 = zmm8
            
            if (rdi_5 != 0)
                zmm2 = zmm8
                zmm2[0] = zmm2[0] + temp0_355[0]
                zmm4 = _mm_mul_ps(temp0_354, arg9)
                zmm0 = zmm5
                
                if (rdi_5 != 0)
                    goto label_1401470bd
                
                goto label_140148448
            
            zmm4 = _mm_mul_ps(temp0_354, arg9)
            zmm0 = zmm5
            bool cond:111_1
            bool cond:112_1
            bool cond:113_1
            bool cond:114_1
            
            if (rdi_5 != 0)
            label_1401470bd:
                zmm0 = zmm5
                zmm0[0] = zmm0[0] + zmm4[0]
                zmm9 = _mm_add_ps(zmm9, temp0_353)
                cond:111_1 = r11_2 == 0
                cond:112_1 = r11_2 != 0
                cond:113_1 = r11_2 == 0
                cond:114_1 = r11_2 != 0
                
                if (r11_2 != 0)
                    goto label_140148461
                
                goto label_1401470d1
            
        label_140148448:
            zmm9 = _mm_add_ps(zmm9, temp0_353)
            cond:111_1 = r11_2 == 0
            cond:112_1 = r11_2 != 0
            cond:113_1 = r11_2 == 0
            cond:114_1 = r11_2 != 0
            
            if (r11_2 != 0)
            label_140148461:
                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm1, 1), zmm1, 0xe2)
                zmm8 = _mm_add_ps(zmm8, temp0_355)
                
                if (cond:112_1)
                    goto label_1401470e7
                
                goto label_14014846e
            
        label_1401470d1:
            zmm8 = _mm_add_ps(zmm8, temp0_355)
            
            if (not(cond:111_1))
            label_1401470e7:
                zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm2, 1), zmm2, 0xe2)
                zmm5 = _mm_add_ps(zmm5, zmm4)
                
                if (cond:114_1)
                    goto label_140148482
                
                goto label_1401470f3
            
        label_14014846e:
            zmm5 = _mm_add_ps(zmm5, zmm4)
            bool cond:115_1
            bool cond:116_1
            bool cond:117_1
            bool cond:118_1
            
            if (not(cond:113_1))
            label_140148482:
                zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm0, 1), zmm0, 0xe2)
                cond:115_1 = rsi_2 == 0
                cond:116_1 = rsi_2 != 0
                cond:117_1 = rsi_2 == 0
                cond:118_1 = rsi_2 != 0
                
                if (rsi_2 != 0)
                    goto label_140147104
                
                goto label_14014848e
            
        label_1401470f3:
            cond:115_1 = rsi_2 == 0
            cond:116_1 = rsi_2 != 0
            cond:117_1 = rsi_2 == 0
            cond:118_1 = rsi_2 != 0
            
            if (rsi_2 == 0)
            label_14014848e:
                
                if (not(cond:115_1))
                label_14014849c:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x32), 0x84)
                    
                    if (cond:118_1)
                        goto label_14014711b
                    
                    goto label_1401484a6
            else
            label_140147104:
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm9, zmm1, 0x32), 0x84)
                
                if (cond:116_1)
                    goto label_14014849c
            
            bool cond:119_1
            bool cond:120_1
            bool cond:121_1
            bool cond:122_1
            
            if (not(cond:117_1))
            label_14014711b:
                zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm5, zmm0, 0x32), 0x84)
                cond:119_1 = rcx_7 == 0
                cond:120_1 = rcx_7 != 0
                cond:121_1 = rcx_7 == 0
                cond:122_1 = rcx_7 != 0
                
                if (rcx_7 != 0)
                    goto label_1401484b9
                
                goto label_140147128
            
        label_1401484a6:
            cond:119_1 = rcx_7 == 0
            cond:120_1 = rcx_7 != 0
            cond:121_1 = rcx_7 == 0
            cond:122_1 = rcx_7 != 0
            
            if (rcx_7 != 0)
            label_1401484b9:
                zmm9 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm9, zmm1, 0x23), 0x24)
                
                if (cond:120_1)
                    goto label_14014713c
                
                goto label_1401484c3
            
        label_140147128:
            zmm9 = zmm1
            
            if (cond:119_1)
            label_1401484c3:
                zmm8 = zmm2
                
                if (not(cond:121_1))
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm5, zmm0, 0x23), 0x24)
            else
            label_14014713c:
                zmm8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x23), 0x24)
                
                if (cond:122_1)
                    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm5, zmm0, 0x23), 0x24)
            
            zmm5 = zmm0
        
        zmm3 = zx.o(zmm5[0].q)
        float temp0_370[0x4] = __unpckhps_xmmps_memdq(zmm5, data_142d8f750)
        float temp0_371[0x4] = _mm_unpacklo_ps(zmm9, zmm8[0].q)
        float temp0_372[0x4] = _mm_unpackhi_ps(zmm9, zmm8)
        float temp0_373[0x4] = _mm_shuffle_ps(temp0_371, zmm3, 0x84)
        float var_120_1[0x4] = temp0_373
        float temp0_374[0x4] = _mm_shuffle_ps(temp0_371, zmm3, 0xde)
        float var_110_1[0x4] = temp0_374
        zmm1 = temp0_372.q | temp0_370[0].q << 0x40
        uint128_t var_100_1 = zmm1
        temp0_370[0].q = temp0_372 u>> 0x40
        int64_t rax_60 = sx.q(zmm11[0])
        zmm4 = _mm_shuffle_epi32(temp0_373, 0x4e)
        int64_t rax_62 = rax_60 * 0x30
        *(arg1 + rax_62 + 0x10) = zmm9[0]
        *(arg1 + rax_62 + 0x14) = zmm8[0]
        *(arg1 + rax_62 + 0x18) = zmm4[0]
        *(arg1 + rax_62 + 0x1c) = 0
        int64_t rax_64 = sx.q(_mm_shuffle_epi32(zmm11, 0x4e)[0])
        float temp0_377[0x4] = _mm_shuffle_ps(zmm8, zmm3, 0xd5)
        zmm3 = _mm_shuffle_epi32(temp0_374, 0x4e)
        int64_t rax_66 = rax_64 * 0x30
        *(arg1 + rax_66 + 0x10) = temp0_374[0]
        *(arg1 + rax_66 + 0x14) = temp0_377[0]
        *(arg1 + rax_66 + 0x18) = zmm3[0]
        *(arg1 + rax_66 + 0x1c) = 0
        int64_t rax_68 = sx.q(arg8[0])
        zmm2 = _mm_shuffle_epi32(zmm1, 0x4e)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
        int64_t rax_70 = rax_68 * 0x30
        *(arg1 + rax_70 + 0x10) = temp0_372[0]
        *(arg1 + rax_70 + 0x14) = zmm1.d
        *(arg1 + rax_70 + 0x18) = zmm2[0]
        *(arg1 + rax_70 + 0x1c) = 0
        *(arg1 + sx.q(_mm_shuffle_epi32(arg8, 0x4e)[0]) * 0x30 + 0x10) = temp0_370
        r10 += 4
        r14_1 += 0x20
        arg8 = _mm_cmpeq_epi32(arg8, arg8)
    while (r10 s< rcx_4)
    
    result = zx.q(arg13)
    
    if (r10 s< result.d)
        goto label_140148636
return result
