// 函数: sub_140341330
// 地址: 0x140341330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
float zmm9[0x4]
float var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
uint64_t result = zx.q(arg7)

if (result.d s>= 2)
    uint64_t r13_1 = zx.q(result.d)
    int64_t rsi_1 = 1
    zmm7 = zx.o(0)
    zmm11 = 0x322bcc77
    zmm14 = 0xffffffff
    zmm12 = 0x3f000000
    zmm6 = data_142d3f660
    zmm15 = data_142d3f5e0
    
    do
        uint64_t rbx_1 = zx.q(*(arg3 + (rsi_1 << 1)))
        uint64_t rax_4 = rbx_1 * 0x30
        *(arg4 + sx.q(rbx_1.d * arg5 + arg6))
        float zmm5[0x4] = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3]
        zmm10 = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3 + 1]
        zmm9 = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3 + 2]
        float zmm4[0x4] = *(arg2 + rax_4)
        zmm13 = *(arg2 + rax_4 + 0x10)
        zmm8 = *(arg2 + rax_4 + 0x20)
        float temp0_2[0x4] = _mm_cmpeq_ps(zmm8, zmm7, 1)
        float zmm0[0x4]
        float zmm1[0x4]
        
        if (_mm_movemask_ps(_mm_or_ps(_mm_cmpeq_ps(zmm9, zmm7, 1), temp0_2)) == 0)
            float temp0_177[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            float temp0_178[0x4] = _mm_mul_ps(temp0_177, zmm4)
            float temp0_179[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_183[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), temp0_179), 
                    data_142d3f7c0), 
                temp0_178)
            float temp0_184[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            float temp0_188[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_184), 
                    data_142d3f7d0), 
                temp0_183)
            float temp0_189[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            zmm4 = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), temp0_189), 
                    data_142d3f7b0), 
                temp0_188)
            float temp0_194[0x4] = _mm_mul_ps(zmm13, zmm9)
            float temp0_195[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
            float temp0_196[0x4] = _mm_shuffle_ps(temp0_194, temp0_194, 0xd2)
            float temp0_197[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
            float temp0_198[0x4] = _mm_shuffle_ps(temp0_194, temp0_194, 0xc9)
            float temp0_201[0x4] =
                _mm_sub_ps(_mm_mul_ps(temp0_196, temp0_195), _mm_mul_ps(temp0_198, temp0_197))
            float temp0_202[0x4] = _mm_add_ps(temp0_201, temp0_201)
            float temp0_204[0x4] = _mm_add_ps(_mm_mul_ps(temp0_177, temp0_202), temp0_194)
            float temp0_205[0x4] = _mm_shuffle_ps(temp0_202, temp0_202, 0xd2)
            float temp0_206[0x4] = _mm_shuffle_ps(temp0_202, temp0_202, 0xc9)
            zmm10 = _mm_add_ps(zmm10, 
                _mm_add_ps(
                    _mm_sub_ps(_mm_mul_ps(temp0_205, temp0_195), _mm_mul_ps(temp0_206, temp0_197)), 
                    temp0_204))
            zmm9 = _mm_mul_ps(zmm9, zmm8)
        else
            float temp0_6[0x4] = _mm_add_ps(zmm4, zmm4)
            float temp0_7[0x4] = _mm_mul_ps(zmm4, temp0_6)
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 1)
            float temp0_10[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x1a), temp0_8)
            zmm1 = data_142d3f670
            float temp0_12[0x4] = _mm_mul_ps(_mm_sub_ps(zmm1, temp0_10), zmm8)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 4)
            float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x29), temp0_13)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x12), temp0_16)
            float temp0_20[0x4] = _mm_mul_ps(_mm_add_ps(temp0_15, temp0_18), zmm8)
            float temp0_21[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            float temp0_23[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_15, temp0_18), temp0_21)
            float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_12, 0), 
                _mm_shuffle_ps(temp0_23, zmm7, 0x3a), 0x82)
            float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_12, temp0_23, 5), 
                _mm_shuffle_ps(temp0_20, zmm7, 0x35), 0x82)
            float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, temp0_20, 0xa5), 
                _mm_shuffle_ps(temp0_12, zmm7, 0x3a), 0x82)
            zmm12 = zmm15
            zmm15 = data_142d3f660
            zmm15[0].q = zmm13.q
            float temp0_34[0x4] = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zmm13, zmm15, 0x3a), 0x84)
            float var_140_1[0x4] = temp0_26
            float temp0_35[0x4] = _mm_add_ps(zmm5, zmm5)
            float temp0_36[0x4] = _mm_mul_ps(zmm5, temp0_35)
            float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc1)
            float temp0_41[0x4] = _mm_mul_ps(
                _mm_sub_ps(zmm1, _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0xda), temp0_37)), 
                zmm9)
            float temp0_42[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
            float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x29), temp0_42)
            float temp0_45[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x12), temp0_45)
            float temp0_49[0x4] = _mm_mul_ps(_mm_add_ps(temp0_44, temp0_47), zmm9)
            float temp0_50[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
            float temp0_52[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_44, temp0_47), temp0_50)
            float temp0_55[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, temp0_41, 0), 
                _mm_shuffle_ps(temp0_52, zx.o(0), 0x3a), 0x82)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_41, temp0_52, 5)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_52, temp0_49, 0xa5)
            float temp0_59[0x4] =
                _mm_shuffle_ps(temp0_56, _mm_shuffle_ps(temp0_49, zx.o(0), 0x35), 0x82)
            float temp0_61[0x4] =
                _mm_shuffle_ps(temp0_57, _mm_shuffle_ps(temp0_41, zx.o(0), 0x3a), 0x82)
            zmm0 = zmm15
            zmm15 = zmm12
            zmm12 = 0x3f000000
            zmm0[0].q = zmm10.q
            float temp0_63[0x4] = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm10, zmm0, 0x3a), 0x84)
            float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0), temp0_55)
            float temp0_68[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xaa), temp0_61), temp0_65)
            float temp0_71[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0), temp0_59), temp0_68)
            float temp0_73[0x4] = _mm_add_ps(_mm_mul_ps(temp0_63, zx.o(0)), temp0_71)
            float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0), temp0_55)
            float temp0_78[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0x55), temp0_61), temp0_75)
            zmm0 = temp0_29[1]
            zmm1 = temp0_29[3]
            float temp0_81[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_59), temp0_78)
            float temp0_84[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_63), temp0_81)
            zmm0 = temp0_32[0]
            float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_55)
            float zmm2[0x4] = temp0_32[2]
            float temp0_89[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_61), temp0_86)
            float zmm3[0x4] = temp0_32[1]
            float temp0_92[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_59), temp0_89)
            zmm0 = temp0_32[3]
            float temp0_95[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_63), temp0_92)
            zmm2 = temp0_34[0]
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_55)
            zmm3 = temp0_34[2]
            float temp0_100[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_61), temp0_97)
            zmm2 = temp0_34[1]
            float temp0_103[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_59), temp0_100)
            zmm7 = temp0_34[3]
            float temp0_106[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_63), temp0_103)
            zmm9 = _mm_mul_ps(zmm9, zmm8)
            zmm6 = zx.o(temp0_84[0])
            zmm8 = zx.o(temp0_95[0])
            temp0_84[0] = zmm6[0]
            int96_t var_1b0_1 = temp0_84[0].12
            temp0_95[0] = zmm8[0]
            int96_t var_1a0_1 = temp0_95[0].12
            float temp0_108[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xe5)
            int96_t var_190_1 = temp0_106[0].12
            temp0_73[0] = temp0_73[0] * temp0_73[0]
            temp0_108[0] = temp0_108[0] * temp0_108[0]
            temp0_108[0] = temp0_108[0] + temp0_73[0]
            zmm0 = _mm_unpackhi_pd(temp0_73, temp0_73[0].q)
            float temp0_110[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xe5)
            temp0_84[0].q = temp0_84 u>> 0x40
            float temp0_111[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xe5)
            temp0_95[0].q = temp0_95 u>> 0x40
            float var_1c0[0x4] = temp0_73
            zmm0[0] = zmm0[0] * zmm0[0]
            zmm0[0] = zmm0[0] + temp0_108[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            temp0_110[0] = temp0_110[0] * temp0_110[0]
            temp0_110[0] = temp0_110[0] + zmm6[0]
            temp0_84[0] = temp0_84[0] * temp0_84[0]
            temp0_84[0] = temp0_84[0] + temp0_110[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            temp0_111[0] = temp0_111[0] * temp0_111[0]
            temp0_111[0] = temp0_111[0] + zmm8[0]
            temp0_95[0] = temp0_95[0] * temp0_95[0]
            temp0_95[0] = temp0_95[0] + temp0_111[0]
            zmm2 = zmm0
            zmm2[0] = zmm2[0] + -9.99999994e-09f
            float temp0_112[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0[0])
            zmm0[0] = zmm0[0] * 0.5f
            temp0_112[0] = temp0_112[0] * temp0_112[0]
            temp0_112[0] = temp0_112[0] * zmm0[0]
            zmm6 = 0x3f000000
            zmm6[0] = 0.5f - temp0_112[0]
            zmm6[0] = zmm6[0] * temp0_112[0]
            zmm6[0] = zmm6[0] + temp0_112[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm6[0] = zmm6[0] * zmm0[0]
            zmm0 = 0x3f000000
            zmm0[0] = 0.5f - zmm6[0]
            zmm0[0] = zmm0[0] * zmm6[0]
            zmm0[0] = zmm0[0] + zmm6[0]
            float temp0_113[0x4] = _mm_cmpeq_ss(0, zmm2[0], 2)
            zmm0 = _mm_and_ps(zmm0, temp0_113)
            zmm3 = _mm_or_ps(_mm_andnot_ps(temp0_113, 0x3f800000), zmm0)
            temp0_84[0] = temp0_84[0] + -9.99999994e-09f
            float temp0_117[0x4] = _mm_rsqrt_ss(temp0_84[0], temp0_84[0])
            temp0_84[0] = temp0_84[0] * 0.5f
            temp0_117[0] = temp0_117[0] * temp0_117[0]
            temp0_117[0] = temp0_117[0] * temp0_84[0]
            zmm6 = 0x3f000000
            zmm6[0] = 0.5f - temp0_117[0]
            zmm6[0] = zmm6[0] * temp0_117[0]
            zmm6[0] = zmm6[0] + temp0_117[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm6[0] = zmm6[0] * temp0_84[0]
            zmm4 = 0x3f000000
            zmm4[0] = 0.5f - zmm6[0]
            zmm4[0] = zmm4[0] * zmm6[0]
            zmm4[0] = zmm4[0] + zmm6[0]
            float temp0_118[0x4] = _mm_cmpeq_ss(0, temp0_84[0], 2)
            zmm4 = _mm_and_ps(zmm4, temp0_118)
            zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_118, 0x3f800000), zmm4)
            temp0_95[0] = temp0_95[0] + -9.99999994e-09f
            float temp0_122[0x4] = _mm_rsqrt_ss(temp0_95[0], temp0_95[0])
            temp0_95[0] = temp0_95[0] * 0.5f
            temp0_122[0] = temp0_122[0] * temp0_122[0]
            temp0_122[0] = temp0_122[0] * temp0_95[0]
            zmm6 = 0x3f000000
            zmm6[0] = 0.5f - temp0_122[0]
            zmm6[0] = zmm6[0] * temp0_122[0]
            zmm6[0] = zmm6[0] + temp0_122[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm6[0] = zmm6[0] * temp0_95[0]
            zmm5 = 0x3f000000
            zmm5[0] = 0.5f - zmm6[0]
            zmm5[0] = zmm5[0] * zmm6[0]
            zmm5[0] = zmm5[0] + zmm6[0]
            float temp0_123[0x4] = _mm_cmpeq_ss(0, temp0_95[0], 2)
            zmm5 = _mm_and_ps(zmm5, temp0_123)
            zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_123, 0x3f800000), zmm5)
            zmm2 = var_1c0[1]
            zmm2[0] = zmm2[0] * zmm3[0]
            float var_1b8
            zmm4 = var_1b8
            zmm4[0] = zmm4[0] * zmm3[0]
            zmm3[0] = zmm3[0] * temp0_73[0]
            zmm3 = _mm_unpacklo_ps(zmm3, zmm2[0].q)[0].q | zmm4[0].q << 0x40
            zmm2 = var_1b0_1.d
            zmm2[0] = zmm2[0] * zmm0[0]
            zmm4 = var_1b0_1:4.d
            zmm4[0] = zmm4[0] * zmm0[0]
            float temp0_128[0x4] = _mm_unpacklo_ps(zmm2, zmm4[0].q)
            zmm0[0] = zmm0[0] f* var_1b0_1:8.d
            zmm2 = temp0_128[0].q | zmm0[0].q << 0x40
            zmm6 = var_1a0_1.d
            zmm6[0] = zmm6[0] * zmm1[0]
            zmm0 = var_1a0_1:4.d
            zmm0[0] = zmm0[0] * zmm1[0]
            float temp0_129[0x4] = _mm_unpacklo_ps(zmm6, zmm0[0].q)
            zmm1[0] = zmm1[0] f* var_1a0_1:8.d
            zmm6 = temp0_129[0].q | zmm1[0].q << 0x40
            float temp0_130[0x4] = _mm_cmpeq_ps(zx.o(0), zmm9, 2)
            zmm0 = _mm_and_ps(data_142d3f670, temp0_130)
            zmm7 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_130, data_142d3f7e0), zmm0)
            float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0), zmm3)
            float temp0_136[0x4] = _mm_shuffle_ps(temp0_135, temp0_135, 0xe5)
            zmm8 = _mm_unpackhi_pd(temp0_135, temp0_135[0].q)
            var_1c0[0] = temp0_135[0]
            var_1c0[1] = temp0_136[0]
            var_1b8 = zmm8[0]
            float temp0_139[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0x55), zmm2)
            float temp0_140[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xe5)
            zmm5 = _mm_unpackhi_pd(temp0_139, temp0_139[0].q)
            var_1b0_1.d = temp0_139[0]
            var_1b0_1:4.d = temp0_140[0]
            var_1b0_1:8.d = zmm5[0]
            float temp0_143[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0xaa), zmm6)
            float temp0_145[0x4] =
                _mm_shuffle_ps(temp0_135, _mm_shuffle_ps(0x800000, temp0_135, 0x20), 0x24)
            float temp0_146[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0xe5)
            zmm14 = data_142d3f770
            char temp0_149 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(temp0_145, zmm14), zmm15, 2))
            zmm7 = _mm_unpackhi_pd(temp0_143, temp0_143[0].q)
            var_1a0_1.d = temp0_143[0]
            var_1a0_1:4.d = temp0_146[0]
            var_1a0_1:8.d = zmm7[0]
            
            if (temp0_149 == 0xf)
                zmm5 = data_142d3f660
            else if (_mm_movemask_ps(_mm_cmpeq_ps(
                    _mm_and_ps(
                        _mm_shuffle_ps(temp0_139, _mm_shuffle_ps(0x800000, temp0_139, 0x20), 0x24), 
                        zmm14), 
                    zmm15, 2)) == 0xf)
                zmm5 = data_142d3f660
            else if (_mm_movemask_ps(_mm_cmpeq_ps(
                    _mm_and_ps(
                        _mm_shuffle_ps(temp0_143, _mm_shuffle_ps(0x800000, temp0_143, 0x20), 0x24), 
                        zmm14), 
                    zmm15, 2)) == 0xf)
                zmm5 = data_142d3f660
            else
                temp0_135[0] = temp0_135[0] + temp0_140[0]
                temp0_135[0] = temp0_135[0] + zmm7[0]
                
                if (temp0_135[0] <= 0f)
                    temp0_140[0] - temp0_135[0]
                    int64_t r14_1
                    r14_1.b = temp0_140[0] > temp0_135[0]
                    int64_t rax = 0
                    
                    if (temp0_140[0] > temp0_135[0])
                        rax = 0x14
                    
                    if (zmm7[0] f> *(&var_1c0 + rax))
                        r14_1 = 2
                    
                    int64_t r15_1 = sx.q(*(&data_143443234 + (r14_1 << 2)))
                    int64_t rax_1 = sx.q(*(&data_143443234 + (r15_1 << 2)))
                    zmm0 = var_1c0[zx.q((r14_1 * 5).d)]
                    zmm0[0] = zmm0[0] - var_1c0[sx.q((r15_1 * 5).d)]
                    zmm0[0] = zmm0[0] - var_1c0[sx.q((rax_1 * 5).d)]
                    zmm0[0] = zmm0[0] + 1f
                    float temp0_1[0x4] = _mm_sqrt_ss(temp0_135[0], zmm0[0])
                    zmm0 = 0x3f800000
                    zmm0[0] = 1f / temp0_1[0]
                    zmm1 = 0x3f800000
                    zmm1[0] = 1f / zmm0[0]
                    zmm0[0] = zmm0[0] * 0.5f
                    zmm1[0] = zmm1[0] * 0.5f
                    float var_150[0x4]
                    var_150[r14_1] = zmm1[0]
                    zmm1 = var_1c0[sx.q((r15_1 + (r14_1 << 2)).d)]
                    zmm1[0] = zmm1[0] + var_1c0[sx.q((r14_1 + (r15_1 << 2)).d)]
                    zmm1[0] = zmm1[0] * zmm0[0]
                    var_150[r15_1] = zmm1[0]
                    zmm1 = var_1c0[sx.q((rax_1 + (r14_1 << 2)).d)]
                    zmm1[0] = zmm1[0] + var_1c0[sx.q((r14_1 + (rax_1 << 2)).d)]
                    zmm1[0] = zmm1[0] * zmm0[0]
                    zmm2 = var_1c0[sx.q((rax_1 + (r15_1 << 2)).d)]
                    zmm2[0] = zmm2[0] - var_1c0[sx.q((r15_1 + (rax_1 << 2)).d)]
                    var_150[rax_1] = zmm1[0]
                    zmm2[0] = zmm2[0] * zmm0[0]
                    float var_144_1 = zmm2[0]
                    zmm5 = var_150
                else
                    temp0_135[0] = temp0_135[0] + 1f
                    zmm2 = 0x3f800000
                    zmm2[0] = 1f / _mm_sqrt_ss(0, temp0_135[0])[0]
                    zmm1 = 0x3f800000
                    zmm1[0] = 1f / zmm2[0]
                    zmm2[0] = zmm2[0] * 0.5f
                    zmm5[0] = zmm5[0] - temp0_146[0]
                    zmm5[0] = zmm5[0] * zmm2[0]
                    temp0_143[0] = temp0_143[0] - zmm8[0]
                    temp0_143[0] = temp0_143[0] * zmm2[0]
                    float temp0_162[0x4] = _mm_unpacklo_ps(zmm5, temp0_143[0].q)
                    temp0_136[0] = temp0_136[0] - temp0_139[0]
                    temp0_136[0] = temp0_136[0] * zmm2[0]
                    zmm1[0] = zmm1[0] * 0.5f
                    float temp0_163[0x4] = _mm_unpacklo_ps(temp0_136, zmm1[0].q)
                    zmm5 = temp0_162[0].q | temp0_163[0].q << 0x40
            
            zmm11 = 0x322bcc77
            zmm14 = 0xffffffff
            zmm6 = data_142d3f660
            zmm7 = zx.o(0)
            float temp0_164[0x4] = _mm_mul_ps(zmm5, zmm5)
            float temp0_166[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_164, temp0_164[0].q), temp0_164)
            float temp0_167[0x4] = _mm_shuffle_ps(temp0_166, temp0_166, 0xe5)
            temp0_167[0] = temp0_167[0] + temp0_166[0]
            zmm4 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_167[0], 6), 0xffffffff)
            temp0_167[0] = temp0_167[0] * 0.5f
            float temp0_170[0x4] = _mm_rsqrt_ss(temp0_167[0], temp0_167[0])
            temp0_170[0] = temp0_170[0] * temp0_170[0]
            temp0_170[0] = temp0_170[0] * temp0_167[0]
            zmm3 = 0x3f000000
            zmm3[0] = 0.5f - temp0_170[0]
            zmm3[0] = zmm3[0] * temp0_170[0]
            zmm3[0] = zmm3[0] + temp0_170[0]
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm3[0] = zmm3[0] * temp0_167[0]
            zmm1 = 0x3f000000
            zmm1[0] = 0.5f - zmm3[0]
            zmm1[0] = zmm1[0] * zmm3[0]
            zmm1[0] = zmm1[0] + zmm3[0]
            float temp0_172[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm5)
            float temp0_173[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm1 = _mm_and_ps(temp0_172, temp0_173)
            zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_173, zmm6), zmm1)
            zmm10 = zx.o(var_190_1.q)[0].q | var_190_1:8.d[0].q << 0x40
        
        float temp0_213[0x4] = _mm_mul_ps(zmm4, zmm4)
        float temp0_215[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_213, temp0_213[0].q), temp0_213)
        float temp0_216[0x4] = _mm_shuffle_ps(temp0_215, temp0_215, 0xe5)
        temp0_216[0] = temp0_216[0] + temp0_215[0]
        zmm0 = _mm_andnot_ps(_mm_cmpeq_ss(zmm11[0], temp0_216[0], 6), zmm14)
        temp0_216[0] = temp0_216[0] * zmm12[0]
        float temp0_219[0x4] = _mm_rsqrt_ss(temp0_216[0], temp0_216[0])
        temp0_219[0] = temp0_219[0] * temp0_219[0]
        temp0_219[0] = temp0_219[0] * temp0_216[0]
        zmm12[0] = zmm12[0] - temp0_219[0]
        zmm12[0] = zmm12[0] * temp0_219[0]
        zmm12[0] = zmm12[0] + temp0_219[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        zmm12[0] = zmm12[0] * temp0_216[0]
        zmm12[0] = zmm12[0] - zmm12[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        zmm12[0] = zmm12[0] + zmm12[0]
        float temp0_221[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm4)
        float temp0_222[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        zmm1 = _mm_and_ps(temp0_221, temp0_222)
        arg1[rbx_1 * 3] = _mm_or_ps(_mm_andnot_ps(temp0_222, zmm6), zmm1)
        result = rbx_1 * 0x30
        *(arg1 + result + 0x10) = zmm10
        *(arg1 + result + 0x20) = zmm9
        rsi_1 += 1
    while (r13_1 != rsi_1)

return result
