// 函数: sub_1400c754e
// 地址: 0x1400c754e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t arg_c
float arg_10[0x4]
float arg_30[0x4]
float arg_40[0x4]
float arg_50[0x4]
float arg_70[0x4]
void arg_180
void arg_190
char result
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
uint128_t zmm4
float zmm5[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm11[0x4]
int32_t zmm12[0x4]
uint128_t zmm13
int32_t zmm14[0x4]
float zmm15[0x4]

while (true)
    zmm8 = __return_addr.o
    zmm11 = arg_10
    zmm2 = *arg1
    zmm1 = *(arg1 + 4)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_2[0x4] = _mm_sub_ps(zmm8, temp0_1)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_4[0x4] = _mm_sub_ps(zmm11, temp0_3)
    zmm7 = *(arg1 + 8)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    float temp0_6[0x4] = _mm_sub_ps(arg12, temp0_5)
    zmm3 = *arg3
    float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    float temp0_8[0x4] = _mm_div_ps(temp0_2, temp0_7)
    arg11 = _mm_cmpeq_epi32(arg11, arg11)
    zmm15 = (*arg3)[2]
    zmm12 = _mm_cvttps_epi32(temp0_8)
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_7), temp0_1)
    zmm13 = __divps_xmmps_memps(*arg3 | zmm15[0].q << 0x40, data_142fc9600)
    float temp0_15[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
    zmm4 = _mm_cmpeq_ps(_mm_add_ps(zmm4, temp0_15), zmm8, 1)
    zmm14 = _mm_add_epi32(zmm12, arg11)
    zmm0 = _mm_and_ps(zmm12, zmm4)
    zmm4 = _mm_or_ps(_mm_andnot_ps(zmm4, zmm14), zmm0)
    arg11 = (*arg3)[1]
    float temp0_22[0x4] = _mm_shuffle_ps(arg11, arg11, 0)
    float temp0_23[0x4] = _mm_div_ps(temp0_4, temp0_22)
    float temp0_24[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
    float temp0_25[0x4] = _mm_div_ps(temp0_6, temp0_24)
    zmm2 = _mm_cvttps_epi32(temp0_23)
    zmm0 = _mm_cvttps_epi32(temp0_25)
    float temp0_29[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_22)
    float arg_d0[0x4] = zmm0
    float temp0_31[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), temp0_24)
    float temp0_32[0x4] = _mm_add_ps(temp0_29, temp0_3)
    float temp0_33[0x4] = _mm_add_ps(temp0_31, temp0_5)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
    float temp0_35[0x4] = _mm_add_ps(temp0_32, temp0_34)
    zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
    __return_addr.o = zmm4
    float temp0_37[0x4] = _mm_cmpeq_ps(temp0_35, zmm11, 1)
    
    if (_mm_movemask_ps(temp0_37) != 0)
        zmm12 = zmm2
    
    float temp0_39[0x4] = _mm_add_ps(temp0_33, zmm13)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_35, zmm11, 5)) != 0)
        zmm14 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
    
    float arg_140[0x4] = zmm8
    float temp0_43[0x4] = __subps_xmmps_memps(zmm8, arg19)
    float temp0_44[0x4] = __subps_xmmps_memps(zmm11, arg18)
    zmm6 = _mm_and_ps(zmm12, temp0_37)
    zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_37, zmm14), zmm6)
    arg_10 = zmm0
    zmm6 = arg12
    float temp0_48[0x4] = _mm_cmpeq_ps(temp0_39, zmm6, 1)
    
    if (_mm_movemask_ps(temp0_48) != 0)
        zmm12 = arg_d0
    
    float temp0_50[0x4] = __subps_xmmps_memps(zmm6, arg13)
    float temp0_51[0x4] = _mm_mul_ps(temp0_43, temp0_43)
    float temp0_52[0x4] = _mm_mul_ps(temp0_44, temp0_44)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_39, zmm6, 5)) != 0)
        zmm14 = __paddd_xmmdq_memdq(arg_d0, data_142d3f800)
    
    zmm12 = _mm_and_ps(zmm12, temp0_48)
    zmm8 = _mm_or_ps(_mm_andnot_ps(temp0_48, zmm14), zmm12)
    float temp0_60[0x4] = _mm_add_ps(__addps_xmmps_memps(temp0_51, data_142d8f750), temp0_52)
    float temp0_63[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_7), temp0_1)
    float temp0_66[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm0), temp0_22), temp0_3)
    arg12 = zmm8
    float temp0_69[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm8), temp0_24), temp0_5)
    float temp0_70[0x4] = _mm_add_ps(temp0_15, temp0_63)
    float temp0_71[0x4] = _mm_add_ps(temp0_34, temp0_66)
    zmm13 = _mm_add_ps(zmm13, temp0_69)
    float temp0_73[0x4] = _mm_sub_ps(arg_140, temp0_70)
    float temp0_74[0x4] = _mm_sub_ps(zmm11, temp0_71)
    float temp0_75[0x4] = _mm_sub_ps(zmm6, zmm13)
    float temp0_76[0x4] = _mm_div_ps(temp0_73, temp0_7)
    float temp0_77[0x4] = _mm_div_ps(temp0_74, temp0_22)
    float temp0_78[0x4] = _mm_div_ps(temp0_75, temp0_24)
    arg_40 = temp0_76
    float temp0_79[0x4] = _mm_mul_ps(temp0_50, temp0_50)
    int64_t rbx_1 = 0
    zmm15 = _mm_cmpeq_epi32(temp0_24, temp0_24)
    char i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm15))
    
    if (i == 0)
        goto label_1400c782d
    
    do
        if ((i & 1) == 0)
            if ((i & 2) != 0)
                goto label_1400c78bf
            
            goto label_1400c77f9
        
        *(&__return_addr + (rbx_1 << 2)) = 0
        
        if ((i & 2) != 0)
        label_1400c78bf:
            *(&__return_addr:4 + (rbx_1 << 2)) = 0
            
            if ((i & 4) == 0)
                goto label_1400c7801
            
            goto label_1400c78cf
        
    label_1400c77f9:
        
        if ((i & 4) == 0)
        label_1400c7801:
            
            if ((i & 8) != 0)
                goto label_1400c78df
            
            goto label_1400c7809
        
    label_1400c78cf:
        (&arg_8)[rbx_1] = 0
        
        if ((i & 8) != 0)
        label_1400c78df:
            (&arg_c)[rbx_1] = 0
            
            if ((i & 1) == 0)
                goto label_1400c7811
            
            goto label_1400c78ef
        
    label_1400c7809:
        
        if ((i & 1) == 0)
        label_1400c7811:
            
            if ((i & 2) != 0)
                goto label_1400c78ff
            
            goto label_1400c7819
        
    label_1400c78ef:
        arg_40[rbx_1] = 0
        
        if ((i & 2) != 0)
        label_1400c78ff:
            arg_40[1 + rbx_1] = 0
            
            if ((i & 4) == 0)
                goto label_1400c7821
            
            goto label_1400c790f
        
    label_1400c7819:
        
        if ((i & 4) != 0)
        label_1400c790f:
            arg_40[2 + rbx_1] = 0
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        else
        label_1400c7821:
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        
    label_1400c782d:
        int32_t rbp_1 = *(arg4 + rbx_1)
        char temp0_87 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
            _mm_shuffle_epi32(zx.o(rbp_1 - 1), 0), *(&__return_addr + (rbx_1 << 2))))
        
        if (temp0_87 != 0)
            if ((temp0_87 & 1) == 0)
                if ((temp0_87 & 2) != 0)
                    goto label_1400c793b
                
                goto label_1400c785f
            
            *(&__return_addr + (rbx_1 << 2)) = rbp_1 - 2
            
            if ((temp0_87 & 2) != 0)
            label_1400c793b:
                *(&__return_addr:4 + (rbx_1 << 2)) = rbp_1 - 2
                
                if ((temp0_87 & 4) == 0)
                    goto label_1400c7867
                
                goto label_1400c7947
            
        label_1400c785f:
            
            if ((temp0_87 & 4) == 0)
            label_1400c7867:
                
                if ((temp0_87 & 8) != 0)
                    goto label_1400c7953
                
                goto label_1400c786f
            
        label_1400c7947:
            (&arg_8)[rbx_1] = rbp_1 - 2
            
            if ((temp0_87 & 8) != 0)
            label_1400c7953:
                (&arg_c)[rbx_1] = rbp_1 - 2
                
                if ((temp0_87 & 1) == 0)
                    goto label_1400c7877
                
                goto label_1400c795f
            
        label_1400c786f:
            
            if ((temp0_87 & 1) == 0)
            label_1400c7877:
                
                if ((temp0_87 & 2) != 0)
                    goto label_1400c796f
                
                goto label_1400c787f
            
        label_1400c795f:
            arg_40[rbx_1] = 0x3f800000
            
            if ((temp0_87 & 2) != 0)
            label_1400c796f:
                arg_40[1 + rbx_1] = 0x3f800000
                
                if ((temp0_87 & 4) == 0)
                    goto label_1400c7887
                
                goto label_1400c797f
            
        label_1400c787f:
            
            if ((temp0_87 & 4) != 0)
            label_1400c797f:
                arg_40[2 + rbx_1] = 0x3f800000
                
                if ((temp0_87 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
            else
            label_1400c7887:
                
                if ((temp0_87 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
        
        if (rbx_1 == 8)
            break
        
        zmm4 = *(&arg_10 + (rbx_1 << 2))
        rbx_1 += 4
        i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm4, zmm15))
    while (i != 0)
    
    float temp0_88[0x4] = _mm_add_ps(temp0_60, temp0_79)
    zmm8 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm0 = __return_addr.o
    zmm14 = arg_10
    zmm1 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm0, 0xf5), zmm8), 0xe8)
    zmm7 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm0), 0xe8), zmm1[0].q)
    zmm3 = _mm_add_epi32(zmm7, zmm14)
    zmm1 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm13 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm1), 0xe8), 
        _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm1), 0xe8)[0].q)
    zmm6 = _mm_add_epi32(zmm13, arg12)
    float (* rbx_2)[0x4] = *(arg7 + 0x10)
    zmm6 = _mm_slli_epi32(zmm6, 2)
    int64_t rax_10 = sx.q(zmm6[0])
    int64_t rsi_2 = sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0])
    int64_t rbp_4 = sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0])
    int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0])
    zmm6 = *(rbx_2 + rdi_2 + 4)
    float temp0_109[0x4] = _mm_unpacklo_ps(*(rbx_2 + rbp_4), (*(rbx_2 + rdi_2))[0].q)
    float temp0_110[0x4] = _mm_unpacklo_ps(*(rbx_2 + rbp_4 + 4), zmm6[0].q)
    zmm11 = *(rbx_2 + rax_10 + 4)
    zmm6 = _mm_unpacklo_ps(*(rbx_2 + rax_10), (*(rbx_2 + rsi_2)).q)[0].q | temp0_109[0].q << 0x40
    zmm11 = _mm_unpacklo_ps(zmm11, (*(rbx_2 + rsi_2 + 4))[0].q)[0].q | temp0_110[0].q << 0x40
    zmm0 = _mm_sub_epi32(zmm0, zmm15)
    zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm0, 0xf5), zmm8), 0xe8)
    int32_t temp0_119[0x4] =
        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm8), 0xe8), zmm2[0].q)
    zmm0 = _mm_add_epi32(temp0_119, zmm14)
    zmm2 = _mm_shuffle_epi32(zmm0, 0xf5)
    zmm0 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm1), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm1), 0xe8)[0].q), 
            arg12), 
        2)
    zmm3 = _mm_add_epi32(zmm3, zmm8)
    zmm2 = _mm_shuffle_epi32(zmm3, 0xf5)
    zmm3 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm1), 0xe8), 
        _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm1), 0xe8)[0].q)
    float temp0_137[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm0[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])))[0].q)
    float temp0_140[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])))[0].q)
    float temp0_141[0x4] = _mm_sub_ps(temp0_137[0].q | temp0_140[0].q << 0x40, zmm6)
    zmm2 = arg_40
    float temp0_143[0x4] = _mm_add_ps(_mm_mul_ps(temp0_141, zmm2), zmm6)
    int32_t temp0_144[0x4] = _mm_sub_epi32(zmm14, zmm15)
    zmm7 = _mm_add_epi32(zmm7, temp0_144)
    zmm0 = _mm_shuffle_epi32(zmm7, 0xf5)
    zmm4 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm1), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm1), 0xe8)[0].q), 
            arg12), 
        2)
    float temp0_155[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm4.d)), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q)
    float temp0_158[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d))).q)
    zmm6 = temp0_155[0].q | temp0_158[0].q << 0x40
    int32_t temp0_159[0x4] = _mm_add_epi32(temp0_144, temp0_119)
    zmm0 = _mm_shuffle_epi32(temp0_159, 0xf5)
    zmm5 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_159, zmm1), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm1), 0xe8)[0].q), 
            arg12), 
        2)
    zmm4 = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm5[0])), 
                    (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
                    *(rbx_2 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
                    (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)[0].q << 0x40, 
                zmm6), 
            zmm2), 
        zmm6)
    zmm1 = _mm_add_epi32(zmm1, arg12)
    zmm13 = _mm_add_epi32(zmm13, zmm1)
    zmm1 = _mm_add_epi32(zmm1, zmm3)
    zmm3 = _mm_slli_epi32(_mm_add_epi32(zmm3, arg12), 2)
    float temp0_182[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm3[0]) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + 4))[0].q)
    float temp0_185[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + 4))[0].q)
    float temp0_188[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(temp0_182[0].q | temp0_185[0].q << 0x40, zmm11), zmm2), zmm11)
    zmm13 = _mm_slli_epi32(zmm13, 2)
    float temp0_191[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm13.d) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm13, 0xe5)[0]) + 4))[0].q)
    float temp0_194[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm13, 0x4e)[0]) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm13, 0xe7)[0]) + 4))[0].q)
    zmm3 = temp0_191[0].q | temp0_194[0].q << 0x40
    zmm1 = _mm_slli_epi32(zmm1, 2)
    float temp0_197[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm1[0]) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0]) + 4))[0].q)
    float temp0_200[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0]) + 4), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0]) + 4))[0].q)
    float temp0_203[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(temp0_197[0].q | temp0_200[0].q << 0x40, zmm3), zmm2), zmm3)
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_143), temp0_77), temp0_143)
    zmm5 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_203, temp0_188), temp0_77), temp0_188), 
                zmm4), 
            temp0_78), 
        zmm4)
    float temp0_213[0x4] = _mm_cmpeq_ps(temp0_88, zx.o(0), 4)
    zmm0 = _mm_and_ps(_mm_cmpeq_ps(temp0_88, zx.o(0), 7), temp0_213)
    
    if (_mm_movemask_ps(zmm0) != 0)
        float temp0_217[0x4] = _mm_rsqrt_ps(temp0_88)
        float temp0_219[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_88, temp0_217), temp0_217)
        float temp0_222[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_219), temp0_217), data_142d3f640)
        float temp0_223[0x4] = _mm_rcp_ps(temp0_222)
        float temp0_224[0x4] = _mm_mul_ps(temp0_222, temp0_223)
        zmm3 = _mm_and_ps(
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_224), temp0_223), zmm5), zmm0)
        zmm5 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm5), zmm3)
    
    zmm8 = arg17
    zmm9 = arg16
    arg11 = arg15
    float temp0_231[0x4] = __subps_xmmps_memps(zmm5, arg20)
    float temp0_232[0x4] = __cmpps_xmmps_memps_immb(temp0_231, data_142fc95d0, 1)
    result = _mm_movemask_ps(temp0_232)
    float arg_290[0x4]
    float arg_2a0[0x4]
    
    if (result != 0)
        float temp0_234[0x4] = _mm_mul_ps(arg_290, temp0_231)
        float temp0_235[0x4] = _mm_mul_ps(arg_2a0, temp0_231)
        zmm4 = _mm_mul_ps(arg21, temp0_231)
        zmm3 = zmm9
        char temp0_237 = result & 1
        
        if (temp0_237 == 0)
            zmm2 = zmm8
            
            if (temp0_237 != 0)
                goto label_1400c70c2
            
            goto label_1400c7e69
        
        zmm3 = zmm9
        zmm3[0] = zmm3[0] + temp0_234[0]
        zmm2 = zmm8
        
        if (temp0_237 != 0)
        label_1400c70c2:
            zmm2 = zmm8
            zmm2[0] = zmm2[0] + temp0_235[0]
            zmm1 = arg11
            
            if (temp0_237 == 0)
                goto label_1400c7e73
            
            goto label_1400c70d4
        
    label_1400c7e69:
        zmm1 = arg11
        bool cond:5_1
        bool cond:6_1
        bool cond:7_1
        bool cond:8_1
        
        if (temp0_237 == 0)
        label_1400c7e73:
            zmm9 = _mm_add_ps(zmm9, temp0_234)
            char temp2_1 = result & 2
            cond:5_1 = temp2_1 != 0
            cond:6_1 = temp2_1 == 0
            cond:7_1 = temp2_1 == 0
            cond:8_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
                goto label_1400c70f5
            
            goto label_1400c7e80
        
    label_1400c70d4:
        zmm1 = arg11
        zmm1[0] = zmm1[0] f+ zmm4.d
        zmm9 = _mm_add_ps(zmm9, temp0_234)
        char temp1_1 = result & 2
        cond:5_1 = temp1_1 != 0
        cond:6_1 = temp1_1 == 0
        cond:7_1 = temp1_1 == 0
        cond:8_1 = temp1_1 != 0
        
        if (temp1_1 != 0)
        label_1400c70f5:
            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm3, 1), zmm3, 0xe2)
            zmm8 = _mm_add_ps(zmm8, temp0_235)
            
            if (cond:6_1)
                goto label_1400c7e8a
            
            goto label_1400c710e
        
    label_1400c7e80:
        zmm8 = _mm_add_ps(zmm8, temp0_235)
        
        if (not(cond:5_1))
        label_1400c7e8a:
            arg11 = _mm_add_ps(arg11, zmm4)
            
            if (cond:8_1)
                goto label_1400c7127
            
            goto label_1400c7e94
        
    label_1400c710e:
        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm2, 1), zmm2, 0xe2)
        arg11 = _mm_add_ps(arg11, zmm4)
        bool cond:9_1
        bool cond:10_1
        bool cond:11_1
        bool cond:12_1
        
        if (not(cond:7_1))
        label_1400c7127:
            zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm1, 1), zmm1, 0xe2)
            char temp4_1 = result & 4
            cond:9_1 = temp4_1 == 0
            cond:10_1 = temp4_1 != 0
            cond:11_1 = temp4_1 != 0
            cond:12_1 = temp4_1 == 0
            
            if (temp4_1 == 0)
                goto label_1400c7e9d
            
            goto label_1400c713b
        
    label_1400c7e94:
        char temp3_1 = result & 4
        cond:9_1 = temp3_1 == 0
        cond:10_1 = temp3_1 != 0
        cond:11_1 = temp3_1 != 0
        cond:12_1 = temp3_1 == 0
        
        if (temp3_1 != 0)
        label_1400c713b:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x32), 0x84)
            
            if (not(cond:9_1))
            label_1400c714d:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x32), 0x84)
                
                if (cond:12_1)
                    goto label_1400c7ea9
                
                goto label_1400c715f
        else
        label_1400c7e9d:
            
            if (cond:10_1)
                goto label_1400c714d
        
        bool cond:13_1
        bool cond:14_1
        bool cond:15_1
        bool cond:16_1
        
        if (not(cond:11_1))
        label_1400c7ea9:
            char temp6_1 = result & 8
            cond:13_1 = temp6_1 != 0
            cond:14_1 = temp6_1 == 0
            cond:15_1 = temp6_1 != 0
            cond:16_1 = temp6_1 == 0
            
            if (temp6_1 != 0)
                goto label_1400c7176
            
            goto label_1400c7eb2
        
    label_1400c715f:
        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg11, zmm1, 0x32), 0x84)
        char temp5_1 = result & 8
        cond:13_1 = temp5_1 != 0
        cond:14_1 = temp5_1 == 0
        cond:15_1 = temp5_1 != 0
        cond:16_1 = temp5_1 == 0
        
        if (temp5_1 != 0)
        label_1400c7176:
            zmm9 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x23), 0x24)
            
            if (cond:14_1)
                goto label_1400c7ebc
            
            goto label_1400c718a
        
    label_1400c7eb2:
        zmm9 = zmm3
        
        if (cond:13_1)
        label_1400c718a:
            zmm8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x23), 0x24)
            
            if (cond:15_1)
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg11, zmm1, 0x23), 0x24)
        else
        label_1400c7ebc:
            zmm8 = zmm2
            
            if (not(cond:16_1))
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg11, zmm1, 0x23), 0x24)
        
        zmm5 = _mm_and_ps(_mm_add_ps(temp0_231, arg14), temp0_232)
        arg11 = zmm1
        arg14 = _mm_or_ps(_mm_andnot_ps(temp0_232, arg14), zmm5)
    
    arg2 = zx.q(arg2.d + 4)
    
    if (arg2.d s>= arg5)
        break
    
    arg15 = arg11
    arg16 = zmm9
    arg17 = zmm8
    zmm0 = *(arg10 + sx.q((arg2 << 2).d))
    zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0)
    int64_t rax_88 = sx.q(zmm1[0])
    int64_t rbx_8 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
    int64_t rbp_40 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
    int64_t rsi_7 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
    zmm1 = *(arg8 + (rsi_7 << 2) + 4)
    float temp0_650[0x4] = _mm_unpacklo_ps(*(arg8 + (rbp_40 << 2)), (*(arg8 + (rsi_7 << 2)))[0].q)
    float temp0_651[0x4] = _mm_unpacklo_ps(*(arg8 + (rbp_40 << 2) + 4), zmm1[0].q)
    zmm4 = *(arg8 + (rax_88 << 2) + 4)
    zmm1 = _mm_unpacklo_ps(*(arg8 + (rax_88 << 2)), (*(arg8 + (rbx_8 << 2)))[0].q)[0].q
        | temp0_650[0].q << 0x40
    zmm4 = _mm_unpacklo_ps(zmm4, (*(arg8 + (rbx_8 << 2) + 4))[0].q).q | temp0_651[0].q << 0x40
    float temp0_654[0x4] =
        _mm_unpacklo_ps(*(arg8 + (rax_88 << 2) + 8), (*(arg8 + (rbx_8 << 2) + 8))[0].q)
    float temp0_655[0x4] =
        _mm_unpacklo_ps(*(arg8 + (rbp_40 << 2) + 8), (*(arg8 + (rsi_7 << 2) + 8))[0].q)
    zmm2 = temp0_654[0].q | temp0_655[0].q << 0x40
    arg_40 = zmm1
    arg_50 = zmm4
    arg_70 = zx.o(0)
    zmm0 = (*arg6)[3]
    float temp0_656[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    __return_addr.o = temp0_656
    arg_10 = temp0_656
    arg12 = temp0_656
    arg_30 = temp0_656
    zmm9 = *arg6
    zmm8 = (*arg6)[1]
    arg11 = (*arg6)[2]
    float temp0_657[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_658[0x4] = _mm_mul_ps(zmm2, temp0_657)
    arg11 = _mm_shuffle_ps(arg11, arg11, 0)
    float temp0_660[0x4] = _mm_mul_ps(zmm1, arg11)
    float temp0_661[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float temp0_662[0x4] = _mm_mul_ps(zmm4, temp0_661)
    float temp0_664[0x4] = _mm_sub_ps(temp0_658, _mm_mul_ps(zmm4, arg11))
    float temp0_666[0x4] = _mm_sub_ps(temp0_660, _mm_mul_ps(zmm2, temp0_661))
    float temp0_668[0x4] = _mm_sub_ps(temp0_662, _mm_mul_ps(zmm1, temp0_657))
    float temp0_669[0x4] = _mm_add_ps(temp0_664, temp0_664)
    float temp0_670[0x4] = _mm_add_ps(temp0_666, temp0_666)
    float temp0_671[0x4] = _mm_add_ps(temp0_668, temp0_668)
    float temp0_672[0x4] = _mm_mul_ps(temp0_656, temp0_669)
    float temp0_673[0x4] = _mm_mul_ps(temp0_656, temp0_670)
    float temp0_674[0x4] = __addps_xmmps_memps(temp0_672, arg_40)
    float temp0_675[0x4] = __addps_xmmps_memps(temp0_673, arg_50)
    float temp0_677[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_656, temp0_671), zmm2)
    float temp0_678[0x4] = _mm_mul_ps(temp0_671, temp0_657)
    zmm4 = _mm_mul_ps(temp0_669, arg11)
    float temp0_680[0x4] = _mm_mul_ps(temp0_670, temp0_661)
    float temp0_683[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_678, _mm_mul_ps(temp0_670, arg11)), temp0_674)
    zmm4 = _mm_add_ps(_mm_sub_ps(zmm4, _mm_mul_ps(temp0_671, temp0_661)), temp0_675)
    float temp0_689[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_680, _mm_mul_ps(temp0_669, temp0_657)), temp0_677)
    zmm2 = arg6[1][0]
    zmm3 = (*arg6)[5]
    float temp0_691[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_683)
    float temp0_693[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm4)
    zmm0 = (*arg6)[6]
    float temp0_695[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_689)
    arg_290 = temp0_691
    arg18 = temp0_693
    arg_2a0 = temp0_693
    arg13 = temp0_695
    arg21 = temp0_695
    int64_t rbx_9 = 0
    arg19 = temp0_691
