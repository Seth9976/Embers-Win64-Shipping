// 函数: sub_1400d1160
// 地址: 0x1400d1160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
void arg_c
float arg_200[0x4]
float arg_210[0x4]
uint32_t zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm5[0x4]
float zmm6[0x4]

do
    zmm1 = *(&arg_210 + (arg2 << 2))
    arg2 += 4
    void arg_170
    zmm3 = *(&arg_170 + arg2)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    float temp0_2[0x4] = _mm_cmpeq_ps(temp0_1, zmm1, 1)
    
    if (_mm_movemask_ps(_mm_and_ps(temp0_2, arg10)) != 0)
        char temp0_5 = _mm_movemask_ps(temp0_2)
        
        if ((temp0_5 & 1) == 0)
            if ((temp0_5 & 2) != 0)
                goto label_1400d127d
            
            goto label_1400d11a3
        
        *(&__return_addr + (arg2 << 2)) = zmm3[0]
        
        if ((temp0_5 & 2) != 0)
        label_1400d127d:
            *(&__return_addr:4 + (arg2 << 2)) = zmm3[0]
            
            if ((temp0_5 & 4) == 0)
                goto label_1400d11ab
            
            goto label_1400d128b
        
    label_1400d11a3:
        
        if ((temp0_5 & 4) != 0)
        label_1400d128b:
            *(&arg_8 + (arg2 << 2)) = zmm3[0]
            
            if ((temp0_5 & 8) != 0)
                *(&arg_c + (arg2 << 2)) = zmm3[0]
        else
        label_1400d11ab:
            
            if ((temp0_5 & 8) != 0)
                *(&arg_c + (arg2 << 2)) = zmm3[0]
    
    float temp0_6[0x4] = _mm_cmpeq_ps(temp0_1, zmm1, 5)
    
    if (_mm_movemask_ps(_mm_and_ps(arg10, temp0_6)) != 0)
        void arg_160
        zmm5 = *(&arg_160 + arg2)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_9, 1), temp0_6)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm6, arg10)) != 0)
            char temp0_14 = _mm_movemask_ps(zmm6)
            
            if ((temp0_14 & 1) == 0)
                if ((temp0_14 & 2) != 0)
                    goto label_1400d12ab
                
                goto label_1400d1204
            
            *(&__return_addr + (arg2 << 2)) = zmm5[0]
            
            if ((temp0_14 & 2) != 0)
            label_1400d12ab:
                *(&__return_addr:4 + (arg2 << 2)) = zmm5[0]
                
                if ((temp0_14 & 4) == 0)
                    goto label_1400d120c
                
                goto label_1400d12b9
            
        label_1400d1204:
            
            if ((temp0_14 & 4) != 0)
            label_1400d12b9:
                *(&arg_8 + (arg2 << 2)) = zmm5[0]
                
                if ((temp0_14 & 8) != 0)
                    *(&arg_c + (arg2 << 2)) = zmm5[0]
            else
            label_1400d120c:
                
                if ((temp0_14 & 8) != 0)
                    *(&arg_c + (arg2 << 2)) = zmm5[0]
        
        uint32_t temp0_16[0x4] = _mm_and_ps(_mm_cmpeq_ps(zmm1, temp0_9, 5), temp0_6)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_16, arg10)) != 0)
            zmm2 = *(&arg_200 + (arg2 << 2))
            char temp0_19 = _mm_movemask_ps(temp0_16)
            
            if ((temp0_19 & 1) == 0)
                if ((temp0_19 & 2) != 0)
                    goto label_1400d12de
                
                goto label_1400d1246
            
            *(&__return_addr + (arg2 << 2)) = zmm2[0]
            
            if ((temp0_19 & 2) != 0)
            label_1400d12de:
                *(&__return_addr:4 + (arg2 << 2)) = _mm_shuffle_epi32(zmm2, 0xe5)[0]
                
                if ((temp0_19 & 4) == 0)
                    goto label_1400d124e
                
                goto label_1400d12f1
            
        label_1400d1246:
            
            if ((temp0_19 & 4) != 0)
            label_1400d12f1:
                *(&arg_8 + (arg2 << 2)) = _mm_shuffle_epi32(zmm2, 0x4e)[0]
                
                if ((temp0_19 & 8) != 0)
                    *(&arg_c + (arg2 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7)[0]
            else
            label_1400d124e:
                
                if ((temp0_19 & 8) != 0)
                    *(&arg_c + (arg2 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7)[0]
while (arg2 != 8)

float arg_a0[0x4] = arg12
float zmm9[0x4] = __return_addr.o
float arg_10[0x4]
float zmm12[0x4] = arg_10
float temp0_23[0x4] = _mm_sub_ps(zmm9, arg11)
zmm6 = *arg1
zmm3 = (*arg1)[1]
float temp0_24[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm1 = _mm_sub_ps(zmm9, temp0_24)
float temp0_26[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_27[0x4] = _mm_sub_ps(zmm12, temp0_26)
zmm5 = *arg3
float zmm7[0x4] = (*arg3)[1]
float temp0_28[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm1 = _mm_div_ps(zmm1, temp0_28)
float temp0_30[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_31[0x4] = _mm_div_ps(temp0_27, temp0_30)
float zmm8[0x4] = (*arg3)[2]
int32_t zmm13[0x4] = _mm_cvttps_epi32(zmm1)
zmm1 = _mm_cvttps_epi32(temp0_31)
float temp0_36[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), temp0_28), temp0_24)
zmm6 = zmm1
float temp0_37[0x4] = __divps_xmmps_memps(zx.o(*arg3)[0].q | zmm8[0].q << 0x40, data_142fc9600)
zmm1 = _mm_shuffle_ps(temp0_37, temp0_37, 0)
uint32_t arg_100[0x4] = zmm1
float arg_150[0x4] = zmm9
float temp0_40[0x4] = _mm_cmpeq_ps(_mm_add_ps(temp0_36, zmm1), zmm9, 1)
zmm5 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm1, zmm1))
uint32_t temp0_43[0x4] = _mm_and_ps(zmm13, temp0_40)
arg11 = _mm_or_ps(_mm_andnot_ps(temp0_40, zmm5), temp0_43)
float temp0_48[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), temp0_30), temp0_26)
float temp0_49[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x55)
float temp0_50[0x4] = _mm_add_ps(temp0_48, temp0_49)
float temp0_51[0x4] = _mm_cmpeq_ps(temp0_50, zmm12, 1)
char temp0_53 = _mm_movemask_ps(_mm_and_ps(temp0_51, arg10))
zmm1 = (*arg1)[2]
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_55[0x4] = _mm_sub_ps(arg13, zmm1)
float temp0_56[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
float zmm10[0x4] = _mm_cvttps_epi32(_mm_div_ps(temp0_55, temp0_56))
float temp0_61[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm10), temp0_56), zmm1)
float temp0_62[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xaa)
__return_addr.o = arg11
float temp0_63[0x4] = _mm_cmpeq_ps(temp0_50, zmm12, 5)

