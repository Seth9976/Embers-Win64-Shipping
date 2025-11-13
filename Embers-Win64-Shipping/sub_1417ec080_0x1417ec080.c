// 函数: sub_1417ec080
// 地址: 0x1417ec080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x134))
int64_t rcx_1 = rdx * 0x12
uint64_t i = zx.q(*(arg1 + (rcx_1 << 3) + 0x48))

if (i.d != *(arg1 + (rcx_1 << 3) + 0x74) && *(arg1 + (rcx_1 << 3) + 0x90) == 0)
    uint32_t zmm6[0x4] = data_143ef9470
    float zmm7[0x4] = data_143ef94d0
    float zmm8[0x4] = *(arg1 + (rcx_1 << 3) + 0x30)
    float zmm9[0x4] = data_143ef94e0
    float zmm10[0x4] = data_143ef94c0
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    float zmm12[0x4] = data_143ef9540
    float zmm13[0x4] = arg3[2]
    uint32_t temp0_3 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm8), zmm12, 1))
    uint32_t var_168[0x4] = zmm12
    float var_1a8[0x4]
    int32_t arg_8
    float zmm0[0x4]
    float zmm1[0x4]
    float zmm2[0x4]
    float zmm3[0x4]
    float zmm4[0x4]
    float zmm5[0x4]
    float zmm14[0x4]
    float zmm15[0x4]
    
    if (temp0_3 == 0)
        zmm4 = *(arg1 + (rcx_1 << 3) + 0x10)
        zmm2 = *arg3
        zmm3 = arg3[1]
        float temp0_133[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_133)
        float temp0_136[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
        float temp0_137[0x4] = _mm_mul_ps(zmm3, zmm8)
        float temp0_138[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        float temp0_139[0x4] = _mm_mul_ps(temp0_135, zmm9)
        float temp0_140[0x4] = _mm_mul_ps(temp0_138, zmm2)
        zmm15 = _mm_mul_ps(zmm8, zmm13)
        float temp0_142[0x4] = _mm_add_ps(temp0_139, temp0_140)
        float temp0_144[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        float temp0_147[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        float temp0_148[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
        float temp0_149[0x4] = _mm_mul_ps(temp0_144, zmm7)
        float temp0_150[0x4] = _mm_mul_ps(temp0_147, zmm10)
        float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_149)
        float temp0_152[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        float temp0_153[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        float temp0_154[0x4] = _mm_mul_ps(temp0_148, temp0_153)
        zmm12 = _mm_add_ps(temp0_151, temp0_150)
        float temp0_158[0x4] =
            _mm_sub_ps(temp0_154, _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_152))
        float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
        float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
        float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
        float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
        zmm1 = data_143ef9540
        float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_138)
        zmm14 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), 
            *(arg1 + (rcx_1 << 3) + 0x20))
    else
        zmm1 = *(arg1 + (rcx_1 << 3) + 0x10)
        zmm10 = data_143ef9460
        float temp0_4[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_5[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        _mm_mul_ps(zmm13, zmm8)
        float temp0_8[0x4] = _mm_mul_ps(temp0_4, zmm1)
        float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_6)
        float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
        float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x12), temp0_11)
        float temp0_16[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
        float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_10)
        float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_14)
        zmm3 = *arg3
        float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_16)
        float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm8)
        float temp0_21[0x4] = _mm_mul_ps(temp0_5, temp0_18)
        float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm8)
        zmm8 = *(arg1 + (rcx_1 << 3) + 0x20)
        float temp0_23[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        zmm1 = _mm_and_ps(temp0_22, zmm6)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
        float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_25, 0x82)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
        float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_28, 0x88)
        float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
        float temp0_33[0x4] = _mm_add_ps(zmm3, zmm3)
        zmm10[0].q = zmm8 u>> 0x40
        float temp0_34[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x29)
        float temp0_37[0x4] = _mm_mul_ps(temp0_33, zmm3)
        float temp0_38[0x4] = _mm_mul_ps(temp0_23, temp0_36)
        float temp0_39[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x12)
        float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_39)
        float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
            _mm_shuffle_ps(temp0_37, temp0_37, 1))
        zmm6 = _mm_add_ps(temp0_41, temp0_38)
        float temp0_46[0x4] = _mm_sub_ps(temp0_38, temp0_41)
        float temp0_47[0x4] = _mm_sub_ps(zmm10, temp0_44)
        zmm6 = _mm_mul_ps(zmm6, zmm13)
        float temp0_49[0x4] = _mm_mul_ps(temp0_35, temp0_46)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm13), data_143ef9470)
        float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), 
            _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, zmm1, 0x10)
        float temp0_56[0x4] = _mm_shuffle_ps(zmm6, zmm1, 0x31)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_56, 0x88)
        float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_30)
        zmm6 = _mm_shuffle_ps(zmm6, temp0_49, 0x12)
        zmm5 = arg3[1]
        zmm6 = _mm_shuffle_ps(zmm6, zmm1, 0xe8)
        float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
        zmm10[0].q = zmm5 u>> 0x40
        float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
        float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_27))
        float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_27)
        float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
        float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_32)
        float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
        float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
        var_1a8 = temp0_75
        float temp0_79[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
        float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
        float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_34)
        float temp0_83[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
        float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
        float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), temp0_32)
        float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
        zmm6 = _mm_mul_ps(zmm6, temp0_34)
        float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
        float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
        float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
        float temp0_99[0x4] = _mm_add_ps(temp0_94, zmm6)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
        float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
        int96_t var_188_1 = temp0_99[0].12
        int96_t var_178_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
        zmm10, zmm12, zmm15 = sub_1407740e0(&var_1a8, 0x322bcc77)
        float zmm2_1[0x4] = var_1a8[0]
        float zmm1_1 = var_1a8[1]
        zmm12 = _mm_and_ps(_mm_cmpeq_ps(zmm12, zmm15, 2), data_143ef9530 ^ zmm10) ^ data_143ef9530
        zmm2_1[0] = zmm2_1[0] * zmm12[0]
        uint32_t zmm0_1[0x4] = var_1a8[2]
        float zmm3_1 = temp0_88[0]
        zmm0_1[0] = zmm0_1[0] f* zmm12[0]
        zmm1_1 = zmm1_1 * zmm12[0]
        var_1a8[0] = zmm2_1[0]
        float temp0_107[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
        var_1a8[2] = zmm0_1[0]
        zmm0_1 = temp0_88[2]
        zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
        var_1a8[1] = zmm1_1
        zmm1_1 = temp0_88[1] * temp0_107[0]
        zmm3_1 = zmm3_1 * temp0_107[0]
        zmm2_1 = var_188_1.d
        temp0_88[2] = zmm0_1[0]
        zmm0_1 = var_188_1:8.d
        temp0_88[1] = zmm1_1
        float temp0_108[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
        zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
        zmm2_1[0] = zmm2_1[0] * temp0_108[0]
        zmm1_1 = var_188_1:4.d * temp0_108[0]
        var_188_1:8.d = zmm0_1[0]
        temp0_88[0] = zmm3_1
        var_188_1.d = zmm2_1[0]
        var_188_1:4.d = zmm1_1
        sub_14077e4a0(&var_168, &var_1a8)
        zmm5 = var_168
        zmm12 = data_143ef9520
        rdx = zx.q(*(arg1 + 0x134))
        zmm6 = data_143ef9470
        zmm9 = data_143ef94e0
        zmm7 = data_143ef94d0
        zmm10 = data_143ef94c0
        float temp0_109[0x4] = _mm_mul_ps(zmm5, zmm5)
        arg_8 = 0x322bcc77
        float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
        float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
        float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
        float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm12)
        float temp0_120[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm12, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                temp0_114), 
            temp0_114)
        float temp0_123[0x4] =
            _mm_sub_ps(zmm12, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
        zmm0 = arg_8
        float temp0_125[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_113, 2)
        float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
        float temp0_128[0x4] = _mm_unpacklo_ps(var_178_1:4.d, 0)
        zmm1 = data_143ef9540
        var_168 = zmm1
        zmm12 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5) ^ data_143ef9510, temp0_125) ^ data_143ef9510
        zmm14 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_178_1.d, var_178_1:8.d[0].q), temp0_128[0].q)
    
    zmm2 = arg4[2]
    zmm13 = zmm15
    int64_t rcx_5 = sx.q(rdx.d) * 0x12
    zmm8 = *(arg1 + (rcx_5 << 3) + 0x30)
    float var_158[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm2, zmm8), zmm1, 1)) == 0)
        zmm4 = *(arg1 + (rcx_5 << 3) + 0x10)
        zmm2 = *arg4
        zmm3 = arg4[1]
        float temp0_301[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_301)
        float temp0_304[0x4] = _mm_mul_ps(zmm3, zmm8)
        zmm8 = __mulps_xmmps_memps(zmm8, arg4[2])
        float temp0_306[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
        float temp0_307[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        float temp0_308[0x4] = _mm_mul_ps(zmm2, temp0_307)
        zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm9), temp0_308)
        float temp0_312[0x4] = _mm_mul_ps(temp0_306, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        float temp0_315[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        float temp0_316[0x4] = _mm_shuffle_ps(temp0_304, temp0_304, 0xd2)
        float temp0_317[0x4] = _mm_mul_ps(temp0_312, zmm7)
        float temp0_318[0x4] = _mm_mul_ps(temp0_315, zmm10)
        zmm6 = _mm_add_ps(zmm6, temp0_317)
        float temp0_320[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        float temp0_321[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        float temp0_322[0x4] = _mm_mul_ps(temp0_316, temp0_321)
        zmm6 = _mm_add_ps(zmm6, temp0_318)
        float temp0_326[0x4] =
            _mm_sub_ps(temp0_322, _mm_mul_ps(_mm_shuffle_ps(temp0_304, temp0_304, 0xc9), temp0_320))
        float temp0_327[0x4] = _mm_add_ps(temp0_326, temp0_326)
        float temp0_328[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xd2)
        float temp0_329[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xc9)
        float temp0_330[0x4] = _mm_mul_ps(temp0_328, temp0_321)
        float temp0_331[0x4] = _mm_mul_ps(temp0_329, temp0_320)
        float temp0_332[0x4] = _mm_mul_ps(temp0_327, temp0_307)
        zmm11 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_330, temp0_331), _mm_add_ps(temp0_332, temp0_304)), 
            *(arg1 + (rcx_5 << 3) + 0x20))
    else
        zmm3 = *(arg1 + (rcx_5 << 3) + 0x10)
        zmm10 = data_143ef9460
        float temp0_172[0x4] = _mm_mul_ps(zmm8, zmm2)
        float temp0_173[0x4] = _mm_add_ps(zmm3, zmm3)
        float temp0_174[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_175[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        var_158 = temp0_172
        float temp0_177[0x4] = _mm_mul_ps(temp0_174, _mm_shuffle_ps(temp0_173, temp0_173, 0x29))
        float temp0_178[0x4] = _mm_mul_ps(zmm3, temp0_173)
        float temp0_180[0x4] = _mm_mul_ps(temp0_175, _mm_shuffle_ps(temp0_173, temp0_173, 0x12))
        float temp0_181[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        float temp0_184[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0x1a), 
            _mm_shuffle_ps(temp0_178, temp0_178, 1))
        float temp0_185[0x4] = _mm_add_ps(temp0_180, temp0_177)
        float temp0_186[0x4] = _mm_sub_ps(temp0_177, temp0_180)
        zmm3 = *arg4
        float temp0_187[0x4] = _mm_sub_ps(zmm10, temp0_184)
        float temp0_188[0x4] = _mm_mul_ps(temp0_185, zmm8)
        float temp0_189[0x4] = _mm_mul_ps(temp0_181, temp0_186)
        float temp0_190[0x4] = _mm_mul_ps(temp0_187, zmm8)
        zmm8 = *(arg1 + (rcx_5 << 3) + 0x20)
        float temp0_191[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        zmm1 = _mm_and_ps(temp0_190, zmm6)
        float temp0_193[0x4] = _mm_shuffle_ps(temp0_189, zmm1, 0x32)
        float temp0_195[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, zmm1, 0), temp0_193, 0x82)
        float temp0_196[0x4] = _mm_shuffle_ps(temp0_188, zmm1, 0x31)
        float temp0_198[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_189, zmm1, 0x10), temp0_196, 0x88)
        float temp0_200[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, temp0_189, 0x12), zmm1, 0xe8)
        float temp0_201[0x4] = _mm_add_ps(zmm3, zmm3)
        zmm10[0].q = zmm8 u>> 0x40
        float temp0_202[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
        float temp0_203[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_204[0x4] = _mm_mul_ps(zmm3, temp0_201)
        float temp0_206[0x4] = _mm_mul_ps(temp0_191, _mm_shuffle_ps(temp0_201, temp0_201, 0x29))
        zmm0 = arg4[2]
        float temp0_208[0x4] = _mm_mul_ps(temp0_203, _mm_shuffle_ps(temp0_201, temp0_201, 0x12))
        float temp0_209[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
        zmm6 = _mm_add_ps(temp0_208, temp0_206)
        float temp0_211[0x4] = _mm_sub_ps(temp0_206, temp0_208)
        zmm6 = _mm_mul_ps(zmm6, zmm0)
        float temp0_215[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0x1a), 
            _mm_shuffle_ps(temp0_204, temp0_204, 1))
        float temp0_216[0x4] = _mm_mul_ps(temp0_209, temp0_211)
        zmm1 = __andps_xmmxud_memxud(__mulps_xmmps_memps(_mm_sub_ps(zmm10, temp0_215), arg4[2]), 
            data_143ef9470)
        float temp0_222[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), 
            _mm_shuffle_ps(temp0_216, zmm1, 0x32), 0x82)
        float temp0_223[0x4] = _mm_shuffle_ps(zmm6, zmm1, 0x31)
        float temp0_224[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0x55)
        float temp0_226[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_216, zmm1, 0x10), temp0_223, 0x88)
        float temp0_227[0x4] = _mm_mul_ps(temp0_224, temp0_198)
        zmm6 = _mm_shuffle_ps(zmm6, temp0_216, 0x12)
        zmm5 = arg4[1]
        zmm6 = _mm_shuffle_ps(zmm6, zmm1, 0xe8)
        float temp0_231[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xaa), temp0_200)
        zmm10[0].q = zmm5 u>> 0x40
        float temp0_232[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
        float temp0_233[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0)
        float temp0_235[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xff), temp0_202)
        float temp0_237[0x4] = _mm_add_ps(temp0_227, _mm_mul_ps(temp0_233, temp0_195))
        float temp0_239[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0), temp0_195)
        float temp0_240[0x4] = _mm_add_ps(temp0_237, temp0_231)
        float temp0_242[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xaa), temp0_200)
        float temp0_243[0x4] = _mm_add_ps(temp0_240, temp0_235)
        float temp0_245[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0x55), temp0_198)
        float temp0_246[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0xff)
        var_1a8 = temp0_243
        float temp0_247[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_239)
        float temp0_249[0x4] = _mm_mul_ps(temp0_247, temp0_198)
        float temp0_250[0x4] = _mm_mul_ps(temp0_246, temp0_202)
        float temp0_251[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_252[0x4] = _mm_add_ps(temp0_248, temp0_242)
        float temp0_253[0x4] = _mm_mul_ps(temp0_251, temp0_195)
        float temp0_255[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), temp0_200)
        float temp0_256[0x4] = _mm_add_ps(temp0_252, temp0_250)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_258[0x4] = _mm_add_ps(temp0_249, temp0_253)
        zmm6 = _mm_mul_ps(zmm6, temp0_202)
        float temp0_260[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0)
        float temp0_261[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x55)
        float temp0_262[0x4] = _mm_add_ps(temp0_258, temp0_255)
        float temp0_263[0x4] = _mm_mul_ps(temp0_261, temp0_198)
        float temp0_265[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xaa), temp0_200)
        float temp0_266[0x4] = _mm_mul_ps(temp0_260, temp0_195)
        float temp0_267[0x4] = _mm_add_ps(temp0_262, zmm6)
        float temp0_269[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xff), temp0_202)
        float temp0_270[0x4] = _mm_add_ps(temp0_263, temp0_266)
        int96_t var_188_2 = temp0_267[0].12
        int96_t var_178_2 = _mm_add_ps(_mm_add_ps(temp0_270, temp0_265), temp0_269)[0].12
        zmm10, zmm12, zmm13, zmm14, zmm15 = sub_1407740e0(&var_1a8, 0x322bcc77)
        zmm8 = var_158
        uint32_t zmm4_1[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(var_168, zmm8, 2), data_143ef9530 ^ zmm10) ^ data_143ef9530
        uint32_t zmm2_2[0x4] = var_1a8[0]
        float zmm1_2 = var_1a8[1]
        uint32_t zmm0_2[0x4] = var_1a8[2]
        float zmm3_2 = temp0_256[0]
        zmm2_2[0] = zmm2_2[0] f* zmm4_1[0]
        zmm1_2 = zmm1_2 f* zmm4_1[0]
        zmm0_2[0] = zmm0_2[0] f* zmm4_1[0]
        var_1a8[0] = zmm2_2[0]
        zmm2_2 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        var_1a8[1] = zmm1_2
        zmm1_2 = temp0_256[1] f* zmm2_2[0]
        var_1a8[2] = zmm0_2[0]
        zmm0_2 = temp0_256[2]
        zmm0_2[0] = zmm0_2[0] f* zmm2_2[0]
        zmm3_2 = zmm3_2 f* zmm2_2[0]
        zmm2_2 = var_188_2.d
        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
        temp0_256[1] = zmm1_2
        temp0_256[2] = zmm0_2[0]
        zmm0_2 = var_188_2:8.d
        zmm1_2 = var_188_2:4.d f* zmm4_1[0]
        zmm0_2[0] = zmm0_2[0] f* zmm4_1[0]
        zmm2_2[0] = zmm2_2[0] f* zmm4_1[0]
        var_188_2:4.d = zmm1_2
        var_188_2:8.d = zmm0_2[0]
        temp0_256[0] = zmm3_2
        var_188_2.d = zmm2_2[0]
        sub_14077e4a0(&var_158, &var_1a8)
        zmm5 = var_158
        zmm6 = data_143ef9520
        zmm9 = data_143ef94e0
        float temp0_277[0x4] = _mm_mul_ps(zmm5, zmm5)
        arg_8 = 0x322bcc77
        float temp0_279[0x4] = _mm_add_ps(temp0_277, _mm_shuffle_ps(temp0_277, temp0_277, 0x4e))
        float temp0_281[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_279, temp0_279, 0x39), temp0_279)
        float temp0_282[0x4] = _mm_rsqrt_ps(temp0_281)
        float temp0_283[0x4] = _mm_mul_ps(temp0_281, zmm6)
        float temp0_288[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_282, temp0_282), temp0_283)), 
                temp0_282), 
            temp0_282)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_288, temp0_288), temp0_283))
        zmm0 = arg_8
        float temp0_293[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_281, 2)
        zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, temp0_288), temp0_288)
        float temp0_296[0x4] = _mm_unpacklo_ps(var_178_2:4.d, 0)
        var_168 = data_143ef9540
        zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5) ^ data_143ef9510, temp0_293) ^ data_143ef9510
        zmm11 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_178_2.d, var_178_2:8.d[0].q), temp0_296[0].q)
    
    zmm2 = data_143ef94a0
    zmm3 = data_143ef96a0
    zmm15 = _mm_and_ps(zmm15, zmm2)
    zmm5 = data_143ef9460
    zmm7 = data_143ef9470
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, zmm15, 1)) == 0)
        zmm12 = data_143dbb0c0
        zmm10 = data_143dbb0d0
        zmm13 = data_143dbb0e0
    else
        zmm12 = __mulps_xmmps_memps(zmm12, data_143ef9690)
        zmm5[0].q = zmm13 u>> 0x40
        zmm10 = zx.o(0)
        float temp0_341[0x4] = _mm_shuffle_ps(zmm13, zmm5, 0xc4)
        float temp0_342[0x4] = _mm_rcp_ps(temp0_341)
        float temp0_343[0x4] = _mm_mul_ps(temp0_342, temp0_342)
        float temp0_346[0x4] =
            _mm_sub_ps(_mm_add_ps(temp0_342, temp0_342), _mm_mul_ps(temp0_343, temp0_341))
        float temp0_347[0x4] = _mm_mul_ps(temp0_346, temp0_346)
        float temp0_348[0x4] = _mm_add_ps(temp0_346, temp0_346)
        float temp0_349[0x4] = _mm_mul_ps(temp0_347, temp0_341)
        float temp0_351[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0_341, zmm2), zmm3, 2)
        float temp0_352[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
        float temp0_353[0x4] = _mm_sub_ps(temp0_348, temp0_349)
        zmm13 = _mm_and_ps(temp0_351, temp0_353 ^ zmm10) ^ temp0_353
        float temp0_355[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
        zmm13 = _mm_and_ps(zmm13, zmm7)
        float temp0_357[0x4] = _mm_mul_ps(zmm14, zmm13)
        float temp0_359[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_357, temp0_357, 0xc9), temp0_352)
        float temp0_362[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_357, temp0_357, 0xd2), temp0_355), temp0_359)
        float temp0_363[0x4] = _mm_add_ps(temp0_362, temp0_362)
        float temp0_365[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_363, temp0_363, 0xd2), temp0_355)
        float temp0_366[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
        float temp0_367[0x4] = _mm_shuffle_ps(temp0_363, temp0_363, 0xc9)
        float temp0_368[0x4] = _mm_mul_ps(temp0_366, temp0_363)
        float temp0_369[0x4] = _mm_mul_ps(temp0_367, temp0_352)
        float temp0_370[0x4] = _mm_add_ps(temp0_368, temp0_357)
        zmm10 = _mm_and_ps(
            _mm_sub_ps(zmm10, _mm_add_ps(_mm_sub_ps(temp0_365, temp0_369), temp0_370)), zmm7)
    
    zmm0 = zmm6
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm8), var_168, 1)) == 0)
        float temp0_507[0x4] = _mm_shuffle_ps(zmm0, zmm6, 0)
        float temp0_508[0x4] = _mm_mul_ps(zmm10, zmm8)
        float temp0_510[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), temp0_507)
        float temp0_511[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x4e)
        zmm14 = _mm_mul_ps(zmm13, zmm8)
        float temp0_513[0x4] = _mm_shuffle_ps(temp0_508, temp0_508, 0xd2)
        float temp0_514[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_515[0x4] = _mm_mul_ps(zmm12, temp0_514)
        float temp0_516[0x4] = _mm_mul_ps(temp0_510, zmm9)
        float temp0_517[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xb1)
        float temp0_518[0x4] = _mm_add_ps(temp0_516, temp0_515)
        float temp0_520[0x4] = _mm_mul_ps(temp0_511, _mm_shuffle_ps(zmm6, zmm6, 0x55))
        float temp0_522[0x4] = _mm_mul_ps(temp0_517, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
        float temp0_523[0x4] = __mulps_xmmps_memps(temp0_520, data_143ef94d0)
        float temp0_524[0x4] = _mm_shuffle_ps(temp0_508, temp0_508, 0xc9)
        float temp0_525[0x4] = __mulps_xmmps_memps(temp0_522, data_143ef94c0)
        float temp0_526[0x4] = _mm_add_ps(temp0_518, temp0_523)
        float temp0_527[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        float temp0_528[0x4] = _mm_mul_ps(temp0_524, temp0_527)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_530[0x4] = _mm_mul_ps(temp0_513, zmm6)
        zmm7 = _mm_add_ps(temp0_526, temp0_525)
        float temp0_532[0x4] = _mm_sub_ps(temp0_530, temp0_528)
        float temp0_533[0x4] = _mm_add_ps(temp0_532, temp0_532)
        float temp0_534[0x4] = _mm_shuffle_ps(temp0_533, temp0_533, 0xd2)
        float temp0_535[0x4] = _mm_shuffle_ps(temp0_533, temp0_533, 0xc9)
        float temp0_536[0x4] = _mm_mul_ps(temp0_534, zmm6)
        float temp0_537[0x4] = _mm_mul_ps(temp0_535, temp0_527)
        float temp0_538[0x4] = _mm_mul_ps(temp0_533, temp0_514)
        zmm8 = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_536, temp0_537), _mm_add_ps(temp0_538, temp0_508)), zmm11)
    else
        float temp0_378[0x4] = _mm_shuffle_ps(zmm0, zmm6, 4)
        float temp0_379[0x4] = _mm_add_ps(zmm6, zmm6)
        float temp0_380[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        _mm_mul_ps(zmm13, zmm8)
        float temp0_383[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_379, temp0_379, 0x29), temp0_378)
        float temp0_384[0x4] = _mm_mul_ps(temp0_379, zmm6)
        float temp0_387[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(temp0_379, temp0_379, 0x12), _mm_shuffle_ps(zmm6, zmm6, 0xff))
        float temp0_390[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_384, temp0_384, 0x1a), 
            _mm_shuffle_ps(temp0_384, temp0_384, 1))
        float temp0_391[0x4] = _mm_add_ps(temp0_387, temp0_383)
        float temp0_392[0x4] = _mm_sub_ps(temp0_383, temp0_387)
        float temp0_393[0x4] = _mm_shuffle_ps(zmm12, zmm12, 4)
        float temp0_394[0x4] = _mm_mul_ps(temp0_391, zmm8)
        float temp0_395[0x4] = _mm_mul_ps(temp0_380, temp0_392)
        zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm5, temp0_390), zmm8), zmm7)
        float temp0_399[0x4] = _mm_shuffle_ps(temp0_395, zmm1, 0x32)
        float temp0_401[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_394, zmm1, 0), temp0_399, 0x82)
        float temp0_402[0x4] = _mm_shuffle_ps(temp0_394, zmm1, 0x31)
        float temp0_404[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_395, zmm1, 0x10), temp0_402, 0x88)
        float temp0_406[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_394, temp0_395, 0x12), zmm1, 0xe8)
        float temp0_407[0x4] = _mm_add_ps(zmm12, zmm12)
        zmm5[0].q = zmm11 u>> 0x40
        float temp0_408[0x4] = _mm_shuffle_ps(zmm11, zmm5, 0xc4)
        float temp0_409[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
        float temp0_410[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
        float temp0_411[0x4] = _mm_mul_ps(zmm12, temp0_407)
        float temp0_413[0x4] = _mm_mul_ps(temp0_393, _mm_shuffle_ps(temp0_407, temp0_407, 0x29))
        float temp0_414[0x4] = _mm_shuffle_ps(temp0_407, temp0_407, 0x12)
        float temp0_415[0x4] = _mm_shuffle_ps(temp0_411, temp0_411, 0x1a)
        float temp0_416[0x4] = _mm_mul_ps(temp0_409, temp0_414)
        float temp0_418[0x4] = _mm_add_ps(temp0_415, _mm_shuffle_ps(temp0_411, temp0_411, 1))
        zmm6 = _mm_add_ps(temp0_416, temp0_413)
        float temp0_420[0x4] = _mm_sub_ps(temp0_413, temp0_416)
        float temp0_421[0x4] = _mm_sub_ps(zmm5, temp0_418)
        zmm6 = _mm_mul_ps(zmm6, zmm13)
        float temp0_423[0x4] = _mm_mul_ps(temp0_410, temp0_420)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_421, zmm13), data_143ef9470)
        float temp0_426[0x4] = _mm_shuffle_ps(temp0_423, zmm1, 0x32)
        float temp0_428[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), temp0_426, 0x82)
        float temp0_429[0x4] = _mm_shuffle_ps(zmm6, zmm1, 0x31)
        float temp0_431[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_423, zmm1, 0x10), temp0_429, 0x88)
        zmm6 = _mm_shuffle_ps(zmm6, temp0_423, 0x12)
        zmm0 = data_143ef9460
        zmm6 = _mm_shuffle_ps(zmm6, zmm1, 0xe8)
        float temp0_434[0x4] = _mm_shuffle_ps(temp0_428, temp0_428, 0x55)
        float temp0_435[0x4] = _mm_shuffle_ps(temp0_428, temp0_428, 0xaa)
        float temp0_436[0x4] = _mm_mul_ps(temp0_434, temp0_404)
        float temp0_437[0x4] = _mm_mul_ps(temp0_435, temp0_406)
        zmm0[0].q = zmm10 u>> 0x40
        float temp0_438[0x4] = _mm_shuffle_ps(zmm10, zmm0, 0xc4)
        float temp0_439[0x4] = _mm_shuffle_ps(temp0_428, temp0_428, 0)
        float temp0_441[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_428, temp0_428, 0xff), temp0_408)
        float temp0_443[0x4] = _mm_add_ps(temp0_436, _mm_mul_ps(temp0_439, temp0_401))
        float temp0_445[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_431, temp0_431, 0), temp0_401)
        float temp0_446[0x4] = _mm_add_ps(temp0_443, temp0_437)
        float temp0_448[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_431, temp0_431, 0xaa), temp0_406)
        float temp0_449[0x4] = _mm_add_ps(temp0_446, temp0_441)
        float temp0_451[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_431, temp0_431, 0x55), temp0_404)
        float temp0_452[0x4] = _mm_shuffle_ps(temp0_431, temp0_431, 0xff)
        var_1a8 = temp0_449
        float temp0_453[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        float temp0_454[0x4] = _mm_add_ps(temp0_451, temp0_445)
        float temp0_455[0x4] = _mm_mul_ps(temp0_453, temp0_404)
        float temp0_456[0x4] = _mm_mul_ps(temp0_452, temp0_408)
        float temp0_457[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_458[0x4] = _mm_add_ps(temp0_454, temp0_448)
        float temp0_459[0x4] = _mm_mul_ps(temp0_457, temp0_401)
        float temp0_461[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), temp0_406)
        float temp0_462[0x4] = _mm_add_ps(temp0_455, temp0_459)
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_464[0x4] = _mm_add_ps(temp0_458, temp0_456)
        zmm6 = _mm_mul_ps(zmm6, temp0_408)
        float temp0_466[0x4] = _mm_shuffle_ps(temp0_438, temp0_438, 0)
        float temp0_467[0x4] = _mm_add_ps(temp0_462, temp0_461)
        float temp0_468[0x4] = _mm_mul_ps(temp0_466, temp0_401)
        float temp0_469[0x4] = _mm_shuffle_ps(temp0_438, temp0_438, 0x55)
        float temp0_470[0x4] = _mm_add_ps(temp0_467, zmm6)
        float temp0_471[0x4] = _mm_mul_ps(temp0_469, temp0_404)
        int96_t var_188_3 = temp0_470[0].12
        float temp0_472[0x4] = _mm_add_ps(temp0_471, temp0_468)
        float temp0_474[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_438, temp0_438, 0xaa), temp0_406)
        float temp0_476[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_438, temp0_438, 0xff), temp0_408)
        int96_t var_178_3 = _mm_add_ps(_mm_add_ps(temp0_472, temp0_474), temp0_476)[0].12
        float zmm15_1[0x4]
        zmm14, zmm15_1 = sub_1407740e0(&var_1a8, 0x322bcc77)
        float zmm2_3[0x4] = var_1a8[0]
        float zmm1_3 = var_1a8[1]
        zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm14, 2), data_143ef9530 ^ data_143ef9460)
        uint32_t zmm0_3[0x4] = var_1a8[2]
        zmm15_1 ^= data_143ef9530
        zmm2_3[0] = zmm2_3[0] * zmm15_1[0]
        zmm1_3 = zmm1_3 * zmm15_1[0]
        zmm0_3[0] = zmm0_3[0] f* zmm15_1[0]
        var_1a8[0] = zmm2_3[0]
        var_1a8[1] = zmm1_3
        var_1a8[2] = zmm0_3[0]
        zmm1_3 = temp0_464[1]
        zmm0_3 = temp0_464[2]
        float zmm3_3 = temp0_464[0]
        float temp0_481[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
        zmm1_3 = zmm1_3 * temp0_481[0]
        zmm0_3[0] = zmm0_3[0] f* temp0_481[0]
        zmm3_3 = zmm3_3 * temp0_481[0]
        zmm2_3 = var_188_3.d
        temp0_464[1] = zmm1_3
        temp0_464[2] = zmm0_3[0]
        zmm0_3 = var_188_3:8.d
        float temp0_482[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
        zmm1_3 = var_188_3:4.d * temp0_482[0]
        zmm0_3[0] = zmm0_3[0] f* temp0_482[0]
        zmm2_3[0] = zmm2_3[0] * temp0_482[0]
        var_188_3:4.d = zmm1_3
        var_188_3:8.d = zmm0_3[0]
        temp0_464[0] = zmm3_3
        var_188_3.d = zmm2_3[0]
        sub_14077e4a0(&var_158, &var_1a8)
        zmm5 = var_158
        zmm7 = data_143ef9520
        float temp0_483[0x4] = _mm_mul_ps(zmm5, zmm5)
        arg_8 = 0x322bcc77
        float temp0_485[0x4] = _mm_add_ps(temp0_483, _mm_shuffle_ps(temp0_483, temp0_483, 0x4e))
        float temp0_487[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_485, temp0_485, 0x39), temp0_485)
        float temp0_488[0x4] = _mm_rsqrt_ps(temp0_487)
        float temp0_489[0x4] = _mm_mul_ps(temp0_487, zmm7)
        float temp0_494[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_488, temp0_488), temp0_489)), 
                temp0_488), 
            temp0_488)
        float temp0_497[0x4] =
            _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_494, temp0_494), temp0_489))
        zmm0 = arg_8
        float temp0_499[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_487, 2)
        float temp0_501[0x4] = _mm_add_ps(_mm_mul_ps(temp0_497, temp0_494), temp0_494)
        float temp0_502[0x4] = _mm_unpacklo_ps(var_178_3:4.d, 0)
        zmm7 = _mm_and_ps(_mm_mul_ps(temp0_501, zmm5) ^ data_143ef9510, temp0_499) ^ data_143ef9510
        zmm8 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_178_3.d, var_178_3:8.d[0].q), temp0_502[0].q)
    
    zmm12 = data_143ef9460
    int64_t rax_5 = sx.q(*(arg1 + 0x134))
    float temp0_543[0x4] = _mm_add_ps(zmm7, zmm7)
    float temp0_544[0x4] = _mm_shuffle_ps(zmm7, zmm7, 4)
    float temp0_545[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    float temp0_546[0x4] = _mm_mul_ps(zmm7, temp0_543)
    void* r15_2 = arg1 + 0x40 + rax_5 * 0x90
    float temp0_548[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_543, temp0_543, 0x29), temp0_544)
    float temp0_549[0x4] = _mm_shuffle_ps(temp0_543, temp0_543, 0x12)
    float temp0_552[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_546, temp0_546, 0x1a), 
        _mm_shuffle_ps(temp0_546, temp0_546, 1))
    float temp0_554[0x4] = _mm_mul_ps(temp0_549, _mm_shuffle_ps(zmm7, zmm7, 0xff))
    zmm12[0].q = zmm8 u>> 0x40
    float temp0_555[0x4] = _mm_shuffle_ps(zmm8, zmm12, 0xc4)
    float temp0_556[0x4] = _mm_sub_ps(zmm12, temp0_552)
    float var_d8_1[0x4] = temp0_555
    float temp0_557[0x4] = _mm_add_ps(temp0_554, temp0_548)
    float temp0_558[0x4] = _mm_sub_ps(temp0_548, temp0_554)
    float temp0_559[0x4] = _mm_mul_ps(temp0_556, zmm14)
    float temp0_560[0x4] = _mm_mul_ps(temp0_557, zmm14)
    float temp0_561[0x4] = _mm_mul_ps(temp0_545, temp0_558)
    zmm3 = __andps_xmmxud_memxud(temp0_559, data_143ef9470)
    float temp0_565[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_560, zmm3, 0), 
        _mm_shuffle_ps(temp0_561, zmm3, 0x32), 0x82)
    float temp0_566[0x4] = _mm_shuffle_ps(temp0_560, zmm3, 0x31)
    float temp0_567[0x4] = _mm_shuffle_ps(temp0_561, zmm3, 0x10)
    float temp0_568[0x4] = _mm_shuffle_ps(temp0_560, temp0_561, 0x12)
    float temp0_569[0x4] = _mm_shuffle_ps(temp0_567, temp0_566, 0x88)
    float temp0_570[0x4] = _mm_shuffle_ps(temp0_568, zmm3, 0xe8)
    float var_f8_1[0x4] = temp0_569
    float var_108[0x4] = temp0_565
    float var_e8_1[0x4] = temp0_570
    int32_t* rax_6 = sub_1406c8970(&var_158, r15_2 + 0x10, 0)
    int32_t r8 = *(r15_2 + 0x28)
    zmm2 = *(rax_6 + 0x10)
    var_1a8[0].q = r15_2
    var_1a8 = *rax_6
    zmm0 = var_1a8
    int32_t var_144_1 = r8
    zmm1 = zmm2
    zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0].q)
    float var_130[0x4] = zmm0
    int64_t var_110_1 = zmm2.q
    
    while (true)
        i = sx.q(zmm1[3])
        int64_t* r14_1 = var_130[0].q
        
        if (i.d == ((0xffffffff << (r8.b & 0x1f)).q u>> 0x20).d && zmm1[0].q == r15_2 + 0x10
                && r14_1 == r15_2)
            break
        
        int64_t r14_2 = *r14_1
        uint64_t rbx_1 = i * 3
        int64_t rax_8 = (*(*arg2 + 0x40))(arg2, zx.q(*(r14_2 + (rbx_1 << 3) + 8)))
        void* rcx_16 = *(r14_2 + (rbx_1 << 3))
        
        if (rcx_16 != rax_8)
            i = (*(*arg2 + 0x40))(arg2, 0)
            uint64_t i_1 = i
            int32_t r12_3 = 1
            
            while (i != 0)
                int64_t* r14_3 = *(i_1 + 8)
                
                if (r14_3 != 0)
                    int64_t r15_4 = sx.q(*(arg1 + 0x134)) * 0x90
                    void var_138
                    
                    if (*sub_140865c40(arg1 + 0x40 + r15_4, &var_138, i_1) != 0xffffffff)
                        sub_140865c40(arg1 + 0x40 + r15_4, &arg_8, i_1)
                        int64_t rax_14 = sx.q(arg_8)
                        void* const rcx_25
                        
                        if (rax_14.d == 0xffffffff)
                            rcx_25 = nullptr
                        else
                            rcx_25 = *(r15_4 + arg1 + 0x40) + rax_14 * 0x18
                        
                        if (*(rcx_25 + 8) s>= 0)
                            (*(*r14_3 + 0x138))(r14_3, &var_108)
                
                i = (*(*arg2 + 0x40))(arg2, zx.q(r12_3))
                r12_3 += 1
                i_1 = i
            
            break
        
        int64_t* rcx_17 = *(rcx_16 + 8)
        
        if (rcx_17 != 0)
            (*(*rcx_17 + 0x138))(rcx_17, &var_108)
            *(r14_2 + (rbx_1 << 3) + 8) = 0xffffffff
        
        zmm1[2] &= not.d(var_130[3])
        sub_14059bdd0(&var_130[2])

return i
