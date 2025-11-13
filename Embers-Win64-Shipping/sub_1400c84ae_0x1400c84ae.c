// 函数: sub_1400c84ae
// 地址: 0x1400c84ae
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t arg_c
float arg_10[0x4]
float arg_30[0x4]
float arg_40[0x4]
float arg_60[0x4]
float arg_70[0x4]
void arg_160
void arg_170
char result
float zmm0[0x4]
uint32_t zmm1[0x4]
uint128_t zmm2
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
uint128_t zmm10
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
uint128_t zmm14
int32_t zmm15[0x4]

while (true)
    zmm12 = __return_addr.o
    zmm13 = arg_10
    zmm6 = *arg1
    zmm9 = *(arg1 + 4)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    float temp0_2[0x4] = _mm_sub_ps(zmm12, temp0_1)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float temp0_4[0x4] = _mm_sub_ps(zmm13, temp0_3)
    zmm5 = *(arg1 + 8)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    float temp0_6[0x4] = _mm_sub_ps(arg11, temp0_5)
    zmm4 = *arg3
    float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_8[0x4] = _mm_div_ps(temp0_2, temp0_7)
    zmm2 = *(arg3 + 8)
    zmm15 = _mm_cvttps_epi32(temp0_8)
    zmm1 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm15), temp0_7), temp0_1)
    zmm14 = __divps_xmmps_memps(*arg3 | zmm2.q << 0x40, data_142fc9600)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
    zmm1 = _mm_cmpeq_ps(_mm_add_ps(zmm1, temp0_14), zmm12, 1)
    zmm0 = __paddd_xmmdq_memdq(zmm15, data_142d3f800)
    zmm4 = _mm_and_ps(zmm15, zmm1)
    uint32_t temp0_20[0x4] = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), zmm4)
    zmm8 = *(arg3 + 4)
    float temp0_21[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_22[0x4] = _mm_div_ps(temp0_4, temp0_21)
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_24[0x4] = _mm_div_ps(temp0_6, zmm2)
    zmm6 = _mm_cvttps_epi32(temp0_22)
    zmm3 = _mm_cvttps_epi32(temp0_24)
    float temp0_28[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_21)
    float temp0_30[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm3), zmm2)
    float temp0_31[0x4] = _mm_add_ps(temp0_28, temp0_3)
    float temp0_32[0x4] = _mm_add_ps(temp0_30, temp0_5)
    zmm10 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
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
    arg_40 = temp0_75
    float temp0_78[0x4] = _mm_mul_ps(temp0_49, temp0_49)
    int64_t rbx_1 = 0
    zmm3 = _mm_cmpeq_epi32(temp0_69, temp0_69)
    char i = _mm_movemask_ps(_mm_cmpeq_epi32(temp0_20, zmm3))
    
    if (i == 0)
        goto label_1400c879c
    
    do
        if ((i & 1) == 0)
            if ((i & 2) != 0)
                goto label_1400c882f
            
            goto label_1400c8768
        
        *(&__return_addr + (rbx_1 << 2)) = 0
        
        if ((i & 2) != 0)
        label_1400c882f:
            *(&__return_addr:4 + (rbx_1 << 2)) = 0
            
            if ((i & 4) == 0)
                goto label_1400c8770
            
            goto label_1400c883f
        
    label_1400c8768:
        
        if ((i & 4) == 0)
        label_1400c8770:
            
            if ((i & 8) != 0)
                goto label_1400c884f
            
            goto label_1400c8778
        
    label_1400c883f:
        (&arg_8)[rbx_1] = 0
        
        if ((i & 8) != 0)
        label_1400c884f:
            (&arg_c)[rbx_1] = 0
            
            if ((i & 1) == 0)
                goto label_1400c8780
            
            goto label_1400c885f
        
    label_1400c8778:
        
        if ((i & 1) == 0)
        label_1400c8780:
            
            if ((i & 2) != 0)
                goto label_1400c886f
            
            goto label_1400c8788
        
    label_1400c885f:
        arg_40[rbx_1] = 0
        
        if ((i & 2) != 0)
        label_1400c886f:
            arg_40[1 + rbx_1] = 0
            
            if ((i & 4) == 0)
                goto label_1400c8790
            
            goto label_1400c887f
        
    label_1400c8788:
        
        if ((i & 4) != 0)
        label_1400c887f:
            arg_40[2 + rbx_1] = 0
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        else
        label_1400c8790:
            
            if ((i & 8) != 0)
                arg_40[3 + rbx_1] = 0
        
    label_1400c879c:
        int32_t rbp_1 = *(arg4 + rbx_1)
        char temp0_86 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
            _mm_shuffle_epi32(zx.o(rbp_1 - 1), 0), *(&__return_addr + (rbx_1 << 2))))
        
        if (temp0_86 != 0)
            if ((temp0_86 & 1) == 0)
                if ((temp0_86 & 2) != 0)
                    goto label_1400c88ab
                
                goto label_1400c87ce
            
            *(&__return_addr + (rbx_1 << 2)) = rbp_1 - 2
            
            if ((temp0_86 & 2) != 0)
            label_1400c88ab:
                *(&__return_addr:4 + (rbx_1 << 2)) = rbp_1 - 2
                
                if ((temp0_86 & 4) == 0)
                    goto label_1400c87d6
                
                goto label_1400c88b7
            
        label_1400c87ce:
            
            if ((temp0_86 & 4) == 0)
            label_1400c87d6:
                
                if ((temp0_86 & 8) != 0)
                    goto label_1400c88c3
                
                goto label_1400c87de
            
        label_1400c88b7:
            (&arg_8)[rbx_1] = rbp_1 - 2
            
            if ((temp0_86 & 8) != 0)
            label_1400c88c3:
                (&arg_c)[rbx_1] = rbp_1 - 2
                
                if ((temp0_86 & 1) == 0)
                    goto label_1400c87e6
                
                goto label_1400c88cf
            
        label_1400c87de:
            
            if ((temp0_86 & 1) == 0)
            label_1400c87e6:
                
                if ((temp0_86 & 2) != 0)
                    goto label_1400c88df
                
                goto label_1400c87ee
            
        label_1400c88cf:
            arg_40[rbx_1] = 0x3f800000
            
            if ((temp0_86 & 2) != 0)
            label_1400c88df:
                arg_40[1 + rbx_1] = 0x3f800000
                
                if ((temp0_86 & 4) == 0)
                    goto label_1400c87f6
                
                goto label_1400c88ef
            
        label_1400c87ee:
            
            if ((temp0_86 & 4) != 0)
            label_1400c88ef:
                arg_40[2 + rbx_1] = 0x3f800000
                
                if ((temp0_86 & 8) != 0)
                    arg_40[3 + rbx_1] = 0x3f800000
            else
            label_1400c87f6:
                
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
    zmm5 = __return_addr.o
    zmm15 = arg_10
    zmm9 = zmm13
    zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm5, 0xf5), zmm8), 0xe8)
    zmm13 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm5), 0xe8), zmm0[0].q)
    zmm1 = _mm_add_epi32(zmm13, zmm15)
    zmm2 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm14 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm2), 0xe8), 
        _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm1, 0xf5), zmm2), 0xe8)[0].q)
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
    zmm5 = _mm_sub_epi32(zmm5, zmm3)
    zmm4 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm5, 0xf5), zmm8), 0xe8)
    zmm5 = _mm_mul_epu32(zmm5, zmm8)
    zmm3 = _mm_cmpeq_epi32(zmm3, zmm3)
    zmm7 = _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm5, 0xe8), zmm4[0].q)
    zmm4 = _mm_add_epi32(zmm7, zmm15)
    zmm6 = _mm_shuffle_epi32(zmm4, 0xf5)
    zmm5 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm2), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm6, zmm2), 0xe8)[0].q), 
            zmm9), 
        2)
    zmm1 = _mm_add_epi32(zmm1, zmm8)
    zmm4 = _mm_shuffle_epi32(zmm1, 0xf5)
    zmm10 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm2), 0xe8), 
        _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm2), 0xe8)[0].q)
    float temp0_137[0x4] = _mm_unpacklo_ps(*(rbx_2 + sx.q(zmm5[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q)
    zmm1 = _mm_unpacklo_ps(*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
        (*(rbx_2 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)
    float temp0_141[0x4] = _mm_sub_ps(temp0_137[0].q | zmm1[0].q << 0x40, zmm0)
    zmm11 = arg_40
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
    int32_t temp0_159[0x4] = _mm_add_epi32(temp0_144, zmm7)
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
    result = _mm_movemask_ps(temp0_232)
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
                goto label_1400c8026
            
            goto label_1400c8de5
        
        zmm3 = zmm10
        zmm3[0] = zmm3[0] + temp0_234[0]
        zmm2 = zmm9
        
        if (temp0_237 != 0)
        label_1400c8026:
            zmm2.d = zmm9.d f+ temp0_235[0]
            zmm1 = zmm11
            
            if (temp0_237 == 0)
                goto label_1400c8def
            
            goto label_1400c8034
        
    label_1400c8de5:
        zmm1 = zmm11
        bool cond:6_1
        bool cond:7_1
        bool cond:8_1
        bool cond:9_1
        
        if (temp0_237 == 0)
        label_1400c8def:
            zmm10 = _mm_add_ps(zmm10, temp0_234)
            char temp2_1 = result & 2
            cond:6_1 = temp2_1 != 0
            cond:7_1 = temp2_1 == 0
            cond:8_1 = temp2_1 == 0
            cond:9_1 = temp2_1 != 0
            
            if (temp2_1 != 0)
                goto label_1400c8055
            
            goto label_1400c8dfc
        
    label_1400c8034:
        zmm1 = zmm11
        zmm1[0] = zmm1[0] f+ temp0_236[0]
        zmm10 = _mm_add_ps(zmm10, temp0_234)
        char temp1_1 = result & 2
        cond:6_1 = temp1_1 != 0
        cond:7_1 = temp1_1 == 0
        cond:8_1 = temp1_1 == 0
        cond:9_1 = temp1_1 != 0
        
        if (temp1_1 != 0)
        label_1400c8055:
            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm3, 1), zmm3, 0xe2)
            zmm9 = _mm_add_ps(zmm9, temp0_235)
            
            if (cond:7_1)
                goto label_1400c8e06
            
            goto label_1400c806e
        
    label_1400c8dfc:
        zmm9 = _mm_add_ps(zmm9, temp0_235)
        
        if (not(cond:6_1))
        label_1400c8e06:
            zmm11 = _mm_add_ps(zmm11, temp0_236)
            
            if (cond:9_1)
                goto label_1400c8087
            
            goto label_1400c8e10
        
    label_1400c806e:
        zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm2, 1), zmm2, 0xe2)
        zmm11 = _mm_add_ps(zmm11, temp0_236)
        bool cond:10_1
        bool cond:11_1
        bool cond:12_1
        bool cond:13_1
        
        if (not(cond:8_1))
        label_1400c8087:
            zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 1), zmm1, 0xe2)
            char temp4_1 = result & 4
            cond:10_1 = temp4_1 == 0
            cond:11_1 = temp4_1 != 0
            cond:12_1 = temp4_1 != 0
            cond:13_1 = temp4_1 == 0
            
            if (temp4_1 == 0)
                goto label_1400c8e19
            
            goto label_1400c809b
        
    label_1400c8e10:
        char temp3_1 = result & 4
        cond:10_1 = temp3_1 == 0
        cond:11_1 = temp3_1 != 0
        cond:12_1 = temp3_1 != 0
        cond:13_1 = temp3_1 == 0
        
        if (temp3_1 != 0)
        label_1400c809b:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x32), 0x84)
            
            if (not(cond:10_1))
            label_1400c80ad:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x32), 0x84)
                
                if (cond:13_1)
                    goto label_1400c8e25
                
                goto label_1400c80bf
        else
        label_1400c8e19:
            
            if (cond:11_1)
                goto label_1400c80ad
        
        bool cond:14_1
        bool cond:15_1
        bool cond:16_1
        bool cond:17_1
        
        if (not(cond:12_1))
        label_1400c8e25:
            char temp6_1 = result & 8
            cond:14_1 = temp6_1 != 0
            cond:15_1 = temp6_1 == 0
            cond:16_1 = temp6_1 != 0
            cond:17_1 = temp6_1 == 0
            
            if (temp6_1 != 0)
                goto label_1400c80d6
            
            goto label_1400c8e2e
        
    label_1400c80bf:
        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x32), 0x84)
        char temp5_1 = result & 8
        cond:14_1 = temp5_1 != 0
        cond:15_1 = temp5_1 == 0
        cond:16_1 = temp5_1 != 0
        cond:17_1 = temp5_1 == 0
        
        if (temp5_1 != 0)
        label_1400c80d6:
            zmm10 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm10, zmm3, 0x23), 0x24)
            
            if (cond:15_1)
                goto label_1400c8e38
            
            goto label_1400c80ea
        
    label_1400c8e2e:
        zmm10 = zmm3
        
        if (cond:14_1)
        label_1400c80ea:
            zmm9 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm9, zmm2, 0x23), 0x24)
            
            if (cond:16_1)
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x23), 0x24)
        else
        label_1400c8e38:
            zmm9 = zmm2
            
            if (not(cond:17_1))
                zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(zmm11, zmm1, 0x23), 0x24)
        
        zmm2 = arg13
        zmm6 = _mm_and_ps(_mm_add_ps(temp0_231, zmm2), temp0_232)
        zmm11 = zmm1
        arg13 = _mm_or_ps(_mm_andnot_ps(temp0_232, zmm2), zmm6)
    
    arg2 = zx.q(arg2.d + 4)
    
    if (arg2.d s>= arg5)
        break
    
    arg14 = zmm11
    arg15 = zmm10
    arg16 = zmm9
    zmm0 = *(arg10 + sx.q((arg2 << 2).d))
    zmm1 = _mm_add_epi32(_mm_add_epi32(zmm0, zmm0), zmm0)
    int64_t rax_88 = sx.q(zmm1[0])
    int64_t rsi_8 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
    int64_t rdi_6 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
    int64_t rbx_35 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
    zmm1 = *(arg8 + (rbx_35 << 2) + 4)
    zmm2 = _mm_unpacklo_ps(*(arg8 + (rdi_6 << 2)), (*(arg8 + (rbx_35 << 2)))[0].q)
    float temp0_652[0x4] = _mm_unpacklo_ps(*(arg8 + (rdi_6 << 2) + 4), zmm1[0].q)
    zmm4 = *(arg8 + (rax_88 << 2) + 4)
    zmm1 = _mm_unpacklo_ps(*(arg8 + (rax_88 << 2)), (*(arg8 + (rsi_8 << 2)))[0].q)[0].q
        | zmm2.q << 0x40
    zmm4 = _mm_unpacklo_ps(zmm4, (*(arg8 + (rsi_8 << 2) + 4)).q)[0].q | temp0_652[0].q << 0x40
    zmm2 = _mm_unpacklo_ps(*(arg8 + (rax_88 << 2) + 8), (*(arg8 + (rsi_8 << 2) + 8))[0].q).q
        | _mm_unpacklo_ps(*(arg8 + (rdi_6 << 2) + 8), (*(arg8 + (rbx_35 << 2) + 8))[0].q)[0].q
        << 0x40
    arg_40 = zmm1
    arg_60 = zmm2
    arg_70 = zx.o(0)
    zmm0 = (*arg6)[3]
    float temp0_657[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    __return_addr.o = temp0_657
    arg_10 = temp0_657
    arg11 = temp0_657
    arg_30 = temp0_657
    zmm9 = *arg6
    zmm8 = (*arg6)[1]
    zmm10 = (*arg6)[2]
    float temp0_658[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_659[0x4] = _mm_mul_ps(zmm2, temp0_658)
    zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0)
    float temp0_661[0x4] = _mm_mul_ps(zmm1, zmm10)
    float temp0_662[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
    float temp0_663[0x4] = _mm_mul_ps(zmm4, temp0_662)
    float temp0_665[0x4] = _mm_sub_ps(temp0_659, _mm_mul_ps(zmm4, zmm10))
    float temp0_667[0x4] = _mm_sub_ps(temp0_661, _mm_mul_ps(zmm2, temp0_662))
    float temp0_669[0x4] = _mm_sub_ps(temp0_663, _mm_mul_ps(zmm1, temp0_658))
    float temp0_670[0x4] = _mm_add_ps(temp0_665, temp0_665)
    float temp0_671[0x4] = _mm_add_ps(temp0_667, temp0_667)
    float temp0_672[0x4] = _mm_add_ps(temp0_669, temp0_669)
    zmm2 = _mm_mul_ps(temp0_657, temp0_670)
    float temp0_674[0x4] = _mm_mul_ps(temp0_657, temp0_671)
    zmm2 = __addps_xmmps_memps(zmm2, arg_40)
    float temp0_676[0x4] = __addps_xmmps_memps(temp0_674, zmm4)
    float temp0_678[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_657, temp0_672), arg_60)
    float temp0_679[0x4] = _mm_mul_ps(temp0_672, temp0_658)
    float temp0_680[0x4] = _mm_mul_ps(temp0_670, zmm10)
    zmm1 = _mm_mul_ps(temp0_671, temp0_662)
    float temp0_684[0x4] = _mm_add_ps(_mm_sub_ps(temp0_679, _mm_mul_ps(temp0_671, zmm10)), zmm2)
    float temp0_687[0x4] =
        _mm_add_ps(_mm_sub_ps(temp0_680, _mm_mul_ps(temp0_672, temp0_662)), temp0_676)
    zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_670, temp0_658)), temp0_678)
    zmm3 = arg6[1][0]
    zmm2 = (*arg6)[5]
    float temp0_692[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_684)
    zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_687)
    zmm0 = (*arg6)[6]
    float temp0_696[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
    arg_230 = temp0_692
    arg18 = zmm2
    arg_240 = zmm2
    arg12 = temp0_696
    arg21 = temp0_696
    int64_t rbx_36 = 0
    arg17 = temp0_692
label_1400c831c:
    zmm2 = *(&arg_170 + rbx_36)
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
    char temp0_699 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, temp0_692, 1))
    
    if (temp0_699 != 0)
        if ((temp0_699 & 1) == 0)
            if ((temp0_699 & 2) != 0)
                goto label_1400c841d
            
            goto label_1400c834d
        
        *(&__return_addr + (rbx_36 << 2)) = zmm2.d
        
        if ((temp0_699 & 2) != 0)
        label_1400c841d:
            *(&__return_addr:4 + (rbx_36 << 2)) = zmm2.d
            
            if ((temp0_699 & 4) == 0)
                goto label_1400c8355
            
            goto label_1400c842b
        
    label_1400c834d:
        
        if ((temp0_699 & 4) != 0)
        label_1400c842b:
            (&arg_8)[rbx_36] = zmm2.d
            
            if ((temp0_699 & 8) != 0)
                (&arg_c)[rbx_36] = zmm2.d
        else
        label_1400c8355:
            
            if ((temp0_699 & 8) != 0)
                (&arg_c)[rbx_36] = zmm2.d
    
    zmm1 = _mm_cmpeq_ps(zmm1, temp0_692, 5)
    
    if (_mm_movemask_ps(zmm1) != 0)
        zmm3 = *(&arg_160 + rbx_36)
        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
        char temp0_705 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(temp0_692, zmm2, 1), zmm1))
        
        if (temp0_705 != 0)
            if ((temp0_705 & 1) == 0)
                if ((temp0_705 & 2) != 0)
                    goto label_1400c844b
                
                goto label_1400c83a2
            
            *(&__return_addr + (rbx_36 << 2)) = zmm3[0]
            
            if ((temp0_705 & 2) != 0)
            label_1400c844b:
                *(&__return_addr:4 + (rbx_36 << 2)) = zmm3[0]
                
                if ((temp0_705 & 4) == 0)
                    goto label_1400c83aa
                
                goto label_1400c8459
            
        label_1400c83a2:
            
            if ((temp0_705 & 4) != 0)
            label_1400c8459:
                (&arg_8)[rbx_36] = zmm3[0]
                
                if ((temp0_705 & 8) != 0)
                    (&arg_c)[rbx_36] = zmm3[0]
            else
            label_1400c83aa:
                
                if ((temp0_705 & 8) != 0)
                    (&arg_c)[rbx_36] = zmm3[0]
        
        char temp0_708 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(temp0_692, zmm2, 5), zmm1))
        
        if (temp0_708 != 0)
            zmm0 = *(&arg_230 + (rbx_36 << 2))
            
            if ((temp0_708 & 1) == 0)
                if ((temp0_708 & 2) != 0)
                    goto label_1400c847e
                
                goto label_1400c83de
            
            *(&__return_addr + (rbx_36 << 2)) = zmm0[0]
            
            if ((temp0_708 & 2) != 0)
            label_1400c847e:
                *(&__return_addr:4 + (rbx_36 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                
                if ((temp0_708 & 4) == 0)
                    goto label_1400c83e6
                
                goto label_1400c8491
            
        label_1400c83de:
            
            if ((temp0_708 & 4) != 0)
            label_1400c8491:
                (&arg_8)[rbx_36] = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                
                if ((temp0_708 & 8) != 0)
                    (&arg_c)[rbx_36] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
            else
            label_1400c83e6:
                
                if ((temp0_708 & 8) != 0)
                    (&arg_c)[rbx_36] = _mm_shuffle_epi32(zmm0, 0xe7)[0]
    
    if (rbx_36 != 8)
        *(&arg_240 + (rbx_36 << 2))
        break

int32_t* rcx
int64_t* rdx_3

if (arg2.d s>= arg9)
    rcx = arg41
    rdx_3 = arg42
    zmm3 = arg19
label_1400cad7a:
    zmm3 = _mm_cmpeq_epi32(zmm3, zx.o(0))
    zmm0 = zmm3 & not.o(zmm10)
    zmm1 = _mm_add_ps(_mm_shuffle_epi32(zmm0, 0xee), zmm0)
    float temp0_595[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
    temp0_595[0] = temp0_595[0] f+ zmm1[0]
    zmm1 = zmm3 & not.o(zmm9)
    zmm2 = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xe5)
    zmm1[0] = zmm1[0] f+ zmm2.d
    float temp0_599[0x4] = _mm_unpacklo_ps(temp0_595, zmm1[0].q)
    zmm1 = zmm3 & not.o(zmm11)
    zmm2 = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xe5)
    zmm1[0] = zmm1[0] f+ zmm2.d
    zmm2 = _mm_add_ps(*rdx_3 | rdx_3[1].d[0].q << 0x40, temp0_599[0].q | zmm1[0].q << 0x40)
    zmm0 = zmm2
    *rdx_3 = zmm2.d
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe5)
    zmm0[0].q = zmm0 u>> 0x40
    *(rdx_3 + 4) = zmm2.d
    rdx_3[1].d = zmm0[0]
    zmm3 &= not.o(arg13)
    float temp0_606[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm3, 0xee), zmm3)
    zmm1 = _mm_shuffle_ps(temp0_606, temp0_606, 0xe5)
    zmm1[0] = zmm1[0] f+ temp0_606[0]
    zmm1[0] = zmm1[0] f+ *rcx
    *rcx = zmm1[0]
    return result