if (temp0_53 != 0)
    zmm13 = zmm6

float arg_140[0x4] = zmm12
float temp0_64[0x4] = __subps_xmmps_memps(zmm12, arg18)
float temp0_65[0x4] = _mm_mul_ps(temp0_23, temp0_23)
float temp0_66[0x4] = _mm_add_ps(temp0_61, temp0_62)

if (_mm_movemask_ps(_mm_and_ps(temp0_63, arg10)) != 0)
    zmm5 = __paddd_xmmdq_memdq(zmm6, data_142d3f800)

float temp0_70[0x4] = __subps_xmmps_memps(arg13, arg14)
float temp0_71[0x4] = _mm_add_ps(temp0_65, zx.o(0))
float temp0_72[0x4] = _mm_mul_ps(temp0_64, temp0_64)
zmm6 = _mm_and_ps(zmm13, temp0_51)
zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_51, zmm5), zmm6)
arg_10 = zmm9
float temp0_76[0x4] = _mm_cmpeq_ps(temp0_66, arg13, 5)
float temp0_77[0x4] = _mm_cmpeq_ps(temp0_66, arg13, 1)

if (_mm_movemask_ps(_mm_and_ps(temp0_77, arg10)) != 0)
    zmm13 = zmm10

float temp0_80[0x4] = _mm_add_ps(temp0_71, temp0_72)
float temp0_81[0x4] = _mm_mul_ps(temp0_70, temp0_70)

