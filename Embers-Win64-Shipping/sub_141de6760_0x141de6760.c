// 函数: sub_141de6760
// 地址: 0x141de6760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_20 = arg4
int32_t arg_28
int32_t r10 = arg_28

if (r10 == 0)
    float zmm8[0x4] = arg1[2]
    float zmm14[0x4] = arg3[2]
    result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), data_143f39140, 1)))
    float zmm5[0x4]
    
    if (result.d == 0)
        zmm5 = *arg1
        float zmm2[0x4] = *arg3
        float zmm7[0x4] = arg1[1]
        float zmm4[0x4] = arg3[1]
        float temp0_133[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_133)
        float temp0_136[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        float temp0_137[0x4] = _mm_mul_ps(zmm4, zmm8)
        float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143f39110)
        float temp0_139[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_140[0x4] = _mm_mul_ps(zmm14, zmm8)
        float temp0_141[0x4] = _mm_mul_ps(temp0_139, zmm2)
        arg3[2] = temp0_140
        float temp0_142[0x4] = _mm_add_ps(temp0_138, temp0_141)
        float temp0_144[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        float temp0_147[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143f39100)
        float temp0_149[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f390f0)
        float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_148)
        float temp0_152[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        float temp0_153[0x4] = _mm_add_ps(temp0_151, temp0_150)
        float temp0_155[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_149)
        *arg3 = temp0_153
        float temp0_158[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xd2), temp0_152), temp0_155)
        float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
        float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
        float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_152)
        float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_149)
        float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_139)
        arg3[1] = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), zmm7)
    else
        float zmm3[0x4] = *arg1
        float temp0_4[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        float temp0_5[0x4] = _mm_add_ps(zmm3, zmm3)
        float zmm9[0x4] = arg1[1]
        float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_8[0x4] = _mm_mul_ps(zmm3, temp0_5)
        float temp0_10[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_5, temp0_5, 0x29))
        float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(temp0_5, temp0_5, 0x12))
        float temp0_15[0x4] =
            _mm_add_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x1a), _mm_shuffle_ps(temp0_8, temp0_8, 1))
        float zmm11[0x4] = data_143f39070
        float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_10)
        float temp0_17[0x4] = _mm_sub_ps(zmm11, temp0_15)
        _mm_mul_ps(zmm14, zmm8)
        float temp0_19[0x4] = _mm_sub_ps(temp0_10, temp0_12)
        zmm3 = *arg3
        float temp0_20[0x4] = _mm_mul_ps(temp0_16, zmm8)
        float temp0_21[0x4] = _mm_mul_ps(temp0_17, zmm8)
        float temp0_22[0x4] = _mm_mul_ps(temp0_4, temp0_19)
        float temp0_23[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float zmm1[0x4] = __andps_xmmxud_memxud(temp0_21, data_143f39050)
        float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), 
            _mm_shuffle_ps(temp0_22, zmm1, 0x32), 0x82)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
        float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0x10), temp0_28, 0x88)
        float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_22, 0x12), zmm1, 0xe8)
        float temp0_33[0x4] = _mm_add_ps(zmm3, zmm3)
        zmm11[0].q = zmm9 u>> 0x40
        float temp0_34[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
        float temp0_37[0x4] = _mm_mul_ps(zmm3, temp0_33)
        float temp0_39[0x4] = _mm_mul_ps(temp0_23, _mm_shuffle_ps(temp0_33, temp0_33, 0x29))
        float temp0_41[0x4] = _mm_mul_ps(temp0_35, _mm_shuffle_ps(temp0_33, temp0_33, 0x12))
        float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
            _mm_shuffle_ps(temp0_37, temp0_37, 1))
        float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
        float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
        float temp0_47[0x4] = _mm_sub_ps(zmm11, temp0_44)
        float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm14)
        float temp0_49[0x4] = _mm_mul_ps(temp0_36, temp0_46)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm14), data_143f39050)
        float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
            _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
        float temp0_58[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0x10), temp0_55, 0x88)
        float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_30)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
        zmm5 = arg3[1]
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0xe8)
        float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
        zmm11[0].q = zmm5 u>> 0x40
        float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
        float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_27))
        float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_27)
        float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
        float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_32)
        float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
        float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
        float var_e8[0x4] = temp0_75
        float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
        float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
        float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
        float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_34)
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
        float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
        float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
        float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_32)
        float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
        float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
        float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_34)
        float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
        int96_t var_d8_1 = temp0_88[0].12
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
        float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
        float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
        float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
        float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
        int96_t var_c8_1 = temp0_99[0].12
        int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
        int128_t zmm11_1
        float zmm13_1[0x4]
        float zmm15_1[0x4]
        zmm11_1, zmm13_1, zmm15_1 = sub_1407740e0(&var_e8, 0x322bcc77)
        uint32_t zmm0_1[0x4] = data_143f39130 ^ zmm11_1
        float temp0_105[0x4] = _mm_cmpeq_ps(zmm15_1, zmm13_1, 2)
        float zmm2_1[0x4] = var_e8[0]
        float zmm1_1 = var_e8[1]
        zmm15_1 = _mm_and_ps(temp0_105, zmm0_1) ^ data_143f39130
        zmm0_1 = var_e8[2]
        zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
        zmm1_1 = zmm1_1 * zmm15_1[0]
        zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
        var_e8[0] = zmm2_1[0]
        float temp0_107[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
        var_e8[1] = zmm1_1
        zmm1_1 = var_d8_1:4.d * temp0_107[0]
        var_e8[2] = zmm0_1[0]
        zmm0_1 = var_d8_1:8.d
        zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
        float zmm3_1 = var_d8_1.d * temp0_107[0]
        zmm2_1 = var_c8_1.d
        var_d8_1:4.d = zmm1_1
        var_d8_1:8.d = zmm0_1[0]
        zmm0_1 = var_c8_1:8.d
        float temp0_108[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
        zmm1_1 = var_c8_1:4.d * temp0_108[0]
        zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
        zmm2_1[0] = zmm2_1[0] * temp0_108[0]
        var_c8_1:4.d = zmm1_1
        var_c8_1:8.d = zmm0_1[0]
        var_d8_1.d = zmm3_1
        var_c8_1.d = zmm2_1[0]
        uint32_t var_f8[0x4]
        result = sub_14077e4a0(&var_f8, &var_e8)
        uint32_t zmm6_1[0x4] = var_f8
        float zmm5_1[0x4] = data_143f390d0
        uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
        arg_28 = 0x322bcc77
        zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
        uint32_t zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
        zmm1_2 = _mm_rsqrt_ps(zmm4_1)
        uint32_t zmm3_2[0x4] = _mm_mul_ps(zmm4_1, zmm5_1)
        float temp0_120[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_2)), zmm1_2), 
            zmm1_2)
        float temp0_123[0x4] =
            _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), zmm3_2))
        uint32_t zmm0_2[0x4] = arg_28
        zmm0_2 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0), zmm4_1, 2)
        float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
        float temp0_128[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
        zmm5_1 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm6_1) ^ data_143f390c0, zmm0_2) ^ data_143f390c0
        zmm3_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_128[0].q)
        arg3[2] = zmm13_1
        arg3[1] = zmm3_2
        *arg3 = zmm5_1
else if (r10 != 1)
    if (r10 == 2)
        result = sub_141ea4020(*(arg2 + 0x10), &arg_28, &arg_20)
        char* rdx = sx.q(arg_28)
        
        if (rdx.d != 0xffffffff)
            result = *(arg2 + 0x18)
            
            if (*(rdx + result) != 0)
                sub_140ae0920(arg3, rdx * 0x30 + *arg2)
            else
                result = sub_141a98300(arg2, rdx.d)
                sub_140ae0920(arg3, rdx * 0x30 + *arg2)
    else if (r10 == 3)
        result = *(arg2 + 0x18)
        char* rsi_1 = sx.q(arg4)
        
        if (*(rsi_1 + result) != 0)
            sub_140ae0920(arg3, rsi_1 * 0x30 + *arg2)
        else
            result = sub_141a98300(arg2, arg4)
            sub_140ae0920(arg3, rsi_1 * 0x30 + *arg2)

return result