label_1400c73bc:
    zmm2 = *(&arg_190 + rbx_9)
    float temp0_696[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    char temp0_698 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_696, temp0_691, 1))
    
    if (temp0_698 != 0)
        if ((temp0_698 & 1) == 0)
            if ((temp0_698 & 2) != 0)
                goto label_1400c74bd
            
            goto label_1400c73ed
        
        *(&__return_addr + (rbx_9 << 2)) = zmm2[0]
        
        if ((temp0_698 & 2) != 0)
        label_1400c74bd:
            *(&__return_addr:4 + (rbx_9 << 2)) = zmm2[0]
            
            if ((temp0_698 & 4) == 0)
                goto label_1400c73f5
            
            goto label_1400c74cb
        
    label_1400c73ed:
        
        if ((temp0_698 & 4) != 0)
        label_1400c74cb:
            (&arg_8)[rbx_9] = zmm2[0]
            
            if ((temp0_698 & 8) != 0)
                (&arg_c)[rbx_9] = zmm2[0]
        else
        label_1400c73f5:
            
            if ((temp0_698 & 8) != 0)
                (&arg_c)[rbx_9] = zmm2[0]
    
    float temp0_699[0x4] = _mm_cmpeq_ps(temp0_696, temp0_691, 5)
    
    if (_mm_movemask_ps(temp0_699) != 0)
        zmm3 = *(&arg_180 + rbx_9)
        float temp0_701[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        char temp0_704 =
            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(temp0_691, temp0_701, 1), temp0_699))
        
        if (temp0_704 != 0)
            if ((temp0_704 & 1) == 0)
                if ((temp0_704 & 2) != 0)
                    goto label_1400c74eb
                
                goto label_1400c7442
            
            *(&__return_addr + (rbx_9 << 2)) = zmm3[0]
            
            if ((temp0_704 & 2) != 0)
            label_1400c74eb:
                *(&__return_addr:4 + (rbx_9 << 2)) = zmm3[0]
                
                if ((temp0_704 & 4) == 0)
                    goto label_1400c744a
                
                goto label_1400c74f9
            
        label_1400c7442:
            
            if ((temp0_704 & 4) != 0)
            label_1400c74f9:
                (&arg_8)[rbx_9] = zmm3[0]
                
                if ((temp0_704 & 8) != 0)
                    (&arg_c)[rbx_9] = zmm3[0]
            else
            label_1400c744a:
                
                if ((temp0_704 & 8) != 0)
                    (&arg_c)[rbx_9] = zmm3[0]
        
        char temp0_707 =
            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(temp0_691, temp0_701, 5), temp0_699))
        
        if (temp0_707 != 0)
            zmm0 = *(&arg_290 + (rbx_9 << 2))
            
            if ((temp0_707 & 1) == 0)
                if ((temp0_707 & 2) != 0)
                    goto label_1400c751e
                
                goto label_1400c747e
            
            *(&__return_addr + (rbx_9 << 2)) = zmm0[0]
            
            if ((temp0_707 & 2) != 0)
            label_1400c751e:
                *(&__return_addr:4 + (rbx_9 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                
                if ((temp0_707 & 4) == 0)
                    goto label_1400c7486
                
                goto label_1400c7531
            
        label_1400c747e:
            
            if ((temp0_707 & 4) != 0)
            label_1400c7531:
                (&arg_8)[rbx_9] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                
                if ((temp0_707 & 8) != 0)
                    (&arg_c)[rbx_9] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
            else
            label_1400c7486:
                
                if ((temp0_707 & 8) != 0)
                    (&arg_c)[rbx_9] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
    
    if (rbx_9 != 8)
        *(&arg_2a0 + (rbx_9 << 2))
        break

int32_t* rcx
int64_t* rdx_3

if (arg2.d s>= arg9)
    rcx = arg41
    rdx_3 = arg42
label_1400c9e27:
    float temp0_593[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm9, zmm9[0].q), zmm9)
    float temp0_594[0x4] = _mm_shuffle_ps(temp0_593, temp0_593, 0xe5)
    temp0_594[0] = temp0_594[0] + temp0_593[0]
    float temp0_596[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm8, zmm8[0].q), zmm8)
    float temp0_597[0x4] = _mm_shuffle_ps(temp0_596, temp0_596, 0xe5)
    temp0_597[0] = temp0_597[0] + temp0_596[0]
    float temp0_598[0x4] = _mm_unpacklo_ps(temp0_594, temp0_597[0].q)
    float temp0_600[0x4] = _mm_add_ps(_mm_unpackhi_pd(arg11, arg11[0].q), arg11)
    float temp0_601[0x4] = _mm_shuffle_ps(temp0_600, temp0_600, 0xe5)
    temp0_601[0] = temp0_601[0] + temp0_600[0]
    float temp0_602[0x4] = _mm_add_ps(zx.o(*rdx_3)[0].q | rdx_3[1].d[0].q << 0x40, 
        temp0_598[0].q | temp0_601[0].q << 0x40)
    *rdx_3 = temp0_602[0]
    float temp0_603[0x4] = _mm_shuffle_ps(temp0_602, temp0_602, 0xe5)
    temp0_602[0].q = temp0_602 u>> 0x40
    *(rdx_3 + 4) = temp0_603[0]
    rdx_3[1].d = temp0_602[0]
    float temp0_605[0x4] = _mm_add_ps(_mm_shuffle_epi32(arg14, 0xee), arg14)
    float temp0_606[0x4] = _mm_shuffle_ps(temp0_605, temp0_605, 0xe5)
    temp0_606[0] = temp0_606[0] + temp0_605[0]
    temp0_606[0] = temp0_606[0] f+ *rcx
    *rcx = temp0_606[0]
    return result

zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg2.d), 0), data_142e11d00)
zmm0 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), zmm1)
int64_t rax_60 = sx.q(arg2.d << 2)
uint32_t temp0_251 = _mm_movemask_ps(zmm0)
arg17 = zmm8
arg16 = zmm9
arg15 = arg11

if ((zx.q(temp0_251) & 0xfffffff9) != 9)
    if ((temp0_251.b & 1) != 0)
        __return_addr.d = *(arg10 + rax_60)
    
    if ((temp0_251.b & 2) == 0)
        if ((temp0_251.b & 4) != 0)
            goto label_1400cb078
        
        goto label_1400c8f66
    
    __return_addr:4.d = *(arg10 + rax_60 + 4)
    
    if ((temp0_251.b & 4) == 0)
    label_1400c8f66:
        
        if ((temp0_251.b & 8) != 0)
            arg_c = *(arg10 + rax_60 + 0xc)
    else
    label_1400cb078:
        arg_8 = *(arg10 + rax_60 + 8)
        
        if ((temp0_251.b & 8) != 0)
            arg_c = *(arg10 + rax_60 + 0xc)
    
    zmm1 = __return_addr.o
else
    zmm1 = *(arg10 + rax_60)

zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm0
int64_t rdx_4 = sx.q(zmm2[0])
int64_t rax_63 = arg8 + (rdx_4 << 2)
zmm1 = *(arg8 + (rdx_4 << 2))
int64_t rbp_6 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
int64_t rdx_6 = arg8 + (rbp_6 << 2)
float temp0_255[0x4] = _mm_unpacklo_ps(zmm1, (*(arg8 + (rbp_6 << 2)))[0].q)
int64_t rbp_8 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
int64_t rbx_5 = arg8 + (rbp_8 << 2)
zmm3 = *(arg8 + (rbp_8 << 2))
int64_t rdi_3 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
int64_t rbp_10 = arg8 + (rdi_3 << 2)
float temp0_258[0x4] = _mm_unpacklo_ps(zmm3, (*(arg8 + (rdi_3 << 2)))[0].q)
zmm1 = temp0_255[0].q | temp0_258[0].q << 0x40
zmm3 = data_142fc95e0 & zmm0
float (* r14)[0x4] = zx.q(zmm3[0])
zmm8 = *(r14 + rax_63)
float (* r15)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d)
float temp0_260[0x4] = _mm_unpacklo_ps(zmm8, (*(r15 + rdx_6)).q)
float (* r13)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
zmm4 = *(r13 + rbx_5)
float (* r10)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0])
zmm4 = _mm_unpacklo_ps(zmm4, (*(r10 + rbp_10))[0].q)
zmm8 = temp0_260[0].q | zmm4.q << 0x40
zmm3 = data_142fc95f0 & zmm0
float temp0_265[0x4] =
    _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_63), (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d) + rdx_6)).q)
zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d) + rbx_5), 
    (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbp_10))[0].q)
zmm6 = temp0_265[0].q | zmm4.q << 0x40
float arg_1f0[0x4] = zx.o(0)
zmm5 = (*arg6)[3]
float temp0_269[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
__return_addr.o = temp0_269
arg_10 = temp0_269
zmm7 = *arg6
zmm2 = (*arg6)[1]
zmm4 = (*arg6)[2]
float temp0_270[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_271[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_272[0x4] = _mm_mul_ps(zmm8, temp0_271)
float temp0_273[0x4] = _mm_mul_ps(temp0_271, zmm6)
float temp0_274[0x4] = _mm_mul_ps(zmm6, temp0_270)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_276[0x4] = _mm_mul_ps(temp0_270, zmm1)
float temp0_277[0x4] = _mm_mul_ps(zmm1, zmm4)
float temp0_278[0x4] = _mm_mul_ps(zx.o(0), temp0_269)
float temp0_280[0x4] = _mm_sub_ps(temp0_274, _mm_mul_ps(zmm4, zmm8))
float temp0_281[0x4] = _mm_sub_ps(temp0_277, temp0_273)
float temp0_282[0x4] = _mm_sub_ps(temp0_272, temp0_276)
float temp0_283[0x4] = _mm_sub_ps(temp0_278, temp0_278)
float temp0_284[0x4] = _mm_add_ps(temp0_280, temp0_280)
float temp0_285[0x4] = _mm_add_ps(temp0_281, temp0_281)
float temp0_286[0x4] = _mm_add_ps(temp0_282, temp0_282)
float temp0_287[0x4] = _mm_add_ps(temp0_283, temp0_283)
arg_40 = temp0_284
arg_50 = temp0_285
float arg_60[0x4] = temp0_286
arg_70 = temp0_287
float temp0_288[0x4] = _mm_mul_ps(temp0_287, temp0_269)
float temp0_289[0x4] = _mm_mul_ps(temp0_269, temp0_284)
float temp0_290[0x4] = _mm_mul_ps(temp0_269, temp0_285)
float temp0_291[0x4] = _mm_mul_ps(temp0_269, temp0_286)
float temp0_292[0x4] = __addps_xmmps_memps(temp0_289, zmm1)
float temp0_293[0x4] = __addps_xmmps_memps(temp0_290, zmm8)
float temp0_294[0x4] = __addps_xmmps_memps(temp0_291, zmm6)
arg_30 = temp0_269
float arg_2c0[0x4] = temp0_292
float arg_2d0[0x4] = temp0_293
float arg_2e0[0x4] = temp0_294
float arg_2f0[0x4] = __addps_xmmps_memps(temp0_288, arg_1f0)
zmm4 = *arg6
zmm5 = (*arg6)[1]
zmm7 = (*arg6)[2]
float temp0_296[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_298[0x4] = _mm_mul_ps(temp0_285, zmm4)
zmm4 = _mm_mul_ps(zmm4, temp0_286)
float temp0_300[0x4] = _mm_mul_ps(temp0_286, temp0_296)
float temp0_301[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_302[0x4] = _mm_mul_ps(temp0_296, temp0_284)
float temp0_303[0x4] = _mm_mul_ps(temp0_284, temp0_301)
float temp0_305[0x4] = _mm_sub_ps(temp0_300, _mm_mul_ps(temp0_301, temp0_285))
float temp0_306[0x4] = _mm_sub_ps(temp0_303, zmm4)
float temp0_307[0x4] = _mm_sub_ps(temp0_298, temp0_302)
float temp0_308[0x4] = _mm_add_ps(temp0_305, temp0_292)
float temp0_309[0x4] = _mm_add_ps(temp0_306, temp0_293)
float temp0_310[0x4] = _mm_add_ps(temp0_307, temp0_294)
zmm1 = arg6[1][0]
zmm2 = (*arg6)[5]
float temp0_312[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_308)
zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_309)
zmm2 = (*arg6)[6]
float temp0_316[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_310)
float arg_260[0x4] = temp0_312
float arg_f0[0x4] = zmm4
uint128_t arg_270 = zmm4
int64_t rdx_7 = 0
label_1400c924c:
zmm4 = *(&arg_190 + rdx_7)
float temp0_317[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_318[0x4] = _mm_cmpeq_ps(temp0_317, temp0_312, 1)

if (_mm_movemask_ps(_mm_and_ps(temp0_318, zmm0)) != 0)
    char temp0_321 = _mm_movemask_ps(temp0_318)
    
    if ((temp0_321 & 1) == 0)
        if ((temp0_321 & 2) != 0)
            goto label_1400c935d
        
        goto label_1400c9283
    
    *(&__return_addr + (rdx_7 << 2)) = zmm4.d
    
    if ((temp0_321 & 2) != 0)
    label_1400c935d:
        *(&__return_addr:4 + (rdx_7 << 2)) = zmm4.d
        
        if ((temp0_321 & 4) == 0)
            goto label_1400c928b
        
        goto label_1400c936b
    
label_1400c9283:
    
    if ((temp0_321 & 4) != 0)
    label_1400c936b:
        (&arg_8)[rdx_7] = zmm4.d
        
        if ((temp0_321 & 8) != 0)
            (&arg_c)[rdx_7] = zmm4.d
    else
    label_1400c928b:
        
        if ((temp0_321 & 8) != 0)
            (&arg_c)[rdx_7] = zmm4.d

float temp0_322[0x4] = _mm_cmpeq_ps(temp0_317, temp0_312, 5)

if (_mm_movemask_ps(_mm_and_ps(zmm0, temp0_322)) != 0)
    zmm5 = *(&arg_180 + rdx_7)
    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_312, zmm4, 1), temp0_322)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm0)) != 0)
        char temp0_330 = _mm_movemask_ps(zmm6)
        
        if ((temp0_330 & 1) == 0)
            if ((temp0_330 & 2) != 0)
                goto label_1400c938b
            
            goto label_1400c92e4
        
        *(&__return_addr + (rdx_7 << 2)) = zmm5[0]
        
        if ((temp0_330 & 2) != 0)
        label_1400c938b:
            *(&__return_addr:4 + (rdx_7 << 2)) = zmm5[0]
            
            if ((temp0_330 & 4) == 0)
                goto label_1400c92ec
            
            goto label_1400c9399
        
    label_1400c92e4:
        
        if ((temp0_330 & 4) != 0)
        label_1400c9399:
            (&arg_8)[rdx_7] = zmm5[0]
            
            if ((temp0_330 & 8) != 0)
                (&arg_c)[rdx_7] = zmm5[0]
        else
        label_1400c92ec:
            
            if ((temp0_330 & 8) != 0)
                (&arg_c)[rdx_7] = zmm5[0]
    
    zmm2 = _mm_and_ps(_mm_cmpeq_ps(temp0_312, zmm4, 5), temp0_322)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm0)) != 0)
        zmm3 = *(&arg_260 + (rdx_7 << 2))
        char temp0_335 = _mm_movemask_ps(zmm2)
        
        if ((temp0_335 & 1) == 0)
            if ((temp0_335 & 2) != 0)
                goto label_1400c93be
            
            goto label_1400c9326
        
        *(&__return_addr + (rdx_7 << 2)) = zmm3[0]
        
        if ((temp0_335 & 2) != 0)
        label_1400c93be:
            *(&__return_addr:4 + (rdx_7 << 2)) = _mm_shuffle_epi32(zmm3, 0xe5)[0]
            
            if ((temp0_335 & 4) == 0)
                goto label_1400c932e
            
            goto label_1400c93d1
        
    label_1400c9326:
        
        if ((temp0_335 & 4) != 0)
        label_1400c93d1:
            (&arg_8)[rdx_7] = _mm_shuffle_epi32(zmm3, 0x4e)[0]
            
            if ((temp0_335 & 8) != 0)
                (&arg_c)[rdx_7] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
        else
        label_1400c932e:
            
            if ((temp0_335 & 8) != 0)
                (&arg_c)[rdx_7] = _mm_shuffle_epi32(zmm3, 0xe7)[0]

