// 函数: sub_14033f320
// 地址: 0x14033f320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
int128_t zmm12
int128_t var_88 = zmm12
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
    zmm13 = zx.o(0)
    zmm7 = 0xffffffff
    zmm14 = 0x3f000000
    zmm9 = data_142d3f660
    
    do
        uint64_t rbx_1 = zx.q(*(arg3 + (rsi_1 << 1)))
        uint64_t rax_4 = rbx_1 * 0x30
        *(arg4 + sx.q(rbx_1.d * arg5 + arg6))
        float zmm1[0x4] = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3]
        zmm10 = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3 + 1]
        zmm8 = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3 + 2]
        float zmm4[0x4] = *(arg2 + rax_4)
        float zmm5[0x4] = *(arg2 + rax_4 + 0x10)
        zmm11 = *(arg2 + rax_4 + 0x20)
        float temp0_2[0x4] = _mm_cmpeq_ps(zmm11, zmm13, 1)
        float zmm0[0x4]
        
        if (_mm_movemask_ps(_mm_or_ps(_mm_cmpeq_ps(zmm8, zmm13, 1), temp0_2)) == 0)
            float temp0_173[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            float temp0_174[0x4] = _mm_mul_ps(temp0_173, zmm4)
            float temp0_175[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_179[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), temp0_175), 
                    data_142d3f7c0), 
                temp0_174)
            float temp0_180[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            float temp0_184[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_180), 
                    data_142d3f7d0), 
                temp0_179)
            float temp0_185[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            zmm4 = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), temp0_185), 
                    data_142d3f7b0), 
                temp0_184)
            float temp0_190[0x4] = _mm_mul_ps(zmm5, zmm8)
            float temp0_191[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
            float temp0_192[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0xd2)
            float temp0_193[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
            float temp0_194[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0xc9)
            float temp0_197[0x4] =
                _mm_sub_ps(_mm_mul_ps(temp0_192, temp0_191), _mm_mul_ps(temp0_194, temp0_193))
            float temp0_198[0x4] = _mm_add_ps(temp0_197, temp0_197)
            float temp0_200[0x4] = _mm_add_ps(_mm_mul_ps(temp0_173, temp0_198), temp0_190)
            float temp0_201[0x4] = _mm_shuffle_ps(temp0_198, temp0_198, 0xd2)
            float temp0_202[0x4] = _mm_shuffle_ps(temp0_198, temp0_198, 0xc9)
            zmm10 = _mm_add_ps(zmm10, 
                _mm_add_ps(
                    _mm_sub_ps(_mm_mul_ps(temp0_201, temp0_191), _mm_mul_ps(temp0_202, temp0_193)), 
                    temp0_200))
            zmm8 = _mm_mul_ps(zmm8, zmm11)
        else
            float temp0_6[0x4] = _mm_add_ps(zmm4, zmm4)
            float temp0_7[0x4] = _mm_mul_ps(zmm4, temp0_6)
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 1)
            float temp0_10[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x1a), temp0_8)
            zmm7 = data_142d3f670
            float temp0_12[0x4] = _mm_mul_ps(_mm_sub_ps(zmm7, temp0_10), zmm11)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 4)
            float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x29), temp0_13)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x12), temp0_16)
            float temp0_20[0x4] = _mm_mul_ps(_mm_add_ps(temp0_15, temp0_18), zmm11)
            float temp0_21[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
            float temp0_23[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_15, temp0_18), temp0_21)
            float temp0_25[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_12, temp0_20, 0x1c), temp0_23, 4)
            float temp0_27[0x4] =
                _mm_insert_ps(_mm_insert_ps(temp0_23, temp0_12, 0x5c), temp0_20, 0x68)
            float temp0_29[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_23, temp0_20, 0x8c), temp0_12, 4)
            float temp0_30[0x4] = _mm_blend_ps(zmm5, zmm9, 8)
            float var_140_1[0x4] = temp0_25
            float temp0_31[0x4] = _mm_add_ps(zmm1, zmm1)
            float temp0_32[0x4] = _mm_mul_ps(zmm1, temp0_31)
            float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc1)
            float temp0_37[0x4] = _mm_mul_ps(
                _mm_sub_ps(zmm7, _mm_add_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xda), temp0_33)), 
                zmm8)
            float temp0_38[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x29), temp0_38)
            float temp0_41[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x12), temp0_41)
            float temp0_45[0x4] = _mm_mul_ps(_mm_add_ps(temp0_40, temp0_43), zmm8)
            float temp0_46[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            float temp0_48[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_40, temp0_43), temp0_46)
            float temp0_50[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_37, temp0_45, 0x1c), temp0_48, 4)
            float temp0_52[0x4] =
                _mm_insert_ps(_mm_insert_ps(temp0_48, temp0_37, 0x5c), temp0_45, 0x68)
            float temp0_54[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_48, temp0_45, 0x8c), temp0_37, 4)
            float temp0_55[0x4] = _mm_blend_ps(zmm10, zmm9, 8)
            float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0), temp0_50)
            float temp0_60[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xaa), temp0_54), temp0_57)
            float temp0_63[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0), temp0_52), temp0_60)
            float temp0_65[0x4] = _mm_add_ps(_mm_mul_ps(temp0_55, zmm13), temp0_63)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0), temp0_50)
            float temp0_70[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0x55), temp0_54), temp0_67)
            zmm0 = temp0_27[1]
            float zmm2[0x4] = temp0_27[3]
            float temp0_73[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_52), temp0_70)
            float temp0_76[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_55), temp0_73)
            zmm0 = temp0_29[0]
            float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_50)
            float zmm3[0x4] = temp0_29[2]
            float temp0_81[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_54), temp0_78)
            zmm4 = temp0_29[1]
            float temp0_84[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_52), temp0_81)
            zmm0 = temp0_29[3]
            float temp0_87[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_55), temp0_84)
            zmm3 = temp0_30[0]
            float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_50)
            zmm4 = temp0_30[2]
            float temp0_92[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_54), temp0_89)
            zmm3 = temp0_30[1]
            float temp0_95[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_52), temp0_92)
            zmm6 = temp0_30[3]
            float temp0_98[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_55), temp0_95)
            int32_t temp0_99 = _mm_extract_ps(temp0_76, 0)
            zmm8 = _mm_mul_ps(zmm8, zmm11)
            zmm7 = zx.o(temp0_99)
            int32_t temp0_101 = _mm_extract_ps(temp0_87, 0)
            float temp0_102[0x4] = _mm_movehdup_ps(temp0_76)
            zmm10 = zx.o(temp0_101)
            float temp0_103[0x4] = _mm_blend_ps(temp0_76, zmm7, 1)
            float temp0_104[0x4] = _mm_movehdup_ps(temp0_87)
            int96_t var_1b0_1 = temp0_103[0].12
            int96_t var_1a0_1 = _mm_blend_ps(temp0_87, zmm10, 1)[0].12
            float temp0_106[0x4] = _mm_movehdup_ps(temp0_65)
            int96_t var_190_1 = temp0_98[0].12
            temp0_65[0] = temp0_65[0] * temp0_65[0]
            temp0_106[0] = temp0_106[0] * temp0_106[0]
            temp0_106[0] = temp0_106[0] + temp0_65[0]
            zmm0 = _mm_unpackhi_pd(temp0_65, temp0_65[0].q)
            temp0_76[0].q = temp0_76 u>> 0x40
            temp0_87[0].q = temp0_87 u>> 0x40
            float var_1c0[0x4] = temp0_65
            zmm0[0] = zmm0[0] * zmm0[0]
            zmm0[0] = zmm0[0] + temp0_106[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            temp0_102[0] = temp0_102[0] * temp0_102[0]
            temp0_102[0] = temp0_102[0] + zmm7[0]
            temp0_76[0] = temp0_76[0] * temp0_76[0]
            temp0_76[0] = temp0_76[0] + temp0_102[0]
            zmm10[0] = zmm10[0] * zmm10[0]
            temp0_104[0] = temp0_104[0] * temp0_104[0]
            temp0_104[0] = temp0_104[0] + zmm10[0]
            temp0_87[0] = temp0_87[0] * temp0_87[0]
            temp0_87[0] = temp0_87[0] + temp0_104[0]
            zmm0[0] = zmm0[0] + -9.99999994e-09f
            float temp0_108[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0[0])
            zmm0[0] = zmm0[0] * zmm14[0]
            temp0_108[0] = temp0_108[0] * temp0_108[0]
            temp0_108[0] = temp0_108[0] * zmm0[0]
            zmm14[0] = zmm14[0] - temp0_108[0]
            zmm14[0] = zmm14[0] * temp0_108[0]
            zmm14[0] = zmm14[0] + temp0_108[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] * zmm0[0]
            zmm14[0] = zmm14[0] - zmm14[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] + zmm14[0]
            float temp0_109[0x4] = _mm_cmpeq_ss(0, zmm0[0], 2)
            zmm0 = _mm_and_ps(zmm14, temp0_109)
            zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_109, 0x3f800000), zmm0)
            temp0_76[0] = temp0_76[0] + -9.99999994e-09f
            float temp0_113[0x4] = _mm_rsqrt_ss(temp0_76[0], temp0_76[0])
            temp0_76[0] = temp0_76[0] * zmm14[0]
            temp0_113[0] = temp0_113[0] * temp0_113[0]
            temp0_113[0] = temp0_113[0] * temp0_76[0]
            zmm14[0] = zmm14[0] - temp0_113[0]
            zmm14[0] = zmm14[0] * temp0_113[0]
            zmm14[0] = zmm14[0] + temp0_113[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] * temp0_76[0]
            zmm14[0] = zmm14[0] - zmm14[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] + zmm14[0]
            float temp0_114[0x4] = _mm_cmpeq_ss(0, temp0_76[0], 2)
            zmm3 = _mm_and_ps(zmm14, temp0_114)
            zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_114, 0x3f800000), zmm3)
            temp0_87[0] = temp0_87[0] + -9.99999994e-09f
            float temp0_118[0x4] = _mm_rsqrt_ss(temp0_87[0], temp0_87[0])
            temp0_87[0] = temp0_87[0] * zmm14[0]
            temp0_118[0] = temp0_118[0] * temp0_118[0]
            temp0_118[0] = temp0_118[0] * temp0_87[0]
            zmm14[0] = zmm14[0] - temp0_118[0]
            zmm14[0] = zmm14[0] * temp0_118[0]
            zmm14[0] = zmm14[0] + temp0_118[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] * temp0_87[0]
            zmm14[0] = zmm14[0] - zmm14[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] + zmm14[0]
            float temp0_119[0x4] = _mm_cmpeq_ss(0, temp0_87[0], 2)
            zmm5 = _mm_and_ps(zmm14, temp0_119)
            zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_119, 0x3f800000), zmm5)
            zmm2 = var_1c0[1]
            zmm2[0] = zmm2[0] * zmm4[0]
            float var_1b8
            zmm3 = var_1b8
            zmm3[0] = zmm3[0] * zmm4[0]
            zmm4[0] = zmm4[0] * temp0_65[0]
            float temp0_124[0x4] = _mm_insert_ps(_mm_insert_ps(zmm4, zmm2, 0x10), zmm3, 0x20)
            zmm2 = var_1b0_1.d
            zmm2[0] = zmm2[0] * zmm0[0]
            zmm3 = var_1b0_1:4.d
            zmm3[0] = zmm3[0] * zmm0[0]
            float temp0_125[0x4] = _mm_insert_ps(zmm2, zmm3, 0x10)
            zmm0[0] = zmm0[0] f* var_1b0_1:8.d
            float temp0_126[0x4] = _mm_insert_ps(temp0_125, zmm0, 0x20)
            zmm6 = var_1a0_1.d
            zmm6[0] = zmm6[0] * zmm1[0]
            zmm0 = var_1a0_1:4.d
            zmm0[0] = zmm0[0] * zmm1[0]
            float temp0_127[0x4] = _mm_insert_ps(zmm6, zmm0, 0x10)
            zmm1[0] = zmm1[0] f* var_1a0_1:8.d
            float temp0_128[0x4] = _mm_insert_ps(temp0_127, zmm1, 0x20)
            zmm0 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm8, 2), data_142d3f780)
                ^ data_142d3f7e0
            float temp0_132[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0), temp0_124)
            float temp0_133[0x4] = _mm_movehdup_ps(temp0_132)
            zmm3 = _mm_unpackhi_pd(temp0_132, temp0_132[0].q)
            var_1c0[0] = temp0_132[0]
            var_1c0[1] = temp0_133[0]
            var_1b8 = zmm3[0]
            float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0x55), temp0_126)
            float temp0_137[0x4] = _mm_movehdup_ps(temp0_136)
            zmm1 = _mm_unpackhi_pd(temp0_136, temp0_136[0].q)
            var_1b0_1.d = temp0_136[0]
            var_1b0_1:4.d = temp0_137[0]
            var_1b0_1:8.d = zmm1[0]
            float temp0_140[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0xaa), temp0_128)
            float temp0_141[0x4] = _mm_movehdup_ps(temp0_140)
            float temp0_142[0x4] = __insertps_xmmps_memd_immb(temp0_132, 0x800000, 0x30)
            zmm7 = data_142d3f770
            zmm2 = _mm_and_ps(temp0_142, zmm7)
            zmm13 = data_142d3f5e0
            char temp0_145 = _mm_movemask_ps(_mm_cmpeq_ps(zmm2, zmm13, 2))
            zmm2 = _mm_unpackhi_pd(temp0_140, temp0_140[0].q)
            var_1a0_1.d = temp0_140[0]
            var_1a0_1:4.d = temp0_141[0]
            var_1a0_1:8.d = zmm2[0]
            
            if (temp0_145 == 0xf)
                zmm1 = data_142d3f660
            else if (_mm_movemask_ps(_mm_cmpeq_ps(
                    _mm_and_ps(__insertps_xmmps_memd_immb(temp0_136, 0x800000, 0x30), zmm7), zmm13, 
                    2)) == 0xf)
                zmm1 = data_142d3f660
            else if (_mm_movemask_ps(_mm_cmpeq_ps(
                    _mm_and_ps(__insertps_xmmps_memd_immb(temp0_140, 0x800000, 0x30), zmm7), zmm13, 
                    2)) == 0xf)
                zmm1 = data_142d3f660
            else
                temp0_132[0] = temp0_132[0] + temp0_137[0]
                temp0_132[0] = temp0_132[0] + zmm2[0]
                
                if (temp0_132[0] <= 0f)
                    temp0_137[0] - temp0_132[0]
                    int64_t r14_1
                    r14_1.b = temp0_137[0] > temp0_132[0]
                    int64_t rax = 0
                    
                    if (temp0_137[0] > temp0_132[0])
                        rax = 0x14
                    
                    if (zmm2[0] f> *(&var_1c0 + rax))
                        r14_1 = 2
                    
                    int64_t r15_1 = sx.q(*(&data_143443228 + (r14_1 << 2)))
                    int64_t rax_1 = sx.q(*(&data_143443228 + (r15_1 << 2)))
                    zmm0 = var_1c0[zx.q((r14_1 * 5).d)]
                    zmm0[0] = zmm0[0] - var_1c0[sx.q((r15_1 * 5).d)]
                    zmm0[0] = zmm0[0] - var_1c0[sx.q((rax_1 * 5).d)]
                    zmm0[0] = zmm0[0] + 1f
                    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm0[0])
                    zmm0 = 0x3f800000
                    zmm0[0] = 1f / temp0_1[0]
                    zmm1 = 0x3f800000
                    zmm1[0] = 1f / zmm0[0]
                    zmm0[0] = zmm0[0] * zmm14[0]
                    zmm1[0] = zmm1[0] * zmm14[0]
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
                    zmm1 = var_150
                else
                    temp0_132[0] = temp0_132[0] + 1f
                    zmm5 = 0x3f800000
                    zmm5[0] = 1f / _mm_sqrt_ss(0, temp0_132[0])[0]
                    zmm2 = 0x3f800000
                    zmm2[0] = 1f / zmm5[0]
                    zmm5[0] = zmm5[0] * zmm14[0]
                    zmm1[0] = zmm1[0] - temp0_141[0]
                    zmm1[0] = zmm1[0] * zmm5[0]
                    temp0_140[0] = temp0_140[0] - zmm3[0]
                    temp0_140[0] = temp0_140[0] * zmm5[0]
                    float temp0_156[0x4] = _mm_insert_ps(zmm1, temp0_140, 0x10)
                    temp0_133[0] = temp0_133[0] - temp0_136[0]
                    temp0_133[0] = temp0_133[0] * zmm5[0]
                    float temp0_157[0x4] = _mm_insert_ps(temp0_156, temp0_133, 0x20)
                    zmm2[0] = zmm2[0] * zmm14[0]
                    zmm1 = _mm_insert_ps(temp0_157, zmm2, 0x30)
            
            zmm13 = zx.o(0)
            zmm7 = 0xffffffff
            zmm9 = data_142d3f660
            float temp0_159[0x4] = _mm_mul_ps(zmm1, zmm1)
            float temp0_161[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_159, temp0_159[0].q), temp0_159)
            float temp0_162[0x4] = _mm_movehdup_ps(temp0_161)
            temp0_162[0] = temp0_162[0] + temp0_161[0]
            zmm4 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_162[0], 6), 0xffffffff)
            temp0_162[0] = temp0_162[0] * zmm14[0]
            float temp0_165[0x4] = _mm_rsqrt_ss(temp0_162[0], temp0_162[0])
            temp0_165[0] = temp0_165[0] * temp0_165[0]
            temp0_165[0] = temp0_165[0] * temp0_162[0]
            zmm14[0] = zmm14[0] - temp0_165[0]
            zmm14[0] = zmm14[0] * temp0_165[0]
            zmm14[0] = zmm14[0] + temp0_165[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] * temp0_162[0]
            zmm14[0] = zmm14[0] - zmm14[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] + zmm14[0]
            float temp0_167[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm1)
            float temp0_168[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm2 = _mm_and_ps(temp0_167, temp0_168)
            zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_168, zmm9), zmm2)
            zmm10 = __insertps_xmmps_memd_immb(zx.o(var_190_1.q), var_190_1:8.d, 0x28)
        
        float temp0_209[0x4] = _mm_mul_ps(zmm4, zmm4)
        float temp0_211[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_209, temp0_209[0].q), temp0_209)
        float temp0_212[0x4] = _mm_movehdup_ps(temp0_211)
        temp0_212[0] = temp0_212[0] + temp0_211[0]
        zmm0 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_212[0], 6), zmm7)
        temp0_212[0] = temp0_212[0] * zmm14[0]
        float temp0_215[0x4] = _mm_rsqrt_ss(temp0_212[0], temp0_212[0])
        temp0_215[0] = temp0_215[0] * temp0_215[0]
        temp0_215[0] = temp0_215[0] * temp0_212[0]
        zmm14[0] = zmm14[0] - temp0_215[0]
        zmm14[0] = zmm14[0] * temp0_215[0]
        zmm14[0] = zmm14[0] + temp0_215[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm14[0] = zmm14[0] * temp0_212[0]
        zmm14[0] = zmm14[0] - zmm14[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm14[0] = zmm14[0] + zmm14[0]
        float temp0_217[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm4)
        float temp0_218[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        zmm1 = _mm_and_ps(temp0_217, temp0_218)
        arg1[rbx_1 * 3] = _mm_or_ps(_mm_andnot_ps(temp0_218, zmm9), zmm1)
        result = rbx_1 * 0x30
        *(arg1 + result + 0x10) = zmm10
        *(arg1 + result + 0x20) = zmm8
        rsi_1 += 1
    while (r13_1 != rsi_1)

return result
