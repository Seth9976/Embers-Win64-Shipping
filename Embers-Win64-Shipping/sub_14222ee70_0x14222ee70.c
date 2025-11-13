// 函数: sub_14222ee70
// 地址: 0x14222ee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg3[2]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_188 = zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float var_184 = temp0[0]
float var_180 = temp0_1[0]
void** var_118
sub_142230c80(arg1, &var_118, &var_188, &data_143dbb0c0)
float var_178[0x4]
sub_140ade170(arg1 + 0x3c, &var_178)
uint128_t zmm4 = *arg3
float zmm2[0x4] = *(arg1 + 0x34)
float zmm3[0x4] = zmm4
float zmm13[0x4] = data_14399f668
float zmm14[0x4] = arg3[2]
float zmm15[0x4] = data_143f51400
float zmm5[0x4] = var_178
float temp0_2[0x4] = _mm_unpacklo_ps(*(arg1 + 0x30), (*(arg1 + 0x38)).q)
uint128_t zmm0_1 = data_14399f670
float temp0_3[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_4[0x4] = _mm_unpacklo_ps(zmm13, zmm0_1.q)
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_2, temp0_3[0].q)
float temp0_7[0x4] = _mm_unpacklo_ps(temp0_4, _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
zmm2 = zmm4
float zmm1_1[0x4]
float zmm6[0x4]
uint128_t zmm7_1
float zmm9[0x4]
float zmm10_1[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(temp0_7, zmm14), zmm15, 1)) == 0)
    float temp0_140[0x4] = _mm_mul_ps(temp0_5, zmm14)
    float temp0_143[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), _mm_shuffle_ps(zmm5, zmm5, 0x1b))
    float temp0_144[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_145[0x4] = _mm_shuffle_ps(zmm3, zmm4, 0xff)
    float temp0_146[0x4] = _mm_shuffle_ps(zmm2, zmm4, 0xd2)
    float temp0_149[0x4] =
        _mm_add_ps(__mulps_xmmps_memps(temp0_143, data_143f513c0), _mm_mul_ps(temp0_145, zmm5))
    float temp0_151[0x4] = _mm_mul_ps(temp0_144, _mm_shuffle_ps(zmm5, zmm5, 0x4e))
    zmm0_1 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_154[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
    float temp0_155[0x4] = __mulps_xmmps_memps(temp0_151, data_143f513b0)
    zmm0_1 = _mm_mul_ps(zmm0_1, temp0_154)
    float temp0_157[0x4] = _mm_add_ps(temp0_149, temp0_155)
    float temp0_158[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xd2)
    zmm0_1 = __mulps_xmmps_memps(zmm0_1, data_143f513a0)
    float temp0_160[0x4] = _mm_mul_ps(temp0_158, zmm4)
    zmm6 = _mm_add_ps(temp0_157, zmm0_1)
    float temp0_164[0x4] =
        _mm_sub_ps(temp0_160, _mm_mul_ps(_mm_shuffle_ps(temp0_140, temp0_140, 0xc9), temp0_146))
    float temp0_165[0x4] = _mm_add_ps(temp0_164, temp0_164)
    float temp0_166[0x4] = _mm_mul_ps(temp0_145, temp0_165)
    float temp0_168[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0xd2), zmm4)
    zmm0_1 = _mm_shuffle_ps(temp0_165, temp0_165, 0xc9)
    float temp0_170[0x4] = _mm_add_ps(temp0_166, temp0_140)
    zmm9 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_168, _mm_mul_ps(zmm0_1, temp0_146)), temp0_170), arg3[1])