if (rdx_7 != 8)
    *(&arg_270 + (rdx_7 << 2))
    return 

arg11 = __return_addr.o
zmm12 = arg_10
float temp0_339[0x4] = _mm_sub_ps(arg11, temp0_312)
zmm3 = *arg1
zmm7 = *(arg1 + 4)
float temp0_340[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_341[0x4] = _mm_sub_ps(arg11, temp0_340)
float temp0_342[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_343[0x4] = _mm_sub_ps(zmm12, temp0_342)
zmm4 = *arg3
zmm5 = (*arg3)[1]
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_345[0x4] = _mm_div_ps(temp0_341, zmm4)
float temp0_346[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_347[0x4] = _mm_div_ps(temp0_343, temp0_346)
zmm8 = (*arg3)[2]
zmm15 = _mm_cvttps_epi32(temp0_345)
float temp0_349[0x4] = _mm_cvttps_epi32(temp0_347)
float arg_e0[0x4] = zmm4
float temp0_352[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), zmm4), temp0_340)
zmm4 = __divps_xmmps_memps(*arg3 | zmm8[0].q << 0x40, data_142fc9600)
float temp0_354[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
arg19 = arg11
float temp0_356[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_352, temp0_354), arg11, 1)
zmm3 = _mm_add_epi32(zmm15, _mm_cmpeq_epi32(temp0_354, temp0_354))
zmm2 = _mm_and_ps(zmm15, temp0_356)
zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_356, zmm3), zmm2)
zmm13 = temp0_349
float temp0_364[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_349), temp0_346), temp0_342)
float temp0_365[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
float temp0_366[0x4] = _mm_add_ps(temp0_364, temp0_365)
float temp0_367[0x4] = _mm_cmpeq_ps(temp0_366, zmm12, 1)
char temp0_369 = _mm_movemask_ps(_mm_and_ps(temp0_367, zmm0))
zmm5 = *(arg1 + 8)
float temp0_370[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm14 = temp0_269
float temp0_371[0x4] = _mm_sub_ps(zmm14, temp0_370)
float temp0_372[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
zmm9 = _mm_cvttps_epi32(_mm_div_ps(temp0_371, temp0_372))
zmm7 = zmm12
zmm12 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_372), temp0_370)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
__return_addr.o = zmm1
float temp0_379[0x4] = _mm_cmpeq_ps(temp0_366, zmm7, 5)

if (temp0_369 != 0)
    zmm15 = zmm13

float temp0_380[0x4] = __subps_xmmps_memps(zmm7, arg_f0)
float temp0_381[0x4] = _mm_mul_ps(temp0_339, temp0_339)
zmm12 = _mm_add_ps(zmm12, zmm4)

if (_mm_movemask_ps(_mm_and_ps(temp0_379, zmm0)) != 0)
    zmm3 = __paddd_xmmdq_memdq(zmm13, data_142d3f800)

float temp0_386[0x4] = __subps_xmmps_memps(zmm14, temp0_316)
float temp0_387[0x4] = _mm_add_ps(temp0_381, zx.o(0))
float temp0_388[0x4] = _mm_mul_ps(temp0_380, temp0_380)
zmm6 = _mm_and_ps(zmm15, temp0_367)
arg11 = _mm_or_ps(_mm_andnot_ps(temp0_367, zmm3), zmm6)
arg_10 = arg11
float temp0_392[0x4] = _mm_cmpeq_ps(zmm12, zmm14, 5)
zmm12 = _mm_cmpeq_ps(zmm12, zmm14, 1)

if (_mm_movemask_ps(_mm_and_ps(zmm12, zmm0)) != 0)
    zmm15 = zmm9

zmm13 = _mm_add_ps(temp0_387, temp0_388)
float temp0_397[0x4] = _mm_mul_ps(temp0_386, temp0_386)

if (_mm_movemask_ps(_mm_and_ps(temp0_392, zmm0)) != 0)
    zmm3 = __paddd_xmmdq_memdq(zmm9, data_142d3f800)

zmm13 = _mm_add_ps(zmm13, temp0_397)
arg13 = zmm13
zmm15 = _mm_and_ps(zmm15, zmm12)
zmm12 = _mm_or_ps(_mm_andnot_ps(zmm12, zmm3), zmm15)
float temp0_407[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), arg_e0), temp0_340)
float temp0_410[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(arg11), temp0_346), temp0_342)
arg12 = zmm12
float temp0_413[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_372), temp0_370)
float temp0_414[0x4] = _mm_add_ps(temp0_354, temp0_407)
float temp0_415[0x4] = _mm_add_ps(temp0_365, temp0_410)
zmm4 = _mm_add_ps(zmm4, temp0_413)
float temp0_417[0x4] = _mm_sub_ps(arg19, temp0_414)
float temp0_418[0x4] = _mm_sub_ps(zmm7, temp0_415)
zmm14 = _mm_sub_ps(zmm14, zmm4)
float temp0_420[0x4] = _mm_div_ps(temp0_417, arg_e0)
float temp0_421[0x4] = _mm_div_ps(temp0_418, temp0_346)
zmm14 = _mm_div_ps(zmm14, temp0_372)
arg_40 = temp0_420
arg_60 = zmm14
int64_t rcx_1 = 0
zmm2 = _mm_cmpeq_epi32(temp0_420, temp0_420)
label_1400c9699:
zmm1 = _mm_cmpeq_epi32(zmm1, zmm2)

