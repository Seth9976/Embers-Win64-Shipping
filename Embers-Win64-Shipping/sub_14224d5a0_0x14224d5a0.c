// 函数: sub_14224d5a0
// 地址: 0x14224d5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *(arg1 + 0xb8)

if (r11 == 0)
label_14224dc30:
    *arg2 = data_143dbb0c0
    arg2[1] = data_143dbb0d0
    arg2[2] = data_143dbb0e0
else
    int32_t r10_1 = *(arg1 + 0xd8)
    int32_t r9_1 = 0
    int64_t* rdi_5
    
    if (r10_1 s> 0)
        int64_t* rdx = *(arg1 + 0xd0)
        
        while (arg3 != *rdx)
            r9_1 += 1
            rdx += 0x24
            
            if (r9_1 s>= r10_1)
                goto label_14224d620
        
        rdi_5 = *(*(arg1 + 0xc0) + sx.q(r9_1) * 0x10 + 8)
    
    uint32_t var_118[0x4]
    
    if (r10_1 s<= 0 || rdi_5 == 0)
    label_14224d620:
        void* rdi_4 = ((sx.q(*(r11 + 0x494)) + 0x45) << 4) + r11
        int32_t rax_3 = sub_141f5e0e0(r11, arg3)
        
        if (rax_3 s< 0 || rax_3 s>= *(rdi_4 + 8))
            goto label_14224dc30
        
        float zmm1[0x4] = data_143f515b0
        void* rdx_2 = *(arg1 + 0xb8)
        zmm1[0].q = zx.o(0) u>> 0x40
        float temp0_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
        float (* rcx_4)[0x4] = sx.q(rax_3) * 0x30 + *rdi_4
        *arg2 = temp0_1
        arg2[1] = zx.o(0)
        arg2[2] = __andps_xmmxud_memxud(data_143f515b0, data_143f515c0)
        float zmm13[0x4] = rcx_4[2]
        float zmm9[0x4] = *(rdx_2 + 0x1e0)
        float zmm3[0x4]
        float zmm5[0x4]
        float zmm8[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm9), data_143f519a0, 1)) == 0)
            float zmm6[0x4] = *(rdx_2 + 0x1c0)
            zmm3 = *rcx_4
            zmm5 = rcx_4[1]
            zmm8 = *(rdx_2 + 0x1d0)
            float temp0_135[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_135)
            float temp0_138[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            float temp0_139[0x4] = _mm_mul_ps(zmm9, zmm5)
            float temp0_140[0x4] = __mulps_xmmps_memps(temp0_137, data_143f51580)
            float temp0_141[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_142[0x4] = _mm_mul_ps(zmm13, zmm9)
            float temp0_143[0x4] = _mm_mul_ps(temp0_141, zmm3)
            arg2[2] = temp0_142
            float temp0_144[0x4] = _mm_add_ps(temp0_140, temp0_143)
            float temp0_146[0x4] = _mm_mul_ps(temp0_138, _mm_shuffle_ps(zmm3, zmm3, 0x4e))
            float temp0_149[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), _mm_shuffle_ps(zmm3, zmm3, 0xb1))
            float temp0_150[0x4] = __mulps_xmmps_memps(temp0_146, data_143f51570)
            float temp0_151[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xd2)
            float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f51560)
            float temp0_154[0x4] = _mm_add_ps(_mm_add_ps(temp0_144, temp0_150), temp0_152)
            float temp0_155[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xc9)
            *arg2 = temp0_154
            float temp0_156[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            float temp0_157[0x4] = _mm_mul_ps(temp0_155, temp0_156)
            float temp0_158[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_160[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_151, temp0_158), temp0_157)
            float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
            float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
            float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
            float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_158)
            float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_156)
            float temp0_166[0x4] = _mm_mul_ps(temp0_161, temp0_141)
            arg2[1] = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(temp0_164, temp0_165), _mm_add_ps(temp0_166, temp0_139)), 
                zmm8)
        else
            zmm3 = *(rdx_2 + 0x1c0)
            zmm8 = *(rdx_2 + 0x1d0)
            float temp0_6[0x4] = _mm_add_ps(zmm3, zmm3)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
            float zmm10[0x4] = data_143f515b0
            float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
            float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            float temp0_10[0x4] = _mm_mul_ps(zmm3, temp0_6)
            float temp0_12[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(temp0_6, temp0_6, 0x29))
            float temp0_14[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(temp0_6, temp0_6, 0x12))
            float temp0_17[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x1a), 
                _mm_shuffle_ps(temp0_10, temp0_10, 1))
            float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_12)
            _mm_mul_ps(zmm13, zmm9)
            float temp0_20[0x4] = _mm_sub_ps(temp0_12, temp0_14)
            float temp0_21[0x4] = _mm_sub_ps(zmm10, temp0_17)
            float temp0_22[0x4] = _mm_mul_ps(temp0_18, zmm9)
            float temp0_23[0x4] = _mm_mul_ps(temp0_7, temp0_20)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_21, zmm9), data_143f515c0)
            float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, zmm1, 0x32)
            float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0), temp0_26, 0x82)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_22, zmm1, 0x31)
            float temp0_31[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, zmm1, 0x10), temp0_29, 0x88)
            float temp0_33[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_23, 0x12), zmm1, 0xe8)
            zmm1 = *rcx_4
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_34[0x4] = _mm_add_ps(zmm1, zmm1)
            float temp0_35[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float temp0_36[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
            float temp0_37[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_38[0x4] = _mm_mul_ps(temp0_34, zmm1)
            float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x29), temp0_37)
            float temp0_41[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x12), temp0_41)
            float temp0_46[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0x1a), 
                _mm_shuffle_ps(temp0_38, temp0_38, 1))
            float temp0_47[0x4] = _mm_add_ps(temp0_43, temp0_40)
            float temp0_48[0x4] = _mm_sub_ps(temp0_40, temp0_43)
            float temp0_49[0x4] = _mm_sub_ps(zmm10, temp0_46)
            float temp0_50[0x4] = _mm_mul_ps(temp0_47, zmm13)
            float temp0_51[0x4] = _mm_mul_ps(temp0_36, temp0_48)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_49, zmm13), data_143f515c0)
            float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1, 0), 
                _mm_shuffle_ps(temp0_51, zmm1, 0x32), 0x82)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_50, zmm1, 0x31)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
            float temp0_60[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, zmm1, 0x10), temp0_57, 0x88)
            float temp0_61[0x4] = _mm_mul_ps(temp0_58, temp0_31)
            float temp0_62[0x4] = _mm_shuffle_ps(temp0_50, temp0_51, 0x12)
            zmm5 = rcx_4[1]
            float temp0_63[0x4] = _mm_shuffle_ps(temp0_62, zmm1, 0xe8)
            float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_33)
            zmm10[0].q = zmm5 u>> 0x40
            float temp0_66[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
            float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
            float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_35)
            float temp0_71[0x4] = _mm_add_ps(temp0_61, _mm_mul_ps(temp0_67, temp0_28))
            float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_28)
            float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_65)
            float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_33)
            float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_69)
            float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_31)
            float temp0_80[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
            float var_d8[0x4] = temp0_77
            float temp0_81[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
            float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
            float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_31)
            float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_35)
            float temp0_85[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
            float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_76)
            float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_28)
            float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_33)
            float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
            float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
            float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
            float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_35)
            float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
            int96_t var_c8_1 = temp0_90[0].12
            float temp0_95[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
            float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_89)
            float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_31)
            float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_33)
            float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_28)
            float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
            float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_35)
            float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
            int96_t var_b8_1 = temp0_101[0].12
            int96_t var_a8_1 = _mm_add_ps(_mm_add_ps(temp0_104, temp0_99), temp0_103)[0].12
            int128_t zmm10_1
            float zmm12_1[0x4]
            float zmm14_1[0x4]
            zmm10_1, zmm12_1, zmm14_1 = sub_1407740e0(&var_d8, 0x322bcc77)
            zmm14_1 = _mm_and_ps(_mm_cmpeq_ps(zmm14_1, zmm12_1, 2), data_143f51990 ^ zmm10_1)
                ^ data_143f51990
            float zmm2_1[0x4] = var_d8[0]
            float zmm1_1 = var_d8[1]
            uint32_t zmm0_1[0x4] = var_d8[2]
            zmm2_1[0] = zmm2_1[0] * zmm14_1[0]
            zmm1_1 = zmm1_1 * zmm14_1[0]
            zmm0_1[0] = zmm0_1[0] f* zmm14_1[0]
            var_d8[0] = zmm2_1[0]
            float temp0_109[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
            var_d8[1] = zmm1_1
            zmm1_1 = var_c8_1:4.d * temp0_109[0]
            var_d8[2] = zmm0_1[0]
            zmm0_1 = var_c8_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
            float zmm3_1 = var_c8_1.d * temp0_109[0]
            zmm2_1 = var_b8_1.d
            var_c8_1:4.d = zmm1_1
            var_c8_1:8.d = zmm0_1[0]
            zmm0_1 = var_b8_1:8.d
            float temp0_110[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
            zmm1_1 = var_b8_1:4.d * temp0_110[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_110[0]
            zmm2_1[0] = zmm2_1[0] * temp0_110[0]
            var_b8_1:4.d = zmm1_1
            var_b8_1:8.d = zmm0_1[0]
            var_c8_1.d = zmm3_1
            var_b8_1.d = zmm2_1[0]
            sub_14077e4a0(&var_118, &var_d8)
            uint32_t zmm6_1[0x4] = var_118
            float zmm5_1[0x4] = data_143f515a0
            uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
            zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
            uint32_t zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
            zmm1_2 = _mm_rsqrt_ps(zmm4_1)
            float temp0_117[0x4] = _mm_mul_ps(zmm4_1, zmm5_1)
            float temp0_122[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_117)), 
                    zmm1_2), 
                zmm1_2)
            float temp0_125[0x4] =
                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_117))
            uint32_t zmm0_2[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
            float temp0_129[0x4] = _mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122)
            float temp0_130[0x4] = _mm_unpacklo_ps(var_a8_1:4.d, 0)
            zmm5_1 =
                _mm_and_ps(_mm_mul_ps(temp0_129, zmm6_1) ^ data_143f51590, zmm0_2) ^ data_143f51590
            float temp0_134[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_a8_1.d, var_a8_1:8.d[0].q), temp0_130[0].q)
            arg2[2] = zmm12_1
            arg2[1] = temp0_134
            *arg2 = zmm5_1
    else
        void var_f8
        
        if ((*(*rdi_5 + 0x1b8))(rdi_5, &var_118) == 0)
            sub_1417cbc40(arg2, (*(*rdi_5 + 0xa0))(rdi_5, &var_f8))
        else
            sub_1417cbc40(arg2, &var_118)

return arg2
