// 函数: sub_1400d15b0
// 地址: 0x1400d15b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10[0x4]
float arg_40[0x4]
int32_t zmm1[0x4]

do
    zmm1 = *(&arg_10 + (arg1 << 2))
    arg1 += 4
    int32_t temp0_1[0x4] = _mm_cmpeq_epi32(zmm1, arg3)
    void arg_8
    void arg_c
    
    if (_mm_movemask_ps(temp0_1 & arg11) != 0)
        char temp0_3 = _mm_movemask_ps(temp0_1)
        
        if ((temp0_3 & 1) == 0)
            if ((temp0_3 & 2) != 0)
                goto label_1400d169f
            
            goto label_1400d15df
        
        *(&__return_addr + (arg1 << 2)) = 0
        
        if ((temp0_3 & 2) != 0)
        label_1400d169f:
            *(&__return_addr:4 + (arg1 << 2)) = 0
            
            if ((temp0_3 & 4) == 0)
                goto label_1400d15e7
            
            goto label_1400d16af
        
    label_1400d15df:
        
        if ((temp0_3 & 4) == 0)
        label_1400d15e7:
            
            if ((temp0_3 & 8) != 0)
                goto label_1400d16bf
            
            goto label_1400d15ef
        
    label_1400d16af:
        *(&arg_8 + (arg1 << 2)) = 0
        
        if ((temp0_3 & 8) != 0)
        label_1400d16bf:
            *(&arg_c + (arg1 << 2)) = 0
            
            if ((temp0_3 & 1) == 0)
                goto label_1400d15f7
            
            goto label_1400d16cf
        
    label_1400d15ef:
        
        if ((temp0_3 & 1) == 0)
        label_1400d15f7:
            
            if ((temp0_3 & 2) != 0)
                goto label_1400d16df
            
            goto label_1400d15ff
        
    label_1400d16cf:
        arg_40[arg1] = 0
        
        if ((temp0_3 & 2) != 0)
        label_1400d16df:
            arg_40[1 + arg1] = 0
            
            if ((temp0_3 & 4) == 0)
                goto label_1400d1607
            
            goto label_1400d16ef
        
    label_1400d15ff:
        
        if ((temp0_3 & 4) != 0)
        label_1400d16ef:
            arg_40[2 + arg1] = 0
            
            if ((temp0_3 & 8) != 0)
                arg_40[3 + arg1] = 0
        else
        label_1400d1607:
            
            if ((temp0_3 & 8) != 0)
                arg_40[3 + arg1] = 0
    
    int32_t rdx = *(arg4 + arg1)
    int32_t temp0_5[0x4] =
        __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx - 1), 0), *(&__return_addr + (arg1 << 2)))
    
    if (_mm_movemask_ps(temp0_5 & arg11) != 0)
        char temp0_7 = _mm_movemask_ps(temp0_5)
        
        if ((temp0_7 & 1) == 0)
            if ((temp0_7 & 2) != 0)
                goto label_1400d171b
            
            goto label_1400d164d
        
        *(&__return_addr + (arg1 << 2)) = rdx - 2
        
        if ((temp0_7 & 2) != 0)
        label_1400d171b:
            *(&__return_addr:4 + (arg1 << 2)) = rdx - 2
            
            if ((temp0_7 & 4) == 0)
                goto label_1400d1655
            
            goto label_1400d1727
        
    label_1400d164d:
        
        if ((temp0_7 & 4) == 0)
        label_1400d1655:
            
            if ((temp0_7 & 8) != 0)
                goto label_1400d1733
            
            goto label_1400d165d
        
    label_1400d1727:
        *(&arg_8 + (arg1 << 2)) = rdx - 2
        
        if ((temp0_7 & 8) != 0)
        label_1400d1733:
            *(&arg_c + (arg1 << 2)) = rdx - 2
            
            if ((temp0_7 & 1) == 0)
                goto label_1400d1665
            
            goto label_1400d173f
        
    label_1400d165d:
        
        if ((temp0_7 & 1) == 0)
        label_1400d1665:
            
            if ((temp0_7 & 2) != 0)
                goto label_1400d174f
            
            goto label_1400d166d
        
    label_1400d173f:
        arg_40[arg1] = 0x3f800000
        
        if ((temp0_7 & 2) != 0)
        label_1400d174f:
            arg_40[1 + arg1] = 0x3f800000
            
            if ((temp0_7 & 4) == 0)
                goto label_1400d1675
            
            goto label_1400d175f
        
    label_1400d166d:
        
        if ((temp0_7 & 4) != 0)
        label_1400d175f:
            arg_40[2 + arg1] = 0x3f800000
            
            if ((temp0_7 & 8) != 0)
                arg_40[3 + arg1] = 0x3f800000
        else
        label_1400d1675:
            
            if ((temp0_7 & 8) != 0)
                arg_40[3 + arg1] = 0x3f800000