else
    zmm10_1 = data_143f51330
    float temp0_11[0x4] = _mm_add_ps(zmm2, zmm4)
    float zmm8_1[0x4] = arg3[1]
    zmm0_1 = _mm_shuffle_ps(zmm4, zmm4, 4)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_14[0x4] = _mm_mul_ps(zmm3, temp0_11)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0x29), zmm0_1)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x12)
    zmm0_1 = _mm_shuffle_ps(temp0_14, temp0_14, 0x1a)
    float temp0_19[0x4] = _mm_mul_ps(temp0_17, zmm4)
    zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(temp0_14, temp0_14, 1))
    zmm4 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    float temp0_23[0x4] = _mm_add_ps(temp0_19, temp0_16)
    float temp0_24[0x4] = _mm_sub_ps(temp0_16, temp0_19)
    float temp0_25[0x4] = _mm_add_ps(zmm5, zmm5)
    float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm14)
    zmm4 = _mm_mul_ps(zmm4, temp0_24)
    float temp0_28[0x4] = _mm_mul_ps(temp0_25, zmm5)
    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10_1, zmm0_1), zmm14), data_143f51340)
    zmm0_1 = _mm_shuffle_ps(zmm4, zmm1_1, 0x32)
    float temp0_34[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1_1, 0), zmm0_1, 0x82)
    zmm0_1 = _mm_shuffle_ps(temp0_26, zmm1_1, 0x31)
    zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1_1, 0x10), zmm0_1, 0x88)
    float temp0_39[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm4, 0x12), zmm1_1, 0xe8)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x29)
    zmm0_1.q = zmm8_1 u>> 0x40
    float temp0_41[0x4] = _mm_shuffle_ps(zmm8_1, zmm0_1, 0xc4)
    float temp0_43[0x4] = _mm_mul_ps(temp0_40, _mm_shuffle_ps(zmm5, zmm5, 4))
    zmm0_1 = _mm_shuffle_ps(temp0_28, temp0_28, 0x1a)
    float temp0_45[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(temp0_28, temp0_28, 1))
    float temp0_49[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0x12), temp0_45)
    zmm4 = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
    float temp0_51[0x4] = _mm_add_ps(temp0_49, temp0_43)
    float temp0_52[0x4] = _mm_sub_ps(temp0_43, temp0_49)
    float temp0_53[0x4] = _mm_mul_ps(temp0_51, temp0_7)
    zmm4 = _mm_mul_ps(zmm4, temp0_52)
    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10_1, zmm0_1), temp0_7), data_143f51340)
    zmm0_1 = _mm_shuffle_ps(zmm4, zmm1_1, 0x32)
    float temp0_60[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, zmm1_1, 0), zmm0_1, 0x82)
    zmm0_1 = _mm_shuffle_ps(temp0_53, zmm1_1, 0x31)
    float temp0_62[0x4] = _mm_shuffle_ps(zmm4, zmm1_1, 0x10)
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_53, zmm4, 0x12)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_62, zmm0_1, 0x88)
    float temp0_65[0x4] = _mm_shuffle_ps(temp0_63, zmm1_1, 0xe8)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
    float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_39)
    float temp0_69[0x4] = _mm_mul_ps(temp0_66, zmm7_1)
    zmm0_1.q = temp0_5 u>> 0x40
    float temp0_70[0x4] = _mm_shuffle_ps(temp0_5, zmm0_1, 0xc4)
    zmm0_1 = _mm_shuffle_ps(temp0_60, temp0_60, 0)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), temp0_41)
    float temp0_75[0x4] = _mm_add_ps(temp0_69, _mm_mul_ps(zmm0_1, temp0_34))
    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0), temp0_34)
    float temp0_78[0x4] = _mm_add_ps(temp0_75, temp0_68)
    float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_39)
    float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_73)
    float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0x55), zmm7_1)
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xff)
    float var_168[0x4] = temp0_81
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
    float temp0_86[0x4] = _mm_add_ps(temp0_83, zmm0_1)
    float temp0_87[0x4] = _mm_mul_ps(temp0_85, zmm7_1)
    float temp0_88[0x4] = _mm_mul_ps(temp0_84, temp0_41)
    zmm0_1 = _mm_shuffle_ps(temp0_65, temp0_65, 0)
    float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_80)
    zmm0_1 = _mm_mul_ps(zmm0_1, temp0_34)
    float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_39)
    float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_88)
    float temp0_95[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
    float temp0_96[0x4] = _mm_add_ps(temp0_87, zmm0_1)
    float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_41)
    zmm0_1 = _mm_shuffle_ps(temp0_70, temp0_70, 0)
    int96_t var_158_1 = temp0_94[0].12
    float temp0_99[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0x55)
    float temp0_100[0x4] = _mm_add_ps(temp0_96, temp0_93)
    float temp0_101[0x4] = _mm_mul_ps(temp0_99, zmm7_1)
    float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xaa), temp0_39)
    zmm0_1 = _mm_mul_ps(zmm0_1, temp0_34)
    float temp0_105[0x4] = _mm_add_ps(temp0_100, temp0_97)
    float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xff), temp0_41)
    float temp0_108[0x4] = _mm_add_ps(temp0_101, zmm0_1)
    int96_t var_148_1 = temp0_105[0].12
    int96_t var_138_1 = _mm_add_ps(_mm_add_ps(temp0_108, temp0_103), temp0_107)[0].12
    zmm10_1, zmm13, zmm14, zmm15 = sub_1407740e0(&var_168, 0x322bcc77)
    float zmm2_1[0x4] = var_168[0]
    float zmm1_2 = var_168[1]
    zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, _mm_mul_ps(zmm13, zmm14), 2), data_143f513f0 ^ zmm10_1)
    uint32_t zmm0_2[0x4] = var_168[2]
    zmm15 ^= data_143f513f0
    zmm2_1[0] = zmm2_1[0] * zmm15[0]
    zmm1_2 = zmm1_2 * zmm15[0]
    zmm0_2[0] = zmm0_2[0] f* zmm15[0]
    var_168[0] = zmm2_1[0]
    var_168[1] = zmm1_2
    var_168[2] = zmm0_2[0]
    zmm0_2 = var_158_1:8.d
    float temp0_114[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
    zmm1_2 = var_158_1:4.d * temp0_114[0]
    zmm0_2[0] = zmm0_2[0] f* temp0_114[0]
    float zmm3_1 = var_158_1.d * temp0_114[0]
    zmm2_1 = var_148_1.d
    var_158_1:4.d = zmm1_2
    var_158_1:8.d = zmm0_2[0]
    zmm0_2 = var_148_1:8.d
    float temp0_115[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
    zmm1_2 = var_148_1:4.d * temp0_115[0]
    zmm0_2[0] = zmm0_2[0] f* temp0_115[0]
    zmm2_1[0] = zmm2_1[0] * temp0_115[0]
    var_148_1:4.d = zmm1_2
    var_148_1:8.d = zmm0_2[0]
    var_158_1.d = zmm3_1
    var_148_1.d = zmm2_1[0]
    sub_14077e4a0(&var_188, &var_168)
    zmm5 = var_188.o
    zmm6 = data_143f513e0
    float temp0_116[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_118[0x4] = _mm_add_ps(temp0_116, _mm_shuffle_ps(temp0_116, temp0_116, 0x4e))
    zmm4 = _mm_add_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0x39), temp0_118)
    float temp0_121[0x4] = _mm_rsqrt_ps(zmm4)
    float temp0_122[0x4] = _mm_mul_ps(zmm4, zmm6)
    float temp0_127[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_121, temp0_121), temp0_122)), 
            temp0_121), 
        temp0_121)
    float temp0_130[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_127, temp0_127), temp0_122))
    zmm0_1 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
    float temp0_134[0x4] = _mm_add_ps(_mm_mul_ps(temp0_130, temp0_127), temp0_127)
    float temp0_135[0x4] = _mm_unpacklo_ps(var_138_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_134, zmm5) ^ data_143f513d0, zmm0_1) ^ data_143f513d0
    zmm9 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_138_1.d, var_138_1:8.d.q), temp0_135[0].q)