if (_mm_movemask_ps(zmm1 & zmm0) != 0)
    char temp0_426 = _mm_movemask_ps(zmm1)
    
    if ((temp0_426 & 1) == 0)
        if ((temp0_426 & 2) != 0)
            goto label_1400c977f
        
        goto label_1400c96bf
    
    *(&__return_addr + (rcx_1 << 2)) = 0
    
    if ((temp0_426 & 2) != 0)
    label_1400c977f:
        *(&__return_addr:4 + (rcx_1 << 2)) = 0
        
        if ((temp0_426 & 4) == 0)
            goto label_1400c96c7
        
        goto label_1400c978f
    
label_1400c96bf:
    
    if ((temp0_426 & 4) == 0)
    label_1400c96c7:
        
        if ((temp0_426 & 8) != 0)
            goto label_1400c979f
        
        goto label_1400c96cf
    
label_1400c978f:
    (&arg_8)[rcx_1] = 0
    
    if ((temp0_426 & 8) != 0)
    label_1400c979f:
        (&arg_c)[rcx_1] = 0
        
        if ((temp0_426 & 1) == 0)
            goto label_1400c96d7
        
        goto label_1400c97af
    
label_1400c96cf:
    
    if ((temp0_426 & 1) == 0)
    label_1400c96d7:
        
        if ((temp0_426 & 2) != 0)
            goto label_1400c97bf
        
        goto label_1400c96df
    