while (arg1 != 8)

int32_t zmm8[0x4] = _mm_shuffle_epi32(zx.o(*(arg7 + 4)), 0)
uint32_t zmm7[0x4] = __return_addr.o
int32_t zmm3[0x4] = arg_10
arg3 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
int32_t temp0_14[0x4] =
    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), arg3[0].q)
int32_t temp0_15[0x4] = _mm_add_epi32(temp0_14, zmm3)
uint32_t temp0_16[0x4] = _mm_shuffle_epi32(zx.o(*(arg7 + 8)), 0)
uint32_t zmm14[0x4] = _mm_unpacklo_epi32(
    _mm_shuffle_epi32(_mm_mul_epu32(temp0_15, temp0_16), 0xe8), 
    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(temp0_15, 0xf5), temp0_16), 0xe8)[0].q)
int32_t temp0_23[0x4] = _mm_add_epi32(zmm14, arg13)
int128_t* rax_6 = *(arg7 + 0x10)
int32_t zmm5[0x4] = _mm_slli_epi32(temp0_23, 2) & arg11
int64_t rdx_2 = sx.q(zmm5[0])
float zmm15[0x4] = *(rax_6 + rdx_2)
int64_t rdx_4 = sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])
float temp0_26[0x4] = _mm_unpacklo_ps(zmm15, (*(rax_6 + rdx_4))[0].q)
int64_t rbp = sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])
arg3 = *(rax_6 + rbp)
int64_t rbp_2 = sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])
arg3 = _mm_unpacklo_ps(arg3, (*(rax_6 + rbp_2))[0].q)
zmm15 = temp0_26[0].q | arg3[0].q << 0x40
int32_t temp0_30[0x4] = _mm_cmpeq_epi32(arg12, arg12)
zmm7 = _mm_sub_epi32(zmm7, temp0_30)
arg3 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
uint32_t zmm12[0x4] =
    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm8), 0xe8), arg3[0].q)
int32_t temp0_38[0x4] = _mm_add_epi32(zmm12, zmm3)
zmm5 = _mm_shuffle_epi32(temp0_38, 0xf5)
uint32_t temp0_46[0x4] = _mm_slli_epi32(
    _mm_add_epi32(
        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_38, temp0_16), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(zmm5, temp0_16), 0xe8)[0].q), 
        arg13), 
    2)
int32_t temp0_47[0x4] = _mm_add_epi32(temp0_15, zmm8)
arg3 = _mm_shuffle_epi32(temp0_47, 0xf5)
int32_t temp0_53[0x4] = _mm_unpacklo_epi32(
    _mm_shuffle_epi32(_mm_mul_epu32(temp0_47, temp0_16), 0xe8), 
    _mm_shuffle_epi32(_mm_mul_epu32(arg3, temp0_16), 0xe8)[0].q)
zmm7 = temp0_46 & arg11
zmm5 = _mm_unpacklo_ps(*(rax_6 + sx.q(zmm7[0])), 
    (*(rax_6 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5)[0])))[0].q)
arg3 = _mm_unpacklo_ps(*(rax_6 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e)[0])), 
    (*(rax_6 + sx.q(_mm_shuffle_epi32(zmm7, 0xe7)[0])))[0].q)
