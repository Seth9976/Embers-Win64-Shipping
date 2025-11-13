// 函数: sub_141736270
// 地址: 0x141736270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_f8[0x4]
uint32_t (* rax)[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]
float zmm15[0x4]
rax, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_141743c50(arg1 + 0x20, &var_f8)
int64_t var_118[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
zmm6, zmm7, zmm8 = sub_1416fa1e0(&var_118, arg3, rax)
int64_t* rcx_2 = *(arg1 + 0x10)
int64_t rbx_1 = sx.q(arg2[1].d)
uint32_t result = (*(*rcx_2 + 0x78))(rcx_2, arg2, &var_118)

if (arg2[1].d s> rbx_1.d)
    int64_t rcx_3 = *arg2
    float var_28_1[0x4] = zmm6
    float var_38_1[0x4] = zmm7
    float var_48_1[0x4] = zmm8
    zmm8 = *(arg1 + 0x40)
    int64_t rbx_2 = rbx_1 << 6
    float var_98_1[0x4] = zmm13
    float var_a8_1[0x4] = zmm14
    float var_b8_1[0x4] = zmm15
    zmm14 = *(rcx_3 + rbx_2 + 0x30)
    result = _mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), data_143ef7530, 1))
    float zmm3_1[0x4]
    
    if (result == 0)
        float zmm4_1[0x4] = *(arg1 + 0x20)
        float zmm2_1[0x4] = *(rcx_3 + rbx_2 + 0x10)
        zmm3_1 = *(rcx_3 + rbx_2 + 0x20)
        float temp0_133[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b)
        float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), temp0_133)
        float temp0_136[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        float temp0_137[0x4] = _mm_mul_ps(zmm3_1, zmm8)
        float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143ef72e0)
        float temp0_139[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        zmm13 = _mm_mul_ps(zmm14, zmm8)
        float temp0_142[0x4] = _mm_add_ps(temp0_138, _mm_mul_ps(temp0_139, zmm2_1))
        float temp0_144[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
        float temp0_147[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
        float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143ef72d0)
        float temp0_149[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
        float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143ef72c0)
        float temp0_151[0x4] = _mm_add_ps(temp0_142, temp0_148)
        float temp0_152[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
        float temp0_153[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
        float temp0_154[0x4] = _mm_mul_ps(temp0_149, temp0_153)
        zmm6 = _mm_add_ps(temp0_151, temp0_150)
        float temp0_158[0x4] =
            _mm_sub_ps(temp0_154, _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_152))
        float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
        float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
        float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_153)
        float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_152)
        float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_139)
        zmm7 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), 
            *(arg1 + 0x30))
    else
        zmm3_1 = *(arg1 + 0x20)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
        float temp0_5[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
        float var_58_1[0x4] = zmm9
        zmm9 = *(arg1 + 0x30)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
        float temp0_8[0x4] = _mm_mul_ps(zmm3_1, temp0_5)
        float temp0_10[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_5, temp0_5, 0x29))
        float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(temp0_5, temp0_5, 0x12))
        float temp0_15[0x4] =
            _mm_add_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x1a), _mm_shuffle_ps(temp0_8, temp0_8, 1))
        _mm_mul_ps(zmm14, zmm8)
        float var_78_1[0x4] = zmm11
        zmm11 = data_143ef72f0
        float temp0_17[0x4] = _mm_sub_ps(zmm11, temp0_15)
        float temp0_18[0x4] = _mm_add_ps(temp0_12, temp0_10)
        float temp0_19[0x4] = _mm_sub_ps(temp0_10, temp0_12)
        zmm3_1 = *(rcx_3 + rbx_2 + 0x10)
        float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm8)
        float temp0_21[0x4] = _mm_mul_ps(temp0_4, temp0_19)
        float temp0_22[0x4] = _mm_mul_ps(temp0_18, zmm8)
        float zmm1_1[0x4] = __andps_xmmxud_memxud(temp0_20, data_143ef7300)
        float temp0_24[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x32)
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x10)
        float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1_1, 0), temp0_25, 0x82)
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, _mm_shuffle_ps(temp0_22, zmm1_1, 0x31), 0x88)
        float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_21, 0x12), zmm1_1, 0xe8)
        float temp0_33[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
        zmm11[0].q = zmm9 u>> 0x40
        float temp0_34[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
        float temp0_37[0x4] = _mm_mul_ps(zmm3_1, temp0_33)
        float temp0_39[0x4] = _mm_mul_ps(temp0_24, _mm_shuffle_ps(temp0_33, temp0_33, 0x29))
        float temp0_41[0x4] = _mm_mul_ps(temp0_35, _mm_shuffle_ps(temp0_33, temp0_33, 0x12))
        float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
            _mm_shuffle_ps(temp0_37, temp0_37, 1))
        float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
        float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
        float temp0_47[0x4] = _mm_sub_ps(zmm11, temp0_44)
        float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm14)
        float temp0_49[0x4] = _mm_mul_ps(temp0_36, temp0_46)
        zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm14), data_143ef7300)
        float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1_1, 0), 
            _mm_shuffle_ps(temp0_49, zmm1_1, 0x32), 0x82)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_48, zmm1_1, 0x31)
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
        float temp0_58[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1_1, 0x10), temp0_55, 0x88)
        float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_30)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
        float zmm5_1[0x4] = *(rcx_3 + rbx_2 + 0x20)
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1_1, 0xe8)
        float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
        zmm11[0].q = zmm5_1 u>> 0x40
        float temp0_64[0x4] = _mm_shuffle_ps(zmm5_1, zmm11, 0xc4)
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
        float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_28))
        float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_28)
        float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
        float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_32)
        float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
        float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
        var_f8 = temp0_75
        float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
        float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
        float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
        float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_34)
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
        float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
        float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_28)
        float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_32)
        float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
        float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
        float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_34)
        float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
        int96_t var_e8_1 = temp0_88[0].12
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
        float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
        float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_28)
        float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
        float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
        int96_t var_d8_1 = temp0_99[0].12
        int96_t var_c8_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
        int512_t zmm9_1
        int512_t zmm10_1
        float zmm11_1[0x4]
        int512_t zmm12_1
        zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13, zmm15 = sub_1407740e0(&var_f8, 0x322bcc77)
        zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm13, 2), data_143ef7520 ^ zmm11_1) ^ data_143ef7520
        float zmm2_2[0x4] = var_f8[0]
        float zmm1_2 = var_f8[1]
        uint32_t zmm0_2[0x4] = var_f8[2]
        zmm2_2[0] = zmm2_2[0] * zmm15[0]
        zmm1_2 = zmm1_2 * zmm15[0]
        zmm0_2[0] = zmm0_2[0] f* zmm15[0]
        var_f8[0] = zmm2_2[0]
        float temp0_107[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        var_f8[1] = zmm1_2
        zmm1_2 = var_e8_1:4.d * temp0_107[0]
        var_f8[2] = zmm0_2[0]
        zmm0_2 = var_e8_1:8.d
        zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
        float zmm3_2 = var_e8_1.d * temp0_107[0]
        zmm2_2 = var_d8_1.d
        var_e8_1:4.d = zmm1_2
        var_e8_1:8.d = zmm0_2[0]
        zmm0_2 = var_d8_1:8.d
        float temp0_108[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        zmm1_2 = var_d8_1:4.d * temp0_108[0]
        zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
        zmm2_2[0] = zmm2_2[0] * temp0_108[0]
        var_d8_1:4.d = zmm1_2
        var_d8_1:8.d = zmm0_2[0]
        var_e8_1.d = zmm3_2
        var_d8_1.d = zmm2_2[0]
        uint32_t var_128[0x4]
        result = sub_14077e4a0(&var_128, &var_f8)
        uint32_t zmm5_2[0x4] = var_128
        zmm6 = data_143ef72b0
        rcx_3 = *arg2
        zmm12_1.o = zmm12
        zmm10_1.o = zmm10
        zmm9_1.o = var_58_1
        uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
        zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
        uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
        zmm1_3 = _mm_rsqrt_ps(zmm4_2)
        uint32_t zmm3_3[0x4] = _mm_mul_ps(zmm4_2, zmm6)
        float temp0_120[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), zmm3_3)), zmm1_3), 
            zmm1_3)
        float temp0_123[0x4] =
            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), zmm3_3))
        uint32_t zmm0_3[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
        float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
        float temp0_128[0x4] = _mm_unpacklo_ps(var_c8_1:4.d, 0)
        zmm6 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_2) ^ data_143ef72a0, zmm0_3) ^ data_143ef72a0
        zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_c8_1.d, var_c8_1:8.d[0].q), temp0_128[0].q)
    *(rbx_2 + rcx_3 + 0x10) = zmm6
    *(rbx_2 + rcx_3 + 0x20) = zmm7
    *(rbx_2 + rcx_3 + 0x30) = zmm13

return result
