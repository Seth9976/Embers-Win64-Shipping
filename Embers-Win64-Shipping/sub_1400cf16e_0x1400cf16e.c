// 函数: sub_1400cf16e
// 地址: 0x1400cf16e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t arg_c
float arg_10[0x4]
float arg_40[0x4]
float arg_60[0x4]
float arg_f0[0x4]
void arg_180
void arg_190
float arg_260[0x4]
uint128_t arg_270
int64_t rdx_3
int32_t (* r10)[0x4]
int32_t (* r13)[0x4]
int32_t (* r14)[0x4]
int32_t (* r15)[0x4]
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
int32_t zmm12[0x4]
uint128_t zmm13
int32_t zmm14[0x4]
float zmm15[0x4]
float temp0_268[0x4]
float temp0_311[0x4]
float temp0_315[0x4]

while (true)
    zmm8 = __return_addr.o
    float zmm11[0x4] = arg_10
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
        goto label_1400cf44d
    
    do
        if ((i & 1) == 0)
            if ((i & 2) != 0)
                goto label_1400cf4df
            
            goto label_1400cf419
        
        *(&__return_addr + (rbx_1 << 2)) = 0
        
        if ((i & 2) != 0)
        label_1400cf4df:
            *(&__return_addr:4 + (rbx_1 << 2)) = 0
            
            if ((i & 4) == 0)
                goto label_1400cf421
            
            goto label_1400cf4ef
        
    label_1400cf419:
        
        if ((i & 4) == 0)
        label_1400cf421:
            
            if ((i & 8) != 0)
                goto label_1400cf4ff
            
            goto label_1400cf429
        
    label_1400cf4ef:
        (&arg_8)[rbx_1] = 0
        
        if ((i & 8) != 0)
        label_1400cf4ff:
            (&arg_c)[rbx_1] = 0
            
            if ((i & 1) == 0)
                goto label_1400cf431
            
            goto label_1400cf50f
        
    label_1400cf429:
        
        if ((i & 1) == 0)
        label_1400cf431:
            
            if ((i & 2) != 0)
                goto label_1400cf51f
            
            goto label_1400cf439
        
    label_1400cf50f:
        arg_40[rbx_1] = 0
        
        if ((i & 2) != 0)
        label_1400cf51f:
            arg_40[1 + rbx_1] = 0
            
            if ((i & 4) == 0)
                goto label_1400cf441
            
            goto label_1400cf52f
        
    label_1400cf439:
        
        if ((i & 4) != 0)
        label_1400cf52f:
            arg_40[2 + rbx_1] = 0
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        else
        label_1400cf441:
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        
    label_1400cf44d:
        int32_t rbp_1 = *(arg4 + rbx_1)
        char temp0_87 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
            _mm_shuffle_epi32(zx.o(rbp_1 - 1), 0), *(&__return_addr + (rbx_1 << 2))))
        
        if (temp0_87 != 0)
            if ((temp0_87 & 1) == 0)
                if ((temp0_87 & 2) != 0)
                    goto label_1400cf55b
                
                goto label_1400cf47f
            
            *(&__return_addr + (rbx_1 << 2)) = rbp_1 - 2
            
            if ((temp0_87 & 2) != 0)
            label_1400cf55b:
                *(&__return_addr:4 + (rbx_1 << 2)) = rbp_1 - 2
                
                if ((temp0_87 & 4) == 0)
                    goto label_1400cf487
                
                goto label_1400cf567
            
        label_1400cf47f:
            
            if ((temp0_87 & 4) == 0)
            label_1400cf487:
                
                if ((temp0_87 & 8) != 0)
                    goto label_1400cf573
                
                goto label_1400cf48f
            
        label_1400cf567:
            (&arg_8)[rbx_1] = rbp_1 - 2
            
            if ((temp0_87 & 8) != 0)
            label_1400cf573:
                (&arg_c)[rbx_1] = rbp_1 - 2
                
                if ((temp0_87 & 1) == 0)
                    goto label_1400cf497
                
                goto label_1400cf57f
            
        label_1400cf48f:
            
            if ((temp0_87 & 1) == 0)
            label_1400cf497:
                
                if ((temp0_87 & 2) != 0)
                    goto label_1400cf58f
                
                goto label_1400cf49f
            
        label_1400cf57f:
            arg_40[rbx_1] = 0x3f800000
            
            if ((temp0_87 & 2) != 0)
            label_1400cf58f:
                arg_40[1 + rbx_1] = 0x3f800000
                
                if ((temp0_87 & 4) == 0)
                    goto label_1400cf4a7
                
                goto label_1400cf59f
            
        label_1400cf49f:
            
            if ((temp0_87 & 4) != 0)
            label_1400cf59f:
                arg_40[2 + rbx_1] = 0x3f800000
                
                if ((temp0_87 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
            else
            label_1400cf4a7:
                
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
    int64_t rbp_4 = sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0])
    int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0])
    int64_t rsi_2 = sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0])
    zmm6 = *(rbx_2 + rsi_2 + 4)
    float temp0_109[0x4] = _mm_unpacklo_ps(*(rbx_2 + rdi_2), (*(rbx_2 + rsi_2))[0].q)
    float temp0_110[0x4] = _mm_unpacklo_ps(*(rbx_2 + rdi_2 + 4), zmm6[0].q)
    zmm11 = *(rbx_2 + rax_10 + 4)
    zmm6 = _mm_unpacklo_ps(*(rbx_2 + rax_10), (*(rbx_2 + rbp_4)).q)[0].q | temp0_109[0].q << 0x40
    zmm11 = _mm_unpacklo_ps(zmm11, (*(rbx_2 + rbp_4 + 4))[0].q)[0].q | temp0_110[0].q << 0x40
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
    char result = _mm_movemask_ps(temp0_232)
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
                goto label_1400ced42
            
            goto label_1400cfa89
        
        zmm3 = zmm9
        zmm3[0] = zmm3[0] + temp0_234[0]
        zmm2 = zmm8
        
        if (temp0_237 != 0)
        label_1400ced42:
            zmm2 = zmm8
            zmm2[0] = zmm2[0] + temp0_235[0]
            zmm1 = arg11
            
            if (temp0_237 == 0)
                goto label_1400cfa93
            
            goto label_1400ced54
        
    label_1400cfa89:
        zmm1 = arg11
        bool cond:4_1
        bool cond:5_1
        bool cond:6_1
        bool cond:7_1
        
        if (temp0_237 == 0)
        label_1400cfa93:
            zmm9 = _mm_add_ps(zmm9, temp0_234)
            char temp2_1 = result & 2
            cond:4_1 = temp2_1 != 0
            cond:5_1 = temp2_1 == 0
            cond:6_1 = temp2_1 == 0
            cond:7_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
                goto label_1400ced75
            
            goto label_1400cfaa0
        
    label_1400ced54:
        zmm1 = arg11
        zmm1[0] = zmm1[0] f+ zmm4.d
        zmm9 = _mm_add_ps(zmm9, temp0_234)
        char temp1_1 = result & 2
        cond:4_1 = temp1_1 != 0
        cond:5_1 = temp1_1 == 0
        cond:6_1 = temp1_1 == 0
        cond:7_1 = temp1_1 != 0
        
        if (temp1_1 != 0)
        label_1400ced75:
            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm3, 1), zmm3, 0xe2)
            zmm8 = _mm_add_ps(zmm8, temp0_235)
            
            if (cond:5_1)
                goto label_1400cfaaa
            
            goto label_1400ced8e
        
    label_1400cfaa0:
        zmm8 = _mm_add_ps(zmm8, temp0_235)
        
        if (not(cond:4_1))
        label_1400cfaaa:
            arg11 = _mm_add_ps(arg11, zmm4)
            
            if (cond:7_1)
                goto label_1400ceda7
            
            goto label_1400cfab4
        
    label_1400ced8e:
        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm2, 1), zmm2, 0xe2)
        arg11 = _mm_add_ps(arg11, zmm4)
        bool cond:8_1
        bool cond:9_1
        bool cond:10_1
        bool cond:11_1
        
        if (not(cond:6_1))
        label_1400ceda7:
            zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm1, 1), zmm1, 0xe2)
            char temp4_1 = result & 4
            cond:8_1 = temp4_1 == 0
            cond:9_1 = temp4_1 != 0
            cond:10_1 = temp4_1 != 0
            cond:11_1 = temp4_1 == 0
            
            if (temp4_1 == 0)
                goto label_1400cfabd
            
            goto label_1400cedbb
        
    label_1400cfab4:
        char temp3_1 = result & 4
        cond:8_1 = temp3_1 == 0
        cond:9_1 = temp3_1 != 0
        cond:10_1 = temp3_1 != 0
        cond:11_1 = temp3_1 == 0
        
        if (temp3_1 != 0)
        label_1400cedbb:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x32), 0x84)
            
            if (not(cond:8_1))
            label_1400cedcd:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x32), 0x84)
                
                if (cond:11_1)
                    goto label_1400cfac9
                
                goto label_1400ceddf
        else
        label_1400cfabd:
            
            if (cond:9_1)
                goto label_1400cedcd
        
        bool cond:12_1
        bool cond:13_1
        bool cond:14_1
        bool cond:15_1
        
        if (not(cond:10_1))
        label_1400cfac9:
            char temp6_1 = result & 8
            cond:12_1 = temp6_1 != 0
            cond:13_1 = temp6_1 == 0
            cond:14_1 = temp6_1 != 0
            cond:15_1 = temp6_1 == 0
            
            if (temp6_1 != 0)
                goto label_1400cedf6
            
            goto label_1400cfad2
        
    label_1400ceddf:
        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg11, zmm1, 0x32), 0x84)
        char temp5_1 = result & 8
        cond:12_1 = temp5_1 != 0
        cond:13_1 = temp5_1 == 0
        cond:14_1 = temp5_1 != 0
        cond:15_1 = temp5_1 == 0
        
        if (temp5_1 != 0)
        label_1400cedf6:
            zmm9 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm9, zmm3, 0x23), 0x24)
            
            if (cond:13_1)
                goto label_1400cfadc
            
            goto label_1400cee0a
        
    label_1400cfad2:
        zmm9 = zmm3
        
        if (cond:12_1)
        label_1400cee0a:
            zmm8 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x23), 0x24)
            
            if (cond:14_1)
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg11, zmm1, 0x23), 0x24)
        else
        label_1400cfadc:
            zmm8 = zmm2
            
            if (not(cond:15_1))
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg11, zmm1, 0x23), 0x24)
        
        zmm5 = _mm_and_ps(_mm_add_ps(temp0_231, arg14), temp0_232)
        arg11 = zmm1
        arg14 = _mm_or_ps(_mm_andnot_ps(temp0_232, arg14), zmm5)
    
    arg2 = zx.q(arg2.d + 4)
    float arg_30[0x4]
    float arg_50[0x4]
    float arg_70[0x4]
    
    if (arg2.d s>= arg5)
        if (arg2.d s>= arg9)
            float temp0_592[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm9, zmm9[0].q), zmm9)
            float temp0_593[0x4] = _mm_shuffle_ps(temp0_592, temp0_592, 0xe5)
            temp0_593[0] = temp0_593[0] + temp0_592[0]
            float temp0_595[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm8, zmm8[0].q), zmm8)
            float temp0_596[0x4] = _mm_shuffle_ps(temp0_595, temp0_595, 0xe5)
            temp0_596[0] = temp0_596[0] + temp0_595[0]
            float temp0_597[0x4] = _mm_unpacklo_ps(temp0_593, temp0_596[0].q)
            float temp0_599[0x4] = _mm_add_ps(_mm_unpackhi_pd(arg11, arg11[0].q), arg11)
            float temp0_600[0x4] = _mm_shuffle_ps(temp0_599, temp0_599, 0xe5)
            temp0_600[0] = temp0_600[0] + temp0_599[0]
            float temp0_601[0x4] = _mm_add_ps(zx.o(*arg42)[0].q | arg42[1].d[0].q << 0x40, 
                temp0_597[0].q | temp0_600[0].q << 0x40)
            *arg42 = temp0_601[0]
            float temp0_602[0x4] = _mm_shuffle_ps(temp0_601, temp0_601, 0xe5)
            temp0_601[0].q = temp0_601 u>> 0x40
            *(arg42 + 4) = temp0_602[0]
            arg42[1].d = temp0_601[0]
            float temp0_604[0x4] = _mm_add_ps(_mm_shuffle_epi32(arg14, 0xee), arg14)
            float temp0_605[0x4] = _mm_shuffle_ps(temp0_604, temp0_604, 0xe5)
            temp0_605[0] = temp0_605[0] + temp0_604[0]
            temp0_605[0] = temp0_605[0] f+ *arg8
            *arg8 = temp0_605[0]
            return result
        
        arg15 = arg11
        arg16 = zmm9
        arg17 = zmm8
        zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg2.d), 0), data_142e11d00)
        zmm0 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), zmm1)
        zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm0
        int64_t rdx = sx.q(zmm2[0])
        void* rax_61 = arg10 + (rdx << 2)
        zmm1 = *(arg10 + (rdx << 2))
        int64_t rbp_5 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
        void* rdx_2 = arg10 + (rbp_5 << 2)
        float temp0_254[0x4] = _mm_unpacklo_ps(zmm1, (*(arg10 + (rbp_5 << 2)))[0].q)
        int64_t rbp_7 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
        void* rbx_4 = arg10 + (rbp_7 << 2)
        zmm3 = *(arg10 + (rbp_7 << 2))
        int64_t rdi_3 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
        void* rbp_9 = arg10 + (rdi_3 << 2)
        float temp0_257[0x4] = _mm_unpacklo_ps(zmm3, (*(arg10 + (rdi_3 << 2)))[0].q)
        zmm1 = temp0_254[0].q | temp0_257[0].q << 0x40
        zmm3 = data_142fc95e0 & zmm0
        r14 = zx.q(zmm3[0])
        zmm8 = *(r14 + rax_61)
        r15 = zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d)
        float temp0_259[0x4] = _mm_unpacklo_ps(zmm8, (*(r15 + rdx_2)).q)
        r13 = zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)
        zmm4 = *(r13 + rbx_4)
        r10 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0])
        zmm4 = _mm_unpacklo_ps(zmm4, (*(r10 + rbp_9))[0].q)
        zmm8 = temp0_259[0].q | zmm4.q << 0x40
        zmm3 = data_142fc95f0 & zmm0
        float temp0_264[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_61), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5).d) + rdx_2)).q)
        zmm4 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e).d) + rbx_4), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + rbp_9))[0].q)
        zmm6 = temp0_264[0].q | zmm4.q << 0x40
        float arg_1f0[0x4] = zx.o(0)
        zmm5 = (*arg6)[3]
        temp0_268 = _mm_shuffle_ps(zmm5, zmm5, 0)
        __return_addr.o = temp0_268
        arg_10 = temp0_268
        zmm7 = *arg6
        zmm2 = (*arg6)[1]
        zmm4 = (*arg6)[2]
        float temp0_269[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_270[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_271[0x4] = _mm_mul_ps(zmm8, temp0_270)
        float temp0_272[0x4] = _mm_mul_ps(temp0_270, zmm6)
        float temp0_273[0x4] = _mm_mul_ps(zmm6, temp0_269)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_275[0x4] = _mm_mul_ps(temp0_269, zmm1)
        float temp0_276[0x4] = _mm_mul_ps(zmm1, zmm4)
        float temp0_277[0x4] = _mm_mul_ps(zx.o(0), temp0_268)
        float temp0_279[0x4] = _mm_sub_ps(temp0_273, _mm_mul_ps(zmm4, zmm8))
        float temp0_280[0x4] = _mm_sub_ps(temp0_276, temp0_272)
        float temp0_281[0x4] = _mm_sub_ps(temp0_271, temp0_275)
        float temp0_282[0x4] = _mm_sub_ps(temp0_277, temp0_277)
        float temp0_283[0x4] = _mm_add_ps(temp0_279, temp0_279)
        float temp0_284[0x4] = _mm_add_ps(temp0_280, temp0_280)
        float temp0_285[0x4] = _mm_add_ps(temp0_281, temp0_281)
        float temp0_286[0x4] = _mm_add_ps(temp0_282, temp0_282)
        arg_40 = temp0_283
        arg_50 = temp0_284
        arg_60 = temp0_285
        arg_70 = temp0_286
        float temp0_287[0x4] = _mm_mul_ps(temp0_286, temp0_268)
        float temp0_288[0x4] = _mm_mul_ps(temp0_268, temp0_283)
        float temp0_289[0x4] = _mm_mul_ps(temp0_268, temp0_284)
        float temp0_290[0x4] = _mm_mul_ps(temp0_268, temp0_285)
        float temp0_291[0x4] = __addps_xmmps_memps(temp0_288, zmm1)
        float temp0_292[0x4] = __addps_xmmps_memps(temp0_289, zmm8)
        float temp0_293[0x4] = __addps_xmmps_memps(temp0_290, zmm6)
        arg_30 = temp0_268
        float arg_2c0[0x4] = temp0_291
        float arg_2d0[0x4] = temp0_292
        float arg_2e0[0x4] = temp0_293
        float arg_2f0[0x4] = __addps_xmmps_memps(temp0_287, arg_1f0)
        zmm4 = *arg6
        zmm5 = (*arg6)[1]
        zmm7 = (*arg6)[2]
        float temp0_295[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_297[0x4] = _mm_mul_ps(temp0_284, zmm4)
        zmm4 = _mm_mul_ps(zmm4, temp0_285)
        float temp0_299[0x4] = _mm_mul_ps(temp0_285, temp0_295)
        float temp0_300[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_301[0x4] = _mm_mul_ps(temp0_295, temp0_283)
        float temp0_302[0x4] = _mm_mul_ps(temp0_283, temp0_300)
        float temp0_304[0x4] = _mm_sub_ps(temp0_299, _mm_mul_ps(temp0_300, temp0_284))
        float temp0_305[0x4] = _mm_sub_ps(temp0_302, zmm4)
        float temp0_306[0x4] = _mm_sub_ps(temp0_297, temp0_301)
        float temp0_307[0x4] = _mm_add_ps(temp0_304, temp0_291)
        float temp0_308[0x4] = _mm_add_ps(temp0_305, temp0_292)
        float temp0_309[0x4] = _mm_add_ps(temp0_306, temp0_293)
        zmm1 = arg6[1][0]
        zmm2 = (*arg6)[5]
        temp0_311 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_307)
        zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_308)
        zmm2 = (*arg6)[6]
        temp0_315 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_309)
        arg_260 = temp0_311
        arg_f0 = zmm4
        arg_270 = zmm4
        rdx_3 = 0
        break
    
    arg15 = arg11
    arg16 = zmm9
    arg17 = zmm8
    int64_t rax_86 = sx.q((arg2 << 2).d * 3)
    zmm4 = *(arg10 + rax_86)
    zmm0 = *(arg10 + rax_86 + 0x10)
    zmm1 = *(arg10 + rax_86 + 0x20)
    float temp0_647[0x4] = _mm_shuffle_ps(
        _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0x4e), _mm_shuffle_epi32(zmm0, 0xe5)[0].q), 
        zmm1, 0xc4)
    float temp0_649[0x4] = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
    zmm4 = _mm_shuffle_ps(zmm4, zmm0, 5)
    zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm4, zmm0, 0xf8), 0x22), 0x28)
    arg_40 = temp0_649
    arg_50 = zmm4
    arg_70 = zx.o(0)
    zmm0 = (*arg6)[3]
    float temp0_654[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    __return_addr.o = temp0_654
    arg_10 = temp0_654
    arg12 = temp0_654
    arg_30 = temp0_654
    zmm9 = *arg6
    zmm8 = (*arg6)[1]
    arg11 = (*arg6)[2]
    float temp0_655[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_656[0x4] = _mm_mul_ps(temp0_655, temp0_647)
    arg11 = _mm_shuffle_ps(arg11, arg11, 0)
    float temp0_658[0x4] = _mm_mul_ps(arg11, temp0_649)
    float temp0_659[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float temp0_660[0x4] = _mm_mul_ps(temp0_659, zmm4)
    float temp0_662[0x4] = _mm_sub_ps(temp0_656, _mm_mul_ps(zmm4, arg11))
    float temp0_664[0x4] = _mm_sub_ps(temp0_658, _mm_mul_ps(temp0_647, temp0_659))
    float temp0_666[0x4] = _mm_sub_ps(temp0_660, _mm_mul_ps(temp0_649, temp0_655))
    float temp0_667[0x4] = _mm_add_ps(temp0_662, temp0_662)
    float temp0_668[0x4] = _mm_add_ps(temp0_664, temp0_664)
    float temp0_669[0x4] = _mm_add_ps(temp0_666, temp0_666)
    zmm4 = _mm_mul_ps(temp0_654, temp0_667)
    float temp0_671[0x4] = _mm_mul_ps(temp0_654, temp0_668)
    zmm4 = __addps_xmmps_memps(zmm4, arg_40)
    float temp0_673[0x4] = __addps_xmmps_memps(temp0_671, arg_50)
    float temp0_675[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_654, temp0_669), temp0_647)
    float temp0_676[0x4] = _mm_mul_ps(temp0_669, temp0_655)
    float temp0_677[0x4] = _mm_mul_ps(temp0_667, arg11)
    float temp0_678[0x4] = _mm_mul_ps(temp0_668, temp0_659)
    float temp0_681[0x4] = _mm_add_ps(_mm_sub_ps(temp0_676, _mm_mul_ps(temp0_668, arg11)), zmm4)
    float temp0_684[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_677, _mm_mul_ps(temp0_669, temp0_659)), temp0_673)
    float temp0_687[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_678, _mm_mul_ps(temp0_667, temp0_655)), temp0_675)
    zmm3 = arg6[1][0]
    zmm4 = (*arg6)[5]
    float temp0_689[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_681)
    zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_684)
    zmm0 = (*arg6)[6]
    float temp0_693[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_687)
    arg_290 = temp0_689
    arg18 = zmm4
    arg_2a0 = zmm4
    arg13 = temp0_693
    arg21 = temp0_693
    int64_t rbx_7 = 0
    arg19 = temp0_689
    zmm0 = temp0_689
    
    while (true)
        zmm2 = *(&arg_190 + rbx_7)
        float temp0_694[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        char temp0_696 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_694, zmm0, 1))
        
        if (temp0_696 != 0)
            if ((temp0_696 & 1) == 0)
                if ((temp0_696 & 2) != 0)
                    goto label_1400cf0dd
                
                goto label_1400cf00d
            
            *(&__return_addr + (rbx_7 << 2)) = zmm2[0]
            
            if ((temp0_696 & 2) != 0)
            label_1400cf0dd:
                *(&__return_addr:4 + (rbx_7 << 2)) = zmm2[0]
                
                if ((temp0_696 & 4) == 0)
                    goto label_1400cf015
                
                goto label_1400cf0eb
            
        label_1400cf00d:
            
            if ((temp0_696 & 4) != 0)
            label_1400cf0eb:
                (&arg_8)[rbx_7] = zmm2[0]
                
                if ((temp0_696 & 8) != 0)
                    (&arg_c)[rbx_7] = zmm2[0]
            else
            label_1400cf015:
                
                if ((temp0_696 & 8) != 0)
                    (&arg_c)[rbx_7] = zmm2[0]
        
        float temp0_697[0x4] = _mm_cmpeq_ps(temp0_694, zmm0, 5)
        
        if (_mm_movemask_ps(temp0_697) != 0)
            zmm3 = *(&arg_180 + rbx_7)
            float temp0_699[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            char temp0_702 =
                _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_699, 1), temp0_697))
            
            if (temp0_702 != 0)
                if ((temp0_702 & 1) == 0)
                    if ((temp0_702 & 2) != 0)
                        goto label_1400cf10b
                    
                    goto label_1400cf062
                
                *(&__return_addr + (rbx_7 << 2)) = zmm3[0]
                
                if ((temp0_702 & 2) != 0)
                label_1400cf10b:
                    *(&__return_addr:4 + (rbx_7 << 2)) = zmm3[0]
                    
                    if ((temp0_702 & 4) == 0)
                        goto label_1400cf06a
                    
                    goto label_1400cf119
                
            label_1400cf062:
                
                if ((temp0_702 & 4) != 0)
                label_1400cf119:
                    (&arg_8)[rbx_7] = zmm3[0]
                    
                    if ((temp0_702 & 8) != 0)
                        (&arg_c)[rbx_7] = zmm3[0]
                else
                label_1400cf06a:
                    
                    if ((temp0_702 & 8) != 0)
                        (&arg_c)[rbx_7] = zmm3[0]
            
            char temp0_705 =
                _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, temp0_699, 5), temp0_697))
            
            if (temp0_705 != 0)
                zmm0 = *(&arg_290 + (rbx_7 << 2))
                
                if ((temp0_705 & 1) == 0)
                    if ((temp0_705 & 2) != 0)
                        goto label_1400cf13e
                    
                    goto label_1400cf09e
                
                *(&__return_addr + (rbx_7 << 2)) = zmm0[0]
                
                if ((temp0_705 & 2) != 0)
                label_1400cf13e:
                    *(&__return_addr:4 + (rbx_7 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                    
                    if ((temp0_705 & 4) == 0)
                        goto label_1400cf0a6
                    
                    goto label_1400cf151
                
            label_1400cf09e:
                
                if ((temp0_705 & 4) != 0)
                label_1400cf151:
                    (&arg_8)[rbx_7] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                    
                    if ((temp0_705 & 8) != 0)
                        (&arg_c)[rbx_7] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
                else
                label_1400cf0a6:
                    
                    if ((temp0_705 & 8) != 0)
                        (&arg_c)[rbx_7] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
        
        if (rbx_7 == 8)
            break
        
        zmm0 = *(&arg_2a0 + (rbx_7 << 2))
        rbx_7 += 4

label_1400cfe2c:
zmm4 = *(&arg_190 + rdx_3)
float temp0_316[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_317[0x4] = _mm_cmpeq_ps(temp0_316, temp0_311, 1)

if (_mm_movemask_ps(_mm_and_ps(temp0_317, zmm0)) != 0)
    char temp0_320 = _mm_movemask_ps(temp0_317)
    
    if ((temp0_320 & 1) == 0)
        if ((temp0_320 & 2) != 0)
            goto label_1400cff3d
        
        goto label_1400cfe63
    
    *(&__return_addr + (rdx_3 << 2)) = zmm4.d
    
    if ((temp0_320 & 2) != 0)
    label_1400cff3d:
        *(&__return_addr:4 + (rdx_3 << 2)) = zmm4.d
        
        if ((temp0_320 & 4) == 0)
            goto label_1400cfe6b
        
        goto label_1400cff4b
    
label_1400cfe63:
    
    if ((temp0_320 & 4) != 0)
    label_1400cff4b:
        (&arg_8)[rdx_3] = zmm4.d
        
        if ((temp0_320 & 8) != 0)
            (&arg_c)[rdx_3] = zmm4.d
    else
    label_1400cfe6b:
        
        if ((temp0_320 & 8) != 0)
            (&arg_c)[rdx_3] = zmm4.d

float temp0_321[0x4] = _mm_cmpeq_ps(temp0_316, temp0_311, 5)

if (_mm_movemask_ps(_mm_and_ps(zmm0, temp0_321)) != 0)
    zmm5 = *(&arg_180 + rdx_3)
    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm6 = _mm_and_ps(_mm_cmpeq_ps(temp0_311, zmm4, 1), temp0_321)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm0)) != 0)
        char temp0_329 = _mm_movemask_ps(zmm6)
        
        if ((temp0_329 & 1) == 0)
            if ((temp0_329 & 2) != 0)
                goto label_1400cff6b
            
            goto label_1400cfec4
        
        *(&__return_addr + (rdx_3 << 2)) = zmm5[0]
        
        if ((temp0_329 & 2) != 0)
        label_1400cff6b:
            *(&__return_addr:4 + (rdx_3 << 2)) = zmm5[0]
            
            if ((temp0_329 & 4) == 0)
                goto label_1400cfecc
            
            goto label_1400cff79
        
    label_1400cfec4:
        
        if ((temp0_329 & 4) != 0)
        label_1400cff79:
            (&arg_8)[rdx_3] = zmm5[0]
            
            if ((temp0_329 & 8) != 0)
                (&arg_c)[rdx_3] = zmm5[0]
        else
        label_1400cfecc:
            
            if ((temp0_329 & 8) != 0)
                (&arg_c)[rdx_3] = zmm5[0]
    
    zmm2 = _mm_and_ps(_mm_cmpeq_ps(temp0_311, zmm4, 5), temp0_321)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm0)) != 0)
        zmm3 = *(&arg_260 + (rdx_3 << 2))
        char temp0_334 = _mm_movemask_ps(zmm2)
        
        if ((temp0_334 & 1) == 0)
            if ((temp0_334 & 2) != 0)
                goto label_1400cff9e
            
            goto label_1400cff06
        
        *(&__return_addr + (rdx_3 << 2)) = zmm3[0]
        
        if ((temp0_334 & 2) != 0)
        label_1400cff9e:
            *(&__return_addr:4 + (rdx_3 << 2)) = _mm_shuffle_epi32(zmm3, 0xe5)[0]
            
            if ((temp0_334 & 4) == 0)
                goto label_1400cff0e
            
            goto label_1400cffb1
        
    label_1400cff06:
        
        if ((temp0_334 & 4) != 0)
        label_1400cffb1:
            (&arg_8)[rdx_3] = _mm_shuffle_epi32(zmm3, 0x4e)[0]
            
            if ((temp0_334 & 8) != 0)
                (&arg_c)[rdx_3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]
        else
        label_1400cff0e:
            
            if ((temp0_334 & 8) != 0)
                (&arg_c)[rdx_3] = _mm_shuffle_epi32(zmm3, 0xe7)[0]