if (_mm_movemask_ps(_mm_and_ps(temp0_76, arg10)) != 0)
    zmm5 = __paddd_xmmdq_memdq(zmm10, data_142d3f800)

float temp0_85[0x4] = _mm_add_ps(temp0_80, temp0_81)
zmm13 = _mm_and_ps(zmm13, temp0_77)
zmm12 = _mm_or_ps(_mm_andnot_ps(temp0_77, zmm5), zmm13)
float temp0_91[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(arg11), temp0_28), temp0_24)
float temp0_94[0x4] = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm9), temp0_30), temp0_26)
float temp0_97[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_56), zmm1)
zmm1 = _mm_add_ps(arg_100, temp0_91)
float temp0_99[0x4] = _mm_add_ps(temp0_49, temp0_94)
float temp0_100[0x4] = _mm_add_ps(temp0_62, temp0_97)
float temp0_101[0x4] = _mm_sub_ps(arg_150, zmm1)
float temp0_102[0x4] = _mm_sub_ps(arg_140, temp0_99)
float temp0_103[0x4] = _mm_sub_ps(arg13, temp0_100)
float temp0_104[0x4] = _mm_div_ps(temp0_101, temp0_28)
float temp0_105[0x4] = _mm_div_ps(temp0_102, temp0_30)
float temp0_106[0x4] = _mm_div_ps(temp0_103, temp0_56)
float arg_40[0x4] = temp0_104
int64_t rcx = 0
zmm1 = _mm_cmpeq_epi32(zmm1, zmm1)

