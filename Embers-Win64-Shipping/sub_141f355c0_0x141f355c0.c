// 函数: sub_141f355c0
// 地址: 0x141f355c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int128_t* rbx = arg3

if (arg4 == 0)
    *arg2 = *arg3
    arg2[1] = arg3[1]
    arg2[2] = arg3[2]
else
    float var_f8[0x4]
    (*(*arg4 + 0x408))(arg4, &var_f8, arg5, 0)
    float zmm14[0x4] = rbx[2]
    float var_d8[0x4]
    float zmm6[0x4]
    float zmm7[0x4]
    float zmm13[0x4]
    float var_e8[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, var_d8), data_143f3b4e0, 1)) == 0)
        float zmm4_1[0x4] = var_f8
        float zmm2[0x4] = *rbx
        float zmm3[0x4] = rbx[1]
        float temp0_133[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
        float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), temp0_133)
        float temp0_136[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        float temp0_137[0x4] = _mm_mul_ps(zmm3, var_d8)
        float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143f3b3b0)
        float temp0_139[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        zmm13 = _mm_mul_ps(zmm14, var_d8)
        float temp0_142[0x4] = _mm_add_ps(temp0_138, _mm_mul_ps(temp0_139, zmm2))
        float temp0_144[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        float temp0_147[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143f3b3a0)
        float temp0_149[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
        float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f3b390)
        float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_148)
        float temp0_152[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
        float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xd2), temp0_152)
        zmm6 = _mm_add_ps(temp0_151, temp0_150)
        float temp0_158[0x4] =
            _mm_sub_ps(temp0_154, _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_149))
        float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
        float temp0_160[0x4] = _mm_mul_ps(temp0_139, temp0_159)
        float temp0_162[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_159, temp0_159, 0xd2), temp0_152)
        float temp0_163[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
        float temp0_164[0x4] = _mm_add_ps(temp0_160, temp0_137)
        zmm7 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_162, _mm_mul_ps(temp0_163, temp0_149)), temp0_164), var_e8)
    else
        float zmm1[0x4] = var_f8
        float temp0_4[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xc9)
        float temp0_5[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        _mm_mul_ps(zmm14, var_d8)
        float zmm11[0x4] = data_143f3b4b0
        float temp0_8[0x4] = _mm_mul_ps(temp0_5, zmm1)
        float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x29), temp0_6)
        float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
        float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x12), temp0_11)
        float temp0_16[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
        float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_10)
        float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_14)
        float temp0_19[0x4] = _mm_sub_ps(zmm11, temp0_16)
        float temp0_20[0x4] = _mm_mul_ps(temp0_17, var_d8)
        float temp0_21[0x4] = _mm_mul_ps(temp0_4, temp0_18)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_19, var_d8), data_143f3b4c0)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
        float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_24, 0x82)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
        float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_27, 0x88)
        float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
        zmm1 = *rbx
        zmm11[0].q = var_e8 u>> 0x40
        float temp0_32[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_33[0x4] = _mm_shuffle_ps(var_e8, zmm11, 0xc4)
        float temp0_34[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_37[0x4] = _mm_mul_ps(zmm1, temp0_32)
        float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x29), temp0_35)
        float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x12), temp0_36)
        float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
            _mm_shuffle_ps(temp0_37, temp0_37, 1))
        float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
        float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
        float temp0_47[0x4] = _mm_sub_ps(zmm11, temp0_44)
        float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm14)
        float temp0_49[0x4] = _mm_mul_ps(temp0_34, temp0_46)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm14), data_143f3b4c0)
        float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
            _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
        float temp0_58[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0x10), temp0_55, 0x88)
        float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_29)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
        float zmm5_1[0x4] = rbx[1]
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0xe8)
        float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_31)
        zmm11[0].q = zmm5_1 u>> 0x40
        float temp0_64[0x4] = _mm_shuffle_ps(zmm5_1, zmm11, 0xc4)
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_33)
        float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_26))
        float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_26)
        float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
        float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_31)
        float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
        float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_29)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
        float var_148[0x4] = temp0_75
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
        int96_t var_138_1 = temp0_88[0].12
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
        float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_29)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_31)
        float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_26)
        float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_33)
        float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
        int96_t var_128_1 = temp0_99[0].12
        int96_t var_118_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
        int128_t zmm11_1
        float zmm15_1[0x4]
        zmm11_1, zmm13, zmm15_1 = sub_1407740e0(&var_148, 0x322bcc77)
        zmm15_1 =
            _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13, 2), data_143f3b4d0 ^ zmm11_1) ^ data_143f3b4d0
        float zmm2_1[0x4] = var_148[0]
        float zmm1_1 = var_148[1]
        uint32_t zmm0_1[0x4] = var_148[2]
        zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
        zmm1_1 = zmm1_1 * zmm15_1[0]
        zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
        var_148[0] = zmm2_1[0]
        float temp0_107[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
        var_148[1] = zmm1_1
        zmm1_1 = var_138_1:4.d * temp0_107[0]
        var_148[2] = zmm0_1[0]
        zmm0_1 = var_138_1:8.d
        zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
        float zmm3_1 = var_138_1.d * temp0_107[0]
        zmm2_1 = var_128_1.d
        var_138_1:4.d = zmm1_1
        var_138_1:8.d = zmm0_1[0]
        zmm0_1 = var_128_1:8.d
        float temp0_108[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
        zmm1_1 = var_128_1:4.d * temp0_108[0]
        zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
        zmm2_1[0] = zmm2_1[0] * temp0_108[0]
        var_128_1:4.d = zmm1_1
        var_128_1:8.d = zmm0_1[0]
        var_138_1.d = zmm3_1
        var_128_1.d = zmm2_1[0]
        uint32_t var_108[0x4]
        sub_14077e4a0(&var_108, &var_148)
        uint32_t zmm5_2[0x4] = var_108
        zmm6 = data_143f3b3d0
        uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
        zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
        uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
        zmm1_2 = _mm_rsqrt_ps(zmm4_2)
        uint32_t zmm3_2[0x4] = _mm_mul_ps(zmm4_2, zmm6)
        float temp0_120[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), zmm1_2), 
            zmm1_2)
        float temp0_123[0x4] =
            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), zmm3_2))
        uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
        float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
        float temp0_128[0x4] = _mm_unpacklo_ps(var_118_1:4.d, 0)
        zmm6 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_2) ^ data_143f3b3c0, zmm0_2) ^ data_143f3b3c0
        zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_118_1.d, var_118_1:8.d[0].q), temp0_128[0].q)
    char rax_4 = *(arg1 + 0x14c)
    
    if ((rax_4 & 4) != 0)
        zmm7 = rbx[1]
    
    if ((rax_4 & 8) != 0)
        zmm6 = *rbx
    
    if ((rax_4 & 0x10) != 0)
        zmm13 = rbx[2]
    
    *arg2 = zmm6
    arg2[1] = zmm7
    arg2[2] = zmm13

__security_check_cookie(rax_1 ^ &var_178)
return arg2
