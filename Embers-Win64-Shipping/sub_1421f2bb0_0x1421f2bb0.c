// 函数: sub_1421f2bb0
// 地址: 0x1421f2bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm13[0x4]
float var_b8[0x4] = zmm13
float zmm14[0x4]
float var_c8[0x4] = zmm14
float zmm15[0x4]
float var_d8[0x4] = zmm15
int64_t var_198 = arg7
int64_t* rax = sub_141f66020(arg4)

if (rax == 0)
    goto label_1421f2d59

int64_t rdx = sx.q(*(arg3 + 0x48))
int64_t* r13_1 = *(*rax + (rdx << 3))
void* result = sub_141f66050(arg4, rdx.d)
char rcx_2 = *(arg1 + 0x30)
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm5[0x4]

if (rcx_2 != 0)
    if (rcx_2 != 1)
        goto label_1421f2d59
    
    int64_t* rcx_5 = r13_1[3]
    
    if (arg5 + 2 s>= (*(*rcx_5 + 0x58))(rcx_5).d)
        result.b = 0
    else
        int64_t* rcx_6 = r13_1[3]
        int32_t rax_6 = (*(*rcx_6 + 0x68))(rcx_6, zx.q(arg5))
        int64_t* rcx_7 = r13_1[3]
        int64_t r8_1 = *rcx_7
        int32_t rax_7 = (*(r8_1 + 0x68))(rcx_7, zx.q(arg5 + 1), r8_1)
        int64_t* rcx_8 = r13_1[3]
        int64_t r8_2 = *rcx_8
        int32_t rax_8 = (*(r8_2 + 0x68))(rcx_8, zx.q(arg5 + 2), r8_2)
        float var_188[0x4]
        int64_t* rax_10 = sub_142316270(&var_188, arg4, rax_6, r13_1, result)
        float zmm4_1[0x4] = *(arg4 + 0x1c0)
        float temp0_65[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
        float temp0_69[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_10, rax_10[1].d[0].q), 
                _mm_unpacklo_ps(*(rax_10 + 4), 0)[0].q), 
            *(arg4 + 0x1e0))
        float temp0_70[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
        float temp0_71[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xc9), temp0_70)
        float temp0_76[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xd2), temp0_65), temp0_73)
        float temp0_77[0x4] = _mm_add_ps(temp0_76, temp0_76)
        float temp0_78[0x4] = _mm_mul_ps(temp0_71, temp0_77)
        float temp0_79[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc9)
        float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0xd2), temp0_65)
        float temp0_82[0x4] = _mm_mul_ps(temp0_79, temp0_70)
        float temp0_83[0x4] = _mm_add_ps(temp0_78, temp0_69)
        float var_118_1 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_81, temp0_82), temp0_83), 
            *(arg4 + 0x1d0))[0]
        int64_t* rax_11 = sub_142316270(&var_188, arg4, rax_7, r13_1, result)
        float zmm4_2[0x4] = *(arg4 + 0x1c0)
        float temp0_87[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9)
        float temp0_91[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_11, rax_11[1].d[0].q), 
                _mm_unpacklo_ps(*(rax_11 + 4), 0)[0].q), 
            *(arg4 + 0x1e0))
        float temp0_92[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xd2)
        float temp0_94[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0xc9), temp0_92)
        float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0xd2), temp0_87)
        float temp0_97[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xff)
        float temp0_98[0x4] = _mm_sub_ps(temp0_96, temp0_94)
        float temp0_99[0x4] = _mm_add_ps(temp0_98, temp0_98)
        float temp0_100[0x4] = _mm_mul_ps(temp0_97, temp0_99)
        float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0xc9), temp0_92)
        float temp0_103[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0xd2)
        float temp0_104[0x4] = _mm_add_ps(temp0_100, temp0_91)
        void* var_1a8_1
        var_1a8_1.o = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_103, temp0_87), temp0_102), temp0_104), 
            *(arg4 + 0x1d0))
        result, zmm7 = sub_142316270(&var_188, arg4, rax_8, r13_1, result)
        float zmm4[0x4] = *(arg4 + 0x1c0)
        float temp0_109[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        zmm0 = *(result + 8)
        zmm5 = *result
        float temp0_110[0x4] = _mm_unpacklo_ps(*(result + 4), 0)
        float temp0_111[0x4] = _mm_unpacklo_ps(zmm5, zmm0[0].q)
        float temp0_112[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        float temp0_114[0x4] =
            __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_111, temp0_110[0].q), *(arg4 + 0x1e0))
        float temp0_115[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        float temp0_116[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        float temp0_117[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
        float var_108_1 = temp0_116[0]
        float temp0_119[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_114, temp0_114, 0xc9), temp0_112)
        float temp0_121[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_114, temp0_114, 0xd2), temp0_109)
        float var_e8_1 = temp0_117[0]
        float temp0_122[0x4] = _mm_sub_ps(temp0_121, temp0_119)
        float temp0_123[0x4] = _mm_add_ps(temp0_122, temp0_122)
        float temp0_124[0x4] = _mm_mul_ps(temp0_115, temp0_123)
        float temp0_126[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xc9), temp0_112)
        float temp0_127[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0xd2)
        float temp0_128[0x4] = _mm_add_ps(temp0_124, temp0_114)
        float temp0_132[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_127, temp0_109), temp0_126), temp0_128), 
            *(arg4 + 0x1d0))
        var_188 = temp0_132
        temp0_132[0] = temp0_132[0] - zmm7[0]
        float temp0_133[0x4] = _mm_shuffle_ps(temp0_132, temp0_132, 0x55)
        float var_f8_1 = temp0_133[0]
        temp0_133[0] = temp0_133[0] - temp0_116[0]
        float temp0_134[0x4] = _mm_shuffle_ps(temp0_132, temp0_132, 0xaa)
        zmm6 = temp0_134
        uint32_t var_168[0x4] = temp0_134
        zmm6[0] = zmm6[0] - temp0_117[0]
        temp0_132[0] = temp0_132[0] * temp0_132[0]
        float var_1b8_1 = temp0_133[0]
        temp0_133[0] = temp0_133[0] * temp0_133[0]
        temp0_133[0] = temp0_133[0] + temp0_132[0]
        zmm4 = 0x322bcc77
        float zmm3[0x4] = 0x3f000000
        zmm6[0] = zmm6[0] * zmm6[0]
        temp0_133[0] = temp0_133[0] + zmm6[0]
        
        if (not(temp0_133[0] <= 9.99999994e-09f))
            zmm3 = zx.o(0)
            zmm4 = 0x3f000000
            zmm3[0] = temp0_133[0]
            zmm2 = 0x3f000000
            float temp0_135[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            temp0_135[0] = temp0_135[0] * temp0_135[0]
            zmm3[0] = zmm3[0] * temp0_135[0]
            zmm2[0] = 0.5f - zmm3[0]
            temp0_135[0] = temp0_135[0] * zmm2[0]
            temp0_135[0] = temp0_135[0] + temp0_135[0]
            temp0_135[0] = temp0_135[0] * temp0_135[0]
            zmm3[0] = zmm3[0] * temp0_135[0]
            zmm4[0] = 0.5f - zmm3[0]
            zmm3 = 0x3f000000
            temp0_135[0] = temp0_135[0] * zmm4[0]
            zmm4 = 0x322bcc77
            temp0_135[0] = temp0_135[0] + temp0_135[0]
            temp0_133[0] = temp0_133[0] * temp0_135[0]
            float var_1b8_2 = temp0_135[0]
            temp0_132[0] = temp0_132[0] * temp0_135[0]
            var_1b8_1 = temp0_133[0]
            zmm6[0] = zmm6[0] * temp0_135[0]
        
        zmm8 = var_1a8_1.d
        zmm9 = var_1a8_1:4.d
        zmm8[0] = zmm8[0] - zmm7[0]
        int32_t var_1a0
        zmm7 = var_1a0
        zmm9[0] = zmm9[0] - temp0_116[0]
        zmm7[0] = zmm7[0] - temp0_117[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm9[0] = zmm9[0] + zmm8[0]
        zmm9[0] = zmm9[0] + zmm7[0]
        
        if (not(zmm9[0] <= zmm4[0]))
            float temp0_136[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
            zmm9[0] = zmm9[0] * zmm3[0]
            temp0_136[0] = temp0_136[0] * temp0_136[0]
            zmm9[0] = zmm9[0] * temp0_136[0]
            zmm3[0] = zmm3[0] - zmm9[0]
            temp0_136[0] = temp0_136[0] * zmm3[0]
            temp0_136[0] = temp0_136[0] + temp0_136[0]
            temp0_136[0] = temp0_136[0] * temp0_136[0]
            zmm9[0] = zmm9[0] * temp0_136[0]
            zmm3[0] = zmm3[0] - zmm9[0]
            temp0_136[0] = temp0_136[0] * zmm3[0]
            zmm4 = 0x322bcc77
            temp0_136[0] = temp0_136[0] + temp0_136[0]
            zmm8[0] = zmm8[0] * temp0_136[0]
            zmm9[0] = zmm9[0] * temp0_136[0]
            zmm7[0] = zmm7[0] * temp0_136[0]
        
        zmm13 = zmm7
        zmm9[0] = zmm9[0] * zmm6[0]
        zmm13[0] = zmm13[0] * temp0_133[0]
        zmm14 = zmm9
        zmm14[0] = zmm14[0] * temp0_132[0]
        zmm13[0] = zmm13[0] - zmm9[0]
        zmm6[0] = zmm6[0] * zmm8[0]
        zmm7[0] = zmm7[0] * temp0_132[0]
        zmm6[0] = zmm6[0] - zmm7[0]
        zmm8[0] = zmm8[0] * var_1b8_1
        zmm14[0] = zmm14[0] - zmm8[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm6[0] = zmm6[0] + zmm13[0]
        zmm6[0] = zmm6[0] + zmm14[0]
        
        if (not(zmm6[0] <= zmm4[0]))
            zmm3 = zx.o(0)
            zmm4 = 0x3f000000
            zmm3[0] = zmm6[0]
            zmm2 = 0x3f000000
            float temp0_137[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            temp0_137[0] = temp0_137[0] * temp0_137[0]
            zmm3[0] = zmm3[0] * temp0_137[0]
            zmm2[0] = 0.5f - zmm3[0]
            temp0_137[0] = temp0_137[0] * zmm2[0]
            temp0_137[0] = temp0_137[0] + temp0_137[0]
            temp0_137[0] = temp0_137[0] * temp0_137[0]
            zmm3[0] = zmm3[0] * temp0_137[0]
            zmm4[0] = 0.5f - zmm3[0]
            temp0_137[0] = temp0_137[0] * zmm4[0]
            zmm4 = 0x322bcc77
            temp0_137[0] = temp0_137[0] + temp0_137[0]
            temp0_137[0] = temp0_137[0] * zmm13[0]
            temp0_137[0] = temp0_137[0] * zmm6[0]
            temp0_137[0] = temp0_137[0] * zmm14[0]
            zmm13 = temp0_137
            zmm6 = temp0_137
            zmm14 = temp0_137
        
        if ((*(arg1 + 0x60) & 1) == 0 || arg8 == 0)
        label_1421f342e:
            zmm8[0] = zmm8[0] + var_118_1
            zmm9[0] = zmm9[0] + var_108_1
            zmm7[0] = zmm7[0] + var_e8_1
            zmm8[0] = zmm8[0] + var_188[0]
            zmm9[0] = zmm9[0] + var_f8_1
            zmm7[0] = zmm7[0] f+ var_168[0]
            zmm8[0] = zmm8[0] * 0.333333343f
            zmm7[0] = zmm7[0] * 0.333333343f
            zmm9[0] = zmm9[0] * 0.333333343f
            float var_1a0_1 = zmm7[0]
            *arg6 = (_mm_unpacklo_ps(zmm8, zmm9[0].q)).q
            arg6[1].d = var_1a0_1
            
            if ((*(arg1 + 0x40) & 2) == 0)
                *var_198 = data_14399f720
            else
                zmm14[0] = zmm14[0] * zmm9[0]
                zmm6[0] = zmm6[0] * zmm7[0]
                zmm14[0] = zmm14[0] * zmm8[0]
                zmm6[0] = zmm6[0] - zmm14[0]
                zmm13[0] = zmm13[0] * zmm9[0]
                zmm13[0] = zmm13[0] * zmm7[0]
                zmm14[0] = zmm14[0] - zmm13[0]
                zmm6[0] = zmm6[0] * zmm8[0]
                zmm13[0] = zmm13[0] - zmm6[0]
                zmm14[0] = zmm14[0] * zmm14[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm13[0] = zmm13[0] * zmm13[0]
                zmm14[0] = zmm14[0] + zmm6[0]
                zmm14[0] = zmm14[0] + zmm13[0]
                
                if (not(zmm14[0] <= zmm4[0]))
                    zmm3 = zx.o(0)
                    zmm4 = 0x3f000000
                    zmm3[0] = zmm14[0]
                    zmm2 = 0x3f000000
                    float temp0_139[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    temp0_139[0] = temp0_139[0] * temp0_139[0]
                    zmm3[0] = zmm3[0] * temp0_139[0]
                    zmm2[0] = 0.5f - zmm3[0]
                    temp0_139[0] = temp0_139[0] * zmm2[0]
                    temp0_139[0] = temp0_139[0] + temp0_139[0]
                    temp0_139[0] = temp0_139[0] * temp0_139[0]
                    zmm3[0] = zmm3[0] * temp0_139[0]
                    zmm4[0] = 0.5f - zmm3[0]
                    temp0_139[0] = temp0_139[0] * zmm4[0]
                    temp0_139[0] = temp0_139[0] + temp0_139[0]
                    zmm6[0] = zmm6[0] * temp0_139[0]
                    zmm14[0] = zmm14[0] * temp0_139[0]
                    zmm13[0] = zmm13[0] * temp0_139[0]
                
                zmm1 = data_14399f6f0
                float var_158[0x4] = data_14399f6e0
                zmm0 = data_14399f700
                float var_148_1[0x4] = zmm1
                zmm1 = data_14399f710
                zmm0[0] = zmm13[0]
                zmm0[1] = zmm6[0]
                zmm0[2] = zmm14[0]
                var_158[0] = zmm8[0]
                var_158[1] = zmm9[0]
                var_158[2] = zmm7[0]
                var_148_1[0] = zmm6[0]
                var_148_1[1] = zmm14[0]
                var_148_1[2] = zmm13[0]
                float var_128_1[0x4] = zmm1
                zmm6 = *sub_14077e4a0(&var_168, &var_158)
                int64_t rax_14 = var_198
                float temp0_140[0x4] = _mm_mul_ps(zmm6, zmm6)
                *rax_14 = zmm6
                zmm5 = data_143f505e0
                float temp0_142[0x4] =
                    _mm_add_ps(temp0_140, _mm_shuffle_ps(temp0_140, temp0_140, 0x4e))
                float temp0_144[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_142, temp0_142, 0x39), temp0_142)
                float temp0_145[0x4] = _mm_rsqrt_ps(temp0_144)
                float temp0_146[0x4] = _mm_mul_ps(temp0_144, zmm5)
                float temp0_151[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_145, temp0_145), temp0_146)), 
                        temp0_145), 
                    temp0_145)
                float temp0_154[0x4] =
                    _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_151, temp0_151), temp0_146))
                float temp0_156[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_144, 2)
                *rax_14 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_154, temp0_151), temp0_151), zmm6)
                        ^ data_143f505d0, 
                    temp0_156) ^ data_143f505d0
            
            goto label_1421f2d59
        
        zmm3 = *(arg1 + 0x74)
        zmm6[0] = zmm6[0] f* *(arg1 + 0x68)
        zmm3[0] = zmm3[0] + zmm3[0]
        zmm13[0] = zmm13[0] f* *(arg1 + 0x64)
        zmm14[0] = zmm14[0] f* *(arg1 + 0x6c)
        zmm3[0] = zmm3[0] - 1f
        zmm6[0] = zmm6[0] + zmm13[0]
        zmm6[0] = zmm6[0] + zmm14[0]
        
        if (not(zmm6[0] < zmm3[0]))
            goto label_1421f342e
        
        result.b = 0