while (true)
    arg11 = _mm_cmpeq_epi32(arg11, zmm1)
    
    if (_mm_movemask_ps(arg11 & arg10) != 0)
        char temp0_110 = _mm_movemask_ps(arg11)
        
        if ((temp0_110 & 1) == 0)
            if ((temp0_110 & 2) != 0)
                goto label_1400d1b0f
            
            goto label_1400d1a4f
        
        *(&__return_addr + (rcx << 2)) = 0
        
        if ((temp0_110 & 2) != 0)
        label_1400d1b0f:
            *(&__return_addr:4 + (rcx << 2)) = 0
            
            if ((temp0_110 & 4) == 0)
                goto label_1400d1a57
            
            goto label_1400d1b1f
        
    label_1400d1a4f:
        
        if ((temp0_110 & 4) == 0)
        label_1400d1a57:
            
            if ((temp0_110 & 8) != 0)
                goto label_1400d1b2f
            
            goto label_1400d1a5f
        
    label_1400d1b1f:
        *(&arg_8 + (rcx << 2)) = 0
        
        if ((temp0_110 & 8) != 0)
        label_1400d1b2f:
            *(&arg_c + (rcx << 2)) = 0
            
            if ((temp0_110 & 1) == 0)
                goto label_1400d1a67
            
            goto label_1400d1b3f
        
    label_1400d1a5f:
        
        if ((temp0_110 & 1) == 0)
        label_1400d1a67:
            
            if ((temp0_110 & 2) != 0)
                goto label_1400d1b4f
            
            goto label_1400d1a6f
        
    label_1400d1b3f:
        arg_40[rcx] = 0
        
        if ((temp0_110 & 2) != 0)
        label_1400d1b4f:
            arg_40[1 + rcx] = 0
            
            if ((temp0_110 & 4) == 0)
                goto label_1400d1a77
            
            goto label_1400d1b5f
        
    label_1400d1a6f:
        
        if ((temp0_110 & 4) != 0)
        label_1400d1b5f:
            arg_40[2 + rcx] = 0
            
            if ((temp0_110 & 8) != 0)
                arg_40[3 + rcx] = 0
        else
        label_1400d1a77:
            
            if ((temp0_110 & 8) != 0)
                arg_40[3 + rcx] = 0
    
    int32_t rdx = *(arg4 + rcx)
    zmm2 =
        __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx - 1), 0), *(&__return_addr + (rcx << 2)))
    
    if (_mm_movemask_ps(zmm2 & arg10) != 0)
        char temp0_114 = _mm_movemask_ps(zmm2)
        
        if ((temp0_114 & 1) == 0)
            if ((temp0_114 & 2) != 0)
                goto label_1400d1b8b
            
            goto label_1400d1abd
        
        *(&__return_addr + (rcx << 2)) = rdx - 2
        
        if ((temp0_114 & 2) != 0)
        label_1400d1b8b:
            *(&__return_addr:4 + (rcx << 2)) = rdx - 2
            
            if ((temp0_114 & 4) == 0)
                goto label_1400d1ac5
            
            goto label_1400d1b97
        
    label_1400d1abd:
        
        if ((temp0_114 & 4) == 0)
        label_1400d1ac5:
            
            if ((temp0_114 & 8) != 0)
                goto label_1400d1ba3
            
            goto label_1400d1acd
        
    label_1400d1b97:
        *(&arg_8 + (rcx << 2)) = rdx - 2
        
        if ((temp0_114 & 8) != 0)
        label_1400d1ba3:
            *(&arg_c + (rcx << 2)) = rdx - 2
            
            if ((temp0_114 & 1) == 0)
                goto label_1400d1ad5
            
            goto label_1400d1baf
        
    label_1400d1acd:
        
        if ((temp0_114 & 1) == 0)
        label_1400d1ad5:
            
            if ((temp0_114 & 2) != 0)
                goto label_1400d1bbf
            
            goto label_1400d1add
        
    label_1400d1baf:
        arg_40[rcx] = 0x3f800000
        
        if ((temp0_114 & 2) != 0)
        label_1400d1bbf:
            arg_40[1 + rcx] = 0x3f800000
            
            if ((temp0_114 & 4) == 0)
                goto label_1400d1ae5
            
            goto label_1400d1bcf
        
    label_1400d1add:
        
        if ((temp0_114 & 4) != 0)
        label_1400d1bcf:
            arg_40[2 + rcx] = 0x3f800000
            
            if ((temp0_114 & 8) != 0)
                arg_40[3 + rcx] = 0x3f800000
        else
        label_1400d1ae5:
            
            if ((temp0_114 & 8) != 0)
                arg_40[3 + rcx] = 0x3f800000
    
    if (rcx == 8)
        break
    
    arg11 = *(&arg_10 + (rcx << 2))
    rcx += 4

zmm8 = _mm_shuffle_epi32(zx.o(*(arg6 + 4)), 0)
zmm7 = __return_addr.o
zmm5 = arg_10
zmm10 = zmm12
zmm3 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), zmm3[0].q)
zmm3 = _mm_add_epi32(zmm2, zmm5)
zmm6 = _mm_shuffle_epi32(zx.o(*(arg6 + 8)), 0)
float zmm14[0x4] = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8), 
    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm3, 0xf5), zmm6), 0xe8)[0].q)
