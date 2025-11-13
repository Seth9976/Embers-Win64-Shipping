// 函数: sub_1400d04ae
// 地址: 0x1400d04ae
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    float zmm12[0x4] = __return_addr.o
    float arg_10[0x4]
    float zmm13[0x4] = arg_10
    float zmm6[0x4] = *arg1
    float zmm9[0x4] = *(arg1 + 4)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    float temp0_2[0x4] = _mm_sub_ps(zmm12, temp0_1)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float temp0_4[0x4] = _mm_sub_ps(zmm13, temp0_3)
    float zmm5[0x4] = *(arg1 + 8)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    float temp0_6[0x4] = _mm_sub_ps(arg11, temp0_5)
    float zmm4[0x4] = *arg3
    float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_8[0x4] = _mm_div_ps(temp0_2, temp0_7)
    uint128_t zmm2 = *(arg3 + 8)
    int32_t zmm15[0x4] = _mm_cvttps_epi32(temp0_8)
    uint32_t zmm1[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), temp0_7), temp0_1)
    uint128_t zmm14 = __divps_xmmps_memps(*arg3 | zmm2.q << 0x40, data_142fc9600)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
    zmm1 = _mm_cmpeq_ps(_mm_add_ps(zmm1, temp0_14), zmm12, 1)
    float zmm0[0x4] = __paddd_xmmdq_memdq(zmm15, data_142d3f800)
    zmm4 = _mm_and_ps(zmm15, zmm1)
    uint32_t temp0_20[0x4] = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), zmm4)
    float zmm8[0x4] = *(arg3 + 4)
    float temp0_21[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_22[0x4] = _mm_div_ps(temp0_4, temp0_21)
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_24[0x4] = _mm_div_ps(temp0_6, zmm2)
    zmm6 = _mm_cvttps_epi32(temp0_22)
    float zmm3[0x4] = _mm_cvttps_epi32(temp0_24)
    float temp0_28[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_21)
    float temp0_30[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm3), zmm2)
    float temp0_31[0x4] = _mm_add_ps(temp0_28, temp0_3)
    float temp0_32[0x4] = _mm_add_ps(temp0_30, temp0_5)
    uint128_t zmm10 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
    float temp0_34[0x4] = _mm_add_ps(temp0_31, zmm10)
    zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
    __return_addr.o = temp0_20
    float temp0_36[0x4] = _mm_cmpeq_ps(temp0_34, zmm13, 1)
    
    if (_mm_movemask_ps(temp0_36) != 0)
        zmm15 = zmm6
    
    float temp0_38[0x4] = _mm_add_ps(temp0_32, zmm14)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_34, zmm13, 5)) != 0)
        zmm0 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)
    
    float temp0_42[0x4] = __subps_xmmps_memps(zmm12, arg17)
    arg17 = zmm13
    float temp0_43[0x4] = __subps_xmmps_memps(zmm13, arg18)
    zmm4 = _mm_and_ps(zmm15, temp0_36)
    zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_36, zmm0), zmm4)
    arg_10 = zmm9
    float temp0_47[0x4] = _mm_cmpeq_ps(temp0_38, arg11, 1)
    
    if (_mm_movemask_ps(temp0_47) != 0)
        zmm15 = zmm3
    
    float temp0_49[0x4] = __subps_xmmps_memps(arg11, arg12)
    float temp0_50[0x4] = _mm_mul_ps(temp0_42, temp0_42)
    float temp0_51[0x4] = _mm_mul_ps(temp0_43, temp0_43)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_38, arg11, 5)) != 0)
        zmm0 = __paddd_xmmdq_memdq(zmm3, data_142d3f800)
    
    zmm15 = _mm_and_ps(zmm15, temp0_47)
    zmm13 = _mm_or_ps(_mm_andnot_ps(temp0_47, zmm0), zmm15)
    float temp0_59[0x4] = _mm_add_ps(__addps_xmmps_memps(temp0_50, data_142d8f750), temp0_51)
    float temp0_62[0x4] =
        __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_20), temp0_7), temp0_1)
    float temp0_65[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_21), temp0_3)
    float temp0_68[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm2), temp0_5)
    float temp0_69[0x4] = _mm_add_ps(temp0_14, temp0_62)
    zmm10 = _mm_add_ps(zmm10, temp0_65)
    zmm14 = _mm_add_ps(zmm14, temp0_68)
    float temp0_72[0x4] = _mm_sub_ps(zmm12, temp0_69)
    float temp0_73[0x4] = _mm_sub_ps(arg17, zmm10)
    float temp0_74[0x4] = _mm_sub_ps(arg11, zmm14)
    float temp0_75[0x4] = _mm_div_ps(temp0_72, temp0_7)
    float temp0_76[0x4] = _mm_div_ps(temp0_73, temp0_21)
    float temp0_77[0x4] = _mm_div_ps(temp0_74, zmm2)
    float arg_40[0x4] = temp0_75
    float temp0_78[0x4] = _mm_mul_ps(temp0_49, temp0_49)
    int64_t rbx_1 = 0
    zmm3 = _mm_cmpeq_epi32(temp0_69, temp0_69)
    char i = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_20, zmm3))
    
    if (i == 0)
        break
    
    uint32_t arg_8
    float arg_c
    
    do
        if ((i & 1) == 0)
            if ((i & 2) != 0)
                goto label_1400d082f
            
            goto label_1400d0768
        
        *(&__return_addr + (rbx_1 << 2)) = 0
        
        if ((i & 2) != 0)
        label_1400d082f:
            *(&__return_addr:4 + (rbx_1 << 2)) = 0
            
            if ((i & 4) == 0)
                goto label_1400d0770
            
            goto label_1400d083f
        
    label_1400d0768:
        
        if ((i & 4) == 0)
        label_1400d0770:
            
            if ((i & 8) != 0)
                goto label_1400d084f
            
            goto label_1400d0778
        
    label_1400d083f:
        (&arg_8)[rbx_1] = 0
        
        if ((i & 8) != 0)
        label_1400d084f:
            (&arg_c)[rbx_1] = 0
            
            if ((i & 1) == 0)
                goto label_1400d0780
            
            goto label_1400d085f
        
    label_1400d0778:
        
        if ((i & 1) == 0)
        label_1400d0780:
            
            if ((i & 2) != 0)
                goto label_1400d086f
            
            goto label_1400d0788
        
    label_1400d085f:
        arg_40[rbx_1] = 0
        
        if ((i & 2) != 0)
        label_1400d086f:
            arg_40[1 + rbx_1] = 0
            
            if ((i & 4) == 0)
                goto label_1400d0790
            
            goto label_1400d087f
        
    label_1400d0788:
        
        if ((i & 4) != 0)
        label_1400d087f:
            arg_40[2 + rbx_1] = 0
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        else
        label_1400d0790:
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        
    label_1400d079c:
        int32_t rbp_1 = *(arg4 + rbx_1)
        char temp0_86 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
            _mm_shuffle_epi32(zx.o(rbp_1 - 1), 0), *(&__return_addr + (rbx_1 << 2))))
        
        if (temp0_86 != 0)
            if ((temp0_86 & 1) == 0)
                if ((temp0_86 & 2) != 0)
                    goto label_1400d08ab
                
                goto label_1400d07ce
            
            *(&__return_addr + (rbx_1 << 2)) = rbp_1 - 2
            
            if ((temp0_86 & 2) != 0)
            label_1400d08ab:
                *(&__return_addr:4 + (rbx_1 << 2)) = rbp_1 - 2
                
                if ((temp0_86 & 4) == 0)
                    goto label_1400d07d6
                
                goto label_1400d08b7
            
        label_1400d07ce:
            
            if ((temp0_86 & 4) == 0)
            label_1400d07d6:
                
                if ((temp0_86 & 8) != 0)
                    goto label_1400d08c3
                
                goto label_1400d07de
            
        label_1400d08b7:
            (&arg_8)[rbx_1] = rbp_1 - 2
            
            if ((temp0_86 & 8) != 0)
            label_1400d08c3:
                (&arg_c)[rbx_1] = rbp_1 - 2
                
                if ((temp0_86 & 1) == 0)
                    goto label_1400d07e6
                
                goto label_1400d08cf
            
        label_1400d07de:
            
            if ((temp0_86 & 1) == 0)
            label_1400d07e6:
                
                if ((temp0_86 & 2) != 0)
                    goto label_1400d08df
                
                goto label_1400d07ee
            
        label_1400d08cf:
            arg_40[rbx_1] = 0x3f800000
            
            if ((temp0_86 & 2) != 0)
            label_1400d08df:
                arg_40[1 + rbx_1] = 0x3f800000
                
                if ((temp0_86 & 4) == 0)
                    goto label_1400d07f6
                
                goto label_1400d08ef
            
        label_1400d07ee:
            
            if ((temp0_86 & 4) != 0)
            label_1400d08ef:
                arg_40[2 + rbx_1] = 0x3f800000
                
                if ((temp0_86 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
            else
            label_1400d07f6:
                
                if ((temp0_86 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
        
        if (rbx_1 == 8)
            break
        
        zmm1 = *(&arg_10 + (rbx_1 << 2))
        rbx_1 += 4
        i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm1, zmm3))
    while (i != 0)
    
    float temp0_87[0x4] = _mm_add_ps(temp0_59, temp0_78)
    zmm8 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm1 = __return_addr.o
    zmm15 = arg_10
    zmm9 = zmm13
    zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm1, 0xf5), zmm8), 0xe8)
    zmm13 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm1), 0xe8), zmm0[0].q)
    zmm5 = _mm_add_epi32(zmm13, zmm15)
    zmm2 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm14 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm2), 0xe8), 
        _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm5, 0xf5), zmm2), 0xe8)[0].q)
    zmm0 = _mm_add_epi32(zmm14, zmm9)
    float (* rbx_2)[0x4] = *(arg7 + 0x10)
    zmm0 = _mm_slli_epi32(zmm0, 2)
    int64_t rax_10 = sx.q(zmm0[0])
    int64_t rsi_2 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
    int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
    int64_t rbp_4 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
    zmm6 = *(rbx_2 + rbp_4 + 4)
    float temp0_108[0x4] = _mm_unpacklo_ps(*(rbx_2 + rdi_2), (*(rbx_2 + rbp_4))[0].q)
    float temp0_109[0x4] = _mm_unpacklo_ps(*(rbx_2 + rdi_2 + 4), zmm6[0].q)
    zmm12 = *(rbx_2 + rax_10 + 4)
    zmm0 = _mm_unpacklo_ps(*(rbx_2 + rax_10), (*(rbx_2 + rsi_2))[0].q)[0].q | temp0_108[0].q << 0x40
    zmm12 = _mm_unpacklo_ps(zmm12, (*(rbx_2 + rsi_2 + 4))[0].q)[0].q | temp0_109[0].q << 0x40
    zmm1 = _mm_sub_epi32(zmm1, zmm3)
    zmm4 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm1, 0xf5), zmm8), 0xe8)
    zmm1 = _mm_mul_epu32(zmm1, zmm8)
    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
    zmm6 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm1, 0xe8), zmm4[0].q)
    zmm1 = _mm_add_epi32(zmm6, zmm15)
    zmm4 = _mm_shuffle_epi32(zmm1, 0xf5)
    uint32_t temp0_128[0x4] = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm2), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm2), 0xe8)[0].q), 
            zmm9), 
        2)
    zmm5 = _mm_add_epi32(zmm5, zmm8)
    zmm4 = _mm_shuffle_epi32(zmm5, 0xf5)
    zmm10 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm2), 0xe8), 
        _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm2), 0xe8)[0].q)
    float temp0_137[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(temp0_128[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(temp0_128, 0xe5)[0])))[0].q)
    float temp0_140[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(temp0_128, 0x4e)[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(temp0_128, 0xe7)[0])))[0].q)
    float temp0_141[0x4] = _mm_sub_ps(temp0_137[0].q | temp0_140[0].q << 0x40, zmm0)
    float zmm11[0x4] = arg_40
    float temp0_143[0x4] = _mm_add_ps(_mm_mul_ps(temp0_141, zmm11), zmm0)
    int32_t temp0_144[0x4] = _mm_sub_epi32(zmm15, zmm3)
    zmm13 = _mm_add_epi32(zmm13, temp0_144)
    zmm0 = _mm_shuffle_epi32(zmm13, 0xf5)
    uint32_t temp0_153[0x4] = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm13, zmm2), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm2), 0xe8)[0].q), 
            zmm9), 
        2)
    float temp0_155[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(temp0_153[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(temp0_153, 0xe5)[0])))[0].q)
    float temp0_158[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(temp0_153, 0x4e)[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(temp0_153, 0xe7)[0])))[0].q)
    zmm0 = temp0_155[0].q | temp0_158[0].q << 0x40
    int32_t temp0_159[0x4] = _mm_add_epi32(temp0_144, zmm6)
    uint32_t temp0_160[0x4] = _mm_shuffle_epi32(temp0_159, 0xf5)
    zmm3 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_159, zmm2), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(temp0_160, zmm2), 0xe8)[0].q), 
            zmm9), 
        2)
    float temp0_169[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm3[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])))[0].q)
    zmm1 = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0])))[0].q)
    float temp0_175[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_169[0].q | zmm1[0].q << 0x40, zmm0), zmm11), zmm0)
    zmm2 = _mm_add_epi32(zmm2, zmm9)
    zmm14 = _mm_add_epi32(zmm14, zmm2)
    zmm2 = _mm_add_epi32(zmm2, zmm10)
    zmm10 = _mm_slli_epi32(_mm_add_epi32(zmm10, zmm9), 2)
    float temp0_182[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm10.d) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm10, 0xe5)[0]) + 4))[0].q)
    zmm1 = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm10, 0x4e)[0]) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm10, 0xe7)[0]) + 4))[0].q)
    float temp0_188[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_182[0].q | zmm1[0].q << 0x40, zmm12), zmm11), zmm12)
    zmm14 = _mm_slli_epi32(zmm14, 2)
    zmm1 = _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm14.d) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5)[0]) + 4))[0].q)
    float temp0_194[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e)[0]) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + 4))[0].q)
    zmm1 = zmm1[0].q | temp0_194[0].q << 0x40
    zmm2 = _mm_slli_epi32(zmm2, 2)
    float temp0_197[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm2.d) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + 4))[0].q)
    float temp0_200[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d) + 4)).q)
    float temp0_203[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(temp0_197[0].q | temp0_200[0].q << 0x40, zmm1), zmm11), zmm1)
    float temp0_206[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_175, temp0_143), temp0_76), temp0_143)
    zmm6 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_203, temp0_188), temp0_76), temp0_188), 
                temp0_206), 
            temp0_77), 
        temp0_206)
    zmm1 = _mm_cmpeq_ps(temp0_87, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_87, zx.o(0), 7), zmm1)
    
    if (_mm_movemask_ps(zmm0) != 0)
        zmm1 = _mm_rsqrt_ps(temp0_87)
        float temp0_219[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_87, zmm1), zmm1)
        zmm2 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_219), zmm1), 
            data_142d3f640)
        zmm1 = _mm_rcp_ps(zmm2)
        zmm2 = _mm_mul_ps(zmm2, zmm1)
        zmm3 =
            _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm2), zmm1), zmm6), zmm0)
        zmm6 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm6), zmm3)
    
    zmm9 = arg16
    zmm10 = arg15
    zmm11 = arg14
    float temp0_231[0x4] = __subps_xmmps_memps(zmm6, arg20)
    float temp0_232[0x4] = __cmpps_xmmps_memps_immb(temp0_231, data_142fc95d0, 1)
    char result = _mm_movemask_ps(temp0_232)
    float arg_230[0x4]
    float arg_240[0x4]
    
    if (result != 0)
        float temp0_234[0x4] = _mm_mul_ps(arg_230, temp0_231)
        float temp0_235[0x4] = _mm_mul_ps(arg_240, temp0_231)
        float temp0_236[0x4] = _mm_mul_ps(arg21, temp0_231)
        zmm3 = zmm10
        char temp0_237 = result & 1
        
        if (temp0_237 == 0)
            zmm2 = zmm9
            
            if (temp0_237 != 0)
                goto label_1400d0086
            
            goto label_1400d0de5
        
        zmm3 = zmm10
        zmm3[0] = zmm3[0] + temp0_234[0]
        zmm2 = zmm9
        
        if (temp0_237 != 0)
        label_1400d0086:
            zmm2.d = zmm9.d f+ temp0_235[0]
            zmm1 = zmm11
            
            if (temp0_237 == 0)
                goto label_1400d0def
            
            goto label_1400d0094
        
    label_1400d0de5:
        zmm1 = zmm11
        bool cond:5_1
        bool cond:6_1
        bool cond:7_1
        bool cond:8_1
        
        if (temp0_237 == 0)
        label_1400d0def:
            zmm10 = _mm_add_ps(zmm10, temp0_234)
            char temp2_1 = result & 2
            cond:5_1 = temp2_1 != 0
            cond:6_1 = temp2_1 == 0
            cond:7_1 = temp2_1 == 0
            cond:8_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
                goto label_1400d00b5
            
            goto label_1400d0dfc
        
    label_1400d0094:
        zmm1 = zmm11
        zmm1[0] = zmm1[0] f+ temp0_236[0]
        zmm10 = _mm_add_ps(zmm10, temp0_234)
        char temp1_1 = result & 2
        cond:5_1 = temp1_1 != 0
        cond:6_1 = temp1_1 == 0
        cond:7_1 = temp1_1 == 0
        cond:8_1 = temp1_1 != 0
        
        if (temp1_1 != 0)
        label_1400d00b5:
            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm3, 1), zmm3, 0xe2)
            zmm9 = _mm_add_ps(zmm9, temp0_235)
            
            if (cond:6_1)
                goto label_1400d0e06
            
            goto label_1400d00ce
        
    label_1400d0dfc:
        zmm9 = _mm_add_ps(zmm9, temp0_235)
        
        if (not(cond:5_1))
        label_1400d0e06:
            zmm11 = _mm_add_ps(zmm11, temp0_236)
            
            if (cond:8_1)
                goto label_1400d00e7
            
            goto label_1400d0e10
        
    label_1400d00ce:
        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm2, 1), zmm2, 0xe2)
        zmm11 = _mm_add_ps(zmm11, temp0_236)
        bool cond:9_1
        bool cond:10_1
        bool cond:11_1
        bool cond:12_1
        
        if (not(cond:7_1))
        label_1400d00e7:
            zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 1), zmm1, 0xe2)
            char temp4_1 = result & 4
            cond:9_1 = temp4_1 == 0
            cond:10_1 = temp4_1 != 0
            cond:11_1 = temp4_1 != 0
            cond:12_1 = temp4_1 == 0
            
            if (temp4_1 == 0)
                goto label_1400d0e19
            
            goto label_1400d00fb
        
    label_1400d0e10:
        char temp3_1 = result & 4
        cond:9_1 = temp3_1 == 0
        cond:10_1 = temp3_1 != 0
        cond:11_1 = temp3_1 != 0
        cond:12_1 = temp3_1 == 0
        
        if (temp3_1 != 0)
        label_1400d00fb:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x32), 0x84)
            
            if (not(cond:9_1))
            label_1400d010d:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x32), 0x84)
                
                if (cond:12_1)
                    goto label_1400d0e25
                
                goto label_1400d011f
        else
        label_1400d0e19:
            
            if (cond:10_1)
                goto label_1400d010d
        
        bool cond:13_1
        bool cond:14_1
        bool cond:15_1
        bool cond:16_1
        
        if (not(cond:11_1))
        label_1400d0e25:
            char temp6_1 = result & 8
            cond:13_1 = temp6_1 != 0
            cond:14_1 = temp6_1 == 0
            cond:15_1 = temp6_1 != 0
            cond:16_1 = temp6_1 == 0
            
            if (temp6_1 != 0)
                goto label_1400d0136
            
            goto label_1400d0e2e
        
    label_1400d011f:
        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x32), 0x84)
        char temp5_1 = result & 8
        cond:13_1 = temp5_1 != 0
        cond:14_1 = temp5_1 == 0
        cond:15_1 = temp5_1 != 0
        cond:16_1 = temp5_1 == 0
        
        if (temp5_1 != 0)
        label_1400d0136:
            zmm10 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x23), 0x24)
            
            if (cond:14_1)
                goto label_1400d0e38
            
            goto label_1400d014a
        
    label_1400d0e2e:
        zmm10 = zmm3
        
        if (cond:13_1)
        label_1400d014a:
            zmm9 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x23), 0x24)
            
            if (cond:15_1)
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x23), 0x24)
        else
        label_1400d0e38:
            zmm9 = zmm2
            
            if (not(cond:16_1))
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x23), 0x24)
        
        zmm2 = arg13
        zmm6 = _mm_and_ps(_mm_add_ps(temp0_231, zmm2), temp0_232)
        zmm11 = zmm1
        arg13 = _mm_or_ps(_mm_andnot_ps(temp0_232, zmm2), zmm6)
    
    arg2 = zx.q(arg2.d + 4)
    float arg_30[0x4]
    float arg_70[0x4]
    int32_t arg_160
    int32_t arg_170
    
    if (arg2.d s>= arg5)
        if (arg2.d s>= arg9)
            zmm3 = _mm_cmpeq_epi32(arg19, zx.o(0))
            zmm0 = zmm3 & not.o(zmm10)
            zmm1 = _mm_add_ps(_mm_shuffle_epi32(zmm0, 0xee), zmm0)
            float temp0_594[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
            temp0_594[0] = temp0_594[0] f+ zmm1[0]
            zmm1 = zmm3 & not.o(zmm9)
            zmm2 = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xe5)
            zmm1[0] = zmm1[0] f+ zmm2.d
            float temp0_598[0x4] = _mm_unpacklo_ps(temp0_594, zmm1[0].q)
            zmm1 = zmm3 & not.o(zmm11)
            zmm2 = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xe5)
            zmm1[0] = zmm1[0] f+ zmm2.d
            zmm2 = _mm_add_ps(*arg42 | arg42[1].d[0].q << 0x40, temp0_598[0].q | zmm1[0].q << 0x40)
            zmm0 = zmm2
            *arg42 = zmm2.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe5)
            zmm0[0].q = zmm0 u>> 0x40
            *(arg42 + 4) = zmm2.d
            arg42[1].d = zmm0[0]
            zmm3 &= not.o(arg13)
            float temp0_605[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm3, 0xee), zmm3)
            zmm1 = _mm_shuffle_ps(temp0_605, temp0_605, 0xe5)
            zmm1[0] = zmm1[0] f+ temp0_605[0]
            zmm1[0] = zmm1[0] f+ *arg8
            *arg8 = zmm1[0]
            return result
        
        arg15 = zmm10
        arg16 = zmm9
        zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg2.d), 0), data_142e11d00)
        zmm0 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), zmm1)
        zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm0
        int64_t rdx = sx.q(zmm2.d)
        void* rax_61 = &(*arg10)[rdx]
        zmm1 = (*arg10)[rdx]
        int64_t rbp_5 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
        void* rdx_2 = &(*arg10)[rbp_5]
        zmm1 = _mm_unpacklo_ps(zmm1, (*arg10)[rbp_5][0].q)
        int64_t rbp_7 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
        void* rbx_4 = &(*arg10)[rbp_7]
        zmm3 = (*arg10)[rbp_7]
        int64_t rsi_3 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
        void* r10 = &(*arg10)[rsi_3]
        float temp0_257[0x4] = _mm_unpacklo_ps(zmm3, (*arg10)[rsi_3].q)
        zmm1 = zmm1[0].q | temp0_257[0].q << 0x40
        zmm3 = data_142fc95e0 & zmm0
        float (* r14)[0x4] = zx.q(zmm3[0])
        zmm8 = *(r14 + rax_61)
        float (* r15)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
        float temp0_259[0x4] = _mm_unpacklo_ps(zmm8, (*(r15 + rdx_2))[0].q)
        float (* r13)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
        zmm4 = *(r13 + rbx_4)
        float (* rbp_9)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0])
        float temp0_262[0x4] = _mm_unpacklo_ps(zmm4, (*(rbp_9 + r10))[0].q)
        zmm8 = temp0_259[0].q | temp0_262[0].q << 0x40
        zmm3 = data_142fc95f0 & zmm0
        float temp0_264[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_61), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_2))[0].q)
        float temp0_267[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_4), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + r10))[0].q)
        zmm6 = temp0_264[0].q | temp0_267[0].q << 0x40
        uint32_t arg_1c0[0x4] = zmm1
        float arg_1f0[0x4] = zx.o(0)
        zmm5 = (*arg6)[3]
        float temp0_268[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        __return_addr.o = temp0_268
        arg_10 = temp0_268
        float zmm7[0x4] = *arg6
        zmm2 = (*arg6)[1]
        zmm4 = (*arg6)[2]
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_270[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_271[0x4] = _mm_mul_ps(zmm8, temp0_270)
        float temp0_272[0x4] = _mm_mul_ps(temp0_270, zmm6)
        float temp0_273[0x4] = _mm_mul_ps(zmm6, zmm2)
        float temp0_274[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm2 = _mm_mul_ps(zmm2, zmm1)
        zmm1 = _mm_mul_ps(zmm1, temp0_274)
        float temp0_277[0x4] = _mm_mul_ps(zx.o(0), temp0_268)
        float temp0_279[0x4] = _mm_sub_ps(temp0_273, _mm_mul_ps(temp0_274, zmm8))
        zmm1 = _mm_sub_ps(zmm1, temp0_272)
        float temp0_281[0x4] = _mm_sub_ps(temp0_271, zmm2)
        float temp0_282[0x4] = _mm_sub_ps(temp0_277, temp0_277)
        float temp0_283[0x4] = _mm_add_ps(temp0_279, temp0_279)
        zmm1 = _mm_add_ps(zmm1, zmm1)
        float temp0_285[0x4] = _mm_add_ps(temp0_281, temp0_281)
        float temp0_286[0x4] = _mm_add_ps(temp0_282, temp0_282)
        arg_40 = temp0_283
        float arg_50[0x4] = zmm1
        float arg_60[0x4] = temp0_285
        arg_70 = temp0_286
        float temp0_287[0x4] = _mm_mul_ps(temp0_286, temp0_268)
        zmm2 = _mm_mul_ps(temp0_268, temp0_283)
        float temp0_289[0x4] = _mm_mul_ps(temp0_268, zmm1)
        zmm10 = _mm_mul_ps(temp0_268, temp0_285)
        zmm2 = __addps_xmmps_memps(zmm2, arg_1c0)
        float temp0_292[0x4] = __addps_xmmps_memps(temp0_289, zmm8)
        zmm10 = __addps_xmmps_memps(zmm10, zmm6)
        arg_30 = temp0_268
        uint128_t arg_2c0 = zmm2
        float arg_2d0[0x4] = temp0_292
        uint128_t arg_2e0 = zmm10
        float arg_2f0[0x4] = __addps_xmmps_memps(temp0_287, arg_1f0)
        zmm4 = *arg6
        zmm5 = (*arg6)[1]
        zmm7 = (*arg6)[2]
        float temp0_295[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_296[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_297[0x4] = _mm_mul_ps(zmm1, temp0_296)
        float temp0_298[0x4] = _mm_mul_ps(temp0_296, temp0_285)
        float temp0_299[0x4] = _mm_mul_ps(temp0_285, temp0_295)
        float temp0_300[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_301[0x4] = _mm_mul_ps(temp0_295, temp0_283)
        float temp0_302[0x4] = _mm_mul_ps(temp0_283, temp0_300)
        float temp0_304[0x4] = _mm_sub_ps(temp0_299, _mm_mul_ps(temp0_300, zmm1))
        float temp0_305[0x4] = _mm_sub_ps(temp0_302, temp0_298)
        float temp0_306[0x4] = _mm_sub_ps(temp0_297, temp0_301)
        float temp0_307[0x4] = _mm_add_ps(temp0_304, zmm2)
        float temp0_308[0x4] = _mm_add_ps(temp0_305, temp0_292)
        float temp0_309[0x4] = _mm_add_ps(temp0_306, zmm10)
        zmm4 = arg6[1][0]
        zmm2 = (*arg6)[5]
        float temp0_311[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_307)
        zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_308)
        zmm1 = (*arg6)[6]
        zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_309)
        float arg_f0[0x4] = zmm2
        uint128_t arg_210 = zmm2
        arg12 = zmm1
        uint32_t arg_220[0x4] = zmm1
        zmm1 = temp0_311
        zmm3 = arg_170
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_317[0x4] = _mm_cmpeq_ps(zmm2, zmm1, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_317, zmm0)) != 0)
            char temp0_320 = _mm_movemask_ps(temp0_317)
            
            if ((temp0_320 & 1) == 0)
                if ((temp0_320 & 2) != 0)
                    goto label_1400d127d
                
                goto label_1400d11a3
            
            __return_addr.d = zmm3[0]
            
            if ((temp0_320 & 2) != 0)
            label_1400d127d:
                __return_addr:4.d = zmm3[0]
                
                if ((temp0_320 & 4) == 0)
                    goto label_1400d11ab
                
                goto label_1400d128b
            
        label_1400d11a3:
            
            if ((temp0_320 & 4) != 0)
            label_1400d128b:
                arg_8 = zmm3[0]
                
                if ((temp0_320 & 8) != 0)
                    arg_c = zmm3[0]
            else
            label_1400d11ab:
                
                if ((temp0_320 & 8) != 0)
                    arg_c = zmm3[0]
        
        zmm2 = _mm_cmpeq_ps(zmm2, zmm1, 5)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm2)) != 0)
            zmm5 = arg_160
            float temp0_324[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_324, 1), zmm2)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm0)) != 0)
                char temp0_329 = _mm_movemask_ps(zmm6)
                
                if ((temp0_329 & 1) == 0)
                    if ((temp0_329 & 2) != 0)
                        goto label_1400d12ab
                    
                    goto label_1400d1204
                
                __return_addr.d = zmm5[0]
                
                if ((temp0_329 & 2) != 0)
                label_1400d12ab:
                    __return_addr:4.d = zmm5[0]
                    
                    if ((temp0_329 & 4) == 0)
                        goto label_1400d120c
                    
                    goto label_1400d12b9
                
            label_1400d1204:
                
                if ((temp0_329 & 4) != 0)
                label_1400d12b9:
                    arg_8 = zmm5[0]
                    
                    if ((temp0_329 & 8) != 0)
                        arg_c = zmm5[0]
                else
                label_1400d120c:
                    
                    if ((temp0_329 & 8) != 0)
                        arg_c = zmm5[0]
            
            uint32_t temp0_331[0x4] = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_324, 5), zmm2)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_331, zmm0)) != 0)
                zmm2 = temp0_311
                char temp0_334 = _mm_movemask_ps(temp0_331)
                
                if ((temp0_334 & 1) == 0)
                    if ((temp0_334 & 2) != 0)
                        goto label_1400d12de
                    
                    goto label_1400d1246
                
                __return_addr.d = zmm2.d
                
                if ((temp0_334 & 2) != 0)
                label_1400d12de:
                    __return_addr:4.d = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                    
                    if ((temp0_334 & 4) == 0)
                        goto label_1400d124e
                    
                    goto label_1400d12f1
                
            label_1400d1246:
                
                if ((temp0_334 & 4) != 0)
                label_1400d12f1:
                    arg_8 = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                    
                    if ((temp0_334 & 8) != 0)
                        arg_c = _mm_shuffle_epi32(zmm2, 0xe7)[0]
                else
                label_1400d124e:
                    
                    if ((temp0_334 & 8) != 0)
                        arg_c = _mm_shuffle_epi32(zmm2, 0xe7)[0]
        
        return sub_1400d1160(arg1, 0, arg3, arg4, rbp_9, arg7, r13, r14, r15, zmm0, temp0_311, 
            zmm11) __tailcall
    
    arg14 = zmm11
    arg15 = zmm10
    arg16 = zmm9
    int64_t rax_86 = sx.q((arg2 << 2).d * 3)
    zmm4 = *(arg10 + rax_86)
    zmm0 = *(arg10 + rax_86 + 0x10)
    zmm1 = *(arg10 + rax_86 + 0x20)
    float temp0_648[0x4] = _mm_shuffle_ps(
        _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0x4e), _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
        zmm1, 0xc4)
    zmm2 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
    float temp0_651[0x4] = _mm_shuffle_ps(zmm4, zmm0, 5)
    float temp0_654[0x4] = _mm_shuffle_ps(temp0_651, 
        _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_651, zmm0, 0xf8), 0x22), 0x28)
    arg_40 = zmm2
    arg_70 = zx.o(0)
    zmm0 = (*arg6)[3]
    float temp0_655[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    __return_addr.o = temp0_655
    arg_10 = temp0_655
    arg11 = temp0_655
    arg_30 = temp0_655
    zmm9 = *arg6
    zmm8 = (*arg6)[1]
    zmm10 = (*arg6)[2]
    float temp0_656[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_657[0x4] = _mm_mul_ps(temp0_656, temp0_648)
    zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0)
    float temp0_659[0x4] = _mm_mul_ps(zmm10, zmm2)
    float temp0_660[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float temp0_661[0x4] = _mm_mul_ps(temp0_660, temp0_654)
    float temp0_663[0x4] = _mm_sub_ps(temp0_657, _mm_mul_ps(temp0_654, zmm10))
    float temp0_665[0x4] = _mm_sub_ps(temp0_659, _mm_mul_ps(temp0_648, temp0_660))
    float temp0_667[0x4] = _mm_sub_ps(temp0_661, _mm_mul_ps(zmm2, temp0_656))
    float temp0_668[0x4] = _mm_add_ps(temp0_663, temp0_663)
    float temp0_669[0x4] = _mm_add_ps(temp0_665, temp0_665)
    float temp0_670[0x4] = _mm_add_ps(temp0_667, temp0_667)
    float temp0_671[0x4] = _mm_mul_ps(temp0_655, temp0_668)
    float temp0_672[0x4] = _mm_mul_ps(temp0_655, temp0_669)
    float temp0_673[0x4] = __addps_xmmps_memps(temp0_671, arg_40)
    float temp0_674[0x4] = __addps_xmmps_memps(temp0_672, temp0_654)
    float temp0_676[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_655, temp0_670), temp0_648)
    zmm1 = _mm_mul_ps(temp0_670, temp0_656)
    zmm2 = _mm_mul_ps(temp0_668, zmm10)
    float temp0_679[0x4] = _mm_mul_ps(temp0_669, temp0_660)
    zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_669, zmm10)), temp0_673)
    zmm2 = _mm_add_ps(_mm_sub_ps(zmm2, _mm_mul_ps(temp0_670, temp0_660)), temp0_674)
    float temp0_688[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_679, _mm_mul_ps(temp0_668, temp0_656)), temp0_676)
    zmm4 = arg6[1][0]
    zmm3 = (*arg6)[5]
    float temp0_690[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm1)
    float temp0_692[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm2)
    zmm0 = (*arg6)[6]
    float temp0_694[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_688)
    arg_230 = temp0_690
    arg18 = temp0_692
    arg_240 = temp0_692
    arg12 = temp0_694
    arg21 = temp0_694
    int64_t rbx_33 = 0
    arg17 = temp0_690
    zmm0 = temp0_690
    
    while (true)
        zmm2 = *(&arg_170 + rbx_33)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
        char temp0_697 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
        
        if (temp0_697 != 0)
            if ((temp0_697 & 1) == 0)
                if ((temp0_697 & 2) != 0)
                    goto label_1400d041d
                
                goto label_1400d034d
            
            *(&__return_addr + (rbx_33 << 2)) = zmm2.d
            
            if ((temp0_697 & 2) != 0)
            label_1400d041d:
                *(&__return_addr:4 + (rbx_33 << 2)) = zmm2.d
                
                if ((temp0_697 & 4) == 0)
                    goto label_1400d0355
                
                goto label_1400d042b
            
        label_1400d034d:
            
            if ((temp0_697 & 4) != 0)
            label_1400d042b:
                (&arg_8)[rbx_33] = zmm2.d
                
                if ((temp0_697 & 8) != 0)
                    (&arg_c)[rbx_33] = zmm2.d
            else
            label_1400d0355:
                
                if ((temp0_697 & 8) != 0)
                    (&arg_c)[rbx_33] = zmm2.d
        
        zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
        
        if (_mm_movemask_ps(zmm1) != 0)
            zmm3 = *(&arg_160 + rbx_33)
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
            char temp0_703 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
            
            if (temp0_703 != 0)
                if ((temp0_703 & 1) == 0)
                    if ((temp0_703 & 2) != 0)
                        goto label_1400d044b
                    
                    goto label_1400d03a2
                
                *(&__return_addr + (rbx_33 << 2)) = zmm3[0]
                
                if ((temp0_703 & 2) != 0)
                label_1400d044b:
                    *(&__return_addr:4 + (rbx_33 << 2)) = zmm3[0]
                    
                    if ((temp0_703 & 4) == 0)
                        goto label_1400d03aa
                    
                    goto label_1400d0459
                
            label_1400d03a2:
                
                if ((temp0_703 & 4) != 0)
                label_1400d0459:
                    (&arg_8)[rbx_33] = zmm3[0]
                    
                    if ((temp0_703 & 8) != 0)
                        (&arg_c)[rbx_33] = zmm3[0]
                else
                label_1400d03aa:
                    
                    if ((temp0_703 & 8) != 0)
                        (&arg_c)[rbx_33] = zmm3[0]
            
            char temp0_706 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
            
            if (temp0_706 != 0)
                zmm0 = *(&arg_230 + (rbx_33 << 2))
                
                if ((temp0_706 & 1) == 0)
                    if ((temp0_706 & 2) != 0)
                        goto label_1400d047e
                    
                    goto label_1400d03de
                
                *(&__return_addr + (rbx_33 << 2)) = zmm0[0]
                
                if ((temp0_706 & 2) != 0)
                label_1400d047e:
                    *(&__return_addr:4 + (rbx_33 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    
                    if ((temp0_706 & 4) == 0)
                        goto label_1400d03e6
                    
                    goto label_1400d0491
                
            label_1400d03de:
                
                if ((temp0_706 & 4) != 0)
                label_1400d0491:
                    (&arg_8)[rbx_33] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                    
                    if ((temp0_706 & 8) != 0)
                        (&arg_c)[rbx_33] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                else
                label_1400d03e6:
                    
                    if ((temp0_706 & 8) != 0)
                        (&arg_c)[rbx_33] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
        
        if (rbx_33 == 8)
            break
        
        zmm0 = *(&arg_240 + (rbx_33 << 2))
        rbx_33 += 4

goto label_1400d079c