zmm5 = _mm_sub_ps(zmm5[0].q | arg3[0].q << 0x40, zmm15)
float zmm11[0x4] = arg_40
zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm11), zmm15)
int32_t temp0_62[0x4] = _mm_sub_epi32(zmm3, temp0_30)
int32_t temp0_63[0x4] = _mm_add_epi32(temp0_14, temp0_62)
arg3 = _mm_shuffle_epi32(temp0_63, 0xf5)
int32_t zmm4[0x4] = _mm_slli_epi32(
    _mm_add_epi32(
        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_63, temp0_16), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(arg3, temp0_16), 0xe8)[0].q), 
        arg13), 
    2) & arg11
zmm1 = _mm_unpacklo_ps(*(rax_6 + sx.q(zmm4[0])), 
    (*(rax_6 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q)
arg3 = _mm_unpacklo_ps(*(rax_6 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
    (*(rax_6 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)
zmm1 = zmm1[0].q | arg3[0].q << 0x40
int32_t temp0_77[0x4] = _mm_add_epi32(temp0_62, zmm12)
arg3 = _mm_shuffle_epi32(temp0_77, 0xf5)
zmm4 = _mm_slli_epi32(
    _mm_add_epi32(
        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_77, temp0_16), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(arg3, temp0_16), 0xe8)[0].q), 
        arg13), 
    2) & arg11
zmm3 = _mm_unpacklo_ps(*(rax_6 + sx.q(zmm4[0])), 
    (*(rax_6 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q)
arg3 = _mm_unpacklo_ps(*(rax_6 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
    (*(rax_6 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)
zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3[0].q | arg3[0].q << 0x40, zmm1), zmm11), zmm1)
zmm4 = _mm_unpacklo_ps(*(arg9 + rax_6 + rdx_2), (*(arg10 + rax_6 + rdx_4))[0].q)
zmm1 = _mm_unpacklo_ps(*(arg8 + rax_6 + rbp), (*(arg6 + rax_6 + rbp_2))[0].q)
zmm4 = zmm4[0].q | zmm1[0].q << 0x40
uint32_t zmm6[0x4] = _mm_add_epi32(temp0_16, arg13)
zmm14 = _mm_add_epi32(zmm14, zmm6)
zmm6 = _mm_add_epi32(zmm6, temp0_53)
zmm8 = _mm_slli_epi32(_mm_add_epi32(temp0_53, arg13), 2) & arg11
arg3 = _mm_unpacklo_ps(*(arg9 + sx.q(zmm8[0]) + rax_6), 
    (*(arg10 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5)[0]) + rax_6))[0].q)
zmm1 = _mm_unpacklo_ps(*(arg8 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e)[0]) + rax_6), 
    (*(arg6 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + rax_6))[0].q)
arg3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(arg3[0].q | zmm1[0].q << 0x40, zmm4), zmm11), zmm4)
zmm14 = _mm_slli_epi32(zmm14, 2) & arg11
zmm4 = _mm_unpacklo_ps(*(arg9 + sx.q(zmm14[0]) + rax_6), 
    (*(arg10 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5)[0]) + rax_6))[0].q)
zmm1 = _mm_unpacklo_ps(*(arg8 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e)[0]) + rax_6), 
    (*(arg6 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rax_6))[0].q)
zmm4 = zmm4[0].q | zmm1[0].q << 0x40
zmm6 = _mm_slli_epi32(zmm6, 2) & arg11
zmm1 = _mm_unpacklo_ps(*(arg9 + sx.q(zmm6[0]) + rax_6), 
    (*(arg10 + sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0]) + rax_6))[0].q)
zmm7 = _mm_unpacklo_ps(*(arg8 + sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0]) + rax_6), 
    (*(arg6 + sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0]) + rax_6))[0].q)
zmm1 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1[0].q | zmm7[0].q << 0x40, zmm4), zmm11), zmm4)
zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, zmm5), arg14), zmm5)
zmm1 = _mm_add_ps(
    __mulps_xmmps_memps(
        _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm1, arg3), arg14), arg3), zmm3), arg15), 
    zmm3)
zmm3 = _mm_cmpeq_ps(arg16, zx.o(0), 4)
arg3 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), arg16, 7), zmm3), arg11)