zmm1 = _mm_add_epi32(zmm14, zmm10)
float (* rax_17)[0x4] = *(arg6 + 0x10)
zmm1 = _mm_slli_epi32(zmm1, 2) & arg10
int64_t rdx_2 = sx.q(zmm1[0])
float zmm15[0x4] = *(rax_17 + rdx_2)
int64_t rdx_4 = sx.q(_mm_shuffle_epi32(zmm1, 0xe5)[0])
float temp0_133[0x4] = _mm_unpacklo_ps(zmm15, (*(rax_17 + rdx_4))[0].q)
int64_t rbx = sx.q(_mm_shuffle_epi32(zmm1, 0x4e)[0])
arg11 = *(rax_17 + rbx)
int64_t rbx_2 = sx.q(_mm_shuffle_epi32(zmm1, 0xe7)[0])
float temp0_136[0x4] = _mm_unpacklo_ps(arg11, (*(rax_17 + rbx_2))[0].q)
zmm15 = temp0_133[0].q | temp0_136[0].q << 0x40
int32_t temp0_137[0x4] = _mm_cmpeq_epi32(zmm13, zmm13)
zmm7 = _mm_sub_epi32(zmm7, temp0_137)
uint32_t temp0_141[0x4] =
    _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm7, zmm8), 0xe8), temp0_141[0].q)
zmm1 = _mm_add_epi32(zmm12, zmm5)
arg11 = _mm_shuffle_epi32(zmm1, 0xf5)
zmm7 = _mm_slli_epi32(
    _mm_add_epi32(
        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm6), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(arg11, zmm6), 0xe8)[0].q), 
        zmm10), 
    2)
zmm3 = _mm_add_epi32(zmm3, zmm8)
uint32_t temp0_155[0x4] = _mm_shuffle_epi32(zmm3, 0xf5)
zmm8 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8), 
    _mm_shuffle_epi32(_mm_mul_epu32(temp0_155, zmm6), 0xe8)[0].q)
zmm7 &= arg10
zmm1 = _mm_unpacklo_ps(*(rax_17 + sx.q(zmm7[0])), 
    (*(rax_17 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5)[0])))[0].q)
float temp0_165[0x4] = _mm_unpacklo_ps(*(rax_17 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e)[0])), 
    (*(rax_17 + sx.q(_mm_shuffle_epi32(zmm7, 0xe7)[0])))[0].q)
zmm1 = _mm_sub_ps(zmm1[0].q | temp0_165[0].q << 0x40, zmm15)
arg12 = arg_40
zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, arg12), zmm15)
zmm5 = _mm_sub_epi32(zmm5, temp0_137)
zmm2 = _mm_add_epi32(zmm2, zmm5)
zmm3 = _mm_shuffle_epi32(zmm2, 0xf5)
arg11 = _mm_slli_epi32(
    _mm_add_epi32(
        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm6), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8)[0].q), 
        zmm10), 
    2) & arg10
float temp0_180[0x4] = _mm_unpacklo_ps(*(rax_17 + sx.q(arg11[0])), 
    (*(rax_17 + sx.q(_mm_shuffle_epi32(arg11, 0xe5)[0])))[0].q)
float temp0_183[0x4] = _mm_unpacklo_ps(*(rax_17 + sx.q(_mm_shuffle_epi32(arg11, 0x4e)[0])), 
    (*(rax_17 + sx.q(_mm_shuffle_epi32(arg11, 0xe7)[0])))[0].q)
zmm2 = temp0_180[0].q | temp0_183[0].q << 0x40
zmm5 = _mm_add_epi32(zmm5, zmm12)
zmm3 = _mm_shuffle_epi32(zmm5, 0xf5)
arg11 = _mm_slli_epi32(
    _mm_add_epi32(
        _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm6), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(zmm3, zmm6), 0xe8)[0].q), 
        zmm10), 
    2) & arg10
float temp0_194[0x4] = _mm_unpacklo_ps(*(rax_17 + sx.q(arg11[0])), 
    (*(rax_17 + sx.q(_mm_shuffle_epi32(arg11, 0xe5)[0])))[0].q)
