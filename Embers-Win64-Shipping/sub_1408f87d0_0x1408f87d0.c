// 函数: sub_1408f87d0
// 地址: 0x1408f87d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm2[0x4] = data_143cec740
int32_t r15 = 0
float zmm1[0x4] = zmm2
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm2, data_143cec750)
float zmm15[0x4] = zx.o(0)
int128_t* result = arg2
zmm1[0].q = zx.o(0) u>> 0x40
int32_t i = 0
*arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg2[1] = zx.o(0)
arg2[2] = temp0

if (*(arg1 + 0x298) s<= 0)
    return result

float (* rdi_1)[0x4] = nullptr
float zmm7[0x4]
float var_38_1[0x4] = zmm7
float zmm8[0x4]
float var_48_1[0x4] = zmm8
float zmm9[0x4]
float var_58_1[0x4] = zmm9
float zmm10[0x4]
float var_68_1[0x4] = zmm10
float zmm11[0x4]
float var_78_1[0x4] = zmm11
float zmm12[0x4]
float var_88_1[0x4] = zmm12
float zmm13[0x4]
float var_98_1[0x4] = zmm13
uint32_t zmm14[0x4]
uint32_t var_a8_1[0x4] = zmm14
int32_t var_148
void var_f8
float var_e8[0x4]
char arg_8
float zmm0_1[0x4]
float zmm1_1[0x4]
float zmm6_1[0x4]