zmm0_1 = (*arg2)[2]
zmm4 = __mulps_xmmps_memps(zmm6, data_143f51410)
zmm5 = *arg2
float temp0_176[0x4] = _mm_unpacklo_ps((*arg2)[1], 0)
float temp0_178[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm0_1.q), temp0_176[0].q)
float temp0_179[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_180[0x4] = _mm_sub_ps(temp0_178, zmm9)
float temp0_181[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
zmm5 = __andps_xmmxud_memxud(temp0_180, data_143f51340)
zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_179)
float temp0_188[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_181), zmm0_1)
float temp0_189[0x4] = _mm_add_ps(temp0_188, temp0_188)
zmm4 = _mm_mul_ps(zmm4, temp0_189)
zmm0_1 = _mm_shuffle_ps(temp0_189, temp0_189, 0xc9)
zmm7_1 = _mm_shuffle_ps(temp0_189, temp0_189, 0xd2)
int32_t var_c8
zmm2 = var_c8
zmm0_1 = _mm_mul_ps(zmm0_1, temp0_179)
zmm4 = _mm_add_ps(zmm4, zmm5)
int32_t var_d0
zmm1_1 = var_d0
zmm7_1 = _mm_mul_ps(zmm7_1, temp0_181)
zmm2[0] = zmm2[0] * 0.5f
zmm7_1 = _mm_sub_ps(zmm7_1, zmm0_1)
zmm1_1[0] = zmm1_1[0] * 0.5f
float zmm12[0x4] = zmm2 ^ 0x80000000
int32_t var_cc
zmm0_1.d = var_cc.d f* 0.5f
zmm7_1 = _mm_add_ps(zmm7_1, zmm4)
var_178 = zmm7_1
zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)