if (rdx_3 != 8)
    *(&arg_270 + (rdx_3 << 2))

arg11 = __return_addr.o
zmm12 = arg_10
float temp0_338[0x4] = _mm_sub_ps(arg11, temp0_311)
zmm3 = *arg1
zmm7 = *(arg1 + 4)
float temp0_339[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_340[0x4] = _mm_sub_ps(arg11, temp0_339)
float temp0_341[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_342[0x4] = _mm_sub_ps(zmm12, temp0_341)
zmm4 = *arg3
zmm5 = (*arg3)[1]
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_344[0x4] = _mm_div_ps(temp0_340, zmm4)
float temp0_345[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_346[0x4] = _mm_div_ps(temp0_342, temp0_345)
zmm8 = (*arg3)[2]
zmm15 = _mm_cvttps_epi32(temp0_344)
float temp0_348[0x4] = _mm_cvttps_epi32(temp0_346)
float arg_e0[0x4] = zmm4
float temp0_351[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), zmm4), temp0_339)
zmm4 = __divps_xmmps_memps(*arg3 | zmm8[0].q << 0x40, data_142fc9600)
float temp0_353[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
arg19 = arg11
float temp0_355[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_351, temp0_353), arg11, 1)
zmm3 = _mm_add_epi32(zmm15, _mm_cmpeq_epi32(temp0_353, temp0_353))
zmm2 = _mm_and_ps(zmm15, temp0_355)
zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_355, zmm3), zmm2)
zmm13 = temp0_348
float temp0_363[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(temp0_348), temp0_345), temp0_341)
float temp0_364[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
float temp0_365[0x4] = _mm_add_ps(temp0_363, temp0_364)
float temp0_366[0x4] = _mm_cmpeq_ps(temp0_365, zmm12, 1)
char temp0_368 = _mm_movemask_ps(_mm_and_ps(temp0_366, zmm0))
zmm5 = *(arg1 + 8)
float temp0_369[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm14 = temp0_268
float temp0_370[0x4] = _mm_sub_ps(zmm14, temp0_369)
float temp0_371[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
zmm9 = _mm_cvttps_epi32(_mm_div_ps(temp0_370, temp0_371))
zmm7 = zmm12
zmm12 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_371), temp0_369)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
__return_addr.o = zmm1
float temp0_378[0x4] = _mm_cmpeq_ps(temp0_365, zmm7, 5)

if (temp0_368 != 0)
    zmm15 = zmm13

float temp0_379[0x4] = __subps_xmmps_memps(zmm7, arg_f0)
float temp0_380[0x4] = _mm_mul_ps(temp0_338, temp0_338)
zmm12 = _mm_add_ps(zmm12, zmm4)

if (_mm_movemask_ps(_mm_and_ps(temp0_378, zmm0)) != 0)
    zmm3 = __paddd_xmmdq_memdq(zmm13, data_142d3f800)

float temp0_385[0x4] = __subps_xmmps_memps(zmm14, temp0_315)
float temp0_386[0x4] = _mm_add_ps(temp0_380, zx.o(0))
float temp0_387[0x4] = _mm_mul_ps(temp0_379, temp0_379)
zmm6 = _mm_and_ps(zmm15, temp0_366)
arg11 = _mm_or_ps(_mm_andnot_ps(temp0_366, zmm3), zmm6)
arg_10 = arg11
float temp0_391[0x4] = _mm_cmpeq_ps(zmm12, zmm14, 5)
zmm12 = _mm_cmpeq_ps(zmm12, zmm14, 1)

if (_mm_movemask_ps(_mm_and_ps(zmm12, zmm0)) != 0)
    zmm15 = zmm9

zmm13 = _mm_add_ps(temp0_386, temp0_387)
float temp0_396[0x4] = _mm_mul_ps(temp0_385, temp0_385)

if (_mm_movemask_ps(_mm_and_ps(temp0_391, zmm0)) != 0)
    zmm3 = __paddd_xmmdq_memdq(zmm9, data_142d3f800)

zmm13 = _mm_add_ps(zmm13, temp0_396)
arg13 = zmm13
zmm15 = _mm_and_ps(zmm15, zmm12)
zmm12 = _mm_or_ps(_mm_andnot_ps(zmm12, zmm3), zmm15)
float temp0_406[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), arg_e0), temp0_339)
float temp0_409[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(arg11), temp0_345), temp0_341)
arg12 = zmm12
float temp0_412[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_371), temp0_369)
float temp0_413[0x4] = _mm_add_ps(temp0_353, temp0_406)
float temp0_414[0x4] = _mm_add_ps(temp0_364, temp0_409)
zmm4 = _mm_add_ps(zmm4, temp0_412)
float temp0_416[0x4] = _mm_sub_ps(arg19, temp0_413)
float temp0_417[0x4] = _mm_sub_ps(zmm7, temp0_414)
zmm14 = _mm_sub_ps(zmm14, zmm4)
float temp0_419[0x4] = _mm_div_ps(temp0_416, arg_e0)
_mm_div_ps(temp0_417, temp0_345)
zmm14 = _mm_div_ps(zmm14, temp0_371)
arg_40 = temp0_419
arg_60 = zmm14
zmm2 = _mm_cmpeq_epi32(temp0_419, temp0_419)
zmm1 = _mm_cmpeq_epi32(zmm1, zmm2)