float temp0_197[0x4] = _mm_unpacklo_ps(*(rax_17 + sx.q(_mm_shuffle_epi32(arg11, 0x4e)[0])), 
    (*(rax_17 + sx.q(_mm_shuffle_epi32(arg11, 0xe7)[0])))[0].q)
float temp0_200[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_194[0].q | temp0_197[0].q << 0x40, zmm2), arg12), zmm2)
float temp0_201[0x4] = _mm_unpacklo_ps(*(arg8 + rax_17 + rdx_2), (*(arg9 + rax_17 + rdx_4))[0].q)
float temp0_202[0x4] = _mm_unpacklo_ps(*(arg7 + rax_17 + rbx), (*(arg5 + rax_17 + rbx_2))[0].q)
zmm3 = temp0_201[0].q | temp0_202[0].q << 0x40
zmm6 = _mm_add_epi32(zmm6, zmm10)
zmm14 = _mm_add_epi32(zmm14, zmm6)
zmm6 = _mm_add_epi32(zmm6, zmm8)
zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2) & arg10
float temp0_209[0x4] = _mm_unpacklo_ps(*(arg8 + sx.q(zmm8[0]) + rax_17), 
    (*(arg9 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5)[0]) + rax_17))[0].q)
float temp0_212[0x4] = _mm_unpacklo_ps(*(arg7 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e)[0]) + rax_17), 
    (*(arg5 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + rax_17))[0].q)
float temp0_215[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_209[0].q | temp0_212[0].q << 0x40, zmm3), arg12), zmm3)
zmm14 = _mm_slli_epi32(zmm14, 2) & arg10
float temp0_218[0x4] = _mm_unpacklo_ps(*(arg8 + sx.q(zmm14[0]) + rax_17), 
    (*(arg9 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5)[0]) + rax_17))[0].q)
float temp0_221[0x4] = _mm_unpacklo_ps(*(arg7 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e)[0]) + rax_17), 
    (*(arg5 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rax_17))[0].q)
zmm3 = temp0_218[0].q | temp0_221[0].q << 0x40
zmm6 = _mm_slli_epi32(zmm6, 2) & arg10
float temp0_224[0x4] = _mm_unpacklo_ps(*(arg8 + sx.q(zmm6[0]) + rax_17), 
    (*(arg9 + sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0]) + rax_17))[0].q)
float temp0_227[0x4] = _mm_unpacklo_ps(*(arg7 + sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0]) + rax_17), 
    (*(arg5 + sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0]) + rax_17))[0].q)
float temp0_230[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_224[0].q | temp0_227[0].q << 0x40, zmm3), arg12), zmm3)
float temp0_233[0x4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_200, zmm1), temp0_105), zmm1)
zmm2 = _mm_add_ps(
    __mulps_xmmps_memps(
        _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_230, temp0_215), temp0_105), temp0_215), 
            temp0_233), 
        temp0_106), 
    temp0_233)
float temp0_240[0x4] = _mm_cmpeq_ps(temp0_85, zx.o(0), 4)
uint32_t temp0_243[0x4] =
    _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_85, 7), temp0_240), arg10)

if (_mm_movemask_ps(temp0_243) != 0)
    float temp0_245[0x4] = _mm_rsqrt_ps(temp0_85)
    float temp0_247[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_85, temp0_245), temp0_245)
    float temp0_250[0x4] = __mulps_xmmps_memps(
        _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_247), temp0_245), data_142d3f640)
    float temp0_251[0x4] = _mm_rcp_ps(temp0_250)
    float temp0_252[0x4] = _mm_mul_ps(temp0_250, temp0_251)
    zmm5 = _mm_and_ps(
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_252), temp0_251), zmm2), temp0_243)
    zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_243, zmm2), zmm5)

zmm9 = arg17
zmm10 = arg16
arg12 = arg_a0
zmm1 = arg39
float temp0_260[0x4] = _mm_sub_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0))
uint32_t temp0_262[0x4] = _mm_and_ps(__cmpps_xmmps_memps_immb(temp0_260, data_142fc95d0, 1), arg10)
char result = _mm_movemask_ps(temp0_262)