if (not(zmm7_1.d f< zmm12[0]))
    zmm12 = _mm_min_ss(zmm7_1[0], zmm2[0])

float zmm11_1[0x4] = var_178[1]
zmm5 = zmm0_1 ^ 0x80000000

if (not(zmm11_1[0] < zmm5[0]))
    zmm5 = _mm_min_ss(zmm11_1[0], zmm0_1.d)

zmm10_1 = var_178[0]
zmm4 = zmm1_1 ^ 0x80000000

if (not(zmm10_1[0] f< zmm4.d))
    zmm4 = _mm_min_ss(zmm10_1.d, zmm1_1[0])

zmm7_1.d = zmm7_1.d f- zmm12[0]
zmm10_1[0] = zmm10_1[0] f- zmm4.d
float temp0_202[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
zmm11_1[0] = zmm11_1[0] - zmm5[0]
float temp0_203[0x4] = _mm_unpacklo_ps(zmm5, 0)
float temp0_205[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm12[0].q), temp0_203[0].q)
float temp0_206[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
float temp0_207[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0xd2)
zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_205, temp0_205, 0xc9), temp0_202)
float temp0_210[0x4] = _mm_mul_ps(temp0_207, temp0_206)
float temp0_211[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
float temp0_212[0x4] = _mm_sub_ps(temp0_210, zmm0_1)
float temp0_213[0x4] = _mm_add_ps(temp0_212, temp0_212)
zmm0_1 = _mm_shuffle_ps(temp0_213, temp0_213, 0xd2)
float temp0_215[0x4] = _mm_mul_ps(temp0_206, zmm0_1)
uint128_t var_128 = zmm0_1
float temp0_216[0x4] = _mm_shuffle_ps(temp0_213, temp0_213, 0xc9)
zmm0_1 = _mm_mul_ps(temp0_202, temp0_216)
var_178 = temp0_216
float temp0_218[0x4] = _mm_mul_ps(temp0_213, temp0_211)
float temp0_219[0x4] = _mm_sub_ps(temp0_215, zmm0_1)
float temp0_220[0x4] = _mm_add_ps(temp0_218, temp0_205)
float temp0_222[0x4] = _mm_add_ps(_mm_add_ps(temp0_219, temp0_220), zmm9)
int32_t var_180_1 = _mm_shuffle_ps(temp0_222, temp0_222, 0xaa).d
zmm1_1 = zmm7_1
*arg4 = (_mm_unpacklo_ps(temp0_222, _mm_shuffle_ps(temp0_222, temp0_222, 0x55)[0].q)).q
zmm11_1[0] = zmm11_1[0] * zmm11_1[0]
arg4[1].d = var_180_1
zmm0_1.d = zmm10_1.d f* zmm10_1[0]
zmm1_1[0] = zmm1_1[0] f* zmm7_1.d
zmm11_1[0] = zmm11_1[0] f+ zmm0_1.d
zmm11_1[0] = zmm11_1[0] + zmm1_1[0]
float (* rdx_1)[0x4]
rdx_1.b = _mm_sqrt_ss(zx.o(0)[0], zmm11_1[0])[0] > 9.99999994e-09f
int32_t var_180_2

if (rdx_1.b == 0)
    var_188.q = data_143dbb1f8.q
    var_180_2 = data_143dbb200
else
    zmm0_1 = zmm11_1
    zmm3 = zmm0_1
    float temp0_227[0x4] = _mm_rsqrt_ss(zmm0_1[0], zmm3[0])
    zmm2 = 0x3f000000
    zmm3[0] = zmm3[0] * 0.5f
    zmm0_1.d = temp0_227.d f* temp0_227[0]
    zmm3[0] = zmm3[0] f* zmm0_1.d
    zmm2[0] = 0.5f - zmm3[0]
    zmm0_1.d = temp0_227.d f* zmm2[0]
    temp0_227[0] = temp0_227[0] f+ zmm0_1.d
    temp0_227[0] = temp0_227[0] * temp0_227[0]
    zmm3[0] = zmm3[0] * temp0_227[0]
    zmm4.d = 0.5f - zmm3[0]
    zmm0_1.d = temp0_227.d f* zmm4.d
    temp0_227[0] = temp0_227[0] f+ zmm0_1.d
    zmm10_1[0] = zmm10_1[0] * temp0_227[0]
    zmm11_1[0] = zmm11_1[0] * temp0_227[0]
    zmm7_1.d = zmm7_1.d f* temp0_227[0]
    var_188 = zmm10_1[0]
    float var_184_1 = zmm11_1[0]
    var_180_2 = zmm7_1.d

zmm0_1 = __mulps_xmmps_memps(temp0_202, var_178)
float temp0_229[0x4] = __mulps_xmmps_memps(temp0_206, var_128)
zmm4 = zx.o(var_188.q)
float temp0_232[0x4] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_229, zmm0_1), temp0_220), zmm9)
zmm0_1 = _mm_shuffle_ps(temp0_232, temp0_232, 0xaa)
float temp0_234[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x55)
var_178[2] = zmm0_1.d
float rax_4 = var_178[2]
*arg4 = (_mm_unpacklo_ps(temp0_232, temp0_234[0].q)).q
float temp0_236[0x4] = _mm_unpacklo_ps(zmm4, var_180_2[0].q)
zmm0_1 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
arg4[1].d = rax_4
float temp0_239[0x4] = _mm_unpacklo_ps(temp0_236, _mm_unpacklo_ps(zmm0_1, 0)[0].q)
float temp0_244[0x4] = _mm_sub_ps(
    _mm_mul_ps(_mm_shuffle_ps(temp0_239, temp0_239, 0xd2), temp0_206), 
    _mm_mul_ps(_mm_shuffle_ps(temp0_239, temp0_239, 0xc9), temp0_202))
float temp0_245[0x4] = _mm_add_ps(temp0_244, temp0_244)
float temp0_246[0x4] = _mm_mul_ps(temp0_211, temp0_245)
float temp0_247[0x4] = _mm_shuffle_ps(temp0_245, temp0_245, 0xd2)
zmm0_1 = _mm_shuffle_ps(temp0_245, temp0_245, 0xc9)
float temp0_249[0x4] = _mm_mul_ps(temp0_247, temp0_206)
zmm0_1 = _mm_mul_ps(zmm0_1, temp0_202)
float temp0_251[0x4] = _mm_add_ps(temp0_246, temp0_239)
float temp0_253[0x4] = _mm_add_ps(_mm_sub_ps(temp0_249, zmm0_1), temp0_251)
var_178[2] = _mm_shuffle_ps(temp0_253, temp0_253, 0xaa)[0]
float result = var_178[2]
*arg5 = (_mm_unpacklo_ps(temp0_253, _mm_shuffle_ps(temp0_253, temp0_253, 0x55)[0].q)).q
arg5[1].d = result
return result
