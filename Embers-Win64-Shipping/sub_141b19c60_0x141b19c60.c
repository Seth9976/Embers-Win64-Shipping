// 函数: sub_141b19c60
// 地址: 0x141b19c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int128_t* result = arg2
uint128_t zmm6
int128_t zmm6_1
int128_t zmm7
int128_t zmm8
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]
float zmm15[0x4]
zmm6_1, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
    sub_141b13380(arg1 + 0x20, arg2, arg3, zmm6)
int32_t rdx = *(result + 0x24)

if (rdx != 0 && *(arg1 + 0x660) == 1 && arg4 != 0)
    float var_88_1[0x4] = zmm12
    float var_98_1[0x4] = zmm13
    float var_a8_1[0x4] = zmm14
    float var_b8_1[0x4] = zmm15
    
    if ((rdx.b & 1) != 0)
        *result
    
    if (((rdx u>> 1).b & 1) != 0)
        *(result + 4)
    
    if (((rdx u>> 2).b & 1) != 0)
        *(result + 8)
    
    int32_t zmm2_1
    
    if (((rdx u>> 3).b & 1) == 0)
        zmm2_1 = (zx.o(0)).d
    else
        zmm2_1 = *(result + 0xc)
    
    float zmm1_1
    
    if (((rdx u>> 4).b & 1) == 0)
        zmm1_1 = (zx.o(0)).d
    else
        zmm1_1 = result[1].d
    
    int32_t zmm0_1
    
    if (((rdx u>> 5).b & 1) == 0)
        zmm0_1 = (zx.o(0)).d
    else
        zmm0_1 = *(result + 0x14)
    
    float var_d8 = zmm1_1
    int32_t var_d4_1 = zmm0_1
    int32_t var_d0_1 = zmm2_1
    float var_f8[0x4]
    float zmm6_2[0x4]
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    zmm6_2, zmm7_1, zmm8_1 = sub_140ade170(&var_d8, &var_f8)
    zmm15 = *(arg4 + 0x30)
    float zmm5_1[0x4] = *(arg4 + 0x10)
    zmm13 = var_f8
    float temp0_1[0x4] = _mm_unpacklo_ps(data_14399f668, data_14399f670[0].q)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm7_1, 0)
    float temp0_4[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8_1, zmm6_2[0].q), temp0_2[0].q)
    float temp0_6[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    float zmm4_1[0x4]
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_6, zmm15), data_143f2c530, 1))
            == 0)
        float temp0_139[0x4] = _mm_mul_ps(temp0_4, zmm15)
        float temp0_142[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), _mm_shuffle_ps(zmm13, zmm13, 0x1b))
        float temp0_143[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
        float temp0_144[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xd2)
        float temp0_145[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_148[0x4] =
            _mm_add_ps(__mulps_xmmps_memps(temp0_142, data_143f2c500), _mm_mul_ps(temp0_145, zmm13))
        float temp0_150[0x4] = _mm_mul_ps(temp0_143, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
        float temp0_153[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), _mm_shuffle_ps(zmm13, zmm13, 0xb1))
        float temp0_154[0x4] = __mulps_xmmps_memps(temp0_150, data_143f2c4f0)
        float temp0_155[0x4] = __mulps_xmmps_memps(temp0_153, data_143f2c4e0)
        float temp0_156[0x4] = _mm_add_ps(temp0_148, temp0_154)
        float temp0_157[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_158[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_159[0x4] = _mm_mul_ps(temp0_144, temp0_158)
        zmm6_2 = _mm_add_ps(temp0_156, temp0_155)
        float temp0_163[0x4] =
            _mm_sub_ps(temp0_159, _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0xc9), temp0_157))
        float temp0_164[0x4] = _mm_add_ps(temp0_163, temp0_163)
        float temp0_165[0x4] = _mm_shuffle_ps(temp0_164, temp0_164, 0xd2)
        float temp0_166[0x4] = _mm_shuffle_ps(temp0_164, temp0_164, 0xc9)
        float temp0_167[0x4] = _mm_mul_ps(temp0_165, temp0_158)
        float temp0_168[0x4] = _mm_mul_ps(temp0_166, temp0_157)
        float temp0_169[0x4] = _mm_mul_ps(temp0_164, temp0_145)
        zmm4_1 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_167, temp0_168), _mm_add_ps(temp0_169, temp0_139)), 
            *(arg4 + 0x20))
    else
        zmm8_1 = *(arg4 + 0x20)
        float temp0_10[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
        float temp0_11[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
        float temp0_12[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
        float temp0_13[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_14[0x4] = _mm_mul_ps(zmm5_1, temp0_10)
        float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x29), temp0_11)
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x12)
        float temp0_18[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x1a)
        float temp0_19[0x4] = _mm_mul_ps(temp0_17, temp0_13)
        float temp0_21[0x4] = _mm_add_ps(temp0_18, _mm_shuffle_ps(temp0_14, temp0_14, 1))
        float var_78_1[0x4] = zmm11
        zmm11 = data_143f2c440
        float temp0_22[0x4] = _mm_add_ps(temp0_19, temp0_16)
        float temp0_23[0x4] = _mm_sub_ps(temp0_16, temp0_19)
        float temp0_24[0x4] = _mm_shuffle_ps(zmm13, zmm13, 4)
        float temp0_25[0x4] = _mm_mul_ps(temp0_22, zmm15)
        float temp0_26[0x4] = _mm_mul_ps(temp0_12, temp0_23)
        float zmm1_2[0x4] =
            __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, temp0_21), zmm15), data_143f2c450)
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, zmm1_2, 0x32)
        float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, zmm1_2, 0), temp0_30, 0x82)
        float temp0_33[0x4] = _mm_shuffle_ps(temp0_25, zmm1_2, 0x31)
        float temp0_35[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1_2, 0x10), temp0_33, 0x88)
        float temp0_37[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, temp0_26, 0x12), zmm1_2, 0xe8)
        float temp0_38[0x4] = _mm_add_ps(zmm13, zmm13)
        zmm11[0].q = zmm8_1 u>> 0x40
        float temp0_39[0x4] = _mm_shuffle_ps(zmm8_1, zmm11, 0xc4)
        float temp0_40[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
        float temp0_41[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
        float temp0_42[0x4] = _mm_mul_ps(zmm13, temp0_38)
        float temp0_44[0x4] = _mm_mul_ps(temp0_24, _mm_shuffle_ps(temp0_38, temp0_38, 0x29))
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x12)
        float temp0_46[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x1a)
        float temp0_47[0x4] = _mm_mul_ps(temp0_40, temp0_45)
        float temp0_49[0x4] = _mm_add_ps(temp0_46, _mm_shuffle_ps(temp0_42, temp0_42, 1))
        float temp0_50[0x4] = _mm_add_ps(temp0_47, temp0_44)
        float temp0_51[0x4] = _mm_sub_ps(temp0_44, temp0_47)
        float temp0_52[0x4] = _mm_sub_ps(zmm11, temp0_49)
        float temp0_53[0x4] = _mm_mul_ps(temp0_50, temp0_6)
        float temp0_54[0x4] = _mm_mul_ps(temp0_41, temp0_51)
        zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_52, temp0_6), data_143f2c450)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, zmm1_2, 0x32)
        float temp0_59[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, zmm1_2, 0), temp0_57, 0x82)
        float temp0_62[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_54, zmm1_2, 0x10), 
            _mm_shuffle_ps(temp0_53, zmm1_2, 0x31), 0x88)
        float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), temp0_35)
        zmm11[0].q = temp0_4 u>> 0x40
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_4, zmm11, 0xc4)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_32)
        float temp0_69[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, temp0_54, 0x12), zmm1_2, 0xe8)
        float temp0_70[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)
        float temp0_71[0x4] = _mm_add_ps(temp0_64, temp0_67)
        float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xff), temp0_39)
        float temp0_74[0x4] = _mm_mul_ps(temp0_70, temp0_37)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0), temp0_32)
        float temp0_77[0x4] = _mm_add_ps(temp0_71, temp0_74)
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_37)
        float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_73)
        float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x55), temp0_35)
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
        float var_138[0x4] = temp0_80
        float temp0_84[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
        float temp0_85[0x4] = _mm_add_ps(temp0_82, temp0_76)
        float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_35)
        float temp0_87[0x4] = _mm_mul_ps(temp0_83, temp0_39)
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0)
        float temp0_89[0x4] = _mm_add_ps(temp0_85, temp0_79)
        float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_32)
        float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_37)
        float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_87)
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xff)
        float temp0_95[0x4] = _mm_add_ps(temp0_86, temp0_90)
        float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_39)
        float temp0_97[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
        int96_t var_128_1 = temp0_93[0].12
        float temp0_98[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
        float temp0_99[0x4] = _mm_add_ps(temp0_95, temp0_92)
        float temp0_100[0x4] = _mm_mul_ps(temp0_98, temp0_35)
        float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_37)
        float temp0_103[0x4] = _mm_mul_ps(temp0_97, temp0_32)
        float temp0_104[0x4] = _mm_add_ps(temp0_99, temp0_96)
        float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), temp0_39)
        float temp0_107[0x4] = _mm_add_ps(temp0_100, temp0_103)
        int96_t var_118_1 = temp0_104[0].12
        int96_t var_108_1 = _mm_add_ps(_mm_add_ps(temp0_107, temp0_102), temp0_106)[0].12
        int512_t zmm9_1
        int512_t zmm10_1
        float zmm11_1[0x4]
        zmm9_1, zmm10_1, zmm11_1, zmm14, zmm15 = sub_1407740e0(&var_138, 0x322bcc77)
        float zmm3_2[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f2c530, _mm_mul_ps(zmm14, zmm15), 2), 
            data_143f2c460 ^ zmm11_1) ^ data_143f2c460
        float zmm1_3 = zmm3_2[0]
        zmm3_2[0] = zmm3_2[0] * var_138[0]
        zmm1_3 = zmm1_3 * var_138[1]
        var_138[0] = zmm3_2[0]
        var_138[1] = zmm1_3
        uint32_t zmm0_3[0x4] = zmm3_2
        zmm0_3[0] = zmm0_3[0] f* var_138[2]
        float temp0_113[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)
        zmm1_3 = temp0_113[0]
        float temp0_114[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa)
        zmm1_3 = zmm1_3 f* var_128_1.d
        var_138[2] = zmm0_3[0]
        zmm0_3 = temp0_113
        zmm0_3[0] = zmm0_3[0] f* var_128_1:4.d
        temp0_113[0] = temp0_113[0] f* var_128_1:8.d
        var_128_1:4.d = zmm0_3[0]
        zmm0_3 = var_118_1:8.d
        var_128_1.d = zmm1_3
        var_128_1:8.d = temp0_113[0]
        float zmm2_3[0x4] = var_118_1.d
        zmm0_3[0] = zmm0_3[0] f* temp0_114[0]
        zmm2_3[0] = zmm2_3[0] * temp0_114[0]
        zmm1_3 = var_118_1:4.d * temp0_114[0]
        var_118_1:8.d = zmm0_3[0]
        var_118_1.d = zmm2_3[0]
        var_118_1:4.d = zmm1_3
        sub_14077e4a0(&var_f8, &var_138)
        float zmm5_2[0x4] = var_f8
        zmm6_2 = data_143f2c520
        zmm10_1.o = zmm10
        zmm9_1.o = zmm9
        float temp0_115[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
        float temp0_117[0x4] = _mm_add_ps(temp0_115, _mm_shuffle_ps(temp0_115, temp0_115, 0x4e))
        float temp0_119[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0x39), temp0_117)
        float temp0_120[0x4] = _mm_rsqrt_ps(temp0_119)
        float temp0_121[0x4] = _mm_mul_ps(temp0_119, zmm6_2)
        float temp0_126[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_121)), 
                temp0_120), 
            temp0_120)
        float temp0_129[0x4] =
            _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_126, temp0_126), temp0_121))
        float temp0_131[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_119, 2)
        float temp0_133[0x4] = _mm_add_ps(_mm_mul_ps(temp0_129, temp0_126), temp0_126)
        float temp0_134[0x4] = _mm_unpacklo_ps(var_108_1:4.d, 0)
        zmm6_2 =
            _mm_and_ps(_mm_mul_ps(temp0_133, zmm5_2) ^ data_143f2c510, temp0_131) ^ data_143f2c510
        zmm4_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_108_1.d, var_108_1:8.d[0].q), temp0_134[0].q)
    
    var_d8 = zmm4_1[0]
    float temp0_174[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    float var_d0_2 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)[0]
    float var_d4_2 = temp0_174[0]
    var_f8 = zmm6_2
    int32_t var_e8
    int512_t zmm6_3
    int512_t zmm7_2
    int512_t zmm8_2
    zmm6_3, zmm7_2, zmm8_2 = sub_140ad3d90(&var_f8, &var_e8)
    int32_t i = 0
    zmm8_2.o = zmm8
    zmm7_2.o = zmm7
    zmm6_3.o = zmm6_1
    int32_t var_cc_1 = var_e8
    int32_t var_e0
    int32_t var_c4_1 = var_e0
    int32_t var_e4
    int32_t var_c8_1 = var_e4
    
    do
        int32_t r8 = 1 << i.b
        
        if ((*(result + 0x24) & r8) != 0)
            *(result + (zx.q(i.b) << 2)) = (&var_d8)[sx.q(i)]
            *(result + 0x24) |= r8
        
        i += 1
    while (i u< 6)

__security_check_cookie(rax_1 ^ &var_168)
return result
