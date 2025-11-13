// 函数: sub_141a97790
// 地址: 0x141a97790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
DBIQueryItsmForTi(arg1)
(*(*arg1 + 0x108))(arg1, *arg2 + 0x4a0)
sub_141e170b0(&arg1[2], arg2)
void* rcx_2 = *arg2
void* rax_3 = *(rcx_2 + 0xb8)
int32_t rcx_3 = arg1[0x1a].d
uint32_t zmm6[0x4] = *(rax_3 + 0x1e0)
*(rax_3 + 0x1c0)
float var_188[0x4] = *(rax_3 + 0x1d0)
uint32_t var_168[0x4] = zmm6
int32_t var_1d8

if (rcx_3 s>= 0)
    var_1d8 = *(arg1 + 0xd4)
else
    int32_t rcx_4 = rcx_3 * 2
    
    if ((rcx_4 & 0xfffffffe) == 0xfffffffe)
        var_1d8 = 0xffffffff
    else
        var_1d8 = *(*(rcx_2 + 0x520) + (sx.q(rcx_4) s>> 1 << 2))

float var_e8[0x4]
int128_t* rax_8
float zmm6_1[0x4]
float zmm9_1[0x4]
float zmm14_1[0x4]
rax_8, zmm6_1, zmm9_1, zmm14_1 = sub_141dea310(&var_e8, &var_1d8, rcx_2 + 0x4a0)
float temp0[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xff)
float zmm7[0x4] = rax_8[2]
uint32_t var_178[0x4]
float var_158[0x4]
float var_128[0x4]
float zmm5[0x4]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm7, zmm6_1), data_143f2b8d0, 1)) == 0)
    float zmm2[0x4] = *rax_8
    zmm5 = rax_8[1]
    float temp0_132[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
    float temp0_134[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14_1, zmm14_1, 0), temp0_132)
    float temp0_135[0x4] = _mm_mul_ps(temp0, zmm2)
    float temp0_136[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
    float temp0_137[0x4] = __mulps_xmmps_memps(temp0_134, data_143f2b850)
    float temp0_138[0x4] = _mm_mul_ps(zmm5, zmm6_1)
    float temp0_139[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xd2)
    float temp0_140[0x4] = _mm_add_ps(temp0_137, temp0_135)
    float temp0_141[0x4] = _mm_mul_ps(zmm7, zmm6_1)
    float temp0_143[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_146[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_147[0x4] = __mulps_xmmps_memps(temp0_143, data_143f2b840)
    float var_138_1[0x4] = temp0_141
    float temp0_148[0x4] = __mulps_xmmps_memps(temp0_146, data_143f2b830)
    float temp0_149[0x4] = _mm_add_ps(temp0_140, temp0_147)
    float temp0_150[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xc9)
    float temp0_151[0x4] = _mm_add_ps(temp0_149, temp0_148)
    float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xc9), temp0_139)
    var_158 = temp0_151
    float temp0_156[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xd2), temp0_150), temp0_153)
    float temp0_157[0x4] = _mm_add_ps(temp0_156, temp0_156)
    float temp0_159[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_157, temp0_157, 0xd2), temp0_150)
    float temp0_160[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xc9)
    float temp0_161[0x4] = _mm_mul_ps(temp0, temp0_157)
    float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_139)
    float temp0_163[0x4] = _mm_add_ps(temp0_161, temp0_138)
    float var_148_1[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_159, temp0_162), temp0_163), zmm9_1)