do
    int64_t rcx_2 = (sx.q(i) << 4) + *(arg1 + 0x290)
    arg_8 = 0
    
    if (sub_1408f5070(rcx_2, &var_148, &var_f8, &arg_8) != 0)
        float var_c8[0x4]
        sub_140ade170(&var_f8, &var_c8)
        zmm6_1 = var_148
        float zmm5_1[0x4] = data_14399f668
        float zmm3[0x4] = data_143cec7e0
        zmm11 = var_c8
        int64_t rcx_4 = *(arg1 + 0x2a0)
        zmm14 = data_143cec750
        int32_t var_144
        float temp0_2[0x4] = _mm_unpacklo_ps(var_144, 0)
        int32_t var_140
        float temp0_3[0x4] = _mm_unpacklo_ps(zmm6_1, var_140[0].q)
        zmm0_1 = data_14399f670
        float temp0_4[0x4] = _mm_unpacklo_ps(temp0_3, temp0_2[0].q)
        float temp0_5[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
        float temp0_7[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, zmm0_1[0].q), temp0_5[0].q)
        float zmm2_1[0x4] = data_143cec7f0
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, _mm_and_ps(temp0_7, zmm2_1), 1)) == 0)
            zmm11 = data_143dbb0c0
            zmm12 = data_143dbb0d0
            zmm5_1 = data_143dbb0e0
        else
            zmm11 = __mulps_xmmps_memps(zmm11, data_143cec7d0)
            zmm0_1 = data_143cec740
            zmm0_1[0].q = temp0_7 u>> 0x40
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_7, zmm0_1, 0xc4)
            float temp0_13[0x4] = _mm_rcp_ps(temp0_12)
            float temp0_14[0x4] = _mm_mul_ps(temp0_13, temp0_13)
            float temp0_17[0x4] =
                _mm_sub_ps(_mm_add_ps(temp0_13, temp0_13), _mm_mul_ps(temp0_14, temp0_12))
            float temp0_18[0x4] = _mm_mul_ps(temp0_17, temp0_17)
            float temp0_19[0x4] = _mm_add_ps(temp0_17, temp0_17)
            float temp0_20[0x4] = _mm_mul_ps(temp0_18, temp0_12)
            float temp0_22[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0_12, zmm2_1), zmm3, 2)
            float temp0_23[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xd2)
            float temp0_24[0x4] = _mm_sub_ps(temp0_19, temp0_20)
            zmm5_1 = _mm_and_ps(temp0_22, zmm15 ^ temp0_24) ^ temp0_24
            float temp0_26[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
            zmm5_1 = _mm_and_ps(zmm5_1, zmm14)
            float temp0_28[0x4] = _mm_mul_ps(temp0_4, zmm5_1)
            float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), temp0_23)
            float temp0_33[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_26), temp0_30)
            float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
            float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xd2), temp0_26)
            float temp0_37[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
            float temp0_38[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
            float temp0_39[0x4] = _mm_mul_ps(temp0_37, temp0_34)
            float temp0_40[0x4] = _mm_mul_ps(temp0_38, temp0_23)
            float temp0_41[0x4] = _mm_add_ps(temp0_39, temp0_28)
            zmm12 = _mm_and_ps(
                _mm_sub_ps(zmm15, _mm_add_ps(_mm_sub_ps(temp0_36, temp0_40), temp0_41)), zmm14)
        
        zmm1_1 = data_143cec7c0
        zmm7 = *(rdi_1 + rcx_4 + 0x20)
        zmm6_1 = *(rdi_1 + rcx_4)
        float temp0_46[0x4] = _mm_min_ps(zmm5_1, zmm7)
        var_e8 = zmm1_1
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_46, zmm1_1, 1)) == 0)
            float temp0_178[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
            float temp0_181[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0), _mm_shuffle_ps(zmm11, zmm11, 0x1b))
            float temp0_182[0x4] = _mm_mul_ps(zmm7, zmm12)
            float temp0_183[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
            float temp0_184[0x4] = __mulps_xmmps_memps(temp0_181, data_143cec780)
            float temp0_185[0x4] = _mm_mul_ps(temp0_183, zmm11)
            float temp0_186[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0xd2)
            zmm13 = _mm_mul_ps(zmm7, zmm5_1)
            float temp0_188[0x4] = _mm_add_ps(temp0_184, temp0_185)
            float temp0_190[0x4] = _mm_mul_ps(temp0_178, _mm_shuffle_ps(zmm11, zmm11, 0x4e))
            float temp0_193[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), _mm_shuffle_ps(zmm11, zmm11, 0xb1))
            float temp0_194[0x4] = __mulps_xmmps_memps(temp0_190, data_143cec770)
            float temp0_195[0x4] = __mulps_xmmps_memps(temp0_193, data_143cec760)
            float temp0_196[0x4] = _mm_add_ps(temp0_188, temp0_194)
            float temp0_197[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
            float temp0_198[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
            float temp0_199[0x4] = _mm_mul_ps(temp0_186, temp0_198)
            zmm8 = _mm_add_ps(temp0_196, temp0_195)
            float temp0_203[0x4] = _mm_sub_ps(temp0_199, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xc9), temp0_197))
            float temp0_204[0x4] = _mm_add_ps(temp0_203, temp0_203)
            float temp0_205[0x4] = _mm_shuffle_ps(temp0_204, temp0_204, 0xd2)
            float temp0_206[0x4] = _mm_shuffle_ps(temp0_204, temp0_204, 0xc9)
            float temp0_207[0x4] = _mm_mul_ps(temp0_205, temp0_198)
            float temp0_208[0x4] = _mm_mul_ps(temp0_206, temp0_197)
            float temp0_209[0x4] = _mm_mul_ps(temp0_204, temp0_183)
            zmm7 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_207, temp0_208), _mm_add_ps(temp0_209, temp0_182)), 
                *(rdi_1 + rcx_4 + 0x10))
        else
            zmm8 = *(rdi_1 + rcx_4 + 0x10)
            float temp0_49[0x4] = _mm_add_ps(zmm6_1, zmm6_1)
            _mm_mul_ps(zmm7, zmm5_1)
            float temp0_51[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
            float temp0_52[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_54[0x4] = _mm_mul_ps(temp0_51, _mm_shuffle_ps(temp0_49, temp0_49, 0x29))
            float temp0_55[0x4] = _mm_mul_ps(temp0_49, zmm6_1)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0x12)
            float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xff), temp0_56)
            zmm1_1 = data_143cec740
            float temp0_61[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0x1a), 
                _mm_shuffle_ps(temp0_55, temp0_55, 1))
            float temp0_62[0x4] = _mm_add_ps(temp0_58, temp0_54)
            float temp0_63[0x4] = _mm_sub_ps(temp0_54, temp0_58)
            float temp0_64[0x4] = _mm_sub_ps(zmm1_1, temp0_61)
            float temp0_65[0x4] = _mm_mul_ps(temp0_62, zmm7)
            float temp0_66[0x4] = _mm_mul_ps(temp0_52, temp0_63)
            float temp0_67[0x4] = _mm_mul_ps(temp0_64, zmm7)
            float temp0_68[0x4] = _mm_shuffle_ps(zmm11, zmm11, 4)
            zmm1_1 = _mm_and_ps(temp0_67, zmm14)
            float temp0_70[0x4] = _mm_shuffle_ps(temp0_66, zmm1_1, 0x32)
            float temp0_72[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_65, zmm1_1, 0), temp0_70, 0x82)
            float temp0_73[0x4] = _mm_shuffle_ps(temp0_65, zmm1_1, 0x31)
            float temp0_75[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_66, zmm1_1, 0x10), temp0_73, 0x88)
            zmm0_1 = data_143cec740
            float temp0_77[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_65, temp0_66, 0x12), zmm1_1, 0xe8)
            float temp0_78[0x4] = _mm_add_ps(zmm11, zmm11)
            float temp0_79[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            zmm0_1[0].q = zmm8 u>> 0x40
            float temp0_80[0x4] = _mm_shuffle_ps(zmm8, zmm0_1, 0xc4)
            float temp0_81[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x29)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, zmm11)
            float temp0_83[0x4] = _mm_mul_ps(temp0_68, temp0_81)
            float temp0_84[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x12)
            float temp0_85[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
            float temp0_86[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0x1a)
            float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_84)
            float temp0_89[0x4] = _mm_add_ps(temp0_86, _mm_shuffle_ps(temp0_82, temp0_82, 1))
            float temp0_90[0x4] = _mm_add_ps(temp0_87, temp0_83)
            float temp0_91[0x4] = _mm_sub_ps(temp0_83, temp0_87)
            zmm11 = data_143cec740
            float temp0_92[0x4] = _mm_sub_ps(zmm11, temp0_89)
            float temp0_93[0x4] = _mm_mul_ps(temp0_90, zmm5_1)
            float temp0_94[0x4] = _mm_mul_ps(temp0_79, temp0_91)
            zmm1_1 = _mm_and_ps(_mm_mul_ps(temp0_92, zmm5_1), zmm14)
            float temp0_97[0x4] = _mm_shuffle_ps(temp0_94, zmm1_1, 0x32)
            float temp0_99[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_93, zmm1_1, 0), temp0_97, 0x82)
            float temp0_100[0x4] = _mm_shuffle_ps(temp0_93, zmm1_1, 0x31)
            float temp0_102[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_94, zmm1_1, 0x10), temp0_100, 0x88)
            float temp0_103[0x4] = _mm_shuffle_ps(temp0_93, temp0_94, 0x12)
            float temp0_104[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0x55)
            float temp0_105[0x4] = _mm_shuffle_ps(temp0_103, zmm1_1, 0xe8)
            float temp0_106[0x4] = _mm_mul_ps(temp0_104, temp0_75)
            float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0xaa), temp0_77)
            zmm11[0].q = zmm12 u>> 0x40
            float temp0_109[0x4] = _mm_shuffle_ps(zmm12, zmm11, 0xc4)
            float temp0_110[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0)
            float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0xff), temp0_80)
            float temp0_114[0x4] = _mm_add_ps(temp0_106, _mm_mul_ps(temp0_110, temp0_72))
            float temp0_116[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0), temp0_72)
            float temp0_117[0x4] = _mm_add_ps(temp0_114, temp0_108)
            float temp0_119[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xaa), temp0_77)
            float temp0_120[0x4] = _mm_add_ps(temp0_117, temp0_112)
            float temp0_122[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0x55), temp0_75)
            float temp0_123[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0xff)
            float var_138[0x4] = temp0_120
            float temp0_124[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0x55)
            float temp0_125[0x4] = _mm_add_ps(temp0_122, temp0_116)
            float temp0_126[0x4] = _mm_mul_ps(temp0_124, temp0_75)
            float temp0_127[0x4] = _mm_mul_ps(temp0_123, temp0_80)
            float temp0_128[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0)
            float temp0_129[0x4] = _mm_add_ps(temp0_125, temp0_119)
            float temp0_130[0x4] = _mm_mul_ps(temp0_128, temp0_72)
            float temp0_132[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_105, temp0_105, 0xaa), temp0_77)
            float temp0_133[0x4] = _mm_add_ps(temp0_129, temp0_127)
            float temp0_134[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0xff)
            float temp0_135[0x4] = _mm_add_ps(temp0_126, temp0_130)
            float temp0_136[0x4] = _mm_mul_ps(temp0_134, temp0_80)
            float temp0_137[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0)
            int96_t var_128_1 = temp0_133[0].12
            float temp0_138[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0x55)
            float temp0_139[0x4] = _mm_add_ps(temp0_135, temp0_132)
            float temp0_140[0x4] = _mm_mul_ps(temp0_138, temp0_75)
            float temp0_142[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_109, temp0_109, 0xaa), temp0_77)
            float temp0_143[0x4] = _mm_mul_ps(temp0_137, temp0_72)
            float temp0_144[0x4] = _mm_add_ps(temp0_139, temp0_136)
            float temp0_146[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_109, temp0_109, 0xff), temp0_80)
            float temp0_147[0x4] = _mm_add_ps(temp0_140, temp0_143)
            int96_t var_118_1 = temp0_144[0].12
            int96_t var_108_1 = _mm_add_ps(_mm_add_ps(temp0_147, temp0_142), temp0_146)[0].12
            zmm11, zmm13, zmm15 = sub_1407740e0(&var_138, 0x322bcc77)
            float zmm2_2[0x4] = var_138[0]
            float zmm1_2 = var_138[1]
            float zmm4_2[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_e8, zmm13, 2), data_143cec7b0 ^ zmm11)
            uint32_t zmm0_2[0x4] = var_138[2]
            zmm4_2 ^= data_143cec7b0
            zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
            zmm1_2 = zmm1_2 * zmm4_2[0]
            var_138[0] = zmm2_2[0]
            zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
            var_138[1] = zmm1_2
            float temp0_152[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
            zmm1_2 = var_128_1:4.d * temp0_152[0]
            var_138[2] = zmm0_2[0]
            zmm0_2 = var_128_1:8.d
            zmm0_2[0] = zmm0_2[0] f* temp0_152[0]
            float zmm3_1 = var_128_1.d * temp0_152[0]
            zmm2_2 = var_118_1.d
            float temp0_153[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
            var_128_1:4.d = zmm1_2
            var_128_1:8.d = zmm0_2[0]
            zmm0_2 = var_118_1:8.d
            zmm1_2 = var_118_1:4.d * temp0_153[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_153[0]
            zmm2_2[0] = zmm2_2[0] * temp0_153[0]
            var_118_1:4.d = zmm1_2
            var_118_1:8.d = zmm0_2[0]
            var_128_1.d = zmm3_1
            var_118_1.d = zmm2_2[0]
            uint32_t var_d8[0x4]
            sub_14077e4a0(&var_d8, &var_138)
            float zmm5_2[0x4] = var_d8
            zmm8 = data_143cec7a0
            float temp0_154[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            arg_8.d = 0x322bcc77
            float temp0_156[0x4] = _mm_add_ps(temp0_154, _mm_shuffle_ps(temp0_154, temp0_154, 0x4e))
            float temp0_158[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_156, temp0_156, 0x39), temp0_156)
            float temp0_159[0x4] = _mm_rsqrt_ps(temp0_158)
            float temp0_160[0x4] = _mm_mul_ps(temp0_158, zmm8)
            float temp0_165[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_159, temp0_159), temp0_160)), 
                    temp0_159), 
                temp0_159)
            float temp0_168[0x4] =
                _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_165, temp0_165), temp0_160))
            zmm0_1 = arg_8.d
            float temp0_170[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_1, zmm0_1, 0), temp0_158, 2)
            float temp0_172[0x4] = _mm_add_ps(_mm_mul_ps(temp0_168, temp0_165), temp0_165)
            float temp0_173[0x4] = _mm_unpacklo_ps(var_108_1:4.d, 0)
            zmm8 = _mm_and_ps(_mm_mul_ps(temp0_172, zmm5_2) ^ data_143cec790, temp0_170)
                ^ data_143cec790
            zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_108_1.d, var_108_1:8.d[0].q), temp0_173[0].q)
            var_d8 = zmm8
        
        r15 += 1
        zmm1_1 = result[2]
        float temp0_214[0x4] = _mm_add_ps(*result, zmm8)
        float temp0_215[0x4] = __addps_xmmps_memps(zmm7, result[1])
        float temp0_216[0x4] = _mm_add_ps(zmm1_1, zmm13)
        *result = temp0_214
        result[1] = temp0_215
        result[2] = temp0_216
    
    i += 1
    rdi_1 = &rdi_1[3]
