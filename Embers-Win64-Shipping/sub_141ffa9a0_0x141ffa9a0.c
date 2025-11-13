// 函数: sub_141ffa9a0
// 地址: 0x141ffa9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *(arg2 + 0x50)
float zmm11[0x4] = *(arg2 + 0x60)
float zmm15[0x4] = *(arg2 + 0x70)

if (*(arg2 + 0x32) != 0)
    void* rcx = *(arg3 + 0xb0)
    
    if (rcx != 0)
        float zmm0[0x4] = data_143dbb200
        float zmm5[0x4] = *(rcx + 0x1c0)
        float zmm12[0x4] = data_14399f668
        float temp0_1[0x4] = _mm_unpacklo_ps(data_143dbb1fc, 0)
        float temp0_2[0x4] = _mm_unpacklo_ps(data_143dbb1f8, zmm0[0].q)
        float temp0_3[0x4] = _mm_unpacklo_ps(zmm12, data_14399f670[0].q)
        float temp0_4[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
        float temp0_6[0x4] = _mm_unpacklo_ps(temp0_3, _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, temp0_6), data_143f3f3a0, 1)) == 0)
            float temp0_139[0x4] = _mm_mul_ps(temp0_6, zmm11)
            float temp0_140[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
            float temp0_141[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
            float temp0_142[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            float temp0_144[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0xc9), temp0_140)
            float temp0_147[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0xd2), temp0_141), temp0_144)
            float temp0_148[0x4] = _mm_add_ps(temp0_147, temp0_147)
            float temp0_149[0x4] = _mm_mul_ps(temp0_142, temp0_148)
            float temp0_151[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_148, temp0_148, 0xd2), temp0_141)
            float temp0_152[0x4] = _mm_shuffle_ps(temp0_148, temp0_148, 0xc9)
            float temp0_153[0x4] = _mm_add_ps(temp0_149, temp0_139)
            zmm11 = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(temp0_151, _mm_mul_ps(temp0_152, temp0_140)), temp0_153), 
                temp0_4)
        else
            float temp0_10[0x4] = _mm_add_ps(zmm5, zmm5)
            float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
            float temp0_13[0x4] = _mm_mul_ps(zmm5, temp0_10)
            float temp0_15[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_10, temp0_10, 0x29))
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x12)
            float temp0_19[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0x1a), 
                _mm_shuffle_ps(temp0_13, temp0_13, 1))
            float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), temp0_16)
            float zmm10[0x4] = data_143f3f2a0
            float temp0_22[0x4] = _mm_sub_ps(zmm10, temp0_19)
            float temp0_23[0x4] = _mm_add_ps(temp0_21, temp0_15)
            float temp0_24[0x4] = _mm_sub_ps(temp0_15, temp0_21)
            float temp0_25[0x4] = _mm_mul_ps(temp0_22, temp0_6)
            float temp0_26[0x4] = _mm_mul_ps(temp0_12, temp0_24)
            float temp0_27[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
            float zmm1[0x4] = __andps_xmmxud_memxud(temp0_25, data_143f3f2b0)
            float temp0_29[0x4] = _mm_mul_ps(temp0_23, temp0_6)
            float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, zmm1, 0x32)
            float temp0_31[0x4] = _mm_shuffle_ps(temp0_26, zmm1, 0x10)
            float temp0_33[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, zmm1, 0), temp0_30, 0x82)
            float temp0_35[0x4] =
                _mm_shuffle_ps(temp0_31, _mm_shuffle_ps(temp0_29, zmm1, 0x31), 0x88)
            float temp0_37[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, temp0_26, 0x12), zmm1, 0xe8)
            float temp0_38[0x4] = _mm_add_ps(zmm6, zmm6)
            zmm10[0].q = temp0_4 u>> 0x40
            float temp0_39[0x4] = _mm_shuffle_ps(temp0_4, zmm10, 0xc4)
            float temp0_40[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_41[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
            float temp0_42[0x4] = _mm_mul_ps(zmm6, temp0_38)
            float temp0_44[0x4] = _mm_mul_ps(temp0_27, _mm_shuffle_ps(temp0_38, temp0_38, 0x29))
            float temp0_45[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x12)
            float temp0_46[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x1a)
            float temp0_47[0x4] = _mm_mul_ps(temp0_40, temp0_45)
            float temp0_49[0x4] = _mm_add_ps(temp0_46, _mm_shuffle_ps(temp0_42, temp0_42, 1))
            float var_f8[0x4] = temp0_47
            float temp0_50[0x4] = _mm_add_ps(temp0_47, temp0_44)
            float temp0_51[0x4] = __subps_xmmps_memps(temp0_44, var_f8)
            float temp0_52[0x4] = _mm_sub_ps(zmm10, temp0_49)
            float temp0_53[0x4] = _mm_mul_ps(temp0_50, zmm15)
            float temp0_54[0x4] = _mm_mul_ps(temp0_41, temp0_51)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_52, zmm15), data_143f3f2b0)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, zmm1, 0x32)
            float temp0_59[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, zmm1, 0), temp0_57, 0x82)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_53, zmm1, 0x31)
            float temp0_62[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_54, zmm1, 0x10), temp0_60, 0x88)
            float temp0_63[0x4] = _mm_shuffle_ps(temp0_53, temp0_54, 0x12)
            float temp0_64[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_63, zmm1, 0xe8)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_37)
            float temp0_68[0x4] = _mm_mul_ps(temp0_64, temp0_35)
            zmm10[0].q = zmm11 u>> 0x40
            float temp0_69[0x4] = _mm_shuffle_ps(zmm11, zmm10, 0xc4)
            float temp0_70[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0)
            float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xff), temp0_39)
            float temp0_74[0x4] = _mm_add_ps(temp0_68, _mm_mul_ps(temp0_70, temp0_33))
            float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0), temp0_33)
            float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_67)
            float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_37)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_72)
            float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x55), temp0_35)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
            float var_e8[0x4] = temp0_80
            float temp0_84[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
            float temp0_85[0x4] = _mm_add_ps(temp0_82, temp0_76)
            float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_35)
            float temp0_87[0x4] = _mm_mul_ps(temp0_83, temp0_39)
            float temp0_88[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
            float temp0_89[0x4] = _mm_add_ps(temp0_85, temp0_79)
            float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_33)
            float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_37)
            float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_87)
            float temp0_94[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
            float temp0_95[0x4] = _mm_add_ps(temp0_86, temp0_90)
            float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_39)
            float temp0_97[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0)
            int96_t var_d8_1 = temp0_93[0].12
            float temp0_98[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
            float temp0_99[0x4] = _mm_add_ps(temp0_95, temp0_92)
            float temp0_100[0x4] = _mm_mul_ps(temp0_98, temp0_35)
            float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_37)
            float temp0_103[0x4] = _mm_mul_ps(temp0_97, temp0_33)
            float temp0_104[0x4] = _mm_add_ps(temp0_99, temp0_96)
            float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xff), temp0_39)
            float temp0_107[0x4] = _mm_add_ps(temp0_100, temp0_103)
            int96_t var_c8_1 = temp0_104[0].12
            int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_107, temp0_102), temp0_106)[0].12
            int128_t zmm10_1
            float zmm12_1[0x4]
            float zmm14_1[0x4]
            float zmm15_1[0x4]
            zmm10_1, zmm12_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_e8, 0x322bcc77)
            float zmm2_1[0x4] = var_e8[0]
            float zmm1_1 = var_e8[1]
            zmm14_1 = _mm_and_ps(_mm_cmpeq_ps(zmm14_1, _mm_mul_ps(zmm15_1, zmm12_1), 2), 
                data_143f3f390 ^ zmm10_1)
            uint32_t zmm0_1[0x4] = var_e8[2]
            zmm14_1 ^= data_143f3f390
            zmm2_1[0] = zmm2_1[0] * zmm14_1[0]
            zmm1_1 = zmm1_1 * zmm14_1[0]
            zmm0_1[0] = zmm0_1[0] f* zmm14_1[0]
            var_e8[0] = zmm2_1[0]
            var_e8[1] = zmm1_1
            float temp0_113[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
            zmm1_1 = var_d8_1:4.d * temp0_113[0]
            var_e8[2] = zmm0_1[0]
            zmm0_1 = var_d8_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_113[0]
            float zmm3_1 = var_d8_1.d * temp0_113[0]
            zmm2_1 = var_c8_1.d
            var_d8_1:4.d = zmm1_1
            var_d8_1:8.d = zmm0_1[0]
            zmm0_1 = var_c8_1:8.d
            float temp0_114[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
            zmm1_1 = var_c8_1:4.d * temp0_114[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_114[0]
            zmm2_1[0] = zmm2_1[0] * temp0_114[0]
            var_c8_1:4.d = zmm1_1
            var_c8_1:8.d = zmm0_1[0]
            var_d8_1.d = zmm3_1
            var_c8_1.d = zmm2_1[0]
            sub_14077e4a0(&var_f8, &var_e8)
            float zmm6_1[0x4] = var_f8
            float zmm5_1[0x4] = data_143f3f380
            float temp0_115[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
            float temp0_117[0x4] = _mm_add_ps(temp0_115, _mm_shuffle_ps(temp0_115, temp0_115, 0x4e))
            float temp0_119[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0x39), temp0_117)
            float temp0_120[0x4] = _mm_rsqrt_ps(temp0_119)
            float temp0_121[0x4] = _mm_mul_ps(temp0_119, zmm5_1)
            float temp0_126[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_121)), 
                    temp0_120), 
                temp0_120)
            float temp0_129[0x4] =
                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_126, temp0_126), temp0_121))
            float temp0_131[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_119, 2)
            float temp0_133[0x4] = _mm_add_ps(_mm_mul_ps(temp0_129, temp0_126), temp0_126)
            float temp0_134[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
            zmm5_1 = _mm_and_ps(_mm_mul_ps(temp0_133, zmm6_1) ^ data_143f3f370, temp0_131)
                ^ data_143f3f370
            zmm11 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_134[0].q)
            var_f8 = zmm5_1

float temp0_158[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
int32_t rax_3 = arg4[1].d
uint32_t result = zx.d(*(arg2 + 0x14))
float temp0_159[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
float var_104 = temp0_158[0]

if (result.b == 0)
    result = temp0_159[0]
    *arg4 = zmm11[0].q
    arg4[1].d = result
else if (result.b == 1)
    zmm11[0] = zmm11[0] f+ *arg4
    temp0_158[0] = temp0_158[0] f+ *(arg4 + 4)
    temp0_159[0] = temp0_159[0] f+ arg4[1].d
    *arg4 = zmm11[0]
    *(arg4 + 4) = temp0_158[0]
    arg4[1].d = temp0_159[0]

if ((*(arg2 + 0x31) & 4) != 0)
    arg4[1].d = rax_3[0]

return result