if (_mm_movemask_ps(arg3) != 0)
    zmm3 = _mm_rsqrt_ps(arg16)
    zmm5 = _mm_mul_ps(_mm_mul_ps(arg16, zmm3), zmm3)
    zmm4 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm5), zmm3), data_142d3f640)
    zmm3 = _mm_rcp_ps(zmm4)
    zmm4 = _mm_mul_ps(zmm4, zmm3)
    zmm5 = _mm_and_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm4), zmm3), zmm1), arg3)
    zmm1 = _mm_or_ps(_mm_andnot_ps(arg3, zmm1), zmm5)

zmm8 = arg20
int32_t zmm9[0x4] = arg19
float zmm10[0x4] = arg18
arg3 = arg42
zmm1 = _mm_sub_ps(zmm1, _mm_shuffle_ps(arg3, arg3, 0))
arg3 = _mm_and_ps(__cmpps_xmmps_memps_immb(zmm1, data_142fc95d0, 1), arg11)
char result = _mm_movemask_ps(arg3)

if (result != 0)
    zmm7 = _mm_mul_ps(arg21, zmm1)
    zmm6 = _mm_mul_ps(arg22, zmm1)
    zmm5 = _mm_mul_ps(arg23, zmm1)
    zmm4 = zmm9
    char temp0_160 = result & 1
    
    if (temp0_160 == 0)
        zmm3 = zmm8
        
        if (temp0_160 != 0)
            goto label_1400d2999
        
        goto label_1400d2126
    
    zmm4 = zmm9
    zmm4[0] = zmm4[0] f+ zmm7[0]
    zmm3 = zmm8
    
    if (temp0_160 != 0)
    label_1400d2999:
        zmm3 = zmm8
        zmm3[0] = zmm3[0] f+ zmm6[0]
        arg11 = zmm10
        
        if (temp0_160 == 0)
            goto label_1400d2130
        
        goto label_1400d29ab
    
label_1400d2126:
    arg11 = zmm10
    bool cond:4_1
    bool cond:5_1
    bool cond:6_1
    bool cond:7_1
    
    if (temp0_160 == 0)
    label_1400d2130:
        zmm9 = _mm_add_ps(zmm9, zmm7)
        char temp2_1 = result & 2
        cond:4_1 = temp2_1 != 0
        cond:5_1 = temp2_1 == 0
        cond:6_1 = temp2_1 == 0
        cond:7_1 = temp2_1 != 0
        
        if (temp2_1 != 0)
            goto label_1400d29cb
        
        goto label_1400d213c
    
label_1400d29ab:
    arg11 = zmm10
    arg11[0] = arg11[0] f+ zmm5[0]
    zmm9 = _mm_add_ps(zmm9, zmm7)
    char temp1_1 = result & 2
    cond:4_1 = temp1_1 != 0
    cond:5_1 = temp1_1 == 0
    cond:6_1 = temp1_1 == 0
    cond:7_1 = temp1_1 != 0
    
    if (temp1_1 != 0)
    label_1400d29cb:
        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm4, 1), zmm4, 0xe2)
        zmm8 = _mm_add_ps(zmm8, zmm6)
        
        if (cond:5_1)
            goto label_1400d2146
        
        goto label_1400d29e4
    
label_1400d213c:
    zmm8 = _mm_add_ps(zmm8, zmm6)
    
    if (not(cond:4_1))
    label_1400d2146:
        zmm10 = _mm_add_ps(zmm10, zmm5)
        
        if (cond:7_1)
            goto label_1400d29fd
        
        goto label_1400d2150
    
label_1400d29e4:
    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm3, 1), zmm3, 0xe2)
    zmm10 = _mm_add_ps(zmm10, zmm5)
    bool cond:8_1
    bool cond:9_1
    bool cond:10_1
    bool cond:11_1
    
    if (not(cond:6_1))
    label_1400d29fd:
        arg11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, arg11, 1), arg11, 0xe2)
        char temp4_1 = result & 4
        cond:8_1 = temp4_1 == 0
        cond:9_1 = temp4_1 != 0
        cond:10_1 = temp4_1 != 0
        cond:11_1 = temp4_1 == 0
        
        if (temp4_1 == 0)
            goto label_1400d2158
        
        goto label_1400d2a10
    
