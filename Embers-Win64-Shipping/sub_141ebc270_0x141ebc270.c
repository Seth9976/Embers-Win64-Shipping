// 函数: sub_141ebc270
// 地址: 0x141ebc270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *arg3
uint32_t zmm7[0x4] = data_143f3a520
float zmm11[0x4] = arg4
arg4 = *(arg1 + 0x30)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0x34), 0)
float zmm12[0x4] = arg3[2]
float temp0_1[0x4] = _mm_unpacklo_ps(zmm11, zmm11[0].q)
float zmm15[0x4] = data_143f3a510
zmm15[0].q = zx.o(0) u>> 0x40
float zmm14[0x4] = _mm_and_ps(zmm15, zmm7)
float temp0_3[0x4] = _mm_shuffle_ps(zx.o(0), zmm15, 0xc4)
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(arg4, (*(arg1 + 0x38))[0].q), temp0[0].q)
float temp0_7[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm11, 0)[0].q)
float temp0_8[0x4] = _mm_min_ps(zmm14, zmm12)
float temp0_9[0x4] = _mm_mul_ps(temp0_7, temp0_5)
uint32_t var_f8[0x4]
float zmm5[0x4]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(temp0_8, data_143f3a620, 1)) == 0)
    float temp0_141[0x4] = _mm_mul_ps(zmm12, temp0_9)
    float temp0_142[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    float temp0_143[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_144[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_146[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_141, temp0_141, 0xc9), temp0_142)
    float temp0_149[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_141, temp0_141, 0xd2), temp0_143), temp0_146)
    float temp0_150[0x4] = _mm_add_ps(temp0_149, temp0_149)
    float temp0_151[0x4] = _mm_mul_ps(temp0_144, temp0_150)
    float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_150, temp0_150, 0xd2), temp0_143)
    float temp0_154[0x4] = _mm_shuffle_ps(temp0_150, temp0_150, 0xc9)
    float temp0_155[0x4] = _mm_add_ps(temp0_151, temp0_141)
    zmm5 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_153, _mm_mul_ps(temp0_154, temp0_142)), temp0_155), arg3[1])