if (_mm_movemask_ps(zmm1 & zmm0) != 0)
    char temp0_425 = _mm_movemask_ps(zmm1)
    
    if ((temp0_425 & 1) == 0)
        if ((temp0_425 & 2) != 0)
            goto label_1400d169f
        
        goto label_1400d15df
    
    __return_addr.d = 0
    
    if ((temp0_425 & 2) != 0)
    label_1400d169f:
        __return_addr:4.d = 0
        
        if ((temp0_425 & 4) == 0)
            goto label_1400d15e7
        
        goto label_1400d16af
    
label_1400d15df:
    
    if ((temp0_425 & 4) == 0)
    label_1400d15e7:
        
        if ((temp0_425 & 8) != 0)
            goto label_1400d16bf
        
        goto label_1400d15ef
    
label_1400d16af:
    arg_8 = 0
    
    if ((temp0_425 & 8) != 0)
    label_1400d16bf:
        arg_c = 0
        
        if ((temp0_425 & 1) == 0)
            goto label_1400d15f7
        
        goto label_1400d16cf
    
label_1400d15ef:
    
    if ((temp0_425 & 1) == 0)
    label_1400d15f7:
        
        if ((temp0_425 & 2) != 0)
            goto label_1400d16df
        
        goto label_1400d15ff
    