label_1400d2150:
    char temp3_1 = result & 4
    cond:8_1 = temp3_1 == 0
    cond:9_1 = temp3_1 != 0
    cond:10_1 = temp3_1 != 0
    cond:11_1 = temp3_1 == 0
    
    if (temp3_1 != 0)
    label_1400d2a10:
        zmm4 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x32), 0x84)
        
        if (not(cond:8_1))
        label_1400d2a22:
            zmm3 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x32), 0x84)
            
            if (cond:11_1)
                goto label_1400d2164
            
            goto label_1400d2a34
    else
    label_1400d2158:
        
        if (cond:9_1)
            goto label_1400d2a22
    
    bool cond:12_1
    bool cond:13_1
    bool cond:14_1
    bool cond:15_1
    
    if (not(cond:10_1))
    label_1400d2164:
        char temp6_1 = result & 8
        cond:12_1 = temp6_1 != 0
        cond:13_1 = temp6_1 == 0
        cond:14_1 = temp6_1 != 0
        cond:15_1 = temp6_1 == 0
        
        if (temp6_1 != 0)
            goto label_1400d2a4a
        
        goto label_1400d216c
    
label_1400d2a34:
    arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm10, arg11, 0x32), 0x84)
    char temp5_1 = result & 8
    cond:12_1 = temp5_1 != 0
    cond:13_1 = temp5_1 == 0
    cond:14_1 = temp5_1 != 0
    cond:15_1 = temp5_1 == 0
    
    if (temp5_1 != 0)
    label_1400d2a4a:
        zmm9 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm9, zmm4, 0x23), 0x24)
        
        if (cond:13_1)
            goto label_1400d2176
        
        goto label_1400d2a5e
    
label_1400d216c:
    zmm9 = zmm4
    
    if (cond:12_1)
    label_1400d2a5e:
        zmm8 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(zmm8, zmm3, 0x23), 0x24)
        
        if (cond:14_1)
            arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm10, arg11, 0x23), 0x24)
    else
    label_1400d2176:
        zmm8 = zmm3
        
        if (not(cond:15_1))
            arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm10, arg11, 0x23), 0x24)
    
    zmm1 = _mm_and_ps(_mm_add_ps(zmm1, arg17), arg3)
    zmm10 = arg11
    arg17 = _mm_or_ps(_mm_andnot_ps(arg3, arg17), zmm1)

float temp0_171[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm9, zmm9[0].q), zmm9)
zmm1 = _mm_shuffle_ps(temp0_171, temp0_171, 0xe5)
zmm1[0] = zmm1[0] f+ temp0_171[0]
float temp0_174[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm8, zmm8[0].q), zmm8)
arg3 = _mm_shuffle_ps(temp0_174, temp0_174, 0xe5)
arg3[0] = arg3[0] f+ temp0_174[0]
zmm1 = _mm_unpacklo_ps(zmm1, arg3[0].q)
float temp0_178[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm10, zmm10[0].q), zmm10)
arg3 = _mm_shuffle_ps(temp0_178, temp0_178, 0xe5)
arg3[0] = arg3[0] f+ temp0_178[0]
arg3 = _mm_add_ps(zx.o(*arg5)[0].q | arg5[1].d[0].q << 0x40, zmm1[0].q | arg3[0].q << 0x40)
arg11 = arg3
*arg5 = arg3[0]
arg3 = _mm_shuffle_ps(arg3, arg3, 0xe5)
arg11[0].q = arg11 u>> 0x40
*(arg5 + 4) = arg3[0]
arg5[1].d = arg11[0]
float temp0_183[0x4] = _mm_add_ps(_mm_shuffle_epi32(arg17, 0xee), arg17)
zmm1 = _mm_shuffle_ps(temp0_183, temp0_183, 0xe5)
zmm1[0] = zmm1[0] f+ temp0_183[0]
zmm1[0] = zmm1[0] f+ *arg43
*arg43 = zmm1[0]
return result