else
    float temp0_12[0x4] = _mm_add_ps(zmm6, zmm6)
    float temp0_13[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
    float zmm8[0x4] = arg3[1]
    float temp0_14[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_15[0x4] = _mm_mul_ps(zmm6, temp0_12)
    float temp0_17[0x4] = _mm_mul_ps(temp0_13, _mm_shuffle_ps(temp0_12, temp0_12, 0x29))
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x12)
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x1a)
    float temp0_20[0x4] = _mm_mul_ps(temp0_14, temp0_18)
    float temp0_22[0x4] = _mm_add_ps(temp0_19, _mm_shuffle_ps(temp0_15, temp0_15, 1))
    float temp0_23[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_17)
    float temp0_25[0x4] = _mm_sub_ps(temp0_17, temp0_20)
    float temp0_26[0x4] = _mm_sub_ps(zmm15, temp0_22)
    float temp0_27[0x4] = _mm_mul_ps(temp0_24, zmm12)
    float temp0_28[0x4] = _mm_mul_ps(temp0_23, temp0_25)
    float temp0_29[0x4] = _mm_mul_ps(temp0_26, zmm12)
    float temp0_30[0x4] = _mm_add_ps(temp0_3, temp0_3)
    float zmm1[0x4] = _mm_and_ps(temp0_29, zmm7)
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_28, zmm1, 0x32)
    float temp0_33[0x4] = _mm_mul_ps(temp0_30, temp0_3)
    float temp0_35[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, zmm1, 0), temp0_32, 0x82)
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_27, zmm1, 0x31)
    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_28, zmm1, 0x10), temp0_36, 0x88)
    float temp0_40[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, temp0_28, 0x12), zmm1, 0xe8)
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x29)
    zmm15[0].q = zmm8 u>> 0x40
    float temp0_42[0x4] = _mm_shuffle_ps(zmm8, zmm15, 0xc4)
    float temp0_44[0x4] = _mm_mul_ps(temp0_41, _mm_shuffle_ps(temp0_3, temp0_3, 4))
    float temp0_45[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x1a)
    float temp0_46[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
    float temp0_48[0x4] = _mm_add_ps(temp0_45, _mm_shuffle_ps(temp0_33, temp0_33, 1))
    float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0x12), temp0_46)
    float temp0_51[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    float temp0_52[0x4] = _mm_add_ps(temp0_50, temp0_44)
    float temp0_53[0x4] = _mm_sub_ps(temp0_44, temp0_50)
    float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm14)
    float temp0_55[0x4] = _mm_mul_ps(temp0_51, temp0_53)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm15, temp0_48), zmm14), data_143f3a520)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_55, zmm1, 0x32)
    float temp0_61[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_54, zmm1, 0), temp0_59, 0x82)
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_54, zmm1, 0x31)
    float temp0_64[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_55, zmm1, 0x10), temp0_62, 0x88)
    float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_55, 0x12)
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
    float temp0_67[0x4] = _mm_shuffle_ps(temp0_65, zmm1, 0xe8)
    float temp0_68[0x4] = _mm_mul_ps(temp0_66, zmm7)
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_40)
    zmm15[0].q = temp0_9 u>> 0x40
    float temp0_71[0x4] = _mm_shuffle_ps(temp0_9, zmm15, 0xc4)
    float temp0_72[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
    float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xff), temp0_42)
    float temp0_76[0x4] = _mm_add_ps(temp0_68, _mm_mul_ps(temp0_72, temp0_35))
    float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0), temp0_35)
    float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_70)
    float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_40)
    float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_74)
    float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0x55), zmm7)
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xff)
    float var_e8[0x4] = temp0_82
    float temp0_86[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x55)
    float temp0_87[0x4] = _mm_add_ps(temp0_84, temp0_78)
    float temp0_88[0x4] = _mm_mul_ps(temp0_86, zmm7)
    float temp0_89[0x4] = _mm_mul_ps(temp0_85, temp0_42)
    float temp0_90[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0)
    float temp0_91[0x4] = _mm_add_ps(temp0_87, temp0_81)
    float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_35)
    float temp0_94[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xaa), temp0_40)
    float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_89)
    float temp0_96[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
    float temp0_97[0x4] = _mm_add_ps(temp0_88, temp0_92)
    float temp0_98[0x4] = _mm_mul_ps(temp0_96, temp0_42)
    float temp0_99[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0)
    int96_t var_d8_1 = temp0_95[0].12
    float temp0_100[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x55)
    float temp0_101[0x4] = _mm_add_ps(temp0_97, temp0_94)
    float temp0_102[0x4] = _mm_mul_ps(temp0_100, zmm7)
    float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xaa), temp0_40)
    float temp0_105[0x4] = _mm_mul_ps(temp0_99, temp0_35)
    float temp0_106[0x4] = _mm_add_ps(temp0_101, temp0_98)
    float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xff), temp0_42)
    float temp0_109[0x4] = _mm_add_ps(temp0_102, temp0_105)
    int96_t var_c8_1 = temp0_106[0].12
    int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_109, temp0_104), temp0_108)[0].12
    float zmm12_1[0x4]
    float zmm14_1[0x4]
    int128_t zmm15_1
    zmm11, zmm12_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_e8, 0x322bcc77)
    float zmm2_1[0x4] = var_e8[0]
    float zmm1_1 = var_e8[1]
    float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f3a620, _mm_mul_ps(zmm12_1, zmm14_1), 2), 
        data_143f3a610 ^ zmm15_1)
    uint32_t zmm0_1[0x4] = var_e8[2]
    zmm4_1 ^= data_143f3a610
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    zmm1_1 = zmm1_1 * zmm4_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
    var_e8[0] = zmm2_1[0]
    var_e8[1] = zmm1_1
    float temp0_115[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    zmm1_1 = var_d8_1:4.d * temp0_115[0]
    var_e8[2] = zmm0_1[0]
    zmm0_1 = var_d8_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_115[0]
    float zmm3 = var_d8_1.d * temp0_115[0]
    zmm2_1 = var_c8_1.d
    float temp0_116[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_d8_1:4.d = zmm1_1
    var_d8_1:8.d = zmm0_1[0]
    zmm0_1 = var_c8_1:8.d
    zmm1_1 = var_c8_1:4.d * temp0_116[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_116[0]
    zmm2_1[0] = zmm2_1[0] * temp0_116[0]
    var_c8_1:4.d = zmm1_1
    var_c8_1:8.d = zmm0_1[0]
    var_d8_1.d = zmm3
    var_c8_1.d = zmm2_1[0]
    sub_14077e4a0(&var_f8, &var_e8)
    uint32_t zmm6_1[0x4] = var_f8
    zmm5 = data_143f3a5f0
    float temp0_117[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
    float temp0_119[0x4] = _mm_add_ps(temp0_117, _mm_shuffle_ps(temp0_117, temp0_117, 0x4e))
    float temp0_121[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_119, temp0_119, 0x39), temp0_119)
    float temp0_122[0x4] = _mm_rsqrt_ps(temp0_121)
    float temp0_123[0x4] = _mm_mul_ps(temp0_121, zmm5)
    float temp0_128[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_123)), 
            temp0_122), 
        temp0_122)
    float temp0_131[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_128, temp0_128), temp0_123))
    float temp0_133[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_121, 2)
    float temp0_135[0x4] = _mm_add_ps(_mm_mul_ps(temp0_131, temp0_128), temp0_128)
    float temp0_136[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
    var_f8 = _mm_and_ps(_mm_mul_ps(temp0_135, zmm6_1) ^ data_143f3a5e0, temp0_133) ^ data_143f3a5e0
    zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_136[0].q)

zmm11[0] = zmm11[0] f* *(arg1 + 0x3c)
zmm5[0] = zmm5[0] + zmm11[0]
float temp0_160[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
float temp0_161[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
temp0_160[0] = temp0_160[0] + zmm11[0]
arg2[3].b = 1
zmm5[0] = zmm5[0] - zmm11[0]
temp0_161[0] = temp0_161[0] - zmm11[0]
temp0_160[0] = temp0_160[0] - zmm11[0]
temp0_161[0] = temp0_161[0] + zmm11[0]
var_f8[2] = temp0_160[0]
*arg2 = (_mm_unpacklo_ps(zmm5, temp0_161[0].q)).q
arg2[1].d = temp0_160[0]
uint32_t rax_2 = var_f8[2]
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm5, temp0_161[0].q)).q
*(arg2 + 0x14) = rax_2
return arg2