zmm1 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(arg2.d), 0), data_142e11d00)
zmm0 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg9), 0), zmm1)
int64_t rax_60 = sx.q(arg2.d << 2)
uint32_t temp0_251 = _mm_movemask_ps(zmm0)
arg16 = zmm9
arg15 = zmm10

if ((zx.q(temp0_251) & 0xfffffff9) != 9)
    if ((temp0_251.b & 1) != 0)
        __return_addr.d = *(arg10 + rax_60)
    
    if ((temp0_251.b & 2) == 0)
        if ((temp0_251.b & 4) != 0)
            goto label_1400cb0a1
        
        goto label_1400c9ec7
    
    __return_addr:4.d = *(arg10 + rax_60 + 4)
    
    if ((temp0_251.b & 4) == 0)
    label_1400c9ec7:
        
        if ((temp0_251.b & 8) != 0)
            arg_c = *(arg10 + rax_60 + 0xc)
    else
    label_1400cb0a1:
        arg_8 = *(arg10 + rax_60 + 8)
        
        if ((temp0_251.b & 8) != 0)
            arg_c = *(arg10 + rax_60 + 0xc)
    
    zmm1 = __return_addr.o
else
    zmm1 = *(arg10 + rax_60)

zmm2 = _mm_add_epi32(_mm_add_epi32(zmm1, zmm1), zmm1) & zmm0
int64_t rdx_4 = sx.q(zmm2.d)
int64_t rax_63 = arg8 + (rdx_4 << 2)
zmm1 = *(arg8 + (rdx_4 << 2))
int64_t rbp_6 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
int64_t rdx_6 = arg8 + (rbp_6 << 2)
zmm1 = _mm_unpacklo_ps(zmm1, (*(arg8 + (rbp_6 << 2)))[0].q)
int64_t rbp_8 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
int64_t rbx_5 = arg8 + (rbp_8 << 2)
zmm3 = *(arg8 + (rbp_8 << 2))
int64_t rsi_3 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
int64_t r10 = arg8 + (rsi_3 << 2)
float temp0_258[0x4] = _mm_unpacklo_ps(zmm3, (*(arg8 + (rsi_3 << 2))).q)
zmm1 = zmm1[0].q | temp0_258[0].q << 0x40
zmm3 = data_142fc95e0 & zmm0
uint64_t r14 = zx.q(zmm3[0])
zmm8 = *(r14 + rax_63)
uint64_t r15 = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
float temp0_260[0x4] = _mm_unpacklo_ps(zmm8, (*(r15 + rdx_6))[0].q)
uint64_t r13 = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
zmm4 = *(r13 + rbx_5)
uint64_t rbp_10 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0])
float temp0_263[0x4] = _mm_unpacklo_ps(zmm4, (*(rbp_10 + r10))[0].q)
zmm8 = temp0_260[0].q | temp0_263[0].q << 0x40
zmm3 = data_142fc95f0 & zmm0
float temp0_265[0x4] = _mm_unpacklo_ps(*(zx.q(zmm3[0]) + rax_63), 
    (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_6))[0].q)