else
    float zmm11_1[0x4] = data_143f2b810
    _mm_mul_ps(zmm7, zmm6_1)
    float temp0_5[0x4] = _mm_add_ps(zmm14_1, zmm14_1)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 4)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
    float temp0_8[0x4] = _mm_mul_ps(zmm14_1, temp0_5)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x29), temp0_6)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x12)
    float temp0_14[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x1a), _mm_shuffle_ps(temp0_8, temp0_8, 1))
    float temp0_15[0x4] = _mm_mul_ps(temp0_11, temp0)
    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_10)
    float temp0_17[0x4] = _mm_sub_ps(temp0_10, temp0_15)
    float temp0_18[0x4] = _mm_mul_ps(temp0_16, zmm6_1)
    float temp0_19[0x4] = _mm_mul_ps(temp0_7, temp0_17)
    float zmm1[0x4] =
        __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11_1, temp0_14), zmm6_1), data_143f2b820)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, zmm1, 0x32)
    float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm1, 0), temp0_23, 0x82)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_18, zmm1, 0x31)
    float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm1, 0x10), temp0_26, 0x88)
    float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, temp0_19, 0x12), zmm1, 0xe8)
    zmm1 = *rax_8
    zmm11_1[0].q = zmm9_1 u>> 0x40
    float temp0_31[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_32[0x4] = _mm_shuffle_ps(zmm9_1, zmm11_1, 0xc4)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_35[0x4] = _mm_mul_ps(zmm1, temp0_31)
    float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x29), temp0_33)
    float zmm0[0x4] = rax_8[2]
    float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x12), temp0_34)
    float temp0_40[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
    float temp0_41[0x4] = _mm_add_ps(temp0_39, temp0_37)
    float temp0_42[0x4] = _mm_sub_ps(temp0_37, temp0_39)
    float temp0_43[0x4] = _mm_mul_ps(temp0_41, zmm0)
    float temp0_46[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x1a), _mm_shuffle_ps(temp0_35, temp0_35, 1))
    float temp0_47[0x4] = _mm_mul_ps(temp0_40, temp0_42)
    zmm1 = __andps_xmmxud_memxud(__mulps_xmmps_memps(_mm_sub_ps(zmm11_1, temp0_46), rax_8[2]), 
        data_143f2b820)
    float temp0_51[0x4] = _mm_shuffle_ps(temp0_47, zmm1, 0x32)
    float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_43, zmm1, 0), temp0_51, 0x82)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_43, zmm1, 0x31)
    float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0x10), temp0_54, 0x88)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_43, temp0_47, 0x12)
    zmm5 = rax_8[1]
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, zmm1, 0xe8)
    float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), temp0_30)
    float temp0_62[0x4] = _mm_mul_ps(temp0_58, temp0_28)
    zmm11_1[0].q = zmm5 u>> 0x40
    float temp0_63[0x4] = _mm_shuffle_ps(zmm5, zmm11_1, 0xc4)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0)
    float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xff), temp0_32)
    float temp0_68[0x4] = _mm_add_ps(temp0_62, _mm_mul_ps(temp0_64, temp0_25))
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0), temp0_25)
    float temp0_71[0x4] = _mm_add_ps(temp0_68, temp0_61)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_30)
    float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_66)
    float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0x55), temp0_28)
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xff)
    var_128 = temp0_74
    float temp0_78[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
    float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_70)
    float temp0_80[0x4] = _mm_mul_ps(temp0_78, temp0_28)
    float temp0_81[0x4] = _mm_mul_ps(temp0_77, temp0_32)
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0)
    float temp0_83[0x4] = _mm_add_ps(temp0_79, temp0_73)
    float temp0_84[0x4] = _mm_mul_ps(temp0_82, temp0_25)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_30)
    float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_81)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
    float temp0_89[0x4] = _mm_add_ps(temp0_80, temp0_84)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_32)
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
    int96_t var_118_1 = temp0_87[0].12
    float temp0_92[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
    float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_86)
    float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_28)
    float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_30)
    float temp0_97[0x4] = _mm_mul_ps(temp0_91, temp0_25)
    float temp0_98[0x4] = _mm_add_ps(temp0_93, temp0_90)
    float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xff), temp0_32)
    float temp0_101[0x4] = _mm_add_ps(temp0_94, temp0_97)
    int96_t var_108_1 = temp0_98[0].12
    int96_t var_f8_1 = _mm_add_ps(_mm_add_ps(temp0_101, temp0_96), temp0_100)[0].12
    int512_t zmm9_2
    int128_t zmm11_2
    float zmm13_2[0x4]
    zmm9_2, zmm11_2, zmm13_2 = sub_1407740e0(&var_128, 0x322bcc77)
    float zmm2_1[0x4] = var_128[0]
    float zmm1_1 = var_128[1]
    float zmm4_1[0x4] =
        _mm_and_ps(_mm_cmpeq_ps(data_143f2b8d0, zmm13_2, 2), data_143f2b8c0 ^ zmm11_2)
    uint32_t zmm0_1[0x4] = var_128[2]
    zmm4_1 ^= data_143f2b8c0
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    zmm1_1 = zmm1_1 * zmm4_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
    var_128[0] = zmm2_1[0]
    float temp0_106[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_128[2] = zmm0_1[0]
    zmm0_1 = var_118_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_106[0]
    var_128[1] = zmm1_1
    zmm1_1 = var_118_1:4.d * temp0_106[0]
    float zmm3_1 = var_118_1.d * temp0_106[0]
    zmm2_1 = var_108_1.d
    float temp0_107[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_118_1:8.d = zmm0_1[0]
    zmm0_1 = var_108_1:8.d
    var_118_1:4.d = zmm1_1
    zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
    zmm2_1[0] = zmm2_1[0] * temp0_107[0]
    zmm1_1 = var_108_1:4.d * temp0_107[0]
    var_108_1:8.d = zmm0_1[0]
    var_118_1.d = zmm3_1
    var_108_1.d = zmm2_1[0]
    var_108_1:4.d = zmm1_1
    sub_14077e4a0(&var_178, &var_128)
    uint32_t zmm6_2[0x4] = var_178
    float zmm5_1[0x4] = data_143f2b8b0
    zmm9_2.o = var_188
    uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_2, zmm6_2)
    var_1d8 = 0x322bcc77
    float var_138[0x4] = zmm13_2
    zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
    uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
    zmm1_2 = _mm_rsqrt_ps(zmm4_2)
    float temp0_114[0x4] = _mm_mul_ps(zmm4_2, zmm5_1)
    float temp0_119[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_114)), zmm1_2), 
        zmm1_2)
    float temp0_122[0x4] =
        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_114))
    uint32_t zmm0_2[0x4] = var_1d8
    zmm0_2 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0), zmm4_2, 2)
    float temp0_126[0x4] = _mm_add_ps(_mm_mul_ps(temp0_122, temp0_119), temp0_119)
    float temp0_127[0x4] = _mm_unpacklo_ps(var_f8_1:4.d, 0)
    zmm5_1 = _mm_and_ps(_mm_mul_ps(temp0_126, zmm6_2) ^ data_143f2b8a0, zmm0_2) ^ data_143f2b8a0
    float var_148[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_f8_1.d, var_f8_1:8.d[0].q), temp0_127[0].q)
    var_158 = zmm5_1