if (result != 0)
    float temp0_264[0x4] = _mm_mul_ps(arg_200, temp0_260)
    float temp0_265[0x4] = _mm_mul_ps(arg_210, temp0_260)
    float temp0_266[0x4] = _mm_mul_ps(arg20, temp0_260)
    arg11 = zmm10
    char temp0_267 = result & 1
    
    if (temp0_267 == 0)
        arg10 = zmm9
        
        if (temp0_267 != 0)
            goto label_1400d2a7f
        
        goto label_1400d26fe
    
    arg11 = zmm10
    arg11[0] = arg11[0] + temp0_264[0]
    arg10 = zmm9
    
    if (temp0_267 != 0)
    label_1400d2a7f:
        arg10 = zmm9
        arg10[0] = arg10[0] + temp0_265[0]
        zmm8 = arg12
        
        if (temp0_267 == 0)
            goto label_1400d2708
        
        goto label_1400d2a91
    
label_1400d26fe:
    zmm8 = arg12
    bool cond:4_1
    bool cond:5_1
    bool cond:6_1
    bool cond:7_1
    
    if (temp0_267 == 0)
    label_1400d2708:
        zmm10 = _mm_add_ps(zmm10, temp0_264)
        char temp2_1 = result & 2
        cond:4_1 = temp2_1 != 0
        cond:5_1 = temp2_1 == 0
        cond:6_1 = temp2_1 == 0
        cond:7_1 = temp2_1 != 0
        
        if (temp2_1 != 0)
            goto label_1400d2ab2
        
        goto label_1400d2714
    
label_1400d2a91:
    zmm8 = arg12
    zmm8[0] = zmm8[0] + temp0_266[0]
    zmm10 = _mm_add_ps(zmm10, temp0_264)
    char temp1_1 = result & 2
    cond:4_1 = temp1_1 != 0
    cond:5_1 = temp1_1 == 0
    cond:6_1 = temp1_1 == 0
    cond:7_1 = temp1_1 != 0
    
    if (temp1_1 != 0)
    label_1400d2ab2:
        arg11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, arg11, 1), arg11, 0xe2)
        zmm9 = _mm_add_ps(zmm9, temp0_265)
        
        if (cond:5_1)
            goto label_1400d271e
        
        goto label_1400d2acb
    
label_1400d2714:
    zmm9 = _mm_add_ps(zmm9, temp0_265)
    
    if (not(cond:4_1))
    label_1400d271e:
        arg12 = _mm_add_ps(arg12, temp0_266)
        
        if (cond:7_1)
            goto label_1400d2ae6
        
        goto label_1400d2728
    
label_1400d2acb:
    arg10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, arg10, 1), arg10, 0xe2)
    arg12 = _mm_add_ps(arg12, temp0_266)
    bool cond:8_1
    bool cond:9_1
    bool cond:10_1
    bool cond:11_1
    
    if (not(cond:6_1))
    label_1400d2ae6:
        zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(arg12, zmm8, 1), zmm8, 0xe2)
        char temp4_1 = result & 4
        cond:8_1 = temp4_1 == 0
        cond:9_1 = temp4_1 != 0
        cond:10_1 = temp4_1 != 0
        cond:11_1 = temp4_1 == 0
        
        if (temp4_1 == 0)
            goto label_1400d2730
        
        goto label_1400d2afa
    