float temp0_268[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rbx_5), 
    (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7)[0]) + r10))[0].q)
zmm6 = temp0_265[0].q | temp0_268[0].q << 0x40
uint32_t arg_1c0[0x4] = zmm1
float arg_1f0[0x4] = zx.o(0)
zmm5 = (*arg6)[3]
float temp0_269[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
__return_addr.o = temp0_269
arg_10 = temp0_269
zmm7 = *arg6
zmm2 = (*arg6)[1]
zmm4 = (*arg6)[2]
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_271[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_272[0x4] = _mm_mul_ps(zmm8, temp0_271)
float temp0_273[0x4] = _mm_mul_ps(temp0_271, zmm6)
float temp0_274[0x4] = _mm_mul_ps(zmm6, zmm2)
float temp0_275[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm2 = _mm_mul_ps(zmm2, zmm1)
zmm1 = _mm_mul_ps(zmm1, temp0_275)
float temp0_278[0x4] = _mm_mul_ps(zx.o(0), temp0_269)
float temp0_280[0x4] = _mm_sub_ps(temp0_274, _mm_mul_ps(temp0_275, zmm8))
zmm1 = _mm_sub_ps(zmm1, temp0_273)
float temp0_282[0x4] = _mm_sub_ps(temp0_272, zmm2)
float temp0_283[0x4] = _mm_sub_ps(temp0_278, temp0_278)
float temp0_284[0x4] = _mm_add_ps(temp0_280, temp0_280)
zmm1 = _mm_add_ps(zmm1, zmm1)
float temp0_286[0x4] = _mm_add_ps(temp0_282, temp0_282)
float temp0_287[0x4] = _mm_add_ps(temp0_283, temp0_283)
arg_40 = temp0_284
float arg_50[0x4] = zmm1
arg_60 = temp0_286
arg_70 = temp0_287
float temp0_288[0x4] = _mm_mul_ps(temp0_287, temp0_269)
zmm2 = _mm_mul_ps(temp0_269, temp0_284)
float temp0_290[0x4] = _mm_mul_ps(temp0_269, zmm1)
zmm10 = _mm_mul_ps(temp0_269, temp0_286)
zmm2 = __addps_xmmps_memps(zmm2, arg_1c0)
float temp0_293[0x4] = __addps_xmmps_memps(temp0_290, zmm8)
zmm10 = __addps_xmmps_memps(zmm10, zmm6)
arg_30 = temp0_269
uint128_t arg_2c0 = zmm2
float arg_2d0[0x4] = temp0_293
uint128_t arg_2e0 = zmm10
float arg_2f0[0x4] = __addps_xmmps_memps(temp0_288, arg_1f0)
zmm4 = *arg6
zmm5 = (*arg6)[1]
zmm7 = (*arg6)[2]
float temp0_296[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_297[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_298[0x4] = _mm_mul_ps(zmm1, temp0_297)
float temp0_299[0x4] = _mm_mul_ps(temp0_297, temp0_286)
float temp0_300[0x4] = _mm_mul_ps(temp0_286, temp0_296)
float temp0_301[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_302[0x4] = _mm_mul_ps(temp0_296, temp0_284)
float temp0_303[0x4] = _mm_mul_ps(temp0_284, temp0_301)
float temp0_305[0x4] = _mm_sub_ps(temp0_300, _mm_mul_ps(temp0_301, zmm1))
float temp0_306[0x4] = _mm_sub_ps(temp0_303, temp0_299)
float temp0_307[0x4] = _mm_sub_ps(temp0_298, temp0_302)
float temp0_308[0x4] = _mm_add_ps(temp0_305, zmm2)
float temp0_309[0x4] = _mm_add_ps(temp0_306, temp0_293)
float temp0_310[0x4] = _mm_add_ps(temp0_307, zmm10)
zmm4 = arg6[1][0]
zmm2 = (*arg6)[5]
float temp0_312[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_308)
zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_309)
zmm1 = (*arg6)[6]
zmm1 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_310)
float arg_200[0x4] = temp0_312
float arg_f0[0x4] = zmm2
uint128_t arg_210 = zmm2
arg12 = zmm1
uint32_t arg_220[0x4] = zmm1
int64_t rdx_7 = 0
zmm1 = temp0_312
label_1400ca19c:
zmm3 = *(&arg_170 + rdx_7)
zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_318[0x4] = _mm_cmpeq_ps(zmm2, zmm1, 1)

if (_mm_movemask_ps(_mm_and_ps(temp0_318, zmm0)) != 0)
    char temp0_321 = _mm_movemask_ps(temp0_318)
    
    if ((temp0_321 & 1) == 0)
        if ((temp0_321 & 2) != 0)
            goto label_1400ca2ad
        
        goto label_1400ca1d3
    
    *(&__return_addr + (rdx_7 << 2)) = zmm3[0]
    
    if ((temp0_321 & 2) != 0)
    label_1400ca2ad:
        *(&__return_addr:4 + (rdx_7 << 2)) = zmm3[0]
        
        if ((temp0_321 & 4) == 0)
            goto label_1400ca1db
        
        goto label_1400ca2bb
    
label_1400ca1d3:
    
    if ((temp0_321 & 4) != 0)
    label_1400ca2bb:
        (&arg_8)[rdx_7] = zmm3[0]
        
        if ((temp0_321 & 8) != 0)
            (&arg_c)[rdx_7] = zmm3[0]
    else
    label_1400ca1db:
        
        if ((temp0_321 & 8) != 0)
            (&arg_c)[rdx_7] = zmm3[0]

zmm2 = _mm_cmpeq_ps(zmm2, zmm1, 5)

if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm2)) != 0)
    zmm5 = *(&arg_160 + rdx_7)
    float temp0_325[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_325, 1), zmm2)
    
    if (_mm_movemask_ps(_mm_and_ps(zmm6, zmm0)) != 0)
        char temp0_330 = _mm_movemask_ps(zmm6)
        
        if ((temp0_330 & 1) == 0)
            if ((temp0_330 & 2) != 0)
                goto label_1400ca2db
            
            goto label_1400ca234
        
        *(&__return_addr + (rdx_7 << 2)) = zmm5[0]
        
        if ((temp0_330 & 2) != 0)
        label_1400ca2db:
            *(&__return_addr:4 + (rdx_7 << 2)) = zmm5[0]
            
            if ((temp0_330 & 4) == 0)
                goto label_1400ca23c
            
            goto label_1400ca2e9
        
    label_1400ca234:
        
        if ((temp0_330 & 4) != 0)
        label_1400ca2e9:
            (&arg_8)[rdx_7] = zmm5[0]
            
            if ((temp0_330 & 8) != 0)
                (&arg_c)[rdx_7] = zmm5[0]
        else
        label_1400ca23c:
            
            if ((temp0_330 & 8) != 0)
                (&arg_c)[rdx_7] = zmm5[0]
    
    uint32_t temp0_332[0x4] = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_325, 5), zmm2)
    
    if (_mm_movemask_ps(_mm_and_ps(temp0_332, zmm0)) != 0)
        zmm2 = *(&arg_200 + (rdx_7 << 2))
        char temp0_335 = _mm_movemask_ps(temp0_332)
        
        if ((temp0_335 & 1) == 0)
            if ((temp0_335 & 2) != 0)
                goto label_1400ca30e
            
            goto label_1400ca276
        
        *(&__return_addr + (rdx_7 << 2)) = zmm2.d
        
        if ((temp0_335 & 2) != 0)
        label_1400ca30e:
            *(&__return_addr:4 + (rdx_7 << 2)) = _mm_shuffle_epi32(zmm2, 0xe5)[0]
            
            if ((temp0_335 & 4) == 0)
                goto label_1400ca27e
            
            goto label_1400ca321
        
    label_1400ca276:
        
        if ((temp0_335 & 4) != 0)
        label_1400ca321:
            (&arg_8)[rdx_7] = _mm_shuffle_epi32(zmm2, 0x4e)[0]
            
            if ((temp0_335 & 8) != 0)
                (&arg_c)[rdx_7] = _mm_shuffle_epi32(zmm2, 0xe7)[0]
        else
        label_1400ca27e:
            
            if ((temp0_335 & 8) != 0)
                (&arg_c)[rdx_7] = _mm_shuffle_epi32(zmm2, 0xe7)[0]