else if (arg5 u>= *(r13_1 + 0xec))
    result.b = 0
else
    sub_142316270(&var_198, arg4, arg5, r13_1, result)
    zmm5 = *(arg4 + 0x1c0)
    zmm2 = var_198:4.d
    int32_t var_190
    float temp0_1[0x4] = _mm_unpacklo_ps(var_198.d, var_190[0].q)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm2, 0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_5[0x4] =
        __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_1, temp0_2[0].q), *(arg4 + 0x1e0))
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_3)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_6), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_3)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
    float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_5)
    float temp0_22[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_6), temp0_16), temp0_18), *(arg4 + 0x1d0))
    float var_190_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
    *arg6 = (_mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)).q
    arg6[1].d = var_190_1
    *arg7 = data_14399f720
label_1421f2d59:
    
    if ((*(*(*(arg2 + 0x28) + 0x30) + 0x59) & 1) != 0)
        void* rax_3 = *(arg2 + 0x18)
        zmm0 = arg6[1].d
        zmm2 = *(arg6 + 4)
        zmm8 = *arg6
        zmm6 = *(rax_3 + 0x1e0)
        float temp0_26[0x4] = __mulps_xmmps_memps(*(rax_3 + 0x1c0), data_143f50590)
        float temp0_30[0x4] = __subps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm0[0].q), 
                _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)[0].q), 
            *(rax_3 + 0x1d0))
        float temp0_31[0x4] = _mm_rcp_ps(zmm6)
        zmm8 = __andps_xmmxud_memxud(temp0_30, data_143f50560)
        float temp0_33[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
        float temp0_34[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xd2)
        float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_34)
        float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_33)
        float temp0_39[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xff)
        float temp0_40[0x4] = _mm_sub_ps(temp0_38, temp0_36)
        float temp0_41[0x4] = _mm_mul_ps(temp0_31, temp0_31)
        float temp0_42[0x4] = _mm_add_ps(temp0_31, temp0_31)
        float temp0_43[0x4] = _mm_add_ps(temp0_40, temp0_40)
        float temp0_44[0x4] = _mm_mul_ps(temp0_41, zmm6)
        float temp0_45[0x4] = _mm_mul_ps(temp0_39, temp0_43)
        float temp0_46[0x4] = _mm_sub_ps(temp0_42, temp0_44)
        float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xd2), temp0_33)
        float temp0_49[0x4] = _mm_add_ps(temp0_45, zmm8)
        float temp0_50[0x4] = _mm_mul_ps(temp0_46, temp0_46)
        float temp0_51[0x4] = _mm_add_ps(temp0_46, temp0_46)
        float temp0_52[0x4] = _mm_mul_ps(temp0_50, zmm6)
        float temp0_54[0x4] =
            __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f50540), data_143f50580, 2)
        float temp0_55[0x4] = _mm_sub_ps(temp0_51, temp0_52)
        float temp0_58[0x4] =
            _mm_sub_ps(temp0_48, _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xc9), temp0_34))
        zmm6 = _mm_and_ps(temp0_54, temp0_55 ^ zx.o(0)) ^ temp0_55
        float temp0_61[0x4] = _mm_mul_ps(_mm_add_ps(temp0_58, temp0_49), zmm6)
        result = zx.q(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa)[0])
        *arg6 = (_mm_unpacklo_ps(temp0_61, _mm_shuffle_ps(temp0_61, temp0_61, 0x55)[0].q)).q
        arg6[1].d = result.d
    
    zmm0 = *(arg1 + 0x34)
    result.b = 1
    zmm0[0] = zmm0[0] f+ *arg6
    *arg6 = zmm0[0]
    zmm1 = *(arg1 + 0x38)
    zmm1[0] = zmm1[0] f+ *(arg6 + 4)
    *(arg6 + 4) = zmm1[0]
    zmm0 = *(arg1 + 0x3c)
    zmm0[0] = zmm0[0] f+ arg6[1].d
    arg6[1].d = zmm0[0]
return result