label_1400c97af:
    arg_40[rcx_1] = 0
    
    if ((temp0_426 & 2) != 0)
    label_1400c97bf:
        arg_40[1 + rcx_1] = 0
        
        if ((temp0_426 & 4) == 0)
            goto label_1400c96e7
        
        goto label_1400c97cf
    
label_1400c96df:
    
    if ((temp0_426 & 4) != 0)
    label_1400c97cf:
        arg_40[2 + rcx_1] = 0
        
        if ((temp0_426 & 8) != 0)
            arg_40[3 + rcx_1] = 0
    else
    label_1400c96e7:
        
        if ((temp0_426 & 8) != 0)
            arg_40[3 + rcx_1] = 0

int32_t rdx_8 = *(arg4 + rcx_1)
zmm1 =
    __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_8 - 1), 0), *(&__return_addr + (rcx_1 << 2)))

if (_mm_movemask_ps(zmm1 & zmm0) != 0)
    char temp0_430 = _mm_movemask_ps(zmm1)
    
    if ((temp0_430 & 1) == 0)
        if ((temp0_430 & 2) != 0)
            goto label_1400c97fb
        
        goto label_1400c972d
    
    *(&__return_addr + (rcx_1 << 2)) = rdx_8 - 2
    
    if ((temp0_430 & 2) != 0)
    label_1400c97fb:
        *(&__return_addr:4 + (rcx_1 << 2)) = rdx_8 - 2
        
        if ((temp0_430 & 4) == 0)
            goto label_1400c9735
        
        goto label_1400c9807
    
label_1400c972d:
    
    if ((temp0_430 & 4) == 0)
    label_1400c9735:
        
        if ((temp0_430 & 8) != 0)
            goto label_1400c9813
        
        goto label_1400c973d
    
label_1400c9807:
    (&arg_8)[rcx_1] = rdx_8 - 2
    
    if ((temp0_430 & 8) != 0)
    label_1400c9813:
        (&arg_c)[rcx_1] = rdx_8 - 2
        
        if ((temp0_430 & 1) == 0)
            goto label_1400c9745
        
        goto label_1400c981f
    
label_1400c973d:
    
    if ((temp0_430 & 1) == 0)
    label_1400c9745:
        
        if ((temp0_430 & 2) != 0)
            goto label_1400c982f
        
        goto label_1400c974d
    
label_1400c981f:
    arg_40[rcx_1] = 0x3f800000
    
    if ((temp0_430 & 2) != 0)
    label_1400c982f:
        arg_40[1 + rcx_1] = 0x3f800000
        
        if ((temp0_430 & 4) == 0)
            goto label_1400c9755
        
        goto label_1400c983f
    
label_1400c974d:
    
    if ((temp0_430 & 4) != 0)
    label_1400c983f:
        arg_40[2 + rcx_1] = 0x3f800000
        
        if ((temp0_430 & 8) != 0)
            arg_40[3 + rcx_1] = 0x3f800000
    else
    label_1400c9755:
        
        if ((temp0_430 & 8) != 0)
            arg_40[3 + rcx_1] = 0x3f800000

if (rcx_1 == 8)
    zmm8 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm7 = __return_addr.o
    zmm3 = arg_10
    zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
    zmm1 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), zmm2[0].q)
    zmm4 = _mm_add_epi32(zmm1, zmm3)
    zmm6 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    int32_t temp0_445[0x4] = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm6), 0xe8), 
        _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm6), 0xe8)[0].q)
    zmm5 = _mm_add_epi32(temp0_445, arg12)
    float (* rax_83)[0x4] = *(arg7 + 0x10)
    zmm5 = _mm_slli_epi32(zmm5, 2) & zmm0
    int64_t rdx_10 = sx.q(zmm5[0])
    zmm15 = *(rax_83 + rdx_10)
    int64_t rdx_12 = sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])
    float temp0_449[0x4] = _mm_unpacklo_ps(zmm15, (*(rax_83 + rdx_12))[0].q)
    int64_t rbp_11 = sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])
    zmm2 = *(rax_83 + rbp_11)
    int64_t rbp_13 = sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])
    float temp0_452[0x4] = _mm_unpacklo_ps(zmm2, (*(rax_83 + rbp_13))[0].q)
    zmm15 = temp0_449[0].q | temp0_452[0].q << 0x40
    zmm13 = _mm_cmpeq_epi32(zmm13, zmm13)
    zmm7 = _mm_sub_epi32(zmm7, zmm13)
    zmm2 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
    int32_t temp0_460[0x4] =
        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm8), 0xe8), zmm2[0].q)
    zmm2 = _mm_add_epi32(temp0_460, zmm3)
    zmm5 = _mm_shuffle_epi32(zmm2, 0xf5)
    zmm7 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm6), 0xe8)[0].q), 
            arg12), 
        2)
    zmm4 = _mm_add_epi32(zmm4, zmm8)
    zmm2 = _mm_shuffle_epi32(zmm4, 0xf5)
    zmm8 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm6), 0xe8), 
        _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8)[0].q)
    zmm7 &= zmm0
    float temp0_478[0x4] = _mm_unpacklo_ps(*(rax_83 + sx.q(zmm7[0])), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5)[0])))[0].q)
    float temp0_481[0x4] = _mm_unpacklo_ps(*(rax_83 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e)[0])), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm7, 0xe7).d))).q)
    float temp0_482[0x4] = _mm_sub_ps(temp0_478[0].q | temp0_481[0].q << 0x40, zmm15)
    zmm11 = arg_40
    float temp0_484[0x4] = _mm_add_ps(_mm_mul_ps(temp0_482, zmm11), zmm15)
    zmm3 = _mm_sub_epi32(zmm3, zmm13)
    zmm1 = _mm_add_epi32(zmm1, zmm3)
    zmm2 = _mm_shuffle_epi32(zmm1, 0xf5)
    zmm4 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm6), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8)[0].q), 
            arg12), 
        2) & zmm0
    float temp0_496[0x4] = _mm_unpacklo_ps(*(rax_83 + sx.q(zmm4.d)), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q)
    float temp0_499[0x4] = _mm_unpacklo_ps(*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d))).q)
    zmm1 = temp0_496[0].q | temp0_499[0].q << 0x40
    zmm3 = _mm_add_epi32(zmm3, temp0_460)
    zmm2 = _mm_shuffle_epi32(zmm3, 0xf5)
    zmm4 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8)[0].q), 
            arg12), 
        2) & zmm0
    float temp0_510[0x4] = _mm_unpacklo_ps(*(rax_83 + sx.q(zmm4.d)), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q)
    float temp0_513[0x4] = _mm_unpacklo_ps(*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7).d))).q)
    float temp0_516[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(temp0_510[0].q | temp0_513[0].q << 0x40, zmm1), zmm11), zmm1)
    zmm4 = _mm_unpacklo_ps(*(r14 + rax_83 + rdx_10), (*(r15 + rax_83 + rdx_12))[0].q).q
        | _mm_unpacklo_ps(*(r13 + rax_83 + rbp_11), (*(r10 + rax_83 + rbp_13))[0].q)[0].q << 0x40
    zmm6 = _mm_add_epi32(zmm6, arg12)
    int32_t temp0_520[0x4] = _mm_add_epi32(temp0_445, zmm6)
    zmm6 = _mm_add_epi32(zmm6, zmm8)
    zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, arg12), 2) & zmm0
    float temp0_525[0x4] = _mm_unpacklo_ps(*(r14 + sx.q(zmm8[0]) + rax_83), 
        (*(r15 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5)[0]) + rax_83))[0].q)
    float temp0_528[0x4] = _mm_unpacklo_ps(
        *(r13 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e)[0]) + rax_83), 
        (*(r10 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + rax_83))[0].q)
    float temp0_531[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(temp0_525[0].q | temp0_528[0].q << 0x40, zmm4), zmm11), zmm4)
    zmm14 = _mm_slli_epi32(temp0_520, 2) & zmm0
    zmm4 = _mm_unpacklo_ps(*(r14 + sx.q(zmm14[0]) + rax_83), 
        (*(r15 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5)[0]) + rax_83))[0].q).q | _mm_unpacklo_ps(
        *(r13 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e)[0]) + rax_83), 
        (*(r10 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rax_83))[0].q)[0].q << 0x40
    zmm6 = _mm_slli_epi32(zmm6, 2) & zmm0
    float temp0_540[0x4] = _mm_unpacklo_ps(*(r14 + sx.q(zmm6[0]) + rax_83), 
        (*(r15 + sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0]) + rax_83))[0].q)
    float temp0_543[0x4] = _mm_unpacklo_ps(
        *(r13 + sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0]) + rax_83), 
        (*(r10 + sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0]) + rax_83))[0].q)
    float temp0_546[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(temp0_540[0].q | temp0_543[0].q << 0x40, zmm4), zmm11), zmm4)
    float temp0_549[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_516, temp0_484), temp0_421), temp0_484)
    zmm1 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_546, temp0_531), temp0_421), temp0_531), 
                temp0_549), 
            arg_60), 
        temp0_549)
    float temp0_556[0x4] = _mm_cmpeq_ps(arg13, zx.o(0), 4)
    zmm2 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), arg13, 7), temp0_556), zmm0)
    
    if (_mm_movemask_ps(zmm2) != 0)
        float temp0_561[0x4] = _mm_rsqrt_ps(arg13)
        float temp0_563[0x4] = _mm_mul_ps(_mm_mul_ps(arg13, temp0_561), temp0_561)
        zmm4 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_563), temp0_561), 
            data_142d3f640)
        float temp0_567[0x4] = _mm_rcp_ps(zmm4)
        zmm4 = _mm_mul_ps(zmm4, temp0_567)
        zmm5 = _mm_and_ps(
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), temp0_567), zmm1), zmm2)
        zmm1 = _mm_or_ps(_mm_andnot_ps(zmm2, zmm1), zmm5)
    
    rcx = arg41
    rdx_3 = arg42
    zmm8 = arg17
    zmm9 = arg16
    arg11 = arg15
    zmm2 = arg40
    float temp0_576[0x4] = _mm_sub_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0))
    zmm2 = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_576, data_142fc95d0, 1), zmm0)
    result = _mm_movemask_ps(zmm2)
    
    if (result == 0)
        goto label_1400c9e27
    
    float temp0_580[0x4] = _mm_mul_ps(arg_260, temp0_576)
    float temp0_581[0x4] = _mm_mul_ps(arg_270, temp0_576)
    float temp0_582[0x4] = _mm_mul_ps(temp0_316, temp0_576)
    zmm4 = zmm9
    char temp7_1 = result & 1
    
    if (temp7_1 == 0)
        zmm3 = zmm8
        
        if (temp7_1 != 0)
            goto label_1400caea1
        
        goto label_1400c9d9e
    
    zmm4.d = zmm9.d f+ temp0_580[0]
    zmm3 = zmm8
    
    if (temp7_1 != 0)
    label_1400caea1:
        zmm3 = zmm8
        zmm3[0] = zmm3[0] + temp0_581[0]
        zmm0 = arg11
        
        if (temp7_1 == 0)
            goto label_1400c9da8
        
        goto label_1400caeb3
    