if (rdx_7 != 8)
    *(&arg_210 + (rdx_7 << 2))
    return 

arg14 = zmm11
zmm9 = __return_addr.o
zmm12 = arg_10
zmm14 = _mm_sub_ps(zmm9, temp0_312)
zmm6 = *arg1
zmm3 = *(arg1 + 4)
float temp0_340[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm1 = _mm_sub_ps(zmm9, temp0_340)
float temp0_342[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
zmm2 = _mm_sub_ps(zmm12, temp0_342)
zmm5 = *arg3
zmm7 = *(arg3 + 4)
float temp0_344[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm1 = _mm_div_ps(zmm1, temp0_344)
float temp0_346[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
zmm2 = _mm_div_ps(zmm2, temp0_346)
zmm8 = *(arg3 + 8)
zmm13 = _mm_cvttps_epi32(zmm1)
zmm1 = _mm_cvttps_epi32(zmm2)
float temp0_352[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), temp0_344), temp0_340)
zmm6 = zmm1
zmm2 = __divps_xmmps_memps(*arg3 | zmm8[0].q << 0x40, data_142fc9600)
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
float arg_100[0x4] = zmm1
arg18 = zmm9
float temp0_356[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_352, zmm1), zmm9, 1)
zmm5 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm1, zmm1))
uint32_t temp0_359[0x4] = _mm_and_ps(zmm13, temp0_356)
zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_356, zmm5), temp0_359)
float temp0_364[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_346), temp0_342)
float temp0_365[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_366[0x4] = _mm_add_ps(temp0_364, temp0_365)
float temp0_367[0x4] = _mm_cmpeq_ps(temp0_366, zmm12, 1)
char temp0_369 = _mm_movemask_ps(_mm_and_ps(temp0_367, zmm0))
zmm1 = *(arg1 + 8)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
zmm15 = temp0_269
float temp0_371[0x4] = _mm_sub_ps(zmm15, zmm1)
float temp0_372[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
zmm10 = _mm_cvttps_epi32(_mm_div_ps(temp0_371, temp0_372))
float arg_d0[0x4] = zmm10
float temp0_377[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_372), zmm1)
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
__return_addr.o = zmm4
float temp0_379[0x4] = _mm_cmpeq_ps(temp0_366, zmm12, 5)

if (temp0_369 != 0)
    zmm13 = zmm6

float arg_140[0x4] = zmm12
float temp0_380[0x4] = __subps_xmmps_memps(zmm12, arg_f0)
zmm14 = _mm_mul_ps(zmm14, zmm14)
float temp0_382[0x4] = _mm_add_ps(temp0_377, zmm2)

if (_mm_movemask_ps(_mm_and_ps(temp0_379, zmm0)) != 0)
    zmm5 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)