label_1400d2728:
    char temp3_1 = result & 4
    cond:8_1 = temp3_1 == 0
    cond:9_1 = temp3_1 != 0
    cond:10_1 = temp3_1 != 0
    cond:11_1 = temp3_1 == 0
    
    if (temp3_1 != 0)
    label_1400d2afa:
        arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm10, arg11, 0x32), 0x84)
        
        if (not(cond:8_1))
        label_1400d2b0c:
            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm9, arg10, 0x32), 0x84)
            
            if (cond:11_1)
                goto label_1400d273c
            
            goto label_1400d2b1f
    else
    label_1400d2730:
        
        if (cond:9_1)
            goto label_1400d2b0c
    
    bool cond:12_1
    bool cond:13_1
    bool cond:14_1
    bool cond:15_1
    
    if (not(cond:10_1))
    label_1400d273c:
        char temp6_1 = result & 8
        cond:12_1 = temp6_1 != 0
        cond:13_1 = temp6_1 == 0
        cond:14_1 = temp6_1 != 0
        cond:15_1 = temp6_1 == 0
        
        if (temp6_1 != 0)
            goto label_1400d2b36
        
        goto label_1400d2744
    
label_1400d2b1f:
    zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(arg12, zmm8, 0x32), 0x84)
    char temp5_1 = result & 8
    cond:12_1 = temp5_1 != 0
    cond:13_1 = temp5_1 == 0
    cond:14_1 = temp5_1 != 0
    cond:15_1 = temp5_1 == 0
    
    if (temp5_1 != 0)
    label_1400d2b36:
        zmm10 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm10, arg11, 0x23), 0x24)
        
        if (cond:13_1)
            goto label_1400d274e
        
        goto label_1400d2b4a
    
label_1400d2744:
    zmm10 = arg11
    
    if (cond:12_1)
    label_1400d2b4a:
        zmm9 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm9, arg10, 0x23), 0x24)
        
        if (cond:14_1)
            zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(arg12, zmm8, 0x23), 0x24)
    else
    label_1400d274e:
        zmm9 = arg10
        
        if (not(cond:15_1))
            zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(arg12, zmm8, 0x23), 0x24)
    
    zmm2 = _mm_and_ps(_mm_add_ps(temp0_260, arg15), temp0_262)
    arg12 = zmm8
    arg15 = _mm_or_ps(_mm_andnot_ps(temp0_262, arg15), zmm2)

zmm3 = _mm_cmpeq_epi32(arg19, zx.o(0))
arg10 = zmm3 & not.o(zmm10)
zmm1 = _mm_add_ps(_mm_shuffle_epi32(arg10, 0xee), arg10)
float temp0_280[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
temp0_280[0] = temp0_280[0] f+ zmm1[0]
zmm1 = zmm3 & not.o(zmm9)
float temp0_282[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
zmm1 = _mm_shuffle_ps(temp0_282, temp0_282, 0xe5)
zmm1[0] = zmm1[0] f+ temp0_282[0]
float temp0_284[0x4] = _mm_unpacklo_ps(temp0_280, zmm1[0].q)
zmm1 = zmm3 & not.o(arg12)
float temp0_286[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm1, 0xee), zmm1)
zmm1 = _mm_shuffle_ps(temp0_286, temp0_286, 0xe5)
zmm1[0] = zmm1[0] f+ temp0_286[0]
float temp0_288[0x4] =
    _mm_add_ps(zx.o(*arg41)[0].q | arg41[1].d[0].q << 0x40, temp0_284[0].q | zmm1[0].q << 0x40)
*arg41 = temp0_288[0]
float temp0_289[0x4] = _mm_shuffle_ps(temp0_288, temp0_288, 0xe5)
temp0_288[0].q = temp0_288 u>> 0x40
*(arg41 + 4) = temp0_289[0]
arg41[1].d = temp0_288[0]
zmm3 &= not.o(arg15)
float temp0_291[0x4] = _mm_add_ps(_mm_shuffle_epi32(zmm3, 0xee), zmm3)
zmm1 = _mm_shuffle_ps(temp0_291, temp0_291, 0xe5)
zmm1[0] = zmm1[0] f+ temp0_291[0]
zmm1[0] = zmm1[0] f+ *arg40
*arg40 = zmm1[0]
return result