label_1400c9d9e:
    zmm0 = arg11
    bool cond:21_1
    bool cond:22_1
    bool cond:23_1
    bool cond:24_1
    
    if (temp7_1 == 0)
    label_1400c9da8:
        zmm9 = _mm_add_ps(zmm9, temp0_580)
        char temp9_1 = result & 2
        cond:21_1 = temp9_1 != 0
        cond:22_1 = temp9_1 == 0
        cond:23_1 = temp9_1 == 0
        cond:24_1 = temp9_1 != 0
        
        if (temp9_1 != 0)
            goto label_1400caed3
        
        goto label_1400c9db4
    
label_1400caeb3:
    zmm0 = arg11
    zmm0[0] = zmm0[0] + temp0_582[0]
    zmm9 = _mm_add_ps(zmm9, temp0_580)
    char temp8_1 = result & 2
    cond:21_1 = temp8_1 != 0
    cond:22_1 = temp8_1 == 0
    cond:23_1 = temp8_1 == 0
    cond:24_1 = temp8_1 != 0
    
    if (temp8_1 != 0)
    label_1400caed3:
        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm4, 1), zmm4, 0xe2)
        zmm8 = _mm_add_ps(zmm8, temp0_581)
        
        if (cond:22_1)
            goto label_1400c9dbe
        
        goto label_1400caeec
    
label_1400c9db4:
    zmm8 = _mm_add_ps(zmm8, temp0_581)
    
    if (not(cond:21_1))
    label_1400c9dbe:
        arg11 = _mm_add_ps(arg11, temp0_582)
        
        if (cond:24_1)
            goto label_1400caf05
        
        goto label_1400c9dc8
    
label_1400caeec:
    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm3, 1), zmm3, 0xe2)
    arg11 = _mm_add_ps(arg11, temp0_582)
    bool cond:25_1
    bool cond:26_1
    bool cond:27_1
    bool cond:28_1
    
    if (not(cond:23_1))
    label_1400caf05:
        zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm0, 1), zmm0, 0xe2)
        char temp11_1 = result & 4
        cond:25_1 = temp11_1 == 0
        cond:26_1 = temp11_1 != 0
        cond:27_1 = temp11_1 != 0
        cond:28_1 = temp11_1 == 0
        
        if (temp11_1 == 0)
            goto label_1400c9dd0
        
        goto label_1400caf18
    
label_1400c9dc8:
    char temp10_1 = result & 4
    cond:25_1 = temp10_1 == 0
    cond:26_1 = temp10_1 != 0
    cond:27_1 = temp10_1 != 0
    cond:28_1 = temp10_1 == 0
    
    if (temp10_1 != 0)
    label_1400caf18:
        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x32), 0x84)
        
        if (not(cond:25_1))
        label_1400caf2a:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x32), 0x84)
            
            if (cond:28_1)
                goto label_1400c9ddc
            
            goto label_1400caf3c
    else
    label_1400c9dd0:
        
        if (cond:26_1)
            goto label_1400caf2a
    
    bool cond:29_1
    bool cond:30_1
    bool cond:31_1
    bool cond:32_1
    
    if (not(cond:27_1))
    label_1400c9ddc:
        char temp13_1 = result & 8
        cond:29_1 = temp13_1 != 0
        cond:30_1 = temp13_1 == 0
        cond:31_1 = temp13_1 != 0
        cond:32_1 = temp13_1 == 0
        
        if (temp13_1 != 0)
            goto label_1400caf52
        
        goto label_1400c9de4
    
label_1400caf3c:
    zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg11, zmm0, 0x32), 0x84)
    char temp12_1 = result & 8
    cond:29_1 = temp12_1 != 0
    cond:30_1 = temp12_1 == 0
    cond:31_1 = temp12_1 != 0
    cond:32_1 = temp12_1 == 0
    
    if (temp12_1 != 0)
    label_1400caf52:
        zmm9 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x23), 0x24)
        
        if (cond:30_1)
            goto label_1400c9dee
        
        goto label_1400caf66
    
label_1400c9de4:
    zmm9 = zmm4
    
    if (cond:29_1)
    label_1400caf66:
        zmm8 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x23), 0x24)
        
        if (cond:31_1)
            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg11, zmm0, 0x23), 0x24)
    else
    label_1400c9dee:
        zmm8 = zmm3
        
        if (not(cond:32_1))
            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg11, zmm0, 0x23), 0x24)
    
    zmm1 = _mm_and_ps(_mm_add_ps(temp0_576, arg14), zmm2)
    arg11 = zmm0
    arg14 = _mm_or_ps(_mm_andnot_ps(zmm2, arg14), zmm1)
    goto label_1400c9e27

*(&arg_10 + (rcx_1 << 2))