float temp0_386[0x4] = __subps_xmmps_memps(zmm15, arg12)
zmm14 = _mm_add_ps(zmm14, zx.o(0))
float temp0_388[0x4] = _mm_mul_ps(temp0_380, temp0_380)
zmm6 = _mm_and_ps(zmm13, temp0_367)
zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_367, zmm5), zmm6)
arg_10 = zmm9
zmm10 = _mm_cmpeq_ps(temp0_382, zmm15, 5)
float temp0_393[0x4] = _mm_cmpeq_ps(temp0_382, zmm15, 1)

if (_mm_movemask_ps(_mm_and_ps(temp0_393, zmm0)) != 0)
    zmm13 = arg_d0

zmm14 = _mm_add_ps(zmm14, temp0_388)
float temp0_397[0x4] = _mm_mul_ps(temp0_386, temp0_386)

if (_mm_movemask_ps(_mm_and_ps(zmm10, zmm0)) != 0)
    zmm5 = __paddd_xmmdq_memdq(arg_d0, data_142d3f800)

arg12 = _mm_add_ps(zmm14, temp0_397)
zmm13 = _mm_and_ps(zmm13, temp0_393)
zmm12 = _mm_or_ps(_mm_andnot_ps(temp0_393, zmm5), zmm13)
zmm10 = temp0_344
float temp0_407[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), zmm10), temp0_340)
float temp0_410[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_346), temp0_342)
float temp0_413[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_372), zmm1)
zmm1 = _mm_add_ps(arg_100, temp0_407)
float temp0_415[0x4] = _mm_add_ps(temp0_365, temp0_410)
zmm2 = _mm_add_ps(zmm2, temp0_413)
float temp0_417[0x4] = _mm_sub_ps(arg18, zmm1)
float temp0_418[0x4] = _mm_sub_ps(arg_140, temp0_415)
zmm15 = _mm_sub_ps(zmm15, zmm2)
float temp0_420[0x4] = _mm_div_ps(temp0_417, zmm10)
float temp0_421[0x4] = _mm_div_ps(temp0_418, temp0_346)
zmm15 = _mm_div_ps(zmm15, temp0_372)
arg_40 = temp0_420
arg_60 = zmm15
int64_t rcx_1 = 0
zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)
label_1400ca5e9:
zmm4 = _mm_cmpeq_epi32(zmm4, zmm1)