label_1400d16cf:
    arg_40[0] = 0
    
    if ((temp0_425 & 2) != 0)
    label_1400d16df:
        arg_40[1] = 0
        
        if ((temp0_425 & 4) == 0)
            goto label_1400d1607
        
        goto label_1400d16ef
    
label_1400d15ff:
    
    if ((temp0_425 & 4) != 0)
    label_1400d16ef:
        arg_40[2] = 0
        
        if ((temp0_425 & 8) != 0)
            arg_40[3] = 0
    else
    label_1400d1607:
        
        if ((temp0_425 & 8) != 0)
            arg_40[3] = 0

int32_t rdx_4 = *arg4
zmm1 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_4 - 1), 0), __return_addr.o)

if (_mm_movemask_ps(zmm1 & zmm0) != 0)
    rdx_4 -= 2
    char temp0_429 = _mm_movemask_ps(zmm1)
    
    if ((temp0_429 & 1) == 0)
        if ((temp0_429 & 2) != 0)
            goto label_1400d171b
        
        goto label_1400d164d
    
    __return_addr.d = rdx_4
    
    if ((temp0_429 & 2) != 0)
    label_1400d171b:
        __return_addr:4.d = rdx_4
        
        if ((temp0_429 & 4) == 0)
            goto label_1400d1655
        
        goto label_1400d1727
    