int32_t rax_9 = arg1[0x1e].d

if (rax_9 s>= 0)
    var_1d8 = *(arg1 + 0xf4)
else
    int32_t rcx_12 = rax_9 * 2
    
    if ((rcx_12 & 0xfffffffe) == 0xfffffffe)
        var_1d8 = 0xffffffff
    else
        var_1d8 = *(*(rcx_2 + 0x520) + (sx.q(rcx_12) s>> 1 << 2))

int128_t* rax_14
float zmm6_3[0x4]
float zmm9_3[0x4]
float zmm14_2[0x4]
float zmm15_1[0x4]
rax_14, zmm6_3, zmm9_3, zmm14_2, zmm15_1 = sub_141dea310(&var_128, &var_1d8, rcx_2 + 0x4a0)
float zmm13_3[0x4] = rax_14[2]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm13_3, zmm6_3), data_143f2b8d0, 1)) == 0)
    float zmm2_3[0x4] = *rax_14
    float zmm4_3[0x4] = rax_14[1]
    float temp0_298[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x1b)
    float temp0_299[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x4e)
    float temp0_301[0x4] = _mm_mul_ps(temp0_298, _mm_shuffle_ps(zmm14_2, zmm14_2, 0))
    float temp0_302[0x4] = _mm_mul_ps(zmm2_3, zmm15_1)
    float temp0_303[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xb1)
    float temp0_304[0x4] = __mulps_xmmps_memps(temp0_301, data_143f2b850)
    float temp0_305[0x4] = _mm_mul_ps(zmm4_3, zmm6_3)
    float temp0_306[0x4] = _mm_mul_ps(zmm6_3, zmm13_3)
    float temp0_307[0x4] = _mm_add_ps(temp0_304, temp0_302)
    float temp0_309[0x4] = _mm_mul_ps(temp0_299, _mm_shuffle_ps(zmm14_2, zmm14_2, 0x55))
    float temp0_311[0x4] = _mm_mul_ps(temp0_303, _mm_shuffle_ps(zmm14_2, zmm14_2, 0xaa))
    float temp0_312[0x4] = __mulps_xmmps_memps(temp0_309, data_143f2b840)
    float temp0_313[0x4] = _mm_shuffle_ps(temp0_305, temp0_305, 0xc9)
    float temp0_314[0x4] = __mulps_xmmps_memps(temp0_311, data_143f2b830)
    float var_c8_1[0x4] = temp0_306
    float temp0_316[0x4] = _mm_add_ps(_mm_add_ps(temp0_307, temp0_312), temp0_314)
    float temp0_317[0x4] = _mm_shuffle_ps(temp0_305, temp0_305, 0xd2)
    var_e8 = temp0_316
    float temp0_318[0x4] = _mm_shuffle_ps(zmm14_2, zmm14_2, 0xd2)
    float temp0_319[0x4] = _mm_mul_ps(temp0_313, temp0_318)
    float temp0_320[0x4] = _mm_shuffle_ps(zmm14_2, zmm14_2, 0xc9)
    float temp0_322[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_317, temp0_320), temp0_319)
    float temp0_323[0x4] = _mm_add_ps(temp0_322, temp0_322)
    float temp0_324[0x4] = _mm_mul_ps(zmm15_1, temp0_323)
    float temp0_326[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_323, temp0_323, 0xd2), temp0_320)
    float temp0_327[0x4] = _mm_shuffle_ps(temp0_323, temp0_323, 0xc9)
    float temp0_328[0x4] = _mm_add_ps(temp0_324, temp0_305)
    float var_d8_1[0x4] = _mm_add_ps(
        _mm_add_ps(_mm_sub_ps(temp0_326, _mm_mul_ps(temp0_327, temp0_318)), temp0_328), zmm9_3)