if (_mm_movemask_ps(zmm4 & zmm0) != 0)
    char temp0_426 = _mm_movemask_ps(zmm4)
    
    if ((temp0_426 & 1) == 0)
        if ((temp0_426 & 2) != 0)
            goto label_1400ca6cf
        
        goto label_1400ca60f
    
    *(&__return_addr + (rcx_1 << 2)) = 0
    
    if ((temp0_426 & 2) != 0)
    label_1400ca6cf:
        *(&__return_addr:4 + (rcx_1 << 2)) = 0
        
        if ((temp0_426 & 4) == 0)
            goto label_1400ca617
        
        goto label_1400ca6df
    
label_1400ca60f:
    
    if ((temp0_426 & 4) == 0)
    label_1400ca617:
        
        if ((temp0_426 & 8) != 0)
            goto label_1400ca6ef
        
        goto label_1400ca61f
    
label_1400ca6df:
    (&arg_8)[rcx_1] = 0
    
    if ((temp0_426 & 8) != 0)
    label_1400ca6ef:
        (&arg_c)[rcx_1] = 0
        
        if ((temp0_426 & 1) == 0)
            goto label_1400ca627
        
        goto label_1400ca6ff
    
label_1400ca61f:
    
    if ((temp0_426 & 1) == 0)
    label_1400ca627:
        
        if ((temp0_426 & 2) != 0)
            goto label_1400ca70f
        
        goto label_1400ca62f
    
label_1400ca6ff:
    arg_40[rcx_1] = 0
    
    if ((temp0_426 & 2) != 0)
    label_1400ca70f:
        arg_40[1 + rcx_1] = 0
        
        if ((temp0_426 & 4) == 0)
            goto label_1400ca637
        
        goto label_1400ca71f
    
label_1400ca62f:
    
    if ((temp0_426 & 4) != 0)
    label_1400ca71f:
        arg_40[2 + rcx_1] = 0
        
        if ((temp0_426 & 8) != 0)
            arg_40[3 + rcx_1] = 0
    else
    label_1400ca637:
        
        if ((temp0_426 & 8) != 0)
            arg_40[3 + rcx_1] = 0

int32_t rdx_8 = *(arg4 + rcx_1)
zmm2 =
    __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_8 - 1), 0), *(&__return_addr + (rcx_1 << 2)))

if (_mm_movemask_ps(zmm2 & zmm0) != 0)
    char temp0_430 = _mm_movemask_ps(zmm2)
    
    if ((temp0_430 & 1) == 0)
        if ((temp0_430 & 2) != 0)
            goto label_1400ca74b
        
        goto label_1400ca67d
    
    *(&__return_addr + (rcx_1 << 2)) = rdx_8 - 2
    
    if ((temp0_430 & 2) != 0)
    label_1400ca74b:
        *(&__return_addr:4 + (rcx_1 << 2)) = rdx_8 - 2
        
        if ((temp0_430 & 4) == 0)
            goto label_1400ca685
        
        goto label_1400ca757
    
label_1400ca67d:
    
    if ((temp0_430 & 4) == 0)
    label_1400ca685:
        
        if ((temp0_430 & 8) != 0)
            goto label_1400ca763
        
        goto label_1400ca68d
    
