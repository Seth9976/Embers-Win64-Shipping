// 函数: sub_141d1d310
// 地址: 0x141d1d310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg4
int64_t rdi = sx.q(arg1)

if (*(rdi + result) == 0)
    int64_t rax = *(arg3 + 8)
    int64_t rbx_2 = rdi * 6
    float zmm6[0x4] = *(rax + (rbx_2 << 3))
    float zmm13[0x4] = *(rax + (rbx_2 << 3) + 0x10)
    float zmm14[0x4] = *(rax + (rbx_2 << 3) + 0x20)
    int32_t rcx = *(*(arg2 + 8) + (rdi << 2))
    
    if (rcx != sx.d(data_143a21158))
        int64_t* var_118_1 = arg5
        sub_141d1d310(rcx)
        int128_t* rdx_2 = sx.q(*(*(arg2 + 8) + (rdi << 2))) * 0x30 + *arg5
        float zmm7[0x4] = rdx_2[2]
        float zmm5_1[0x4] = *rdx_2
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm7), data_143f37040, 1)) == 0)
            float temp0_135[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), _mm_shuffle_ps(zmm6, zmm6, 0x1b))
            float temp0_136[0x4] = _mm_mul_ps(zmm13, zmm7)
            float temp0_137[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
            float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143f36f60)
            float temp0_139[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            zmm14 = _mm_mul_ps(zmm14, zmm7)
            float temp0_142[0x4] = _mm_add_ps(temp0_138, _mm_mul_ps(temp0_139, zmm6))
            float temp0_144[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm6, zmm6, 0x4e))
            float temp0_147[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), _mm_shuffle_ps(zmm6, zmm6, 0xb1))
            float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143f36f50)
            float temp0_149[0x4] = __mulps_xmmps_memps(temp0_147, data_143f36f40)
            float temp0_150[0x4] = _mm_add_ps(temp0_142, temp0_148)
            float temp0_151[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_152[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            zmm6 = _mm_add_ps(temp0_150, temp0_149)
            float temp0_158[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xd2), temp0_152), 
                _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_151))
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_152)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_151)
            float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_139)
            zmm13 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_136)), 
                rdx_2[1])
        else
            float temp0_4[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
            float zmm8[0x4] = rdx_2[1]
            float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
            float temp0_7[0x4] = _mm_mul_ps(zmm5_1, temp0_4)
            float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_6)
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
            float temp0_13[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x1a), 
                _mm_shuffle_ps(temp0_7, temp0_7, 1))
            float zmm10[0x4] = data_143f36f70
            float temp0_15[0x4] = _mm_mul_ps(temp0_10, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff))
            _mm_mul_ps(zmm7, zmm14)
            float temp0_17[0x4] = _mm_add_ps(temp0_15, temp0_9)
            float temp0_18[0x4] = _mm_sub_ps(temp0_9, temp0_15)
            float temp0_19[0x4] = _mm_add_ps(zmm6, zmm6)
            float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm7)
            float temp0_21[0x4] = _mm_mul_ps(temp0_5, temp0_18)
            float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm6)
            float zmm1[0x4] =
                __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_13), zmm7), data_143f36f80)
            float temp0_26[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
            float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_26, 0x82)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
            float temp0_31[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_29, 0x88)
            float temp0_33[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x29)
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_35[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float temp0_37[0x4] = _mm_mul_ps(temp0_34, _mm_shuffle_ps(zmm6, zmm6, 4))
            float temp0_38[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x1a)
            float temp0_39[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_41[0x4] = _mm_add_ps(temp0_38, _mm_shuffle_ps(temp0_22, temp0_22, 1))
            float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0x12), temp0_39)
            float temp0_44[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
            float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_37)
            float temp0_46[0x4] = _mm_sub_ps(temp0_37, temp0_43)
            float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm14)
            float temp0_48[0x4] = _mm_mul_ps(temp0_44, temp0_46)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_41), zmm14), 
                data_143f36f80)
            float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0), 
                _mm_shuffle_ps(temp0_48, zmm1, 0x32), 0x82)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_47, zmm1, 0x31)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_58[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0x10), temp0_55, 0x88)
            float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_31)
            zmm10[0].q = zmm13 u>> 0x40
            float temp0_60[0x4] = _mm_shuffle_ps(zmm13, zmm10, 0xc4)
            float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0), temp0_28)
            float temp0_64[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, temp0_48, 0x12), zmm1, 0xe8)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xaa)
            float temp0_66[0x4] = _mm_add_ps(temp0_59, temp0_62)
            float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_35)
            float temp0_69[0x4] = _mm_mul_ps(temp0_65, temp0_33)
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_28)
            float temp0_72[0x4] = _mm_add_ps(temp0_66, temp0_69)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_33)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_68)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_31)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
            float var_f8[0x4] = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_31)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_35)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_28)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_33)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_35)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
            int96_t var_e8_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_31)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_33)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_28)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), temp0_35)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
            int96_t var_d8_1 = temp0_99[0].12
            int96_t var_c8_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            int128_t zmm10_1
            float zmm12_1[0x4]
            float zmm15_1[0x4]
            zmm10_1, zmm12_1, zmm15_1 = sub_1407740e0(&var_f8, 0x322bcc77)
            float zmm2_1[0x4] = var_f8[0]
            zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm12_1, 2), data_143f37030 ^ zmm10_1)
                ^ data_143f37030
            zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
            uint32_t zmm0_2[0x4] = var_f8[2]
            float zmm1_1 = var_f8[1] * zmm15_1[0]
            zmm0_2[0] = zmm0_2[0] f* zmm15_1[0]
            var_f8[0] = zmm2_1[0]
            float temp0_107[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
            var_f8[1] = zmm1_1
            zmm1_1 = var_e8_1:4.d * temp0_107[0]
            var_f8[2] = zmm0_2[0]
            zmm0_2 = var_e8_1:8.d
            zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
            float zmm3_1 = var_e8_1.d * temp0_107[0]
            zmm2_1 = var_d8_1.d
            var_e8_1:4.d = zmm1_1
            var_e8_1:8.d = zmm0_2[0]
            zmm0_2 = var_d8_1:8.d
            float temp0_108[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
            zmm1_1 = var_d8_1:4.d * temp0_108[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
            zmm2_1[0] = zmm2_1[0] * temp0_108[0]
            var_d8_1:4.d = zmm1_1
            var_d8_1:8.d = zmm0_2[0]
            var_e8_1.d = zmm3_1
            var_d8_1.d = zmm2_1[0]
            uint32_t var_108[0x4]
            sub_14077e4a0(&var_108, &var_f8)
            uint32_t zmm5_2[0x4] = var_108
            zmm14 = zmm12_1
            zmm6 = data_143f36f30
            uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
            uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
            zmm1_2 = _mm_rsqrt_ps(zmm4_2)
            uint32_t zmm3_2[0x4] = _mm_mul_ps(zmm4_2, zmm6)
            float temp0_120[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), 
                    zmm1_2), 
                zmm1_2)
            float temp0_123[0x4] =
                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), zmm3_2))
            uint32_t zmm0_3[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_c8_1:4.d, 0)
            zmm6 =
                _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_2) ^ data_143f36f20, zmm0_3) ^ data_143f36f20
            zmm13 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_c8_1.d, var_c8_1:8.d[0].q), temp0_128[0].q)
    
    int64_t rax_5 = *arg5
    *(rax_5 + (rbx_2 << 3)) = zmm6
    *(rax_5 + (rbx_2 << 3) + 0x10) = zmm13
    *(rax_5 + (rbx_2 << 3) + 0x20) = zmm14
    result = *arg4
    *(rdi + result) = 1

return result
