// 函数: sub_142230c80
// 地址: 0x142230c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg4[2]
float zmm4[0x4] = zmm3
zmm4[0] = zmm4[0] f* *arg3
bool cond:0 = _mm_and_ps(zmm4, 0x7fffffff)[0] f> 9.99999975e-05f
float zmm5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
zmm5[0] = zmm5[0] f* arg3[1]
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3[0] = zmm3[0] f* arg3[2]
char rax

if (cond:0)
    rax = 0
else if (_mm_and_ps(zmm5, 0x7fffffff)[0] f> 9.99999975e-05f)
    rax = 0
else if (_mm_and_ps(zmm3, 0x7fffffff)[0] f> 9.99999975e-05f)
    rax = 0
else
    rax = 1

if (rax != 0)
    zmm4 = 0x3dcccccd
    zmm5 = 0x3dcccccd
    zmm3 = 0x3dcccccd

zmm4 = _mm_and_ps(zmm4, 0x7fffffff)
*arg2 = &data_142e3e610
zmm5 = _mm_and_ps(zmm5, 0x7fffffff)
int32_t rax_1 = *(arg1 + 8)
zmm3 = _mm_and_ps(zmm3, 0x7fffffff)
arg2[1].d = rax_1
*(arg2 + 0xc) = *(arg1 + 0xc)
*(arg2 + 0x14) = *(arg1 + 0x14)
arg2[3].b ^= (*(arg1 + 0x18) ^ arg2[3].b) & 1
arg2[4].d = 6
arg2[5] = arg2
*arg2 = &data_142e3e618
arg2[6] = *(arg1 + 0x30)
arg2[7].d = *(arg1 + 0x38)
*(arg2 + 0x3c) = *(arg1 + 0x3c)
*(arg2 + 0x44) = *(arg1 + 0x44)
uint32_t zmm0[0x4] = *(arg1 + 0x48)
arg2[9].d = zmm0[0]
int32_t zmm1 = *(arg1 + 0x4c)
*(arg2 + 0x4c) = zmm1
zmm3[0] = zmm3[0] f* *(arg1 + 0x50)
zmm4[0] = zmm4[0] f* zmm0[0]
zmm5[0] = zmm5[0] f* zmm1
arg2[0xa].d = zmm3[0]
arg2[9].d = zmm4[0]
*(arg2 + 0x4c) = zmm5[0]
float var_118[0x4]
float zmm8[0x4] = sub_140ade170(arg1 + 0x3c, &var_118)
float zmm2_1[0x4] = *(arg1 + 0x34)
float zmm4_1[0x4] = *arg4
float zmm14[0x4] = data_14399f668
float zmm15[0x4] = arg4[2]
float zmm12[0x4] = var_118
float temp0_8[0x4] = _mm_unpacklo_ps(*(arg1 + 0x30), (*(arg1 + 0x38))[0].q)
float temp0_9[0x4] = _mm_unpacklo_ps(zmm14, data_14399f670[0].q)
float temp0_11[0x4] = _mm_unpacklo_ps(temp0_8, _mm_unpacklo_ps(zmm2_1, 0)[0].q)
float temp0_13[0x4] = _mm_unpacklo_ps(temp0_9, _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
float var_108[0x4]
float zmm6[0x4]
float zmm7[0x4]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_13, zmm15), data_143f51400, 1)) == 0)
    float temp0_146[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
    float temp0_148[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), temp0_146)
    float temp0_149[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x4e)
    float temp0_150[0x4] = _mm_mul_ps(temp0_11, zmm15)
    float temp0_151[0x4] = __mulps_xmmps_memps(temp0_148, data_143f513c0)
    float temp0_152[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
    float temp0_153[0x4] = _mm_mul_ps(temp0_152, zmm12)
    float temp0_154[0x4] = _mm_shuffle_ps(temp0_150, temp0_150, 0xd2)
    float temp0_155[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xb1)
    float temp0_156[0x4] = _mm_add_ps(temp0_151, temp0_153)
    float temp0_158[0x4] = _mm_mul_ps(temp0_149, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55))
    float temp0_160[0x4] = _mm_mul_ps(temp0_155, _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa))
    float temp0_161[0x4] = __mulps_xmmps_memps(temp0_158, data_143f513b0)
    float temp0_162[0x4] = _mm_shuffle_ps(temp0_150, temp0_150, 0xc9)
    float temp0_163[0x4] = __mulps_xmmps_memps(temp0_160, data_143f513a0)
    float temp0_164[0x4] = _mm_add_ps(temp0_156, temp0_161)
    float temp0_165[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
    float temp0_166[0x4] = _mm_mul_ps(temp0_162, temp0_165)
    float temp0_167[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
    float temp0_168[0x4] = _mm_mul_ps(temp0_154, temp0_167)
    zmm7 = _mm_add_ps(temp0_164, temp0_163)
    float temp0_170[0x4] = _mm_sub_ps(temp0_168, temp0_166)
    float temp0_171[0x4] = _mm_add_ps(temp0_170, temp0_170)
    float temp0_172[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0xd2)
    float temp0_173[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0xc9)
    float temp0_174[0x4] = _mm_mul_ps(temp0_172, temp0_167)
    float temp0_175[0x4] = _mm_mul_ps(temp0_173, temp0_165)
    float temp0_176[0x4] = _mm_mul_ps(temp0_171, temp0_152)
    zmm6 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_174, temp0_175), _mm_add_ps(temp0_176, temp0_150)), arg4[1])
