// 函数: sub_141f3a7d0
// 地址: 0x141f3a7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int128_t* rsi_1 = *arg3
int128_t* rdi_1 = *arg4
int32_t i = 1
*rdi_1 = *rsi_1
rdi_1[1] = rsi_1[1]
rdi_1[2] = rsi_1[2]

if (*(arg1 + 0x7f8) s<= 1)
    return 

int64_t r14_1 = 2
float zmm8[0x4]
float var_58_1[0x4] = zmm8
float zmm9[0x4]
float var_68_1[0x4] = zmm9
float zmm13[0x4]
float var_a8_1[0x4] = zmm13
float zmm14[0x4]
float var_b8_1[0x4] = zmm14
float zmm15[0x4] = data_143f3b630
float zmm6[0x4]
float var_38_1[0x4] = zmm6
float zmm7[0x4]
float var_48_1[0x4] = zmm7
float zmm10[0x4]
float var_78_1[0x4] = zmm10
float zmm11[0x4]
float var_88_1[0x4] = zmm11
float zmm12[0x4]
float var_98_1[0x4] = zmm12

do
    uint64_t rcx = zx.q(*(*(arg1 + 0x7f0) + r14_1))
    uint64_t rbx_2 = rcx * 6
    void* rdx_2 = &rdi_1[sx.q(*(*(arg2 + 0x1a8) + rcx * 0xc + 8)) * 3]
    zmm13 = *(rsi_1 + (rbx_2 << 3) + 0x20)
    zmm9 = *(rdx_2 + 0x20)
    float zmm5[0x4]
    float zmm3[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm9), data_143f3b4e0, 1)) == 0)
        zmm5 = *rdx_2
        float zmm2[0x4] = *(rsi_1 + (rbx_2 << 3))
        zmm3 = *(rsi_1 + (rbx_2 << 3) + 0x10)
        zmm7 = *(rdx_2 + 0x10)
        float temp0_133[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_134[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
        float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_133)
        float temp0_137[0x4] = _mm_mul_ps(zmm9, zmm3)
        float temp0_138[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_139[0x4] = __mulps_xmmps_memps(temp0_136, data_143f3b3b0)
        float temp0_140[0x4] = _mm_mul_ps(temp0_138, zmm2)
        float temp0_141[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
        float temp0_142[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
        float temp0_143[0x4] = _mm_mul_ps(zmm13, zmm9)
        float temp0_144[0x4] = _mm_add_ps(temp0_139, temp0_140)
        float temp0_146[0x4] = _mm_mul_ps(temp0_134, _mm_shuffle_ps(zmm5, zmm5, 0x55))
        float temp0_148[0x4] = _mm_mul_ps(temp0_142, _mm_shuffle_ps(zmm5, zmm5, 0xaa))
        float temp0_149[0x4] = __mulps_xmmps_memps(temp0_146, data_143f3b3a0)
        float temp0_150[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xc9)
        float temp0_151[0x4] = __mulps_xmmps_memps(temp0_148, data_143f3b390)
        float temp0_152[0x4] = _mm_add_ps(temp0_144, temp0_149)
        *(rdi_1 + (rbx_2 << 3) + 0x20) = temp0_143
        zmm8 = _mm_add_ps(temp0_152, temp0_151)
        float temp0_154[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        float temp0_155[0x4] = _mm_mul_ps(temp0_150, temp0_154)
        float temp0_156[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        float temp0_158[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_141, temp0_156), temp0_155)
        float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
        float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
        float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_156)
        float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_154)
        float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_138)
        *(rdi_1 + (rbx_2 << 3) + 0x10) = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), zmm7)
    else
        zmm3 = *rdx_2
        zmm10 = data_143f3b4b0
        zmm8 = *(rdx_2 + 0x10)
        float temp0_4[0x4] = _mm_add_ps(zmm3, zmm3)
        float temp0_5[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_8[0x4] = _mm_mul_ps(zmm3, temp0_4)
        float temp0_10[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
        float temp0_13[0x4] = _mm_mul_ps(temp0_7, temp0_11)
        float temp0_15[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
        _mm_mul_ps(zmm9, zmm13)
        float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_10)
        float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_13)
        float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_15)
        float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm9)
        float temp0_21[0x4] = _mm_mul_ps(temp0_19, zmm9)
        float temp0_22[0x4] = _mm_mul_ps(temp0_5, temp0_18)
        float zmm1[0x4] = __andps_xmmxud_memxud(temp0_21, data_143f3b4c0)
        float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), 
            _mm_shuffle_ps(temp0_22, zmm1, 0x32), 0x82)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
        float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0x10), temp0_27, 0x88)
        float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_22, 0x12), zmm1, 0xe8)
        zmm1 = *(rsi_1 + (rbx_2 << 3))
        zmm10[0].q = zmm8 u>> 0x40
        float temp0_32[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_33[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
        float temp0_34[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_36[0x4] = _mm_mul_ps(temp0_32, zmm1)
        float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x29), temp0_35)
        float temp0_39[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_40[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x1a)
        float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x12), temp0_39)
        float temp0_44[0x4] = _mm_add_ps(temp0_40, _mm_shuffle_ps(temp0_36, temp0_36, 1))
        float temp0_45[0x4] = _mm_add_ps(temp0_42, temp0_38)
        float temp0_46[0x4] = _mm_sub_ps(temp0_38, temp0_42)
        float temp0_47[0x4] = _mm_sub_ps(zmm10, temp0_44)
        float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm13)
        float temp0_49[0x4] = _mm_mul_ps(temp0_34, temp0_46)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm13), data_143f3b4c0)
        float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
            _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, zmm1, 0x10)
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_56, 0x88)
        float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_29)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
        zmm5 = *(rsi_1 + (rbx_2 << 3) + 0x10)
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0xe8)
        float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_31)
        zmm10[0].q = zmm5 u>> 0x40
        float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_33)
        float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_26))
        float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_26)
        float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
        float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_31)
        float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
        float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_29)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
        float var_108[0x4] = temp0_75
        float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
        float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
        float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_29)
        float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_33)
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
        float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
        float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_26)
        float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_31)
        float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
        float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
        float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_33)
        float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
        int96_t var_f8_1 = temp0_88[0].12
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
        float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_29)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_31)
        float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_26)
        float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_33)
        float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
        int96_t var_e8_1 = temp0_99[0].12
        int96_t var_d8_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
        zmm10, zmm12, zmm14, zmm15 = sub_1407740e0(&var_108, 0x322bcc77)
        float zmm2_1[0x4] = var_108[0]
        float zmm1_1 = var_108[1]
        zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm12, 2), data_143f3b4d0 ^ zmm10) ^ data_143f3b4d0
        zmm2_1[0] = zmm2_1[0] * zmm14[0]
        uint32_t zmm0_1[0x4] = var_108[2]
        zmm0_1[0] = zmm0_1[0] f* zmm14[0]
        zmm1_1 = zmm1_1 * zmm14[0]
        var_108[0] = zmm2_1[0]
        float temp0_107[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
        var_108[2] = zmm0_1[0]
        zmm0_1 = var_f8_1:8.d
        zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
        var_108[1] = zmm1_1
        zmm1_1 = var_f8_1:4.d * temp0_107[0]
        float zmm3_1 = var_f8_1.d * temp0_107[0]
        zmm2_1 = var_e8_1.d
        var_f8_1:8.d = zmm0_1[0]
        zmm0_1 = var_e8_1:8.d
        var_f8_1:4.d = zmm1_1
        float temp0_108[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
        zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
        zmm2_1[0] = zmm2_1[0] * temp0_108[0]
        zmm1_1 = var_e8_1:4.d * temp0_108[0]
        var_e8_1:8.d = zmm0_1[0]
        var_f8_1.d = zmm3_1
        var_e8_1.d = zmm2_1[0]
        var_e8_1:4.d = zmm1_1
        uint32_t var_118[0x4]
        sub_14077e4a0(&var_118, &var_108)
        zmm5 = var_118
        zmm8 = data_143f3b3d0
        float temp0_109[0x4] = _mm_mul_ps(zmm5, zmm5)
        float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
        float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
        float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
        float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm8)
        float temp0_120[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                temp0_114), 
            temp0_114)
        float temp0_123[0x4] =
            _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
        float temp0_125[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
        float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
        float temp0_128[0x4] = _mm_unpacklo_ps(var_d8_1:4.d, 0)
        zmm8 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5) ^ data_143f3b3c0, temp0_125) ^ data_143f3b3c0
        *(rdi_1 + (rbx_2 << 3) + 0x10) =
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_d8_1.d, var_d8_1:8.d[0].q), temp0_128[0].q)
        var_118 = zmm8
        *(rdi_1 + (rbx_2 << 3) + 0x20) = zmm12
    *(rdi_1 + (rbx_2 << 3)) = zmm8
    zmm5 = data_143f3b3d0
    i += 1
    float temp0_169[0x4] = _mm_mul_ps(zmm8, zmm8)
    r14_1 += 2
    float temp0_171[0x4] = _mm_add_ps(temp0_169, _mm_shuffle_ps(temp0_169, temp0_169, 0x4e))
    float temp0_173[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0x39), temp0_171)
    float temp0_174[0x4] = _mm_rsqrt_ps(temp0_173)
    float temp0_175[0x4] = _mm_mul_ps(temp0_173, zmm5)
    float temp0_180[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_174, temp0_174), temp0_175)), 
            temp0_174), 
        temp0_174)
    float temp0_183[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_180, temp0_180), temp0_175))
    float temp0_184[0x4] = _mm_cmpeq_ps(zmm15, temp0_173, 2)
    *(rdi_1 + (rbx_2 << 3)) = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_183, temp0_180), temp0_180), zmm8) ^ data_143f3b3c0, 
        temp0_184) ^ data_143f3b3c0
while (i s< *(arg1 + 0x7f8))