label_1400ca757:
    (&arg_8)[rcx_1] = rdx_8 - 2
    
    if ((temp0_430 & 8) != 0)
    label_1400ca763:
        (&arg_c)[rcx_1] = rdx_8 - 2
        
        if ((temp0_430 & 1) == 0)
            goto label_1400ca695
        
        goto label_1400ca76f
    
label_1400ca68d:
    
    if ((temp0_430 & 1) == 0)
    label_1400ca695:
        
        if ((temp0_430 & 2) != 0)
            goto label_1400ca77f
        
        goto label_1400ca69d
    
label_1400ca76f:
    arg_40[rcx_1] = 0x3f800000
    
    if ((temp0_430 & 2) != 0)
    label_1400ca77f:
        arg_40[1 + rcx_1] = 0x3f800000
        
        if ((temp0_430 & 4) == 0)
            goto label_1400ca6a5
        
        goto label_1400ca78f
    
label_1400ca69d:
    
    if ((temp0_430 & 4) != 0)
    label_1400ca78f:
        arg_40[2 + rcx_1] = 0x3f800000
        
        if ((temp0_430 & 8) != 0)
            arg_40[3 + rcx_1] = 0x3f800000
    else
    label_1400ca6a5:
        
        if ((temp0_430 & 8) != 0)
            arg_40[3 + rcx_1] = 0x3f800000

if (rcx_1 == 8)
    zmm8 = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
    zmm7 = __return_addr.o
    zmm5 = arg_10
    zmm10 = zmm12
    zmm3 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
    zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), zmm3[0].q)
    zmm3 = _mm_add_epi32(zmm2, zmm5)
    zmm6 = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
    zmm14 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8), 
        _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm6), 0xe8)[0].q)
    zmm1 = _mm_add_epi32(zmm14, zmm10)
    int32_t (* rax_83)[0x4] = *(arg7 + 0x10)
    zmm1 = _mm_slli_epi32(zmm1, 2) & zmm0
    int64_t rdx_10 = sx.q(zmm1[0])
    zmm15 = *(rax_83 + rdx_10)
    int64_t rdx_12 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
    zmm15 = _mm_unpacklo_ps(zmm15, (*(rax_83 + rdx_12))[0].q)
    int64_t rbx_6 = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
    zmm4 = *(rax_83 + rbx_6)
    int64_t rbx_8 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
    float temp0_452[0x4] = _mm_unpacklo_ps(zmm4, (*(rax_83 + rbx_8))[0].q)
    zmm15 = zmm15[0].q | temp0_452[0].q << 0x40
    zmm13 = _mm_cmpeq_epi32(zmm13, zmm13)
    zmm7 = _mm_sub_epi32(zmm7, zmm13)
    uint32_t temp0_457[0x4] =
        _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
    zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm8), 0xe8), temp0_457[0].q)
    zmm1 = _mm_add_epi32(zmm12, zmm5)
    zmm4 = _mm_shuffle_epi32(zmm1, 0xf5)
    zmm7 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm6), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm6), 0xe8)[0].q), 
            zmm10), 
        2)
    zmm3 = _mm_add_epi32(zmm3, zmm8)
    uint32_t temp0_471[0x4] = _mm_shuffle_epi32(zmm3, 0xf5)
    zmm8 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8), 
        _mm_shuffle_epi32(_mm_mul_epu32(temp0_471, zmm6), 0xe8)[0].q)
    zmm7 &= zmm0
    zmm1 = _mm_unpacklo_ps(*(rax_83 + sx.q(zmm7[0])), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5)[0])))[0].q)
    float temp0_481[0x4] = _mm_unpacklo_ps(*(rax_83 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e)[0])), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm7, 0xe7)[0])))[0].q)
    zmm1 = _mm_sub_ps(zmm1[0].q | temp0_481[0].q << 0x40, zmm15)
    zmm11 = arg_40
    zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, zmm11), zmm15)
    zmm5 = _mm_sub_epi32(zmm5, zmm13)
    zmm2 = _mm_add_epi32(zmm2, zmm5)
    zmm3 = _mm_shuffle_epi32(zmm2, 0xf5)
    zmm4 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8).q), 
            zmm10), 
        2) & zmm0
    zmm2 = _mm_unpacklo_ps(*(rax_83 + sx.q(zmm4[0])), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
        *(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)[0].q << 0x40
    zmm5 = _mm_add_epi32(zmm5, zmm12)
    zmm3 = _mm_shuffle_epi32(zmm5, 0xf5)
    zmm4 = _mm_slli_epi32(
        _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm6), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8)[0].q), 
            zmm10), 
        2) & zmm0
    float temp0_510[0x4] = _mm_unpacklo_ps(*(rax_83 + sx.q(zmm4[0])), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q)
    float temp0_513[0x4] = _mm_unpacklo_ps(*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
        (*(rax_83 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)
    float temp0_516[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(temp0_510[0].q | temp0_513[0].q << 0x40, zmm2), zmm11), zmm2)
    float temp0_517[0x4] = _mm_unpacklo_ps(*(r14 + rax_83 + rdx_10), (*(r15 + rax_83 + rdx_12)).q)
    zmm2 = _mm_unpacklo_ps(*(r13 + rax_83 + rbx_6), (*(rbp_10 + rax_83 + rbx_8))[0].q)
    zmm3 = temp0_517[0].q | zmm2.q << 0x40
    zmm6 = _mm_add_epi32(zmm6, zmm10)
    zmm14 = _mm_add_epi32(zmm14, zmm6)
    zmm6 = _mm_add_epi32(zmm6, zmm8)
    zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2) & zmm0
    float temp0_525[0x4] = _mm_unpacklo_ps(*(r14 + sx.q(zmm8[0]) + rax_83), 
        (*(r15 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5).d) + rax_83)).q)
    zmm2 = _mm_unpacklo_ps(*(r13 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e).d) + rax_83), 
        (*(rbp_10 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + rax_83))[0].q)
    float temp0_531[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_525[0].q | zmm2.q << 0x40, zmm3), zmm11), zmm3)
    zmm14 = _mm_slli_epi32(zmm14, 2) & zmm0
    float temp0_534[0x4] = _mm_unpacklo_ps(*(r14 + sx.q(zmm14.d) + rax_83), 
        (*(r15 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + rax_83)).q)
    zmm2 = _mm_unpacklo_ps(*(r13 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + rax_83), 
        (*(rbp_10 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rax_83))[0].q)
    zmm3 = temp0_534[0].q | zmm2.q << 0x40
    zmm6 = _mm_slli_epi32(zmm6, 2) & zmm0
    zmm2 = _mm_add_ps(
        _mm_mul_ps(
            _mm_sub_ps(
                _mm_unpacklo_ps(*(r14 + sx.q(zmm6[0]) + rax_83), 
                    (*(r15 + sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0]) + rax_83))[0].q).q |
                    _mm_unpacklo_ps(*(r13 + sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0]) + rax_83), 
                    (*(rbp_10 + sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0]) + rax_83))[0].q)[0].q << 0x40, 
                zmm3), 
            zmm11), 
        zmm3)
    float temp0_549[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_516, zmm1), temp0_421), zmm1)
    zmm2 = _mm_add_ps(
        __mulps_xmmps_memps(
            _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm2, temp0_531), temp0_421), temp0_531), 
                temp0_549), 
            arg_60), 
        temp0_549)
    float temp0_556[0x4] = _mm_cmpeq_ps(arg12, zx.o(0), 4)
    uint32_t temp0_559[0x4] =
        _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), arg12, 7), temp0_556), zmm0)
    
    if (_mm_movemask_ps(temp0_559) != 0)
        float temp0_561[0x4] = _mm_rsqrt_ps(arg12)
        float temp0_563[0x4] = _mm_mul_ps(_mm_mul_ps(arg12, temp0_561), temp0_561)
        float temp0_566[0x4] = __mulps_xmmps_memps(
            _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_563), temp0_561), data_142d3f640)
        float temp0_567[0x4] = _mm_rcp_ps(temp0_566)
        float temp0_568[0x4] = _mm_mul_ps(temp0_566, temp0_567)
        zmm5 = _mm_and_ps(
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_568), temp0_567), zmm2), 
            temp0_559)
        zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_559, zmm2), zmm5)
    
    rcx = arg41
    rdx_3 = arg42
    zmm3 = arg19
    zmm9 = arg16
    zmm10 = arg15
    zmm11 = arg14
    zmm1 = arg40
    zmm2 = _mm_sub_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0))
    uint32_t temp0_578[0x4] = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm2, data_142fc95d0, 1), zmm0)
    result = _mm_movemask_ps(temp0_578)
    
    if (result == 0)
        goto label_1400cad7a
    
    float temp0_580[0x4] = _mm_mul_ps(arg_200, zmm2)
    float temp0_581[0x4] = _mm_mul_ps(arg_210, zmm2)
    float temp0_582[0x4] = _mm_mul_ps(arg_220, zmm2)
    zmm4 = zmm10
    char temp7_1 = result & 1
    
    if (temp7_1 == 0)
        zmm0 = zmm9
        
        if (temp7_1 != 0)
            goto label_1400caf87
        
        goto label_1400cacf7
    
    zmm4 = zmm10
    zmm4[0] = zmm4[0] + temp0_580[0]
    zmm0 = zmm9
    
    if (temp7_1 != 0)
    label_1400caf87:
        zmm0 = zmm9
        zmm0[0] = zmm0[0] + temp0_581[0]
        zmm8 = zmm11
        
        if (temp7_1 == 0)
            goto label_1400cad01
        
        goto label_1400caf99
    