else
    float zmm10_2[0x4] = data_143f2b810
    float temp0_170[0x4] = _mm_add_ps(zmm14_2, zmm14_2)
    float temp0_171[0x4] = _mm_shuffle_ps(zmm14_2, zmm14_2, 4)
    float temp0_172[0x4] = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xc9)
    float temp0_173[0x4] = _mm_shuffle_ps(zmm13_3, zmm13_3, 0xc9)
    _mm_mul_ps(zmm6_3, zmm13_3)
    float temp0_175[0x4] = _mm_mul_ps(zmm14_2, temp0_170)
    float temp0_177[0x4] = _mm_mul_ps(temp0_171, _mm_shuffle_ps(temp0_170, temp0_170, 0x29))
    float temp0_178[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0x12)
    float temp0_179[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0x1a)
    float temp0_180[0x4] = _mm_mul_ps(temp0_178, zmm15_1)
    float temp0_182[0x4] = _mm_add_ps(temp0_179, _mm_shuffle_ps(temp0_175, temp0_175, 1))
    float temp0_183[0x4] = _mm_add_ps(temp0_180, temp0_177)
    float temp0_184[0x4] = _mm_sub_ps(temp0_177, temp0_180)
    float temp0_185[0x4] = _mm_sub_ps(zmm10_2, temp0_182)
    float temp0_186[0x4] = _mm_mul_ps(temp0_183, zmm6_3)
    float temp0_187[0x4] = _mm_mul_ps(temp0_172, temp0_184)
    zmm14_2 = var_188
    float zmm1_3[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_185, zmm6_3), data_143f2b820)
    float temp0_190[0x4] = _mm_shuffle_ps(temp0_187, zmm1_3, 0x32)
    float temp0_192[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_186, zmm1_3, 0), temp0_190, 0x82)
    float temp0_193[0x4] = _mm_shuffle_ps(temp0_186, zmm1_3, 0x31)
    float temp0_195[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_187, zmm1_3, 0x10), temp0_193, 0x88)
    float temp0_196[0x4] = _mm_shuffle_ps(temp0_186, temp0_187, 0x12)
    float zmm3_3[0x4] = *rax_14
    float temp0_197[0x4] = _mm_shuffle_ps(temp0_196, zmm1_3, 0xe8)
    zmm10_2[0].q = zmm14_2 u>> 0x40
    float temp0_198[0x4] = _mm_add_ps(zmm3_3, zmm3_3)
    float temp0_199[0x4] = _mm_shuffle_ps(zmm14_2, zmm10_2, 0xc4)
    float temp0_200[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 4)
    float temp0_201[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xff)
    float temp0_202[0x4] = _mm_mul_ps(zmm3_3, temp0_198)
    float temp0_204[0x4] = _mm_mul_ps(temp0_200, _mm_shuffle_ps(temp0_198, temp0_198, 0x29))
    float temp0_206[0x4] = _mm_mul_ps(temp0_201, _mm_shuffle_ps(temp0_198, temp0_198, 0x12))
    float temp0_209[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_202, temp0_202, 0x1a), 
        _mm_shuffle_ps(temp0_202, temp0_202, 1))
    float temp0_210[0x4] = _mm_add_ps(temp0_206, temp0_204)
    float temp0_211[0x4] = _mm_sub_ps(temp0_204, temp0_206)
    float temp0_212[0x4] = _mm_sub_ps(zmm10_2, temp0_209)
    float temp0_213[0x4] = _mm_mul_ps(temp0_210, zmm13_3)
    float temp0_214[0x4] = _mm_mul_ps(temp0_173, temp0_211)
    zmm1_3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_212, zmm13_3), data_143f2b820)
    float temp0_217[0x4] = _mm_shuffle_ps(temp0_214, zmm1_3, 0x32)
    float temp0_219[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_213, zmm1_3, 0), temp0_217, 0x82)
    float temp0_220[0x4] = _mm_shuffle_ps(temp0_213, zmm1_3, 0x31)
    float temp0_222[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_214, zmm1_3, 0x10), temp0_220, 0x88)
    float temp0_223[0x4] = _mm_shuffle_ps(temp0_213, temp0_214, 0x12)
    float zmm5_2[0x4] = rax_14[1]
    float temp0_224[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0x55)
    float temp0_225[0x4] = _mm_shuffle_ps(temp0_223, zmm1_3, 0xe8)
    float temp0_226[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0xaa)
    float temp0_227[0x4] = _mm_mul_ps(temp0_224, temp0_195)
    float temp0_228[0x4] = _mm_mul_ps(temp0_226, temp0_197)
    zmm10_2[0].q = zmm5_2 u>> 0x40
    float temp0_229[0x4] = _mm_shuffle_ps(zmm5_2, zmm10_2, 0xc4)
    float temp0_230[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0)
    float temp0_232[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_219, temp0_219, 0xff), temp0_199)
    float temp0_234[0x4] = _mm_add_ps(temp0_227, _mm_mul_ps(temp0_230, temp0_192))
    float temp0_236[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0), temp0_192)
    float temp0_237[0x4] = _mm_add_ps(temp0_234, temp0_228)
    float temp0_239[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xaa), temp0_197)
    float temp0_240[0x4] = _mm_add_ps(temp0_237, temp0_232)
    float temp0_242[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0x55), temp0_195)
    float temp0_243[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0xff)
    float var_1c8[0x4] = temp0_240
    float temp0_244[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0x55)
    float temp0_245[0x4] = _mm_add_ps(temp0_242, temp0_236)
    float temp0_246[0x4] = _mm_mul_ps(temp0_244, temp0_195)
    float temp0_247[0x4] = _mm_mul_ps(temp0_243, temp0_199)
    float temp0_248[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0)
    float temp0_249[0x4] = _mm_add_ps(temp0_245, temp0_239)
    float temp0_250[0x4] = _mm_mul_ps(temp0_248, temp0_192)
    float temp0_252[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0xaa), temp0_197)
    float temp0_253[0x4] = _mm_add_ps(temp0_246, temp0_250)
    float temp0_254[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0xff)
    float temp0_255[0x4] = _mm_add_ps(temp0_249, temp0_247)
    float temp0_256[0x4] = _mm_mul_ps(temp0_254, temp0_199)
    float temp0_257[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0)
    float temp0_258[0x4] = _mm_add_ps(temp0_253, temp0_252)
    float temp0_259[0x4] = _mm_mul_ps(temp0_257, temp0_192)
    int96_t var_1b8_1 = temp0_255[0].12
    float temp0_260[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0x55)
    float temp0_261[0x4] = _mm_add_ps(temp0_258, temp0_256)
    float temp0_262[0x4] = _mm_mul_ps(temp0_260, temp0_195)
    int96_t var_1a8_1 = temp0_261[0].12
    float temp0_263[0x4] = _mm_add_ps(temp0_262, temp0_259)
    float temp0_265[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xaa), temp0_197)
    float temp0_267[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xff), temp0_199)
    int96_t var_198_1 = _mm_add_ps(_mm_add_ps(temp0_263, temp0_265), temp0_267)[0].12
    int128_t zmm10_3
    float zmm12_3[0x4]
    zmm10_3, zmm12_3 = sub_1407740e0(&var_1c8, 0x322bcc77)
    float zmm2_4[0x4] = var_1c8[0]
    float zmm1_4 = var_1c8[1]
    float zmm4_4[0x4] =
        _mm_and_ps(_mm_cmpeq_ps(data_143f2b8d0, zmm12_3, 2), data_143f2b8c0 ^ zmm10_3)
    uint32_t zmm0_4[0x4] = var_1c8[2]
    zmm4_4 ^= data_143f2b8c0
    zmm2_4[0] = zmm2_4[0] * zmm4_4[0]
    zmm1_4 = zmm1_4 * zmm4_4[0]
    zmm0_4[0] = zmm0_4[0] f* zmm4_4[0]
    var_1c8[0] = zmm2_4[0]
    float temp0_272[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0x55)
    var_1c8[2] = zmm0_4[0]
    zmm0_4 = var_1b8_1:8.d
    zmm0_4[0] = zmm0_4[0] f* temp0_272[0]
    var_1c8[1] = zmm1_4
    zmm1_4 = var_1b8_1:4.d * temp0_272[0]
    float zmm3_4 = var_1b8_1.d * temp0_272[0]
    zmm2_4 = var_1a8_1.d
    float temp0_273[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xaa)
    var_1b8_1:8.d = zmm0_4[0]
    zmm0_4 = var_1a8_1:8.d
    var_1b8_1:4.d = zmm1_4
    zmm0_4[0] = zmm0_4[0] f* temp0_273[0]
    zmm2_4[0] = zmm2_4[0] * temp0_273[0]
    zmm1_4 = var_1a8_1:4.d * temp0_273[0]
    var_1a8_1:8.d = zmm0_4[0]
    var_1b8_1.d = zmm3_4
    var_1a8_1.d = zmm2_4[0]
    var_1a8_1:4.d = zmm1_4
    sub_14077e4a0(&var_168, &var_1c8)
    uint32_t zmm6_4[0x4] = var_168
    float zmm5_3[0x4] = data_143f2b8b0
    uint32_t zmm1_5[0x4] = _mm_mul_ps(zmm6_4, zmm6_4)
    var_1d8 = 0x322bcc77
    float var_c8[0x4] = zmm12_3
    zmm1_5 = _mm_add_ps(zmm1_5, _mm_shuffle_ps(zmm1_5, zmm1_5, 0x4e))
    uint32_t zmm4_5[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_5, zmm1_5, 0x39), zmm1_5)
    zmm1_5 = _mm_rsqrt_ps(zmm4_5)
    float temp0_280[0x4] = _mm_mul_ps(zmm4_5, zmm5_3)
    float temp0_285[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(zmm1_5, zmm1_5), temp0_280)), zmm1_5), 
        zmm1_5)
    float temp0_288[0x4] =
        _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(temp0_285, temp0_285), temp0_280))
    uint32_t zmm0_5[0x4] = var_1d8
    zmm0_5 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_5, zmm0_5, 0), zmm4_5, 2)
    float temp0_292[0x4] = _mm_add_ps(_mm_mul_ps(temp0_288, temp0_285), temp0_285)
    float temp0_293[0x4] = _mm_unpacklo_ps(var_198_1:4.d, 0)
    zmm5_3 = _mm_and_ps(_mm_mul_ps(temp0_292, zmm6_4) ^ data_143f2b8a0, zmm0_5) ^ data_143f2b8a0
    float var_d8[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_198_1.d, var_198_1:8.d[0].q), temp0_293[0].q)
    var_e8 = zmm5_3

sub_141abcfa0(&arg1[0x1b], &var_188, &var_158)
sub_141abcfa0(&arg1[0x1f], &var_178, &var_e8)
int64_t result
int32_t zmm0_6
zmm0_6, result = sub_141ab9cf0(arg1, &var_188, &var_178, &var_158)
arg1[0x26].d = zmm0_6
__security_check_cookie(rax_1 ^ &var_1f8)
return result