label_1400d164d:
    
    if ((temp0_429 & 4) == 0)
    label_1400d1655:
        
        if ((temp0_429 & 8) != 0)
            goto label_1400d1733
        
        goto label_1400d165d
    
label_1400d1727:
    arg_8 = rdx_4
    
    if ((temp0_429 & 8) != 0)
    label_1400d1733:
        arg_c = rdx_4
        
        if ((temp0_429 & 1) == 0)
            goto label_1400d1665
        
        goto label_1400d173f
    
label_1400d165d:
    
    if ((temp0_429 & 1) == 0)
    label_1400d1665:
        
        if ((temp0_429 & 2) != 0)
            goto label_1400d174f
        
        goto label_1400d166d
    
label_1400d173f:
    arg_40[0] = 0x3f800000
    
    if ((temp0_429 & 2) != 0)
    label_1400d174f:
        arg_40[1] = 0x3f800000
        
        if ((temp0_429 & 4) == 0)
            goto label_1400d1675
        
        goto label_1400d175f
    
label_1400d166d:
    
    if ((temp0_429 & 4) != 0)
    label_1400d175f:
        arg_40[2] = 0x3f800000
        
        if ((temp0_429 & 8) != 0)
            arg_40[3] = 0x3f800000
    else
    label_1400d1675:
        
        if ((temp0_429 & 8) != 0)
            arg_40[3] = 0x3f800000

return sub_1400d15b0(0, rdx_4, zmm2, arg4, arg42, r10, arg7, r13, r14, r15, zmm0, zmm13) __tailcall