while (i s< *(arg1 + 0x298))

if (r15 s> 0)
    zmm1_1 = result[1]
    zmm6_1 = 0x3f800000
    zmm6_1[0] = 1f / _mm_cvtepi32_ps(zx.o(r15))[0]
    float temp0_218[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    zmm6_1[0] = zmm6_1[0] * temp0_218[0]
    zmm6_1[0] = zmm6_1[0] * zmm1_1[0]
    float temp0_219[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
    zmm6_1[0] = zmm6_1[0] * temp0_219[0]
    float temp0_220[0x4] = _mm_unpacklo_ps(zmm6_1, 0)
    float temp0_221[0x4] = _mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)
    zmm0_1 = *result
    result[1] = _mm_unpacklo_ps(temp0_221, temp0_220[0].q)
    var_e8 = zmm0_1
    float var_f4
    float zmm6_2 = sub_140adf5d0(&var_e8, &var_f8) * var_f4
    var_148 = 0
    int32_t var_140_1 = 0
    float var_144_1 = zmm6_2
    float (* rax_4)[0x4] = sub_140ade170(&var_148, &var_e8)
    float zmm5_3[0x4] = data_143cec7a0
    arg_8.d = 0x322bcc77
    float zmm6_3[0x4] = *rax_4
    float temp0_223[0x4] = _mm_mul_ps(zmm6_3, zmm6_3)
    float temp0_225[0x4] = _mm_add_ps(temp0_223, _mm_shuffle_ps(temp0_223, temp0_223, 0x4e))
    float temp0_227[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0x39), temp0_225)
    float temp0_228[0x4] = _mm_rsqrt_ps(temp0_227)
    float temp0_229[0x4] = _mm_mul_ps(temp0_227, zmm5_3)
    float temp0_234[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(temp0_228, temp0_228), temp0_229)), 
            temp0_228), 
        temp0_228)
    float temp0_237[0x4] =
        _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(temp0_234, temp0_234), temp0_229))
    float zmm0_3[0x4] = arg_8.d
    float temp0_239[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_3, zmm0_3, 0), temp0_227, 2)
    *result = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_237, temp0_234), temp0_234), zmm6_3)
            ^ data_143cec790, 
        temp0_239) ^ data_143cec790

return result