label_1400cacf7:
    zmm8 = zmm11
    bool cond:22_1
    bool cond:23_1
    bool cond:24_1
    bool cond:25_1
    
    if (temp7_1 == 0)
    label_1400cad01:
        zmm10 = _mm_add_ps(zmm10, temp0_580)
        char temp9_1 = result & 2
        cond:22_1 = temp9_1 != 0
        cond:23_1 = temp9_1 == 0
        cond:24_1 = temp9_1 == 0
        cond:25_1 = temp9_1 != 0
        
        if (temp9_1 != 0)
            goto label_1400cafba
        
        goto label_1400cad0d
    
label_1400caf99:
    zmm8 = zmm11
    zmm8[0] = zmm8[0] + temp0_582[0]
    zmm10 = _mm_add_ps(zmm10, temp0_580)
    char temp8_1 = result & 2
    cond:22_1 = temp8_1 != 0
    cond:23_1 = temp8_1 == 0
    cond:24_1 = temp8_1 == 0
    cond:25_1 = temp8_1 != 0
    
    if (temp8_1 != 0)
    label_1400cafba:
        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm4, 1), zmm4, 0xe2)
        zmm9 = _mm_add_ps(zmm9, temp0_581)
        
        if (cond:23_1)
            goto label_1400cad17
        
        goto label_1400cafd3
    
label_1400cad0d:
    zmm9 = _mm_add_ps(zmm9, temp0_581)
    
    if (not(cond:22_1))
    label_1400cad17:
        zmm11 = _mm_add_ps(zmm11, temp0_582)
        
        if (cond:25_1)
            goto label_1400cafee
        
        goto label_1400cad21
    
label_1400cafd3:
    zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm0, 1), zmm0, 0xe2)
    zmm11 = _mm_add_ps(zmm11, temp0_582)
    bool cond:26_1
    bool cond:27_1
    bool cond:28_1
    bool cond:29_1
    
    if (not(cond:24_1))
    label_1400cafee:
        zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm8, 1), zmm8, 0xe2)
        char temp11_1 = result & 4
        cond:26_1 = temp11_1 == 0
        cond:27_1 = temp11_1 != 0
        cond:28_1 = temp11_1 != 0
        cond:29_1 = temp11_1 == 0
        
        if (temp11_1 == 0)
            goto label_1400cad29
        
        goto label_1400cb002
    
label_1400cad21:
    char temp10_1 = result & 4
    cond:26_1 = temp10_1 == 0
    cond:27_1 = temp10_1 != 0
    cond:28_1 = temp10_1 != 0
    cond:29_1 = temp10_1 == 0
    
    if (temp10_1 != 0)
    label_1400cb002:
        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm10, zmm4, 0x32), 0x84)
        
        if (not(cond:26_1))
        label_1400cb014:
            zmm0 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm9, zmm0, 0x32), 0x84)
            
            if (cond:29_1)
                goto label_1400cad35
            
            goto label_1400cb027
    else
    label_1400cad29:
        
        if (cond:27_1)
            goto label_1400cb014
    
    bool cond:30_1
    bool cond:31_1
    bool cond:32_1
    bool cond:33_1
    
    if (not(cond:28_1))
    label_1400cad35:
        char temp13_1 = result & 8
        cond:30_1 = temp13_1 != 0
        cond:31_1 = temp13_1 == 0
        cond:32_1 = temp13_1 != 0
        cond:33_1 = temp13_1 == 0
        
        if (temp13_1 != 0)
            goto label_1400cb03e
        
        goto label_1400cad3d
    
label_1400cb027:
    zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm11, zmm8, 0x32), 0x84)
    char temp12_1 = result & 8
    cond:30_1 = temp12_1 != 0
    cond:31_1 = temp12_1 == 0
    cond:32_1 = temp12_1 != 0
    cond:33_1 = temp12_1 == 0
    
    if (temp12_1 != 0)
    label_1400cb03e:
        zmm10 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm10, zmm4, 0x23), 0x24)
        
        if (cond:31_1)
            goto label_1400cad47
        
        goto label_1400cb052
    
label_1400cad3d:
    zmm10 = zmm4
    
    if (cond:30_1)
    label_1400cb052:
        zmm9 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm9, zmm0, 0x23), 0x24)
        
        if (cond:32_1)
            zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm11, zmm8, 0x23), 0x24)
    else
    label_1400cad47:
        zmm9 = zmm0
        
        if (not(cond:33_1))
            zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm11, zmm8, 0x23), 0x24)
    
    zmm0 = arg13
    zmm2 = _mm_and_ps(_mm_add_ps(zmm2, zmm0), temp0_578)
    zmm11 = zmm8
    arg13 = _mm_or_ps(_mm_andnot_ps(temp0_578, zmm0), zmm2)
    goto label_1400cad7a

*(&arg_10 + (rcx_1 << 2))