else
    float temp0_17[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 4)
    float temp0_18[0x4] = _mm_add_ps(zmm4_1, zmm4_1)
    float var_48_1[0x4] = zmm8
    zmm8 = arg4[1]
    float temp0_19[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
    float temp0_20[0x4] = _mm_mul_ps(zmm4_1, temp0_18)
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0x29), temp0_17)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x12)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x1a)
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, temp0_19)
    float temp0_27[0x4] = _mm_add_ps(temp0_24, _mm_shuffle_ps(temp0_20, temp0_20, 1))
    float temp0_28[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    float zmm11[0x4] = data_143f51330
    float temp0_29[0x4] = _mm_add_ps(temp0_25, temp0_22)
    float temp0_30[0x4] = _mm_sub_ps(temp0_22, temp0_25)
    float temp0_31[0x4] = _mm_shuffle_ps(zmm12, zmm12, 4)
    float temp0_32[0x4] = _mm_mul_ps(temp0_29, zmm15)
    float temp0_33[0x4] = _mm_mul_ps(temp0_28, temp0_30)
    float zmm1_1[0x4] =
        __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, temp0_27), zmm15), data_143f51340)
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_33, zmm1_1, 0x32)
    float temp0_39[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_32, zmm1_1, 0), temp0_37, 0x82)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_32, zmm1_1, 0x31)
    float temp0_42[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_33, zmm1_1, 0x10), temp0_40, 0x88)
    float temp0_44[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_32, temp0_33, 0x12), zmm1_1, 0xe8)
    float temp0_45[0x4] = _mm_add_ps(zmm12, zmm12)
    zmm11[0].q = zmm8 u>> 0x40
    float temp0_46[0x4] = _mm_shuffle_ps(zmm8, zmm11, 0xc4)
    float temp0_47[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
    float temp0_48[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
    float temp0_49[0x4] = _mm_mul_ps(zmm12, temp0_45)
    float temp0_51[0x4] = _mm_mul_ps(temp0_31, _mm_shuffle_ps(temp0_45, temp0_45, 0x29))
    float temp0_52[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x12)
    float temp0_53[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0x1a)
    float temp0_54[0x4] = _mm_mul_ps(temp0_47, temp0_52)
    float temp0_56[0x4] = _mm_add_ps(temp0_53, _mm_shuffle_ps(temp0_49, temp0_49, 1))
    float temp0_57[0x4] = _mm_add_ps(temp0_54, temp0_51)
    float temp0_58[0x4] = _mm_sub_ps(temp0_51, temp0_54)
    float temp0_59[0x4] = _mm_sub_ps(zmm11, temp0_56)
    float temp0_60[0x4] = _mm_mul_ps(temp0_57, temp0_13)
    float temp0_61[0x4] = _mm_mul_ps(temp0_48, temp0_58)
    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_59, temp0_13), data_143f51340)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_61, zmm1_1, 0x32)
    float temp0_66[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_60, zmm1_1, 0), temp0_64, 0x82)
    float temp0_69[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_61, zmm1_1, 0x10), 
        _mm_shuffle_ps(temp0_60, zmm1_1, 0x31), 0x88)
    float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0x55), temp0_42)
    zmm11[0].q = temp0_11 u>> 0x40
    float temp0_72[0x4] = _mm_shuffle_ps(temp0_11, zmm11, 0xc4)
    float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0), temp0_39)
    float temp0_76[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_60, temp0_61, 0x12), zmm1_1, 0xe8)
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xaa)
    float temp0_78[0x4] = _mm_add_ps(temp0_71, temp0_74)
    float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_46)
    float temp0_81[0x4] = _mm_mul_ps(temp0_77, temp0_44)
    float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0), temp0_39)
    float temp0_84[0x4] = _mm_add_ps(temp0_78, temp0_81)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_44)
    float temp0_87[0x4] = _mm_add_ps(temp0_84, temp0_80)
    float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0x55), temp0_42)
    float temp0_90[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xff)
    float var_f8[0x4] = temp0_87
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0x55)
    float temp0_92[0x4] = _mm_add_ps(temp0_89, temp0_83)
    float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_42)
    float temp0_94[0x4] = _mm_mul_ps(temp0_90, temp0_46)
    float temp0_95[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0)
    float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_86)
    float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_39)
    float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0xaa), temp0_44)
    float temp0_100[0x4] = _mm_add_ps(temp0_96, temp0_94)
    float temp0_101[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xff)
    float temp0_102[0x4] = _mm_add_ps(temp0_93, temp0_97)
    float temp0_103[0x4] = _mm_mul_ps(temp0_101, temp0_46)
    float temp0_104[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0)
    int96_t var_e8_1 = temp0_100[0].12
    float temp0_105[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
    float temp0_106[0x4] = _mm_add_ps(temp0_102, temp0_99)
    float temp0_107[0x4] = _mm_mul_ps(temp0_105, temp0_42)
    float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xaa), temp0_44)
    float temp0_110[0x4] = _mm_mul_ps(temp0_104, temp0_39)
    float temp0_111[0x4] = _mm_add_ps(temp0_106, temp0_103)
    float temp0_113[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xff), temp0_46)
    float temp0_114[0x4] = _mm_add_ps(temp0_107, temp0_110)
    int96_t var_d8_1 = temp0_111[0].12
    int96_t var_c8_1 = _mm_add_ps(_mm_add_ps(temp0_114, temp0_109), temp0_113)[0].12
    int512_t zmm8_1
    int128_t zmm11_1
    float zmm14_1[0x4]
    float zmm15_1[0x4]
    zmm8_1, zmm11_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_f8, 0x322bcc77)
    float zmm2_2[0x4] = var_f8[0]
    float zmm1_2 = var_f8[1]
    float zmm4_2[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f51400, _mm_mul_ps(zmm14_1, zmm15_1), 2), 
        data_143f513f0 ^ zmm11_1) ^ data_143f513f0
    zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
    zmm1_2 = zmm1_2 * zmm4_2[0]
    uint32_t zmm0_2[0x4] = var_f8[2]
    zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
    var_f8[0] = zmm2_2[0]
    float temp0_120[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
    var_f8[2] = zmm0_2[0]
    zmm0_2 = var_e8_1:8.d
    zmm0_2[0] = zmm0_2[0] f* temp0_120[0]
    var_f8[1] = zmm1_2
    zmm1_2 = var_e8_1:4.d * temp0_120[0]
    float zmm3_2 = var_e8_1.d * temp0_120[0]
    zmm2_2 = var_d8_1.d
    float temp0_121[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
    var_e8_1:8.d = zmm0_2[0]
    zmm0_2 = var_d8_1:8.d
    var_e8_1:4.d = zmm1_2
    zmm0_2[0] = zmm0_2[0] f* temp0_121[0]
    zmm2_2[0] = zmm2_2[0] * temp0_121[0]
    zmm1_2 = var_d8_1:4.d * temp0_121[0]
    var_d8_1:8.d = zmm0_2[0]
    var_e8_1.d = zmm3_2
    var_d8_1.d = zmm2_2[0]
    var_d8_1:4.d = zmm1_2
    sub_14077e4a0(&var_108, &var_f8)
    float zmm5_2[0x4] = var_108
    zmm7 = data_143f513e0
    zmm8_1.o = var_48_1
    float temp0_122[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
    float temp0_124[0x4] = _mm_add_ps(temp0_122, _mm_shuffle_ps(temp0_122, temp0_122, 0x4e))
    float temp0_126[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0x39), temp0_124)
    float temp0_127[0x4] = _mm_rsqrt_ps(temp0_126)
    float temp0_128[0x4] = _mm_mul_ps(temp0_126, zmm7)
    float temp0_133[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_127, temp0_127), temp0_128)), 
            temp0_127), 
        temp0_127)
    float temp0_136[0x4] = _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_133, temp0_133), temp0_128))
    float temp0_138[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_126, 2)
    float temp0_140[0x4] = _mm_add_ps(_mm_mul_ps(temp0_136, temp0_133), temp0_133)
    float temp0_141[0x4] = _mm_unpacklo_ps(var_c8_1:4.d, 0)
    zmm7 = _mm_and_ps(_mm_mul_ps(temp0_140, zmm5_2) ^ data_143f513d0, temp0_138) ^ data_143f513d0
    zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_c8_1.d, var_c8_1:8.d[0].q), temp0_141[0].q)

_mm_mul_ps(zmm6, 
    _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, arg3[2][0].q), _mm_unpacklo_ps(arg3[1], 0)[0].q))
var_108 = zmm7
uint128_t zmm6_1 = sub_140adf5d0(&var_108, &var_118)
float rax_8 = var_118[2]
*(arg2 + 0x3c) = var_118[0].q
var_118[2] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa).d
*(arg2 + 0x44) = rax_8
float rax_9 = var_118[2]
arg2[6] = (_mm_unpacklo_ps(zmm6_1, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)[0].q)).q
arg2[7].d = rax_9
return arg2
